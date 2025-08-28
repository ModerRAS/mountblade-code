#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part205.c - 26 个函数

// 函数: void FUN_180187bd0(longlong *param_1)
void FUN_180187bd0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}





// 函数: void FUN_180187c00(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180187c00(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    if (lVar2 != lVar3) {
      do {
        FUN_180067070(lVar2);
        lVar2 = lVar2 + 0x28;
      } while (lVar2 != lVar3);
      lVar2 = *param_1;
    }
    uVar1 = ((param_1[2] - lVar2) / 0x28) * 0x28;
    lVar3 = lVar2;
    if (0xfff < uVar1) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(param_1[2] - lVar2,uVar1 + 0x27,param_3,param_4,uVar4);
      }
    }
    free(lVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}





// 函数: void FUN_180187cd0(longlong *param_1)
void FUN_180187cd0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    if (lVar1 != lVar2) {
      do {
        FUN_180187950(lVar1);
        lVar1 = lVar1 + 0x40;
      } while (lVar1 != lVar2);
      lVar1 = *param_1;
    }
    lVar2 = lVar1;
    if ((0xfff < (param_1[2] - lVar1 & 0xffffffffffffffc0U)) &&
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





// 函数: void FUN_180187d70(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180187d70(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1801884d0(param_1,*(uint64_t *)(lVar1 + 8),param_3,param_4,0xfffffffffffffffe);
  *(longlong *)(*param_1 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(*param_1,0x60);
  return;
}





// 函数: void FUN_180187dd0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180187dd0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff8;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (lVar1 - lVar2,uVar3 + 0x27,lVar2,param_4,0xfffffffffffffffe);
      }
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}





// 函数: void FUN_180187e50(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180187e50(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  plVar4 = *(longlong **)(lVar1 + 8);
  lVar3 = lVar1;
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    do {
      FUN_1801885a0(param_1,plVar4[2],param_3,param_4,uVar5);
      plVar2 = (longlong *)*plVar4;
      free(plVar4,0x28);
      plVar4 = plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(*param_1,0x28);
  return;
}



uint64_t * FUN_180187f00(longlong *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong alStackX_18 [2];
  
  puVar1 = (uint64_t *)*param_1;
  puVar8 = puVar1;
  if (*(char *)((longlong)puVar1[1] + 0x19) == '\0') {
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    puVar9 = (uint64_t *)puVar1[1];
    do {
      plVar6 = puVar9 + 4;
      puVar7 = param_2;
      if (0xf < uVar3) {
        puVar7 = (uint64_t *)*param_2;
      }
      uVar11 = puVar9[6];
      if (0xf < (ulonglong)puVar9[7]) {
        plVar6 = (longlong *)*plVar6;
      }
      uVar10 = uVar11;
      if (uVar2 < uVar11) {
        uVar10 = uVar2;
      }
      iVar4 = memcmp(plVar6,puVar7,uVar10);
      if (iVar4 == 0) {
        if (uVar11 < uVar2) goto LAB_180188024;
LAB_180187f7e:
        puVar7 = (uint64_t *)*puVar9;
        puVar8 = puVar9;
      }
      else {
        if (-1 < iVar4) goto LAB_180187f7e;
LAB_180188024:
        puVar7 = (uint64_t *)puVar9[2];
      }
      puVar9 = puVar7;
    } while (*(char *)((longlong)puVar7 + 0x19) == '\0');
  }
  if (puVar8 != puVar1) {
    plVar6 = puVar8 + 4;
    uVar2 = puVar8[6];
    if (0xf < (ulonglong)puVar8[7]) {
      plVar6 = (longlong *)*plVar6;
    }
    uVar3 = param_2[2];
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (uint64_t *)*param_2;
    }
    uVar11 = uVar3;
    if (uVar2 < uVar3) {
      uVar11 = uVar2;
    }
    iVar4 = memcmp(param_2,plVar6,uVar11);
    if (iVar4 == 0) {
      if (uVar2 <= uVar3) {
LAB_18018802f:
        return puVar8 + 8;
      }
    }
    else if (-1 < iVar4) goto LAB_18018802f;
  }
  lVar5 = FUN_18018a130(param_1);
  FUN_18018a1c0(param_1,alStackX_18,puVar8,lVar5 + 0x20,lVar5);
  return (uint64_t *)(alStackX_18[0] + 0x40);
}



