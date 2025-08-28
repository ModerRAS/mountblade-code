#include "TaleWorlds.Native.Split.h"

// 99_part_06_part037.c - 1 个函数

// 函数: void FUN_1803c9620(void **param_1,uint64_t *param_2,longlong param_3,uint param_4,int param_5
void FUN_1803c9620(void **param_1,uint64_t *param_2,longlong param_3,uint param_4,int param_5
                  ,float param_6,float param_7,int32_t param_8,int32_t *param_9)

{
  byte *pbVar1;
  code *pcVar2;
  longlong lVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  float fVar15;
  int8_t auStack_1c8 [32];
  uint64_t *puStack_1a8;
  int8_t *puStack_1a0;
  int8_t auStack_198 [8];
  uint64_t *puStack_190;
  uint64_t uStack_188;
  longlong *plStack_180;
  void **ppuStack_178;
  uint uStack_170;
  int32_t uStack_16c;
  int32_t uStack_168;
  int32_t uStack_164;
  int32_t uStack_160;
  int32_t uStack_15c;
  int iStack_158;
  uint uStack_154;
  int32_t uStack_150;
  int32_t uStack_148;
  longlong lStack_140;
  int32_t uStack_138;
  int16_t uStack_134;
  uint64_t uStack_130;
  uint64_t *puStack_128;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  int32_t uStack_e8;
  int32_t uStack_e4;
  int32_t uStack_e0;
  int32_t uStack_dc;
  longlong *plStack_d8;
  void *puStack_d0;
  longlong lStack_c8;
  int32_t uStack_b8;
  int32_t auStack_78 [2];
  uint64_t *puStack_70;
  float fStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  ulonglong uStack_58;
  
  uStack_130 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_1c8;
  uVar14 = (ulonglong)param_4;
  uStack_16c = 0;
  fVar15 = (param_7 - param_6) * 3.0517578e-05;
  puStack_190 = param_2;
  ppuStack_178 = param_1;
  uStack_170 = param_4;
  puStack_128 = param_2;
  lVar3 = FUN_1803ceee0((longlong)(int)(param_5 * param_4));
  if (0 < (int)param_4) {
    iVar13 = 0;
    iVar12 = (param_4 - 1) * param_5;
    lVar9 = lVar3 + 3;
    do {
      lVar8 = lVar9;
      lVar11 = (longlong)param_5;
      iVar10 = iVar13;
      if (0 < param_5) {
        do {
          *(int16_t *)(lVar8 + -3) = *(int16_t *)(param_3 + (longlong)(iVar12 + iVar10) * 2);
          *(int16_t *)(lVar8 + -1) = 0;
          pbVar1 = (byte *)(lVar3 + 2 + (longlong)iVar10 * 4);
          *pbVar1 = *pbVar1 | 0x80;
          lVar11 = lVar11 + -1;
          lVar8 = lVar8 + 4;
          iVar10 = iVar10 + 1;
        } while (lVar11 != 0);
      }
      iVar13 = iVar13 + param_5;
      lVar9 = lVar9 + (longlong)param_5 * 4;
      iVar12 = iVar12 + param_5 * -2;
      uVar14 = uVar14 - 1;
      param_1 = ppuStack_178;
      param_2 = puStack_190;
      param_4 = uStack_170;
    } while (uVar14 != 0);
  }
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_150 = 1;
  iStack_158 = param_5;
  uStack_148 = 4;
  plVar7 = *(longlong **)(_DAT_180c8a990 + 0x28);
  pcVar2 = *(code **)(*plVar7 + 0x60);
  uStack_154 = param_4;
  lStack_140 = lVar3;
  uVar4 = (**(code **)(**(longlong **)(_DAT_180c8a990 + 0x20) + 0x120))();
  puVar5 = (uint64_t *)(*pcVar2)(plVar7,&iStack_158,uVar4);
  if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar3);
  }
  puVar6 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
  *puVar6 = &unknown_var_4096_ptr;
  *puVar6 = &unknown_var_4064_ptr;
  *(float *)(puVar6 + 2) = fVar15;
  puVar6[1] = 0;
  puVar6[1] = puVar5;
  auStack_78[0] = 6;
  uStack_64 = param_8;
  uStack_60 = param_8;
  uStack_5c = 0;
  ppuStack_178 = *(void ***)(_DAT_180c8a990 + 200);
  auStack_198[0] = 0xb;
  puStack_1a0 = auStack_198;
  puStack_1a8 = (uint64_t *)CONCAT71(puStack_1a8._1_7_,1);
  puStack_70 = puVar5;
  fStack_68 = fVar15;
  plVar7 = (longlong *)
           (**(code **)(*(longlong *)param_1[0x19] + 0xb8))(param_1[0x19],auStack_78,&ppuStack_178);
  uStack_15c = 0;
  uStack_168 = 4;
  uStack_164 = 10;
  uStack_160 = 0xffffffff;
  (**(code **)(*plVar7 + 0xa0))(plVar7,&uStack_168);
  puStack_190 = (uint64_t *)0x400000;
  uStack_188 = 0;
  (**(code **)(*plVar7 + 0xb0))(plVar7,&puStack_190);
  if (puVar5 != (uint64_t *)0x0) {
    (**(code **)*puVar5)(puVar5);
  }
  uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,3);
  uVar4 = FUN_1803c5c50(uVar4,plVar7);
  uStack_118 = 0x3f800000;
  uStack_110 = 0;
  uStack_108 = 0x3f80000000000000;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0x3f800000;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0x3f800000;
  puStack_190 = (uint64_t *)0x3f800000;
  uStack_188 = 0x7f7fffff00000000;
  FUN_1803cf380(&uStack_118,0,&puStack_190);
  puStack_190 = (uint64_t *)0x3f80000000000000;
  uStack_188 = 0x7f7fffff00000000;
  FUN_1803cf380(&uStack_118);
  uStack_e8 = *param_9;
  uStack_e4 = param_9[1];
  uStack_e0 = param_9[2];
  uStack_dc = 0x7f7fffff;
  FUN_1802f5e40(&plStack_d8);
  puStack_1a8 = &uStack_118;
  (**(code **)(*param_1 + 200))(param_1,&plStack_180,&plStack_d8,uVar4);
  (**(code **)*plVar7)(plVar7);
  plStack_180[2] = 0;
  *(int32_t *)(plStack_180 + 3) = 0x2000000;
  (**(code **)(*plStack_180 + 0x138))(plStack_180,uVar4);
  (**(code **)(*plStack_180 + 0x80))();
  *param_2 = plStack_180;
  if (plStack_180 != (longlong *)0x0) {
    (**(code **)(*plStack_180 + 0x28))();
  }
  param_2[1] = puVar6;
  uStack_16c = 1;
  if (plStack_180 != (longlong *)0x0) {
    (**(code **)(*plStack_180 + 0x38))();
  }
  ppuStack_178 = &puStack_d0;
  puStack_d0 = &unknown_var_3456_ptr;
  if (lStack_c8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_c8 = 0;
  uStack_b8 = 0;
  puStack_d0 = &unknown_var_720_ptr;
  if (plStack_d8 != (longlong *)0x0) {
    (**(code **)(*plStack_d8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_1c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *
FUN_1803c9a90(longlong *param_1,longlong *param_2,longlong param_3,float param_4,int param_5,
             int param_6)

{
  longlong lVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  int32_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  float fStack_c8;
  float fStack_c4;
  int32_t uStack_c0;
  int32_t uStack_bc;
  longlong *plStack_b8;
  void *puStack_b0;
  longlong lStack_a8;
  int32_t uStack_98;
  
  uStack_100 = 0xfffffffffffffffe;
  puVar3 = *(uint64_t **)(param_3 + 0x60);
  if (puVar3 != (uint64_t *)0x0) {
    lVar1 = __RTCastToVoid(puVar3);
    (**(code **)*puVar3)(puVar3,0);
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar1);
    }
    *(uint64_t *)(param_3 + 0x60) = 0;
  }
  uVar2 = FUN_1803ca950(param_1,param_3);
  puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
  lVar1 = param_1[0x46];
  *puVar3 = &unknown_var_4096_ptr;
  *puVar3 = &unknown_var_4064_ptr;
  *(int *)(puVar3 + 2) = (int)lVar1;
  puVar3[1] = 0;
  puVar3[1] = uVar2;
  *(uint64_t **)(param_3 + 0x60) = puVar3;
  uVar2 = FUN_1803cafa0(param_1,param_3,uVar2);
  uStack_f8 = 0x3f800000;
  uStack_f0 = 0;
  uStack_e8 = 0x3f80000000000000;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0x3f800000;
  fStack_c8 = 0.0;
  fStack_c4 = 0.0;
  uStack_c0 = 0;
  uStack_bc = 0x3f800000;
  uStack_114 = 0x3f800000;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_108 = 0x7f7fffff;
  FUN_1803cf380(&uStack_f8,0,&uStack_114);
  uStack_114 = 0;
  uStack_110 = 0x3f800000;
  uStack_10c = 0;
  uStack_108 = 0x7f7fffff;
  FUN_1803cf380(&uStack_f8);
  uStack_c0 = 0;
  uStack_bc = 0x7f7fffff;
  fStack_c8 = (float)param_5 * param_4;
  fStack_c4 = (float)param_6 * param_4;
  FUN_1802f5e40(0);
  (**(code **)(*param_1 + 200))(param_1,param_2,&plStack_b8,uVar2,&uStack_f8);
  *(uint64_t *)(*param_2 + 0x10) = 0;
  *(int32_t *)(*param_2 + 0x18) = 0x2000000;
  (**(code **)(*(longlong *)*param_2 + 0x138))((longlong *)*param_2,uVar2);
  (**(code **)(*(longlong *)*param_2 + 0x80))();
  puStack_b0 = &unknown_var_3456_ptr;
  if (lStack_a8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_a8 = 0;
  uStack_98 = 0;
  puStack_b0 = &unknown_var_720_ptr;
  if (plStack_b8 != (longlong *)0x0) {
    (**(code **)(*plStack_b8 + 0x38))();
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *
FUN_1803c9d00(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
             uint64_t *param_5)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint64_t uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  void *puVar9;
  uint uVar10;
  float fVar12;
  int32_t uVar13;
  longlong *plStackX_20;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  int32_t uStack_e0;
  int32_t uStack_dc;
  int32_t uStack_d8;
  int32_t uStack_c8;
  int32_t uStack_c4;
  int32_t uStack_c0;
  int32_t uStack_bc;
  int32_t uStack_b8;
  int32_t uStack_b4;
  int32_t uStack_b0;
  int32_t uStack_ac;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
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
  uint64_t uStack_58;
  ulonglong uVar11;
  
  uStack_58 = 0xfffffffffffffffe;
  uVar8 = 0;
  *param_2 = 0;
  uStack_98 = *param_5;
  uStack_90 = param_5[1];
  uStack_88 = param_5[2];
  uStack_80 = param_5[3];
  uStack_78 = *(int32_t *)(param_5 + 4);
  uStack_74 = *(int32_t *)((longlong)param_5 + 0x24);
  uStack_70 = *(int32_t *)(param_5 + 5);
  uStack_6c = *(int32_t *)((longlong)param_5 + 0x2c);
  uStack_68 = *(int32_t *)(param_5 + 6);
  uStack_64 = *(int32_t *)((longlong)param_5 + 0x34);
  uStack_60 = *(int32_t *)(param_5 + 7);
  uStack_5c = *(int32_t *)((longlong)param_5 + 0x3c);
  FUN_180084ae0(&uStack_98,uStack_68,param_3,param_4,1);
  uVar6 = *(uint64_t *)(param_1 + 200);
  lVar4 = FUN_18063b470(&uStack_c8,&uStack_98);
  uStack_b8 = uStack_c4;
  uStack_b4 = uStack_c0;
  uStack_b0 = uStack_bc;
  uStack_ac = uStack_c8;
  uStack_a8 = uStack_68;
  uStack_a4 = uStack_64;
  uStack_a0 = uStack_60;
  plVar5 = (longlong *)(**(code **)(lVar4 + 0xa8))(uVar6,&uStack_b8);
  uVar11 = uVar8;
  plStackX_20 = plVar5;
  if (0 < (int)(*(longlong *)(param_4 + 0x10) - *(longlong *)(param_4 + 8) >> 3)) {
    do {
      (**(code **)(*plVar5 + 0xa0))(plVar5,*(uint64_t *)(uVar8 + *(longlong *)(param_4 + 8)));
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      uVar8 = uVar8 + 8;
    } while ((int)uVar10 < (int)(*(longlong *)(param_4 + 0x10) - *(longlong *)(param_4 + 8) >> 3));
  }
  fVar12 = *(float *)((longlong)param_3 + 0x3c);
  if (fVar12 < 0.01) {
    puVar9 = &system_buffer_ptr;
    if (*(void **)(*param_3 + 0x18) != (void *)0x0) {
      puVar9 = *(void **)(*param_3 + 0x18);
    }
    FUN_180626f80(&unknown_var_4896_ptr,(double)fVar12,puVar9);
    fVar12 = 1.0;
  }
  uStack_d8 = (int32_t)param_3[9];
  uStack_dc = *(int32_t *)((longlong)param_3 + 0x44);
  uStack_e0 = (int32_t)param_3[8];
  cVar2 = FUN_1806b7380(plVar5,fVar12,&uStack_e0,0);
  if (cVar2 == '\0') {
    FUN_180626f80(&unknown_var_3192_ptr);
  }
  (**(code **)(*plVar5 + 0x100))(plVar5,&fStack_f0);
  if (fStack_f0 <= 0.1) {
    fStack_f0 = 0.1;
  }
  if (fStack_ec <= 0.1) {
    fStack_ec = 0.1;
  }
  if (fStack_e8 <= 0.1) {
    fStack_e8 = 0.1;
  }
  (**(code **)(*plVar5 + 0xf8))(plVar5,&fStack_f0);
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x50))(*(longlong **)(param_1 + 0xb8),plVar5,0);
  uVar6 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,6,3);
  plVar7 = (longlong *)FUN_1803c6190(uVar6,plVar5);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plVar1 = (longlong *)*param_2;
  *param_2 = (longlong)plVar7;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int *)(*param_2 + 0x18) = (int)param_3[7];
  (**(code **)(*(longlong *)*param_2 + 0x138))((longlong *)*param_2,param_4);
  lVar4 = _DAT_180c8aa00;
  iVar3 = FUN_180191c00(_DAT_180c8aa00,param_3 + 1);
  if ((iVar3 == -1) || (lVar4 = (longlong)iVar3 * 0x68 + *(longlong *)(lVar4 + 0x38), lVar4 == 0)) {
    lVar4 = *(longlong *)(param_4 + 0x28);
    if (lVar4 == 0) goto LAB_1803ca01a;
    (**(code **)(*plVar5 + 0x120))(plVar5,*(int32_t *)(lVar4 + 0x60));
    uVar13 = *(int32_t *)(lVar4 + 0x5c);
  }
  else {
    (**(code **)(*plVar5 + 0x120))(plVar5,*(int32_t *)(lVar4 + 0x60));
    uVar13 = *(int32_t *)(lVar4 + 0x5c);
  }
  (**(code **)(*plVar5 + 0x110))(plVar5,uVar13);
LAB_1803ca01a:
  (**(code **)(*plVar5 + 0x1c0))(plVar5,0x40800000);
  (**(code **)(*plVar5 + 600))(plVar5,6,1);
  (**(code **)(*plVar5 + 0x198))(plVar5,4,1);
  FUN_18005ea90(param_1 + 0x1b0,&plStackX_20);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *
FUN_1803ca080(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
             uint64_t *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  uint64_t uVar3;
  uint uVar4;
  ulonglong uVar6;
  int32_t uStack_b8;
  int32_t uStack_b4;
  int32_t uStack_b0;
  int32_t uStack_ac;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  ulonglong uVar5;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar5 = 0;
  *param_2 = 0;
  uStack_88 = *param_5;
  uStack_80 = param_5[1];
  uStack_78 = param_5[2];
  uStack_70 = param_5[3];
  uStack_68 = *(int32_t *)(param_5 + 4);
  uStack_64 = *(int32_t *)((longlong)param_5 + 0x24);
  uStack_60 = *(int32_t *)(param_5 + 5);
  uStack_5c = *(int32_t *)((longlong)param_5 + 0x2c);
  uStack_58 = *(int32_t *)(param_5 + 6);
  uStack_54 = *(int32_t *)((longlong)param_5 + 0x34);
  uStack_50 = *(int32_t *)(param_5 + 7);
  uStack_4c = *(int32_t *)((longlong)param_5 + 0x3c);
  FUN_180084ae0(&uStack_88,uStack_58,param_3,(char)param_4,1);
  FUN_18063b470(&uStack_b8,&uStack_88);
  uStack_a8 = uStack_b4;
  uStack_a4 = uStack_b0;
  uStack_a0 = uStack_ac;
  uStack_9c = uStack_b8;
  uStack_98 = uStack_58;
  uStack_94 = uStack_54;
  uStack_90 = uStack_50;
  plVar2 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 200) + 0xa0))
                     (*(longlong **)(param_1 + 200),&uStack_a8);
  uVar6 = uVar5;
  if (0 < (int)(*(longlong *)(param_4 + 0x10) - *(longlong *)(param_4 + 8) >> 3)) {
    do {
      (**(code **)(*plVar2 + 0xa0))(plVar2,*(uint64_t *)(uVar6 + *(longlong *)(param_4 + 8)));
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar6 = uVar6 + 8;
    } while ((int)uVar4 < (int)(*(longlong *)(param_4 + 0x10) - *(longlong *)(param_4 + 8) >> 3));
  }
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x50))(*(longlong **)(param_1 + 0xb8),plVar2,0);
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,6,3);
  plVar2 = (longlong *)FUN_1803c6190(uVar3,plVar2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar1 = (longlong *)*param_2;
  *param_2 = (longlong)plVar2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int32_t *)(*param_2 + 0x18) = *(int32_t *)(param_3 + 0x38);
  (**(code **)(*(longlong *)*param_2 + 0x138))((longlong *)*param_2,param_4);
  return param_2;
}



