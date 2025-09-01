#!/bin/bash

# 美化01_initialization.c文件中的变量名
# 将小写字母开头的变量名修改为符合PascalCase命名规则的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换变量名 - 将小写字母开头改为PascalCase
sed -i 's/systemCallbackPointer/SystemCallbackPointer/g' 01_initialization.c
sed -i 's/systemConfigurationValue/SystemConfigurationValue/g' 01_initialization.c
sed -i 's/resourcePoolCallbackPointer/ResourcePoolCallbackPointer/g' 01_initialization.c
sed -i 's/in_R9/RegisterR9Value/g' 01_initialization.c
sed -i 's/renderingInitializationCallback/RenderingInitializationCallback/g' 01_initialization.c
sed -i 's/systemContextParameter/SystemContextParameter/g' 01_initialization.c
sed -i 's/storageManagerCallbackFunction/StorageManagerCallbackFunction/g' 01_initialization.c
sed -i 's/systemModuleConfig/SystemModuleConfig/g' 01_initialization.c
sed -i 's/systemSearchFunctionPointer/SystemSearchFunctionPointer/g' 01_initialization.c
sed -i 's/systemConfigurationData/SystemConfigurationData/g' 01_initialization.c
sed -i 's/systemRegisterR9/SystemRegisterR9Value/g' 01_initialization.c
sed -i 's/systemRegister/SystemRegister/g' 01_initialization.c
sed -i 's/systemParameter/SystemParameter/g' 01_initialization.c
sed -i 's/registerR9Value/RegisterR9Value/g' 01_initialization.c
sed -i 's/allocationFlags/AllocationFlags/g' 01_initialization.c
sed -i 's/uStack_198/StackOffset198/g' 01_initialization.c
sed -i 's/systemHandle/SystemHandle/g' 01_initialization.c
sed -i 's/stackParameter5/StackParameter5/g' 01_initialization.c
sed -i 's/currentThread/CurrentThread/g' 01_initialization.c
sed -i 's/registerR9/RegisterR9/g' 01_initialization.c
sed -i 's/systemFlags/SystemFlags/g' 01_initialization.c
sed -i 's/errorStringPointer/ErrorStringPointer/g' 01_initialization.c
sed -i 's/errorMessagePointer/ErrorMessagePointer/g' 01_initialization.c
sed -i 's/uStack_120/StackOffset120/g' 01_initialization.c
sed -i 's/uStack_118/StackOffset118/g' 01_initialization.c
sed -i 's/uStack_110/StackOffset110/g' 01_initialization.c
sed -i 's/uStack_108/StackOffset108/g' 01_initialization.c
sed -i 's/uStack_100/StackOffset100/g' 01_initialization.c
sed -i 's/uStack_f8/StackOffsetF8/g' 01_initialization.c
sed -i 's/uStack_f0/StackOffsetF0/g' 01_initialization.c
sed -i 's/uStack_e8/StackOffsetE8/g' 01_initialization.c
sed -i 's/uStack_e0/StackOffsetE0/g' 01_initialization.c
sed -i 's/uStack_d8/StackOffsetD8/g' 01_initialization.c
sed -i 's/uStack_d0/StackOffsetD0/g' 01_initialization.c
sed -i 's/uStack_c8/StackOffsetC8/g' 01_initialization.c
sed -i 's/uStack_c0/StackOffsetC0/g' 01_initialization.c
sed -i 's/uStack_b8/StackOffsetB8/g' 01_initialization.c
sed -i 's/uStack_b0/StackOffsetB0/g' 01_initialization.c
sed -i 's/uStack_a8/StackOffsetA8/g' 01_initialization.c
sed -i 's/uStack_a0/StackOffsetA0/g' 01_initialization.c
sed -i 's/uStack_98/StackOffset98/g' 01_initialization.c
sed -i 's/stackParameterC/StackParameterC/g' 01_initialization.c
sed -i 's/uStack_88/StackOffset88/g' 01_initialization.c
sed -i 's/uStack_80/StackOffset80/g' 01_initialization.c
sed -i 's/uStack_78/StackOffset78/g' 01_initialization.c
sed -i 's/uStack_70/StackOffset70/g' 01_initialization.c
sed -i 's/uStack_58/StackOffset58/g' 01_initialization.c
sed -i 's/uStack_50/StackOffset50/g' 01_initialization.c
sed -i 's/uStack_48/StackOffset48/g' 01_initialization.c
sed -i 's/uStack_38/StackOffset38/g' 01_initialization.c
sed -i 's/systemStatusFlag/SystemStatusFlag/g' 01_initialization.c
sed -i 's/systemContext/SystemContext/g' 01_initialization.c
sed -i 's/systemSemaphore/SystemSemaphore/g' 01_initialization.c
sed -i 's/systemEntryPointParam/SystemEntryPointParam/g' 01_initialization.c
sed -i 's/resourceHandle/ResourceHandle/g' 01_initialization.c
sed -i 's/systemMemoryHandle/SystemMemoryHandle/g' 01_initialization.c
sed -i 's/unsignedSystemValue1/UnsignedSystemValue1/g' 01_initialization.c
sed -i 's/unsignedSystemValue6/UnsignedSystemValue6/g' 01_initialization.c
sed -i 's/unsignedSystemValue7/UnsignedSystemValue7/g' 01_initialization.c
sed -i 's/unsignedSystemValue5/UnsignedSystemValue5/g' 01_initialization.c
sed -i 's/uStackX_8/StackOffsetX8/g' 01_initialization.c
sed -i 's/unsignedSystemValue3/UnsignedSystemValue3/g' 01_initialization.c
sed -i 's/systemErrorFlag/SystemErrorFlag/g' 01_initialization.c
sed -i 's/uStack_f8/StackOffsetF8/g' 01_initialization.c
sed -i 's/systemCallbackData/SystemCallbackData/g' 01_initialization.c
sed -i 's/systemDebugData/SystemDebugData/g' 01_initialization.c
sed -i 's/systemResourceFlag/SystemResourceFlag/g' 01_initialization.c
sed -i 's/nodeManagerCallbackPointer/NodeManagerCallbackPointer/g' 01_initialization.c
sed -i 's/systemServiceConfig/SystemServiceConfig/g' 01_initialization.c

echo "变量名美化完成"