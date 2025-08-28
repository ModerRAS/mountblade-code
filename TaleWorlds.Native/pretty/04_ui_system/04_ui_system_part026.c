#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part026.c - UI系统高级初始化和函数指针设置模块
// 
// 本模块包含13个核心函数，主要负责UI系统的初始化、函数指针设置、
// 内存管理、线程安全、CPU特性检测等高级UI功能。
//
// 主要功能包括：
// 1. CPU特性检测和函数指针优化设置
// 2. 线程安全的初始化函数管理
// 3. 内存分配和对齐处理
// 4. UI系统资源管理和清理
// 5. 上下文管理和状态控制

// 常量定义
#define MAX_INITIALIZATION_ATTEMPTS 4
#define MEMORY_ALIGNMENT 16
#define CRITICAL_SECTION_SIZE 0x28
#define UI_CONTEXT_POOL_SIZE 0x4440
#define UI_TEXTURE_COUNT 4
#define UI_VERTEX_BUFFER_SIZE 0x90

// 函数别名定义
#define ui_system_cpu_feature_detector FUN_18066d7c0
#define ui_system_thread_safe_initializer FUN_18066e230
#define ui_system_thread_safe_initializer_alt FUN_18066e246
#define ui_system_thread_safe_finalizer FUN_18066e2a3
#define ui_system_cpu_capability_checker FUN_18066e300
#define ui_system_texture_manager FUN_18066e500
#define ui_system_context_initializer FUN_18066e730
#define ui_system_resource_cleaner FUN_18066e7a0
#define ui_system_memory_allocator CoreSystem_MemoryController0
#define ui_system_memory_initializer FUN_18066e90c
#define ui_system_empty_function_placeholder FUN_18066e938
#define ui_system_aligned_memory_allocator FUN_18066e960
#define ui_system_texture_initializer FUN_18066e9b0
#define ui_system_texture_switcher FUN_18066e9db
#define ui_system_status_checker FUN_18066ea6a
#define ui_system_buffer_allocator FUN_18066ea80
#define ui_system_global_initializer FUN_18066ebc0
#define ui_system_global_initializer_thread_safe FUN_18066ebf0
#define ui_system_global_initializer_thread_safe_alt FUN_18066ec06
#define ui_system_global_finalizer_thread_safe FUN_18066ec63
#define ui_system_resource_validator FUN_18066eea0
#define ui_system_resource_deallocator FUN_18066ef00
#define ui_system_context_processor FUN_18066ef60
#define ui_system_parameter_validator FUN_18066efd0
#define ui_system_context_manager FUN_18066f080
#define ui_system_texture_switcher_advanced FUN_18066f2e0

// 全局变量声明
static void *ui_system_function_table[64];  // UI系统函数指针表
static volatile int ui_system_initialized = 0;  // UI系统初始化标志
static volatile int ui_system_ref_count = 0;     // UI系统引用计数
static void *ui_system_critical_section = NULL; // UI系统临界区

// 函数声明
static void ui_system_detect_cpu_features(void);
static void ui_system_setup_function_pointers(void);
static void ui_system_initialize_thread_safety(void);
static void ui_system_cleanup_thread_safety(void);

/**
 * UI系统CPU特性检测和函数指针设置
 * 
 * 检测CPU支持的特性（SSE、AVX等）并据此设置最优的函数指针
 * 这是UI系统性能优化的关键函数
 */
