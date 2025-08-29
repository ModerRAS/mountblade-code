#!/bin/bash

# 美化99_unmatched_functions.c文件的脚本
# 批量替换函数名和变量名，使其更具可读性

# 未分类函数变量名映射
declare -A unmatched_variables=(
    ["g_texture_node_data_180a01078"]="g_textureNodeData"
    ["g_unknown_180a00388"]="g_textureNodeConfig"
    ["g_model_node_data_180a01050"]="g_modelNodeData"
    ["g_unknown_180a003a0"]="g_modelNodeConfig1"
    ["g_model_node_config_180a01028"]="g_modelNodeConfig2"
    ["g_unknown_180a003b8"]="g_modelNodeConfig3"
    ["g_shader_node_data_180a01000"]="g_shaderNodeData"
    ["g_unknown_180a003d0"]="g_shaderNodeConfig1"
    ["g_shader_node_config_180a00fd8"]="g_shaderNodeConfig2"
    ["UNK_1800868c0"]="g_shaderSystemData"
    ["UNK_180a003e8"]="g_shaderNodeConfig3"
    ["DAT_180a00fb0"]="g_shaderDataTable"
    ["UNK_180a00400"]="g_shaderNodeConfig4"
    ["DAT_180a00e28"]="g_shaderMemoryData"
    ["UNK_180a00430"]="g_lightNodeData"
    ["DAT_180a00d48"]="g_lightDataTable"
    ["UNK_180a00460"]="g_entityNodeData"
    ["DAT_180a00bb0"]="g_entityDataTable"
    ["UNK_180a004a8"]="g_entityNodeConfig"
    ["DAT_180a00b88"]="g_cameraDataTable"
    ["UNK_180a004c0"]="g_cameraNodeConfig"
    ["DAT_180bf64d0"]="g_particleDataTable1"
    ["DAT_180bf64d8"]="g_particleDataTable2"
)

# 应用变量名替换
echo "应用未分类函数变量名替换..."
for var in "${!unmatched_variables[@]}"; do
    sed -i "s/$var/${unmatched_variables[$var]}/g" src/99_unmatched_functions.c
done

echo "未分类函数代码美化完成"