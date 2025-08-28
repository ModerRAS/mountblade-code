#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part001.c - 20 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_04.c - 500 个函数


// 函数: void FUN_1802575d0(uint64_t param_1,int param_2,longlong *param_3)
void FUN_1802575d0(uint64_t param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  int32_t *puVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  piVar3 = (int *)0x180bf8a48;
  iVar5 = 0;
  while (*piVar3 != param_2) {
    iVar5 = iVar5 + 1;
    piVar3 = piVar3 + 4;
    if (0x180bf8db7 < (longlong)piVar3) {
      return;
    }
  }
  uVar6 = 0xffffffffffffffff;
  lVar1 = *(longlong *)((longlong)iVar5 * 0x10 + 0x180bf8a40);
  do {
    uVar6 = uVar6 + 1;
  } while (*(char *)(lVar1 + uVar6) != '\0');
  puVar4 = (int32_t *)param_3[1];
  uVar7 = uVar6 & 0xffffffff;
  if ((ulonglong)((*param_3 - (longlong)puVar4) + param_3[2]) <= uVar7 + 4) {
    FUN_180639bf0(param_3,(longlong)puVar4 + ((uVar7 + 4) - *param_3));
    puVar4 = (int32_t *)param_3[1];
  }
  *puVar4 = (int)uVar6;
  param_3[1] = param_3[1] + 4;
  lVar2 = param_3[1];
  uVar6 = (param_3[2] - lVar2) + *param_3;
  if (uVar7 != 0) {
    if (lVar2 != 0) {
      if ((lVar1 != 0) && (uVar7 <= uVar6)) {
                    // WARNING: Subroutine does not return
        memcpy(lVar2,lVar1,uVar7);
      }
                    // WARNING: Subroutine does not return
      memset(lVar2,0,uVar6);
    }
    puVar4 = (int32_t *)_errno();
    *puVar4 = 0x16;
    _invalid_parameter_noinfo();
  }
  param_3[1] = param_3[1] + uVar7;
  return;
}



longlong FUN_1802576f0(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(code **)(param_1 + 0x18) = _guard_check_icall;
  if (param_1 != param_2) {
    pcVar1 = *(code **)(param_2 + 0x10);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1,param_2,1,param_4,0xfffffffffffffffe);
      pcVar1 = *(code **)(param_2 + 0x10);
    }
    *(code **)(param_1 + 0x10) = pcVar1;
    *(uint64_t *)(param_1 + 0x18) = *(uint64_t *)(param_2 + 0x18);
  }
  return param_1;
}






// 函数: void FUN_180257770(longlong param_1,char param_2,uint64_t param_3,uint64_t param_4)
void FUN_180257770(longlong param_1,char param_2,uint64_t param_3,uint64_t param_4)

{
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(param_1 + 8,0,0,param_4,0xfffffffffffffffe);
  }
  if (param_2 != '\0') {
    free(param_1,0x28);
  }
  return;
}






// 函数: void FUN_180257800(longlong param_1,uint64_t *param_2,uint64_t *param_3,int32_t *param_4)
void FUN_180257800(longlong param_1,uint64_t *param_2,uint64_t *param_3,int32_t *param_4)

{
                    // WARNING: Could not recover jumptable at 0x00018025781c. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(param_1 + 0x20))(*param_2,*param_3,*param_4,param_1 + 8);
  return;
}



uint64_t *
FUN_180257820(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  
  *param_1 = &unknown_var_1568_ptr;
  param_1[3] = 0;
  param_1[4] = _guard_check_icall;
  if (param_1 + 1 != param_2) {
    pcVar1 = (code *)param_2[2];
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1 + 1,param_2,2,param_4,0xfffffffffffffffe);
      pcVar1 = (code *)param_2[2];
    }
    param_1[3] = pcVar1;
    param_1[4] = param_2[3];
    param_2[2] = 0;
    param_2[3] = _guard_check_icall;
  }
  return param_1;
}



