#!/bin/bash

# 批量替换05_networking.c中的FUN_函数和UNK_变量

# FUN_函数替换
sed -i 's/FUN_1807d28c0/ProcessNetworkPacketValidation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808bb9e0/CleanupNetworkConnectionData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808bbe80/ReleaseNetworkConnectionResources/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808bc2e0/ValidateNetworkConnectionState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18073dc80/InitializeNetworkSession/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18088c9b0/ProcessNetworkHandshake/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808b89f0/EstablishNetworkConnection/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808bc240/ConfigureNetworkProtocol/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18084e9e0/ProcessNetworkDataPacket/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18084ead0/HandleNetworkPacketRouting/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808b2f30/ValidatePacketChecksum/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18084ec10/EncryptNetworkPacket/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18084f7f0/VerifyNetworkAuthentication/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# UNK_变量替换
sed -i 's/UNK_180984790/NetworkErrorMessageInvalidPacket/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984690/NetworkErrorMessageConnectionRefused/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984730/NetworkErrorMessageTimeout/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984700/NetworkErrorMessageBufferOverflow/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809846e0/NetworkErrorMessageProtocolError/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984948/NetworkErrorMessageAuthenticationFailed/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984990/NetworkErrorMessageEncryptionFailed/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984928/NetworkErrorMessageCompressionFailed/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180983680/NetworkErrorMessageInvalidHeader/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180983618/NetworkErrorMessageConnectionLost/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984968/NetworkErrorMessageHandshakeFailed/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984830/NetworkErrorMessageInvalidAddress/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809849d0/NetworkErrorMessageInvalidPort/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984768/NetworkErrorMessageInvalidProtocol/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984630/NetworkErrorMessageInvalidData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809845a0/NetworkConnectionTemplate/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809845c0/NetworkSecurityTemplate/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984540/NetworkProtocolTemplate/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809847d8/NetworkErrorMessageInvalidFormat/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180983c78/NetworkErrorMessageConnectionClosed/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "批量替换完成"