#include "TaleWorlds.Native.Split.h"

// 99_part_06_part005.c - 5 个函数

// 函数: void FUN_1803a76b0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,int *param_5
void FUN_1803a76b0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,int *param_5
                  )

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
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
      if (*(int *)(*(longlong *)(lVar1 + 8 + (ulonglong)uVar4 * 8) +
                  (ulonglong)(uVar6 + uVar4 * -0x800) * 4) <=
          *(int *)(*(longlong *)(lVar1 + 8 + (ulonglong)uVar3 * 8) +
                  (ulonglong)(uVar5 + uVar3 * -0x800) * 4)) {
        param_4 = lVar7;
      }
      uVar5 = iVar2 + (int)param_4;
      lVar7 = param_4 * 2 + 2;
      uVar3 = uVar5 >> 0xb;
      uVar6 = iVar2 + (int)lVar9;
      uVar4 = uVar6 >> 0xb;
      *(undefined4 *)
       (*(longlong *)(lVar1 + 8 + (ulonglong)uVar4 * 8) + (ulonglong)(uVar6 + uVar4 * -0x800) * 4) =
           *(undefined4 *)
            (*(longlong *)(lVar1 + 8 + (ulonglong)uVar3 * 8) +
            (ulonglong)(uVar5 + uVar3 * -0x800) * 4);
      lVar9 = param_4;
    } while (lVar7 < param_3);
  }
  if (lVar7 == param_3) {
    uVar5 = (int)param_1[1] + -1 + (int)lVar7;
    uVar3 = uVar5 >> 0xb;
    uVar6 = (int)param_1[1] + (int)param_4;
    param_4 = lVar7 + -1;
    uVar4 = uVar6 >> 0xb;
    *(undefined4 *)
     (*(longlong *)(*param_1 + 8 + (ulonglong)uVar4 * 8) + (ulonglong)(uVar6 + uVar4 * -0x800) * 4)
         = *(undefined4 *)
            (*(longlong *)(*param_1 + 8 + (ulonglong)uVar3 * 8) +
            (ulonglong)(uVar5 + uVar3 * -0x800) * 4);
  }
  lVar7 = *param_1;
  iStack_20 = (int)param_1[1];
  while (iVar2 = (int)param_4, param_2 < param_4) {
    param_4 = param_4 + -1 >> 1;
    uVar4 = (int)param_4 + iStack_20;
    uVar3 = uVar4 >> 0xb;
    uVar8 = (ulonglong)(uVar4 & 0x7ff);
    if (*(int *)(*(longlong *)(lVar7 + 8 + (ulonglong)uVar3 * 8) + uVar8 * 4) <= *param_5) break;
    uVar5 = iVar2 + iStack_20;
    uVar4 = uVar5 >> 0xb;
    *(undefined4 *)
     (*(longlong *)(lVar7 + 8 + (ulonglong)uVar4 * 8) + (ulonglong)(uVar5 + uVar4 * -0x800) * 4) =
         *(undefined4 *)(*(longlong *)(lVar7 + 8 + (ulonglong)uVar3 * 8) + uVar8 * 4);
  }
  uVar4 = iVar2 + iStack_20;
  uVar3 = uVar4 >> 0xb;
  *(int *)(*(longlong *)(lVar7 + 8 + (ulonglong)uVar3 * 8) + (ulonglong)(uVar4 + uVar3 * -0x800) * 4
          ) = *param_5;
  return;
}






// 函数: void FUN_1803a76d5(longlong *param_1)
void FUN_1803a76d5(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar8;
  longlong in_R10;
  longlong in_R11;
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
    if (*(int *)(*(longlong *)(lVar1 + 8 + (ulonglong)uVar5 * 8) +
                (ulonglong)(uVar7 + uVar5 * -0x800) * 4) <=
        *(int *)(*(longlong *)(lVar1 + 8 + (ulonglong)uVar4 * 8) +
                (ulonglong)(uVar6 + uVar4 * -0x800) * 4)) {
      lVar3 = unaff_RBX;
    }
    uVar6 = iVar2 + (int)lVar3;
    unaff_RBX = lVar3 * 2 + 2;
    uVar4 = uVar6 >> 0xb;
    uVar7 = iVar2 + (int)in_R11;
    uVar5 = uVar7 >> 0xb;
    *(undefined4 *)
     (*(longlong *)(lVar1 + 8 + (ulonglong)uVar5 * 8) + (ulonglong)(uVar7 + uVar5 * -0x800) * 4) =
         *(undefined4 *)
          (*(longlong *)(lVar1 + 8 + (ulonglong)uVar4 * 8) + (ulonglong)(uVar6 + uVar4 * -0x800) * 4
          );
    in_R11 = lVar3;
  } while (unaff_RBX < in_R10);
  if (unaff_RBX == in_R10) {
    uVar6 = (int)unaff_RDI[1] + -1 + (int)unaff_RBX;
    uVar4 = uVar6 >> 0xb;
    uVar7 = (int)unaff_RDI[1] + (int)lVar3;
    lVar3 = lVar3 * 2 + 1;
    uVar5 = uVar7 >> 0xb;
    *(undefined4 *)
     (*(longlong *)(*unaff_RDI + 8 + (ulonglong)uVar5 * 8) + (ulonglong)(uVar7 + uVar5 * -0x800) * 4
     ) = *(undefined4 *)
          (*(longlong *)(*unaff_RDI + 8 + (ulonglong)uVar4 * 8) +
          (ulonglong)(uVar6 + uVar4 * -0x800) * 4);
  }
  lVar1 = *unaff_RDI;
  iStackX_8 = (int)unaff_RDI[1];
  while (iVar2 = (int)lVar3, unaff_RSI < lVar3) {
    lVar3 = lVar3 + -1 >> 1;
    uVar5 = (int)lVar3 + iStackX_8;
    uVar4 = uVar5 >> 0xb;
    uVar8 = (ulonglong)(uVar5 & 0x7ff);
    if (*(int *)(*(longlong *)(lVar1 + 8 + (ulonglong)uVar4 * 8) + uVar8 * 4) <= *in_stack_00000050)
    break;
    uVar6 = iVar2 + iStackX_8;
    uVar5 = uVar6 >> 0xb;
    *(undefined4 *)
     (*(longlong *)(lVar1 + 8 + (ulonglong)uVar5 * 8) + (ulonglong)(uVar6 + uVar5 * -0x800) * 4) =
         *(undefined4 *)(*(longlong *)(lVar1 + 8 + (ulonglong)uVar4 * 8) + uVar8 * 4);
  }
  uVar5 = iVar2 + iStackX_8;
  uVar4 = uVar5 >> 0xb;
  *(int *)(*(longlong *)(lVar1 + 8 + (ulonglong)uVar4 * 8) + (ulonglong)(uVar5 + uVar4 * -0x800) * 4
          ) = *in_stack_00000050;
  return;
}






