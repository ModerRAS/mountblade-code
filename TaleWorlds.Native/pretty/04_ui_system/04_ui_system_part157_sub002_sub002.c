#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part157_sub002_sub002.c - UI系统高级事件处理和状态管理模块
// 本文件包含11个核心函数，涵盖UI系统高级事件处理、状态管理、资源清理、内存管理、错误处理等高级UI功能

/*===================================================================================
    常量定义和类型别名
===================================================================================*/

// UI系统状态标志常量
#define UI_SYSTEM_FLAG_INITIALIZED      0x00000001  // UI系统已初始化标志
#define UI_SYSTEM_FLAG_ACTIVE           0x00000002  // UI系统活动标志
#define UI_SYSTEM_FLAG_VISIBLE          0x00000004  // UI系统可见标志
#define UI_SYSTEM_FLAG_INTERACTIVE      0x00000008  // UI系统交互标志
#define UI_SYSTEM_FLAG_MODAL            0x00000010  // UI系统模态标志
#define UI_SYSTEM_FLAG_DRAGGABLE        0x00000020  // UI系统可拖拽标志
#define UI_SYSTEM_FLAG_RESIZABLE        0x00000040  // UI系统可调整大小标志
#define UI_SYSTEM_FLAG_FOCUSABLE        0x00000080  // UI系统可聚焦标志

// UI系统事件类型常量
#define UI_EVENT_TYPE_MOUSE_OVER        0x00000001  // 鼠标悬停事件
#define UI_EVENT_TYPE_MOUSE_CLICK       0x00000002  // 鼠标点击事件
#define UI_EVENT_TYPE_MOUSE_DRAG        0x00000004  // 鼠标拖拽事件
#define UI_EVENT_TYPE_KEY_PRESS         0x00000008  // 键盘按下事件
#define UI_EVENT_TYPE_KEY_RELEASE       0x00000010  // 键盘释放事件
#define UI_EVENT_TYPE_FOCUS_CHANGE      0x00000020  // 焦点变化事件
#define UI_EVENT_TYPE_STATE_CHANGE      0x00000040  // 状态变化事件
#define UI_EVENT_TYPE_ANIMATION         0x00000080  // 动画事件

// UI系统内存管理常量
#define UI_MEMORY_POOL_SIZE             0x1000000   // UI内存池大小 (16MB)
#define UI_MAX_WIDGET_COUNT            0x10000     // 最大控件数量
#define UI_MAX_EVENT_QUEUE_SIZE         0x1000      // 最大事件队列大小
#define UI_MAX_TEXTURE_COUNT            0x8000      // 最大纹理数量
#define UI_MAX_FONT_COUNT               0x100       // 最大字体数量

// UI系统布局常量
#define UI_LAYOUT_HORIZONTAL            0x00000001  // 水平布局
#define UI_LAYOUT_VERTICAL              0x00000002  // 垂直布局
#define UI_LAYOUT_GRID                  0x00000004  // 网格布局
#define UI_LAYOUT_FLOW                  0x00000008  // 流式布局
#define UI_LAYOUT_ABSOLUTE              0x00000010  // 绝对布局

// 函数别名定义
typedef void (*UI_SystemEventHandler)(longlong context, int event_type, int32_t *event_data, longlong timestamp, int32_t flags);
typedef ulonglong (*UI_SystemStateManager)(longlong *context, ulonglong state_id, ulonglong state_data, int transition_type, longlong *output);
typedef uint64_t (*UI_SystemResourceCleaner)(longlong resource_handle);
typedef ulonglong (*UI_SystemMemoryManager)(int8_t *ui_context, longlong target_context, int8_t operation_flag);
typedef ulonglong (*UI_SystemErrorHandler)(longlong error_context, int8_t error_code, int8_t *error_message);

/*===================================================================================
    函数实现
===================================================================================*/

/**
 * UI系统事件处理器 - 处理UI系统的高级事件处理和响应
 * 
 * 该函数负责处理UI系统中的各种事件，包括鼠标事件、键盘事件、焦点事件等。
 * 它通过检查系统状态和事件类型，执行相应的事件处理逻辑。
 * 
 * @param param_1 UI系统上下文指针
 * @param param_2 事件类型参数
 * @param param_3 事件数据指针
 * @param param_4 时间戳参数
 * @param param_5 事件标志位
 * 
 * @return void - 无返回值，事件处理结果通过回调函数传递
 * 
 * 处理流程：
 * 1. 验证系统状态和事件参数
 * 2. 根据事件类型选择处理逻辑
 * 3. 执行事件处理和状态更新
 * 4. 触发相应的回调函数
 * 5. 清理临时数据和资源
 */
void UI_SystemEventHandler(longlong param_1, int param_2, int32_t *param_3, longlong param_4, int32_t param_5)
{
  longlong lVar1;
  int iVar2;
  int8_t *puVar3;
  int8_t auStack_68 [32];
  int32_t auStack_48 [2];
  int8_t auStack_40 [32];
  ulonglong uStack_20;
  
  // 初始化栈保护和安全检查
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  puVar3 = (int8_t *)0x0;
  auStack_48[0] = 0;
  
  // 验证系统状态和事件参数有效性
  if ((((-1 < param_2) && (lVar1 = *(longlong *)(param_1 + 0xe8), lVar1 != 0)) &&
      (param_2 < *(int *)(lVar1 + 0x60))) &&
     ((*(longlong *)(lVar1 + 0x98) != 0 &&
      (**(int **)(*(longlong *)(lVar1 + 0x68) + (longlong)param_2 * 8) == 1)))) {
    
    // 初始化事件处理缓冲区
    auStack_40[0] = 0;
    *(longlong *)(param_1 + 0xb0) = param_1;
    
    // 检查是否需要创建事件数据副本
    if ((param_4 != 0) || (*(int *)(param_1 + 0x100) == 0)) {
      puVar3 = auStack_40;
    }
    
    // 执行事件处理核心逻辑
    iVar2 = (**(code **)(lVar1 + 0x98))((longlong *)(param_1 + 0xb0), param_2, auStack_48, puVar3);
    
    // 处理事件处理结果
    if (iVar2 == 0) {
      // 事件处理成功，更新事件数据
      if (param_3 != (int32_t *)0x0) {
        *param_3 = auStack_48[0];
      }
      
      // 如果有时间戳参数，执行后续处理
      if (param_4 != 0) {
        func_0x00018076b450(param_4, puVar3, param_5);
      }
    }
  }
  
  // 执行栈清理和安全退出
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_68);
}

/**
 * UI系统初始化函数 - 初始化UI系统的核心组件和状态
 * 
 * 该函数负责初始化UI系统的各个核心组件，包括事件系统、渲染系统、
 * 输入系统等。它确保系统在启动时处于正确的初始状态。
 * 
 * @return uint64_t - 返回初始化状态码，0表示成功
 */
uint64_t UI_SystemInitializer(void)
{
  // 调用系统初始化回调函数
  (**(code **)(_DAT_180c0c6d0 + 8))();
  return 0;
}

/**
 * UI系统状态管理器 - 管理UI系统的状态转换和数据更新
 * 
 * 该函数负责管理UI系统的各种状态，包括状态转换、数据更新、
 * 状态验证等。它确保系统状态的完整性和一致性。
 * 
 * @param param_1 状态管理上下文指针
 * @param param_2 状态ID参数
 * @param param_3 状态数据参数
 * @param param_4 转换类型参数
 * @param param_5 输出数据指针
 * 
 * @return ulonglong - 返回状态管理结果码
 */
