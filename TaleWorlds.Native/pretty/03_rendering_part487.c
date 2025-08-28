#include "TaleWorlds.Native.Split.h"

// 03_rendering_part487.c - 4 个函数

// 函数: void FUN_1805288a0(longlong param_1,undefined4 *param_2,float *param_3,float *param_4)
void FUN_1805288a0(longlong param_1,undefined4 *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_148 [32];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  uint uStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  uint uStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  uint uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  uint uStack_ac;
  ulonglong uStack_a8;
  
  uStack_a8 = _DAT_180bf00a8 ^ (ulonglong)auStack_148;
  lVar7 = *(longlong *)(param_1 + 0x6d8);
  uVar9 = *(undefined4 *)(lVar7 + 0x8e8);
  uVar10 = *(undefined4 *)(lVar7 + 0x8ec);
  uVar11 = *(undefined4 *)(lVar7 + 0x8f0);
  *param_2 = *(undefined4 *)(lVar7 + 0x8e4);
  param_2[1] = uVar9;
  param_2[2] = uVar10;
  param_2[3] = uVar11;
  lVar7 = *(longlong *)(param_1 + 0x658);
  lVar8 = *(longlong *)(lVar7 + 0x208);
  lVar13 = *(longlong *)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8) + 0x260) + 0x210);
  cVar5 = *(char *)(lVar13 + 0xe5);
  cVar6 = *(char *)(lVar13 + 0xe4);
  if ((*(byte *)(lVar7 + 0xa8) & 1) == 0) {
    FUN_1802fac00(lVar7,*(longlong *)(lVar7 + 0x10) + 0x70,0xbf800000);
  }
  lVar13 = (longlong)cVar5;
  puVar12 = (uint *)(lVar13 * 0x100 + *(longlong *)(lVar7 + 0x18));
  do {
    LOCK();
    uVar1 = *puVar12;
    *puVar12 = *puVar12 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  fStack_128 = (float)puVar12[1];
  fStack_124 = (float)puVar12[2];
  fStack_120 = (float)puVar12[3];
  fStack_11c = (float)puVar12[4];
  fStack_118 = (float)puVar12[5];
  fStack_114 = (float)puVar12[6];
  fStack_110 = (float)puVar12[7];
  uStack_10c = puVar12[8];
  *puVar12 = 0;
  lVar7 = *(longlong *)(param_1 + 0x658);
  fStack_108 = fStack_128;
  fStack_104 = fStack_124;
  fStack_100 = fStack_120;
  fStack_fc = fStack_11c;
  fStack_f8 = fStack_118;
  fStack_f4 = fStack_114;
  fStack_f0 = fStack_110;
  uStack_ec = uStack_10c;
  fStack_e8 = fStack_128;
  fStack_e4 = fStack_124;
  fStack_e0 = fStack_120;
  fStack_dc = fStack_11c;
  fStack_d8 = fStack_118;
  fStack_d4 = fStack_114;
  fStack_d0 = fStack_110;
  uStack_cc = uStack_10c;
  if ((*(byte *)(lVar7 + 0xa8) & 1) == 0) {
    FUN_1802fac00(lVar7,*(longlong *)(lVar7 + 0x10) + 0x70,0xbf800000);
  }
  lVar14 = (longlong)cVar6;
  puVar12 = (uint *)(lVar14 * 0x100 + *(longlong *)(lVar7 + 0x18));
  do {
    LOCK();
    uVar1 = *puVar12;
    *puVar12 = *puVar12 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  fStack_c8 = (float)puVar12[1];
  fStack_c4 = (float)puVar12[2];
  fStack_c0 = (float)puVar12[3];
  fStack_bc = (float)puVar12[4];
  fStack_b8 = (float)puVar12[5];
  fStack_b4 = (float)puVar12[6];
  fStack_b0 = (float)puVar12[7];
  uStack_ac = puVar12[8];
  *puVar12 = 0;
  lVar7 = *(longlong *)(lVar8 + 0x140);
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8);
  fVar16 = fStack_e0 * fStack_dc - fStack_e8 * fStack_e4;
  fVar18 = fStack_e4 * fStack_e4;
  fVar2 = *(float *)(lVar13 * 0x1b0 + 0x158 + lVar7);
  fVar19 = (fStack_e8 * fStack_e0 + fStack_e8 * fStack_e0 +
           fStack_e4 * fStack_dc + fStack_e4 * fStack_dc) * fVar2 + fStack_d8;
  fVar16 = (fVar16 + fVar16) * fVar2 + fStack_d4;
  fStack_e4 = fVar19 * *(float *)(lVar8 + 0x74) + fVar16 * *(float *)(lVar8 + 0x84) +
              *(float *)(lVar8 + 0xa4);
  fStack_e8 = fVar16 * *(float *)(lVar8 + 0x80) + fVar19 * *(float *)(lVar8 + 0x70) +
              *(float *)(lVar8 + 0xa0);
  fStack_e0 = ((1.0 - (fVar18 + fVar18 + fStack_e0 * fStack_e0 + fStack_e0 * fStack_e0)) * fVar2 +
              fStack_d0) * *(float *)(lVar8 + 0x98) + *(float *)(lVar8 + 0xa8);
  *param_3 = fStack_e8;
  param_3[1] = fStack_e4;
  param_3[2] = fStack_e0;
  param_3[3] = 3.4028235e+38;
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8);
  fVar16 = fStack_c0 * fStack_bc - fStack_c8 * fStack_c4;
  fVar2 = *(float *)(lVar14 * 0x1b0 + 0x158 + lVar7);
  fStack_dc = 3.4028235e+38;
  fVar15 = fStack_b4 - (fVar16 + fVar16) * fVar2;
  fVar16 = *(float *)(lVar8 + 0x84);
  fVar17 = fStack_b8 -
           (fStack_c8 * fStack_c0 + fStack_c8 * fStack_c0 +
           fStack_c4 * fStack_bc + fStack_c4 * fStack_bc) * fVar2;
  fVar18 = *(float *)(lVar8 + 0x74);
  fVar19 = *(float *)(lVar8 + 0x98);
  fVar3 = *(float *)(lVar8 + 0xa4);
  fVar4 = *(float *)(lVar8 + 0xa8);
  *param_4 = fVar15 * *(float *)(lVar8 + 0x80) + fVar17 * *(float *)(lVar8 + 0x70) +
             *(float *)(lVar8 + 0xa0);
  param_4[1] = fVar17 * fVar18 + fVar15 * fVar16 + fVar3;
  param_4[2] = (fStack_b0 -
               (1.0 - (fStack_c4 * fStack_c4 + fStack_c4 * fStack_c4 +
                      fStack_c0 * fStack_c0 + fStack_c0 * fStack_c0)) * fVar2) * fVar19 + fVar4;
  param_4[3] = 3.4028235e+38;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_a8 ^ (ulonglong)auStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180528c80(longlong param_1,float param_2)
