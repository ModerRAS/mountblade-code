/**
 * @file performance_optimization_tools.c
 * @brief 性能优化工具集
 * 
 * 本文件提供了一系列性能优化工具，包括：
 * - 内存使用分析
 * - 函数执行时间测量
 * - 系统资源监控
 * - 性能瓶颈检测
 * - 优化建议生成
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */

#include "TaleWorlds.Native.Split.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ===========================================
// 性能监控常量定义
// ===========================================

#define MAX_PERFORMANCE_COUNTERS    1024        // 最大性能计数器数量
#define MAX_MEMORY_ALLOCATIONS     10000       // 最大内存分配跟踪数量
#define PERFORMANCE_SAMPLE_RATE    100         // 性能采样率 (ms)
#define WARNING_THRESHOLD          1000        // 警告阈值 (ms)
#define CRITICAL_THRESHOLD         5000        // 临界阈值 (ms)

// ===========================================
// 性能数据结构定义
// ===========================================

/**
 * @brief 性能计数器结构
 */
typedef struct {
    char name[64];                 // 计数器名称
    uint64_t start_time;          // 开始时间
    uint64_t end_time;            // 结束时间
    uint64_t total_time;          // 总执行时间
    uint64_t call_count;           // 调用次数
    uint64_t min_time;             // 最小执行时间
    uint64_t max_time;             // 最大执行时间
    double avg_time;               // 平均执行时间
    int is_active;                 // 是否激活
} PerformanceCounter;

/**
 * @brief 内存分配跟踪结构
 */
typedef struct {
    void* ptr;                     // 内存指针
    size_t size;                   // 分配大小
    const char* file;              // 文件名
    int line;                      // 行号
    uint64_t timestamp;           // 时间戳
    int is_freed;                  // 是否已释放
} MemoryAllocation;

/**
 * @brief 系统资源统计结构
 */
typedef struct {
    uint64_t total_memory;         // 总内存使用量
    uint64_t peak_memory;          // 峰值内存使用量
    uint32_t active_allocations;   // 活跃分配数量
    uint32_t total_allocations;    // 总分配数量
    uint32_t failed_allocations;   // 失败分配数量
    uint32_t memory_leaks;         // 内存泄漏数量
    double cpu_usage;              // CPU使用率
    double memory_usage;           // 内存使用率
    uint32_t thread_count;         // 线程数量
} SystemResourceStats;

/**
 * @brief 性能瓶颈分析结构
 */
typedef struct {
    char function_name[64];        // 函数名称
    uint64_t execution_time;       // 执行时间
    uint64_t call_count;           // 调用次数
    double time_percentage;         // 时间百分比
    int is_bottleneck;             // 是否是瓶颈
    char recommendation[256];      // 优化建议
} PerformanceBottleneck;

// ===========================================
// 全局变量
// ===========================================

static PerformanceCounter g_performance_counters[MAX_PERFORMANCE_COUNTERS];
static MemoryAllocation g_memory_allocations[MAX_MEMORY_ALLOCATIONS];
static SystemResourceStats g_resource_stats;
static uint32_t g_counter_count = 0;
static uint32_t g_allocation_count = 0;
static uint64_t g_program_start_time = 0;

// ===========================================
// 性能计数器管理函数
// ===========================================

/**
 * @brief 初始化性能监控系统
 */
void performance_init(void) {
    memset(g_performance_counters, 0, sizeof(g_performance_counters));
    memset(g_memory_allocations, 0, sizeof(g_memory_allocations));
    memset(&g_resource_stats, 0, sizeof(g_resource_stats));
    
    g_counter_count = 0;
    g_allocation_count = 0;
    g_program_start_time = get_current_time();
}

/**
 * @brief 创建性能计数器
 * @param name 计数器名称
 * @return 计数器索引，-1表示失败
 */
