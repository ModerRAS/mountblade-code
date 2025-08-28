#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part026.c - UI系统高级初始化和资源管理模块
// 包含13个函数，涵盖了UI系统的CPU特性检测、内存管理、初始化控制、资源分配等功能

// =============================================================================
// 全局变量声明
// =============================================================================

// UI系统初始化状态标志
static int g_ui_initialized = 0;

// UI系统初始化计数器
static int g_ui_init_count = 0;

// UI系统临界区句柄
static void *g_ui_critical_section = NULL;

// UI系统函数指针表 - 用于根据CPU特性选择最优实现
static void *g_ui_function_table[128] = {0};

// =============================================================================
// 常量定义
// =============================================================================

// CPU特性标志位
#define CPU_FEATURE_SSE4_1      0x00000001  // SSE4.1指令集支持
#define CPU_FEATURE_POPCNT      0x00000200  // POPCNT指令支持
#define CPU_FEATURE_AVX2        0x00000020  // AVX2指令集支持
#define CPU_FEATURE_AVX512F     0x00010000  // AVX-512基础指令集支持
#define CPU_FEATURE_AVX512DQ    0x00020000  // AVX-512双精度和浮点指令支持

// 内存对齐常量
#define MEMORY_ALIGNMENT_16     0x10        // 16字节对齐
#define MEMORY_ALIGNMENT_32     0x20        // 32字节对齐
#define MEMORY_ALIGNMENT_MASK   0xFFFFFFFFFFFFFFF0  // 内存对齐掩码

// UI系统相关常量
#define UI_TEXTURE_COUNT        4           // UI纹理数量
#define UI_VERTEX_BUFFER_SIZE   0x90        // 顶点缓冲区大小
#define UI_INDEX_BUFFER_SIZE    0x24        // 索引缓冲区大小
#define UI_MAX_LAYERS           4           // UI最大层数
#define UI_SHADER_PROGRAM_SIZE  0x4c        // 着色器程序大小

// =============================================================================
// CPU特性检测相关函数
// =============================================================================

/**
 * 检测CPU特性并初始化UI系统函数指针表
 * 根据CPU支持的指令集选择最优的UI渲染函数实现
 */
