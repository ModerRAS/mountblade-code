#include "TaleWorlds.Native.Split.h"

// 03_rendering_part612.c - 9 个函数

// 函数: void FUN_180602b09(void)
void FUN_180602b09(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180602d90(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 auStackX_8 [4];
  undefined4 auStackX_18 [2];
  undefined4 auStackX_20 [2];
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar12;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar13;
  undefined1 auStack_38 [16];
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9e8);
  iVar4 = -1;
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x30))) {
    iVar5 = *(int *)(lVar2 + 0xf0);
    uVar3 = *(ulonglong *)((longlong)iVar5 * 0xa0 + 0x50 + *(longlong *)(lVar2 + 0xd0));
    if ((((uVar3 >> 9 & 1) == 0) || (0 < *(short *)(lVar2 + 8))) &&
       (lVar6 = lVar2, (uVar3 >> 1 & 1) != 0)) goto LAB_180602e68;
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x6e0) + 0x2154);
  lVar6 = 0;
  iVar5 = iVar4;
  if ((-1 < iVar1) &&
     (lVar7 = *(longlong *)(param_1 + 0x8f8) + 8 + (longlong)iVar1 * 0x1f8, lVar7 != 0)) {
    if (*(int *)(lVar7 + 0x30) < 1) {
      return 0;
    }
    iVar4 = *(int *)(lVar7 + 0xf0);
    uVar3 = *(ulonglong *)((longlong)iVar4 * 0xa0 + 0x50 + *(longlong *)(lVar7 + 0xd0));
    if (((uVar3 >> 9 & 1) != 0) && (*(short *)(lVar7 + 8) < 1)) {
      return 0;
    }
    if (((byte)uVar3 >> 1 & 1) == 0) {
      iVar4 = func_0x0001805d8e60(lVar7);
    }
    lVar6 = 0;
    if (-1 < iVar4) {
      lVar6 = lVar7;
      iVar5 = iVar4;
    }
  }
LAB_180602e68:
  if (lVar6 == 0) {
    return 0;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x6e0);
  uVar8 = FUN_1805bd4d0(uVar9,lVar6,iVar5,lVar2);
  lVar2 = *(longlong *)(param_1 + 0x20);
  uVar10 = CONCAT44(uVar12,*(undefined4 *)(lVar2 + 0x1d0));
  FUN_1805bd570(uVar9,lVar2,*(float *)(lVar2 + 0x14) - param_2,uVar8,uVar10,
                CONCAT44(uVar13,_DAT_180c9647c));
  uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if ((*(longlong *)(param_1 + 0x628) == lVar6) && (*(int *)(param_1 + 0x644) == iVar5)) {
    uVar8 = *(undefined4 *)(param_1 + 0x63c);
    uVar13 = *(undefined4 *)(param_1 + 0x638);
  }
  else {
    puVar11 = auStackX_20;
    auStackX_20[0] = 0xffffffff;
    auStackX_18[0] = 0xffffffff;
    auStackX_8[0] = 0xffffffff;
    FUN_18050e440(param_1,lVar6,auStackX_18,auStackX_8,puVar11,auStack_38,iVar5);
    uVar12 = (undefined4)((ulonglong)puVar11 >> 0x20);
    uVar9 = *(undefined8 *)(param_1 + 0x6e0);
    uVar8 = auStackX_8[0];
    uVar13 = auStackX_18[0];
  }
  lVar2 = *(longlong *)(param_1 + 0x8d8);
  uVar9 = FUN_1805bdb70(uVar9,lVar2,
                        (float)(*(longlong *)
                                 (&DAT_180c8ed30 + (longlong)*(int *)(lVar2 + 0x87b790) * 8) -
                               *(longlong *)(lVar2 + 0x87b788)) * 1e-05,uVar13,
                        CONCAT44(uVar12,uVar8));
  return uVar9;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180602e71(void)
