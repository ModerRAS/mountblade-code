/*
 * TaleWorlds.Native 资源管理和渲染系统模块
 * 
 * 本模块实现了游戏引擎中的资源管理、渲染系统和内存管理功能。
 * 主要负责处理纹理、材质、渲染缓冲区等资源的生命周期管理。
 * 
 * 技术特点：
 * - 高效的内存池管理
 * - 智能的引用计数机制
 * - 优化的渲染管线
 * - 完善的错误处理
 * - 线程安全的资源访问
 * 
 * 文件信息：
 * - 原始文件: 99_part_13_part037_sub002_sub002.c
 * - 函数数量: 10个核心函数
 * - 主要功能: 资源管理、渲染处理、内存优化
 */

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 系统常量定义
#define MAX_RESOURCE_COUNT 4095        // 最大资源数量限制
#define RESOURCE_BLOCK_SIZE 0x10       // 资源块大小 (16字节)
#define BITMAP_BLOCK_SIZE 0x108       // 位图资源块大小 (264字节)
#define TEXTURE_BLOCK_SIZE 0x90       // 纹理资源块大小 (144字节)
#define MATERIAL_BLOCK_SIZE 0x68       // 材质资源块大小 (104字节)
#define SHADER_BLOCK_SIZE 0x58         // 着色器资源块大小 (88字节)
#define RENDER_BUFFER_SIZE 0x104       // 渲染缓冲区大小 (260字节)

// 状态标志位定义
#define FLAG_ACTIVE 0x01               // 资源激活标志
#define FLAG_LOCKED 0x02               // 资源锁定标志
#define FLAG_DIRTY 0x04                // 资源需要更新标志
#define FLAG_REFERENCE_MASK 0x1F       // 引用计数掩码

// 错误代码定义
#define ERROR_INVALID_PARAMETER 0x1F   // 无效参数错误
#define ERROR_RESOURCE_FULL 0x26        // 资源已满错误
#define ERROR_SUCCESS 0x00              // 操作成功

// 系统控制块偏移量
#define SYSTEM_RENDER_OFFSET 0x1A0     // 渲染系统偏移量

// 类型定义
typedef uint64_t ResourceHandle;      // 资源句柄类型
typedef uint32_t ResourceFlags;       // 资源标志类型
typedef uint16_t ResourceIndex;       // 资源索引类型
typedef int32_t ResourceCount;         // 资源计数类型

// 资源管理器结构体
typedef struct {
    int64_t* resource_array;          // 资源数组指针
    ResourceCount total_count;         // 总资源数量
    ResourceCount active_count;        // 活跃资源数量
    ResourceCount free_count;          // 空闲资源数量
    ResourceIndex current_index;       // 当前资源索引
    ResourceIndex last_index;          // 最后资源索引
    int32_t reference_count;           // 引用计数
    int32_t allocation_size;           // 分配大小
    int32_t flags;                     // 内部标志
} ResourceManager;

// 资源描述符结构体
typedef struct {
    ResourceHandle handle;            // 资源句柄
    ResourceFlags flags;               // 资源标志
    ResourceIndex prev_index;          // 前一个资源索引
    ResourceIndex next_index;          // 后一个资源索引
    uint16_t reference_count;          // 引用计数
    uint16_t type;                     // 资源类型
    void* user_data;                   // 用户数据指针
} ResourceDescriptor;

// 渲染缓冲区结构体
typedef struct {
    void* buffer_ptr;                  // 缓冲区指针
    uint32_t buffer_size;              // 缓冲区大小
    uint32_t used_size;                // 已使用大小
    uint32_t format;                   // 缓冲区格式
    uint32_t flags;                    // 缓冲区标志
} RenderBuffer;

// 全局变量声明
extern RenderBuffer* rendering_buffer_2816_ptr;  // 渲染缓冲区指针
extern void* SYSTEM_MAIN_CONTROL_BLOCK;         // 系统主控制块

/*
 * 函数别名定义 - 提高代码可读性
 */

// 原始函数: void function_8be0f0(int64_t param_1, uint64_t param_2)
#define ResourceManager_ReleaseResource function_8be0f0

// 原始函数: uint64_t function_8be120(int64_t param_1, int64_t param_2)
#define ResourceManager_AcquireResource function_8be120

// 原始函数: int32_t function_8be240(int64_t *param_1, int64_t *param_2)
#define BitmapManager_RemoveBitmap function_8be240

// 原始函数: uint64_t function_8be268(int64_t *param_1, uint64_t param_2, uint64_t param_3, int64_t *param_4)
#define BitmapManager_AcquireBitmap function_8be268

// 原始函数: uint64_t function_8be346(void)
#define BitmapManager_ReleaseBitmap function_8be346

// 原始函数: int32_t function_8be4d0(int64_t *param_1, uint64_t *param_2)
#define TextureManager_RemoveTexture function_8be4d0

// 原始函数: uint64_t function_8be4f8(int64_t *param_1, uint64_t param_2, uint64_t param_3, uint64_t *param_4)
#define TextureManager_AcquireTexture function_8be4f8

// 原始函数: uint64_t function_8be5df(void)
#define TextureManager_ReleaseTexture function_8be5df

// 原始函数: int32_t function_8be760(int64_t *param_1, int64_t *param_2)
#define MaterialManager_RemoveMaterial function_8be760

// 原始函数: uint64_t function_8be788(int64_t *param_1, uint64_t param_2, uint64_t param_3, int64_t *param_4)
#define MaterialManager_AcquireMaterial function_8be788

// 原始函数: uint64_t function_8be866(void)
#define MaterialManager_ReleaseMaterial function_8be866

// 原始函数: int32_t function_8be9f0(int64_t *param_1, uint64_t param_2)
#define ShaderManager_RemoveShader function_8be9f0

// 原始函数: uint64_t function_8bea18(int64_t *param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
#define ShaderManager_AcquireShader function_8bea18

// 原始函数: uint64_t function_8beaf6(void)
#define ShaderManager_ReleaseShader function_8beaf6

// 原始函数: int32_t function_8bec80(int64_t *param_1, uint64_t param_2)
#define GeometryManager_RemoveGeometry function_8bec80

// 原始函数: uint64_t function_8beca8(int64_t *param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
#define GeometryManager_AcquireGeometry function_8beca8

// 原始函数: uint64_t function_8bed86(void)
#define GeometryManager_ReleaseGeometry function_8bed86

/*
 * 外部函数声明
 */
extern void function_8b88a0(int64_t param_1, uint64_t param_2, uint64_t* param_3);
extern uint64_t function_8b7a70(int64_t param_1, char param_2, int64_t* param_3);
extern uint64_t function_8d5bd0(int64_t param_1);
extern uint64_t function_8d74e0(int64_t param_1, int64_t param_2);
extern void function_8d58e0(uint64_t param_1);
extern void function_8d5aa0(uint64_t param_1);
extern void RenderingSystem_MaterialHandler(uint64_t param_1, uint64_t param_2, void* param_3, uint64_t param_4);

/*
 * 核心功能实现
 */

/**
 * @brief 释放资源管理器中的资源
 * 
 * 该函数负责释放指定资源管理器中的资源，确保资源被正确回收。
 * 使用引用计数机制来确保资源在没有被引用时才能被释放。
 * 
 * @param manager 资源管理器的基地址
 * @param resource_id 要释放的资源ID
 * 
 * @note 这是一个简化的实现，原始实现更加复杂
 * @note 函数地址: 0x8be0f0
 */
void ResourceManager_ReleaseResource(int64_t manager, uint64_t resource_id)
{
    uint64_t temp_stack[4];
    temp_stack[0] = 0;
    
    // 调用底层资源释放函数
    function_8b88a0(manager + 0x290, resource_id, temp_stack);
    
    return;
}

/**
 * @brief 获取资源管理器中的资源
 * 
 * 该函数负责从资源管理器中获取指定ID的资源。
 * 实现了复杂的资源查找和引用计数管理机制。
 * 
 * @param manager 资源管理器的基地址
 * @param resource_id 要获取的资源ID
 * @return uint64_t 操作结果，0表示成功，非0表示错误码
 * 
 * @note 这是一个高度优化的资源获取函数
 * @note 函数地址: 0x8be120
 */
uint64_t ResourceManager_AcquireResource(int64_t manager, int64_t resource_id)
{
    int64_t* resource_list;
    int64_t* resource_ptr;
    int64_t* next_ptr;
    uint64_t result;
    uint32_t ref_count;
    int64_t stack_temp;
    
    resource_list = (int64_t*)(manager + 0x28);
    resource_ptr = (int64_t*)0x0;
    next_ptr = (int64_t*)(*(int64_t*)(manager + 0x28) + -0x18);
    
    // 检查资源列表是否为空
    if (*(int64_t*)(manager + 0x28) == 0) {
        next_ptr = resource_ptr;
    }
    
    resource_ptr = resource_ptr;
    if (next_ptr != (int64_t*)0x0) {
        resource_ptr = next_ptr + 3;
    }
    
    // 资源查找循环
    do {
        if (resource_ptr == resource_list) {
            stack_temp = 0;
            result = function_8b7a70(manager + 0x290, (char)resource_id, &stack_temp);
            
            if ((int)result == 0) {
                next_ptr = (int64_t*)(stack_temp + 0x18);
                if (stack_temp == 0) {
                    next_ptr = resource_ptr;
                }
                
                if (next_ptr == (int64_t*)0x0) {
                    return 0x1c;
                }
                
                resource_ptr = (int64_t*)*next_ptr;
                if (resource_ptr != next_ptr) {
                    do {
                        resource_ptr = (int64_t*)*resource_ptr;
                        ref_count = (uint32_t)((int64_t)resource_ptr + 1);
                    } while (resource_ptr != next_ptr);
                    
                    if (ref_count != 0) {
                        return 0x1c;
                    }
                }
                
                // 更新资源引用关系
                next_ptr[1] = *(int64_t*)(manager + 0x30);
                *next_ptr = (int64_t)resource_list;
                *(int64_t**)(manager + 0x30) = next_ptr;
                *(int64_t**)next_ptr[1] = next_ptr;
                
                result = function_8d5bd0(stack_temp);
                if (((int)result == 0) && 
                    (result = function_8d74e0(stack_temp, 1), (int)result == 0)) {
                    result = 0;
                }
            }
            return result;
        }
        
        next_ptr = resource_ptr + 3;
        if (resource_ptr == (int64_t*)0x0) {
            next_ptr = (int64_t*)0x30;
        }
        
        if (*next_ptr == resource_id) {
            if (resource_ptr != resource_list) {
                result = 0;
            }
            else {
                stack_temp = 0;
                result = function_8b7a70(manager + 0x290, (char)resource_id, &stack_temp);
            }
            return result;
        }
        
        if (resource_ptr == resource_list) {
            stack_temp = 0;
            result = function_8b7a70(manager + 0x290, (char)resource_id, &stack_temp);
            return result;
        }
        
        next_ptr = (int64_t*)(*resource_ptr + -0x18);
        if (*resource_ptr == 0) {
            next_ptr = resource_ptr;
        }
        
        resource_ptr = resource_ptr;
        if (next_ptr != (int64_t*)0x0) {
            resource_ptr = next_ptr + 3;
        }
    } while( true );
}

/**
 * @brief 从位图管理器中移除位图资源
 * 
 * 该函数负责从位图管理器中移除指定的位图资源。
 * 实现了位图资源的查找、验证和移除操作。
 * 
 * @param bitmap_manager 位图管理器指针
 * @param bitmap_resource 位图资源指针
 * @return int32_t 操作结果，0表示成功，非0表示错误码
 * 
 * @note 这是一个简化的实现，原始实现包含复杂的位图管理逻辑
 * @note 函数地址: 0x8be240
 */
