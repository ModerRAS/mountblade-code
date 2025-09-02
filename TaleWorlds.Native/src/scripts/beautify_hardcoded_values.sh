#!/bin/bash

# 美化硬编码值脚本
# 用于替换01_initialization.c文件中的硬编码值为有意义的常量名

echo "开始美化硬编码值..."

# 定义一些常见的硬编码值替换
# 系统地址相关
sed -i 's/0x180c35590/SYSTEM_VTABLE_POINTER_ADDRESS/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/0x180c82170/SYSTEM_MUTEX_QUATERNARY_ADDRESS/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/0x180c91060/SYSTEM_CONTROLLER_ADDRESS/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

# 标志位相关
sed -i 's/0xffffffffffffffff/MAX_UNSIGNED_64_BIT/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/0xffff7fff/RESOURCE_HASH_MASK/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/0x4000000000000000/SYSTEM_CONFIGURATION_FLAG/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

# 游戏设置相关
sed -i 's/0x130a7/GAME_SETTINGS_INITIALIZER/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

# 系统管理器表偏移
sed -i 's/0x42686/SYSTEM_MANAGER_IO_PORT_OFFSET/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/0x42687/SYSTEM_MANAGER_RESOURCE_OFFSET/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

# 内存分配相关
sed -i 's/0x213458/MEMORY_POOL_CLEANUP_SIZE/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/0x40070/SYSTEM_RESOURCE_TRIPLE_POINTER_OFFSET/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

# 系统标识符
sed -i 's/0x72657474617453/SYSTEM_THREAD_MANAGER_ID/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/0xbb80073/MEMORY_ALLOCATION_GUARD/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

echo "硬编码值美化完成"