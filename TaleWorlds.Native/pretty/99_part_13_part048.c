/* 函数别名定义: MemoryCacheController */
#define MemoryCacheController MemoryCacheController


/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part048.c - 7 个函数

// 函数: void FUN_1808c6310(float *param_1,float param_2)
void FUN_1808c6310(float *param_1,float param_2)

{
  float fVar1;
  
  if (0.00578 <= ABS(param_2)) {
    param_2 = system_system_buffer_config * param_2;
  }
  else {
    param_2 = 0.0;
  }
  *param_1 = param_2;
  if (param_2 == 0.0) {
    param_1[1] = 0.0;
    return;
  }
  fVar1 = (float)expf();
  param_1[1] = 1.0 / (fVar1 - 1.0);
  return;
}



float FUN_1808c6380(uint64_t param_1,float param_2,int64_t param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_3 + 8);
  fVar2 = param_2;
  if (fVar1 != 0.0) {
    if (*(int *)(param_3 + 0x14) == 0) {
      if (*(float *)(param_3 + 0xc) != 0.0) {
        fVar1 = (float)expf(*(float *)(param_3 + 0xc) * param_2);
        fVar2 = (fVar1 - 1.0) * *(float *)(param_3 + 0x10);
      }
    }
    else {
      fVar2 = 0.0;
      if (*(int *)(param_3 + 0x14) == 1) {
        if (fVar1 <= 0.0) {
          fVar2 = (param_2 + param_2) - 1.0;
          return (param_2 - (fVar2 * fVar2 * fVar2 + 1.0) * 0.5) * fVar1 + param_2;
        }
        if (0.5 < param_2) {
          fVar1 = (float)powf((1.0 - param_2) + (1.0 - param_2),*(int32_t *)(param_3 + 0xc));
          return 1.0 - fVar1 * 0.5;
        }
        fVar1 = (float)powf(param_2 + param_2,*(int32_t *)(param_3 + 0xc));
        return fVar1 * 0.5;
      }
    }
  }
  return fVar2;
}



float FUN_1808c63e1(void)

{
  float fVar1;
  float in_XMM3_Da;
  
  fVar1 = (float)powf((1.0 - in_XMM3_Da) + (1.0 - in_XMM3_Da));
  return 1.0 - fVar1 * 0.5;
}



float FUN_1808c6418(uint64_t param_1,float param_2,uint64_t param_3,float param_4)

{
  float fVar1;
  float in_XMM4_Da;
  
  fVar1 = (param_2 + param_4) - 1.0;
  return (param_4 - (fVar1 * fVar1 * fVar1 + 1.0) * 0.5) * in_XMM4_Da + param_4;
}



float FUN_1808c6490(float *param_1,float param_2)

{
  float fVar1;
  
  if (*param_1 == 0.0) {
    return param_2;
  }
  fVar1 = (float)expf(*param_1 * param_2);
  return (fVar1 - 1.0) * param_1[1];
}



uint64_t *
FUN_1808c6620(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             int32_t param_5)

{
  uint64_t *puVar1;
  
  puVar1 = param_1 + 1;
  *puVar1 = puVar1;
  param_1[2] = puVar1;
  puVar1 = param_1 + 3;
  *puVar1 = puVar1;
  param_1[4] = puVar1;
  *param_1 = &memory_allocator_3160_ptr;
  param_1[5] = param_2;
  param_1[6] = param_3;
  *(int32_t *)(param_1 + 7) = 0;
  *(int16_t *)((int64_t)param_1 + 0x44) = 0;
  *(int32_t *)((int64_t)param_1 + 0x3c) = 0xff7fffff;
  *(int32_t *)(param_1 + 8) = 0x7f7fffff;
  *(int32_t *)(param_1 + 9) = param_5;
  *(uint64_t *)((int64_t)param_1 + 0x4c) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = param_4;
  func_0x0001808b1af0(param_4,param_1);
  return param_1;
}



uint64_t * FUN_1808c66a0(uint64_t *param_1,uint param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  *param_1 = &memory_allocator_3160_ptr;
  FUN_1808b3490(param_1[0xb],param_1);
  plVar1 = param_1 + 3;
  plVar2 = param_1 + 1;
  *(int64_t *)param_1[4] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[4];
  param_1[4] = plVar1;
  *plVar1 = (int64_t)plVar1;
  *(int64_t **)param_1[4] = plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[4];
  param_1[4] = plVar1;
  *plVar1 = (int64_t)plVar1;
  *param_1 = &memory_allocator_3136_ptr;
  *(int64_t *)param_1[2] = *plVar2;
  *(uint64_t *)(*plVar2 + 8) = param_1[2];
  param_1[2] = plVar2;
  *plVar2 = (int64_t)plVar2;
  *(int64_t **)param_1[2] = plVar2;
  *(uint64_t *)(*plVar2 + 8) = param_1[2];
  param_1[2] = plVar2;
  *plVar2 = (int64_t)plVar2;
  if ((param_2 & 1) != 0) {
    free(param_1,0x70);
  }
  return param_1;
}



