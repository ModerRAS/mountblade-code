#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part030_sub002_sub002.c - 1 个函数

// 函数: void FUN_1808b8adb(void)
void FUN_1808b8adb(void)

{
  return;
}



uint64_t FUN_1808b8af0(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  
  lVar1 = (**(code **)*param_2)(param_2);
  if ((((*(int *)(lVar1 + 0x70) != 0) || (*(int *)(lVar1 + 0x74) != 0)) ||
      (*(int *)(lVar1 + 0x78) != 0)) || (*(int *)(lVar1 + 0x7c) != 0)) {
    lVar1 = (**(code **)*param_2)(param_2);
    lVar1 = FUN_18085fdf0(*(uint64_t *)(param_1 + 0x38),lVar1 + 0x70);
    if (lVar1 != 0) {
      uVar2 = func_0x0001808d5d40(lVar1,param_2 + 0x11);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = (**(code **)param_2[0x11])
                        (param_2 + 0x11,lVar1,*(int32_t *)(lVar1 + 0x28),
                         *(int32_t *)(lVar1 + 0x28));
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808b8b80(int64_t *param_1,int32_t *param_2,uint64_t *param_3)

{
  uint uVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  bool bVar6;
  int64_t *plVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  int64_t lVar11;
  int iVar12;
  int *piVar13;
  uint64_t *puVar14;
  int32_t auStackX_8 [2];
  uint64_t *apuStackX_18 [2];
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  lVar2 = param_1[5];
  uVar1 = *(uint *)((int64_t)param_3 + 0x2dc);
  apuStackX_18[0] = param_3;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  plVar7 = (int64_t *)func_0x000180851be0(param_1 + 6,param_2);
  if (plVar7 == (int64_t *)0x0) {
    plVar7 = (int64_t *)func_0x000180851be0(param_1,param_2);
  }
  puVar14 = (uint64_t *)0x0;
  if (plVar7 == (int64_t *)0x0) {
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar2);
    }
  }
  else {
    puVar8 = puVar14;
    if (((*(int *)((int64_t)plVar7 + 0x24) != 0) && ((int)plVar7[1] != 0)) &&
       (iVar12 = *(int *)(*plVar7 + (int64_t)(int)((int)plVar7[1] - 1U & uVar1) * 4), iVar12 != -1)
       ) {
      lVar11 = plVar7[2];
      do {
        lVar10 = (int64_t)iVar12;
        if (*(uint *)(lVar11 + lVar10 * 0x10) == uVar1) {
          puVar8 = *(uint64_t **)(lVar11 + 8 + lVar10 * 0x10);
          break;
        }
        iVar12 = *(int *)(lVar11 + 4 + lVar10 * 0x10);
      } while (iVar12 != -1);
    }
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar2);
    }
    if (puVar8 != (uint64_t *)0x0) {
      return 0x1f;
    }
  }
  plVar7 = param_1 + 6;
  if ((int)param_1[0xc] < 1) {
    plVar7 = param_1;
  }
  lVar2 = plVar7[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  puVar8 = (uint64_t *)func_0x000180851be0(plVar7,param_2);
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  bVar6 = false;
  puVar9 = puVar14;
  if (puVar8 == (uint64_t *)0x0) {
    puVar9 = (uint64_t *)
             FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x58,&unknown_var_2080_ptr,0x124,0,0,1);
    if (puVar9 == (uint64_t *)0x0) {
      iVar12 = 0x26;
      puVar9 = puVar14;
      goto LAB_1808b8e6f;
    }
    *puVar9 = 0;
    puVar9[1] = 0;
    bVar6 = true;
    puVar9[2] = 0;
    puVar9[3] = 0;
    *(int32_t *)(puVar9 + 4) = 0xffffffff;
    *(int32_t *)((int64_t)puVar9 + 0x24) = 0;
    puVar9[5] = 0;
    puVar9[6] = 0;
    *(int32_t *)(puVar9 + 7) = 0;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(int32_t *)(puVar9 + 8) = *param_2;
    *(int32_t *)((int64_t)puVar9 + 0x44) = uVar3;
    *(int32_t *)(puVar9 + 9) = uVar4;
    *(int32_t *)((int64_t)puVar9 + 0x4c) = uVar5;
    puVar9[10] = 0;
    puVar8 = puVar9;
  }
  auStackX_8[0] = *(int32_t *)((int64_t)param_3 + 0x2dc);
  iVar12 = FUN_1807d28c0(puVar8,auStackX_8,apuStackX_18);
  if (iVar12 != 0) goto LAB_1808b8e6f;
  if (!bVar6) {
    return 0;
  }
  uStack_48 = *(uint *)(puVar8 + 8);
  uStack_44 = *(uint *)((int64_t)puVar8 + 0x44);
  uStack_40 = *(uint *)(puVar8 + 9);
  uStack_3c = *(uint *)((int64_t)puVar8 + 0x4c);
  lVar2 = plVar7[5];
  apuStackX_18[0] = puVar8;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  iVar12 = FUN_180851a40(plVar7);
  if (iVar12 == 0) {
    if ((int)plVar7[1] != 0) {
      lVar11 = (int64_t)
               (int)((uStack_48 ^ uStack_44 ^ uStack_3c ^ uStack_40) & (int)plVar7[1] - 1U);
      piVar13 = (int *)(*plVar7 + lVar11 * 4);
      iVar12 = *(int *)(*plVar7 + lVar11 * 4);
      if (iVar12 != -1) {
        lVar11 = plVar7[2];
        do {
          lVar10 = (int64_t)iVar12 * 0x20;
          if ((*(int64_t *)(lVar10 + lVar11) == CONCAT44(uStack_44,uStack_48)) &&
             (*(int64_t *)(lVar10 + 8 + lVar11) == CONCAT44(uStack_3c,uStack_40)))
          goto FUN_1808b8e3b;
          piVar13 = (int *)(lVar11 + 0x10 + lVar10);
          iVar12 = *piVar13;
        } while (iVar12 != -1);
      }
      iVar12 = FUN_18084e8f0(plVar7,&uStack_48,apuStackX_18,piVar13);
      if (iVar12 == 0) goto LAB_1808b8e11;
      goto LAB_1808b8e0d;
    }
FUN_1808b8e3b:
    iVar12 = 0x1c;
  }
  else {
LAB_1808b8e0d:
    if (iVar12 == 0) {
LAB_1808b8e11:
      if (lVar2 == 0) {
        return 0;
      }
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar2);
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (iVar12 == 0) {
    return 0;
  }
  apuStackX_18[0] =
       (uint64_t *)CONCAT44(apuStackX_18[0]._4_4_,*(int32_t *)((int64_t)param_3 + 0x2dc));
  func_0x0001807d2ed0(puVar8,apuStackX_18);
LAB_1808b8e6f:
  if (puVar9 == (uint64_t *)0x0) {
    return iVar12;
  }
  FUN_1808bb9e0(puVar9);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar9,&unknown_var_2144_ptr,0xc6,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808b8bf8(void)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  bool bVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t *unaff_RSI;
  int iVar10;
  int *piVar11;
  int iVar12;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t *unaff_R14;
  int32_t *unaff_R15;
  bool in_ZF;
  char in_SF;
  char in_OF;
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  int32_t in_stack_00000090;
  int64_t *in_stack_000000a0;
  
  if (in_ZF || in_OF != in_SF) {
    unaff_R14 = unaff_RSI;
  }
  lVar1 = unaff_R14[5];
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  plVar6 = (int64_t *)func_0x000180851be0(unaff_R14);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  bVar5 = false;
  iVar12 = (int)unaff_R12;
  plVar7 = (int64_t *)unaff_R12;
  if (plVar6 == (int64_t *)0x0) {
    plVar7 = (int64_t *)
             FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x58,&unknown_var_2080_ptr,0x124);
    if (plVar7 == (int64_t *)0x0) {
      iVar10 = 0x26;
      plVar7 = (int64_t *)unaff_R12;
      goto LAB_1808b8e6f;
    }
    *plVar7 = unaff_R12;
    plVar7[1] = unaff_R12;
    bVar5 = true;
    plVar7[2] = unaff_R12;
    plVar7[3] = unaff_R12;
    *(int32_t *)(plVar7 + 4) = 0xffffffff;
    *(int *)((int64_t)plVar7 + 0x24) = iVar12;
    plVar7[5] = unaff_R12;
    plVar7[6] = unaff_R12;
    *(int *)(plVar7 + 7) = iVar12;
    uVar2 = unaff_R15[1];
    uVar3 = unaff_R15[2];
    uVar4 = unaff_R15[3];
    *(int32_t *)(plVar7 + 8) = *unaff_R15;
    *(int32_t *)((int64_t)plVar7 + 0x44) = uVar2;
    *(int32_t *)(plVar7 + 9) = uVar3;
    *(int32_t *)((int64_t)plVar7 + 0x4c) = uVar4;
    plVar7[10] = unaff_R12;
    plVar6 = plVar7;
  }
  in_stack_00000090 = *(int32_t *)(unaff_R13 + 0x2dc);
  iVar10 = FUN_1807d28c0(plVar6,&stack0x00000090,&stack0x000000a0);
  if (iVar10 != 0) goto LAB_1808b8e6f;
  if (!bVar5) {
    return iVar12;
  }
  uStack0000000000000040 = *(uint *)(plVar6 + 8);
  uStack0000000000000044 = *(uint *)((int64_t)plVar6 + 0x44);
  uStack0000000000000048 = *(uint *)(plVar6 + 9);
  uStack000000000000004c = *(uint *)((int64_t)plVar6 + 0x4c);
  lVar1 = unaff_R14[5];
  in_stack_000000a0 = plVar6;
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  iVar10 = FUN_180851a40(unaff_R14);
  if (iVar10 == 0) {
    if ((int)unaff_R14[1] != 0) {
      lVar9 = (int64_t)
              (int)((uStack0000000000000040 ^ uStack0000000000000044 ^ uStack000000000000004c ^
                    uStack0000000000000048) & (int)unaff_R14[1] - 1U);
      piVar11 = (int *)(*unaff_R14 + lVar9 * 4);
      iVar10 = *(int *)(*unaff_R14 + lVar9 * 4);
      if (iVar10 != -1) {
        lVar9 = unaff_R14[2];
        do {
          lVar8 = (int64_t)iVar10 * 0x20;
          if ((*(int64_t *)(lVar8 + lVar9) ==
               CONCAT44(uStack0000000000000044,uStack0000000000000040)) &&
             (*(int64_t *)(lVar8 + 8 + lVar9) ==
              CONCAT44(uStack000000000000004c,uStack0000000000000048))) goto FUN_1808b8e3b;
          piVar11 = (int *)(lVar9 + 0x10 + lVar8);
          iVar10 = *piVar11;
        } while (iVar10 != -1);
      }
      iVar10 = FUN_18084e8f0(unaff_R14,&stack0x00000040,&stack0x000000a0,piVar11);
      if (iVar10 == 0) goto LAB_1808b8e11;
      goto LAB_1808b8e0d;
    }
FUN_1808b8e3b:
    iVar10 = 0x1c;
  }
  else {
LAB_1808b8e0d:
    if (iVar10 == 0) {
LAB_1808b8e11:
      if (lVar1 == 0) {
        return iVar12;
      }
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
  }
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  if (iVar10 == 0) {
    return iVar12;
  }
  in_stack_000000a0 =
       (int64_t *)CONCAT44(in_stack_000000a0._4_4_,*(int32_t *)(unaff_R13 + 0x2dc));
  func_0x0001807d2ed0(plVar6,&stack0x000000a0);
LAB_1808b8e6f:
  if (plVar7 == (int64_t *)0x0) {
    return iVar10;
  }
  FUN_1808bb9e0(plVar7);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar7,&unknown_var_2144_ptr,0xc6,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808b8c1a(uint64_t param_1,uint64_t param_2,int64_t *param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  bool bVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t unaff_RBX;
  int64_t *unaff_RSI;
  uint unaff_EDI;
  int iVar9;
  int64_t lVar10;
  int *piVar11;
  int iVar12;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t *unaff_R14;
  int32_t *unaff_R15;
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  int32_t in_stack_00000090;
  int64_t *in_stack_000000a0;
  
  iVar12 = (int)unaff_R12;
  lVar10 = unaff_R12;
  if (((*(int *)((int64_t)param_3 + 0x24) != iVar12) && ((int)param_3[1] != 0)) &&
     (iVar9 = *(int *)(*param_3 + (int64_t)(int)((int)param_3[1] - 1U & unaff_EDI) * 4),
     iVar9 != -1)) {
    lVar8 = param_3[2];
    do {
      lVar5 = (int64_t)iVar9;
      if (*(uint *)(lVar8 + lVar5 * 0x10) == unaff_EDI) {
        lVar10 = *(int64_t *)(lVar8 + 8 + lVar5 * 0x10);
        break;
      }
      iVar9 = *(int *)(lVar8 + 4 + lVar5 * 0x10);
    } while (iVar9 != -1);
  }
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  if (lVar10 != 0) {
    return 0x1f;
  }
  if ((int)unaff_RSI[0xc] <= iVar12) {
    unaff_R14 = unaff_RSI;
  }
  lVar10 = unaff_R14[5];
  if (lVar10 != 0) {
    FUN_180768360(lVar10);
  }
  plVar6 = (int64_t *)func_0x000180851be0(unaff_R14);
  if (lVar10 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar10);
  }
  bVar4 = false;
  plVar7 = (int64_t *)unaff_R12;
  if (plVar6 == (int64_t *)0x0) {
    plVar7 = (int64_t *)
             FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x58,&unknown_var_2080_ptr,0x124);
    if (plVar7 == (int64_t *)0x0) {
      iVar9 = 0x26;
      plVar7 = (int64_t *)unaff_R12;
      goto LAB_1808b8e6f;
    }
    *plVar7 = unaff_R12;
    plVar7[1] = unaff_R12;
    bVar4 = true;
    plVar7[2] = unaff_R12;
    plVar7[3] = unaff_R12;
    *(int32_t *)(plVar7 + 4) = 0xffffffff;
    *(int *)((int64_t)plVar7 + 0x24) = iVar12;
    plVar7[5] = unaff_R12;
    plVar7[6] = unaff_R12;
    *(int *)(plVar7 + 7) = iVar12;
    uVar1 = unaff_R15[1];
    uVar2 = unaff_R15[2];
    uVar3 = unaff_R15[3];
    *(int32_t *)(plVar7 + 8) = *unaff_R15;
    *(int32_t *)((int64_t)plVar7 + 0x44) = uVar1;
    *(int32_t *)(plVar7 + 9) = uVar2;
    *(int32_t *)((int64_t)plVar7 + 0x4c) = uVar3;
    plVar7[10] = unaff_R12;
    plVar6 = plVar7;
  }
  in_stack_00000090 = *(int32_t *)(unaff_R13 + 0x2dc);
  iVar9 = FUN_1807d28c0(plVar6,&stack0x00000090,&stack0x000000a0);
  if (iVar9 != 0) goto LAB_1808b8e6f;
  if (!bVar4) {
    return iVar12;
  }
  uStack0000000000000040 = *(uint *)(plVar6 + 8);
  uStack0000000000000044 = *(uint *)((int64_t)plVar6 + 0x44);
  uStack0000000000000048 = *(uint *)(plVar6 + 9);
  uStack000000000000004c = *(uint *)((int64_t)plVar6 + 0x4c);
  lVar10 = unaff_R14[5];
  in_stack_000000a0 = plVar6;
  if (lVar10 != 0) {
    FUN_180768360(lVar10);
  }
  iVar9 = FUN_180851a40(unaff_R14);
  if (iVar9 == 0) {
    if ((int)unaff_R14[1] != 0) {
      lVar8 = (int64_t)
              (int)((uStack0000000000000040 ^ uStack0000000000000044 ^ uStack000000000000004c ^
                    uStack0000000000000048) & (int)unaff_R14[1] - 1U);
      piVar11 = (int *)(*unaff_R14 + lVar8 * 4);
      iVar9 = *(int *)(*unaff_R14 + lVar8 * 4);
      if (iVar9 != -1) {
        lVar8 = unaff_R14[2];
        do {
          lVar5 = (int64_t)iVar9 * 0x20;
          if ((*(int64_t *)(lVar5 + lVar8) ==
               CONCAT44(uStack0000000000000044,uStack0000000000000040)) &&
             (*(int64_t *)(lVar5 + 8 + lVar8) ==
              CONCAT44(uStack000000000000004c,uStack0000000000000048))) goto FUN_1808b8e3b;
          piVar11 = (int *)(lVar8 + 0x10 + lVar5);
          iVar9 = *piVar11;
        } while (iVar9 != -1);
      }
      iVar9 = FUN_18084e8f0(unaff_R14,&stack0x00000040,&stack0x000000a0,piVar11);
      if (iVar9 == 0) goto LAB_1808b8e11;
      goto LAB_1808b8e0d;
    }
FUN_1808b8e3b:
    iVar9 = 0x1c;
  }
  else {
LAB_1808b8e0d:
    if (iVar9 == 0) {
LAB_1808b8e11:
      if (lVar10 == 0) {
        return iVar12;
      }
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar10);
    }
  }
  if (lVar10 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar10);
  }
  if (iVar9 == 0) {
    return iVar12;
  }
  in_stack_000000a0 =
       (int64_t *)CONCAT44(in_stack_000000a0._4_4_,*(int32_t *)(unaff_R13 + 0x2dc));
  func_0x0001807d2ed0(plVar6,&stack0x000000a0);
