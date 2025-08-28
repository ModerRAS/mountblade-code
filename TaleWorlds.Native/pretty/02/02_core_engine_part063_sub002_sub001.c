#include "TaleWorlds.Native.Split.h"
// 02_core_engine_part063_sub002_sub001.c - 核心引擎子模块063的第二部分第一子文件
// 本文件为模块接口定义文件，包含必要的头文件包含
/**
 * 核心引擎子模块063 - 第二部分第一子文件
 *
 * 此文件作为模块接口定义，包含：
 * - 标准头文件包含
 * - 模块依赖声明
 * - 为子模块的其他部分提供基础接口
 *
 * 注意：这是一个接口定义文件，实际的函数实现位于其他相关文件中
 */
// 模块信息
#define MODULE_VERSION "1.0"
#define MODULE_NAME "CoreEngine_Sub063_Sub002_Sub001"
#define MODULE_DESCRIPTION "Core Engine Submodule 063 Part 2 Subpart 1 Interface"
// 确保头文件只包含一次
#ifndef TALEWORLDS_NATIVE_CORE_ENGINE_PART063_SUB002_SUB001_H
#define TALEWORLDS_NATIVE_CORE_ENGINE_PART063_SUB002_SUB001_H
/**
 * 模块初始化函数声明
 * 用于子模块的初始化和资源分配
 */
extern void initialize_submodule_063_sub002_sub001(void);
/**
 * 模块清理函数声明
 * 用于子模块的资源释放和清理
 */
extern void cleanup_submodule_063_sub002_sub001(void);
/**
 * 模块状态查询函数声明
 * 返回子模块的当前状态
 */
extern int get_submodule_063_sub002_sub001_status(void);
/**
 * 模块配置函数声明
 * 用于配置子模块的运行参数
 */
extern void configure_submodule_063_sub002_sub001(const void* config_data);
#endif // TALEWORLDS_NATIVE_CORE_ENGINE_PART063_SUB002_SUB001_H