void ui_system_cpu_feature_detector(void)
{
    uint *cpu_info;
    int64_t version_info;
    uint feature_flags;
    bool sse_supported = false;
    bool sse2_supported = false;
    bool avx_supported = false;
    bool avx2_supported = false;
    bool fma_supported = false;
    byte xcr0_state;
    
    // 获取CPU基本信息
    cpu_info = (uint *)cpuid_basic_info(0);
    avx_supported = false;
    avx2_supported = false;
    fma_supported = false;
    sse2_supported = false;
    sse_supported = false;
    
    if (*cpu_info != 0) {
        version_info = cpuid_Version_info(1);
        feature_flags = *(uint *)(version_info + 0xc);
        sse_supported = (feature_flags & 1) != 0;          // SSE支持
        sse2_supported = (feature_flags >> 9 & 1) != 0;     // SSE2支持
        avx_supported = (feature_flags >> 0x13 & 1) != 0;   // AVX支持
        fma_supported = false;
        avx2_supported = false;
        
        // 检查AVX2和FMA支持
        if (((feature_flags & 0x18000000) == 0x18000000) && ((xcr0_state & 6) == 6)) {
            fma_supported = true;
            avx2_supported = false;
            if ((6 < *cpu_info) &&
                (version_info = cpuid_Extended_Feature_Enumeration_info(7), avx2_supported = false,
                 (*(uint *)(version_info + 4) & 0x20) != 0)) {
                fma_supported = true;
                avx2_supported = true;
            }
        }
    }
    
    // 根据CPU特性设置最优函数指针
    ui_system_function_table[0] = FUN_180674f40;
    if (sse2_supported) {
        ui_system_function_table[0] = FUN_180676930;
    }
    if (avx2_supported) {
        ui_system_function_table[0] = FUN_180677190;
    }
    
    // 设置纹理处理函数指针
    ui_system_function_table[1] = FUN_180674930;
    if (sse2_supported) {
        ui_system_function_table[1] = FUN_180676320;
    }
    
    // 设置渲染函数指针
    ui_system_function_table[2] = FUN_180674700;
    if (sse2_supported) {
        ui_system_function_table[2] = FUN_1806760f0;
    }
    
    // 设置变换函数指针
    ui_system_function_table[3] = FUN_180674aa0;
    if (sse2_supported) {
        ui_system_function_table[3] = FUN_180676490;
    }
    
    // 设置缓冲区管理函数指针
    ui_system_function_table[4] = FUN_180674d10;
    if (sse2_supported) {
        ui_system_function_table[4] = FUN_180676700;
    }
    if (avx2_supported) {
        ui_system_function_table[4] = FUN_180677300;
    }
    
    // 设置顶点处理函数指针
    ui_system_function_table[5] = FUN_1806750b0;
    if (sse2_supported) {
        ui_system_function_table[5] = FUN_180676aa0;
    }
    if (avx2_supported) {
        ui_system_function_table[5] = FUN_180677530;
    }
    
    // 设置高级渲染函数指针
    ui_system_function_table[6] = FUN_1806780c0;
    if (sse2_supported) {
        ui_system_function_table[6] = (code *)&unknown_var_4960_ptr;
    }
    
    // 设置更多函数指针...
    ui_system_function_table[7] = FUN_1806782c0;
    if (sse2_supported) {
        ui_system_function_table[7] = (code *)&unknown_var_5408_ptr;
    }
    
    ui_system_function_table[8] = FUN_180678430;
    if (sse2_supported) {
        ui_system_function_table[8] = (code *)&unknown_var_4576_ptr;
    }
    
    ui_system_function_table[9] = FUN_180678540;
    if (sse2_supported) {
        ui_system_function_table[9] = (code *)&unknown_var_4704_ptr;
    }
    
    ui_system_function_table[10] = FUN_180678810;
    if (sse2_supported) {
        ui_system_function_table[10] = (code *)&unknown_var_6960_ptr;
    }
    
    ui_system_function_table[11] = FUN_1806789c0;
    if (sse2_supported) {
        ui_system_function_table[11] = (code *)&unknown_var_7232_ptr;
    }
    
    ui_system_function_table[12] = FUN_180678b10;
    if (sse2_supported) {
        ui_system_function_table[12] = (code *)&unknown_var_6688_ptr;
    }
    
    ui_system_function_table[13] = FUN_180678bc0;
    if (sse2_supported) {
        ui_system_function_table[13] = (code *)&unknown_var_6784_ptr;
    }
    
    ui_system_function_table[14] = FUN_180678e20;
    if (sse2_supported) {
        ui_system_function_table[14] = (code *)&unknown_var_3312_ptr;
    }
    
    ui_system_function_table[15] = FUN_180678ef0;
    if (sse2_supported) {
        ui_system_function_table[15] = (code *)&system_param1_ptr;
    }
    
    ui_system_function_table[16] = FUN_180678fc0;
    if (sse2_supported) {
        ui_system_function_table[16] = (code *)&unknown_var_3088_ptr;
    }
    
    ui_system_function_table[17] = FUN_1806790b0;
    if (sse2_supported) {
        ui_system_function_table[17] = (code *)&unknown_var_3184_ptr;
    }
    
    ui_system_function_table[18] = FUN_180679310;
    if (sse2_supported) {
        ui_system_function_table[18] = (code *)&unknown_var_4176_ptr;
    }
    
    ui_system_function_table[19] = FUN_180679480;
    if (sse2_supported) {
        ui_system_function_table[19] = (code *)&unknown_var_4304_ptr;
    }
    
    ui_system_function_table[20] = FUN_1806795f0;
    if (sse2_supported) {
        ui_system_function_table[20] = (code *)&unknown_var_3904_ptr;
    }
    
    ui_system_function_table[21] = FUN_1806796f0;
    if (sse2_supported) {
        ui_system_function_table[21] = (code *)&unknown_var_4000_ptr;
    }
    
    // 设置高级纹理处理函数指针
    ui_system_function_table[22] = FUN_18067c470;
    if (avx2_supported) {
        ui_system_function_table[22] = FUN_1806844a0;
    }
    
    ui_system_function_table[23] = FUN_180679d30;
    if (avx2_supported) {
        ui_system_function_table[23] = FUN_18068b080;
    }
    
    ui_system_function_table[24] = FUN_180683f90;
    if (sse2_supported) {
        ui_system_function_table[24] = (code *)&unknown_var_8096_ptr;
    }
    
    ui_system_function_table[25] = FUN_18068d2b0;
    if (avx2_supported) {
        ui_system_function_table[25] = FUN_1806905c0;
    }
    
    ui_system_function_table[26] = FUN_180679ac0;
    if (sse2_supported) {
        ui_system_function_table[26] = (code *)&unknown_var_2944_ptr;
    }
    
    ui_system_function_table[27] = FUN_180679b20;
    if (sse2_supported) {
        ui_system_function_table[27] = (code *)&unknown_var_3008_ptr;
    }
    
    ui_system_function_table[28] = &unknown_var_960_ptr;
    if (sse2_supported) {
        ui_system_function_table[28] = &unknown_var_2816_ptr;
    }
    
    ui_system_function_table[29] = &unknown_var_1008_ptr;
    if (sse2_supported) {
        ui_system_function_table[29] = &unknown_var_2880_ptr;
    }
    
    ui_system_function_table[30] = FUN_1806917c0;
    if (sse2_supported) {
        ui_system_function_table[30] = (code *)&unknown_var_1552_ptr;
    }
    
    ui_system_function_table[31] = FUN_180691db0;
    if (sse2_supported) {
        ui_system_function_table[31] = (code *)&unknown_var_9840_ptr;
    }
    
    ui_system_function_table[32] = FUN_180694010;
    if (avx2_supported) {
        ui_system_function_table[32] = FUN_180695530;
    }
    
    ui_system_function_table[33] = FUN_18068d480;
    if (avx2_supported) {
        ui_system_function_table[33] = FUN_180695560;
    }
    
    ui_system_function_table[34] = FUN_180695bf0;
    if (sse2_supported) {
        ui_system_function_table[34] = (code *)&unknown_var_2512_ptr;
    }
    if (fma_supported) {
        ui_system_function_table[34] = (code *)&unknown_var_4432_ptr;
    }
    
    ui_system_function_table[35] = FUN_180695f70;
    if (sse2_supported) {
        ui_system_function_table[35] = (code *)&unknown_var_3392_ptr;
    }
    if (fma_supported) {
        ui_system_function_table[35] = (code *)&unknown_var_5920_ptr;
    }
    
    ui_system_function_table[36] = FUN_1806961a0;
    if (sse_supported) {
        ui_system_function_table[36] = (code *)&unknown_var_7008_ptr;
    }
    if (sse2_supported) {
        ui_system_function_table[36] = (code *)&unknown_var_9600_ptr;
    }
    
    ui_system_function_table[37] = FUN_180696370;
    if (avx_supported) {
        ui_system_function_table[37] = (code *)&unknown_var_5776_ptr;
    }
    
    ui_system_function_table[38] = FUN_180696540;
    if (sse_supported) {
        ui_system_function_table[38] = (code *)&unknown_var_7893_ptr;
    }
    if (sse2_supported) {
        ui_system_function_table[38] = (code *)&unknown_var_6989_ptr;
    }
    
    ui_system_function_table[39] = FUN_180696710;
    if (avx_supported) {
        ui_system_function_table[39] = (code *)&unknown_var_7206_ptr;
    }
    
    // 设置其余函数指针...
    ui_system_function_table[40] = (code *)&unknown_var_160_ptr;
    if (avx2_supported) {
        ui_system_function_table[40] = FUN_180697340;
    }
    
    ui_system_function_table[41] = (code *)&unknown_var_560_ptr;
    if (avx2_supported) {
        ui_system_function_table[41] = FUN_1806972a0;
    }
    
    ui_system_function_table[42] = (code *)&unknown_var_48_ptr;
    if (avx2_supported) {
        ui_system_function_table[42] = FUN_180697460;
    }
    
    ui_system_function_table[43] = (code *)&unknown_var_416_ptr;
    if (avx2_supported) {
        ui_system_function_table[43] = FUN_1806973c0;
    }
    
    ui_system_function_table[44] = (code *)&unknown_var_5920_ptr;
    if (avx2_supported) {
        ui_system_function_table[44] = FUN_1806977e0;
    }
    
    ui_system_function_table[45] = (code *)&unknown_var_9936_ptr;
    if (avx2_supported) {
        ui_system_function_table[45] = FUN_180697580;
    }
    
    ui_system_function_table[46] = (code *)&unknown_var_272_ptr;
    if (avx2_supported) {
        ui_system_function_table[46] = FUN_1806974e0;
    }
    
    ui_system_function_table[47] = FUN_1806968e0;
    if (sse_supported) {
        ui_system_function_table[47] = (code *)&unknown_var_9412_ptr;
    }
    
    ui_system_function_table[48] = FUN_180696a60;
    if (avx_supported) {
        ui_system_function_table[48] = (code *)&unknown_var_9212_ptr;
    }
    
    ui_system_function_table[49] = (code *)&unknown_var_9536_ptr;
    if (avx2_supported) {
        ui_system_function_table[49] = FUN_180697680;
    }
    
    ui_system_function_table[50] = (code *)&unknown_var_9792_ptr;
    if (avx2_supported) {
        ui_system_function_table[50] = FUN_180697600;
    }
    
    ui_system_function_table[51] = (code *)&unknown_var_9424_ptr;
    if (avx2_supported) {
        ui_system_function_table[51] = FUN_180697770;
    }
    
    ui_system_function_table[52] = (code *)&unknown_var_9648_ptr;
    if (avx2_supported) {
        ui_system_function_table[52] = FUN_1806976f0;
    }
    
    ui_system_function_table[53] = (code *)&unknown_var_2672_ptr;
    if (avx2_supported) {
        ui_system_function_table[53] = FUN_1806978b0;
    }
    
    ui_system_function_table[54] = FUN_180696be0;
    if (sse_supported) {
        ui_system_function_table[54] = (code *)&unknown_var_8370_ptr;
    }
    
    ui_system_function_table[55] = FUN_180696d90;
    if (avx_supported) {
        ui_system_function_table[55] = (code *)&unknown_var_8398_ptr;
    }
    
    ui_system_function_table[56] = FUN_180696f40;
    if (sse_supported) {
        ui_system_function_table[56] = (code *)&unknown_var_9055_ptr;
    }
    
    ui_system_function_table[57] = FUN_1806970f0;
    if (avx_supported) {
        ui_system_function_table[57] = (code *)&unknown_var_7956_ptr;
    }
    
    ui_system_function_table[58] = FUN_180697dd0;
    if (sse2_supported) {
        ui_system_function_table[58] = FUN_180677100;
    }
    
    // 设置更多高级函数指针...
    ui_system_function_table[59] = FUN_18068d4b0;
    if (sse2_supported) {
        ui_system_function_table[59] = FUN_18068d530;
    }
    
    ui_system_function_table[60] = FUN_18068d5b0;
    if (sse2_supported) {
        ui_system_function_table[60] = FUN_18068d630;
    }
    
    ui_system_function_table[61] = FUN_18068d6b0;
    if (sse2_supported) {
        ui_system_function_table[61] = FUN_18068d730;
    }
    
    ui_system_function_table[62] = FUN_18068d7b0;
    if (sse2_supported) {
        ui_system_function_table[62] = FUN_18068d8d0;
    }
    
    ui_system_function_table[63] = FUN_18068d9f0;
    if (sse2_supported) {
        ui_system_function_table[63] = FUN_18068db10;
    }
    if (avx2_supported) {
        ui_system_function_table[63] = FUN_180695590;
    }
    
    return;
}

