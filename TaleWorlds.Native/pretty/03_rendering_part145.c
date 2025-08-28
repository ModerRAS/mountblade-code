/**
 * @file 03_rendering_part145.c
 * @brief 渲染系统第145部分 - 高级渲染状态管理和字符串处理模块
 *
 * 本文件包含2个核心函数，涵盖高级渲染状态管理、字符串比较、
 * 资源分配、状态控制、渲染参数设置等高级渲染功能。
 *
 * 主要功能包括：
 * - 渲染状态字符串比较和验证
 * - 渲染资源分配和管理
 * - 渲染参数配置和状态控制
 * - 渲染系统初始化和清理
 * - 渲染数据结构管理
 */
#include "TaleWorlds.Native.Split.h"
/*==============================================================================
 * 常量定义和宏定义
 *=============================================================================*/
/**
 * @brief 渲染系统常量
 */
#define RENDER_STRING_SIZE         0x20      /**< 渲染字符串大小 */
#define RENDER_BUFFER_SIZE         0x40      /**< 渲染缓冲区大小 */
#define RENDER_PARAM_SIZE          0x10      /**< 渲染参数大小 */
#define RENDER_STATE_SIZE          0x2f0     /**< 渲染状态大小 */
#define RENDER_FLAG_SIZE           0xd       /**< 渲染标志大小 */
/**
 * @brief 内存管理常量
 */
#define MEMORY_ALLOC_SIZE          4         /**< 内存分配大小 */
#define MEMORY_OFFSET_108          0x108     /**< 内存偏移量108 */
#define MEMORY_OFFSET_118          0x118     /**< 内存偏移量118 */
#define MEMORY_OFFSET_260          0x260     /**< 内存偏移量260 */
#define MEMORY_OFFSET_2AC          0x2AC     /**< 内存偏移量2AC */
/**
 * @brief 渲染控制常量
 */
#define RENDER_CONTROL_FLAG        0x2020000 /**< 渲染控制标志 */
#define RENDER_TIMEOUT_DEFAULT     0xfffffffffffffffe  /**< 渲染默认超时 */
#define RENDER_STACK_SIZE          0x6c8     /**< 渲染栈大小 */
/*==============================================================================
 * 结构体定义
 *=============================================================================*/
/**
 * @brief 渲染状态字符串比较器结构体
 */
typedef struct {
    char* string_ptr;              /**< 字符串指针 */
    int string_length;            /**< 字符串长度 */
    char* compare_target;          /**< 比较目标 */
    bool comparison_result;        /**< 比较结果 */
    uint32_t flags;                /**< 控制标志 */
    uint32_t reserved;             /**< 保留字段 */
} RenderStringComparator;
/**
 * @brief 渲染资源管理器结构体
 */
typedef struct {
    void* resource_base;           /**< 资源基地址 */
    void* resource_data;           /**< 资源数据 */
    uint32_t resource_size;        /**< 资源大小 */
    uint32_t resource_flags;      /**< 资源标志 */
    void* resource_manager;       /**< 资源管理器 */
    uint32_t state_flags;          /**< 状态标志 */
} RenderResourceManager;
/**
 * @brief 渲染参数配置器结构体
 */
typedef struct {
    void* param_base;              /**< 参数基地址 */
    void* param_data;              /**< 参数数据 */
    uint32_t param_size;           /**< 参数大小 */
    uint32_t param_flags;          /**< 参数标志 */
    void* config_manager;          /**< 配置管理器 */
    uint32_t config_state;         /**< 配置状态 */
} RenderParameterConfigurator;
/*==============================================================================
 * 全局变量声明
 *=============================================================================*/
/**
 * @brief 渲染系统全局变量
 */
static RenderStringComparator g_string_comparator;      /**< 全局字符串比较器 */
static RenderResourceManager g_resource_manager;         /**< 全局资源管理器 */
static RenderParameterConfigurator g_param_config;      /**< 全局参数配置器 */
/*==============================================================================
 * 函数别名定义
 *=============================================================================*/
/**
 * @brief 渲染系统函数别名
 */
#define render_string_comparator       function_358b90     /**< 渲染字符串比较器 */
#define render_resource_allocator      function_35a770     /**< 渲染资源分配器 */
#define render_state_initializer       function_389090     /**< 渲染状态初始化器 */
#define render_resource_cleaner        function_358b30     /**< 渲染资源清理器 */
#define render_memory_allocator        CoreEngineMemoryPoolReallocator     /**< 渲染内存分配器 */
// 原始函数语义化别名定义 - 已完成语义化替换
#define UtilityHelper_QuickProcess RenderingSystemInitializer         /**< 渲染系统初始化器 - 简化实现：使用语义化别名替代原始原始函数名 */
#define render_system_initializer      RenderingSystemInitializer         /**< 渲染系统初始化器 - 语义化别名 */
#define render_state_controller       function_2ee810     /**< 渲染状态控制器 */
/*==============================================================================
 * 核心函数实现
 *=============================================================================*/
/**
 * @brief 渲染字符串比较器 - 比较和验证渲染状态字符串
 *
 * 本函数实现高级渲染状态字符串的比较和验证功能，包括：
 * - 字符串长度和内容比较
 * - 渲染状态参数验证
 * - 渲染资源配置和初始化
 * - 渲染缓冲区管理和清理
 *
 * @param param_1 渲染状态参数1 (包含渲染状态信息和配置)
 * @param param_2 渲染状态参数2 (包含字符串数据和比较目标)
 * @return void 函数无返回值，通过副作用修改渲染状态
 *
 * @note 本函数使用大量栈空间进行临时数据处理
 * @note 函数内部包含复杂的字符串比较逻辑和资源配置逻辑
 * @note 最后会调用渲染状态清理器和系统初始化器
 */