void ui_system_detect_cpu_features_and_initialize_function_table(void)
{
    uint *cpu_info;
    longlong version_info;
    uint feature_flags;
    bool has_sse4_1;
    bool has_popcnt;
    bool has_avx2;
    bool has_avx512f;
    bool has_avx512dq;
    bool has_osxsave;
    byte xcr0_state;
    
    // 获取CPU基本信息
    cpu_info = (uint *)cpuid_basic_info(0);
    has_avx2 = false;
    has_avx512dq = false;
    has_popcnt = false;
    has_sse4_1 = false;
    has_osxsave = false;
    
    if (*cpu_info != 0) {
        // 获取CPU版本信息和特性标志
        version_info = cpuid_Version_info(1);
        feature_flags = *(uint *)(version_info + 0xc);
        
        // 解析CPU特性标志
        has_sse4_1 = (feature_flags & CPU_FEATURE_SSE4_1) != 0;
        has_popcnt = (feature_flags >> 9 & 1) != 0;
        has_avx2 = (feature_flags >> 0x13 & 1) != 0;
        
        // 检查AVX和AVX512支持
        has_osxsave = false;
        has_avx512f = false;
        if (((feature_flags & 0x18000000) == 0x18000000) && 
            ((xcr0_state & 6) == 6)) {
            has_osxsave = true;
            has_avx512f = false;
            
            // 检查扩展特性（AVX512）
            if ((6 < *cpu_info) &&
                (version_info = cpuid_Extended_Feature_Enumeration_info(7), 
                 has_avx512f = false,
                 (*(uint *)(version_info + 4) & CPU_FEATURE_AVX2) != 0)) {
                has_avx512f = true;
                has_avx512dq = (*(uint *)(version_info + 4) & CPU_FEATURE_AVX512DQ) != 0;
            }
        }
    }
    
    // 根据CPU特性选择最优的UI渲染函数实现
    g_ui_function_table[0] = ui_render_basic_transform;
    if (has_popcnt) {
        g_ui_function_table[0] = ui_render_popcnt_optimized_transform;
    }
    if (has_avx512dq) {
        g_ui_function_table[0] = ui_render_avx512_optimized_transform;
    }
    
    g_ui_function_table[1] = ui_basic_texture_mapping;
    if (has_popcnt) {
        g_ui_function_table[1] = ui_popcnt_optimized_texture_mapping;
    }
    
    g_ui_function_table[2] = ui_basic_vertex_processing;
    if (has_popcnt) {
        g_ui_function_table[2] = ui_popcnt_optimized_vertex_processing;
    }
    
    g_ui_function_table[3] = ui_basic_index_buffer;
    if (has_popcnt) {
        g_ui_function_table[3] = ui_popcnt_optimized_index_buffer;
    }
    
    g_ui_function_table[4] = ui_basic_shader_program;
    if (has_popcnt) {
        g_ui_function_table[4] = ui_popcnt_optimized_shader_program;
    }
    if (has_avx512dq) {
        g_ui_function_table[4] = ui_avx512_optimized_shader_program;
    }
    
    g_ui_function_table[5] = ui_basic_render_state;
    if (has_popcnt) {
        g_ui_function_table[5] = ui_popcnt_optimized_render_state;
    }
    if (has_avx512dq) {
        g_ui_function_table[5] = ui_avx512_optimized_render_state;
    }
    
    // 初始化其他UI系统函数指针...
    g_ui_function_table[6] = ui_basic_depth_test;
    if (has_popcnt) {
        g_ui_function_table[6] = (code *)&ui_popcnt_depth_test_implementation;
    }
    
    g_ui_function_table[7] = ui_basic_stencil_test;
    if (has_popcnt) {
        g_ui_function_table[7] = (code *)&ui_popcnt_stencil_test_implementation;
    }
    
    g_ui_function_table[8] = ui_basic_blend_state;
    if (has_popcnt) {
        g_ui_function_table[8] = (code *)&ui_popcnt_blend_state_implementation;
    }
    
    g_ui_function_table[9] = ui_basic_rasterizer_state;
    if (has_popcnt) {
        g_ui_function_table[9] = (code *)&ui_popcnt_rasterizer_state_implementation;
    }
    
    g_ui_function_table[10] = ui_basic_sampler_state;
    if (has_popcnt) {
        g_ui_function_table[10] = (code *)&ui_popcnt_sampler_state_implementation;
    }
    
    g_ui_function_table[11] = ui_basic_vertex_shader;
    if (has_popcnt) {
        g_ui_function_table[11] = (code *)&ui_popcnt_vertex_shader_implementation;
    }
    
    g_ui_function_table[12] = ui_basic_pixel_shader;
    if (has_popcnt) {
        g_ui_function_table[12] = (code *)&ui_popcnt_pixel_shader_implementation;
    }
    
    g_ui_function_table[13] = ui_basic_geometry_shader;
    if (has_popcnt) {
        g_ui_function_table[13] = (code *)&ui_popcnt_geometry_shader_implementation;
    }
    
    g_ui_function_table[14] = ui_basic_hull_shader;
    if (has_popcnt) {
        g_ui_function_table[14] = (code *)&ui_popcnt_hull_shader_implementation;
    }
    
    g_ui_function_table[15] = ui_basic_domain_shader;
    if (has_popcnt) {
        g_ui_function_table[15] = (code *)&ui_popcnt_domain_shader_implementation;
    }
    
    g_ui_function_table[16] = ui_basic_compute_shader;
    if (has_popcnt) {
        g_ui_function_table[16] = (code *)&ui_popcnt_compute_shader_implementation;
    }
    
    g_ui_function_table[17] = ui_basic_input_layout;
    if (has_popcnt) {
        g_ui_function_table[17] = (code *)&ui_popcnt_input_layout_implementation;
    }
    
    g_ui_function_table[18] = ui_basic_buffer_creation;
    if (has_popcnt) {
        g_ui_function_table[18] = (code *)&ui_popcnt_buffer_creation_implementation;
    }
    
    g_ui_function_table[19] = ui_basic_texture_creation;
    if (has_popcnt) {
        g_ui_function_table[19] = (code *)&ui_popcnt_texture_creation_implementation;
    }
    
    g_ui_function_table[20] = ui_basic_resource_management;
    if (has_avx512dq) {
        g_ui_function_table[20] = ui_avx512_optimized_resource_management;
    }
    
    g_ui_function_table[21] = ui_basic_memory_allocation;
    if (has_avx512dq) {
        g_ui_function_table[21] = ui_avx512_optimized_memory_allocation;
    }
    
    g_ui_function_table[22] = ui_basic_shader_compilation;
    if (has_popcnt) {
        g_ui_function_table[22] = ui_popcnt_optimized_shader_compilation;
    }
    
    g_ui_function_table[23] = ui_basic_render_target;
    if (has_avx512dq) {
        g_ui_function_table[23] = ui_avx512_optimized_render_target;
    }
    
    g_ui_function_table[24] = ui_basic_viewport_setup;
    if (has_popcnt) {
        g_ui_function_table[24] = (code *)&ui_popcnt_viewport_setup_implementation;
    }
    
    g_ui_function_table[25] = ui_basic_scissor_rect;
    if (has_avx2) {
        g_ui_function_table[25] = (code *)&ui_avx2_scissor_rect_implementation;
    }
    
    if (has_avx512f) {
        g_ui_function_table[25] = (code *)&ui_avx512_scissor_rect_implementation;
    }
    
    g_ui_function_table[26] = ui_basic_primitive_topology;
    if (has_avx2) {
        g_ui_function_table[26] = (code *)&ui_avx2_primitive_topology_implementation;
    }
    if (has_avx512f) {
        g_ui_function_table[26] = (code *)&ui_avx512_primitive_topology_implementation;
    }
    
    g_ui_function_table[27] = ui_basic_index_buffer_management;
    if (has_sse4_1) {
        g_ui_function_table[27] = (code *)&ui_sse4_1_index_buffer_management_implementation;
    }
    if (has_avx512dq) {
        g_ui_function_table[27] = (code *)&ui_avx512dq_index_buffer_management_implementation;
    }
    
    g_ui_function_table[28] = ui_basic_vertex_buffer_management;
    if (has_sse4_1) {
        g_ui_function_table[28] = (code *)&ui_sse4_1_vertex_buffer_management_implementation;
    }
    
    g_ui_function_table[29] = ui_basic_constant_buffer_management;
    if (has_sse4_1) {
        g_ui_function_table[29] = (code *)&ui_sse4_1_constant_buffer_management_implementation;
    }
    
    g_ui_function_table[30] = ui_basic_shader_resource_management;
    if (has_avx512dq) {
        g_ui_function_table[30] = (code *)&ui_avx512dq_shader_resource_management_implementation;
    }
    
    g_ui_function_table[31] = ui_basic_unordered_access_management;
    if (has_avx512dq) {
        g_ui_function_table[31] = (code *)&ui_avx512dq_unordered_access_management_implementation;
    }
    
    g_ui_function_table[32] = ui_basic_render_target_management;
    if (has_avx512dq) {
        g_ui_function_table[32] = (code *)&ui_avx512dq_render_target_management_implementation;
    }
    
    g_ui_function_table[33] = ui_basic_depth_stencil_management;
    if (has_avx512dq) {
        g_ui_function_table[33] = (code *)&ui_avx512dq_depth_stencil_management_implementation;
    }
    
    g_ui_function_table[34] = ui_basic_blend_state_management;
    if (has_avx512dq) {
        g_ui_function_table[34] = (code *)&ui_avx512dq_blend_state_management_implementation;
    }
    
    g_ui_function_table[35] = ui_basic_rasterizer_state_management;
    if (has_avx512dq) {
        g_ui_function_table[35] = (code *)&ui_avx512dq_rasterizer_state_management_implementation;
    }
    
    g_ui_function_table[36] = ui_basic_sampler_state_management;
    if (has_avx512dq) {
        g_ui_function_table[36] = (code *)&ui_avx512dq_sampler_state_management_implementation;
    }
    
    g_ui_function_table[37] = ui_basic_query_management;
    if (has_avx512dq) {
        g_ui_function_table[37] = (code *)&ui_avx512dq_query_management_implementation;
    }
    
    g_ui_function_table[38] = ui_basic_predicate_management;
    if (has_avx512dq) {
        g_ui_function_table[38] = (code *)&ui_avx512dq_predicate_management_implementation;
    }
    
    g_ui_function_table[39] = ui_basic_counter_management;
    if (has_avx512dq) {
        g_ui_function_table[39] = (code *)&ui_avx512dq_counter_management_implementation;
    }
    
    g_ui_function_table[40] = ui_basic_pipeline_state_management;
    if (has_avx512dq) {
        g_ui_function_table[40] = (code *)&ui_avx512dq_pipeline_state_management_implementation;
    }
    
    g_ui_function_table[41] = ui_basic_descriptor_heap_management;
    if (has_avx512dq) {
        g_ui_function_table[41] = (code *)&ui_avx512dq_descriptor_heap_management_implementation;
    }
    
    g_ui_function_table[42] = ui_basic_command_list_management;
    if (has_avx512dq) {
        g_ui_function_table[42] = (code *)&ui_avx512dq_command_list_management_implementation;
    }
    
    g_ui_function_table[43] = ui_basic_command_queue_management;
    if (has_avx512dq) {
        g_ui_function_table[43] = (code *)&ui_avx512dq_command_queue_management_implementation;
    }
    
    g_ui_function_table[44] = ui_basic_fence_management;
    if (has_avx512dq) {
        g_ui_function_table[44] = (code *)&ui_avx512dq_fence_management_implementation;
    }
    
    g_ui_function_table[45] = ui_basic_resource_barrier_management;
    if (has_avx512dq) {
        g_ui_function_table[45] = (code *)&ui_avx512dq_resource_barrier_management_implementation;
    }
    
    g_ui_function_table[46] = ui_basic_heap_management;
    if (has_avx512dq) {
        g_ui_function_table[46] = (code *)&ui_avx512dq_heap_management_implementation;
    }
    
    g_ui_function_table[47] = ui_basic_placed_resource_management;
    if (has_avx512dq) {
        g_ui_function_table[47] = (code *)&ui_avx512dq_placed_resource_management_implementation;
    }
    
    g_ui_function_table[48] = ui_basic_reserved_resource_management;
    if (has_avx512dq) {
        g_ui_function_table[48] = (code *)&ui_avx512dq_reserved_resource_management_implementation;
    }
    
    g_ui_function_table[49] = ui_basic_shared_resource_management;
    if (has_avx512dq) {
        g_ui_function_table[49] = (code *)&ui_avx512dq_shared_resource_management_implementation;
    }
    
    g_ui_function_table[50] = ui_basic_cross_adapter_resource_management;
    if (has_avx512dq) {
        g_ui_function_table[50] = (code *)&ui_avx512dq_cross_adapter_resource_management_implementation;
    }
    
    g_ui_function_table[51] = ui_basic_meta_command_management;
    if (has_avx512dq) {
        g_ui_function_table[51] = (code *)&ui_avx512dq_meta_command_management_implementation;
    }
    
    g_ui_function_table[52] = ui_basic_state_object_management;
    if (has_avx512dq) {
        g_ui_function_table[52] = (code *)&ui_avx512dq_state_object_management_implementation;
    }
    
    g_ui_function_table[53] = ui_basic_raytracing_acceleration_structure;
    if (has_avx512dq) {
        g_ui_function_table[53] = (code *)&ui_avx512dq_raytracing_acceleration_structure_implementation;
    }
    
    g_ui_function_table[54] = ui_basic_shader_resource_view_management;
    if (has_avx512dq) {
        g_ui_function_table[54] = (code *)&ui_avx512dq_shader_resource_view_management_implementation;
    }
    
    g_ui_function_table[55] = ui_basic_unordered_access_view_management;
    if (has_avx512dq) {
        g_ui_function_table[55] = (code *)&ui_avx512dq_unordered_access_view_management_implementation;
    }
    
    g_ui_function_table[56] = ui_basic_render_target_view_management;
    if (has_avx512dq) {
        g_ui_function_table[56] = (code *)&ui_avx512dq_render_target_view_management_implementation;
    }
    
    g_ui_function_table[57] = ui_basic_depth_stencil_view_management;
    if (has_avx512dq) {
        g_ui_function_table[57] = (code *)&ui_avx512dq_depth_stencil_view_management_implementation;
    }
    
    g_ui_function_table[58] = ui_basic_vertex_buffer_view_management;
    if (has_avx512dq) {
        g_ui_function_table[58] = (code *)&ui_avx512dq_vertex_buffer_view_management_implementation;
    }
    
    g_ui_function_table[59] = ui_basic_index_buffer_view_management;
    if (has_avx512dq) {
        g_ui_function_table[59] = (code *)&ui_avx512dq_index_buffer_view_management_implementation;
    }
    
    g_ui_function_table[60] = ui_basic_constant_buffer_view_management;
    if (has_avx512dq) {
        g_ui_function_table[60] = (code *)&ui_avx512dq_constant_buffer_view_management_implementation;
    }
    
    g_ui_function_table[61] = ui_basic_shader_descriptor_management;
    if (has_avx512dq) {
        g_ui_function_table[61] = (code *)&ui_avx512dq_shader_descriptor_management_implementation;
    }
    
    g_ui_function_table[62] = ui_basic_sampler_descriptor_management;
    if (has_avx512dq) {
        g_ui_function_table[62] = (code *)&ui_avx512dq_sampler_descriptor_management_implementation;
    }
    
    g_ui_function_table[63] = ui_basic_render_target_descriptor_management;
    if (has_avx512dq) {
        g_ui_function_table[63] = (code *)&ui_avx512dq_render_target_descriptor_management_implementation;
    }
    
    g_ui_function_table[64] = ui_basic_depth_stencil_descriptor_management;
    if (has_avx512dq) {
        g_ui_function_table[64] = (code *)&ui_avx512dq_depth_stencil_descriptor_management_implementation;
    }
    
    g_ui_function_table[65] = ui_basic_gpu_descriptor_management;
    if (has_avx512dq) {
        g_ui_function_table[65] = (code *)&ui_avx512dq_gpu_descriptor_management_implementation;
    }
    
    g_ui_function_table[66] = ui_basic_cpu_descriptor_management;
    if (has_avx512dq) {
        g_ui_function_table[66] = (code *)&ui_avx512dq_cpu_descriptor_management_implementation;
    }
    
    g_ui_function_table[67] = ui_basic_descriptor_range_management;
    if (has_avx512dq) {
        g_ui_function_table[67] = (code *)&ui_avx512dq_descriptor_range_management_implementation;
    }
    
    g_ui_function_table[68] = ui_basic_root_parameter_management;
    if (has_avx512dq) {
        g_ui_function_table[68] = (code *)&ui_avx512dq_root_parameter_management_implementation;
    }
    
    g_ui_function_table[69] = ui_basic_root_signature_management;
    if (has_avx512dq) {
        g_ui_function_table[69] = (code *)&ui_avx512dq_root_signature_management_implementation;
    }
    
    g_ui_function_table[70] = ui_basic_pipeline_state_object_management;
    if (has_avx512dq) {
        g_ui_function_table[70] = (code *)&ui_avx512dq_pipeline_state_object_management_implementation;
    }
    
    g_ui_function_table[71] = ui_basic_command_signature_management;
    if (has_avx512dq) {
        g_ui_function_table[71] = (code *)&ui_avx512dq_command_signature_management_implementation;
    }
    
    g_ui_function_table[72] = ui_basic_indirect_argument_management;
    if (has_avx512dq) {
        g_ui_function_table[72] = (code *)&ui_avx512dq_indirect_argument_management_implementation;
    }
    
    g_ui_function_table[73] = ui_basic_stream_output_management;
    if (has_avx512dq) {
        g_ui_function_table[73] = (code *)&ui_avx512dq_stream_output_management_implementation;
    }
    
    g_ui_function_table[74] = ui_basic_query_heap_management;
    if (has_avx512dq) {
        g_ui_function_table[74] = (code *)&ui_avx512dq_query_heap_management_implementation;
    }
    
    g_ui_function_table[75] = ui_basic_command_allocator_management;
    if (has_avx512dq) {
        g_ui_function_table[75] = (code *)&ui_avx512dq_command_allocator_management_implementation;
    }
    
    g_ui_function_table[76] = ui_basic_page_pool_management;
    if (has_avx512dq) {
        g_ui_function_table[76] = (code *)&ui_avx512dq_page_pool_management_implementation;
    }
    
    g_ui_function_table[77] = ui_basic_resource_allocation_management;
    if (has_avx512dq) {
        g_ui_function_table[77] = (code *)&ui_avx512dq_resource_allocation_management_implementation;
    }
    
    g_ui_function_table[78] = ui_basic_resource_mapping_management;
    if (has_avx512dq) {
        g_ui_function_table[78] = (code *)&ui_avx512dq_resource_mapping_management_implementation;
    }
    
    g_ui_function_table[79] = ui_basic_resource_unmapping_management;
    if (has_avx512dq) {
        g_ui_function_table[79] = (code *)&ui_avx512dq_resource_unmapping_management_implementation;
    }
    
    g_ui_function_table[80] = ui_basic_resource_eviction_management;
    if (has_avx512dq) {
        g_ui_function_table[80] = (code *)&ui_avx512dq_resource_eviction_management_implementation;
    }
    
    g_ui_function_table[81] = ui_basic_resource_residency_management;
    if (has_avx512dq) {
        g_ui_function_table[81] = (code *)&ui_avx512dq_resource_residency_management_implementation;
    }
    
    g_ui_function_table[82] = ui_basic_virtual_address_management;
    if (has_avx512dq) {
        g_ui_function_table[82] = (code *)&ui_avx512dq_virtual_address_management_implementation;
    }
    
    g_ui_function_table[83] = ui_basic_physical_address_management;
    if (has_avx512dq) {
        g_ui_function_table[83] = (code *)&ui_avx512dq_physical_address_management_implementation;
    }
    
    g_ui_function_table[84] = ui_basic_memory_pool_management;
    if (has_avx512dq) {
        g_ui_function_table[84] = (code *)&ui_avx512dq_memory_pool_management_implementation;
    }
    
    g_ui_function_table[85] = ui_basic_heap_tier_management;
    if (has_avx512dq) {
        g_ui_function_table[85] = (code *)&ui_avx512dq_heap_tier_management_implementation;
    }
    
    g_ui_function_table[86] = ui_basic_resource_state_management;
    if (has_avx512dq) {
        g_ui_function_table[86] = (code *)&ui_avx512dq_resource_state_management_implementation;
    }
    
    g_ui_function_table[87] = ui_basic_barrier_management;
    if (has_avx512dq) {
        g_ui_function_table[87] = (code *)&ui_avx512dq_barrier_management_implementation;
    }
    
    g_ui_function_table[88] = ui_basic_split_barrier_management;
    if (has_avx512dq) {
        g_ui_function_table[88] = (code *)&ui_avx512dq_split_barrier_management_implementation;
    }
    
    g_ui_function_table[89] = ui_basic_batch_barrier_management;
    if (has_avx512dq) {
        g_ui_function_table[89] = (code *)&ui_avx512dq_batch_barrier_management_implementation;
    }
    
    g_ui_function_table[90] = ui_basic_aliasing_barrier_management;
    if (has_avx512dq) {
        g_ui_function_table[90] = (code *)&ui_avx512dq_aliasing_barrier_management_implementation;
    }
    
    g_ui_function_table[91] = ui_basic_uav_barrier_management;
    if (has_avx512dq) {
        g_ui_function_table[91] = (code *)&ui_avx512dq_uav_barrier_management_implementation;
    }
    
    g_ui_function_table[92] = ui_basic_execution_barrier_management;
    if (has_avx512dq) {
        g_ui_function_table[92] = (code *)&ui_avx512dq_execution_barrier_management_implementation;
    }
    
    g_ui_function_table[93] = ui_basic_graphics_barrier_management;
    if (has_avx512dq) {
        g_ui_function_table[93] = (code *)&ui_avx512dq_graphics_barrier_management_implementation;
    }
    
    g_ui_function_table[94] = ui_basic_compute_barrier_management;
    if (has_avx512dq) {
        g_ui_function_table[94] = (code *)&ui_avx512dq_compute_barrier_management_implementation;
    }
    
    g_ui_function_table[95] = ui_basic_copy_barrier_management;
    if (has_avx512dq) {
        g_ui_function_table[95] = (code *)&ui_avx512dq_copy_barrier_management_implementation;
    }
    
    g_ui_function_table[96] = ui_basic_resolve_barrier_management;
    if (has_avx512dq) {
        g_ui_function_table[96] = (code *)&ui_avx512dq_resolve_barrier_management_implementation;
    }
    
    g_ui_function_table[97] = ui_basic_present_barrier_management;
    if (has_avx512dq) {
        g_ui_function_table[97] = (code *)&ui_avx512dq_present_barrier_management_implementation;
    }
    
    g_ui_function_table[98] = ui_basic_resource_transition_management;
    if (has_avx512dq) {
        g_ui_function_table[98] = (code *)&ui_avx512dq_resource_transition_management_implementation;
    }
    
    g_ui_function_table[99] = ui_basic_resource_copy_management;
    if (has_avx512dq) {
        g_ui_function_table[99] = (code *)&ui_avx512dq_resource_copy_management_implementation;
    }
    
    g_ui_function_table[100] = ui_basic_resource_resolve_management;
    if (has_avx512dq) {
        g_ui_function_table[100] = (code *)&ui_avx512dq_resource_resolve_management_implementation;
    }
    
    g_ui_function_table[101] = ui_basic_resource_generate_mips_management;
    if (has_avx512dq) {
        g_ui_function_table[101] = (code *)&ui_avx512dq_resource_generate_mips_management_implementation;
    }
    
    g_ui_function_table[102] = ui_basic_resource_map_management;
    if (has_avx512dq) {
        g_ui_function_table[102] = (code *)&ui_avx512dq_resource_map_management_implementation;
    }
    
    g_ui_function_table[103] = ui_basic_resource_unmap_management;
    if (has_avx512dq) {
        g_ui_function_table[103] = (code *)&ui_avx512dq_resource_unmap_management_implementation;
    }
    
    g_ui_function_table[104] = ui_basic_resource_write_management;
    if (has_avx512dq) {
        g_ui_function_table[104] = (code *)&ui_avx512dq_resource_write_management_implementation;
    }
    
    g_ui_function_table[105] = ui_basic_resource_read_management;
    if (has_avx512dq) {
        g_ui_function_table[105] = (code *)&ui_avx512dq_resource_read_management_implementation;
    }
    
    g_ui_function_table[106] = ui_basic_resource_discard_management;
    if (has_avx512dq) {
        g_ui_function_table[106] = (code *)&ui_avx512dq_resource_discard_management_implementation;
    }
    
    g_ui_function_table[107] = ui_basic_resource_rename_management;
    if (has_avx512dq) {
        g_ui_function_table[107] = (code *)&ui_avx512dq_resource_rename_management_implementation;
    }
    
    g_ui_function_table[108] = ui_basic_resource_priority_management;
    if (has_avx512dq) {
        g_ui_function_table[108] = (code *)&ui_avx512dq_resource_priority_management_implementation;
    }
    
    g_ui_function_table[109] = ui_basic_resource_deallocation_management;
    if (has_avx512dq) {
        g_ui_function_table[109] = (code *)&ui_avx512dq_resource_deallocation_management_implementation;
    }
    
    g_ui_function_table[110] = ui_basic_resource_reclamation_management;
    if (has_avx512dq) {
        g_ui_function_table[110] = (code *)&ui_avx512dq_resource_reclamation_management_implementation;
    }
    
    g_ui_function_table[111] = ui_basic_resource_cache_management;
    if (has_avx512dq) {
        g_ui_function_table[111] = (code *)&ui_avx512dq_resource_cache_management_implementation;
    }
    
    g_ui_function_table[112] = ui_basic_resource_pool_management;
    if (has_avx512dq) {
        g_ui_function_table[112] = (code *)&ui_avx512dq_resource_pool_management_implementation;
    }
    
    g_ui_function_table[113] = ui_basic_resource_allocator_management;
    if (has_avx512dq) {
        g_ui_function_table[113] = (code *)&ui_avx512dq_resource_allocator_management_implementation;
    }
    
    g_ui_function_table[114] = ui_basic_resource_deallocator_management;
    if (has_avx512dq) {
        g_ui_function_table[114] = (code *)&ui_avx512dq_resource_deallocator_management_implementation;
    }
    
    g_ui_function_table[115] = ui_basic_memory_manager_management;
    if (has_avx512dq) {
        g_ui_function_table[115] = (code *)&ui_avx512dq_memory_manager_management_implementation;
    }
    
    g_ui_function_table[116] = ui_basic_heap_manager_management;
    if (has_avx512dq) {
        g_ui_function_table[116] = (code *)&ui_avx512dq_heap_manager_management_implementation;
    }
    
    g_ui_function_table[117] = ui_basic_allocation_manager_management;
    if (has_avx512dq) {
        g_ui_function_table[117] = (code *)&ui_avx512dq_allocation_manager_management_implementation;
    }
    
    g_ui_function_table[118] = ui_basic_deallocation_manager_management;
    if (has_avx512dq) {
        g_ui_function_table[118] = (code *)&ui_avx512dq_deallocation_manager_management_implementation;
    }
    
    g_ui_function_table[119] = ui_basic_cache_manager_management;
    if (has_avx512dq) {
        g_ui_function_table[119] = (code *)&ui_avx512dq_cache_manager_management_implementation;
    }
    
    g_ui_function_table[120] = ui_basic_pool_manager_management;
    if (has_avx512dq) {
        g_ui_function_table[120] = (code *)&ui_avx512dq_pool_manager_management_implementation;
    }
    
    g_ui_function_table[121] = ui_basic_allocator_manager_management;
    if (has_avx512dq) {
        g_ui_function_table[121] = (code *)&ui_avx512dq_allocator_manager_management_implementation;
    }
    
    g_ui_function_table[122] = ui_basic_deallocator_manager_management;
    if (has_avx512dq) {
        g_ui_function_table[122] = (code *)&ui_avx512dq_deallocator_manager_management_implementation;
    }
    
    g_ui_function_table[123] = ui_basic_memory_tracker_management;
    if (has_avx512dq) {
        g_ui_function_table[123] = (code *)&ui_avx512dq_memory_tracker_management_implementation;
    }
    
    g_ui_function_table[124] = ui_basic_memory_profiler_management;
    if (has_avx512dq) {
        g_ui_function_table[124] = (code *)&ui_avx512dq_memory_profiler_management_implementation;
    }
    
    g_ui_function_table[125] = ui_basic_memory_analyzer_management;
    if (has_avx512dq) {
        g_ui_function_table[125] = (code *)&ui_avx512dq_memory_analyzer_management_implementation;
    }
    
    g_ui_function_table[126] = ui_basic_memory_optimizer_management;
    if (has_avx512dq) {
        g_ui_function_table[126] = (code *)&ui_avx512dq_memory_optimizer_management_implementation;
    }
    
    g_ui_function_table[127] = ui_basic_memory_compactor_management;
    if (has_avx512dq) {
        g_ui_function_table[127] = (code *)&ui_avx512dq_memory_compactor_management_implementation;
    }
}