uint64_t * FUN_180187f11(uint64_t param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint64_t *unaff_RBX;
  uint64_t *puVar6;
  longlong unaff_RSI;
  uint64_t *puVar7;
  uint64_t *puVar8;
  longlong in_stack_00000080;
  
  puVar6 = unaff_RBX;
  if (*(char *)((longlong)unaff_RBX[1] + 0x19) == '\0') {
    uVar1 = *(ulonglong *)(param_2 + 0x10);
    puVar7 = (uint64_t *)unaff_RBX[1];
    do {
      plVar5 = puVar7 + 4;
      uVar2 = puVar7[6];
      if (0xf < (ulonglong)puVar7[7]) {
        plVar5 = (longlong *)*plVar5;
      }
      iVar3 = memcmp(plVar5);
      if (iVar3 == 0) {
        if (uVar1 <= uVar2) goto LAB_180187f7e;
LAB_180188024:
        puVar8 = (uint64_t *)puVar7[2];
      }
      else {
        if (iVar3 < 0) goto LAB_180188024;
LAB_180187f7e:
        puVar8 = (uint64_t *)*puVar7;
        puVar6 = puVar7;
      }
      puVar7 = puVar8;
    } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
  }
  if (puVar6 != unaff_RBX) {
    uVar1 = puVar6[6];
    uVar2 = *(ulonglong *)(unaff_RSI + 0x10);
    iVar3 = memcmp();
    if (iVar3 == 0) {
      if (uVar1 <= uVar2) {
LAB_18018802f:
        return puVar6 + 8;
      }
    }
    else if (-1 < iVar3) goto LAB_18018802f;
  }
  lVar4 = FUN_18018a130(param_1);
  FUN_18018a1c0(param_1,&stack0x00000080,puVar6,lVar4 + 0x20,lVar4);
  return (uint64_t *)(in_stack_00000080 + 0x40);
}



uint64_t * FUN_180187f26(uint64_t param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  uint64_t *unaff_RBX;
  longlong unaff_RSI;
  uint64_t *unaff_RDI;
  uint64_t *puVar5;
  uint64_t *unaff_R13;
  longlong in_stack_00000080;
  
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  do {
    plVar4 = unaff_RDI + 4;
    uVar2 = unaff_RDI[6];
    if (0xf < (ulonglong)unaff_RDI[7]) {
      plVar4 = (longlong *)*plVar4;
    }
    iVar3 = memcmp(plVar4);
    if (iVar3 == 0) {
      if (uVar1 <= uVar2) goto LAB_180187f7e;
LAB_180188024:
      puVar5 = (uint64_t *)unaff_RDI[2];
    }
    else {
      if (iVar3 < 0) goto LAB_180188024;
LAB_180187f7e:
      puVar5 = (uint64_t *)*unaff_RDI;
      unaff_RBX = unaff_RDI;
    }
    unaff_RDI = puVar5;
  } while (*(char *)((longlong)puVar5 + 0x19) == '\0');
  if (unaff_RBX != unaff_R13) {
    uVar1 = unaff_RBX[6];
    uVar2 = *(ulonglong *)(unaff_RSI + 0x10);
    iVar3 = memcmp();
    if (iVar3 == 0) {
      if (uVar1 <= uVar2) {
LAB_18018802f:
        return unaff_RBX + 8;
      }
    }
    else if (-1 < iVar3) goto LAB_18018802f;
  }
  FUN_18018a130();
  FUN_18018a1c0();
  return (uint64_t *)(in_stack_00000080 + 0x40);
}



