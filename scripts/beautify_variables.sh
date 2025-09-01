#!/bin/bash

# 变量名美化脚本
# 用于批量替换01_initialization.c中的变量名

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原始文件
cp 01_initialization.c 01_initialization.c.bak

# 美化全局数据备份指针变量
sed -i 's/system_global_data_pointer_backupad/system_global_data_backup_array[13]/g' 01_initialization.c
sed -i 's/system_global_data_pointer_backupae/system_global_data_backup_array[14]/g' 01_initialization.c
sed -i 's/system_global_data_pointer_backupaf/system_global_data_backup_array[15]/g' 01_initialization.c
sed -i 's/system_global_data_pointer_backupag/system_global_data_backup_array[16]/g' 01_initialization.c
sed -i 's/system_global_data_pointer_backupah/system_global_data_backup_array[17]/g' 01_initialization.c
sed -i 's/system_global_data_pointer_backupai/system_global_data_backup_array[18]/g' 01_initialization.c
sed -i 's/system_global_data_pointer_backupaj/system_global_data_backup_array[19]/g' 01_initialization.c
sed -i 's/system_global_data_pointer_backupak/system_global_data_backup_array[20]/g' 01_initialization.c
sed -i 's/system_global_data_pointer_backupal/system_global_data_backup_array[21]/g' 01_initialization.c
sed -i 's/system_global_data_pointer_backupam/system_global_data_backup_array[22]/g' 01_initialization.c
sed -i 's/system_global_data_pointer_backupan/system_global_data_backup_array[23]/g' 01_initialization.c
sed -i 's/system_global_data_pointer_backupao/system_global_data_backup_array[24]/g' 01_initialization.c
sed -i 's/system_global_data_pointer_backupap/system_global_data_backup_array[25]/g' 01_initialization.c
sed -i 's/system_global_data_pointer_backupaq/system_global_data_backup_array[26]/g' 01_initialization.c
sed -i 's/system_global_data_pointer_backupar/system_global_data_backup_array[27]/g' 01_initialization.c
sed -i 's/system_global_data_pointer_backupas/system_global_data_backup_array[28]/g' 01_initialization.c
sed -i 's/system_global_data_pointer_backupat/system_global_data_backup_array[29]/g' 01_initialization.c

# 美化资源指针变量
sed -i 's/system_resource_ptr_e/system_resource_extended_ptr_e/g' 01_initialization.c
sed -i 's/system_resource_ptr_f/system_resource_extended_ptr_f/g' 01_initialization.c
sed -i 's/system_resource_ptr_g/system_resource_extended_ptr_g/g' 01_initialization.c
sed -i 's/system_resource_ptr_h/system_resource_extended_ptr_h/g' 01_initialization.c
sed -i 's/system_resource_ptr_i/system_resource_extended_ptr_i/g' 01_initialization.c
sed -i 's/system_resource_ptr_j/system_resource_extended_ptr_j/g' 01_initialization.c

# 美化图形系统变量
sed -i 's/system_graphics_system_ptr_vara/system_graphics_extended_ptr_a/g' 01_initialization.c
sed -i 's/system_graphics_system_ptr_varb/system_graphics_extended_ptr_b/g' 01_initialization.c
sed -i 's/system_graphics_system_ptr_varc/system_graphics_extended_ptr_c/g' 01_initialization.c
sed -i 's/system_graphics_system_ptr_vard/system_graphics_extended_ptr_d/g' 01_initialization.c
sed -i 's/system_graphics_system_ptr_vare/system_graphics_extended_ptr_e/g' 01_initialization.c
sed -i 's/system_graphics_system_ptr_varf/system_graphics_extended_ptr_f/g' 01_initialization.c
sed -i 's/system_graphics_system_ptr_varg/system_graphics_extended_ptr_g/g' 01_initialization.c
sed -i 's/system_graphics_system_ptr_varh/system_graphics_extended_ptr_h/g' 01_initialization.c
sed -i 's/system_graphics_system_ptr_vari/system_graphics_extended_ptr_i/g' 01_initialization.c
sed -i 's/system_graphics_system_ptr_varj/system_graphics_extended_ptr_j/g' 01_initialization.c
sed -i 's/system_graphics_system_ptr_vark/system_graphics_extended_ptr_k/g' 01_initialization.c
sed -i 's/system_graphics_system_ptr_varl/system_graphics_extended_ptr_l/g' 01_initialization.c
sed -i 's/system_graphics_system_ptr_varm/system_graphics_extended_ptr_m/g' 01_initialization.c
sed -i 's/system_graphics_system_ptr_varn/system_graphics_extended_ptr_n/g' 01_initialization.c
sed -i 's/system_graphics_system_ptr_varo/system_graphics_extended_ptr_o/g' 01_initialization.c
sed -i 's/system_graphics_system_ptr_varp/system_graphics_extended_ptr_p/g' 01_initialization.c
sed -i 's/system_graphics_system_ptr_varq/system_graphics_extended_ptr_q/g' 01_initialization.c

echo "变量名美化完成"