uint64_t *
FUN_1802578c0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  code *pcVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)FUN_1808fc418(0x28);
  *puVar1 = &unknown_var_1568_ptr;
  puVar1[3] = 0;
  puVar1[4] = _guard_check_icall;
  if (puVar1 + 1 != param_1) {
    pcVar2 = (code *)param_1[2];
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(puVar1 + 1,param_1,1,param_4,uVar3);
      pcVar2 = (code *)param_1[2];
    }
    puVar1[3] = pcVar2;
    puVar1[4] = param_1[3];
  }
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180257970(longlong *param_1,longlong *param_2,int param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  
  if (param_3 == 3) {
    lVar2 = 0x180c043e0;
  }
  else if (param_3 == 4) {
    lVar2 = *param_1;
  }
  else {
    if (param_3 == 0) {
      lVar2 = *param_1;
      if (lVar2 != 0) {
        if (*(code **)(lVar2 + 0x10) != (code *)0x0) {
          (**(code **)(lVar2 + 0x10))(lVar2,0,0,param_4,0xfffffffffffffffe);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
    }
    else {
      if (param_3 == 1) {
        lVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x20,8,system_allocation_flags);
        lVar2 = *param_2;
        *(uint64_t *)(lVar1 + 0x10) = 0;
        *(code **)(lVar1 + 0x18) = _guard_check_icall;
        if (lVar1 != lVar2) {
          pcVar3 = *(code **)(lVar2 + 0x10);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(lVar1,lVar2,1);
            pcVar3 = *(code **)(lVar2 + 0x10);
          }
          *(code **)(lVar1 + 0x10) = pcVar3;
          *(uint64_t *)(lVar1 + 0x18) = *(uint64_t *)(lVar2 + 0x18);
        }
        *param_1 = lVar1;
        return 0;
      }
      if (param_3 == 2) {
        *param_1 = *param_2;
        *param_2 = 0;
        return 0;
      }
    }
    lVar2 = 0;
  }
  return lVar2;
}



uint64_t
FUN_180257ae0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  uVar1 = FUN_1808fc418(0x28);
  FUN_180257820(uVar1,param_1,param_3,param_4,uVar2);
  return uVar1;
}



uint64_t * FUN_180257b30(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_1952_ptr;
  if (param_1[3] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28);
  }
  return param_1;
}



longlong FUN_180257b80(longlong param_1)

{
  *(int32_t *)(param_1 + 0x20) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x24) = 0x40000000;
  *(int32_t *)(param_1 + 0x2c) = 0x1a;
  *(uint64_t *)(param_1 + 0x10) = 1;
  *(void **)(param_1 + 8) = &system_data_0000;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x28) = 0;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x38) = 0;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(int32_t *)(param_1 + 0x48) = 0x1a;
  *(uint64_t *)(param_1 + 0x60) = &unknown_var_720_ptr;
  *(uint64_t *)(param_1 + 0x68) = 0;
  *(int32_t *)(param_1 + 0x70) = 0;
  *(uint64_t *)(param_1 + 0x60) = &unknown_var_3432_ptr;
  *(int8_t **)(param_1 + 0x68) = (int8_t *)(param_1 + 0x78);
  *(int32_t *)(param_1 + 0x70) = 0;
  *(int8_t *)(param_1 + 0x78) = 0;
  *(uint64_t *)(param_1 + 0x50) = 0;
  *(uint64_t *)(param_1 + 0x58) = 0;
  *(int8_t *)(param_1 + 0xf8) = 0;
  return param_1;
}



uint64_t * FUN_180257c40(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_1792_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}






// 函数: void FUN_180257c80(uint64_t *param_1)
void FUN_180257c80(uint64_t *param_1)

{
  *param_1 = &unknown_var_1952_ptr;
  if (param_1[3] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(int32_t *)(param_1 + 4) = 0;
  param_1[3] = 0;
  return;
}



uint64_t *
FUN_180257cb0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_1824_ptr;
  *param_1 = &unknown_var_1952_ptr;
  if (param_1[3] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}






// 函数: void FUN_180257d40(void)
void FUN_180257d40(void)

{
  FUN_180257d60();
  return;
}






// 函数: void FUN_180257d60(longlong *param_1)
void FUN_180257d60(longlong *param_1)

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
        _invalid_parameter_noinfo_noreturn(lVar1 - lVar2,uVar3 + 0x27);
      }
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}






