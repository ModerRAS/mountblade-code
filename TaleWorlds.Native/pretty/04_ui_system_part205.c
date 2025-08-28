#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part205.c - UI系统管理模块
// 本模块包含UI系统的核心管理函数，负责UI初始化、事件处理、内存管理等功能

// 系统常量定义
#define UI_SYSTEM_SUCCESS 0x0           // UI系统操作成功
#define UI_SYSTEM_ERROR_INIT 0x1f        // UI系统初始化错误
#define UI_SYSTEM_ERROR_MEMORY 0x26      // UI系统内存分配错误
#define UI_SYSTEM_ERROR_STATE 0x42       // UI系统状态错误
#define UI_SYSTEM_ERROR_PARAM 0x43       // UI系统参数错误

// UI系统偏移量常量
#define UI_OFFSET_VTABLE 0x400           // 虚函数表偏移量
#define UI_OFFSET_STATUS 0x31            // 状态标志偏移量
#define UI_OFFSET_SIZE 0x24              // 尺寸信息偏移量
#define UI_OFFSET_COUNT 0x14             // 计数器偏移量
#define UI_OFFSET_DATA 0x48              // 数据指针偏移量
#define UI_OFFSET_WIDTH 0x280            // 宽度信息偏移量
#define UI_OFFSET_CLEANUP 0x368          // 清理函数偏移量
#define UI_OFFSET_HANDLER 0x3a8          // 事件处理器偏移量
#define UI_OFFSET_RENDER 0x3b0           // 渲染器偏移量

// UI系统组件类型定义
typedef struct {
    uint64_t* vtable;        // 虚函数表指针
    uint32_t status;         // 组件状态
    uint32_t size;           // 组件尺寸
    uint32_t count;          // 元素计数
    void* data;              // 数据指针
    void* renderer;          // 渲染器指针
    void* handler;          // 事件处理器
} UIComponent;

// UI系统内存管理器类型定义
typedef struct {
    void* primary_buffer;    // 主缓冲区
    void* secondary_buffer;  // 次缓冲区
    void* index_buffer;      // 索引缓冲区
    uint32_t buffer_size;    // 缓冲区大小
    uint32_t element_count;  // 元素数量
} UIMemoryManager;

// UI系统渲染器类型定义
typedef struct {
    float* vertex_buffer;    // 顶点缓冲区
    float* texture_coords;   // 纹理坐标
    uint32_t vertex_count;   // 顶点数量
    uint32_t texture_id;     // 纹理ID
} UIRenderer;

// UI系统事件处理器类型定义
typedef struct {
    void (*on_click)(void*);     // 点击事件
    void (*on_hover)(void*);     // 悬停事件
    void (*on_scroll)(void*);    // 滚动事件
    void (*on_focus)(void*);     // 焦点事件
} UIEventHandler;

// 函数别名定义
#define UI_EmptyFunction FUN_180788e4d
#define UI_InitializeSystem FUN_180788e60
#define UI_ShutdownSystem FUN_180788f20
#define UI_SecurityCheck FUN_180788f70
#define UI_ProcessEvents FUN_180788fe0
#define UI_TraverseComponents FUN_180789122
#define UI_ProcessLoop FUN_18078913f
#define UI_ReturnSuccess FUN_1807891b1
#define UI_ReturnSuccess2 FUN_1807891bb
#define UI_CleanupResources FUN_1807891d0
#define UI_ReleaseResources FUN_180789205
#define UI_ResetSystem FUN_180789221
#define UI_ResetSystem2 FUN_18078922b
#define UI_ClearSystem FUN_18078923c
#define UI_BatchProcess FUN_180789283
#define UI_ProcessLinkedList FUN_180789292
#define UI_EmptyFunction2 FUN_1807892d1
#define UI_EmptyFunction3 FUN_1807892d6
#define UI_CheckStatus FUN_180789300
#define UI_RecursiveProcess FUN_180789360
#define UI_AllocateMemory FUN_180789470
#define UI_AllocateMemory2 FUN_1807894bb
#define UI_AllocateMemory3 FUN_1807894e0
#define UI_EmptyFunction4 FUN_1807895a2
#define UI_SetupMemory FUN_1807895b5
#define UI_InitializeRenderer FUN_18078961b
#define UI_InitializeRenderer2 FUN_1807896ae
#define UI_InitializeRenderer3 FUN_18078971b
#define UI_HandleMemoryError FUN_18078978e
#define UI_HandleInitError FUN_180789798
#define UI_ProcessData FUN_1807897b0

/**
 * UI_EmptyFunction - 空函数
 * 
 * 这是一个占位函数，不执行任何操作，仅用于保持API兼容性
 * 
 * 原始实现：FUN_180788e4d
 */
void UI_EmptyFunction(void)
{
    return;
}



/**
 * UI_InitializeSystem - UI系统初始化检查
 * 
 * 检查UI系统是否正确初始化，验证各个组件的状态
 * 
 * @param system_ptr 系统指针
 * @param component_ptr 组件指针
 * @return 初始化结果：0=成功，0x42=状态错误
 * 
 * 原始实现：FUN_180788e60
 */
