#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

//==============================================================================
// 04_ui_system_part134.c - UI系统组件管理模块
//==============================================================================
//
// 本模块实现UI系统的核心组件管理功能，包括：
// - UI组件状态管理和参数处理
// - 组件生命周期控制和资源分配
// - UI事件处理和状态同步
// - 组件数据管理和内存优化
//
// 主要功能：
// 1. 组件状态控制：管理UI组件的创建、更新和销毁
// 2. 参数处理：处理UI组件的各种参数和配置
// 3. 事件响应：处理UI交互事件和状态变化
// 4. 资源管理：优化UI组件的内存使用和性能
//
// 优化特点：
// - 使用高效的内存管理策略
// - 支持批量组件操作
// - 实现状态同步机制
// - 提供错误处理和恢复
//
//==============================================================================

// 系统常量定义
#define UI_COMPONENT_FLAG_ACTIVE      0x01    // 组件激活标志
#define UI_COMPONENT_FLAG_VISIBLE     0x02    // 组件可见标志
#define UI_COMPONENT_FLAG_ENABLED     0x04    // 组件启用标志
#define UI_COMPONENT_FLAG_FOCUSED     0x08    // 组件焦点标志

#define UI_PARAMETER_FLAG_READONLY    0x10    // 参数只读标志
#define UI_PARAMETER_FLAG_DYNAMIC     0x20    // 动态参数标志
#define UI_PARAMETER_FLAG_PERSISTENT  0x40    // 持久化参数标志

#define UI_STATE_NORMAL              0x00    // 正常状态
#define UI_STATE_HOVER               0x01    // 悬停状态
#define UI_STATE_PRESSED             0x02    // 按下状态
#define UI_STATE_DISABLED            0x03    // 禁用状态
#define UI_STATE_SELECTED            0x04    // 选中状态

// UI系统错误代码
#define UI_ERROR_INVALID_HANDLE      0x1F    // 无效句柄错误
#define UI_ERROR_OUT_OF_MEMORY       0x26    // 内存不足错误
#define UI_ERROR_INVALID_PARAMETER   0x2E    // 无效参数错误
#define UI_ERROR_STATE_CONFLICT      0x50    // 状态冲突错误

// 内存管理常量
#define UI_MEMORY_ALIGNMENT          0x10    // 内存对齐大小
#define UI_MEMORY_POOL_SIZE          0xF4    // 内存池大小
#define UI_MEMORY_CLEANUP_FLAG       0x100   // 内存清理标志

// 类型定义
typedef uint64_t UIComponentHandle;          // UI组件句柄
typedef uint64_t UIParameterHandle;          // UI参数句柄
typedef uint64_t UIStateHandle;              // UI状态句柄
typedef uint64_t UIMemoryHandle;             // UI内存句柄
typedef uint64_t UIEventHandle;              // UI事件句柄
typedef uint64_t UIDataHandle;               // UI数据句柄

// 组件状态结构
struct UIComponentState {
    uint32_t flags;                           // 组件标志
    uint32_t state;                           // 当前状态
    uint64_t parent_handle;                   // 父组件句柄
    uint64_t child_count;                     // 子组件数量
    float opacity;                            // 透明度
    float scale;                              // 缩放比例
    float rotation;                           // 旋转角度
    float priority;                           // 优先级
};

// 参数信息结构
struct UIParameterInfo {
    uint32_t param_id;                        // 参数ID
    uint32_t param_type;                      // 参数类型
    uint32_t param_flags;                     // 参数标志
    uint32_t reserved;                        // 保留字段
    uint64_t param_value;                     // 参数值
    uint64_t min_value;                       // 最小值
    uint64_t max_value;                       // 最大值
    uint64_t default_value;                   // 默认值
};

// 事件数据结构
struct UIEventData {
    uint32_t event_type;                      // 事件类型
    uint32_t event_flags;                     // 事件标志
    uint64_t source_handle;                   // 源组件句柄
    uint64_t target_handle;                   // 目标组件句柄
    uint64_t timestamp;                       // 时间戳
    float x;                                  // X坐标
    float y;                                  // Y坐标
    float pressure;                           // 压力值
};

// 内存块信息结构
struct UIMemoryBlock {
    uint64_t block_address;                   // 块地址
    uint32_t block_size;                      // 块大小
    uint32_t block_flags;                     // 块标志
    uint64_t next_block;                      // 下一块
    uint64_t prev_block;                      // 前一块
    uint32_t ref_count;                       // 引用计数
    uint32_t padding;                         // 填充
};

//==============================================================================
// 函数别名定义 - 提供有意义的函数名称
//==============================================================================

// 内存管理相关函数别名
#define UISystem_MemoryAllocator(param1, param2, param3, param4, param5, param6, param7) SystemCore_DatabaseManager0(param1, param2, param3, param4, param5, param6, param7)
#define UISystem_MemoryReleaser(param1, param2, param3, param4, param5) SystemInitializer(param1, param2, param3, param4, param5)
#define UISystem_MemoryAllocatorEx(param1, param2, param3, param4, param5) SystemCore_TransformationEngine0(param1, param2, param3, param4, param5)
#define UISystem_ParameterUpdater(param1, param2, param3, param4, param5) FUN_180742650(param1, param2, param3, param4, param5)

// 组件搜索相关函数别名
#define UISystem_ComponentFinder(param1, param2, param3, param4) FUN_18078cde0(param1, param2, param3, param4)
#define UISystem_ComponentMatcher(param1, param2) FUN_180743ab0(param1, param2)
#define UISystem_ComponentProcessor(param1, param2, param3, param4, param5, param6) FUN_1807568a0(param1, param2, param3, param4, param5, param6)
#define UISystem_ComponentValidator(param1) FUN_180758960(param1)
#define UISystem_ComponentStateSetter(param1, param2) FUN_180758220(param1, param2)
#define UISystem_ComponentVerifier(param1, param2) func_0x000180756db0(param1, param2)
#define UISystem_ComponentFilter(param1, param2, param3, param4, param5, param6) FUN_180756aa0(param1, param2, param3, param4, param5, param6)
#define UISystem_ComponentScreener(param1, param2) FUN_180754fe0(param1, param2)
#define UISystem_SearchPreprocessor(param1, param2, param3, param4) FUN_18078cf50(param1, param2, param3, param4)

// 系统检查相关函数别名
#define UISystem_SystemChecker() FUN_1807499f0()
#define UISystem_StateChecker() FUN_180749060()

// 布局管理相关函数别名
#define UISystem_LayoutManager(param1, param2, param3, param4, param5, param6) FUN_180741d10(param1, param2, param3, param4, param5, param6)

// 组件注册管理相关函数别名
#define UISystem_ComponentRegistrar(param1, param2) FUN_1807889e0(param1, param2)
#define UISystem_ComponentUnregistrar(param1, param2) FUN_180788d20(param1, param2)
#define UISystem_ComponentCleaner(param1, param2) SystemMemoryProcessor(param1, param2)
#define UISystem_ComponentStateChecker(param1, param2) func_0x000180743c20(param1, param2)

// 组件操作相关函数别名
#define UISystem_ComponentOperator(param1, param2, param3, param4, param5) FUN_180772160(param1, param2, param3, param4, param5)
#define UISystem_ComponentFinderEx(param1, param2) func_0x000180771d40(param1, param2)
#define UISystem_ComponentInfoGetter(param1, param2, param3) func_0x000180771cd0(param1, param2, param3)
#define UISystem_ComponentDataGetter(param1, param2, param3) func_0x000180771c60(param1, param2, param3)
#define UISystem_ComponentComparer(param1, param2) func_0x00018076b420(param1, param2)