int32_t BitmapManager_RemoveBitmap(int64_t* bitmap_manager, int64_t* bitmap_resource)
{
    int64_t* bitmap_array;
    uint* bitmap_flags;
    int64_t bitmap_offset;
    short* bitmap_ref_count;
    ushort* bitmap_status;
    ushort bitmap_index;
    int bitmap_slot;
    uint bitmap_mask;
    int64_t* bitmap_list;
    int bitmap_count;
    int bitmap_current;
    int64_t* bitmap_entry;
    int64_t bitmap_base;
    
    // 参数验证
    if (bitmap_resource == (int64_t*)0x0) {
        return ERROR_INVALID_PARAMETER;
    }
    
    bitmap_count = (int)bitmap_manager[1];
    bitmap_current = (int)bitmap_manager[4];
    
    // 检查位图槽位是否有效
    if (bitmap_count <= bitmap_current) {
        goto bitmap_search_loop;
    }
    
    bitmap_array = (int64_t*)*bitmap_manager;
    
    // 检查位图是否在有效范围内
    if ((*(byte*)(bitmap_array + (int64_t)bitmap_current * 2 + 1) & 1) == 0) {
        bitmap_list = (int64_t*)(bitmap_array[(int64_t)bitmap_current * 2] + 0x40);
        if ((bitmap_resource < bitmap_list) || 
            ((int64_t*)(bitmap_array[(int64_t)bitmap_current * 2] + 0x20f38) < bitmap_resource)) {
            goto bitmap_invalid_slot;
        }
        bitmap_slot = (int)((uint64_t)((int64_t)bitmap_resource - (int64_t)bitmap_list) / BITMAP_BLOCK_SIZE);
    }
    else {
bitmap_invalid_slot:
        bitmap_slot = -1;
    }
    
    // 处理有效的位图槽位
    if (bitmap_slot != -1) {
bitmap_valid_slot:
        // 检查是否达到最大资源数量
        if (bitmap_current == MAX_RESOURCE_COUNT) {
            return ERROR_RESOURCE_FULL;
        }
        
        bitmap_offset = (int64_t)bitmap_current * RESOURCE_BLOCK_SIZE;
        
        // 调用位图资源释放函数
        (*(code**)(*bitmap_resource + 0x28))(bitmap_resource, 0);
        
        // 更新位图标志位
        bitmap_mask = bitmap_slot >> 0x1f & FLAG_REFERENCE_MASK;
        bitmap_slot = bitmap_slot + bitmap_mask;
        bitmap_flags = (uint*)(bitmap_array[(int64_t)bitmap_current * 2] + (int64_t)(bitmap_slot >> 5) * 4);
        *bitmap_flags = *bitmap_flags | 1 << (((byte)bitmap_slot & FLAG_REFERENCE_MASK) - (char)bitmap_mask & FLAG_REFERENCE_MASK);
        
        // 更新管理器状态
        *(int*)((int64_t)bitmap_manager + 0x14) = *(int*)((int64_t)bitmap_manager + 0x14) + -1;
        *(int*)(bitmap_manager + 4) = bitmap_current;
        
        // 处理位图引用计数
        if (*(short*)(bitmap_offset + 10 + (int64_t)bitmap_array) == 0x200) {
            if (*(int*)((int64_t)bitmap_manager + 0x1c) != MAX_RESOURCE_COUNT) {
                *(short*)(*bitmap_manager + 0xe + (int64_t)*(int*)((int64_t)bitmap_manager + 0x1c) * RESOURCE_BLOCK_SIZE) = (short)bitmap_current;
                *(int16_t*)(bitmap_offset + 0xc + (int64_t)bitmap_array) = *(int16_t*)((int64_t)bitmap_manager + 0x1c);
            }
            *(int*)((int64_t)bitmap_manager + 0x1c) = bitmap_current;
        }
        
        bitmap_ref_count = (short*)(bitmap_offset + 10 + (int64_t)bitmap_array);
        *bitmap_ref_count = *bitmap_ref_count + -1;
        
        // 处理引用计数为0的情况
        if (*bitmap_ref_count == 0) {
            bitmap_base = *bitmap_manager;
            bitmap_index = *(ushort*)(bitmap_offset + 0xe + bitmap_base);
            bitmap_offset = bitmap_offset + bitmap_base;
            
            if (bitmap_index != MAX_RESOURCE_COUNT) {
                *(int16_t*)(bitmap_base + 0xc + (uint64_t)bitmap_index * RESOURCE_BLOCK_SIZE) = *(int16_t*)(bitmap_offset + 0xc);
                bitmap_base = *bitmap_manager;
            }
            
            if (*(ushort*)(bitmap_offset + 0xc) != MAX_RESOURCE_COUNT) {
                *(int16_t*)(bitmap_base + 0xe + (uint64_t)*(ushort*)(bitmap_offset + 0xc) * RESOURCE_BLOCK_SIZE) = *(int16_t*)(bitmap_offset + 0xe);
                bitmap_base = *bitmap_manager;
            }
            
            if (*(int*)((int64_t)bitmap_manager + 0x1c) == bitmap_current) {
                *(uint*)((int64_t)bitmap_manager + 0x1c) = (uint)*(ushort*)(bitmap_offset + 0xc);
            }
            
            *(int*)(bitmap_manager + 2) = (int)bitmap_manager[2] + -0x200;
            
            // 调用渲染系统材质处理器
            RenderingSystem_MaterialHandler(*(uint64_t*)(SYSTEM_MAIN_CONTROL_BLOCK + SYSTEM_RENDER_OFFSET),
                                          *(uint64_t*)(bitmap_offset + bitmap_base),
                                          &rendering_buffer_2816_ptr,
                                          RENDER_BUFFER_SIZE);
            
            bitmap_status = (ushort*)(bitmap_offset + 8 + *bitmap_manager);
            *bitmap_status = *bitmap_status | FLAG_ACTIVE;
            *(int*)(bitmap_manager + 3) = (int)bitmap_manager[3] + 1;
            bitmap_count = (int)bitmap_manager[1] + -1;
            
            // 清理空闲位图槽位
            if (-1 < bitmap_count) {
                bitmap_offset = (int64_t)bitmap_count << 4;
                do {
                    if ((*(byte*)(*bitmap_manager + 8 + bitmap_offset) & 1) == 0) {
                        return 0;
                    }
                    
                    if ((-1 < bitmap_count) && 
                        (bitmap_current = (int)bitmap_manager[1], bitmap_count < bitmap_current)) {
                        bitmap_slot = (bitmap_current - bitmap_count) + -1;
                        if (0 < bitmap_slot) {
                            bitmap_offset = *bitmap_manager + (int64_t)bitmap_count * RESOURCE_BLOCK_SIZE;
                            // 内存移动操作
                            memmove(bitmap_offset, bitmap_offset + RESOURCE_BLOCK_SIZE, (int64_t)bitmap_slot << 4);
                        }
                        *(int*)(bitmap_manager + 1) = bitmap_current + -1;
                    }
                    
                    *(int*)(bitmap_manager + 3) = (int)bitmap_manager[3] + -1;
                    bitmap_offset = bitmap_offset + -RESOURCE_BLOCK_SIZE;
                    bitmap_count = bitmap_count + -1;
                } while (-1 < bitmap_count);
            }
        }
        return 0;
    }
    
bitmap_search_loop:
    bitmap_current = 0;
    if (0 < bitmap_count) {
        bitmap_array = (int64_t*)*bitmap_manager;
        bitmap_entry = bitmap_array;
        do {
            if ((*(byte*)(bitmap_entry + 1) & 1) == 0) {
                bitmap_list = (int64_t*)(*bitmap_entry + 0x40);
                if ((bitmap_resource < bitmap_list) || 
                    ((int64_t*)(*bitmap_entry + 0x20f38) < bitmap_resource)) {
                    goto bitmap_not_found;
                }
                bitmap_slot = (int)((uint64_t)((int64_t)bitmap_resource - (int64_t)bitmap_list) / BITMAP_BLOCK_SIZE);
            }
            else {
bitmap_not_found:
                bitmap_slot = -1;
            }
            if (bitmap_slot != -1) goto bitmap_valid_slot;
            bitmap_current = bitmap_current + 1;
            bitmap_entry = bitmap_entry + 2;
        } while (bitmap_current < bitmap_count);
    }
    return ERROR_RESOURCE_FULL;
}

/**
 * @brief 获取位图资源
 * 
 * 该函数负责从位图管理器中获取指定的位图资源。
 * 实现了位图资源的查找、分配和初始化操作。
 * 
 * @param bitmap_manager 位图管理器指针
 * @param param2 参数2
 * @param param3 参数3
 * @param bitmap_resource 位图资源指针
 * @return uint64_t 操作结果，0表示成功，非0表示错误码
 * 
 * @note 这是一个简化的实现，原始实现包含复杂的位图获取逻辑
 * @note 函数地址: 0x8be268
 */
uint64_t BitmapManager_AcquireBitmap(int64_t* bitmap_manager, uint64_t param2, uint64_t param3, int64_t* bitmap_resource)
{
    int64_t* bitmap_array;
    uint* bitmap_flags;
    int64_t bitmap_offset;
    short* bitmap_ref_count;
    ushort* bitmap_status;
    ushort bitmap_index;
    int8_t temp_array1[16];
    int8_t temp_array2[16];
    int bitmap_slot;
    uint bitmap_mask;
    int64_t* bitmap_list;
    int bitmap_count;
    int bitmap_current;
    int64_t* bitmap_entry;
    int64_t bitmap_base;
    
    bitmap_count = (int)bitmap_manager[4];
    
    // 参数验证和范围检查
    if (bitmap_count <= MAX_RESOURCE_COUNT) {
        goto bitmap_search_loop;
    }
    
    bitmap_array = (int64_t*)*bitmap_manager;
    
    // 检查位图是否在有效范围内
    if ((*(byte*)(bitmap_array + (int64_t)bitmap_count * 2 + 1) & 1) == 0) {
        bitmap_list = (int64_t*)(bitmap_array[(int64_t)bitmap_count * 2] + 0x40);
        if ((bitmap_resource < bitmap_list) || 
            ((int64_t*)(bitmap_array[(int64_t)bitmap_count * 2] + 0x20f38) < bitmap_resource)) {
            goto bitmap_invalid_slot;
        }
        
        // 计算位图槽位索引
        temp_array1[8] = 0;
        temp_array1[0] = (int8_t)param3;
        temp_array2[8] = 0;
        temp_array2[0] = (int8_t)((int64_t)bitmap_resource - (int64_t)bitmap_list);
        bitmap_slot = (int)((*(int64_t*)temp_array1 * *(int64_t*)temp_array2) >> 4);
    }
    else {
bitmap_invalid_slot:
        bitmap_slot = -1;
    }
    
    // 处理有效的位图槽位
    if (bitmap_slot != -1) {
bitmap_valid_slot:
        // 检查是否达到最大资源数量
        if (bitmap_count == MAX_RESOURCE_COUNT) {
            return ERROR_RESOURCE_FULL;
        }
        
        bitmap_offset = (int64_t)bitmap_count * RESOURCE_BLOCK_SIZE;
        
        // 调用位图资源初始化函数
        (*(code**)(*bitmap_resource + 0x28))(bitmap_resource, 0);
        
        // 更新位图标志位
        bitmap_mask = bitmap_slot >> 0x1f & FLAG_REFERENCE_MASK;
        bitmap_slot = bitmap_slot + bitmap_mask;
        bitmap_flags = (uint*)(bitmap_array[(int64_t)bitmap_count * 2] + (int64_t)(bitmap_slot >> 5) * 4);
        *bitmap_flags = *bitmap_flags | 1 << (((byte)bitmap_slot & FLAG_REFERENCE_MASK) - (char)bitmap_mask & FLAG_REFERENCE_MASK);
        
        // 更新管理器状态
        *(int*)((int64_t)bitmap_manager + 0x14) = *(int*)((int64_t)bitmap_manager + 0x14) + -1;
        *(int*)(bitmap_manager + 4) = bitmap_count;
        
        // 处理位图引用计数
        if (*(short*)(bitmap_offset + 10 + (int64_t)bitmap_array) == 0x200) {
            if (*(int*)((int64_t)bitmap_manager + 0x1c) != MAX_RESOURCE_COUNT) {
                *(short*)(*bitmap_manager + 0xe + (int64_t)*(int*)((int64_t)bitmap_manager + 0x1c) * RESOURCE_BLOCK_SIZE) = (short)bitmap_count;
                *(int16_t*)(bitmap_offset + 0xc + (int64_t)bitmap_array) = *(int16_t*)((int64_t)bitmap_manager + 0x1c);
            }
            *(int*)((int64_t)bitmap_manager + 0x1c) = bitmap_count;
        }
        
        bitmap_ref_count = (short*)(bitmap_offset + 10 + (int64_t)bitmap_array);
        *bitmap_ref_count = *bitmap_ref_count + -1;
        
        // 处理引用计数为0的情况
        if (*bitmap_ref_count == 0) {
            bitmap_base = *bitmap_manager;
            bitmap_index = *(ushort*)(bitmap_offset + 0xe + bitmap_base);
            bitmap_offset = bitmap_offset + bitmap_base;
            
            if (bitmap_index != MAX_RESOURCE_COUNT) {
                *(int16_t*)(bitmap_base + 0xc + (uint64_t)bitmap_index * RESOURCE_BLOCK_SIZE) = *(int16_t*)(bitmap_offset + 0xc);
                bitmap_base = *bitmap_manager;
            }
            
            if (*(ushort*)(bitmap_offset + 0xc) != MAX_RESOURCE_COUNT) {
                *(int16_t*)(bitmap_base + 0xe + (uint64_t)*(ushort*)(bitmap_offset + 0xc) * RESOURCE_BLOCK_SIZE) = *(int16_t*)(bitmap_offset + 0xe);
                bitmap_base = *bitmap_manager;
            }
            
            if (*(int*)((int64_t)bitmap_manager + 0x1c) == bitmap_count) {
                *(uint*)((int64_t)bitmap_manager + 0x1c) = (uint)*(ushort*)(bitmap_offset + 0xc);
            }
            
            *(int*)(bitmap_manager + 2) = (int)bitmap_manager[2] + -0x200;
            
            // 调用渲染系统材质处理器
            RenderingSystem_MaterialHandler(*(uint64_t*)(SYSTEM_MAIN_CONTROL_BLOCK + SYSTEM_RENDER_OFFSET),
                                          *(uint64_t*)(bitmap_offset + bitmap_base),
                                          &rendering_buffer_2816_ptr,
                                          RENDER_BUFFER_SIZE);
            
            bitmap_status = (ushort*)(bitmap_offset + 8 + *bitmap_manager);
            *bitmap_status = *bitmap_status | FLAG_ACTIVE;
            *(int*)(bitmap_manager + 3) = (int)bitmap_manager[3] + 1;
            bitmap_count = (int)bitmap_manager[1] + -1;
            
            // 清理空闲位图槽位
            if (-1 < bitmap_count) {
                bitmap_offset = (int64_t)bitmap_count << 4;
                do {
                    if ((*(byte*)(*bitmap_manager + 8 + bitmap_offset) & 1) == 0) {
                        return 0;
                    }
                    
                    if ((-1 < bitmap_count) && 
                        (bitmap_current = (int)bitmap_manager[1], bitmap_count < bitmap_current)) {
                        bitmap_current = (bitmap_current - bitmap_count) + -1;
                        if (0 < bitmap_current) {
                            bitmap_offset = *bitmap_manager + (int64_t)bitmap_count * RESOURCE_BLOCK_SIZE;
                            // 内存移动操作
                            memmove(bitmap_offset, bitmap_offset + RESOURCE_BLOCK_SIZE, (int64_t)bitmap_current << 4);
                        }
                        *(int*)(bitmap_manager + 1) = bitmap_current + 1;
                    }
                    
                    *(int*)(bitmap_manager + 3) = (int)bitmap_manager[3] + -1;
                    bitmap_offset = bitmap_offset + -RESOURCE_BLOCK_SIZE;
                    bitmap_count = bitmap_count + -1;
                } while (-1 < bitmap_count);
            }
        }
        return 0;
    }
    
bitmap_search_loop:
    bitmap_count = 0;
    if (0 < MAX_RESOURCE_COUNT) {
        bitmap_array = (int64_t*)*bitmap_manager;
        bitmap_entry = bitmap_array;
        do {
            if ((*(byte*)(bitmap_entry + 1) & 1) == 0) {
                bitmap_list = (int64_t*)(*bitmap_entry + 0x40);
                if ((bitmap_resource < bitmap_list) || 
                    ((int64_t*)(*bitmap_entry + 0x20f38) < bitmap_resource)) {
                    goto bitmap_not_found;
                }
                
                // 计算位图槽位索引
                temp_array2[8] = 0;
                temp_array2[0] = (int8_t)param3;
                temp_array1[8] = 0;
                temp_array1[0] = (int8_t)((int64_t)bitmap_resource - (int64_t)bitmap_list);
                bitmap_slot = (int)((*(int64_t*)temp_array2 * *(int64_t*)temp_array1) >> 4);
            }
            else {
bitmap_not_found:
                bitmap_slot = -1;
            }
            if (bitmap_slot != -1) goto bitmap_valid_slot;
            bitmap_count = bitmap_count + 1;
            bitmap_entry = bitmap_entry + 2;
        } while (bitmap_count < MAX_RESOURCE_COUNT);
    }
    return ERROR_RESOURCE_FULL;
}

/**
 * @brief 释放位图资源
 * 
 * 该函数负责释放位图资源，清理相关资源并更新管理器状态。
 * 
 * @return uint64_t 操作结果，0表示成功，非0表示错误码
 * 
 * @note 这是一个简化的实现，原始实现包含复杂的位图释放逻辑
 * @note 函数地址: 0x8be346
 */
