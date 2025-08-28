#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part566.c - 3 个函数

// 函数: void FUN_18057a3c0(longlong param_1,int param_2,uint64_t param_3,int32_t param_4)
void FUN_18057a3c0(longlong param_1,int param_2,uint64_t param_3,int32_t param_4)

{
  byte bVar1;
  int8_t uVar2;
  int iVar3;
  int32_t uVar4;
  int iVar5;
  uint64_t *puVar6;
  int *piVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint64_t *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  int32_t uVar17;
  int8_t auStack_148 [32];
  int iStack_128;
  int32_t uStack_120;
  void *puStack_118;
  int8_t uStack_110;
  uint64_t uStack_108;
  uint64_t auStack_f8 [18];
  ulonglong uStack_68;
  
  uStack_108 = 0xfffffffffffffffe;
  uStack_68 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_148;
  bVar1 = *(byte *)(param_1 + 0x3424);
  if ((bVar1 & 0x28) == 0) {
    uVar15 = bVar1 >> 3 & 2;
  }
  else {
    uVar15 = (bVar1 & 0x10 | 8) >> 3;
  }
  uVar11 = 0;
  iStack_128 = 0;
  iVar3 = FUN_18054f810(*(uint64_t *)(param_1 + 0x2518),param_4,*(int8_t *)(param_1 + 0x34bc),
                        uVar15);
  if (*(int *)(param_1 + 0x8228) != iVar3) {
    lVar16 = (longlong)*(int *)(param_1 + 0xac) * 0xe0 + _DAT_180c95fb0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
                 0x48) < _DAT_180d4a038) && (FUN_1808fcb90(&system_ptr_a038), _DAT_180d4a038 == -1)) {
      _DAT_180d4a040 = 0;
      FUN_1808fc820(&unknown_var_2768_ptr);
      FUN_1808fcb30(&system_ptr_a038);
    }
    puStack_118 = &system_ptr_a040;
    uStack_110 = 1;
    AcquireSRWLockShared(&system_ptr_a040);
    for (piVar7 = *(int **)(lVar16 + 0xd8); uVar14 = uVar11, piVar7 != (int *)0x0;
        piVar7 = *(int **)(piVar7 + 4)) {
      if (*piVar7 == iVar3) {
        uVar14 = *(ulonglong *)(piVar7 + 2);
        break;
      }
    }
    ReleaseSRWLockShared(&system_ptr_a040);
    if (uVar14 == 0) {
      puStack_118 = &system_ptr_a040;
      uStack_110 = 0;
      AcquireSRWLockExclusive(&system_ptr_a040);
      uStack_110 = 1;
      for (piVar7 = *(int **)(lVar16 + 0xd8); piVar7 != (int *)0x0; piVar7 = *(int **)(piVar7 + 4))
      {
        if (*piVar7 == iVar3) {
          uVar14 = *(ulonglong *)(piVar7 + 2);
          if (uVar14 != 0) goto LAB_18057a6bc;
          break;
        }
      }
      uVar2 = *(int8_t *)(param_1 + 0x34bc);
      puVar12 = auStack_f8;
      do {
        iStack_128 = (int)uVar11;
        uVar4 = FUN_18054f810(*(uint64_t *)(param_1 + 0x2518),param_4,uVar2,param_2);
        iVar5 = FUN_18053a410(&system_ptr_5f30,*(int32_t *)(param_1 + 0xac),uVar4);
        iVar5 = *(int *)(_DAT_180c95f68 + (longlong)iVar5 * 4);
        if (iVar5 == -1) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(uint64_t *)(_DAT_180c95f88 + (longlong)iVar5 * 8);
        }
        *puVar12 = uVar9;
        uVar15 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar15;
        puVar12 = puVar12 + 1;
      } while ((int)uVar15 < 0x12);
      uVar4 = _DAT_180c963ac;
      uVar17 = _DAT_180c963b0;
      if (param_2 == 0) {
        uVar4 = _DAT_180c963a4;
        uVar17 = _DAT_180c963a8;
      }
      iVar5 = *(int *)(param_1 + 0xac);
      puVar6 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0xa0,8,3);
      lVar10 = 2;
      uVar14 = 0;
      puVar12 = puVar6;
      do {
        puVar8 = puVar12;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        lVar10 = lVar10 + -1;
        puVar12 = puVar8 + 8;
      } while (lVar10 != 0);
      puVar8[8] = 0;
      puVar8[9] = 0;
      iStack_128 = uVar4;
      uStack_120 = uVar17;
      FUN_18065df80(puVar6);
      lVar13 = (longlong)iVar5 * 0xe0 + _DAT_180c95fb0;
      piVar7 = (int *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
      *piVar7 = iVar3;
      *(uint64_t **)(piVar7 + 2) = puVar6;
      piVar7[4] = 0;
      piVar7[5] = 0;
      lVar10 = *(longlong *)(lVar13 + 0xd8);
      if (lVar10 == 0) {
        *(int **)(lVar13 + 0xd8) = piVar7;
      }
      else {
        for (lVar13 = *(longlong *)(lVar10 + 0x10); lVar13 != 0;
            lVar13 = *(longlong *)(lVar13 + 0x10)) {
          lVar10 = lVar13;
        }
        *(int **)(lVar10 + 0x10) = piVar7;
      }
      for (piVar7 = *(int **)(lVar16 + 0xd8); piVar7 != (int *)0x0; piVar7 = *(int **)(piVar7 + 4))
      {
        if (*piVar7 == iVar3) {
          uVar14 = *(ulonglong *)(piVar7 + 2);
          break;
        }
      }
LAB_18057a6bc:
      ReleaseSRWLockExclusive(&system_ptr_a040);
    }
    if (*(int *)(param_1 + 0x8228) != iVar3) {
      *(int *)(param_1 + 0x8228) = iVar3;
      *(ulonglong *)(param_1 + 0x9480) = uVar14;
      *(int *)(param_1 + 0x8234) = param_2;
      if (*(int *)(param_1 + 0x34c0) == 0) {
        FUN_18065c8f0();
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_148);
}





