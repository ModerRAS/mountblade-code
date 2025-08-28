#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part349.c - 16 个函数

// 函数: void FUN_1804565b0(longlong *param_1,float *param_2,float *param_3,float param_4,float *param_5,
void FUN_1804565b0(longlong *param_1,float *param_2,float *param_3,float param_4,float *param_5,
                  uint64_t *param_6,longlong *param_7,int32_t param_8)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int8_t auStack_168 [32];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  int32_t uStack_12c;
  int32_t uStack_128;
  void *puStack_110;
  int32_t uStack_108;
  int32_t uStack_104;
  int8_t uStack_100;
  uint64_t uStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  int32_t uStack_d4;
  int32_t uStack_d0;
  int8_t uStack_cc;
  void **ppuStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  float fStack_9c;
  void **ppuStack_98;
  longlong alStack_88 [3];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  int32_t uStack_60;
  int iStack_48;
  ulonglong uStack_38;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_168;
  if (*(code **)(*param_1 + 0xb8) == (code *)&unknown_var_128_ptr) {
    lVar2 = param_1[0xda];
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0xb8))();
  }
  if (lVar2 == 0) {
    bVar3 = false;
  }
  else {
    *param_7 = 0;
    fStack_130 = param_3[2] - param_2[2];
    fStack_134 = param_3[1] - param_2[1];
    fStack_138 = *param_3 - *param_2;
    iStack_48 = 0;
    puStack_110 = &unknown_var_6432_ptr;
    uStack_104 = param_8;
    uStack_108 = 2;
    uStack_100 = 0;
    fStack_148 = *param_2;
    fStack_144 = param_2[1];
    fStack_140 = param_2[2];
    fStack_13c = param_2[3];
    uStack_12c = 0x7f7fffff;
    uStack_128 = func_0x00018023a1e0(&fStack_138);
    if (0.011 < param_4) {
      fStack_c0 = fStack_148;
      fStack_bc = fStack_144;
      fStack_b8 = fStack_140;
      fStack_b4 = fStack_13c;
      fStack_b0 = fStack_138;
      fStack_ac = fStack_134;
      fStack_a8 = fStack_130;
      uStack_a4 = uStack_12c;
      ppuStack_98 = &puStack_110;
      plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x28f8) + 0x318);
      uStack_a0 = uStack_128;
      fStack_9c = param_4;
      (**(code **)(*plVar1 + 0x148))(plVar1,&fStack_c0,alStack_88);
    }
    else {
      fStack_f0 = fStack_148;
      fStack_ec = fStack_144;
      fStack_e8 = fStack_140;
      fStack_e4 = fStack_13c;
      fStack_e0 = fStack_138;
      fStack_dc = fStack_134;
      fStack_d8 = fStack_130;
      uStack_d4 = uStack_12c;
      uStack_cc = 0;
      ppuStack_c8 = &puStack_110;
      plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x28f8) + 0x318);
      uStack_d0 = uStack_128;
      (**(code **)(*plVar1 + 0x118))(plVar1,&fStack_f0);
    }
    bVar3 = 0 < iStack_48;
    if (0 < iStack_48) {
      *param_5 = SQRT((*param_2 - fStack_6c) * (*param_2 - fStack_6c) +
                      (param_2[1] - fStack_68) * (param_2[1] - fStack_68) +
                      (param_2[2] - fStack_64) * (param_2[2] - fStack_64));
      *param_6 = CONCAT44(fStack_68,fStack_6c);
      param_6[1] = CONCAT44(uStack_60,fStack_64);
      if ((alStack_88[0] != 0) && (*(longlong *)(alStack_88[0] + 0x10) != 0)) {
        *param_7 = *(longlong *)(alStack_88[0] + 0x10);
      }
    }
    iStack_48 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_168,bVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180456820(void)
void FUN_180456820(void)