/**
 * UI系统线程安全初始化函数
 * 
 * 确保UI系统初始化只执行一次，使用临界区保证线程安全
 * 
 * @param init_function 初始化函数指针
 */
void ui_system_thread_safe_initializer(code *init_function)
{
    int ref_count;
    int64_t critical_section;
    int64_t existing_section;
    bool section_exists;
    
    // 检查是否已经初始化
    if (ui_system_initialized == 0) {
        LOCK();
        ui_system_ref_count = ui_system_ref_count + 1;
        UNLOCK();
        
        // 创建新的临界区
        critical_section = malloc(CRITICAL_SECTION_SIZE);
        InitializeCriticalSection(critical_section);
        
        LOCK();
        section_exists = ui_system_critical_section != 0;
        existing_section = critical_section;
        if (section_exists) {
            existing_section = ui_system_critical_section;
        }
        ui_system_critical_section = existing_section;
        UNLOCK();
        
        // 如果已有临界区，清理新创建的
        if (section_exists) {
            DeleteCriticalSection(critical_section);
            free(critical_section);
        }
        
        // 进入临界区执行初始化
        EnterCriticalSection(ui_system_critical_section);
        if (ui_system_initialized == 0) {
            (*init_function)();
            ui_system_initialized = 1;
        }
        LeaveCriticalSection(ui_system_critical_section);
        
        // 清理引用计数
        LOCK();
        ref_count = ui_system_ref_count + -1;
        UNLOCK();
        
        section_exists = ui_system_ref_count == 1;
        ui_system_ref_count = ref_count;
        if (section_exists) {
            DeleteCriticalSection(ui_system_critical_section);
            free(ui_system_critical_section);
            ui_system_critical_section = 0;
        }
    }
    return;
}