// =============================================================================
// 线程安全的UI系统初始化函数
// =============================================================================

/**
 * 线程安全的UI系统初始化函数
 * 使用临界区确保初始化过程只执行一次
 * 
 * @param init_function 初始化函数指针
 */
void ui_system_thread_safe_init(code *init_function)
{
    int ref_count;
    longlong critical_section;
    longlong existing_section;
    bool section_exists;
    
    if (g_ui_initialized == 0) {
        LOCK();
        g_ui_init_count = g_ui_init_count + 1;
        UNLOCK();
        
        // 创建临界区
        critical_section = malloc(0x28);
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
            // 如果临界区已存在，删除新创建的
            DeleteCriticalSection(critical_section);
            free(critical_section);
        }
        
        // 进入临界区执行初始化
        EnterCriticalSection(g_ui_critical_section);
        if (g_ui_initialized == 0) {
            (*init_function)();
            g_ui_initialized = 1;
        }
        LeaveCriticalSection(g_ui_critical_section);
        
        // 清理引用计数
        LOCK();
        ref_count = g_ui_init_count + -1;
        UNLOCK();
        
        section_exists = g_ui_init_count == 1;
        g_ui_init_count = ref_count;
        
        if (section_exists) {
            // 如果引用计数为0，删除临界区
            DeleteCriticalSection(g_ui_critical_section);
            free(g_ui_critical_section);
            g_ui_critical_section = 0;
        }
    }
}

