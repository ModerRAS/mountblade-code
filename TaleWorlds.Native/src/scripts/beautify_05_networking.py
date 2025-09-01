#!/bin/bash

# 创建临时脚本目录
mkdir -p /dev/shm/mountblade-code/TaleWorlds.Native/src/scripts

# 创建批量替换脚本
cat > /dev/shm/mountblade-code/TaleWorlds.Native/src/scripts/beautify_05_networking.sh << 'EOF'
#!/bin/bash

# 定义要替换的函数映射
declare -A function_map=(
    ["FUN_1808624a0"]="ProcessNetworkConnectionStateManager"
    ["FUN_180862080"]="UpdateNetworkConnectionData"
    ["FUN_1808d5520"]="ProcessNetworkDataTransfer"
    ["FUN_180864850"]="ValidateNetworkConnectionState"
    ["FUN_1808646a0"]="CheckNetworkConnectionIntegrityEx"
    ["FUN_180863bd0"]="ValidateNetworkConnectionPrimary"
    ["FUN_180864780"]="ValidateNetworkConnectionSecondary"
    ["FUN_180853230"]="InitializeNetworkConnectionTransfer"
    ["FUN_1808d5bd0"]="ProcessNetworkContextData"
    ["FUN_18085c230"]="ProcessNetworkPacketTransfer"
    ["FUN_1808d52a0"]="HandleNetworkDataPacket"
    ["FUN_1808d5da0"]="FinalizeNetworkContext"
    ["FUN_180868800"]="ValidateNetworkConnectionFlags"
    ["FUN_180865800"]="ProcessNetworkSecurityCheck"
    ["FUN_1808ca6f0"]="ValidateNetworkConnectionHandle"
    ["FUN_18085ff70"]="CheckNetworkConnectionAvailable"
    ["FUN_180867d60"]="InitializeNetworkConnectionBuffer"
    ["FUN_1808b83b0"]="ProcessNetworkConnectionRequestEx"
    ["FUN_1808538a0"]="HandleNetworkConnectionCallback"
    ["FUN_1808b8130"]="ProcessNetworkConnectionResponse"
    ["FUN_1808b9030"]="ValidateNetworkConnectionEndpoint"
    ["FUN_18085f440"]="CheckNetworkConnectionStatusEx"
    ["FUN_180853c50"]="GetNetworkConnectionParameter"
    ["FUN_1808d2430"]="UpdateNetworkConnectionTimestamp"
    ["FUN_18085f0e0"]="InitializeNetworkConnectionSession"
    ["FUN_1808d73b0"]="ProcessNetworkConnectionEvent"
    ["FUN_1808c2150"]="ValidateNetworkConnectionCredentials"
    ["FUN_180853d20"]="CheckNetworkConnectionAuthentication"
    ["FUN_1808c1410"]="ProcessNetworkConnectionFinalize"
    ["FUN_1808650a0"]="CleanupNetworkConnectionSession"
    ["FUN_18085f670"]="GetNetworkConnectionInfo"
    ["FUN_1808bef40"]="ProcessNetworkSocketOperation"
    ["FUN_1808bc010"]="ValidateNetworkSocketConnection"
    ["FUN_1808caa20"]="ProcessNetworkBufferOperation"
    ["FUN_1808cc190"]="HandleNetworkPacketProcessing"
    ["FUN_1808d6650"]="ValidateNetworkPacketTransfer"
    ["FUN_180868970"]="CheckNetworkConnectionValidity"
    ["FUN_180860480"]="ProcessNetworkConnectionStatus"
    ["FUN_1808ccc40"]="InitializeNetworkConnectionPool"
    ["FUN_1808d6410"]="HandleNetworkConnectionProtocol"
    ["FUN_1808d84d0"]="ValidateNetworkDataTransfer"
    ["FUN_1808cc000"]="ProcessNetworkConnectionQueue"
    ["FUN_18085ba10"]="InitializeNetworkPacketBuffer"
    ["FUN_1808c7260"]="ProcessNetworkPacketValidation"
    ["FUN_180856ec0"]="HandleNetworkConnectionSync"
    ["FUN_1808d3ee0"]="FinalizeNetworkDataTransfer"
    ["FUN_18085d7f0"]="ProcessNetworkSecurityContext"
    ["FUN_18085bb20"]="InitializeNetworkConnectionAuth"
    ["FUN_1808d5520"]="ProcessNetworkConnectionTransfer"
    ["FUN_180868330"]="ValidateNetworkConnectionData"
)

# 遍历所有需要替换的函数
for old_name in "${!function_map[@]}"; do
    new_name="${function_map[$old_name]}"
    
    # 使用sed进行替换
    sed -i "s/$old_name/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
    
    echo "已替换: $old_name -> $new_name"
done

echo "批量替换完成"
EOF

# 设置脚本执行权限
chmod +x /dev/shm/mountblade-code/TaleWorlds.Native/src/scripts/beautify_05_networking.sh

# 执行脚本
/dev/shm/mountblade-code/TaleWorlds.Native/src/scripts/beautify_05_networking.sh

# 清理脚本
rm -f /dev/shm/mountblade-code/TaleWorlds.Native/src/scripts/beautify_05_networking.sh