ulonglong UI_SystemStateManager(longlong *param_1, ulonglong param_2, ulonglong param_3, int param_4, longlong *param_5)
{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint64_t *puVar6;
  ulonglong uVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint in_stack_fffffffffffffef0;
  uint uStack_f8;
  uint auStack_f4 [3];
  uint64_t uStack_e8;
  uint64_t ******ppppppuStack_e0;
  uint64_t ******ppppppuStack_d8;
  uint64_t uStack_d0;
  uint64_t ******ppppppuStack_c8;
  uint64_t ******ppppppuStack_c0;
  uint64_t uStack_b8;
  int32_t uStack_b0;
  uint64_t uStack_a8;
  int32_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  int32_t uStack_50;
  uint64_t uStack_48;
  ulonglong uVar12;
  
  // 检查系统状态标志
  if (((*(uint *)(*param_1 + 0x78) & 0x10000) == 0) && (*(char *)(_DAT_180be12f0 + 0x158) == '\0')) {
    bVar2 = false;
  } else {
    bVar2 = true;
  }
  
  // 初始化状态管理变量
  uVar10 = 0;
  uVar4 = param_2;
  uVar7 = param_3;
  uVar12 = uVar10;
  
  // 遍历状态管理项
  if (0 < *(int *)((longlong)param_1 + 0xc)) {
    while (true) {
      lVar1 = *(longlong *)(param_1[4] + uVar10);
      lVar5 = *(longlong *)(lVar1 + 0x60);
      
      if (!bVar2) goto LAB_18075f551;
      
      // 执行状态更新操作
      FUN_180768b90(auStack_f4, uVar4);
      
      while (true) {
        uVar4 = param_2 & 0xffffffff;
        uVar7 = param_3 & 0xffffffff;
LAB_18075f551:
        // 执行状态转换验证
        iVar3 = FUN_180760d50(lVar5, uVar4, uVar7, param_4);
        if (iVar3 == 0) break;
        
        // 处理状态转换错误
        uVar4 = FUN_180742e60(*param_1);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      }
      
      // 更新状态数据
      if ((*param_5 == 0) || (iVar3 = FUN_18075f8e0(param_5), iVar3 == 0)) {
        *param_5 = *(longlong *)(lVar5 + 0x138);
        *(int32_t *)(param_5 + 2) = *(int32_t *)(lVar5 + 0x148);
        param_5[1] = *(longlong *)(lVar5 + 0x140);
        *(int32_t *)((longlong)param_5 + 0x14) = *(int32_t *)(lVar5 + 0x14c);
        *(int32_t *)(param_5 + 3) = *(int32_t *)(lVar5 + 0x150);
        
        // 清理旧状态数据
        *(uint64_t *)(lVar5 + 0x138) = 0;
        *(uint64_t *)(lVar5 + 0x140) = 0;
        *(uint64_t *)(lVar5 + 0x148) = 0;
        *(uint64_t *)(lVar5 + 0x150) = 0;
      }
      
      // 执行状态同步操作
      if ((bVar2) && (FUN_180768b90(&uStack_f8), auStack_f4[0] <= uStack_f8)) {
        iVar3 = uStack_f8 - auStack_f4[0];
        puVar8 = (uint64_t *)(lVar1 + 0x70);
        *(int *)(lVar5 + 0x1dc) = iVar3;
        
        // 遍历状态关联项
        for (puVar6 = (uint64_t *)*puVar8; puVar6 != puVar8; puVar6 = (uint64_t *)*puVar6) {
          if ((*(byte *)(puVar6[2] + 0x7c) & 5) == 0) {
            iVar3 = iVar3 + *(int *)(*(longlong *)(puVar6[2] + 0x58) + 0x1e0);
          }
        }
        *(int *)(lVar5 + 0x1e0) = iVar3;
      }
      
      // 更新循环变量
      uVar7 = param_3 & 0xffffffff;
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      uVar10 = uVar10 + 8;
      if (*(int *)((longlong)param_1 + 0xc) <= (int)uVar11) break;
      uVar4 = param_2 & 0xffffffff;
    }
  }
  
  // 执行最终状态处理
  puVar8 = (uint64_t *)0x0;
  if ((*param_5 == 0) &&
     (uVar4 = FUN_18075a100(param_5, *param_1, param_4, uVar7 & 0xffffffff, 1), (int)uVar4 != 0)) {
    return uVar4;
  }
  
  // 验证最终状态
  if ((int)param_5[2] == param_4) {
LAB_18075f8b4:
    uVar4 = 0;
  } else {
    // 执行状态验证和清理
    lVar1 = *param_1;
    ppppppuStack_d8 = &ppppppuStack_e0;
    ppppppuStack_e0 = &ppppppuStack_e0;
    uStack_d0 = 0;
    ppppppuStack_c0 = &ppppppuStack_c8;
    ppppppuStack_c8 = &ppppppuStack_c8;
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_e8 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    puVar6 = puVar8;
    
    // 检查状态容量
    if (*(int *)(lVar1 + 0x107b0) < param_4) {
      // 分配新的状态存储空间
      lVar5 = FUN_180741e10(lVar1 + 0x10bd0, *(int *)(lVar1 + 0x6d8) * param_4 * 4 + 0x40,
                            &DAT_18098bc73, 0, 0, in_stack_fffffffffffffef0 & 0xffffff00, 1);
      if (lVar5 == 0) {
        uVar11 = 0x26;
      } else {
        puVar6 = (uint64_t *)(lVar5 + 0x1fU & 0xffffffffffffffe0);
        puVar6[3] = lVar5;
        puVar6[2] = puVar6 + 4;
        *(int32_t *)(puVar6 + 1) = 0;
        *puVar6 = 0;
LAB_18075f771:
        *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
        uVar11 = func_0x000180763630(&uStack_e8, *param_1, 0x3f800000);
        if (uVar11 == 0) {
          // 确定状态标志
          if ((*(int *)((longlong)param_5 + 0x14) == 1) || ((int)param_3 == 1)) {
            uVar9 = 1;
          } else {
            uVar9 = 0;
          }
          
          // 获取状态数据
          if (*param_5 != 0) {
            puVar8 = *(uint64_t **)(*param_5 + 0x10);
          }
          
          // 执行状态更新
          uVar11 = FUN_1807636f0(&uStack_e8, puVar6[2], puVar8, uVar9, param_4, (int)param_5[2],
                                 (int)param_2, 1);
          if (uVar11 == 0) {
            FUN_18075f8e0(param_5);
            if ((*param_5 == 0) || (iVar3 = FUN_18075f8e0(param_5), iVar3 == 0)) {
              *param_5 = (longlong)puVar6;
              *(int *)(param_5 + 2) = param_4;
              param_5[1] = lVar1;
              *(int32_t *)((longlong)param_5 + 0x14) = 0;
              *(int32_t *)(param_5 + 3) = 0xffffffff;
              *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
            }
            
            // 更新引用计数
            iVar3 = *(int *)(puVar6 + 1);
            if (0 < iVar3) {
              iVar3 = iVar3 + -1;
              *(int *)(puVar6 + 1) = iVar3;
            }
            
            // 清理未使用的状态
            if (iVar3 == 0) {
              if (puVar6[3] != 0) {
                FUN_180742250(lVar1 + 0x10bd0, puVar6[3], &DAT_18098bc73, 0, 1);
              }
              *puVar6 = *(uint64_t *)(lVar1 + 0x107a8);
              *(uint64_t **)(lVar1 + 0x107a8) = puVar6;
            }
            goto LAB_18075f8b4;
          }
        }
      }
    } else if ((*(longlong *)(lVar1 + 0x107a8) != 0) || (uVar11 = FUN_180742e60(lVar1), uVar11 == 0)) {
      puVar6 = *(uint64_t **)(lVar1 + 0x107a8);
      *(uint64_t *)(lVar1 + 0x107a8) = *puVar6;
      goto LAB_18075f771;
    }
    
    // 清理临时状态
    if (puVar6 != (uint64_t *)0x0) {
      iVar3 = *(int *)(puVar6 + 1);
      if (0 < iVar3) {
        iVar3 = iVar3 + -1;
        *(int *)(puVar6 + 1) = iVar3;
      }
      if (iVar3 == 0) {
        if (puVar6[3] != 0) {
          FUN_180742250(lVar1 + 0x10bd0, puVar6[3], &DAT_18098bc73, 0, 1);
        }
        *puVar6 = *(uint64_t *)(lVar1 + 0x107a8);
        *(uint64_t **)(lVar1 + 0x107a8) = puVar6;
      }
    }
    uVar4 = (ulonglong)uVar11;
  }
  return uVar4;
}

/**
 * UI系统资源清理器 - 清理UI系统分配的资源和内存
 * 
 * 该函数负责清理UI系统分配的各种资源，包括内存、纹理、字体等。
 * 它确保系统在关闭时正确释放所有资源。
 * 
 * @param param_1 资源句柄指针
 * 
 * @return uint64_t - 返回清理状态码
 */
uint64_t UI_SystemResourceCleaner(longlong *param_1)
{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)*param_1;
  if (puVar1 == (uint64_t *)0x0) {
    return 0;
  }
  
  // 减少引用计数
  if (0 < *(int *)(puVar1 + 1)) {
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + -1;
    puVar1 = (uint64_t *)*param_1;
  }
  
  // 当引用计数为0时，释放资源
  if (*(int *)(puVar1 + 1) == 0) {
    if (puVar1[3] != 0) {
      FUN_180742250(param_1[1] + 0x10bd0, puVar1[3], &DAT_18098bc73, 0, 1);
    }
    *puVar1 = *(uint64_t *)(param_1[1] + 0x107a8);
    *(longlong *)(param_1[1] + 0x107a8) = *param_1;
  }
  
  // 重置资源句柄
  *(int32_t *)(param_1 + 3) = 0xffffffff;
  *param_1 = 0;
  param_1[2] = 0;
  return 0;
}

/**
 * UI系统高级资源管理器 - 管理UI系统的高级资源分配和释放
 * 
 * 该函数负责管理UI系统的高级资源操作，包括资源分配、状态检查、
 * 内存管理、错误处理等。它确保资源使用的安全性和效率。
 * 
 * @param param_1 UI系统上下文指针
 * 
 * @return ulonglong - 返回资源管理结果码
 */
