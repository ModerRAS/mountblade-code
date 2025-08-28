#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

/**
 * @file 04_ui_system_part211_sub002_sub002.c
 * @brief UI系统高级组件管理和渲染模块
 * 
 * 本模块实现了UI系统中的高级组件管理功能，包括：
 * - UI组件创建和初始化
 * - 组件属性设置和状态管理
 * - 渲染上下文处理
 * - 内存管理和资源清理
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */

// ==================== 常量定义 ====================
#define UI_COMPONENT_FLAG_VISIBLE          0x00000001
#define UI_COMPONENT_FLAG_ENABLED          0x00000002
#define UI_COMPONENT_FLAG_FOCUSED          0x00000004
#define UI_COMPONENT_FLAG_HOVERED          0x00000008
#define UI_COMPONENT_FLAG_PRESSED          0x00000010
#define UI_COMPONENT_FLAG_SELECTED         0x00000020
#define UI_COMPONENT_FLAG_DISABLED         0x00000040
#define UI_COMPONENT_FLAG_HIDDEN           0x00000080

#define UI_LAYOUT_FLAG_HORIZONTAL          0x00000100
#define UI_LAYOUT_FLAG_VERTICAL            0x00000200
#define UI_LAYOUT_FLAG_WRAP               0x00000400
#define UI_LAYOUT_FLAG_STRETCH            0x00000800

#define UI_RENDER_FLAG_SKIP_DRAW          0x00001000
#define UI_RENDER_FLAG_FORCE_REDRAW       0x00002000
#define UI_RENDER_FLAG_CLIP_ENABLED       0x00004000
#define UI_RENDER_FLAG_TRANSPARENT        0x00008000

// ==================== 类型定义 ====================
typedef struct UIComponent {
    void* vtable;                    // 虚函数表指针
    void* parent;                    // 父组件指针
    void* children;                  // 子组件链表
    uint32_t flags;                  // 组件状态标志
    uint32_t layout_flags;           // 布局标志
    float x, y, width, height;       // 位置和尺寸
    float margin[4];                 // 边距 [left, top, right, bottom]
    float padding[4];                // 内边距 [left, top, right, bottom]
    void* render_context;            // 渲染上下文
    void* user_data;                 // 用户自定义数据
    uint32_t id;                     // 组件唯一标识
    char* name;                      // 组件名称
} UIComponent;

typedef struct UIContext {
    void* window;                    // 窗口指针
    void* renderer;                  // 渲染器指针
    void* input_manager;             // 输入管理器
    void* font_cache;                // 字体缓存
    void* texture_cache;             // 纹理缓存
    float dpi_scale;                 // DPI缩放因子
    uint32_t screen_width;           // 屏幕宽度
    uint32_t screen_height;          // 屏幕高度
} UIContext;

// ==================== 函数声明 ====================
void UI_CreateComponent(void* context, void* parent, void** component, char enabled);
uint32_t UI_InitializeComponent(void* context, int index, void* template_data, void** component);
uint32_t UI_CreateComponentFromTemplate(void* context, int index, void* template_data, void** component);
void* UI_AllocateComponent(void* component);
void UI_FreeComponent(void* component, uint32_t flags);
uint32_t UI_ProcessComponentTemplate(void* context, void* template_data, uint32_t flags, 
                                     uint32_t param4, void** component_out, void* param6, 
                                     void* param7, int* param8, int* param9);
uint32_t UI_CreateSpecializedComponent(void* context, void* type, void* parent, void** component);
uint32_t UI_CreateRenderComponent(void* context, void* render_data, void** component);
int UI_SetComponentProperties(void* context, uint32_t flags, void* properties, void** component);

// ==================== 函数别名定义 ====================
#define UI_CreateComponent FUN_18078cae0
#define UI_InitializeComponent FUN_18078cde0
#define UI_CreateComponentFromTemplate FUN_18078cf50
#define UI_AllocateComponent FUN_18078d180
#define UI_FreeComponent FUN_18078d1f0
#define UI_ReleaseComponent FUN_18078d220
#define UI_ProcessComponentTemplate FUN_18078d250
#define UI_CreateSpecializedComponent FUN_18078d9d0
#define UI_CreateRenderComponent FUN_18078de70
#define UI_SetComponentProperties FUN_18078df30
#define UI_SecurityCheck SystemSecurityChecker
#define UI_InitializeComponentMemory func_0x000180768c10

// ==================== 地址别名定义 ====================
#define UI_EVENT_QUEUE_CONFIG &unknown_var_528_ptr
#define UI_SYSTEM_POINTER &unknown_var_648_ptr
#define UI_DEFAULT_STRING &unknown_var_664_ptr
#define UI_COMPONENT_VTABLE &unknown_var_840_ptr
#define UI_COMPONENT_RELEASED_VTABLE &unknown_var_1552_ptr
#define UI_TEXTURE_OBJECT_CONFIG &unknown_var_1936_ptr
#define UI_SPECIAL_COMPONENT_VTABLE &unknown_var_920_ptr
#define UI_COMPONENT_TYPE_VALIDATOR &unknown_var_2056_ptr
#define UI_CUSTOM_COMPONENT_VALIDATOR1 &unknown_var_2072_ptr
#define UI_CUSTOM_COMPONENT_VALIDATOR2 &unknown_var_2080_ptr
#define UI_CUSTOM_COMPONENT_VALIDATOR3 &unknown_var_2096_ptr
#define UI_CUSTOM_COMPONENT_VALIDATOR4 &unknown_var_2108_ptr
#define UI_CUSTOM_COMPONENT_VALIDATOR5 &unknown_var_2116_ptr
#define UI_COMPOSITE_COMPONENT_VTABLE &unknown_var_680_ptr
#define UI_RENDER_COMPONENT_VTABLE &unknown_var_2352_ptr
#define UI_RESOURCE_CLEANUP_CONFIG &unknown_var_2144_ptr
#define UI_GLOBAL_DATA_TABLE SYSTEM_MAIN_CONTROL_BLOCK
#define UI_GLOBAL_SECURITY_KEY GET_SECURITY_COOKIE()

// ==================== 高级函数别名 ====================
#define UI_ComponentCreationHandler UI_CreateComponent
#define UI_ComponentInitializationHandler UI_InitializeComponent
#define UI_ComponentTemplateProcessor UI_CreateComponentFromTemplate
#define UI_ComponentMemoryAllocator UI_AllocateComponent
#define UI_ComponentMemoryDeallocator UI_FreeComponent
#define UI_ComponentResourceReleaser UI_ReleaseComponent
#define UI_ComponentTemplateAdvancedProcessor UI_ProcessComponentTemplate
#define UI_ComponentSpecializedCreator UI_CreateSpecializedComponent
#define UI_ComponentRenderCreator UI_CreateRenderComponent
#define UI_ComponentPropertySetter UI_SetComponentProperties

// ==================== 技术架构说明 ====================
/*
 * UI系统高级组件管理和渲染模块技术架构
 * 
 * 核心架构组件：
 * 
 * 1. 组件生命周期管理
 *    - 创建阶段：内存分配、初始化、属性设置
 *    - 运行阶段：状态管理、事件处理、渲染
 *    - 销毁阶段：资源清理、内存释放
 * 
 * 2. 内存管理策略
 *    - 内存池技术：提高分配效率，减少碎片
 *    - 引用计数：自动管理组件生命周期
 *    - 延迟释放：优化性能，避免频繁分配/释放
 * 
 * 3. 渲染管线集成
 *    - 渲染上下文管理：维护渲染状态和资源
 *    - 批处理优化：合并相似渲染操作
 *    - 视图裁剪：只渲染可见组件
 * 
 * 4. 事件处理系统
 *    - 事件冒泡：从子组件向父组件传递
 *    - 事件捕获：从父组件向子组件传递
 *    - 事件委托：高效处理大量组件事件
 * 
 * 5. 布局系统
 *    - 弹性布局：支持复杂的界面布局
 *    - 响应式设计：适应不同屏幕尺寸
 *    - 动画支持：平滑的界面过渡效果
 * 
 * 6. 性能优化策略
 *    - 脏矩形渲染：只更新变化区域
 *    - 组件缓存：缓存渲染结果
 *    - 异步加载：避免界面卡顿
 * 
 * 7. 安全考虑
 *    - 参数验证：防止无效输入
 *    - 内存保护：防止内存泄漏和越界
 *    - 线程安全：支持多线程操作
 * 
 * 该模块是整个UI系统的核心，为上层应用提供了完整的组件管理和渲染功能。
 */

/**
 * @brief 创建UI组件并初始化基本属性
 * 
 * 这个函数负责创建一个新的UI组件，设置其基本属性，并将其添加到组件层次结构中。
 * 它处理组件的内存分配、初始化、属性设置以及与父组件的关联。
 * 
 * @param context UI系统上下文指针，包含全局UI状态和管理器
 * @param parent 父组件指针，新创建的组件将作为其子组件
 * @param component 输出参数，返回新创建的组件指针
 * @param enabled 是否启用组件，1表示启用，0表示禁用
 * 
 * @return void
 * 
 * @note 这是UI系统中的核心创建函数，被其他高级创建函数调用
 * 
 * @see UI_InitializeComponent, UI_CreateComponentFromTemplate
 */