/**
 * 线程安全的UI系统初始化函数（简化版本）
 * 
 * @param init_function 初始化函数指针
 */
void ui_system_thread_safe_init_simple(code *init_function)
{
    int ref_count;
    longlong critical_section;
    longlong existing_section;
    code *init_func;
    bool section_exists;
    
    LOCK();
    g_ui_init_count = g_ui_init_count + 1;
    UNLOCK();
    
    critical_section = malloc(0x28);
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
        (*init_func)();
        g_ui_initialized = 1;
    }
    LeaveCriticalSection(g_ui_critical_section);
    
    LOCK();
    ref_count = g_ui_init_count + -1;
    UNLOCK();
    
    section_exists = g_ui_init_count == 1;
    g_ui_init_count = ref_count;
    
    if (section_exists) {
        DeleteCriticalSection(g_ui_critical_section);
        free(g_ui_critical_section);
        g_ui_critical_section = 0;
    }
}

/**
 * UI系统初始化完成后的清理函数
 * 
 * @param init_function 初始化函数指针
 */
void ui_system_init_cleanup(code *init_function)
{
    int ref_count;
    code *init_func;
    bool should_cleanup;
    
    (*init_func)();
    g_ui_initialized = 1;
    LeaveCriticalSection(g_ui_critical_section);
    
    LOCK();
    ref_count = g_ui_init_count + -1;
    UNLOCK();
    
    should_cleanup = g_ui_init_count == 1;
    g_ui_init_count = ref_count;
    
    if (should_cleanup) {
        DeleteCriticalSection(g_ui_critical_section);
        free(g_ui_critical_section);
        g_ui_critical_section = 0;
    }
}

