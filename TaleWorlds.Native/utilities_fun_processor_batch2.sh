#!/bin/bash

# FUN_函数批量处理脚本 - 处理剩余的FUN_函数调用
# 用于美化代码中的FUN_函数调用，提高代码可读性

# 设置基本变量
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"

# 颜色输出
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# 日志函数
log_info() {
    echo -e "${GREEN}[INFO]${NC} $1"
}

log_warn() {
    echo -e "${YELLOW}[WARN]${NC} $1"
}

log_error() {
    echo -e "${RED}[ERROR]${NC} $1"
}

log_blue() {
    echo -e "${BLUE}[INFO]${NC} $1"
}

# 统计函数
count_fun_functions() {
    local count=$(grep -r "FUN_180[0-9a-f]*(" pretty/ | grep -v "Unwind_" | wc -l)
    echo "$count"
}

# 统计文件数量
count_fun_files() {
    local count=$(grep -r "FUN_180[0-9a-f]*(" pretty/ | grep -v "Unwind_" | cut -d: -f1 | sort | uniq | wc -l)
    echo "$count"
}

# 创建FUN_函数映射
create_fun_mapping() {
    log_info "创建FUN_函数映射..."
    
    # 分析最常见的FUN_函数
    log_blue "分析最常见的FUN_函数..."
    grep -r "FUN_180[0-9a-f]*(" pretty/ | grep -v "Unwind_" | cut -d: -f2 | sort | uniq -c | sort -nr | head -20 > /tmp/fun_functions_top.txt
    
    # 创建映射文件
    cat > /tmp/fun_mapping.txt << 'EOF'
# 渲染系统函数映射
FUN_1803982f0=RenderingSystem_ContextDataProcessor
FUN_180398640=RenderingSystem_ContextDataUpdater
FUN_180080810=RenderingSystem_ResourceAllocator
FUN_1800b8630=RenderingSystem_ObjectListProcessor
FUN_1802f4040=RenderingSystem_TransformDataProcessor
FUN_18063a7b0=RenderingSystem_TransformDataUpdater
FUN_180443820=RenderingSystem_RemoveRenderObject
FUN_180443930=RenderingSystem_ProcessDataTransform
FUN_1804439b0=RenderingSystem_UpdateRenderState
FUN_18049c310=RenderingSystem_MatrixTransformInterpolator

# 内存管理函数映射
FUN_1805a3b20=MemoryManager_Allocate
FUN_1805a3af0=MemoryManager_Free
FUN_1805a3b50=MemoryManager_Reallocate
FUN_1805a3b80=MemoryManager_Copy
FUN_1805a3bb0=MemoryManager_Set

# 数据处理函数映射
FUN_18069a490=DataProcessor_Main
FUN_18069a4c0=DataProcessor_Sub
FUN_18069a4f0=DataProcessor_Process
FUN_18069a520=DataProcessor_Update

# 系统控制函数映射
FUN_18086b47c=SystemInitializer_Main
FUN_1808fc050=SystemSecurityChecker
FUN_1808fc080=SystemConfigManager
FUN_1808fc0b0=SystemStateUpdater

# 网络系统函数映射
FUN_180391980=NetworkingSystem_ConnectionProcessor
FUN_1803919b0=NetworkingSystem_DataProcessor
FUN_1803919e0=NetworkingSystem_StateManager

# 资源管理函数映射
FUN_180059ba0=ResourceManager_Release
FUN_180296ad0=ResourceManager_Cleanup
FUN_180296b00=ResourceManager_Initialize
FUN_180296b30=ResourceManager_Allocate

# 字符串处理函数映射
FUN_1808fcb90=StringProcessor_Main
FUN_1808fcbc0=StringProcessor_Copy
FUN_1808fcbf0=StringProcessor_Concat
FUN_1808fcc20=StringProcessor_Compare

# 状态检查函数映射
FUN_180631000=StatusChecker_Main
FUN_180631030=StatusChecker_Validate
FUN_180631060=StatusChecker_Update
FUN_180631090=StatusChecker_Reset

# 错误处理函数映射
FUN_180631b90=ErrorHandler_Main
FUN_180631bc0=ErrorHandler_Process
FUN_180631bf0=ErrorHandler_Recover
FUN_180631c20=ErrorHandler_Log

# 新增的FUN_函数映射
FUN_1801865a0=RenderingSystem_CommandExecutor
FUN_180186880=RenderingSystem_ResourceDestroyer
FUN_180186ac0=RenderingSystem_ResourceReleaser
FUN_180186eb0=RenderingSystem_ObjectDestroyer
FUN_1801871f0=RenderingSystem_FinalProcessor
EOF

    log_info "FUN_函数映射创建完成"
}