int performance_counter_create(const char* name) {
    if (g_counter_count >= MAX_PERFORMANCE_COUNTERS) {
        return -1;
    }
    
    PerformanceCounter* counter = &g_performance_counters[g_counter_count];
    strncpy(counter->name, name, sizeof(counter->name) - 1);
    counter->name[sizeof(counter->name) - 1] = '\0';
    counter->start_time = 0;
    counter->end_time = 0;
    counter->total_time = 0;
    counter->call_count = 0;
    counter->min_time = UINT64_MAX;
    counter->max_time = 0;
    counter->avg_time = 0.0;
    counter->is_active = 0;
    
    return g_counter_count++;
}

/**
 * @brief 开始性能计数
 * @param counter_id 计数器ID
 */
void performance_counter_start(int counter_id) {
    if (counter_id < 0 || counter_id >= g_counter_count) {
        return;
    }
    
    PerformanceCounter* counter = &g_performance_counters[counter_id];
    counter->start_time = get_current_time();
    counter->is_active = 1;
}

/**
 * @brief 停止性能计数
 * @param counter_id 计数器ID
 */
void performance_counter_stop(int counter_id) {
    if (counter_id < 0 || counter_id >= g_counter_count) {
        return;
    }
    
    PerformanceCounter* counter = &g_performance_counters[counter_id];
    if (!counter->is_active) {
        return;
    }
    
    counter->end_time = get_current_time();
    uint64_t execution_time = counter->end_time - counter->start_time;
    
    counter->total_time += execution_time;
    counter->call_count++;
    
    if (execution_time < counter->min_time) {
        counter->min_time = execution_time;
    }
    if (execution_time > counter->max_time) {
        counter->max_time = execution_time;
    }
    
    counter->avg_time = (double)counter->total_time / counter->call_count;
    counter->is_active = 0;
}

/**
 * @brief 获取性能计数器统计信息
 * @param counter_id 计数器ID
 * @param stats 统计信息输出缓冲区
 */
void performance_counter_get_stats(int counter_id, PerformanceCounter* stats) {
    if (counter_id < 0 || counter_id >= g_counter_count || !stats) {
        return;
    }
    
    memcpy(stats, &g_performance_counters[counter_id], sizeof(PerformanceCounter));
}

// ===========================================
// 内存分配跟踪函数
// ===========================================

/**
 * @brief 跟踪内存分配
 * @param ptr 内存指针
 * @param size 分配大小
 * @param file 文件名
 * @param line 行号
 */
void memory_allocation_track(void* ptr, size_t size, const char* file, int line) {
    if (!ptr || g_allocation_count >= MAX_MEMORY_ALLOCATIONS) {
        return;
    }
    
    MemoryAllocation* alloc = &g_memory_allocations[g_allocation_count];
    alloc->ptr = ptr;
    alloc->size = size;
    alloc->file = file;
    alloc->line = line;
    alloc->timestamp = get_current_time();
    alloc->is_freed = 0;
    
    g_allocation_count++;
    
    // 更新资源统计
    g_resource_stats.total_memory += size;
    g_resource_stats.active_allocations++;
    g_resource_stats.total_allocations++;
    
    if (g_resource_stats.total_memory > g_resource_stats.peak_memory) {
        g_resource_stats.peak_memory = g_resource_stats.total_memory;
    }
}

/**
 * @brief 跟踪内存释放
 * @param ptr 内存指针
 */
void memory_allocation_free(void* ptr) {
    if (!ptr) {
        return;
    }
    
    for (uint32_t i = 0; i < g_allocation_count; i++) {
        MemoryAllocation* alloc = &g_memory_allocations[i];
        if (alloc->ptr == ptr && !alloc->is_freed) {
            alloc->is_freed = 1;
            g_resource_stats.total_memory -= alloc->size;
            g_resource_stats.active_allocations--;
            break;
        }
    }
}

/**
 * @brief 检测内存泄漏
 * @return 内存泄漏数量
 */