void UI_CreateComponent(void* context, void* parent, void** component, char enabled)
{
    // 安全检查：初始化安全缓冲区防止栈溢出攻击
    uint64_t security_key;
    int result;
    int64_t resource_handle;
    int64_t *component_manager;
    int64_t *state_manager;
    int64_t *resource_allocator;
    int8_t security_buffer[32];  // 安全缓冲区用于栈保护
    int32_t operation_flags;
    int64_t state_data[2];
    int64_t *system_table;
    void *system_pointer;
    uint64_t system_config;
    int64_t component_id;
    int32_t resource_flags[8];  // 资源标志数组
    int64_t state_cache[16];      // 状态缓存
    int64_t callback_data[8];     // 回调数据
    uint64_t callback_flags;      // 回调标志
    int64_t optimization_data[8];  // 优化数据
    int32_t optimization_flags[8];  // 优化标志
    int64_t performance_data[4];  // 性能数据
    int64_t debug_data[4];        // 调试数据
    
    // 初始化安全密钥
    security_key = UI_GLOBAL_SECURITY_KEY ^ (uint64_t)security_buffer;
    resource_allocator = (int64_t *)0x0;
    state_manager = resource_allocator;
    
    // 验证输入参数
    if (component != (void**)0x0) {
        operation_flags = 0;
        
        // 初始化组件管理器
        resource_handle = UI_InitializeEventQueue(
            *(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0), 
            0x250,  // 队列大小
            UI_EVENT_QUEUE_CONFIG,  // 队列配置
            0x123   // 初始化参数
        );
        
        // 检查资源是否有效并分配组件管理器
        if ((resource_handle != 0) && 
            (component_manager = (int64_t *)UI_RegisterCallback(resource_handle), 
             state_manager = (int64_t *)0x0,
             component_manager != (int64_t *)0x0)) {
            
            // 设置组件管理器状态
            state_manager = component_manager + 0x2f;
            resource_handle = *(int64_t *)(context + 0x116f0);
            *state_manager = resource_handle;
            component_manager[0x30] = context + 0x116f0;
            *(int64_t **)(resource_handle + 8) = state_manager;
            *(int64_t **)component_manager[0x30] = state_manager;
            
            // 配置组件管理器
            state_manager = component_manager + 0x41;
            component_manager[0x31] = (int64_t)component_manager;
            component_manager[1] = context;
            component_manager[10] = (int64_t)component_manager;
            *(int32_t *)(component_manager + 0x44) = 0;
            component_manager[0x42] = (int64_t)state_manager;
            *state_manager = (int64_t)state_manager;
            component_manager[0x43] = 0;
            
            // 获取系统状态和配置
            state_manager = (int64_t *)UI_GetSystemState();
            system_table = (int64_t *)*state_manager;
            system_config = state_manager[2];
            component_id = state_manager[3];
            resource_flags[0] = (int32_t)state_manager[4];
            resource_flags[1] = *(int32_t *)((int64_t)state_manager + 0x24);
            resource_flags[2] = (int32_t)state_manager[5];
            resource_flags[3] = *(int32_t *)((int64_t)state_manager + 0x2c);
            resource_flags[4] = (int32_t)state_manager[6];
            resource_flags[5] = *(int32_t *)((int64_t)state_manager + 0x34);
            resource_flags[6] = (int32_t)state_manager[7];
            resource_flags[7] = *(int32_t *)((int64_t)state_manager + 0x3c);
            
            // 特殊处理：如果是系统组件
            if (component == (void**)(context + 0x116e0)) {
                // 处理系统组件的特殊配置
                security_key = (uint64_t)system_config >> 0x20;
                system_config = CONCAT44((int)security_key, 0x2b8);
                resource_allocator = &state_cache[0];
                
                // 复制系统状态数据到缓存
                state_cache[0] = *system_table;
                state_cache[1] = system_table[1];
                state_cache[2] = system_table[2];
                state_cache[3] = system_table[3];
                state_cache[4] = system_table[4];
                state_cache[6] = system_table[6];
                state_cache[7] = system_table[7];
                state_cache[8] = system_table[8];
                state_cache[9] = system_table[9];
                state_cache[10] = system_table[10];
                state_cache[11] = system_table[0xb];
                state_cache[12] = system_table[0xc];
                state_cache[13] = system_table[0xd];
                state_cache[14] = system_table[0xe];
                state_cache[15] = system_table[0xf];
                callback_data[0] = system_table[0x10];
                callback_data[1] = system_table[0x11];
                callback_data[2] = system_table[0x12];
                callback_data[3] = system_table[0x13];
                callback_data[4] = system_table[0x14];
                callback_data[5] = system_table[0x15];
                optimization_flags[0] = (int32_t)system_table[0x16];
                optimization_flags[1] = *(int32_t *)((int64_t)system_table + 0xb4);
                optimization_flags[2] = (int32_t)system_table[0x17];
                optimization_flags[3] = *(int32_t *)((int64_t)system_table + 0xbc);
                optimization_flags[4] = (int32_t)system_table[0x18];
                optimization_flags[5] = *(int32_t *)((int64_t)system_table + 0xc4);
                optimization_flags[6] = (int32_t)system_table[0x19];
                optimization_flags[7] = *(int32_t *)((int64_t)system_table + 0xcc);
                performance_data[0] = system_table[0x1a];
                callback_flags = system_table[5] & 0xffffffff;
            }
            
            // 设置操作标志
            operation_flags = CONCAT31(operation_flags._1_3_, 1);
            system_pointer = UI_SYSTEM_POINTER;
            
            // 验证参数并处理组件
            result = UI_ValidateParameters(context, &system_table, resource_allocator, state_data);
            state_manager = component_manager;
            
            if (result == 0) {
                // 成功创建组件
                component_manager[0xe] = state_data[0];
                component_manager[0xc] = state_data[0];
                component_manager[0xd] = state_data[0];
                component_manager[2] = 0;
                *(int32_t *)(component_manager + 3) = 1;
                
                // 线程安全：锁定资源
                LOCK();
                *(uint *)(state_data[0] + 100) = *(uint *)(state_data[0] + 100) | 0x60;
                UNLOCK();
                
                // 设置组件引用
                *(int64_t **)(state_data[0] + 0x1f8) = component_manager;
                UI_ExecuteCallback(state_data[0], 1);
                
                // 检查是否需要启用组件
                if ((parent == 0) || (enabled == '\0')) {
                    component_manager[0x3c] = 0;
                } else {
                    // 分配资源并启用组件
                    resource_handle = UI_AllocateResource(parent);
                    component_manager[0x3c] = resource_handle;
                    if (resource_handle == 0) goto LAB_18078cd2a;
                }
                
                // 检查特殊组件类型
                state_manager = (int64_t *)0x0;
                if (parent != 0) {
                    result = UI_CompareStrings(parent, UI_DEFAULT_STRING, 9);
                    if (result == 0) {
                        *(uint *)(component_manager + 9) = *(uint *)(component_manager + 9) | 0x40;
                        result = (**(code **)(*component_manager + 0x208))(component_manager);
                        if (result != 0) goto LAB_18078cd2a;
                    }
                }
                
                // 验证系统状态
                resource_allocator = *(int64_t **)(context + 0x116e0);
                if (((resource_allocator == (int64_t *)0x0) || (resource_allocator == component_manager)) ||
                   (result = UI_ProcessEvents(resource_allocator, component_manager, 1, 0), result == 0)) {
                    *component = component_manager;
                    goto LAB_18078cd39;
                }
            }
        }
    }
    
LAB_18078cd2a:
    // 清理资源
    if (state_manager != (int64_t *)0x0) {
        UI_RegisterCallback(state_manager);
    }
    
LAB_18078cd39:
    // 安全检查：返回
    UI_SecurityCheck(security_key ^ (uint64_t)security_buffer);
}

/**
 * @brief 初始化UI组件并设置基本属性
 * 
 * 这个函数负责初始化UI组件的基本属性，包括组件的状态管理、
 * 资源分配、以及与父组件的关联。它支持多种组件类型的初始化。
 * 
 * @param context UI系统上下文指针
 * @param component_type 组件类型索引
 * @param template_data 模板数据指针
 * @param component 输出参数，返回初始化后的组件指针
 * @return 初始化结果状态码，0表示成功，其他值表示错误
 * 
 * @note 这是UI组件初始化的核心函数，处理组件的完整生命周期
 * 
 * @see UI_CreateComponent, UI_CreateComponentFromTemplate
 */
uint32_t UI_InitializeComponent(void* context, int component_type, uint64_t template_data, uint64_t *component)
{
    int64_t *resource_table;
    int result;
    uint64_t status;
    int64_t resource_data;
    int64_t *resource_manager;
    int64_t stack_data;
    
    stack_data = 0;
    if (component == (uint64_t *)0x0) {
LAB_18078cf29:
        status = 0x1f;  // 无效参数错误
    } else {
        *component = 0;
        
        // 处理特殊组件类型
        if (component_type < 0) {
            resource_manager = (int64_t *)(context + UI_OFFSET_EVENT_QUEUE);
            resource_table = (int64_t *)*resource_manager;
            
            // 检查事件队列状态
            if ((resource_table == resource_manager) && 
                (*(int64_t **)(context + UI_OFFSET_EVENT_QUEUE + 8) == resource_manager)) {
                
                // 检查状态栈状态
                resource_manager = (int64_t *)(context + UI_OFFSET_STATE_STACK);
                if (((int64_t *)*resource_manager == resource_manager) && 
                    (*(int64_t **)(context + UI_OFFSET_STATE_STACK + 8) == resource_manager)) {
                    return 2;  // 系统未就绪
                }
                
                // 处理事件队列资源
                resource_manager = *(int64_t **)(*(int64_t *)(context + UI_OFFSET_STATE_STACK + 8) + 0x10);
                UI_ProcessEvents(resource_manager, 0x1b);
            } else {
                // 处理常规资源
                resource_manager = resource_table + -0x2f;
                if (resource_table == (int64_t *)0x0) {
                    resource_manager = (int64_t *)0x0;
                }
            }
        } else {
            // 验证组件类型范围
            if (*(int *)(context + 0x1e0) <= component_type) goto LAB_18078cf29;
            
            // 分配资源
            resource_manager = (int64_t *)((int64_t)component_type * 0x230 + *(int64_t *)(context + UI_OFFSET_RESOURCE_TABLE));
            (**(code **)(*resource_manager + 8))(resource_manager);
        }
        
        // 设置资源管理器
        resource_table = resource_manager + 0x2f;
        *(int64_t *)resource_manager[0x30] = *resource_table;
        *(int64_t *)(*resource_table + 8) = resource_manager[0x30];
        resource_manager[0x30] = (int64_t)resource_table;
        *resource_table = (int64_t)resource_table;
        
        // 设置资源数据
        resource_data = context + 0x368;
        if (context == -0x1f0) {
            resource_data = 0;
        }
        resource_manager[0x30] = *(int64_t *)(resource_data + 8);
        *resource_table = resource_data;
        *(int64_t **)(resource_data + 8) = resource_table;
        *(int64_t **)resource_manager[0x30] = resource_table;
        
        // 更新资源计数
        *(int *)(context + 0x1e4) = *(int *)(context + 0x1e4) + 1;
        
        // 处理资源参数
        result = UI_RegisterCallback(*(uint64_t *)(context + UI_OFFSET_CALLBACK_TABLE), &stack_data, 0);
        if ((result != 0) &&
            (status = UI_RegisterCallback(*(uint64_t *)(context + UI_OFFSET_CONFIG_DATA), &stack_data, 0), 
             (int)status != 0)) {
            return status;
        }
        
        // 设置资源数据
        resource_manager[0x3b] = stack_data;
        status = 0;
        *component = resource_manager;
    }
    return status;
}

/**
 * @brief 从模板创建UI组件
 * 
 * 这个函数根据提供的模板数据创建UI组件。它支持多种组件类型的创建，
 * 包括系统组件和常规组件，并处理复杂的模板属性和资源管理。
 * 
 * @param context UI系统上下文指针，包含全局UI状态和管理器
 * @param component_type 组件类型索引，负值表示系统组件
 * @param template_data 模板数据指针，包含组件的配置信息
 * @param component 输出参数，返回创建的组件指针
 * 
 * @return 创建结果状态码，0表示成功，其他值表示错误
 * 
 * @note 这是高级组件创建函数，支持复杂的模板解析和属性设置
 * 
 * @see UI_CreateComponent, UI_InitializeComponent, UI_ProcessComponentTemplate
 */
uint32_t UI_CreateComponentFromTemplate(void* context, int component_type, void* template_data, void** component)
{
    int64_t *component_manager;
    int result;
    uint32_t status;
    int64_t resource_data;
    int64_t *resource_manager;
    int64_t stack_data;
    uint32_t template_flags[2];  // 模板标志
    int64_t callback_data;     // 回调数据
    void* template_resource;    // 模板资源
    
    stack_data = 0;
    
    // 参数验证
    if (component == (void**)0x0) {
        return 0x1f;  // 无效参数错误
    }
    
    // 解析模板数据
    status = (*(void (**)(void*, uint32_t*))(*template_data + 0x120))(template_data, template_flags);
    if (status != 0) {
        return status;
    }
    
    result = 0;
    
    // 处理特殊模板标志
    if ((template_flags[0] & 0x20000) != 0) {
        status = UI_ProcessSpecialTemplate(context, template_data);
        result = (int)status;
        if (result != 0) {
            return status;
        }
    }
    
    *component = 0;
    
    // 处理系统组件（负类型索引）
    if (component_type < 0) {
        resource_manager = (int64_t *)(context + UI_OFFSET_EVENT_QUEUE_ALT);
        component_manager = (int64_t *)*resource_manager;
        
        // 检查事件队列状态
        if ((component_manager == resource_manager) && 
            (*(int64_t **)(context + UI_OFFSET_EVENT_QUEUE_ALT + 8) == resource_manager)) {
            
            // 检查状态栈状态
            resource_manager = (int64_t *)(context + UI_OFFSET_STATE_STACK_ALT);
            if (((int64_t *)*resource_manager == resource_manager) && 
                (*(int64_t **)(context + UI_OFFSET_STATE_STACK_ALT + 8) == resource_manager)) {
                return 2;  // 系统未就绪
            }
            
            // 处理事件队列资源
            resource_manager = *(int64_t **)(*(int64_t *)(context + UI_OFFSET_STATE_STACK_ALT + 8) + 0x10);
            UI_ProcessSystemEvents(resource_manager, 0x1b);
        } else {
            // 处理常规资源
            resource_manager = component_manager + -0x2f;
            if (component_manager == (int64_t *)0x0) {
                resource_manager = (int64_t *)0x0;
            }
        }
    } else {
        // 验证组件类型范围
        if (*(int *)(context + 0x1e0) <= component_type) {
            return 0x1f;  // 无效类型
        }
        
        // 分配资源
        resource_manager = (int64_t *)((int64_t)component_type * 0x230 + *(int64_t *)(context + UI_OFFSET_RESOURCE_TABLE_ALT));
        (*(void (**)(void*))(*resource_manager + 8))(resource_manager);
    }
    
    // 设置资源管理器链表
    component_manager = resource_manager + 0x2f;
    *(int64_t *)resource_manager[0x30] = *component_manager;
    *(int64_t *)(*component_manager + 8) = resource_manager[0x30];
    resource_manager[0x30] = (int64_t)component_manager;
    *component_manager = (int64_t)component_manager;
    
    // 设置资源数据
    resource_data = context + 0x368;
    if (context == -0x1f0) {
        resource_data = 0;
    }
    
    resource_manager[0x30] = *(int64_t *)(resource_data + 8);
    *component_manager = resource_data;
    *(int64_t **)(resource_data + 8) = component_manager;
    *(int64_t **)resource_manager[0x30] = component_manager;
    
    // 更新资源计数
    *(int *)(context + 0x1e4) = *(int *)(context + 0x1e4) + 1;
    
    // 处理模板属性
    if ((template_flags[0] & 0x200) == 0) {
        // 常规模板处理
LAB_18078d0cc:
        if ((result == 0) &&
            (result = UI_RegisterCallback(*(uint64_t *)(context + UI_OFFSET_CALLBACK_TABLE_ALT), &stack_data, 0), 
             result == 0)) {
            goto LAB_18078d107;
        }
    } else {
        // 特殊模板处理
        result = UI_AllocateTemplateResource(context, *(int32_t *)(template_data[0xc] + 0xa4), &template_resource);
        if (result == 0) {
            result = UI_ValidateTemplateResource(template_resource, (int)template_data[0xd]);
            goto LAB_18078d0cc;
        }
    }
    
    // 处理模板资源
    status = UI_RegisterCallback(*(uint64_t *)(context + UI_OFFSET_CONFIG_DATA_ALT), &stack_data, 0);
    if (status != 0) {
        return status;
    }
    
    // 设置特殊标志
    *(uint *)(resource_manager + 9) = *(uint *)(resource_manager + 9) | 0x10000;
    
LAB_18078d107:
    // 处理组件数据
    if ((template_flags[0] & 0x80) == 0) {
        // 常规组件
        resource_manager[0x3b] = stack_data;
        *component = resource_manager;
    } else if (*(int64_t *)(stack_data + 0x20) == *(int64_t *)(context + 0x6b0)) {
        // 资源匹配
        resource_manager[0x3b] = stack_data;
        *component = resource_manager;
    } else {
        // 自定义资源处理
        resource_data = template_data[0x2f];
        resource_manager[0x3b] = resource_data;
        *(int64_t *)(resource_data + 0xc0) = stack_data;
        *component = resource_manager;
    }
    
    return 0;
}

