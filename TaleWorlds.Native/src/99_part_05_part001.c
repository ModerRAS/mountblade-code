#include "TaleWorlds.Native.Split.h"

// 99_part_05_part001.c - 5 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_05.c - 500 个函数


// 函数: void FUN_1802d4760(longlong param_1,longlong param_2,int param_3,float *param_4)
void FUN_1802d4760(longlong param_1,longlong param_2,int param_3,float *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  short sVar3;
  uint uVar4;
  float fVar5;
  longlong lVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  uint uVar24;
  undefined8 *puVar25;
  longlong lVar26;
  ulonglong *puVar27;
  undefined8 *puVar28;
  float *pfVar29;
  uint uVar30;
  ulonglong uVar31;
  uint uVar32;
  ulonglong *puVar33;
  undefined8 *puVar34;
  float *pfVar35;
  ulonglong *puVar36;
  longlong lVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fStack_ec;
  
  lVar6 = *(longlong *)(param_2 + 0x48);
  lVar26 = *(longlong *)(*(longlong *)(param_1 + 0x310) + 0x10);
  uVar4 = *(uint *)(lVar6 + 0x68);
  if ((*(int *)(lVar6 + 0xfc4) < 1) || (*(int *)(lVar6 + 0xfc8) < 1)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  lVar37 = (longlong)(int)((*(longlong *)(param_2 + 0x60) - *(longlong *)(param_2 + 0x58)) / 0x70);
  plVar1 = (longlong *)(param_2 + 0xf8);
  FUN_1802ab620(plVar1,lVar37);
  lVar21 = *(longlong *)(param_2 + 0x138) - *(longlong *)(param_2 + 0x130);
  lVar22 = lVar21 >> 0x3f;
  if (lVar21 / 0xc + lVar22 == lVar22) {
    iVar23 = 0;
    lVar22 = 0;
    if (3 < lVar37) {
      lVar21 = 0;
      iVar19 = 2;
      do {
        *(int *)(*plVar1 + lVar22 * 8) = iVar23;
        iVar23 = iVar23 + 4;
        lVar8 = *(longlong *)(param_2 + 0x58);
        fVar40 = *(float *)(lVar21 + 4 + lVar8) - param_4[1];
        fVar45 = *(float *)(lVar21 + lVar8) - *param_4;
        fVar39 = *(float *)(lVar21 + 8 + lVar8) - param_4[2];
        *(float *)(*plVar1 + 4 + lVar22 * 8) = fVar40 * fVar40 + fVar45 * fVar45 + fVar39 * fVar39;
        *(int *)(*plVar1 + 8 + lVar22 * 8) = iVar19 + -1;
        iVar15 = iVar19 + 1;
        lVar8 = *(longlong *)(param_2 + 0x58);
        fVar40 = *(float *)(lVar8 + 0x74 + lVar21) - param_4[1];
        fVar45 = *(float *)(lVar8 + 0x70 + lVar21) - *param_4;
        fVar39 = *(float *)(lVar8 + 0x78 + lVar21) - param_4[2];
        *(float *)(*plVar1 + 0xc + lVar22 * 8) = fVar40 * fVar40 + fVar45 * fVar45 + fVar39 * fVar39
        ;
        *(int *)(*plVar1 + 0x10 + lVar22 * 8) = iVar19;
        iVar19 = iVar19 + 4;
        lVar8 = *(longlong *)(param_2 + 0x58);
        fVar40 = *(float *)(lVar8 + 0xe4 + lVar21) - param_4[1];
        fVar45 = *(float *)(lVar8 + 0xe0 + lVar21) - *param_4;
        fVar39 = *(float *)(lVar8 + 0xe8 + lVar21) - param_4[2];
        *(float *)(*plVar1 + 0x14 + lVar22 * 8) =
             fVar40 * fVar40 + fVar45 * fVar45 + fVar39 * fVar39;
        *(int *)(*plVar1 + 0x18 + lVar22 * 8) = iVar15;
        lVar9 = *(longlong *)(param_2 + 0x58);
        lVar8 = lVar21 + 0x150;
        fVar40 = *(float *)(lVar21 + 0x154 + lVar9) - param_4[1];
        lVar2 = lVar21 + 0x158;
        lVar21 = lVar21 + 0x1c0;
        fVar45 = *(float *)(lVar8 + lVar9) - *param_4;
        fVar39 = *(float *)(lVar2 + lVar9) - param_4[2];
        *(float *)(*plVar1 + 0x1c + lVar22 * 8) =
             fVar40 * fVar40 + fVar45 * fVar45 + fVar39 * fVar39;
        lVar22 = lVar22 + 4;
      } while (lVar22 < lVar37 + -3);
    }
    if (lVar22 < lVar37) {
      lVar21 = lVar22 * 0x70;
      do {
        *(int *)(*plVar1 + lVar22 * 8) = iVar23;
        iVar23 = iVar23 + 1;
        lVar2 = *(longlong *)(param_2 + 0x58);
        pfVar29 = (float *)(lVar21 + lVar2);
        fVar40 = *(float *)(lVar21 + 4 + lVar2) - param_4[1];
        lVar8 = lVar21 + 8;
        lVar21 = lVar21 + 0x70;
        fVar45 = *pfVar29 - *param_4;
        fVar39 = *(float *)(lVar8 + lVar2) - param_4[2];
        *(float *)(*plVar1 + 4 + lVar22 * 8) = fVar40 * fVar40 + fVar45 * fVar45 + fVar39 * fVar39;
        lVar22 = lVar22 + 1;
      } while (lVar22 < lVar37);
    }
    puVar10 = *(undefined8 **)(param_2 + 0x100);
    puVar34 = (undefined8 *)*plVar1;
    if (puVar34 != puVar10) {
      iVar23 = 0;
      lVar21 = (longlong)puVar10 - (longlong)puVar34 >> 3;
      for (lVar22 = lVar21; lVar22 != 0; lVar22 = lVar22 >> 1) {
        iVar23 = iVar23 + 1;
      }
      FUN_1802da5e0(puVar34,puVar10,(longlong)(iVar23 + -1) * 2,0);
      if (lVar21 < 0x1d) {
        func_0x0001802d9f80(puVar34,puVar10);
      }
      else {
        puVar28 = puVar34 + 0x1c;
        func_0x0001802d9f80(puVar34,puVar28);
        if (puVar28 != puVar10) {
          puVar34 = puVar34 + 0x1b;
          do {
            uVar11 = *puVar28;
            pfVar29 = (float *)((longlong)puVar34 + 4);
            fStack_ec = (float)((ulonglong)uVar11 >> 0x20);
            puVar25 = puVar28;
            if (*pfVar29 <= fStack_ec && fStack_ec != *pfVar29) {
              do {
                pfVar29 = pfVar29 + -2;
                *puVar25 = *(undefined8 *)
                            (((longlong)puVar34 - (longlong)puVar28) + (longlong)puVar25);
                puVar25 = puVar25 + -1;
              } while (*pfVar29 <= fStack_ec && fStack_ec != *pfVar29);
            }
            puVar28 = puVar28 + 1;
            *puVar25 = uVar11;
            puVar34 = puVar34 + 1;
          } while (puVar28 != puVar10);
        }
      }
    }
  }
  else {
    iVar23 = 0;
    if (0 < lVar37) {
      lVar22 = 0;
      do {
        *(int *)(*plVar1 + lVar22 * 8) = iVar23;
        iVar23 = iVar23 + 1;
        lVar22 = lVar22 + 1;
      } while (lVar22 < lVar37);
    }
    puVar7 = *(ulonglong **)(param_2 + 0x100);
    puVar33 = (ulonglong *)*plVar1;
    if (puVar33 != puVar7) {
      iVar23 = 0;
      lVar21 = (longlong)puVar7 - (longlong)puVar33 >> 3;
      for (lVar22 = lVar21; lVar22 != 0; lVar22 = lVar22 >> 1) {
        iVar23 = iVar23 + 1;
      }
      FUN_1802da450(puVar33,puVar7,(longlong)(iVar23 + -1) * 2,param_2);
      if (lVar21 < 0x1d) {
        FUN_1802d9ee0(puVar33,puVar7,param_2);
      }
      else {
        puVar27 = puVar33 + 0x1c;
        FUN_1802d9ee0(puVar33,puVar27,param_2);
        for (; puVar27 != puVar7; puVar27 = puVar27 + 1) {
          puVar33 = puVar27 + -1;
          uVar18 = *puVar27;
          puVar36 = puVar27;
          if (*(short *)((uVar18 & 0xffffffff) * 0x70 + 0x30 + *(longlong *)(param_2 + 0x58)) <
              *(short *)((ulonglong)(uint)*puVar33 * 0x70 + 0x30 + *(longlong *)(param_2 + 0x58))) {
            do {
              uVar31 = *puVar33;
              puVar33 = puVar33 + -1;
              *puVar36 = uVar31;
              puVar36 = puVar36 + -1;
            } while (*(short *)(*(longlong *)(param_2 + 0x58) + 0x30 + (uVar18 & 0xffffffff) * 0x70)
                     < *(short *)((ulonglong)(uint)*puVar33 * 0x70 + 0x30 +
                                 *(longlong *)(param_2 + 0x58)));
          }
          *puVar36 = uVar18;
        }
      }
    }
  }
  if (0 < lVar37) {
    lVar22 = 0;
    pfVar29 = (float *)(lVar26 + ((longlong)param_3 * 9 + 1) * 8);
    do {
      iVar23 = 0x31;
      pfVar35 = (float *)((longlong)*(int *)(*plVar1 + lVar22 * 8) * 0x70 +
                         *(longlong *)(param_2 + 0x58));
      if (*(char *)(param_2 + 0xa1) == '\0') {
        pfVar29[-2] = *pfVar35;
        pfVar29[-1] = pfVar35[1];
        *pfVar29 = pfVar35[2];
      }
      else {
        fVar42 = *(float *)(param_2 + 0xc4);
        fVar43 = *(float *)(param_2 + 200);
        fVar39 = pfVar35[1];
        fVar44 = *(float *)(param_2 + 0xb4);
        fVar41 = *(float *)(param_2 + 0xb8);
        fVar45 = *pfVar35;
        fVar40 = pfVar35[2];
        fVar5 = *(float *)(param_2 + 0xd4);
        fVar38 = *(float *)(param_2 + 0xd8);
        fVar12 = *(float *)(param_2 + 0xe4);
        fVar13 = *(float *)(param_2 + 0xe8);
        pfVar29[-2] = *(float *)(param_2 + 0xc0) * fVar39 + *(float *)(param_2 + 0xb0) * fVar45 +
                      *(float *)(param_2 + 0xd0) * fVar40 + *(float *)(param_2 + 0xe0);
        *pfVar29 = fVar43 * fVar39 + fVar41 * fVar45 + fVar38 * fVar40 + fVar13;
        pfVar29[-1] = fVar42 * fVar39 + fVar44 * fVar45 + fVar5 * fVar40 + fVar12;
      }
      pfVar29[0xe] = pfVar35[0x17];
      pfVar29[1] = pfVar35[3];
      pfVar29[4] = pfVar35[0xb];
      pfVar29[0xb] = pfVar35[0x18];
      pfVar29[0xc] = pfVar35[0x19];
      pfVar29[0xd] = pfVar35[0x1a];
      fVar39 = pfVar35[0xd];
      pfVar29[7] = fVar39;
      fVar45 = pfVar35[0xe];
      pfVar29[8] = fVar45;
      pfVar29[9] = pfVar35[0xf] * 60.0;
      pfVar29[7] = fVar39 * 60.0;
      pfVar29[8] = fVar45 * 60.0;
      fVar39 = pfVar35[9];
      fVar45 = pfVar35[8];
      fVar40 = fVar39 * 49.0;
      pfVar29[5] = *(float *)(param_2 + 0xa4);
      if (*(int *)(lVar6 + 0x10c) == 0) {
        iVar15 = (int)fVar40;
        iVar19 = (int)(fVar40 + 1.0);
        fVar40 = fVar40 - (float)iVar15;
        if (iVar19 < 0) {
          iVar19 = 0;
        }
        else if (0x31 < iVar19) {
          iVar19 = iVar23;
        }
        lVar26 = (longlong)iVar19;
        if (iVar15 < 0) {
          iVar15 = 0;
        }
        else if (0x31 < iVar15) {
          iVar15 = iVar23;
        }
        fVar5 = pfVar35[0x11];
        lVar21 = (longlong)iVar15;
        fVar42 = *(float *)(lVar6 + 0xbf0 + lVar21 * 0x10);
        fVar43 = *(float *)(lVar6 + 0xbf4 + lVar21 * 0x10);
        fVar42 = (*(float *)(lVar6 + 0xbf0 + lVar26 * 0x10) - fVar42) * fVar40 + fVar42;
        fVar44 = *(float *)(lVar6 + 0xbf8 + lVar21 * 0x10);
        fVar43 = (*(float *)(lVar6 + 0xbf4 + lVar26 * 0x10) - fVar43) * fVar40 + fVar43;
        fVar41 = *(float *)(lVar6 + 0xbfc + lVar21 * 0x10);
        fVar44 = (*(float *)(lVar6 + 0xbf8 + lVar26 * 0x10) - fVar44) * fVar40 + fVar44;
        fVar41 = (*(float *)(lVar6 + 0xbfc + lVar26 * 0x10) - fVar41) * fVar40 + fVar41;
        if (fVar5 != -NAN) {
          fVar40 = (float)((uint)fVar5 >> 0x10 & 0xff);
          fVar38 = (float)((uint)fVar5 >> 8 & 0xff);
          fVar44 = (float)((uint)fVar5 & 0xff) * (float)((uint)fVar5 & 0xff) * 1.5378702e-05 *
                   fVar44;
          fVar42 = fVar40 * fVar40 * 1.5378702e-05 * fVar42;
          fVar43 = fVar38 * fVar38 * 1.5378702e-05 * fVar43;
        }
      }
      else {
        fVar44 = pfVar35[0x11];
        iVar19 = (int)(fVar40 + 1.0);
        fVar42 = (float)((uint)fVar44 >> 0x10 & 0xff) * 0.003921569;
        iVar15 = (int)fVar40;
        fVar43 = (float)((uint)fVar44 >> 8 & 0xff) * 0.003921569;
        fVar44 = (float)((uint)fVar44 & 0xff) * 0.003921569;
        if (iVar19 < 0) {
          iVar19 = 0;
        }
        else if (0x31 < iVar19) {
          iVar19 = iVar23;
        }
        if (iVar15 < 0) {
          iVar16 = 0;
        }
        else {
          iVar16 = iVar15;
          if (0x31 < iVar15) {
            iVar16 = iVar23;
          }
        }
        fVar41 = *(float *)(lVar6 + 0xbfc + (longlong)iVar16 * 0x10);
        fVar41 = (*(float *)(lVar6 + 0xbfc + (longlong)iVar19 * 0x10) - fVar41) *
                 (fVar40 - (float)iVar15) + fVar41;
      }
      pfVar29[0xf] = pfVar35[0x1b];
      uVar17 = (uint)(longlong)(fVar41 * 255.9);
      uVar32 = 0xff;
      if (uVar17 < 0xff) {
        uVar32 = uVar17;
      }
      uVar20 = (uint)(longlong)(fVar42 * 255.9);
      uVar17 = 0xff;
      if (uVar20 < 0xff) {
        uVar17 = uVar20;
      }
      uVar24 = (uint)(longlong)(fVar43 * 255.9);
      uVar20 = 0xff;
      if (uVar24 < 0xff) {
        uVar20 = uVar24;
      }
      uVar30 = (uint)(longlong)(fVar44 * 255.9);
      uVar24 = 0xff;
      if (uVar30 < 0xff) {
        uVar24 = uVar30;
      }
      pfVar29[6] = (float)(((uVar32 << 8 | uVar17) << 8 | uVar20) << 8 | uVar24);
      if (((uVar4 >> 4 & 1) == 0) || (!bVar14)) {
        if (((uVar4 >> 0xb & 1) == 0) || (!bVar14)) {
          pfVar29[2] = 0.0;
          fVar39 = 0.0;
        }
        else {
          iVar23 = *(int *)(lVar6 + 0xfc4);
          sVar3 = *(short *)((longlong)pfVar35 + 0x32);
          iVar19 = *(int *)(lVar6 + 0xfc8);
          pfVar29[2] = (float)((int)sVar3 % iVar23) / (float)iVar23;
          fVar39 = (float)((int)sVar3 / iVar23) / (float)iVar19;
        }
      }
      else {
        uVar32 = *(uint *)(lVar6 + 0xfcc);
        uVar18 = (ulonglong)uVar32;
        fVar45 = fVar45 * fVar39 * *(float *)(lVar6 + 0xfd0) +
                 (float)(int)*(short *)((longlong)pfVar35 + 0x32);
        if ((uVar4 >> 0x16 & 1) == 0) {
          uVar31 = (ulonglong)fVar45;
          if ((uVar4 >> 3 & 1) == 0) {
            uVar18 = (ulonglong)(uVar32 - 1);
            if ((uint)uVar31 < uVar32 - 1) {
              uVar18 = uVar31 & 0xffffffff;
            }
          }
          else {
            uVar18 = (uVar31 & 0xffffffff) % uVar18;
          }
          uVar32 = *(uint *)(lVar6 + 0xfc4);
          fVar39 = (float)(uVar18 / uVar32) / (float)*(int *)(lVar6 + 0xfc8);
          pfVar29[2] = (float)(uVar18 % (ulonglong)uVar32) / (float)(int)uVar32;
        }
        else if ((uVar4 >> 3 & 1) == 0) {
          fVar39 = 0.0;
          fVar40 = (float)(uVar32 - 1);
          if (fVar45 <= (float)(uVar32 - 1)) {
            fVar40 = fVar45;
          }
          pfVar29[2] = fVar40;
        }
        else {
          fVar45 = (float)fmodf(uVar18,(float)uVar18);
          fVar39 = 0.0;
          pfVar29[2] = fVar45;
        }
      }
      pfVar29[3] = fVar39;
      lVar22 = lVar22 + 1;
      pfVar29 = pfVar29 + 0x12;
    } while (lVar22 < lVar37);
  }
  return;
}






// 函数: void FUN_1802d4c41(longlong param_1)
void FUN_1802d4c41(longlong param_1)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong unaff_RBX;
  float *pfVar14;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  float *pfVar19;
  longlong *unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
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
  char in_stack_00000128;
  char in_stack_00000130;
  
  iVar15 = (int)unaff_R14 + 0x31;
  pfVar14 = (float *)(param_1 + unaff_RBX * 8);
  do {
    pfVar19 = (float *)((longlong)*(int *)(*unaff_R12 + unaff_R14 * 8) * 0x70 +
                       *(longlong *)(unaff_RDI + 0x58));
    if (*(char *)(unaff_RDI + 0xa1) == '\0') {
      pfVar14[-2] = *pfVar19;
      pfVar14[-1] = pfVar19[1];
      *pfVar14 = pfVar19[2];
    }
    else {
      fVar24 = *(float *)(unaff_RDI + 0xc4);
      fVar25 = *(float *)(unaff_RDI + 200);
      fVar21 = pfVar19[1];
      fVar26 = *(float *)(unaff_RDI + 0xb4);
      fVar23 = *(float *)(unaff_RDI + 0xb8);
      fVar27 = *pfVar19;
      fVar22 = pfVar19[2];
      fVar2 = *(float *)(unaff_RDI + 0xd4);
      fVar20 = *(float *)(unaff_RDI + 0xd8);
      fVar3 = *(float *)(unaff_RDI + 0xe4);
      fVar4 = *(float *)(unaff_RDI + 0xe8);
      pfVar14[-2] = *(float *)(unaff_RDI + 0xc0) * fVar21 + *(float *)(unaff_RDI + 0xb0) * fVar27 +
                    *(float *)(unaff_RDI + 0xd0) * fVar22 + *(float *)(unaff_RDI + 0xe0);
      *pfVar14 = fVar25 * fVar21 + fVar23 * fVar27 + fVar20 * fVar22 + fVar4;
      pfVar14[-1] = fVar24 * fVar21 + fVar26 * fVar27 + fVar2 * fVar22 + fVar3;
    }
    pfVar14[0xe] = pfVar19[0x17];
    pfVar14[1] = pfVar19[3];
    pfVar14[4] = pfVar19[0xb];
    pfVar14[0xb] = pfVar19[0x18];
    pfVar14[0xc] = pfVar19[0x19];
    pfVar14[0xd] = pfVar19[0x1a];
    fVar21 = pfVar19[0xd];
    pfVar14[7] = fVar21;
    fVar27 = pfVar19[0xe];
    pfVar14[8] = fVar27;
    pfVar14[9] = pfVar19[0xf] * 60.0;
    pfVar14[7] = fVar21 * 60.0;
    pfVar14[8] = fVar27 * 60.0;
    fVar21 = pfVar19[9];
    fVar27 = pfVar19[8];
    fVar22 = fVar21 * 49.0;
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
      lVar13 = (longlong)iVar10;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0x31 < iVar5) {
        iVar5 = iVar15;
      }
      fVar2 = pfVar19[0x11];
      lVar8 = (longlong)iVar5;
      fVar24 = *(float *)(unaff_RSI + 0xbf0 + lVar8 * 0x10);
      fVar25 = *(float *)(unaff_RSI + 0xbf4 + lVar8 * 0x10);
      fVar24 = (*(float *)(unaff_RSI + 0xbf0 + lVar13 * 0x10) - fVar24) * fVar22 + fVar24;
      fVar26 = *(float *)(unaff_RSI + 0xbf8 + lVar8 * 0x10);
      fVar25 = (*(float *)(unaff_RSI + 0xbf4 + lVar13 * 0x10) - fVar25) * fVar22 + fVar25;
      fVar23 = *(float *)(unaff_RSI + 0xbfc + lVar8 * 0x10);
      fVar26 = (*(float *)(unaff_RSI + 0xbf8 + lVar13 * 0x10) - fVar26) * fVar22 + fVar26;
      fVar23 = (*(float *)(unaff_RSI + 0xbfc + lVar13 * 0x10) - fVar23) * fVar22 + fVar23;
      if (fVar2 != -NAN) {
        fVar22 = (float)((uint)fVar2 >> 0x10 & 0xff);
        fVar20 = (float)((uint)fVar2 >> 8 & 0xff);
        fVar26 = (float)((uint)fVar2 & 0xff) * (float)((uint)fVar2 & 0xff) * 1.5378702e-05 * fVar26;
        fVar24 = fVar22 * fVar22 * 1.5378702e-05 * fVar24;
        fVar25 = fVar20 * fVar20 * 1.5378702e-05 * fVar25;
      }
    }
    else {
      fVar26 = pfVar19[0x11];
      iVar10 = (int)(fVar22 + 1.0);
      fVar24 = (float)((uint)fVar26 >> 0x10 & 0xff) * 0.003921569;
      iVar5 = (int)fVar22;
      fVar25 = (float)((uint)fVar26 >> 8 & 0xff) * 0.003921569;
      fVar26 = (float)((uint)fVar26 & 0xff) * 0.003921569;
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
      fVar23 = *(float *)(unaff_RSI + 0xbfc + (longlong)iVar6 * 0x10);
      fVar23 = (*(float *)(unaff_RSI + 0xbfc + (longlong)iVar10 * 0x10) - fVar23) *
               (fVar22 - (float)iVar5) + fVar23;
    }
    pfVar14[0xf] = pfVar19[0x1b];
    uVar7 = (uint)(longlong)(fVar23 * 255.9);
    uVar18 = 0xff;
    if (uVar7 < 0xff) {
      uVar18 = uVar7;
    }
    uVar11 = (uint)(longlong)(fVar24 * 255.9);
    uVar7 = 0xff;
    if (uVar11 < 0xff) {
      uVar7 = uVar11;
    }
    uVar12 = (uint)(longlong)(fVar25 * 255.9);
    uVar11 = 0xff;
    if (uVar12 < 0xff) {
      uVar11 = uVar12;
    }
    uVar16 = (uint)(longlong)(fVar26 * 255.9);
    uVar12 = 0xff;
    if (uVar16 < 0xff) {
      uVar12 = uVar16;
    }
    pfVar14[6] = (float)(((uVar18 << 8 | uVar7) << 8 | uVar11) << 8 | uVar12);
    if ((in_stack_00000128 == '\0') || (in_stack_00000130 == '\0')) {
      if ((cStackX_24 == '\0') || (in_stack_00000130 == '\0')) {
        pfVar14[2] = 0.0;
        fVar21 = 0.0;
      }
      else {
        iVar15 = *(int *)(unaff_RSI + 0xfc4);
        sVar1 = *(short *)((longlong)pfVar19 + 0x32);
        iVar10 = *(int *)(unaff_RSI + 0xfc8);
        pfVar14[2] = (float)((int)sVar1 % iVar15) / (float)iVar15;
        fVar21 = (float)((int)sVar1 / iVar15) / (float)iVar10;
      }
    }
    else {
      uVar18 = *(uint *)(unaff_RSI + 0xfcc);
      uVar9 = (ulonglong)uVar18;
      fVar27 = fVar27 * fVar21 * *(float *)(unaff_RSI + 0xfd0) +
               (float)(int)*(short *)((longlong)pfVar19 + 0x32);
      if (cStackX_20 == '\0') {
        uVar17 = (ulonglong)fVar27;
        if (unaff_R15B == '\0') {
          uVar9 = (ulonglong)(uVar18 - 1);
          if ((uint)uVar17 < uVar18 - 1) {
            uVar9 = uVar17 & 0xffffffff;
          }
        }
        else {
          uVar9 = (uVar17 & 0xffffffff) % uVar9;
        }
        uVar18 = *(uint *)(unaff_RSI + 0xfc4);
        fVar21 = (float)(uVar9 / uVar18) / (float)*(int *)(unaff_RSI + 0xfc8);
        pfVar14[2] = (float)(uVar9 % (ulonglong)uVar18) / (float)(int)uVar18;
      }
      else if (unaff_R15B == '\0') {
        fVar21 = 0.0;
        fVar22 = (float)(uVar18 - 1);
        if (fVar27 <= (float)(uVar18 - 1)) {
          fVar22 = fVar27;
        }
        pfVar14[2] = fVar22;
      }
      else {
        fVar27 = (float)fmodf(uVar9,(float)uVar9);
        fVar21 = 0.0;
        pfVar14[2] = fVar27;
      }
    }
    pfVar14[3] = fVar21;
    unaff_R14 = unaff_R14 + 1;
    pfVar14 = pfVar14 + 0x12;
    iVar15 = 0x31;
  } while (unaff_R14 < unaff_R13);
  return;
}






