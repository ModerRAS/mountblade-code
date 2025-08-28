#include "TaleWorlds.Native.Split.h"

// 99_part_10_part036.c - 7 个函数

// 函数: void FUN_1806bcb00(uint64_t *param_1,int32_t param_2)
void FUN_1806bcb00(uint64_t *param_1,int32_t param_2)

{
  uint64_t *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  
  puVar1 = (uint64_t *)FUN_1806bb0a0();
  puVar5 = (uint64_t *)param_1[0x11];
  if (puVar1 < puVar1 + *(uint *)(param_1 + 0x12)) {
    uVar3 = 0;
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x12);
    if (puVar1 + *(uint *)(param_1 + 0x12) < puVar1) {
      uVar4 = uVar3;
    }
    puVar6 = puVar1;
    if (uVar4 != 0) {
      do {
        uVar3 = uVar3 + 1;
        *puVar6 = *puVar5;
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar3 < uVar4);
      puVar5 = (uint64_t *)param_1[0x11];
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0x94)) {
    if (puVar5 == param_1) {
      *(int8_t *)(param_1 + 0x10) = 0;
    }
    else if (puVar5 != (uint64_t *)0x0) {
      plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,puVar5);
    }
  }
  *(int32_t *)((longlong)param_1 + 0x94) = param_2;
  param_1[0x11] = puVar1;
  return;
}






// 函数: void FUN_1806bcbe0(longlong param_1,int32_t param_2)
void FUN_1806bcbe0(longlong param_1,int32_t param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FUN_1806bb160();
  func_0x0001806bc490(lVar2,(ulonglong)*(uint *)(param_1 + 0x350) * 0x34 + lVar2,
                      *(uint64_t *)(param_1 + 0x348));
  lVar1 = *(longlong *)(param_1 + 0x348);
  if (-1 < *(int *)(param_1 + 0x354)) {
    if (lVar1 == param_1) {
      *(int8_t *)(param_1 + 0x340) = 0;
    }
    else if (lVar1 != 0) {
      plVar3 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar3 + 0x10))(plVar3,lVar1);
    }
  }
  *(int32_t *)(param_1 + 0x354) = param_2;
  *(longlong *)(param_1 + 0x348) = lVar2;
  return;
}






// 函数: void FUN_1806bcc80(longlong param_1,int32_t param_2)
void FUN_1806bcc80(longlong param_1,int32_t param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FUN_1806bb220();
  func_0x0001806bc6a0(lVar2,(ulonglong)*(uint *)(param_1 + 0x1d0) * 0x1c + lVar2,
                      *(uint64_t *)(param_1 + 0x1c8));
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (-1 < *(int *)(param_1 + 0x1d4)) {
    if (lVar1 == param_1) {
      *(int8_t *)(param_1 + 0x1c0) = 0;
    }
    else if (lVar1 != 0) {
      plVar3 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar3 + 0x10))(plVar3,lVar1);
    }
  }
  *(int32_t *)(param_1 + 0x1d4) = param_2;
  *(longlong *)(param_1 + 0x1c8) = lVar2;
  return;
}






// 函数: void FUN_1806bcd20(longlong param_1,uint param_2,uint64_t *param_3)
void FUN_1806bcd20(longlong param_1,uint param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  ulonglong uVar6;
  
  if ((*(uint *)(param_1 + 0x94) & 0x7fffffff) < param_2) {
    FUN_1806bcb00();
  }
  uVar3 = 0;
  puVar4 = (uint64_t *)(*(longlong *)(param_1 + 0x88) + (ulonglong)param_2 * 8);
  puVar5 = (uint64_t *)(*(longlong *)(param_1 + 0x88) + (ulonglong)*(uint *)(param_1 + 0x90) * 8);
  uVar6 = (ulonglong)((longlong)puVar4 + (7 - (longlong)puVar5)) >> 3;
  if (puVar4 < puVar5) {
    uVar6 = uVar3;
  }
  if (uVar6 != 0) {
    if (1 < uVar6) {
      uVar1 = *param_3;
      if ((param_3 < puVar5) || (puVar5 + (uVar6 - 1) < param_3)) {
        do {
          uVar3 = uVar3 + 2;
        } while (uVar3 < (uVar6 & 0xfffffffffffffffe));
        puVar4 = puVar5;
        for (uVar2 = uVar6 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
        }
        puVar5 = puVar5 + (uVar6 & 0xfffffffffffffffe);
      }
    }
    for (; uVar3 < uVar6; uVar3 = uVar3 + 1) {
      *puVar5 = *param_3;
      puVar5 = puVar5 + 1;
    }
  }
  *(uint *)(param_1 + 0x90) = param_2;
  return;
}