longlong FUN_180187f94(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_R13;
  longlong in_stack_00000080;
  
  if (unaff_RBX != unaff_R13) {
    uVar1 = *(ulonglong *)(unaff_RBX + 0x30);
    uVar2 = *(ulonglong *)(unaff_RSI + 0x10);
    iVar3 = memcmp();
    if (iVar3 == 0) {
      if (uVar1 <= uVar2) {
LAB_18018802f:
        return unaff_RBX + 0x40;
      }
    }
    else if (-1 < iVar3) goto LAB_18018802f;
  }
  FUN_18018a130();
  FUN_18018a1c0();
  return in_stack_00000080 + 0x40;
}



longlong FUN_180187f9e(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong in_stack_00000080;
  
  uVar1 = *(ulonglong *)(unaff_RBX + 0x30);
  uVar2 = *(ulonglong *)(unaff_RSI + 0x10);
  iVar3 = memcmp();
  if (iVar3 == 0) {
    if (uVar1 <= uVar2) {
LAB_18018802f:
      return unaff_RBX + 0x40;
    }
  }
  else if (-1 < iVar3) goto LAB_18018802f;
  FUN_18018a130();
  FUN_18018a1c0();
  return in_stack_00000080 + 0x40;
}



uint64_t * FUN_18018801e(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  uint64_t *unaff_RBX;
  longlong unaff_RSI;
  uint64_t *unaff_RDI;
  uint64_t *unaff_R13;
  ulonglong unaff_R14;
  int8_t in_SF;
  longlong in_stack_00000080;
  
code_r0x00018018801e:
  if (!(bool)in_SF) goto LAB_180187f7e;
LAB_180188024:
  unaff_RDI = (uint64_t *)unaff_RDI[2];
  do {
    if (*(char *)((longlong)unaff_RDI + 0x19) != '\0') {
      if (unaff_RBX != unaff_R13) {
        uVar1 = unaff_RBX[6];
        uVar2 = *(ulonglong *)(unaff_RSI + 0x10);
        iVar3 = memcmp();
        if (iVar3 == 0) {
          if (uVar1 <= uVar2) {
LAB_18018802f:
            return unaff_RBX + 8;
          }
        }
        else if (-1 < iVar3) goto LAB_18018802f;
      }
      FUN_18018a130();
      FUN_18018a1c0();
      return (uint64_t *)(in_stack_00000080 + 0x40);
    }
    plVar4 = unaff_RDI + 4;
    uVar1 = unaff_RDI[6];
    if (0xf < (ulonglong)unaff_RDI[7]) {
      plVar4 = (longlong *)*plVar4;
    }
    iVar3 = memcmp(plVar4);
    in_SF = iVar3 < 0;
    if (iVar3 != 0) goto code_r0x00018018801e;
    if (uVar1 < unaff_R14) goto LAB_180188024;
LAB_180187f7e:
    unaff_RBX = unaff_RDI;
    unaff_RDI = (uint64_t *)*unaff_RBX;
  } while( true );
}



longlong FUN_18018802d(void)

{
  longlong unaff_RBX;
  bool in_SF;
  longlong in_stack_00000080;
  
  if (!in_SF) {
    return unaff_RBX + 0x40;
  }
  FUN_18018a130();
  FUN_18018a1c0();
  return in_stack_00000080 + 0x40;
}





// 函数: void FUN_180188040(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180188040(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (lVar1 - lVar2,uVar3 + 0x27,lVar2,param_4,0xfffffffffffffffe);
      }
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}





// 函数: void FUN_1801880b0(uint64_t *param_1)
void FUN_1801880b0(uint64_t *param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(*param_1,0x60);
  return;
}





// 函数: void FUN_1801880d0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801880d0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1801884d0(param_1,*(uint64_t *)(lVar1 + 8),param_3,param_4,0xfffffffffffffffe);
  *(longlong *)(*param_1 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
}





