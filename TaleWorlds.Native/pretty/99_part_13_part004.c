#include "TaleWorlds.Native.Split.h"

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

// 函数: void FUN_1808a7dfd(void)
void FUN_1808a7dfd(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0001808a7f2b)

uint64_t FUN_1808a7e10(uint64_t *param_1,longlong param_2)

{
  uint64_t uVar1;
  int8_t auStack_48 [32];
  int8_t auStack_28 [32];
  
  uVar1 = FUN_1808ddc20(param_1,auStack_28,1,0x49444d43);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = FUN_1808ddc20(param_1,auStack_48,0,0x42444d43);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = FUN_180899360(param_1,param_2 + 0x10);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (*(int *)(param_1[1] + 0x18) == 0) {
    uVar1 = FUN_1808aed00(*param_1,param_2 + 0xd8,4);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*(int *)(param_1[1] + 0x18) == 0) {
      uVar1 = FUN_180899090(*param_1,param_2 + 0xdc);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (*(uint *)(param_1 + 8) < 0x80) {
        uVar1 = 0;
      }
      else if (*(int *)(param_1[1] + 0x18) == 0) {
        uVar1 = FUN_1808995c0(*param_1,param_2 + 0xec);
      }
      else {
        uVar1 = 0x1c;
      }
      if ((int)uVar1 != 0) {
        return uVar1;
      }
                    // WARNING: Subroutine does not return
      FUN_1808ddf80(param_1,auStack_48);
    }
  }
  return 0x1c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1808a7f40(uint64_t *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  longlong *plVar4;
  int32_t *puVar5;
  longlong *plVar6;
  int iVar7;
  uint64_t auStack_38 [2];
  
  plVar4 = (longlong *)
           FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x28,&unknown_var_816_ptr,0x278,0,0,1);
  if (plVar4 == (longlong *)0x0) {
    return 0x26;
  }
  *plVar4 = (longlong)plVar4;
  plVar4[1] = (longlong)plVar4;
  puVar5 = (int32_t *)FUN_180847820();
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *(int32_t *)(plVar4 + 2) = *puVar5;
  *(int32_t *)((longlong)plVar4 + 0x14) = uVar1;
  *(int32_t *)(plVar4 + 3) = uVar2;
  *(int32_t *)((longlong)plVar4 + 0x1c) = uVar3;
  *(int32_t *)(plVar4 + 4) = 0x7f7fffff;
  *(int32_t *)((longlong)plVar4 + 0x24) = 0xffffffff;
  if (*(int *)(param_1[1] + 0x18) == 0) {
    iVar7 = FUN_1808aed00(*param_1,(longlong)plVar4 + 0x24,4);
    if (iVar7 != 0) goto LAB_1808a806f;
    if (*(int *)(param_1[1] + 0x18) != 0) {
      iVar7 = 0x1c;
      goto LAB_1808a806f;
    }
    iVar7 = FUN_180899090(*param_1,plVar4 + 2);
    if (iVar7 != 0) goto LAB_1808a806f;
    if (*(int *)(param_1[1] + 0x18) != 0) {
      iVar7 = 0x1c;
      goto LAB_1808a806f;
    }
    iVar7 = FUN_1808995c0(*param_1,plVar4 + 4);
    if (iVar7 != 0) goto LAB_1808a806f;
    auStack_38[0] = 0;
    iVar7 = FUN_1808b0490(param_4,*(int32_t *)((longlong)plVar4 + 0x24),auStack_38);
    if (iVar7 != 0) goto LAB_1808a806f;
  }
  else {
    iVar7 = 0x1c;
LAB_1808a806f:
    if (iVar7 != 0) goto LAB_1808a8093;
  }
  plVar6 = (longlong *)*plVar4;
  if (plVar6 != plVar4) {
    iVar7 = 0;
    do {
      plVar6 = (longlong *)*plVar6;
      iVar7 = iVar7 + 1;
    } while (plVar6 != plVar4);
    if (iVar7 != 0) {
LAB_1808a8093:
      *(longlong *)plVar4[1] = *plVar4;
      *(longlong *)(*plVar4 + 8) = plVar4[1];
      plVar4[1] = (longlong)plVar4;
      *plVar4 = (longlong)plVar4;
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar4,&unknown_var_2144_ptr,0xc6,1);
    }
  }
  plVar4[1] = *(longlong *)(param_2 + 8);
  *plVar4 = param_2;
  *(longlong **)(param_2 + 8) = plVar4;
  *(longlong **)plVar4[1] = plVar4;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a8120(uint64_t *param_1,longlong param_2,uint64_t param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  uint64_t auStack_18 [2];
  
  lVar1 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x38,&unknown_var_816_ptr,0x278,0,0,1);
  if (lVar1 == 0) {
    return 0x26;
  }
  plVar2 = (longlong *)FUN_1808ebf80(lVar1);
  plVar2[2] = param_4;
  if (*(int *)(param_1[1] + 0x18) == 0) {
    iVar4 = FUN_1808aed00(*param_1,(longlong)plVar2 + 0x2c,4);
    if ((iVar4 != 0) || (iVar4 = FUN_180899360(param_1,plVar2 + 3), iVar4 != 0)) goto LAB_1808a824a;
    if (*(int *)(param_1[1] + 0x18) != 0) {
      iVar4 = 0x1c;
      goto LAB_1808a824a;
    }
    iVar4 = FUN_1808aed00(*param_1,plVar2 + 5,4);
    if (iVar4 != 0) goto LAB_1808a824a;
    if (*(int *)(param_1[1] + 0x18) != 0) {
      iVar4 = 0x1c;
      goto LAB_1808a824a;
    }
    iVar4 = FUN_1808995c0(*param_1,plVar2 + 6);
    if (iVar4 != 0) goto LAB_1808a824a;
    auStack_18[0] = 0;
    iVar4 = FUN_1808b0490(plVar2[2],*(int32_t *)((longlong)plVar2 + 0x2c),auStack_18);
    if (iVar4 != 0) goto LAB_1808a824a;
  }
  else {
    iVar4 = 0x1c;
LAB_1808a824a:
    if (iVar4 != 0) goto LAB_1808a8273;
  }
  plVar3 = (longlong *)*plVar2;
  if (plVar3 != plVar2) {
    iVar4 = 0;
    do {
      plVar3 = (longlong *)*plVar3;
      iVar4 = iVar4 + 1;
    } while (plVar3 != plVar2);
    if (iVar4 != 0) {
LAB_1808a8273:
      *(longlong *)plVar2[1] = *plVar2;
      *(longlong *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (longlong)plVar2;
      *plVar2 = (longlong)plVar2;
      *(longlong **)plVar2[1] = plVar2;
      *(longlong *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (longlong)plVar2;
      *plVar2 = (longlong)plVar2;
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar2,&unknown_var_2144_ptr,0xc6,1);
    }
  }
  plVar2[1] = *(longlong *)(param_2 + 8);
  *plVar2 = param_2;
  *(longlong **)(param_2 + 8) = plVar2;
  *(longlong **)plVar2[1] = plVar2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a8310(uint64_t param_1,longlong param_2)

{
  longlong *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int32_t *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  
  iVar11 = 0;
  plVar7 = (longlong *)
           FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0xe0,&unknown_var_816_ptr,0x269,0,0,1);
  if (plVar7 == (longlong *)0x0) {
    return 0x26;
  }
  *plVar7 = (longlong)plVar7;
  plVar7[1] = (longlong)plVar7;
  puVar8 = (int32_t *)FUN_180847820();
  uVar2 = puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  *(int32_t *)(plVar7 + 2) = *puVar8;
  *(int32_t *)((longlong)plVar7 + 0x14) = uVar2;
  *(int32_t *)(plVar7 + 3) = uVar3;
  *(int32_t *)((longlong)plVar7 + 0x1c) = uVar4;
  plVar9 = (longlong *)FUN_180847820();
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
  *plVar1 = (longlong)plVar1;
  plVar7[0xd] = (longlong)plVar1;
  *plVar10 = (longlong)plVar10;
  plVar7[0xf] = (longlong)plVar10;
  plVar10 = plVar7 + 0x16;
  plVar7[0x10] = 0;
  plVar7[0x11] = 0;
  plVar7[0x12] = 0;
  plVar7[0x13] = 0;
  plVar7[0x14] = 0;
  *(int32_t *)(plVar7 + 0x15) = 0;
  *plVar10 = (longlong)plVar10;
  plVar7[0x17] = (longlong)plVar10;
  plVar10 = plVar7 + 0x18;
  *plVar10 = (longlong)plVar10;
  plVar7[0x19] = (longlong)plVar10;
  puVar8 = (int32_t *)FUN_180847820();
  uVar2 = puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  *(int32_t *)(plVar7 + 0x1a) = *puVar8;
  *(int32_t *)((longlong)plVar7 + 0xd4) = uVar2;
  *(int32_t *)(plVar7 + 0x1b) = uVar3;
  *(int32_t *)((longlong)plVar7 + 0xdc) = uVar4;
  iVar6 = FUN_18089e820(plVar7,param_1);
  if (iVar6 != 0) {
LAB_1808a8436:
    FUN_1808adfc0(plVar1);
    FUN_1808b0fb0(plVar7 + 8,0);
    *(longlong *)plVar7[1] = *plVar7;
    *(longlong *)(*plVar7 + 8) = plVar7[1];
    plVar7[1] = (longlong)plVar7;
    *plVar7 = (longlong)plVar7;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar7,&unknown_var_2144_ptr,0xc6,1);
  }
  plVar10 = (longlong *)*plVar7;
  if (plVar10 != plVar7) {
    do {
      plVar10 = (longlong *)*plVar10;
      iVar11 = iVar11 + 1;
    } while (plVar10 != plVar7);
    if (iVar11 != 0) goto LAB_1808a8436;
  }
  plVar7[1] = *(longlong *)(param_2 + 8);
  *plVar7 = param_2;
  *(longlong **)(param_2 + 8) = plVar7;
  *(longlong **)plVar7[1] = plVar7;
  return 0;
}



