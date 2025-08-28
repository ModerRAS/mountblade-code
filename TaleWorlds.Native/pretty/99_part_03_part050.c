#include "TaleWorlds.Native.Split.h"

// 99_part_03_part050.c - 5 个函数

// 函数: void FUN_1801ff450(longlong param_1)
void FUN_1801ff450(longlong param_1)

{
  float fVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  uint64_t uVar6;
  int iVar7;
  int iVar8;
  int32_t uVar9;
  float *pfVar10;
  longlong lVar11;
  void *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint64_t uVar16;
  int iVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fStackX_8;
  float fStackX_c;
  float fStackX_10;
  float fStackX_14;
  uint64_t uStackX_18;
  uint64_t *puVar26;
  int32_t uVar28;
  uint64_t uVar27;
  void *puStack_158;
  void *puStack_150;
  void *puStack_148;
  void *puStack_140;
  int32_t uStack_138;
  ulonglong uStack_130;
  void *puStack_128;
  longlong lStack_120;
  int32_t uStack_118;
  ulonglong uStack_110;
  longlong lStack_108;
  longlong lStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  
  uStack_f8 = 0xfffffffffffffffe;
  plVar3 = (longlong *)*_DAT_180c86960;
  iVar7 = _Mtx_lock(0x180c91970);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  uVar6 = _DAT_180c8a9b0;
  uStackX_18 = _DAT_180c8a9b0;
  _DAT_180c8a9b0 = *plVar3;
  fVar24 = *(float *)(_DAT_180c86950 + 0x17ec) * 0.2;
  fVar25 = *(float *)(_DAT_180c86950 + 0x17f0) * 0.16666667;
  if (DAT_180c82860 == '\0') {
    dVar19 = 1.0 / *(double *)(_DAT_180c86870 + 0x208);
  }
  else {
    dVar19 = 1000.0 / *(double *)(_DAT_180c86870 + 0x70);
  }
  fVar20 = (float)dVar19;
  dVar2 = *(double *)(_DAT_180c86890 + 0x1510);
  fVar21 = (float)dVar2;
  fStackX_8 = fVar20;
  fStackX_10 = fVar21;
  FUN_1800571e0(param_1 + 0x68,&fStackX_8);
  FUN_1800571e0(param_1 + 0x88,&fStackX_10);
  lVar5 = _DAT_180c8a9b0;
  lVar15 = *(longlong *)(param_1 + 0x70);
  lVar4 = *(longlong *)(param_1 + 0x68);
  *(int32_t *)(_DAT_180c8a9b0 + 0x1c38) = 0x3f19999a;
  *(int32_t *)(lVar5 + 0x1be8) = 1;
  *(float *)(lVar5 + 0x1bf4) = fVar24 * 4.0 + 2.0;
  *(int32_t *)(lVar5 + 0x1bf8) = 0xc0400000;
  *(uint64_t *)(lVar5 + 0x1bfc) = 0;
  *(int32_t *)(lVar5 + 0x1bd0) = 1;
  *(int8_t *)(lVar5 + 0x1c14) = 1;
  iVar7 = (int)(lVar15 - lVar4 >> 2);
  if (iVar7 < 0x15) {
    fVar18 = 92.0;
  }
  else {
    fVar18 = fVar25 + 8.0;
  }
  *(float *)(lVar5 + 0x1c04) = fVar24;
  *(float *)(lVar5 + 0x1c08) = fVar18;
  *(int32_t *)(lVar5 + 0x1bd4) = 1;
  FUN_1801299b0(&UNK_180a0f6f8,0,0x207);
  iVar17 = iVar7 + -1;
  *(double *)(param_1 + 0xb8) =
       ((double)iVar17 * *(double *)(param_1 + 0xb8) + (double)fVar20) * (1.0 / (double)iVar7);
  *(double *)(param_1 + 0xc0) =
       ((double)iVar17 * *(double *)(param_1 + 0xc0) + (double)fVar21) * (1.0 / (double)iVar7);
  puVar12 = &DAT_18098bc73;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    puVar12 = *(void **)(param_1 + 8);
  }
  FUN_18010f010(&UNK_180a0f704,puVar12);
  puVar12 = &DAT_18098bc73;
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    puVar12 = *(void **)(param_1 + 0x48);
  }
  FUN_18010f010(&UNK_180a0f704,puVar12);
  puVar12 = &DAT_18098bc73;
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    puVar12 = *(void **)(param_1 + 0x28);
  }
  FUN_18010f010(&UNK_180a0f704,puVar12);
  puStack_158 = (void *)0x437f0000;
  puStack_150 = (void *)0x437f000000000000;
  FUN_18010f0d0(&puStack_158,&DAT_180a063b4);
  func_0x00018012e760();
  FUN_18010f010(&UNK_180a0f730,(int)dVar19);
  func_0x00018012e760();
  FUN_18010f010(&UNK_180a0f740,(double)(1000.0 / fVar20));
  func_0x00018012e760();
  FUN_18010f010(&UNK_180a0f710,*(uint64_t *)(param_1 + 0xb8));
  puStack_158 = (void *)0x437f000000000000;
  puStack_150 = (void *)0x437f000000000000;
  FUN_18010f0d0(&puStack_158,&DAT_180a063b4);
  func_0x00018012e760();
  FUN_18010f010(&UNK_180a0f720,(int)dVar2);
  func_0x00018012e760();
  FUN_18010f010(&UNK_180a0f740,(double)(1000.0 / fVar21));
  func_0x00018012e760();
  FUN_18010f010(&UNK_180a0f710,*(uint64_t *)(param_1 + 0xc0));
  if (0x14 < iVar7) {
    puStack_158 = &UNK_180a07334;
    puStack_150 = &UNK_180a0733c;
    iVar8 = 0;
    if (99 < iVar7) {
      iVar8 = iVar7 + -100;
    }
    lVar15 = (longlong)iVar8;
    lVar4 = *(longlong *)(param_1 + 0x68);
    lStack_108 = lVar4 + lVar15 * 4;
    lVar5 = *(longlong *)(param_1 + 0x88);
    lStack_100 = lVar5 + lVar15 * 4;
    uStack_f0 = 0x3f800000;
    uStack_e8 = 0x3f80000000000000;
    uStack_e0 = 0x3f80000000000000;
    uStack_d8 = 0x3f80000000000000;
    fVar18 = fVar20;
    if (*(float *)(param_1 + 200) <= fVar20) {
      fVar18 = *(float *)(param_1 + 200);
    }
    *(float *)(param_1 + 200) = fVar18;
    fVar18 = *(float *)(param_1 + 0xd0);
    if (fVar21 <= *(float *)(param_1 + 0xd0)) {
      fVar18 = fVar21;
    }
    *(float *)(param_1 + 0xd0) = fVar18;
    if (fVar20 <= *(float *)(param_1 + 0xcc)) {
      fVar20 = *(float *)(param_1 + 0xcc);
    }
    *(float *)(param_1 + 0xcc) = fVar20;
    fVar20 = *(float *)(param_1 + 0xd4);
    if (*(float *)(param_1 + 0xd4) <= fVar21) {
      fVar20 = fVar21;
    }
    *(float *)(param_1 + 0xd4) = fVar20;
    fVar20 = 3.4028235e+38;
    lVar14 = (longlong)iVar17;
    fVar21 = 1.1754944e-38;
    fVar18 = 3.4028235e+38;
    if (lVar15 < lVar14) {
      if (3 < lVar14 - lVar15) {
        fVar21 = 1.1754944e-38;
        pfVar10 = (float *)(lVar4 + 8 + lVar15 * 4);
        lVar11 = lVar5 - lVar4;
        lVar13 = ((lVar14 - lVar15) - 4U >> 2) + 1;
        lVar15 = lVar15 + lVar13 * 4;
        do {
          fVar18 = *(float *)(lVar11 + -8 + (longlong)pfVar10);
          fVar23 = pfVar10[-2];
          fVar22 = fVar23;
          if (fVar23 <= fVar18) {
            fVar22 = fVar18;
          }
          if (fVar22 <= fVar21) {
            fVar22 = fVar21;
          }
          if (fVar18 <= fVar23) {
            fVar23 = fVar18;
          }
          if (fVar20 <= fVar23) {
            fVar23 = fVar20;
          }
          fVar18 = *(float *)((longlong)pfVar10 + lVar11 + -4);
          fVar20 = pfVar10[-1];
          fVar21 = fVar18;
          if (fVar18 <= fVar20) {
            fVar21 = fVar20;
          }
          if (fVar22 < fVar21) {
            fVar22 = fVar21;
          }
          if (fVar20 <= fVar18) {
            fVar18 = fVar20;
          }
          if (fVar18 < fVar23) {
            fVar23 = fVar18;
          }
          fVar18 = *(float *)(lVar11 + (longlong)pfVar10);
          fVar20 = *pfVar10;
          fVar21 = fVar18;
          if (fVar18 <= fVar20) {
            fVar21 = fVar20;
          }
          if (fVar22 < fVar21) {
            fVar22 = fVar21;
          }
          if (fVar20 <= fVar18) {
            fVar18 = fVar20;
          }
          if (fVar18 < fVar23) {
            fVar23 = fVar18;
          }
          fVar1 = *(float *)(lVar11 + 4 + (longlong)pfVar10);
          fVar20 = pfVar10[1];
          fVar18 = fVar1;
          if (fVar1 <= fVar20) {
            fVar18 = fVar20;
          }
          fVar21 = fVar22;
          if (fVar22 < fVar18) {
            fVar21 = fVar18;
          }
          if (fVar20 <= fVar1) {
            fVar1 = fVar20;
          }
          fVar20 = fVar23;
          if (fVar1 < fVar23) {
            fVar20 = fVar1;
          }
          pfVar10 = pfVar10 + 4;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      fVar18 = fVar20;
      if (lVar15 < lVar14) {
        pfVar10 = (float *)(lVar5 + lVar15 * 4);
        lVar14 = lVar14 - lVar15;
        fVar23 = fVar21;
        do {
          fVar18 = *pfVar10;
          fVar22 = *(float *)((longlong)pfVar10 + (lVar4 - lVar5));
          fVar21 = fVar22;
          if (fVar22 <= fVar18) {
            fVar21 = fVar18;
          }
          if (fVar21 <= fVar23) {
            fVar21 = fVar23;
          }
          if (fVar18 <= fVar22) {
            fVar22 = fVar18;
          }
          if (fVar22 < fVar20) {
            fVar20 = fVar22;
          }
          pfVar10 = pfVar10 + 1;
          lVar14 = lVar14 + -1;
          fVar18 = fVar20;
          fVar23 = fVar21;
        } while (lVar14 != 0);
      }
    }
    fVar25 = fVar25 - 95.0;
    fVar23 = fVar21 + 2.0;
    fVar20 = fVar18 - 2.0;
    iVar8 = 100;
    if (iVar7 < 100) {
      iVar8 = iVar17;
    }
    uVar16 = CONCAT44(fVar25,fVar24 - 25.0);
    puVar26 = &uStack_f0;
    FUN_180299420(uVar16,fVar18,2,&puStack_158,puVar26,&UNK_1801fffc0,&lStack_108,iVar8,fVar20,
                  fVar23,uVar16);
    lVar4 = _DAT_180c8a9b0;
    uVar28 = (int32_t)((ulonglong)puVar26 >> 0x20);
    *(int8_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
    lVar15 = *(longlong *)(lVar4 + 0x1af8);
    fVar22 = *(float *)(lVar15 + 0x104) - 5.0;
    *(int8_t *)(lVar15 + 0xb1) = 1;
    fVar18 = *(float *)(*(longlong *)(lVar4 + 0x1af8) + 0x100);
    puStack_128 = &UNK_180a3c3e0;
    uStack_110 = 0;
    lStack_120 = 0;
    uStack_118 = 0;
    puStack_148 = &UNK_180a3c3e0;
    uStack_130 = 0;
    puStack_140 = (void *)0x0;
    uStack_138 = 0;
    FUN_180628040(&puStack_128,&UNK_1809fd0a0,(int)fVar21 + 2);
    fVar21 = fVar20;
    if (fVar20 <= 0.0) {
      fVar21 = 0.0;
    }
    FUN_180628040(&puStack_148,&UNK_1809fd0a0,(int)fVar21);
    lVar15 = _DAT_180c8a9b0;
    *(int8_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
    uVar16 = *(uint64_t *)(*(longlong *)(lVar15 + 0x1af8) + 0x2e8);
    puStack_158 = (void *)0x3f8000003f800000;
    puStack_150 = (void *)0x3f0000003f800000;
    uVar9 = func_0x000180121e20(&puStack_158);
    fStackX_c = (fVar22 - fVar25) - 6.0;
    fVar24 = fVar18 + (fVar24 - 25.0);
    fStackX_8 = fVar24 - 8.0;
    FUN_180294330(uVar16,&fStackX_8,uVar9);
    lVar15 = _DAT_180c8a9b0;
    *(int8_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
    uVar16 = *(uint64_t *)(*(longlong *)(lVar15 + 0x1af8) + 0x2e8);
    puVar12 = &DAT_18098bc73;
    if (puStack_140 != (void *)0x0) {
      puVar12 = puStack_140;
    }
    puStack_158 = (void *)0x3f8000003f800000;
    puStack_150 = (void *)0x3f0000003f800000;
    uVar9 = func_0x000180121e20(&puStack_158);
    fStackX_c = fVar22 - 6.0;
    fStackX_8 = fVar24 - 8.0;
    FUN_180294330(uVar16,&fStackX_8,uVar9,puVar12);
    lVar15 = _DAT_180c8a9b0;
    if ((30.0 < fVar23) && (fVar20 < 30.0)) {
      fVar21 = fVar22 - (30.0 / fVar23) * fVar25;
      *(int8_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
      uVar16 = *(uint64_t *)(*(longlong *)(lVar15 + 0x1af8) + 0x2e8);
      puStack_158 = (void *)0x3f8000003f800000;
      puStack_150 = (void *)0x3f8000003f800000;
      fStackX_10 = fVar18;
      fStackX_14 = fVar21;
      uVar9 = func_0x000180121e20(&puStack_158);
      uVar27 = CONCAT44(uVar28,0x3f800000);
      fStackX_8 = fVar24;
      fStackX_c = fVar21;
      FUN_180293d20(uVar16,&fStackX_10,&fStackX_8,uVar9,uVar27);
      uVar28 = (int32_t)((ulonglong)uVar27 >> 0x20);
    }
    lVar15 = _DAT_180c8a9b0;
    if ((60.0 < fVar23) && (fVar20 < 60.0)) {
      fVar21 = fVar22 - (60.0 / fVar23) * fVar25;
      *(int8_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
      uVar16 = *(uint64_t *)(*(longlong *)(lVar15 + 0x1af8) + 0x2e8);
      puStack_158 = (void *)0x3f8000003f800000;
      puStack_150 = (void *)0x3f8000003f800000;
      fStackX_10 = fVar18;
      fStackX_14 = fVar21;
      uVar9 = func_0x000180121e20(&puStack_158);
      uVar27 = CONCAT44(uVar28,0x3f800000);
      fStackX_8 = fVar24;
      fStackX_c = fVar21;
      FUN_180293d20(uVar16,&fStackX_10,&fStackX_8,uVar9,uVar27);
      uVar28 = (int32_t)((ulonglong)uVar27 >> 0x20);
    }
    lVar15 = _DAT_180c8a9b0;
    if ((120.0 < fVar23) && (fVar20 < 120.0)) {
      fVar20 = fVar22 - (1.0 / fVar23) * 120.0 * fVar25;
      *(int8_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
      uVar16 = *(uint64_t *)(*(longlong *)(lVar15 + 0x1af8) + 0x2e8);
      puStack_158 = (void *)0x3f8000003f800000;
      puStack_150 = (void *)0x3f8000003f800000;
      fStackX_10 = fVar18;
      fStackX_14 = fVar20;
      uVar9 = func_0x000180121e20(&puStack_158);
      uVar27 = CONCAT44(uVar28,0x3f800000);
      fStackX_8 = fVar24;
      fStackX_c = fVar20;
      FUN_180293d20(uVar16,&fStackX_10,&fStackX_8,uVar9,uVar27);
      lVar15 = _DAT_180c8a9b0;
      uVar28 = (int32_t)((ulonglong)uVar27 >> 0x20);
      if (240.0 < fVar23) {
        fVar22 = fVar22 - (1.0 / fVar23) * 240.0 * fVar25;
        *(int8_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
        uVar16 = *(uint64_t *)(*(longlong *)(lVar15 + 0x1af8) + 0x2e8);
        puStack_158 = (void *)0x3f8000003f800000;
        puStack_150 = (void *)0x3f8000003f800000;
        fStackX_10 = fVar18;
        fStackX_14 = fVar22;
        uVar9 = func_0x000180121e20(&puStack_158);
        fStackX_8 = fVar24;
        fStackX_c = fVar22;
        FUN_180293d20(uVar16,&fStackX_10,&fStackX_8,uVar9,CONCAT44(uVar28,0x3f800000));
      }
    }
    puStack_148 = &UNK_180a3c3e0;
    if (puStack_140 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_140 = (void *)0x0;
    uStack_130 = uStack_130 & 0xffffffff00000000;
    puStack_148 = &UNK_18098bcb0;
    puStack_128 = &UNK_180a3c3e0;
    if (lStack_120 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_120 = 0;
    uStack_110 = uStack_110 & 0xffffffff00000000;
    puStack_128 = &UNK_18098bcb0;
  }
  FUN_18012cfe0();
  _DAT_180c8a9b0 = uVar6;
  iVar7 = _Mtx_unlock(0x180c91970);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801fffd0(longlong param_1)
void FUN_1801fffd0(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  int32_t *puVar3;
  uint64_t uVar4;
  char cVar5;
  int iVar6;
  int32_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint64_t uStackX_8;
  float fStackX_10;
  float fStackX_14;
  uint64_t uStackX_18;
  int32_t uVar18;
  uint64_t uVar17;
  void *puVar19;
  longlong *plVar20;
  int32_t uVar21;
  longlong lStack_110;
  longlong lStack_108;
  void *puStack_100;
  void *puStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  int32_t uStack_d0;
  int32_t uStack_cc;
  int32_t uStack_c8;
  int32_t uStack_c4;
  
  plVar20 = (longlong *)*_DAT_180c86960;
  iVar6 = _Mtx_lock(0x180c91970);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  uVar4 = _DAT_180c8a9b0;
  uStackX_18 = _DAT_180c8a9b0;
  lVar2 = *plVar20;
  fVar16 = *(float *)(_DAT_180c86950 + 0x17ec) * 0.5;
  fVar15 = *(float *)(_DAT_180c86950 + 0x17f0) * 0.5;
  puVar3 = (int32_t *)**(uint64_t **)(lVar2 + 0x1c70);
  fVar13 = (float)puVar3[5];
  fVar11 = (float)puVar3[3];
  _DAT_180c8a9b0 = lVar2;
  *(float *)(lVar2 + 0x1bf4) = (float)puVar3[4] * 0.5 + (float)puVar3[2];
  *(float *)(lVar2 + 0x1bf8) = fVar13 * 0.5 + fVar11;
  *(int32_t *)(lVar2 + 0x1bfc) = 0x3f000000;
  *(int32_t *)(lVar2 + 0x1c00) = 0x3f000000;
  *(int32_t *)(lVar2 + 0x1bd0) = 1;
  *(int8_t *)(lVar2 + 0x1c14) = 1;
  uVar18 = *puVar3;
  *(int32_t *)(lVar2 + 0x1bec) = 1;
  *(int32_t *)(lVar2 + 0x1c3c) = uVar18;
  *(float *)(lVar2 + 0x1c04) = fVar16;
  *(float *)(lVar2 + 0x1c08) = fVar15 + 16.0;
  *(int32_t *)(lVar2 + 0x1bd4) = 1;
  *(int32_t *)(lVar2 + 0x1c38) = 0x3f19999a;
  *(int32_t *)(lVar2 + 0x1be8) = 1;
  FUN_1801299b0(&UNK_180a0f770,0,7);
  puStack_100 = &UNK_180a07334;
  puStack_f8 = &UNK_180a0733c;
  lStack_110 = *(longlong *)(param_1 + 0x68) + 0x50;
  lStack_108 = *(longlong *)(param_1 + 0x88) + 0x50;
  uStack_e0 = 0x3f800000;
  uStack_d8 = 0x3f80000000000000;
  uStack_d0 = 0;
  uStack_cc = 0x3f800000;
  uStack_c8 = 0;
  uStack_c4 = 0x3f800000;
  puVar19 = &DAT_18098bc73;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    puVar19 = *(void **)(param_1 + 8);
  }
  FUN_18010f010(&UNK_180a0f704,puVar19);
  puVar19 = &DAT_18098bc73;
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    puVar19 = *(void **)(param_1 + 0x48);
  }
  FUN_18010f010(&UNK_180a0f704,puVar19);
  puVar19 = &DAT_18098bc73;
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    puVar19 = *(void **)(param_1 + 0x28);
  }
  FUN_18010f010(&UNK_180a0f704,puVar19);
  uStack_f0 = 0x437f0000;
  uStack_e8 = 0x437f000000000000;
  FUN_18010f0d0(&uStack_f0,&DAT_180a063b4);
  func_0x00018012e760();
  FUN_18010f010(&UNK_180a0f788,*(uint64_t *)(param_1 + 0xb8));
  func_0x00018012e760();
  FUN_18010f010(&UNK_180a0f748,(int)*(float *)(param_1 + 0xcc));
  func_0x00018012e760();
  func_0x00018012e760();
  FUN_18010f010(&UNK_180a0f758,(int)*(float *)(param_1 + 200));
  func_0x00018012e760();
  FUN_18010f010(&UNK_180a0f7b8,*(uint64_t *)(param_1 + 0xa8));
  uStack_f0 = 0x437f000000000000;
  uStack_e8 = 0x437f000000000000;
  FUN_18010f0d0(&uStack_f0,&DAT_180a063b4);
  func_0x00018012e760();
  FUN_18010f010(&UNK_180a0f7e8,*(uint64_t *)(param_1 + 0xc0));
  func_0x00018012e760();
  FUN_18010f010(&UNK_180a0f748,(int)*(float *)(param_1 + 0xd4));
  func_0x00018012e760();
  FUN_18010f010(&UNK_180a0f758,(int)*(float *)(param_1 + 0xd0));
  func_0x00018012e760();
  FUN_18010f010(&UNK_180a0f7b8,*(uint64_t *)(param_1 + 0xb0));
  func_0x00018012e760();
  FUN_180111070(&UNK_180a0f7a0,param_1 + 0xda);
  func_0x00018012e760();
  uStackX_8 = 0;
  cVar5 = FUN_18010f6f0(&UNK_180a0f7b0,&uStackX_8,0);
  if (cVar5 != '\0') {
    *(int8_t *)(param_1 + 0xd8) = 1;
  }
  fVar13 = *(float *)(param_1 + 0xcc);
  if (*(float *)(param_1 + 0xcc) <= *(float *)(param_1 + 0xd4)) {
    fVar13 = *(float *)(param_1 + 0xd4);
  }
  fVar13 = fVar13 + 5.0;
  fVar16 = fVar16 - 17.0;
  fVar15 = fVar15 - 92.0;
  iVar6 = (int)(*(longlong *)(param_1 + 0x70) - *(longlong *)(param_1 + 0x68) >> 2) + -0x14;
  uVar9 = CONCAT44(fVar15,fVar16);
  uVar21 = 0;
  plVar20 = &lStack_110;
  puVar19 = &UNK_1801fffc0;
  uVar18 = (int32_t)((ulonglong)&uStack_e0 >> 0x20);
  fVar11 = fVar13;
  FUN_180299420();
  lVar2 = _DAT_180c8a9b0;
  if (30.0 < fVar13) {
    *(int8_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
    fVar14 = *(float *)(*(longlong *)(lVar2 + 0x1af8) + 0x104) - 5.0;
    *(int8_t *)(*(longlong *)(lVar2 + 0x1af8) + 0xb1) = 1;
    fVar1 = *(float *)(*(longlong *)(lVar2 + 0x1af8) + 0x100);
    fVar12 = 1.0 / fVar13;
    fVar10 = fVar14 - fVar12 * 30.0 * fVar15;
    *(int8_t *)(*(longlong *)(lVar2 + 0x1af8) + 0xb1) = 1;
    uVar8 = *(uint64_t *)(*(longlong *)(lVar2 + 0x1af8) + 0x2e8);
    uStack_f0 = 0x3f8000003f800000;
    uStack_e8 = 0x3f8000003f800000;
    fStackX_10 = fVar1;
    fStackX_14 = fVar10;
    uVar7 = func_0x000180121e20(&uStack_f0);
    fVar16 = fVar1 + fVar16;
    uStackX_8 = CONCAT44(fVar10,fVar16);
    uVar17 = CONCAT44(uVar18,0x3f800000);
    FUN_180293d20(uVar8,&fStackX_10,&uStackX_8,uVar7,uVar17,puVar19,plVar20,iVar6,uVar21,fVar11,
                  uVar9);
    lVar2 = _DAT_180c8a9b0;
    uVar18 = (int32_t)((ulonglong)uVar17 >> 0x20);
    if (60.0 < fVar13) {
      fVar10 = fVar14 - fVar12 * 60.0 * fVar15;
      *(int8_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
      uVar8 = *(uint64_t *)(*(longlong *)(lVar2 + 0x1af8) + 0x2e8);
      uStack_f0 = 0x3f8000003f800000;
      uStack_e8 = 0x3f8000003f800000;
      fStackX_10 = fVar1;
      fStackX_14 = fVar10;
      uVar7 = func_0x000180121e20(&uStack_f0);
      uStackX_8 = CONCAT44(fVar10,fVar16);
      uVar17 = CONCAT44(uVar18,0x3f800000);
      FUN_180293d20(uVar8,&fStackX_10,&uStackX_8,uVar7,uVar17,puVar19,plVar20,iVar6,uVar21,fVar11,
                    uVar9);
      lVar2 = _DAT_180c8a9b0;
      uVar18 = (int32_t)((ulonglong)uVar17 >> 0x20);
      if (120.0 < fVar13) {
        fVar11 = fVar14 - fVar12 * 120.0 * fVar15;
        *(int8_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
        uVar9 = *(uint64_t *)(*(longlong *)(lVar2 + 0x1af8) + 0x2e8);
        uStack_f0 = 0x3f8000003f800000;
        uStack_e8 = 0x3f8000003f800000;
        fStackX_10 = fVar1;
        fStackX_14 = fVar11;
        uVar21 = func_0x000180121e20(&uStack_f0);
        uStackX_8 = CONCAT44(fVar11,fVar16);
        uVar8 = CONCAT44(uVar18,0x3f800000);
        FUN_180293d20(uVar9,&fStackX_10,&uStackX_8,uVar21,uVar8);
        lVar2 = _DAT_180c8a9b0;
        uVar18 = (int32_t)((ulonglong)uVar8 >> 0x20);
        if (240.0 < fVar13) {
          fVar14 = fVar14 - fVar12 * 240.0 * fVar15;
          *(int8_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
          uVar9 = *(uint64_t *)(*(longlong *)(lVar2 + 0x1af8) + 0x2e8);
          uStack_f0 = 0x3f8000003f800000;
          uStack_e8 = 0x3f8000003f800000;
          fStackX_10 = fVar1;
          fStackX_14 = fVar14;
          uVar21 = func_0x000180121e20(&uStack_f0);
          uStackX_8 = CONCAT44(fVar14,fVar16);
          FUN_180293d20(uVar9,&fStackX_10,&uStackX_8,uVar21,CONCAT44(uVar18,0x3f800000));
        }
      }
    }
  }
  FUN_18012cfe0();
  _DAT_180c8a9b0 = uVar4;
  iVar6 = _Mtx_unlock(0x180c91970);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180230050(longlong *param_1,int param_2,int param_3)
void FUN_180230050(longlong *param_1,int param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  int8_t auVar13 [16];
  float fVar14;
  float fVar15;
  
  if (param_2 < param_3) {
    lVar9 = (longlong)param_2 * 0x5c;
    lVar8 = (longlong)param_2 << 4;
    uVar7 = (ulonglong)(uint)(param_3 - param_2);
    lVar10 = lVar9;
    do {
      lVar5 = *(longlong *)(**(longlong **)param_1[1] + 0x30 + (longlong)*(int *)param_1[2] * 0x50);
      fVar2 = *(float *)param_1[3];
      fVar14 = 1.0 - fVar2;
      lVar6 = *(longlong *)(**(longlong **)param_1[1] + 0x30 + (longlong)*(int *)param_1[4] * 0x50);
      fVar3 = *(float *)(lVar8 + 4 + lVar6);
      fVar11 = fVar2 * *(float *)(lVar8 + lVar6) + fVar14 * *(float *)(lVar8 + lVar5);
      fVar4 = *(float *)(lVar8 + 4 + lVar5);
      fVar15 = fVar2 * *(float *)(lVar8 + 8 + lVar6) + fVar14 * *(float *)(lVar8 + 8 + lVar5);
      pfVar1 = (float *)(*(longlong *)(*(longlong *)(*param_1 + 8) + 0x68) + 0x34 + lVar10);
      *pfVar1 = fVar11;
      pfVar1[1] = fVar2 * fVar3 + fVar14 * fVar4;
      pfVar1[2] = fVar15;
      pfVar1[3] = 3.4028235e+38;
      lVar6 = *(longlong *)(*(longlong *)(*param_1 + 8) + 0x68);
      fVar2 = *(float *)(lVar6 + 0x38 + lVar10);
      fVar3 = *(float *)(lVar6 + 0x34 + lVar10);
      fVar4 = *(float *)(lVar6 + 0x3c + lVar10);
      fVar12 = fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4;
      auVar13 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
      fVar14 = auVar13._0_4_;
      fVar12 = fVar12 * fVar14 * fVar14;
      fVar14 = fVar14 * 0.5 * (3.0 - fVar12);
      *(float *)(lVar6 + 0x34 + lVar10) = fVar3 * fVar14;
      *(float *)(lVar6 + 0x38 + lVar10) = fVar2 * fVar14;
      *(float *)(lVar6 + 0x3c + lVar10) = fVar4 * fVar14;
      FUN_18022f490(*(longlong *)(*param_1 + 8),
                    *(longlong *)(*(longlong *)(*param_1 + 8) + 0x68) + lVar9,lVar5,fVar12,fVar11,
                    fVar15);
      lVar9 = lVar9 + 0x5c;
      lVar8 = lVar8 + 0x10;
      lVar10 = lVar10 + 0x5c;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}






// 函数: void FUN_18023006b(int32_t param_1,int param_2,int param_3,uint64_t param_4,uint64_t param_5)
void FUN_18023006b(int32_t param_1,int param_2,int param_3,uint64_t param_4,uint64_t param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  longlong in_RAX;
  uint64_t unaff_RBX;
  uint64_t unaff_RDI;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *in_R11;
  float fVar11;
  float fVar12;
  float fVar13;
  int8_t auVar14 [16];
  float fVar15;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + -8) = unaff_RDI;
  *(int32_t *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x28) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x24) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x20) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x1c) = unaff_XMM7_Dd;
  lVar9 = (longlong)param_2 * 0x5c;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM9_Dd;
  lVar8 = (longlong)param_2 << 4;
  *(int32_t *)(in_RAX + -0x4c) = param_1;
  uVar7 = (ulonglong)(uint)(param_3 - param_2);
  lVar10 = lVar9;
  do {
    lVar5 = *(longlong *)(**(longlong **)in_R11[1] + 0x30 + (longlong)*(int *)in_R11[2] * 0x50);
    fVar2 = *(float *)in_R11[3];
    fVar15 = 1.0 - fVar2;
    lVar6 = *(longlong *)(**(longlong **)in_R11[1] + 0x30 + (longlong)*(int *)in_R11[4] * 0x50);
    fVar3 = *(float *)(lVar8 + 4 + lVar6);
    fVar4 = *(float *)(lVar8 + 8 + lVar6);
    fVar12 = fVar2 * *(float *)(lVar8 + lVar6) + fVar15 * *(float *)(lVar8 + lVar5);
    fVar11 = *(float *)(lVar8 + 8 + lVar5);
    fVar13 = *(float *)(lVar8 + 4 + lVar5);
    pfVar1 = (float *)(*(longlong *)(*(longlong *)(*in_R11 + 8) + 0x68) + 0x34 + lVar10);
    *pfVar1 = fVar12;
    pfVar1[1] = fVar2 * fVar3 + fVar15 * fVar13;
    pfVar1[2] = fVar2 * fVar4 + fVar15 * fVar11;
    pfVar1[3] = param_5._4_4_;
    lVar6 = *(longlong *)(*(longlong *)(*in_R11 + 8) + 0x68);
    fVar2 = *(float *)(lVar6 + 0x38 + lVar10);
    fVar3 = *(float *)(lVar6 + 0x34 + lVar10);
    fVar4 = *(float *)(lVar6 + 0x3c + lVar10);
    fVar13 = fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4;
    auVar14 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
    fVar11 = auVar14._0_4_;
    fVar13 = fVar13 * fVar11 * fVar11;
    fVar11 = fVar11 * 0.5 * (3.0 - fVar13);
    *(float *)(lVar6 + 0x34 + lVar10) = fVar3 * fVar11;
    *(float *)(lVar6 + 0x38 + lVar10) = fVar2 * fVar11;
    *(float *)(lVar6 + 0x3c + lVar10) = fVar4 * fVar11;
    FUN_18022f490(*(longlong *)(*in_R11 + 8),
                  *(longlong *)(*(longlong *)(*in_R11 + 8) + 0x68) + lVar9,lVar5,fVar13,fVar12);
    lVar9 = lVar9 + 0x5c;
    lVar8 = lVar8 + 0x10;
    lVar10 = lVar10 + 0x5c;
    uVar7 = uVar7 - 1;
  } while (uVar7 != 0);
  return;
}






// 函数: void FUN_180230242(void)
void FUN_180230242(void)

{
  return;
}






