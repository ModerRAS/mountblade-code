#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part165.c - 15 个函数

// 函数: void FUN_18036e730(longlong param_1)
void FUN_18036e730(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1802ee610(*(uint64_t *)(param_1 + 0x18));
    plVar1 = *(longlong **)(param_1 + 0x78);
    *(uint64_t *)(param_1 + 0x78) = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar1 = *(longlong **)(param_1 + 0x70);
    *(uint64_t *)(param_1 + 0x70) = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  return;
}



longlong FUN_18036e7a0(longlong param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x38))();
  }
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x88,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18036e820(uint64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x88,8,3,0xfffffffffffffffe);
  FUN_1803456e0(puVar1,param_2,param_1);
  *puVar1 = &unknown_var_2888_ptr;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18036e890(longlong param_1)
void FUN_18036e890(longlong param_1)

{
  uint *puVar1;
  uint64_t uVar2;
  longlong lVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int8_t auStack_98 [32];
  int32_t uStack_78;
  longlong *plStack_70;
  longlong *plStack_68;
  longlong *plStack_60;
  uint64_t uStack_58;
  void *puStack_50;
  int8_t *puStack_48;
  int32_t uStack_40;
  int8_t auStack_38 [32];
  ulonglong uStack_18;
  
  uStack_58 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98;
  uStack_78 = 0;
  puVar4 = (uint64_t *)FUN_1800be9a0(_DAT_180c86898,&plStack_60,0);
  uStack_78 = 1;
  puVar4 = (uint64_t *)FUN_18022cb40(*puVar4,&plStack_68);
  uVar2 = *puVar4;
  *puVar4 = 0;
  plStack_70 = *(longlong **)(param_1 + 0x80);
  *(uint64_t *)(param_1 + 0x80) = uVar2;
  if (plStack_70 != (longlong *)0x0) {
    (**(code **)(*plStack_70 + 0x38))();
  }
  if (plStack_68 != (longlong *)0x0) {
    (**(code **)(*plStack_68 + 0x38))();
  }
  uStack_78 = 0;
  if (plStack_60 != (longlong *)0x0) {
    (**(code **)(*plStack_60 + 0x38))();
  }
  plVar6 = (longlong *)(*(longlong *)(param_1 + 0x80) + 0x10);
  (**(code **)(*plVar6 + 0x10))(plVar6,&unknown_var_2816_ptr);
  lVar3 = *(longlong *)(param_1 + 0x80);
  puStack_50 = &unknown_var_672_ptr;
  puStack_48 = auStack_38;
  auStack_38[0] = 0;
  uStack_40 = 0x11;
  strcpy_s(auStack_38,0x20,&unknown_var_2856_ptr);
  uVar5 = FUN_180240430(*(uint64_t *)(lVar3 + 0x1e0),&puStack_50,0);
  *(ulonglong *)(lVar3 + 0x140) = *(ulonglong *)(lVar3 + 0x140) | uVar5;
  FUN_18022dd60(lVar3);
  *(int16_t *)(lVar3 + 0x3c0) = 0xffff;
  puStack_50 = &unknown_var_720_ptr;
  *(int8_t *)(*(longlong *)(param_1 + 0x80) + 0x13c) = 1;
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x138);
  *puVar1 = *puVar1 | 0x20100008;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_98);
}





// 函数: void FUN_18036ea40(longlong param_1)
void FUN_18036ea40(longlong param_1)

