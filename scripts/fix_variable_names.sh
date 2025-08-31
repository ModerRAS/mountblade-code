#!/bin/bash

# 修复变量名错误的脚本
# 将 network_configuration_datauration_data 替换为 network_configuration_data

sed -i 's/network_configuration_datauration_data/network_configuration_data/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "变量名修复完成"