// 函数: void FUN_18057a7d0(longlong param_1)
void FUN_18057a7d0(longlong param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  puVar2 = *(uint64_t **)(param_1 + 0xabf0);
  if (puVar2 != (uint64_t *)0x0) {
    if ((void *)*puVar2 == &unknown_var_4336_ptr) {
      FUN_1802091d0(puVar2 + 10);
      lVar6 = puVar2[0x114];
      iVar8 = 0;
      lVar3 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(puVar2[0x115] - lVar6),8) +
              (puVar2[0x115] - lVar6);
      if (lVar3 >> 6 != lVar3 >> 0x3f) {
        lVar3 = 0;
        do {
          lVar4 = *(longlong *)(lVar3 + lVar6);
          iVar7 = 0;
          if (*(longlong *)(lVar4 + 0x40) - *(longlong *)(lVar4 + 0x38) >> 4 != 0) {
            lVar5 = 0;
            do {
              if (((*(byte *)(*(longlong *)(lVar4 + 0x38) + 8 + lVar5) & 1) != 0) &&
                 (lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + lVar5),
                 (*(uint *)(lVar1 + 0x100) & 0x800) != 0)) {
                FUN_18007f0e0(lVar1,(longlong)puVar2 + 0x8e4,
                              *(int32_t *)((longlong)puVar2 + 0x10e4));
                lVar4 = *(longlong *)(lVar3 + lVar6);
              }
              iVar7 = iVar7 + 1;
              lVar5 = lVar5 + 0x10;
            } while ((ulonglong)(longlong)iVar7 <
                     (ulonglong)(*(longlong *)(lVar4 + 0x40) - *(longlong *)(lVar4 + 0x38) >> 4));
          }
          lVar6 = puVar2[0x114];
          iVar8 = iVar8 + 1;
          lVar3 = lVar3 + 0x78;
          lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(puVar2[0x115] - lVar6),8) +
                  (puVar2[0x115] - lVar6);
        } while ((ulonglong)(longlong)iVar8 < (ulonglong)((lVar4 >> 6) - (lVar4 >> 0x3f)));
      }
      return;
    }
    (**(code **)((void *)*puVar2 + 0x10))(puVar2);
  }
  return;
}



