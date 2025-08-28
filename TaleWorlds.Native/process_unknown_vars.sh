#!/bin/bash

# 处理 unknown_var 标记的脚本
# 将 unknown_var_*_ptr 替换为有意义的变量名

echo "开始处理 unknown_var 标记..."

# 处理 02_core_engine_part010.c 文件
echo "处理 02_core_engine_part010.c..."

# 根据上下文替换 unknown_var 标记
sed -i 's/unknown_var_336_ptr/system_config_data_ptr/g' pretty/02_core_engine_part010.c
sed -i 's/unknown_var_544_ptr/system_string_data_ptr/g' pretty/02_core_engine_part010.c
sed -i 's/unknown_var_616_ptr/system_buffer_data_ptr/g' pretty/02_core_engine_part010.c
sed -i 's/unknown_var_672_ptr/system_context_ptr/g' pretty/02_core_engine_part010.c
sed -i 's/unknown_var_1200_ptr/system_memory_ptr/g' pretty/02_core_engine_part010.c
sed -i 's/unknown_var_2272_ptr/system_param1_ptr/g' pretty/02_core_engine_part010.c
sed -i 's/unknown_var_2256_ptr/system_param2_ptr/g' pretty/02_core_engine_part010.c
sed -i 's/unknown_var_2296_ptr/system_param3_ptr/g' pretty/02_core_engine_part010.c
sed -i 's/unknown_var_2640_ptr/system_param4_ptr/g' pretty/02_core_engine_part010.c
sed -i 's/unknown_var_3136_ptr/system_param5_ptr/g' pretty/02_core_engine_part010.c
sed -i 's/unknown_var_3480_ptr/system_param6_ptr/g' pretty/02_core_engine_part010.c
sed -i 's/unknown_var_5120_ptr/system_param7_ptr/g' pretty/02_core_engine_part010.c

# 处理 01_initialization_part019.c 文件
echo "处理 01_initialization_part019.c..."

# 根据上下文替换 unknown_var 标记
sed -i 's/unknown_var_5748_ptr/init_system_param1_ptr/g' pretty/01_initialization_part019.c
sed -i 's/unknown_var_5776_ptr/init_system_param2_ptr/g' pretty/01_initialization_part019.c
sed -i 's/unknown_var_2640_ptr/init_system_param3_ptr/g' pretty/01_initialization_part019.c

echo "unknown_var 标记处理完成。"

# 验证处理结果
echo "验证处理结果..."
grep -n "unknown_var" pretty/02_core_engine_part010.c | head -5
grep -n "unknown_var" pretty/01_initialization_part019.c | head -5

echo "脚本执行完成。"