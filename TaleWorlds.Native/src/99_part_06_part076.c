#include "TaleWorlds.Native.Split.h"

// 99_part_06_part076.c - 30 个函数

// 函数: void FUN_1803f2e80(undefined8 *param_1)
void FUN_1803f2e80(undefined8 *param_1)

{
  FUN_1803f33b0();
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(*param_1,0x40);
  return;
}



undefined4 *
FUN_1803f2eb0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  uVar1 = FUN_1803f4cb0(param_1,0,0,param_4,0xfffffffffffffffe);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *param_1 = 0x3f800000;
  FUN_1803f3480(param_1,8);
  return param_1;
}






// 函数: void FUN_1803f2f30(longlong param_1)
void FUN_1803f2f30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}






// 函数: void FUN_1803f2f3f(void)
void FUN_1803f2f3f(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *unaff_RBX;
  
  LOCK();
  plVar1 = unaff_RBX + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)*unaff_RBX)();
    LOCK();
    piVar2 = (int *)((longlong)unaff_RBX + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*unaff_RBX + 8))();
    }
  }
  return;
}






// 函数: void FUN_1803f2f75(void)
void FUN_1803f2f75(void)

{
  return;
}






// 函数: void FUN_1803f2f80(char *param_1)
void FUN_1803f2f80(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_180067070(param_1 + 8);
  }
  return;
}






// 函数: void FUN_1803f2fb0(char *param_1)
void FUN_1803f2fb0(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_180067070(param_1 + 0x10);
  }
  return;
}






// 函数: void FUN_1803f2fe0(void)
void FUN_1803f2fe0(void)

{
  FUN_1803f32c0();
  return;
}



longlong * FUN_1803f3000(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  cVar2 = FUN_1803f3350(param_1,param_2[1] - *param_2 >> 5);
  if (cVar2 != '\0') {
    lVar3 = *param_1;
    lVar1 = param_2[1];
    for (lVar4 = *param_2; lVar5 = lVar3, lVar4 != lVar1; lVar4 = lVar4 + 0x20) {
      FUN_18018b350(lVar3,lVar4,param_3,param_4,lVar4);
      lVar3 = lVar3 + 0x20;
    }
    for (; lVar5 != lVar3; lVar5 = lVar5 + 0x20) {
      FUN_180067070(lVar5);
    }
    param_1[1] = lVar3;
  }
  return param_1;
}






// 函数: void FUN_1803f30e0(longlong *param_1,int param_2)
void FUN_1803f30e0(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined *puVar6;
  
  lVar3 = (longlong)param_2 * 0x118 + *param_1;
  uVar2 = param_1[1];
  uVar1 = lVar3 + 0x118;
  if ((uVar1 < uVar2) && (lVar5 = (longlong)(uVar2 - uVar1) / 0x118, 0 < lVar5)) {
    puVar4 = (undefined8 *)(lVar3 + 0x120);
    do {
      *(undefined4 *)(puVar4 + -0x22) = *(undefined4 *)(puVar4 + 1);
      puVar6 = &DAT_18098bc73;
      if ((undefined *)*puVar4 != (undefined *)0x0) {
        puVar6 = (undefined *)*puVar4;
      }
      strcpy_s(puVar4[-0x23],0x100,puVar6);
      lVar5 = lVar5 + -1;
      puVar4 = puVar4 + 0x23;
    } while (0 < lVar5);
    uVar2 = param_1[1];
  }
  puVar4 = (undefined8 *)(uVar2 - 0x118);
  param_1[1] = (longlong)puVar4;
                    // WARNING: Could not recover jumptable at 0x0001803f319e. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)*puVar4)(puVar4,0);
  return;
}






// 函数: void FUN_1803f310a(longlong param_1)
void FUN_1803f310a(longlong param_1)

{
  longlong in_RAX;
  longlong unaff_RBX;
  undefined8 *puVar1;
  longlong unaff_RSI;
  longlong lVar2;
  undefined *puVar3;
  
  lVar2 = (param_1 - in_RAX) / 0x118;
  if (0 < lVar2) {
    puVar1 = (undefined8 *)(unaff_RBX + 0x120);
    do {
      *(undefined4 *)(puVar1 + -0x22) = *(undefined4 *)(puVar1 + 1);
      puVar3 = &DAT_18098bc73;
      if ((undefined *)*puVar1 != (undefined *)0x0) {
        puVar3 = (undefined *)*puVar1;
      }
      strcpy_s(puVar1[-0x23],0x100,puVar3);
      lVar2 = lVar2 + -1;
      puVar1 = puVar1 + 0x23;
    } while (0 < lVar2);
    param_1 = *(longlong *)(unaff_RSI + 8);
  }
  puVar1 = (undefined8 *)(param_1 + -0x118);
  *(undefined8 **)(unaff_RSI + 8) = puVar1;
                    // WARNING: Could not recover jumptable at 0x0001803f319e. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)*puVar1)(puVar1,0);
  return;
}






