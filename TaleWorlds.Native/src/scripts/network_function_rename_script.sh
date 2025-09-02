#!/bin/bash

# 网络模块函数重命名脚本
# 用于将05_networking.c中的FUN_函数名重命名为语义化名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原文件
cp 05_networking.c 05_networking.c.backup

# 函数名替换映射
declare -A function_replacements=(
    ["FUN_18088cae0"]="CleanupNetworkConnectionContext"
    ["FUN_1808b6e80"]="ProcessNetworkPacketData"
    ["FUN_1808dec80"]="GetNetworkSystemStatus"
    ["FUN_18088ac50"]="ValidateNetworkPacket"
    ["FUN_18084ec60"]="ValidateNetworkSecurityContext"
    ["FUN_1808c17c0"]="GetNextNetworkContext"
    ["FUN_18088fb40"]="CheckNetworkConnectionTimeout"
    ["FUN_18085ff30"]="GetNetworkFlags"
    ["FUN_1808c7b30"]="ProcessNetworkContextTransfer"
    ["FUN_1808c7dc0"]="ValidateNetworkOperationStatus"
    ["FUN_1808bdd90"]="ValidateNetworkConnectionHandle"
    ["FUN_180894860"]="InitializeNetworkConnection"
    ["FUN_1808c44f0"]="ValidateNetworkSystemStatus"
    ["FUN_180894dd0"]="GetNetworkPrimaryStatus"
    ["FUN_1808d7020"]="ReleaseNetworkContextArray"
    ["FUN_180875fc0"]="ProcessNetworkHandleStatus"
    ["FUN_180891360"]="ValidateNetworkConnectionParameters"
    ["FUN_1808913c0"]="ProcessNetworkConnectionValidation"
    ["FUN_1808915d0"]="ProcessConnectionStateUpdateHandler"
    ["FUN_180891650"]="ValidateNetworkConnectionParameters"
    ["FUN_1808916f0"]="ProcessNetworkContextTraversal"
    ["FUN_180891820"]="ValidateConnectionFlagsStatus"
    ["FUN_180891890"]="ProcessConnectionInitialization"
    ["FUN_180891900"]="ProcessConnectionDataTransfer"
    ["FUN_180891210"]="ProcessNetworkConnectionStatusValidation"
    ["FUN_180891492"]="GetNetworkConnectionStatusCode"
    ["FUN_1808914ac"]="GetNetworkConnectionMaximumCount"
    ["FUN_1808914e0"]="ProcessNetworkPacketTransfer"
    ["FUN_18088ff94"]="ValidateConnectionIndexAndStatus"
    ["FUN_180890040"]="InitializeNetworkConnectionContext"
    ["FUN_18089022b"]="NetworkSystemInitializeModule"
    ["FUN_180890246"]="ProcessNetworkConnectionValidation"
    ["FUN_180890270"]="ValidateAndRegisterNetworkConnection"
    ["FUN_180853000"]="ValidateNetworkContextEntry"
    ["FUN_1808902b0"]="ProcessNetworkConnectionRegistration"
    ["FUN_18089064b"]="ProcessNetworkSecurityValidation"
    ["FUN_180890650"]="ValidateNetworkConnectionSecurity"
    ["FUN_180890673"]="ProcessNetworkSecurityCheck"
    ["FUN_18089069c"]="ValidateNetworkSecurityParameters"
    ["FUN_1808906f0"]="InitializeNetworkSecurityContext"
    ["FUN_180890b65"]="ProcessNetworkConnectionTimeout"
)

# 执行替换
for old_name in "${!function_replacements[@]}"; do
    new_name="${function_replacements[$old_name]}"
    sed -i "s/$old_name/$new_name/g" 05_networking.c
    echo "替换 $old_name -> $new_name"
done

echo "函数重命名完成"