uint64_t *
FUN_18057a820(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_1608_ptr;
  *param_1 = &unknown_var_1864_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x110,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18057a8a0(longlong param_1,longlong param_2,longlong param_3)
void FUN_18057a8a0(longlong param_1,longlong param_2,longlong param_3)

{
  int32_t *puVar1;
  byte bVar2;
  ulonglong uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
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
  ulonglong uVar19;
  float *pfVar20;
  ulonglong uVar21;
  float *pfVar22;
  longlong lVar23;
  int32_t *puVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int8_t auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  int8_t auStack_248 [48];
  float fStack_218;
  float fStack_214;
  float fStack_210;
  int32_t uStack_20c;
  float fStack_208;
  int iStack_200;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  uint64_t uStack_1b8;
  uint64_t uStack_1b0;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  uint64_t uStack_188;
  uint64_t uStack_180;
  longlong lStack_178;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong uStack_e8;
  
  uStack_e8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_248;
  if (*(byte *)(param_3 + 0x1040) == 0x40) {
    uVar19 = 0xffffffffffffffff;
    uVar21 = 0xffffffffffffffff;
  }
  else {
    uVar19 = (1L << (*(byte *)(param_3 + 0x1040) & 0x3f)) - 1;
    uVar21 = uVar19 | *(ulonglong *)(param_3 + 0x800);
  }
  *(ulonglong *)(param_3 + 0x800) = uVar21;
  *(ulonglong *)(param_3 + 0x810) = uVar19;
  fStack_1f4 = *(float *)(param_1 + 0x100);
  if ((0.0 < fStack_1f4) && (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x168) == 0)) {
    fStack_1f4 = 0.0;
  }
  bVar2 = *(byte *)(param_2 + 0x20);
  if (fStack_1f4 <= 0.0) {
    *(int8_t *)(param_1 + 0x108) = 1;
    *(int32_t *)(param_1 + 0x68) = 0xf149f2ca;
    *(int32_t *)(param_1 + 0x6c) = 0xf149f2ca;
    *(int32_t *)(param_1 + 0x70) = 0xf149f2ca;
    *(int32_t *)(param_1 + 0x74) = 0x7f7fffff;
    lVar23 = *(longlong *)(param_2 + 0x208);
    if (-1 < (char)(bVar2 - 1)) {
      uVar21 = 0;
      uVar25 = (ulonglong)bVar2;
      uVar19 = uVar21;
      puVar24 = (int32_t *)(param_3 + 0x820);
      do {
        puVar1 = (int32_t *)(uVar19 + 0x90 + *(longlong *)(lVar23 + 0x140));
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        *puVar24 = *puVar1;
        puVar24[1] = uVar4;
        puVar24[2] = uVar5;
        puVar24[3] = uVar6;
        *(ulonglong *)(param_3 + 0x800) =
             *(ulonglong *)(param_3 + 0x800) |
             *(ulonglong *)(uVar19 + 0xe8 + *(longlong *)(lVar23 + 0x140));
        uVar3 = uVar21 & 0x3f;
        uVar21 = uVar21 + 1;
        *(ulonglong *)(param_3 + 0x808) = *(ulonglong *)(param_3 + 0x808) | 1L << uVar3;
        uVar25 = uVar25 - 1;
        uVar19 = uVar19 + 0x1b0;
        puVar24 = puVar24 + 4;
      } while (uVar25 != 0);
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_248);
  }
  *(int8_t *)(param_1 + 0x108) = 0;
  lVar23 = *(longlong *)(param_2 + 0x10);
  pfVar22 = (float *)(lVar23 + 0x70);
  pfVar20 = (float *)FUN_180535610(pfVar22,&fStack_148,
                                   SQRT(*pfVar22 * *pfVar22 +
                                        *(float *)(lVar23 + 0x74) * *(float *)(lVar23 + 0x74) +
                                        *(float *)(lVar23 + 0x78) * *(float *)(lVar23 + 0x78)));
  uStack_1b8 = *(uint64_t *)(pfVar22 + 0xc);
  uStack_1b0 = *(uint64_t *)(pfVar22 + 0xe);
  fStack_208 = pfVar20[4];
  fStack_1d4 = pfVar20[5];
  fStack_1d0 = pfVar20[6];
  fStack_1cc = pfVar20[7];
  fStack_1c8 = pfVar20[8];
  fStack_1c4 = pfVar20[9];
  fStack_1c0 = pfVar20[10];
  fStack_1bc = pfVar20[0xb];
  fStack_1e8 = *pfVar20;
  fStack_1e4 = pfVar20[1];
  fStack_1e0 = pfVar20[2];
  fStack_1dc = pfVar20[3];
  fVar31 = fStack_208 * fStack_208 + fStack_1d4 * fStack_1d4 + fStack_1d0 * fStack_1d0;
  if ((fVar31 <= 0.98010004) || (1.0201 <= fVar31)) {
LAB_18057aad4:
    auVar30 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
    fVar27 = auVar30._0_4_;
    fVar27 = fVar27 * 0.5 * (3.0 - fVar31 * fVar27 * fVar27);
    fStack_208 = fStack_208 * fVar27;
    fVar31 = fStack_1c8 * fStack_1c8 + fStack_1c4 * fStack_1c4 + fStack_1c0 * fStack_1c0;
    fStack_1d4 = fStack_1d4 * fVar27;
    fStack_1d0 = fStack_1d0 * fVar27;
    auVar30 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
    fVar27 = auVar30._0_4_;
    fVar31 = fVar27 * 0.5 * (3.0 - fVar31 * fVar27 * fVar27);
    fStack_1c8 = fStack_1c8 * fVar31;
    fStack_1c4 = fStack_1c4 * fVar31;
    fStack_1c0 = fStack_1c0 * fVar31;
  }
  else {
    fVar27 = fStack_1c8 * fStack_1c8 + fStack_1c4 * fStack_1c4 + fStack_1c0 * fStack_1c0;
    if ((fVar27 <= 0.98010004) || (1.0201 <= fVar27)) goto LAB_18057aad4;
  }
  fStack_1d8 = fStack_208;
  fStack_198 = fStack_1c8;
  fStack_194 = fStack_1c4;
  fStack_190 = fStack_1c0;
  if (*(float *)(param_1 + 0x68) == -1e+30) {
    uVar7 = *(uint64_t *)(pfVar22 + 0xc);
    uVar8 = *(uint64_t *)(pfVar22 + 0xe);
    *(float *)(param_1 + 0x98) = fStack_1e8;
    *(float *)(param_1 + 0x9c) = fStack_1e4;
    *(float *)(param_1 + 0xa0) = fStack_1e0;
    *(float *)(param_1 + 0xa4) = fStack_1dc;
    *(float *)(param_1 + 200) = fStack_1e8;
    *(float *)(param_1 + 0xcc) = fStack_1e4;
    *(float *)(param_1 + 0xd0) = fStack_1e0;
    *(float *)(param_1 + 0xd4) = fStack_1dc;
    *(float *)(param_1 + 0xa8) = fStack_208;
    *(float *)(param_1 + 0xac) = fStack_1d4;
    *(float *)(param_1 + 0xb0) = fStack_1d0;
    *(float *)(param_1 + 0xb4) = fStack_1cc;
    *(float *)(param_1 + 0xd8) = fStack_208;
    *(float *)(param_1 + 0xdc) = fStack_1d4;
    *(float *)(param_1 + 0xe0) = fStack_1d0;
    *(float *)(param_1 + 0xe4) = fStack_1cc;
    *(uint64_t *)(param_1 + 0x68) = uVar7;
    *(uint64_t *)(param_1 + 0x70) = uVar8;
    *(float *)(param_1 + 0xb8) = fStack_1c8;
    *(float *)(param_1 + 0xbc) = fStack_1c4;
    *(float *)(param_1 + 0xc0) = fStack_1c0;
    *(float *)(param_1 + 0xc4) = fStack_1bc;
    *(float *)(param_1 + 0xe8) = fStack_1c8;
    *(float *)(param_1 + 0xec) = fStack_1c4;
    *(float *)(param_1 + 0xf0) = fStack_1c0;
    *(float *)(param_1 + 0xf4) = fStack_1bc;
    goto LAB_18057b795;
  }
  if (*(int *)(param_1 + 0x104) == 0) {
    fStack_218 = *(float *)(param_1 + 200);
    fStack_214 = *(float *)(param_1 + 0xcc);
    fStack_210 = *(float *)(param_1 + 0xd0);
    uStack_20c = *(int32_t *)(param_1 + 0xd4);
  }
  else if (*(int *)(param_1 + 0x104) == 1) {
    fStack_218 = *(float *)(param_1 + 0xd8);
    fStack_214 = *(float *)(param_1 + 0xdc);
    fStack_210 = *(float *)(param_1 + 0xe0);
    uStack_20c = *(int32_t *)(param_1 + 0xe4);
  }
  else {
    fStack_218 = *(float *)(param_1 + 0xe8);
    fStack_214 = *(float *)(param_1 + 0xec);
    fStack_210 = *(float *)(param_1 + 0xf0);
    uStack_20c = *(int32_t *)(param_1 + 0xf4);
  }
  fStack_18c = fStack_1bc;
  uStack_188 = uStack_1b8;
  uStack_180 = uStack_1b0;
  fStack_168 = fStack_1e8;
  fStack_164 = fStack_1e4;
  fStack_160 = fStack_1e0;
  fStack_15c = fStack_1dc;
  FUN_1801c1720(param_1 + 0x98,&fStack_198);
  FUN_1801c1720(&fStack_1e8,&uStack_188);
  fVar31 = (float)uStack_180 - fStack_190;
  if (fVar31 <= 3.1415927) {
    if (fVar31 < -3.1415927) {
      fVar31 = fVar31 + 6.2831855;
    }
  }
  else {
    fVar31 = fVar31 + -6.2831855;
  }
  fVar27 = *(float *)(param_1 + 0xf8);
  lVar23 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x168);
  fVar33 = (float)uStack_1b8 - *(float *)(lVar23 + 0xa0);
  fVar29 = uStack_1b8._4_4_ - *(float *)(lVar23 + 0xa4);
  fStack_210 = (fStack_210 * fVar27 + *(float *)(param_1 + 0x70)) - (float)uStack_1b0;
  fVar26 = fVar33 * fVar33 + fVar29 * fVar29;
  fVar26 = (float)(fVar26 <= 1.1754944e-38) * 1.1754944e-38 + fVar26;
  auVar30 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
  fVar28 = auVar30._0_4_;
  fVar26 = fVar28 * 0.5 * (3.0 - fVar26 * fVar28 * fVar28);
  uStack_108 = *(uint64_t *)(param_1 + 0xd8);
  uStack_100 = *(uint64_t *)(param_1 + 0xe0);
  uStack_118 = *(uint64_t *)(param_1 + 200);
  uStack_110 = *(uint64_t *)(param_1 + 0xd0);
  fStack_218 = (fStack_218 * fVar27 + *(float *)(param_1 + 0x68) +
               fVar26 * fVar33 * ABS(fVar31) * 0.2 * *(float *)(param_1 + 0xfc) * (1.0 / fVar27)) -
               (float)uStack_1b8;
  fStack_214 = (fStack_214 * fVar27 + *(float *)(param_1 + 0x6c) +
               fVar26 * fVar29 * ABS(fVar31) * 0.2 * *(float *)(param_1 + 0xfc) * (1.0 / fVar27)) -
               uStack_1b8._4_4_;
  fStack_f8 = *(float *)(param_1 + 0xe8);
  fStack_f4 = *(float *)(param_1 + 0xec);
  fStack_f0 = *(float *)(param_1 + 0xf0);
  fStack_ec = *(float *)(param_1 + 0xf4);
  uStack_20c = 0x7f7fffff;
  if (*(int *)(param_1 + 0x104) == 0) {
    fVar31 = fStack_218 * fStack_218 + fStack_214 * fStack_214 + fStack_210 * fStack_210;
    if (fVar31 <= 1e-09) {
      fVar31 = 0.0;
      fVar26 = 0.0;
      fVar27 = 1.0;
    }
    else {
      fVar31 = 1.0 / SQRT(fVar31);
      fVar26 = fStack_218 * fVar31;
      fVar27 = fStack_214 * fVar31;
      fVar31 = fStack_210 * fVar31;
    }
    fStack_218 = fStack_f4 * fVar31 - fStack_f0 * fVar27;
    uStack_110 = CONCAT44(0x7f7fffff,fVar31);
    fStack_214 = fStack_f0 * fVar26 - fStack_f8 * fVar31;
    uStack_118 = CONCAT44(fVar27,fVar26);
    fStack_210 = fStack_f8 * fVar27 - fStack_f4 * fVar26;
    uStack_20c = 0x7f7fffff;
    uStack_108 = CONCAT44(fStack_214,fStack_218);
    uStack_100 = CONCAT44(0x7f7fffff,fStack_210);
    if (1e-07 <= fStack_214 * fStack_214 + fStack_218 * fStack_218 + fStack_210 * fStack_210) {
      func_0x00018023a1e0(&uStack_108);
      fStack_214 = (float)uStack_108 * (float)uStack_110 - (float)uStack_100 * (float)uStack_118;
      fStack_218 = (float)uStack_100 * uStack_118._4_4_ - uStack_108._4_4_ * (float)uStack_110;
      fStack_210 = uStack_108._4_4_ * (float)uStack_118 - (float)uStack_108 * uStack_118._4_4_;
      fStack_ec = 3.4028235e+38;
      fVar27 = fStack_214 * fStack_214 + fStack_218 * fStack_218 + fStack_210 * fStack_210;
      auVar30 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
      fVar31 = auVar30._0_4_;
      fStack_f0 = fVar31 * 0.5 * (3.0 - fVar27 * fVar31 * fVar31);
      fStack_f4 = fStack_214 * fStack_f0;
      fStack_f8 = fStack_f0 * fStack_218;
      fStack_f0 = fStack_210 * fStack_f0;
    }
    else {
      fStack_218 = *(float *)(param_1 + 0xe0) * fVar27 - *(float *)(param_1 + 0xdc) * fVar31;
      fStack_214 = *(float *)(param_1 + 0xd8) * fVar31 - *(float *)(param_1 + 0xe0) * fVar26;
      fStack_210 = *(float *)(param_1 + 0xdc) * fVar26 - *(float *)(param_1 + 0xd8) * fVar27;
      uStack_20c = 0x7f7fffff;
      fStack_ec = 3.4028235e+38;
      fStack_f8 = fStack_218;
      fStack_f4 = fStack_214;
      fStack_f0 = fStack_210;
      func_0x00018023a1e0(&fStack_f8);
      fStack_218 = fStack_f4 * (float)uStack_110 - fStack_f0 * uStack_118._4_4_;
      fStack_210 = fStack_f8 * uStack_118._4_4_ - fStack_f4 * (float)uStack_118;
      fStack_214 = fStack_f0 * (float)uStack_118 - fStack_f8 * (float)uStack_110;
      fVar31 = fStack_218 * fStack_218 + fStack_214 * fStack_214 + fStack_210 * fStack_210;
      auVar30 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
      fVar27 = auVar30._0_4_;
      fVar31 = fVar27 * 0.5 * (3.0 - fVar31 * fVar27 * fVar27);
      uStack_108 = CONCAT44(fStack_214 * fVar31,fStack_218 * fVar31);
      uStack_100 = CONCAT44(0x7f7fffff,fStack_210 * fVar31);
    }
  }
  else if (*(int *)(param_1 + 0x104) == 1) {
    uStack_108 = CONCAT44(fStack_214,fStack_218);
    uStack_100 = CONCAT44(0x7f7fffff,fStack_210);
    func_0x00018023a1e0(&uStack_108);
    fStack_218 = (float)uStack_100 * uStack_118._4_4_ - uStack_108._4_4_ * (float)uStack_110;
    fStack_214 = (float)uStack_108 * (float)uStack_110 - (float)uStack_100 * (float)uStack_118;
    fStack_210 = uStack_108._4_4_ * (float)uStack_118 - (float)uStack_108 * uStack_118._4_4_;
    uStack_20c = 0x7f7fffff;
    fStack_ec = 3.4028235e+38;
    fStack_f8 = fStack_218;
    fStack_f4 = fStack_214;
    fStack_f0 = fStack_210;
    if (1e-07 <= fStack_218 * fStack_218 + fStack_214 * fStack_214 + fStack_210 * fStack_210) {
      func_0x00018023a1e0(&fStack_f8);
      fStack_218 = uStack_108._4_4_ * fStack_f0 - (float)uStack_100 * fStack_f4;
      fStack_214 = (float)uStack_100 * fStack_f8 - (float)uStack_108 * fStack_f0;
      fStack_210 = (float)uStack_108 * fStack_f4 - uStack_108._4_4_ * fStack_f8;
      fVar31 = fStack_214 * fStack_214 + fStack_218 * fStack_218 + fStack_210 * fStack_210;
LAB_18057b6d9:
      auVar30 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
      fVar27 = auVar30._0_4_;
      fVar31 = fVar27 * 0.5 * (3.0 - fVar31 * fVar27 * fVar27);
      uStack_118 = CONCAT44(fStack_214 * fVar31,fVar31 * fStack_218);
      uStack_110 = CONCAT44(0x7f7fffff,fStack_210 * fVar31);
    }
    else {
      fStack_218 = *(float *)(param_1 + 0xf0) * uStack_108._4_4_ -
                   *(float *)(param_1 + 0xec) * (float)uStack_100;
      fStack_214 = *(float *)(param_1 + 0xe8) * (float)uStack_100 -
                   *(float *)(param_1 + 0xf0) * (float)uStack_108;
      fStack_210 = *(float *)(param_1 + 0xec) * (float)uStack_108 -
                   *(float *)(param_1 + 0xe8) * uStack_108._4_4_;
      uStack_20c = 0x7f7fffff;
      uStack_118 = CONCAT44(fStack_214,fStack_218);
      uStack_110 = CONCAT44(0x7f7fffff,fStack_210);
      func_0x00018023a1e0(&uStack_118);
      fStack_214 = (float)uStack_108 * (float)uStack_110 - (float)uStack_100 * (float)uStack_118;
      fStack_218 = (float)uStack_100 * uStack_118._4_4_ - uStack_108._4_4_ * (float)uStack_110;
      fStack_210 = uStack_108._4_4_ * (float)uStack_118 - (float)uStack_108 * uStack_118._4_4_;
      fStack_ec = 3.4028235e+38;
      fVar27 = fStack_214 * fStack_214 + fStack_218 * fStack_218 + fStack_210 * fStack_210;
      auVar30 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
      fVar31 = auVar30._0_4_;
      fStack_f0 = fVar31 * 0.5 * (3.0 - fVar27 * fVar31 * fVar31);
      fStack_f4 = fStack_214 * fStack_f0;
      fStack_f8 = fStack_f0 * fStack_218;
      fStack_f0 = fStack_210 * fStack_f0;
    }
  }
  else {
    fStack_ec = 3.4028235e+38;
    fStack_f8 = fStack_218;
    fStack_f4 = fStack_214;
    fStack_f0 = fStack_210;
    func_0x00018023a1e0(&fStack_f8);
    fStack_218 = fStack_f4 * (float)uStack_110 - fStack_f0 * uStack_118._4_4_;
    fStack_214 = fStack_f0 * (float)uStack_118 - fStack_f8 * (float)uStack_110;
    fStack_210 = fStack_f8 * uStack_118._4_4_ - fStack_f4 * (float)uStack_118;
    uStack_20c = 0x7f7fffff;
    uStack_108 = CONCAT44(fStack_214,fStack_218);
    uStack_100 = CONCAT44(0x7f7fffff,fStack_210);
    if (1e-07 <= fStack_218 * fStack_218 + fStack_214 * fStack_214 + fStack_210 * fStack_210) {
      func_0x00018023a1e0(&uStack_108);
      fStack_218 = uStack_108._4_4_ * fStack_f0 - (float)uStack_100 * fStack_f4;
      fStack_210 = (float)uStack_108 * fStack_f4 - uStack_108._4_4_ * fStack_f8;
      fStack_214 = (float)uStack_100 * fStack_f8 - (float)uStack_108 * fStack_f0;
      fVar31 = fStack_218 * fStack_218 + fStack_214 * fStack_214 + fStack_210 * fStack_210;
      goto LAB_18057b6d9;
    }
    fStack_218 = *(float *)(param_1 + 0xdc) * fStack_f0 - *(float *)(param_1 + 0xe0) * fStack_f4;
    fStack_210 = *(float *)(param_1 + 0xd8) * fStack_f4 - *(float *)(param_1 + 0xdc) * fStack_f8;
    fStack_214 = *(float *)(param_1 + 0xe0) * fStack_f8 - *(float *)(param_1 + 0xd8) * fStack_f0;
    uStack_20c = 0x7f7fffff;
    uStack_118 = CONCAT44(fStack_214,fStack_218);
    uStack_110 = CONCAT44(0x7f7fffff,fStack_210);
    func_0x00018023a1e0(&uStack_118);
    fStack_218 = fStack_f4 * (float)uStack_110 - fStack_f0 * uStack_118._4_4_;
    fStack_210 = fStack_f8 * uStack_118._4_4_ - fStack_f4 * (float)uStack_118;
    fStack_214 = fStack_f0 * (float)uStack_118 - fStack_f8 * (float)uStack_110;
    fVar31 = fStack_218 * fStack_218 + fStack_214 * fStack_214 + fStack_210 * fStack_210;
    auVar30 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
    fVar27 = auVar30._0_4_;
    fVar31 = fVar27 * 0.5 * (3.0 - fVar31 * fVar27 * fVar27);
    uStack_108 = CONCAT44(fStack_214 * fVar31,fStack_218 * fVar31);
    uStack_100 = CONCAT44(0x7f7fffff,fStack_210 * fVar31);
  }
  uStack_20c = 0x7f7fffff;
  *(uint64_t *)(param_1 + 200) = uStack_118;
  *(uint64_t *)(param_1 + 0xd0) = uStack_110;
  *(uint64_t *)(param_1 + 0xd8) = uStack_108;
  *(uint64_t *)(param_1 + 0xe0) = uStack_100;
  *(ulonglong *)(param_1 + 0xe8) = CONCAT44(fStack_f4,fStack_f8);
  *(ulonglong *)(param_1 + 0xf0) = CONCAT44(fStack_ec,fStack_f0);
  fStack_198 = fStack_1c8;
  fStack_194 = fStack_1c4;
  fStack_190 = fStack_1c0;
