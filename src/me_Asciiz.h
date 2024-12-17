// Asciiz

/*
  Author: Martin Eden
  Last mod.: 2024-12-17
*/

#pragma once

#include <me_BaseTypes.h>

namespace me_Asciiz
{
  TBool GetLength_Workmem(
    TUint_2 * Length,
    TAsciiz Addr
  );

  TBool GetLength_Progmem(
    TUint_2 * Length,
    TAsciiz Addr
  );
}

/*
  2024-12-17
*/
