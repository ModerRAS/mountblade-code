#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part319.c - 16 个函数

// 函数: void FUN_180436fd0(longlong param_1,float param_2,float param_3,float param_4,int32_t param_5)
void FUN_180436fd0(longlong param_1,float param_2,float param_3,float param_4,int32_t param_5)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int8_t auVar9 [16];
  
  fVar6 = (float)tanf(param_2 * 0.5);
  fVar6 = (float)atanf(fVar6 * param_3);
  *(float *)(param_1 + 300) = fVar6 + fVar6;
  *(int8_t *)(param_1 + 0x110) = 1;
  *(int32_t *)(param_1 + 0x128) = param_5;
  *(float *)(param_1 + 0x124) = param_4;
  *(float *)(param_1 + 0x130) = param_3;
  fVar6 = (float)tanf((fVar6 + fVar6) * 0.5);
  fVar6 = fVar6 * param_4;
  *(float *)(param_1 + 0x118) = fVar6;
  *(float *)(param_1 + 0x114) = -fVar6;
  *(float *)(param_1 + 0x11c) = fVar6 / param_3;
  *(float *)(param_1 + 0x120) = -(fVar6 / param_3);
  if (*(char *)(param_1 + 0x110) == '\0') {
    fVar6 = *(float *)(param_1 + 0x11c);
    *(float *)(param_1 + 0x90) = fVar6 * *(float *)(param_1 + 0xe0) + *(float *)(param_1 + 0x100);
    *(float *)(param_1 + 0x94) = fVar6 * *(float *)(param_1 + 0xe4) + *(float *)(param_1 + 0x104);
    *(float *)(param_1 + 0x98) = fVar6 * *(float *)(param_1 + 0xe8) + *(float *)(param_1 + 0x108);
    *(int32_t *)(param_1 + 0x9c) = 0x7f7fffff;
    fVar6 = *(float *)(param_1 + 0x120);
    *(float *)(param_1 + 0xb0) = fVar6 * *(float *)(param_1 + 0xe0) + *(float *)(param_1 + 0x100);
    *(float *)(param_1 + 0xb4) = fVar6 * *(float *)(param_1 + 0xe4) + *(float *)(param_1 + 0x104);
    *(float *)(param_1 + 0xb8) = fVar6 * *(float *)(param_1 + 0xe8) + *(float *)(param_1 + 0x108);
    *(int32_t *)(param_1 + 0xbc) = 0x7f7fffff;
    fVar6 = *(float *)(param_1 + 0x118);
    *(float *)(param_1 + 0x70) = fVar6 * *(float *)(param_1 + 0xd0) + *(float *)(param_1 + 0x100);
    *(float *)(param_1 + 0x74) = fVar6 * *(float *)(param_1 + 0xd4) + *(float *)(param_1 + 0x104);
    *(float *)(param_1 + 0x78) = fVar6 * *(float *)(param_1 + 0xd8) + *(float *)(param_1 + 0x108);
    *(int32_t *)(param_1 + 0x7c) = 0x7f7fffff;
    fVar6 = *(float *)(param_1 + 0x114);
    *(float *)(param_1 + 0x50) = fVar6 * *(float *)(param_1 + 0xd0) + *(float *)(param_1 + 0x100);
    *(float *)(param_1 + 0x54) = fVar6 * *(float *)(param_1 + 0xd4) + *(float *)(param_1 + 0x104);
    *(float *)(param_1 + 0x58) = fVar6 * *(float *)(param_1 + 0xd8) + *(float *)(param_1 + 0x108);
    *(int32_t *)(param_1 + 0x5c) = 0x7f7fffff;
    fVar6 = *(float *)(param_1 + 0x128);
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x100) - fVar6 * *(float *)(param_1 + 0xf0);
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x104) - fVar6 * *(float *)(param_1 + 0xf4);
    *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x108) - fVar6 * *(float *)(param_1 + 0xf8);
    *(int32_t *)(param_1 + 0x3c) = 0x7f7fffff;
    fVar6 = *(float *)(param_1 + 0x124);
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x100) - fVar6 * *(float *)(param_1 + 0xf0);
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x104) - fVar6 * *(float *)(param_1 + 0xf4);
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x108) - fVar6 * *(float *)(param_1 + 0xf8);
    *(int32_t *)(param_1 + 0x1c) = 0x7f7fffff;
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xe0) ^ 0x80000000;
    *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xe4) ^ 0x80000000;
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xe8) ^ 0x80000000;
    *(int32_t *)(param_1 + 0xac) = 0x7f7fffff;
    *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 0xe0);
    *(uint64_t *)(param_1 + 200) = *(uint64_t *)(param_1 + 0xe8);
    *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0xd0) ^ 0x80000000;
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0xd4) ^ 0x80000000;
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0xd8) ^ 0x80000000;
    *(int32_t *)(param_1 + 0x8c) = 0x7f7fffff;
    *(uint64_t *)(param_1 + 0x60) = *(uint64_t *)(param_1 + 0xd0);
    *(uint64_t *)(param_1 + 0x68) = *(uint64_t *)(param_1 + 0xd8);
    *(uint64_t *)(param_1 + 0x40) = *(uint64_t *)(param_1 + 0xf0);
    *(uint64_t *)(param_1 + 0x48) = *(uint64_t *)(param_1 + 0xf8);
    uVar3 = *(uint *)(param_1 + 0xf0);
    uVar4 = *(uint *)(param_1 + 0xf4);
    uVar5 = *(uint *)(param_1 + 0xf8);
  }
  else {
    *(uint64_t *)(param_1 + 0x90) = *(uint64_t *)(param_1 + 0x100);
    *(uint64_t *)(param_1 + 0x98) = *(uint64_t *)(param_1 + 0x108);
    *(uint64_t *)(param_1 + 0xb0) = *(uint64_t *)(param_1 + 0x100);
    *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 0x108);
    *(uint64_t *)(param_1 + 0x70) = *(uint64_t *)(param_1 + 0x100);
    *(uint64_t *)(param_1 + 0x78) = *(uint64_t *)(param_1 + 0x108);
    *(uint64_t *)(param_1 + 0x50) = *(uint64_t *)(param_1 + 0x100);
    *(uint64_t *)(param_1 + 0x58) = *(uint64_t *)(param_1 + 0x108);
    fVar6 = *(float *)(param_1 + 0x124);
    fVar1 = *(float *)(param_1 + 0x11c);
    *(float *)(param_1 + 0xa0) =
         -(fVar6 * *(float *)(param_1 + 0xe0)) - fVar1 * *(float *)(param_1 + 0xf0);
    *(float *)(param_1 + 0xa4) =
         -(fVar6 * *(float *)(param_1 + 0xe4)) - fVar1 * *(float *)(param_1 + 0xf4);
    *(float *)(param_1 + 0xa8) =
         -(fVar6 * *(float *)(param_1 + 0xe8)) - fVar1 * *(float *)(param_1 + 0xf8);
    *(int32_t *)(param_1 + 0xac) = 0x7f7fffff;
    fVar6 = *(float *)(param_1 + 0x124);
    fVar1 = *(float *)(param_1 + 0x120);
    *(float *)(param_1 + 0xc0) =
         fVar1 * *(float *)(param_1 + 0xf0) + fVar6 * *(float *)(param_1 + 0xe0);
    *(float *)(param_1 + 0xc4) =
         fVar1 * *(float *)(param_1 + 0xf4) + fVar6 * *(float *)(param_1 + 0xe4);
    *(float *)(param_1 + 200) =
         fVar1 * *(float *)(param_1 + 0xf8) + fVar6 * *(float *)(param_1 + 0xe8);
    *(int32_t *)(param_1 + 0xcc) = 0x7f7fffff;
    fVar6 = *(float *)(param_1 + 0x124);
    fVar1 = *(float *)(param_1 + 0x118);
    *(float *)(param_1 + 0x80) =
         -(fVar6 * *(float *)(param_1 + 0xd0)) - fVar1 * *(float *)(param_1 + 0xf0);
    *(float *)(param_1 + 0x84) =
         -(fVar6 * *(float *)(param_1 + 0xd4)) - fVar1 * *(float *)(param_1 + 0xf4);
    *(float *)(param_1 + 0x88) =
         -(fVar6 * *(float *)(param_1 + 0xd8)) - fVar1 * *(float *)(param_1 + 0xf8);
    *(int32_t *)(param_1 + 0x8c) = 0x7f7fffff;
    fVar6 = *(float *)(param_1 + 0x124);
    fVar1 = *(float *)(param_1 + 0x114);
    *(float *)(param_1 + 0x60) =
         fVar1 * *(float *)(param_1 + 0xf0) + fVar6 * *(float *)(param_1 + 0xd0);
    *(float *)(param_1 + 100) =
         fVar6 * *(float *)(param_1 + 0xd4) + fVar1 * *(float *)(param_1 + 0xf4);
    *(float *)(param_1 + 0x68) =
         fVar1 * *(float *)(param_1 + 0xf8) + fVar6 * *(float *)(param_1 + 0xd8);
    *(int32_t *)(param_1 + 0x6c) = 0x7f7fffff;
    fVar6 = *(float *)(param_1 + 0xa4);
    fVar1 = *(float *)(param_1 + 0xa0);
    fVar2 = *(float *)(param_1 + 0xa8);
    fVar7 = fVar1 * fVar1 + fVar6 * fVar6 + fVar2 * fVar2;
    auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar8 = auVar9._0_4_;
    fVar7 = fVar8 * 0.5 * (3.0 - fVar7 * fVar8 * fVar8);
    *(float *)(param_1 + 0xa0) = fVar1 * fVar7;
    *(float *)(param_1 + 0xa4) = fVar6 * fVar7;
    *(float *)(param_1 + 0xa8) = fVar2 * fVar7;
    fVar6 = *(float *)(param_1 + 0xc4);
    fVar1 = *(float *)(param_1 + 0xc0);
    fVar2 = *(float *)(param_1 + 200);
    fVar7 = fVar1 * fVar1 + fVar6 * fVar6 + fVar2 * fVar2;
    auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar8 = auVar9._0_4_;
    fVar7 = fVar8 * 0.5 * (3.0 - fVar7 * fVar8 * fVar8);
    *(float *)(param_1 + 0xc0) = fVar1 * fVar7;
    *(float *)(param_1 + 0xc4) = fVar6 * fVar7;
    *(float *)(param_1 + 200) = fVar2 * fVar7;
    fVar6 = *(float *)(param_1 + 0x84);
    fVar1 = *(float *)(param_1 + 0x80);
    fVar2 = *(float *)(param_1 + 0x88);
    fVar7 = fVar1 * fVar1 + fVar6 * fVar6 + fVar2 * fVar2;
    auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar8 = auVar9._0_4_;
    fVar7 = fVar8 * 0.5 * (3.0 - fVar7 * fVar8 * fVar8);
    *(float *)(param_1 + 0x80) = fVar1 * fVar7;
    *(float *)(param_1 + 0x84) = fVar6 * fVar7;
    *(float *)(param_1 + 0x88) = fVar2 * fVar7;
    fVar6 = *(float *)(param_1 + 100);
    fVar1 = *(float *)(param_1 + 0x60);
    fVar2 = *(float *)(param_1 + 0x68);
    fVar7 = fVar1 * fVar1 + fVar6 * fVar6 + fVar2 * fVar2;
    auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar8 = auVar9._0_4_;
    fVar7 = fVar8 * 0.5 * (3.0 - fVar7 * fVar8 * fVar8);
    *(float *)(param_1 + 0x60) = fVar1 * fVar7;
    *(float *)(param_1 + 100) = fVar6 * fVar7;
    *(float *)(param_1 + 0x68) = fVar2 * fVar7;
    fVar6 = *(float *)(param_1 + 0x128);
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x100) - fVar6 * *(float *)(param_1 + 0xf0);
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x104) - fVar6 * *(float *)(param_1 + 0xf4);
    *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x108) - fVar6 * *(float *)(param_1 + 0xf8);
    *(int32_t *)(param_1 + 0x3c) = 0x7f7fffff;
    fVar6 = *(float *)(param_1 + 0x124);
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x100) - fVar6 * *(float *)(param_1 + 0xf0);
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x104) - fVar6 * *(float *)(param_1 + 0xf4);
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x108) - fVar6 * *(float *)(param_1 + 0xf8);
    *(int32_t *)(param_1 + 0x1c) = 0x7f7fffff;
    *(uint64_t *)(param_1 + 0x40) = *(uint64_t *)(param_1 + 0xf0);
    *(uint64_t *)(param_1 + 0x48) = *(uint64_t *)(param_1 + 0xf8);
    uVar3 = *(uint *)(param_1 + 0xf0);
    uVar4 = *(uint *)(param_1 + 0xf4);
    uVar5 = *(uint *)(param_1 + 0xf8);
  }
  *(uint *)(param_1 + 0x20) = uVar3 ^ 0x80000000;
  *(uint *)(param_1 + 0x24) = uVar4 ^ 0x80000000;
  *(uint *)(param_1 + 0x28) = uVar5 ^ 0x80000000;
  *(int32_t *)(param_1 + 0x2c) = 0x7f7fffff;
  return;
}



