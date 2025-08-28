#!/bin/bash

# 文件路径
FILE_PATH="/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/pretty/99_part_13_part073.c"

# FUN_函数到语义化名称的映射
declare -A FUN_MAPPING=(
    ["FUN_1808fcb90"]="SystemInitializer"
    ["FUN_1808fcb30"]="SystemStateCleaner"
    ["FUN_1808db3f0"]="ResourceManager"
    ["FUN_180768400"]="ResourceCleanupHandler"
    ["FUN_180768360"]="ResourceAllocator"
    ["FUN_180742250"]="ResourcePoolManager"
    ["FUN_180741e10"]="ResourceSystemController"
    ["FUN_18084c220"]="ResourceReferenceManager"
    ["FUN_1808b02a0"]="ResourceReleaseHandler"
    ["FUN_1808fc050"]="SystemController"
    ["FUN_1808fd200"]="SystemCleanupInvoker"
    ["FUN_1808dcd20"]="SystemDataManager"
    ["FUN_1808dbcd0"]="SystemResourceHandler"
    ["FUN_1808db010"]="SystemValidator"
    ["FUN_18088c790"]="EventManager"
    ["FUN_18088c740"]="EventHandler"
    ["FUN_18088c620"]="EventDispatcher"
    ["FUN_18088a0c0"]="EventInitializer"
    ["FUN_180867d60"]="StateManager"
    ["FUN_18085dbf0"]="ResourceOperationHandler"
    ["FUN_180747f10"]="ResourceAccessController"
    ["FUN_180741df0"]="ResourceDataProcessor"
    ["FUN_180741d10"]="ResourceQueryHandler"
    ["FUN_180739cc0"]="ResourceValidator"
    ["FUN_180739b90"]="ResourceChecker"
    ["FUN_1808daf3b"]="SystemInternalFunc1"
    ["FUN_1808daf2a"]="SystemInternalFunc2"
    ["FUN_1808dae64"]="SystemInternalFunc3"
    ["FUN_1808dae5f"]="SystemInternalFunc4"
    ["FUN_1808dae4c"]="SystemInternalFunc5"
    ["FUN_1808dae30"]="SystemInternalFunc6"
    ["FUN_1808dad80"]="SystemInternalFunc7"
    ["FUN_1808dad20"]="SystemInternalFunc8"
    ["FUN_1808dac90"]="SystemInternalFunc9"
    ["FUN_1808dab90"]="SystemInternalFunc10"
    ["FUN_1808dab64"]="SystemInternalFunc11"
    ["FUN_1808dab52"]="SystemInternalFunc12"
    ["FUN_1808daaa9"]="SystemInternalFunc13"
    ["FUN_1808daa70"]="SystemInternalFunc14"
    ["FUN_1808daa00"]="SystemInternalFunc15"
    ["FUN_1808da910"]="SystemInternalFunc16"
    ["FUN_1808da8ec"]="SystemInternalFunc17"
    ["FUN_1808da82b"]="SystemInternalFunc18"
    ["FUN_1808da7b0"]="SystemInternalFunc19"
    ["FUN_1808da5c0"]="SystemInternalFunc20"
    ["FUN_1808da330"]="SystemInternalFunc21"
    ["FUN_1808d9fe0"]="SystemInternalFunc22"
    ["FUN_1808d9e90"]="SystemInternalFunc23"
    ["FUN_1808d9de0"]="SystemInternalFunc24"
    ["FUN_1808d9d50"]="SystemInternalFunc25"
    ["FUN_1808d9ce0"]="SystemInternalFunc26"
    ["FUN_1808d9c82"]="SystemInternalFunc27"
)

# 备份原文件
cp "$FILE_PATH" "$FILE_PATH.bak"

# 执行替换
for fun_name in "${!FUN_MAPPING[@]}"; do
    semantic_name="${FUN_MAPPING[$fun_name]}"
    
    # 使用sed替换函数调用
    sed -i "s/$fun_name(/$semantic_name(/g" "$FILE_PATH"
    
    echo "替换 $fun_name -> $semantic_name"
done

echo "FUN_函数替换完成"