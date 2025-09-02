#!/bin/bash

# 美化网络文件中的栈变量名
# 批量替换栈变量名为语义化名称

sed -i 's/plStack_948/NetworkContextDataPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/pplStack_9a8/NetworkContextQuaternaryPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/pplStack_998/NetworkContextSeptenaryPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/pplStack_978/NetworkContextTertiaryPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/puStack_970/NetworkContextEntryHandle/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "栈变量名美化完成"