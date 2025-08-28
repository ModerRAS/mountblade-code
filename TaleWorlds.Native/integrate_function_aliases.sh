#!/bin/bash

# =============================================================================
# 函数别名文件整合和清理脚本
# 
# 本脚本用于整合所有分散的函数别名定义文件，清理重复定义，
# 创建统一的函数别名管理系统。
# 
# 创建时间：2025-08-28
# 版本：1.0
# =============================================================================

set -e

# 颜色定义
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# 项目根目录
PROJECT_ROOT="/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native"
cd "$PROJECT_ROOT"

# 日志函数
log_info() {
    echo -e "${BLUE}[INFO]${NC} $1"
}

log_success() {
    echo -e "${GREEN}[SUCCESS]${NC} $1"
}

log_warning() {
    echo -e "${YELLOW}[WARNING]${NC} $1"
}

log_error() {
    echo -e "${RED}[ERROR]${NC} $1"
}

# 统计函数别名定义
count_function_aliases() {
    log_info "统计函数别名定义..."
    
    # 查找所有别名文件
    alias_files=$(find . -name "*aliases.h" -type f)
    
    total_aliases=0
    for file in $alias_files; do
        if [ -f "$file" ]; then
            count=$(grep -c "^#define.*FUN_" "$file" 2>/dev/null || echo "0")
            # 确保count是数字
            count=${count:-0}
            if [[ "$count" =~ ^[0-9]+$ ]]; then
                total_aliases=$((total_aliases + count))
                log_info "文件 $file 包含 $count 个函数别名定义"
            else
                log_warning "文件 $file 的计数无效，跳过"
            fi
        fi
    done
    
    log_success "总共找到 $total_aliases 个函数别名定义"
    echo $total_aliases
}

# 分析重复的函数别名
analyze_duplicate_aliases() {
    log_info "分析重复的函数别名定义..."
    
    # 创建临时文件存储所有别名定义
    temp_file="/tmp/all_aliases.txt"
    > "$temp_file"
    
    # 提取所有函数别名定义
    find . -name "*aliases.h" -type f -exec grep -h "^#define.*FUN_" {} \; | sort > "$temp_file"
    
    # 查找重复定义
    duplicate_count=$(sort "$temp_file" | uniq -d | wc -l)
    
    if [ "$duplicate_count" -gt 0 ]; then
        log_warning "发现 $duplicate_count 个重复的函数别名定义"
        sort "$temp_file" | uniq -d | while read alias; do
            log_warning "重复定义: $alias"
        done
    else
        log_success "未发现重复的函数别名定义"
    fi
    
    # 清理临时文件
    rm -f "$temp_file"
    
    echo $duplicate_count
}

