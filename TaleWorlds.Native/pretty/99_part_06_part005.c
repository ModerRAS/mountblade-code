#include "TaleWorlds.Native.Split.h"

// 99_part_06_part005.c - 5 个函数

// 函数: void FUN_1803a76b0(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4,int *param_5
void FUN_1803a76b0(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4,int *param_5
                  )

{
  int64_t lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int iStack_20;
  
  lVar7 = param_4 * 2 + 2;
  if (lVar7 < param_3) {
    lVar1 = *param_1;
    iVar2 = (int)param_1[1];
    lVar9 = param_4;
    do {
      uVar5 = iVar2 + -1 + (int)lVar7;
      uVar3 = uVar5 >> 0xb;
      uVar6 = (int)lVar7 + iVar2;
      uVar4 = uVar6 >> 0xb;
      param_4 = lVar7 + -1;
      if (*(int *)(*(int64_t *)(lVar1 + 8 + (uint64_t)uVar4 * 8) +
                  (uint64_t)(uVar6 + uVar4 * -0x800) * 4) <=
          *(int *)(*(int64_t *)(lVar1 + 8 + (uint64_t)uVar3 * 8) +
                  (uint64_t)(uVar5 + uVar3 * -0x800) * 4)) {
        param_4 = lVar7;
      }
      uVar5 = iVar2 + (int)param_4;
      lVar7 = param_4 * 2 + 2;
      uVar3 = uVar5 >> 0xb;
      uVar6 = iVar2 + (int)lVar9;
      uVar4 = uVar6 >> 0xb;
      *(int32_t *)
       (*(int64_t *)(lVar1 + 8 + (uint64_t)uVar4 * 8) + (uint64_t)(uVar6 + uVar4 * -0x800) * 4) =
           *(int32_t *)
            (*(int64_t *)(lVar1 + 8 + (uint64_t)uVar3 * 8) +
            (uint64_t)(uVar5 + uVar3 * -0x800) * 4);
      lVar9 = param_4;
    } while (lVar7 < param_3);
  }
  if (lVar7 == param_3) {
    uVar5 = (int)param_1[1] + -1 + (int)lVar7;
    uVar3 = uVar5 >> 0xb;
    uVar6 = (int)param_1[1] + (int)param_4;
    param_4 = lVar7 + -1;
    uVar4 = uVar6 >> 0xb;
    *(int32_t *)
     (*(int64_t *)(*param_1 + 8 + (uint64_t)uVar4 * 8) + (uint64_t)(uVar6 + uVar4 * -0x800) * 4)
         = *(int32_t *)
            (*(int64_t *)(*param_1 + 8 + (uint64_t)uVar3 * 8) +
            (uint64_t)(uVar5 + uVar3 * -0x800) * 4);
  }
  lVar7 = *param_1;
  iStack_20 = (int)param_1[1];
  while (iVar2 = (int)param_4, param_2 < param_4) {
    param_4 = param_4 + -1 >> 1;
    uVar4 = (int)param_4 + iStack_20;
    uVar3 = uVar4 >> 0xb;
    uVar8 = (uint64_t)(uVar4 & 0x7ff);
    if (*(int *)(*(int64_t *)(lVar7 + 8 + (uint64_t)uVar3 * 8) + uVar8 * 4) <= *param_5) break;
    uVar5 = iVar2 + iStack_20;
    uVar4 = uVar5 >> 0xb;
    *(int32_t *)
     (*(int64_t *)(lVar7 + 8 + (uint64_t)uVar4 * 8) + (uint64_t)(uVar5 + uVar4 * -0x800) * 4) =
         *(int32_t *)(*(int64_t *)(lVar7 + 8 + (uint64_t)uVar3 * 8) + uVar8 * 4);
  }
  uVar4 = iVar2 + iStack_20;
  uVar3 = uVar4 >> 0xb;
  *(int *)(*(int64_t *)(lVar7 + 8 + (uint64_t)uVar3 * 8) + (uint64_t)(uVar4 + uVar3 * -0x800) * 4
          ) = *param_5;
  return;
}






