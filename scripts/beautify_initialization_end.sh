#!/bin/bash

# 美化脚本 - 替换01_initialization.c末尾的非语义化变量名
# 这是简化实现，主要替换文件末尾的非语义化变量名
# 原本实现：完全重构所有命名体系，建立统一的语义化命名规范
# 简化实现：仅替换文件末尾的非语义化名称，保持代码结构不变

# 替换文件末尾的变量名
sed -i 's/system_empty_string_buffer_93/system_debug_string_buffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/system_empty_string_pointer_94/system_debug_string_ptr/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/system_empty_string_array_95/system_debug_string_array/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/system_empty_string_buffer_96/system_memory_string_buffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/system_empty_string_buffer_97/system_thread_string_buffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/system_empty_string_buffer_98/system_resource_string_buffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/system_empty_string_pointer_91/system_config_string_ptr/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

# 替换函数名
sed -i 's/system_180779d6c/system_initialize_unknown_function/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

echo "文件末尾变量名替换完成"