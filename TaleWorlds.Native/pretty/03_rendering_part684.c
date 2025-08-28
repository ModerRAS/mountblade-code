#include "TaleWorlds.Native.Split.h"

// 03_rendering_part684.c - 2 个函数

// 函数: void FUN_180659fa4(void)
void FUN_180659fa4(void)

{
  int64_t lVar1;
  uint32_t uVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  char cVar6;
  int32_t unaff_EDI;
  char unaff_R13B;
  int64_t unaff_R14;
  char unaff_R15B;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int8_t auVar16 [16];
  float fVar17;
  float fVar18;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float fVar19;
  float fVar20;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  char cStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000040;
  float fStack0000000000000054;
  float fStack000000000000005c;
  float fStack000000000000006c;
  float fStack0000000000000074;
  float fStack000000000000007c;
  float afStack_60e8 [6200];
  uint64_t uStack_8;
  
  *(float *)(unaff_R14 + 0x4c) = unaff_XMM6_Da;
  fVar7 = (float)unaff_RBX;
  fVar15 = (float)((uint64_t)unaff_RBX >> 0x20);
  if ((unaff_XMM12_Da != unaff_XMM6_Da) || (unaff_XMM14_Da != unaff_XMM6_Da)) {
    if (unaff_XMM6_Da <= fVar7 * unaff_XMM12_Da) {
      if (ABS(fVar7) < ABS(unaff_XMM12_Da)) {
        fVar7 = unaff_XMM12_Da;
      }
    }
    else {
      fVar7 = fVar7 + unaff_XMM12_Da;
    }
    if (unaff_XMM6_Da <= unaff_XMM14_Da * fVar15) {
      if (ABS(fVar15) < ABS(unaff_XMM14_Da)) {
        fVar15 = unaff_XMM14_Da;
      }
    }
    else {
      fVar15 = fVar15 + unaff_XMM14_Da;
    }
  }
  uStack_8 = 0x18065a04d;
  fVar7 = (float)atan2f(-fVar7,fVar15);
  fVar7 = ABS(fVar7);
  if (1.5707964 < fVar7) {
    fVar7 = unaff_XMM11_Da - fVar7;
  }
  fVar7 = fVar7 * 0.63661975;
  fVar11 = (unaff_XMM8_Da - *(float *)(unaff_RBP + 0xc0)) * 0.3;
  fVar15 = unaff_XMM6_Da;
  if ((fVar11 + 0.05 <= fVar7) && (fVar15 = fVar7, 0.95 - fVar11 < fVar7)) {
    fVar15 = unaff_XMM8_Da;
  }
  fVar11 = fVar15 - *(float *)(unaff_R14 + 0x54);
  fVar17 = ABS(fVar11);
  fVar7 = fVar15;
  if (0.001 <= fVar17) {
    fVar19 = fStack0000000000000034;
    if (fVar11 < unaff_XMM6_Da) {
      fVar19 = -fStack0000000000000034;
    }
    fVar11 = 0.1;
    if ((0.1 <= fVar17) && (fVar11 = fVar17, 0.5 <= fVar17)) {
      fVar11 = 0.5;
    }
    fVar11 = fVar19 * fVar11 * 12.0;
    if (ABS(fVar11) <= fVar17) {
      fVar7 = *(float *)(unaff_R14 + 0x54) + fVar11;
    }
  }
  *(float *)(unaff_R14 + 0x54) = fVar7;
  if ((((unaff_XMM7_Da <= -0.1) || (unaff_R13B == '\0')) || (unaff_R15B != '\0')) ||
     (unaff_XMM14_Da <= -0.1)) {
LAB_18065a17c:
    if ((*(float *)(unaff_R14 + 0x44) <= unaff_XMM6_Da) ||
       (unaff_XMM8_Da <= *(float *)(unaff_R14 + 0x44))) {
      *(int32_t *)(unaff_R14 + 0x44) = unaff_EDI;
      *(int32_t *)(unaff_R14 + 0x48) = 0xbf800000;
      goto LAB_18065a2e9;
    }
  }
  else {
    fVar7 = unaff_XMM7_Da * unaff_XMM7_Da + unaff_XMM7_Da * unaff_XMM7_Da;
    fVar7 = fVar7 + fVar7;
    if (fVar7 <= unaff_XMM8_Da) {
      fVar7 = unaff_XMM8_Da;
    }
    if (-fVar7 <= unaff_XMM15_Da * unaff_XMM12_Da) goto LAB_18065a17c;
  }
  fVar7 = *(float *)(unaff_R14 + 0x44);
  if (fVar7 == unaff_XMM6_Da) {
    *(bool *)(unaff_R14 + 0x5d) = unaff_XMM12_Da < unaff_XMM6_Da;
  }
  lVar1 = *(int64_t *)((int64_t)*(int *)(unaff_R14 + 0x60) * 0x1358 + -0x98 + unaff_R14);
  fVar7 = (*(float *)(*(int64_t *)(lVar1 + 8) + 0x188) /
          *(float *)(*(int64_t *)(lVar1 + 0x38) + 0x188)) * unaff_XMM9_Da * fStack0000000000000034
          + fVar7;
  if (unaff_XMM8_Da <= fVar7) {
    fVar7 = unaff_XMM8_Da;
  }
  *(float *)(unaff_R14 + 0x44) = fVar7;
  if (*(float *)(unaff_R14 + 0x48) <= unaff_XMM6_Da && unaff_XMM6_Da != *(float *)(unaff_R14 + 0x48)
     ) {
    fVar11 = unaff_XMM8_Da;
    if (*(char *)(unaff_R14 + 0x5d) != '\0') {
      fVar11 = -1.0;
    }
    if (unaff_XMM6_Da <= fVar11 * unaff_XMM12_Da) {
      fVar11 = fVar7;
      if (*(char *)(unaff_R14 + 0x5d) == '\0') {
        uStack_8 = 0x18065a252;
        fVar11 = (float)fmodf(fVar7 + 0.5);
      }
      fVar11 = fVar11 - *(float *)(unaff_R14 + 0x38);
      if (fVar11 <= 0.5) {
        if (fVar11 < -0.5) {
          fVar11 = fVar11 + unaff_XMM8_Da;
        }
      }
      else {
        fVar11 = fVar11 + -1.0;
      }
      fVar17 = fVar7 * fVar7 * fVar7 + fStack0000000000000034;
      if (unaff_XMM8_Da <= fVar17) {
        fVar17 = unaff_XMM8_Da;
      }
      fVar7 = fVar17 * fVar7 * fVar11 + *(float *)(unaff_R14 + 0x38);
      *(float *)(unaff_R14 + 0x38) = fVar7;
      if (unaff_XMM6_Da <= fVar7) {
        if (unaff_XMM8_Da <= fVar7) {
          *(float *)(unaff_R14 + 0x38) = fVar7 - unaff_XMM8_Da;
        }
      }
      else {
        *(float *)(unaff_R14 + 0x38) = fVar7 + unaff_XMM8_Da;
      }
    }
    else {
      *(float *)(unaff_R14 + 0x48) = fVar7 + 0.25;
    }
  }
LAB_18065a2e9:
  fVar7 = *(float *)(unaff_R14 + 0x50);
  fStack0000000000000054 = (unaff_XMM8_Da - fVar7) * (unaff_XMM8_Da - unaff_XMM13_Da);
  fVar19 = (unaff_XMM8_Da - unaff_XMM6_Da) * fStack0000000000000054;
  fStack000000000000006c = (unaff_XMM8_Da - fVar15) * unaff_XMM6_Da * fStack0000000000000054;
  fVar17 = unaff_XMM6_Da * fStack0000000000000054 * fVar15;
  fVar20 = fVar19 * fVar15;
  fStack0000000000000054 = fStack0000000000000054 * fVar15;
  fStack0000000000000074 = fVar17 * in_stack_00000040;
  *(float *)(unaff_RBP + -0x7c) = fStack0000000000000054;
  *(float *)(unaff_RBP + -0x78) = fStack0000000000000054;
  *(float *)(unaff_RBP + -0x74) = (unaff_XMM8_Da - unaff_XMM13_Da) * fVar7;
  fVar11 = (unaff_XMM8_Da - in_stack_00000040) * fVar20;
  fStack000000000000005c = (unaff_XMM8_Da - in_stack_00000040) * fVar17;
  *(float *)(unaff_RBP + -0x80) = fVar11;
  cVar6 = (char)unaff_EDI;
  if ((cStack0000000000000030 == cVar6) || (unaff_XMM6_Da < in_stack_00000040)) {
    if (fVar7 <= unaff_XMM6_Da) {
      fVar7 = 3.0;
    }
    else {
      fVar7 = 5.0;
    }
  }
  else {
    fVar7 = 2.0;
  }
  fVar8 = *(float *)(unaff_R14 + 0x6128);
  if (unaff_XMM13_Da <= fVar8) {
    fVar8 = fVar8 - fVar7 * fStack0000000000000034;
    if (fVar8 <= unaff_XMM13_Da) {
      fVar8 = unaff_XMM13_Da;
    }
  }
  else {
    fVar8 = fVar8 + fVar7 * fStack0000000000000034;
    if (unaff_XMM13_Da <= fVar8) {
      fVar8 = unaff_XMM13_Da;
    }
  }
  *(float *)(unaff_R14 + 0x6128) = fVar8;
  *(float *)(unaff_R14 + 0x6150) = fVar8;
  fVar7 = *(float *)(unaff_R14 + 0x44);
  if (0.2 <= fVar7) {
    fVar8 = unaff_XMM8_Da;
    if (0.7 < fVar7) {
      fVar8 = (unaff_XMM8_Da - fVar7) * 3.333333;
    }
  }
  else {
    fVar8 = fVar7 * 5.0;
  }
  if (unaff_XMM6_Da < *(float *)(unaff_R14 + 0x48)) {
    fVar7 = (*(float *)(unaff_R14 + 0x48) - fVar7) * 4.0;
    if (fVar7 <= unaff_XMM6_Da) {
      fVar7 = unaff_XMM6_Da;
    }
    fVar8 = fVar8 * fVar7;
  }
  pfVar3 = (float *)(unaff_R14 + 0x6154);
  iVar5 = 1;
  fVar7 = unaff_XMM6_Da;
  do {
    fVar10 = *(float *)(((int64_t)afStack_60e8 - unaff_R14) + (int64_t)pfVar3);
    fVar9 = fVar10 - pfVar3[-10];
    fVar12 = ABS(fVar9);
    if (0.001 <= fVar12) {
      fVar13 = unaff_XMM8_Da;
      if (fVar9 < unaff_XMM6_Da) {
        fVar13 = -1.0;
      }
      if (0.05 <= fVar12) {
        if (0.5 <= fVar12) {
          fVar12 = 0.5;
        }
      }
      else {
        fVar12 = 0.05;
      }
      fVar12 = fVar12 * fVar13 * fStack0000000000000034 * 6.0;
      if (fVar12 * fVar13 <= fVar13 * fVar9) {
        fVar10 = pfVar3[-10] + fVar12;
      }
    }
    pfVar3[-10] = fVar10;
    *pfVar3 = fVar10;
    if (2 < iVar5) {
      if (iVar5 < 7) {
        fVar9 = unaff_XMM8_Da - fVar8;
      }
      else {
        fVar9 = unaff_XMM6_Da;
        if (iVar5 == 7) {
          if (*(char *)(unaff_R14 + 0x5d) == cVar6) {
LAB_18065a5b3:
            fVar9 = fVar8;
          }
        }
        else {
          if (iVar5 != 8) goto LAB_18065a5d3;
          if (*(char *)(unaff_R14 + 0x5d) != cVar6) goto LAB_18065a5b3;
        }
      }
      fVar10 = fVar9 * fVar10;
      *pfVar3 = fVar10;
    }
LAB_18065a5d3:
    fVar9 = *(float *)((int64_t)afStack_60e8 + (4 - unaff_R14) + (int64_t)pfVar3);
    fVar12 = fVar9 - pfVar3[-9];
    fVar13 = ABS(fVar12);
    if (0.001 <= fVar13) {
      fVar14 = unaff_XMM8_Da;
      if (fVar12 < unaff_XMM6_Da) {
        fVar14 = -1.0;
      }
      if (0.05 <= fVar13) {
        if (0.5 <= fVar13) {
          fVar13 = 0.5;
        }
      }
      else {
        fVar13 = 0.05;
      }
      fVar13 = fVar13 * fVar14 * fStack0000000000000034 * 6.0;
      if (fVar13 * fVar14 <= fVar14 * fVar12) {
        fVar9 = pfVar3[-9] + fVar13;
      }
    }
    iVar4 = iVar5 + 1;
    pfVar3[-9] = fVar9;
    pfVar3[1] = fVar9;
    if (2 < iVar4) {
      if (iVar4 < 7) {
        fVar12 = unaff_XMM8_Da - fVar8;
      }
      else {
        fVar12 = unaff_XMM6_Da;
        if (iVar4 == 7) {
          if (*(char *)(unaff_R14 + 0x5d) == cVar6) {
LAB_18065a67b:
            fVar12 = fVar8;
          }
        }
        else {
          if (iVar4 != 8) goto LAB_18065a69c;
          if (*(char *)(unaff_R14 + 0x5d) != cVar6) goto LAB_18065a67b;
        }
      }
      fVar9 = fVar12 * fVar9;
      pfVar3[1] = fVar9;
    }
LAB_18065a69c:
    fVar12 = *(float *)((int64_t)afStack_60e8 + (8 - unaff_R14) + (int64_t)pfVar3);
    fVar13 = fVar12 - pfVar3[-8];
    fVar14 = ABS(fVar13);
    if (0.001 <= fVar14) {
      fVar18 = unaff_XMM8_Da;
      if (fVar13 < unaff_XMM6_Da) {
        fVar18 = -1.0;
      }
      if (0.05 <= fVar14) {
        if (0.5 <= fVar14) {
          fVar14 = 0.5;
        }
      }
      else {
        fVar14 = 0.05;
      }
      fVar14 = fVar14 * fVar18 * fStack0000000000000034 * 6.0;
      if (fVar14 * fVar18 <= fVar18 * fVar13) {
        fVar12 = pfVar3[-8] + fVar14;
      }
    }
    iVar4 = iVar5 + 2;
    pfVar3[-8] = fVar12;
    pfVar3[2] = fVar12;
    if (2 < iVar4) {
      if (iVar4 < 7) {
        fVar13 = unaff_XMM8_Da - fVar8;
      }
      else {
        fVar13 = unaff_XMM6_Da;
        if (iVar4 == 7) {
          if (*(char *)(unaff_R14 + 0x5d) == cVar6) {
LAB_18065a744:
            fVar13 = fVar8;
          }
        }
        else {
          if (iVar4 != 8) goto LAB_18065a765;
          if (*(char *)(unaff_R14 + 0x5d) != cVar6) goto LAB_18065a744;
        }
      }
      fVar12 = fVar13 * fVar12;
      pfVar3[2] = fVar12;
    }
LAB_18065a765:
    iVar5 = iVar5 + 3;
    fVar7 = fVar7 + fVar10 + fVar9 + fVar12;
    pfVar3 = pfVar3 + 3;
    if (9 < iVar5) {
      fVar8 = *(float *)(unaff_R14 + 0x6150);
      fVar8 = unaff_XMM8_Da - ((fVar8 * 6.0 - 15.0) * fVar8 + 10.0) * fVar8 * fVar8 * fVar8;
      if (fVar7 != fVar8) {
        if (fVar7 <= unaff_XMM6_Da) {
          *(int32_t *)(unaff_R14 + 0x6150) = 0x3f800000;
        }
        else {
          fVar8 = fVar8 / fVar7;
          *(float *)(unaff_R14 + 0x6154) = *(float *)(unaff_R14 + 0x6154) * fVar8;
          *(float *)(unaff_R14 + 0x6158) = *(float *)(unaff_R14 + 0x6158) * fVar8;
          *(float *)(unaff_R14 + 0x615c) = *(float *)(unaff_R14 + 0x615c) * fVar8;
          *(float *)(unaff_R14 + 0x6160) = *(float *)(unaff_R14 + 0x6160) * fVar8;
          *(float *)(unaff_R14 + 0x6164) = *(float *)(unaff_R14 + 0x6164) * fVar8;
          *(float *)(unaff_R14 + 0x6168) = *(float *)(unaff_R14 + 0x6168) * fVar8;
          *(float *)(unaff_R14 + 0x616c) = *(float *)(unaff_R14 + 0x616c) * fVar8;
          *(float *)(unaff_R14 + 0x6170) = *(float *)(unaff_R14 + 0x6170) * fVar8;
          *(float *)(unaff_R14 + 0x6174) = fVar8 * *(float *)(unaff_R14 + 0x6174);
        }
      }
      fVar19 = fStack000000000000006c - (unaff_XMM8_Da - fVar15) * fVar19;
      fVar11 = ((((fVar20 + fVar17) * in_stack_00000040 + fStack0000000000000054) -
                fStack000000000000005c) - fVar11) - fStack0000000000000054;
      fVar7 = fVar19 * fVar19 + fVar11 * fVar11;
      uVar2 = (uint32_t)((uint)unaff_EDI >> 8);
      fVar7 = (float)CONCAT31(uVar2,fVar7 <= 1.1754944e-38) * 1.1754944e-38 + fVar7;
      auVar16 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar15 = auVar16._0_4_;
      fVar7 = fVar15 * 0.5 * (3.0 - fVar7 * fVar15 * fVar15);
      fVar19 = fVar7 * fVar19;
      fVar7 = fVar7 * fVar11;
      if (ABS(fVar7 * *(float *)(unaff_R14 + 0x6178) + fVar19 * *(float *)(unaff_R14 + 0x617c)) <=
          0.999) {
        fVar11 = *(float *)(unaff_R14 + 0x6154) - *(float *)(unaff_R14 + 0x6158);
        fVar17 = (((*(float *)(unaff_R14 + 0x6160) + *(float *)(unaff_R14 + 0x615c) +
                   *(float *)(unaff_R14 + 0x616c)) - *(float *)(unaff_R14 + 0x6164)) -
                 *(float *)(unaff_R14 + 0x6168)) - *(float *)(unaff_R14 + 0x6170);
        fVar7 = fVar11 * fVar11 + fVar17 * fVar17;
        fVar7 = (float)CONCAT31(uVar2,fVar7 <= 1.1754944e-38) * 1.1754944e-38 + fVar7;
        auVar16 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar15 = auVar16._0_4_;
        fStack0000000000000034 = fStack0000000000000034 * 8.0;
        fVar7 = fVar15 * 0.5 * (3.0 - fVar7 * fVar15 * fVar15);
        *(uint64_t *)(unaff_R14 + 0x6178) =
             CONCAT44(fVar7 * fVar11 * fStack0000000000000034 +
                      (unaff_XMM8_Da - fStack0000000000000034) * *(float *)(unaff_R14 + 0x617c),
                      fVar7 * fVar17 * fStack0000000000000034 +
                      (unaff_XMM8_Da - fStack0000000000000034) * *(float *)(unaff_R14 + 0x6178));
        fVar7 = *(float *)(unaff_R14 + 0x617c);
        fVar15 = *(float *)(unaff_R14 + 0x6178);
        fVar11 = fVar15 * fVar15 + fVar7 * fVar7;
        auVar16 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
        fVar17 = auVar16._0_4_;
        fVar11 = fVar17 * 0.5 * (3.0 - fVar11 * fVar17 * fVar17);
        *(float *)(unaff_R14 + 0x617c) = fVar11 * fVar7;
        *(float *)(unaff_R14 + 0x6178) = fVar11 * fVar15;
      }
      else {
        *(uint64_t *)(unaff_R14 + 0x6178) = CONCAT44(fVar19,fVar7);
      }
                    // WARNING: Subroutine does not return
      uStack_8 = 0x18065aa9f;
      fStack000000000000007c = fStack000000000000005c;
      SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x70) ^ (uint64_t)&stack0x00000000);
    }
  } while( true );
}