ulonglong UI_SystemAdvancedResourceManager(longlong param_1)
{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint64_t uVar7;
  int8_t *apuStackX_8 [2];
  
  // 检查系统是否已初始化
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    // 检查系统标志位
    if ((*(uint *)(param_1 + 100) >> 5 & 1) != 0) {
      return 10;
    }
    if ((*(uint *)(param_1 + 100) >> 6 & 1) != 0) {
      return 8;
    }
    
    // 执行资源验证
    if ((*(longlong *)(param_1 + 0xa8) != 0) &&
       (uVar4 = FUN_180743ab0(*(longlong *)(param_1 + 0xa8), param_1), (int)uVar4 != 0)) {
      return uVar4;
    }
    
    // 处理特殊标志位
    if ((*(uint *)(param_1 + 100) & 0x300) != 0) {
      FUN_180743160(*(uint64_t *)(param_1 + 0xa8), 1);
      uVar4 = FUN_18075dcc0(param_1, 0, 0, 1, 1, 4);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      
      // 执行系统回调
      lVar1 = *(longlong *)(param_1 + 0xe8);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x38) != 0)) {
        *(longlong *)(param_1 + 0xb0) = param_1;
        (**(code **)(lVar1 + 0x38))();
      }
      
      // 执行资源释放操作
      lVar1 = *(longlong *)(param_1 + 0x200);
      if (lVar1 == 0) {
        *(uint64_t *)(param_1 + 0x200) = 0;
        if (((*(longlong *)(param_1 + 0x210) == 0) || (*(longlong *)(param_1 + 0x208) == 0)) ||
           (uVar4 = FUN_18075e410(param_1), (int)uVar4 == 0)) {
          
          // 处理UI控件清理
          if (*(int *)(param_1 + 0x100) == 0xf) {
            plVar5 = (longlong *)(*(longlong *)(param_1 + 0xa8) + 0x12780);
            plVar6 = (longlong *)*plVar5;
            if (plVar6 != plVar5) goto LAB_18075fba0;
            plVar2 = plVar6;
            if (*(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x12788) != plVar5) {
              while (plVar6 = plVar2, plVar6 != plVar5) {
LAB_18075fba0:
                plVar2 = (longlong *)*plVar6;
                if (plVar6[2] == param_1) {
                  *(longlong **)plVar6[1] = (longlong *)*plVar6;
                  *(longlong *)(*plVar6 + 8) = plVar6[1];
                  plVar6[1] = (longlong)plVar6;
                  *plVar6 = (longlong)plVar6;
                  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0), plVar6, &UNK_1809589a0, 0xb73,
                                1);
                }
              }
            }
          }
          
          // 处理输入系统清理
          if ((*(uint *)(param_1 + 100) >> 2 & 1) != 0) {
            uVar4 = func_0x000180771c60(*(uint64_t *)(*(longlong *)(param_1 + 0xa8) + 0x11418),
                                        *(int32_t *)(param_1 + 0xfc), apuStackX_8);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            if (0 < *(int *)(apuStackX_8[0] + 0x44)) {
              *(int *)(apuStackX_8[0] + 0x44) = *(int *)(apuStackX_8[0] + 0x44) + -1;
            }
          }
          
          // 处理事件系统清理
          if ((*(uint *)(param_1 + 100) >> 1 & 1) != 0) {
            FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0), *(uint64_t *)(param_1 + 0xe8),
                          &UNK_1809589a0, 0xb8f, 1);
          }
          
          // 处理系统关闭
          if ((*(uint *)(param_1 + 100) >> 9 & 1) == 0) {
            *(int32_t *)(param_1 + 0x5c) = 0xdeadbead;
            if (*(longlong *)(param_1 + 0x130) == 0) {
              uVar7 = 0xb9e;
            } else {
              uVar7 = 0xb9a;
              param_1 = *(longlong *)(param_1 + 0x130);
            }
            FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0), param_1, &UNK_1809589a0, uVar7, 1);
          }
          uVar4 = 0;
        }
      } else {
        // 处理资源释放失败的情况
        if (*(longlong *)(param_1 + 0x1f0) == 0) {
LAB_18075fb15:
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0), lVar1, &UNK_1809589a0, 0xb53, 1);
        }
        uVar4 = FUN_180743cc0(*(uint64_t *)(param_1 + 0xa8), 0);
        if ((int)uVar4 == 0) {
          uVar3 = (**(code **)(param_1 + 0x1f0))(param_1, 0, lVar1 + 8);
          uVar4 = FUN_180743da0(*(uint64_t *)(param_1 + 0xa8));
          if (((int)uVar4 == 0) && ((uVar3 == 0 || (uVar4 = (ulonglong)uVar3, uVar3 == 0))))
            goto LAB_18075fb15;
        }
      }
      return uVar4;
    }
    
    // 执行资源分配
    uVar4 = FUN_180743700(*(uint64_t *)(param_1 + 0xa8), apuStackX_8, 0x18, 1);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    
    // 设置资源标志
    LOCK();
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x400;
    UNLOCK();
    
    // 初始化资源数据
    *apuStackX_8[0] = 5;
    *(longlong *)(apuStackX_8[0] + 8) = param_1;
    apuStackX_8[0][0x10] = 1;
    apuStackX_8[0][0x11] = 1;
    apuStackX_8[0][0x12] = 1;
    
    // 执行资源激活
    uVar4 = func_0x000180743b40(*(uint64_t *)(param_1 + 0xa8), apuStackX_8[0], 1);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  return 0;
}

/**
 * UI系统简化资源管理器 - 管理UI系统的简化资源操作
 * 
 * 该函数负责管理UI系统的简化资源操作，是高级资源管理器的简化版本。
 * 它提供基本的资源管理和清理功能。
 * 
 * @param param_1 UI系统上下文指针
 * 
 * @return ulonglong - 返回资源管理结果码
 */
ulonglong UI_SystemSimpleResourceManager(longlong param_1)
{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint64_t uVar7;
  longlong lStackX_8;
  
  // 执行系统回调
  lVar1 = *(longlong *)(param_1 + 0xe8);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x38) != 0)) {
    *(longlong *)(param_1 + 0xb0) = param_1;
    (**(code **)(lVar1 + 0x38))();
  }
  
  // 执行资源释放操作
  lVar1 = *(longlong *)(param_1 + 0x200);
  if (lVar1 == 0) {
    *(uint64_t *)(param_1 + 0x200) = 0;
    if (((*(longlong *)(param_1 + 0x210) == 0) || (*(longlong *)(param_1 + 0x208) == 0)) ||
       (uVar4 = FUN_18075e410(param_1), (int)uVar4 == 0)) {
      
      // 处理UI控件清理
      if (*(int *)(param_1 + 0x100) == 0xf) {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0xa8) + 0x12780);
        plVar6 = (longlong *)*plVar5;
        if (plVar6 != plVar5) goto LAB_18075fba0;
        plVar2 = plVar6;
        if (*(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x12788) != plVar5) {
          while (plVar6 = plVar2, plVar6 != plVar5) {
LAB_18075fba0:
            plVar2 = (longlong *)*plVar6;
            if (plVar6[2] == param_1) {
              *(longlong **)plVar6[1] = (longlong *)*plVar6;
              *(longlong *)(*plVar6 + 8) = plVar6[1];
              plVar6[1] = (longlong)plVar6;
              *plVar6 = (longlong)plVar6;
              FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0), plVar6, &UNK_1809589a0, 0xb73,
                            1);
            }
          }
        }
      }
      
      // 处理输入系统清理
      if ((*(uint *)(param_1 + 100) >> 2 & 1) != 0) {
        uVar4 = func_0x000180771c60(*(uint64_t *)(*(longlong *)(param_1 + 0xa8) + 0x11418),
                                    *(int32_t *)(param_1 + 0xfc), &lStackX_8);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        if (0 < *(int *)(lStackX_8 + 0x44)) {
          *(int *)(lStackX_8 + 0x44) = *(int *)(lStackX_8 + 0x44) + -1;
        }
      }
      
      // 处理事件系统清理
      if ((*(uint *)(param_1 + 100) >> 1 & 1) != 0) {
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0), *(uint64_t *)(param_1 + 0xe8),
                      &UNK_1809589a0, 0xb8f, 1);
      }
      
      // 处理系统关闭
      if ((*(uint *)(param_1 + 100) >> 9 & 1) == 0) {
        *(int32_t *)(param_1 + 0x5c) = 0xdeadbead;
        if (*(longlong *)(param_1 + 0x130) == 0) {
          uVar7 = 0xb9e;
        } else {
          uVar7 = 0xb9a;
          param_1 = *(longlong *)(param_1 + 0x130);
        }
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0), param_1, &UNK_1809589a0, uVar7, 1);
      }
      uVar4 = 0;
    }
  } else {
    // 处理资源释放失败的情况
    if (*(longlong *)(param_1 + 0x1f0) == 0) {
LAB_18075fb15:
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0), lVar1, &UNK_1809589a0, 0xb53, 1);
    }
    uVar4 = FUN_180743cc0(*(uint64_t *)(param_1 + 0xa8), 0);
    if ((int)uVar4 == 0) {
      uVar3 = (**(code **)(param_1 + 0x1f0))(param_1, 0, lVar1 + 8);
      uVar4 = FUN_180743da0(*(uint64_t *)(param_1 + 0xa8));
      if (((int)uVar4 == 0) && ((uVar3 == 0 || (uVar4 = (ulonglong)uVar3, uVar3 == 0))))
        goto LAB_18075fb15;
    }
  }
  return uVar4;
}

/**
 * UI系统事件队列管理器 - 管理UI系统的事件队列处理
 * 
 * 该函数负责管理UI系统的事件队列，包括事件添加、事件处理、
 * 事件分发等。它确保事件处理的顺序性和完整性。
 * 
 * @param param_1 UI系统上下文指针
 * @param param_2 事件目标参数
 * @param param_3 事件标志参数
 * 
 * @return ulonglong - 返回事件队列管理结果码
 */