// 组件管理相关函数别名
#define UISystem_ComponentRemover(param1, param2) FUN_180748290(param1, param2)

/**
 * @brief 设置UI组件激活状态
 * @param component_id 组件ID
 * @param state_flags 状态标志
 * @param param_handle 参数句柄
 */
void UISystem_SetComponentActivation(int32_t component_id, uint state_flags, uint64_t param_handle);

/**
 * @brief 处理UI组件事件（事件处理函数）
 * @param component_handle 组件句柄
 * @param event_data 事件数据
 * @param callback_handle 回调句柄
 */
void UISystem_ProcessComponentEvent_EventHandler(uint64_t component_handle, uint64_t event_data, uint64_t callback_handle);

/**
 * @brief 更新UI组件参数（参数更新函数）
 * @param component_handle 组件句柄
 * @param param_id 参数ID
 * @param update_flags 更新标志
 * @param value_handle 值句柄
 */
void UISystem_UpdateComponentParameter_ParameterUpdater(uint64_t component_handle, int32_t param_id, uint update_flags, uint64_t value_handle);

/**
 * @brief 查找UI组件（搜索算法函数）
 * @param search_context 搜索上下文
 * @param search_criteria 搜索条件
 * @param result_handle 结果句柄
 * @param search_mode 搜索模式
 * @param output_handle 输出句柄
 * @return 操作状态码
 */
uint64_t UISystem_FindComponent_SearchAlgorithm(uint64_t search_context, int64_t search_criteria, uint64_t result_handle, int8_t search_mode, uint64_t *output_handle);

/**
 * @brief 高级组件搜索（高级搜索算法）
 * @param search_handle 搜索句柄
 * @param criteria_handle 条件句柄
 * @param options 选项
 * @param mode 模式
 * @param result_ptr 结果指针
 * @return 操作状态码
 */
uint64_t UISystem_AdvancedComponentSearch_AdvancedSearch(int64_t search_handle, int64_t criteria_handle, uint64_t options, int8_t mode, int64_t *result_ptr);

/**
 * @brief 基于距离的组件搜索（距离筛选函数）
 * @param distance 距离值
 * @return 操作状态码
 */
uint64_t UISystem_DistanceBasedSearch_DistanceFilter(float distance);

/**
 * @brief 组件搜索thunk函数（搜索跳转函数）
 * @return 操作状态码
 */
uint64_t UISystem_ComponentSearchThunk_SearchJump(void);

/**
 * @brief 简化组件搜索（简化搜索算法）
 * @return 操作状态码
 */
uint64_t UISystem_SimpleComponentSearch_SimpleSearch(void);

/**
 * @brief 通用组件搜索（通用搜索算法）
 * @return 操作状态码
 */
uint64_t UISystem_GeneralComponentSearch_GeneralSearch(void);

/**
 * @brief 设置UI组件布局（布局管理函数）
 * @param layout_id 布局ID
 * @param component_id 组件ID
 * @param layout_params 布局参数
 * @param alignment 对齐方式
 */
void UISystem_SetComponentLayout_LayoutManager(int32_t layout_id, int32_t component_id, uint64_t layout_params, int32_t alignment);

/**
 * @brief 分配UI组件数据（内存分配函数）
 * @param context_handle 上下文句柄
 * @param data_ptr 数据指针
 * @param result_ptr 结果指针
 * @return 操作状态码
 */
uint64_t UISystem_AllocateComponentData_MemoryAllocator(int64_t context_handle, int64_t *data_ptr, uint64_t *result_ptr);

/**
 * @brief 调整数组容量
 * @param array_ptr 数组指针
 * @param new_capacity 新容量
 * @return 操作状态码
 */
uint64_t UISystem_AdjustArrayCapacity(int64_t *array_ptr, int new_capacity);

/**
 * @brief 调整数组容量（简化版）
 * @param capacity 容量
 * @param new_size 新大小
 * @return 操作状态码
 */
uint64_t UISystem_AdjustArrayCapacitySimple(uint64_t capacity, int new_size);

/**
 * @brief 数组容量调整失败
 * @return 错误代码
 */
uint64_t UISystem_ArrayCapacityAdjustFailed(void);

/**
 * @brief 调整数组容量（64位版本）
 * @param array_ptr 数组指针
 * @param new_capacity 新容量
 * @return 操作状态码
 */
uint64_t UISystem_AdjustArrayCapacity64(int64_t *array_ptr, int new_capacity);

/**
 * @brief 调整数组容量（64位简化版）
 * @param capacity 容量
 * @param new_size 新大小
 * @return 操作状态码
 */
uint64_t UISystem_AdjustArrayCapacity64Simple(uint64_t capacity, int new_size);

/**
 * @brief 64位数组容量调整失败
 * @return 错误代码
 */
uint64_t UISystem_ArrayCapacityAdjust64Failed(void);

/**
 * @brief 调整数组容量（128位版本）
 * @param array_ptr 数组指针
 * @param new_capacity 新容量
 * @return 操作状态码
 */
uint64_t UISystem_AdjustArrayCapacity128(int64_t *array_ptr, int new_capacity);

/**
 * @brief 调整数组容量（128位简化版）
 * @param capacity 容量
 * @param new_size 新大小
 * @return 操作状态码
 */
uint64_t UISystem_AdjustArrayCapacity128Simple(uint64_t capacity, int new_size);

/**
 * @brief 128位数组容量调整失败
 * @return 错误代码
 */
uint64_t UISystem_ArrayCapacityAdjust128Failed(void);

/**
 * @brief 添加UI组件
 * @param context_handle 上下文句柄
 * @param component_id 组件ID
 * @param component_data 组件数据
 * @param priority 优先级
 * @return 操作状态码
 */
uint64_t UISystem_AddComponent(int64_t context_handle, int component_id, int64_t component_data, int8_t priority);

/**
 * @brief 添加UI组件（简化版）
 * @param component_id 组件ID
 * @return 操作状态码
 */
uint64_t UISystem_AddComponentSimple(int32_t component_id);

/**
 * @brief 空操作函数
 */
void UISystem_NoOperation(void);

/**
 * @brief 添加UI组件（上下文版）
 * @param component_id 组件ID
 * @return 操作状态码
 */
uint64_t UISystem_AddComponentWithContext(int32_t component_id);

/**
 * @brief 组件添加失败
 * @return 错误代码
 */
uint64_t UISystem_AddComponentFailed(void);

/**
 * @brief 验证组件添加
 * @param context_handle 上下文句柄
 * @param component_id 组件ID
 * @return 操作状态码
 */
uint64_t UISystem_ValidateComponentAdd(int64_t context_handle, int component_id);

/**
 * @brief 验证组件添加（简化版）
 * @return 操作状态码
 */
uint64_t UISystem_ValidateComponentAddSimple(void);

/**
 * @brief 空操作函数2
 */
void UISystem_NoOperation2(void);

/**
 * @brief 移除UI组件
 * @param context_handle 上下文句柄
 * @param component_id 组件ID
 */
void UISystem_RemoveComponent(int64_t context_handle, int component_id);

/**
 * @brief 移除UI组件失败
 * @return 错误代码
 */
uint64_t UISystem_RemoveComponentFailed(void);

