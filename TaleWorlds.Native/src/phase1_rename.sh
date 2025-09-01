#!/bin/bash

# 06_utilities.c 文件 UNK_变量批量重命名脚本
# 专门处理最重要的内存管理相关变量

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

echo "开始重命名06_utilities.c文件中的UNK_变量..."

# 备份原文件
cp "$FILE_PATH" "$FILE_PATH.backup_$(date +%Y%m%d_%H%M%S)"

echo "已创建备份文件"

# 第一阶段：内存管理核心变量
echo "第一阶段：重命名内存管理核心变量..."

# 内存释放相关变量 (180a19xxx系列)
sed -i 's/UNK_180a19fd8/MemoryFreeQueue/g' "$FILE_PATH"
sed -i 's/UNK_180a19eb0/MemoryFreeStack/g' "$FILE_PATH"
sed -i 's/UNK_180a19e28/MemoryFreePool/g' "$FILE_PATH"
sed -i 's/UNK_180a19e38/MemoryFreeCache/g' "$FILE_PATH"
sed -i 's/UNK_180a19e88/MemoryFreeBuffer/g' "$FILE_PATH"

# 系统内存变量 (18030xxxx系列)
sed -i 's/UNK_180302310/SystemMemoryConfig/g' "$FILE_PATH"
sed -i 's/UNK_1803048b0/SystemMemoryStatus/g' "$FILE_PATH"

echo "第一阶段完成"

# 第二阶段：线程管理变量
echo "第二阶段：重命名线程管理变量..."

sed -i 's/UNK_180a1b150/ThreadContextManager/g' "$FILE_PATH"
sed -i 's/UNK_180a1b118/ThreadScheduler/g' "$FILE_PATH"
sed -i 's/UNK_18033cd70/ThreadLocalStorage/g' "$FILE_PATH"

echo "第二阶段完成"

# 第三阶段：内存模板变量
echo "第三阶段：重命名内存模板变量..."

sed -i 's/UNK_180462fc0/MemoryTemplateHeader/g' "$FILE_PATH"
sed -i 's/UNK_180462ff0/MemoryTemplateData/g' "$FILE_PATH"
sed -i 's/UNK_180463030/MemoryTemplateConfig/g' "$FILE_PATH"
sed -i 's/UNK_180463060/MemoryTemplateMetadata/g' "$FILE_PATH"

echo "第三阶段完成"

# 第四阶段：系统数据变量
echo "第四阶段：重命名系统数据变量..."

sed -i 's/UNK_18098be5c/SystemDataTable/g' "$FILE_PATH"
sed -i 's/UNK_180942870/NetworkBufferPool/g' "$FILE_PATH"
sed -i 's/UNK_180d49d2c/DataStructureHeader/g' "$FILE_PATH"
sed -i 's/UNK_180d49d4c/DataStructureFooter/g' "$FILE_PATH"
sed -i 's/UNK_180a2ae38/ResourcePoolManager/g' "$FILE_PATH"

echo "第四阶段完成"

# 检查重命名结果
echo "检查重命名结果..."
REMAINING_UNK=$(grep -c "UNK_" "$FILE_PATH")
echo "剩余UNK_变量数量: $REMAINING_UNK"

if [ $REMAINING_UNK -eq 0 ]; then
    echo "所有UNK_变量已成功重命名！"
else
    echo "仍有 $REMAINING_UNK 个UNK_变量需要处理"
    echo "前20个剩余的UNK_变量："
    grep "UNK_" "$FILE_PATH" | head -20
fi

echo "批量重命名完成！"
echo "详情请查看分析报告：utilities_unk_rename_analysis.md"