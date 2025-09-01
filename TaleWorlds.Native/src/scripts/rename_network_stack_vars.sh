#!/bin/bash

# 批量重命名网络堆栈变量
# 这个脚本用于将anetworkStack开头的变量重命名为语义化的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建临时文件
temp_file="temp_networking_rename.c"
cp 05_networking.c "$temp_file"

# 重命名anetworkStack变量为NetworkStackBuffer
sed -i 's/anetworkStack148/NetworkStackBuffer148/g' "$temp_file"
sed -i 's/anetworkStack188/NetworkStackBuffer188/g' "$temp_file"
sed -i 's/anetworkStackC8/NetworkStackBufferC8/g' "$temp_file"
sed -i 's/anetworkStack108/NetworkStackBuffer108/g' "$temp_file"
sed -i 's/anetworkStack140/NetworkStackBuffer140/g' "$temp_file"
sed -i 's/anetworkStack100/NetworkStackBuffer100/g' "$temp_file"
sed -i 's/anetworkStackC0/NetworkStackBufferC0/g' "$temp_file"
sed -i 's/anetworkStack18/NetworkStackBuffer18/g' "$temp_file"
sed -i 's/anetworkStack14/NetworkStackBuffer14/g' "$temp_file"

# 替换原文件
mv "$temp_file" 05_networking.c

echo "网络堆栈变量重命名完成"