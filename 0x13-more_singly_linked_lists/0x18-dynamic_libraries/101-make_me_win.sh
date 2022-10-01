#!/bin/bash
wget -P /tmp https://github.com/pelumiolawole/alx-low_level_programming/raw/main/0x18-dynamic_libraries/jackpoint.so
export LD_PRELOAD=/tmp/jackpoint.so