uint64_t * FUN_1808c6770(uint64_t *param_1,uint64_t param_2)

{
  int64_t *plVar1;
  
  plVar1 = param_1 + 1;
  *param_1 = &memory_allocator_3136_ptr;
  *(int64_t *)param_1[2] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[2];
  param_1[2] = plVar1;
  *plVar1 = (int64_t)plVar1;
  *(int64_t **)param_1[2] = plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[2];
  param_1[2] = plVar1;
  *plVar1 = (int64_t)plVar1;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808c6890(int64_t param_1,uint64_t *param_2,uint64_t param_3)
void FUN_1808c6890(int64_t param_1,uint64_t *param_2,uint64_t param_3)

{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int8_t auStack_88 [32];
  int8_t auStack_68 [40];
  uint64_t uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_88;
  lVar3 = *(int64_t *)(param_1 + 0x28);
  if (lVar3 == 0) {
LAB_1808c6945:
    bVar4 = false;
  }
  else {
    plVar10 = param_2 + 0x83;
    if (param_2 == (uint64_t *)0xffffffffffffff08) {
      plVar10 = (int64_t *)0x0;
    }
    if (plVar10 == (int64_t *)0x0) goto LAB_1808c6945;
    if (((*(int *)((int64_t)plVar10 + 0x24) != 0) && ((int)plVar10[1] != 0)) &&
       (iVar6 = *(int *)(*plVar10 +
                        (int64_t)
                        (int)((*(uint *)(lVar3 + 0x1c) ^ *(uint *)(lVar3 + 0x18) ^
                               *(uint *)(lVar3 + 0x14) ^ *(uint *)(lVar3 + 0x10)) &
                             (int)plVar10[1] - 1U) * 4), iVar6 != -1)) {
      lVar9 = plVar10[2];
      do {
        lVar7 = (int64_t)iVar6;
        if ((*(int64_t *)(lVar9 + lVar7 * 0x18) == *(int64_t *)(lVar3 + 0x10)) &&
           (*(int64_t *)(lVar9 + 8 + lVar7 * 0x18) == *(int64_t *)(lVar3 + 0x18)))
        goto LAB_1808c693b;
        iVar6 = *(int *)(lVar9 + 0x10 + lVar7 * 0x18);
      } while (iVar6 != -1);
    }
    iVar6 = -1;
LAB_1808c693b:
    if (iVar6 == -1) goto LAB_1808c6945;
    bVar4 = true;
  }
  lVar9 = *(int64_t *)(param_1 + 0x30);
  if (lVar9 == 0) {
LAB_1808c69e4:
    bVar5 = false;
  }
  else {
    plVar10 = param_2 + 0xa1;
    if (param_2 == (uint64_t *)0xffffffffffffff08) {
      plVar10 = (int64_t *)0x0;
    }
    if (plVar10 == (int64_t *)0x0) goto LAB_1808c69e4;
    if (((*(int *)((int64_t)plVar10 + 0x24) != 0) && ((int)plVar10[1] != 0)) &&
       (iVar6 = *(int *)(*plVar10 +
                        (int64_t)
                        (int)((*(uint *)(lVar9 + 0x1c) ^ *(uint *)(lVar9 + 0x18) ^
                               *(uint *)(lVar9 + 0x14) ^ *(uint *)(lVar9 + 0x10)) &
                             (int)plVar10[1] - 1U) * 4), iVar6 != -1)) {
      lVar7 = plVar10[2];
      do {
        lVar8 = (int64_t)iVar6;
        if ((*(int64_t *)(lVar7 + lVar8 * 0x18) == *(int64_t *)(lVar9 + 0x10)) &&
           (*(int64_t *)(lVar7 + 8 + lVar8 * 0x18) == *(int64_t *)(lVar9 + 0x18)))
        goto LAB_1808c69db;
        iVar6 = *(int *)(lVar7 + 0x10 + lVar8 * 0x18);
      } while (iVar6 != -1);
    }
    iVar6 = -1;
LAB_1808c69db:
    if (iVar6 == -1) goto LAB_1808c69e4;
    bVar5 = true;
  }
  if ((bVar4) || (bVar5)) {
    lVar9 = lVar3;
    if (lVar3 != 0) {
      lVar9 = (**(code **)(*(int64_t *)*param_2 + 0x298))((int64_t *)*param_2,lVar3 + 0x10,1);
      if (lVar9 == 0) {
                    // WARNING: Subroutine does not return
        SystemController(lVar3 + 0x10,auStack_68);
      }
      *(int64_t *)(param_1 + 0x28) = lVar9;
    }
    if (((((*(int64_t *)(lVar9 + 0x20) == *(int64_t *)(lVar3 + 0x20)) &&
          (*(int64_t *)(lVar9 + 0x28) == *(int64_t *)(lVar3 + 0x28))) &&
         (*(int *)(lVar9 + 0x40) == *(int *)(lVar3 + 0x40))) ||
        (((iVar6 = FUN_1808b3490(*(uint64_t *)(param_1 + 0x58),param_1), iVar6 == 0 &&
          (iVar6 = FUN_1808b8620(param_3,*(uint64_t *)(param_1 + 0x28),param_1 + 0x58), iVar6 == 0
          )) && (iVar6 = func_0x0001808b1af0(*(uint64_t *)(param_1 + 0x58),param_1), iVar6 == 0)))
        ) && (*(int64_t *)(param_1 + 0x30) != 0)) {
      lVar3 = *(int64_t *)(param_1 + 0x30) + 0x10;
      lVar9 = (**(code **)(*(int64_t *)*param_2 + 0x268))((int64_t *)*param_2,lVar3,1);
      if (lVar9 == 0) {
                    // WARNING: Subroutine does not return
        SystemController(lVar3,auStack_68);
      }
      *(int64_t *)(param_1 + 0x30) = lVar9;
      if (lVar9 != 0) {
        if (*(int *)(param_1 + 0x48) == 0) {
          if (*(int *)(lVar9 + 0x38) == 0) {
            *(int32_t *)(param_1 + 0x3c) = 0xff7fffff;
            *(int32_t *)(param_1 + 0x40) = 0x7f7fffff;
          }
          else {
            fVar1 = **(float **)(lVar9 + 0x30);
            *(float *)(param_1 + 0x3c) = fVar1;
            fVar2 = *(float *)(*(int64_t *)(lVar9 + 0x30) + -0x18 +
                              (int64_t)*(int *)(lVar9 + 0x38) * 0x18);
            *(float *)(param_1 + 0x40) = fVar2;
            if (fVar2 < fVar1) goto LAB_1808c6b04;
          }
        }
        FUN_1808c6b50(param_1,0);
      }
    }
  }
LAB_1808c6b04:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_40 ^ (uint64_t)auStack_88);
}






