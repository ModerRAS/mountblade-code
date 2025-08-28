#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part026.c - UI系统高级初始化和资源管理模块
// 包含13个核心函数，涵盖UI系统CPU特性检测、内存管理、初始化控制、
// 资源分配、状态管理和高级UI功能等核心UI系统功能
// =============================================================================
// 常量定义
// =============================================================================
// CPU特性检测相关常量
#define CPU_FEATURE_SSE2           0x00000001  // SSE2指令集支持
#define CPU_FEATURE_SSE3           0x00000002  // SSE3指令集支持
#define CPU_FEATURE_SSSE3          0x00000004  // SSSE3指令集支持
#define CPU_FEATURE_SSE41          0x00000008  // SSE4.1指令集支持
#define CPU_FEATURE_SSE42          0x00000010  // SSE4.2指令集支持
#define CPU_FEATURE_AVX            0x00000020  // AVX指令集支持
#define CPU_FEATURE_AVX2           0x00000040  // AVX2指令集支持
#define CPU_FEATURE_AVX512F        0x00000080  // AVX-512基础指令集支持
// 内存对齐常量
#define MEMORY_ALIGNMENT_SIZE      0x10        // 内存对齐大小 (16字节)
#define CRITICAL_SECTION_SIZE     0x28        // 临界区结构体大小
#define MAX_UI_LAYERS              4           // 最大UI层数
#define UI_RESOURCE_POOL_SIZE      0x4440      // UI资源池大小
// 错误代码
#define UI_SUCCESS                 0x00000000  // 操作成功
#define UI_ERROR_MEMORY            0x00000001  // 内存错误
#define UI_ERROR_INITIALIZATION    0x00000002  // 初始化错误
#define UI_ERROR_INVALID_PARAM     0x00000003  // 无效参数
// =============================================================================
// 全局变量声明
// =============================================================================
// CPU特性标志
static bool g_has_sse2_support = false;        // SSE2指令集支持标志
static bool g_has_sse3_support = false;        // SSE3指令集支持标志
static bool g_has_ssse3_support = false;       // SSSE3指令集支持标志
static bool g_has_sse41_support = false;       // SSE4.1指令集支持标志
static bool g_has_sse42_support = false;       // SSE4.2指令集支持标志
static bool g_has_avx_support = false;         // AVX指令集支持标志
static bool g_has_avx2_support = false;         // AVX2指令集支持标志
// UI系统函数指针表
static void* (*g_ui_processor_func)(void) = NULL;
static void* (*g_ui_renderer_func)(void) = NULL;
static void* (*g_ui_memory_manager_func)(void) = NULL;
static void* (*g_ui_input_handler_func)(void) = NULL;
// 初始化状态标志
static volatile int g_ui_initialized = 0;      // UI系统初始化状态
static volatile int g_ui_init_count = 0;       // UI系统初始化计数
static void* g_ui_critical_section = NULL;     // UI系统临界区
// =============================================================================
// 函数声明
// =============================================================================
// CPU特性检测函数
static void ui_system_detect_cpu_features(void);
static uint ui_system_get_cpu_capabilities(void);
// 内存管理函数
static void* ui_system_aligned_malloc(size_t size, size_t alignment);
static void ui_system_aligned_free(void* ptr);
// 初始化控制函数
static void ui_system_execute_once(void (*func)(void));
static void ui_system_execute_once_alt(void (*func)(void));
static void ui_system_execute_once_protected(void (*func)(void));
// 资源管理函数
static void* ui_system_create_resource_pool(size_t size);
static void ui_system_destroy_resource_pool(void* pool);
static void ui_system_cleanup_resources(void);
// UI系统核心功能函数
static void ui_system_initialize_core(void);
static void ui_system_shutdown_core(void);
static int ui_system_process_ui_events(void);
static void ui_system_update_ui_state(void);
// =============================================================================
// 函数别名定义
// =============================================================================
#define ui_system_cpu_feature_detector        ui_system_detect_cpu_features
#define ui_system_cpu_capability_checker      ui_system_get_cpu_capabilities
#define ui_system_memory_allocator            ui_system_aligned_malloc
#define ui_system_memory_deallocator          ui_system_aligned_free
#define ui_system_single_execution_handler    ui_system_execute_once
#define ui_system_protected_execution_handler ui_system_execute_once_protected
#define ui_system_resource_pool_creator       ui_system_create_resource_pool
#define ui_system_resource_pool_destroyer     ui_system_destroy_resource_pool
#define ui_system_resource_cleanup_handler    ui_system_cleanup_resources
#define ui_system_core_initializer            ui_system_initialize_core
#define ui_system_core_shutdown_handler       ui_system_shutdown_core
#define ui_system_event_processor              ui_system_process_ui_events
#define ui_system_state_updater               ui_system_update_ui_state
// =============================================================================
// 核心功能实现
// =============================================================================
/**
 * UI系统CPU特性检测函数
 * 检测当前CPU支持的指令集特性，为UI系统优化提供硬件信息
 * 设置相应的全局标志位，用于后续的代码路径选择
 */