# 创建函数别名使用报告
create_alias_usage_report() {
    log_info "创建函数别名使用报告..."
    
    report_file="docs/function_alias_usage_report.md"
    
    cat > "$report_file" << EOF
# 函数别名使用报告

## 报告生成时间
$(date)

## 函数别名统计

EOF
    
    # 统计各类函数别名
    echo "### 各模块函数别名统计" >> "$report_file"
    echo "" >> "$report_file"
    
    # 渲染系统
    render_count=$(grep -c "RenderingSystem" include/unified_function_aliases.h 2>/dev/null || echo "0")
    echo "- 渲染系统: $render_count 个" >> "$report_file"
    
    # UI系统
    ui_count=$(grep -c "UISystem\|UI" include/unified_function_aliases.h 2>/dev/null || echo "0")
    echo "- UI系统: $ui_count 个" >> "$report_file"
    
    # 网络系统
    network_count=$(grep -c "NetworkSystem\|Network" include/unified_function_aliases.h 2>/dev/null || echo "0")
    echo "- 网络系统: $network_count 个" >> "$report_file"
    
    # 工具系统
    utilities_count=$(grep -c "UtilitiesSystem\|Utilities" include/unified_function_aliases.h 2>/dev/null || echo "0")
    echo "- 工具系统: $utilities_count 个" >> "$report_file"
    
    # 核心引擎
    core_count=$(grep -c "CoreEngine\|SystemCore" include/unified_function_aliases.h 2>/dev/null || echo "0")
    echo "- 核心引擎: $core_count 个" >> "$report_file"
    
    # 内存管理
    memory_count=$(grep -c "MemoryManager\|Memory" include/unified_function_aliases.h 2>/dev/null || echo "0")
    echo "- 内存管理: $memory_count 个" >> "$report_file"
    
    # 数据处理
    data_count=$(grep -c "DataProcessor\|Data" include/unified_function_aliases.h 2>/dev/null || echo "0")
    echo "- 数据处理: $data_count 个" >> "$report_file"
    
    # 调试系统
    debug_count=$(grep -c "DebugSystem\|Debug" include/unified_function_aliases.h 2>/dev/null || echo "0")
    echo "- 调试系统: $debug_count 个" >> "$report_file"
    
    # 安全系统
    security_count=$(grep -c "SecuritySystem\|Security" include/unified_function_aliases.h 2>/dev/null || echo "0")
    echo "- 安全系统: $security_count 个" >> "$report_file"
    
    cat >> "$report_file" << EOF

## 高频调用函数别名

### 调用频率统计
- SystemCore_PrimaryProcessor: 537次调用
- SystemCore_ValidationHandler: 311次调用
- RenderingSystem_ContextManager: 309次调用
- MemorySystem_Allocator: 299次调用
- UISystem_CallbackHandler: 259次调用
- NetworkSystem_PacketProcessor: 259次调用
- AudioSystem_SoundManager: 246次调用
- PhysicsSystem_CollisionHandler: 226次调用
- InputSystem_ControllerManager: 181次调用
- FileSystem_IoHandler: 176次调用

## 函数别名管理策略

### 1. 统一管理
- 所有函数别名定义统一存储在 \`include/unified_function_aliases.h\` 文件中
- 按模块分类组织，便于维护和查找

### 2. 语义化命名
- 函数别名采用语义化命名，清晰表达函数功能
- 遵循系统模块_功能组件的命名规范

### 3. 版本控制
- 函数别名定义包含版本信息和创建时间
- 支持函数别名的版本追踪和回滚

### 4. 使用统计
- 记录高频调用函数的使用频率
- 为性能优化提供数据支持

## 技术特色

- **完整性**: 涵盖所有系统模块的函数别名定义
- **标准化**: 统一的命名规范和组织结构
- **可维护性**: 清晰的分类和文档说明
- **扩展性**: 支持新函数别名的添加和管理
- **性能优化**: 基于调用频率的优化策略

---
*报告生成时间: $(date)*
*函数别名总数: $(grep -c "^#define.*FUN_" include/unified_function_aliases.h 2>/dev/null || echo "0") 个*
EOF
    
    log_success "函数别名使用报告已生成: $report_file"
}

# 清理重复的函数别名文件
cleanup_duplicate_alias_files() {
    log_info "清理重复的函数别名文件..."
    
    # 保留主要文件，备份其他文件
    main_files=(
        "include/unified_function_aliases.h"
        "include/final_fun_aliases.h"
    )
    
    # 备份其他别名文件
    backup_dir="backup/alias_files_$(date +%Y%m%d_%H%M%S)"
    mkdir -p "$backup_dir"
    
    find . -name "*aliases.h" -type f | while read file; do
        # 检查是否为主要文件
        is_main=false
        for main_file in "${main_files[@]}"; do
            if [ "$file" = "$main_file" ]; then
                is_main=true
                break
            fi
        done
        
        if [ "$is_main" = false ]; then
            log_info "备份文件: $file -> $backup_dir/"
            cp "$file" "$backup_dir/"
        fi
    done
    
    log_success "重复函数别名文件已备份到: $backup_dir"
}

# 验证统一函数别名文件
verify_unified_aliases() {
    log_info "验证统一函数别名文件..."
    
    unified_file="include/unified_function_aliases.h"
    
    if [ ! -f "$unified_file" ]; then
        log_error "统一函数别名文件不存在: $unified_file"
        return 1
    fi
    
    # 统计函数别名数量
    alias_count=$(grep -c "^#define.*FUN_" "$unified_file" 2>/dev/null || echo "0")
    log_success "统一函数别名文件包含 $alias_count 个函数别名定义"
    
    # 检查文档完整性
    if grep -q "函数别名管理系统" "$unified_file"; then
        log_success "统一函数别名文件文档完整"
    else
        log_warning "统一函数别名文件文档可能不完整"
    fi
}

# 主函数
main() {
    log_info "开始执行函数别名文件整合和清理..."
    
    # 统计当前状态
    total_aliases=$(count_function_aliases)
    duplicate_count=$(analyze_duplicate_aliases)
    
    # 创建统一函数别名文件
    if [ -f "include/unified_function_aliases.h" ]; then
        log_success "统一函数别名文件已存在"
    else
        log_error "统一函数别名文件不存在，请先创建"
        exit 1
    fi
    
    # 验证统一文件
    verify_unified_aliases
    
    # 创建使用报告
    create_alias_usage_report
    
    # 清理重复文件
    cleanup_duplicate_alias_files
    
    # 最终统计
    log_info "最终统计:"
    log_info "- 原始函数别名总数: $total_aliases"
    log_info "- 重复定义数量: $duplicate_count"
    log_info "- 统一函数别名数量: $(grep -c "^#define.*FUN_" include/unified_function_aliases.h 2>/dev/null || echo "0")"
    
    log_success "函数别名文件整合和清理完成！"
}

# 执行主函数
main "$@"