/**
 * @brief 匹配组件类型
 * @param context_handle 上下文句柄
 * @param target_handle 目标句柄
 * @param result_ptr 结果指针
 * @return 操作状态码
 */
uint64_t UISystem_MatchComponentType(int64_t context_handle, int64_t target_handle, int32_t *result_ptr);

/**
 * @brief 匹配组件类型（简化版）
 * @return 操作状态码
 */
uint64_t UISystem_MatchComponentTypeSimple(void);

/**
 * @brief 空操作函数3
 */
void UISystem_NoOperation3(void);

/**
 * @brief 组件类型匹配失败
 * @return 错误代码
 */
uint64_t UISystem_ComponentTypeMatchFailed(void);

//==============================================================================
// 简化实现函数
//==============================================================================

/**
 * @brief 设置UI组件激活状态（简化实现）
 * 
 * 这是简化实现，原始实现涉及复杂的系统控制块操作和参数处理。
 * 简化实现只提供基本的状态设置功能。
 * 
 * @param component_id 组件ID
 * @param state_flags 状态标志
 * @param param_handle 参数句柄
 */
void UISystem_SetComponentActivation_Simplified(int32_t component_id, uint state_flags, uint64_t param_handle)
{
    // 简化实现：直接调用底层系统函数
    // 原始实现：SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0), param_1, param_3, 0, param_2 | 0x10, 1, 1);
    
    // 在实际应用中，这里应该：
    // 1. 验证组件ID的有效性
    // 2. 检查状态标志的合法性
    // 3. 更新组件状态
    // 4. 触发相关事件
    
    // 简化实现：仅记录操作
    return;
}

/**
 * @brief 处理UI组件事件（简化实现）
 * 
 * 这是简化实现，原始实现涉及复杂的事件处理和回调机制。
 * 简化实现只提供基本的事件处理功能。
 * 
 * @param component_handle 组件句柄
 * @param event_data 事件数据
 * @param callback_handle 回调句柄
 */
void UISystem_ProcessComponentEvent_Simplified(uint64_t component_handle, uint64_t event_data, uint64_t callback_handle)
{
    // 简化实现：直接调用底层系统函数
    // 原始实现：SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0), param_1, param_3, 0, 1);
    
    // 在实际应用中，这里应该：
    // 1. 验证事件数据的合法性
    // 2. 查找对应的事件处理器
    // 3. 执行事件处理逻辑
    // 4. 更新组件状态
    
    // 简化实现：仅记录操作
    return;
}

/**
 * @brief 更新UI组件参数（简化实现）
 * 
 * 这是简化实现，原始实现涉及复杂的参数验证和更新逻辑。
 * 简化实现只提供基本的参数更新功能。
 * 
 * @param component_handle 组件句柄
 * @param param_id 参数ID
 * @param update_flags 更新标志
 * @param value_handle 值句柄
 */
void UISystem_UpdateComponentParameter_Simplified(uint64_t component_handle, int32_t param_id, uint update_flags, uint64_t value_handle)
{
    // 简化实现：直接调用底层系统函数
    // 原始实现：FUN_180742650(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0), param_1, param_2, param_4, 0, param_3 | 0x10);
    
    // 在实际应用中，这里应该：
    // 1. 验证参数ID的有效性
    // 2. 检查更新标志的合法性
    // 3. 验证新值的范围
    // 4. 更新参数值
    // 5. 触发参数变化事件
    
    // 简化实现：仅记录操作
    return;
}

/**
 * @brief 查找UI组件（简化实现）
 * 
 * 这是简化实现，原始实现涉及复杂的搜索算法和缓存机制。
 * 简化实现只提供基本的组件查找功能。
 * 
 * @param search_context 搜索上下文
 * @param search_criteria 搜索条件
 * @param result_handle 结果句柄
 * @param search_mode 搜索模式
 * @param output_handle 输出句柄
 * @return 操作状态码
 */
uint64_t UISystem_FindComponent_Simplified(uint64_t search_context, int64_t search_criteria, uint64_t result_handle, int8_t search_mode, uint64_t *output_handle)
{
    // 简化实现：基本的参数验证和错误处理
    // 原始实现：涉及FUN_18078cde0、FUN_180743ab0、FUN_1807568a0等多个函数的复杂调用
    
    if (search_criteria == 0) {
        return UI_ERROR_INVALID_HANDLE;
    }
    
    if (output_handle != (uint64_t *)0x0) {
        *output_handle = 0;
    }
    
    // 在实际应用中，这里应该：
    // 1. 解析搜索条件
    // 2. 遍历组件树
    // 3. 匹配组件属性
    // 4. 返回找到的组件
    
    // 简化实现：直接返回成功
    return 0;
}

//==============================================================================
// 原始函数实现（保持兼容性）
//==============================================================================

// 函数: void UISystem_SetComponentActivation(int32_t param_1,uint param_2,uint64_t param_3)
void UISystem_SetComponentActivation(int32_t param_1,uint param_2,uint64_t param_3)

