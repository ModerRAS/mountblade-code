#!/bin/bash
# func_0x函数美化替换脚本

cd /dev/shm/mountblade-code/TaleWorlds.Native/src
cp 05_networking.c 05_networking.c.backup

echo "开始替换func_0x函数名..."

# 连接管理函数
sed -i 's/func_0x00018085f4a0/CompareNetworkHandles/g' 05_networking.c
sed -i 's/func_0x0001808bef20/GetNetworkConnectionIndex/g' 05_networking.c
sed -i 's/func_0x00018084d100/AccessNetworkContext/g' 05_networking.c
sed -i 's/func_0x0001808b62c0/EstablishNetworkConnection/g' 05_networking.c
sed -i 's/func_0x0001808c92a0/ConfigureNetworkConnection/g' 05_networking.c
sed -i 's/func_0x00018085e3f0/ReleaseNetworkConnection/g' 05_networking.c
sed -i 's/func_0x0001808cf130/CloseNetworkConnection/g' 05_networking.c
sed -i 's/func_0x0001808bc370/GetNetworkConnectionStatus/g' 05_networking.c
sed -i 's/func_0x0001808c16c0/InitializeNetworkConnection/g' 05_networking.c
sed -i 's/func_0x0001808d57c0/FindNetworkConnection/g' 05_networking.c
sed -i 's/func_0x00018088e470/GetNetworkConnectionState/g' 05_networking.c
sed -i 's/func_0x0001808e2ff0/CreateNetworkEndpoint/g' 05_networking.c

# 数据处理函数
sed -i 's/func_0x0001808c1740/GetNetworkFloatValue/g' 05_networking.c
sed -i 's/func_0x000180859da0/ProcessNetworkData/g' 05_networking.c
sed -i 's/func_0x0001808c6c50/ProcessNetworkDataStream/g' 05_networking.c
sed -i 's/func_0x00018085c9a0/SendNetworkPacket/g' 05_networking.c
sed -i 's/func_0x0001808c7250/ValidateNetworkPacket/g' 05_networking.c
sed -i 's/func_0x00018084de30/GetNetworkCharacter/g' 05_networking.c
sed -i 's/func_0x000180857b20/ReadNetworkChar/g' 05_networking.c
sed -i 's/func_0x00018085d7b0/PeekNetworkChar/g' 05_networking.c
sed -i 's/func_0x0001808c57f0/WriteNetworkData/g' 05_networking.c
sed -i 's/func_0x0001808577b0/FlushNetworkBuffer/g' 05_networking.c
sed -i 's/func_0x000180857b00/CheckNetworkBuffer/g' 05_networking.c
sed -i 's/func_0x00018084dcc0/CalculateNetworkChecksum/g' 05_networking.c
sed -i 's/func_0x0001808db610/ProcessNetworkMessage/g' 05_networking.c
sed -i 's/func_0x000180866440/SendNetworkDataPacket/g' 05_networking.c

# 状态管理函数
sed -i 's/func_0x0001808601d0/GetNetworkStatus/g' 05_networking.c
sed -i 's/func_0x0001808d7290/ValidateNetworkData/g' 05_networking.c
sed -i 's/func_0x000180851e30/GetNetworkParameter/g' 05_networking.c
sed -i 's/func_0x0001808d5fb0/GetNetworkError/g' 05_networking.c
sed -i 's/func_0x000180242600/GetNetworkSystemStatus/g' 05_networking.c
sed -i 's/func_0x000180867200/GetNetworkStatusCode/g' 05_networking.c
sed -i 's/func_0x00018084c030/GetNetworkStatusObject/g' 05_networking.c
sed -i 's/func_0x000180866480/ProcessNetworkStatus/g' 05_networking.c
sed -i 's/func_0x000180851e20/GetNetworkPrimaryStatus/g' 05_networking.c
sed -i 's/func_0x00018088c570/GetNetworkSecondaryStatus/g' 05_networking.c
sed -i 's/func_0x0001808cd390/GetNetworkTertiaryStatus/g' 05_networking.c
sed -i 's/func_0x0001808dcac0/GetNetworkConnectionInfo/g' 05_networking.c
sed -i 's/func_0x0001808e0070/GetNetworkAdvancedStatus/g' 05_networking.c
sed -i 's/func_0x0001808e0080/GetNetworkDetailedStatus/g' 05_networking.c