uint64_t UI_InitializeSystem(longlong system_ptr, longlong component_ptr)
{
    int result1;
    int result2;
    int temp_array[2];
    
    // 检查虚函数表是否初始化
    if (*(code **)(system_ptr + UI_OFFSET_VTABLE) == (code *)0x0) {
        return UI_SYSTEM_ERROR_STATE;
    }
    
    // 检查组件计数器
    if (*(int *)(component_ptr + UI_OFFSET_COUNT) == 0) {
        return UI_SYSTEM_SUCCESS;
    }
    
    // 检查状态标志
    if (*(char *)(component_ptr + UI_OFFSET_STATUS) != '\0') {
        return UI_SYSTEM_SUCCESS;
    }
    
    // 初始化临时数组
    temp_array[0] = 0;
    
    // 调用初始化函数
    result2 = (**(code **)(system_ptr + UI_OFFSET_VTABLE))(system_ptr + 8, component_ptr, temp_array);
    
    if (result2 == 0) {
        // 计算偏移量
        result2 = temp_array[0] - *(int *)(component_ptr + UI_OFFSET_SIZE);
        
        // 边界检查
        if (((result2 < 0) && (result2 = result2 + *(int *)(component_ptr + UI_OFFSET_SIZE), result2 < 0)) ||
            (*(int *)(component_ptr + UI_OFFSET_SIZE) < result2)) {
            result2 = 0;
        }
        
        // 检查数据指针
        if (*(longlong *)(component_ptr + UI_OFFSET_DATA) == 0) {
            if (result2 < 1) {
                return UI_SYSTEM_SUCCESS;
            }
        } else {
            // 获取宽度信息
            result1 = *(int *)(*(longlong *)(component_ptr + UI_OFFSET_DATA) + UI_OFFSET_WIDTH);
            if (result2 < result1 * 3) {
                return UI_SYSTEM_SUCCESS;
            }
            
            // 调整结果值
            result2 = result2 - (result2 % result1 + result1);
        }
        
        // 处理初始化结果
        result2 = FUN_1807881c0(system_ptr, component_ptr, result2);
        if (result2 == 0) {
            return UI_SYSTEM_SUCCESS;
        }
    }
    
    // 设置状态标志
    *(int8_t *)(component_ptr + UI_OFFSET_STATUS) = 1;
    return UI_SYSTEM_SUCCESS;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180788f20(longlong param_1)
void FUN_180788f20(longlong param_1)

{
  if (*(code **)(param_1 + 0x368) != (code *)0x0) {
    (**(code **)(param_1 + 0x368))(param_1 + 8);
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1,&UNK_18095ac80,0x56,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180788f70(longlong *param_1)

{
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_18095ac80,0x76f,1);
  }
  return 0;
}



uint64_t FUN_180788fe0(longlong param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int32_t auStackX_8 [2];
  int32_t auStackX_10 [2];
  int32_t auStackX_18 [4];
  uint64_t in_stack_ffffffffffffffa8;
  uint uVar5;
  uint64_t in_stack_ffffffffffffffb0;
  uint7 uVar7;
  ulonglong uVar6;
  uint64_t in_stack_ffffffffffffffb8;
  uint uVar9;
  ulonglong uVar8;
  
  uVar5 = (uint)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar9 = (uint)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  *(int16_t *)(*(longlong *)(param_1 + 0x48) + 0x127f4) = 0;
  *(int16_t *)(*(longlong *)(param_1 + 0x48) + 0x127f2) = 0;
  *(int16_t *)(*(longlong *)(param_1 + 0x48) + 0x127f0) = 0;
  if ((*(code **)(param_1 + 0x358) == (code *)0x0) ||
     (uVar3 = (**(code **)(param_1 + 0x358))(param_1 + 8), (int)uVar3 == 0)) {
    lVar1 = *(longlong *)(param_1 + 0x48);
    uVar7 = (uint7)((ulonglong)in_stack_ffffffffffffffb0 >> 8);
    if (*(longlong *)(lVar1 + 0x10f88) == 0) {
      if ((*(longlong *)(param_1 + 0x380) != 0) &&
         (uVar3 = FUN_180767c00(param_1 + 0x1c0,&UNK_18095ad08,&UNK_1807872a0,param_1,
                                (ulonglong)uVar5 << 0x20,(ulonglong)uVar7 << 8,
                                (ulonglong)uVar9 << 0x20,lVar1,1), (int)uVar3 != 0)) {
        return uVar3;
      }
    }
    else {
      uVar8 = (ulonglong)uVar9 << 0x20;
      uVar6 = CONCAT71(uVar7,1);
      uVar3 = FUN_180767c00(param_1 + 0x70,&UNK_18095ad08,FUN_1807863b0,param_1,
                            (ulonglong)uVar5 << 0x20,uVar6,uVar8,lVar1,1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if ((*(longlong *)(param_1 + 0x380) != 0) &&
         (uVar3 = FUN_180767c00(param_1 + 0x1c0,&UNK_18095ad20,&UNK_1807872a0,param_1,1,
                                uVar6 & 0xffffffffffffff00,uVar8 & 0xffffffff00000000,
                                *(uint64_t *)(param_1 + 0x48),1), (int)uVar3 != 0)) {
        return uVar3;
      }
    }
    if (*(longlong *)(param_1 + 0x3a8) != 0) {
      puVar4 = (uint64_t *)(*(longlong *)(param_1 + 0x48) + 0x6c0);
      for (puVar2 = (uint64_t *)*puVar4; puVar2 != puVar4; puVar2 = (uint64_t *)*puVar2) {
        auStackX_18[0] = 0;
        auStackX_10[0] = 0;
        auStackX_8[0] = 0;
        (**(code **)(param_1 + 0x3a8))
                  (param_1 + 8,*(int32_t *)(puVar2 + 4),puVar2[3],(longlong)puVar2 + 0x24,
                   auStackX_18,auStackX_10,auStackX_8);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



uint64_t FUN_180789122(void)

{
  uint64_t *puVar1;
  longlong unaff_RBX;
  uint64_t *puVar2;
  int8_t *puStack0000000000000028;
  int8_t *puStack0000000000000030;
  
  puVar2 = (uint64_t *)(*(longlong *)(unaff_RBX + 0x48) + 0x6c0);
  for (puVar1 = (uint64_t *)*puVar2; puVar1 != puVar2; puVar1 = (uint64_t *)*puVar1) {
    puStack0000000000000030 = &stack0x00000080;
    puStack0000000000000028 = &stack0x00000088;
    (**(code **)(unaff_RBX + 0x3a8))
              (unaff_RBX + 8,*(int32_t *)(puVar1 + 4),puVar1[3],(longlong)puVar1 + 0x24,
               &stack0x00000090);
  }
  return 0;
}



uint64_t FUN_18078913f(void)

{
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int8_t *puStack0000000000000028;
  int8_t *puStack0000000000000030;
  
  do {
    puStack0000000000000030 = &stack0x00000080;
    puStack0000000000000028 = &stack0x00000088;
    (**(code **)(unaff_RBX + 0x3a8))
              (unaff_RBX + 8,(int)unaff_RDI[4],unaff_RDI[3],(longlong)unaff_RDI + 0x24,
               &stack0x00000090);
    unaff_RDI = (longlong *)*unaff_RDI;
  } while (unaff_RDI != (longlong *)unaff_RSI);
  return 0;
}



uint64_t FUN_1807891b1(void)

{
  return 0;
}



uint64_t FUN_1807891bb(void)

{
  return 0;
}



uint64_t FUN_1807891d0(longlong param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = FUN_180767ad0(param_1 + 0x1c0);
  if ((((int)uVar3 == 0) && (uVar3 = FUN_180767ad0(param_1 + 0x70), (int)uVar3 == 0)) &&
     ((*(code **)(param_1 + 0x360) == (code *)0x0 ||
      (uVar3 = (**(code **)(param_1 + 0x360))(param_1 + 8), (int)uVar3 == 0)))) {
    lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x48) + 0x127e8);
    if (0 < lVar6) {
      lVar5 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x127e0) + lVar5 * 8);
        if (*(longlong *)(lVar1 + 0x18) != 0) {
          (**(code **)(param_1 + 0x398))(param_1 + 8);
          *(uint64_t *)(lVar1 + 0x18) = 0;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < lVar6);
    }
    if (*(longlong *)(param_1 + 0x3b0) != 0) {
      puVar4 = (uint64_t *)(*(longlong *)(param_1 + 0x48) + 0x6c0);
      for (puVar2 = (uint64_t *)*puVar4; puVar2 != puVar4; puVar2 = (uint64_t *)*puVar2) {
        (**(code **)(param_1 + 0x3b0))(param_1 + 8,*(int32_t *)((longlong)puVar2 + 0x24));
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



uint64_t FUN_180789205(void)

{
  longlong lVar1;
  uint64_t *puVar2;
  code *in_RAX;
  uint64_t uVar3;
  longlong unaff_RBX;
  uint64_t *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((in_RAX == (code *)0x0) || (uVar3 = (*in_RAX)(unaff_RBX + 8), (int)uVar3 == 0)) {
    lVar6 = (longlong)*(int *)(*(longlong *)(unaff_RBX + 0x48) + 0x127e8);
    if (0 < lVar6) {
      lVar5 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RBX + 0x48) + 0x127e0) + lVar5 * 8);
        if (*(longlong *)(lVar1 + 0x18) != 0) {
          (**(code **)(unaff_RBX + 0x398))(unaff_RBX + 8);
          *(uint64_t *)(lVar1 + 0x18) = 0;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < lVar6);
    }
    if (*(longlong *)(unaff_RBX + 0x3b0) != 0) {
      puVar4 = (uint64_t *)(*(longlong *)(unaff_RBX + 0x48) + 0x6c0);
      for (puVar2 = (uint64_t *)*puVar4; puVar2 != puVar4; puVar2 = (uint64_t *)*puVar2) {
        (**(code **)(unaff_RBX + 0x3b0))(unaff_RBX + 8,*(int32_t *)((longlong)puVar2 + 0x24));
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



uint64_t FUN_180789221(void)

{
  int iVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong in_RAX;
  longlong unaff_RBX;
  uint64_t *puVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(in_RAX + 0x127e8);
  if (0 < (longlong)iVar1) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RBX + 0x48) + 0x127e0) + lVar5 * 8);
      if (*(longlong *)(lVar2 + 0x18) != 0) {
        (**(code **)(unaff_RBX + 0x398))(unaff_RBX + 8);
        *(uint64_t *)(lVar2 + 0x18) = 0;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
  }
  if (*(longlong *)(unaff_RBX + 0x3b0) != 0) {
    puVar4 = (uint64_t *)(*(longlong *)(unaff_RBX + 0x48) + 0x6c0);
    for (puVar3 = (uint64_t *)*puVar4; puVar3 != puVar4; puVar3 = (uint64_t *)*puVar3) {
      (**(code **)(unaff_RBX + 0x3b0))(unaff_RBX + 8,*(int32_t *)((longlong)puVar3 + 0x24));
    }
  }
  return 0;
}



uint64_t FUN_18078922b(void)

{
  int iVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong in_RAX;
  longlong unaff_RBX;
  uint64_t *puVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(in_RAX + 0x127e8);
  if (0 < (longlong)iVar1) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RBX + 0x48) + 0x127e0) + lVar5 * 8);
      if (*(longlong *)(lVar2 + 0x18) != 0) {
        (**(code **)(unaff_RBX + 0x398))(unaff_RBX + 8);
        *(uint64_t *)(lVar2 + 0x18) = 0;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
  }
  if (*(longlong *)(unaff_RBX + 0x3b0) != 0) {
    puVar4 = (uint64_t *)(*(longlong *)(unaff_RBX + 0x48) + 0x6c0);
    for (puVar3 = (uint64_t *)*puVar4; puVar3 != puVar4; puVar3 = (uint64_t *)*puVar3) {
      (**(code **)(unaff_RBX + 0x3b0))(unaff_RBX + 8,*(int32_t *)((longlong)puVar3 + 0x24));
    }
  }
  return 0;
}



uint64_t FUN_18078923c(void)

{
  longlong lVar1;
  uint64_t *puVar2;
  longlong unaff_RBX;
  uint64_t *puVar3;
  longlong lVar4;
  longlong unaff_R14;
  
  lVar4 = 0;
  do {
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RBX + 0x48) + 0x127e0) + lVar4 * 8);
    if (*(longlong *)(lVar1 + 0x18) != 0) {
      (**(code **)(unaff_RBX + 0x398))(unaff_RBX + 8);
      *(uint64_t *)(lVar1 + 0x18) = 0;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 < unaff_R14);
  if (*(longlong *)(unaff_RBX + 0x3b0) != 0) {
    puVar3 = (uint64_t *)(*(longlong *)(unaff_RBX + 0x48) + 0x6c0);
    for (puVar2 = (uint64_t *)*puVar3; puVar2 != puVar3; puVar2 = (uint64_t *)*puVar2) {
      (**(code **)(unaff_RBX + 0x3b0))(unaff_RBX + 8,*(int32_t *)((longlong)puVar2 + 0x24));
    }
  }
  return 0;
}