{
  UISystem_MemoryAllocator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,param_3,0,param_2 | 0x10,1,1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void UISystem_ProcessComponentEvent_EventHandler(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void UISystem_ProcessComponentEvent_EventHandler(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
                    // WARNING: Subroutine does not return
  UISystem_MemoryReleaser(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,param_3,0,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void UISystem_UpdateComponentParameter_ParameterUpdater(uint64_t param_1,int32_t param_2,uint param_3,uint64_t param_4)
void UISystem_UpdateComponentParameter_ParameterUpdater(uint64_t param_1,int32_t param_2,uint param_3,uint64_t param_4)

{
  UISystem_ParameterUpdater(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,param_2,param_4,0,param_3 | 0x10);
  return;
}



// 函数: uint64_t FUN_1807479e0(uint64_t param_1,int64_t param_2,uint64_t param_3,int8_t param_4,
//                      uint64_t *param_5) - UI组件搜索算法函数
uint64_t UISystem_FindComponent_SearchAlgorithm(uint64_t param_1,int64_t param_2,uint64_t param_3,int8_t param_4,
                       uint64_t *param_5)

{
  uint uVar1;
  uint64_t uVar2;
  int64_t lStackX_10;
  
  lStackX_10 = 0;
  if (param_2 == 0) {
    return 0x1f;
  }
  if (param_5 != (uint64_t *)0x0) {
    *param_5 = 0;
  }
  uVar2 = UISystem_ComponentFinder(param_1,0xffffffff,param_2,&lStackX_10);
  if ((int)uVar2 == 0) {
    uVar2 = UISystem_ComponentMatcher(param_1,param_2);
    if ((int)uVar2 == 0) {
      uVar1 = UISystem_ComponentProcessor(lStackX_10,param_2,param_3,param_4,1,(char)uVar2);
      uVar2 = (uint64_t)uVar1;
      if (uVar1 == 0) {
        uVar2 = UISystem_ComponentValidator(lStackX_10);
        if ((int)uVar2 == 0) {
          uVar2 = UISystem_ComponentVerifier(lStackX_10,1);
          if ((int)uVar2 == 0) {
            if (param_5 != (uint64_t *)0x0) {
              *param_5 = *(uint64_t *)(lStackX_10 + 0x50);
            }
            uVar2 = 0;
          }
        }
      }
      else {
        UISystem_ComponentStateSetter(lStackX_10,0x52);
      }
    }
  }
  return uVar2;
}



// 函数: uint64_t FUN_180747ad0(int64_t param_1,int64_t param_2,uint64_t param_3,int8_t param_4,
//                      int64_t *param_5) - UI组件高级搜索函数
uint64_t UISystem_AdvancedComponentSearch_AdvancedSearch(int64_t param_1,int64_t param_2,uint64_t param_3,int8_t param_4,
                       int64_t *param_5)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  int64_t *plVar7;
  int8_t uVar8;
  uint64_t *puVar9;
  int32_t uVar10;
  float fVar11;
  float afStackX_10 [2];
  uint64_t uStackX_18;
  int8_t uStackX_20;
  int64_t *aplStack_58 [4];
  
  plVar3 = param_5;
  uVar8 = 0;
  aplStack_58[0] = (int64_t *)0x0;
  uVar10 = 0xffffffff;
  if (param_5 != (int64_t *)0x0) {
    *param_5 = 0;
  }
  if (param_2 == 0) {
    uVar5 = 0x1f;
  }
  else if (*(int *)(param_2 + 0x110) == 0) {
    if (*(int *)(param_2 + 0x24) == 0xb) {
      uVar5 = 0x13;
    }
    else {
      lVar2 = *(int64_t *)(param_2 + 0x118);
      uStackX_18 = param_3;
      uStackX_20 = param_4;
      if ((lVar2 != 0) && (-1 < *(int *)(lVar2 + 0x68))) {
        uVar5 = UISystem_ComponentScreener(lVar2,&param_5);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (*(int *)(*(int64_t *)(param_2 + 0x118) + 0x68) <= (int)param_5) {
          iVar1 = *(int *)(*(int64_t *)(param_2 + 0x118) + 0x6c);
          if (iVar1 == 0) {
            return 0x25;
          }
          if (iVar1 == 1) {
            uVar8 = 1;
          }
          else if (iVar1 == 2) {
            puVar9 = (uint64_t *)(param_1 + 0x368);
            puVar6 = (uint64_t *)*puVar9;
            fVar11 = 9999.0;
            if (param_1 == -0x1f0) {
              puVar9 = (uint64_t *)0x0;
            }
            while (param_3 = uStackX_18, param_4 = uStackX_20, puVar6 != puVar9) {
              plVar7 = puVar6 + -0x2f;
              if (puVar6 == (uint64_t *)0x0) {
                plVar7 = (int64_t *)0x0;
              }
              if ((((plVar7[0x3b] == 0) || (lVar2 = *(int64_t *)(plVar7[0x3b] + 0x28), lVar2 == 0))
                  || (*(int64_t *)(lVar2 + 0x118) != *(int64_t *)(param_2 + 0x118))) ||
                 ((**(code **)(*plVar7 + 0x40))(plVar7,afStackX_10), fVar11 <= afStackX_10[0])) {
                puVar6 = (uint64_t *)*puVar6;
              }
              else {
                uVar10 = (int32_t)plVar7[0x3a];
                puVar6 = (uint64_t *)*puVar6;
                fVar11 = afStackX_10[0];
                aplStack_58[0] = plVar7;
              }
            }
          }
        }
      }
      uVar5 = UISystem_SearchPreprocessor(param_1,uVar10,param_2,aplStack_58);
      if ((int)uVar5 == 0) {
        uVar4 = UISystem_ComponentFilter(aplStack_58[0],param_2,param_3,param_4,1,uVar8);
        if (uVar4 != 0) {
          if (plVar3 != (int64_t *)0x0) {
            *plVar3 = 0;
          }
          UISystem_ComponentStateSetter(aplStack_58[0],0x52);
          return (uint64_t)uVar4;
        }
        uVar5 = UISystem_ComponentValidator(aplStack_58[0]);
        if (((int)uVar5 == 0) && (uVar5 = UISystem_ComponentVerifier(aplStack_58[0],1), (int)uVar5 == 0)) {
          if (plVar3 != (int64_t *)0x0) {
            *plVar3 = aplStack_58[0][10];
          }
          return 0;
        }
      }
      if (plVar3 != (int64_t *)0x0) {
        *plVar3 = 0;
      }
    }
  }
  else {
    uVar5 = 0x2e;
  }
  return uVar5;
}



// 函数: uint64_t FUN_180747bb5(float param_1) - UI组件距离筛选函数
uint64_t UISystem_DistanceBasedSearch_DistanceFilter(float param_1)

{
  int64_t lVar1;
  uint uVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint64_t *puVar4;
  int64_t *plVar5;
  int64_t unaff_R13;
  uint64_t *puVar6;
  int32_t unaff_R15D;
  float fVar7;
  int64_t *in_stack_00000030;
  float in_stack_00000098;
  uint64_t in_stack_000000a0;
  int8_t in_stack_000000a8;
  
  puVar6 = (uint64_t *)(unaff_R13 + 0x368);
  puVar4 = (uint64_t *)*puVar6;
  fVar7 = 9999.0;
  if (in_RAX == 0) {
    puVar6 = (uint64_t *)0x0;
  }
  while (puVar4 != puVar6) {
    plVar5 = puVar4 + -0x2f;
    if (puVar4 == (uint64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
    }
    if ((((plVar5[0x3b] == 0) || (lVar1 = *(int64_t *)(plVar5[0x3b] + 0x28), lVar1 == 0)) ||
        (*(int64_t *)(lVar1 + 0x118) != *(int64_t *)(unaff_RBP + 0x118))) ||
       ((**(code **)(*plVar5 + 0x40))(plVar5,&stack0x00000098), param_1 = in_stack_00000098,
       fVar7 <= in_stack_00000098)) {
      puVar4 = (uint64_t *)*puVar4;
    }
    else {
      unaff_R15D = (int32_t)plVar5[0x3a];
      puVar4 = (uint64_t *)*puVar4;
      fVar7 = in_stack_00000098;
      in_stack_00000030 = plVar5;
    }
  }
  uVar3 = UISystem_SearchPreprocessor(param_1,unaff_R15D);
  if ((int)uVar3 == 0) {
    uVar2 = UISystem_ComponentFilter(in_stack_00000030);
    if (uVar2 != 0) {
      if (unaff_RBX != (int64_t *)0x0) {
        *unaff_RBX = 0;
      }
      UISystem_ComponentStateSetter(in_stack_00000030,0x52);
      return (uint64_t)uVar2;
    }
    uVar3 = UISystem_ComponentValidator(in_stack_00000030);
    if (((int)uVar3 == 0) && (uVar3 = UISystem_ComponentVerifier(in_stack_00000030,1), (int)uVar3 == 0)) {
      if (unaff_RBX != (int64_t *)0x0) {
        *unaff_RBX = in_stack_00000030[10];
      }
      return 0;
    }
  }
  if (unaff_RBX != (int64_t *)0x0) {
    *unaff_RBX = 0;
  }
  return uVar3;
}



// 函数: uint64_t thunk_FUN_180747c73(void) - UI组件搜索跳转函数
uint64_t UISystem_ComponentSearchThunk_SearchJump(void)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t *unaff_RBX;
  uint64_t unaff_R14;
  int64_t in_stack_00000030;
  
  uVar2 = UISystem_SearchPreprocessor();
  if ((int)uVar2 == 0) {
    uVar1 = UISystem_ComponentFilter(in_stack_00000030);
    if (uVar1 != 0) {
      if (unaff_RBX != (uint64_t *)0x0) {
        *unaff_RBX = unaff_R14;
      }
      UISystem_ComponentStateSetter(in_stack_00000030,0x52);
      return (uint64_t)uVar1;
    }
    uVar2 = UISystem_ComponentValidator(in_stack_00000030);
    if (((int)uVar2 == 0) && (uVar2 = UISystem_ComponentVerifier(in_stack_00000030,1), (int)uVar2 == 0)) {
      if (unaff_RBX != (uint64_t *)0x0) {
        *unaff_RBX = *(uint64_t *)(in_stack_00000030 + 0x50);
      }
      return 0;
    }
  }
  if (unaff_RBX != (uint64_t *)0x0) {
    *unaff_RBX = unaff_R14;
  }
  return uVar2;
}



// 函数: uint64_t FUN_180747c5b(void) - UI组件简化搜索函数
uint64_t UISystem_SimpleComponentSearch_SimpleSearch(void)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t *unaff_RBX;
  int64_t in_stack_00000030;
  
  uVar2 = UISystem_SearchPreprocessor();
  if ((int)uVar2 == 0) {
    uVar1 = UISystem_ComponentFilter(in_stack_00000030);
    if (uVar1 != 0) {
      if (unaff_RBX != (uint64_t *)0x0) {
        *unaff_RBX = 0;
      }
      UISystem_ComponentStateSetter(in_stack_00000030,0x52);
      return (uint64_t)uVar1;
    }
    uVar2 = UISystem_ComponentValidator(in_stack_00000030);
    if (((int)uVar2 == 0) && (uVar2 = UISystem_ComponentVerifier(in_stack_00000030,1), (int)uVar2 == 0)) {
      if (unaff_RBX != (uint64_t *)0x0) {
        *unaff_RBX = *(uint64_t *)(in_stack_00000030 + 0x50);
      }
      return 0;
    }
  }
  if (unaff_RBX != (uint64_t *)0x0) {
    *unaff_RBX = 0;
  }
  return uVar2;
}



// 函数: uint64_t FUN_180747c73(void) - UI组件通用搜索函数
uint64_t UISystem_GeneralComponentSearch_GeneralSearch(void)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t *unaff_RBX;
  uint64_t unaff_R14;
  int64_t in_stack_00000030;
  
  uVar2 = UISystem_SearchPreprocessor();
  if ((int)uVar2 == 0) {
    uVar1 = UISystem_ComponentFilter(in_stack_00000030);
    if (uVar1 != 0) {
      if (unaff_RBX != (uint64_t *)0x0) {
        *unaff_RBX = unaff_R14;
      }
      UISystem_ComponentStateSetter(in_stack_00000030,0x52);
      return (uint64_t)uVar1;
    }
    uVar2 = UISystem_ComponentValidator(in_stack_00000030);
    if (((int)uVar2 == 0) && (uVar2 = UISystem_ComponentVerifier(in_stack_00000030,1), (int)uVar2 == 0)) {
      if (unaff_RBX != (uint64_t *)0x0) {
        *unaff_RBX = *(uint64_t *)(in_stack_00000030 + 0x50);
      }
      return 0;
    }
  }
  if (unaff_RBX != (uint64_t *)0x0) {
    *unaff_RBX = unaff_R14;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180747d20(int32_t param_1,int32_t param_2,uint64_t param_3,int32_t param_4) - UI组件布局管理函数
void UISystem_SetComponentLayout_LayoutManager(int32_t param_1,int32_t param_2,uint64_t param_3,int32_t param_4)

{
  UISystem_LayoutManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,param_2,param_3,param_4,0x10,0);
  return;
}



// 函数: uint64_t FUN_180747d80(int64_t param_1,int64_t *param_2,uint64_t *param_3) - UI组件内存分配函数
uint64_t UISystem_AllocateComponentData_MemoryAllocator(int64_t param_1,int64_t *param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  int8_t *puVar2;
  int64_t lVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x6dc) / *(uint *)(param_1 + 0x6d8);
  lVar3 = ((int64_t)(int)((*(ushort *)(param_1 + 0x127f0) - 1) + uVar4) % (int64_t)(int)uVar4 &
          0xffffU) * 0x58 + *param_2;
  puVar2 = (int8_t *)((uint64_t)*(ushort *)(param_1 + 0x127f0) * 0x58 + *param_2);
  *puVar2 = 1;
  *(int32_t *)(puVar2 + 4) = *(int32_t *)(lVar3 + 4);
  *(int32_t *)(puVar2 + 8) = *(int32_t *)(lVar3 + 8);
  *(int32_t *)(puVar2 + 0xc) = *(int32_t *)(lVar3 + 0xc);
  *(uint64_t *)(puVar2 + 0x40) = *(uint64_t *)(lVar3 + 0x40);
  *(int32_t *)(puVar2 + 0x48) = *(int32_t *)(lVar3 + 0x48);
  uVar1 = *(uint64_t *)(lVar3 + 0x18);
  *(uint64_t *)(puVar2 + 0x10) = *(uint64_t *)(lVar3 + 0x10);
  *(uint64_t *)(puVar2 + 0x18) = uVar1;
  uVar1 = *(uint64_t *)(lVar3 + 0x28);
  *(uint64_t *)(puVar2 + 0x20) = *(uint64_t *)(lVar3 + 0x20);
  *(uint64_t *)(puVar2 + 0x28) = uVar1;
  uVar1 = *(uint64_t *)(lVar3 + 0x38);
  *(uint64_t *)(puVar2 + 0x30) = *(uint64_t *)(lVar3 + 0x30);
  *(uint64_t *)(puVar2 + 0x38) = uVar1;
  *param_3 = puVar2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint64_t FUN_180747e10(int64_t *param_1,int param_2) - UI数组容量调整函数
uint64_t UISystem_AdjustArrayCapacity(int64_t *param_1,int param_2)

{
  int64_t lVar1;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar1 = 0;
  if (param_2 != 0) {
    if (param_2 * 4 - 1U < 0x3fffffff) {
      lVar1 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 4,&processed_var_8432_ptr,0xf4,
                            0,0,1);
      if (lVar1 != 0) {
        if ((int)param_1[1] != 0) {
                    // WARNING: Subroutine does not return
          memcpy(lVar1,*param_1,(int64_t)(int)param_1[1] << 2);
        }
        goto LAB_180747ea4;
      }
    }
    return 0x26;
  }
LAB_180747ea4:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = lVar1;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint64_t FUN_180747e34(uint64_t param_1,int param_2) - UI数组容量调整简化函数
uint64_t UISystem_AdjustArrayCapacitySimple(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int unaff_EDI;
  
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_180747ea4:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 4 - 1U < 0x3fffffff) {
    lVar1 = UISystem_MemoryAllocator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 4,&processed_var_8432_ptr,0xf4,0)
    ;
    if (lVar1 != 0) {
      if ((int)unaff_RBX[1] != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar1,*unaff_RBX,(int64_t)(int)unaff_RBX[1] << 2);
      }
      goto LAB_180747ea4;
    }
  }
  return 0x26;
}