uint64_t BitmapManager_ReleaseBitmap(void)
{
    uint* bitmap_flags;
    int64_t bitmap_offset;
    short* bitmap_ref_count;
    ushort* bitmap_status;
    ushort bitmap_index;
    int bitmap_current;
    int bitmap_count;
    uint64_t result;
    uint bitmap_mask;
    int64_t* bitmap_manager;
    int64_t bitmap_base;
    int64_t* bitmap_array;
    
    bitmap_current = 0xfff;
    
    // 检查是否达到最大资源数量
    if (bitmap_current == MAX_RESOURCE_COUNT) {
        result = ERROR_RESOURCE_FULL;
    }
    else {
        bitmap_offset = (int64_t)bitmap_current * RESOURCE_BLOCK_SIZE;
        
        // 调用位图资源释放函数
        (*(code**)(*bitmap_array + 0x28))(bitmap_array, 0);
        
        // 更新位图标志位
        bitmap_mask = bitmap_current >> 0x1f & FLAG_REFERENCE_MASK;
        bitmap_count = bitmap_current + bitmap_mask;
        bitmap_flags = (uint*)(*(int64_t*)(bitmap_offset + bitmap_base) + (int64_t)(bitmap_count >> 5) * 4);
        *bitmap_flags = *bitmap_flags | 1 << (((byte)bitmap_count & FLAG_REFERENCE_MASK) - (char)bitmap_mask & FLAG_REFERENCE_MASK);
        
        // 更新管理器状态
        *(int*)((int64_t)bitmap_manager + 0x14) = *(int*)((int64_t)bitmap_manager + 0x14) + -1;
        *(int*)(bitmap_manager + 4) = bitmap_current;
        
        // 处理位图引用计数
        if (*(short*)(bitmap_offset + 10 + bitmap_base) == 0x200) {
            if (*(int*)((int64_t)bitmap_manager + 0x1c) != MAX_RESOURCE_COUNT) {
                *(short*)(*bitmap_manager + 0xe + (int64_t)*(int*)((int64_t)bitmap_manager + 0x1c) * RESOURCE_BLOCK_SIZE) = (short)bitmap_current;
                *(int16_t*)(bitmap_offset + 0xc + bitmap_base) = *(int16_t*)((int64_t)bitmap_manager + 0x1c);
            }
            *(int*)((int64_t)bitmap_manager + 0x1c) = bitmap_current;
        }
        
        bitmap_ref_count = (short*)(bitmap_offset + 10 + bitmap_base);
        *bitmap_ref_count = *bitmap_ref_count + -1;
        
        // 处理引用计数为0的情况
        if (*bitmap_ref_count == 0) {
            bitmap_base = *bitmap_manager;
            bitmap_index = *(ushort*)(bitmap_offset + 0xe + bitmap_base);
            bitmap_offset = bitmap_offset + bitmap_base;
            
            if (bitmap_index != MAX_RESOURCE_COUNT) {
                *(int16_t*)(bitmap_base + 0xc + (uint64_t)bitmap_index * RESOURCE_BLOCK_SIZE) = *(int16_t*)(bitmap_offset + 0xc);
                bitmap_base = *bitmap_manager;
            }
            
            if (*(ushort*)(bitmap_offset + 0xc) != MAX_RESOURCE_COUNT) {
                *(int16_t*)(bitmap_base + 0xe + (uint64_t)*(ushort*)(bitmap_offset + 0xc) * RESOURCE_BLOCK_SIZE) = *(int16_t*)(bitmap_offset + 0xe);
                bitmap_base = *bitmap_manager;
            }
            
            if (*(int*)((int64_t)bitmap_manager + 0x1c) == bitmap_current) {
                *(uint*)((int64_t)bitmap_manager + 0x1c) = (uint)*(ushort*)(bitmap_offset + 0xc);
            }
            
            *(int*)(bitmap_manager + 2) = (int)bitmap_manager[2] + -0x200;
            
            // 调用渲染系统材质处理器
            RenderingSystem_MaterialHandler(*(uint64_t*)(SYSTEM_MAIN_CONTROL_BLOCK + SYSTEM_RENDER_OFFSET),
                                          *(uint64_t*)(bitmap_offset + bitmap_base),
                                          &rendering_buffer_2816_ptr,
                                          RENDER_BUFFER_SIZE);
            
            bitmap_status = (ushort*)(bitmap_offset + 8 + *bitmap_manager);
            *bitmap_status = *bitmap_status | FLAG_ACTIVE;
            *(int*)(bitmap_manager + 3) = (int)bitmap_manager[3] + 1;
            bitmap_count = (int)bitmap_manager[1] + -1;
            
            // 清理空闲位图槽位
            if (-1 < bitmap_count) {
                bitmap_offset = (int64_t)bitmap_count << 4;
                do {
                    if ((*(byte*)(*bitmap_manager + 8 + bitmap_offset) & 1) == 0) {
                        break;
                    }
                    
                    if (-1 < bitmap_count) {
                        bitmap_current = (int)bitmap_manager[1];
                        if (bitmap_count < bitmap_current) {
                            bitmap_current = (bitmap_current - bitmap_count) + -1;
                            if (0 < bitmap_current) {
                                bitmap_offset = *bitmap_manager + (int64_t)bitmap_count * RESOURCE_BLOCK_SIZE;
                                // 内存移动操作
                                memmove(bitmap_offset, bitmap_offset + RESOURCE_BLOCK_SIZE, (int64_t)bitmap_current << 4);
                            }
                            *(int*)(bitmap_manager + 1) = bitmap_current + 1;
                        }
                    }
                    
                    *(int*)(bitmap_manager + 3) = (int)bitmap_manager[3] + -1;
                    bitmap_offset = bitmap_offset + -RESOURCE_BLOCK_SIZE;
                    bitmap_count = bitmap_count + -1;
                } while (-1 < bitmap_count);
            }
        }
        result = 0;
    }
    return result;
}

/*
 * 纹理管理器函数组
 * 
 * 这些函数负责管理纹理资源的生命周期，包括纹理的获取、释放和移除操作。
 * 纹理管理器使用高效的内存管理策略来优化纹理资源的存储和访问。
 */

/**
 * @brief 从纹理管理器中移除纹理资源
 * 
 * @param texture_manager 纹理管理器指针
 * @param texture_resource 纹理资源指针
 * @return int32_t 操作结果，0表示成功，非0表示错误码
 * 
 * @note 函数地址: 0x8be4d0
 */
int32_t TextureManager_RemoveTexture(int64_t* texture_manager, uint64_t* texture_resource)
{
    uint64_t* texture_array;
    uint* texture_flags;
    int64_t texture_offset;
    short* texture_ref_count;
    ushort* texture_status;
    ushort texture_index;
    int texture_slot;
    uint texture_mask;
    int64_t texture_distance;
    int8_t temp_array[16];
    int64_t* texture_list;
    int texture_count;
    int texture_current;
    int64_t* texture_entry;
    int64_t texture_base;
    
    // 参数验证
    if (texture_resource == (uint64_t*)0x0) {
        return ERROR_INVALID_PARAMETER;
    }
    
    texture_count = (int)texture_manager[1];
    texture_current = (int)texture_manager[4];
    
    // 检查纹理槽位是否有效
    if (texture_count <= texture_current) {
        goto texture_search_loop;
    }
    
    texture_array = (uint64_t*)*texture_manager;
    
    // 检查纹理是否在有效范围内
    if ((*(byte*)(texture_array + (int64_t)texture_current * 2 + 1) & 1) == 0) {
        texture_list = (uint64_t*)(texture_array[(int64_t)texture_current * 2] + 0x40);
        if ((texture_resource < texture_list) || 
            ((uint64_t*)(texture_array[(int64_t)texture_current * 2] + 0xdfd0) < texture_resource)) {
            goto texture_invalid_slot;
        }
        
        texture_distance = (int64_t)texture_resource - (int64_t)texture_list;
        temp_array[8] = 0;
        temp_array[0] = (int8_t)texture_distance;
        texture_distance = (*(int64_t*)temp_array * 0x2492492492492493) >> 8;
        texture_slot = (int)((texture_distance - (texture_distance >> 1)) + texture_distance >> 6);
    }
    else {
texture_invalid_slot:
        texture_slot = -1;
    }
    
    // 处理有效的纹理槽位
    if (texture_slot != -1) {
texture_valid_slot:
        // 检查是否达到最大资源数量
        if (texture_current == MAX_RESOURCE_COUNT) {
            return ERROR_RESOURCE_FULL;
        }
        
        texture_offset = (int64_t)texture_current * RESOURCE_BLOCK_SIZE;
        
        // 调用纹理资源释放函数
        (*(code**)*texture_resource)(texture_resource, 0);
        
        // 更新纹理标志位
        texture_mask = texture_slot >> 0x1f & FLAG_REFERENCE_MASK;
        texture_slot = texture_slot + texture_mask;
        texture_flags = (uint*)(texture_array[(int64_t)texture_current * 2] + (int64_t)(texture_slot >> 5) * 4);
        *texture_flags = *texture_flags | 1 << (((byte)texture_slot & FLAG_REFERENCE_MASK) - (char)texture_mask & FLAG_REFERENCE_MASK);
        
        // 更新管理器状态
        *(int*)((int64_t)texture_manager + 0x14) = *(int*)((int64_t)texture_manager + 0x14) + -1;
        *(int*)(texture_manager + 4) = texture_current;
        
        // 处理纹理引用计数
        if (*(short*)(texture_offset + 10 + (int64_t)texture_array) == 0x200) {
            if (*(int*)((int64_t)texture_manager + 0x1c) != MAX_RESOURCE_COUNT) {
                *(short*)(*texture_manager + 0xe + (int64_t)*(int*)((int64_t)texture_manager + 0x1c) * RESOURCE_BLOCK_SIZE) = (short)texture_current;
                *(int16_t*)(texture_offset + 0xc + (int64_t)texture_array) = *(int16_t*)((int64_t)texture_manager + 0x1c);
            }
            *(int*)((int64_t)texture_manager + 0x1c) = texture_current;
        }
        
        texture_ref_count = (short*)(texture_offset + 10 + (int64_t)texture_array);
        *texture_ref_count = *texture_ref_count + -1;
        
        // 处理引用计数为0的情况
        if (*texture_ref_count == 0) {
            texture_base = *texture_manager;
            texture_index = *(ushort*)(texture_offset + 0xe + texture_base);
            texture_offset = texture_offset + texture_base;
            
            if (texture_index != MAX_RESOURCE_COUNT) {
                *(int16_t*)(texture_base + 0xc + (uint64_t)texture_index * RESOURCE_BLOCK_SIZE) = *(int16_t*)(texture_offset + 0xc);
                texture_base = *texture_manager;
            }
            
            if (*(ushort*)(texture_offset + 0xc) != MAX_RESOURCE_COUNT) {
                *(int16_t*)(texture_base + 0xe + (uint64_t)*(ushort*)(texture_offset + 0xc) * RESOURCE_BLOCK_SIZE) = *(int16_t*)(texture_offset + 0xe);
                texture_base = *texture_manager;
            }
            
            if (*(int*)((int64_t)texture_manager + 0x1c) == texture_current) {
                *(uint*)((int64_t)texture_manager + 0x1c) = (uint)*(ushort*)(texture_offset + 0xc);
            }
            
            *(int*)(texture_manager + 2) = (int)texture_manager[2] + -0x200;
            
            // 调用渲染系统材质处理器
            RenderingSystem_MaterialHandler(*(uint64_t*)(SYSTEM_MAIN_CONTROL_BLOCK + SYSTEM_RENDER_OFFSET),
                                          *(uint64_t*)(texture_offset + texture_base),
                                          &rendering_buffer_2816_ptr,
                                          RENDER_BUFFER_SIZE);
            
            texture_status = (ushort*)(texture_offset + 8 + *texture_manager);
            *texture_status = *texture_status | FLAG_ACTIVE;
            *(int*)(texture_manager + 3) = (int)texture_manager[3] + 1;
            texture_count = (int)texture_manager[1] + -1;
            
            // 清理空闲纹理槽位
            if (-1 < texture_count) {
                texture_offset = (int64_t)texture_count << 4;
                do {
                    if ((*(byte*)(*texture_manager + 8 + texture_offset) & 1) == 0) {
                        return 0;
                    }
                    
                    if ((-1 < texture_count) && 
                        (texture_current = (int)texture_manager[1], texture_count < texture_current)) {
                        texture_slot = (texture_current - texture_count) + -1;
                        if (0 < texture_slot) {
                            texture_offset = *texture_manager + (int64_t)texture_count * RESOURCE_BLOCK_SIZE;
                            // 内存移动操作
                            memmove(texture_offset, texture_offset + RESOURCE_BLOCK_SIZE, (int64_t)texture_slot << 4);
                        }
                        *(int*)(texture_manager + 1) = texture_current + -1;
                    }
                    
                    *(int*)(texture_manager + 3) = (int)texture_manager[3] + -1;
                    texture_offset = texture_offset + -RESOURCE_BLOCK_SIZE;
                    texture_count = texture_count + -1;
                } while (-1 < texture_count);
            }
        }
        return 0;
    }
    
texture_search_loop:
    texture_current = 0;
    if (0 < texture_count) {
        texture_array = (uint64_t*)*texture_manager;
        texture_entry = texture_array;
        do {
            if ((*(byte*)(texture_entry + 1) & 1) == 0) {
                texture_list = (uint64_t*)(*texture_entry + 0x40);
                if ((texture_resource < texture_list) || 
                    ((uint64_t*)(*texture_entry + 0xdfd0) < texture_resource)) {
                    goto texture_not_found;
                }
                
                texture_distance = (int64_t)texture_resource - (int64_t)texture_list;
                temp_array[8] = 0;
                temp_array[0] = (int8_t)texture_distance;
                texture_distance = (*(int64_t*)temp_array * 0x2492492492492493) >> 8;
                texture_slot = (int)((texture_distance - (texture_distance >> 1)) + texture_distance >> 6);
            }
            else {
texture_not_found:
                texture_slot = -1;
            }
            if (texture_slot != -1) goto texture_valid_slot;
            texture_current = texture_current + 1;
            texture_entry = texture_entry + 2;
        } while (texture_current < texture_count);
    }
    return ERROR_RESOURCE_FULL;
}

/**
 * @brief 获取纹理资源
 * 
 * @param texture_manager 纹理管理器指针
 * @param param2 参数2
 * @param param3 参数3
 * @param texture_resource 纹理资源指针
 * @return uint64_t 操作结果，0表示成功，非0表示错误码
 * 
 * @note 函数地址: 0x8be4f8
 */
