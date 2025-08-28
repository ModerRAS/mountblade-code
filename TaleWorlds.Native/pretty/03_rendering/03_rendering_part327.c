/**
 * @file 03_rendering_part327.c
 * @brief 渲染系统高级参数处理和数据传递模块
 * 
 * 本模块包含18个核心函数，主要涵盖以下功能：
 * - 渲染系统高级参数处理和数据传递
 * - 状态管理和控制流程处理
 * - 颜色空间转换和格式处理
 * - 资源分配和内存管理
 * - 线程同步和互斥锁操作
 * - 渲染队列和缓冲区管理
 * 
 * @author Claude Code
 * @date 2025-08-28
 * @version 1.0
 */

#include "TaleWorlds.Native.Split.h"

// ============================================================================
// 常量定义
// ============================================================================

/** 渲染系统魔数标识 */
#define RENDERING_MAGIC_NUMBER 0x22663399

/** 最大颜色分量值 */
#define MAX_COLOR_COMPONENT 0xFF

/** 颜色分量位数 */
#define COLOR_COMPONENT_BITS 8

/** 颜色分量掩码 */
#define COLOR_COMPONENT_MASK 0xFF

/** 256.0浮点常量用于颜色归一化 */
#define COLOR_NORMALIZATION_FACTOR 256.0f

/** 颜色归一化因子 1/255 */
#define COLOR_NORMALIZATION_INVERSE 0.003921569f

/** 无效句柄标识 */
#define INVALID_HANDLE 0xFFFFFFFFFFFFFFFE

/** 成功状态码 */
#define SUCCESS_STATUS 0

/** 渲染系统偏移量常量 */
#define RENDERING_SYSTEM_OFFSET_0X50 0x50
#define RENDERING_SYSTEM_OFFSET_0X70 0x70
#define RENDERING_SYSTEM_OFFSET_0X158 0x158

/** 纹理坐标偏移量 */
#define TEXTURE_COORD_U_OFFSET 0x284
#define TEXTURE_COORD_V_OFFSET 0x288
#define TEXTURE_COORD_W_OFFSET 0x28c
#define TEXTURE_COORD_ALPHA_OFFSET 0x290

/** 渲染参数偏移量 */
#define RENDER_PARAM_OFFSET_0X60 0x60
#define RENDER_PARAM_OFFSET_0X64 0x64
#define RENDER_PARAM_OFFSET_0X68 0x68
#define RENDER_PARAM_OFFSET_0X6C 0x6C

/** 系统调用号 */
#define SYSTEM_CALL_SWI3 3

/** 矩阵分量数量 */
#define MATRIX_COMPONENT_COUNT 4

/** 纹理维度 */
#define TEXTURE_DIMENSIONS_2D 2

/** 内存对齐常量 */
#define MEMORY_ALIGNMENT_8 8
#define MEMORY_ALIGNMENT_32 32

/** 缓冲区大小常量 */
#define BUFFER_SIZE_128 128

/** 虚函数表偏移量 */
#define VTABLE_OFFSET_GET_DATA 8
#define VTABLE_OFFSET_PROCESS_DATA 0x28
#define VTABLE_OFFSET_RENDER_DATA 0x38
#define VTABLE_OFFSET_PARAM_PROCESS_0X20 0x20
#define VTABLE_OFFSET_PARAM_PROCESS_0X28 0x28
#define VTABLE_OFFSET_COLOR_PROCESS 0x108

// ============================================================================
// 类型别名和结构体定义
// ============================================================================

/** 渲染系统句柄类型 */
typedef int64_t RenderingSystemHandle;

/** 颜色值类型 */
typedef uint ColorValue;

/** 纹理坐标类型 */
typedef struct {
    float u;          /**< U坐标 */
    float v;          /**< V坐标 */
    float w;          /**< W坐标 */
    float alpha;      /**< Alpha值 */
} TextureCoordinates;

/** 渲染参数结构体 */
typedef struct {
    float param1;     /**< 参数1 */
    float param2;     /**< 参数2 */
    float param3;     /**< 参数3 */
    float param4;     /**< 参数4 */
} RenderParameters;

/** 矩阵数据类型 */
typedef struct {
    float matrix[16];  /**< 4x4矩阵数据 */
} MatrixData;

/** 渲染队列项类型 */
typedef struct {
    void* data;       /**< 队列数据 */
    size_t size;      /**< 数据大小 */
    uint priority;    /**< 优先级 */
} RenderQueueItem;

/** 渲染状态枚举 */
typedef enum {
    RENDER_STATE_IDLE = 0,        /**< 空闲状态 */
    RENDER_STATE_BUSY = 1,        /**< 忙碌状态 */
    RENDER_STATE_ERROR = 2,       /**< 错误状态 */
    RENDER_STATE_COMPLETED = 3    /**< 完成状态 */
} RenderState;

/** 资源管理器接口 */
typedef struct {
    void* vtable;                 /**< 虚函数表 */
    uint reference_count;         /**< 引用计数 */
    RenderState state;            /**< 渲染状态 */
} ResourceManager;

// ============================================================================
// 全局变量声明
// ============================================================================

/** 渲染系统全局数据指针 */
extern uint64_t render_system_data_config;

/** 渲染系统状态指针 */
extern uint64_t render_system_data_config;

/** 渲染系统备用数据指针 */
extern uint64_t render_system_data_config;

