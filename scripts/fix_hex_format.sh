#!/bin/bash

# 修复01_initialization.c文件中的十六进制格式错误
# 修复模式：0x0xXXXX -> 0xXXXX
sed -i 's/0x0x\([0-9a-fA-F]\+\)/0x\1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

# 修复模式：0xXXXXxYYYY -> 0xXXXXYYYY
sed -i 's/0x\([0-9a-fA-F]\+\)x\([0-9a-fA-F]\+\)/0x\1\2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

echo "修复完成"