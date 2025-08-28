#include "TaleWorlds.Native.Split.h"

/**
 * 渲染系统高级状态和参数管理处理器
 * 
 * 本函数负责渲染系统的高级状态管理、参数设置、标志位处理和资源管理。
 * 主要功能包括：
 * 1. 渲染状态初始化和配置管理
 * 2. 参数验证和动态更新
 * 3. 资源生命周期管理
 * 4. 状态同步和数据一致性维护
 * 5. 高级渲染特性的启用和禁用
 * 
 * @param float_parameter 输入的浮点参数，用于渲染计算
 * @param state_parameter 状态参数，控制渲染流程
 */
void RenderingSystem_AdvancedStateAndParameterManager(float float_parameter, unsigned long long state_parameter)
{
    // 变量声明
    unsigned short *flag_pointer;
    unsigned int flag_value;
    float calculation_result;
    unsigned char byte_data;
    unsigned int dword_data_1;
    unsigned int dword_data_2;
    unsigned int dword_data_3;
    unsigned int dword_data_4;
    unsigned int dword_data_5;
    unsigned int dword_data_6;
    unsigned int dword_data_7;
    unsigned int dword_data_8;
    unsigned int dword_data_9;
    unsigned long long qword_data_1;
    unsigned long long qword_data_2;
    unsigned long long qword_data_3;
    unsigned long long qword_data_4;
    unsigned long long state_data;
    long long memory_offset;
    unsigned short word_data;
    unsigned long long register_rcx;
    long long register_rbx;
    long long register_rbp;
    unsigned long long register_rsi;
    long long register_rdi;
    unsigned long long register_r14;
    int register_r15d;
    unsigned int register_constant;
    bool zero_flag;
    float register_xmm8;
    unsigned int stack_param_1;
    unsigned int stack_data_1;
    unsigned int stack_data_2;
    unsigned long long stack_param_2;
    unsigned long long stack_param_3;
    unsigned long long stack_param_4;
    
    // 状态检查和初始化
    if (zero_flag) {
        register_rsi = state_parameter;
    }
    
    // 渲染状态验证和处理
    if (*(int *)(register_rdi + 0x564) < 0) {
        if ((register_r14 >> 0x1c & 1) == 0) {
            if ((register_r14 & 0x20000000000) != 0) goto ADVANCED_RENDERING_PATH;
            
            dword_data_1 = *(unsigned int *)(register_rdi + 0x558);
            if ((register_xmm8 != *(float *)(register_rbx + 0xa9e4)) ||
                (*(int *)(register_rbx + 0xa8b0) != register_r15d)) {
                
                // 初始化渲染参数
                *(unsigned int *)(register_rbx + 0xa9e4) = 0x3f800000;  // 1.0f
                *(unsigned int *)(register_rbx + 0xa9e8) = 0x40400000;  // 3.0f
                *(unsigned int *)(register_rbx + 0xabd4) = 0x3f800000;  // 1.0f
                *(unsigned int *)(register_rbx + 0xabd8) = 0x40400000;  // 3.0f
                
                // 调用渲染系统初始化函数
                RenderingSystem_Initialize(&stack_param_1, 
                                       *(unsigned char *)(register_rbx + 0x2603),
                                       *(unsigned char *)(register_rbx + 0x2605),
                                       *(unsigned char *)(register_rbx + 0x2607), 1);
                
                // 设置渲染数据结构
                byte_data = *(unsigned char *)(register_rbp + -0x1c);
                qword_data_1 = *(unsigned long long *)(register_rbp + 0xf0);
                qword_data_2 = *(unsigned long long *)(register_rbp + 0xf8);
                
                // 清零和初始化内存区域
                *(unsigned long long *)(register_rbx + 0xa820) = 0;
                *(unsigned long long *)(register_rbx + 0xa828) = 0;
                *(unsigned char *)(register_rbx + 0xa8b4) = byte_data;
                
                byte_data = *(unsigned char *)(register_rbp + -0x1b);
                *(unsigned long long *)(register_rbx + 0xa9c0) = qword_data_1;
                *(unsigned long long *)(register_rbx + 0xa9c8) = qword_data_2;
                *(unsigned char *)(register_rbx + 0xa8b5) = byte_data;
                
                byte_data = *(unsigned char *)(register_rbp + -0x1a);
                *(unsigned long long *)(register_rbx + 0xa830) = ((unsigned long long)stack_data_2 << 32) | stack_data_1;
                *(unsigned long long *)(register_rbx + 0xa838) = stack_param_2;
                
                // 设置渲染参数数组
                qword_data_1 = *(unsigned long long *)(register_rbp + -0x80);
                qword_data_2 = *(unsigned long long *)(register_rbp + -0x78);
                *(unsigned long long *)(register_rbx + 0xa840) = stack_param_3;
                *(unsigned long long *)(register_rbx + 0xa848) = stack_param_4;
                
                // 设置高级渲染参数
                SetAdvancedRenderingParameters(register_rbx, register_rbp, &float_parameter, &dword_data_1);
                
                // 设置渲染状态标志
                *(unsigned char *)(register_rbx + 0xa9f0) = 1;
                *(unsigned int *)(register_rbx + 0xa9c8) = dword_data_1;
                
                // 再次调用渲染系统初始化
                RenderingSystem_Initialize(&stack_param_1,
                                       *(unsigned char *)(register_rbx + 0x2604),
                                       *(unsigned char *)(register_rbx + 0x2606),
                                       *(unsigned char *)(register_rbx + 0x2607), 1);
                
                // 设置扩展渲染参数
                SetExtendedRenderingParameters(register_rbx, register_rbp, &dword_data_1);
                
                // 启用渲染特性
                *(unsigned char *)(register_rbx + 44000) = 1;
                *(unsigned int *)(register_rbx + 0xabb8) = dword_data_1;
            }
        }
        else if ((register_xmm8 != *(float *)(register_rbx + 0xa9e4)) ||
                (*(int *)(register_rbx + 0xa8b0) != 1)) {
            
            // 渲染系统重置和重新初始化
            RenderingSystem_Initialize(&stack_param_1,
                                   *(unsigned char *)(register_rbx + 0x2603),
                                   *(unsigned char *)(register_rbx + 0x2605),
                                   *(unsigned char *)(register_rbx + 0x2607), 1);
            
            // 重新配置渲染参数
            byte_data = *(unsigned char *)(register_rbp + -0x1c);
            qword_data_1 = *(unsigned long long *)(register_rbp + 0xf0);
            qword_data_2 = *(unsigned long long *)(register_rbp + 0xf8);
            
            *(unsigned long long *)(register_rbx + 0xa820) = 0;
            *(unsigned long long *)(register_rbx + 0xa828) = 0;
            *(unsigned char *)(register_rbx + 0xa8b4) = byte_data;
            
            byte_data = *(unsigned char *)(register_rbp + -0x1b);
            *(unsigned long long *)(register_rbx + 0xa9c0) = qword_data_1;
            *(unsigned long long *)(register_rbx + 0xa9c8) = qword_data_2;
            *(unsigned char *)(register_rbx + 0xa8b5) = byte_data;
            
            byte_data = *(unsigned char *)(register_rbp + -0x1a);
            *(unsigned long long *)(register_rbx + 0xa830) = ((unsigned long long)stack_data_2 << 32) | stack_data_1;
            *(unsigned long long *)(register_rbx + 0xa838) = stack_param_2;
            
            // 设置渲染配置
            SetRenderingConfiguration(register_rbx, register_rbp, &dword_data_1);
            
            *(unsigned int *)(register_rbx + 0xa8b0) = 1;
            *(unsigned char *)(register_rbx + 0xa9f0) = 1;
            
            RenderingSystem_Initialize(&stack_param_1,
                                   *(unsigned char *)(register_rbx + 0x2604),
                                   *(unsigned char *)(register_rbx + 0x2606),
                                   *(unsigned char *)(register_rbx + 0x2607), 1);
            
            *(unsigned int *)(register_rbx + 0xaaa0) = 1;
            goto RENDERING_STATE_UPDATE;
        }
    }
    else if ((register_r14 & 0x20000000000) == 0) {
        // 高级渲染路径处理
        flag_value = *(unsigned int *)(*(long long *)
                                   ((long long)*(int *)(register_rdi + 0x564) * 0xa60 + 0x3778 +
                                   *(long long *)(register_rdi + 0x8d8)) + 0x8c0);
        
        if ((register_xmm8 != *(float *)(register_rbx + 0xa9e4)) || (*(int *)(register_rbx + 0xa8b0) != 2)) {
            
            // 初始化高级渲染系统
            RenderingSystem_Initialize(&stack_param_1,
                                   *(unsigned char *)(register_rbx + 0x2603),
                                   *(unsigned char *)(register_rbx + 0x2605),
                                   *(unsigned char *)(register_rbx + 0x2607), 1);
            
            // 配置高级渲染参数
            qword_data_1 = *(unsigned long long *)(register_rbp + 0xf0);
            qword_data_2 = *(unsigned long long *)(register_rbp + 0xf8);
            
            *(unsigned long long *)(register_rbx + 0xa820) = 0;
            *(unsigned long long *)(register_rbx + 0xa828) = 0;
            *(unsigned char *)(register_rbx + 0xa8b4) = *(unsigned char *)(register_rbp + -0x1c);
            
            byte_data = *(unsigned char *)(register_rbp + -0x1b);
            *(unsigned long long *)(register_rbx + 0xa9c0) = qword_data_1;
            *(unsigned long long *)(register_rbx + 0xa9c8) = qword_data_2;
            *(unsigned char *)(register_rbx + 0xa8b5) = byte_data;
            
            byte_data = *(unsigned char *)(register_rbp + -0x1a);
            *(unsigned long long *)(register_rbx + 0xa830) = ((unsigned long long)stack_data_2 << 32) | flag_value ^ 0x80000000;
            *(unsigned long long *)(register_rbx + 0xa838) = stack_param_2;
            
            // 设置高级渲染配置
            SetAdvancedRenderingConfiguration(register_rbx, register_rbp, &dword_data_1, flag_value);
            
            *(unsigned int *)(register_rbx + 0xa8b0) = 2;
            *(unsigned char *)(register_rbx + 0xa9f0) = 1;
            
            stack_data_1 = flag_value ^ 0x80000000;
            RenderingSystem_Initialize(&stack_param_1,
                                   *(unsigned char *)(register_rbx + 0x2604),
                                   *(unsigned char *)(register_rbx + 0x2606),
                                   *(unsigned char *)(register_rbx + 0x2607), 1);
            
            *(unsigned int *)(register_rbx + 0xaaa0) = 2;
            stack_param_1 = flag_value;
            stack_data_1 = flag_value;
            
RENDERING_STATE_UPDATE:
            // 更新渲染状态
            UpdateRenderingState(register_rbx, register_rbp, &dword_data_1);
            
            *(unsigned int *)(register_rbx + 0xa9e4) = 0x3f800000;  // 1.0f
            *(unsigned int *)(register_rbx + 0xa9e8) = 0x40400000;  // 3.0f
            *(unsigned int *)(register_rbx + 0xabd4) = 0x3f800000;  // 1.0f
RENDERING_FINALIZE:
            *(unsigned int *)(register_rbx + 0xabd8) = 0x40400000;  // 3.0f
        }
    }
    else {
ADVANCED_RENDERING_PATH:
        // 高级渲染特性处理
        if (*(float *)(register_rbx + 0xa9e4) != 0.0) {
            *(int *)(register_rbx + 0xa9e4) = register_r15d;
            *(unsigned int *)(register_rbx + 0xa9e8) = 0x40400000;  // 3.0f
        }
        if (*(float *)(register_rbx + 0xabd4) != 0.0) {
            *(int *)(register_rbx + 0xabd4) = register_r15d;
            goto RENDERING_FINALIZE;
        }
    }
    
    // 渲染资源管理和状态检查
    memory_offset = *(long long *)(register_rdi + 0x728);
    word_data = *(unsigned short *)(memory_offset + 0x5aa) & 0x40;
    
    // 检查渲染条件并更新状态
    if (((word_data != 0) && (0.0 < *(float *)(register_rbx + 0xa7f0))) &&
        (float_parameter = *(float *)(register_rbx + 0xa7d4) * *(float *)(register_rbx + 0xa7d4),
         0.0025000002 <
         *(float *)(register_rbx + 0xa7d0) * *(float *)(register_rbx + 0xa7d0) + float_parameter +
         *(float *)(register_rbx + 0xa7d8) * *(float *)(register_rbx + 0xa7d8))) {
        
        // 更新渲染标志
        *(unsigned short *)(memory_offset + 0x5ac) = *(unsigned short *)(memory_offset + 0x5ac) | word_data;
        flag_pointer = (unsigned short *)(*(long long *)(register_rdi + 0x728) + 0x5aa);
        *flag_pointer = *flag_pointer & ~word_data;
        *(unsigned int *)(*(long long *)(register_rdi + 0x728) + 0x5a4) = 0xffffffff;
        memory_offset = *(long long *)(register_rdi + 0x728);
    }
    
    // 处理渲染模式标志
    word_data = *(unsigned short *)(memory_offset + 0x5aa) & 0x3c;
    if (((word_data != 0) &&
        ((state_data = register_r14 & 0x2000000000, (register_r14 >> 0x1b & 1) == 0 ||
         ((state_data == 0 &&
          (state_data = ((unsigned long long)register_constant << 32) | register_r15d, 
           *(int *)(register_rbx + 0x2498) != -1)))))) &&
       ((((register_rsi | register_rcx) >> 0x1b & 1) == 0 || (state_data != 0)))) {
        
        *(unsigned short *)(memory_offset + 0x5ac) = *(unsigned short *)(memory_offset + 0x5ac) | word_data;
        flag_pointer = (unsigned short *)(*(long long *)(register_rdi + 0x728) + 0x5aa);
        *flag_pointer = *flag_pointer & ~word_data;
    }
    
    // 渲染参数优化处理
    if ((((unsigned int)(register_rsi | register_rcx) | (unsigned int)register_r14) & 0x8040000) == 0x40000) {
        float_parameter = *(float *)(register_rbx + 0xa608);
        *(float *)(register_rbx + 0xa608) = float_parameter;
        *(int *)(register_rbx + 0xa604) = register_r15d;
        
        if ((*(unsigned short *)(*(long long *)(register_rdi + 0x728) + 0x5aa) & 0x1000) == 0) {
            float_parameter = *(float *)(register_rbx + 43000);
            *(float *)(register_rbx + 43000) = float_parameter;
            *(int *)(register_rbx + 0xa7f4) = register_r15d;
        }
        
        if ((*(float *)(register_rbx + 0xa600) <= 0.0) && (*(float *)(register_rbx + 0xa604) == 0.0)) {
            float_parameter = (float)RenderingSystem_CalculateAdvancedParameters(float_parameter, 0xc7d5);
        }
        
        calculation_result = *(float *)(register_rbx + 0xa7f0);
RENDERING_VALIDATION_CHECK:
        if ((0.0 < calculation_result) || (*(float *)(register_rbx + 0xa7f4) != 0.0)) goto RENDERING_COMPLETE;
    }
    else {
        // 处理不同的渲染模式
        word_data = *(unsigned short *)(*(long long *)(register_rdi + 0x728) + 0x5aa);
        if ((word_data & 0x2c0) == 0) {
            if ((word_data & 0x100) == 0) {
                if ((*(unsigned short *)(*(long long *)(register_rdi + 0x728) + 0x5ac) & 0x3c0) != 0) {
                    float_parameter = (float)RenderingSystem_GetStandardParameters();
                }
            }
            else {
                float_parameter = (float)RenderingSystem_GetEnhancedParameters();
            }
        }
        else {
            float_parameter = (float)RenderingSystem_GetAdvancedParameters();
        }
        
        memory_offset = *(long long *)(register_rdi + 0x728);
        if ((*(unsigned short *)(memory_offset + 0x5aa) & 0x800) != 0) {
            stack_param_1 = ((unsigned int)(stack_param_1 & 0xffffff00) | 
                           *(unsigned char *)(register_rbx + 0x25fb));
            
            RenderingSystem_Initialize(&stack_param_1,
                                   *(unsigned char *)(register_rbx + 0x25fa),
                                   *(unsigned char *)(register_rbx + 0x25fc),
                                   *(unsigned char *)(register_rbx + 0x2600));
            
            // 配置高级渲染系统
            ConfigureAdvancedRenderingSystem(register_rbx, register_rbp, &float_parameter, &dword_data_1);
            
            *(unsigned int *)(register_rbx + 0xa6c0) = 5;
            *(unsigned char *)(register_rbx + 0xa800) = 1;
            
            if (register_xmm8 != *(float *)(register_rbx + 0xa7f4)) {
                *(unsigned int *)(register_rbx + 0xa7f4) = 0x3f800000;  // 1.0f
                *(unsigned int *)(register_rbx + 43000) = 0x40400000;  // 3.0f
            }
            
            *(unsigned int *)(register_rbx + 0xa7fc) = 0x42200000;  // 40.0f
            memory_offset = *(long long *)(register_rdi + 0x728);
        }
        
        // 最终渲染参数设置
        if ((*(unsigned short *)(memory_offset + 0x5aa) & 0xc7d5) == 0) {
            if (*(float *)(register_rbx + 0xa604) != 0.0) {
                float_parameter = *(float *)(register_rbx + 0xa608);
                *(float *)(register_rbx + 0xa608) = float_parameter;
                *(int *)(register_rbx + 0xa604) = register_r15d;
            }
            
            if (*(float *)(register_rbx + 0xa600) <= 0.0) {
RENDERING_PARAMETER_ADJUSTMENT:
                float_parameter = (float)RenderingSystem_CalculateAdvancedParameters(float_parameter, 0xc7d5);
            }
        }
        else {
            float_parameter = *(float *)(register_rbx + 0xa600);
            if ((register_xmm8 <= float_parameter) ||
                ((float_parameter <= 0.0 && (*(float *)(register_rbx + 0xa604) == 0.0)))) goto RENDERING_PARAMETER_ADJUSTMENT;
        }
        
        // 渲染特性验证
        if ((*(unsigned short *)(*(long long *)(register_rdi + 0x728) + 0x5aa) & 0x3c2a) == 0) {
            if (*(float *)(register_rbx + 0xa7f4) != 0.0) {
                float_parameter = *(float *)(register_rbx + 43000);
                *(float *)(register_rbx + 43000) = float_parameter;
                *(int *)(register_rbx + 0xa7f4) = register_r15d;
            }
            if (0.0 < *(float *)(register_rbx + 0xa7f0)) goto RENDERING_COMPLETE;
        }
        else {
            float_parameter = *(float *)(register_rbx + 0xa7f0);
            calculation_result = float_parameter;
            if (float_parameter < register_xmm8) goto RENDERING_VALIDATION_CHECK;
        }
    }
    
    // 调用最终渲染处理函数
    RenderingSystem_CalculateAdvancedParameters(float_parameter, 0x382a);
RENDERING_COMPLETE:
    // 调用渲染系统完成处理函数
    RenderingSystem_FinalizeProcessing(*(unsigned long long *)(register_rbp + 0x110) ^ 
                                     (unsigned long long)&stack_param_1);
}

