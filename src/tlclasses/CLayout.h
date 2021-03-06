#pragma once

#include "Common.h"

#include "_CString.h"
#include "_CList.h"

#include "CAllDescriptorsScene.h"
#include "CSettings.h"
#include "CSoundObject.h"

namespace TLAPI
{

#pragma pack(1)

  struct CDescriptorManager;

  struct CLayout : CAllDescriptorsScene
  {
    // These may be in base object or derived
    CDescriptorManager      *pCDescriptorManager;
    
    CList<PVOID>            UnkList0;

    PVOID unk12;
    PVOID unk13;

    CList<PVOID>            UnkList1;

    u32 unk14[12];

    wstring                 location;   // "MEDIA/PARTICLES/MISSILES/CORRUPTION.LAYOUT"

    CSettings*             *pCSettings;
    PVOID                   pOctreeSM;

    PVOID unk15[4];         // NULLs

    PVOID vtable_iRandomWeight;
    PVOID vtable_iHighlight;

    u32 unk16[9];          // 2 dup(   1),0Ah dup(   0), 0Ah,17h dup(   0)

    CList<CSoundObject*>   listSoundObjects;

    

  };

#pragma pack()

};

