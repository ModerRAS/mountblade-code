#!/bin/bash

# 批量替换undefined UNK_为SystemDataByte* UNK_
sed -i 's/undefined UNK_180a/SystemDataByte* UNK_180a/g' TaleWorlds.Native/src/99_unmatched_functions.c

# 替换其他地址范围的undefined UNK_
sed -i 's/undefined UNK_18010/SystemDataByte* UNK_18010/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/undefined UNK_1801/SystemDataByte* UNK_1801/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/undefined UNK_1802/SystemDataByte* UNK_1802/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/undefined UNK_1803/SystemDataByte* UNK_1803/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/undefined UNK_1804/SystemDataByte* UNK_1804/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/undefined UNK_1805/SystemDataByte* UNK_1805/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/undefined UNK_1806/SystemDataByte* UNK_1806/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/undefined UNK_1807/SystemDataByte* UNK_1807/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/undefined UNK_1808/SystemDataByte* UNK_1808/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/undefined UNK_1809/SystemDataByte* UNK_1809/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/undefined UNK_180c/SystemDataByte* UNK_180c/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/undefined UNK_180d/SystemDataByte* UNK_180d/g' TaleWorlds.Native/src/99_unmatched_functions.c

echo "批量替换完成"