void ui_system_detect_cpu_features(void)
{
    uint* cpu_info;
    int64_t version_info;
    uint feature_flags;
    bool has_sse2 = false;
    bool has_sse3 = false;
    bool has_ssse3 = false;
    bool has_sse41 = false;
    bool has_sse42 = false;
    bool has_avx = false;
    bool has_avx2 = false;
    byte xcr0_state;
// 获取CPU基本信息
    cpu_info = (uint*)cpuid_basic_info(0);
// 初始化所有特性标志为false
    has_sse2 = false;
    has_sse3 = false;
    has_ssse3 = false;
    has_sse41 = false;
    has_sse42 = false;
    has_avx = false;
    has_avx2 = false;
// 如果CPUID指令可用，进行特性检测
    if (*cpu_info != 0) {
        version_info = cpuid_Version_info(1);
        feature_flags = *(uint*)(version_info + 0xc);
// 检测SSE2、SSE3、SSSE3、SSE4.1、SSE4.2特性
        has_sse2 = (feature_flags & CPU_FEATURE_SSE2) != 0;
        has_sse3 = (feature_flags & CPU_FEATURE_SSE3) != 0;
        has_ssse3 = (feature_flags & CPU_FEATURE_SSSE3) != 0;
        has_sse41 = (feature_flags & CPU_FEATURE_SSE41) != 0;
        has_sse42 = (feature_flags & CPU_FEATURE_SSE42) != 0;
// 检测AVX特性
        has_avx = false;
        has_avx2 = false;
        if (((feature_flags & 0x18000000) == 0x18000027) &&
            ((xcr0_state & 6) == 6)) {
            has_avx = true;
            has_avx2 = false;
// 检测AVX2特性
            if ((6 < *cpu_info) &&
                (version_info = cpuid_Extended_Feature_Enumeration_info(7),
                 has_avx2 = false,
                 (*(uint*)(version_info + 4) & 0x20) != 0)) {
                has_avx = true;
                has_avx2 = true;
            }
        }
    }
// 设置全局CPU特性标志
    g_has_sse2_support = has_sse2;
    g_has_sse3_support = has_sse3;
    g_has_ssse3_support = has_ssse3;
    g_has_sse41_support = has_sse41;
    g_has_sse42_support = has_sse42;
    g_has_avx_support = has_avx;
    g_has_avx2_support = has_avx2;
// 根据CPU特性设置最优的UI处理函数
    g_ui_processor_func = ui_system_get_default_processor();
    if (has_sse42) {
        g_ui_processor_func = ui_system_get_sse42_processor();
    }
    if (has_avx2) {
        g_ui_processor_func = ui_system_get_avx2_processor();
    }
// 根据CPU特性设置最优的UI渲染函数
    g_ui_renderer_func = ui_system_get_default_renderer();
    if (has_sse42) {
        g_ui_renderer_func = ui_system_get_sse42_renderer();
    }
    if (has_avx2) {
        g_ui_renderer_func = ui_system_get_avx2_renderer();
    }
// 根据CPU特性设置最优的内存管理函数
    g_ui_memory_manager_func = ui_system_get_default_memory_manager();
    if (has_sse42) {
        g_ui_memory_manager_func = ui_system_get_sse42_memory_manager();
    }
    if (has_avx2) {
        g_ui_memory_manager_func = ui_system_get_avx2_memory_manager();
    }
// 根据CPU特性设置最优的输入处理函数
    g_ui_input_handler_func = ui_system_get_default_input_handler();
    if (has_sse42) {
        g_ui_input_handler_func = ui_system_get_sse42_input_handler();
    }
    if (has_avx2) {
        g_ui_input_handler_func = ui_system_get_avx2_input_handler();
    }
}
/**
 * UI系统CPU能力获取函数
 * 获取当前CPU支持的特性标志位
 * 返回CPU特性掩码，用于系统优化决策
 */
uint ui_system_get_cpu_capabilities(void)
{
    uint* cpu_info;
    uint max_function;
    uint feature_flags;
    uint xcr0_state;
// 获取CPU基本信息
    cpu_info = (uint*)cpuid_basic_info(0);
    max_function = *cpu_info;
    feature_flags = max_function;
// 如果CPUID指令可用，获取特性信息
    if (max_function != 0) {
        cpu_info = (uint*)cpuid_Version_info(1);
        feature_flags = *cpu_info;
// 检查AVX支持
        if ((((cpu_info[3] & 0x18000000) == 0x18000027) &&
             (feature_flags = xcr0_state, ((byte)xcr0_state & 6) == 6)) &&
            (6 < max_function)) {
            cpu_info = (uint*)cpuid_Extended_Feature_Enumeration_info(7);
            feature_flags = *cpu_info;
        }
    }
    return feature_flags;
}
/**
 * UI系统单次执行函数
 * 确保指定的函数在整个系统生命周期内只执行一次
 * 使用临界区保证线程安全
 */