// 函数: void FUN_1802d51cb(void)
void FUN_1802d51cb(void)

{
  return;
}






// 函数: void FUN_1802d51f0(longlong param_1,longlong param_2,uint param_3)
void FUN_1802d51f0(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  byte *pbVar19;
  ushort *puVar20;
  ushort *puVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  float *pfVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  uint uStackX_18;
  longlong lStack_100;
  
  lVar4 = *(longlong *)(param_2 + 0x48);
  uVar25 = (ulonglong)(int)param_3;
  iVar11 = (int)((*(longlong *)(param_2 + 0x60) - *(longlong *)(param_2 + 0x58)) / 0x70);
  pfVar26 = (float *)(*(longlong *)(*(longlong *)(param_1 + 0x310) + 0x10) + uVar25 * 0x48);
  uVar1 = *(uint *)(lVar4 + 0x68);
  if ((*(int *)(lVar4 + 0xfc4) < 1) || (*(int *)(lVar4 + 0xfc8) < 1)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  iVar2 = *(int *)(param_2 + 0xa4);
  uVar3 = *(uint *)(param_2 + 0x44);
  fVar36 = *(float *)(lVar4 + 0x1054);
  if (*(float *)(lVar4 + 0x1054) <= *(float *)(lVar4 + 0x1050)) {
    fVar36 = *(float *)(lVar4 + 0x1050);
  }
  lStack_100 = (longlong)iVar11;
  if (0 < iVar11) {
    lVar27 = 0;
    uStackX_18 = param_3;
    do {
      fVar29 = 49.0;
      lVar5 = *(longlong *)(param_2 + 0x58);
      if (*(char *)(param_2 + 0xa1) == '\0') {
        *pfVar26 = *(float *)(lVar27 + lVar5);
        pfVar26[1] = *(float *)(lVar27 + 4 + lVar5);
        pfVar26[2] = *(float *)(lVar27 + 8 + lVar5);
      }
      else {
        fVar34 = *(float *)(param_2 + 0xc4);
        fVar35 = *(float *)(param_2 + 200);
        fVar32 = *(float *)(lVar27 + 4 + lVar5);
        fVar28 = *(float *)(param_2 + 0xb4);
        fVar31 = *(float *)(param_2 + 0xb8);
        fVar30 = *(float *)(lVar27 + lVar5);
        fVar33 = *(float *)(lVar27 + 8 + lVar5);
        fVar6 = *(float *)(param_2 + 0xd4);
        fVar7 = *(float *)(param_2 + 0xd8);
        fVar8 = *(float *)(param_2 + 0xe4);
        fVar9 = *(float *)(param_2 + 0xe8);
        *pfVar26 = *(float *)(param_2 + 0xc0) * fVar32 + *(float *)(param_2 + 0xb0) * fVar30 +
                   *(float *)(param_2 + 0xd0) * fVar33 + *(float *)(param_2 + 0xe0);
        pfVar26[2] = fVar35 * fVar32 + fVar31 * fVar30 + fVar7 * fVar33 + fVar9;
        pfVar26[1] = fVar34 * fVar32 + fVar28 * fVar30 + fVar6 * fVar33 + fVar8;
      }
      pfVar26[0x10] = *(float *)(lVar27 + 0x5c + lVar5);
      pfVar26[3] = *(float *)(lVar27 + 0xc + lVar5);
      pbVar19 = (byte *)(lVar5 + 0x54 + lVar27);
      pfVar26[6] = *(float *)(lVar27 + 0x2c + lVar5);
      puVar20 = (ushort *)(lVar5 + 0x52 + lVar27);
      puVar21 = (ushort *)(lVar5 + 0x50 + lVar27);
      pfVar26[0xd] = *(float *)(lVar27 + 0x60 + lVar5);
      pfVar26[0xe] = *(float *)(lVar27 + 100 + lVar5);
      pfVar26[0xf] = *(float *)(lVar27 + 0x68 + lVar5);
      fVar32 = *(float *)(lVar27 + 0x34 + lVar5);
      pfVar26[9] = fVar32;
      fVar30 = *(float *)(lVar27 + 0x38 + lVar5);
      pfVar26[10] = fVar30;
      pfVar26[0xb] = *(float *)(lVar27 + 0x3c + lVar5) * 60.0;
      pfVar26[9] = fVar32 * 60.0;
      pfVar26[10] = fVar30 * 60.0;
      fVar32 = *(float *)(lVar27 + 0x20 + lVar5);
      fVar30 = *(float *)(lVar27 + 0x24 + lVar5);
      FUN_1802cf260(param_1 + 0x58,uVar25 & 0xffffffff,pfVar26,
                    fVar36 * *(float *)(lVar27 + 0x2c + lVar5),
                    ((ulonglong)uVar3 << 0x10 | (longlong)iVar2) << 0x20,puVar21,puVar20,pbVar19);
      fVar29 = fVar30 * fVar29;
      pfVar26[0xc] = (float)(((uint)*pbVar19 << 0xc | *puVar21 & 0xfff) << 0xc | *puVar20 & 0xfff);
      pfVar26[7] = *(float *)(param_2 + 0xa4);
      if (*(int *)(lVar4 + 0x10c) == 0) {
        iVar15 = (int)fVar29;
        iVar11 = (int)(fVar29 + 1.0);
        fVar29 = fVar29 - (float)iVar15;
        if (iVar11 < 0) {
          iVar11 = 0;
        }
        else if (0x31 < iVar11) {
          iVar11 = 0x31;
        }
        lVar18 = (longlong)iVar11;
        if (iVar15 < 0) {
          iVar15 = 0;
        }
        else if (0x31 < iVar15) {
          iVar15 = 0x31;
        }
        lVar14 = (longlong)iVar15;
        uVar24 = *(uint *)(lVar27 + 0x44 + lVar5);
        fVar33 = *(float *)(lVar4 + 0xbf0 + lVar14 * 0x10);
        fVar34 = *(float *)(lVar4 + 0xbf4 + lVar14 * 0x10);
        fVar33 = (*(float *)(lVar4 + 0xbf0 + lVar18 * 0x10) - fVar33) * fVar29 + fVar33;
        fVar35 = *(float *)(lVar4 + 0xbf8 + lVar14 * 0x10);
        fVar34 = (*(float *)(lVar4 + 0xbf4 + lVar18 * 0x10) - fVar34) * fVar29 + fVar34;
        fVar31 = *(float *)(lVar4 + 0xbfc + lVar14 * 0x10);
        fVar35 = (*(float *)(lVar4 + 0xbf8 + lVar18 * 0x10) - fVar35) * fVar29 + fVar35;
        fVar31 = (*(float *)(lVar4 + 0xbfc + lVar18 * 0x10) - fVar31) * fVar29 + fVar31;
        if (uVar24 != 0xffffffff) {
          fVar29 = (float)(uVar24 >> 0x10 & 0xff);
          fVar28 = (float)(uVar24 >> 8 & 0xff);
          fVar35 = (float)(uVar24 & 0xff) * (float)(uVar24 & 0xff) * 1.5378702e-05 * fVar35;
          fVar33 = fVar29 * fVar29 * 1.5378702e-05 * fVar33;
          fVar34 = fVar28 * fVar28 * 1.5378702e-05 * fVar34;
        }
      }
      else {
        uVar24 = *(uint *)(lVar27 + 0x44 + lVar5);
        iVar15 = (int)(fVar29 + 1.0);
        fVar33 = (float)(uVar24 >> 0x10 & 0xff) * 0.003921569;
        iVar11 = (int)fVar29;
        fVar34 = (float)(uVar24 >> 8 & 0xff) * 0.003921569;
        fVar28 = (float)iVar11;
        fVar35 = (float)(uVar24 & 0xff) * 0.003921569;
        if (iVar15 < 0) {
          iVar15 = 0;
        }
        else if (0x31 < iVar15) {
          iVar15 = 0x31;
        }
        if (iVar11 < 0) {
          iVar11 = 0;
        }
        else if (0x31 < iVar11) {
          iVar11 = 0x31;
        }
        fVar31 = *(float *)(lVar4 + 0xbfc + (longlong)iVar11 * 0x10);
        fVar31 = (*(float *)(lVar4 + 0xbfc + (longlong)iVar15 * 0x10) - fVar31) * (fVar29 - fVar28)
                 + fVar31;
      }
      pfVar26[0x11] = *(float *)(lVar27 + 0x6c + lVar5);
      uVar12 = (uint)(longlong)(fVar31 * 255.9);
      uVar24 = 0xff;
      if (uVar12 < 0xff) {
        uVar24 = uVar12;
      }
      uVar16 = (uint)(longlong)(fVar33 * 255.9);
      uVar12 = 0xff;
      if (uVar16 < 0xff) {
        uVar12 = uVar16;
      }
      uVar17 = (uint)(longlong)(fVar34 * 255.9);
      uVar16 = 0xff;
      if (uVar17 < 0xff) {
        uVar16 = uVar17;
      }
      uVar22 = (uint)(longlong)(fVar35 * 255.9);
      uVar17 = 0xff;
      if (uVar22 < 0xff) {
        uVar17 = uVar22;
      }
      pfVar26[8] = (float)(((uVar24 << 8 | uVar12) << 8 | uVar16) << 8 | uVar17);
      if (((uVar1 >> 4 & 1) == 0) || (!bVar10)) {
        if (((uVar1 >> 0xb & 1) == 0) || (!bVar10)) {
          pfVar26[4] = 0.0;
          fVar29 = 0.0;
        }
        else {
          iVar11 = *(int *)(lVar4 + 0xfc4);
          iVar13 = (int)*(short *)(lVar27 + 0x32 + lVar5);
          iVar15 = *(int *)(lVar4 + 0xfc8);
          pfVar26[4] = (float)(iVar13 % iVar11) / (float)iVar11;
          fVar29 = (float)(iVar13 / iVar11) / (float)iVar15;
        }
      }
      else {
        uVar24 = *(uint *)(lVar4 + 0xfcc);
        uVar25 = (ulonglong)uVar24;
        fVar32 = fVar32 * fVar30 * *(float *)(lVar4 + 0xfd0) +
                 (float)(int)*(short *)(lVar27 + 0x32 + lVar5);
        if ((uVar1 >> 0x16 & 1) == 0) {
          uVar23 = (ulonglong)fVar32;
          if ((uVar1 >> 3 & 1) == 0) {
            uVar25 = (ulonglong)(uVar24 - 1);
            if ((uint)uVar23 < uVar24 - 1) {
              uVar25 = uVar23 & 0xffffffff;
            }
          }
          else {
            uVar25 = (uVar23 & 0xffffffff) % uVar25;
          }
          uVar24 = *(uint *)(lVar4 + 0xfc4);
          fVar29 = (float)(uVar25 / uVar24) / (float)*(int *)(lVar4 + 0xfc8);
          pfVar26[4] = (float)(uVar25 % (ulonglong)uVar24) / (float)(int)uVar24;
        }
        else if ((uVar1 >> 3 & 1) == 0) {
          fVar29 = 0.0;
          fVar30 = (float)(uVar24 - 1);
          if (fVar32 <= (float)(uVar24 - 1)) {
            fVar30 = fVar32;
          }
          pfVar26[4] = fVar30;
        }
        else {
          fVar32 = (float)fmodf(uVar25,(float)uVar25);
          fVar29 = 0.0;
          pfVar26[4] = fVar32;
        }
      }
      lVar27 = lVar27 + 0x70;
      pfVar26[5] = fVar29;
      pfVar26 = pfVar26 + 0x12;
      uStackX_18 = uStackX_18 + 1;
      uVar25 = (ulonglong)uStackX_18;
      lStack_100 = lStack_100 + -1;
    } while (lStack_100 != 0);
  }
  return;
}






