#!/bin/bash

# 美化core_engine.c文件中的变量名
# 替换Ghidra自动生成的变量名为语义化名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换auStack变量名
sed -i 's/auStack_158/SystemStackArray158/g' 02_core_engine.c
sed -i 's/auStack_170/SystemStackArray170/g' 02_core_engine.c
sed -i 's/auStack_18/SystemStackArray18/g' 02_core_engine.c
sed -i 's/auStack_18c/SystemStackArray18c/g' 02_core_engine.c
sed -i 's/auStack_190/SystemStackArray190/g' 02_core_engine.c
sed -i 's/auStack_1b0/SystemStackArray1b0/g' 02_core_engine.c
sed -i 's/auStack_1c0/SystemStackArray1c0/g' 02_core_engine.c
sed -i 's/auStack_1f0/SystemStackArray1f0/g' 02_core_engine.c
sed -i 's/auStack_218/SystemStackArray218/g' 02_core_engine.c
sed -i 's/auStack_220/SystemStackArray220/g' 02_core_engine.c
sed -i 's/auStack_270/SystemStackArray270/g' 02_core_engine.c
sed -i 's/auStack_2e0/SystemStackArray2e0/g' 02_core_engine.c
sed -i 's/auStack_328/SystemStackArray328/g' 02_core_engine.c
sed -i 's/auStack_348/SystemStackArray348/g' 02_core_engine.c
sed -i 's/auStack_350/SystemStackArray350/g' 02_core_engine.c
sed -i 's/auStack_358/SystemStackArray358/g' 02_core_engine.c
sed -i 's/auStack_370/SystemStackArray370/g' 02_core_engine.c
sed -i 's/auStack_378/SystemStackArray378/g' 02_core_engine.c
sed -i 's/auStack_3a8/SystemStackArray3a8/g' 02_core_engine.c
sed -i 's/auStack_3c0/SystemStackArray3c0/g' 02_core_engine.c

echo "变量名美化完成"