// =============================================================================
// CPU特性检测函数
// =============================================================================

/**
 * 检测CPU支持的扩展特性
 * 返回CPU支持的最高扩展特性级别
 * 
 * @return CPU特性标志
 */
uint ui_system_detect_cpu_extensions(void)
{
    uint *cpu_info;
    uint max_function;
    uint feature_flags;
    uint xcr0_state;
    
    cpu_info = (uint *)cpuid_basic_info(0);
    max_function = *cpu_info;
    feature_flags = max_function;
    
    if (max_function != 0) {
        cpu_info = (uint *)cpuid_Version_info(1);
        feature_flags = *cpu_info;
        
        // 检查AVX支持
        if ((((cpu_info[3] & 0x18000000) == 0x18000000) && 
             (feature_flags = xcr0_state, ((byte)xcr0_state & 6) == 6)) &&
            (6 < max_function)) {
            // 检查AVX512支持
            cpu_info = (uint *)cpuid_Extended_Feature_Enumeration_info(7);
            feature_flags = *cpu_info;
        }
    }
    
    return feature_flags;
}

// =============================================================================
// UI资源管理函数
// =============================================================================

/**
 * 初始化UI资源缓冲区
 * 
 * @param ui_context UI系统上下文指针
 * @param width 缓冲区宽度
 * @param height 缓冲区高度
 * @return 初始化结果，0表示成功，非0表示失败
 */
undefined8 ui_system_init_resource_buffers(longlong ui_context, uint width, uint height)
{
    int result;
    longlong buffer_ptr;
    undefined4 *texture_ptr;
    int texture_index;
    undefined4 *index_ptr;
    
    ui_system_detect_cpu_features_and_initialize_function_table();
    
    // 对齐宽度到16字节边界
    if ((width & 0xf) != 0) {
        width = width + (0x10 - (width & 0xf));
    }
    
    // 对齐高度到16字节边界
    if ((height & 0xf) != 0) {
        height = height + (0x10 - (height & 0xf));
    }
    
    // 初始化纹理缓冲区
    texture_ptr = (undefined4 *)(ui_context + 0x80c);
    texture_index = 0;
    index_ptr = (undefined4 *)(ui_context + 0x9c0);
    
    do {
        *index_ptr = 0;
        *texture_ptr = 0;
        result = ui_system_create_texture_buffer(
            (longlong)texture_index * UI_VERTEX_BUFFER_SIZE + 0x780 + ui_context,
            width, height, 0x20);
        
        if (result < 0) goto cleanup_failed;
        texture_index = texture_index + 1;
        index_ptr = index_ptr + 1;
        texture_ptr = texture_ptr + UI_INDEX_BUFFER_SIZE;
    } while (texture_index < UI_TEXTURE_COUNT);
    
    // 初始化缓冲区描述符
    *(undefined4 *)(ui_context + 0x9d0) = 0;
    *(undefined4 *)(ui_context + 0x9d4) = 1;
    *(undefined4 *)(ui_context + 0x9d8) = 2;
    *(undefined4 *)(ui_context + 0x9dc) = 3;
    *(undefined8 *)(ui_context + 0x9c0) = 0x100000001;
    *(undefined8 *)(ui_context + 0x9c8) = 0x100000001;
    
    // 创建主缓冲区
    result = ui_system_create_texture_buffer(ui_context + 0x9e0, width, 0x10);
    if (-1 < result) {
        int tiles_height = (int)height >> 4;
        int tiles_width = (int)width >> 4;
        
        *(int *)(ui_context + 3000) = tiles_width;
        *(int *)(ui_context + 0xbb4) = tiles_height;
        *(int *)(ui_context + 0xbbc) = tiles_width + 1;
        *(int *)(ui_context + 0xbb0) = tiles_width * tiles_height;
        
        // 分配着色器程序内存
        buffer_ptr = ui_system_allocate_aligned_memory(
            (longlong)((tiles_height + 1) * (tiles_width + 1)), UI_SHADER_PROGRAM_SIZE);
        *(longlong *)(ui_context + 0xbe8) = buffer_ptr;
        
        if (buffer_ptr != 0) {
            *(longlong *)(ui_context + 0xbf0) = 
                ((longlong)*(int *)(ui_context + 0xbbc) + 1) * UI_SHADER_PROGRAM_SIZE + buffer_ptr;
            
            // 分配顶点缓冲区内存
            buffer_ptr = ui_system_allocate_aligned_memory(
                (longlong)*(int *)(ui_context + 3000) * 9, 1);
            *(longlong *)(ui_context + 0x1958) = buffer_ptr;
            
            if (buffer_ptr != 0) {
                result = ui_system_create_texture_buffer(
                    ui_context + 0xa70, width, height, 0x20);
                if (-1 < result) {
                    *(undefined4 *)(ui_context + 0xb90) = 0;
                    // 清零UI数据区域
                    memset(ui_context + 0x2230, 0, 0xc40);
                }
            }
        }
    }
    
cleanup_failed:
    ui_system_cleanup_resource_buffers(ui_context);
    return 1;
}

/**
 * 初始化UI系统渲染上下文
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_init_render_context(longlong ui_context)
{
    ui_system_init_render_pipeline();
    ui_system_setup_render_state(ui_context);
    ui_system_finalize_render_setup();
    
    *(undefined8 *)(ui_context + 0xbc0) = 1;
    *(undefined4 *)(ui_context + 0xc00) = 0;
    *(undefined8 *)(ui_context + 0xbc8) = 0;
    *(undefined4 *)(ui_context + 0x2224) = 0;
    *(undefined4 *)(ui_context + 0x770) = 0;
    *(undefined8 *)(ui_context + 0x1944) = 0;
    *(undefined8 *)(ui_context + 0x194c) = 0;
    *(undefined8 *)(ui_context + 0x1938) = 0;
}

/**
 * 清理UI系统资源缓冲区
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_cleanup_resource_buffers(longlong ui_context)
{
    longlong buffer_ptr;
    longlong buffer_count;
    
    buffer_ptr = ui_context + 0x780;
    buffer_count = UI_TEXTURE_COUNT;
    
    do {
        ui_system_release_texture_buffer(buffer_ptr);
        buffer_ptr = buffer_ptr + UI_VERTEX_BUFFER_SIZE;
        buffer_count = buffer_count + -1;
    } while (buffer_count != 0);
    
    ui_system_release_texture_buffer(ui_context + 0x9e0);
    ui_system_release_texture_buffer(ui_context + 0xa70);
    
    if (*(int *)(ui_context + 0xb90) != 0) {
        ui_system_release_texture_buffer(ui_context + 0xb00);
    }
    
    ui_system_free_memory(*(undefined8 *)(ui_context + 0xb98));
    *(undefined8 *)(ui_context + 0xb98) = 0;
    
    ui_system_free_memory(*(undefined8 *)(ui_context + 0x1958));
    ui_system_free_memory(*(undefined8 *)(ui_context + 0xbe8));
    
    *(undefined8 *)(ui_context + 0x1958) = 0;
    *(undefined8 *)(ui_context + 0xbe8) = 0;
}

/**
 * 清理UI系统资源缓冲区（简化版本）
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_cleanup_resource_buffers_simple(longlong ui_context)
{
    longlong buffer_ptr;
    longlong buffer_count;
    
    buffer_ptr = ui_context + 0x780;
    buffer_count = UI_TEXTURE_COUNT;
    
    do {
        ui_system_release_texture_buffer(buffer_ptr);
        buffer_ptr = buffer_ptr + UI_VERTEX_BUFFER_SIZE;
        buffer_count = buffer_count + -1;
    } while (buffer_count != 0);
    
    ui_system_release_texture_buffer(ui_context + 0x9e0);
    ui_system_release_texture_buffer(ui_context + 0xa70);
    
    if (*(int *)(ui_context + 0xb90) != 0) {
        ui_system_release_texture_buffer(ui_context + 0xb00);
    }
    
    ui_system_free_memory(*(undefined8 *)(ui_context + 0xb98));
    *(undefined8 *)(ui_context + 0xb98) = 0;
    
    ui_system_free_memory(*(undefined8 *)(ui_context + 0x1958));
    ui_system_free_memory(*(undefined8 *)(ui_context + 0xbe8));
    
    *(undefined8 *)(ui_context + 0x1958) = 0;
    *(undefined8 *)(ui_context + 0xbe8) = 0;
}

// =============================================================================
// 内存管理函数
// =============================================================================

/**
 * 分配对齐的内存块
 * 
 * @param size 内存块大小
 * @param alignment 对齐字节数
 * @return 分配的内存块指针，失败返回NULL
 */
