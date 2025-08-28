#include "TaleWorlds.Native.Split.h"

/**
 * 03_rendering_part072.c - 渲染系统高级变换和数据处理模块
 * 
 * 本模块包含7个核心函数，涵盖渲染对象高级变换、数据处理、
 * 内存管理、资源分配等高级渲染功能。
 * 
 * 主要功能：
 * - 渲染对象变换和插值处理
 * - 渲染数据批处理和状态管理
 * - 渲染资源分配和释放
 * - 渲染系统高级控制
 */

// 函数别名定义
#define rendering_system_process_transform_data FUN_180309bd0
#define rendering_system_advanced_transform_processor FUN_180309dae
#define rendering_system_interpolation_handler FUN_180309e9d
#define rendering_system_batch_processor FUN_18030a08b
#define rendering_system_data_transformer FUN_18030a0da
#define rendering_system_resource_allocator FUN_18030a110
#define rendering_system_memory_manager FUN_18030a2a0
#define rendering_system_data_handler FUN_18030a460
#define rendering_system_parameter_processor FUN_18030a6a0

// 常量定义
#define RENDERING_DISTANCE_THRESHOLD 50.0f
#define RENDERING_MAX_FLOAT_VALUE 0x7f7fffff
#define RENDERING_RESOURCE_HANDLE 0xfffffffffffffffe
#define RENDERING_MEMORY_FLAG_EXCLUSIVE 0xfffffffffffffffe
#define RENDERING_LOCK_OFFSET 0x2b8
#define RENDERING_RESOURCE_TABLE_OFFSET 0x180
#define RENDERING_ENTRY_SIZE 0x30
#define RENDERING_INIT_OFFSET 0xe0
#define RENDERING_CLEANUP_OFFSET 0x38
#define RENDERING_INVALID_HANDLE 0xffffffff
#define RENDERING_FLAG_FREE_MEMORY 1
#define RENDERING_RESOURCE_SIZE 0x188
#define RENDERING_BLOCK_SIZE 0x18
#define RENDERING_MAX_BLOCK_SIZE 0xffffffff
#define RENDERING_PARAM_SIZE 0x1c
#define RENDERING_STRING_BUFFER_SIZE 0x80

// 全局变量声明
extern uint64_t *rendering_resource_table;
extern longlong global_resource_manager;
extern uint64_t *rendering_null_pointer;
extern uint64_t *rendering_cleanup_sequence1;
extern uint64_t *rendering_cleanup_sequence2;
extern uint64_t *global_memory_allocator;
extern uint64_t *rendering_param_structure;
extern uint64_t *rendering_param_string;

// 辅助函数声明
void AcquireSRWLockExclusive(longlong lock_handle);
void ReleaseSRWLockExclusive(longlong lock_handle);
void FUN_1800571e0(longlong param1, int *param2, uint64_t param3, uint64_t param4, uint64_t param5, longlong param6, int param7);
void FUN_1800f89b0(void);
void FUN_18064e900(void *ptr);
void *FUN_18062b1e0(void *allocator, int size, int alignment, int flags, uint64_t memory_flags);
void free(void *ptr, int size);
void func_0x00018030a230(void);
void func_0x00018030a230(float *param1, float param2, float param3, float param4, float param5);
errno_t strcpy_s(char *dest, size_t dest_size, const char *src, ...);
int _Mtx_lock(void *mtx);
int _Mtx_unlock(void *mtx);
void __Throw_C_error_std__YAXH_Z(int error_code);
float SQRT(float value);

/**
 * 渲染系统变换数据处理函数
 * 
 * 处理渲染对象的变换数据，包括位置插值、距离计算和状态更新。
 * 
 * @param render_context 渲染上下文指针
 * @param transform_factor 变换因子
 * @param render_flags 渲染标志
 * @param process_mode 处理模式
 * @param transform_data 变换数据数组
 * @param position_data 位置数据
 * @param update_flag 更新标志
 */
