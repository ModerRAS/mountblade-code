#!/bin/bash

# 批量清理渲染文件中的过度注释
# 保留函数声明，删除过长的中文注释

sed -i '/^\/\/ 函数: void FUN_180[0-9a-f]\{5\};$/,/^void [A-Za-z][A-Za-z0-9_]*;$/ {
    /^void [A-Za-z][A-Za-z0-9_]*;$/!d
}' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "注释清理完成"