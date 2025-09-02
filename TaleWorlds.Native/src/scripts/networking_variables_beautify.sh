#!/bin/bash

# 网络模块变量名美化脚本
# 用于批量替换05_networking.c文件中的变量名

# 定义替换规则
declare -A replacements=(
    # 通用变量名替换
    ["pnetworkSecurityContextData"]="networkSecurityContextData"
    ["pnetworkContextData"]="networkContextData"
    ["pnetworkConnectionData"]="networkConnectionData"
    ["pnetworkBuffer"]="networkBuffer"
    ["pnetworkPacket"]="networkPacket"
    
    # 状态变量替换
    ["ValidationStatus"]="validationStatus"
    ["networkOffset20"]="networkDataOffset"
    ["networkSecurityValidationKey"]="securityValidationKey"
    ["networkConnectionStatusFlag"]="connectionStatusFlag"
    
    # 缓冲区变量替换
    ["NetworkRequestnetworkDataBuffer"]="networkRequestDataBuffer"
    ["ContextnetworkDataBuffer"]="networkContextDataBuffer"
    ["NetworkDataBuffer"]="networkDataBuffer"
    ["SecurityValidationData"]="securityValidationData"
    
    # 连接相关变量替换
    ["ConnectionParameterCount"]="connectionParameterCount"
    ["ConnectionParameterSeven"]="connectionParameterSeven"
    ["ConnectionDataDefault"]="connectionDataDefault"
    ["ConnectionSettings"]="connectionSettings"
    ["ConnectionContext"]="connectionContext"
    
    # 标签美化
    ["LabelConnectionError"]="LabelConnectionErrorHandler"
    ["LabelHashTableFound"]="LabelHashTableEntryFound"
    ["LabelNetworkValidationStart"]="LabelNetworkValidationStartPoint"
    ["LabelNetworkSizeValidation"]="LabelNetworkSizeValidationCheck"
    ["LabelNetworkSizeCheck"]="LabelNetworkSizeBoundCheck"
    ["LabelValidationFailure"]="LabelValidationFailureHandler"
    ["LabelDataSizeValidation"]="LabelDataSizeValidationCheck"
    ["LabelNetworkFlagsValidation"]="LabelNetworkFlagsValidationCheck"
    ["LabelConnectionFlagsCheck"]="LabelConnectionFlagsValidationCheck"
    ["LabelConnectionFlagsExit"]="LabelConnectionFlagsExitPoint"
    ["LabelContinueConnectionProcessing"]="LabelContinueConnectionProcessingLoop"
)

# 执行替换操作
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    echo "替换: $old_name -> $new_name"
    
    # 使用sed进行替换
    sed -i "s/\b$old_name\b/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
done

echo "网络模块变量名美化完成"