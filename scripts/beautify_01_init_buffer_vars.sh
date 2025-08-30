#!/bin/bash

# 美化01_initialization.c文件中的bufferPtr_xxx变量名
# 将bufferPtr_xxxsystem_buffer_ptr_xxx格式的变量名简化为system_buffer_ptr_xxx

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原文件
cp 01_initialization.c 01_initialization.c.backup_beautify

# 使用sed命令替换bufferPtr_xxxsystem_buffer_ptr_xxx为system_buffer_ptr_xxx
sed -i 's/bufferPtr_\([0-9a-fA-F]\+\)system_buffer_ptr_\([0-9a-fA-F]\+\)/system_buffer_ptr_\2/g' 01_initialization.c

# 替换单独的bufferPtr_xxx为system_buffer_ptr_xxx
sed -i 's/bufferPtr_\([0-9a-fA-F]\+\)/system_buffer_ptr_\1/g' 01_initialization.c

echo "变量名美化完成"