#!/bin/bash

# 99_unmatched_functions.c 文件函数名美化脚本
# 将高频出现的FUN_函数替换为语义化名称

# 高频函数替换
sed -i 's/FUN_18005d400/ProcessSystemNodeData/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_18038d0a0/ValidateSystemContext/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1802709c0/ProcessSystemBufferOperation/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1802a9bc0/GetSystemContextData/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_180270b10/ValidateSystemContextStatus/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_180178540/InitializeSystemContext/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1801a20e0/ProcessSystemMathOperation/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_18007f4c0/ResetSystemBuffer/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_180235000/CalculateSystemValue/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_180086010/ResizeSystemBuffer/g' TaleWorlds.Native/src/99_unmatched_functions.c

# 更多函数替换
sed -i 's/FUN_180244ff0/ProcessStringData/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1802eee20/ValidateQueueEntry/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1801ab580/ProcessResourceLock/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_18062d860/CalculateSystemMetrics/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1800a02a0/InitializeSystemProcessing/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_180087070/ProcessSystemResourceTable/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_18062d9a0/GetSystemBufferData/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1803a0010/CreateSystemContext/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1803a1a70/AllocateSystemMemory/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_180191c00/CompareSystemData/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1803d9920/GetSystemContextHandle/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1801fcbc0/ValidateSystemHandle/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_180476690/ProcessSystemInitialization/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1802e7bc0/ValidateSystemConfiguration/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1804dfad0/ValidateSystemBounds/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_180645fa0/ProcessSystemValidation/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_180645c10/ValidateSystemSecurity/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_18055f260/ProcessSystemStringData/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_180487c70/ProcessSystemQueue/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_180488880/ValidateSystemProcessing/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_18063ecd0/ProcessSystemFloatData/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_18056eb00/ProcessSystemBufferData/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1805aea10/ValidateSystemBuffer/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1805f9ee0/GetSystemStatus/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_180646610/InitializeSystemMath/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_180646700/ProcessSystemMathCalculation/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_180646500/CalculateSystemMathValue/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1805d3210/ProcessSystemGraphics/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1805b6e50/GetSystemBoundingBox/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1805c79a0/ValidateSystemGraphics/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1805c9f10/CalculateSystemScale/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1805caef0/ValidateSystemScale/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1805b7080/GetSystemStringData/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1805b74c0/GetSystemResourceHandle/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1805b6d50/GetSystemScaleFactor/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1805b6980/ValidateSystemBounds/g' TaleWorlds.Native/src/99_unmatched_functions.c

echo "函数名美化完成"