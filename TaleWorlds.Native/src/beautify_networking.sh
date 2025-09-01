#!/bin/bash

# 网络模块代码美化脚本
# 用于批量重命名网络模块中的变量和函数

# 定义文件路径
NETWORKING_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 备份原文件
cp "$NETWORKING_FILE" "$NETWORKING_FILE.backup"

# 函数名映射 - 将FUN_开头的函数重命名为有意义的名称
declare -A function_mappings=(
    ["FUN_180854d7d"]="ProcessNetworkConnectionDataEx"
    ["FUN_180854df5"]="ValidateNetworkConnectionEx"
    ["FUN_180854f3f"]="SendNetworkPacketEx"
    ["FUN_180855130"]="HandleNetworkPacketTransmission"
    ["FUN_1808552ca"]="EstablishNetworkConnectionEx"
    ["FUN_180855415"]="InitializeNetworkSessionEx"
    ["FUN_180855467"]="TerminateNetworkConnectionEx"
    ["FUN_18085551e"]="CheckNetworkConnectionStatusEx"
    ["FUN_180855559"]="ValidateNetworkConnectionState"
    ["FUN_180856512"]="ProcessNetworkSecurityHandshake"
    ["FUN_18085791f"]="NetworkConnectionCleanup"
    ["FUN_180857928"]="NetworkConnectionReset"
    ["FUN_18085b050"]="ProcessNetworkPacketBuffer"
    ["FUN_18085b595"]="HandleNetworkDataTransmission"
    ["FUN_18085b8e0"]="InitializeNetworkSubsystem"
    ["FUN_18085b920"]="GetNetworkConnectionPointer"
    ["FUN_18085ba10"]="GetNetworkPacketPointer"
    ["FUN_18085bb20"]="GetNetworkDataPointer"
    ["FUN_18085bbe0"]="ProcessNetworkEvent"
    ["FUN_18085c230"]="HandleNetworkDisconnect"
    ["FUN_18085c4b0"]="SendNetworkDataPacket"
    ["FUN_18085c5b0"]="ReceiveNetworkDataPacket"
    ["FUN_18085c820"]="GetNetworkStatusPointer"
    ["FUN_18085c8a0"]="GetNetworkContextPointer"
    ["FUN_18085ca30"]="ProcessNetworkTimeout"
    ["FUN_18085d460"]="ValidateNetworkDataStream"
    ["FUN_18085d650"]="ProcessNetworkAuthentication"
    ["FUN_18085d7f0"]="HandleNetworkEncryption"
    ["FUN_18085d860"]="ProcessNetworkDecryption"
    ["FUN_18085dbf0"]="ReleaseNetworkResource"
    ["FUN_18085dca0"]="CleanupNetworkConnection"
    ["FUN_18085dd4b"]="ResetNetworkInterface"
    ["FUN_18085dd7c"]="InitializeNetworkInterface"
    ["FUN_18085dff0"]="SetupNetworkConnection"
    ["FUN_18085e003"]="ConfigureNetworkSettings"
    ["FUN_18085e112"]="InitializeNetworkStack"
    ["FUN_18085e221"]="ResetNetworkStack"
    ["FUN_18085e4a0"]="ProcessNetworkError"
    ["FUN_18085e820"]="CreateNetworkSocket"
    ["FUN_18085e860"]="BindNetworkSocket"
    ["FUN_18085e990"]="ConnectNetworkSocket"
    ["FUN_18085ea80"]="ListenNetworkSocket"
    ["FUN_18085eabf"]="AcceptNetworkConnection"
    ["FUN_18085ec90"]="SendNetworkMessage"
    ["FUN_18085ee30"]="BroadcastNetworkMessage"
    ["FUN_18085ee5e"]="MulticastNetworkMessage"
    ["FUN_18085eec6"]="GetNetworkAddress"
    ["FUN_18085ef10"]="GetNetworkHandle"
    ["FUN_18085f080"]="GetNetworkTimestamp"
    ["FUN_18085f0e0"]="ValidateNetworkAddress"
    ["FUN_18085f11f"]="ResolveNetworkHostname"
    ["FUN_18085f163"]="LookupNetworkService"
    ["FUN_18085f2d3"]="GetNetworkStatistics"
    ["FUN_18085f336"]="UpdateNetworkStatistics"
    ["FUN_18085f340"]="MonitorNetworkTraffic"
    ["FUN_18085f36d"]="AnalyzeNetworkPerformance"
    ["FUN_18085f39d"]="OptimizeNetworkPerformance"
    ["FUN_18085f440"]="ConfigureNetworkQuality"
    ["FUN_18085f500"]="MeasureNetworkLatency"
    ["FUN_18085f5f0"]="HandleNetworkCompression"
    ["FUN_18085f630"]="HandleNetworkDecompression"
    ["FUN_18085f670"]="InitializeNetworkCompression"
    ["FUN_18085f812"]="ProcessNetworkCompression"
)

# 变量名映射 - 将unk_开头的变量重命名为有意义的名称
declare -A variable_mappings=(
    ["DAT_180c4ea94"]="NetworkConnectionTemplate"
    ["unk_180984d50"]="NetworkSecurityContext"
    ["in_stack_00000130"]="NetworkSecurityGuard1"
    ["in_stack_00000140"]="NetworkSecurityGuard2"
    ["in_stack_00000150"]="NetworkSecurityGuard3"
    ["in_stack_00000048"]="NetworkStackBuffer48"
    ["in_stack_00000040"]="NetworkStackBuffer40"
    ["in_stack_00000098"]="NetworkStackBuffer98"
    ["in_stack_00000050"]="NetworkStackBuffer50"
    ["in_stack_000000a0"]="NetworkStackBufferA0"
    ["in_stack_00000068"]="NetworkStackBuffer68"
    ["in_stack_00000030"]="NetworkStackBuffer30"
    ["in_stack_00000038"]="NetworkStackBuffer38"
    ["in_stack_00000060"]="NetworkStackBuffer60"
    ["in_stack_00000080"]="NetworkStackBuffer80"
    ["in_stack_00000090"]="NetworkStackBuffer90"
    ["in_stack_000000c0"]="NetworkStackBufferC0"
    ["in_stack_fffffffffffffe78"]="NetworkStackPointerFE78"
    ["in_stack_fffffffffffffe88"]="NetworkStackPointerFE88"
    ["in_stack_fffffffffffffe80"]="NetworkStackPointerFE80"
    ["in_stack_ffffffffffffff08"]="NetworkStackPointerFF08"
    ["in_stack_ffffffffffffff88"]="NetworkStackPointerFF88"
    ["in_stack_ffffffffffffff90"]="NetworkStackPointerFF90"
)

# 应用函数名映射
echo "应用函数名映射..."
for old_name in "${!function_mappings[@]}"; do
    new_name="${function_mappings[$old_name]}"
    echo "重命名函数: $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" "$NETWORKING_FILE"
done

# 应用变量名映射
echo "应用变量名映射..."
for old_name in "${!variable_mappings[@]}"; do
    new_name="${variable_mappings[$old_name]}"
    echo "重命名变量: $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" "$NETWORKING_FILE"
done

echo "代码美化完成"