void rendering_system_process_transform_data(
    longlong render_context, 
    float transform_factor, 
    uint32_t render_flags, 
    char process_mode,
    uint64_t *transform_data, 
    uint64_t position_data, 
    char update_flag
) {
    uint64_t temp_data;
    int intensity_value;
    float scale_factor;
    float distance_x, distance_y, distance_z;
    float total_distance;
    float interpolated_value;
    float blend_factor;
    float current_x, current_y, current_z;
    float target_x, target_y, target_z;
    
    if (update_flag == '\0') {
        transform_factor = transform_factor + *(float *)(render_context + 0x114);
        *(float *)(render_context + 0x114) = transform_factor;
        scale_factor = 1.0f / (float)*(int *)(render_context + 0x11c);
        
        if (process_mode == '\0') {
            if (transform_factor <= scale_factor) {
                *(uint32_t *)(render_context + 0x118) = 0;
            }
            else {
                distance_x = *(float *)(render_context + 0x60) - *(float *)(transform_data + 7);
                distance_y = *(float *)(render_context + 0x5c) - *(float *)((longlong)transform_data + 0x34);
                distance_z = *(float *)(render_context + 0x58) - *(float *)(transform_data + 6);
                
                if (RENDERING_DISTANCE_THRESHOLD < 
                    SQRT(distance_y * distance_y + distance_z * distance_z + distance_x * distance_x) * 
                    (1.0f / transform_factor)) {
                    
                    temp_data = transform_data[1];
                    *(uint64_t *)(render_context + 0xd0) = *transform_data;
                    *(uint64_t *)(render_context + 0xd8) = temp_data;
                    temp_data = transform_data[3];
                    *(uint64_t *)(render_context + 0xe0) = transform_data[2];
                    *(uint64_t *)(render_context + 0xe8) = temp_data;
                    temp_data = transform_data[5];
                    *(uint64_t *)(render_context + 0xf0) = transform_data[4];
                    *(uint64_t *)(render_context + 0xf8) = temp_data;
                    temp_data = transform_data[7];
                    *(uint64_t *)(render_context + 0x100) = transform_data[6];
                    *(uint64_t *)(render_context + 0x108) = temp_data;
                    
                    temp_data = transform_data[1];
                    *(uint64_t *)(render_context + 0x90) = *transform_data;
                    *(uint64_t *)(render_context + 0x98) = temp_data;
                    temp_data = transform_data[3];
                    *(uint64_t *)(render_context + 0xa0) = transform_data[2];
                    *(uint64_t *)(render_context + 0xa8) = temp_data;
                    temp_data = transform_data[5];
                    *(uint64_t *)(render_context + 0xb0) = transform_data[4];
                    *(uint64_t *)(render_context + 0xb8) = temp_data;
                    temp_data = transform_data[7];
                    *(uint64_t *)(render_context + 0xc0) = transform_data[6];
                    *(uint64_t *)(render_context + 200) = temp_data;
                }
                
                intensity_value = (int)(transform_factor * (float)*(int *)(render_context + 0x11c));
                *(int *)(render_context + 0x118) = intensity_value;
                interpolated_value = (float)intensity_value * scale_factor;
                blend_factor = interpolated_value / transform_factor;
                *(float *)(render_context + 0x114) = transform_factor - interpolated_value;
                
                temp_data = transform_data[1];
                *(uint64_t *)(render_context + 0xd0) = *transform_data;
                *(uint64_t *)(render_context + 0xd8) = temp_data;
                temp_data = transform_data[3];
                *(uint64_t *)(render_context + 0xe0) = transform_data[2];
                *(uint64_t *)(render_context + 0xe8) = temp_data;
                temp_data = transform_data[5];
                *(uint64_t *)(render_context + 0xf0) = transform_data[4];
                *(uint64_t *)(render_context + 0xf8) = temp_data;
                
                current_x = *(float *)(transform_data + 7);
                current_y = *(float *)((longlong)transform_data + 0x34);
                current_z = *(float *)(transform_data + 6);
                
                *(float *)(render_context + 0x124) = scale_factor;
                *(float *)(render_context + 0x128) = scale_factor;
                
                target_x = (current_z - *(float *)(render_context + 0xc0)) * blend_factor + *(float *)(render_context + 0xc0);
                target_y = *(float *)(render_context + 0x8c) / interpolated_value;
                
                *(uint64_t *)(render_context + 0x68) = *(uint64_t *)(render_context + 0x78);
                *(uint64_t *)(render_context + 0x70) = *(uint64_t *)(render_context + 0x80);
                *(float *)(render_context + 0x100) = target_x;
                *(float *)(render_context + 0x104) = 
                    (current_y - *(float *)(render_context + 0xc4)) * blend_factor + *(float *)(render_context + 0xc4);
                *(float *)(render_context + 0x108) = 
                    (current_x - *(float *)(render_context + 200)) * blend_factor + *(float *)(render_context + 200);
                *(uint32_t *)(render_context + 0x10c) = RENDERING_MAX_FLOAT_VALUE;
                
                *(float *)(render_context + 0x78) = (target_x - *(float *)(render_context + 0xc0)) * target_y;
                *(float *)(render_context + 0x7c) = 
                    (*(float *)(render_context + 0x104) - *(float *)(render_context + 0xc4)) * target_y;
                *(float *)(render_context + 0x80) = 
                    (*(float *)(render_context + 0x108) - *(float *)(render_context + 200)) * target_y;
                *(uint32_t *)(render_context + 0x84) = RENDERING_MAX_FLOAT_VALUE;
                
                if (0.0f < *(float *)(render_context + 0x88)) {
                    func_0x00018030a230();
                }
                
                *(uint64_t *)(render_context + 0x90) = *(uint64_t *)(render_context + 0xd0);
                *(uint64_t *)(render_context + 0x98) = *(uint64_t *)(render_context + 0xd8);
                *(uint64_t *)(render_context + 0xa0) = *(uint64_t *)(render_context + 0xe0);
                *(uint64_t *)(render_context + 0xa8) = *(uint64_t *)(render_context + 0xe8);
                *(uint64_t *)(render_context + 0xb0) = *(uint64_t *)(render_context + 0xf0);
                *(uint64_t *)(render_context + 0xb8) = *(uint64_t *)(render_context + 0xf8);
                *(uint64_t *)(render_context + 0xc0) = *(uint64_t *)(render_context + 0x100);
                *(uint64_t *)(render_context + 200) = *(uint64_t *)(render_context + 0x108);
            }
        }
        else {
            temp_data = transform_data[1];
            *(uint64_t *)(render_context + 0x90) = *transform_data;
            *(uint64_t *)(render_context + 0x98) = temp_data;
            temp_data = transform_data[3];
            *(uint64_t *)(render_context + 0xa0) = transform_data[2];
            *(uint64_t *)(render_context + 0xa8) = temp_data;
            temp_data = transform_data[5];
            *(uint64_t *)(render_context + 0xb0) = transform_data[4];
            *(uint64_t *)(render_context + 0xb8) = temp_data;
            temp_data = transform_data[7];
            *(uint64_t *)(render_context + 0xc0) = transform_data[6];
            *(uint64_t *)(render_context + 200) = temp_data;
            
            temp_data = transform_data[1];
            *(uint64_t *)(render_context + 0xd0) = *transform_data;
            *(uint64_t *)(render_context + 0xd8) = temp_data;
            temp_data = transform_data[3];
            *(uint64_t *)(render_context + 0xe0) = transform_data[2];
            *(uint64_t *)(render_context + 0xe8) = temp_data;
            temp_data = transform_data[5];
            *(uint64_t *)(render_context + 0xf0) = transform_data[4];
            *(uint64_t *)(render_context + 0xf8) = temp_data;
            temp_data = transform_data[7];
            *(uint64_t *)(render_context + 0x100) = transform_data[6];
            *(uint64_t *)(render_context + 0x108) = temp_data;
            
            *(uint32_t *)(render_context + 0x114) = 0;
            *(float *)(render_context + 0x124) = scale_factor;
            *(float *)(render_context + 0x128) = scale_factor;
            *(uint32_t *)(render_context + 0x118) = 1;
        }
    }
    else {
        distance_x = *(float *)(render_context + 0x60) - *(float *)(transform_data + 7);
        distance_y = *(float *)(render_context + 0x5c) - *(float *)((longlong)transform_data + 0x34);
        distance_z = *(float *)(render_context + 0x58) - *(float *)(transform_data + 6);
        scale_factor = 1.0f / transform_factor;
        
        if (RENDERING_DISTANCE_THRESHOLD < 
            SQRT(distance_y * distance_y + distance_z * distance_z + distance_x * distance_x) * scale_factor) {
            
            temp_data = transform_data[1];
            *(uint64_t *)(render_context + 0xd0) = *transform_data;
            *(uint64_t *)(render_context + 0xd8) = temp_data;
            temp_data = transform_data[3];
            *(uint64_t *)(render_context + 0xe0) = transform_data[2];
            *(uint64_t *)(render_context + 0xe8) = temp_data;
            temp_data = transform_data[5];
            *(uint64_t *)(render_context + 0xf0) = transform_data[4];
            *(uint64_t *)(render_context + 0xf8) = temp_data;
            temp_data = transform_data[7];
            *(uint64_t *)(render_context + 0x100) = transform_data[6];
            *(uint64_t *)(render_context + 0x108) = temp_data;
        }
        
        *(uint32_t *)(render_context + 0x118) = 1;
        *(float *)(render_context + 0x124) = transform_factor;
        *(uint64_t *)(render_context + 0x68) = *(uint64_t *)(render_context + 0x78);
        *(uint64_t *)(render_context + 0x70) = *(uint64_t *)(render_context + 0x80);
        *(uint32_t *)(render_context + 0x114) = 0;
        
        scale_factor = *(float *)(render_context + 0x8c);
        current_x = *(float *)(transform_data + 7);
        current_y = *(float *)((longlong)transform_data + 0x34);
        
        *(float *)(render_context + 0x78) = 
            (*(float *)(transform_data + 6) - *(float *)(render_context + 0x100)) * scale_factor * scale_factor;
        *(float *)(render_context + 0x7c) = 
            (current_y - *(float *)(render_context + 0x104)) * scale_factor * scale_factor;
        *(float *)(render_context + 0x80) = 
            (current_x - *(float *)(render_context + 0x108)) * scale_factor * scale_factor;
        *(uint32_t *)(render_context + 0x84) = RENDERING_MAX_FLOAT_VALUE;
        
        if (0.0f < *(float *)(render_context + 0x88)) {
            func_0x00018030a230();
        }
        
        *(uint64_t *)(render_context + 0x90) = *(uint64_t *)(render_context + 0xd0);
        *(uint64_t *)(render_context + 0x98) = *(uint64_t *)(render_context + 0xd8);
        *(uint64_t *)(render_context + 0xa0) = *(uint64_t *)(render_context + 0xe0);
        *(uint64_t *)(render_context + 0xa8) = *(uint64_t *)(render_context + 0xe8);
        *(uint64_t *)(render_context + 0xb0) = *(uint64_t *)(render_context + 0xf0);
        *(uint64_t *)(render_context + 0xb8) = *(uint64_t *)(render_context + 0xf8);
        *(uint64_t *)(render_context + 0xc0) = *(uint64_t *)(render_context + 0x100);
        *(uint64_t *)(render_context + 200) = *(uint64_t *)(render_context + 0x108);
        
        temp_data = transform_data[1];
        *(uint64_t *)(render_context + 0xd0) = *transform_data;
        *(uint64_t *)(render_context + 0xd8) = temp_data;
        temp_data = transform_data[3];
        *(uint64_t *)(render_context + 0xe0) = transform_data[2];
        *(uint64_t *)(render_context + 0xe8) = temp_data;
        temp_data = transform_data[5];
        *(uint64_t *)(render_context + 0xf0) = transform_data[4];
        *(uint64_t *)(render_context + 0xf8) = temp_data;
        temp_data = transform_data[7];
        *(uint64_t *)(render_context + 0x100) = transform_data[6];
        *(uint64_t *)(render_context + 0x108) = temp_data;
        
        *(uint32_t *)(render_context + 0x128) = render_flags;
    }
    
    temp_data = transform_data[1];
    *(uint64_t *)(render_context + 0x28) = *transform_data;
    *(uint64_t *)(render_context + 0x30) = temp_data;
    temp_data = transform_data[3];
    *(uint64_t *)(render_context + 0x38) = transform_data[2];
    *(uint64_t *)(render_context + 0x40) = temp_data;
    temp_data = transform_data[5];
    *(uint64_t *)(render_context + 0x48) = transform_data[4];
    *(uint64_t *)(render_context + 0x50) = temp_data;
    temp_data = transform_data[7];
    *(uint64_t *)(render_context + 0x58) = transform_data[6];
    *(uint64_t *)(render_context + 0x60) = temp_data;
}
/**
 * 渲染系统高级变换处理器
 * 
 * 处理复杂的渲染变换操作，包括双上下文处理和高级插值计算。
 * 
 * @param primary_context 主要渲染上下文
 * @param secondary_context 次要渲染上下文
 * @param transform_data 变换数据数组
 * @param process_flag 处理标志
 */