uint64_t FUN_180789283(void)

{
  uint64_t *puVar1;
  longlong unaff_RBX;
  uint64_t *puVar2;
  
  if (*(longlong *)(unaff_RBX + 0x3b0) != 0) {
    puVar2 = (uint64_t *)(*(longlong *)(unaff_RBX + 0x48) + 0x6c0);
    for (puVar1 = (uint64_t *)*puVar2; puVar1 != puVar2; puVar1 = (uint64_t *)*puVar1) {
      (**(code **)(unaff_RBX + 0x3b0))(unaff_RBX + 8,*(int32_t *)((longlong)puVar1 + 0x24));
    }
  }
  return 0;
}



uint64_t FUN_180789292(void)

{
  uint64_t *puVar1;
  longlong unaff_RBX;
  uint64_t *puVar2;
  
  puVar2 = (uint64_t *)(*(longlong *)(unaff_RBX + 0x48) + 0x6c0);
  for (puVar1 = (uint64_t *)*puVar2; puVar1 != puVar2; puVar1 = (uint64_t *)*puVar1) {
    (**(code **)(unaff_RBX + 0x3b0))(unaff_RBX + 8,*(int32_t *)((longlong)puVar1 + 0x24));
  }
  return 0;
}





// 函数: void FUN_1807892d1(void)
void FUN_1807892d1(void)

