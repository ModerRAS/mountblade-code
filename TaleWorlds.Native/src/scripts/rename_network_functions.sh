#!/bin/bash

# 网络模块函数重命名脚本
# 用于重命名05_networking.c中的FUN_函数

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

echo "开始重命名网络模块函数..."

# 基于函数签名和功能分析的智能重命名
# 格式: sed -i 's/FUN_XXXXXXXX/新名称/g' 文件路径

# 网络连接相关函数
sed -i 's/FUN_18086582c/GetNetworkConnectionStatus582c/g' $FILE_PATH
sed -i 's/FUN_180865b00/GetNetworkConnectionPtr5b00/g' $FILE_PATH
sed -i 's/FUN_180865bc0/GetNetworkConnectionPtr5bc0/g' $FILE_PATH
sed -i 's/FUN_180865c20/ProcessNetworkConnection5c20/g' $FILE_PATH
sed -i 's/FUN_180865e20/CreateNetworkConnection5e20/g' $FILE_PATH
sed -i 's/FUN_180865ec0/InitializeNetworkContext5ec0/g' $FILE_PATH
sed -i 's/FUN_180865f90/ProcessNetworkPacket5f90/g' $FILE_PATH
sed -i 's/FUN_180865fc0/ProcessNetworkConnection5fc0/g' $FILE_PATH
sed -i 's/FUN_1808661e0/ProcessNetworkData61e0/g' $FILE_PATH
sed -i 's/FUN_180866340/CreateNetworkHandle6340/g' $FILE_PATH
sed -i 's/FUN_180866820/ProcessNetworkData6820/g' $FILE_PATH
sed -i 's/FUN_1808668a0/ProcessNetworkConnection68a0/g' $FILE_PATH
sed -i 's/FUN_1808669b0/ProcessNetworkData69b0/g' $FILE_PATH
sed -i 's/FUN_180866a90/ProcessNetworkPacket6a90/g' $FILE_PATH
sed -i 's/FUN_180866ba0/ProcessNetworkConnection6ba0/g' $FILE_PATH
sed -i 's/FUN_180866d00/InitializeNetworkConnection6d00/g' $FILE_PATH
sed -i 's/FUN_180866e25/GetNetworkHandle6e25/g' $FILE_PATH
sed -i 's/FUN_180866e97/GetNetworkConnection6e97/g' $FILE_PATH
sed -i 's/FUN_180866f50/GetNetworkStatus6f50/g' $FILE_PATH
sed -i 's/FUN_180866fe0/ProcessNetworkConnection6fe0/g' $FILE_PATH
sed -i 's/FUN_180867092/GetNetworkConnection7092/g' $FILE_PATH
sed -i 's/FUN_180867111/GetNetworkHandle7111/g' $FILE_PATH
sed -i 's/FUN_180867170/InitializeNetworkProcessor7170/g' $FILE_PATH
sed -i 's/FUN_180867280/ValidateNetworkState7280/g' $FILE_PATH
sed -i 's/FUN_1808672e4/CleanupNetworkResources72e4/g' $FILE_PATH
sed -i 's/FUN_1808673a0/CheckNetworkConnection73a0/g' $FILE_PATH
sed -i 's/FUN_180867470/ProcessNetworkData7470/g' $FILE_PATH
sed -i 's/FUN_180867600/ProcessNetworkConnection7600/g' $FILE_PATH
sed -i 's/FUN_1808676f0/ValidateNetworkConnection76f0/g' $FILE_PATH
sed -i 's/FUN_180867714/GetNetworkStatus7714/g' $FILE_PATH
sed -i 's/FUN_1808677fa/GetNetworkHandle77fa/g' $FILE_PATH
sed -i 's/FUN_1808678e0/ProcessNetworkConnection78e0/g' $FILE_PATH
sed -i 's/FUN_180867990/ProcessNetworkOperation7990/g' $FILE_PATH
sed -i 's/FUN_180867f80/ProcessNetworkData7f80/g' $FILE_PATH
sed -i 's/FUN_1808681d0/GetNetworkStatus81d0/g' $FILE_PATH
sed -i 's/FUN_180868363/InitializeNetworkSystem8363/g' $FILE_PATH
sed -i 's/FUN_180868459/InitializeNetworkContext8459/g' $FILE_PATH
sed -i 's/FUN_180868490/ProcessNetworkData8490/g' $FILE_PATH
sed -i 's/FUN_1808686a0/ProcessNetworkConnection86a0/g' $FILE_PATH
sed -i 's/FUN_180868700/ValidateNetworkPacket8700/g' $FILE_PATH
sed -i 's/FUN_180868724/GetNetworkStatus8724/g' $FILE_PATH
sed -i 's/FUN_1808687df/GetNetworkHandle87df/g' $FILE_PATH
sed -i 's/FUN_180868800/ProcessNetworkData8800/g' $FILE_PATH
sed -i 's/FUN_1808689a5/InitializeNetworkSystem89a5/g' $FILE_PATH
sed -i 's/FUN_1808689f2/GetNetworkHandle89f2/g' $FILE_PATH
sed -i 's/FUN_180868a00/ValidateNetworkData8a00/g' $FILE_PATH
sed -i 's/FUN_180868a33/GetNetworkConnection8a33/g' $FILE_PATH
sed -i 's/FUN_180868a47/ValidateNetworkHandle8a47/g' $FILE_PATH
sed -i 's/FUN_180868a67/GetNetworkStatus8a67/g' $FILE_PATH
sed -i 's/FUN_180868a6c/GetNetworkHandle8a6c/g' $FILE_PATH
sed -i 's/FUN_180868a80/ProcessNetworkBuffer8a80/g' $FILE_PATH
sed -i 's/FUN_180868fc0/ProcessNetworkConnection8fc0/g' $FILE_PATH
sed -i 's/FUN_180869020/ProcessNetworkData9020/g' $FILE_PATH
sed -i 's/FUN_180869080/ProcessNetworkPacket9080/g' $FILE_PATH
sed -i 's/FUN_1808690e0/ProcessNetworkConnection90e0/g' $FILE_PATH
sed -i 's/FUN_180869270/ProcessNetworkData9270/g' $FILE_PATH
sed -i 's/FUN_180869400/ProcessNetworkPacket9400/g' $FILE_PATH
sed -i 's/FUN_180869590/ProcessNetworkData9590/g' $FILE_PATH
sed -i 's/FUN_180869720/ProcessNetworkConnection9720/g' $FILE_PATH
sed -i 's/FUN_180869ab0/CleanupNetworkConnection9ab0/g' $FILE_PATH
sed -i 's/FUN_180869b10/ProcessNetworkData9b10/g' $FILE_PATH
sed -i 's/FUN_180869b4f/InitializeNetworkSystem9b4f/g' $FILE_PATH

echo "重命名完成！"