LAB_1808b8e6f:
  if (plVar7 == (int64_t *)0x0) {
    return iVar9;
  }
  FUN_1808bb9e0(plVar7);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar7,&unknown_var_2144_ptr,0xc6,1);
}



// WARNING: Removing unreachable block (ram,0x0001808b8c9b)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808b8c85(void)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  bool bVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t *unaff_R14;
  int32_t *unaff_R15;
  int32_t extraout_XMM0_Da;
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  int32_t in_stack_00000090;
  int64_t *in_stack_000000a0;
  
  plVar6 = (int64_t *)func_0x000180851be0();
  bVar5 = false;
  iVar12 = (int)unaff_R12;
  plVar7 = (int64_t *)unaff_R12;
  if (plVar6 == (int64_t *)0x0) {
    plVar7 = (int64_t *)
             FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x58,&unknown_var_2080_ptr,0x124);
    if (plVar7 == (int64_t *)0x0) {
      iVar10 = 0x26;
      plVar7 = (int64_t *)unaff_R12;
      goto LAB_1808b8e6f;
    }
    *plVar7 = unaff_R12;
    plVar7[1] = unaff_R12;
    bVar5 = true;
    plVar7[2] = unaff_R12;
    plVar7[3] = unaff_R12;
    *(int32_t *)(plVar7 + 4) = 0xffffffff;
    *(int *)((int64_t)plVar7 + 0x24) = iVar12;
    plVar7[5] = unaff_R12;
    plVar7[6] = unaff_R12;
    *(int *)(plVar7 + 7) = iVar12;
    uVar2 = unaff_R15[1];
    uVar3 = unaff_R15[2];
    uVar4 = unaff_R15[3];
    *(int32_t *)(plVar7 + 8) = *unaff_R15;
    *(int32_t *)((int64_t)plVar7 + 0x44) = uVar2;
    *(int32_t *)(plVar7 + 9) = uVar3;
    *(int32_t *)((int64_t)plVar7 + 0x4c) = uVar4;
    plVar7[10] = unaff_R12;
    plVar6 = plVar7;
  }
  in_stack_00000090 = *(int32_t *)(unaff_R13 + 0x2dc);
  iVar10 = FUN_1807d28c0(plVar6,&stack0x00000090,&stack0x000000a0);
  if (iVar10 != 0) goto LAB_1808b8e6f;
  if (!bVar5) {
    return iVar12;
  }
  uStack0000000000000040 = *(uint *)(plVar6 + 8);
  uStack0000000000000044 = *(uint *)((int64_t)plVar6 + 0x44);
  uStack0000000000000048 = *(uint *)(plVar6 + 9);
  uStack000000000000004c = *(uint *)((int64_t)plVar6 + 0x4c);
  lVar1 = unaff_R14[5];
  in_stack_000000a0 = plVar6;
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  iVar10 = FUN_180851a40();
  if (iVar10 == 0) {
    if ((int)unaff_R14[1] != 0) {
      lVar9 = (int64_t)
              (int)((uStack0000000000000040 ^ uStack0000000000000044 ^ uStack000000000000004c ^
                    uStack0000000000000048) & (int)unaff_R14[1] - 1U);
      piVar11 = (int *)(*unaff_R14 + lVar9 * 4);
      iVar10 = *(int *)(*unaff_R14 + lVar9 * 4);
      if (iVar10 != -1) {
        lVar9 = unaff_R14[2];
        do {
          lVar8 = (int64_t)iVar10 * 0x20;
          if ((*(int64_t *)(lVar8 + lVar9) ==
               CONCAT44(uStack0000000000000044,uStack0000000000000040)) &&
             (*(int64_t *)(lVar8 + 8 + lVar9) ==
              CONCAT44(uStack000000000000004c,uStack0000000000000048))) goto FUN_1808b8e3b;
          piVar11 = (int *)(lVar9 + 0x10 + lVar8);
          iVar10 = *piVar11;
        } while (iVar10 != -1);
      }
      iVar10 = FUN_18084e8f0(extraout_XMM0_Da,&stack0x00000040,&stack0x000000a0,piVar11);
      if (iVar10 == 0) goto LAB_1808b8e11;
      goto LAB_1808b8e0d;
    }
FUN_1808b8e3b:
    iVar10 = 0x1c;
  }
  else {
LAB_1808b8e0d:
    if (iVar10 == 0) {
LAB_1808b8e11:
      if (lVar1 == 0) {
        return iVar12;
      }
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
  }
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  if (iVar10 == 0) {
    return iVar12;
  }
  in_stack_000000a0 =
       (int64_t *)CONCAT44(in_stack_000000a0._4_4_,*(int32_t *)(unaff_R13 + 0x2dc));
  func_0x0001807d2ed0(plVar6,&stack0x000000a0);
LAB_1808b8e6f:
  if (plVar7 == (int64_t *)0x0) {
    return iVar10;
  }
  FUN_1808bb9e0(plVar7);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar7,&unknown_var_2144_ptr,0xc6,1);
}



