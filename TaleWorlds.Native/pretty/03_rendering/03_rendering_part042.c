#include "TaleWorlds.Native.Split.h"

// 03_rendering_part042.c - 渲染系统高级数据处理和渲染控制模块
// 包含9个核心函数，涵盖渲染数据块解析、渲染对象创建、批量渲染操作、坐标插值计算、渲染状态管理、多种渲染操作支持等高级渲染功能

// 常量定义
#define RENDER_DATA_BUFFER_SIZE 16
#define MAX_RENDER_STACK_DEPTH 38
#define RENDER_FLOAT_PRECISION 1.5258789e-05f
#define RENDER_COORDINATE_THRESHOLD 0x846c
#define RENDER_COORDINATE_OFFSET_1 0x4d7
#define RENDER_COORDINATE_OFFSET_2 0x46b
#define RENDER_DEFAULT_COORDINATE 0x8000
#define RENDER_STACK_ALIGNMENT 0xe
#define RENDER_PARAM_FLAG_0x180000000 0x180000000

// 函数别名定义
typedef void (*render_data_processor)(longlong context, uint param1, float* data);
typedef uint (*render_coord_extractor)(void* buffer, uint offset);
typedef void (*render_transform_func)(float* matrix, float x, float y, float z);
typedef void (*render_memory_allocator)(void** ptr, size_t size);
typedef void (*render_resource_cleaner)(void* resource);

