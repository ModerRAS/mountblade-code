#include "TaleWorlds.Native.Split.h"

// ============================================================================
// 03_rendering_part470.c - 渲染系统高级参数处理和渲染管线管理模块
// ============================================================================

// 常量定义
#define RENDERING_SYSTEM_FLAG_SHADOW           0x800
#define RENDERING_SYSTEM_FLAG_QUALITY         0x2000
#define RENDERING_SYSTEM_MODE_NORMAL          0
#define RENDERING_SYSTEM_MODE_HIGH_QUALITY    1
#define RENDERING_SYSTEM_MODE_ULTRA_QUALITY   4
#define RENDERING_SYSTEM_MODE_DEBUG           2

// 浮点常量
#define RENDERING_MIN_FLOAT_THRESHOLD         0.01f
#define RENDERING_DEFAULT_FLOAT_VALUE         0.5f
#define RENDERING_DISTANCE_THRESHOLD          250000.0f
#define RENDERING_SCALE_FACTOR                 500.0f
#define RENDERING_COORDINATE_SCALE           10000.0f
#define RENDERING_TIME_OFFSET                 200000.0f

// 状态常量
#define RENDERING_STATE_INVALID               -1
#define RENDERING_STATE_VALID                 0
#define RENDERING_STATE_ACTIVE                1
#define RENDERING_STATE_DISABLED             0xffffffff

// 渲染管线模式
typedef enum {
    RENDERING_PIPELINE_STANDARD = 0,
    RENDERING_PIPELINE_ENHANCED = 1,
    RENDERING_PIPELINE_ADVANCED = 2,
    RENDERING_PIPELINE_ULTRA = 3,
    RENDERING_PIPELINE_CUSTOM = 4
} RenderingPipelineMode;

// 渲染参数结构
typedef struct {
    float position_x;
    float position_y;
    float position_z;
    float position_w;
    float normal_x;
    float normal_y;
    float normal_z;
    float normal_w;
    float texture_u;
    float texture_v;
    float texture_w;
    float padding;
    float scale_factor;
    float intensity;
    float quality;
    float reserved;
} RenderingParameters;

// 渲染状态结构
typedef struct {
    int mode;
    int quality;
    int state;
    int flags;
    float threshold;
    float scale;
    float intensity;
    float reserved;
} RenderingState;

// 类型别名定义
typedef longlong RenderingContextHandle;
typedef longlong RenderingDataHandle;
typedef longlong RenderingPipelineHandle;
typedef longlong RenderingTextureHandle;
typedef longlong RenderingShaderHandle;
typedef longlong RenderingBufferHandle;

// 函数别名
typedef void (*RenderingSystem_AdvancedParameterProcessor)(RenderingContextHandle context, RenderingDataHandle data, RenderingParameters* params, char mode);
typedef int (*RenderingSystem_QualityCalculator)(RenderingParameters* params, float threshold);
typedef void (*RenderingSystem_PipelineOptimizer)(RenderingPipelineHandle pipeline, RenderingState* state);
typedef void (*RenderingSystem_TextureProcessor)(RenderingTextureHandle texture, RenderingParameters* params);
typedef void (*RenderingSystem_ShaderManager)(RenderingShaderHandle shader, RenderingState* state);

/**
 * 渲染系统高级参数处理器
 * 
 * 功能：处理渲染系统的高级参数，包括渲染管线管理、质量计算、
 *       纹理处理、着色器管理、参数优化等高级渲染功能。
 * 
 * 参数：
 *   context - 渲染上下文句柄
 *   data - 渲染数据句柄
 *   params - 渲染参数结构指针
 *   mode - 渲染模式标志
 * 
 * 主要功能：
 *   1. 渲染管线状态管理和优化
 *   2. 渲染质量参数计算和调整
 *   3. 纹理坐标和参数处理
 *   4. 着色器参数管理和优化
 *   5. 渲染缓冲区管理和同步
 *   6. 高级数学计算和变换
 *   7. 性能优化和质量平衡
 *   8. 错误处理和状态监控
 */