// 函数: void FUN_1808c69e6(void)
void FUN_1808c69e6(void)

{
  float fVar1;
  float fVar2;
  char in_AL;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  char in_R10B;
  uint64_t *unaff_R15;
  int32_t extraout_XMM0_Da;
  int8_t auStackX_20 [8];
  uint64_t in_stack_00000048;
  
  if ((in_R10B != '\0') || (in_AL != '\0')) {
    lVar4 = unaff_RDI;
    if (unaff_RDI != 0) {
      lVar4 = (**(code **)(*(int64_t *)*unaff_R15 + 0x298))
                        ((int64_t *)*unaff_R15,unaff_RDI + 0x10,1);
      if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
        SystemController(unaff_RDI + 0x10,auStackX_20);
      }
      *(int64_t *)(unaff_RSI + 0x28) = lVar4;
    }
    if (((((*(int64_t *)(lVar4 + 0x20) == *(int64_t *)(unaff_RDI + 0x20)) &&
          (*(int64_t *)(lVar4 + 0x28) == *(int64_t *)(unaff_RDI + 0x28))) &&
         (*(int *)(lVar4 + 0x40) == *(int *)(unaff_RDI + 0x40))) ||
        (((iVar3 = FUN_1808b3490(*(uint64_t *)(unaff_RSI + 0x58)), iVar3 == 0 &&
          (iVar3 = FUN_1808b8620(extraout_XMM0_Da,*(uint64_t *)(unaff_RSI + 0x28),unaff_RSI + 0x58
                                ), iVar3 == 0)) &&
         (iVar3 = func_0x0001808b1af0(*(uint64_t *)(unaff_RSI + 0x58)), iVar3 == 0)))) &&
       (*(int64_t *)(unaff_RSI + 0x30) != 0)) {
      lVar4 = *(int64_t *)(unaff_RSI + 0x30) + 0x10;
      lVar5 = (**(code **)(*(int64_t *)*unaff_R15 + 0x268))((int64_t *)*unaff_R15,lVar4,1);
      if (lVar5 == 0) {
                    // WARNING: Subroutine does not return
        SystemController(lVar4,auStackX_20);
      }
      *(int64_t *)(unaff_RSI + 0x30) = lVar5;
      if (lVar5 != 0) {
        if (*(int *)(unaff_RSI + 0x48) == unaff_EBX) {
          if (*(int *)(lVar5 + 0x38) == unaff_EBX) {
            *(int32_t *)(unaff_RSI + 0x3c) = 0xff7fffff;
            *(int32_t *)(unaff_RSI + 0x40) = 0x7f7fffff;
          }
          else {
            fVar1 = **(float **)(lVar5 + 0x30);
            *(float *)(unaff_RSI + 0x3c) = fVar1;
            fVar2 = *(float *)(*(int64_t *)(lVar5 + 0x30) + -0x18 +
                              (int64_t)*(int *)(lVar5 + 0x38) * 0x18);
            *(float *)(unaff_RSI + 0x40) = fVar2;
            if (fVar2 < fVar1) goto LAB_1808c6b04;
          }
        }
        FUN_1808c6b50();
      }
    }
  }
