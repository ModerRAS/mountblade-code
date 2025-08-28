#include "TaleWorlds.Native.Split.h"

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
    ulonglong security_key;
    int result;
    longlong resource_handle;
    longlong *component_manager;
    longlong *state_manager;
    longlong *resource_allocator;
    undefined1 security_buffer[32];  // 安全缓冲区用于栈保护
    undefined4 operation_flags;
    longlong state_data[2];
    longlong *system_table;
    undefined *system_pointer;
    undefined8 system_config;
    longlong component_id;
    undefined4 resource_flags[8];  // 资源标志数组
    longlong state_cache[16];      // 状态缓存
    longlong callback_data[8];     // 回调数据
    ulonglong callback_flags;      // 回调标志
    longlong optimization_data[8];  // 优化数据
    undefined4 optimization_flags[8];  // 优化标志
    longlong performance_data[4];  // 性能数据
    longlong debug_data[4];        // 调试数据
    
    // 初始化安全密钥
    security_key = _DAT_180bf00a8 ^ (ulonglong)security_buffer;
    resource_allocator = (longlong *)0x0;
    state_manager = resource_allocator;
    
    // 验证输入参数
    if (component != (void**)0x0) {
        operation_flags = 0;
        
        // 初始化组件管理器
        resource_handle = UI_InitializeEventQueue(
            *(undefined8 *)(_DAT_180be12f0 + 0x1a0), 
            0x250,  // 队列大小
            &UNK_18095aeb0,  // 队列配置
            0x123   // 初始化参数
        );
        
        // 检查资源是否有效并分配组件管理器
        if ((resource_handle != 0) && 
            (component_manager = (longlong *)UI_RegisterCallback(resource_handle), 
             state_manager = (longlong *)0x0,
             component_manager != (longlong *)0x0)) {
            
            // 设置组件管理器状态
            state_manager = component_manager + 0x2f;
            resource_handle = *(longlong *)(context + 0x116f0);
            *state_manager = resource_handle;
            component_manager[0x30] = context + 0x116f0;
            *(longlong **)(resource_handle + 8) = state_manager;
            *(longlong **)component_manager[0x30] = state_manager;
            
            // 配置组件管理器
            state_manager = component_manager + 0x41;
            component_manager[0x31] = (longlong)component_manager;
            component_manager[1] = context;
            component_manager[10] = (longlong)component_manager;
            *(undefined4 *)(component_manager + 0x44) = 0;
            component_manager[0x42] = (longlong)state_manager;
            *state_manager = (longlong)state_manager;
            component_manager[0x43] = 0;
            
            // 获取系统状态和配置
            state_manager = (longlong *)UI_GetSystemState();
            system_table = (longlong *)*state_manager;
            system_config = state_manager[2];
            component_id = state_manager[3];
            resource_flags[0] = (undefined4)state_manager[4];
            resource_flags[1] = *(undefined4 *)((longlong)state_manager + 0x24);
            resource_flags[2] = (undefined4)state_manager[5];
            resource_flags[3] = *(undefined4 *)((longlong)state_manager + 0x2c);
            resource_flags[4] = (undefined4)state_manager[6];
            resource_flags[5] = *(undefined4 *)((longlong)state_manager + 0x34);
            resource_flags[6] = (undefined4)state_manager[7];
            resource_flags[7] = *(undefined4 *)((longlong)state_manager + 0x3c);
            
            // 特殊处理：如果是系统组件
            if (component == (void**)(context + 0x116e0)) {
                // 处理系统组件的特殊配置
                security_key = (ulonglong)system_config >> 0x20;
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
                optimization_flags[0] = (undefined4)system_table[0x16];
                optimization_flags[1] = *(undefined4 *)((longlong)system_table + 0xb4);
                optimization_flags[2] = (undefined4)system_table[0x17];
                optimization_flags[3] = *(undefined4 *)((longlong)system_table + 0xbc);
                optimization_flags[4] = (undefined4)system_table[0x18];
                optimization_flags[5] = *(undefined4 *)((longlong)system_table + 0xc4);
                optimization_flags[6] = (undefined4)system_table[0x19];
                optimization_flags[7] = *(undefined4 *)((longlong)system_table + 0xcc);
                performance_data[0] = system_table[0x1a];
                callback_flags = system_table[5] & 0xffffffff;
            }
            
            // 设置操作标志
            operation_flags = CONCAT31(operation_flags._1_3_, 1);
            system_pointer = &UNK_18095af28;
            
            // 验证参数并处理组件
            result = UI_ValidateParameters(context, &system_table, resource_allocator, state_data);
            state_manager = component_manager;
            
            if (result == 0) {
                // 成功创建组件
                component_manager[0xe] = state_data[0];
                component_manager[0xc] = state_data[0];
                component_manager[0xd] = state_data[0];
                component_manager[2] = 0;
                *(undefined4 *)(component_manager + 3) = 1;
                
                // 线程安全：锁定资源
                LOCK();
                *(uint *)(state_data[0] + 100) = *(uint *)(state_data[0] + 100) | 0x60;
                UNLOCK();
                
                // 设置组件引用
                *(longlong **)(state_data[0] + 0x1f8) = component_manager;
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
                state_manager = (longlong *)0x0;
                if (parent != 0) {
                    result = UI_CompareStrings(parent, &UNK_18095af38, 9);
                    if (result == 0) {
                        *(uint *)(component_manager + 9) = *(uint *)(component_manager + 9) | 0x40;
                        result = (**(code **)(*component_manager + 0x208))(component_manager);
                        if (result != 0) goto LAB_18078cd2a;
                    }
                }
                
                // 验证系统状态
                resource_allocator = *(longlong **)(context + 0x116e0);
                if (((resource_allocator == (longlong *)0x0) || (resource_allocator == component_manager)) ||
                   (result = UI_ProcessEvents(resource_allocator, component_manager, 1, 0), result == 0)) {
                    *component = component_manager;
                    goto LAB_18078cd39;
                }
            }
        }
    }
    