// 函数: void FUN_1806bce00(float *param_1,float *param_2)
void FUN_1806bce00(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar1 = *param_2;
  fVar2 = param_2[2];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = param_1[4];
  fVar6 = param_1[5];
  fVar7 = param_1[6];
  fVar8 = param_1[7];
  fVar9 = param_2[7];
  fVar10 = param_2[8];
  fVar11 = param_1[8];
  fVar13 = param_1[1];
  fVar15 = *param_1;
  fVar12 = param_2[6] * fVar3 + fVar1 * fVar15 + param_2[3] * fVar13;
  fVar14 = param_2[5] * fVar13 + fVar2 * fVar15 + fVar10 * fVar3;
  fVar13 = fVar9 * fVar3 + param_2[1] * fVar15 + param_2[4] * fVar13;
  fVar15 = fVar1 * fVar4 + param_2[3] * fVar5 + param_2[6] * fVar6;
  fVar16 = param_2[1] * fVar4 + param_2[4] * fVar5 + fVar9 * fVar6;
  fVar3 = param_2[5];
  fVar17 = fVar2 * fVar4 + fVar3 * fVar5 + fVar10 * fVar6;
  fVar18 = fVar1 * fVar7 + param_2[3] * fVar8 + param_2[6] * fVar11;
  fVar20 = param_2[1] * fVar7 + param_2[4] * fVar8 + fVar9 * fVar11;
  fVar19 = fVar2 * fVar7 + fVar3 * fVar8 + fVar10 * fVar11;
  fVar4 = param_2[7];
  fVar5 = param_2[4];
  fVar6 = param_2[1];
  fVar7 = param_2[1];
  fVar8 = param_2[1];
  fVar9 = param_2[6];
  fVar11 = param_2[3];
  *param_1 = fVar12 * fVar1 + fVar15 * fVar11 + fVar18 * fVar9;
  param_1[1] = fVar13 * fVar1 + fVar16 * fVar11 + fVar20 * fVar9;
  param_1[2] = fVar1 * fVar14 + fVar17 * fVar11 + fVar19 * fVar9;
  param_1[3] = fVar12 * fVar7 + fVar15 * fVar5 + fVar4 * fVar18;
  param_1[4] = fVar13 * fVar6 + fVar16 * fVar5 + fVar20 * fVar4;
  param_1[5] = fVar14 * fVar8 + fVar17 * fVar5 + fVar19 * fVar4;
  param_1[6] = fVar12 * fVar2 + fVar15 * fVar3 + fVar10 * fVar18;
  param_1[7] = fVar13 * fVar2 + fVar16 * fVar3 + fVar20 * fVar10;
  param_1[8] = fVar2 * fVar14 + fVar17 * fVar3 + fVar19 * fVar10;
  fVar1 = param_1[0xb];
  fVar2 = param_1[10];
  fVar3 = param_1[9];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[7];
  fVar7 = param_2[8];
  fVar8 = param_2[4];
  fVar9 = param_2[5];
  param_1[9] = fVar3 * *param_2 + fVar2 * param_2[3] + fVar1 * param_2[6];
  param_1[10] = fVar3 * fVar4 + fVar2 * fVar8 + fVar1 * fVar6;
  param_1[0xb] = fVar3 * fVar5 + fVar2 * fVar9 + fVar1 * fVar7;
  return;
}