{
  longlong *plVar1;
  
  FUN_18036e730();
  if (*(longlong *)(param_1 + 0x80) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x80);
    *(uint64_t *)(param_1 + 0x80) = 0;
    if (plVar1 != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00018036ea88. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*plVar1 + 0x38))();
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18036eaa0(longlong param_1,int32_t param_2,int32_t param_3,int32_t param_4,
void FUN_18036eaa0(longlong param_1,int32_t param_2,int32_t param_3,int32_t param_4,
                  int32_t param_5,int32_t param_6)

{
  uint *puVar1;
  void *puVar2;
  uint64_t uVar3;
  longlong *plVar4;
  void *puVar5;
  longlong *plStackX_8;
  
  FUN_18036e730();
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x300,0x10,3);
  plVar4 = (longlong *)FUN_180075030(uVar3,1);
  if (plVar4 != (longlong *)0x0) {
    plStackX_8 = plVar4;
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  plStackX_8 = *(longlong **)(param_1 + 0x78);
  *(longlong **)(param_1 + 0x78) = plVar4;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x78) + 0x10);
    (**(code **)(*plVar4 + 0x10))(plVar4,&unknown_var_2832_ptr);
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x78) + 0x100);
    *puVar1 = *puVar1 | 8;
    FUN_180076910(*(uint64_t *)(param_1 + 0x78),param_1 + 0x80);
    FUN_18036ecf0(param_1,param_2,param_3,param_4,param_5,param_6);
    uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,3);
    plVar4 = (longlong *)FUN_180275090(uVar3);
    if (plVar4 != (longlong *)0x0) {
      plStackX_8 = plVar4;
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    plStackX_8 = *(longlong **)(param_1 + 0x70);
    *(longlong **)(param_1 + 0x70) = plVar4;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if (*(longlong *)(param_1 + 0x70) != 0) {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x70) + 0x1f0);
      puVar2 = *(void **)(*(longlong *)(param_1 + 0x78) + 0x18);
      puVar5 = &system_buffer_ptr;
      if (puVar2 != (void *)0x0) {
        puVar5 = puVar2;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4,puVar5);
      uVar3 = *(uint64_t *)(param_1 + 0x70);
      plStackX_8 = *(longlong **)(param_1 + 0x78);
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))();
      }
      FUN_180275cf0(uVar3,0,&plStackX_8,1);
      uVar3 = *(uint64_t *)(param_1 + 0x18);
      plStackX_8 = *(longlong **)(param_1 + 0x70);
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))();
      }
      FUN_1802edcd0(uVar3,plStackX_8,1);
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18036ecf0(longlong param_1,int32_t param_2,float param_3,float param_4,float param_5)
void FUN_18036ecf0(longlong param_1,int32_t param_2,float param_3,float param_4,float param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  float fVar4;
  int8_t auStack_238 [64];
  int32_t uStack_1f8;
  float fStack_1f0;
  int32_t uStack_1ec;
  longlong *plStack_1e8;
  longlong *plStack_1e0;
  longlong *plStack_1d0;
  longlong *plStack_1c8;
  int8_t auStack_1c0 [8];
  longlong *plStack_1b8;
  int32_t uStack_1b0;
  longlong *plStack_1a8;
  int16_t uStack_1a0;
  int8_t uStack_19e;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  longlong lStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  int32_t uStack_168;
  uint64_t uStack_140;
  longlong lStack_138;
  longlong lStack_130;
  uint64_t uStack_128;
  int32_t uStack_120;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  ulonglong uStack_e8;
  
  uStack_140 = 0xfffffffffffffffe;
  uStack_e8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_238;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
  if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x60b80), lVar1 == 0)) {
    fStack_1f0 = 20.0;
  }
  else {
    fStack_1f0 = *(float *)(*(longlong *)(param_1 + 0x18) + 0xa8) - *(float *)(lVar1 + 0x154);
  }
  if (50.0 <= fStack_1f0) {
    fStack_1f0 = 50.0;
  }
  if (89.999 <= param_3) {
    param_3 = 89.999;
  }
  fStack_194 = param_3 * 0.017453292;
  if (param_4 <= -89.999) {
    param_4 = -89.999;
  }
  fStack_190 = param_4 * 0.017453292;
  fVar4 = param_5 * 0.008726646;
  fStack_18c = (fStack_194 - fStack_190) * 0.005586592;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 3;
  uStack_1ec = 0;
  uStack_1f8 = param_2;
  plStack_1e0 = (longlong *)param_1;
  fStack_198 = fVar4;
  if (fStack_190 < fStack_194) {
    fVar4 = fStack_18c * 0.0 + fStack_190;
    if (fStack_194 <= fVar4) {
      fVar4 = fStack_194;
    }
    lStack_188 = CONCAT44(lStack_188._4_4_,fVar4);
                    // WARNING: Subroutine does not return
    FUN_1808fd400(fVar4);
  }
  lStack_138 = 0;
  lStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 3;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  plStack_1e8 = &lStack_138;
  FUN_180640330(0,0);
  FUN_18063efb0(&lStack_138,&uStack_180,0,0);
  lStack_188 = lStack_130 - lStack_138 >> 3;
  plStack_1d0 = (longlong *)0x0;
  plStack_1c8 = (longlong *)0x0;
  plStack_1e8 = (longlong *)auStack_1c0;
  plStack_1a8 = (longlong *)0x0;
  plStack_1b8 = (longlong *)0x0;
  auStack_1c0[0] = 0;
  plVar2 = *(longlong **)((longlong)plStack_1e0 + 0x78);
  if (plVar2 != (longlong *)0x0) {
    plStack_1e0 = plVar2;
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plStack_1e0 = plStack_1d0;
  plVar3 = plVar2;
  if (plStack_1d0 != (longlong *)0x0) {
    lVar1 = *plStack_1d0;
    plStack_1d0 = plVar2;
    (**(code **)(lVar1 + 0x38))();
    plVar3 = plStack_1d0;
  }
  plStack_1d0 = plVar3;
  uStack_1b0 = 0;
  plStack_1b8 = plVar2;
  FUN_18007f4c0(auStack_1c0);
  plVar2 = plStack_1a8;
  plStack_1e0 = plStack_1a8;
  if (plStack_1a8 != (longlong *)0x0) {
    (**(code **)(*plStack_1a8 + 0x28))(plStack_1a8);
  }
  plVar3 = plStack_1c8;
  plStack_1e0 = plStack_1c8;
  plStack_1c8 = plVar2;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  uStack_1a0 = 0;
  uStack_19e = 0;
  fStack_1f0 = 0.0;
  fStack_198 = fVar4 - param_5 * -0.008726646;
                    // WARNING: Subroutine does not return
  FUN_1808fd400(fStack_198 * 0.0 * 0.05 + param_5 * -0.008726646);
}