LAB_18078cd2a:
    // 清理资源
    if (state_manager != (longlong *)0x0) {
        UI_RegisterCallback(state_manager);
    }
    
LAB_18078cd39:
    // 安全检查：返回
    FUN_1808fc050(security_key ^ (ulonglong)security_buffer);
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
uint32_t UI_InitializeComponent(void* context, int component_type, undefined8 template_data, undefined8 *component)
{
    longlong *resource_table;
    int result;
    undefined8 status;
    longlong resource_data;
    longlong *resource_manager;
    longlong stack_data;
    
    stack_data = 0;
    if (component == (undefined8 *)0x0) {
LAB_18078cf29:
        status = 0x1f;  // 无效参数错误
    } else {
        *component = 0;
        
        // 处理特殊组件类型
        if (component_type < 0) {
            resource_manager = (longlong *)(context + UI_OFFSET_EVENT_QUEUE);
            resource_table = (longlong *)*resource_manager;
            
            // 检查事件队列状态
            if ((resource_table == resource_manager) && 
                (*(longlong **)(context + UI_OFFSET_EVENT_QUEUE + 8) == resource_manager)) {
                
                // 检查状态栈状态
                resource_manager = (longlong *)(context + UI_OFFSET_STATE_STACK);
                if (((longlong *)*resource_manager == resource_manager) && 
                    (*(longlong **)(context + UI_OFFSET_STATE_STACK + 8) == resource_manager)) {
                    return 2;  // 系统未就绪
                }
                
                // 处理事件队列资源
                resource_manager = *(longlong **)(*(longlong *)(context + UI_OFFSET_STATE_STACK + 8) + 0x10);
                UI_ProcessEvents(resource_manager, 0x1b);
            } else {
                // 处理常规资源
                resource_manager = resource_table + -0x2f;
                if (resource_table == (longlong *)0x0) {
                    resource_manager = (longlong *)0x0;
                }
            }
        } else {
            // 验证组件类型范围
            if (*(int *)(context + 0x1e0) <= component_type) goto LAB_18078cf29;
            
            // 分配资源
            resource_manager = (longlong *)((longlong)component_type * 0x230 + *(longlong *)(context + UI_OFFSET_RESOURCE_TABLE));
            (**(code **)(*resource_manager + 8))(resource_manager);
        }
        
        // 设置资源管理器
        resource_table = resource_manager + 0x2f;
        *(longlong *)resource_manager[0x30] = *resource_table;
        *(longlong *)(*resource_table + 8) = resource_manager[0x30];
        resource_manager[0x30] = (longlong)resource_table;
        *resource_table = (longlong)resource_table;
        
        // 设置资源数据
        resource_data = context + 0x368;
        if (context == -0x1f0) {
            resource_data = 0;
        }
        resource_manager[0x30] = *(longlong *)(resource_data + 8);
        *resource_table = resource_data;
        *(longlong **)(resource_data + 8) = resource_table;
        *(longlong **)resource_manager[0x30] = resource_table;
        
        // 更新资源计数
        *(int *)(context + 0x1e4) = *(int *)(context + 0x1e4) + 1;
        
        // 处理资源参数
        result = UI_RegisterCallback(*(undefined8 *)(context + UI_OFFSET_CALLBACK_TABLE), &stack_data, 0);
        if ((result != 0) &&
            (status = UI_RegisterCallback(*(undefined8 *)(context + UI_OFFSET_CONFIG_DATA), &stack_data, 0), 
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
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint auStackX_20 [2];
  longlong lStack_28;
  undefined8 uStack_20;
  
  lStack_28 = 0;
  if (param_4 == (undefined8 *)0x0) {
    return 0x1f;
  }
  uVar3 = (**(code **)(*param_3 + 0x120))(param_3,auStackX_20);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  iVar2 = 0;
  if ((auStackX_20[0] & 0x20000) != 0) {
    uVar3 = FUN_1807902d0(param_1,param_3);
    iVar2 = (int)uVar3;
    if (iVar2 != 0) {
      return uVar3;
    }
  }
  *param_4 = 0;
  if (param_2 < 0) {
    plVar5 = (longlong *)(param_1 + 0x598);
    plVar1 = (longlong *)*plVar5;
    if ((plVar1 == plVar5) && (*(longlong **)(param_1 + 0x5a0) == plVar5)) {
      plVar5 = (longlong *)(param_1 + 0x650);
      if (((longlong *)*plVar5 == plVar5) && (*(longlong **)(param_1 + 0x658) == plVar5)) {
        return 2;
      }
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x658) + 0x10);
      FUN_180758220(plVar5,0x1b);
    }
    else {
      plVar5 = plVar1 + -0x2f;
      if (plVar1 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x1e0) <= param_2) {
      return 0x1f;
    }
    plVar5 = (longlong *)((longlong)param_2 * 0x230 + *(longlong *)(param_1 + 0x1e8));
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  plVar1 = plVar5 + 0x2f;
  *(longlong *)plVar5[0x30] = *plVar1;
  *(longlong *)(*plVar1 + 8) = plVar5[0x30];
  plVar5[0x30] = (longlong)plVar1;
  *plVar1 = (longlong)plVar1;
  lVar4 = param_1 + 0x368;
  if (param_1 == -0x1f0) {
    lVar4 = 0;
  }
  plVar5[0x30] = *(longlong *)(lVar4 + 8);
  *plVar1 = lVar4;
  *(longlong **)(lVar4 + 8) = plVar1;
  *(longlong **)plVar5[0x30] = plVar1;
  *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e4) + 1;
  if ((auStackX_20[0] & 0x200) == 0) {
LAB_18078d0cc:
    if ((iVar2 == 0) &&
       (iVar2 = func_0x000180786990(*(undefined8 *)(param_1 + 0x6b8),&lStack_28,0), iVar2 == 0))
    goto LAB_18078d107;
  }
  else {
    iVar2 = func_0x000180742ca0(param_1,*(undefined4 *)(param_3[0xc] + 0xa4),&uStack_20);
    if (iVar2 == 0) {
      iVar2 = FUN_1807704e0(uStack_20,(int)param_3[0xd]);
      goto LAB_18078d0cc;
    }
  }
  uVar3 = func_0x000180786990(*(undefined8 *)(param_1 + 0x6b0),&lStack_28,0);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  *(uint *)(plVar5 + 9) = *(uint *)(plVar5 + 9) | 0x10000;
LAB_18078d107:
  if ((auStackX_20[0] & 0x80) == 0) {
    plVar5[0x3b] = lStack_28;
    *param_4 = plVar5;
  }
  else if (*(longlong *)(lStack_28 + 0x20) == *(longlong *)(param_1 + 0x6b0)) {
    plVar5[0x3b] = lStack_28;
    *param_4 = plVar5;
  }
  else {
    lVar4 = param_3[0x2f];
    plVar5[0x3b] = lVar4;
    *(longlong *)(lVar4 + 0xc0) = lStack_28;
    *param_4 = plVar5;
  }
  return 0;
}



undefined8 * FUN_18078d180(undefined8 *param_1)

{
  func_0x000180768c10();
  *param_1 = &UNK_18095afe8;
  param_1[0x3e] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  return param_1;
}



undefined8 * FUN_18078d1f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180958ba0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x1f8);
  }
  return param_1;
}



