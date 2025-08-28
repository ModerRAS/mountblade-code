#include "TaleWorlds.Native.Split.h"

// 99_part_05_part004.c - 3 个函数

// 函数: void FUN_1802d6c70(int64_t param_1,int64_t param_2,int param_3,float *param_4)
void FUN_1802d6c70(int64_t param_1,int64_t param_2,int param_3,float *param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  float fVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  uint64_t uVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint64_t uVar19;
  int iVar20;
  uint uVar21;
  int64_t lVar22;
  int64_t lVar23;
  int iVar24;
  uint uVar25;
  uint64_t *puVar26;
  int64_t lVar27;
  uint64_t *puVar28;
  uint64_t *puVar29;
  float *pfVar30;
  uint uVar31;
  uint64_t uVar32;
  uint uVar33;
  uint64_t *puVar34;
  uint64_t *puVar35;
  float *pfVar36;
  uint64_t *puVar37;
  int64_t lVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fStack_f4;
  
  lVar7 = *(int64_t *)(param_2 + 0x48);
  lVar27 = *(int64_t *)(*(int64_t *)(param_1 + 0x310) + 0x10);
  uVar5 = *(uint *)(lVar7 + 0x68);
  cVar3 = *(char *)(param_2 + 0xa1);
  if ((*(int *)(lVar7 + 0xfc4) < 1) || (*(int *)(lVar7 + 0xfc8) < 1)) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
  }
  lVar38 = (int64_t)(int)((*(int64_t *)(param_2 + 0x60) - *(int64_t *)(param_2 + 0x58)) / 0x70);
  plVar1 = (int64_t *)(param_2 + 0xf8);
  FUN_1802ab620(plVar1,lVar38);
  lVar22 = *(int64_t *)(param_2 + 0x138) - *(int64_t *)(param_2 + 0x130);
  lVar23 = lVar22 >> 0x3f;
  if (lVar22 / 0xc + lVar23 == lVar23) {
    iVar24 = 0;
    lVar23 = 0;
    if (3 < lVar38) {
      lVar22 = 0;
      iVar20 = 2;
      do {
        *(int *)(*plVar1 + lVar23 * 8) = iVar24;
        iVar24 = iVar24 + 4;
        lVar9 = *(int64_t *)(param_2 + 0x58);
        fVar41 = *(float *)(lVar22 + 4 + lVar9) - param_4[1];
        fVar39 = *(float *)(lVar22 + lVar9) - *param_4;
        fVar45 = *(float *)(lVar22 + 8 + lVar9) - param_4[2];
        *(float *)(*plVar1 + 4 + lVar23 * 8) = fVar41 * fVar41 + fVar39 * fVar39 + fVar45 * fVar45;
        *(int *)(*plVar1 + 8 + lVar23 * 8) = iVar20 + -1;
        iVar16 = iVar20 + 1;
        lVar9 = *(int64_t *)(param_2 + 0x58);
        fVar41 = *(float *)(lVar9 + 0x74 + lVar22) - param_4[1];
        fVar39 = *(float *)(lVar9 + 0x70 + lVar22) - *param_4;
        fVar45 = *(float *)(lVar9 + 0x78 + lVar22) - param_4[2];
        *(float *)(*plVar1 + 0xc + lVar23 * 8) = fVar41 * fVar41 + fVar39 * fVar39 + fVar45 * fVar45
        ;
        *(int *)(*plVar1 + 0x10 + lVar23 * 8) = iVar20;
        iVar20 = iVar20 + 4;
        lVar9 = *(int64_t *)(param_2 + 0x58);
        fVar41 = *(float *)(lVar9 + 0xe4 + lVar22) - param_4[1];
        fVar39 = *(float *)(lVar9 + 0xe0 + lVar22) - *param_4;
        fVar45 = *(float *)(lVar9 + 0xe8 + lVar22) - param_4[2];
        *(float *)(*plVar1 + 0x14 + lVar23 * 8) =
             fVar41 * fVar41 + fVar39 * fVar39 + fVar45 * fVar45;
        *(int *)(*plVar1 + 0x18 + lVar23 * 8) = iVar16;
        lVar10 = *(int64_t *)(param_2 + 0x58);
        lVar9 = lVar22 + 0x150;
        fVar41 = *(float *)(lVar22 + 0x154 + lVar10) - param_4[1];
        lVar2 = lVar22 + 0x158;
        lVar22 = lVar22 + 0x1c0;
        fVar39 = *(float *)(lVar9 + lVar10) - *param_4;
        fVar45 = *(float *)(lVar2 + lVar10) - param_4[2];
        *(float *)(*plVar1 + 0x1c + lVar23 * 8) =
             fVar41 * fVar41 + fVar39 * fVar39 + fVar45 * fVar45;
        lVar23 = lVar23 + 4;
      } while (lVar23 < lVar38 + -3);
    }
    if (lVar23 < lVar38) {
      lVar22 = lVar23 * 0x70;
      do {
        *(int *)(*plVar1 + lVar23 * 8) = iVar24;
        iVar24 = iVar24 + 1;
        lVar2 = *(int64_t *)(param_2 + 0x58);
        pfVar30 = (float *)(lVar22 + lVar2);
        fVar41 = *(float *)(lVar22 + 4 + lVar2) - param_4[1];
        lVar9 = lVar22 + 8;
        lVar22 = lVar22 + 0x70;
        fVar39 = *pfVar30 - *param_4;
        fVar45 = *(float *)(lVar9 + lVar2) - param_4[2];
        *(float *)(*plVar1 + 4 + lVar23 * 8) = fVar41 * fVar41 + fVar39 * fVar39 + fVar45 * fVar45;
        lVar23 = lVar23 + 1;
      } while (lVar23 < lVar38);
    }
    puVar11 = *(uint64_t **)(param_2 + 0x100);
    puVar35 = (uint64_t *)*plVar1;
    if (puVar35 != puVar11) {
      iVar24 = 0;
      lVar22 = (int64_t)puVar11 - (int64_t)puVar35 >> 3;
      for (lVar23 = lVar22; lVar23 != 0; lVar23 = lVar23 >> 1) {
        iVar24 = iVar24 + 1;
      }
      FUN_1802da5e0(puVar35,puVar11,(int64_t)(iVar24 + -1) * 2,0);
      if (lVar22 < 0x1d) {
        func_0x0001802d9f80(puVar35,puVar11);
      }
      else {
        puVar29 = puVar35 + 0x1c;
        func_0x0001802d9f80(puVar35,puVar29);
        if (puVar29 != puVar11) {
          puVar35 = puVar35 + 0x1b;
          do {
            uVar12 = *puVar29;
            pfVar30 = (float *)((int64_t)puVar35 + 4);
            fStack_f4 = (float)((uint64_t)uVar12 >> 0x20);
            puVar26 = puVar29;
            if (*pfVar30 <= fStack_f4 && fStack_f4 != *pfVar30) {
              do {
                pfVar30 = pfVar30 + -2;
                *puVar26 = *(uint64_t *)
                            ((int64_t)puVar26 + ((int64_t)puVar35 - (int64_t)puVar29));
                puVar26 = puVar26 + -1;
              } while (*pfVar30 <= fStack_f4 && fStack_f4 != *pfVar30);
            }
            puVar29 = puVar29 + 1;
            *puVar26 = uVar12;
            puVar35 = puVar35 + 1;
          } while (puVar29 != puVar11);
        }
      }
    }
  }
  else {
    iVar24 = 0;
    if (0 < lVar38) {
      lVar23 = 0;
      do {
        *(int *)(*plVar1 + lVar23 * 8) = iVar24;
        iVar24 = iVar24 + 1;
        lVar23 = lVar23 + 1;
      } while (lVar23 < lVar38);
    }
    puVar8 = *(uint64_t **)(param_2 + 0x100);
    puVar34 = (uint64_t *)*plVar1;
    if (puVar34 != puVar8) {
      iVar24 = 0;
      lVar22 = (int64_t)puVar8 - (int64_t)puVar34 >> 3;
      for (lVar23 = lVar22; lVar23 != 0; lVar23 = lVar23 >> 1) {
        iVar24 = iVar24 + 1;
      }
      FUN_1802da450(puVar34,puVar8,(int64_t)(iVar24 + -1) * 2,param_2);
      if (lVar22 < 0x1d) {
        FUN_1802d9ee0(puVar34,puVar8,param_2);
      }
      else {
        puVar28 = puVar34 + 0x1c;
        FUN_1802d9ee0(puVar34,puVar28,param_2);
        for (; puVar28 != puVar8; puVar28 = puVar28 + 1) {
          puVar34 = puVar28 + -1;
          uVar19 = *puVar28;
          puVar37 = puVar28;
          if (*(short *)((uVar19 & 0xffffffff) * 0x70 + 0x30 + *(int64_t *)(param_2 + 0x58)) <
              *(short *)((uint64_t)(uint)puVar28[-1] * 0x70 + 0x30 + *(int64_t *)(param_2 + 0x58))
             ) {
            do {
              uVar32 = *puVar34;
              puVar34 = puVar34 + -1;
              *puVar37 = uVar32;
              puVar37 = puVar37 + -1;
            } while (*(short *)(*(int64_t *)(param_2 + 0x58) + 0x30 + (uVar19 & 0xffffffff) * 0x70)
                     < *(short *)((uint64_t)(uint)*puVar34 * 0x70 + 0x30 +
                                 *(int64_t *)(param_2 + 0x58)));
          }
          *puVar37 = uVar19;
        }
      }
    }
  }
  if (0 < lVar38) {
    lVar23 = 0;
    pfVar30 = (float *)(lVar27 + ((int64_t)param_3 * 9 + 1) * 8);
    do {
      iVar24 = 0x31;
      pfVar36 = (float *)((int64_t)*(int *)(*plVar1 + lVar23 * 8) * 0x70 +
                         *(int64_t *)(param_2 + 0x58));
      if (*(char *)(param_2 + 0xa1) == '\0') {
        pfVar30[-2] = *pfVar36;
        pfVar30[-1] = pfVar36[1];
        *pfVar30 = pfVar36[2];
      }
      else {
        fVar42 = *(float *)(param_2 + 0xc4);
        fVar43 = *(float *)(param_2 + 200);
        fVar45 = pfVar36[1];
        fVar46 = *(float *)(param_2 + 0xb4);
        fVar44 = *(float *)(param_2 + 0xb8);
        fVar39 = *pfVar36;
        fVar41 = pfVar36[2];
        fVar6 = *(float *)(param_2 + 0xd4);
        fVar40 = *(float *)(param_2 + 0xd8);
        fVar13 = *(float *)(param_2 + 0xe4);
        fVar14 = *(float *)(param_2 + 0xe8);
        pfVar30[-2] = *(float *)(param_2 + 0xc0) * fVar45 + *(float *)(param_2 + 0xb0) * fVar39 +
                      *(float *)(param_2 + 0xd0) * fVar41 + *(float *)(param_2 + 0xe0);
        *pfVar30 = fVar43 * fVar45 + fVar44 * fVar39 + fVar40 * fVar41 + fVar14;
        pfVar30[-1] = fVar42 * fVar45 + fVar46 * fVar39 + fVar6 * fVar41 + fVar13;
      }
      pfVar30[0xe] = pfVar36[0x17];
      pfVar30[1] = pfVar36[3];
      pfVar30[4] = pfVar36[0xb];
      pfVar30[0xb] = pfVar36[0x18];
      pfVar30[0xc] = pfVar36[0x19];
      pfVar30[0xd] = pfVar36[0x1a];
      fVar45 = *pfVar36 - pfVar36[4];
      if (cVar3 == '\0') {
        pfVar30[7] = fVar45;
        fVar41 = pfVar36[1] - pfVar36[5];
        pfVar30[8] = fVar41;
        fVar39 = pfVar36[2] - pfVar36[6];
        pfVar30[9] = fVar39;
      }
      else {
        fVar39 = pfVar36[1] - pfVar36[5];
        fVar43 = pfVar36[2] - pfVar36[6];
        fVar41 = *(float *)(param_2 + 0xb4) * fVar45;
        fVar42 = *(float *)(param_2 + 0xb8) * fVar45;
        fVar45 = *(float *)(param_2 + 0xc0) * fVar39 + *(float *)(param_2 + 0xb0) * fVar45 +
                 *(float *)(param_2 + 0xd0) * fVar43;
        fVar41 = *(float *)(param_2 + 0xc4) * fVar39 + fVar41 + *(float *)(param_2 + 0xd4) * fVar43;
        fVar39 = *(float *)(param_2 + 200) * fVar39 + fVar42 + *(float *)(param_2 + 0xd8) * fVar43;
        pfVar30[7] = fVar45;
        pfVar30[8] = fVar41;
        pfVar30[9] = fVar39;
      }
      pfVar30[9] = fVar39 * 60.0;
      pfVar30[7] = fVar45 * 60.0;
      pfVar30[8] = fVar41 * 60.0;
      fVar45 = pfVar36[9];
      fVar39 = pfVar36[8];
      fVar41 = fVar45 * 49.0;
      pfVar30[5] = *(float *)(param_2 + 0xa4);
      if (*(int *)(lVar7 + 0x10c) == 0) {
        iVar16 = (int)fVar41;
        iVar20 = (int)(fVar41 + 1.0);
        fVar41 = fVar41 - (float)iVar16;
        if (iVar20 < 0) {
          iVar20 = 0;
        }
        else if (0x31 < iVar20) {
          iVar20 = iVar24;
        }
        lVar27 = (int64_t)iVar20;
        if (iVar16 < 0) {
          iVar16 = 0;
        }
        else if (0x31 < iVar16) {
          iVar16 = iVar24;
        }
        fVar6 = pfVar36[0x11];
        lVar22 = (int64_t)iVar16;
        fVar42 = *(float *)(lVar7 + 0xbf0 + lVar22 * 0x10);
        fVar43 = *(float *)(lVar7 + 0xbf4 + lVar22 * 0x10);
        fVar42 = (*(float *)(lVar7 + 0xbf0 + lVar27 * 0x10) - fVar42) * fVar41 + fVar42;
        fVar46 = *(float *)(lVar7 + 0xbf8 + lVar22 * 0x10);
        fVar43 = (*(float *)(lVar7 + 0xbf4 + lVar27 * 0x10) - fVar43) * fVar41 + fVar43;
        fVar44 = *(float *)(lVar7 + 0xbfc + lVar22 * 0x10);
        fVar46 = (*(float *)(lVar7 + 0xbf8 + lVar27 * 0x10) - fVar46) * fVar41 + fVar46;
        fVar44 = (*(float *)(lVar7 + 0xbfc + lVar27 * 0x10) - fVar44) * fVar41 + fVar44;
        if (fVar6 != -NAN) {
          fVar41 = (float)((uint)fVar6 >> 0x10 & 0xff);
          fVar40 = (float)((uint)fVar6 >> 8 & 0xff);
          fVar46 = (float)((uint)fVar6 & 0xff) * (float)((uint)fVar6 & 0xff) * 1.5378702e-05 *
                   fVar46;
          fVar42 = fVar41 * fVar41 * 1.5378702e-05 * fVar42;
          fVar43 = fVar40 * fVar40 * 1.5378702e-05 * fVar43;
        }
      }
      else {
        fVar46 = pfVar36[0x11];
        iVar20 = (int)(fVar41 + 1.0);
        fVar42 = (float)((uint)fVar46 >> 0x10 & 0xff) * 0.003921569;
        iVar16 = (int)fVar41;
        fVar43 = (float)((uint)fVar46 >> 8 & 0xff) * 0.003921569;
        fVar46 = (float)((uint)fVar46 & 0xff) * 0.003921569;
        if (iVar20 < 0) {
          iVar20 = 0;
        }
        else if (0x31 < iVar20) {
          iVar20 = iVar24;
        }
        if (iVar16 < 0) {
          iVar17 = 0;
        }
        else {
          iVar17 = iVar16;
          if (0x31 < iVar16) {
            iVar17 = iVar24;
          }
        }
        fVar44 = *(float *)(lVar7 + 0xbfc + (int64_t)iVar17 * 0x10);
        fVar44 = (*(float *)(lVar7 + 0xbfc + (int64_t)iVar20 * 0x10) - fVar44) *
                 (fVar41 - (float)iVar16) + fVar44;
      }
      pfVar30[0xf] = pfVar36[0x1b];
      uVar18 = (uint)(int64_t)(fVar44 * 255.9);
      uVar33 = 0xff;
      if (uVar18 < 0xff) {
        uVar33 = uVar18;
      }
      uVar21 = (uint)(int64_t)(fVar42 * 255.9);
      uVar18 = 0xff;
      if (uVar21 < 0xff) {
        uVar18 = uVar21;
      }
      uVar25 = (uint)(int64_t)(fVar43 * 255.9);
      uVar21 = 0xff;
      if (uVar25 < 0xff) {
        uVar21 = uVar25;
      }
      uVar31 = (uint)(int64_t)(fVar46 * 255.9);
      uVar25 = 0xff;
      if (uVar31 < 0xff) {
        uVar25 = uVar31;
      }
      pfVar30[6] = (float)(((uVar33 << 8 | uVar18) << 8 | uVar21) << 8 | uVar25);
      if (((uVar5 >> 4 & 1) == 0) || (!bVar15)) {
        if (((uVar5 >> 0xb & 1) == 0) || (!bVar15)) {
          pfVar30[2] = 0.0;
          fVar45 = 0.0;
        }
        else {
          iVar24 = *(int *)(lVar7 + 0xfc4);
          sVar4 = *(short *)((int64_t)pfVar36 + 0x32);
          iVar20 = *(int *)(lVar7 + 0xfc8);
          pfVar30[2] = (float)((int)sVar4 % iVar24) / (float)iVar24;
          fVar45 = (float)((int)sVar4 / iVar24) / (float)iVar20;
        }
      }
      else {
        uVar33 = *(uint *)(lVar7 + 0xfcc);
        uVar19 = (uint64_t)uVar33;
        fVar39 = fVar39 * fVar45 * *(float *)(lVar7 + 0xfd0) +
                 (float)(int)*(short *)((int64_t)pfVar36 + 0x32);
        if ((uVar5 >> 0x16 & 1) == 0) {
          uVar32 = (uint64_t)fVar39;
          if ((uVar5 >> 3 & 1) == 0) {
            uVar19 = (uint64_t)(uVar33 - 1);
            if ((uint)uVar32 < uVar33 - 1) {
              uVar19 = uVar32 & 0xffffffff;
            }
          }
          else {
            uVar19 = (uVar32 & 0xffffffff) % uVar19;
          }
          uVar33 = *(uint *)(lVar7 + 0xfc4);
          fVar45 = (float)(uVar19 / uVar33) / (float)*(int *)(lVar7 + 0xfc8);
          pfVar30[2] = (float)(uVar19 % (uint64_t)uVar33) / (float)(int)uVar33;
        }
        else if ((uVar5 >> 3 & 1) == 0) {
          fVar45 = 0.0;
          fVar41 = (float)(uVar33 - 1);
          if (fVar39 <= (float)(uVar33 - 1)) {
            fVar41 = fVar39;
          }
          pfVar30[2] = fVar41;
        }
        else {
          fVar39 = (float)fmodf(uVar19,(float)uVar19);
          fVar45 = 0.0;
          pfVar30[2] = fVar39;
        }
      }
      pfVar30[3] = fVar45;
      lVar23 = lVar23 + 1;
      pfVar30 = pfVar30 + 0x12;
    } while (lVar23 < lVar38);
  }
  return;
}






