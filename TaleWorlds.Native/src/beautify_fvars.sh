#!/bin/bash

# 美化99_unmatched_functions.c文件中的fVar变量
# 替换fVar变量为语义化名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份
cp 99_unmatched_functions.c 99_unmatched_functions.c.backup

# 替换fVar变量为语义化名称
sed -i 's/fVar30/MatrixRow1XComponent/g' 99_unmatched_functions.c
sed -i 's/fVar31/MatrixRow1YComponent/g' 99_unmatched_functions.c
sed -i 's/fVar28/MatrixRow1ZComponent/g' 99_unmatched_functions.c
sed -i 's/fVar32/MatrixRow1WComponent/g' 99_unmatched_functions.c
sed -i 's/fVar36/MatrixRow2XComponent/g' 99_unmatched_functions.c
sed -i 's/fVar37/MatrixRow2YComponent/g' 99_unmatched_functions.c
sed -i 's/fVar33/MatrixRow2ZComponent/g' 99_unmatched_functions.c
sed -i 's/fVar8/MatrixRow3XComponent/g' 99_unmatched_functions.c
sed -i 's/fVar9/MatrixRow3YComponent/g' 99_unmatched_functions.c
sed -i 's/fVar35/MatrixRow4XComponent/g' 99_unmatched_functions.c
sed -i 's/fVar48/MatrixRow4YComponent/g' 99_unmatched_functions.c
sed -i 's/fVar34/MatrixRow4ZComponent/g' 99_unmatched_functions.c
sed -i 's/fVar38/MatrixResult1/g' 99_unmatched_functions.c
sed -i 's/fVar39/MatrixResult2/g' 99_unmatched_functions.c
sed -i 's/fVar40/MatrixResult3/g' 99_unmatched_functions.c
sed -i 's/fVar41/MatrixResult4/g' 99_unmatched_functions.c
sed -i 's/fVar42/MatrixResult5/g' 99_unmatched_functions.c

echo "变量替换完成"