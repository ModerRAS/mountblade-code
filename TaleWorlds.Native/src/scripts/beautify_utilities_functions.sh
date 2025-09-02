#!/bin/bash

# 美化06_utilities.c文件中的函数名
# 这个脚本将Unwind_xxx函数名替换为语义化的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份
cp 06_utilities.c 06_utilities.c.backup

# 替换函数名为语义化名称
sed -i 's/void Unwind_1809042f0/void CleanupSystemResourceHandlerGroup1/g' 06_utilities.c
sed -i 's/void Unwind_180904310/void CleanupSystemResourceHandlerGroup2/g' 06_utilities.c
sed -i 's/void Unwind_180904330/void CleanupSystemResourceHandlerGroup3/g' 06_utilities.c
sed -i 's/void Unwind_180904350/void CleanupSystemResourceHandlerGroup4/g' 06_utilities.c
sed -i 's/void Unwind_180904370/void CleanupSystemResourceHandlerGroup5/g' 06_utilities.c
sed -i 's/void Unwind_180904390/void CleanupSystemResourceHandlerGroup6/g' 06_utilities.c
sed -i 's/void Unwind_1809043b0/void CleanupSystemResourceHandlerGroup7/g' 06_utilities.c
sed -i 's/void Unwind_1809043d0/void CleanupSystemResourceHandlerGroup8/g' 06_utilities.c
sed -i 's/void Unwind_1809043f0/void CleanupSystemResourceHandlerGroup9/g' 06_utilities.c
sed -i 's/void Unwind_180904410/void CleanupSystemResourceHandlerGroup10/g' 06_utilities.c

# 替换更多函数名
sed -i 's/void Unwind_1809056b0/void InitializeSystemDataStructure/g' 06_utilities.c
sed -i 's/void Unwind_1809056c0/void CleanupSystemResourceHandler1/g' 06_utilities.c
sed -i 's/void Unwind_1809056e0/void CleanupSystemResourceHandler2/g' 06_utilities.c
sed -i 's/void Unwind_180905700/void CleanupSystemResourceHandler3/g' 06_utilities.c

echo "函数名替换完成"