{
  int iVar1;
  
  iVar1 = (int)((*(longlong *)(*(longlong *)(_DAT_180c86870 + 8) + 0x20) -
                *(longlong *)(*(longlong *)(_DAT_180c86870 + 8) + 0x18)) / 0x70);
  if ((1 < iVar1) && (*(int *)(SYSTEM_STATE_MANAGER + 0x1f10) < iVar1)) {
    return;
  }
  GetSystemMetrics(0);
  GetSystemMetrics(1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804568c0(void)
void FUN_1804568c0(void)

{
  int iVar1;
  
  iVar1 = (int)((*(longlong *)(*(longlong *)(_DAT_180c86870 + 8) + 0x20) -
                *(longlong *)(*(longlong *)(_DAT_180c86870 + 8) + 0x18)) / 0x70);
  if ((1 < iVar1) && (*(int *)(SYSTEM_STATE_MANAGER + 0x1f10) < iVar1)) {
    return;
  }
  GetSystemMetrics(0);
  GetSystemMetrics(1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1804569a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if ((iVar1 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x30))(iVar1);
  }
  if ((iVar1 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))(iVar1);
  }
  return iVar1;
}





// 函数: void FUN_180456a10(void)
void FUN_180456a10(void)

{
  void *puStack_30;
  longlong lStack_28;
  
  FUN_180627910(&puStack_30);
  puStack_30 = &unknown_var_3456_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180456b15)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180456a60(uint64_t *param_1)

{
  longlong *plStackX_8;
  longlong *plStack_38;
  int32_t uStack_30;
  int32_t uStack_2c;
  void *puStack_28;
  longlong lStack_20;
  
  FUN_180627910(&puStack_28);
  FUN_1800b31f0(_DAT_180c86930,&plStackX_8,&puStack_28,1);
  plStack_38 = plStackX_8;
  if (plStackX_8 == (longlong *)0x0) {
    plStack_38 = (longlong *)0x0;
    uStack_30 = 0xffffffff;
    puStack_28 = &unknown_var_3456_ptr;
    if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    uStack_30 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plStack_38 + 0x28))(plStack_38);
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    puStack_28 = &unknown_var_3456_ptr;
    if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  *param_1 = plStack_38;
  param_1[1] = CONCAT44(uStack_2c,uStack_30);
  return param_1;
}



uint64_t
FUN_180456b70(uint64_t param_1,uint64_t param_2,int8_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  void *puStack_30;
  longlong lStack_28;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180627910(&puStack_30);
  uVar1 = FUN_180240430(param_1,&puStack_30,param_3,param_4,uVar1);
  puStack_30 = &unknown_var_3456_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180456bf0(int32_t *param_1,longlong param_2)
void FUN_180456bf0(int32_t *param_1,longlong param_2)

{
  longlong *plVar1;
  uint64_t uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint64_t *puVar5;
  int32_t extraout_XMM0_Da;
  int32_t uVar6;
  int8_t auStack_e8 [40];
  longlong *plStack_c0;
  uint64_t uStack_b8;
  int32_t uStack_b0;
  int32_t uStack_ac;
  uint64_t uStack_a8;
  longlong *plStack_a0;
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_a8 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_e8;
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x240,0x10,3);
  plVar3 = (longlong *)FUN_1802fb490(uVar2);
  uVar6 = extraout_XMM0_Da;
  plStack_a0 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    uVar6 = (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  puStack_98 = &unknown_var_3480_ptr;
  puStack_90 = auStack_80;
  uStack_88 = 0;
  auStack_80[0] = 0;
  if (param_2 != 0) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(char *)(param_2 + lVar4) != '\0');
    uStack_88 = (int32_t)lVar4;
    uVar6 = strcpy_s(auStack_80,0x40,param_2);
  }
  puVar5 = (uint64_t *)FUN_1800b3970(uVar6,&plStack_c0,&puStack_98,1);
  uVar2 = *puVar5;
  if (plStack_c0 != (longlong *)0x0) {
    (**(code **)(*plStack_c0 + 0x38))();
  }
  puStack_98 = &unknown_var_720_ptr;
  puVar5 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
  *puVar5 = &unknown_var_1864_ptr;
  *puVar5 = &unknown_var_1608_ptr;
  puVar5[9] = 0;
  puVar5[10] = 0;
  *puVar5 = &unknown_var_1912_ptr;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xb] = 0;
  uStack_b8 = puVar5;
  FUN_1802f8a10(puVar5,uVar2);
  FUN_1802fa090(plVar3,uVar2,puVar5);
  plVar1 = plVar3;
  uStack_b0 = 0xffffffff;
  if (plVar3 != (longlong *)0x0) {
    uStack_b0 = (**(code **)(*plVar3 + 8))(plVar3);
    uStack_b8 = plVar3;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    plVar1 = uStack_b8;
  }
  uStack_b8 = plVar1;
  *param_1 = (int32_t)uStack_b8;
  param_1[1] = uStack_b8._4_4_;
  param_1[2] = uStack_b0;
  param_1[3] = uStack_ac;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180456de0(int32_t param_1,longlong param_2,longlong param_3,int32_t param_4)
