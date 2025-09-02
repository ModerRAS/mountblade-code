#!/bin/bash

# 02_core_engine.c 剩余函数批量美化脚本
# 创建时间: $(date)

echo "开始处理 02_core_engine.c 文件中的剩余函数..."

# 创建备份
cp "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c" "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.backup.$(date +%Y%m%d_%H%M%S)"
echo "已创建备份文件"

# 定义要处理的函数映射
declare -A FUNCTIONS_TO_PROCESS=(
    # 内存管理相关函数
    ["FUN_180063820"]="CoreEngineProcessMemoryAllocation"
    ["FUN_180063b30"]="CoreEngineReleaseMemoryAllocation"
    ["FUN_180063cf0"]="CoreEngineProcessMemoryOperation"
    ["FUN_180064010"]="CoreEngineInitializeMemoryContext"
    ["FUN_180064400"]="CoreEngineValidateMemoryOperation"
    ["FUN_180064c00"]="CoreEngineProcessMemoryDataTransfer"
    ["FUN_180065160"]="CoreEngineExecuteMemoryOperation"
    ["FUN_180065d50"]="CoreEngineProcessMemoryCleanup"
    ["FUN_180065f00"]="CoreEngineInitializeMemoryOperation"
    ["FUN_180066140"]="CoreEngineProcessMemoryConfiguration"
)

# 处理每个函数
for old_func in "${!FUNCTIONS_TO_PROCESS[@]}"; do
    new_func="${FUNCTIONS_TO_PROCESS[$old_func]}"
    
    echo "正在处理函数: $old_func -> $new_func"
    
    # 检查函数是否存在
    if grep -q "void $old_func" "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"; then
        echo "找到函数 $old_func，开始处理..."
        
        # 1. 重命名函数定义
        sed -i "s/void $old_func(/void $new_func(/g" "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
        
        # 2. 更新函数调用
        sed -i "s/$old_func(/$new_func(/g" "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
        
        # 3. 更新注释中的函数名
        sed -i "s/函数:.*$old_func/函数: $new_func (原函数名: $old_func)/g" "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
        
        echo "函数 $old_func 已成功重命名为 $new_func"
    else
        echo "未找到函数 $old_func，跳过处理"
    fi
done

echo "函数重命名完成"

# 变量名美化
echo "开始变量名美化..."

# 常见变量名替换
declare -A VARIABLE_REPLACEMENTS=(
    ["auStack_"]="SystemStackBuffer"
    ["uStack_"]="SystemVariable"
    ["lStack_"]="SystemLongVariable"
    ["puStack_"]="SystemPointer"
    ["pstatusFlag"]="StatusFlagPointer"
    ["primaryDataPointer"]="PrimaryDataPointer"
    ["MemoryOffset"]="MemoryOffset"
    ["MemoryBaseAddress"]="MemoryBaseAddress"
    ["allocatedMemory"]="AllocatedMemory"
    ["memoryEndAddress"]="MemoryEndAddress"
    ["memoryBlockSize"]="MemoryBlockSize"
)

for old_var in "${!VARIABLE_REPLACEMENTS[@]}"; do
    new_var="${VARIABLE_REPLACEMENTS[$old_var]}"
    echo "替换变量名: $old_var -> $new_var"
    
    # 使用更精确的替换模式
    sed -i "s/\b$old_var\([a-zA-Z0-9_]*\)\b/$new_var\1/g" "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
done

echo "变量名美化完成"

# 创建处理报告
echo "创建处理报告..."

REPORT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine_beautification_report_$(date +%Y%m%d_%H%M%S).md"

cat > "$REPORT_FILE" << EOF
# 02_core_engine.c 函数美化处理报告

**处理时间**: $(date)
**处理文件**: /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

## 处理的函数

### 内存管理相关函数
EOF

for old_func in "${!FUNCTIONS_TO_PROCESS[@]}"; do
    new_func="${FUNCTIONS_TO_PROCESS[$old_func]}"
    echo "- $old_func → $new_func" >> "$REPORT_FILE"
done

cat >> "$REPORT_FILE" << EOF

## 变量名替换

### 系统变量
EOF

for old_var in "${!VARIABLE_REPLACEMENTS[@]}"; do
    new_var="${VARIABLE_REPLACEMENTS[$old_var]}"
    echo "- $old_var → $new_var" >> "$REPORT_FILE"
done

cat >> "$REPORT_FILE" << EOF

## 处理统计

- 处理函数数量: ${#FUNCTIONS_TO_PROCESS[@]}
- 变量替换数量: ${#VARIABLE_REPLACEMENTS[@]}
- 备份文件: 02_core_engine.c.backup.$(date +%Y%m%d_%H%M%S)

## 注意事项

1. 此脚本仅处理了部分函数，还有更多函数需要手动处理
2. 变量名替换可能需要进一步优化
3. 建议手动验证处理结果
4. 需要为每个函数添加详细的文档注释

## 后续工作

1. 处理剩余的 FUN_180xxxxx 函数
2. 为每个函数添加详细的文档注释
3. 进一步优化变量名
4. 验证代码的正确性
5. 更新相关文档

## 处理结果

- 函数重命名: 已完成
- 变量名美化: 已完成
- 基本验证: 需要手动进行
- 文档注释: 需要手动添加

---

**报告生成时间**: $(date)
**处理脚本**: beautify_02_core_engine_batch.sh
EOF

echo "处理报告已创建: $REPORT_FILE"

echo "批量处理完成！"
echo ""
echo "处理结果摘要:"
echo "- 处理函数数量: ${#FUNCTIONS_TO_PROCESS[@]}"
echo "- 变量替换数量: ${#VARIABLE_REPLACEMENTS[@]}"
echo "- 备份文件: 02_core_engine.c.backup.$(date +%Y%m%d_%H%M%S)"
echo "- 处理报告: $REPORT_FILE"
echo ""
echo "建议后续工作:"
echo "1. 手动验证处理结果"
echo "2. 为函数添加详细文档注释"
echo "3. 处理剩余的函数"
echo "4. 进一步优化变量名"