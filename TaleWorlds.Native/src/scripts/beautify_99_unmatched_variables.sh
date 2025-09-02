#!/bin/bash

# 美化99_unmatched_functions.c中的变量名
# 基于地址范围和用途模式进行重命名

# 定义变量映射关系
# 地址范围 180a04000-180a05000: 系统配置和状态变量
declare -A VAR_MAPPINGS=(
    # 系统资源管理相关变量
    ["UNK_180a04258"]="SystemResourceTable"
    ["UNK_180a04280"]="SystemResourceQueue"
    ["UNK_180a042a0"]="SystemResourceStack"
    ["UNK_180a042b8"]="SystemResourceList"
    ["UNK_180a042e0"]="SystemResourceCache"
    ["UNK_180a042f0"]="SystemResourceBuffer"
    ["UNK_180a04310"]="SystemResourcePool"
    ["UNK_180a04328"]="SystemResourceIndex"
    ["UNK_180a04360"]="SystemResourceArray"
    ["UNK_180a043a8"]="SystemResourcePointer"
    ["UNK_180a04510"]="SystemResourceHandle"
    ["UNK_180a04388"]="SystemResourceData"
    ["UNK_180a043b8"]="SystemResourceInfo"
    ["UNK_180a043c8"]="SystemResourceStatus"
    ["UNK_180a043d8"]="SystemResourceFlag"
    ["UNK_180a043e8"]="SystemResourceCounter"
    ["UNK_180a04408"]="SystemResourceSize"
    ["UNK_180a04450"]="SystemResourceLimit"
    ["UNK_180a04470"]="SystemResourceOffset"
    ["UNK_180a04490"]="SystemResourceBase"
    ["UNK_180a044a8"]="SystemResourceEnd"
    ["UNK_180a044c0"]="SystemResourceStart"
    ["UNK_180a044d8"]="SystemResourceTop"
    ["UNK_180a044f8"]="SystemResourceBottom"
    ["UNK_180a04558"]="SystemResourceCapacity"
    ["UNK_180a045d0"]="SystemResourceCount"
    ["UNK_180a045a8"]="SystemResourceLength"
    ["UNK_180a045e0"]="SystemResourceWidth"
    ["UNK_180a045ec"]="SystemResourceHeight"
    ["UNK_180a045f0"]="SystemResourceDepth"
    ["UNK_180a045fc"]="SystemResourceFormat"
    ["UNK_180a04620"]="SystemResourceType"
    ["UNK_180a04600"]="SystemResourceKind"
    ["UNK_180a04640"]="SystemResourceClass"
    ["UNK_180a04630"]="SystemResourceCategory"
    ["UNK_180a03730"]="SystemResourceGroup"
    ["UNK_180a04668"]="SystemResourceSet"
    ["UNK_180a04658"]="SystemResourceCollection"
    ["UNK_180a04688"]="SystemResourceBundle"
    ["UNK_180a046d0"]="SystemResourcePackage"
    ["UNK_180a046e0"]="SystemResourceContainer"
    ["UNK_180a04720"]="SystemResourceHolder"
    ["UNK_180a04780"]="SystemRepositoryIndex"
    ["UNK_180a047e8"]="SystemRepositorySize"
    ["UNK_180a04880"]="SystemRepositoryData"
    ["UNK_180a04da8"]="SystemRepositoryInfo"
    ["UNK_180a04e38"]="SystemRepositoryStatus"
    ["UNK_180a049c0"]="SystemRepositoryFlag"
    ["UNK_180a049b0"]="SystemRepositoryCounter"
    ["UNK_180a049d8"]="SystemRepositoryPointer"
)

# 执行替换操作
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

for old_name in "${!VAR_MAPPINGS[@]}"; do
    new_name="${VAR_MAPPINGS[$old_name]}"
    
    # 使用sed进行替换，只替换变量定义，不替换注释中的内容
    sed -i "s/undefined $old_name;/undefined $new_name;/g" 99_unmatched_functions.c
    
    echo "重命名: $old_name -> $new_name"
done

echo "变量重命名完成"