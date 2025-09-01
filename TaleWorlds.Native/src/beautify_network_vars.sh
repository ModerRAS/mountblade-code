#!/bin/bash

# 美化网络文件中的变量名
# 将栈变量名改为语义化名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 基本栈变量替换
sed -i 's/plStack_118/NetworkSessionData/g' 05_networking.c
sed -i 's/lStack_110/NetworkContextOffset/g' 05_networking.c
sed -i 's/lStack_108/NetworkMemoryAddress/g' 05_networking.c
sed -i 's/iStack_100/NetworkDataIndex/g' 05_networking.c
sed -i 's/uStack_fc/NetworkSecurityFlags/g' 05_networking.c
sed -i 's/uStack_f8/NetworkTransferFlags/g' 05_networking.c
sed -i 's/uStack_f4/NetworkBufferFlags/g' 05_networking.c
sed -i 's/uStack_f0/NetworkConnectionFlags/g' 05_networking.c
sed -i 's/lStack_e8/NetworkSessionHandle/g' 05_networking.c
sed -i 's/lStack_e0/NetworkConnectionEndpoint/g' 05_networking.c
sed -i 's/lStack_d8/NetworkBufferAddress/g' 05_networking.c
sed -i 's/lStack_d0/NetworkMemoryOffset/g' 05_networking.c
sed -i 's/iStack_c8/NetworkBufferSize/g' 05_networking.c
sed -i 's/lStack_c0/NetworkBufferPointer/g' 05_networking.c
sed -i 's/lStack_b8/NetworkContextData/g' 05_networking.c
sed -i 's/lStack_b0/NetworkContextPointer/g' 05_networking.c
sed -i 's/puStack_a8/NetworkHandleArray/g' 05_networking.c
sed -i 's/lStack_a0/NetworkDataOffset/g' 05_networking.c
sed -i 's/plStack_88/NetworkConnectionArray/g' 05_networking.c
sed -i 's/puStack_80/NetworkConnectionHandleArray/g' 05_networking.c
sed -i 's/uStack_50/NetworkGuardChecksum/g' 05_networking.c
sed -i 's/anetworkStack148/NetworkSecurityArray/g' 05_networking.c
sed -i 's/networkContext128/NetworkConnectionData/g' 05_networking.c
sed -i 's/pnetworkContext120/NetworkDataPointer/g' 05_networking.c
sed -i 's/pNetworkContextPointer20/ConnectionContextPointer/g' 05_networking.c
sed -i 's/anetworkSecurityGuardValue/NetworkSecurityGuardArray/g' 05_networking.c

echo "变量名美化完成"