float FUN_180437050(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)tanf(*(float *)(param_1 + 300) * 0.5);
  fVar1 = (float)atanf(fVar1 / *(float *)(param_1 + 0x130));
  return fVar1 + fVar1;
}





// 函数: void FUN_180437110(longlong param_1)
void FUN_180437110(longlong param_1)

{
  int8_t auStack_88 [16];
  int8_t auStack_78 [16];
  int8_t auStack_68 [16];
  int8_t auStack_58 [16];
  int8_t auStack_48 [16];
  int8_t auStack_38 [16];
  int8_t auStack_28 [16];
  int8_t auStack_18 [16];
  
  FUN_1806506a0(auStack_88,param_1 + 0x10,param_1 + 0x90,param_1 + 0x70);
  FUN_1806506a0(auStack_18);
  FUN_1806506a0(auStack_68);
  FUN_1806506a0(auStack_58);
  FUN_1806506a0(auStack_48,param_1 + 0x30,param_1 + 0x90,param_1 + 0x70);
  FUN_1806506a0(auStack_38);
  FUN_1806506a0(auStack_28);
  FUN_1806506a0(auStack_78);
  return;
}





// 函数: void FUN_180437290(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t *param_4)
void FUN_180437290(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t *param_4)

{
  int32_t auStackX_8 [2];
  int32_t uStackX_10;
  int32_t uStackX_14;
  
  uStackX_10 = *param_4;
  auStackX_8[0] = 0xbf800000;
  uStackX_14 = param_4[1];
  FUN_1802874c0(param_1 + 0x10,uStackX_10,param_3,&uStackX_10,auStackX_8);
  return;
}



