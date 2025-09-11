#!/bin/bash

# 美化ProcessPhysicalPropertyStrings函数中的变量名

# 替换ContextIndex为StringComparisonOffset
sed -i 's/ContextIndex = 0;/StringComparisonOffset = 0;  \/\/ 字符串比较偏移量/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 替换pcVar2为CurrentStringPointer
sed -i 's/pcVar2 = SystemBufferPointer;/CurrentStringPointer = SystemBufferPointer;  \/\/ 当前字符串指针/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/while (ContextIndex != in_R10)/while (StringComparisonOffset != in_R10)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 在特定上下文中替换pcVar2
sed -i 's/pcVar2 = (char \*)0x0;/CurrentStringPointer = (char \*)0x0;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/pcVar2 = (char \*)\*ContextEndPointer;/CurrentStringPointer = (char \*)*ContextEndPointer;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/if (pcVar2 == (char \*)0x0)/if (CurrentStringPointer == (char \*)0x0)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/ContextIndex = ContextEndPointer\[2\];/StringComparisonOffset = ContextEndPointer[2];/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

echo "变量名美化完成"