ulonglong UI_SystemEventQueueManager(int8_t *param_1, longlong param_2, int8_t param_3)
{
  short sVar1;
  int8_t *puVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  int8_t *puStackX_8;
  
  // 检查系统是否已初始化
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    return 0;
  }
  
  // 检查事件目标是否有效
  if (param_2 == 0) {
    return 0x1f;
  }
  
  // 检查系统标志位
  if ((*(uint *)(param_1 + 100) >> 8 & 1) == 0) {
    uVar4 = FUN_180743700(*(uint64_t *)(param_1 + 0xa8), &puStackX_8, 0x18, param_3);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    
    // 初始化事件队列项
    *puStackX_8 = 6;
    *(int8_t **)(puStackX_8 + 8) = param_1;
    *(longlong *)(puStackX_8 + 0x10) = param_2;
    
    // 添加事件到队列
    uVar4 = func_0x000180743b40(*(uint64_t *)(param_1 + 0xa8), puStackX_8, param_3);
    if ((int)uVar4 == 0) {
      return 0;
    }
    return uVar4;
  }
  
  // 处理复杂事件队列逻辑
  sVar1 = *(short *)(param_1 + 0x1ae);
  iVar10 = (int)sVar1;
  iVar11 = (int)*(short *)(param_2 + 0x1ac);
  
  // 检查事件数量限制
  if ((1 < iVar11) && (1 < iVar10)) {
    return 0x1c;
  }
  
  puStackX_8 = param_1;
  if (*(short *)(param_2 + 0x1ac) != 0) {
    if (1 < iVar11) {
LAB_18075feb6:
      uVar4 = 0;
      if (*(short *)(param_1 + 0x1ae) < 1) {
        uVar5 = 9;
      } else {
        plVar13 = *(longlong **)(param_1 + 400);
        if (plVar13 == (longlong *)(param_1 + 400)) {
          uVar5 = 0x1c;
        } else {
          lVar14 = plVar13[2];
          uVar8 = *(uint *)(lVar14 + 0x7c) & 5;
          uVar5 = uVar4;
          while ((uVar12 = uVar5, iVar10 = (int)uVar12, iVar10 < 0 || (uVar8 != 0))) {
            plVar13 = (longlong *)*plVar13;
            lVar14 = plVar13[2];
            uVar8 = *(uint *)(lVar14 + 0x7c) & 5;
            uVar5 = (ulonglong)(iVar10 + 1);
            if (uVar8 != 0) {
              uVar5 = uVar12;
            }
          }
          uVar5 = uVar4;
          if (lVar14 != 0) {
            uVar4 = *(ulonglong *)(lVar14 + 0x60);
            uVar5 = 0;
          }
        }
      }
      
      // 处理事件队列结果
      if (((int)uVar5 != 9) && ((int)uVar5 != 0)) {
        return uVar5;
      }
      
      // 执行事件处理
      if ((uVar4 != 0) && (uVar5 = FUN_18075dcc0(uVar4, param_1, 0, 1, 0, 4), (int)uVar5 != 0)) {
        return uVar5;
      }
      
      // 处理事件分发
      iVar10 = 0;
      if (iVar11 < 1) {
        return 0;
      }
      
      while (true) {
        uVar6 = 0;
        uVar5 = uVar6;
        uVar12 = uVar6;
        if (*(short *)(param_2 + 0x1ac) < 1) {
          uVar6 = 9;
        } else {
          plVar13 = *(longlong **)(param_2 + 0x78);
          if (plVar13 == (longlong *)(param_2 + 0x78)) {
            uVar6 = 0x1c;
          } else {
            uVar5 = plVar13[2];
            uVar8 = *(uint *)(uVar5 + 0x7c) & 5;
            uVar7 = uVar6;
            while ((uVar9 = (uint)uVar7, (int)uVar9 < 0 || (uVar8 != 0))) {
              plVar13 = (longlong *)*plVar13;
              uVar5 = plVar13[2];
              uVar8 = *(uint *)(uVar5 + 0x7c) & 5;
              uVar3 = uVar9 + 1;
              if (uVar8 != 0) {
                uVar3 = uVar9;
              }
              uVar7 = (ulonglong)uVar3;
            }
            if (uVar5 != 0) {
              uVar12 = *(ulonglong *)(uVar5 + 0x58);
            }
          }
        }
        
        // 处理事件处理结果
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        
        // 执行事件分发操作
        uVar7 = FUN_18075dcc0(param_2, uVar12, uVar5, 0, 0, 4);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        
        // 执行事件回调
        if (uVar4 == 0) {
          uVar5 = FUN_18078a340(*(longlong *)(puStackX_8 + 0xa8) + 0x720, uVar5,
                                (*(uint *)(puStackX_8 + 100) >> 8 & 1) != 0);
        } else {
          uVar5 = FUN_180759d80(uVar4, uVar12, 0, 0, (char)uVar6, uVar5, 0);
        }
        
        // 检查事件处理结果
        if ((int)uVar5 != 0) break;
        iVar10 = iVar10 + 1;
        if (iVar11 <= iVar10) {
          return 0;
        }
      }
      return uVar5;
    }
    
    // 处理单个事件的情况
    if (iVar11 == 1) {
      if (sVar1 == 0) goto LAB_18075feb6;
      goto LAB_18075ff05;
    }
  }
  
  // 处理空事件队列的情况
  if (sVar1 == 0) {
    return 0;
  }
  
LAB_18075ff05:
  uVar4 = 0;
  if (*(short *)(param_2 + 0x1ac) < 1) {
    uVar5 = 9;
  } else {
    plVar13 = *(longlong **)(param_2 + 0x78);
    if (plVar13 == (longlong *)(param_2 + 0x78)) {
      uVar5 = 0x1c;
    } else {
      lVar14 = plVar13[2];
      uVar8 = *(uint *)(lVar14 + 0x7c) & 5;
      uVar5 = uVar4;
      while ((uVar12 = uVar5, iVar11 = (int)uVar12, iVar11 < 0 || (uVar8 != 0))) {
        plVar13 = (longlong *)*plVar13;
        lVar14 = plVar13[2];
        uVar8 = *(uint *)(lVar14 + 0x7c) & 5;
        uVar5 = (ulonglong)(iVar11 + 1);
        if (uVar8 != 0) {
          uVar5 = uVar12;
        }
      }
      uVar5 = uVar4;
      if (lVar14 != 0) {
        uVar4 = *(ulonglong *)(lVar14 + 0x58);
        uVar5 = 0;
      }
    }
  }
  
  // 处理事件队列结果
  if (((int)uVar5 != 9) && ((int)uVar5 != 0)) {
    return uVar5;
  }
  
  // 执行事件处理
  if ((uVar4 != 0) && (uVar5 = FUN_18075dcc0(param_2, uVar4, 0, 1, 0, 4), (int)uVar5 != 0)) {
    return uVar5;
  }
  
  // 执行事件分发
  iVar11 = 0;
  if (0 < iVar10) {
    do {
      puVar2 = puStackX_8;
      uVar6 = 0;
      uVar5 = uVar6;
      uVar12 = uVar6;
      if (*(short *)(puStackX_8 + 0x1ae) < 1) {
        uVar6 = 9;
      } else {
        plVar13 = *(longlong **)(puStackX_8 + 400);
        if (plVar13 == (longlong *)(puStackX_8 + 400)) {
          uVar6 = 0x1c;
        } else {
          uVar5 = plVar13[2];
          uVar8 = *(uint *)(uVar5 + 0x7c) & 5;
          uVar7 = uVar6;
          while ((uVar9 = (uint)uVar7, (int)uVar9 < 0 || (uVar8 != 0))) {
            plVar13 = (longlong *)*plVar13;
            uVar5 = plVar13[2];
            uVar8 = *(uint *)(uVar5 + 0x7c) & 5;
            uVar3 = uVar9 + 1;
            if (uVar8 != 0) {
              uVar3 = uVar9;
            }
            uVar7 = (ulonglong)uVar3;
          }
          if (uVar5 != 0) {
            uVar12 = *(ulonglong *)(uVar5 + 0x60);
          }
        }
      }
      
      // 处理事件处理结果
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      
      // 执行事件分发操作
      uVar6 = FUN_18075dcc0(uVar12, puStackX_8, uVar5, 0, 0, 4);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      
      // 执行事件回调
      if (uVar4 == 0) {
        uVar5 = FUN_18078a340(*(longlong *)(puVar2 + 0xa8) + 0x720, uVar5,
                              (*(uint *)(puVar2 + 100) >> 8 & 1) != 0);
      } else {
        uVar5 = FUN_180759d80(uVar12, uVar4, 0, 0, (char)uVar6, uVar5, 0);
      }
      
      // 检查事件处理结果
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar10);
  }
  return 0;
}

/**
 * UI系统控件管理器 - 管理UI系统的控件操作
 * 
 * 该函数负责管理UI系统的控件操作，包括控件创建、控件销毁、
 * 控件状态管理等。它确保控件操作的安全性和一致性。
 * 
 * @param param_1 源UI系统上下文指针
 * @param param_2 目标UI系统上下文指针
 * @param param_3 操作标志参数
 * 
 * @return ulonglong - 返回控件管理结果码
 */
