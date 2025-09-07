#!/bin/bash

# 美化99_unmatched_functions.c文件中的变量名
# 这个脚本将替换一些常见的非语义化变量名为语义化名称

# 定义替换规则
declare -A replacements=(
    # 堆栈变量替换
    ["uStack_"]="UnsignedStack"
    ["alStack_"]="LongArrayStack"
    ["puStack_"]="PointerStack"
    ["pcStack_"]="CodePointer"
    ["piStack_"]="IntPtrStack"
    ["lStack_"]="LongStack"
    ["bStack_"]="ByteStack"
    ["fStack_"]="FloatStack"
    ["dStack_"]="DoubleStack"
    ["sStack_"]="ShortStack"
    ["cStack_"]="CharStack"
    ["iStack_"]="IntStack"
    ["Stack_"]="StackValue"
    
    # 通用变量替换
    ["local_"]="LocalVar"
    ["param_"]="Parameter"
    ["var_"]="Variable"
    ["temp_"]="Temporary"
    ["buf_"]="Buffer"
    ["ptr_"]="Pointer"
    ["arr_"]="Array"
    ["str_"]="String"
    ["cnt_"]="Counter"
    ["idx_"]="Index"
    ["len_"]="Length"
    ["size_"]="Size"
    ["flag_"]="Flag"
    ["status_"]="Status"
    ["result_"]="Result"
    ["value_"]="Value"
    ["data_"]="Data"
    ["ctx_"]="Context"
    ["handle_"]="Handle"
    ["offset_"]="Offset"
    ["address_"]="Address"
    ["memory_"]="Memory"
    ["buffer_"]="Buffer"
    ["pointer_"]="Pointer"
    ["register_"]="Register"
    ["stack_"]="Stack"
    ["heap_"]="Heap"
    ["node_"]="Node"
    ["list_"]="List"
    ["table_"]="Table"
    ["array_"]="Array"
    ["map_"]="Map"
    ["set_"]="Set"
    ["queue_"]="Queue"
    ["stack_"]="Stack"
)

# 获取脚本所在目录
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
TARGET_FILE="$SCRIPT_DIR/../99_unmatched_functions.c"

# 检查目标文件是否存在
if [ ! -f "$TARGET_FILE" ]; then
    echo "错误: 目标文件不存在: $TARGET_FILE"
    exit 1
fi

# 创建备份
cp "$TARGET_FILE" "$TARGET_FILE.backup"

# 执行替换
for pattern in "${!replacements[@]}"; do
    replacement="${replacements[$pattern]}"
    
    # 使用sed进行替换，只替换变量名（单词边界）
    sed -i "s/\b${pattern}\([0-9a-fA-F_]\+\b\)/${replacement}\1/g" "$TARGET_FILE"
    
    echo "已替换: $pattern -> $replacement"
done

echo "变量名美化完成！"