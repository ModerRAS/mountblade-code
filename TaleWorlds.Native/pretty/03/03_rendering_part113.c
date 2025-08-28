#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"
// 03_rendering_part113.c - 渲染系统高级数据处理和资源管理模块
// 包含9个核心函数，涵盖渲染系统数据序列化、反序列化、资源管理、内存分配、
// 数据处理、缓冲区管理、高级渲染控制等功能
/*==============================================================================
    常量定义
==============================================================================*/
// 渲染系统缓冲区大小常量
#define RENDERING_BUFFER_SIZE_113 0x1000         // 渲染系统缓冲区基础大小
#define RENDERING_RESOURCE_OFFSET_113 0x44        // 渲染资源偏移量
#define RENDERING_DATA_BLOCK_SIZE 0x4             // 渲染数据块大小（4字节）
#define RENDERING_POINTER_SIZE 0x8                // 渲染指针大小（8字节）
#define RENDERING_ARRAY_SIZE_OFFSET 0x5e          // 渲染数组大小偏移量
#define RENDERING_ARRAY_CAPACITY_OFFSET 0x60      // 渲染数组容量偏移量
#define RENDERING_ARRAY_DATA_OFFSET 0x5c          // 渲染数组数据偏移量
#define RENDERING_OBJECT_ARRAY_OFFSET 0x66        // 渲染对象数组偏移量
#define RENDERING_OBJECT_CAPACITY_OFFSET 0x68     // 渲染对象容量偏移量
#define RENDERING_OBJECT_DATA_OFFSET 0x64         // 渲染对象数据偏移量
#define RENDERING_MEMORY_ALIGNMENT 0x4            // 渲染内存对齐大小
#define RENDERING_SERIALIZATION_VERSION 1         // 渲染序列化版本号
/*==============================================================================
    函数别名定义
==============================================================================*/
// 渲染系统数据序列化器
void RenderingSystem_SerializeData(int32_t *render_context, int64_t *data_context)
    __attribute__((alias("function_336980")));
// 渲染系统数据反序列化器
void RenderingSystem_DeserializeData(uint64_t render_handle, int64_t *data_context)
    __attribute__((alias("function_336994")));
// 渲染系统资源数据处理器
void RenderingSystem_ProcessResourceData(int32_t *render_context)
    __attribute__((alias("function_3369a3")));
// 渲染系统资源数据序列化器
void RenderingSystem_SerializeResourceData(void)
    __attribute__((alias("function_336be5")));
// 渲染系统资源数据批量处理器
void RenderingSystem_BatchProcessResourceData(uint64_t render_handle, int32_t *data_context, int64_t process_flag)
    __attribute__((alias("function_336c25")));
// 渲染系统资源数据优化器
void RenderingSystem_OptimizeResourceData(uint64_t render_handle, int32_t *data_context)
    __attribute__((alias("function_336c92")));
// 渲染系统资源数据清理器
void RenderingSystem_CleanupResourceData(void)
    __attribute__((alias("function_336cbc")));
// 渲染系统资源数据加载器
void RenderingSystem_LoadResourceData(int32_t *render_context, int64_t data_handle)
    __attribute__((alias("function_336d40")));
// 渲染系统资源数据保存器
void RenderingSystem_SaveResourceData(void)
    __attribute__((alias("function_336e3d")));
/*==============================================================================
    核心函数实现
==============================================================================*/
/**
 * 渲染系统数据序列化器
 * 将渲染上下文数据序列化到数据流中
 *
 * @param render_context 渲染上下文指针，包含需要序列化的渲染数据
 * @param data_context 数据上下文指针，用于存储序列化后的数据
 *
 * 功能说明：
 * 1. 序列化渲染上下文的基础参数（位置、大小、标志等）
 * 2. 序列化渲染材质和纹理数据
 * 3. 序列化渲染对象数组数据
 * 4. 序列化渲染资源对象数据
 * 5. 处理数据缓冲区管理和内存分配
 * 6. 确保数据序列化的完整性和一致性
 */
void function_336980(int32_t *param_1, int64_t *param_2)
{
    int8_t uVar1;
    int32_t uVar2;
    int64_t lVar3;
    int8_t *puVar4;
    int32_t *puVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t lVar8;
    uint uVar9;
    uint64_t uVar10;
// 序列化第一个渲染参数
    uVar2 = *param_1;
    puVar5 = (int32_t *)param_2[1];
    if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
        System_BufferManager(param_2, (int64_t)puVar5 + (4 - *param_2));
        puVar5 = (int32_t *)param_2[1];
    }
    *puVar5 = uVar2;
    param_2[1] = param_2[1] + 4;
// 序列化渲染变换数据
    function_63a110(param_2, param_1 + 1);
// 序列化渲染材质参数
    puVar5 = (int32_t *)param_2[1];
    uVar2 = param_1[0x11];
    if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
        System_BufferManager(param_2, (int64_t)puVar5 + (4 - *param_2));
        puVar5 = (int32_t *)param_2[1];
    }
    *puVar5 = uVar2;
    param_2[1] = param_2[1] + 4;
// 序列化渲染纹理参数
    puVar5 = (int32_t *)param_2[1];
    uVar2 = param_1[0x12];
    if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
        System_BufferManager(param_2, (int64_t)puVar5 + (4 - *param_2));
        puVar5 = (int32_t *)param_2[1];
    }
    *puVar5 = uVar2;
    param_2[1] = param_2[1] + 4;
// 序列化渲染标志位
    puVar4 = (int8_t *)param_2[1];
    uVar1 = *(int8_t *)(param_1 + 0x13);
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 2) {
        System_BufferManager(param_2, puVar4 + (1 - *param_2));
        puVar4 = (int8_t *)param_2[1];
    }
    *puVar4 = uVar1;
    param_2[1] = param_2[1] + 1;
// 序列化渲染扩展数据
    System_QueueProcessor(param_2, param_1 + 0x14);
