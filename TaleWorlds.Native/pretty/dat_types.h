/**
 * @brief DAT_标记替换后的类型定义
 *
 * 本文件包含了所有DAT_标记替换后的类型定义，
 * 确保类型安全和代码可读性。
 */

#ifndef DAT_TYPES_H
#define DAT_TYPES_H

#include <stdint.h>

extern uint64_t* system_heap_ptr;
extern uint64_t* system_global_data_ptr;
extern uint64_t* system_main_data_ptr;
extern uint64_t* system_context_ptr;
extern uint32_t* system_module_state;
extern uint64_t* system_message_context;
extern uint32_t* system_main_module_state;
extern uint64_t* system_thread_context;
extern uint32_t* system_resource_state;
extern uint32_t* system_operation_state;
extern uint32_t system_stack_cookie;
extern uint8_t system_debug_flag;
extern uint8_t system_debug_flag2;
extern uint32_t system_allocation_flags;
extern uint32_t system_memory_flags;
extern uint32_t system_file_counter;
extern uint32_t system_handle_counter;
extern int32_t system_error_code;
extern uint8_t system_status_flag;
extern uint8_t* system_buffer_ptr;
extern uint8_t* system_data_buffer;
extern uint8_t* system_temp_buffer;
extern uint8_t* system_cache_buffer;
extern uint8_t* system_message_buffer;
extern uint8_t* system_parameter_buffer;
extern uint8_t* system_resource_buffer;
extern uint64_t system_callback_ptr;
extern uint64_t system_event_handler;
extern uint64_t system_interrupt_handler;
extern uint64_t system_exception_handler;
extern uint64_t system_heap_base;
extern uint64_t system_heap_size;
extern uint64_t system_stack_base;
extern uint64_t system_stack_size;
extern uint8_t system_config_data[0x100];
extern uint8_t system_resource_config[0x20];
extern uint8_t system_module_config[0x20];
extern uint8_t system_cache_config[0x20];
extern uint8_t system_temp_config[0x20];

#endif // DAT_TYPES_H