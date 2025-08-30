#!/bin/bash

# 网络代码美化脚本 - 处理栈变量名
# 简化实现：仅进行变量名的语义化替换，保持原有代码结构不变
# 原本实现：完全重构代码结构，重新设计变量命名体系

# 定义源文件路径
SOURCE_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 创建备份
cp "$SOURCE_FILE" "$SOURCE_FILE.backup"

# 添加美化内容注释
sed -i '/\/\/ - 保持代码语义不变，这是简化实现，主要处理了网络系统中剩余变量名的语义化替换/a\\n\/\/ 本次美化内容：\n\/\/ - 将网络栈字符变量名替换为语义化名称：\n\/\/   * acStack_153 -> network_stack_char_validation_small\n\/\/   * cStack_1c -> network_stack_char_status\n\/\/   * cStack_98 -> network_stack_char_flag_high\n\/\/   * cStack_97 -> network_stack_char_flag_mid\n\/\/   * cStack_96 -> network_stack_char_flag_low\n\/\/   * acStack_1c4 -> network_stack_char_security\n\/\/   * acStack_a8 -> network_stack_char_encryption\n\/\/ - 将网络整数栈变量名替换为语义化名称：\n\/\/   * anetworkIntStack_90 -> network_stack_int_connection_array\n\/\/ - 保持代码语义不变，这是简化实现，主要处理了网络系统中剩余的栈变量名' "$SOURCE_FILE"

# 执行变量替换
sed -i 's/acStack_153/network_stack_char_validation_small/g' "$SOURCE_FILE"
sed -i 's/cStack_1c/network_stack_char_status/g' "$SOURCE_FILE"
sed -i 's/cStack_98/network_stack_char_flag_high/g' "$SOURCE_FILE"
sed -i 's/cStack_97/network_stack_char_flag_mid/g' "$SOURCE_FILE"
sed -i 's/cStack_96/network_stack_char_flag_low/g' "$SOURCE_FILE"
sed -i 's/acStack_1c4/network_stack_char_security/g' "$SOURCE_FILE"
sed -i 's/acStack_a8/network_stack_char_encryption/g' "$SOURCE_FILE"
sed -i 's/anetworkIntStack_90/network_stack_int_connection_array/g' "$SOURCE_FILE"

echo "网络代码美化完成"