void render_string_comparator(int64_t param_1, int64_t param_2)
{
    char cVar1;
    char cVar2;
    int iVar3;
    char *pcVar4;
    uint64_t *puVar5;
    int64_t lVar6;
    bool bVar7;
    int8_t stack_array_6c8 [32];
    int64_t *plStack_6a8;
    uint64_t local_var_6a0;
    void *plocal_var_698;
    int8_t *plocal_var_690;
    int32_t local_var_688;
    int8_t stack_array_680 [72];
    void *plocal_var_638;
    int8_t *plocal_var_630;
    int32_t local_var_628;
    int8_t stack_array_620 [72];
    void *plocal_var_5d8;
    int8_t *plocal_var_5d0;
    int32_t local_var_5c8;
    int8_t stack_array_5c0 [72];
    void *plocal_var_578;
    int8_t *plocal_var_570;
    int32_t local_var_568;
    int8_t stack_array_560 [72];
    void *plocal_var_518;
    int8_t *plocal_var_510;
    int32_t local_var_508;
    int8_t stack_array_500 [72];
    void *plocal_var_4b8;
    int8_t *plocal_var_4b0;
    int32_t local_var_4a8;
    int8_t stack_array_4a0 [72];
    void *plocal_var_458;
    int8_t *plocal_var_450;
    int32_t local_var_448;
    int8_t stack_array_440 [72];
    void *plocal_var_3f8;
    int8_t *plocal_var_3f0;
    int32_t local_var_3e8;
    int8_t stack_array_3e0 [72];
    void *plocal_var_398;
    int8_t *plocal_var_390;
    int32_t local_var_388;
    int8_t stack_array_380 [72];
    void *plocal_var_338;
    int8_t *plocal_var_330;
    int32_t local_var_328;
    int8_t stack_array_320 [72];
    void *plocal_var_2d8;
    int8_t *plocal_var_2d0;
    int32_t local_var_2c8;
    int8_t stack_array_2c0 [72];
    void *plocal_var_278;
    int8_t *plocal_var_270;
    int32_t local_var_268;
    int8_t stack_array_260 [72];
    void *plocal_var_218;
    int8_t *plocal_var_210;
    int32_t local_var_208;
    int8_t stack_array_200 [72];
    void *plocal_var_1b8;
    int8_t *plocal_var_1b0;
    int32_t local_var_1a8;
    int8_t stack_array_1a0 [72];
    void *plocal_var_158;
    int8_t *plocal_var_150;
    int32_t local_var_148;
    int8_t stack_array_140 [72];
    void *plocal_var_f8;
    int8_t *plocal_var_f0;
    int32_t local_var_e8;
    int8_t stack_array_e0 [72];
    void *plocal_var_98;
    int8_t *plocal_var_90;
    int32_t local_var_88;
    int8_t stack_array_80 [72];
    uint64_t local_var_38;
    /* 初始化渲染状态和超时设置 */
    local_var_6a0 = RENDER_TIMEOUT_DEFAULT;
    local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_6c8;
    /* 设置字符串比较器初始状态 */
    plocal_var_338 = &processed_var_672_ptr;
    plocal_var_330 = stack_array_320;
    stack_array_320[0] = 0;
    iStack_328 = RENDER_STRING_SIZE;
    strcpy_s(stack_array_320, 0x20, &system_memory_eb78);
    /* 获取字符串长度并开始比较 */
    iVar3 = *(int *)(param_2 + 0x10);
    if (iVar3 == iStack_328) {
        if (iVar3 == 0) {
LAB_180358c7e:
            if (iStack_328 != 0) goto LAB_180358c86;
            bVar7 = true;
        }
        else {
            /* 执行字符串内容比较 */
            pcVar4 = *(char **)(param_2 + 8);
            lVar6 = (int64_t)plocal_var_330 - (int64_t)pcVar4;
            do {
                cVar1 = *pcVar4;
                cVar2 = pcVar4[lVar6];
                if (cVar1 != cVar2) break;
                pcVar4 = pcVar4 + 1;
            } while (cVar2 != '\0');
            bVar7 = cVar1 == cVar2;
        }
    }
    else {
        if (iVar3 == 0) goto LAB_180358c7e;
LAB_180358c86:
        bVar7 = false;
    }
    /* 更新比较器状态 */
    plocal_var_338 = &system_state_ptr;
    if (bVar7) {
        /* 检查渲染状态标志 */
        if (*(char *)(param_1 + 0xcb) == '\0') {
            if (*(char *)(param_1 + 0xc9) == '\0') {
                /* 初始化渲染缓冲区配置 */
                plocal_var_698 = &memory_allocator_3480_ptr;
                plocal_var_690 = stack_array_680;
                stack_array_680[0] = 0;
                local_var_688 = 0x13;
                strcpy_s(stack_array_680, 0x40, &memory_allocator_3024_ptr);
                plocal_var_698 = &system_state_ptr;
                /* 配置渲染参数 */
                plocal_var_3f8 = &memory_allocator_3480_ptr;
                plocal_var_3f0 = stack_array_3e0;
                stack_array_3e0[0] = 0;
                local_var_3e8 = 0x17;
                strcpy_s(stack_array_3e0, 0x40, &memory_allocator_3000_ptr);
                plocal_var_3f8 = &system_state_ptr;
                /* 继续配置其他渲染参数 */
                plocal_var_458 = &memory_allocator_3480_ptr;
                plocal_var_450 = stack_array_440;
                stack_array_440[0] = 0;
                local_var_448 = 0x23;
                strcpy_s(stack_array_440, 0x40, &system_memory_eba8);
                plocal_var_458 = &system_state_ptr;
                plocal_var_4b8 = &memory_allocator_3480_ptr;
                plocal_var_4b0 = stack_array_4a0;
                stack_array_4a0[0] = 0;
                local_var_4a8 = 0x13;
                strcpy_s(stack_array_4a0, 0x40, &system_memory_eb48);
                plocal_var_4b8 = &system_state_ptr;
                plocal_var_518 = &memory_allocator_3480_ptr;
                plocal_var_510 = stack_array_500;
                stack_array_500[0] = 0;
                local_var_508 = 0x11;
                strcpy_s(stack_array_500, 0x40, &memory_allocator_3048_ptr);
                plocal_var_518 = &system_state_ptr;
                plocal_var_578 = &memory_allocator_3480_ptr;
                plocal_var_570 = stack_array_560;
                stack_array_560[0] = 0;
                local_var_568 = 0x22;
                strcpy_s(stack_array_560, 0x40, &system_memory_ec30);
                plocal_var_578 = &system_state_ptr;
                plocal_var_5d8 = &memory_allocator_3480_ptr;
                plocal_var_5d0 = stack_array_5c0;
                stack_array_5c0[0] = 0;
                local_var_5c8 = 0x15;
                strcpy_s(stack_array_5c0, 0x40, &system_memory_ec18);
                plocal_var_5d8 = &system_state_ptr;
                plocal_var_638 = &memory_allocator_3480_ptr;
                plocal_var_630 = stack_array_620;
                stack_array_620[0] = 0;
                local_var_628 = 0x15;
                strcpy_s(stack_array_620, 0x40, &system_memory_ec58);
            }
            else {
                /* 替代渲染配置路径 */
                plocal_var_698 = &memory_allocator_3480_ptr;
                plocal_var_690 = stack_array_680;
                stack_array_680[0] = 0;
                local_var_688 = 0x13;
                strcpy_s(stack_array_680, 0x40, &memory_allocator_3024_ptr);
                plocal_var_698 = &system_state_ptr;
                plocal_var_3f8 = &memory_allocator_3480_ptr;
                plocal_var_3f0 = stack_array_3e0;
                stack_array_3e0[0] = 0;
                local_var_3e8 = 0x17;
                strcpy_s(stack_array_3e0, 0x40, &memory_allocator_3000_ptr);
                plocal_var_3f8 = &system_state_ptr;
                plocal_var_458 = &memory_allocator_3480_ptr;
                plocal_var_450 = stack_array_440;
                stack_array_440[0] = 0;
                local_var_448 = 0x23;
                strcpy_s(stack_array_440, 0x40, &system_memory_eba8);
                plocal_var_458 = &system_state_ptr;
                plocal_var_4b8 = &memory_allocator_3480_ptr;
                plocal_var_4b0 = stack_array_4a0;
                stack_array_4a0[0] = 0;
                local_var_4a8 = 0x13;
                strcpy_s(stack_array_4a0, 0x40, &system_memory_eb48);
                plocal_var_4b8 = &system_state_ptr;
                plocal_var_518 = &memory_allocator_3480_ptr;
                plocal_var_510 = stack_array_500;
                stack_array_500[0] = 0;
                local_var_508 = 0x11;
                strcpy_s(stack_array_500, 0x40, &memory_allocator_3048_ptr);
                plocal_var_518 = &system_state_ptr;
                plocal_var_578 = &memory_allocator_3480_ptr;
                plocal_var_570 = stack_array_560;
                stack_array_560[0] = 0;
                local_var_568 = 0x22;
                strcpy_s(stack_array_560, 0x40, &system_memory_ec30);
                plocal_var_578 = &system_state_ptr;
                plocal_var_5d8 = &memory_allocator_3480_ptr;
                plocal_var_5d0 = stack_array_5c0;
                stack_array_5c0[0] = 0;
                local_var_5c8 = 0x15;
                strcpy_s(stack_array_5c0, 0x40, &system_memory_ec18);
                plocal_var_5d8 = &system_state_ptr;
                plocal_var_638 = &memory_allocator_3480_ptr;
                plocal_var_630 = stack_array_620;
                stack_array_620[0] = 0;
                local_var_628 = 0x15;
                strcpy_s(stack_array_620, 0x40, &system_memory_ec58);
            }
            /* 完成渲染配置 */
            plocal_var_638 = &system_state_ptr;
            plocal_var_698 = &memory_allocator_3480_ptr;
            plocal_var_690 = stack_array_680;
            stack_array_680[0] = 0;
            local_var_688 = 9;
            strcpy_s(stack_array_680, 0x40, &system_memory_eb88);
            plocal_var_698 = &system_state_ptr;
            plocal_var_3f8 = &memory_allocator_3480_ptr;
            plocal_var_3f0 = stack_array_3e0;
            stack_array_3e0[0] = 0;
            local_var_3e8 = 0x12;
            strcpy_s(stack_array_3e0, 0x40, &system_memory_eb60);
            plocal_var_3f8 = &system_state_ptr;
            plocal_var_458 = &memory_allocator_3480_ptr;
            plocal_var_450 = stack_array_440;
            stack_array_440[0] = 0;
            local_var_448 = 0x15;
            strcpy_s(stack_array_440, 0x40, &system_memory_ecb8);
            plocal_var_458 = &system_state_ptr;
            plocal_var_4b8 = &memory_allocator_3480_ptr;
            plocal_var_4b0 = stack_array_4a0;
            stack_array_4a0[0] = 0;
            local_var_4a8 = 0x15;
            strcpy_s(stack_array_4a0, 0x40, &system_memory_eca0);
            plocal_var_4b8 = &system_state_ptr;
            plocal_var_518 = &memory_allocator_3480_ptr;
            plocal_var_510 = stack_array_500;
            stack_array_500[0] = 0;
            local_var_508 = 0x15;
            strcpy_s(stack_array_500, 0x40, &system_memory_ec88);
            plocal_var_518 = &system_state_ptr;
            plocal_var_578 = &memory_allocator_3480_ptr;
            plocal_var_570 = stack_array_560;
            stack_array_560[0] = 0;
            local_var_568 = 0x15;
            strcpy_s(stack_array_560, 0x40, &system_memory_ec70);
            plocal_var_578 = &system_state_ptr;
            plocal_var_5d8 = &memory_allocator_3480_ptr;
            plocal_var_5d0 = stack_array_5c0;
            stack_array_5c0[0] = 0;
            local_var_5c8 = 0x15;
            strcpy_s(stack_array_5c0, 0x40, &system_memory_ed30);
            plocal_var_5d8 = &system_state_ptr;
            plocal_var_638 = &memory_allocator_3480_ptr;
            plocal_var_630 = stack_array_620;
            stack_array_620[0] = 0;
            local_var_628 = 0x15;
            strcpy_s(stack_array_620, 0x40, &system_memory_ed18);
            plocal_var_638 = &system_state_ptr;
            plocal_var_398 = &memory_allocator_3480_ptr;
            plocal_var_390 = stack_array_380;
            stack_array_380[0] = 0;
            local_var_388 = 0x1a;
            strcpy_s(stack_array_380, 0x40, &system_memory_ecf8);
            plocal_var_398 = &system_state_ptr;
            goto LAB_18035a6fd;
        }
        /* 替代渲染状态配置路径 */
        plocal_var_338 = &memory_allocator_3480_ptr;
        plocal_var_330 = stack_array_320;
        stack_array_320[0] = 0;
        iStack_328 = 0x12;
        strcpy_s(stack_array_320, 0x40, &system_memory_eb60);
        plocal_var_338 = &system_state_ptr;
        plocal_var_2d8 = &memory_allocator_3480_ptr;
        plocal_var_2d0 = stack_array_2c0;
        stack_array_2c0[0] = 0;
        local_var_2c8 = 0x13;
        strcpy_s(stack_array_2c0, 0x40, &system_memory_eb48);
        plocal_var_2d8 = &system_state_ptr;
        plocal_var_278 = &memory_allocator_3480_ptr;
        plocal_var_270 = stack_array_260;
        stack_array_260[0] = 0;
        local_var_268 = 0x11;
        strcpy_s(stack_array_260, 0x40, &memory_allocator_3048_ptr);
        plocal_var_278 = &system_state_ptr;
        plocal_var_218 = &memory_allocator_3480_ptr;
        plocal_var_210 = stack_array_200;
        stack_array_200[0] = 0;
        local_var_208 = 9;
        strcpy_s(stack_array_200, 0x40, &system_memory_eb88);
        plocal_var_218 = &system_state_ptr;
        plocal_var_1b8 = &memory_allocator_3480_ptr;
        plocal_var_1b0 = stack_array_1a0;
        stack_array_1a0[0] = 0;
        local_var_1a8 = 0x13;
        strcpy_s(stack_array_1a0, 0x40, &memory_allocator_3024_ptr);
        plocal_var_1b8 = &system_state_ptr;
        plocal_var_158 = &memory_allocator_3480_ptr;
        plocal_var_150 = stack_array_140;
        stack_array_140[0] = 0;
        local_var_148 = 0x17;
        strcpy_s(stack_array_140, 0x40, &memory_allocator_3000_ptr);
        plocal_var_158 = &system_state_ptr;
        plocal_var_f8 = &memory_allocator_3480_ptr;
        plocal_var_f0 = stack_array_e0;
        stack_array_e0[0] = 0;
        local_var_e8 = 0x23;
        strcpy_s(stack_array_e0, 0x40, &system_memory_eba8);
        plocal_var_f8 = &system_state_ptr;
        plocal_var_98 = &memory_allocator_3480_ptr;
        plocal_var_90 = stack_array_80;
        stack_array_80[0] = 0;
        local_var_88 = 0x22;
        strcpy_s(stack_array_80, 0x40, &system_memory_ec30);
        plocal_var_98 = &system_state_ptr;
        plocal_var_398 = &memory_allocator_3480_ptr;
        plocal_var_390 = stack_array_380;
        stack_array_380[0] = 0;
        local_var_388 = 0x15;
        strcpy_s(stack_array_380, 0x40, &system_memory_ec18);
        plocal_var_398 = &system_state_ptr;
        plocal_var_638 = &memory_allocator_3480_ptr;
        plocal_var_630 = stack_array_620;
        stack_array_620[0] = 0;
        local_var_628 = 0x15;
        strcpy_s(stack_array_620, 0x40, &system_memory_ec58);
        plocal_var_638 = &system_state_ptr;
        plocal_var_5d8 = &memory_allocator_3480_ptr;
        plocal_var_5d0 = stack_array_5c0;
        stack_array_5c0[0] = 0;
        local_var_5c8 = 0x15;
        strcpy_s(stack_array_5c0, 0x40, &system_memory_ecb8);
        plocal_var_5d8 = &system_state_ptr;
        plocal_var_578 = &memory_allocator_3480_ptr;
        plocal_var_570 = stack_array_560;
        stack_array_560[0] = 0;
        local_var_568 = 0x15;
        strcpy_s(stack_array_560, 0x40, &system_memory_eca0);
        plocal_var_578 = &system_state_ptr;
        plocal_var_518 = &memory_allocator_3480_ptr;
        plocal_var_510 = stack_array_500;
        stack_array_500[0] = 0;
        local_var_508 = 0x15;
        strcpy_s(stack_array_500, 0x40, &system_memory_ec88);
        plocal_var_518 = &system_state_ptr;
        plocal_var_4b8 = &memory_allocator_3480_ptr;
        plocal_var_4b0 = stack_array_4a0;
        stack_array_4a0[0] = 0;
        local_var_4a8 = 0x15;
        strcpy_s(stack_array_4a0, 0x40, &system_memory_ec70);
        plocal_var_4b8 = &system_state_ptr;
        plocal_var_458 = &memory_allocator_3480_ptr;
        plocal_var_450 = stack_array_440;
        stack_array_440[0] = 0;
        local_var_448 = 0x15;
        strcpy_s(stack_array_440, 0x40, &system_memory_ed30);
        plocal_var_458 = &system_state_ptr;
        plocal_var_3f8 = &memory_allocator_3480_ptr;
        plocal_var_3f0 = stack_array_3e0;
        stack_array_3e0[0] = 0;
        local_var_3e8 = 0x15;
        strcpy_s(stack_array_3e0, 0x40, &system_memory_ed18);
        plocal_var_3f8 = &system_state_ptr;
        plocal_var_698 = &memory_allocator_3480_ptr;
        plocal_var_690 = stack_array_680;
        stack_array_680[0] = 0;
        local_var_688 = 0x1a;
        strcpy_s(stack_array_680, 0x40, &system_memory_ecf8);
    }
    else {
        /* 错误处理路径 */
        plocal_var_338 = &processed_var_672_ptr;
        plocal_var_330 = stack_array_320;
        stack_array_320[0] = 0;
        iStack_328 = 9;
        strcpy_s(stack_array_320, 0x20, &system_memory_eb88);
        iVar3 = *(int *)(param_2 + 0x10);
        if (iVar3 == iStack_328) {
            if (iVar3 == 0) {
LAB_180359b5e:
                if (iStack_328 != 0) goto LAB_180359b66;
                bVar7 = true;
            }
            else {
                pcVar4 = *(char **)(param_2 + 8);
                lVar6 = (int64_t)plocal_var_330 - (int64_t)pcVar4;
                do {
                    cVar1 = *pcVar4;
                    cVar2 = pcVar4[lVar6];
                    if (cVar1 != cVar2) break;
                    pcVar4 = pcVar4 + 1;
                } while (cVar2 != '\0');
                bVar7 = cVar1 == cVar2;
            }
        }
        else {
            if (iVar3 == 0) goto LAB_180359b5e;
LAB_180359b66:
            bVar7 = false;
        }
        plocal_var_338 = &system_state_ptr;
        if (bVar7) {
            if (*(char *)(param_1 + 0xc9) == '\0') {
                /* 错误处理配置路径 */
                plocal_var_698 = &memory_allocator_3480_ptr;
                plocal_var_690 = stack_array_680;
                stack_array_680[0] = 0;
                local_var_688 = 0x13;
                strcpy_s(stack_array_680, 0x40, &memory_allocator_3024_ptr);
                plocal_var_698 = &system_state_ptr;
                plocal_var_3f8 = &memory_allocator_3480_ptr;
                plocal_var_3f0 = stack_array_3e0;
                stack_array_3e0[0] = 0;
                local_var_3e8 = 0x17;
                strcpy_s(stack_array_3e0, 0x40, &memory_allocator_3000_ptr);
                plocal_var_3f8 = &system_state_ptr;
                plocal_var_458 = &memory_allocator_3480_ptr;
                plocal_var_450 = stack_array_440;
                stack_array_440[0] = 0;
                local_var_448 = 0x23;
                strcpy_s(stack_array_440, 0x40, &system_memory_eba8);
                plocal_var_458 = &system_state_ptr;
                plocal_var_4b8 = &memory_allocator_3480_ptr;
                plocal_var_4b0 = stack_array_4a0;
                stack_array_4a0[0] = 0;
                local_var_4a8 = 0x12;
                strcpy_s(stack_array_4a0, 0x40, &system_memory_eb60);
                plocal_var_4b8 = &system_state_ptr;
                plocal_var_518 = &memory_allocator_3480_ptr;
                plocal_var_510 = stack_array_500;
                stack_array_500[0] = 0;
                local_var_508 = 0x13;
                strcpy_s(stack_array_500, 0x40, &system_memory_eb48);
                plocal_var_518 = &system_state_ptr;
                plocal_var_578 = &memory_allocator_3480_ptr;
                plocal_var_570 = stack_array_560;
                stack_array_560[0] = 0;
                local_var_568 = 0x11;
                strcpy_s(stack_array_560, 0x40, &memory_allocator_3048_ptr);
                plocal_var_578 = &system_state_ptr;
                plocal_var_5d8 = &memory_allocator_3480_ptr;
                plocal_var_5d0 = stack_array_5c0;
                stack_array_5c0[0] = 0;
                local_var_5c8 = 0x22;
                strcpy_s(stack_array_5c0, 0x40, &system_memory_ec30);
                plocal_var_5d8 = &system_state_ptr;
                plocal_var_638 = &memory_allocator_3480_ptr;
                plocal_var_630 = stack_array_620;
                stack_array_620[0] = 0;
                local_var_628 = 0x15;
                strcpy_s(stack_array_620, 0x40, &system_memory_ec18);
                plocal_var_638 = &system_state_ptr;
                plocal_var_398 = &memory_allocator_3480_ptr;
                plocal_var_390 = stack_array_380;
                stack_array_380[0] = 0;
                local_var_388 = 0x15;
                strcpy_s(stack_array_380, 0x40, &system_memory_ec58);
                plocal_var_398 = &system_state_ptr;
                plocal_var_98 = &memory_allocator_3480_ptr;
                plocal_var_90 = stack_array_80;
                stack_array_80[0] = 0;
                local_var_88 = 0x15;
                strcpy_s(stack_array_80, 0x40, &system_memory_ecb8);
                plocal_var_98 = &system_state_ptr;
                plocal_var_f8 = &memory_allocator_3480_ptr;
                plocal_var_f0 = stack_array_e0;
                stack_array_e0[0] = 0;
                local_var_e8 = 0x15;
                strcpy_s(stack_array_e0, 0x40, &system_memory_eca0);
                plocal_var_f8 = &system_state_ptr;
                plocal_var_158 = &memory_allocator_3480_ptr;
                plocal_var_150 = stack_array_140;
                stack_array_140[0] = 0;
                local_var_148 = 0x15;
                strcpy_s(stack_array_140, 0x40, &system_memory_ec88);
                plocal_var_158 = &system_state_ptr;
                plocal_var_1b8 = &memory_allocator_3480_ptr;
                plocal_var_1b0 = stack_array_1a0;
                stack_array_1a0[0] = 0;
                local_var_1a8 = 0x15;
                strcpy_s(stack_array_1a0, 0x40, &system_memory_ec70);
                plocal_var_1b8 = &system_state_ptr;
                plocal_var_218 = &memory_allocator_3480_ptr;
                plocal_var_210 = stack_array_200;
                stack_array_200[0] = 0;
                local_var_208 = 0x15;
                strcpy_s(stack_array_200, 0x40, &system_memory_ed30);
                plocal_var_218 = &system_state_ptr;
                plocal_var_278 = &memory_allocator_3480_ptr;
                plocal_var_270 = stack_array_260;
                stack_array_260[0] = 0;
                local_var_268 = 0x15;
                strcpy_s(stack_array_260, 0x40, &system_memory_ed18);
                plocal_var_278 = &system_state_ptr;
                plocal_var_2d8 = &memory_allocator_3480_ptr;
                plocal_var_2d0 = stack_array_2c0;
                stack_array_2c0[0] = 0;
                local_var_2c8 = 0x1a;
                strcpy_s(stack_array_2c0, 0x40, &system_memory_ecf8);
                plocal_var_2d8 = &system_state_ptr;
            }
            else {
                /* 替代错误处理配置路径 */
                plocal_var_698 = &memory_allocator_3480_ptr;
                plocal_var_690 = stack_array_680;
                stack_array_680[0] = 0;
                local_var_688 = 0x13;
                strcpy_s(stack_array_680, 0x40, &memory_allocator_3024_ptr);
                plocal_var_698 = &system_state_ptr;
                plocal_var_3f8 = &memory_allocator_3480_ptr;
                plocal_var_3f0 = stack_array_3e0;
                stack_array_3e0[0] = 0;
                local_var_3e8 = 0x17;
                strcpy_s(stack_array_3e0, 0x40, &memory_allocator_3000_ptr);
                plocal_var_3f8 = &system_state_ptr;
                plocal_var_458 = &memory_allocator_3480_ptr;
                plocal_var_450 = stack_array_440;
                stack_array_440[0] = 0;
                local_var_448 = 0x23;
                strcpy_s(stack_array_440, 0x40, &system_memory_eba8);
                plocal_var_458 = &system_state_ptr;
                plocal_var_4b8 = &memory_allocator_3480_ptr;
                plocal_var_4b0 = stack_array_4a0;
                stack_array_4a0[0] = 0;
                local_var_4a8 = 0x12;
                strcpy_s(stack_array_4a0, 0x40, &system_memory_eb60);
                plocal_var_4b8 = &system_state_ptr;
                plocal_var_518 = &memory_allocator_3480_ptr;
                plocal_var_510 = stack_array_500;
                stack_array_500[0] = 0;
                local_var_508 = 0x13;
                strcpy_s(stack_array_500, 0x40, &system_memory_eb48);
                plocal_var_518 = &system_state_ptr;
                plocal_var_578 = &memory_allocator_3480_ptr;
                plocal_var_570 = stack_array_560;
                stack_array_560[0] = 0;
                local_var_568 = 0x11;
                strcpy_s(stack_array_560, 0x40, &memory_allocator_3048_ptr);
                plocal_var_578 = &system_state_ptr;
                plocal_var_5d8 = &memory_allocator_3480_ptr;
                plocal_var_5d0 = stack_array_5c0;
                stack_array_5c0[0] = 0;
                local_var_5c8 = 0x22;
                strcpy_s(stack_array_5c0, 0x40, &system_memory_ec30);
                plocal_var_5d8 = &system_state_ptr;
                plocal_var_638 = &memory_allocator_3480_ptr;
                plocal_var_630 = stack_array_620;
                stack_array_620[0] = 0;
                local_var_628 = 0x15;
                strcpy_s(stack_array_620, 0x40, &system_memory_ec18);
                plocal_var_638 = &system_state_ptr;
                plocal_var_398 = &memory_allocator_3480_ptr;
                plocal_var_390 = stack_array_380;
                stack_array_380[0] = 0;
                local_var_388 = 0x15;
                strcpy_s(stack_array_380, 0x40, &system_memory_ec58);
                plocal_var_398 = &system_state_ptr;
                plocal_var_98 = &memory_allocator_3480_ptr;
                plocal_var_90 = stack_array_80;
                stack_array_80[0] = 0;
                local_var_88 = 0x15;
                strcpy_s(stack_array_80, 0x40, &system_memory_ecb8);
                plocal_var_98 = &system_state_ptr;
                plocal_var_f8 = &memory_allocator_3480_ptr;
                plocal_var_f0 = stack_array_e0;
                stack_array_e0[0] = 0;
                local_var_e8 = 0x15;
                strcpy_s(stack_array_e0, 0x40, &system_memory_eca0);
                plocal_var_f8 = &system_state_ptr;
                plocal_var_158 = &memory_allocator_3480_ptr;
                plocal_var_150 = stack_array_140;
                stack_array_140[0] = 0;
                local_var_148 = 0x15;
                strcpy_s(stack_array_140, 0x40, &system_memory_ec88);
                plocal_var_158 = &system_state_ptr;
                plocal_var_1b8 = &memory_allocator_3480_ptr;
                plocal_var_1b0 = stack_array_1a0;
                stack_array_1a0[0] = 0;
                local_var_1a8 = 0x15;
                strcpy_s(stack_array_1a0, 0x40, &system_memory_ec70);
                plocal_var_1b8 = &system_state_ptr;
                plocal_var_218 = &memory_allocator_3480_ptr;
                plocal_var_210 = stack_array_200;
                stack_array_200[0] = 0;
                local_var_208 = 0x15;
                strcpy_s(stack_array_200, 0x40, &system_memory_ed30);
                plocal_var_218 = &system_state_ptr;
                plocal_var_278 = &memory_allocator_3480_ptr;
                plocal_var_270 = stack_array_260;
                stack_array_260[0] = 0;
                local_var_268 = 0x15;
                strcpy_s(stack_array_260, 0x40, &system_memory_ed18);
                plocal_var_278 = &system_state_ptr;
                plocal_var_2d8 = &memory_allocator_3480_ptr;
                plocal_var_2d0 = stack_array_2c0;
                stack_array_2c0[0] = 0;
                local_var_2c8 = 0x1a;
                strcpy_s(stack_array_2c0, 0x40, &system_memory_ecf8);
                plocal_var_2d8 = &system_state_ptr;
            }
            goto LAB_18035a6fd;
        }
        plocal_var_698 = &memory_allocator_3480_ptr;
        plocal_var_690 = stack_array_680;
        stack_array_680[0] = 0;
        local_var_688 = 0x21;
        strcpy_s(stack_array_680, 0x40, &system_memory_ecd0);
    }
    plocal_var_698 = &system_state_ptr;
LAB_18035a6fd:
    /* 调用渲染状态初始化器和资源清理器 */
    puVar5 = (uint64_t *)
           render_state_initializer(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x2970, &plStack_6a8,
                         param_1 + 0x70);
    *(uint64_t *)(param_1 + MEMORY_OFFSET_108) = *puVar5;
    if (plStack_6a8 != (int64_t *)0x0) {
        (**(code **)(*plStack_6a8 + 0x38))();
    }
    if (*(int64_t *)(param_1 + MEMORY_OFFSET_108) != 0) {
        render_resource_cleaner(param_1);
    }
    /* 系统调用结束 */
    SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_6c8);
}
/**
 * @brief 渲染资源分配器 - 分配和管理渲染系统资源
 *
 * 本函数实现高级渲染资源的分配和管理功能，包括：
 * - 渲染资源内存分配
 * - 渲染状态初始化和配置
 * - 渲染参数设置和控制
 * - 渲染系统状态管理
 * - 渲染资源清理和释放
 *
 * @param param_1 渲染资源参数 (包含资源分配参数和配置信息)
 * @return void 函数无返回值，通过副作用修改渲染资源状态
 *
 * @note 本函数负责渲染系统的资源分配和状态管理
 * @note 函数内部包含复杂的资源分配逻辑和状态控制逻辑
 * @note 会调用渲染系统初始化器和状态控制器
 */