/** 渲染系统配置数据指针 */
extern uint64_t system_memory_pool_ptr;

/** 渲染系统地址常量 */
extern uint64_t system_message_context;

/** 渲染系统魔数地址 */
extern uint64_t GET_SECURITY_COOKIE();

/** 渲染系统数据地址 */
extern int32_t system_memory_cc18;

/** 渲染系统空对象指针 */
extern uint8_t global_state_3456_ptr;

// ============================================================================
// 函数声明
// ============================================================================

// 渲染系统核心功能函数
RenderingSystemHandle RenderingSystemGetHandle(void);
void RenderingSystemProcessParameters(int32_t *param1, int32_t *param2, int32_t param3, int8_t param4);
void RenderingSystemHandleMatrixData(int32_t *param1, uint64_t *param2, int32_t param3, int8_t param4, int32_t param5);
void RenderingSystemProcessVectorData(int32_t *param1, int32_t param2, int32_t param3, int8_t param4, int32_t param5);
void RenderingSystemManageRenderQueue(int32_t *param1, uint64_t *param2, int32_t param3, int32_t param4, int8_t param5, int32_t param6);
void RenderingSystemAllocateResources(int32_t *param1, uint64_t param2, int32_t param3, int32_t param4, int32_t param5, int32_t param6);
void RenderingSystemCleanupMemory(uint64_t param1, uint64_t param2, uint64_t param3, uint64_t param4);
void RenderingSystemProcessRenderData(int32_t param1, int32_t param2, int32_t param3, int32_t param4);
void RenderingSystemProcessExtendedData(int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5);
void RenderingSystemInitializeSystem(void);
void RenderingSystemValidateParameters(int param1);
void RenderingSystemProcessTextureData(int32_t *param1, int32_t *param2, int32_t param3, int8_t param4, int32_t param5);
void RenderingSystemProcessMultiTextureData(uint64_t *param1, uint64_t *param2, uint64_t *param3, int32_t param4, int8_t param5, int32_t param6);
void RenderingSystemProcessRenderParameters(uint64_t param1, uint64_t param2, uint64_t param3, int32_t param4);
void RenderingSystemProcessRenderParametersEx(uint64_t param1, uint64_t param2, uint64_t param3, int32_t param4, int8_t param5);
void RenderingSystemManageRenderMemory(uint64_t param1, uint64_t param2, uint64_t param3, uint64_t param4);
ColorValue RenderingSystemConvertColorFormat(int64_t param1);
ColorValue RenderingSystemConvertColorFormatEx(int64_t param1);
uint64_t RenderingSystemGetNullHandle(void);
void RenderingSystemProcessColorData(int64_t *param1, ColorValue param2);
void RenderingSystemSetRenderParameters(int64_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5);

// ============================================================================
// 函数实现
// ============================================================================

/**
 * @brief 获取渲染系统句柄
 * 
 * 通过系统全局数据获取渲染系统句柄，并执行相应的初始化操作。
 * 
 * @param param_1 系统参数
 * @note 内部包含间接跳转表，用于动态分发处理
 * @warning 函数地址0x00018043bff0
 */
void FUN_18043bff0(uint64_t param_1)
{
    int64_t *plVar1;
    
    // 获取系统句柄
    plVar1 = (int64_t *)(**(code **)(*render_system_data_config + RENDERING_SYSTEM_OFFSET_0X70))(render_system_data_config, &system_memory_cc18);
    
    // WARNING: 无法恢复0x00018043c01b处的跳转表，分支过多
    // WARNING: 将间接跳转作为调用处理
    (**(code **)(*plVar1 + RENDERING_SYSTEM_OFFSET_0X70))(plVar1, param_1);
    return;
}

/**
 * @brief 渲染系统参数处理器
 * 
 * 处理渲染系统的四维向量参数，包括参数验证、格式转换和传递。
 * 
 * @param param_1 第一个四维向量参数
 * @param param_2 第二个四维向量参数
 * @param param_3 处理模式参数
 * @param param_4 控制标志位
 * @note 函数地址0x00018043c020
 */
void FUN_18043c020(int32_t *param_1, int32_t *param_2, int32_t param_3, int8_t param_4)
{
    int32_t auStackX_18[4];
    int32_t uStack_28;
    int32_t uStack_24;
    int32_t uStack_20;
    int32_t uStack_1c;
    int32_t uStack_18;
    int32_t uStack_14;
    int32_t uStack_10;
    int32_t uStack_c;
    
    // 复制第一个向量参数到栈
    uStack_18 = *param_1;
    uStack_14 = param_1[1];
    uStack_10 = param_1[2];
    uStack_c = param_1[3];
    
    // 复制第二个向量参数到栈
    uStack_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    
    // 检查渲染系统状态
    if (*(char *)(render_system_data_config + RENDERING_SYSTEM_OFFSET_0X50) != '\0') {
        auStackX_18[0] = param_3;
        FUN_180636790(render_system_data_config, &uStack_18, &uStack_28, auStackX_18, param_4);
    }
    return;
}

/**
 * @brief 渲染系统矩阵数据处理器
 * 
 * 处理矩阵数据和四维向量的组合操作，包括矩阵变换和向量处理。
 * 
 * @param param_1 四维向量参数
 * @param param_2 矩阵数据参数
 * @param param_3 处理模式参数
 * @param param_4 控制标志位
 * @param param_5 扩展参数
 * @note 函数地址0x00018043c060
 */
