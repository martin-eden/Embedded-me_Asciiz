// [me_Asciiz] Compilation test

/*
  Author: Martin Eden
  Last mod.: 2025-08-22
*/

#include <me_Asciiz.h>

#include <me_Console.h>
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
  Console.Init();

  RunTest();

  Console.Print("Done.");
}

void loop()
{
}

/*
  2024-12-17
  2025-08-22
*/
