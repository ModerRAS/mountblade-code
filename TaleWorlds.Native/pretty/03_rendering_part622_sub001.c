#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part622_sub001.c - 8 个函数

#include "TaleWorlds.Native.Split.h"

// 03_rendering_part622.c - 8 个函数


// 函数: void FUN_1806121d0(void)
void FUN_1806121d0(void)

{
  int8_t auStack_238 [32];
  int8_t auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_238;
  if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
    *(int8_t *)(_DAT_180c92580 + 0x670) = 1;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_238);
  }
  FUN_180626eb0(auStack_218,0x200,&unknown_var_1952_ptr,&unknown_var_8432_ptr);
  FUN_18061c7a0(auStack_218);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180612270(void)
void FUN_180612270(void)

{
  int8_t auStack_268 [32];
  longlong alStack_248 [3];
  int32_t uStack_230;
  uint64_t uStack_228;
  int8_t auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_228 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_268;
  if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
    alStack_248[0] = 0;
    alStack_248[1] = 0;
    alStack_248[2] = 0;
    uStack_230 = 3;
    FUN_1805f83e0(0x180c92c58,alStack_248,&system_data_2cf8);
    if (alStack_248[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    FUN_180567bb0(_DAT_180c92580,&system_data_2cf8,0x180c92c58);
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_268);
  }
  FUN_180626eb0(auStack_218,0x200,&unknown_var_1952_ptr,&unknown_var_8352_ptr);
  FUN_18061c7a0(auStack_218);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_268);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180612360(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180612360(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int8_t auStack_80 [32];
  int8_t auStack_60 [32];
  int8_t auStack_40 [40];
  
  uVar1 = _DAT_180c92580;
  uVar2 = FUN_180627910(auStack_80,param_4);
  uVar3 = FUN_180627910(auStack_60,param_3);
  uVar4 = FUN_180627910(auStack_40,param_2);
  FUN_180567fd0(uVar1,uVar4,uVar3,uVar2,param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180612410(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180612410(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int8_t auStack_30 [40];
  
  uVar1 = _DAT_180c92580;
  uVar3 = 0xfffffffffffffffe;
  uVar2 = FUN_180627910(auStack_30);
  FUN_180568ac0(uVar1,uVar2,param_3,param_4,uVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_180612460(uint64_t param_1)

{
  int32_t uVar1;
  int8_t auStackX_10 [8];
  void *puStack_c8;
  longlong lStack_c0;
  int32_t uStack_b8;
  ulonglong uStack_b0;
  void *puStack_a8;
  longlong lStack_a0;
  int32_t uStack_98;
  ulonglong uStack_90;
  void *puStack_88;
  longlong lStack_80;
  int32_t uStack_78;
  ulonglong uStack_70;
  void *puStack_68;
  longlong lStack_60;
  int32_t uStack_58;
  ulonglong uStack_50;
  void *puStack_48;
  longlong lStack_40;
  uint64_t uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  FUN_1800bc000(&puStack_48,param_1);
  puStack_c8 = &unknown_var_3456_ptr;
  uStack_b0 = 0;
  lStack_c0 = 0;
  uStack_b8 = 0;
  puStack_68 = &unknown_var_3456_ptr;
  uStack_50 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  puStack_88 = &unknown_var_3456_ptr;
  uStack_70 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  puStack_a8 = &unknown_var_3456_ptr;
  uStack_90 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  FUN_1803211e0(&puStack_48,&puStack_c8,&puStack_68,&puStack_88,&puStack_a8,auStackX_10);
  uVar1 = (**(code **)(*_DAT_180c8f008 + 0x70))(_DAT_180c8f008,&puStack_c8);
  puStack_a8 = &unknown_var_3456_ptr;
  if (lStack_a0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_a0 = 0;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  puStack_a8 = &unknown_var_720_ptr;
  puStack_88 = &unknown_var_3456_ptr;
  if (lStack_80 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_80 = 0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  puStack_88 = &unknown_var_720_ptr;
  puStack_68 = &unknown_var_3456_ptr;
  if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_60 = 0;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  puStack_68 = &unknown_var_720_ptr;
  puStack_c8 = &unknown_var_3456_ptr;
  if (lStack_c0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_c0 = 0;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  puStack_c8 = &unknown_var_720_ptr;
  puStack_48 = &unknown_var_3456_ptr;
  if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1806125f0(uint64_t param_1)

{
  int32_t uVar1;
  int8_t auStackX_10 [8];
  void *puStack_c8;
  longlong lStack_c0;
  int32_t uStack_b8;
  ulonglong uStack_b0;
  void *puStack_a8;
  longlong lStack_a0;
  int32_t uStack_98;
  ulonglong uStack_90;
  void *puStack_88;
  longlong lStack_80;
  int32_t uStack_78;
  ulonglong uStack_70;
  void *puStack_68;
  longlong lStack_60;
  int32_t uStack_58;
  ulonglong uStack_50;
  void *puStack_48;
  longlong lStack_40;
  uint64_t uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  FUN_1800bc000(&puStack_48,param_1);
  puStack_68 = &unknown_var_3456_ptr;
  uStack_50 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  puStack_c8 = &unknown_var_3456_ptr;
  uStack_b0 = 0;
  lStack_c0 = 0;
  uStack_b8 = 0;
  puStack_88 = &unknown_var_3456_ptr;
  uStack_70 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  puStack_a8 = &unknown_var_3456_ptr;
  uStack_90 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  FUN_1803211e0(&puStack_48,&puStack_68,&puStack_c8,&puStack_88,&puStack_a8,auStackX_10);
  uVar1 = (**(code **)(*_DAT_180c8f008 + 0x70))(_DAT_180c8f008,&puStack_c8);
  puStack_a8 = &unknown_var_3456_ptr;
  if (lStack_a0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_a0 = 0;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  puStack_a8 = &unknown_var_720_ptr;
  puStack_88 = &unknown_var_3456_ptr;
  if (lStack_80 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_80 = 0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  puStack_88 = &unknown_var_720_ptr;
  puStack_c8 = &unknown_var_3456_ptr;
  if (lStack_c0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_c0 = 0;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  puStack_c8 = &unknown_var_720_ptr;
  puStack_68 = &unknown_var_3456_ptr;
  if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_60 = 0;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  puStack_68 = &unknown_var_720_ptr;
  puStack_48 = &unknown_var_3456_ptr;
  if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_180612780(uint64_t param_1)

{
  int32_t uVar1;
  int8_t auStackX_10 [8];
  void *puStack_f8;
  longlong lStack_f0;
  int32_t uStack_e8;
  ulonglong uStack_e0;
  void *puStack_d8;
  longlong lStack_d0;
  int32_t uStack_c8;
  ulonglong uStack_c0;
  void *puStack_b8;
  longlong lStack_b0;
  int32_t uStack_a8;
  ulonglong uStack_a0;
  void *puStack_98;
  longlong lStack_90;
  int32_t uStack_88;
  ulonglong uStack_80;
  void *puStack_78;
  longlong lStack_70;
  int32_t uStack_60;
  uint64_t uStack_58;
  int8_t auStack_50 [56];
  
  uStack_58 = 0xfffffffffffffffe;
  FUN_1801ec5c0(auStack_50,&unknown_var_8792_ptr);
  FUN_1800bc000(&puStack_78,param_1);
  puStack_98 = &unknown_var_3456_ptr;
  uStack_80 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  puStack_b8 = &unknown_var_3456_ptr;
  uStack_a0 = 0;
  lStack_b0 = 0;
  uStack_a8 = 0;
  puStack_f8 = &unknown_var_3456_ptr;
  uStack_e0 = 0;
  lStack_f0 = 0;
  uStack_e8 = 0;
  puStack_d8 = &unknown_var_3456_ptr;
  uStack_c0 = 0;
  lStack_d0 = 0;
  uStack_c8 = 0;
  FUN_1803211e0(&puStack_78,&puStack_98,&puStack_b8,&puStack_f8,&puStack_d8,auStackX_10);
  uVar1 = (**(code **)(*_DAT_180c8f008 + 0x70))(_DAT_180c8f008,&puStack_f8);
  puStack_d8 = &unknown_var_3456_ptr;
  if (lStack_d0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_d0 = 0;
  uStack_c0 = uStack_c0 & 0xffffffff00000000;
  puStack_d8 = &unknown_var_720_ptr;
  puStack_f8 = &unknown_var_3456_ptr;
  if (lStack_f0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_f0 = 0;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  puStack_f8 = &unknown_var_720_ptr;
  puStack_b8 = &unknown_var_3456_ptr;
  if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_b0 = 0;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  puStack_b8 = &unknown_var_720_ptr;
  puStack_98 = &unknown_var_3456_ptr;
  if (lStack_90 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_90 = 0;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  puStack_98 = &unknown_var_720_ptr;
  puStack_78 = &unknown_var_3456_ptr;
  if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_70 = 0;
  uStack_60 = 0;
  puStack_78 = &unknown_var_720_ptr;
  FUN_1801ec3f0(auStack_50);
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_180612950(uint64_t param_1)

{
  int32_t uVar1;
  int8_t auStackX_10 [8];
  void *puStack_c8;
  longlong lStack_c0;
  int32_t uStack_b8;
  ulonglong uStack_b0;
  void *puStack_a8;
  longlong lStack_a0;
  int32_t uStack_98;
  ulonglong uStack_90;
  void *puStack_88;
  longlong lStack_80;
  int32_t uStack_78;
  ulonglong uStack_70;
  void *puStack_68;
  longlong lStack_60;
  int32_t uStack_58;
  ulonglong uStack_50;
  void *puStack_48;
  longlong lStack_40;
  uint64_t uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  FUN_1800bc000(&puStack_48,param_1);
  puStack_68 = &unknown_var_3456_ptr;
  uStack_50 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  puStack_88 = &unknown_var_3456_ptr;
  uStack_70 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  puStack_a8 = &unknown_var_3456_ptr;
  uStack_90 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  puStack_c8 = &unknown_var_3456_ptr;
  uStack_b0 = 0;
  lStack_c0 = 0;
  uStack_b8 = 0;
  FUN_1803211e0(&puStack_48,&puStack_68,&puStack_88,&puStack_a8,&puStack_c8,auStackX_10);
  uVar1 = (**(code **)(*_DAT_180c8f008 + 0x70))(_DAT_180c8f008,&puStack_c8);
  puStack_c8 = &unknown_var_3456_ptr;
  if (lStack_c0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_c0 = 0;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  puStack_c8 = &unknown_var_720_ptr;
  puStack_a8 = &unknown_var_3456_ptr;
  if (lStack_a0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_a0 = 0;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  puStack_a8 = &unknown_var_720_ptr;
  puStack_88 = &unknown_var_3456_ptr;
  if (lStack_80 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_80 = 0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  puStack_88 = &unknown_var_720_ptr;
  puStack_68 = &unknown_var_3456_ptr;
  if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_60 = 0;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  puStack_68 = &unknown_var_720_ptr;
  puStack_48 = &unknown_var_3456_ptr;
  if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar1;
}



int32_t FUN_180612ae0(uint64_t param_1)

{
  int32_t auStackX_10 [2];
  void *puStack_b8;
  longlong lStack_b0;
  int32_t uStack_a8;
  ulonglong uStack_a0;
  void *puStack_98;
  longlong lStack_90;
  int32_t uStack_88;
  ulonglong uStack_80;
  void *puStack_78;
  longlong lStack_70;
  int32_t uStack_68;
  ulonglong uStack_60;
  void *puStack_58;
  longlong lStack_50;
  int32_t uStack_48;
  ulonglong uStack_40;
  void *puStack_38;
  longlong lStack_30;
  uint64_t uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  FUN_1800bc000(&puStack_38,param_1);
  puStack_58 = &unknown_var_3456_ptr;
  uStack_40 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  puStack_78 = &unknown_var_3456_ptr;
  uStack_60 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  puStack_98 = &unknown_var_3456_ptr;
  uStack_80 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  puStack_b8 = &unknown_var_3456_ptr;
  uStack_a0 = 0;
  lStack_b0 = 0;
  uStack_a8 = 0;
  FUN_1803211e0(&puStack_38,&puStack_58,&puStack_78,&puStack_98,&puStack_b8,auStackX_10);
  puStack_b8 = &unknown_var_3456_ptr;
  if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_b0 = 0;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  puStack_b8 = &unknown_var_720_ptr;
  puStack_98 = &unknown_var_3456_ptr;
  if (lStack_90 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_90 = 0;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  puStack_98 = &unknown_var_720_ptr;
  puStack_78 = &unknown_var_3456_ptr;
  if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_70 = 0;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  puStack_78 = &unknown_var_720_ptr;
  puStack_58 = &unknown_var_3456_ptr;
  if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_50 = 0;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  puStack_58 = &unknown_var_720_ptr;
  puStack_38 = &unknown_var_3456_ptr;
  if (lStack_30 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return auStackX_10[0];
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180612c60(int param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong *plStackX_10;
  int8_t auStack_40 [56];
  
  FUN_1801ec5c0(auStack_40,&unknown_var_8760_ptr,param_3,param_4,0xfffffffffffffffe);
  FUN_180535720(&system_data_6070,&plStackX_10);
  if ((param_1 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x30))(param_1);
  }
  plVar1 = plStackX_10;
  if (((int)plStackX_10[0x131b25] != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))();
  }
  *(int *)(plVar1 + 0x131b25) = param_1;
  if (plStackX_10 != (longlong *)0x0) {
    (**(code **)(*plStackX_10 + 0x38))();
  }
  FUN_1801ec3f0(auStack_40);
  return plStackX_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180612d20(uint64_t param_1,int32_t param_2)
void FUN_180612d20(uint64_t param_1,int32_t param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong *plVar4;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  void *puStack_28;
  void *puStack_20;
  
  if (_DAT_180c8a9c0 != 0) {
    uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3,0xfffffffffffffffe);
    uStack_48 = (int32_t)param_1;
    uStack_44 = (int32_t)((ulonglong)param_1 >> 0x20);
    puStack_28 = &unknown_var_7664_ptr;
    puStack_20 = &unknown_var_7632_ptr;
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = param_2;
    plVar4 = (longlong *)FUN_18006b640(uVar3,&uStack_38);
    lVar2 = _DAT_180c8a9c0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    plVar1 = *(longlong **)(lVar2 + 0x228);
    *(longlong **)(lVar2 + 0x228) = plVar4;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180612e30(longlong param_1,uint param_2,float *param_3,float param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong *plStack_80;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_68;
  int iStack_64;
  uint64_t uStack_60;
  float fStack_58;
  uint64_t uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  lVar4 = 0;
  if (-1 < (int)param_2) {
    uStack_60 = 0;
    plStack_80 = (longlong *)0x0;
    fVar10 = param_4 * param_4;
    FUN_1804ff330(param_1 + 0x98d230,param_3,param_4,&plStack_80,0);
    if (plStack_80 != (longlong *)0x0) {
      plVar6 = plStack_80;
      iVar3 = iStack_78;
      iVar5 = iStack_74;
LAB_180612ed0:
      lVar1 = *plVar6;
      if ((((-1 < *(int *)(lVar1 + 0x980)) &&
           (((&unknown_var_6480_ptr)[param_2 & 7] &
            *(byte *)((longlong)
                      ((*(int *)(param_1 + 0x87b770) >> 3) * *(int *)(lVar1 + 0x980) +
                      ((int)param_2 >> 3)) + *(longlong *)(param_1 + 0x87b768))) != 0)) &&
          ((*(uint *)(lVar1 + 0x56c) & 0x800) != 0)) && (*(int *)(lVar1 + 0x568) == 1)) {
        lVar2 = *(longlong *)(lVar1 + 0x20);
        fVar8 = param_3[1] - *(float *)(lVar2 + 0x10);
        fVar9 = *param_3 - *(float *)(lVar2 + 0xc);
        fVar7 = param_3[2] - *(float *)(lVar2 + 0x14);
        fVar7 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7;
        if (fVar7 <= fVar10) {
          lVar4 = lVar1;
          fVar10 = fVar7;
        }
      }
      plVar6 = (longlong *)plVar6[3];
      while (plVar6 == (longlong *)0x0) {
        if (iVar3 == iStack_68) {
          if (iVar5 == iStack_64) break;
          iStack_74 = iVar5 + 1;
          iVar3 = iStack_70;
          iVar5 = iStack_74;
        }
        else {
          iVar3 = iVar3 + 1;
        }
        iStack_78 = iVar3;
        plVar6 = *(longlong **)
                  ((longlong)(iStack_74 * *(int *)(param_1 + 0x98d238) + iVar3) * 9 +
                  *(longlong *)(param_1 + 0x98d248));
      }
      do {
        if ((plVar6 == (longlong *)0x0) ||
           (fVar7 = uStack_60._4_4_ - *(float *)((longlong)plVar6 + 0xc),
           ((float)uStack_60 - *(float *)(plVar6 + 1)) * ((float)uStack_60 - *(float *)(plVar6 + 1))
           + fVar7 * fVar7 <= fStack_58)) goto LAB_18061304d;
        plVar6 = (longlong *)plVar6[3];
        while (plVar6 == (longlong *)0x0) {
          if (iVar3 == iStack_68) {
            if (iVar5 == iStack_64) break;
            iStack_74 = iVar5 + 1;
            iVar3 = iStack_70;
            iVar5 = iStack_74;
          }
          else {
            iVar3 = iVar3 + 1;
          }
          iStack_78 = iVar3;
          plVar6 = *(longlong **)
                    ((longlong)(iStack_74 * *(int *)(param_1 + 0x98d238) + iVar3) * 9 +
                    *(longlong *)(param_1 + 0x98d248));
        }
      } while( true );
    }
  }
  return 0;
LAB_18061304d:
  if (plVar6 == (longlong *)0x0) {
    if (lVar4 == 0) {
      return 0;
    }
    iVar3 = *(int *)(lVar4 + 0x18);
    if ((iVar3 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x30))(iVar3);
    }
    if (iVar3 != 0) {
      if (_DAT_180c8f008 != 0) {
        (**(code **)(_DAT_180c8f008 + 0x18))(iVar3);
        return iVar3;
      }
      return iVar3;
    }
    return 0;
  }
  goto LAB_180612ed0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1806130d0(longlong param_1,uint param_2,float *param_3,float param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong *plStack_80;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_68;
  int iStack_64;
  uint64_t uStack_60;
  float fStack_58;
  uint64_t uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  lVar4 = 0;
  if (-1 < (int)param_2) {
    uStack_60 = 0;
    plStack_80 = (longlong *)0x0;
    fVar10 = param_4 * param_4;
    FUN_1804ff330(param_1 + 0x98d230,param_3,param_4,&plStack_80,0);
    if (plStack_80 != (longlong *)0x0) {
      plVar6 = plStack_80;
      iVar3 = iStack_78;
      iVar5 = iStack_74;
LAB_180613170:
      lVar1 = *plVar6;
      if ((((-1 < *(int *)(lVar1 + 0x980)) &&
           (((&unknown_var_6480_ptr)[param_2 & 7] &
            *(byte *)((longlong)
                      ((*(int *)(param_1 + 0x87b770) >> 3) * *(int *)(lVar1 + 0x980) +
                      ((int)param_2 >> 3)) + *(longlong *)(param_1 + 0x87b768))) == 0)) &&
          ((*(uint *)(lVar1 + 0x56c) & 0x800) != 0)) && (*(int *)(lVar1 + 0x568) == 1)) {
        lVar2 = *(longlong *)(lVar1 + 0x20);
        fVar8 = param_3[1] - *(float *)(lVar2 + 0x10);
        fVar9 = *param_3 - *(float *)(lVar2 + 0xc);
        fVar7 = param_3[2] - *(float *)(lVar2 + 0x14);
        fVar7 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7;
        if (fVar7 <= fVar10) {
          lVar4 = lVar1;
          fVar10 = fVar7;
        }
      }
      plVar6 = (longlong *)plVar6[3];
      while (plVar6 == (longlong *)0x0) {
        if (iVar3 == iStack_68) {
          if (iVar5 == iStack_64) break;
          iStack_74 = iVar5 + 1;
          iVar3 = iStack_70;
          iVar5 = iStack_74;
        }
        else {
          iVar3 = iVar3 + 1;
        }
        iStack_78 = iVar3;
        plVar6 = *(longlong **)
                  ((longlong)(iStack_74 * *(int *)(param_1 + 0x98d238) + iVar3) * 9 +
                  *(longlong *)(param_1 + 0x98d248));
      }
      do {
        if ((plVar6 == (longlong *)0x0) ||
           (fVar7 = uStack_60._4_4_ - *(float *)((longlong)plVar6 + 0xc),
           ((float)uStack_60 - *(float *)(plVar6 + 1)) * ((float)uStack_60 - *(float *)(plVar6 + 1))
           + fVar7 * fVar7 <= fStack_58)) goto LAB_1806132ed;
        plVar6 = (longlong *)plVar6[3];
        while (plVar6 == (longlong *)0x0) {
          if (iVar3 == iStack_68) {
            if (iVar5 == iStack_64) break;
            iStack_74 = iVar5 + 1;
            iVar3 = iStack_70;
            iVar5 = iStack_74;
          }
          else {
            iVar3 = iVar3 + 1;
          }
          iStack_78 = iVar3;
          plVar6 = *(longlong **)
                    ((longlong)(iStack_74 * *(int *)(param_1 + 0x98d238) + iVar3) * 9 +
                    *(longlong *)(param_1 + 0x98d248));
        }
      } while( true );
    }
  }
  return 0;
LAB_1806132ed:
  if (plVar6 == (longlong *)0x0) {
    if (lVar4 == 0) {
      return 0;
    }
    iVar3 = *(int *)(lVar4 + 0x18);
    if ((iVar3 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x30))(iVar3);
    }
    if (iVar3 != 0) {
      if (_DAT_180c8f008 != 0) {
        (**(code **)(_DAT_180c8f008 + 0x18))(iVar3);
        return iVar3;
      }
      return iVar3;
    }
    return 0;
  }
  goto LAB_180613170;
}






// 函数: void FUN_1806133b0(uint64_t param_1,int32_t *param_2)
void FUN_1806133b0(uint64_t param_1,int32_t *param_2)

{
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_1804f8e40(uStack_18,&uStack_18);
  return;
}






// 函数: void FUN_1806133d0(longlong param_1,uint param_2,uint64_t param_3,float param_4,int *param_5,
void FUN_1806133d0(longlong param_1,uint param_2,uint64_t param_3,float param_4,int *param_5,
                  int *param_6)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fStackX_8;
  float fStackX_c;
  uint64_t uStack_98;
  longlong *plStack_90;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_78;
  int iStack_74;
  uint64_t uStack_70;
  float fStack_68;
  
  if (-1 < (int)param_2) {
    *param_6 = 0;
    *param_5 = 0;
    uStack_70 = 0;
    plStack_90 = (longlong *)0x0;
    uStack_98 = param_3;
    FUN_1804ff330(param_1 + 0x98d230,&uStack_98,param_4,&plStack_90);
    if (plStack_90 != (longlong *)0x0) {
      fStackX_c = (float)((ulonglong)param_3 >> 0x20);
      fStackX_8 = (float)param_3;
      iVar2 = iStack_84;
LAB_1806134a0:
      lVar1 = *plStack_90;
      if ((((-1 < *(int *)(lVar1 + 0x980)) && ((*(uint *)(lVar1 + 0x56c) & 0x800) != 0)) &&
          (*(int *)(lVar1 + 0x568) == 1)) &&
         (fVar3 = fStackX_8 - *(float *)(*(longlong *)(lVar1 + 0x20) + 0xc),
         fVar4 = fStackX_c - *(float *)(*(longlong *)(lVar1 + 0x20) + 0x10),
         fVar3 * fVar3 + fVar4 * fVar4 <= param_4 * param_4)) {
        if (((&unknown_var_6480_ptr)[param_2 & 7] &
            *(byte *)((longlong)
                      ((*(int *)(param_1 + 0x87b770) >> 3) * *(int *)(lVar1 + 0x980) +
                      ((int)param_2 >> 3)) + *(longlong *)(param_1 + 0x87b768))) == 0) {
          *param_5 = *param_5 + 1;
        }
        else {
          *param_6 = *param_6 + 1;
        }
      }
      plStack_90 = (longlong *)plStack_90[3];
      while (plStack_90 == (longlong *)0x0) {
        if (iStack_88 == iStack_78) {
          if (iVar2 == iStack_74) break;
          iVar2 = iVar2 + 1;
          iStack_88 = iStack_80;
          iStack_84 = iVar2;
        }
        else {
          iStack_88 = iStack_88 + 1;
        }
        plStack_90 = *(longlong **)
                      ((longlong)(iStack_84 * *(int *)(param_1 + 0x98d238) + iStack_88) * 9 +
                      *(longlong *)(param_1 + 0x98d248));
      }
      do {
        if ((plStack_90 == (longlong *)0x0) ||
           (fVar3 = uStack_70._4_4_ - *(float *)((longlong)plStack_90 + 0xc),
           ((float)uStack_70 - *(float *)(plStack_90 + 1)) *
           ((float)uStack_70 - *(float *)(plStack_90 + 1)) + fVar3 * fVar3 <= fStack_68))
        goto LAB_1806135fd;
        plStack_90 = (longlong *)plStack_90[3];
        while (plStack_90 == (longlong *)0x0) {
          if (iStack_88 == iStack_78) {
            if (iVar2 == iStack_74) break;
            iVar2 = iVar2 + 1;
            iStack_88 = iStack_80;
            iStack_84 = iVar2;
          }
          else {
            iStack_88 = iStack_88 + 1;
          }
          plStack_90 = *(longlong **)
                        ((longlong)(iStack_84 * *(int *)(param_1 + 0x98d238) + iStack_88) * 9 +
                        *(longlong *)(param_1 + 0x98d248));
        }
      } while( true );
    }
  }
  return;
LAB_1806135fd:
  if (plStack_90 == (longlong *)0x0) {
    return;
  }
  goto LAB_1806134a0;
}






