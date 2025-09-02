#!/bin/bash

# 删除旧的函数注释行
sed -i '/^\/\/ 函数: void FUN_180[0-9a-f].*$/d' 04_ui_system.c

echo "旧的函数注释行已删除"