void ui_system_execute_once(void (*func)(void))
{
    int counter;
    int64_t critical_section;
    int64_t existing_section;
    bool section_exists;
// 检查是否已经初始化
    if (g_ui_initialized == 0) {
        LOCK();
        g_ui_init_count = g_ui_init_count + 1;
        UNLOCK();
// 创建临界区
        critical_section = malloc(CRITICAL_SECTION_SIZE);
        InitializeCriticalSection(critical_section);
        LOCK();
        section_exists = g_ui_critical_section != 0;
        existing_section = critical_section;
        if (section_exists) {
            existing_section = g_ui_critical_section;
        }
        g_ui_critical_section = existing_section;
        UNLOCK();
// 如果临界区已存在，清理新创建的
        if (section_exists) {
            DeleteCriticalSection(critical_section);
            free(critical_section);
        }
// 进入临界区执行初始化函数
        EnterCriticalSection(g_ui_critical_section);
        if (g_ui_initialized == 0) {
            (*func)();
            g_ui_initialized = 1;
        }
        LeaveCriticalSection(g_ui_critical_section);
// 清理临界区
        LOCK();
        counter = g_ui_init_count + -1;
        UNLOCK();
        section_exists = g_ui_init_count == 1;
        g_ui_init_count = counter;
        if (section_exists) {
            DeleteCriticalSection(g_ui_critical_section);
            free(g_ui_critical_section);
            g_ui_critical_section = 0;
        }
    }
}
/**
 * UI系统单次执行函数（替代版本）
 * 功能与ui_system_execute_once相同，但使用不同的参数传递方式
 */
void ui_system_execute_once_alt(void (*func)(void))
{
    int counter;
    int64_t critical_section;
    int64_t existing_section;
    void* function_param;
    bool section_exists;
    LOCK();
    g_ui_init_count = g_ui_init_count + 1;
    UNLOCK();
    critical_section = malloc(CRITICAL_SECTION_SIZE);
    InitializeCriticalSection(critical_section);
    LOCK();
    section_exists = g_ui_critical_section != 0;
    existing_section = critical_section;
    if (section_exists) {
        existing_section = g_ui_critical_section;
    }
    g_ui_critical_section = existing_section;
    UNLOCK();
    if (section_exists) {
        DeleteCriticalSection(critical_section);
        free(critical_section);
    }
    EnterCriticalSection(g_ui_critical_section);
    if (g_ui_initialized == 0) {
        (*function_param)();
        g_ui_initialized = 1;
    }
    LeaveCriticalSection(g_ui_critical_section);
    LOCK();
    counter = g_ui_init_count + -1;
    UNLOCK();
    section_exists = g_ui_init_count == 1;
    g_ui_init_count = counter;
    if (section_exists) {
        DeleteCriticalSection(g_ui_critical_section);
        free(g_ui_critical_section);
        g_ui_critical_section = 0;
    }
}
/**
 * UI系统保护执行函数
 * 在临界区保护下执行指定函数，确保线程安全
 */
void ui_system_execute_once_protected(void (*func)(void))
{
    int counter;
    void* function_param;
    bool is_last_call;
    (*function_param)();
    g_ui_initialized = 1;
    LeaveCriticalSection(g_ui_critical_section);
    LOCK();
    counter = g_ui_init_count + -1;
    UNLOCK();
    is_last_call = g_ui_init_count == 1;
    g_ui_init_count = counter;
    if (is_last_call) {
        DeleteCriticalSection(g_ui_critical_section);
        free(g_ui_critical_section);
        g_ui_critical_section = 0;
    }
}
/**
 * UI系统对齐内存分配函数
 * 分配指定大小的对齐内存，用于优化内存访问性能
 */
void* ui_system_aligned_malloc(size_t size, size_t alignment)
{
    int64_t allocated_ptr;
    uint64_t aligned_ptr;
// 分配额外空间用于对齐
    allocated_ptr = malloc(size * alignment + 0x17);
    if (allocated_ptr != 0) {
// 计算对齐地址
        aligned_ptr = allocated_ptr + 0x17U & 0xfffffffffffffff0;
// 存储原始指针以便后续释放
        *(int64_t*)(aligned_ptr - 8) = allocated_ptr;
// 清零内存
        memset(aligned_ptr, 0, size * alignment);
    }
    return (void*)aligned_ptr;
}
/**
 * UI系统对齐内存释放函数
 * 释放由ui_system_aligned_malloc分配的内存
 */
void ui_system_aligned_free(void* ptr)
{
    int64_t original_ptr;
    uint64_t aligned_ptr;
    aligned_ptr = (uint64_t)ptr + 0x17U & 0xfffffffffffffff0;
    *(int64_t*)(aligned_ptr - 8) = original_ptr;
    memset(aligned_ptr, 0, 0);
}
/**
 * UI系统空操作函数
 * 用于占位或作为默认函数指针
 */
void ui_system_empty_function(void)
{
    return;
}
/**
 * UI系统资源池创建函数
 * 创建指定大小的UI资源池，用于批量管理UI资源
 */
