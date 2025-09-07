#!/bin/bash

# 美化99_unmatched_functions.c中的UNK_变量
# 该脚本将文件中的UNK_变量替换为具有语义的名称

echo "开始美化99_unmatched_functions.c中的UNK_变量..."

# 备份原始文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c.backup

# 定义一些常见的UNK_变量替换模式
# 这些替换基于变量的用途和上下文

# 系统缓冲区相关变量
sed -i 's/UNK_1801b9c30/SystemBufferCacheControlPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_1801bca00/SystemBufferAllocationOptimizer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_1801bca40/SystemBufferMemoryManager/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_1801bca50/SystemBufferAllocationTracker/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_1801bc880/SystemBufferAccessValidator/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_1801bc890/SystemBufferSecurityChecker/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_1801bc960/SystemBufferAccessController/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 系统配置相关变量
sed -i 's/UNK_180a0c118/SystemConfigurationParameterA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a0c148/SystemConfigurationParameterB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a0c178/SystemConfigurationParameterC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a0b200/SystemConfigurationBufferA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a0b258/SystemConfigurationBufferB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a0b220/SystemConfigurationBufferC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 系统状态相关变量
sed -i 's/UNK_180a0c460/SystemStatusIndicatorA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a0c480/SystemStatusIndicatorB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a0c2b8/SystemStatusMonitorA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a0c348/SystemStatusMonitorB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a0c3d8/SystemStatusMonitorC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 系统数据相关变量
sed -i 's/UNK_180a0b290/SystemDataBufferA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180993550/SystemDataBufferB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a0b2a8/SystemDataBufferC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a0b2b4/SystemDataBufferD/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a0b2e0/SystemDataPointerA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a0b2e8/SystemDataPointerB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a0b2f0/SystemDataPointerC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a0b300/SystemDataPointerD/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a0b310/SystemDataPointerE/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a0b318/SystemDataPointerF/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a0b338/SystemDataPointerG/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 系统控制相关变量
sed -i 's/UNK_18031c220/SystemControlFlagA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_1809fd0c0/SystemControlFlagB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_180a068d0/SystemControlFlagC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/UNK_18021cc8/SystemControlFlagD/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

echo "UNK_变量美化完成！"
echo "请检查文件以确保替换正确，然后删除备份文件。"