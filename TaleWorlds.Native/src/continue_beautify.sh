#!/bin/bash

# 继续美化 03_rendering.c 文件中的变量名
# 替换函数体中剩余的旧变量名

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 定义要替换的变量映射
declare -A variable_map=(
    ["lStack_330"]="DataParameterCopy"
    ["uStack_334"]="StringLength"
    ["uStack_328"]="ShaderConstantA"
    ["uStack_320"]="ShaderConstantB"
    ["uStack_318"]="ShaderConstantC"
    ["uStack_2fc"]="RenderDepth"
    ["lStack_2f8"]="TransformMatrix"
    ["uStack_2f0"]="RenderScale"
    ["uStack_2e8"]="RenderRotation"
    ["uStack_2e0"]="RenderTranslation"
    ["puStack_228"]="RenderShaderState"
    ["plStack_2a0"]="RenderBufferHandle"
    ["uStack_27c"]="RenderScaleFactor"
    ["StackParameter288"]="RenderTranslation"
    ["StackParameter284"]="RenderRotationX"
    ["StackParameter280"]="RenderRotationY"
    ["uStack_2d8"]="RenderRotationZ"
    ["fStack_2c8"]="RenderTransformMatrix"
)

# 遍历所有变量映射进行替换
for old_var in "${!variable_map[@]}"; do
    new_var="${variable_map[$old_var]}"
    echo "替换变量: $old_var -> $new_var"
    
    # 使用 sed 进行替换，添加单词边界以避免误替换
    sed -i "s/\b$old_var\b/$new_var/g" 03_rendering.c
done

echo "变量替换完成"