void rendering_system_advanced_transform_processor(
    longlong primary_context, 
    longlong secondary_context, 
    uint64_t *transform_data, 
    char process_flag
) {
    uint64_t temp_data;
    int intensity_value;
    float *position_ptr;
    float distance_x, distance_y, distance_z;
    float accumulated_distance;
    float interpolated_value;
    float blend_factor;
    float scale_value;
    float intensity_factor;
    float target_distance;
    float stack_distance;
    uint32_t stack_flag;
    
    accumulated_distance = intensity_factor + *(float *)(primary_context + 0x114);
    *(float *)(primary_context + 0x114) = accumulated_distance;
    scale_value = intensity_factor / (float)intensity_value;
    
    if (process_flag == '\0') {
        if (accumulated_distance <= scale_value) {
            *(uint32_t *)(primary_context + 0x118) = 0;
        }
        else {
            distance_x = *(float *)(primary_context + 0x60) - *(float *)(transform_data + 7);
            distance_y = *(float *)(primary_context + 0x5c) - *(float *)((longlong)transform_data + 0x34);
            distance_z = *(float *)(primary_context + 0x58) - *(float *)(transform_data + 6);
            
            if (RENDERING_DISTANCE_THRESHOLD < 
                SQRT(distance_y * distance_y + distance_z * distance_z + distance_x * distance_x) * 
                (intensity_factor / accumulated_distance)) {
                
                temp_data = transform_data[1];
                *(uint64_t *)(primary_context + 0xd0) = *transform_data;
                *(uint64_t *)(primary_context + 0xd8) = temp_data;
                temp_data = transform_data[3];
                *(uint64_t *)(primary_context + 0xe0) = transform_data[2];
                *(uint64_t *)(primary_context + 0xe8) = temp_data;
                temp_data = transform_data[5];
                *(uint64_t *)(primary_context + 0xf0) = transform_data[4];
                *(uint64_t *)(primary_context + 0xf8) = temp_data;
                temp_data = transform_data[7];
                *(uint64_t *)(primary_context + 0x100) = transform_data[6];
                *(uint64_t *)(primary_context + 0x108) = temp_data;
                
                temp_data = transform_data[1];
                *(uint64_t *)(primary_context + 0x90) = *transform_data;
                *(uint64_t *)(primary_context + 0x98) = temp_data;
                temp_data = transform_data[3];
                *(uint64_t *)(primary_context + 0xa0) = transform_data[2];
                *(uint64_t *)(primary_context + 0xa8) = temp_data;
                temp_data = transform_data[5];
                *(uint64_t *)(primary_context + 0xb0) = transform_data[4];
                *(uint64_t *)(primary_context + 0xb8) = temp_data;
                temp_data = transform_data[7];
                *(uint64_t *)(primary_context + 0xc0) = transform_data[6];
                *(uint64_t *)(primary_context + 200) = temp_data;
            }
            
            intensity_value = (int)(accumulated_distance * (float)intensity_value);
            *(int *)(primary_context + 0x118) = intensity_value;
            interpolated_value = (float)intensity_value * scale_value;
            blend_factor = interpolated_value / accumulated_distance;
            *(float *)(primary_context + 0x114) = accumulated_distance - interpolated_value;
            
            temp_data = transform_data[1];
            *(uint64_t *)(primary_context + 0xd0) = *transform_data;
            *(uint64_t *)(primary_context + 0xd8) = temp_data;
            temp_data = transform_data[3];
            *(uint64_t *)(primary_context + 0xe0) = transform_data[2];
            *(uint64_t *)(primary_context + 0xe8) = temp_data;
            temp_data = transform_data[5];
            *(uint64_t *)(primary_context + 0xf0) = transform_data[4];
            *(uint64_t *)(primary_context + 0xf8) = temp_data;
            
            accumulated_distance = *(float *)(primary_context + 0xc4);
            distance_x = *(float *)(transform_data + 7);
            distance_y = *(float *)((longlong)transform_data + 0x34);
            distance_z = *(float *)(transform_data + 6);
            
            *(float *)(primary_context + 0x124) = scale_value;
            *(float *)(primary_context + 0x128) = scale_value;
            
            position_ptr = (float *)(primary_context + 0x78);
            stack_distance = 
                (distance_x - *(float *)(primary_context + 200)) * blend_factor + *(float *)(primary_context + 200);
            distance_z = (distance_z - *(float *)(primary_context + 0xc0)) * blend_factor + *(float *)(primary_context + 0xc0);
            
            temp_data = *(uint64_t *)(primary_context + 0x80);
            interpolated_value = *(float *)(secondary_context + 0x8c) / interpolated_value;
            
            *(uint64_t *)(secondary_context + 0x68) = *(uint64_t *)position_ptr;
            *(uint64_t *)(secondary_context + 0x70) = temp_data;
            *(float *)(secondary_context + 0x100) = distance_z;
            *(float *)(secondary_context + 0x104) = (distance_y - accumulated_distance) * blend_factor + accumulated_distance;
            *(float *)(secondary_context + 0x108) = stack_distance;
            *(uint32_t *)(secondary_context + 0x10c) = RENDERING_MAX_FLOAT_VALUE;
            
            stack_flag = RENDERING_MAX_FLOAT_VALUE;
            scale_value = (*(float *)(secondary_context + 0x104) - *(float *)(secondary_context + 0xc4)) * interpolated_value;
            distance_x = (*(float *)(secondary_context + 0x108) - *(float *)(secondary_context + 200)) * interpolated_value;
            accumulated_distance = *(float *)(secondary_context + 0x88);
            
            *position_ptr = (distance_z - *(float *)(secondary_context + 0xc0)) * interpolated_value;
            *(float *)(primary_context + 0x7c) = scale_value;
            *(float *)(primary_context + 0x80) = distance_x;
            *(uint32_t *)(primary_context + 0x84) = RENDERING_MAX_FLOAT_VALUE;
            
            if (0.0f < accumulated_distance) {
                func_0x00018030a230(position_ptr, accumulated_distance, scale_value, distance_x, distance_z);
            }
            
            *(uint64_t *)(secondary_context + 0x90) = *(uint64_t *)(secondary_context + 0xd0);
            *(uint64_t *)(secondary_context + 0x98) = *(uint64_t *)(secondary_context + 0xd8);
            *(uint64_t *)(secondary_context + 0xa0) = *(uint64_t *)(secondary_context + 0xe0);
            *(uint64_t *)(secondary_context + 0xa8) = *(uint64_t *)(secondary_context + 0xe8);
            *(uint64_t *)(secondary_context + 0xb0) = *(uint64_t *)(secondary_context + 0xf0);
            *(uint64_t *)(secondary_context + 0xb8) = *(uint64_t *)(secondary_context + 0xf8);
            *(uint64_t *)(secondary_context + 0xc0) = *(uint64_t *)(secondary_context + 0x100);
            *(uint64_t *)(secondary_context + 200) = *(uint64_t *)(secondary_context + 0x108);
        }
    }
    else {
        temp_data = transform_data[1];
        *(uint64_t *)(primary_context + 0x90) = *transform_data;
        *(uint64_t *)(primary_context + 0x98) = temp_data;
        temp_data = transform_data[3];
        *(uint64_t *)(primary_context + 0xa0) = transform_data[2];
        *(uint64_t *)(primary_context + 0xa8) = temp_data;
        temp_data = transform_data[5];
        *(uint64_t *)(primary_context + 0xb0) = transform_data[4];
        *(uint64_t *)(primary_context + 0xb8) = temp_data;
        temp_data = transform_data[7];
        *(uint64_t *)(primary_context + 0xc0) = transform_data[6];
        *(uint64_t *)(primary_context + 200) = temp_data;
        
        temp_data = transform_data[1];
        *(uint64_t *)(primary_context + 0xd0) = *transform_data;
        *(uint64_t *)(primary_context + 0xd8) = temp_data;
        temp_data = transform_data[3];
        *(uint64_t *)(primary_context + 0xe0) = transform_data[2];
        *(uint64_t *)(primary_context + 0xe8) = temp_data;
        temp_data = transform_data[5];
        *(uint64_t *)(primary_context + 0xf0) = transform_data[4];
        *(uint64_t *)(primary_context + 0xf8) = temp_data;
        temp_data = transform_data[7];
        *(uint64_t *)(primary_context + 0x100) = transform_data[6];
        *(uint64_t *)(primary_context + 0x108) = temp_data;
        
        *(uint32_t *)(primary_context + 0x114) = 0;
        *(float *)(primary_context + 0x124) = scale_value;
        *(float *)(primary_context + 0x128) = scale_value;
        *(uint32_t *)(primary_context + 0x118) = 1;
    }
    
    temp_data = transform_data[1];
    *(uint64_t *)(secondary_context + 0x28) = *transform_data;
    *(uint64_t *)(secondary_context + 0x30) = temp_data;
    temp_data = transform_data[3];
    *(uint64_t *)(secondary_context + 0x38) = transform_data[2];
    *(uint64_t *)(secondary_context + 0x40) = temp_data;
    temp_data = transform_data[5];
    *(uint64_t *)(secondary_context + 0x48) = transform_data[4];
    *(uint64_t *)(secondary_context + 0x50) = temp_data;
    temp_data = transform_data[7];
    *(uint64_t *)(secondary_context + 0x58) = transform_data[6];
    *(uint64_t *)(secondary_context + 0x60) = temp_data;
}
/**
 * 渲染系统插值处理器
 * 
 * 执行高级插值计算，处理渲染对象的平滑过渡和动画效果。
 * 
 * @param render_context 渲染上下文指针
 * @param interpolation_factor 插值因子
 * @param transform_data 变换数据数组
 * @param distance_scale 距离缩放因子
 */
