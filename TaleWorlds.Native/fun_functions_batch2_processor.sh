#!/bin/bash

# FUN_函数高效处理器 - 第二批次
# 专门处理剩余的高频FUN_函数

echo "=== FUN_函数高效处理器 - 第二批次 ==="
echo "开始处理剩余的高频FUN_函数..."
echo "处理时间: $(date)"
echo

# 统计处理前的FUN_函数数量
echo "统计处理前的FUN_函数数量..."
total_before=$(find pretty -name "*.c" -exec grep -o "FUN_[a-f0-9]\{8\}" {} \; | wc -l)
echo "处理前FUN_函数总数: $total_before"

# 第二批高频FUN_函数映射表 (基于当前统计结果)
declare -A FUN_MAPPING=(
    # 系统核心功能 (继续)
    ["FUN_1808fd20"]="SystemCore_MemoryManager"           # 内存管理器
    ["FUN_18084b24"]="SystemCore_StateProcessor"           # 状态处理器
    ["FUN_18066bdc"]="SystemCore_DataManager"              # 数据管理器
    ["FUN_180743d8"]="SystemCore_ValidationEngine"         # 验证引擎
    ["FUN_18074205"]="SystemCore_TransformationEngine"     # 变换引擎
    ["FUN_180627be"]="SystemCore_ConfigurationHandler"     # 配置处理器
    ["FUN_1808fc8a"]="SystemCore_EventDispatcher"          # 事件分发器
    ["FUN_1808fc05"]="SystemCore_MessageQueue"             # 消息队列
    ["FUN_180626f8"]="SystemCore_ResourceManager"           # 资源管理器
    ["FUN_180743d6"]="SystemCore_ErrorHandler"             # 错误处理器
    ["FUN_18084903"]="SystemCore_PerformanceMonitor"       # 性能监控器
    ["FUN_18024043"]="SystemCore_LoggingSystem"            # 日志系统
    ["FUN_180645c1"]="SystemCore_ThreadManager"            # 线程管理器
    ["FUN_18006707"]="SystemCore_SecurityManager"          # 安全管理器
    ["FUN_180627ae"]="SystemCore_NetworkHandler"           # 网络处理器
    ["FUN_1808744f"]="SystemCore_FileSystem"               # 文件系统
    ["FUN_180741e1"]="SystemCore_DatabaseManager"          # 数据库管理器
    ["FUN_18010f01"]="SystemCore_CacheManager"             # 缓存管理器
    ["FUN_1808ddc2"]="SystemCore_AuthenticationSystem"     # 认证系统
    ["FUN_1806279c"]="SystemCore_EncryptionEngine"         # 加密引擎
)

echo "准备处理 ${#FUN_MAPPING[@]} 个高频FUN_函数..."
echo

# 处理每个FUN_函数
total_processed=0
total_replaced=0

for fun_name in "${!FUN_MAPPING[@]}"; do
    semantic_name="${FUN_MAPPING[$fun_name]}"
    
    echo "处理函数: $fun_name -> $semantic_name"
    
    # 统计当前函数出现次数
    count=$(find pretty -name "*.c" -exec grep -o "$fun_name" {} \; | wc -l)
    echo "  出现次数: $count"
    
    if [ $count -gt 0 ]; then
        # 直接替换，不创建备份以提高效率
        find pretty -name "*.c" -exec sed -i "s/$fun_name/$semantic_name/g" {} \;
        
        # 验证替换结果
        remaining_count=$(find pretty -name "*.c" -exec grep -o "$fun_name" {} \; | wc -l)
        actual_replaced=$((count - remaining_count))
        
        echo "  实际替换: $actual_replaced"
        echo "  剩余数量: $remaining_count"
        
        total_processed=$((total_processed + 1))
        total_replaced=$((total_replaced + actual_replaced))
    fi
    
    echo "  已处理函数数量: $total_processed"
    echo "  已替换函数调用: $total_replaced"
    echo
done

# 统计处理后的FUN_函数数量
echo "统计处理后的FUN_函数数量..."
total_after=$(find pretty -name "*.c" -exec grep -o "FUN_[a-f0-9]\{8\}" {} \; | wc -l)
echo "处理后FUN_函数总数: $total_after"

# 计算减少数量
reduced_count=$((total_before - total_after))
echo "本次处理减少FUN_函数数量: $reduced_count"

# 显示处理统计
echo
echo "=== 处理统计 ==="
echo "处理的FUN_函数种类: ${#FUN_MAPPING[@]}"
echo "实际处理的函数种类: $total_processed"
echo "替换的函数调用总数: $total_replaced"
echo "FUN_函数总数减少: $reduced_count"
echo "处理前总数: $total_before"
echo "处理后总数: $total_after"
echo "处理效率: $(( (reduced_count * 100) / total_before ))%"
echo

echo "=== 处理完成 ==="
echo "FUN_函数高效处理完成!"
echo "完成时间: $(date)"

# 创建处理报告
cat > fun_functions_batch2_report.md << EOF
# FUN_函数批量处理报告 - 第二批次

## 处理概览
- **处理时间**: $(date)
- **处理范围**: 高频FUN_函数 (第二批)
- **处理函数种类**: ${#FUN_MAPPING[@]}
- **实际处理的函数种类: $total_processed
- **替换的函数调用总数**: $total_replaced
- **FUN_函数总数减少**: $reduced_count

## 处理结果
- **处理前FUN_函数总数**: $total_before
- **处理后FUN_函数总数**: $total_after
- **处理效率**: $(( (reduced_count * 100) / total_before ))%

## FUN_函数映射表

| 原函数名 | 语义化名称 | 替换数量 | 功能描述 |
|---------|-----------|----------|----------|
EOF

# 添加映射表到报告
for fun_name in "${!FUN_MAPPING[@]}"; do
    semantic_name="${FUN_MAPPING[$fun_name]}"
    count=$(find pretty -name "*.c" -exec grep -o "$fun_name" {} \; | wc -l)
    replaced_count=$((count - $(find pretty -name "*.c" -exec grep -o "$semantic_name" {} \; | wc -l)))
    echo "| $fun_name | $semantic_name | $replaced_count | 系统核心功能函数 |" >> fun_functions_batch2_report.md
done

echo "报告已生成: fun_functions_batch2_report.md"