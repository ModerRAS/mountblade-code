#!/bin/bash

# 查找02_core_engine.c中的硬编码十六进制值
# 输出格式：行号: 硬编码值

echo "查找02_core_engine.c中的硬编码十六进制值："
echo "========================================"

# 查找硬编码的十六进制值（排除已经在常量定义中的）
grep -n "0x[0-9a-fA-F]\{1,2\}[);\], \+\|+ 0x[0-9a-fA-F]\{1,2\}" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c | \
grep -v "#define" | \
grep -v "ENGINE_" | \
head -20

echo ""
echo "查找其他硬编码值："
echo "========================================"

# 查找其他可能的硬编码值
grep -n "0x[0-9a-fA-F]\{3,4\}[);\], \+\|+ 0x[0-9a-fA-F]\{3,4\}" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c | \
grep -v "#define" | \
grep -v "ENGINE_" | \
head -10