#!/bin/bash

# 05_networking.c 文件美化脚本
# 用于重命名剩余的逆向工程生成变量名和函数名

echo "开始美化 05_networking.c 文件..."

# 定义需要替换的函数映射
declare -A FUNCTION_REPLACEMENTS=(
    ["FUN_18086a910"]="ProcessNetworkConnectionData"
    ["FUN_18086ba90"]="ValidateNetworkPacket"
    ["FUN_18086b0d0"]="SendNetworkPacketData"
    ["FUN_18086cc70"]="ProcessNetworkConnectionRequest"
    ["FUN_18086d930"]="ProcessNetworkTimeout"
    ["FUN_18086d7d0"]="HandleNetworkTimeout"
    ["FUN_18086f7c0"]="ClearDataSizeBuffer"
    ["FUN_18086fa90"]="ProcessPacketStream"
    ["FUN_18086fb80"]="ProcessDataQueue"
    ["FUN_18086fc70"]="ProcessNetworkDataBuffer"
    ["FUN_1808681d0"]="ValidateConnectionData"
    ["FUN_180867bc0"]="InitializeNetworkConnection"
    ["FUN_180868490"]="InitializeConnectionData"
    ["FUN_180867600"]="CreateConnectionContext"
    ["FUN_1808682e0"]="ProcessNetworkFloatParameter"
    ["FUN_180868270"]="ValidateNetworkFloatParameter"
)

# 定义需要替换的变量映射
declare -A VARIABLE_REPLACEMENTS=(
    ["fStack_19c"]="NetworkFloatValidationValue"
    ["fStack_1a8"]="NetworkFloatProcessingValue"
    ["fStack_1a4"]="NetworkFloatSecondaryValue"
    ["fStack_2c8"]="NetworkFloatTemporaryValue"
    ["afStack_198"]="NetworkFloatArray"
    ["afStack_348"]="NetworkFloatValidationArray"
    ["NetworkParameterBuffer78"]="NetworkContextBuffer"
    ["NetworkParameterBuffer80"]="NetworkSecurityBuffer"
    ["NetworkParameterBuffer88"]="NetworkConfigurationBuffer"
    ["NetworkParameterBuffer20"]="NetworkStatusBuffer"
    ["pNetworkDataBufferIndex"]="networkDataBufferPointer"
    ["networkConnectionData"]="networkConnectionPointer"
    ["networkConnectionDataLow8"]="networkConnectionHandleHigh"
    ["networkConnectionDataLow0"]="networkConnectionHandleLow"
)

# 备份原文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c.backup

echo "开始替换函数名..."

# 替换函数名
for old_name in "${!FUNCTION_REPLACEMENTS[@]}"; do
    new_name="${FUNCTION_REPLACEMENTS[$old_name]}"
    echo "替换函数: $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
done

echo "开始替换变量名..."

# 替换变量名
for old_name in "${!VARIABLE_REPLACEMENTS[@]}"; do
    new_name="${VARIABLE_REPLACEMENTS[$old_name]}"
    echo "替换变量: $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
done

echo "美化完成！"
echo "备份文件保存在: /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c.backup"