// 原始函数语义化别名定义
// 本文件包含当前文件中使用的原始函数的语义化别名
// 这些别名提高了代码的可读性和维护性
n//  的语义化别名
#define SystemCore_EncryptionManager
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: SystemInputManager */
#define SystemInputManager SystemInputManager
/* 函数别名定义: RenderingTextureManager */
#define RenderingTextureManager RenderingTextureManager
/* 函数别名定义: DataCompressor */
#define DataCompressor DataCompressor
/**
 * @file pretty/99_part_13_part004.c
 * @brief 高级系统资源管理和数据处理模块（美化版本）
 *
 * 本模块实现了系统级资源管理、数据处理、内存操作和状态同步等核心功能。
 * 主要包括资源分配器、数据处理器、内存管理器、状态同步器等组件。
 *
 * @module 系统资源管理
 * @submodule 高级数据处理
 * @version 1.0
 * @date 2025-08-28
 *
 * @note 这是一个简化实现版本，完整实现请参考 _beautified.c 文件
 */
/* ================================ */
/* 系统常量定义 */
/* ================================ */
/** 系统错误码定义 */
#define SYSTEM_SUCCESS                    0x00000000    /**< 操作成功 */
#define SYSTEM_ERROR_INVALID_PARAM        0x0000000D    /**< 无效参数 */
#define SYSTEM_ERROR_BUFFER_OVERFLOW      0x00000011    /**< 缓冲区溢出 */
#define SYSTEM_ERROR_MEMORY_ALLOCATION    0x0000001C    /**< 内存分配失败 */
#define SYSTEM_ERROR_RESOURCE_NOT_FOUND   0x00000026    /**< 资源未找到 */
/** 资源管理常量 */
#define MAX_RESOURCE_COUNT                0x000003FF    /**< 最大资源数量 */
#define RESOURCE_POOL_SIZE                0x00000028    /**< 资源池大小 */
#define MAGIC_IDCM                        0x43444D43    /**< IDCM魔数 */
#define MAGIC_BDMC                        0x42444D43    /**< BDMC魔数 */
// 函数: void function_8a7dfd(void)
void function_8a7dfd(void)
{
  return;
}
// WARNING: Removing unreachable block (ram,0x0001808a7f2b)
uint64_t function_8a7e10(uint64_t *param_1,int64_t param_2)
{
  uint64_t uVar1;
  int8_t stack_array_48 [32];
  int8_t stack_array_28 [32];
  uVar1 = DataFlowProcessor(param_1,stack_array_28,1,0x49444d43);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = DataFlowProcessor(param_1,stack_array_48,0,0x42444d43);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = SystemCore_ConfigManager(param_1,param_2 + 0x10);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (*(int *)(param_1[1] + 0x18) == 0) {
    uVar1 = SystemErrorHandler(*param_1,param_2 + 0xd8,4);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*(int *)(param_1[1] + 0x18) == 0) {
      uVar1 = UIEventHandler(*param_1,param_2 + 0xdc);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (*(uint *)(param_1 + 8) < 0x80) {
        uVar1 = 0;
      }
      else if (*(int *)(param_1[1] + 0x18) == 0) {
        uVar1 = SystemConfigManager(*param_1,param_2 + 0xec);
      }
      else {
        uVar1 = 0x1c;
      }
      if ((int)uVar1 != 0) {
        return uVar1;
      }
// WARNING: Subroutine does not return
      UtilitiesSystem_MemoryManager(param_1,stack_array_48);
    }
  }
  return 0x1c;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_8a7f40(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t *plVar4;
  int32_t *puVar5;
  int64_t *plVar6;
  int iVar7;
  uint64_t stack_array_38 [2];
  plVar4 = (int64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x28,&processed_var_816_ptr,0x278,0,0,1);
  if (plVar4 == (int64_t *)0x0) {
    return 0x26;
  }
  *plVar4 = (int64_t)plVar4;
  plVar4[1] = (int64_t)plVar4;
  puVar5 = (int32_t *)SystemCoreProcessor();
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *(int32_t *)(plVar4 + 2) = *puVar5;
  *(int32_t *)((int64_t)plVar4 + 0x14) = uVar1;
  *(int32_t *)(plVar4 + 3) = uVar2;
  *(int32_t *)((int64_t)plVar4 + 0x1c) = uVar3;
  *(int32_t *)(plVar4 + 4) = 0x7f7fffff;
  *(int32_t *)((int64_t)plVar4 + 0x24) = 0xffffffff;
  if (*(int *)(param_1[1] + 0x18) == 0) {
    iVar7 = SystemErrorHandler(*param_1,(int64_t)plVar4 + 0x24,4);
    if (iVar7 != 0) goto LAB_1808a806f;
    if (*(int *)(param_1[1] + 0x18) != 0) {
      iVar7 = 0x1c;
      goto LAB_1808a806f;
    }
    iVar7 = UIEventHandler(*param_1,plVar4 + 2);
    if (iVar7 != 0) goto LAB_1808a806f;
    if (*(int *)(param_1[1] + 0x18) != 0) {
      iVar7 = 0x1c;
      goto LAB_1808a806f;
    }
    iVar7 = SystemConfigManager(*param_1,plVar4 + 4);
    if (iVar7 != 0) goto LAB_1808a806f;
    stack_array_38[0] = 0;
    iVar7 = function_8b0490(param_4,*(int32_t *)((int64_t)plVar4 + 0x24),stack_array_38);
    if (iVar7 != 0) goto LAB_1808a806f;
  }
  else {
    iVar7 = 0x1c;
LAB_1808a806f:
    if (iVar7 != 0) goto LAB_1808a8093;
  }
  plVar6 = (int64_t *)*plVar4;
  if (plVar6 != plVar4) {
    iVar7 = 0;
    do {
      plVar6 = (int64_t *)*plVar6;
      iVar7 = iVar7 + 1;
    } while (plVar6 != plVar4);
    if (iVar7 != 0) {
LAB_1808a8093:
      *(int64_t *)plVar4[1] = *plVar4;
      *(int64_t *)(*plVar4 + 8) = plVar4[1];
      plVar4[1] = (int64_t)plVar4;
      *plVar4 = (int64_t)plVar4;
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar4,&rendering_buffer_2144_ptr,0xc6,1);
    }
  }
  plVar4[1] = *(int64_t *)(param_2 + 8);
  *plVar4 = param_2;
  *(int64_t **)(param_2 + 8) = plVar4;
  *(int64_t **)plVar4[1] = plVar4;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_8a8120(uint64_t *param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int iVar4;
  uint64_t stack_array_18 [2];
  lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x38,&processed_var_816_ptr,0x278,0,0,1);
  if (lVar1 == 0) {
    return 0x26;
  }
  plVar2 = (int64_t *)function_8ebf80(lVar1);
  plVar2[2] = param_4;
  if (*(int *)(param_1[1] + 0x18) == 0) {
    iVar4 = SystemErrorHandler(*param_1,(int64_t)plVar2 + 0x2c,4);
    if ((iVar4 != 0) || (iVar4 = SystemCore_ConfigManager(param_1,plVar2 + 3), iVar4 != 0)) goto LAB_1808a824a;
    if (*(int *)(param_1[1] + 0x18) != 0) {
      iVar4 = 0x1c;
      goto LAB_1808a824a;
    }
    iVar4 = SystemErrorHandler(*param_1,plVar2 + 5,4);
    if (iVar4 != 0) goto LAB_1808a824a;
    if (*(int *)(param_1[1] + 0x18) != 0) {
      iVar4 = 0x1c;
      goto LAB_1808a824a;
    }
    iVar4 = SystemConfigManager(*param_1,plVar2 + 6);
    if (iVar4 != 0) goto LAB_1808a824a;
    stack_array_18[0] = 0;
    iVar4 = function_8b0490(plVar2[2],*(int32_t *)((int64_t)plVar2 + 0x2c),stack_array_18);
    if (iVar4 != 0) goto LAB_1808a824a;
  }
  else {
    iVar4 = 0x1c;
LAB_1808a824a:
    if (iVar4 != 0) goto LAB_1808a8273;
  }
  plVar3 = (int64_t *)*plVar2;
  if (plVar3 != plVar2) {
    iVar4 = 0;
    do {
      plVar3 = (int64_t *)*plVar3;
      iVar4 = iVar4 + 1;
    } while (plVar3 != plVar2);
    if (iVar4 != 0) {
LAB_1808a8273:
      *(int64_t *)plVar2[1] = *plVar2;
      *(int64_t *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (int64_t)plVar2;
      *plVar2 = (int64_t)plVar2;
      *(int64_t **)plVar2[1] = plVar2;
      *(int64_t *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (int64_t)plVar2;
      *plVar2 = (int64_t)plVar2;
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&rendering_buffer_2144_ptr,0xc6,1);
    }
  }
  plVar2[1] = *(int64_t *)(param_2 + 8);
  *plVar2 = param_2;
  *(int64_t **)(param_2 + 8) = plVar2;
  *(int64_t **)plVar2[1] = plVar2;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_8a8310(uint64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t lVar5;
  int iVar6;
  int64_t *plVar7;
  int32_t *puVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int iVar11;
  iVar11 = 0;
  plVar7 = (int64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xe0,&processed_var_816_ptr,0x269,0,0,1);
  if (plVar7 == (int64_t *)0x0) {
    return 0x26;
  }
  *plVar7 = (int64_t)plVar7;
  plVar7[1] = (int64_t)plVar7;
  puVar8 = (int32_t *)SystemCoreProcessor();
  uVar2 = puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  *(int32_t *)(plVar7 + 2) = *puVar8;
  *(int32_t *)((int64_t)plVar7 + 0x14) = uVar2;
  *(int32_t *)(plVar7 + 3) = uVar3;
  *(int32_t *)((int64_t)plVar7 + 0x1c) = uVar4;
  plVar9 = (int64_t *)SystemCoreProcessor();
  plVar1 = plVar7 + 0xc;
  lVar5 = plVar9[1];
  plVar10 = plVar7 + 0xe;
  plVar7[4] = *plVar9;
  plVar7[5] = lVar5;
  plVar7[6] = 0;
  *(int32_t *)(plVar7 + 7) = 0;
  plVar7[8] = 0;
  *(int32_t *)(plVar7 + 9) = 0;
  plVar7[10] = 0;
  *(int32_t *)(plVar7 + 0xb) = 0x42c80000;
  *plVar1 = (int64_t)plVar1;
  plVar7[0xd] = (int64_t)plVar1;
  *plVar10 = (int64_t)plVar10;
  plVar7[0xf] = (int64_t)plVar10;
  plVar10 = plVar7 + 0x16;
  plVar7[0x10] = 0;
  plVar7[0x11] = 0;
  plVar7[0x12] = 0;
  plVar7[0x13] = 0;
  plVar7[0x14] = 0;
  *(int32_t *)(plVar7 + 0x15) = 0;
  *plVar10 = (int64_t)plVar10;
  plVar7[0x17] = (int64_t)plVar10;
  plVar10 = plVar7 + 0x18;
  *plVar10 = (int64_t)plVar10;
  plVar7[0x19] = (int64_t)plVar10;
  puVar8 = (int32_t *)SystemCoreProcessor();
  uVar2 = puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  *(int32_t *)(plVar7 + 0x1a) = *puVar8;
  *(int32_t *)((int64_t)plVar7 + 0xd4) = uVar2;
  *(int32_t *)(plVar7 + 0x1b) = uVar3;
  *(int32_t *)((int64_t)plVar7 + 0xdc) = uVar4;
  iVar6 = function_89e820(plVar7,param_1);
  if (iVar6 != 0) {
LAB_1808a8436:
    function_8adfc0(plVar1);
    RenderingSystem_ShaderManager0(plVar7 + 8,0);
    *(int64_t *)plVar7[1] = *plVar7;
    *(int64_t *)(*plVar7 + 8) = plVar7[1];
    plVar7[1] = (int64_t)plVar7;
    *plVar7 = (int64_t)plVar7;
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar7,&rendering_buffer_2144_ptr,0xc6,1);
  }
  plVar10 = (int64_t *)*plVar7;
  if (plVar10 != plVar7) {
    do {
      plVar10 = (int64_t *)*plVar10;
      iVar11 = iVar11 + 1;
    } while (plVar10 != plVar7);
    if (iVar11 != 0) goto LAB_1808a8436;
  }
  plVar7[1] = *(int64_t *)(param_2 + 8);
  *plVar7 = param_2;
  *(int64_t **)(param_2 + 8) = plVar7;
  *(int64_t **)plVar7[1] = plVar7;
  return 0;
}
int function_8a84c0(int64_t param_1,uint64_t param_2)
{
  int32_t uVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lStack_28;
  uint64_t local_var_20;
  int64_t lStack_18;
  uint64_t local_var_10;
  lVar8 = 0;
  lStack_18 = 0;
  local_var_10 = 0;
  lStack_28 = 0;
  local_var_20 = 0;
  iVar4 = function_8ad530(param_2,&lStack_18);
  if ((iVar4 == 0) && (iVar4 = function_8ad530(param_2,&lStack_28), iVar4 == 0)) {
    iVar3 = (int)local_var_10;
    lVar6 = (int64_t)(int)local_var_10;
    uVar5 = (int)*(uint *)(param_1 + 0x3c) >> 0x1f;
    if (((int)local_var_10 <= (int)((*(uint *)(param_1 + 0x3c) ^ uVar5) - uVar5)) ||
       (iVar4 = function_898d60(param_1 + 0x30,local_var_10 & 0xffffffff), iVar4 == 0)) {
      *(int *)(param_1 + 0x38) = iVar3;
      lVar7 = lVar8;
      lVar9 = lVar8;
      if (0 < iVar3) {
        do {
          uVar1 = *(int32_t *)(lStack_18 + lVar7 * 4);
          lVar9 = lVar9 + 3;
          lVar2 = *(int64_t *)(param_1 + 0x30);
          lVar7 = lVar7 + 1;
          *(char *)(lVar2 + -3 + lVar9) = (char)uVar1;
          *(char *)(lVar2 + -1 + lVar9) = (char)((uint)uVar1 >> 0x10);
          *(char *)(lVar2 + -2 + lVar9) = (char)((uint)uVar1 >> 8);
        } while (lVar7 < lVar6);
      }
      iVar3 = (int)local_var_20;
      lVar6 = (int64_t)(int)local_var_20;
      uVar5 = (int)*(uint *)(param_1 + 0x4c) >> 0x1f;
      if (((int)local_var_20 <= (int)((*(uint *)(param_1 + 0x4c) ^ uVar5) - uVar5)) ||
         (iVar4 = function_898d60(param_1 + 0x40,local_var_20 & 0xffffffff), iVar4 == 0)) {
        *(int *)(param_1 + 0x48) = iVar3;
        lVar9 = lVar8;
        if (0 < iVar3) {
          do {
            uVar1 = *(int32_t *)(lStack_28 + lVar8 * 4);
            lVar9 = lVar9 + 3;
            lVar7 = *(int64_t *)(param_1 + 0x40);
            lVar8 = lVar8 + 1;
            *(char *)(lVar7 + -3 + lVar9) = (char)uVar1;
            *(char *)(lVar7 + -1 + lVar9) = (char)((uint)uVar1 >> 0x10);
            *(char *)(lVar7 + -2 + lVar9) = (char)((uint)uVar1 >> 8);
          } while (lVar8 < lVar6);
        }
        iVar4 = 0;
      }
    }
  }
  function_88ccd0(&lStack_28);
  function_88ccd0(&lStack_18);
  return iVar4;
}
uint64_t function_8a8620(int64_t param_1,int64_t *param_2)
{
  int64_t *plVar1;
  uint uVar2;
  uint64_t uVar3;
  int iVar4;
  uint astack_special_x_18 [2];
  uint astack_special_x_20 [2];
  int8_t stack_array_38 [32];
  uVar3 = DataFlowProcessor(param_2,stack_array_38,0,0x46454d50);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  astack_special_x_18[0] = 6;
  uVar2 = 0x1c;
  if (*(int *)(param_2[1] + 0x18) == 0) {
    plVar1 = (int64_t *)*param_2;
    if (*plVar1 == 0) {
      uVar3 = 0x1c;
    }
    else {
      if (plVar1[2] != 0) {
        astack_special_x_20[0] = 0;
        uVar3 = SystemFunction_00018076a7d0(*plVar1,astack_special_x_20);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if ((uint64_t)plVar1[2] < (uint64_t)astack_special_x_20[0] + 4) {
          uVar3 = 0x11;
          goto LAB_1808a86e7;
        }
      }
      uVar3 = SystemDataAnalyzer(*plVar1,astack_special_x_18,1,4,0);
    }
LAB_1808a86e7:
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (0x3ff < astack_special_x_18[0]) {
      return 0xd;
    }
    uVar3 = function_8af280(param_1 + 0x48);
    if ((int)uVar3 == 0) goto LAB_1808a8717;
  }
  else {
    uVar3 = 0x1c;
  }
  if ((int)uVar3 != 0) {
    return uVar3;
  }
LAB_1808a8717:
  iVar4 = 0;
  if (0 < (int)astack_special_x_18[0]) {
    do {
      uVar3 = function_8acb90(param_1,param_2,iVar4);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)astack_special_x_18[0]);
  }
  if (*(uint *)(param_2 + 8) < 0x6e) {
    uVar2 = 0;
  }
  else if (*(int *)(param_2[1] + 0x18) == 0) {
    uVar2 = SystemCore_ProtocolProcessor(*param_2,param_1 + 0x5c);
  }
  if (uVar2 == 0) {
// WARNING: Subroutine does not return
    UtilitiesSystem_MemoryManager(param_2,stack_array_38);
  }
  return (uint64_t)uVar2;
}
uint64_t function_8a864f(void)
{
  int64_t *plVar1;
  uint uVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  int iVar4;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  uint local_buffer_80;
  uint local_buffer_88;
  local_buffer_80 = 6;
  uVar2 = 0x1c;
  if (*(int *)(in_RAX + 0x18) == 0) {
    plVar1 = (int64_t *)*unaff_RSI;
    if (*plVar1 == 0) {
      uVar3 = 0x1c;
    }
    else {
      if (plVar1[2] != 0) {
        local_buffer_88 = 0;
        uVar3 = SystemFunction_00018076a7d0(*plVar1,&local_buffer_00000088);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if ((uint64_t)plVar1[2] < (uint64_t)local_buffer_88 + 4) {
          uVar3 = 0x11;
          goto LAB_1808a86e7;
        }
      }
      uVar3 = SystemDataAnalyzer(*plVar1,&local_buffer_00000080,1,4,0);
    }
LAB_1808a86e7:
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (0x3ff < local_buffer_80) {
      return 0xd;
    }
    uVar3 = function_8af280(unaff_RBP + 0x48);
    if ((int)uVar3 == 0) goto LAB_1808a8717;
  }
  else {
    uVar3 = 0x1c;
  }
  if ((int)uVar3 != 0) {
    return uVar3;
  }
LAB_1808a8717:
  iVar4 = 0;
  if (0 < (int)local_buffer_80) {
    do {
      uVar3 = function_8acb90();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)local_buffer_80);
  }
  if (*(uint *)(unaff_RSI + 8) < 0x6e) {
    uVar2 = 0;
  }
  else if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
    uVar2 = SystemCore_ProtocolProcessor(*unaff_RSI,unaff_RBP + 0x5c);
  }
  if (uVar2 != 0) {
    return (uint64_t)uVar2;
  }