/**
 * UI系统线程安全初始化函数（替代版本）
 * 
 * 与上一个函数功能相同，但使用不同的寄存器传递参数
 */
void ui_system_thread_safe_initializer_alt(void)
{
    int ref_count;
    int64_t critical_section;
    int64_t existing_section;
    code *init_function;
    bool section_exists;
    
    LOCK();
    ui_system_ref_count = ui_system_ref_count + 1;
    UNLOCK();
    
    critical_section = malloc(CRITICAL_SECTION_SIZE);
    InitializeCriticalSection(critical_section);
    
    LOCK();
    section_exists = ui_system_critical_section != 0;
    existing_section = critical_section;
    if (section_exists) {
        existing_section = ui_system_critical_section;
    }
    ui_system_critical_section = existing_section;
    UNLOCK();
    
    if (section_exists) {
        DeleteCriticalSection(critical_section);
        free(critical_section);
    }
    
    EnterCriticalSection(ui_system_critical_section);
    if (ui_system_initialized == 0) {
        (*init_function)();
        ui_system_initialized = 1;
    }
    LeaveCriticalSection(ui_system_critical_section);
    
    LOCK();
    ref_count = ui_system_ref_count + -1;
    UNLOCK();
    
    section_exists = ui_system_ref_count == 1;
    ui_system_ref_count = ref_count;
    if (section_exists) {
        DeleteCriticalSection(ui_system_critical_section);
        free(ui_system_critical_section);
        ui_system_critical_section = 0;
    }
    return;
}

/**
 * UI系统线程安全终结函数
 * 
 * 在初始化完成后清理线程安全资源
 */
void ui_system_thread_safe_finalizer(void)
{
    int ref_count;
    code *init_function;
    bool is_last_ref;
    
    (*init_function)();
    ui_system_initialized = 1;
    LeaveCriticalSection(ui_system_critical_section);
    
    LOCK();
    ref_count = ui_system_ref_count + -1;
    UNLOCK();
    
    is_last_ref = ui_system_ref_count == 1;
    ui_system_ref_count = ref_count;
    if (is_last_ref) {
        DeleteCriticalSection(ui_system_critical_section);
        free(ui_system_critical_section);
        ui_system_critical_section = 0;
    }
    return;
}

/**
 * UI系统CPU能力检查函数
 * 
 * 检查CPU支持的指令集扩展能力
 * 
 * @return CPU特性标志位
 */
uint ui_system_cpu_capability_checker(void)
{
    uint *cpu_info;
    uint basic_info;
    uint extended_info;
    uint xcr0_state;
    
    cpu_info = (uint *)cpuid_basic_info(0);
    basic_info = *cpu_info;
    extended_info = basic_info;
    
    if (basic_info != 0) {
        cpu_info = (uint *)cpuid_Version_info(1);
        extended_info = *cpu_info;
        
        // 检查AVX支持
        if ((((cpu_info[3] & 0x18000000) == 0x18000000) && 
             (extended_info = xcr0_state, ((byte)xcr0_state & 6) == 6)) &&
            (6 < basic_info)) {
            cpu_info = (uint *)cpuid_Extended_Feature_Enumeration_info(7);
            extended_info = *cpu_info;
        }
    }
    return extended_info;
}

/**
 * UI系统纹理管理器
 * 
 * 初始化和管理UI系统纹理资源
 * 
 * @param context UI系统上下文
 * @param width 纹理宽度
 * @param height 纹理高度
 * @return 成功返回1，失败返回0
 */
uint64_t ui_system_texture_manager(int64_t context, uint width, uint height)
{
    int result;
    int64_t texture_offset;
    int64_t buffer_size;
    int32_t *texture_data;
    int texture_index;
    int32_t *texture_info;
    
    // 初始化纹理系统
    ui_system_resource_cleaner();
    
    // 对齐宽度到16字节边界
    if ((width & 0xf) != 0) {
        width = width + (0x10 - (width & 0xf));
    }
    
    // 对齐高度到16字节边界
    if ((height & 0xf) != 0) {
        height = height + (0x10 - (height & 0xf));
    }
    
    // 初始化纹理数据指针
    texture_data = (int32_t *)(context + 0x80c);
    texture_index = 0;
    texture_info = (int32_t *)(context + 0x9c0);
    
    // 初始化4个纹理单元
    do {
        *texture_info = 0;
        *texture_data = 0;
        result = FUN_180697e60((int64_t)texture_index * UI_VERTEX_BUFFER_SIZE + 0x780 + context, width, height, 0x20);
        if (result < 0) goto texture_init_failed;
        texture_index = texture_index + 1;
        texture_info = texture_info + 1;
        texture_data = texture_data + 0x24;
    } while (texture_index < UI_TEXTURE_COUNT);
    
    // 设置纹理索引
    *(int32_t *)(context + 0x9d0) = 0;
    *(int32_t *)(context + 0x9d4) = 1;
    *(int32_t *)(context + 0x9d8) = 2;
    *(int32_t *)(context + 0x9dc) = 3;
    *(uint64_t *)(context + 0x9c0) = 0x100000001;
    *(uint64_t *)(context + 0x9c8) = 0x100000001;
    
    // 初始化主纹理
    result = FUN_180697e60(context + 0x9e0, width, 0x10);
    if (-1 < result) {
        int height_blocks = (int)height >> 4;
        int width_blocks = (int)width >> 4;
        
        *(int *)(context + 3000) = width_blocks;
        *(int *)(context + 0xbb4) = height_blocks;
        *(int *)(context + 0xbbc) = width_blocks + 1;
        *(int *)(context + 0xbb0) = width_blocks * height_blocks;
        
        // 分配纹理缓冲区
        buffer_size = ui_system_aligned_memory_allocator((int64_t)((height_blocks + 1) * (width_blocks + 1)), 0x4c);
        *(int64_t *)(context + 0xbe8) = buffer_size;
        
        if (buffer_size != 0) {
            *(int64_t *)(context + 0xbf0) = ((int64_t)*(int *)(context + 0xbbc) + 1) * 0x4c + buffer_size;
            
            buffer_size = ui_system_aligned_memory_allocator((int64_t)*(int *)(context + 3000) * 9, 1);
            *(int64_t *)(context + 0x1958) = buffer_size;
            
            if (buffer_size != 0) {
                result = FUN_180697e60(context + 0xa70, width, height, 0x20);
                if (-1 < result) {
                    *(int32_t *)(context + 0xb90) = 0;
                    // 初始化纹理数据（不会返回）
                    memset(context + 0x2230, 0, 0xc40);
                }
            }
        }
    }
    
texture_init_failed:
    ui_system_resource_cleaner(context);
    return 1;
}

