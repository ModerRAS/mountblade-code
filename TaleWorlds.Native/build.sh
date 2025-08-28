#!/bin/bash

# TaleWorlds.Native 构建脚本
# 用于构建美化的Native DLL项目

# 设置基本变量
PROJECT_NAME="TaleWorlds.Native"
PROJECT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
SOURCE_DIR="$PROJECT_DIR/src"
INCLUDE_DIR="$PROJECT_DIR/include"
BUILD_DIR="$PROJECT_DIR/build"
DOCS_DIR="$PROJECT_DIR/docs"
ORIGINAL_FILE="$PROJECT_DIR/original/TaleWorlds.Native.dll_original.c"

# 颜色定义
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# 打印带颜色的信息
print_info() {
    echo -e "${BLUE}[INFO]${NC} $1"
}

print_success() {
    echo -e "${GREEN}[SUCCESS]${NC} $1"
}

print_warning() {
    echo -e "${YELLOW}[WARNING]${NC} $1"
}

print_error() {
    echo -e "${RED}[ERROR]${NC} $1"
}

# 检查文件是否存在
check_file() {
    if [ ! -f "$1" ]; then
        print_error "文件不存在: $1"
        return 1
    fi
    return 0
}

# 检查目录是否存在
check_dir() {
    if [ ! -d "$1" ]; then
        print_error "目录不存在: $1"
        return 1
    fi
    return 0
}

# 创建目录
create_dir() {
    if [ ! -d "$1" ]; then
        mkdir -p "$1"
        print_info "创建目录: $1"
    fi
}

# 清理构建目录
clean_build() {
    print_info "清理构建目录..."
    if [ -d "$BUILD_DIR" ]; then
        rm -rf "$BUILD_DIR"
        print_success "构建目录已清理"
    else
        print_warning "构建目录不存在"
    fi
}

# 检查依赖项
check_dependencies() {
    print_info "检查依赖项..."
    
    # 检查编译器
    if ! command -v gcc &> /dev/null; then
        print_error "GCC编译器未安装"
        return 1
    fi
    
    # 检查make
    if ! command -v make &> /dev/null; then
        print_error "Make工具未安装"
        return 1
    fi
    
    # 检查必要的头文件
    if ! check_file "$INCLUDE_DIR/taleworlds_native_types.h"; then
        return 1
    fi
    
    print_success "所有依赖项检查通过"
    return 0
}

# 分析原始文件
analyze_original() {
    print_info "分析原始文件..."
    
    if ! check_file "$ORIGINAL_FILE"; then
        return 1
    fi
    
    # 统计文件信息
    local line_count=$(wc -l < "$ORIGINAL_FILE")
    local function_count=$(grep -c "^FUN_" "$ORIGINAL_FILE")
    local file_size=$(du -h "$ORIGINAL_FILE" | cut -f1)
    
    print_info "原始文件信息:"
    print_info "  - 文件大小: $file_size"
    print_info "  - 总行数: $line_count"
    print_info "  - 函数数量: $function_count"
    
    print_success "原始文件分析完成"
}

