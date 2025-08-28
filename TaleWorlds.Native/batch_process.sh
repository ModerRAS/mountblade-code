#!/bin/bash

# 批量处理FUN_函数的脚本

SCRIPT_DIR="/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native"
PYTHON_SCRIPT="$SCRIPT_DIR/process_fun_functions.py"

cd "$SCRIPT_DIR"

# 处理所有需要处理的文件
echo "开始批量处理FUN_函数..."

# 这里可以添加具体的文件列表
for file in $@; do
    if [ -f "$file" ]; then
        echo "处理文件: $file"
        python3 "$PYTHON_SCRIPT" "$file"
    else
        echo "警告：文件不存在: $file"
    fi
done

echo "批量处理完成"