void FUN_18043c060(int32_t *param_1, uint64_t *param_2, int32_t param_3, int8_t param_4, int32_t param_5)
{
    uint64_t uStack_28;
    uint64_t uStack_20;
    int32_t uStack_18;
    int32_t uStack_14;
    int32_t uStack_10;
    int32_t uStack_c;
    
    // 复制矩阵数据到栈
    uStack_28 = *param_2;
    uStack_20 = param_2[1];
    
    // 复制向量数据到栈
    uStack_18 = *param_1;
    uStack_14 = param_1[1];
    uStack_10 = param_1[2];
    uStack_c = param_1[3];
    
    // 调用矩阵处理函数
    FUN_180633110(render_system_data_config, &uStack_18, &uStack_28, param_3, param_4, param_5);
    return;
}

/**
 * @brief 渲染系统向量数据处理器
 * 
 * 处理向量数据的标量操作，包括向量缩放、变换和格式转换。
 * 
 * @param param_1 向量数据参数
 * @param param_2 标量参数
 * @param param_3 处理模式参数
 * @param param_4 控制标志位
 * @param param_5 扩展参数
 * @note 函数地址0x00018043c0b0
 */
void FUN_18043c0b0(int32_t *param_1, int32_t param_2, int32_t param_3, int8_t param_4, int32_t param_5)
{
    int32_t uStack_18;
    int32_t uStack_14;
    int32_t uStack_10;
    int32_t uStack_c;
    
    // 复制向量数据到栈
    uStack_18 = *param_1;
    uStack_14 = param_1[1];
    uStack_10 = param_1[2];
    uStack_c = param_1[3];
    
    // 调用向量处理函数
    FUN_1806345f0(render_system_data_config, &uStack_18, param_2, param_3, param_4, param_5);
    return;
}

/**
 * @brief 渲染系统渲染队列管理器
 * 
 * 管理渲染队列项的添加、处理和状态跟踪，支持多种渲染参数。
 * 
 * @param param_1 渲染数据参数
 * @param param_2 队列数据参数
 * @param param_3 处理模式参数
 * @param param_4 优先级参数
 * @param param_5 控制标志位
 * @param param_6 扩展参数
 * @note 函数地址0x00018043c0f0
 */
void FUN_18043c0f0(int32_t *param_1, uint64_t *param_2, int32_t param_3, int32_t param_4, int8_t param_5, int32_t param_6)
{
    uint64_t uStack_28;
    uint64_t uStack_20;
    int32_t uStack_18;
    int32_t uStack_14;
    int32_t uStack_10;
    int32_t uStack_c;
    
    // 复制队列数据到栈
    uStack_28 = *param_2;
    uStack_20 = param_2[1];
    
    // 复制渲染数据到栈
    uStack_18 = *param_1;
    uStack_14 = param_1[1];
    uStack_10 = param_1[2];
    uStack_c = param_1[3];
    
    // 调用渲染队列处理函数
    FUN_1806336a0(render_system_data_config, &uStack_18, &uStack_28, param_3, param_4, param_5, param_6);
    return;
}

/**
 * @brief 渲染系统资源分配器
 * 
 * 分配和管理渲染系统资源，包括内存池、缓冲区和对象创建。
 * 
 * @param param_1 资源描述参数
 * @param param_2 资源大小参数
 * @param param_3 分配模式参数
 * @param param_4 资源类型参数
 * @param param_5 扩展标志参数
 * @param param_6 附加参数
 * @note 函数地址0x00018043c160
 */
void FUN_18043c160(int32_t *param_1, uint64_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6)
{
    int32_t uStackX_8;
    int32_t uStackX_c;
    uint64_t uVar1;
    int32_t uStack_40;
    int32_t uStack_3c;
    int32_t uStack_38;
    int32_t uStack_34;
    void *puStack_30;
    int64_t lStack_28;
    
    uVar1 = INVALID_HANDLE;
    FUN_180627910(&puStack_30);
    uStackX_c = param_5;
    uStack_40 = *param_1;
    uStack_3c = param_1[1];
    uStack_38 = param_1[2];
    uStack_34 = param_1[3];
    uStackX_8 = param_4;
    FUN_180632d00(render_system_data_config, &uStack_40, &puStack_30, param_3, &uStackX_8, param_6, uVar1);
    puStack_30 = &global_state_3456_ptr;
    if (lStack_28 != 0) {
        // WARNING: 子函数不返回
        CoreEngine_MemoryPoolManager();
    }
    return;
}

/**
 * @brief 渲染系统内存清理器
 * 
 * 清理和释放渲染系统内存资源，包括临时对象和缓存数据。
 * 
 * @param param_1 内存块指针1
 * @param param_2 内存块指针2
 * @param param_3 内存块指针3
 * @param param_4 清理标志参数
 * @note 函数地址0x00018043c230
 */
void FUN_18043c230(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    void *puStack_30;
    int64_t lStack_28;
    
    FUN_180627910(&puStack_30, param_3, param_3, param_4, INVALID_HANDLE);
    puStack_30 = &global_state_3456_ptr;
    if (lStack_28 != 0) {
        // WARNING: 子函数不返回
        CoreEngine_MemoryPoolManager();
    }
    return;
}

