#include "TaleWorlds.Native.Split.h"

// 99_part_09_part076.c - 2 个函数

// 函数: void FUN_1805ef690(longlong *param_1)
void FUN_1805ef690(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x38))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x38))();
  }
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x78) {
    FUN_180207ea0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1805ef6e0(uint64_t *param_1,longlong param_2,longlong param_3,longlong *param_4,char param_5,
             char param_6,char param_7,char param_8,char param_9)

{
  float *pfVar1;
  uint64_t *puVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  code *pcVar8;
  longlong *plVar9;
  float fVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int iVar14;
  ulonglong uVar15;
  uint64_t uVar16;
  ulonglong uVar17;
  int32_t *puVar18;
  char cVar19;
  char cVar20;
  longlong *plVar21;
  longlong lVar22;
  char cVar23;
  void *puVar24;
  ulonglong uVar25;
  longlong lVar26;
  char cVar27;
  longlong lVar28;
  void *puVar29;
  longlong lVar30;
  longlong lVar31;
  longlong *plVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  int32_t uStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  int32_t uStack_14c;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  int32_t uStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  int32_t uStack_cc;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  
  uStack_c8 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a19ac8;
  *param_1 = &UNK_180a199c8;
  uVar17 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &UNK_180a37968;
  param_1[0xb] = 0xffffffffffffffff;
  param_1[0xc] = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 0xd) = 0xffffffff;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(int32_t *)(param_1 + 0x1f) = 3;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(int32_t *)(param_1 + 0x24) = 3;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(int32_t *)(param_1 + 0x28) = 3;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(int32_t *)(param_1 + 0x2c) = 3;
  plVar21 = param_1 + 0x3d;
  *plVar21 = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(int32_t *)(param_1 + 0x40) = 3;
  uStack_148 = CONCAT44((int)param_7,(int)param_5);
  uStack_140 = CONCAT44((int)param_8,(int)param_6);
  param_1[0xb] = uStack_148;
  param_1[0xc] = uStack_140;
  *(int *)(param_1 + 0xd) = (int)param_9;
  *(int16_t *)(param_1 + 0x1a) = 0;
  *(int8_t *)((longlong)param_1 + 0xd2) = 0;
  param_1[0x12] = 0x3f800000;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x3f80000000000000;
  *(int32_t *)(param_1 + 0x16) = 0x3f800000;
  *(int32_t *)((longlong)param_1 + 0xb4) = 0;
  *(int32_t *)(param_1 + 0x17) = 0;
  *(int32_t *)((longlong)param_1 + 0xbc) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(int32_t *)((longlong)param_1 + 0xc4) = 0;
  *(int32_t *)(param_1 + 0x19) = 0;
  *(int32_t *)((longlong)param_1 + 0xcc) = 0x3f800000;
  *(int8_t *)((longlong)param_1 + 0xd3) = 0;
  cVar19 = '\0';
  if ('\0' < *(char *)(param_3 + 0x148)) {
    lVar22 = *(longlong *)(param_3 + 0x140);
    uVar25 = uVar17;
    do {
      lVar28 = (longlong)cVar19 * 0x1b0;
      if ('\x01' < *(char *)(lVar28 + 0xf1 + lVar22)) {
        puVar24 = *(void **)(*(longlong *)((longlong)cVar19 * 0x1b0 + 0x180 + lVar22) + 8);
        puVar29 = &DAT_18098bc73;
        if (puVar24 != (void *)0x0) {
          puVar29 = puVar24;
        }
        puVar24 = &DAT_18098bc73;
        if (*(void **)(param_3 + 0x18) != (void *)0x0) {
          puVar24 = *(void **)(param_3 + 0x18);
        }
        FUN_180626f80(&UNK_180a3bd30,puVar24,puVar29);
        goto LAB_1805ef98b;
      }
      uVar15 = (ulonglong)((int)uVar25 + 1);
      if (*(char *)(lVar28 + 0xf0 + lVar22) != -1) {
        uVar15 = uVar25;
      }
      cVar19 = cVar19 + '\x01';
      uVar25 = uVar15;
    } while (cVar19 < *(char *)(param_3 + 0x148));
    if ((int)uVar15 == 1) {
      uVar16 = FUN_18062b1e0(_DAT_180c8ed18,0x270,8,CONCAT71((int7)((ulonglong)lVar22 >> 8),3));
      uVar17 = FUN_18061e9c0(uVar16,param_3);
      goto LAB_1805ef98b;
    }
  }
  puVar24 = &DAT_18098bc73;
  if (*(void **)(param_3 + 0x18) != (void *)0x0) {
    puVar24 = *(void **)(param_3 + 0x18);
  }
  FUN_180626f80(&UNK_180a3bd70,puVar24);
LAB_1805ef98b:
  param_1[0x1b] = uVar17;
  *(int32_t *)((longlong)param_1 + 0x1e4) = 0xffffffff;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(int32_t *)(param_1 + 0x3c) = 0x461c4000;
  *(int8_t *)(param_1 + 0x43) = 0;
  lVar22 = *(longlong *)(param_2 + 0x208);
  if ((ulonglong)((param_1[0x3e] - *plVar21) / 0x30) <
      (ulonglong)(longlong)*(char *)(param_3 + 0x148)) {
    FUN_18008dbb0(plVar21);
  }
  else {
    param_1[0x3e] = (longlong)*(char *)(param_3 + 0x148) * 0x30 + *plVar21;
  }
  cVar19 = '\0';
  if ('\0' < *(char *)(param_3 + 0x148)) {
    uStack_14c = 0x7f7fffff;
    do {
      lVar28 = (longlong)cVar19 * 0x1b0 + *(longlong *)(param_3 + 0x140);
      fVar37 = *(float *)(lVar28 + 0x40);
      fVar6 = *(float *)(lVar28 + 0x44);
      fVar7 = *(float *)(lVar28 + 0x48);
      fVar34 = *(float *)(lVar28 + 0x4c);
      fStack_118 = *(float *)(lVar28 + 0x30);
      fStack_114 = *(float *)(lVar28 + 0x34);
      fStack_110 = *(float *)(lVar28 + 0x38);
      uStack_10c = *(int32_t *)(lVar28 + 0x3c);
      cVar20 = -1;
      cVar23 = '\0';
      if ('\0' < *(char *)(lVar22 + 0x148)) {
        fVar33 = 3.4028235e+38;
        cVar27 = cVar20;
        do {
          pfVar1 = (float *)((longlong)cVar23 * 0x1b0 + 0x30 + *(longlong *)(lVar22 + 0x140));
          fVar35 = (fStack_118 - *pfVar1) * (fStack_118 - *pfVar1) +
                   (fStack_114 - pfVar1[1]) * (fStack_114 - pfVar1[1]) +
                   (fStack_110 - pfVar1[2]) * (fStack_110 - pfVar1[2]);
          cVar20 = cVar23;
          if (fVar33 <= fVar35) {
            cVar20 = cVar27;
          }
          cVar23 = cVar23 + '\x01';
          if (fVar33 <= fVar35) {
            fVar35 = fVar33;
          }
          fVar33 = fVar35;
          cVar27 = cVar20;
        } while (cVar23 < *(char *)(lVar22 + 0x148));
      }
      lVar30 = (longlong)cVar19 * 0x30;
      *(char *)(lVar30 + *plVar21) = cVar20;
      lVar28 = (longlong)cVar20 * 0x1b0 + *(longlong *)(lVar22 + 0x140);
      fVar33 = *(float *)(lVar28 + 0x40);
      fVar35 = *(float *)(lVar28 + 0x44);
      uStack_148 = *(uint64_t *)(lVar28 + 0x40);
      fVar36 = *(float *)(lVar28 + 0x48);
      fVar10 = *(float *)(lVar28 + 0x4c);
      uStack_140 = *(uint64_t *)(lVar28 + 0x48);
      uStack_138 = *(uint64_t *)(lVar28 + 0x30);
      uStack_130 = *(uint64_t *)(lVar28 + 0x38);
      fStack_150 = fStack_110 - *(float *)(lVar28 + 0x38);
      fStack_154 = fStack_114 - *(float *)(lVar28 + 0x34);
      fStack_158 = fStack_118 - *(float *)(lVar28 + 0x30);
      FUN_180285b40(&uStack_148,&fStack_168,&fStack_158);
      lVar28 = *plVar21;
      pfVar1 = (float *)(lVar28 + 0x10 + lVar30);
      *pfVar1 = fVar37 * fVar33 * 1.0 + fVar34 * fVar10 * 1.0 + fVar6 * fVar35 + fVar7 * fVar36;
      pfVar1[1] = fVar37 * fVar35 * -1.0 + fVar34 * fVar36 * -1.0 + fVar7 * fVar10 + fVar6 * fVar33;
      pfVar1[2] = fVar37 * fVar36 * -1.0 + fVar6 * fVar10 * -1.0 + fVar34 * fVar35 + fVar7 * fVar33;
      pfVar1[3] = fVar37 * fVar10 * -1.0 + fVar7 * fVar35 * -1.0 + fVar6 * fVar36 + fVar34 * fVar33;
      puVar2 = (uint64_t *)(lVar28 + 0x20 + lVar30);
      *puVar2 = CONCAT44(fStack_164,fStack_168);
      puVar2[1] = CONCAT44(uStack_15c,fStack_160);
      cVar19 = cVar19 + '\x01';
    } while (cVar19 < *(char *)(param_3 + 0x148));
  }
  lVar28 = *(longlong *)(param_2 + 0x210);
  lVar30 = (longlong)*(char *)(lVar28 + 0xde) * 0x1b0 + *(longlong *)(lVar22 + 0x140);
  uStack_148 = *(uint64_t *)(lVar30 + 0x40);
  uStack_140 = *(uint64_t *)(lVar30 + 0x48);
  uStack_138 = *(uint64_t *)(lVar30 + 0x30);
  uStack_130 = *(uint64_t *)(lVar30 + 0x38);
  lVar30 = (longlong)*(char *)(param_1 + 0xb) * 0x1b0 + *(longlong *)(param_3 + 0x140);
  fStack_128 = *(float *)(lVar30 + 0x40);
  fStack_124 = *(float *)(lVar30 + 0x44);
  fStack_120 = *(float *)(lVar30 + 0x48);
  fStack_11c = *(float *)(lVar30 + 0x4c);
  fStack_118 = *(float *)(lVar30 + 0x30);
  fStack_114 = *(float *)(lVar30 + 0x34);
  fStack_110 = *(float *)(lVar30 + 0x38);
  uStack_10c = *(int32_t *)(lVar30 + 0x3c);
  puVar18 = (int32_t *)FUN_180300b10(&uStack_148,&fStack_e8,&fStack_128);
  uVar11 = puVar18[1];
  uVar12 = puVar18[2];
  uVar13 = puVar18[3];
  *(int32_t *)(param_1 + 0x36) = *puVar18;
  *(int32_t *)((longlong)param_1 + 0x1b4) = uVar11;
  *(int32_t *)(param_1 + 0x37) = uVar12;
  *(int32_t *)((longlong)param_1 + 0x1bc) = uVar13;
  uVar11 = puVar18[5];
  uVar12 = puVar18[6];
  uVar13 = puVar18[7];
  *(int32_t *)(param_1 + 0x38) = puVar18[4];
  *(int32_t *)((longlong)param_1 + 0x1c4) = uVar11;
  *(int32_t *)(param_1 + 0x39) = uVar12;
  *(int32_t *)((longlong)param_1 + 0x1cc) = uVar13;
  FUN_1802b6d10(param_1 + 0x21,(longlong)*(char *)(param_3 + 0x148));
  param_5 = '\0';
  if ('\0' < *(char *)(param_3 + 0x148)) {
    uStack_14c = 0x7f7fffff;
    uStack_15c = 0x7f7fffff;
    do {
      lVar31 = (longlong)param_5;
      lVar26 = lVar31 * 0x1b0 + *(longlong *)(param_3 + 0x140);
      plVar21 = (longlong *)param_1[0x1b];
      pcVar8 = *(code **)(*plVar21 + 0x28);
      puVar18 = (int32_t *)(**(code **)(*plVar21 + 0x10))(plVar21,&param_7,(int)param_5);
      (*pcVar8)(plVar21,*puVar18,&fStack_128);
      fVar37 = *(float *)(lVar26 + 0x40);
      fVar6 = *(float *)(lVar26 + 0x44);
      fVar7 = *(float *)(lVar26 + 0x48);
      fVar34 = *(float *)(lVar26 + 0x4c);
      fStack_d8 = *(float *)(lVar26 + 0x30);
      fStack_d4 = *(float *)(lVar26 + 0x34);
      fStack_d0 = *(float *)(lVar26 + 0x38);
      uStack_cc = *(int32_t *)(lVar26 + 0x3c);
      fStack_150 = fStack_110 - fStack_d0;
      fStack_154 = fStack_114 - fStack_d4;
      fStack_158 = fStack_118 - fStack_d8;
      fStack_e8 = fVar37;
      fStack_e4 = fVar6;
      fStack_e0 = fVar7;
      fStack_dc = fVar34;
      FUN_180285b40(&fStack_e8,&uStack_c0,&fStack_158);
      lVar31 = lVar31 * 0x40;
      lVar30 = param_1[0x21];
      pfVar1 = (float *)(lVar31 + lVar30);
      *pfVar1 = fStack_128 * fVar37 * 1.0 + fStack_11c * fVar34 * 1.0 +
                fStack_124 * fVar6 + fStack_120 * fVar7;
      pfVar1[1] = fStack_128 * fVar6 * -1.0 + fStack_11c * fVar7 * -1.0 +
                  fStack_120 * fVar34 + fStack_124 * fVar37;
      pfVar1[2] = fStack_128 * fVar7 * -1.0 + fStack_124 * fVar34 * -1.0 +
                  fStack_11c * fVar6 + fStack_120 * fVar37;
      pfVar1[3] = fStack_128 * fVar34 * -1.0 + fStack_120 * fVar6 * -1.0 +
                  fStack_124 * fVar7 + fStack_11c * fVar37;
      puVar2 = (uint64_t *)(lVar31 + 0x10 + lVar30);
      *puVar2 = uStack_c0;
      puVar2[1] = uStack_b8;
      fVar37 = *(float *)(lVar26 + 0x40);
      fVar6 = *(float *)(lVar26 + 0x44);
      fVar7 = *(float *)(lVar26 + 0x48);
      fVar34 = *(float *)(lVar26 + 0x4c);
      fStack_160 = *(float *)(lVar26 + 0x38) - fStack_110;
      fStack_164 = *(float *)(lVar26 + 0x34) - fStack_114;
      fStack_168 = *(float *)(lVar26 + 0x30) - fStack_118;
      FUN_180285b40(&fStack_128,&uStack_148,&fStack_168);
      lVar30 = param_1[0x21];
      pfVar1 = (float *)(lVar31 + 0x20 + lVar30);
      *pfVar1 = fVar37 * fStack_128 * 1.0 + fVar34 * fStack_11c * 1.0 +
                fVar6 * fStack_124 + fVar7 * fStack_120;
      pfVar1[1] = fVar37 * fStack_124 * -1.0 + fVar34 * fStack_120 * -1.0 +
                  fVar7 * fStack_11c + fVar6 * fStack_128;
      pfVar1[2] = fVar37 * fStack_120 * -1.0 + fVar6 * fStack_11c * -1.0 +
                  fVar34 * fStack_124 + fVar7 * fStack_128;
      pfVar1[3] = fVar37 * fStack_11c * -1.0 + fVar7 * fStack_124 * -1.0 +
                  fVar6 * fStack_120 + fVar34 * fStack_128;
      puVar18 = (int32_t *)(lVar31 + 0x30 + lVar30);
      *puVar18 = (int32_t)uStack_148;
      puVar18[1] = uStack_148._4_4_;
      puVar18[2] = (int32_t)uStack_140;
      puVar18[3] = uStack_140._4_4_;
      param_5 = param_5 + '\x01';
    } while (param_5 < *(char *)(param_3 + 0x148));
  }
  plVar32 = param_1 + 0x1c;
  uVar25 = 0;
  plVar21 = (longlong *)param_1[0x1b];
  pcVar8 = *(code **)(*plVar21 + 0x18);
  puVar18 = (int32_t *)
            (**(code **)(*plVar21 + 0x10))(plVar21,&param_5,*(int32_t *)(param_1 + 0xb));
  (*pcVar8)(plVar21,*puVar18,1);
  plVar21 = (longlong *)param_1[0x1b];
  pcVar8 = *(code **)(*plVar21 + 0x18);
  puVar18 = (int32_t *)
            (**(code **)(*plVar21 + 0x10))
                      (plVar21,&param_5,*(int32_t *)((longlong)param_1 + 0x5c));
  (*pcVar8)(plVar21,*puVar18,1);
  plVar21 = (longlong *)param_1[0x1b];
  pcVar8 = *(code **)(*plVar21 + 0x18);
  puVar18 = (int32_t *)
            (**(code **)(*plVar21 + 0x10))(plVar21,&param_5,*(int32_t *)(param_1 + 0xc));
  (*pcVar8)(plVar21,*puVar18,1);
  plVar21 = (longlong *)param_1[0x1b];
  pcVar8 = *(code **)(*plVar21 + 0x18);
  puVar18 = (int32_t *)
            (**(code **)(*plVar21 + 0x10))(plVar21,&param_5,*(int32_t *)(param_1 + 0xd));
  (*pcVar8)(plVar21,*puVar18,1);
  plVar21 = (longlong *)param_1[0x1b];
  pcVar8 = *(code **)(*plVar21 + 0x18);
  puVar18 = (int32_t *)
            (**(code **)(*plVar21 + 0x10))
                      (plVar21,&param_5,*(int32_t *)((longlong)param_1 + 100));
  (*pcVar8)(plVar21,*puVar18,1);
  uVar17 = uVar25;
  while( true ) {
    plVar21 = (longlong *)param_1[0x1b];
    if ((void *)*plVar21 == &UNK_180a3beb8) {
      iVar14 = (int)(plVar21[10] - plVar21[9] >> 3);
    }
    else {
      iVar14 = (**(code **)((void *)*plVar21 + 8))();
      plVar21 = (longlong *)param_1[0x1b];
    }
    if (iVar14 <= (int)uVar17) break;
    (**(code **)(*plVar21 + 0x48))(plVar21,uVar17,0);
    (**(code **)(*(longlong *)param_1[0x1b] + 0x50))((longlong *)param_1[0x1b],uVar17,1,1);
    uVar17 = (ulonglong)((int)uVar17 + 1);
  }
  pcVar8 = *(code **)(*plVar21 + 0x28);
  puVar18 = (int32_t *)
            (**(code **)(*plVar21 + 0x10))
                      (plVar21,&param_5,*(int32_t *)((longlong)param_1 + 0x5c));
  (*pcVar8)(plVar21,*puVar18,&fStack_108);
  lVar30 = (longlong)*(char *)(lVar28 + 0xde) * 0x1b0 + *(longlong *)(lVar22 + 0x140);
  fVar37 = *(float *)(lVar30 + 0x40);
  fVar6 = *(float *)(lVar30 + 0x44);
  fVar7 = *(float *)(lVar30 + 0x48);
  fVar34 = *(float *)(lVar30 + 0x4c);
  fStack_d8 = *(float *)(lVar30 + 0x30);
  fStack_d4 = *(float *)(lVar30 + 0x34);
  fStack_d0 = *(float *)(lVar30 + 0x38);
  uStack_cc = *(int32_t *)(lVar30 + 0x3c);
  fStack_160 = fStack_f0 - fStack_d0;
  fStack_164 = fStack_f4 - fStack_d4;
  fStack_168 = fStack_f8 - fStack_d8;
  uStack_15c = 0x7f7fffff;
  fStack_e8 = fVar37;
  fStack_e4 = fVar6;
  fStack_e0 = fVar7;
  fStack_dc = fVar34;
  FUN_180285b40(&fStack_e8,&uStack_148,&fStack_168);
  *(float *)(param_1 + 0x2e) =
       fStack_104 * fVar6 + fStack_100 * fVar7 +
       fStack_108 * fVar37 * 1.0 + fStack_fc * fVar34 * 1.0;
  *(float *)((longlong)param_1 + 0x174) =
       fStack_100 * fVar34 + fStack_104 * fVar37 +
       fStack_108 * fVar6 * -1.0 + fStack_fc * fVar7 * -1.0;
  *(float *)(param_1 + 0x2f) =
       fStack_fc * fVar6 + fStack_100 * fVar37 +
       fStack_108 * fVar7 * -1.0 + fStack_104 * fVar34 * -1.0;
  *(float *)((longlong)param_1 + 0x17c) =
       fStack_104 * fVar7 + fStack_fc * fVar37 +
       fStack_108 * fVar34 * -1.0 + fStack_100 * fVar6 * -1.0;
  *(int32_t *)(param_1 + 0x30) = (int32_t)uStack_148;
  *(int32_t *)((longlong)param_1 + 0x184) = uStack_148._4_4_;
  *(int32_t *)(param_1 + 0x31) = (int32_t)uStack_140;
  *(int32_t *)((longlong)param_1 + 0x18c) = uStack_140._4_4_;
  plVar21 = (longlong *)param_1[0x1b];
  pcVar8 = *(code **)(*plVar21 + 0x28);
  puVar18 = (int32_t *)
            (**(code **)(*plVar21 + 0x10))(plVar21,&param_5,*(int32_t *)(param_1 + 0xc));
  (*pcVar8)(plVar21,*puVar18,&fStack_108);
  lVar22 = (longlong)*(char *)(lVar28 + 0xde) * 0x1b0 + *(longlong *)(lVar22 + 0x140);
  fVar37 = *(float *)(lVar22 + 0x40);
  fVar6 = *(float *)(lVar22 + 0x44);
  fVar7 = *(float *)(lVar22 + 0x48);
  fVar34 = *(float *)(lVar22 + 0x4c);
  fStack_d8 = *(float *)(lVar22 + 0x30);
  fStack_d4 = *(float *)(lVar22 + 0x34);
  fStack_d0 = *(float *)(lVar22 + 0x38);
  uStack_cc = *(int32_t *)(lVar22 + 0x3c);
  fStack_160 = fStack_f0 - fStack_d0;
  fStack_164 = fStack_f4 - fStack_d4;
  fStack_168 = fStack_f8 - fStack_d8;
  uStack_15c = 0x7f7fffff;
  fStack_e8 = fVar37;
  fStack_e4 = fVar6;
  fStack_e0 = fVar7;
  fStack_dc = fVar34;
  FUN_180285b40(&fStack_e8,&uStack_148,&fStack_168);
  *(float *)(param_1 + 0x32) =
       fStack_108 * fVar37 * 1.0 + fStack_fc * fVar34 * 1.0 +
       fStack_104 * fVar6 + fStack_100 * fVar7;
  *(float *)((longlong)param_1 + 0x194) =
       fStack_108 * fVar6 * -1.0 + fStack_fc * fVar7 * -1.0 +
       fStack_100 * fVar34 + fStack_104 * fVar37;
  *(float *)(param_1 + 0x33) =
       fStack_108 * fVar7 * -1.0 + fStack_104 * fVar34 * -1.0 +
       fStack_fc * fVar6 + fStack_100 * fVar37;
  *(float *)((longlong)param_1 + 0x19c) =
       fStack_108 * fVar34 * -1.0 + fStack_100 * fVar6 * -1.0 +
       fStack_104 * fVar7 + fStack_fc * fVar37;
  *(int32_t *)(param_1 + 0x34) = (int32_t)uStack_148;
  *(int32_t *)((longlong)param_1 + 0x1a4) = uStack_148._4_4_;
  *(int32_t *)(param_1 + 0x35) = (int32_t)uStack_140;
  *(int32_t *)((longlong)param_1 + 0x1ac) = uStack_140._4_4_;
  plVar21 = (longlong *)*param_4;
  if (plVar21 != (longlong *)0x0) {
    (**(code **)(*plVar21 + 0x28))(plVar21);
  }
  plVar9 = (longlong *)param_1[0x20];
  param_1[0x20] = plVar21;
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x38))();
  }
  lVar22 = param_1[0x20];
  if (lVar22 != 0) {
    lVar22 = (longlong)(int)((*(longlong *)(lVar22 + 0x20) - *(longlong *)(lVar22 + 0x18)) / 0x128);
    FUN_1805f2580(plVar32,lVar22);
    uVar17 = uVar25;
    if (0 < lVar22) {
      do {
        lVar28 = *(longlong *)(param_1[0x20] + 0x18);
        pfVar1 = (float *)(uVar25 + 0xc4 + lVar28);
        pfVar3 = (float *)(uVar25 + 0xd4 + lVar28);
        pfVar4 = (float *)(uVar25 + 0xe4 + lVar28);
        pfVar5 = (float *)(uVar25 + 0xf4 + lVar28);
        fVar37 = *(float *)(uVar25 + 0xb8 + lVar28);
        fVar6 = *(float *)(uVar25 + 0xbc + lVar28);
        fVar7 = *(float *)(uVar25 + 0xb4 + lVar28);
        fVar35 = fVar7 + *(float *)(uVar25 + 0xb0 + lVar28);
        fVar34 = *(float *)(uVar25 + 0x10 + lVar28);
        fVar33 = *(float *)(uVar25 + 0x68 + lVar28);
        if (fVar33 <= fVar34) {
          fVar34 = fVar33;
        }
        fVar36 = (fVar35 * pfVar1[2] + fVar37 * pfVar3[2] + fVar6 * pfVar4[2] + pfVar5[2]) -
                 (fVar7 * pfVar1[2] + fVar37 * pfVar3[2] + fVar6 * pfVar4[2] + pfVar5[2]);
        fVar33 = (fVar35 * pfVar1[1] + fVar37 * pfVar3[1] + fVar6 * pfVar4[1] + pfVar5[1]) -
                 (fVar7 * pfVar1[1] + fVar37 * pfVar3[1] + fVar6 * pfVar4[1] + pfVar5[1]);
        fVar37 = (fVar35 * *pfVar1 + fVar37 * *pfVar3 + fVar6 * *pfVar4 + *pfVar5) -
                 (fVar7 * *pfVar1 + fVar37 * *pfVar3 + fVar6 * *pfVar4 + *pfVar5);
        puVar18 = (int32_t *)
                  (**(code **)(*(longlong *)param_1[0x1b] + 0x40))
                            ((longlong *)param_1[0x1b],&param_5,fVar34,
                             SQRT(fVar33 * fVar33 + fVar37 * fVar37 + fVar36 * fVar36));
        *(int32_t *)(*plVar32 + uVar17 * 4) = *puVar18;
        (**(code **)(*(longlong *)param_1[0x1b] + 0x48))
                  ((longlong *)param_1[0x1b],*(int32_t *)(*plVar32 + uVar17 * 4),1);
        uVar17 = uVar17 + 1;
        uVar25 = uVar25 + 0x128;
      } while ((longlong)uVar17 < lVar22);
    }
  }
  if ((longlong *)*param_4 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_4 + 0x38))();
  }
  return param_1;
}



uint64_t FUN_1805f0440(uint64_t param_1,ulonglong param_2)

{
  FUN_1805f0480();
  if ((param_2 & 1) != 0) {
    free(param_1,0x220);
  }
  return param_1;
}






// 函数: void FUN_1805f0480(uint64_t *param_1)
void FUN_1805f0480(uint64_t *param_1)

{
  uint64_t *puVar1;
  longlong lVar2;
  
  *param_1 = &UNK_180a37968;
  puVar1 = (uint64_t *)param_1[0x1b];
  if (puVar1 != (uint64_t *)0x0) {
    lVar2 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar2);
    }
  }
  param_1[0x1b] = 0;
  if (param_1[0x3d] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x29] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x25] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x21] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if ((longlong *)param_1[0x20] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x20] + 0x38))();
  }
  if (param_1[0x1c] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = &UNK_180a199c8;
  *param_1 = &UNK_180a19ac8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