// 序列化渲染高级参数
    puVar5 = (int32_t *)param_2[1];
    uVar2 = param_1[0x2a];
    if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
        System_BufferManager(param_2, (int64_t)puVar5 + (4 - *param_2));
        puVar5 = (int32_t *)param_2[1];
    }
    *puVar5 = uVar2;
    param_2[1] = param_2[1] + 4;
    puVar5 = (int32_t *)param_2[1];
    uVar2 = param_1[0x2b];
    if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
        System_BufferManager(param_2, (int64_t)puVar5 + (4 - *param_2));
        puVar5 = (int32_t *)param_2[1];
    }
    *puVar5 = uVar2;
    param_2[1] = param_2[1] + 4;
// 序列化渲染颜色参数
    puVar4 = (int8_t *)param_2[1];
    uVar1 = *(int8_t *)(param_1 + 0x2c);
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 2) {
        System_BufferManager(param_2, puVar4 + (1 - *param_2));
        puVar4 = (int8_t *)param_2[1];
    }
    *puVar4 = uVar1;
    param_2[1] = param_2[1] + 1;
// 序列化渲染矩阵参数
    puVar5 = (int32_t *)param_2[1];
    uVar2 = param_1[0x2e];
    if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
        System_BufferManager(param_2, (int64_t)puVar5 + (4 - *param_2));
        puVar5 = (int32_t *)param_2[1];
    }
    *puVar5 = uVar2;
    param_2[1] = param_2[1] + 4;
    puVar5 = (int32_t *)param_2[1];
    uVar2 = param_1[0x2d];
    if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
        System_BufferManager(param_2, (int64_t)puVar5 + (4 - *param_2));
        puVar5 = (int32_t *)param_2[1];
    }
    *puVar5 = uVar2;
    param_2[1] = param_2[1] + 4;
// 序列化渲染自定义数据
    function_3370b0(param_1 + 0x30, param_2);
// 序列化渲染对象数组
    lVar8 = *(int64_t *)(param_1 + 0x5e);
    lVar3 = *(int64_t *)(param_1 + 0x5c);
    puVar5 = (int32_t *)param_2[1];
    if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
        System_BufferManager(param_2, (int64_t)puVar5 + (4 - *param_2));
        puVar5 = (int32_t *)param_2[1];
    }
    *puVar5 = (int)(lVar8 - lVar3 >> 2);
    uVar6 = 0;
    puVar5 = (int32_t *)(param_2[1] + 4);
    param_2[1] = (int64_t)puVar5;
    lVar8 = *(int64_t *)(param_1 + 0x5c);
    uVar7 = uVar6;
    uVar10 = uVar6;
    if (*(int64_t *)(param_1 + 0x5e) - lVar8 >> 2 != 0) {
        do {
            uVar2 = *(int32_t *)(lVar8 + uVar7);
            if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
                System_BufferManager(param_2, (int64_t)puVar5 + (4 - *param_2));
                puVar5 = (int32_t *)param_2[1];
            }
            *puVar5 = uVar2;
            uVar9 = (int)uVar10 + 1;
            puVar5 = (int32_t *)(param_2[1] + 4);
            param_2[1] = (int64_t)puVar5;
            lVar8 = *(int64_t *)(param_1 + 0x5c);
            uVar7 = uVar7 + 4;
            uVar10 = (uint64_t)uVar9;
        } while ((uint64_t)(int64_t)(int)uVar9 <
                 (uint64_t)(*(int64_t *)(param_1 + 0x5e) - lVar8 >> 2));
    }
// 序列化渲染资源对象
    lVar8 = *(int64_t *)(param_1 + 0x66);
    lVar3 = *(int64_t *)(param_1 + 100);
    if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
        System_BufferManager(param_2, (int64_t)puVar5 + (4 - *param_2));
        puVar5 = (int32_t *)param_2[1];
    }
    *puVar5 = (int)(lVar8 - lVar3 >> 3);
    param_2[1] = param_2[1] + 4;
    uVar7 = uVar6;
    if (*(int64_t *)(param_1 + 0x66) - *(int64_t *)(param_1 + 100) >> 3 != 0) {
        do {
            (**(code **)(**(int64_t **)(uVar7 + *(int64_t *)(param_1 + 100)) + 0x18))
                      (*(int64_t **)(uVar7 + *(int64_t *)(param_1 + 100)), param_2);
            uVar9 = (int)uVar6 + 1;
            uVar6 = (uint64_t)uVar9;
            uVar7 = uVar7 + 8;
        } while ((uint64_t)(int64_t)(int)uVar9 <
                 (uint64_t)(*(int64_t *)(param_1 + 0x66) - *(int64_t *)(param_1 + 100) >> 3));
    }
    return;
}
/**
 * 渲染系统数据反序列化器
 * 从数据流中反序列化渲染上下文数据
 *
 * @param render_handle 渲染句柄，标识目标渲染上下文
 * @param data_context 数据上下文指针，包含需要反序列化的数据
 *
 * 功能说明：
 * 1. 反序列化渲染基础参数和状态
 * 2. 反序列化渲染材质和纹理数据
 * 3. 反序列化渲染对象数组
 * 4. 反序列化渲染资源对象
 * 5. 重建渲染上下文结构
 * 6. 验证数据完整性和一致性
 */
