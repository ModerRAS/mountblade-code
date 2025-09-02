#!/bin/bash

# 批量修复网络模块中的变量名
# 修复 connectionvalidationStatus -> connectionValidationStatus
sed -i 's/connectionvalidationStatus/connectionValidationStatus/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 修复 connectionPacketvalidationStatus -> connectionValidationStatus
sed -i 's/connectionPacketvalidationStatus/connectionValidationStatus/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 修复 packetPacketvalidationStatus -> packetValidationStatus
sed -i 's/packetPacketvalidationStatus/packetValidationStatus/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 修复 addressvalidationStatus -> addressValidationStatus
sed -i 's/addressvalidationStatus/addressValidationStatus/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "变量名修复完成"