#!/bin/bash

# 美化脚本 - 批量替换99_unmatched_functions.c中的未美化函数调用

# 定义文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 创建临时脚本
cat > /tmp/beautify_functions.sh << 'EOF'
#!/bin/bash

# 函数美化映射表
declare -A FUNCTION_MAP=(
    ["FUN_18029ad30"]="ProcessStringInputWithValidation"
    ["FUN_180245280"]="CalculateVertexCountFromInput"
    ["FUN_18029e110"]="ProcessSystemDataAfterValidation"
    ["FUN_1802c2ac0"]="CleanupSystemStackResources"
    ["FUN_180049bf0"]="InitializeSystemDataProcessing"
    ["FUN_1802c2560"]="ProcessSystemDataWithOffset"
    ["FUN_18029ae20"]="ValidateSystemDataIntegrity"
    ["FUN_1800c9eb0"]="TransformCharacterWithOffset"
    ["FUN_1800e5650"]="ProcessCharacterEncoding"
    ["FUN_1802c3ab0"]="ProcessStringDataWithOffset"
    ["FUN_1802c64d0"]="ProcessSecondaryStringData"
    ["FUN_1800f3de0"]="FinalizeSystemProcessing"
)

# 读取文件并替换函数名
sed_file="$1"
temp_file="${sed_file}.tmp"

# 复制原文件
cp "$sed_file" "$temp_file"

# 批量替换函数名
for func_name in "${!FUNCTION_MAP[@]}"; do
    new_name="${FUNCTION_MAP[$func_name]}"
    echo "替换 $func_name -> $new_name"
    sed -i "s/$func_name/$new_name/g" "$temp_file"
done

# 移动临时文件到原文件
mv "$temp_file" "$sed_file"

echo "函数美化完成"
EOF

# 使脚本可执行
chmod +x /tmp/beautify_functions.sh

# 执行美化脚本
/tmp/beautify_functions.sh "$FILE_PATH"

# 删除临时脚本
rm -f /tmp/beautify_functions.sh

echo "批量函数美化完成"