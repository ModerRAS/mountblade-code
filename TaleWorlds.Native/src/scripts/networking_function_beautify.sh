#!/bin/bash

# 网络模块函数名美化脚本
# 用于批量重命名05_networking.c中的函数名

# 定义函数映射
declare -A function_mappings=(
    ["FUN_1808915d0"]="ProcessConnectionStatusUpdate"
    ["FUN_1808916f0"]="HandleConnectionDataTransfer"
    ["FUN_180891890"]="ValidateConnectionParameters"
    ["FUN_180891900"]="InitializeConnectionHandler"
    ["FUN_180891970"]="ProcessConnectionSecurity"
    ["FUN_1808919c0"]="ResetConnectionContext"
    ["FUN_180891cf0"]="CleanupConnectionResources"
    ["FUN_180891e40"]="ReleaseConnectionHandles"
    ["FUN_180894bcc"]="InitializeNetworkConnectionPool"
    ["FUN_180894bf5"]="SetNetworkConnectionParameter"
    ["FUN_180894d52"]="ResetNetworkConnectionState"
    ["FUN_180894d60"]="ProcessNetworkConnectionWrite"
    ["FUN_180894dd0"]="InitializeNetworkConnectionContext"
    ["FUN_1808953bf"]="ProcessNetworkPacketWithSize"
    ["FUN_180895b89"]="CleanupNetworkResources"
    ["FUN_180895bb0"]="ValidateNetworkConnectionStatus"
    ["FUN_1808974f4"]="InitializeNetworkSecurityContext"
    ["FUN_180897560"]="ResetNetworkSecurityContext"
    ["FUN_1808975a6"]="ValidateNetworkSecurityContext"
    ["FUN_180897644"]="InitializeNetworkPacketQueue"
    ["FUN_1808976b0"]="ResetNetworkPacketQueue"
    ["FUN_180897859"]="ProcessNetworkPerformanceMetrics"
    ["FUN_180897afe"]="InitializeNetworkErrorHandler"
    ["FUN_180897b0e"]="ResetNetworkErrorHandler"
    ["FUN_180897b16"]="ValidateNetworkErrorHandler"
    ["FUN_18089802e"]="InitializeNetworkLoggingSystem"
    ["FUN_1808986b0"]="ProcessNetworkDataStream"
    ["FUN_180898fc0"]="HandleNetworkConnectionEvent"
    ["FUN_180899040"]="ProcessNetworkConnectionEvent"
)

# 应用函数映射
for old_name in "${!function_mappings[@]}"; do
    new_name="${function_mappings[$old_name]}"
    
    # 替换函数定义
    sed -i "s|void $old_name(|void $new_name(|g" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
    sed -i "s|int $old_name(|int $new_name(|g" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
    sed -i "s|uint $old_name(|uint $new_name(|g" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
    sed -i "s|long $old_name(|long $new_name(|g" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
    sed -i "s|NetworkStatus $old_name(|NetworkStatus $new_name(|g" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
    
    # 替换函数调用
    sed -i "s|$old_name(|$new_name(|g" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
    
    # 更新注释
    sed -i "s|// 函数:.*$old_name|// 函数: $new_name|g" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
    sed -i "s|\*FUN_$old_name|\*$new_name|g" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
    
    echo "重命名函数: $old_name -> $new_name"
done

echo "函数名美化完成"