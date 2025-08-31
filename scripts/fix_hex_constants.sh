#!/bin/bash

# 修复01_initialization.c文件中的十六进制常量定义
# 这是一个简化实现，主要修复十六进制格式错误

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原文件
cp 01_initialization.c 01_initialization.c.backup

# 修复错误的十六进制常量定义
sed -i 's/0x575417470x1065542f/0x57541747065542f/g' 01_initialization.c
sed -i 's/0xf70x10746e/0xf70746e/g' 01_initialization.c
sed -i 's/0x0x10E4ccccd/0x10E4ccccd/g' 01_initialization.c
sed -i 's/0xe656e6560x1070102f/0xe656e65670102f/g' 01_initialization.c
sed -i 's/0x560x1065746564206b/0x56065746564206b/g' 01_initialization.c
sed -i 's/0x7010646e6f601065701020/0x7010646e6f6065701020/g' 01_initialization.c
sed -i 's/0x0x10D072b02/0x10D072b02/g' 01_initialization.c
sed -i 's/0x0x108/0x108/g' 01_initialization.c
sed -i 's/0x0c0c0x1040/0x0c0c1040/g' 01_initialization.c
sed -i 's/0x0be20x10a0/0x0be210a0/g' 01_initialization.c
sed -i 's/0x0be20x10c0/0x0be210c0/g' 01_initialization.c
sed -i 's/0x0c0x105590/0x0c105590/g' 01_initialization.c
sed -i 's/0x0X0x108/0x108/g' 01_initialization.c
sed -i 's/0x10x10458/0x10458/g' 01_initialization.c

echo "十六进制常量修复完成"