int FUN_1808a84c0(longlong param_1,uint64_t param_2)

{
  int32_t uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lStack_28;
  ulonglong uStack_20;
  longlong lStack_18;
  ulonglong uStack_10;
  
  lVar8 = 0;
  lStack_18 = 0;
  uStack_10 = 0;
  lStack_28 = 0;
  uStack_20 = 0;
  iVar4 = FUN_1808ad530(param_2,&lStack_18);
  if ((iVar4 == 0) && (iVar4 = FUN_1808ad530(param_2,&lStack_28), iVar4 == 0)) {
    iVar3 = (int)uStack_10;
    lVar6 = (longlong)(int)uStack_10;
    uVar5 = (int)*(uint *)(param_1 + 0x3c) >> 0x1f;
    if (((int)uStack_10 <= (int)((*(uint *)(param_1 + 0x3c) ^ uVar5) - uVar5)) ||
       (iVar4 = FUN_180898d60(param_1 + 0x30,uStack_10 & 0xffffffff), iVar4 == 0)) {
      *(int *)(param_1 + 0x38) = iVar3;
      lVar7 = lVar8;
      lVar9 = lVar8;
      if (0 < iVar3) {
        do {
          uVar1 = *(int32_t *)(lStack_18 + lVar7 * 4);
          lVar9 = lVar9 + 3;
          lVar2 = *(longlong *)(param_1 + 0x30);
          lVar7 = lVar7 + 1;
          *(char *)(lVar2 + -3 + lVar9) = (char)uVar1;
          *(char *)(lVar2 + -1 + lVar9) = (char)((uint)uVar1 >> 0x10);
          *(char *)(lVar2 + -2 + lVar9) = (char)((uint)uVar1 >> 8);
        } while (lVar7 < lVar6);
      }
      iVar3 = (int)uStack_20;
      lVar6 = (longlong)(int)uStack_20;
      uVar5 = (int)*(uint *)(param_1 + 0x4c) >> 0x1f;
      if (((int)uStack_20 <= (int)((*(uint *)(param_1 + 0x4c) ^ uVar5) - uVar5)) ||
         (iVar4 = FUN_180898d60(param_1 + 0x40,uStack_20 & 0xffffffff), iVar4 == 0)) {
        *(int *)(param_1 + 0x48) = iVar3;
        lVar9 = lVar8;
        if (0 < iVar3) {
          do {
            uVar1 = *(int32_t *)(lStack_28 + lVar8 * 4);
            lVar9 = lVar9 + 3;
            lVar7 = *(longlong *)(param_1 + 0x40);
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
  FUN_18088ccd0(&lStack_28);
  FUN_18088ccd0(&lStack_18);
  return iVar4;
}



ulonglong FUN_1808a8620(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint auStackX_18 [2];
  uint auStackX_20 [2];
  int8_t auStack_38 [32];
  
  uVar3 = FUN_1808ddc20(param_2,auStack_38,0,0x46454d50);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  auStackX_18[0] = 6;
  uVar2 = 0x1c;
  if (*(int *)(param_2[1] + 0x18) == 0) {
    plVar1 = (longlong *)*param_2;
    if (*plVar1 == 0) {
      uVar3 = 0x1c;
    }
    else {
      if (plVar1[2] != 0) {
        auStackX_20[0] = 0;
        uVar3 = func_0x00018076a7d0(*plVar1,auStackX_20);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if ((ulonglong)plVar1[2] < (ulonglong)auStackX_20[0] + 4) {
          uVar3 = 0x11;
          goto LAB_1808a86e7;
        }
      }
      uVar3 = FUN_180769ed0(*plVar1,auStackX_18,1,4,0);
    }
LAB_1808a86e7:
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (0x3ff < auStackX_18[0]) {
      return 0xd;
    }
    uVar3 = FUN_1808af280(param_1 + 0x48);
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
  if (0 < (int)auStackX_18[0]) {
    do {
      uVar3 = FUN_1808acb90(param_1,param_2,iVar4);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)auStackX_18[0]);
  }
  if (*(uint *)(param_2 + 8) < 0x6e) {
    uVar2 = 0;
  }
  else if (*(int *)(param_2[1] + 0x18) == 0) {
    uVar2 = FUN_1808a2e00(*param_2,param_1 + 0x5c);
  }
  if (uVar2 == 0) {
                    // WARNING: Subroutine does not return
    FUN_1808ddf80(param_2,auStack_38);
  }
  return (ulonglong)uVar2;
}



ulonglong FUN_1808a864f(void)

{
  longlong *plVar1;
  uint uVar2;
  longlong in_RAX;
  ulonglong uVar3;
  int iVar4;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  uint uStack0000000000000080;
  uint in_stack_00000088;
  
  uStack0000000000000080 = 6;
  uVar2 = 0x1c;
  if (*(int *)(in_RAX + 0x18) == 0) {
    plVar1 = (longlong *)*unaff_RSI;
    if (*plVar1 == 0) {
      uVar3 = 0x1c;
    }
    else {
      if (plVar1[2] != 0) {
        in_stack_00000088 = 0;
        uVar3 = func_0x00018076a7d0(*plVar1,&stack0x00000088);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if ((ulonglong)plVar1[2] < (ulonglong)in_stack_00000088 + 4) {
          uVar3 = 0x11;
          goto LAB_1808a86e7;
        }
      }
      uVar3 = FUN_180769ed0(*plVar1,&stack0x00000080,1,4,0);
    }
LAB_1808a86e7:
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (0x3ff < uStack0000000000000080) {
      return 0xd;
    }
    uVar3 = FUN_1808af280(unaff_RBP + 0x48);
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
  if (0 < (int)uStack0000000000000080) {
    do {
      uVar3 = FUN_1808acb90();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uStack0000000000000080);
  }
  if (*(uint *)(unaff_RSI + 8) < 0x6e) {
    uVar2 = 0;
  }
  else if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
    uVar2 = FUN_1808a2e00(*unaff_RSI,unaff_RBP + 0x5c);
  }
  if (uVar2 != 0) {
    return (ulonglong)uVar2;
  }
                    // WARNING: Subroutine does not return
  FUN_1808ddf80();
}



uint64_t FUN_1808a87a4(void)

{
  return 0;
}



uint64_t FUN_1808a87b7(void)

{
  return 0xd;
}






// 函数: void FUN_1808a87c6(void)
void FUN_1808a87c6(void)

{
  return;
}



ulonglong FUN_1808a87d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  float afStackX_18 [4];
  int8_t auStack_48 [32];
  
  uVar5 = 0;
  uVar3 = FUN_1808ddd30(param_2,auStack_48,0,0x46454d50,0);
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
          lVar1 = *(longlong *)(uVar3 + *(longlong *)(param_1 + 0x48));
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
          uVar4 = FUN_1808acf30(param_1,param_2,uVar5);
        }
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar5 = (ulonglong)((int)uVar5 + 1);
        uVar3 = uVar3 + 8;
      } while ((longlong)uVar3 < 0xa0);
      uVar2 = 0;
      if ((0x6d < *(uint *)(param_2 + 8)) && (uVar2 = uVar6, *(int *)(param_2[1] + 0x18) == 0)) {
        afStackX_18[0] = (float)CONCAT31(afStackX_18[0]._1_3_,*(int8_t *)(param_1 + 0x5c));
        uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                          (*(uint64_t **)(*param_2 + 8),afStackX_18,1);
      }
      uVar6 = uVar2;
      if (uVar6 == 0) {
                    // WARNING: Subroutine does not return
        FUN_1808de000(param_2,auStack_48);
      }
LAB_1808a8983:
      uVar3 = (ulonglong)uVar6;
    }
  }
  return uVar3;
}



