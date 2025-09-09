#!/bin/bash

# 美化FUN_180235f71函数的脚本
# 这个函数非常复杂，包含大量的变量和矩阵运算

echo "开始美化FUN_180235f71复杂3D变换函数..."

# 创建备份
cp "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c" "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c.backup"

# 函数签名替换
sed -i 's|void FUN_180235f71(void)|void ProcessComplex3DTransformationsAndMatrixOperations(void)|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 主要变量替换 - 矩阵相关
sed -i 's|pdVar1|MatrixResultPointer|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|dVar[4-9]|MatrixValue\1|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|dVar1[0-2]|MatrixValue\1|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 变换相关变量
sed -i 's|fVar2[0-2]|TransformValue\1|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 配置数据相关
sed -i 's|paSystemConfigurationData15|SystemConfigurationData|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|aEncodedSystemConfigurationData1|EncodedConfigurationData|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 处理标志
sed -i 's|CharacterProcessingFlag9|CharacterProcessingFlag|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|bVar30|SystemStatusFlag|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 边界体积数据
sed -i 's|BoundingVolumeData7|BoundingVolumeData|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 系统配置表指针
sed -i 's|SystemConfigTablePointer9|SystemConfigTablePointer|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 上下文索引
sed -i 's|ContextIndex[3-8]|ContextIndex\1|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 处理标志指针
sed -i 's|pProcessingFlag4|ProcessingFlagPointer|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 矩阵数据指针
sed -i 's|pdVar36|MatrixDataPointer|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 输入数据指针
sed -i 's|in_R11|InputDataPointer|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 寄存器变量
sed -i 's|unaff_RBP|SystemContextPointer|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|unaff_RDI|SystemBufferPointer|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|unaff_R12D|RegisterR12D|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|unaff_R15|ConfigurationDataArray|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 矩阵元素变量
sed -i 's|fVar5[0-9]|MatrixElement\1|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|fVar6[0-9]|MatrixElement\1|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|fVar7[0-9]|MatrixElement\1|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|fVar8[0-1]|MatrixElement\1|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 双精度变量
sed -i 's|dVar65|DoubleValue1|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|dVar70|DoubleValue2|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|dVar72|DoubleValue3|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 矩阵变换结果
sed -i 's|fVar7[3-9]|MatrixTransform\1|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|fVar8[0-1]|MatrixTransform\1|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 栈变量
sed -i 's|fStack000000000000002[8-9]|StackFloat\1|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|fStack000000000000003[0-8]|StackFloat\1|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|fStack000000000000004[0-4]|StackFloat\1|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|fStack0000000000000054|StackFloat9|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 栈变量替换
sed -i 's|in_stack_00000048|StackUInt1|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|iStack0000000000000050|StackInt1|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|in_stack_00000058|StackLong1|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|in_stack_00000060|StackInt2|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|in_stack_00000068|StackLong2|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|in_stack_00000070|StackLong3|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 其他变量
sed -i 's|MemoryAllocationResult6|MemoryAllocationResult|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|QueueItemCount[3-8]|QueueItemCount\1|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|EntryStatus[3-5]|EntryStatus\1|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
sed -i 's|RequiredSpace[0-9]|RequiredSpace\1|g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

echo "FUN_180235f71函数美化完成"
echo "请检查文件并手动添加函数文档注释"