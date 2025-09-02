#!/bin/bash

# 美化网络模块中的标签名
# 将LAB_18086cfc1替换为NetworkConnectionLabel1
# 将LAB_18086cfd2替换为NetworkConnectionLabel2

sed -i 's/LAB_18086cfc1/NetworkConnectionLabel1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/LAB_18086cfd2/NetworkConnectionLabel2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "标签美化完成"