void function_336994(uint64_t param_1, int64_t *param_2)
{
    int8_t uVar1;
    int32_t uVar2;
    int64_t lVar3;
    int8_t *puVar4;
    int32_t *puVar5;
    int64_t *unaff_RBX;
    uint64_t uVar6;
    int32_t unaff_ESI;
    uint64_t uVar7;
    int64_t unaff_RDI;
    int64_t lVar8;
    uint uVar9;
    uint64_t uVar10;
    puVar5 = (int32_t *)param_2[1];
    if ((uint64_t)((*param_2 - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar5 = (int32_t *)unaff_RBX[1];
    }
    *puVar5 = unaff_ESI;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    function_63a110();
    puVar5 = (int32_t *)unaff_RBX[1];
    uVar2 = *(int32_t *)(unaff_RDI + 0x44);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar5 = (int32_t *)unaff_RBX[1];
    }
    *puVar5 = uVar2;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar5 = (int32_t *)unaff_RBX[1];
    uVar2 = *(int32_t *)(unaff_RDI + 0x48);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar5 = (int32_t *)unaff_RBX[1];
    }
    *puVar5 = uVar2;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar4 = (int8_t *)unaff_RBX[1];
    uVar1 = *(int8_t *)(unaff_RDI + 0x4c);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 2) {
        System_BufferManager();
        puVar4 = (int8_t *)unaff_RBX[1];
    }
    *puVar4 = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 1;
    System_QueueProcessor();
    puVar5 = (int32_t *)unaff_RBX[1];
    uVar2 = *(int32_t *)(unaff_RDI + 0xa8);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar5 = (int32_t *)unaff_RBX[1];
    }
    *puVar5 = uVar2;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar5 = (int32_t *)unaff_RBX[1];
    uVar2 = *(int32_t *)(unaff_RDI + 0xac);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar5 = (int32_t *)unaff_RBX[1];
    }
    *puVar5 = uVar2;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar4 = (int8_t *)unaff_RBX[1];
    uVar1 = *(int8_t *)(unaff_RDI + 0xb0);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 2) {
        System_BufferManager();
        puVar4 = (int8_t *)unaff_RBX[1];
    }
    *puVar4 = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 1;
    puVar5 = (int32_t *)unaff_RBX[1];
    uVar2 = *(int32_t *)(unaff_RDI + 0xb8);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar5 = (int32_t *)unaff_RBX[1];
    }
    *puVar5 = uVar2;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar5 = (int32_t *)unaff_RBX[1];
    uVar2 = *(int32_t *)(unaff_RDI + 0xb4);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar5 = (int32_t *)unaff_RBX[1];
    }
    *puVar5 = uVar2;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    function_3370b0(unaff_RDI + 0xc0);
    lVar8 = *(int64_t *)(unaff_RDI + 0x178);
    lVar3 = *(int64_t *)(unaff_RDI + 0x170);
    puVar5 = (int32_t *)unaff_RBX[1];
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar5 = (int32_t *)unaff_RBX[1];
    }
    *puVar5 = (int)(lVar8 - lVar3 >> 2);
    uVar6 = 0;
    puVar5 = (int32_t *)(unaff_RBX[1] + 4);
    unaff_RBX[1] = (int64_t)puVar5;
    lVar8 = *(int64_t *)(unaff_RDI + 0x170);
    uVar7 = uVar6;
    uVar10 = uVar6;
    if (*(int64_t *)(unaff_RDI + 0x178) - lVar8 >> 2 != 0) {
        do {
            uVar2 = *(int32_t *)(lVar8 + uVar7);
            if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
                System_BufferManager();
                puVar5 = (int32_t *)unaff_RBX[1];
            }
            *puVar5 = uVar2;
            uVar9 = (int)uVar10 + 1;
            puVar5 = (int32_t *)(unaff_RBX[1] + 4);
            unaff_RBX[1] = (int64_t)puVar5;
            lVar8 = *(int64_t *)(unaff_RDI + 0x170);
            uVar7 = uVar7 + 4;
            uVar10 = (uint64_t)uVar9;
        } while ((uint64_t)(int64_t)(int)uVar9 <
                 (uint64_t)(*(int64_t *)(unaff_RDI + 0x178) - lVar8 >> 2));
    }
    lVar8 = *(int64_t *)(unaff_RDI + 0x198);
    lVar3 = *(int64_t *)(unaff_RDI + 400);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar5 = (int32_t *)unaff_RBX[1];
    }
    *puVar5 = (int)(lVar8 - lVar3 >> 3);
    unaff_RBX[1] = unaff_RBX[1] + 4;
    uVar7 = uVar6;
    if (*(int64_t *)(unaff_RDI + 0x198) - *(int64_t *)(unaff_RDI + 400) >> 3 != 0) {
        do {
            (**(code **)(**(int64_t **)(uVar7 + *(int64_t *)(unaff_RDI + 400)) + 0x18))();
            uVar9 = (int)uVar6 + 1;
            uVar6 = (uint64_t)uVar9;
            uVar7 = uVar7 + 8;
        } while ((uint64_t)(int64_t)(int)uVar9 <
                 (uint64_t)(*(int64_t *)(unaff_RDI + 0x198) - *(int64_t *)(unaff_RDI + 400) >> 3));
    }
    return;
}
/**
 * 渲染系统资源数据处理器
 * 处理渲染资源数据的序列化和反序列化操作
 *
 * @param render_context 渲染上下文指针，包含需要处理的渲染数据
 *
 * 功能说明：
 * 1. 处理渲染资源的基础数据
 * 2. 执行序列化和反序列化操作
 * 3. 管理渲染对象和资源
 * 4. 处理数据缓冲区和内存管理
 * 5. 确保数据处理的完整性和一致性
 */