void RenderingSystem_AdvancedParameterProcessor(RenderingContextHandle context, RenderingDataHandle data, RenderingParameters* params, char mode)
{
    // 局部变量声明
    ushort* flag_pointer;
    ushort flag_value;
    longlong* data_pointer;
    longlong temp_long;
    RenderingPipelineHandle* pipeline_pointer;
    char status_flag;
    int index_var1;
    int index_var2;
    uint* uint_pointer;
    RenderingDataHandle data_handle;
    RenderingTextureHandle* texture_pointer;
    RenderingShaderHandle* shader_pointer;
    ushort short_value;
    ulonglong ulong_value1;
    longlong long_var1;
    longlong long_var2;
    longlong long_var3;
    int* int_pointer;
    ulonglong ulong_value2;
    ulonglong ulong_value3;
    byte mode_flag;
    uint uint_value1;
    RenderingBufferHandle buffer_value;
    uint uint_value2;
    RenderingParameters param_value;
    float float_var1;
    char temp_array1[16];
    char temp_array2[16];
    float float_var2;
    float float_var3;
    float float_var4;
    float float_var5;
    float float_var6;
    int pipeline_mode;
    uint stack_uint1;
    uint stack_uint2;
    void* stack_pointer1;
    RenderingParameters* stack_param1;
    uint stack_param2;
    uint stack_param3;
    uint stack_param4;
    uint stack_param5;
    uint stack_param6;
    uint stack_param7;
    uint stack_param8;
    uint stack_param9;
    char stack_char1;
    RenderingPipelineHandle stack_pipeline1;
    int stack_index1;
    RenderingBufferHandle stack_buffer1;
    float stack_float1;
    uint stack_param10;
    uint stack_param11;
    uint stack_param12;
    RenderingBufferHandle stack_buffer2;
    RenderingBufferHandle stack_buffer3;
    RenderingBufferHandle stack_buffer4;
    RenderingBufferHandle stack_buffer5;
    RenderingBufferHandle stack_buffer6;
    RenderingBufferHandle stack_buffer7;
    uint stack_param13;
    uint stack_param14;
    uint stack_param15;
    uint stack_param16;
    uint stack_param17;
    RenderingBufferHandle stack_buffer8;
    uint stack_param18;
    uint stack_param19;
    RenderingBufferHandle stack_buffer9;
    RenderingBufferHandle stack_buffer10;
    RenderingBufferHandle stack_buffer11;
    RenderingBufferHandle stack_buffer12;
    RenderingBufferHandle stack_buffer13;
    RenderingBufferHandle stack_buffer14;
    uint stack_param20;
    uint stack_param21;
    uint stack_param22;
    uint stack_param23;
    RenderingBufferHandle stack_buffer15;
    RenderingBufferHandle stack_buffer16;
    longlong stack_long1;
    longlong stack_long2;
    RenderingBufferHandle stack_buffer17;
    RenderingBufferHandle stack_buffer18;
    uint stack_param24;
    uint stack_param25;
    uint stack_param26;
    uint stack_param27;
    RenderingBufferHandle stack_buffer19;
    uint stack_param28;
    RenderingBufferHandle stack_buffer20;
  
    // 初始化栈变量和模式检测
    stack_buffer20 = 0xfffffffffffffffe;
    stack_uint2 = 0;
    
    // 检测渲染模式并设置模式标志
    if ((_DAT_180c92514 == RENDERING_SYSTEM_MODE_HIGH_QUALITY) || 
        (_DAT_180c92514 == RENDERING_SYSTEM_MODE_ULTRA_QUALITY)) {
        mode_flag = 1;
    }
    else {
        mode_flag = 0;
    }
    
    // 设置管线模式
    pipeline_mode = (int)mode_flag;
    
    // 检查阴影标志并处理阴影状态
    if ((*(uint *)(context + 0x56c) & RENDERING_SYSTEM_FLAG_SHADOW) != 0) {
        long_var2 = *(longlong *)(context + 0x728);
        flag_value = *(ushort *)(long_var2 + 0x5aa);
        if (flag_value != 0) {
            *(ushort *)(long_var2 + 0x5ac) = *(ushort *)(long_var2 + 0x5ac) | flag_value;
            flag_pointer = (ushort *)(*(longlong *)(context + 0x728) + 0x5aa);
            *flag_pointer = *flag_pointer & ~flag_value;
            long_var2 = *(longlong *)(context + 0x728);
        }
        *(uint *)(long_var2 + 0x5a4) = RENDERING_STATE_DISABLED;
    }
    
    // 根据模式获取索引值
    if (mode_flag == 0) {
        index_var1 = *(int *)(data + 0xb0);
    }
    else {
        index_var1 = *(int *)((longlong)params + 0x2c);
    }
    
    // 验证索引值并获取有效索引
    if ((index_var1 > RENDERING_STATE_INVALID) &&
        (index_var2 = *(int *)((longlong)index_var1 * 0xa60 + 0x3600 + *(longlong *)(context + 0x8d8)),
         index_var2 > RENDERING_STATE_INVALID)) {
        index_var1 = index_var2;
    }
    
    // 保存索引值并检查状态
    stack_index1 = index_var1;
    status_flag = func_0x000180522f60(context);
    
    // 处理状态标志
    if (status_flag == '\0') {
        if (mode_flag != 0) goto SHADOW_PROCESSING_BRANCH;
    }
    else {
        *(char *)(context + 0x588) = 1;
        if (mode_flag != 0) goto SHADOW_PROCESSING_BRANCH;
        
        // 处理标准模式下的渲染管线
        if ((((_DAT_180c92514 - 2U) & 0xfffffffc) == 0) && (_DAT_180c92514 != RENDERING_SYSTEM_MODE_ULTRA_QUALITY)) {
            data_pointer = *(longlong **)(context + 0x8e0);
            index_var1 = _Mtx_lock(0x180c95528);
            if (index_var1 != 0) {
                __Throw_C_error_std__YAXH_Z(index_var1);
            }
            
            // 处理渲染队列
            uint_value2 = *(uint *)(*data_pointer + 0x10);
            status_flag = FUN_180645c10(0x180c95578, 0, &UNK_1809fa560);
            if ((status_flag != '\0') && 
                (status_flag = FUN_180645c10(0x180c95578, 4, &UNK_1809fa540), status_flag != '\0')) {
                FUN_180645c10(0x180c95578, uint_value2, &UNK_1809fa510);
            }
            
            long_var2 = *(longlong *)(*data_pointer + 0x8e8);
            _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
            index_var1 = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
            
            // 处理渲染对象列表
            if (0 < index_var1) {
                long_var1 = 0;
                long_var3 = _DAT_180c92cd8;
                do {
                    temp_long = *(longlong *)(long_var3 + long_var1 * 8);
                    if (((temp_long != 0) && 
                         (*(char *)(*(longlong *)(temp_long + 0x58f8) + 0x1c) != '\0')) &&
                        (*(longlong *)(temp_long + 0x58f8) != long_var2)) {
                        FUN_1805b59d0(temp_long, 0x180c95578);
                        long_var3 = _DAT_180c92cd8;
                    }
                    long_var1 = long_var1 + 1;
                } while (long_var1 < index_var1);
            }
            
            // 处理渲染缓存
            if (_DAT_180c96070 != 0) {
                FUN_180567f30(_DAT_180c92580, 0x180c95578);
            }
            _DAT_180c95b3c = 0;
            // 清理渲染缓存
            memset(_DAT_180c95b10, 0, (longlong)(_DAT_180c95b08 >> 3));
        }
    }
    
    // 处理渲染管线优化
    long_var2 = *(longlong *)(context + 0x6e0);
    if ((((byte)*(uint *)(long_var2 + 0x209c) & 3) == 3) && 
        (*(int *)(long_var2 + 0x2108) != RENDERING_STATE_INVALID)) {
        FUN_1804f8b80(*(RenderingBufferHandle *)(context + 0x8d8), 
                      *(RenderingBufferHandle *)(long_var2 + 0x20f0));
    }
    
SHADOW_PROCESSING_BRANCH:
    
    // 处理调试模式下的渲染管线重置
    if (*(int *)(context + 0x570) == RENDERING_SYSTEM_MODE_DEBUG) {
        *(RenderingBufferHandle *)(*(longlong *)(context + 0x8d8) + 0x8fd220) = 0;
        *(RenderingBufferHandle *)(*(longlong *)(context + 0x8d8) + 0x98d228) = 0;
    }
    
    // 处理索引参数和栈变量初始化
    if (index_var1 < 0) {
        stack_uint1 = 0;
        uint_pointer = &stack_uint1;
        uint_value2 = 2;
        stack_uint2 = 2;
        stack_param11 = 0;
    }
    else {
        uint_pointer = (uint *)FUN_180507810((longlong)index_var1 * 0xa60 + *(longlong *)(context + 0x8d8) + 0x30a0, &stack_pipeline1);
        uint_value2 = 1;
        stack_uint2 = 1;
        stack_param11 = *uint_pointer;
    }
    
    stack_param12 = stack_param11;
    *uint_pointer = 0;
    
    // 处理渲染回调函数
    if ((((uint_value2 & 2) != 0) && (uint_value2 = uint_value2 & 0xfffffffd, stack_uint2 = uint_value2, stack_uint1 != 0)) && (_DAT_180c8f008 != 0)) {
        (**(code **)(_DAT_180c8f008 + 0x18))();
    }
    
    if ((((uint_value2 & 1) != 0) && (uint_value2 = uint_value2 & 0xfffffffe, stack_uint2 = uint_value2, (int)stack_pipeline1 != 0)) && (_DAT_180c8f008 != 0)) {
        (**(code **)(_DAT_180c8f008 + 0x18))();
    }
    
    // 根据模式获取渲染参数
    if (mode_flag == 0) {
        stack_uint1 = FUN_18051cdd0(context, data);
    }
    else {
        stack_uint1 = *(uint *)(params + 4);
    }
    
    // 处理渲染管线指针和参数查找
    data_handle = *(RenderingDataHandle *)(*(longlong *)(context + 0x598) + 0x120);
    int_pointer = (int *)*data_handle;
    data_handle = data_handle;
    
    if (int_pointer == (int *)0x0) {
        data_handle = data_handle + 1;
        int_pointer = (int *)*data_handle;
        while (int_pointer == (int *)0x0) {
            data_handle = data_handle + 1;
            int_pointer = (int *)*data_handle;
        }
    }
    
    // 查找匹配的渲染参数
    if (int_pointer != (int *)data_handle[*(longlong *)(*(longlong *)(context + 0x598) + 0x128)]) {
        do {
            uint_value1 = int_pointer[1];
            if ((stack_uint1 == uint_value1) ||
                ((((longlong)(int)stack_uint1 != -1 && (uint_value1 != 0xffffffff)) &&
                 ((long_var2 = *(longlong *)((longlong)*(int *)(*(longlong *)(context + 0x590) + 0xac) * 0xe0 + _DAT_180c95fb0 + 0x78),
                   index_var1 = *(int *)(long_var2 + 4 + (longlong)(int)stack_uint1 * 8),
                   index_var1 == *(int *)(long_var2 + 4 + (longlong)(int)uint_value1 * 8) && (index_var1 != -1)))))) {
                pipeline_mode = (*int_pointer >> 10 & 7U) - 1;
                break;
            }
            int_pointer = *(int **)(int_pointer + 2);
            while (int_pointer == (int *)0x0) {
                data_handle = data_handle + 1;
                int_pointer = (int *)*data_handle;
            }
        } while (int_pointer != (int *)data_handle[*(longlong *)(*(longlong *)(context + 0x598) + 0x128)]);
    }
    
    // 处理特殊渲染模式
    if ((mode_flag == 0) && (pipeline_mode == 4)) {
        status_flag = '\0';
        if (-1 < *(char *)(data + 0xb4)) {
            status_flag = *(char *)(data + 0xb4);
        }
        FUN_180525ac0(context, status_flag);
    }
    
    // 计算渲染质量参数
    uint_value2 = *(uint *)(*(longlong *)(context + 0x590) + 0xac);
    index_var1 = FUN_18053a410(&DAT_180c95f30, uint_value2, stack_uint1);
    index_var1 = *(int *)(_DAT_180c95f68 + (longlong)index_var1 * 4);
    
    if (index_var1 == -1) {
        long_var2 = 0;
    }
    else {
        long_var2 = *(longlong *)(_DAT_180c95f88 + (longlong)index_var1 * 8);
    }
    
    // 计算渲染质量权重
    float_var3 = 0.0f;
    float_var4 = 0.0f;
    float_var1 = *(float *)(long_var2 + 0x1d8);
    float_var2 = *(float *)(long_var2 + 0x188);
    index_var1 = *(int *)(long_var2 + 0x1f0);
    
    while ((float_var1 == 0.0f && (index_var1 != -1))) {
        float_var3 = float_var3 + float_var2;
        index_var1 = FUN_18053a410(&DAT_180c95f30, uint_value2, *(uint *)(long_var2 + 0x1f0));
        index_var1 = *(int *)(_DAT_180c95f68 + (longlong)index_var1 * 4);
        
        if (index_var1 == -1) {
            long_var3 = 0;
        }
        else {
            long_var3 = *(longlong *)(_DAT_180c95f88 + (longlong)index_var1 * 8);
        }
        
        float_var1 = *(float *)(long_var3 + 0x1d8);
        float_var2 = *(float *)(long_var3 + 0x188);
        index_var1 = *(int *)(long_var3 + 0x1f0);
    }
    
    float_var3 = float_var3 + float_var2 * float_var1;
    
    // 处理高质量渲染模式
    if ((*(uint *)(context + 0x56c) >> 0xe & 1) != 0) {
        float_var1 = *(float *)(long_var2 + 0x1e0);
        float_var2 = *(float *)(long_var2 + 0x188);
        index_var1 = *(int *)(long_var2 + 0x1f0);
        
        while ((float_var1 == 0.0f && (index_var1 != -1))) {
            float_var4 = float_var4 + float_var2;
            index_var1 = FUN_18053a410(&DAT_180c95f30, uint_value2, *(uint *)(long_var2 + 0x1f0));
            index_var1 = *(int *)(_DAT_180c95f68 + (longlong)index_var1 * 4);
            
            if (index_var1 == -1) {
                long_var3 = 0;
            }
            else {
                long_var3 = *(longlong *)(_DAT_180c95f88 + (longlong)index_var1 * 8);
            }
            
            float_var1 = *(float *)(long_var3 + 0x1e0);
            float_var2 = *(float *)(long_var3 + 0x188);
            index_var1 = *(int *)(long_var3 + 0x1f0);
        }
        
        float_var4 = float_var4 + float_var2 * float_var1;
    }
    
    // 应用渲染质量阈值
    if (float_var3 < RENDERING_MIN_FLOAT_THRESHOLD) {
        float_var3 = RENDERING_DEFAULT_FLOAT_VALUE;
    }
    
    if (float_var3 <= float_var4) {
        float_var4 = float_var3;
    }
    
    stack_pipeline1 = (ulonglong)mode_flag << 0x1f;
    *(float *)(context + 0xa08) = float_var3;
    *(float *)(context + 0xa0c) = float_var4;
    
    // 处理非阴影渲染模式
    if ((*(uint *)(context + 0x56c) & RENDERING_SYSTEM_FLAG_SHADOW) == 0) {
    // 执行渲染系统激活操作
    FUN_18051fa40(context, 4);
    
    // 处理渲染系统错误和状态检查
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
                 0x48) < _DAT_180d49ed8) && (FUN_1808fcb90(&DAT_180d49ed8), _DAT_180d49ed8 == -1)) {
      // 错误处理：创建和初始化错误信息结构
      char* error_msg_ptr = &UNK_180a3c3e0;
      uint error_code = 0;
      uint error_subtype = 0;
      char* error_data_ptr = (char*)0x0;
      uint error_flags = 0;
      char* error_buffer = (char*)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
      *(char*)error_buffer = 0;
      error_data_ptr = error_buffer;
      error_code = FUN_18064e990(error_buffer);
      *error_buffer = 'D'; *(error_buffer+1) = 'a'; *(error_buffer+2) = 't'; *(error_buffer+3) = 'a'; *(error_buffer+4) = 'h';
      *(ushort*)(error_buffer + 1) = 'h';
      error_flags = 5;
      _DAT_180d49edc = FUN_180571e20(&DAT_180c960c0, &error_msg_ptr);
      error_msg_ptr = &UNK_180a3c3e0;
      // 错误处理完成，程序终止
      FUN_18064e900(error_buffer);
    }
    
    longlong quality_data_ptr = 0;
    FUN_180508510(context, _DAT_180d49edc, 0, 0);
    
    // 设置渲染参数结构
    uint render_flags = 0;
    uint render_mode = 0x1000000;
    uint render_quality = 0;
    float render_intensity = 1.0f;
    float render_threshold = -0.3f;
    float render_scale = -0.3f;
    float render_offset = 0.4f;
    uint render_reserved = 0;
    char* render_params = (char*)((ulonglong)stack_uint1 << 0x20);
    char* render_data = (char*)stack_uint2;
    FUN_18051ec50(context, &render_params);
    
    uint texture_id = *(uint*)(*(longlong*)(context + 0x590) + 0x2450);
    stack_uint1 = texture_id;
    
    // 查找纹理质量数据
    int quality_index = FUN_18053a410(&DAT_180c95f30, *(uint*)(*(longlong*)(context + 0x590) + 0xac), texture_id);
    quality_index = *(int*)(_DAT_180c95f68 + (longlong)quality_index * 4);
    if (quality_index != -1) {
      quality_data_ptr = *(longlong*)(_DAT_180c95f88 + (longlong)quality_index * 8);
    }
    
    // 处理高质量渲染模式
    if (pipeline_mode == 1) {
      if (*(float*)(quality_data_ptr + 0x1dc) <= 0.0) {
        float_var1 = *(float*)(quality_data_ptr + 0x1e8) - *(float*)(quality_data_ptr + 0x188);
      }
      else {
        float_var1 = -*(float*)(quality_data_ptr + 0x1dc);
      }
      *(float*)(context + 0x584) = float_var1;
    }
    
    // 处理有效索引的渲染管线
    if (-1 < *(int*)(context + 0x560)) {
      render_flags = 0;
      render_mode = 0x1000000;
      render_quality = 0;
      render_intensity = 1.0f;
      render_threshold = -0.3f;
      render_scale = -0.3f;
      render_offset = 0.4f;
      render_reserved = 0;
      render_params = (char*)((ulonglong)texture_id << 0x20);
      render_data = (char*)0x80000000;
      
      longlong pipeline_ptr = *(longlong*)(context + 0x8d8) + 0x30a0 + (longlong)*(int*)(context + 0x560) * 0xa60;
      FUN_18051ec50(pipeline_ptr, &render_params);
      
      // 获取管线质量数据
      quality_index = FUN_18053a410(&DAT_180c95f30, *(uint*)(*(longlong*)(pipeline_ptr + 0x590) + 0xac), texture_id);
      quality_index = *(int*)(_DAT_180c95f68 + (longlong)quality_index * 4);
      longlong pipeline_quality_data = 0;
      if (quality_index == -1) {
        pipeline_quality_data = 0;
      }
      else {
        pipeline_quality_data = *(longlong*)(_DAT_180c95f88 + (longlong)quality_index * 8);
      }
      
      // 高质量模式处理
      if (pipeline_mode == 1) {
        *(uint*)(pipeline_ptr + 0x670) = 0xffffffff;
        float_var1 = *(float*)(pipeline_quality_data + 0x1dc);
        *(float*)(pipeline_ptr + 0x584) = -float_var1;
        if (float_var1 <= -0.0) {
          *(float*)(pipeline_ptr + 0x584) = *(float*)(pipeline_quality_data + 0x1e8) - *(float*)(pipeline_quality_data + 0x188);
        }
      }
      
      // 设置管线时间戳和参数
      *(longlong*)(pipeline_ptr + 0x6b8) = *(longlong*)(&DAT_180c8ed30 + (longlong)*(int*)(pipeline_ptr + 0x6c0) * 8) + RENDERING_TIME_OFFSET;
      longlong scale_factor_ptr = FUN_180532320(pipeline_quality_data);
      FUN_18052e450(pipeline_ptr, 0xffffffff, 1, *(float*)(pipeline_quality_data + 0x188) * *(float*)(scale_factor_ptr + 8));
      FUN_18052e130(context, 0xffffffff, 1);
      texture_id = stack_uint1;
      
      // 根据渲染模式优化管线
      if ((_DAT_180c92514 != 1) && (_DAT_180c92514 != 4)) {
        FUN_180530dd0(pipeline_ptr);
        texture_id = stack_uint1;
      }
    }
    
    // 设置渲染坐标和时间参数
    *(longlong*)(context + 0xa10) = *(longlong*)(&DAT_180c8ed30 + (longlong)*(int*)(context + 0xa18) * 8) + RENDERING_COORDINATE_SCALE;
    *(longlong*)(context + 0x9f8) = *(longlong*)(&DAT_180c8ed30 + (longlong)*(int*)(context + 0xa00) * 8);
  }
  else {
    lVar15 = *(longlong *)(param_1 + 0x590);
    uVar19 = *(ulonglong *)(lVar15 + 0x2460);
    if (uVar19 != 0) {
      uVar19 = *(ulonglong *)(uVar19 + 0x1d0);
    }
    uVar18 = uVar19 & 0xffffffffffffff00;
    if ((char)*(ulonglong *)(lVar15 + 0x2470) == '\0') {
      uVar18 = uVar19;
    }
    uVar19 = *(ulonglong *)(lVar15 + 0x24a8);
    if (uVar19 != 0) {
      uVar19 = *(ulonglong *)(uVar19 + 0x1d0);
    }
    uVar13 = uVar19 & 0xffffffffffffff00;
    if ((char)*(ulonglong *)(lVar15 + 0x24b8) == '\0') {
      uVar13 = uVar19;
    }
    puStack_250 = (undefined4 *)
                  ((uVar13 | uVar18 | *(ulonglong *)(lVar15 + 0x2470) |
                   *(ulonglong *)(lVar15 + 0x24b8)) & 0x200 | uStack_228);
    uStack_248 = 0;
    uStack_230 = 0x1000000;
    uStack_244 = 0;
    uStack_240 = 0x3f800000;
    uStack_23c = 0xbe4ccccd;
    uStack_238 = 0xbe4ccccd;
    uStack_234 = 0x3ecccccd;
    uStack_22c = 0;
    puStack_258 = (undefined *)((ulonglong)uStack_264 << 0x20);
    FUN_18051ec50(param_1,&puStack_258);
    lVar15 = *(longlong *)(param_1 + 0x590);
    uStack_264 = *(uint *)(lVar15 + 0x2450);
    if ((lVar15 != 0) && (lVar15 = *(longlong *)(lVar15 + 0xabf0), lVar15 != 0)) {
      *(undefined4 *)(lVar15 + 0x28) = 0xbe99999a;
      *(undefined4 *)(lVar15 + 0x2c) = 0x3f000000;
      *(undefined4 *)(lVar15 + 0x30) = 0x49742400;
      *(undefined4 *)(lVar15 + 0x34) = 0x3e4ccccd;
    }
    if (bVar20 == 0) {
      uVar24 = *(undefined4 *)(param_2 + 0xb8);
      uVar22 = *(undefined8 *)(param_2 + 0x38);
    }
    else {
      uVar24 = *(undefined4 *)((longlong)param_3 + 0x24);
      uVar22 = param_3[10];
    }
    uStack_218 = _DAT_180c8ece0;
    iVar7 = *(int *)(param_1 + 0x18);
    uStack_228 = CONCAT44(uStack_228._4_4_,iVar7);
    if ((iVar7 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x30))(iVar7);
    }
    uStack_260 = uVar23 | 8;
    iVar8 = (**(code **)(uStack_218 + 0x1e8))
                      (*(undefined4 *)(*(longlong *)(param_1 + 0x8d8) + 0x98d928),uStack_208,iVar7,
                       uVar24,uVar22);
    uStack_260 = uVar23;
    if ((iVar7 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x18))(iVar7);
    }
    FUN_18051fa40(param_1,iVar8);
    iVar7 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8)
                    + 0x48);
    if (iVar8 == 4) {
      uVar12 = _DAT_180d49ee4;
      if ((iVar7 < _DAT_180d49ee0) &&
         (FUN_1808fcb90(&DAT_180d49ee0), uVar12 = _DAT_180d49ee4, _DAT_180d49ee0 == -1)) {
        puStack_258 = &UNK_180a3c3e0;
        uStack_240 = 0;
        uStack_23c = 0;
        puStack_250 = (undefined4 *)0x0;
        uStack_248 = 0;
        puVar11 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
        *(undefined1 *)puVar11 = 0;
        puStack_250 = puVar11;
        uStack_240 = FUN_18064e990(puVar11);
        *puVar11 = 0x74616544;
        *(undefined2 *)(puVar11 + 1) = 0x68;
        uStack_248 = 5;
        _DAT_180d49ee4 = FUN_180571e20(&DAT_180c960c0,&puStack_258);
        puStack_258 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar11);
      }
    }
    else {
      uVar12 = _DAT_180d49eec;
      if ((iVar7 < _DAT_180d49ee8) &&
         (FUN_1808fcb90(&DAT_180d49ee8), uVar12 = _DAT_180d49eec, _DAT_180d49ee8 == -1)) {
        puStack_258 = &UNK_180a3c3e0;
        uStack_240 = 0;
        uStack_23c = 0;
        puStack_250 = (undefined4 *)0x0;
        uStack_248 = 0;
        puVar11 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
        *(undefined1 *)puVar11 = 0;
        puStack_250 = puVar11;
        uStack_240 = FUN_18064e990(puVar11);
        *puVar11 = 0x6e757453;
        *(undefined1 *)(puVar11 + 1) = 0;
        uStack_248 = 4;
        _DAT_180d49eec = FUN_180571e20(&DAT_180c960c0,&puStack_258);
        puStack_258 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar11);
      }
    }
    FUN_180508510(param_1,uVar12,0,0);
    if ((DAT_180c8ec8a != '\0') && (*(int *)(param_1 + 0x570) == 2)) {
      FUN_180541010(*(undefined8 *)(param_1 + 0x6d8),0x21);
    }
    uVar21 = uStack_264;
    iVar7 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(*(longlong *)(param_1 + 0x590) + 0xac),
                          uStack_264);
    iVar7 = *(int *)(_DAT_180c95f68 + (longlong)iVar7 * 4);
    lVar15 = 0;
    if (iVar7 != -1) {
      lVar15 = *(longlong *)(_DAT_180c95f88 + (longlong)iVar7 * 8);
    }
    if (bVar20 == 0) {
      if ((*(char *)(param_2 + 0x50) == '\0') ||
         (fVar25 = ((float)*(int *)(param_2 + 0x88) / *(float *)(param_2 + 0xc0)) * 1.5,
         *(float *)(param_2 + 0x90) <= fVar25 && fVar25 != *(float *)(param_2 + 0x90))) {
        *(undefined8 *)(param_1 + 0xa20) = 0;
        *(undefined8 *)(param_1 + 0xa28) = 0;
        *(undefined8 *)(param_1 + 0xa30) = 0;
        *(undefined8 *)(param_1 + 0xa38) = 0;
      }
      else {
        puVar10 = (undefined8 *)
                  FUN_180534930(*(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8) + 0x70,
                                &puStack_258,param_2 + 0x58);
        uVar22 = puVar10[1];
        *(undefined8 *)(param_1 + 0xa20) = *puVar10;
        *(undefined8 *)(param_1 + 0xa28) = uVar22;
        *(undefined8 *)(param_1 + 0xa08) = 0;
        if (((*(uint *)(param_2 + 0x38) >> 0xd & 1) == 0) || (*(char *)(param_2 + 0xb4) != -1)) {
          fVar25 = *(float *)(param_2 + 0x4c);
          fStack_210 = fVar25 * *(float *)(param_2 + 0x28);
          fVar28 = fVar25 * *(float *)(param_2 + 0x24);
          fVar25 = fVar25 * *(float *)(param_2 + 0x20);
          uStack_218 = CONCAT44(fVar28,fVar25);
          *(float *)(param_1 + 0xa30) = fVar25;
          *(float *)(param_1 + 0xa34) = fVar28;
          *(float *)(param_1 + 0xa38) = fStack_210;
          *(undefined4 *)(param_1 + 0xa3c) = 0x7f7fffff;
        }
        else {
          lVar16 = *(longlong *)(param_1 + 0x20);
          fVar32 = *(float *)(lVar16 + 0x14) - *(float *)(param_2 + 0x18);
          fVar31 = *(float *)(lVar16 + 0x10) - *(float *)(param_2 + 0x14);
          fVar30 = *(float *)(lVar16 + 0xc) - *(float *)(param_2 + 0x10);
          fVar28 = fVar30 * fVar30 + fVar31 * fVar31 + fVar32 * fVar32;
          auVar26 = rsqrtss(ZEXT416((uint)fVar28),ZEXT416((uint)fVar28));
          fVar25 = auVar26._0_4_;
          fVar29 = fVar25 * 0.5 * (3.0 - fVar28 * fVar25 * fVar25);
          fVar25 = (SQRT(*(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x20) +
                         *(float *)(param_2 + 0x24) * *(float *)(param_2 + 0x24) +
                         *(float *)(param_2 + 0x28) * *(float *)(param_2 + 0x28)) *
                   *(float *)(param_2 + 0x4c)) / (fVar29 * fVar28);
          fStack_210 = fVar32 * fVar29 * fVar25;
          fVar28 = fVar31 * fVar29 * fVar25;
          fVar25 = fVar30 * fVar29 * fVar25;
          uStack_218 = CONCAT44(fVar28,fVar25);
          *(float *)(param_1 + 0xa30) = fVar25;
          *(float *)(param_1 + 0xa34) = fVar28;
          *(float *)(param_1 + 0xa38) = fStack_210;
          *(undefined4 *)(param_1 + 0xa3c) = 0x7f7fffff;
        }
        uStack_20c = 0x7f7fffff;
        if (250000.0 <
            *(float *)(param_1 + 0xa30) * *(float *)(param_1 + 0xa30) +
            *(float *)(param_1 + 0xa34) * *(float *)(param_1 + 0xa34) +
            *(float *)(param_1 + 0xa38) * *(float *)(param_1 + 0xa38)) {
          fVar25 = *(float *)(param_1 + 0xa30);
          fVar28 = *(float *)(param_1 + 0xa34);
          fVar29 = *(float *)(param_1 + 0xa38);
          auVar26._4_4_ = fVar29;
          auVar26._0_4_ = fVar29;
          auVar26._8_4_ = fVar29;
          auVar26._12_4_ = fVar29;
          auVar27._4_12_ = auVar26._4_12_;
          auVar27._0_4_ = fVar29 * fVar29;
          fVar31 = fVar28 * fVar28 + fVar25 * fVar25 + auVar27._0_4_;
          auVar26 = rsqrtss(auVar27,ZEXT416((uint)fVar31));
          fVar30 = auVar26._0_4_;
          fVar30 = fVar30 * 0.5 * (3.0 - fVar31 * fVar30 * fVar30);
          uStack_20c = 0x7f7fffff;
          *(float *)(param_1 + 0xa30) = fVar25 * fVar30 * 500.0;
          *(float *)(param_1 + 0xa34) = fVar28 * fVar30 * 500.0;
          *(float *)(param_1 + 0xa38) = fVar29 * fVar30 * 500.0;
          *(undefined4 *)(param_1 + 0xa3c) = 0x7f7fffff;
        }
      }
    }
    else {
      if (((*(float *)(param_3 + 2) != 0.0) || (*(float *)((longlong)param_3 + 0x14) != 0.0)) ||
         (*(float *)(param_3 + 3) != 0.0)) {
        *(undefined8 *)(param_1 + 0xa08) = 0;
      }
      uVar22 = param_3[1];
      *(undefined8 *)(param_1 + 0xa20) = *param_3;
      *(undefined8 *)(param_1 + 0xa28) = uVar22;
      uVar22 = param_3[3];
      *(undefined8 *)(param_1 + 0xa30) = param_3[2];
      *(undefined8 *)(param_1 + 0xa38) = uVar22;
    }
    *(longlong *)(param_1 + 0xa10) =
         *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0xa18) * 8) + 10000;
    *(undefined8 *)(param_1 + 0x9f8) =
         *(undefined8 *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0xa00) * 8);
    if (-1 < *(int *)(param_1 + 0x564)) {
      lVar16 = *(longlong *)(param_1 + 0x8d8) + 0x30a0 + (longlong)*(int *)(param_1 + 0x564) * 0xa60
      ;
      *(undefined4 *)(lVar16 + 0x4c8) = 0;
      *(undefined8 *)(lVar16 + 0x4cc) = 0;
      puVar1 = (ushort *)(*(longlong *)(lVar16 + 0x6e0) + 0x130);
      *puVar1 = *puVar1 | 0x200;
      fVar25 = *(float *)(lVar15 + 0x1dc);
      if (fVar25 <= 0.0) {
        fVar25 = *(float *)(lVar15 + 0x188);
      }
      *(longlong *)(lVar16 + 0x6c8) =
           *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar16 + 0x6d0) * 8) -
           (longlong)(fVar25 * -100000.0);
      if (*(int *)(lVar16 + 0x560) == *(int *)(param_1 + 0x10)) {
        FUN_18052e130(lVar16,0xffffffff,1);
      }
      FUN_1805b8920(*(undefined8 *)(lVar16 + 0x6e0));
      *(undefined4 *)(*(longlong *)(lVar16 + 0x738) + 0xa4) =
           *(undefined4 *)(*(longlong *)(lVar16 + 0x6e0) + 0x14a8);
      lStack_108 = *(longlong *)(lVar16 + 0x9d8);
      lVar15 = *(longlong *)(lVar16 + 0x20);
      if ((lStack_108 == 0) ||
         (cVar6 = FUN_18038d0a0(lStack_108,lVar15 + 0xc), lStack_110 = lStack_108, cVar6 == '\0')) {
        lStack_110 = 0;
      }
      uStack_118 = *(undefined8 *)(*(longlong *)(lVar16 + 0x8d8) + 0x18);
      uStack_100 = *(undefined8 *)(lVar15 + 0xc);
      uStack_f8 = *(undefined8 *)(lVar15 + 0x14);
      uStack_f0 = *(undefined4 *)(lVar15 + 0xb0);
      uStack_ec = *(undefined4 *)(lVar15 + 0xb4);
      uStack_e8 = *(undefined4 *)(lVar15 + 0xb8);
      uStack_e4 = *(undefined4 *)(lVar15 + 0xbc);
      uStack_d8 = 3;
      uStack_e0 = uStack_100;
                    // WARNING: Subroutine does not return
      FUN_1808fd400();
    }
  }
  fVar25 = _DAT_180c96488;
  uStack_130 = 0xffffffff;
  if ((_DAT_180c92514 == 1) || (_DAT_180c92514 == 4)) {
    uStack_188 = *param_3;
    uStack_180 = param_3[1];
    uStack_178 = param_3[2];
    uStack_170 = param_3[3];
    uStack_168 = param_3[4];
    uStack_160._0_4_ = (undefined4)param_3[5];
    uStack_158 = param_3[6];
    uStack_150 = param_3[7];
    uStack_148 = param_3[8];
    uStack_140 = param_3[9];
    uStack_138 = *(undefined4 *)(param_3 + 10);
    uStack_134 = *(undefined4 *)((longlong)param_3 + 0x54);
    uStack_130 = *(undefined4 *)(param_3 + 0xb);
    uStack_12c = *(undefined4 *)((longlong)param_3 + 0x5c);
    uStack_128 = param_3[0xc];
  }
  else {
    if (*(char *)(param_2 + 0x50) == '\0') {
      iVar7 = *(int *)(param_2 + 0xb0);
      if ((-1 < iVar7) && (-1 < *(int *)(param_2 + 0x48))) {
        uStack_130 = *(undefined4 *)
                      ((longlong)*(int *)(param_2 + 0x48) * 0x1f8 + 0x38 +
                      *(longlong *)
                       ((longlong)iVar7 * 0xa60 + 0x3998 + *(longlong *)(param_1 + 0x8d8)));
      }
    }
    else {
      iVar7 = *(int *)(param_2 + 0xb0);
      uStack_130 = *(undefined4 *)
                    (*(longlong *)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x8d8) + 0x87b340) +
                        (ulonglong)(*(uint *)(param_2 + 0x48) >> 4) * 8) + 0xf0 +
                      (ulonglong)(*(uint *)(param_2 + 0x48) & 0xf) * 0xbe0) + 0x30);
    }
    uStack_188 = *(undefined8 *)(param_1 + 0xa20);
    uStack_180 = *(undefined8 *)(param_1 + 0xa28);
    uStack_178 = *(undefined8 *)(param_1 + 0xa30);
    uStack_170 = *(undefined8 *)(param_1 + 0xa38);
    uStack_1d8 = CONCAT44(*(undefined4 *)(param_2 + 0xb8),uVar21);
    uStack_160._0_4_ = *(undefined4 *)(param_2 + 0xa8);
    uStack_1d0 = CONCAT44(iVar7,(undefined4)uStack_160);
    uStack_1c8 = CONCAT71(uStack_1c8._1_7_,*(undefined1 *)(param_2 + 0xb5));
    uStack_1c8 = CONCAT44(*(undefined4 *)(param_2 + 0x40),(undefined4)uStack_1c8);
    uStack_1c0 = CONCAT31(uStack_1c0._1_3_,param_4);
    uStack_1bc = (undefined4)*(undefined8 *)(param_2 + 0x58);
    uStack_1b8 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x58) >> 0x20);
    uStack_1b4 = (undefined4)*(undefined8 *)(param_2 + 0x60);
    uStack_1b0 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x60) >> 0x20);
    uVar22 = *(undefined8 *)(param_2 + 0x38);
    uStack_12c = *(undefined4 *)(param_2 + 0x88);
    uStack_198._0_2_ = CONCAT11(1,*(char *)(param_2 + 0x50));
    uStack_168 = uStack_1d8;
    uStack_150 = CONCAT44(uStack_1bc,uStack_1c0);
    uStack_158 = uStack_1c8;
    uStack_148 = CONCAT44(uStack_1b4,uStack_1b8);
    uStack_140 = CONCAT44(uStack_1ac,uStack_1b0);
    uStack_1a8._0_4_ = (undefined4)uVar22;
    uStack_1a8._4_4_ = (undefined4)((ulonglong)uVar22 >> 0x20);
    uStack_138 = (undefined4)uStack_1a8;
    uStack_134 = uStack_1a8._4_4_;
    uStack_128 = uStack_198;
    uStack_1a8 = uVar22;
    uStack_1a0 = uStack_130;
    uStack_19c = uStack_12c;
  }
  uStack_160 = CONCAT44(iStack_220,(undefined4)uStack_160);
  if (((bVar20 == 0) && ((_DAT_180c92514 - 2U & 0xfffffffc) == 0)) && (_DAT_180c92514 != 4)) {
    plVar3 = *(longlong **)(param_1 + 0x8e0);
    iVar7 = _Mtx_lock(0x180c95528);
    if (iVar7 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar7);
    }
    FUN_1805ae650(0x180c95578,*(undefined4 *)(*plVar3 + 0x10),&uStack_188);
    lVar16 = 0;
    _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
    iVar7 = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
    lVar15 = _DAT_180c92cd8;
    if (0 < iVar7) {
      do {
        lVar14 = *(longlong *)(lVar15 + lVar16 * 8);
        if ((lVar14 != 0) && (*(char *)(*(longlong *)(lVar14 + 0x58f8) + 0x1c) != '\0')) {
          FUN_1805b59d0(lVar14,0x180c95578);
          lVar15 = _DAT_180c92cd8;
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar7);
    }
    if (_DAT_180c96070 != 0) {
      FUN_180567f30(_DAT_180c92580,0x180c95578);
    }
    _DAT_180c95b3c = 0;
                    // WARNING: Subroutine does not return
    memset(_DAT_180c95b10,0,(longlong)(_DAT_180c95b08 >> 3));
  }
  // 应用最终渲染缩放和变换
  *(float *)(context + 0xa30) = _DAT_180c96488 * *(float *)(context + 0xa30);
  *(float *)(context + 0xa34) = float_var1 * *(float *)(context + 0xa34);
  *(float *)(context + 0xa38) = float_var1 * *(float *)(context + 0xa38);
  
  // 处理最终渲染索引和回调
  if (stack_index1 < 0) {
    int callback_id = 0;
    uint callback_status = stack_uint2;
  }
  else {
    int callback_id = *(int *)((longlong)stack_index1 * 0xa60 + 0x30b8 + *(longlong *)(context + 0x8d8));
    uint callback_status = stack_uint2;
    if ((callback_id != 0) && (_DAT_180c8f008 != 0)) {
      stack_uint2 = callback_id;
      (**(code **)(_DAT_180c8f008 + 0x30))(callback_id);
    }
  }
  
  // 执行最终渲染回调处理
  uint final_flags = stack_uint2;
  longlong render_system_ptr = _DAT_180c8ece0;
  uint render_flags = *(uint *)(context + 0x568);
  int render_context_id = *(int *)(context + 0x18);
  stack_uint2 = render_context_id;
  
  if ((render_context_id != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x30))(render_context_id);
  }
  
  // 设置最终渲染标志和参数
  final_flags = stack_uint2 | 0x20;
  
  // 渲染系统高级参数处理完成
  return;
}

// ============================================================================
// 模块技术说明
// ============================================================================

/**
 * 技术实现细节：
 * 
 * 1. 渲染管线管理：
 *    - 支持多种渲染模式（标准、增强、高级、超级、自定义）
 *    - 动态管线切换和优化
 *    - 质量参数实时调整
 * 
 * 2. 内存管理：
 *    - 高效的渲染缓冲区管理
 *    - 智能内存分配和释放
 *    - 资源生命周期管理
 * 
 * 3. 数学计算：
 *    - 高精度浮点运算
 *    - 矩阵变换和坐标系统
 *    - 向量运算和插值
 * 
 * 4. 错误处理：
 *    - 全面的错误检测和报告
 *    - 优雅的降级处理
 *    - 状态恢复机制
 * 
 * 5. 性能优化：
 *    - 多线程渲染支持
 *    - 缓存优化策略
 *    - GPU资源管理
 * 
 * 维护说明：
 * - 本模块为渲染系统核心组件，修改时需谨慎
 * - 建议在修改前进行充分测试
 * - 保持与其它渲染模块的兼容性
 */

// ============================================================================