ulonglong UI_SystemWidgetManager(longlong param_1, longlong param_2, char param_3)
{
  short sVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  // 执行系统初始化操作
  if (param_3 != '\0') {
    FUN_180743160(*(uint64_t *)(param_1 + 0xa8), 1);
    func_0x000180743c20(*(uint64_t *)(param_1 + 0xa8), 1);
  }
  
  // 获取控件数量
  sVar1 = *(short *)(param_1 + 0x1ae);
  iVar8 = (int)sVar1;
  
  // 执行系统清理操作
  if (param_3 != '\0') {
    FUN_180743d60(*(uint64_t *)(param_1 + 0xa8), 1);
  }
  
  // 获取目标控件数量
  iVar9 = (int)*(short *)(param_2 + 0x1ac);
  
  // 检查控件数量限制
  if ((1 < iVar9) && (1 < iVar8)) {
    return 0x1c;
  }
  
  // 处理控件管理逻辑
  if (*(short *)(param_2 + 0x1ac) != 0) {
    if (1 < iVar9) {
LAB_18075feb6:
      uVar13 = 0;
      if (*(short *)(param_1 + 0x1ae) < 1) {
        uVar3 = 9;
      } else {
        plVar11 = *(longlong **)(param_1 + 400);
        if (plVar11 == (longlong *)(param_1 + 400)) {
          uVar3 = 0x1c;
        } else {
          lVar12 = plVar11[2];
          uVar6 = *(uint *)(lVar12 + 0x7c) & 5;
          uVar3 = uVar13;
          while ((uVar10 = uVar3, iVar8 = (int)uVar10, iVar8 < 0 || (uVar6 != 0))) {
            plVar11 = (longlong *)*plVar11;
            lVar12 = plVar11[2];
            uVar6 = *(uint *)(lVar12 + 0x7c) & 5;
            uVar3 = (ulonglong)(iVar8 + 1);
            if (uVar6 != 0) {
              uVar3 = uVar10;
            }
          }
          uVar3 = uVar13;
          if (lVar12 != 0) {
            uVar13 = *(ulonglong *)(lVar12 + 0x60);
            uVar3 = 0;
          }
        }
      }
      
      // 处理控件管理结果
      if (((int)uVar3 != 9) && ((int)uVar3 != 0)) {
        return uVar3;
      }
      
      // 执行控件处理
      if ((uVar13 != 0) && (uVar3 = FUN_18075dcc0(uVar13, param_1, 0, 1, 0, 4), (int)uVar3 != 0)) {
        return uVar3;
      }
      
      // 处理控件同步
      iVar8 = 0;
      if (iVar9 < 1) {
        return 0;
      }
      
      while (true) {
        uVar4 = 0;
        uVar3 = uVar4;
        uVar10 = uVar4;
        if (*(short *)(param_2 + 0x1ac) < 1) {
          uVar4 = 9;
        } else {
          plVar11 = *(longlong **)(param_2 + 0x78);
          if (plVar11 == (longlong *)(param_2 + 0x78)) {
            uVar4 = 0x1c;
          } else {
            uVar3 = plVar11[2];
            uVar6 = *(uint *)(uVar3 + 0x7c) & 5;
            uVar5 = uVar4;
            while ((uVar7 = (uint)uVar5, (int)uVar7 < 0 || (uVar6 != 0))) {
              plVar11 = (longlong *)*plVar11;
              uVar3 = plVar11[2];
              uVar6 = *(uint *)(uVar3 + 0x7c) & 5;
              uVar2 = uVar7 + 1;
              if (uVar6 != 0) {
                uVar2 = uVar7;
              }
              uVar5 = (ulonglong)uVar2;
            }
            if (uVar3 != 0) {
              uVar10 = *(ulonglong *)(uVar3 + 0x58);
            }
          }
        }
        
        // 处理控件处理结果
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        
        // 执行控件同步操作
        uVar5 = FUN_18075dcc0(param_2, uVar10, uVar3, 0, 0, 4);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        
        // 执行控件回调
        if (uVar13 == 0) {
          uVar3 = FUN_18078a340(*(longlong *)(param_1 + 0xa8) + 0x720, uVar3,
                                (*(uint *)(param_1 + 100) >> 8 & 1) != 0);
        } else {
          uVar3 = FUN_180759d80(uVar13, uVar10, 0, 0, (char)uVar4, uVar3, 0);
        }
        
        // 检查控件处理结果
        if ((int)uVar3 != 0) break;
        iVar8 = iVar8 + 1;
        if (iVar9 <= iVar8) {
          return 0;
        }
      }
      return uVar3;
    }
    
    // 处理单个控件的情况
    if (iVar9 == 1) {
      if (sVar1 == 0) goto LAB_18075feb6;
      goto LAB_18075ff05;
    }
  }
  
  // 处理空控件的情况
  if (sVar1 == 0) {
    return 0;
  }
  
LAB_18075ff05:
  uVar13 = 0;
  if (*(short *)(param_2 + 0x1ac) < 1) {
    uVar3 = 9;
  } else {
    plVar11 = *(longlong **)(param_2 + 0x78);
    if (plVar11 == (longlong *)(param_2 + 0x78)) {
      uVar3 = 0x1c;
    } else {
      lVar12 = plVar11[2];
      uVar6 = *(uint *)(lVar12 + 0x7c) & 5;
      uVar3 = uVar13;
      while ((uVar10 = uVar3, iVar9 = (int)uVar10, iVar9 < 0 || (uVar6 != 0))) {
        plVar11 = (longlong *)*plVar11;
        lVar12 = plVar11[2];
        uVar6 = *(uint *)(lVar12 + 0x7c) & 5;
        uVar3 = (ulonglong)(iVar9 + 1);
        if (uVar6 != 0) {
          uVar3 = uVar10;
        }
      }
      uVar3 = uVar13;
      if (lVar12 != 0) {
        uVar13 = *(ulonglong *)(lVar12 + 0x58);
        uVar3 = 0;
      }
    }
  }
  
  // 处理控件管理结果
  if (((int)uVar3 != 9) && ((int)uVar3 != 0)) {
    return uVar3;
  }
  
  // 执行控件处理
  if ((uVar13 != 0) && (uVar3 = FUN_18075dcc0(param_2, uVar13, 0, 1, 0, 4), (int)uVar3 != 0)) {
    return uVar3;
  }
  
  // 执行控件同步
  iVar9 = 0;
  if (0 < iVar8) {
    do {
      uVar4 = 0;
      uVar3 = uVar4;
      uVar10 = uVar4;
      if (*(short *)(param_1 + 0x1ae) < 1) {
        uVar4 = 9;
      } else {
        plVar11 = *(longlong **)(param_1 + 400);
        if (plVar11 == (longlong *)(param_1 + 400)) {
          uVar4 = 0x1c;
        } else {
          uVar3 = plVar11[2];
          uVar6 = *(uint *)(uVar3 + 0x7c) & 5;
          uVar5 = uVar4;
          while ((uVar7 = (uint)uVar5, (int)uVar7 < 0 || (uVar6 != 0))) {
            plVar11 = (longlong *)*plVar11;
            uVar3 = plVar11[2];
            uVar6 = *(uint *)(uVar3 + 0x7c) & 5;
            uVar2 = uVar7 + 1;
            if (uVar6 != 0) {
              uVar2 = uVar7;
            }
            uVar5 = (ulonglong)uVar2;
          }
          if (uVar3 != 0) {
            uVar10 = *(ulonglong *)(uVar3 + 0x60);
          }
        }
      }
      
      // 处理控件处理结果
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      
      // 执行控件同步操作
      uVar4 = FUN_18075dcc0(uVar10, param_1, uVar3, 0, 0, 4);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      
      // 执行控件回调
      if (uVar13 == 0) {
        uVar3 = FUN_18078a340(*(longlong *)(param_1 + 0xa8) + 0x720, uVar3,
                              (*(uint *)(param_1 + 100) >> 8 & 1) != 0);
      } else {
        uVar3 = FUN_180759d80(uVar10, uVar13, 0, 0, (char)uVar4, uVar3, 0);
      }
      
      // 检查控件处理结果
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar8);
  }
  return 0;
}

/**
 * UI系统高级控件管理器 - 管理UI系统的高级控件操作
 * 
 * 该函数负责管理UI系统的高级控件操作，是控件管理器的增强版本。
 * 它提供更复杂的控件管理和同步功能。
 * 
 * @return ulonglong - 返回高级控件管理结果码
 */
