#!/bin/bash

# 网络模块快速美化脚本
# 使用sed命令替换常见的FUN_函数

echo "开始快速美化05_networking.c文件..."

# 备份原始文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c.backup

# 替换一些常见的FUN_函数
sed -i 's/FUN_180740b40/ProcessNetworkConnectionRequest/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180741000/InitializeNetworkConnectionContext/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180741100/ValidateNetworkConnectionParameters/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180741200/SetupNetworkConnectionBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180741300/CreateNetworkConnectionHandle/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180741400/ConfigureNetworkConnectionSettings/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180741500/OpenNetworkConnectionSocket/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180741600/BindNetworkConnectionAddress/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180741700/ListenNetworkConnectionRequests/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180741800/AcceptNetworkConnection/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180741900/ConnectNetworkConnectionTarget/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180741a00/SendNetworkConnectionData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180741b00/ReceiveNetworkConnectionData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180741c00/CloseNetworkConnection/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180741d00/ResetNetworkConnectionState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180741e00/CleanupNetworkConnectionResources/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180741f00/ValidateNetworkConnectionStatus/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180742000/UpdateNetworkConnectionMetrics/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180742100/GetNetworkConnectionInfo/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180742200/SetNetworkConnectionTimeout/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180742300/CheckNetworkConnectionHealth/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "替换完成！"

# 检查替换结果
echo "检查替换后的FUN_函数数量："
grep -c "FUN_" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "快速美化完成！请检查替换结果。"