#!/bin/bash

# 01_initialization.c 文件美化脚本
# 专门用于美化函数名和变量名

# 函数名映射表
declare -A FUNCTION_MAPPINGS=(
    ["FUN_180045ee0"]="InitializeSystemResources"
    ["FUN_180045f60"]="ProcessSystemConfiguration"
    ["FUN_180045f81"]="ValidateSystemState"
    ["FUN_180045fa6"]="SetupSystemMemory"
    ["FUN_180045fc0"]="ConfigureSystemParameters"
    ["FUN_180046130"]="InitializeSystemData"
    ["FUN_180046160"]="FinalizeSystemSetup"
    ["FUN_180046400"]="SetupSystemMemoryPool"
    ["FUN_1800464f0"]="ConfigureSystemBuffers"
)

# 变量名映射表
declare -A VARIABLE_MAPPINGS=(
    ["fVar1"]="screenWidth"
    ["fVar2"]="screenHeight"
    ["fVar3"]="aspectRatio"
    ["uVar9"]="textureCount"
    ["uVar10"]="shaderCount"
    ["iVar11"]="renderQuality"
    ["pfVar12"]="vertexBufferPointer"
    ["iVar14"]="frameBufferCount"
    ["uVar15"]="vertexCount"
    ["iVar16"]="indexCount"
    ["fVar17"]="depthValue"
    ["fVar18"]="nearPlane"
    ["fVar19"]="farPlane"
    ["uVar20"]="lightCount"
    ["iVar21"]="materialCount"
    ["fVar22"]="ambientLight"
    ["fVar23"]="diffuseLight"
    ["fVar24"]="specularLight"
)

echo "开始美化 01_initialization.c 文件..."

# 备份原文件
cp "01_initialization.c" "01_initialization.c.backup"

# 替换函数名
for old_name in "${!FUNCTION_MAPPINGS[@]}"; do
    new_name="${FUNCTION_MAPPINGS[$old_name]}"
    echo "替换函数名: $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" "01_initialization.c"
done

# 替换变量名
for old_name in "${!VARIABLE_MAPPINGS[@]}"; do
    new_name="${VARIABLE_MAPPINGS[$old_name]}"
    echo "替换变量名: $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" "01_initialization.c"
done

echo "美化完成！"