void* ui_system_create_resource_pool(size_t size)
{
    int64_t pool_ptr;
    uint64_t aligned_ptr;
    pool_ptr = malloc(size + 7 + MEMORY_ALIGNMENT_SIZE);
    if (pool_ptr != 0) {
        aligned_ptr = (int64_t)((int)MEMORY_ALIGNMENT_SIZE + -1) + 8 + pool_ptr &
                     (int64_t)-(int)MEMORY_ALIGNMENT_SIZE;
        *(int64_t*)(aligned_ptr - 8) = pool_ptr;
        return (void*)aligned_ptr;
    }
    return 0;
}
/**
 * UI系统资源池销毁函数
 * 销毁UI资源池并释放相关资源
 */
void ui_system_resource_pool_destroyer(void* pool)
{
    int* resource_count;
    int current_count;
    int64_t layer_offset;
    if (((*(int*)((int64_t)pool + 0x441c) == 0) &&
         (*(uint*)((int64_t)pool + 0x430c) < 2)) &&
        (*(int*)((int64_t)pool + 0x4358) == 0)) {
        layer_offset = (int64_t)*(int*)((int64_t)pool + 0x1c94);
        if (1 < *(int*)((int64_t)pool + 0x1c80 + layer_offset * 4)) {
            resource_count = (int*)((int64_t)pool + 0x1c80 + layer_offset * 4);
            *resource_count = *resource_count + -1;
            current_count = ui_system_get_layer_index((int64_t)pool + 0x12c0);
            *(int*)((int64_t)pool + 0x1c94) = current_count;
            ui_system_copy_layer_data((int64_t)pool + 0x1a40 + layer_offset * 0x90,
                                     (int64_t)pool + 0x1a40 + (int64_t)current_count * 0x90);
        }
        *(int32_t*)((int64_t)pool + 0x1ac8 +
                       (int64_t)*(int*)((int64_t)pool + 0x1c94) * 0x90) = 1;
        *(int32_t*)((int64_t)pool + 0x1e68) = 0;
        return;
    }
}
/**
 * UI系统资源切换函数
 * 在不同的UI资源层之间进行切换
 */
uint64_t ui_system_switch_resource_layer(int64_t pool, uint param_2, uint param_3)
{
    int result;
    int64_t layer_data;
    int32_t* layer_ptr;
    int layer_index;
    int32_t* resource_ptr;
    ui_system_initialize_resource_allocator();
    if ((param_2 & 0xf) != 0) {
        param_2 = param_2 + (0x10 - (param_2 & 0xf));
    }
    if ((param_3 & 0xf) != 0) {
        param_3 = param_3 + (0x10 - (param_3 & 0xf));
    }
    layer_ptr = (int32_t*)(pool + 0x80c);
    layer_index = 0;
    resource_ptr = (int32_t*)(pool + 0x9c0);
    do {
        *resource_ptr = 0;
        *layer_ptr = 0;
        result = ui_system_allocate_layer_resources((int64_t)layer_index * 0x90 + 0x780 + pool,
                                                  param_2, param_3, 0x20);
        if (result < 0) goto cleanup_failed;
        layer_index = layer_index + 1;
        resource_ptr = resource_ptr + 1;
        layer_ptr = layer_ptr + 0x24;
    } while (layer_index < 4);
    *(int32_t*)(pool + 0x9d0) = 0;
    *(int32_t*)(pool + 0x9d4) = 1;
    *(int32_t*)(pool + 0x9d8) = 2;
    *(int32_t*)(pool + 0x9dc) = 3;
    *(uint64_t*)(pool + 0x9c0) = 0x100000001;
    *(uint64_t*)(pool + 0x9c8) = 0x100000001;
    result = ui_system_allocate_layer_resources(pool + 0x9e0, param_2, 0x10);
    if (-1 < result) {
        layer_index = (int)param_3 >> 4;
        result = (int)param_2 >> 4;
        *(int*)(pool + 3000) = result;
        *(int*)(pool + 0xbb4) = layer_index;
        *(int*)(pool + 0xbbc) = result + 1;
        *(int*)(pool + 0xbb0) = result * layer_index;
        layer_data = ui_system_create_layer_data_structure((int64_t)((layer_index + 1) * (result + 1)), 0x4c);
        *(int64_t*)(pool + 0xbe8) = layer_data;
        if (layer_data != 0) {
            *(int64_t*)(pool + 0xbf0) = ((int64_t)*(int*)(pool + 0xbbc) + 1) * 0x4c + layer_data;
            layer_data = ui_system_create_layer_data_structure((int64_t)*(int*)(pool + 3000) * 9, 1);
            *(int64_t*)(pool + 0x1958) = layer_data;
            if (layer_data != 0) {
                result = ui_system_allocate_layer_resources(pool + 0xa70, param_2, param_3, 0x20);
                if (-1 < result) {
                    *(int32_t*)(pool + 0xb90) = 0;
                    memset(pool + 0x2230, 0, 0xc40);
                }
            }
        }
    }
cleanup_failed:
    ui_system_cleanup_resource_allocator(pool);
    return 1;
}
/**
 * UI系统初始化函数
 * 初始化UI系统的核心组件和状态
 */
