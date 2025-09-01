#!/bin/bash

# 批量替换 undefined 变量为合适的类型
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 函数指针类型的变量
sed -i 's/undefined \([A-Za-z]*FunctionPointer\)/void* \1/g' 04_ui_system.c

# 数据指针类型的变量
sed -i 's/undefined \([A-Za-z]*DataPointer\)/void* \1/g' 04_ui_system.c
sed -i 's/undefined \([A-Za-z]*Pointer\)/void* \1/g' 04_ui_system.c

# 表类型的变量
sed -i 's/undefined \([A-Za-z]*Table\)/void* \1/g' 04_ui_system.c

# 标志类型的变量
sed -i 's/undefined \([A-Za-z]*Flag\)/uint8_t \1/g' 04_ui_system.c
sed -i 's/undefined \([A-Za-z]*Status\)/uint8_t \1/g' 04_ui_system.c

# 缓冲区类型的变量
sed -i 's/undefined \([A-Za-z]*Buffer\)/void* \1/g' 04_ui_system.c

# 管理器类型的变量
sed -i 's/undefined \([A-Za-z]*Manager\)/void* \1/g' 04_ui_system.c

# 系统类型的变量
sed -i 's/undefined \([A-Za-z]*System\)/void* \1/g' 04_ui_system.c

echo "批量替换完成"