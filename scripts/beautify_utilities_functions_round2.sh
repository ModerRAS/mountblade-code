#!/bin/bash

# 06_utilities.c 第二轮函数名美化脚本（2025年8月30日最终批次）
# 用于处理剩余的非语义化函数名

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup_$(date +%s)"

echo "开始第二轮函数名美化..."

# 处理剩余的utilitylegacyfunctionhandler系列函数（84-151）
for i in {84..151}; do
    echo "替换: utilitylegacyfunctionhandler$i -> utility_legacy_function_handler_$i"
    sed -i "s/utilitylegacyfunctionhandler$i/utility_legacy_function_handler_$i/g" "$FILE_PATH"
done

# 处理utilityunwindcorefunction和utilityunwindfinalfunction系列
sed -i 's/utilityunwindcorefunctionbbb0/utility_unwind_core_function_primary/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction22c0/utility_unwind_final_function_stage_00/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction22e0/utility_unwind_final_function_stage_01/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2300/utility_unwind_final_function_stage_02/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2320/utility_unwind_final_function_stage_03/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2340/utility_unwind_final_function_stage_04/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2350/utility_unwind_final_function_stage_05/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2360/utility_unwind_final_function_stage_06/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2370/utility_unwind_final_function_stage_07/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction23a0/utility_unwind_final_function_stage_08/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction23d0/utility_unwind_final_function_stage_09/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2400/utility_unwind_final_function_stage_0a/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2410/utility_unwind_final_function_stage_0b/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2420/utility_unwind_final_function_stage_0c/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2430/utility_unwind_final_function_stage_0d/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2440/utility_unwind_final_function_stage_0e/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2450/utility_unwind_final_function_stage_0f/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2460/utility_unwind_final_function_stage_10/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2470/utility_unwind_final_function_stage_11/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction24a0/utility_unwind_final_function_stage_12/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction24d0/utility_unwind_final_function_stage_13/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction24e0/utility_unwind_final_function_stage_14/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction24f0/utility_unwind_final_function_stage_15/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2500/utility_unwind_final_function_stage_16/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2510/utility_unwind_final_function_stage_17/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2520/utility_unwind_final_function_stage_18/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2530/utility_unwind_final_function_stage_19/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2540/utility_unwind_final_function_stage_1a/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2550/utility_unwind_final_function_stage_1b/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2580/utility_unwind_final_function_stage_1c/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2590/utility_unwind_final_function_stage_1d/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction25a0/utility_unwind_final_function_stage_1e/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction25b0/utility_unwind_final_function_stage_1f/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction25c0/utility_unwind_final_function_stage_20/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction25d0/utility_unwind_final_function_stage_21/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2600/utility_unwind_final_function_stage_22/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2630/utility_unwind_final_function_stage_23/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2660/utility_unwind_final_function_stage_24/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2670/utility_unwind_final_function_stage_25/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction26a0/utility_unwind_final_function_stage_26/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction26b0/utility_unwind_final_function_stage_27/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction26e0/utility_unwind_final_function_stage_28/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2710/utility_unwind_final_function_stage_29/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2740/utility_unwind_final_function_stage_2a/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2770/utility_unwind_final_function_stage_2b/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2780/utility_unwind_final_function_stage_2c/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction2790/utility_unwind_final_function_stage_2d/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction27a0/utility_unwind_final_function_stage_2e/g' "$FILE_PATH"
sed -i 's/utilityunwindfinalfunction27b0/utility_unwind_final_function_stage_2f/g' "$FILE_PATH"

echo "第二轮函数名美化完成"
echo "原始文件已备份为: $FILE_PATH.backup_$(date +%s)"