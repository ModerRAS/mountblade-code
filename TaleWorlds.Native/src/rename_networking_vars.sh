#!/bin/bash

# 网络模块变量重命名脚本
# 用于将UNK_变量重命名为语义化名称

# 定义重命名映射
declare -A RENAME_MAP=(
    # 数据处理相关
    ["UNK_180981f40"]="NetworkDataProcessingBuffer"
    ["UNK_180981d40"]="NetworkDataValidationBuffer"
    ["UNK_180982978"]="NetworkPacketProcessingBuffer"
    ["UNK_180982038"]="NetworkPacketControlBuffer"
    ["UNK_180981e40"]="NetworkPacketStatusBuffer"
    ["UNK_180982670"]="NetworkPacketQueueBuffer"
    ["UNK_180982570"]="NetworkConnectionBuffer"
    ["UNK_180982460"]="NetworkValidationBuffer"
    ["UNK_1809824e8"]="NetworkErrorBuffer"
    ["UNK_1809823e0"]="NetworkTimeoutBuffer"
    ["UNK_180982128"]="NetworkManagementBuffer"
    ["UNK_1809821b0"]="NetworkControlBuffer"
    ["UNK_1809822c8"]="NetworkStatusBuffer"
    ["UNK_180982350"]="NetworkDataBuffer"
    ["UNK_180982770"]="NetworkRoutingBuffer"
    ["UNK_180984530"]="NetworkSecurityBuffer"
    
    # 错误处理相关
    ["UNK_180984908"]="NetworkErrorStatusBuffer"
    ["UNK_1809846b0"]="NetworkErrorContextBuffer"
    ["UNK_180981fc0"]="NetworkErrorDataBuffer"
    ["UNK_180984790"]="NetworkErrorValidationBuffer"
    ["UNK_180984690"]="NetworkErrorProcessingBuffer"
    ["UNK_180984730"]="NetworkErrorHandlingBuffer"
    ["UNK_180984630"]="NetworkErrorManagementBuffer"
    ["UNK_180957410"]="NetworkErrorLoggingBuffer"
    ["UNK_180984768"]="NetworkErrorReportingBuffer"
    ["UNK_180984830"]="NetworkErrorControlBuffer"
    ["UNK_1809849d0"]="NetworkErrorSecurityBuffer"
    ["UNK_180984700"]="NetworkErrorConnectionBuffer"
    ["UNK_1809846e0"]="NetworkErrorSystemBuffer"
    ["UNK_180984948"]="NetworkErrorTimeoutBuffer"
    ["UNK_180984990"]="NetworkErrorAuthBuffer"
    ["UNK_180984928"]="NetworkErrorNetworkBuffer"
    ["UNK_180983680"]="NetworkErrorProtocolBuffer"
    ["UNK_180984968"]="NetworkErrorCodeBuffer"
    
    # 系统状态相关
    ["UNK_180983618"]="NetworkSystemStatusBuffer"
    ["UNK_1809845a0"]="NetworkSystemContextBuffer"
    ["UNK_1809845c0"]="NetworkSystemDataBuffer"
    ["UNK_180984540"]="NetworkSystemControlBuffer"
    ["UNK_1809847d8"]="NetworkSystemValidationBuffer"
    ["UNK_180983c78"]="NetworkSystemProcessingBuffer"
    ["UNK_1809838a8"]="NetworkSystemManagementBuffer"
    ["UNK_180983840"]="NetworkSystemQueueBuffer"
    ["UNK_1809570e8"]="NetworkSystemErrorBuffer"
    ["UNK_180957208"]="NetworkSystemTimeoutBuffer"
    ["UNK_1809823f8"]="NetworkSystemConnectionBuffer"
    ["UNK_180983e88"]="NetworkSystemSecurityBuffer"
    ["UNK_180984038"]="NetworkSystemAuthBuffer"
    ["UNK_180982260"]="NetworkSystemProtocolBuffer"
    ["UNK_180983a60"]="NetworkSystemDataBuffer"
    ["UNK_1809837c0"]="NetworkSystemControlBuffer"
    ["UNK_180983950"]="NetworkSystemStatusBuffer"
    ["UNK_180983be8"]="NetworkSystemValidationBuffer"
    ["UNK_1809842e0"]="NetworkSystemErrorBuffer"
    ["UNK_180983738"]="NetworkSystemQueueBuffer"
    ["UNK_1809844c8"]="NetworkSystemCacheBuffer"
    ["UNK_180983ae8"]="NetworkSystemManagementBuffer"
    ["UNK_180983b68"]="NetworkSystemBuffer"
    
    # 连接相关
    ["UNK_180982ab0"]="NetworkConnectionStatusData"
    ["UNK_180982790"]="NetworkConnectionContextData"
    ["UNK_1809827f8"]="NetworkConnectionValidationData"
    ["UNK_180957310"]="NetworkConnectionErrorData"
    ["UNK_180958180"]="NetworkConnectionControlData"
    ["UNK_180984a30"]="NetworkConnectionHandleData"
    ["UNK_180984a60"]="NetworkConnectionBuffer"
    ["UNK_180984a70"]="NetworkConnectionQueueData"
    ["UNK_180984aa0"]="NetworkConnectionSecurityData"
    ["UNK_180986f68"]="NetworkConnectionAuthData"
    ["UNK_180984ab8"]="NetworkConnectionProtocolData"
    ["UNK_180986f90"]="NetworkConnectionTimeoutData"
    ["UNK_180984b50"]="NetworkConnectionManagementData"
    ["UNK_180984ac0"]="NetworkConnectionStatusBuffer"
    ["UNK_180984ac8"]="NetworkConnectionControlBuffer"
    ["UNK_180984ad0"]="NetworkConnectionDataBuffer"
    ["UNK_180a0b198"]="NetworkConnectionValidationBuffer"
    ["UNK_180984be0"]="NetworkConnectionErrorBuffer"
    ["UNK_180984b50"]="NetworkConnectionQueueBuffer"
    ["UNK_180984cd0"]="NetworkConnectionSecurityBuffer"
    ["UNK_18095af38"]="NetworkConnectionAuthBuffer"
    ["UNK_180984c90"]="NetworkConnectionProtocolBuffer"
    ["UNK_180984ca0"]="NetworkConnectionStatusBuffer"
    ["UNK_180984cb0"]="NetworkConnectionControlBuffer"
    ["UNK_180984cc0"]="NetworkConnectionDataBuffer"
    ["UNK_18095b500"]="NetworkConnectionTimeoutBuffer"
    ["UNK_180863400"]="NetworkConnectionManagementBuffer"
    ["UNK_1808633a0"]="NetworkConnectionValidationBuffer"
    ["UNK_180984d50"]="NetworkConnectionErrorBuffer"
    
    # 处理相关
    ["UNK_180957600"]="NetworkProcessingStatusData"
    ["UNK_180984d50"]="NetworkProcessingBuffer"
)

# 执行替换
for old_name in "${!RENAME_MAP[@]}"; do
    new_name="${RENAME_MAP[$old_name]}"
    echo "替换: $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" "$1"
done

echo "变量重命名完成"