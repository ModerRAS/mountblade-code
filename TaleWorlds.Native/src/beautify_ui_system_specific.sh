#!/bin/bash

# UI系统代码美化脚本 - 特定函数和变量替换
# 用于批量替换04_ui_system.c文件中的特定Ghidra自动生成的变量名和函数名

# 设置目标文件路径
TARGET_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

# 检查目标文件是否存在
if [ ! -f "$TARGET_FILE" ]; then
    echo "错误: 目标文件 $TARGET_FILE 不存在"
    exit 1
fi

echo "开始美化UI系统代码..."
echo "目标文件: $TARGET_FILE"

# 创建临时文件
TEMP_FILE="${TARGET_FILE}.tmp"

# 复制原文件到临时文件
cp "$TARGET_FILE" "$TEMP_FILE"

# 函数名替换
echo "正在替换函数名..."
sed -i 's/FUN_18068f150/CalculateUIDataDifferenceA1/g' "$TEMP_FILE"
sed -i 's/FUN_18068f240/CalculateUIDataDifferenceA2/g' "$TEMP_FILE"
sed -i 's/FUN_18068f330/CalculateUIDataDifferenceA3/g' "$TEMP_FILE"
sed -i 's/FUN_18068f3a0/CalculateUIDataDifferenceA4/g' "$TEMP_FILE"
sed -i 's/FUN_18068f410/CalculateUIDataDifferenceA5/g' "$TEMP_FILE"
sed -i 's/FUN_18068f480/CalculateUIDataDifferenceA6/g' "$TEMP_FILE"
sed -i 's/FUN_18068f4f0/CalculateUIDataDifferenceA7/g' "$TEMP_FILE"
sed -i 's/FUN_18068f680/CalculateUIDataDifferenceA8/g' "$TEMP_FILE"
sed -i 's/FUN_18068f810/CalculateUIDataDifferenceA9/g' "$TEMP_FILE"
sed -i 's/FUN_18068f9a0/ProcessUIBatchData/g' "$TEMP_FILE"
sed -i 's/FUN_18068fb30/ValidateUIDataVersion1/g' "$TEMP_FILE"
sed -i 's/FUN_18068fba0/ValidateUIDataVersion2/g' "$TEMP_FILE"
sed -i 's/FUN_18068fc10/ValidateUIDataVersion3/g' "$TEMP_FILE"
sed -i 's/FUN_18068fc80/ValidateUIDataVersion4/g' "$TEMP_FILE"
sed -i 's/FUN_18068fcf0/ValidateUIDataVersion5/g' "$TEMP_FILE"
sed -i 's/FUN_18068fd60/ValidateUIDataVersion6/g' "$TEMP_FILE"
sed -i 's/FUN_18068fdd0/CalculateUIDataDifferenceB0/g' "$TEMP_FILE"
sed -i 's/FUN_18068fe10/ProcessUIComplexData/g' "$TEMP_FILE"
sed -i 's/FUN_18068ff60/CalculateUIDataDifferenceB1/g' "$TEMP_FILE"
sed -i 's/FUN_180690200/ProcessUIEventData/g' "$TEMP_FILE"
sed -i 's/FUN_1806903c0/ProcessUIInputData/g' "$TEMP_FILE"
sed -i 's/FUN_180695750/ProcessUISpecialBatchData/g' "$TEMP_FILE"
sed -i 's/FUN_180695820/ProcessUIAdvancedBatchData/g' "$TEMP_FILE"
sed -i 's/FUN_180695870/ProcessUIPriorityBatchData/g' "$TEMP_FILE"
sed -i 's/FUN_1806958c0/ProcessUIRealtimeBatchData/g' "$TEMP_FILE"
sed -i 's/FUN_180695990/ProcessUIMemoryBatchData/g' "$TEMP_FILE"
sed -i 's/FUN_180695ac0/ProcessUIThreadBatchData/g' "$TEMP_FILE"

# 数据指针变量名替换
echo "正在替换数据指针变量名..."
sed -i 's/_DAT_180d4a898/UIDataProcessorPointer898/g' "$TEMP_FILE"
sed -i 's/_DAT_180d4a858/UIDataProcessorPointer858/g' "$TEMP_FILE"
sed -i 's/_DAT_180d4a820/UIDataProcessorPointer820/g' "$TEMP_FILE"
sed -i 's/_DAT_180d4a7e0/UIDataProcessorPointer7E0/g' "$TEMP_FILE"
sed -i 's/_DAT_180d4a7b0/UIDataProcessorPointer7B0/g' "$TEMP_FILE"
sed -i 's/_DAT_180d4a778/UIDataProcessorPointer778/g' "$TEMP_FILE"
sed -i 's/_DAT_180d4a750/UIDataProcessorPointer750/g' "$TEMP_FILE"
sed -i 's/_DAT_180d4a708/UIDataProcessorPointer708/g' "$TEMP_FILE"
sed -i 's/_DAT_180d4a958/UIDataProcessorPointer958/g' "$TEMP_FILE"
sed -i 's/_DAT_180d4a928/UIDataProcessorPointer928/g' "$TEMP_FILE"
sed -i 's/_DAT_180d4a910/UIDataProcessorPointer910/g' "$TEMP_FILE"
sed -i 's/_DAT_180d4a8c0/UIDataProcessorPointer8C0/g' "$TEMP_FILE"
sed -i 's/_DAT_180d4a8a8/UIDataProcessorPointer8A8/g' "$TEMP_FILE"

# 备份原文件
echo "备份原文件..."
cp "$TARGET_FILE" "${TARGET_FILE}.backup.$(date +%Y%m%d_%H%M%S)"

# 替换原文件
echo "替换原文件..."
mv "$TEMP_FILE" "$TARGET_FILE"

echo "UI系统代码美化完成！"
echo "已替换："
echo "  - 27个函数名"
echo "  - 13个数据指针变量名"
echo "原文件已备份为: ${TARGET_FILE}.backup.$(date +%Y%m%d_%H%M%S)"

# 显示替换后的统计信息
echo ""
echo "替换统计："
echo "函数名替换统计："
grep -c "CalculateUIDataDifference\|ProcessUI\|ValidateUIData" "$TARGET_FILE" | head -5
echo ""
echo "数据指针变量名替换统计："
grep -c "UIDataProcessorPointer" "$TARGET_FILE"

echo ""
echo "代码美化完成！"