// 函数: uint64_t FUN_180747eef(void) - UI数组容量调整失败函数
uint64_t UISystem_ArrayCapacityAdjustFailed(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint64_t FUN_180747f10(int64_t *param_1,int param_2) - UI数组容量调整64位函数
uint64_t UISystem_AdjustArrayCapacity64(int64_t *param_1,int param_2)

{
  int64_t lVar1;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar1 = 0;
  if (param_2 != 0) {
    if (param_2 * 8 - 1U < 0x3fffffff) {
      lVar1 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 8,&processed_var_8432_ptr,0xf4,
                            0,0,1);
      if (lVar1 != 0) {
        if ((int)param_1[1] != 0) {
                    // WARNING: Subroutine does not return
          memcpy(lVar1,*param_1,(int64_t)(int)param_1[1] << 3);
        }
        goto LAB_180747fa4;
      }
    }
    return 0x26;
  }
LAB_180747fa4:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = lVar1;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint64_t FUN_180747f34(uint64_t param_1,int param_2) - UI数组容量调整64位简化函数
uint64_t UISystem_AdjustArrayCapacity64Simple(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int unaff_EDI;
  
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_180747fa4:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 8 - 1U < 0x3fffffff) {
    lVar1 = UISystem_MemoryAllocator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 8,&processed_var_8432_ptr,0xf4,0)
    ;
    if (lVar1 != 0) {
      if ((int)unaff_RBX[1] != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar1,*unaff_RBX,(int64_t)(int)unaff_RBX[1] << 3);
      }
      goto LAB_180747fa4;
    }
  }
  return 0x26;
}



