#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_14_part007.c - 25 个函数

// 函数: void FUN_1808eccc0(int64_t param_1,uint64_t *param_2,int64_t *param_3)
void FUN_1808eccc0(int64_t param_1,uint64_t *param_2,int64_t *param_3)

{
  char cVar1;
  int iVar2;
  int64_t *plVar3;
  int8_t auStack_f8 [32];
  uint uStack_d8;
  uint uStack_d0;
  uint uStack_c8;
  uint uStack_c0;
  uint uStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  int32_t uStack_88;
  ushort uStack_84;
  ushort uStack_82;
  byte bStack_80;
  byte bStack_7f;
  byte bStack_7e;
  byte bStack_7d;
  byte bStack_7c;
  byte bStack_7b;
  byte bStack_7a;
  byte bStack_79;
  int64_t lStack_78;
  int8_t auStack_70 [16];
  int8_t auStack_60 [40];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  *param_3 = param_1;
  plVar3 = *(int64_t **)(param_1 + 8);
  cVar1 = FUN_1808c5cb0(param_2,plVar3);
  if (cVar1 != '\0') {
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,&uStack_88);
      plVar3 = (int64_t *)
               (**(code **)(*(int64_t *)*param_2 + 0x120))((int64_t *)*param_2,&uStack_88,1);
      if (plVar3 == (int64_t *)0x0) {
        uStack_90 = (uint)bStack_79;
        uStack_98 = (uint)bStack_7a;
        uStack_a0 = (uint)bStack_7b;
        uStack_a8 = (uint)bStack_7c;
        uStack_b0 = (uint)bStack_7d;
        uStack_b8 = (uint)bStack_7e;
        uStack_c0 = (uint)bStack_7f;
        uStack_c8 = (uint)bStack_80;
        uStack_d0 = (uint)uStack_82;
        uStack_d8 = (uint)uStack_84;
                    // WARNING: Subroutine does not return
        FUN_18076b390(auStack_60,0x27,&unknown_var_8960_ptr,uStack_88);
      }
    }
    lStack_78 = plVar3[4];
    if (lStack_78 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,auStack_70);
      iVar2 = FUN_1808bf8e0(*(uint64_t *)(param_1 + 0x20),auStack_70,&lStack_78);
      if (iVar2 != 0) goto LAB_1808ece25;
    }
    *param_3 = lStack_78;
  }
LAB_1808ece25:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_f8);
}






// 函数: void FUN_1808ecd9e(void)
void FUN_1808ecd9e(void)

{
  uint uStack0000000000000028;
  uint64_t in_stack_00000070;
  
  uStack0000000000000028 = (uint)in_stack_00000070._6_2_;
                    // WARNING: Subroutine does not return
  FUN_18076b390();
}






// 函数: void FUN_1808ecdd9(void)
void FUN_1808ecdd9(void)

{
  int iVar1;
  int64_t unaff_RBP;
  int64_t *unaff_R14;
  int64_t *unaff_R15;
  int64_t lStack0000000000000080;
  uint64_t in_stack_000000c0;
  
  lStack0000000000000080 = unaff_R14[4];
  if (lStack0000000000000080 == 0) {
    (**(code **)(*unaff_R14 + 0x18))();
    iVar1 = FUN_1808bf8e0(*(uint64_t *)(unaff_RBP + 0x20),&stack0x00000088,&stack0x00000080);
    if (iVar1 != 0) goto LAB_1808ece25;
  }
  *unaff_R15 = lStack0000000000000080;
LAB_1808ece25:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000c0 ^ (uint64_t)&stack0x00000000);
}



uint64_t FUN_1808ece70(int64_t param_1,uint64_t param_2,int8_t *param_3)