LAB_1808c6b04:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000048 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808c6a0a(int64_t *param_1)
void FUN_1808c6a0a(int64_t *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t *unaff_R15;
  int32_t extraout_XMM0_Da;
  int8_t auStackX_20 [8];
  uint64_t in_stack_00000048;
  
  lVar4 = (**(code **)(*param_1 + 0x298))();
  if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
    SystemController(unaff_RDI + 0x10,auStackX_20);
  }
  *(int64_t *)(unaff_RSI + 0x28) = lVar4;
  if (((*(int64_t *)(lVar4 + 0x20) != *(int64_t *)(unaff_RDI + 0x20)) ||
      (*(int64_t *)(lVar4 + 0x28) != *(int64_t *)(unaff_RDI + 0x28))) ||
     (*(int *)(lVar4 + 0x40) != *(int *)(unaff_RDI + 0x40))) {
    iVar3 = FUN_1808b3490(*(uint64_t *)(unaff_RSI + 0x58));
    if (iVar3 != 0) goto LAB_1808c6b04;
    iVar3 = FUN_1808b8620(extraout_XMM0_Da,*(uint64_t *)(unaff_RSI + 0x28),unaff_RSI + 0x58);
    if ((iVar3 != 0) || (iVar3 = func_0x0001808b1af0(*(uint64_t *)(unaff_RSI + 0x58)), iVar3 != 0)
       ) goto LAB_1808c6b04;
  }
  if (*(int64_t *)(unaff_RSI + 0x30) != 0) {
    lVar4 = *(int64_t *)(unaff_RSI + 0x30) + 0x10;
    lVar5 = (**(code **)(*(int64_t *)*unaff_R15 + 0x268))((int64_t *)*unaff_R15,lVar4,1);
    if (lVar5 == 0) {
                    // WARNING: Subroutine does not return
      SystemController(lVar4,auStackX_20);
    }
    *(int64_t *)(unaff_RSI + 0x30) = lVar5;
    if (lVar5 != 0) {
      if (*(int *)(unaff_RSI + 0x48) == unaff_EBX) {
        if (*(int *)(lVar5 + 0x38) == unaff_EBX) {
          *(int32_t *)(unaff_RSI + 0x3c) = 0xff7fffff;
          *(int32_t *)(unaff_RSI + 0x40) = 0x7f7fffff;
        }
        else {
          fVar1 = **(float **)(lVar5 + 0x30);
          *(float *)(unaff_RSI + 0x3c) = fVar1;
          fVar2 = *(float *)(*(int64_t *)(lVar5 + 0x30) + -0x18 +
                            (int64_t)*(int *)(lVar5 + 0x38) * 0x18);
          *(float *)(unaff_RSI + 0x40) = fVar2;
          if (fVar2 < fVar1) goto LAB_1808c6b04;
        }
      }
      FUN_1808c6b50();
    }
  }
LAB_1808c6b04:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000048 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808c6a37(void)
void FUN_1808c6a37(void)

