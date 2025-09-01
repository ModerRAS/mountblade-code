#!/bin/bash

# 美化 06_utilities.c 文件的脚本
# 用于重命名 FUN_ 函数和 DAT_ 变量

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

echo "开始处理文件: $FILE"

# 首先处理第一个函数
echo "处理函数 FUN_180941bf0..."
sed -i 's/^ void FUN_180941bf0(void)$/\n\/\**\n * @brief 清理系统资源和线程同步对象\n * \n * 该函数负责清理系统资源，包括：\n * 1. 检查系统状态标志\n * 2. 调用系统清理函数\n * 3. 销毁互斥锁和条件变量\n * 4. 释放系统资源\n * \n * 注意：此函数包含不返回的调用，可能会导致程序终止\n *\/\nvoid CleanupSystemResourcesAndThreadSync(void)/' "$FILE"

# 替换函数名的其他出现
sed -i 's/FUN_180941bf0/CleanupSystemResourcesAndThreadSync/g' "$FILE"

echo "第一个函数处理完成"

# 处理 DAT_180c91d50 变量
sed -i 's/DAT_180c91d50/SystemCleanupFlag/g' "$FILE"

# 处理 _DAT_180c91d30 变量
sed -i 's/_DAT_180c91d30/SystemCleanupCounter/g' "$FILE"

# 处理 _DAT_180c91d28 变量
sed -i 's/_DAT_180c91d28/SystemCleanupData/g' "$FILE"

# 处理 FUN_18064e900 函数
sed -i 's/FUN_18064e900/TerminateOnError/g' "$FILE"

# 处理 _DAT_180c91d18 变量
sed -i 's/_DAT_180c91d18/SystemCleanupCallback/g' "$FILE"

# 处理 _DAT_180c91cf0 变量
sed -i 's/_DAT_180c91cf0/SystemCleanupStatus/g' "$FILE"

# 处理 FUN_180059ee0 函数
sed -i 's/FUN_180059ee0/CleanupSystemMemory/g' "$FILE"

echo "变量重命名完成"

echo "处理完成！"