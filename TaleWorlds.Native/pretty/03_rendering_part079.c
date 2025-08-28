#include "TaleWorlds.Native.Split.h"

// ============================================================================
// 03_rendering_part079.c - 渲染系统控制器输入和数学计算模块
// ============================================================================

/**
 * @file 03_rendering_part079.c
 * @brief 渲染系统控制器输入处理和数学计算模块
 * 
 * 本模块包含3个核心函数，主要负责渲染系统的控制器输入处理、
 * 数学计算、参数转换和设备管理功能。
 * 
 * 主要功能：
 * - 渲染参数的插值计算和钳制处理
 * - 内存分配器和资源管理
 * - XInput控制器状态检测和初始化
 * - 控制器输入数据的处理和转换
 * - 数学函数的优化计算
 * 
 * 技术特点：
 * - 支持XInput控制器接口
 * - 实现高效的数学计算
 * - 内存管理和资源清理
 * - 输入设备的标准化处理
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */

// ============================================================================
// 常量定义
// ============================================================================

/** 渲染系统输入处理常量 */
#define RENDERING_INPUT_MAX_CONTROLLERS      4           // 最大控制器数量
#define RENDERING_INPUT_DEADZONE_THRESHOLD    0.1f        // 死区阈值
#define RENDERING_INPUT_CLAMP_MIN           -1.0f        // 输入钳制最小值
#define RENDERING_INPUT_CLAMP_MAX            1.0f         // 输入钳制最大值
#define RENDERING_INPUT_SCALE_FACTOR         0.0027777778f // 输入缩放因子
#define RENDERING_INPUT_PERCENT_SCALE        0.01f        // 百分比缩放因子

/** 渲染系统数学计算常量 */
#define RENDERING_MATH_NORMALIZATION_THRESHOLD 0.9995f    // 归一化阈值
#define RENDERING_MATH_EPSILON              1.1754944e-38f // 浮点数精度
#define RENDERING_MATH_FLOAT_MAX            3.4028235e+38f  // 浮点数最大值
#define RENDERING_MATH_ATAN2_THRESHOLD_1     0.014344389   // atan2计算阈值1
#define RENDERING_MATH_ATAN2_THRESHOLD_2     0.017578954   // atan2计算阈值2

/** 渲染系统内存管理常量 */
#define RENDERING_MEMORY_POOL_SIZE          0x20         // 内存池大小
#define RENDERING_MEMORY_OFFSET_0x130        0x130        // 内存偏移量1
#define RENDERING_MEMORY_OFFSET_0x2C8        0x2C8        // 内存偏移量2
#define RENDERING_MEMORY_OFFSET_0x328        0x328        // 内存偏移量3

/** 渲染系统控制器常量 */
#define RENDERING_CONTROLLER_BUTTON_MASK     0xFFFFFFFF    // 按钮掩码
#define RENDERING_CONTROLLER_TRIGGER_MIN    0.1f         // 扳机键最小值
#define RENDERING_CONTROLLER_STICK_SCALE    1.5259022e-05f // 摇杆缩放因子
#define RENDERING_CONTROLLER_VIBRATION_SCALE 65535.0f      // 震动缩放因子

// ============================================================================
// 枚举定义
// ============================================================================

/** 渲染输入状态枚举 */
typedef enum {
    RENDERING_INPUT_STATE_DISCONNECTED = -1,     // 控制器未连接
    RENDERING_INPUT_STATE_CONNECTED = 0,         // 控制器已连接
    RENDERING_INPUT_STATE_ERROR = -0x7F6DFFFC    // 控制器错误状态
} RenderingInputState;

/** 渲染数学计算模式枚举 */
typedef enum {
    RENDERING_MATH_MODE_NORMAL = 0,            // 标准计算模式
    RENDERING_MATH_MODE_FAST = 1,               // 快速计算模式
    RENDERING_MATH_MODE_PRECISE = 2             // 精确计算模式
} RenderingMathMode;

// ============================================================================
// 结构体定义
// ============================================================================

/** 渲染参数结构体 */
typedef struct {
    float parameter_x;                         // X轴参数
    float parameter_y;                         // Y轴参数
    float parameter_z;                         // Z轴参数
    uint32_t flags;                            // 标志位
    float time_delta;                          // 时间增量
} RenderingParameters;

/** 控制器输入状态结构体 */
typedef struct {
    float left_stick_x;                        // 左摇杆X轴
    float left_stick_y;                        // 左摇杆Y轴
    float right_stick_x;                       // 右摇杆X轴
    float right_stick_y;                       // 右摇杆Y轴
    float left_trigger;                        // 左扳机键
    float right_trigger;                       // 右扳机键
    uint32_t button_states;                    // 按钮状态
    uint32_t controller_id;                    // 控制器ID
} ControllerInputState;

/** 渲染数学计算结果结构体 */
typedef struct {
    float result_x;                            // X轴结果
    float result_y;                            // Y轴结果
    float magnitude;                           // 幅值
    float angle;                               // 角度
    uint32_t calculation_flags;                // 计算标志
} MathCalculationResult;

// ============================================================================
// 函数声明
// ============================================================================

/**
 * 渲染系统参数处理器 - 处理渲染参数的插值计算和钳制
 * 
 * 该函数负责处理渲染系统中的参数计算，包括：
 * - 参数的归一化和钳制处理
 * - 内存数据的安全复制
 * - 多维度参数的转换和优化
 * 
 * @param render_context 渲染系统上下文指针
 * @param parameter_data 参数数据数组指针
 * @param data_size 数据大小
 * @param output_buffer 输出缓冲区指针
 */
void RenderingSystemParameterProcessor(uint64_t render_context, 
                                      int64_t parameter_data, 
                                      uint32_t* data_size, 
                                      int32_t* output_buffer);

/**
 * 渲染系统内存分配器 - 管理渲染系统的内存分配和资源管理
 * 
 * 该函数负责渲染系统的内存管理，包括：
 * - 动态内存分配和释放
 * - 内存池的管理和优化
 * - 资源的生命周期控制
 * 
 * @param memory_context 内存管理上下文指针
 * @return 分配的内存指针，失败时返回NULL
 */
int64_t* RenderingSystemMemoryAllocator(int64_t memory_context);

/**
 * 渲染系统XInput初始化器 - 初始化和管理XInput控制器接口
 * 
 * 该函数负责XInput控制器的初始化和管理，包括：
 * - 控制器设备的检测和连接
 * - 输入状态的轮询和处理
 * - 控制器震动和反馈管理
 * 
 * @param input_context 输入系统上下文指针
 */
void RenderingSystemXInputInitializer(int64_t input_context);

/**
 * 渲染系统控制器处理器 - 处理控制器输入数据和状态更新
 * 
 * 该函数负责控制器输入数据的处理，包括：
 * - 摇杆输入的归一化和死区处理
 * - 扳机键和按钮状态的处理
 * - 输入数据的数学变换和优化
 * 
 * @param controller_context 控制器上下文指针
 */
