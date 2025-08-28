#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part145.c - 渲染系统高级参数处理和状态管理模块
// 包含2个核心函数，涵盖渲染系统参数处理、状态查询、字符串处理、缓冲区管理、资源分配等高级渲染功能

// 常量定义
#define MAX_STRING_LENGTH 0x40
#define PARAMETER_OFFSET_1 0x10
#define PARAMETER_OFFSET_2 0x08
#define RENDER_CONTEXT_OFFSET_1 0xcb
#define RENDER_CONTEXT_OFFSET_2 0xc9
#define RENDER_CONTEXT_OFFSET_3 0x18
#define RENDER_CONTEXT_OFFSET_4 0x70
#define RENDER_CONTEXT_OFFSET_5 0x108
#define BUFFER_OFFSET_1 0x20
#define BUFFER_OFFSET_2 0x2970
#define BUFFER_OFFSET_3 0x118
#define BUFFER_OFFSET_4 0x2ac
#define BUFFER_OFFSET_5 0x260
#define BUFFER_OFFSET_6 0x1b0
#define BUFFER_OFFSET_7 0x1a8
#define BUFFER_OFFSET_8 0xb8
#define BUFFER_OFFSET_9 0xb0
#define BUFFER_OFFSET_10 0x20
#define BUFFER_OFFSET_11 0x18

// 函数别名定义
#define RenderingSystem_ParameterProcessor FUN_180358b90
#define RenderingSystem_StateManager FUN_18035a770
#define RenderingSystem_InternalProcessor FUN_180389090
#define RenderingSystem_CleanupHandler FUN_180358b30
#define RenderingSystem_MemoryAllocator FUN_18062b1e0
#define RenderingSystem_ObjectInitializer FUN_1802e6b00
#define RenderingSystem_ObjectCleanup FUN_180170ac0
#define RenderingSystem_ConfigLoader FUN_1802ea790
#define RenderingSystem_DataProcessor FUN_180198b90
#define RenderingSystem_FlagUpdater FUN_1802ee810
#define RenderingSystem_ComponentProcessor FUN_1808fc050

// 全局变量引用
extern uint64_t GET_SECURITY_COOKIE();
extern uint8_t global_state_672_ptr;
extern char system_memory_eb78;
extern uint8_t global_state_720_ptr;
extern uint8_t global_state_3480_ptr;
extern uint8_t global_state_3024_ptr;
extern uint8_t global_state_3000_ptr;
extern char system_memory_eba8;
extern char system_memory_eb48;
extern uint8_t global_state_3048_ptr;
extern char system_memory_ec30;
extern char system_memory_ec18;
extern char system_memory_ec58;
extern char system_memory_eb60;
extern char system_memory_ecb8;
extern char system_memory_eca0;
extern char system_memory_ec88;
extern char system_memory_ec70;
extern char system_memory_ed30;
extern char system_memory_ed18;
extern char system_memory_ecf8;
extern char system_memory_ecd0;
extern uint8_t global_state_4472_ptr;
extern char system_memory_0300;
extern uint8_t global_state_2984_ptr;
extern uint64_t _DAT_180c8ed18;

/**
 * 渲染系统参数处理器
 * 
 * 功能说明：
 * - 处理渲染系统参数配置和验证
 * - 管理渲染上下文状态和缓冲区
 * - 执行字符串比较和参数匹配
 * - 分配和管理渲染资源
 * - 处理渲染系统初始化和清理
 * 
 * @param param_1 渲染上下文指针
 * @param param_2 参数配置结构体指针
 */