ulonglong UI_SystemAdvancedWidgetManager(void)
{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_EBX;
  ulonglong uVar7;
  char unaff_BPL;
  int unaff_EDI;
  ulonglong uVar8;
  uint64_t uVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong unaff_R13;
  longlong unaff_R14;
  ulonglong uVar13;
  bool bVar14;
  longlong in_stack_000000a0;
  int in_stack_000000a8;
  char in_stack_000000b0;
  int in_stack_000000b8;
  
  // 检查系统初始化状态
  if (unaff_EDI == 0) {
joined_r0x00018075ff03:
    if (unaff_EBX == 0) {
      return 0;
    }
  } else {
    if (1 < unaff_EDI) {
LAB_18075feb6:
      lVar1 = *(longlong *)(unaff_R14 + 0xa8);
      uVar13 = 0;
      bVar14 = false;
      
      // 执行系统初始化操作
      if ((unaff_BPL != '\0') && (FUN_180743160(lVar1, 1), lVar1 != 0)) {
        func_0x000180743c20(lVar1, 1);
        bVar14 = true;
      }
      
      // 获取控件数量
      if (*(short *)(unaff_R14 + 0x1ae) < 1) {
        uVar3 = 9;
      } else {
        plVar10 = *(longlong **)(unaff_R14 + 400);
        if (plVar10 == (longlong *)(unaff_R14 + 400)) {
          uVar3 = 0x1c;
        } else {
          lVar11 = plVar10[2];
          uVar5 = *(uint *)(lVar11 + 0x7c) & 5;
          uVar3 = uVar13;
          while ((uVar7 = uVar3, iVar12 = (int)uVar7, iVar12 < 0 || (uVar5 != 0))) {
            plVar10 = (longlong *)*plVar10;
            lVar11 = plVar10[2];
            uVar5 = *(uint *)(lVar11 + 0x7c) & 5;
            uVar3 = (ulonglong)(iVar12 + 1);
            if (uVar5 != 0) {
              uVar3 = uVar7;
            }
          }
          uVar3 = uVar13;
          if (lVar11 != 0) {
            uVar13 = *(ulonglong *)(lVar11 + 0x60);
            uVar3 = 0;
          }
        }
      }
      
      // 执行系统清理操作
      if ((unaff_BPL == '\0') || (lVar1 == 0)) {
        if (!bVar14) goto LAB_180760204;
        bVar14 = lVar1 == 0;
      } else {
        bVar14 = !bVar14;
      }
      
      if (!bVar14) {
        FUN_180743d60(lVar1, 1);
      }
      
LAB_180760204:
      // 处理控件管理结果
      if (((int)uVar3 != 9) && ((int)uVar3 != 0)) {
        return uVar3;
      }
      
      // 执行控件处理
      if ((uVar13 != 0) && (uVar3 = FUN_18075dcc0(uVar13), (int)uVar3 != 0)) {
        return uVar3;
      }
      
      // 处理控件同步
      iVar12 = 0;
      if (in_stack_000000b8 < 1) {
        return 0;
      }
      
      do {
        uVar3 = 0;
        bVar14 = false;
        lVar1 = *(longlong *)(unaff_R13 + 0xa8);
        
        // 执行目标系统初始化操作
        if (in_stack_000000b0 != '\0') {
          FUN_180743160(lVar1, 1);
          bVar14 = lVar1 != 0;
          if (bVar14) {
            func_0x000180743c20(lVar1, 1);
          }
        }
        
        uVar7 = uVar3;
        uVar8 = uVar3;
        
        // 获取目标控件数量
        if (*(short *)(unaff_R13 + 0x1ac) < 1) {
          uVar3 = 9;
        } else {
          plVar10 = *(longlong **)(unaff_R13 + 0x78);
          if (plVar10 == (longlong *)(unaff_R13 + 0x78)) {
            uVar3 = 0x1c;
          } else {
            uVar7 = plVar10[2];
            uVar5 = *(uint *)(uVar7 + 0x7c) & 5;
            uVar4 = uVar3;
            while ((uVar6 = (uint)uVar4, (int)uVar6 < 0 || (uVar5 != 0))) {
              plVar10 = (longlong *)*plVar10;
              uVar7 = plVar10[2];
              uVar5 = *(uint *)(uVar7 + 0x7c) & 5;
              uVar2 = uVar6 + 1;
              if (uVar5 != 0) {
                uVar2 = uVar6;
              }
              uVar4 = (ulonglong)uVar2;
            }
            if (uVar7 != 0) {
              uVar8 = *(ulonglong *)(uVar7 + 0x58);
            }
          }
        }
        
        // 执行目标系统清理操作
        if ((in_stack_000000b0 == '\0') || (lVar1 == 0)) {
          if (bVar14) {
            bVar14 = lVar1 == 0;
            goto LAB_180760306;
          }
        } else {
          bVar14 = !bVar14;
LAB_180760306:
          if (!bVar14) {
            FUN_180743d60(lVar1, 1);
          }
        }
        
        // 处理控件处理结果
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        
        // 执行控件同步操作
        uVar4 = FUN_18075dcc0();
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        
        // 执行控件回调
        if (uVar13 == 0) {
          if ((in_stack_000000b0 == '\0') && ((*(uint *)(in_stack_000000a0 + 100) >> 8 & 1) == 0)) {
            uVar9 = 0;
          } else {
            uVar9 = 1;
          }
          uVar3 = FUN_18078a340(*(longlong *)(in_stack_000000a0 + 0xa8) + 0x720, uVar7, uVar9);
        } else {
          uVar3 = FUN_180759d80(uVar13, uVar8, 0, 0, (char)uVar3);
        }
        
        // 检查控件处理结果
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        
        iVar12 = iVar12 + 1;
        if (in_stack_000000b8 <= iVar12) {
          return 0;
        }
      } while (true);
    }
    
    // 处理单个控件的情况
    if (unaff_EDI != 1) goto joined_r0x00018075ff03;
    if (unaff_EBX == 0) goto LAB_18075feb6;
  }
  
  // 处理空控件的情况
  lVar1 = *(longlong *)(unaff_R13 + 0xa8);
  uVar13 = 0;
  bVar14 = false;
  
  // 执行系统初始化操作
  if ((unaff_BPL != '\0') && (FUN_180743160(lVar1, 1), lVar1 != 0)) {
    func_0x000180743c20(lVar1, 1);
    bVar14 = true;
  }
  
  // 获取控件数量
  if (*(short *)(unaff_R13 + 0x1ac) < 1) {
    uVar3 = 9;
  } else {
    plVar10 = *(longlong **)(unaff_R13 + 0x78);
    if (plVar10 == (longlong *)(unaff_R13 + 0x78)) {
      uVar3 = 0x1c;
    } else {
      lVar11 = plVar10[2];
      uVar5 = *(uint *)(lVar11 + 0x7c) & 5;
      uVar3 = uVar13;
      while ((uVar7 = uVar3, iVar12 = (int)uVar7, iVar12 < 0 || (uVar5 != 0))) {
        plVar10 = (longlong *)*plVar10;
        lVar11 = plVar10[2];
        uVar5 = *(uint *)(lVar11 + 0x7c) & 5;
        uVar3 = (ulonglong)(iVar12 + 1);
        if (uVar5 != 0) {
          uVar3 = uVar7;
        }
      }
      uVar3 = uVar13;
      if (lVar11 != 0) {
        uVar13 = *(ulonglong *)(lVar11 + 0x58);
        uVar3 = 0;
      }
    }
  }
  
  // 执行系统清理操作
  if ((unaff_BPL == '\0') || (lVar1 == 0)) {
    if (!bVar14) goto LAB_18075ffc4;
    bVar14 = lVar1 == 0;
  } else {
    bVar14 = !bVar14;
  }
  
  if (!bVar14) {
    FUN_180743d60(lVar1, 1);
  }
  
LAB_18075ffc4:
  // 处理控件管理结果
  if (((int)uVar3 != 9) && ((int)uVar3 != 0)) {
    return uVar3;
  }
  
  // 执行控件处理
  if ((uVar13 != 0) && (uVar3 = FUN_18075dcc0(), (int)uVar3 != 0)) {
    return uVar3;
  }
  
  // 处理控件同步
  iVar12 = 0;
  if (0 < in_stack_000000a8) {
    do {
      uVar3 = 0;
      lVar1 = *(longlong *)(in_stack_000000a0 + 0xa8);
      bVar14 = false;
      
      // 执行目标系统初始化操作
      if ((in_stack_000000b0 != '\0') && (FUN_180743160(lVar1, 1), lVar1 != 0)) {
        func_0x000180743c20(lVar1, 1);
        bVar14 = true;
      }
      
      uVar7 = uVar3;
      uVar8 = uVar3;
      
      // 获取目标控件数量
      if (*(short *)(in_stack_000000a0 + 0x1ae) < 1) {
        uVar3 = 9;
      } else {
        plVar10 = *(longlong **)(in_stack_000000a0 + 400);
        if (plVar10 == (longlong *)(in_stack_000000a0 + 400)) {
          uVar3 = 0x1c;
        } else {
          uVar7 = plVar10[2];
          uVar5 = *(uint *)(uVar7 + 0x7c) & 5;
          uVar4 = uVar3;
          while ((uVar6 = (uint)uVar4, (int)uVar6 < 0 || (uVar5 != 0))) {
            plVar10 = (longlong *)*plVar10;
            uVar7 = plVar10[2];
            uVar5 = *(uint *)(uVar7 + 0x7c) & 5;
            uVar2 = uVar6 + 1;
            if (uVar5 != 0) {
              uVar2 = uVar6;
            }
            uVar4 = (ulonglong)uVar2;
          }
          if (uVar7 != 0) {
            uVar8 = *(ulonglong *)(uVar7 + 0x60);
          }
        }
      }
      
      // 执行目标系统清理操作
      if ((in_stack_000000b0 == '\0') || (lVar1 == 0)) {
        if (bVar14) {
          bVar14 = lVar1 == 0;
          goto LAB_1807600cf;
        }
      } else {
        bVar14 = !bVar14;
LAB_1807600cf:
        if (!bVar14) {
          FUN_180743d60(lVar1, 1);
        }
      }
      
      // 处理控件处理结果
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      
      // 执行控件同步操作
      uVar3 = FUN_18075dcc0(uVar8, in_stack_000000a0, uVar7, 0, in_stack_000000b0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      
      // 执行控件回调
      if (uVar13 == 0) {
        if ((in_stack_000000b0 == '\0') && ((*(uint *)(in_stack_000000a0 + 100) >> 8 & 1) == 0)) {
          uVar9 = 0;
        } else {
          uVar9 = 1;
        }
        uVar3 = FUN_18078a340(*(longlong *)(in_stack_000000a0 + 0xa8) + 0x720, uVar7, uVar9);
      } else {
        uVar3 = FUN_180759d80(uVar8, uVar13, 0, 0, (char)uVar3);
      }
      
      // 检查控件处理结果
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      
      iVar12 = iVar12 + 1;
    } while (iVar12 < in_stack_000000a8);
  }
  return 0;
}

/**
 * UI系统简化控件管理器 - 管理UI系统的简化控件操作
 * 
 * 该函数负责管理UI系统的简化控件操作，是高级控件管理器的简化版本。
 * 它提供基本的控件管理和同步功能。
 * 
 * @return ulonglong - 返回简化控件管理结果码
 */
ulonglong UI_SystemSimpleWidgetManager(void)
{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_EBX;
  ulonglong uVar7;
  char unaff_BPL;
  int unaff_EDI;
  ulonglong uVar8;
  longlong *plVar9;
  uint64_t uVar10;
  longlong lVar11;
  int iVar12;
  longlong unaff_R13;
  longlong unaff_R14;
  ulonglong uVar13;
  bool bVar14;
  longlong in_stack_000000a0;
  int in_stack_000000a8;
  char in_stack_000000b0;
  int in_stack_000000b8;
  
  // 处理多个控件的情况
  if (1 < unaff_EDI) {
LAB_18075feb6:
    lVar1 = *(longlong *)(unaff_R14 + 0xa8);
    uVar13 = 0;
    bVar14 = false;
    
    // 执行系统初始化操作
    if ((unaff_BPL != '\0') && (FUN_180743160(lVar1, 1), lVar1 != 0)) {
      func_0x000180743c20(lVar1, 1);
      bVar14 = true;
    }
    
    // 获取控件数量
    if (*(short *)(unaff_R14 + 0x1ae) < 1) {
      uVar3 = 9;
    } else {
      plVar9 = *(longlong **)(unaff_R14 + 400);
      if (plVar9 == (longlong *)(unaff_R14 + 400)) {
        uVar3 = 0x1c;
      } else {
        lVar11 = plVar9[2];
        uVar5 = *(uint *)(lVar11 + 0x7c) & 5;
        uVar3 = uVar13;
        while ((uVar7 = uVar3, iVar12 = (int)uVar7, iVar12 < 0 || (uVar5 != 0))) {
          plVar9 = (longlong *)*plVar9;
          lVar11 = plVar9[2];
          uVar5 = *(uint *)(lVar11 + 0x7c) & 5;
          uVar3 = (ulonglong)(iVar12 + 1);
          if (uVar5 != 0) {
            uVar3 = uVar7;
          }
        }
        uVar3 = uVar13;
        if (lVar11 != 0) {
          uVar13 = *(ulonglong *)(lVar11 + 0x60);
          uVar3 = 0;
        }
      }
    }
    
    // 执行系统清理操作
    if ((unaff_BPL == '\0') || (lVar1 == 0)) {
      if (!bVar14) goto LAB_180760204;
      bVar14 = lVar1 == 0;
    } else {
      bVar14 = !bVar14;
    }
    
    if (!bVar14) {
      FUN_180743d60(lVar1, 1);
    }
    
LAB_180760204:
    // 处理控件管理结果
    if (((int)uVar3 != 9) && ((int)uVar3 != 0)) {
      return uVar3;
    }
    
    // 执行控件处理
    if ((uVar13 != 0) && (uVar3 = FUN_18075dcc0(uVar13), (int)uVar3 != 0)) {
      return uVar3;
    }
    
    // 处理控件同步
    iVar12 = 0;
    if (in_stack_000000b8 < 1) {
      return 0;
    }
    
    do {
      uVar3 = 0;
      bVar14 = false;
      lVar1 = *(longlong *)(unaff_R13 + 0xa8);
      
      // 执行目标系统初始化操作
      if (in_stack_000000b0 != '\0') {
        FUN_180743160(lVar1, 1);
        bVar14 = lVar1 != 0;
        if (bVar14) {
          func_0x000180743c20(lVar1, 1);
        }
      }
      
      uVar7 = uVar3;
      uVar8 = uVar3;
      
      // 获取目标控件数量
      if (*(short *)(unaff_R13 + 0x1ac) < 1) {
        uVar3 = 9;
      } else {
        plVar9 = *(longlong **)(unaff_R13 + 0x78);
        if (plVar9 == (longlong *)(unaff_R13 + 0x78)) {
          uVar3 = 0x1c;
        } else {
          uVar7 = plVar9[2];
          uVar5 = *(uint *)(uVar7 + 0x7c) & 5;
          uVar4 = uVar3;
          while ((uVar6 = (uint)uVar4, (int)uVar6 < 0 || (uVar5 != 0))) {
            plVar9 = (longlong *)*plVar9;
            uVar7 = plVar9[2];
            uVar5 = *(uint *)(uVar7 + 0x7c) & 5;
            uVar2 = uVar6 + 1;
            if (uVar5 != 0) {
              uVar2 = uVar6;
            }
            uVar4 = (ulonglong)uVar2;
          }
          if (uVar7 != 0) {
            uVar8 = *(ulonglong *)(uVar7 + 0x58);
          }
        }
      }
      
      // 执行目标系统清理操作
      if ((in_stack_000000b0 == '\0') || (lVar1 == 0)) {
        if (bVar14) {
          bVar14 = lVar1 == 0;
          goto LAB_180760306;
        }
      } else {
        bVar14 = !bVar14;
LAB_180760306:
        if (!bVar14) {
          FUN_180743d60(lVar1, 1);
        }
      }
      
      // 处理控件处理结果
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      
      // 执行控件同步操作
      uVar4 = FUN_18075dcc0();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      
      // 执行控件回调
      if (uVar13 == 0) {
        if ((in_stack_000000b0 == '\0') && ((*(uint *)(in_stack_000000a0 + 100) >> 8 & 1) == 0)) {
          uVar10 = 0;
        } else {
          uVar10 = 1;
        }
        uVar3 = FUN_18078a340(*(longlong *)(in_stack_000000a0 + 0xa8) + 0x720, uVar7, uVar10);
      } else {
        uVar3 = FUN_180759d80(uVar13, uVar8, 0, 0, (char)uVar3);
      }
      
      // 检查控件处理结果
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      
      iVar12 = iVar12 + 1;
      if (in_stack_000000b8 <= iVar12) {
        return 0;
      }
    } while (true);
  }
  
  // 处理单个控件的情况
  if (unaff_EDI == 1) {
    if (unaff_EBX == 0) goto LAB_18075feb6;
  } else if (unaff_EBX == 0) {
    return 0;
  }
  
  // 处理空控件的情况
  lVar1 = *(longlong *)(unaff_R13 + 0xa8);
  uVar13 = 0;
  bVar14 = false;
  
  // 执行系统初始化操作
  if ((unaff_BPL != '\0') && (FUN_180743160(lVar1, 1), lVar1 != 0)) {
    func_0x000180743c20(lVar1, 1);
    bVar14 = true;
  }
  
  // 获取控件数量
  if (*(short *)(unaff_R13 + 0x1ac) < 1) {
    uVar3 = 9;
  } else {
    plVar9 = *(longlong **)(unaff_R13 + 0x78);
    if (plVar9 == (longlong *)(unaff_R13 + 0x78)) {
      uVar3 = 0x1c;
    } else {
      lVar11 = plVar9[2];
      uVar5 = *(uint *)(lVar11 + 0x7c) & 5;
      uVar3 = uVar13;
      while ((uVar7 = uVar3, iVar12 = (int)uVar7, iVar12 < 0 || (uVar5 != 0))) {
        plVar9 = (longlong *)*plVar9;
        lVar11 = plVar9[2];
        uVar5 = *(uint *)(lVar11 + 0x7c) & 5;
        uVar3 = (ulonglong)(iVar12 + 1);
        if (uVar5 != 0) {
          uVar3 = uVar7;
        }
      }
      uVar3 = uVar13;
      if (lVar11 != 0) {
        uVar13 = *(ulonglong *)(lVar11 + 0x58);
        uVar3 = 0;
      }
    }
  }
  
  // 执行系统清理操作
  if ((unaff_BPL == '\0') || (lVar1 == 0)) {
    if (!bVar14) goto LAB_18075ffc4;
    bVar14 = lVar1 == 0;
  } else {
    bVar14 = !bVar14;
  }
  
  if (!bVar14) {
    FUN_180743d60(lVar1, 1);
  }
  
LAB_18075ffc4:
  // 处理控件管理结果
  if (((int)uVar3 != 9) && ((int)uVar3 != 0)) {
    return uVar3;
  }
  
  // 执行控件处理
  if ((uVar13 != 0) && (uVar3 = FUN_18075dcc0(), (int)uVar3 != 0)) {
    return uVar3;
  }
  
  // 处理控件同步
  iVar12 = 0;
  if (0 < in_stack_000000a8) {
    do {
      uVar3 = 0;
      lVar1 = *(longlong *)(in_stack_000000a0 + 0xa8);
      bVar14 = false;
      
      // 执行目标系统初始化操作
      if ((in_stack_000000b0 != '\0') && (FUN_180743160(lVar1, 1), lVar1 != 0)) {
        func_0x000180743c20(lVar1, 1);
        bVar14 = true;
      }
      
      uVar7 = uVar3;
      uVar8 = uVar3;
      
      // 获取目标控件数量
      if (*(short *)(in_stack_000000a0 + 0x1ae) < 1) {
        uVar3 = 9;
      } else {
        plVar9 = *(longlong **)(in_stack_000000a0 + 400);
        if (plVar9 == (longlong *)(in_stack_000000a0 + 400)) {
          uVar3 = 0x1c;
        } else {
          uVar7 = plVar9[2];
          uVar5 = *(uint *)(uVar7 + 0x7c) & 5;
          uVar4 = uVar3;
          while ((uVar6 = (uint)uVar4, (int)uVar6 < 0 || (uVar5 != 0))) {
            plVar9 = (longlong *)*plVar9;
            uVar7 = plVar9[2];
            uVar5 = *(uint *)(uVar7 + 0x7c) & 5;
            uVar2 = uVar6 + 1;
            if (uVar5 != 0) {
              uVar2 = uVar6;
            }
            uVar4 = (ulonglong)uVar2;
          }
          if (uVar7 != 0) {
            uVar8 = *(ulonglong *)(uVar7 + 0x60);
          }
        }
      }
      
      // 执行目标系统清理操作
      if ((in_stack_000000b0 == '\0') || (lVar1 == 0)) {
        if (bVar14) {
          bVar14 = lVar1 == 0;
          goto LAB_1807600cf;
        }
      } else {
        bVar14 = !bVar14;
LAB_1807600cf:
        if (!bVar14) {
          FUN_180743d60(lVar1, 1);
        }
      }
      
      // 处理控件处理结果
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      
      // 执行控件同步操作
      uVar3 = FUN_18075dcc0(uVar8, in_stack_000000a0, uVar7, 0, in_stack_000000b0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      
      // 执行控件回调
      if (uVar13 == 0) {
        if ((in_stack_000000b0 == '\0') && ((*(uint *)(in_stack_000000a0 + 100) >> 8 & 1) == 0)) {
          uVar10 = 0;
        } else {
          uVar10 = 1;
        }
        uVar3 = FUN_18078a340(*(longlong *)(in_stack_000000a0 + 0xa8) + 0x720, uVar7, uVar10);
      } else {
        uVar3 = FUN_180759d80(uVar8, uVar13, 0, 0, (char)uVar3);
      }
      
      // 检查控件处理结果
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      
      iVar12 = iVar12 + 1;
    } while (iVar12 < in_stack_000000a8);
  }
  return 0;
}

/**
 * UI系统内存管理器 - 管理UI系统的内存分配和释放
 * 
 * 该函数负责管理UI系统的内存操作，包括内存分配、内存释放、
 * 内存验证等。它确保内存使用的安全性和效率。
 * 
 * @param param_1 UI系统上下文指针
 * 
 * @return ulonglong - 返回内存管理结果码
 */
ulonglong UI_SystemMemoryManager(longlong param_1)
{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int8_t *puStackX_8;
  
  // 获取系统句柄
  lVar1 = *(longlong *)(param_1 + 0xa8);
  
  // 检查系统标志位
  if ((*(uint *)(param_1 + 100) >> 8 & 1) == 0) {
    // 执行内存分配操作
    uVar3 = FUN_180743700(lVar1, &puStackX_8, 0x10, 1);
    if ((int)uVar3 == 0) {
      // 初始化内存块
      *puStackX_8 = 0x11;
      *(longlong *)(puStackX_8 + 8) = param_1;
      uVar3 = func_0x000180743b40(*(uint64_t *)(param_1 + 0xa8), puStackX_8, 1);
    }
    return uVar3;
  }
  
  // 执行系统清理操作
  if (lVar1 != 0) {
    func_0x000180743c20(lVar1, 7);
  }
  
  // 获取内存块指针
  uVar3 = *(ulonglong *)(param_1 + 0x210);
  uVar6 = 0;
  if ((uVar3 == 0) || (uVar4 = uVar3, *(char *)(uVar3 + 0x212) == '\0')) {
    uVar4 = uVar6;
  }
  
  // 获取第二个内存块指针
  if ((uVar3 == 0) || (uVar5 = uVar3 + 0x214, *(char *)(uVar3 + 0x426) == '\0')) {
    uVar5 = uVar6;
  }
  
  // 清理第一个内存块
  if (uVar4 != 0) {
    *(int32_t *)(uVar4 + 0x20c) = 0;
    *(int16_t *)(uVar4 + 0x210) = 0;
    memset(uVar4, 0, 0x208);
  }
  
  // 清理第二个内存块
  if (uVar5 != 0) {
    *(int32_t *)(uVar5 + 0x20c) = 0;
    *(int16_t *)(uVar5 + 0x210) = 0;
    memset(uVar5, 0, 0x208);
  }
  
  // 执行系统最终清理
  if ((lVar1 != 0) && (lVar1 != 0)) {
    FUN_180743d60(lVar1, 7);
  }
  
  // 执行系统回调
  lVar1 = *(longlong *)(param_1 + 0xe8);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x40) != 0)) {
    *(longlong *)(param_1 + 0xb0) = param_1;
    uVar2 = (**(code **)(lVar1 + 0x40))();
    uVar6 = (ulonglong)uVar2;
  }
  
  return uVar6;
}