void FUN_180456de0(int32_t param_1,longlong param_2,longlong param_3,int32_t param_4)

{
  int32_t *puVar1;
  longlong *plVar2;
  longlong lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int32_t *in_RCX;
  char cVar6;
  int8_t auStack_f8 [32];
  uint64_t uStack_d8;
  int32_t uStack_d0;
  int32_t uStack_cc;
  longlong *plStack_c0;
  uint64_t uStack_b8;
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_f8;
  puStack_a8 = &unknown_var_3480_ptr;
  puStack_a0 = auStack_90;
  uStack_98 = 0;
  auStack_90[0] = 0;
  if (param_3 != 0) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_3 + lVar3) != '\0');
    uStack_98 = (int32_t)lVar3;
    param_1 = strcpy_s(auStack_90,0x40);
  }
  puVar4 = (uint64_t *)FUN_1800b3970(param_1,&plStack_c0,&puStack_a8,1);
  uVar5 = *puVar4;
  if (plStack_c0 != (longlong *)0x0) {
    (**(code **)(*plStack_c0 + 0x38))();
  }
  puStack_a8 = &unknown_var_720_ptr;
  uStack_d8 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x58,8,3);
  *uStack_d8 = (longlong)&unknown_var_1864_ptr;
  *uStack_d8 = (longlong)&unknown_var_1608_ptr;
  uStack_d8[9] = 0;
  uStack_d8[10] = 0;
  *uStack_d8 = (longlong)&unknown_var_7088_ptr;
  FUN_1802ec3d0(param_2,uVar5,uStack_d8);
  plVar2 = *(longlong **)(param_2 + 0x260);
  uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x28,8,3);
  lVar3 = FUN_180435440(uVar5);
  cVar6 = '\0';
  if ('\0' < (char)plVar2[4]) {
    uStack_d8 = (longlong *)CONCAT44(param_4,param_4);
    do {
      puVar1 = (int32_t *)(*(longlong *)(lVar3 + 0x18) + (longlong)cVar6 * 0x10);
      *puVar1 = param_4;
      puVar1[1] = param_4;
      puVar1[2] = param_4;
      puVar1[3] = param_4;
      cVar6 = cVar6 + '\x01';
      uStack_d0 = param_4;
      uStack_cc = param_4;
    } while (cVar6 < (char)plVar2[4]);
  }
  plVar2[0x1b] = lVar3;
  cVar6 = '\0';
  if ('\0' < (char)plVar2[4]) {
    do {
      uStack_d8 = (longlong *)CONCAT44(param_4,param_4);
      uStack_d0 = param_4;
      uStack_cc = param_4;
      FUN_1802ffe10(plVar2,cVar6,&uStack_d8);
      cVar6 = cVar6 + '\x01';
    } while (cVar6 < (char)plVar2[4]);
  }
  FUN_1802fbb40(*(uint64_t *)(param_2 + 0x260));
  FUN_1802fbc50(*(uint64_t *)(param_2 + 0x260));
  uStack_d0 = (**(code **)(*plVar2 + 8))(plVar2);
  uStack_d8 = plVar2;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  *in_RCX = (int32_t)uStack_d8;
  in_RCX[1] = uStack_d8._4_4_;
  in_RCX[2] = uStack_d0;
  in_RCX[3] = uStack_cc;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_f8);
}





