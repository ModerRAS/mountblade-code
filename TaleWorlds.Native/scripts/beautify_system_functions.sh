#!/bin/bash

# 继续美化函数名的脚本
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换更多FUN_开头的函数
sed -i 's/FUN_18064ff90/validate_resource_handle/g' 00_data_definitions.h
sed -i 's/FUN_180653580/initialize_system_context/g' 00_data_definitions.h
sed -i 's/FUN_1806535c0/setup_context_with_flags/g' 00_data_definitions.h
sed -i 's/FUN_180653630/process_context_handle/g' 00_data_definitions.h
sed -i 's/FUN_1807c1ec0/allocate_resource_memory/g' 00_data_definitions.h
sed -i 's/FUN_1808c7260/initialize_system_mutex/g' 00_data_definitions.h
sed -i 's/FUN_1808ee6c8/get_system_global_state/g' 00_data_definitions.h
sed -i 's/FUN_1808ee714/get_system_configuration/g' 00_data_definitions.h
sed -i 's/FUN_1808ee740/validate_system_parameters/g' 00_data_definitions.h
sed -i 's/FUN_1808ee7d0/initialize_parameter_block/g' 00_data_definitions.h
sed -i 's/FUN_1808eea10/process_parameter_validation/g' 00_data_definitions.h
sed -i 's/FUN_1808eea88/check_system_readiness/g' 00_data_definitions.h
sed -i 's/FUN_1808eeadc/validate_system_state/g' 00_data_definitions.h
sed -i 's/FUN_1808eeb3d/get_system_status_info/g' 00_data_definitions.h
sed -i 's/FUN_1808f07b0/initialize_system_timer/g' 00_data_definitions.h
sed -i 's/FUN_1808f07d0/setup_timer_with_attributes/g' 00_data_definitions.h
sed -i 's/FUN_1808f6da0/validate_timer_parameters/g' 00_data_definitions.h
sed -i 's/FUN_1808f6f40/initialize_timer_context/g' 00_data_definitions.h
sed -i 's/FUN_1808fbc0e/check_system_availability/g' 00_data_definitions.h
sed -i 's/FUN_1808fbd52/validate_system_resources/g' 00_data_definitions.h
sed -i 's/FUN_1808fc60c/allocate_system_buffer/g' 00_data_definitions.h
sed -i 's/FUN_1808fc6e4/process_buffer_allocation/g' 00_data_definitions.h

echo "系统函数名替换完成"