uint64_t * FUN_1804372e0(uint64_t *param_1,longlong param_2,int32_t *param_3)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int8_t auStack_18 [24];
  
  uStack_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  puVar2 = (uint64_t *)FUN_180287320(param_2 + 0x10,auStack_18,&uStack_28);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}





// 函数: void FUN_180437320(longlong param_1,uint64_t *param_2)
void FUN_180437320(longlong param_1,uint64_t *param_2)

{
  bool bVar1;
  float *pfVar2;
  longlong lVar3;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  lVar3 = 0;
  bVar1 = true;
  pfVar2 = (float *)(param_1 + 0x28);
  fStack_20 = (float)param_2[1];
  fStack_24 = (float)((ulonglong)*param_2 >> 0x20);
  fStack_28 = (float)*param_2;
  do {
    if (!bVar1) {
      return;
    }
    bVar1 = 0.0 <= (fStack_24 - pfVar2[-5]) * pfVar2[-1] + (fStack_28 - pfVar2[-6]) * pfVar2[-2] +
                   (fStack_20 - pfVar2[-4]) * *pfVar2;
    lVar3 = lVar3 + 1;
    pfVar2 = pfVar2 + 8;
  } while (lVar3 < 6);
  return;
}





// 函数: void FUN_1804373a0(int32_t *param_1,int32_t param_2,int32_t param_3,uint64_t *param_4)
void FUN_1804373a0(int32_t *param_1,int32_t param_2,int32_t param_3,uint64_t *param_4)

