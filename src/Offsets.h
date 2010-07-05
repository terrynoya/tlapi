#pragma once

#include "Hook.h"

#include "CGameClient.h"
#include "CResourceManager.h"
#include "CGenericModel.h"
#include "CEquipment.h"
#include "CItemSaveState.h"
#include "CTriggerUnit.h"
#include "CBreakable.h"
#include "CDamageShape.h"
#include "CDieMenu.h"
#include "CPlayer.h"
#include "CMonster.h"

namespace TLAPI {

  TLFUNC(ResouceManagerCreateCharacter,   CCharacter*, __thiscall, (CResourceManager*, u64, u32, bool));
  TLFUNC(LevelCharacterInitialize,        CCharacter*, __thiscall, (CLevel*, CCharacter*, Vector3*, u32));
  TLFUNC(ResourceManagerCreateUnitByName, CCharacter*, __thiscall, (CResourceManager*, const wchar_t*, const wchar_t*, u32, u32));
  TLFUNC(CharacterSetAlignment,           PVOID,       __thiscall, (CCharacter*, u32));
  TLFUNC(CharacterSetDestination,         PVOID,       __thiscall, (CCharacter*, CLevel*, float, float));
  TLFUNC(GenericModelGetPosition,         PVOID,       __thiscall, (CGenericModel*, Vector3, u32));
  TLFUNC(CharacterSetAction,              PVOID,       __thiscall, (CCharacter*, u32));
  TLFUNC(PlayerUseSkill,                  PVOID,       __thiscall, (CPlayer*, u64));
  TLFUNC(LayoutSetPosition,               PVOID,       __thiscall, (CLayout*, const Vector3));
  TLFUNC(CharacterAddMinion,              PVOID,       __thiscall, (CCharacter*, CCharacter*));
  TLFUNC(ResourceManagerCreateSomething,  PVOID,       __thiscall, (CResourceManager*, u64, u32, u32, u32));

  TLFUNC(CharacterSetAttack,              PVOID,       __thiscall, (CCharacter*, PVOID));

  TLFUNC(CharacterStrike,                 PVOID,       __thiscall, (CCharacter*, CLevel*, CCharacter*, PVOID, u32, float, float, u32));

  TLFUNC(MonsterProcessAI,                PVOID,       __thiscall, (CMonster*, float, PVOID));
  TLFUNC(PlayerSetAnimation,              PVOID,       __thiscall, (CPlayer*, u32, bool, float, float, u32));

  TLFUNC(PlayerDoAttack,                  PVOID,       __thiscall, (CPlayer*));

  TLFUNC(EquipmentInitialize,             PVOID,    __thiscall, (CEquipment*, CItemSaveState*));
  TLFUNC(ResourceManagerCreateEquipment,  PVOID,    __thiscall, (CResourceManager*, u64, u32, u32, u32));
  TLFUNC(PlayerPickupEquipment,           PVOID,    __thiscall, (CPlayer*, CEquipment*, CLevel*));
  TLFUNC(InventoryAddEquipment,           PVOID,    __thiscall, (CInventory*, CEquipment*, u32, u32));
  TLFUNC(InventoryRemoveEquipment,        PVOID,    __thiscall, (CInventory*, CEquipment*));
  TLFUNC(LevelDropEquipment,              PVOID,    __thiscall, (CLevel*, CEquipment*, Vector3 &, bool));
  TLFUNC(LevelHideEquipment,              PVOID,    __thiscall, (CLevel*, CEquipment*, u32));

  TLFUNC(ChangeLevel,                     PVOID,    __thiscall, (CGameClient*, wstring, u32, u32, u32, wstring, u32));

  TLFUNC(PlayerAddGold,                   PVOID,    __thiscall, (CPlayer*, u32));

  TLFUNC(PlayerLevelUp,                   PVOID,    __thiscall, (CPlayer*));
  TLFUNC(PlayerLevelUpSilent,             PVOID,    __thiscall, (CPlayer*));

  TLFUNC(CharacterPetawayTimer,           PVOID,    __thiscall, (CCharacter*, float, CLevel*));

  TLFUNC(TriggerUnitTriggered,            PVOID,    __thiscall, (CTriggerUnit*, CPlayer*));

  // Check what this is
  TLFUNC(ObjectCreate,                    PVOID,    __thiscall, (PVOID, u64));

  TLFUNC(BreakableTriggered,              PVOID,    __thiscall, (CBreakable*, CPlayer*));
  TLFUNC(DamageShapeTriggered,            PVOID,    __thiscall, (CDamageShape*));

  TLFUNC(GameClientGamePaused,            void,     __thiscall, (CGameClient*));

  TLFUNC(ResourceManagerInitializePlayer, void,     __thiscall, (CResourceManager*, u32, u32));

  TLFUNC(WndProc,                         LRESULT,  __thiscall, (HWND, UINT, WPARAM, LPARAM));

  // Do these still work?
  TLFUNC(GetPlayer,                       PVOID,    __thiscall, (void));
  TLFUNC(PlayerDied,                      void,     __thiscall, (void));
  TLFUNC(PlayerResurrect,                 void,     __thiscall, (CDieMenu*, u32));

  // -------------------------------------------------------------------------------- //
  // In-place definitions

  //TLFUNC(GameClientProcessObjects,     void,     __thiscall, (PVOID, PVOID, PVOID, PVOID));
  TLFUNC(GameClientProcessObjects,        void,     __thiscall, (CGameClient*, PVOID, PVOID, PVOID));

  TLFUNC(MonsterProcessAI2,               void,     __thiscall, (CMonster*, float));
  TLFUNC(MonsterProcessAI3,               void,     __thiscall, (CMonster*, u32));
  TLFUNC(MonsterIdle,                     void,     __thiscall, (CMonster*, float));
  TLFUNC(MonsterOnHit,                    void,     __thiscall, (CMonster*, CMonster*));
    
  TLFUNC(PlayerCtor,                      void,     __thiscall, (PVOID));

  TLFUNC(PlayerCharacterSetAction,        void,     __thiscall, (CPlayer*));
  
  TLFUNC(GameClientProcessTitleScreen,    void,     __thiscall, (CGameClient*, float, PVOID, float, u32));

  TLFUNC(GameClientLoadMap,               void,     __thiscall, (CGameClient*, u32));

  TLFUNC(Random,                          void,     __thiscall, ());

  TLFUNC(LevelDestroyMonster,             void,     __thiscall, (CLevel*, CMonster*));

  TLFUNC(MonsterReadProp,                 void,     __thiscall, (CMonster*));

  TLFUNC(EquipmentUse,                    void,     __thiscall, (CEquipment*, CPlayer*, CPlayer*));
  TLFUNC(EquipmentIdentify,               void,     __thiscall, (CEquipment*));

  //TLFUNCPTR(LoadArea,           void,     __thiscall, (/* 18 */),                                        0x40CF40);

  // ... and add more later

};