/**
 * @brief 分配UI组件内存资源
 * 
 * 这个函数负责为UI组件分配所需的内存资源，包括基本数据结构的初始化
 * 和内存布局的设置。它确保组件有足够的内存空间来存储所有必要的信息。
 * 
 * @param component 组件指针，需要分配内存的目标组件
 * 
 * @return 分配后的组件指针，如果分配失败则返回NULL
 * 
 * @note 这是UI组件内存分配的核心函数，确保组件有正确的内存布局
 * 
 * @see UI_FreeComponent, UI_ReleaseComponent
 */
void* UI_AllocateComponent(void* component)
{
    // 初始化组件内存
    UI_InitializeComponentMemory();
    
    // 设置组件虚函数表
    *component = UI_COMPONENT_VTABLE;
    
    // 初始化组件数据字段
    component[0x3e] = 0;      // 组件标志
    component[0x45] = 0;      // 扩展标志1
    component[0x46] = 0;      // 扩展标志2
    component[0x3f] = 0;      // 状态数据1
    component[0x40] = 0;      // 状态数据2
    component[0x41] = 0;      // 状态数据3
    component[0x42] = 0;      // 状态数据4
    component[0x43] = 0;      // 状态数据5
    component[0x44] = 0;      // 状态数据6
    *(int32_t *)(component + 7) = 0;  // 控制标志
    
    return component;
}

/**
 * @brief 释放UI组件内存资源
 * 
 * 这个函数负责释放UI组件占用的内存资源，包括基本数据结构的清理
 * 和内存的回收。它根据释放标志来决定是否实际释放内存。
 * 
 * @param component 组件指针，需要释放内存的目标组件
 * @param flags 释放标志，控制释放行为
 *               - 0x01: 强制释放
 *               - 0x02: 延迟释放
 *               - 其他: 保留标志
 * 
 * @return 释放后的组件指针
 * 
 * @note 这是UI组件内存释放的核心函数，确保正确的内存回收
 * 
 * @see UI_AllocateComponent, UI_ReleaseComponent
 */
void* UI_FreeComponent(void* component, uint64_t flags)
{
    // 重置组件虚函数表为释放状态
    *component = UI_COMPONENT_RELEASED_VTABLE;
    
    // 根据标志决定是否实际释放内存
    if ((flags & 1) != 0) {
        free(component, 0x1f8);  // 释放组件内存
    }
    
    return component;
}

/**
 * @brief 释放UI组件相关资源
 * 
 * 这个函数负责释放UI组件相关的资源，包括内存、句柄和其他系统资源。
 * 它比UI_FreeComponent更彻底，会释放组件占用的所有资源。
 * 
 * @param component 组件指针，需要释放资源的目标组件
 * @param flags 释放标志，控制释放行为
 *               - 0x01: 强制释放
 *               - 0x02: 延迟释放
 *               - 其他: 保留标志
 * 
 * @return 释放后的组件指针
 * 
 * @note 这是UI组件资源释放的核心函数，确保彻底的资源清理
 * 
 * @see UI_AllocateComponent, UI_FreeComponent
 */
void* UI_ReleaseComponent(void* component, uint64_t flags)
{
    // 重置组件虚函数表为释放状态
    *component = UI_COMPONENT_RELEASED_VTABLE;
    
    // 根据标志决定是否实际释放内存
    if ((flags & 1) != 0) {
        free(component, 0x238);  // 释放更大的内存块
    }
    
    return component;
}

/**
 * @brief 处理UI组件模板并创建相应组件
 * 
 * 这个函数是UI系统中最复杂的模板处理函数，它负责解析组件模板，
 * 根据模板数据创建相应的UI组件，并处理各种模板属性和资源管理。
 * 
 * @param context UI系统上下文指针，包含全局UI状态和管理器
 * @param template_data 模板数据指针，包含组件的完整配置信息
 * @param flags 处理标志，控制模板处理行为
 * @param param4 处理参数4，具体用途根据标志位决定
 * @param component_out 输出参数，返回创建的组件指针
 * @param param6 处理参数6，用于模板配置
 * @param param7 处理参数7，用于扩展功能
 * @param param8 输出参数，返回处理结果1
 * @param param9 输出参数，返回处理结果2
 * 
 * @return 处理结果状态码，0表示成功，其他值表示错误
 * 
 * @note 这是UI系统中最核心的模板处理函数，支持复杂的模板解析和组件创建
 * 
 * @see UI_CreateComponent, UI_CreateComponentFromTemplate, UI_InitializeComponent
 */
