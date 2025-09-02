#!/bin/bash

# 美化06_utilities.c文件中的特定变量名
# 将冗长的变量名改为简洁且语义明确的名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
BACKUP_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup.$(date +%Y%m%d_%H%M%S)"

# 创建备份
cp "$INPUT_FILE" "$BACKUP_FILE"
echo "已创建备份文件: $BACKUP_FILE"

# 执行变量名替换
echo "开始执行变量名替换..."

# 替换系统内存配置相关变量
sed -i 's/SystemMemoryConfigDataTemplateWorkerBackgroundThread/BackgroundThreadMemoryConfig/g' "$INPUT_FILE"
sed -i 's/SystemMemoryConfigDataTemplateThreadStackMain/MainThreadStackConfig/g' "$INPUT_FILE"
sed -i 's/SystemMemoryConfigDataTemplateThreadStackSecondary/SecondaryThreadStackConfig/g' "$INPUT_FILE"
sed -i 's/SystemMemoryConfigDataTemplateThreadStackTertiary/TertiaryThreadStackConfig/g' "$INPUT_FILE"

# 替换线程相关变量
sed -i 's/WorkerThreadContextData/WorkerThreadContext/g' "$INPUT_FILE"
sed -i 's/ThreadLocalStorageData/ThreadLocalStorage/g' "$INPUT_FILE"
sed -i 's/ThreadStackData/ThreadStackBuffer/g' "$INPUT_FILE"
sed -i 's/ThreadRegistryData/ThreadRegistry/g' "$INPUT_FILE"
sed -i 's/ThreadHandleData/ThreadHandle/g' "$INPUT_FILE"

# 替换线程分配器相关变量
sed -i 's/SystemThreadAllocatorPrimary/PrimaryThreadAllocator/g' "$INPUT_FILE"
sed -i 's/SystemThreadAllocatorSecondary/SecondaryThreadAllocator/g' "$INPUT_FILE"
sed -i 's/SystemThreadAllocatorTertiary/TertiaryThreadAllocator/g' "$INPUT_FILE"
sed -i 's/SystemThreadAllocatorQuaternary/QuaternaryThreadAllocator/g' "$INPUT_FILE"

echo "变量名替换完成！"

# 验证替换结果
echo "验证替换结果..."
echo "替换后的变量名："
grep -n "BackgroundThreadMemoryConfig\|WorkerThreadContext\|ThreadLocalStorage\|ThreadStackBuffer\|ThreadRegistry\|ThreadHandle\|MainThreadStackConfig\|SecondaryThreadStackConfig\|TertiaryThreadStackConfig\|PrimaryThreadAllocator\|SecondaryThreadAllocator\|TertiaryThreadAllocator\|QuaternaryThreadAllocator" "$INPUT_FILE" | head -20

echo ""
echo "处理完成！"
echo "备份文件保存在: $BACKUP_FILE"