{
  return;
}





// 函数: void FUN_1807892d6(void)
void FUN_1807892d6(void)

{
  return;
}



uint64_t FUN_180789300(longlong param_1)

{
  uint64_t uVar1;
  
  if ((*(code **)(param_1 + 0x370) != (code *)0x0) &&
     (uVar1 = (**(code **)(param_1 + 0x370))(param_1 + 8), (int)uVar1 != 0)) {
    return uVar1;
  }
  return 0;
}





// 函数: void FUN_180789360(uint *param_1,uint param_2,int param_3,int param_4,uint param_5)
void FUN_180789360(uint *param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  
  if (param_4 != 1) {
    do {
      if (param_4 == 2) {
        param_1[1] = param_2 + param_3 & param_5;
        break;
      }
      iVar1 = (int)((param_4 >> 0x1f & 3U) + param_4) >> 2;
      FUN_180789360(param_1,param_2,param_3 * 2,param_4 / 2,param_5);
      FUN_180789360(param_1 + param_4 / 2,param_2 + param_3,param_3 * 4,iVar1,param_5);
      param_2 = param_2 + (param_4 + -1) * param_3;
      param_1 = param_1 + iVar1 * 3;
      param_4 = iVar1;
      param_3 = param_3 * 4;
    } while (iVar1 != 1);
  }
  *param_1 = param_2 & param_5;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180789470(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  
  *(longlong *)(param_1 + 8) = param_1;
  *(longlong *)param_1 = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  if (((*(int *)(param_1 + 0x18) != 0) || (0xfff0 < param_2 - 0x10)) ||
     ((param_2 & param_2 - 1) != 0)) {
    return 0x1f;
  }
  uVar3 = FUN_1807682e0(param_1 + 0x60,0);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  iVar6 = param_2 * 8 + 0x10;
  lVar4 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),iVar6,&UNK_18095ad40,0x4f,0,0,1);
  *(longlong *)(param_1 + 0x40) = lVar4;
  if (lVar4 != 0) {
    uVar5 = lVar4 + 0xfU & 0xfffffffffffffff0;
    *(ulonglong *)(param_1 + 0x20) = uVar5;
    if (param_3 == '\0') {
      *(ulonglong *)(param_1 + 0x28) = uVar5;
      *(uint64_t *)(param_1 + 0x68) = *(uint64_t *)(param_1 + 0x60);
      *(uint64_t *)(param_1 + 0x48) = 0;
    }
    else {
      lVar4 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),iVar6,&UNK_18095ad40,0x58,0,0,1)
      ;
      *(longlong *)(param_1 + 0x48) = lVar4;
      if (lVar4 == 0) {
        return 0x26;
      }
      *(ulonglong *)(param_1 + 0x28) = lVar4 + 0xfU & 0xfffffffffffffff0;
      uVar3 = FUN_1807682e0(param_1 + 0x68,0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    uVar1 = param_2 >> 1;
    lVar4 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                          ((param_2 >> 2) + uVar1) * 8 + 0x10,&UNK_18095ad40,0x6b,0,0,1);
    *(longlong *)(param_1 + 0x50) = lVar4;
    if (lVar4 != 0) {
      *(ulonglong *)(param_1 + 0x30) = lVar4 + 0xfU & 0xfffffffffffffff0;
      uVar2 = uVar1;
      if (0 < (int)param_2 / 2) {
                    // WARNING: Subroutine does not return
        FUN_1808fd400();
      }
      while( true ) {
        if (uVar2 == 0) {
          uVar3 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),uVar1 * 4,&UNK_18095ad40,
                                0x8a,0,0,1);
          *(uint64_t *)(param_1 + 0x58) = uVar3;
          *(uint64_t *)(param_1 + 0x38) = uVar3;
          FUN_180789360(uVar3,0,1,uVar1,uVar1 - 1);
          *(uint *)(param_1 + 0x18) = param_2;
          return 0;
        }
        if ((int)uVar2 >> 2 != 0) break;
        uVar2 = (int)uVar2 >> 1;
      }
                    // WARNING: Subroutine does not return
      FUN_1808fd400();
    }
  }
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807894bb(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint64_t uVar3;
  longlong lVar4;
  ulonglong uVar5;
  char unaff_BPL;
  uint uVar6;
  longlong unaff_RSI;
  int iVar7;
  uint64_t unaff_R12;
  uint uVar8;
  ulonglong unaff_R15;
  
  uVar3 = FUN_1807682e0(param_1 + 0x60);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  iVar1 = (int)unaff_R15;
  iVar7 = iVar1 * 8 + 0x10;
  lVar4 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),iVar7,&UNK_18095ad40,
                        (int)unaff_R12 + 0x4f);
  *(longlong *)(unaff_RSI + 0x40) = lVar4;
  if (lVar4 != 0) {
    uVar5 = lVar4 + 0xfU & 0xfffffffffffffff0;
    *(ulonglong *)(unaff_RSI + 0x20) = uVar5;
    if (unaff_BPL == '\0') {
      *(ulonglong *)(unaff_RSI + 0x28) = uVar5;
      *(uint64_t *)(unaff_RSI + 0x68) = *(uint64_t *)(unaff_RSI + 0x60);
      *(uint64_t *)(unaff_RSI + 0x48) = unaff_R12;
    }
    else {
      lVar4 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),iVar7,&UNK_18095ad40,
                            (int)unaff_R12 + 0x58);
      *(longlong *)(unaff_RSI + 0x48) = lVar4;
      if (lVar4 == 0) {
        return 0x26;
      }
      *(ulonglong *)(unaff_RSI + 0x28) = lVar4 + 0xfU & 0xfffffffffffffff0;
      uVar3 = FUN_1807682e0(unaff_RSI + 0x68,0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    uVar5 = unaff_R15 >> 1 & 0x7fffffff;
    uVar8 = (uint)uVar5;
    lVar4 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                          (((uint)(unaff_R15 >> 2) & 0x3fffffff) + uVar8) * 8 + 0x10,&UNK_18095ad40,
                          0x6b);
    *(longlong *)(unaff_RSI + 0x50) = lVar4;
    if (lVar4 != 0) {
      *(ulonglong *)(unaff_RSI + 0x30) = lVar4 + 0xfU & 0xfffffffffffffff0;
      uVar2 = uVar5;
      uVar6 = uVar8;
      if (0 < iVar1 / 2) {
                    // WARNING: Subroutine does not return
        FUN_1808fd400();
      }
      while( true ) {
        if (uVar6 == 0) {
          uVar3 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),uVar8 * 4,&UNK_18095ad40,
                                0x8a);
          *(uint64_t *)(unaff_RSI + 0x58) = uVar3;
          *(uint64_t *)(unaff_RSI + 0x38) = uVar3;
          FUN_180789360(uVar3,0,1,uVar5,uVar8 - 1);
          *(int *)(unaff_RSI + 0x18) = iVar1;
          return 0;
        }
        if ((int)uVar2 >> 2 != 0) break;
        uVar6 = (int)uVar2 >> 1;
        uVar2 = (ulonglong)uVar6;
      }
                    // WARNING: Subroutine does not return
      FUN_1808fd400();
    }
  }
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807894e0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint64_t uVar5;
  char unaff_BPL;
  uint uVar6;
  longlong unaff_RSI;
  int iVar7;
  int8_t uVar8;
  uint64_t unaff_R12;
  uint uVar9;
  ulonglong unaff_R15;
  int8_t uStack0000000000000028;
  int8_t uStack0000000000000030;
  
  uStack0000000000000030 = 1;
  iVar1 = (int)unaff_R15;
  iVar7 = iVar1 * 8 + 0x10;
  uVar8 = (int8_t)unaff_R12;
  uStack0000000000000028 = uVar8;
  lVar3 = FUN_180741e10(*(uint64_t *)(param_1 + 0x1a0),iVar7,&UNK_18095ad40);
  *(longlong *)(unaff_RSI + 0x40) = lVar3;
  if (lVar3 != 0) {
    uVar4 = lVar3 + 0xfU & 0xfffffffffffffff0;
    *(ulonglong *)(unaff_RSI + 0x20) = uVar4;
    if (unaff_BPL == '\0') {
      *(ulonglong *)(unaff_RSI + 0x28) = uVar4;
      *(uint64_t *)(unaff_RSI + 0x68) = *(uint64_t *)(unaff_RSI + 0x60);
      *(uint64_t *)(unaff_RSI + 0x48) = unaff_R12;
    }
    else {
      uStack0000000000000030 = 1;
      uStack0000000000000028 = uVar8;
      lVar3 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),iVar7,&UNK_18095ad40,
                            (int)unaff_R12 + 0x58);
      *(longlong *)(unaff_RSI + 0x48) = lVar3;
      if (lVar3 == 0) {
        return 0x26;
      }
      *(ulonglong *)(unaff_RSI + 0x28) = lVar3 + 0xfU & 0xfffffffffffffff0;
      uVar5 = FUN_1807682e0(unaff_RSI + 0x68,0);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    uStack0000000000000030 = 1;
    uVar4 = unaff_R15 >> 1 & 0x7fffffff;
    uVar9 = (uint)uVar4;
    uStack0000000000000028 = uVar8;
    lVar3 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                          (((uint)(unaff_R15 >> 2) & 0x3fffffff) + uVar9) * 8 + 0x10,&UNK_18095ad40,
                          0x6b);
    *(longlong *)(unaff_RSI + 0x50) = lVar3;
    if (lVar3 != 0) {
      *(ulonglong *)(unaff_RSI + 0x30) = lVar3 + 0xfU & 0xfffffffffffffff0;
      uVar2 = uVar4;
      uVar6 = uVar9;
      if (0 < iVar1 / 2) {
                    // WARNING: Subroutine does not return
        FUN_1808fd400();
      }
      while( true ) {
        if (uVar6 == 0) {
          uStack0000000000000030 = 1;
          uStack0000000000000028 = uVar8;
          uVar5 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),uVar9 * 4,&UNK_18095ad40,
                                0x8a);
          *(uint64_t *)(unaff_RSI + 0x58) = uVar5;
          *(uint64_t *)(unaff_RSI + 0x38) = uVar5;
          FUN_180789360(uVar5,0,1,uVar4,uVar9 - 1);
          *(int *)(unaff_RSI + 0x18) = iVar1;
          return 0;
        }
        if ((int)uVar2 >> 2 != 0) break;
        uVar6 = (int)uVar2 >> 1;
        uVar2 = (ulonglong)uVar6;
      }
                    // WARNING: Subroutine does not return
      FUN_1808fd400();
    }
  }
  return 0x26;
}





