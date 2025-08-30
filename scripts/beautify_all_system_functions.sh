#!/bin/bash

# 批量美化SystemFunction变量名
# 将SystemFunction_xxxxx替换为SystemHandler_xxxxx的通用形式

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 获取所有唯一的SystemFunction名称
grep -o "SystemFunction_[0-9a-f]*" 99_unmatched_functions.c | sort | uniq | while read func; do
    # 提取十六进制部分
    hex_part=$(echo "$func" | sed 's/SystemFunction_//')
    # 创建新的名称
    new_name="SystemHandler_$hex_part"
    # 执行替换
    sed -i "s/$func/$new_name/g" 99_unmatched_functions.c
done

echo "SystemFunction变量名批量美化完成"