#!/bin/bash

# 变量名替换脚本 - 用于美化01_initialization.c文件
# 注意：这是简化实现，仅替换常见的非语义化变量名

# 设置输入文件
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 执行变量名替换
sed -e 's/cVar[0-9]*/system_char_var/g' \
    -e 's/pcVar[0-9]*/system_char_ptr/g' \
    -e 's/param_[0-9]*/system_param/g' \
    -e 's/uVar[0-9]*/system_uint_var/g' \
    -e 's/lVar[0-9]*/system_long_var/g' \
    -e 's/p[us]Var[0-9]*/system_ptr_var/g' \
    -e 's/local_[0-9]*/system_local_var/g' \
    -e 's/stack_[0-9]*/system_stack_var/g' \
    -e 's/heap_[0-9]*/system_heap_var/g' \
    -e 's/global_[0-9]*/system_global_var/g' \
    -e 's/temp_[0-9]*/system_temp_var/g' \
    -e 's/buffer_[0-9]*/system_buffer_var/g' \
    -e 's/data_[0-9]*/system_data_var/g' \
    -e 's/flag_[0-9]*/system_flag_var/g' \
    -e 's/status_[0-9]*/system_status_var/g' \
    -e 's/handle_[0-9]*/system_handle_var/g' \
    -e 's/context_[0-9]*/system_context_var/g' \
    -e 's/memory_[0-9]*/system_memory_var/g' \
    -e 's/config_[0-9]*/system_config_var/g' \
    -e 's/thread_[0-9]*/system_thread_var/g' \
    -e 's/offset_[0-9]*/system_offset_var/g' \
    -e 's/size_[0-9]*/system_size_var/g' \
    -e 's/count_[0-9]*/system_count_var/g' \
    -e 's/index_[0-9]*/system_index_var/g' \
    -e 's/pointer_[0-9]*/system_pointer_var/g' \
    -e 's/function_[0-9]*/system_function_var/g' \
    -e 's/result_[0-9]*/system_result_var/g' \
    -e 's/error_[0-9]*/system_error_var/g' \
    -e 's/success_[0-9]*/system_success_var/g' \
    -e 's/failure_[0-9]*/system_failure_var/g' \
    -e 's/return_[0-9]*/system_return_var/g' \
    -e 's/value_[0-9]*/system_value_var/g' \
    -e 's/state_[0-9]*/system_state_var/g' \
    -e 's/mode_[0-9]*/system_mode_var/g' \
    -e 's/type_[0-9]*/system_type_var/g' \
    -e 's/id_[0-9]*/system_id_var/g' \
    -e 's/name_[0-9]*/system_name_var/g' \
    -e 's/path_[0-9]*/system_path_var/g' \
    -e 's/file_[0-9]*/system_file_var/g' \
    -e 's/dir_[0-9]*/system_dir_var/g' \
    -e 's/stream_[0-9]*/system_stream_var/g' \
    -e 's/socket_[0-9]*/system_socket_var/g' \
    -e 's/network_[0-9]*/system_network_var/g' \
    -e 's/render_[0-9]*/system_render_var/g' \
    -e 's/audio_[0-9]*/system_audio_var/g' \
    -e 's/input_[0-9]*/system_input_var/g' \
    -e 's/output_[0-9]*/system_output_var/g' \
    -e 's/event_[0-9]*/system_event_var/g' \
    -e 's/message_[0-9]*/system_message_var/g' \
    -e 's/signal_[0-9]*/system_signal_var/g' \
    -e 's/timer_[0-9]*/system_timer_var/g' \
    -e 's/clock_[0-9]*/system_clock_var/g' \
    -e 's/time_[0-9]*/system_time_var/g' \
    -e 's/date_[0-9]*/system_date_var/g' \
    -e 's/version_[0-9]*/system_version_var/g' \
    -e 's/build_[0-9]*/system_build_var/g' \
    -e 's/debug_[0-9]*/system_debug_var/g' \
    -e 's/log_[0-9]*/system_log_var/g' \
    -e 's/info_[0-9]*/system_info_var/g' \
    -e 's/warning_[0-9]*/system_warning_var/g' \
    -e 's/error_[0-9]*/system_error_var/g' \
    -e 's/critical_[0-9]*/system_critical_var/g' \
    -e 's/fatal_[0-9]*/system_fatal_var/g' \
    -e 's/panic_[0-9]*/system_panic_var/g' \
    -e 's/assert_[0-9]*/system_assert_var/g' \
    -e 's/check_[0-9]*/system_check_var/g' \
    -e 's/validate_[0-9]*/system_validate_var/g' \
    -e 's/verify_[0-9]*/system_verify_var/g' \
    -e 's/compare_[0-9]*/system_compare_var/g' \
    -e 's/match_[0-9]*/system_match_var/g' \
    -e 's/search_[0-9]*/system_search_var/g' \
    -e 's/find_[0-9]*/system_find_var/g' \
    -e 's/locate_[0-9]*/system_locate_var/g' \
    -e 's/position_[0-9]*/system_position_var/g' \
    -e 's/location_[0-9]*/system_location_var/g' \
    -e 's/address_[0-9]*/system_address_var/g' \
    -e 's/ptr_[0-9]*/system_ptr_var/g' \
    -e 's/ref_[0-9]*/system_ref_var/g' \
    -e 's/deref_[0-9]*/system_deref_var/g' \
    -e 's/cast_[0-9]*/system_cast_var/g' \
    -e 's/convert_[0-9]*/system_convert_var/g' \
    -e 's/transform_[0-9]*/system_transform_var/g' \
    -e 's/mapping_[0-9]*/system_mapping_var/g' \
    -e 's/hash_[0-9]*/system_hash_var/g' \
    -e 's/key_[0-9]*/system_key_var/g' \
    -e 's/val_[0-9]*/system_val_var/g' \
    -e 's/entry_[0-9]*/system_entry_var/g' \
    -e 's/node_[0-9]*/system_node_var/g' \
    -e 's/leaf_[0-9]*/system_leaf_var/g' \
    -e 's/root_[0-9]*/system_root_var/g' \
    -e 's/parent_[0-9]*/system_parent_var/g' \
    -e 's/child_[0-9]*/system_child_var/g' \
    -e 's/sibling_[0-9]*/system_sibling_var/g' \
    -e 's/next_[0-9]*/system_next_var/g' \
    -e 's/prev_[0-9]*/system_prev_var/g' \
    -e 's/head_[0-9]*/system_head_var/g' \
    -e 's/tail_[0-9]*/system_tail_var/g' \
    -e 's/front_[0-9]*/system_front_var/g' \
    -e 's/back_[0-9]*/system_back_var/g' \
    -e 's/begin_[0-9]*/system_begin_var/g' \
    -e 's/end_[0-9]*/system_end_var/g' \
    -e 's/start_[0-9]*/system_start_var/g' \
    -e 's/stop_[0-9]*/system_stop_var/g' \
    -e 's/init_[0-9]*/system_init_var/g' \
    -e 's/final_[0-9]*/system_final_var/g' \
    -e 's/cleanup_[0-9]*/system_cleanup_var/g' \
    -e 's/destroy_[0-9]*/system_destroy_var/g' \
    -e 's/create_[0-9]*/system_create_var/g' \
    -e 's/new_[0-9]*/system_new_var/g' \
    -e 's/delete_[0-9]*/system_delete_var/g' \
    -e 's/free_[0-9]*/system_free_var/g' \
    -e 's/alloc_[0-9]*/system_alloc_var/g' \
    -e 's/malloc_[0-9]*/system_malloc_var/g' \
    -e 's/calloc_[0-9]*/system_calloc_var/g' \
    -e 's/realloc_[0-9]*/system_realloc_var/g' \
    -e 's/memcpy_[0-9]*/system_memcpy_var/g' \
    -e 's/memset_[0-9]*/system_memset_var/g' \
    -e 's/memcmp_[0-9]*/system_memcmp_var/g' \
    -e 's/memmove_[0-9]*/system_memmove_var/g' \
    -e 's/strlen_[0-9]*/system_strlen_var/g' \
    -e 's/strcpy_[0-9]*/system_strcpy_var/g' \
    -e 's/strncpy_[0-9]*/system_strncpy_var/g' \
    -e 's/strcat_[0-9]*/system_strcat_var/g' \
    -e 's/strncat_[0-9]*/system_strncat_var/g' \
    -e 's/strcmp_[0-9]*/system_strcmp_var/g' \
    -e 's/strncmp_[0-9]*/system_strncmp_var/g' \
    -e 's/strstr_[0-9]*/system_strstr_var/g' \
    -e 's/strchr_[0-9]*/system_strchr_var/g' \
    -e 's/strrchr_[0-9]*/system_strrchr_var/g' \
    -e 's/strtok_[0-9]*/system_strtok_var/g' \
    -e 's/atoi_[0-9]*/system_atoi_var/g' \
    -e 's/atof_[0-9]*/system_atof_var/g' \
    -e 's/itoa_[0-9]*/system_itoa_var/g' \
    -e 's/ftoa_[0-9]*/system_ftoa_var/g' \
    -e 's/sprintf_[0-9]*/system_sprintf_var/g' \
    -e 's/sscanf_[0-9]*/system_sscanf_var/g' \
    -e 's/printf_[0-9]*/system_printf_var/g' \
    -e 's/scanf_[0-9]*/system_scanf_var/g' \
    -e 's/fprintf_[0-9]*/system_fprintf_var/g' \
    -e 's/fscanf_[0-9]*/system_fscanf_var/g' \
    -e 's/fopen_[0-9]*/system_fopen_var/g' \
    -e 's/fclose_[0-9]*/system_fclose_var/g' \
    -e 's/fread_[0-9]*/system_fread_var/g' \
    -e 's/fwrite_[0-9]*/system_fwrite_var/g' \
    -e 's/fseek_[0-9]*/system_fseek_var/g' \
    -e 's/ftell_[0-9]*/system_ftell_var/g' \
    -e 's/rewind_[0-9]*/system_rewind_var/g' \
    -e 's/feof_[0-9]*/system_feof_var/g' \
    -e 's/ferror_[0-9]*/system_ferror_var/g' \
    -e 's/clearerr_[0-9]*/system_clearerr_var/g' \
    -e 's/remove_[0-9]*/system_remove_var/g' \
    -e 's/rename_[0-9]*/system_rename_var/g' \
    -e 's/tmpfile_[0-9]*/system_tmpfile_var/g' \
    -e 's/tmpnam_[0-9]*/system_tmpnam_var/g' \
    -e 's/getenv_[0-9]*/system_getenv_var/g' \
    -e 's/putenv_[0-9]*/system_putenv_var/g' \
    -e 's/system_[0-9]*/system_system_var/g' \
    -e 's/qsort_[0-9]*/system_qsort_var/g' \
    -e 's/bsearch_[0-9]*/system_bsearch_var/g' \
    -e 's/abs_[0-9]*/system_abs_var/g' \
    -e 's/labs_[0-9]*/system_labs_var/g' \
    -e 's/div_[0-9]*/system_div_var/g' \
    -e 's/ldiv_[0-9]*/system_ldiv_var/g' \
    -e 's/rand_[0-9]*/system_rand_var/g' \
    -e 's/srand_[0-9]*/system_srand_var/g' \
    -e 's/exit_[0-9]*/system_exit_var/g' \
    -e 's/abort_[0-9]*/system_abort_var/g' \
    -e 's/atexit_[0-9]*/system_atexit_var/g' \
    -e 's/assert_[0-9]*/system_assert_var/g' \
    "$INPUT_FILE" > "$TEMP_FILE"

# 替换完成，将临时文件复制回原文件
cp "$TEMP_FILE" "$INPUT_FILE"

# 清理临时文件
rm "$TEMP_FILE"

echo "变量名替换完成"