// 函数: void FUN_1803a76d5(int64_t *param_1)
void FUN_1803a76d5(int64_t *param_1)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  uint64_t uVar8;
  int64_t in_R10;
  int64_t in_R11;
  int iStackX_8;
  int *in_stack_00000050;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  do {
    uVar6 = iVar2 + -1 + (int)unaff_RBX;
    uVar4 = uVar6 >> 0xb;
    uVar7 = (int)unaff_RBX + iVar2;
    uVar5 = uVar7 >> 0xb;
    lVar3 = unaff_RBX + -1;
    if (*(int *)(*(int64_t *)(lVar1 + 8 + (uint64_t)uVar5 * 8) +
                (uint64_t)(uVar7 + uVar5 * -0x800) * 4) <=
        *(int *)(*(int64_t *)(lVar1 + 8 + (uint64_t)uVar4 * 8) +
                (uint64_t)(uVar6 + uVar4 * -0x800) * 4)) {
      lVar3 = unaff_RBX;
    }
    uVar6 = iVar2 + (int)lVar3;
    unaff_RBX = lVar3 * 2 + 2;
    uVar4 = uVar6 >> 0xb;
    uVar7 = iVar2 + (int)in_R11;
    uVar5 = uVar7 >> 0xb;
    *(int32_t *)
     (*(int64_t *)(lVar1 + 8 + (uint64_t)uVar5 * 8) + (uint64_t)(uVar7 + uVar5 * -0x800) * 4) =
         *(int32_t *)
          (*(int64_t *)(lVar1 + 8 + (uint64_t)uVar4 * 8) + (uint64_t)(uVar6 + uVar4 * -0x800) * 4
          );
    in_R11 = lVar3;
  } while (unaff_RBX < in_R10);
  if (unaff_RBX == in_R10) {
    uVar6 = (int)unaff_RDI[1] + -1 + (int)unaff_RBX;
    uVar4 = uVar6 >> 0xb;
    uVar7 = (int)unaff_RDI[1] + (int)lVar3;
    lVar3 = lVar3 * 2 + 1;
    uVar5 = uVar7 >> 0xb;
    *(int32_t *)
     (*(int64_t *)(*unaff_RDI + 8 + (uint64_t)uVar5 * 8) + (uint64_t)(uVar7 + uVar5 * -0x800) * 4
     ) = *(int32_t *)
          (*(int64_t *)(*unaff_RDI + 8 + (uint64_t)uVar4 * 8) +
          (uint64_t)(uVar6 + uVar4 * -0x800) * 4);
  }
  lVar1 = *unaff_RDI;
  iStackX_8 = (int)unaff_RDI[1];
  while (iVar2 = (int)lVar3, unaff_RSI < lVar3) {
    lVar3 = lVar3 + -1 >> 1;
    uVar5 = (int)lVar3 + iStackX_8;
    uVar4 = uVar5 >> 0xb;
    uVar8 = (uint64_t)(uVar5 & 0x7ff);
    if (*(int *)(*(int64_t *)(lVar1 + 8 + (uint64_t)uVar4 * 8) + uVar8 * 4) <= *in_stack_00000050)
    break;
    uVar6 = iVar2 + iStackX_8;
    uVar5 = uVar6 >> 0xb;
    *(int32_t *)
     (*(int64_t *)(lVar1 + 8 + (uint64_t)uVar5 * 8) + (uint64_t)(uVar6 + uVar5 * -0x800) * 4) =
         *(int32_t *)(*(int64_t *)(lVar1 + 8 + (uint64_t)uVar4 * 8) + uVar8 * 4);
  }
  uVar5 = iVar2 + iStackX_8;
  uVar4 = uVar5 >> 0xb;
  *(int *)(*(int64_t *)(lVar1 + 8 + (uint64_t)uVar4 * 8) + (uint64_t)(uVar5 + uVar4 * -0x800) * 4
          ) = *in_stack_00000050;
  return;
}






// 函数: void FUN_1803a777d(void)
void FUN_1803a777d(void)

{
  int iVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  uint64_t uVar7;
  int64_t in_R10;
  int64_t in_R11;
  int iStackX_8;
  int *in_stack_00000050;
  
  if (unaff_RBX == in_R10) {
    uVar5 = (int)unaff_RDI[1] + -1 + (int)unaff_RBX;
    uVar3 = uVar5 >> 0xb;
    uVar6 = (int)unaff_RDI[1] + (int)in_R11;
    in_R11 = unaff_RBX + -1;
    uVar4 = uVar6 >> 0xb;
    *(int32_t *)
     (*(int64_t *)(*unaff_RDI + 8 + (uint64_t)uVar4 * 8) + (uint64_t)(uVar6 + uVar4 * -0x800) * 4
     ) = *(int32_t *)
          (*(int64_t *)(*unaff_RDI + 8 + (uint64_t)uVar3 * 8) +
          (uint64_t)(uVar5 + uVar3 * -0x800) * 4);
  }
  lVar2 = *unaff_RDI;
  iStackX_8 = (int)unaff_RDI[1];
  while (iVar1 = (int)in_R11, unaff_RSI < in_R11) {
    in_R11 = in_R11 + -1 >> 1;
    uVar4 = (int)in_R11 + iStackX_8;
    uVar3 = uVar4 >> 0xb;
    uVar7 = (uint64_t)(uVar4 & 0x7ff);
    if (*(int *)(*(int64_t *)(lVar2 + 8 + (uint64_t)uVar3 * 8) + uVar7 * 4) <= *in_stack_00000050)
    break;
    uVar5 = iVar1 + iStackX_8;
    uVar4 = uVar5 >> 0xb;
    *(int32_t *)
     (*(int64_t *)(lVar2 + 8 + (uint64_t)uVar4 * 8) + (uint64_t)(uVar5 + uVar4 * -0x800) * 4) =
         *(int32_t *)(*(int64_t *)(lVar2 + 8 + (uint64_t)uVar3 * 8) + uVar7 * 4);
  }
  uVar4 = iVar1 + iStackX_8;
  uVar3 = uVar4 >> 0xb;
  *(int *)(*(int64_t *)(lVar2 + 8 + (uint64_t)uVar3 * 8) + (uint64_t)(uVar4 + uVar3 * -0x800) * 4
          ) = *in_stack_00000050;
  return;
}