{
  uint64_t uVar1;
  int aiStackX_8 [2];
  uint auStackX_20 [2];
  
  aiStackX_8[0] = 8;
  if (*(int64_t *)(param_1 + 0x20) == 0) {
    uVar1 = FUN_18073e550(*(uint64_t *)(param_1 + 0x18),aiStackX_8,0,0,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (aiStackX_8[0] < 0) {
      return 0x1c;
    }
    if ((1 < aiStackX_8[0]) && (4 < aiStackX_8[0] - 3U)) {
      return 0x1c;
    }
    if (((aiStackX_8[0] == 0) || (aiStackX_8[0] == 6)) &&
       (uVar1 = FUN_18073e810(*(uint64_t *)(param_1 + 0x18),*(int32_t *)(param_1 + 0x28),
                              param_1 + 0x20), (int)uVar1 != 0)) {
      return uVar1;
    }
  }
  if (*(int64_t *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_18073e550(*(int64_t *)(param_1 + 0x20),aiStackX_8,0,0,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if ((aiStackX_8[0] < 0) || ((1 < aiStackX_8[0] && (4 < aiStackX_8[0] - 3U)))) {
      return 0x1c;
    }
    if ((aiStackX_8[0] == 0) || (aiStackX_8[0] == 6)) {
      auStackX_20[0] = 0;
      uVar1 = FUN_18073e470(*(uint64_t *)(param_1 + 0x20),auStackX_20);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if ((auStackX_20[0] & 2) == 0) {
        auStackX_20[0] = auStackX_20[0] & 0xfffffffa | 2;
        uVar1 = FUN_18073ee30(*(uint64_t *)(param_1 + 0x20));
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        uVar1 = FUN_18073e550(*(uint64_t *)(param_1 + 0x20),aiStackX_8,0,0,0);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if (aiStackX_8[0] != 0) {
          return 0x1c;
        }
        goto LAB_1808ecfc9;
      }
    }
  }
  if ((aiStackX_8[0] != 0) && (aiStackX_8[0] != 6)) {
    *param_3 = 0;
    return 0;
  }
LAB_1808ecfc9:
  *param_3 = 1;
  return 0;
}



uint64_t FUN_1808ecfe0(int64_t param_1,uint64_t param_2,int8_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  if ((*(int64_t *)(param_1 + 0x50) == 0) && (lVar1 = *(int64_t *)(param_1 + 0x40), lVar1 != 0)) {
    lVar2 = (**(code **)(**(int64_t **)(param_1 + 8) + 8))();
    if (lVar2 == 0) {
      *(int64_t *)(param_1 + 0x50) = lVar1;
    }
    else {
      uVar3 = FUN_18073e810(lVar1,0,param_1 + 0x50);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  if (*(int64_t *)(param_1 + 0x50) == 0) {
    if ((2 < *(int *)(param_1 + 0x48) - 1U) && (*(int *)(param_1 + 0x48) != 5)) {
      *param_3 = 0;
      return 0x4c;
    }
    *param_3 = 0;
  }
  else {
    *param_3 = 1;
  }
  return 0;
}



uint64_t FUN_1808ed080(int64_t param_1,int64_t param_2,int8_t *param_3)

{
  uint64_t uVar1;
  int64_t lVar2;
  int aiStackX_10 [2];
  
  if (param_2 == 0) {
LAB_1808ed18e:
    uVar1 = 0x1c;
  }
  else {
    *param_3 = 0;
    if (*(int64_t *)(param_2 + 0x10) != 0) {
      aiStackX_10[0] = 8;
      if (*(int64_t *)(param_2 + 0x18) == 0) {
        uVar1 = FUN_18073e550(*(int64_t *)(param_2 + 0x10),aiStackX_10,0,0,0);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if ((aiStackX_10[0] < 0) || ((1 < aiStackX_10[0] && (4 < aiStackX_10[0] - 3U))))
        goto LAB_1808ed18e;
        if ((aiStackX_10[0] == 0) || (aiStackX_10[0] == 6)) {
          lVar2 = (**(code **)(**(int64_t **)(param_1 + 8) + 8))();
          if (lVar2 == 0) {
            *(uint64_t *)(param_2 + 0x18) = *(uint64_t *)(param_2 + 0x10);
            *param_3 = 1;
            return 0;
          }
          uVar1 = FUN_18073e810(*(uint64_t *)(param_2 + 0x10),0,param_2 + 0x18);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
        }
      }
      if (*(int64_t *)(param_2 + 0x18) != 0) {
        uVar1 = FUN_18073e550(*(int64_t *)(param_2 + 0x18),aiStackX_10,0,0,0);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if ((aiStackX_10[0] < 0) || ((1 < aiStackX_10[0] && (4 < aiStackX_10[0] - 3U))))
        goto LAB_1808ed18e;
        if ((aiStackX_10[0] != 0) && (aiStackX_10[0] != 6)) {
          *param_3 = 0;
          return 0;
        }
        *param_3 = 1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_1808ed1d0(int64_t *param_1,char param_2)

{
  uint64_t uVar1;
  char acStackX_8 [8];
  
  if ((((int)param_1[9] == 0) || ((int)param_1[9] == 7)) &&
     (uVar1 = FUN_1808e0ca0(*(uint64_t *)(param_1[4] + 0x790),param_1), (int)uVar1 != 0)) {
    return uVar1;
  }
  if (param_2 != '\0') {
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1,0,acStackX_8);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if ((acStackX_8[0] == (char)uVar1) &&
       (uVar1 = func_0x0001808e1600(*(uint64_t *)(param_1[4] + 0x790)), (int)uVar1 != 0)) {
      return uVar1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_1808ed250(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             int8_t param_5,int32_t param_6,uint64_t *param_7)

{
  int iVar1;
  uint64_t uVar2;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  int64_t lStack_128;
  uint64_t uStack_120;
  int8_t auStack_118 [216];
  uint64_t uStack_40;
  uint64_t *puStack_18;
  
  if (*(int64_t *)(param_1 + 8) == 0) {
    return 0x1c;
  }
  puStack_18 = param_7;
  uStack_40 = 0x1808ed28f;
  uVar2 = FUN_18073adf0(param_3,*(uint64_t *)(*(int64_t *)(param_1 + 8) + 0x30),param_4,param_5);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar2 = *param_7;
  puStack_18 = (uint64_t *)(GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158);
  lStack_128 = 0;
  iVar1 = FUN_180758ed0(uVar2,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x0001807580b0(uStack_120,param_6);
    if (iVar1 == 0) goto LAB_18073fff8;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074b7d0(auStack_118,0x100,param_6);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,2,uVar2,&unknown_var_7336_ptr);
  }
LAB_18073fff8:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker((uint64_t)puStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808ed27b(void)
void FUN_1808ed27b(void)

{
  uint64_t uVar1;
  int iVar2;
  uint64_t uVar3;
  int32_t in_stack_00000068;
  uint64_t *in_stack_00000070;
  int8_t auStack_120 [32];
  int8_t *puStack_100;
  int64_t lStack_f0;
  uint64_t uStack_e8;
  int8_t auStack_e0 [216];
  uint64_t uStack_8;
  
  uStack_8 = 0x1808ed28f;
  iVar2 = FUN_18073adf0();
  if (iVar2 != 0) {
    return;
  }
  uVar1 = *in_stack_00000070;
  uVar3 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_120;
  lStack_f0 = 0;
  iVar2 = FUN_180758ed0(uVar1,&uStack_e8,&lStack_f0);
  if (iVar2 == 0) {
    iVar2 = func_0x0001807580b0(uStack_e8,in_stack_00000068);
    if (iVar2 == 0) goto LAB_18073fff8;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074b7d0(auStack_e0,0x100,in_stack_00000068);
    puStack_100 = auStack_e0;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar2,2,uVar1,&unknown_var_7336_ptr);
  }
LAB_18073fff8:
  if (lStack_f0 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uVar3 ^ (uint64_t)auStack_120);
}






// 函数: void FUN_1808ed2a8(void)
void FUN_1808ed2a8(void)

{
  return;
}






// 函数: void FUN_1808ed2d0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1808ed2d0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int8_t param_5,int32_t param_6,uint64_t param_7)

{
  FUN_1808ed390(*(uint64_t *)(param_1 + 0x20),param_3,param_4,param_5,param_6,param_7);
  return;
}






// 函数: void FUN_1808ed310(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1808ed310(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int8_t param_5,int32_t param_6,uint64_t param_7)

{
  FUN_1808ed390(*(uint64_t *)(param_1 + 0x50),param_3,param_4,param_5,param_6,param_7);
  return;
}






// 函数: void FUN_1808ed350(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1808ed350(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                  int8_t param_5,int32_t param_6,uint64_t param_7)

{
  FUN_1808ed390(*(uint64_t *)(param_2 + 0x18),param_3,param_4,param_5,param_6,param_7);
  return;
}



uint64_t
FUN_1808ed390(int64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4,
             int32_t param_5,uint64_t param_6)

{
  uint64_t uVar1;
  int32_t auStackX_8 [2];
  
  if (param_1 == 0) {
    uVar1 = 0x4c;
  }
  else {
    auStackX_8[0] = 0;
    uVar1 = FUN_18073de20(0,auStackX_8,0);
    if ((int)uVar1 == 0) {
      uVar1 = FUN_18073ecb0(param_1,auStackX_8[0],param_5);
      if ((int)uVar1 == 0) {
        uVar1 = FUN_18073afc0(param_2,param_1,param_3,param_4,param_6);
      }
    }
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808ed440(uint64_t *param_1)
void FUN_1808ed440(uint64_t *param_1)

{
  (**(code **)*param_1)(param_1,0);
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&unknown_var_1344_ptr,0x24a,1);
}



uint64_t FUN_1808ed480(int64_t *param_1)

{
  int iVar1;
  uint64_t uVar2;
  
  if ((int)param_1[5] < 1) {
    return 0x1c;
  }
  iVar1 = (int)param_1[5] + -1;
  *(int *)(param_1 + 5) = iVar1;
  if ((iVar1 == 0) && (uVar2 = (**(code **)(*param_1 + 0x60))(), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808ed4b0(uint64_t *param_1)
void FUN_1808ed4b0(uint64_t *param_1)

{
  (**(code **)*param_1)(param_1,0);
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&unknown_var_1344_ptr,0x7e,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808ed4f0(uint64_t *param_1)
void FUN_1808ed4f0(uint64_t *param_1)

{
  (**(code **)*param_1)(param_1,0);
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&unknown_var_1344_ptr,0x32d,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808ed530(uint64_t *param_1)
void FUN_1808ed530(uint64_t *param_1)

{
  (**(code **)*param_1)(param_1,0);
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&unknown_var_1344_ptr,0xef,1);
}



uint64_t FUN_1808ed570(int64_t *param_1)

{
  int iVar1;
  uint64_t uVar2;
  
  if ((int)param_1[5] < 1) {
    return 0x1c;
  }
  iVar1 = (int)param_1[5] + -1;
  *(int *)(param_1 + 5) = iVar1;
  if ((iVar1 == 0) && (uVar2 = (**(code **)(*param_1 + 0x60))(param_1,1), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808ed5a0(int64_t param_1,int64_t *param_2)

{
  uint64_t uVar1;
  
  if (param_2 == (int64_t *)0x0) {
    return 0x1c;
  }
  if (param_2[2] != 0) {
    uVar1 = FUN_1808e0750(*(uint64_t *)(*(int64_t *)(param_1 + 0x20) + 0x788));
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  *(int64_t *)param_2[1] = *param_2;
  *(int64_t *)(*param_2 + 8) = param_2[1];
  param_2[1] = (int64_t)param_2;
  *param_2 = (int64_t)param_2;
  *(int64_t **)param_2[1] = param_2;
  *(int64_t *)(*param_2 + 8) = param_2[1];
  param_2[1] = (int64_t)param_2;
  *param_2 = (int64_t)param_2;
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&unknown_var_1344_ptr,0x2aa,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808ed680(int64_t *param_1,int param_2)
void FUN_1808ed680(int64_t *param_1,int param_2)

{
  int iVar1;
  int8_t auStack_c8 [32];
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  uint uStack_78;
  uint uStack_70;
  uint uStack_68;
  uint uStack_60;
  char acStack_58 [4];
  int32_t uStack_54;
  ushort uStack_50;
  ushort uStack_4e;
  byte bStack_4c;
  byte bStack_4b;
  byte bStack_4a;
  byte bStack_49;
  byte bStack_48;
  byte bStack_47;
  byte bStack_46;
  byte bStack_45;
  int8_t auStack_40 [40];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  if (param_2 != 0) {
    if (1 < param_2 - 1U) {
      acStack_58[0] = '\0';
      iVar1 = (**(code **)(*param_1 + 0x10))(param_1,0,acStack_58);
      if ((iVar1 == 0) && (acStack_58[0] != '\0')) goto FUN_1808ed7b8;
    }
    (**(code **)(*(int64_t *)param_1[1] + 0x18))((int64_t *)param_1[1],&uStack_54);
    uStack_60 = (uint)bStack_45;
    uStack_68 = (uint)bStack_46;
    uStack_70 = (uint)bStack_47;
    uStack_78 = (uint)bStack_48;
    uStack_80 = (uint)bStack_49;
    uStack_88 = (uint)bStack_4a;
    uStack_90 = (uint)bStack_4b;
    uStack_98 = (uint)bStack_4c;
    uStack_a0 = (uint)uStack_4e;
    uStack_a8 = (uint)uStack_50;
                    // WARNING: Subroutine does not return
    FUN_18076b390(auStack_40,0x27,&unknown_var_8960_ptr,uStack_54);
  }
FUN_1808ed7b8:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_c8);
}






// 函数: void FUN_1808ed6d7(int64_t *param_1)
void FUN_1808ed6d7(int64_t *param_1)

{
  uint64_t in_stack_00000070;
  int16_t in_stack_00000078;
  
  (**(code **)(*param_1 + 0x18))();
                    // WARNING: Subroutine does not return
  FUN_18076b390(&stack0x00000088,0x27,&unknown_var_8960_ptr,in_stack_00000070._4_4_,in_stack_00000078);
}






// 函数: void FUN_1808ed7b8(void)
void FUN_1808ed7b8(void)

{
  uint64_t in_stack_000000b0;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000b0 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808ed7e0(int64_t param_1,int param_2)
void FUN_1808ed7e0(int64_t param_1,int param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  bool bVar4;
  int iVar5;
  int8_t auStack_c8 [32];
  uint64_t uStack_a8;
  int aiStack_98 [4];
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int8_t auStack_68 [64];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  puVar1 = (uint64_t *)(param_1 + 0x30);
  if (param_2 == 0) {
    bVar4 = false;
    for (puVar2 = (uint64_t *)*puVar1; puVar2 != puVar1; puVar2 = (uint64_t *)*puVar2) {
      uVar3 = puVar2[2];
      uStack_a8 = 0;
      iVar5 = FUN_18073e550(uVar3,aiStack_98,0,0);
      while ((iVar5 == 0 && (aiStack_98[0] == 1))) {
        if (!bVar4) {
          (**(code **)(**(int64_t **)(param_1 + 8) + 0x18))(*(int64_t **)(param_1 + 8),&uStack_78)
          ;
          uStack_88 = uStack_78;
          uStack_84 = uStack_74;
          uStack_80 = uStack_70;
          uStack_7c = uStack_6c;
          FUN_18074b650(auStack_68,0x40);
          bVar4 = true;
        }
        FUN_180768bf0(1);
        uStack_a8 = 0;
        iVar5 = FUN_18073e550(uVar3,aiStack_98,0,0);
      }
      if (puVar2 == puVar1) break;
    }
  }
  else {
    (**(code **)(**(int64_t **)(param_1 + 8) + 0x18))(*(int64_t **)(param_1 + 8),&uStack_88);
    uStack_78 = uStack_88;
    uStack_74 = uStack_84;
    uStack_70 = uStack_80;
    uStack_6c = uStack_7c;
    FUN_18074b650(auStack_68,0x40,&uStack_78);
    for (puVar2 = (uint64_t *)*puVar1; puVar2 != puVar1; puVar2 = (uint64_t *)*puVar2) {
      uVar3 = puVar2[2];
      puVar2[2] = 0;
      puVar2[3] = 0;
      iVar5 = FUN_18073ebd0(uVar3);
      if ((iVar5 != 0) || (puVar2 == puVar1)) break;
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_c8);
}






// 函数: void FUN_1808ed87f(void)
void FUN_1808ed87f(void)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  bool bVar3;
  int iVar4;
  uint64_t *unaff_RDI;
  int64_t unaff_R15;
  int in_stack_00000030;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  uint64_t in_stack_000000a0;
  
  bVar3 = false;
  for (puVar1 = (uint64_t *)*unaff_RDI; puVar1 != unaff_RDI; puVar1 = (uint64_t *)*puVar1) {
    uVar2 = puVar1[2];
    iVar4 = FUN_18073e550(uVar2,&stack0x00000030,0,0,0);
    while ((iVar4 == 0 && (in_stack_00000030 == 1))) {
      if (!bVar3) {
        (**(code **)(**(int64_t **)(unaff_R15 + 8) + 0x18))
                  (*(int64_t **)(unaff_R15 + 8),&stack0x00000050);
        uStack0000000000000040 = uStack0000000000000050;
        uStack0000000000000044 = uStack0000000000000054;
        uStack0000000000000048 = uStack0000000000000058;
        uStack000000000000004c = uStack000000000000005c;
        FUN_18074b650(&stack0x00000060,0x40);
        bVar3 = true;
      }
      FUN_180768bf0(1);
      iVar4 = FUN_18073e550(uVar2,&stack0x00000030,0,0,0);
    }
    if (puVar1 == unaff_RDI) break;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000a0 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808ed895(void)
void FUN_1808ed895(void)

{
  int64_t lVar1;
  int iVar2;
  char unaff_BL;
  int64_t *unaff_RSI;
  int64_t *unaff_RDI;
  int64_t unaff_R15;
  int in_stack_00000030;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  uint64_t in_stack_000000a0;
  
  do {
    lVar1 = unaff_RSI[2];
    iVar2 = FUN_18073e550(lVar1,&stack0x00000030,0,0,0);
    while ((iVar2 == 0 && (in_stack_00000030 == 1))) {
      if (unaff_BL == '\0') {
        (**(code **)(**(int64_t **)(unaff_R15 + 8) + 0x18))
                  (*(int64_t **)(unaff_R15 + 8),&stack0x00000050);
        uStack0000000000000040 = uStack0000000000000050;
        uStack0000000000000044 = uStack0000000000000054;
        uStack0000000000000048 = uStack0000000000000058;
        uStack000000000000004c = uStack000000000000005c;
        FUN_18074b650(&stack0x00000060,0x40);
        unaff_BL = '\x01';
      }
      FUN_180768bf0(1);
      iVar2 = FUN_18073e550(lVar1,&stack0x00000030,0,0,0);
    }
  } while ((unaff_RSI != unaff_RDI) && (unaff_RSI = (int64_t *)*unaff_RSI, unaff_RSI != unaff_RDI))
  ;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000a0 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808ed93a(void)
void FUN_1808ed93a(void)

{
  uint64_t in_stack_000000a0;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000a0 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808ed942(void)
void FUN_1808ed942(void)

{
  uint64_t in_stack_000000a0;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000a0 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808ed970(int64_t param_1)
void FUN_1808ed970(int64_t param_1)

{
  int iVar1;
  int8_t auStack_b8 [32];
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  uint uStack_78;
  uint uStack_70;
  uint uStack_68;
  uint uStack_60;
  uint uStack_58;
  uint uStack_50;
  int32_t uStack_48;
  ushort uStack_44;
  ushort uStack_42;
  byte bStack_40;
  byte bStack_3f;
  byte bStack_3e;
  byte bStack_3d;
  byte bStack_3c;
  byte bStack_3b;
  byte bStack_3a;
  byte bStack_39;
  int8_t auStack_38 [40];
  uint64_t uStack_10;
  
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  if (*(int *)(param_1 + 0x28) < 1) {
    *(uint64_t *)(param_1 + 0x50) = 0;
    iVar1 = FUN_1808e1d30(*(uint64_t *)(*(int64_t *)(param_1 + 0x20) + 0x790),param_1);
    if (iVar1 == 0) {
      if (*(int64_t *)(param_1 + 8) != 0) {
        *(uint64_t *)(*(int64_t *)(param_1 + 8) + 0x20) = 0;
        *(uint64_t *)(param_1 + 8) = 0;
      }
      if (*(int *)(param_1 + 0x28) == 0) {
        FUN_1808e1b70(*(uint64_t *)(*(int64_t *)(param_1 + 0x20) + 0x790),param_1,0);
      }
    }
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_10 ^ (uint64_t)auStack_b8);
  }
  (**(code **)(**(int64_t **)(param_1 + 8) + 0x18))(*(int64_t **)(param_1 + 8),&uStack_48);
  uStack_50 = (uint)bStack_39;
  uStack_58 = (uint)bStack_3a;
  uStack_60 = (uint)bStack_3b;
  uStack_68 = (uint)bStack_3c;
  uStack_70 = (uint)bStack_3d;
  uStack_78 = (uint)bStack_3e;
  uStack_80 = (uint)bStack_3f;
  uStack_88 = (uint)bStack_40;
  uStack_90 = (uint)uStack_42;
  uStack_98 = (uint)uStack_44;
                    // WARNING: Subroutine does not return
  FUN_18076b390(auStack_38,0x27,&unknown_var_8960_ptr,uStack_48);
}






// 函数: void FUN_1808ed9a6(int64_t *param_1)
void FUN_1808ed9a6(int64_t *param_1)

{
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t in_R11;
  int32_t uStack0000000000000070;
  int16_t uStack0000000000000074;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RSI;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RDI;
  (**(code **)(*param_1 + 0x18))();
                    // WARNING: Subroutine does not return
  FUN_18076b390(&stack0x00000080,0x27,&unknown_var_8960_ptr,uStack0000000000000070,uStack0000000000000074);
}






// 函数: void FUN_1808eda44(void)
void FUN_1808eda44(void)

{
  int iVar1;
  int64_t unaff_RBP;
  uint64_t in_stack_000000a8;
  
  *(uint64_t *)(unaff_RBP + 0x50) = 0;
  iVar1 = FUN_1808e1d30(*(uint64_t *)(*(int64_t *)(unaff_RBP + 0x20) + 0x790));
  if (iVar1 == 0) {
    if (*(int64_t *)(unaff_RBP + 8) != 0) {
      *(uint64_t *)(*(int64_t *)(unaff_RBP + 8) + 0x20) = 0;
      *(uint64_t *)(unaff_RBP + 8) = 0;
    }
    if (*(int *)(unaff_RBP + 0x28) == 0) {
      FUN_1808e1b70(*(uint64_t *)(*(int64_t *)(unaff_RBP + 0x20) + 0x790));
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000a8 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808edac0(int64_t param_1)
void FUN_1808edac0(int64_t param_1)

{
  int8_t auStack_b8 [32];
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  uint uStack_78;
  uint uStack_70;
  uint uStack_68;
  uint uStack_60;
  uint uStack_58;
  uint uStack_50;
  int32_t uStack_48;
  ushort uStack_44;
  ushort uStack_42;
  byte bStack_40;
  byte bStack_3f;
  byte bStack_3e;
  byte bStack_3d;
  byte bStack_3c;
  byte bStack_3b;
  byte bStack_3a;
  byte bStack_39;
  int8_t auStack_38 [40];
  uint64_t uStack_10;
  
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  (**(code **)(**(int64_t **)(param_1 + 8) + 0x18))(*(int64_t **)(param_1 + 8),&uStack_48);
  uStack_50 = (uint)bStack_39;
  uStack_58 = (uint)bStack_3a;
  uStack_60 = (uint)bStack_3b;
  uStack_68 = (uint)bStack_3c;
  uStack_70 = (uint)bStack_3d;
  uStack_78 = (uint)bStack_3e;
  uStack_80 = (uint)bStack_3f;
  uStack_88 = (uint)bStack_40;
  uStack_90 = (uint)uStack_42;
  uStack_98 = (uint)uStack_44;
                    // WARNING: Subroutine does not return
  FUN_18076b390(auStack_38,0x27,&unknown_var_8960_ptr,uStack_48);
}






// 函数: void FUN_1808edbf0(int param_1,int32_t param_2,uint *param_3)
void FUN_1808edbf0(int param_1,int32_t param_2,uint *param_3)

{
  uint uVar1;
  float fVar2;
  
  if (param_1 == 0) {
    uVar1 = sinf(param_2);
    *param_3 = uVar1;
    return;
  }
  if (param_1 == 2) {
    uVar1 = FUN_1808edcf0(param_2);
    *param_3 = uVar1;
    return;
  }
  if (param_1 == 1) {
    fVar2 = (float)sinf(param_2);
    if (fVar2 < 0.0) {
      *param_3 = 0xbf800000;
      return;
    }
    *param_3 = 0x3f800000;
    return;
  }
  if (param_1 == 3) {
    uVar1 = FUN_1808edcb0(param_2);
    *param_3 = uVar1;
    return;
  }
  if (param_1 == 4) {
    uVar1 = FUN_1808edcb0(param_2);
    *param_3 = uVar1 ^ 0x80000000;
    return;
  }
  *param_3 = 0;
  return;
}



float FUN_1808edcb0(float param_1)

{
  float fVar1;
  
  fVar1 = (float)fmodf(param_1 * 0.31830987 + 1.0);
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + 2.0;
  }
  return fVar1 - 1.0;
}



float FUN_1808edcf0(float param_1)

{
  float fVar1;
  
  fVar1 = (float)fmodf(param_1 + 1.5707964,0x40c90fdb);
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + 6.2831855;
  }
  fVar1 = fVar1 - 3.1415927;
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  return 1.0 - fVar1 * 0.63661975;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




