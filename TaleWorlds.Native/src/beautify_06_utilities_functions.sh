#!/bin/bash

# 06_utilities.c 文件 FUN_ 函数美化脚本
# 此脚本用于批量替换文件中的 FUN_ 函数调用为语义化名称

# 设置文件路径
FILE_PATH="TaleWorlds.Native/src/06_utilities.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup"

# FUN_ 函数替换映射表
# 格式: "原始函数名->语义化函数名"
declare -a FUN_REPLACEMENTS=(
    "FUN_180047e40->InitializeSystemMemoryPool"
    "FUN_180062300->ProcessSystemDataTransferAndValidation"
    "FUN_180069530->ProcessSystemOperationsAndTasks"
    "FUN_180074a80->ProcessSystemDataReadWrite"
    "FUN_18064e900->EncryptSystemDataForSecurity"
    "FUN_18007f840->ManageSystemContextLifecycle"
    "FUN_18007f6a0->ProcessSystemResourcesAndMemory"
    "FUN_18013ea00->CleanupDataBufferAndMemory"
    "FUN_1808fc5ac->CheckSystemStatusAndHealth"
    "FUN_1808fc51c->ExecuteUtilityOperationWithParameters"
    "FUN_1808fc914->ValidateDataWithParametersAndValidation"
    "FUN_1808fc074->ValidateSystemStateAndCheckResources"
    "FUN_1803f33b0->ProcessMemoryAccessWithValidation"
    "FUN_180090b80->ValidateSystemContextA0"
    "FUN_180057010->ProcessDataArrayWithValidation"
    "FUN_1800a19c0->InitializeSystemDataBuffer"
    "FUN_18009fb60->ExecuteSystemCoreCommand"
)

# 执行批量替换
for replacement in "${FUN_REPLACEMENTS[@]}"; do
    original=$(echo "$replacement" | cut -d'->' -f1)
    semantic=$(echo "$replacement" | cut -d'->' -f2)
    
    echo "替换: $original -> $semantic"
    
    # 使用 sed 进行替换
    sed -i "s/\b$original\b/$semantic/g" "$FILE_PATH"
done

echo "FUN_ 函数美化完成"

# 验证替换结果
echo "验证替换结果..."
grep -c "FUN_" "$FILE_PATH" || echo "所有 FUN_ 函数已成功替换"

# 清理备份文件
rm -f "$FILE_PATH.backup"

echo "脚本执行完成"