uint32_t memory_leak_detection(void) {
    uint32_t leak_count = 0;
    
    for (uint32_t i = 0; i < g_allocation_count; i++) {
        MemoryAllocation* alloc = &g_memory_allocations[i];
        if (!alloc->is_freed) {
            leak_count++;
            // 这里可以添加泄漏报告逻辑
        }
    }
    
    g_resource_stats.memory_leaks = leak_count;
    return leak_count;
}

// ===========================================
// 系统资源监控函数
// ===========================================

/**
 * @brief 更新系统资源统计
 */
void system_resource_stats_update(void) {
    // 更新CPU使用率
    g_resource_stats.cpu_usage = calculate_cpu_usage();
    
    // 更新内存使用率
    g_resource_stats.memory_usage = (double)g_resource_stats.total_memory / get_total_system_memory();
    
    // 更新线程数量
    g_resource_stats.thread_count = get_active_thread_count();
}

/**
 * @brief 获取系统资源统计
 * @return 资源统计指针
 */
SystemResourceStats* system_resource_stats_get(void) {
    return &g_resource_stats;
}

/**
 * @brief 生成资源使用报告
 * @param report 报告缓冲区
 * @param buffer_size 缓冲区大小
 */
void generate_resource_report(char* report, size_t buffer_size) {
    if (!report || buffer_size == 0) {
        return;
    }
    
    SystemResourceStats* stats = &g_resource_stats;
    
    snprintf(report, buffer_size,
             "系统资源使用报告:\n"
             "----------------------------------------\n"
             "总内存使用: %llu bytes\n"
             "峰值内存使用: %llu bytes\n"
             "活跃分配数: %u\n"
             "总分配数: %u\n"
             "内存泄漏数: %u\n"
             "CPU使用率: %.2f%%\n"
             "内存使用率: %.2f%%\n"
             "线程数: %u\n"
             "----------------------------------------\n",
             stats->total_memory,
             stats->peak_memory,
             stats->active_allocations,
             stats->total_allocations,
             stats->memory_leaks,
             stats->cpu_usage,
             stats->memory_usage,
             stats->thread_count);
}

// ===========================================
// 性能瓶颈分析函数
// ===========================================

/**
 * @brief 分析性能瓶颈
 * @param bottlenecks 瓶颈数组
 * @param max_count 最大瓶颈数量
 * @return 发现的瓶颈数量
 */
int analyze_performance_bottlenecks(PerformanceBottleneck* bottlenecks, int max_count) {
    if (!bottlenecks || max_count <= 0) {
        return 0;
    }
    
    uint64_t total_execution_time = 0;
    int bottleneck_count = 0;
    
    // 计算总执行时间
    for (uint32_t i = 0; i < g_counter_count; i++) {
        PerformanceCounter* counter = &g_performance_counters[i];
        total_execution_time += counter->total_time;
    }
    
    // 分析每个计数器
    for (uint32_t i = 0; i < g_counter_count && bottleneck_count < max_count; i++) {
        PerformanceCounter* counter = &g_performance_counters[i];
        
        if (counter->call_count == 0) {
            continue;
        }
        
        PerformanceBottleneck* bottleneck = &bottlenecks[bottleneck_count];
        strncpy(bottleneck->function_name, counter->name, sizeof(bottleneck->function_name) - 1);
        bottleneck->function_name[sizeof(bottleneck->function_name) - 1] = '\0';
        
        bottleneck->execution_time = counter->total_time;
        bottleneck->call_count = counter->call_count;
        bottleneck->time_percentage = (double)counter->total_time / total_execution_time * 100.0;
        
        // 判断是否为瓶颈
        bottleneck->is_bottleneck = 0;
        if (bottleneck->time_percentage > 10.0 || counter->avg_time > WARNING_THRESHOLD) {
            bottleneck->is_bottleneck = 1;
            
            // 生成优化建议
            if (counter->avg_time > CRITICAL_THRESHOLD) {
                snprintf(bottleneck->recommendation, sizeof(bottleneck->recommendation),
                         "严重性能问题: 平均执行时间 %.2f ms，建议立即优化算法或数据结构",
                         counter->avg_time);
            } else if (counter->avg_time > WARNING_THRESHOLD) {
                snprintf(bottleneck->recommendation, sizeof(bottleneck->recommendation),
                         "性能警告: 平均执行时间 %.2f ms，建议优化算法或减少调用频率",
                         counter->avg_time);
            } else if (bottleneck->time_percentage > 20.0) {
                snprintf(bottleneck->recommendation, sizeof(bottleneck->recommendation),
                         "热点函数: 占用 %.2f%% 的执行时间，建议进行代码重构或并行化",
                         bottleneck->time_percentage);
            } else {
                snprintf(bottleneck->recommendation, sizeof(bottleneck->recommendation),
                         "轻度性能问题: 占用 %.2f%% 的执行时间，可考虑优化",
                         bottleneck->time_percentage);
            }
            
            bottleneck_count++;
        }
    }
    
    return bottleneck_count;
}