void rendering_system_interpolation_handler(
    longlong render_context, 
    float interpolation_factor, 
    uint64_t *transform_data, 
    float distance_scale
) {
    float current_x, current_y, current_z;
    float target_x, target_y, target_z;
    float distance_sum;
    float interpolated_value;
    float blend_factor;
    float scale_factor;
    float intensity_value;
    float distance_factor;
    float stack_distance;
    uint32_t stack_flag;
    longlong secondary_context;
    
    if (RENDERING_DISTANCE_THRESHOLD < 
        SQRT(distance_factor + interpolation_factor + intensity_value) * distance_scale) {
        
        uint64_t temp_data = transform_data[1];
        *(uint64_t *)(render_context + 0xd0) = *transform_data;
        *(uint64_t *)(render_context + 0xd8) = temp_data;
        temp_data = transform_data[3];
        *(uint64_t *)(render_context + 0xe0) = transform_data[2];
        *(uint64_t *)(render_context + 0xe8) = temp_data;
        temp_data = transform_data[5];
        *(uint64_t *)(render_context + 0xf0) = transform_data[4];
        *(uint64_t *)(render_context + 0xf8) = temp_data;
        temp_data = transform_data[7];
        *(uint64_t *)(render_context + 0x100) = transform_data[6];
        *(uint64_t *)(render_context + 0x108) = temp_data;
        
        temp_data = transform_data[1];
        *(uint64_t *)(render_context + 0x90) = *transform_data;
        *(uint64_t *)(render_context + 0x98) = temp_data;
        temp_data = transform_data[3];
        *(uint64_t *)(render_context + 0xa0) = transform_data[2];
        *(uint64_t *)(render_context + 0xa8) = temp_data;
        temp_data = transform_data[5];
        *(uint64_t *)(render_context + 0xb0) = transform_data[4];
        *(uint64_t *)(render_context + 0xb8) = temp_data;
        temp_data = transform_data[7];
        *(uint64_t *)(render_context + 0xc0) = transform_data[6];
        *(uint64_t *)(render_context + 200) = temp_data;
    }
    
    *(int *)(render_context + 0x118) = (int)(intensity_value * distance_factor);
    interpolated_value = (float)(int)(intensity_value * distance_factor) * scale_factor;
    blend_factor = interpolated_value / intensity_value;
    *(float *)(render_context + 0x114) = intensity_value - interpolated_value;
    
    uint64_t temp_data = transform_data[1];
    *(uint64_t *)(render_context + 0xd0) = *transform_data;
    *(uint64_t *)(render_context + 0xd8) = temp_data;
    temp_data = transform_data[3];
    *(uint64_t *)(render_context + 0xe0) = transform_data[2];
    *(uint64_t *)(render_context + 0xe8) = temp_data;
    temp_data = transform_data[5];
    *(uint64_t *)(render_context + 0xf0) = transform_data[4];
    *(uint64_t *)(render_context + 0xf8) = temp_data;
    
    current_x = *(float *)(render_context + 0xc4);
    current_y = *(float *)(transform_data + 7);
    current_z = *(float *)((longlong)transform_data + 0x34);
    target_x = *(float *)(transform_data + 6);
    
    *(float *)(render_context + 0x124) = scale_factor;
    *(float *)(render_context + 0x128) = scale_factor;
    
    stack_distance = (current_y - *(float *)(render_context + 200)) * blend_factor + *(float *)(render_context + 200);
    target_y = (target_x - *(float *)(render_context + 0xc0)) * blend_factor + *(float *)(render_context + 0xc0);
    
    temp_data = *(uint64_t *)(render_context + 0x80);
    interpolated_value = *(float *)(secondary_context + 0x8c) / interpolated_value;
    
    *(uint64_t *)(secondary_context + 0x68) = *(uint64_t *)(render_context + 0x78);
    *(uint64_t *)(secondary_context + 0x70) = temp_data;
    *(float *)(secondary_context + 0x100) = target_y;
    *(float *)(secondary_context + 0x104) = (current_z - current_x) * blend_factor + current_x;
    *(float *)(secondary_context + 0x108) = stack_distance;
    *(uint32_t *)(secondary_context + 0x10c) = RENDERING_MAX_FLOAT_VALUE;
    
    current_x = *(float *)(secondary_context + 0x104);
    current_y = *(float *)(secondary_context + 0xc4);
    current_z = *(float *)(secondary_context + 0x108);
    target_x = *(float *)(secondary_context + 200);
    
    stack_flag = RENDERING_MAX_FLOAT_VALUE;
    blend_factor = *(float *)(secondary_context + 0x88);
    
    *(float *)(render_context + 0x78) = (target_y - *(float *)(secondary_context + 0xc0)) * interpolated_value;
    *(float *)(render_context + 0x7c) = (current_x - current_y) * interpolated_value;
    *(float *)(render_context + 0x80) = (current_z - target_x) * interpolated_value;
    *(uint32_t *)(render_context + 0x84) = RENDERING_MAX_FLOAT_VALUE;
    
    if (0.0f < blend_factor) {
        func_0x00018030a230();
    }
    
    *(uint64_t *)(secondary_context + 0x90) = *(uint64_t *)(secondary_context + 0xd0);
    *(uint64_t *)(secondary_context + 0x98) = *(uint64_t *)(secondary_context + 0xd8);
    *(uint64_t *)(secondary_context + 0xa0) = *(uint64_t *)(secondary_context + 0xe0);
    *(uint64_t *)(secondary_context + 0xa8) = *(uint64_t *)(secondary_context + 0xe8);
    *(uint64_t *)(secondary_context + 0xb0) = *(uint64_t *)(secondary_context + 0xf0);
    *(uint64_t *)(secondary_context + 0xb8) = *(uint64_t *)(secondary_context + 0xf8);
    *(uint64_t *)(secondary_context + 0xc0) = *(uint64_t *)(secondary_context + 0x100);
    *(uint64_t *)(secondary_context + 200) = *(uint64_t *)(secondary_context + 0x108);
    
    temp_data = transform_data[1];
    *(uint64_t *)(secondary_context + 0x28) = *transform_data;
    *(uint64_t *)(secondary_context + 0x30) = temp_data;
    temp_data = transform_data[3];
    *(uint64_t *)(secondary_context + 0x38) = transform_data[2];
    *(uint64_t *)(secondary_context + 0x40) = temp_data;
    temp_data = transform_data[5];
    *(uint64_t *)(secondary_context + 0x48) = transform_data[4];
    *(uint64_t *)(secondary_context + 0x50) = temp_data;
    temp_data = transform_data[7];
    *(uint64_t *)(secondary_context + 0x58) = transform_data[6];
    *(uint64_t *)(secondary_context + 0x60) = temp_data;
}
/**
 * 渲染系统批处理器
 * 
 * 执行渲染批处理操作，同步渲染状态和数据。
 * 
 * @param unused_param 未使用参数
 * @param render_context 渲染上下文指针
 * @param transform_data 变换数据数组
 */
