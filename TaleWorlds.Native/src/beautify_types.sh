#!/bin/bash

# 美化06_utilities.c文件中的类型定义
# 这个脚本将批量重命名类型定义

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

echo "开始美化 $FILE 文件中的类型定义..."

# 类型定义映射表
declare -A TYPE_MAP=(
    ["uint8_t1"]="UInt8Type1"
    ["uint8_t2"]="UInt8Type2"
    ["uint8_t3"]="UInt8Type3"
    ["uint8_t4"]="UInt8Type4"
    ["uint8_t7"]="UInt8Type7"
    ["uint8_t8"]="UInt8Type8"
)

# 备份原文件
cp "$FILE" "$FILE.backup.$(date +%Y%m%d_%H%M%S)"

# 对每个类型进行重命名
for old_name in "${!TYPE_MAP[@]}"; do
    new_name="${TYPE_MAP[$old_name]}"
    
    echo "重命名类型: $old_name -> $new_name"
    
    # 使用sed进行替换，注意使用词边界确保只匹配完整类型名
    sed -i "s/\b$old_name\b/$new_name/g" "$FILE"
done

echo "类型重命名完成！"