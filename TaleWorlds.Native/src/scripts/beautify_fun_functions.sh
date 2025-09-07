#!/bin/bash

# 美化99_unmatched_functions.c中的FUN_函数
# 这个脚本会查找所有FUN_函数并为它们添加语义化的宏定义

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 查找所有FUN_函数定义
grep -n "^void FUN_" "$FILE_PATH" | head -20 | while read line; do
    # 提取函数名
    func_name=$(echo "$line" | sed 's/.*\(FUN_[0-9a-fx]*\).*/\1/')
    line_num=$(echo "$line" | cut -d: -f1)
    
    echo "Found function: $func_name at line $line_num"
    
    # 根据函数地址生成语义化名称
    addr=$(echo "$func_name" | sed 's/FUN_//')
    
    # 根据地址范围判断函数类型
    case "$addr" in
        1800d*)
            prefix="ProcessSystemData"
            ;;
        1800e*)
            prefix="HandleSystemMemory"
            ;;
        1800f*)
            prefix="ManageSystemResource"
            ;;
        1801*)
            prefix="ProcessSystemProtocol"
            ;;
        1802*)
            prefix="HandleSystemBuffer"
            ;;
        *)
            prefix="SystemFunction"
            ;;
    esac
    
    # 生成唯一的函数名
    semantic_name="${prefix}_${addr:6:4}"
    
    echo "#define $semantic_name $func_name"
done