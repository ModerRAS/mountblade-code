#include "TaleWorlds.Native.Split.h"

// 99_part_07_part059.c - 8 个函数

// 函数: void FUN_1804d338d(uint64_t param_1,uint64_t param_2,int param_3,uint64_t param_4,int param_5)
void FUN_1804d338d(uint64_t param_1,uint64_t param_2,int param_3,uint64_t param_4,int param_5)

{
  uint uVar1;
  float *pfVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  char cVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  uint64_t unaff_RBX;
  longlong unaff_RBP;
  int iVar12;
  uint64_t unaff_RSI;
  int *piVar13;
  uint64_t unaff_RDI;
  ulonglong uVar14;
  bool bVar15;
  int8_t uVar16;
  longlong in_R11;
  longlong lVar17;
  uint64_t unaff_R12;
  longlong lVar18;
  uint uVar19;
  ulonglong unaff_R13;
  ulonglong uVar20;
  longlong *unaff_R14;
  uint64_t unaff_R15;
  ulonglong uVar21;
  float fVar22;
  int8_t auVar23 [16];
  float fVar24;
  float fVar25;
  int32_t unaff_XMM6_Da;
  float fVar26;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  float fVar27;
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
  int8_t uStackX_20;
  uint uStackX_24;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t in_stack_00000068;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  int32_t in_stack_00000078;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM10_Dd;
  *(int32_t *)(in_R11 + -0x98) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0x94) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x90) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x8c) = unaff_XMM11_Dd;
  *(int32_t *)(in_R11 + -0xa8) = unaff_XMM12_Da;
  *(int32_t *)(in_R11 + -0xa4) = unaff_XMM12_Db;
  *(int32_t *)(in_R11 + -0xa0) = unaff_XMM12_Dc;
  *(int32_t *)(in_R11 + -0x9c) = unaff_XMM12_Dd;
  *(int32_t *)(in_R11 + -0xb8) = unaff_XMM13_Da;
  *(int32_t *)(in_R11 + -0xb4) = unaff_XMM13_Db;
  *(int32_t *)(in_R11 + -0xb0) = unaff_XMM13_Dc;
  *(int32_t *)(in_R11 + -0xac) = unaff_XMM13_Dd;
  *(int32_t *)(in_R11 + -200) = unaff_XMM14_Da;
  *(int32_t *)(in_R11 + -0xc4) = unaff_XMM14_Db;
  *(int32_t *)(in_R11 + -0xc0) = unaff_XMM14_Dc;
  *(int32_t *)(in_R11 + -0xbc) = unaff_XMM14_Dd;
  *(int32_t *)(in_R11 + -0xd8) = unaff_XMM15_Da;
  *(int32_t *)(in_R11 + -0xd4) = unaff_XMM15_Db;
  *(int32_t *)(in_R11 + -0xd0) = unaff_XMM15_Dc;
  *(int32_t *)(in_R11 + -0xcc) = unaff_XMM15_Dd;
  uVar21 = unaff_R13;
  do {
    piVar13 = (int *)0x0;
    lVar11 = *unaff_R14;
    uVar19 = (uint)unaff_R13;
    if ((int)uVar19 < *(int *)(lVar11 + 0x2c3c)) {
      lVar18 = (longlong)((int)uVar19 >> 10);
      piVar8 = (int *)(((longlong)*(int *)(lVar11 + 0x2c88) & uVar21) * 0x68 +
                      *(longlong *)(*(longlong *)(lVar11 + 0x2c68) + lVar18 * 8));
      piVar6 = piVar8 + 2;
      if (*piVar8 == -1) {
        piVar6 = piVar13;
      }
      if (piVar6 != (int *)0x0) {
        uVar16 = 0;
        uStackX_20 = 0;
        if (*(longlong *)(lVar11 + 0x10) - *(longlong *)(lVar11 + 8) >> 3 != 0) {
          uVar20 = 0;
          uVar14 = uVar20;
          do {
            uVar19 = *(uint *)(((longlong)*(int *)(lVar11 + 0x2c88) & uVar21) * 0x68 + 0x14 +
                              *(longlong *)(*(longlong *)(lVar11 + 0x2c68) + lVar18 * 8));
            iVar12 = (int)piVar13;
            if (uVar19 != 0xffffffff) {
              cVar5 = FUN_1804d2a50(lVar11,*(uint64_t *)unaff_R14[1],piVar13,uVar19);
              lVar11 = *unaff_R14;
              if ((cVar5 == '\0') && (*(char *)(lVar11 + 0x2b50) == '\0')) {
                bVar15 = false;
              }
              else {
                bVar15 = true;
              }
              lVar17 = (longlong)((int)uVar19 >> 10);
              if (iVar12 == 0) {
                *(int16_t *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x3a0) + lVar17 * 8) + 8 +
                 (longlong)(int)(*(uint *)(lVar11 + 0x3c0) & uVar19) * 0xc) = 0;
              }
              uVar16 = uStackX_20;
              if (bVar15) {
                LOCK();
                *(longlong *)unaff_R14[2] = *(longlong *)unaff_R14[2] + 1;
                UNLOCK();
                if (iVar12 != 0) {
                  lVar11 = *unaff_R14;
                  lVar7 = *(longlong *)(*(longlong *)(lVar11 + 8) + uVar14 * 8);
                  uVar3 = *(uint64_t *)(lVar7 + 0x120);
                  uVar4 = *(uint64_t *)(lVar7 + 0x128);
                  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(lVar11 + 11000) + lVar17 * 8) + 0x20
                                   + (longlong)(int)(*(uint *)(lVar11 + 0x2b18) & uVar19) * 0xd8);
                  pfVar2 = (float *)unaff_R14[3];
                  lVar7 = *(longlong *)
                           (*(longlong *)(lVar11 + 0x4e0) + (longlong)((int)uVar1 >> 10) * 8);
                  bVar15 = true;
                  lVar11 = (longlong)(int)(*(uint *)(lVar11 + 0x500) & uVar1) * 0xc0;
                  pfVar9 = pfVar2 + 6;
                  uVar14 = uVar20;
                  do {
                    if (!bVar15) goto LAB_1804d35e6;
                    bVar15 = -*(float *)(lVar7 + 0xb8 + lVar11) <=
                             (*(float *)(lVar7 + 0x28 + lVar11) - pfVar9[-6]) * pfVar9[-2] +
                             (*(float *)(lVar7 + 0x2c + lVar11) - pfVar9[-5]) * pfVar9[-1] +
                             (*(float *)(lVar7 + 0x30 + lVar11) - pfVar9[-4]) * *pfVar9;
                    uVar14 = uVar14 + 1;
                    pfVar9 = pfVar9 + 8;
                  } while ((longlong)uVar14 < 6);
                  if (!bVar15) {
LAB_1804d35e6:
                    fVar27 = *(float *)(lVar7 + 8 + lVar11);
                    pfVar9 = &stack0x00000060;
                    uStack0000000000000064 = *(int32_t *)(lVar7 + 0xc + lVar11);
                    in_stack_00000068 = *(int32_t *)(lVar7 + 0x10 + lVar11);
                    uStack0000000000000070 = *(int32_t *)(lVar7 + 0x18 + lVar11);
                    uStack0000000000000074 = *(int32_t *)(lVar7 + 0x1c + lVar11);
                    in_stack_00000078 = *(int32_t *)(lVar7 + 0x20 + lVar11);
                    fStack0000000000000060 = fVar27;
                    *(float *)(unaff_RBP + -0x80) = fVar27;
                    *(int32_t *)(unaff_RBP + -0x7c) = uStack0000000000000074;
                    *(int32_t *)(unaff_RBP + -0x78) = in_stack_00000068;
                    *(int32_t *)(unaff_RBP + -0x70) = uStack0000000000000070;
                    *(int32_t *)(unaff_RBP + -0x6c) = uStack0000000000000074;
                    *(int32_t *)(unaff_RBP + -0x68) = in_stack_00000068;
                    *(float *)(unaff_RBP + -0x60) = fVar27;
                    *(int32_t *)(unaff_RBP + -0x5c) = uStack0000000000000064;
                    *(int32_t *)(unaff_RBP + -0x58) = in_stack_00000078;
                    *(int32_t *)(unaff_RBP + -0x50) = uStack0000000000000070;
                    *(int32_t *)(unaff_RBP + -0x4c) = uStack0000000000000064;
                    *(int32_t *)(unaff_RBP + -0x48) = in_stack_00000078;
                    *(float *)(unaff_RBP + -0x40) = fVar27;
                    *(int32_t *)(unaff_RBP + -0x3c) = uStack0000000000000074;
                    *(int32_t *)(unaff_RBP + -0x38) = in_stack_00000078;
                    *(int32_t *)(unaff_RBP + -0x30) = uStack0000000000000070;
                    *(int32_t *)(unaff_RBP + -0x2c) = uStack0000000000000064;
                    *(int32_t *)(unaff_RBP + -0x28) = in_stack_00000068;
                    uVar14 = uVar20;
                    while( true ) {
                      fStack0000000000000050 = (float)uVar3;
                      fVar27 = fVar27 - fStack0000000000000050;
                      pfVar10 = pfVar2 + 0x16;
                      fStack0000000000000054 = (float)((ulonglong)uVar3 >> 0x20);
                      fStack0000000000000054 = pfVar9[1] - fStack0000000000000054;
                      lVar11 = 2;
                      fStack0000000000000058 = (float)uVar4;
                      fStack0000000000000058 = pfVar9[2] - fStack0000000000000058;
                      fVar22 = fVar27 * fVar27 + fStack0000000000000054 * fStack0000000000000054 +
                               fStack0000000000000058 * fStack0000000000000058;
                      auVar23 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
                      fVar26 = auVar23._0_4_;
                      fVar22 = fVar26 * 0.5 * (3.0 - fVar22 * fVar26 * fVar26);
                      fStack0000000000000038 = (float)*(uint64_t *)(pfVar9 + 2);
                      fStack0000000000000034 = (float)((ulonglong)*(uint64_t *)pfVar9 >> 0x20);
                      fStack0000000000000030 = (float)*(uint64_t *)pfVar9;
                      do {
                        fVar26 = ((pfVar10[-6] - fStack0000000000000030) * pfVar10[-2] +
                                  (pfVar10[-5] - fStack0000000000000034) * pfVar10[-1] +
                                 (pfVar10[-4] - fStack0000000000000038) * *pfVar10) /
                                 (fVar27 * fVar22 * pfVar10[-2] +
                                  fStack0000000000000054 * fVar22 * pfVar10[-1] +
                                 fStack0000000000000058 * fVar22 * *pfVar10);
                        if (0.0 <= fVar26) {
                          fVar25 = fVar27 * fVar22 * fVar26 + fStack0000000000000030;
                          fVar24 = fStack0000000000000054 * fVar22 * fVar26 + fStack0000000000000034
                          ;
                          fVar26 = fStack0000000000000058 * fVar22 * fVar26 + fStack0000000000000038
                          ;
                          if ((0.0 <= (fVar24 - pfVar2[1]) * pfVar2[5] +
                                      (fVar25 - *pfVar2) * pfVar2[4] +
                                      (fVar26 - pfVar2[2]) * pfVar2[6]) &&
                             (0.0 <= (fVar24 - pfVar2[9]) * pfVar2[0xd] +
                                     (fVar25 - pfVar2[8]) * pfVar2[0xc] +
                                     (fVar26 - pfVar2[10]) * pfVar2[0xe])) goto LAB_1804d3891;
                        }
                        lVar11 = lVar11 + 1;
                        pfVar10 = pfVar10 + 8;
                      } while (lVar11 < 6);
                      uVar14 = uVar14 + 1;
                      pfVar9 = pfVar9 + 4;
                      if (7 < (longlong)uVar14) break;
                      fVar27 = *pfVar9;
                    }
                    goto LAB_1804d38db;
                  }
                }
LAB_1804d3891:
                LOCK();
                *(longlong *)unaff_R14[4] = *(longlong *)unaff_R14[4] + 1;
                UNLOCK();
                uStackX_20 = 1;
                lVar7 = (longlong)(int)(*(uint *)(*unaff_R14 + 0x3c0) & uVar19);
                lVar11 = *(longlong *)(*(longlong *)(*unaff_R14 + 0x3a0) + lVar17 * 8);
                *(ushort *)(lVar11 + 8 + lVar7 * 0xc) =
                     *(ushort *)(lVar11 + 8 + lVar7 * 0xc) | 1 << ((ushort)piVar13 & 0xf);
                uVar16 = 1;
              }
            }
LAB_1804d38db:
            lVar11 = *unaff_R14;
            piVar13 = (int *)(ulonglong)(iVar12 + 1U);
            uVar14 = (ulonglong)(int)(iVar12 + 1U);
            uVar19 = uStackX_24;
            param_3 = param_5;
          } while (uVar14 < (ulonglong)
                            (*(longlong *)(lVar11 + 0x10) - *(longlong *)(lVar11 + 8) >> 3));
        }
        *(int8_t *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x3f8) + lVar18 * 8) + 8 +
         ((longlong)*(int *)(lVar11 + 0x418) & uVar21) * 0xc) = uVar16;
      }
    }
    uStackX_24 = uVar19 + 1;
    unaff_R13 = (ulonglong)uStackX_24;
    uVar21 = uVar21 + 1;
    if (param_3 <= (int)uStackX_24) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}