// 函数: void FUN_1803f3184(longlong param_1)
void FUN_1803f3184(longlong param_1)

{
  undefined8 *puVar1;
  longlong unaff_RSI;
  
  puVar1 = (undefined8 *)(param_1 + -0x118);
  *(undefined8 **)(unaff_RSI + 8) = puVar1;
                    // WARNING: Could not recover jumptable at 0x0001803f319e. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)*puVar1)(puVar1,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f31b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1803f31b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  undefined1 auStack_158 [32];
  undefined8 uStack_138;
  undefined8 *puStack_130;
  char acStack_128 [256];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar3 = (ulonglong *)func_0x00018004b9a0();
  uStack_138 = 0;
  puStack_130 = &uStackX_18;
  __stdio_common_vsprintf(*puVar3 | 1,acStack_128,0x100,param_2);
  lVar1 = -1;
  do {
    lVar4 = lVar1;
    lVar1 = lVar4 + 1;
  } while (acStack_128[lVar4 + 1] != '\0');
  iVar2 = (int)(lVar4 + 1);
  if ((0 < iVar2) && (*(uint *)(param_1 + 0x10) + iVar2 < 0xff)) {
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8),acStack_128,
           (longlong)((int)lVar4 + 2));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_158);
}






// 函数: void FUN_1803f3270(undefined8 *param_1)
void FUN_1803f3270(undefined8 *param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(*param_1,0x40);
  return;
}






// 函数: void FUN_1803f32a0(undefined8 *param_1)
void FUN_1803f32a0(undefined8 *param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(*param_1,0x40);
  return;
}