float * FUN_1806bd2c0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  fVar2 = param_3[1];
  fVar4 = *param_3;
  fVar6 = fVar4 + fVar4;
  fVar25 = param_3[2];
  fVar19 = fVar2 + fVar2;
  fVar8 = param_3[3];
  fVar17 = param_2[8];
  fVar1 = (fVar25 + fVar25) * fVar8;
  fVar3 = (fVar25 + fVar25) * fVar25;
  fVar21 = fVar1 + fVar6 * fVar2;
  fVar1 = fVar6 * fVar2 - fVar1;
  fVar23 = param_2[5];
  fVar9 = param_2[6];
  fVar14 = 1.0 - fVar4 * fVar6;
  fVar26 = fVar6 * fVar25 - fVar19 * fVar8;
  fVar20 = fVar19 * fVar8 + fVar6 * fVar25;
  fVar12 = fVar19 * fVar25 + fVar6 * fVar8;
  fVar24 = fVar19 * fVar25 - fVar6 * fVar8;
  fVar15 = fVar14 - fVar19 * fVar2;
  fVar14 = fVar14 - fVar3;
  fVar3 = (1.0 - fVar19 * fVar2) - fVar3;
  fVar2 = param_2[7];
  fVar4 = param_2[4];
  fVar25 = param_2[3];
  fVar8 = param_2[2];
  fVar10 = fVar24 * fVar23 + fVar14 * fVar4 + fVar21 * fVar25;
  fVar6 = param_2[1];
  fVar19 = *param_2;
  fVar27 = fVar26 * fVar19 + fVar6 * fVar12 + fVar8 * fVar15;
  fVar22 = fVar21 * fVar19 + fVar6 * fVar14 + fVar8 * fVar24;
  fVar7 = fVar15 * fVar23 + fVar12 * fVar4 + fVar26 * fVar25;
  fVar11 = fVar14 * fVar2 + fVar21 * fVar9 + fVar24 * fVar17;
  fVar16 = fVar12 * fVar2 + fVar26 * fVar9 + fVar15 * fVar17;
  fVar13 = fVar11 * fVar24 + fVar14 * fVar10 + fVar21 * fVar22;
  fVar18 = param_4[1];
  fVar5 = param_4[2];
  fVar25 = (fVar3 * fVar9 + fVar1 * fVar2 + fVar20 * fVar17) * fVar20 +
           fVar1 * (fVar3 * fVar25 + fVar1 * fVar4 + fVar20 * fVar23) +
           fVar3 * (fVar3 * fVar19 + fVar6 * fVar1 + fVar8 * fVar20);
  fVar4 = fVar7 * fVar12 + fVar27 * fVar26 + fVar16 * fVar15;
  fVar8 = (fVar25 + fVar13 + fVar4) * 0.5;
  fVar2 = *param_4;
  fVar25 = fVar2 * fVar2 * (fVar8 - fVar25);
  fVar17 = fVar18 * fVar18 * (fVar8 - fVar13);
  fVar23 = fVar5 * fVar5 * (fVar8 - fVar4);
  fVar26 = -param_3[1];
  fVar15 = -*param_3;
  fVar8 = -param_3[2];
  fVar13 = fVar18 * fVar2 * fVar5;
  fVar9 = fVar2 * (fVar7 * fVar1 + fVar27 * fVar3 + fVar20 * fVar16) * fVar5;
  fVar5 = fVar18 * (fVar16 * fVar24 + fVar7 * fVar14 + fVar27 * fVar21) * fVar5;
  fVar4 = fVar13 * fVar9;
  fVar6 = fVar15 + fVar15;
  fVar14 = (fVar23 + fVar17) * fVar13;
  fVar12 = (fVar23 + fVar25) * fVar13;
  fVar19 = fVar13 * fVar5;
  fVar16 = fVar13 * (fVar17 + fVar25);
  fVar7 = fVar26 + fVar26;
  fVar5 = fVar13 * fVar5;
  fVar9 = fVar13 * fVar9;
  fVar13 = fVar13 * fVar2 * (fVar1 * fVar10 + fVar3 * fVar22 + fVar11 * fVar20) * fVar18;
  fVar17 = (fVar8 + fVar8) * param_3[3];
  fVar2 = (fVar8 + fVar8) * fVar8;
  fVar18 = (1.0 - fVar7 * fVar26) - fVar2;
  fVar10 = fVar6 * fVar8 - fVar7 * param_3[3];
  fVar1 = fVar17 + fVar6 * fVar26;
  fVar17 = fVar6 * fVar26 - fVar17;
  fVar23 = 1.0 - fVar6 * fVar15;
  fVar11 = fVar7 * fVar8 - fVar6 * param_3[3];
  fVar3 = fVar7 * fVar8 + fVar6 * param_3[3];
  fVar2 = fVar23 - fVar2;
  fVar25 = fVar7 * param_3[3] + fVar6 * fVar8;
  fVar23 = fVar23 - fVar7 * fVar26;
  fVar6 = fVar18 * fVar4 + fVar17 * fVar19 + fVar25 * fVar16;
  fVar8 = fVar1 * fVar4 + fVar2 * fVar19 + fVar11 * fVar16;
  fVar15 = fVar18 * fVar13 + fVar17 * fVar12 + fVar25 * fVar5;
  fVar20 = fVar1 * fVar13 + fVar2 * fVar12 + fVar11 * fVar5;
  fVar7 = fVar13 * fVar10 + fVar12 * fVar3 + fVar5 * fVar23;
  fVar12 = fVar4 * fVar10 + fVar19 * fVar3 + fVar16 * fVar23;
  fVar5 = fVar18 * fVar14 + fVar17 * fVar13 + fVar25 * fVar9;
  fVar19 = fVar1 * fVar14 + fVar2 * fVar13 + fVar11 * fVar9;
  fVar4 = fVar14 * fVar10 + fVar13 * fVar3 + fVar9 * fVar23;
  *param_1 = fVar5 * fVar18 + fVar15 * fVar17 + fVar25 * fVar6;
  param_1[1] = fVar19 * fVar18 + fVar20 * fVar17 + fVar25 * fVar8;
  param_1[2] = fVar18 * fVar4 + fVar17 * fVar7 + fVar25 * fVar12;
  param_1[3] = fVar5 * fVar1 + fVar15 * fVar2 + fVar11 * fVar6;
  param_1[4] = fVar19 * fVar1 + fVar20 * fVar2 + fVar11 * fVar8;
  param_1[5] = fVar1 * fVar4 + fVar2 * fVar7 + fVar11 * fVar12;
  param_1[6] = fVar5 * fVar10 + fVar15 * fVar3 + fVar6 * fVar23;
  param_1[7] = fVar19 * fVar10 + fVar20 * fVar3 + fVar8 * fVar23;
  param_1[8] = fVar4 * fVar10 + fVar7 * fVar3 + fVar23 * fVar12;
  return param_1;
}



