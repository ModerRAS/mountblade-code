#!/bin/bash

# 美化03_rendering.c文件中的参数名
# 将param_参数改为符合PascalCase规范的语义化名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 备份原文件
cp "$FILE_PATH" "$FILE_PATH.backup"

# 参数名替换映射
declare -A param_replacements=(
    ["param_1"]="ParameterValue"
    ["param_2"]="SecondaryValue"
    ["param_3"]="ThirdValue"
    ["param_4"]="FourthValue"
    ["param_5"]="FifthValue"
    ["param_6"]="SixthValue"
    ["param_7"]="SeventhValue"
    ["param_8"]="EighthValue"
)

# 执行替换
for old_name in "${!param_replacements[@]}"; do
    new_name="${param_replacements[$old_name]}"
    echo "替换 $old_name 为 $new_name"
    sed -i "s/\b${old_name}\b/${new_name}/g" "$FILE_PATH"
done

# 处理特殊情况：根据函数上下文优化参数名
echo "根据函数上下文优化参数名..."

# ConfigureRenderMaterialProperty函数的参数
sed -i 's/ConfigureRenderMaterialProperty.*param_3.*param_4/ConfigureRenderMaterialProperty(longlong objectState, undefined4 contextData, undefined8 propertyValue, undefined8 secondaryValue)/g' "$FILE_PATH"

# InitializeRenderMaterialCache函数的参数
sed -i 's/InitializeRenderMaterialCache.*param_3/InitializeRenderMaterialCache(undefined8 objectState, longlong *contextData, undefined8 cacheSize)/g' "$FILE_PATH"

# ProcessRenderTextureData函数的参数
sed -i 's/ProcessRenderTextureData.*param_3/ProcessRenderTextureData(undefined8 objectState, undefined8 contextData, undefined8 textureFormat)/g' "$FILE_PATH"

# SetupRenderTextureSampler函数的参数
sed -i 's/SetupRenderTextureSampler.*param_3/SetupRenderTextureSampler(undefined8 objectState, undefined8 contextData, undefined8 samplerType)/g' "$FILE_PATH"

# CreateRenderTextureView函数的参数
sed -i 's/CreateRenderTextureView.*param_3/CreateRenderTextureView(undefined8 objectState, undefined8 contextData, undefined8 viewType)/g' "$FILE_PATH"

# UpdateRenderTextureMipmap函数的参数
sed -i 's/UpdateRenderTextureMipmap.*param_3/UpdateRenderTextureMipmap(undefined8 objectState, undefined8 contextData, undefined8 updateFlags)/g' "$FILE_PATH"

# BindRenderTextureToShader函数的参数
sed -i 's/BindRenderTextureToShader.*param_3/BindRenderTextureToShader(undefined8 objectState, undefined8 contextData, undefined8 shaderSlot)/g' "$FILE_PATH"

# SetRenderTextureFilterMode函数的参数
sed -i 's/SetRenderTextureFilterMode.*param_3/SetRenderTextureFilterMode(undefined8 objectState, undefined8 contextData, undefined8 filterMode)/g' "$FILE_PATH"

# SetRenderTextureAddressMode函数的参数
sed -i 's/SetRenderTextureAddressMode.*param_3/SetRenderTextureAddressMode(undefined8 objectState, undefined8 contextData, undefined8 addressMode)/g' "$FILE_PATH"

# GenerateRenderTextureMipmap函数的参数
sed -i 's/GenerateRenderTextureMipmap.*param_3/GenerateRenderTextureMipmap(undefined8 objectState, undefined8 contextData, undefined8 generateFlags)/g' "$FILE_PATH"

echo "参数名美化完成"