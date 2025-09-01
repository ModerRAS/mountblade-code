#!/bin/bash

# 批量重命名06_utilities.c文件中的UNK_变量
# 将剩余的UNK_变量重命名为SystemVariable001-SystemVariable236

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
BACKUP_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup"

# 创建备份
cp "$FILE_PATH" "$BACKUP_PATH"
echo "已创建备份文件: $BACKUP_PATH"

# 提取所有UNK_变量并排序
echo "提取UNK_变量列表..."
grep -o 'UNK_[a-fA-F0-9_]*' "$FILE_PATH" | sort -u > /tmp/unk_vars.txt

# 统计UNK_变量数量
TOTAL_UNK=$(wc -l < /tmp/unk_vars.txt)
echo "发现 $TOTAL_UNK 个唯一的UNK_变量"

# 创建重命名映射文件
echo "创建重命名映射..."
cat > /tmp/rename_map.txt << 'EOF'
# UNK_变量重命名映射
# 格式: 原变量名 -> 新变量名
EOF

# 生成系统变量名称，从SystemVariable011开始（因为前面已经有SystemVariable01-10）
COUNTER=11
while IFS= read -r var_name; do
    if [[ -n "$var_name" ]]; then
        new_name="SystemVariable$(printf "%03d" $COUNTER)"
        echo "$var_name -> $new_name" >> /tmp/rename_map.txt
        COUNTER=$((COUNTER + 1))
    fi
done < /tmp/unk_vars.txt

echo "重命名映射已创建: /tmp/rename_map.txt"
echo "将重命名 $((COUNTER - 11)) 个变量"

# 执行批量重命名
echo "开始批量重命名..."
COUNTER=11
while IFS= read -r var_name; do
    if [[ -n "$var_name" ]]; then
        new_name="SystemVariable$(printf "%03d" $COUNTER)"
        echo "重命名: $var_name -> $new_name"
        
        # 使用sed进行替换
        sed -i "s/\b$var_name\b/$new_name/g" "$FILE_PATH"
        
        COUNTER=$((COUNTER + 1))
    fi
done < /tmp/unk_vars.txt

echo "批量重命名完成！"
echo "重命名了 $((COUNTER - 11)) 个变量"
echo "备份文件保存在: $BACKUP_PATH"
echo "重命名映射保存在: /tmp/rename_map.txt"

# 验证重命名结果
echo "验证重命名结果..."
REMAINING_UNK=$(grep -o 'UNK_[a-fA-F0-9_]*' "$FILE_PATH" | sort -u | wc -l)
echo "剩余UNK_变量数量: $REMAINING_UNK"

if [ "$REMAINING_UNK" -eq 0 ]; then
    echo "✓ 所有UNK_变量已成功重命名"
else
    echo "⚠ 仍有 $REMAINING_UNK 个UNK_变量未处理"
    echo "剩余变量:"
    grep -o 'UNK_[a-fA-F0-9_]*' "$FILE_PATH" | sort -u
fi