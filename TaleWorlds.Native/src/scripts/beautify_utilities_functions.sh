#!/bin/bash

# 美化06_utilities.c文件中的函数名
# 这个脚本会查找并替换一些需要美化的函数名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
BACKUP_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup"

# 创建备份
cp "$INPUT_FILE" "$BACKUP_FILE"

# 定义需要美化的函数名映射
declare -A FUNCTION_REPLACEMENTS=(
    # 系统状态重置函数
    ["ResetSystemStateDG0"]="ResetSystemStateDataGroup0"
    ["ProcessSystemDataDH0"]="ProcessSystemDataHandler0"
    ["ReleaseSystemResourceDJ0"]="ReleaseSystemResourceJob0"
    ["ValidateSystemStateDI0"]="ValidateSystemStateInspector0"
    ["ConfigureSystemParameterDK0"]="ConfigureSystemParameterKey0"
    ["InitializeSystemComponentDL0"]="InitializeSystemComponentLogic0"
    
    # 工具权限相关函数
    ["CheckUtilityPermissionG0"]="CheckUtilityPermissionGroup0"
    ["ProcessDataRequest"]="ProcessDataRequestHandler"
    ["InitializeContextA0"]="InitializeContextAllocator0"
    
    # 验证和处理函数
    ["ValidateSystemOperationContextA0"]="ValidateSystemOperationContextAllocator0"
    ["ProcessFloatingPointDataValidationA0"]="ProcessFloatingPointDataValidationAllocator0"
    ["ConvertFloatingPointDataA0"]="ConvertFloatingPointDataAllocator0"
    ["ValidateSystemMemoryA0"]="ValidateSystemMemoryAllocator0"
    
    # 数据处理函数
    ["ValidateDataAndReturnA0"]="ValidateDataAndReturnAllocator0"
    ["ValidateDataAndReturnA1"]="ValidateDataAndReturnAllocator1"
    ["ProcessDataAndExecute"]="ProcessDataAndExecuteHandler"
    
    # 释放系统内存函数
    ["ReleaseSystemMemoryA0"]="ReleaseSystemMemoryAllocator0"
)

# 执行替换
for original in "${!FUNCTION_REPLACEMENTS[@]}"; do
    replacement="${FUNCTION_REPLACEMENTS[$original]}"
    
    # 替换函数定义
    sed -i "s/\b$original\b/$replacement/g" "$INPUT_FILE"
    
    echo "已替换: $original -> $replacement"
done

echo "函数名美化完成！"