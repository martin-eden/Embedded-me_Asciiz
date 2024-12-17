// [me_Asciiz] Compilation test

#include <me_Asciiz.h>

#include <me_Console.h>
#include <me_Uart.h>
#include <me_UartSpeeds.h>
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
  me_Uart::Init(me_UartSpeeds::Bps_115k);

  RunTest();

  Console.Print("Done.");
}

void loop()
{
}