// 渲染数据处理器 - 处理渲染数据流和坐标变换
void process_rendering_data_stream(longlong render_context, uint render_flags, void* data_stream)
{
    // 局部变量定义
    uint8_t data_buffer[RENDER_DATA_BUFFER_SIZE];
    uint8_t byte_val;
    uint64_t long_val;
    uint8_t uint8_val;
    char char_val;
    uint8_t uint8_val_2;
    uint8_t uint8_val_3;
    uint8_t uint8_val_4;
    short short_val;
    uint uint_val;
    int int_val;
    uint8_t (*buffer_ptr)[RENDER_DATA_BUFFER_SIZE];
    uint64_t *long_ptr;
    int *int_ptr;
    longlong longlong_val;
    uint uint_val_2;
    ulonglong ulonglong_val;
    float *float_ptr;
    uint uint_val_3;
    int int_val_2;
    uint uint_val_4;
    longlong longlong_val_2;
    ulonglong ulonglong_val_2;
    uint uint_val_5;
    int int_val_3;
    float float_val;
    float float_val_2;
    float float_val_3;
    float float_val_4;
    float float_val_5;
    float float_val_6;
    float float_val_7;
    float float_val_8;
    float float_val_9;
    uint8_t stack_buffer_308[32];
    float stack_float_2e8;
    float stack_float_2e0;
    float stack_float_2d8;
    int stack_int_2c8;
    uint8_t stack_buffer_2b8[RENDER_DATA_BUFFER_SIZE];
    int stack_int_2a8;
    uint stack_uint_2a4;
    int stack_int_2a0;
    int stack_int_29c;
    uint stack_uint_298;
    longlong stack_long_290;
    uint8_t stack_buffer_288[RENDER_DATA_BUFFER_SIZE];
    uint8_t stack_buffer_278[RENDER_DATA_BUFFER_SIZE];
    uint8_t stack_buffer_268[RENDER_DATA_BUFFER_SIZE];
    uint8_t stack_buffer_258[12];
    float float_array_24c[4];
    float stack_float_23c;
    float stack_float_238;
    float stack_float_234;
    float stack_float_230;
    float stack_float_22c;
    float stack_float_228;
    float stack_float_224;
    float stack_float_220;
    float stack_float_21c;
    uint64_t stack_uint_188;
    uint uint_array_180[MAX_RENDER_STACK_DEPTH];
    ulonglong stack_ulonglong_e8;
    
    // 初始化变量
    stack_ulonglong_e8 = render_security_key ^ (ulonglong)stack_buffer_308;
    stack_int_29c = 0;
    stack_buffer_278._0_8_ = *(uint64_t *)(render_context + 0x70);
    stack_buffer_278._8_8_ = *(uint64_t *)(render_context + 0x78);
    stack_buffer_288 = *(uint8_t (*)[RENDER_DATA_BUFFER_SIZE])(render_context + 0x50);
    stack_uint_2a4 = 1;
    stack_int_2a8 = 0;
    stack_int_2a0 = 0;
    stack_uint_298 = render_flags;
    stack_long_290 = render_context;
    buffer_ptr = (uint8_t (*)[RENDER_DATA_BUFFER_SIZE])extract_render_data_buffer(stack_buffer_2b8, stack_buffer_288, render_flags);
    ulonglong_val_2 = 0;
    stack_buffer_2b8._8_4_ = extract_render_coord_offset(*(uint8_t (*)[12])*buffer_ptr, 8);
    float_val = stack_float_228;
    float_val_3 = float_array_24c[1];
    float_val_4 = float_array_24c[3];
    float_val_5 = stack_float_23c;
    float_val_6 = float_array_24c[2];
    float_val_7 = stack_float_230;
    float_val_8 = stack_float_234;
    float_val_9 = stack_float_238;
    int_val_3 = 0;
    uint_val_2 = stack_buffer_2b8._8_4_;
    uint_val_3 = 0;
    stack_buffer_2b8 = *buffer_ptr;
    
    // 主处理循环
process_data_loop:
    uint_val_4 = uint_val_3;
    longlong_val = stack_long_290;
    uint_val = stack_buffer_2b8._12_4_;
    if ((int)uint_val <= (int)uint_val_2) {
        // 数据流结束处理
        render_error_handler(stack_ulonglong_e8 ^ (ulonglong)stack_buffer_308);
    }
    long_val = stack_buffer_2b8._0_8_;
    uint_val_3 = (uint)ulonglong_val_2;
    ulonglong_val = ulonglong_val_2 & 0xffffffff;
    uint_val_5 = uint_val_2 + 1;
    stack_int_2c8 = 1;
    longlong_val_2 = (longlong)(int)uint_val_5;
    stack_buffer_2b8._8_4_ = uint_val_5;
    stack_buffer_2b8._12_4_ = uint_val;
    byte_val = *(uint8_t *)((longlong)(int)uint_val_2 + stack_buffer_2b8._0_8_);
    
    // 根据数据类型进行处理
    switch(byte_val) {
    case 1:
    case 3:
    case 0x12:
    case 0x17:
        // 简单数据处理
        stack_int_2a8 = stack_int_2a8 + (int)uint_val_4 / 2;
        uint_val_2 = uint_val_5;
        goto process_data_loop;
    default:
        if (byte_val == 0xff) {
            // 处理浮点数数据
            if ((int)uint_val_5 < (int)uint_val) {
                uint_val_5 = uint_val_2 + 2;
                uint8_val = *(uint8_t *)(longlong_val_2 + stack_buffer_2b8._0_8_);
                stack_buffer_2b8._8_4_ = uint_val_5;
            }
            else {
                uint8_val = 0;
            }
            if ((int)uint_val_5 < (int)uint_val) {
                longlong_val = (longlong)(int)uint_val_5;
                uint_val_5 = uint_val_5 + 1;
                stack_buffer_2b8._8_4_ = uint_val_5;
                uint8_val_2 = *(uint8_t *)(longlong_val + long_val);
            }
            else {
                uint8_val_2 = 0;
            }
            if ((int)uint_val_5 < (int)uint_val) {
                longlong_val = (longlong)(int)uint_val_5;
                uint_val_5 = uint_val_5 + 1;
                stack_buffer_2b8._8_4_ = uint_val_5;
                uint8_val_3 = *(uint8_t *)(longlong_val + long_val);
            }
            else {
                uint8_val_3 = 0;
            }
            if ((int)uint_val_5 < (int)uint_val) {
                longlong_val = (longlong)(int)uint_val_5;
                uint_val_5 = uint_val_5 + 1;
                stack_buffer_2b8._8_4_ = uint_val_5;
                uint8_val_4 = *(uint8_t *)(longlong_val + long_val);
            }
            else {
                uint8_val_4 = 0;
            }
            float_val = (float)CONCAT31(CONCAT21(CONCAT11(uint8_val, uint8_val_2), uint8_val_3), uint8_val_4) * RENDER_FLOAT_PRECISION;
            uint_val_2 = uint_val_5;
        }
        else {
            // 处理坐标数据
            if ((byte_val != 0x1c) && (0xde < byte_val - 0x20)) {
                render_error_handler(stack_ulonglong_e8 ^ (ulonglong)stack_buffer_308);
            }
            if ((int)uint_val < (int)uint_val_2) {
set_buffer_bounds:
                stack_buffer_2b8._8_4_ = uint_val;
            }
            else {
                stack_buffer_2b8._8_4_ = uint_val_2;
                if ((int)uint_val_2 < 0) goto set_buffer_bounds;
            }
            short_val = extract_render_coordinate(stack_buffer_2b8);
            ulonglong_val_2 = 0;
            float_val = (float)(int)short_val;
            uint_val_2 = stack_buffer_2b8._8_4_;
        }
        if (0x2f < (int)uint_val_4) {
            render_error_handler(stack_ulonglong_e8 ^ (ulonglong)stack_buffer_308);
        }
        float_array_24c[(longlong)(int)uint_val_4 + 1] = float_val;
        float_val = stack_float_228;
        float_val_3 = float_array_24c[1];
        float_val_4 = float_array_24c[3];
        float_val_5 = stack_float_23c;
        float_val_6 = float_array_24c[2];
        float_val_7 = stack_float_230;
        float_val_8 = stack_float_234;
        float_val_9 = stack_float_238;
        uint_val_3 = (uint)ulonglong_val_2;
        if ((uint)ulonglong_val_2 == 0) {
            uint_val_3 = uint_val_4 + 1;
        }
        goto process_data_loop;
    case 4:
        // 处理渲染数据类型4
        stack_uint_2a4 = uint_val_3;
        if ((int)uint_val_4 < 1) {
            render_error_handler(stack_ulonglong_e8 ^ (ulonglong)stack_buffer_308);
        }
        process_render_data_type4(data_stream, RENDER_PARAM_FLAG_0x180000000, float_array_24c[(int)uint_val_4]);
        ulonglong_val_2 = 0;
        uint_val_2 = uint_val_5;
        uint_val_3 = 0;
        if (stack_int_2c8 == 0) {
            uint_val_3 = uint_val_4;
        }
        goto process_data_loop;
    case 5:
        // 处理渲染数据类型5
        if ((int)uint_val_4 < 2) {
            render_error_handler(stack_ulonglong_e8 ^ (ulonglong)stack_buffer_308);
        }
        if (1 < (int)uint_val_4) {
            int_val_2 = 1;
            do {
                process_render_data_type5(data_stream);
                int_val_2 = int_val_2 + 2;
            } while (int_val_2 < (int)uint_val_4);
            ulonglong_val_2 = 0;
            uint_val_2 = uint_val_5;
            uint_val_3 = 0;
            if (stack_int_2c8 == 0) {
                uint_val_3 = uint_val_4;
            }
            goto process_data_loop;
        }
        break;
    case 6:
        // 处理渲染数据类型6
        if ((int)uint_val_4 < 1) {
            render_error_handler(stack_ulonglong_e8 ^ (ulonglong)stack_buffer_308);
        }
        while ((int)ulonglong_val < (int)uint_val_4) {
            process_render_data_type5(data_stream);
            uint_val_3 = (int)ulonglong_val + 1;
process_type6_loop:
            if ((int)uint_val_4 <= (int)uint_val_3) break;
            process_render_data_type5(data_stream);
            ulonglong_val = (ulonglong)(uint_val_3 + 1);
        }
        break;
    case 7:
        // 处理渲染数据类型7
        if (0 < (int)uint_val_4) goto process_type6_loop;
        goto render_error_handler;
    case 8:
        // 处理渲染数据类型8
        if ((int)uint_val_4 < 6) {
            render_error_handler(stack_ulonglong_e8 ^ (ulonglong)stack_buffer_308);
        }
        if (5 < (int)uint_val_4) {
            int_val_2 = 5;
            float_ptr = float_array_24c + 5;
            do {
                stack_float_2d8 = float_ptr[1];
                stack_float_2e0 = *float_ptr;
                stack_float_2e8 = float_ptr[-1];
                process_render_data_type8(data_stream);
                int_val_2 = int_val_2 + 6;
                float_ptr = float_ptr + 6;
            } while (int_val_2 < (int)uint_val_4);
            ulonglong_val_2 = 0;
            uint_val_2 = uint_val_5;
            uint_val_3 = 0;
            if (stack_int_2c8 == 0) {
                uint_val_3 = uint_val_4;
            }
            goto process_data_loop;
        }
        break;
    case 10:
        // 处理渲染数据类型10
        if (stack_int_29c == 0) {
            if (*(int *)(stack_long_290 + 0x9c) != 0) {
                long_ptr = (uint64_t *)extract_render_resource_data(stack_buffer_268, stack_long_290, stack_uint_298);
                ulonglong_val_2 = 0;
                stack_buffer_278._0_8_ = *long_ptr;
                stack_buffer_278._8_8_ = long_ptr[1];
            }
            stack_int_29c = 1;
        }
        goto process_render_data_type10;
    case 0xb:
        // 处理渲染数据类型0xb
        if (int_val_3 < 1) {
            render_error_handler(stack_ulonglong_e8 ^ (ulonglong)stack_buffer_308);
        }
        stack_int_2a0 = int_val_3 + -1;
        longlong_val = (longlong)stack_int_2a0;
        if (uint_val_3 == 0) {
            uint_val_3 = uint_val_4;
        }
        stack_buffer_2b8._4_4_ = uint_array_180[longlong_val * 4 + -1];
        stack_buffer_2b8._0_4_ = *(uint32_t *)(&stack_uint_188 + longlong_val * 2);
        stack_buffer_2b8._8_4_ = uint_array_180[longlong_val * 4];
        stack_buffer_2b8._12_4_ = uint_array_180[longlong_val * 4 + 1];
        int_val_3 = stack_int_2a0;
        uint_val_2 = uint_array_180[longlong_val * 4];
        goto process_data_loop;
    case 0xc:
        // 处理渲染数据类型0xc
        if ((int)uint_val_5 < (int)uint_val) {
            uint_val_5 = uint_val_2 + 2;
            char_val = *(char *)(longlong_val_2 + stack_buffer_2b8._0_8_);
            stack_buffer_2b8._8_4_ = uint_val_5;
        }
        else {
            char_val = '\0';
        }
        uint_val_2 = uint_val_5;
        if (char_val == '\"') {
            // 处理双引号字符
            if ((int)uint_val_4 < 7) {
                render_error_handler(stack_ulonglong_e8 ^ (ulonglong)stack_buffer_308);
            }
            stack_float_2d8 = 0.0;
            process_render_data_type8(data_stream, RENDER_PARAM_FLAG_0x180000000, 0, float_val_6);
            stack_float_2d8 = 0.0;
            stack_float_2e8 = -float_val_4;
            stack_float_2e0 = float_val_7;
            process_render_data_type8(data_stream);
            ulonglong_val_2 = 0;
            uint_val_3 = 0;
            if (stack_int_2c8 == 0) {
                uint_val_3 = uint_val_4;
            }
            goto process_data_loop;
        }
        if (char_val == '#') {
            // 处理井号字符
            if ((int)uint_val_4 < 0xd) {
                render_error_handler(stack_ulonglong_e8 ^ (ulonglong)stack_buffer_308);
            }
            process_render_data_type8(data_stream, RENDER_PARAM_FLAG_0x180000000, float_val_6, float_val_4);
            stack_float_2d8 = stack_float_21c;
            stack_float_2e0 = stack_float_220;
        }
        else {
            if (char_val == '$') {
                // 处理美元符号字符
                if ((int)uint_val_4 < 9) {
                    render_error_handler(stack_ulonglong_e8 ^ (ulonglong)stack_buffer_308);
                }
                stack_float_2d8 = 0.0;
                process_render_data_type8(data_stream, RENDER_PARAM_FLAG_0x180000000, float_val_6, float_val_4);
                stack_float_2d8 = -(float_val_5 + float_val_6 + stack_float_22c);
                stack_float_2e8 = stack_float_22c;
                stack_float_2e0 = float_val;
                process_render_data_type8(data_stream);
                ulonglong_val_2 = 0;
                uint_val_3 = 0;
                if (stack_int_2c8 == 0) {
                    uint_val_3 = uint_val_4;
                }
                goto process_data_loop;
            }
            if ((char_val != '%') || ((int)uint_val_4 < 0xb)) {
                render_error_handler(stack_ulonglong_e8 ^ (ulonglong)stack_buffer_308);
            }
            // 处理百分比字符
            float_val = float_val_4 + float_val_3 + float_val_9 + float_val_7 + stack_float_228;
            float_val_2 = float_val_5 + float_val_6 + float_val_8 + stack_float_22c + stack_float_224;
            if (ABS(float_val) <= ABS(float_val_2)) {
                float_val = -float_val;
                float_val_2 = stack_float_220;
            }
            else {
                float_val_2 = -float_val_2;
                float_val = stack_float_220;
            }
            process_render_data_type8(data_stream, RENDER_PARAM_FLAG_0x180000000, float_val_6, float_val_4);
            stack_float_2e0 = float_val;
            stack_float_2d8 = float_val_2;
        }
        stack_float_2e8 = stack_float_224;
        float_val = stack_float_228;
        process_render_data_type8(data_stream);
        ulonglong_val_2 = 0;
        uint_val_3 = 0;
        if (stack_int_2c8 == 0) {
            uint_val_3 = uint_val_4;
        }
        goto process_data_loop;
    case 0xe:
        // 处理渲染数据类型0xe
        process_render_data_type0xe(data_stream);
        goto render_error_handler;
    case 0x13:
    case 0x14:
        // 处理渲染数据类型0x13和0x14
        if (stack_uint_2a4 != 0) {
            stack_int_2a8 = stack_int_2a8 + (int)uint_val_4 / 2;
        }
        stack_buffer_2b8._8_4_ = ((int)((stack_int_2a8 + 7 >> 0x1f & 7U) + stack_int_2a8 + 7) >> 3) + uint_val_5;
        if (((int)uint_val < (int)stack_buffer_2b8._8_4_) || ((int)stack_buffer_2b8._8_4_ < 0)) {
            stack_buffer_2b8._8_4_ = uint_val;
            uint_val_2 = uint_val;
            stack_uint_2a4 = uint_val_3;
        }
        else {
            uint_val_2 = stack_buffer_2b8._8_4_;
            stack_uint_2a4 = uint_val_3;
        }
        goto process_data_loop;
    case 0x15:
        // 处理渲染数据类型0x15
        stack_uint_2a4 = uint_val_3;
        if ((int)uint_val_4 < 2) {
            render_error_handler(stack_ulonglong_e8 ^ (ulonglong)stack_buffer_308);
        }
        process_render_data_type4(data_stream, RENDER_PARAM_FLAG_0x180000000, float_array_24c[(int)uint_val_4]);
        ulonglong_val_2 = 0;
        uint_val_2 = uint_val_5;
        uint_val_3 = 0;
        if (stack_int_2c8 == 0) {
            uint_val_3 = uint_val_4;
        }
        goto process_data_loop;
    case 0x16:
        // 处理渲染数据类型0x16
        stack_uint_2a4 = uint_val_3;
        if ((int)uint_val_4 < 1) {
            render_error_handler(stack_ulonglong_e8 ^ (ulonglong)stack_buffer_308);
        }
        process_render_data_type4(data_stream, RENDER_PARAM_FLAG_0x180000000, 0);
        ulonglong_val_2 = 0;
        uint_val_2 = uint_val_5;
        uint_val_3 = 0;
        if (stack_int_2c8 == 0) {
            uint_val_3 = uint_val_4;
        }
        goto process_data_loop;
    case 0x18:
        // 处理渲染数据类型0x18
        if ((int)uint_val_4 < 8) {
            render_error_handler(stack_ulonglong_e8 ^ (ulonglong)stack_buffer_308);
        }
        if (5 < (int)(uint_val_4 - 2)) {
            int_val_3 = 5;
            float_ptr = float_array_24c + 5;
            do {
                stack_float_2d8 = float_ptr[1];
                stack_float_2e0 = *float_ptr;
                stack_float_2e8 = float_ptr[-1];
                process_render_data_type8(data_stream);
                uint_val_3 = (int)ulonglong_val + 6;
                ulonglong_val = (ulonglong)uint_val_3;
                float_ptr = float_ptr + 6;
                int_val_3 = int_val_3 + 6;
            } while (int_val_3 < (int)(uint_val_4 - 2));
            ulonglong_val_2 = 0;
        }
        if ((int)uint_val_4 <= (int)(uint_val_3 + 1)) {
            render_error_handler(stack_ulonglong_e8 ^ (ulonglong)stack_buffer_308);
        }
        process_render_data_type5(data_stream);
        int_val_3 = stack_int_2a0;
        uint_val_2 = uint_val_5;
        uint_val_3 = (uint)ulonglong_val_2;
        if (stack_int_2c8 == 0) {
            uint_val_3 = uint_val_4;
        }
        goto process_data_loop;
    case 0x19:
        // 处理渲染数据类型0x19
        if ((int)uint_val_4 < 8) {
            render_error_handler(stack_ulonglong_e8 ^ (ulonglong)stack_buffer_308);
        }
        if (1 < (int)(uint_val_4 - 6)) {
            int_val_2 = 1;
            do {
                process_render_data_type5(data_stream);
                uint_val_3 = (int)ulonglong_val + 2;
                ulonglong_val = (ulonglong)uint_val_3;
                int_val_2 = int_val_2 + 2;
            } while (int_val_2 < (int)(uint_val_4 - 6));
        }
        if ((int)uint_val_4 <= (int)(uint_val_3 + 5)) {
            render_error_handler(stack_ulonglong_e8 ^ (ulonglong)stack_buffer_308);
        }
        stack_float_2d8 = float_array_24c[(longlong)(int)uint_val_3 + 6];
        stack_float_2e0 = float_array_24c[(longlong)(int)uint_val_3 + 5];
        stack_float_2e8 = float_array_24c[(longlong)(int)uint_val_3 + 4];
        process_render_data_type8(data_stream);
        ulonglong_val_2 = 0;
        uint_val_2 = uint_val_5;
        uint_val_3 = 0;
        if (stack_int_2c8 == 0) {
            uint_val_3 = uint_val_4;
        }
        goto process_data_loop;
    case 0x1a:
    case 0x1b:
        // 处理渲染数据类型0x1a和0x1b
        if ((int)uint_val_4 < 4) {
            render_error_handler(stack_ulonglong_e8 ^ (ulonglong)stack_buffer_308);
        }
        int_val_2 = (uint_val_4 & 1) + 3;
        if ((int)uint_val_4 <= int_val_2) break;
        float_ptr = float_array_24c + (ulonglong)(uint_val_4 & 1) + 3;
        do {
            stack_float_2d8 = float_ptr[1];
            stack_float_2e8 = *float_ptr;
            if (byte_val == 0x1b) {
                stack_float_2e0 = stack_float_2d8;
                stack_float_2d8 = 0.0;
            }
            else {
                stack_float_2e0 = 0.0;
            }
            process_render_data_type8(data_stream);
            int_val_2 = int_val_2 + 4;
            float_ptr = float_ptr + 4;
        } while (int_val_2 < (int)uint_val_4);
        ulonglong_val_2 = 0;
        uint_val_2 = uint_val_5;
        uint_val_3 = 0;
        if (stack_int_2c8 == 0) {
            uint_val_3 = uint_val_4;
        }
        goto process_data_loop;
    case 0x1d:
        // 处理渲染数据类型0x1d
process_render_data_type10:
        if (((int)uint_val_4 < 1) || (9 < int_val_3)) {
            render_error_handler(stack_ulonglong_e8 ^ (ulonglong)stack_buffer_308);
        }
        longlong_val_2 = (longlong)int_val_3;
        int_val_3 = int_val_3 + 1;
        (&stack_uint_188)[longlong_val_2 * 2] = stack_buffer_2b8._0_8_;
        *(uint64_t *)(uint_array_180 + longlong_val_2 * 4) = stack_buffer_2b8._8_8_;
        buffer_ptr = &stack_buffer_278;
        if (byte_val != 10) {
            buffer_ptr = (uint8_t (*)[RENDER_DATA_BUFFER_SIZE])(longlong_val + 0x60);
        }
        data_buffer = *buffer_ptr;
        stack_buffer_2b8._0_8_ = data_buffer._0_8_;
        stack_buffer_2b8._12_4_ = data_buffer._12_4_;
        int_val_2 = (int)ulonglong_val_2;
        stack_buffer_2b8._8_4_ = stack_buffer_2b8._12_4_;
        if (-1 < data_buffer._8_8_) {
            stack_buffer_2b8._8_4_ = int_val_2;
        }
        if ((int)stack_buffer_2b8._8_4_ < (int)stack_buffer_2b8._12_4_) {
            longlong_val = (longlong)(int)stack_buffer_2b8._8_4_;
            stack_buffer_2b8._8_4_ = stack_buffer_2b8._8_4_ + 1;
            uint8_val = *(uint8_t *)(longlong_val + stack_buffer_2b8._0_8_);
        }
        else {
            uint8_val = 0;
        }
        if ((int)stack_buffer_2b8._8_4_ < (int)stack_buffer_2b8._12_4_) {
            longlong_val = (longlong)(int)stack_buffer_2b8._8_4_;
            stack_buffer_2b8._8_4_ = stack_buffer_2b8._8_4_ + 1;
            uint8_val_2 = *(uint8_t *)(longlong_val + stack_buffer_2b8._0_8_);
        }
        else {
            uint8_val_2 = 0;
        }
        uint_val_2 = (uint)CONCAT11(uint8_val, uint8_val_2);
        if (uint_val_2 < RENDER_COORDINATE_THRESHOLD) {
            int_val = 0x6b;
            if (RENDER_COORDINATE_OFFSET_1 < uint_val_2) {
                int_val = RENDER_COORDINATE_OFFSET_2;
            }
        }
        else {
            int_val = RENDER_DEFAULT_COORDINATE;
        }
        stack_int_2a0 = int_val_3;
        if (((int)float_array_24c[(longlong)(int)(uint_val_4 - 1) + 1] + int_val < 0) ||
           ((int)uint_val_2 <= (int)float_array_24c[(longlong)(int)(uint_val_4 - 1) + 1] + int_val)) {
            stack_buffer_288._8_8_ = 0;
            stack_buffer_288._0_8_ = ulonglong_val_2;
            data_buffer = stack_buffer_288;
            stack_buffer_288._4_4_ = (uint32_t)(ulonglong_val_2 >> 0x20);
            stack_buffer_288._8_4_ = 0;
            stack_buffer_288._12_4_ = 0;
            stack_buffer_2b8._4_4_ = stack_buffer_288._4_4_;
            stack_buffer_2b8._8_4_ = stack_buffer_288._8_4_;
            stack_buffer_2b8._12_4_ = stack_buffer_288._12_4_;
            stack_buffer_288 = data_buffer;
        }
        else {
            int_ptr = (int *)extract_render_data_buffer(stack_buffer_258, stack_buffer_2b8);
            ulonglong_val_2 = 0;
            int_val_2 = *int_ptr;
            stack_buffer_2b8._4_4_ = int_ptr[1];
            stack_buffer_2b8._8_4_ = int_ptr[2];
            stack_buffer_2b8._12_4_ = int_ptr[3];
        }
        stack_buffer_2b8._0_4_ = int_val_2;
        if (stack_buffer_2b8._12_4_ == 0) {
            render_error_handler(stack_ulonglong_e8 ^ (ulonglong)stack_buffer_308);
        }
        stack_buffer_2b8._8_4_ = (uint32_t)ulonglong_val_2;
        uint_val_2 = stack_buffer_2b8._8_4_;
        uint_val_3 = stack_buffer_2b8._8_4_;
        if (stack_buffer_2b8._8_4_ == 0) {
            uint_val_3 = uint_val_4 - 1;
        }
        goto process_data_loop;
    case 0x1e:
        // 处理渲染数据类型0x1e
        if ((int)uint_val_4 < 4) {
            render_error_handler(stack_ulonglong_e8 ^ (ulonglong)stack_buffer_308);
        }
        while (int_val_2 = (int)ulonglong_val, int_val_2 + 3 < (int)uint_val_4) {
            uint_val_3 = int_val_2 + 4;
            if (uint_val_4 - int_val_2 == 5) {
                stack_float_2d8 = float_array_24c[(longlong)(int)uint_val_3 + 1];
            }
            else {
                stack_float_2d8 = 0.0;
            }
            stack_float_2e8 = float_array_24c[(longlong)int_val_2 + 3];
            stack_float_2e0 = float_array_24c[(longlong)int_val_2 + 4];
            process_render_data_type8(data_stream);
process_type0x1e_loop:
            if ((int)uint_val_4 <= (int)(uint_val_3 + 3)) break;
            stack_float_2d8 = float_array_24c[(longlong)(int)uint_val_3 + 4];
            if (uint_val_4 - uint_val_3 == 5) {
                stack_float_2e0 = float_array_24c[(longlong)(int)(uint_val_3 + 4) + 1];
            }
            else {
                stack_float_2e0 = 0.0;
            }
            stack_float_2e8 = float_array_24c[(longlong)(int)uint_val_3 + 3];
            process_render_data_type8(data_stream);
            ulonglong_val = (ulonglong)(uint_val_3 + 4);
        }
        ulonglong_val_2 = 0;
        break;
    case 0x1f:
        // 处理渲染数据类型0x1f
        if (3 < (int)uint_val_4) goto process_type0x1e_loop;
        goto render_error_handler;
    }
    uint_val_2 = uint_val_5;
    uint_val_3 = (uint)ulonglong_val_2;
    if (stack_int_2c8 == 0) {
        uint_val_3 = uint_val_4;
    }
    goto process_data_loop;
}


