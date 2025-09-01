#!/bin/bash

# 美化00_data_definitions.h文件中的DAT_变量
# 这个脚本将DAT_变量重命名为有意义的名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h"

# 创建备份
cp "$INPUT_FILE" "${INPUT_FILE}.backup"

# 系统字符串常量相关变量
sed -i 's/DAT_180bf8378/SystemStringConstantPrimary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf83d0/SystemStringConstantSecondary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8428/SystemStringConstantTertiary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8480/SystemStringConstantQuaternary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf84d8/SystemStringConstantQuinary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8530/SystemStringConstantSenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8588/SystemStringConstantSeptenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf85e0/SystemStringConstantOctonary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8638/SystemStringConstantNonary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8690/SystemStringConstantDenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf86e8/SystemStringConstantUndenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8740/SystemStringConstantDuodenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8798/SystemStringConstantTredecenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf87f0/SystemStringConstantQuattuordecenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8848/SystemStringConstantQuindecenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf88a0/SystemStringConstantSexdecenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf88f8/SystemStringConstantSeptendecenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8950/SystemStringConstantOctodecenary/g' "$INPUT_FILE"

# 系统内存池指针相关变量
sed -i 's/_DAT_180bf8360/SystemMemoryPoolPointerPrimary/g' "$INPUT_FILE"
sed -i 's/_DAT_180bf8368/SystemMemoryPoolPointerSecondary/g' "$INPUT_FILE"
sed -i 's/_DAT_180bf8370/SystemMemoryPoolSizePrimary/g' "$INPUT_FILE"
sed -i 's/_DAT_180bf83b8/SystemMemoryPoolPointerTertiary/g' "$INPUT_FILE"
sed -i 's/_DAT_180bf83c0/SystemMemoryPoolPointerQuaternary/g' "$INPUT_FILE"
sed -i 's/_DAT_180bf83c8/SystemMemoryPoolSizeSecondary/g' "$INPUT_FILE"
sed -i 's/_DAT_180bf8410/SystemMemoryPoolPointerQuinary/g' "$INPUT_FILE"
sed -i 's/_DAT_180bf8418/SystemMemoryPoolPointerSenary/g' "$INPUT_FILE"
sed -i 's/_DAT_180bf8420/SystemMemoryPoolSizeTertiary/g' "$INPUT_FILE"
sed -i 's/_DAT_180bf8468/SystemMemoryPoolPointerSeptenary/g' "$INPUT_FILE"
sed -i 's/_DAT_180bf8470/SystemMemoryPoolPointerOctonary/g' "$INPUT_FILE"
sed -i 's/_DAT_180bf8478/SystemMemoryPoolSizeQuaternary/g' "$INPUT_FILE"

# 网络配置相关变量
sed -i 's/DAT_180bf9408/NetworkConfigDataBuffer/g' "$INPUT_FILE"
sed -i 's/_DAT_180bf93f0/NetworkConfigMemoryPoolPointer/g' "$INPUT_FILE"
sed -i 's/_DAT_180bf93f8/NetworkConfigBufferPointer/g' "$INPUT_FILE"
sed -i 's/_DAT_180bf9400/NetworkConfigBufferSize/g' "$INPUT_FILE"

# 系统模块配置相关变量
sed -i 's/DAT_180bf9768/SystemModuleConfigBufferPrimary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf97c8/SystemModuleConfigBufferSecondary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9828/SystemModuleConfigBufferTertiary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9888/SystemModuleConfigBufferQuaternary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf99a8/SystemModuleConfigBufferQuinary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9a08/SystemModuleConfigBufferSenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9a68/SystemModuleConfigBufferSeptenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9ac8/SystemModuleConfigBufferOctonary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9b28/SystemModuleConfigBufferNonary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9b88/SystemModuleConfigBufferDenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9be8/SystemModuleConfigBufferUndenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9c48/SystemModuleConfigBufferDuodenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9ca8/SystemModuleConfigBufferTredecenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9d08/SystemModuleConfigBufferQuattuordecenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9d68/SystemModuleConfigBufferQuindecenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9dc8/SystemModuleConfigBufferSexdecenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9e28/SystemModuleConfigBufferSeptendecenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9e88/SystemModuleConfigBufferOctodecenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9ee8/SystemModuleConfigBufferNovemdecenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9f48/SystemModuleConfigBufferVigesimal/g' "$INPUT_FILE"

# 系统模块模板相关变量
sed -i 's/DAT_180bfa008/SystemModuleTemplateBufferPrimary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfa068/SystemModuleTemplateBufferSecondary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfa0c8/SystemModuleTemplateBufferTertiary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfa128/SystemModuleTemplateBufferQuaternary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfa188/SystemModuleTemplateBufferQuinary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfa1e8/SystemModuleTemplateBufferSenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfa248/SystemModuleTemplateBufferSeptenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfa2a8/SystemModuleTemplateBufferOctonary/g' "$INPUT_FILE"

