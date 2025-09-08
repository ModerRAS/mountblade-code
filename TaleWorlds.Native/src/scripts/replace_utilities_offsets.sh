#!/bin/bash

# 批量替换06_utilities.c中的硬编码偏移量为语义化常量

echo "开始替换硬编码偏移量..."

# 替换操作基础上下文偏移量
sed -i 's/operationBase + 0x58/operationBase + OperationBaseContextOffset/g' TaleWorlds.Native/src/06_utilities.c

# 替换操作缓冲区偏移量
sed -i 's/bufferPointer + 0x20/bufferPointer + OperationBufferOffset/g' TaleWorlds.Native/src/06_utilities.c

# 替换安全上下文验证偏移量
sed -i 's/StackFrameContext + 0x5f0/StackFrameContext + StackFrameValidationOffset/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/securityContext + 0x5f0/securityContext + SecurityContextValidationOffset/g' TaleWorlds.Native/src/06_utilities.c

# 替换栈帧数据偏移量
sed -i 's/StackFrameContext + -0x78/StackFrameContext + StackFrameDataOffset/g' TaleWorlds.Native/src/06_utilities.c

# 替换栈帧项目计数偏移量
sed -i 's/StackFrameContext + -0x78) + 0x30/StackFrameContext + StackFrameDataOffset) + StackFrameItemCountOffset/g' TaleWorlds.Native/src/06_utilities.c

# 替换数据结构指针偏移量
sed -i 's/dataStructure + 0x18/dataStructure + DataStructurePointerOffset/g' TaleWorlds.Native/src/06_utilities.c

# 替换数据结构基础偏移量
sed -i 's/dataStructure + 8)/dataStructure + DataStructureBaseOffset)/g' TaleWorlds.Native/src/06_utilities.c

# 替换数据结构大小偏移量
sed -i 's/dataStructure + 0x20/dataStructure + DataStructureSizeOffset/g' TaleWorlds.Native/src/06_utilities.c

# 替换数据项大小乘数
sed -i 's/searchIndex \* 0xc/searchIndex * DataItemSizeMultiplier/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/currentIndex \* 0xc/currentIndex * DataItemSizeMultiplier/g' TaleWorlds.Native/src/06_utilities.c

# 替换数据项目标偏移量
sed -i 's/itemAddress + 0x20/itemAddress + DataItemTargetOffset/g' TaleWorlds.Native/src/06_utilities.c

# 替换数据项处理偏移量
sed -i 's/) + 0x50/) + DataItemProcessingOffset/g' TaleWorlds.Native/src/06_utilities.c

echo "替换完成！"