ulonglong FUN_1808a880a(void)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong in_RAX;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *unaff_RBX;
  uint uVar6;
  ulonglong unaff_R12;
  longlong unaff_R15;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t uVar7;
  float in_stack_00000090;
  
  uVar2 = (uint)unaff_R12;
  uVar6 = uVar2 + 0x1c;
  if (*(uint *)(in_RAX + 0x18) == uVar2) {
    in_stack_00000090 = 2.8026e-44;
    uVar4 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                      (*(uint64_t **)(*unaff_RBX + 8),&stack0x00000090,4);
  }
  else {
    uVar4 = (ulonglong)uVar6;
  }
  if ((int)uVar4 == 0) {
    uVar4 = unaff_R12 & 0xffffffff;
    do {
      if ((int)uVar4 == 0) {
        lVar1 = *(longlong *)(unaff_R12 + *(longlong *)(unaff_R15 + 0x48));
        if ((*(int *)(lVar1 + 0x10) != 1) || (*(uint *)(unaff_RBX[1] + 0x18) != uVar2))
        goto LAB_1808a8983;
        in_stack_00000090 = (float)uVar2;
        uVar5 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                          (*(uint64_t **)(*unaff_RBX + 8),&stack0x00000090,4);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (*(uint *)(unaff_RBX[1] + 0x18) != uVar2) goto LAB_1808a8983;
        in_stack_00000090 = (float)*(int *)(lVar1 + 0x18);
        uVar5 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                          (*(uint64_t **)(*unaff_RBX + 8),&stack0x00000090,4);
        uVar7 = extraout_XMM0_Qa;
      }
      else {
        uVar5 = FUN_1808acf30();
        uVar7 = extraout_XMM0_Qa_00;
      }
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      unaff_R12 = unaff_R12 + 8;
    } while ((longlong)unaff_R12 < 0xa0);
    uVar3 = uVar2;
    if ((0x6d < *(uint *)(unaff_RBX + 8)) &&
       (uVar3 = uVar6, *(uint *)(unaff_RBX[1] + 0x18) == uVar2)) {
      in_stack_00000090 = (float)CONCAT31(in_stack_00000090._1_3_,*(int8_t *)(unaff_R15 + 0x5c))
      ;
      uVar3 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                        (*(uint64_t **)(*unaff_RBX + 8),&stack0x00000090,1);
      uVar7 = extraout_XMM0_Qa_01;
    }
    uVar6 = uVar3;
    if (uVar6 == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808de000(uVar7,&stack0x00000030);
    }
LAB_1808a8983:
    uVar4 = (ulonglong)uVar6;
  }
  return uVar4;
}