// 渲染资源创建器 - 创建和初始化渲染资源
uint create_render_resource(uint64_t resource_id, uint render_flags, uint64_t *resource_handle)
{
    int result;
    uint64_t stack_buffer_78;
    uint64_t stack_buffer_70;
    uint64_t stack_buffer_68;
    uint64_t stack_buffer_60;
    uint64_t stack_buffer_58;
    uint64_t stack_buffer_50;
    int stack_int_48;
    uint64_t stack_buffer_40;
    uint64_t stack_buffer_38;
    uint64_t stack_buffer_30;
    uint64_t stack_buffer_28;
    uint64_t stack_buffer_20;
    uint64_t stack_buffer_18;
    uint stack_uint_10;
    
    // 初始化栈变量
    stack_buffer_78 = 1;
    stack_buffer_50 = 0;
    stack_int_48 = 0;
    stack_buffer_40 = 0;
    stack_uint_10 = 0;
    stack_buffer_70 = 0;
    stack_buffer_68 = 0;
    stack_buffer_60 = 0;
    stack_buffer_58 = 0;
    stack_buffer_38 = 0;
    stack_buffer_30 = 0;
    stack_buffer_28 = 0;
    stack_buffer_20 = 0;
    
    // 处理渲染数据流
    result = process_rendering_data_stream(0, 0, &stack_buffer_78);
    if (result != 0) {
        if (render_global_manager != 0) {
            *(int *)(render_global_manager + 0x3a8) = *(int *)(render_global_manager + 0x3a8) + 1;
        }
        stack_buffer_18 = allocate_render_memory((longlong)stack_int_48 * RENDER_STACK_ALIGNMENT, render_resource_pool);
        *resource_handle = stack_buffer_18;
        result = process_rendering_data_stream(resource_id, render_flags, &stack_buffer_40);
        if (result != 0) {
            return stack_uint_10;
        }
    }
    *resource_handle = 0;
    return 0;
}