void FUN_180528c80(longlong param_1,float param_2)

{
  ushort *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fStackX_8;
  float fStackX_c;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined4 uStack_1b8;
  undefined *puStack_1b0;
  undefined4 *puStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_198;
  longlong lStack_190;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [16];
  longlong *plStack_160;
  ulonglong uStack_158;
  undefined8 uStack_148;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [240];
  
  uStack_178 = 0xfffffffffffffffe;
  uVar17 = 0;
  lVar19 = *(longlong *)(param_1 + 0x6e0);
  if ((*(uint *)(lVar19 + 0x1484) >> 1 & 1) == 0) {
    fVar21 = *(float *)(lVar19 + 0x13d4) - param_2 * 0.1;
    if (fVar21 <= 0.0) {
      fVar21 = 0.0;
    }
    *(float *)(lVar19 + 0x13d4) = fVar21;
    fVar21 = 0.0;
    fVar29 = 0.0;
    lVar19 = *(longlong *)(param_1 + 0x8d8);
    uVar3 = *(uint *)(lVar19 + 0x52ed94);
    if (0 < (int)uVar3) {
      piVar15 = (int *)(lVar19 + 0x30b0);
      uVar16 = uVar17;
      do {
        if (-1 < *piVar15) goto LAB_180528d8a;
        uVar17 = (ulonglong)((int)uVar17 + 1);
        uVar16 = uVar16 + 1;
        piVar15 = piVar15 + 0x298;
      } while ((longlong)uVar16 < (longlong)(int)uVar3);
    }
    uVar17 = (ulonglong)uVar3;
LAB_180528d8a:
    uVar13 = (uint)uVar17;
    lVar8 = _DAT_180c8f008;
    while ((int)uVar13 < (int)uVar3) {
      lStack_190 = (longlong)(int)uVar17;
      lVar19 = lVar19 + 0x30a0 + lStack_190 * 0xa60;
      uVar13 = *(uint *)(lVar19 + 0x568);
      if (((((5 < uVar13) || ((0x25U >> (uVar13 & 0x1f) & 1) == 0)) &&
           (*(longlong *)(lVar19 + 0x6d8) != 0)) &&
          ((*(char *)(*(longlong *)(lVar19 + 0x6d8) + 0x8be) != '\0' &&
           (uVar4 = *(uint *)(lVar19 + 0x56c), (uVar4 & 8) != 0)))) &&
         ((uVar13 != 1 ||
          (((*(uint *)(*(longlong *)(lVar19 + 0x6e0) + 0x1484) >> 1 & 1) != 0 ||
           (cVar6 = func_0x000180508270(param_1,lVar19), cVar6 != '\0')))))) {
        lVar10 = *(longlong *)(lVar19 + 0x20);
        lVar9 = *(longlong *)(param_1 + 0x20);
        fVar27 = *(float *)(lVar10 + 0x14) - *(float *)(lVar9 + 0x14);
        fVar24 = *(float *)(lVar10 + 0x10) - *(float *)(lVar9 + 0x10);
        fVar23 = *(float *)(lVar10 + 0xc) - *(float *)(lVar9 + 0xc);
        fVar25 = fVar23 * fVar23 + fVar24 * fVar24 + fVar27 * fVar27;
        auVar20 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
        fVar22 = auVar20._0_4_;
        fVar28 = fVar22 * 0.5 * (3.0 - fVar25 * fVar22 * fVar22);
        fVar22 = 20.0;
        if (*(int *)(lVar19 + 0x564) < 0) {
          if ((((uVar13 == 1) && ((uVar4 >> 0xb & 1) != 0)) &&
              (lVar9 = *(longlong *)(lVar19 + 0x590), lVar9 != 0)) &&
             (((*(int *)(lVar9 + 0x8228) < 0 && (*(int *)(lVar9 + 0x8234) != 0)) &&
              (fVar22 = 5.0, *(int *)(lVar9 + 0x8234) == 3)))) {
            fVar22 = 1.25;
          }
        }
        else {
          fVar22 = 80.0;
        }
        fStackX_8 = (float)*(undefined8 *)(lVar10 + 0x1c);
        fStackX_c = (float)((ulonglong)*(undefined8 *)(lVar10 + 0x1c) >> 0x20);
        fVar26 = SQRT(fStackX_8 * fStackX_8 + fStackX_c * fStackX_c);
        fVar25 = 1.0 / (fVar28 * fVar25 * fVar28 * fVar25 + 16.0);
        fVar22 = fVar26 * fVar22 * fVar25;
        if (0.5 < fVar22) {
          fVar21 = fVar21 + fVar22;
        }
        fVar22 = fVar28 * fVar24 * *(float *)(param_1 + 0x4a0) +
                 fVar28 * fVar23 * *(float *)(param_1 + 0x49c) +
                 fVar28 * fVar27 * *(float *)(param_1 + 0x4a4);
        if (0.0 < fVar22) {
          fVar22 = fVar22 + 0.15;
          fVar22 = fVar22 * fVar22;
          if (*(int *)(lVar19 + 0x564) < 0) {
            if ((uVar13 != 1) ||
               ((((uVar4 >> 0xb & 1) != 0 && (*(longlong *)(lVar19 + 0x590) != 0)) &&
                ((*(byte *)(*(longlong *)(lVar19 + 0x590) + 0x3424) & 0x10) != 0)))) {
              fVar23 = 0.5;
              goto LAB_180529004;
            }
LAB_18052900d:
            if ((fStackX_8 == 0.0) && (fStackX_c == 0.0)) goto LAB_180529019;
          }
          else {
            fVar23 = 4.0;
LAB_180529004:
            fVar22 = fVar22 * fVar23;
            if (uVar13 == 1) goto LAB_18052900d;
LAB_180529019:
            fVar22 = fVar22 * 0.5;
          }
          fVar22 = fVar22 * (fVar25 * fVar26 * 125.0 + fVar25 * 500.0);
          if (0.5 < fVar22) {
            FUN_180528530(param_1,auStack_170,auStack_140,&DAT_180a002f0);
            fVar23 = (float)FUN_18051b450(lVar19,auStack_170);
            fVar22 = fVar22 * fVar23;
            lVar8 = _DAT_180c8f008;
            if (0.5 < fVar22) {
              lVar8 = *(longlong *)(param_1 + 0x660);
              fVar24 = SQRT(*(float *)(lVar8 + 0x30ec) * *(float *)(lVar8 + 0x30ec) +
                            *(float *)(lVar8 + 0x30f0) * *(float *)(lVar8 + 0x30f0) +
                            *(float *)(lVar8 + 0x30f4) * *(float *)(lVar8 + 0x30f4));
              FUN_180528530(lVar19,&fStack_188,&puStack_1b0,&DAT_180a002f0);
              lVar8 = *(longlong *)(param_1 + 0x660);
              fStack_1bc = fStack_180 + *(float *)(lVar8 + 0x3e14) * -500.0;
              fStack_1c0 = fStack_184 + *(float *)(lVar8 + 0x3e10) * -500.0;
              fStack_1c4 = fStack_188 - *(float *)(lVar8 + 0x3e0c) * 500.0;
              uStack_1b8 = 0x7f7fffff;
              fVar23 = (float)FUN_18051b450(lVar19,&fStack_1c4);
              lVar8 = *(longlong *)(param_1 + 0x660);
              if ((0.0 < fVar23) &&
                 (fVar24 = SQRT(*(float *)(lVar8 + 0x3e1c) * *(float *)(lVar8 + 0x3e1c) +
                                *(float *)(lVar8 + 0x3e20) * *(float *)(lVar8 + 0x3e20) +
                                *(float *)(lVar8 + 0x3e24) * *(float *)(lVar8 + 0x3e24)) * fVar23 +
                           fVar24, 1.0 <= fVar24)) {
                fVar24 = 1.0;
              }
              FUN_1801c2360(lVar8 + 0x60830);
              plVar5 = plStack_160;
              uVar17 = uStack_158;
              uVar18 = uStack_148;
LAB_1805291c0:
              if (uVar17 != *(ulonglong *)(*(longlong *)(param_1 + 0x660) + 0x60838)) {
                lVar8 = FUN_1802e8fb0(uVar18);
                if (((lVar8 != 0) &&
                    (((*(float *)(lVar8 + 0xd4) != 0.0 || (*(float *)(lVar8 + 0xd8) != 0.0)) ||
                     (*(float *)(lVar8 + 0xdc) != 0.0)))) &&
                   (((lVar10 = *(longlong *)(lVar19 + 0x20),
                     fVar27 = *(float *)(lVar10 + 0x10) - *(float *)(lVar8 + 0xb4),
                     fVar23 = *(float *)(lVar10 + 0xc) - *(float *)(lVar8 + 0xb0),
                     fVar25 = *(float *)(lVar10 + 0x14) - *(float *)(lVar8 + 0xb8),
                     fVar27 * fVar27 + fVar23 * fVar23 + fVar25 * fVar25 <
                     *(float *)(lVar8 + 0x34) * *(float *)(lVar8 + 0x34) &&
                     (fVar23 = (float)FUN_18051b450(lVar19), 0.0 < fVar23)) &&
                    (fVar24 = SQRT(*(float *)(lVar8 + 0xd4) * *(float *)(lVar8 + 0xd4) +
                                   *(float *)(lVar8 + 0xd8) * *(float *)(lVar8 + 0xd8) +
                                   *(float *)(lVar8 + 0xdc) * *(float *)(lVar8 + 0xdc)) * fVar23 +
                              fVar24, 1.0 <= fVar24)))) {
                  fVar24 = 1.0;
                }
                lVar8 = *plVar5;
                do {
                  uVar17 = uVar17 + 1;
                  lVar9 = (uVar17 & 0xffffffff) * 0x10;
                  lVar10 = lVar9 + 8 + lVar8;
                  if ((*(ulonglong *)(lVar9 + lVar8) & 0xffffffff00000000) == 0) {
                    lVar10 = 0;
                  }
                  if (lVar10 != 0) {
                    uVar18 = *(undefined8 *)(lVar8 + 8 + (uVar17 & 0xffffffff) * 0x10);
                    break;
                  }
                } while (uVar17 != plVar5[1]);
                goto LAB_1805291c0;
              }
              fVar22 = fVar22 * fVar24;
              lVar8 = _DAT_180c8f008;
              if (0.5 < fVar22) {
                fVar29 = fVar29 + fVar22;
              }
            }
          }
        }
        fVar22 = fVar29 + fVar21;
        *(float *)(*(longlong *)(param_1 + 0x6e0) + 0x13d4) =
             fVar22 * param_2 + *(float *)(*(longlong *)(param_1 + 0x6e0) + 0x13d4);
        lVar10 = *(longlong *)(param_1 + 0x6e0);
        if ((1.0 < *(float *)(lVar10 + 0x13d4) || *(float *)(lVar10 + 0x13d4) == 1.0) &&
           ((*(byte *)(lVar10 + 0x1484) & 1) == 0)) {
          *(uint *)(lVar10 + 0x1484) = *(uint *)(lVar10 + 0x1484) | 1;
          puVar11 = (undefined8 *)FUN_180516f50(lVar19,auStack_130);
          lVar19 = *(longlong *)(param_1 + 0x6e0);
          *(undefined8 *)(lVar19 + 0x13d8) = *puVar11;
          uVar18 = puVar11[4];
          *(undefined8 *)(lVar19 + 0x13f0) = puVar11[3];
          *(undefined8 *)(lVar19 + 0x13f8) = uVar18;
          uVar18 = puVar11[6];
          *(undefined8 *)(lVar19 + 0x1400) = puVar11[5];
          *(undefined8 *)(lVar19 + 0x1408) = uVar18;
          *(undefined8 *)(lVar19 + 0x13e0) = puVar11[1];
          *(undefined8 *)(lVar19 + 0x13e8) = puVar11[2];
          *(undefined8 *)(lVar19 + 0x1410) = puVar11[7];
          *(undefined4 *)(lVar19 + 0x1418) = *(undefined4 *)(puVar11 + 8);
          puVar1 = (ushort *)(*(longlong *)(param_1 + 0x6e0) + 0x130);
          *puVar1 = *puVar1 | 0x200;
          FUN_1805a43d0(param_1 + 0x28);
          lVar19 = _DAT_180c8ece0;
          iVar14 = *(int *)(param_1 + 0x18);
          if ((iVar14 != 0) && (lVar8 != 0)) {
            (**(code **)(lVar8 + 0x30))(iVar14);
          }
          (**(code **)(lVar19 + 0x58))(iVar14,1);
          lVar8 = _DAT_180c8f008;
          if ((iVar14 != 0) && (_DAT_180c8f008 != 0)) {
            (**(code **)(_DAT_180c8f008 + 0x18))(iVar14);
            lVar8 = _DAT_180c8f008;
          }
        }
        lVar19 = *(longlong *)(param_1 + 0x6e0);
        if ((0.0 < fVar22) || (*(int *)(lVar19 + 0x1484) != 0)) {
          lVar10 = *(longlong *)(param_1 + 0x8d8);
          if ((-1 < *(int *)(lVar10 + 0x98d930)) &&
             (cVar6 = func_0x000180508270(param_1,lVar10 + 0x30a0 +
                                                  (longlong)*(int *)(lVar10 + 0x98d930) * 0xa60),
             cVar6 != '\0')) {
            uVar13 = *(byte *)(lVar19 + 0x1484) & 1;
            fVar23 = *(float *)(lVar10 + 0x98d27c);
            if (*(float *)(lVar10 + 0x98d27c) <= fVar22) {
              fVar23 = fVar22;
            }
            *(float *)(lVar10 + 0x98d27c) = fVar23;
            if ((int)uVar13 < (int)*(uint *)(lVar10 + 0x98d284)) {
              uVar13 = *(uint *)(lVar10 + 0x98d284);
            }
            *(uint *)(lVar10 + 0x98d284) = uVar13;
          }
        }
      }
      lVar19 = *(longlong *)(param_1 + 0x8d8);
      uVar13 = (uint)*(short *)(lVar19 + 0x52dda0 + lStack_190 * 2);
      uVar17 = (ulonglong)uVar13;
    }
    lVar19 = *(longlong *)(param_1 + 0x6e0);
    if (*(float *)(lVar19 + 0x13d4) < 2.0) {
      if ((*(float *)(lVar19 + 0x13d4) < 0.1) && ((*(byte *)(lVar19 + 0x1484) & 1) != 0)) {
        *(uint *)(lVar19 + 0x1484) = *(uint *)(lVar19 + 0x1484) & 0xfffffffe;
        lVar19 = _DAT_180c8ece0;
        iVar14 = *(int *)(param_1 + 0x18);
        if ((iVar14 != 0) && (lVar8 != 0)) {
          (**(code **)(lVar8 + 0x30))(iVar14);
        }
        (**(code **)(lVar19 + 0x58))(iVar14,0);
        if ((iVar14 != 0) && (_DAT_180c8f008 != 0)) {
          (**(code **)(_DAT_180c8f008 + 0x18))(iVar14);
        }
      }
    }
    else {
      if (0.0 < fVar29) {
        *(uint *)(lVar19 + 0x1484) = *(uint *)(lVar19 + 0x1484) & 0xfffffffe;
        puVar2 = (uint *)(*(longlong *)(param_1 + 0x6e0) + 0x1484);
        *puVar2 = *puVar2 | 2;
        puVar1 = (ushort *)(*(longlong *)(param_1 + 0x6e0) + 0x130);
        *puVar1 = *puVar1 | 0x200;
        *(longlong *)(*(longlong *)(param_1 + 0x6e0) + 0x1470) =
             *(longlong *)
              (&DAT_180c8ed30 + (longlong)*(int *)(*(longlong *)(param_1 + 0x6e0) + 0x1478) * 8) +
             300000;
        *(undefined1 *)(*(longlong *)(param_1 + 0x738) + 0x180) = 1;
        lVar19 = _DAT_180c8ece0;
        iVar14 = *(int *)(param_1 + 0x18);
        if ((iVar14 != 0) && (lVar8 != 0)) {
          (**(code **)(lVar8 + 0x30))(iVar14);
        }
        (**(code **)(lVar19 + 0x58))(iVar14,2);
        if ((iVar14 != 0) && (_DAT_180c8f008 != 0)) {
          (**(code **)(_DAT_180c8f008 + 0x18))(iVar14);
        }
      }
      fVar21 = *(float *)(*(longlong *)(param_1 + 0x6e0) + 0x13d4);
      if (3.0 <= fVar21) {
        fVar21 = 3.0;
      }
      *(float *)(*(longlong *)(param_1 + 0x6e0) + 0x13d4) = fVar21;
    }
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x8d8);
    if ((-1 < *(int *)(lVar8 + 0x98d930)) &&
       (cVar6 = func_0x000180508270(param_1,lVar8 + 0x30a0 +
                                            (longlong)*(int *)(lVar8 + 0x98d930) * 0xa60),
       cVar6 != '\0')) {
      fVar21 = *(float *)(lVar8 + 0x98d27c);
      if (fVar21 <= 2.0) {
        fVar21 = 2.0;
      }
      *(float *)(lVar8 + 0x98d27c) = fVar21;
      iVar14 = 2;
      if (2 < *(int *)(lVar8 + 0x98d284)) {
        iVar14 = *(int *)(lVar8 + 0x98d284);
      }
      *(int *)(lVar8 + 0x98d284) = iVar14;
      lVar19 = *(longlong *)(param_1 + 0x6e0);
    }
    if (((*(uint *)(lVar19 + 0x1484) >> 1 & 1) != 0) &&
       (10.0 <= (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar19 + 0x1478) * 8) -
                       *(longlong *)(lVar19 + 0x1470)) * 1e-05)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8)
                   + 0x48) < _DAT_180d49f60) &&
         (FUN_1808fcb90(&DAT_180d49f60), _DAT_180d49f60 == -1)) {
        puStack_1b0 = &UNK_180a3c3e0;
        uStack_198 = 0;
        puStack_1a8 = (undefined4 *)0x0;
        uStack_1a0 = 0;
        puVar12 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
        *(undefined1 *)puVar12 = 0;
        puStack_1a8 = puVar12;
        uVar7 = FUN_18064e990(puVar12);
        uStack_198 = CONCAT44(uStack_198._4_4_,uVar7);
        *puVar12 = 0x6c6c6559;
        *(undefined1 *)(puVar12 + 1) = 0;
        uStack_1a0 = 4;
        _DAT_180d49f64 = FUN_180571e20(&DAT_180c960c0,&puStack_1b0);
        puStack_1b0 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar12);
      }
      FUN_180508510(param_1,_DAT_180d49f64,0,0);
      lVar19 = *(longlong *)(param_1 + 0x20);
      fStack_1c4 = *(float *)(lVar19 + 0xc);
      fStack_1c0 = *(float *)(lVar19 + 0x10);
      fStack_1bc = *(float *)(*(longlong *)(param_1 + 0x6d8) + 0x904) + *(float *)(lVar19 + 0x14);
      uStack_1b8 = 0x7f7fffff;
      FUN_1804f5d10(*(undefined8 *)(param_1 + 0x8d8),*(undefined4 *)(param_1 + 0x10),&fStack_1c4,
                    0x40a00000);
      *(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x1470) =
           *(undefined8 *)
            (&DAT_180c8ed30 + (longlong)*(int *)(*(longlong *)(param_1 + 0x6e0) + 0x1478) * 8);
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001805086f1)
// WARNING: Removing unreachable block (ram,0x000180508705)
// WARNING: Removing unreachable block (ram,0x00018050870e)
// WARNING: Removing unreachable block (ram,0x000180508724)
// WARNING: Removing unreachable block (ram,0x000180508749)
// WARNING: Removing unreachable block (ram,0x000180508757)
// WARNING: Removing unreachable block (ram,0x00018050874e)
// WARNING: Removing unreachable block (ram,0x00018050875a)
// WARNING: Removing unreachable block (ram,0x000180508798)
// WARNING: Removing unreachable block (ram,0x0001805087b0)
// WARNING: Removing unreachable block (ram,0x0001805087c5)
// WARNING: Removing unreachable block (ram,0x0001805087da)
// WARNING: Removing unreachable block (ram,0x0001805087e5)
// WARNING: Removing unreachable block (ram,0x00018050880c)
// WARNING: Removing unreachable block (ram,0x000180508810)
// WARNING: Removing unreachable block (ram,0x000180508819)
// WARNING: Removing unreachable block (ram,0x000180508826)
// WARNING: Removing unreachable block (ram,0x00018050882b)
// WARNING: Removing unreachable block (ram,0x000180508830)
// WARNING: Removing unreachable block (ram,0x000180508836)
// WARNING: Removing unreachable block (ram,0x00018050887f)
// WARNING: Removing unreachable block (ram,0x000180508892)
// WARNING: Removing unreachable block (ram,0x00018050889e)
// WARNING: Removing unreachable block (ram,0x0001805088a8)
// WARNING: Removing unreachable block (ram,0x0001805088bb)
// WARNING: Removing unreachable block (ram,0x0001805086b2)
// WARNING: Removing unreachable block (ram,0x0001805086e0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805298f0(longlong param_1,int param_2,int param_3,undefined4 param_4,longlong param_5,
void FUN_1805298f0(longlong param_1,int param_2,int param_3,undefined4 param_4,longlong param_5,
                  undefined8 param_6,byte *param_7)