// 函数: void FUN_18036f9c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int param_4,int param_5,
void FUN_18036f9c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int param_4,int param_5,
                  int param_6,char param_7)

{
  bool bVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint64_t auStackX_18 [2];
  uint64_t uStack_48;
  uint64_t uStack_40;
  
  bVar1 = false;
  auStackX_18[0] = 0;
  param_6 = param_5 * param_6;
  uStack_48 = 0;
  uStack_40 = 0x7f7fffff3f800000;
  iVar7 = param_6 + param_4 + 1;
  iVar5 = param_4 + 1;
  iVar6 = param_4 + -1;
  while( true ) {
    while( true ) {
      iVar8 = iVar6;
      uVar2 = FUN_1802350e0(param_2,param_6 + param_4,auStackX_18,&unknown_var_3248_ptr,&uStack_48);
      iVar6 = iVar7;
      if (param_7 == '\0') {
        iVar6 = param_6 + iVar8;
      }
      uVar3 = FUN_1802350e0(param_2,iVar6,auStackX_18,&unknown_var_3248_ptr,&uStack_48);
      iVar6 = param_6 + iVar8;
      if (param_7 == '\0') {
        iVar6 = iVar7;
      }
      uVar4 = FUN_1802350e0(param_2,iVar6,auStackX_18,&unknown_var_3248_ptr,&uStack_48);
      FUN_180235410(param_2,uVar2,uVar3,uVar4);
      iVar6 = iVar8;
      param_4 = iVar5;
      if (iVar8 == 0) break;
      if ((iVar5 == param_5 + -1) || (!bVar1)) {
        bVar1 = true;
        iVar6 = iVar8 + -1;
        param_4 = iVar8;
      }
      else {
        iVar7 = iVar7 + 1;
        bVar1 = false;
        iVar5 = iVar5 + 1;
      }
    }
    if (iVar5 == param_5 + -1) break;
    iVar7 = iVar7 + 1;
    bVar1 = false;
    iVar5 = iVar5 + 1;
  }
  return;
}