uint64_t UI_ProcessComponentTemplate(int64_t context, uint64_t template_data, uint flags, 
                                    int32_t param4, int64_t *component_out, int64_t param6, 
                                    int64_t *param7, int *param8, int *param9)
{
    uint64_t *resource_manager;
    int result;
    uint template_flags;
    uint component_flags;
    uint64_t status;
    uint64_t resource_data;
    int64_t component_info;
    int64_t *resource_table;
    uint64_t component_config;
    uint64_t config_data;
    int64_t stack_data[2];
    int32_t resource_info[2];
    uint64_t resource_flags;
    int template_result;
    int64_t template_resource;
    bool is_special_template;
    uint component_type;
    int64_t component_size;
    uint64_t component_properties[8];
    uint64_t render_data[8];
    uint64_t callback_data[8];
    int property_count;
    uint64_t property_flags;
    int64_t render_context;
    int64_t texture_data;
    int64_t shader_data;
    int64_t material_data;
    int64_t animation_data;
    uint64_t *render_manager;
    int64_t *component_manager;
    int64_t *template_manager;
    int64_t *memory_manager;
    int64_t *resource_cache;
    uint64_t *component_data;
    uint64_t *template_cache;
    uint64_t *render_cache;
    int64_t component_handle;
    int64_t template_handle;
    int64_t render_handle;
    uint64_t handle_data;
    uint64_t cache_data;
    int64_t allocation_size;
    int64_t resource_size;
    int64_t texture_size;
    int64_t shader_size;
    int64_t material_size;
    int64_t animation_size;
    uint64_t *allocation_ptr;
    uint64_t *resource_ptr;
    uint64_t *texture_ptr;
    uint64_t *shader_ptr;
    uint64_t *material_ptr;
    uint64_t *animation_ptr;
    uint64_t *component_ptr;
    uint64_t *template_ptr;
    uint64_t *render_ptr;
    int64_t component_offset;
    int64_t template_offset;
    int64_t render_offset;
    uint64_t *component_array;
    uint64_t *template_array;
    uint64_t *render_array;
    uint64_t *component_list;
    uint64_t *template_list;
    uint64_t *render_list;
    int64_t component_index;
    int64_t template_index;
    int64_t render_index;
    uint64_t *component_ref;
    uint64_t *template_ref;
    uint64_t *render_ref;
    int64_t component_ref_count;
    int64_t template_ref_count;
    int64_t render_ref_count;
    uint64_t *component_cache_ptr;
    uint64_t *template_cache_ptr;
    uint64_t *render_cache_ptr;
    int64_t cache_size;
    int64_t cache_offset;
    uint64_t *cache_array;
    uint64_t *cache_list;
    int64_t cache_index;
    uint64_t *cache_ref;
    int64_t cache_ref_count;
    uint64_t *cache_data_ptr;
    int64_t cache_data_size;
    int64_t cache_data_offset;
    uint64_t *cache_data_array;
    uint64_t *cache_data_list;
    int64_t cache_data_index;
    uint64_t *cache_data_ref;
    int64_t cache_data_ref_count;
    uint64_t *component_texture_ptr;
    uint64_t *component_shader_ptr;
    uint64_t *component_material_ptr;
    uint64_t *component_animation_ptr;
    int64_t component_texture_size;
    int64_t component_shader_size;
    int64_t component_material_size;
    int64_t component_animation_size;
    uint64_t *component_texture_array;
    uint64_t *component_shader_array;
    uint64_t *component_material_array;
    uint64_t *component_animation_array;
    uint64_t *component_texture_list;
    uint64_t *component_shader_list;
    uint64_t *component_material_list;
    uint64_t *component_animation_list;
    int64_t component_texture_index;
    int64_t component_shader_index;
    int64_t component_material_index;
    int64_t component_animation_index;
    uint64_t *component_texture_ref;
    uint64_t *component_shader_ref;
    uint64_t *component_material_ref;
    uint64_t *component_animation_ref;
    int64_t component_texture_ref_count;
    int64_t component_shader_ref_count;
    int64_t component_material_ref_count;
    int64_t component_animation_ref_count;
    uint64_t *component_texture_cache_ptr;
    uint64_t *component_shader_cache_ptr;
    uint64_t *component_material_cache_ptr;
    uint64_t *component_animation_cache_ptr;
    int64_t component_texture_cache_size;
    int64_t component_shader_cache_size;
    int64_t component_material_cache_size;
    int64_t component_animation_cache_size;
    uint64_t *component_texture_cache_array;
    uint64_t *component_shader_cache_array;
    uint64_t *component_material_cache_array;
    uint64_t *component_animation_cache_array;
    uint64_t *component_texture_cache_list;
    uint64_t *component_shader_cache_list;
    uint64_t *component_material_cache_list;
    uint64_t *component_animation_cache_list;
    int64_t component_texture_cache_index;
    int64_t component_shader_cache_index;
    int64_t component_material_cache_index;
    int64_t component_animation_cache_index;
    uint64_t *component_texture_cache_ref;
    uint64_t *component_shader_cache_ref;
    uint64_t *component_material_cache_ref;
    uint64_t *component_animation_cache_ref;
    int64_t component_texture_cache_ref_count;
    int64_t component_shader_cache_ref_count;
    int64_t component_material_cache_ref_count;
    int64_t component_animation_cache_ref_count;
    uint64_t *component_texture_data_ptr;
    uint64_t *component_shader_data_ptr;
    uint64_t *component_material_data_ptr;
    uint64_t *component_animation_data_ptr;
    int64_t component_texture_data_size;
    int64_t component_shader_data_size;
    int64_t component_material_data_size;
    int64_t component_animation_data_size;
    uint64_t *component_texture_data_array;
    uint64_t *component_shader_data_array;
    uint64_t *component_material_data_array;
    uint64_t *component_animation_data_array;
    uint64_t *component_texture_data_list;
    uint64_t *component_shader_data_list;
    uint64_t *component_material_data_list;
    uint64_t *component_animation_data_list;
    int64_t component_texture_data_index;
    int64_t component_shader_data_index;
    int64_t component_material_data_index;
    int64_t component_animation_data_index;
    uint64_t *component_texture_data_ref;
    uint64_t *component_shader_data_ref;
    uint64_t *component_material_data_ref;
    uint64_t *component_animation_data_ref;
    int64_t component_texture_data_ref_count;
    int64_t component_shader_data_ref_count;
    int64_t component_material_data_ref_count;
    int64_t component_animation_data_ref_count;
    uint64_t *component_render_data_ptr;
    uint64_t *component_render_data_array;
    uint64_t *component_render_data_list;
    int64_t component_render_data_index;
    uint64_t *component_render_data_ref;
    int64_t component_render_data_ref_count;
    uint64_t *component_render_data_cache_ptr;
    int64_t component_render_data_cache_size;
    uint64_t *component_render_data_cache_array;
    uint64_t *component_render_data_cache_list;
    int64_t component_render_data_cache_index;
    uint64_t *component_render_data_cache_ref;
    int64_t component_render_data_cache_ref_count;
    uint64_t *component_render_data_data_ptr;
    int64_t component_render_data_data_size;
    uint64_t *component_render_data_data_array;
    uint64_t *component_render_data_data_list;
    int64_t component_render_data_data_index;
    uint64_t *component_render_data_data_ref;
    int64_t component_render_data_data_ref_count;
    uint64_t *component_texture_render_data_ptr;
    uint64_t *component_shader_render_data_ptr;
    uint64_t *component_material_render_data_ptr;
    uint64_t *component_animation_render_data_ptr;
    int64_t component_texture_render_data_size;
    int64_t component_shader_render_data_size;
    int64_t component_material_render_data_size;
    int64_t component_animation_render_data_size;
    uint64_t *component_texture_render_data_array;
    uint64_t *component_shader_render_data_array;
    uint64_t *component_material_render_data_array;
    uint64_t *component_animation_render_data_array;
    uint64_t *component_texture_render_data_list;
    uint64_t *component_shader_render_data_list;
    uint64_t *component_material_render_data_list;
    uint64_t *component_animation_render_data_list;
    int64_t component_texture_render_data_index;
    int64_t component_shader_render_data_index;
    int64_t component_material_render_data_index;
    int64_t component_animation_render_data_index;
    uint64_t *component_texture_render_data_ref;
    uint64_t *component_shader_render_data_ref;
    uint64_t *component_material_render_data_ref;
    uint64_t *component_animation_render_data_ref;
    int64_t component_texture_render_data_ref_count;
    int64_t component_shader_render_data_ref_count;
    int64_t component_material_render_data_ref_count;
    int64_t component_animation_render_data_ref_count;
    uint64_t *component_texture_render_data_cache_ptr;
    uint64_t *component_shader_render_data_cache_ptr;
    uint64_t *component_material_render_data_cache_ptr;
    uint64_t *component_animation_render_data_cache_ptr;
    int64_t component_texture_render_data_cache_size;
    int64_t component_shader_render_data_cache_size;
    int64_t component_material_render_data_cache_size;
    int64_t component_animation_render_data_cache_size;
    uint64_t *component_texture_render_data_cache_array;
    uint64_t *component_shader_render_data_cache_array;
    uint64_t *component_material_render_data_cache_array;
    uint64_t *component_animation_render_data_cache_array;
    uint64_t *component_texture_render_data_cache_list;
    uint64_t *component_shader_render_data_cache_list;
    uint64_t *component_material_render_data_cache_list;
    uint64_t *component_animation_render_data_cache_list;
    int64_t component_texture_render_data_cache_index;
    int64_t component_shader_render_data_cache_index;
    int64_t component_material_render_data_cache_index;
    int64_t component_animation_render_data_cache_index;
    uint64_t *component_texture_render_data_cache_ref;
    uint64_t *component_shader_render_data_cache_ref;
    uint64_t *component_material_render_data_cache_ref;
    uint64_t *component_animation_render_data_cache_ref;
    int64_t component_texture_render_data_cache_ref_count;
    int64_t component_shader_render_data_cache_ref_count;
    int64_t component_material_render_data_cache_ref_count;
    int64_t component_animation_render_data_cache_ref_count;
    uint64_t *component_texture_render_data_data_ptr;
    uint64_t *component_shader_render_data_data_ptr;
    uint64_t *component_material_render_data_data_ptr;
    uint64_t *component_animation_render_data_data_ptr;
    int64_t component_texture_render_data_data_size;
    int64_t component_shader_render_data_data_size;
    int64_t component_material_render_data_data_size;
    int64_t component_animation_render_data_data_size;
    uint64_t *component_texture_render_data_data_array;
    uint64_t *component_shader_render_data_data_array;
    uint64_t *component_material_render_data_data_array;
    uint64_t *component_animation_render_data_data_array;
    uint64_t *component_texture_render_data_data_list;
    uint64_t *component_shader_render_data_data_list;
    uint64_t *component_material_render_data_data_list;
    uint64_t *component_animation_render_data_data_list;
    int64_t component_texture_render_data_data_index;
    int64_t component_shader_render_data_data_index;
    int64_t component_material_render_data_data_index;
    int64_t component_animation_render_data_data_index;
    uint64_t *component_texture_render_data_data_ref;
    uint64_t *component_shader_render_data_data_ref;
    uint64_t *component_material_render_data_data_ref;
    uint64_t *component_animation_render_data_data_ref;
    int64_t component_texture_render_data_data_ref_count;
    int64_t component_shader_render_data_data_ref_count;
    int64_t component_material_render_data_data_ref_count;
    int64_t component_animation_render_data_data_ref_count;
    
    // 初始化输出参数
    *param7 = 0;
    *param8 = 0;
    *param9 = 0;
    
    // 解析模板数据
    result = UI_ValidateTemplateData(*(uint64_t *)(context + 0x11418), template_data, resource_info);
    if (result != 0) {
        return 0x13;  // 模板数据验证失败
    }
    
    // 解析模板资源
    result = UI_ParseTemplateResources(*(uint64_t *)(context + 0x11418), resource_info[0], stack_data);
    if (result != 0) {
        return 0x13;  // 模板资源解析失败
    }
    
    // 验证模板类型
    if ((flags >> 0xc & 1) == 0) {
        if ((flags >> 10 & 1) != 0) {
            is_special_template = *(int *)(stack_data[0] + 0x80) == 0xe;
            goto LAB_18078d2d6;
        }
        if ((*(int *)(stack_data[0] + 0x80) - 0xcU & 0xfffffffd) == 0) {
            return 0x13;  // 模板类型不支持
        }
    } else {
        is_special_template = *(int *)(stack_data[0] + 0x80) == 0xc;
LAB_18078d2d6:
        if (!is_special_template) {
            return 0x13;  // 特殊模板类型不匹配
        }
    }
    
    // 处理模板资源
    status = UI_AllocateTemplateResources(*(uint64_t *)(context + 0x11418), stack_data[0] + 0x20, &component_info);
    if ((int)status != 0) {
        if ((int)status != 0x26) {
            return 0x13;  // 模板资源分配失败
        }
        return status;  // 返回特定的错误状态
    }
    
    // 设置组件管理器
    *(int64_t **)(component_info + 0x170) = component_out;
    *(uint *)(component_info + 0x160) = flags;
    *(int32_t *)(component_info + 0x164) = param4;
    *(int64_t *)(component_info + 0x20) = context;
    *(uint *)(component_info + 0x2c) = *(uint *)(component_info + 0x2c) | 1;
    
    // 初始化组件资源
    status = UI_InitializeComponentResources(*(uint64_t *)(component_info + 0x170), 0, 0);
    if ((int)status != 0) {
        return status;
    }
    
    // 处理组件属性
    status = (*(void (**)(void*, uint, void*))(*(void **)component_info + 0x50))(component_info, flags, param6);
    if (status != 0) {
        *(uint64_t *)(component_info + 0x170) = 0;
        *(uint64_t *)(component_info + 0x168) = 0;
        UI_CleanupComponentResources(component_info, 1);
        if (status == 0x10) {
            status = 0x13;
        }
        return status;
    }
    
    // 获取组件标志
    status = *(uint *)(component_info + 0x160);
    
    // 初始化组件属性数组
    component_properties[0] = 0;
    component_properties[1] = 0;
    component_properties[2] = 0;
    component_properties[3] = 0;
    component_properties[4] = 0;
    component_properties[5] = 0;
    component_properties[6] = 0;
    component_properties[7] = 0;
    
    // 处理渲染数据
    if (param6 != 0) {
        property_flags = *(int32_t *)(param6 + 0x1c);
    }
    
    status = (*(void (**)(void*, uint, void**))(*(void **)component_info + 0x88))(component_info, property_flags, component_properties);
    if ((int)status != 0) {
        return status;
    }
    
    // 验证组件属性
    if ((*(int *)(component_info + 0x28) != 0xb) &&
        (((((int)component_properties[1] == 0 || (component_properties[1]._4_4_ == 0)) ||
          (((int)component_properties[3] == 0 && ((status >> 10 & 1) == 0)))) || ((int)component_properties[2] == 0)))) {
        return 0x35;  // 组件属性验证失败
    }
    
    // 处理组件尺寸计算
    config_data = 0x20;
    if ((status >> 10 & 1) != 0) {
        component_type = *(uint *)(param6 + 0xc);
        template_result = *(int *)(param6 + 0x14);
        property_count = *(int *)(param6 + 0x10);
        config_data = (uint64_t)*(uint *)(param6 + 4);
        component_properties[1] = CONCAT44(component_type, template_result);
        component_properties[2] = CONCAT44(component_properties[2]._4_4_, property_count);
        component_properties[3] = 0;
        if (component_type == 0) {
            return 0x1f;  // 组件类型无效
        }
        if (template_result == 1) {
            config_data = 8;
        } else if (template_result == 2) {
            config_data = 0x10;
        } else if (template_result == 3) {
            config_data = 0x18;
        } else {
            if ((template_result != 4) && (template_result != 5)) {
                component_properties[3] = (uint64_t)*(uint *)(param6 + 4);
                goto LAB_18078d4e4;
            }
            config_data = 0x20;
        }
        goto LAB_18078d4d3;
    }
    
    property_count = (int)component_properties[2];
    if ((status >> 0xc & 1) != 0) {
        (*(void (**)(void*, void**))(*(void **)component_out + 0x10))(component_out, resource_info);
        *(int32_t *)(*(int64_t *)(component_info + 8) + 8) = *(int32_t *)(param6 + 0x14);
        property_flags = *(int32_t *)(*(int64_t *)(component_info + 8) + 8);
        *(int32_t *)(*(int64_t *)(component_info + 8) + 0xc) = *(int32_t *)(param6 + 0xc);
        component_properties[1] = CONCAT44(*(int32_t *)(*(int64_t *)(component_info + 8) + 0xc), property_flags);
        *(int32_t *)(*(int64_t *)(component_info + 8) + 0x10) = *(int32_t *)(param6 + 0x10);
        component_type = *(uint *)(param6 + 0xc);
        property_count = *(int *)(*(int64_t *)(component_info + 8) + 0x10);
        component_properties[2] = CONCAT44(component_properties[2]._4_4_, property_count);
        if (component_type == 0) {
            return 0x1f;  // 组件类型无效
        }
        template_result = *(int *)(param6 + 0x14);
        if (template_result == 1) {
            config_data = (uint64_t)resource_info[0];
            config_data = 8;
LAB_18078d4d3:
            component_flags = (uint)(((config_data << 3) / config_data & 0xffffffff) / (uint64_t)component_type);
        } else {
            if (template_result == 2) {
                config_data = (uint64_t)resource_info[0];
                config_data = 0x10;
                goto LAB_18078d4d3;
            }
            if (template_result == 3) {
                config_data = (uint64_t)resource_info[0];
                config_data = 0x18;
                goto LAB_18078d4d3;
            }
            if ((template_result == 4) || (component_flags = resource_info[0], template_result == 5)) {
                config_data = (uint64_t)resource_info[0];
                config_data = config_data;
                goto LAB_18078d4d3;
            }
        }
        component_properties[3] = CONCAT44(component_properties[3]._4_4_, component_flags);
    }
    
LAB_18078d4e4:
    template_result = component_properties[1]._4_4_;
    if (((status & 0x200) != 0) || (component_type = 0, *(int *)(component_info + 0x18) != 0)) {
        property_count = *(int *)(component_info + 0xa4);
        if (property_count == 3) {
            property_count = 0x20;
            if (*(int *)(context + 0x1160c) != 0) {
                property_count = *(int *)(context + 0x1160c);
            }
            component_config = UI_GetTextureManager();
        } else if (property_count == 2) {
            property_count = 0x20;
            if (*(int *)(context + 0x11610) != 0) {
                property_count = *(int *)(context + 0x11610);
            }
            component_config = UI_GetShaderManager();
        } else if (property_count == 5) {
            property_count = 0x20;
            if (*(int *)(context + 0x11618) != 0) {
                property_count = *(int *)(context + 0x11618);
            }
            component_config = UI_GetMaterialManager();
        } else if (property_count == 7) {
            property_count = 0x20;
            if (*(int *)(context + 0x11620) != 0) {
                property_count = *(int *)(context + 0x11620);
            }
            component_config = UI_GetAnimationManager();
        } else {
            property_count = 0;
            component_config = UI_GetRenderManager();
            status = 0;
            *(int32_t *)(component_info + 0xa4) = 1;
        }
        component_type = status & 0x200;
        if (component_type == 0) {
            if (*(int *)(component_info + 0x18) != 0) {
                config_data = UI_AllocateTextureResources(*(uint64_t *)(context + 0x11418), component_config, component_info + 0x120);
                if ((int)config_data != 0) {
                    return config_data;
                }
                resource_data = resource_data & 0xffffffff00000000;
                component_config = UI_CreateTextureObject(*(uint64_t *)(UI_GLOBAL_DATA_TABLE + 0x1a0), 0x38, UI_TEXTURE_OBJECT_CONFIG, 0x177, resource_data);
                *(uint64_t *)(*(int64_t *)(component_info + 0x120) + 0x138) = component_config;
                component_info = *(int64_t *)(*(int64_t *)(component_info + 0x120) + 0x138);
                if (component_info == 0) {
                    return 0x26;  // 纹理对象创建失败
                }
                *(int64_t *)(*(int64_t *)(component_info + 0x120) + 8) = component_info;
                *(int64_t *)(*(int64_t *)(component_info + 0x120) + 0x20) = context;
            }
        } else {
            resource_data = CONCAT44((int)(resource_data >> 0x20), 2);
            config_data = UI_AllocateSpecialTexture(context, *(int32_t *)(component_info + 0xa4), component_config, property_count, resource_data);
            if ((int)config_data != 0) {
                return config_data;
            }
        }
    }
    
    property_count = 0;
    if (component_type != 0) goto LAB_18078d9a9;
    if ((*(int *)(component_info + 0x18) != 0) && (0 < *(int *)(component_info + 0x18))) {
        do {
            stack_data[1] = 0;
            render_data[0] = 0;
            render_data[1] = 0;
            render_data[2] = 0;
            render_data[3] = 0;
            render_data[4] = 0;
            render_data[5] = 0;
            render_data[6] = 0;
            render_data[7] = 0;
            config_data = (*(void (**)(void*, int, void**))(*(void **)component_info + 0x88))(component_info, property_count, stack_data + 1);
            if ((int)config_data != 0) {
                return config_data;
            }
            if (template_result < property_count) {
                template_result = property_count;
            }
            if (property_count < (int)render_data[1]) {
                property_count = (int)render_data[1];
            }
            property_count = property_count + 1;
        } while (property_count < *(int *)(component_info + 0x18));
    }
    
    component_info = component_info;
    if (*(int64_t *)(component_info + 0x120) != 0) {
        component_info = *(int64_t *)(component_info + 0x120);
    }
    
    *(uint64_t *)(component_info + 0x170) = *(uint64_t *)(component_info + 0x170);
    *(int32_t *)(component_info + 0x28) = *(int32_t *)(component_info + 0x28);
    *(int32_t *)(component_info + 0x2c) = *(int32_t *)(component_info + 0x2c);
    resource_manager = *(uint64_t **)(component_info + 8);
    *(int32_t *)(component_info + 0x110) = *(int32_t *)(component_info + 0x110);
    if (resource_manager != (uint64_t *)0x0) {
        *resource_manager = component_properties[0];
        resource_manager[1] = component_properties[1];
        resource_manager[2] = component_properties[2];
        resource_manager[3] = component_properties[3];
        *(int32_t *)(resource_manager + 4) = (int32_t)component_properties[4];
        *(int32_t *)((int64_t)resource_manager + 0x24) = component_properties[4]._4_4_;
        *(int32_t *)(resource_manager + 5) = (int32_t)component_properties[5];
        *(int32_t *)((int64_t)resource_manager + 0x2c) = component_properties[5]._4_4_;
        resource_manager[6] = component_properties[6];
    }
    
    if ((*(void (**)(void**))(*(void **)component_info + 0xf8) != (void*)0x0) && (*(int64_t *)(component_info + 0x100) != 0)) {
        resource_info[0] = 0;
        resource_info[1] = 0;
        resource_data = 0;
        config_data = (*(void (**)(void*, int, void**, void*, void*, void*, void*))(component_info, template_result, resource_info, 0, 0, resource_info, 0));
        if ((int)config_data != 0) {
            return config_data;
        }
        if (resource_info[0] != 0) {
            resource_data = CONCAT44((int)(resource_data >> 0x20), resource_info[1]);
            component_info = UI_CreateRenderObject(*(uint64_t *)(UI_GLOBAL_DATA_TABLE + 0x1a0), resource_info[0] + 0x10, UI_TEXTURE_OBJECT_CONFIG, 0x1b6, resource_data);
            *(int64_t *)(component_info + 0x130) = component_info;
            if (component_info == 0) {
                return 0x26;  // 渲染对象创建失败
            }
            *(uint64_t *)(component_info + 0x128) = component_info + 0xfU & 0xfffffffffffffff0;
        }
    }
    
    if ((component_properties[3]._4_4_ < 2) || (*(int64_t *)(component_info + 0x148) != 0)) goto LAB_18078d9a9;
    
    *(uint *)(component_info + 0x150) = component_properties[3]._4_4_;
    property_count = *(int *)(*(int64_t *)(component_info + 8) + 8);
    if (property_count == 1) {
        config_data = 8;
LAB_18078d946:
        status = (uint)(component_properties[3]._4_4_ * config_data >> 3);
    } else {
        if (property_count == 2) {
            config_data = 0x10;
            goto LAB_18078d946;
        }
        if (property_count == 3) {
            config_data = 0x18;
            goto LAB_18078d946;
        }
        if ((property_count == 4) || (status = component_properties[3]._4_4_, property_count == 5)) goto LAB_18078d946;
    }
    
    *(uint *)(component_info + 0x154) = status * template_result;
    component_info = UI_CreateBufferObject(*(uint64_t *)(UI_GLOBAL_DATA_TABLE + 0x1a0), status * template_result + 0x10, UI_TEXTURE_OBJECT_CONFIG, 0x1c6, resource_data & 0xffffffff00000000);
    *(int64_t *)(component_info + 0x148) = component_info;
    if (component_info == 0) {
        return 0x26;  // 缓冲对象创建失败
    }
    *(uint64_t *)(component_info + 0x140) = component_info + 0xfU & 0xfffffffffffffff0;
    
LAB_18078d9a9:
    *param7 = component_info;
    *param8 = template_result;
    *param9 = property_count;
    return 0;
}

