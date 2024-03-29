#pragma once

#include "NormalClass.hpp"
#include <span>

#define FCVAR_NONE 0
#define FCVAR_LINKED_CONCOMMAND (1 << 0)
#define FCVAR_DEVELOPMENTONLY (1 << 1)
#define FCVAR_GAMEDLL (1 << 2)
#define FCVAR_CLIENTDLL (1 << 3)
#define FCVAR_HIDDEN (1 << 4)
#define FCVAR_PROTECTED (1 << 5)
#define FCVAR_SPONLY (1 << 6)
#define FCVAR_ARCHIVE (1 << 7)
#define FCVAR_NOTIFY (1 << 8)
#define FCVAR_USERINFO (1 << 9)
#define FCVAR_SOMETHING_THAT_HIDES (1 << 10) // Actual name unavailable
#define FCVAR_UNLOGGED (1 << 11)
#define FCVAR_MISSING1 (1 << 12)
#define FCVAR_REPLICATED (1 << 13)
#define FCVAR_CHEAT (1 << 14)
#define FCVAR_PER_USER (1 << 15)
#define FCVAR_DEMO (1 << 16)
#define FCVAR_DONTRECORD (1 << 17)
#define FCVAR_MISSING2 (1 << 18)
#define FCVAR_RELEASE (1 << 19)
#define FCVAR_MENUBAR_ITEM (1 << 20)
#define FCVAR_MISSING3 (1 << 21)
#define FCVAR_NOT_CONNECTED (1 << 22)
#define FCVAR_VCONSOLE_FUZZY_MATCHING (1 << 23)
#define FCVAR_SERVER_CAN_EXECUTE (1 << 24)
#define FCVAR_MISSING4 (1 << 25)
#define FCVAR_SERVER_CANNOT_QUERY (1 << 26)
#define FCVAR_VCONSOLE_SET_FOCUS (1 << 27)
#define FCVAR_CLIENTCMD_CAN_EXECUTE (1 << 28)
#define FCVAR_EXECUTE_PER_TICK (1 << 29)

struct ConCommand {
public:
	char* m_name; // 0x0
	char* m_description; // 0x8
	std::int32_t m_flags; // 0x10
private:
	std::int32_t unk0; // 0x14
public:
	void* m_member_accessor_ptr; // 0x18
	some_function m_callback; // 0x20
private:
	void* unk1; // 0x28
	void* unk2; // 0x30
};

enum class EConvarType : std::uint8_t
{
	Bool,
	Int16,
	UInt16,
	Int32,
	UInt32,
	Int64,
	UInt64,
	Float32,
	Float64,
	String,
	Color,
	Vector2,
	Vector3,
	Vector4,
	Qangle
};

union CVarValue_t
{
	bool boolean{};
	std::uint64_t u64;
	std::int64_t i64;
	std::uint32_t u32;
	std::int32_t i32;
	float flt;
	double dbl;
	const char* str;
	std::uint32_t clr_rgba;
	vector2d vec2d;
	vector3d vec3d;
	std::array<float, 4> vec4d;
	QAngle qangle;
};

class CVar
{
public:
	const char* m_name;
	CVar* m_nextnode;
	CVarValue_t* m_minvalue;
	CVarValue_t* m_maxvalue;
	const char* m_description;
	EConvarType m_var_type;
	std::uint32_t m_times_changed;
	std::int32_t m_flags;
private:
	int unk1;
public:
	int m_callbackindex;
private:
	int unk2;
public:
	CVarValue_t m_values;
	CVarValue_t m_defaultvalue;
};

struct CvarNode
{
	CVar* var;
	std::int32_t index;
};

struct ConVarID
{
	static inline constexpr auto BAD_ID = 0xFFFFFFFF;
	std::uint64_t impl{};
	void* var_ptr{};

	bool IsGood( ) const noexcept {
		return impl != BAD_ID;
	}

	void invalidate( ) noexcept {
		impl = BAD_ID;
	}
};

using t_CvarCallback = void( * )( const ConVarID& id, int unk1, const CVarValue_t* val, const CVarValue_t* old_val );

class ICVar : VClass {
	DEFINE_INTERFACE( ICVar, "tier0.dll", "VEngineCvar007" );

	CVar* register_convar( const char* name, std::int32_t* index = nullptr ) {
		static some_function RegisterConVar = util::get_absolute_address( util::find_pattern( global::client, "\xE8\xCC\xCC\xCC\xCC\x48\x63\x6E\x40", "", false ), 1, 5 );
		if ( !RegisterConVar.valid() ) return nullptr;
		uint64_t cvar_[ 2 ];
		RegisterConVar( cvar_, name, 0 );

		if ( index ) *index = cvar_[ 0 ];
		return (CVar*)cvar_[ 1 ];
	}

	std::span<CvarNode> cvars( ) {
		return std::span<CvarNode>{ Member<CvarNode*>( 0x40 ), Member<std::uint16_t>( 0x58 ) };
	}

	std::span<ConCommand> ccommands( ) {
		return std::span<ConCommand>{ Member<ConCommand*>( 0xD8 ), Member<std::uint16_t>( 0xF0 ) };
	}

	t_CvarCallback GetCVarCallback( int index )
	{
		if ( index ) {
			if ( auto table = Member<void*>( 0x80 ); table )
				return *reinterpret_cast<t_CvarCallback*>( reinterpret_cast<std::uintptr_t>( table ) + 24 * static_cast<unsigned long long>( index ) );
		}

		return nullptr;
	}

	CVar* find_convar( const std::string_view& name, int& index ) {
		for ( const auto& [cvar_node, idx] : this->cvars( ) )
		{
			if ( cvar_node && name == cvar_node->m_name ) {
				index = idx;
				return cvar_node;
			}
		}

		return nullptr;
	}

	template<typename T = CVar>
	T* operator[]( const std::string_view& name ) {
		for ( const auto& [cvar_node, idx] : this->cvars( ) )
		{
			if ( !cvar_node || !cvar_node->m_name )
				continue;

			if ( name == cvar_node->m_name )
				return cvar_node;
		}

		for ( auto& ccmd : this->ccommands( ) ) {

			if ( !( &ccmd ) || !ccmd.m_name )
				continue;

			if ( name == ccmd.m_name )
				return (T*)&ccmd;
		}


		return nullptr;
	}
};