// 函数: void FUN_1804d39b7(void)
void FUN_1804d39b7(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804d39d0(longlong *param_1,int param_2,int param_3)
void FUN_1804d39d0(longlong *param_1,int param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  float fVar15;
  float fVar16;
  uint64_t extraout_XMM0_Qb;
  
  lVar10 = (longlong)param_2;
  do {
    if (param_3 <= lVar10) {
      return;
    }
    lVar2 = *param_1;
    uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x420) + lVar10 * 4);
    lVar9 = (longlong)(int)(*(uint *)(lVar2 + 0x2c88) & uVar1) * 0x68;
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x2c68) + (longlong)((int)uVar1 >> 10) * 8);
    uVar1 = *(uint *)(lVar9 + 0x14 + lVar3);
    lVar11 = (longlong)(int)(*(uint *)(lVar2 + 0x2b18) & uVar1) * 0xd8;
    lVar4 = *(longlong *)(*(longlong *)(lVar2 + 11000) + (longlong)((int)uVar1 >> 10) * 8);
    uVar1 = *(uint *)(lVar4 + 0x18 + lVar11);
    lVar8 = (longlong)(int)(*(uint *)(lVar2 + 0x4a8) & uVar1);
    pfVar6 = (float *)param_1[1];
    lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x488) + (longlong)((int)uVar1 >> 10) * 8);
    fVar15 = *(float *)(lVar5 + 0x38 + lVar8 * 0x48) - *pfVar6;
    fVar16 = *(float *)(lVar5 + 0x3c + lVar8 * 0x48) - pfVar6[1];
    fVar12 = *(float *)(lVar5 + 0x40 + lVar8 * 0x48) - pfVar6[2];
    fVar12 = fVar16 * fVar16 + fVar15 * fVar15 + fVar12 * fVar12;
    if (*(int *)param_1[2] < 0) {
      iVar7 = *(int *)(lVar9 + 0x18 + lVar3);
      if (iVar7 == -1) {
        lVar5 = *(longlong *)param_1[3];
        auVar13._0_8_ = tanf(*(float *)(lVar5 + 0x14c) * 0.5);
        auVar13._8_8_ = extraout_XMM0_Qb;
        auVar14._4_12_ = auVar13._4_12_;
        auVar14._0_4_ = (float)auVar13._0_8_ / *(float *)(lVar5 + 0x150);
        atanf(auVar14._0_8_);
        fVar15 = (float)tanf();
        if (fVar15 * 1.5696856 < 1.0) {
          fVar12 = fVar12 * fVar15 * fVar15 * 2.2175214;
        }
        lVar5 = *(longlong *)(_DAT_180c86870 + 0x3d8);
        if (((lVar5 == 0) ||
            ((*(int *)(lVar5 + 0x110) != 1 && ((lVar5 == 0 || (*(int *)(lVar5 + 0x110) != 3)))))) &&
           (*(int *)(_DAT_180c8a9c8 + 0x7e0) == 0)) {
          iVar7 = 0;
          pfVar6 = (float *)(lVar2 + 0x88);
          if (*pfVar6 <= fVar12 && fVar12 != *pfVar6) {
            do {
              iVar7 = iVar7 + 1;
              pfVar6 = pfVar6 + 1;
            } while (*pfVar6 <= fVar12 && fVar12 != *pfVar6);
          }
          iVar7 = *(int *)(lVar2 + 0xa8) + iVar7;
          if (-1 < iVar7) goto LAB_1804d3c53;
          iVar7 = 0;
        }
        else {
          iVar7 = 0;
LAB_1804d3c53:
          if (5 < iVar7) {
            iVar7 = 5;
          }
        }
        uVar1 = *(uint *)(lVar9 + 8 + lVar3);
        *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x2cf0) + (longlong)((int)uVar1 >> 10) * 8) + 8
                + (longlong)(int)(*(uint *)(lVar2 + 0x2d10) & uVar1) * 0xc) = iVar7;
      }
      else {
        uVar1 = *(uint *)(lVar9 + 8 + lVar3);
        *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x2cf0) + (longlong)((int)uVar1 >> 10) * 8) + 8
                + (longlong)(int)(*(uint *)(lVar2 + 0x2d10) & uVar1) * 0xc) = iVar7;
        iVar7 = *(int *)(lVar9 + 0x18 + lVar3);
      }
    }
    else {
      uVar1 = *(uint *)(lVar9 + 8 + lVar3);
      *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x2cf0) + (longlong)((int)uVar1 >> 10) * 8) + 8 +
              (longlong)(int)(*(uint *)(lVar2 + 0x2d10) & uVar1) * 0xc) = *(int *)param_1[2];
      iVar7 = *(int *)param_1[2];
    }
    lVar10 = lVar10 + 1;
    *(float *)(*(longlong *)(lVar4 + 8 + lVar11) + 0x2c0) = (float)iVar7;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804d39f8(void)
