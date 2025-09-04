#!/bin/bash

# 批量替换99_unmatched_functions.c中的UNK_变量
# 简化实现：将UNK_前缀替换为更语义化的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换UNK_180a02cc0为XmlElementPointerAddress
sed -i 's/&UNK_180a02cc0/XmlElementPointerAddress/g' 99_unmatched_functions.c

# 替换UNK_180a02c98为XmlElementReferenceAddress
sed -i 's/&UNK_180a02c98/XmlElementReferenceAddress/g' 99_unmatched_functions.c

# 替换UNK_180a02d08为XmlElementIteratorAddress
sed -i 's/&UNK_180a02d08/XmlElementIteratorAddress/g' 99_unmatched_functions.c

# 替换UNK_180a02ce0为XmlElementFormatAddress
sed -i 's/&UNK_180a02ce0/XmlElementFormatAddress/g' 99_unmatched_functions.c

# 替换UNK_180a02d50为XmlElementConfigAddress
sed -i 's/&UNK_180a02d50/XmlElementConfigAddress/g' 99_unmatched_functions.c

# 替换UNK_180a02d90为XmlElementSecurityAddress
sed -i 's/&UNK_180a02d90/XmlElementSecurityAddress/g' 99_unmatched_functions.c

# 替换UNK_180a02c38为XmlElementValidationAddress
sed -i 's/&UNK_180a02c38/XmlElementValidationAddress/g' 99_unmatched_functions.c

# 替换UNK_180a02c40为XmlElementProcessingAddress
sed -i 's/&UNK_180a02c40/XmlElementProcessingAddress/g' 99_unmatched_functions.c

# 替换UNK_180a02d70为XmlElementResourceAddress
sed -i 's/&UNK_180a02d70/XmlElementResourceAddress/g' 99_unmatched_functions.c

# 替换UNK_180a02ed8为XmlElementBufferAddress
sed -i 's/&UNK_180a02ed8/XmlElementBufferAddress/g' 99_unmatched_functions.c

# 替换UNK_180a02f10为XmlElementMemoryAddress
sed -i 's/&UNK_180a02f10/XmlElementMemoryAddress/g' 99_unmatched_functions.c

# 替换UNK_180a02f58为XmlElementHandleAddress
sed -i 's/&UNK_180a02f58/XmlElementHandleAddress/g' 99_unmatched_functions.c

# 替换UNK_180a02b03为SystemMemoryAllocationAddress
sed -i 's/&UNK_180a02b03/SystemMemoryAllocationAddress/g' 99_unmatched_functions.c

echo "批量替换完成"