uint64_t *
FUN_1803a7870(uint64_t *param_1,uint64_t param_2,float param_3,float *param_4,float *param_5)

{
  uint64_t uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int8_t auVar5 [16];
  int8_t auVar6 [16];
  
  uVar4 = 0;
  LOCK();
  *(int32_t *)(param_1 + 6) = 0;
  UNLOCK();
  uVar2 = uVar4;
  do {
    param_1[(int64_t)(int)uVar2 + 7] = 0;
    LOCK();
    *(int8_t *)((int64_t)param_1 + (int64_t)(int)uVar2 + 0x238) = 1;
    UNLOCK();
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x40);
  LOCK();
  *(int32_t *)(param_1 + 0x4f) = 0;
  UNLOCK();
  do {
    param_1[(int64_t)(int)uVar4 + 0x50] = 0;
    LOCK();
    *(int8_t *)((int64_t)param_1 + (int64_t)(int)uVar4 + 0x480) = 1;
    UNLOCK();
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x40);
  *(int32_t *)(param_1 + 0x9c) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0x4e4) = 0x40000000;
  *(int32_t *)((int64_t)param_1 + 0x4ec) = 3;
  param_1[0x9a] = 1;
  param_1[0x99] = &system_data_0000;
  param_1[0x9b] = 0;
  *(int32_t *)(param_1 + 0x9d) = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(int32_t *)(param_1 + 0xa1) = 3;
  param_1[0xa6] = 0;
  param_1[0xa7] = _guard_check_icall;
  param_1[0xaa] = 0;
  param_1[0xab] = _guard_check_icall;
  *(float *)(param_1 + 0xa2) = param_3;
  param_3 = 1.0 / param_3;
  *(float *)((int64_t)param_1 + 0x514) = param_3;
  uVar1 = *(uint64_t *)(param_4 + 2);
  *param_1 = *(uint64_t *)param_4;
  param_1[1] = uVar1;
  uVar1 = *(uint64_t *)(param_5 + 2);
  param_1[2] = *(uint64_t *)param_5;
  param_1[3] = uVar1;
  auVar5._0_4_ = (*param_5 - *param_4) * param_3;
  iVar3 = (int)auVar5._0_4_;
  if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar5._0_4_)) {
    auVar5._4_4_ = auVar5._0_4_;
    auVar5._8_8_ = 0;
    uVar2 = movmskps((int)(param_1 + 0x9e),auVar5);
    auVar5._0_4_ = (float)(int)(iVar3 + (uVar2 & 1 ^ 1));
  }
  *(int *)(param_1 + 0xa3) = (int)auVar5._0_4_;
  auVar6._0_4_ = (param_5[1] - param_4[1]) * param_3;
  iVar3 = (int)auVar6._0_4_;
  if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar6._0_4_)) {
    auVar6._4_4_ = auVar6._0_4_;
    auVar6._8_8_ = 0;
    uVar2 = movmskps((int)auVar5._0_4_,auVar6);
    auVar6._0_4_ = (float)(int)(iVar3 + (uVar2 & 1 ^ 1));
  }
  *(int *)((int64_t)param_1 + 0x51c) = (int)auVar6._0_4_;
  param_1[4] = param_2;
  if ((code *)param_1[0xa6] != (code *)0x0) {
    (*(code *)param_1[0xa6])(param_1 + 0xa4,0,0,param_4,0xfffffffffffffffe);
  }
  param_1[0xa6] = 0;
  param_1[0xa7] = _guard_check_icall;
  if ((code *)param_1[0xaa] != (code *)0x0) {
    (*(code *)param_1[0xaa])(param_1 + 0xa8,0,0);
  }
  param_1[0xaa] = 0;
  param_1[0xab] = _guard_check_icall;
  return param_1;
}






// 函数: void FUN_1803a7a90(int64_t param_1)
void FUN_1803a7a90(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  FUN_1803a89f0();
  if ((1 < *(uint64_t *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemCore_DebugHandler();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1803a7ad0(int64_t param_1)
void FUN_1803a7ad0(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  FUN_1803a89f0();
  if ((1 < *(uint64_t *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemCore_DebugHandler();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