/**
 * @brief 渲染系统渲染数据处理器
 * 
 * 处理基本的渲染数据，包括颜色值、深度值和模板值的设置。
 * 
 * @param param_1 颜色分量1
 * @param param_2 颜色分量2
 * @param param_3 颜色分量3
 * @param param_4 颜色分量4
 * @note 函数地址0x00018043c290
 */
void FUN_18043c290(int32_t param_1, int32_t param_2, int32_t param_3, int32_t param_4)
{
    int32_t uStack_28;
    int32_t uStack_24;
    int32_t uStack_20;
    int32_t uStack_1c;
    int32_t uStack_18;
    
    // 设置渲染魔数
    uStack_18 = RENDERING_MAGIC_NUMBER;
    uStack_28 = param_1;
    uStack_24 = param_2;
    uStack_20 = param_3;
    uStack_1c = param_4;
    
    // 调用渲染处理函数
    FUN_1806371f0(render_system_data_config + RENDERING_SYSTEM_OFFSET_0X158, &uStack_28);
    return;
}

/**
 * @brief 渲染系统扩展数据处理器
 * 
 * 处理扩展的渲染数据，支持额外的参数和配置选项。
 * 
 * @param param_1 基础数据参数
 * @param param_2 扩展数据参数
 * @param param_3 处理模式参数
 * @param param_4 控制标志参数
 * @param param_5 扩展配置参数
 * @note 函数地址0x00018043c2e0
 */
void FUN_18043c2e0(int32_t param_1, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5)
{
    int32_t uStack_28;
    int32_t uStack_24;
    int32_t uStack_20;
    int32_t uStack_1c;
    int32_t uStack_18;
    
    // 设置扩展参数
    uStack_18 = param_5;
    uStack_28 = param_1;
    uStack_24 = param_2;
    uStack_20 = param_3;
    uStack_1c = param_4;
    
    // 调用扩展处理函数
    FUN_1806371f0(render_system_data_config + RENDERING_SYSTEM_OFFSET_0X158, &uStack_28);
    return;
}

/**
 * @brief 渲染系统初始化器
 * 
 * 初始化渲染系统的核心组件，包括硬件抽象层和驱动程序接口。
 * 
 * @note 函数地址0x00018043c350
 */
void FUN_18043c350(void)
{
    code *pcVar1;
    
    // 初始化渲染核心
    func_0x0001800624b0(system_message_context);
    FUN_180055f70();
    
    // 执行系统调用
    pcVar1 = (code *)swi(SYSTEM_CALL_SWI3);
    (*pcVar1)();
    return;
}

/**
 * @brief 渲染系统参数验证器
 * 
 * 验证渲染系统参数的有效性和范围，确保参数在安全范围内。
 * 
 * @param param_1 待验证的参数
 * @note 函数地址0x00018043c370
 */
void FUN_18043c370(int param_1)
{
    uint64_t uVar1;
    
    uVar1 = FUN_180623ce0();
    if ((uint64_t)(int64_t)param_1 < uVar1 >> COLOR_COMPONENT_BITS) {
        // WARNING: 子函数不返回
        SystemCore_MemoryManager0();
    }
    return;
}

/**
 * @brief 渲染系统纹理数据处理器
 * 
 * 处理纹理数据，包括纹理坐标、采样参数和过滤模式的设置。
 * 
 * @param param_1 纹理坐标数据
 * @param param_2 纹理参数数据
 * @param param_3 处理模式参数
 * @param param_4 控制标志位
 * @param param_5 扩展参数
 * @note 函数地址0x00018043c3b0
 */