// 函数: void FUN_1807895a2(void)
void FUN_1807895a2(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807895b5(void)

{
  ulonglong uVar1;
  uint64_t in_RAX;
  longlong lVar2;
  uint64_t uVar3;
  uint uVar4;
  longlong unaff_RSI;
  uint64_t unaff_R12;
  uint uVar5;
  ulonglong uVar6;
  ulonglong unaff_R15;
  int8_t uStack0000000000000028;
  int8_t uStack0000000000000030;
  
  *(uint64_t *)(unaff_RSI + 0x28) = in_RAX;
  *(uint64_t *)(unaff_RSI + 0x68) = *(uint64_t *)(unaff_RSI + 0x60);
  *(uint64_t *)(unaff_RSI + 0x48) = unaff_R12;
  uStack0000000000000030 = 1;
  uVar6 = unaff_R15 >> 1 & 0x7fffffff;
  uVar5 = (uint)uVar6;
  uStack0000000000000028 = (char)unaff_R12;
  lVar2 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                        (((uint)(unaff_R15 >> 2) & 0x3fffffff) + uVar5) * 8 + 0x10,&UNK_18095ad40,
                        0x6b);
  *(longlong *)(unaff_RSI + 0x50) = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x26;
  }
  else {
    *(ulonglong *)(unaff_RSI + 0x30) = lVar2 + 0xfU & 0xfffffffffffffff0;
    uVar1 = uVar6;
    uVar4 = uVar5;
    if (0 < (int)unaff_R15 / 2) {
                    // WARNING: Subroutine does not return
      FUN_1808fd400();
    }
    while (uVar4 != 0) {
      if ((int)uVar1 >> 2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_1808fd400();
      }
      uVar4 = (int)uVar1 >> 1;
      uVar1 = (ulonglong)uVar4;
    }
    uStack0000000000000030 = 1;
    uStack0000000000000028 = (char)unaff_R12;
    uVar3 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),uVar5 * 4,&UNK_18095ad40,0x8a);
    *(uint64_t *)(unaff_RSI + 0x58) = uVar3;
    *(uint64_t *)(unaff_RSI + 0x38) = uVar3;
    FUN_180789360(uVar3,0,1,uVar6,uVar5 - 1);
    uVar3 = 0;
    *(int *)(unaff_RSI + 0x18) = (int)unaff_R15;
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18078961b(uint64_t param_1)

