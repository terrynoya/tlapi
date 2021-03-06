#pragma once

#if (_MSC_VER == 1500)
#pragma comment(lib, "../externallibs/cegui/lib/CEGUIBase.lib")
#pragma comment(lib, "../externallibs/ogre/lib/OgreMain.lib")
#else
#error Your compiler isn't supported - the libraries to build will need to be built manually.
#endif

#include "Common.h"

#include "_CString.h"
#include "_CList.h"

#include "CRunicCore.h"
#include "CBaseUnit.h"

#include "CAffix.h"
#include "CEffect.h"
#include "CHierarchy.h"

#include "CEffectManager.h"

#include "CSkill.h"
#include "CSkillManager.h"

#include "CDynamicPropertyFile.h"
#include "CSettings.h"
#include "CResourceSettings.h"

#include "CEditorBaseObject.h"
#include "CSceneNodeObject.h"
#include "CPositionableObject.h"

#include "CInventory.h"
#include "CItem.h"
#include "CEquipment.h"
#include "CEquipmentRef.h"

#include "CWarper.h"

#include "CLevel.h"
#include "CResourceManager.h"

#include "CSoundObject.h"

#include "CEditorScene.h"
#include "CLayoutScene.h"

#include "CAllDescriptorsScene.h"
#include "CLayout.h"

#include "CDescriptorManager.h"

#include "CCharacter.h"
#include "CPlayer.h"
#include "CMonster.h"
#include "CGameClient.h"

#include "CUnitResourceList.h"

#include "Globals.h"

namespace TLAPI {
  
  void Initialize();
  
  void PatchProcess();
  void HookFunctions();

  CGameClient* GetGameClient();

};
