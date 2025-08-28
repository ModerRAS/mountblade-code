#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part031.c - 4 个函数

// 函数: void FUN_1808b9a82(void)
void FUN_1808b9a82(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808b9a90(int64_t param_1,int64_t param_2)

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
             FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x238,&unknown_var_2288_ptr,0x27a,0,
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
    *puVar6 = &unknown_var_1928_ptr;
    puVar6[0x11] = &unknown_var_1912_ptr;
    puVar6[0x43] = param_2;
    puVar6[0x44] = 0;
    puVar6[0x45] = 0;
    *(int32_t *)(puVar6 + 0x46) = 0;
    *(int32_t *)((int64_t)puVar6 + 0x234) = 0x42c80000;
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



uint64_t FUN_1808b9bc8(uint64_t *param_1)

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
  *in_stack_00000070 = &unknown_var_1928_ptr;
  in_stack_00000070[0x11] = &unknown_var_1912_ptr;
  in_stack_00000070[0x43] = unaff_R12;
  in_stack_00000070[0x44] = 0;
  in_stack_00000070[0x45] = 0;
  *(int32_t *)(in_stack_00000070 + 0x46) = 0;
  *(int32_t *)((int64_t)in_stack_00000070 + 0x234) = 0x42c80000;
  uVar1 = FUN_1808c9e60(in_stack_00000070);
  if (((int)uVar1 == 0) && (uVar1 = FUN_1808b8af0(), (int)uVar1 == 0)) {
    *(uint64_t **)(unaff_R13 + 8) = in_stack_00000070;
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_1808b9d06(void)

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

uint64_t FUN_1808b9d30(int64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t in_stack_ffffffffffffffd8;
  uint64_t in_stack_ffffffffffffffe0;
  
  uVar2 = 0;
  lVar1 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x128,&unknown_var_2288_ptr,0x30f,
                        in_stack_ffffffffffffffd8 & 0xffffffff00000000,
                        in_stack_ffffffffffffffe0 & 0xffffffffffffff00,1);
  if (lVar1 == 0) {
    uVar2 = 0x26;
  }
  else {
    if (*(uint64_t **)(param_1 + 0x28) != (uint64_t *)0x0) {
      uVar2 = (**(code **)**(uint64_t **)(param_1 + 0x28))();
    }
    uVar3 = (**(code **)(*(int64_t *)(*(int64_t *)(param_1 + 0x38) + 8) + 0x30))();
    uVar2 = FUN_1808c9550(lVar1,param_2,uVar3,*(uint64_t *)(param_1 + 0x18),uVar2,
                          *(uint64_t *)(param_1 + 0x30));
    *(uint64_t *)(param_1 + 8) = uVar2;
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b9df0(int64_t param_1,int64_t param_2)
void FUN_1808b9df0(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  int8_t auStack_a8 [32];
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int64_t lStack_68;
  int8_t auStack_60 [40];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_a8;
  uVar4 = 0;
  lStack_68 = 0;
  if ((((*(int *)(param_2 + 0xdc) != 0) || (*(int *)(param_2 + 0xe0) != 0)) ||
      (*(int *)(param_2 + 0xe4) != 0)) || (*(int *)(param_2 + 0xe8) != 0)) {
    iVar2 = FUN_1808bf8e0(*(uint64_t *)(param_1 + 0x18),(int *)(param_2 + 0xdc),&lStack_68);
    lVar1 = lStack_68;
    if (iVar2 == 0x4a) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(param_2 + 0x10,auStack_60);
    }
    if (iVar2 != 0) goto LAB_1808b9e6b;
    if (lStack_68 != 0) {
      uStack_78 = CONCAT71(uStack_78._1_7_,1);
      uStack_80 = uStack_80 & 0xffffffffffffff00;
      uStack_88 = uStack_88 & 0xffffffff00000000;
      lVar3 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x180,&unknown_var_2288_ptr,0x22c);
      if (lVar3 != 0) {
        if (*(uint64_t **)(param_1 + 0x28) != (uint64_t *)0x0) {
          uVar4 = (**(code **)**(uint64_t **)(param_1 + 0x28))();
        }
        uVar7 = *(uint64_t *)(param_1 + 0x40);
        if (uVar7 == 0) {
          uVar7 = *(uint64_t *)(*(int64_t *)(param_1 + 0x28) + 0x78);
        }
        uVar5 = (**(code **)(*(int64_t *)(*(int64_t *)(param_1 + 0x38) + 8) + 0x30))();
        uStack_70 = *(uint64_t *)(param_1 + 0x30);
        uStack_88 = *(uint64_t *)(param_1 + 0x18);
        uStack_80 = uVar7;
        uStack_78 = uVar4;
        plVar6 = (int64_t *)FUN_1808c9700(lVar3,param_2,uVar5,lVar1);
        iVar2 = FUN_1808b8af0(param_1,plVar6);
        if (iVar2 == 0) {
          *(int64_t **)(param_1 + 8) = plVar6;
        }
        else if (plVar6 != (int64_t *)0x0) {
          (**(code **)(*plVar6 + 0x28))(plVar6,0);
          uStack_88 = CONCAT71(uStack_88._1_7_,1);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar6,&unknown_var_2144_ptr,0xc6);
        }
      }
      goto LAB_1808b9e6b;
    }
  }
  FUN_1808b6de0(param_1,param_2,param_1 + 8);
LAB_1808b9e6b:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b9eda(uint64_t *param_1)
void FUN_1808b9eda(uint64_t *param_1)

{
  int iVar1;
  int64_t *plVar2;
  int64_t unaff_RBX;
  uint64_t in_stack_00000070;
  
  if (param_1 != (uint64_t *)0x0) {
    (**(code **)*param_1)();
  }
  (**(code **)(*(int64_t *)(*(int64_t *)(unaff_RBX + 0x38) + 8) + 0x30))();
  plVar2 = (int64_t *)FUN_1808c9700();
  iVar1 = FUN_1808b8af0();
  if (iVar1 == 0) {
    *(int64_t **)(unaff_RBX + 8) = plVar2;
  }
  else if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&unknown_var_2144_ptr,0xc6,1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000070 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b9f57(void)
void FUN_1808b9f57(void)

{
  int64_t *unaff_RDI;
  uint64_t in_stack_00000070;
  
  if (unaff_RDI != (int64_t *)0x0) {
    (**(code **)(*unaff_RDI + 0x28))();
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000070 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_1808b9fa0(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5,int32_t param_6)

{
  ushort uVar1;
  uint64_t *puVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int iVar13;
  
  if (param_2 == (int64_t *)0x0) {
    return 0x1f;
  }
  iVar4 = *(int *)((int64_t)param_1 + 0x1c);
  plVar7 = (int64_t *)0x0;
  iVar13 = -1;
  if (iVar4 != 0xfff) goto LAB_1808ba125;
  iVar4 = (int)param_1[1];
  if ((int)param_1[3] < 1) {
    if (iVar4 == 0xfff) {
      return 0x26;
    }
    iVar8 = iVar4 + 1;
    uVar9 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
    iVar3 = (*(uint *)((int64_t)param_1 + 0xc) ^ uVar9) - uVar9;
    if (iVar3 < iVar8) {
      iVar10 = (int)((float)iVar3 * 1.5);
      iVar3 = iVar8;
      if (iVar8 <= iVar10) {
        iVar3 = iVar10;
      }
      if (iVar3 < 4) {
        iVar10 = 4;
      }
      else if (iVar10 < iVar8) {
        iVar10 = iVar8;
      }
      iVar3 = FUN_180748010(param_1,iVar10);
      plVar11 = (int64_t *)0x0;
      if (iVar3 != 0) goto LAB_1808ba0a2;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    plVar11 = (int64_t *)((int64_t)iVar4 * 0x10 + *param_1);
  }
  else {
    plVar11 = plVar7;
    if (0 < iVar4) {
      pbVar5 = (byte *)(*param_1 + 8);
      plVar12 = plVar7;
      do {
        iVar3 = (int)plVar12;
        if ((*pbVar5 & 1) != 0) {
          *(int *)(param_1 + 3) = (int)param_1[3] + -1;
          plVar11 = (int64_t *)((int64_t)iVar3 * 0x10 + *param_1);
          iVar4 = iVar3;
          break;
        }
        plVar12 = (int64_t *)(uint64_t)(iVar3 + 1U);
        pbVar5 = pbVar5 + 0x10;
        plVar11 = (int64_t *)0x0;
      } while ((int)(iVar3 + 1U) < iVar4);
    }
  }
LAB_1808ba0a2:
  lVar6 = FUN_180741d10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xe040,8,&unknown_var_2816_ptr,0xf0,0,0);
  *plVar11 = lVar6;
  if (lVar6 == 0) {
    return 0x26;
  }
  *(int32_t *)(plVar11 + 1) = 0;
  *(int16_t *)((int64_t)plVar11 + 0xc) = *(int16_t *)((int64_t)param_1 + 0x1c);
  *(int *)((int64_t)param_1 + 0x1c) = iVar4;
  *(int16_t *)((int64_t)plVar11 + 0xe) = 0xfff;
  puVar2 = (uint64_t *)*plVar11;
  *puVar2 = 0xffffffffffffffff;
  puVar2[1] = 0xffffffffffffffff;
  puVar2[2] = 0xffffffffffffffff;
  puVar2[3] = 0xffffffffffffffff;
  puVar2[4] = 0xffffffffffffffff;
  puVar2[5] = 0xffffffffffffffff;
  puVar2[6] = 0xffffffffffffffff;
  puVar2[7] = 0xffffffffffffffff;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x200;
  iVar4 = *(int *)((int64_t)param_1 + 0x1c);
LAB_1808ba125:
  *(int *)(param_1 + 4) = iVar4;
  plVar12 = (int64_t *)((int64_t)iVar4 * 0x10 + *param_1);
  plVar11 = plVar7;
  while( true ) {
    uVar9 = *(uint *)(*plVar12 + (int64_t)plVar7 * 4);
    iVar4 = (int)plVar11;
    if (uVar9 != 0) break;
    plVar11 = (int64_t *)(uint64_t)(iVar4 + 1);
    plVar7 = (int64_t *)((int64_t)plVar7 + 1);
    if (0xf < (int64_t)plVar7) goto LAB_1808ba17b;
  }
  iVar13 = 0;
  if (uVar9 != 0) {
    for (; (uVar9 >> iVar13 & 1) == 0; iVar13 = iVar13 + 1) {
    }
  }
  *(uint *)(*plVar12 + (int64_t)iVar4 * 4) = ~(1 << ((byte)iVar13 & 0x1f)) & uVar9;
  iVar13 = iVar13 + iVar4 * 0x20;
LAB_1808ba17b:
  *(short *)((int64_t)plVar12 + 10) = *(short *)((int64_t)plVar12 + 10) + 1;
  if (*(short *)((int64_t)plVar12 + 10) == 0x200) {
    uVar1 = *(ushort *)((int64_t)plVar12 + 0xc);
    *(uint *)((int64_t)param_1 + 0x1c) = (uint)uVar1;
    if (uVar1 != 0xfff) {
      *(int16_t *)(*param_1 + 0xe + (uint64_t)uVar1 * 0x10) = 0xfff;
      *(int16_t *)((int64_t)plVar12 + 0xc) = 0xfff;
    }
  }
  *(int *)((int64_t)param_1 + 0x14) = *(int *)((int64_t)param_1 + 0x14) + 1;
  lVar6 = (int64_t)iVar13 * 0x70 + 0x40 + *plVar12;
  *param_2 = lVar6;
  FUN_1808c6620(lVar6,param_3,param_4,param_5,param_6);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1808ba200(int64_t *param_1,uint64_t *param_2,uint64_t param_3)

{
  ushort uVar1;
  uint64_t *puVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint64_t *puVar11;
  int iVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  
  if (param_2 == (uint64_t *)0x0) {
    return 0x1f;
  }
  iVar4 = *(int *)((int64_t)param_1 + 0x1c);
  plVar7 = (int64_t *)0x0;
  iVar12 = -1;
  if (iVar4 != 0xfff) goto LAB_1808ba381;
  iVar4 = (int)param_1[1];
  if ((int)param_1[3] < 1) {
    if (iVar4 == 0xfff) {
      return 0x26;
    }
    iVar8 = iVar4 + 1;
    uVar9 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
    iVar3 = (*(uint *)((int64_t)param_1 + 0xc) ^ uVar9) - uVar9;
    if (iVar3 < iVar8) {
      iVar10 = (int)((float)iVar3 * 1.5);
      iVar3 = iVar8;
      if (iVar8 <= iVar10) {
        iVar3 = iVar10;
      }
      if (iVar3 < 4) {
        iVar10 = 4;
      }
      else if (iVar10 < iVar8) {
        iVar10 = iVar8;
      }
      iVar3 = FUN_180748010(param_1,iVar10);
      plVar13 = (int64_t *)0x0;
      if (iVar3 != 0) goto LAB_1808ba301;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    plVar13 = (int64_t *)((int64_t)iVar4 * 0x10 + *param_1);
  }
  else {
    plVar13 = plVar7;
    if (0 < iVar4) {
      pbVar5 = (byte *)(*param_1 + 8);
      plVar14 = plVar7;
      do {
        iVar3 = (int)plVar14;
        if ((*pbVar5 & 1) != 0) {
          *(int *)(param_1 + 3) = (int)param_1[3] + -1;
          plVar13 = (int64_t *)((int64_t)iVar3 * 0x10 + *param_1);
          iVar4 = iVar3;
          break;
        }
        plVar14 = (int64_t *)(uint64_t)(iVar3 + 1U);
        pbVar5 = pbVar5 + 0x10;
        plVar13 = (int64_t *)0x0;
      } while ((int)(iVar3 + 1U) < iVar4);
    }
  }
LAB_1808ba301:
  lVar6 = FUN_180741d10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xb040,8,&unknown_var_2816_ptr,0xf0,0,0);
  *plVar13 = lVar6;
  if (lVar6 == 0) {
    return 0x26;
  }
  *(int32_t *)(plVar13 + 1) = 0;
  *(int16_t *)((int64_t)plVar13 + 0xc) = *(int16_t *)((int64_t)param_1 + 0x1c);
  *(int *)((int64_t)param_1 + 0x1c) = iVar4;
  *(int16_t *)((int64_t)plVar13 + 0xe) = 0xfff;
  puVar2 = (uint64_t *)*plVar13;
  *puVar2 = 0xffffffffffffffff;
  puVar2[1] = 0xffffffffffffffff;
  puVar2[2] = 0xffffffffffffffff;
  puVar2[3] = 0xffffffffffffffff;
  puVar2[4] = 0xffffffffffffffff;
  puVar2[5] = 0xffffffffffffffff;
  puVar2[6] = 0xffffffffffffffff;
  puVar2[7] = 0xffffffffffffffff;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x200;
  iVar4 = *(int *)((int64_t)param_1 + 0x1c);
LAB_1808ba381:
  *(int *)(param_1 + 4) = iVar4;
  plVar14 = (int64_t *)((int64_t)iVar4 * 0x10 + *param_1);
  plVar13 = plVar7;
  while( true ) {
    uVar9 = *(uint *)(*plVar14 + (int64_t)plVar7 * 4);
    iVar4 = (int)plVar13;
    if (uVar9 != 0) break;
    plVar13 = (int64_t *)(uint64_t)(iVar4 + 1);
    plVar7 = (int64_t *)((int64_t)plVar7 + 1);
    if (0xf < (int64_t)plVar7) goto LAB_1808ba3d7;
  }
  iVar12 = 0;
  if (uVar9 != 0) {
    for (; (uVar9 >> iVar12 & 1) == 0; iVar12 = iVar12 + 1) {
    }
  }
  *(uint *)(*plVar14 + (int64_t)iVar4 * 4) = ~(1 << ((byte)iVar12 & 0x1f)) & uVar9;
  iVar12 = iVar12 + iVar4 * 0x20;
LAB_1808ba3d7:
  *(short *)((int64_t)plVar14 + 10) = *(short *)((int64_t)plVar14 + 10) + 1;
  if (*(short *)((int64_t)plVar14 + 10) == 0x200) {
    uVar1 = *(ushort *)((int64_t)plVar14 + 0xc);
    *(uint *)((int64_t)param_1 + 0x1c) = (uint)uVar1;
    if (uVar1 != 0xfff) {
      *(int16_t *)(*param_1 + 0xe + (uint64_t)uVar1 * 0x10) = 0xfff;
      *(int16_t *)((int64_t)plVar14 + 0xc) = 0xfff;
    }
  }
  *(int *)((int64_t)param_1 + 0x14) = *(int *)((int64_t)param_1 + 0x14) + 1;
  puVar11 = (uint64_t *)(*plVar14 + 0x40 + (int64_t)iVar12 * 0x58);
  *param_2 = puVar11;
  puVar2 = puVar11 + 1;
  *puVar2 = puVar2;
  puVar11[2] = puVar2;
  puVar2 = puVar11 + 3;
  *puVar2 = puVar2;
  puVar11[4] = puVar2;
  *puVar11 = &unknown_var_2544_ptr;
  puVar2 = puVar11 + 8;
  puVar11[5] = 0x7f7fffff;
  puVar11[6] = param_3;
  puVar11[7] = 0;
  puVar11[9] = 0;
  *puVar2 = puVar2;
  puVar11[9] = puVar2;
  puVar11[10] = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1808ba490(int64_t *param_1,int64_t *param_2,uint64_t param_3,int32_t param_4)

{
  ushort uVar1;
  uint64_t *puVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int iVar13;
  
  if (param_2 == (int64_t *)0x0) {
    return 0x1f;
  }
  iVar4 = *(int *)((int64_t)param_1 + 0x1c);
  plVar7 = (int64_t *)0x0;
  iVar13 = -1;
  if (iVar4 != 0xfff) goto LAB_1808ba616;
  iVar4 = (int)param_1[1];
  if ((int)param_1[3] < 1) {
    if (iVar4 == 0xfff) {
      return 0x26;
    }
    iVar8 = iVar4 + 1;
    uVar9 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
    iVar3 = (*(uint *)((int64_t)param_1 + 0xc) ^ uVar9) - uVar9;
    if (iVar3 < iVar8) {
      iVar10 = (int)((float)iVar3 * 1.5);
      iVar3 = iVar8;
      if (iVar8 <= iVar10) {
        iVar3 = iVar10;
      }
      if (iVar3 < 4) {
        iVar10 = 4;
      }
      else if (iVar10 < iVar8) {
        iVar10 = iVar8;
      }
      iVar3 = FUN_180748010(param_1,iVar10);
      plVar11 = (int64_t *)0x0;
      if (iVar3 != 0) goto LAB_1808ba592;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    plVar11 = (int64_t *)((int64_t)iVar4 * 0x10 + *param_1);
  }
  else {
    plVar11 = plVar7;
    if (0 < iVar4) {
      pbVar5 = (byte *)(*param_1 + 8);
      plVar12 = plVar7;
      do {
        iVar3 = (int)plVar12;
        if ((*pbVar5 & 1) != 0) {
          *(int *)(param_1 + 3) = (int)param_1[3] + -1;
          plVar11 = (int64_t *)((int64_t)iVar3 * 0x10 + *param_1);
          iVar4 = iVar3;
          break;
        }
        plVar12 = (int64_t *)(uint64_t)(iVar3 + 1U);
        pbVar5 = pbVar5 + 0x10;
        plVar11 = (int64_t *)0x0;
      } while ((int)(iVar3 + 1U) < iVar4);
    }
  }
LAB_1808ba592:
  lVar6 = FUN_180741d10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd040,8,&unknown_var_2816_ptr,0xf0,0,0);
  *plVar11 = lVar6;
  if (lVar6 == 0) {
    return 0x26;
  }
  *(int32_t *)(plVar11 + 1) = 0;
  *(int16_t *)((int64_t)plVar11 + 0xc) = *(int16_t *)((int64_t)param_1 + 0x1c);
  *(int *)((int64_t)param_1 + 0x1c) = iVar4;
  *(int16_t *)((int64_t)plVar11 + 0xe) = 0xfff;
  puVar2 = (uint64_t *)*plVar11;
  *puVar2 = 0xffffffffffffffff;
  puVar2[1] = 0xffffffffffffffff;
  puVar2[2] = 0xffffffffffffffff;
  puVar2[3] = 0xffffffffffffffff;
  puVar2[4] = 0xffffffffffffffff;
  puVar2[5] = 0xffffffffffffffff;
  puVar2[6] = 0xffffffffffffffff;
  puVar2[7] = 0xffffffffffffffff;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x200;
  iVar4 = *(int *)((int64_t)param_1 + 0x1c);
LAB_1808ba616:
  *(int *)(param_1 + 4) = iVar4;
  plVar12 = (int64_t *)((int64_t)iVar4 * 0x10 + *param_1);
  plVar11 = plVar7;
  while( true ) {
    uVar9 = *(uint *)(*plVar12 + (int64_t)plVar7 * 4);
    iVar4 = (int)plVar11;
    if (uVar9 != 0) break;
    plVar11 = (int64_t *)(uint64_t)(iVar4 + 1);
    plVar7 = (int64_t *)((int64_t)plVar7 + 1);
    if (0xf < (int64_t)plVar7) goto LAB_1808ba66b;
  }
  iVar13 = 0;
  if (uVar9 != 0) {
    for (; (uVar9 >> iVar13 & 1) == 0; iVar13 = iVar13 + 1) {
    }
  }
  *(uint *)(*plVar12 + (int64_t)iVar4 * 4) = ~(1 << ((byte)iVar13 & 0x1f)) & uVar9;
  iVar13 = iVar13 + iVar4 * 0x20;
LAB_1808ba66b:
  *(short *)((int64_t)plVar12 + 10) = *(short *)((int64_t)plVar12 + 10) + 1;
  if (*(short *)((int64_t)plVar12 + 10) == 0x200) {
    uVar1 = *(ushort *)((int64_t)plVar12 + 0xc);
    *(uint *)((int64_t)param_1 + 0x1c) = (uint)uVar1;
    if (uVar1 != 0xfff) {
      *(int16_t *)(*param_1 + 0xe + (uint64_t)uVar1 * 0x10) = 0xfff;
      *(int16_t *)((int64_t)plVar12 + 0xc) = 0xfff;
    }
  }
  *(int *)((int64_t)param_1 + 0x14) = *(int *)((int64_t)param_1 + 0x14) + 1;
  lVar6 = (int64_t)iVar13 * 0x68 + *plVar12 + 0x40;
  *param_2 = lVar6;
  func_0x0001808d5870(lVar6,param_3,param_4);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_1808ba6e0(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4,
             int32_t param_5,uint64_t param_6)

{
  ushort uVar1;
  uint64_t *puVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int iVar13;
  uint64_t in_stack_ffffffffffffffb8;
  int32_t uVar14;
  
  uVar14 = (int32_t)((uint64_t)in_stack_ffffffffffffffb8 >> 0x20);
  if (param_2 == (int64_t *)0x0) {
    return 0x1f;
  }
  iVar4 = *(int *)((int64_t)param_1 + 0x1c);
  plVar7 = (int64_t *)0x0;
  iVar13 = -1;
  if (iVar4 != 0xfff) goto LAB_1808ba865;
  iVar4 = (int)param_1[1];
  if ((int)param_1[3] < 1) {
    if (iVar4 == 0xfff) {
      return 0x26;
    }
    iVar8 = iVar4 + 1;
    uVar9 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
    iVar3 = (*(uint *)((int64_t)param_1 + 0xc) ^ uVar9) - uVar9;
    if (iVar3 < iVar8) {
      iVar10 = (int)((float)iVar3 * 1.5);
      iVar3 = iVar8;
      if (iVar8 <= iVar10) {
        iVar3 = iVar10;
      }
      if (iVar3 < 4) {
        iVar10 = 4;
      }
      else if (iVar10 < iVar8) {
        iVar10 = iVar8;
      }
      iVar3 = FUN_180748010(param_1,iVar10);
      plVar11 = (int64_t *)0x0;
      if (iVar3 != 0) goto LAB_1808ba7e2;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    plVar11 = (int64_t *)((int64_t)iVar4 * 0x10 + *param_1);
  }
  else {
    plVar11 = plVar7;
    if (0 < iVar4) {
      pbVar5 = (byte *)(*param_1 + 8);
      plVar12 = plVar7;
      do {
        iVar3 = (int)plVar12;
        if ((*pbVar5 & 1) != 0) {
          *(int *)(param_1 + 3) = (int)param_1[3] + -1;
          plVar11 = (int64_t *)((int64_t)iVar3 * 0x10 + *param_1);
          iVar4 = iVar3;
          break;
        }
        plVar12 = (int64_t *)(uint64_t)(iVar3 + 1U);
        pbVar5 = pbVar5 + 0x10;
        plVar11 = (int64_t *)0x0;
      } while ((int)(iVar3 + 1U) < iVar4);
    }
  }
LAB_1808ba7e2:
  lVar6 = FUN_180741d10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x21040,8,&unknown_var_2816_ptr,
                        CONCAT44(uVar14,0xf0),0,0);
  *plVar11 = lVar6;
  if (lVar6 == 0) {
    return 0x26;
  }
  *(int32_t *)(plVar11 + 1) = 0;
  *(int16_t *)((int64_t)plVar11 + 0xc) = *(int16_t *)((int64_t)param_1 + 0x1c);
  *(int *)((int64_t)param_1 + 0x1c) = iVar4;
  *(int16_t *)((int64_t)plVar11 + 0xe) = 0xfff;
  puVar2 = (uint64_t *)*plVar11;
  *puVar2 = 0xffffffffffffffff;
  puVar2[1] = 0xffffffffffffffff;
  puVar2[2] = 0xffffffffffffffff;
  puVar2[3] = 0xffffffffffffffff;
  puVar2[4] = 0xffffffffffffffff;
  puVar2[5] = 0xffffffffffffffff;
  puVar2[6] = 0xffffffffffffffff;
  puVar2[7] = 0xffffffffffffffff;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x200;
  iVar4 = *(int *)((int64_t)param_1 + 0x1c);
LAB_1808ba865:
  *(int *)(param_1 + 4) = iVar4;
  plVar12 = (int64_t *)((int64_t)iVar4 * 0x10 + *param_1);
  plVar11 = plVar7;
  while( true ) {
    uVar9 = *(uint *)(*plVar12 + (int64_t)plVar7 * 4);
    iVar4 = (int)plVar11;
    if (uVar9 != 0) break;
    plVar11 = (int64_t *)(uint64_t)(iVar4 + 1);
    plVar7 = (int64_t *)((int64_t)plVar7 + 1);
    if (0xf < (int64_t)plVar7) goto LAB_1808ba8be;
  }
  iVar13 = 0;
  if (uVar9 != 0) {
    for (; (uVar9 >> iVar13 & 1) == 0; iVar13 = iVar13 + 1) {
    }
  }
  *(uint *)(*plVar12 + (int64_t)iVar4 * 4) = ~(1 << ((byte)iVar13 & 0x1f)) & uVar9;
  iVar13 = iVar13 + iVar4 * 0x20;
LAB_1808ba8be:
  *(short *)((int64_t)plVar12 + 10) = *(short *)((int64_t)plVar12 + 10) + 1;
  if (*(short *)((int64_t)plVar12 + 10) == 0x200) {
    uVar1 = *(ushort *)((int64_t)plVar12 + 0xc);
    *(uint *)((int64_t)param_1 + 0x1c) = (uint)uVar1;
    if (uVar1 != 0xfff) {
      *(int16_t *)(*param_1 + 0xe + (uint64_t)uVar1 * 0x10) = 0xfff;
      *(int16_t *)((int64_t)plVar12 + 0xc) = 0xfff;
    }
  }
  *(int *)((int64_t)param_1 + 0x14) = *(int *)((int64_t)param_1 + 0x14) + 1;
  lVar6 = (int64_t)iVar13 * 0x108 + *plVar12 + 0x40;
  *param_2 = lVar6;
  func_0x00018084e1f0(lVar6,param_3,param_4,param_5,param_6);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_1808ba950(int64_t *param_1,int64_t *param_2,int8_t param_3,uint64_t param_4,
             uint64_t param_5,int32_t param_6,uint64_t param_7)

{
  ushort uVar1;
  uint64_t *puVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int iVar13;
  uint64_t in_stack_ffffffffffffffc0;
  uint uVar14;
  
  uVar14 = (uint)((uint64_t)in_stack_ffffffffffffffc0 >> 0x20);
  if (param_2 == (int64_t *)0x0) {
    return 0x1f;
  }
  iVar4 = *(int *)((int64_t)param_1 + 0x1c);
  plVar7 = (int64_t *)0x0;
  iVar13 = -1;
  if (iVar4 != 0xfff) goto LAB_1808baad6;
  iVar4 = (int)param_1[1];
  if ((int)param_1[3] < 1) {
    if (iVar4 == 0xfff) {
      return 0x26;
    }
    iVar8 = iVar4 + 1;
    uVar9 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
    iVar3 = (*(uint *)((int64_t)param_1 + 0xc) ^ uVar9) - uVar9;
    if (iVar3 < iVar8) {
      iVar10 = (int)((float)iVar3 * 1.5);
      iVar3 = iVar8;
      if (iVar8 <= iVar10) {
        iVar3 = iVar10;
      }
      if (iVar3 < 4) {
        iVar10 = 4;
      }
      else if (iVar10 < iVar8) {
        iVar10 = iVar8;
      }
      iVar3 = FUN_180748010(param_1,iVar10);
      plVar11 = (int64_t *)0x0;
      if (iVar3 != 0) goto LAB_1808baa53;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    plVar11 = (int64_t *)((int64_t)iVar4 * 0x10 + *param_1);
  }
  else {
    plVar11 = plVar7;
    if (0 < iVar4) {
      pbVar5 = (byte *)(*param_1 + 8);
      plVar12 = plVar7;
      do {
        iVar3 = (int)plVar12;
        if ((*pbVar5 & 1) != 0) {
          *(int *)(param_1 + 3) = (int)param_1[3] + -1;
          plVar11 = (int64_t *)((int64_t)iVar3 * 0x10 + *param_1);
          iVar4 = iVar3;
          break;
        }
        plVar12 = (int64_t *)(uint64_t)(iVar3 + 1U);
        pbVar5 = pbVar5 + 0x10;
        plVar11 = (int64_t *)0x0;
      } while ((int)(iVar3 + 1U) < iVar4);
    }
  }
LAB_1808baa53:
  lVar6 = FUN_180741d10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x12040,8,&unknown_var_2816_ptr,0xf0,
                        (uint64_t)uVar14 << 0x20,0);
  *plVar11 = lVar6;
  if (lVar6 == 0) {
    return 0x26;
  }
  *(int32_t *)(plVar11 + 1) = 0;
  *(int16_t *)((int64_t)plVar11 + 0xc) = *(int16_t *)((int64_t)param_1 + 0x1c);
  *(int *)((int64_t)param_1 + 0x1c) = iVar4;
  *(int16_t *)((int64_t)plVar11 + 0xe) = 0xfff;
  puVar2 = (uint64_t *)*plVar11;
  *puVar2 = 0xffffffffffffffff;
  puVar2[1] = 0xffffffffffffffff;
  puVar2[2] = 0xffffffffffffffff;
  puVar2[3] = 0xffffffffffffffff;
  puVar2[4] = 0xffffffffffffffff;
  puVar2[5] = 0xffffffffffffffff;
  puVar2[6] = 0xffffffffffffffff;
  puVar2[7] = 0xffffffffffffffff;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x200;
  iVar4 = *(int *)((int64_t)param_1 + 0x1c);
LAB_1808baad6:
  *(int *)(param_1 + 4) = iVar4;
  plVar12 = (int64_t *)((int64_t)iVar4 * 0x10 + *param_1);
  plVar11 = plVar7;
  while( true ) {
    uVar14 = *(uint *)(*plVar12 + (int64_t)plVar7 * 4);
    iVar4 = (int)plVar11;
    if (uVar14 != 0) break;
    plVar11 = (int64_t *)(uint64_t)(iVar4 + 1);
    plVar7 = (int64_t *)((int64_t)plVar7 + 1);
    if (0xf < (int64_t)plVar7) goto LAB_1808bab2e;
  }
  iVar13 = 0;
  if (uVar14 != 0) {
    for (; (uVar14 >> iVar13 & 1) == 0; iVar13 = iVar13 + 1) {
    }
  }
  *(uint *)(*plVar12 + (int64_t)iVar4 * 4) = ~(1 << ((byte)iVar13 & 0x1f)) & uVar14;
  iVar13 = iVar13 + iVar4 * 0x20;
LAB_1808bab2e:
  *(short *)((int64_t)plVar12 + 10) = *(short *)((int64_t)plVar12 + 10) + 1;
  if (*(short *)((int64_t)plVar12 + 10) == 0x200) {
    uVar1 = *(ushort *)((int64_t)plVar12 + 0xc);
    *(uint *)((int64_t)param_1 + 0x1c) = (uint)uVar1;
    if (uVar1 != 0xfff) {
      *(int16_t *)(*param_1 + 0xe + (uint64_t)uVar1 * 0x10) = 0xfff;
      *(int16_t *)((int64_t)plVar12 + 0xc) = 0xfff;
    }
  }
  *(int *)((int64_t)param_1 + 0x14) = *(int *)((int64_t)param_1 + 0x14) + 1;
  lVar6 = (int64_t)iVar13 * 0x90 + *plVar12 + 0x40;
  *param_2 = lVar6;
  func_0x0001808b39a0(lVar6,param_3,param_4,param_5,param_6,param_7);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




