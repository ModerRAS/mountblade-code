#!/bin/bash

# 创建脚本用于批量替换callback_function名称
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原始文件
cp 00_data_definitions.h 00_data_definitions.h.backup

# 定义函数名映射
declare -A function_map=(
    ["callback_function_020"]="config_string_buffer_init_function"
    ["callback_function_021"]="savegame_string_buffer_init_function"
    ["callback_function_022"]="main_mutex_init_function"
    ["callback_function_023"]="data_buffer_system_init_function"
    ["callback_function_024"]="resource_manager_1_init_function"
    ["callback_function_025"]="resource_manager_2_init_function"
    ["callback_function_026"]="resource_manager_3_init_function"
    ["callback_function_027"]="resource_manager_4_init_function"
    ["callback_function_028"]="resource_manager_5_init_function"
    ["callback_function_029"]="resource_manager_6_init_function"
    ["callback_function_030"]="resource_manager_7_init_function"
    ["callback_function_031"]="resource_manager_8_init_function"
    ["callback_function_032"]="resource_manager_9_init_function"
    ["callback_function_033"]="resource_manager_10_init_function"
    ["callback_function_034"]="resource_manager_11_init_function"
    ["callback_function_035"]="resource_manager_12_init_function"
    ["callback_function_036"]="resource_manager_13_init_function"
    ["callback_function_037"]="resource_manager_14_init_function"
    ["callback_function_038"]="resource_manager_15_init_function"
    ["callback_function_039"]="resource_manager_16_init_function"
    ["callback_function_040"]="resource_manager_17_init_function"
    ["callback_function_041"]="resource_manager_18_init_function"
    ["callback_function_042"]="resource_manager_19_init_function"
    ["callback_function_043"]="resource_manager_20_init_function"
    ["callback_function_044"]="resource_manager_21_init_function"
    ["callback_function_045"]="resource_manager_22_init_function"
    ["callback_function_046"]="resource_manager_23_init_function"
    ["callback_function_047"]="resource_manager_24_init_function"
    ["callback_function_048"]="resource_manager_25_init_function"
    ["callback_function_049"]="resource_manager_26_init_function"
    ["callback_function_050"]="resource_manager_27_init_function"
    ["callback_function_051"]="resource_manager_28_init_function"
    ["callback_function_052"]="resource_manager_29_init_function"
    ["callback_function_053"]="resource_manager_30_init_function"
    ["callback_function_054"]="resource_manager_31_init_function"
    ["callback_function_055"]="resource_manager_32_init_function"
    ["callback_function_056"]="resource_manager_33_init_function"
    ["callback_function_057"]="resource_manager_34_init_function"
    ["callback_function_058"]="resource_manager_35_init_function"
    ["callback_function_059"]="resource_manager_36_init_function"
    ["callback_function_060"]="resource_manager_37_init_function"
    ["callback_function_061"]="resource_manager_38_init_function"
    ["callback_function_062"]="resource_manager_39_init_function"
    ["callback_function_063"]="resource_manager_40_init_function"
    ["callback_function_064"]="resource_manager_41_init_function"
    ["callback_function_065"]="resource_manager_42_init_function"
    ["callback_function_066"]="resource_manager_43_init_function"
    ["callback_function_067"]="resource_manager_44_init_function"
    ["callback_function_068"]="resource_manager_45_init_function"
    ["callback_function_069"]="resource_manager_46_init_function"
    ["callback_function_070"]="resource_manager_47_init_function"
    ["callback_function_071"]="resource_manager_48_init_function"
    ["callback_function_072"]="resource_manager_49_init_function"
    ["callback_function_073"]="resource_manager_50_init_function"
    ["callback_function_074"]="resource_manager_51_init_function"
    ["callback_function_075"]="resource_manager_52_init_function"
    ["callback_function_076"]="resource_manager_53_init_function"
    ["callback_function_077"]="resource_manager_54_init_function"
    ["callback_function_078"]="resource_manager_55_init_function"
    ["callback_function_079"]="resource_manager_56_init_function"
    ["callback_function_080"]="resource_manager_57_init_function"
    ["callback_function_081"]="resource_manager_58_init_function"
    ["callback_function_082"]="resource_manager_59_init_function"
    ["callback_function_083"]="resource_manager_60_init_function"
    ["callback_function_084"]="resource_manager_61_init_function"
    ["callback_function_085"]="resource_manager_62_init_function"
    ["callback_function_086"]="resource_manager_63_init_function"
    ["callback_function_087"]="resource_manager_64_init_function"
)

# 执行替换
for old_name in "${!function_map[@]}"; do
    new_name="${function_map[$old_name]}"
    sed -i "s/$old_name/$new_name/g" 00_data_definitions.h
done

echo "函数名替换完成"