int8_t
FUN_1806bdc70(uint64_t param_1,longlong *param_2,int32_t *param_3,int param_4,
             int32_t *param_5,int8_t param_6)

{
  char cVar1;
  uint64_t uVar2;
  void *puVar3;
  int8_t uVar4;
  uint64_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t auStackX_10 [2];
  int32_t uStack_d8;
  int32_t uStack_d4;
  int32_t uStack_d0;
  int32_t uStack_c8;
  int32_t uStack_c4;
  int32_t uStack_c0;
  int32_t uStack_b8;
  int32_t uStack_b4;
  int32_t uStack_b0;
  int32_t uStack_ac;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  float fStack_78;
  
  uVar9 = 0x3f800000;
  auStackX_10[0] = 0x3f800000;
  uStack_c8 = 0x3f800000;
  uStack_c4 = 0x3f800000;
  uStack_c0 = 0x3f800000;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0x3f800000;
  if (param_5 == (int32_t *)0x0) {
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar7 = param_5[1];
    uVar8 = param_5[2];
    uVar6 = *param_5;
  }
  uStack_d8 = uVar6;
  uStack_d4 = uVar7;
  uStack_d0 = uVar8;
  if ((param_3 == (int32_t *)0x0) || (param_4 == 0)) {
    uVar2 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
    uVar5 = 0x15e;
    puVar3 = &UNK_18094b8f0;
  }
  else {
    fStack_78 = 0.0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    cVar1 = FUN_1806bb790(0,0,0,param_3,param_4,param_6,&uStack_a8);
    if (cVar1 != '\0') {
      uVar4 = 1;
      if (fStack_78 != 0.0) {
        cVar1 = FUN_1806bb2e0(&uStack_a8,&uStack_c8,&uStack_b8,auStackX_10,&uStack_d8,
                              param_5 != (int32_t *)0x0,param_2,&UNK_18094b8c8);
        uVar6 = uStack_d8;
        uVar7 = uStack_d4;
        uVar8 = uStack_d0;
        uVar9 = auStackX_10[0];
        uVar4 = 1;
        if (cVar1 == '\0') {
          uVar4 = 0;
        }
      }
      if (param_4 == 1) {
        uVar9 = *param_3;
      }
      goto LAB_1806bde40;
    }
    uVar2 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
    uVar5 = 0x156;
    puVar3 = &UNK_18094b820;
  }
  _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
            (uVar2,4,&UNK_18094b6b0,uVar5,puVar3,&UNK_18094b8c8);
  uVar4 = 0;
LAB_1806bde40:
  (**(code **)(*param_2 + 0xe0))(param_2,uVar9);
  (**(code **)(*param_2 + 0xf8))(param_2,&uStack_c8);
  uStack_a8 = CONCAT44(uStack_b4,uStack_b8);
  uStack_a0 = CONCAT44(uStack_ac,uStack_b0);
  uStack_98 = CONCAT44(uVar7,uVar6);
  uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
  (**(code **)(*param_2 + 0xd0))(param_2,&uStack_a8);
  return uVar4;
}



