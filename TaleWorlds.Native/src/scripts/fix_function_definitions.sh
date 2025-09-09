#!/bin/bash

# 批量修复03_rendering.c文件中的函数定义

# 定义文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 创建临时文件
TEMP_FILE="/tmp/rendering_fixed.c"

# 处理函数：将数字开头的函数定义行移除，保留正确的函数定义
process_function_definitions() {
    # 使用sed处理文件
    sed -n '
    # 如果是数字开头的函数定义行，跳过它
    /^[0-9]\+([^)]*)$/ {
        # 读取下一行，看看是否是注释开始
        n
        # 如果是注释开始，保留注释和函数定义
        /^\/\*\*$/ {
            # 保留当前行和后续所有行，直到函数定义结束
            :loop
            p
            n
            /^void [^(]*(.*)$/!b loop
            p
            # 继续处理剩余行
            n
            b
        }
        # 如果不是注释开始，跳过这一行
        b
    }
    # 对于所有其他行，直接输出
    p
    ' "$FILE_PATH" > "$TEMP_FILE"
    
    # 替换原文件
    mv "$TEMP_FILE" "$FILE_PATH"
}

# 执行处理
process_function_definitions

echo "函数定义修复完成"