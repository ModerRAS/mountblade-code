#!/bin/bash

# 美化网络模块中的变量名脚本
# 用于将逆向工程生成的变量名替换为语义化名称

# 定义变量替换映射
declare -A replacements=(
    # 字符型栈变量
    ["cStack000000000000004c"]="NetworkValidationChar"
    
    # 整型栈变量
    ["iStack00000000000000a4"]="NetworkValidationIndex"
    
    # 浮点型栈变量 - 根据上下文推断其用途
    ["fStack0000000000000028"]="NetworkCoordinateZ"
    ["fStack0000000000000038"]="NetworkCoordinateY"
    ["fStack0000000000000040"]="NetworkScaleFactor"
    ["fStack0000000000000044"]="NetworkDivisionFactor"
    ["fStack0000000000000048"]="NetworkCoordinateX"
    ["fStack000000000000004c"]="NetworkOffsetValue"
    ["fStack0000000000000058"]="NetworkWeightFactor"
)

# 读取源文件
input_file="05_networking.c"
temp_file="05_networking_temp.c"

# 复制源文件到临时文件
cp "$input_file" "$temp_file"

# 执行变量替换
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    echo "替换: $old_name -> $new_name"
    
    # 使用 sed 进行精确替换
    sed -i "s/\b$old_name\b/$new_name/g" "$temp_file"
done

# 替换回源文件
mv "$temp_file" "$input_file"

echo "变量名美化完成"