void FUN_1804d39f8(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  int iVar7;
  longlong lVar8;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  longlong lVar9;
  uint64_t unaff_RDI;
  longlong in_R11;
  uint64_t unaff_R12;
  longlong *unaff_R13;
  longlong unaff_R14;
  uint64_t unaff_R15;
  longlong lVar10;
  float fVar11;
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  float fVar14;
  float fVar15;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  longlong in_stack_000000c8;
  uint64_t extraout_XMM0_Qb;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBP;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
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
  *(uint64_t *)(in_R11 + 8) = unaff_RBX;
  do {
    lVar2 = *unaff_R13;
    uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x420) + unaff_R14 * 4);
    lVar9 = (longlong)(int)(*(uint *)(lVar2 + 0x2c88) & uVar1) * 0x68;
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x2c68) + (longlong)((int)uVar1 >> 10) * 8);
    uVar1 = *(uint *)(lVar9 + 0x14 + lVar3);
    lVar10 = (longlong)(int)(*(uint *)(lVar2 + 0x2b18) & uVar1) * 0xd8;
    lVar4 = *(longlong *)(*(longlong *)(lVar2 + 11000) + (longlong)((int)uVar1 >> 10) * 8);
    uVar1 = *(uint *)(lVar4 + 0x18 + lVar10);
    lVar8 = (longlong)(int)(*(uint *)(lVar2 + 0x4a8) & uVar1);
    pfVar6 = (float *)unaff_R13[1];
    lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x488) + (longlong)((int)uVar1 >> 10) * 8);
    fVar14 = *(float *)(lVar5 + 0x38 + lVar8 * 0x48) - *pfVar6;
    fVar15 = *(float *)(lVar5 + 0x3c + lVar8 * 0x48) - pfVar6[1];
    fVar11 = *(float *)(lVar5 + 0x40 + lVar8 * 0x48) - pfVar6[2];
    fVar11 = fVar15 * fVar15 + fVar14 * fVar14 + fVar11 * fVar11;
    if (*(int *)unaff_R13[2] < 0) {
      iVar7 = *(int *)(lVar9 + 0x18 + lVar3);
      if (iVar7 == -1) {
        lVar5 = *(longlong *)unaff_R13[3];
        auVar12._0_8_ = tanf(*(float *)(lVar5 + 0x14c) * 0.5);
        auVar12._8_8_ = extraout_XMM0_Qb;
        auVar13._4_12_ = auVar12._4_12_;
        auVar13._0_4_ = (float)auVar12._0_8_ / *(float *)(lVar5 + 0x150);
        atanf(auVar13._0_8_);
        fVar14 = (float)tanf();
        if (fVar14 * 1.5696856 < 1.0) {
          fVar11 = fVar11 * fVar14 * fVar14 * 2.2175214;
        }
        lVar5 = *(longlong *)(_DAT_180c86870 + 0x3d8);
        if (((lVar5 == 0) ||
            ((*(int *)(lVar5 + 0x110) != 1 && ((lVar5 == 0 || (*(int *)(lVar5 + 0x110) != 3)))))) &&
           (*(int *)(_DAT_180c8a9c8 + 0x7e0) == 0)) {
          iVar7 = 0;
          pfVar6 = (float *)(lVar2 + 0x88);
          if (*pfVar6 <= fVar11 && fVar11 != *pfVar6) {
            do {
              iVar7 = iVar7 + 1;
              pfVar6 = pfVar6 + 1;
            } while (*pfVar6 <= fVar11 && fVar11 != *pfVar6);
          }
          iVar7 = *(int *)(lVar2 + 0xa8) + iVar7;
          if (-1 < iVar7) goto LAB_1804d3c53;
          iVar7 = 0;
        }
        else {
          iVar7 = 0;
LAB_1804d3c53:
          if (5 < iVar7) {
            iVar7 = 5;
          }
        }
        uVar1 = *(uint *)(lVar9 + 8 + lVar3);
        *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x2cf0) + (longlong)((int)uVar1 >> 10) * 8) + 8
                + (longlong)(int)(*(uint *)(lVar2 + 0x2d10) & uVar1) * 0xc) = iVar7;
      }
      else {
        uVar1 = *(uint *)(lVar9 + 8 + lVar3);
        *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x2cf0) + (longlong)((int)uVar1 >> 10) * 8) + 8
                + (longlong)(int)(*(uint *)(lVar2 + 0x2d10) & uVar1) * 0xc) = iVar7;
        iVar7 = *(int *)(lVar9 + 0x18 + lVar3);
      }
    }
    else {
      uVar1 = *(uint *)(lVar9 + 8 + lVar3);
      *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x2cf0) + (longlong)((int)uVar1 >> 10) * 8) + 8 +
              (longlong)(int)(*(uint *)(lVar2 + 0x2d10) & uVar1) * 0xc) = *(int *)unaff_R13[2];
      iVar7 = *(int *)unaff_R13[2];
    }
    unaff_R14 = unaff_R14 + 1;
    *(float *)(*(longlong *)(lVar4 + 8 + lVar10) + 0x2c0) = (float)iVar7;
    if (in_stack_000000c8 <= unaff_R14) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1804d3d03(void)