float * FUN_1806bded0(float *param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  ulonglong uVar5;
  float *pfVar6;
  ulonglong uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fStack_148;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  fVar13 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar30 = 0.0;
  fVar33 = 0.0;
  fStack_f0 = 0.0;
  fStack_148 = 0.0;
  fStack_c0 = 0.0;
  fStack_bc = 0.0;
  fStack_c8 = 0.0;
  fStack_c4 = 0.0;
  fStack_d0 = 0.0;
  fStack_cc = 0.0;
  fStack_d8 = 0.0;
  fStack_d4 = 0.0;
  if (param_4 != 0) {
    pfVar8 = (float *)(param_3 + 0x18);
    pfVar6 = (float *)(param_2 + 0x2c);
    uVar7 = (ulonglong)param_4;
    pfVar3 = pfVar8;
    pfVar4 = pfVar6;
    uVar5 = uVar7;
    do {
      fVar13 = pfVar3[-3];
      fVar2 = pfVar4[1];
      fVar9 = pfVar3[-5];
      fVar12 = fVar12 + fVar2;
      fVar10 = pfVar3[-6];
      fVar14 = pfVar3[-4];
      fVar27 = pfVar4[-2] + pfVar4[-2];
      fVar18 = pfVar4[-1] + pfVar4[-1];
      fVar23 = *pfVar4 + *pfVar4;
      pfVar4 = pfVar4 + 0xd;
      fVar21 = fVar13 * fVar13 - 0.5;
      fVar16 = fVar10 * fVar27 + fVar9 * fVar18 + fVar14 * fVar23;
      fVar30 = fVar30 + ((fVar9 * fVar23 - fVar14 * fVar18) * fVar13 + fVar21 * fVar27 +
                         fVar10 * fVar16 + pfVar3[-2]) * fVar2;
      fVar11 = *pfVar3;
      pfVar1 = pfVar3 + -1;
      pfVar3 = pfVar3 + 7;
      fVar11 = fStack_148 +
               ((fVar10 * fVar18 - fVar9 * fVar27) * fVar13 + fVar21 * fVar23 + fVar14 * fVar16 +
               fVar11) * fVar2;
      fVar33 = fVar33 + ((fVar14 * fVar27 - fVar10 * fVar23) * fVar13 + fVar21 * fVar18 +
                         fVar9 * fVar16 + *pfVar1) * fVar2;
      uVar5 = uVar5 - 1;
      fStack_148 = fVar11;
    } while (uVar5 != 0);
    if (0.0 < fVar12) {
      fVar13 = 1.0 / fVar12;
      fVar30 = fVar30 * fVar13;
      fVar33 = fVar33 * fVar13;
      fVar11 = fVar11 * fVar13;
    }
    fStack_f4 = 0.0;
    fStack_f8 = 0.0;
    fStack_fc = 0.0;
    fStack_100 = 0.0;
    fStack_104 = 0.0;
    fStack_108 = 0.0;
    fStack_10c = 0.0;
    fStack_110 = 0.0;
    do {
      fVar13 = pfVar8[-5];
      fVar2 = pfVar8[-4];
      fVar9 = pfVar8[-6];
      fVar10 = pfVar8[-3];
      fVar21 = pfVar6[-1] + pfVar6[-1];
      fVar27 = *pfVar6 + *pfVar6;
      fVar19 = pfVar6[-2] + pfVar6[-2];
      fVar23 = fVar10 * fVar10 - 0.5;
      fVar14 = fVar9 * fVar19 + fVar13 * fVar21 + fVar2 * fVar27;
      fVar16 = fVar30 - ((fVar13 * fVar27 - fVar2 * fVar21) * fVar10 + fVar23 * fVar19 +
                         fVar9 * fVar14 + pfVar8[-2]);
      fVar17 = fVar13 + fVar13;
      fVar18 = fVar33 - ((fVar2 * fVar19 - fVar9 * fVar27) * fVar10 + fVar23 * fVar21 +
                         fVar13 * fVar14 + pfVar8[-1]);
      fVar15 = fVar9 + fVar9;
      fVar21 = fVar11 - ((fVar9 * fVar21 - fVar13 * fVar19) * fVar10 + fVar23 * fVar27 +
                         fVar2 * fVar14 + *pfVar8);
      fVar27 = (fVar2 + fVar2) * fVar2;
      fVar20 = 1.0 - fVar9 * fVar15;
      fVar23 = (fVar2 + fVar2) * fVar10;
      fVar34 = (1.0 - fVar17 * fVar13) - fVar27;
      fVar29 = fVar15 * fVar2 - fVar17 * fVar10;
      fVar19 = fVar17 * fVar10 + fVar15 * fVar2;
      fVar24 = fVar23 + fVar15 * fVar13;
      fVar23 = fVar15 * fVar13 - fVar23;
      fVar9 = pfVar6[-3];
      fVar27 = fVar20 - fVar27;
      fVar14 = pfVar6[-4];
      fVar31 = fVar17 * fVar2 - fVar15 * fVar10;
      fVar22 = fVar17 * fVar2 + fVar15 * fVar10;
      fVar20 = fVar20 - fVar17 * fVar13;
      fVar13 = pfVar6[-5];
      fVar2 = pfVar6[-6];
      fVar35 = fVar29 * fVar13 + fVar22 * fVar14 + fVar20 * fVar9;
      fVar15 = fVar24 * fVar13 + fVar27 * fVar14 + fVar31 * fVar9;
      fVar28 = fVar34 * fVar13 + fVar23 * fVar14 + fVar19 * fVar9;
      fVar13 = pfVar6[-7];
      fVar9 = pfVar6[-8];
      fVar10 = pfVar6[-9];
      fVar14 = pfVar6[-10];
      fVar32 = fVar34 * fVar9 + fVar23 * fVar13 + fVar19 * fVar2;
      fVar36 = fVar24 * fVar9 + fVar27 * fVar13 + fVar31 * fVar2;
      fVar25 = fVar29 * fVar9 + fVar22 * fVar13 + fVar20 * fVar2;
      fVar17 = pfVar6[-0xb] * fVar24 + fVar27 * fVar14 + fVar10 * fVar31;
      fVar26 = pfVar6[-0xb] * fVar34 + fVar14 * fVar23 + fVar10 * fVar19;
      fVar13 = pfVar6[-0xb] * fVar29 + fVar14 * fVar22 + fVar20 * fVar10;
      fVar9 = -fVar16;
      fVar2 = pfVar6[1];
      fVar10 = -fVar21;
      fVar14 = -fVar18;
      fStack_d0 = fStack_108 +
                  fVar9 * fVar21 * fVar2 + fVar13 * fVar34 + fVar25 * fVar23 + fVar35 * fVar19;
      fStack_d4 = fStack_10c +
                  fVar14 * fVar16 * fVar2 + fVar17 * fVar34 + fVar36 * fVar23 + fVar15 * fVar19;
      fStack_c4 = fStack_fc +
                  fVar10 * fVar18 * fVar2 + fVar13 * fVar24 + fVar25 * fVar27 + fVar35 * fVar31;
      fStack_cc = fStack_104 +
                  fVar14 * fVar16 * fVar2 + fVar26 * fVar24 + fVar32 * fVar27 + fVar28 * fVar31;
      fStack_d8 = fStack_110 +
                  (fVar21 * fVar21 + fVar14 * fVar14) * fVar2 +
                  fVar26 * fVar34 + fVar32 * fVar23 + fVar28 * fVar19;
      fStack_c0 = fStack_f8 +
                  fVar9 * fVar21 * fVar2 + fVar26 * fVar29 + fVar32 * fVar22 + fVar28 * fVar20;
      fVar13 = fStack_f0 +
               (fVar18 * fVar18 + fVar9 * fVar9) * fVar2 +
               fVar13 * fVar29 + fVar25 * fVar22 + fVar35 * fVar20;
      fStack_c8 = fStack_100 +
                  (fVar16 * fVar16 + fVar10 * fVar10) * fVar2 +
                  fVar17 * fVar24 + fVar36 * fVar27 + fVar15 * fVar31;
      fStack_bc = fStack_f4 +
                  fVar10 * fVar18 * fVar2 + fVar17 * fVar29 + fVar36 * fVar22 + fVar15 * fVar20;
      pfVar8 = pfVar8 + 7;
      pfVar6 = pfVar6 + 0xd;
      uVar7 = uVar7 - 1;
      fStack_110 = fStack_d8;
      fStack_10c = fStack_d4;
      fStack_108 = fStack_d0;
      fStack_104 = fStack_cc;
      fStack_100 = fStack_c8;
      fStack_fc = fStack_c4;
      fStack_f8 = fStack_c0;
      fStack_f4 = fStack_bc;
      fStack_f0 = fVar13;
    } while (uVar7 != 0);
  }
  *param_1 = fStack_d8;
  param_1[1] = fStack_d4;
  param_1[2] = fStack_d0;
  param_1[3] = fStack_cc;
  param_1[4] = fStack_c8;
  param_1[5] = fStack_c4;
  param_1[6] = fStack_c0;
  param_1[7] = fStack_bc;
  param_1[8] = fVar13;
  param_1[9] = fVar30;
  param_1[10] = fVar33;
  param_1[0xb] = fVar11;
  param_1[0xc] = fVar12;
  return param_1;
}






