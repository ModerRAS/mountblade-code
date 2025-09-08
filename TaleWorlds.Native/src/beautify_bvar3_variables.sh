#!/bin/bash

# 美化渲染系统中的变量名
# 处理 bVar3 变量名，根据上下文重命名为更有意义的名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 备份原文件
cp "$INPUT_FILE" "$INPUT_FILE.backup"

echo "开始美化03_rendering.c中的变量名..."

# 根据不同的函数上下文，为bVar3变量赋予不同的语义化名称

# 1. 在SerializeMaterialProperties函数中 (行28156附近)
# bVar3 用作属性查找标志
sed -i '28156s/bool bVar3;/bool PropertyFoundFlag;/' "$INPUT_FILE"
sed -i '28324s/bVar3 = false;/PropertyFoundFlag = false;/' "$INPUT_FILE"
sed -i '28411s/bVar3 = true;/PropertyFoundFlag = true;/' "$INPUT_FILE"
sed -i '28540s/if (!bVar3)/if (!PropertyFoundFlag)/' "$INPUT_FILE"

# 2. 在其他函数中的bVar3变量，根据上下文赋予不同的名称
# 这里需要根据每个函数的具体功能来命名

echo "变量名美化完成"
echo "已处理 SerializeMaterialProperties 函数中的 bVar3 变量"
echo "注意：其他函数中的 bVar3 变量需要根据具体上下文进行美化"