// 函数: void FUN_180456ff0(longlong param_1,uint64_t param_2,longlong param_3)
void FUN_180456ff0(longlong param_1,uint64_t param_2,longlong param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  longlong lVar3;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  if (param_1 != 0) {
    lVar3 = FUN_18063b470(&uStack_18,param_3);
    uVar1 = *(uint64_t *)(param_3 + 0x30);
    uVar2 = *(uint64_t *)(param_3 + 0x38);
    *(uint64_t *)(lVar3 + 0x30) = uStack_18;
    *(uint64_t *)(lVar3 + 0x38) = uStack_10;
    *(uint64_t *)(lVar3 + 0x40) = uVar1;
    *(uint64_t *)(lVar3 + 0x48) = uVar2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180457040(longlong param_1,char param_2,uint64_t *param_3)
void FUN_180457040(longlong param_1,char param_2,uint64_t *param_3)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint *puVar4;
  int8_t auStack_c8 [32];
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint64_t uStack_48;
  uint64_t uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_c8;
  if (param_1 == 0) {
    *param_3 = 0x3f800000;
    param_3[1] = 0;
    param_3[2] = 0x3f80000000000000;
    param_3[3] = 0;
    *(int32_t *)(param_3 + 4) = 0;
    *(int32_t *)((longlong)param_3 + 0x24) = 0;
    *(int32_t *)(param_3 + 5) = 0x3f800000;
    *(int32_t *)((longlong)param_3 + 0x2c) = 0;
    *(int32_t *)(param_3 + 6) = 0;
    *(int32_t *)((longlong)param_3 + 0x34) = 0;
    *(int32_t *)(param_3 + 7) = 0;
    *(int32_t *)((longlong)param_3 + 0x3c) = 0x3f800000;
  }
  else {
    if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
      FUN_1802fac00(param_1,*(longlong *)(param_1 + 0x10) + 0x70,0xbf800000);
    }
    puVar4 = (uint *)((longlong)param_2 * 0x100 + *(longlong *)(param_1 + 0x18));
    do {
      LOCK();
      uVar1 = *puVar4;
      *puVar4 = *puVar4 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    uStack_a8 = puVar4[1];
    uStack_a4 = puVar4[2];
    uStack_a0 = puVar4[3];
    uStack_9c = puVar4[4];
    uVar2 = *(uint64_t *)(puVar4 + 5);
    uVar3 = *(uint64_t *)(puVar4 + 7);
    *puVar4 = 0;
    uStack_98 = uVar2;
    uStack_90 = uVar3;
    uStack_58 = uStack_a8;
    uStack_54 = uStack_a4;
    uStack_50 = uStack_a0;
    uStack_4c = uStack_9c;
    uStack_48 = uVar2;
    uStack_40 = uVar3;
    FUN_18063b5f0(&uStack_88,&uStack_a8);
    *(int32_t *)param_3 = uStack_88;
    *(int32_t *)((longlong)param_3 + 4) = uStack_84;
    *(int32_t *)(param_3 + 1) = uStack_80;
    *(int32_t *)((longlong)param_3 + 0xc) = uStack_7c;
    *(int32_t *)(param_3 + 2) = uStack_78;
    *(int32_t *)((longlong)param_3 + 0x14) = uStack_74;
    *(int32_t *)(param_3 + 3) = uStack_70;
    *(int32_t *)((longlong)param_3 + 0x1c) = uStack_6c;
    *(int32_t *)(param_3 + 4) = uStack_68;
    *(int32_t *)((longlong)param_3 + 0x24) = uStack_64;
    *(int32_t *)(param_3 + 5) = uStack_60;
    *(int32_t *)((longlong)param_3 + 0x2c) = uStack_5c;
    param_3[6] = uVar2;
    param_3[7] = uVar3;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_c8);
}





// 函数: void FUN_180457076(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180457076(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint *puVar3;
  longlong unaff_RBX;
  char unaff_SIL;
  int32_t *unaff_RDI;
  bool in_ZF;
  uint uVar4;
  uint uStack000000000000002c;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  uint in_stack_00000070;
  uint uStack0000000000000074;
  uint in_stack_00000078;
  uint uStack000000000000007c;
  uint64_t in_stack_00000080;
  uint64_t in_stack_00000088;
  ulonglong in_stack_00000090;
  
  if (in_ZF) {
    FUN_1802fac00(param_1,*(longlong *)(param_1 + 0x10) + 0x70,0xbf800000);
  }
  puVar3 = (uint *)((longlong)unaff_SIL * 0x100 + *(longlong *)(unaff_RBX + 0x18));
  do {
    LOCK();
    uVar4 = *puVar3;
    *puVar3 = *puVar3 | 1;
    UNLOCK();
  } while ((uVar4 & 1) != 0);
  uVar4 = puVar3[1];
  uStack0000000000000074 = puVar3[2];
  in_stack_00000078 = puVar3[3];
  uStack000000000000002c = puVar3[4];
  uVar1 = *(uint64_t *)(puVar3 + 5);
  uVar2 = *(uint64_t *)(puVar3 + 7);
  *puVar3 = 0;
  in_stack_00000070 = uVar4;
  uStack000000000000007c = uStack000000000000002c;
  in_stack_00000080 = uVar1;
  in_stack_00000088 = uVar2;
  FUN_18063b5f0(&stack0x00000040,&stack0x00000020);
  *unaff_RDI = uStack0000000000000040;
  unaff_RDI[1] = uStack0000000000000044;
  unaff_RDI[2] = uStack0000000000000048;
  unaff_RDI[3] = uStack000000000000004c;
  unaff_RDI[4] = uStack0000000000000050;
  unaff_RDI[5] = uStack0000000000000054;
  unaff_RDI[6] = uStack0000000000000058;
  unaff_RDI[7] = uStack000000000000005c;
  unaff_RDI[8] = uStack0000000000000060;
  unaff_RDI[9] = uStack0000000000000064;
  unaff_RDI[10] = uStack0000000000000068;
  unaff_RDI[0xb] = uStack000000000000006c;
  *(uint64_t *)(unaff_RDI + 0xc) = uVar1;
  *(uint64_t *)(unaff_RDI + 0xe) = uVar2;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000090 ^ (ulonglong)&stack0x00000000,uStack0000000000000050,
                uStack0000000000000060,param_4,uVar4);
}





