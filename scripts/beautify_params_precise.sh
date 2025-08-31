#!/bin/bash

# 更精确的函数参数名美化脚本
# 简化实现：根据函数上下文为参数提供更语义化的名称
# 原本实现：完全重构所有函数参数命名体系，建立统一的语义化命名规范

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 为特定函数类型的参数提供更语义化的名称
sed -i 's/engine_system_process_service_request(void\* engine_param_,void\* engine_param_,void\* engine_param_,void\* engine_param_)/engine_system_process_service_request(void* service_context, void* request_data, void* response_buffer, void* callback_handler)/g' 02_core_engine.c

sed -i 's/engine_system_process_data_request(void\* engine_param_,void\* engine_param_,void\* engine_param_,void\* engine_param_)/engine_system_process_data_request(void* data_context, void* input_buffer, void* output_buffer, void* completion_handler)/g' 02_core_engine.c

sed -i 's/engine_system_handle_data_response(void\* engine_param_,void\* engine_param_,void\* engine_param_,void\* engine_param_)/engine_system_handle_data_response(void* response_context, void* response_data, void* status_info, void* error_handler)/g' 02_core_engine.c

sed -i 's/engine_main_entry_point(void\* engine_param_)/engine_main_entry_point(void* startup_config)/g' 02_core_engine.c

sed -i 's/WotsMain(void\* engine_param_)/WotsMain(void* main_context)/g' 02_core_engine.c

echo "函数参数名精确替换完成"