// 辅助函数声明
void RenderingSystem_Initialize(void *stack_param, unsigned char param1, unsigned char param2, 
                               unsigned char param3, int param4);
void SetAdvancedRenderingParameters(long long *register_rbx, long long *register_rbp, 
                                  float **float_parameter, unsigned int **dword_data);
void SetExtendedRenderingParameters(long long *register_rbx, long long *register_rbp, 
                                 unsigned int **dword_data);
void SetRenderingConfiguration(long long *register_rbx, long long *register_rbp, 
                            unsigned int **dword_data);
void SetAdvancedRenderingConfiguration(long long *register_rbx, long long *register_rbp, 
                                    unsigned int **dword_data, unsigned int flag_value);
void UpdateRenderingState(long long *register_rbx, long long *register_rbp, 
                         unsigned int **dword_data);
void ConfigureAdvancedRenderingSystem(long long *register_rbx, long long *register_rbp, 
                                    float **float_parameter, unsigned int **dword_data);
float RenderingSystem_CalculateAdvancedParameters(float param1, int param2);
float RenderingSystem_GetStandardParameters(void);
float RenderingSystem_GetEnhancedParameters(void);
float RenderingSystem_GetAdvancedParameters(void);
void RenderingSystem_FinalizeProcessing(unsigned long long param1);