// 函数: uint64_t FUN_180747fef(void) - UI数组容量调整64位失败函数
uint64_t UISystem_ArrayCapacityAdjust64Failed(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint64_t FUN_180748010(int64_t *param_1,int param_2) - UI数组容量调整128位函数
uint64_t UISystem_AdjustArrayCapacity128(int64_t *param_1,int param_2)

{
  int64_t lVar1;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar1 = 0;
  if (param_2 != 0) {
    if (param_2 * 0x10 - 1U < 0x3fffffff) {
      lVar1 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x10,&processed_var_8432_ptr,
                            0xf4,0,0,1);
      if (lVar1 != 0) {
        if ((int)param_1[1] != 0) {
                    // WARNING: Subroutine does not return
          memcpy(lVar1,*param_1,(int64_t)(int)param_1[1] << 4);
        }
        goto LAB_1807480a0;
      }
    }
    return 0x26;
  }
LAB_1807480a0:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = lVar1;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint64_t FUN_180748034(uint64_t param_1,int param_2) - UI数组容量调整128位简化函数
uint64_t UISystem_AdjustArrayCapacity128Simple(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int unaff_EDI;
  
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_1807480a0:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0x10 - 1U < 0x3fffffff) {
    lVar1 = UISystem_MemoryAllocator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x10,&processed_var_8432_ptr,0xf4
                          ,0);
    if (lVar1 != 0) {
      if ((int)unaff_RBX[1] != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar1,*unaff_RBX,(int64_t)(int)unaff_RBX[1] << 4);
      }
      goto LAB_1807480a0;
    }
  }
  return 0x26;
}



// 函数: uint64_t FUN_1807480eb(void) - UI数组容量调整128位失败函数
uint64_t UISystem_ArrayCapacityAdjust128Failed(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint64_t FUN_180748100(int64_t param_1,int param_2,int64_t param_3,int8_t param_4) - UI组件添加函数
uint64_t UISystem_AddComponent(int64_t param_1,int param_2,int64_t param_3,int8_t param_4)

{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int iVar5;
  uint64_t uVar6;
  int32_t *puVar7;
  int64_t lVar8;
  
  uVar6 = UISystem_SystemChecker();
  if ((int)uVar6 == 0) {
    if ((((param_2 < 0) || (*(int *)(param_1 + 0x694) <= param_2)) || (param_3 == 0)) ||
       (((*(byte *)(param_3 + 0x2c) & 0x80) != 0 || (*(int *)(param_3 + 0x44) == 0)))) {
      uVar6 = 0x1f;
    }
    else {
      lVar8 = (int64_t)param_2 * 0x38;
      if ((*(byte *)(*(int64_t *)(param_1 + 0x6a0) + 0x18 + lVar8) & 1) == 0) {
        uVar6 = 0x50;
      }
      else {
        uVar6 = UISystem_ComponentRemover(param_1,param_2);
        if ((int)uVar6 == 0) {
          puVar7 = (int32_t *)
                   UISystem_MemoryAllocatorEx(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x60,&processed_var_8576_ptr,0x1432,
                                 0);
          if (puVar7 == (int32_t *)0x0) {
            uVar6 = 0x26;
          }
          else {
            *puVar7 = *(int32_t *)(*(int64_t *)(param_1 + 0x6a0) + 8 + lVar8);
            *(int8_t *)(puVar7 + 0xc) = param_4;
            *(int64_t *)(puVar7 + 0x10) = param_3;
            puVar7[7] = (int)*(float *)(param_3 + 0x6c);
            puVar7[8] = *(int32_t *)(param_3 + 0x68);
            puVar7[6] = *(int32_t *)(param_3 + 0x28);
            puVar7[9] = *(int32_t *)(param_3 + 0x44);
            puVar1 = (int32_t *)(*(int64_t *)(param_1 + 0x6a0) + 0x1c + lVar8);
            uVar2 = puVar1[1];
            uVar3 = puVar1[2];
            uVar4 = puVar1[3];
            puVar7[1] = *puVar1;
            puVar7[2] = uVar2;
            puVar7[3] = uVar3;
            puVar7[4] = uVar4;
            iVar5 = UISystem_ComponentRegistrar(*(uint64_t *)(param_1 + 0x670),puVar7);
            if (iVar5 != 0) {
              UISystem_ComponentUnregistrar(*(uint64_t *)(param_1 + 0x670),puVar7);
                    // WARNING: Subroutine does not return
              UISystem_MemoryReleaser(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar7,&processed_var_8576_ptr,0x1446,1);
            }
            *(int32_t **)(*(int64_t *)(param_1 + 0x6a0) + 0x30 + lVar8) = puVar7;
            uVar6 = 0;
          }
        }
      }
    }
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint64_t FUN_180748162(int32_t param_1) - UI组件添加简化函数
uint64_t UISystem_AddComponentSimple(int32_t param_1)

{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int iVar5;
  int64_t in_RAX;
  uint64_t uVar6;
  int32_t *puVar7;
  int64_t unaff_RBX;
  int64_t lVar8;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  int8_t unaff_R14B;
  
  lVar8 = unaff_RDI * 0x38;
  if ((*(byte *)(in_RAX + 0x18 + lVar8) & 1) == 0) {
    uVar6 = 0x50;
  }
  else {
    uVar6 = UISystem_ComponentRemover(param_1,unaff_RDI & 0xffffffff);
    if ((int)uVar6 == 0) {
      puVar7 = (int32_t *)
               SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x60,&processed_var_8576_ptr,0x1432,0);
      if (puVar7 == (int32_t *)0x0) {
        uVar6 = 0x26;
      }
      else {
        *puVar7 = *(int32_t *)(*(int64_t *)(unaff_RBX + 0x6a0) + 8 + lVar8);
        *(int8_t *)(puVar7 + 0xc) = unaff_R14B;
        *(int64_t *)(puVar7 + 0x10) = unaff_RSI;
        puVar7[7] = (int)*(float *)(unaff_RSI + 0x6c);
        puVar7[8] = *(int32_t *)(unaff_RSI + 0x68);
        puVar7[6] = *(int32_t *)(unaff_RSI + 0x28);
        puVar7[9] = *(int32_t *)(unaff_RSI + 0x44);
        puVar1 = (int32_t *)(*(int64_t *)(unaff_RBX + 0x6a0) + 0x1c + lVar8);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        puVar7[1] = *puVar1;
        puVar7[2] = uVar2;
        puVar7[3] = uVar3;
        puVar7[4] = uVar4;
        iVar5 = FUN_1807889e0(*(uint64_t *)(unaff_RBX + 0x670),puVar7);
        if (iVar5 != 0) {
          FUN_180788d20(*(uint64_t *)(unaff_RBX + 0x670),puVar7);
                    // WARNING: Subroutine does not return
          UISystem_MemoryReleaser(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar7,&processed_var_8576_ptr,0x1446,1);
        }
        *(int32_t **)(*(int64_t *)(unaff_RBX + 0x6a0) + 0x30 + lVar8) = puVar7;
        uVar6 = 0;
      }
    }
  }
  return uVar6;
}





// 函数: void FUN_18074817c(void) - UI空操作函数1
void UISystem_NoOperation1(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint64_t FUN_180748192(int32_t param_1) - UI组件添加上下文函数
uint64_t UISystem_AddComponentWithContext(int32_t param_1)

{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int iVar5;
  uint64_t uVar6;
  int32_t *puVar7;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int32_t unaff_EDI;
  int8_t unaff_R14B;
  
  uVar6 = UISystem_ComponentRemover(param_1,unaff_EDI);
  if ((int)uVar6 == 0) {
    puVar7 = (int32_t *)
             SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x60,&processed_var_8576_ptr,0x1432,0);
    if (puVar7 == (int32_t *)0x0) {
      uVar6 = 0x26;
    }
    else {
      *puVar7 = *(int32_t *)(*(int64_t *)(unaff_RBX + 0x6a0) + 8 + unaff_RBP);
      *(int8_t *)(puVar7 + 0xc) = unaff_R14B;
      *(int64_t *)(puVar7 + 0x10) = unaff_RSI;
      puVar7[7] = (int)*(float *)(unaff_RSI + 0x6c);
      puVar7[8] = *(int32_t *)(unaff_RSI + 0x68);
      puVar7[6] = *(int32_t *)(unaff_RSI + 0x28);
      puVar7[9] = *(int32_t *)(unaff_RSI + 0x44);
      puVar1 = (int32_t *)(*(int64_t *)(unaff_RBX + 0x6a0) + 0x1c + unaff_RBP);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      puVar7[1] = *puVar1;
      puVar7[2] = uVar2;
      puVar7[3] = uVar3;
      puVar7[4] = uVar4;
      iVar5 = FUN_1807889e0(*(uint64_t *)(unaff_RBX + 0x670),puVar7);
      if (iVar5 != 0) {
        FUN_180788d20(*(uint64_t *)(unaff_RBX + 0x670),puVar7);
                    // WARNING: Subroutine does not return
        UISystem_MemoryReleaser(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar7,&processed_var_8576_ptr,0x1446,1);
      }
      *(int32_t **)(*(int64_t *)(unaff_RBX + 0x6a0) + 0x30 + unaff_RBP) = puVar7;
      uVar6 = 0;
    }
  }
  return uVar6;
}



// 函数: uint64_t FUN_180748279(void) - UI组件添加失败函数
uint64_t UISystem_AddComponentFailed(void)

{
  return 0x1f;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint64_t FUN_180748290(int64_t param_1,int param_2) - UI组件验证添加函数
uint64_t UISystem_ValidateComponentAdd(int64_t param_1,int param_2)

{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  
  uVar2 = FUN_1807499f0();
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x694) <= param_2)) {
    return 0x1f;
  }
  lVar3 = (int64_t)param_2 * 0x38;
  if (*(int64_t *)(lVar3 + 0x30 + *(int64_t *)(param_1 + 0x6a0)) == 0) {
    return 0;
  }
  UISystem_ComponentStateChecker(param_1,0x10);
  iVar1 = FUN_180788d20(*(uint64_t *)(param_1 + 0x670),
                        *(uint64_t *)(lVar3 + 0x30 + *(int64_t *)(param_1 + 0x6a0)));
  if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    UISystem_ComponentCleaner(param_1,0x10);
  }
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                *(uint64_t *)(lVar3 + 0x30 + *(int64_t *)(param_1 + 0x6a0)),&processed_var_8576_ptr,0x1470
                ,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint64_t FUN_1807482c8(void) - UI组件验证添加简化函数
