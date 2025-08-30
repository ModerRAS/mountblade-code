#!/bin/bash

# 美化硬编码值脚本 - 2025年8月30日最终批次
# 简化实现：仅将常见的硬编码值替换为语义化常量
# 原本实现：完全重构硬编码值体系，建立统一的语义化命名规范

# 定义输入文件
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h"

# 创建临时文件
TEMP_FILE="/tmp/00_data_definitions_h_temp.c"

# 复制原始文件到临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 定义要替换的硬编码值和对应的语义化常量
# 格式: "原始值 语义化常量名 注释"

# 美化常见的硬编码值
declare -a replacements=(
    "0x12 SYSTEM_OFFSET_REGISTER_PARAM_FINAL 寄存器参数最终偏移量"
    "0xff SYSTEM_BIT_MASK_BYTE_MASK_FULL 字节掩码全满"
    "0x4ea SYSTEM_OFFSET_THREAD_STACK_BASE 线程栈基址偏移量"
    "0xb0 SYSTEM_DIVISOR_PATH_SIZE_CALCULATION 路径大小计算除数"
    "0x240 SYSTEM_MUTEX_BUFFER_SIZE 互斥锁缓冲区大小"
    "0x19 SYSTEM_FUNCTION_PARAM_SIZE_LARGE 函数参数大小大"
    "0x50 SYSTEM_OFFSET_HANDLE_PARAM_CALCULATION 句柄参数计算偏移量"
    "0xefc SYSTEM_NEGATIVE_OFFSET_STRING_CALCULATION_NEG1 字符串计算负偏移量1"
    "0x1ef8 SYSTEM_NEGATIVE_OFFSET_STRING_CALCULATION_NEG2 字符串计算负偏移量2"
    "0x113 SYSTEM_FUNCTION_OFFSET_VALIDATION_113 验证函数偏移量113"
    "0x330 SYSTEM_STRING_BUFFER_SIZE_LARGE 大字符串缓冲区大小"
    "0x1c SYSTEM_RETURN_CODE_SUCCESS 成功返回码"
    "0x3e SYSTEM_OFFSET_THREAD_DATA_EXTENDED 扩展线程数据偏移量"
)

# 执行替换操作
for replacement in "${replacements[@]}"; do
    # 解析替换参数
    original_value=$(echo "$replacement" | awk '{print $1}')
    constant_name=$(echo "$replacement" | awk '{print $2}')
    comment=$(echo "$replacement" | sed "s/$original_value $constant_name //")
    
    # 在文件开头添加常量定义（在第一个#include之后）
    if ! grep -q "#define $constant_name" "$TEMP_FILE"; then
        # 找到第一个#include的位置
        first_include_line=$(grep -n "#include" "$TEMP_FILE" | head -1 | cut -d: -f1)
        if [ -n "$first_include_line" ]; then
            # 在第一个#include之后插入常量定义
            sed -i "${first_include_line}a\\n// 美化硬编码值常量 - $comment\\n#define $constant_name $original_value\\n" "$TEMP_FILE"
        fi
    fi
    
    # 替换代码中的硬编码值（只替换不在#define中的）
    sed -i "s/[^#]0x$original_value[^0-9a-fA-F_]/ $constant_name /g" "$TEMP_FILE"
    sed -i "s/([^0])0x$original_value[^0-9a-fA-F_]/( $constant_name /g" "$TEMP_FILE"
    sed -i "s/\[0x$original_value[^0-9a-fA-F_]/[ $constant_name /g" "$TEMP_FILE"
    sed -i "s/,0x$original_value[^0-9a-fA-F_]/, $constant_name /g" "$TEMP_FILE"
    sed -i "s/+0x$original_value[^0-9a-fA-F_]/+ $constant_name /g" "$TEMP_FILE"
    sed -i "s/-0x$original_value[^0-9a-fA-F_]/- $constant_name /g" "$TEMP_FILE"
    sed -i "s/*0x$original_value[^0-9a-fA-F_]/* $constant_name /g" "$TEMP_FILE"
    sed -i "s/\/0x$original_value[^0-9a-fA-F_]/\/ $constant_name /g" "$TEMP_FILE"
    sed -i "s/0x$original_value[^0-9a-fA-F_]/ $constant_name /g" "$TEMP_FILE"
done

# 替换文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "硬编码值美化完成"