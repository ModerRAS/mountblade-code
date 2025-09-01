#!/bin/bash

# 网络系统函数批量替换脚本
# 用于替换05_networking.c文件中的函数名

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 定义函数替换映射
declare -A FUNCTION_REPLACEMENTS=(
    ["FUN_18086ab52"]="ProcessNetworkSecurityContextValidation"
    ["FUN_18086ad32"]="ValidateNetworkSecurityPacketEx"
    ["FUN_18086ad4c"]="ProcessNetworkEncryptionContextEx"
    ["FUN_18086ae9c"]="InitializeNetworkSecurityValidationEx"
    ["FUN_18086aeab"]="ProcessNetworkSecurityValidationEx"
    ["FUN_18086aed0"]="ValidateNetworkSecurityContextEx"
    ["FUN_18086af12"]="ProcessNetworkSecurityDataTransferEx"
    ["FUN_18086af2f"]="CleanupNetworkSecurityContextEx"
    ["FUN_18086ba5c"]="ProcessNetworkConnectionDataValidationEx"
    ["FUN_18086ba6b"]="ValidateNetworkConnectionContextEx"
    ["FUN_18086c6cf"]="InitializeNetworkConnectionPoolEx"
    ["FUN_18086c83f"]="ProcessNetworkConnectionPoolEx"
    ["FUN_18086c84e"]="ValidateNetworkConnectionPoolEx"
    ["FUN_18086c870"]="CleanupNetworkConnectionPoolEx"
    ["FUN_18086c8b2"]="ProcessNetworkConnectionDataTransferEx"
    ["FUN_18086c8cf"]="ValidateNetworkConnectionDataTransferEx"
    ["FUN_18086ca3f"]="InitializeNetworkConnectionContextEx"
    ["FUN_18086ca4e"]="ProcessNetworkConnectionContextEx"
    ["FUN_18086ca70"]="ValidateNetworkConnectionContextEx"
    ["FUN_18086cab2"]="ProcessNetworkConnectionPacketTransferEx"
    ["FUN_18086cacf"]="ValidateNetworkConnectionPacketTransferEx"
    ["FUN_18086cc3f"]="InitializeNetworkConnectionSecurityEx"
    ["FUN_18086cc4e"]="ProcessNetworkConnectionSecurityEx"
    ["FUN_18086cc70"]="ValidateNetworkConnectionSecurityEx"
    ["FUN_18086ccaf"]="ProcessNetworkConnectionDataValidation"
    ["FUN_18086cccc"]="ValidateNetworkConnectionDataValidation"
    ["FUN_18086ce3f"]="InitializeNetworkConnectionBufferEx"
    ["FUN_18086ce4e"]="ProcessNetworkConnectionBufferEx"
    ["FUN_18086ce70"]="ValidateNetworkConnectionBufferEx"
    ["FUN_18086ceaf"]="ProcessNetworkConnectionStreamEx"
    ["FUN_18086cecc"]="ValidateNetworkConnectionStreamEx"
    ["FUN_18086d03f"]="InitializeNetworkConnectionTransferEx"
    ["FUN_18086d04e"]="ProcessNetworkConnectionTransferEx"
    ["FUN_18086d070"]="ValidateNetworkConnectionTransferEx"
    ["FUN_18086e9b0"]="ProcessNetworkConnectionDataStreamEx"
    ["FUN_18086fd60"]="InitializeNetworkConnectionQueueEx"
    ["FUN_18086fe50"]="ProcessNetworkConnectionQueueEx"
    ["FUN_18086ff40"]="ValidateNetworkConnectionQueueEx"
    ["FUN_180870030"]="ProcessNetworkConnectionBufferFinal"
    ["FUN_180870120"]="ValidateNetworkConnectionBufferFinal"
    ["FUN_1808708c0"]="ClearNetworkDataSizeBufferFinal"
)

# 执行替换
for old_name in "${!FUNCTION_REPLACEMENTS[@]}"; do
    new_name="${FUNCTION_REPLACEMENTS[$old_name]}"
    
    # 替换函数调用
    sed -i "s/\b$old_name\b/$new_name/g" "$FILE_PATH"
    
    # 更新注释中的函数名
    sed -i "s/原始函数名: $old_name$/原始函数名: $old_name，现已重命名为$new_name/" "$FILE_PATH"
    sed -i "s/原始函数名为$old_name/原始函数名为$old_name，现已重命名为$new_name/" "$FILE_PATH"
    
    echo "已替换: $old_name -> $new_name"
done

echo "所有函数替换完成"