// ===========================================
// 性能优化建议生成函数
// ===========================================

/**
 * @brief 生成性能优化建议
 * @param suggestions 建议数组
 * @param max_count 最大建议数量
 * @return 建议数量
 */
int generate_optimization_suggestions(char* suggestions, int max_count, size_t suggestion_size) {
    if (!suggestions || max_count <= 0 || suggestion_size == 0) {
        return 0;
    }
    
    int suggestion_count = 0;
    
    // 内存使用建议
    if (g_resource_stats.memory_usage > 80.0) {
        snprintf(suggestions + suggestion_count * suggestion_size, suggestion_size,
                 "内存使用率过高 (%.2f%%)，建议:\n"
                 "1. 检查内存泄漏\n"
                 "2. 优化数据结构\n"
                 "3. 实现内存池\n"
                 "4. 减少内存分配频率\n",
                 g_resource_stats.memory_usage);
        suggestion_count++;
    }
    
    // CPU使用率建议
    if (g_resource_stats.cpu_usage > 80.0) {
        snprintf(suggestions + suggestion_count * suggestion_size, suggestion_size,
                 "CPU使用率过高 (%.2f%%)，建议:\n"
                 "1. 优化算法复杂度\n"
                 "2. 实现并行处理\n"
                 "3. 使用缓存机制\n"
                 "4. 减少不必要的计算\n",
                 g_resource_stats.cpu_usage);
        suggestion_count++;
    }
    
    // 内存泄漏建议
    if (g_resource_stats.memory_leaks > 0) {
        snprintf(suggestions + suggestion_count * suggestion_size, suggestion_size,
                 "发现 %u 个内存泄漏，建议:\n"
                 "1. 检查所有内存分配\n"
                 "2. 确保配对的内存释放\n"
                 "3. 使用智能指针\n"
                 "4. 实现资源管理器\n",
                 g_resource_stats.memory_leaks);
        suggestion_count++;
    }
    
    // 线程数量建议
    if (g_resource_stats.thread_count > 32) {
        snprintf(suggestions + suggestion_count * suggestion_size, suggestion_size,
                 "线程数量过多 (%u)，建议:\n"
                 "1. 使用线程池\n"
                 "2. 减少线程创建/销毁\n"
                 "3. 优化线程同步\n"
                 "4. 考虑协程替代\n",
                 g_resource_stats.thread_count);
        suggestion_count++;
    }
    
    return suggestion_count;
}

// ===========================================
// 辅助函数
// ===========================================

/**
 * @brief 获取当前时间戳
 * @return 当前时间戳 (毫秒)
 */
uint64_t get_current_time(void) {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint64_t)ts.tv_sec * 1000 + (uint64_t)ts.tv_nsec / 1000000;
}

/**
 * @brief 计算CPU使用率
 * @return CPU使用率 (0-100)
 */
double calculate_cpu_usage(void) {
    // 简化的CPU使用率计算
    // 实际实现应该使用系统API获取准确的CPU使用率
    return 0.0;
}