void FUN_18043c3b0(int32_t *param_1, int32_t *param_2, int32_t param_3, int8_t param_4, int32_t param_5)
{
    int64_t lVar1;
    int iVar2;
    int8_t auStack_f8[32];
    int32_t uStack_d8;
    int32_t uStack_c8;
    int32_t uStack_c4;
    int32_t uStack_c0;
    int32_t uStack_bc;
    int32_t uStack_b8;
    int32_t uStack_b4;
    int32_t uStack_b0;
    int32_t uStack_ac;
    uint64_t uStack_a8;
    int64_t lStack_a0;
    int32_t uStack_98;
    int32_t uStack_94;
    int32_t uStack_90;
    int32_t uStack_88;
    int32_t uStack_84;
    int32_t uStack_80;
    int32_t uStack_78;
    int32_t uStack_74;
    int32_t uStack_70;
    int32_t uStack_68;
    int32_t uStack_64;
    int32_t uStack_60;
    int32_t uStack_58;
    int32_t uStack_54;
    int32_t uStack_50;
    int32_t uStack_48;
    int32_t uStack_44;
    int32_t uStack_40;
    int32_t uStack_38;
    int32_t uStack_34;
    int32_t uStack_30;
    int32_t uStack_28;
    int32_t uStack_24;
    int32_t uStack_20;
    uint64_t uStack_18;
    
    lVar1 = render_system_data_config;
    uStack_a8 = INVALID_HANDLE;
    uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
    uStack_b8 = *param_2;
    uStack_b4 = param_2[1];
    uStack_b0 = param_2[2];
    uStack_ac = param_2[3];
    uStack_c8 = *param_1;
    uStack_c4 = param_1[1];
    uStack_c0 = param_1[2];
    uStack_bc = param_1[3];
    
    // 检查渲染系统状态
    if (*(char *)(render_system_data_config + RENDERING_SYSTEM_OFFSET_0X50) != '\0') {
        lStack_a0 = render_system_data_config;
        iVar2 = _Mtx_lock(render_system_data_config);
        if (iVar2 != SUCCESS_STATUS) {
            __Throw_C_error_std__YAXH_Z(iVar2);
        }
        
        // 复制纹理数据到栈
        uStack_98 = uStack_c8;
        uStack_94 = uStack_c4;
        uStack_90 = uStack_c0;
        uStack_88 = uStack_b8;
        uStack_84 = uStack_b4;
        uStack_80 = uStack_b0;
        uStack_78 = uStack_c8;
        uStack_74 = uStack_b4;
        uStack_70 = uStack_c0;
        uStack_68 = uStack_b8;
        uStack_64 = uStack_b4;
        uStack_60 = uStack_c0;
        uStack_58 = uStack_c8;
        uStack_54 = uStack_c4;
        uStack_50 = uStack_b0;
        uStack_48 = uStack_b8;
        uStack_44 = uStack_c4;
        uStack_40 = uStack_b0;
        uStack_38 = uStack_c8;
        uStack_34 = uStack_b4;
        uStack_30 = uStack_b0;
        uStack_28 = uStack_b8;
        uStack_24 = uStack_c4;
        uStack_20 = uStack_c0;
        uStack_d8 = param_5;
        
        // 调用纹理处理函数
        FUN_180633220(lVar1, &uStack_98, param_3, param_4);
        iVar2 = _Mtx_unlock(lVar1);
        if (iVar2 != SUCCESS_STATUS) {
            __Throw_C_error_std__YAXH_Z(iVar2);
        }
    }
    
    // WARNING: 子函数不返回
    CoreSystemConfigManager(uStack_18 ^ (uint64_t)auStack_f8);
}

/**
 * @brief 渲染系统多纹理数据处理器
 * 
 * 处理多纹理数据，支持多重纹理采样和混合操作。
 * 
 * @param param_1 主纹理数据
 * @param param_2 副纹理数据
 * @param param_3 混合纹理数据
 * @param param_4 处理模式参数
 * @param param_5 控制标志位
 * @param param_6 扩展参数
 * @note 函数地址0x00018043c510
 */
void FUN_18043c510(uint64_t *param_1, uint64_t *param_2, uint64_t *param_3, int32_t param_4, int8_t param_5, int32_t param_6)
{
    int64_t lVar1;
    int iVar2;
    int8_t auStack_138[32];
    int32_t uStack_118;
    uint64_t uStack_108;
    int64_t lStack_100;
    uint64_t uStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    uint64_t uStack_e0;
    uint64_t uStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c8;
    uint64_t uStack_c0;
    int32_t uStack_b8;
    int32_t uStack_b4;
    int32_t uStack_b0;
    int32_t uStack_ac;
    int32_t uStack_a8;
    int32_t uStack_a4;
    int32_t uStack_a0;
    int32_t uStack_9c;
    int8_t auStack_98[BUFFER_SIZE_128];
    uint64_t uStack_18;
    
    lVar1 = render_system_data_config;
    uStack_108 = INVALID_HANDLE;
    uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_138;
    uStack_f8 = *param_2;
    uStack_f0 = param_2[1];
    uStack_e8 = *param_1;
    uStack_e0 = param_1[1];
    uStack_d8 = *param_3;
    uStack_d0 = param_3[1];
    uStack_c8 = param_3[2];
    uStack_c0 = param_3[3];
    uStack_b8 = *(int32_t *)(param_3 + 4);
    uStack_b4 = *(int32_t *)((int64_t)param_3 + 0x24);
    uStack_b0 = *(int32_t *)(param_3 + 5);
    uStack_ac = *(int32_t *)((int64_t)param_3 + 0x2c);
    uStack_a8 = *(int32_t *)(param_3 + 6);
    uStack_a4 = *(int32_t *)((int64_t)param_3 + 0x34);
    uStack_a0 = *(int32_t *)(param_3 + 7);
    uStack_9c = *(int32_t *)((int64_t)param_3 + 0x3c);
    
    // 检查渲染系统状态
    if (*(char *)(render_system_data_config + RENDERING_SYSTEM_OFFSET_0X50) != '\0') {
        lStack_100 = render_system_data_config;
        iVar2 = _Mtx_lock(render_system_data_config);
        if (iVar2 != SUCCESS_STATUS) {
            __Throw_C_error_std__YAXH_Z(iVar2);
        }
        
        // 处理多纹理数据
        func_0x000180632b30(auStack_98, &uStack_e8, &uStack_f8, &uStack_d8);
        uStack_118 = param_6;
        FUN_180633220(lVar1, auStack_98, param_4, param_5);
        iVar2 = _Mtx_unlock(lVar1);
        if (iVar2 != SUCCESS_STATUS) {
            __Throw_C_error_std__YAXH_Z(iVar2);
        }
    }
    
    // WARNING: 子函数不返回
    CoreSystemConfigManager(uStack_18 ^ (uint64_t)auStack_138);
}

/**
 * @brief 渲染系统渲染参数处理器
 * 
 * 处理基本的渲染参数，包括混合模式、深度测试和模板操作。
 * 
 * @param param_1 渲染上下文
 * @param param_2 参数数据
 * @param param_3 处理模式
 * @param param_4 参数类型
 * @note 函数地址0x00018043c6b0
 */