// 函数: void FUN_180257dc0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)
void FUN_180257dc0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

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
        _invalid_parameter_noinfo_noreturn(lVar1 - lVar2,uVar3 + 0x27);
      }
    }
    free(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}






// 函数: void FUN_180257e50(longlong param_1)
void FUN_180257e50(longlong param_1)

{
  *(uint64_t *)(param_1 + 0xf8) = &unknown_var_3456_ptr;
  if (*(longlong *)(param_1 + 0x100) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x100) = 0;
  *(int32_t *)(param_1 + 0x110) = 0;
  *(uint64_t *)(param_1 + 0xf8) = &unknown_var_720_ptr;
  FUN_18005d580();
  *(uint64_t *)(param_1 + 0x10) = &unknown_var_3456_ptr;
  if (*(longlong *)(param_1 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x28) = 0;
  *(uint64_t *)(param_1 + 0x10) = &unknown_var_720_ptr;
  return;
}



uint64_t * FUN_180257f00(uint64_t *param_1,ulonglong param_2)

{
  if (param_1[0x11] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_18025aac0();
  param_1[2] = &unknown_var_3456_ptr;
  if (param_1[3] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[3] = 0;
  *(int32_t *)(param_1 + 5) = 0;
  param_1[2] = &unknown_var_720_ptr;
  *param_1 = &unknown_var_5192_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0xb0);
  }
  return param_1;
}






// 函数: void FUN_180257fc0(longlong *param_1)
void FUN_180257fc0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x170) {
    FUN_180257e50(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



uint64_t *
FUN_180258000(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_18005d580();
  if (param_1[6] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = &unknown_var_3456_ptr;
  if (param_1[2] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[2] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[1] = &unknown_var_720_ptr;
  *param_1 = &unknown_var_5192_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x70,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802580b0(longlong param_1)
void FUN_1802580b0(longlong param_1)

{
  int iVar1;
  uint64_t uVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong ***ppplStackX_18;
  
  uVar8 = 0;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x40);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x48) - lVar7;
  lVar9 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar9),8) + lVar9;
  lVar5 = lVar9 >> 8;
  lVar9 = lVar9 >> 0x3f;
  if (lVar5 != lVar9) {
    pcVar4 = (char *)(lVar7 + 0x150);
    uVar6 = uVar8;
    do {
      if (*pcVar4 != '\0') {
        if (*(longlong *)(param_1 + 0xb0) != 0) {
          return;
        }
        uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,CONCAT71((int7)(uVar6 >> 8),0x16),0,
                              0xfffffffffffffffe);
        plVar3 = (longlong *)FUN_180275090(uVar2);
        plStackX_8 = plVar3;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3);
        }
        uVar10 = *(uint *)(param_1 + 0x78);
        uVar6 = (ulonglong)uVar10;
        if (*(longlong *)(param_1 + 0x70) != 0) {
          FUN_1806277c0(plVar3 + 0x3e,uVar6);
        }
        if (uVar10 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(plVar3[0x3f],*(uint64_t *)(param_1 + 0x70),uVar6);
        }
        *(int32_t *)(plVar3 + 0x40) = 0;
        if (plVar3[0x3f] != 0) {
          *(int8_t *)(uVar6 + plVar3[0x3f]) = 0;
        }
        *(int32_t *)((longlong)plVar3 + 0x20c) = *(int32_t *)(param_1 + 0x84);
        iVar1 = (int)(plVar3[8] - plVar3[7] >> 4);
        lVar7 = (longlong)iVar1;
        if (0 < iVar1) {
          do {
            *(longlong *)(*(longlong *)(uVar8 + plVar3[7]) + 0xa8) = param_1;
            uVar8 = uVar8 + 0x10;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        plVar3[6] = param_1;
        plStackX_8 = (longlong *)0x0;
        pplStackX_10 = *(longlong ***)(param_1 + 0xb0);
        *(longlong **)(param_1 + 0xb0) = plVar3;
        if (pplStackX_10 != (longlong **)0x0) {
          (*(code *)(*pplStackX_10)[7])();
        }
        *(int8_t *)(*(longlong *)(param_1 + 0xb0) + 0x322) = 1;
        pplStackX_10 = &plStackX_8;
        plStackX_8 = *(longlong **)(param_1 + 0xb0);
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x28))();
        }
        FUN_1800b7840();
        return;
      }
      uVar10 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar10;
      pcVar4 = pcVar4 + 0x170;
    } while ((ulonglong)(longlong)(int)uVar10 < (ulonglong)(lVar5 - lVar9));
  }
  lVar7 = *(longlong *)(param_1 + 0xb0);
  if (lVar7 != 0) {
    iVar1 = (int)(*(longlong *)(lVar7 + 0x40) - *(longlong *)(lVar7 + 0x38) >> 4);
    lVar9 = (longlong)iVar1;
    uVar6 = uVar8;
    if (0 < iVar1) {
      do {
        *(uint64_t *)(*(longlong *)(uVar6 + *(longlong *)(lVar7 + 0x38)) + 0xa8) = 0;
        lVar9 = lVar9 + -1;
        uVar6 = uVar6 + 0x10;
      } while (lVar9 != 0);
    }
    *(uint64_t *)(lVar7 + 0x30) = 0;
    iVar1 = (int)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x40) -
                  *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x38) >> 4);
    lVar7 = (longlong)iVar1;
    if (0 < iVar1) {
      do {
        pplStackX_10 = &plStackX_8;
        plStackX_8 = *(longlong **)(uVar8 + *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x38));
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x28))();
        }
        FUN_1800b55b0();
        uVar8 = uVar8 + 0x10;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    ppplStackX_18 = &pplStackX_10;
    pplStackX_10 = *(longlong ***)(param_1 + 0xb0);
    if (pplStackX_10 != (longlong **)0x0) {
      (*(code *)(*pplStackX_10)[5])();
    }
    FUN_1800b7a70();
    ppplStackX_18 = *(longlong ****)(param_1 + 0xb0);
    *(uint64_t *)(param_1 + 0xb0) = 0;
    if (ppplStackX_18 != (longlong ***)0x0) {
      (**(code **)((longlong)*ppplStackX_18 + 0x38))();
    }
  }
  return;
}



