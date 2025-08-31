#!/bin/bash

# 01_initialization.c 文件语义化美化脚本
# 用于将非语义化的函数名和数据名替换为语义化名称

echo "开始美化 01_initialization.c 文件..."

# 备份原文件
cp 01_initialization.c 01_initialization.c.backup

# 函数名语义化替换
sed -i 's/FUN_18007bb70/system_initialize_module_a/g' 01_initialization.c
sed -i 's/FUN_18004c030/system_initialize_module_b/g' 01_initialization.c
sed -i 's/FUN_180056e10/system_initialize_module_c/g' 01_initialization.c
sed -i 's/FUN_180051cc0/system_initialize_module_d/g' 01_initialization.c
sed -i 's/FUN_180051d00/system_initialize_module_e/g' 01_initialization.c
sed -i 's/FUN_1800596a0/system_initialize_module_f/g' 01_initialization.c

# 数据名语义化替换
sed -i 's/DAT_180c8aa00/system_global_data_ptr_aa/g' 01_initialization.c
sed -i 's/DAT_180d49158/system_global_data_ptr_ab/g' 01_initialization.c
sed -i 's/DAT_18098c090/system_global_data_ptr_ac/g' 01_initialization.c
sed -i 's/DAT_180d49288/system_global_data_ptr_ad/g' 01_initialization.c
sed -i 's/DAT_180d49290/system_global_data_ptr_ae/g' 01_initialization.c
sed -i 's/DAT_180d49298/system_global_data_ptr_af/g' 01_initialization.c
sed -i 's/DAT_180d492a0/system_global_data_ptr_ag/g' 01_initialization.c
sed -i 's/DAT_180d492a8/system_global_data_ptr_ah/g' 01_initialization.c
sed -i 's/DAT_180d492e8/system_global_data_ptr_ai/g' 01_initialization.c
sed -i 's/DAT_180d492f0/system_global_data_ptr_aj/g' 01_initialization.c
sed -i 's/DAT_180d492f8/system_global_data_ptr_ak/g' 01_initialization.c
sed -i 's/DAT_180d49300/system_global_data_ptr_al/g' 01_initialization.c
sed -i 's/DAT_180d49340/system_global_data_ptr_am/g' 01_initialization.c

echo "美化完成！"
echo "请检查替换结果，然后删除备份文件。"