# 内存配置相关变量
sed -i 's/DAT_180bfa368/MemoryConfigBufferPrimary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfa400/MemoryConfigBufferSecondary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfa498/MemoryConfigBufferTertiary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfa530/MemoryConfigBufferQuaternary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfa5c8/MemoryConfigBufferQuinary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfa660/MemoryConfigBufferSenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfa6f8/MemoryConfigBufferSeptenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfa798/MemoryConfigBufferOctonary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfa830/MemoryConfigBufferNonary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfa8c8/MemoryConfigBufferDenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfa960/MemoryConfigBufferUndenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfa9f8/MemoryConfigBufferDuodenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfaa90/MemoryConfigBufferTredecenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfab28/MemoryConfigBufferQuattuordecenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfabc0/MemoryConfigBufferQuindecenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfac58/MemoryConfigBufferSexdecenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfacf0/MemoryConfigBufferSeptendecenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfad88/MemoryConfigBufferOctodecenary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfae20/MemoryConfigBufferNovemdecenary/g' "$INPUT_FILE"

# 系统内存池模板相关变量
sed -i 's/DAT_180c92068/SystemMemoryPoolTemplateBuffer/g' "$INPUT_FILE"
sed -i 's/_DAT_180c92050/SystemMemoryPoolTemplatePointer/g' "$INPUT_FILE"
sed -i 's/_DAT_180c92058/SystemMemoryPoolTemplateBufferPointer/g' "$INPUT_FILE"
sed -i 's/_DAT_180c92060/SystemMemoryPoolTemplateSize/g' "$INPUT_FILE"

# 字符串处理相关变量
sed -i 's/DAT_180bfaf08/StringProcessorTemplateBufferPrimary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfb328/StringProcessorTemplateBufferSecondary/g' "$INPUT_FILE"
sed -i 's/DAT_180bfb748/StringProcessorTemplateBufferTertiary/g' "$INPUT_FILE"

# 系统字符串内存相关变量
sed -i 's/DAT_180bf6060/SystemStringMemoryBufferPrimary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf64b0/SystemStringMemoryBufferSecondary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf6510/SystemStringMemoryBufferTertiary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf6570/SystemStringMemoryBufferQuaternary/g' "$INPUT_FILE"

# 全局系统数据变量
sed -i 's/DAT_180bf0102/SystemGlobalDataFlag/g' "$INPUT_FILE"
sed -i 's/DAT_180bf0101/SystemGlobalStatusFlag/g' "$INPUT_FILE"
sed -i 's/DAT_180c82852/SystemStringProcessingData/g' "$INPUT_FILE"
sed -i 's/DAT_180c82870/SystemMemoryDataBuffer/g' "$INPUT_FILE"
sed -i 's/DAT_180c84870/SystemMemoryDataBufferSecondary/g' "$INPUT_FILE"
sed -i 's/DAT_180c8ecec/SystemNetworkDataBuffer/g' "$INPUT_FILE"
sed -i 's/DAT_180bf5770/SystemDataBufferPrimary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf5bc0/SystemDataBufferSecondary/g' "$INPUT_FILE"
sed -i 's/DAT_180bf5c38/SystemStringBufferPrimary/g' "$INPUT_FILE"

# 系统配置相关变量
sed -i 's/_DAT_180c8ed18/SystemMemoryAllocator/g' "$INPUT_FILE"
sed -i 's/_DAT_180c82868/SystemMemoryManager/g' "$INPUT_FILE"
sed -i 's/_DAT_180c86940/SystemMemoryConfiguration/g' "$INPUT_FILE"
sed -i 's/_DAT_180c86928/SystemDataProcessor/g' "$INPUT_FILE"
sed -i 's/_DAT_180c86920/SystemGameDataProcessor/g' "$INPUT_FILE"
sed -i 's/_DAT_180c86910/SystemNetworkManager/g' "$INPUT_FILE"
sed -i 's/_DAT_180c8a9c8/SystemModuleManager/g' "$INPUT_FILE"
sed -i 's/_DAT_180c8a9c0/SystemModuleController/g' "$INPUT_FILE"
sed -i 's/_DAT_180c8a9a0/SystemModuleHandler/g' "$INPUT_FILE"
sed -i 's/_DAT_180c8ed08/SystemCoreManager/g' "$INPUT_FILE"
sed -i 's/_DAT_180c8ed00/SystemCoreHandler/g' "$INPUT_FILE"
sed -i 's/_DAT_180c8ed68/SystemCoreController/g' "$INPUT_FILE"

echo "变量重命名完成"