#include "Events.h"

// Defined here to keep everything together
#include "CGameClient.h"
#include "CPlayer.h"
#include "Globals.h"

using namespace TLAPI;

// Global
// Setup a dummy class to setup the WndProc event
EVENT_DEF(_GLOBAL, LRESULT, WndProc, (HWND, UINT, WPARAM, LPARAM));

// EffectGroupManager
EVENT_DEF(CEffectGroupManager, void, EffectGroupManager_CreateAffix, (CEffectGroupManager*, u32, u32, u32, CList<CAffix*>&));

// EffectManager
EVENT_DEF(CEffectManager, void, EffectManagerCreateEffect, (CEffect*, CEffectManager*));
EVENT_DEF(CEffectManager, void, EffectManager_AddEffectToEquipment, (CEffectManager*, CEquipment*, CEffect*));

// GameClient
EVENT_DEF(CGameClient, void, GameClientLoadMap, (CGameClient*, u32));
EVENT_DEF(CGameClient, void, GameClientProcessObjects, (CGameClient*, PVOID, PVOID, PVOID));
EVENT_DEF(CGameClient, void, GameClient_SaveGame, (CGameClient*, u32, u32, bool*));

// Equipment
EVENT_DEF(CEquipment, void, EquipmentInitialize, (CEquipment*, CItemSaveState*));
EVENT_DEF(CEquipment, void, EquipmentEnchant, (u32, CEquipment*, u32, u32, u32));
EVENT_DEF(CEquipment, void, Equipment_AddMagicModifier, (CEquipment*, u32, u32));
EVENT_DEF(CEquipment, void, Equipment_AddAffix, (CEquipment*, CAffix*, u32, CEquipment*, float));

// ResourceManager
EVENT_DEF(CResourceManager, void, ResourceManagerInitializePlayer, (CResourceManager*, u32, u32));
EVENT_DEF(CResourceManager, void, ResouceManagerCreateCharacter, (CResourceManager*, u64, u32, bool));
EVENT_DEF(CResourceManager, void, ResourceManagerCreateCharacterByName, (CResourceManager*, const wchar_t*, const wchar_t*, u32, u32));
EVENT_DEF(CResourceManager, void, ResourceManagerCreateSomething, (CResourceManager*, u64, u32, u32, u32));

// Level
EVENT_DEF(CLevel, void, LevelCharacterInitialize, (CLevel*, CCharacter*, Vector3*, u32));
EVENT_DEF(CLevel, void, LevelCreateAstarPathfinding, (CAstarPathfinder*, float unk0, float unk1, u32 unk2, u32 unk3, PVOID unk4, PVOID unk5, float unk6));

// Character
EVENT_DEF(CCharacter, void, CharacterSetAlignment, (CCharacter*, u32));
EVENT_DEF(CCharacter, void, CharacterSetDestination, (CCharacter*, CLevel*, float, float));
EVENT_DEF(CCharacter, void, CharacterSetAction, (CCharacter*, u32));
EVENT_DEF(CCharacter, void, CharacterAddMinion, (CCharacter*, CCharacter*));
EVENT_DEF(CCharacter, void, CharacterStrike, (CCharacter*, CLevel*, CCharacter*, PVOID, u32, float, float, u32));

// Player
EVENT_DEF(CPlayer, void, PlayerUseSkill, (u32 retVal, CPlayer* player, u64 skill));

// GenericModel
EVENT_DEF(CGenericModel, void, GenericModelGetPosition, (CGenericModel*, Vector3, u32));

// Layout
EVENT_DEF(CLayout, void, LayoutSetPosition, (CLayout*, const Vector3));