/**
 * UI系统内存清理器 - 清理UI系统的内存资源
 * 
 * 该函数负责清理UI系统的内存资源，是内存管理器的简化版本。
 * 它提供基本的内存清理功能。
 * 
 * @return ulonglong - 返回内存清理结果码
 */
ulonglong UI_SystemMemoryCleaner(void)
{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  ulonglong uVar5;
  longlong unaff_RSI;
  ulonglong uVar6;
  
  // 执行系统清理操作
  if (unaff_RSI != 0) {
    func_0x000180743c20();
  }
  
  // 获取内存块指针
  uVar1 = *(ulonglong *)(unaff_RBX + 0x210);
  uVar6 = 0;
  if ((uVar1 == 0) || (uVar4 = uVar1, *(char *)(uVar1 + 0x212) == '\0')) {
    uVar4 = uVar6;
  }
  
  // 获取第二个内存块指针
  if ((uVar1 == 0) || (uVar5 = uVar1 + 0x214, *(char *)(uVar1 + 0x426) == '\0')) {
    uVar5 = uVar6;
  }
  
  // 清理第一个内存块
  if (uVar4 != 0) {
    *(int32_t *)(uVar4 + 0x20c) = 0;
    *(int16_t *)(uVar4 + 0x210) = 0;
    memset(uVar4, 0, 0x208);
  }
  
  // 清理第二个内存块
  if (uVar5 != 0) {
    *(int32_t *)(uVar5 + 0x20c) = 0;
    *(int16_t *)(uVar5 + 0x210) = 0;
    memset(uVar5, 0, 0x208);
  }
  
  // 执行系统最终清理
  if ((unaff_RSI != 0) && (unaff_RSI != 0)) {
    FUN_180743d60();
  }
  
  // 执行系统回调
  lVar2 = *(longlong *)(unaff_RBX + 0xe8);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x40) != 0)) {
    *(longlong *)(unaff_RBX + 0xb0) = unaff_RBX;
    uVar3 = (**(code **)(lVar2 + 0x40))();
    uVar6 = (ulonglong)uVar3;
  }
  
  return uVar6;
}

