#!/bin/bash

# 美化更多函数名的脚本
# 用于替换 00_data_definitions.h 中更多的函数名

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份
cp 00_data_definitions.h 00_data_definitions.h.backup2

# 定义更多函数映射
declare -A function_mapping=(
    # 回调函数
    ["FUN_1809418e0"]="callback_function_018"
    ["FUN_180941900"]="callback_function_019"
    ["FUN_180941980"]="callback_function_020"
    ["FUN_1809419a0"]="callback_function_021"
    ["FUN_1809419c0"]="callback_function_022"
    ["FUN_180941b90"]="callback_function_023"
    ["FUN_180941bb0"]="callback_function_024"
    ["FUN_180941bd0"]="callback_function_025"
    ["FUN_180941d00"]="callback_function_026"
    ["FUN_180941d20"]="callback_function_027"
    ["FUN_180941f00"]="callback_function_028"
    ["FUN_180941f20"]="callback_function_029"
    ["FUN_180941f40"]="callback_function_030"
    ["FUN_180941f60"]="callback_function_031"
    ["FUN_180941f80"]="callback_function_032"
    ["FUN_180941fa0"]="callback_function_033"
    ["FUN_180941fc0"]="callback_function_034"
    ["FUN_180941fe0"]="callback_function_035"
    ["FUN_180942000"]="callback_function_036"
    ["FUN_180942020"]="callback_function_037"
    ["FUN_180942040"]="callback_function_038"
    ["FUN_180942060"]="callback_function_039"
    ["FUN_180942080"]="callback_function_040"
    ["FUN_1809420a0"]="callback_function_041"
    ["FUN_1809420c0"]="callback_function_042"
    ["FUN_1809420e0"]="callback_function_043"
    ["FUN_180942100"]="callback_function_044"
    ["FUN_180942120"]="callback_function_045"
    ["FUN_180942140"]="callback_function_046"
    ["FUN_180942160"]="callback_function_047"
    ["FUN_180942180"]="callback_function_048"
    ["FUN_1809421a0"]="callback_function_049"
    ["FUN_1809421c0"]="callback_function_050"
    ["FUN_1809421e0"]="callback_function_051"
    ["FUN_180942200"]="callback_function_052"
    ["FUN_180942220"]="callback_function_053"
    ["FUN_180942240"]="callback_function_054"
    ["FUN_180942260"]="callback_function_055"
    ["FUN_180942280"]="callback_function_056"
    ["FUN_1809422a0"]="callback_function_057"
    ["FUN_1809422c0"]="callback_function_058"
    ["FUN_1809422e0"]="callback_function_059"
    ["FUN_180942300"]="callback_function_060"
    ["FUN_180942320"]="callback_function_061"
    ["FUN_180942340"]="callback_function_062"
    ["FUN_180942360"]="callback_function_063"
    ["FUN_180942380"]="callback_function_064"
    ["FUN_1809423a0"]="callback_function_065"
    ["FUN_1809423c0"]="callback_function_066"
    ["FUN_1809423e0"]="callback_function_067"
    ["FUN_180942400"]="callback_function_068"
    ["FUN_180942420"]="callback_function_069"
    ["FUN_180942440"]="callback_function_070"
    ["FUN_180942460"]="callback_function_071"
    ["FUN_180942480"]="callback_function_072"
    ["FUN_1809424a0"]="callback_function_073"
    ["FUN_1809424c0"]="callback_function_074"
    ["FUN_180942520"]="callback_function_075"
    ["FUN_180942580"]="callback_function_076"
    ["FUN_1809425e0"]="callback_function_077"
    ["FUN_180942660"]="callback_function_078"
    ["FUN_180942750"]="callback_function_079"
    ["FUN_180942790"]="callback_function_080"
    ["FUN_1809427d0"]="callback_function_081"
    ["FUN_1809427f0"]="callback_function_082"
    ["FUN_180942810"]="callback_function_083"
    ["FUN_180942a60"]="callback_function_084"
    ["FUN_180942a80"]="callback_function_085"
    ["FUN_180942fa0"]="callback_function_086"
    ["FUN_180942fc0"]="callback_function_087"
)

# 执行替换
for old_name in "${!function_mapping[@]}"; do
    new_name="${function_mapping[$old_name]}"
    echo "替换 $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" 00_data_definitions.h
done

echo "更多函数名替换完成"