void FUN_180602e71(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong unaff_RBX;
  int unaff_EBP;
  longlong unaff_RSI;
  undefined8 uVar4;
  undefined4 uVar5;
  float in_XMM3_Da;
  undefined8 in_stack_00000020;
  undefined8 uVar6;
  undefined4 in_stack_00000098;
  
  uVar3 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
  uVar4 = *(undefined8 *)(unaff_RBX + 0x6e0);
  uVar5 = FUN_1805bd4d0(uVar4);
  lVar2 = *(longlong *)(unaff_RBX + 0x20);
  uVar6 = CONCAT44(uVar3,*(undefined4 *)(lVar2 + 0x1d0));
  FUN_1805bd570(uVar4,lVar2,*(float *)(lVar2 + 0x14) - in_XMM3_Da,uVar5,uVar6);
  uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if ((*(longlong *)(unaff_RBX + 0x628) == unaff_RSI) && (*(int *)(unaff_RBX + 0x644) == unaff_EBP))
  {
    uVar1 = *(undefined4 *)(unaff_RBX + 0x638);
    uVar3 = *(undefined4 *)(unaff_RBX + 0x63c);
  }
  else {
    uVar5 = (undefined4)((ulonglong)&stack0x00000098 >> 0x20);
    in_stack_00000098 = 0xffffffff;
    FUN_18050e440();
    uVar3 = 0xffffffff;
    uVar1 = 0xffffffff;
    uVar4 = *(undefined8 *)(unaff_RBX + 0x6e0);
  }
  lVar2 = *(longlong *)(unaff_RBX + 0x8d8);
  FUN_1805bdb70(uVar4,lVar2,
                (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar2 + 0x87b790) * 8) -
                       *(longlong *)(lVar2 + 0x87b788)) * 1e-05,uVar1,CONCAT44(uVar5,uVar3));
  return;
}



undefined8 FUN_180602fb7(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180602fd0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_18050d900();
  if (iVar1 != -1) {
    iVar2 = *(int *)((longlong)iVar1 * 0xa60 + 0x30b8 + *(longlong *)(param_1 + 0x8d8));
    if ((iVar2 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x30))(iVar2);
    }
    if ((iVar2 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x18))(iVar2);
      return iVar2;
    }
  }
  return iVar2;
}