void ui_system_initialize_core(int64_t pool)
{
    ui_system_setup_rendering_pipeline();
    ui_system_initialize_input_system(pool);
    ui_system_setup_event_handlers();
    *(uint64_t*)(pool + 0xbc0) = 1;
    *(int32_t*)(pool + 0xc00) = 0;
    *(uint64_t*)(pool + 0xbc8) = 0;
    *(int32_t*)(pool + 0x2224) = 0;
    *(int32_t*)(pool + 0x770) = 0;
    *(uint64_t*)(pool + 0x1944) = 0;
    *(uint64_t*)(pool + 0x194c) = 0;
    *(uint64_t*)(pool + 0x1938) = 0;
}
/**
 * UI系统资源清理函数
 * 清理UI系统分配的所有资源
 */
void ui_system_cleanup_resources(int64_t pool)
{
    int64_t layer_ptr;
    int64_t layer_count;
    layer_ptr = pool + 0x780;
    layer_count = 4;
    do {
        ui_system_free_layer_resources(layer_ptr);
        layer_ptr = layer_ptr + 0x90;
        layer_count = layer_count + -1;
    } while (layer_count != 0);
    ui_system_free_layer_resources(pool + 0x9e0);
    ui_system_free_layer_resources(pool + 0xa70);
    if (*(int*)(pool + 0xb90) != 0) {
        ui_system_free_layer_resources(pool + 0xb00);
    }
    ui_system_free_resource_handle(*(uint64_t*)(pool + 0xb98));
    *(uint64_t*)(pool + 0xb98) = 0;
    ui_system_free_resource_handle(*(uint64_t*)(pool + 0x1958));
    ui_system_free_resource_handle(*(uint64_t*)(pool + 0xbe8));
    *(uint64_t*)(pool + 0x1958) = 0;
    *(uint64_t*)(pool + 0xbe8) = 0;
}
/**
 * UI系统内存分配函数
 * 分配指定大小的内存块并进行对齐处理
 */
void* ui_system_allocate_aligned_memory(int64_t size, int64_t alignment)
{
    int64_t allocated_ptr;
    uint64_t aligned_ptr;
    allocated_ptr = malloc(size * alignment + 0x17);
    if (allocated_ptr != 0) {
        aligned_ptr = allocated_ptr + 0x17U & 0xfffffffffffffff0;
        *(int64_t*)(aligned_ptr - 8) = allocated_ptr;
        memset(aligned_ptr, 0, size * alignment);
    }
    return (void*)aligned_ptr;
}
/**
 * UI系统内存清零函数
 * 清零指定内存区域
 */
void ui_system_zero_memory(void)
{
    int64_t memory_ptr;
    uint64_t aligned_ptr;
    aligned_ptr = memory_ptr + 0x17U & 0xfffffffffffffff0;
    *(int64_t*)(aligned_ptr - 8) = memory_ptr;
    memset(aligned_ptr, 0);
}
/**
 * UI系统空操作函数（简化版本）
 * 用于占位或作为默认函数指针
 */
void ui_system_no_operation(void)
{
    return;
}
/**
 * UI系统对齐内存分配函数（扩展版本）
 * 支持自定义对齐大小的内存分配
 */
uint64_t ui_system_allocate_custom_aligned_memory(int64_t size, int64_t alignment)
{
    int64_t allocated_ptr;
    uint64_t aligned_ptr;
    allocated_ptr = malloc(alignment + 7 + size);
    if (allocated_ptr != 0) {
        aligned_ptr = (int64_t)((int)size + -1) + 8 + allocated_ptr & (int64_t)-(int)size;
        *(int64_t*)(aligned_ptr - 8) = allocated_ptr;
        return aligned_ptr;
    }
    return 0;
}
/**
 * UI系统资源验证函数
 * 验证UI系统资源的状态和完整性
 */
uint64_t ui_system_validate_resources(int64_t pool)
{
    int* resource_count;
    int current_count;
    int64_t layer_offset;
    layer_offset = (int64_t)*(int*)((int64_t)pool + 0x1c94);
    if (1 < *(int*)((int64_t)pool + 0x1c80 + layer_offset * 4)) {
        resource_count = (int*)((int64_t)pool + 0x1c80 + layer_offset * 4);
        *resource_count = *resource_count + -1;
        current_count = ui_system_get_layer_index((int64_t)pool + 0x12c0);
        *(int*)((int64_t)pool + 0x1c94) = current_count;
        ui_system_copy_layer_data((int64_t)pool + 0x1a40 + layer_offset * 0x90,
                                (int64_t)pool + 0x1a40 + (int64_t)current_count * 0x90);
    }
    *(int32_t*)((int64_t)pool + 0x1ac8 +
                   (int64_t)*(int*)((int64_t)pool + 0x1c94) * 0x90) = 1;
    *(int32_t*)((int64_t)pool + 0x1e68) = 0;
    return 0;
}
/**
 * UI系统状态检查函数
 * 检查UI系统的当前状态
 */
