#!/bin/bash

# 美化99_unmatched_functions.c中的FUN_函数
# 这个脚本会批量重命名FUN_开头的函数并添加文档注释

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 函数映射表 - 将原始函数名映射到语义化名称
declare -A function_map=(
    ["FUN_1800a1010"]="ProcessDataStreamAndValidatePointers"
    ["FUN_1800a1e20"]="InitializeSystemDataPointerStructure"
    ["FUN_1800a32b0"]="InitializeSystemDataBuffer"
    ["FUN_1800b2cb2"]="GetSystemStatusValue"
    ["FUN_1800b2cd0"]="ProcessSystemDataBufferOperations"
    ["FUN_1800b33d0"]="HandleSystemMemoryOperations"
    ["FUN_1800b4a00"]="ExecuteSystemDataProcessing"
    ["FUN_1800b4a40"]="ProcessSystemDataPointer"
    ["FUN_1800b5ec0"]="HandleSystemConfigurationData"
    ["FUN_1800b6de0"]="ManageSystemMemoryResources"
    ["FUN_1800bd5c0"]="ProcessSystemDataStream"
    ["FUN_1800bd790"]="HandleSystemDataOperations"
    ["FUN_1800bdbb0"]="ExecuteSystemDataValidation"
    ["FUN_1800bed00"]="ProcessSystemMemoryAllocation"
    ["FUN_1800c0c20"]="HandleSystemBufferManagement"
    ["FUN_1800c0ef0"]="ProcessSystemDataValidation"
    ["FUN_1800c11a0"]="ExecuteSystemConfiguration"
    ["FUN_1800c17c0"]="GetSystemConfigurationStatus"
    ["FUN_1800c18f0"]="ProcessSystemDataPointer"
    ["FUN_1800c26d0"]="HandleSystemMemoryOperations"
    ["FUN_1800c2970"]="ProcessSystemDataBuffer"
)

# 函数文档模板
declare -A function_docs=(
    ["ProcessDataStreamAndValidatePointers"]="处理数据流并验证指针"
    ["InitializeSystemDataPointerStructure"]="初始化系统数据指针结构"
    ["InitializeSystemDataBuffer"]="初始化系统数据缓冲区"
    ["GetSystemStatusValue"]="获取系统状态值"
    ["ProcessSystemDataBufferOperations"]="处理系统数据缓冲区操作"
    ["HandleSystemMemoryOperations"]="处理系统内存操作"
    ["ExecuteSystemDataProcessing"]="执行系统数据处理"
    ["ProcessSystemDataPointer"]="处理系统数据指针"
    ["HandleSystemConfigurationData"]="处理系统配置数据"
    ["ManageSystemMemoryResources"]="管理系统内存资源"
    ["ProcessSystemDataStream"]="处理系统数据流"
    ["HandleSystemDataOperations"]="处理系统数据操作"
    ["ExecuteSystemDataValidation"]="执行系统数据验证"
    ["ProcessSystemMemoryAllocation"]="处理系统内存分配"
    ["HandleSystemBufferManagement"]="处理系统缓冲区管理"
    ["ProcessSystemDataValidation"]="处理系统数据验证"
    ["ExecuteSystemConfiguration"]="执行系统配置"
    ["GetSystemConfigurationStatus"]="获取系统配置状态"
    ["HandleSystemMemoryOperations"]="处理系统内存操作"
    ["ProcessSystemDataBuffer"]="处理系统数据缓冲区"
)

# 备份原文件
cp 99_unmatched_functions.c 99_unmatched_functions.c.backup

# 处理每个函数
for old_name in "${!function_map[@]}"; do
    new_name="${function_map[$old_name]}"
    doc="${function_docs[$new_name]}"
    
    echo "处理函数: $old_name -> $new_name"
    
    # 使用sed替换函数定义
    sed -i "s/undefined4 $old_name(/undefined4 $new_name(/g" 99_unmatched_functions.c
    sed -i "s/undefined8 $old_name(/undefined8 $new_name(/g" 99_unmatched_functions.c
    sed -i "s/undefined \* $old_name(/undefined \* $new_name(/g" 99_unmatched_functions.c
    sed -i "s/void $old_name(/void $new_name(/g" 99_unmatched_functions.c
    sed -i "s/longlong \* $old_name(/longlong \* $new_name(/g" 99_unmatched_functions.c
    sed -i "s/byte \* $old_name(/byte \* $new_name(/g" 99_unmatched_functions.c
    
    # 在宏定义区域添加宏定义
    if ! grep -q "#define $new_name $old_name" 99_unmatched_functions.c; then
        # 找到合适的插入位置（在最后一个#define之后）
        line_num=$(grep -n "#define .* FUN_" 99_unmatched_functions.c | tail -1 | cut -d: -f1)
        if [ -n "$line_num" ]; then
            sed -i "${line_num}a\\#define $new_name $old_name" 99_unmatched_functions.c
        fi
    fi
done

echo "函数美化完成"

# 清理备份文件
rm -f 99_unmatched_functions.c.backup