# 美化05_networking.c文件变量名的sed命令

# 主要变量替换
sed -i 's/\bNetworkEncryptionKey\b/networkEncryptionKey/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/\bNetworkEncryptionKeyLength\b/networkEncryptionKeyLength/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/\bDataProcessingResult\b/dataProcessingResult/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/\bNetworkProcessingResult\b/networkProcessingResult/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/\bNetworkConnectionOperationResult\b/networkConnectionOperationResult/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/\bNetworkFlags\b/networkFlags/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "变量名美化完成"