#!/bin/bash

# 批量替换UNK_变量为语义化名称
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 使用sed进行批量替换
sed -i 's/&UNK_180a17e48/&SystemStringConstantC/g' 01_initialization.c
sed -i 's/&UNK_180a194f0/&SystemStringConstantD/g' 01_initialization.c
sed -i 's/&UNK_180a19588/&SystemStringConstantE/g' 01_initialization.c
sed -i 's/&UNK_180a1a6c8/&SystemStringConstantF/g' 01_initialization.c
sed -i 's/&UNK_180a1afd8/&SystemStringConstantG/g' 01_initialization.c
sed -i 's/&UNK_180a1cc28/&SystemStringConstantH/g' 01_initialization.c
sed -i 's/&UNK_180a1eb30/&SystemStringConstantI/g' 01_initialization.c
sed -i 's/&UNK_180a22538/&SystemStringConstantJ/g' 01_initialization.c
sed -i 's/&UNK_180a24340/&SystemStringConstantK/g' 01_initialization.c
sed -i 's/&UNK_180a24828/&SystemStringConstantL/g' 01_initialization.c
sed -i 's/&UNK_180a2ac10/&SystemStringConstantM/g' 01_initialization.c
sed -i 's/&UNK_180a2bf10/&SystemStringConstantN/g' 01_initialization.c
sed -i 's/&UNK_180a33fb0/&SystemStringConstantO/g' 01_initialization.c
sed -i 's/&UNK_180a3c028/&SystemStringConstantP/g' 01_initialization.c
sed -i 's/&UNK_180a3def0/&SystemStringConstantQ/g' 01_initialization.c
sed -i 's/&UNK_180a3e3d8/&SystemStringConstantR/g' 01_initialization.c
sed -i 's/&UNK_180a3e3f0/&SystemStringConstantS/g' 01_initialization.c

echo "字符串常量替换完成"