{
  uint64_t uVar1;
  ulonglong unaff_RBX;
  int iVar2;
  longlong unaff_RSI;
  int unaff_R12D;
  int unaff_R13D;
  longlong unaff_R15;
  
  *(ulonglong *)(unaff_RSI + 0x30) = unaff_RBX & 0xfffffffffffffff0;
  if (0 < (int)unaff_R15 / 2) {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(param_1,(float)unaff_R12D * -6.2831855 * (1.0 / (float)unaff_R15));
  }
  iVar2 = unaff_R13D;
  if (unaff_R13D != 0) {
    do {
      if (0 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) {
                    // WARNING: Subroutine does not return
        FUN_1808fd400(param_1,(float)unaff_R12D * 6.2831855 * (1.0 / (float)iVar2));
      }
      iVar2 = iVar2 >> 1;
    } while (iVar2 != 0);
  }
  uVar1 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),unaff_R13D * 4,&UNK_18095ad40,0x8a);
  *(uint64_t *)(unaff_RSI + 0x58) = uVar1;
  *(uint64_t *)(unaff_RSI + 0x38) = uVar1;
  FUN_180789360(uVar1,0,1,unaff_R13D,unaff_R13D + -1);
  *(int *)(unaff_RSI + 0x18) = (int)unaff_R15;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807896ae(uint64_t param_1)