void rendering_system_batch_processor(
    uint64_t unused_param, 
    longlong render_context, 
    uint64_t *transform_data
) {
    uint64_t temp_data;
    
    func_0x00018030a230();
    
    // 同步渲染状态数据
    *(uint64_t *)(render_context + 0x90) = *(uint64_t *)(render_context + 0xd0);
    *(uint64_t *)(render_context + 0x98) = *(uint64_t *)(render_context + 0xd8);
    *(uint64_t *)(render_context + 0xa0) = *(uint64_t *)(render_context + 0xe0);
    *(uint64_t *)(render_context + 0xa8) = *(uint64_t *)(render_context + 0xe8);
    *(uint64_t *)(render_context + 0xb0) = *(uint64_t *)(render_context + 0xf0);
    *(uint64_t *)(render_context + 0xb8) = *(uint64_t *)(render_context + 0xf8);
    *(uint64_t *)(render_context + 0xc0) = *(uint64_t *)(render_context + 0x100);
    *(uint64_t *)(render_context + 200) = *(uint64_t *)(render_context + 0x108);
    
    // 应用变换数据
    temp_data = transform_data[1];
    *(uint64_t *)(render_context + 0x28) = *transform_data;
    *(uint64_t *)(render_context + 0x30) = temp_data;
    temp_data = transform_data[3];
    *(uint64_t *)(render_context + 0x38) = transform_data[2];
    *(uint64_t *)(render_context + 0x40) = temp_data;
    temp_data = transform_data[5];
    *(uint64_t *)(render_context + 0x48) = transform_data[4];
    *(uint64_t *)(render_context + 0x50) = temp_data;
    temp_data = transform_data[7];
    *(uint64_t *)(render_context + 0x58) = transform_data[6];
    *(uint64_t *)(render_context + 0x60) = temp_data;
}
/**
 * 渲染系统数据变换器
 * 
 * 执行渲染数据的变换操作，更新变换矩阵和位置数据。
 * 
 * @param unused_param 未使用参数
 * @param render_context 渲染上下文指针
 * @param transform_data 变换数据数组
 */
