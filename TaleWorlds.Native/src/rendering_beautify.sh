#!/bin/bash

# 美化03_rendering.c文件中的变量名
# 这个脚本将根据上下文语义为变量起更合适的名字

# 备份文件
cp 03_rendering.c 03_rendering.c.backup

# 使用sed进行变量名替换
sed -i 's/UNK_1804519b0/VertexLayoutDescriptor/g' 03_rendering.c
sed -i 's/UNK_180451c70/VertexAttributePointerState/g' 03_rendering.c
sed -i 's/UNK_180451c80/VertexAttributeArrayState/g' 03_rendering.c
sed -i 's/UNK_180451c90/VertexAttributeArrayControl/g' 03_rendering.c
sed -i 's/UNK_180452530/VertexBufferDescriptor/g' 03_rendering.c

echo "变量美化完成"