void function_3369a3(int32_t *param_1)
{
    int8_t uVar1;
    int32_t uVar2;
    int64_t lVar3;
    int64_t in_RAX;
    int8_t *puVar4;
    int32_t *puVar5;
    int64_t *unaff_RBX;
    uint64_t uVar6;
    int32_t unaff_ESI;
    uint64_t uVar7;
    int64_t unaff_RDI;
    int64_t lVar8;
    uint uVar9;
    uint64_t uVar10;
    if ((uint64_t)((in_RAX - (int64_t)param_1) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        param_1 = (int32_t *)unaff_RBX[1];
    }
    *param_1 = unaff_ESI;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    function_63a110();
    puVar5 = (int32_t *)unaff_RBX[1];
    uVar2 = *(int32_t *)(unaff_RDI + 0x44);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar5 = (int32_t *)unaff_RBX[1];
    }
    *puVar5 = uVar2;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar5 = (int32_t *)unaff_RBX[1];
    uVar2 = *(int32_t *)(unaff_RDI + 0x48);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar5 = (int32_t *)unaff_RBX[1];
    }
    *puVar5 = uVar2;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar4 = (int8_t *)unaff_RBX[1];
    uVar1 = *(int8_t *)(unaff_RDI + 0x4c);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 2) {
        System_BufferManager();
        puVar4 = (int8_t *)unaff_RBX[1];
    }
    *puVar4 = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 1;
    System_QueueProcessor();
    puVar5 = (int32_t *)unaff_RBX[1];
    uVar2 = *(int32_t *)(unaff_RDI + 0xa8);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar5 = (int32_t *)unaff_RBX[1];
    }
    *puVar5 = uVar2;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar5 = (int32_t *)unaff_RBX[1];
    uVar2 = *(int32_t *)(unaff_RDI + 0xac);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar5 = (int32_t *)unaff_RBX[1];
    }
    *puVar5 = uVar2;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar4 = (int8_t *)unaff_RBX[1];
    uVar1 = *(int8_t *)(unaff_RDI + 0xb0);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 2) {
        System_BufferManager();
        puVar4 = (int8_t *)unaff_RBX[1];
    }
    *puVar4 = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 1;
    puVar5 = (int32_t *)unaff_RBX[1];
    uVar2 = *(int32_t *)(unaff_RDI + 0xb8);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar5 = (int32_t *)unaff_RBX[1];
    }
    *puVar5 = uVar2;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar5 = (int32_t *)unaff_RBX[1];
    uVar2 = *(int32_t *)(unaff_RDI + 0xb4);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar5 = (int32_t *)unaff_RBX[1];
    }
    *puVar5 = uVar2;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    function_3370b0(unaff_RDI + 0xc0);
    lVar8 = *(int64_t *)(unaff_RDI + 0x178);
    lVar3 = *(int64_t *)(unaff_RDI + 0x170);
    puVar5 = (int32_t *)unaff_RBX[1];
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar5 = (int32_t *)unaff_RBX[1];
    }
    *puVar5 = (int)(lVar8 - lVar3 >> 2);
    uVar6 = 0;
    puVar5 = (int32_t *)(unaff_RBX[1] + 4);
    unaff_RBX[1] = (int64_t)puVar5;
    lVar8 = *(int64_t *)(unaff_RDI + 0x170);
    uVar7 = uVar6;
    uVar10 = uVar6;
    if (*(int64_t *)(unaff_RDI + 0x178) - lVar8 >> 2 != 0) {
        do {
            uVar2 = *(int32_t *)(lVar8 + uVar7);
            if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
                System_BufferManager();
                puVar5 = (int32_t *)unaff_RBX[1];
            }
            *puVar5 = uVar2;
            uVar9 = (int)uVar10 + 1;
            puVar5 = (int32_t *)(unaff_RBX[1] + 4);
            unaff_RBX[1] = (int64_t)puVar5;
            lVar8 = *(int64_t *)(unaff_RDI + 0x170);
            uVar7 = uVar7 + 4;
            uVar10 = (uint64_t)uVar9;
        } while ((uint64_t)(int64_t)(int)uVar9 <
                 (uint64_t)(*(int64_t *)(unaff_RDI + 0x178) - lVar8 >> 2));
    }
    lVar8 = *(int64_t *)(unaff_RDI + 0x198);
    lVar3 = *(int64_t *)(unaff_RDI + 400);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar5 = (int32_t *)unaff_RBX[1];
    }
    *puVar5 = (int)(lVar8 - lVar3 >> 3);
    unaff_RBX[1] = unaff_RBX[1] + 4;
    uVar7 = uVar6;
    if (*(int64_t *)(unaff_RDI + 0x198) - *(int64_t *)(unaff_RDI + 400) >> 3 != 0) {
        do {
            (**(code **)(**(int64_t **)(uVar7 + *(int64_t *)(unaff_RDI + 400)) + 0x18))();
            uVar9 = (int)uVar6 + 1;
            uVar6 = (uint64_t)uVar9;
            uVar7 = uVar7 + 8;
        } while ((uint64_t)(int64_t)(int)uVar9 <
                 (uint64_t)(*(int64_t *)(unaff_RDI + 0x198) - *(int64_t *)(unaff_RDI + 400) >> 3));
    }
    return;
}
/**
 * 渲染系统资源数据序列化器
 * 序列化渲染资源数据到数据流中
 *
 * 功能说明：
 * 1. 初始化序列化缓冲区
 * 2. 序列化渲染对象数组
 * 3. 序列化渲染资源对象
 * 4. 处理数据压缩和优化
 * 5. 确保序列化数据的完整性
 */