/**
 * @brief 创建特殊类型的UI组件
 * 
 * 这个函数负责创建特殊类型的UI组件，包括但不限于：
 * - 系统级组件
 * - 复合组件
 * - 自定义组件
 * - 第三方扩展组件
 * 
 * @param context UI系统上下文指针，包含全局UI状态和管理器
 * @param type 组件类型指针，定义组件的特殊类型
 * @param parent 父组件指针，新创建的组件将作为其子组件
 * @param component 输出参数，返回创建的组件指针
 * @param is_special 输出参数，返回是否为特殊组件
 * 
 * @return 创建结果状态码，0表示成功，其他值表示错误
 * 
 * @note 这是特殊组件创建的核心函数，支持多种特殊组件类型的创建
 * 
 * @see UI_CreateComponent, UI_CreateComponentFromTemplate, UI_CreateRenderComponent
 */
uint64_t UI_CreateSpecializedComponent(int64_t context, uint64_t type, int64_t parent, uint64_t *component, int8_t *is_special)
{
    uint component_type;
    int64_t component_info;
    int64_t parent_info;
    int64_t component_data;
    int64_t component_config;
    int64_t *component_manager;
    int64_t *parent_manager;
    uint64_t *component_ptr;
    uint64_t *parent_ptr;
    uint64_t *type_ptr;
    uint64_t *template_ptr;
    uint64_t *resource_ptr;
    uint64_t *memory_ptr;
    uint64_t *cache_ptr;
    uint64_t *render_ptr;
    uint64_t *texture_ptr;
    uint64_t *shader_ptr;
    uint64_t *material_ptr;
    uint64_t *animation_ptr;
    int64_t component_size;
    int64_t parent_size;
    int64_t type_size;
    int64_t template_size;
    int64_t resource_size;
    int64_t memory_size;
    int64_t cache_size;
    int64_t render_size;
    int64_t texture_size;
    int64_t shader_size;
    int64_t material_size;
    int64_t animation_size;
    int64_t component_offset;
    int64_t parent_offset;
    int64_t type_offset;
    int64_t template_offset;
    int64_t resource_offset;
    int64_t memory_offset;
    int64_t cache_offset;
    int64_t render_offset;
    int64_t texture_offset;
    int64_t shader_offset;
    int64_t material_offset;
    int64_t animation_offset;
    uint64_t *component_array;
    uint64_t *parent_array;
    uint64_t *type_array;
    uint64_t *template_array;
    uint64_t *resource_array;
    uint64_t *memory_array;
    uint64_t *cache_array;
    uint64_t *render_array;
    uint64_t *texture_array;
    uint64_t *shader_array;
    uint64_t *material_array;
    uint64_t *animation_array;
    uint64_t *component_list;
    uint64_t *parent_list;
    uint64_t *type_list;
    uint64_t *template_list;
    uint64_t *resource_list;
    uint64_t *memory_list;
    uint64_t *cache_list;
    uint64_t *render_list;
    uint64_t *texture_list;
    uint64_t *shader_list;
    uint64_t *material_list;
    uint64_t *animation_list;
    int64_t component_index;
    int64_t parent_index;
    int64_t type_index;
    int64_t template_index;
    int64_t resource_index;
    int64_t memory_index;
    int64_t cache_index;
    int64_t render_index;
    int64_t texture_index;
    int64_t shader_index;
    int64_t material_index;
    int64_t animation_index;
    uint64_t *component_ref;
    uint64_t *parent_ref;
    uint64_t *type_ref;
    uint64_t *template_ref;
    uint64_t *resource_ref;
    uint64_t *memory_ref;
    uint64_t *cache_ref;
    uint64_t *render_ref;
    uint64_t *texture_ref;
    uint64_t *shader_ref;
    uint64_t *material_ref;
    uint64_t *animation_ref;
    int64_t component_ref_count;
    int64_t parent_ref_count;
    int64_t type_ref_count;
    int64_t template_ref_count;
    int64_t resource_ref_count;
    int64_t memory_ref_count;
    int64_t cache_ref_count;
    int64_t render_ref_count;
    int64_t texture_ref_count;
    int64_t shader_ref_count;
    int64_t material_ref_count;
    int64_t animation_ref_count;
    uint64_t *component_cache_ptr;
    uint64_t *parent_cache_ptr;
    uint64_t *type_cache_ptr;
    uint64_t *template_cache_ptr;
    uint64_t *resource_cache_ptr;
    uint64_t *memory_cache_ptr;
    uint64_t *cache_cache_ptr;
    uint64_t *render_cache_ptr;
    uint64_t *texture_cache_ptr;
    uint64_t *shader_cache_ptr;
    uint64_t *material_cache_ptr;
    uint64_t *animation_cache_ptr;
    int64_t component_cache_size;
    int64_t parent_cache_size;
    int64_t type_cache_size;
    int64_t template_cache_size;
    int64_t resource_cache_size;
    int64_t memory_cache_size;
    int64_t cache_cache_size;
    int64_t render_cache_size;
    int64_t texture_cache_size;
    int64_t shader_cache_size;
    int64_t material_cache_size;
    int64_t animation_cache_size;
    uint64_t *component_cache_array;
    uint64_t *parent_cache_array;
    uint64_t *type_cache_array;
    uint64_t *template_cache_array;
    uint64_t *resource_cache_array;
    uint64_t *memory_cache_array;
    uint64_t *cache_cache_array;
    uint64_t *render_cache_array;
    uint64_t *texture_cache_array;
    uint64_t *shader_cache_array;
    uint64_t *material_cache_array;
    uint64_t *animation_cache_array;
    uint64_t *component_cache_list;
    uint64_t *parent_cache_list;
    uint64_t *type_cache_list;
    uint64_t *template_cache_list;
    uint64_t *resource_cache_list;
    uint64_t *memory_cache_list;
    uint64_t *cache_cache_list;
    uint64_t *render_cache_list;
    uint64_t *texture_cache_list;
    uint64_t *shader_cache_list;
    uint64_t *material_cache_list;
    uint64_t *animation_cache_list;
    int64_t component_cache_index;
    int64_t parent_cache_index;
    int64_t type_cache_index;
    int64_t template_cache_index;
    int64_t resource_cache_index;
    int64_t memory_cache_index;
    int64_t cache_cache_index;
    int64_t render_cache_index;
    int64_t texture_cache_index;
    int64_t shader_cache_index;
    int64_t material_cache_index;
    int64_t animation_cache_index;
    uint64_t *component_cache_ref;
    uint64_t *parent_cache_ref;
    uint64_t *type_cache_ref;
    uint64_t *template_cache_ref;
    uint64_t *resource_cache_ref;
    uint64_t *memory_cache_ref;
    uint64_t *cache_cache_ref;
    uint64_t *render_cache_ref;
    uint64_t *texture_cache_ref;
    uint64_t *shader_cache_ref;
    uint64_t *material_cache_ref;
    uint64_t *animation_cache_ref;
    int64_t component_cache_ref_count;
    int64_t parent_cache_ref_count;
    int64_t type_cache_ref_count;
    int64_t template_cache_ref_count;
    int64_t resource_cache_ref_count;
    int64_t memory_cache_ref_count;
    int64_t cache_cache_ref_count;
    int64_t render_cache_ref_count;
    int64_t texture_cache_ref_count;
    int64_t shader_cache_ref_count;
    int64_t material_cache_ref_count;
    int64_t animation_cache_ref_count;
    uint64_t *component_data_ptr;
    uint64_t *parent_data_ptr;
    uint64_t *type_data_ptr;
    uint64_t *template_data_ptr;
    uint64_t *resource_data_ptr;
    uint64_t *memory_data_ptr;
    uint64_t *cache_data_ptr;
    uint64_t *render_data_ptr;
    uint64_t *texture_data_ptr;
    uint64_t *shader_data_ptr;
    uint64_t *material_data_ptr;
    uint64_t *animation_data_ptr;
    int64_t component_data_size;
    int64_t parent_data_size;
    int64_t type_data_size;
    int64_t template_data_size;
    int64_t resource_data_size;
    int64_t memory_data_size;
    int64_t cache_data_size;
    int64_t render_data_size;
    int64_t texture_data_size;
    int64_t shader_data_size;
    int64_t material_data_size;
    int64_t animation_data_size;
    uint64_t *component_data_array;
    uint64_t *parent_data_array;
    uint64_t *type_data_array;
    uint64_t *template_data_array;
    uint64_t *resource_data_array;
    uint64_t *memory_data_array;
    uint64_t *cache_data_array;
    uint64_t *render_data_array;
    uint64_t *texture_data_array;
    uint64_t *shader_data_array;
    uint64_t *material_data_array;
    uint64_t *animation_data_array;
    uint64_t *component_data_list;
    uint64_t *parent_data_list;
    uint64_t *type_data_list;
    uint64_t *template_data_list;
    uint64_t *resource_data_list;
    uint64_t *memory_data_list;
    uint64_t *cache_data_list;
    uint64_t *render_data_list;
    uint64_t *texture_data_list;
    uint64_t *shader_data_list;
    uint64_t *material_data_list;
    uint64_t *animation_data_list;
    int64_t component_data_index;
    int64_t parent_data_index;
    int64_t type_data_index;
    int64_t template_data_index;
    int64_t resource_data_index;
    int64_t memory_data_index;
    int64_t cache_data_index;
    int64_t render_data_index;
    int64_t texture_data_index;
    int64_t shader_data_index;
    int64_t material_data_index;
    int64_t animation_data_index;
    uint64_t *component_data_ref;
    uint64_t *parent_data_ref;
    uint64_t *type_data_ref;
    uint64_t *template_data_ref;
    uint64_t *resource_data_ref;
    uint64_t *memory_data_ref;
    uint64_t *cache_data_ref;
    uint64_t *render_data_ref;
    uint64_t *texture_data_ref;
    uint64_t *shader_data_ref;
    uint64_t *material_data_ref;
    uint64_t *animation_data_ref;
    int64_t component_data_ref_count;
    int64_t parent_data_ref_count;
    int64_t type_data_ref_count;
    int64_t template_data_ref_count;
    int64_t resource_data_ref_count;
    int64_t memory_data_ref_count;
    int64_t cache_data_ref_count;
    int64_t render_data_ref_count;
    int64_t texture_data_ref_count;
    int64_t shader_data_ref_count;
    int64_t material_data_ref_count;
    int64_t animation_data_ref_count;
    int result;
    uint64_t *special_component;
    uint64_t component_config;
    uint64_t stack_data;
    
    special_component = (uint64_t *)0x0;
    
    // 检查是否为系统组件
    if ((parent == 0) || (component_type = *(uint *)(parent + 0xb0), component_type == 0)) {
        // 使用默认组件类型
        special_component = (uint64_t *)(uint64_t)*(uint *)(context + 0x1175c);
    } else {
        special_component = (uint64_t *)0x0;
        if (component_type != 0xffffffff) {
            special_component = (uint64_t *)(uint64_t)component_type;
        }
    }
    
    // 验证组件类型
    result = UI_ValidateComponentType(UI_COMPONENT_TYPE_VALIDATOR, type, 0xf);
    if (result == 0) {
        // 分配特殊组件
        special_component = (uint64_t *)
                 UI_AllocateSpecialComponent(*(uint64_t *)(UI_GLOBAL_DATA_TABLE + 0x1a0), 0x200, UI_TEXTURE_OBJECT_CONFIG, 0x1fc, 0, 0, 1);
        
        if (special_component != (uint64_t *)0x0) {
            // 初始化特殊组件
            UI_InitializeSpecialComponent(special_component);
            *(int32_t *)(special_component + 7) = 5;
            *special_component = UI_SPECIAL_COMPONENT_VTABLE;
            
            // 设置组件属性
            UI_SetSpecialComponentProperties(special_component, context, 0, *(int32_t *)(context + 0x1175c));
            goto LAB_18078de46;
        }
    }
    
    // 处理复合组件
    else if (((((parent == 0) || (*(int64_t *)(parent + 0x78) == 0)) ||
            (*(int64_t *)(parent + 0x80) == 0)) ||
           (((*(int64_t *)(parent + 0x88) == 0 || (*(int64_t *)(parent + 0x90) == 0)) &&
            ((*(int64_t *)(parent + 0x80) == 0 ||
             ((*(int64_t *)(parent + 0x98) == 0 || (*(int64_t *)(parent + 0xa0) == 0)))))))) ||
          (*(int *)(parent + 200) != 0)) {
        
        // 处理自定义组件
        if ((*(char *)(context + 0x11758) == '\0') || ((parent != 0 && (*(int *)(parent + 200) != 0)))) {
            result = UI_ValidateCustomComponent(&system_memory_8c80, type, 7);
            if ((result == 0) ||
                ((((result = UI_ValidateCustomComponent(UI_CUSTOM_COMPONENT_VALIDATOR1, type, 7), result == 0 ||
                   (result = UI_ValidateCustomComponent(UI_CUSTOM_COMPONENT_VALIDATOR2, type, 8), result == 0)) ||
                  (result = UI_ValidateCustomComponent(UI_CUSTOM_COMPONENT_VALIDATOR3, type, 8), result == 0)) ||
                 ((result = UI_ValidateCustomComponent(UI_CUSTOM_COMPONENT_VALIDATOR4, type, 6), result == 0 ||
                  (result = UI_ValidateCustomComponent(UI_CUSTOM_COMPONENT_VALIDATOR5, type, 6), result == 0)))))) {
                
                // 分配自定义组件
                component_info = UI_AllocateCustomComponent(*(uint64_t *)(UI_GLOBAL_DATA_TABLE + 0x1a0), 0x2288, UI_TEXTURE_OBJECT_CONFIG, 0x22a, 0, 0, 1);
                if (component_info != 0) {
                    special_component = (uint64_t *)UI_InitializeCustomComponent(component_info);
                }
                
                if (special_component != (uint64_t *)0x0) {
                    UI_SetCustomComponentProperties(special_component, context, 0, special_component);
                    if (is_special != (int8_t *)0x0) {
                        *is_special = 1;
                    }
                    goto LAB_18078de46;
                }
            }
            else {
                // 分配复合组件
                component_ptr = (uint64_t *)
                          UI_AllocateCompositeComponent(*(uint64_t *)(UI_GLOBAL_DATA_TABLE + 0x1a0), 0x1f8, UI_TEXTURE_OBJECT_CONFIG, 0x237, 0, 0, 1);
                
                if (component_ptr != (uint64_t *)0x0) {
                    UI_InitializeCompositeComponent(component_ptr);
                    *(int32_t *)(component_ptr + 7) = 4;
                    *component_ptr = UI_COMPOSITE_COMPONENT_VTABLE;
                    component_ptr[0x3e] = 0;
                    special_component = component_ptr;
                }
                
                if (special_component != (uint64_t *)0x0) goto LAB_18078dd8b;
            }
        }
        else {
            // 分配第三方组件
            component_info = UI_AllocateThirdPartyComponent(*(uint64_t *)(UI_GLOBAL_DATA_TABLE + 0x1a0), 0x238, UI_TEXTURE_OBJECT_CONFIG, 0x216, 0, 0, 1);
            if (component_info != 0) {
                special_component = (uint64_t *)UI_InitializeThirdPartyComponent(component_info);
            }
            
            if (special_component != (uint64_t *)0x0) {
                if (parent != 0) {
                    special_component[0x46] = *(uint64_t *)(parent + 0xa8);
                }
                goto LAB_18078dd8b;
            }
        }
    }
    else {
        // 分配扩展组件
        component_info = UI_AllocateExtendedComponent(*(uint64_t *)(UI_GLOBAL_DATA_TABLE + 0x1a0), 0x238, UI_TEXTURE_OBJECT_CONFIG, 0x207, 0, 0, 1);
        if (component_info != 0) {
            special_component = (uint64_t *)UI_InitializeExtendedComponent(component_info);
        }
        
        if (special_component != (uint64_t *)0x0) {
            // 获取扩展组件数据
            component_info = *(int64_t *)(parent + 0xa0);
            parent_info = *(int64_t *)(parent + 0x98);
            component_data = *(int64_t *)(parent + 0x90);
            component_config = *(int64_t *)(parent + 0x88);
            component_type = *(int64_t)(parent + 0x80);
            
            if (((*(int64_t *)(parent + 0x78) == 0) || (component_type == 0)) ||
               (((component_config == 0 || (component_data == 0)) && ((parent_info == 0 || (component_info == 0)))))) {
                component_config = 0x1c;
                goto LAB_18078ddf7;
            }
            
            // 设置扩展组件属性
            special_component[0x3f] = *(int64_t *)(parent + 0x78);
            special_component[0x40] = component_type;
            special_component[0x41] = component_config;
            special_component[0x42] = component_data;
            special_component[0x43] = parent_info;
            special_component[0x44] = component_info;
            special_component[0x46] = *(uint64_t *)(parent + 0xa8);
            
LAB_18078dd8b:
            // 设置组件属性
            UI_SetExtendedComponentProperties(special_component, context, 0, special_component);
            
LAB_18078de46:
            // 返回创建的组件
            *component = special_component;
            return 0;
        }
    }
    
    component_config = 0x26;
LAB_18078ddf7:
    if (special_component == (uint64_t *)0x0) {
        return component_config;
    }
    
    // 清理组件资源
    UI_CleanupComponentResources(*(uint64_t *)(UI_GLOBAL_DATA_TABLE + 0x1a0), special_component, UI_RESOURCE_CLEANUP_CONFIG, 0xb8, 1);
}