LAB_18057b795:
  fVar18 = fStack_190;
  fVar17 = fStack_194;
  fVar16 = fStack_198;
  fVar15 = fStack_1bc;
  fVar14 = fStack_1d0;
  fVar13 = fStack_1d4;
  fVar12 = fStack_1d8;
  fVar11 = fStack_1e0;
  fVar10 = fStack_1e4;
  fVar9 = fStack_1e8;
  fVar31 = *(float *)(param_1 + 0xe8);
  fVar27 = *(float *)(param_1 + 0xec);
  fVar26 = *(float *)(param_1 + 0xf0);
  fVar28 = *(float *)(param_1 + 0xf4);
  fVar33 = *(float *)(param_1 + 0xd8);
  fVar29 = *(float *)(param_1 + 0xdc);
  fVar32 = *(float *)(param_1 + 0xe0);
  fVar34 = *(float *)(param_1 + 200);
  fVar35 = *(float *)(param_1 + 0xcc);
  fVar36 = *(float *)(param_1 + 0xd0);
  uStack_118 = CONCAT44(fStack_1e4 * fVar29 + fStack_1e8 * fVar33 + fStack_1e0 * fVar32,
                        fStack_1e4 * fVar35 + fStack_1e8 * fVar34 + fStack_1e0 * fVar36);
  uStack_110 = CONCAT44(fStack_1e4 * fVar28 + fStack_1e8 * fVar28 + fStack_1e0 * fVar28,
                        fStack_1e4 * fVar27 + fStack_1e8 * fVar31 + fStack_1e0 * fVar26);
  uStack_108 = CONCAT44(fStack_1d4 * fVar29 + fStack_1d8 * fVar33 + fStack_1d0 * fVar32,
                        fStack_1d4 * fVar35 + fStack_1d8 * fVar34 + fStack_1d0 * fVar36);
  uStack_100 = CONCAT44(fStack_1d4 * fVar28 + fStack_1d8 * fVar28 + fStack_1d0 * fVar28,
                        fStack_1d4 * fVar27 + fStack_1d8 * fVar31 + fStack_1d0 * fVar26);
  fStack_f8 = fStack_198 * fVar34 + fStack_194 * fVar35 + fStack_190 * fVar36;
  fStack_f4 = fStack_198 * fVar33 + fStack_194 * fVar29 + fStack_190 * fVar32;
  fStack_f0 = fStack_198 * fVar31 + fStack_194 * fVar27 + fStack_190 * fVar26;
  fStack_ec = fStack_198 * fVar28 + fStack_194 * fVar28 + fStack_190 * fVar28;
  fStack_1c8 = fStack_198;
  fStack_1c4 = fStack_194;
  fStack_1c0 = fStack_190;
  fStack_18c = fStack_1bc;
  uStack_188 = uStack_1b8;
  uStack_180 = uStack_1b0;
  fStack_168 = fStack_1e8;
  fStack_164 = fStack_1e4;
  fStack_160 = fStack_1e0;
  fStack_15c = fStack_1dc;
  FUN_1801c1720(&uStack_118,&fStack_218);
  fVar31 = *(float *)(param_2 + 0x38);
  lStack_178 = ((longlong)(char)bVar2 + -1) * 0x1b0;
  fVar36 = fStack_218 * 100.0 * fVar31 + *(float *)(param_1 + 0x58);
  fVar34 = fStack_214 * 100.0 * fVar31 + *(float *)(param_1 + 0x5c);
  fVar32 = fStack_210 * 100.0 * fVar31 + *(float *)(param_1 + 0x60);
  *(float *)(param_1 + 0x58) = fVar36;
  *(float *)(param_1 + 0x5c) = fVar34;
  *(float *)(param_1 + 0x60) = fVar32;
  iStack_200 = *(int *)(lStack_178 + 0x110 + *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x140));
  fVar27 = *(float *)(param_1 + 0x58);
  fVar26 = *(float *)(param_1 + 0x5c);
  fVar28 = *(float *)(param_1 + 0x60);
  lVar23 = (longlong)iStack_200 * 0x60 + *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x158);
  fVar29 = 1.0 - (*(float *)(lVar23 + 0x40) + *(float *)(lVar23 + 0x3c));
  fVar35 = fVar26 * fVar26 + fVar27 * fVar27 + fVar28 * fVar28;
  uStack_118 = 0x800000;
  uStack_110 = 0;
  fVar33 = fVar35;
  if (fVar35 <= 1.1754944e-38) {
    fVar33 = 1.1754944e-38;
  }
  fVar32 = SQRT(fVar36 * fVar36 + fVar34 * fVar34 + fVar32 * fVar32) * 17.5 * fVar29 * fVar31;
  fVar29 = fVar29 * 1.25 * fVar31;
  if (fVar32 <= fVar29) {
    fVar32 = fVar29;
  }
  auVar30 = rsqrtss(ZEXT416((uint)fVar33),ZEXT416((uint)fVar33));
  fVar29 = auVar30._0_4_;
  fVar33 = fVar29 * 0.5 * (3.0 - fVar33 * fVar29 * fVar29);
  if (fVar32 <= fVar33 * fVar35) {
    *(float *)(param_1 + 0x58) = fVar36 - fVar32 * fVar27 * fVar33;
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) - fVar32 * fVar26 * fVar33;
    fStack_208 = *(float *)(param_1 + 0x60) - fVar32 * fVar28 * fVar33;
    *(float *)(param_1 + 0x60) = fStack_208;
  }
  else {
    *(uint64_t *)(param_1 + 0x58) = 0;
    fStack_208 = 0.0;
    *(uint64_t *)(param_1 + 0x60) = 0;
  }
  fVar27 = *(float *)(param_1 + 0xcc);
  fVar26 = *(float *)(param_1 + 0xd0);
  fVar28 = *(float *)(param_1 + 0xdc);
  fVar33 = *(float *)(param_1 + 200);
  fVar29 = *(float *)(param_1 + 0xd8);
  fStack_148 = fVar27 * fVar10 + fVar33 * fVar9 + fVar26 * fVar11;
  fStack_144 = fVar27 * fVar13 + fVar33 * fVar12 + fVar26 * fVar14;
  fStack_140 = fVar27 * fVar17 + fVar33 * fVar16 + fVar26 * fVar18;
  fStack_13c = fVar27 * fVar15 + fVar33 * fVar15 + fVar26 * fVar15;
  fVar27 = *(float *)(param_1 + 0xe0);
  fVar26 = *(float *)(param_1 + 0xe8);
  fVar33 = *(float *)(param_1 + 0xec);
  fStack_138 = fVar28 * fVar10 + fVar29 * fVar9 + fVar27 * fVar11;
  fStack_134 = fVar28 * fVar13 + fVar29 * fVar12 + fVar27 * fVar14;
  fStack_130 = fVar28 * fVar17 + fVar29 * fVar16 + fVar27 * fVar18;
  fStack_12c = fVar28 * fVar15 + fVar29 * fVar15 + fVar27 * fVar15;
  fVar27 = *(float *)(param_1 + 0xf0);
  fStack_128 = fVar33 * fVar10 + fVar26 * fVar9 + fVar27 * fVar11;
  fStack_124 = fVar33 * fVar13 + fVar26 * fVar12 + fVar27 * fVar14;
  fStack_120 = fVar33 * fVar17 + fVar26 * fVar16 + fVar27 * fVar18;
  fStack_11c = fVar33 * fVar15 + fVar26 * fVar15 + fVar27 * fVar15;
  fStack_1f8 = fVar31;
  FUN_18063b470(&fStack_218,&fStack_148);
                    // WARNING: Subroutine does not return
  FUN_1808fd400(fVar31 * *(float *)(param_1 + 0x58) * 0.5);
}





