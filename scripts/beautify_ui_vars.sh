#!/bin/bash

# UI系统变量美化脚本
# 美化04_ui_system.c文件中的Var变量

# 定义变量映射
declare -A VAR_MAPPING=(
    ["Var111"]="ui_event_id_concat_value_111"
    ["Var115"]="ui_event_id_concat_value_115"
    ["Var119"]="ui_event_id_concat_value_119"
    ["Var124"]="ui_event_id_concat_value_124"
    ["Var142"]="ui_event_id_concat_value_142"
    ["Var146"]="ui_event_id_concat_value_146"
    ["Var150"]="ui_event_id_concat_value_150"
    ["Var22"]="ui_byte_conversion_result_22"
    ["Var24"]="ui_byte_conversion_result_24"
    ["Var29"]="ui_byte_conversion_result_29"
    ["Var34"]="ui_byte_conversion_result_34"
    ["Var39"]="ui_byte_conversion_result_39"
    ["Var20"]="ui_temporary_concat_value_20"
)

# 备份原文件
cp "/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c" "/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c.backup"

# 遍历所有变量映射进行替换
for old_var in "${!VAR_MAPPING[@]}"; do
    new_var="${VAR_MAPPING[$old_var]}"
    echo "替换 $old_var -> $new_var"
    
    # 使用sed进行替换，只替换完整的单词（避免误替换）
    sed -i "s/\b$old_var\b/$new_var/g" "/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
done

echo "UI系统变量美化完成"