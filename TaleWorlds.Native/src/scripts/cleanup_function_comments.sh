#!/bin/bash

# 批量删除函数注释脚本
# 删除所有包含原始函数名的注释行

sed -i '/^\/\/ 函数: void FUN_180[0-9a-f]\{5\}/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

echo "已删除所有原始函数注释行"