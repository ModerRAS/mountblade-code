#!/bin/bash

# 强力清理00_data_definitions.h文件中的冗长注释
# 保留必要的常量定义注释，删除所有美化工作总结等冗长注释

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h"
TEMP_FILE="/tmp/cleaned_definitions.h"

# 复制文件头部到临时文件
head -n 80 "$INPUT_FILE" > "$TEMP_FILE"

# 跳过前80行，处理剩余内容
tail -n +81 "$INPUT_FILE" | while IFS= read -r line; do
    # 跳过以"本次"开头的注释行
    if echo "$line" | grep -q "^// 本次.*美化内容"; then
        continue
    fi
    # 跳过以"上次"开头的注释行
    if echo "$line" | grep -q "^// 上次.*美化内容"; then
        continue
    fi
    # 跳过以"最终"开头的注释行
    if echo "$line" | grep -q "^// 最终.*美化内容"; then
        continue
    fi
    # 跳过以"补充"开头的注释行
    if echo "$line" | grep -q "^// 补充.*美化内容"; then
        continue
    fi
    # 跳过以"增量"开头的注释行
    if echo "$line" | grep -q "^// 增量.*美化内容"; then
        continue
    fi
    # 跳过以"新增"开头的注释行
    if echo "$line" | grep -q "^// 新增.*美化内容"; then
        continue
    fi
    # 跳过以"美化"开头且包含"批次"的注释行
    if echo "$line" | grep -q "^// 美化.*批次"; then
        continue
    fi
    # 跳过以"简化实现："开头的注释行
    if echo "$line" | grep -q "^// 简化实现："; then
        continue
    fi
    # 跳过以"原本实现："开头的注释行
    if echo "$line" | grep -q "^// 原本实现："; then
        continue
    fi
    # 跳过包含"提高了代码的可读性和维护性"的注释行
    if echo "$line" | grep -q "提高了代码的可读性和维护性"; then
        continue
    fi
    # 跳过包含"保持代码语义不变"的注释行
    if echo "$line" | grep -q "保持代码语义不变"; then
        continue
    fi
    # 跳过包含"这是简化实现"的注释行
    if echo "$line" | grep -q "这是简化实现"; then
        continue
    fi
    # 跳过包含"主要处理了"的注释行
    if echo "$line" | grep -q "主要处理了"; then
        continue
    fi
    # 跳过包含"建立统一的语义化命名规范"的注释行
    if echo "$line" | grep -q "建立统一的语义化命名规范"; then
        continue
    fi
    # 保留其他行
    echo "$line" >> "$TEMP_FILE"
done

# 替换原文件
mv "$TEMP_FILE" "$INPUT_FILE"

# 删除连续的空行
sed -i '/^$/N;/^\n$/D' "$INPUT_FILE"

echo "文件强力清理完成"