uint64_t * FUN_180258380(uint64_t *param_1,ulonglong param_2)

{
  uint64_t *puVar1;
  longlong lVar2;
  
  *param_1 = &unknown_var_2712_ptr;
  puVar1 = (uint64_t *)param_1[0x11];
  if (puVar1 != (uint64_t *)0x0) {
    lVar2 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar2);
    }
  }
  param_1[0x11] = 0;
  if ((longlong *)param_1[0x16] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x16] + 0x38))();
  }
  FUN_1802566c0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xb8);
  }
  return param_1;
}






// 函数: void FUN_180258440(longlong param_1)
void FUN_180258440(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_180282110();
    iVar2 = 0;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x38);
    if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x40) - lVar4 >> 4 != 0) {
      lVar3 = 0;
      do {
        plVar1 = (longlong *)(lVar3 + lVar4);
        lVar3 = lVar3 + 0x10;
        iVar2 = iVar2 + 1;
        *(int8_t *)(*plVar1 + 0xb1) = 1;
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x38);
      } while ((ulonglong)(longlong)iVar2 <
               (ulonglong)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x40) - lVar4 >> 4));
    }
  }
  return;
}






// 函数: void FUN_1802584d0(longlong param_1)
void FUN_1802584d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong ***ppplStackX_18;
  
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if (lVar3 != 0) {
    iVar1 = (int)(*(longlong *)(lVar3 + 0x40) - *(longlong *)(lVar3 + 0x38) >> 4);
    lVar3 = (longlong)iVar1;
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        pplStackX_10 = &plStackX_8;
        plStackX_8 = *(longlong **)(lVar2 + *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x38));
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x28))();
        }
        FUN_1800b55b0();
        lVar2 = lVar2 + 0x10;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    ppplStackX_18 = &pplStackX_10;
    pplStackX_10 = *(longlong ***)(param_1 + 0xb0);
    if (pplStackX_10 != (longlong **)0x0) {
      (*(code *)(*pplStackX_10)[5])();
    }
    FUN_1800b7a70();
    ppplStackX_18 = *(longlong ****)(param_1 + 0xb0);
    *(uint64_t *)(param_1 + 0xb0) = 0;
    if (ppplStackX_18 != (longlong ***)0x0) {
      (**(code **)((longlong)*ppplStackX_18 + 0x38))();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802585b0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802585b0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong *plStackX_8;
  longlong lStackX_10;
  longlong **pplStackX_18;
  
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x90) != 0) {
      plStackX_8 = &lStackX_10;
      uVar1 = FUN_1800f4ad0(param_1,&lStackX_10,lVar2 + 0x80,param_4,0xfffffffffffffffe);
      FUN_1802829c0(lVar2,uVar1);
      lVar2 = *(longlong *)(param_1 + 0xb0);
    }
    if (*(int *)(lVar2 + 0x128) != 0) {
      pplStackX_18 = &plStackX_8;
      plStackX_8 = (longlong *)FUN_1800b6de0(_DAT_180c86930,lVar2 + 0x118,1);
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))(plStackX_8);
      }
      FUN_180282be0(lVar2,&plStackX_8);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180258670(longlong param_1,longlong *param_2)