ulonglong FUN_180603070(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  *param_2 = 0;
  *(undefined4 *)param_3 = 0x7fc00000;
  *(undefined4 *)((longlong)param_3 + 4) = 0x7fc00000;
  *(undefined4 *)(param_3 + 1) = 0x7fc00000;
  *(undefined4 *)((longlong)param_3 + 0xc) = 0x7fc00000;
  uVar4 = FUN_18050d900();
  if (-1 < (int)uVar4) {
    lVar2 = *(longlong *)((longlong)(int)uVar4 * 0xa60 + 0x30c0 + *(longlong *)(param_1 + 0x8d8));
    uVar1 = *(undefined4 *)(lVar2 + 0x84);
    *param_2 = uVar1;
    uVar3 = *(undefined8 *)(lVar2 + 0x14);
    *param_3 = *(undefined8 *)(lVar2 + 0xc);
    param_3[1] = uVar3;
    return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return uVar4 & 0xffffffffffffff00;
}





// 函数: void FUN_180603100(longlong param_1)
void FUN_180603100(longlong param_1)

{
  undefined1 auStackX_8 [32];
  
  FUN_1805a3b20(param_1 + 0x28,auStackX_8);
  return;
}



undefined8 * FUN_180603140(undefined8 *param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_18058b980(*(longlong *)(param_2 + 0x590),
                        *(undefined4 *)
                         (*(longlong *)(param_2 + 0x590) + 0x2450 + (longlong)param_3 * 0x48));
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 0x40);
    *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + 0x44);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x7f7fffff;
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0x7f7fffff00000000;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180603210(longlong param_1,undefined8 *param_2,undefined8 *param_3)
void FUN_180603210(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_2c8 [32];
  undefined4 uStack_2a8;
  undefined4 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined1 auStack_218 [32];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 uStack_184;
  undefined1 uStack_183;
  undefined1 uStack_182;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined4 uStack_60;
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_2c8;
  uStack_248 = *param_2;
  uStack_240 = param_2[1];
  uStack_238 = *(undefined4 *)(param_2 + 2);
  uStack_234 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_230 = *(undefined4 *)(param_2 + 3);
  uStack_22c = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_228 = *(undefined4 *)(param_2 + 4);
  uStack_224 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_220 = *(undefined4 *)(param_2 + 5);
  uStack_21c = *(undefined4 *)((longlong)param_2 + 0x2c);
  FUN_1802bfc90(&uStack_248,&uStack_298);
  uStack_278 = *param_3;
  uStack_270 = param_3[1];
  uStack_268 = *(undefined4 *)(param_3 + 2);
  uStack_264 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_260 = *(undefined4 *)(param_3 + 3);
  uStack_25c = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_258 = *(undefined4 *)(param_3 + 4);
  uStack_254 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_250 = *(undefined4 *)(param_3 + 5);
  uStack_24c = *(undefined4 *)((longlong)param_3 + 0x2c);
  FUN_1802bfc90(&uStack_278,&uStack_298);
  lVar2 = *(longlong *)(param_1 + 0x590);
  uVar1 = *(undefined1 *)(lVar2 + 0x2600);
  FUN_18063b470(&uStack_288,&uStack_278);
  FUN_18063b470(&uStack_298,&uStack_248);
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  uStack_2a0 = 0;
  uStack_2a8 = 2;
  FUN_180662190(auStack_218,*(undefined1 *)(lVar2 + 0x25f9),*(undefined1 *)(lVar2 + 0x25fb),uVar1);
  *(undefined8 *)(lVar2 + 0xa440) = uVar3;
  *(undefined8 *)(lVar2 + 0xa448) = uVar4;
  *(undefined8 *)(lVar2 + 0xa450) = uStack_288;
  *(undefined8 *)(lVar2 + 0xa458) = uStack_280;
  *(undefined1 *)(lVar2 + 0xa4d4) = uStack_184;
  *(undefined8 *)(lVar2 + 0xa5e0) = uStack_78;
  *(undefined8 *)(lVar2 + 0xa5e8) = uStack_70;
  *(undefined1 *)(lVar2 + 0xa4d5) = uStack_183;
  *(undefined8 *)(lVar2 + 0xa460) = uStack_1f8;
  *(undefined8 *)(lVar2 + 0xa468) = uStack_1f0;
  *(undefined8 *)(lVar2 + 0xa470) = uStack_1e8;
  *(undefined8 *)(lVar2 + 0xa478) = uStack_1e0;
  *(undefined8 *)(lVar2 + 0xa480) = uStack_1d8;
  *(undefined8 *)(lVar2 + 0xa488) = uStack_1d0;
  *(undefined8 *)(lVar2 + 0xa490) = uStack_1c8;
  *(undefined8 *)(lVar2 + 0xa498) = uStack_1c0;
  *(undefined8 *)(lVar2 + 0xa4a0) = uStack_1b8;
  *(undefined8 *)(lVar2 + 0xa4a8) = uStack_1b0;
  *(undefined1 *)(lVar2 + 0xa4d6) = uStack_182;
  *(undefined1 *)(lVar2 + 0xa5f4) = uStack_64;
  *(undefined4 *)(lVar2 + 0xa5f0) = uStack_68;
  *(undefined4 *)(lVar2 + 0xa4b0) = uStack_1a8;
  *(undefined4 *)(lVar2 + 0xa4b4) = uStack_1a4;
  *(undefined4 *)(lVar2 + 0xa4b8) = uStack_1a0;
  *(undefined4 *)(lVar2 + 0xa4bc) = uStack_19c;
  *(ulonglong *)(lVar2 + 0xa4c0) = CONCAT44(uStack_194,uStack_198);
  *(ulonglong *)(lVar2 + 0xa4c8) = CONCAT44(uStack_18c,uStack_190);
  *(undefined4 *)(lVar2 + 0xa5f8) = uStack_60;
  *(undefined4 *)(lVar2 + 0xa4d0) = 6;
  *(undefined1 *)(lVar2 + 0xa610) = 1;
  *(undefined4 *)(lVar2 + 0xa604) = 0x3f800000;
  *(undefined4 *)(lVar2 + 0xa608) = 0x40400000;
  *(undefined4 *)(lVar2 + 0xa60c) = 0x42200000;
  if (((*(float *)(param_2 + 6) != 0.0) || (*(float *)((longlong)param_2 + 0x34) != 0.0)) ||
     (*(float *)(param_2 + 7) != 0.0)) {
    uVar3 = param_2[6];
    uVar4 = param_2[7];
    uStack_2a0 = 0;
    uStack_2a8 = 2;
    FUN_180662190(auStack_218,*(undefined1 *)(lVar2 + 0x25fa),*(undefined1 *)(lVar2 + 0x25fc),uVar1)
    ;
    *(undefined8 *)(lVar2 + 0xa630) = uVar3;
    *(undefined8 *)(lVar2 + 0xa638) = uVar4;
    *(undefined8 *)(lVar2 + 0xa640) = uStack_298;
    *(undefined8 *)(lVar2 + 0xa648) = uStack_290;
    *(undefined1 *)(lVar2 + 0xa6c4) = uStack_184;
    *(undefined8 *)(lVar2 + 0xa7d0) = uStack_78;
    *(undefined8 *)(lVar2 + 0xa7d8) = uStack_70;
    *(undefined1 *)(lVar2 + 0xa6c5) = uStack_183;
    *(undefined8 *)(lVar2 + 0xa650) = uStack_1f8;
    *(undefined8 *)(lVar2 + 0xa658) = uStack_1f0;
    *(undefined8 *)(lVar2 + 0xa660) = uStack_1e8;
    *(undefined8 *)(lVar2 + 0xa668) = uStack_1e0;
    *(undefined8 *)(lVar2 + 0xa670) = uStack_1d8;
    *(undefined8 *)(lVar2 + 0xa678) = uStack_1d0;
    *(undefined8 *)(lVar2 + 0xa680) = uStack_1c8;
    *(undefined8 *)(lVar2 + 0xa688) = uStack_1c0;
    *(undefined1 *)(lVar2 + 0xa6c6) = uStack_182;
    *(undefined8 *)(lVar2 + 0xa690) = uStack_1b8;
    *(undefined8 *)(lVar2 + 0xa698) = uStack_1b0;
    *(undefined1 *)(lVar2 + 0xa7e4) = uStack_64;
    *(undefined4 *)(lVar2 + 0xa7e0) = uStack_68;
    *(undefined4 *)(lVar2 + 0xa6a0) = uStack_1a8;
    *(undefined4 *)(lVar2 + 0xa6a4) = uStack_1a4;
    *(undefined4 *)(lVar2 + 0xa6a8) = uStack_1a0;
    *(undefined4 *)(lVar2 + 0xa6ac) = uStack_19c;
    *(undefined4 *)(lVar2 + 0xa7e8) = uStack_60;
    *(undefined4 *)(lVar2 + 0xa6c0) = 6;
    *(undefined4 *)(lVar2 + 0xa6b0) = uStack_198;
    *(undefined4 *)(lVar2 + 0xa6b4) = uStack_194;
    *(undefined4 *)(lVar2 + 0xa6b8) = uStack_190;
    *(undefined4 *)(lVar2 + 0xa6bc) = uStack_18c;
    *(undefined1 *)(lVar2 + 0xa800) = 1;
    *(undefined4 *)(lVar2 + 0xa7f4) = 0x3f800000;
    *(undefined4 *)(lVar2 + 43000) = 0x40400000;
    *(undefined4 *)(lVar2 + 0xa7fc) = 0x42200000;
  }
  FUN_180516bd0(param_1,0x400,0xffff);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_2c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180603540(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)
void FUN_180603540(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_338 [32];
  undefined4 uStack_318;
  undefined4 uStack_310;
  undefined4 uStack_288;
  undefined1 auStack_278 [128];
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 uStack_1e4;
  undefined1 uStack_1e3;
  undefined1 uStack_1e2;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  undefined4 uStack_c0;
  ulonglong uStack_b8;
  
  uStack_b8 = _DAT_180bf00a8 ^ (ulonglong)auStack_338;
  lVar2 = *(longlong *)(param_1 + 0x590);
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar1 = *(undefined1 *)(lVar2 + 0x2600);
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uStack_310 = 0;
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  uVar11 = *param_3;
  uVar12 = param_3[1];
  uStack_318 = 2;
  uVar13 = param_3[2];
  uVar14 = param_3[3];
  uVar15 = param_3[4];
  uVar16 = param_3[5];
  uVar17 = param_3[6];
  uVar18 = param_3[7];
  uStack_288 = param_4;
  FUN_180662190(auStack_278,*(undefined1 *)(lVar2 + 0x25f9),*(undefined1 *)(lVar2 + 0x25fb),uVar1);
  *(undefined8 *)(lVar2 + 0xa440) = uVar3;
  *(undefined8 *)(lVar2 + 0xa448) = uVar4;
  *(undefined8 *)(lVar2 + 0xa450) = uVar5;
  *(undefined8 *)(lVar2 + 0xa458) = uVar6;
  *(undefined8 *)(lVar2 + 0xa460) = uVar7;
  *(undefined8 *)(lVar2 + 0xa468) = uVar8;
  *(undefined8 *)(lVar2 + 0xa470) = uVar9;
  *(undefined8 *)(lVar2 + 0xa478) = uVar10;
  *(undefined8 *)(lVar2 + 0xa480) = uVar11;
  *(undefined8 *)(lVar2 + 0xa488) = uVar12;
  *(undefined8 *)(lVar2 + 0xa490) = uVar13;
  *(undefined8 *)(lVar2 + 0xa498) = uVar14;
  *(undefined8 *)(lVar2 + 0xa4a0) = uVar15;
  *(undefined8 *)(lVar2 + 0xa4a8) = uVar16;
  *(undefined8 *)(lVar2 + 0xa5e0) = uStack_d8;
  *(undefined8 *)(lVar2 + 0xa5e8) = uStack_d0;
  *(undefined4 *)(lVar2 + 0xa4d0) = 7;
  *(undefined8 *)(lVar2 + 0xa4b0) = uVar17;
  *(undefined8 *)(lVar2 + 0xa4b8) = uVar18;
  *(undefined1 *)(lVar2 + 0xa610) = 1;
  uStack_1f8 = uStack_288;
  *(undefined1 *)(lVar2 + 0xa4d4) = uStack_1e4;
  *(undefined1 *)(lVar2 + 0xa4d5) = uStack_1e3;
  *(undefined1 *)(lVar2 + 0xa4d6) = uStack_1e2;
  *(undefined1 *)(lVar2 + 0xa5f4) = uStack_c4;
  *(undefined4 *)(lVar2 + 0xa5f0) = uStack_c8;
  *(undefined4 *)(lVar2 + 0xa5f8) = uStack_c0;
  *(undefined4 *)(lVar2 + 0xa4c0) = uStack_288;
  *(undefined4 *)(lVar2 + 0xa4c4) = uStack_1f4;
  *(undefined4 *)(lVar2 + 0xa4c8) = uStack_1f0;
  *(undefined4 *)(lVar2 + 0xa4cc) = uStack_1ec;
  *(undefined4 *)(lVar2 + 0xa604) = 0x3f800000;
  *(undefined4 *)(lVar2 + 0xa608) = 0x40400000;
  *(undefined4 *)(lVar2 + 0xa60c) = 0x42200000;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uStack_310 = 0;
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uStack_318 = 2;
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  uVar11 = *param_3;
  uVar12 = param_3[1];
  uVar13 = param_3[2];
  uVar14 = param_3[3];
  uVar15 = param_3[4];
  uVar16 = param_3[5];
  uVar17 = param_3[6];
  uVar18 = param_3[7];
  uStack_288 = param_4;
  FUN_180662190(auStack_278,*(undefined1 *)(lVar2 + 0x25fa),*(undefined1 *)(lVar2 + 0x25fc),uVar1);
  uStack_1f8 = uStack_288;
  *(undefined1 *)(lVar2 + 0xa6c4) = uStack_1e4;
  *(undefined1 *)(lVar2 + 0xa6c5) = uStack_1e3;
  *(undefined1 *)(lVar2 + 0xa6c6) = uStack_1e2;
  *(undefined1 *)(lVar2 + 0xa7e4) = uStack_c4;
  *(undefined4 *)(lVar2 + 0xa6c0) = 7;
  *(undefined8 *)(lVar2 + 0xa630) = uVar3;
  *(undefined8 *)(lVar2 + 0xa638) = uVar4;
  *(undefined8 *)(lVar2 + 0xa640) = uVar5;
  *(undefined8 *)(lVar2 + 0xa648) = uVar6;
  *(undefined8 *)(lVar2 + 0xa650) = uVar7;
  *(undefined8 *)(lVar2 + 0xa658) = uVar8;
  *(undefined8 *)(lVar2 + 0xa660) = uVar9;
  *(undefined8 *)(lVar2 + 0xa668) = uVar10;
  *(undefined8 *)(lVar2 + 0xa670) = uVar11;
  *(undefined8 *)(lVar2 + 0xa678) = uVar12;
  *(undefined8 *)(lVar2 + 0xa680) = uVar13;
  *(undefined8 *)(lVar2 + 0xa688) = uVar14;
  *(undefined8 *)(lVar2 + 0xa690) = uVar15;
  *(undefined8 *)(lVar2 + 0xa698) = uVar16;
  *(undefined8 *)(lVar2 + 0xa7d0) = uStack_d8;
  *(undefined8 *)(lVar2 + 0xa7d8) = uStack_d0;
  *(undefined4 *)(lVar2 + 0xa7e0) = uStack_c8;
  *(undefined8 *)(lVar2 + 0xa6a0) = uVar17;
  *(undefined8 *)(lVar2 + 0xa6a8) = uVar18;
  *(undefined4 *)(lVar2 + 0xa6b0) = uStack_288;
  *(undefined4 *)(lVar2 + 0xa6b4) = uStack_1f4;
  *(undefined4 *)(lVar2 + 0xa6b8) = uStack_1f0;
  *(undefined4 *)(lVar2 + 0xa6bc) = uStack_1ec;
  *(undefined4 *)(lVar2 + 0xa7e8) = uStack_c0;
  *(undefined1 *)(lVar2 + 0xa800) = 1;
  *(undefined4 *)(lVar2 + 0xa7f4) = 0x3f800000;
  *(undefined4 *)(lVar2 + 43000) = 0x40400000;
  *(undefined4 *)(lVar2 + 0xa7fc) = 0x42200000;
  FUN_180516bd0(param_1,0x400,0xffff);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_b8 ^ (ulonglong)auStack_338);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806038e0(longlong param_1)
void FUN_1806038e0(longlong param_1)

{
  longlong lVar1;
  float *pfVar2;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (((*(int *)(param_1 + 0x570) == 1) && (lVar1 = *(longlong *)(param_1 + 0x6e0), lVar1 != 0)) &&
     (*(char *)(lVar1 + 0x14d8) != '\0')) {
    pfVar2 = (float *)(*(longlong *)(param_1 + 0x20) + 0xc);
    uStack_10 = 0;
    fStack_18 = *(float *)(lVar1 + 0x1508) - *pfVar2;
    fStack_14 = *(float *)(lVar1 + 0x150c) - *(float *)(*(longlong *)(param_1 + 0x20) + 0x10);
    uStack_c = 0x7f7fffff;
    FUN_180633110(_DAT_180c8ed68,pfVar2,&fStack_18,0xffffff00,0,0);
  }
  return;
}



undefined8 * FUN_1806039b0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_18 [16];
  
  puVar2 = (undefined8 *)FUN_18058d2b0(*(undefined8 *)(param_2 + 0x590),auStack_18);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}