// WARNING: Removing unreachable block (ram,0x0001808b8e1e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1808b8e3b(void)

{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  
  if (unaff_RBP != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  func_0x0001807d2ed0();
  if (unaff_RBX == 0) {
    return 0x1c;
  }
  FUN_1808bb9e0();
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



uint64_t FUN_1808b8f60(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  
  *(uint64_t *)(param_2 + 0x70) = param_1;
  for (puVar2 = *(uint64_t **)(param_2 + 0x80);
      (*(uint64_t **)(param_2 + 0x80) <= puVar2 &&
      (puVar2 < *(uint64_t **)(param_2 + 0x80) + *(int *)(param_2 + 0x88))); puVar2 = puVar2 + 1)
  {
    uVar1 = FUN_1808b5d00(*puVar2,param_1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  for (puVar2 = *(uint64_t **)(param_2 + 0x90);
      (*(uint64_t **)(param_2 + 0x90) <= puVar2 &&
      (puVar2 < *(uint64_t **)(param_2 + 0x90) + *(int *)(param_2 + 0x98))); puVar2 = puVar2 + 1)
  {
    uVar1 = FUN_1808b5d00(*puVar2,param_1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  puVar2 = *(uint64_t **)(param_2 + 0x50);
  while( true ) {
    if (puVar2 == (uint64_t *)(param_2 + 0x50)) {
      return 0;
    }
    uVar1 = FUN_1808b8f60(param_1,puVar2[2]);
    if ((int)uVar1 != 0) break;
    if (puVar2 == (uint64_t *)(param_2 + 0x50)) {
      return 0;
    }
    puVar2 = (uint64_t *)*puVar2;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808b9030(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int iVar6;
  int64_t lVar7;
  int *piVar8;
  bool bVar9;
  
  lVar1 = *(int64_t *)(param_1 + 0x28);
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  lVar4 = (*(code *)**(uint64_t **)(param_2 + 8))(param_2 + 8);
  plVar5 = (int64_t *)func_0x000180851be0(param_1 + 0x30,lVar4 + 0x10);
  bVar9 = plVar5 == (int64_t *)0x0;
  if (bVar9) {
    plVar5 = (int64_t *)func_0x000180851be0(param_1,lVar4 + 0x10);
  }
  if (plVar5 == (int64_t *)0x0) {
    iVar2 = 0x1f;
    goto LAB_1808b9188;
  }
  iVar6 = *(int *)((int64_t)plVar5 + 0x24);
  iVar2 = 0;
  if (iVar6 != 0) {
    if ((int)plVar5[1] == 0) {
      iVar2 = 0x1c;
      goto LAB_1808b9188;
    }
    lVar4 = (int64_t)(int)((int)plVar5[1] - 1U & *(uint *)(param_2 + 0x2dc));
    piVar8 = (int *)(*plVar5 + lVar4 * 4);
    iVar3 = *(int *)(*plVar5 + lVar4 * 4);
    if (iVar3 != -1) {
      lVar4 = plVar5[2];
      do {
        if (*(uint *)(lVar4 + (int64_t)iVar3 * 0x10) == *(uint *)(param_2 + 0x2dc)) {
          iVar6 = *piVar8;
          lVar7 = (int64_t)iVar6;
          *(uint64_t *)(lVar4 + 8 + lVar7 * 0x10) = 0;
          *piVar8 = *(int *)(lVar4 + 4 + lVar7 * 0x10);
          *(int *)(lVar4 + 4 + lVar7 * 0x10) = (int)plVar5[4];
          *(int *)((int64_t)plVar5 + 0x24) = *(int *)((int64_t)plVar5 + 0x24) + -1;
          *(int *)(plVar5 + 4) = iVar6;
          iVar6 = *(int *)((int64_t)plVar5 + 0x24);
          break;
        }
        piVar8 = (int *)((int64_t)iVar3 * 0x10 + 4 + lVar4);
        iVar3 = *piVar8;
      } while (iVar3 != -1);
    }
    if (iVar6 != 0) goto LAB_1808b9188;
  }
  if (bVar9) {
    iVar2 = FUN_180853840(param_1,plVar5 + 8);
  }
  else {
    iVar2 = FUN_180853840(param_1 + 0x30,plVar5 + 8);
  }
  if (iVar2 == 0) {
    FUN_1808bb9e0(plVar5);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar5,&unknown_var_2080_ptr,0xe1,1);
  }
LAB_1808b9188:
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808b91b0(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  
  if (4 < *(uint *)(param_2 + 0xd8)) {
    uVar2 = FUN_1808b6de0(param_1,param_2,param_1 + 8);
    return uVar2;
  }
  lVar1 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xa0,&unknown_var_2288_ptr,0x2b3,0,0,1);
  if (lVar1 == 0) {
    return 0x26;
  }
  uVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(param_1 + 0x38) + 8) + 0x30))();
  uVar2 = func_0x0001808c9070(lVar1,param_2,uVar2,*(uint64_t *)(param_1 + 0x18));
  *(uint64_t *)(param_1 + 8) = uVar2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808b9280(int64_t param_1,int64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t lStackX_18;
  uint64_t in_stack_ffffffffffffffc8;
  uint64_t uVar8;
  uint64_t in_stack_ffffffffffffffd0;
  uint64_t uVar9;
  
  uVar9 = in_stack_ffffffffffffffd0 & 0xffffffffffffff00;
  uVar8 = in_stack_ffffffffffffffc8 & 0xffffffff00000000;
  lVar2 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x18,&unknown_var_2288_ptr,0x288,uVar8,
                        uVar9,1);
  if (lVar2 == 0) {
    return 0x26;
  }
  plVar3 = (int64_t *)func_0x0001808ec430(lVar2,*(uint64_t *)(param_1 + 0x18));
  lVar2 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x180,&unknown_var_2288_ptr,0x28f,
                        uVar8 & 0xffffffff00000000,uVar9 & 0xffffffffffffff00,1);
  if (lVar2 == 0) {
    if (plVar3 == (int64_t *)0x0) {
      return 0x26;
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,0);
    return 0x26;
  }
  if (*(uint64_t **)(param_1 + 0x28) == (uint64_t *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)**(uint64_t **)(param_1 + 0x28))();
  }
  lVar7 = *(int64_t *)(param_1 + 0x40);
  if (lVar7 == 0) {
    lVar7 = *(int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x78);
  }
  uVar5 = (**(code **)(*(int64_t *)(*(int64_t *)(param_1 + 0x38) + 8) + 0x30))();
  plVar6 = (int64_t *)
           FUN_1808c9700(lVar2,param_2,uVar5,plVar3,*(uint64_t *)(param_1 + 0x18),lVar7,uVar4,
                         *(uint64_t *)(param_1 + 0x30));
  lStackX_18 = 0;
  iVar1 = FUN_1808b45a0(*(int64_t *)(param_1 + 0x18) + 0x388,param_2 + 0xd8,plVar6,
                        *(uint64_t *)(param_1 + 0x38),&lStackX_18);
  if (iVar1 == 0) {
    plVar3[1] = lStackX_18;
    iVar1 = FUN_1808b4ec0(lStackX_18);
    if ((iVar1 != 0) || (iVar1 = FUN_1808b8af0(param_1,plVar6), iVar1 != 0)) goto LAB_1808b9432;
    *(int64_t **)(param_1 + 8) = plVar6;
    plVar6 = (int64_t *)0x0;
  }
  else {
    iVar1 = FUN_1808b6de0(param_1,param_2,param_1 + 8);
    if (iVar1 != 0) goto LAB_1808b9432;
  }
  iVar1 = 0;
LAB_1808b9432:
  if (plVar6 == (int64_t *)0x0) {
    return iVar1;
  }
  (**(code **)(*plVar6 + 0x28))(plVar6,0);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar6,&unknown_var_2144_ptr,0xc6,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808b934f(uint64_t *param_1)

{
  int iVar1;
  int64_t *plVar2;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_R14;
  uint64_t in_stack_00000070;
  
  if (param_1 != (uint64_t *)0x0) {
    (**(code **)*param_1)();
  }
  (**(code **)(*(int64_t *)(*(int64_t *)(unaff_RSI + 0x38) + 8) + 0x30))();
  plVar2 = (int64_t *)FUN_1808c9700();
  in_stack_00000070 = 0;
  iVar1 = FUN_1808b45a0(*(int64_t *)(unaff_RSI + 0x18) + 0x388,unaff_RBP + 0xd8,plVar2,
                        *(uint64_t *)(unaff_RSI + 0x38),&stack0x00000070);
  if (iVar1 == 0) {
    *(uint64_t *)(unaff_R14 + 8) = in_stack_00000070;
    iVar1 = FUN_1808b4ec0(in_stack_00000070);
    if ((iVar1 != 0) || (iVar1 = FUN_1808b8af0(), iVar1 != 0)) goto LAB_1808b9432;
    *(int64_t **)(unaff_RSI + 8) = plVar2;
    plVar2 = (int64_t *)0x0;
  }
  else {
    iVar1 = FUN_1808b6de0();
    if (iVar1 != 0) goto LAB_1808b9432;
  }
  iVar1 = 0;
LAB_1808b9432:
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&unknown_var_2144_ptr,0xc6,1);
  }
  return iVar1;
}



int32_t FUN_1808b9470(void)

{
  int32_t unaff_EDI;
  
  return unaff_EDI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808b9490(int64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  char cVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lStackX_10;
  uint64_t uStackX_18;
  int64_t *plVar7;
  uint64_t *puVar8;
  
  if ((((*(int *)(param_2 + 0xd8) == 0) && (*(int *)(param_2 + 0xdc) == 0)) &&
      (*(int *)(param_2 + 0xe0) == 0)) && (*(int *)(param_2 + 0xe4) == 0)) {
    return 0x1c;
  }
  lVar3 = *(int64_t *)(param_1 + 0x40);
  uVar4 = 0;
  lStackX_10 = 0;
  uStackX_18 = 0;
  if (lVar3 == 0) {
    lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x78);
  }
  puVar8 = &uStackX_18;
  plVar7 = &lStackX_10;
  FUN_1808cd190(*(uint64_t *)(param_1 + 0x18),(int *)(param_2 + 0xd8),
                *(uint64_t *)(param_1 + 0x38),lVar3,plVar7,puVar8);
  if (lStackX_10 == 0) {
    uVar4 = FUN_1808b6de0(param_1,param_2,param_1 + 8);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  else {
    lVar3 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x130,&unknown_var_2288_ptr,0x2e9,
                          (uint64_t)plVar7 & 0xffffffff00000000,
                          (uint64_t)puVar8 & 0xffffffffffffff00,1);
    if (lVar3 == 0) {
      return 0x26;
    }
    uVar6 = uVar4;
    if (*(uint64_t **)(param_1 + 0x28) != (uint64_t *)0x0) {
      uVar4 = (**(code **)**(uint64_t **)(param_1 + 0x28))();
      uVar6 = *(uint64_t *)(param_1 + 0x28);
    }
    uVar4 = FUN_1808c9180(lVar3,param_2,lStackX_10,uVar6,*(uint64_t *)(param_1 + 0x18),
                          *(uint64_t *)(param_1 + 0x20),*(uint64_t *)(param_1 + 0x38),uVar4,
                          *(uint64_t *)(param_1 + 0x30),uStackX_18);
    puVar8 = (uint64_t *)(param_2 + 0xe8);
    puVar1 = (uint64_t *)*puVar8;
    while (puVar1 != puVar8) {
      cVar2 = func_0x0001808b0620(param_2,*(int32_t *)((int64_t)puVar1 + 0x24));
      if (cVar2 == '\0') {
        lVar3 = func_0x00018085fd70(*(uint64_t *)(param_1 + 0x38),puVar1 + 2);
        lVar5 = func_0x00018085fd70(lStackX_10,puVar1 + 2);
        if (((lVar3 != 0) && (lVar5 != 0)) && (uVar6 = FUN_1808d71e0(lVar5,lVar3), (int)uVar6 != 0))
        {
          return uVar6;
        }
      }
      if (puVar1 != puVar8) {
        puVar1 = (uint64_t *)*puVar1;
      }
    }
    uVar6 = FUN_1808b8af0(param_1,uVar4);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = FUN_1808c9e60(uVar4);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    *(uint64_t *)(param_1 + 8) = uVar4;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808b96c0(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  uint64_t in_stack_ffffffffffffff70;
  
  if (*(int *)(param_2 + 0xe0) == 0) {
    uVar5 = FUN_1808b6de0(param_1,param_2,param_1 + 8);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  else {
    uStackX_10 = 0;
    uVar5 = FUN_180738d90(*(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0x4c0),&unknown_var_2520_ptr,
                          &uStackX_10);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    lVar8 = *(int64_t *)(param_1 + 0x40);
    if (lVar8 == 0) {
      lVar8 = *(int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x78);
    }
    uVar5 = FUN_18073f130(lVar8,uStackX_10,1,0);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar5 = FUN_18073d8a0(uStackX_10,1);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uStackX_18 = 0;
    if (*(int *)(param_2 + 0xe8) == 0) {
      uVar5 = FUN_180860390(*(uint64_t *)(param_1 + 0x38));
    }
    else {
      uVar5 = FUN_1808bf7d0(*(uint64_t *)(param_1 + 0x18),param_2,&uStackX_18);
    }
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    puVar6 = (uint64_t *)
             FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x238,&unknown_var_2288_ptr,0x256,0,
                           in_stack_ffffffffffffff70 & 0xffffffffffffff00,1);
    if (puVar6 == (uint64_t *)0x0) {
      return 0x26;
    }
    if (*(uint64_t **)(param_1 + 0x28) == (uint64_t *)0x0) {
      uStackX_20 = 0;
    }
    else {
      uStackX_20 = (**(code **)**(uint64_t **)(param_1 + 0x28))();
    }
    uVar3 = uStackX_18;
    uVar2 = uStackX_10;
    lVar8 = *(int64_t *)(param_1 + 0x38);
    uVar5 = *(uint64_t *)(param_1 + 0x20);
    uVar4 = FUN_18085ab70(lVar8 + 200);
    uVar1 = *(uint64_t *)(param_1 + 0x30);
    uVar7 = (**(code **)(*(int64_t *)(*(int64_t *)(param_1 + 0x38) + 8) + 0x30))();
    FUN_1808c9310(puVar6,*(uint64_t *)(param_1 + 0x28),*(uint64_t *)(param_1 + 0x18),uVar2,
                  *(int32_t *)(param_1 + 0x10),uVar7,uStackX_20,param_2,uVar3,uVar5,lVar8,uVar1,
                  uVar4);
    *puVar6 = &unknown_var_1552_ptr;
    puVar6[0x11] = &unknown_var_1912_ptr;
    puVar6[0x43] = param_2;
    puVar6[0x44] = 0;
    puVar6[0x45] = 0;
    puVar6[0x46] = 0;
    uVar5 = FUN_1808c9e60(puVar6);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar5 = FUN_1808b8af0(param_1,puVar6);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    *(uint64_t **)(param_1 + 8) = puVar6;
  }
  return 0;
}



uint64_t FUN_1808b97f8(uint64_t *param_1)

{
  uint64_t uVar1;
  uint64_t unaff_R12;
  int64_t unaff_R13;
  uint64_t *in_stack_00000070;
  uint64_t in_stack_000000c8;
  
  if (param_1 != (uint64_t *)0x0) {
    (**(code **)*param_1)();
  }
  FUN_18085ab70(*(int64_t *)(unaff_R13 + 0x38) + 200);
  (**(code **)(*(int64_t *)(*(int64_t *)(unaff_R13 + 0x38) + 8) + 0x30))();
  FUN_1808c9310(in_stack_00000070,*(uint64_t *)(unaff_R13 + 0x28),
                *(uint64_t *)(unaff_R13 + 0x18),in_stack_000000c8,
                *(int32_t *)(unaff_R13 + 0x10));
  *in_stack_00000070 = &unknown_var_1552_ptr;
  in_stack_00000070[0x11] = &unknown_var_1912_ptr;
  in_stack_00000070[0x43] = unaff_R12;
  in_stack_00000070[0x44] = 0;
  in_stack_00000070[0x45] = 0;
  in_stack_00000070[0x46] = 0;
  uVar1 = FUN_1808c9e60(in_stack_00000070);
  if (((int)uVar1 == 0) && (uVar1 = FUN_1808b8af0(), (int)uVar1 == 0)) {
    *(uint64_t **)(unaff_R13 + 8) = in_stack_00000070;
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_1808b992d(void)

{
  uint64_t uVar1;
  uint64_t unaff_RBX;
  int64_t unaff_R13;
  
  uVar1 = FUN_1808b8af0();
  if ((int)uVar1 == 0) {
    *(uint64_t *)(unaff_R13 + 8) = unaff_RBX;
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808b9950(int64_t param_1,uint64_t param_2)

{
  uint uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *plStackX_8;
  uint64_t in_stack_ffffffffffffffc8;
  
  uVar1 = (uint)((uint64_t)in_stack_ffffffffffffffc8 >> 0x20);
  plStackX_8 = (int64_t *)0x0;
  uVar2 = FUN_1808ec950(param_2,*(uint64_t *)(param_1 + 0x38),&plStackX_8);
  plVar7 = plStackX_8;
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (plStackX_8 == (int64_t *)0x0) {
    uVar1 = FUN_1808b6de0(param_1,param_2,param_1 + 8);
    uVar2 = (uint64_t)uVar1;
    if (uVar1 != 0) goto LAB_1808b9a65;
  }
  else {
    lVar3 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x180,&unknown_var_2288_ptr,0x2ce,
                          (uint64_t)uVar1 << 0x20,uVar2 & 0xff,1);
    if (lVar3 == 0) {
      uVar2 = 0x26;
      goto LAB_1808b9a65;
    }
    if (*(uint64_t **)(param_1 + 0x28) == (uint64_t *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)**(uint64_t **)(param_1 + 0x28))();
    }
    lVar6 = *(int64_t *)(param_1 + 0x40);
    if (lVar6 == 0) {
      lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x78);
    }
    uVar5 = (**(code **)(*(int64_t *)(*(int64_t *)(param_1 + 0x38) + 8) + 0x30))();
    uVar4 = FUN_1808c9700(lVar3,param_2,uVar5,plStackX_8,*(uint64_t *)(param_1 + 0x18),lVar6,uVar4
                          ,*(uint64_t *)(param_1 + 0x30));
    plVar7 = (int64_t *)0x0;
    *(uint64_t *)(param_1 + 8) = uVar4;
  }
  uVar2 = 0;
LAB_1808b9a65:
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,0);
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808b997f(void)

{
  int32_t in_EAX;
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t unaff_RDI;
  int64_t *in_stack_00000060;
  
  if (in_stack_00000060 == (int64_t *)0x0) {
    iVar3 = FUN_1808b6de0();
    if (iVar3 != 0) goto LAB_1808b9a65;
  }
  else {
    lVar1 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x180,&unknown_var_2288_ptr,0x2ce,in_EAX)
    ;
    if (lVar1 == 0) {
      iVar3 = 0x26;
      goto LAB_1808b9a65;
    }
    if (*(uint64_t **)(unaff_RDI + 0x28) != (uint64_t *)0x0) {
      (**(code **)**(uint64_t **)(unaff_RDI + 0x28))();
    }
    (**(code **)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x38) + 8) + 0x30))();
    uVar2 = FUN_1808c9700(lVar1);
    in_stack_00000060 = (int64_t *)0x0;
    *(uint64_t *)(unaff_RDI + 8) = uVar2;
  }
  iVar3 = 0;
LAB_1808b9a65:
  if (in_stack_00000060 != (int64_t *)0x0) {
    (**(code **)(*in_stack_00000060 + 0x30))(in_stack_00000060,0);
  }
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808b9989(void)

{
  int32_t in_EAX;
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *unaff_RBX;
  int iVar3;
  int64_t unaff_RDI;
  
  if (unaff_RBX == (int64_t *)0x0) {
    iVar3 = FUN_1808b6de0();
    if (iVar3 != 0) goto LAB_1808b9a65;
  }
  else {
    lVar1 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x180,&unknown_var_2288_ptr,0x2ce,in_EAX)
    ;
    if (lVar1 == 0) {
      iVar3 = 0x26;
      goto LAB_1808b9a65;
    }
    if (*(uint64_t **)(unaff_RDI + 0x28) != (uint64_t *)0x0) {
      (**(code **)**(uint64_t **)(unaff_RDI + 0x28))();
    }
    (**(code **)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x38) + 8) + 0x30))();
    uVar2 = FUN_1808c9700(lVar1);
    unaff_RBX = (int64_t *)0x0;
    *(uint64_t *)(unaff_RDI + 8) = uVar2;
  }
  iVar3 = 0;
LAB_1808b9a65:
  if (unaff_RBX != (int64_t *)0x0) {
    (**(code **)(*unaff_RBX + 0x30))(unaff_RBX,0);
  }
  return iVar3;
}



// WARNING: Removing unreachable block (ram,0x0001808b9a6f)

uint64_t FUN_1808b99dd(uint64_t *param_1)

{
  uint64_t uVar1;
  int64_t unaff_RDI;
  
  if (param_1 != (uint64_t *)0x0) {
    (**(code **)*param_1)();
  }
  (**(code **)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x38) + 8) + 0x30))();
  uVar1 = FUN_1808c9700();
  *(uint64_t *)(unaff_RDI + 8) = uVar1;
  return 0;
}



int FUN_1808b9a4e(void)

{
  int iVar1;
  int64_t *unaff_RBX;
  
  iVar1 = FUN_1808b6de0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  if (unaff_RBX != (int64_t *)0x0) {
    (**(code **)(*unaff_RBX + 0x30))();
  }
  return iVar1;
}



int32_t FUN_1808b9a6f(void)

{
  int64_t *unaff_RBX;
  int32_t unaff_EDI;
  
  (**(code **)(*unaff_RBX + 0x30))();
  return unaff_EDI;
}