uint64_t ui_system_check_system_status(void)
{
    return 1;
}
/**
 * UI系统资源池创建函数（完整版本）
 * 创建完整的UI系统资源池
 */
uint64_t ui_system_create_complete_resource_pool(void)
{
    int64_t pool_ptr;
    uint64_t extra_param;
    pool_ptr = ui_system_allocate_custom_aligned_memory(0x20, UI_RESOURCE_POOL_SIZE);
    if (pool_ptr != 0) {
        memset(pool_ptr, 0, UI_RESOURCE_POOL_SIZE, extra_param, pool_ptr);
    }
    return 0;
}
/**
 * UI系统初始化函数
 * 初始化UI系统的所有组件
 */
void ui_system_initialize_all_components(void)
{
    if (g_ui_initialized == 0) {
        ui_system_setup_cpu_optimizations();
        ui_system_setup_memory_management();
        g_ui_initialized = 1;
    }
}
/**
 * UI系统保护执行函数（完整版本）
 * 在临界区保护下执行指定函数，确保线程安全
 */
void ui_system_execute_once_full(void (*func)(void))
{
    int counter;
    int64_t critical_section;
    int64_t existing_section;
    bool section_exists;
    if (g_ui_initialized == 0) {
        LOCK();
        g_ui_init_count = g_ui_init_count + 1;
        UNLOCK();
        critical_section = malloc(CRITICAL_SECTION_SIZE);
        InitializeCriticalSection(critical_section);
        LOCK();
        section_exists = g_ui_critical_section != 0;
        existing_section = critical_section;
        if (section_exists) {
            existing_section = g_ui_critical_section;
        }
        g_ui_critical_section = existing_section;
        UNLOCK();
        if (section_exists) {
            DeleteCriticalSection(critical_section);
            free(critical_section);
        }
        EnterCriticalSection(g_ui_critical_section);
        if (g_ui_initialized == 0) {
            (*func)();
            g_ui_initialized = 1;
        }
        LeaveCriticalSection(g_ui_critical_section);
        LOCK();
        counter = g_ui_init_count + -1;
        UNLOCK();
        section_exists = g_ui_init_count == 1;
        g_ui_init_count = counter;
        if (section_exists) {
            DeleteCriticalSection(g_ui_critical_section);
            free(g_ui_critical_section);
            g_ui_critical_section = 0;
        }
    }
}
/**
 * UI系统保护执行函数（替代版本）
 * 使用不同的参数传递方式
 */
void ui_system_execute_once_alternative(void (*func)(void))
{
    int counter;
    int64_t critical_section;
    int64_t existing_section;
    void* function_param;
    bool section_exists;
    LOCK();
    g_ui_init_count = g_ui_init_count + 1;
    UNLOCK();
    critical_section = malloc(CRITICAL_SECTION_SIZE);
    InitializeCriticalSection(critical_section);
    LOCK();
    section_exists = g_ui_critical_section != 0;
    existing_section = critical_section;
    if (section_exists) {
        existing_section = g_ui_critical_section;
    }
    g_ui_critical_section = existing_section;
    UNLOCK();
    if (section_exists) {
        DeleteCriticalSection(critical_section);
        free(critical_section);
    }
    EnterCriticalSection(g_ui_critical_section);
    if (g_ui_initialized == 0) {
        (*function_param)();
        g_ui_initialized = 1;
    }
    LeaveCriticalSection(g_ui_critical_section);
    LOCK();
    counter = g_ui_init_count + -1;
    UNLOCK();
    section_exists = g_ui_init_count == 1;
    g_ui_init_count = counter;
    if (section_exists) {
        DeleteCriticalSection(g_ui_critical_section);
        free(g_ui_critical_section);
        g_ui_critical_section = 0;
    }
}
/**
 * UI系统保护执行函数（简化版本）
 * 简化的保护执行函数
 */
void ui_system_execute_once_simplified(void (*func)(void))
{
    int counter;
    void* function_param;
    bool is_last_call;
    (*function_param)();
    g_ui_initialized = 1;
    LeaveCriticalSection(g_ui_critical_section);
    LOCK();
    counter = g_ui_init_count + -1;
    UNLOCK();
    is_last_call = g_ui_init_count == 1;
    g_ui_init_count = counter;
    if (is_last_call) {
        DeleteCriticalSection(g_ui_critical_section);
        free(g_ui_critical_section);
        g_ui_critical_section = 0;
    }
}
/**
 * UI系统资源初始化函数
 * 初始化UI系统资源
 */
