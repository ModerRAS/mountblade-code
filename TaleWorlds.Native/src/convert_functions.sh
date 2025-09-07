#!/bin/bash

# 渲染系统函数名美化脚本
# 将所有270d70格式的函数定义转换为FUN_180270d70格式

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
TEMP_FILE="/tmp/rendering_functions_temp.txt"

# 提取所有需要转换的函数定义
grep -n "^[0-9a-f]\{5,6\}(" "$INPUT_FILE" | head -20 > "$TEMP_FILE"

echo "发现以下需要转换的函数："
cat "$TEMP_FILE"

echo "开始转换函数名..."

# 读取每一行并转换
while IFS=: read -r line_number function_def; do
    # 提取函数名部分（去掉参数列表）
    func_name=$(echo "$function_def" | sed 's/^\([0-9a-f]\{5,6\}\).*/\1/')
    
    # 转换为FUN_格式
    new_func_name="FUN_180$func_name"
    
    echo "转换第 $line_number 行: $func_name -> $new_func_name"
    
    # 使用sed进行替换
    sed -i "${line_number}s/^$func_name(/$new_func_name(/" "$INPUT_FILE"
    
done < "$TEMP_FILE"

echo "函数名转换完成！"

# 清理临时文件
rm -f "$TEMP_FILE"