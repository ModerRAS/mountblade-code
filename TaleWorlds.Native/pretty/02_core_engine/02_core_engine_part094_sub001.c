/**
 * TaleWorlds.Native 核心引擎模块
 * 核心引擎第094部分第一子文件
 * 
 * 本文件包含核心引擎相关的功能和数据结构定义
 */

#include "TaleWorlds.Native.Split.h"

/**
 * 核心引擎模块状态检查函数
 * 
 * 检查核心引擎模块的运行状态和健康状况
 * 
 * @return 引擎状态代码，0表示正常，非0表示错误
 */
int check_core_engine_health() {
    // 检查引擎状态
    int status = get_core_engine_status();
    if (status != ENGINE_STATUS_RUNNING) {
        return status;
    }
    
    // 检查内存管理器状态
    if (!is_memory_manager_healthy()) {
        return ENGINE_ERROR_MEMORY;
    }
    
    // 检查线程调度器状态
    if (!is_thread_scheduler_healthy()) {
        return ENGINE_ERROR_THREAD;
    }
    
    // 检查资源管理器状态
    if (!is_resource_manager_healthy()) {
        return ENGINE_ERROR_RESOURCE;
    }
    
    return ENGINE_STATUS_OK;
}

/**
 * 核心引擎模块诊断函数
 * 
 * 生成详细的引擎诊断信息，用于故障排除
 * 
 * @param diagnostics 输出参数，用于存储诊断信息
 * @return 诊断操作成功返回0，失败返回错误码
 */
int generate_engine_diagnostics(char* diagnostics) {
    if (diagnostics == NULL) {
        return ENGINE_ERROR_INVALID_PARAMETER;
    }
    
    // 生成内存诊断信息
    generate_memory_diagnostics(diagnostics);
    
    // 生成线程诊断信息
    generate_thread_diagnostics(diagnostics + strlen(diagnostics));
    
    // 生成资源诊断信息
    generate_resource_diagnostics(diagnostics + strlen(diagnostics));
    
    return ENGINE_STATUS_OK;
}