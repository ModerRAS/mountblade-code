#!/bin/bash

# 网络系统变量名美化脚本
# 用于将05_networking.c中的非语义化变量名替换为语义化变量名

# 定义替换规则
# 格式: 原变量名->新变量名
declare -a replacements=(
    "anetwork_float_stack_8->network_float_stack_temp"
    "ppnetwork_pointer_stack_pointer_60->network_multi_pointer_stack_primary"
    "ppnetwork_pointer_stack_pointer_58->network_multi_pointer_stack_secondary"
    "pppnetwork_pointer_buffer_end_pointer4->network_buffer_end_pointer_quad"
    "network_stack_long_20->network_stack_temp_long_primary"
    "network_stack_array_long_38->network_stack_array_long_primary"
    "network_stack_long_10->network_stack_temp_long_secondary"
    "network_stack_pointer_120->network_stack_pointer_primary"
    "network_stack_long_118->network_stack_long_temp_primary"
    "network_stack_array_100->network_stack_array_primary"
    "network_char_buffer_x_18_stack->network_char_buffer_stack"
    "network_stack_byte_buffer_18->network_byte_buffer_stack"
    "network_stack_longX_20->network_stack_long_extended"
    "network_stack_array_18->network_stack_array_secondary"
    "network_stack_array_2e8->network_stack_array_large_primary"
    "network_stack_array_2a8->network_stack_array_large_secondary"
    "network_stack_buffer_pointer_48->network_stack_buffer_pointer_temp"
    "network_extra_register_output_01->network_register_output_primary"
    "network_extra_register_output_02->network_register_output_secondary"
    "network_extra_register_output_03->network_register_output_tertiary"
    "network_extra_register_output_04->network_register_output_quaternary"
    "network_extra_register_output_05->network_register_output_quinary"
    "network_extra_register_output_06->network_register_output_senary"
    "network_stack_array_268->network_stack_array_large_tertiary"
    "network_pointer_stack_pointer_50->network_pointer_stack_primary"
    "network_pointer_stack_int_48->network_pointer_stack_int_primary"
    "network_stack_pointer_38->network_stack_pointer_secondary"
    "network_pointer_stack_int_30->network_pointer_stack_int_secondary"
    "network_stack_pointer_28->network_stack_pointer_tertiary"
    "network_stack_long_90->network_stack_long_temp_secondary"
    "network_pointer_stack_long_80->network_pointer_stack_long_primary"
    "network_function_status_manager_2->network_status_manager_secondary"
    "network_handler_finalize_8110->network_handler_finalize_connection"
    "network_handler_finalize_8122->network_handler_finalize_socket"
    "network_handler_finalize_813f->network_handler_finalize_buffer"
    "network_handler_finalize_814f->network_handler_finalize_packet"
    "network_handler_finalize_815e->network_handler_finalize_thread"
    "network_handler_finalize_8160->network_handler_finalize_encryption"
    "network_handler_finalize_8172->network_handler_finalize_compression"
    "network_handler_finalize_818f->network_handler_finalize_validation"
    "network_handler_finalize_819f->network_handler_finalize_cleanup"
    "network_handler_finalize_820e->network_handler_finalize_reset"
    "network_handler_finalize_8210->network_handler_finalize_config"
    "network_handler_finalize_822f->network_handler_finalize_optimize"
    "network_handler_finalize_823c->network_handler_finalize_monitor"
    "network_handler_finalize_824f->network_handler_finalize_secure"
    "network_handler_finalize_825e->network_handler_finalize_backup"
    "network_handler_finalize_8260->network_handler_finalize_restore"
    "network_function_final_8272->network_function_final_cleanup"
    "network_function_final_828c->network_function_final_reset"
    "network_function_final_829c->network_function_final_validate"
    "network_function_final_830b->network_function_final_encrypt"
    "network_function_final_8310->network_function_final_decrypt"
    "network_function_final_8322->network_function_final_compress"
    "network_function_final_833c->network_function_final_decompress"
    "network_function_final_834c->network_function_final_serialize"
    "network_function_final_835b->network_function_final_deserialize"
    "network_function_final_8360->network_function_final_transfer"
    "network_function_final_8372->network_function_final_process"
    "network_function_final_838f->network_function_final_handler"
    "network_function_final_839f->network_function_final_manager"
    "network_function_final_840e->network_function_final_controller"
    "network_function_final_8410->network_function_final_executor"
    "network_function_final_8520->network_function_final_processor"
    "network_stack_array_9c8->network_stack_array_large_quaternary"
    "pnetwork_pointer_stack_long_9a8->network_pointer_stack_long_primary"
    "pnetwork_pointer_stack_long_998->network_pointer_stack_long_secondary"
    "network_pointer_stack_long_980->network_pointer_stack_long_tertiary"
    "pnetwork_pointer_stack_long_978->network_pointer_stack_long_quaternary"
    "network_stack_pointer_970->network_stack_pointer_quaternary"
    "network_stack_long_968->network_stack_long_temp_tertiary"
    "network_stack_array_958->network_stack_array_tertiary"
    "network_stack_pointer_948->network_stack_pointer_quinary"
    "network_hash_computed_value_940->network_hash_computed_temp"
    "network_stack_processed_908->network_stack_processed_primary"
    "network_stack_processed_900->network_stack_processed_secondary"
    "network_stack_final_checksum_8cc->network_stack_checksum_final"
    "network_stack_final_checksum_8c8->network_stack_checksum_temp_primary"
    "network_stack_final_checksum_8c0->network_stack_checksum_temp_secondary"
    "network_stack_array_850->network_stack_array_large_quinary"
    "network_stack_array_3e8->network_stack_array_large_senary"
)

# 先恢复文件
git checkout HEAD -- /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 执行替换
for replacement in "${replacements[@]}"; do
    IFS='->' read -r old_name new_name <<< "$replacement"
    
    # 使用sed进行替换
    sed -i "s/\b$old_name\b/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
    
    echo "替换: $old_name -> $new_name"
done

echo "变量名美化完成"