// 函数: void FUN_180457104(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_180457104(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
  ulonglong in_stack_00000090;
  
  *param_3 = 0x3f800000;
  param_3[1] = 0;
  param_3[2] = 0x3f80000000000000;
  param_3[3] = 0;
  *(int32_t *)(param_3 + 4) = 0;
  *(int32_t *)((longlong)param_3 + 0x24) = 0;
  *(int32_t *)(param_3 + 5) = 0x3f800000;
  *(int32_t *)((longlong)param_3 + 0x2c) = 0;
  *(int32_t *)(param_3 + 6) = 0;
  *(int32_t *)((longlong)param_3 + 0x34) = 0;
  *(int32_t *)(param_3 + 7) = 0;
  *(int32_t *)((longlong)param_3 + 0x3c) = 0x3f800000;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000090 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180457150(longlong param_1,uint64_t param_2,uint64_t *param_3)
void FUN_180457150(longlong param_1,uint64_t param_2,uint64_t *param_3)

{
  uint uVar1;
  void *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  char cVar5;
  void *puVar6;
  uint *puVar7;
  void *puVar8;
  int8_t auStack_f8 [32];
  void *puStack_d8;
  void *puStack_d0;
  int32_t uStack_c0;
  uint64_t uStack_b8;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint64_t uStack_48;
  uint64_t uStack_40;
  ulonglong uStack_38;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_f8;
  FUN_180627910(&puStack_d8);
  if (param_1 == 0) {
    *param_3 = 0x3f800000;
    param_3[1] = 0;
    param_3[2] = 0x3f80000000000000;
    param_3[3] = 0;
    *(int32_t *)(param_3 + 4) = 0;
    *(int32_t *)((longlong)param_3 + 0x24) = 0;
    *(int32_t *)(param_3 + 5) = 0x3f800000;
    *(int32_t *)((longlong)param_3 + 0x2c) = 0;
    *(int32_t *)(param_3 + 6) = 0;
    *(int32_t *)((longlong)param_3 + 0x34) = 0;
    *(int32_t *)(param_3 + 7) = 0;
    *(int32_t *)((longlong)param_3 + 0x3c) = 0x3f800000;
  }
  else {
    cVar5 = FUN_18040b330(*(uint64_t *)(param_1 + 0x208),&puStack_d8,1);
    if (cVar5 == -1) {
      puVar8 = &system_buffer_ptr;
      if (puStack_d0 != (void *)0x0) {
        puVar8 = puStack_d0;
      }
      puVar2 = *(void **)(*(longlong *)(param_1 + 0x10) + 0x290);
      puVar6 = &system_buffer_ptr;
      if (puVar2 != (void *)0x0) {
        puVar6 = puVar2;
      }
      FUN_180626f80(&unknown_var_9728_ptr,puVar6,puVar8);
      *param_3 = 0x3f800000;
      param_3[1] = 0;
      param_3[2] = 0x3f80000000000000;
      param_3[3] = 0;
      *(int32_t *)(param_3 + 4) = 0;
      *(int32_t *)((longlong)param_3 + 0x24) = 0;
      *(int32_t *)(param_3 + 5) = 0x3f800000;
      *(int32_t *)((longlong)param_3 + 0x2c) = 0;
      param_3[6] = 0;
      param_3[7] = 0x3f80000000000000;
    }
    if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
      FUN_1802fac00(param_1,*(longlong *)(param_1 + 0x10) + 0x70,0xbf800000);
    }
    puVar7 = (uint *)((longlong)cVar5 * 0x100 + *(longlong *)(param_1 + 0x18));
    do {
      LOCK();
      uVar1 = *puVar7;
      *puVar7 = *puVar7 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    uStack_a8 = puVar7[1];
    uStack_a4 = puVar7[2];
    uStack_a0 = puVar7[3];
    uStack_9c = puVar7[4];
    uVar3 = *(uint64_t *)(puVar7 + 5);
    uVar4 = *(uint64_t *)(puVar7 + 7);
    *puVar7 = 0;
    uStack_98 = uVar3;
    uStack_90 = uVar4;
    uStack_58 = uStack_a8;
    uStack_54 = uStack_a4;
    uStack_50 = uStack_a0;
    uStack_4c = uStack_9c;
    uStack_48 = uVar3;
    uStack_40 = uVar4;
    FUN_18063b5f0(&uStack_88,&uStack_a8);
    *(int32_t *)param_3 = uStack_88;
    *(int32_t *)((longlong)param_3 + 4) = uStack_84;
    *(int32_t *)(param_3 + 1) = uStack_80;
    *(int32_t *)((longlong)param_3 + 0xc) = uStack_7c;
    *(int32_t *)(param_3 + 2) = uStack_78;
    *(int32_t *)((longlong)param_3 + 0x14) = uStack_74;
    *(int32_t *)(param_3 + 3) = uStack_70;
    *(int32_t *)((longlong)param_3 + 0x1c) = uStack_6c;
    param_3[4] = uStack_68;
    param_3[5] = uStack_60;
    param_3[6] = uVar3;
    param_3[7] = uVar4;
  }
  puStack_d8 = &unknown_var_3456_ptr;
  if (puStack_d0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_d0 = (void *)0x0;
  uStack_c0 = 0;
  puStack_d8 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_f8);
}



