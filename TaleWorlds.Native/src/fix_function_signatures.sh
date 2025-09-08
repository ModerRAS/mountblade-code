#!/bin/bash

# 修复02_core_engine.c中被破坏的函数定义签名
# 识别模式：像 "61eb0(long long CharacterCode,long long SystemBufferSizevoid FUN_180161eb0" 这样的破坏的函数签名

echo "开始修复函数定义签名..."

# 备份原文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.backup

# 修复函数定义签名的正则表达式
# 模式：数字字母组合(参数列表)void FUN_
# 替换为：void FUN_

sed -i 's/\([0-9a-f]\{4\}\)(.*\)void FUN_/void FUN_/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

echo "函数定义签名修复完成"
echo "请检查修复结果，然后运行 git diff 查看更改"