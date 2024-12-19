// [me_Asciiz] Compilation test

/*
  Author: Martin Eden
  Last mod.: 2024-12-19
*/

#include <me_Asciiz.h>

#include <me_Console.h>
#include <me_Uart.h>
#include <me_BaseTypes.h>

void RunTest()
{
  TAsciiz Asciiz = "ABC";
  TUint_2 Length = 0;

  Length = strlen(Asciiz);
  Console.Print(Length);

  me_Asciiz::GetLength_Workmem(&Length, Asciiz);
  Console.Print(Length);
}

void setup()
{
  me_Uart::Init(me_Uart::Speed_115k_Bps);

  RunTest();

  Console.Print("Done.");
}

void loop()
{
}

/*
  2024-12-17
*/