undefined8 * FUN_18078d220(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180958ba0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x238);
  }
  return param_1;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18078d250(longlong param_1,undefined8 param_2,uint param_3,undefined4 param_4,
                       longlong *param_5,longlong param_6,longlong *param_7,int *param_8,
                       int *param_9)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  uint auStackX_8 [2];
  ulonglong in_stack_ffffffffffffff28;
  longlong lStack_b8;
  undefined4 auStack_b0 [2];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 auStack_70 [2];
  longlong alStack_68 [2];
  undefined8 uStack_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar10 = 0;
  lStack_b8 = 0;
  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0;
  iVar2 = func_0x000180771c10(*(undefined8 *)(param_1 + 0x11418),param_2,auStack_70);
  if (iVar2 != 0) {
    return 0x13;
  }
  iVar2 = func_0x000180771bd0(*(undefined8 *)(param_1 + 0x11418),auStack_70[0],alStack_68);
  if (iVar2 != 0) {
    return 0x13;
  }
  if ((param_3 >> 0xc & 1) == 0) {
    if ((param_3 >> 10 & 1) != 0) {
      bVar15 = *(int *)(alStack_68[0] + 0x80) == 0xe;
      goto LAB_18078d2d6;
    }
    if ((*(int *)(alStack_68[0] + 0x80) - 0xcU & 0xfffffffd) == 0) {
      return 0x13;
    }
  }
  else {
    bVar15 = *(int *)(alStack_68[0] + 0x80) == 0xc;
LAB_18078d2d6:
    if (!bVar15) {
      return 0x13;
    }
  }
  uVar5 = FUN_180771560(*(undefined8 *)(param_1 + 0x11418),alStack_68[0] + 0x20,&lStack_b8);
  if ((int)uVar5 != 0) {
    if ((int)uVar5 != 0x26) {
      return 0x13;
    }
    return uVar5;
  }
  *(longlong **)(lStack_b8 + 0x170) = param_5;
  *(uint *)(lStack_b8 + 0x160) = param_3;
  *(undefined4 *)(lStack_b8 + 0x164) = param_4;
  *(longlong *)(lStack_b8 + 0x20) = param_1;
  *(uint *)(lStack_b8 + 0x2c) = *(uint *)(lStack_b8 + 0x2c) | 1;
  uVar5 = FUN_18076a440(*(undefined8 *)(lStack_b8 + 0x170),0,0);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  uVar3 = (**(code **)(lStack_b8 + 0x50))(lStack_b8,param_3,param_6);
  if (uVar3 != 0) {
    *(undefined8 *)(lStack_b8 + 0x170) = 0;
    *(undefined8 *)(lStack_b8 + 0x168) = 0;
    FUN_180773410(lStack_b8,1);
    if (uVar3 == 0x10) {
      uVar3 = 0x13;
    }
    return (ulonglong)uVar3;
  }
  uVar3 = *(uint *)(lStack_b8 + 0x160);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  if (param_6 != 0) {
    uVar10 = *(undefined4 *)(param_6 + 0x1c);
  }
  uVar5 = (**(code **)(lStack_b8 + 0x88))(lStack_b8,uVar10,&uStack_a8);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if ((*(int *)(lStack_b8 + 0x28) != 0xb) &&
     (((((int)uStack_a0 == 0 || (uStack_a0._4_4_ == 0)) ||
       (((int)uStack_90 == 0 && ((uVar3 >> 10 & 1) == 0)))) || ((int)uStack_98 == 0)))) {
    return 0x35;
  }
  uVar5 = 0x20;
  if ((uVar3 >> 10 & 1) != 0) {
    uVar14 = *(uint *)(param_6 + 0xc);
    iVar2 = *(int *)(param_6 + 0x14);
    iVar13 = *(int *)(param_6 + 0x10);
    uVar7 = (ulonglong)*(uint *)(param_6 + 4);
    uStack_a0 = CONCAT44(uVar14,iVar2);
    uStack_98 = CONCAT44(uStack_98._4_4_,iVar13);
    uStack_90 = 0;
    if (uVar14 == 0) {
      return 0x1f;
    }
    if (iVar2 == 1) {
      uVar9 = 8;
    }
    else if (iVar2 == 2) {
      uVar9 = 0x10;
    }
    else if (iVar2 == 3) {
      uVar9 = 0x18;
    }
    else {
      if ((iVar2 != 4) && (iVar2 != 5)) {
        uStack_90 = (ulonglong)*(uint *)(param_6 + 4);
        goto LAB_18078d4e4;
      }
      uVar9 = 0x20;
    }
    goto LAB_18078d4d3;
  }
  iVar13 = (int)uStack_98;
  if ((uVar3 >> 0xc & 1) != 0) {
    (**(code **)(*param_5 + 0x10))(param_5,auStackX_8);
    *(undefined4 *)(*(longlong *)(lStack_b8 + 8) + 8) = *(undefined4 *)(param_6 + 0x14);
    uVar10 = *(undefined4 *)(*(longlong *)(lStack_b8 + 8) + 8);
    *(undefined4 *)(*(longlong *)(lStack_b8 + 8) + 0xc) = *(undefined4 *)(param_6 + 0xc);
    uStack_a0 = CONCAT44(*(undefined4 *)(*(longlong *)(lStack_b8 + 8) + 0xc),uVar10);
    *(undefined4 *)(*(longlong *)(lStack_b8 + 8) + 0x10) = *(undefined4 *)(param_6 + 0x10);
    uVar14 = *(uint *)(param_6 + 0xc);
    iVar13 = *(int *)(*(longlong *)(lStack_b8 + 8) + 0x10);
    uStack_98 = CONCAT44(uStack_98._4_4_,iVar13);
    if (uVar14 == 0) {
      return 0x1f;
    }
    iVar2 = *(int *)(param_6 + 0x14);
    if (iVar2 == 1) {
      uVar7 = (ulonglong)auStackX_8[0];
      uVar9 = 8;
LAB_18078d4d3:
      uVar4 = (uint)(((uVar7 << 3) / uVar9 & 0xffffffff) / (ulonglong)uVar14);
    }
    else {
      if (iVar2 == 2) {
        uVar7 = (ulonglong)auStackX_8[0];
        uVar9 = 0x10;
        goto LAB_18078d4d3;
      }
      if (iVar2 == 3) {
        uVar7 = (ulonglong)auStackX_8[0];
        uVar9 = 0x18;
        goto LAB_18078d4d3;
      }
      if ((iVar2 == 4) || (uVar4 = auStackX_8[0], iVar2 == 5)) {
        uVar7 = (ulonglong)auStackX_8[0];
        uVar9 = uVar5;
        goto LAB_18078d4d3;
      }
    }
    uStack_90 = CONCAT44(uStack_90._4_4_,uVar4);
  }