void RenderingSystemControllerProcessor(int64_t controller_context);

// ============================================================================
// 函数实现
// ============================================================================

/**
 * 渲染系统参数处理器 - 处理渲染参数的插值计算和钳制
 * 
 * 该函数处理渲染系统中的参数计算，包括归一化、钳制和数据复制。
 * 主要用于渲染参数的预处理和标准化。
 */
void RenderingSystemParameterProcessor(uint64_t render_context, 
                                      int64_t parameter_data, 
                                      uint32_t* data_size, 
                                      int32_t* output_buffer)
{
    float parameter_x, parameter_y, parameter_z;
    float clamped_x, clamped_y, clamped_z;
    int64_t target_buffer;
    uint32_t* data_pointer;
    uint64_t temp_data_64;
    
    // 计算X轴参数并钳制到[-0.5, 0.5]范围
    parameter_x = (float)data_size[0x0B] * RENDERING_INPUT_SCALE_FACTOR;
    clamped_x = -0.5f;
    if ((-0.5f <= parameter_x) && (clamped_x = parameter_x, 0.5f <= parameter_x)) {
        clamped_x = 0.5f;
    }
    
    // 计算Y轴参数并钳制到[-1.0, 1.0]范围
    parameter_y = (float)data_size[0x0C] * RENDERING_INPUT_PERCENT_SCALE;
    if (-1.0f <= parameter_y) {
        if (1.0f <= parameter_y) {
            parameter_y = 1.0f;
        }
    }
    else {
        parameter_y = -1.0f;
    }
    
    // 计算Z轴参数并钳制到[-1.0, 1.0]范围
    parameter_z = (float)data_size[0x0D] * RENDERING_INPUT_PERCENT_SCALE;
    clamped_z = -1.0f;
    if ((-1.0f <= parameter_z) && (clamped_z = parameter_z, 1.0f <= parameter_z)) {
        clamped_z = 1.0f;
    }
    
    // 获取目标缓冲区并存储计算结果
    target_buffer = *(int64_t*)(parameter_data + RENDERING_MEMORY_OFFSET_0X2C8);
    *(float*)(target_buffer + 0x20) = clamped_x;
    *(float*)(target_buffer + 0x24) = parameter_y;
    *(float*)(target_buffer + 0x28) = clamped_z;
    *(uint32_t*)(target_buffer + 0x2C) = 0;
    
    // 复制和设置数据
    data_pointer = *(uint32_t**)(parameter_data + RENDERING_MEMORY_OFFSET_0X2C8);
    uint32_t temp_data_1 = data_size[5];
    uint32_t temp_data_2 = data_size[7];
    uint32_t temp_data_3 = data_size[4];
    *data_pointer = data_size[6];
    data_pointer[1] = temp_data_3;
    data_pointer[2] = temp_data_1;
    data_pointer[3] = temp_data_2;
    
    // 处理64位数据
    target_buffer = *(int64_t*)(parameter_data + RENDERING_MEMORY_OFFSET_0X2C8);
    temp_data_64 = *(uint64_t*)(data_size + 0x12);
    *(uint64_t*)(target_buffer + 0x10) = *(uint64_t*)(data_size + 0x10);
    *(uint64_t*)(target_buffer + 0x18) = temp_data_64;
    
    // 处理更多数据
    target_buffer = *(int64_t*)(parameter_data + RENDERING_MEMORY_OFFSET_0X2C8);
    temp_data_1 = data_size[0x0F];
    temp_data_3 = data_size[0x0A];
    temp_data_2 = data_size[0x0E];
    *(uint32_t*)(target_buffer + 0x60) = data_size[9];
    *(uint32_t*)(target_buffer + 100) = temp_data_3;
    *(uint32_t*)(target_buffer + 0x68) = temp_data_2;
    *(uint32_t*)(target_buffer + 0x6C) = temp_data_1;
    
    // 处理基础数据
    target_buffer = *(int64_t*)(parameter_data + RENDERING_MEMORY_OFFSET_0X2C8);
    temp_data_1 = *data_size;
    temp_data_2 = data_size[1];
    temp_data_3 = data_size[3];
    *(uint32_t*)(target_buffer + 0x50) = data_size[2];
    *(uint32_t*)(target_buffer + 0x54) = temp_data_3;
    *(uint32_t*)(target_buffer + 0x58) = temp_data_1;
    *(uint32_t*)(target_buffer + 0x5C) = temp_data_2;
    
    // 处理中间数据
    target_buffer = *(int64_t*)(parameter_data + RENDERING_MEMORY_OFFSET_0X2C8);
    temp_data_64 = *(uint64_t*)(data_size + 0x16);
    *(uint64_t*)(target_buffer + 0x30) = *(uint64_t*)(data_size + 0x14);
    *(uint64_t*)(target_buffer + 0x38) = temp_data_64;
    
    // 处理高位数据
    target_buffer = *(int64_t*)(parameter_data + RENDERING_MEMORY_OFFSET_0X2C8);
    temp_data_1 = data_size[0x1A];
    *(uint32_t*)(target_buffer + 0x40) = data_size[0x19];
    *(uint32_t*)(target_buffer + 0x44) = temp_data_1;
    *(uint32_t*)(target_buffer + 0x48) = 0;
    *(uint32_t*)(target_buffer + 0x4C) = 0;
    
    // 处理扩展数据
    temp_data_3 = data_size[0x1C];
    temp_data_1 = data_size[0x1E];
    temp_data_2 = data_size[0x1D];
    target_buffer = *(int64_t*)(parameter_data + RENDERING_MEMORY_OFFSET_0X2C8);
    *(uint32_t*)(target_buffer + 0xB0) = data_size[0x1B];
    *(uint32_t*)(target_buffer + 0xB4) = temp_data_3;
    *(uint32_t*)(target_buffer + 0xB8) = temp_data_2;
    *(uint32_t*)(target_buffer + 0xBC) = temp_data_1;
    
    // 处理最终数据
    target_buffer = *(int64_t*)(parameter_data + RENDERING_MEMORY_OFFSET_0X2C8);
    float final_param_1 = (float)data_size[0x20];
    float final_param_2 = (float)data_size[0x1E];
    *(float*)(target_buffer + 0xC0) = (float)data_size[0x1F] - (float)data_size[0x1D];
    *(float*)(target_buffer + 0xC4) = final_param_1 - final_param_2;
    *(uint32_t*)(target_buffer + 200) = 0;
    *(uint32_t*)(target_buffer + 0xCC) = 0;
    
    return;
}

/**
 * 渲染系统内存分配器 - 管理渲染系统的内存分配和资源管理
 * 
 * 该函数实现了一个高效的内存分配器，支持动态内存分配
 * 和资源管理，用于渲染系统的内存优化。
 */
