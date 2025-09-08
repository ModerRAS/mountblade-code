#!/bin/bash

# 批量美化99_unmatched_functions.c文件中的变量名
# 为UNK_和DAT_变量添加语义化名称

# 定义文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 网络缓冲区池变量 (180a24850-180a249a0范围)
sed -i 's/undefined UNK_180a24880;/SystemDataByte SystemNetworkBufferPool_180a24880;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a24890;/SystemDataByte SystemNetworkBufferPool_180a24890;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a248a0;/SystemDataByte SystemNetworkBufferPool_180a248a0;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a248c0;/SystemDataByte SystemNetworkBufferPool_180a248c0;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a248e0;/SystemDataByte SystemNetworkBufferPool_180a248e0;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a248f0;/SystemDataByte SystemNetworkBufferPool_180a248f0;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a24900;/SystemDataByte SystemNetworkBufferPool_180a24900;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a24910;/SystemDataByte SystemNetworkBufferPool_180a24910;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a24928;/SystemDataByte SystemNetworkBufferPool_180a24928;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a24940;/SystemDataByte SystemNetworkBufferPool_180a24940;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a24960;/SystemDataByte SystemNetworkBufferPool_180a24960;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a24980;/SystemDataByte SystemNetworkBufferPool_180a24980;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a249a0;/SystemDataByte SystemNetworkBufferPool_180a249a0;/g' "$FILE_PATH"

# 配置数据变量
sed -i 's/undefined DAT_180a09db0;/SystemDataDword SystemConfigurationData_180a09db0;/g' "$FILE_PATH"
sed -i 's/undefined DAT_180a13168;/SystemDataDword SystemStringData_180a13168;/g' "$FILE_PATH"

# 内存池变量
sed -i 's/undefined UNK_180994920;/SystemDataByte SystemMemoryPool_180994920;/g' "$FILE_PATH"

# 数据流模板变量
sed -i 's/undefined UNK_180a24c80;/SystemDataByte SystemDataStreamTemplate_180a24c80;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a24ee8;/SystemDataByte SystemDataStreamTemplate_180a24ee8;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a24f00;/SystemDataByte SystemDataStreamTemplate_180a24f00;/g' "$FILE_PATH"

# 系统数据结构变量
sed -i 's/undefined SystemContextDataStructure_180a24f58;/SystemDataQword SystemContextDataStructure_180a24f58;/g' "$FILE_PATH"
sed -i 's/undefined SystemMemoryPool_180a2500c;/SystemDataQword SystemMemoryPool_180a2500c;/g' "$FILE_PATH"
sed -i 's/undefined SystemBufferPointer_180a25014;/SystemDataQword SystemBufferPointer_180a25014;/g' "$FILE_PATH"
sed -i 's/undefined SystemBufferSize_180a25018;/SystemDataDword SystemBufferSize_180a25018;/g' "$FILE_PATH"
sed -i 's/undefined SystemAllocationTable_180a25028;/SystemDataQword SystemAllocationTable_180a25028;/g' "$FILE_PATH"

# 其他数据流模板变量
sed -i 's/undefined UNK_180a25058;/SystemDataByte SystemDataStreamTemplate_180a25058;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25148;/SystemDataByte SystemDataStreamTemplate_180a25148;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25150;/SystemDataByte SystemDataStreamTemplate_180a25150;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25198;/SystemDataByte SystemDataStreamTemplate_180a25198;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a251d8;/SystemDataByte SystemDataStreamTemplate_180a251d8;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25210;/SystemDataByte SystemDataStreamTemplate_180a25210;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25230;/SystemDataByte SystemDataStreamTemplate_180a25230;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a252e8;/SystemDataByte SystemDataStreamTemplate_180a252e8;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25310;/SystemDataByte SystemDataStreamTemplate_180a25310;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25350;/SystemDataByte SystemDataStreamTemplate_180a25350;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25390;/SystemDataByte SystemDataStreamTemplate_180a25390;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a253d0;/SystemDataByte SystemDataStreamTemplate_180a253d0;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25400;/SystemDataByte SystemDataStreamTemplate_180a25400;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25428;/SystemDataByte SystemDataStreamTemplate_180a25428;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25458;/SystemDataByte SystemDataStreamTemplate_180a25458;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25488;/SystemDataByte SystemDataStreamTemplate_180a25488;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a254a8;/SystemDataByte SystemDataStreamTemplate_180a254a8;/g' "$FILE_PATH"

# 更多数据流模板变量
sed -i 's/undefined UNK_180a25558;/SystemDataByte SystemDataStreamTemplate_180a25558;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a2554c;/SystemDataByte SystemDataStreamTemplate_180a2554c;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25550;/SystemDataByte SystemDataStreamTemplate_180a25550;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25590;/SystemDataByte SystemDataStreamTemplate_180a25590;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a255d8;/SystemDataByte SystemDataStreamTemplate_180a255d8;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a255f8;/SystemDataByte SystemDataStreamTemplate_180a255f8;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25628;/SystemDataByte SystemDataStreamTemplate_180a25628;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25660;/SystemDataByte SystemDataStreamTemplate_180a25660;/g' "$FILE_PATH"

# 标准输出指针
sed -i 's/undefined \*PTR_?cout@std@@3V\?\$basic_ostream@DU\?\$char_traits@D@std@@@1@A_180944888;/SystemPointer SystemStandardOutputPointer_180944888;/g' "$FILE_PATH"

# 其他数据流模板变量
sed -i 's/undefined UNK_180a2161c;/SystemDataByte SystemDataStreamTemplate_180a2161c;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25598;/SystemDataByte SystemDataStreamTemplate_180a25598;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a255b4;/SystemDataByte SystemDataStreamTemplate_180a255b4;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a255c0;/SystemDataByte SystemDataStreamTemplate_180a255c0;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a255c8;/SystemDataByte SystemDataStreamTemplate_180a255c8;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25678;/SystemDataByte SystemDataStreamTemplate_180a25678;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25688;/SystemDataByte SystemDataStreamTemplate_180a25688;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25690;/SystemDataByte SystemDataStreamTemplate_180a25690;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a256a0;/SystemDataByte SystemDataStreamTemplate_180a256a0;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a256a8;/SystemDataByte SystemDataStreamTemplate_180a256a8;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a256c0;/SystemDataByte SystemDataStreamTemplate_180a256c0;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a256c8;/SystemDataByte SystemDataStreamTemplate_180a256c8;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a256e8;/SystemDataByte SystemDataStreamTemplate_180a256e8;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a256f8;/SystemDataByte SystemDataStreamTemplate_180a256f8;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25740;/SystemDataByte SystemDataStreamTemplate_180a25740;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25790;/SystemDataByte SystemDataStreamTemplate_180a25790;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a257d0;/SystemDataByte SystemDataStreamTemplate_180a257d0;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25820;/SystemDataByte SystemDataStreamTemplate_180a25820;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25830;/SystemDataByte SystemDataStreamTemplate_180a25830;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25840;/SystemDataByte SystemDataStreamTemplate_180a25840;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25890;/SystemDataByte SystemDataStreamTemplate_180a25890;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25920;/SystemDataByte SystemDataStreamTemplate_180a25920;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25960;/SystemDataByte SystemDataStreamTemplate_180a25960;/g' "$FILE_PATH"
sed -i 's/undefined UNK_180a25970;/SystemDataByte SystemDataStreamTemplate_180a25970;/g' "$FILE_PATH"

echo "变量美化完成"