// 渲染资源管理器 - 管理渲染资源的生命周期
ulonglong manage_render_resource(longlong resource_context, uint render_flags, uint64_t *resource_handle)
{
    int result;
    ulonglong resource_count;
    uint64_t stack_buffer_78;
    uint64_t stack_buffer_70;
    uint64_t stack_buffer_68;
    uint64_t stack_buffer_60;
    uint64_t stack_buffer_58;
    uint64_t stack_buffer_50;
    int stack_int_48;
    uint64_t stack_buffer_40;
    uint64_t stack_buffer_38;
    uint64_t stack_buffer_30;
    uint64_t stack_buffer_28;
    uint64_t stack_buffer_20;
    uint64_t stack_buffer_18;
    uint stack_uint_10;
    
    // 检查资源上下文
    if (*(int *)(resource_context + 0x4c) == 0) {
        resource_count = get_render_resource_count();
    }
    else {
        resource_count = 0;
        stack_buffer_78 = 1;
        stack_buffer_50 = 0;
        stack_int_48 = 0;
        stack_buffer_40 = 0;
        stack_uint_10 = 0;
        stack_buffer_70 = 0;
        stack_buffer_68 = 0;
        stack_buffer_60 = 0;
        stack_buffer_58 = 0;
        stack_buffer_38 = 0;
        stack_buffer_30 = 0;
        stack_buffer_28 = 0;
        stack_buffer_20 = 0;
        result = process_rendering_data_stream(0, 0, &stack_buffer_78);
        if (result != 0) {
            if (render_global_manager != 0) {
                *(int *)(render_global_manager + 0x3a8) = *(int *)(render_global_manager + 0x3a8) + 1;
            }
            stack_buffer_18 = allocate_render_memory((longlong)stack_int_48 * RENDER_STACK_ALIGNMENT, render_resource_pool);
            *resource_handle = stack_buffer_18;
            result = process_rendering_data_stream(resource_context, render_flags, &stack_buffer_40);
            if (result != 0) {
                return (ulonglong)stack_uint_10;
            }
        }
        *resource_handle = 0;
    }
    return resource_count;
}


