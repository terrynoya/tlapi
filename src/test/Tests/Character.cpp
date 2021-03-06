#include "Test.h"

void Test_CharacterSetAlignment(CCharacter* character, u32 alignment)
{
  testLogger.WriteLine(Info,
    L"Character(%p)::SetAlignment( %s ) returns void",
    character, alignment == 2 ? L"Friendly" : L"Hostile");

  // Dump the GUID for more information
  testLogger.WriteLine(Verbose,
    L"  GUID: %016I64X",
    character->GUID);
}

void Test_CharacterSetDestination(CCharacter* character, CLevel* level, float x, float y)
{
  testLogger.WriteLine(Info,
    L"Character(%p)::SetDestination dumping AstarPathfiner(%p) P1: %p  P2: %p",
    character, character->pCAstarPathfiner,
    character->pCAstarPathfiner->unkData, character->pCAstarPathfiner->unk100);

  // --
  testLogger.WriteLine(Info, L"\nUnknown Structure:");

  for (int j = 0; j <= 0; j++) {
    for (int i = 0; i < 800; i++) {
      testLogger.Write(Info,
        L"%x ",
        character->pCAstarPathfiner->unkData->pUnknownStruct1[j][i]);

      if ((i + 1) % 32 == 0)
        testLogger.Write(Info, L"\n");
    }
  }

  testLogger.WriteLine(Info, L"\n");
  // --

  testLogger.WriteLine(Verbose,
    L"Character(%p)::SetDestination( Level(%p), %f, %f ) returns void",
    character, level, x, y);

  // Dump the GUID for more information
  testLogger.WriteLine(Verbose,
    L"  GUID: %016I64X",
    character->GUID);
}

void Test_CharacterSetAction(CCharacter* character, u32 action)
{
  testLogger.WriteLine(Info,
    L"Character(%p)::SetAction( Action(%x) ) returns void",
    character, action);

  // Dump the GUID for more information
  testLogger.WriteLine(Verbose,
    L"  GUID: %016I64X",
    character->GUID);
}

void Test_CharacterAddMinion(CCharacter* character, CCharacter* minion)
{
  testLogger.WriteLine(Info,
    L"Character(%p)::AddMinion( Minion(%p) ) returns void",
    character, minion);

  log("AddMinion(%p): %p", character, minion);
  log(L"  Minion Name: %s", minion->characterName.c_str());

  // Dump the GUID for more information
  testLogger.WriteLine(Verbose,
    L"  GUID: %016I64X, GUID Minion: %016I64X",
    character->GUID, minion->GUID);
}

void Test_CharacterStrike(CCharacter* character, CLevel* level, CCharacter* target, PVOID unk0, u32 unk1, float unk2, float unk3, u32 unk4)
{
  testLogger.WriteLine(Info,
    L"Character(%p)::Strike( Level(%p), Target(%p), unk0(%p), unk1(%#x), unk2(%f), unk3(%f), unk4(%#x) ) returns void",
    character, level, target, unk0, unk1, unk2, unk3, unk4);
}
