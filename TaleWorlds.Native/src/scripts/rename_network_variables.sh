#!/bin/bash

# 创建一个脚本来批量重命名变量名
# 注意：这是一个临时脚本，执行完成后将被删除

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换 NetworkParameterBufferB0 为 NetworkParameterPrimary
sed -i 's/NetworkParameterBufferB0/NetworkParameterPrimary/g' 05_networking.c

# 替换 NetworkParameterBufferB8 为 NetworkParameterSecondary  
sed -i 's/NetworkParameterBufferB8/NetworkParameterSecondary/g' 05_networking.c

# 替换 NetworkNetworkParameterBufferB8 为 NetworkParameterTertiary
sed -i 's/NetworkNetworkParameterBufferB8/NetworkParameterTertiary/g' 05_networking.c

echo "变量名替换完成"