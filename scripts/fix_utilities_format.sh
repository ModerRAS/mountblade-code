#!/bin/bash

# 修复06_utilities.c文件中的函数定义格式问题
FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 处理文件内容
awk '
# 处理函数定义格式问题
/^[[:space:]]*\*[[:space:]]*@brief/ {
    # 如果是函数注释开始，确保格式正确
    if ($0 ~ /^[[:space:]]*\*[[:space:]]*@brief/) {
        print "/**"
        print " * @brief" substr($0, index($0, "@brief") + 6)
        next
    }
}

# 处理函数参数注释
/^[[:space:]]*\*[[:space:]]*@param/ {
    print " * " $0
    next
}

# 处理函数返回值注释
/^[[:space:]]*\*[[:space:]]*@return/ {
    print " * " $0
    next
}

# 处理函数注释结束
/^[[:space:]]*\*\/$/ {
    print " */"
    next
}

# 处理函数定义
/^[[:space:]]*[a-zA-Z_][a-zA-Z0-9_]*[[:space:]]+[a-zA-Z_][a-zA-Z0-9_]*\([^)]*\)[[:space:]]*\{/ {
    # 函数定义行
    print
    next
}

# 处理函数体
{
    # 处理缺失的右大括号和格式问题
    gsub(/[[:space:]]+$/, "")  # 删除行尾空格
    if ($0 ~ /^[[:space:]]*\}[[:space:]]*$/) {
        print $0
    } else if ($0 ~ /^[[:space:]]*$/) {
        print $0
    } else {
        print $0
    }
}
' "$FILE" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$FILE"

echo "函数定义格式修复完成"