void RenderingSystem_ParameterProcessor(longlong render_context, longlong parameter_config)
{
    char char_val_1;
    char char_val_2;
    int int_val;
    char *string_ptr;
    uint64_t *data_ptr;
    longlong long_val;
    bool bool_result;
    int8_t security_buffer[32];
    longlong *resource_ptr;
    uint64_t stack_value;
    void *buffer_ptr_1;
    int8_t *buffer_ptr_2;
    int32_t buffer_size;
    int8_t string_buffer[72];
    void *buffer_ptr_3;
    int8_t *buffer_ptr_4;
    int32_t buffer_size_2;
    int8_t string_buffer_2[72];
    void *buffer_ptr_5;
    int8_t *buffer_ptr_6;
    int32_t buffer_size_3;
    int8_t string_buffer_3[72];
    void *buffer_ptr_7;
    int8_t *buffer_ptr_8;
    int32_t buffer_size_4;
    int8_t string_buffer_4[72];
    void *buffer_ptr_9;
    int8_t *buffer_ptr_10;
    int32_t buffer_size_5;
    int8_t string_buffer_5[72];
    void *buffer_ptr_11;
    int8_t *buffer_ptr_12;
    int32_t buffer_size_6;
    int8_t string_buffer_6[72];
    void *buffer_ptr_13;
    int8_t *buffer_ptr_14;
    int32_t buffer_size_7;
    int8_t string_buffer_7[72];
    void *buffer_ptr_15;
    int8_t *buffer_ptr_16;
    int32_t buffer_size_8;
    int8_t string_buffer_8[72];
    void *buffer_ptr_17;
    int8_t *buffer_ptr_18;
    int32_t buffer_size_9;
    int8_t string_buffer_9[72];
    void *buffer_ptr_19;
    int8_t *buffer_ptr_20;
    int32_t buffer_size_10;
    int8_t string_buffer_10[72];
    void *buffer_ptr_21;
    int8_t *buffer_ptr_22;
    int32_t buffer_size_11;
    int8_t string_buffer_11[72];
    void *buffer_ptr_23;
    int8_t *buffer_ptr_24;
    int32_t buffer_size_12;
    int8_t string_buffer_12[72];
    void *buffer_ptr_25;
    int8_t *buffer_ptr_26;
    int32_t buffer_size_13;
    int8_t string_buffer_13[72];
    void *buffer_ptr_27;
    int8_t *buffer_ptr_28;
    int32_t buffer_size_14;
    int8_t string_buffer_14[72];
    void *buffer_ptr_29;
    int8_t *buffer_ptr_30;
    int32_t buffer_size_15;
    int8_t string_buffer_15[72];
    void *buffer_ptr_31;
    int8_t *buffer_ptr_32;
    int32_t buffer_size_16;
    int8_t string_buffer_16[72];
    void *buffer_ptr_33;
    int8_t *buffer_ptr_34;
    int32_t buffer_size_17;
    int8_t string_buffer_17[72];
    void *buffer_ptr_35;
    int8_t *buffer_ptr_36;
    int32_t buffer_size_18;
    int8_t string_buffer_18[72];
    void *buffer_ptr_37;
    int8_t *buffer_ptr_38;
    int32_t buffer_size_19;
    int8_t string_buffer_19[72];
    void *buffer_ptr_40;
    int8_t *buffer_ptr_41;
    int32_t buffer_size_20;
    int8_t string_buffer_20[72];
    ulonglong security_hash;
    
    // 初始化安全栈值
    stack_value = 0xfffffffffffffffe;
    security_hash = GET_SECURITY_COOKIE() ^ (ulonglong)security_buffer;
    
    // 初始化字符串缓冲区
    buffer_ptr_32 = &global_state_672_ptr;
    buffer_ptr_31 = string_buffer_17;
    string_buffer_17[0] = 0;
    int_val = 8;
    strcpy_s(string_buffer_17, 0x20, &system_memory_eb78);
    
    // 获取参数长度并验证
    int_val = *(int *)(parameter_config + PARAMETER_OFFSET_1);
    if (int_val == 8) {
        if (int_val == 0) {
            // 空字符串处理
            if (int_val != 0) {
                bool_result = false;
            } else {
                bool_result = true;
            }
        } else {
            // 字符串比较处理
            string_ptr = *(char **)(parameter_config + PARAMETER_OFFSET_2);
            long_val = (longlong)buffer_ptr_31 - (longlong)string_ptr;
            do {
                char_val_1 = *string_ptr;
                char_val_2 = string_ptr[long_val];
                if (char_val_1 != char_val_2) break;
                string_ptr = string_ptr + 1;
            } while (char_val_2 != '\0');
            bool_result = char_val_1 == char_val_2;
        }
    } else {
        if (int_val == 0) {
            bool_result = true;
        } else {
            bool_result = false;
        }
    }
    
    buffer_ptr_32 = &global_state_720_ptr;
    if (bool_result) {
        // 处理渲染上下文状态
        if (*(char *)(render_context + RENDER_CONTEXT_OFFSET_1) == '\0') {
            if (*(char *)(render_context + RENDER_CONTEXT_OFFSET_2) == '\0') {
                // 初始化渲染缓冲区
                buffer_ptr_23 = &global_state_3480_ptr;
                buffer_ptr_22 = string_buffer_13;
                string_buffer_13[0] = 0;
                buffer_size_12 = 0x13;
                strcpy_s(string_buffer_13, 0x40, &global_state_3024_ptr);
                buffer_ptr_23 = &global_state_720_ptr;
                
                buffer_ptr_15 = &global_state_3480_ptr;
                buffer_ptr_14 = string_buffer_8;
                string_buffer_8[0] = 0;
                buffer_size_7 = 0x17;
                strcpy_s(string_buffer_8, 0x40, &global_state_3000_ptr);
                buffer_ptr_15 = &global_state_720_ptr;
                
                buffer_ptr_17 = &global_state_3480_ptr;
                buffer_ptr_16 = string_buffer_9;
                string_buffer_9[0] = 0;
                buffer_size_8 = 0x23;
                strcpy_s(string_buffer_9, 0x40, &system_memory_eba8);
                buffer_ptr_17 = &global_state_720_ptr;
                
                buffer_ptr_19 = &global_state_3480_ptr;
                buffer_ptr_18 = string_buffer_10;
                string_buffer_10[0] = 0;
                buffer_size_9 = 0x13;
                strcpy_s(string_buffer_10, 0x40, &system_memory_eb48);
                buffer_ptr_19 = &global_state_720_ptr;
                
                buffer_ptr_21 = &global_state_3480_ptr;
                buffer_ptr_20 = string_buffer_11;
                string_buffer_11[0] = 0;
                buffer_size_10 = 0x11;
                strcpy_s(string_buffer_11, 0x40, &global_state_3048_ptr);
                buffer_ptr_21 = &global_state_720_ptr;
                
                buffer_ptr_25 = &global_state_3480_ptr;
                buffer_ptr_24 = string_buffer_12;
                string_buffer_12[0] = 0;
                buffer_size_11 = 0x22;
                strcpy_s(string_buffer_12, 0x40, &system_memory_ec30);
                buffer_ptr_25 = &global_state_720_ptr;
                
                buffer_ptr_29 = &global_state_3480_ptr;
                buffer_ptr_28 = string_buffer_14;
                string_buffer_14[0] = 0;
                buffer_size_13 = 0x15;
                strcpy_s(string_buffer_14, 0x40, &system_memory_ec18);
                buffer_ptr_29 = &global_state_720_ptr;
                
                buffer_ptr_33 = &global_state_3480_ptr;
                buffer_ptr_30 = string_buffer_15;
                string_buffer_15[0] = 0;
                buffer_size_14 = 0x15;
                strcpy_s(string_buffer_15, 0x40, &system_memory_ec58);
            } else {
                // 替代渲染缓冲区初始化
                buffer_ptr_23 = &global_state_3480_ptr;
                buffer_ptr_22 = string_buffer_13;
                string_buffer_13[0] = 0;
                buffer_size_12 = 0x13;
                strcpy_s(string_buffer_13, 0x40, &global_state_3024_ptr);
                buffer_ptr_23 = &global_state_720_ptr;
                
                buffer_ptr_15 = &global_state_3480_ptr;
                buffer_ptr_14 = string_buffer_8;
                string_buffer_8[0] = 0;
                buffer_size_7 = 0x17;
                strcpy_s(string_buffer_8, 0x40, &global_state_3000_ptr);
                buffer_ptr_15 = &global_state_720_ptr;
                
                buffer_ptr_17 = &global_state_3480_ptr;
                buffer_ptr_16 = string_buffer_9;
                string_buffer_9[0] = 0;
                buffer_size_8 = 0x23;
                strcpy_s(string_buffer_9, 0x40, &system_memory_eba8);
                buffer_ptr_17 = &global_state_720_ptr;
                
                buffer_ptr_19 = &global_state_3480_ptr;
                buffer_ptr_18 = string_buffer_10;
                string_buffer_10[0] = 0;
                buffer_size_9 = 0x13;
                strcpy_s(string_buffer_10, 0x40, &system_memory_eb48);
                buffer_ptr_19 = &global_state_720_ptr;
                
                buffer_ptr_21 = &global_state_3480_ptr;
                buffer_ptr_20 = string_buffer_11;
                string_buffer_11[0] = 0;
                buffer_size_10 = 0x11;
                strcpy_s(string_buffer_11, 0x40, &global_state_3048_ptr);
                buffer_ptr_21 = &global_state_720_ptr;
                
                buffer_ptr_25 = &global_state_3480_ptr;
                buffer_ptr_24 = string_buffer_12;
                string_buffer_12[0] = 0;
                buffer_size_11 = 0x22;
                strcpy_s(string_buffer_12, 0x40, &system_memory_ec30);
                buffer_ptr_25 = &global_state_720_ptr;
                
                buffer_ptr_29 = &global_state_3480_ptr;
                buffer_ptr_28 = string_buffer_14;
                string_buffer_14[0] = 0;
                buffer_size_13 = 0x15;
                strcpy_s(string_buffer_14, 0x40, &system_memory_ec18);
                buffer_ptr_29 = &global_state_720_ptr;
                
                buffer_ptr_33 = &global_state_3480_ptr;
                buffer_ptr_30 = string_buffer_15;
                string_buffer_15[0] = 0;
                buffer_size_14 = 0x15;
                strcpy_s(string_buffer_15, 0x40, &system_memory_ec58);
            }
            
            // 初始化额外渲染缓冲区
            buffer_ptr_33 = &global_state_720_ptr;
            buffer_ptr_23 = &global_state_3480_ptr;
            buffer_ptr_22 = string_buffer_13;
            string_buffer_13[0] = 0;
            buffer_size_12 = 9;
            strcpy_s(string_buffer_13, 0x40, &system_memory_eb88);
            buffer_ptr_23 = &global_state_720_ptr;
            
            buffer_ptr_15 = &global_state_3480_ptr;
            buffer_ptr_14 = string_buffer_8;
            string_buffer_8[0] = 0;
            buffer_size_7 = 0x12;
            strcpy_s(string_buffer_8, 0x40, &system_memory_eb60);
            buffer_ptr_15 = &global_state_720_ptr;
            
            buffer_ptr_17 = &global_state_3480_ptr;
            buffer_ptr_16 = string_buffer_9;
            string_buffer_9[0] = 0;
            buffer_size_8 = 0x15;
            strcpy_s(string_buffer_9, 0x40, &system_memory_ecb8);
            buffer_ptr_17 = &global_state_720_ptr;
            
            buffer_ptr_19 = &global_state_3480_ptr;
            buffer_ptr_18 = string_buffer_10;
            string_buffer_10[0] = 0;
            buffer_size_9 = 0x15;
            strcpy_s(string_buffer_10, 0x40, &system_memory_eca0);
            buffer_ptr_19 = &global_state_720_ptr;
            
            buffer_ptr_21 = &global_state_3480_ptr;
            buffer_ptr_20 = string_buffer_11;
            string_buffer_11[0] = 0;
            buffer_size_10 = 0x15;
            strcpy_s(string_buffer_11, 0x40, &system_memory_ec88);
            buffer_ptr_21 = &global_state_720_ptr;
            
            buffer_ptr_25 = &global_state_3480_ptr;
            buffer_ptr_24 = string_buffer_12;
            string_buffer_12[0] = 0;
            buffer_size_11 = 0x15;
            strcpy_s(string_buffer_12, 0x40, &system_memory_ec70);
            buffer_ptr_25 = &global_state_720_ptr;
            
            buffer_ptr_29 = &global_state_3480_ptr;
            buffer_ptr_28 = string_buffer_14;
            string_buffer_14[0] = 0;
            buffer_size_13 = 0x15;
            strcpy_s(string_buffer_14, 0x40, &system_memory_ed30);
            buffer_ptr_29 = &global_state_720_ptr;
            
            buffer_ptr_33 = &global_state_3480_ptr;
            buffer_ptr_30 = string_buffer_15;
            string_buffer_15[0] = 0;
            buffer_size_14 = 0x15;
            strcpy_s(string_buffer_15, 0x40, &system_memory_ed18);
            buffer_ptr_33 = &global_state_720_ptr;
            
            buffer_ptr_13 = &global_state_3480_ptr;
            buffer_ptr_12 = string_buffer_7;
            string_buffer_7[0] = 0;
            buffer_size_6 = 0x1a;
            strcpy_s(string_buffer_7, 0x40, &system_memory_ecf8);
            buffer_ptr_13 = &global_state_720_ptr;
        } else {
            // 替代参数处理路径
            buffer_ptr_32 = &global_state_3480_ptr;
            buffer_ptr_31 = string_buffer_17;
            string_buffer_17[0] = 0;
            int_val = 0x12;
            strcpy_s(string_buffer_17, 0x40, &system_memory_eb60);
            buffer_ptr_32 = &global_state_720_ptr;
            
            buffer_ptr_27 = &global_state_3480_ptr;
            buffer_ptr_26 = string_buffer_16;
            string_buffer_16[0] = 0;
            buffer_size_15 = 0x13;
            strcpy_s(string_buffer_16, 0x40, &system_memory_eb48);
            buffer_ptr_27 = &global_state_720_ptr;
            
            buffer_ptr_25 = &global_state_3480_ptr;
            buffer_ptr_24 = string_buffer_12;
            string_buffer_12[0] = 0;
            buffer_size_11 = 0x11;
            strcpy_s(string_buffer_12, 0x40, &global_state_3048_ptr);
            buffer_ptr_25 = &global_state_720_ptr;
            
            buffer_ptr_21 = &global_state_3480_ptr;
            buffer_ptr_20 = string_buffer_11;
            string_buffer_11[0] = 0;
            buffer_size_10 = 9;
            strcpy_s(string_buffer_11, 0x40, &system_memory_eb88);
            buffer_ptr_21 = &global_state_720_ptr;
            
            buffer_ptr_19 = &global_state_3480_ptr;
            buffer_ptr_18 = string_buffer_10;
            string_buffer_10[0] = 0;
            buffer_size_9 = 0x13;
            strcpy_s(string_buffer_10, 0x40, &global_state_3024_ptr);
            buffer_ptr_19 = &global_state_720_ptr;
            
            buffer_ptr_17 = &global_state_3480_ptr;
            buffer_ptr_16 = string_buffer_9;
            string_buffer_9[0] = 0;
            buffer_size_8 = 0x17;
            strcpy_s(string_buffer_9, 0x40, &global_state_3000_ptr);
            buffer_ptr_17 = &global_state_720_ptr;
            
            buffer_ptr_9 = &global_state_3480_ptr;
            buffer_ptr_8 = string_buffer_5;
            string_buffer_5[0] = 0;
            buffer_size_4 = 0x23;
            strcpy_s(string_buffer_5, 0x40, &system_memory_eba8);
            buffer_ptr_9 = &global_state_720_ptr;
            
            buffer_ptr_7 = &global_state_3480_ptr;
            buffer_ptr_6 = string_buffer_4;
            string_buffer_4[0] = 0;
            buffer_size_3 = 0x22;
            strcpy_s(string_buffer_4, 0x40, &system_memory_ec30);
            buffer_ptr_7 = &global_state_720_ptr;
            
            buffer_ptr_13 = &global_state_3480_ptr;
            buffer_ptr_12 = string_buffer_7;
            string_buffer_7[0] = 0;
            buffer_size_6 = 0x15;
            strcpy_s(string_buffer_7, 0x40, &system_memory_ec18);
            buffer_ptr_13 = &global_state_720_ptr;
            
            buffer_ptr_33 = &global_state_3480_ptr;
            buffer_ptr_30 = string_buffer_15;
            string_buffer_15[0] = 0;
            buffer_size_14 = 0x15;
            strcpy_s(string_buffer_15, 0x40, &system_memory_ec58);
            buffer_ptr_33 = &global_state_720_ptr;
            
            buffer_ptr_29 = &global_state_3480_ptr;
            buffer_ptr_28 = string_buffer_14;
            string_buffer_14[0] = 0;
            buffer_size_13 = 0x15;
            strcpy_s(string_buffer_14, 0x40, &system_memory_ecb8);
            buffer_ptr_29 = &global_state_720_ptr;
            
            buffer_ptr_25 = &global_state_3480_ptr;
            buffer_ptr_24 = string_buffer_12;
            string_buffer_12[0] = 0;
            buffer_size_11 = 0x15;
            strcpy_s(string_buffer_12, 0x40, &system_memory_eca0);
            buffer_ptr_25 = &global_state_720_ptr;
            
            buffer_ptr_21 = &global_state_3480_ptr;
            buffer_ptr_20 = string_buffer_11;
            string_buffer_11[0] = 0;
            buffer_size_10 = 0x15;
            strcpy_s(string_buffer_11, 0x40, &system_memory_ec88);
            buffer_ptr_21 = &global_state_720_ptr;
            
            buffer_ptr_19 = &global_state_3480_ptr;
            buffer_ptr_18 = string_buffer_10;
            string_buffer_10[0] = 0;
            buffer_size_9 = 0x15;
            strcpy_s(string_buffer_10, 0x40, &system_memory_ec70);
            buffer_ptr_19 = &global_state_720_ptr;
            
            buffer_ptr_17 = &global_state_3480_ptr;
            buffer_ptr_16 = string_buffer_9;
            string_buffer_9[0] = 0;
            buffer_size_8 = 0x15;
            strcpy_s(string_buffer_9, 0x40, &system_memory_ed30);
            buffer_ptr_17 = &global_state_720_ptr;
            
            buffer_ptr_15 = &global_state_3480_ptr;
            buffer_ptr_14 = string_buffer_8;
            string_buffer_8[0] = 0;
            buffer_size_7 = 0x15;
            strcpy_s(string_buffer_8, 0x40, &system_memory_ed18);
            buffer_ptr_15 = &global_state_720_ptr;
            
            buffer_ptr_23 = &global_state_3480_ptr;
            buffer_ptr_22 = string_buffer_13;
            string_buffer_13[0] = 0;
            buffer_size_12 = 0x1a;
            strcpy_s(string_buffer_13, 0x40, &system_memory_ecf8);
            buffer_ptr_23 = &global_state_720_ptr;
        }
    } else {
        // 参数不匹配时的处理
        buffer_ptr_32 = &global_state_672_ptr;
        buffer_ptr_31 = string_buffer_17;
        string_buffer_17[0] = 0;
        int_val = 9;
        strcpy_s(string_buffer_17, 0x20, &system_memory_eb88);
        
        // 重新验证参数
        int_val = *(int *)(parameter_config + PARAMETER_OFFSET_1);
        if (int_val == 9) {
            if (int_val == 0) {
                bool_result = true;
            } else {
                string_ptr = *(char **)(parameter_config + PARAMETER_OFFSET_2);
                long_val = (longlong)buffer_ptr_31 - (longlong)string_ptr;
                do {
                    char_val_1 = *string_ptr;
                    char_val_2 = string_ptr[long_val];
                    if (char_val_1 != char_val_2) break;
                    string_ptr = string_ptr + 1;
                } while (char_val_2 != '\0');
                bool_result = char_val_1 == char_val_2;
            }
        } else {
            bool_result = false;
        }
        
        buffer_ptr_32 = &global_state_720_ptr;
        if (bool_result) {
            if (*(char *)(render_context + RENDER_CONTEXT_OFFSET_2) == '\0') {
                // 初始化渲染参数缓冲区
                buffer_ptr_23 = &global_state_3480_ptr;
                buffer_ptr_22 = string_buffer_13;
                string_buffer_13[0] = 0;
                buffer_size_12 = 0x13;
                strcpy_s(string_buffer_13, 0x40, &global_state_3024_ptr);
                buffer_ptr_23 = &global_state_720_ptr;
                
                buffer_ptr_15 = &global_state_3480_ptr;
                buffer_ptr_14 = string_buffer_8;
                string_buffer_8[0] = 0;
                buffer_size_7 = 0x17;
                strcpy_s(string_buffer_8, 0x40, &global_state_3000_ptr);
                buffer_ptr_15 = &global_state_720_ptr;
                
                buffer_ptr_17 = &global_state_3480_ptr;
                buffer_ptr_16 = string_buffer_9;
                string_buffer_9[0] = 0;
                buffer_size_8 = 0x23;
                strcpy_s(string_buffer_9, 0x40, &system_memory_eba8);
                buffer_ptr_17 = &global_state_720_ptr;
                
                buffer_ptr_19 = &global_state_3480_ptr;
                buffer_ptr_18 = string_buffer_10;
                string_buffer_10[0] = 0;
                buffer_size_9 = 0x12;
                strcpy_s(string_buffer_10, 0x40, &system_memory_eb60);
                buffer_ptr_19 = &global_state_720_ptr;
                
                buffer_ptr_21 = &global_state_3480_ptr;
                buffer_ptr_20 = string_buffer_11;
                string_buffer_11[0] = 0;
                buffer_size_10 = 0x13;
                strcpy_s(string_buffer_11, 0x40, &system_memory_eb48);
                buffer_ptr_21 = &global_state_720_ptr;
                
                buffer_ptr_25 = &global_state_3480_ptr;
                buffer_ptr_24 = string_buffer_12;
                string_buffer_12[0] = 0;
                buffer_size_11 = 0x11;
                strcpy_s(string_buffer_12, 0x40, &global_state_3048_ptr);
                buffer_ptr_25 = &global_state_720_ptr;
                
                buffer_ptr_29 = &global_state_3480_ptr;
                buffer_ptr_28 = string_buffer_14;
                string_buffer_14[0] = 0;
                buffer_size_13 = 0x22;
                strcpy_s(string_buffer_14, 0x40, &system_memory_ec30);
                buffer_ptr_29 = &global_state_720_ptr;
                
                buffer_ptr_33 = &global_state_3480_ptr;
                buffer_ptr_30 = string_buffer_15;
                string_buffer_15[0] = 0;
                buffer_size_14 = 0x15;
                strcpy_s(string_buffer_15, 0x40, &system_memory_ec18);
                buffer_ptr_33 = &global_state_720_ptr;
                
                buffer_ptr_13 = &global_state_3480_ptr;
                buffer_ptr_12 = string_buffer_7;
                string_buffer_7[0] = 0;
                buffer_size_6 = 0x15;
                strcpy_s(string_buffer_7, 0x40, &system_memory_ec58);
                buffer_ptr_13 = &global_state_720_ptr;
                
                buffer_ptr_7 = &global_state_3480_ptr;
                buffer_ptr_6 = string_buffer_4;
                string_buffer_4[0] = 0;
                buffer_size_3 = 0x15;
                strcpy_s(string_buffer_4, 0x40, &system_memory_ecb8);
                buffer_ptr_7 = &global_state_720_ptr;
                
                buffer_ptr_9 = &global_state_3480_ptr;
                buffer_ptr_8 = string_buffer_5;
                string_buffer_5[0] = 0;
                buffer_size_4 = 0x15;
                strcpy_s(string_buffer_5, 0x40, &system_memory_eca0);
                buffer_ptr_9 = &global_state_720_ptr;
                
                buffer_ptr_17 = &global_state_3480_ptr;
                buffer_ptr_16 = string_buffer_9;
                string_buffer_9[0] = 0;
                buffer_size_8 = 0x15;
                strcpy_s(string_buffer_9, 0x40, &system_memory_ec88);
                buffer_ptr_17 = &global_state_720_ptr;
                
                buffer_ptr_19 = &global_state_3480_ptr;
                buffer_ptr_18 = string_buffer_10;
                string_buffer_10[0] = 0;
                buffer_size_9 = 0x15;
                strcpy_s(string_buffer_10, 0x40, &system_memory_ec70);
                buffer_ptr_19 = &global_state_720_ptr;
                
                buffer_ptr_21 = &global_state_3480_ptr;
                buffer_ptr_20 = string_buffer_11;
                string_buffer_11[0] = 0;
                buffer_size_10 = 0x15;
                strcpy_s(string_buffer_11, 0x40, &system_memory_ed30);
                buffer_ptr_21 = &global_state_720_ptr;
                
                buffer_ptr_25 = &global_state_3480_ptr;
                buffer_ptr_24 = string_buffer_12;
                string_buffer_12[0] = 0;
                buffer_size_11 = 0x15;
                strcpy_s(string_buffer_12, 0x40, &system_memory_ed18);
                buffer_ptr_25 = &global_state_720_ptr;
                
                buffer_ptr_27 = &global_state_3480_ptr;
                buffer_ptr_26 = string_buffer_16;
                string_buffer_16[0] = 0;
                buffer_size_15 = 0x1a;
                strcpy_s(string_buffer_16, 0x40, &system_memory_ecf8);
                buffer_ptr_27 = &global_state_720_ptr;
            } else {
                // 替代渲染参数初始化
                buffer_ptr_23 = &global_state_3480_ptr;
                buffer_ptr_22 = string_buffer_13;
                string_buffer_13[0] = 0;
                buffer_size_12 = 0x13;
                strcpy_s(string_buffer_13, 0x40, &global_state_3024_ptr);
                buffer_ptr_23 = &global_state_720_ptr;
                
                buffer_ptr_15 = &global_state_3480_ptr;
                buffer_ptr_14 = string_buffer_8;
                string_buffer_8[0] = 0;
                buffer_size_7 = 0x17;
                strcpy_s(string_buffer_8, 0x40, &global_state_3000_ptr);
                buffer_ptr_15 = &global_state_720_ptr;
                
                buffer_ptr_17 = &global_state_3480_ptr;
                buffer_ptr_16 = string_buffer_9;
                string_buffer_9[0] = 0;
                buffer_size_8 = 0x23;
                strcpy_s(string_buffer_9, 0x40, &system_memory_eba8);
                buffer_ptr_17 = &global_state_720_ptr;
                
                buffer_ptr_19 = &global_state_3480_ptr;
                buffer_ptr_18 = string_buffer_10;
                string_buffer_10[0] = 0;
                buffer_size_9 = 0x12;
                strcpy_s(string_buffer_10, 0x40, &system_memory_eb60);
                buffer_ptr_19 = &global_state_720_ptr;
                
                buffer_ptr_21 = &global_state_3480_ptr;
                buffer_ptr_20 = string_buffer_11;
                string_buffer_11[0] = 0;
                buffer_size_10 = 0x13;
                strcpy_s(string_buffer_11, 0x40, &system_memory_eb48);
                buffer_ptr_21 = &global_state_720_ptr;
                
                buffer_ptr_25 = &global_state_3480_ptr;
                buffer_ptr_24 = string_buffer_12;
                string_buffer_12[0] = 0;
                buffer_size_11 = 0x11;
                strcpy_s(string_buffer_12, 0x40, &global_state_3048_ptr);
                buffer_ptr_25 = &global_state_720_ptr;
                
                buffer_ptr_29 = &global_state_3480_ptr;
                buffer_ptr_28 = string_buffer_14;
                string_buffer_14[0] = 0;
                buffer_size_13 = 0x22;
                strcpy_s(string_buffer_14, 0x40, &system_memory_ec30);
                buffer_ptr_29 = &global_state_720_ptr;
                
                buffer_ptr_33 = &global_state_3480_ptr;
                buffer_ptr_30 = string_buffer_15;
                string_buffer_15[0] = 0;
                buffer_size_14 = 0x15;
                strcpy_s(string_buffer_15, 0x40, &system_memory_ec18);
                buffer_ptr_33 = &global_state_720_ptr;
                
                buffer_ptr_13 = &global_state_3480_ptr;
                buffer_ptr_12 = string_buffer_7;
                string_buffer_7[0] = 0;
                buffer_size_6 = 0x15;
                strcpy_s(string_buffer_7, 0x40, &system_memory_ec58);
                buffer_ptr_13 = &global_state_720_ptr;
                
                buffer_ptr_7 = &global_state_3480_ptr;
                buffer_ptr_6 = string_buffer_4;
                string_buffer_4[0] = 0;
                buffer_size_3 = 0x15;
                strcpy_s(string_buffer_4, 0x40, &system_memory_ecb8);
                buffer_ptr_7 = &global_state_720_ptr;
                
                buffer_ptr_9 = &global_state_3480_ptr;
                buffer_ptr_8 = string_buffer_5;
                string_buffer_5[0] = 0;
                buffer_size_4 = 0x15;
                strcpy_s(string_buffer_5, 0x40, &system_memory_eca0);
                buffer_ptr_9 = &global_state_720_ptr;
                
                buffer_ptr_17 = &global_state_3480_ptr;
                buffer_ptr_16 = string_buffer_9;
                string_buffer_9[0] = 0;
                buffer_size_8 = 0x15;
                strcpy_s(string_buffer_9, 0x40, &system_memory_ec88);
                buffer_ptr_17 = &global_state_720_ptr;
                
                buffer_ptr_19 = &global_state_3480_ptr;
                buffer_ptr_18 = string_buffer_10;
                string_buffer_10[0] = 0;
                buffer_size_9 = 0x15;
                strcpy_s(string_buffer_10, 0x40, &system_memory_ec70);
                buffer_ptr_19 = &global_state_720_ptr;
                
                buffer_ptr_21 = &global_state_3480_ptr;
                buffer_ptr_20 = string_buffer_11;
                string_buffer_11[0] = 0;
                buffer_size_10 = 0x15;
                strcpy_s(string_buffer_11, 0x40, &system_memory_ed30);
                buffer_ptr_21 = &global_state_720_ptr;
                
                buffer_ptr_25 = &global_state_3480_ptr;
                buffer_ptr_24 = string_buffer_12;
                string_buffer_12[0] = 0;
                buffer_size_11 = 0x15;
                strcpy_s(string_buffer_12, 0x40, &system_memory_ed18);
                buffer_ptr_25 = &global_state_720_ptr;
                
                buffer_ptr_27 = &global_state_3480_ptr;
                buffer_ptr_26 = string_buffer_16;
                string_buffer_16[0] = 0;
                buffer_size_15 = 0x1a;
                strcpy_s(string_buffer_16, 0x40, &system_memory_ecf8);
                buffer_ptr_27 = &global_state_720_ptr;
            }
        } else {
            // 参数错误处理
            buffer_ptr_23 = &global_state_3480_ptr;
            buffer_ptr_22 = string_buffer_13;
            string_buffer_13[0] = 0;
            buffer_size_12 = 0x21;
            strcpy_s(string_buffer_13, 0x40, &system_memory_ecd0);
        }
        buffer_ptr_23 = &global_state_720_ptr;
    }
    
    // 处理渲染系统资源
    data_ptr = (uint64_t *)
               RenderingSystem_InternalProcessor(*(longlong *)(*(longlong *)(render_context + RENDER_CONTEXT_OFFSET_3) + BUFFER_OFFSET_1) + BUFFER_OFFSET_2, &resource_ptr,
                             render_context + RENDER_CONTEXT_OFFSET_4);
    *(uint64_t *)(render_context + RENDER_CONTEXT_OFFSET_5) = *data_ptr;
    if (resource_ptr != (longlong *)0x0) {
        (**(code **)(*resource_ptr + 0x38))();
    }
    if (*(longlong *)(render_context + RENDER_CONTEXT_OFFSET_5) != 0) {
        RenderingSystem_CleanupHandler(render_context);
    }
    
    // 执行组件处理器
    RenderingSystem_ComponentProcessor(security_hash ^ (ulonglong)security_buffer);
}