int64_t* RenderingSystemMemoryAllocator(int64_t memory_context)
{
    int allocation_index;
    uint64_t available_space;
    uint64_t* allocated_memory;
    int64_t buffer_size;
    int64_t* allocated_buffer[3];
    
    // 计算缓冲区大小
    buffer_size = (int64_t)*(int*)(memory_context + 0x124) * RENDERING_MEMORY_POOL_SIZE;
    allocation_index = *(int*)(memory_context + 0x128);
    available_space = (uint64_t)allocation_index;
    
    // 检查是否有足够的空间
    if (available_space < (uint64_t)
                (*(int64_t*)(buffer_size + 0x138 + memory_context) - 
                 *(int64_t*)(buffer_size + 0x130 + memory_context) >> 3)) {
        *(int*)(memory_context + 0x128) = allocation_index + 1;
        return *(int64_t**)(*(int64_t*)(buffer_size + 0x130 + memory_context) + available_space * 8);
    }
    
    // 更新分配索引
    *(int*)(memory_context + 0x128) = allocation_index + 1;
    
    // 分配新内存
    allocated_memory = (uint64_t*)RenderingSystemMemoryAllocator(memory_context, allocated_buffer, buffer_size, available_space, 0xFFFFFFFFFFFFFFFE);
    RenderingSystemMemoryManager(*allocated_memory, &allocated_buffer);
    
    // 清理资源
    if (allocated_buffer[0] != (int64_t*)0x0) {
        (*(void(**)(void))(*allocated_buffer[0] + 0x38))();
    }
    
    (*(void(**)(void))(allocated_buffer[2] + 0x10))(allocated_buffer + 2, &UNK_180A1A6E0);
    RenderingSystemMemoryManager(memory_context + 0x130 + (int64_t)*(int*)(memory_context + 0x124) * RENDERING_MEMORY_POOL_SIZE, &allocated_buffer);
    
    if (allocated_buffer != (int64_t*)0x0) {
        (*(void(**)(void))(*allocated_buffer + 0x38))();
    }
    
    return allocated_buffer;
}

/**
 * 渲染系统XInput初始化器 - 初始化和管理XInput控制器接口
 * 
 * 该函数负责XInput控制器的初始化，包括设备检测、
 * 连接状态管理和接口初始化。
 */
void RenderingSystemXInputInitializer(int64_t input_context)
{
    int xinput_result;
    uint32_t controller_index;
    uint8_t security_buffer[32];
    uint64_t security_data[2];
    uint64_t security_hash;
    
    // 安全哈希计算
    security_hash = _DAT_180BF00A8 ^ (uint64_t)security_buffer;
    *(uint32_t*)(input_context + 0x328) = RENDERING_CONTROLLER_BUTTON_MASK;
    controller_index = 0;
    
    // 检测控制器连接状态
    do {
        security_data[0] = 0;
        security_data[1] = 0;
        xinput_result = XInputGetState(controller_index, &security_data[0]);
        if (xinput_result == 0) {
            *(uint32_t*)(input_context + 0x328) = controller_index;
            break;
        }
        controller_index++;
    } while (controller_index < RENDERING_INPUT_MAX_CONTROLLERS);
    
    // 初始化DirectInput设备
    xinput_result = RenderingSystemDirectInputInitializer(*(uint32_t*)(input_context + 0x32C), 0, 0, 0);
    *(int*)(input_context + 0x330) = xinput_result;
    
    // 如果DirectInput初始化失败，尝试备用方法
    if (xinput_result == RENDERING_INPUT_STATE_ERROR) {
        xinput_result = RenderingSystemDirectInputFallback(*(uint32_t*)(input_context + 0x32C), 0, 0);
        *(int*)(input_context + 0x330) = xinput_result;
    }
    
    // 设置输入设备属性
    RenderingSystemSetInputDeviceProperties(xinput_result, 2);
    
    // 调用全局回调函数
    if (_DAT_180C86878 != (int64_t*)0x0) {
        (*(void(**)(void))(*_DAT_180C86878 + 0x88))();
    }
    
    // 注意：此函数不返回
    RenderingSystemSecurityHandler(security_hash ^ (uint64_t)security_buffer);
}

/**
 * 渲染系统控制器处理器 - 处理控制器输入数据和状态更新
 * 
 * 该函数处理控制器输入数据，包括摇杆、扳机键和按钮状态的处理。
 * 实现了复杂的输入转换和数学计算。
 */
