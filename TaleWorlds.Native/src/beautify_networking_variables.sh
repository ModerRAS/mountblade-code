#!/bin/bash

# 美化网络模块中的变量名
# 将uVar变量替换为有意义的名称

# 备份原始文件
cp TaleWorlds.Native/src/05_networking.c TaleWorlds.Native/src/05_networking.c.backup

# 替换uVar变量为有意义的名称
sed -i 's/uVar1/tempDataCounter/g' TaleWorlds.Native/src/05_networking.c
sed -i 's/uVar2/networkStatusValue/g' TaleWorlds.Native/src/05_networking.c
sed -i 's/uVar3/connectionStateFlag/g' TaleWorlds.Native/src/05_networking.c
sed -i 's/uVar4/packetValidationResult/g' TaleWorlds.Native/src/05_networking.c
sed -i 's/uVar5/bufferSizeValue/g' TaleWorlds.Native/src/05_networking.c
sed -i 's/uVar6/networkFlagsValue/g' TaleWorlds.Native/src/05_networking.c
sed -i 's/uVar7/connectionHandleValue/g' TaleWorlds.Native/src/05_networking.c
sed -i 's/uVar8/socketDescriptorValue/g' TaleWorlds.Native/src/05_networking.c
sed -i 's/uVar9/dataTransferResult/g' TaleWorlds.Native/src/05_networking.c
sed -i 's/uVar10/securityValidationResult/g' TaleWorlds.Native/src/05_networking.c

# 替换iVar变量
sed -i 's/iVar1/indexCounter/g' TaleWorlds.Native/src/05_networking.c
sed -i 's/iVar2/connectionCount/g' TaleWorlds.Native/src/05_networking.c
sed -i 's/iVar3/errorStatusCode/g' TaleWorlds.Native/src/05_networking.c
sed -i 's/iVar4/timeoutValue/g' TaleWorlds.Native/src/05_networking.c
sed -i 's/iVar5/retryAttempts/g' TaleWorlds.Native/src/05_networking.c

# 替换unaff变量
sed -i 's/unaff_RDI/networkInputParameter/g' TaleWorlds.Native/src/05_networking.c
sed -i 's/unaff_RSI/networkContextParameter/g' TaleWorlds.Native/src/05_networking.c
sed -i 's/unaff_RDX/networkDataParameter/g' TaleWorlds.Native/src/05_networking.c

echo "变量名美化完成"