# 生成模块文件
generate_modules() {
    print_info "生成模块文件..."
    
    # 确保源目录存在
    create_dir "$SOURCE_DIR"
    
    # 检查是否已有模块文件
    local module_count=$(find "$SOURCE_DIR" -name "*.c" | wc -l)
    if [ $module_count -eq 0 ]; then
        print_error "没有找到模块文件"
        return 1
    fi
    
    print_info "找到 $module_count 个模块文件"
    
    # 列出所有模块文件
    for module in "$SOURCE_DIR"/*.c; do
        if [ -f "$module" ]; then
            local module_name=$(basename "$module")
            print_info "  - $module_name"
        fi
    done
    
    print_success "模块文件生成完成"
}

# 编译项目
compile_project() {
    print_info "编译项目..."
    
    # 创建构建目录
    create_dir "$BUILD_DIR"
    
    # 设置编译标志
    local CFLAGS="-std=c99 -Wall -Wextra -O2 -I$INCLUDE_DIR"
    local LDFLAGS="-shared -fPIC"
    
    # 收集所有源文件
    local source_files=()
    for source_file in "$SOURCE_DIR"/*.c; do
        if [ -f "$source_file" ]; then
            source_files+=("$source_file")
        fi
    done
    
    if [ ${#source_files[@]} -eq 0 ]; then
        print_error "没有找到源文件"
        return 1
    fi
    
    # 编译所有源文件
    local object_files=()
    for source_file in "${source_files[@]}"; do
        local object_file="$BUILD_DIR/$(basename "${source_file%.c}.o")"
        
        print_info "编译: $source_file"
        if gcc $CFLAGS -c "$source_file" -o "$object_file"; then
            object_files+=("$object_file")
        else
            print_error "编译失败: $source_file"
            return 1
        fi
    done
    
    # 链接生成动态库
    local output_file="$BUILD_DIR/lib$PROJECT_NAME.so"
    print_info "链接生成动态库: $output_file"
    
    if gcc $LDFLAGS "${object_files[@]}" -o "$output_file"; then
        print_success "编译成功: $output_file"
    else
        print_error "链接失败"
        return 1
    fi
}

# 运行测试
run_tests() {
    print_info "运行测试..."
    
    local tests_dir="$PROJECT_DIR/tests"
    if [ ! -d "$tests_dir" ]; then
        print_warning "测试目录不存在"
        return 0
    fi
    
    # 查找测试文件
    local test_files=("$tests_dir"/*.c)
    if [ ${#test_files[@]} -eq 0 ]; then
        print_warning "没有找到测试文件"
        return 0
    fi
    
    # 编译并运行测试
    for test_file in "${test_files[@]}"; do
        if [ -f "$test_file" ]; then
            local test_name=$(basename "${test_file%.c}")
            local test_exe="$BUILD_DIR/$test_name"
            
            print_info "编译测试: $test_name"
            if gcc -std=c99 -I"$INCLUDE_DIR" -L"$BUILD_DIR" -l"$PROJECT_NAME" "$test_file" -o "$test_exe"; then
                print_info "运行测试: $test_name"
                if [ -x "$test_exe" ]; then
                    LD_LIBRARY_PATH="$BUILD_DIR" "$test_exe"
                    if [ $? -eq 0 ]; then
                        print_success "测试通过: $test_name"
                    else
                        print_error "测试失败: $test_name"
                    fi
                fi
            else
                print_error "测试编译失败: $test_name"
            fi
        fi
    done
}

# 生成文档
generate_docs() {
    print_info "生成文档..."
    
    if [ ! -d "$DOCS_DIR" ]; then
        print_warning "文档目录不存在"
        return 0
    fi
    
    # 检查是否有Doxygen
    if command -v doxygen &> /dev/null; then
        print_info "使用Doxygen生成API文档..."
        if [ -f "$DOCS_DIR/Doxyfile" ]; then
            cd "$DOCS_DIR" && doxygen Doxyfile
            print_success "API文档生成完成"
        else
            print_warning "Doxygen配置文件不存在"
        fi
    else
        print_warning "Doxygen未安装，跳过API文档生成"
    fi
    
    # 生成模块统计信息
    local stats_file="$DOCS_DIR/MODULE_STATS.md"
    print_info "生成模块统计信息: $stats_file"
    
    cat > "$stats_file" << EOF
# 模块统计信息

生成时间: $(date)

## 模块概览

| 模块名称 | 文件大小 | 函数数量 | 行数 | 地址范围 |
|---------|---------|---------|------|---------|
EOF
    
    # 统计每个模块的信息
    for module_file in "$SOURCE_DIR"/*.c; do
        if [ -f "$module_file" ]; then
            local module_name=$(basename "$module_file" .c)
            local file_size=$(du -h "$module_file" | cut -f1)
            local function_count=$(grep -c "^void\|^int\|^char\|^float\|^double" "$module_file")
            local line_count=$(wc -l < "$module_file")
            
            echo "| $module_name | $file_size | $function_count | $line_count | 待分析 |" >> "$stats_file"
        fi
    done
    
    print_success "文档生成完成"
}

# 创建发布包
create_package() {
    print_info "创建发布包..."
    
    local package_dir="$BUILD_DIR/package"
    local package_name="$PROJECT_NAME-$(date +%Y%m%d-%H%M%S)"
    local package_file="$BUILD_DIR/$package_name.tar.gz"
    
    # 创建包目录
    create_dir "$package_dir"
    
    # 复制必要文件
    cp -r "$INCLUDE_DIR" "$package_dir/"
    cp -r "$SOURCE_DIR" "$package_dir/"
    cp -r "$DOCS_DIR" "$package_dir/"
    cp "$PROJECT_DIR/README.md" "$package_dir/"
    
    # 复制编译结果
    if [ -f "$BUILD_DIR/lib$PROJECT_NAME.so" ]; then
        cp "$BUILD_DIR/lib$PROJECT_NAME.so" "$package_dir/"
    fi
    
    # 创建压缩包
    cd "$BUILD_DIR"
    tar -czf "$package_file" "$package_name"
    
    if [ $? -eq 0 ]; then
        print_success "发布包创建成功: $package_file"
        print_info "包大小: $(du -h "$package_file" | cut -f1)"
    else
        print_error "发布包创建失败"
        return 1
    fi
}

# 显示帮助信息
show_help() {
    cat << EOF
TaleWorlds.Native 构建脚本

用法: $0 [选项]

选项:
    clean          清理构建目录
    analyze        分析原始文件
    generate       生成模块文件
    compile        编译项目
    test           运行测试
    docs           生成文档
    package        创建发布包
    all            执行完整构建流程
    help           显示此帮助信息

示例:
    $0 all          # 执行完整构建流程
    $0 clean        # 清理构建目录
    $0 compile      # 仅编译项目
EOF
}

# 主函数
main() {
    case "${1:-all}" in
        clean)
            clean_build
            ;;
        analyze)
            analyze_original
            ;;
        generate)
            generate_modules
            ;;
        compile)
            check_dependencies && compile_project
            ;;
        test)
            run_tests
            ;;
        docs)
            generate_docs
            ;;
        package)
            create_package
            ;;
        all)
            print_info "开始完整构建流程..."
            check_dependencies && \
            analyze_original && \
            generate_modules && \
            compile_project && \
            run_tests && \
            generate_docs && \
            create_package
            ;;
        help)
            show_help
            ;;
        *)
            print_error "未知选项: $1"
            show_help
            exit 1
            ;;
    esac
}

# 检查脚本参数
if [ $# -gt 1 ]; then
    print_error "参数过多"
    show_help
    exit 1
fi

# 执行主函数
main "$1"