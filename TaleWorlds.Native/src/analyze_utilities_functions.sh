#!/bin/bash

# 分析06_utilities.c文件中的FUN_函数
FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 提取所有唯一的FUN_函数名
grep -o "FUN_[0-9a-fA-F]*" "$FILE" | sort | uniq > /tmp/fun_functions.txt

echo "找到的FUN_函数数量: $(wc -l < /tmp/fun_functions.txt)"
echo "前20个函数:"
head -20 /tmp/fun_functions.txt

# 创建替换映射文件
cat > /tmp/function_mapping.txt << 'EOF'
# 函数名映射表
FUN_180045af0=ProcessResourceHandler
FUN_180057010=ExecuteSystemOperation
FUN_1800596a0=ProcessResourceIndex
FUN_18005a050=PerformSystemCleanup
FUN_18005d260=ProcessResourceData
FUN_18005d580=InitializeResourceSystem
FUN_180090b80=ConfigureResourceTable
FUN_18020eba0=ValidateResourceHash
FUN_18020f530=FinalizeResourceOperation
EOF

echo "映射文件已创建"