/**
 * UI系统上下文初始化器
 * 
 * 初始化UI系统上下文结构和相关资源
 * 
 * @param context UI系统上下文指针
 */
void ui_system_context_initializer(int64_t context)
{
    ui_system_advanced_data_processor();
    func_0x0001806980f0(context);
    func_0x0001806980d0();
    *(uint64_t *)(context + 0xbc0) = 1;
    *(int32_t *)(context + 0xc00) = 0;
    *(uint64_t *)(context + 0xbc8) = 0;
    *(int32_t *)(context + 0x2224) = 0;
    *(int32_t *)(context + 0x770) = 0;
    *(uint64_t *)(context + 0x1944) = 0;
    *(uint64_t *)(context + 0x194c) = 0;
    *(uint64_t *)(context + 0x1938) = 0;
    return;
}

/**
 * UI系统资源清理器
 * 
 * 清理UI系统分配的资源，包括纹理、缓冲区等
 * 
 * @param context UI系统上下文指针
 */
void ui_system_resource_cleaner(int64_t context)
{
    int64_t texture_offset;
    int64_t texture_count;
    
    texture_offset = context + 0x780;
    texture_count = UI_TEXTURE_COUNT;
    
    // 清理纹理资源
    do {
        FUN_180697ed0(texture_offset);
        texture_offset = texture_offset + UI_VERTEX_BUFFER_SIZE;
        texture_count = texture_count + -1;
    } while (texture_count != 0);
    
    // 清理其他资源
    FUN_180697ed0(context + 0x9e0);
    FUN_180697ed0(context + 0xa70);
    
    if (*(int *)(context + 0xb90) != 0) {
        FUN_180697ed0(context + 0xb00);
    }
    
    func_0x00018066e940(*(uint64_t *)(context + 0xb98));
    *(uint64_t *)(context + 0xb98) = 0;
    func_0x00018066e940(*(uint64_t *)(context + 0x1958));
    func_0x00018066e940(*(uint64_t *)(context + 0xbe8));
    *(uint64_t *)(context + 0x1958) = 0;
    *(uint64_t *)(context + 0xbe8) = 0;
    return;
}

/**
 * UI系统资源清理器的thunk版本
 * 
 * 功能与ui_system_resource_cleaner相同，但用于不同的调用约定
 */
void thunk_ui_system_resource_cleaner(int64_t context)
{
    int64_t texture_offset;
    int64_t texture_count;
    
    texture_offset = context + 0x780;
    texture_count = UI_TEXTURE_COUNT;
    
    do {
        FUN_180697ed0(texture_offset);
        texture_offset = texture_offset + UI_VERTEX_BUFFER_SIZE;
        texture_count = texture_count + -1;
    } while (texture_count != 0);
    
    FUN_180697ed0(context + 0x9e0);
    FUN_180697ed0(context + 0xa70);
    
    if (*(int *)(context + 0xb90) != 0) {
        FUN_180697ed0(context + 0xb00);
    }
    
    func_0x00018066e940(*(uint64_t *)(context + 0xb98));
    *(uint64_t *)(context + 0xb98) = 0;
    func_0x00018066e940(*(uint64_t *)(context + 0x1958));
    func_0x00018066e940(*(uint64_t *)(context + 0xbe8));
    *(uint64_t *)(context + 0x1958) = 0;
    *(uint64_t *)(context + 0xbe8) = 0;
    return;
}

/**
 * UI系统内存分配器
 * 
 * 分配对齐的内存块，用于UI系统的高性能内存管理
 * 
 * @param size 内存块大小
 * @param alignment 对齐字节数
 */
void ui_system_memory_allocator(int64_t size, int64_t alignment)
{
    int64_t allocated_memory;
    uint64_t aligned_memory;
    
    allocated_memory = malloc(size * alignment + 0x17);
    if (allocated_memory != 0) {
        aligned_memory = allocated_memory + 0x17U & 0xfffffffffffffff0;
        *(int64_t *)(aligned_memory - 8) = allocated_memory;
        // 初始化内存（不会返回）
        memset(aligned_memory, 0, size * alignment);
    }
    return;
}

/**
 * UI系统内存初始化器
 * 
 * 初始化已分配的内存块
 */
void ui_system_memory_initializer(void)
{
    int64_t memory_address;
    uint64_t aligned_address;
    
    aligned_address = memory_address + 0x17U & 0xfffffffffffffff0;
    *(int64_t *)(aligned_address - 8) = memory_address;
    // 初始化内存（不会返回）
    memset(aligned_address, 0);
}

/**
 * UI系统空函数占位符
 * 
 * 用于函数表中的占位符，不做任何操作
 */
void ui_system_empty_function_placeholder(void)
{
    return;
}

/**
 * UI系统对齐内存分配器
 * 
 * 分配指定对齐方式的内存块
 * 
 * @param alignment 对齐字节数
 * @param size 内存块大小
 * @return 对齐后的内存地址，失败返回0
 */
uint64_t ui_system_aligned_memory_allocator(int64_t alignment, int64_t size)
{
    int64_t allocated_memory;
    uint64_t aligned_memory;
    
    allocated_memory = malloc(size + 7 + alignment);
    if (allocated_memory != 0) {
        aligned_memory = (int64_t)((int)alignment + -1) + 8 + allocated_memory & (int64_t)-(int)alignment;
        *(int64_t *)(aligned_memory - 8) = allocated_memory;
        return aligned_memory;
    }
    return 0;
}