// WARNING: Subroutine does not return
  UtilitiesSystem_MemoryManager();
}
uint64_t function_8a87a4(void)
{
  return 0;
}
uint64_t function_8a87b7(void)
{
  return 0xd;
}
// 函数: void function_8a87c6(void)
void function_8a87c6(void)
{
  return;
}
uint64_t function_8a87d0(int64_t param_1,int64_t *param_2)
{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  float afStackX_18 [4];
  int8_t stack_array_48 [32];
  uVar5 = 0;
  uVar3 = DataCompressor0(param_2,stack_array_48,0,0x46454d50,0);
  if ((int)uVar3 == 0) {
    uVar6 = 0x1c;
    if (*(int *)(param_2[1] + 0x18) == 0) {
      afStackX_18[0] = 2.8026e-44;
      uVar3 = (**(code **)**(uint64_t **)(*param_2 + 8))
                        (*(uint64_t **)(*param_2 + 8),afStackX_18,4);
    }
    else {
      uVar3 = 0x1c;
    }
    if ((int)uVar3 == 0) {
      uVar3 = uVar5;
      do {
        if ((int)uVar5 == 0) {
          lVar1 = *(int64_t *)(uVar3 + *(int64_t *)(param_1 + 0x48));
          if ((*(int *)(lVar1 + 0x10) != 1) || (*(int *)(param_2[1] + 0x18) != 0))
          goto LAB_1808a8983;
          afStackX_18[0] = 0.0;
          uVar4 = (**(code **)**(uint64_t **)(*param_2 + 8))
                            (*(uint64_t **)(*param_2 + 8),afStackX_18,4);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          if (*(int *)(param_2[1] + 0x18) != 0) goto LAB_1808a8983;
          afStackX_18[0] = (float)*(int *)(lVar1 + 0x18);
          uVar4 = (**(code **)**(uint64_t **)(*param_2 + 8))
                            (*(uint64_t **)(*param_2 + 8),afStackX_18,4);
        }
        else {
          uVar4 = function_8acf30(param_1,param_2,uVar5);
        }
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar5 = (uint64_t)((int)uVar5 + 1);
        uVar3 = uVar3 + 8;
      } while ((int64_t)uVar3 < 0xa0);
      uVar2 = 0;
      if ((0x6d < *(uint *)(param_2 + 8)) && (uVar2 = uVar6, *(int *)(param_2[1] + 0x18) == 0)) {
        afStackX_18[0] = (float)CONCAT31(afStackX_18[0]._1_3_,*(int8_t *)(param_1 + 0x5c));
        uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                          (*(uint64_t **)(*param_2 + 8),afStackX_18,1);
      }
      uVar6 = uVar2;
      if (uVar6 == 0) {
// WARNING: Subroutine does not return
        SystemThreadManager(param_2,stack_array_48);
      }
LAB_1808a8983:
      uVar3 = (uint64_t)uVar6;
    }
  }
  return uVar3;
}
uint64_t function_8a880a(void)
{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  int64_t in_RAX;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t *unaff_RBX;
  uint uVar6;
  uint64_t unaff_R12;
  int64_t unaff_R15;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t uVar7;
  float local_buffer_90;
  uVar2 = (uint)unaff_R12;
  uVar6 = uVar2 + 0x1c;
  if (*(uint *)(in_RAX + 0x18) == uVar2) {
    local_buffer_90 = 2.8026e-44;
    uVar4 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                      (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000090,4);
  }
  else {
    uVar4 = (uint64_t)uVar6;
  }
  if ((int)uVar4 == 0) {
    uVar4 = unaff_R12 & 0xffffffff;
    do {
      if ((int)uVar4 == 0) {
        lVar1 = *(int64_t *)(unaff_R12 + *(int64_t *)(unaff_R15 + 0x48));
        if ((*(int *)(lVar1 + 0x10) != 1) || (*(uint *)(unaff_RBX[1] + 0x18) != uVar2))
        goto LAB_1808a8983;
        local_buffer_90 = (float)uVar2;
        uVar5 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                          (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000090,4);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (*(uint *)(unaff_RBX[1] + 0x18) != uVar2) goto LAB_1808a8983;
        local_buffer_90 = (float)*(int *)(lVar1 + 0x18);
        uVar5 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                          (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000090,4);
        uVar7 = extraout_XMM0_Qa;
      }
      else {
        uVar5 = function_8acf30();
        uVar7 = extraout_XMM0_Qa_00;
      }
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      uVar4 = (uint64_t)((int)uVar4 + 1);
      unaff_R12 = unaff_R12 + 8;
    } while ((int64_t)unaff_R12 < 0xa0);
    uVar3 = uVar2;
    if ((0x6d < *(uint *)(unaff_RBX + 8)) &&
       (uVar3 = uVar6, *(uint *)(unaff_RBX[1] + 0x18) == uVar2)) {
      local_buffer_90 = (float)CONCAT31(local_buffer_90._1_3_,*(int8_t *)(unaff_R15 + 0x5c))
      ;
      uVar3 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                        (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000090,1);
      uVar7 = extraout_XMM0_Qa_01;
    }
    uVar6 = uVar3;
    if (uVar6 == 0) {
// WARNING: Subroutine does not return
      SystemThreadManager(uVar7,&local_buffer_00000030);
    }
LAB_1808a8983:
    uVar4 = (uint64_t)uVar6;
  }
  return uVar4;
}
uint64_t function_8a884b(void)
{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar3;
  int64_t *unaff_RBX;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t unaff_RDI;
  int iVar6;
  uint64_t unaff_R12;
  int64_t unaff_R15;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t uVar7;
  float local_buffer_90;
  iVar6 = (int)unaff_R12;
  uVar4 = unaff_R12 & 0xffffffff;
  uVar5 = unaff_R12;
  do {
    if ((int)uVar4 == 0) {
      lVar1 = *(int64_t *)(uVar5 + *(int64_t *)(unaff_R15 + 0x48));
      if ((*(int *)(lVar1 + 0x10) != 1) || (*(int *)(unaff_RBX[1] + 0x18) != iVar6))
      goto LAB_1808a8983;
      local_buffer_90 = (float)iVar6;
      uVar3 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                        (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000090,4);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) != iVar6) goto LAB_1808a8983;
      local_buffer_90 = (float)*(int *)(lVar1 + 0x18);
      uVar3 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                        (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000090,4);
      uVar7 = extraout_XMM0_Qa;
    }
    else {
      uVar3 = function_8acf30();
      uVar7 = extraout_XMM0_Qa_00;
    }
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar4 = (uint64_t)((int)uVar4 + 1);
    uVar5 = uVar5 + 8;
  } while ((int64_t)uVar5 < 0xa0);
  if (*(uint *)(unaff_RBX + 8) < 0x6e) {
    unaff_RDI = unaff_R12 & 0xffffffff;
  }
  else if (*(int *)(unaff_RBX[1] + 0x18) == iVar6) {
    local_buffer_90 = (float)CONCAT31(local_buffer_90._1_3_,*(int8_t *)(unaff_R15 + 0x5c));
    uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                      (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000090,1);
    unaff_RDI = (uint64_t)uVar2;
    uVar7 = extraout_XMM0_Qa_01;
  }
  if ((int)unaff_RDI == 0) {
// WARNING: Subroutine does not return
    SystemThreadManager(uVar7,&local_buffer_00000030);
  }
