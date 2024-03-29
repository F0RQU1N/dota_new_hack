#pragma once

#include <cstdint>
#include <set>
#include "sdk_game/vector.hpp"
#include <unordered_map>
#include <d3d11.h>

namespace global {
	inline HMODULE client, tier0;
	inline std::unordered_map<std::string, ID3D11ShaderResourceView*> g_mapSpellIcons, g_mapHeroIcons, g_mapItemIcons;
	inline HINSTANCE hModule;

	namespace patterns {
		inline std::uintptr_t
			DOTAParticleManager,
			CImagePanel__SetImage,
			CEconItem__DeserializeItemProtobuf,
			CSlider__SetValue,
			CTextEntry__GetText,
			CPanel2D__DeleteAsync,
			CTextEntry__SetText,
			CDOTA_UI_AbilityImage__SetAbilityName,
			CDOTA_UI_ItemImage__SetItemByName,
			CDOTA_UI_HeroImage__SetHeroName;
	}
}