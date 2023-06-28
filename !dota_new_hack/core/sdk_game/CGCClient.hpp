#pragma once

#include "NormalClass.hpp"
#include "../lib/protobuf/files/dota_gcmessages_common_lobby.pb.h"

typedef int InventoryChangeReason_t;
class CDOTALobby;

enum ESOCacheEvent
{
	eSOCacheEvent_None = 0,
	eSOCacheEvent_Subscribed = 1,
	eSOCacheEvent_Unsubscribed = 2,
	eSOCacheEvent_Resubscribed = 3,
	eSOCacheEvent_Incremental = 4,
	eSOCacheEvent_ListenerAdded = 5,
	eSOCacheEvent_ListenerRemoved = 6,
};

struct SOID_t
{
	uint64_t m_steamid;
	uint32_t m_iType;
	uint32_t m_iPadding;
};

struct dota_dynamic_lobby_t {
	void* pad;
	CSODOTALobby* dynamic_lobby;
};
struct dota_static_lobby_t {
	void* pad;
	CSODOTALobby* static_lobby;
};
struct lobby_data_t {
	uint64_t unk; // 0x0
	uint64_t unk2; // 0x8
	uint64_t unk3; // 0x10
	CDOTALobby* m_dota_lobby; // 0x18
	dota_dynamic_lobby_t* m_dynamic; //0x20
	dota_static_lobby_t* m_static; // 0x28
};

class CGCClientSharedObject : public VClass {
public:

};

class CSharedObject : public VClass {
public:

};

class CGCClientSharedObjectCache
{
public:
	uint64_t m_pVTable; // 0x0
	char unk_8[80]; // 0x8
	// CDOTAGameAccountPlus* m_pAccountPlus; // 0x60

	virtual void unk0( void ) = 0;
	virtual void unk1( void ) = 0;
	virtual bool AddObjectToCache( CGCClientSharedObject* object ) = 0;
	virtual void unk3( void ) = 0;
	virtual void unk4( void ) = 0;
	virtual void unk5( void ) = 0;
	virtual void unk6( void ) = 0;
	virtual void unk7( void ) = 0;


};

class CSharedObjectListener {
public:
	virtual uint64_t SOCreated( SOID_t soid, CGCClientSharedObject*, ESOCacheEvent ) = 0;
	virtual uint64_t SOUpdated( SOID_t soid, CGCClientSharedObject*, ESOCacheEvent ) = 0;
};

class CDOTALobby : public CSharedObject {
public:
	uint64_t lobby_id( ) {
		return *reinterpret_cast<uint64_t*>( Member<uintptr_t>( 0x18 ) + 0x1D8 );
	}
};

class CDOTAGCClientLobbyManager : public CSharedObjectListener {
public:
	int64_t some_digit; // 0x8
	lobby_data_t* lobby_data; // 0x10

	CDOTALobby* find_dota_lobby( ) {
		int v1; // r9d
		int v2; // eax
		__int64 i; // rdx
		__int64 v5; // rcx
		__int64 a1 = (uintptr_t)this;

		v1 = *(DWORD*)( a1 + 24 );
		v2 = 0;
		if ( v1 <= 0 )
			return 0;
		for ( i = 0; ; i += 64 )
		{
			if ( v2 >= 0 && v2 < v1 && v2 <= *(DWORD*)( a1 + 44 ) )
			{
				v5 = *(uintptr_t*)( a1 + 16 );
				if ( *(DWORD*)( i + v5 ) != v2 )
				{
					if ( *(uintptr_t*)( i + v5 + 24 ) )
						break;
				}
			}
			if ( ++v2 >= v1 )
				return 0;
		}
		return *(CDOTALobby**)( ( (__int64)v2 << 6 ) + v5 + 24 );
	}
};

class CDOTAGCClientSystem : public CSharedObjectListener {
public:
	char pad_0000[192]; // 0x0
	uint64_t m_pSteamUser; // 0xC0

	/*bool SendReadyUp( bool state = true ) {
		typedef bool( __fastcall* fn_t )( CDOTAGCClientSystem*, bool );
		return reinterpret_cast<fn_t>( global::patterns::CDOTAGCClientSystem__SendReadyUp )( this, state );
	}*/
};

class CGCClient : public VClass {
public:
	static auto GetInstanceImpl( )
	{
		static CGCClient* inst = nullptr;
		if ( !inst ) inst = static_cast<CGCClient*>( util::get_interface( "client.dll", "DOTA_CLIENT_GCCLIENT" ) );

		return inst;
	}
public:
	static auto& get( )
	{
		return *GetInstanceImpl( );
	}

	GETTER( CUtlVector<CSharedObjectListener*>, so_listeners, 0x270 );

	auto lobby_manager( ) {
		return MemberNotPtr<CDOTAGCClientLobbyManager>( 0x6d0 );
	}
};