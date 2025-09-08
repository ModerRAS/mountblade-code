#!/bin/bash

# 批量美化Unwind函数脚本
# 用于将06_utilities.c中的Unwind函数替换为语义化名称

# 设置文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 创建备份
cp "$FILE_PATH" "${FILE_PATH}.backup"

# Unwind函数美化映射表
# 格式: 原始函数名:新函数名:功能描述

declare -a UNWIND_FUNCTIONS=(
    "Unwind_18090b2b0:InvokeExceptionHandlerAtOffset3A0:调用偏移量3A0处的异常处理器"
    "Unwind_18090b330:ResetExceptionHandlerPointer3A8:重置偏移量3A8处的异常处理器指针"
    "Unwind_18090b350:ResetExceptionHandlerPointer3B0:重置偏移量3B0处的异常处理器指针"
    "Unwind_18090b370:ResetExceptionHandlerPointer3B8:重置偏移量3B8处的异常处理器指针"
    "Unwind_18090b390:ResetExceptionHandlerPointer3C0:重置偏移量3C0处的异常处理器指针"
    "Unwind_18090b3b0:ResetExceptionHandlerPointer3C8:重置偏移量3C8处的异常处理器指针"
    "Unwind_18090b3d0:ResetExceptionHandlerPointer3D0:重置偏移量3D0处的异常处理器指针"
    "Unwind_18090b3f0:ResetExceptionHandlerPointer3D8:重置偏移量3D8处的异常处理器指针"
    "Unwind_18090b410:ResetExceptionHandlerPointer3E0:重置偏移量3E0处的异常处理器指针"
    "Unwind_18090b430:ResetExceptionHandlerPointer3E8:重置偏移量3E8处的异常处理器指针"
    "Unwind_18090b450:ResetExceptionHandlerPointer3F0:重置偏移量3F0处的异常处理器指针"
    "Unwind_18090b470:ResetExceptionHandlerPointer3F8:重置偏移量3F8处的异常处理器指针"
    "Unwind_18090b490:ResetExceptionHandlerPointer400:重置偏移量400处的异常处理器指针"
    "Unwind_18090b4b0:ResetExceptionHandlerPointer408:重置偏移量408处的异常处理器指针"
    "Unwind_18090b4d0:ResetExceptionHandlerPointer410:重置偏移量410处的异常处理器指针"
    "Unwind_18090b4f0:ResetExceptionHandlerPointer418:重置偏移量418处的异常处理器指针"
    "Unwind_18090b510:ResetExceptionHandlerPointer420:重置偏移量420处的异常处理器指针"
    "Unwind_18090b530:ResetExceptionHandlerPointer428:重置偏移量428处的异常处理器指针"
    "Unwind_18090b550:ResetExceptionHandlerPointer430:重置偏移量430处的异常处理器指针"
    "Unwind_18090b570:ResetExceptionHandlerPointer438:重置偏移量438处的异常处理器指针"
)

# 执行批量替换
for function in "${UNWIND_FUNCTIONS[@]}"; do
    IFS=':' read -r original new_name description <<< "$function"
    
    echo "处理函数: $original -> $new_name"
    
    # 替换函数定义
    sed -i "s/void $original(/void $new_name(/g" "$FILE_PATH"
    
    # 在文件末尾添加函数宏定义和注释
    echo "" >> "$FILE_PATH"
    echo "// 原始函数名：$original - $description" >> "$FILE_PATH"
    echo "#define $new_name $original" >> "$FILE_PATH"
done

echo "Unwind函数美化完成！"