{
  uint64_t uVar1;
  int unaff_EBP;
  longlong unaff_RSI;
  int unaff_R12D;
  int unaff_R13D;
  int32_t unaff_R15D;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  
  do {
    if (0 < (int)(unaff_EBP + (unaff_EBP >> 0x1f & 3U)) >> 2) {
                    // WARNING: Subroutine does not return
      FUN_1808fd400(param_1,(float)unaff_R12D * unaff_XMM7_Da * (unaff_XMM8_Da / (float)unaff_EBP));
    }
    unaff_EBP = unaff_EBP >> 1;
  } while (unaff_EBP != 0);
  uVar1 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),unaff_R13D * 4,&UNK_18095ad40,0x8a);
  *(uint64_t *)(unaff_RSI + 0x58) = uVar1;
  *(uint64_t *)(unaff_RSI + 0x38) = uVar1;
  FUN_180789360(uVar1,0,1,unaff_R13D,unaff_R13D + -1);
  *(int32_t *)(unaff_RSI + 0x18) = unaff_R15D;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18078971b(void)

{
  uint64_t uVar1;
  longlong unaff_RSI;
  int unaff_R13D;
  int32_t unaff_R15D;
  int8_t uStack0000000000000030;
  
  uStack0000000000000030 = 1;
  uVar1 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),unaff_R13D * 4,&UNK_18095ad40,0x8a);
  *(uint64_t *)(unaff_RSI + 0x58) = uVar1;
  *(uint64_t *)(unaff_RSI + 0x38) = uVar1;
  FUN_180789360(uVar1,0,1,unaff_R13D,unaff_R13D + -1);
  *(int32_t *)(unaff_RSI + 0x18) = unaff_R15D;
  return 0;
}