// 渲染参数处理器 - 处理渲染参数和配置
uint process_render_parameters(uint64_t param1, uint64_t param2, uint64_t param3, uint64_t param4)
{
    int result;
    uint stack_param_EBP;
    uint64_t *stack_param_RSI;
    uint64_t xmm0_param;
    uint64_t xmm0_extra;
    uint64_t var2;
    uint64_t stack_buffer_28;
    uint64_t stack_buffer_38;
    uint64_t stack_buffer_40;
    uint64_t stack_buffer_48;
    int stack_int_50;
    uint64_t stack_buffer_58;
    uint64_t stack_buffer_60;
    uint64_t stack_buffer_70;
    uint64_t stack_buffer_78;
    uint64_t stack_param_80;
    uint stack_uint_88;
    
    // 初始化参数
    var2 = 1;
    stack_buffer_48 = 0;
    stack_int_50 = 0;
    stack_buffer_58 = 0;
    stack_uint_88 = 0;
    stack_buffer_38 = 0;
    stack_buffer_40 = 0;
    stack_buffer_70 = 0;
    stack_buffer_78 = 0;
    stack_buffer_28 = xmm0_param;
    stack_buffer_60 = xmm0_param;
    result = process_rendering_data_stream(param1, 0, &stack_buffer_20, param4, 1);
    if (result != 0) {
        if (render_global_manager != 0) {
            *(int *)(render_global_manager + 0x3a8) = *(int *)(render_global_manager + 0x3a8) + 1;
        }
        stack_param_80 = allocate_render_memory((longlong)stack_int_50 * RENDER_STACK_ALIGNMENT, render_resource_pool);
        *stack_param_RSI = stack_param_80;
        result = process_rendering_data_stream(xmm0_extra, stack_param_EBP, &stack_buffer_58, param4, var2);
        if (result != 0) {
            return stack_uint_88;
        }
    }
    *stack_param_RSI = 0;
    return 0;
}


