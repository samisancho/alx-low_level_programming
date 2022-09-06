#!/bin/bash
wget -P /tmp https://github.com/samisancho/alx-low_level_programming/new/main/0x18-dynamic_libraries/libmask.so
export LD_PRELOAD=/tmp/libmask.so