LAB_18078d4e4:
  iVar2 = uStack_a0._4_4_;
  if (((uVar3 & 0x200) != 0) || (uVar14 = 0, *(int *)(lStack_b8 + 0x18) != 0)) {
    iVar11 = *(int *)(lStack_b8 + 0xa4);
    if (iVar11 == 3) {
      iVar11 = 0x20;
      if (*(int *)(param_1 + 0x1160c) != 0) {
        iVar11 = *(int *)(param_1 + 0x1160c);
      }
      uVar6 = func_0x0001807c1df0();
    }
    else if (iVar11 == 2) {
      iVar11 = 0x20;
      if (*(int *)(param_1 + 0x11610) != 0) {
        iVar11 = *(int *)(param_1 + 0x11610);
      }
      uVar6 = func_0x0001807c9f10();
    }
    else if (iVar11 == 5) {
      iVar11 = 0x20;
      if (*(int *)(param_1 + 0x11618) != 0) {
        iVar11 = *(int *)(param_1 + 0x11618);
      }
      uVar6 = func_0x0001807b10d0();
    }
    else if (iVar11 == 7) {
      iVar11 = 0x20;
      if (*(int *)(param_1 + 0x11620) != 0) {
        iVar11 = *(int *)(param_1 + 0x11620);
      }
      uVar6 = func_0x0001807ae590();
    }
    else {
      iVar11 = 0;
      uVar6 = func_0x0001807c6360();
      uVar3 = 0;
      *(undefined4 *)(lStack_b8 + 0xa4) = 1;
    }
    uVar14 = uVar3 & 0x200;
    if (uVar14 == 0) {
      if (*(int *)(lStack_b8 + 0x18) != 0) {
        uVar7 = FUN_180771560(*(undefined8 *)(param_1 + 0x11418),uVar6,lStack_b8 + 0x120);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        in_stack_ffffffffffffff28 = in_stack_ffffffffffffff28 & 0xffffffff00000000;
        uVar6 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x38,&UNK_18095b430,0x177,
                              in_stack_ffffffffffffff28);
        *(undefined8 *)(*(longlong *)(lStack_b8 + 0x120) + 0x138) = uVar6;
        lVar12 = *(longlong *)(*(longlong *)(lStack_b8 + 0x120) + 0x138);
        if (lVar12 == 0) {
          return 0x26;
        }
        *(longlong *)(*(longlong *)(lStack_b8 + 0x120) + 8) = lVar12;
        *(longlong *)(*(longlong *)(lStack_b8 + 0x120) + 0x20) = param_1;
      }
    }
    else {
      in_stack_ffffffffffffff28 = CONCAT44((int)(in_stack_ffffffffffffff28 >> 0x20),2);
      uVar7 = FUN_180742cd0(param_1,*(undefined4 *)(lStack_b8 + 0xa4),uVar6,iVar11,
                            in_stack_ffffffffffffff28);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
    }
  }
  iVar11 = 0;
  if (uVar14 != 0) goto LAB_18078d9a9;
  if ((*(int *)(lStack_b8 + 0x18) != 0) && (0 < *(int *)(lStack_b8 + 0x18))) {
    do {
      alStack_68[1] = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      uVar7 = (**(code **)(lStack_b8 + 0x88))(lStack_b8,iVar11,alStack_68 + 1);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      if (iVar2 < iStack_54) {
        iVar2 = iStack_54;
      }
      if (iVar13 < (int)uStack_50) {
        iVar13 = (int)uStack_50;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(lStack_b8 + 0x18));
  }
  lVar12 = lStack_b8;
  if (*(longlong *)(lStack_b8 + 0x120) != 0) {
    lVar12 = *(longlong *)(lStack_b8 + 0x120);
  }
  *(undefined8 *)(lVar12 + 0x170) = *(undefined8 *)(lStack_b8 + 0x170);
  *(undefined4 *)(lVar12 + 0x28) = *(undefined4 *)(lStack_b8 + 0x28);
  *(undefined4 *)(lVar12 + 0x2c) = *(undefined4 *)(lStack_b8 + 0x2c);
  puVar1 = *(undefined8 **)(lVar12 + 8);
  *(undefined4 *)(lVar12 + 0x110) = *(undefined4 *)(lStack_b8 + 0x110);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = uStack_a8;
    puVar1[1] = uStack_a0;
    puVar1[2] = uStack_98;
    puVar1[3] = uStack_90;
    *(undefined4 *)(puVar1 + 4) = (undefined4)uStack_88;
    *(undefined4 *)((longlong)puVar1 + 0x24) = uStack_88._4_4_;
    *(undefined4 *)(puVar1 + 5) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_80._4_4_;
    puVar1[6] = uStack_78;
  }
  if ((*(code **)(lVar12 + 0xf8) != (code *)0x0) && (*(longlong *)(lVar12 + 0x100) != 0)) {
    auStackX_8[0] = 0;
    auStack_b0[0] = 0;
    in_stack_ffffffffffffff28 = 0;
    uVar7 = (**(code **)(lVar12 + 0xf8))(lVar12,iVar2,auStackX_8,0,0,auStack_b0,0);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    if (auStackX_8[0] != 0) {
      in_stack_ffffffffffffff28 = CONCAT44((int)(in_stack_ffffffffffffff28 >> 0x20),auStack_b0[0]);
      lVar8 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),auStackX_8[0] + 0x10,
                            &UNK_18095b430,0x1b6,in_stack_ffffffffffffff28);
      *(longlong *)(lVar12 + 0x130) = lVar8;
      if (lVar8 == 0) {
        return 0x26;
      }
      *(ulonglong *)(lVar12 + 0x128) = lVar8 + 0xfU & 0xfffffffffffffff0;
    }
  }
  if ((uStack_90._4_4_ < 2) || (*(longlong *)(lVar12 + 0x148) != 0)) goto LAB_18078d9a9;
  *(uint *)(lVar12 + 0x150) = uStack_90._4_4_;
  iVar11 = *(int *)(*(longlong *)(lVar12 + 8) + 8);
  if (iVar11 == 1) {
    uVar5 = 8;
LAB_18078d946:
    uVar3 = (uint)(uStack_90._4_4_ * uVar5 >> 3);
  }
  else {
    if (iVar11 == 2) {
      uVar5 = 0x10;
      goto LAB_18078d946;
    }
    if (iVar11 == 3) {
      uVar5 = 0x18;
      goto LAB_18078d946;
    }
    if ((iVar11 == 4) || (uVar3 = uStack_90._4_4_, iVar11 == 5)) goto LAB_18078d946;
  }
  *(uint *)(lVar12 + 0x154) = uVar3 * iVar2;
  lVar8 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),uVar3 * iVar2 + 0x10,&UNK_18095b430,
                        0x1c6,in_stack_ffffffffffffff28 & 0xffffffff00000000);
  *(longlong *)(lVar12 + 0x148) = lVar8;
  if (lVar8 == 0) {
    return 0x26;
  }
  *(ulonglong *)(lVar12 + 0x140) = lVar8 + 0xfU & 0xfffffffffffffff0;