void FUN_1804d3d03(void)

{
  return;
}






// 函数: void FUN_1804d3d10(longlong param_1,longlong param_2)
void FUN_1804d3d10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint64_t *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int *piVar9;
  uint auStackX_8 [2];
  longlong lStack_28;
  longlong *plStack_20;
  
  FUN_1804dd5d0(param_1 + 0x2c90,&lStack_28,param_2);
  if (lStack_28 !=
      *(longlong *)(*(longlong *)(param_1 + 0x2c98) + *(longlong *)(param_1 + 0x2ca0) * 8)) {
    uVar5 = *(uint *)(lStack_28 + 0x10);
    lVar4 = (longlong)((int)uVar5 >> 10) * 8;
    FUN_1804e06d0(*(longlong *)(*(longlong *)(param_1 + 0x2c68) + lVar4) +
                  (longlong)(int)(*(uint *)(param_1 + 0x2c88) & uVar5) * 0x68 + 8,param_1);
    piVar9 = (int *)((longlong)(int)(*(uint *)(param_1 + 0x2c88) & uVar5) * 0x68 +
                    *(longlong *)(*(longlong *)(param_1 + 0x2c68) + lVar4));
    auStackX_8[0] = uVar5;
    if ((uVar5 != 0xffffffff) && (*piVar9 != -1)) {
      FUN_1800571e0(param_1 + 0x2c48,auStackX_8);
      FUN_1804a7c60(piVar9 + 2);
      *piVar9 = -1;
    }
    lVar4 = *(longlong *)(lStack_28 + 0x18);
    plVar2 = plStack_20;
    while (lVar4 == 0) {
      plVar1 = plVar2 + 1;
      plVar2 = plVar2 + 1;
      lVar4 = *plVar1;
    }
    lVar4 = *plStack_20;
    lVar6 = *(longlong *)(lVar4 + 0x18);
    if (lVar4 == lStack_28) {
      *plStack_20 = lVar6;
    }
    else {
      for (; lVar6 != lStack_28; lVar6 = *(longlong *)(lVar6 + 0x18)) {
        lVar4 = lVar6;
      }
      *(uint64_t *)(lVar4 + 0x18) = *(uint64_t *)(lVar6 + 0x18);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(lStack_28);
  }
  puVar3 = (uint64_t *)(param_1 + 0x2b88);
  puVar7 = *(uint64_t **)(param_1 + 0x2b98);
  if (puVar7 != (uint64_t *)0x0) {
    puVar8 = puVar3;
    do {
      if (*(int *)(puVar7 + 5) < *(int *)(param_2 + 8)) {
        puVar7 = (uint64_t *)*puVar7;
      }
      else {
        puVar8 = puVar7;
        puVar7 = (uint64_t *)puVar7[1];
      }
    } while (puVar7 != (uint64_t *)0x0);
    if ((puVar8 != puVar3) && (*(int *)(puVar8 + 5) <= *(int *)(param_2 + 8))) goto LAB_1804d3e91;
  }
  puVar8 = puVar3;
LAB_1804d3e91:
  if (puVar8 != puVar3) {
    *(longlong *)(param_1 + 0x2ba8) = *(longlong *)(param_1 + 0x2ba8) + -1;
    func_0x00018066bd70(puVar8);
    FUN_18066ba00(puVar8,puVar3);
    if (puVar8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar8);
    }
  }
  return;
}