bool FUN_180457330(uint64_t param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plStackX_10;
  void *puStack_28;
  longlong lStack_20;
  
  FUN_180627910(&puStack_28,param_1);
  plVar2 = (longlong *)FUN_1800b3970();
  lVar1 = *plVar2;
  if (plStackX_10 != (longlong *)0x0) {
    (**(code **)(*plStackX_10 + 0x38))();
  }
  puStack_28 = &unknown_var_3456_ptr;
  if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return lVar1 != 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804573f0(uint64_t param_1,longlong *param_2,int8_t param_3)
void FUN_1804573f0(uint64_t param_1,longlong *param_2,int8_t param_3)

{
  uint64_t uVar1;
  longlong *plVar2;
  longlong *plStackX_8;
  longlong *plStackX_10;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16,0xfffffffffffffffe);
    plVar2 = (longlong *)FUN_180275090(uVar1);
    plStackX_10 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    plStackX_8 = param_2;
    (**(code **)(*param_2 + 0x28))(param_2);
    FUN_180275cf0(plVar2,0,&plStackX_8,1);
    FUN_1802fbf30(param_1,param_3,plVar2,&system_data_0300);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180457570(longlong param_1,uint64_t param_2,int8_t param_3,uint64_t param_4)
void FUN_180457570(longlong param_1,uint64_t param_2,int8_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  void *puStack_30;
  longlong lStack_28;
  
  if (param_1 != 0) {
    uVar2 = 0xfffffffffffffffe;
    uVar1 = FUN_180627910(&puStack_30);
    uVar1 = FUN_18020bef0(_DAT_180c868e8,uVar1);
    FUN_1802ffb00(param_1,uVar1,param_3,param_4,uVar2);
    puStack_30 = &unknown_var_3456_ptr;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}





// 函数: void FUN_180457610(uint64_t param_1)
void FUN_180457610(uint64_t param_1)

{
  longlong lVar1;
  
  FUN_1802feaf0(param_1,1);
  lVar1 = FUN_1803009f0(param_1);
  *(uint64_t *)(lVar1 + 0x1008) = 0;
  *(uint64_t *)(lVar1 + 0x1010) = 0;
  *(uint64_t *)(lVar1 + 0x1018) = 0;
  *(uint64_t *)(lVar1 + 0x1020) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180457650(uint64_t param_1,longlong *param_2)
void FUN_180457650(uint64_t param_1,longlong *param_2)

{
  uint64_t uVar1;
  longlong *plVar2;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16,0xfffffffffffffffe);
  plVar2 = (longlong *)FUN_180275090(uVar1);
  plStackX_10 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  pplStackX_18 = &plStackX_8;
  plStackX_8 = param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  FUN_180275cf0(plVar2,0,&plStackX_8,1);
  plStackX_8 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  pplStackX_18 = &plStackX_8;
  FUN_1802fc0f0(param_1,plStackX_8);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  return;
}



longlong * FUN_1804577e0(longlong *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong *plStack_20;
  int32_t uStack_18;
  int32_t uStack_14;
  
  if (param_2 != 0) {
    plStack_20 = (longlong *)FUN_1802fc690(param_2,&plStackX_8,param_3,param_4,0xfffffffffffffffe);
    plStack_20 = (longlong *)*plStack_20;
    plStackX_10 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      (**(code **)(*plStack_20 + 0x28))(plStack_20);
    }
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if (plStack_20 != (longlong *)0x0) {
      uStack_18 = (**(code **)(*plStack_20 + 8))(plStack_20);
      (**(code **)(*plStack_20 + 0x28))(plStack_20);
      (**(code **)(*plStack_20 + 0x38))(plStack_20);
      goto LAB_180457871;
    }
  }
  plStack_20 = (longlong *)0x0;
  uStack_18 = 0xffffffff;
LAB_180457871:
  *param_1 = (longlong)plStack_20;
  param_1[1] = CONCAT44(uStack_14,uStack_18);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180457890(longlong param_1,char param_2,int32_t *param_3)
void FUN_180457890(longlong param_1,char param_2,int32_t *param_3)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint *puVar4;
  int8_t auStack_b8 [32];
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint64_t uStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint64_t uStack_38;
  uint64_t uStack_30;
  ulonglong uStack_28;
  
  if (param_1 != 0) {
    uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_b8;
    puVar4 = (uint *)((longlong)param_2 * 0x100 + *(longlong *)(param_1 + 0x18));
    do {
      LOCK();
      uVar1 = *puVar4;
      *puVar4 = *puVar4 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    uStack_98 = puVar4[1];
    uStack_94 = puVar4[2];
    uStack_90 = puVar4[3];
    uStack_8c = puVar4[4];
    uVar2 = *(uint64_t *)(puVar4 + 5);
    uVar3 = *(uint64_t *)(puVar4 + 7);
    *puVar4 = 0;
    uStack_88 = uVar2;
    uStack_80 = uVar3;
    uStack_48 = uStack_98;
    uStack_44 = uStack_94;
    uStack_40 = uStack_90;
    uStack_3c = uStack_8c;
    uStack_38 = uVar2;
    uStack_30 = uVar3;
    FUN_18063b5f0(&uStack_78,&uStack_98);
    *param_3 = uStack_78;
    param_3[1] = uStack_74;
    param_3[2] = uStack_70;
    param_3[3] = uStack_6c;
    param_3[4] = uStack_68;
    param_3[5] = uStack_64;
    param_3[6] = uStack_60;
    param_3[7] = uStack_5c;
    param_3[8] = uStack_58;
    param_3[9] = uStack_54;
    param_3[10] = uStack_50;
    param_3[0xb] = uStack_4c;
    *(uint64_t *)(param_3 + 0xc) = uVar2;
    *(uint64_t *)(param_3 + 0xe) = uVar3;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_b8);
  }
  return;
}





