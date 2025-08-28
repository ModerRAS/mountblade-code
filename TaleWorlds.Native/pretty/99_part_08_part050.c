#include "TaleWorlds.Native.Split.h"

// 99_part_08_part050.c - 3 个函数

// 函数: void FUN_1805aae80(uint64_t param_1,int param_2,int32_t *param_3,int32_t *param_4)
void FUN_1805aae80(uint64_t param_1,int param_2,int32_t *param_3,int32_t *param_4)

{
  int iVar1;
  int32_t auStack_118 [64];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  auStack_118[4] = 0x3f76f3b3;
  iVar1 = param_2 + -1;
  if (0x1f < param_2 + -1) {
    iVar1 = 0x1f;
  }
  auStack_118[8] = 0x3f46bcfb;
  auStack_118[6] = 0x3f5da220;
  auStack_118[0xc] = 0x3f20d3fb;
  auStack_118[10] = 0x3f3275d4;
  auStack_118[0x10] = 0x3f050176;
  auStack_118[0xe] = 0x3f11bd7e;
  auStack_118[0x14] = 0x3ee334ec;
  auStack_118[0x12] = 0x3ef4c354;
  auStack_118[0x16] = 0x3ed4d11b;
  auStack_118[0x18] = 0x3ec9197a;
  auStack_118[0x1a] = 0x3ebf9c00;
  auStack_118[0x1c] = 0x3eb7f4d5;
  auStack_118[0x1e] = 0x3eb1ce73;
  auStack_118[0x20] = 0x3eace0d5;
  auStack_118[0x22] = 0x3ea8f021;
  auStack_118[0x24] = 0x3ea5cb17;
  auStack_118[0x26] = 0x3ea34985;
  auStack_118[0x28] = 0x3ea14ad0;
  auStack_118[0x2a] = 0x3e9fb4a5;
  auStack_118[0x2c] = 0x3e9e71da;
  auStack_118[0x2e] = 0x3e9d7178;
  auStack_118[0x30] = 0x3e9ca5ee;
  auStack_118[0x32] = 0x3e9c0465;
  auStack_118[0] = 0x3f800000;
  auStack_118[1] = 5;
  auStack_118[2] = 0x3f800000;
  auStack_118[3] = 5;
  auStack_118[5] = 5;
  auStack_118[7] = 6;
  auStack_118[9] = 6;
  auStack_118[0xb] = 6;
  auStack_118[0xd] = 6;
  auStack_118[0xf] = 7;
  auStack_118[0x11] = 7;
  auStack_118[0x13] = 7;
  auStack_118[0x15] = 8;
  auStack_118[0x17] = 8;
  auStack_118[0x19] = 8;
  auStack_118[0x1b] = 8;
  auStack_118[0x1d] = 9;
  auStack_118[0x1f] = 9;
  auStack_118[0x21] = 9;
  auStack_118[0x23] = 9;
  auStack_118[0x25] = 9;
  auStack_118[0x27] = 9;
  auStack_118[0x29] = 9;
  auStack_118[0x2b] = 9;
  auStack_118[0x2d] = 9;
  auStack_118[0x2f] = 9;
  auStack_118[0x31] = 9;
  auStack_118[0x33] = 9;
  auStack_118[0x36] = 0x3e9b1e95;
  auStack_118[0x34] = 0x3e9b843d;
  auStack_118[0x38] = 0x3e9acdf7;
  auStack_118[0x3a] = 0x3e9a8e0a;
  auStack_118[0x3c] = 0x3e9a5b5c;
  auStack_118[0x3e] = 0x3e9a332d;
  auStack_118[0x35] = 9;
  auStack_118[0x37] = 10;
  auStack_118[0x39] = 10;
  auStack_118[0x3b] = 10;
  auStack_118[0x3d] = 10;
  auStack_118[0x3f] = 10;
  *param_3 = auStack_118[(longlong)iVar1 * 2 + 1];
  *param_4 = auStack_118[(longlong)iVar1 * 2];
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_118);
}



uint64_t *
FUN_1805ab180(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int32_t *param_4,
             int8_t param_5,longlong *param_6,char param_7,char param_8)