ulonglong FUN_1808a884b(void)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *unaff_RBX;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong unaff_RDI;
  int iVar6;
  ulonglong unaff_R12;
  longlong unaff_R15;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t uVar7;
  float in_stack_00000090;
  
  iVar6 = (int)unaff_R12;
  uVar4 = unaff_R12 & 0xffffffff;
  uVar5 = unaff_R12;
  do {
    if ((int)uVar4 == 0) {
      lVar1 = *(longlong *)(uVar5 + *(longlong *)(unaff_R15 + 0x48));
      if ((*(int *)(lVar1 + 0x10) != 1) || (*(int *)(unaff_RBX[1] + 0x18) != iVar6))
      goto LAB_1808a8983;
      in_stack_00000090 = (float)iVar6;
      uVar3 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                        (*(uint64_t **)(*unaff_RBX + 8),&stack0x00000090,4);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) != iVar6) goto LAB_1808a8983;
      in_stack_00000090 = (float)*(int *)(lVar1 + 0x18);
      uVar3 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                        (*(uint64_t **)(*unaff_RBX + 8),&stack0x00000090,4);
      uVar7 = extraout_XMM0_Qa;
    }
    else {
      uVar3 = FUN_1808acf30();
      uVar7 = extraout_XMM0_Qa_00;
    }
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar4 = (ulonglong)((int)uVar4 + 1);
    uVar5 = uVar5 + 8;
  } while ((longlong)uVar5 < 0xa0);
  if (*(uint *)(unaff_RBX + 8) < 0x6e) {
    unaff_RDI = unaff_R12 & 0xffffffff;
  }
  else if (*(int *)(unaff_RBX[1] + 0x18) == iVar6) {
    in_stack_00000090 = (float)CONCAT31(in_stack_00000090._1_3_,*(int8_t *)(unaff_R15 + 0x5c));
    uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                      (*(uint64_t **)(*unaff_RBX + 8),&stack0x00000090,1);
    unaff_RDI = (ulonglong)uVar2;
    uVar7 = extraout_XMM0_Qa_01;
  }
  if ((int)unaff_RDI == 0) {
                    // WARNING: Subroutine does not return
    FUN_1808de000(uVar7,&stack0x00000030);
  }
