#!/bin/bash

# 网络相关代码美化脚本
# 用于美化05_networking.c中的函数名和变量名

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 函数名替换 - 将FUN_开头的函数替换为有意义的名称
sed -i 's/FUN_180899ef0/networkValidateConnectionState/g' "$FILE_PATH"
sed -i 's/FUN_180898eb0/networkCheckSocketStatus/g' "$FILE_PATH"
sed -i 's/FUN_1808a6e50/networkSendSecurePacket/g' "$FILE_PATH"
sed -i 's/FUN_1808de000/networkTerminateConnection/g' "$FILE_PATH"
sed -i 's/FUN_18089ffe0/networkProcessHandshake/g' "$FILE_PATH"
sed -i 's/FUN_1808a3d50/networkSendProtocolMessage/g' "$FILE_PATH"
sed -i 's/FUN_1808ddd30/networkReceiveProtocolMessage/g' "$FILE_PATH"
sed -i 's/FUN_1808a1610/networkEstablishSecureConnection/g' "$FILE_PATH"
sed -i 's/FUN_1808675f0/networkGetActiveConnectionCount/g' "$FILE_PATH"
sed -i 's/FUN_180867680/networkGetConnectionByIndex/g' "$FILE_PATH"
sed -i 's/FUN_18076b630/networkValidateConnectionData/g' "$FILE_PATH"

# 变量名替换 - 将简单的变量名替换为有意义的名称
sed -i 's/uVar1/networkResult/g' "$FILE_PATH"
sed -i 's/uVar2/networkStatus/g' "$FILE_PATH"
sed -i 's/uVar3/connectionHandle/g' "$FILE_PATH"
sed -i 's/uVar4/dataPointer/g' "$FILE_PATH"
sed -i 's/uVar5/connectionIndex/g' "$FILE_PATH"
sed -i 's/iVar1/returnCode/g' "$FILE_PATH"
sed -i 's/iVar2/statusCode/g' "$FILE_PATH"
sed -i 's/iVar3/networkFlags/g' "$FILE_PATH"
sed -i 's/iVar4/connectionCount/g' "$FILE_PATH"
sed -i 's/iVar5/processResult/g' "$FILE_PATH"
sed -i 's/lVar1/networkTimeout/g' "$FILE_PATH"
sed -i 's/lVar2/socketDescriptor/g' "$FILE_PATH"
sed -i 's/lVar3/connectionInfo/g' "$FILE_PATH"
sed -i 's/puVar1/bufferPointer/g' "$FILE_PATH"
sed -i 's/puVar2/connectionData/g' "$FILE_PATH"
sed -i 's/puVar3/socketBuffer/g' "$FILE_PATH"
sed -i 's/puVar4/networkAddress/g' "$FILE_PATH"

# 标签名替换
sed -i 's/LAB_NETWORK_SOCKET_CLOSE_END/NETWORK_SOCKET_CLOSE_END/g' "$FILE_PATH"
sed -i 's/LAB_NETWORK_SOCKET_CLOSE_START/NETWORK_SOCKET_CLOSE_START/g' "$FILE_PATH"

echo "网络代码美化完成"