#!/bin/bash

# 批量替换05_networking.c文件中的函数名
# 这个脚本会根据function_mappings.txt中的映射关系重命名函数

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
MAPPING_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/function_mappings.txt"
BACKUP_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c.backup"

echo "开始批量替换05_networking.c文件中的函数名..."

# 创建备份
cp "$FILE_PATH" "$BACKUP_FILE"
echo "已创建备份文件: $BACKUP_FILE"

# 统计处理的函数数量
processed_count=0

# 读取映射文件并逐行处理
while IFS=' -> ' read -r original_name new_name; do
    # 跳过注释行和空行
    if [[ "$original_name" == \#* ]] || [[ -z "$original_name" ]]; then
        continue
    fi
    
    echo "替换: $original_name -> $new_name"
    
    # 使用sed替换所有出现的函数名
    # 替换函数定义
    sed -i "s/\b$original_name\b/$new_name/g" "$FILE_PATH"
    
    # 替换函数调用
    sed -i "s/\b$original_name\b/$new_name/g" "$FILE_PATH"
    
    ((processed_count++))
done < "$MAPPING_FILE"

echo "批量替换完成！"
echo "总共处理了 $processed_count 个函数"
echo "备份文件保存在: $BACKUP_FILE"