// 函数: void FUN_1803f32c0(longlong *param_1)
void FUN_1803f32c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    if (lVar1 != lVar2) {
      do {
        FUN_180067070(lVar1);
        lVar1 = lVar1 + 0x20;
      } while (lVar1 != lVar2);
      lVar1 = *param_1;
    }
    lVar2 = lVar1;
    if ((0xfff < (param_1[2] - lVar1 & 0xffffffffffffffe0U)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}






// 函数: void FUN_1803f32d5(longlong param_1)
void FUN_1803f32d5(longlong param_1)

{
  longlong unaff_RBX;
  longlong lVar1;
  longlong *unaff_RDI;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (unaff_RBX != lVar1) {
    do {
      FUN_180067070(unaff_RBX);
      unaff_RBX = unaff_RBX + 0x20;
    } while (unaff_RBX != lVar1);
    unaff_RBX = *unaff_RDI;
  }
  lVar1 = unaff_RBX;
  if ((0xfff < (unaff_RDI[2] - unaff_RBX & 0xffffffffffffffe0U)) &&
     (lVar1 = *(longlong *)(unaff_RBX + -8), 0x1f < (unaff_RBX - lVar1) - 8U)) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  free(lVar1);
  *unaff_RDI = 0;
  unaff_RDI[1] = 0;
  unaff_RDI[2] = 0;
  return;
}






// 函数: void FUN_1803f3310(undefined8 param_1,longlong param_2)
void FUN_1803f3310(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBX;
  undefined8 *unaff_RDI;
  
  if ((unaff_RBX - *(longlong *)(unaff_RBX + -8)) - 8U < 0x20) {
    free(*(longlong *)(unaff_RBX + -8));
    *unaff_RDI = 0;
    unaff_RDI[1] = 0;
    unaff_RDI[2] = 0;
    return;
  }
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn(param_1,param_2 + 0x27);
}



undefined8 FUN_1803f3350(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0x7ffffffffffffff < param_2) {
      FUN_180189990();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    lVar2 = FUN_180067110(param_2 * 0x20);
    *param_1 = lVar2;
    param_1[1] = lVar2;
    lVar2 = lVar2 + param_2 * 0x20;
    param_1[2] = lVar2;
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar3;
}






// 函数: void FUN_1803f33b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1803f33b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  plVar4 = (longlong *)*param_1;
  plVar7 = (longlong *)*plVar4;
  *plVar4 = (longlong)plVar4;
  *(longlong *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  if (plVar7 != (longlong *)*param_1) {
    do {
      plVar4 = (longlong *)*plVar7;
      plVar5 = (longlong *)plVar7[7];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
      FUN_180067070(plVar7 + 2);
      free(plVar7,0x40,param_3,param_4,uVar8);
      plVar7 = plVar4;
    } while (plVar4 != (longlong *)*param_1);
  }
  return;
}






// 函数: void FUN_1803f3480(longlong param_1,longlong param_2)
void FUN_1803f3480(longlong param_1,longlong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined8 uStackX_8;
  
  uVar2 = param_2 * 2;
  if ((ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x18) >> 3) < uVar2) {
    if (0x1fffffffffffffff < uVar2) {
      FUN_180189990();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_1803f3720(param_1 + 0x18,uVar2);
  }
  uStackX_8 = *(undefined8 *)(param_1 + 8);
  FUN_1803f3510(param_1 + 0x18,uVar2,&uStackX_8);
  *(longlong *)(param_1 + 0x30) = param_2 + -1;
  *(longlong *)(param_1 + 0x38) = param_2;
  return;
}






// 函数: void FUN_1803f3510(longlong *param_1,ulonglong param_2,undefined8 *param_3)
void FUN_1803f3510(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = *param_1;
  uVar6 = param_1[1] - lVar5 >> 3;
  uVar4 = param_1[2] - lVar5 >> 3;
  if (uVar4 < param_2) {
    if (0x1fffffffffffffff < param_2) {
FUN_1803f3688:
      FUN_180189990();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar6 = param_2;
    if ((uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) &&
       (uVar6 = (uVar4 >> 1) + uVar4, uVar6 < param_2)) {
      uVar6 = param_2;
    }
    if (lVar5 != 0) {
      lVar3 = lVar5;
      if ((0xfff < uVar4 * 8) && (lVar3 = *(longlong *)(lVar5 + -8), 0x1f < (lVar5 - lVar3) - 8U)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      free(lVar3);
    }
    puVar2 = (undefined8 *)0x0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (uVar6 != 0) {
      if (0x1fffffffffffffff < uVar6) goto FUN_1803f3688;
      puVar2 = (undefined8 *)FUN_180067110(uVar6 * 8);
      *param_1 = (longlong)puVar2;
      param_1[1] = (longlong)puVar2;
      param_1[2] = (longlong)(puVar2 + uVar6);
    }
    if (param_2 != 0) {
      do {
        *puVar2 = *param_3;
        puVar2 = puVar2 + 1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    param_1[1] = (longlong)puVar2;
  }
  else if (uVar6 < param_2) {
    FUN_1803f4430(lVar5,param_1[1]);
    puVar2 = (undefined8 *)param_1[1];
    for (lVar5 = param_2 - uVar6; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar2 = *param_3;
      puVar2 = puVar2 + 1;
    }
    param_1[1] = (longlong)puVar2;
  }
  else {
    lVar3 = lVar5 + param_2 * 8;
    FUN_1803f4430(lVar5,lVar3);
    param_1[1] = lVar3;
  }
  return;
}






// 函数: void FUN_1803f3553(longlong param_1,ulonglong param_2)
void FUN_1803f3553(longlong param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong unaff_RBX;
  undefined8 *unaff_RSI;
  ulonglong uVar4;
  undefined8 *unaff_R14;
  
  if (0x1fffffffffffffff < unaff_RBX) {
FUN_1803f3688:
    FUN_180189990();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar4 = unaff_RBX;
  if ((param_2 <= 0x1fffffffffffffff - (param_2 >> 1)) &&
     (uVar4 = (param_2 >> 1) + param_2, uVar4 < unaff_RBX)) {
    uVar4 = unaff_RBX;
  }
  if (param_1 != 0) {
    lVar3 = param_1;
    if ((0xfff < param_2 * 8) &&
       (lVar3 = *(longlong *)(param_1 + -8), 0x1f < (param_1 - lVar3) - 8U)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(lVar3);
  }
  puVar2 = (undefined8 *)0x0;
  *unaff_R14 = 0;
  unaff_R14[1] = 0;
  unaff_R14[2] = 0;
  if (uVar4 != 0) {
    if (0x1fffffffffffffff < uVar4) goto FUN_1803f3688;
    puVar2 = (undefined8 *)FUN_180067110(uVar4 * 8);
    *unaff_R14 = puVar2;
    unaff_R14[1] = puVar2;
    unaff_R14[2] = puVar2 + uVar4;
  }
  if (unaff_RBX != 0) {
    do {
      *puVar2 = *unaff_RSI;
      puVar2 = puVar2 + 1;
      unaff_RBX = unaff_RBX - 1;
    } while (unaff_RBX != 0);
  }
  unaff_R14[1] = puVar2;
  return;
}






// 函数: void FUN_1803f3629(void)
void FUN_1803f3629(void)

{
  return;
}






// 函数: void FUN_1803f363f(void)
void FUN_1803f363f(void)

{
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}






// 函数: void FUN_1803f3646(longlong param_1,undefined8 param_2,undefined8 *param_3)
void FUN_1803f3646(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulonglong unaff_RBX;
  longlong lVar2;
  ulonglong unaff_RDI;
  longlong unaff_R14;
  
  if (unaff_RDI < unaff_RBX) {
    FUN_1803f4430();
    puVar1 = *(undefined8 **)(unaff_R14 + 8);
    for (lVar2 = unaff_RBX - unaff_RDI; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar1 = *param_3;
      puVar1 = puVar1 + 1;
    }
    *(undefined8 **)(unaff_R14 + 8) = puVar1;
  }
  else {
    lVar2 = param_1 + unaff_RBX * 8;
    FUN_1803f4430(param_1,lVar2);
    *(longlong *)(unaff_R14 + 8) = lVar2;
  }
  return;
}






// 函数: void FUN_1803f3688(void)
void FUN_1803f3688(void)

{
  code *pcVar1;
  
  FUN_180189990();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}






// 函数: void FUN_1803f3690(undefined8 param_1,longlong param_2)
void FUN_1803f3690(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_2 + 0x38);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  FUN_180067070(param_2 + 0x10);
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(param_2,0x40);
  return;
}






// 函数: void FUN_1803f3720(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)
void FUN_1803f3720(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  lVar1 = param_1[1];
  lVar2 = *param_1;
  lVar5 = param_2 * 8;
  if (0x1fffffffffffffff < param_2) {
    lVar5 = -1;
  }
  puVar4 = (undefined8 *)FUN_180067110(lVar5);
  puVar3 = (undefined8 *)param_1[1];
  puVar8 = puVar4;
  for (puVar6 = (undefined8 *)*param_1; puVar6 != puVar3; puVar6 = puVar6 + 1) {
    *puVar8 = *puVar6;
    puVar8 = puVar8 + 1;
  }
  lVar5 = *param_1;
  if (lVar5 != 0) {
    uVar9 = param_1[2] - lVar5 & 0xfffffffffffffff8;
    lVar7 = lVar5;
    if (0xfff < uVar9) {
      lVar7 = *(longlong *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar7) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar5 - lVar7,uVar9 + 0x27,lVar7,param_4,puVar6,uVar10);
      }
    }
    free(lVar7);
  }
  *param_1 = (longlong)puVar4;
  param_1[1] = (longlong)(puVar4 + (lVar1 - lVar2 >> 3));
  param_1[2] = (longlong)(puVar4 + param_2);
  return;
}






// 函数: void FUN_1803f3810(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1803f3810(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)param_1[1];
  for (puVar2 = (undefined8 *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 0x23) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f3880(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1803f3880(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar6 = param_1[1];
  if (uVar6 < param_1[2]) {
    param_1[1] = uVar6 + 0x118;
    FUN_180068ff0(uVar6);
    return;
  }
  uVar8 = *param_1;
  lVar10 = (longlong)(uVar6 - uVar8) / 0x118;
  puVar3 = (undefined8 *)0x0;
  if (lVar10 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 == 0) goto LAB_1803f392d;
  }
  puVar3 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,lVar10 * 0x118,(char)param_1[3],param_4,0xfffffffffffffffe);
  uVar6 = param_1[1];
  uVar8 = *param_1;
LAB_1803f392d:
  puVar4 = puVar3;
  if (uVar8 != uVar6) {
    lVar9 = uVar8 - (longlong)puVar3;
    do {
      *puVar4 = &UNK_18098bcb0;
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = 0;
      *puVar4 = &UNK_1809feda8;
      puVar4[1] = puVar4 + 3;
      *(undefined4 *)(puVar4 + 2) = 0;
      *(undefined1 *)(puVar4 + 3) = 0;
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(lVar9 + 0x10 + (longlong)puVar4);
      puVar1 = *(undefined **)(lVar9 + 8 + (longlong)puVar4);
      puVar7 = &DAT_18098bc73;
      if (puVar1 != (undefined *)0x0) {
        puVar7 = puVar1;
      }
      strcpy_s(puVar4[1],0x100,puVar7);
      puVar4 = puVar4 + 0x23;
    } while (lVar9 + (longlong)puVar4 != uVar6);
  }
  FUN_180068ff0(puVar4,param_2);
  puVar2 = (undefined8 *)param_1[1];
  puVar5 = (undefined8 *)*param_1;
  if (puVar5 != puVar2) {
    do {
      (**(code **)*puVar5)(puVar5,0);
      puVar5 = puVar5 + 0x23;
    } while (puVar5 != puVar2);
    puVar5 = (undefined8 *)*param_1;
  }
  if (puVar5 == (undefined8 *)0x0) {
    *param_1 = (ulonglong)puVar3;
    param_1[1] = (ulonglong)(puVar4 + 0x23);
    param_1[2] = (ulonglong)(puVar3 + lVar10 * 0x23);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}



undefined8 * FUN_1803f3a40(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(param_3 + lVar3) != '\0');
  puVar2 = (undefined8 *)FUN_1803f5400(param_2,param_3,lVar3,param_2,0,0xfffffffffffffffe);
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  uVar1 = puVar2[3];
  param_1[2] = puVar2[2];
  param_1[3] = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0xf;
  *(undefined1 *)puVar2 = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f3ac0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)
void FUN_1803f3ac0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined4 *puStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  ulonglong uStack_28;
  
  uStack_78 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  uStack_70 = param_1;
  puStack_68 = param_3;
  puStack_30 = param_2;
  FUN_1803f2eb0();
  puStack_60 = &uStack_88;
  uStack_88 = *param_3;
  uStack_80 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  puStack_58 = &uStack_50;
  uStack_50 = *param_2;
  uStack_4c = param_2[1];
  uStack_48 = param_2[2];
  uStack_44 = param_2[3];
  uStack_40 = param_2[4];
  uStack_3c = param_2[5];
  uStack_38 = param_2[6];
  uStack_34 = param_2[7];
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0xf;
  *(undefined1 *)param_2 = 0;
  FUN_1804726c0(param_1,&uStack_50,&uStack_88);
  FUN_180067070(param_2);
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f3bc0(undefined8 param_1,ulonglong *param_2,undefined8 *param_3,undefined8 param_4,
void FUN_1803f3bc0(undefined8 param_1,ulonglong *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_138 [32];
  undefined8 uStack_118;
  longlong *plStack_110;
  undefined4 *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong *puStack_40;
  ulonglong uStack_38;
  
  uStack_a8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  uStack_98 = param_1;
  puStack_88 = param_3;
  puStack_40 = param_2;
  FUN_1803f2eb0();
  uStack_d8 = *param_3;
  uStack_d0 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  puStack_80 = &uStack_118;
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  puStack_78 = &uStack_f8;
  puStack_100 = &uStack_d8;
  uStack_118 = 0;
  plStack_110 = (longlong *)0x0;
  puStack_108 = &uStack_60;
  uStack_f8._0_4_ = (undefined4)uVar5;
  uStack_f8._4_4_ = (undefined4)(uVar5 >> 0x20);
  uStack_f0._0_4_ = (undefined4)uVar6;
  uStack_f0._4_4_ = (undefined4)(uVar6 >> 0x20);
  uStack_60 = (undefined4)uStack_f8;
  uStack_5c = uStack_f8._4_4_;
  uStack_58 = (undefined4)uStack_f0;
  uStack_54 = uStack_f0._4_4_;
  uStack_e8._0_4_ = (undefined4)uVar7;
  uStack_e8._4_4_ = (undefined4)(uVar7 >> 0x20);
  uStack_e0._0_4_ = (undefined4)uVar8;
  uStack_e0._4_4_ = (undefined4)(uVar8 >> 0x20);
  uStack_50 = (undefined4)uStack_e8;
  uStack_4c = uStack_e8._4_4_;
  uStack_48 = (undefined4)uStack_e0;
  uStack_44 = uStack_e0._4_4_;
  uStack_e8 = 0;
  uStack_e0 = 0xf;
  uStack_f8 = uVar5 & 0xffffffffffffff00;
  uStack_f0 = uVar6;
  FUN_1804726c0(param_1,&uStack_60,&uStack_d8);
  puStack_100 = (undefined8 *)auStack_70;
  uVar10 = FUN_1804721d0(auStack_70,*param_5);
  puStack_108 = (undefined4 *)auStack_c8;
  uStack_b8 = 0;
  uStack_b0 = 0xf;
  auStack_c8[0] = 0;
  FUN_1800671b0(auStack_c8,&UNK_180a25900,0x19);
  FUN_1804726c0(param_1,auStack_c8,uVar10);
  FUN_180067070(&uStack_f8);
  plVar4 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_110 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  FUN_180067070(param_2);
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




