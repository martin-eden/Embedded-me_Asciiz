## What

(2024-12)

Part of from my AVR toolset.

Count length of zero-byte sequence. Supports program memory.
(Functionally same as `strlen` and `strlen_P`.)


## Obsolete

This module is deprecated and should not be used.

Getting ASCIIZ length in RAM is scope of `[me_WorkmemTools]`.
Getting ASCIIZ length from other memories is not possible
(was never needed).


## Code

* [Interface][Interface]
* [Implementation][Implementation]
* [Example][Example]


## Requirements

  * arduino-cli
  * bash


## Install/remove

Git clone.


## See also

* [My other embedded C++ libraries][Embedded]
* [My other repositories][Repos]


[Interface]: src/me_Asciiz.h
[Implementation]: src/me_Asciiz.cpp
[Example]: examples/me_Asciiz/me_Asciiz.ino

[Embedded]: https://github.com/martin-eden/Embedded_Crafts/tree/master/Parts
[Repos]: https://github.com/martin-eden/contents