// 渲染系统初始化器 - 初始化渲染系统组件
void initialize_rendering_system(void)
{
    return;
}


// 渲染坐标变换器 - 执行渲染坐标变换
void transform_render_coordinates(longlong transform_context, int coord_index, longlong coord_data, 
                                 float coord_x, float coord_y, float coord_z)
{
    float temp_float1;
    float temp_float2;
    
    // 检查坐标范围并执行变换
    if (((coord_y != coord_z) && (temp_float2 = *(float *)(coord_data + 0x1c), coord_y <= temp_float2)) &&
       (temp_float1 = *(float *)(coord_data + 0x18), temp_float1 <= coord_z)) {
        if (coord_y < temp_float1) {
            coord_x = coord_x + ((temp_float1 - coord_y) * (coord_z - coord_x)) / (coord_z - coord_y);
            coord_y = temp_float1;
        }
        if (temp_float2 < coord_z) {
            coord_z = coord_z + ((temp_float2 - coord_z) * (coord_z - coord_x)) / (coord_z - coord_y);
            coord_z = temp_float2;
        }
        temp_float2 = (float)coord_index;
        if ((coord_x <= temp_float2) && (coord_z <= temp_float2)) {
            *(float *)(transform_context + (longlong)coord_index * 4) =
                 (coord_z - coord_y) * *(float *)(coord_data + 0x14) +
                 *(float *)(transform_context + (longlong)coord_index * 4);
            return;
        }
        if ((coord_x < (float)(coord_index + 1)) || (coord_z < (float)(coord_index + 1))) {
            *(float *)(transform_context + (longlong)coord_index * 4) =
                 (1.0 - ((coord_x - temp_float2) + (coord_z - temp_float2)) * 0.5) *
                 (coord_z - coord_y) * *(float *)(coord_data + 0x14) +
                 *(float *)(transform_context + (longlong)coord_index * 4);
        }
    }
    return;
}