/**
 * UI系统纹理初始化器
 * 
 * 初始化UI系统纹理资源并设置状态
 * 
 * @param context UI系统上下文
 * @return 成功返回0，失败返回1
 */
uint64_t ui_system_texture_initializer(int64_t context)
{
    int *texture_count;
    int current_count;
    int64_t texture_offset;
    
    // 检查纹理初始化条件
    if (((*(int *)(context + 0x441c) == 0) && (*(uint *)(context + 0x430c) < 2)) &&
        (*(int *)(context + 0x4358) == 0)) {
        texture_offset = (int64_t)*(int *)(context + 0x1c94);
        if (1 < *(int *)(context + 0x1c80 + texture_offset * 4)) {
            texture_count = (int *)(context + 0x1c80 + texture_offset * 4);
            *texture_count = *texture_count + -1;
            current_count = func_0x00018066eb80(context + 0x12c0);
            *(int *)(context + 0x1c94) = current_count;
            FUN_18069c540(context + 0x1a40 + texture_offset * UI_VERTEX_BUFFER_SIZE,
                          context + 0x1a40 + (int64_t)current_count * UI_VERTEX_BUFFER_SIZE);
        }
        *(int32_t *)(context + 0x1ac8 + (int64_t)*(int *)(context + 0x1c94) * UI_VERTEX_BUFFER_SIZE) = 1;
        *(int32_t *)(context + 0x1e68) = 0;
        return 0;
    }
    return 1;
}

/**
 * UI系统纹理切换器
 * 
 * 在不同纹理之间进行切换，更新纹理状态
 * 
 * @param context UI系统上下文
 * @return 总是返回0
 */
uint64_t ui_system_texture_switcher(int64_t context)
{
    int *texture_count;
    int current_count;
    int64_t texture_offset;
    
    texture_offset = (int64_t)*(int *)(context + 0x1c94);
    if (1 < *(int *)(context + 0x1c80 + texture_offset * 4)) {
        texture_count = (int *)(context + 0x1c80 + texture_offset * 4);
        *texture_count = *texture_count + -1;
        current_count = func_0x00018066eb80(context + 0x12c0);
        *(int *)(context + 0x1c94) = current_count;
        FUN_18069c540(context + 0x1a40 + texture_offset * UI_VERTEX_BUFFER_SIZE,
                      context + 0x1a40 + (int64_t)current_count * UI_VERTEX_BUFFER_SIZE);
    }
    *(int32_t *)(context + 0x1ac8 + (int64_t)*(int *)(context + 0x1c94) * UI_VERTEX_BUFFER_SIZE) = 1;
    *(int32_t *)(context + 0x1e68) = 0;
    return 0;
}

/**
 * UI系统状态检查器
 * 
 * 检查UI系统当前状态
 * 
 * @return 总是返回1（表示正常状态）
 */
uint64_t ui_system_status_checker(void)
{
    return 1;
}

/**
 * UI系统缓冲区分配器
 * 
 * 分配UI系统使用的缓冲区内存
 * 
 * @return 成功返回0，失败返回1
 */
uint64_t ui_system_buffer_allocator(void)
{
    int64_t allocated_memory;
    uint64_t unused_param;
    
    allocated_memory = ui_system_aligned_memory_allocator(0x20, UI_CONTEXT_POOL_SIZE);
    if (allocated_memory != 0) {
        // 初始化缓冲区（不会返回）
        memset(allocated_memory, 0, UI_CONTEXT_POOL_SIZE, unused_param, allocated_memory);
    }
    return 0;
}

/**
 * UI系统全局初始化器
 * 
 * 初始化UI系统的全局状态和资源
 */
void ui_system_global_initializer(void)
{
    if (ui_system_initialized == 0) {
        func_0x00018066e220();
        func_0x00018069c2d0();
        ui_system_initialized = 1;
    }
    return;
}

/**
 * UI系统全局线程安全初始化器
 * 
 * 线程安全地初始化UI系统全局资源
 * 
 * @param init_function 初始化函数指针
 */
void ui_system_global_initializer_thread_safe(code *init_function)
{
    int ref_count;
    int64_t critical_section;
    int64_t existing_section;
    bool section_exists;
    
    if (ui_system_initialized == 0) {
        LOCK();
        ui_system_ref_count = ui_system_ref_count + 1;
        UNLOCK();
        
        critical_section = malloc(CRITICAL_SECTION_SIZE);
        InitializeCriticalSection(critical_section);
        
        LOCK();
        section_exists = ui_system_critical_section != 0;
        existing_section = critical_section;
        if (section_exists) {
            existing_section = ui_system_critical_section;
        }
        ui_system_critical_section = existing_section;
        UNLOCK();
        
        if (section_exists) {
            DeleteCriticalSection(critical_section);
            free(critical_section);
        }
        
        EnterCriticalSection(ui_system_critical_section);
        if (ui_system_initialized == 0) {
            (*init_function)();
            ui_system_initialized = 1;
        }
        LeaveCriticalSection(ui_system_critical_section);
        
        LOCK();
        ref_count = ui_system_ref_count + -1;
        UNLOCK();
        
        section_exists = ui_system_ref_count == 1;
        ui_system_ref_count = ref_count;
        if (section_exists) {
            DeleteCriticalSection(ui_system_critical_section);
            free(ui_system_critical_section);
            ui_system_critical_section = 0;
        }
    }
    return;
}

/**
 * UI系统全局线程安全初始化器（替代版本）
 * 
 * 功能与上一个函数相同，但使用不同的寄存器传递参数
 */
