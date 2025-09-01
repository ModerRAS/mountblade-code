#!/bin/bash

# 创建临时脚本文件来修复longlong类型问题
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原始文件
cp 02_core_engine.c 02_core_engine.c.backup

# 使用sed命令批量替换longlong为long long
sed -i 's/longlong/long long/g' 02_core_engine.c

# 同样处理ulonglong
sed -i 's/ulonglong/unsigned long long/g' 02_core_engine.c

echo "类型修复完成"