// 函数: void FUN_180188120(uint64_t param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180188120(uint64_t param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  
  if (param_2 != (longlong *)0x0) {
    plVar1 = (longlong *)param_2[7];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2,param_3,param_4,0xfffffffffffffffe);
      param_2[7] = 0;
    }
    free(param_2,0x48);
  }
  return;
}





// 函数: void FUN_180188180(uint64_t *param_1)
void FUN_180188180(uint64_t *param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(*param_1,0x28);
  return;
}





// 函数: void FUN_1801881a0(longlong param_1,longlong *param_2)
void FUN_1801881a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint64_t uVar2;
  
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_2) {
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
      *(uint64_t *)(param_1 + 0x38) = uVar2;
      plVar1 = (longlong *)param_2[7];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
        param_2[7] = 0;
        return;
      }
    }
    else {
      *(longlong **)(param_1 + 0x38) = plVar1;
      param_2[7] = 0;
    }
  }
  return;
}





// 函数: void FUN_180188210(uint64_t param_1,longlong param_2,longlong param_3)
void FUN_180188210(uint64_t param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x10;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(lVar1,uVar2);
  return;
}





// 函数: void FUN_180188270(uint64_t param_1,longlong param_2,longlong param_3)
void FUN_180188270(uint64_t param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = param_2;
  if (0xfff < (ulonglong)(param_3 * 0x18)) {
    lVar1 = *(longlong *)(param_2 + -8);
    if (0x1f < (param_2 - lVar1) - 8U) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn(lVar1,param_3 * 0x18 + 0x27);
    }
  }
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(lVar1);
  return;
}





// 函数: void FUN_1801882c0(uint64_t param_1,longlong param_2,longlong param_3)
void FUN_1801882c0(uint64_t param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = param_2;
  if (0xfff < (ulonglong)(param_3 * 0x28)) {
    lVar1 = *(longlong *)(param_2 + -8);
    if (0x1f < (param_2 - lVar1) - 8U) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn(lVar1,param_3 * 0x28 + 0x27);
    }
  }
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(lVar1);
  return;
}





// 函数: void FUN_180188310(uint64_t param_1,longlong param_2,longlong param_3)
void FUN_180188310(uint64_t param_1,longlong param_2,longlong param_3)

{
  if (param_2 != param_3) {
    do {
      FUN_180067070(param_2);
      param_2 = param_2 + 0x28;
    } while (param_2 != param_3);
  }
  return;
}





// 函数: void FUN_180188360(uint64_t param_1,longlong param_2,longlong param_3)
void FUN_180188360(uint64_t param_1,longlong param_2,longlong param_3)

{
  if (param_2 != param_3) {
    do {
      FUN_180187950(param_2);
      param_2 = param_2 + 0x40;
    } while (param_2 != param_3);
  }
  return;
}





// 函数: void FUN_1801883a0(uint64_t param_1,longlong param_2,longlong param_3)
void FUN_1801883a0(uint64_t param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x40;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(lVar1,uVar2);
  return;
}





// 函数: void FUN_1801883f0(uint64_t param_1,longlong param_2,longlong param_3)
void FUN_1801883f0(uint64_t param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = param_2;
  if (0xfff < (ulonglong)(param_3 * 8)) {
    lVar1 = *(longlong *)(param_2 + -8);
    if (0x1f < (param_2 - lVar1) - 8U) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn(lVar1,param_3 * 8 + 0x27);
    }
  }
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(lVar1);
  return;
}





// 函数: void FUN_180188440(uint64_t param_1,longlong param_2,longlong param_3)
void FUN_180188440(uint64_t param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = param_2;
  if (0xfff < (ulonglong)(param_3 * 4)) {
    lVar1 = *(longlong *)(param_2 + -8);
    if (0x1f < (param_2 - lVar1) - 8U) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn(lVar1,param_3 * 4 + 0x27);
    }
  }
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(lVar1);
  return;
}





// 函数: void FUN_180188490(void)
void FUN_180188490(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180067110(0x60);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(int16_t *)(lVar1 + 0x18) = 0x101;
  return;
}





