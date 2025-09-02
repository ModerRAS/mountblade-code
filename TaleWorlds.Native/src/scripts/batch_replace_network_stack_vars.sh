#!/bin/bash

# 批量替换网络模块中的栈变量名

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换栈变量名为更有意义的名称
sed -i 's/&stack0x00000008/&networkSecurityStackBuffer/g' 05_networking.c
sed -i 's/&stack0x00000018/&networkPacketStackBuffer/g' 05_networking.c
sed -i 's/&stack0x00000090/&networkConnectionStackBuffer/g' 05_networking.c
sed -i 's/&stack0x00000094/&networkConnectionSecondaryBuffer/g' 05_networking.c
sed -i 's/&stack0x00000088/&networkDataStackBuffer/g' 05_networking.c
sed -i 's/&stack0x000000b8/&networkTransferStackBuffer/g' 05_networking.c
sed -i 's/&stack0x000000b0/&networkContextStackBuffer/g' 05_networking.c

echo "栈变量替换完成"