#!/bin/bash

# 美化代码脚本 - 将十六进制地址变量名替换为有意义的名称
# 原始实现：直接使用十六进制地址作为变量名
# 简化实现：根据地址范围和上下文推断变量用途并命名

# 获取脚本所在目录
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
# 获取项目根目录
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
# 目标文件路径
TARGET_FILE="$PROJECT_ROOT/TaleWorlds.Native/TaleWorlds.Native.dll.c"

echo "开始美化代码: $TARGET_FILE"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 第一部分：处理一些常见的地址模式
# 根据已经美化的代码，我们可以推断一些模式

# 处理180bf开头的地址 - 这些看起来像是全局变量和数据
sed 's/void\* 180bf\([0-9a-fA-F]*);/void* global_data_180bf\1;/g' "$TARGET_FILE" > "$TEMP_FILE"

# 处理180942开头的地址 - 这些看起来像是函数指针
sed 's/void (\* 180942\([0-9a-fA-F]*);/void (*function_ptr_180942\1);/g' "$TEMP_FILE" > "$TARGET_FILE.tmp"
mv "$TARGET_FILE.tmp" "$TEMP_FILE"

# 处理180c92开头的地址 - 这些看起来像是全局数据
sed 's/void\* global_data_180c92\([0-9a-fA-F]*);/void* system_data_180c92\1;/g' "$TEMP_FILE" > "$TARGET_FILE.tmp"
mv "$TARGET_FILE.tmp" "$TEMP_FILE"

# 处理180a2开头的地址 - 这些看起来像是静态数据
sed 's/static void\* 180a2\([0-9a-fA-F]*);/static void* static_data_180a2\1;/g' "$TEMP_FILE" > "$TARGET_FILE.tmp"
mv "$TARGET_FILE.tmp" "$TEMP_FILE"

# 处理18005开头的地址 - 这些看起来像是函数
sed 's/void\* SUB_18005\([0-9a-fA-F]*);/void* function_18005\1;/g' "$TEMP_FILE" > "$TARGET_FILE.tmp"
mv "$TARGET_FILE.tmp" "$TEMP_FILE"

# 处理180045开头的地址 - 这些看起来像是函数
sed 's/void (\* 180045\([0-9a-fA-F]*);/void (*function_180045\1);/g' "$TEMP_FILE" > "$TARGET_FILE.tmp"
mv "$TARGET_FILE.tmp" "$TEMP_FILE"

# 处理18002开头的地址 - 这些看起来像是函数
sed 's/void\* FUN_18002\([0-9a-fA-F]*);/void* function_18002\1;/g' "$TEMP_FILE" > "$TARGET_FILE.tmp"
mv "$TARGET_FILE.tmp" "$TEMP_FILE"

# 处理未声明的变量（没有类型声明的十六进制地址）
sed 's/^\([0-9a-fA-F]\+\);/void* var_\1;/g' "$TEMP_FILE" > "$TARGET_FILE.tmp"
mv "$TARGET_FILE.tmp" "$TEMP_FILE"

# 备份原文件
cp "$TARGET_FILE" "$TARGET_FILE.backup.$(date +%Y%m%d_%H%M%S)"

# 替换原文件
mv "$TEMP_FILE" "$TARGET_FILE"

echo "代码美化完成"
echo "备份文件: $TARGET_FILE.backup.$(date +%Y%m%d_%H%M%S)"