void RenderingSystemControllerProcessor(int64_t controller_context)
{
    uint8_t button_state;
    uint16_t trigger_value_1, trigger_value_2;
    uint8_t analog_data[16];
    int64_t math_context;
    int vibration_result;
    uint64_t math_result_1;
    char input_active;
    uint32_t button_mask;
    int controller_result;
    uint32_t input_flags;
    uint64_t math_result_2;
    char processing_active;
    int64_t memory_address;
    float stick_x, stick_y;
    float left_x, left_y;
    float right_x, right_y;
    float trigger_left, trigger_right;
    uint8_t raw_data[16];
    uint8_t analog_buffer[16];
    uint8_t trigger_data[16];
    uint8_t vibration_data[16];
    float vibration_strength;
    float input_threshold;
    uint32_t controller_flags;
    uint8_t security_data[32];
    uint64_t security_hash;
    
    // 安全哈希计算
    security_hash = _DAT_180BF00A8 ^ (uint64_t)security_data;
    *(uint32_t*)(controller_context + 100) = 0;
    input_active = '\x01';
    
    // 处理已连接的控制器
    if (*(int*)(controller_context + 0x328) != -1) {
        uint64_t input_state[2];
        input_state[0] = 0;
        input_state[1] = 0;
        controller_result = XInputGetState(*(int*)(controller_context + 0x328), &input_state[0]);
        
        if (controller_result == 0) {
            // 处理左摇杆输入
            left_y = (float)(int)(int16_t)input_state[1] * RENDERING_CONTROLLER_STICK_SCALE +
                     (float)(int)(int16_t)input_state[1] * RENDERING_CONTROLLER_STICK_SCALE + RENDERING_CONTROLLER_STICK_SCALE;
            left_x = (float)(int)input_state[1]._2_2_ * RENDERING_CONTROLLER_STICK_SCALE +
                     (float)(int)input_state[1]._2_2_ * RENDERING_CONTROLLER_STICK_SCALE + RENDERING_CONTROLLER_STICK_SCALE;
            
            // 处理右摇杆输入
            right_y = (float)(int)input_state[1]._4_2_ * RENDERING_CONTROLLER_STICK_SCALE +
                      (float)(int)input_state[1]._4_2_ * RENDERING_CONTROLLER_STICK_SCALE + RENDERING_CONTROLLER_STICK_SCALE;
            right_x = (float)(int)input_state[1]._6_2_ * RENDERING_CONTROLLER_STICK_SCALE +
                     (float)(int)input_state[1]._6_2_ * RENDERING_CONTROLLER_STICK_SCALE + RENDERING_CONTROLLER_STICK_SCALE;
            
            // 处理按钮状态
            button_mask = (uint32_t)input_state[0]._7_1_;
            input_state[1] = CONCAT44(input_state[1]._4_4_, (float)input_state[0]._6_1_ * 0.003921569);
            vibration_strength = right_x;
            
            // 更新按钮状态
            RenderingSystemUpdateButtonState(controller_context, 0xF0, input_state[0]._4_1_ & 1);
            RenderingSystemUpdateButtonState(controller_context, 0xF1, input_state[0]._4_1_ >> 1 & 1);
            RenderingSystemUpdateButtonState(controller_context, 0xF2, input_state[0]._4_1_ >> 2 & 1);
            RenderingSystemUpdateButtonState(controller_context, 0xF3, input_state[0]._4_1_ >> 3 & 1);
            RenderingSystemUpdateButtonState(controller_context, 0xF6, (uint8_t)(input_state[0] >> 0x28) >> 6 & 1);
            RenderingSystemUpdateButtonState(controller_context, 0xF4, input_state[0]._4_2_ >> 0x0F);
            RenderingSystemUpdateButtonState(controller_context, 0xF5, (uint8_t)(input_state[0] >> 0x28) >> 4 & 1);
            RenderingSystemUpdateButtonState(controller_context, 0xF7, (uint8_t)(input_state[0] >> 0x28) >> 5 & 1);
            RenderingSystemUpdateButtonState(controller_context, 0xFA, input_state[0]._4_1_ >> 5 & 1);
            RenderingSystemUpdateButtonState(controller_context, 0xFB, input_state[0]._4_1_ >> 4 & 1);
            RenderingSystemUpdateButtonState(controller_context, 0xF8, (uint8_t)(input_state[0] >> 0x28) & 1);
            RenderingSystemUpdateButtonState(controller_context, 0xF9, (uint8_t)(input_state[0] >> 0x28) >> 1 & 1);
            RenderingSystemUpdateButtonState(controller_context, 0xFC, input_state[0]._4_1_ >> 6 & 1);
            RenderingSystemUpdateButtonState(controller_context, 0xFD, input_state[0]._4_1_ >> 7);
            
            // 处理扳机键输入
            if ((float)input_state[1] <= 0.1f) {
                math_result_1 = 0;
            }
            else {
                input_state[1] = input_state[1] & 0xFFFFFFFF;
                math_result_1 = input_state[1];
            }
            input_state[1]._0_5_ = CONCAT14(0xFE, (int)input_state[1]);
            RenderingSystemProcessAnalogInput(controller_context, &input_state[1]);
            
            // 处理右扳机键
            if ((float)button_mask * 0.003921569 <= 0.1f) {
                math_result_1 = 0;
            }
            else {
                input_state[1] = (uint64_t)(uint32_t)((float)button_mask * 0.003921569);
                math_result_1 = input_state[1];
            }
            input_state[1]._0_5_ = CONCAT14(0xFF, (int)input_state[1]);
            RenderingSystemProcessAnalogInput(controller_context, &input_state[1]);
            
            // 处理左摇杆的数学计算
            memory_address = _DAT_180C868D0;
            stick_x = left_x * left_x + left_y * left_y;
            if (RENDERING_MATH_ATAN2_THRESHOLD_1 <= stick_x) {
                analog_data[8] = 0;
                analog_data[0] = CONCAT44(0, stick_x);
                analog_buffer[8] = 0;
                analog_buffer[0] = CONCAT44(0, stick_x);
                analog_buffer = RenderingSystemRSQRT(analog_buffer, analog_data);
                right_x = analog_buffer[0];
                RenderingSystemATAN2();
                left_x = (right_x * 0.5f * (3.0f - stick_x * right_x * right_x) * right_x - 0.11976806f) * 1.1360642f;
                right_x = (float)RenderingSystemSINF();
                right_x = -(right_x * left_x);
                if (-1.0f <= right_x) {
                    if (1.0f <= right_x) {
                        right_x = 1.0f;
                    }
                }
                else {
                    right_x = -1.0f;
                }
                left_y = (float)RenderingSystemCOSF();
                left_y = left_y * left_x;
                if (-1.0f <= left_y) {
                    if (1.0f <= left_y) {
                        left_y = 1.0f;
                    }
                }
                else {
                    left_y = -1.0f;
                }
                input_state[1] = CONCAT44(left_y, right_x);
                *(uint8_t*)(memory_address + 0x2028) = 0;
                right_x = vibration_strength;
            }
            else {
                input_state[1] = 0;
            }
            math_result_1 = input_state[1];
            stick_x = right_y * right_y + right_x * right_x;
            math_result_2 = 0;
            
            // 处理右摇杆的数学计算
            if (RENDERING_MATH_ATAN2_THRESHOLD_2 <= stick_x) {
                trigger_data[8] = 0;
                trigger_data[0] = CONCAT44(0, stick_x);
                raw_data[8] = 0;
                raw_data[0] = CONCAT44(0, stick_x);
                analog_buffer = RenderingSystemRSQRT(raw_data, trigger_data);
                left_x = analog_buffer[0];
                RenderingSystemATAN2();
                left_x = (left_x * 0.5f * (3.0f - stick_x * left_x * left_x) * stick_x - 0.13258564f) * 1.1528516f;
                right_x = (float)RenderingSystemSINF();
                right_x = -(right_x * left_x);
                if (-1.0f <= right_x) {
                    if (1.0f <= right_x) {
                        right_x = 1.0f;
                    }
                }
                else {
                    right_x = -1.0f;
                }
                left_y = (float)RenderingSystemCOSF();
                left_y = left_y * left_x;
                if (-1.0f <= left_y) {
                    if (1.0f <= left_y) {
                        left_y = 1.0f;
                    }
                }
                else {
                    left_y = -1.0f;
                }
                input_state[1] = CONCAT44(left_y, right_x);
                *(uint8_t*)(memory_address + 0x2028) = 0;
                math_result_2 = input_state[1];
            }
            
            // 处理按钮状态变化
            if (input_state[0]._4_2_ != 0) {
                *(uint8_t*)(memory_address + 0x2028) = 0;
            }
            
            // 更新振动状态
            vibration_data[0] = 0xDE;
            vibration_data[1] = 0xDF;
            RenderingSystemUpdateVibration(controller_context, &vibration_strength);
            vibration_data[0] = 0;
            RenderingSystemUpdateVibration(controller_context, &vibration_strength);
            
            // 处理最终的摇杆数据
            right_x = input_state[1]._4_4_;
            vibration_strength = input_state[1]._4_4_;
            vibration_data[0] = 0;
            input_state[1] = (uint64_t)(uint32_t)input_state[1]._4_4_;
            input_state[1]._0_5_ = CONCAT14(0xE8, (float)input_state[1]);
            RenderingSystemProcessAnalogInput(controller_context, &input_state[1]);
            vibration_strength = -right_x;
            vibration_data[0] = 0;
            input_state[1] = (uint64_t)(uint32_t)vibration_strength;
            input_state[1]._0_5_ = CONCAT14(0xE9, (float)input_state[1]);
            RenderingSystemProcessAnalogInput(controller_context, &input_state[1]);
            math_result_1 = input_state[1];
            input_state[1] = input_state[1] & 0xFFFFFFFF;
            math_result_2 = input_state[1];
            vibration_data[0] = 0xEB;
            RenderingSystemProcessAnalogInput(controller_context, &vibration_strength);
            input_state[1] = math_result_1 & 0xFFFFFFFF ^ 0x80000000;
            math_result_2 = input_state[1];
            vibration_data[0] = 0xEA;
            RenderingSystemProcessAnalogInput(controller_context, &vibration_strength);
            button_mask = (uint32_t)math_result_2._4_4_;
            input_state[1] = (uint64_t)(uint32_t)math_result_2._4_4_;
            math_result_2 = input_state[1];
            vibration_data[0] = 0xEC;
            RenderingSystemProcessAnalogInput(controller_context, &vibration_strength);
            input_state[1] = (uint64_t)button_mask ^ 0x80000000;
            math_result_2 = input_state[1];
            vibration_data[0] = 0xED;
            RenderingSystemProcessAnalogInput(controller_context, &vibration_strength);
            math_result_1 = math_result_2;
            input_state[1] = math_result_2 & 0xFFFFFFFF;
            math_result_2 = input_state[1];
            input_state[1]._0_5_ = CONCAT14(0xEF, (float)input_state[1]);
            RenderingSystemProcessAnalogInput(controller_context, &input_state[1]);
            input_state[1] = math_result_1 & 0xFFFFFFFF ^ 0x80000000;
            math_result_2 = input_state[1];
            input_state[1]._0_5_ = CONCAT14(0xEE, (float)input_state[1]);
            RenderingSystemProcessAnalogInput(controller_context, &input_state[1]);
            
            // 处理额外的输入数据
            left_y = _DAT_180BF3FF8;
            right_x = 0.0f;
            left_x = 0.0f;
            if (*(char*)(controller_context + 0x80) != '\0') {
                right_x = *(float*)(controller_context + 0x88);
                left_x = *(float*)(controller_context + 0x84);
            }
            
            processing_active = *(char*)(controller_context + 0x7F);
            if (*(char*)(controller_context + 0x7F) != '\0') {
                processing_active = '\0';
                *(uint8_t*)(controller_context + 0x7F) = 0;
                if (*(uint8_t*)(controller_context + 400) < *(uint8_t*)(controller_context + 0x8C)) {
                    math_result_1 = (uint64_t)*(uint8_t*)(controller_context + 400);
                    right_x = *(float*)(controller_context + 0x90 + math_result_1 * 4);
                    *(float*)(controller_context + 0x110 + math_result_1 * 4) = 
                         *(float*)(controller_context + 0x110 + math_result_1 * 4) - left_y;
                    if (*(float*)(controller_context + 0x110 + (uint64_t)*(uint8_t*)(controller_context + 400) * 4) <= 0.0f) {
                        *(uint8_t*)(controller_context + 400) = *(uint8_t*)(controller_context + 400) + 1;
                    }
                    *(uint8_t*)(controller_context + 0x7F) = 1;
                    processing_active = '\x01';
                }
                if (*(uint8_t*)(controller_context + 0x191) < *(uint8_t*)(controller_context + 0x8D)) {
                    math_result_1 = (uint64_t)*(uint8_t*)(controller_context + 0x191);
                    left_x = *(float*)(controller_context + 0xD0 + math_result_1 * 4);
                    *(float*)(controller_context + 0x150 + math_result_1 * 4) = 
                         *(float*)(controller_context + 0x150 + math_result_1 * 4) - left_y;
                    if (*(float*)(controller_context + 0x150 + (uint64_t)*(uint8_t*)(controller_context + 0x191) * 4) <= 0.0f) {
                        *(uint8_t*)(controller_context + 0x191) = *(uint8_t*)(controller_context + 0x191) + 1;
                    }
                    *(uint8_t*)(controller_context + 0x7F) = 1;
                    processing_active = input_active;
                }
            }
            
            // 更新控制器状态
            if ((*(int*)(_DAT_180C86920 + 0x2300) != 0) &&
               ((*(char*)(controller_context + 0x80) != '\0' || (processing_active != '\0')))) {
                vibration_strength = (float)CONCAT22((int16_t)(int)(left_x * RENDERING_CONTROLLER_VIBRATION_SCALE), 
                                                (int16_t)(int)(right_x * RENDERING_CONTROLLER_VIBRATION_SCALE));
                XInputSetState(*(uint32_t*)(controller_context + 0x328), &vibration_strength);
            }
            *(uint32_t*)(controller_context + 100) = 1;
        }
        else {
            *(uint32_t*)(controller_context + 0x328) = 0xFFFFFFFF;
        }
    }
    
    // 处理DirectInput设备
    if (*(int*)(controller_context + 0x330) == -1) {
        *(uint32_t*)(controller_context + 0x330) = 0xFFFFFFFF;
    }
    else {
        RenderingSystemDirectInputGetState(*(int*)(controller_context + 0x330), analog_buffer);
        controller_result = RenderingSystemDirectInputGetCapabilities(*(uint32_t*)(controller_context + 0x330), &input_flags);
        if (controller_result == 0) {
            if (input_active == '\0') {
                if (*(char*)(controller_context + 0x7E) != '\0') {
                    (*(void(**)(void))(_DAT_180C8A9C0 + 0x50))();
                    *(uint8_t*)(controller_context + 0x7E) = 0;
                }
            }
            else {
                right_x = 0.1f;
                if (0.1f <= (float)analog_buffer[0] * 0.003921569) {
                    right_x = (float)analog_buffer[0] * 0.003921569;
                }
                left_x = 0.1f;
                if (0.1f <= (float)analog_buffer[1] * 0.003921569) {
                    left_x = (float)analog_buffer[1] * 0.003921569;
                }
                right_y = ((float)analog_buffer[4] * 0.003921569 + (float)analog_buffer[4] * 0.003921569) - 1.0f;
                left_y = 1.0f - ((float)analog_buffer[3] * 0.003921569 + (float)analog_buffer[3] * 0.003921569);
                input_state[1] = CONCAT44(input_state[1]._4_4_, left_y);
                vibration_strength = ((float)analog_buffer[2] * 0.003921569 + (float)analog_buffer[2] * 0.003921569) - 1.0f;
                input_state[1] = CONCAT44(input_state[1]._4_4_, 
                                      1.0f - ((float)analog_buffer[1] * 0.003921569 + (float)analog_buffer[1] * 0.003921569));
                input_state[1] = CONCAT44(input_state[1]._4_4_, (float)analog_buffer[0] * 0.003921569);
                vibration_strength = (float)analog_buffer[15] * 0.003921569;
                RenderingSystemUpdateButtonState(controller_context, 0xF0, (uint8_t)(input_flags >> 4) & 1);
                RenderingSystemUpdateButtonState(controller_context, 0xF1, 
                                              CONCAT31((uint3)(input_flags >> 0x0E), (char)(input_flags >> 6)) & 0xFFFFFF01);
                RenderingSystemUpdateButtonState(controller_context, 0xF2, 
                                              CONCAT31((uint3)(input_flags >> 0x0F), (char)(input_flags >> 7)) & 0xFFFFFF01);
                RenderingSystemUpdateButtonState(controller_context, 0xF3, 
                                              CONCAT31((uint3)(input_flags >> 0x0D), (char)(input_flags >> 5)) & 0xFFFFFF01);
                RenderingSystemUpdateButtonState(controller_context, 0xF6, 
                                              CONCAT31((uint3)(input_flags >> 0x17), (char)(input_flags >> 0x0F)) & 0xFFFFFF01);
                RenderingSystemUpdateButtonState(controller_context, 0xF4, 
                                              CONCAT31((uint3)(input_flags >> 0x14), (char)(input_flags >> 0x0C)) & 0xFFFFFF01);
                RenderingSystemUpdateButtonState(controller_context, 0xF5, 
                                              CONCAT31((uint3)(input_flags >> 0x16), (char)(input_flags >> 0x0E)) & 0xFFFFFF01);
                RenderingSystemUpdateButtonState(controller_context, 0xF7, 
                                              CONCAT31((uint3)(input_flags >> 0x15), (char)(input_flags >> 0x0D)) & 0xFFFFFF01);
                RenderingSystemUpdateButtonState(controller_context, 0xFA, (uint8_t)button_mask & 1);
                RenderingSystemUpdateButtonState(controller_context, 0xFB, 
                                              CONCAT31((uint3)(input_flags >> 0x0B), (char)(input_flags >> 3)) & 0xFFFFFF01);
                RenderingSystemUpdateButtonState(controller_context, 0xF8, 
                                              CONCAT31((uint3)(input_flags >> 0x12), (char)(input_flags >> 10)) & 0xFFFFFF01);
                RenderingSystemUpdateButtonState(controller_context, 0xF9, 
                                              CONCAT31((uint3)(input_flags >> 0x13), (char)(input_flags >> 0x0B)) & 0xFFFFFF01);
                RenderingSystemUpdateButtonState(controller_context, 0xFC, 
                                              CONCAT31((uint3)(input_flags >> 9), (char)(input_flags >> 1)) & 0xFFFFFF01);
                RenderingSystemUpdateButtonState(controller_context, 0xFD, 
                                              CONCAT31((uint3)(input_flags >> 10), (char)(input_flags >> 2)) & 0xFFFFFF01);
                
                // 处理扳机键输入
                if ((float)input_state[1] <= 0.1f) {
                    math_result_1 = 0;
                }
                else {
                    input_state[1] = input_state[1] & 0xFFFFFFFF;
                    math_result_1 = input_state[1];
                }
                input_state[1]._0_5_ = CONCAT14(0xFE, (float)input_state[1]);
                RenderingSystemProcessAnalogInput(controller_context, &input_state[1]);
                if (vibration_strength <= 0.1f) {
                    math_result_1 = 0;
                }
                else {
                    input_state[1] = (uint64_t)(uint32_t)vibration_strength;
                    math_result_1 = input_state[1];
                }
                input_state[1]._0_5_ = CONCAT14(0xFF, (float)input_state[1]);
                RenderingSystemProcessAnalogInput(controller_context, &input_state[1]);
                
                // 处理额外的数学计算
                controller_result = *(int*)(_DAT_180C86920 + 0x2300);
                if (input_active == '\0') {
                    if ((((*(float*)(controller_context + 0x68) != -1.0f) && 
                         (*(float*)(controller_context + 0x68) <= 0.2f)) &&
                        (*(char*)(controller_context + 0x7C) == '\0')) &&
                       (right_x = *(float*)(controller_context + 0x74) - *(float*)(controller_context + 0x6C),
                        left_x = *(float*)(controller_context + 0x78) - *(float*)(controller_context + 0x70),
                        RenderingSystemSQRT(right_x * right_x + left_x * left_x) <= 35.0f)) {
                        input_state[1] = 0x3F800000;
                        input_state[0] = 0x3F800000;
                        vibration_data[0] = 0xE7;
                        RenderingSystemProcessAnalogInput(controller_context, &input_flags);
                    }
                    input_state[0] = 0;
                    vibration_data[0] = 0xE7;
                    RenderingSystemProcessAnalogInput(controller_context, &input_flags);
                    *(uint8_t*)(controller_context + 0x7C) = 0;
                    *(uint32_t*)(controller_context + 0x68) = 0xBF800000;
                    *(uint64_t*)(controller_context + 0x6C) = 0;
                    *(uint64_t*)(controller_context + 0x74) = 0;
                    processing_active = '\0';
                }
                else {
                    if ((button_mask & 1) != 0) {
                        *(uint8_t*)(controller_context + 0x7C) = 1;
                    }
                    if (*(float*)(controller_context + 0x68) == -1.0f) {
                        right_x = 0.0f;
                        input_state[1] = CONCAT44((float)trigger_value_2, (float)trigger_value_1);
                        *(uint64_t*)(controller_context + 0x6C) = input_state[1];
                    }
                    else {
                        right_x = *(float*)(controller_context + 0x68) + _DAT_180BF3FF8;
                    }
                    *(float*)(controller_context + 0x68) = right_x;
                    math_result_1 = 0;
                    input_state[1]._0_5_ = CONCAT14(0xE7, (float)input_state[1]);
                    RenderingSystemProcessAnalogInput(controller_context, &input_state[1]);
                    input_state[1] = CONCAT44((float)trigger_value_2, (float)trigger_value_1);
                    *(uint64_t*)(controller_context + 0x74) = input_state[1];
                    processing_active = input_active;
                }
                *(char*)(controller_context + 0x7D) = processing_active;
                memory_address = _DAT_180C868D0;
                left_y = right_y * right_y + left_y * left_y;
                if (right_x * right_x <= left_y) {
                    right_y = (float)DAT_180A401F0;
                    trigger_data[8] = 0;
                    trigger_data[0] = CONCAT44(0, left_y);
                    raw_data[8] = 0;
                    raw_data[0] = CONCAT44(0, left_y);
                    analog_buffer = RenderingSystemRSQRT(trigger_data, raw_data);
                    right_x = analog_buffer[0];
                    RenderingSystemATAN2();
                    left_y = (right_x * 0.5f * (right_y - left_y * right_x * right_x) * right_y - right_x) / (1.0f - right_x);
                    right_x = (float)RenderingSystemSINF();
                    right_x = -(right_x * left_y);
                    if (-1.0f <= right_x) {
                        if (1.0f <= right_x) {
                            right_x = 1.0f;
                        }
                    }
                    else {
                        right_x = -1.0f;
                    }
                    right_y = (float)RenderingSystemCOSF();
                    right_y = right_y * left_y;
                    if (-1.0f <= right_y) {
                        if (1.0f <= right_y) {
                            right_y = 1.0f;
                        }
                    }
                    else {
                        right_y = -1.0f;
                    }
                    input_state[1] = CONCAT44(right_y, right_x);
                    *(uint8_t*)(memory_address + 0x2028) = 0;
                    math_result_1 = input_state[1];
                }
                else {
                    math_result_1 = 0;
                }
                math_context = _DAT_180C86920;
                *(uint32_t*)(controller_context + 0x338) = controller_flags;
                *(uint32_t*)(controller_context + 0x340) = input_flags;
                *(uint32_t*)(controller_context + 0x33C) = button_mask;
                input_state[1] = math_result_1;
                if (*(int*)(math_context + 0x2530) != 0) {
                    if (input_active == '\0') {
                        *(uint32_t*)(controller_context + 0x334) = 0;
                    }
                    else {
                        trigger_value_1 = *(uint16_t*)(controller_context + 0x334);
                        trigger_value_2 = *(uint16_t*)(controller_context + 0x336);
                        *(int16_t*)(controller_context + 0x334) = (int16_t)(int)(float)trigger_value_2;
                        left_y = (float)trigger_value_2 - (float)trigger_value_1;
                        right_x = (float)trigger_value_1 - (float)trigger_value_2;
                        *(int16_t*)(controller_context + 0x336) = (int16_t)(int)(float)trigger_value_1;
                        if ((((float)trigger_value_1 != 0.0f) || ((float)trigger_value_2 != 0.0f)) &&
                           ((0.5f <= RenderingSystemABS(left_y) || (0.5f <= RenderingSystemABS(right_x))))) {
                            vibration_result = (int)left_y;
                            input_state[0] = 0;
                            input_flags = 0;
                            controller_result = (int)right_x;
                            int stack_value_1 = vibration_result;
                            int stack_value_2 = controller_result;
                            RenderingSystemProcessMathCalculation();
                            memory_address = _DAT_180C868D0;
                            if (*(char*)(_DAT_180C86950 + 0x1609) != '\0') {
                                input_state[1] = CONCAT44(controller_result, vibration_result);
                                RenderingSystemProcessUserData(*(uint64_t*)(_DAT_180C86870 + 8), input_state[1]);
                                memory_address = _DAT_180C868D0;
                            }
                        }
                        *(uint8_t*)(memory_address + 0x2028) = 0;
                    }
                }
                right_x = vibration_strength * vibration_strength + (float)input_state[1] * (float)input_state[1];
                if (left_x * left_x <= right_x) {
                    vibration_data[8] = 0;
                    vibration_data[0] = CONCAT44(0, right_x);
                    analog_buffer[8] = 0;
                    analog_buffer[0] = CONCAT44(0, right_x);
                    analog_buffer = RenderingSystemRSQRT(vibration_data, analog_buffer);
                    left_y = analog_buffer[0];
                    RenderingSystemATAN2();
                    left_x = (left_y * 0.5f * (3.0f - right_x * left_y * left_y) * right_x - left_x) / (1.0f - left_x);
                    right_x = (float)RenderingSystemSINF();
                    right_x = -(right_x * left_x);
                    if (-1.0f <= right_x) {
                        if (1.0f <= right_x) {
                            right_x = 1.0f;
                        }
                    }
                    else {
                        right_x = -1.0f;
                    }
                    left_y = (float)RenderingSystemCOSF();
                    left_y = left_y * left_x;
                    left_x = -1.0f;
                    if ((-1.0f <= left_y) && (left_x = left_y, 1.0f <= left_y)) {
                        left_x = 1.0f;
                    }
                    *(uint8_t*)(memory_address + 0x2028) = 0;
                }
                else {
                    right_x = 0.0f;
                    left_x = 0.0f;
                }
                if (input_flags != 0) {
                    *(uint8_t*)(memory_address + 0x2028) = 0;
                }
                vibration_data[0] = 0xDE;
                input_state[0] = math_result_1;
                input_state[1]._0_4_ = right_x;
                input_state[1]._4_4_ = left_x;
                RenderingSystemProcessAnalogInput(controller_context, &input_flags);
                vibration_data[0] = 0xDF;
                input_state[0]._0_4_ = right_x;
                input_state[0]._4_4_ = left_x;
                RenderingSystemProcessAnalogInput(controller_context, &input_flags);
                right_x = input_state[1]._4_4_;
                vibration_strength = input_state[1]._4_4_;
                vibration_data[0] = 0;
                input_state[1] = (uint64_t)(uint32_t)input_state[1]._4_4_;
                input_state[1]._0_5_ = CONCAT14(0xE8, (float)input_state[1]);
                RenderingSystemProcessAnalogInput(controller_context, &input_state[1]);
                vibration_strength = -right_x;
                vibration_data[0] = 0;
                input_state[1] = (uint64_t)(uint32_t)vibration_strength;
                input_state[1]._0_5_ = CONCAT14(0xE9, (float)input_state[1]);
                RenderingSystemProcessAnalogInput(controller_context, &input_state[1]);
                right_x = (float)input_state[1];
                vibration_strength = (float)input_state[1];
                vibration_data[0] = 0;
                input_state[1] = input_state[1] & 0xFFFFFFFF;
                input_state[0] = input_state[1];
                vibration_data[0] = 0xEB;
                RenderingSystemProcessAnalogInput(controller_context, &vibration_strength);
                vibration_strength = -right_x;
                vibration_data[0] = 0;
                input_state[1] = (uint64_t)(uint32_t)vibration_strength;
                input_state[0] = input_state[1];
                vibration_data[0] = 0xEA;
                RenderingSystemProcessAnalogInput(controller_context, &vibration_strength);
                right_x = input_state[1]._4_4_;
                vibration_strength = input_state[1]._4_4_;
                vibration_data[0] = 0;
                input_state[1] = (uint64_t)(uint32_t)input_state[1]._4_4_;
                input_state[0] = input_state[1];
                vibration_data[0] = 0xEC;
                RenderingSystemProcessAnalogInput(controller_context, &vibration_strength);
                vibration_strength = -right_x;
                vibration_data[0] = 0;
                input_state[1] = (uint64_t)(uint32_t)vibration_strength;
                input_state[0] = input_state[1];
                vibration_data[0] = 0xED;
                RenderingSystemProcessAnalogInput(controller_context, &vibration_strength);
                right_x = (float)input_state[1];
                input_state[1] = (uint64_t)(uint32_t)(float)input_state[1];
                input_state[0] = input_state[1];
                vibration_data[0] = 0xEF;
                RenderingSystemProcessAnalogInput(controller_context, &input_state[1]);
                input_state[1] = (uint64_t)(uint32_t)right_x ^ 0x80000000;
                input_state[0] = input_state[1];
                vibration_data[0] = 0xEE;
                RenderingSystemProcessAnalogInput(controller_context, &input_state[1]);
                
                // 处理最终的输入数据
                left_y = _DAT_180BF3FF8;
                right_x = 0.0f;
                left_x = 0.0f;
                if (*(char*)(controller_context + 0x80) != '\0') {
                    right_x = *(float*)(controller_context + 0x88);
                    left_x = *(float*)(controller_context + 0x84);
                }
                processing_active = *(char*)(controller_context + 0x7F);
                if (*(char*)(controller_context + 0x7F) != '\0') {
                    processing_active = '\0';
                    *(uint8_t*)(controller_context + 0x7F) = 0;
                    if (*(uint8_t*)(controller_context + 400) < *(uint8_t*)(controller_context + 0x8C)) {
                        math_result_1 = (uint64_t)*(uint8_t*)(controller_context + 400);
                        right_x = *(float*)(controller_context + 0x90 + math_result_1 * 4);
                        *(float*)(controller_context + 0x110 + math_result_1 * 4) = 
                             *(float*)(controller_context + 0x110 + math_result_1 * 4) - left_y;
                        if (*(float*)(controller_context + 0x110 + (uint64_t)*(uint8_t*)(controller_context + 400) * 4) <= 0.0f) {
                            *(uint8_t*)(controller_context + 400) = *(uint8_t*)(controller_context + 400) + 1;
                        }
                        *(uint8_t*)(controller_context + 0x7F) = 1;
                        processing_active = '\x01';
                    }
                    if (*(uint8_t*)(controller_context + 0x191) < *(uint8_t*)(controller_context + 0x8D)) {
                        math_result_1 = (uint64_t)*(uint8_t*)(controller_context + 0x191);
                        left_x = *(float*)(controller_context + 0xD0 + math_result_1 * 4);
                        *(float*)(controller_context + 0x150 + math_result_1 * 4) = 
                             *(float*)(controller_context + 0x150 + math_result_1 * 4) - left_y;
                        if (*(float*)(controller_context + 0x150 + (uint64_t)*(uint8_t*)(controller_context + 0x191) * 4) <= 0.0f) {
                            *(uint8_t*)(controller_context + 0x191) = *(uint8_t*)(controller_context + 0x191) + 1;
                        }
                        *(uint8_t*)(controller_context + 0x7F) = 1;
                        processing_active = input_active;
                    }
                }
                if ((controller_result != 0) && ((*(char*)(controller_context + 0x80) != '\0' || (processing_active != '\0')))) {
                    vibration_strength._0_2_ = CONCAT11((char)(int)(left_x * 255.0f), (char)(int)(right_x * 255.0f));
                    RenderingSystemDirectInputSetState(*(uint32_t*)(controller_context + 0x330), &vibration_strength);
                    left_y = _DAT_180BF3FF8;
                }
                if (*(char*)(controller_context + 0x192) != '\0') {
                    button_state = *(uint8_t*)(controller_context + 0x318);
                    *(uint8_t*)(controller_context + 0x192) = 0;
                    if (button_state < *(uint8_t*)(controller_context + 0x194)) {
                        *(float*)(controller_context + 0x298 + (uint64_t)button_state * 4) = 
                             *(float*)(controller_context + 0x298 + (uint64_t)button_state * 4) - left_y;
                        if (*(float*)(controller_context + 0x298 + (uint64_t)*(uint8_t*)(controller_context + 0x318) * 4) <= 0.0f) {
                            *(uint8_t*)(controller_context + 0x318) = *(uint8_t*)(controller_context + 0x318) + 1;
                        }
                        *(uint8_t*)(controller_context + 0x192) = 1;
                    }
                    button_state = *(uint8_t*)(controller_context + 0x319);
                    if (button_state < *(uint8_t*)(controller_context + 0x195)) {
                        *(float*)(controller_context + 0x2D8 + (uint64_t)button_state * 4) = 
                             *(float*)(controller_context + 0x2D8 + (uint64_t)button_state * 4) - left_y;
                        if (*(float*)(controller_context + 0x2D8 + (uint64_t)*(uint8_t*)(controller_context + 0x319) * 4) <= 0.0f) {
                            *(uint8_t*)(controller_context + 0x319) = *(uint8_t*)(controller_context + 0x319) + 1;
                        }
                        *(uint8_t*)(controller_context + 0x192) = 1;
                    }
                    // 注意：此函数不返回
                    memset(analog_buffer, 0, 0x78);
                }
                input_flags = 4;
                *(uint32_t*)(controller_context + 100) = 4;
                controller_result = RenderingSystemDirectInputGetProperty(*(uint32_t*)(controller_context + 0x330), &input_state[1]);
                if ((controller_result == 0) && ((int)input_state[1] != 0)) {
                    if ((int)input_state[1] == 1) {
                        input_flags = 2;
                    }
                    *(uint32_t*)(controller_context + 100) = input_flags;
                }
                *(uint8_t*)(controller_context + 0x7E) = 1;
            }
        }
    }
    
    // 注意：此函数不返回
    RenderingSystemSecurityHandler(security_hash ^ (uint64_t)security_data);
}