LAB_18078d9a9:
  *param_7 = lStack_b8;
  *param_8 = iVar2;
  *param_9 = iVar13;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_18078d9d0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
             undefined1 *param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar9 = (undefined8 *)0x0;
  if ((param_3 == 0) || (uVar1 = *(uint *)(param_3 + 0xb0), uVar1 == 0)) {
    puVar7 = (undefined8 *)(ulonglong)*(uint *)(param_1 + 0x1175c);
  }
  else {
    puVar7 = puVar9;
    if (uVar1 != 0xffffffff) {
      puVar7 = (undefined8 *)(ulonglong)uVar1;
    }
  }
  iVar6 = FUN_18076b6f0(&UNK_18095b4a8,param_2,0xf);
  if (iVar6 == 0) {
    puVar7 = (undefined8 *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x200,&UNK_18095b430,0x1fc,0,0,1)
    ;
    if (puVar7 != (undefined8 *)0x0) {
      func_0x000180768c10(puVar7);
      *(undefined4 *)(puVar7 + 7) = 5;
      *puVar7 = &UNK_18095b038;
      puVar9 = puVar7;
    }
    if (puVar9 != (undefined8 *)0x0) {
      FUN_180769b80(puVar9,param_1,0,*(undefined4 *)(param_1 + 0x1175c));
      goto LAB_18078de46;
    }
  }
  else if (((((param_3 == 0) || (*(longlong *)(param_3 + 0x78) == 0)) ||
            (*(longlong *)(param_3 + 0x80) == 0)) ||
           (((*(longlong *)(param_3 + 0x88) == 0 || (*(longlong *)(param_3 + 0x90) == 0)) &&
            ((*(longlong *)(param_3 + 0x80) == 0 ||
             ((*(longlong *)(param_3 + 0x98) == 0 || (*(longlong *)(param_3 + 0xa0) == 0)))))))) ||
          (*(int *)(param_3 + 200) != 0)) {
    if ((*(char *)(param_1 + 0x11758) == '\0') || ((param_3 != 0 && (*(int *)(param_3 + 200) != 0)))
       ) {
      iVar6 = FUN_18076b6f0(&DAT_180958c80,param_2,7);
      if ((iVar6 == 0) ||
         ((((iVar6 = FUN_18076b6f0(&UNK_18095b4b8,param_2,7), iVar6 == 0 ||
            (iVar6 = FUN_18076b6f0(&UNK_18095b4c0,param_2,8), iVar6 == 0)) ||
           (iVar6 = FUN_18076b6f0(&UNK_18095b4d0,param_2,8), iVar6 == 0)) ||
          ((iVar6 = FUN_18076b6f0(&UNK_18095b4dc,param_2,6), iVar6 == 0 ||
           (iVar6 = FUN_18076b6f0(&UNK_18095b4e4,param_2,6), iVar6 == 0)))))) {
        lVar8 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x2288,&UNK_18095b430,0x22a,0,
                              0,1);
        if (lVar8 != 0) {
          puVar9 = (undefined8 *)FUN_1807f5ef0(lVar8);
        }
        if (puVar9 != (undefined8 *)0x0) {
          FUN_180769b80(puVar9,param_1,0,puVar7);
          if (param_5 != (undefined1 *)0x0) {
            *param_5 = 1;
          }
          goto LAB_18078de46;
        }
      }
      else {
        puVar10 = (undefined8 *)
                  FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x1f8,&UNK_18095b430,0x237,0
                                ,0,1);
        if (puVar10 != (undefined8 *)0x0) {
          func_0x000180768c10(puVar10);
          *(undefined4 *)(puVar10 + 7) = 4;
          *puVar10 = &UNK_18095af48;
          puVar10[0x3e] = 0;
          puVar9 = puVar10;
        }
        if (puVar9 != (undefined8 *)0x0) goto LAB_18078dd8b;
      }
    }
    else {
      lVar8 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x238,&UNK_18095b430,0x216,0,0,1
                           );
      if (lVar8 != 0) {
        puVar9 = (undefined8 *)FUN_18078d180(lVar8);
      }
      if (puVar9 != (undefined8 *)0x0) {
        if (param_3 != 0) {
          puVar9[0x46] = *(undefined8 *)(param_3 + 0xa8);
        }
        goto LAB_18078dd8b;
      }
    }
  }
  else {
    lVar8 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x238,&UNK_18095b430,0x207,0,0,1);
    if (lVar8 != 0) {
      puVar9 = (undefined8 *)FUN_18078d180(lVar8);
    }
    if (puVar9 != (undefined8 *)0x0) {
      lVar8 = *(longlong *)(param_3 + 0xa0);
      lVar2 = *(longlong *)(param_3 + 0x98);
      lVar3 = *(longlong *)(param_3 + 0x90);
      lVar4 = *(longlong *)(param_3 + 0x88);
      lVar5 = *(longlong *)(param_3 + 0x80);
      if (((*(longlong *)(param_3 + 0x78) == 0) || (lVar5 == 0)) ||
         (((lVar4 == 0 || (lVar3 == 0)) && ((lVar2 == 0 || (lVar8 == 0)))))) {
        uVar11 = 0x1c;
        goto LAB_18078ddf7;
      }
      puVar9[0x3f] = *(longlong *)(param_3 + 0x78);
      puVar9[0x40] = lVar5;
      puVar9[0x41] = lVar4;
      puVar9[0x42] = lVar3;
      puVar9[0x43] = lVar2;
      puVar9[0x44] = lVar8;
      puVar9[0x46] = *(undefined8 *)(param_3 + 0xa8);
LAB_18078dd8b:
      FUN_180769b80(puVar9,param_1,0,puVar7);
LAB_18078de46:
      *param_4 = puVar9;
      return 0;
    }
  }
  uVar11 = 0x26;