LAB_1808a8983:
  return unaff_RDI & 0xffffffff;
}






// 函数: void FUN_1808a899e(void)
void FUN_1808a899e(void)

{
  return;
}






// 函数: void FUN_1808a89a3(void)
void FUN_1808a89a3(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808a89b0(uint64_t param_1,longlong param_2,int32_t param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  int aiStackX_20 [2];
  uint64_t *puStack_58;
  int8_t auStack_50 [40];
  
  uVar3 = FUN_1808ddc20(param_1,auStack_50,1,param_3);
  if ((int)uVar3 == 0) {
    aiStackX_20[0] = 0;
    uVar1 = FUN_1808de650(param_1,aiStackX_20);
    if (aiStackX_20[0] < 0) {
      uVar3 = 0xd;
    }
    else {
      uVar5 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStackX_20[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar5) - uVar5)) ||
         (uVar3 = FUN_180747f10(param_2,aiStackX_20[0]), (int)uVar3 == 0)) {
        if (uVar1 != 0x12) {
          if (uVar1 != 0) {
            return (ulonglong)uVar1;
          }
          iVar6 = 0;
          if (0 < aiStackX_20[0]) {
            do {
              puVar4 = (uint64_t *)
                       FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0xd8,&unknown_var_816_ptr,
                                     0x30a,0,0,1);
              if (puVar4 == (uint64_t *)0x0) {
                return 0x26;
              }
              FUN_18084c050(puVar4,1,0);
              *puVar4 = &unknown_var_1472_ptr;
              puVar4[9] = &unknown_var_1520_ptr;
              puStack_58 = puVar4;
              iVar2 = FUN_18089ae50(puVar4,param_1,0x53554247,0x42534247,1);
              if ((iVar2 != 0) || (iVar2 = FUN_18087dc70(param_2,&puStack_58), iVar2 != 0)) {
                (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
                FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),puVar4,&unknown_var_2144_ptr,0xc6,1);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < aiStackX_20[0]);
          }
        }
                    // WARNING: Subroutine does not return
        FUN_1808ddf80(param_1,auStack_50);
      }
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808a89dc(void)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  uint uVar5;
  longlong unaff_RBP;
  int iVar6;
  int iStack00000000000000b8;
  
  iStack00000000000000b8 = 0;
  uVar1 = FUN_1808de650();
  if (iStack00000000000000b8 < 0) {
    uVar3 = 0xd;
  }
  else {
    uVar5 = (int)*(uint *)(unaff_RBP + 0xc) >> 0x1f;
    if ((iStack00000000000000b8 <= (int)((*(uint *)(unaff_RBP + 0xc) ^ uVar5) - uVar5)) ||
       (uVar3 = FUN_180747f10(), (int)uVar3 == 0)) {
      if (uVar1 != 0x12) {
        if (uVar1 != 0) {
          return (ulonglong)uVar1;
        }
        iVar6 = 0;
        if (0 < iStack00000000000000b8) {
          do {
            puVar4 = (uint64_t *)
                     FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0xd8,&unknown_var_816_ptr,0x30a
                                   ,0);
            if (puVar4 == (uint64_t *)0x0) {
              return 0x26;
            }
            FUN_18084c050(puVar4,1,0);
            *puVar4 = &unknown_var_1472_ptr;
            puVar4[9] = &unknown_var_1520_ptr;
            iVar2 = FUN_18089ae50(puVar4);
            if ((iVar2 != 0) || (iVar2 = FUN_18087dc70(), iVar2 != 0)) {
              (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
              FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),puVar4,&unknown_var_2144_ptr,0xc6,1);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iStack00000000000000b8);
        }
      }
                    // WARNING: Subroutine does not return
      FUN_1808ddf80();
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808a8a3f(int param_1)

{
  int iVar1;
  uint64_t *puVar2;
  int unaff_EBX;
  int unaff_R15D;
  int in_stack_000000b8;
  
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    if (0 < param_1) {
      do {
        puVar2 = (uint64_t *)
                 FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0xd8,&unknown_var_816_ptr,0x30a);
        if (puVar2 == (uint64_t *)0x0) {
          return 0x26;
        }
        FUN_18084c050(puVar2,1,0);
        *puVar2 = &unknown_var_1472_ptr;
        puVar2[9] = &unknown_var_1520_ptr;
        iVar1 = FUN_18089ae50(puVar2);
        if ((iVar1 != 0) || (iVar1 = FUN_18087dc70(), iVar1 != 0)) {
          (**(code **)*puVar2)(puVar2,0);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),puVar2,&unknown_var_2144_ptr,0xc6,1);
        }
        unaff_R15D = unaff_R15D + 1;
      } while (unaff_R15D < in_stack_000000b8);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808ddf80();
}






// 函数: void FUN_1808a8b5a(void)
void FUN_1808a8b5a(void)

{
  return;
}






// 函数: void FUN_1808a8b67(void)
void FUN_1808a8b67(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