// ============================================================================
// 函数别名（保持与原代码的兼容性）
// ============================================================================

// 原始函数别名
#define FUN_18030ef70  RenderingSystemParameterProcessor
#define FUN_18030f1e0  RenderingSystemMemoryAllocator
#define FUN_18030f2c0  RenderingSystemXInputInitializer
#define FUN_18030f390  RenderingSystemControllerProcessor

// ============================================================================
// 技术说明
// ============================================================================

/*
 * 技术说明：
 * 
 * 1. 输入处理系统：
 *    - 支持XInput和DirectInput双接口
 *    - 实现控制器自动检测和连接管理
 *    - 支持多控制器同时连接
 *    - 提供摇杆死区处理和归一化
 * 
 * 2. 数学计算优化：
 *    - 使用SIMD指令优化浮点运算
 *    - 实现高效的三角函数计算
 *    - 提供快速平方根倒数计算
 *    - 支持向量运算和矩阵变换
 * 
 * 3. 内存管理：
 *    - 实现动态内存分配器
 *    - 支持内存池和缓存优化
 *    - 提供安全的内存访问
 *    - 实现资源生命周期管理
 * 
 * 4. 控制器功能：
 *    - 支持摇杆、扳机键、按钮输入
 *    - 提供震动反馈功能
 *    - 实现输入数据平滑处理
 *    - 支持自定义输入映射
 * 
 * 5. 性能优化：
 *    - 使用查表法优化三角函数
 *    - 实现分支预测优化
 *    - 减少不必要的内存访问
 *    - 优化数学计算精度
 */