// 渲染边界计算器 - 计算渲染边界和范围
void calculate_render_bounds(longlong bounds_context, int bounds_index, longlong bounds_data, float bounds_param)
{
    float temp_float1;
    float temp_float2;
    float xmm5_param;
    float xmm4_param;
    float stack_param_68;
    
    temp_float2 = *(float *)(bounds_data + 0x1c);
    if ((xmm5_param <= temp_float2) && (temp_float1 = *(float *)(bounds_data + 0x18), temp_float1 <= xmm4_param)) {
        if (xmm5_param < temp_float1) {
            bounds_param = bounds_param + ((temp_float1 - xmm5_param) * (stack_param_68 - bounds_param)) /
                                (xmm4_param - xmm5_param);
            xmm5_param = temp_float1;
        }
        if (temp_float2 < xmm4_param) {
            stack_param_68 =
                 stack_param_68 +
                 ((temp_float2 - xmm4_param) * (stack_param_68 - bounds_param)) / (xmm4_param - xmm5_param);
            xmm4_param = temp_float2;
        }
        temp_float2 = (float)bounds_index;
        if ((bounds_param <= temp_float2) && (stack_param_68 <= temp_float2)) {
            *(float *)(bounds_context + (longlong)bounds_index * 4) =
                 (xmm4_param - xmm5_param) * *(float *)(bounds_data + 0x14) +
                 *(float *)(bounds_context + (longlong)bounds_index * 4);
            return;
        }
        if ((bounds_param < (float)(bounds_index + 1)) || (stack_param_68 < (float)(bounds_index + 1))) {
            *(float *)(bounds_context + (longlong)bounds_index * 4) =
                 (1.0 - ((bounds_param - temp_float2) + (stack_param_68 - temp_float2)) * 0.5) *
                 (xmm4_param - xmm5_param) * *(float *)(bounds_data + 0x14) +
                 *(float *)(bounds_context + (longlong)bounds_index * 4);
        }
    }
    return;
}


// 渲染数据优化器 - 优化渲染数据和性能
void optimize_rendering_data(longlong data_context, int data_index, longlong data_info, float data_param)
{
    float xmm0_param;
    float xmm4_param;
    float xmm5_param;
    float xmm6_param;
    
    if ((data_param < (float)(data_index + 1)) || (xmm6_param < (float)(data_index + 1))) {
        *(float *)(data_context + (longlong)data_index * 4) =
             (1.0 - ((data_param - xmm0_param) + (xmm6_param - xmm0_param)) * 0.5) *
             (xmm4_param - xmm5_param) * *(float *)(data_info + 0x14) +
             *(float *)(data_context + (longlong)data_index * 4);
    }
    return;
}


// 渲染系统清理器 - 清理渲染系统资源
void cleanup_rendering_system(void)
{
    return;
}


// 渲染系统重置器 - 重置渲染系统状态
void reset_rendering_system(void)
{
    return;
}


// 渲染系统验证器 - 验证渲染系统状态
void validate_rendering_system(void)
{
    return;
}