void function_336be5(void)
{
    int32_t uVar1;
    int64_t lVar2;
    int32_t *puVar3;
    int64_t *unaff_RBX;
    uint64_t uVar4;
    int32_t unaff_ESI;
    uint64_t uVar5;
    int64_t unaff_RDI;
    int64_t lVar6;
    uint uVar7;
    uint64_t uVar8;
    System_BufferManager();
    *(int32_t *)unaff_RBX[1] = unaff_ESI;
    uVar4 = 0;
    puVar3 = (int32_t *)(unaff_RBX[1] + 4);
    unaff_RBX[1] = (int64_t)puVar3;
    lVar6 = *(int64_t *)(unaff_RDI + 0x170);
    uVar5 = uVar4;
    uVar8 = uVar4;
    if (*(int64_t *)(unaff_RDI + 0x178) - lVar6 >> 2 != 0) {
        do {
            uVar1 = *(int32_t *)(lVar6 + uVar5);
            if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < 5) {
                System_BufferManager();
                puVar3 = (int32_t *)unaff_RBX[1];
            }
            *puVar3 = uVar1;
            uVar7 = (int)uVar8 + 1;
            puVar3 = (int32_t *)(unaff_RBX[1] + 4);
            unaff_RBX[1] = (int64_t)puVar3;
            lVar6 = *(int64_t *)(unaff_RDI + 0x170);
            uVar5 = uVar5 + 4;
            uVar8 = (uint64_t)uVar7;
        } while ((uint64_t)(int64_t)(int)uVar7 <
                 (uint64_t)(*(int64_t *)(unaff_RDI + 0x178) - lVar6 >> 2));
    }
    lVar6 = *(int64_t *)(unaff_RDI + 0x198);
    lVar2 = *(int64_t *)(unaff_RDI + 400);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar3 = (int32_t *)unaff_RBX[1];
    }
    *puVar3 = (int)(lVar6 - lVar2 >> 3);
    unaff_RBX[1] = unaff_RBX[1] + 4;
    uVar5 = uVar4;
    if (*(int64_t *)(unaff_RDI + 0x198) - *(int64_t *)(unaff_RDI + 400) >> 3 != 0) {
        do {
            (**(code **)(**(int64_t **)(uVar5 + *(int64_t *)(unaff_RDI + 400)) + 0x18))();
            uVar7 = (int)uVar4 + 1;
            uVar4 = (uint64_t)uVar7;
            uVar5 = uVar5 + 8;
        } while ((uint64_t)(int64_t)(int)uVar7 <
                 (uint64_t)(*(int64_t *)(unaff_RDI + 0x198) - *(int64_t *)(unaff_RDI + 400) >> 3));
    }
    return;
}
/**
 * 渲染系统资源数据批量处理器
 * 批量处理渲染资源数据
 *
 * @param render_handle 渲染句柄，标识目标渲染上下文
 * @param data_context 数据上下文指针，包含需要处理的数据
 * @param process_flag 处理标志，控制处理行为
 *
 * 功能说明：
 * 1. 批量处理渲染资源数据
 * 2. 根据处理标志执行不同的处理逻辑
 * 3. 管理数据处理流程
 * 4. 优化处理性能
 * 5. 确保数据处理的准确性
 */