// 函数: void FUN_1804d3d17(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
void FUN_1804d3d17(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  uint64_t *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int *piVar9;
  longlong lStackX_20;
  uint in_stack_00000050;
  
  FUN_1804dd5d0(param_1 + 0x2c90,&lStackX_20,param_2);
  if (lStackX_20 !=
      *(longlong *)(*(longlong *)(param_1 + 0x2c98) + *(longlong *)(param_1 + 0x2ca0) * 8)) {
    uVar5 = *(uint *)(lStackX_20 + 0x10);
    lVar4 = (longlong)((int)uVar5 >> 10) * 8;
    FUN_1804e06d0(*(longlong *)(*(longlong *)(param_1 + 0x2c68) + lVar4) +
                  (longlong)(int)(*(uint *)(param_1 + 0x2c88) & uVar5) * 0x68 + 8,param_1);
    piVar9 = (int *)((longlong)(int)(*(uint *)(param_1 + 0x2c88) & uVar5) * 0x68 +
                    *(longlong *)(*(longlong *)(param_1 + 0x2c68) + lVar4));
    in_stack_00000050 = uVar5;
    if ((uVar5 != 0xffffffff) && (*piVar9 != -1)) {
      FUN_1800571e0(param_1 + 0x2c48,&stack0x00000050);
      FUN_1804a7c60(piVar9 + 2);
      *piVar9 = -1;
    }
    lVar4 = *(longlong *)(lStackX_20 + 0x18);
    plVar2 = param_5;
    while (lVar4 == 0) {
      plVar1 = plVar2 + 1;
      plVar2 = plVar2 + 1;
      lVar4 = *plVar1;
    }
    lVar4 = *param_5;
    lVar6 = *(longlong *)(lVar4 + 0x18);
    if (lVar4 == lStackX_20) {
      *param_5 = lVar6;
    }
    else {
      for (; lVar6 != lStackX_20; lVar6 = *(longlong *)(lVar6 + 0x18)) {
        lVar4 = lVar6;
      }
      *(uint64_t *)(lVar4 + 0x18) = *(uint64_t *)(lVar6 + 0x18);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(lStackX_20);
  }
  puVar3 = (uint64_t *)(param_1 + 0x2b88);
  puVar7 = *(uint64_t **)(param_1 + 0x2b98);
  if (puVar7 != (uint64_t *)0x0) {
    puVar8 = puVar3;
    do {
      if (*(int *)(puVar7 + 5) < *(int *)(param_2 + 8)) {
        puVar7 = (uint64_t *)*puVar7;
      }
      else {
        puVar8 = puVar7;
        puVar7 = (uint64_t *)puVar7[1];
      }
    } while (puVar7 != (uint64_t *)0x0);
    if ((puVar8 != puVar3) && (*(int *)(puVar8 + 5) <= *(int *)(param_2 + 8))) goto LAB_1804d3e91;
  }
  puVar8 = puVar3;
LAB_1804d3e91:
  if (puVar8 != puVar3) {
    *(longlong *)(param_1 + 0x2ba8) = *(longlong *)(param_1 + 0x2ba8) + -1;
    func_0x00018066bd70(puVar8);
    FUN_18066ba00(puVar8,puVar3);
    if (puVar8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar8);
    }
  }
  return;
}






