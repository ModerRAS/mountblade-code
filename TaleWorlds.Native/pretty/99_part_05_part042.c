#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part042.c - 13 个函数

// 函数: void FUN_1802f3e01(longlong param_1,longlong param_2,longlong param_3)
void FUN_1802f3e01(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint64_t unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong uVar6;
  uint64_t unaff_RSI;
  ulonglong uVar7;
  longlong lVar8;
  uint64_t unaff_RDI;
  int iVar9;
  longlong in_R11;
  uint uVar10;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  ulonglong uVar11;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x10) = unaff_R12;
  lVar5 = *(longlong *)(param_1 + 0x220);
  uVar4 = unaff_RBP & 0xffffffff;
  *(uint64_t *)(in_R11 + -0x18) = unaff_R13;
  if (param_3 - lVar5 >> 3 != 0) {
    *(uint64_t *)(in_R11 + 8) = unaff_RBX;
    *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
    uVar11 = unaff_RBP & 0xffffffff;
    *(uint64_t *)(in_R11 + 0x10) = unaff_RSI;
    *(uint64_t *)(in_R11 + -0x20) = unaff_R14;
    do {
      if (*(longlong *)(lVar5 + uVar11) == param_2) {
        *(uint64_t *)(lVar5 + uVar11) = *(uint64_t *)(lVar5 + -8 + (param_3 - lVar5 >> 3) * 8);
        lVar5 = *(longlong *)(param_1 + 0x228);
        param_3 = *(longlong *)(param_1 + 0x220);
        uVar7 = lVar5 - param_3 >> 3;
        uVar6 = uVar7 - 1;
        if (uVar7 < uVar6) {
          if (*(longlong *)(param_1 + 0x230) - lVar5 >> 3 == -1) {
                    // WARNING: Subroutine does not return
            memset(lVar5,0,0xfffffffffffffff8);
          }
          if (uVar7 == 0) {
            uVar7 = 1;
          }
          else {
            uVar7 = uVar7 * 2;
          }
          if (uVar7 < uVar6) {
            uVar7 = uVar6;
          }
          if (uVar7 != 0) {
            unaff_RBP = FUN_18062b420(system_memory_pool_ptr,uVar7 * 8,*(int8_t *)(param_1 + 0x238));
            param_3 = *(longlong *)(param_1 + 0x220);
            lVar5 = *(longlong *)(param_1 + 0x228);
          }
          if (param_3 != lVar5) {
                    // WARNING: Subroutine does not return
            memmove(unaff_RBP,param_3,lVar5 - param_3);
          }
                    // WARNING: Subroutine does not return
          memset(unaff_RBP,0,0xfffffffffffffff8);
        }
        param_3 = param_3 + uVar6 * 8;
        *(longlong *)(param_1 + 0x228) = param_3;
      }
      lVar5 = *(longlong *)(param_1 + 0x220);
      uVar10 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar10;
      uVar11 = uVar11 + 8;
    } while ((ulonglong)(longlong)(int)uVar10 < (ulonglong)(param_3 - lVar5 >> 3));
  }
  lVar5 = *(longlong *)(param_2 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((int)(*(longlong *)(lVar5 + 0x228) - *(longlong *)(lVar5 + 0x220) >> 3) == 0) {
    plVar3 = *(longlong **)(lVar1 + 0x5c98);
    iVar9 = (int)(*(longlong *)(lVar1 + 0x5ca0) - (longlong)plVar3 >> 3);
    if (0 < iVar9) {
      uVar4 = unaff_RBP;
      while (*plVar3 != lVar5) {
        uVar4 = (ulonglong)((int)uVar4 + 1);
        unaff_RBP = unaff_RBP + 1;
        plVar3 = plVar3 + 1;
        if ((longlong)iVar9 <= (longlong)unaff_RBP) {
          return;
        }
      }
      plVar3 = (longlong *)(lVar1 + 0x5c98);
      uVar11 = (longlong)iVar9 - 1;
      *(uint64_t *)(*(longlong *)(lVar1 + 0x5c98) + (longlong)(int)uVar4 * 8) =
           *(uint64_t *)(*(longlong *)(lVar1 + 0x5c98) + uVar11 * 8);
      lVar8 = *(longlong *)(lVar1 + 0x5ca0);
      lVar5 = *plVar3;
      uVar4 = lVar8 - lVar5 >> 3;
      if (uVar11 <= uVar4) {
        *(ulonglong *)(lVar1 + 0x5ca0) = lVar5 + uVar11 * 8;
        return;
      }
      uVar6 = uVar11 - uVar4;
      if (uVar6 <= (ulonglong)(*(longlong *)(lVar1 + 0x5ca8) - lVar8 >> 3)) {
        if (uVar6 == 0) {
          *(longlong *)(lVar1 + 0x5ca0) = lVar8;
          return;
        }
                    // WARNING: Subroutine does not return
        memset(lVar8,0,uVar6 * 8);
      }
      uVar7 = uVar4 * 2;
      if (uVar4 == 0) {
        uVar7 = 1;
      }
      if (uVar7 < uVar11) {
        uVar7 = uVar11;
      }
      if (uVar7 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = FUN_18062b420(system_memory_pool_ptr,uVar7 * 8,*(int8_t *)(lVar1 + 0x5cb0));
        lVar5 = *plVar3;
        lVar8 = *(longlong *)(lVar1 + 0x5ca0);
      }
      if (lVar5 == lVar8) {
        if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
          memset(lVar2,0,uVar6 * 8);
        }
        if (*plVar3 == 0) {
          *plVar3 = lVar2;
          *(ulonglong *)(lVar1 + 0x5ca8) = lVar2 + uVar7 * 8;
          *(longlong *)(lVar1 + 0x5ca0) = lVar2;
          return;
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar5,lVar8 - lVar5);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802f3e30(longlong param_1,uint64_t param_2,longlong param_3)
void FUN_1802f3e30(longlong param_1,uint64_t param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint64_t unaff_RBX;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong unaff_RBP;
  uint64_t unaff_RSI;
  ulonglong uVar7;
  longlong lVar8;
  longlong unaff_RDI;
  int iVar9;
  longlong in_R11;
  int unaff_R12D;
  longlong unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  ulonglong uVar10;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
  uVar10 = unaff_RBP & 0xffffffff;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R14;
  do {
    if (*(longlong *)(param_1 + uVar10) == unaff_R13) {
      *(uint64_t *)(param_1 + uVar10) =
           *(uint64_t *)(param_1 + -8 + (param_3 - param_1 >> 3) * 8);
      lVar5 = *(longlong *)(unaff_RDI + 0x228);
      param_3 = *(longlong *)(unaff_RDI + 0x220);
      uVar7 = lVar5 - param_3 >> 3;
      uVar4 = uVar7 - 1;
      if (uVar7 < uVar4) {
        if (*(longlong *)(unaff_RDI + 0x230) - lVar5 >> 3 == -1) {
                    // WARNING: Subroutine does not return
          memset(lVar5,0,0xfffffffffffffff8);
        }
        if (uVar7 == 0) {
          uVar7 = 1;
        }
        else {
          uVar7 = uVar7 * 2;
        }
        if (uVar7 < uVar4) {
          uVar7 = uVar4;
        }
        if (uVar7 != 0) {
          unaff_RBP = FUN_18062b420(system_memory_pool_ptr,uVar7 * 8,*(int8_t *)(unaff_RDI + 0x238));
          param_3 = *(longlong *)(unaff_RDI + 0x220);
          lVar5 = *(longlong *)(unaff_RDI + 0x228);
        }
        if (param_3 != lVar5) {
                    // WARNING: Subroutine does not return
          memmove(unaff_RBP,param_3,lVar5 - param_3);
        }
                    // WARNING: Subroutine does not return
        memset(unaff_RBP,0,0xfffffffffffffff8);
      }
      param_3 = param_3 + uVar4 * 8;
      *(longlong *)(unaff_RDI + 0x228) = param_3;
    }
    param_1 = *(longlong *)(unaff_RDI + 0x220);
    unaff_R12D = unaff_R12D + 1;
    uVar10 = uVar10 + 8;
  } while ((ulonglong)(longlong)unaff_R12D < (ulonglong)(param_3 - param_1 >> 3));
  lVar5 = *(longlong *)(unaff_R13 + 0x18);
  lVar1 = *(longlong *)(unaff_RDI + 0x20);
  if ((int)(*(longlong *)(lVar5 + 0x228) - *(longlong *)(lVar5 + 0x220) >> 3) == 0) {
    plVar3 = *(longlong **)(lVar1 + 0x5c98);
    iVar9 = (int)(*(longlong *)(lVar1 + 0x5ca0) - (longlong)plVar3 >> 3);
    if (0 < iVar9) {
      uVar10 = unaff_RBP;
      while (*plVar3 != lVar5) {
        uVar10 = (ulonglong)((int)uVar10 + 1);
        unaff_RBP = unaff_RBP + 1;
        plVar3 = plVar3 + 1;
        if ((longlong)iVar9 <= (longlong)unaff_RBP) {
          return;
        }
      }
      plVar3 = (longlong *)(lVar1 + 0x5c98);
      uVar4 = (longlong)iVar9 - 1;
      *(uint64_t *)(*(longlong *)(lVar1 + 0x5c98) + (longlong)(int)uVar10 * 8) =
           *(uint64_t *)(*(longlong *)(lVar1 + 0x5c98) + uVar4 * 8);
      lVar8 = *(longlong *)(lVar1 + 0x5ca0);
      lVar5 = *plVar3;
      uVar10 = lVar8 - lVar5 >> 3;
      if (uVar4 <= uVar10) {
        *(ulonglong *)(lVar1 + 0x5ca0) = lVar5 + uVar4 * 8;
        return;
      }
      uVar7 = uVar4 - uVar10;
      if (uVar7 <= (ulonglong)(*(longlong *)(lVar1 + 0x5ca8) - lVar8 >> 3)) {
        if (uVar7 == 0) {
          *(longlong *)(lVar1 + 0x5ca0) = lVar8;
          return;
        }
                    // WARNING: Subroutine does not return
        memset(lVar8,0,uVar7 * 8);
      }
      uVar6 = uVar10 * 2;
      if (uVar10 == 0) {
        uVar6 = 1;
      }
      if (uVar6 < uVar4) {
        uVar6 = uVar4;
      }
      if (uVar6 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = FUN_18062b420(system_memory_pool_ptr,uVar6 * 8,*(int8_t *)(lVar1 + 0x5cb0));
        lVar5 = *plVar3;
        lVar8 = *(longlong *)(lVar1 + 0x5ca0);
      }
      if (lVar5 == lVar8) {
        if (uVar7 != 0) {
                    // WARNING: Subroutine does not return
          memset(lVar2,0,uVar7 * 8);
        }
        if (*plVar3 == 0) {
          *plVar3 = lVar2;
          *(ulonglong *)(lVar1 + 0x5ca8) = lVar2 + uVar6 * 8;
          *(longlong *)(lVar1 + 0x5ca0) = lVar2;
          return;
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar5,lVar8 - lVar5);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802f3fa2(void)
void FUN_1802f3fa2(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong unaff_RBP;
  ulonglong uVar7;
  longlong lVar8;
  longlong unaff_RDI;
  int iVar9;
  longlong lVar10;
  longlong unaff_R13;
  
  lVar10 = *(longlong *)(unaff_R13 + 0x18);
  lVar1 = *(longlong *)(unaff_RDI + 0x20);
  if ((int)(*(longlong *)(lVar10 + 0x228) - *(longlong *)(lVar10 + 0x220) >> 3) == 0) {
    plVar3 = *(longlong **)(lVar1 + 0x5c98);
    iVar9 = (int)(*(longlong *)(lVar1 + 0x5ca0) - (longlong)plVar3 >> 3);
    if (0 < iVar9) {
      uVar4 = unaff_RBP;
      while (*plVar3 != lVar10) {
        uVar4 = (ulonglong)((int)uVar4 + 1);
        unaff_RBP = unaff_RBP + 1;
        plVar3 = plVar3 + 1;
        if ((longlong)iVar9 <= (longlong)unaff_RBP) {
          return;
        }
      }
      plVar3 = (longlong *)(lVar1 + 0x5c98);
      uVar5 = (longlong)iVar9 - 1;
      *(uint64_t *)(*(longlong *)(lVar1 + 0x5c98) + (longlong)(int)uVar4 * 8) =
           *(uint64_t *)(*(longlong *)(lVar1 + 0x5c98) + uVar5 * 8);
      lVar8 = *(longlong *)(lVar1 + 0x5ca0);
      lVar10 = *plVar3;
      uVar4 = lVar8 - lVar10 >> 3;
      if (uVar5 <= uVar4) {
        *(ulonglong *)(lVar1 + 0x5ca0) = lVar10 + uVar5 * 8;
        return;
      }
      uVar7 = uVar5 - uVar4;
      if (uVar7 <= (ulonglong)(*(longlong *)(lVar1 + 0x5ca8) - lVar8 >> 3)) {
        if (uVar7 != 0) {
                    // WARNING: Subroutine does not return
          memset(lVar8,0,uVar7 * 8);
        }
        *(longlong *)(lVar1 + 0x5ca0) = lVar8;
        return;
      }
      uVar6 = uVar4 * 2;
      if (uVar4 == 0) {
        uVar6 = 1;
      }
      if (uVar6 < uVar5) {
        uVar6 = uVar5;
      }
      if (uVar6 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = FUN_18062b420(system_memory_pool_ptr,uVar6 * 8,*(int8_t *)(lVar1 + 0x5cb0));
        lVar10 = *plVar3;
        lVar8 = *(longlong *)(lVar1 + 0x5ca0);
      }
      if (lVar10 != lVar8) {
                    // WARNING: Subroutine does not return
        memmove(lVar2,lVar10,lVar8 - lVar10);
      }
      if (uVar7 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar2,0,uVar7 * 8);
      }
      if (*plVar3 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *plVar3 = lVar2;
      *(ulonglong *)(lVar1 + 0x5ca8) = lVar2 + uVar6 * 8;
      *(longlong *)(lVar1 + 0x5ca0) = lVar2;
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802f3fcf(uint64_t param_1,longlong param_2)
void FUN_1802f3fcf(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong unaff_RBP;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong in_R10;
  
  plVar2 = *(longlong **)(in_R10 + 0x5c98);
  iVar8 = (int)(*(longlong *)(in_R10 + 0x5ca0) - (longlong)plVar2 >> 3);
  if (iVar8 < 1) {
    return;
  }
  uVar3 = unaff_RBP;
  while (*plVar2 != param_2) {
    uVar3 = (ulonglong)((int)uVar3 + 1);
    unaff_RBP = unaff_RBP + 1;
    plVar2 = plVar2 + 1;
    if ((longlong)iVar8 <= (longlong)unaff_RBP) {
      return;
    }
  }
  plVar2 = (longlong *)(in_R10 + 0x5c98);
  uVar4 = (longlong)iVar8 - 1;
  *(uint64_t *)(*(longlong *)(in_R10 + 0x5c98) + (longlong)(int)uVar3 * 8) =
       *(uint64_t *)(*(longlong *)(in_R10 + 0x5c98) + uVar4 * 8);
  lVar7 = *(longlong *)(in_R10 + 0x5ca0);
  lVar9 = *plVar2;
  uVar3 = lVar7 - lVar9 >> 3;
  if (uVar4 <= uVar3) {
    *(ulonglong *)(in_R10 + 0x5ca0) = lVar9 + uVar4 * 8;
    return;
  }
  uVar6 = uVar4 - uVar3;
  if (uVar6 <= (ulonglong)(*(longlong *)(in_R10 + 0x5ca8) - lVar7 >> 3)) {
    if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar7,0,uVar6 * 8);
    }
    *(longlong *)(in_R10 + 0x5ca0) = lVar7;
    return;
  }
  uVar5 = uVar3 * 2;
  if (uVar3 == 0) {
    uVar5 = 1;
  }
  if (uVar5 < uVar4) {
    uVar5 = uVar4;
  }
  if (uVar5 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(system_memory_pool_ptr,uVar5 * 8,*(int8_t *)(in_R10 + 0x5cb0));
    lVar9 = *plVar2;
    lVar7 = *(longlong *)(in_R10 + 0x5ca0);
  }
  if (lVar9 != lVar7) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,lVar9,lVar7 - lVar9);
  }
  if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,uVar6 * 8);
  }
  if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *plVar2 = lVar1;
  *(ulonglong *)(in_R10 + 0x5ca8) = lVar1 + uVar5 * 8;
  *(longlong *)(in_R10 + 0x5ca0) = lVar1;
  return;
}



float * FUN_1802f4040(longlong *param_1,float *param_2,char param_3,char param_4)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int32_t uVar14;
  int32_t extraout_XMM0_Da;
  longlong *plStackX_8;
  longlong *plStackX_10;
  void *puStack_78;
  longlong lStack_70;
  uint uStack_68;
  int32_t uStack_60;
  longlong lStack_58;
  longlong lStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  
  uVar11 = 0;
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 3;
  plStackX_8 = param_1;
  FUN_18005ea90(&lStack_58,&plStackX_8);
  if (param_3 != '\0') {
    FUN_1802e8c60(param_1,&lStack_58);
  }
  param_2[0] = 1e+08;
  param_2[1] = 1e+08;
  param_2[2] = 1e+08;
  param_2[3] = 3.4028235e+38;
  param_2[4] = -1e+08;
  param_2[5] = -1e+08;
  param_2[6] = -1e+08;
  param_2[7] = 3.4028235e+38;
  param_2[0xc] = 0.0;
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  param_2[10] = 0.0;
  param_2[0xb] = 3.4028235e+38;
  lVar6 = lStack_58;
  uVar12 = uVar11;
  uVar13 = uVar11;
  if (lStack_50 - lStack_58 >> 3 != 0) {
    do {
      if (param_4 == '\0') {
        uVar8 = *(ulonglong *)(*(longlong *)(uVar12 + lVar6) + 0x110);
      }
      else {
        plVar3 = *(longlong **)(*(longlong *)(uVar12 + lVar6) + 0x110);
        uVar8 = uVar11;
        plStackX_10 = plVar3;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3);
          uVar14 = FUN_1806279c0(&puStack_78,plVar3 + 2);
          while ((0 < (int)uStack_68 &&
                 (lVar6 = strstr(lStack_70,&system_data_ff10), uVar14 = extraout_XMM0_Da, lVar6 != 0)))
          {
            iVar10 = 6;
            iVar5 = (int)lVar6 - (int)lStack_70;
            if (uStack_68 < iVar5 + 6U) {
              iVar10 = uStack_68 - iVar5;
            }
            uVar9 = iVar5 + iVar10;
            if (uVar9 < uStack_68) {
              lVar6 = (longlong)(int)uVar9;
              do {
                *(int8_t *)((lStack_70 - iVar10) + lVar6) = *(int8_t *)(lStack_70 + lVar6);
                uVar9 = uVar9 + 1;
                lVar6 = lVar6 + 1;
              } while (uVar9 < uStack_68);
            }
            uStack_68 = uStack_68 - iVar10;
            *(int8_t *)((ulonglong)uStack_68 + lStack_70) = 0;
          }
          puVar7 = (ulonglong *)FUN_1800b3430(uVar14,&plStackX_8,&puStack_78,1);
          uVar8 = *puVar7;
          if (plStackX_8 != (longlong *)0x0) {
            (**(code **)(*plStackX_8 + 0x38))();
          }
          puStack_78 = &system_data_buffer_ptr;
          if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_70 = 0;
          uStack_60 = 0;
          puStack_78 = &system_state_ptr;
        }
        lVar6 = lStack_58;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3);
          lVar6 = lStack_58;
        }
      }
      if ((uVar8 != 0) && (*(longlong *)(uVar8 + 0xa8) != 0)) {
        lVar4 = *(longlong *)(*(longlong *)(uVar8 + 0xa8) + 0x20);
        fVar1 = *(float *)(lVar4 + 0xa0);
        fVar2 = *(float *)(lVar4 + 0xb0);
        if (fVar1 <= fVar2) {
          if (fVar1 < *param_2) {
            *param_2 = fVar1;
          }
          if (*(float *)(lVar4 + 0xa4) < param_2[1]) {
            param_2[1] = *(float *)(lVar4 + 0xa4);
          }
          if (*(float *)(lVar4 + 0xa8) < param_2[2]) {
            param_2[2] = *(float *)(lVar4 + 0xa8);
          }
          if (param_2[4] <= fVar2 && fVar2 != param_2[4]) {
            param_2[4] = fVar2;
          }
          fVar1 = *(float *)(lVar4 + 0xb4);
          if (param_2[5] <= fVar1 && fVar1 != param_2[5]) {
            param_2[5] = fVar1;
          }
          fVar1 = *(float *)(lVar4 + 0xb8);
          if (param_2[6] <= fVar1 && fVar1 != param_2[6]) {
            param_2[6] = fVar1;
          }
        }
      }
      uVar9 = (int)uVar13 + 1;
      uVar12 = uVar12 + 8;
      uVar13 = (ulonglong)uVar9;
    } while ((ulonglong)(longlong)(int)uVar9 < (ulonglong)(lStack_50 - lVar6 >> 3));
  }
  if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802f4300(longlong *param_1)