void ui_system_global_initializer_thread_safe_alt(void)
{
    int ref_count;
    int64_t critical_section;
    int64_t existing_section;
    code *init_function;
    bool section_exists;
    
    LOCK();
    ui_system_ref_count = ui_system_ref_count + 1;
    UNLOCK();
    
    critical_section = malloc(CRITICAL_SECTION_SIZE);
    InitializeCriticalSection(critical_section);
    
    LOCK();
    section_exists = ui_system_critical_section != 0;
    existing_section = critical_section;
    if (section_exists) {
        existing_section = ui_system_critical_section;
    }
    ui_system_critical_section = existing_section;
    UNLOCK();
    
    if (section_exists) {
        DeleteCriticalSection(critical_section);
        free(critical_section);
    }
    
    EnterCriticalSection(ui_system_critical_section);
    if (ui_system_initialized == 0) {
        (*init_function)();
        ui_system_initialized = 1;
    }
    LeaveCriticalSection(ui_system_critical_section);
    
    LOCK();
    ref_count = ui_system_ref_count + -1;
    UNLOCK();
    
    section_exists = ui_system_ref_count == 1;
    ui_system_ref_count = ref_count;
    if (section_exists) {
        DeleteCriticalSection(ui_system_critical_section);
        free(ui_system_critical_section);
        ui_system_critical_section = 0;
    }
    return;
}

/**
 * UI系统全局线程安全终结器
 * 
 * 清理UI系统全局资源
 */
void ui_system_global_finalizer_thread_safe(void)
{
    int ref_count;
    code *init_function;
    bool is_last_ref;
    
    (*init_function)();
    ui_system_initialized = 1;
    LeaveCriticalSection(ui_system_critical_section);
    
    LOCK();
    ref_count = ui_system_ref_count + -1;
    UNLOCK();
    
    is_last_ref = ui_system_ref_count == 1;
    ui_system_ref_count = ref_count;
    if (is_last_ref) {
        DeleteCriticalSection(ui_system_critical_section);
        free(ui_system_critical_section);
        ui_system_critical_section = 0;
    }
    return;
}

/**
 * UI系统资源验证器
 * 
 * 验证UI系统资源的有效性和完整性
 * 
 * @param resource_handle 资源句柄
 * @param context UI系统上下文
 * @return 成功返回0，失败返回1
 */
int32_t ui_system_resource_validator(int *resource_handle, int64_t context)
{
    int64_t allocated_memory;
    
    if (*resource_handle == 0) {
        allocated_memory = ui_system_buffer_allocator(context);
        *(int64_t *)(resource_handle + 2) = allocated_memory;
        if (allocated_memory == 0) {
            return 1;
        }
        *(int32_t *)(allocated_memory + 0x4384) = *(int32_t *)(context + 0x10);
        FUN_1806708b0(*(uint64_t *)(resource_handle + 2));
    }
    return 0;
}

/**
 * UI系统资源释放器
 * 
 * 释放UI系统分配的资源
 * 
 * @param resource_handle 资源句柄
 * @return 成功返回0，失败返回1
 */
int32_t ui_system_resource_deallocator(int *resource_handle)
{
    int64_t allocated_memory;
    
    if (*resource_handle == 0) {
        allocated_memory = *(int64_t *)(resource_handle + 2);
        if (allocated_memory == 0) {
            return 1;
        }
        if (*(int *)(allocated_memory + 0x4380) != 0) {
            FUN_180671080(allocated_memory, *(int32_t *)(allocated_memory + 0x1e74));
        }
        FUN_180670b00(allocated_memory);
        thunk_ui_system_resource_cleaner(allocated_memory + 0x12c0);
        func_0x00018066e940(allocated_memory);
    }
    return 0;
}

/**
 * UI系统上下文处理器
 * 
 * 处理UI系统上下文相关的操作
 * 
 * @param context UI系统上下文
 * @param operation 操作类型
 * @param output_param 输出参数
 * @param input_param 输入参数
 * @param extra_param 额外参数
 * @return 操作结果
 */
int32_t
ui_system_context_processor(int64_t context, uint64_t operation, uint64_t *output_param, uint64_t *input_param,
             uint64_t extra_param)
{
    int32_t result;
    
    if ((*(int *)(context + 0x4410) != 1) && (*(int *)(context + 0x1e68) != 0)) {
        *(int32_t *)(context + 0x4410) = 1;
        *output_param = *(uint64_t *)(context + 0x4408);
        *input_param = 0;
        result = FUN_180698e20(context + 0x12c0, operation, extra_param);
        func_0x000180001000();
        return result;
    }
    return 0xffffffff;
}

/**
 * UI系统参数验证器
 * 
 * 验证UI系统参数的有效性
 * 
 * @param context UI系统上下文
 * @param param_type 参数类型
 * @param param_values 参数值数组
 * @return 验证结果
 */
int32_t ui_system_parameter_validator(int64_t context, int param_type, int *param_values)
{
    int32_t *ui_data;
    int current_index;
    void *error_handler;
    int64_t texture_offset;
    
    ui_data = (int32_t *)(context + 0x12c0);
    if (param_type == 1) {
        current_index = *(int *)(context + 0x1c94);
    }
    else if (param_type == 2) {
        current_index = *(int *)(context + 0x1c98);
    }
    else {
        if (param_type != 4) {
            error_handler = &unknown_var_7720_ptr;
            goto validation_failed;
        }
        current_index = *(int *)(context + 0x1c9c);
    }
    
    texture_offset = (int64_t)current_index;
    if ((((*(int *)(context + 0x1a44 + texture_offset * UI_VERTEX_BUFFER_SIZE) == param_values[1]) &&
         (ui_data[texture_offset * 0x24 + 0x1e0] == *param_values)) &&
        (*(int *)(context + 0x1a58 + texture_offset * UI_VERTEX_BUFFER_SIZE) == param_values[6])) &&
       (*(int *)(context + 0x1a54 + texture_offset * UI_VERTEX_BUFFER_SIZE) == param_values[5])) {
        FUN_18069c540(ui_data + texture_offset * 0x24 + 0x1e0, param_values);
        return *ui_data;
    }
    
    error_handler = &unknown_var_7744_ptr;
validation_failed:
    SystemInitializationProcessor(ui_data, 1, error_handler);
    return *ui_data;
}

/**
 * UI系统上下文管理器
 * 
 * 管理UI系统上下文的创建、配置和销毁
 * 
 * @param context UI系统上下文
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 操作结果
 */
