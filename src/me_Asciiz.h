// ASCIIZ length calculation

/*
  Author: Martin Eden
  Last mod.: 2025-08-22
*/

#pragma once

#include <me_BaseTypes.h>

namespace me_Asciiz
{
  // Get length of ASCIIZ in RAM
  TBool GetLength_Workmem(
    TUint_2 * Length,
    TAsciiz Addr
  );

  // Get length of ASCIIZ in Flash
  TBool GetLength_Progmem(
    TUint_2 * Length,
    TAsciiz Addr
  );
}

/*
  2024-12-17
  2025-08-22
*/
