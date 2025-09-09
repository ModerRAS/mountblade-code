#!/bin/bash

# 批量替换99_unmatched_functions.c中的函数调用
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换函数调用
sed -i 's/FUN_180075b70()/ExecuteSystemResourceCleanup()/g' 99_unmatched_functions.c
sed -i 's/FUN_180076a20(/ReleaseSystemMemory(/g' 99_unmatched_functions.c
sed -i 's/FUN_1800763c0(/InitializeSystemResourceEx(/g' 99_unmatched_functions.c
sed -i 's/FUN_1800c12e0(/CalculateSystemValueEx(/g' 99_unmatched_functions.c
sed -i 's/FUN_180094d40(/TransformSystemDataEx(/g' 99_unmatched_functions.c
sed -i 's/FUN_180094e80(/AllocateSystemResourceEx(/g' 99_unmatched_functions.c
sed -i 's/FUN_18022f2e0(/CalculateTransformMatrixEx(/g' 99_unmatched_functions.c
sed -i 's/FUN_1802350e0(/ProcessSystemQueueDataAndValidation(/g' 99_unmatched_functions.c

echo "函数调用替换完成"