{
  int64_t lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int64_t lVar5;
  int unaff_EBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t *unaff_R15;
  int32_t extraout_XMM0_Da;
  int8_t auStackX_20 [8];
  uint64_t in_stack_00000048;
  
  if (((((*(int64_t *)(unaff_RBP + 0x20) == *(int64_t *)(unaff_RDI + 0x20)) &&
        (*(int64_t *)(unaff_RBP + 0x28) == *(int64_t *)(unaff_RDI + 0x28))) &&
       (*(int *)(unaff_RBP + 0x40) == *(int *)(unaff_RDI + 0x40))) ||
      (((iVar4 = FUN_1808b3490(*(uint64_t *)(unaff_RSI + 0x58)), iVar4 == 0 &&
        (iVar4 = FUN_1808b8620(extraout_XMM0_Da,*(uint64_t *)(unaff_RSI + 0x28),unaff_RSI + 0x58),
        iVar4 == 0)) && (iVar4 = func_0x0001808b1af0(*(uint64_t *)(unaff_RSI + 0x58)), iVar4 == 0)
       ))) && (*(int64_t *)(unaff_RSI + 0x30) != 0)) {
    lVar1 = *(int64_t *)(unaff_RSI + 0x30) + 0x10;
    lVar5 = (**(code **)(*(int64_t *)*unaff_R15 + 0x268))((int64_t *)*unaff_R15,lVar1,1);
    if (lVar5 == 0) {
                    // WARNING: Subroutine does not return
      SystemController(lVar1,auStackX_20);
    }
    *(int64_t *)(unaff_RSI + 0x30) = lVar5;
    if (lVar5 != 0) {
      if (*(int *)(unaff_RSI + 0x48) == unaff_EBX) {
        if (*(int *)(lVar5 + 0x38) == unaff_EBX) {
          *(int32_t *)(unaff_RSI + 0x3c) = 0xff7fffff;
          *(int32_t *)(unaff_RSI + 0x40) = 0x7f7fffff;
        }
        else {
          fVar2 = **(float **)(lVar5 + 0x30);
          *(float *)(unaff_RSI + 0x3c) = fVar2;
          fVar3 = *(float *)(*(int64_t *)(lVar5 + 0x30) + -0x18 +
                            (int64_t)*(int *)(lVar5 + 0x38) * 0x18);
          *(float *)(unaff_RSI + 0x40) = fVar3;
          if (fVar3 < fVar2) goto LAB_1808c6b04;
        }
      }
      FUN_1808c6b50();
    }
  }
LAB_1808c6b04:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000048 ^ (uint64_t)&stack0x00000000);
}



uint64_t FUN_1808c6b50(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  bool bVar4;
  int32_t uVar5;
  
  if (*(char *)(param_1 + 0x45) != '\0') {
    lVar2 = *(int64_t *)(param_1 + 0x30);
    uVar5 = 0;
    if (*(int *)(lVar2 + 0x38) == 0) {
      bVar4 = *(int *)(param_1 + 0x6c) != 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        *(int8_t *)(param_1 + 0x44) = 0;
        return 0;
      }
      if (iVar1 == 1) {
        uVar5 = FUN_1808c6120(lVar2,*(int32_t *)(param_1 + 0x50));
      }
      else {
        if (iVar1 != 2) {
          return 0x1c;
        }
        uVar5 = FUN_1808c5f30(lVar2,*(int32_t *)(param_1 + 0x50));
      }
      bVar4 = true;
    }
    *(bool *)(param_1 + 0x44) = bVar4;
    *(int32_t *)(param_1 + 0x38) = uVar5;
    uVar3 = FUN_1808b3010(*(uint64_t *)(param_1 + 0x58),param_2);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  return 0;
}



uint64_t FUN_1808c6c00(int64_t param_1,char param_2)

{
  uint64_t uVar1;
  
  *(char *)(param_1 + 0x45) = param_2;
  if ((param_2 != '\0') && (uVar1 = FUN_1808c6b50(param_1,0), (int)uVar1 != 0)) {
    return uVar1;
  }
  return 0;
}



uint64_t FUN_1808c6c20(int64_t param_1)

{
  int32_t uVar1;
  
  uVar1 = FUN_1808c6120(*(uint64_t *)(param_1 + 0x30));
  *(int32_t *)(param_1 + 0x60) = uVar1;
  return 0;
}



uint64_t FUN_1808c6c60(float param_1,float param_2,uint64_t param_3)

