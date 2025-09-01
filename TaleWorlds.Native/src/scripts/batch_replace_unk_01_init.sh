#!/bin/bash
# 批量替换01_initialization.c中的UNK_变量

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换剩余的UNK_变量
sed -i 's/UNK_180058f50/SystemBuffer4/g' 01_initialization.c
sed -i 's/UNK_1809fd730/DataTemplateReference/g' 01_initialization.c
sed -i 's/UNK_1809fde40/ComparisonDataReference/g' 01_initialization.c
sed -i 's/UNK_1809fd7c4/SystemDataBufferConfig/g' 01_initialization.c
sed -i 's/UNK_1809fd7d8/SystemSearchString1/g' 01_initialization.c
sed -i 's/UNK_1809fd7f8/SystemSearchString2/g' 01_initialization.c
sed -i 's/UNK_1809fd810/SystemSearchString3/g' 01_initialization.c
sed -i 's/UNK_1809fd828/SystemSearchString4/g' 01_initialization.c
sed -i 's/UNK_1809fd848/SystemSearchString5/g' 01_initialization.c
sed -i 's/UNK_1809fd870/SystemDataBufferConfig2/g' 01_initialization.c

echo "UNK_变量替换完成"