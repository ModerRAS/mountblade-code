#!/bin/bash

# 简单的Unwind函数重命名脚本
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 使用sed进行简单的替换
sed -i 's/void Unwind_180903f30(/void CleanupSystemResourceHandlerSet5(/g' "$FILE_PATH"
sed -i 's/void Unwind_180903f50(/void CleanupSystemResourceHandlerSet6(/g' "$FILE_PATH"
sed -i 's/void Unwind_180903f70(/void CleanupSystemResourceHandlerSet7(/g' "$FILE_PATH"
sed -i 's/void Unwind_180903f90(/void CleanupSystemResourceHandlerSet8(/g' "$FILE_PATH"
sed -i 's/void Unwind_180903fb0(/void CleanupSystemResourceHandlerSet9(/g' "$FILE_PATH"
sed -i 's/void Unwind_180903fd0(/void CleanupSystemResourceHandlerSet10(/g' "$FILE_PATH"
sed -i 's/void Unwind_180903ff0(/void CleanupSystemResourceHandlerSet11(/g' "$FILE_PATH"
sed -i 's/void Unwind_180904010(/void CleanupSystemResourceHandlerSet12(/g' "$FILE_PATH"
sed -i 's/void Unwind_180904030(/void CleanupSystemResourceHandlerSet13(/g' "$FILE_PATH"
sed -i 's/void Unwind_180904050(/void CleanupSystemResourceHandlerSet14(/g' "$FILE_PATH"
sed -i 's/void Unwind_180904070(/void CleanupSystemResourceHandlerSet15(/g' "$FILE_PATH"
sed -i 's/void Unwind_180904090(/void CleanupSystemResourceHandlerSet16(/g' "$FILE_PATH"
sed -i 's/void Unwind_1809040b0(/void CleanupSystemResourceHandlerSet17(/g' "$FILE_PATH"
sed -i 's/void Unwind_1809040d0(/void ResetSystemResourceContext(/g' "$FILE_PATH"
sed -i 's/void Unwind_1809040e0(/void CleanupSystemResourceHandlerSet18(/g' "$FILE_PATH"
sed -i 's/void Unwind_1809040f0(/void CleanupSystemResourceHandlerSet19(/g' "$FILE_PATH"

echo "Unwind函数重命名完成"