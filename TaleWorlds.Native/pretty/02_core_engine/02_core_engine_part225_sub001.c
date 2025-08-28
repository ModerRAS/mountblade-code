#include "TaleWorlds.Native.Split.h"

/**
 * 核心引擎模块第225部分第1子部分
 * 
 * 本文件包含核心引擎的相关功能实现
 * 
 * 文件标识: 02_core_engine_part225_sub001.c
 * 模块: 核心引擎
 * 子模块: 第225部分第1子部分
 */

// 全局常量定义
#define ENGINE_MAX_COMPONENTS 1000
#define ENGINE_DEFAULT_PRIORITY 50

/**
 * 引擎组件结构体
 * 用于管理引擎中的各种组件
 */
typedef struct {
    int component_id;             // 组件ID
    char component_name[64];      // 组件名称
    int priority;                 // 执行优先级
    void *component_data;         // 组件数据指针
    int is_active;                // 是否激活
} engine_component_t;

/**
 * 初始化引擎组件
 * 
 * @param component 组件结构体指针
 * @param component_id 组件ID
 * @param component_name 组件名称
 * @param priority 执行优先级
 * @return 初始化成功返回1，失败返回0
 */
int initialize_engine_component(engine_component_t *component, int component_id, const char *component_name, int priority)
{
    if (!component || !component_name || priority < 0 || priority > 100) {
        return 0;
    }
    
    component->component_id = component_id;
    strncpy(component->component_name, component_name, sizeof(component->component_name) - 1);
    component->component_name[sizeof(component->component_name) - 1] = '\0';
    component->priority = priority;
    component->component_data = NULL;
    component->is_active = 0;
    
    return 1;
}

/**
 * 激活引擎组件
 * 
 * @param component 组件结构体指针
 * @return 激活成功返回1，失败返回0
 */
int activate_engine_component(engine_component_t *component)
{
    if (!component) {
        return 0;
    }
    
    component->is_active = 1;
    return 1;
}

/**
 * 停用引擎组件
 * 
 * @param component 组件结构体指针
 * @return 停用成功返回1，失败返回0
 */
int deactivate_engine_component(engine_component_t *component)
{
    if (!component) {
        return 0;
    }
    
    component->is_active = 0;
    return 1;
}

/**
 * 设置组件优先级
 * 
 * @param component 组件结构体指针
 * @param priority 新的优先级
 * @return 设置成功返回1，失败返回0
 */
int set_component_priority(engine_component_t *component, int priority)
{
    if (!component || priority < 0 || priority > 100) {
        return 0;
    }
    
    component->priority = priority;
    return 1;
}

/**
 * 获取组件状态
 * 
 * @param component 组件结构体指针
 * @return 组件状态（1表示激活，0表示未激活）
 */
int get_component_status(const engine_component_t *component)
{
    if (!component) {
        return 0;
    }
    
    return component->is_active;
}

/**
 * 组件比较函数，用于排序
 * 
 * @param a 第一个组件指针
 * @param b 第二个组件指针
 * @return 比较结果
 */
int compare_components(const void *a, const void *b)
{
    const engine_component_t *comp_a = (const engine_component_t *)a;
    const engine_component_t *comp_b = (const engine_component_t *)b;
    
    return comp_b->priority - comp_a->priority;
}

/**
 * 排序组件数组
 * 
 * @param components 组件数组
 * @param count 组件数量
 * @return 排序成功返回1，失败返回0
 */
int sort_components(engine_component_t *components, int count)
{
    if (!components || count <= 0) {
        return 0;
    }
    
    qsort(components, count, sizeof(engine_component_t), compare_components);
    return 1;
}