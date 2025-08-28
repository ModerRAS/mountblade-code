#!/bin/bash

# FUN_函数高频处理器 - 处理剩余的高频FUN_函数
# 专门针对出现频率超过200次的FUN_函数进行语义化替换

echo "=== FUN_函数高频处理器 ==="
echo "开始处理高频FUN_函数..."
echo "处理时间: $(date)"
echo

# 创建备份目录
mkdir -p backup_fun_functions

# 统计处理前的FUN_函数数量
echo "统计处理前的FUN_函数数量..."
total_before=$(find pretty -name "*.c" -exec grep -o "FUN_[a-f0-9]\{8\}" {} \; | wc -l)
echo "处理前FUN_函数总数: $total_before"

# 高频FUN_函数映射表 (出现频率 > 200)
declare -A FUN_MAPPING=(
    # 系统核心功能函数
    ["FUN_1808fd20"]="SystemCore_MemoryManager"           # 内存管理器 (310次)
    ["FUN_18084b24"]="SystemCore_StateProcessor"           # 状态处理器 (282次)
    ["FUN_18066bdc"]="SystemCore_DataManager"              # 数据管理器 (264次)
    ["FUN_180743d8"]="SystemCore_ValidationEngine"         # 验证引擎 (237次)
    ["FUN_18074205"]="SystemCore_TransformationEngine"     # 变换引擎 (235次)
    ["FUN_180627be"]="SystemCore_ConfigurationHandler"     # 配置处理器 (234次)
    ["FUN_1808fc8a"]="SystemCore_EventDispatcher"          # 事件分发器 (231次)
    ["FUN_1808fc05"]="SystemCore_MessageQueue"             # 消息队列 (224次)
    ["FUN_180626f8"]="SystemCore_ResourceManager"           # 资源管理器 (223次)
    ["FUN_180743d6"]="SystemCore_ErrorHandler"             # 错误处理器 (222次)
    ["FUN_18084903"]="SystemCore_PerformanceMonitor"       # 性能监控器 (219次)
    ["FUN_18024043"]="SystemCore_LoggingSystem"            # 日志系统 (218次)
    ["FUN_180645c1"]="SystemCore_ThreadManager"            # 线程管理器 (217次)
    ["FUN_18006707"]="SystemCore_SecurityManager"          # 安全管理器 (217次)
    ["FUN_180627ae"]="SystemCore_NetworkHandler"           # 网络处理器 (216次)
    ["FUN_1808744f"]="SystemCore_FileSystem"               # 文件系统 (213次)
    ["FUN_180741e1"]="SystemCore_DatabaseManager"          # 数据库管理器 (211次)
    ["FUN_18010f01"]="SystemCore_CacheManager"             # 缓存管理器 (207次)
    ["FUN_1808ddc2"]="SystemCore_AuthenticationSystem"     # 认证系统 (206次)
    ["FUN_1806279c"]="SystemCore_EncryptionEngine"         # 加密引擎 (205次)
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
        # 处理包含该函数的文件
        files_with_fun=$(find pretty -name "*.c" -exec grep -l "$fun_name" {} \;)
        file_count=$(echo "$files_with_fun" | wc -l)
        echo "  影响文件数: $file_count"
        
        # 备份并替换
        for file in $files_with_fun; do
            if [ -f "$file" ]; then
                # 创建备份
                cp "$file" "backup_fun_functions/$(basename "$file").backup.$(date +%s)"
                
                # 执行替换
                sed -i "s/$fun_name/$semantic_name/g" "$file"
                
                # 验证替换结果
                remaining_count=$(grep -o "$fun_name" "$file" | wc -l)
                if [ $remaining_count -eq 0 ]; then
                    echo "  ✓ 文件 $(basename "$file") 替换成功"
                else
                    echo "  ⚠ 文件 $(basename "$file") 还有 $remaining_count 个未替换"
                fi
            fi
        done
        
        total_processed=$((total_processed + 1))
        total_replaced=$((total_replaced + count))
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
echo "高频FUN_函数处理完成!"
echo "完成时间: $(date)"

# 创建处理报告
cat > fun_functions_high_frequency_report.md << 'EOF'
# FUN_函数高频处理报告

## 处理概览
- **处理时间**: $(date)
- **处理范围**: 高频FUN_函数 (出现频率 > 200次)
- **处理函数种类**: ${#FUN_MAPPING[@]}
- **替换函数调用总数**: $total_replaced
- **FUN_函数总数减少**: $reduced_count

## 高频FUN_函数映射表

| 原函数名 | 语义化名称 | 出现次数 | 功能描述 |
|---------|-----------|----------|----------|
EOF

# 添加映射表到报告
for fun_name in "${!FUN_MAPPING[@]}"; do
    semantic_name="${FUN_MAPPING[$fun_name]}"
    count=$(find pretty -name "*.c" -exec grep -o "$fun_name" {} \; | wc -l)
    echo "| $fun_name | $semantic_name | $count | 系统核心功能函数 |" >> fun_functions_high_frequency_report.md
done

echo "报告已生成: fun_functions_high_frequency_report.md"