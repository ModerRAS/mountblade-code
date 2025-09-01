#!/bin/bash
# 临时脚本用于清理FUN_函数注释

sed -i '/^\/\/ 函数: void FUN_/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c