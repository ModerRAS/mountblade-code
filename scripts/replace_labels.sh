#!/bin/bash

# 替换引擎标签脚本
# 原本实现：完全重构标签命名系统，建立统一的语义化标签规范
# 简化实现：仅将十六进制标签替换为语义化标签，保持代码结构不变

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 定义标签替换映射
declare -A label_map=(
    ["LAB_180052ce3"]="ENGINE_LABEL_RESOURCE_PROCESSING_CONTINUE"
    ["LAB_180052de5"]="ENGINE_LABEL_RESOURCE_PROCESSING_COMPLETE"
    ["LAB_1800535b0"]="ENGINE_LABEL_MEMORY_ALLOCATION_START"
    ["LAB_18005364c"]="ENGINE_LABEL_MEMORY_ALLOCATION_COMPLETE"
    ["LAB_180054302"]="ENGINE_LABEL_RENDER_PROCESSING_START"
    ["LAB_18005419d"]="ENGINE_LABEL_RENDER_PROCESSING_END"
    ["LAB_18005485e"]="ENGINE_LABEL_INTEGER_VALIDATION_LOOP"
    ["LAB_180054912"]="ENGINE_LABEL_PARAMETER_VALIDATION_LOOP"
    ["LAB_180054ec9"]="ENGINE_LABEL_ARRAY_INDEX_CHECK"
)

# 执行替换
for label in "${!label_map[@]}"; do
    new_label="${label_map[$label]}"
    echo "替换 $label 为 $new_label"
    sed -i "s/$label/$new_label/g" 02_core_engine.c
done

echo "标签替换完成"