// 函数: void FUN_1806bdf44(uint64_t param_1,longlong param_2,uint64_t param_3,float param_4)
void FUN_1806bdf44(uint64_t param_1,longlong param_2,uint64_t param_3,float param_4)

{
  float *pfVar1;
  longlong in_RAX;
  float *pfVar2;
  float *pfVar3;
  ulonglong uVar4;
  float *pfVar5;
  uint in_R9D;
  ulonglong uVar6;
  float *in_R10;
  float *in_R11;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int32_t unaff_XMM12_Da;
  float fVar24;
  float fVar25;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  float fVar26;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  float unaff_XMM14_Da;
  float fVar27;
  float fVar28;
  float unaff_XMM15_Da;
  float fVar29;
  float fVar30;
  float fVar31;
  float unaff_retaddr;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM12_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM12_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM12_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM12_Dd;
  pfVar5 = (float *)(param_2 + 0x2c);
  uVar6 = (ulonglong)in_R9D;
  *(int32_t *)(in_RAX + -0x88) = unaff_XMM13_Da;
  *(int32_t *)(in_RAX + -0x84) = unaff_XMM13_Db;
  *(int32_t *)(in_RAX + -0x80) = unaff_XMM13_Dc;
  *(int32_t *)(in_RAX + -0x7c) = unaff_XMM13_Dd;
  pfVar2 = in_R11;
  pfVar3 = pfVar5;
  uVar4 = uVar6;
  do {
    fVar7 = pfVar2[-3];
    fVar9 = pfVar3[1];
    fVar10 = pfVar2[-5];
    param_4 = param_4 + fVar9;
    fVar11 = pfVar2[-6];
    fVar12 = pfVar2[-4];
    fVar24 = pfVar3[-2] + pfVar3[-2];
    fVar15 = pfVar3[-1] + pfVar3[-1];
    fVar20 = *pfVar3 + *pfVar3;
    pfVar3 = pfVar3 + 0xd;
    fVar18 = fVar7 * fVar7 - 0.5;
    fVar13 = fVar11 * fVar24 + fVar10 * fVar15 + fVar12 * fVar20;
    unaff_XMM14_Da =
         unaff_XMM14_Da +
         ((fVar10 * fVar20 - fVar12 * fVar15) * fVar7 + fVar18 * fVar24 + fVar11 * fVar13 +
         pfVar2[-2]) * fVar9;
    fVar8 = *pfVar2;
    pfVar1 = pfVar2 + -1;
    pfVar2 = pfVar2 + 7;
    unaff_retaddr =
         unaff_retaddr +
         ((fVar11 * fVar15 - fVar10 * fVar24) * fVar7 + fVar18 * fVar20 + fVar12 * fVar13 + fVar8) *
         fVar9;
    unaff_XMM15_Da =
         unaff_XMM15_Da +
         ((fVar12 * fVar24 - fVar11 * fVar20) * fVar7 + fVar18 * fVar15 + fVar10 * fVar13 + *pfVar1)
         * fVar9;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  if (0.0 < param_4) {
    fVar7 = 1.0 / param_4;
    unaff_XMM14_Da = unaff_XMM14_Da * fVar7;
    unaff_XMM15_Da = unaff_XMM15_Da * fVar7;
    unaff_retaddr = unaff_retaddr * fVar7;
  }
  fStack0000000000000054 = fStack000000000000008c;
  fStack0000000000000050 = fStack0000000000000088;
  fStack000000000000004c = fStack0000000000000084;
  fStack0000000000000048 = fStack0000000000000080;
  fStack0000000000000044 = fStack000000000000007c;
  fStack0000000000000040 = fStack0000000000000078;
  fStack000000000000003c = fStack0000000000000074;
  fStack0000000000000038 = fStack0000000000000070;
  do {
    fVar7 = in_R11[-5];
    fVar9 = in_R11[-4];
    fVar10 = in_R11[-6];
    fVar11 = in_R11[-3];
    fVar15 = pfVar5[-1] + pfVar5[-1];
    fVar20 = *pfVar5 + *pfVar5;
    fVar16 = pfVar5[-2] + pfVar5[-2];
    fVar18 = fVar11 * fVar11 - 0.5;
    fVar12 = fVar10 * fVar16 + fVar7 * fVar15 + fVar9 * fVar20;
    fVar8 = unaff_XMM14_Da -
            ((fVar7 * fVar20 - fVar9 * fVar15) * fVar11 + fVar18 * fVar16 + fVar10 * fVar12 +
            in_R11[-2]);
    fVar14 = fVar7 + fVar7;
    fVar13 = unaff_XMM15_Da -
             ((fVar9 * fVar16 - fVar10 * fVar20) * fVar11 + fVar18 * fVar15 + fVar7 * fVar12 +
             in_R11[-1]);
    fVar24 = fVar10 + fVar10;
    fVar15 = unaff_retaddr -
             ((fVar10 * fVar15 - fVar7 * fVar16) * fVar11 + fVar18 * fVar20 + fVar9 * fVar12 +
             *in_R11);
    fVar20 = (fVar9 + fVar9) * fVar9;
    fVar17 = 1.0 - fVar10 * fVar24;
    fVar18 = (fVar9 + fVar9) * fVar11;
    fVar29 = (1.0 - fVar14 * fVar7) - fVar20;
    fVar26 = fVar24 * fVar9 - fVar14 * fVar11;
    fVar16 = fVar14 * fVar11 + fVar24 * fVar9;
    fVar21 = fVar18 + fVar24 * fVar7;
    fVar18 = fVar24 * fVar7 - fVar18;
    fVar10 = pfVar5[-3];
    fVar20 = fVar17 - fVar20;
    fVar12 = pfVar5[-4];
    fVar27 = fVar14 * fVar9 - fVar24 * fVar11;
    fVar19 = fVar14 * fVar9 + fVar24 * fVar11;
    fVar17 = fVar17 - fVar14 * fVar7;
    fVar7 = pfVar5[-5];
    fVar9 = pfVar5[-6];
    fVar30 = fVar26 * fVar7 + fVar19 * fVar12 + fVar17 * fVar10;
    fVar24 = fVar21 * fVar7 + fVar20 * fVar12 + fVar27 * fVar10;
    fVar25 = fVar29 * fVar7 + fVar18 * fVar12 + fVar16 * fVar10;
    fVar7 = pfVar5[-7];
    fVar10 = pfVar5[-8];
    fVar11 = pfVar5[-9];
    fVar12 = pfVar5[-10];
    fVar28 = fVar29 * fVar10 + fVar18 * fVar7 + fVar16 * fVar9;
    fVar31 = fVar21 * fVar10 + fVar20 * fVar7 + fVar27 * fVar9;
    fVar22 = fVar26 * fVar10 + fVar19 * fVar7 + fVar17 * fVar9;
    fVar14 = pfVar5[-0xb] * fVar21 + fVar20 * fVar12 + fVar11 * fVar27;
    fVar23 = pfVar5[-0xb] * fVar29 + fVar12 * fVar18 + fVar11 * fVar16;
    fVar9 = pfVar5[-0xb] * fVar26 + fVar12 * fVar19 + fVar17 * fVar11;
    fVar10 = -fVar8;
    fVar7 = pfVar5[1];
    fVar11 = -fVar15;
    fVar12 = -fVar13;
    fStack0000000000000040 =
         fStack0000000000000040 +
         fVar10 * fVar15 * fVar7 + fVar9 * fVar29 + fVar22 * fVar18 + fVar30 * fVar16;
    fStack000000000000003c =
         fStack000000000000003c +
         fVar12 * fVar8 * fVar7 + fVar14 * fVar29 + fVar31 * fVar18 + fVar24 * fVar16;
    fStack000000000000004c =
         fStack000000000000004c +
         fVar11 * fVar13 * fVar7 + fVar9 * fVar21 + fVar22 * fVar20 + fVar30 * fVar27;
    fStack0000000000000044 =
         fStack0000000000000044 +
         fVar12 * fVar8 * fVar7 + fVar23 * fVar21 + fVar28 * fVar20 + fVar25 * fVar27;
    fStack0000000000000038 =
         fStack0000000000000038 +
         (fVar15 * fVar15 + fVar12 * fVar12) * fVar7 +
         fVar23 * fVar29 + fVar28 * fVar18 + fVar25 * fVar16;
    fStack0000000000000050 =
         fStack0000000000000050 +
         fVar10 * fVar15 * fVar7 + fVar23 * fVar26 + fVar28 * fVar19 + fVar25 * fVar17;
    in_stack_00000058 =
         in_stack_00000058 +
         (fVar13 * fVar13 + fVar10 * fVar10) * fVar7 +
         fVar9 * fVar26 + fVar22 * fVar19 + fVar30 * fVar17;
    fStack0000000000000048 =
         fStack0000000000000048 +
         (fVar8 * fVar8 + fVar11 * fVar11) * fVar7 +
         fVar14 * fVar21 + fVar31 * fVar20 + fVar24 * fVar27;
    fStack0000000000000054 =
         fStack0000000000000054 +
         fVar11 * fVar13 * fVar7 + fVar14 * fVar26 + fVar31 * fVar19 + fVar24 * fVar17;
    in_R11 = in_R11 + 7;
    pfVar5 = pfVar5 + 0xd;
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  *in_R10 = fStack0000000000000038;
  in_R10[1] = fStack000000000000003c;
  in_R10[2] = fStack0000000000000040;
  in_R10[3] = fStack0000000000000044;
  in_R10[4] = fStack0000000000000048;
  in_R10[5] = fStack000000000000004c;
  in_R10[6] = fStack0000000000000050;
  in_R10[7] = fStack0000000000000054;
  in_R10[8] = in_stack_00000058;
  in_R10[9] = unaff_XMM14_Da;
  in_R10[10] = unaff_XMM15_Da;
  in_R10[0xb] = unaff_retaddr;
  in_R10[0xc] = param_4;
  return;
}






// 函数: void FUN_1806be88f(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4)
void FUN_1806be88f(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4)

{
  int32_t *in_R10;
  int32_t in_XMM4_Da;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM15_Da;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  int32_t uStack0000000000000078;
  int32_t uStack000000000000007c;
  int32_t uStack0000000000000080;
  int32_t uStack0000000000000084;
  int32_t uStack0000000000000088;
  int32_t uStack000000000000008c;
  
  *in_R10 = uStack0000000000000070;
  in_R10[1] = uStack0000000000000074;
  in_R10[2] = uStack0000000000000078;
  in_R10[3] = uStack000000000000007c;
  in_R10[4] = uStack0000000000000080;
  in_R10[5] = uStack0000000000000084;
  in_R10[6] = uStack0000000000000088;
  in_R10[7] = uStack000000000000008c;
  in_R10[8] = in_XMM4_Da;
  in_R10[9] = unaff_XMM14_Da;
  in_R10[10] = unaff_XMM15_Da;
  in_R10[0xb] = param_3;
  in_R10[0xc] = param_4;
  return;
}