{
  int32_t uVar1;
  char cVar2;
  byte bVar3;
  uint64_t *puVar4;
  longlong lVar5;
  int32_t extraout_XMM0_Da;
  int32_t uVar6;
  int32_t extraout_XMM0_Da_00;
  int32_t uVar7;
  longlong *plStackX_10;
  
  *param_1 = param_3;
  param_1[1] = param_2;
  lVar5 = param_6[1];
  uVar7 = *(int32_t *)((longlong)param_6 + 4);
  puVar4 = (uint64_t *)FUN_1800c1750(param_1,&param_6,(int)*param_6);
  param_1[2] = *puVar4;
  uVar6 = extraout_XMM0_Da;
  if (param_6 != (longlong *)0x0) {
    uVar6 = (**(code **)(*param_6 + 0x38))();
  }
  puVar4 = (uint64_t *)FUN_1800c1750(uVar6,&plStackX_10,uVar7);
  param_1[3] = *puVar4;
  uVar7 = extraout_XMM0_Da_00;
  if (plStackX_10 != (longlong *)0x0) {
    uVar7 = (**(code **)(*plStackX_10 + 0x38))();
  }
  puVar4 = (uint64_t *)FUN_1800c1750(uVar7,&param_6,(int)lVar5);
  param_1[4] = *puVar4;
  if (param_6 != (longlong *)0x0) {
    (**(code **)(*param_6 + 0x38))();
  }
  *(int8_t *)(param_1 + 5) = 0;
  if (param_1[2] != 0) {
    cVar2 = FUN_1802b6000();
    if (cVar2 != '\0') {
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
    }
  }
  if (param_1[3] != 0) {
    cVar2 = FUN_1802b6000();
    if (cVar2 != '\0') {
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 2;
    }
  }
  if (param_1[4] != 0) {
    cVar2 = FUN_1802b6000();
    if (cVar2 != '\0') {
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 4;
    }
  }
  uVar7 = param_4[1];
  uVar6 = param_4[2];
  uVar1 = param_4[3];
  *(int32_t *)(param_1 + 6) = *param_4;
  *(int32_t *)((longlong)param_1 + 0x34) = uVar7;
  *(int32_t *)(param_1 + 7) = uVar6;
  *(int32_t *)((longlong)param_1 + 0x3c) = uVar1;
  *(int8_t *)(param_1 + 8) = param_5;
  *(int8_t *)((longlong)param_1 + 0x41) = 0;
  param_6 = param_1 + 9;
  *param_6 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(int32_t *)(param_1 + 0xc) = 3;
  param_1[0xd] = 0;
  puVar4 = param_1 + 0xe;
  lVar5 = 0x40;
  do {
    func_0x0001805ab170(puVar4);
    puVar4 = (uint64_t *)((longlong)puVar4 + 1);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if (param_7 == '\0') {
    *(byte *)((longlong)param_1 + 0x41) = *(byte *)((longlong)param_1 + 0x41) & 0xf7;
  }
  else {
    *(byte *)((longlong)param_1 + 0x41) = *(byte *)((longlong)param_1 + 0x41) | 8;
  }
  bVar3 = *(byte *)((longlong)param_1 + 0x41);
  *(byte *)((longlong)param_1 + 0x41) = bVar3 | 4;
  if (param_8 == '\0') {
    bVar3 = bVar3 & 0xef | 4;
  }
  else {
    bVar3 = bVar3 | 0x14;
  }
  *(byte *)((longlong)param_1 + 0x41) = bVar3;
  *(byte *)((longlong)param_1 + 0x41) = bVar3 | 0x20;
  return param_1;
}



uint64_t *
FUN_1805ab310(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar6 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar6;
  uVar3 = *(int32_t *)((longlong)param_2 + 0x24);
  uVar4 = *(int32_t *)(param_2 + 5);
  uVar5 = *(int32_t *)((longlong)param_2 + 0x2c);
  *(int32_t *)(param_1 + 4) = *(int32_t *)(param_2 + 4);
  *(int32_t *)((longlong)param_1 + 0x24) = uVar3;
  *(int32_t *)(param_1 + 5) = uVar4;
  *(int32_t *)((longlong)param_1 + 0x2c) = uVar5;
  uVar3 = *(int32_t *)((longlong)param_2 + 0x34);
  uVar4 = *(int32_t *)(param_2 + 7);
  uVar5 = *(int32_t *)((longlong)param_2 + 0x3c);
  *(int32_t *)(param_1 + 6) = *(int32_t *)(param_2 + 6);
  *(int32_t *)((longlong)param_1 + 0x34) = uVar3;
  *(int32_t *)(param_1 + 7) = uVar4;
  *(int32_t *)((longlong)param_1 + 0x3c) = uVar5;
  *(int8_t *)(param_1 + 8) = *(int8_t *)(param_2 + 8);
  *(int8_t *)((longlong)param_1 + 0x41) = *(int8_t *)((longlong)param_2 + 0x41);
  if (param_1 + 9 != param_2 + 9) {
    FUN_18017b480(param_1 + 9,param_2[9],param_2[10],param_4,0xfffffffffffffffe);
  }
  plVar1 = (longlong *)param_2[0xd];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[0xd];
  param_1[0xd] = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(int8_t *)(param_1 + 0xe) = *(int8_t *)(param_2 + 0xe);
  *(int8_t *)((longlong)param_1 + 0x71) = *(int8_t *)((longlong)param_2 + 0x71);
  *(int8_t *)((longlong)param_1 + 0x72) = *(int8_t *)((longlong)param_2 + 0x72);
  *(int8_t *)((longlong)param_1 + 0x73) = *(int8_t *)((longlong)param_2 + 0x73);
  *(int8_t *)((longlong)param_1 + 0x74) = *(int8_t *)((longlong)param_2 + 0x74);
  *(int8_t *)((longlong)param_1 + 0x75) = *(int8_t *)((longlong)param_2 + 0x75);
  *(int8_t *)((longlong)param_1 + 0x76) = *(int8_t *)((longlong)param_2 + 0x76);
  *(int8_t *)((longlong)param_1 + 0x77) = *(int8_t *)((longlong)param_2 + 0x77);
  *(int8_t *)(param_1 + 0xf) = *(int8_t *)(param_2 + 0xf);
  *(int8_t *)((longlong)param_1 + 0x79) = *(int8_t *)((longlong)param_2 + 0x79);
  *(int8_t *)((longlong)param_1 + 0x7a) = *(int8_t *)((longlong)param_2 + 0x7a);
  *(int8_t *)((longlong)param_1 + 0x7b) = *(int8_t *)((longlong)param_2 + 0x7b);
  *(int8_t *)((longlong)param_1 + 0x7c) = *(int8_t *)((longlong)param_2 + 0x7c);
  *(int8_t *)((longlong)param_1 + 0x7d) = *(int8_t *)((longlong)param_2 + 0x7d);
  *(int8_t *)((longlong)param_1 + 0x7e) = *(int8_t *)((longlong)param_2 + 0x7e);
  *(int8_t *)((longlong)param_1 + 0x7f) = *(int8_t *)((longlong)param_2 + 0x7f);
  *(int8_t *)(param_1 + 0x10) = *(int8_t *)(param_2 + 0x10);
  *(int8_t *)((longlong)param_1 + 0x81) = *(int8_t *)((longlong)param_2 + 0x81);
  *(int8_t *)((longlong)param_1 + 0x82) = *(int8_t *)((longlong)param_2 + 0x82);
  *(int8_t *)((longlong)param_1 + 0x83) = *(int8_t *)((longlong)param_2 + 0x83);
  *(int8_t *)((longlong)param_1 + 0x84) = *(int8_t *)((longlong)param_2 + 0x84);
  *(int8_t *)((longlong)param_1 + 0x85) = *(int8_t *)((longlong)param_2 + 0x85);
  *(int8_t *)((longlong)param_1 + 0x86) = *(int8_t *)((longlong)param_2 + 0x86);
  *(int8_t *)((longlong)param_1 + 0x87) = *(int8_t *)((longlong)param_2 + 0x87);
  *(int8_t *)(param_1 + 0x11) = *(int8_t *)(param_2 + 0x11);
  *(int8_t *)((longlong)param_1 + 0x89) = *(int8_t *)((longlong)param_2 + 0x89);
  *(int8_t *)((longlong)param_1 + 0x8a) = *(int8_t *)((longlong)param_2 + 0x8a);
  *(int8_t *)((longlong)param_1 + 0x8b) = *(int8_t *)((longlong)param_2 + 0x8b);
  *(int8_t *)((longlong)param_1 + 0x8c) = *(int8_t *)((longlong)param_2 + 0x8c);
  *(int8_t *)((longlong)param_1 + 0x8d) = *(int8_t *)((longlong)param_2 + 0x8d);
  *(int8_t *)((longlong)param_1 + 0x8e) = *(int8_t *)((longlong)param_2 + 0x8e);
  *(int8_t *)((longlong)param_1 + 0x8f) = *(int8_t *)((longlong)param_2 + 0x8f);
  *(int8_t *)(param_1 + 0x12) = *(int8_t *)(param_2 + 0x12);
  *(int8_t *)((longlong)param_1 + 0x91) = *(int8_t *)((longlong)param_2 + 0x91);
  *(int8_t *)((longlong)param_1 + 0x92) = *(int8_t *)((longlong)param_2 + 0x92);
  *(int8_t *)((longlong)param_1 + 0x93) = *(int8_t *)((longlong)param_2 + 0x93);
  *(int8_t *)((longlong)param_1 + 0x94) = *(int8_t *)((longlong)param_2 + 0x94);
  *(int8_t *)((longlong)param_1 + 0x95) = *(int8_t *)((longlong)param_2 + 0x95);
  *(int8_t *)((longlong)param_1 + 0x96) = *(int8_t *)((longlong)param_2 + 0x96);
  *(int8_t *)((longlong)param_1 + 0x97) = *(int8_t *)((longlong)param_2 + 0x97);
  *(int8_t *)(param_1 + 0x13) = *(int8_t *)(param_2 + 0x13);
  *(int8_t *)((longlong)param_1 + 0x99) = *(int8_t *)((longlong)param_2 + 0x99);
  *(int8_t *)((longlong)param_1 + 0x9a) = *(int8_t *)((longlong)param_2 + 0x9a);
  *(int8_t *)((longlong)param_1 + 0x9b) = *(int8_t *)((longlong)param_2 + 0x9b);
  *(int8_t *)((longlong)param_1 + 0x9c) = *(int8_t *)((longlong)param_2 + 0x9c);
  *(int8_t *)((longlong)param_1 + 0x9d) = *(int8_t *)((longlong)param_2 + 0x9d);
  *(int8_t *)((longlong)param_1 + 0x9e) = *(int8_t *)((longlong)param_2 + 0x9e);
  *(int8_t *)((longlong)param_1 + 0x9f) = *(int8_t *)((longlong)param_2 + 0x9f);
  *(int8_t *)(param_1 + 0x14) = *(int8_t *)(param_2 + 0x14);
  *(int8_t *)((longlong)param_1 + 0xa1) = *(int8_t *)((longlong)param_2 + 0xa1);
  *(int8_t *)((longlong)param_1 + 0xa2) = *(int8_t *)((longlong)param_2 + 0xa2);
  *(int8_t *)((longlong)param_1 + 0xa3) = *(int8_t *)((longlong)param_2 + 0xa3);
  *(int8_t *)((longlong)param_1 + 0xa4) = *(int8_t *)((longlong)param_2 + 0xa4);
  *(int8_t *)((longlong)param_1 + 0xa5) = *(int8_t *)((longlong)param_2 + 0xa5);
  *(int8_t *)((longlong)param_1 + 0xa6) = *(int8_t *)((longlong)param_2 + 0xa6);
  *(int8_t *)((longlong)param_1 + 0xa7) = *(int8_t *)((longlong)param_2 + 0xa7);
  *(int8_t *)(param_1 + 0x15) = *(int8_t *)(param_2 + 0x15);
  *(int8_t *)((longlong)param_1 + 0xa9) = *(int8_t *)((longlong)param_2 + 0xa9);
  *(int8_t *)((longlong)param_1 + 0xaa) = *(int8_t *)((longlong)param_2 + 0xaa);
  *(int8_t *)((longlong)param_1 + 0xab) = *(int8_t *)((longlong)param_2 + 0xab);
  *(int8_t *)((longlong)param_1 + 0xac) = *(int8_t *)((longlong)param_2 + 0xac);
  *(int8_t *)((longlong)param_1 + 0xad) = *(int8_t *)((longlong)param_2 + 0xad);
  *(int8_t *)((longlong)param_1 + 0xae) = *(int8_t *)((longlong)param_2 + 0xae);
  *(int8_t *)((longlong)param_1 + 0xaf) = *(int8_t *)((longlong)param_2 + 0xaf);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ab6a0(longlong *param_1,longlong param_2)
void FUN_1805ab6a0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong *plStackX_18;
  float *pfStackX_20;
  longlong *plStack_c0;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_a8;
  int iStack_a4;
  uint64_t uStack_a0;
  float fStack_98;
  
  if ((0 < (int)*(float *)(_DAT_180c95fc8 + 0x20)) &&
     ((param_1[1] - *param_1 & 0xfffffffffffffff8U) == 0)) {
    lVar1 = *(longlong *)(param_2 + 0x8d8);
    uStack_a0 = 0;
    plStack_c0 = (longlong *)0x0;
    pfStackX_20 = (float *)(*(longlong *)(param_2 + 0x20) + 0xc);
    FUN_1804ff330(lVar1 + 0x98d230,pfStackX_20,0x40400000,&plStack_c0,0xfffffffffffffffe);
    if (plStack_c0 != (longlong *)0x0) {
      fVar5 = uStack_a0._4_4_;
      fVar4 = (float)uStack_a0;
      plVar8 = plStack_c0;
      iVar6 = iStack_a8;
      iVar9 = iStack_b4;
      iVar7 = iStack_b8;
LAB_1805ab780:
      lVar2 = *plVar8;
      if ((*(int *)(lVar2 + 0x720) == 0) &&
         (lVar3 = *(longlong *)(lVar2 + 0x20), fVar11 = pfStackX_20[1] - *(float *)(lVar3 + 0x10),
         fVar12 = *pfStackX_20 - *(float *)(lVar3 + 0xc),
         fVar10 = pfStackX_20[2] - *(float *)(lVar3 + 0x14),
         fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10 < 9.0)) {
        if (lVar2 != param_2) {
          plStackX_18 = *(longlong **)(*(longlong *)(lVar2 + 0x6d8) + 0x8a8);
          if (plStackX_18 != (longlong *)0x0) {
            (**(code **)(*plStackX_18 + 0x28))();
          }
          FUN_1800b87c0(param_1,&plStackX_18);
          if (plStackX_18 != (longlong *)0x0) {
            (**(code **)(*plStackX_18 + 0x38))();
          }
        }
        FUN_18053fae0(*(uint64_t *)(lVar2 + 0x6d8),param_1);
        iVar6 = iStack_a8;
      }
      plVar8 = (longlong *)plVar8[3];
      while (plVar8 == (longlong *)0x0) {
        if (iVar7 == iVar6) {
          if (iVar9 == iStack_a4) break;
          iVar9 = iVar9 + 1;
          iVar7 = iStack_b0;
          iStack_b4 = iVar9;
        }
        else {
          iVar7 = iVar7 + 1;
        }
        iVar6 = iStack_a8;
        iStack_b8 = iVar7;
        plVar8 = *(longlong **)
                  ((longlong)(iStack_b4 * *(int *)(lVar1 + 0x98d238) + iVar7) * 9 +
                  *(longlong *)(lVar1 + 0x98d248));
      }
      do {
        if ((plVar8 == (longlong *)0x0) ||
           (fVar10 = fVar5 - *(float *)((longlong)plVar8 + 0xc),
           (fVar4 - *(float *)(plVar8 + 1)) * (fVar4 - *(float *)(plVar8 + 1)) + fVar10 * fVar10 <=
           fStack_98)) goto LAB_1805ab901;
        plVar8 = (longlong *)plVar8[3];
        while (plVar8 == (longlong *)0x0) {
          if (iVar7 == iVar6) {
            if (iVar9 == iStack_a4) break;
            iVar9 = iVar9 + 1;
            iVar7 = iStack_b0;
            iStack_b4 = iVar9;
          }
          else {
            iVar7 = iVar7 + 1;
          }
          iVar6 = iStack_a8;
          iStack_b8 = iVar7;
          plVar8 = *(longlong **)
                    ((longlong)(iStack_b4 * *(int *)(lVar1 + 0x98d238) + iVar7) * 9 +
                    *(longlong *)(lVar1 + 0x98d248));
        }
      } while( true );
    }
  }
  return;
LAB_1805ab901:
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  goto LAB_1805ab780;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ab940(longlong param_1,int8_t *param_2,longlong param_3,char param_4,
void FUN_1805ab940(longlong param_1,int8_t *param_2,longlong param_3,char param_4,
                  uint64_t param_5,int *param_6,int8_t param_7,int8_t param_8)

{
  int iVar1;
  int iVar2;
  int32_t uVar3;
  int32_t uVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int8_t auStack_178 [32];
  char cStack_158;
  int *piStack_150;
  int8_t uStack_148;
  int8_t uStack_140;
  int8_t uStack_138;
  int8_t uStack_137;
  char cStack_136;
  int iStack_134;
  uint64_t uStack_130;
  int8_t *puStack_128;
  uint64_t uStack_120;
  int8_t auStack_118 [72];
  int8_t auStack_d0 [32];
  longlong *plStack_b0;
  ulonglong uStack_68;
  
  uStack_120 = 0xfffffffffffffffe;
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  uStack_138 = param_8;
  uStack_137 = param_7;
  uStack_130 = param_5;
  iStack_134 = (int)*(float *)(_DAT_180c95fc8 + 0x20);
  iVar8 = (int)_DAT_180c92514;
  cStack_136 = param_4;
  puStack_128 = param_2;
  if (((0 < iStack_134) || (((iVar8 - 2U & 0xfffffffc) == 0 && (iVar8 != 4)))) &&
     ((*param_6 != -1 || ((param_6[1] != -1 || (param_6[2] != -1)))))) {
    if (((iVar8 - 2U & 0xfffffffc) == 0) && (iVar8 != 4)) {
      iVar8 = _Mtx_lock(0x180c95528);
      if (iVar8 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar8);
      }
      iVar8 = param_6[2];
      iVar1 = param_6[1];
      iVar2 = *param_6;
      uVar3 = *(int32_t *)(param_3 + 0x10);
      uVar4 = *(int32_t *)(param_2 + 0x10);
      cVar7 = FUN_180645c10(0x180c95578,0,&UNK_1809fa560);
      if (cVar7 != '\0') {
        cVar7 = FUN_180645c10(0x180c95578,10,&UNK_1809fa540);
        if (cVar7 != '\0') {
          cVar7 = FUN_180645c10(0x180c95578,uVar4,&UNK_1809fa510);
          if (cVar7 != '\0') {
            cVar7 = FUN_180645c10(0x180c95578,uVar3,&UNK_1809fa510);
            if (cVar7 != '\0') {
              cVar7 = FUN_180645c10(0x180c95578,(int)cStack_136,&UNK_1809fa460);
              if (cVar7 != '\0') {
                cVar7 = FUN_18056eb00(0x180c95578,uStack_130,&UNK_1809fa4d0);
                if (cVar7 != '\0') {
                  cVar7 = FUN_180645c10(0x180c95578,iVar2,&DAT_180bfbca0);
                  if (cVar7 != '\0') {
                    cVar7 = FUN_180645c10(0x180c95578,iVar1,&DAT_180bfbca0);
                    if (cVar7 != '\0') {
                      cVar7 = FUN_180645c10(0x180c95578,iVar8,&DAT_180bfbca0);
                      if (cVar7 != '\0') {
                        cVar7 = FUN_180645c10(0x180c95578,uStack_137,&UNK_1809fa560);
                        if (cVar7 != '\0') {
                          FUN_180645c10(0x180c95578,uStack_138,&UNK_1809fa560);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      lVar5 = *(longlong *)(param_3 + 0x20);
      _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
      iVar8 = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
      if (0 < iVar8) {
        lVar10 = 0;
        lVar9 = _DAT_180c92cd8;
        do {
          lVar6 = *(longlong *)(lVar9 + lVar10 * 8);
          if (((lVar6 != 0) && (*(char *)(*(longlong *)(lVar6 + 0x58f8) + 0x1c) != '\0')) &&
             (*(char *)(*(longlong *)(lVar6 + 0x58f8) + 0x25) != '\0')) {
            fVar12 = *(float *)(lVar5 + 0x10) - *(float *)(lVar6 + 0x5904);
            fVar13 = *(float *)(lVar5 + 0xc) - *(float *)(lVar6 + 0x5900);
            fVar11 = *(float *)(lVar5 + 0x14) - *(float *)(lVar6 + 0x5908);
            if (fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11 < 400.0) {
              FUN_1805b59d0(lVar6,0x180c95578);
              lVar9 = _DAT_180c92cd8;
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < iVar8);
      }
      if (_DAT_180c96070 != 0) {
        FUN_180567f30(_DAT_180c92580,0x180c95578);
      }
      _DAT_180c95b3c = 0;
                    // WARNING: Subroutine does not return
      memset(_DAT_180c95b10,0,(longlong)(_DAT_180c95b08 >> 3));
    }
    if (0 < iStack_134) {
      uStack_140 = param_7;
      uStack_148 = param_8;
      piStack_150 = param_6;
      cStack_158 = param_4;
      FUN_1805ab180(auStack_118,param_2,param_3);
      if (*(ulonglong *)(param_1 + 8) < *(ulonglong *)(param_1 + 0x10)) {
        *(ulonglong *)(param_1 + 8) = *(ulonglong *)(param_1 + 8) + 0xb0;
        FUN_1805adb60();
      }
      else {
        FUN_1805adca0(param_1,auStack_118);
      }
      if (plStack_b0 != (longlong *)0x0) {
        (**(code **)(*plStack_b0 + 0x38))();
      }
      puStack_128 = auStack_d0;
      FUN_180057830(auStack_d0);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