{
  byte *pbVar1;
  short sVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  uint in_stack_ffffffffffffffc8;
  
  lVar4 = *(longlong *)(param_1 + 0x590);
  if (lVar4 == 0) {
    return;
  }
  lVar16 = *(longlong *)(lVar4 + 0x2460 + (longlong)param_2 * 0x48);
  lVar5 = *(longlong *)(lVar4 + 0x2468 + (longlong)param_2 * 0x48);
  if (lVar5 == 0) goto LAB_180529996;
  if ((*(int *)(lVar16 + 0x18c) == *(int *)(param_5 + 0x18c)) &&
     (*(int *)(lVar16 + 400) == *(int *)(param_5 + 400))) {
    iVar12 = *(int *)(lVar16 + 0x20);
    iVar14 = *(int *)(param_5 + 0x20);
    if (iVar12 == iVar14) {
      if (iVar12 != 0) {
        pbVar10 = *(byte **)(lVar16 + 0x18);
        lVar15 = *(longlong *)(param_5 + 0x18) - (longlong)pbVar10;
        do {
          pbVar1 = pbVar10 + lVar15;
          iVar14 = (uint)*pbVar10 - (uint)*pbVar1;
          if (iVar14 != 0) break;
          pbVar10 = pbVar10 + 1;
        } while (*pbVar1 != 0);
      }
    }
    else if (iVar12 != 0) goto LAB_180529993;
    if (iVar14 == 0) goto LAB_180529996;
  }
LAB_180529993:
  lVar16 = lVar5;
LAB_180529996:
  uVar11 = *(ulonglong *)(lVar16 + 0x1d0);
  if ((((uVar11 >> 0xb & 1) == 0) || (param_3 < 3)) && ((uVar11 >> 0x11 & 1) == 0)) {
    if ((uVar11 >> 0xc & 1) == 0) {
      sVar2 = *(short *)(lVar16 + 500);
      if ((*(short *)(lVar16 + 0x7c) == -1) || (1 < param_3)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((sVar2 != -1) && (!bVar6)) {
        if (*(char *)(param_1 + 0x70c) != '\0') {
          if (*(float *)(param_1 + 0x708) < 1.2) {
            return;
          }
          *(float *)(param_1 + 0x708) = *(float *)(param_1 + 0x708) - 1.2;
        }
        lVar4 = *(longlong *)(param_1 + 0x6d8);
        puVar13 = (undefined1 *)0x0;
        if (sVar2 < 0) {
          if (((*(longlong **)(param_1 + 0x6e8) != (longlong *)0x0) &&
              (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0xd8))(), cVar7 != '\0')) &&
             (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x80))(), cVar7 != '\0')) {
            (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x68))();
          }
        }
        else {
          if (((*(uint *)(param_1 + 0x56c) & 0x800) != 0) ||
             (fVar17 = *(float *)(_DAT_180c86878 + 0x1bc) - *(float *)(lVar4 + 0x8e8),
             fVar19 = *(float *)(_DAT_180c86878 + 0x1b8) - *(float *)(lVar4 + 0x8e4),
             fVar20 = *(float *)(_DAT_180c86878 + 0x1c0) - *(float *)(lVar4 + 0x8ec),
             fVar19 * fVar19 + fVar17 * fVar17 + fVar20 * fVar20 <= 100.0)) {
            puVar13 = &stack0x00000008;
          }
          cVar7 = FUN_180544200(*(undefined8 *)(param_1 + 0x6d8),(int)sVar2,0,
                                (float *)(lVar4 + 0x8e4),puVar13,*(undefined4 *)(param_1 + 0x648));
          if (cVar7 != '\0') {
            if (((*(longlong **)(param_1 + 0x6e8) != (longlong *)0x0) &&
                (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0xd8))(), cVar7 != '\0'))
               && (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x80))(), cVar7 != '\0'))
            {
              (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x68))();
            }
            plVar3 = *(longlong **)(param_1 + 0x6e8);
            *(undefined8 *)(param_1 + 0x6e8) = 0;
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x38))();
            }
          }
        }
        return;
      }
    }
    else if ((*(short *)(lVar16 + 0x7c) == -1) || (1 < param_3)) {
      if ((param_2 == 1) && (uVar11 = func_0x000180534e20(lVar4,0), (uVar11 >> 0xc & 1) != 0)) {
        return;
      }
      fVar20 = (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0xa00) * 8) -
                      *(longlong *)(param_1 + 0x9f8)) * 5e-06;
      if ((*(byte *)(param_1 + 0x9f0) == 0) || ((float)*(byte *)(param_1 + 0x9f0) < fVar20)) {
        uVar8 = FUN_18052c030(param_1,7);
        if (*(int *)(param_1 + 0x568) == 1) {
          *(undefined1 *)(param_1 + 0x9f0) = 0;
          return;
        }
        iVar12 = (int)fVar20;
        fVar17 = fVar20;
        if ((iVar12 != -0x80000000) && ((float)iVar12 != fVar20)) {
          auVar18._4_4_ = fVar20;
          auVar18._0_4_ = fVar20;
          auVar18._8_8_ = 0;
          uVar9 = movmskps(uVar8,auVar18);
          fVar17 = (float)(int)(iVar12 + (uVar9 & 1 ^ 1));
        }
        if (fVar20 <= 0.0) {
          fVar17 = fVar17 - 1e-08;
        }
        else {
          fVar17 = fVar17 + 1e-08;
        }
        *(char *)(param_1 + 0x9f0) = (char)(int)fVar17;
      }
      return;
    }
    *param_7 = (byte)(uVar11 >> 0x1d) & 1 ^ 1;
    if ((uVar11 >> 0x1d & 1) != 0) {
      param_6 = 0;
    }
    FUN_1804f83f0(*(undefined8 *)(param_1 + 0x8d8),(int)*(short *)(lVar16 + 0x7c),
                  *(longlong *)(param_1 + 0x20) + 0xc,CONCAT71((int7)((ulonglong)lVar5 >> 8),1),
                  in_stack_ffffffffffffffc8 & 0xffffff00,*(undefined4 *)(param_1 + 0x10),0xffffffff,
                  0,param_6,param_4);
  }
  return;
}





// 函数: void FUN_180529ac0(void)
void FUN_180529ac0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



