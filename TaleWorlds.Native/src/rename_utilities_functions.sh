#!/bin/bash

# 批量重命名06_utilities.c文件中的FUN_函数
# 这个脚本会自动重命名所有的FUN_函数为语义化的名称

echo "开始重命名06_utilities.c文件中的FUN_函数..."

# 创建临时文件来处理
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
TEMP_FILE="/tmp/06_utilities_temp.c"

# 备份原始文件
cp "$INPUT_FILE" "$INPUT_FILE.backup"

# 函数映射关系
declare -A function_replacements=(
    ["FUN_180942980"]="ProcessResourceTableManagement"
    ["FUN_1809429f0"]="ReleaseResourceHashTable"
    ["FUN_180942a20"]="ReleaseValidationResultTable"
    ["FUN_180942bf0"]="ExecuteSystemCleanupOperation1"
    ["FUN_180942c20"]="ExecuteSystemCleanupOperation2"
    ["FUN_180942c50"]="ExecuteSystemCleanupOperation3"
    ["FUN_180942cb0"]="ExecuteSystemCleanupOperation4"
    ["FUN_180942ce0"]="ExecuteSystemCleanupOperation5"
    ["FUN_180942d30"]="ExecuteEmergencyShutdownAndCleanup"
    ["FUN_180942e20"]="ExecuteSystemCleanupOperation6"
    ["FUN_180942e70"]="ExecuteSystemCleanupOperation7"
    ["FUN_180942f00"]="ExecuteSystemCleanupOperation8"
    ["FUN_180942f50"]="ExecuteSystemCleanupOperation9"
    ["FUN_180942fa0"]="InitializeSystemDataStructureAF"
    ["FUN_180942fc0"]="InitializeSystemDataStructureAG"
    ["FUN_180943070"]="DestroyMutexResource2"
)

# 复制文件到临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 处理每个函数
for old_func in "${!function_replacements[@]}"; do
    new_func="${function_replacements[$old_func]}"
    
    echo "正在重命名: $old_func -> $new_func"
    
    # 使用sed替换函数声明
    sed -i "s/^void $old_func(void)$/void $new_func(void)/g" "$TEMP_FILE"
    
    # 移除重复的函数声明（如果存在）
    sed -i "/^void $old_func(void)$/N;s/^void $old_func(void)\nvoid $old_func(void)/void $new_func(void)/" "$TEMP_FILE"
    
    echo "✓ 已重命名: $old_func -> $new_func"
done

# 替换回原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "所有函数重命名完成！"
echo "已重命名 ${#function_replacements[@]} 个函数"