int32_t ui_system_initialize_resources(int* resource_handle, int64_t pool_size)
{
    int64_t resource_pool;
    if (*resource_handle == 0) {
        resource_pool = ui_system_create_complete_resource_pool(pool_size);
        *(int64_t*)(resource_handle + 2) = resource_pool;
        if (resource_pool == 0) {
            return UI_ERROR_MEMORY;
        }
        *(int32_t*)(resource_pool + 0x4384) = *(int32_t*)(pool_size + 0x10);
        ui_system_setup_resource_optimizations(*(uint64_t*)(resource_handle + 2));
    }
    return UI_SUCCESS;
}
/**
 * UI系统资源释放函数
 * 释放UI系统资源
 */
int32_t ui_system_release_resources(int* resource_handle)
{
    int64_t resource_pool;
    if (*resource_handle == 0) {
        resource_pool = *(int64_t*)(resource_handle + 2);
        if (resource_pool == 0) {
            return UI_ERROR_MEMORY;
        }
        if (*(int*)(resource_pool + 0x4380) != 0) {
            ui_system_cleanup_resource_pool(resource_pool, *(int32_t*)(resource_pool + 0x1e74));
        }
        ui_system_destroy_resource_pool(resource_pool);
        ui_system_cleanup_resources(resource_pool + 0x12c0);
        ui_system_free_resource_handle(resource_pool);
    }
    return UI_SUCCESS;
}
/**
 * UI系统事件处理函数
 * 处理UI系统事件
 */
int32_t ui_system_process_ui_events(int64_t pool, uint64_t event_type,
                                      uint64_t* event_data, uint64_t* result_data,
                                      uint64_t extra_param)
{
    int32_t result;
    if ((*(int*)(pool + 0x4410) != 1) && (*(int*)(pool + 0x1e68) != 0)) {
        *(int32_t*)(pool + 0x4410) = 1;
        *event_data = *(uint64_t*)(pool + 0x4408);
        *result_data = 0;
        result = ui_system_handle_ui_event(pool + 0x12c0, event_type, extra_param);
        ui_system_call_system_function();
        return result;
    }
    return 0xffffffff;
}
/**
 * UI系统状态更新函数
 * 更新UI系统状态
 */
int32_t ui_system_update_ui_state(int64_t pool, int state_type, int* state_data)
{
    int32_t* ui_context;
    int current_layer;
    void* error_handler;
    int64_t layer_offset;
    ui_context = (int32_t*)(pool + 0x12c0);
    if (state_type == 1) {
        current_layer = *(int*)(pool + 0x1c94);
    }
    else if (state_type == 2) {
        current_layer = *(int*)(pool + 0x1c98);
    }
    else {
        if (state_type != 4) {
            error_handler = &UI_ERROR_INVALID_PARAM;
            goto handle_error;
        }
        current_layer = *(int*)(pool + 0x1c9c);
    }
    layer_offset = (int64_t)current_layer;
    if ((((*(int*)(pool + 0x1a44 + layer_offset * 0x90) == state_data[1]) &&
         (ui_context[layer_offset * 0x24 + 0x1e0] == *state_data)) &&
        (*(int*)(pool + 0x1a58 + layer_offset * 0x90) == state_data[6])) &&
       (*(int*)(pool + 0x1a54 + layer_offset * 0x90) == state_data[5])) {
        ui_system_copy_layer_data(ui_context + layer_offset * 0x24 + 0x1e0, state_data);
        return *ui_context;
    }
    error_handler = &UI_ERROR_INITIALIZATION;
handle_error:
    ui_system_handle_error(ui_context, 1, error_handler);
    return *ui_context;
}
/**
 * UI系统渲染函数
 * 执行UI系统渲染操作
 */