void rendering_system_data_transformer(
    uint64_t unused_param, 
    longlong render_context, 
    uint64_t *transform_data
) {
    uint64_t temp_data;
    
    // 应用变换数据到渲染上下文
    temp_data = transform_data[1];
    *(uint64_t *)(render_context + 0x28) = *transform_data;
    *(uint64_t *)(render_context + 0x30) = temp_data;
    temp_data = transform_data[3];
    *(uint64_t *)(render_context + 0x38) = transform_data[2];
    *(uint64_t *)(render_context + 0x40) = temp_data;
    temp_data = transform_data[5];
    *(uint64_t *)(render_context + 0x48) = transform_data[4];
    *(uint64_t *)(render_context + 0x50) = temp_data;
    temp_data = transform_data[7];
    *(uint64_t *)(render_context + 0x58) = transform_data[6];
    *(uint64_t *)(render_context + 0x60) = temp_data;
}



/**
 * 渲染系统资源分配器
 * 
 * 分配和管理渲染系统资源，包括内存分配、锁管理和资源清理。
 * 
 * @param resource_handle 资源句柄指针
 * @param allocation_flags 分配标志
 * @param resource_param1 资源参数1
 * @param resource_param2 资源参数2
 * @return 分配的资源句柄
 */
uint64_t *rendering_system_resource_allocator(
    uint64_t *resource_handle, 
    uint64_t allocation_flags, 
    uint64_t resource_param1, 
    uint64_t resource_param2
) {
    longlong lock_context;
    longlong resource_manager;
    longlong lock_handle;
    int allocation_params[2];
    uint64_t *temp_ptr;
    uint64_t memory_flags;
    longlong cleanup_context;
    
    memory_flags = RENDERING_MEMORY_FLAG_EXCLUSIVE;
    *resource_handle = &rendering_resource_table;
    resource_manager = global_resource_manager;
    allocation_params[0] = *(int *)(resource_handle + 2);
    lock_handle = (longlong)allocation_params[0];
    lock_context = global_resource_manager + RENDERING_LOCK_OFFSET;
    cleanup_context = lock_context;
    
    // 获取独占锁
    AcquireSRWLockExclusive(lock_context);
    *(uint8_t *)(resource_manager + 1) = 1;
    *(uint8_t *)(*(longlong *)(resource_manager + RENDERING_RESOURCE_TABLE_OFFSET) + lock_handle * RENDERING_ENTRY_SIZE) = 0;
    
    // 初始化资源
    FUN_1800571e0(
        resource_manager + RENDERING_INIT_OFFSET, 
        allocation_params, 
        resource_param1, 
        resource_param2, 
        memory_flags, 
        cleanup_context, 
        1
    );
    
    *(uint32_t *)(resource_handle + 2) = RENDERING_INVALID_HANDLE;
    ReleaseSRWLockExclusive(lock_context);
    
    // 清理资源
    if ((longlong *)resource_handle[0x30] != (longlong *)0x0) {
        (**(code **)(*(longlong *)resource_handle[0x30] + RENDERING_CLEANUP_OFFSET))();
    }
    
    // 重置资源句柄
    resource_handle[0x1c] = &rendering_null_pointer;
    resource_handle[7] = &rendering_null_pointer;
    temp_ptr = resource_handle + 3;
    FUN_1800f89b0();
    *resource_handle = &rendering_cleanup_sequence1;
    *resource_handle = &rendering_cleanup_sequence2;
    
    // 根据标志决定是否释放内存
    if ((allocation_flags & RENDERING_FLAG_FREE_MEMORY) != 0) {
        free(resource_handle, RENDERING_RESOURCE_SIZE);
    }
    
    return resource_handle;
}