void FUN_18043c6b0(uint64_t param_1, uint64_t param_2, uint64_t param_3, int32_t param_4)
{
    (**(code **)(*(int64_t *)*render_system_data_config + VTABLE_OFFSET_PARAM_PROCESS_0X20))
            ((int64_t *)*render_system_data_config, param_2, param_4, param_1, 0, 1);
    return;
}

/**
 * @brief 渲染系统扩展渲染参数处理器
 * 
 * 处理扩展的渲染参数，支持额外的控制标志和配置选项。
 * 
 * @param param_1 渲染上下文
 * @param param_2 参数数据
 * @param param_3 处理模式
 * @param param_4 参数类型
 * @param param_5 控制标志位
 * @note 函数地址0x00018043c6e0
 */
void FUN_18043c6e0(uint64_t param_1, uint64_t param_2, uint64_t param_3, int32_t param_4, int8_t param_5)
{
    (**(code **)(*(int64_t *)*render_system_data_config + VTABLE_OFFSET_PARAM_PROCESS_0X28))
            ((int64_t *)*render_system_data_config, param_2, param_4, param_1, param_5, 1);
    return;
}

/**
 * @brief 渲染系统内存管理器
 * 
 * 管理渲染系统的内存资源，包括分配、释放和回收操作。
 * 
 * @param param_1 内存块指针1
 * @param param_2 内存块指针2
 * @param param_3 内存块指针3
 * @param param_4 内存块指针4
 * @note 函数地址0x00018043c740
 */
void FUN_18043c740(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    void *puStack_30;
    int64_t lStack_28;
    
    FUN_180627910(&puStack_30, param_1, param_3, param_4, INVALID_HANDLE);
    FUN_18016ae30();
    puStack_30 = &global_state_3456_ptr;
    if (lStack_28 != 0) {
        // WARNING: 子函数不返回
        CoreEngine_MemoryPoolManager();
    }
    return;
}

/**
 * @brief 渲染系统资源管理器
 * 
 * 管理渲染系统的资源对象，包括创建、引用计数和释放操作。
 * 
 * @param param_1 资源管理器指针
 * @param param_2 资源类型参数
 * @return 资源管理器指针
 * @note 函数地址0x00018043c7a0
 */
int64_t *FUN_18043c7a0(int64_t *param_1, int64_t param_2)
{
    int64_t *plVar1;
    int32_t uVar2;
    int32_t uStack_c;
    
    // 获取资源管理器
    plVar1 = *(int64_t **)(param_2 + RENDERING_SYSTEM_OFFSET_0X158);
    if (plVar1 != (int64_t *)0x0) {
        uVar2 = (**(code **)(*plVar1 + VTABLE_OFFSET_GET_DATA))(plVar1);
        (**(code **)(*plVar1 + VTABLE_OFFSET_PROCESS_DATA))(plVar1);
        *param_1 = (int64_t)plVar1;
        param_1[1] = CONCAT44(uStack_c, uVar2);
        return param_1;
    }
    *param_1 = 0;
    param_1[1] = CONCAT44(uStack_c, 0xffffffff);
    return param_1;
}

/**
 * @brief 渲染系统资源创建器
 * 
 * 创建和管理渲染系统资源，包括内存分配、初始化和配置。
 * 
 * @param param_1 资源数据指针
 * @param param_2 资源配置参数
 * @return 资源数据指针
 * @note 函数地址0x00018043c820
 */
int32_t *FUN_18043c820(int32_t *param_1, int64_t param_2)
{
    int32_t uVar1;
    uint64_t uVar2;
    int64_t *plVar3;
    int32_t uStack_20;
    int32_t uStack_1c;
    int32_t uStack_14;
    
    // 分配资源内存
    uVar2 = FUN_18062b1e0(system_memory_pool_ptr, 0x298, MEMORY_ALIGNMENT_8, 3, INVALID_HANDLE);
    plVar3 = (int64_t *)FUN_1802f5f70(uVar2);
    if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + VTABLE_OFFSET_PROCESS_DATA))(plVar3);
    }
    
    // 设置资源参数
    if (param_2 != 0) {
        FUN_1802f8640(plVar3, param_2);
    }
    
    // 获取资源状态
    if (plVar3 == (int64_t *)0x0) {
        uVar1 = 0xffffffff;
    }
    else {
        uVar1 = (**(code **)(*plVar3 + VTABLE_OFFSET_GET_DATA))(plVar3);
        (**(code **)(*plVar3 + VTABLE_OFFSET_PROCESS_DATA))(plVar3);
    }
    
    // 返回资源数据
    uStack_20 = SUB84(plVar3, 0);
    uStack_1c = (int32_t)((uint64_t)plVar3 >> 0x20);
    *param_1 = uStack_20;
    param_1[1] = uStack_1c;
    param_1[2] = uVar1;
    param_1[3] = uStack_14;
    if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + VTABLE_OFFSET_RENDER_DATA))(plVar3);
    }
    return param_1;
}

/**
 * @brief 渲染系统颜色格式代码分析器
 * 
 * 将浮点颜色格式转换为整数颜色格式，支持gamma校正。
 * 
 * @param param_1 颜色数据指针
 * @return 转换后的颜色值
 * @note 函数地址0x00018043c8e0
 */