// 函数: void FUN_18036fb40(void)
void FUN_18036fb40(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180370550(uint64_t *param_1)
void FUN_180370550(uint64_t *param_1)

{
  uint64_t *puVar1;
  char cVar2;
  int32_t uVar3;
  int32_t *puVar4;
  int8_t auStack_228 [80];
  void *puStack_1d8;
  int32_t *puStack_1d0;
  int32_t uStack_1c8;
  uint64_t uStack_1c0;
  int32_t uStack_1b8;
  uint64_t *puStack_1b0;
  uint64_t *puStack_1a8;
  uint64_t ***pppuStack_170;
  uint64_t ***pppuStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  int32_t uStack_148;
  uint64_t *puStack_130;
  uint64_t *puStack_120;
  uint64_t uStack_118;
  uint64_t *puStack_110;
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_118 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_228;
  uStack_1b8 = 0;
  *param_1 = &unknown_var_720_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &unknown_var_3456_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  puStack_130 = param_1 + 4;
  *puStack_130 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(int32_t *)(param_1 + 7) = 3;
  puVar1 = param_1 + 8;
  *puVar1 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xb) = 3;
  puStack_120 = param_1 + 0xc;
  *puStack_120 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(int32_t *)(param_1 + 0xf) = 3;
  param_1[0x10] = &unknown_var_720_ptr;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 0;
  param_1[0x10] = &unknown_var_3456_ptr;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 0;
  puStack_1a8 = param_1 + 0x14;
  *puStack_1a8 = &unknown_var_720_ptr;
  param_1[0x15] = 0;
  *(int32_t *)(param_1 + 0x16) = 0;
  *puStack_1a8 = &unknown_var_3456_ptr;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  *(int32_t *)(param_1 + 0x16) = 0;
  uStack_148 = 3;
  pppuStack_170 = &pppuStack_170;
  pppuStack_168 = &pppuStack_170;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  puStack_1b0 = param_1;
  puStack_110 = param_1;
  cVar2 = FUN_18036fb40(&unknown_var_3456_ptr,&pppuStack_170,puVar1);
  if (cVar2 == '\0') {
    FUN_18005d260(&pppuStack_170,uStack_160);
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_228);
  }
  puStack_1d8 = &unknown_var_3456_ptr;
  uStack_1c0 = 0;
  puStack_1d0 = (int32_t *)0x0;
  uStack_1c8 = 0;
  puVar4 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x1b,0x13);
  *(int8_t *)puVar4 = 0;
  puStack_1d0 = puVar4;
  uVar3 = FUN_18064e990(puVar4);
  uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar3);
  *puVar4 = 0x746f6870;
  puVar4[1] = 0x6f6d5f6f;
  puVar4[2] = 0x665f6564;
  puVar4[3] = 0x65746c69;
  *(uint64_t *)(puVar4 + 4) = 0x69746e6564695f72;
  *(int16_t *)(puVar4 + 6) = 0x7974;
  *(int8_t *)((longlong)puVar4 + 0x1a) = 0;
  uStack_1c8 = 0x1a;
  puStack_98 = &unknown_var_3480_ptr;
  puStack_90 = auStack_80;
  auStack_80[0] = 0;
  uStack_88 = 0x1a;
  strcpy_s(auStack_80,0x40,puVar4);
  FUN_180371910(puVar1,&puStack_98);
  puStack_98 = &unknown_var_720_ptr;
  puStack_1d8 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}