{
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  
  uStack_58 = 0x3f80000000000000;
  uStack_50 = 0;
  uStack_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  uStack_68 = 0x3f800000;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0x3f800000;
  uStack_3c = 0;
  FUN_180085970(&uStack_68,0x3fc90fdb);
  FUN_180085ac0(&uStack_68,param_3);
  FUN_180085970(&uStack_68,param_2);
  *param_4 = uStack_68;
  param_4[1] = uStack_60;
  param_4[2] = uStack_58;
  param_4[3] = uStack_50;
  param_4[4] = CONCAT44(uStack_44,uStack_48);
  param_4[5] = CONCAT44(uStack_3c,uStack_40);
  param_4[6] = CONCAT44(uStack_34,uStack_38);
  param_4[7] = CONCAT44(uStack_2c,uStack_30);
  return;
}





// 函数: void FUN_180437460(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180437460(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  longlong *plStackX_8;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  pcVar1 = *(code **)(*param_1 + 0x118);
  plStackX_8 = param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  (*pcVar1)(param_1,&plStackX_8,param_3,param_4,uVar2);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_1804374c0(int32_t *param_1)

{
  int32_t uVar1;
  uint64_t uVar2;
  longlong *plVar3;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0xf0,8,3,0xfffffffffffffffe);
  plVar3 = (longlong *)FUN_18039dda0(uVar2);
  if (plVar3 == (longlong *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    (**(code **)(*plVar3 + 0x28))(plVar3);
    uVar1 = (**(code **)(*plVar3 + 8))(plVar3);
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  uStack_20 = SUB84(plVar3,0);
  uStack_1c = (int32_t)((ulonglong)plVar3 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar1;
  param_1[3] = uStack_14;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  return param_1;
}



int32_t *
FUN_180437560(int32_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  int32_t uVar2;
  longlong *plStackX_8;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  FUN_18039e0a0(param_2,&plStackX_8,param_3,param_4,0xfffffffffffffffe);
  plVar1 = plStackX_8;
  if (plStackX_8 == (longlong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  uStack_20 = SUB84(plVar1,0);
  uStack_1c = (int32_t)((ulonglong)plVar1 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar2;
  param_1[3] = uStack_14;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804375f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804375f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  void *puStack_30;
  longlong lStack_28;
  int32_t uStack_18;
  
  uVar1 = FUN_180627910(&puStack_30,param_3,param_3,param_4,0xfffffffffffffffe);
  uVar1 = FUN_18020bef0(_DAT_180c868e8,uVar1);
  puStack_30 = &unknown_var_3456_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_28 = 0;
  uStack_18 = 0;
  puStack_30 = &unknown_var_720_ptr;
  FUN_18039eda0(param_1,param_2,uVar1);
  return;
}



uint FUN_180437680(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if (param_1 != 0) {
    lVar4 = FUN_18039dfa0();
    fVar1 = *(float *)(lVar4 + 0x23c);
    fVar2 = *(float *)(lVar4 + 0x240);
    fVar3 = *(float *)(lVar4 + 0x244);
    dVar10 = (double)pow((double)*(float *)(lVar4 + 0x238),0x3fdd1745d1745d17);
    dVar11 = (double)pow((double)fVar1,0x3fdd1745d1745d17);
    dVar12 = (double)pow((double)fVar2,0x3fdd1745d1745d17);
    uVar7 = (uint)(longlong)(fVar3 * 256.0);
    uVar9 = 0xff;
    if (uVar7 < 0xff) {
      uVar9 = uVar7;
    }
    uVar8 = (uint)(longlong)((float)dVar10 * 256.0);
    uVar7 = 0xff;
    if (uVar8 < 0xff) {
      uVar7 = uVar8;
    }
    uVar6 = (uint)(longlong)((float)dVar11 * 256.0);
    uVar8 = 0xff;
    if (uVar6 < 0xff) {
      uVar8 = uVar6;
    }
    uVar5 = (uint)(longlong)((float)dVar12 * 256.0);
    uVar6 = 0xff;
    if (uVar5 < 0xff) {
      uVar6 = uVar5;
    }
    return ((uVar7 | uVar9 << 8) << 8 | uVar8) << 8 | uVar6;
  }
  return 0;
}



uint FUN_18043768d(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  lVar4 = FUN_18039dfa0();
  fVar1 = *(float *)(lVar4 + 0x23c);
  fVar2 = *(float *)(lVar4 + 0x240);
  fVar3 = *(float *)(lVar4 + 0x244);
  dVar10 = (double)pow((double)*(float *)(lVar4 + 0x238),0x3fdd1745d1745d17);
  dVar11 = (double)pow((double)fVar1,0x3fdd1745d1745d17);
  dVar12 = (double)pow((double)fVar2,0x3fdd1745d1745d17);
  uVar7 = (uint)(longlong)(fVar3 * 256.0);
  uVar9 = 0xff;
  if (uVar7 < 0xff) {
    uVar9 = uVar7;
  }
  uVar8 = (uint)(longlong)((float)dVar10 * 256.0);
  uVar7 = 0xff;
  if (uVar8 < 0xff) {
    uVar7 = uVar8;
  }
  uVar6 = (uint)(longlong)((float)dVar11 * 256.0);
  uVar8 = 0xff;
  if (uVar6 < 0xff) {
    uVar8 = uVar6;
  }
  uVar5 = (uint)(longlong)((float)dVar12 * 256.0);
  uVar6 = 0xff;
  if (uVar5 < 0xff) {
    uVar6 = uVar5;
  }
  return ((uVar7 | uVar9 << 8) << 8 | uVar8) << 8 | uVar6;
}



uint64_t FUN_1804377a1(void)

{
  return 0;
}



uint FUN_1804377b0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if (param_1 != 0) {
    lVar4 = FUN_18039dfa0();
    fVar1 = *(float *)(lVar4 + 0x24c);
    fVar2 = *(float *)(lVar4 + 0x250);
    fVar3 = *(float *)(lVar4 + 0x254);
    dVar10 = (double)pow((double)*(float *)(lVar4 + 0x248),0x3fdd1745d1745d17);
    dVar11 = (double)pow((double)fVar1,0x3fdd1745d1745d17);
    dVar12 = (double)pow((double)fVar2,0x3fdd1745d1745d17);
    uVar7 = (uint)(longlong)(fVar3 * 256.0);
    uVar9 = 0xff;
    if (uVar7 < 0xff) {
      uVar9 = uVar7;
    }
    uVar8 = (uint)(longlong)((float)dVar10 * 256.0);
    uVar7 = 0xff;
    if (uVar8 < 0xff) {
      uVar7 = uVar8;
    }
    uVar6 = (uint)(longlong)((float)dVar11 * 256.0);
    uVar8 = 0xff;
    if (uVar6 < 0xff) {
      uVar8 = uVar6;
    }
    uVar5 = (uint)(longlong)((float)dVar12 * 256.0);
    uVar6 = 0xff;
    if (uVar5 < 0xff) {
      uVar6 = uVar5;
    }
    return ((uVar7 | uVar9 << 8) << 8 | uVar8) << 8 | uVar6;
  }
  return 0;
}



uint FUN_1804377bd(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  lVar4 = FUN_18039dfa0();
  fVar1 = *(float *)(lVar4 + 0x24c);
  fVar2 = *(float *)(lVar4 + 0x250);
  fVar3 = *(float *)(lVar4 + 0x254);
  dVar10 = (double)pow((double)*(float *)(lVar4 + 0x248),0x3fdd1745d1745d17);
  dVar11 = (double)pow((double)fVar1,0x3fdd1745d1745d17);
  dVar12 = (double)pow((double)fVar2,0x3fdd1745d1745d17);
  uVar7 = (uint)(longlong)(fVar3 * 256.0);
  uVar9 = 0xff;
  if (uVar7 < 0xff) {
    uVar9 = uVar7;
  }
  uVar8 = (uint)(longlong)((float)dVar10 * 256.0);
  uVar7 = 0xff;
  if (uVar8 < 0xff) {
    uVar7 = uVar8;
  }
  uVar6 = (uint)(longlong)((float)dVar11 * 256.0);
  uVar8 = 0xff;
  if (uVar6 < 0xff) {
    uVar8 = uVar6;
  }
  uVar5 = (uint)(longlong)((float)dVar12 * 256.0);
  uVar6 = 0xff;
  if (uVar5 < 0xff) {
    uVar6 = uVar5;
  }
  return ((uVar7 | uVar9 << 8) << 8 | uVar8) << 8 | uVar6;
}



uint64_t FUN_1804378d1(void)

{
  return 0;
}





// 函数: void FUN_1804378e0(longlong *param_1,ulonglong param_2)
void FUN_1804378e0(longlong *param_1,ulonglong param_2)

{
  double dVar1;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if (param_1 != (longlong *)0x0) {
    dVar1 = (double)pow((double)((param_2 & 0xffffffff) >> 0x10 & 0xff) * 0.00392156862745098,
                        0x400199999999999a);
    fStack_28 = (float)dVar1;
    dVar1 = (double)pow((double)(param_2 >> 8 & 0xff) * 0.00392156862745098,0x400199999999999a);
    fStack_24 = (float)dVar1;
    dVar1 = (double)pow((double)(param_2 & 0xff) * 0.00392156862745098,0x400199999999999a);
    fStack_20 = (float)dVar1;
    fStack_1c = (float)((double)(param_2 >> 0x18 & 0xff) * 0.00392156862745098);
    (**(code **)(*param_1 + 0x108))(param_1,&fStack_28);
  }
  return;
}





// 函数: void FUN_180437905(void)
void FUN_180437905(void)

{
  uint in_EAX;
  longlong *unaff_RBX;
  uint unaff_EDI;
  double dVar1;
  float fVar2;
  uint64_t in_XMM3_Qa;
  float fStack000000000000002c;
  
  dVar1 = (double)pow((double)(in_EAX >> 0x10 & 0xff) * 0.00392156862745098);
  fVar2 = (float)dVar1;
  dVar1 = (double)pow((double)(unaff_EDI >> 8 & 0xff) * 0.00392156862745098,0x400199999999999a);
  pow((double)(unaff_EDI & 0xff) * 0.00392156862745098,0x400199999999999a,(float)dVar1,in_XMM3_Qa,
      fVar2);
  fStack000000000000002c = (float)((double)(unaff_EDI >> 0x18) * 0.00392156862745098);
  (**(code **)(*unaff_RBX + 0x108))(fStack000000000000002c,&stack0x00000020);
  return;
}





// 函数: void FUN_1804379c6(void)
void FUN_1804379c6(void)

{
  return;
}





// 函数: void FUN_1804379d0(longlong param_1,ulonglong param_2)
void FUN_1804379d0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  double dVar8;
  double dVar9;
  double dVar10;
  ulonglong uVar7;
  
  if (param_1 != 0) {
    dVar8 = (double)pow((double)((param_2 & 0xffffffff) >> 0x10 & 0xff) * 0.00392156862745098,
                        0x400199999999999a);
    dVar9 = (double)pow((double)(param_2 >> 8 & 0xff) * 0.00392156862745098,0x400199999999999a);
    dVar10 = (double)pow((double)(param_2 & 0xff) * 0.00392156862745098,0x400199999999999a);
    lVar4 = *(longlong *)(param_1 + 0x30);
    uVar5 = 0;
    if (*(longlong *)(param_1 + 0x38) - lVar4 >> 3 != 0) {
      uVar7 = uVar5;
      do {
        iVar2 = (**(code **)(**(longlong **)(uVar5 + lVar4) + 0x98))();
        if (iVar2 == 0) {
          lVar4 = *(longlong *)(uVar5 + *(longlong *)(param_1 + 0x30));
          plVar3 = *(longlong **)(lVar4 + 0x38);
          if (plVar3 < *(longlong **)(lVar4 + 0x40)) {
            do {
              lVar1 = *plVar3;
              plVar3 = plVar3 + 2;
              *(ulonglong *)(lVar1 + 0x248) = CONCAT44((float)dVar9,(float)dVar8);
              *(ulonglong *)(lVar1 + 0x250) =
                   CONCAT44((float)((double)(param_2 >> 0x18 & 0xff) * 0.00392156862745098),
                            (float)dVar10);
            } while (plVar3 < *(longlong **)(lVar4 + 0x40));
          }
        }
        lVar4 = *(longlong *)(param_1 + 0x30);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        uVar5 = uVar5 + 8;
      } while ((ulonglong)(longlong)(int)uVar6 <
               (ulonglong)(*(longlong *)(param_1 + 0x38) - lVar4 >> 3));
    }
  }
  return;
}





// 函数: void FUN_1804379ee(longlong param_1,ulonglong param_2)
void FUN_1804379ee(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  double dVar9;
  double dVar10;
  double dVar11;
  float fStack000000000000002c;
  ulonglong uVar8;
  
  dVar9 = (double)pow((double)((param_2 & 0xffffffff) >> 0x10 & 0xff) * 0.00392156862745098);
  dVar10 = (double)pow((double)(param_2 >> 8 & 0xff) * 0.00392156862745098,0x400199999999999a);
  dVar11 = (double)pow((double)(param_2 & 0xff) * 0.00392156862745098,0x400199999999999a);
  lVar5 = *(longlong *)(param_1 + 0x30);
  uVar6 = 0;
  fStack000000000000002c = (float)((double)(param_2 >> 0x18 & 0xff) * 0.00392156862745098);
  if (*(longlong *)(param_1 + 0x38) - lVar5 >> 3 != 0) {
    uVar2 = CONCAT44(fStack000000000000002c,(float)dVar11);
    uVar8 = uVar6;
    do {
      iVar3 = (**(code **)(**(longlong **)(uVar6 + lVar5) + 0x98))();
      if (iVar3 == 0) {
        lVar5 = *(longlong *)(uVar6 + *(longlong *)(param_1 + 0x30));
        plVar4 = *(longlong **)(lVar5 + 0x38);
        if (plVar4 < *(longlong **)(lVar5 + 0x40)) {
          do {
            lVar1 = *plVar4;
            plVar4 = plVar4 + 2;
            *(ulonglong *)(lVar1 + 0x248) = CONCAT44((float)dVar10,(float)dVar9);
            *(uint64_t *)(lVar1 + 0x250) = uVar2;
          } while (plVar4 < *(longlong **)(lVar5 + 0x40));
        }
      }
      lVar5 = *(longlong *)(param_1 + 0x30);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar6 = uVar6 + 8;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x38) - lVar5 >> 3));
  }
  return;
}





// 函数: void FUN_180437a05(void)
void FUN_180437a05(void)

{
  longlong lVar1;
  uint64_t uVar2;
  int iVar3;
  longlong in_RAX;
  longlong *plVar4;
  longlong lVar5;
  uint unaff_EBX;
  ulonglong uVar6;
  uint uVar7;
  longlong unaff_RDI;
  double dVar9;
  double dVar10;
  double dVar11;
  float fStack000000000000002c;
  ulonglong uVar8;
  
  dVar9 = (double)pow((double)in_RAX * 0.00392156862745098);
  dVar10 = (double)pow((double)(unaff_EBX >> 8 & 0xff) * 0.00392156862745098,0x400199999999999a);
  dVar11 = (double)pow((double)(unaff_EBX & 0xff) * 0.00392156862745098,0x400199999999999a);
  lVar5 = *(longlong *)(unaff_RDI + 0x30);
  uVar6 = 0;
  fStack000000000000002c = (float)((double)(unaff_EBX >> 0x18) * 0.00392156862745098);
  if (*(longlong *)(unaff_RDI + 0x38) - lVar5 >> 3 != 0) {
    uVar2 = CONCAT44(fStack000000000000002c,(float)dVar11);
    uVar8 = uVar6;
    do {
      iVar3 = (**(code **)(**(longlong **)(uVar6 + lVar5) + 0x98))();
      if (iVar3 == 0) {
        lVar5 = *(longlong *)(uVar6 + *(longlong *)(unaff_RDI + 0x30));
        plVar4 = *(longlong **)(lVar5 + 0x38);
        if (plVar4 < *(longlong **)(lVar5 + 0x40)) {
          do {
            lVar1 = *plVar4;
            plVar4 = plVar4 + 2;
            *(ulonglong *)(lVar1 + 0x248) = CONCAT44((float)dVar10,(float)dVar9);
            *(uint64_t *)(lVar1 + 0x250) = uVar2;
          } while (plVar4 < *(longlong **)(lVar5 + 0x40));
        }
      }
      lVar5 = *(longlong *)(unaff_RDI + 0x30);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar6 = uVar6 + 8;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(unaff_RDI + 0x38) - lVar5 >> 3));
  }
  return;
}