uint64_t ui_system_context_manager(int64_t context, uint64_t param1, uint64_t param2, uint64_t param3, uint64_t param4)
{
    int32_t *ui_data;
    uint result;
    uint64_t operation_result;
    int texture_index;
    int8_t jump_buffer[32];
    uint status_code;
    int32_t *ui_data_ptr;
    
    ui_data = (int32_t *)(context + 0x12c0);
    *ui_data = 0;
    ui_data_ptr = ui_data;
    operation_result = ui_system_texture_initializer();
    status_code = (uint)operation_result;
    
    if ((int)status_code < 1) {
        return operation_result;
    }
    
    // 查找可用的纹理槽位
    texture_index = 0;
    do {
        if (*(int *)(context + 0x1c80 + (int64_t)texture_index * 4) == 0) break;
        texture_index = texture_index + 1;
    } while (texture_index < MAX_INITIALIZATION_ATTEMPTS);
    
    *(int32_t *)(context + 0x1c80 + (int64_t)texture_index * 4) = 1;
    *(int *)(context + 0x1c90) = texture_index;
    *(int32_t **)(context + 0x12a0) = ui_data + (int64_t)texture_index * 0x24 + 0x1e0;
    *(int64_t *)(context + 0x12a8) = context + 0x1a40 + (int64_t)*(int *)(context + 0x1c94) * UI_VERTEX_BUFFER_SIZE;
    *(int64_t *)(context + 0x12b0) = context + 0x1a40 + (int64_t)*(int *)(context + 0x1c98) * UI_VERTEX_BUFFER_SIZE;
    *(int64_t *)(context + 0x12b8) = context + 0x1a40 + (int64_t)*(int *)(context + 0x1c9c) * UI_VERTEX_BUFFER_SIZE;
    
    // 设置跳转缓冲区用于错误处理
    texture_index = __intrinsic_setjmp(context + 0x1320, jump_buffer);
    if (texture_index == 0) {
        *(int32_t *)(context + 0x1318) = 1;
        result = FUN_18069a490(context);
        ui_data = ui_data_ptr;
        status_code = result;
        
        if ((int)result < 0) {
            if (0 < (int)ui_data_ptr[(int64_t)(int)ui_data_ptr[0x274] + 0x270]) {
                ui_data_ptr[(int64_t)(int)ui_data_ptr[0x274] + 0x270] =
                     ui_data_ptr[(int64_t)(int)ui_data_ptr[0x274] + 0x270] + -1;
            }
        }
        else {
            texture_index = func_0x00018066ecc0(ui_data_ptr);
            if (texture_index == 0) {
                func_0x000180001000();
                if (ui_data[0x2ea] != 0) {
                    ui_data[0x887] = ui_data[0x887] + 1;
                    *(uint64_t *)(ui_data + 0x2fe) = *(uint64_t *)(ui_data + 0x2fc);
                }
                *(uint64_t *)(context + 0x4408) = param4;
                *(int32_t *)(context + 0x4410) = 0;
                goto context_setup_complete;
            }
        }
        *(int32_t *)(context + 0x12c0) = 1;
    }
    else {
        ui_data_ptr[(int64_t)(int)ui_data_ptr[0x275] * 0x24 + 0x202] = 1;
        status_code = status_code;
        if (0 < (int)ui_data_ptr[(int64_t)(int)ui_data_ptr[0x274] + 0x270]) {
            ui_data_ptr[(int64_t)(int)ui_data_ptr[0x274] + 0x270] =
                 ui_data_ptr[(int64_t)(int)ui_data_ptr[0x274] + 0x270] + -1;
        }
    }
    
context_setup_complete:
    *(int32_t *)(context + 0x1318) = 0;
    func_0x000180001000();
    return (uint64_t)status_code;
}

/**
 * UI系统高级纹理切换器
 * 
 * 在不同纹理之间进行高级切换操作
 * 
 * @param context UI系统上下文
 * @param param_type 参数类型
 * @param param_values 参数值数组
 * @return 操作结果
 */
int32_t ui_system_texture_switcher_advanced(int64_t context, int param_type, int *param_values)
{
    int32_t *ui_data;
    int *texture_count;
    int new_texture_index;
    int64_t texture_offset;
    void *error_handler;
    int *texture_slot;
    
    ui_data = (int32_t *)(context + 0x12c0);
    if (param_type == 1) {
        texture_slot = (int *)(context + 0x1c94);
    }
    else if (param_type == 2) {
        texture_slot = (int *)(context + 0x1c98);
    }
    else {
        if (param_type != 4) {
            error_handler = &unknown_var_7720_ptr;
            goto texture_switch_failed;
        }
        texture_slot = (int *)(context + 0x1c9c);
    }
    
    texture_offset = (int64_t)*texture_slot;
    if ((((*(int *)(context + 0x1a44 + texture_offset * UI_VERTEX_BUFFER_SIZE) == param_values[1]) &&
         (*(int *)(context + 0x1a40 + texture_offset * UI_VERTEX_BUFFER_SIZE) == *param_values)) &&
        (*(int *)(context + 0x1a58 + texture_offset * UI_VERTEX_BUFFER_SIZE) == param_values[6])) &&
       (*(int *)(context + 0x1a54 + texture_offset * UI_VERTEX_BUFFER_SIZE) == param_values[5])) {
        new_texture_index = func_0x00018066eb80(ui_data);
        texture_count = (int *)(context + 0x1c80 + (int64_t)new_texture_index * 4);
        *texture_count = *texture_count + -1;
        if (0 < (int)ui_data[(int64_t)*texture_slot + 0x270]) {
            ui_data[(int64_t)*texture_slot + 0x270] = ui_data[(int64_t)*texture_slot + 0x270] + -1;
        }
        *texture_slot = new_texture_index;
        texture_count = (int *)(context + 0x1c80 + (int64_t)new_texture_index * 4);
        *texture_count = *texture_count + 1;
        FUN_18069c540(param_values, context + 0x1a40 + (int64_t)*texture_slot * UI_VERTEX_BUFFER_SIZE);
        return *ui_data;
    }
    
    error_handler = &unknown_var_7744_ptr;
texture_switch_failed:
    SystemInitializationProcessor(ui_data, 1, error_handler);
    return *ui_data;
}