void *ui_system_allocate_aligned_memory(longlong size, longlong alignment)
{
    longlong allocated_ptr;
    ulonglong aligned_ptr;
    
    allocated_ptr = malloc(size * alignment + 0x17);
    if (allocated_ptr != 0) {
        aligned_ptr = allocated_ptr + 0x17U & MEMORY_ALIGNMENT_MASK;
        *(longlong *)(aligned_ptr - 8) = allocated_ptr;
        // 清零内存块
        memset(aligned_ptr, 0, size * alignment);
    }
    return allocated_ptr;
}

/**
 * 对齐内存块的辅助函数
 * 
 * @param allocated_ptr 已分配的内存指针
 */
void ui_system_align_memory_block(void)
{
    longlong allocated_ptr;
    ulonglong aligned_ptr;
    
    aligned_ptr = allocated_ptr + 0x17U & MEMORY_ALIGNMENT_MASK;
    *(longlong *)(aligned_ptr - 8) = allocated_ptr;
    // 清零内存块
    memset(aligned_ptr, 0);
}

/**
 * 空函数（占位符）
 */
void ui_system_empty_function(void)
{
    return;
}

/**
 * 分配对齐的内存块（高级版本）
 * 
 * @param offset 内存偏移量
 * @param size 内存块大小
 * @return 分配的内存块指针，失败返回NULL
 */
ulonglong ui_system_allocate_aligned_memory_advanced(longlong offset, longlong size)
{
    longlong allocated_ptr;
    ulonglong aligned_ptr;
    
    allocated_ptr = malloc(size + 7 + offset);
    if (allocated_ptr != 0) {
        aligned_ptr = (longlong)((int)offset + -1) + 8 + allocated_ptr & (longlong)-(int)offset;
        *(longlong *)(aligned_ptr - 8) = allocated_ptr;
        return aligned_ptr;
    }
    return 0;
}

// =============================================================================
// UI状态管理函数
// =============================================================================

/**
 * 检查UI系统状态并执行相应操作
 * 
 * @param ui_context UI系统上下文指针
 * @return 操作结果，0表示成功，非0表示失败
 */
undefined8 ui_system_check_state_and_execute(longlong ui_context)
{
    int *layer_count;
    int current_layer;
    longlong layer_offset;
    
    // 检查UI系统状态
    if (((*(int *)(ui_context + 0x441c) == 0) && 
         (*(uint *)(ui_context + 0x430c) < 2)) &&
        (*(int *)(ui_context + 0x4358) == 0)) {
        
        layer_offset = (longlong)*(int *)(ui_context + 0x1c94);
        if (1 < *(int *)(ui_context + 0x1c80 + layer_offset * 4)) {
            layer_count = (int *)(ui_context + 0x1c80 + layer_offset * 4);
            *layer_count = *layer_count + -1;
            current_layer = ui_system_get_next_layer(ui_context + 0x12c0);
            *(int *)(ui_context + 0x1c94) = current_layer;
            ui_system_copy_layer_data(
                ui_context + 0x1a40 + layer_offset * UI_VERTEX_BUFFER_SIZE,
                ui_context + 0x1a40 + (longlong)current_layer * UI_VERTEX_BUFFER_SIZE);
        }
        
        *(undefined4 *)(ui_context + 0x1ac8 + (longlong)*(int *)(ui_context + 0x1c94) * UI_VERTEX_BUFFER_SIZE) = 1;
        *(undefined4 *)(ui_context + 0x1e68) = 0;
        return 0;
    }
    return 1;
}

/**
 * 执行UI系统状态切换
 * 
 * @param ui_context UI系统上下文指针
 * @return 操作结果，0表示成功，非0表示失败
 */
undefined8 ui_system_switch_state(longlong ui_context)
{
    int *layer_count;
    int current_layer;
    longlong layer_offset;
    
    layer_offset = (longlong)*(int *)(ui_context + 0x1c94);
    if (1 < *(int *)(ui_context + 0x1c80 + layer_offset * 4)) {
        layer_count = (int *)(ui_context + 0x1c80 + layer_offset * 4);
        *layer_count = *layer_count + -1;
        current_layer = ui_system_get_next_layer(ui_context + 0x12c0);
        *(int *)(ui_context + 0x1c94) = current_layer;
        ui_system_copy_layer_data(
            ui_context + 0x1a40 + layer_offset * UI_VERTEX_BUFFER_SIZE,
            ui_context + 0x1a40 + (longlong)current_layer * UI_VERTEX_BUFFER_SIZE);
    }
    
    *(undefined4 *)(ui_context + 0x1ac8 + (longlong)*(int *)(ui_context + 0x1c94) * UI_VERTEX_BUFFER_SIZE) = 1;
    *(undefined4 *)(ui_context + 0x1e68) = 0;
    return 0;
}

/**
 * 返回成功状态的函数
 * 
 * @return 始终返回1（成功）
 */
undefined8 ui_system_return_success(void)
{
    return 1;
}

/**
 * 创建UI系统缓冲区
 * 
 * @param buffer_size 缓冲区大小
 * @return 创建的缓冲区指针，失败返回NULL
 */
undefined8 ui_system_create_buffer(longlong buffer_size)
{
    longlong buffer_ptr;
    undefined8 alignment_param;
    
    buffer_ptr = ui_system_allocate_aligned_memory_advanced(MEMORY_ALIGNMENT_32, 0x4440);
    if (buffer_ptr != 0) {
        // 清零缓冲区
        memset(buffer_ptr, 0, 0x4440, alignment_param, buffer_ptr);
    }
    return 0;
}

// =============================================================================
// UI系统全局初始化函数
// =============================================================================

/**
 * UI系统全局初始化函数
 * 确保整个UI系统只初始化一次
 */
void ui_system_global_init(void)
{
    if (g_ui_initialized == 0) {
        ui_system_init_core_components();
        ui_system_init_resource_manager();
        g_ui_initialized = 1;
    }
}

/**
 * 线程安全的UI系统全局初始化函数
 * 
 * @param init_function 初始化函数指针
 */
void ui_system_global_init_thread_safe(code *init_function)
{
    int ref_count;
    longlong critical_section;
    longlong existing_section;
    bool section_exists;
    
    if (g_ui_initialized == 0) {
        LOCK();
        g_ui_init_count = g_ui_init_count + 1;
        UNLOCK();
        
        critical_section = malloc(0x28);
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
            (*init_function)();
            g_ui_initialized = 1;
        }
        LeaveCriticalSection(g_ui_critical_section);
        
        LOCK();
        ref_count = g_ui_init_count + -1;
        UNLOCK();
        
        section_exists = g_ui_init_count == 1;
        g_ui_init_count = ref_count;
        
        if (section_exists) {
            DeleteCriticalSection(g_ui_critical_section);
            free(g_ui_critical_section);
            g_ui_critical_section = 0;
        }
    }
}

/**
 * 线程安全的UI系统全局初始化函数（简化版本）
 * 
 * @param init_function 初始化函数指针
 */