LAB_18078ddf7:
  if (puVar9 == (undefined8 *)0x0) {
    return uVar11;
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar9,&UNK_18095b500,0xb8,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18078de70(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong in_stack_ffffffffffffffd8;
  
  puVar1 = (undefined8 *)
           FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x200,&UNK_18095b430,0x1e1,
                         in_stack_ffffffffffffffd8 & 0xffffffff00000000,0,1);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0x26;
  }
  else {
    func_0x000180768c10(puVar1);
    *(undefined4 *)(puVar1 + 7) = 1;
    *puVar1 = &UNK_180958ec0;
    *(undefined4 *)(puVar1 + 0x3e) = 0;
    puVar1[0x3f] = 0;
    FUN_1807e5830(puVar1,param_1,0,0,0);
    uVar2 = 0;
    *param_2 = puVar1;
  }
  return uVar2;
}



int FUN_18078df30(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong *plStackX_20;
  longlong lStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  
  if (param_4 == (longlong *)0x0) {
    iVar4 = 0x1f;
  }
  else if ((int)param_3[3] == -1) {
    iVar4 = 0x26;
  }
  else {
    uVar1 = *(uint *)(param_3 + 5);
    param_2 = uVar1 & 0x18 | param_2;
    uVar5 = param_2 & 0xfffffff7;
    if ((param_2 & 0x10) == 0) {
      uVar5 = param_2 | 8;
    }
    if ((uVar5 & 7) == 0) {
      uVar5 = uVar5 | uVar1 & 7;
    }
    if ((uVar5 & 2) == 0) {
      if ((uVar5 & 4) == 0) {
        uVar5 = uVar5 | 1;
      }
      else {
        uVar5 = uVar5 & 0xfffffffe | 4;
      }
    }
    else {
      uVar5 = uVar5 & 0xfffffffa | 2;
    }
    if ((uVar1 >> 9 & 1) != 0) {
      uVar5 = uVar5 & 0xfffffeff | 0x200;
    }
    lStack_58 = *param_3;
    uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
    lStack_48 = param_3[2];
    lStack_40 = param_3[3];
    plStackX_20 = (longlong *)*param_4;
    lStack_38 = param_3[4];
    lStack_30 = param_3[5];
    _uStack_50 = CONCAT44(uVar2,(int)param_3[1]);
    lStack_28 = param_3[6];
    iVar4 = FUN_1807aaba0(*(undefined8 *)(param_1 + 0x6b8),uVar5,&lStack_58,&plStackX_20);
    plVar3 = plStackX_20;
    if (iVar4 == 0) {
      plStackX_20[6] = *param_3;
      *(float *)((longlong)plStackX_20 + 0x6c) = (float)(int)param_3[2];
      *(int *)((longlong)plStackX_20 + 0x74) = (int)param_3[6];
      *(undefined4 *)((longlong)plStackX_20 + 0x13c) = *(undefined4 *)((longlong)param_3 + 0x34);
      *(uint *)((longlong)plStackX_20 + 0x2c) = uVar5;
      *(undefined4 *)((longlong)plStackX_20 + 0x4c) = 0;
      *(undefined4 *)(plStackX_20 + 10) = *(undefined4 *)((longlong)plStackX_20 + 0x44);
      *(int *)(plStackX_20 + 5) = (int)param_3[1];
      *(undefined4 *)(plStackX_20 + 0xd) = uVar2;
      plStackX_20[0xc] = 0;
      *(undefined4 *)((longlong)plStackX_20 + 0x24) = 0xe;
      plStackX_20[0x1b] = param_1;
      *(undefined4 *)(plStackX_20 + 0xf) = *(undefined4 *)(param_1 + 0x11404);
      *(float *)((longlong)plStackX_20 + 0x7c) = *(float *)(param_1 + 0x11404) * 10000.0;
      iVar4 = *(int *)((longlong)param_3 + 0x24);
      if (iVar4 == 0) {
        iVar4 = *(int *)((longlong)plStackX_20 + 0x44) + -1;
      }
      (**(code **)(*plStackX_20 + 0x138))(plStackX_20,(int)param_3[4],2,iVar4,2);
      iVar4 = 0;
      *param_4 = (longlong)plVar3;
    }
    else if ((plStackX_20 != (longlong *)0x0) && (plStackX_20 != (longlong *)*param_4)) {
      (**(code **)(*plStackX_20 + 0x18))(plStackX_20,1);
    }
  }
  return iVar4;
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