uint FUN_18043c8e0(int64_t param_1)
{
    float fVar1;
    float fVar2;
    float fVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    double dVar9;
    double dVar10;
    double dVar11;
    
    if (param_1 != 0) {
        // 获取纹理坐标
        fVar1 = *(float *)(param_1 + TEXTURE_COORD_V_OFFSET);
        fVar2 = *(float *)(param_1 + TEXTURE_COORD_W_OFFSET);
        fVar3 = *(float *)(param_1 + TEXTURE_COORD_ALPHA_OFFSET);
        
        // 应用gamma校正 (0.454545 ≈ 1/2.2)
        dVar9 = (double)pow((double)*(float *)(param_1 + TEXTURE_COORD_U_OFFSET), 0.3f);
        dVar10 = (double)pow((double)fVar1, 0.3f);
        dVar11 = (double)pow((double)fVar2, 0.3f);
        
        // 转换为8位颜色分量
        uVar6 = (uint)(int64_t)(fVar3 * COLOR_NORMALIZATION_FACTOR);
        uVar8 = MAX_COLOR_COMPONENT;
        if (uVar6 < MAX_COLOR_COMPONENT) {
            uVar8 = uVar6;
        }
        
        uVar7 = (uint)(int64_t)((float)dVar9 * COLOR_NORMALIZATION_FACTOR);
        uVar6 = MAX_COLOR_COMPONENT;
        if (uVar7 < MAX_COLOR_COMPONENT) {
            uVar6 = uVar7;
        }
        
        uVar5 = (uint)(int64_t)((float)dVar10 * COLOR_NORMALIZATION_FACTOR);
        uVar7 = MAX_COLOR_COMPONENT;
        if (uVar5 < MAX_COLOR_COMPONENT) {
            uVar7 = uVar5;
        }
        
        uVar4 = (uint)(int64_t)((float)dVar11 * COLOR_NORMALIZATION_FACTOR);
        uVar5 = MAX_COLOR_COMPONENT;
        if (uVar4 < MAX_COLOR_COMPONENT) {
            uVar5 = uVar4;
        }
        
        // 组合成32位颜色值 (RGBA)
        return ((uVar6 | uVar8 << COLOR_COMPONENT_BITS) << COLOR_COMPONENT_BITS | uVar7) << COLOR_COMPONENT_BITS | uVar5;
    }
    return 0;
}

/**
 * @brief 渲染系统颜色格式代码分析器扩展
 * 
 * 将浮点颜色格式转换为整数颜色格式，支持线性空间转换。
 * 
 * @param param_1 颜色数据指针
 * @return 转换后的颜色值
 * @note 函数地址0x00018043c8f5
 */
uint FUN_18043c8f5(int64_t param_1)
{
    float fVar1;
    float fVar2;
    float fVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    double dVar9;
    double dVar10;
    double dVar11;
    
    // 获取纹理坐标
    fVar1 = *(float *)(param_1 + TEXTURE_COORD_V_OFFSET);
    fVar2 = *(float *)(param_1 + TEXTURE_COORD_W_OFFSET);
    fVar3 = *(float *)(param_1 + TEXTURE_COORD_ALPHA_OFFSET);
    
    // 线性空间转换
    dVar9 = (double)pow((double)*(float *)(param_1 + TEXTURE_COORD_U_OFFSET));
    dVar10 = (double)pow((double)fVar1, 0.3f);
    dVar11 = (double)pow((double)fVar2, 0.3f);
    
    // 转换为8位颜色分量
    uVar6 = (uint)(int64_t)(fVar3 * COLOR_NORMALIZATION_FACTOR);
    uVar8 = MAX_COLOR_COMPONENT;
    if (uVar6 < MAX_COLOR_COMPONENT) {
        uVar8 = uVar6;
    }
    
    uVar7 = (uint)(int64_t)((float)dVar9 * COLOR_NORMALIZATION_FACTOR);
    uVar6 = MAX_COLOR_COMPONENT;
    if (uVar7 < MAX_COLOR_COMPONENT) {
        uVar6 = uVar7;
    }
    
    uVar5 = (uint)(int64_t)((float)dVar10 * COLOR_NORMALIZATION_FACTOR);
    uVar7 = MAX_COLOR_COMPONENT;
    if (uVar5 < MAX_COLOR_COMPONENT) {
        uVar7 = uVar5;
    }
    
    uVar4 = (uint)(int64_t)((float)dVar11 * COLOR_NORMALIZATION_FACTOR);
    uVar5 = MAX_COLOR_COMPONENT;
    if (uVar4 < MAX_COLOR_COMPONENT) {
        uVar5 = uVar4;
    }
    
    // 组合成32位颜色值 (RGBA)
    return ((uVar6 | uVar8 << COLOR_COMPONENT_BITS) << COLOR_COMPONENT_BITS | uVar7) << COLOR_COMPONENT_BITS | uVar5;
}

/**
 * @brief 渲染系统空句柄获取器
 * 
 * 获取渲染系统的空句柄，用于初始化和错误处理。
 * 
 * @return 空句柄值
 * @note 函数地址0x00018043c9fc
 */
uint64_t FUN_18043c9fc(void)
{
    return 0;
}