/**
 * 渲染系统状态管理器
 * 
 * 功能说明：
 * - 管理渲染系统状态和标志位
 * - 处理渲染组件的初始化和配置
 * - 执行渲染数据的加载和处理
 * - 管理渲染对象的创建和销毁
 * - 处理渲染系统的启用和禁用状态
 * 
 * @param param_1 渲染系统上下文指针
 */
void RenderingSystem_StateManager(longlong render_context)
{
    uint flag_value;
    longlong context_ptr;
    uint64_t object_ptr;
    int status_code;
    uint64_t resource_handle;
    longlong *object_instance;
    longlong component_data;
    byte flag_bit;
    char char_index;
    longlong loop_counter;
    longlong *component_array;
    longlong **component_ptr;
    
    // 获取渲染对象指针
    object_ptr = *(uint64_t *)(*(longlong *)(render_context + RENDER_CONTEXT_OFFSET_3) + BUFFER_OFFSET_1);
    
    // 分配渲染资源
    resource_handle = RenderingSystem_MemoryAllocator(_DAT_180c8ed18, 0x2f0, 0x10, 0xd);
    object_instance = (longlong *)RenderingSystem_ObjectInitializer(resource_handle, 4);
    component_array = object_instance;
    
    // 初始化渲染对象
    if (object_instance != (longlong *)0x0) {
        (**(code **)(*object_instance + 0x28))(object_instance);
    }
    
    // 检查对象状态并配置
    if (object_instance[0x4d] == 0) {
        RenderingSystem_ObjectCleanup(object_instance, &global_state_4472_ptr);
    }
    
    // 加载渲染配置
    RenderingSystem_ConfigLoader(object_instance, &system_memory_0300);
    component_ptr = &context_ptr;
    context_ptr = object_instance;
    (**(code **)(*object_instance + 0x28))(object_instance);
    
    // 处理渲染数据
    RenderingSystem_DataProcessor(object_ptr, &context_ptr, 1, 1, 0, 1, 0);
    component_array = (longlong *)0x0;
    context_ptr = *(longlong **)(render_context + BUFFER_OFFSET_3);
    *(longlong **)(render_context + BUFFER_OFFSET_3) = object_instance;
    
    // 清理旧资源
    if (context_ptr != (longlong *)0x0) {
        (**(code **)(*context_ptr + 0x38))();
    }
    
    // 初始化新对象
    RenderingSystem_ObjectCleanup(*(uint64_t *)(render_context + BUFFER_OFFSET_3), &global_state_2984_ptr);
    component_data = *(longlong *)(render_context + BUFFER_OFFSET_3);
    flag_value = *(uint *)(component_data + BUFFER_OFFSET_4);
    *(uint *)(component_data + BUFFER_OFFSET_4) = flag_value | 0x2020000;
    RenderingSystem_FlagUpdater(component_data, flag_value);
    
    // 处理组件数据
    context_ptr = *(longlong *)(component_data + BUFFER_OFFSET_5);
    if ((context_ptr != 0) && (((*(uint *)(component_data + BUFFER_OFFSET_4) ^ flag_value) >> 0x16 & 1) != 0)) {
        flag_bit = ~(byte)(*(uint *)(component_data + BUFFER_OFFSET_4) >> 0x16) & 1;
        status_code = (int)(*(longlong *)(context_ptr + BUFFER_OFFSET_6) - *(longlong *)(context_ptr + BUFFER_OFFSET_7) >> 3);
        if (0 < status_code) {
            component_data = 0;
            do {
                object_instance = *(longlong **)(*(longlong *)(context_ptr + BUFFER_OFFSET_7) + component_data * 8);
                (**(code **)(*object_instance + 0xe0))(object_instance, flag_bit);
                component_data = component_data + 1;
            } while (component_data < status_code);
        }
        
        // 处理子组件
        char_index = '\0';
        if ('\0' < *(char *)(context_ptr + BUFFER_OFFSET_10)) {
            do {
                component_data = 0;
                loop_counter = (longlong)char_index * 0x100 + *(longlong *)(context_ptr + BUFFER_OFFSET_11);
                status_code = (int)(*(longlong *)(loop_counter + BUFFER_OFFSET_8) - *(longlong *)(loop_counter + BUFFER_OFFSET_9) >> 3);
                if (0 < status_code) {
                    do {
                        object_instance = *(longlong **)(*(longlong *)(loop_counter + BUFFER_OFFSET_9) + component_data * 8);
                        (**(code **)(*object_instance + 0xe0))(object_instance, flag_bit);
                        component_data = component_data + 1;
                    } while (component_data < status_code);
                }
                char_index = char_index + '\x01';
            } while (char_index < *(char *)(context_ptr + BUFFER_OFFSET_10));
        }
    }
    return;
}

// 技术说明：
// 1. 本模块实现了渲染系统的高级参数处理和状态管理功能
// 2. 使用了多层缓冲区管理机制，确保渲染数据的安全处理
// 3. 实现了复杂的字符串比较和参数验证逻辑
// 4. 包含了完整的资源分配和清理机制
// 5. 支持多层次的组件管理和状态控制
// 6. 使用了位操作和标志位管理来优化性能
// 7. 实现了递归的组件处理机制
// 8. 包含了安全栈保护机制，防止栈溢出攻击