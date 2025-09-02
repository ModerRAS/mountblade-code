#!/bin/bash

# 批量重命名网络配置验证参数
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 定义重命名映射
declare -A rename_map=(
    ["NetworkConfigValidationParameter4"]="NetworkConfigConnectionTimeout"
    ["NetworkConfigValidationParameter5"]="NetworkConfigMaxRetries"
    ["NetworkConfigValidationParameter6"]="NetworkConfigBufferSize"
    ["NetworkConfigValidationParameter7"]="NetworkConfigPacketSize"
    ["NetworkConfigValidationParameter8"]="NetworkConfigPortRange"
    ["NetworkConfigValidationParameter9"]="NetworkConfigProtocolVersion"
    ["NetworkConfigValidationParameter10"]="NetworkConfigSecurityLevel"
    ["NetworkConfigValidationParameter11"]="NetworkConfigSessionTimeout"
    ["NetworkConfigValidationParameter12"]="NetworkConfigKeepAliveInterval"
    ["NetworkConfigValidationParameter13"]="NetworkConfigMaxConnections"
    ["NetworkConfigValidationParameter14"]="NetworkConfigBandwidthLimit"
    ["NetworkConfigValidationParameter15"]="NetworkConfigLatencyThreshold"
    ["NetworkConfigValidationParameter16"]="NetworkConfigPacketLossThreshold"
    ["NetworkConfigValidationParameter17"]="NetworkConfigQoSLevel"
    ["NetworkConfigValidationParameter18"]="NetworkConfigPriorityClass"
    ["NetworkConfigValidationParameter19"]="NetworkConfigTrafficShaping"
    ["NetworkConfigValidationParameter20"]="NetworkConfigLoadBalancing"
)

# 执行重命名
for old_name in "${!rename_map[@]}"; do
    new_name="${rename_map[$old_name]}"
    echo "重命名: $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" 00_data_definitions.h
done

echo "批量重命名完成"