/**
 * 渲染系统内存管理器
 * 
 * 管理渲染系统的内存分配和释放，包括内存池管理和碎片整理。
 * 
 * @param memory_pool 内存池指针
 * @param allocation_result 分配结果指针
 * @param allocation_size 分配大小
 * @return 分配结果指针
 */
int *rendering_system_memory_manager(
    int *memory_pool, 
    int *allocation_result, 
    int allocation_size
) {
    uint block_size;
    longlong *current_block;
    longlong *next_block;
    longlong pool_tail;
    int pool_capacity;
    int lock_status;
    int new_capacity;
    uint64_t *new_block;
    uint aligned_size;
    uint64_t memory_flags;
    
    memory_flags = RENDERING_MEMORY_FLAG_EXCLUSIVE;
    aligned_size = allocation_size + 0xffU & 0xffffff00;
    
    // 获取内存池锁
    lock_status = _Mtx_lock(memory_pool + 6);
    if (lock_status != 0) {
        __Throw_C_error_std__YAXH_Z(lock_status);
    }
    
    while (true) {
        current_block = *(longlong **)(memory_pool + 2);
        
        // 遍历内存块链表
        for (next_block = current_block; next_block != (longlong *)0x0; next_block = (longlong *)*next_block) {
            block_size = *(uint *)(next_block + 2);
            
            if ((int)aligned_size <= (int)block_size) {
                lock_status = *(int *)((longlong)next_block + 0x14);
                
                // 如果找到精确匹配的块
                if (block_size == aligned_size) {
                    // 从链表中移除该块
                    if (next_block == current_block) {
                        *(longlong *)(memory_pool + 2) = *current_block;
                    }
                    if (next_block == *(longlong **)(memory_pool + 4)) {
                        *(longlong *)(memory_pool + 4) = (*(longlong **)(memory_pool + 4))[1];
                    }
                    if ((longlong *)next_block[1] != (longlong *)0x0) {
                        *(longlong *)next_block[1] = *next_block;
                    }
                    if (*next_block != 0) {
                        *(longlong *)(*next_block + 8) = next_block[1];
                    }
                    
                    // 释放内存块
                    FUN_18064e900(next_block);
                }
                
                // 分割内存块
                *(uint *)((longlong)next_block + 0x14) = lock_status + aligned_size;
                *(uint *)(next_block + 2) = block_size - aligned_size;
                *allocation_result = lock_status;
                allocation_result[1] = aligned_size;
                goto unlock_and_return;
            }
        }
        
        // 如果没有找到合适的块且内存池未满，则扩展内存池
        if ((char)memory_pool[1] == '\0') break;
        
        lock_status = *memory_pool;
        new_capacity = lock_status * 2;
        pool_tail = *(longlong *)(memory_pool + 4);
        
        if ((pool_tail == 0) || (*(int *)(pool_tail + 0x14) + *(int *)(pool_tail + 0x10) != lock_status)) {
            // 分配新的内存块
            new_block = (uint64_t *)FUN_18062b1e0(
                global_memory_allocator, 
                RENDERING_BLOCK_SIZE, 
                8, 
                CONCAT71((uint7)(uint3)((uint)lock_status >> 8), 3),
                memory_flags
            );
            
            *new_block = 0;
            new_block[1] = 0;
            *(uint32_t *)(new_block + 2) = 0;
            *(uint32_t *)((longlong)new_block + 0x14) = RENDERING_MAX_BLOCK_SIZE;
            *(int *)((longlong)new_block + 0x14) = *memory_pool;
            *(int *)(new_block + 2) = new_capacity - *memory_pool;
            new_block[1] = *(uint64_t *)(memory_pool + 4);
            
            if (*(uint64_t **)(memory_pool + 4) != (uint64_t *)0x0) {
                **(uint64_t **)(memory_pool + 4) = new_block;
            }
            
            if ((*(longlong *)(memory_pool + 2) == 0) && (*(longlong *)(memory_pool + 4) == 0)) {
                *(uint64_t **)(memory_pool + 2) = new_block;
            }
            
            *(uint64_t **)(memory_pool + 4) = new_block;
            *memory_pool = new_capacity;
        }
        else {
            // 扩展现有内存块
            *(int *)(pool_tail + 0x10) = (*(int *)(pool_tail + 0x10) - lock_status) + new_capacity;
            *memory_pool = new_capacity;
        }
    }
    
    // 没有找到可用的内存块
    allocation_result[0] = -1;
    allocation_result[1] = -1;
    
unlock_and_return:
    lock_status = _Mtx_unlock(memory_pool + 6);
    if (lock_status != 0) {
        __Throw_C_error_std__YAXH_Z(lock_status);
    }
    
    return allocation_result;
}



/**
 * 渲染系统数据处理器
 * 
 * 处理渲染系统的数据插入和管理，包括数据块的分割、合并和链表操作。
 * 
 * @param data_manager 数据管理器指针
 * @param data_size 数据大小
 */
void rendering_system_data_handler(
    longlong data_manager, 
    uint64_t data_size
) {
    int block_start;
    int block_capacity;
    longlong *current_block;
    longlong *tail_block;
    longlong *next_block;
    int lock_status;
    uint64_t *new_block;
    int size_high;
    uint64_t memory_flags;
    
    memory_flags = RENDERING_MEMORY_FLAG_EXCLUSIVE;
    
    // 获取数据管理器锁
    lock_status = _Mtx_lock(data_manager + 0x18);
    if (lock_status != 0) {
        __Throw_C_error_std__YAXH_Z(lock_status);
    }
    
    current_block = *(longlong **)(data_manager + 8);
    lock_status = (int)data_size;
    size_high = (int)((uint64_t)data_size >> 0x20);
    
    do {
        if (current_block == (longlong *)0x0) {
            tail_block = *(longlong *)(data_manager + 0x10);
            
            if (tail_block == 0) {
                // 创建新的数据块
                new_block = (uint64_t *)FUN_18062b1e0(
                    global_memory_allocator, 
                    RENDERING_BLOCK_SIZE, 
                    8, 
                    3, 
                    memory_flags
                );
                *(int *)((longlong)new_block + 0x14) = lock_status;
                *(int *)(new_block + 2) = size_high;
                *new_block = 0;
                new_block[1] = 0;
                *(uint64_t **)(data_manager + 0x10) = new_block;
                
set_new_block:
                *(uint64_t **)(data_manager + 8) = new_block;
            }
            else if (*(int *)(tail_block + 0x14) + *(int *)(tail_block + 0x10) == lock_status) {
                // 扩展现有块
                *(int *)(tail_block + 0x10) = size_high + *(int *)(tail_block + 0x10);
            }
            else {
                // 在链表中插入新块
                new_block = (uint64_t *)FUN_18062b1e0(
                    global_memory_allocator, 
                    RENDERING_BLOCK_SIZE, 
                    8, 
                    3, 
                    memory_flags
                );
                new_block[1] = 0;
                *(int *)((longlong)new_block + 0x14) = lock_status;
                *(int *)(new_block + 2) = size_high;
                *new_block = 0;
                new_block[1] = *(uint64_t *)(data_manager + 0x10);
                **(uint64_t **)(data_manager + 0x10) = new_block;
                *(uint64_t **)(data_manager + 0x10) = new_block;
            }
            
unlock_and_return:
            lock_status = _Mtx_unlock(data_manager + 0x18);
            if (lock_status != 0) {
                __Throw_C_error_std__YAXH_Z(lock_status);
            }
            return;
        }
        
        block_start = *(int *)((longlong)current_block + 0x14);
        
        if (lock_status < block_start) {
            next_block = (longlong *)current_block[1];
            
            if (next_block == (longlong *)0x0) {
                if (size_high + lock_status != block_start) {
                    // 在当前块前插入新块
                    new_block = (uint64_t *)FUN_18062b1e0(
                        global_memory_allocator, 
                        RENDERING_BLOCK_SIZE, 
                        8, 
                        3, 
                        memory_flags
                    );
                    *(int *)((longlong)new_block + 0x14) = lock_status;
                    *(int *)(new_block + 2) = size_high;
                    *new_block = current_block;
                    new_block[1] = 0;
                    current_block[1] = (longlong)new_block;
                    goto set_new_block;
                }
                
                // 调整当前块
                *(int *)((longlong)current_block + 0x14) = block_start - size_high;
                *(int *)(current_block + 2) = (int)current_block[2] + size_high;
            }
            else {
                block_capacity = (int)next_block[2];
                
                if (*(int *)((longlong)next_block + 0x14) + block_capacity == lock_status) {
                    if (size_high + lock_status == block_start) {
                        // 合并相邻块
                        if (current_block == *(longlong **)(data_manager + 0x10)) {
                            *(longlong **)(data_manager + 0x10) = next_block;
                            block_capacity = (int)next_block[2];
                        }
                        *(int *)(next_block + 2) = (int)current_block[2] + block_capacity + size_high;
                        tail_block = *current_block;
                        *next_block = tail_block;
                        if (tail_block != 0) {
                            *(longlong **)(tail_block + 8) = next_block;
                        }
                        
                        // 释放当前块
                        FUN_18064e900(current_block);
                    }
                    
                    *(int *)(next_block + 2) = block_capacity + size_high;
                }
                else if (size_high + lock_status == block_start) {
                    // 调整当前块
                    *(int *)((longlong)current_block + 0x14) = block_start - size_high;
                    *(int *)(current_block + 2) = (int)current_block[2] + size_high;
                }
                else {
                    // 在两个块之间插入新块
                    new_block = (uint64_t *)FUN_18062b1e0(
                        global_memory_allocator, 
                        RENDERING_BLOCK_SIZE, 
                        8, 
                        3, 
                        memory_flags
                    );
                    *(int *)((longlong)new_block + 0x14) = lock_status;
                    *(int *)(new_block + 2) = size_high;
                    *new_block = current_block;
                    new_block[1] = next_block;
                    *next_block = (longlong)new_block;
                    current_block[1] = (longlong)new_block;
                }
            }
            
            goto unlock_and_return;
        }
        
        current_block = (longlong *)*current_block;
    } while (true);
}



/**
 * 渲染系统参数处理器
 * 
 * 初始化和处理渲染系统参数，包括参数结构体的设置和字符串操作。
 * 
 * @param unused_param 未使用参数
 * @param param_buffer 参数缓冲区指针
 * @param param_param1 参数1
 * @param param_param2 参数2
 * @return 参数缓冲区指针
 */
uint64_t *rendering_system_parameter_processor(
    uint64_t unused_param, 
    uint64_t *param_buffer, 
    uint64_t param_param1, 
    uint64_t param_param2
) {
    // 初始化参数缓冲区
    *param_buffer = &rendering_null_pointer;
    param_buffer[1] = 0;
    *(uint32_t *)(param_buffer + 2) = 0;
    
    // 设置参数结构体
    *param_buffer = &rendering_param_structure;
    param_buffer[1] = param_buffer + 3;
    *(uint8_t *)(param_buffer + 3) = 0;
    *(uint32_t *)(param_buffer + 2) = RENDERING_PARAM_SIZE;
    
    // 复制参数字符串
    strcpy_s(
        param_buffer[1], 
        RENDERING_STRING_BUFFER_SIZE, 
        &rendering_param_string, 
        param_param2, 
        0, 
        RENDERING_MEMORY_FLAG_EXCLUSIVE
    );
    
    return param_buffer;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