undefined4 FUN_1806039e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_18065cec0(*(longlong *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x590) + 0x2590) + 0xc78) + 0x60,0);
  return *(undefined4 *)(lVar1 + 0x10);
}





// 函数: void FUN_180603b90(longlong param_1,int param_2)
void FUN_180603b90(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x6e0);
  if (*(int *)(lVar1 + 0x2160) != param_2) {
    *(int *)(lVar1 + 0x2160) = param_2;
    FUN_180508100(lVar1,0x3d4ccccd,0x3e99999a);
    *(undefined4 *)(lVar1 + 0x178c) = 0;
    *(undefined8 *)(lVar1 + 0x1398) =
         *(undefined8 *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar1 + 0x13a0) * 8);
  }
  return;
}





// 函数: void FUN_180603d10(longlong param_1,float *param_2,float *param_3,float *param_4)
void FUN_180603d10(longlong param_1,float *param_2,float *param_3,float *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  ulonglong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 auStack_248 [180];
  undefined4 uStack_194;
  float fStack_178;
  
  pfVar4 = param_3;
  func_0x000180603f70(auStack_248,
                      *(longlong *)(param_1 + 0x8d8) + 0x52eda0 +
                      (longlong)*(int *)(param_1 + 0x10) * 0x200);
  lVar1 = *(longlong *)(param_1 + 0x20);
  iVar3 = 0;
  uStack_194 = 1;
  fVar7 = 0.0;
  fVar6 = 0.0;
  uStack_328 = *(undefined8 *)(lVar1 + 8);
  uStack_320 = *(undefined8 *)(lVar1 + 0x10);
  uStack_310 = *(undefined8 *)(lVar1 + 0x20);
  uStack_308 = *(undefined8 *)(lVar1 + 0x28);
  uStack_300 = *(undefined8 *)(lVar1 + 0x30);
  uStack_2f8 = *(undefined8 *)(lVar1 + 0x38);
  uStack_2f0 = *(undefined8 *)(lVar1 + 0x40);
  uStack_2e8 = *(undefined8 *)(lVar1 + 0x48);
  uStack_2e0 = *(undefined8 *)(lVar1 + 0x50);
  uStack_2d8 = *(undefined8 *)(lVar1 + 0x58);
  uStack_2d0 = *(undefined8 *)(lVar1 + 0x60);
  uStack_2b0 = *(undefined8 *)(lVar1 + 0x80);
  uStack_2a0 = *(undefined8 *)(lVar1 + 0x90);
  uStack_298 = *(undefined8 *)(lVar1 + 0x98);
  uStack_290 = *(undefined8 *)(lVar1 + 0xa0);
  uStack_288 = *(undefined8 *)(lVar1 + 0xa8);
  uStack_280 = *(undefined8 *)(lVar1 + 0xb0);
  uStack_278 = *(undefined8 *)(lVar1 + 0xb8);
  uStack_270 = *(undefined8 *)(lVar1 + 0xc0);
  uStack_268 = *(undefined8 *)(lVar1 + 200);
  uStack_260 = *(undefined8 *)(lVar1 + 0xd0);
  uStack_258 = *(undefined8 *)(lVar1 + 0xd8);
  uStack_2a8._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar1 + 0x88) >> 0x20);
  uStack_2c8 = 0;
  uStack_2c0 = 0x7f7fffff3f800000;
  uStack_318._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar1 + 0x18) >> 0x20);
  fVar5 = uStack_318._4_4_ * uStack_318._4_4_;
  uStack_2b8 = *(ulonglong *)(lVar1 + 0x78) & 0xffffffff;
  uStack_318 = *(undefined8 *)(lVar1 + 0x18);
  uVar2 = *(undefined8 *)(lVar1 + 0x88);
  if (uStack_2a8._4_4_ <= SQRT((float)uStack_310 * (float)uStack_310 + fVar5)) {
    *param_2 = 0.0;
    *pfVar4 = uStack_2a8._4_4_;
  }
  else {
    do {
      uStack_2a8 = uVar2;
      FUN_180596510(*(undefined8 *)(param_1 + 0x8d8),0x3c23d70a,auStack_248,&uStack_328,0);
      fVar7 = fVar7 + 0.01;
      if (((float)iVar3 * 0.4 < fVar7) && (iVar3 < 10)) {
        iVar3 = iVar3 + 1;
        *param_4 = SQRT((float)uStack_310 * (float)uStack_310 + uStack_318._4_4_ * uStack_318._4_4_)
        ;
        param_4 = param_4 + 1;
      }
      fVar5 = SQRT((float)uStack_310 * (float)uStack_310 + uStack_318._4_4_ * uStack_318._4_4_);
      if (fStack_178 * uStack_2a8._4_4_ <= fVar5) {
        fVar6 = fVar6 + 0.01;
      }
      uVar2 = uStack_2a8;
    } while (fVar5 < uStack_2a8._4_4_);
    *param_2 = fVar6;
    *param_3 = uStack_2a8._4_4_;
  }
  return;
}