// 函数: void FUN_180437ad0(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
void FUN_180437ad0(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint unaff_ESI;
  longlong unaff_RDI;
  uint64_t uStackX_20;
  
  uVar5 = (ulonglong)unaff_ESI;
  do {
    iVar3 = (**(code **)(**(longlong **)(uVar5 + param_2) + 0x98))();
    if (iVar3 == 0) {
      lVar1 = *(longlong *)(uVar5 + *(longlong *)(unaff_RDI + 0x30));
      plVar4 = *(longlong **)(lVar1 + 0x38);
      if (plVar4 < *(longlong **)(lVar1 + 0x40)) {
        do {
          lVar2 = *plVar4;
          plVar4 = plVar4 + 2;
          *(uint64_t *)(lVar2 + 0x248) = uStackX_20;
          *(uint64_t *)(lVar2 + 0x250) = param_5;
        } while (plVar4 < *(longlong **)(lVar1 + 0x40));
      }
    }
    param_2 = *(longlong *)(unaff_RDI + 0x30);
    unaff_ESI = unaff_ESI + 1;
    uVar5 = uVar5 + 8;
  } while ((ulonglong)(longlong)(int)unaff_ESI <
           (ulonglong)(*(longlong *)(unaff_RDI + 0x38) - param_2 >> 3));
  return;
}





// 函数: void FUN_180437b55(void)
void FUN_180437b55(void)

{
  return;
}





// 函数: void FUN_180437b60(longlong *param_1,int32_t param_2,int32_t param_3,int32_t param_4,
void FUN_180437b60(longlong *param_1,int32_t param_2,int32_t param_3,int32_t param_4,
                  int32_t param_5)

{
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  if (param_1 != (longlong *)0x0) {
    uStack_c = param_5;
    uStack_18 = param_2;
    uStack_14 = param_3;
    uStack_10 = param_4;
    (**(code **)(*param_1 + 400))(param_5,&uStack_18);
  }
  return;
}





