#!/bin/bash

# 获取所有需要替换的变量行
grep -n "undefined UNK_" 99_unmatched_functions.c | head -50 | while read line; do
    line_num=$(echo $line | cut -d: -f1)
    var_name=$(echo $line | cut -d: -f2 | sed 's/undefined UNK_/SystemFunctionTableEntry/; s/;//')
    
    # 替换变量
    sed -i "${line_num}s/undefined UNK_/void* SystemFunctionTableEntry/" 99_unmatched_functions.c
done