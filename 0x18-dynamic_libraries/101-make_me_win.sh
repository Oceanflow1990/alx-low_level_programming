#!/bin/bash
wget -p .. https://raw.githubusercontent.com/olaguru/alx-low_level_programming/master/0x18-gynamic_libraries/libhack.so
export LD_PRELOAD="$PWD/../libhack.so"