int FUN_180371910(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  
  lVar4 = *param_1;
  iVar10 = 0;
  lVar5 = param_1[1] - lVar4 >> 0x3f;
  lVar8 = (param_1[1] - lVar4) / 0x58 + lVar5;
  if (lVar8 != lVar5) {
    iVar2 = *(int *)(param_2 + 0x10);
    lVar11 = 0;
    do {
      iVar3 = *(int *)(lVar11 + 0x10 + lVar4);
      iVar7 = iVar2;
      if (iVar3 == iVar2) {
        if (iVar3 != 0) {
          pbVar6 = *(byte **)(lVar11 + 8 + lVar4);
          lVar9 = *(longlong *)(param_2 + 8) - (longlong)pbVar6;
          do {
            pbVar1 = pbVar6 + lVar9;
            iVar7 = (uint)*pbVar6 - (uint)*pbVar1;
            if (iVar7 != 0) break;
            pbVar6 = pbVar6 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18037198e:
        if (iVar7 == 0) {
          return iVar10;
        }
      }
      else if (iVar3 == 0) goto LAB_18037198e;
      iVar10 = iVar10 + 1;
      lVar11 = lVar11 + 0x58;
    } while ((ulonglong)(longlong)iVar10 < (ulonglong)(lVar8 - lVar5));
  }
  return -1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803719d0(longlong param_1)
void FUN_1803719d0(longlong param_1)

{
  char cVar1;
  int8_t uVar2;
  
  cVar1 = *(char *)(_DAT_180c86870 + 0x1ed);
  while ((cVar1 != '\0' && (**(char **)(param_1 + 0xc0) == '\0'))) {
    uVar2 = FUN_18017ef40();
    **(int8_t **)(param_1 + 0xc0) = uVar2;
    cVar1 = *(char *)(_DAT_180c86870 + 0x1ed);
  }
  return;
}





// 函数: void FUN_180371a20(longlong param_1,int *param_2,uint64_t param_3,int *param_4)
void FUN_180371a20(longlong param_1,int *param_2,uint64_t param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  ulonglong uVar7;
  int *piVar8;
  
  uVar7 = 0;
  *param_4 = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  piVar5 = param_2;
  piVar8 = param_4;
  if (0 < iVar2) {
    do {
      iVar3 = *param_4;
      iVar6 = (int)uVar7;
      if (0x7fff < iVar3) {
        FUN_180626f80(&unknown_var_3448_ptr,piVar5,uVar7,piVar8);
        return;
      }
      lVar4 = *(longlong *)(param_1 + 8);
      bVar1 = *(byte *)(uVar7 + lVar4);
      if (((byte)(bVar1 + 0x10) < 5) && ((int)(iVar6 + 3U) < iVar2)) {
        piVar5 = (int *)0x4;
        param_2[iVar3] =
             (((int)*(char *)((ulonglong)(iVar6 + 1) + lVar4) & 0x3fU | ((int)(char)bVar1 & 7U) << 6
              ) << 6 | (int)*(char *)((ulonglong)(iVar6 + 2) + lVar4) & 0x3fU) << 6 |
             (int)*(char *)((ulonglong)(iVar6 + 3U) + lVar4) & 0x3fU;
        *param_4 = *param_4 + 1;
      }
      else if (((byte)(bVar1 + 0x20) < 0x10) && ((int)(iVar6 + 2U) < iVar2)) {
        piVar5 = (int *)0x3;
        param_2[iVar3] =
             ((int)*(char *)((ulonglong)(iVar6 + 1) + lVar4) & 0x3fU |
             ((int)(char)bVar1 & 0xfU) << 6) << 6 |
             (int)*(char *)((ulonglong)(iVar6 + 2U) + lVar4) & 0x3fU;
        *param_4 = *param_4 + 1;
      }
      else if (((byte)(bVar1 + 0x3e) < 0x1e) && ((int)(iVar6 + 1U) < iVar2)) {
        piVar5 = (int *)0x2;
        param_2[iVar3] =
             (int)*(char *)((ulonglong)(iVar6 + 1U) + lVar4) & 0x3fU |
             ((int)(char)bVar1 & 0x1fU) << 6;
        *param_4 = *param_4 + 1;
      }
      else if (bVar1 < 0x80) {
        piVar5 = (int *)0x1;
        param_2[iVar3] = (int)(char)bVar1;
        *param_4 = *param_4 + 1;
      }
      else {
        piVar5 = (int *)0x1;
      }
      uVar7 = (ulonglong)(uint)(iVar6 + (int)piVar5);
      piVar8 = piVar5;
    } while (iVar6 + (int)piVar5 < iVar2);
  }
  return;
}





// 函数: void FUN_180371a4c(uint64_t param_1,uint64_t param_2,ulonglong param_3,uint64_t param_4)
void FUN_180371a4c(uint64_t param_1,uint64_t param_2,ulonglong param_3,uint64_t param_4)

{
  byte bVar1;
  longlong lVar2;
  int *unaff_RBX;
  longlong unaff_RBP;
  longlong lVar3;
  int iVar4;
  int in_R10D;
  longlong unaff_R14;
  
  do {
    lVar3 = (longlong)*unaff_RBX;
    iVar4 = (int)param_3;
    if (0x7fff < *unaff_RBX) {
      FUN_180626f80(&unknown_var_3448_ptr,param_2,param_3,param_4);
      return;
    }
    lVar2 = *(longlong *)(unaff_RBP + 8);
    bVar1 = *(byte *)(param_3 + lVar2);
    if (((byte)(bVar1 + 0x10) < 5) && ((int)(iVar4 + 3U) < in_R10D)) {
      param_2 = 4;
      *(uint *)(unaff_R14 + lVar3 * 4) =
           (((int)*(char *)((ulonglong)(iVar4 + 1) + lVar2) & 0x3fU | ((int)(char)bVar1 & 7U) << 6)
            << 6 | (int)*(char *)((ulonglong)(iVar4 + 2) + lVar2) & 0x3fU) << 6 |
           (int)*(char *)((ulonglong)(iVar4 + 3U) + lVar2) & 0x3fU;
      *unaff_RBX = *unaff_RBX + 1;
    }
    else if (((byte)(bVar1 + 0x20) < 0x10) && ((int)(iVar4 + 2U) < in_R10D)) {
      param_2 = 3;
      *(uint *)(unaff_R14 + lVar3 * 4) =
           ((int)*(char *)((ulonglong)(iVar4 + 1) + lVar2) & 0x3fU | ((int)(char)bVar1 & 0xfU) << 6)
           << 6 | (int)*(char *)((ulonglong)(iVar4 + 2U) + lVar2) & 0x3fU;
      *unaff_RBX = *unaff_RBX + 1;
    }
    else if (((byte)(bVar1 + 0x3e) < 0x1e) && ((int)(iVar4 + 1U) < in_R10D)) {
      param_2 = 2;
      *(uint *)(unaff_R14 + lVar3 * 4) =
           (int)*(char *)((ulonglong)(iVar4 + 1U) + lVar2) & 0x3fU | ((int)(char)bVar1 & 0x1fU) << 6
      ;
      *unaff_RBX = *unaff_RBX + 1;
    }
    else if (bVar1 < 0x80) {
      param_2 = 1;
      *(int *)(unaff_R14 + lVar3 * 4) = (int)(char)bVar1;
      *unaff_RBX = *unaff_RBX + 1;
    }
    else {
      param_2 = 1;
    }
    param_3 = (ulonglong)(uint)(iVar4 + (int)param_2);
    param_4 = param_2;
  } while (iVar4 + (int)param_2 < in_R10D);
  return;
}





// 函数: void FUN_180371b85(void)
void FUN_180371b85(void)

{
  return;
}





// 函数: void FUN_180371c60(void)
void FUN_180371c60(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



int32_t * FUN_180372430(int32_t *param_1,uint64_t param_2)

{
  int32_t *puVar1;
  
  *param_1 = 0xe;
  *(uint64_t *)(param_1 + 2) = param_2;
  param_1[0x12] = 0;
  *(uint64_t *)(param_1 + 6) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 10) = 0;
  *(uint64_t *)(param_1 + 0xc) = 0;
  *(uint64_t *)(param_1 + 0xe) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(uint64_t *)(param_1 + 0x13) = 0;
  *(uint64_t *)(param_1 + 0x15) = 0x7f7fffff00000000;
  *(uint64_t *)(param_1 + 0x17) = 0;
  *(uint64_t *)(param_1 + 0x19) = 0x7f7fffff00000000;
  *(uint64_t *)(param_1 + 0x1b) = 0;
  *(uint64_t *)(param_1 + 0x1d) = 0x7f7fffff00000000;
  *(uint64_t *)(param_1 + 0x3f) = 0;
  *(uint64_t *)(param_1 + 0x1f) = 0;
  *(uint64_t *)(param_1 + 0x21) = 0;
  *(uint64_t *)(param_1 + 0x23) = 0;
  *(uint64_t *)(param_1 + 0x25) = 0;
  *(uint64_t *)(param_1 + 0x27) = 0;
  *(uint64_t *)(param_1 + 0x29) = 0;
  *(uint64_t *)(param_1 + 0x2b) = 0;
  *(uint64_t *)(param_1 + 0x2d) = 0;
  *(uint64_t *)(param_1 + 0x2f) = 0;
  *(uint64_t *)(param_1 + 0x31) = 0;
  *(uint64_t *)(param_1 + 0x33) = 0;
  *(uint64_t *)(param_1 + 0x35) = 0;
  *(uint64_t *)(param_1 + 0x37) = 0;
  *(uint64_t *)(param_1 + 0x39) = 0;
  *(uint64_t *)(param_1 + 0x3b) = 0;
  *(uint64_t *)(param_1 + 0x3d) = 0;
  puVar1 = param_1 + 0x46;
  *(uint64_t *)(param_1 + 0x4c) = 0;
  param_1[0x50] = 0xe;
  *(int32_t **)puVar1 = puVar1;
  *(int32_t **)(param_1 + 0x48) = puVar1;
  *(uint64_t *)(param_1 + 0x4a) = 0;
  *(int8_t *)(param_1 + 0x4c) = 0;
  *(uint64_t *)(param_1 + 0x4e) = 0;
  puVar1 = param_1 + 0x52;
  *(uint64_t *)(param_1 + 0x58) = 0;
  param_1[0x5c] = 0xe;
  *(int32_t **)puVar1 = puVar1;
  *(int32_t **)(param_1 + 0x54) = puVar1;
  *(uint64_t *)(param_1 + 0x56) = 0;
  *(int8_t *)(param_1 + 0x58) = 0;
  *(uint64_t *)(param_1 + 0x5a) = 0;
  *(uint64_t *)(param_1 + 0x42) = 0;
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  param_1[0x44] = 0;
  return param_1;
}



uint64_t FUN_180372570(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  
  param_3 = *(int *)(param_1 + 0x58) * param_2 + param_3;
  for (piVar1 = *(int **)(*(longlong *)(param_1 + 0x110) +
                         ((ulonglong)(longlong)param_3 % (ulonglong)*(uint *)(param_1 + 0x118)) * 8)
      ; piVar1 != (int *)0x0; piVar1 = *(int **)(piVar1 + 4)) {
    if (param_3 == *piVar1) goto LAB_1803725b4;
  }
  piVar1 = (int *)0x0;
LAB_1803725b4:
  if (piVar1 == (int *)0x0) {
    return *(uint64_t *)
            (*(longlong *)(*(longlong *)(param_1 + 0x110) + *(longlong *)(param_1 + 0x118) * 8) + 8)
    ;
  }
  return *(uint64_t *)(piVar1 + 2);
}



longlong FUN_180372600(longlong param_1,uint64_t param_2)

{
  _Mtx_init_in_situ();
  *(uint64_t *)(param_1 + 0x68) = param_2;
  *(int32_t *)(param_1 + 0x70) = 0xe;
  *(uint64_t *)(param_1 + 0x78) = param_2;
  *(uint64_t *)(param_1 + 0x80) = 0;
  *(uint64_t *)(param_1 + 0x88) = 0;
  *(uint64_t *)(param_1 + 0x90) = 0;
  *(int32_t *)(param_1 + 0x98) = 0xe;
  *(uint64_t *)(param_1 + 0xa0) = *(uint64_t *)(param_1 + 0x78);
  *(uint64_t *)(param_1 + 0xa8) = 0;
  *(uint64_t *)(param_1 + 0xb0) = 0;
  *(uint64_t *)(param_1 + 0xb8) = 0;
  *(int32_t *)(param_1 + 0xc0) = 0xe;
  *(uint64_t *)(param_1 + 200) = *(uint64_t *)(param_1 + 0x78);
  *(uint64_t *)(param_1 + 0xd0) = 0;
  *(uint64_t *)(param_1 + 0xd8) = 0;
  *(uint64_t *)(param_1 + 0xe0) = 0;
  *(int32_t *)(param_1 + 0xe8) = 3;
  *(int32_t *)(param_1 + 0x128) = 0x3f800000;
  *(uint64_t *)(param_1 + 300) = 0x40000000;
  *(int32_t *)(param_1 + 0x134) = 0xe;
  *(uint64_t *)(param_1 + 0x118) = 1;
  *(void **)(param_1 + 0x110) = &system_data_0000;
  *(uint64_t *)(param_1 + 0x120) = 0;
  *(int32_t *)(param_1 + 0x130) = 0;
  *(int32_t *)(param_1 + 0x50) = 0xffffffff;
  *(uint64_t *)(param_1 + 0x54) = 0;
  *(uint64_t *)(param_1 + 0x138) = 0;
  *(uint64_t *)(param_1 + 0x5c) = 0;
  *(int16_t *)(param_1 + 0x140) = 1;
  *(uint64_t *)(param_1 + 0x148) = 0;
  return param_1;
}





// 函数: void FUN_180372730(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180372730(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x110);
  lVar4 = *plVar1;
  plVar5 = plVar1;
  if (lVar4 == 0) {
    plVar5 = plVar1 + 1;
    lVar4 = *plVar5;
    while (lVar4 == 0) {
      plVar5 = plVar5 + 1;
      lVar4 = *plVar5;
    }
  }
  while (lVar4 != plVar1[*(longlong *)(param_1 + 0x118)]) {
    lVar3 = *(longlong *)(lVar4 + 8);
    if (lVar3 != 0) {
      puVar2 = *(uint64_t **)(lVar3 + 0x158);
      if (puVar2 != (uint64_t *)0x0) {
        FUN_180179f00(lVar3 + 0x148,*puVar2,param_3,param_4,0xfffffffffffffffe);
        if (puVar2[5] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar2);
      }
      puVar2 = *(uint64_t **)(lVar3 + 0x128);
      if (puVar2 == (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar3);
      }
      FUN_180179f00(lVar3 + 0x118,*puVar2,param_3,param_4,0xfffffffffffffffe);
      if (puVar2[5] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2);
    }
    lVar4 = *(longlong *)(lVar4 + 0x10);
    while (lVar4 == 0) {
      plVar5 = plVar5 + 1;
      lVar4 = *plVar5;
    }
  }
  FUN_18033ad00(param_1 + 0x108);
  FUN_18037f130(*(uint64_t *)(param_1 + 0x138));
  *(uint64_t *)(param_1 + 0x138) = 0;
  FUN_18033ad00(param_1 + 0x108);
  if ((1 < *(ulonglong *)(param_1 + 0x118)) && (*(longlong *)(param_1 + 0x110) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  _Mtx_destroy_in_situ(param_1);
  return;
}





// 函数: void FUN_180372980(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180372980(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  iVar3 = _Mtx_lock();
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  if ((0 < *(int *)(param_1 + 0x54)) && (0 < *(int *)(param_1 + 0x58))) {
    plVar1 = *(longlong **)(param_1 + 0x110);
    puVar5 = (uint64_t *)*plVar1;
    plVar4 = plVar1;
    if (puVar5 == (uint64_t *)0x0) {
      plVar4 = plVar1 + 1;
      puVar5 = (uint64_t *)*plVar4;
      while (puVar5 == (uint64_t *)0x0) {
        plVar4 = plVar4 + 1;
        puVar5 = (uint64_t *)*plVar4;
      }
    }
    while (puVar5 != (uint64_t *)plVar1[*(longlong *)(param_1 + 0x118)]) {
      lVar2 = puVar5[1];
      if (lVar2 != 0) {
        FUN_180179f00(lVar2 + 0x148,*(uint64_t *)(lVar2 + 0x158),param_3,param_4,uVar6,*puVar5,
                      lVar2);
        FUN_180179f00(lVar2 + 0x118,*(uint64_t *)(lVar2 + 0x128));
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      puVar5 = (uint64_t *)puVar5[2];
      while (puVar5 == (uint64_t *)0x0) {
        plVar4 = plVar4 + 1;
        puVar5 = (uint64_t *)*plVar4;
      }
    }
    FUN_18033ad00(param_1 + 0x108);
    FUN_18037f130(*(uint64_t *)(param_1 + 0x138));
    *(uint64_t *)(param_1 + 0x138) = 0;
  }
  *(uint64_t *)(param_1 + 0x54) = 0;
  iVar3 = _Mtx_unlock(param_1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