# 处理单个文件
process_file() {
    local file="$1"
    local temp_file="/tmp/temp_$(basename "$file")"
    
    # 复制文件到临时文件
    cp "$file" "$temp_file"
    
    # 读取映射文件并替换
    while IFS='=' read -r fun_name alias_name; do
        # 跳过注释行和空行
        [[ "$fun_name" =~ ^#.*$ ]] && continue
        [[ -z "$fun_name" ]] && continue
        
        # 替换函数调用
        sed -i "s/$fun_name(/$alias_name(/g" "$temp_file"
        
        # 替换函数定义
        sed -i "s/^void $fun_name(/void $alias_name(/g" "$temp_file"
        sed -i "s/^int32_t $fun_name(/int32_t $alias_name(/g" "$temp_file"
        sed -i "s/^uint64_t $fun_name(/uint64_t $alias_name(/g" "$temp_file"
        sed -i "s/^int64_t $fun_name(/int64_t $alias_name(/g" "$temp_file"
        sed -i "s/^char $fun_name(/char $alias_name(/g" "$temp_file"
        sed -i "s/^float $fun_name(/float $alias_name(/g" "$temp_file"
        sed -i "s/^double $fun_name(/double $alias_name(/g" "$temp_file"
        sed -i "s/^bool $fun_name(/bool $alias_name(/g" "$temp_file"
    done < /tmp/fun_mapping.txt
    
    # 检查是否有变化
    if ! cmp -s "$file" "$temp_file"; then
        # 备份原文件
        cp "$file" "$file.bak"
        # 替换原文件
        mv "$temp_file" "$file"
        return 0  # 有变化
    else
        rm -f "$temp_file"
        return 1  # 无变化
    fi
}

# 批量处理文件
batch_process_files() {
    log_info "开始批量处理文件..."
    
    # 获取包含FUN_函数的文件列表
    local files=$(grep -r "FUN_180[0-9a-f]*(" pretty/ | grep -v "Unwind_" | cut -d: -f1 | sort | uniq)
    
    local processed=0
    local modified=0
    local total_files=$(echo "$files" | wc -l)
    
    for file in $files; do
        if [[ -f "$file" ]]; then
            if process_file "$file"; then
                log_info "处理完成: $file"
                ((modified++))
            else
                log_blue "无需修改: $file"
            fi
            ((processed++))
            
            # 显示进度
            if (( processed % 10 == 0 )); then
                log_info "进度: $processed/$total_files 文件已处理"
            fi
        fi
    done
    
    log_info "批量处理完成: 处理了 $processed 个文件，修改了 $modified 个文件"
}

# 主函数
main() {
    log_info "开始执行FUN_函数批量处理..."
    
    # 初始统计
    local initial_count=$(count_fun_functions)
    local initial_files=$(count_fun_files)
    log_info "初始状态: $initial_count 个FUN_函数调用，分布在 $initial_files 个文件中"
    
    # 创建映射
    create_fun_mapping
    
    # 批量处理
    batch_process_files
    
    # 最终统计
    local final_count=$(count_fun_functions)
    local final_files=$(count_fun_files)
    local reduced_count=$((initial_count - final_count))
    
    log_info "处理结果:"
    log_info "  初始FUN_函数调用: $initial_count"
    log_info "  最终FUN_函数调用: $final_count"
    log_info "  减少FUN_函数调用: $reduced_count"
    log_info "  剩余文件数量: $final_files"
    
    # 清理临时文件
    rm -f /tmp/fun_functions_top.txt
    rm -f /tmp/fun_mapping.txt
    
    log_info "FUN_函数批量处理完成"
}

# 执行主函数
main "$@"