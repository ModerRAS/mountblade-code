#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part173.c - 5 个函数

// 函数: void FUN_180374902(uint64_t param_1,uint64_t param_2,int param_3,int param_4,int param_5,
void FUN_180374902(uint64_t param_1,uint64_t param_2,int param_3,int param_4,int param_5,
                  uint64_t param_6,uint64_t param_7,uint64_t param_8,uint64_t param_9,
                  uint64_t param_10,uint64_t param_11,float param_12,uint64_t param_13,
                  uint64_t param_14,int *param_15)

{
  float *pfVar1;
  int *piVar2;
  int *piVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int in_EAX;
  uint64_t *puVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int32_t *puVar17;
  ulonglong uVar18;
  int *piVar19;
  longlong lVar20;
  int iVar21;
  uint64_t unaff_RBX;
  uint64_t *unaff_RBP;
  int iVar22;
  uint64_t unaff_RSI;
  longlong unaff_RDI;
  longlong lVar23;
  longlong in_R11;
  uint64_t unaff_R12;
  longlong lVar24;
  int iVar25;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  float fVar26;
  float fVar27;
  float fVar28;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  float fVar29;
  int32_t unaff_XMM7_Da;
  int32_t uVar30;
  int32_t unaff_XMM7_Db;
  int32_t uVar31;
  int32_t unaff_XMM7_Dc;
  int32_t uVar32;
  int32_t unaff_XMM7_Dd;
  int32_t uVar33;
  int32_t unaff_XMM8_Da;
  float fVar34;
  float fVar35;
  int32_t unaff_XMM8_Db;
  float fVar36;
  int32_t unaff_XMM8_Dc;
  float fVar37;
  int32_t unaff_XMM8_Dd;
  float fVar38;
  int32_t unaff_XMM9_Da;
  float fVar39;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Db;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM14_Dd;
  int32_t unaff_XMM15_Da;
  int32_t unaff_XMM15_Db;
  int32_t unaff_XMM15_Dc;
  int32_t unaff_XMM15_Dd;
  int iStackX_20;
  int iStackX_24;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RBX;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RSI;
  *(uint64_t *)(in_R11 + 0x20) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x18) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM10_Dd;
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM11_Dd;
  *(int32_t *)(in_R11 + -0x98) = unaff_XMM12_Da;
  *(int32_t *)(in_R11 + -0x94) = unaff_XMM12_Db;
  *(int32_t *)(in_R11 + -0x90) = unaff_XMM12_Dc;
  *(int32_t *)(in_R11 + -0x8c) = unaff_XMM12_Dd;
  *(int32_t *)(in_R11 + -0xa8) = unaff_XMM13_Da;
  *(int32_t *)(in_R11 + -0xa4) = unaff_XMM13_Db;
  *(int32_t *)(in_R11 + -0xa0) = unaff_XMM13_Dc;
  *(int32_t *)(in_R11 + -0x9c) = unaff_XMM13_Dd;
  *(int32_t *)(in_R11 + -0xb8) = unaff_XMM14_Da;
  *(int32_t *)(in_R11 + -0xb4) = unaff_XMM14_Db;
  *(int32_t *)(in_R11 + -0xb0) = unaff_XMM14_Dc;
  *(int32_t *)(in_R11 + -0xac) = unaff_XMM14_Dd;
  *(int32_t *)(in_R11 + -200) = unaff_XMM15_Da;
  *(int32_t *)(in_R11 + -0xc4) = unaff_XMM15_Db;
  *(int32_t *)(in_R11 + -0xc0) = unaff_XMM15_Dc;
  *(int32_t *)(in_R11 + -0xbc) = unaff_XMM15_Dd;
  do {
    iVar25 = 0;
    if (0 < in_EAX) {
      do {
        param_3 = param_3 * 4;
        param_6 = 0x4cbebc204cbebc20;
        param_7 = 0x7f7fffff4cbebc20;
        lVar24 = 4;
        param_7._0_4_ = 1e+08;
        param_6._4_4_ = 1e+08;
        param_6._0_4_ = 1e+08;
        param_8 = 0xccbebc20ccbebc20;
        param_9 = 0x7f7fffffccbebc20;
        param_9._0_4_ = -1e+08;
        param_8._4_4_ = -1e+08;
        param_8._0_4_ = -1e+08;
        fVar35 = (float)param_6;
        fVar38 = param_8._4_4_;
        fVar34 = (float)param_8;
        fVar39 = (float)param_9;
        fVar37 = (float)param_7;
        fVar36 = param_6._4_4_;
        do {
          iVar22 = 0;
          do {
            lVar20 = *(longlong *)(unaff_RDI + 0x110);
            iVar21 = *(int *)(unaff_RDI + 0x58) * param_3 + iVar25 * 4 + iVar22;
            uVar18 = (ulonglong)(longlong)iVar21 % (ulonglong)*(uint *)(unaff_RDI + 0x118);
            piVar2 = *(int **)(lVar20 + uVar18 * 8);
            for (piVar3 = piVar2; piVar3 != (int *)0x0; piVar3 = *(int **)(piVar3 + 4)) {
              if (iVar21 == *piVar3) {
                if (piVar3 != (int *)0x0) {
                  lVar23 = *(longlong *)(unaff_RDI + 0x118);
                  param_15 = piVar3;
                  puVar14 = &param_15;
                  unaff_RBP[-0x10] = lVar20 + uVar18 * 8;
                  goto LAB_180374a51;
                }
                break;
              }
            }
            lVar23 = *(longlong *)(unaff_RDI + 0x118);
            unaff_RBP[-0xf] = *(uint64_t *)(lVar20 + lVar23 * 8);
            puVar14 = unaff_RBP + -0xf;
            unaff_RBP[-0xe] = lVar20 + lVar23 * 8;
LAB_180374a51:
            piVar3 = *(int **)(lVar20 + lVar23 * 8);
            if ((int *)*puVar14 != piVar3) {
              for (; (piVar19 = piVar3, piVar2 != (int *)0x0 &&
                     (piVar19 = piVar2, iVar21 != *piVar2)); piVar2 = *(int **)(piVar2 + 4)) {
              }
              if (piVar19 == piVar3) {
                uVar15 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,
                                       CONCAT71((int7)((ulonglong)lVar20 >> 8),3));
                uVar16 = *(uint64_t *)(unaff_RDI + 0x68);
                *(int *)(unaff_RBP + -0xd) = iVar21;
                uVar16 = FUN_180372430(uVar15,uVar16);
                unaff_RBP[-0xc] = uVar16;
                puVar17 = (int32_t *)
                          FUN_18037f020(unaff_RDI + 0x108,unaff_RBP + -9,unaff_RBP + -0xd);
                uVar30 = puVar17[1];
                uVar31 = puVar17[2];
                uVar32 = puVar17[3];
                *(int32_t *)(unaff_RBP + -0xb) = *puVar17;
                *(int32_t *)((longlong)unaff_RBP + -0x54) = uVar30;
                *(int32_t *)(unaff_RBP + -10) = uVar31;
                *(int32_t *)((longlong)unaff_RBP + -0x4c) = uVar32;
                piVar19 = (int *)unaff_RBP[-0xb];
              }
              lVar20 = *(longlong *)(piVar19 + 2);
              if (*(float *)(lVar20 + 0x48) != 0.0) {
                fVar29 = *(float *)(lVar20 + 0x18);
                fVar26 = *(float *)(lVar20 + 0x28);
                if (fVar29 <= fVar26) {
                  if (fVar29 < fVar35) {
                    fVar35 = fVar29;
                  }
                  if (*(float *)(lVar20 + 0x1c) < fVar36) {
                    fVar36 = *(float *)(lVar20 + 0x1c);
                  }
                  if (*(float *)(lVar20 + 0x20) < fVar37) {
                    fVar37 = *(float *)(lVar20 + 0x20);
                  }
                  if (fVar34 < fVar26) {
                    param_8 = CONCAT44(param_8._4_4_,fVar26);
                    fVar34 = fVar26;
                  }
                  fVar29 = *(float *)(lVar20 + 0x2c);
                  if (fVar38 < fVar29) {
                    param_8 = CONCAT44(fVar29,(float)param_8);
                    fVar38 = fVar29;
                  }
                  fVar29 = *(float *)(lVar20 + 0x30);
                  if (fVar39 < fVar29) {
                    param_9 = CONCAT44(param_9._4_4_,fVar29);
                    fVar39 = fVar29;
                  }
                }
              }
            }
            iVar22 = iVar22 + 1;
          } while (iVar22 < 4);
          param_3 = param_3 + 1;
          param_7 = CONCAT44(param_7._4_4_,fVar37);
          param_6 = CONCAT44(fVar36,fVar35);
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        if (fVar34 < fVar35) {
          fVar35 = 0.0;
          fVar36 = 0.0;
          fVar37 = 0.0;
          fVar38 = 0.0;
          param_12 = 0.0;
          uVar30 = 0;
          uVar31 = 0;
          uVar32 = 0;
          uVar33 = 0;
          fVar28 = 0.0;
          fVar27 = 0.0;
          fVar26 = 0.0;
          fVar29 = 0.0;
          param_6 = 0;
          param_7 = 0;
          param_8 = 0;
          param_9 = 0;
        }
        else {
          fVar29 = 3.4028235e+38;
          fVar27 = (fVar38 + fVar36) * 0.5;
          fVar28 = (fVar34 + fVar35) * 0.5;
          fVar26 = (fVar39 + fVar37) * 0.5;
          param_14._4_4_ = 0x7f7fffff;
          param_12 = SQRT((fVar38 - fVar27) * (fVar38 - fVar27) +
                          (fVar34 - fVar28) * (fVar34 - fVar28) +
                          (fVar39 - fVar26) * (fVar39 - fVar26));
          uVar30 = (float)param_8;
          uVar31 = param_8._4_4_;
          uVar32 = (float)param_9;
          uVar33 = param_9._4_4_;
          fVar38 = param_7._4_4_;
          param_13._0_4_ = fVar28;
          param_13._4_4_ = fVar27;
          param_14._0_4_ = fVar26;
        }
        unaff_RBP[-6] = 0;
        unaff_RBP[-5] = 0x7f7fffff00000000;
        unaff_RBP[-2] = 0;
        unaff_RBP[-1] = 0x7f7fffff00000000;
        *(int32_t *)unaff_RBP = 0;
        *(int32_t *)((longlong)unaff_RBP + 4) = 0;
        *(int32_t *)(unaff_RBP + 1) = 0;
        *(int32_t *)((longlong)unaff_RBP + 0xc) = 0;
        *(int32_t *)(unaff_RBP + 2) = 0;
        *(int32_t *)((longlong)unaff_RBP + 0x14) = 0;
        *(int32_t *)(unaff_RBP + 3) = 0;
        *(int32_t *)((longlong)unaff_RBP + 0x1c) = 0;
        *(int32_t *)(unaff_RBP + 4) = 0;
        *(int32_t *)((longlong)unaff_RBP + 0x24) = 0;
        *(int32_t *)(unaff_RBP + 5) = 0;
        *(int32_t *)((longlong)unaff_RBP + 0x2c) = 0;
        *(int32_t *)(unaff_RBP + 6) = 0;
        *(int32_t *)((longlong)unaff_RBP + 0x34) = 0;
        *(int32_t *)(unaff_RBP + 7) = 0;
        *(int32_t *)((longlong)unaff_RBP + 0x3c) = 0;
        *(int32_t *)(unaff_RBP + 8) = 0;
        *(int32_t *)((longlong)unaff_RBP + 0x44) = 0;
        *(int32_t *)(unaff_RBP + 9) = 0;
        *(int32_t *)((longlong)unaff_RBP + 0x4c) = 0;
        *(int32_t *)(unaff_RBP + 10) = 0;
        *(int32_t *)((longlong)unaff_RBP + 0x54) = 0;
        *(int32_t *)(unaff_RBP + 0xb) = 0;
        *(int32_t *)((longlong)unaff_RBP + 0x5c) = 0;
        *(int32_t *)(unaff_RBP + 0xc) = 0;
        *(int32_t *)((longlong)unaff_RBP + 100) = 0;
        *(int32_t *)(unaff_RBP + 0xd) = 0;
        *(int32_t *)((longlong)unaff_RBP + 0x6c) = 0;
        *(int32_t *)(unaff_RBP + 0xe) = 0;
        *(int32_t *)((longlong)unaff_RBP + 0x74) = 0;
        *(int32_t *)(unaff_RBP + 0xf) = 0;
        *(int32_t *)((longlong)unaff_RBP + 0x7c) = 0;
        unaff_RBP[0x10] = 0;
        unaff_RBP[-4] = 0;
        unaff_RBP[-3] = 0x7f7fffff00000000;
        param_10._0_4_ = fVar28;
        param_10._4_4_ = fVar27;
        param_11._0_4_ = fVar26;
        param_11._4_4_ = fVar29;
        FUN_18063ad30(unaff_RBP + -6,&param_6,&system_counter_0300);
        lVar24 = (longlong)(*(int *)(unaff_RDI + 0x60) * iStackX_24 + iVar25) * 0x130 +
                 *(longlong *)(unaff_RDI + 0x138);
        uVar16 = unaff_RBP[-5];
        uVar15 = unaff_RBP[-4];
        uVar12 = unaff_RBP[-3];
        *(uint64_t *)(lVar24 + 8) = unaff_RBP[-6];
        *(uint64_t *)(lVar24 + 0x10) = uVar16;
        uVar16 = unaff_RBP[-2];
        uVar13 = unaff_RBP[-1];
        *(uint64_t *)(lVar24 + 0x18) = uVar15;
        *(uint64_t *)(lVar24 + 0x20) = uVar12;
        uVar15 = *unaff_RBP;
        uVar12 = unaff_RBP[1];
        *(uint64_t *)(lVar24 + 0x28) = uVar16;
        *(uint64_t *)(lVar24 + 0x30) = uVar13;
        uVar16 = unaff_RBP[2];
        uVar13 = unaff_RBP[3];
        *(uint64_t *)(lVar24 + 0x38) = uVar15;
        *(uint64_t *)(lVar24 + 0x40) = uVar12;
        uVar15 = unaff_RBP[4];
        uVar12 = unaff_RBP[5];
        *(uint64_t *)(lVar24 + 0x48) = uVar16;
        *(uint64_t *)(lVar24 + 0x50) = uVar13;
        uVar16 = unaff_RBP[6];
        uVar13 = unaff_RBP[7];
        *(uint64_t *)(lVar24 + 0x58) = uVar15;
        *(uint64_t *)(lVar24 + 0x60) = uVar12;
        uVar15 = unaff_RBP[8];
        uVar12 = unaff_RBP[9];
        *(uint64_t *)(lVar24 + 0x68) = uVar16;
        *(uint64_t *)(lVar24 + 0x70) = uVar13;
        uVar16 = unaff_RBP[10];
        uVar13 = unaff_RBP[0xb];
        *(uint64_t *)(lVar24 + 0x78) = uVar15;
        *(uint64_t *)(lVar24 + 0x80) = uVar12;
        uVar4 = *(int32_t *)(unaff_RBP + 0xc);
        uVar5 = *(int32_t *)((longlong)unaff_RBP + 100);
        uVar6 = *(int32_t *)(unaff_RBP + 0xd);
        uVar7 = *(int32_t *)((longlong)unaff_RBP + 0x6c);
        *(uint64_t *)(lVar24 + 0x88) = uVar16;
        *(uint64_t *)(lVar24 + 0x90) = uVar13;
        uVar8 = *(int32_t *)(unaff_RBP + 0xe);
        uVar9 = *(int32_t *)((longlong)unaff_RBP + 0x74);
        uVar10 = *(int32_t *)(unaff_RBP + 0xf);
        uVar11 = *(int32_t *)((longlong)unaff_RBP + 0x7c);
        uVar16 = unaff_RBP[0x10];
        *(int32_t *)(lVar24 + 0x98) = uVar4;
        *(int32_t *)(lVar24 + 0x9c) = uVar5;
        *(int32_t *)(lVar24 + 0xa0) = uVar6;
        *(int32_t *)(lVar24 + 0xa4) = uVar7;
        *(int32_t *)(lVar24 + 0xa8) = uVar8;
        *(int32_t *)(lVar24 + 0xac) = uVar9;
        *(int32_t *)(lVar24 + 0xb0) = uVar10;
        *(int32_t *)(lVar24 + 0xb4) = uVar11;
        *(uint64_t *)(lVar24 + 0xb8) = uVar16;
        lVar24 = *(longlong *)(unaff_RDI + 0x138);
        iVar22 = *(int *)(unaff_RDI + 0x60) * iStackX_24 + iVar25;
        iVar25 = iVar25 + 1;
        lVar20 = (longlong)iVar22 * 0x130;
        pfVar1 = (float *)(lVar20 + 0xc0 + lVar24);
        *pfVar1 = fVar35;
        pfVar1[1] = fVar36;
        pfVar1[2] = fVar37;
        pfVar1[3] = fVar38;
        puVar17 = (int32_t *)(lVar20 + 0xd0 + lVar24);
        *puVar17 = uVar30;
        puVar17[1] = uVar31;
        puVar17[2] = uVar32;
        puVar17[3] = uVar33;
        pfVar1 = (float *)(lVar20 + 0xe0 + lVar24);
        *pfVar1 = fVar28;
        pfVar1[1] = fVar27;
        pfVar1[2] = fVar26;
        pfVar1[3] = fVar29;
        *(float *)(lVar20 + 0xf0 + lVar24) = param_12;
        in_EAX = iStackX_20;
        param_3 = iStackX_24;
        param_4 = param_5;
      } while (iVar25 < iStackX_20);
    }
    iStackX_24 = param_3 + 1;
    param_3 = iStackX_24;
    if (param_4 <= iStackX_24) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(unaff_RBP[0x12] ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}





// 函数: void FUN_180374e41(void)
void FUN_180374e41(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x90) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180374e60(longlong param_1)
void FUN_180374e60(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar1 = _Mtx_lock(param_1 + 0x20f0);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  plVar4 = (longlong *)(param_1 + 0x2160);
  lVar5 = 4;
  do {
    lVar2 = *plVar4;
    iVar1 = 0;
    if (plVar4[1] - lVar2 >> 3 != 0) {
      lVar3 = 0;
      do {
        lVar2 = **(longlong **)(lVar3 + lVar2);
        if (lVar2 != 0) {
          FUN_180372980(lVar2);
          *(int8_t *)(lVar2 + 0x141) = 0;
        }
        lVar2 = *plVar4;
        iVar1 = iVar1 + 1;
        lVar3 = lVar3 + 8;
      } while ((ulonglong)(longlong)iVar1 < (ulonglong)(plVar4[1] - lVar2 >> 3));
    }
    plVar4 = plVar4 + 4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar1 = _Mtx_unlock(param_1 + 0x20f0);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180374f40(longlong param_1,longlong param_2)
void FUN_180374f40(longlong param_1,longlong param_2)

{
  uint64_t *puVar1;
  longlong lVar2;
  double dVar3;
  uint64_t uVar4;
  uint uVar5;
  int32_t ***pppuVar6;
  int8_t uVar7;
  longlong lVar8;
  longlong *plVar9;
  int32_t **ppuStackX_18;
  int32_t ***pppuStackX_20;
  uint64_t in_stack_ffffffffffffff58;
  int32_t uVar10;
  longlong lStack_98;
  int32_t ***pppuStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  int32_t *apuStack_60 [2];
  code *pcStack_50;
  code *pcStack_48;
  
  uVar10 = (int32_t)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  uStack_88 = 0xfffffffffffffffe;
  if ((*(char *)(_DAT_180c86870 + 0xfa) != '\0') &&
     (*(int *)(*(longlong *)(param_2 + 0x3580) + 0x110) != 0)) {
    *(int32_t *)(param_1 + 0x2150) = *(int32_t *)(*(longlong *)(param_1 + 0x2148) + 0x3054);
    FUN_1803769d0();
    uVar7 = 0;
    if ((*(int *)(*(longlong *)(param_1 + 0x2148) + 0x27c0) == 7) &&
       (*(int *)(param_1 + 0x2144) < 2)) {
      *(int *)(param_1 + 0x2144) = *(int *)(param_1 + 0x2144) + 1;
      uVar7 = 1;
    }
    lVar8 = ((longlong)*(int *)(*(longlong *)(param_1 + 0x2148) + 0x3054) + 0x10b) * 0x20;
    FUN_18046cb50(*(uint64_t *)(param_1 + 0x2308),param_2,
                  *(longlong *)(lVar8 + 8 + param_1) - *(longlong *)(lVar8 + param_1) >> 3 &
                  0xffffffff,*(int8_t *)(param_1 + 0x2314),
                  CONCAT44(uVar10,*(int32_t *)(param_1 + 0x2140)),uVar7);
    *(int8_t *)(param_1 + 0x2314) = 0;
    uVar4 = _DAT_180c82868;
    if (*(int *)(_DAT_180c8a9c8 + 0x380) == 0) {
      pppuStackX_20 = &ppuStackX_18;
      ppuStackX_18 = *(int32_t ***)(param_1 + 0x2308);
      if (ppuStackX_18 != (int32_t **)0x0) {
        (**(code **)(*ppuStackX_18 + 10))();
      }
      FUN_18005e110(uVar4,&ppuStackX_18);
    }
    else {
      puVar1 = *(uint64_t **)(param_1 + 0x2308);
      if ((void *)*puVar1 == &unknown_var_2232_ptr) {
        uStack_78 = puVar1[0x18];
        plVar9 = (longlong *)
                 (((longlong)*(int *)(*(longlong *)(uStack_78 + 0x2148) + 0x3054) + 0x10b) * 0x20 +
                 uStack_78);
        pppuVar6 = _DAT_180c8ed58;
        if (_DAT_180c8ed58 == (int32_t ***)0x0) {
          QueryPerformanceCounter(&pppuStackX_20);
          uStack_78 = puVar1[0x18];
          pppuVar6 = pppuStackX_20;
        }
        dVar3 = (double)((longlong)pppuVar6 - _DAT_180c8ed48) * _DAT_180c8ed50;
        lStack_98 = puVar1[0x1d];
        uVar5 = *(int *)(uStack_78 + 0x2140) + 1U & 0x80000001;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
        }
        *(uint *)(uStack_78 + 0x2140) = uVar5;
        lVar8 = plVar9[1];
        lVar2 = *plVar9;
        ppuStackX_18 = apuStack_60;
        uStack_70 = &lStack_98;
        uStack_68 = puVar1 + 0x19;
        pcStack_50 = FUN_1803805e0;
        pcStack_48 = FUN_180380510;
        uStack_80 = plVar9;
        apuStack_60[0] = (int32_t *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,system_allocation_flags);
        *apuStack_60[0] = (int32_t)uStack_80;
        apuStack_60[0][1] = uStack_80._4_4_;
        apuStack_60[0][2] = (int32_t)uStack_78;
        apuStack_60[0][3] = uStack_78._4_4_;
        apuStack_60[0][4] = (int32_t)uStack_70;
        apuStack_60[0][5] = uStack_70._4_4_;
        apuStack_60[0][6] = (int32_t)uStack_68;
        apuStack_60[0][7] = uStack_68._4_4_;
        FUN_18015b810((int32_t)uStack_80,0,lVar8 - lVar2 >> 3 & 0xffffffff,1,0xffffffffffffffff,
                      apuStack_60);
        pppuVar6 = _DAT_180c8ed58;
        if (_DAT_180c8ed58 == (int32_t ***)0x0) {
          QueryPerformanceCounter(&pppuStack_90);
          pppuVar6 = pppuStack_90;
        }
        puVar1[0x1e] = (double)((longlong)pppuVar6 - _DAT_180c8ed48) * _DAT_180c8ed50 - dVar3;
      }
      else {
        (**(code **)((void *)*puVar1 + 0x60))(puVar1);
      }
      puVar1 = *(uint64_t **)(param_1 + 0x2308);
      if ((void *)*puVar1 == &unknown_var_2232_ptr) {
        LOCK();
        *(int8_t *)(puVar1 + 2) = 1;
        UNLOCK();
        FUN_1800466d0(puVar1 + 4);
      }
      else {
        (**(code **)((void *)*puVar1 + 0x70))();
      }
    }
  }
  return;
}





// 函数: void FUN_180375260(longlong param_1,longlong param_2,longlong param_3)
void FUN_180375260(longlong param_1,longlong param_2,longlong param_3)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  uint uStackX_20;
  int iStack_148;
  uint uStack_144;
  longlong lStack_140;
  longlong lStack_120;
  uint64_t uStack_118;
  int32_t uStack_110;
  int16_t uStack_10c;
  uint64_t uStack_108;
  uint64_t uStack_100;
  int32_t uStack_f8;
  int8_t uStack_f4;
  int32_t uStack_f0;
  uint64_t uStack_ec;
  int16_t uStack_e4;
  int *piStack_e0;
  int32_t uStack_d8;
  uint64_t uStack_d0;
  int32_t uStack_c8;
  int8_t uStack_c4;
  uint64_t uStack_b0;
  longlong *plStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  int aiStack_70 [2];
  longlong lStack_68;
  char cStack_60;
  int iStack_5c;
  float fStack_58;
  int32_t uStack_54;
  
  lVar5 = *(longlong *)(param_2 + 0x3580);
  uStackX_20 = 0;
  if (*(int *)(lVar5 + 0x110) != 0) {
    lStack_140 = 0;
    lStack_120 = 0x118;
    do {
      uVar1 = *(uint64_t *)(lStack_120 + lVar5);
      lStack_88 = *(longlong *)(param_3 + 0x10);
      if (lStack_88 != *(longlong *)(param_3 + 0x18)) {
        do {
          plVar13 = *(longlong **)(lStack_88 + 8);
          lStack_98 = 0;
          uStack_144 = 1;
          lVar5 = *plVar13;
          lStack_90 = 8;
          plStack_a8 = plVar13;
          do {
            lVar2 = plVar13[3];
            lVar16 = (lStack_98 + ((longlong)*(int *)(param_1 + 0x2140) * 0x20 + lStack_140) * 8) *
                     0x20;
            if (*(longlong *)(lVar16 + 0x18 + lVar2) - *(longlong *)(lVar16 + 0x10 + lVar2) >> 5 !=
                0) {
              lVar8 = *(longlong *)(lVar5 + 0x38);
              iStack_148 = 0;
              if (*(longlong *)(lVar5 + 0x40) - lVar8 >> 4 != 0) {
                lStack_a0 = 0;
                do {
                  iVar14 = 0;
                  if ((*(uint *)(lVar8 + 8 + lStack_a0) & uStack_144) != 0) {
                    lVar8 = *(longlong *)(lVar8 + lStack_a0);
                    uVar11 = *(longlong *)(lVar16 + 0x18 + lVar2) -
                             *(longlong *)(lVar16 + 0x10 + lVar2) >> 5;
                    uVar10 = (uint)uVar11;
                    iVar15 = iVar14;
                    while (0 < (int)uVar10) {
                      lVar3 = *(longlong *)(lVar8 + 0x1b8);
                      uStack_108 = 0;
                      iVar9 = (int)uVar11;
                      uStack_d8 = 0;
                      iVar12 = 0x200;
                      if (iVar9 < 0x200) {
                        iVar12 = iVar9;
                      }
                      uStack_d0 = 0;
                      uStack_b0 = 0;
                      lStack_68 = (longlong)iVar15 * 0x20 + *(longlong *)(lVar16 + 0x10 + lVar2);
                      cStack_60 = *(char *)(lVar3 + 0x38c);
                      uStack_118 = 0;
                      uStack_110 = 0xffffffff;
                      uStack_10c = 0xff00;
                      uStack_100 = 0xffffffffffffffff;
                      uStack_f8 = 0xffffffff;
                      uStack_f4 = 0xff;
                      uStack_f0 = 0xffffffff;
                      uStack_e4 = 0x400;
                      uStack_c8 = 0;
                      uStack_c4 = 0;
                      if (cStack_60 == '\t') {
                        uVar10 = *(uint *)(lVar3 + 0x388);
                        if ((uVar10 >> 0x1e & 1) == 0) {
                          if ((uVar10 >> 0x1c & 1) == 0) {
                            uVar6 = uVar10 & 0x1000000;
                            if ((int)uVar10 < 0) {
                              if ((uVar10 >> 0x1b & 1) == 0) {
                                cStack_60 = (uVar6 != 0) + '\f';
                              }
                              else {
                                cStack_60 = (uVar6 != 0) + '\x0e';
                              }
                            }
                            else if ((uVar10 >> 0x19 & 1) == 0) {
                              cStack_60 = uVar6 != 0;
                            }
                            else if ((uVar10 >> 0x1b & 1) == 0) {
                              cStack_60 = (uVar6 != 0) + '\x02';
                            }
                            else {
                              cStack_60 = (uVar6 != 0) + '\a';
                            }
                          }
                          else {
                            cStack_60 = '\x04';
                          }
                        }
                        else {
                          cStack_60 = '\t';
                        }
                        *(char *)(lVar3 + 0x38c) = cStack_60;
                      }
                      uStack_ec = 0x100000000;
                      iStack_5c = (*(int *)((longlong)plVar13 + 0xc) + 0x14) * 10 + iVar14;
                      iVar4 = (int)(*(float *)(lVar8 + 0x284) - *(float *)(lVar8 + 0x274));
                      uStack_54 = (int32_t)plVar13[2];
                      iVar7 = (int)(*(float *)(lVar8 + 0x288) - *(float *)(lVar8 + 0x278));
                      if (iVar4 < iVar7) {
                        iVar7 = iVar4;
                      }
                      piStack_e0 = aiStack_70;
                      fStack_58 = (float)iVar7;
                      aiStack_70[0] = iVar12;
                      FUN_180077750(lVar8,uVar1,&system_counter_0300,0,&uStack_118);
                      uVar10 = iVar9 - iVar12;
                      uVar11 = (ulonglong)uVar10;
                      iVar14 = iVar14 + 1;
                      iVar15 = iVar15 + 0x200;
                      plVar13 = plStack_a8;
                    }
                  }
                  lVar8 = *(longlong *)(lVar5 + 0x38);
                  iStack_148 = iStack_148 + 1;
                  lStack_a0 = lStack_a0 + 0x10;
                } while ((ulonglong)(longlong)iStack_148 <
                         (ulonglong)(*(longlong *)(lVar5 + 0x40) - lVar8 >> 4));
              }
            }
            lStack_98 = lStack_98 + 1;
            uStack_144 = uStack_144 << 1 | (uint)((int)uStack_144 < 0);
            lStack_90 = lStack_90 + -1;
          } while (lStack_90 != 0);
          lStack_88 = lStack_88 + 0x10;
        } while (lStack_88 != *(longlong *)(param_3 + 0x18));
        lStack_90 = 0;
      }
      iVar14 = 0;
      if (*(longlong *)(param_3 + 0x38) - *(longlong *)(param_3 + 0x30) >> 4 != 0) {
        lVar5 = 0;
        do {
          uStack_80 = 0x3f800000;
          uStack_7c = 0x3f800000;
          uStack_78 = 0x3f800000;
          plVar13 = *(longlong **)(*(longlong *)(param_3 + 0x30) + lVar5);
          uStack_74 = *(int32_t *)(*(longlong *)(param_3 + 0x30) + 8 + lVar5);
          (**(code **)(*plVar13 + 400))(plVar13,&uStack_80);
          uStack_110 = 0xffffffff;
          uStack_118 = 0;
          uStack_108 = 0;
          uStack_ec = 0;
          piStack_e0 = (int *)0x0;
          uStack_d8 = 0;
          uStack_d0 = 0;
          uStack_c8 = 0;
          uStack_c4 = 0;
          uStack_b0 = 0;
          uStack_10c = 0xff00;
          uStack_100 = 0xffffffffffffffff;
          uStack_f8 = 0xffffffff;
          uStack_f4 = 0xff;
          uStack_f0 = 0xffffffff;
          uStack_e4 = 0x400;
          (**(code **)(*plVar13 + 0x1c8))
                    (plVar13,uVar1,*(uint64_t *)(param_1 + 0x2148),&system_counter_0300,&uStack_118);
          lVar5 = lVar5 + 0x10;
          iVar14 = iVar14 + 1;
        } while ((ulonglong)(longlong)iVar14 <
                 (ulonglong)(*(longlong *)(param_3 + 0x38) - *(longlong *)(param_3 + 0x30) >> 4));
      }
      uStackX_20 = uStackX_20 + 1;
      lStack_140 = lStack_140 + 1;
      lStack_120 = lStack_120 + 8;
      lVar5 = *(longlong *)(param_2 + 0x3580);
    } while (uStackX_20 < *(uint *)(lVar5 + 0x110));
  }
  return;
}





