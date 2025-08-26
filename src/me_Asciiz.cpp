// ASCIIZ length calculation

/*
  Author: Martin Eden
  Last mod.: 2025-08-26
*/

#include <me_Asciiz.h>

#include <me_WorkMemory.h>
#include <me_ProgramMemory.h>

using namespace me_Asciiz;

/*
  Count till zero byte
*/
TBool CountTillZero(
  TUint_2 * NumUnits,
  TAddress Addr,
  TOperation GetByte
)
{
  /*
    That's simple and practical implementation

    But Address variable theoretically can overflow.
  */

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

/*
  Count length of ASCIIZ in RAM
*/
TBool me_Asciiz::GetLength_Workmem(
  TUint_2 * Length,
  TAsciiz Asciiz
)
{
  return
    CountTillZero(
      Length,
      (TAddress) Asciiz,
      (TOperation) me_WorkMemory::GetByteFrom
    );
}

/*
  Count length of ASCIIZ in Flash
*/
TBool me_Asciiz::GetLength_Progmem(
  TUint_2 * Length,
  TAsciiz Asciiz
)
{
  return
    CountTillZero(
      Length,
      (TAddress) Asciiz,
      (TOperation) me_ProgramMemory::GetByteFrom
    );
}

/*
  2024-12-17
*/