void FUN_180258670(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if ((((*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x74) != 0) ||
       (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x7c) != 0)) &&
      (lVar3 = FUN_180087070(_DAT_180c868a8,&system_data_12f0), lVar3 != 0)) &&
     (param_2 != (longlong *)(lVar3 + 0x90))) {
    lVar1 = *(longlong *)(lVar3 + 0x90);
    lVar3 = *(longlong *)(lVar3 + 0x98);
    lVar6 = lVar3 - lVar1;
    lVar4 = lVar6 / 6 + (lVar6 >> 0x3f);
    uVar5 = (lVar4 >> 3) - (lVar4 >> 0x3f);
    if ((ulonglong)((param_2[2] - *param_2) / 0x30) < uVar5) {
      if (uVar5 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = FUN_18062b420(_DAT_180c8ed18,uVar5 * 0x30,(char)param_2[3]);
      }
      if (lVar1 != lVar3) {
                    // WARNING: Subroutine does not return
        memmove(lVar4,lVar1,lVar6);
      }
      if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *param_2 = lVar4;
      lVar4 = uVar5 * 0x30 + lVar4;
      param_2[1] = lVar4;
      param_2[2] = lVar4;
    }
    else {
      uVar2 = (param_2[1] - *param_2) / 0x30;
      if (uVar2 < uVar5) {
        lVar4 = uVar2 * 0x30 + lVar1;
        FUN_18014fb60(lVar1,lVar4);
        lVar3 = FUN_18014fb60(lVar4,lVar3,param_2[1]);
      }
      else {
        lVar3 = FUN_18014fb60(lVar1,lVar3);
      }
      param_2[1] = lVar3;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802586da(longlong param_1,uint64_t param_2,longlong param_3,longlong param_4)
void FUN_1802586da(longlong param_1,uint64_t param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong *in_RAX;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *unaff_RDI;
  
  lVar2 = *in_RAX;
  lVar1 = in_RAX[1];
  lVar3 = SUB168(SEXT816(param_4) * SEXT816(lVar1 - lVar2),8);
  uVar5 = (lVar3 >> 3) - (lVar3 >> 0x3f);
  lVar3 = SUB168(SEXT816(param_4) * SEXT816(param_1 - param_3),8);
  if ((ulonglong)((lVar3 >> 3) - (lVar3 >> 0x3f)) < uVar5) {
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_18062b420(_DAT_180c8ed18,uVar5 * 0x30,(char)unaff_RDI[3]);
    }
    if (lVar2 != lVar1) {
                    // WARNING: Subroutine does not return
      memmove(lVar3,lVar2,lVar1 - lVar2);
    }
    if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *unaff_RDI = lVar3;
    lVar3 = uVar5 * 0x30 + lVar3;
    unaff_RDI[1] = lVar3;
    unaff_RDI[2] = lVar3;
  }
  else {
    lVar3 = SUB168(SEXT816(param_4) * SEXT816(unaff_RDI[1] - param_3),8);
    uVar4 = (lVar3 >> 3) - (lVar3 >> 0x3f);
    if (uVar4 < uVar5) {
      lVar3 = uVar4 * 0x30 + lVar2;
      FUN_18014fb60(lVar2,lVar3);
      lVar2 = FUN_18014fb60(lVar3,lVar1,unaff_RDI[1]);
    }
    else {
      lVar2 = FUN_18014fb60(lVar2,lVar1);
    }
    unaff_RDI[1] = lVar2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025872e(void)
void FUN_18025872e(void)

{
  longlong lVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_RDI;
  longlong unaff_R14;
  
  if (unaff_RBX == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,unaff_RBX * 0x30,(char)unaff_RDI[3]);
  }
  if (unaff_RBP != unaff_R14) {
                    // WARNING: Subroutine does not return
    memmove(lVar1);
  }
  if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RDI = lVar1;
  lVar1 = unaff_RBX * 0x30 + lVar1;
  unaff_RDI[1] = lVar1;
  unaff_RDI[2] = lVar1;
  return;
}






// 函数: void FUN_180258795(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4)
void FUN_180258795(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4)

{
  uint64_t uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  lVar2 = SUB168(SEXT816(param_4) * SEXT816(*(longlong *)(unaff_RDI + 8) - param_3),8);
  uVar3 = (lVar2 >> 3) - (lVar2 >> 0x3f);
  if (uVar3 < unaff_RBX) {
    FUN_18014fb60();
    uVar1 = FUN_18014fb60(uVar3 * 0x30 + unaff_RBP);
  }
  else {
    uVar1 = FUN_18014fb60();
  }
  *(uint64_t *)(unaff_RDI + 8) = uVar1;
  return;
}






// 函数: void FUN_1802587fc(void)
void FUN_1802587fc(void)

{
  return;
}






// 函数: void FUN_180258810(longlong param_1,longlong param_2)
void FUN_180258810(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  
  if (*(longlong *)(param_2 + 0xb0) == 0) {
    plVar1 = *(longlong **)(param_1 + 0xb0);
    if (plVar1 != (longlong *)0x0) {
      plStackX_8 = plVar1;
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plStackX_8 = *(longlong **)(param_2 + 0xb0);
    *(longlong **)(param_2 + 0xb0) = plVar1;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  else {
    pplStackX_10 = &plStackX_8;
    plStackX_8 = *(longlong **)(param_1 + 0xb0);
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    FUN_1800b7a70();
  }
  lVar2 = *(longlong *)(param_1 + 0xb0);
  lVar4 = 0;
  if (lVar2 != 0) {
    iVar3 = (int)(*(longlong *)(lVar2 + 0x40) - *(longlong *)(lVar2 + 0x38) >> 4);
    lVar5 = (longlong)iVar3;
    if (0 < iVar3) {
      do {
        *(longlong *)(*(longlong *)(lVar4 + *(longlong *)(lVar2 + 0x38)) + 0xa8) = param_2;
        lVar4 = lVar4 + 0x10;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    *(longlong *)(lVar2 + 0x30) = param_2;
    FUN_180282110(*(uint64_t *)(param_1 + 0xb0));
  }
  plStackX_8 = *(longlong **)(param_1 + 0xb0);
  *(uint64_t *)(param_1 + 0xb0) = 0;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180258930(uint64_t param_1,longlong param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  
  puVar7 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0xb0,8,3,0xfffffffffffffffe);
  *puVar7 = &unknown_var_5192_ptr;
  *puVar7 = &unknown_var_2912_ptr;
  puVar1 = puVar7 + 2;
  *puVar1 = &unknown_var_720_ptr;
  puVar7[3] = 0;
  *(int32_t *)(puVar7 + 4) = 0;
  *puVar1 = &unknown_var_3456_ptr;
  puVar7[5] = 0;
  puVar7[3] = 0;
  *(int32_t *)(puVar7 + 4) = 0;
  puVar2 = puVar7 + 8;
  *puVar2 = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  *(int32_t *)(puVar7 + 0xb) = 3;
  puVar7[0x11] = 0;
  puVar7[0x12] = 0;
  puVar7[0x13] = 0;
  *(int32_t *)(puVar7 + 0x14) = 3;
  *(int32_t *)(puVar7 + 1) = 0x7f7fffff;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  *(uint64_t *)((longlong)puVar7 + 0x74) = 0;
  *(uint64_t *)((longlong)puVar7 + 0x7c) = 0;
  *(int32_t *)(puVar7 + 6) = 0;
  *(int32_t *)((longlong)puVar7 + 0x34) = 0;
  *(int32_t *)(puVar7 + 7) = 0;
  *(int32_t *)((longlong)puVar7 + 0x3c) = 0;
  *(int16_t *)(puVar7 + 0x15) = 0x101;
  *(int32_t *)(puVar7 + 0xe) = 0;
  if (param_2 != 0) {
    *(int32_t *)(puVar7 + 1) = *(int32_t *)(param_2 + 8);
    FUN_180627be0(puVar1,param_2 + 0x10);
    uVar3 = *(int32_t *)(param_2 + 0x34);
    uVar4 = *(int32_t *)(param_2 + 0x38);
    uVar5 = *(int32_t *)(param_2 + 0x3c);
    *(int32_t *)(puVar7 + 6) = *(int32_t *)(param_2 + 0x30);
    *(int32_t *)((longlong)puVar7 + 0x34) = uVar3;
    *(int32_t *)(puVar7 + 7) = uVar4;
    *(int32_t *)((longlong)puVar7 + 0x3c) = uVar5;
    if (puVar2 != (uint64_t *)(param_2 + 0x40)) {
      FUN_18025b2c0(puVar2,*(uint64_t *)(param_2 + 0x40),*(uint64_t *)(param_2 + 0x48));
    }
    uVar6 = *(uint64_t *)(param_2 + 0x68);
    puVar7[0xc] = *(uint64_t *)(param_2 + 0x60);
    puVar7[0xd] = uVar6;
    *(int32_t *)(puVar7 + 0xe) = *(int32_t *)(param_2 + 0x70);
    uVar3 = *(int32_t *)(param_2 + 0x78);
    uVar4 = *(int32_t *)(param_2 + 0x7c);
    uVar5 = *(int32_t *)(param_2 + 0x80);
    *(int32_t *)((longlong)puVar7 + 0x74) = *(int32_t *)(param_2 + 0x74);
    *(int32_t *)(puVar7 + 0xf) = uVar3;
    *(int32_t *)((longlong)puVar7 + 0x7c) = uVar4;
    *(int32_t *)(puVar7 + 0x10) = uVar5;
    FUN_180150240(puVar7 + 0x11,param_2 + 0x88);
    *(int8_t *)(puVar7 + 0x15) = *(int8_t *)(param_2 + 0xa8);
    *(int8_t *)((longlong)puVar7 + 0xa9) = *(int8_t *)(param_2 + 0xa9);
  }
  return puVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180258ab0(uint64_t param_1,longlong param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  
  puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3,0xfffffffffffffffe);
  *puVar3 = &unknown_var_5192_ptr;
  *puVar3 = &unknown_var_2880_ptr;
  puVar1 = puVar3 + 1;
  *puVar1 = &unknown_var_720_ptr;
  puVar3[2] = 0;
  *(int32_t *)(puVar3 + 3) = 0;
  *puVar1 = &unknown_var_3456_ptr;
  puVar3[4] = 0;
  puVar3[2] = 0;
  *(int32_t *)(puVar3 + 3) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(int32_t *)(puVar3 + 9) = 3;
  puVar2 = puVar3 + 10;
  *puVar2 = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  *(int32_t *)(puVar3 + 0xd) = 3;
  puVar3[5] = 0;
  if (param_2 != 0) {
    FUN_180627be0(puVar1,param_2 + 8);
    puVar3[5] = *(uint64_t *)(param_2 + 0x28);
    FUN_18014e160(puVar3 + 6,param_2 + 0x30);
    if (puVar2 != (uint64_t *)(param_2 + 0x50)) {
      FUN_1800588c0(puVar2,*(uint64_t *)(param_2 + 0x50),*(uint64_t *)(param_2 + 0x58));
    }
  }
  return puVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