void FUN_1802f4300(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((ulonglong)(param_1[2] - *param_1 >> 3) < 0x400) {
    lVar2 = FUN_18062b420(system_memory_pool_ptr,0x2000,(char)param_1[3]);
    lVar1 = *param_1;
    if (lVar1 != param_1[1]) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar1,param_1[1] - lVar1);
    }
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar2 + 0x2000;
  }
  return;
}






// 函数: void FUN_1802f432d(void)
void FUN_1802f432d(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RBX;
  
  lVar2 = FUN_18062b420();
  lVar1 = *unaff_RBX;
  if (lVar1 != unaff_RBX[1]) {
                    // WARNING: Subroutine does not return
    memmove(lVar2,lVar1,unaff_RBX[1] - lVar1);
  }
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RBX = lVar2;
  unaff_RBX[1] = lVar2;
  unaff_RBX[2] = lVar2 + 0x2000;
  return;
}






// 函数: void FUN_1802f4392(void)
void FUN_1802f4392(void)

{
  return;
}



uint64_t * FUN_1802f43a0(uint64_t *param_1,longlong param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  longlong lVar10;
  int8_t auStackX_8 [8];
  
  puVar8 = (uint64_t *)param_1[2];
  puVar9 = param_1;
  if (puVar8 != (uint64_t *)0x0) {
    do {
      if (*(int *)(param_2 + 0x10) == 0) {
        puVar7 = (uint64_t *)puVar8[1];
        bVar2 = false;
      }
      else {
        if (*(int *)(puVar8 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar3 = *(byte **)(param_2 + 8);
          lVar10 = puVar8[5] - (longlong)pbVar3;
          do {
            uVar5 = (uint)pbVar3[lVar10];
            iVar6 = *pbVar3 - uVar5;
            if (*pbVar3 != uVar5) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar5 != 0);
          bVar2 = 0 < iVar6;
          if (iVar6 < 1) {
            puVar7 = (uint64_t *)puVar8[1];
            goto LAB_1802f4417;
          }
        }
        puVar7 = (uint64_t *)*puVar8;
      }
LAB_1802f4417:
      if (bVar2) {
        puVar8 = puVar9;
      }
      puVar9 = puVar8;
      puVar8 = puVar7;
    } while (puVar7 != (uint64_t *)0x0);
    puVar8 = (uint64_t *)0x0;
  }
  if (puVar9 != param_1) {
    if (*(int *)(puVar9 + 6) == 0) {
LAB_1802f4467:
      return puVar9 + 8;
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      pbVar3 = (byte *)puVar9[5];
      puVar8 = (uint64_t *)(*(longlong *)(param_2 + 8) - (longlong)pbVar3);
      do {
        bVar1 = *pbVar3;
        uVar5 = (uint)pbVar3[(longlong)puVar8];
        if (bVar1 != uVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_1802f4467;
    }
  }
  plVar4 = (longlong *)FUN_1802f4910(param_1,auStackX_8,puVar8,puVar9,param_2);
  return (uint64_t *)(*plVar4 + 0x40);
}



uint64_t *
FUN_1802f43bc(uint64_t param_1,longlong param_2,uint64_t *param_3,uint64_t *param_4)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong unaff_RBX;
  uint64_t *unaff_RSI;
  uint64_t *puVar7;
  longlong lVar8;
  
  do {
    if (*(int *)(param_2 + 0x10) == 0) {
      puVar7 = (uint64_t *)param_3[1];
      bVar2 = false;
    }
    else {
      if (*(int *)(param_3 + 6) == 0) {
        bVar2 = true;
      }
      else {
        pbVar3 = *(byte **)(unaff_RBX + 8);
        lVar8 = param_3[5] - (longlong)pbVar3;
        do {
          uVar5 = (uint)pbVar3[lVar8];
          iVar6 = *pbVar3 - uVar5;
          if (*pbVar3 != uVar5) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar5 != 0);
        bVar2 = 0 < iVar6;
        if (iVar6 < 1) {
          puVar7 = (uint64_t *)param_3[1];
          goto LAB_1802f4417;
        }
      }
      puVar7 = (uint64_t *)*param_3;
    }
LAB_1802f4417:
    if (bVar2) {
      param_3 = param_4;
    }
    param_4 = param_3;
    param_3 = puVar7;
  } while (puVar7 != (uint64_t *)0x0);
  if (param_4 != unaff_RSI) {
    if (*(int *)(param_4 + 6) == 0) {
LAB_1802f4467:
      return param_4 + 8;
    }
    if (*(int *)(unaff_RBX + 0x10) != 0) {
      pbVar3 = (byte *)param_4[5];
      lVar8 = *(longlong *)(unaff_RBX + 8) - (longlong)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar5 = (uint)pbVar3[lVar8];
        if (bVar1 != uVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_1802f4467;
    }
  }
  plVar4 = (longlong *)FUN_1802f4910();
  return (uint64_t *)(*plVar4 + 0x40);
}



longlong FUN_1802f442a(void)

{
  byte bVar1;
  byte *pbVar2;
  longlong *plVar3;
  uint uVar4;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong lVar5;
  longlong in_R9;
  
  if (in_R9 != unaff_RSI) {
    if (*(int *)(in_R9 + 0x30) == 0) {
LAB_1802f4467:
      return in_R9 + 0x40;
    }
    if (*(int *)(unaff_RBX + 0x10) != 0) {
      pbVar2 = *(byte **)(in_R9 + 0x28);
      lVar5 = *(longlong *)(unaff_RBX + 8) - (longlong)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar4 = (uint)pbVar2[lVar5];
        if (bVar1 != uVar4) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar4 != 0);
      if ((int)(bVar1 - uVar4) < 1) goto LAB_1802f4467;
    }
  }
  plVar3 = (longlong *)FUN_1802f4910();
  return *plVar3 + 0x40;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802f44a0(longlong *param_1,ulonglong param_2,uint64_t *param_3)
void FUN_1802f44a0(longlong *param_1,ulonglong param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  uint64_t *puVar6;
  
  puVar6 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  uVar3 = (longlong)puVar6 - (longlong)puVar4 >> 3;
  if (param_2 <= uVar3) {
    param_1[1] = (longlong)(puVar4 + param_2);
    return;
  }
  param_2 = param_2 - uVar3;
  if (param_2 <= (ulonglong)(param_1[2] - (longlong)puVar6 >> 3)) {
    if (param_2 != 0) {
      uVar1 = *param_3;
      for (uVar3 = param_2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
      }
      puVar6 = (uint64_t *)param_1[1];
    }
    param_1[1] = (longlong)(puVar6 + param_2);
    return;
  }
  uVar5 = uVar3 * 2;
  if (uVar3 == 0) {
    uVar5 = 1;
  }
  if (uVar5 < uVar3 + param_2) {
    uVar5 = uVar3 + param_2;
  }
  if (uVar5 == 0) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    puVar2 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,uVar5 * 8,(char)param_1[3]);
    puVar4 = (uint64_t *)*param_1;
    puVar6 = (uint64_t *)param_1[1];
  }
  if (puVar4 != puVar6) {
                    // WARNING: Subroutine does not return
    memmove(puVar2,puVar4,(longlong)puVar6 - (longlong)puVar4);
  }
  if (param_2 != 0) {
    uVar1 = *param_3;
    puVar4 = puVar2;
    for (uVar3 = param_2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
    }
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (longlong)puVar2;
  param_1[2] = (longlong)(puVar2 + uVar5);
  param_1[1] = (longlong)(puVar2 + param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802f44e7(longlong param_1,longlong param_2)
void FUN_1802f44e7(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong unaff_RBX;
  ulonglong uVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  uint64_t *puVar5;
  uint64_t *unaff_R15;
  
  uVar4 = param_1 * 2;
  if (param_1 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < (ulonglong)(param_1 + unaff_RBX)) {
    uVar4 = param_1 + unaff_RBX;
  }
  if (uVar4 == 0) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    puVar2 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,uVar4 * 8,(char)unaff_RSI[3]);
    param_2 = *unaff_RSI;
    unaff_RDI = unaff_RSI[1];
  }
  if (param_2 != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(puVar2,param_2,unaff_RDI - param_2);
  }
  if (unaff_RBX != 0) {
    uVar1 = *unaff_R15;
    puVar5 = puVar2;
    for (lVar3 = unaff_RBX; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    }
  }
  if (*unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RSI = (longlong)puVar2;
  unaff_RSI[2] = (longlong)(puVar2 + uVar4);
  unaff_RSI[1] = (longlong)(puVar2 + unaff_RBX);
  return;
}






// 函数: void FUN_1802f45a0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_1802f45a0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong unaff_RBX;
  longlong unaff_RSI;
  uint64_t *unaff_RDI;
  
  if (unaff_RBX != 0) {
    uVar1 = *param_3;
    for (lVar2 = unaff_RBX; lVar2 != 0; lVar2 = lVar2 + -1) {
      *unaff_RDI = uVar1;
      unaff_RDI = unaff_RDI + 1;
    }
    unaff_RDI = *(uint64_t **)(unaff_RSI + 8);
  }
  *(uint64_t **)(unaff_RSI + 8) = unaff_RDI + unaff_RBX;
  return;
}






// 函数: void FUN_1802f45e0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802f45e0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1802f4b20(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



longlong * FUN_1802f4600(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  
  if (param_1 != param_2) {
    while ((longlong *)*param_1 != param_3) {
      iVar1 = (**(code **)(*(longlong *)*param_1 + 0x98))();
      if ((iVar1 == 3) && (*(longlong **)(*param_1 + 0x48) == param_3)) {
        return param_1;
      }
      param_1 = param_1 + 1;
      if (param_1 == param_2) {
        return param_1;
      }
    }
  }
  return param_1;
}






// 函数: void FUN_1802f4660(uint64_t *param_1)
void FUN_1802f4660(uint64_t *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x38))();
    }
  }
  return;
}






// 函数: void FUN_1802f46b0(longlong *param_1)
void FUN_1802f46b0(longlong *param_1)

{
  uint64_t *puVar1;
  longlong *plVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  longlong *plVar6;
  
  if ((ulonglong)(param_1[2] - *param_1 >> 3) < 0x100) {
    puVar4 = (uint64_t *)((longlong)param_1 + param_1[0x103] + 0x18);
    param_1[0x103] = param_1[0x103] + 0x800;
    puVar5 = (uint64_t *)*param_1;
    puVar1 = (uint64_t *)param_1[1];
    puVar3 = puVar4;
    if (puVar5 != puVar1) {
      do {
        *puVar3 = *puVar5;
        puVar3 = puVar3 + 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (puVar5 != puVar1);
      plVar2 = (longlong *)param_1[1];
      for (plVar6 = (longlong *)*param_1; plVar6 != plVar2; plVar6 = plVar6 + 1) {
        if ((longlong *)*plVar6 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar6 + 0x38))();
        }
      }
    }
    *param_1 = (longlong)puVar4;
    param_1[1] = (longlong)puVar3;
    param_1[2] = (longlong)(puVar4 + 0x100);
  }
  return;
}






