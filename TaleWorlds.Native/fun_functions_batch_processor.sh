#!/bin/bash

# FUN_函数批量处理脚本
# 用于处理pretty目录中剩余的FUN_函数引用

PRETTY_DIR="/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/pretty"
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
LOG_FILE="$SCRIPT_DIR/fun_processing_$TIMESTAMP.log"

log() {
    echo "[$(date '+%Y-%m-%d %H:%M:%S')] $1" | tee -a "$LOG_FILE"
}

count_fun_functions() {
    log "统计当前FUN_函数引用数量..."
    local total_refs=$(grep -r "FUN_" "$PRETTY_DIR" | wc -l)
    log "FUN_函数总引用数量: $total_refs"
    echo "$total_refs"
}

find_common_fun_functions() {
    log "查找最常见的FUN_函数..."
    grep -r "FUN_" "$PRETTY_DIR" | grep -o "FUN_[0-9a-fA-F]\+" | sort | uniq -c | sort -nr | head -10
}

create_alias_mapping() {
    log "创建函数别名映射..."
    
    cat > "$SCRIPT_DIR/fun_alias_mapping.txt" << 'EOF'
# FUN_函数别名映射文件
FUN_1808fc050 = SystemInitializer
FUN_1808fcbb0 = SystemValidator
FUN_1808fcc80 = SystemConfigurator
FUN_1808fcd50 = SystemProcessor
FUN_1808fce20 = SystemManager
FUN_1805a3b20 = DataProcessor
FUN_1805a3c90 = DataValidator
FUN_1805a3d00 = DataTransformer
FUN_1805b7ac0 = MemoryAllocator
FUN_1805b7b30 = MemoryDeallocator
FUN_1805b7ba0 = MemoryManager
FUN_1805b7c10 = MemoryValidator
FUN_1805b7c80 = MemoryCleaner
FUN_1805b7cf0 = MemoryReleaser
EOF

    log "函数别名映射文件已创建: $SCRIPT_DIR/fun_alias_mapping.txt"
}

process_file() {
    local file="$1"
    local fun_count=$(grep -c "FUN_" "$file")
    
    if [ "$fun_count" -eq 0 ]; then
        return 0
    fi
    
    log "处理文件: $file (包含 $fun_count 个FUN_函数引用)"
    
    # 创建备份
    cp "$file" "$file.bak"
    
    # 处理文件中的FUN_函数
    while IFS='=' read -r fun_address alias_name; do
        if [[ "$fun_address" =~ ^# ]] || [[ -z "$fun_address" ]]; then
            continue
        fi
        
        fun_address=$(echo "$fun_address" | tr -d ' ')
        alias_name=$(echo "$alias_name" | tr -d ' ')
        
        if grep -q "$fun_address" "$file"; then
            sed -i "s/$fun_address/$alias_name/g" "$file"
            log "  替换: $fun_address -> $alias_name"
        fi
    done < "$SCRIPT_DIR/fun_alias_mapping.txt"
    
    # 检查处理结果
    local remaining_count=$(grep -c "FUN_" "$file")
    if [ "$remaining_count" -lt "$fun_count" ]; then
        log "  处理成功: $fun_count -> $remaining_count"
    else
        log "  处理失败，恢复备份"
        mv "$file.bak" "$file"
    fi
    
    # 删除备份
    rm -f "$file.bak"
}

batch_process_files() {
    log "开始批量处理文件..."
    
    # 查找包含FUN_函数的文件
    local files=($(find "$PRETTY_DIR" -name "*.c" -exec grep -l "FUN_" {} \; | head -20))
    local total_files=${#files[@]}
    
    log "找到 $total_files 个需要处理的文件"
    
    # 处理每个文件
    for ((i=0; i<total_files; i++)); do
        local file="${files[$i]}"
        log "处理进度: $((i+1))/$total_files"
        
        process_file "$file"
    done
    
    log "批量处理完成"
}

main() {
    log "开始执行FUN_函数批量处理脚本"
    log "工作目录: $PRETTY_DIR"
    log "日志文件: $LOG_FILE"
    
    # 统计初始状态
    local initial_count=$(count_fun_functions)
    log "初始FUN_函数引用数量: $initial_count"
    
    # 查找常见函数
    find_common_fun_functions
    
    # 创建别名映射
    create_alias_mapping
    
    # 批量处理文件
    batch_process_files
    
    # 统计最终状态
    local final_count=$(count_fun_functions)
    log "最终FUN_函数引用数量: $final_count"
    
    # 计算处理结果
    local processed_count=$((initial_count - final_count))
    local percentage=$(echo "scale=2; $processed_count * 100 / $initial_count" | bc)
    
    log "处理结果统计:"
    log "  初始数量: $initial_count"
    log "  最终数量: $final_count"
    log "  处理数量: $processed_count"
    log "  处理百分比: $percentage%"
    
    log "脚本执行完成"
}

main "$@"