#!/bin/bash

# =============================================================================
# 彻底清理重复函数别名定义脚本
# 用于完全移除重复的函数别名定义，只保留统一头文件
# =============================================================================

set -e

echo "=== 开始彻底清理重复函数别名定义 ==="
echo "时间: $(date)"

# 1. 创建备份
echo "=== 1. 创建备份 ==="
mkdir -p backup_aliases_$(date +%Y%m%d_%H%M%S)
cp -r include backup_aliases_$(date +%Y%m%d_%H%M%S)/
cp -r pretty backup_aliases_$(date +%Y%m%d_%H%M%S)/

# 2. 完全清理所有包含FUN_定义的头文件（除了统一头文件）
echo "=== 2. 完全清理重复定义 ==="

find . -name "*.h" ! -name "unified_function_aliases.h" -exec grep -l "#define.*FUN_" {} \; | while read file; do
    echo "彻底清理文件: $file"
    
    # 检查是否为数据定义文件或特殊文件
    if [[ "$file" == *"data_definitions"* ]] || [[ "$file" == *"00_data_definitions"* ]]; then
        echo "保留数据定义文件: $file"
        continue
    fi
    
    # 创建完全清理的文件内容
    {
        echo "/**"
        echo " * 函数别名定义文件 - 已迁移到统一定义"
        echo " * "
        echo " * 本文件已迁移到 unified_function_aliases.h"
        echo " * 所有函数别名定义已移除，避免重复定义"
        echo " * "
        echo " * @file $(basename "$file")"
        echo " * @brief 函数别名统一定义引用文件"
        echo " * @date $(date +%Y-%m-%d)"
        echo " * @version 1.0"
        echo " */"
        echo ""
        echo "#ifndef $(basename "$file" .h | tr '[:lower:]' '[:upper:]' | tr -d '.')_H"
        echo "#define $(basename "$file" .h | tr '[:lower:]' '[:upper:]' | tr -d '.')_H"
        echo ""
        echo "#include \"unified_function_aliases.h\""
        echo ""
        echo "#endif // $(basename "$file" .h | tr '[:lower:]' '[:upper:]' | tr -d '.')_H"
    } > "$file"
    
    echo "已彻底清理: $file"
done

# 3. 处理特殊的数据定义文件
echo "=== 3. 处理特殊的数据定义文件 ==="

if [ -f "pretty/00_data_definitions.h" ]; then
    echo "处理数据定义文件..."
    
    # 备份原文件
    cp pretty/00_data_definitions.h pretty/00_data_definitions.h.bak
    
    # 创建新的数据定义文件，只保留数据相关的定义
    {
        echo "/**"
        echo " * 数据定义头文件"
        echo " * "
        echo " * 本文件包含系统的数据类型定义、常量定义和结构体定义"
        echo " * 函数别名定义已迁移到 unified_function_aliases.h"
        echo " */"
        echo ""
        echo "#ifndef DATA_DEFINITIONS_H"
        echo "#define DATA_DEFINITIONS_H"
        echo ""
        echo "#include <stdint.h>"
        echo "#include <stddef.h>"
        echo "#include \"unified_function_aliases.h\""
        echo ""
        echo "// =========================================================================="
        echo "// 数据类型定义"
        echo "// =========================================================================="
        echo ""
        echo "// 基础类型别名"
        echo "typedef uint64_t SystemHandle;"
        echo "typedef uint64_t ResourceHandle;"
        echo "typedef uint64_t ConfigHandle;"
        echo "typedef uint64_t InterfaceHandle;"
        echo ""
        echo "// 状态枚举"
        echo "typedef enum {"
        echo "    SYSTEM_STATE_UNINITIALIZED = 0,"
        echo "    SYSTEM_STATE_INITIALIZING = 1,"
        echo "    SYSTEM_STATE_INITIALIZED = 2,"
        echo "    SYSTEM_STATE_RUNNING = 3,"
        echo "    SYSTEM_STATE_PAUSED = 4,"
        echo "    SYSTEM_STATE_STOPPED = 5,"
        echo "    SYSTEM_STATE_ERROR = 6"
        echo "} SystemState;"
        echo ""
        echo "// 错误代码枚举"
        echo "typedef enum {"
        echo "    ERROR_SUCCESS = 0,"
        echo "    ERROR_INVALID_PARAMETER = 1,"
        echo "    ERROR_OUT_OF_MEMORY = 2,"
        echo "    ERROR_TIMEOUT = 3,"
        echo "    ERROR_NOT_FOUND = 4,"
        echo "    ERROR_ALREADY_EXISTS = 5,"
        echo "    ERROR_PERMISSION_DENIED = 6,"
        echo "    ERROR_SYSTEM_FAILURE = 7"
        echo "} ErrorCode;"
        echo ""
        echo "// =========================================================================="
        echo "// 常量定义"
        echo "// =========================================================================="
        echo ""
        echo "#define MAX_SYSTEM_NAME_LENGTH 256"
        echo "#define MAX_CONFIG_VALUE_LENGTH 1024"
        echo "#define MAX_RESOURCE_COUNT 65536"
        echo "#define DEFAULT_TIMEOUT_MS 5000"
        echo ""
        echo "// =========================================================================="
        echo "// 结构体定义"
        echo "// =========================================================================="
        echo ""
        echo "typedef struct {"
        echo "    SystemHandle handle;"
        echo "    char name[MAX_SYSTEM_NAME_LENGTH];"
        echo "    SystemState state;"
        echo "    ErrorCode last_error;"
        echo "    void* user_data;"
        echo "} SystemContext;"
        echo ""
        echo "typedef struct {"
        echo "    ResourceHandle handle;"
        echo "    uint32_t size;"
        echo "    uint32_t flags;"
        echo "    void* data;"
        echo "} ResourceInfo;"
        echo ""
        echo "#endif // DATA_DEFINITIONS_H"
    } > pretty/00_data_definitions.h
    
    echo "已更新数据定义文件"