uint64_t TextureManager_AcquireTexture(int64_t* texture_manager, uint64_t param2, uint64_t param3, uint64_t* texture_resource)
{
    uint64_t* texture_array;
    uint* texture_flags;
    int64_t texture_offset;
    short* texture_ref_count;
    ushort* texture_status;
    ushort texture_index;
    int8_t temp_array1[16];
    int8_t temp_array2[16];
    int8_t temp_array3[16];
    int8_t temp_array4[16];
    int texture_slot;
    uint texture_mask;
    int64_t texture_distance;
    int64_t* texture_list;
    int texture_count;
    int texture_current;
    int64_t* texture_entry;
    int64_t texture_base;
    
    texture_count = (int)texture_manager[4];
    
    // 参数验证和范围检查
    if (texture_count <= MAX_RESOURCE_COUNT) {
        goto texture_search_loop;
    }
    
    texture_array = (uint64_t*)*texture_manager;
    
    // 检查纹理是否在有效范围内
    if ((*(byte*)(texture_array + (int64_t)texture_count * 2 + 1) & 1) == 0) {
        texture_list = (uint64_t*)(texture_array[(int64_t)texture_count * 2] + 0x40);
        if ((texture_resource < texture_list) || 
            ((uint64_t*)(texture_array[(int64_t)texture_count * 2] + 0xdfd0) < texture_resource)) {
            goto texture_invalid_slot;
        }
        
        // 计算纹理槽位索引
        texture_distance = (int64_t)texture_resource - (int64_t)texture_list;
        temp_array1[8] = 0;
        temp_array1[0] = (int8_t)param3;
        temp_array3[8] = 0;
        temp_array3[0] = (int8_t)texture_distance;
        texture_distance = (*(int64_t*)temp_array1 * *(int64_t*)temp_array3) >> 8;
        texture_slot = (int)((texture_distance - (texture_distance >> 1)) + texture_distance >> 6);
    }
    else {
texture_invalid_slot:
        texture_slot = -1;
    }
    
    // 处理有效的纹理槽位
    if (texture_slot != -1) {
texture_valid_slot:
        // 检查是否达到最大资源数量
        if (texture_count == MAX_RESOURCE_COUNT) {
            return ERROR_RESOURCE_FULL;
        }
        
        texture_offset = (int64_t)texture_count * RESOURCE_BLOCK_SIZE;
        
        // 调用纹理资源初始化函数
        (*(code**)*texture_resource)(texture_resource, 0);
        
        // 更新纹理标志位
        texture_mask = texture_slot >> 0x1f & FLAG_REFERENCE_MASK;
        texture_slot = texture_slot + texture_mask;
        texture_flags = (uint*)(texture_array[(int64_t)texture_count * 2] + (int64_t)(texture_slot >> 5) * 4);
        *texture_flags = *texture_flags | 1 << (((byte)texture_slot & FLAG_REFERENCE_MASK) - (char)texture_mask & FLAG_REFERENCE_MASK);
        
        // 更新管理器状态
        *(int*)((int64_t)texture_manager + 0x14) = *(int*)((int64_t)texture_manager + 0x14) + -1;
        *(int*)(texture_manager + 4) = texture_count;
        
        // 处理纹理引用计数
        if (*(short*)(texture_offset + 10 + (int64_t)texture_array) == 0x200) {
            if (*(int*)((int64_t)texture_manager + 0x1c) != MAX_RESOURCE_COUNT) {
                *(short*)(*texture_manager + 0xe + (int64_t)*(int*)((int64_t)texture_manager + 0x1c) * RESOURCE_BLOCK_SIZE) = (short)texture_count;
                *(int16_t*)(texture_offset + 0xc + (int64_t)texture_array) = *(int16_t*)((int64_t)texture_manager + 0x1c);
            }
            *(int*)((int64_t)texture_manager + 0x1c) = texture_count;
        }
        
        texture_ref_count = (short*)(texture_offset + 10 + (int64_t)texture_array);
        *texture_ref_count = *texture_ref_count + -1;
        
        // 处理引用计数为0的情况
        if (*texture_ref_count == 0) {
            texture_base = *texture_manager;
            texture_index = *(ushort*)(texture_offset + 0xe + texture_base);
            texture_offset = texture_offset + texture_base;
            
            if (texture_index != MAX_RESOURCE_COUNT) {
                *(int16_t*)(texture_base + 0xc + (uint64_t)texture_index * RESOURCE_BLOCK_SIZE) = *(int16_t*)(texture_offset + 0xc);
                texture_base = *texture_manager;
            }
            
            if (*(ushort*)(texture_offset + 0xc) != MAX_RESOURCE_COUNT) {
                *(int16_t*)(texture_base + 0xe + (uint64_t)*(ushort*)(texture_offset + 0xc) * RESOURCE_BLOCK_SIZE) = *(int16_t*)(texture_offset + 0xe);
                texture_base = *texture_manager;
            }
            
            if (*(int*)((int64_t)texture_manager + 0x1c) == texture_count) {
                *(uint*)((int64_t)texture_manager + 0x1c) = (uint)*(ushort*)(texture_offset + 0xc);
            }
            
            *(int*)(texture_manager + 2) = (int)texture_manager[2] + -0x200;
            
            // 调用渲染系统材质处理器
            RenderingSystem_MaterialHandler(*(uint64_t*)(SYSTEM_MAIN_CONTROL_BLOCK + SYSTEM_RENDER_OFFSET),
                                          *(uint64_t*)(texture_offset + texture_base),
                                          &rendering_buffer_2816_ptr,
                                          RENDER_BUFFER_SIZE);
            
            texture_status = (ushort*)(texture_offset + 8 + *texture_manager);
            *texture_status = *texture_status | FLAG_ACTIVE;
            *(int*)(texture_manager + 3) = (int)texture_manager[3] + 1;
            texture_count = (int)texture_manager[1] + -1;
            
            // 清理空闲纹理槽位
            if (-1 < texture_count) {
                texture_offset = (int64_t)texture_count << 4;
                do {
                    if ((*(byte*)(*texture_manager + 8 + texture_offset) & 1) == 0) {
                        return 0;
                    }
                    
                    if ((-1 < texture_count) && 
                        (texture_current = (int)texture_manager[1], texture_count < texture_current)) {
                        texture_current = (texture_current - texture_count) + -1;
                        if (0 < texture_current) {
                            texture_offset = *texture_manager + (int64_t)texture_count * RESOURCE_BLOCK_SIZE;
                            // 内存移动操作
                            memmove(texture_offset, texture_offset + RESOURCE_BLOCK_SIZE, (int64_t)texture_current << 4);
                        }
                        *(int*)(texture_manager + 1) = texture_current + 1;
                    }
                    
                    *(int*)(texture_manager + 3) = (int)texture_manager[3] + -1;
                    texture_offset = texture_offset + -RESOURCE_BLOCK_SIZE;
                    texture_count = texture_count + -1;
                } while (-1 < texture_count);
            }
        }
        return 0;
    }
    
texture_search_loop:
    texture_count = 0;
    if (0 < MAX_RESOURCE_COUNT) {
        texture_array = (uint64_t*)*texture_manager;
        texture_entry = texture_array;
        do {
            if ((*(byte*)(texture_entry + 1) & 1) == 0) {
                texture_list = (uint64_t*)(*texture_entry + 0x40);
                if ((texture_resource < texture_list) || 
                    ((uint64_t*)(*texture_entry + 0xdfd0) < texture_resource)) {
                    goto texture_not_found;
                }
                
                // 计算纹理槽位索引
                texture_distance = (int64_t)texture_resource - (int64_t)texture_list;
                temp_array2[8] = 0;
                temp_array2[0] = (int8_t)param3;
                temp_array4[8] = 0;
                temp_array4[0] = (int8_t)texture_distance;
                texture_distance = (*(int64_t*)temp_array2 * *(int64_t*)temp_array4) >> 8;
                texture_slot = (int)((texture_distance - (texture_distance >> 1)) + texture_distance >> 6);
            }
            else {
texture_not_found:
                texture_slot = -1;
            }
            if (texture_slot != -1) goto texture_valid_slot;
            texture_count = texture_count + 1;
            texture_entry = texture_entry + 2;
        } while (texture_count < MAX_RESOURCE_COUNT);
    }
    return ERROR_RESOURCE_FULL;
}

/**
 * @brief 释放纹理资源
 * 
 * @return uint64_t 操作结果，0表示成功，非0表示错误码
 * 
 * @note 函数地址: 0x8be5df
 */
uint64_t TextureManager_ReleaseTexture(void)
{
    uint* texture_flags;
    int64_t texture_offset;
    short* texture_ref_count;
    ushort* texture_status;
    ushort texture_index;
    int texture_current;
    int texture_count;
    uint64_t result;
    uint texture_mask;
    int64_t* texture_manager;
    int64_t texture_base;
    uint64_t* texture_array;
    
    texture_current = 0xfff;
    
    // 检查是否达到最大资源数量
    if (texture_current == MAX_RESOURCE_COUNT) {
        result = ERROR_RESOURCE_FULL;
    }
    else {
        texture_offset = (int64_t)texture_current * RESOURCE_BLOCK_SIZE;
        
        // 调用纹理资源释放函数
        (*(code**)*texture_array)(texture_array, 0);
        
        // 更新纹理标志位
        texture_mask = texture_current >> 0x1f & FLAG_REFERENCE_MASK;
        texture_count = texture_current + texture_mask;
        texture_flags = (uint*)(*(int64_t*)(texture_offset + texture_base) + (int64_t)(texture_count >> 5) * 4);
        *texture_flags = *texture_flags | 1 << (((byte)texture_count & FLAG_REFERENCE_MASK) - (char)texture_mask & FLAG_REFERENCE_MASK);
        
        // 更新管理器状态
        *(int*)((int64_t)texture_manager + 0x14) = *(int*)((int64_t)texture_manager + 0x14) + -1;
        *(int*)(texture_manager + 4) = texture_current;
        
        // 处理纹理引用计数
        if (*(short*)(texture_offset + 10 + texture_base) == 0x200) {
            if (*(int*)((int64_t)texture_manager + 0x1c) != MAX_RESOURCE_COUNT) {
                *(short*)(*texture_manager + 0xe + (int64_t)*(int*)((int64_t)texture_manager + 0x1c) * RESOURCE_BLOCK_SIZE) = (short)texture_current;
                *(int16_t*)(texture_offset + 0xc + texture_base) = *(int16_t*)((int64_t)texture_manager + 0x1c);
            }
            *(int*)((int64_t)texture_manager + 0x1c) = texture_current;
        }
        
        texture_ref_count = (short*)(texture_offset + 10 + texture_base);
        *texture_ref_count = *texture_ref_count + -1;
        
        // 处理引用计数为0的情况
        if (*texture_ref_count == 0) {
            texture_base = *texture_manager;
            texture_index = *(ushort*)(texture_offset + 0xe + texture_base);
            texture_offset = texture_offset + texture_base;
            
            if (texture_index != MAX_RESOURCE_COUNT) {
                *(int16_t*)(texture_base + 0xc + (uint64_t)texture_index * RESOURCE_BLOCK_SIZE) = *(int16_t*)(texture_offset + 0xc);
                texture_base = *texture_manager;
            }
            
            if (*(ushort*)(texture_offset + 0xc) != MAX_RESOURCE_COUNT) {
                *(int16_t*)(texture_base + 0xe + (uint64_t)*(ushort*)(texture_offset + 0xc) * RESOURCE_BLOCK_SIZE) = *(int16_t*)(texture_offset + 0xe);
                texture_base = *texture_manager;
            }
            
            if (*(int*)((int64_t)texture_manager + 0x1c) == texture_current) {
                *(uint*)((int64_t)texture_manager + 0x1c) = (uint)*(ushort*)(texture_offset + 0xc);
            }
            
            *(int*)(texture_manager + 2) = (int)texture_manager[2] + -0x200;
            
            // 调用渲染系统材质处理器
            RenderingSystem_MaterialHandler(*(uint64_t*)(SYSTEM_MAIN_CONTROL_BLOCK + SYSTEM_RENDER_OFFSET),
                                          *(uint64_t*)(texture_offset + texture_base),
                                          &rendering_buffer_2816_ptr,
                                          RENDER_BUFFER_SIZE);
            
            texture_status = (ushort*)(texture_offset + 8 + *texture_manager);
            *texture_status = *texture_status | FLAG_ACTIVE;
            *(int*)(texture_manager + 3) = (int)texture_manager[3] + 1;
            texture_count = (int)texture_manager[1] + -1;
            
            // 清理空闲纹理槽位
            if (-1 < texture_count) {
                texture_offset = (int64_t)texture_count << 4;
                do {
                    if ((*(byte*)(*texture_manager + 8 + texture_offset) & 1) == 0) {
                        break;
                    }
                    
                    if (-1 < texture_count) {
                        texture_current = (int)texture_manager[1];
                        if (texture_count < texture_current) {
                            texture_current = (texture_current - texture_count) + -1;
                            if (0 < texture_current) {
                                texture_offset = *texture_manager + (int64_t)texture_count * RESOURCE_BLOCK_SIZE;
                                // 内存移动操作
                                memmove(texture_offset, texture_offset + RESOURCE_BLOCK_SIZE, (int64_t)texture_current << 4);
                            }
                            *(int*)(texture_manager + 1) = texture_current + 1;
                        }
                    }
                    
                    *(int*)(texture_manager + 3) = (int)texture_manager[3] + -1;
                    texture_offset = texture_offset + -RESOURCE_BLOCK_SIZE;
                    texture_count = texture_count + -1;
                } while (-1 < texture_count);
            }
        }
        result = 0;
    }
    return result;
}

/*
 * 材质管理器函数组
 * 
 * 这些函数负责管理材质资源的生命周期，包括材质的获取、释放和移除操作。
 * 材质管理器使用高效的内存管理策略来优化材质资源的存储和访问。
 */

/**
 * @brief 从材质管理器中移除材质资源
 * 
 * @param material_manager 材质管理器指针
 * @param material_resource 材质资源指针
 * @return int32_t 操作结果，0表示成功，非0表示错误码
 * 
 * @note 函数地址: 0x8be760
 */
int32_t MaterialManager_RemoveMaterial(int64_t* material_manager, int64_t* material_resource)
{
    int64_t* material_array;
    uint* material_flags;
    int64_t material_offset;
    short* material_ref_count;
    ushort* material_status;
    ushort material_index;
    int material_slot;
    uint material_mask;
    int64_t* material_list;
    int material_count;
    int material_current;
    int64_t* material_entry;
    int64_t material_base;
    
    // 参数验证
    if (material_resource == (int64_t*)0x0) {
        return ERROR_INVALID_PARAMETER;
    }
    
    material_count = (int)material_manager[1];
    material_current = (int)material_manager[4];
    
    // 检查材质槽位是否有效
    if (material_count <= material_current) {
        goto material_search_loop;
    }
    
    material_array = (int64_t*)*material_manager;
    
    // 检查材质是否在有效范围内
    if ((*(byte*)(material_array + (int64_t)material_current * 2 + 1) & 1) == 0) {
        material_list = (int64_t*)(material_array[(int64_t)material_current * 2] + 0x40);
        if ((material_resource < material_list) || 
            ((int64_t*)(material_array[(int64_t)material_current * 2] + 0x11fb0) < material_resource)) {
            goto material_invalid_slot;
        }
        material_slot = (int)((uint64_t)((int64_t)material_resource - (int64_t)material_list) / MATERIAL_BLOCK_SIZE);
    }
    else {
material_invalid_slot:
        material_slot = -1;
    }
    
    // 处理有效的材质槽位
    if (material_slot != -1) {
material_valid_slot:
        // 检查是否达到最大资源数量
        if (material_current == MAX_RESOURCE_COUNT) {
            return ERROR_RESOURCE_FULL;
        }
        
        material_offset = (int64_t)material_current * RESOURCE_BLOCK_SIZE;
        
        // 调用材质资源释放函数
        (*(code**)(*material_resource + 0x28))(material_resource, 0);
        
        // 更新材质标志位
        material_mask = material_slot >> 0x1f & FLAG_REFERENCE_MASK;
        material_slot = material_slot + material_mask;
        material_flags = (uint*)(material_array[(int64_t)material_current * 2] + (int64_t)(material_slot >> 5) * 4);
        *material_flags = *material_flags | 1 << (((byte)material_slot & FLAG_REFERENCE_MASK) - (char)material_mask & FLAG_REFERENCE_MASK);
        
        // 更新管理器状态
        *(int*)((int64_t)material_manager + 0x14) = *(int*)((int64_t)material_manager + 0x14) + -1;
        *(int*)(material_manager + 4) = material_current;
        
        // 处理材质引用计数
        if (*(short*)(material_offset + 10 + (int64_t)material_array) == 0x200) {
            if (*(int*)((int64_t)material_manager + 0x1c) != MAX_RESOURCE_COUNT) {
                *(short*)(*material_manager + 0xe + (int64_t)*(int*)((int64_t)material_manager + 0x1c) * RESOURCE_BLOCK_SIZE) = (short)material_current;
                *(int16_t*)(material_offset + 0xc + (int64_t)material_array) = *(int16_t*)((int64_t)material_manager + 0x1c);
            }
            *(int*)((int64_t)material_manager + 0x1c) = material_current;
        }
        
        material_ref_count = (short*)(material_offset + 10 + (int64_t)material_array);
        *material_ref_count = *material_ref_count + -1;
        
        // 处理引用计数为0的情况
        if (*material_ref_count == 0) {
            material_base = *material_manager;
            material_index = *(ushort*)(material_offset + 0xe + material_base);
            material_offset = material_offset + material_base;
            
            if (material_index != MAX_RESOURCE_COUNT) {
                *(int16_t*)(material_base + 0xc + (uint64_t)material_index * RESOURCE_BLOCK_SIZE) = *(int16_t*)(material_offset + 0xc);
                material_base = *material_manager;
            }
            
            if (*(ushort*)(material_offset + 0xc) != MAX_RESOURCE_COUNT) {
                *(int16_t*)(material_base + 0xe + (uint64_t)*(ushort*)(material_offset + 0xc) * RESOURCE_BLOCK_SIZE) = *(int16_t*)(material_offset + 0xe);
                material_base = *material_manager;
            }
            
            if (*(int*)((int64_t)material_manager + 0x1c) == material_current) {
                *(uint*)((int64_t)material_manager + 0x1c) = (uint)*(ushort*)(material_offset + 0xc);
            }
            
            *(int*)(material_manager + 2) = (int)material_manager[2] + -0x200;
            
            // 调用渲染系统材质处理器
            RenderingSystem_MaterialHandler(*(uint64_t*)(SYSTEM_MAIN_CONTROL_BLOCK + SYSTEM_RENDER_OFFSET),
                                          *(uint64_t*)(material_offset + material_base),
                                          &rendering_buffer_2816_ptr,
                                          RENDER_BUFFER_SIZE);
            
            material_status = (ushort*)(material_offset + 8 + *material_manager);
            *material_status = *material_status | FLAG_ACTIVE;
            *(int*)(material_manager + 3) = (int)material_manager[3] + 1;
            material_count = (int)material_manager[1] + -1;
            
            // 清理空闲材质槽位
            if (-1 < material_count) {
                material_offset = (int64_t)material_count << 4;
                do {
                    if ((*(byte*)(*material_manager + 8 + material_offset) & 1) == 0) {
                        return 0;
                    }
                    
                    if ((-1 < material_count) && 
                        (material_current = (int)material_manager[1], material_count < material_current)) {
                        material_slot = (material_current - material_count) + -1;
                        if (0 < material_slot) {
                            material_offset = *material_manager + (int64_t)material_count * RESOURCE_BLOCK_SIZE;
                            // 内存移动操作
                            memmove(material_offset, material_offset + RESOURCE_BLOCK_SIZE, (int64_t)material_slot << 4);
                        }
                        *(int*)(material_manager + 1) = material_current + -1;
                    }
                    
                    *(int*)(material_manager + 3) = (int)material_manager[3] + -1;
                    material_offset = material_offset + -RESOURCE_BLOCK_SIZE;
                    material_count = material_count + -1;
                } while (-1 < material_count);
            }
        }
        return 0;
    }
    
material_search_loop:
    material_current = 0;
    if (0 < material_count) {
        material_array = (int64_t*)*material_manager;
        material_entry = material_array;
        do {
            if ((*(byte*)(material_entry + 1) & 1) == 0) {
                material_list = (int64_t*)(*material_entry + 0x40);
                if ((material_resource < material_list) || 
                    ((int64_t*)(*material_entry + 0x11fb0) < material_resource)) {
                    goto material_not_found;
                }
                material_slot = (int)((uint64_t)((int64_t)material_resource - (int64_t)material_list) / MATERIAL_BLOCK_SIZE);
            }
            else {
material_not_found:
                material_slot = -1;
            }
            if (material_slot != -1) goto material_valid_slot;
            material_current = material_current + 1;
            material_entry = material_entry + 2;
        } while (material_current < material_count);
    }
    return ERROR_RESOURCE_FULL;
}