// 函数: void FUN_1801884d0(uint64_t param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801884d0(uint64_t param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  longlong *plVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_1801884d0(param_1,param_2[2],param_3,param_4,uVar3);
    plVar2 = (longlong *)*param_2;
    FUN_180067070(param_2 + 8);
    FUN_180067070(param_2 + 4);
    free(param_2,0x60);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}





// 函数: void FUN_180188560(void)
void FUN_180188560(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180067110(0x28);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(int16_t *)(lVar1 + 0x18) = 0x101;
  return;
}





// 函数: void FUN_1801885a0(uint64_t param_1,longlong *param_2)
void FUN_1801885a0(uint64_t param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_1801885a0(param_1,param_2[2]);
    plVar2 = (longlong *)*param_2;
    free(param_2,0x28);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180188693)
// WARNING: Removing unreachable block (ram,0x00018018869c)
// WARNING: Removing unreachable block (ram,0x0001801886e8)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: stack



// 函数: void FUN_180188620(longlong param_1,uint64_t *param_2)
void FUN_180188620(longlong param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  int8_t auStack_c8 [32];
  uint64_t uStack_a8;
  void *puStack_98;
  uint64_t uStack_90;
  int8_t uStack_88;
  int8_t uStack_87;
  uint64_t uStack_80;
  void **ppuStack_60;
  longlong alStack_58 [7];
  longlong *plStack_20;
  ulonglong uStack_18;
  
  uStack_a8 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_c8;
  uStack_90 = *param_2;
  uStack_88 = *(int8_t *)(param_2 + 1);
  uStack_87 = *(int8_t *)((longlong)param_2 + 9);
  uStack_80 = param_2[2];
  puStack_98 = &unknown_var_424_ptr;
  ppuStack_60 = &puStack_98;
  plStack_20 = (longlong *)0x0;
  if ((ppuStack_60 != (void **)0x0) &&
     (plStack_20 = (longlong *)(*(code *)&unknown_var_5008_ptr)(ppuStack_60,alStack_58),
     ppuStack_60 != (void **)0x0)) {
    (**(code **)(*ppuStack_60 + 0x20))
              (ppuStack_60,CONCAT71((int7)((ulonglong)&puStack_98 >> 8),ppuStack_60 != &puStack_98))
    ;
    ppuStack_60 = (void **)0x0;
  }
  FUN_1801881a0(&puStack_98,param_1);
  if (plStack_20 != (longlong *)0x0) {
    if (plStack_20 == alStack_58) {
      uVar1 = (**(code **)(*plStack_20 + 8))(plStack_20,param_1);
      *(uint64_t *)(param_1 + 0x38) = uVar1;
      if (plStack_20 == (longlong *)0x0) goto LAB_18018873e;
      (**(code **)(*plStack_20 + 0x20))
                (plStack_20,CONCAT71((int7)((ulonglong)alStack_58 >> 8),plStack_20 != alStack_58));
    }
    else {
      *(longlong **)(param_1 + 0x38) = plStack_20;
    }
    plStack_20 = (longlong *)0x0;
  }
LAB_18018873e:
  if (plStack_20 != (longlong *)0x0) {
    (**(code **)(*plStack_20 + 0x20))
              (plStack_20,CONCAT71((int7)((ulonglong)alStack_58 >> 8),plStack_20 != alStack_58));
    plStack_20 = (longlong *)0x0;
  }
  if (ppuStack_60 != (void **)0x0) {
    (**(code **)(*ppuStack_60 + 0x20))(ppuStack_60,ppuStack_60 != &puStack_98);
    ppuStack_60 = (void **)0x0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_c8);
}





// 函数: void FUN_1801887a0(longlong *param_1,longlong param_2,int32_t *param_3,uint64_t param_4)
void FUN_1801887a0(longlong *param_1,longlong param_2,int32_t *param_3,uint64_t param_4)

