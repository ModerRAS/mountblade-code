#!/bin/bash

# 批量重命名01_initialization.c中的FUN_函数
# 美化初始化模块的函数名

# 函数映射表
declare -A function_map=(
    # 系统初始化函数
    ["FUN_18004b560"]="InitializeGameController"
    ["FUN_180061380"]="StartInputSystem"
    ["FUN_1800636f0"]="AllocateSystemMemory"
    ["FUN_1800624c0"]="ConfigureInputSystem"
    ["FUN_180627160"]="LogSystemError"
    ["FUN_1808fcdc8"]="ProcessSystemEvent"
    ["FUN_18004b860"]="InitializeGameSettings"
    ["FUN_1808fc050"]="ValidateSystemChecksum"
    ["FUN_1800623e0"]="InitializeSystemManager"
    ["FUN_18020f150"]="ProcessSystemCallback"
    ["FUN_18006bfe0"]="ConfigureSystemBuffer"
    ["FUN_18005d790"]="InitializeSystemLogger"
    ["FUN_18006ef20"]="ReleaseSystemResource"
    ["FUN_180044dc0"]="InitializeEngineModuleA"
    ["FUN_180045af0"]="SetupSystemConfiguration"
    ["FUN_180045b20"]="ConfigureSystemParameters"
    ["FUN_180045ba0"]="InitializeSystemModule"
    ["FUN_180045bc1"]="FinalizeSystemInitialization"
    ["FUN_180045ea0"]="InitializeSystemMemory"
    ["FUN_180045ee0"]="AllocateSystemMemoryBlock"
    ["FUN_180045f60"]="SetupMemoryManager"
    ["FUN_180045f81"]="CompleteMemorySetup"
    ["FUN_180045fa6"]="InitializeMemoryAllocator"
    ["FUN_180045fc0"]="ConfigureMemoryAllocation"
)

# 备份原文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c.backup

# 遍历函数映射表进行替换
for old_func in "${!function_map[@]}"; do
    new_func="${function_map[$old_func]}"
    
    # 使用sed进行替换
    sed -i "s/\b${old_func}\b/${new_func}/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
    
    echo "重命名: ${old_func} -> ${new_func}"
done

echo "函数重命名完成"