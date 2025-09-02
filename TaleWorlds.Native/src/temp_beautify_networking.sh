#!/bin/bash

# 美化网络函数名的脚本
cd /dev/shm/mountblade-code/TaleWorlds.Native/src/

# 使用sed进行函数名替换
sed -i 's/FUN_18088f06b/InitializeNetworkSecurityContext/g' 05_networking.c
sed -i 's/FUN_18088f59d/CleanupNetworkResources/g' 05_networking.c
sed -i 's/FUN_18088f612/ResetNetworkState/g' 05_networking.c
sed -i 's/FUN_18088f6f7/ValidateNetworkConfiguration/g' 05_networking.c
sed -i 's/FUN_18088f9ec/ProcessNetworkData/g' 05_networking.c
sed -i 's/FUN_18088fb33/HandleNetworkConnection/g' 05_networking.c
sed -i 's/FUN_18088fb40/ProcessNetworkPacket/g' 05_networking.c
sed -i 's/FUN_18088fb47/ValidateNetworkPacket/g' 05_networking.c
sed -i 's/FUN_18088fb75/SendNetworkData/g' 05_networking.c
sed -i 's/FUN_18088fded/InitializeNetworkSession/g' 05_networking.c
sed -i 's/FUN_18088fe3b/SetupNetworkConnection/g' 05_networking.c
sed -i 's/FUN_18088fedd/ConfigureNetworkSettings/g' 05_networking.c
sed -i 's/FUN_18088ff36/StartNetworkService/g' 05_networking.c
sed -i 's/FUN_18088ff4c/StopNetworkService/g' 05_networking.c
sed -i 's/FUN_18088ffdf/PauseNetworkService/g' 05_networking.c
sed -i 's/FUN_180890246/ResumeNetworkService/g' 05_networking.c
sed -i 's/FUN_18089064b/RestartNetworkService/g' 05_networking.c
sed -i 's/FUN_18089069c/CheckNetworkStatus/g' 05_networking.c
sed -i 's/FUN_1808906f0/MonitorNetworkActivity/g' 05_networking.c
sed -i 's/FUN_18089074c/LogNetworkEvents/g' 05_networking.c

echo "函数名替换完成"