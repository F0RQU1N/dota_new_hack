#pragma once

#pragma warning(disable : 4191)
#pragma warning(disable : 6387)
#pragma warning(disable : 6031)
#pragma warning(disable : 6385)
#pragma warning(disable : 6011)
#pragma warning(disable : 4099)
#pragma warning(disable : 26495)
#pragma warning(disable : 26451)
#pragma warning(disable : 26800)
#pragma warning(disable : 26813)

#define SPDLOG_USE_STD_FORMAT
#define SPDLOG_WCHAR_TO_UTF8_SUPPORT
#define SPDLOG_EOL ""

#define PPCAT_NX(a,b) a##b
#define PPCAT(a,b) PPCAT_NX(a,b)
#define PAD(sz)\
private:\
std::byte PPCAT( _pad, __COUNTER__ )[ sz ];\
public:

#define PPAD(sz) std::byte PPCAT(_pad, __COUNTER__)[sz];

#include <windows.h>
#include <iostream>
#include <format>
#include <queue>
#include <string_view>
#include <vector>
#include <array>
#include <filesystem>
#include <cstddef>
#include <d3d11.h>
#include <regex>
#include <spdlog/spdlog.h>
#include <spdlog/stopwatch.h>

#include "core/lib/minhook/MinHook.h"
#pragma comment(lib, "libMinHook.x64.lib")

#include "core/sdk_game/vector.hpp"
#include "core/sdk_game/color.hpp"

#include "core/global.hpp"
#include "core/util/util.hpp"
#include "core/util/address_wrapper.hxx"
#include "core/util/mapbox.hxx"
#include "core/util/drawing.h"

#include "core/sdk_game/NormalClass.hpp"
#include "core/sdk_game/SomeFunction.h"

#include "core/sdk_game/valve/CUtlSymbol.hpp"
#include "core/sdk_game/valve/CUtlTSHash.hpp"
#include "core/sdk_game/valve/CUtlString.hpp"
#include "core/sdk_game/valve/CUtlMemory.hpp"
#include "core/sdk_game/valve/CUtlVector.hpp"
#include "core/sdk_game/valve/CUtlRBTree.hpp"
#include "core/sdk_game/valve/CUtlMap.hpp"
#include "core/sdk_game/valve/CUtlDelegate.hpp"
#include "core/sdk_game/valve/VMatrix.hpp"

#include "core/sdk_game/IAppSystem.hpp"
#include "core/sdk_game/CHandle.hpp"
#include "core/sdk_game/panorama/CLayoutManager.h"
#include "core/sdk_game/panorama/CPanelStyle.hpp"
#include "core/sdk_game/panorama/CPanoramaUIEngine.hpp"
#include "core/sdk_game/panorama/CUIPanel.hpp"
#include "core/sdk_game/panorama/CPanel2D.hpp"
#include "core/sdk_game/panorama/CUIInput.hpp"
#include "core/sdk_game/panorama/CUILength.hpp"
#include "core/sdk_game/panorama/CUIRenderDeviceSource2.hpp"
#include "core/sdk_game/ISchemaSystem.hpp"
#include "core/sdk_game/IEngineClient.hpp"
#include "core/sdk_game/CSource2Client.hpp"
#include "core/sdk_game/C_BaseEntity.hpp"
#include "core/sdk_game/C_BaseModelEntity.hpp"
#include "core/sdk_game/C_BaseCombatCharacter.hpp"
#include "core/sdk_game/CDOTA_BaseNPC.hpp"
#include "core/sdk_game/C_DOTA_MapTree.hpp"
#include "core/sdk_game/CGameEventManager.h"
#include "core/sdk_game/CDOTA_Camera.hpp"
#include "core/sdk_game/ICVar.hpp"
#include "core/sdk_game/CGameEntitySystem.hpp"
#include "core/sdk_game/C_DOTAPlayerController.hpp"
#include "core/sdk_game/ISteamClient.hpp"
#include "core/sdk_game/ISteamFriends.h"
#include "core/sdk_game/CDOTA_ParticleManager.hpp"
#include "core/sdk_game/C_DOTA_PlayerResource.h"
#include "core/sdk_game/IResourceSystem.hpp"
#include "core/sdk_game/C_DOTAGamerules.hpp"
#include "core/sdk_game/INetChan.h"
#include "core/sdk_game/CNetworkMessages.hpp"
#include "core/sdk_game/valve/CBaseFileSystem.hpp"
#include "core/sdk_game/C_DOTA_ProjectileManager.hpp"
#include "core/sdk_game/CVScriptGameSystem.hpp"
#include "core/sdk_game/CLocalize.h"
#include "core/sdk_game/CRenderGameSystem.hh"
#include "core/sdk_game/Data.hpp"
#include "core/sdk_game/CDOTAItemDefintion.hpp"
#include "core/sdk_game/CDOTAInput.h"
#include "core/functions.hpp"

#ifdef _DEBUG
#pragma comment(lib, "core/lib/protobuf/libprotobufd.lib")
#pragma comment(lib, "core/lib/spdlog/spdlogd.lib")
#else
#pragma comment(lib, "core/lib/protobuf/libprotobuf.lib")
#pragma comment(lib, "core/lib/spdlog/spdlog.lib")
#endif