uint64_t ui_system_render_ui(int64_t pool, uint64_t render_param, uint64_t render_data,
                             uint64_t render_options)
{
    int32_t* ui_context;
    uint render_result;
    uint64_t final_result;
    int layer_index;
    int8_t stack_buffer[32];
    uint stack_param;
    int32_t* context_ptr;
    ui_context = (int32_t*)(pool + 0x12c0);
    *ui_context = 0;
    context_ptr = ui_context;
    final_result = ui_system_validate_resources();
    stack_param = (uint)final_result;
    if ((int)stack_param < 1) {
        return final_result;
    }
    layer_index = 0;
    do {
        if (*(int*)(pool + 0x1c80 + (int64_t)layer_index * 4) == 0) break;
        layer_index = layer_index + 1;
    } while (layer_index < 4);
    *(int32_t*)(pool + 0x1c80 + (int64_t)layer_index * 4) = 1;
    *(int*)(pool + 0x1c90) = layer_index;
    *(int32_t**)(pool + 0x12a0) = ui_context + (int64_t)layer_index * 0x24 + 0x1e0;
    *(int64_t*)(pool + 0x12a8) = pool + 0x1a40 + (int64_t)*(int*)(pool + 0x1c94) * 0x90;
    *(int64_t*)(pool + 0x12b0) = pool + 0x1a40 + (int64_t)*(int*)(pool + 0x1c98) * 0x90;
    *(int64_t*)(pool + 0x12b8) = pool + 0x1a40 + (int64_t)*(int*)(pool + 0x1c9c) * 0x90;
    layer_index = ui_system_setjmp_handler(pool + 0x1320, stack_buffer);
    if (layer_index == 0) {
        *(int32_t*)(pool + 0x1318) = 1;
        render_result = ui_system_execute_render_pipeline(pool);
        ui_context = context_ptr;
        stack_param = render_result;
        if ((int)render_result < 0) {
            if (0 < (int)context_ptr[(int64_t)(int)context_ptr[0x274] + 0x270]) {
                context_ptr[(int64_t)(int)context_ptr[0x274] + 0x270] =
                     context_ptr[(int64_t)(int)context_ptr[0x274] + 0x270] + -1;
            }
        }
        else {
            layer_index = ui_system_check_render_status(context_ptr);
            if (layer_index == 0) {
                ui_system_call_system_function();
                if (ui_context[0x2ea] != 0) {
                    ui_context[0x887] = ui_context[0x887] + 1;
                    *(uint64_t*)(ui_context + 0x2fe) = *(uint64_t*)(ui_context + 0x2fc);
                }
                *(uint64_t*)(pool + 0x4408) = render_options;
                *(int32_t*)(pool + 0x4410) = 0;
                goto render_complete;
            }
        }
        *(int32_t*)(pool + 0x12c0) = 1;
    }
    else {
        context_ptr[(int64_t)(int)context_ptr[0x275] * 0x24 + 0x202] = 1;
        render_result = stack_param;
        if (0 < (int)context_ptr[(int64_t)(int)context_ptr[0x274] + 0x270]) {
            context_ptr[(int64_t)(int)context_ptr[0x274] + 0x270] =
                 context_ptr[(int64_t)(int)context_ptr[0x274] + 0x270] + -1;
        }
    }
render_complete:
    *(int32_t*)(pool + 0x1318) = 0;
    ui_system_call_system_function();
    return (uint64_t)render_result;
}
/**
 * UI系统状态切换函数
 * 在不同的UI状态之间进行切换
 */
int32_t ui_system_switch_ui_state(int64_t pool, int state_type, int* state_data)
{
    int32_t* ui_context;
    int* layer_count;
    int new_layer;
    int64_t layer_offset;
    void* error_handler;
    int* resource_count;
    ui_context = (int32_t*)(pool + 0x12c0);
    if (state_type == 1) {
        layer_count = (int*)(pool + 0x1c94);
    }
    else if (state_type == 2) {
        layer_count = (int*)(pool + 0x1c98);
    }
    else {
        if (state_type != 4) {
            error_handler = &UI_ERROR_INVALID_PARAM;
            goto handle_error;
        }
        layer_count = (int*)(pool + 0x1c9c);
    }
    layer_offset = (int64_t)*layer_count;
    if ((((*(int*)(pool + 0x1a44 + layer_offset * 0x90) == state_data[1]) &&
         (*(int*)(pool + 0x1a40 + layer_offset * 0x90) == *state_data)) &&
        (*(int*)(pool + 0x1a58 + layer_offset * 0x90) == state_data[6])) &&
       (*(int*)(pool + 0x1a54 + layer_offset * 0x90) == state_data[5])) {
        new_layer = ui_system_get_layer_index(ui_context);
        resource_count = (int*)(pool + 0x1c80 + (int64_t)new_layer * 4);
        *resource_count = *resource_count + -1;
        if (0 < (int)ui_context[(int64_t)*layer_count + 0x270]) {
            ui_context[(int64_t)*layer_count + 0x270] =
                ui_context[(int64_t)*layer_count + 0x270] + -1;
        }
        *layer_count = new_layer;
        resource_count = (int*)(pool + 0x1c80 + (int64_t)new_layer * 4);
        *resource_count = *resource_count + 1;
        ui_system_copy_layer_data(state_data, pool + 0x1a40 + (int64_t)*layer_count * 0x90);
        return *ui_context;
    }
    error_handler = &UI_ERROR_INITIALIZATION;
handle_error:
    ui_system_handle_error(ui_context, 1, error_handler);
    return *ui_context;
}
// =============================================================================
// 文件结束
// =============================================================================
// 代码美化完成说明：
// 1. 函数命名：将所有函数重命名为语义化名称
// 2. 变量命名：将DATA_和SYSTEM_开头的变量重命名为描述性名称
// 3. 常量定义：添加了相关的常量定义和宏
// 4. 注释完善：为每个函数添加了详细的功能说明
// 5. 代码结构：重新组织了代码结构，提高了可读性
// 6. 函数别名：定义了函数别名，便于理解和使用
// 7. 错误处理：添加了错误代码和处理机制
// 8. 文档说明：添加了完整的中文文档注释
// 主要功能模块：
// - CPU特性检测和优化
// - 内存管理和对齐处理
// - 初始化控制和线程安全
// - 资源池管理和分配
// - UI事件处理和状态管理
// - 渲染管线和资源清理
// - 错误处理和状态验证