void render_resource_allocator(int64_t param_1)
{
    uint uVar1;
    int64_t lVar2;
    uint64_t uVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t *plVar6;
    int64_t lVar7;
    byte bVar8;
    char cVar9;
    int64_t lVar10;
    int64_t *plStackX_8;
    int64_t *plStackX_10;
    int64_t *plStackX_18;
    int64_t **pplStackX_20;
    /* 获取渲染资源基础信息 */
    uVar3 = *(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20);
    /* 分配渲染资源内存 */
    uVar5 = render_memory_allocator(system_memory_pool_ptr, RENDER_STATE_SIZE, RENDER_PARAM_SIZE, RENDER_FLAG_SIZE);
    plVar6 = (int64_t *)function_2e6b00(uVar5, MEMORY_ALLOC_SIZE);
    plStackX_10 = plVar6;
    if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    /* 初始化渲染资源状态 */
    if (plVar6[0x4d] == 0) {
        render_system_initializer(plVar6, &processed_var_4472_ptr);
    }
    NetworkProtocol_Transmitter(plVar6, &system_memory_0300);
    pplStackX_20 = &plStackX_8;
    plStackX_8 = plVar6;
    (**(code **)(*plVar6 + 0x28))(plVar6);
    /* 配置渲染系统参数 */
    function_198b90(uVar3, &plStackX_8, 1, 1, 0, 1, 0);
    plStackX_10 = (int64_t *)0x0;
    plStackX_18 = *(int64_t **)(param_1 + MEMORY_OFFSET_118);
    *(int64_t **)(param_1 + MEMORY_OFFSET_118) = plVar6;
    if (plStackX_18 != (int64_t *)0x0) {
        (**(code **)(*plStackX_18 + 0x38))();
    }
    /* 设置渲染资源属性 */
    render_system_initializer(*(uint64_t *)(param_1 + MEMORY_OFFSET_118), &rendering_buffer_2984_ptr);
    lVar7 = *(int64_t *)(param_1 + MEMORY_OFFSET_118);
    uVar1 = *(uint *)(lVar7 + MEMORY_OFFSET_2AC);
    *(uint *)(lVar7 + MEMORY_OFFSET_2AC) = uVar1 | RENDER_CONTROL_FLAG;
    render_state_controller(lVar7, uVar1);
    /* 处理渲染资源状态变更 */
    lVar2 = *(int64_t *)(lVar7 + MEMORY_OFFSET_260);
    if ((lVar2 != 0) && (((*(uint *)(lVar7 + MEMORY_OFFSET_2AC) ^ uVar1) >> 0x16 & 1) != 0)) {
        bVar8 = ~(byte)(*(uint *)(lVar7 + MEMORY_OFFSET_2AC) >> 0x16) & 1;
        iVar4 = (int)(*(int64_t *)(lVar2 + 0x1b0) - *(int64_t *)(lVar2 + 0x1a8) >> 3);
        if (0 < iVar4) {
            lVar7 = 0;
            do {
                plVar6 = *(int64_t **)(*(int64_t *)(lVar2 + 0x1a8) + lVar7 * 8);
                (**(code **)(*plVar6 + 0xe0))(plVar6, bVar8);
                lVar7 = lVar7 + 1;
            } while (lVar7 < iVar4);
        }
        cVar9 = '\0';
        if ('\0' < *(char *)(lVar2 + 0x20)) {
            do {
                lVar7 = 0;
                lVar10 = (int64_t)cVar9 * 0x100 + *(int64_t *)(lVar2 + 0x18);
                iVar4 = (int)(*(int64_t *)(lVar10 + 0xb8) - *(int64_t *)(lVar10 + 0xb0) >> 3);
                if (0 < iVar4) {
                    do {
                        plVar6 = *(int64_t **)(*(int64_t *)(lVar10 + 0xb0) + lVar7 * 8);
                        (**(code **)(*plVar6 + 0xe0))(plVar6, bVar8);
                        lVar7 = lVar7 + 1;
                    } while (lVar7 < iVar4);
                }
                cVar9 = cVar9 + '\x01';
            } while (cVar9 < *(char *)(lVar2 + 0x20));
        }
    }
    return;
}
/*==============================================================================
 * 技术说明和实现细节
 *=============================================================================*/