// 常量定义
#define RENDERING_FLAG_ENABLED 0x40
#define RENDERING_MODE_STANDARD 0x2c0
#define RENDERING_MODE_ENHANCED 0x100
#define RENDERING_MODE_ADVANCED 0x800
#define RENDERING_PARAMETER_DEFAULT_1 0x3f800000  // 1.0f
#define RENDERING_PARAMETER_DEFAULT_3 0x40400000  // 3.0f
#define RENDERING_PARAMETER_HIGH_40 0x42200000   // 40.0f
#define RENDERING_THRESHOLD_LOW 0.0025000002
#define RENDERING_STATUS_ACTIVE 0x40000
#define RENDERING_CONFIG_MASK 0x8040000

// 类型别名定义
typedef unsigned short render_flag_t;
typedef unsigned int render_parameter_t;
typedef float render_value_t;
typedef unsigned long long render_state_t;
typedef void* render_context_t;

// 枚举定义
typedef enum {
    RENDERING_MODE_DISABLED = 0,
    RENDERING_MODE_STANDARD_ENABLED = 1,
    RENDERING_MODE_ENHANCED_ENABLED = 2,
    RENDERING_MODE_ADVANCED_ENABLED = 5
} RenderingMode;

typedef enum {
    RENDERING_STATUS_INACTIVE = 0,
    RENDERING_STATUS_ACTIVE = 1,
    RENDERING_STATUS_OPTIMIZED = 2,
    RENDERING_STATUS_FINALIZED = 3
} RenderingStatus;

// 结构体定义
typedef struct {
    render_parameter_t parameter_1;
    render_parameter_t parameter_2;
    render_parameter_t parameter_3;
    render_parameter_t parameter_4;
} RenderingParameters;

typedef struct {
    render_state_t state_1;
    render_state_t state_2;
    render_state_t state_3;
    render_state_t state_4;
} RenderingStates;

typedef struct {
    render_value_t value_1;
    render_value_t value_2;
    render_value_t value_3;
    render_value_t value_4;
} RenderingValues;

typedef struct {
    render_flag_t flags;
    render_mode_t mode;
    render_status_t status;
    render_context_t context;
} RenderingConfig;

// 函数别名定义
#define RenderingSystemStateProcessor RenderingSystem_AdvancedStateAndParameterManager
#define RenderingSystemParameterHandler RenderingSystem_AdvancedStateAndParameterManager
#define RenderingSystemConfigManager RenderingSystem_AdvancedStateAndParameterManager
#define RenderingSystemOptimizer RenderingSystem_AdvancedStateAndParameterManager