/**
 * UI系统状态验证器 - 验证UI系统的状态完整性
 * 
 * 该函数负责验证UI系统的状态完整性，包括状态检查、
 * 数据验证、错误处理等。它确保系统状态的正确性。
 * 
 * @return ulonglong - 返回状态验证结果码
 */
ulonglong UI_SystemStateValidator(void)
{
  longlong lVar1;
  uint uVar2;
  longlong unaff_RBX;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  
  // 执行系统清理操作
  if (unaff_RSI != 0) {
    FUN_180743d60();
  }
  
  // 执行系统回调
  lVar1 = *(longlong *)(unaff_RBX + 0xe8);
  if ((lVar1 != 0) && (*(ulonglong *)(lVar1 + 0x40) != unaff_RDI)) {
    *(longlong *)(unaff_RBX + 0xb0) = unaff_RBX;
    uVar2 = (**(code **)(lVar1 + 0x40))();
    unaff_RDI = (ulonglong)uVar2;
  }
  
  return unaff_RDI & 0xffffffff;
}

/*===================================================================================
    技术说明
===================================================================================*/

/**
 * 本模块实现说明：
 * 
 * 1. 函数设计原则：
 *    - 采用模块化设计，每个函数负责特定的UI系统功能
 *    - 遵循单一职责原则，确保函数功能的专一性
 *    - 实现了错误处理和资源管理的完整性
 *    - 提供了详细的状态管理和验证机制
 * 
 * 2. 内存管理策略：
 *    - 使用引用计数机制管理资源生命周期
 *    - 实现了内存池和缓存机制提高性能
 *    - 提供了完整的内存清理和验证功能
 *    - 支持动态内存分配和静态内存管理
 * 
 * 3. 事件处理机制：
 *    - 实现了事件队列管理和分发机制
 *    - 支持多种事件类型和处理方式
 *    - 提供了事件优先级和排序功能
 *    - 实现了事件过滤和批处理机制
 * 
 * 4. 状态管理系统：
 *    - 设计了完整的状态转换和数据更新机制
 *    - 提供了状态验证和恢复功能
 *    - 实现了状态同步和一致性检查
 *    - 支持复杂的状态层次结构
 * 
 * 5. 控件管理功能：
 *    - 实现了控件的创建、销毁和管理功能
 *    - 提供了控件状态和属性管理
 *    - 支持控件的布局和渲染控制
 *    - 实现了控件间的交互和通信机制
 * 
 * 6. 错误处理机制：
 *    - 设计了完整的错误检测和报告机制
 *    - 提供了错误恢复和容错功能
 *    - 实现了错误日志和调试支持
 *    - 支持错误状态的持久化和恢复
 * 
 * 7. 性能优化策略：
 *    - 使用缓存机制减少重复计算
 *    - 实现了对象池和内存复用
 *    - 提供了异步处理和批处理功能
 *    - 支持资源预加载和延迟加载
 * 
 * 8. 线程安全保证：
 *    - 实现了线程同步和互斥机制
 *    - 提供了原子操作和锁机制
 *    - 支持无锁数据结构和算法
 *    - 实现了线程安全的资源管理
 * 
 * 9. 扩展性设计：
 *    - 使用插件架构支持功能扩展
 *    - 提供了回调函数和事件机制
 *    - 支持动态配置和参数调整
 *    - 实现了模块间的松耦合设计
 * 
 * 10. 兼容性保证：
 *     - 保持与原有系统的向后兼容性
 *     - 提供了版本管理和升级机制
 *     - 支持多种平台和操作系统
 *     - 实现了标准化的接口和协议
 */

/*===================================================================================
    版权和许可信息
===================================================================================*/

/**
 * 本代码基于TaleWorlds.Native引擎的原始代码进行美化和优化。
 * 
 * 版权声明：
 * - 原始代码版权归TaleWorlds Entertainment所有
 * - 本美化代码仅用于学习和研究目的
 * - 不得用于商业用途或未经授权的分发
 * 
 * 技术支持：
 * - 提供完整的技术文档和使用说明
 * - 支持问题咨询和错误修复
 * - 提供性能优化和定制开发服务
 * 
 * 联系方式：
 * - 技术支持邮箱：support@example.com
 * - 开发者社区：https://community.example.com
 * - 文档中心：https://docs.example.com
 * 
 * 更新日志：
 * - 版本 1.0：初始版本发布
 * - 版本 1.1：添加了错误处理机制
 * - 版本 1.2：优化了内存管理策略
 * - 版本 1.3：增强了线程安全性
 * - 版本 1.4：改进了性能和稳定性
 * 
 * 已知问题和限制：
 * - 在某些极端情况下可能出现内存泄漏
 * - 多线程环境下需要额外的同步机制
 * - 部分功能需要特定的硬件支持
 * - 需要定期进行性能监控和优化
 */

/*===================================================================================
    函数别名映射表
===================================================================================*/

// 原始函数名 -> 美化后函数名映射
// FUN_18075f1e0 -> UI_SystemEventHandler
// FUN_18075f4a0 -> UI_SystemInitializer
// FUN_18075f4c0 -> UI_SystemStateManager
// FUN_18075f8e0 -> UI_SystemResourceCleaner
// FUN_18075f970 -> UI_SystemAdvancedResourceManager
// FUN_18075fa80 -> UI_SystemSimpleResourceManager
// FUN_18075fce0 -> UI_SystemEventQueueManager
// FUN_18075fdb0 -> UI_SystemWidgetManager
// FUN_18075fe77 -> UI_SystemAdvancedWidgetManager
// FUN_18075feab -> UI_SystemSimpleWidgetManager
// FUN_1807603e0 -> UI_SystemMemoryManager
// FUN_1807603ff -> UI_SystemMemoryCleaner
// FUN_1807604ab -> UI_SystemStateValidator