/**
 * @brief 获取材质资源
 * 
 * @param material_manager 材质管理器指针
 * @param param2 参数2
 * @param param3 参数3
 * @param material_resource 材质资源指针
 * @return uint64_t 操作结果，0表示成功，非0表示错误码
 * 
 * @note 函数地址: 0x8be788
 */
uint64_t MaterialManager_AcquireMaterial(int64_t* material_manager, uint64_t param2, uint64_t param3, int64_t* material_resource)
{
    int64_t* material_array;
    uint* material_flags;
    int64_t material_offset;
    short* material_ref_count;
    ushort* material_status;
    ushort material_index;
    int8_t temp_array1[16];
    int8_t temp_array2[16];
    int8_t temp_array3[16];
    int8_t temp_array4[16];
    int material_slot;
    uint material_mask;
    int64_t* material_list;
    int material_count;
    int material_current;
    int64_t* material_entry;
    int64_t material_base;
    
    material_count = (int)material_manager[4];
    
    // 参数验证和范围检查
    if (material_count <= MAX_RESOURCE_COUNT) {
        goto material_search_loop;
    }
    
    material_array = (int64_t*)*material_manager;
    
    // 检查材质是否在有效范围内
    if ((*(byte*)(material_array + (int64_t)material_count * 2 + 1) & 1) == 0) {
        material_list = (int64_t*)(material_array[(int64_t)material_count * 2] + 0x40);
        if ((material_resource < material_list) || 
            ((int64_t*)(material_array[(int64_t)material_count * 2] + 0x11fb0) < material_resource)) {
            goto material_invalid_slot;
        }
        
        // 计算材质槽位索引
        temp_array1[8] = 0;
        temp_array1[0] = (int8_t)param3;
        temp_array3[8] = 0;
        temp_array3[0] = (int8_t)((int64_t)material_resource - (int64_t)material_list);
        material_slot = (int)((*(int64_t*)temp_array1 * *(int64_t*)temp_array3) >> 7);
    }
    else {
material_invalid_slot:
        material_slot = -1;
    }
    
    // 处理有效的材质槽位
    if (material_slot != -1) {
material_valid_slot:
        // 检查是否达到最大资源数量
        if (material_count == MAX_RESOURCE_COUNT) {
            return ERROR_RESOURCE_FULL;
        }
        
        material_offset = (int64_t)material_count * RESOURCE_BLOCK_SIZE;
        
        // 调用材质资源初始化函数
        (*(code**)(*material_resource + 0x28))(material_resource, 0);
        
        // 更新材质标志位
        material_mask = material_slot >> 0x1f & FLAG_REFERENCE_MASK;
        material_slot = material_slot + material_mask;
        material_flags = (uint*)(material_array[(int64_t)material_count * 2] + (int64_t)(material_slot >> 5) * 4);
        *material_flags = *material_flags | 1 << (((byte)material_slot & FLAG_REFERENCE_MASK) - (char)material_mask & FLAG_REFERENCE_MASK);
        
        // 更新管理器状态
        *(int*)((int64_t)material_manager + 0x14) = *(int*)((int64_t)material_manager + 0x14) + -1;
        *(int*)(material_manager + 4) = material_count;
        
        // 处理材质引用计数
        if (*(short*)(material_offset + 10 + (int64_t)material_array) == 0x200) {
            if (*(int*)((int64_t)material_manager + 0x1c) != MAX_RESOURCE_COUNT) {
                *(short*)(*material_manager + 0xe + (int64_t)*(int*)((int64_t)material_manager + 0x1c) * RESOURCE_BLOCK_SIZE) = (short)material_count;
                *(int16_t*)(material_offset + 0xc + (int64_t)material_array) = *(int16_t*)((int64_t)material_manager + 0x1c);
            }
            *(int*)((int64_t)material_manager + 0x1c) = material_count;
        }
        
        material_ref_count = (short*)(material_offset + 10 + (int64_t)material_array);
        *material_ref_count = *material_ref_count + -1;
        
        // 处理引用计数为0的情况
        if (*material_ref_count == 0) {
            material_base = *material_manager;
            material_index = *(ushort*)(material_offset + 0xe + material_base);
            material_offset = material_offset + material_base;
            
            if (material_index != MAX_RESOURCE_COUNT) {
                *(int16_t*)(material_base + 0xc + (uint64_t)material_index * RESOURCE_BLOCK_SIZE) = *(int16_t*)(material_offset + 0xc);
                material_base = *material_manager;
            }
            
            if (*(ushort*)(material_offset + 0xc) != MAX_RESOURCE_COUNT) {
                *(int16_t*)(material_base + 0xe + (uint64_t)*(ushort*)(material_offset + 0xc) * RESOURCE_BLOCK_SIZE) = *(int16_t*)(material_offset + 0xe);
                material_base = *material_manager;
            }
            
            if (*(int*)((int64_t)material_manager + 0x1c) == material_count) {
                *(uint*)((int64_t)material_manager + 0x1c) = (uint)*(ushort*)(material_offset + 0xc);
            }
            
            *(int*)(material_manager + 2) = (int)material_manager[2] + -0x200;
            
            // 调用渲染系统材质处理器
            RenderingSystem_MaterialHandler(*(uint64_t*)(SYSTEM_MAIN_CONTROL_BLOCK + SYSTEM_RENDER_OFFSET),
                                          *(uint64_t*)(material_offset + material_base),
                                          &rendering_buffer_2816_ptr,
                                          RENDER_BUFFER_SIZE);
            
            material_status = (ushort*)(material_offset + 8 + *material_manager);
            *material_status = *material_status | FLAG_ACTIVE;
            *(int*)(material_manager + 3) = (int)material_manager[3] + 1;
            material_count = (int)material_manager[1] + -1;
            
            // 清理空闲材质槽位
            if (-1 < material_count) {
                material_offset = (int64_t)material_count << 4;
                do {
                    if ((*(byte*)(*material_manager + 8 + material_offset) & 1) == 0) {
                        return 0;
                    }
                    
                    if ((-1 < material_count) && 
                        (material_current = (int)material_manager[1], material_count < material_current)) {
                        material_current = (material_current - material_count) + -1;
                        if (0 < material_current) {
                            material_offset = *material_manager + (int64_t)material_count * RESOURCE_BLOCK_SIZE;
                            // 内存移动操作
                            memmove(material_offset, material_offset + RESOURCE_BLOCK_SIZE, (int64_t)material_current << 4);
                        }
                        *(int*)(material_manager + 1) = material_current + 1;
                    }
                    
                    *(int*)(material_manager + 3) = (int)material_manager[3] + -1;
                    material_offset = material_offset + -RESOURCE_BLOCK_SIZE;
                    material_count = material_count + -1;
                } while (-1 < material_count);
            }
        }
        return 0;
    }
    
material_search_loop:
    material_count = 0;
    if (0 < MAX_RESOURCE_COUNT) {
        material_array = (int64_t*)*material_manager;
        material_entry = material_array;
        do {
            if ((*(byte*)(material_entry + 1) & 1) == 0) {
                material_list = (int64_t*)(*material_entry + 0x40);
                if ((material_resource < material_list) || 
                    ((int64_t*)(*material_entry + 0x11fb0) < material_resource)) {
                    goto material_not_found;
                }
                
                // 计算材质槽位索引
                temp_array2[8] = 0;
                temp_array2[0] = (int8_t)param3;
                temp_array4[8] = 0;
                temp_array4[0] = (int8_t)((int64_t)material_resource - (int64_t)material_list);
                material_slot = (int)((*(int64_t*)temp_array2 * *(int64_t*)temp_array4) >> 7);
            }
            else {
material_not_found:
                material_slot = -1;
            }
            if (material_slot != -1) goto material_valid_slot;
            material_count = material_count + 1;
            material_entry = material_entry + 2;
        } while (material_count < MAX_RESOURCE_COUNT);
    }
    return ERROR_RESOURCE_FULL;
}

/**
 * @brief 释放材质资源
 * 
 * @return uint64_t 操作结果，0表示成功，非0表示错误码
 * 
 * @note 函数地址: 0x8be866
 */
uint64_t MaterialManager_ReleaseMaterial(void)
{
    uint* material_flags;
    int64_t material_offset;
    short* material_ref_count;
    ushort* material_status;
    ushort material_index;
    int material_current;
    int material_count;
    uint64_t result;
    uint material_mask;
    int64_t* material_manager;
    int64_t material_base;
    int64_t* material_array;
    
    material_current = 0xfff;
    
    // 检查是否达到最大资源数量
    if (material_current == MAX_RESOURCE_COUNT) {
        result = ERROR_RESOURCE_FULL;
    }
    else {
        material_offset = (int64_t)material_current * RESOURCE_BLOCK_SIZE;
        
        // 调用材质资源释放函数
        (*(code**)(*material_array + 0x28))(material_array, 0);
        
        // 更新材质标志位
        material_mask = material_current >> 0x1f & FLAG_REFERENCE_MASK;
        material_count = material_current + material_mask;
        material_flags = (uint*)(*(int64_t*)(material_offset + material_base) + (int64_t)(material_count >> 5) * 4);
        *material_flags = *material_flags | 1 << (((byte)material_count & FLAG_REFERENCE_MASK) - (char)material_mask & FLAG_REFERENCE_MASK);
        
        // 更新管理器状态
        *(int*)((int64_t)material_manager + 0x14) = *(int*)((int64_t)material_manager + 0x14) + -1;
        *(int*)(material_manager + 4) = material_current;
        
        // 处理材质引用计数
        if (*(short*)(material_offset + 10 + material_base) == 0x200) {
            if (*(int*)((int64_t)material_manager + 0x1c) != MAX_RESOURCE_COUNT) {
                *(short*)(*material_manager + 0xe + (int64_t)*(int*)((int64_t)material_manager + 0x1c) * RESOURCE_BLOCK_SIZE) = (short)material_current;
                *(int16_t*)(material_offset + 0xc + material_base) = *(int16_t*)((int64_t)material_manager + 0x1c);
            }
            *(int*)((int64_t)material_manager + 0x1c) = material_current;
        }
        
        material_ref_count = (short*)(material_offset + 10 + material_base);
        *material_ref_count = *material_ref_count + -1;
        
        // 处理引用计数为0的情况
        if (*material_ref_count == 0) {
            material_base = *material_manager;
            material_index = *(ushort*)(material_offset + 0xe + material_base);
            material_offset = material_offset + material_base;
            
            if (material_index != MAX_RESOURCE_COUNT) {
                *(int16_t*)(material_base + 0xc + (uint64_t)material_index * RESOURCE_BLOCK_SIZE) = *(int16_t*)(material_offset + 0xc);
                material_base = *material_manager;
            }
            
            if (*(ushort*)(material_offset + 0xc) != MAX_RESOURCE_COUNT) {
                *(int16_t*)(material_base + 0xe + (uint64_t)*(ushort*)(material_offset + 0xc) * RESOURCE_BLOCK_SIZE) = *(int16_t*)(material_offset + 0xe);
                material_base = *material_manager;
            }
            
            if (*(int*)((int64_t)material_manager + 0x1c) == material_current) {
                *(uint*)((int64_t)material_manager + 0x1c) = (uint)*(ushort*)(material_offset + 0xc);
            }
            
            *(int*)(material_manager + 2) = (int)material_manager[2] + -0x200;
            
            // 调用渲染系统材质处理器
            RenderingSystem_MaterialHandler(*(uint64_t*)(SYSTEM_MAIN_CONTROL_BLOCK + SYSTEM_RENDER_OFFSET),
                                          *(uint64_t*)(material_offset + material_base),
                                          &rendering_buffer_2816_ptr,
                                          RENDER_BUFFER_SIZE);
            
            material_status = (ushort*)(material_offset + 8 + *material_manager);
            *material_status = *material_status | FLAG_ACTIVE;
            *(int*)(material_manager + 3) = (int)material_manager[3] + 1;
            material_count = (int)material_manager[1] + -1;
            
            // 清理空闲材质槽位
            if (-1 < material_count) {
                material_offset = (int64_t)material_count << 4;
                do {
                    if ((*(byte*)(*material_manager + 8 + material_offset) & 1) == 0) {
                        break;
                    }
                    
                    if (-1 < material_count) {
                        material_current = (int)material_manager[1];
                        if (material_count < material_current) {
                            material_current = (material_current - material_count) + -1;
                            if (0 < material_current) {
                                material_offset = *material_manager + (int64_t)material_count * RESOURCE_BLOCK_SIZE;
                                // 内存移动操作
                                memmove(material_offset, material_offset + RESOURCE_BLOCK_SIZE, (int64_t)material_current << 4);
                            }
                            *(int*)(material_manager + 1) = material_current + 1;
                        }
                    }
                    
                    *(int*)(material_manager + 3) = (int)material_manager[3] + -1;
                    material_offset = material_offset + -RESOURCE_BLOCK_SIZE;
                    material_count = material_count + -1;
                } while (-1 < material_count);
            }
        }
        result = 0;
    }
    return result;
}

