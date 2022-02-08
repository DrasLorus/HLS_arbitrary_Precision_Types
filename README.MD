# HLS Arbitrary Precision Types Library

This repository provides simulation code of HLS Arbitrary Precision Types.

The code is based from headers shipped with Vivado (*in 2019...*),
but due to absence of synthesis support **it should not be used in an HLS project targeting FPGA**.

For synthesis, the repository owner (A.K.A [DrasLorus](https://github.com/DrasLorus)) strongly recommends the use of Xilinx® provided headers, which are *unfortunately* proprietary software.

## Compatibility

- *(Legacy)* Tested with g++ (GCC) 6.2.0 on x86_64 GNU/Linux.
- Tested with clang (LLVM) 13.0.0 and g++ (GCC) 11.1.0 on x86_64 GNU/Linux.

## Usage

Include the `ap_int.h` or `ap_fixed.h` in C++ code,
and set compiler option to add the path of `include` directory in this repo
into header search directory list.

``` shell
$ cd examples/ap_int
$ g++ -I ../../include/ test.cpp
$ ./a.out
a = 11.3137 (0x0b.504ea4p0)
b = 11.3137 (0x0b.504f33p0)
c = a + b = 22.6274 (0x16.a09dd7p0)
$
```

## License Info

Copyright 2011-2019 Xilinx, Inc.

Copyright 2022 DrasLorus.
*Note*: Only [ap_private header](./include/etc/ap_private.h) has been modified by myself, copyright have thus been amended in place.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

``` text
http://www.apache.org/licenses/LICENSE-2.0
```

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
