#!/bin/bash

# 变量名美化脚本 - 99_unmatched_functions.c
# 用于将文件中的DAT_变量名替换为语义化名称

# 定义变量映射关系
declare -A variable_mappings=(
    ["DAT_1809fc8e4"]="SystemMemoryDataTable8E4"
    ["DAT_180a06430"]="SystemConfigurationDataTable430"
    ["DAT_180a01050"]="SystemDataStringTable050"
    ["DAT_180d49238"]="SystemValidationData238"
    ["DAT_180be0000"]="SystemDataTableE000"
    ["DAT_180a02fe8"]="SystemStringTemplate2FE8"
)

# 获取脚本所在目录
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
TARGET_FILE="$SCRIPT_DIR/../99_unmatched_functions.c"

# 备份原文件
cp "$TARGET_FILE" "$TARGET_FILE.backup"

# 执行替换
for old_name in "${!variable_mappings[@]}"; do
    new_name="${variable_mappings[$old_name]}"
    echo "替换: $old_name -> $new_name"
    
    # 替换变量引用（包括 & 前缀）
    sed -i "s/&$old_name/&$new_name/g" "$TARGET_FILE"
    
    # 替换直接的变量名使用
    sed -i "s/$old_name/$new_name/g" "$TARGET_FILE"
done

echo "变量名美化完成"