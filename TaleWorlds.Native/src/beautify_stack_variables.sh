#!/bin/bash

# 批量美化栈变量名的脚本
# 将 in_stack_xxxxxx 格式的变量名替换为语义化的名称

# 备份原文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.backup

# 定义栈变量的语义化替换规则
# 格式: s/in_stack_xxxxxx/SemanticName/g

# 常见的栈变量替换
sed -i 's/in_stack_000000b8/SystemContextPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_00000108/ValidationResultFlag1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_00000100/ValidationResultFlag2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_00000110/SystemInitializationFlag/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_00000028/DataStructureValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_00008040/StackBaseAddressValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_000001a0/XMM15RegisterValueA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_000001a8/XMM15RegisterValueC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_000001b0/XMM14RegisterValueA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_000001b8/XMM14RegisterValueC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_000001d0/XMM12RegisterValueA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_000001d8/XMM12RegisterValueB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_000001e0/AuxiliaryFloatValue11/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_000001e8/XMM11RegisterValueC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_000001f0/AuxiliaryFloatValue10/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_000001f8/XMM10RegisterValueC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_00000200/XMM9RegisterValueA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_00000208/XMM9RegisterValueB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_00000210/SecondaryFloatValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_00000218/XMM8RegisterValueC/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_000001d0/UnicodeCodePointData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_000001f0/MemoryAllocationSize/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_ffffffffffffff48/Utf16CharData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_ffffffffffffff18/ProcessStringBufferData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_fffffffffffffd68/MemoryAllocationCounterData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_fffffffffffffd78/MemoryAllocationCounterSecondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_fffffffffffffec8/MemoryAllocationIndexData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_fffffffffffffed0/UnicodeCodePointPrimary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_fffffffffffffef0/MemoryAllocationIndexAdditional/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_fffffffffffffe88/FloatProcessingParameter/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_fffffffffffffeb8/SystemStatusCodeData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/in_stack_fffffffffffffdb0/CharacterProcessingValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# 替换 stack0x 变量
sed -i 's/stack0x00000020/SystemValidationBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/stack0x00000049/SecondaryDataBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/stack0x00000080/SystemDataBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/stack0x00000090/StringValidationBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/stack0x000000a8/SystemStatusBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/stack0x000000b0/CharacterTablePointerA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/stack0x000000b8/CharacterTablePointerB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/stack0x000000c8/MemoryAllocationStackBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/stack0x000000d8/FloatConfigurationBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/stack0x000000e0/DataTransferBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/stack0x000000f0/MemoryAllocationBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/stack0x00000108/ValidationResultBufferA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/stack0x00000100/ValidationResultBufferB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/stack0x00000118/MemoryAllocationBufferSecondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

echo "栈变量名美化完成"