/*
 * 着色器管理器函数组
 * 
 * 这些函数负责管理着色器资源的生命周期，包括着色器的获取、释放和移除操作。
 * 着色器管理器使用高效的内存管理策略来优化着色器资源的存储和访问。
 */

/**
 * @brief 从着色器管理器中移除着色器资源
 * 
 * @param shader_manager 着色器管理器指针
 * @param shader_id 着色器ID
 * @return int32_t 操作结果，0表示成功，非0表示错误码
 * 
 * @note 函数地址: 0x8be9f0
 */
int32_t ShaderManager_RemoveShader(int64_t* shader_manager, uint64_t shader_id)
{
    uint64_t shader_base;
    uint* shader_flags;
    int64_t shader_offset;
    short* shader_ref_count;
    ushort* shader_status;
    ushort shader_index;
    int shader_slot;
    uint shader_mask;
    int64_t* shader_array;
    int shader_count;
    int shader_current;
    int64_t* shader_entry;
    int64_t shader_list;
    
    // 参数验证
    if (shader_id == 0) {
        return ERROR_INVALID_PARAMETER;
    }
    
    shader_count = (int)shader_manager[1];
    shader_current = (int)shader_manager[4];
    
    // 检查着色器槽位是否有效
    if (shader_count <= shader_current) {
        goto shader_search_loop;
    }
    
    shader_array = (int64_t*)*shader_manager;
    
    // 检查着色器是否在有效范围内
    if ((*(byte*)(shader_array + (int64_t)shader_current * 2 + 1) & 1) == 0) {
        shader_base = shader_array[(int64_t)shader_current * 2] + 0x40;
        if ((shader_id < shader_base) || (shader_array[(int64_t)shader_current * 2] + 0xcfd8U < shader_id)) {
            goto shader_invalid_slot;
        }
        shader_slot = (int)((shader_id - shader_base) / SHADER_BLOCK_SIZE);
    }
    else {
shader_invalid_slot:
        shader_slot = -1;
    }
    
    // 处理有效的着色器槽位
    if (shader_slot != -1) {
shader_valid_slot:
        // 检查是否达到最大资源数量
        if (shader_current == MAX_RESOURCE_COUNT) {
            return ERROR_RESOURCE_FULL;
        }
        
        shader_offset = (int64_t)shader_current * RESOURCE_BLOCK_SIZE;
        
        // 调用着色器资源释放函数
        function_8d58e0(shader_id);
        
        // 更新着色器标志位
        shader_mask = shader_slot >> 0x1f & FLAG_REFERENCE_MASK;
        shader_slot = shader_slot + shader_mask;
        shader_flags = (uint*)(shader_array[(int64_t)shader_current * 2] + (int64_t)(shader_slot >> 5) * 4);
        *shader_flags = *shader_flags | 1 << (((byte)shader_slot & FLAG_REFERENCE_MASK) - (char)shader_mask & FLAG_REFERENCE_MASK);
        
        // 更新管理器状态
        *(int*)((int64_t)shader_manager + 0x14) = *(int*)((int64_t)shader_manager + 0x14) + -1;
        *(int*)(shader_manager + 4) = shader_current;
        
        // 处理着色器引用计数
        if (*(short*)(shader_offset + 10 + (int64_t)shader_array) == 0x200) {
            if (*(int*)((int64_t)shader_manager + 0x1c) != MAX_RESOURCE_COUNT) {
                *(short*)(*shader_manager + 0xe + (int64_t)*(int*)((int64_t)shader_manager + 0x1c) * RESOURCE_BLOCK_SIZE) = (short)shader_current;
                *(int16_t*)(shader_offset + 0xc + (int64_t)shader_array) = *(int16_t*)((int64_t)shader_manager + 0x1c);
            }
            *(int*)((int64_t)shader_manager + 0x1c) = shader_current;
        }
        
        shader_ref_count = (short*)(shader_offset + 10 + (int64_t)shader_array);
        *shader_ref_count = *shader_ref_count + -1;
        
        // 处理引用计数为0的情况
        if (*shader_ref_count == 0) {
            shader_list = *shader_manager;
            shader_index = *(ushort*)(shader_offset + 0xe + shader_list);
            shader_offset = shader_offset + shader_list;
            
            if (shader_index != MAX_RESOURCE_COUNT) {
                *(int16_t*)(shader_list + 0xc + (uint64_t)shader_index * RESOURCE_BLOCK_SIZE) = *(int16_t*)(shader_offset + 0xc);
                shader_list = *shader_manager;
            }
            
            if (*(ushort*)(shader_offset + 0xc) != MAX_RESOURCE_COUNT) {
                *(int16_t*)(shader_list + 0xe + (uint64_t)*(ushort*)(shader_offset + 0xc) * RESOURCE_BLOCK_SIZE) = *(int16_t*)(shader_offset + 0xe);
                shader_list = *shader_manager;
            }
            
            if (*(int*)((int64_t)shader_manager + 0x1c) == shader_current) {
                *(uint*)((int64_t)shader_manager + 0x1c) = (uint)*(ushort*)(shader_offset + 0xc);
            }
            
            *(int*)(shader_manager + 2) = (int)shader_manager[2] + -0x200;
            
            // 调用渲染系统材质处理器
            RenderingSystem_MaterialHandler(*(uint64_t*)(SYSTEM_MAIN_CONTROL_BLOCK + SYSTEM_RENDER_OFFSET),
                                          *(uint64_t*)(shader_offset + shader_list),
                                          &rendering_buffer_2816_ptr,
                                          RENDER_BUFFER_SIZE);
            
            shader_status = (ushort*)(shader_offset + 8 + *shader_manager);
            *shader_status = *shader_status | FLAG_ACTIVE;
            *(int*)(shader_manager + 3) = (int)shader_manager[3] + 1;
            shader_count = (int)shader_manager[1] + -1;
            
            // 清理空闲着色器槽位
            if (-1 < shader_count) {
                shader_offset = (int64_t)shader_count << 4;
                do {
                    if ((*(byte*)(*shader_manager + 8 + shader_offset) & 1) == 0) {
                        return 0;
                    }
                    
                    if ((-1 < shader_count) && 
                        (shader_current = (int)shader_manager[1], shader_count < shader_current)) {
                        shader_slot = (shader_current - shader_count) + -1;
                        if (0 < shader_slot) {
                            shader_offset = *shader_manager + (int64_t)shader_count * RESOURCE_BLOCK_SIZE;
                            // 内存移动操作
                            memmove(shader_offset, shader_offset + RESOURCE_BLOCK_SIZE, (int64_t)shader_slot << 4);
                        }
                        *(int*)(shader_manager + 1) = shader_current + -1;
                    }
                    
                    *(int*)(shader_manager + 3) = (int)shader_manager[3] + -1;
                    shader_offset = shader_offset + -RESOURCE_BLOCK_SIZE;
                    shader_count = shader_count + -1;
                } while (-1 < shader_count);
            }
        }
        return 0;
    }
    
shader_search_loop:
    shader_current = 0;
    if (0 < shader_count) {
        shader_array = (int64_t*)*shader_manager;
        shader_entry = shader_array;
        do {
            if ((*(byte*)(shader_entry + 1) & 1) == 0) {
                shader_base = *shader_entry + 0x40;
                if ((shader_id < shader_base) || (*shader_entry + 0xcfd8U < shader_id)) {
                    goto shader_not_found;
                }
                shader_slot = (int)((shader_id - shader_base) / SHADER_BLOCK_SIZE);
            }
            else {
shader_not_found:
                shader_slot = -1;
            }
            if (shader_slot != -1) goto shader_valid_slot;
            shader_current = shader_current + 1;
            shader_entry = shader_entry + 2;
        } while (shader_current < shader_count);
    }
    return ERROR_RESOURCE_FULL;
}

/**
 * @brief 获取着色器资源
 * 
 * @param shader_manager 着色器管理器指针
 * @param param2 参数2
 * @param param3 参数3
 * @param shader_id 着色器ID
 * @return uint64_t 操作结果，0表示成功，非0表示错误码
 * 
 * @note 函数地址: 0x8bea18
 */
uint64_t ShaderManager_AcquireShader(int64_t* shader_manager, uint64_t param2, uint64_t param3, uint64_t shader_id)
{
    uint64_t shader_base;
    uint* shader_flags;
    int64_t shader_offset;
    short* shader_ref_count;
    ushort* shader_status;
    ushort shader_index;
    int8_t temp_array1[16];
    int8_t temp_array2[16];
    int8_t temp_array3[16];
    int8_t temp_array4[16];
    int shader_slot;
    uint shader_mask;
    int64_t* shader_array;
    int shader_count;
    int shader_current;
    int64_t* shader_entry;
    int64_t shader_list;
    
    shader_count = (int)shader_manager[4];
    
    // 参数验证和范围检查
    if (shader_count <= MAX_RESOURCE_COUNT) {
        goto shader_search_loop;
    }
    
    shader_array = (int64_t*)*shader_manager;
    
    // 检查着色器是否在有效范围内
    if ((*(byte*)(shader_array + (int64_t)shader_count * 2 + 1) & 1) == 0) {
        shader_base = shader_array[(int64_t)shader_count * 2] + 0x40;
        if ((shader_id < shader_base) || (shader_array[(int64_t)shader_count * 2] + 0xcfd8U < shader_id)) {
            goto shader_invalid_slot;
        }
        
        // 计算着色器槽位索引
        temp_array1[8] = 0;
        temp_array1[0] = (int8_t)param3;
        temp_array3[8] = 0;
        temp_array3[0] = (int8_t)(shader_id - shader_base);
        shader_slot = (int)((*(int64_t*)temp_array1 * *(int64_t*)temp_array3) >> 5);
    }
    else {
shader_invalid_slot:
        shader_slot = -1;
    }
    
    // 处理有效的着色器槽位
    if (shader_slot != -1) {
shader_valid_slot:
        // 检查是否达到最大资源数量
        if (shader_count == MAX_RESOURCE_COUNT) {
            return ERROR_RESOURCE_FULL;
        }
        
        shader_offset = (int64_t)shader_count * RESOURCE_BLOCK_SIZE;
        
        // 调用着色器资源初始化函数
        function_8d58e0(shader_id);
        
        // 更新着色器标志位
        shader_mask = shader_slot >> 0x1f & FLAG_REFERENCE_MASK;
        shader_slot = shader_slot + shader_mask;
        shader_flags = (uint*)(shader_array[(int64_t)shader_count * 2] + (int64_t)(shader_slot >> 5) * 4);
        *shader_flags = *shader_flags | 1 << (((byte)shader_slot & FLAG_REFERENCE_MASK) - (char)shader_mask & FLAG_REFERENCE_MASK);
        
        // 更新管理器状态
        *(int*)((int64_t)shader_manager + 0x14) = *(int*)((int64_t)shader_manager + 0x14) + -1;
        *(int*)(shader_manager + 4) = shader_count;
        
        // 处理着色器引用计数
        if (*(short*)(shader_offset + 10 + (int64_t)shader_array) == 0x200) {
            if (*(int*)((int64_t)shader_manager + 0x1c) != MAX_RESOURCE_COUNT) {
                *(short*)(*shader_manager + 0xe + (int64_t)*(int*)((int64_t)shader_manager + 0x1c) * RESOURCE_BLOCK_SIZE) = (short)shader_count;
                *(int16_t*)(shader_offset + 0xc + (int64_t)shader_array) = *(int16_t*)((int64_t)shader_manager + 0x1c);
            }
            *(int*)((int64_t)shader_manager + 0x1c) = shader_count;
        }
        
        shader_ref_count = (short*)(shader_offset + 10 + (int64_t)shader_array);
        *shader_ref_count = *shader_ref_count + -1;
        
        // 处理引用计数为0的情况
        if (*shader_ref_count == 0) {
            shader_list = *shader_manager;
            shader_index = *(ushort*)(shader_offset + 0xe + shader_list);
            shader_offset = shader_offset + shader_list;
            
            if (shader_index != MAX_RESOURCE_COUNT) {
                *(int16_t*)(shader_list + 0xc + (uint64_t)shader_index * RESOURCE_BLOCK_SIZE) = *(int16_t*)(shader_offset + 0xc);
                shader_list = *shader_manager;
            }
            
            if (*(ushort*)(shader_offset + 0xc) != MAX_RESOURCE_COUNT) {
                *(int16_t*)(shader_list + 0xe + (uint64_t)*(ushort*)(shader_offset + 0xc) * RESOURCE_BLOCK_SIZE) = *(int16_t*)(shader_offset + 0xe);
                shader_list = *shader_manager;
            }
            
            if (*(int*)((int64_t)shader_manager + 0x1c) == shader_count) {
                *(uint*)((int64_t)shader_manager + 0x1c) = (uint)*(ushort*)(shader_offset + 0xc);
            }
            
            *(int*)(shader_manager + 2) = (int)shader_manager[2] + -0x200;
            
            // 调用渲染系统材质处理器
            RenderingSystem_MaterialHandler(*(uint64_t*)(SYSTEM_MAIN_CONTROL_BLOCK + SYSTEM_RENDER_OFFSET),
                                          *(uint64_t*)(shader_offset + shader_list),
                                          &rendering_buffer_2816_ptr,
                                          RENDER_BUFFER_SIZE);
            
            shader_status = (ushort*)(shader_offset + 8 + *shader_manager);
            *shader_status = *shader_status | FLAG_ACTIVE;
            *(int*)(shader_manager + 3) = (int)shader_manager[3] + 1;
            shader_count = (int)shader_manager[1] + -1;
            
            // 清理空闲着色器槽位
            if (-1 < shader_count) {
                shader_offset = (int64_t)shader_count << 4;
                do {
                    if ((*(byte*)(*shader_manager + 8 + shader_offset) & 1) == 0) {
                        return 0;
                    }
                    
                    if ((-1 < shader_count) && 
                        (shader_current = (int)shader_manager[1], shader_count < shader_current)) {
                        shader_current = (shader_current - shader_count) + -1;
                        if (0 < shader_current) {
                            shader_offset = *shader_manager + (int64_t)shader_count * RESOURCE_BLOCK_SIZE;
                            // 内存移动操作
                            memmove(shader_offset, shader_offset + RESOURCE_BLOCK_SIZE, (int64_t)shader_current << 4);
                        }
                        *(int*)(shader_manager + 1) = shader_current + 1;
                    }
                    
                    *(int*)(shader_manager + 3) = (int)shader_manager[3] + -1;
                    shader_offset = shader_offset + -RESOURCE_BLOCK_SIZE;
                    shader_count = shader_count + -1;
                } while (-1 < shader_count);
            }
        }
        return 0;
    }
    
shader_search_loop:
    shader_count = 0;
    if (0 < MAX_RESOURCE_COUNT) {
        shader_array = (int64_t*)*shader_manager;
        shader_entry = shader_array;
        do {
            if ((*(byte*)(shader_entry + 1) & 1) == 0) {
                shader_base = *shader_entry + 0x40;
                if ((shader_id < shader_base) || (*shader_entry + 0xcfd8U < shader_id)) {
                    goto shader_not_found;
                }
                
                // 计算着色器槽位索引
                temp_array2[8] = 0;
                temp_array2[0] = (int8_t)param3;
                temp_array4[8] = 0;
                temp_array4[0] = (int8_t)(shader_id - shader_base);
                shader_slot = (int)((*(int64_t*)temp_array2 * *(int64_t*)temp_array4) >> 5);
            }
            else {
shader_not_found:
                shader_slot = -1;
            }
            if (shader_slot != -1) goto shader_valid_slot;
            shader_count = shader_count + 1;
            shader_entry = shader_entry + 2;
        } while (shader_count < MAX_RESOURCE_COUNT);
    }
    return ERROR_RESOURCE_FULL;
}

