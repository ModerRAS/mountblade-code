#include "TaleWorlds.Native.Split.h"

// 03_rendering_part419.c - 8 个函数

// 函数: void FUN_180498590(double param_1,longlong *param_2,int8_t param_3,int32_t param_4,
void FUN_180498590(double param_1,longlong *param_2,int8_t param_3,int32_t param_4,
                  int32_t param_5)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  double dVar4;
  int8_t auVar5 [16];
  int8_t auVar6 [16];
  double dVar7;
  double dVar8;
  uint *puVar9;
  uint *puVar10;
  ushort uVar11;
  longlong lVar12;
  uint *puVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  float *pfVar19;
  uint uVar20;
  int8_t auVar21 [16];
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  uint auStackX_18 [2];
  uint *puStack_148;
  uint *puStack_140;
  uint *puStack_138;
  uint *puStack_130;
  uint *puStack_128;
  int32_t uStack_120;
  uint *puStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  longlong lStack_f0;
  uint64_t uStack_e8;
  
  auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,param_3);
  uStack_e8 = 0xfffffffffffffffe;
  FUN_180499030(param_2,param_4,param_5);
  if (2 < *(ushort *)(param_2 + 2)) {
    puStack_138 = (uint *)0x0;
    puStack_130 = (uint *)0x0;
    puVar10 = (uint *)0x0;
    puStack_128 = (uint *)0x0;
    uStack_120 = 3;
    auStackX_18[0] = 0;
    uVar11 = *(ushort *)(param_2 + 2);
    puVar13 = (uint *)0x0;
    puVar17 = (uint *)0x0;
    if (uVar11 != 0) {
      puStack_118 = (uint *)0x0;
      puStack_140 = (uint *)0x0;
      puStack_148 = (uint *)0x0;
      puVar15 = puVar10;
      puVar16 = puVar10;
      puVar18 = puVar10;
      puVar9 = puVar10;
      do {
        uVar20 = (uint)puVar9;
        if ((uVar20 == 0) || ((int)(uint)uVar11 <= (int)(uVar20 + 1))) {
LAB_1804989c9:
          puVar9 = (uint *)0x0;
          puVar10 = puStack_148;
          puVar16 = puVar18;
          puStack_140 = puStack_148;
          puStack_118 = puVar18;
          if (puVar13 < puVar15) {
            puStack_130 = puVar13 + 1;
            *puVar13 = uVar20;
            puVar13 = puStack_130;
          }
          else {
            lVar12 = (longlong)puVar13 - (longlong)puVar17 >> 2;
            if (lVar12 == 0) {
              lVar12 = 1;
LAB_180498a16:
              puVar9 = (uint *)FUN_18062b420(_DAT_180c8ed18,lVar12 * 4,
                                             CONCAT71((int7)((ulonglong)puStack_148 >> 8),3));
            }
            else {
              lVar12 = lVar12 * 2;
              if (lVar12 != 0) goto LAB_180498a16;
            }
            if (puVar17 != puVar13) {
                    // WARNING: Subroutine does not return
              memmove(puVar9,puVar17,(longlong)puVar13 - (longlong)puVar17);
            }
            *puVar9 = auStackX_18[0];
            puVar13 = puVar9 + 1;
            if (puVar17 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(puVar17);
            }
            puStack_128 = puVar9 + lVar12;
            puVar15 = puStack_128;
            puVar17 = puVar9;
            uVar20 = auStackX_18[0];
            puStack_138 = puVar9;
            puStack_130 = puVar13;
          }
        }
        else {
          lStack_f0 = param_2[1];
          fVar1 = *(float *)(lStack_f0 + (longlong)puVar16 * 4);
          lVar3 = *param_2;
          lVar12 = (longlong)puVar16 + 1;
          if (lVar12 <= (longlong)puVar18) {
            fVar2 = *(float *)(lStack_f0 + 4 + (longlong)puVar18 * 4);
            pfVar19 = (float *)(lVar3 + 0x18 + (longlong)puVar10);
            do {
              dVar29 = (double)*(float *)((longlong)puVar10 + lVar3);
              dVar31 = (double)*(float *)((longlong)puVar10 + lVar3 + 4);
              dVar7 = (double)*(float *)((longlong)puVar10 + lVar3 + 8);
              dVar8 = (double)*(float *)((longlong)puVar10 + lVar3 + 0xc);
              auVar21._0_8_ = dVar8 * dVar8;
              auVar21._8_8_ = 0;
              auVar22._8_8_ = 0;
              auVar22._0_8_ = dVar31 * dVar31 + dVar29 * dVar29 + dVar7 * dVar7 + auVar21._0_8_;
              auVar22 = sqrtpd(auVar21,auVar22);
              dVar27 = 1.0 / auVar22._0_8_;
              dVar25 = (double)*(float *)(lVar3 + 0x10 + (longlong)puStack_148);
              dVar28 = (double)*(float *)(lVar3 + 0x14 + (longlong)puStack_148);
              dVar30 = (double)*(float *)(lVar3 + 0x18 + (longlong)puStack_148);
              dVar26 = (double)*(float *)(lVar3 + 0x1c + (longlong)puStack_148);
              auVar23._0_8_ = dVar26 * dVar26;
              auVar23._8_8_ = 0;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = dVar25 * dVar25 + dVar28 * dVar28 + dVar30 * dVar30 + auVar23._0_8_;
              auVar22 = sqrtpd(auVar23,auVar5);
              dVar4 = 1.0 / auVar22._0_8_;
              dVar25 = dVar25 * dVar4;
              dVar28 = dVar28 * dVar4;
              dVar30 = dVar30 * dVar4;
              dVar26 = dVar26 * dVar4;
              if (dVar28 * dVar31 * dVar27 + dVar25 * dVar29 * dVar27 + dVar30 * dVar7 * dVar27 +
                  dVar26 * dVar8 * dVar27 < 0.0) {
                dVar25 = -dVar25;
                dVar28 = -dVar28;
                dVar30 = -dVar30;
                dVar26 = -dVar26;
              }
              FUN_180498330(&dStack_110,&dStack_108,&dStack_100,&dStack_f8,dVar29 * dVar27,
                            dVar31 * dVar27,dVar7 * dVar27,dVar8 * dVar27,dVar25,dVar28,dVar30,
                            dVar26,(double)((*(float *)(lStack_f0 + lVar12 * 4) - fVar1) *
                                           (1.0 / (fVar2 - fVar1))));
              dVar26 = (double)pfVar19[-2];
              dVar29 = (double)pfVar19[-1];
              dVar31 = (double)*pfVar19;
              dVar4 = (double)pfVar19[1];
              auVar24._0_8_ = dVar4 * dVar4;
              auVar24._8_8_ = 0;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = dVar26 * dVar26 + dVar29 * dVar29 + dVar31 * dVar31 + auVar24._0_8_;
              auVar22 = sqrtpd(auVar24,auVar6);
              dVar27 = 1.0 / auVar22._0_8_;
              dVar26 = dVar26 * dVar27;
              dVar29 = dVar29 * dVar27;
              dVar31 = dVar31 * dVar27;
              dVar4 = dVar4 * dVar27;
              if (dVar26 * dStack_110 + dVar29 * dStack_108 + dVar31 * dStack_100 +
                  dVar4 * dStack_f8 < 0.0) {
                dVar26 = -dVar26;
                dVar29 = -dVar29;
                dVar31 = -dVar31;
                dVar4 = -dVar4;
              }
              dVar27 = dVar26 * dStack_110 + dVar29 * dStack_108 + dVar31 * dStack_100 +
                       dVar4 * dStack_f8;
              if ((1.0 < dVar27) || (dVar27 < -1.0)) {
                dVar27 = 0.0;
              }
              else {
                dVar27 = (double)acos();
                dVar27 = dVar27 + dVar27;
              }
              puVar15 = puStack_128;
              if (param_1 <= dVar27) goto LAB_1804989c9;
              lVar12 = lVar12 + 1;
              pfVar19 = pfVar19 + 4;
              puVar10 = puStack_140;
              puVar16 = puStack_118;
            } while (lVar12 <= (longlong)puVar18);
          }
        }
        auStackX_18[0] = uVar20 + 1;
        puVar9 = (uint *)(ulonglong)auStackX_18[0];
        puVar18 = (uint *)((longlong)puVar18 + 1);
        puStack_148 = puStack_148 + 4;
        uVar11 = *(ushort *)(param_2 + 2);
      } while ((int)auStackX_18[0] < (int)(uint)uVar11);
    }
    uVar14 = (longlong)puVar13 - (longlong)puVar17 >> 2;
    if (uVar11 != uVar14) {
      if (uVar14 < 2) {
        auStackX_18[0] = 0;
        puStack_130 = puVar17;
        FUN_1800571e0(&puStack_138,auStackX_18);
        auStackX_18[0] = *(ushort *)(param_2 + 2) - 1;
        FUN_1800571e0(&puStack_138,auStackX_18);
        puVar17 = puStack_138;
      }
      FUN_180499470(param_2,&puStack_138);
    }
    if (puVar17 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar17);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180498b80(longlong *param_1,uint64_t param_2,uint64_t param_3)
void FUN_180498b80(longlong *param_1,uint64_t param_2,uint64_t param_3)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  float *pfVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  float *pfVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  uint64_t uVar23;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  int *piStack_b0;
  int32_t uStack_a8;
  
  uVar23 = 0xfffffffffffffffe;
  fVar21 = (float)param_3;
  fVar20 = (float)param_2;
  uVar3 = *(ushort *)(param_1 + 2);
  if ((1 < uVar3) && (fVar20 < fVar21)) {
    piVar17 = (int *)0x0;
    piVar10 = piVar17;
    piVar13 = piVar17;
    piVar14 = piVar17;
    piVar16 = piVar17;
    if (uVar3 != 0) {
      do {
        fVar1 = *(float *)(param_1[1] + (longlong)piVar14);
        uVar12 = (uint)piVar10;
        uVar7 = uVar12;
        if (fVar20 < fVar1) {
          uVar7 = (uint)piVar16;
        }
        piVar16 = (int *)(ulonglong)uVar7;
        if (((0 < (int)uVar12) &&
            (fVar2 = *(float *)(param_1[1] + -4 + (longlong)piVar14), fVar2 < fVar20)) &&
           (fVar20 < fVar1)) {
          dVar5 = (double)fVar2;
          dVar6 = ((double)fVar20 - dVar5) / ((double)fVar1 - dVar5);
          lVar19 = *param_1;
          dVar5 = 1.0 - dVar6;
          dVar22 = dVar5 * (double)*(float *)(lVar19 + -0xc + (longlong)piVar13) +
                   (double)*(float *)(lVar19 + 4 + (longlong)piVar13) * dVar6;
          uStack_c0 = (int *)CONCAT44((float)dVar22,
                                      (float)(dVar5 * (double)*(float *)(lVar19 + -0x10 +
                                                                        (longlong)piVar13) +
                                             (double)*(float *)(lVar19 + (longlong)piVar13) * dVar6)
                                     );
          uStack_b8 = (int *)CONCAT44(0x7f7fffff,
                                      (float)(dVar5 * (double)*(float *)(lVar19 + -8 +
                                                                        (longlong)piVar13) +
                                             (double)*(float *)(lVar19 + 8 + (longlong)piVar13) *
                                             dVar6));
          FUN_18040e790(param_1,param_2,&uStack_c0,dVar22,uVar23);
          piVar16 = piVar10;
        }
        uVar3 = *(ushort *)(param_1 + 2);
        piVar10 = (int *)(ulonglong)(uVar12 + 1);
        piVar13 = piVar13 + 4;
        piVar14 = piVar14 + 1;
      } while ((int)(uVar12 + 1) < (int)(uint)uVar3);
    }
    uVar7 = (uint)uVar3;
    iVar18 = uVar7 - 1;
    if (uVar7 != 0) {
      pfVar4 = (float *)param_1[1];
      pfVar8 = pfVar4;
      piVar10 = piVar17;
      do {
        fVar20 = *pfVar8 - fVar21;
        iVar18 = (int)piVar10;
        if ((-0.01 < fVar20) && (fVar20 < 0.01)) break;
        if ((0 < iVar18) && ((pfVar8[-1] <= fVar21 && fVar21 != pfVar8[-1] && (fVar21 < *pfVar8))))
        {
          lVar11 = (longlong)iVar18;
          lVar19 = lVar11 + -1;
          dVar5 = ((double)fVar21 - (double)pfVar4[lVar19]) /
                  ((double)pfVar4[lVar11] - (double)pfVar4[lVar19]);
          lVar9 = *param_1;
          dVar6 = 1.0 - dVar5;
          dVar22 = dVar6 * (double)*(float *)(lVar9 + 4 + lVar19 * 0x10) +
                   (double)*(float *)(lVar9 + 4 + lVar11 * 0x10) * dVar5;
          uStack_c0 = (int *)CONCAT44((float)dVar22,
                                      (float)(dVar6 * (double)*(float *)(lVar9 + lVar19 * 0x10) +
                                             (double)*(float *)(lVar9 + lVar11 * 0x10) * dVar5));
          uStack_b8 = (int *)CONCAT44(0x7f7fffff,
                                      (float)(dVar6 * (double)*(float *)(lVar9 + 8 + lVar19 * 0x10)
                                             + (double)*(float *)(lVar9 + 8 + lVar11 * 0x10) * dVar5
                                             ));
          FUN_18040e790(param_1,param_3,&uStack_c0,dVar22,uVar23);
          break;
        }
        uVar12 = iVar18 + 1;
        piVar10 = (int *)(ulonglong)uVar12;
        pfVar8 = pfVar8 + 1;
        iVar18 = uVar7 - 1;
      } while ((int)uVar12 < (int)uVar7);
    }
    if ((0 < (int)piVar16) || (iVar18 < (int)(*(ushort *)(param_1 + 2) - 1))) {
      uStack_c0 = (int *)0x0;
      uStack_b8 = (int *)0x0;
      piStack_b0 = (int *)0x0;
      uStack_a8 = 3;
      piVar10 = (int *)0x0;
      if ((int)piVar16 <= iVar18) {
        piVar13 = piVar10;
        do {
          piVar14 = uStack_b8;
          iVar15 = (int)piVar16;
          if (uStack_b8 < piVar17) {
            *uStack_b8 = iVar15;
            piVar10 = piVar13;
          }
          else {
            lVar9 = (longlong)uStack_b8 - (longlong)piVar13 >> 2;
            lVar19 = lVar9 * 2;
            if (lVar9 == 0) {
              lVar19 = 1;
            }
            piVar10 = (int *)0x0;
            if (lVar19 != 0) {
              piVar10 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar19 * 4,
                                             CONCAT71((int7)((ulonglong)piVar17 >> 8),3));
            }
            if (piVar13 != piVar14) {
                    // WARNING: Subroutine does not return
              memmove(piVar10,piVar13,(longlong)piVar14 - (longlong)piVar13);
            }
            *piVar10 = iVar15;
            if (piVar13 != (int *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(piVar13);
            }
            piVar17 = piVar10 + lVar19;
            uStack_c0 = piVar10;
            piStack_b0 = piVar17;
            uStack_b8 = piVar10;
          }
          uStack_b8 = uStack_b8 + 1;
          piVar16 = (int *)(ulonglong)(iVar15 + 1U);
          piVar13 = piVar10;
        } while ((int)(iVar15 + 1U) <= iVar18);
      }
      FUN_180499350(param_1,&uStack_c0);
      if (piVar10 != (int *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(piVar10);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180499030(longlong *param_1,uint64_t param_2,uint64_t param_3)
void FUN_180499030(longlong *param_1,uint64_t param_2,uint64_t param_3)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  float *pfVar4;
  double dVar5;
  int *piVar6;
  uint uVar7;
  float *pfVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  uint64_t uVar20;
  int *piStack_68;
  int *piStack_60;
  int *piStack_58;
  int32_t uStack_50;
  
  fVar19 = (float)param_3;
  uVar20 = 0xfffffffffffffffe;
  fVar18 = (float)param_2;
  uVar3 = *(ushort *)(param_1 + 2);
  if ((1 < uVar3) && (fVar18 < fVar19)) {
    piVar11 = (int *)0x0;
    piVar10 = piVar11;
    piVar14 = piVar11;
    piVar15 = piVar11;
    if (uVar3 != 0) {
      do {
        fVar1 = *(float *)(param_1[1] + (longlong)piVar15);
        uVar12 = (uint)piVar10;
        uVar7 = uVar12;
        if (fVar18 < fVar1) {
          uVar7 = (uint)piVar14;
        }
        piVar14 = (int *)(ulonglong)uVar7;
        if (((0 < (int)uVar12) &&
            (fVar2 = *(float *)(param_1[1] + -4 + (longlong)piVar15), fVar2 < fVar18)) &&
           (fVar18 < fVar1)) {
          dVar5 = (double)fVar2;
          FUN_180496490(&piStack_68,(longlong)(int)(uVar12 - 1) * 0x10 + *param_1,
                        (longlong)(int)uVar12 * 0x10 + *param_1,
                        ((double)fVar18 - dVar5) / ((double)fVar1 - dVar5),uVar20);
          FUN_18040e930(param_1,param_2,&piStack_68);
          piVar14 = piVar10;
        }
        uVar3 = *(ushort *)(param_1 + 2);
        piVar10 = (int *)(ulonglong)(uVar12 + 1);
        piVar15 = piVar15 + 1;
      } while ((int)(uVar12 + 1) < (int)(uint)uVar3);
    }
    uVar7 = (uint)uVar3;
    iVar16 = uVar7 - 1;
    if (uVar7 != 0) {
      pfVar4 = (float *)param_1[1];
      pfVar8 = pfVar4;
      piVar10 = piVar11;
      do {
        fVar18 = *pfVar8 - fVar19;
        iVar16 = (int)piVar10;
        if ((-0.01 < fVar18) && (fVar18 < 0.01)) break;
        if ((0 < iVar16) && ((pfVar8[-1] <= fVar19 && fVar19 != pfVar8[-1] && (fVar19 < *pfVar8))))
        {
          lVar17 = (longlong)iVar16;
          FUN_180496490(&piStack_68,(lVar17 + -1) * 0x10 + *param_1,lVar17 * 0x10 + *param_1,
                        ((double)fVar19 - (double)pfVar4[lVar17 + -1]) /
                        ((double)pfVar4[lVar17] - (double)pfVar4[lVar17 + -1]),uVar20);
          FUN_18040e930(param_1,param_3,&piStack_68);
          break;
        }
        uVar12 = iVar16 + 1;
        piVar10 = (int *)(ulonglong)uVar12;
        pfVar8 = pfVar8 + 1;
        iVar16 = uVar7 - 1;
      } while ((int)uVar12 < (int)uVar7);
    }
    if ((0 < (int)piVar14) || (iVar16 < (int)(*(ushort *)(param_1 + 2) - 1))) {
      piStack_68 = (int *)0x0;
      piStack_60 = (int *)0x0;
      piStack_58 = (int *)0x0;
      uStack_50 = 3;
      piVar10 = (int *)0x0;
      if ((int)piVar14 <= iVar16) {
        piVar15 = piVar10;
        do {
          piVar6 = piStack_60;
          iVar13 = (int)piVar14;
          if (piStack_60 < piVar11) {
            *piStack_60 = iVar13;
            piVar10 = piVar15;
          }
          else {
            lVar9 = (longlong)piStack_60 - (longlong)piVar15 >> 2;
            lVar17 = lVar9 * 2;
            if (lVar9 == 0) {
              lVar17 = 1;
            }
            piVar10 = (int *)0x0;
            if (lVar17 != 0) {
              piVar10 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar17 * 4,
                                             CONCAT71((int7)((ulonglong)piStack_60 >> 8),3));
            }
            if (piVar15 != piVar6) {
                    // WARNING: Subroutine does not return
              memmove(piVar10,piVar15,(longlong)piVar6 - (longlong)piVar15);
            }
            *piVar10 = iVar13;
            if (piVar15 != (int *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(piVar15);
            }
            piVar11 = piVar10 + lVar17;
            piStack_68 = piVar10;
            piStack_58 = piVar11;
            piStack_60 = piVar10;
          }
          piStack_60 = piStack_60 + 1;
          piVar14 = (int *)(ulonglong)(iVar13 + 1U);
          piVar15 = piVar10;
        } while ((int)(iVar13 + 1U) <= iVar16);
      }
      FUN_180499470(param_1,&piStack_68);
      if (piVar10 != (int *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(piVar10);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180499350(ulonglong *param_1,longlong *param_2)
void FUN_180499350(ulonglong *param_1,longlong *param_2)

{
  int *piVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  short sVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar4 = (uint64_t *)param_1[1];
  uVar13 = 0;
  uVar14 = *param_1;
  uVar9 = (longlong)(ulonglong)(uint)((int)param_2[1] - (int)*param_2) >> 2;
  *(short *)(param_1 + 2) = (short)uVar9;
  if ((short)uVar9 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar10 = uVar13;
    if ((uVar9 & 0xffff) != 0) {
      uVar10 = FUN_18062b420(_DAT_180c8ed18,(uVar9 & 0xffff) << 4,4);
      uVar9 = (ulonglong)(ushort)param_1[2];
    }
    sVar8 = (short)uVar9;
    *param_1 = uVar10;
    uVar10 = uVar13;
    if ((uVar9 & 0xffff) != 0) {
      uVar10 = FUN_18062b420(_DAT_180c8ed18,(uVar9 & 0xffff) * 4,4);
      sVar8 = (short)param_1[2];
    }
    param_1[1] = uVar10;
    uVar9 = uVar13;
    uVar10 = uVar13;
    if (sVar8 != 0) {
      do {
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        lVar11 = (longlong)*(int *)(*param_2 + -4 + uVar9 + 4);
        puVar3 = (int32_t *)(uVar14 + lVar11 * 0x10);
        uVar5 = puVar3[1];
        uVar6 = puVar3[2];
        uVar7 = puVar3[3];
        puVar2 = (int32_t *)(uVar10 + *param_1);
        *puVar2 = *puVar3;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        *(int32_t *)(uVar9 + param_1[1]) = *(int32_t *)((longlong)puVar4 + lVar11 * 4);
        uVar9 = uVar9 + 4;
        uVar10 = uVar10 + 0x10;
      } while ((int)uVar12 < (int)(uint)(ushort)param_1[2]);
    }
  }
  if (uVar14 == 0) {
    if (puVar4 == (uint64_t *)0x0) {
      return;
    }
    uVar14 = (ulonglong)puVar4 & 0xffffffffffc00000;
    if (uVar14 != 0) {
      lVar11 = uVar14 + 0x80 + ((longlong)puVar4 - uVar14 >> 0x10) * 0x50;
      lVar11 = lVar11 - (ulonglong)*(uint *)(lVar11 + 4);
      if ((*(void ***)(uVar14 + 0x70) == &ExceptionList) && (*(char *)(lVar11 + 0xe) == '\0')) {
        *puVar4 = *(uint64_t *)(lVar11 + 0x20);
        *(uint64_t **)(lVar11 + 0x20) = puVar4;
        piVar1 = (int *)(lVar11 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar14,CONCAT71(0xff000000,*(void ***)(uVar14 + 0x70) == &ExceptionList)
                            ,puVar4,uVar14,0xfffffffffffffffe);
      }
    }
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(uVar14);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049935f(ulonglong *param_1,longlong *param_2)
void FUN_18049935f(ulonglong *param_1,longlong *param_2)

{
  int *piVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  short sVar7;
  longlong in_RAX;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint64_t *unaff_RSI;
  ulonglong uVar13;
  
  uVar12 = 0;
  uVar13 = *param_1;
  uVar8 = in_RAX >> 2;
  *(short *)(param_1 + 2) = (short)uVar8;
  if ((short)uVar8 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar9 = uVar12;
    if ((uVar8 & 0xffff) != 0) {
      uVar9 = FUN_18062b420(_DAT_180c8ed18,(uVar8 & 0xffff) << 4,4);
      uVar8 = (ulonglong)(ushort)param_1[2];
    }
    sVar7 = (short)uVar8;
    *param_1 = uVar9;
    uVar9 = uVar12;
    if ((uVar8 & 0xffff) != 0) {
      uVar9 = FUN_18062b420(_DAT_180c8ed18,(uVar8 & 0xffff) * 4,4);
      sVar7 = (short)param_1[2];
    }
    param_1[1] = uVar9;
    uVar8 = uVar12;
    uVar9 = uVar12;
    if (sVar7 != 0) {
      do {
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
        lVar10 = (longlong)*(int *)(*param_2 + -4 + uVar8 + 4);
        puVar3 = (int32_t *)(uVar13 + lVar10 * 0x10);
        uVar4 = puVar3[1];
        uVar5 = puVar3[2];
        uVar6 = puVar3[3];
        puVar2 = (int32_t *)(uVar9 + *param_1);
        *puVar2 = *puVar3;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        *(int32_t *)(uVar8 + param_1[1]) = *(int32_t *)((longlong)unaff_RSI + lVar10 * 4);
        uVar8 = uVar8 + 4;
        uVar9 = uVar9 + 0x10;
      } while ((int)uVar11 < (int)(uint)(ushort)param_1[2]);
    }
  }
  if (uVar13 == 0) {
    if (unaff_RSI == (uint64_t *)0x0) {
      return;
    }
    uVar13 = (ulonglong)unaff_RSI & 0xffffffffffc00000;
    if (uVar13 != 0) {
      lVar10 = uVar13 + 0x80 + ((longlong)unaff_RSI - uVar13 >> 0x10) * 0x50;
      lVar10 = lVar10 - (ulonglong)*(uint *)(lVar10 + 4);
      if ((*(void ***)(uVar13 + 0x70) == &ExceptionList) && (*(char *)(lVar10 + 0xe) == '\0')) {
        *unaff_RSI = *(uint64_t *)(lVar10 + 0x20);
        *(uint64_t **)(lVar10 + 0x20) = unaff_RSI;
        piVar1 = (int *)(lVar10 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar13,CONCAT71(0xff000000,*(void ***)(uVar13 + 0x70) == &ExceptionList)
                           );
      }
    }
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(uVar13);
}





// 函数: void FUN_180499449(void)
void FUN_180499449(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18049945b(void)
void FUN_18049945b(void)

{
  int *piVar1;
  longlong lVar2;
  uint64_t *unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)unaff_RSI & 0xffffffffffc00000;
  if (uVar3 != 0) {
    lVar2 = uVar3 + 0x80 + ((longlong)unaff_RSI - uVar3 >> 0x10) * 0x50;
    lVar2 = lVar2 - (ulonglong)*(uint *)(lVar2 + 4);
    if ((*(void ***)(uVar3 + 0x70) == &ExceptionList) && (*(char *)(lVar2 + 0xe) == '\0')) {
      *unaff_RSI = *(uint64_t *)(lVar2 + 0x20);
      *(uint64_t **)(lVar2 + 0x20) = unaff_RSI;
      piVar1 = (int *)(lVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar3,CONCAT71(0xff000000,*(void ***)(uVar3 + 0x70) == &ExceptionList));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180499470(longlong *param_1,longlong *param_2)
void FUN_180499470(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  int iVar4;
  uint64_t *puVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  short sVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  
  puVar5 = (uint64_t *)param_1[1];
  lVar13 = *param_1;
  uVar10 = (longlong)(ulonglong)(uint)((int)param_2[1] - (int)*param_2) >> 2;
  *(short *)(param_1 + 2) = (short)uVar10;
  if ((short)uVar10 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if ((uVar10 & 0xffff) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = FUN_18062b420(_DAT_180c8ed18,(uVar10 & 0xffff) << 4,4);
      uVar10 = (ulonglong)*(ushort *)(param_1 + 2);
    }
    uVar15 = 0;
    sVar9 = (short)uVar10;
    *param_1 = lVar11;
    uVar12 = uVar15;
    if ((uVar10 & 0xffff) != 0) {
      uVar12 = FUN_18062b420(_DAT_180c8ed18,(uVar10 & 0xffff) * 4,4);
      sVar9 = (short)param_1[2];
    }
    param_1[1] = uVar12;
    uVar10 = uVar15;
    uVar12 = uVar15;
    if (sVar9 != 0) {
      do {
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
        iVar4 = *(int *)(uVar10 + *param_2);
        puVar3 = (int32_t *)(lVar13 + (longlong)iVar4 * 0x10);
        uVar6 = puVar3[1];
        uVar7 = puVar3[2];
        uVar8 = puVar3[3];
        puVar2 = (int32_t *)(uVar12 + *param_1);
        *puVar2 = *puVar3;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        *(int32_t *)(uVar10 + param_1[1]) =
             *(int32_t *)((longlong)puVar5 + (longlong)iVar4 * 4);
        uVar10 = uVar10 + 4;
        uVar12 = uVar12 + 0x10;
      } while ((int)uVar14 < (int)(uint)*(ushort *)(param_1 + 2));
    }
  }
  if (lVar13 == 0) {
    if (puVar5 == (uint64_t *)0x0) {
      return;
    }
    uVar10 = (ulonglong)puVar5 & 0xffffffffffc00000;
    if (uVar10 != 0) {
      lVar13 = uVar10 + 0x80 + ((longlong)puVar5 - uVar10 >> 0x10) * 0x50;
      lVar13 = lVar13 - (ulonglong)*(uint *)(lVar13 + 4);
      if ((*(void ***)(uVar10 + 0x70) == &ExceptionList) && (*(char *)(lVar13 + 0xe) == '\0')) {
        *puVar5 = *(uint64_t *)(lVar13 + 0x20);
        *(uint64_t **)(lVar13 + 0x20) = puVar5;
        piVar1 = (int *)(lVar13 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar10,CONCAT71(0xff000000,*(void ***)(uVar10 + 0x70) == &ExceptionList)
                            ,puVar5,uVar10,0xfffffffffffffffe);
      }
    }
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar13);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



