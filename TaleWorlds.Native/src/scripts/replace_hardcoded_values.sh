#!/bin/bash
# 批量替换硬编码值为常量

# 替换各种上下文相关的-8值为ObjectContextMemoryAdjustment
sed -i 's/ObjectHandleIdentifier + -8/ObjectHandleIdentifier + ObjectContextMemoryAdjustment/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/RegisterValue + -8/RegisterValue + SystemRegisterAdjustment/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/StackOffset + -8/StackOffset + StackMemoryAdjustment/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/StackPointer + -8/StackPointer + StackMemoryAdjustment/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/StackLocation + -8/StackLocation + StackMemoryAdjustment/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "批量替换完成"