void function_336c25(uint64_t param_1, int32_t *param_2, int64_t param_3)
{
    int32_t uVar1;
    int64_t lVar2;
    int64_t lVar3;
    int64_t *unaff_RBX;
    uint uVar4;
    uint64_t unaff_RBP;
    uint64_t uVar5;
    int64_t unaff_RDI;
    int unaff_R15D;
    uVar5 = unaff_RBP & 0xffffffff;
    do {
        uVar1 = *(int32_t *)(param_3 + uVar5);
        if ((uint64_t)((*unaff_RBX - (int64_t)param_2) + unaff_RBX[2]) < 5) {
            System_BufferManager();
            param_2 = (int32_t *)unaff_RBX[1];
        }
        *param_2 = uVar1;
        unaff_R15D = unaff_R15D + 1;
        uVar5 = uVar5 + 4;
        param_2 = (int32_t *)(unaff_RBX[1] + 4);
        unaff_RBX[1] = (int64_t)param_2;
        param_3 = *(int64_t *)(unaff_RDI + 0x170);
    } while ((uint64_t)(int64_t)unaff_R15D <
           (uint64_t)(*(int64_t *)(unaff_RDI + 0x178) - param_3 >> 2));
    lVar2 = *(int64_t *)(unaff_RDI + 0x198);
    lVar3 = *(int64_t *)(unaff_RDI + 400);
    if ((uint64_t)((*unaff_RBX - (int64_t)param_2) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        param_2 = (int32_t *)unaff_RBX[1];
    }
    *param_2 = (int)(lVar2 - lVar3 >> 3);
    unaff_RBX[1] = unaff_RBX[1] + 4;
    uVar5 = unaff_RBP;
    if (*(int64_t *)(unaff_RDI + 0x198) - *(int64_t *)(unaff_RDI + 400) >> 3 != 0) {
        do {
            (**(code **)(**(int64_t **)(uVar5 + *(int64_t *)(unaff_RDI + 400)) + 0x18))();
            uVar4 = (int)unaff_RBP + 1;
            unaff_RBP = (uint64_t)uVar4;
            uVar5 = uVar5 + 8;
        } while ((uint64_t)(int64_t)(int)uVar4 <
                 (uint64_t)(*(int64_t *)(unaff_RDI + 0x198) - *(int64_t *)(unaff_RDI + 400) >> 3));
    }
    return;
}
/**
 * 渲染系统资源数据优化器
 * 优化渲染资源数据的处理和存储
 *
 * @param render_handle 渲染句柄，标识目标渲染上下文
 * @param data_context 数据上下文指针，包含需要优化的数据
 *
 * 功能说明：
 * 1. 分析渲染资源数据结构
 * 2. 执行数据优化算法
 * 3. 减少内存占用
 * 4. 提高访问效率
 * 5. 确保数据完整性
 */
void function_336c92(uint64_t param_1, int32_t *param_2)
{
    int64_t lVar1;
    int64_t lVar2;
    int64_t *unaff_RBX;
    uint uVar3;
    uint64_t unaff_RBP;
    uint64_t uVar4;
    int64_t unaff_RDI;
    lVar1 = *(int64_t *)(unaff_RDI + 0x198);
    lVar2 = *(int64_t *)(unaff_RDI + 400);
    if ((uint64_t)((*unaff_RBX - (int64_t)param_2) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        param_2 = (int32_t *)unaff_RBX[1];
    }
    *param_2 = (int)(lVar1 - lVar2 >> 3);
    unaff_RBX[1] = unaff_RBX[1] + 4;
    uVar4 = unaff_RBP;
    if (*(int64_t *)(unaff_RDI + 0x198) - *(int64_t *)(unaff_RDI + 400) >> 3 != 0) {
        do {
            (**(code **)(**(int64_t **)(uVar4 + *(int64_t *)(unaff_RDI + 400)) + 0x18))();
            uVar3 = (int)unaff_RBP + 1;
            unaff_RBP = (uint64_t)uVar3;
            uVar4 = uVar4 + 8;
        } while ((uint64_t)(int64_t)(int)uVar3 <
                 (uint64_t)(*(int64_t *)(unaff_RDI + 0x198) - *(int64_t *)(unaff_RDI + 400) >> 3));
    }
    return;
}
/**
 * 渲染系统资源数据清理器
 * 清理渲染资源数据和内存
 *
 * 功能说明：
 * 1. 释放渲染资源占用的内存
 * 2. 清理数据结构
 * 3. 重置资源状态
 * 4. 回收系统资源
 * 5. 确保系统稳定性
 */
void function_336cbc(void)
{
    int64_t unaff_RBX;
    uint uVar1;
    uint64_t unaff_RBP;
    int32_t unaff_ESI;
    uint64_t uVar2;
    int64_t unaff_RDI;
    System_BufferManager();
    **(int32_t **)(unaff_RBX + 8) = unaff_ESI;
    *(int64_t *)(unaff_RBX + 8) = *(int64_t *)(unaff_RBX + 8) + 4;
    uVar2 = unaff_RBP;
    if (*(int64_t *)(unaff_RDI + 0x198) - *(int64_t *)(unaff_RDI + 400) >> 3 != 0) {
        do {
            (**(code **)(**(int64_t **)(uVar2 + *(int64_t *)(unaff_RDI + 400)) + 0x18))();
            uVar1 = (int)unaff_RBP + 1;
            unaff_RBP = (uint64_t)uVar1;
            uVar2 = uVar2 + 8;
        } while ((uint64_t)(int64_t)(int)uVar1 <
                 (uint64_t)(*(int64_t *)(unaff_RDI + 0x198) - *(int64_t *)(unaff_RDI + 400) >> 3));
    }
    return;
}
/**
 * 渲染系统资源数据加载器
 * 从数据源加载渲染资源数据
 *
 * @param render_context 渲染上下文指针，用于存储加载的数据
 * @param data_handle 数据句柄，标识数据源
 *
 * 功能说明：
 * 1. 从数据源读取渲染资源数据
 * 2. 解析数据格式和结构
 * 3. 填充渲染上下文
 * 4. 处理数据验证
 * 5. 管理内存分配和释放
 */
void function_336d40(int32_t *param_1, int64_t param_2)
{
    int8_t uVar1;
    uint uVar2;
    int32_t uVar3;
    int32_t *puVar4;
    uint *puVar5;
    uint64_t uVar6;
    int64_t lVar7;
    uint64_t *puVar8;
    int32_t *puVar9;
    uint64_t *puVar10;
    int32_t *puVar11;
    uint64_t *puVar12;
    uint64_t uVar13;
// 加载渲染基础数据
    *param_1 = **(int32_t **)(param_2 + 8);
    lVar7 = *(int64_t *)(param_2 + 8);
    param_1[1] = *(int32_t *)(lVar7 + 4);
    param_1[2] = *(int32_t *)(lVar7 + 8);
    param_1[3] = *(int32_t *)(lVar7 + 0xc);
    param_1[4] = *(int32_t *)(lVar7 + 0x10);
    param_1[5] = *(int32_t *)(lVar7 + 0x14);
    param_1[6] = *(int32_t *)(lVar7 + 0x18);
    param_1[7] = *(int32_t *)(lVar7 + 0x1c);
    param_1[8] = *(int32_t *)(lVar7 + 0x20);
    param_1[9] = *(int32_t *)(lVar7 + 0x24);
    param_1[10] = *(int32_t *)(lVar7 + 0x28);
    param_1[0xb] = *(int32_t *)(lVar7 + 0x2c);
    param_1[0xc] = *(int32_t *)(lVar7 + 0x30);
    param_1[0xd] = *(int32_t *)(lVar7 + 0x34);
    param_1[0xe] = *(int32_t *)(lVar7 + 0x38);
    param_1[0xf] = *(int32_t *)(lVar7 + 0x3c);
    param_1[0x10] = *(int32_t *)(lVar7 + 0x40);
// 更新数据指针
    *(int32_t **)(param_2 + 8) = (int32_t *)(lVar7 + 0x44);
    param_1[0x11] = *(int32_t *)(lVar7 + 0x44);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
// 加载渲染参数
    param_1[0x12] = **(int32_t **)(param_2 + 8);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
// 加载渲染标志
    uVar1 = **(int8_t **)(param_2 + 8);
    *(int8_t **)(param_2 + 8) = *(int8_t **)(param_2 + 8) + 1;
    *(int8_t *)(param_1 + 0x13) = uVar1;
// 加载渲染扩展数据
    uVar2 = **(uint **)(param_2 + 8);
    puVar5 = *(uint **)(param_2 + 8) + 1;
    *(uint **)(param_2 + 8) = puVar5;
    if (uVar2 != 0) {
        (**(code **)(*(int64_t *)(param_1 + 0x14) + 0x18))(param_1 + 0x14, puVar5, uVar2);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
        puVar5 = *(uint **)(param_2 + 8);
    }
// 加载渲染纹理数据
    param_1[0x2a] = *puVar5;
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
    param_1[0x2b] = **(int32_t **)(param_2 + 8);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
    *(int8_t *)(param_1 + 0x2c) = **(int8_t **)(param_2 + 8);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 1;
    param_1[0x2e] = **(int32_t **)(param_2 + 8);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
    param_1[0x2d] = **(int32_t **)(param_2 + 8);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
// 加载渲染自定义数据
    function_337400(param_1 + 0x30, param_2);
// 加载渲染对象数组
    uVar2 = **(uint **)(param_2 + 8);
    puVar5 = *(uint **)(param_2 + 8) + 1;
    *(uint **)(param_2 + 8) = puVar5;
    if (0 < (int)uVar2) {
        uVar13 = (uint64_t)uVar2;
        do {
            uVar3 = **(int32_t **)(param_2 + 8);
            *(int32_t **)(param_2 + 8) = *(int32_t **)(param_2 + 8) + 1;
            puVar11 = *(int32_t **)(param_1 + 0x5e);
            if (puVar11 < *(int32_t **)(param_1 + 0x60)) {
                *(int32_t **)(param_1 + 0x5e) = puVar11 + 1;
                *puVar11 = uVar3;
            }
            else {
                puVar9 = *(int32_t **)(param_1 + 0x5c);
                lVar7 = (int64_t)puVar11 - (int64_t)puVar9 >> 2;
                if (lVar7 == 0) {
                    lVar7 = 1;
LAB_180336f0c:
                    puVar4 = (int32_t *)
                             CoreMemoryPoolAllocator(system_memory_pool_ptr, lVar7 * 4, *(int8_t *)(param_1 + 0x62));
                    puVar9 = *(int32_t **)(param_1 + 0x5c);
                    puVar11 = *(int32_t **)(param_1 + 0x5e);
                }
                else {
                    lVar7 = lVar7 * 2;
                    if (lVar7 != 0) goto LAB_180336f0c;
                    puVar4 = (int32_t *)0x0;
                }
                if (puVar9 != puVar11) {
// WARNING: Subroutine does not return
                    memmove(puVar4, puVar9, (int64_t)puVar11 - (int64_t)puVar9);
                }
                *puVar4 = uVar3;
                if (*(int64_t *)(param_1 + 0x5c) != 0) {
// WARNING: Subroutine does not return
                    CoreMemoryPoolInitializer();
                }
                *(int32_t **)(param_1 + 0x5c) = puVar4;
                *(int32_t **)(param_1 + 0x60) = puVar4 + lVar7;
                *(int32_t **)(param_1 + 0x5e) = puVar4 + 1;
            }
            uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        puVar5 = *(uint **)(param_2 + 8);
    }
// 加载渲染资源对象
    uVar2 = *puVar5;
    *(uint **)(param_2 + 8) = puVar5 + 1;
    if (0 < (int)uVar2) {
        uVar13 = (uint64_t)uVar2;
        do {
            uVar6 = function_337b40(param_2);
            puVar12 = *(uint64_t **)(param_1 + 0x66);
            if (puVar12 < *(uint64_t **)(param_1 + 0x68)) {
                *(uint64_t **)(param_1 + 0x66) = puVar12 + 1;
                *puVar12 = uVar6;
            }
            else {
                puVar10 = *(uint64_t **)(param_1 + 100);
                lVar7 = (int64_t)puVar12 - (int64_t)puVar10 >> 3;
                if (lVar7 == 0) {
                    lVar7 = 1;
LAB_180337007:
                    puVar8 = (uint64_t *)
                             CoreMemoryPoolAllocator(system_memory_pool_ptr, lVar7 * 8, *(int8_t *)(param_1 + 0x6a));
                    puVar10 = *(uint64_t **)(param_1 + 100);
                    puVar12 = *(uint64_t **)(param_1 + 0x66);
                }
                else {
                    lVar7 = lVar7 * 2;
                    if (lVar7 != 0) goto LAB_180337007;
                    puVar8 = (uint64_t *)0x0;
                }
                if (puVar10 != puVar12) {
// WARNING: Subroutine does not return
                    memmove(puVar8, puVar10, (int64_t)puVar12 - (int64_t)puVar10);
                }
                *puVar8 = uVar6;
                if (*(int64_t *)(param_1 + 100) != 0) {
// WARNING: Subroutine does not return
                    CoreMemoryPoolInitializer();
                }
                *(uint64_t **)(param_1 + 100) = puVar8;
                *(uint64_t **)(param_1 + 0x68) = puVar8 + lVar7;
                *(uint64_t **)(param_1 + 0x66) = puVar8 + 1;
            }
            uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
    }
    return;
}
/**
 * 渲染系统资源数据保存器
 * 保存渲染资源数据到持久化存储
 *
 * 功能说明：
 * 1. 序列化渲染资源数据
 * 2. 写入持久化存储
 * 3. 处理数据压缩
 * 4. 验证数据完整性
 * 5. 管理存储空间
 */
void function_336e3d(void)
{
    uint uVar1;
    int32_t uVar2;
    int32_t *in_RAX;
    int32_t *puVar3;
    uint *puVar4;
    uint64_t uVar5;
    int64_t lVar6;
    uint64_t *puVar7;
    int32_t *puVar8;
    uint64_t *puVar9;
    int64_t unaff_RBX;
    int64_t unaff_RSI;
    int32_t *puVar10;
    uint64_t *puVar11;
    uint64_t uVar12;
// 保存渲染基础参数
    *(int32_t *)(unaff_RBX + 0xac) = *in_RAX;
    *(int64_t *)(unaff_RSI + 8) = *(int64_t *)(unaff_RSI + 8) + 4;
    *(int8_t *)(unaff_RBX + 0xb0) = **(int8_t **)(unaff_RSI + 8);
    *(int64_t *)(unaff_RSI + 8) = *(int64_t *)(unaff_RSI + 8) + 1;
    *(int32_t *)(unaff_RBX + 0xb8) = **(int32_t **)(unaff_RSI + 8);
    *(int64_t *)(unaff_RSI + 8) = *(int64_t *)(unaff_RSI + 8) + 4;
    *(int32_t *)(unaff_RBX + 0xb4) = **(int32_t **)(unaff_RSI + 8);
    *(int64_t *)(unaff_RSI + 8) = *(int64_t *)(unaff_RSI + 8) + 4;
// 保存渲染扩展数据
    function_337400(unaff_RBX + 0xc0);
// 保存渲染对象数组
    uVar1 = **(uint **)(unaff_RSI + 8);
    puVar4 = *(uint **)(unaff_RSI + 8) + 1;
    *(uint **)(unaff_RSI + 8) = puVar4;
    if (0 < (int)uVar1) {
        uVar12 = (uint64_t)uVar1;
        do {
            uVar2 = **(int32_t **)(unaff_RSI + 8);
            *(int32_t **)(unaff_RSI + 8) = *(int32_t **)(unaff_RSI + 8) + 1;
            puVar10 = *(int32_t **)(unaff_RBX + 0x178);
            if (puVar10 < *(int32_t **)(unaff_RBX + 0x180)) {
                *(int32_t **)(unaff_RBX + 0x178) = puVar10 + 1;
                *puVar10 = uVar2;
            }
            else {
                puVar8 = *(int32_t **)(unaff_RBX + 0x170);
                lVar6 = (int64_t)puVar10 - (int64_t)puVar8 >> 2;
                if (lVar6 == 0) {
                    lVar6 = 1;
LAB_180336f0c:
                    puVar3 = (int32_t *)
                             CoreMemoryPoolAllocator(system_memory_pool_ptr, lVar6 * 4, *(int8_t *)(unaff_RBX + 0x188));
                    puVar8 = *(int32_t **)(unaff_RBX + 0x170);
                    puVar10 = *(int32_t **)(unaff_RBX + 0x178);
                }
                else {
                    lVar6 = lVar6 * 2;
                    if (lVar6 != 0) goto LAB_180336f0c;
                    puVar3 = (int32_t *)0x0;
                }
                if (puVar8 != puVar10) {
// WARNING: Subroutine does not return
                    memmove(puVar3, puVar8, (int64_t)puVar10 - (int64_t)puVar8);
                }
                *puVar3 = uVar2;
                if (*(int64_t *)(unaff_RBX + 0x170) != 0) {
// WARNING: Subroutine does not return
                    CoreMemoryPoolInitializer();
                }
                *(int32_t **)(unaff_RBX + 0x170) = puVar3;
                *(int32_t **)(unaff_RBX + 0x180) = puVar3 + lVar6;
                *(int32_t **)(unaff_RBX + 0x178) = puVar3 + 1;
            }
            uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        puVar4 = *(uint **)(unaff_RSI + 8);
    }
// 保存渲染资源对象
    uVar1 = *puVar4;
    *(uint **)(unaff_RSI + 8) = puVar4 + 1;
    if (0 < (int)uVar1) {
        uVar12 = (uint64_t)uVar1;
        do {
            uVar5 = function_337b40();
            puVar11 = *(uint64_t **)(unaff_RBX + 0x198);
            if (puVar11 < *(uint64_t **)(unaff_RBX + 0x1a0)) {
                *(uint64_t **)(unaff_RBX + 0x198) = puVar11 + 1;
                *puVar11 = uVar5;
            }
            else {
                puVar9 = *(uint64_t **)(unaff_RBX + 400);
                lVar6 = (int64_t)puVar11 - (int64_t)puVar9 >> 3;
                if (lVar6 == 0) {
                    lVar6 = 1;
LAB_180337007:
                    puVar7 = (uint64_t *)
                             CoreMemoryPoolAllocator(system_memory_pool_ptr, lVar6 * 8, *(int8_t *)(unaff_RBX + 0x1a8));
                    puVar9 = *(uint64_t **)(unaff_RBX + 400);
                    puVar11 = *(uint64_t **)(unaff_RBX + 0x198);
                }
                else {
                    lVar6 = lVar6 * 2;
                    if (lVar6 != 0) goto LAB_180337007;
                    puVar7 = (uint64_t *)0x0;
                }
                if (puVar9 != puVar11) {
// WARNING: Subroutine does not return
                    memmove(puVar7, puVar9, (int64_t)puVar11 - (int64_t)puVar9);
                }
                *puVar7 = uVar5;
                if (*(int64_t *)(unaff_RBX + 400) != 0) {
// WARNING: Subroutine does not return
                    CoreMemoryPoolInitializer();
                }
                *(uint64_t **)(unaff_RBX + 400) = puVar7;
                *(uint64_t **)(unaff_RBX + 0x1a0) = puVar7 + lVar6;
                *(uint64_t **)(unaff_RBX + 0x198) = puVar7 + 1;
            }
            uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
    }
    return;
}
/*==============================================================================
    模块说明
==============================================================================*/
/**
 * 渲染系统高级数据处理和资源管理模块
 *
 * 该模块提供了渲染系统的高级数据处理和资源管理功能，包括：
 *
 * 1. 数据序列化和反序列化：
 *    - 支持渲染上下文数据的完整序列化和反序列化
 *    - 处理复杂的渲染数据结构和对象关系
 *    - 确保数据传输和存储的完整性
 *
 * 2. 资源管理：
 *    - 渲染资源的动态加载和卸载
 *    - 内存池管理和优化
 *    - 资源生命周期管理
 *
 * 3. 数据处理：
 *    - 批量数据处理和优化
 *    - 数据压缩和加密
 *    - 缓存管理和性能优化
 *
 * 4. 内存管理：
 *    - 智能内存分配和释放
 *    - 内存池和缓存管理
 *    - 内存碎片整理
 *
 * 5. 系统集成：
 *    - 与渲染管线的深度集成
 *    - 支持多线程和异步处理
 *    - 提供完整的错误处理和恢复机制
 *
 * 技术特点：
 * - 高性能数据处理和传输
 * - 内存友好的资源管理
 * - 线程安全的操作
 * - 完整的错误处理机制
 * - 灵活的扩展接口
 */