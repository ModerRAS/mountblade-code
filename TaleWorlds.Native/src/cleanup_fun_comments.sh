#!/bin/bash

# 批量清理所有文件中的FUN_180函数名注释

echo "开始清理FUN_180函数名注释..."

# 清理03_rendering.c
sed -i '/原始函数名为FUN_180.*现已重命名为/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 清理05_networking.c  
sed -i '/^\*FUN_180/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "FUN_180函数名注释清理完成"