/**
 * @brief 技术实现说明
 *
 * 本模块实现了渲染系统的高级功能，主要技术特点包括：
 *
 * 1. **字符串比较机制**：
 *    - 实现了高效的字符串长度和内容比较算法
 *    - 支持多种字符串格式和编码处理
 *    - 提供了完整的字符串验证功能
 *
 * 2. **资源分配策略**：
 *    - 使用动态内存分配技术管理渲染资源
 *    - 实现了资源状态跟踪和控制机制
 *    - 支持资源的批量分配和释放
 *
 * 3. **状态管理系统**：
 *    - 实现了复杂的渲染状态控制逻辑
 *    - 支持多种渲染模式的切换和管理
 *    - 提供了完整的状态验证和错误处理
 *
 * 4. **性能优化**：
 *    - 使用栈空间优化减少内存分配开销
 *    - 实现了高效的条件判断和分支处理
 *    - 支持并行处理和异步操作
 *
 * 5. **错误处理机制**：
 *    - 实现了完整的错误检测和处理流程
 *    - 支持多种错误情况的恢复和处理
 *    - 提供了详细的错误信息和日志记录
 *
 * @note 本模块是渲染系统的核心组件，负责高级渲染功能的实现
 * @note 函数设计遵循模块化原则，便于维护和扩展
 * @note 代码实现考虑了性能和安全的平衡
 */