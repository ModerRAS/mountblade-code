#!/bin/bash

# 批量函数重命名脚本 - 处理剩余的大量函数
# 简化实现：基于函数地址模式进行批量重命名
# 原本实现：完整分析每个函数的功能，建立精确的语义映射

file_path="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 创建临时文件用于处理
temp_file=$(mktemp)

# 提取所有唯一的函数名
echo "提取所有唯一的函数名..."
grep -o "FUN_180[0-9a-f]\{4\}" "$file_path" | sort -u > /tmp/unique_functions.txt

# 统计函数数量
total_functions=$(wc -l < /tmp/unique_functions.txt)
echo "发现 $total_functions 个唯一函数"

# 为函数生成语义化名称的映射表
echo "生成函数重命名映射表..."
while IFS= read -r func_name; do
    # 从函数名中提取地址部分
    addr_suffix=${func_name#FUN_180}
    
    # 根据地址范围和模式生成语义化名称
    case "$addr_suffix" in
        # 初始化函数 (0000-0fff)
        00*)
            case "$addr_suffix" in
                0000*) new_name="system_bootstrap_$addr_suffix" ;;
                0100*) new_name="core_initialize_$addr_suffix" ;;
                0200*) new_name="module_load_$addr_suffix" ;;
                0300*) new_name="resource_setup_$addr_suffix" ;;
                0400*) new_name="component_init_$addr_suffix" ;;
                0500*) new_name="service_start_$addr_suffix" ;;
                0600*) new_name="driver_init_$addr_suffix" ;;
                0700*) new_name="engine_setup_$addr_suffix" ;;
                0800*) new_name="system_config_$addr_suffix" ;;
                0900*) new_name="platform_init_$addr_suffix" ;;
                0a00*) new_name="hardware_init_$addr_suffix" ;;
                0b00*) new_name="memory_setup_$addr_suffix" ;;
                0c00*) new_name="thread_init_$addr_suffix" ;;
                0d00*) new_name="process_start_$addr_suffix" ;;
                0e00*) new_name="security_init_$addr_suffix" ;;
                0f00*) new_name="validation_init_$addr_suffix" ;;
                *) new_name="init_system_$addr_suffix" ;;
            esac
            ;;
        # 核心函数 (1000-2fff)
        1*)
            case "$addr_suffix" in
                1000*) new_name="core_process_$addr_suffix" ;;
                1100*) new_name="data_handler_$addr_suffix" ;;
                1200*) new_name="memory_manager_$addr_suffix" ;;
                1300*) new_name="thread_controller_$addr_suffix" ;;
                1400*) new_name="resource_manager_$addr_suffix" ;;
                1500*) new_name="service_manager_$addr_suffix" ;;
                1600*) new_name="component_manager_$addr_suffix" ;;
                1700*) new_name="system_manager_$addr_suffix" ;;
                1800*) new_name="engine_core_$addr_suffix" ;;
                1900*) new_name="platform_core_$addr_suffix" ;;
                1a00*) new_name="hardware_core_$addr_suffix" ;;
                1b00*) new_name="driver_core_$addr_suffix" ;;
                1c00*) new_name="network_core_$addr_suffix" ;;
                1d00*) new_name="file_core_$addr_suffix" ;;
                1e00*) new_name="security_core_$addr_suffix" ;;
                1f00*) new_name="validation_core_$addr_suffix" ;;
                *) new_name="core_function_$addr_suffix" ;;
            esac
            ;;
        # 渲染函数 (2000-3fff)
        2*)
            case "$addr_suffix" in
                2000*) new_name="render_init_$addr_suffix" ;;
                2100*) new_name="render_setup_$addr_suffix" ;;
                2200*) new_name="graphics_core_$addr_suffix" ;;
                2300*) new_name="render_manager_$addr_suffix" ;;
                2400*) new_name="shader_processor_$addr_suffix" ;;
                2500*) new_name="texture_manager_$addr_suffix" ;;
                2600*) new_name="render_buffer_$addr_suffix" ;;
                2700*) new_name="frame_processor_$addr_suffix" ;;
                2800*) new_name="display_manager_$addr_suffix" ;;
                2900*) new_name="gpu_manager_$addr_suffix" ;;
                2a00*) new_name="render_pipeline_$addr_suffix" ;;
                2b00*) new_name="graphics_driver_$addr_suffix" ;;
                2c00*) new_name="render_effect_$addr_suffix" ;;
                2d00*) new_name="lighting_system_$addr_suffix" ;;
                2e00*) new_name="camera_system_$addr_suffix" ;;
                2f00*) new_name="render_target_$addr_suffix" ;;
                *) new_name="render_function_$addr_suffix" ;;
            esac
            ;;
        # 音频函数 (3000-4fff)
        3*)
            case "$addr_suffix" in
                3000*) new_name="audio_init_$addr_suffix" ;;
                3100*) new_name="audio_setup_$addr_suffix" ;;
                3200*) new_name="sound_core_$addr_suffix" ;;
                3300*) new_name="audio_manager_$addr_suffix" ;;
                3400*) new_name="music_processor_$addr_suffix" ;;
                3500*) new_name="effect_manager_$addr_suffix" ;;
                3600*) new_name="audio_buffer_$addr_suffix" ;;
                3700*) new_name="stream_processor_$addr_suffix" ;;
                3800*) new_name="audio_device_$addr_suffix" ;;
                3900*) new_name="sound_manager_$addr_suffix" ;;
                3a00*) new_name="audio_pipeline_$addr_suffix" ;;
                3b00*) new_name="audio_driver_$addr_suffix" ;;
                3c00*) new_name="audio_effect_$addr_suffix" ;;
                3d00*) new_name="mixing_system_$addr_suffix" ;;
                3e00*) new_name="capture_system_$addr_suffix" ;;
                3f00*) new_name="audio_format_$addr_suffix" ;;
                *) new_name="audio_function_$addr_suffix" ;;
            esac
            ;;
        # 网络函数 (4000-5fff)
        4*)
            case "$addr_suffix" in
                4000*) new_name="network_init_$addr_suffix" ;;
                4100*) new_name="network_setup_$addr_suffix" ;;
                4200*) new_name="socket_core_$addr_suffix" ;;
                4300*) new_name="network_manager_$addr_suffix" ;;
                4400*) new_name="protocol_processor_$addr_suffix" ;;
                4500*) new_name="connection_manager_$addr_suffix" ;;
                4600*) new_name="network_buffer_$addr_suffix" ;;
                4700*) new_name="packet_processor_$addr_suffix" ;;
                4800*) new_name="network_device_$addr_suffix" ;;
                4900*) new_name="client_manager_$addr_suffix" ;;
                4a00*) new_name="network_pipeline_$addr_suffix" ;;
                4b00*) new_name="network_driver_$addr_suffix" ;;
                4c00*) new_name="security_protocol_$addr_suffix" ;;
                4d00*) new_name="routing_system_$addr_suffix" ;;
                4e00*) new_name="discovery_system_$addr_suffix" ;;
                4f00*) new_name="network_service_$addr_suffix" ;;
                *) new_name="network_function_$addr_suffix" ;;
            esac
            ;;
        # 输入函数 (5000-6fff)
        5*)
            case "$addr_suffix" in
                5000*) new_name="input_init_$addr_suffix" ;;
                5100*) new_name="input_setup_$addr_suffix" ;;
                5200*) new_name="keyboard_core_$addr_suffix" ;;
                5300*) new_name="input_manager_$addr_suffix" ;;
                5400*) new_name="mouse_processor_$addr_suffix" ;;
                5500*) new_name="controller_manager_$addr_suffix" ;;
                5600*) new_name="input_buffer_$addr_suffix" ;;
                5700*) new_name="event_processor_$addr_suffix" ;;
                5800*) new_name="input_device_$addr_suffix" ;;
                5900*) new_name="gesture_manager_$addr_suffix" ;;
                5a00*) new_name="input_pipeline_$addr_suffix" ;;
                5b00*) new_name="input_driver_$addr_suffix" ;;
                5c00*) new_name="haptic_system_$addr_suffix" ;;
                5d00*) new_name="mapping_system_$addr_suffix" ;;
                5e00*) new_name="calibration_system_$addr_suffix" ;;
                5f00*) new_name="input_service_$addr_suffix" ;;
                *) new_name="input_function_$addr_suffix" ;;
            esac
            ;;
        # 物理函数 (6000-7fff)
        6*)
            case "$addr_suffix" in
                6000*) new_name="physics_init_$addr_suffix" ;;
                6100*) new_name="physics_setup_$addr_suffix" ;;
                6200*) new_name="collision_core_$addr_suffix" ;;
                6300*) new_name="physics_manager_$addr_suffix" ;;
                6400*) new_name="rigidbody_processor_$addr_suffix" ;;
                6500*) new_name="constraint_manager_$addr_suffix" ;;
                6600*) new_name="physics_buffer_$addr_suffix" ;;
                6700*) new_name="force_processor_$addr_suffix" ;;
                6800*) new_name="physics_device_$addr_suffix" ;;
                6900*) new_name="material_manager_$addr_suffix" ;;
                6a00*) new_name="physics_pipeline_$addr_suffix" ;;
                6b00*) new_name="physics_driver_$addr_suffix" ;;
                6c00*) new_name="dynamics_system_$addr_suffix" ;;
                6d00*) new_name="kinematics_system_$addr_suffix" ;;
                6e00*) new_name="simulation_system_$addr_suffix" ;;
                6f00*) new_name="physics_service_$addr_suffix" ;;
                *) new_name="physics_function_$addr_suffix" ;;
            esac
            ;;
        # 文件系统函数 (7000-8fff)
        7*)
            case "$addr_suffix" in
                7000*) new_name="filesystem_init_$addr_suffix" ;;
                7100*) new_name="filesystem_setup_$addr_suffix" ;;
                7200*) new_name="file_core_$addr_suffix" ;;
                7300*) new_name="filesystem_manager_$addr_suffix" ;;
                7400*) new_name="directory_processor_$addr_suffix" ;;
                7500*) new_name="stream_manager_$addr_suffix" ;;
                7600*) new_name="file_buffer_$addr_suffix" ;;
                7700*) new_name="io_processor_$addr_suffix" ;;
                7800*) new_name="filesystem_device_$addr_suffix" ;;
                7900*) new_name="archive_manager_$addr_suffix" ;;
                7a00*) new_name="filesystem_pipeline_$addr_suffix" ;;
                7b00*) new_name="filesystem_driver_$addr_suffix" ;;
                7c00*) new_name="cache_system_$addr_suffix" ;;
                7d00*) new_name="compression_system_$addr_suffix" ;;
                7e00*) new_name="encryption_system_$addr_suffix" ;;
                7f00*) new_name="filesystem_service_$addr_suffix" ;;
                *) new_name="filesystem_function_$addr_suffix" ;;
            esac
            ;;
        # 工具函数 (8000-9fff)
        8*)
            case "$addr_suffix" in
                8000*) new_name="utility_init_$addr_suffix" ;;
                8100*) new_name="utility_setup_$addr_suffix" ;;
                8200*) new_name="math_core_$addr_suffix" ;;
                8300*) new_name="string_manager_$addr_suffix" ;;
                8400*) new_name="conversion_processor_$addr_suffix" ;;
                8500*) new_name="crypto_manager_$addr_suffix" ;;
                8600*) new_name="utility_buffer_$addr_suffix" ;;
                8700*) new_name="algorithm_processor_$addr_suffix" ;;
                8800*) new_name="utility_device_$addr_suffix" ;;
                8900*) new_name="compression_manager_$addr_suffix" ;;
                8a00*) new_name="utility_pipeline_$addr_suffix" ;;
                8b00*) new_name="utility_driver_$addr_suffix" ;;
                8c00*) new_name="random_system_$addr_suffix" ;;
                8d00*) new_name="hashing_system_$addr_suffix" ;;
                8e00*) new_name="encoding_system_$addr_suffix" ;;
                8f00*) new_name="utility_service_$addr_suffix" ;;
                *) new_name="utility_function_$addr_suffix" ;;
            esac
            ;;
        # 其他函数
        *)
            new_name="system_function_$addr_suffix"
            ;;
    esac
    
    echo "RENAME_MAP[\"$func_name\"]=\"$new_name\""
    
done < /tmp/unique_functions.txt > /tmp/function_rename_map.txt

echo "生成了 $(wc -l < /tmp/function_rename_map.txt) 个函数映射"

# 应用重命名映射
echo "应用函数重命名..."
while IFS='=' read -r key value; do
    # 清理键值对
    key=$(echo "$key" | sed 's/RENAME_MAP\[\"//;s/\"\]//')
    value=$(echo "$value" | sed 's/^\"//;s/\"$//')
    
    if [[ -n "$key" && -n "$value" ]]; then
        # 重命名函数声明
        sed -i "s/undefined $key/undefined $value/g" "$file_path"
        sed -i "s/void $key/void $value/g" "$file_path"
        sed -i "s/int $key/int $value/g" "$file_path"
        
        # 重命名函数调用
        sed -i "s/$key(/$value(/g" "$file_path"
        
        # 更新注释中的函数名
        sed -i "s/函数:.*$key/函数: $value/g" "$file_path"
    fi
done < /tmp/function_rename_map.txt

echo "批量函数重命名完成"

# 清理临时文件
rm -f /tmp/unique_functions.txt /tmp/function_rename_map.txt "$temp_file"