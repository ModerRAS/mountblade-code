#!/bin/bash

# 美化标签脚本
# 将INIT_LABEL_SYSTEM_XXXXX格式改为更有意义的标签名

# 定义标签映射关系
declare -A label_map=(
    ["INIT_LABEL_SYSTEM_54302"]="INIT_LABEL_THREAD_CONTEXT_CHECK"
    ["INIT_LABEL_SYSTEM_56220"]="INIT_LABEL_MEMORY_ALLOCATION"
    ["INIT_LABEL_SYSTEM_56228"]="INIT_LABEL_RESOURCE_SETUP"
    ["INIT_LABEL_SYSTEM_58138"]="INIT_LABEL_COMPONENT_INIT"
    ["INIT_LABEL_SYSTEM_59885"]="INIT_LABEL_ENGINE_STARTUP"
    ["INIT_LABEL_SYSTEM_60026"]="INIT_LABEL_FRAMEWORK_READY"
    ["INIT_LABEL_SYSTEM_60007"]="INIT_LABEL_SYSTEM_COMPLETE"
    ["INIT_LABEL_SYSTEM_60993"]="INIT_LABEL_INITIALIZATION_DONE"
    ["INIT_LABEL_SYSTEM_65009"]="INIT_LABEL_RUNTIME_START"
    ["INIT_LABEL_SYSTEM_66971"]="INIT_LABEL_APPLICATION_READY"
)

# 遍历文件并替换标签
for label in "${!label_map[@]}"; do
    new_label="${label_map[$label]}"
    echo "替换 $label 为 $new_label"
    sed -i "s/$label/$new_label/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
done

echo "标签美化完成"