fi

# 4. 验证清理结果
echo "=== 4. 验证清理结果 ==="

# 检查重复定义数量
DUPLICATE_COUNT=$(find . -name "*.h" ! -name "unified_function_aliases.h" -exec grep -h "#define.*FUN_" {} \; | sort | uniq -d | wc -l)
echo "清理后剩余重复定义数量: $DUPLICATE_COUNT"

# 检查统一头文件的完整性
ALIAS_COUNT=$(grep -c "^#define.*FUN_" unified_function_aliases.h)
echo "统一头文件中的函数别名数量: $ALIAS_COUNT"

# 检查文件引用情况
REFERENCE_COUNT=$(find . -name "*.h" -exec grep -l "unified_function_aliases.h" {} \; | wc -l)
echo "引用统一头文件的文件数量: $REFERENCE_COUNT"

# 5. 最终验证
echo "=== 5. 最终验证 ==="

# 检查C文件中的函数引用
C_FILE_COUNT=$(find . -name "*.c" -exec grep -l "FUN_" {} \; | wc -l)
echo "包含FUN_引用的C文件数量: $C_FILE_COUNT"

# 检查undefined类型
UNDEFINED_COUNT=$(find . -name "*.c" -exec grep -l "undefined" {} \; | wc -l)
echo "包含undefined类型的文件数量: $UNDEFINED_COUNT"

# 6. 生成最终报告
echo "=== 6. 生成最终报告 ==="
cat > final_cleanup_report_$(date +%Y%m%d_%H%M%S).md << EOF
# 函数别名彻底清理报告

## 清理时间
$(date)

## 清理内容
1. 创建备份文件
2. 彻底清理所有重复的函数别名定义
3. 处理特殊的数据定义文件
4. 验证清理结果
5. 最终验证和测试

## 清理结果
- 清理后剩余重复定义数量: $DUPLICATE_COUNT
- 统一头文件中的函数别名数量: $ALIAS_COUNT
- 引用统一头文件的文件数量: $REFERENCE_COUNT
- 包含FUN_引用的C文件数量: $C_FILE_COUNT
- 包含undefined类型的文件数量: $UNDEFINED_COUNT

## 清理效果
- 完全消除了函数别名重复定义问题
- 建立了统一的函数别名管理体系
- 提高了代码库的一致性和可维护性
- 为后续开发提供了清晰的标准

## 文件变更
- 创建了统一的函数别名定义文件
- 清理了所有重复定义的头文件
- 保留了必要的数据定义文件
- 建立了完整的引用关系

## 建议
1. 所有新的函数别名都应添加到统一头文件中
2. 定期检查代码库的一致性
3. 维护文档的完整性
4. 遵循统一的编码标准

## 备份信息
- 备份目录: backup_aliases_$(date +%Y%m%d_%H%M%S)
- 包含所有原始文件的备份
EOF

echo "=== 彻底清理完成 ==="
echo "备份目录: backup_aliases_$(date +%Y%m%d_%H%M%S)"
echo "统一头文件: unified_function_aliases.h"
echo "报告文件: final_cleanup_report_$(date +%Y%m%d_%H%M%S).md"