// 函数: void FUN_1802d7151(int64_t param_1)
void FUN_1802d7151(int64_t param_1)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int64_t lVar13;
  int64_t unaff_RBX;
  float *pfVar14;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int iVar15;
  uint uVar16;
  uint64_t uVar17;
  uint uVar18;
  float *pfVar19;
  int64_t *unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  char unaff_R15B;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  char cStackX_20;
  char cStackX_24;
  char in_stack_00000028;
  char in_stack_00000130;
  char in_stack_00000140;
  
  iVar15 = (int)unaff_R14 + 0x31;
  pfVar14 = (float *)(param_1 + unaff_RBX * 8);
  do {
    pfVar19 = (float *)((int64_t)*(int *)(*unaff_R12 + unaff_R14 * 8) * 0x70 +
                       *(int64_t *)(unaff_RDI + 0x58));
    if (*(char *)(unaff_RDI + 0xa1) == '\0') {
      pfVar14[-2] = *pfVar19;
      pfVar14[-1] = pfVar19[1];
      *pfVar14 = pfVar19[2];
    }
    else {
      fVar23 = *(float *)(unaff_RDI + 0xc4);
      fVar24 = *(float *)(unaff_RDI + 200);
      fVar26 = pfVar19[1];
      fVar27 = *(float *)(unaff_RDI + 0xb4);
      fVar25 = *(float *)(unaff_RDI + 0xb8);
      fVar20 = *pfVar19;
      fVar22 = pfVar19[2];
      fVar2 = *(float *)(unaff_RDI + 0xd4);
      fVar21 = *(float *)(unaff_RDI + 0xd8);
      fVar3 = *(float *)(unaff_RDI + 0xe4);
      fVar4 = *(float *)(unaff_RDI + 0xe8);
      pfVar14[-2] = *(float *)(unaff_RDI + 0xc0) * fVar26 + *(float *)(unaff_RDI + 0xb0) * fVar20 +
                    *(float *)(unaff_RDI + 0xd0) * fVar22 + *(float *)(unaff_RDI + 0xe0);
      *pfVar14 = fVar24 * fVar26 + fVar25 * fVar20 + fVar21 * fVar22 + fVar4;
      pfVar14[-1] = fVar23 * fVar26 + fVar27 * fVar20 + fVar2 * fVar22 + fVar3;
    }
    pfVar14[0xe] = pfVar19[0x17];
    pfVar14[1] = pfVar19[3];
    pfVar14[4] = pfVar19[0xb];
    pfVar14[0xb] = pfVar19[0x18];
    pfVar14[0xc] = pfVar19[0x19];
    pfVar14[0xd] = pfVar19[0x1a];
    fVar26 = *pfVar19 - pfVar19[4];
    if (in_stack_00000130 == '\0') {
      pfVar14[7] = fVar26;
      fVar22 = pfVar19[1] - pfVar19[5];
      pfVar14[8] = fVar22;
      fVar20 = pfVar19[2] - pfVar19[6];
      pfVar14[9] = fVar20;
    }
    else {
      fVar20 = pfVar19[1] - pfVar19[5];
      fVar24 = pfVar19[2] - pfVar19[6];
      fVar22 = *(float *)(unaff_RDI + 0xb4) * fVar26;
      fVar23 = *(float *)(unaff_RDI + 0xb8) * fVar26;
      fVar26 = *(float *)(unaff_RDI + 0xc0) * fVar20 + *(float *)(unaff_RDI + 0xb0) * fVar26 +
               *(float *)(unaff_RDI + 0xd0) * fVar24;
      fVar22 = *(float *)(unaff_RDI + 0xc4) * fVar20 + fVar22 +
               *(float *)(unaff_RDI + 0xd4) * fVar24;
      fVar20 = *(float *)(unaff_RDI + 200) * fVar20 + fVar23 + *(float *)(unaff_RDI + 0xd8) * fVar24
      ;
      pfVar14[7] = fVar26;
      pfVar14[8] = fVar22;
      pfVar14[9] = fVar20;
    }
    pfVar14[9] = fVar20 * 60.0;
    pfVar14[7] = fVar26 * 60.0;
    pfVar14[8] = fVar22 * 60.0;
    fVar26 = pfVar19[9];
    fVar20 = pfVar19[8];
    fVar22 = fVar26 * 49.0;
    pfVar14[5] = *(float *)(unaff_RDI + 0xa4);
    if (*(int *)(unaff_RSI + 0x10c) == 0) {
      iVar5 = (int)fVar22;
      iVar10 = (int)(fVar22 + 1.0);
      fVar22 = fVar22 - (float)iVar5;
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      else if (0x31 < iVar10) {
        iVar10 = iVar15;
      }
      lVar13 = (int64_t)iVar10;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0x31 < iVar5) {
        iVar5 = iVar15;
      }
      fVar2 = pfVar19[0x11];
      lVar8 = (int64_t)iVar5;
      fVar23 = *(float *)(unaff_RSI + 0xbf0 + lVar8 * 0x10);
      fVar24 = *(float *)(unaff_RSI + 0xbf4 + lVar8 * 0x10);
      fVar23 = (*(float *)(unaff_RSI + 0xbf0 + lVar13 * 0x10) - fVar23) * fVar22 + fVar23;
      fVar27 = *(float *)(unaff_RSI + 0xbf8 + lVar8 * 0x10);
      fVar24 = (*(float *)(unaff_RSI + 0xbf4 + lVar13 * 0x10) - fVar24) * fVar22 + fVar24;
      fVar25 = *(float *)(unaff_RSI + 0xbfc + lVar8 * 0x10);
      fVar27 = (*(float *)(unaff_RSI + 0xbf8 + lVar13 * 0x10) - fVar27) * fVar22 + fVar27;
      fVar25 = (*(float *)(unaff_RSI + 0xbfc + lVar13 * 0x10) - fVar25) * fVar22 + fVar25;
      if (fVar2 != -NAN) {
        fVar22 = (float)((uint)fVar2 >> 0x10 & 0xff);
        fVar21 = (float)((uint)fVar2 >> 8 & 0xff);
        fVar27 = (float)((uint)fVar2 & 0xff) * (float)((uint)fVar2 & 0xff) * 1.5378702e-05 * fVar27;
        fVar23 = fVar22 * fVar22 * 1.5378702e-05 * fVar23;
        fVar24 = fVar21 * fVar21 * 1.5378702e-05 * fVar24;
      }
    }
    else {
      fVar27 = pfVar19[0x11];
      iVar10 = (int)(fVar22 + 1.0);
      fVar23 = (float)((uint)fVar27 >> 0x10 & 0xff) * 0.003921569;
      iVar5 = (int)fVar22;
      fVar24 = (float)((uint)fVar27 >> 8 & 0xff) * 0.003921569;
      fVar27 = (float)((uint)fVar27 & 0xff) * 0.003921569;
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      else if (0x31 < iVar10) {
        iVar10 = iVar15;
      }
      if (iVar5 < 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = iVar5;
        if (0x31 < iVar5) {
          iVar6 = iVar15;
        }
      }
      fVar25 = *(float *)(unaff_RSI + 0xbfc + (int64_t)iVar6 * 0x10);
      fVar25 = (*(float *)(unaff_RSI + 0xbfc + (int64_t)iVar10 * 0x10) - fVar25) *
               (fVar22 - (float)iVar5) + fVar25;
    }
    pfVar14[0xf] = pfVar19[0x1b];
    uVar7 = (uint)(int64_t)(fVar25 * 255.9);
    uVar18 = 0xff;
    if (uVar7 < 0xff) {
      uVar18 = uVar7;
    }
    uVar11 = (uint)(int64_t)(fVar23 * 255.9);
    uVar7 = 0xff;
    if (uVar11 < 0xff) {
      uVar7 = uVar11;
    }
    uVar12 = (uint)(int64_t)(fVar24 * 255.9);
    uVar11 = 0xff;
    if (uVar12 < 0xff) {
      uVar11 = uVar12;
    }
    uVar16 = (uint)(int64_t)(fVar27 * 255.9);
    uVar12 = 0xff;
    if (uVar16 < 0xff) {
      uVar12 = uVar16;
    }
    pfVar14[6] = (float)(((uVar18 << 8 | uVar7) << 8 | uVar11) << 8 | uVar12);
    if ((cStackX_20 == '\0') || (in_stack_00000140 == '\0')) {
      if ((in_stack_00000028 == '\0') || (in_stack_00000140 == '\0')) {
        pfVar14[2] = 0.0;
        fVar26 = 0.0;
      }
      else {
        iVar15 = *(int *)(unaff_RSI + 0xfc4);
        sVar1 = *(short *)((int64_t)pfVar19 + 0x32);
        iVar10 = *(int *)(unaff_RSI + 0xfc8);
        pfVar14[2] = (float)((int)sVar1 % iVar15) / (float)iVar15;
        fVar26 = (float)((int)sVar1 / iVar15) / (float)iVar10;
      }
    }
    else {
      uVar18 = *(uint *)(unaff_RSI + 0xfcc);
      uVar9 = (uint64_t)uVar18;
      fVar20 = fVar20 * fVar26 * *(float *)(unaff_RSI + 0xfd0) +
               (float)(int)*(short *)((int64_t)pfVar19 + 0x32);
      if (cStackX_24 == '\0') {
        uVar17 = (uint64_t)fVar20;
        if (unaff_R15B == '\0') {
          uVar9 = (uint64_t)(uVar18 - 1);
          if ((uint)uVar17 < uVar18 - 1) {
            uVar9 = uVar17 & 0xffffffff;
          }
        }
        else {
          uVar9 = (uVar17 & 0xffffffff) % uVar9;
        }
        uVar18 = *(uint *)(unaff_RSI + 0xfc4);
        fVar26 = (float)(uVar9 / uVar18) / (float)*(int *)(unaff_RSI + 0xfc8);
        pfVar14[2] = (float)(uVar9 % (uint64_t)uVar18) / (float)(int)uVar18;
      }
      else if (unaff_R15B == '\0') {
        fVar26 = 0.0;
        fVar22 = (float)(uVar18 - 1);
        if (fVar20 <= (float)(uVar18 - 1)) {
          fVar22 = fVar20;
        }
        pfVar14[2] = fVar22;
      }
      else {
        fVar20 = (float)fmodf(uVar9,(float)uVar9);
        fVar26 = 0.0;
        pfVar14[2] = fVar20;
      }
    }
    pfVar14[3] = fVar26;
    unaff_R14 = unaff_R14 + 1;
    pfVar14 = pfVar14 + 0x12;
    iVar15 = 0x31;
  } while (unaff_R14 < unaff_R13);
  return;
}






// 函数: void FUN_1802d777b(void)
void FUN_1802d777b(void)

{
  return;
}