// 函数: void FUN_18065a3f8(uint64_t param_1,uint64_t param_2,float param_3,float param_4,
void FUN_18065a3f8(uint64_t param_1,uint64_t param_2,float param_3,float param_4,
                  uint64_t param_5,uint64_t param_6,float param_7,float param_8,float param_9,
                  uint64_t param_10,uint64_t param_11,float param_12)

{
  uint32_t uVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float *unaff_RBX;
  int64_t unaff_RBP;
  char cVar5;
  int32_t unaff_EDI;
  int64_t unaff_R14;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int8_t auVar12 [16];
  uint in_XMM5_Da;
  float fVar13;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float fStack000000000000003c;
  float afStack_60e8 [6200];
  uint64_t uStack_8;
  
  if (unaff_XMM6_Da < unaff_XMM7_Da) {
    fVar7 = param_4;
    if (param_3 <= unaff_XMM6_Da) {
      fVar7 = 3.0;
    }
  }
  else {
    fVar7 = 2.0;
  }
  fVar6 = *(float *)(unaff_R14 + 0x6128);
  if (unaff_XMM13_Da <= fVar6) {
    fVar6 = fVar6 - fVar7 * param_6._4_4_;
    if (fVar6 <= unaff_XMM13_Da) {
      fVar6 = unaff_XMM13_Da;
    }
  }
  else {
    fVar6 = fVar6 + fVar7 * param_6._4_4_;
    if (unaff_XMM13_Da <= fVar6) {
      fVar6 = unaff_XMM13_Da;
    }
  }
  *(float *)(unaff_R14 + 0x6128) = fVar6;
  *(float *)(unaff_R14 + 0x6150) = fVar6;
  fVar7 = *unaff_RBX;
  if (0.2 <= fVar7) {
    fVar6 = unaff_XMM8_Da;
    if (0.7 < fVar7) {
      fVar6 = (unaff_XMM8_Da - fVar7) * 3.333333;
    }
  }
  else {
    fVar6 = fVar7 * param_4;
  }
  if (unaff_XMM6_Da < *(float *)(unaff_R14 + 0x48)) {
    fVar7 = (*(float *)(unaff_R14 + 0x48) - fVar7) * 4.0;
    if (fVar7 <= unaff_XMM6_Da) {
      fVar7 = unaff_XMM6_Da;
    }
    fVar6 = fVar6 * fVar7;
  }
  pfVar2 = (float *)(unaff_R14 + 0x6154);
  iVar4 = 1;
  do {
    fVar7 = *(float *)(((int64_t)afStack_60e8 - unaff_R14) + (int64_t)pfVar2);
    fVar8 = fVar7 - pfVar2[-10];
    fVar9 = (float)((uint)fVar8 & in_XMM5_Da);
    if (0.001 <= fVar9) {
      fVar10 = unaff_XMM14_Da;
      if (unaff_XMM6_Da <= fVar8) {
        fVar10 = unaff_XMM8_Da;
      }
      if (0.05 <= fVar9) {
        if (0.5 <= fVar9) {
          fVar9 = 0.5;
        }
      }
      else {
        fVar9 = 0.05;
      }
      fVar9 = fVar9 * fVar10 * param_6._4_4_ * 6.0;
      in_XMM5_Da = 0x7fffffff;
      if (fVar9 * fVar10 <= fVar10 * fVar8) {
        fVar7 = pfVar2[-10] + fVar9;
      }
    }
    pfVar2[-10] = fVar7;
    *pfVar2 = fVar7;
    cVar5 = (char)unaff_EDI;
    if (2 < iVar4) {
      if (iVar4 < 7) {
        fVar8 = unaff_XMM8_Da - fVar6;
      }
      else {
        fVar8 = unaff_XMM6_Da;
        if (iVar4 == 7) {
          if (*(char *)(unaff_R14 + 0x5d) == cVar5) {
LAB_18065a5b3:
            fVar8 = fVar6;
          }
        }
        else {
          if (iVar4 != 8) goto LAB_18065a5d3;
          if (*(char *)(unaff_R14 + 0x5d) != cVar5) goto LAB_18065a5b3;
        }
      }
      fVar7 = fVar8 * fVar7;
      *pfVar2 = fVar7;
    }
LAB_18065a5d3:
    fVar8 = *(float *)((int64_t)afStack_60e8 + (4 - unaff_R14) + (int64_t)pfVar2);
    fVar9 = fVar8 - pfVar2[-9];
    fVar10 = (float)((uint)fVar9 & in_XMM5_Da);
    if (0.001 <= fVar10) {
      fVar11 = unaff_XMM14_Da;
      if (unaff_XMM6_Da <= fVar9) {
        fVar11 = unaff_XMM8_Da;
      }
      if (0.05 <= fVar10) {
        if (0.5 <= fVar10) {
          fVar10 = 0.5;
        }
      }
      else {
        fVar10 = 0.05;
      }
      fVar10 = fVar10 * fVar11 * param_6._4_4_ * 6.0;
      in_XMM5_Da = 0x7fffffff;
      if (fVar10 * fVar11 <= fVar11 * fVar9) {
        fVar8 = pfVar2[-9] + fVar10;
      }
    }
    iVar3 = iVar4 + 1;
    pfVar2[-9] = fVar8;
    pfVar2[1] = fVar8;
    if (2 < iVar3) {
      if (iVar3 < 7) {
        fVar9 = unaff_XMM8_Da - fVar6;
      }
      else {
        fVar9 = unaff_XMM6_Da;
        if (iVar3 == 7) {
          if (*(char *)(unaff_R14 + 0x5d) == cVar5) {
LAB_18065a67b:
            fVar9 = fVar6;
          }
        }
        else {
          if (iVar3 != 8) goto LAB_18065a69c;
          if (*(char *)(unaff_R14 + 0x5d) != cVar5) goto LAB_18065a67b;
        }
      }
      fVar8 = fVar9 * fVar8;
      pfVar2[1] = fVar8;
    }
LAB_18065a69c:
    fVar9 = *(float *)((int64_t)afStack_60e8 + (8 - unaff_R14) + (int64_t)pfVar2);
    fVar10 = fVar9 - pfVar2[-8];
    fVar11 = (float)((uint)fVar10 & in_XMM5_Da);
    if (0.001 <= fVar11) {
      fVar13 = unaff_XMM14_Da;
      if (unaff_XMM6_Da <= fVar10) {
        fVar13 = unaff_XMM8_Da;
      }
      if (0.05 <= fVar11) {
        if (0.5 <= fVar11) {
          fVar11 = 0.5;
        }
      }
      else {
        fVar11 = 0.05;
      }
      fVar11 = fVar11 * fVar13 * param_6._4_4_ * 6.0;
      in_XMM5_Da = 0x7fffffff;
      if (fVar11 * fVar13 <= fVar13 * fVar10) {
        fVar9 = pfVar2[-8] + fVar11;
      }
    }
    iVar3 = iVar4 + 2;
    pfVar2[-8] = fVar9;
    pfVar2[2] = fVar9;
    if (2 < iVar3) {
      if (iVar3 < 7) {
        fVar10 = unaff_XMM8_Da - fVar6;
      }
      else {
        fVar10 = unaff_XMM6_Da;
        if (iVar3 == 7) {
          if (*(char *)(unaff_R14 + 0x5d) == cVar5) {
LAB_18065a744:
            fVar10 = fVar6;
          }
        }
        else {
          if (iVar3 != 8) goto LAB_18065a765;
          if (*(char *)(unaff_R14 + 0x5d) != cVar5) goto LAB_18065a744;
        }
      }
      fVar9 = fVar10 * fVar9;
      pfVar2[2] = fVar9;
    }
LAB_18065a765:
    iVar4 = iVar4 + 3;
    unaff_XMM9_Da = unaff_XMM9_Da + fVar7 + fVar8 + fVar9;
    pfVar2 = pfVar2 + 3;
    if (9 < iVar4) {
      fVar7 = *(float *)(unaff_R14 + 0x6150);
      fVar7 = unaff_XMM8_Da - ((fVar7 * 6.0 - 15.0) * fVar7 + 10.0) * fVar7 * fVar7 * fVar7;
      if (unaff_XMM9_Da != fVar7) {
        if (unaff_XMM9_Da <= unaff_XMM6_Da) {
          *(int32_t *)(unaff_R14 + 0x6150) = 0x3f800000;
        }
        else {
          fVar7 = fVar7 / unaff_XMM9_Da;
          *(float *)(unaff_R14 + 0x6154) = *(float *)(unaff_R14 + 0x6154) * fVar7;
          *(float *)(unaff_R14 + 0x6158) = *(float *)(unaff_R14 + 0x6158) * fVar7;
          *(float *)(unaff_R14 + 0x615c) = *(float *)(unaff_R14 + 0x615c) * fVar7;
          *(float *)(unaff_R14 + 0x6160) = *(float *)(unaff_R14 + 0x6160) * fVar7;
          *(float *)(unaff_R14 + 0x6164) = *(float *)(unaff_R14 + 0x6164) * fVar7;
          *(float *)(unaff_R14 + 0x6168) = *(float *)(unaff_R14 + 0x6168) * fVar7;
          *(float *)(unaff_R14 + 0x616c) = *(float *)(unaff_R14 + 0x616c) * fVar7;
          *(float *)(unaff_R14 + 0x6170) = *(float *)(unaff_R14 + 0x6170) * fVar7;
          *(float *)(unaff_R14 + 0x6174) = fVar7 * *(float *)(unaff_R14 + 0x6174);
        }
      }
      param_9 = param_9 - param_7;
      param_10._4_4_ =
           (((((float)param_10 + (float)param_11) * param_8 + param_10._4_4_) - param_11._4_4_) -
           param_12) - param_10._4_4_;
      fVar7 = param_9 * param_9 + param_10._4_4_ * param_10._4_4_;
      uVar1 = (uint32_t)((uint)unaff_EDI >> 8);
      fVar7 = (float)CONCAT31(uVar1,fVar7 <= 1.1754944e-38) * 1.1754944e-38 + fVar7;
      auVar12 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar6 = auVar12._0_4_;
      fVar7 = fVar6 * 0.5 * (3.0 - fVar7 * fVar6 * fVar6);
      fStack000000000000003c = fVar7 * param_9;
      fVar7 = fVar7 * param_10._4_4_;
      if ((float)((uint)(fVar7 * *(float *)(unaff_R14 + 0x6178) +
                        fStack000000000000003c * *(float *)(unaff_R14 + 0x617c)) & in_XMM5_Da) <=
          0.999) {
        fVar8 = *(float *)(unaff_R14 + 0x6154) - *(float *)(unaff_R14 + 0x6158);
        fVar9 = (((*(float *)(unaff_R14 + 0x6160) + *(float *)(unaff_R14 + 0x615c) +
                  *(float *)(unaff_R14 + 0x616c)) - *(float *)(unaff_R14 + 0x6164)) -
                *(float *)(unaff_R14 + 0x6168)) - *(float *)(unaff_R14 + 0x6170);
        fVar7 = fVar8 * fVar8 + fVar9 * fVar9;
        fVar7 = (float)CONCAT31(uVar1,fVar7 <= 1.1754944e-38) * 1.1754944e-38 + fVar7;
        auVar12 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar6 = auVar12._0_4_;
        param_6._4_4_ = param_6._4_4_ * 8.0;
        fVar7 = fVar6 * 0.5 * (3.0 - fVar7 * fVar6 * fVar6);
        fStack000000000000003c =
             fVar7 * fVar8 * param_6._4_4_ +
             (unaff_XMM8_Da - param_6._4_4_) * *(float *)(unaff_R14 + 0x617c);
        *(uint64_t *)(unaff_R14 + 0x6178) =
             CONCAT44(fStack000000000000003c,
                      fVar7 * fVar9 * param_6._4_4_ +
                      (unaff_XMM8_Da - param_6._4_4_) * *(float *)(unaff_R14 + 0x6178));
        fVar7 = *(float *)(unaff_R14 + 0x617c);
        fVar6 = *(float *)(unaff_R14 + 0x6178);
        fVar8 = fVar6 * fVar6 + fVar7 * fVar7;
        auVar12 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
        fVar9 = auVar12._0_4_;
        fVar8 = fVar9 * 0.5 * (3.0 - fVar8 * fVar9 * fVar9);
        *(float *)(unaff_R14 + 0x617c) = fVar8 * fVar7;
        *(float *)(unaff_R14 + 0x6178) = fVar8 * fVar6;
      }
      else {
        *(uint64_t *)(unaff_R14 + 0x6178) = CONCAT44(fStack000000000000003c,fVar7);
      }
                    // WARNING: Subroutine does not return
      uStack_8 = 0x18065aa9f;
      SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x70) ^ (uint64_t)&stack0x00000000);
    }
  } while( true );
}