# 操作执行函数
sed -i 's/func_0x000180854a60/InitializeNetworkStack/g' 05_networking.c
sed -i 's/func_0x00018088c6e0/GetNetworkOperationStatus/g' 05_networking.c
sed -i 's/func_0x00018085eef0/ExecuteNetworkCommand/g' 05_networking.c
sed -i 's/func_0x00018088dd50/CheckNetworkAvailability/g' 05_networking.c
sed -i 's/func_0x00018088e6f0/WaitForNetworkResponse/g' 05_networking.c
sed -i 's/func_0x00018088c500/CreateNetworkSession/g' 05_networking.c
sed -i 's/func_0x0001808da780/ProcessNetworkIndex/g' 05_networking.c
sed -i 's/func_0x0001808c6590/UpdateNetworkFlags/g' 05_networking.c

# 配置管理函数
sed -i 's/func_0x0001808b8910/GetNetworkContextPointer/g' 05_networking.c
sed -i 's/func_0x0001808b8390/SetupNetworkChannel/g' 05_networking.c
sed -i 's/func_0x000180853cc0/SetNetworkParameter/g' 05_networking.c
sed -i 's/func_0x00018086dc30/GetNetworkPointer/g' 05_networking.c
sed -i 's/func_0x0001808bad50/GetNetworkBufferPointer/g' 05_networking.c
sed -i 's/func_0x00018088be40/ClearNetworkBuffer/g' 05_networking.c
sed -i 's/func_0x0001808713a0/CreateNetworkContext/g' 05_networking.c
sed -i 's/func_0x0001808671f0/FinalizeNetworkContext/g' 05_networking.c
sed -i 's/func_0x000180874280/SetupNetworkEnvironment/g' 05_networking.c
sed -i 's/func_0x000180871840/InitializeNetworkSecurity/g' 05_networking.c
sed -i 's/func_0x000180866330/InitializeNetworkProtocol/g' 05_networking.c

# 资源管理函数
sed -i 's/func_0x00018085de10/CleanupNetworkResources/g' 05_networking.c
sed -i 's/func_0x00018085deb0/FreeNetworkMemory/g' 05_networking.c
sed -i 's/func_0x00018085f3d0/ValidateNetworkContext/g' 05_networking.c
sed -i 's/func_0x00018085df50/ResetNetworkBuffer/g' 05_networking.c
sed -i 's/func_0x0001808b6360/ClearNetworkFlags/g' 05_networking.c
sed -i 's/func_0x0001808cded0/DestroyNetworkHandle/g' 05_networking.c
sed -i 's/func_0x00018088a120/ResetNetworkSystem/g' 05_networking.c
sed -i 's/func_0x0001808674c0/FlushNetworkOutputBuffer/g' 05_networking.c
sed -i 's/func_0x0001808cef10/SendNetworkEvent/g' 05_networking.c
sed -i 's/func_0x0001808ded80/InitializeNetworkStream/g' 05_networking.c
sed -i 's/func_0x0001808e3470/GetNetworkStreamInfo/g' 05_networking.c
sed -i 's/func_0x0001808e3b80/CloseNetworkStream/g' 05_networking.c
sed -i 's/func_0x0001808e57e0/ValidateNetworkStream/g' 05_networking.c

# 安全验证函数
sed -i 's/func_0x00018084e700/SendNetworkError/g' 05_networking.c
sed -i 's/func_0x000180875460/CheckNetworkFlags/g' 05_networking.c
sed -i 's/func_0x0001808664e0/ValidateNetworkHandle/g' 05_networking.c
sed -i 's/func_0x000180867370/GetNetworkHandleFlags/g' 05_networking.c
sed -i 's/func_0x0001808661c0/GetNetworkConnectionType/g' 05_networking.c
sed -i 's/func_0x0001808661d0/IsNetworkConnectionActive/g' 05_networking.c
sed -i 's/func_0x0001808676e0/ValidateNetworkAddress/g' 05_networking.c
sed -i 's/func_0x000180866b40/ValidateNetworkEndpoint/g' 05_networking.c
sed -i 's/func_0x0001808967b0/ProcessNetworkSecurity/g' 05_networking.c

echo "函数替换完成！"
echo "备份文件已保存为 05_networking.c.backup"
echo "请检查替换结果并编译测试"