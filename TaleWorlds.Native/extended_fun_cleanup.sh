#!/bin/bash

# 扩展的FUN_函数批量处理脚本
# 处理剩余的414个FUN_函数调用

FILE_PATH="pretty/06_utilities_part026_sub002_sub002.c"

echo "继续处理文件: $FILE_PATH"

# 统计当前状态
echo "统计当前FUN_函数调用..."
FUN_COUNT=$(grep -c "FUN_" "$FILE_PATH")
echo "当前剩余 $FUN_COUNT 个FUN_函数调用"

# 创建扩展的语义化替换映射
cat > extended_mapping.txt << 'EOF'
# 扩展的FUN_函数到语义化别名的映射
FUN_18005cb60=SystemDataTransformer
FUN_1800587d0=SystemBufferManager
FUN_180058710=SystemStreamProcessor
FUN_18022f390=SystemAlgorithmOptimizer
FUN_18020eba0=SystemQueueManager
FUN_1800b94f0=SystemStackHandler
FUN_1800b9270=SystemHeapManager
FUN_1800b9210=SystemMemoryController
FUN_1800b9030=SystemPoolAllocator
FUN_180058210=SystemCacheManager
FUN_1801b9690=SystemThreadManager
FUN_1800e7d00=SystemLockHandler
FUN_1800e7c40=SystemSemaphoreManager
FUN_1800a19c0=SystemEventProcessor
FUN_180069530=SystemTimerController
FUN_18013ea00=SystemFileHandler
FUN_18011d900=SystemDirectoryManager
FUN_1800ba100=SystemPathProcessor
FUN_180152b00=SystemIOController
FUN_1800f7320=SystemDeviceManager
EOF

echo "开始扩展FUN_函数替换..."

# 读取扩展映射文件并执行替换
while IFS='=' read -r fun_name alias_name; do
    # 跳过注释行和空行
    [[ $fun_name =~ ^#.* ]] && continue
    [[ -z $fun_name ]] && continue
    
    # 统计当前FUN_函数的出现次数
    current_count=$(grep -c "$fun_name" "$FILE_PATH")
    if [ $current_count -gt 0 ]; then
        echo "替换 $fun_name -> $alias_name (出现次数: $current_count)"
        
        # 执行替换
        sed -i "s/$fun_name/$alias_name/g" "$FILE_PATH"
        
        # 验证替换结果
        remaining_count=$(grep -c "$fun_name" "$FILE_PATH")
        if [ $remaining_count -eq 0 ]; then
            echo "✓ $fun_name 替换完成"
        else
            echo "✗ $fun_name 替换失败，剩余 $remaining_count 个"
        fi
    fi
done < extended_mapping.txt

# 统计处理结果
echo "统计扩展处理结果..."
NEW_FUN_COUNT=$(grep -c "FUN_" "$FILE_PATH")
echo "处理后剩余 $NEW_FUN_COUNT 个FUN_函数调用"
REPLACED_COUNT=$((FUN_COUNT - NEW_FUN_COUNT))
echo "本次成功替换 $REPLACED_COUNT 个FUN_函数调用"

# 显示剩余的FUN_函数
echo "剩余的FUN_函数:"
grep -o "FUN_[0-9a-f]*" "$FILE_PATH" | sort | uniq -c | sort -nr | head -10

echo "扩展处理完成"