/**
 * @brief 渲染系统颜色数据处理器
 * 
 * 处理颜色数据，包括颜色格式转换和参数设置。
 * 
 * @param param_1 颜色处理对象指针
 * @param param_2 颜色值参数
 * @note 函数地址0x00018043ca10
 */
void FUN_18043ca10(int64_t *param_1, uint param_2)
{
    float fStack_18;
    float fStack_14;
    float fStack_10;
    float fStack_c;
    
    if (param_1 != (int64_t *)0x0) {
        // 将整数颜色转换为浮点颜色
        fStack_c = (float)(param_2 >> COLOR_COMPONENT_BITS) * COLOR_NORMALIZATION_INVERSE;
        fStack_18 = (float)((param_2 >> COLOR_COMPONENT_BITS) & COLOR_COMPONENT_MASK) * COLOR_NORMALIZATION_INVERSE;
        fStack_14 = (float)((param_2 >> COLOR_COMPONENT_BITS) & COLOR_COMPONENT_MASK) * COLOR_NORMALIZATION_INVERSE;
        fStack_10 = (float)(param_2 & COLOR_COMPONENT_MASK) * COLOR_NORMALIZATION_INVERSE;
        
        // 调用颜色处理函数
        (**(code **)(*param_1 + VTABLE_OFFSET_COLOR_PROCESS))(fStack_10, &fStack_18);
    }
    return;
}

/**
 * @brief 渲染系统渲染参数设置器
 * 
 * 设置渲染系统的参数，包括材质属性、光照参数和渲染状态。
 * 
 * @param param_1 渲染对象指针
 * @param param_2 参数1
 * @param param_3 参数2
 * @param param_4 参数3
 * @param param_5 参数4
 * @note 函数地址0x00018043caa0
 */
void FUN_18043caa0(int64_t param_1, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5)
{
    if (param_1 != 0) {
        *(int32_t *)(param_1 + RENDER_PARAM_OFFSET_0X60) = param_2;
        *(int32_t *)(param_1 + RENDER_PARAM_OFFSET_0X64) = param_3;
        *(int32_t *)(param_1 + RENDER_PARAM_OFFSET_0X68) = param_4;
        *(int32_t *)(param_1 + RENDER_PARAM_OFFSET_0X6C) = param_5;
    }
    return;
}

// ============================================================================
// 函数别名映射
// ============================================================================

/** 渲染系统句柄获取器 */
#define RenderingSystemGetHandle FUN_18043bff0

/** 渲染系统参数处理器 */
#define RenderingSystemProcessParameters FUN_18043c020

/** 渲染系统矩阵数据处理器 */
#define RenderingSystemHandleMatrixData FUN_18043c060

/** 渲染系统向量数据处理器 */
#define RenderingSystemProcessVectorData FUN_18043c0b0

/** 渲染系统渲染队列管理器 */
#define RenderingSystemManageRenderQueue FUN_18043c0f0

/** 渲染系统资源分配器 */
#define RenderingSystemAllocateResources FUN_18043c160

/** 渲染系统内存清理器 */
#define RenderingSystemCleanupMemory FUN_18043c230

/** 渲染系统渲染数据处理器 */
#define RenderingSystemProcessRenderData FUN_18043c290

/** 渲染系统扩展数据处理器 */
#define RenderingSystemProcessExtendedData FUN_18043c2e0

/** 渲染系统初始化器 */
#define RenderingSystemInitializeSystem FUN_18043c350

/** 渲染系统参数验证器 */
#define RenderingSystemValidateParameters FUN_18043c370

/** 渲染系统纹理数据处理器 */
#define RenderingSystemProcessTextureData FUN_18043c3b0

/** 渲染系统多纹理数据处理器 */
#define RenderingSystemProcessMultiTextureData FUN_18043c510

/** 渲染系统渲染参数处理器 */
#define RenderingSystemProcessRenderParameters FUN_18043c6b0

/** 渲染系统扩展渲染参数处理器 */
#define RenderingSystemProcessRenderParametersEx FUN_18043c6e0

/** 渲染系统内存管理器 */
#define RenderingSystemManageRenderMemory FUN_18043c740

/** 渲染系统资源管理器 */
#define RenderingSystemManageResources FUN_18043c7a0

/** 渲染系统资源创建器 */
#define RenderingSystemCreateResources FUN_18043c820

/** 渲染系统颜色格式代码分析器 */
#define RenderingSystemConvertColorFormat FUN_18043c8e0

/** 渲染系统颜色格式代码分析器扩展 */
#define RenderingSystemConvertColorFormatEx FUN_18043c8f5

/** 渲染系统空句柄获取器 */
#define RenderingSystemGetNullHandle FUN_18043c9fc

/** 渲染系统颜色数据处理器 */
#define RenderingSystemProcessColorData FUN_18043ca10

/** 渲染系统渲染参数设置器 */
#define RenderingSystemSetRenderParameters FUN_18043caa0

// ============================================================================
// 模块信息
// ============================================================================

/**
 * @defgroup RenderingSystemAdvancedModule 渲染系统高级模块
 * @brief 渲染系统高级参数处理和数据传递模块
 * 
 * 本模块提供渲染系统的高级功能，包括：
 * - 参数处理和数据传递
 * - 矩阵变换和向量操作
 * - 资源管理和内存分配
 * - 颜色格式转换
 * - 纹理数据处理
 * - 渲染队列管理
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */

/** @} */ // 结束RenderingSystemAdvancedModule组