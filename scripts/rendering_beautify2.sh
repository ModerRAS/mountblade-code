#!/bin/bash

# 03_rendering.c 文件语义化美化脚本（第二批次）
# 继续美化剩余的非语义化名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
TEMP_FILE="/tmp/rendering_beautify_temp2.c"

# 第二批次变量名美化映射
declare -A VARIABLE_MAP=(
    # 基础变量名美化
    ["render_temp_bool_value"]="render_temp_boolean_value"
    ["render_byte_mask_ptr_value"]="render_byte_mask_pointer_value"
    ["render_legacy_primary_data"]="render_legacy_data_processor_primary"
    ["render_legacy_texture_processor"]="render_legacy_texture_processor"
    ["render_legacy_vertex_processor"]="render_legacy_vertex_processor"
    
    # 标签名美化（十六进制标签）
    ["rendering_label_69fefd"]="RENDER_LABEL_META_DATA_PROCESSING_END"
    ["rendering_label_69fe59"]="RENDER_LABEL_TEXTURE_SIZE_ADJUSTMENT_SECONDARY"
)

# 创建临时文件副本
cp "$INPUT_FILE" "$TEMP_FILE"

# 执行变量名替换
for old_name in "${!VARIABLE_MAP[@]}"; do
    new_name="${VARIABLE_MAP[$old_name]}"
    echo "替换: $old_name -> $new_name"
    sed -i "s/\b$old_name\b/$new_name/g" "$TEMP_FILE"
done

# 替换文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "03_rendering.c 文件第二批次语义化美化完成"