LAB_1808a8983:
  return unaff_RDI & 0xffffffff;
}
// 函数: void function_8a899e(void)
void function_8a899e(void)
{
  return;
}
// 函数: void function_8a89a3(void)
void function_8a89a3(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_8a89b0(uint64_t param_1,int64_t param_2,int32_t param_3)
{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  int aiStackX_20 [2];
  uint64_t *plocal_var_58;
  int8_t stack_array_50 [40];
  uVar3 = DataFlowProcessor(param_1,stack_array_50,1,param_3);
  if ((int)uVar3 == 0) {
    aiStackX_20[0] = 0;
    uVar1 = SystemCore_EncryptionManager(param_1,aiStackX_20);
    if (aiStackX_20[0] < 0) {
      uVar3 = 0xd;
    }
    else {
      uVar5 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStackX_20[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar5) - uVar5)) ||
         (uVar3 = RenderingTextureManager0(param_2,aiStackX_20[0]), (int)uVar3 == 0)) {
        if (uVar1 != 0x12) {
          if (uVar1 != 0) {
            return (uint64_t)uVar1;
          }
          iVar6 = 0;
          if (0 < aiStackX_20[0]) {
            do {
              puVar4 = (uint64_t *)
                       SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd8,&processed_var_816_ptr,
                                     0x30a,0,0,1);
              if (puVar4 == (uint64_t *)0x0) {
                return 0x26;
              }
              function_84c050(puVar4,1,0);
              *puVar4 = &ui_system_data_1472_ptr;
              puVar4[9] = &ui_system_data_1520_ptr;
              plocal_var_58 = puVar4;
              iVar2 = function_89ae50(puVar4,param_1,0x53554247,0x42534247,1);
              if ((iVar2 != 0) || (iVar2 = DataStreamProcessor(param_2,&plocal_var_58), iVar2 != 0)) {
                (**(code **)*puVar4)(puVar4,0);
// WARNING: Subroutine does not return
                SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&rendering_buffer_2144_ptr,0xc6,1);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < aiStackX_20[0]);
          }
        }
// WARNING: Subroutine does not return
        UtilitiesSystem_MemoryManager(param_1,stack_array_50);
      }
    }
  }
  return uVar3;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_8a89dc(void)
{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint uVar5;
  int64_t unaff_RBP;
  int iVar6;
  int iStack00000000000000b8;
  iStack00000000000000b8 = 0;
  uVar1 = SystemCore_EncryptionManager();
  if (iStack00000000000000b8 < 0) {
    uVar3 = 0xd;
  }
  else {
    uVar5 = (int)*(uint *)(unaff_RBP + 0xc) >> 0x1f;
    if ((iStack00000000000000b8 <= (int)((*(uint *)(unaff_RBP + 0xc) ^ uVar5) - uVar5)) ||
       (uVar3 = RenderingTextureManager0(), (int)uVar3 == 0)) {
      if (uVar1 != 0x12) {
        if (uVar1 != 0) {
          return (uint64_t)uVar1;
        }
        iVar6 = 0;
        if (0 < iStack00000000000000b8) {
          do {
            puVar4 = (uint64_t *)
                     SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd8,&processed_var_816_ptr,0x30a
                                   ,0);
            if (puVar4 == (uint64_t *)0x0) {
              return 0x26;
            }
            function_84c050(puVar4,1,0);
            *puVar4 = &ui_system_data_1472_ptr;
            puVar4[9] = &ui_system_data_1520_ptr;
            iVar2 = function_89ae50(puVar4);
            if ((iVar2 != 0) || (iVar2 = DataStreamProcessor(), iVar2 != 0)) {
              (**(code **)*puVar4)(puVar4,0);
// WARNING: Subroutine does not return
              SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&rendering_buffer_2144_ptr,0xc6,1);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iStack00000000000000b8);
        }
      }
// WARNING: Subroutine does not return
      UtilitiesSystem_MemoryManager();
    }
  }
  return uVar3;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int function_8a8a3f(int param_1)
{
  int iVar1;
  uint64_t *puVar2;
  int unaff_EBX;
  int unaff_R15D;
  int local_buffer_b8;
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    if (0 < param_1) {
      do {
        puVar2 = (uint64_t *)
                 SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd8,&processed_var_816_ptr,0x30a);
        if (puVar2 == (uint64_t *)0x0) {
          return 0x26;
        }
        function_84c050(puVar2,1,0);
        *puVar2 = &ui_system_data_1472_ptr;
        puVar2[9] = &ui_system_data_1520_ptr;
        iVar1 = function_89ae50(puVar2);
        if ((iVar1 != 0) || (iVar1 = DataStreamProcessor(), iVar1 != 0)) {
          (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&rendering_buffer_2144_ptr,0xc6,1);
        }
        unaff_R15D = unaff_R15D + 1;
      } while (unaff_R15D < local_buffer_b8);
    }
  }
// WARNING: Subroutine does not return
  UtilitiesSystem_MemoryManager();
}
// 函数: void function_8a8b5a(void)
void function_8a8b5a(void)
{
  return;
}
// 函数: void function_8a8b67(void)
void function_8a8b67(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address