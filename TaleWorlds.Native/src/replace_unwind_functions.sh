#!/bin/bash

# 批量替换Unwind函数名的脚本
# 用于美化06_utilities.c文件中的Unwind函数

# 定义替换映射
declare -A replacements=(
    ["Unwind_1809031b0"]="CleanupSystemMemoryBufferA"
    ["Unwind_1809031c0"]="CleanupSystemMemoryBufferB"
    ["Unwind_1809031e0"]="CleanupSystemMemoryBufferWithValidation"
    ["Unwind_1809031f0"]="CleanupSystemMemoryResourceA"
    ["Unwind_180903200"]="CleanupSystemMemoryResourceB"
    ["Unwind_180903210"]="CleanupSystemMemoryResourceC"
    ["Unwind_180903220"]="CleanupSystemMemoryResourceWithValidation"
    ["Unwind_180903230"]="CleanupSystemDataBufferA"
    ["Unwind_180903240"]="CleanupSystemDataBufferB"
    ["Unwind_180903250"]="CleanupSystemDataBufferC"
    ["Unwind_180903270"]="CleanupSystemDataBufferWithValidation"
    ["Unwind_180903290"]="CleanupSystemExceptionBufferA"
    ["Unwind_1809032b0"]="CleanupSystemExceptionBufferB"
    ["Unwind_1809032d0"]="CleanupSystemExceptionResourceA"
    ["Unwind_1809032e0"]="CleanupSystemExceptionResourceB"
    ["Unwind_1809032f0"]="CleanupSystemExceptionResourceC"
    ["Unwind_180903300"]="CleanupSystemExceptionResourceWithValidation"
    ["Unwind_180903310"]="CleanupSystemContextA"
    ["Unwind_180903320"]="CleanupSystemContextB"
    ["Unwind_180903330"]="CleanupSystemContextWithValidation"
)

# 遍历所有替换映射
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    echo "替换: $old_name -> $new_name"
    
    # 使用sed进行替换
    sed -i "s/$old_name/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
done

echo "Unwind函数名替换完成"