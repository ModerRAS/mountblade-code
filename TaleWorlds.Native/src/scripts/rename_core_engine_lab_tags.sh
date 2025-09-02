#!/bin/bash

# 批量重命名LAB_标签的脚本
# 此脚本用于批量重命名02_core_engine.c文件中的LAB_标签为语义化名称

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 备份原始文件
cp "$FILE" "$FILE.backup"

# 系统初始化和清理相关的标签
sed -i 's/LAB_1800718e9:/SystemCleanupComplete: \/\/ 原始标签：LAB_1800718e9，现已重命名为SystemCleanupComplete/g' "$FILE"
sed -i 's/LAB_1800715eb:/SystemInitializationDone: \/\/ 原始标签：LAB_1800715eb，现已重命名为SystemInitializationDone/g' "$FILE"
sed -i 's/LAB_180071af3:/SystemContextProcessing: \/\/ 原始标签：LAB_180071af3，现已重命名为SystemContextProcessing/g' "$FILE"
sed -i 's/LAB_180071b69:/SystemContextComplete: \/\/ 原始标签：LAB_180071b69，现已重命名为SystemContextComplete/g' "$FILE"

# 错误处理和状态管理相关的标签
sed -i 's/LAB_180071c1a:/StatusValidationStart: \/\/ 原始标签：LAB_180071c1a，现已重命名为StatusValidationStart/g' "$FILE"
sed -i 's/LAB_180071c93:/StatusProcessingStart: \/\/ 原始标签：LAB_180071c93，现已重命名为StatusProcessingStart/g' "$FILE"
sed -i 's/LAB_180071d1f:/StatusValidationComplete: \/\/ 原始标签：LAB_180071d1f，现已重命名为StatusValidationComplete/g' "$FILE"
sed -i 's/LAB_180071d94:/SecondaryStatusCheck: \/\/ 原始标签：LAB_180071d94，现已重命名为SecondaryStatusCheck/g' "$FILE"
sed -i 's/LAB_180071e34:/MemoryAllocationCheck: \/\/ 原始标签：LAB_180071e34，现已重命名为MemoryAllocationCheck/g' "$FILE"
sed -i 's/LAB_180071eb0:/SecondaryStatusComplete: \/\/ 原始标签：LAB_180071eb0，现已重命名为SecondaryStatusComplete/g' "$FILE"

# 线程和系统事件相关的标签
sed -i 's/LAB_180072d7b:/ThreadStatusCheck: \/\/ 原始标签：LAB_180072d7b，现已重命名为ThreadStatusCheck/g' "$FILE"
sed -i 's/LAB_180072120:/ThreadProcessingStart: \/\/ 原始标签：LAB_180072120，现已重命名为ThreadProcessingStart/g' "$FILE"
sed -i 's/LAB_1800721e1:/ThreadDataProcessing: \/\/ 原始标签：LAB_1800721e1，现已重命名为ThreadDataProcessing/g' "$FILE"
sed -i 's/LAB_1800722f5:/ThreadConditionCheck: \/\/ 原始标签：LAB_1800722f5，现已重命名为ThreadConditionCheck/g' "$FILE"
sed -i 's/LAB_180072521:/ThreadSynchronization: \/\/ 原始标签：LAB_180072521，现已重命名为ThreadSynchronization/g' "$FILE"
sed -i 's/LAB_1800725ac:/ThreadEventProcessing: \/\/ 原始标签：LAB_1800725ac，现已重命名为ThreadEventProcessing/g' "$FILE"

# 系统数据验证相关的标签
sed -i 's/LAB_180072662:/SystemDataValidation: \/\/ 原始标签：LAB_180072662，现已重命名为SystemDataValidation/g' "$FILE"
sed -i 's/LAB_1800726e7:/SystemDataProcessing: \/\/ 原始标签：LAB_1800726e7，现已重命名为SystemDataProcessing/g' "$FILE"
sed -i 's/LAB_180072780:/SystemDataCheck: \/\/ 原始标签：LAB_180072780，现已重命名为SystemDataCheck/g' "$FILE"
sed -i 's/LAB_1800727ff:/SystemDataComplete: \/\/ 原始标签：LAB_1800727ff，现已重命名为SystemDataComplete/g' "$FILE"
sed -i 's/LAB_1800728ad:/SystemBufferProcessing: \/\/ 原始标签：LAB_1800728ad，现已重命名为SystemBufferProcessing/g' "$FILE"
sed -i 's/LAB_180072934:/SystemMemoryCheck: \/\/ 原始标签：LAB_180072934，现已重命名为SystemMemoryCheck/g' "$FILE"
sed -i 's/LAB_1800729bd:/SystemMemoryComplete: \/\/ 原始标签：LAB_1800729bd，现已重命名为SystemMemoryComplete/g' "$FILE"

echo "LAB_标签重命名完成"
echo "处理文件: $FILE"
echo "备份文件: $FILE.backup"