{
  code *pcVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  int32_t *puVar9;
  int8_t auStackX_8 [8];
  ulonglong uStackX_10;
  longlong lStackX_20;
  uint64_t uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  lVar8 = *param_1;
  lVar6 = param_1[1] - lVar8 >> 4;
  if (lVar6 == 0xfffffffffffffff) {
    FUN_180189990();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar7 = lVar6 + 1;
  uVar5 = param_1[2] - lVar8 >> 4;
  uStackX_10 = uVar7;
  if ((uVar5 <= 0xfffffffffffffff - (uVar5 >> 1)) &&
     (uStackX_10 = (uVar5 >> 1) + uVar5, uStackX_10 < uVar7)) {
    uStackX_10 = uVar7;
  }
  lVar6 = uStackX_10 << 4;
  if (0xfffffffffffffff < uStackX_10) {
    lVar6 = -1;
  }
  lVar6 = FUN_180067110(lVar6);
  puVar9 = (int32_t *)((param_2 - lVar8 & 0xfffffffffffffff0U) + lVar6);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *puVar9 = *param_3;
  puVar9[1] = uVar2;
  puVar9[2] = uVar3;
  puVar9[3] = uVar4;
  lVar8 = param_1[1];
  lStackX_20 = lVar6;
  func_0x00018018a000(auStackX_8,*param_1,lVar8,param_4,uVar10);
  if (param_2 != lVar8) {
                    // WARNING: Subroutine does not return
    memmove(lVar6);
  }
                    // WARNING: Subroutine does not return
  memmove(lVar6);
}



uint64_t * FUN_180188910(longlong *param_1,longlong param_2,uint64_t *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  uint64_t uVar13;
  
  uVar13 = 0xfffffffffffffffe;
  lVar8 = *param_1;
  lVar6 = (param_2 - lVar8) / 6 + (param_2 - lVar8 >> 0x3f);
  lVar5 = (param_1[1] - lVar8) / 0x18;
  if (lVar5 == 0xaaaaaaaaaaaaaaa) {
    FUN_180189990();
    pcVar2 = (code *)swi(3);
    puVar4 = (uint64_t *)(*pcVar2)();
    return puVar4;
  }
  uVar1 = lVar5 + 1;
  uVar9 = (param_1[2] - lVar8) / 0x18;
  uVar7 = uVar1;
  if ((uVar9 <= 0xaaaaaaaaaaaaaaa - (uVar9 >> 1)) && (uVar7 = uVar9 + (uVar9 >> 1), uVar7 < uVar1))
  {
    uVar7 = uVar1;
  }
  puVar3 = (uint64_t *)FUN_180067110();
  puVar4 = puVar3 + ((lVar6 >> 2) - (lVar6 >> 0x3f)) * 3;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = *param_3;
  puVar4[1] = param_3[1];
  puVar4[2] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  lVar8 = param_1[1];
  lVar5 = *param_1;
  puVar10 = puVar3;
  puVar11 = puVar4;
  puVar12 = puVar3;
  if (param_2 != lVar8) {
    FUN_180189aa0(*param_1,param_2,puVar3,param_1,puVar4,puVar3,uVar13);
    lVar8 = param_1[1];
    lVar5 = param_2;
    puVar10 = puVar4 + 3;
    puVar11 = puVar3;
  }
  FUN_180189aa0(lVar5,lVar8,puVar10,param_1,puVar11,puVar12,uVar13);
  if (*param_1 != 0) {
    FUN_180189900(*param_1,param_1[1]);
    lVar8 = *param_1;
    uVar9 = ((param_1[2] - lVar8) / 0x18) * 0x18;
    lVar5 = lVar8;
    if (0xfff < uVar9) {
      lVar5 = *(longlong *)(lVar8 + -8);
      if (0x1f < (lVar8 - lVar5) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar5,uVar9 + 0x27);
      }
    }
    free(lVar5);
  }
  *param_1 = (longlong)puVar3;
  param_1[1] = (longlong)(puVar3 + uVar1 * 3);
  param_1[2] = (longlong)(puVar3 + uVar7 * 3);
  return puVar4;
}