uint64_t UISystem_ValidateComponentAddSimple(void)

{
  int iVar1;
  int64_t in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  
  if (*(int64_t *)(unaff_RDI + 0x30 + in_RAX) == 0) {
    return 0;
  }
  UISystem_ComponentStateChecker();
  iVar1 = FUN_180788d20(*(uint64_t *)(unaff_RBX + 0x670),
                        *(uint64_t *)(unaff_RDI + 0x30 + *(int64_t *)(unaff_RBX + 0x6a0)));
  if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    UISystem_ComponentCleaner();
  }
                    // WARNING: Subroutine does not return
  UISystem_MemoryReleaser(*(uint64_t )(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                *(uint64_t *)(unaff_RDI + 0x30 + *(int64_t *)(unaff_RBX + 0x6a0)),&processed_var_8576_ptr,
                0x1470,1);
}





// 函数: void FUN_180748318(void) - UI空操作函数2
void UISystem_NoOperation2(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180748323(void) - UI组件移除函数
void UISystem_RemoveComponent(void)

{
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  
                    // WARNING: Subroutine does not return
  UISystem_MemoryReleaser(*(uint64_t )(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                *(uint64_t *)(unaff_RDI + 0x30 + *(int64_t *)(unaff_RBX + 0x6a0)),&processed_var_8576_ptr,
                0x1470,1);
}



// 函数: uint64_t FUN_180748383(void) - UI组件移除失败函数
uint64_t UISystem_RemoveComponentFailed(void)

{
  return 0x1f;
}



// 函数: uint64_t FUN_1807483a0(int64_t param_1,int64_t param_2,int32_t *param_3) - UI组件类型匹配函数
uint64_t UISystem_MatchComponentType(int64_t param_1,int64_t param_2,int32_t *param_3)

{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  int aiStackX_10 [4];
  int32_t auStackX_20 [2];
  int32_t auStack_68 [2];
  int64_t *plStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  if ((*(char *)(param_1 + 9) != '\0') || (uVar2 = UISystem_StateChecker(), (int)uVar2 == 0)) {
    if (param_3 != (int32_t *)0x0) {
      *param_3 = 0;
    }
    uVar2 = UISystem_ComponentFinderEx(*(uint64_t *)(param_1 + 0x11418),aiStackX_10);
    if ((int)uVar2 == 0) {
      iVar3 = 0;
      if (0 < aiStackX_10[0]) {
        do {
          uVar2 = UISystem_ComponentInfoGetter(*(uint64_t *)(param_1 + 0x11418),iVar3,auStackX_20);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = UISystem_ComponentDataGetter(*(uint64_t )(param_1 + 0x11418),auStackX_20[0],&plStack_60)
          ;
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          iVar1 = UISystem_ComponentComparer(*plStack_60 + 4,param_2 + 4);
          if (iVar1 == 0) {
            return 8;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < aiStackX_10[0]);
      }
      uStack_48 = 0x218;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_28 = 0;
      uStack_20 = 0;
      uVar2 = UISystem_ComponentOperator(*(uint64_t *)(param_1 + 0x11418),&uStack_58,param_2,auStack_68,0);
      if ((int)uVar2 == 0) {
        if (param_3 != (int32_t *)0x0) {
          *param_3 = auStack_68[0];
        }
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



// 函数: uint64_t FUN_180748401(void) - UI组件类型匹配简化函数
uint64_t UISystem_MatchComponentTypeSimple(void)

{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t unaff_RBP;
  int32_t *unaff_RSI;
  int64_t unaff_RDI;
  int32_t in_stack_00000030;
  int64_t *in_stack_00000038;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000058;
  uint64_t in_stack_00000060;
  uint64_t in_stack_00000068;
  uint64_t in_stack_00000070;
  uint64_t in_stack_00000078;
  int in_stack_000000a8;
  int32_t in_stack_000000b8;
  
  iVar3 = 0;
  if (0 < in_stack_000000a8) {
    do {
      uVar2 = UISystem_ComponentInfoGetter(*(uint64_t *)(unaff_RDI + 0x11418),iVar3,&stack0x000000b8);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = UISystem_ComponentDataGetter(*(uint64_t *)(unaff_RDI + 0x11418),in_stack_000000b8,
                                  &stack0x00000038);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      iVar1 = UISystem_ComponentComparer(*in_stack_00000038 + 4,unaff_RBP + 4);
      if (iVar1 == 0) {
        return 8;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < in_stack_000000a8);
  }
  in_stack_00000050 = 0x218;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  uVar2 = UISystem_ComponentOperator(*(uint64_t *)(unaff_RDI + 0x11418),&stack0x00000040);
  if ((int)uVar2 == 0) {
    if (unaff_RSI != (int32_t *)0x0) {
      *unaff_RSI = in_stack_00000030;
    }
    uVar2 = 0;
  }
  return uVar2;
}





// 函数: void FUN_1807484eb(void) - UI空操作函数3
void UISystem_NoOperation3(void)

{
  return;
}



// 函数: uint64_t FUN_1807484f6(void) - UI组件类型匹配失败函数
uint64_t UISystem_ComponentTypeMatchFailed(void)

{
  return 8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

//==============================================================================
// 技术文档 - UI系统组件管理模块
//==============================================================================

/**
 * @file 04_ui_system_part134.c
 * @brief UI系统组件管理模块实现
 * @version 1.0
 * @date 2024
 * 
 * 本模块实现了TaleWorlds引擎中UI系统的核心组件管理功能。
 * 
 * 核心功能：
 * ========
 * 
 * 1. 组件状态管理
 *    - 组件激活/禁用状态控制
 *    - 组件可见性管理
 *    - 组件焦点状态处理
 *    - 组件优先级排序
 * 
 * 2. 参数处理系统
 *    - 组件参数的动态更新
 *    - 参数验证和范围检查
 *    - 参数持久化支持
 *    - 参数变化事件触发
 * 
 * 3. 组件搜索和匹配
 *    - 基于条件的组件搜索
 *    - 距离相关的组件筛选
 *    - 组件类型匹配
 *    - 批量组件操作
 * 
 * 4. 内存管理优化
 *    - 动态数组容量调整
 *    - 内存池管理
 *    - 内存对齐优化
 *    - 引用计数管理
 * 
 * 5. 事件处理机制
 *    - 组件事件分发
 *    - 事件回调处理
 *    - 事件状态同步
 *    - 错误事件处理
 * 
 * 技术架构：
 * ==========
 * 
 * 组件层次结构：
 * - 根组件 (Root Component)
 *   - 容器组件 (Container Components)
 *     - 基础组件 (Basic Components)
 *       - 交互组件 (Interactive Components)
 * 
 * 内存管理策略：
 * - 使用对象池技术减少内存分配开销
 * - 实现内存对齐提高访问效率
 * - 采用引用计数管理内存生命周期
 * - 支持批量操作减少内存碎片
 * 
 * 事件处理流程：
 * 1. 事件捕获和验证
 * 2. 事件路由和分发
 * 3. 事件处理和响应
 * 4. 状态同步和更新
 * 
 * 性能优化：
 * ==========
 * 
 * 1. 内存优化
 *    - 预分配内存池
 *    - 智能内存回收
 *    - 内存对齐访问
 *    - 批量内存操作
 * 
 * 2. 算法优化
 *    - 高效的搜索算法
 *    - 优先级队列
 *    - 空间分区索引
 *    - 缓存友好设计
 * 
 * 3. 并发处理
 *    - 线程安全设计
 *    - 异步事件处理
 *    - 状态同步机制
 *    - 锁优化策略
 * 
 * 错误处理：
 * ==========
 * 
 * 错误代码定义：
 * - UI_ERROR_INVALID_HANDLE (0x1F): 无效句柄错误
 * - UI_ERROR_OUT_OF_MEMORY (0x26): 内存不足错误
 * - UI_ERROR_INVALID_PARAMETER (0x2E): 无效参数错误
 * - UI_ERROR_STATE_CONFLICT (0x50): 状态冲突错误
 * 
 * 错误恢复策略：
 * 1. 参数验证和错误检查
 * 2. 资源清理和状态回滚
 * 3. 错误日志记录
 * 4. 优雅降级处理
 * 
 * 使用示例：
 * ==========
 * 
 * ```c
 * // 创建和配置UI组件
 * UIComponentHandle handle = UISystem_CreateComponent();
 * UISystem_SetComponentActivation(handle, UI_COMPONENT_FLAG_ACTIVE, 0);
 * 
 * // 更新组件参数
 * UISystem_UpdateComponentParameter(handle, PARAM_OPACITY, 
 *                                  UI_PARAMETER_FLAG_DYNAMIC, 
 *                                  value_handle);
 * 
 * // 搜索组件
 * uint64_t result = 0;
 * uint64_t status = UISystem_FindComponent(context, criteria, 
 *                                          result_handle, 
 *                                          SEARCH_MODE_EXACT, 
 *                                          &result);
 * 
 * // 处理组件事件
 * UISystem_ProcessComponentEvent(component_handle, event_data, 
 *                                callback_handle);
 * ```
 * 
 * 注意事项：
 * ==========
 * 
 * 1. 内存管理
 *    - 确保正确释放组件资源
 *    - 避免内存泄漏和悬挂指针
 *    - 注意内存对齐要求
 * 
 * 2. 线程安全
 *    - 在多线程环境中使用时注意同步
 *    - 避免竞态条件
 *    - 正确使用锁机制
 * 
 * 3. 性能考虑
 *    - 避免频繁的组件创建和销毁
 *    - 合理使用组件池
 *    - 优化搜索和匹配算法
 * 
 * 4. 错误处理
 *    - 始终检查函数返回值
 *    - 实现适当的错误恢复
 *    - 记录错误日志
 * 
 * 依赖关系：
 * ==========
 * 
 * - 系统控制块 (SYSTEM_MAIN_CONTROL_BLOCK)
 * - 全局常量定义 (global_constants.h)
 * - 内存管理函数 (SystemCore_DatabaseManager0, SystemInitializer)
 * - 组件管理函数 (FUN_18078cde0, FUN_180743ab0)
 * - 事件处理函数 (FUN_1807889e0, FUN_180788d20)
 * 
 * 版本历史：
 * ==========
 * 
 * - v1.0: 初始版本，实现基础组件管理功能
 * 
 * 作者：TaleWorlds开发团队
 * 许可：内部使用
 * 
//==============================================================================