// 函数: void FUN_1803a777d(void)
void FUN_1803a777d(void)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar7;
  longlong in_R10;
  longlong in_R11;
  int iStackX_8;
  int *in_stack_00000050;
  
  if (unaff_RBX == in_R10) {
    uVar5 = (int)unaff_RDI[1] + -1 + (int)unaff_RBX;
    uVar3 = uVar5 >> 0xb;
    uVar6 = (int)unaff_RDI[1] + (int)in_R11;
    in_R11 = unaff_RBX + -1;
    uVar4 = uVar6 >> 0xb;
    *(undefined4 *)
     (*(longlong *)(*unaff_RDI + 8 + (ulonglong)uVar4 * 8) + (ulonglong)(uVar6 + uVar4 * -0x800) * 4
     ) = *(undefined4 *)
          (*(longlong *)(*unaff_RDI + 8 + (ulonglong)uVar3 * 8) +
          (ulonglong)(uVar5 + uVar3 * -0x800) * 4);
  }
  lVar2 = *unaff_RDI;
  iStackX_8 = (int)unaff_RDI[1];
  while (iVar1 = (int)in_R11, unaff_RSI < in_R11) {
    in_R11 = in_R11 + -1 >> 1;
    uVar4 = (int)in_R11 + iStackX_8;
    uVar3 = uVar4 >> 0xb;
    uVar7 = (ulonglong)(uVar4 & 0x7ff);
    if (*(int *)(*(longlong *)(lVar2 + 8 + (ulonglong)uVar3 * 8) + uVar7 * 4) <= *in_stack_00000050)
    break;
    uVar5 = iVar1 + iStackX_8;
    uVar4 = uVar5 >> 0xb;
    *(undefined4 *)
     (*(longlong *)(lVar2 + 8 + (ulonglong)uVar4 * 8) + (ulonglong)(uVar5 + uVar4 * -0x800) * 4) =
         *(undefined4 *)(*(longlong *)(lVar2 + 8 + (ulonglong)uVar3 * 8) + uVar7 * 4);
  }
  uVar4 = iVar1 + iStackX_8;
  uVar3 = uVar4 >> 0xb;
  *(int *)(*(longlong *)(lVar2 + 8 + (ulonglong)uVar3 * 8) + (ulonglong)(uVar4 + uVar3 * -0x800) * 4
          ) = *in_stack_00000050;
  return;
}



undefined8 *
FUN_1803a7870(undefined8 *param_1,undefined8 param_2,float param_3,float *param_4,float *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar4 = 0;
  LOCK();
  *(undefined4 *)(param_1 + 6) = 0;
  UNLOCK();
  uVar2 = uVar4;
  do {
    param_1[(longlong)(int)uVar2 + 7] = 0;
    LOCK();
    *(undefined1 *)((longlong)param_1 + (longlong)(int)uVar2 + 0x238) = 1;
    UNLOCK();
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x40);
  LOCK();
  *(undefined4 *)(param_1 + 0x4f) = 0;
  UNLOCK();
  do {
    param_1[(longlong)(int)uVar4 + 0x50] = 0;
    LOCK();
    *(undefined1 *)((longlong)param_1 + (longlong)(int)uVar4 + 0x480) = 1;
    UNLOCK();
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x40);
  *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x4e4) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x4ec) = 3;
  param_1[0x9a] = 1;
  param_1[0x99] = &DAT_180be0000;
  param_1[0x9b] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 3;
  param_1[0xa6] = 0;
  param_1[0xa7] = _guard_check_icall;
  param_1[0xaa] = 0;
  param_1[0xab] = _guard_check_icall;
  *(float *)(param_1 + 0xa2) = param_3;
  param_3 = 1.0 / param_3;
  *(float *)((longlong)param_1 + 0x514) = param_3;
  uVar1 = *(undefined8 *)(param_4 + 2);
  *param_1 = *(undefined8 *)param_4;
  param_1[1] = uVar1;
  uVar1 = *(undefined8 *)(param_5 + 2);
  param_1[2] = *(undefined8 *)param_5;
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
  *(int *)((longlong)param_1 + 0x51c) = (int)auVar6._0_4_;
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






// 函数: void FUN_1803a7a90(longlong param_1)
void FUN_1803a7a90(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_1803a89f0();
  if ((1 < *(ulonglong *)(param_1 + 0x10)) &&
     (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 != (undefined8 *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
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






// 函数: void FUN_1803a7ad0(longlong param_1)
void FUN_1803a7ad0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_1803a89f0();
  if ((1 < *(ulonglong *)(param_1 + 0x10)) &&
     (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 != (undefined8 *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
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




