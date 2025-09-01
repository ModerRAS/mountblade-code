#!/bin/bash

# 测试重命名前后的函数调用对比
echo "测试重命名前后的函数调用对比..."
echo ""

# 统计重命名前的FUN_函数数量
echo "重命名前的FUN_函数统计:"
grep -c "FUN_180744d60\|FUN_18073c380\|FUN_180741320\|FUN_180768360\|FUN_180768400" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo ""

# 显示几个重命名前的函数调用示例
echo "重命名前的函数调用示例:"
grep -n "FUN_180744d60\|FUN_18073c380\|FUN_180741320" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c | head -5

echo ""
echo "准备执行重命名操作..."