int FUN_1803ca260(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x1b0);
  iVar4 = 0;
  iVar5 = 0;
  if (*(longlong *)(param_1 + 0x1b8) - lVar3 >> 3 != 0) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + lVar3);
      lVar3 = (**(code **)(*plVar1 + 0x88))(plVar1);
      if ((lVar3 == 0) && (cVar2 = (**(code **)(*plVar1 + 0x1f8))(plVar1), cVar2 == '\0')) {
        iVar4 = iVar4 + 1;
      }
      lVar3 = *(longlong *)(param_1 + 0x1b0);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((ulonglong)(longlong)iVar5 < (ulonglong)(*(longlong *)(param_1 + 0x1b8) - lVar3 >> 3));
  }
  return iVar4;
}



uint FUN_1803ca291(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  uint unaff_EBX;
  int unaff_EBP;
  ulonglong uVar4;
  longlong unaff_R14;
  
  uVar4 = (ulonglong)unaff_EBX;
  do {
    plVar1 = *(longlong **)(uVar4 + param_3);
    lVar3 = (**(code **)(*plVar1 + 0x88))(plVar1);
    if (lVar3 == 0) {
      cVar2 = (**(code **)(*plVar1 + 0x1f8))(plVar1);
      if (cVar2 == '\0') {
        unaff_EBX = unaff_EBX + 1;
      }
    }
    param_3 = *(longlong *)(unaff_R14 + 0x1b0);
    unaff_EBP = unaff_EBP + 1;
    uVar4 = uVar4 + 8;
  } while ((ulonglong)(longlong)unaff_EBP <
           (ulonglong)(*(longlong *)(unaff_R14 + 0x1b8) - param_3 >> 3));
  return unaff_EBX;
}



int32_t FUN_1803ca2f4(void)

{
  int32_t unaff_EBX;
  
  return unaff_EBX;
}



bool FUN_1803ca310(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1803c7600(param_1 + 0x130);
  return lVar1 != 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