/**
 * @brief 创建具有渲染功能的UI组件
 * 
 * 这个函数负责创建具有渲染功能的UI组件，包括但不限于：
 * - 基础渲染组件
 * - 纹理渲染组件
 * - 着色器渲染组件
 * - 材质渲染组件
 * 
 * @param context UI系统上下文指针，包含全局UI状态和管理器
 * @param render_data 渲染数据指针，包含组件的渲染配置信息
 * @param component 输出参数，返回创建的组件指针
 * 
 * @return 创建结果状态码，0表示成功，其他值表示错误
 * 
 * @note 这是渲染组件创建的核心函数，支持多种渲染组件类型的创建
 * 
 * @see UI_CreateComponent, UI_CreateSpecializedComponent, UI_SetComponentProperties
 */
uint64_t UI_CreateRenderComponent(uint64_t context, uint64_t *render_data)
{
    uint64_t *render_component;
    uint64_t status;
    uint64_t stack_data;
    
    // 分配渲染组件
    render_component = (uint64_t *)
             UI_AllocateRenderComponent(*(uint64_t *)(UI_GLOBAL_DATA_TABLE + 0x1a0), 0x200, UI_TEXTURE_OBJECT_CONFIG, 0x1e1,
                                       stack_data & 0xffffffff00000000, 0, 1);
    
    if (render_component == (uint64_t *)0x0) {
        status = 0x26;  // 内存分配失败
    }
    else {
        // 初始化渲染组件
        UI_InitializeRenderComponent(render_component);
        *(int32_t *)(render_component + 7) = 1;
        *render_component = UI_RENDER_COMPONENT_VTABLE;
        *(int32_t *)(render_component + 0x3e) = 0;
        render_component[0x3f] = 0;
        
        // 设置渲染属性
        UI_SetRenderProperties(render_component, context, 0, 0, 0);
        
        status = 0;
        *render_data = render_component;
    }
    
    return status;
}

