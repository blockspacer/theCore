# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

set(CMAKE_C_LINK_FLAGS
        "-fuse-linker-plugin -mcpu=cortex-m4 -nostartfiles \
                -mfloat-abi=hard -mfpu=fpv4-sp-d16 -mthumb -flto -Wl,--gc-sections"
        CACHE STRING "Linker C flags")
set(CMAKE_CXX_LINK_FLAGS ${CMAKE_C_LINK_FLAGS} CACHE STRING "Linker C++ flags")
