#!/bin/bash

# 最终完整的变量替换脚本
# 处理所有剩余的unknown_var变量

echo "开始最终完整的变量替换..."

# 创建完整的变量映射文件
cat > final_var_mapping.txt << 'EOF'
# 系统核心变量
unknown_var_0_ptr system_main_data_ptr
unknown_var_1_ptr system_control_ptr
unknown_var_2_ptr system_state_ptr
unknown_var_3_ptr system_config_ptr
unknown_var_4_ptr system_memory_ptr
unknown_var_5_ptr rendering_system_config_ptr
unknown_var_6_ptr rendering_param0_ptr
unknown_var_7_ptr rendering_param1_ptr
unknown_var_8_ptr rendering_param2_ptr
unknown_var_9_ptr rendering_param3_ptr
unknown_var_10_ptr core_data_table_ptr
unknown_var_11_ptr core_state_data_ptr
unknown_var_12_ptr core_config_data_ptr
unknown_var_13_ptr core_memory_data_ptr
unknown_var_14_ptr core_control_data_ptr
unknown_var_15_ptr rendering_data_buffer_ptr
unknown_var_16_ptr rendering_texture_data_ptr
unknown_var_17_ptr rendering_shader_data_ptr
unknown_var_18_ptr rendering_pipeline_data_ptr
unknown_var_19_ptr rendering_state_data_ptr

# 简单变量名替换
unknown_var_1584 rendering_main_control
unknown_var_1688 rendering_state_manager
unknown_var_1664 rendering_config_var
unknown_var_9840 rendering_device_handle
unknown_var_1632 rendering_memory_manager
unknown_var_1736 rendering_texture_manager
unknown_var_1752 rendering_shader_manager
unknown_var_1280 rendering_buffer_manager
unknown_var_7056 rendering_pipeline_manager
unknown_var_7088 rendering_state_manager

# 更多变量映射
unknown_var_100_ptr system_buffer_ptr
unknown_var_101_ptr system_texture_ptr
unknown_var_102_ptr system_shader_ptr
unknown_var_103_ptr system_pipeline_ptr
unknown_var_104_ptr system_state_ptr
unknown_var_105_ptr system_config_ptr
unknown_var_106_ptr system_data_ptr
unknown_var_107_ptr system_control_ptr
unknown_var_108_ptr system_memory_ptr
unknown_var_109_ptr system_handle_ptr

# 渲染专用变量
unknown_var_200_ptr render_target_ptr
unknown_var_201_ptr render_buffer_ptr
unknown_var_202_ptr render_texture_ptr
unknown_var_203_ptr render_shader_ptr
unknown_var_204_ptr render_pipeline_ptr
unknown_var_205_ptr render_state_ptr
unknown_var_206_ptr render_config_ptr
unknown_var_207_ptr render_data_ptr
unknown_var_208_ptr render_control_ptr
unknown_var_209_ptr render_memory_ptr

# 网络系统变量
unknown_var_300_ptr network_config_ptr
unknown_var_301_ptr network_state_ptr
unknown_var_302_ptr network_data_ptr
unknown_var_303_ptr network_buffer_ptr
unknown_var_304_ptr network_connection_ptr

# UI系统变量
unknown_var_400_ptr ui_config_ptr
unknown_var_401_ptr ui_state_ptr
unknown_var_402_ptr ui_data_ptr
unknown_var_403_ptr ui_buffer_ptr
unknown_var_404_ptr ui_control_ptr

# 输入系统变量
unknown_var_500_ptr input_config_ptr
unknown_var_501_ptr input_state_ptr
unknown_var_502_ptr input_data_ptr
unknown_var_503_ptr input_buffer_ptr
unknown_var_504_ptr input_control_ptr

# 音频系统变量
unknown_var_600_ptr audio_config_ptr
unknown_var_601_ptr audio_state_ptr
unknown_var_602_ptr audio_data_ptr
unknown_var_603_ptr audio_buffer_ptr
unknown_var_604_ptr audio_control_ptr

# 物理系统变量
unknown_var_700_ptr physics_config_ptr
unknown_var_701_ptr physics_state_ptr
unknown_var_702_ptr physics_data_ptr
unknown_var_703_ptr physics_buffer_ptr
unknown_var_704_ptr physics_control_ptr

# 动画系统变量
unknown_var_800_ptr animation_config_ptr
unknown_var_801_ptr animation_state_ptr
unknown_var_802_ptr animation_data_ptr
unknown_var_803_ptr animation_buffer_ptr
unknown_var_804_ptr animation_control_ptr

# 资源系统变量
unknown_var_900_ptr resource_config_ptr
unknown_var_901_ptr resource_state_ptr
unknown_var_902_ptr resource_data_ptr
unknown_var_903_ptr resource_buffer_ptr
unknown_var_904_ptr resource_control_ptr

# 脚本系统变量
unknown_var_1000_ptr script_config_ptr
unknown_var_1001_ptr script_state_ptr
unknown_var_1002_ptr script_data_ptr
unknown_var_1003_ptr script_buffer_ptr
unknown_var_1004_ptr script_control_ptr
EOF

# 创建处理函数
cat > final_process.sh << 'EOF'
#!/bin/bash

# 处理单个文件
process_file() {
    local file="$1"
    local changed=0
    
    # 检查文件是否包含unknown_var
    if grep -q "unknown_var_" "$file"; then
        # 读取变量映射并处理
        while IFS=' ' read -r old_var new_var; do
            # 跳过注释行
            if [[ "$old_var" == \#* ]]; then
                continue
            fi
            
            # 执行替换
            if sed -i "s/$old_var/$new_var/g" "$file" 2>/dev/null; then
                changed=1
            fi
        done < final_var_mapping.txt
        
        if [ $changed -eq 1 ]; then
            echo "已处理: $file"
        fi
    fi
}

export -f process_file

# 处理所有文件
find pretty/ -name "*.c" | xargs -P 16 -I {} bash -c 'process_file "$@"' _ {}
EOF

# 执行处理
chmod +x final_process.sh
./final_process.sh

# 清理临时文件
rm -f final_var_mapping.txt final_process.sh

echo "最终变量替换完成"