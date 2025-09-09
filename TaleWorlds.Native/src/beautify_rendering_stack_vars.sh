#!/bin/bash

# 美化03_rendering.c文件中的变量名
# 将堆栈变量和局部变量语义化

# 定义堆栈变量映射
declare -A stack_vars=(
    ["puStack_1f0"]="PropertyCleanupQueue1"
    ["puStack_1e8"]="PropertyCleanupQueue2"
    ["puStack_1e0"]="PropertyCleanupQueue3"
    ["uStack_1d8"]="PropertyQueueSize"
    ["lStack_118"]="MaterialPropertyEndPointer"
    ["lStack_120"]="MaterialPropertyStartPointer"
    ["uStack_d8"]="PropertyStringLength"
    ["pcStack_e0"]="PropertyStringBuffer"
    ["acStack_d0"]="PropertyCharArray"
    ["puStack_e8"]="PropertyNodeIterator"
    ["lStack_x_8"]="MaterialCleanupContext"
    ["iStack_48"]="MaterialPropertyIndex"
    ["in_stack_00000080"]="PropertyBatchSize"
    ["iStack0000000000000050"]="PropertyArraySize"
    ["puStack_2f8"]="PropertyAllocationPointer"
    ["pFirstChar8"]="PropertyCharPointer"
    ["pFirstChar1"]="PropertyStringPointer"
    ["pRenderStateByte"]="RenderStateBytePointer"
    ["pbVar6"]="RenderBytePointer"
)

# 定义局部变量映射
declare -A local_vars=(
    ["MaterialPropertyValue1"]="PropertyHashValue"
    ["MaterialPropertyValue9"]="PropertyArrayIndex"
    ["MaterialMaterialPropertyPointer2"]="PropertyNodePointer"
    ["MaterialMaterialPropertyPointer3"]="PropertyStringPointer"
    ["MaterialShaderBatchIndex"]="ShaderBatchOffset"
    ["ShaderPropertyTypeIndex"]="PropertyTypeIndex"
    ["ContextPointer"]="PropertyContextPointer"
    ["MemoryBlockPointer6"]="PropertyMemoryPointer"
    ["RequiredPropertyCount"]="PropertyRequiredCount"
    ["PropertyUnsignedValue"]="PropertySizeValue"
    ["LoopPropertyCounter"]="PropertyLoopCounter"
    ["PropertySourceNode"]="PropertySourcePointer"
    ["PropertyValidationResult1"]="PropertyValidationCounter"
    ["MaterialPropertyBaseOffset"]="PropertyBaseOffset"
    ["PropertyDataIterator"]="PropertyDataPointer"
)

# 执行堆栈变量替换
for old_var in "${!stack_vars[@]}"; do
    new_var="${stack_vars[$old_var]}"
    echo "替换堆栈变量: $old_var -> $new_var"
    sed -i "s/\b$old_var\b/$new_var/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
done

# 执行局部变量替换
for old_var in "${!local_vars[@]}"; do
    new_var="${local_vars[$old_var]}"
    echo "替换局部变量: $old_var -> $new_var"
    sed -i "s/\b$old_var\b/$new_var/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
done

echo "变量名美化完成"