#!/bin/bash

# 网络系统代码美化脚本 - 变量名语义化替换
# 原本实现：完全重构网络系统变量命名体系，重新设计所有变量名的语义化规范
# 简化实现：仅将含义不明确的变量名替换为语义化名称，保持原有代码结构和功能不变

# 定义变量替换映射
declare -A replacements=(
    # XMM寄存器相关变量
    ["network_xmm_register_qword_primary_00"]="network_xmm_register_qword_data_0"
    ["network_xmm_register_qword_primary_01"]="network_xmm_register_qword_data_1"
    ["network_xmm_register_qword_primary_02"]="network_xmm_register_qword_data_2"
    ["network_xmm_register_qword_primary_03"]="network_xmm_register_qword_data_3"
    ["network_xmm_register_qword_primary_04"]="network_xmm_register_qword_data_4"
    ["network_xmm_register_qword_primary_05"]="network_xmm_register_qword_data_5"
    ["network_xmm_register_qword_primary_06"]="network_xmm_register_qword_data_6"
    
    # 握手寄存器相关变量
    ["network_xmm_register_handshake_00"]="network_xmm_register_handshake_initial"
    ["network_xmm_register_handshake_01"]="network_xmm_register_handshake_response"
    ["network_xmm_register_handshake_02"]="network_xmm_register_handshake_ack"
    ["network_xmm_reg_handshake_03"]="network_xmm_register_handshake_verify"
    ["network_xmm_register_handshake_04"]="network_xmm_register_handshake_complete"
    ["network_xmm_register_handshake_05"]="network_xmm_register_handshake_final"
    ["network_xmm_register_handshake_06"]="network_xmm_register_handshake_confirm"
    
    # 布尔标志变量
    ["network_bool_flag_1"]="network_bool_flag_first"
    ["network_bool_flag_2"]="network_bool_flag_second"
    ["network_bool_flag_3"]="network_bool_flag_third"
    ["network_bool_flag_4"]="network_bool_flag_fourth"
    ["network_bool_flag_5"]="network_bool_flag_fifth"
    ["network_bool_flag_6"]="network_bool_flag_sixth"
    ["network_bool_flag_7"]="network_bool_flag_seventh"
    ["network_bool_flag_8"]="network_bool_flag_eighth"
    
    # 浮点数栈变量
    ["network_float_stack_neg_140"]="network_float_stack_buffer_140"
    ["network_float_stack_neg_130"]="network_float_stack_buffer_130"
    ["network_float_stack_neg_128"]="network_float_stack_buffer_128"
    
    # 栈偏移变量
    ["network_stack_int_offset_40"]="network_stack_int_buffer_offset_40"
)

# 遍历所有替换映射
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    echo "替换: $old_name -> $new_name"
    
    # 使用sed进行替换
    sed -i "s/\b$old_name\b/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
done

echo "变量名语义化替换完成"