{
  bool bVar1;
  uint64_t uVar2;
  int64_t in_RCX;
  
  if ((*(int *)(in_RCX + 0x4c) != 2) || (param_2 != *(float *)(in_RCX + 0x50))) {
    bVar1 = true;
    if (*(int *)(in_RCX + 0x4c) == 2) {
      param_1 = *(float *)(in_RCX + 0x40);
      if (((param_1 <= *(float *)(in_RCX + 0x50)) && (param_1 <= param_2)) ||
         ((param_1 = *(float *)(in_RCX + 0x3c), *(float *)(in_RCX + 0x50) <= param_1 &&
          (param_2 <= param_1)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    *(float *)(in_RCX + 0x50) = param_2;
    *(int32_t *)(in_RCX + 0x4c) = 2;
    if ((bVar1) && (uVar2 = FUN_1808c6b50(param_1,param_3), (int)uVar2 != 0)) {
      return uVar2;
    }
  }
  return 0;
}



uint64_t FUN_1808c6cd0(int64_t param_1,int param_2)

{
  uint64_t uVar1;
  
  if ((*(int *)(param_1 + 0x4c) != 1) || (*(int *)(param_1 + 0x50) != param_2)) {
    *(int *)(param_1 + 0x50) = param_2;
    *(int32_t *)(param_1 + 0x4c) = 1;
    uVar1 = FUN_1808c6b50(param_1,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1808c6d60(uint64_t *param_1,uint64_t *param_2)

{
  int *piVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  *param_1 = *param_2;
  *(int32_t *)(param_1 + 1) = *(int32_t *)(param_2 + 1);
  *(int32_t *)((int64_t)param_1 + 0xc) = *(int32_t *)((int64_t)param_2 + 0xc);
  lVar2 = param_1[2];
  lVar3 = param_2[2];
  param_1[2] = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
  }
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&rendering_buffer_2208_ptr,0x76,1);
    }
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808c6dd0(int64_t *param_1,int64_t *param_2,uint *param_3,uint64_t *param_4,
void FUN_1808c6dd0(int64_t *param_1,int64_t *param_2,uint *param_3,uint64_t *param_4,
                  int8_t *param_5)

{
  int iVar1;
  uint *puVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  int8_t auStack_b8 [32];
  float fStack_98;
  float fStack_94;
  int64_t lStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  int64_t lStack_78;
  uint64_t auStack_70 [2];
  uint64_t uStack_60;
  
  uStack_60 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  *param_5 = 0;
  puVar2 = (uint *)MemoryCacheController0();
  *param_3 = *puVar2;
  *param_4 = 0;
  fStack_94 = 100.0;
  iVar1 = FUN_1808b6430(param_1[7],param_2,8,&fStack_94);
  if ((iVar1 == 0) &&
     ((100.0 <= fStack_94 ||
      (fVar8 = (float)func_0x0001808c1740(*(uint64_t *)(param_1[7] + 8),0,0x42c80000),
      fVar8 <= fStack_94)))) {
    uVar7 = *(uint *)(param_1 + 1);
    if (0.0 < *(float *)((int64_t)param_2 + 0x84)) {
      fVar8 = (float)func_0x0001808c1740(*(uint64_t *)(param_1[7] + 8),(int)param_2[0x10]);
      uVar6 = (uint64_t)(fVar8 * 48000.0 * 0.001);
      if ((uVar6 & 0xffffffff) + (uint64_t)uVar7 < 0x100000000) {
        uVar7 = uVar7 + (int)uVar6;
      }
      else {
        uVar7 = 0xffffffff;
      }
    }
    func_0x00018085c9a0(*param_1,&uStack_88,uVar7,param_1 + 2);
    plVar5 = param_1 + 8;
    if ((char)param_1[9] == '\0') {
      plVar5 = param_2 + 0x11;
    }
    lStack_78 = *plVar5;
    if (((int)lStack_78 != 0) || ((char)param_1[9] != '\0')) {
      fVar8 = 0.0;
      fVar9 = 1.0;
      lStack_90 = *(int64_t *)(*(int64_t *)(*(int64_t *)(*param_1 + 0x160) + 0x2b0) + 0x78);
      uVar3 = (**(code **)(*(int64_t *)(*(int64_t *)(*param_1 + 0x160) + 8) + 0x30))();
      lVar4 = func_0x0001808b8910(uVar3);
      if (lStack_90 != *(int64_t *)(*(int64_t *)(lVar4 + 0x2b0) + 0x78)) {
        do {
          auStack_70[0] = 0;
          iVar1 = UtilitiesSystem_MathCalculator(lStack_90,0,auStack_70);
          if (iVar1 != 0) goto FUN_1808c713f;
          uStack_80 = 0;
          iVar1 = FUN_18073c730(lStack_90,&uStack_80,0,0);
          if (iVar1 != 0) goto FUN_1808c713f;
          if ((uStack_80 != 0) && (auStack_70[0] < uStack_80)) {
            fVar8 = fVar8 + (float)(int64_t)(uStack_80 - auStack_70[0]) * fVar9;
          }
          fStack_98 = 0.0;
          iVar1 = FUN_18073ca90(lStack_90,&fStack_98);
          if ((iVar1 != 0) || (iVar1 = FUN_18073f640(lStack_90), iVar1 != 0)) goto FUN_1808c713f;
          fVar9 = fVar9 * fStack_98;
          uVar3 = (**(code **)(*(int64_t *)(*(int64_t *)(*param_1 + 0x160) + 8) + 0x30))
                            (*(int64_t *)(*param_1 + 0x160) + 8);
          lVar4 = func_0x0001808b8910(uVar3);
        } while (lStack_90 != *(int64_t *)(*(int64_t *)(lVar4 + 0x2b0) + 0x78));
      }
      uVar6 = *(uint64_t *)(*(int64_t *)(*(int64_t *)(*param_1 + 0x160) + 0x2b0) + 0x30);
      iVar1 = UISystem_WidgetController();
      lVar4 = uVar6 - (int64_t)((int)(fVar8 + 0.5) - iVar1);
      fVar8 = (float)(int64_t)(uStack_88 - lVar4);
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      if (2.88e+07 <= fVar8) goto FUN_1808c713f;
      if ((int)lStack_78 != 0) {
        fStack_98 = 0.0;
        uVar3 = (**(code **)(*(int64_t *)(*(int64_t *)(*param_1 + 0x160) + 8) + 0x30))
                          (*(int64_t *)(*param_1 + 0x160) + 8);
        uVar3 = func_0x0001808b8910(uVar3);
        iVar1 = FUN_18085ee30(uVar3,fVar8 / fVar9,&lStack_78,&fStack_98);
        if (iVar1 != 0) goto FUN_1808c713f;
        fVar8 = fStack_98 * fVar9;
      }
      uStack_88 = (int)(fVar8 + 0.5) + lVar4;
      if (uStack_88 < uVar6) {
        (**(code **)(*param_2 + 0x30))(param_2,auStack_70);
      }
    }
    *param_5 = 1;
    *param_3 = uVar7;
    *param_4 = uStack_88;
  }
FUN_1808c713f:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_60 ^ (uint64_t)auStack_b8);
}






// 函数: void FUN_1808c6e58(void)
void FUN_1808c6e58(void)

{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint uVar7;
  int64_t unaff_RBP;
  uint64_t unaff_RDI;
  int64_t lVar8;
  uint64_t *unaff_R12;
  uint *unaff_R13;
  int64_t *unaff_R14;
  int64_t *unaff_R15;
  bool in_CF;
  float fVar9;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t uVar10;
  float fVar11;
  
  if ((!in_CF) ||
     (fVar9 = (float)func_0x0001808c1740(*(uint64_t *)(unaff_R14[7] + 8),0),
     fVar9 < *(float *)(unaff_RBP + -0x3d) || fVar9 == *(float *)(unaff_RBP + -0x3d))) {
    uVar7 = *(uint *)(unaff_R14 + 1);
    if (0.0 < *(float *)((int64_t)unaff_R15 + 0x84)) {
      fVar9 = (float)func_0x0001808c1740(*(uint64_t *)(unaff_R14[7] + 8),(int)unaff_R15[0x10]);
      uVar6 = (uint64_t)(fVar9 * 48000.0 * 0.001);
      if ((uVar6 & 0xffffffff) + (uint64_t)uVar7 < 0x100000000) {
        uVar7 = uVar7 + (int)uVar6;
      }
      else {
        uVar7 = 0xffffffff;
      }
    }
    func_0x00018085c9a0(*unaff_R14,unaff_RBP + -0x31,uVar7,unaff_R14 + 2);
    lVar8 = unaff_R14[9];
    plVar5 = unaff_R14 + 8;
    if ((char)lVar8 == '\0') {
      plVar5 = unaff_R15 + 0x11;
    }
    lVar3 = *plVar5;
    *(int64_t *)(unaff_RBP + -0x21) = lVar3;
    if (((int)lVar3 != 0) || ((char)lVar8 != '\0')) {
      lVar8 = *unaff_R14;
      fVar9 = 0.0;
      fVar11 = 1.0;
      *(uint64_t *)(unaff_RBP + -0x39) =
           *(uint64_t *)(*(int64_t *)(*(int64_t *)(lVar8 + 0x160) + 0x2b0) + 0x78);
      uVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(lVar8 + 0x160) + 8) + 0x30))();
      lVar3 = func_0x0001808b8910(uVar2);
      lVar8 = *(int64_t *)(unaff_RBP + -0x39);
      if (lVar8 != *(int64_t *)(*(int64_t *)(lVar3 + 0x2b0) + 0x78)) {
        do {
          *(uint64_t *)(unaff_RBP + -0x19) = unaff_RDI;
          iVar1 = UtilitiesSystem_MathCalculator(lVar8,0,unaff_RBP + -0x19);
          if (iVar1 != 0) goto FUN_1808c7139;
          *(uint64_t *)(unaff_RBP + -0x29) = unaff_RDI;
          iVar1 = FUN_18073c730(*(uint64_t *)(unaff_RBP + -0x39),unaff_RBP + -0x29,0,0);
          if (iVar1 != 0) goto FUN_1808c7139;
          uVar6 = *(uint64_t *)(unaff_RBP + -0x29);
          if ((uVar6 != 0) && (*(uint64_t *)(unaff_RBP + -0x19) < uVar6)) {
            fVar9 = fVar9 + (float)(int64_t)(uVar6 - *(uint64_t *)(unaff_RBP + -0x19)) * fVar11;
          }
          *(int *)(unaff_RBP + -0x41) = (int)unaff_RDI;
          iVar1 = FUN_18073ca90(*(uint64_t *)(unaff_RBP + -0x39),unaff_RBP + -0x41);
          if ((iVar1 != 0) ||
             (iVar1 = FUN_18073f640(*(uint64_t *)(unaff_RBP + -0x39)), iVar1 != 0))
          goto FUN_1808c7139;
          fVar11 = fVar11 * *(float *)(unaff_RBP + -0x41);
          uVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(*unaff_R14 + 0x160) + 8) + 0x30))
                            (*(int64_t *)(*unaff_R14 + 0x160) + 8);
          lVar3 = func_0x0001808b8910(uVar2);
          lVar8 = *(int64_t *)(unaff_RBP + -0x39);
        } while (lVar8 != *(int64_t *)(*(int64_t *)(lVar3 + 0x2b0) + 0x78));
      }
      uVar6 = *(uint64_t *)(*(int64_t *)(*(int64_t *)(*unaff_R14 + 0x160) + 0x2b0) + 0x30);
      iVar1 = UISystem_WidgetController();
      lVar8 = uVar6 - (int64_t)((int)(fVar9 + 0.5) - iVar1);
      fVar9 = (float)(*(int64_t *)(unaff_RBP + -0x31) - lVar8);
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      if (2.88e+07 <= fVar9) goto FUN_1808c7139;
      uVar10 = extraout_XMM0_Da;
      if (*(int *)(unaff_RBP + -0x21) != 0) {
        lVar3 = *unaff_R14;
        *(int32_t *)(unaff_RBP + -0x41) = 0;
        uVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(lVar3 + 0x160) + 8) + 0x30))
                          (*(int64_t *)(lVar3 + 0x160) + 8);
        uVar2 = func_0x0001808b8910(uVar2);
        iVar1 = FUN_18085ee30(uVar2,fVar9 / fVar11,unaff_RBP + -0x21,unaff_RBP + -0x41);
        if (iVar1 != 0) goto FUN_1808c7139;
        fVar9 = *(float *)(unaff_RBP + -0x41) * fVar11;
        uVar10 = extraout_XMM0_Da_00;
      }
      uVar4 = (int)(fVar9 + 0.5) + lVar8;
      *(uint64_t *)(unaff_RBP + -0x31) = uVar4;
      if (uVar4 < uVar6) {
        (**(code **)(*unaff_R15 + 0x30))(uVar10,unaff_RBP + -0x19);
      }
    }
    **(int8_t **)(unaff_RBP + 0x7f) = 1;
    uVar2 = *(uint64_t *)(unaff_RBP + -0x31);
    *unaff_R13 = uVar7;
    *unaff_R12 = uVar2;
  }
FUN_1808c7139:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -9) ^ (uint64_t)&stack0x00000000);
}