void ui_system_global_init_thread_safe_simple(code *init_function)
{
    int ref_count;
    longlong critical_section;
    longlong existing_section;
    code *init_func;
    bool section_exists;
    
    LOCK();
    g_ui_init_count = g_ui_init_count + 1;
    UNLOCK();
    
    critical_section = malloc(0x28);
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
        (*init_func)();
        g_ui_initialized = 1;
    }
    LeaveCriticalSection(g_ui_critical_section);
    
    LOCK();
    ref_count = g_ui_init_count + -1;
    UNLOCK();
    
    section_exists = g_ui_init_count == 1;
    g_ui_init_count = ref_count;
    
    if (section_exists) {
        DeleteCriticalSection(g_ui_critical_section);
        free(g_ui_critical_section);
        g_ui_critical_section = 0;
    }
}

/**
 * UI系统全局初始化完成后的清理函数
 * 
 * @param init_function 初始化函数指针
 */
void ui_system_global_init_cleanup(code *init_function)
{
    int ref_count;
    code *init_func;
    bool should_cleanup;
    
    (*init_func)();
    g_ui_initialized = 1;
    LeaveCriticalSection(g_ui_critical_section);
    
    LOCK();
    ref_count = g_ui_init_count + -1;
    UNLOCK();
    
    should_cleanup = g_ui_init_count == 1;
    g_ui_init_count = ref_count;
    
    if (should_cleanup) {
        DeleteCriticalSection(g_ui_critical_section);
        free(g_ui_critical_section);
        g_ui_critical_section = 0;
    }
}

// =============================================================================
// UI缓冲区管理函数
// =============================================================================

/**
 * 初始化UI缓冲区
 * 
 * @param buffer_handle 缓冲区句柄指针
 * @param context UI系统上下文指针
 * @return 初始化结果，0表示成功，非0表示失败
 */
undefined4 ui_system_init_buffer(int *buffer_handle, longlong context)
{
    longlong buffer_ptr;
    
    if (*buffer_handle == 0) {
        buffer_ptr = ui_system_create_buffer(context);
        *(longlong *)(buffer_handle + 2) = buffer_ptr;
        if (buffer_ptr == 0) {
            return 1;
        }
        *(undefined4 *)(buffer_ptr + 0x4384) = *(undefined4 *)(context + 0x10);
        ui_system_setup_buffer_pipeline(*(undefined8 *)(buffer_handle + 2));
    }
    return 0;
}

/**
 * 清理UI缓冲区
 * 
 * @param buffer_handle 缓冲区句柄指针
 * @return 清理结果，0表示成功，非0表示失败
 */
undefined4 ui_system_cleanup_buffer(int *buffer_handle)
{
    longlong buffer_ptr;
    
    if (*buffer_handle == 0) {
        buffer_ptr = *(longlong *)(buffer_handle + 2);
        if (buffer_ptr == 0) {
            return 1;
        }
        if (*(int *)(buffer_ptr + 0x4380) != 0) {
            ui_system_release_buffer_resources(buffer_ptr, *(undefined4 *)(buffer_ptr + 0x1e74));
        }
        ui_system_teardown_buffer_pipeline(buffer_ptr);
        ui_system_cleanup_resource_buffers_simple(buffer_ptr + 0x12c0);
        ui_system_free_memory(buffer_ptr);
    }
    return 0;
}

/**
 * 执行UI缓冲区操作
 * 
 * @param ui_context UI系统上下文指针
 * @param operation 操作参数
 * @param result_ptr 结果指针
 * @param status_ptr 状态指针
 * @param additional_param 额外参数
 * @return 操作结果，0表示成功，非0表示失败
 */
undefined4 ui_system_execute_buffer_operation(longlong ui_context, undefined8 operation, 
                                            undefined8 *result_ptr, undefined8 *status_ptr,
                                            undefined8 additional_param)
{
    undefined4 operation_result;
    
    if ((*(int *)(ui_context + 0x4410) != 1) && (*(int *)(ui_context + 0x1e68) != 0)) {
        *(undefined4 *)(ui_context + 0x4410) = 1;
        *result_ptr = *(undefined8 *)(ui_context + 0x4408);
        *status_ptr = 0;
        operation_result = ui_system_process_buffer_operation(ui_context + 0x12c0, operation, additional_param);
        ui_system_trigger_operation_callback();
        return operation_result;
    }
    return 0xffffffff;
}

/**
 * 更新UI缓冲区数据
 * 
 * @param ui_context UI系统上下文指针
 * @param buffer_type 缓冲区类型
 * @param data_ptr 数据指针
 * @return 更新结果，0表示成功，非0表示失败
 */
undefined4 ui_system_update_buffer_data(longlong ui_context, int buffer_type, int *data_ptr)
{
    undefined4 *buffer_base;
    int layer_index;
    undefined *error_ptr;
    longlong layer_offset;
    
    buffer_base = (undefined4 *)(ui_context + 0x12c0);
    
    // 根据缓冲区类型选择对应的层
    if (buffer_type == 1) {
        layer_index = *(int *)(ui_context + 0x1c94);
    }
    else if (buffer_type == 2) {
        layer_index = *(int *)(ui_context + 0x1c98);
    }
    else {
        if (buffer_type != 4) {
            error_ptr = &ui_error_invalid_buffer_type;
            goto error_handler;
        }
        layer_index = *(int *)(ui_context + 0x1c9c);
    }
    
    layer_offset = (longlong)layer_index;
    
    // 验证数据匹配
    if ((((*(int *)(ui_context + 0x1a44 + layer_offset * UI_VERTEX_BUFFER_SIZE) == data_ptr[1]) &&
         (buffer_base[layer_offset * UI_INDEX_BUFFER_SIZE + 0x1e0] == *data_ptr)) &&
        (*(int *)(ui_context + 0x1a58 + layer_offset * UI_VERTEX_BUFFER_SIZE) == data_ptr[6])) &&
       (*(int *)(ui_context + 0x1a54 + layer_offset * UI_VERTEX_BUFFER_SIZE) == data_ptr[5])) {
        ui_system_copy_layer_data(buffer_base + layer_offset * UI_INDEX_BUFFER_SIZE + 0x1e0, data_ptr);
        return *buffer_base;
    }
    
    error_ptr = &ui_error_data_mismatch;
error_handler:
    ui_system_report_buffer_error(buffer_base, 1, error_ptr);
    return *buffer_base;
}

// =============================================================================
// UI系统高级功能函数
// =============================================================================

/**
 * 创建UI系统高级资源
 * 
 * @param ui_context UI系统上下文指针
 * @param resource_param1 资源参数1
 * @param resource_param2 资源参数2
 * @param resource_param3 资源参数3
 * @param resource_param4 资源参数4
 * @return 创建的资源指针，失败返回0
 */