/**
 * @brief 获取总系统内存
 * @return 总内存大小 (bytes)
 */
uint64_t get_total_system_memory(void) {
    // 简化的系统内存获取
    // 实际实现应该使用系统API获取准确的内存大小
    return 8ULL * 1024 * 1024 * 1024; // 8GB
}

/**
 * @brief 获取活跃线程数
 * @return 活跃线程数
 */
uint32_t get_active_thread_count(void) {
    // 简化的线程数获取
    // 实际实现应该使用系统API获取准确的线程数
    return 4;
}

// ===========================================
// 性能报告生成函数
// ===========================================

/**
 * @brief 生成完整的性能报告
 * @param report 报告缓冲区
 * @param buffer_size 缓冲区大小
 */
void generate_performance_report(char* report, size_t buffer_size) {
    if (!report || buffer_size == 0) {
        return;
    }
    
    char resource_report[1024];
    generate_resource_report(resource_report, sizeof(resource_report));
    
    char suggestions[4][512];
    int suggestion_count = generate_optimization_suggestions((char*)suggestions, 4, 512);
    
    PerformanceBottleneck bottlenecks[10];
    int bottleneck_count = analyze_performance_bottlenecks(bottlenecks, 10);
    
    snprintf(report, buffer_size,
             "TaleWorlds.Native 性能分析报告\n"
             "========================================\n"
             "生成时间: %llu ms\n"
             "运行时间: %llu ms\n"
             "\n"
             "%s\n"
             "\n"
             "性能瓶颈分析:\n"
             "----------------------------------------\n",
             get_current_time(),
             get_current_time() - g_program_start_time,
             resource_report);
    
    for (int i = 0; i < bottleneck_count; i++) {
        PerformanceBottleneck* bottleneck = &bottlenecks[i];
        char* buffer_ptr = report + strlen(report);
        size_t remaining_size = buffer_size - strlen(report);
        
        snprintf(buffer_ptr, remaining_size,
                 "%s (调用次数: %llu, 执行时间: %.2f ms, 占比: %.2f%%)\n"
                 "建议: %s\n\n",
                 bottleneck->function_name,
                 bottleneck->call_count,
                 bottleneck->execution_time / 1000.0,
                 bottleneck->time_percentage,
                 bottleneck->recommendation);
    }
    
    if (suggestion_count > 0) {
        char* buffer_ptr = report + strlen(report);
        size_t remaining_size = buffer_size - strlen(report);
        
        snprintf(buffer_ptr, remaining_size,
                 "优化建议:\n"
                 "----------------------------------------\n");
        
        for (int i = 0; i < suggestion_count; i++) {
            char* buffer_ptr = report + strlen(report);
            size_t remaining_size = buffer_size - strlen(report);
            
            snprintf(buffer_ptr, remaining_size, "%s\n", suggestions[i]);
        }
    }
    
    snprintf(report + strlen(report), buffer_size - strlen(report),
             "========================================\n"
             "报告结束\n");
}

// ===========================================
// 性能监控宏定义
// ===========================================

#define PERFORMANCE_COUNTER_START(name) \
    static int perf_counter_##name = -1; \
    if (perf_counter_##name == -1) { \
        perf_counter_##name = performance_counter_create(#name); \
    } \
    performance_counter_start(perf_counter_##name)

#define PERFORMANCE_COUNTER_STOP(name) \
    performance_counter_stop(perf_counter_##name)

#define MEMORY_TRACK(ptr, size) \
    memory_allocation_track(ptr, size, __FILE__, __LINE__)

#define MEMORY_UNTRACK(ptr) \
    memory_allocation_free(ptr)

// ===========================================
// 文件结束
// ===========================================

/**
 * @file performance_optimization_tools.c
 * @brief 性能优化工具集
 * 
 * 本文件提供了完整的性能监控和分析工具，包括：
 * - 性能计数器管理
 * - 内存分配跟踪
 * - 系统资源监控
 * - 性能瓶颈分析
 * - 优化建议生成
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */