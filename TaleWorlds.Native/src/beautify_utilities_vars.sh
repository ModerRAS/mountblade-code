#!/bin/bash

# 美化06_utilities.c文件中的变量名
# 批量替换DAT_变量为语义化名称

# 定义变量映射关系
declare -A variable_mapping=(
    ["DAT_180bf00a8"]="SecurityEncryptionKey"
    ["DAT_180be12f0"]="SystemResourceManager"
    ["DAT_180c82240"]="SystemEventHandle"
    ["DAT_180c82250"]="SystemFunctionPointer"
    ["DAT_180c8ed60"]="ResourceReferenceCounter"
    ["DAT_180c8ed64"]="SystemOperationCounter"
    ["DAT_180c8ed18"]="ResourceBufferPool"
    ["DAT_180c8ed30"]="DataTableBuffer"
    ["DAT_18098bc73"]="DefaultStringConstant"
    ["DAT_180d49140"]="SystemEventFlag"
    ["DAT_180d49148"]="SecondaryEventFlag"
    ["DAT_180d49158"]="TertiaryEventFlag"
    ["DAT_180d49160"]="SystemQueueHead"
    ["DAT_180d491f8"]="SystemQueueFlag"
    ["DAT_180d49200"]="LinkedListNode"
    ["DAT_180c8a9b0"]="GlobalSystemState"
)

# 遍历所有变量并替换
for old_name in "${!variable_mapping[@]}"; do
    new_name="${variable_mapping[$old_name]}"
    
    echo "替换 $old_name -> $new_name"
    
    # 使用sed进行替换
    sed -i "s/\b$old_name\b/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
done

echo "变量替换完成"