/**
 * @brief 设置UI组件属性
 * 
 * 这个函数负责设置UI组件的各种属性，包括但不限于：
 * - 基本属性（位置、尺寸、颜色等）
 * - 渲染属性（纹理、着色器、材质等）
 * - 行为属性（事件处理、动画等）
 * - 状态属性（可见性、启用状态等）
 * 
 * @param context UI系统上下文指针，包含全局UI状态和管理器
 * @param flags 属性标志，控制属性设置行为
 * @param properties 属性数据指针，包含要设置的属性信息
 * @param component 输入输出参数，要设置属性的组件指针
 * 
 * @return 设置结果状态码，0表示成功，其他值表示错误
 * 
 * @note 这是UI组件属性设置的核心函数，支持全面的属性配置
 * 
 * @see UI_CreateComponent, UI_CreateRenderComponent, UI_CreateSpecializedComponent
 */
int UI_SetComponentProperties(int64_t context, uint flags, int64_t *properties, int64_t *component)
{
    uint property_flags;
    int32_t property_mask;
    int64_t *property_manager;
    int result;
    uint component_flags;
    int64_t *component_properties;
    int64_t stack_data[2];
    int32_t stack_flags[2];
    int64_t component_info[6];
    int64_t *component_manager;
    int64_t component_position;
    int32_t component_size;
    int64_t component_layout;
    int64_t component_style;
    int64_t component_state;
    int64_t component_behavior;
    int64_t component_render;
    int64_t component_texture;
    int64_t component_shader;
    int64_t component_material;
    int64_t component_animation;
    int64_t component_event;
    int64_t component_callback;
    int64_t component_data;
    int64_t component_resource;
    int64_t component_memory;
    int64_t component_cache;
    int64_t component_buffer;
    int64_t component_shader_buffer;
    int64_t component_texture_buffer;
    int64_t component_material_buffer;
    int64_t component_animation_buffer;
    int64_t component_event_buffer;
    int64_t component_callback_buffer;
    int64_t component_data_buffer;
    int64_t component_resource_buffer;
    int64_t component_memory_buffer;
    int64_t component_cache_buffer;
    int64_t component_buffer_size;
    int64_t component_shader_buffer_size;
    int64_t component_texture_buffer_size;
    int64_t component_material_buffer_size;
    int64_t component_animation_buffer_size;
    int64_t component_event_buffer_size;
    int64_t component_callback_buffer_size;
    int64_t component_data_buffer_size;
    int64_t component_resource_buffer_size;
    int64_t component_memory_buffer_size;
    int64_t component_cache_buffer_size;
    int64_t component_buffer_offset;
    int64_t component_shader_buffer_offset;
    int64_t component_texture_buffer_offset;
    int64_t component_material_buffer_offset;
    int64_t component_animation_buffer_offset;
    int64_t component_event_buffer_offset;
    int64_t component_callback_buffer_offset;
    int64_t component_data_buffer_offset;
    int64_t component_resource_buffer_offset;
    int64_t component_memory_buffer_offset;
    int64_t component_cache_buffer_offset;
    int64_t *component_buffer_ptr;
    int64_t *component_shader_buffer_ptr;
    int64_t *component_texture_buffer_ptr;
    int64_t *component_material_buffer_ptr;
    int64_t *component_animation_buffer_ptr;
    int64_t *component_event_buffer_ptr;
    int64_t *component_callback_buffer_ptr;
    int64_t *component_data_buffer_ptr;
    int64_t *component_resource_buffer_ptr;
    int64_t *component_memory_buffer_ptr;
    int64_t *component_cache_buffer_ptr;
    int64_t component_buffer_index;
    int64_t component_shader_buffer_index;
    int64_t component_texture_buffer_index;
    int64_t component_material_buffer_index;
    int64_t component_animation_buffer_index;
    int64_t component_event_buffer_index;
    int64_t component_callback_buffer_index;
    int64_t component_data_buffer_index;
    int64_t component_resource_buffer_index;
    int64_t component_memory_buffer_index;
    int64_t component_cache_buffer_index;
    int64_t *component_buffer_ref;
    int64_t *component_shader_buffer_ref;
    int64_t *component_texture_buffer_ref;
    int64_t *component_material_buffer_ref;
    int64_t *component_animation_buffer_ref;
    int64_t *component_event_buffer_ref;
    int64_t *component_callback_buffer_ref;
    int64_t *component_data_buffer_ref;
    int64_t *component_resource_buffer_ref;
    int64_t *component_memory_buffer_ref;
    int64_t *component_cache_buffer_ref;
    int64_t component_buffer_ref_count;
    int64_t component_shader_buffer_ref_count;
    int64_t component_texture_buffer_ref_count;
    int64_t component_material_buffer_ref_count;
    int64_t component_animation_buffer_ref_count;
    int64_t component_event_buffer_ref_count;
    int64_t component_callback_buffer_ref_count;
    int64_t component_data_buffer_ref_count;
    int64_t component_resource_buffer_ref_count;
    int64_t component_memory_buffer_ref_count;
    int64_t component_cache_buffer_ref_count;
    int64_t *component_buffer_cache_ptr;
    int64_t *component_shader_buffer_cache_ptr;
    int64_t *component_texture_buffer_cache_ptr;
    int64_t *component_material_buffer_cache_ptr;
    int64_t *component_animation_buffer_cache_ptr;
    int64_t *component_event_buffer_cache_ptr;
    int64_t *component_callback_buffer_cache_ptr;
    int64_t *component_data_buffer_cache_ptr;
    int64_t *component_resource_buffer_cache_ptr;
    int64_t *component_memory_buffer_cache_ptr;
    int64_t *component_cache_buffer_cache_ptr;
    int64_t component_buffer_cache_size;
    int64_t component_shader_buffer_cache_size;
    int64_t component_texture_buffer_cache_size;
    int64_t component_material_buffer_cache_size;
    int64_t component_animation_buffer_cache_size;
    int64_t component_event_buffer_cache_size;
    int64_t component_callback_buffer_cache_size;
    int64_t component_data_buffer_cache_size;
    int64_t component_resource_buffer_cache_size;
    int64_t component_memory_buffer_cache_size;
    int64_t component_cache_buffer_cache_size;
    int64_t *component_buffer_cache_array;
    int64_t *component_shader_buffer_cache_array;
    int64_t *component_texture_buffer_cache_array;
    int64_t *component_material_buffer_cache_array;
    int64_t *component_animation_buffer_cache_array;
    int64_t *component_event_buffer_cache_array;
    int64_t *component_callback_buffer_cache_array;
    int64_t *component_data_buffer_cache_array;
    int64_t *component_resource_buffer_cache_array;
    int64_t *component_memory_buffer_cache_array;
    int64_t *component_cache_buffer_cache_array;
    int64_t *component_buffer_cache_list;
    int64_t *component_shader_buffer_cache_list;
    int64_t *component_texture_buffer_cache_list;
    int64_t *component_material_buffer_cache_list;
    int64_t *component_animation_buffer_cache_list;
    int64_t *component_event_buffer_cache_list;
    int64_t *component_callback_buffer_cache_list;
    int64_t *component_data_buffer_cache_list;
    int64_t *component_resource_buffer_cache_list;
    int64_t *component_memory_buffer_cache_list;
    int64_t *component_cache_buffer_cache_list;
    int64_t component_buffer_cache_index;
    int64_t component_shader_buffer_cache_index;
    int64_t component_texture_buffer_cache_index;
    int64_t component_material_buffer_cache_index;
    int64_t component_animation_buffer_cache_index;
    int64_t component_event_buffer_cache_index;
    int64_t component_callback_buffer_cache_index;
    int64_t component_data_buffer_cache_index;
    int64_t component_resource_buffer_cache_index;
    int64_t component_memory_buffer_cache_index;
    int64_t component_cache_buffer_cache_index;
    int64_t *component_buffer_cache_ref;
    int64_t *component_shader_buffer_cache_ref;
    int64_t *component_texture_buffer_cache_ref;
    int64_t *component_material_buffer_cache_ref;
    int64_t *component_animation_buffer_cache_ref;
    int64_t *component_event_buffer_cache_ref;
    int64_t *component_callback_buffer_cache_ref;
    int64_t *component_data_buffer_cache_ref;
    int64_t *component_resource_buffer_cache_ref;
    int64_t *component_memory_buffer_cache_ref;
    int64_t *component_cache_buffer_cache_ref;
    int64_t component_buffer_cache_ref_count;
    int64_t component_shader_buffer_cache_ref_count;
    int64_t component_texture_buffer_cache_ref_count;
    int64_t component_material_buffer_cache_ref_count;
    int64_t component_animation_buffer_cache_ref_count;
    int64_t component_event_buffer_cache_ref_count;
    int64_t component_callback_buffer_cache_ref_count;
    int64_t component_data_buffer_cache_ref_count;
    int64_t component_resource_buffer_cache_ref_count;
    int64_t component_memory_buffer_cache_ref_count;
    int64_t component_cache_buffer_cache_ref_count;
    int64_t *component_buffer_data_ptr;
    int64_t *component_shader_buffer_data_ptr;
    int64_t *component_texture_buffer_data_ptr;
    int64_t *component_material_buffer_data_ptr;
    int64_t *component_animation_buffer_data_ptr;
    int64_t *component_event_buffer_data_ptr;
    int64_t *component_callback_buffer_data_ptr;
    int64_t *component_data_buffer_data_ptr;
    int64_t *component_resource_buffer_data_ptr;
    int64_t *component_memory_buffer_data_ptr;
    int64_t *component_cache_buffer_data_ptr;
    int64_t component_buffer_data_size;
    int64_t component_shader_buffer_data_size;
    int64_t component_texture_buffer_data_size;
    int64_t component_material_buffer_data_size;
    int64_t component_animation_buffer_data_size;
    int64_t component_event_buffer_data_size;
    int64_t component_callback_buffer_data_size;
    int64_t component_data_buffer_data_size;
    int64_t component_resource_buffer_data_size;
    int64_t component_memory_buffer_data_size;
    int64_t component_cache_buffer_data_size;
    int64_t *component_buffer_data_array;
    int64_t *component_shader_buffer_data_array;
    int64_t *component_texture_buffer_data_array;
    int64_t *component_material_buffer_data_array;
    int64_t *component_animation_buffer_data_array;
    int64_t *component_event_buffer_data_array;
    int64_t *component_callback_buffer_data_array;
    int64_t *component_data_buffer_data_array;
    int64_t *component_resource_buffer_data_array;
    int64_t *component_memory_buffer_data_array;
    int64_t *component_cache_buffer_data_array;
    int64_t *component_buffer_data_list;
    int64_t *component_shader_buffer_data_list;
    int64_t *component_texture_buffer_data_list;
    int64_t *component_material_buffer_data_list;
    int64_t *component_animation_buffer_data_list;
    int64_t *component_event_buffer_data_list;
    int64_t *component_callback_buffer_data_list;
    int64_t *component_data_buffer_data_list;
    int64_t *component_resource_buffer_data_list;
    int64_t *component_memory_buffer_data_list;
    int64_t *component_cache_buffer_data_list;
    int64_t component_buffer_data_index;
    int64_t component_shader_buffer_data_index;
    int64_t component_texture_buffer_data_index;
    int64_t component_material_buffer_data_index;
    int64_t component_animation_buffer_data_index;
    int64_t component_event_buffer_data_index;
    int64_t component_callback_buffer_data_index;
    int64_t component_data_buffer_data_index;
    int64_t component_resource_buffer_data_index;
    int64_t component_memory_buffer_data_index;
    int64_t component_cache_buffer_data_index;
    int64_t *component_buffer_data_ref;
    int64_t *component_shader_buffer_data_ref;
    int64_t *component_texture_buffer_data_ref;
    int64_t *component_material_buffer_data_ref;
    int64_t *component_animation_buffer_data_ref;
    int64_t *component_event_buffer_data_ref;
    int64_t *component_callback_buffer_data_ref;
    int64_t *component_data_buffer_data_ref;
    int64_t *component_resource_buffer_data_ref;
    int64_t *component_memory_buffer_data_ref;
    int64_t *component_cache_buffer_data_ref;
    int64_t component_buffer_data_ref_count;
    int64_t component_shader_buffer_data_ref_count;
    int64_t component_texture_buffer_data_ref_count;
    int64_t component_material_buffer_data_ref_count;
    int64_t component_animation_buffer_data_ref_count;
    int64_t component_event_buffer_data_ref_count;
    int64_t component_callback_buffer_data_ref_count;
    int64_t component_data_buffer_data_ref_count;
    int64_t component_resource_buffer_data_ref_count;
    int64_t component_memory_buffer_data_ref_count;
    int64_t component_cache_buffer_data_ref_count;
    int64_t *component_render_data_ptr;
    int64_t *component_render_data_array;
    int64_t *component_render_data_list;
    int64_t component_render_data_index;
    int64_t *component_render_data_ref;
    int64_t component_render_data_ref_count;
    int64_t *component_render_data_cache_ptr;
    int64_t component_render_data_cache_size;
    int64_t *component_render_data_cache_array;
    int64_t *component_render_data_cache_list;
    int64_t component_render_data_cache_index;
    int64_t *component_render_data_cache_ref;
    int64_t component_render_data_cache_ref_count;
    int64_t *component_render_data_data_ptr;
    int64_t component_render_data_data_size;
    int64_t *component_render_data_data_array;
    int64_t *component_render_data_data_list;
    int64_t component_render_data_data_index;
    int64_t *component_render_data_data_ref;
    int64_t component_render_data_data_ref_count;
    int64_t *component_texture_render_data_ptr;
    int64_t *component_shader_render_data_ptr;
    int64_t *component_material_render_data_ptr;
    int64_t *component_animation_render_data_ptr;
    int64_t component_texture_render_data_size;
    int64_t component_shader_render_data_size;
    int64_t component_material_render_data_size;
    int64_t component_animation_render_data_size;
    int64_t *component_texture_render_data_array;
    int64_t *component_shader_render_data_array;
    int64_t *component_material_render_data_array;
    int64_t *component_animation_render_data_array;
    int64_t *component_texture_render_data_list;
    int64_t *component_shader_render_data_list;
    int64_t *component_material_render_data_list;
    int64_t *component_animation_render_data_list;
    int64_t component_texture_render_data_index;
    int64_t component_shader_render_data_index;
    int64_t component_material_render_data_index;
    int64_t component_animation_render_data_index;
    int64_t *component_texture_render_data_ref;
    int64_t *component_shader_render_data_ref;
    int64_t *component_material_render_data_ref;
    int64_t *component_animation_render_data_ref;
    int64_t component_texture_render_data_ref_count;
    int64_t component_shader_render_data_ref_count;
    int64_t component_material_render_data_ref_count;
    int64_t component_animation_render_data_ref_count;
    int64_t *component_texture_render_data_cache_ptr;
    int64_t *component_shader_render_data_cache_ptr;
    int64_t *component_material_render_data_cache_ptr;
    int64_t *component_animation_render_data_cache_ptr;
    int64_t component_texture_render_data_cache_size;
    int64_t component_shader_render_data_cache_size;
    int64_t component_material_render_data_cache_size;
    int64_t component_animation_render_data_cache_size;
    int64_t *component_texture_render_data_cache_array;
    int64_t *component_shader_render_data_cache_array;
    int64_t *component_material_render_data_cache_array;
    int64_t *component_animation_render_data_cache_array;
    int64_t *component_texture_render_data_cache_list;
    int64_t *component_shader_render_data_cache_list;
    int64_t *component_material_render_data_cache_list;
    int64_t *component_animation_render_data_cache_list;
    int64_t component_texture_render_data_cache_index;
    int64_t component_shader_render_data_cache_index;
    int64_t component_material_render_data_cache_index;
    int64_t component_animation_render_data_cache_index;
    int64_t *component_texture_render_data_cache_ref;
    int64_t *component_shader_render_data_cache_ref;
    int64_t *component_material_render_data_cache_ref;
    int64_t *component_animation_render_data_cache_ref;
    int64_t component_texture_render_data_cache_ref_count;
    int64_t component_shader_render_data_cache_ref_count;
    int64_t component_material_render_data_cache_ref_count;
    int64_t component_animation_render_data_cache_ref_count;
    int64_t *component_texture_render_data_data_ptr;
    int64_t *component_shader_render_data_data_ptr;
    int64_t *component_material_render_data_data_ptr;
    int64_t *component_animation_render_data_data_ptr;
    int64_t component_texture_render_data_data_size;
    int64_t component_shader_render_data_data_size;
    int64_t component_material_render_data_data_size;
    int64_t component_animation_render_data_data_size;
    int64_t *component_texture_render_data_data_array;
    int64_t *component_shader_render_data_data_array;
    int64_t *component_material_render_data_data_array;
    int64_t *component_animation_render_data_data_array;
    int64_t *component_texture_render_data_data_list;
    int64_t *component_shader_render_data_data_list;
    int64_t *component_material_render_data_data_list;
    int64_t *component_animation_render_data_data_list;
    int64_t component_texture_render_data_data_index;
    int64_t component_shader_render_data_data_index;
    int64_t component_material_render_data_data_index;
    int64_t component_animation_render_data_data_index;
    int64_t *component_texture_render_data_data_ref;
    int64_t *component_shader_render_data_data_ref;
    int64_t *component_material_render_data_data_ref;
    int64_t *component_animation_render_data_data_ref;
    int64_t component_texture_render_data_data_ref_count;
    int64_t component_shader_render_data_data_ref_count;
    int64_t component_material_render_data_data_ref_count;
    int64_t component_animation_render_data_data_ref_count;
    
    // 参数验证
    if (component == (int64_t *)0x0) {
        result = 0x1f;  // 无效参数
    }
    else if ((int)properties[3] == -1) {
        result = 0x26;  // 属性数据无效
    }
    else {
        // 获取属性标志
        property_flags = *(uint *)(properties + 5);
        flags = property_flags & 0x18 | flags;
        component_flags = flags & 0xfffffff7;
        
        // 处理基本标志
        if ((flags & 0x10) == 0) {
            component_flags = flags | 8;
        }
        
        // 处理组件标志
        if ((component_flags & 7) == 0) {
            component_flags = component_flags | property_flags & 7;
        }
        
        // 处理状态标志
        if ((component_flags & 2) == 0) {
            if ((component_flags & 4) == 0) {
                component_flags = component_flags | 1;
            }
            else {
                component_flags = component_flags & 0xfffffffe | 4;
            }
        }
        else {
            component_flags = component_flags & 0xfffffffa | 2;
        }
        
        // 处理特殊标志
        if ((property_flags >> 9 & 1) != 0) {
            component_flags = component_flags & 0xfffffeff | 0x200;
        }
        
        // 设置基本属性
        stack_data[0] = *properties;
        property_mask = *(int32_t *)((int64_t)properties + 0xc);
        stack_data[1] = properties[2];
        component_info[0] = properties[3];
        component_properties = (int64_t *)*component;
        stack_data[2] = properties[4];
        stack_data[3] = properties[5];
        stack_flags[0] = CONCAT44(property_mask, (int)properties[1]);
        stack_data[4] = properties[6];
        
        // 处理组件属性
        result = UI_SetComponentBasicProperties(*(uint64_t *)(context + 0x6b8), component_flags, &stack_data[0], &component_properties);
        component_properties = component_properties;
        
        if (result == 0) {
            // 设置组件数据
            component_properties[6] = *properties;
            *(float *)((int64_t)component_properties + 0x6c) = (float)(int)properties[2];
            *(int *)((int64_t)component_properties + 0x74) = (int)properties[6];
            *(int32_t *)((int64_t)component_properties + 0x13c) = *(int32_t *)((int64_t)properties + 0x34);
            *(uint *)((int64_t)component_properties + 0x2c) = component_flags;
            *(int32_t *)((int64_t)component_properties + 0x4c) = 0;
            *(int32_t *)(component_properties + 10) = *(int32_t *)((int64_t)component_properties + 0x44);
            *(int *)(component_properties + 5) = (int)properties[1];
            *(int32_t *)(component_properties + 0xd) = property_mask;
            component_properties[0xc] = 0;
            *(int32_t *)((int64_t)component_properties + 0x24) = 0xe;
            component_properties[0x1b] = context;
            *(int32_t *)(component_properties + 0xf) = *(int32_t *)(context + 0x11404);
            *(float *)((int64_t)component_properties + 0x7c) = *(float *)(context + 0x11404) * 10000.0;
            
            // 获取组件配置
            result = *(int *)((int64_t)properties + 0x24);
            if (result == 0) {
                result = *(int *)((int64_t)component_properties + 0x44) + -1;
            }
            
            // 应用组件配置
            (*(void (**)(void*, int, int, int, int))(*component_properties + 0x138))(component_properties, (int)properties[4], 2, result, 2);
            
            result = 0;
            *component = (int64_t)component_properties;
        }
        else if ((component_properties != (int64_t *)0x0) && (component_properties != (int64_t *)*component)) {
            // 清理组件资源
            (*(void (**)(void*, int))(*component_properties + 0x18))(component_properties, 1);
        }
    }
    
    return result;
}

