#!/bin/bash

# 美化03_rendering.c中的函数名
# 这个脚本会处理文件中类似 "293c12(void)" 这样的函数声明

# 首先备份原文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c.backup

# 处理函数定义模式
# 模式1: 十六进制地址(void)
sed -i 's/^\([0-9a-f]*\)(void)/void FUN_180\1(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 模式2: 十六进制地址(参数)
sed -i 's/^\([0-9a-f]*\)(/void FUN_180\1(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "函数名美化完成"