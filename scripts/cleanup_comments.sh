#!/bin/bash

# 清理冗余注释脚本
# 删除无用的函数声明注释和其他冗余注释

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 删除函数声明注释
sed -i '/^\/\/ function:.*;$/d' "$INPUT_FILE"

# 删除开始和结束标记注释
sed -i '/^\/\/ start:/d' "$INPUT_FILE"
sed -i '/^\/\/ end:/d' "$INPUT_FILE"

# 删除WARNING注释（但保留重要的警告信息）
sed -i '/^\/\/ WARNING: Subroutine does not return$/d' "$INPUT_FILE"

# 删除空行过多的情况（将连续3个以上空行减少为2个）
sed -i '/^$/N;/^\n$/N;/^\n\n$/d' "$INPUT_FILE"

echo "冗余注释清理完成"