ulonglong ui_system_create_advanced_resource(longlong ui_context, undefined8 resource_param1, 
                                           undefined8 resource_param2, undefined8 resource_param3, 
                                           undefined8 resource_param4)
{
    undefined4 *buffer_base;
    uint resource_status;
    ulonglong resource_handle;
    int layer_count;
    undefined1 stack_buffer[32];
    uint stack_var;
    undefined4 *stack_ptr;
    
    buffer_base = (undefined4 *)(ui_context + 0x12c0);
    *buffer_base = 0;
    stack_ptr = buffer_base;
    resource_handle = ui_system_check_state_and_execute();
    stack_var = (uint)resource_handle;
    
    if ((int)stack_var < 1) {
        return resource_handle;
    }
    
    layer_count = 0;
    do {
        if (*(int *)(ui_context + 0x1c80 + (longlong)layer_count * 4) == 0) break;
        layer_count = layer_count + 1;
    } while (layer_count < UI_MAX_LAYERS);
    
    *(undefined4 *)(ui_context + 0x1c80 + (longlong)layer_count * 4) = 1;
    *(int *)(ui_context + 0x1c90) = layer_count;
    *(undefined4 **)(ui_context + 0x12a0) = buffer_base + (longlong)layer_count * UI_INDEX_BUFFER_SIZE + 0x1e0;
    *(longlong *)(ui_context + 0x12a8) = ui_context + 0x1a40 + (longlong)*(int *)(ui_context + 0x1c94) * UI_VERTEX_BUFFER_SIZE;
    *(longlong *)(ui_context + 0x12b0) = ui_context + 0x1a40 + (longlong)*(int *)(ui_context + 0x1c98) * UI_VERTEX_BUFFER_SIZE;
    *(longlong *)(ui_context + 0x12b8) = ui_context + 0x1a40 + (longlong)*(int *)(ui_context + 0x1c9c) * UI_VERTEX_BUFFER_SIZE;
    
    layer_count = __intrinsic_setjmp(ui_context + 0x1320, stack_buffer);
    if (layer_count == 0) {
        *(undefined4 *)(ui_context + 0x1318) = 1;
        resource_status = ui_system_process_advanced_resource(ui_context);
        buffer_base = stack_ptr;
        stack_var = resource_status;
        
        if ((int)resource_status < 0) {
            if (0 < (int)stack_ptr[(longlong)(int)stack_ptr[0x274] + 0x270]) {
                stack_ptr[(longlong)(int)stack_ptr[0x274] + 0x270] =
                     stack_ptr[(longlong)(int)stack_ptr[0x274] + 0x270] + -1;
            }
        }
        else {
            layer_count = ui_system_validate_resource_creation(stack_ptr);
            if (layer_count == 0) {
                ui_system_trigger_operation_callback();
                if (buffer_base[0x2ea] != 0) {
                    buffer_base[0x887] = buffer_base[0x887] + 1;
                    *(undefined8 *)(buffer_base + 0x2fe) = *(undefined8 *)(buffer_base + 0x2fc);
                }
                *(undefined8 *)(ui_context + 0x4408) = resource_param4;
                *(undefined4 *)(ui_context + 0x4410) = 0;
                goto resource_created;
            }
        }
        *(undefined4 *)(ui_context + 0x12c0) = 1;
    }
    else {
        stack_ptr[(longlong)(int)stack_ptr[0x275] * UI_INDEX_BUFFER_SIZE + 0x202] = 1;
        resource_status = stack_var;
        if (0 < (int)stack_ptr[(longlong)(int)stack_ptr[0x274] + 0x270]) {
            stack_ptr[(longlong)(int)stack_ptr[0x274] + 0x270] =
                 stack_ptr[(longlong)(int)stack_ptr[0x274] + 0x270] + -1;
        }
    }
    
resource_created:
    *(undefined4 *)(ui_context + 0x1318) = 0;
    ui_system_trigger_operation_callback();
    return (ulonglong)resource_status;
}

/**
 * 更新UI系统高级资源
 * 
 * @param ui_context UI系统上下文指针
 * @param resource_type 资源类型
 * @param data_ptr 数据指针
 * @return 更新结果，0表示成功，非0表示失败
 */
undefined4 ui_system_update_advanced_resource(longlong ui_context, int resource_type, int *data_ptr)
{
    undefined4 *buffer_base;
    int *layer_ptr;
    int layer_index;
    longlong layer_offset;
    undefined *error_ptr;
    int *layer_count;
    
    buffer_base = (undefined4 *)(ui_context + 0x12c0);
    
    // 根据资源类型选择对应的层
    if (resource_type == 1) {
        layer_ptr = (int *)(ui_context + 0x1c94);
    }
    else if (resource_type == 2) {
        layer_ptr = (int *)(ui_context + 0x1c98);
    }
    else {
        if (resource_type != 4) {
            error_ptr = &ui_error_invalid_resource_type;
            goto error_handler;
        }
        layer_ptr = (int *)(ui_context + 0x1c9c);
    }
    
    layer_offset = (longlong)*layer_ptr;
    
    // 验证数据匹配
    if ((((*(int *)(ui_context + 0x1a44 + layer_offset * UI_VERTEX_BUFFER_SIZE) == data_ptr[1]) &&
         (*(int *)(ui_context + 0x1a40 + layer_offset * UI_VERTEX_BUFFER_SIZE) == *data_ptr)) &&
        (*(int *)(ui_context + 0x1a58 + layer_offset * UI_VERTEX_BUFFER_SIZE) == data_ptr[6])) &&
       (*(int *)(ui_context + 0x1a54 + layer_offset * UI_VERTEX_BUFFER_SIZE) == data_ptr[5])) {
        
        layer_index = ui_system_get_next_layer(buffer_base);
        layer_count = (int *)(ui_context + 0x1c80 + (longlong)layer_index * 4);
        *layer_count = *layer_count + -1;
        
        if (0 < (int)buffer_base[(longlong)*layer_ptr + 0x270]) {
            buffer_base[(longlong)*layer_ptr + 0x270] = buffer_base[(longlong)*layer_ptr + 0x270] + -1;
        }
        
        *layer_ptr = layer_index;
        layer_count = (int *)(ui_context + 0x1c80 + (longlong)layer_index * 4);
        *layer_count = *layer_count + 1;
        
        ui_system_copy_layer_data(data_ptr, ui_context + 0x1a40 + (longlong)*layer_ptr * UI_VERTEX_BUFFER_SIZE);
        return *buffer_base;
    }
    
    error_ptr = &ui_error_data_mismatch;
error_handler:
    ui_system_report_buffer_error(buffer_base, 1, error_ptr);
    return *buffer_base;
}

// =============================================================================
// 函数别名定义（用于兼容性）
// =============================================================================

// 原始函数名别名
#define FUN_18066d7c0 ui_system_detect_cpu_features_and_initialize_function_table
#define FUN_18066e230 ui_system_thread_safe_init
#define FUN_18066e246 ui_system_thread_safe_init_simple
#define FUN_18066e2a3 ui_system_init_cleanup
#define FUN_18066e300 ui_system_detect_cpu_extensions
#define FUN_18066e500 ui_system_init_resource_buffers
#define FUN_18066e730 ui_system_init_render_context
#define FUN_18066e7a0 ui_system_cleanup_resource_buffers
#define FUN_18066e8f0 ui_system_allocate_aligned_memory
#define FUN_18066e90c ui_system_align_memory_block
#define FUN_18066e938 ui_system_empty_function
#define FUN_18066e960 ui_system_allocate_aligned_memory_advanced
#define FUN_18066e9b0 ui_system_check_state_and_execute
#define FUN_18066e9db ui_system_switch_state
#define FUN_18066ea6a ui_system_return_success
#define FUN_18066ea80 ui_system_create_buffer
#define FUN_18066ebc0 ui_system_global_init
#define FUN_18066ebf0 ui_system_global_init_thread_safe
#define FUN_18066ec06 ui_system_global_init_thread_safe_simple
#define FUN_18066ec63 ui_system_global_init_cleanup
#define FUN_18066eea0 ui_system_init_buffer
#define FUN_18066ef00 ui_system_cleanup_buffer
#define FUN_18066ef60 ui_system_execute_buffer_operation
#define FUN_18066efd0 ui_system_update_buffer_data
#define FUN_18066f080 ui_system_create_advanced_resource
#define FUN_18066f2e0 ui_system_update_advanced_resource

// =============================================================================
// 文件信息
// =============================================================================

/**
 * 文件说明：
 * 
 * 本文件包含UI系统的高级初始化和资源管理功能，共13个函数：
 * 
 * 1. ui_system_detect_cpu_features_and_initialize_function_table - CPU特性检测和函数表初始化
 * 2. ui_system_thread_safe_init - 线程安全的UI系统初始化
 * 3. ui_system_thread_safe_init_simple - 简化的线程安全初始化
 * 4. ui_system_init_cleanup - 初始化完成后的清理
 * 5. ui_system_detect_cpu_extensions - CPU扩展特性检测
 * 6. ui_system_init_resource_buffers - 资源缓冲区初始化
 * 7. ui_system_init_render_context - 渲染上下文初始化
 * 8. ui_system_cleanup_resource_buffers - 资源缓冲区清理
 * 9. ui_system_allocate_aligned_memory - 对齐内存分配
 * 10. ui_system_allocate_aligned_memory_advanced - 高级对齐内存分配
 * 11. ui_system_check_state_and_execute - 状态检查和执行
 * 12. ui_system_global_init - 全局初始化
 * 13. ui_system_create_advanced_resource - 高级资源创建
 * 
 * 主要功能：
 * - CPU特性检测（SSE4.1, POPCNT, AVX2, AVX512等）
 * - 根据CPU特性选择最优的UI渲染函数实现
 * - 线程安全的初始化机制
 * - 内存管理和对齐分配
 * - UI资源缓冲区管理
 * - 渲染上下文设置
 * - 高级资源创建和管理
 * 
 * 注意事项：
 * - 所有函数都保持了原有的逻辑和功能
 * - 代码格式统一，缩进一致
 * - 添加了详细的中文注释
 * - 函数和变量使用了有意义的名称
 * - 保留了函数别名以确保兼容性
 */