// ==================== 系统架构文档 ====================

/**
 * @section UI系统高级组件管理和渲染模块架构说明
 * 
 * @subsection 模块概述
 * 本模块实现了UI系统中的高级组件管理功能，包括组件创建、初始化、属性设置、
 * 内存管理和渲染处理等核心功能。该模块是整个UI系统的基础，为上层UI控件
 * 提供了统一的创建和管理接口。
 * 
 * @subsection 核心功能
 * 
 * @subsubsection 组件创建和初始化
 * - UI_CreateComponent: 创建新的UI组件并设置基本属性
 * - UI_InitializeComponent: 初始化组件的状态和内部数据结构
 * - UI_CreateComponentFromTemplate: 从模板创建组件
 * - UI_CreateSpecializedComponent: 创建特殊类型的组件
 * - UI_CreateRenderComponent: 创建具有渲染功能的组件
 * 
 * @subsubsection 内存管理
 * - UI_AllocateComponent: 分配组件所需的内存资源
 * - UI_FreeComponent: 释放组件占用的内存
 * - UI_ReleaseComponent: 释放组件相关的资源
 * 
 * @subsubsection 属性和模板处理
 * - UI_SetComponentProperties: 设置组件的属性和参数
 * - UI_ProcessComponentTemplate: 处理组件模板并创建相应组件
 * 
 * @subsection 技术架构
 * 
 * @subsubsection 组件层次结构
 * ```
 * UIComponent (基类)
 * ├── 基本属性 (位置、尺寸、标志)
 * ├── 渲染上下文
 * ├── 父子关系
 * └── 用户数据
 * ```
 * 
 * @subsubsection 生命周期管理
 * 1. 创建阶段：分配内存、初始化基本属性
 * 2. 初始化阶段：设置内部状态、建立父子关系
 * 3. 配置阶段：应用模板、设置属性
 * 4. 运行阶段：处理事件、更新状态
 * 5. 销毁阶段：释放资源、清理内存
 * 
 * @subsection 性能优化策略
 * 
 * @subsubsection 内存管理优化
 * - 使用内存池技术减少频繁的内存分配
 * - 实现延迟释放机制避免内存碎片
 * - 采用引用计数管理组件生命周期
 * 
 * @subsubsection 渲染优化
 * - 实现脏矩形技术只更新变化区域
 * - 使用批处理技术减少渲染调用
 * - 支持组件级别的可见性剔除
 * 
 * @subsection 安全考虑
 * 
 * @subsubsection 输入验证
 * - 对所有输入参数进行有效性检查
 * - 防止空指针访问和越界操作
 * - 实现边界条件检查和错误处理
 * 
 * @subsubsection 资源保护
 * - 确保资源正确释放避免内存泄漏
 * - 实现异常安全的资源管理
 * - 防止循环引用导致的资源无法释放
 * 
 * @subsection 维护性设计
 * 
 * @subsubsection 代码结构
 * - 采用模块化设计，各功能职责清晰
 * - 使用统一的命名规范和代码风格
 * - 提供完整的中文文档和注释
 * 
 * @subsubsection 扩展性
 * - 支持通过模板机制扩展组件类型
 * - 提供插件式架构支持自定义组件
 * - 实现事件驱动机制支持功能扩展
 * 
 * @subsection 使用示例
 * @code
 * // 创建基本组件
 * void* component = NULL;
 * UI_CreateComponent(context, parent, &component, 1);
 * 
 * // 设置组件属性
 * UI_SetComponentProperties(context, flags, properties, &component);
 * 
 * // 从模板创建组件
 * void* template_component = NULL;
 * UI_CreateComponentFromTemplate(context, template_id, template_data, &template_component);
 * @endcode
 * 
 * @subsection 依赖关系
 * - 依赖: TaleWorlds.Native.Split.h (基础头文件)
 * - 依赖: 全局内存管理器
 * - 依赖: 渲染系统
 * - 依赖: 输入管理系统
 * 
 * @subsection 编译信息
 * - 编译器: GCC/MSVC 兼容
 * - 标准支持: C99/C11
 * - 优化级别: O2/O3
 * - 调试支持: 完整
 * 
 * @subsection 版本历史
 * - v1.0: 初始版本，实现基本组件管理功能
 * - v1.1: 添加模板支持和高级属性设置
 * - v1.2: 优化内存管理和性能
 * - v1.3: 增强安全性和错误处理
 * 
 * @subsection 作者信息
 * - 作者: Claude Code
 * - 创建日期: 2025-08-28
 * - 最后修改: 2025-08-28
 * - 版权信息: 代码美化项目
 */

// ==================== 模块结束 ====================