/**
 * TaleWorlds.Native 核心引擎模块
 * 核心引擎第084部分第一子文件
 * 
 * 本文件包含核心引擎相关的功能和数据结构定义
 */

#include "TaleWorlds.Native.Split.h"

/**
 * 核心引擎模块初始化函数
 * 
 * 负责初始化核心引擎的各个子系统，包括：
 * - 内存管理系统
 * - 线程调度系统
 * - 资源管理系统
 * - 日志记录系统
 * 
 * @return 初始化成功返回0，失败返回错误码
 */
int initialize_core_engine_subsystems() {
    // 初始化内存管理系统
    int memory_result = initialize_memory_manager();
    if (memory_result != 0) {
        return memory_result;
    }
    
    // 初始化线程调度系统
    int thread_result = initialize_thread_scheduler();
    if (thread_result != 0) {
        return thread_result;
    }
    
    // 初始化资源管理系统
    int resource_result = initialize_resource_manager();
    if (resource_result != 0) {
        return resource_result;
    }
    
    // 初始化日志记录系统
    int log_result = initialize_logger_system();
    if (log_result != 0) {
        return log_result;
    }
    
    return 0;
}

/**
 * 核心引擎模块清理函数
 * 
 * 负责清理核心引擎的各个子系统，释放资源
 */
void cleanup_core_engine_subsystems() {
    // 清理日志记录系统
    cleanup_logger_system();
    
    // 清理资源管理系统
    cleanup_resource_manager();
    
    // 清理线程调度系统
    cleanup_thread_scheduler();
    
    // 清理内存管理系统
    cleanup_memory_manager();
}

/**
 * 核心引擎状态查询函数
 * 
 * 查询核心引擎当前运行状态
 * 
 * @return 引擎状态代码
 */
int get_core_engine_status() {
    // 返回引擎状态
    return ENGINE_STATUS_RUNNING;
}