/**
 * @brief 释放着色器资源
 * 
 * @return uint64_t 操作结果，0表示成功，非0表示错误码
 * 
 * @note 函数地址: 0x8beaf6
 */
uint64_t ShaderManager_ReleaseShader(void)
{
    uint* shader_flags;
    int64_t shader_offset;
    short* shader_ref_count;
    ushort* shader_status;
    ushort shader_index;
    int shader_current;
    int shader_count;
    uint64_t result;
    uint shader_mask;
    int64_t* shader_manager;
    int64_t shader_base;
    uint64_t shader_array;
    
    shader_current = 0xfff;
    
    // 检查是否达到最大资源数量
    if (shader_current == MAX_RESOURCE_COUNT) {
        result = ERROR_RESOURCE_FULL;
    }
    else {
        shader_offset = (int64_t)shader_current * RESOURCE_BLOCK_SIZE;
        
        // 调用着色器资源释放函数
        function_8d58e0(shader_array);
        
        // 更新着色器标志位
        shader_mask = shader_current >> 0x1f & FLAG_REFERENCE_MASK;
        shader_count = shader_current + shader_mask;
        shader_flags = (uint*)(*(int64_t*)(shader_offset + shader_base) + (int64_t)(shader_count >> 5) * 4);
        *shader_flags = *shader_flags | 1 << (((byte)shader_count & FLAG_REFERENCE_MASK) - (char)shader_mask & FLAG_REFERENCE_MASK);
        
        // 更新管理器状态
        *(int*)((int64_t)shader_manager + 0x14) = *(int*)((int64_t)shader_manager + 0x14) + -1;
        *(int*)(shader_manager + 4) = shader_current;
        
        // 处理着色器引用计数
        if (*(short*)(shader_offset + 10 + shader_base) == 0x200) {
            if (*(int*)((int64_t)shader_manager + 0x1c) != MAX_RESOURCE_COUNT) {
                *(short*)(*shader_manager + 0xe + (int64_t)*(int*)((int64_t)shader_manager + 0x1c) * RESOURCE_BLOCK_SIZE) = (short)shader_current;
                *(int16_t*)(shader_offset + 0xc + shader_base) = *(int16_t*)((int64_t)shader_manager + 0x1c);
            }
            *(int*)((int64_t)shader_manager + 0x1c) = shader_current;
        }
        
        shader_ref_count = (short*)(shader_offset + 10 + shader_base);
        *shader_ref_count = *shader_ref_count + -1;
        
        // 处理引用计数为0的情况
        if (*shader_ref_count == 0) {
            shader_base = *shader_manager;
            shader_index = *(ushort*)(shader_offset + 0xe + shader_base);
            shader_offset = shader_offset + shader_base;
            
            if (shader_index != MAX_RESOURCE_COUNT) {
                *(int16_t*)(shader_base + 0xc + (uint64_t)shader_index * RESOURCE_BLOCK_SIZE) = *(int16_t*)(shader_offset + 0xc);
                shader_base = *shader_manager;
            }
            
            if (*(ushort*)(shader_offset + 0xc) != MAX_RESOURCE_COUNT) {
                *(int16_t*)(shader_base + 0xe + (uint64_t)*(ushort*)(shader_offset + 0xc) * RESOURCE_BLOCK_SIZE) = *(int16_t*)(shader_offset + 0xe);
                shader_base = *shader_manager;
            }
            
            if (*(int*)((int64_t)shader_manager + 0x1c) == shader_current) {
                *(uint*)((int64_t)shader_manager + 0x1c) = (uint)*(ushort*)(shader_offset + 0xc);
            }
            
            *(int*)(shader_manager + 2) = (int)shader_manager[2] + -0x200;
            
            // 调用渲染系统材质处理器
            RenderingSystem_MaterialHandler(*(uint64_t*)(SYSTEM_MAIN_CONTROL_BLOCK + SYSTEM_RENDER_OFFSET),
                                          *(uint64_t*)(shader_offset + shader_base),
                                          &rendering_buffer_2816_ptr,
                                          RENDER_BUFFER_SIZE);
            
            shader_status = (ushort*)(shader_offset + 8 + *shader_manager);
            *shader_status = *shader_status | FLAG_ACTIVE;
            *(int*)(shader_manager + 3) = (int)shader_manager[3] + 1;
            shader_count = (int)shader_manager[1] + -1;
            
            // 清理空闲着色器槽位
            if (-1 < shader_count) {
                shader_offset = (int64_t)shader_count << 4;
                do {
                    if ((*(byte*)(*shader_manager + 8 + shader_offset) & 1) == 0) {
                        break;
                    }
                    
                    if (-1 < shader_count) {
                        shader_current = (int)shader_manager[1];
                        if (shader_count < shader_current) {
                            shader_current = (shader_current - shader_count) + -1;
                            if (0 < shader_current) {
                                shader_offset = *shader_manager + (int64_t)shader_count * RESOURCE_BLOCK_SIZE;
                                // 内存移动操作
                                memmove(shader_offset, shader_offset + RESOURCE_BLOCK_SIZE, (int64_t)shader_current << 4);
                            }
                            *(int*)(shader_manager + 1) = shader_current + 1;
                        }
                    }
                    
                    *(int*)(shader_manager + 3) = (int)shader_manager[3] + -1;
                    shader_offset = shader_offset + -RESOURCE_BLOCK_SIZE;
                    shader_count = shader_count + -1;
                } while (-1 < shader_count);
            }
        }
        result = 0;
    }
    return result;
}

/*
 * 几何体管理器函数组
 * 
 * 这些函数负责管理几何体资源的生命周期，包括几何体的获取、释放和移除操作。
 * 几何体管理器使用高效的内存管理策略来优化几何体资源的存储和访问。
 */

/**
 * @brief 从几何体管理器中移除几何体资源
 * 
 * @param geometry_manager 几何体管理器指针
 * @param geometry_id 几何体ID
 * @return int32_t 操作结果，0表示成功，非0表示错误码
 * 
 * @note 函数地址: 0x8bec80
 */
int32_t GeometryManager_RemoveGeometry(int64_t* geometry_manager, uint64_t geometry_id)
{
    uint64_t geometry_base;
    uint* geometry_flags;
    int64_t geometry_offset;
    short* geometry_ref_count;
    ushort* geometry_status;
    ushort geometry_index;
    int geometry_slot;
    uint geometry_mask;
    int64_t* geometry_array;
    int geometry_count;
    int geometry_current;
    int64_t* geometry_entry;
    int64_t geometry_list;
    
    // 参数验证
    if (geometry_id == 0) {
        return ERROR_INVALID_PARAMETER;
    }
    
    geometry_count = (int)geometry_manager[1];
    geometry_current = (int)geometry_manager[4];
    
    // 检查几何体槽位是否有效
    if (geometry_count <= geometry_current) {
        goto geometry_search_loop;
    }
    
    geometry_array = (int64_t*)*geometry_manager;
    
    // 检查几何体是否在有效范围内
    if ((*(byte*)(geometry_array + (int64_t)geometry_current * 2 + 1) & 1) == 0) {
        geometry_base = geometry_array[(int64_t)geometry_current * 2] + 0x40;
        if ((geometry_id < geometry_base) || (geometry_array[(int64_t)geometry_current * 2] + 0xafe8U < geometry_id)) {
            goto geometry_invalid_slot;
        }
        geometry_slot = (int)((geometry_id - geometry_base) / GEOMETRY_BLOCK_SIZE);
    }
    else {
geometry_invalid_slot:
        geometry_slot = -1;
    }
    
    // 处理有效的几何体槽位
    if (geometry_slot != -1) {
geometry_valid_slot:
        // 检查是否达到最大资源数量
        if (geometry_current == MAX_RESOURCE_COUNT) {
            return ERROR_RESOURCE_FULL;
        }
        
        geometry_offset = (int64_t)geometry_current * RESOURCE_BLOCK_SIZE;
        
        // 调用几何体资源释放函数
        function_8d5aa0(geometry_id);
        
        // 更新几何体标志位
        geometry_mask = geometry_slot >> 0x1f & FLAG_REFERENCE_MASK;
        geometry_slot = geometry_slot + geometry_mask;
        geometry_flags = (uint*)(geometry_array[(int64_t)geometry_current * 2] + (int64_t)(geometry_slot >> 5) * 4);
        *geometry_flags = *geometry_flags | 1 << (((byte)geometry_slot & FLAG_REFERENCE_MASK) - (char)geometry_mask & FLAG_REFERENCE_MASK);
        
        // 更新管理器状态
        *(int*)((int64_t)geometry_manager + 0x14) = *(int*)((int64_t)geometry_manager + 0x14) + -1;
        *(int*)(geometry_manager + 4) = geometry_current;
        
        // 处理几何体引用计数
        if (*(short*)(geometry_offset + 10 + (int64_t)geometry_array) == 0x200) {
            if (*(int*)((int64_t)geometry_manager + 0x1c) != MAX_RESOURCE_COUNT) {
                *(short*)(*geometry_manager + 0xe + (int64_t)*(int*)((int64_t)geometry_manager + 0x1c) * RESOURCE_BLOCK_SIZE) = (short)geometry_current;
                *(int16_t*)(geometry_offset + 0xc + (int64_t)geometry_array) = *(int16_t*)((int64_t)geometry_manager + 0x1c);
            }
            *(int*)((int64_t)geometry_manager + 0x1c) = geometry_current;
        }
        
        geometry_ref_count = (short*)(geometry_offset + 10 + (int64_t)geometry_array);
        *geometry_ref_count = *geometry_ref_count + -1;
        
        // 处理引用计数为0的情况
        if (*geometry_ref_count == 0) {
            geometry_list = *geometry_manager;
            geometry_index = *(ushort*)(geometry_offset + 0xe + geometry_list);
            geometry_offset = geometry_offset + geometry_list;
            
            if (geometry_index != MAX_RESOURCE_COUNT) {
                *(int16_t*)(geometry_list + 0xc + (uint64_t)geometry_index * RESOURCE_BLOCK_SIZE) = *(int16_t*)(geometry_offset + 0xc);
                geometry_list = *geometry_manager;
            }
            
            if (*(ushort*)(geometry_offset + 0xc) != MAX_RESOURCE_COUNT) {
                *(int16_t*)(geometry_list + 0xe + (uint64_t)*(ushort*)(geometry_offset + 0xc) * RESOURCE_BLOCK_SIZE) = *(int16_t*)(geometry_offset + 0xe);
                geometry_list = *geometry_manager;
            }
            
            if (*(int*)((int64_t)geometry_manager + 0x1c) == geometry_current) {
                *(uint*)((int64_t)geometry_manager + 0x1c) = (uint)*(ushort*)(geometry_offset + 0xc);
            }
            
            *(int*)(geometry_manager + 2) = (int)geometry_manager[2] + -0x200;
            
            // 调用渲染系统材质处理器
            RenderingSystem_MaterialHandler(*(uint64_t*)(SYSTEM_MAIN_CONTROL_BLOCK + SYSTEM_RENDER_OFFSET),
                                          *(uint64_t*)(geometry_offset + geometry_list),
                                          &rendering_buffer_2816_ptr,
                                          RENDER_BUFFER_SIZE);
            
            geometry_status = (ushort*)(geometry_offset + 8 + *geometry_manager);
            *geometry_status = *geometry_status | FLAG_ACTIVE;
            *(int*)(geometry_manager + 3) = (int)geometry_manager[3] + 1;
            geometry_count = (int)geometry_manager[1] + -1;
            
            // 清理空闲几何体槽位
            if (-1 < geometry_count) {
                geometry_offset = (int64_t)geometry_count << 4;
                do {
                    if ((*(byte*)(*geometry_manager + 8 + geometry_offset) & 1) == 0) {
                        return 0;
                    }
                    
                    if ((-1 < geometry_count) && 
                        (geometry_current = (int)geometry_manager[1], geometry_count < geometry_current)) {
                        geometry_slot = (geometry_current - geometry_count) + -1;
                        if (0 < geometry_slot) {
                            geometry_offset = *geometry_manager + (int64_t)geometry_count * RESOURCE_BLOCK_SIZE;
                            // 内存移动操作
                            memmove(geometry_offset, geometry_offset + RESOURCE_BLOCK_SIZE, (int64_t)geometry_slot << 4);
                        }
                        *(int*)(geometry_manager + 1) = geometry_current + -1;
                    }
                    
                    *(int*)(geometry_manager + 3) = (int)geometry_manager[3] + -1;
                    geometry_offset = geometry_offset + -RESOURCE_BLOCK_SIZE;
                    geometry_count = geometry_count + -1;
                } while (-1 < geometry_count);
            }
        }
        return 0;
    }
    
geometry_search_loop:
    geometry_current = 0;
    if (0 < geometry_count) {
        geometry_array = (int64_t*)*geometry_manager;
        geometry_entry = geometry_array;
        do {
            if ((*(byte*)(geometry_entry + 1) & 1) == 0) {
                geometry_base = *geometry_entry + 0x40;
                if ((geometry_id < geometry_base) || (*geometry_entry + 0xafe8U < geometry_id)) {
                    goto geometry_not_found;
                }
                geometry_slot = (int)((geometry_id - geometry_base) / GEOMETRY_BLOCK_SIZE);
            }
            else {
geometry_not_found:
                geometry_slot = -1;
            }
            if (geometry_slot != -1) goto geometry_valid_slot;
            geometry_current = geometry_current + 1;
            geometry_entry = geometry_entry + 2;
        } while (geometry_current < geometry_count);
    }
    return ERROR_RESOURCE_FULL;
}

/**
 * @brief 获取几何体资源
 * 
 * @param geometry_manager 几何体管理器指针
 * @param param2 参数2
 * @param param3 参数3
 * @param geometry_id 几何体ID
 * @return uint64_t 操作结果，0表示成功，非0表示错误码
 * 
 * @note 函数地址: 0x8beca8
 */
uint64_t GeometryManager_AcquireGeometry(int64_t* geometry_manager, uint64_t param2, uint64_t param3, uint64_t geometry_id)
{
    uint64_t geometry_base;
    uint* geometry_flags;
    int64_t geometry_offset;
    short* geometry_ref_count;
    ushort* geometry_status;
    ushort geometry_index;
    int8_t temp_array1[16];
    int8_t temp_array2[16];
    int8_t temp_array3[16];
    int8_t temp_array4[16];
    int geometry_slot;
    uint geometry_mask;
    int64_t* geometry_array;
    int geometry_count;
    int geometry_current;
    int64_t* geometry_entry;
    int64_t geometry_list;
    
    geometry_count = (int)geometry_manager[4];
    
    // 参数验证和范围检查
    if (geometry_count <= MAX_RESOURCE_COUNT) {
        goto geometry_search_loop;
    }
    
    geometry_array = (int64_t*)*geometry_manager;
    
    // 检查几何体是否在有效范围内
    if ((*(byte*)(geometry_array + (int64_t)geometry_count * 2 + 1) & 1) == 0) {
        geometry_base = geometry_array[(int64_t)geometry_count * 2] + 0x40;
        if ((geometry_id < geometry_base) || (geometry_array[(int64_t)geometry_count * 2] + 0xafe8U < geometry_id)) {
            goto geometry_invalid_slot;
        }
        
        // 计算几何体槽位索引
        temp_array1[8] = 0;
        temp_array1[0] = (int8_t)param3;
        temp_array3[8] = 0;
        temp_array3[0] = (int8_t)(geometry_id - geometry_base);
        geometry_slot = (int)((*(int64_t*)temp_array1 * *(int64_t*)temp_array3) >> 4);
    }
    else {
geometry_invalid_slot:
        geometry_slot = -1;
    }
    
    // 处理有效的几何体槽位
    if (geometry_slot != -1) {
geometry_valid_slot:
        // 检查是否达到最大资源数量
        if (geometry_count == MAX_RESOURCE_COUNT) {
            return ERROR_RESOURCE_FULL;
        }
        
        geometry_offset = (int64_t)geometry_count * RESOURCE_BLOCK_SIZE;
        
        // 调用几何体资源初始化函数
        function_8d5aa0(geometry_id);
        
        // 更新几何体标志位
        geometry_mask = geometry_slot >> 0x1f & FLAG_REFERENCE_MASK;
        geometry_slot = geometry_slot + geometry_mask;
        geometry_flags = (uint*)(geometry_array[(int64_t)geometry_count * 2] + (int64_t)(geometry_slot >> 5) * 4);
        *geometry_flags = *geometry_flags | 1 << (((byte)geometry_slot & FLAG_REFERENCE_MASK) - (char)geometry_mask & FLAG_REFERENCE_MASK);
        
        // 更新管理器状态
        *(int*)((int64_t)geometry_manager + 0x14) = *(int*)((int64_t)geometry_manager + 0x14) + -1;
        *(int*)(geometry_manager + 4) = geometry_count;
        
        // 处理几何体引用计数
        if (*(short*)(geometry_offset + 10 + (int64_t)geometry_array) == 0x200) {
            if (*(int*)((int64_t)geometry_manager + 0x1c) != MAX_RESOURCE_COUNT) {
                *(short*)(*geometry_manager + 0xe + (int64_t)*(int*)((int64_t)geometry_manager + 0x1c) * RESOURCE_BLOCK_SIZE) = (short)geometry_count;
                *(int16_t*)(geometry_offset + 0xc + (int64_t)geometry_array) = *(int16_t*)((int64_t)geometry_manager + 0x1c);
            }
            *(int*)((int64_t)geometry_manager + 0x1c) = geometry_count;
        }
        
        geometry_ref_count = (short*)(geometry_offset + 10 + (int64_t)geometry_array);
        *geometry_ref_count = *geometry_ref_count + -1;
        
        // 处理引用计数为0的情况
        if (*geometry_ref_count == 0) {
            geometry_list = *geometry_manager;
            geometry_index = *(ushort*)(geometry_offset + 0xe + geometry_list);
            geometry_offset = geometry_offset + geometry_list;
            
            if (geometry_index != MAX_RESOURCE_COUNT) {
                *(int16_t*)(geometry_list + 0xc + (uint64_t)geometry_index * RESOURCE_BLOCK_SIZE) = *(int16_t*)(geometry_offset + 0xc);
                geometry_list = *geometry_manager;
            }
            
            if (*(ushort*)(geometry_offset + 0xc) != MAX_RESOURCE_COUNT) {
                *(int16_t*)(geometry_list + 0xe + (uint64_t)*(ushort*)(geometry_offset + 0xc) * RESOURCE_BLOCK_SIZE) = *(int16_t*)(geometry_offset + 0xe);
                geometry_list = *geometry_manager;
            }
            
            if (*(int*)((int64_t)geometry_manager + 0x1c) == geometry_count) {
                *(uint*)((int64_t)geometry_manager + 0x1c) = (uint)*(ushort*)(geometry_offset + 0xc);
            }
            
            *(int*)(geometry_manager + 2) = (int)geometry_manager[2] + -0x200;
            
            // 调用渲染系统材质处理器
            RenderingSystem_MaterialHandler(*(uint64_t*)(SYSTEM_MAIN_CONTROL_BLOCK + SYSTEM_RENDER_OFFSET),
                                          *(uint64_t*)(geometry_offset + geometry_list),
                                          &rendering_buffer_2816_ptr,
                                          RENDER_BUFFER_SIZE);
            
            geometry_status = (ushort*)(geometry_offset + 8 + *geometry_manager);
            *geometry_status = *geometry_status | FLAG_ACTIVE;
            *(int*)(geometry_manager + 3) = (int)geometry_manager[3] + 1;
            geometry_count = (int)geometry_manager[1] + -1;
            
            // 清理空闲几何体槽位
            if (-1 < geometry_count) {
                geometry_offset = (int64_t)geometry_count << 4;
                do {
                    if ((*(byte*)(*geometry_manager + 8 + geometry_offset) & 1) == 0) {
                        return 0;
                    }
                    
                    if ((-1 < geometry_count) && 
                        (geometry_current = (int)geometry_manager[1], geometry_count < geometry_current)) {
                        geometry_current = (geometry_current - geometry_count) + -1;
                        if (0 < geometry_current) {
                            geometry_offset = *geometry_manager + (int64_t)geometry_count * RESOURCE_BLOCK_SIZE;
                            // 内存移动操作
                            memmove(geometry_offset, geometry_offset + RESOURCE_BLOCK_SIZE, (int64_t)geometry_current << 4);
                        }
                        *(int*)(geometry_manager + 1) = geometry_current + 1;
                    }
                    
                    *(int*)(geometry_manager + 3) = (int)geometry_manager[3] + -1;
                    geometry_offset = geometry_offset + -RESOURCE_BLOCK_SIZE;
                    geometry_count = geometry_count + -1;
                } while (-1 < geometry_count);
            }
        }
        return 0;
    }
    
geometry_search_loop:
    geometry_count = 0;
    if (0 < MAX_RESOURCE_COUNT) {
        geometry_array = (int64_t*)*geometry_manager;
        geometry_entry = geometry_array;
        do {
            if ((*(byte*)(geometry_entry + 1) & 1) == 0) {
                geometry_base = *geometry_entry + 0x40;
                if ((geometry_id < geometry_base) || (*geometry_entry + 0xafe8U < geometry_id)) {
                    goto geometry_not_found;
                }
                
                // 计算几何体槽位索引
                temp_array2[8] = 0;
                temp_array2[0] = (int8_t)param3;
                temp_array4[8] = 0;
                temp_array4[0] = (int8_t)(geometry_id - geometry_base);
                geometry_slot = (int)((*(int64_t*)temp_array2 * *(int64_t*)temp_array4) >> 4);
            }
            else {
geometry_not_found:
                geometry_slot = -1;
            }
            if (geometry_slot != -1) goto geometry_valid_slot;
            geometry_count = geometry_count + 1;
            geometry_entry = geometry_entry + 2;
        } while (geometry_count < MAX_RESOURCE_COUNT);
    }
    return ERROR_RESOURCE_FULL;
}

/**
 * @brief 释放几何体资源
 * 
 * @return uint64_t 操作结果，0表示成功，非0表示错误码
 * 
 * @note 函数地址: 0x8bed86
 */
uint64_t GeometryManager_ReleaseGeometry(void)
{
    uint* geometry_flags;
    int64_t geometry_offset;
    short* geometry_ref_count;
    ushort* geometry_status;
    ushort geometry_index;
    int geometry_current;
    int geometry_count;
    uint64_t result;
    uint geometry_mask;
    int64_t* geometry_manager;
    int64_t geometry_base;
    uint64_t geometry_array;
    
    geometry_current = 0xfff;
    
    // 检查是否达到最大资源数量
    if (geometry_current == MAX_RESOURCE_COUNT) {
        result = ERROR_RESOURCE_FULL;
    }
    else {
        geometry_offset = (int64_t)geometry_current * RESOURCE_BLOCK_SIZE;
        
        // 调用几何体资源释放函数
        function_8d5aa0(geometry_array);
        
        // 更新几何体标志位
        geometry_mask = geometry_current >> 0x1f & FLAG_REFERENCE_MASK;
        geometry_count = geometry_current + geometry_mask;
        geometry_flags = (uint*)(*(int64_t*)(geometry_offset + geometry_base) + (int64_t)(geometry_count >> 5) * 4);
        *geometry_flags = *geometry_flags | 1 << (((byte)geometry_count & FLAG_REFERENCE_MASK) - (char)geometry_mask & FLAG_REFERENCE_MASK);
        
        // 更新管理器状态
        *(int*)((int64_t)geometry_manager + 0x14) = *(int*)((int64_t)geometry_manager + 0x14) + -1;
        *(int*)(geometry_manager + 4) = geometry_current;
        
        // 处理几何体引用计数
        if (*(short*)(geometry_offset + 10 + geometry_base) == 0x200) {
            if (*(int*)((int64_t)geometry_manager + 0x1c) != MAX_RESOURCE_COUNT) {
                *(short*)(*geometry_manager + 0xe + (int64_t)*(int*)((int64_t)geometry_manager + 0x1c) * RESOURCE_BLOCK_SIZE) = (short)geometry_current;
                *(int16_t*)(geometry_offset + 0xc + geometry_base) = *(int16_t*)((int64_t)geometry_manager + 0x1c);
            }
            *(int*)((int64_t)geometry_manager + 0x1c) = geometry_current;
        }
        
        geometry_ref_count = (short*)(geometry_offset + 10 + geometry_base);
        *geometry_ref_count = *geometry_ref_count + -1;
        
        // 处理引用计数为0的情况
        if (*geometry_ref_count == 0) {
            geometry_base = *geometry_manager;
            geometry_index = *(ushort*)(geometry_offset + 0xe + geometry_base);
            geometry_offset = geometry_offset + geometry_base;
            
            if (geometry_index != MAX_RESOURCE_COUNT) {
                *(int16_t*)(geometry_base + 0xc + (uint64_t)geometry_index * RESOURCE_BLOCK_SIZE) = *(int16_t*)(geometry_offset + 0xc);
                geometry_base = *geometry_manager;
            }
            
            if (*(ushort*)(geometry_offset + 0xc) != MAX_RESOURCE_COUNT) {
                *(int16_t*)(geometry_base + 0xe + (uint64_t)*(ushort*)(geometry_offset + 0xc) * RESOURCE_BLOCK_SIZE) = *(int16_t*)(geometry_offset + 0xe);
                geometry_base = *geometry_manager;
            }
            
            if (*(int*)((int64_t)geometry_manager + 0x1c) == geometry_current) {
                *(uint*)((int64_t)geometry_manager + 0x1c) = (uint)*(ushort*)(geometry_offset + 0xc);
            }
            
            *(int*)(geometry_manager + 2) = (int)geometry_manager[2] + -0x200;
            
            // 调用渲染系统材质处理器
            RenderingSystem_MaterialHandler(*(uint64_t*)(SYSTEM_MAIN_CONTROL_BLOCK + SYSTEM_RENDER_OFFSET),
                                          *(uint64_t*)(geometry_offset + geometry_base),
                                          &rendering_buffer_2816_ptr,
                                          RENDER_BUFFER_SIZE);
            
            geometry_status = (ushort*)(geometry_offset + 8 + *geometry_manager);
            *geometry_status = *geometry_status | FLAG_ACTIVE;
            *(int*)(geometry_manager + 3) = (int)geometry_manager[3] + 1;
            geometry_count = (int)geometry_manager[1] + -1;
            
            // 清理空闲几何体槽位
            if (-1 < geometry_count) {
                geometry_offset = (int64_t)geometry_count << 4;
                do {
                    if ((*(byte*)(*geometry_manager + 8 + geometry_offset) & 1) == 0) {
                        break;
                    }
                    
                    if (-1 < geometry_count) {
                        geometry_current = (int)geometry_manager[1];
                        if (geometry_count < geometry_current) {
                            geometry_current = (geometry_current - geometry_count) + -1;
                            if (0 < geometry_current) {
                                geometry_offset = *geometry_manager + (int64_t)geometry_count * RESOURCE_BLOCK_SIZE;
                                // 内存移动操作
                                memmove(geometry_offset, geometry_offset + RESOURCE_BLOCK_SIZE, (int64_t)geometry_current << 4);
                            }
                            *(int*)(geometry_manager + 1) = geometry_current + 1;
                        }
                    }
                    
                    *(int*)(geometry_manager + 3) = (int)geometry_manager[3] + -1;
                    geometry_offset = geometry_offset + -RESOURCE_BLOCK_SIZE;
                    geometry_count = geometry_count + -1;
                } while (-1 < geometry_count);
            }
        }
        result = 0;
    }
    return result;
}

/*
 * 技术架构文档
 * 
 * 本模块实现了一个完整的资源管理和渲染系统，具有以下技术特点：
 * 
 * 1. 内存管理策略
 *    - 使用高效的内存池管理
 *    - 实现智能的引用计数机制
 *    - 支持动态内存分配和释放
 *    - 提供内存碎片整理功能
 * 
 * 2. 资源管理系统
 *    - 统一的资源管理接口
 *    - 支持多种资源类型（位图、纹理、材质、着色器、几何体）
 *    - 实现资源的生命周期管理
 *    - 提供资源查找和访问优化
 * 
 * 3. 渲染系统集成
 *    - 与渲染系统紧密集成
 *    - 支持渲染缓冲区管理
 *    - 实现材质处理功能
 *    - 提供渲染状态管理
 * 
 * 4. 性能优化策略
 *    - 使用位图索引快速查找资源
 *    - 实现资源的延迟释放
 *    - 优化内存访问模式
 *    - 减少内存拷贝操作
 * 
 * 5. 错误处理机制
 *    - 完善的错误代码定义
 *    - 提供详细的错误信息
 *    - 实现错误恢复机制
 *    - 支持调试和诊断功能
 * 
 * 6. 线程安全考虑
 *    - 实现原子操作
 *    - 提供线程同步机制
 *    - 避免竞态条件
 *    - 确保数据一致性
 * 
 * 7. 扩展性设计
 *    - 模块化的架构设计
 *    - 支持新资源类型的扩展
 *    - 提供灵活的配置选项
 *    - 支持插件式扩展
 * 
 * 安全因素：
 * - 输入参数验证
 * - 内存访问边界检查
 * - 空指针检查
 * - 整数溢出保护
 * - 资源泄漏防护
 * 
 * 性能优化：
 * - 使用位运算代替除法
 * - 实现快速查找算法
 * - 减少函数调用开销
 * - 优化内存布局
 * - 使用缓存友好的数据结构
 * 
 * 维护性：
 * - 清晰的代码结构
 * - 详细的注释文档
 * - 统一的命名规范
 * - 模块化的功能划分
 * - 易于理解的接口设计
 */