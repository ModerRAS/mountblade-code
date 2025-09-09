#!/bin/bash

# 批量删除重复的undefined声明
# 这个脚本会删除已经定义过的变量的undefined声明

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 需要删除的undefined声明列表
variables=(
    "UNK_180a29670"
    "UNK_180995a40" 
    "UNK_180995a60"
    "UNK_180a29660"
    "UNK_1809958a8"
    "UNK_1809958b4"
    "UNK_180a27cf8"
    "UNK_180a27d08"
    "UNK_180a27d10"
    "UNK_180a27d1c"
    "UNK_180a27d34"
    "UNK_180a27d38"
    "UNK_180a27d50"
    "UNK_180a27d24"
    "UNK_180a27d58"
    "UNK_180a29190"
    "UNK_180a29194"
    "UNK_180a291d0"
    "UNK_180a291f0"
    "UNK_180995863"
    "UNK_180995864"
    "UNK_180995865"
    "UNK_180995866"
    "UNK_180995867"
    "UNK_180995868"
    "UNK_180995869"
    "UNK_18099586a"
    "UNK_18099586b"
    "UNK_18099586c"
    "UNK_18099586d"
    "UNK_18099586e"
    "UNK_18099586f"
)

# 检查并删除每个变量的undefined声明
for var in "${variables[@]}"; do
    # 检查是否已经有定义
    if grep -q "#define $var" 03_rendering.c; then
        # 删除undefined声明
        sed -i "/undefined $var;/d" 03_rendering.c
        echo "已删除 $var 的undefined声明"
    fi
done

echo "批量删除完成"