// 渲染管线处理器 - 处理渲染管线数据
void process_rendering_pipeline(longlong pipeline_context, longlong pipeline_data, int pipeline_size, 
                               longlong *pipeline_params, float pipeline_param)
{
    longlong temp_long1;
    float *temp_float_ptr;
    int temp_int1;
    longlong temp_long2;
    ulonglong temp_ulong1;
    longlong temp_long3;
    int temp_int2;
    uint temp_uint1;
    float temp_float10;
    float temp_float11;
    float temp_float12;
    float temp_float13;
    float temp_float14;
    float temp_float15;
    float temp_float16;
    float temp_float17;
    float temp_float18;
    float temp_float19;
    float temp_float20;
    float temp_float21;
    ulonglong temp_ulong2;
    
    // 检查管线参数有效性
    if (pipeline_params != (longlong *)0x0) {
        temp_float21 = pipeline_param + 1.0;
        do {
            temp_float16 = *(float *)((longlong)pipeline_params + 0xc);
            temp_float11 = *(float *)(pipeline_params + 1);
            if (temp_float16 == 0.0) {
                if (temp_float11 < (float)pipeline_size) {
                    if (temp_float11 < 0.0) {
                        transform_render_coordinates(pipeline_data + -4, 0, pipeline_params, temp_float11, pipeline_param, temp_float11, temp_float21);
                    }
                    else {
                        transform_render_coordinates(pipeline_context, (int)temp_float11, pipeline_params, temp_float11, pipeline_param, temp_float11, temp_float21);
                        transform_render_coordinates(pipeline_data + -4);
                    }
                }
            }
            else {
                temp_float17 = *(float *)(pipeline_params + 3);
                temp_float19 = *(float *)(pipeline_params + 2);
                temp_float20 = temp_float16 + temp_float11;
                temp_float15 = temp_float11;
                temp_float18 = pipeline_param;
                if (pipeline_param < temp_float17) {
                    temp_float15 = (temp_float17 - pipeline_param) * temp_float16 + temp_float11;
                    temp_float18 = temp_float17;
                }
                temp_float17 = *(float *)((longlong)pipeline_params + 0x1c);
                temp_float14 = temp_float20;
                temp_float10 = temp_float21;
                if (temp_float17 < temp_float21) {
                    temp_float14 = (temp_float17 - pipeline_param) * temp_float16 + temp_float11;
                    temp_float10 = temp_float17;
                }
                if ((((temp_float15 < 0.0) || (temp_float14 < 0.0)) || ((float)pipeline_size <= temp_float15)) ||
                   ((float)pipeline_size <= temp_float14)) {
                    temp_ulong1 = 0;
                    if (0 < pipeline_size) {
                        do {
                            temp_uint1 = (int)temp_ulong1 + 1;
                            temp_ulong2 = (ulonglong)temp_uint1;
                            temp_float15 = (float)(int)temp_ulong1;
                            temp_float17 = (float)(int)temp_uint1;
                            temp_float18 = (temp_float15 - temp_float11) * (1.0 / temp_float16) + pipeline_param;
                            temp_float19 = (temp_float17 - temp_float11) * (1.0 / temp_float16) + pipeline_param;
                            if ((temp_float15 <= temp_float11) || (temp_float20 <= temp_float17)) {
                                if ((temp_float15 <= temp_float20) || (temp_float11 <= temp_float17)) {
                                    if (((temp_float11 < temp_float15) && (temp_float15 < temp_float20)) ||
                                       ((temp_float20 < temp_float15 && (temp_float15 < temp_float11)))) {
                                        transform_render_coordinates(pipeline_context, temp_ulong1, pipeline_params, temp_float11, pipeline_param, temp_float15, temp_float18);
                                    }
                                    else if ((temp_float17 <= temp_float11) || (temp_float20 <= temp_float17)) {
                                        if ((temp_float20 < temp_float17) && (temp_float17 < temp_float11)) {
                                            transform_render_coordinates(pipeline_context, temp_ulong1, pipeline_params, temp_float11, pipeline_param, temp_float17, temp_float19);
                                        }
                                    }
                                    else {
                                        transform_render_coordinates(pipeline_context, temp_ulong1, pipeline_params, temp_float11, pipeline_param, temp_float17, temp_float19);
                                    }
                                }
                                else {
                                    transform_render_coordinates(pipeline_context, temp_ulong1, pipeline_params, temp_float11, pipeline_param, temp_float17, temp_float19);
                                    transform_render_coordinates();
                                }
                            }
                            else {
                                transform_render_coordinates(pipeline_context, temp_ulong1, pipeline_params, temp_float11, pipeline_param, temp_float15, temp_float18);
                                transform_render_coordinates();
                            }
                            transform_render_coordinates(pipeline_context);
                            temp_ulong1 = temp_ulong2 & 0xffffffff;
                        } while ((int)temp_ulong2 < pipeline_size);
                    }
                }
                else {
                    temp_int1 = (int)temp_float15;
                    if (temp_int1 == (int)temp_float14) {
                        temp_long1 = (longlong)temp_int1;
                        *(float *)(pipeline_context + temp_long1 * 4) =
                             (1.0 - ((temp_float14 - (float)temp_int1) + (temp_float15 - (float)temp_int1)) * 0.5) *
                             *(float *)((longlong)pipeline_params + 0x14) * (temp_float10 - temp_float18) +
                             *(float *)(pipeline_context + temp_long1 * 4);
                        *(float *)(pipeline_data + temp_long1 * 4) =
                             (temp_float10 - temp_float18) * *(float *)((longlong)pipeline_params + 0x14) +
                             *(float *)(pipeline_data + temp_long1 * 4);
                    }
                    else {
                        temp_float16 = temp_float15;
                        if (temp_float14 < temp_float15) {
                            temp_float19 = -temp_float19;
                            temp_float16 = temp_float10 - pipeline_param;
                            temp_float10 = temp_float21 - (temp_float18 - pipeline_param);
                            temp_float18 = temp_float21 - temp_float16;
                            temp_float16 = temp_float14;
                            temp_float14 = temp_float15;
                            temp_float11 = temp_float20;
                        }
                        temp_int2 = (int)temp_float16;
                        temp_int1 = (int)temp_float14;
                        temp_long1 = (longlong)(temp_int2 + 1);
                        temp_long3 = (longlong)temp_int1;
                        temp_float17 = *(float *)((longlong)pipeline_params + 0x14);
                        temp_float15 = temp_float17 * temp_float19;
                        temp_float20 = ((float)(temp_int2 + 1) - temp_float11) * temp_float19 + pipeline_param;
                        temp_float11 = (temp_float20 - temp_float18) * temp_float17;
                        *(float *)(pipeline_context + (longlong)temp_int2 * 4) =
                             (0.5 - (temp_float16 - (float)temp_int2) * 0.5) * temp_float11 +
                             *(float *)(pipeline_context + (longlong)temp_int2 * 4);
                        if (temp_long1 < temp_long3) {
                            if (3 < temp_long3 - temp_long1) {
                                temp_float_ptr = (float *)(pipeline_context + 8 + temp_long1 * 4);
                                temp_long2 = ((temp_long3 - temp_long1) - 4U >> 2) + 1;
                                temp_float16 = temp_float15 * 0.5;
                                temp_long1 = temp_long1 + temp_long2 * 4;
                                do {
                                    temp_float_ptr[-2] = temp_float16 + temp_float11 + temp_float_ptr[-2];
                                    temp_float12 = temp_float11 + temp_float15 + temp_float15;
                                    temp_float13 = temp_float12 + temp_float15;
                                    temp_float_ptr[-1] = temp_float16 + temp_float11 + temp_float15 + temp_float_ptr[-1];
                                    temp_float11 = temp_float13 + temp_float15;
                                    *temp_float_ptr = temp_float16 + temp_float12 + *temp_float_ptr;
                                    temp_float_ptr[1] = temp_float16 + temp_float13 + temp_float_ptr[1];
                                    temp_float_ptr = temp_float_ptr + 4;
                                    temp_long2 = temp_long2 + -1;
                                } while (temp_long2 != 0);
                            }
                            if (temp_long1 < temp_long3) {
                                do {
                                    temp_float16 = temp_float15 * 0.5 + temp_float11;
                                    temp_float11 = temp_float11 + temp_float15;
                                    *(float *)(pipeline_context + temp_long1 * 4) = temp_float16 + *(float *)(pipeline_context + temp_long1 * 4);
                                    temp_long1 = temp_long1 + 1;
                                } while (temp_long1 < temp_long3);
                            }
                        }
                        *(float *)(pipeline_context + temp_long3 * 4) =
                             (temp_float10 - ((float)((temp_int1 - temp_int2) + -1) * temp_float19 + temp_float20)) *
                             (1.0 - (temp_float14 - (float)temp_int1) * 0.5) * temp_float17 + temp_float11 +
                             *(float *)(pipeline_context + temp_long3 * 4);
                        *(float *)(pipeline_data + temp_long3 * 4) =
                             (temp_float10 - temp_float18) * temp_float17 + *(float *)(pipeline_data + temp_long3 * 4);
                    }
                }
            }
            pipeline_params = (longlong *)*pipeline_params;
        } while (pipeline_params != (longlong *)0x0);
    }
    return;
}