// 函数: void FUN_1804d3d5d(void)
void FUN_1804d3d5d(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int *piVar6;
  longlong unaff_RBP;
  longlong unaff_R14;
  longlong *in_stack_00000028;
  uint in_stack_00000050;
  
  uVar4 = *(uint *)(unaff_RBP + 0x10);
  lVar3 = (longlong)((int)uVar4 >> 10) * 8;
  FUN_1804e06d0(*(longlong *)(*(longlong *)(unaff_R14 + 0x2c68) + lVar3) +
                (longlong)(int)(*(uint *)(unaff_R14 + 0x2c88) & uVar4) * 0x68 + 8);
  piVar6 = (int *)((longlong)(int)(*(uint *)(unaff_R14 + 0x2c88) & uVar4) * 0x68 +
                  *(longlong *)(*(longlong *)(unaff_R14 + 0x2c68) + lVar3));
  in_stack_00000050 = uVar4;
  if ((uVar4 != 0xffffffff) && (*piVar6 != -1)) {
    FUN_1800571e0(unaff_R14 + 0x2c48,&stack0x00000050);
    FUN_1804a7c60(piVar6 + 2);
    *piVar6 = -1;
  }
  lVar3 = *(longlong *)(unaff_RBP + 0x18);
  plVar2 = in_stack_00000028;
  while (lVar3 == 0) {
    plVar1 = plVar2 + 1;
    plVar2 = plVar2 + 1;
    lVar3 = *plVar1;
  }
  lVar3 = *in_stack_00000028;
  lVar5 = *(longlong *)(lVar3 + 0x18);
  if (lVar3 == unaff_RBP) {
    *in_stack_00000028 = lVar5;
  }
  else {
    for (; lVar5 != unaff_RBP; lVar5 = *(longlong *)(lVar5 + 0x18)) {
      lVar3 = lVar5;
    }
    *(uint64_t *)(lVar3 + 0x18) = *(uint64_t *)(lVar5 + 0x18);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