uint64_t FUN_18078978e(void)

{
  return 0x26;
}



uint64_t FUN_180789798(void)

{
  return 0x1f;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_1807897b0(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4,int param_5)

{
  uint64_t uVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0x43;
  }
  if (param_5 == 0) {
    return 0x1f;
  }
  uVar1 = *(uint64_t *)(param_1 + 0x60);
  FUN_180768360(uVar1);
  iVar4 = *(int *)(param_1 + 0x18);
  pfVar2 = *(float **)(param_1 + 0x20);
  if (param_5 == 1) {
    if (param_4 == 0) {
      iVar3 = 0;
      if (0 < iVar4 / 2) {
        lVar5 = 0;
        pfVar6 = pfVar2;
        do {
          iVar3 = iVar3 + 1;
          *pfVar6 = *(float *)(param_2 +
                              (longlong)(*(int *)(lVar5 + *(longlong *)(param_1 + 0x38)) * 2) * 4);
          pfVar6[1] = *(float *)(param_2 + 4 +
                                (longlong)(*(int *)(lVar5 + *(longlong *)(param_1 + 0x38)) * 2) * 4)
          ;
          iVar4 = *(int *)(param_1 + 0x18);
          lVar5 = lVar5 + 4;
          pfVar6 = pfVar6 + 2;
        } while (iVar3 < iVar4 / 2);
      }
      goto LAB_180789990;
    }
  }
  else if (param_4 == 0) {
    iVar3 = 0;
    if (0 < iVar4 / 2) {
      lVar5 = 0;
      pfVar6 = pfVar2;
      do {
        iVar3 = iVar3 + 1;
        *pfVar6 = *(float *)(param_2 +
                            (longlong)
                            (*(int *)(lVar5 + *(longlong *)(param_1 + 0x38)) * param_5 * 2) * 4);
        pfVar6[1] = *(float *)(param_2 +
                              (longlong)
                              ((*(int *)(lVar5 + *(longlong *)(param_1 + 0x38)) * 2 + 1) * param_5)
                              * 4);
        iVar4 = *(int *)(param_1 + 0x18);
        lVar5 = lVar5 + 4;
        pfVar6 = pfVar6 + 2;
      } while (iVar3 < iVar4 / 2);
    }
    goto LAB_180789990;
  }
  iVar3 = 0;
  if (0 < iVar4 / 2) {
    lVar5 = 0;
    pfVar6 = pfVar2;
    do {
      iVar3 = iVar3 + 1;
      iVar4 = *(int *)(lVar5 + *(longlong *)(param_1 + 0x38));
      *pfVar6 = *(float *)(param_2 + (longlong)(iVar4 * param_5 * 2) * 4) *
                *(float *)(param_4 + (longlong)(iVar4 * 2) * 4);
      iVar4 = *(int *)(lVar5 + *(longlong *)(param_1 + 0x38)) * 2;
      pfVar6[1] = *(float *)(param_2 + (longlong)((iVar4 + 1) * param_5) * 4) *
                  *(float *)(param_4 + 4 + (longlong)iVar4 * 4);
      iVar4 = *(int *)(param_1 + 0x18);
      lVar5 = lVar5 + 4;
      pfVar6 = pfVar6 + 2;
    } while (iVar3 < iVar4 / 2);
  }
LAB_180789990:
  (*(code *)*_DAT_180c108d0)(pfVar2,*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 4,iVar4 / 2);
  (*(code *)_DAT_180c108d0[2])
            (pfVar2,param_3,*(uint64_t *)(param_1 + 0x30),*(int32_t *)(param_1 + 0x18));
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



