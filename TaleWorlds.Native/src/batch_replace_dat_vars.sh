#!/bin/bash

# 批量替换DAT_变量名的脚本
# 注意：这是一个临时脚本，执行完成后会被删除

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 定义变量映射
declare -A var_mapping=(
    ["DAT_180be2198"]="UIPrimarySystemDataTable"
    ["DAT_180be2df8"]="UISecondaryDataTable"
    ["DAT_180be2288"]="UITertiaryDataTable"
    ["DAT_180be2d08"]="UIQuaternaryDataTable"
    ["DAT_180be2ee8"]="UIComponentDataTable"
    ["DAT_180980640"]="UIRenderContextTable"
    ["DAT_180c4ea94"]="UIEventCounter"
    ["DAT_180a40580"]="UILayoutContextTable"
    ["DAT_180c4eaf0"]="UIAnimationTable"
    ["DAT_180be2d0c"]="UITextureDataTable"
    ["DAT_180c0c210"]="UIFontDataTable"
    ["DAT_180be5748"]="UIMemoryPoolTable"
    ["DAT_180be5740"]="UIResourcePoolTable"
    ["DAT_180d9e5d0"]="UIShaderDataTable"
    ["DAT_180948180"]="UIVertexBufferTable"
    ["DAT_180c1b958"]="UIIndexBufferTable"
    ["DAT_180980c40"]="UIConstantBufferTable"
    ["DAT_180947430"]="UIVectorProcessingMask"
    ["DAT_180c108d0"]="UIRenderStateTable"
)

# 执行替换
for var in "${!var_mapping[@]}"; do
    replacement="${var_mapping[$var]}"
    echo "替换 $var 为 $replacement"
    sed -i "s/$var/$replacement/g" 04_ui_system.c
done

echo "批量替换完成"