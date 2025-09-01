#!/bin/bash

# 美化网络文件中的UNK_变量名
# 根据变量在代码中的用途进行语义化命名

# 网络缓冲区相关变量
sed -i 's/UNK_180983f78/NetworkPrimaryBufferA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809840a0/NetworkPrimaryBufferB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984130/NetworkPrimaryBufferC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180983ac8/NetworkPrimaryBufferD/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180983828/NetworkStreamBufferA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809839b8/NetworkPrimaryBufferE/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180983a40/NetworkPrimaryBufferF/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180983c50/NetworkPrimaryBufferG/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809837a0/NetworkStreamBufferB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180983b50/NetworkStatusBufferA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809820b0/NetworkSecondaryBufferA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180981ec0/NetworkSecondaryBufferB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180982878/NetworkSecondaryBufferC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809828f8/NetworkConfigStreamBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180982a98/NetworkPrimaryBufferH/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180981fc0/NetworkSecondaryBufferD/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180981dc0/NetworkSecondaryBufferE/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180981f40/NetworkSecondaryBufferF/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180981d40/NetworkSecondaryBufferG/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180982978/NetworkSecondaryBufferH/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180982038/NetworkPacketBufferA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180981e40/NetworkPacketBufferB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180982670/NetworkPacketBufferC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180982570/NetworkTertiaryBufferA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180982460/NetworkTertiaryBufferB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809824e8/NetworkTertiaryBufferC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809823e0/NetworkQuaternaryBufferA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180982128/NetworkProcessingBufferA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809821b0/NetworkProcessingBufferB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809822c8/NetworkTertiaryBufferD/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180982350/NetworkProcessingBufferC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180982770/NetworkProcessingBufferD/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984530/NetworkPrimaryBufferI/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 错误处理相关变量
sed -i 's/UNK_180984908/NetworkErrorMessageA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809846b0/NetworkErrorMessageB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180957410/NetworkErrorMessageC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984790/NetworkErrorMessageD/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984690/NetworkErrorMessageE/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984730/NetworkErrorMessageF/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984700/NetworkErrorMessageG/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809846e0/NetworkErrorMessageH/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984948/NetworkErrorMessageI/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984990/NetworkErrorMessageJ/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984928/NetworkErrorMessageK/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180983680/NetworkErrorMessageL/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180983618/NetworkStackPointerA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984968/NetworkErrorMessageM/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984830/NetworkErrorMessageN/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809849d0/NetworkErrorMessageO/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984768/NetworkErrorMessageP/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984630/NetworkErrorMessageQ/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809845a0/NetworkStackPointerB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809845c0/NetworkStackPointerC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984540/NetworkStackPointerD/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809847d8/NetworkErrorMessageR/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180983c78/NetworkStackPointerE/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180982570/NetworkErrorMessageS/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180982508/NetworkPacketPointerA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180982cc0/NetworkStackPointerF/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180986258/NetworkSecurityContextBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180983cf8/NetworkStackPointerG/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809570e8/NetworkErrorMessageT/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809838a8/NetworkErrorMessageU/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180983840/NetworkStackPointerH/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180957208/NetworkErrorMessageV/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180982460/NetworkErrorMessageW/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809823f8/NetworkStackPointerI/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180983e88/NetworkStackPointerJ/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809840a0/NetworkErrorMessageX/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984038/NetworkStackPointerK/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809822c8/NetworkErrorMessageY/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180982260/NetworkStackPointerL/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180983a60/NetworkStackPointerM/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809837c0/NetworkStackPointerN/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180983950/NetworkStackPointerO/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180983be8/NetworkStackPointerP/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809842e0/NetworkStackPointerQ/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180983738/NetworkStackPointerR/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809844c8/NetworkStackPointerS/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180983ae8/NetworkStackPointerT/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180983b68/NetworkStackPointerU/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180982ab0/NetworkInputPointerA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180982790/NetworkInputPointerB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180958180/NetworkTemplateBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1809827f8/NetworkErrorMessageZ/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180957310/NetworkErrorMessageAA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 连接上下文相关变量
sed -i 's/UNK_180984a30/NetworkContextPointerA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984a60/NetworkContextPointerB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984a70/NetworkContextPointerC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984aa0/NetworkContextPointerD/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180986f68/NetworkContextPointerE/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984ab8/NetworkContextPointerF/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180986f90/NetworkValidationBufferA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984b50/NetworkValidationBufferB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984ac0/NetworkContextPointerG/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984ac8/NetworkContextPointerH/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984ad0/NetworkValidationBufferC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984be0/NetworkContextPointerI/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180a0b198/NetworkContextValidationBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984cd0/NetworkValidationBufferD/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984c90/NetworkDataPointerA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984ca0/NetworkDataPointerB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984cb0/NetworkDataPointerC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984cc0/NetworkDataPointerD/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_18095af38/NetworkMemoryValidationBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180863400/NetworkCodePointerA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_1808633a0/NetworkCodePointerB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_18095b500/NetworkValidationBufferE/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180957600/NetworkErrorMessageAB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/UNK_180984d50/NetworkValidationBufferF/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "网络文件变量美化完成"