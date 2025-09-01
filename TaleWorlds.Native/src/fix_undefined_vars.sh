#!/bin/bash

# 批量替换06_utilities.c中的undefined变量为void*类型
# 这个脚本会提升代码的类型安全性

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建临时文件
temp_file="06_utilities_temp.c"
cp 06_utilities.c "$temp_file"

# 替换所有的undefined为void*，但保留函数返回值中的undefined8等
sed -i 's/^undefined /void\* /g' "$temp_file"
sed -i 's/^\s*undefined /void\* /g' "$temp_file"
sed -i 's/^\s\+undefined /void\* /g' "$temp_file"
sed -i 's/\(\s\+\)undefined /\1void\* /g' "$temp_file"
sed -i 's/(\*undefined/(*void/g' "$temp_file"
sed -i 's/\[\*undefined/\[*void/g' "$temp_file"
sed -i 's/,\s*undefined/, void\*/g' "$temp_file"
sed -i 's/&undefined /&void\* /g' "$temp_file"

# 处理特殊情况：指针变量
sed -i 's/undefined\*/void\*/g' "$temp_file"

# 处理特殊情况：数组声明中的undefined
sed -i 's/undefined\[/void\*[/g' "$temp_file"

# 处理特殊情况：结构体中的undefined
sed -i 's/{undefined/{void*/g' "$temp_file"

# 保留函数返回值中的undefined8, undefined4等（这些是特定的返回类型）
sed -i 's/void\*8/undefined8/g' "$temp_file"
sed -i 's/void\*4/undefined4/g' "$temp_file"
sed -i 's/void\*1/undefined1/g' "$temp_file"

# 备份原文件
cp 06_utilities.c 06_utilities_backup.c

# 替换原文件
mv "$temp_file" 06_utilities.c

echo "undefined变量替换完成"
echo "原文件已备份为 06_utilities_backup.c"