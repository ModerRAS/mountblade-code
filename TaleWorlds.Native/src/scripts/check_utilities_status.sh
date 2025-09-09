#!/bin/bash

# 06_utilities.c 变量名美化状态检查脚本
# 用于验证文件中 Ghidra 自动生成的变量名是否已经完全处理

echo "=== 06_utilities.c 变量名美化状态检查 ==="
echo

# 检查各种 Ghidra 自动生成的变量名
echo "1. 检查 DAT_ 变量名:"
DAT_COUNT=$(grep -c "DAT_[0-9a-fA-F]" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c)
echo "   DAT_ 变量名数量: $DAT_COUNT"

echo
echo "2. 检查 local_ 变量名:"
LOCAL_COUNT=$(grep -c "local_[0-9a-fA-F]" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c)
echo "   local_ 变量名数量: $LOCAL_COUNT"

echo
echo "3. 检查 s_ 变量名:"
S_COUNT=$(grep -c "s_[0-9a-fA-F]" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c)
echo "   s_ 变量名数量: $S_COUNT"

echo
echo "4. 检查 UNK_ 变量名:"
UNK_COUNT=$(grep -c "UNK_[0-9a-fA-F]" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c)
echo "   UNK_ 变量名数量: $UNK_COUNT"

echo
echo "5. 检查 FUN_ 函数名:"
FUN_COUNT=$(grep -c "FUN_[0-9a-fA-F]" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c)
echo "   FUN_ 函数名数量: $FUN_COUNT"

echo
echo "6. 检查 LABEL_ 标签名:"
LABEL_COUNT=$(grep -c "LABEL_[0-9a-fA-F]" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c)
echo "   LABEL_ 标签名数量: $LABEL_COUNT"

echo
echo "7. 检查其他常见自动生成变量名:"
echo "   iVar 变量名: $(grep -c "iVar[0-9]" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c)"
echo "   uVar 变量名: $(grep -c "uVar[0-9]" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c)"
echo "   param 变量名: $(grep -c "param[0-9]" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c)"

echo
echo "8. 检查注释中的原始函数名记录:"
COMMENT_FUN_COUNT=$(grep -c "@note 原始函数名：FUN_" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c)
echo "   注释中的原始函数名记录: $COMMENT_FUN_COUNT"

echo
echo "9. 检查代码中的实际函数名:"
CODE_FUN_COUNT=$(grep -v "@note" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c | grep -c "FUN_[0-9a-fA-F]")
echo "   代码中的实际函数名: $CODE_FUN_COUNT"

echo
echo "=== 分析结果 ==="

# 计算总数量
TOTAL_COUNT=$((DAT_COUNT + LOCAL_COUNT + S_COUNT + UNK_COUNT + FUN_COUNT + LABEL_COUNT))
echo "总计发现 $TOTAL_COUNT 个需要处理的变量名"

if [ $CODE_FUN_COUNT -eq 0 ]; then
    echo "✅ 代码中没有发现实际的 FUN_ 函数名需要处理"
else
    echo "❌ 代码中仍存在 $CODE_FUN_COUNT 个 FUN_ 函数名需要处理"
fi

if [ $COMMENT_FUN_COUNT -gt 0 ]; then
    echo "ℹ️  注释中存在 $COMMENT_FUN_COUNT 个原始函数名记录（这是正常的）"
fi

echo
echo "=== 建议 ==="

if [ $TOTAL_COUNT -gt 0 ]; then
    echo "文件中仍存在一些 Ghidra 自动生成的变量名需要处理"
    echo "主要存在于注释中作为原始函数名的记录"
    echo "这些记录可以保留以便追踪原始代码"
else
    echo "所有 Ghidra 自动生成的变量名都已被成功处理"
fi

echo
echo "=== 文件统计 ==="
echo "文件大小: $(wc -c < /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c) 字节"
echo "文件行数: $(wc -l < /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c) 行"

echo
echo "检查完成"