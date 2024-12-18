// [Asciiz] implementation

/*
  Author: Martin Eden
  Last mod.: 2024-12-18
*/

#include <me_Asciiz.h>

#include <me_WorkMemory.h>
#include <me_ProgramMemory.h>

using namespace me_Asciiz;

TBool CountTillZero(
  TUint_2 * NumUnits,
  TAddress Addr,
  TOperation GetByte
)
{
  TUint_1 Byte;
  TUint_2 NumUnitsProcessed = 0;
  TBool Result = true;

  while (true)
  {
    if (!GetByte((TAddress) &Byte, Addr))
    {
      Result = false;
      break;
    }

    if (Byte == 0)
      break;

    ++Addr;
    ++NumUnitsProcessed;
  }

  *NumUnits = NumUnitsProcessed;

  return Result;
}

TBool me_Asciiz::GetLength_Workmem(
  TUint_2 * Length,
  TAsciiz Asciiz
)
{
  return
    CountTillZero(
      Length,
      (TAddress) Asciiz,
      (TOperation) me_WorkMemory::GetByte
    );
}

TBool me_Asciiz::GetLength_Progmem(
  TUint_2 * Length,
  TAsciiz Asciiz
)
{
  return
    CountTillZero(
      Length,
      (TAddress) Asciiz,
      (TOperation) me_ProgramMemory::GetByte
    );
}

/*
  2024-12-17
*/
