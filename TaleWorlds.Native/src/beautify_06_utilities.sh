#!/bin/bash

# 美化06_utilities.c文件的脚本
# 删除重复的函数定义和优化文件结构

echo "开始美化06_utilities.c文件..."

# 1. 删除第5334行的重复定义（FUN_180062300）
sed -i '5334d' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
echo "已删除第5334行的重复函数定义"

# 2. 统一函数名
sed -i 's/CleanupAndOptimizeSystemResourcesA0/CleanupAndOptimizeSystemResources/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
echo "已统一函数命名"

# 3. 删除多余的空行（将多个连续空行合并为最多2个）
sed -i '/^$/N;/^\n$/D; /^$/N;/^\n$/D' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
echo "已优化空行"

# 4. 删除冗余的地址常量注释
sed -i '/^\/\/ === .*地址常量 ===$/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i '/^\/\/ .*地址常量 - .*$/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
echo "已删除冗余注释"

# 5. 删除重复的#define语句
# 查找并删除重复的函数定义
grep -n "^#define FUN_180062300" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c | tail -1 | cut -d: -f1 | xargs -I {} sed -i '{}d' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
echo "已删除重复的函数定义"

echo "美化完成！"
echo "最终文件大小："
wc -c /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c