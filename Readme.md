## What

(2024-12)

Part of from my AVR toolset.

Count length of zero-byte sequence. Supports program memory.
(Functionally same as `strlen` and `strlen_P`.)


## Design

`GetLength(Asciiz)` wrapped into more generic "failable three-address
instruction" pattern. I mean it's get-length for SRAM and Flash
that fails on bad addresses.

```C++
TBool GetLength_Workmem(TUint_2 * Length, TAsciiz Addr);
TBool GetLength_Progmem(TUint_2 * Length, TAsciiz Addr);
```

## Code

* [Interface][Interface]
* [Implementation][Implementation]


## Requirements

  * arduino-cli
  * bash


## Install/remove

Easy way is to clone [GetLibs][GetLibs] repo and run it's code.
Lacking of local repo catalogue in Arduino IDE sucks.


## See also

* [My other embedded C++ libraries][Embedded]
* [My other repositories][Repos]

[Interface]: src/me_Asciiz.h
[Implementation]: src/me_Asciiz.cpp

[GetLibs]: https://github.com/martin-eden/Embedded-Framework-GetLibs

[Embedded]: https://github.com/martin-eden/Embedded_Crafts/tree/master/Parts
[Repos]: https://github.com/martin-eden/contents