// 函数: void FUN_180603e4e(void)
void FUN_180603e4e(void)

{
  int unaff_EBX;
  float *unaff_RBP;
  longlong unaff_RSI;
  float *unaff_RDI;
  float *unaff_R14;
  float fVar1;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  undefined8 in_stack_00000040;
  float in_stack_00000048;
  undefined8 in_stack_000000b0;
  float in_stack_000001e0;
  
  do {
    FUN_180596510(*(undefined8 *)(unaff_RSI + 0x8d8),0x3c23d70a,&stack0x00000110,&stack0x00000030,0)
    ;
    unaff_XMM8_Da = unaff_XMM8_Da + 0.01;
    if (((float)unaff_EBX * 0.4 < unaff_XMM8_Da) && (unaff_EBX < 10)) {
      unaff_EBX = unaff_EBX + 1;
      *unaff_RDI = SQRT(in_stack_00000048 * in_stack_00000048 +
                        in_stack_00000040._4_4_ * in_stack_00000040._4_4_);
      unaff_RDI = unaff_RDI + 1;
    }
    fVar1 = SQRT(in_stack_00000048 * in_stack_00000048 +
                 in_stack_00000040._4_4_ * in_stack_00000040._4_4_);
    if (in_stack_000001e0 * in_stack_000000b0._4_4_ <= fVar1) {
      unaff_XMM7_Da = unaff_XMM7_Da + 0.01;
    }
  } while (fVar1 < in_stack_000000b0._4_4_);
  *unaff_R14 = unaff_XMM7_Da;
  *unaff_RBP = in_stack_000000b0._4_4_;
  return;
}





