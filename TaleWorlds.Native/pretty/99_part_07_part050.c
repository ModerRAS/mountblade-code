#include "TaleWorlds.Native.Split.h"

// 99_part_07_part050.c - 8 个函数

// 函数: void FUN_1804ccdf0(longlong *param_1,int param_2,int param_3)
void FUN_1804ccdf0(longlong *param_1,int param_2,int param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  float *pfVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float *pfVar10;
  longlong lVar11;
  float *pfVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int8_t auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  
  if (param_2 < param_3) {
    uVar8 = (ulonglong)param_2;
    uVar19 = (ulonglong)(uint)(param_3 - param_2);
    do {
      uVar13 = 0;
      lVar18 = *param_1;
      lVar11 = (uVar8 & 0xffffffff) * 0x38;
      lVar14 = *(longlong *)(lVar18 + 0x68);
      uVar9 = lVar14 + 8 + lVar11;
      if ((*(ulonglong *)(lVar11 + lVar14) & 0xffffffff00000000) == 0) {
        uVar9 = uVar13;
      }
      if (uVar9 != 0) {
        uVar2 = *(ushort *)(lVar11 + 0x30 + lVar14);
        uVar3 = *(ushort *)(lVar11 + 0x2c + lVar14);
        lVar4 = *(longlong *)(lVar18 + 0x108);
        lVar14 = (ulonglong)*(ushort *)(lVar11 + 0x26 + lVar14) * 0xc0 +
                 *(longlong *)(lVar18 + 0xb8);
        uVar9 = uVar13;
        uVar16 = uVar13;
        uVar20 = uVar13;
        if (*(longlong *)(lVar18 + 0x10) - *(longlong *)(lVar18 + 8) >> 3 != 0) {
          do {
            iVar15 = (int)uVar16;
            iVar7 = FUN_1801b8ce0(param_1[1],uVar13 * 0x140 + param_1[2],lVar14 + 8,0,0,
                                  *(int32_t *)(param_1[3] + uVar20 * 4),1,
                                  *(int8_t *)(uVar20 + param_1[4]));
            if (iVar15 == 0) {
              *(int16_t *)((ulonglong)uVar3 * 0x10 + 8 + *(longlong *)(*param_1 + 0x158)) = 0;
            }
            lVar18 = 0;
            if (iVar7 != 0) {
              if (iVar15 != 0) {
                pfVar5 = (float *)param_1[5];
                bVar6 = true;
                pfVar10 = pfVar5 + 6;
                lVar11 = lVar18;
                do {
                  if (!bVar6) goto LAB_1804cd00d;
                  bVar6 = -*(float *)(lVar14 + 0xb8) <=
                          (*(float *)(lVar14 + 0x2c) - pfVar10[-5]) * pfVar10[-1] +
                          (*(float *)(lVar14 + 0x28) - pfVar10[-6]) * pfVar10[-2] +
                          (*(float *)(lVar14 + 0x30) - pfVar10[-4]) * *pfVar10;
                  lVar11 = lVar11 + 1;
                  pfVar10 = pfVar10 + 8;
                } while (lVar11 < 6);
                if (!bVar6) {
LAB_1804cd00d:
                  lVar11 = param_1[6];
                  pfVar10 = (float *)((ulonglong)uVar2 * 0x88 + lVar4 + 8);
                  do {
                    pfVar12 = pfVar5 + 0x16;
                    fVar28 = *pfVar10 - *(float *)(lVar11 + uVar9);
                    fVar22 = pfVar10[1] - *(float *)(lVar11 + 4 + uVar9);
                    lVar17 = 2;
                    fVar23 = pfVar10[2] - *(float *)(lVar11 + 8 + uVar9);
                    fVar21 = fVar28 * fVar28 + fVar22 * fVar22 + fVar23 * fVar23;
                    auVar24 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
                    fVar27 = auVar24._0_4_;
                    fVar21 = fVar27 * 0.5 * (3.0 - fVar21 * fVar27 * fVar27);
                    fStack_d0 = (float)*(uint64_t *)(pfVar10 + 2);
                    fStack_d4 = (float)((ulonglong)*(uint64_t *)pfVar10 >> 0x20);
                    fStack_d8 = (float)*(uint64_t *)pfVar10;
                    do {
                      fVar27 = ((pfVar12[-6] - fStack_d8) * pfVar12[-2] +
                                (pfVar12[-5] - fStack_d4) * pfVar12[-1] +
                               (pfVar12[-4] - fStack_d0) * *pfVar12) /
                               (pfVar12[-2] * fVar28 * fVar21 + pfVar12[-1] * fVar22 * fVar21 +
                               *pfVar12 * fVar23 * fVar21);
                      if (0.0 <= fVar27) {
                        fVar26 = fVar28 * fVar21 * fVar27 + fStack_d8;
                        fVar25 = fVar22 * fVar21 * fVar27 + fStack_d4;
                        fVar27 = fVar23 * fVar21 * fVar27 + fStack_d0;
                        if ((0.0 <= (fVar25 - pfVar5[1]) * pfVar5[5] +
                                    (fVar26 - *pfVar5) * pfVar5[4] +
                                    (fVar27 - pfVar5[2]) * pfVar5[6]) &&
                           (0.0 <= (fVar25 - pfVar5[9]) * pfVar5[0xd] +
                                   (fVar26 - pfVar5[8]) * pfVar5[0xc] +
                                   (fVar27 - pfVar5[10]) * pfVar5[0xe])) goto LAB_1804cd21c;
                      }
                      lVar17 = lVar17 + 1;
                      pfVar12 = pfVar12 + 8;
                    } while (lVar17 < 6);
                    lVar18 = lVar18 + 1;
                    pfVar10 = pfVar10 + 4;
                  } while (lVar18 < 8);
                  goto LAB_1804cd233;
                }
              }
LAB_1804cd21c:
              puVar1 = (ushort *)(*(longlong *)(*param_1 + 0x158) + 8 + (ulonglong)uVar3 * 0x10);
              *puVar1 = *puVar1 | 1 << ((byte)uVar16 & 0x1f);
            }
LAB_1804cd233:
            uVar13 = (ulonglong)(int)(iVar15 + 1U);
            uVar9 = uVar9 + 0x10;
            uVar16 = (ulonglong)(iVar15 + 1U);
            uVar20 = uVar20 + 1;
          } while (uVar13 < (ulonglong)
                            (*(longlong *)(*param_1 + 0x10) - *(longlong *)(*param_1 + 8) >> 3));
        }
      }
      uVar8 = uVar8 + 1;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  return;
}






// 函数: void FUN_1804cce04(longlong *param_1,int param_2,int param_3)
void FUN_1804cce04(longlong *param_1,int param_2,int param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  float *pfVar5;
  bool bVar6;
  int iVar7;
  longlong in_RAX;
  ulonglong uVar8;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  ulonglong uVar12;
  uint64_t unaff_RBX;
  longlong lVar13;
  uint64_t unaff_RBP;
  int iVar14;
  uint64_t unaff_RSI;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  ulonglong uVar18;
  uint64_t unaff_R15;
  float fVar19;
  float fVar20;
  float fVar21;
  int8_t auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  float fVar26;
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
  int32_t uStack0000000000000028;
  int8_t uStack0000000000000030;
  int8_t uStack0000000000000038;
  ulonglong uStack0000000000000040;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  ulonglong uStack0000000000000158;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x10) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM9_Dd;
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM10_Dd;
  *(int32_t *)(in_RAX + -0x88) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -0x84) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0x80) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x7c) = unaff_XMM11_Dd;
  *(int32_t *)(in_RAX + -0x98) = unaff_XMM12_Da;
  *(int32_t *)(in_RAX + -0x94) = unaff_XMM12_Db;
  *(int32_t *)(in_RAX + -0x90) = unaff_XMM12_Dc;
  *(int32_t *)(in_RAX + -0x8c) = unaff_XMM12_Dd;
  *(int32_t *)(in_RAX + -0xa8) = unaff_XMM13_Da;
  *(int32_t *)(in_RAX + -0xa4) = unaff_XMM13_Db;
  *(int32_t *)(in_RAX + -0xa0) = unaff_XMM13_Dc;
  *(int32_t *)(in_RAX + -0x9c) = unaff_XMM13_Dd;
  *(int32_t *)(in_RAX + -0xb8) = unaff_XMM14_Da;
  *(int32_t *)(in_RAX + -0xb4) = unaff_XMM14_Db;
  *(int32_t *)(in_RAX + -0xb0) = unaff_XMM14_Dc;
  *(int32_t *)(in_RAX + -0xac) = unaff_XMM14_Dd;
  uStack0000000000000158 = (ulonglong)param_2;
  uStack0000000000000040 = (ulonglong)(uint)(param_3 - param_2);
  do {
    uVar12 = 0;
    lVar17 = *param_1;
    lVar10 = (uStack0000000000000158 & 0xffffffff) * 0x38;
    lVar13 = *(longlong *)(lVar17 + 0x68);
    uVar8 = lVar13 + 8 + lVar10;
    if ((*(ulonglong *)(lVar10 + lVar13) & 0xffffffff00000000) == 0) {
      uVar8 = uVar12;
    }
    if (uVar8 != 0) {
      uVar2 = *(ushort *)(lVar10 + 0x30 + lVar13);
      uVar3 = *(ushort *)(lVar10 + 0x2c + lVar13);
      lVar4 = *(longlong *)(lVar17 + 0x108);
      lVar13 = (ulonglong)*(ushort *)(lVar10 + 0x26 + lVar13) * 0xc0 + *(longlong *)(lVar17 + 0xb8);
      uVar8 = uVar12;
      uVar15 = uVar12;
      uVar18 = uVar12;
      if (*(longlong *)(lVar17 + 0x10) - *(longlong *)(lVar17 + 8) >> 3 != 0) {
        do {
          iVar14 = (int)uVar15;
          uStack0000000000000028 = *(int32_t *)(param_1[3] + uVar18 * 4);
          uStack0000000000000038 = *(int8_t *)(uVar18 + param_1[4]);
          uStack0000000000000030 = 1;
          iVar7 = FUN_1801b8ce0(param_1[1],uVar12 * 0x140 + param_1[2],lVar13 + 8,0,0);
          if (iVar14 == 0) {
            *(int16_t *)((ulonglong)uVar3 * 0x10 + 8 + *(longlong *)(*param_1 + 0x158)) = 0;
          }
          lVar17 = 0;
          if (iVar7 != 0) {
            if (iVar14 != 0) {
              pfVar5 = (float *)param_1[5];
              bVar6 = true;
              pfVar9 = pfVar5 + 6;
              lVar10 = lVar17;
              do {
                if (!bVar6) goto LAB_1804cd00d;
                bVar6 = -*(float *)(lVar13 + 0xb8) <=
                        (*(float *)(lVar13 + 0x2c) - pfVar9[-5]) * pfVar9[-1] +
                        (*(float *)(lVar13 + 0x28) - pfVar9[-6]) * pfVar9[-2] +
                        (*(float *)(lVar13 + 0x30) - pfVar9[-4]) * *pfVar9;
                lVar10 = lVar10 + 1;
                pfVar9 = pfVar9 + 8;
              } while (lVar10 < 6);
              if (!bVar6) {
LAB_1804cd00d:
                lVar10 = param_1[6];
                pfVar9 = (float *)((ulonglong)uVar2 * 0x88 + lVar4 + 8);
                do {
                  pfVar11 = pfVar5 + 0x16;
                  fVar26 = *pfVar9 - *(float *)(lVar10 + uVar8);
                  fVar20 = pfVar9[1] - *(float *)(lVar10 + 4 + uVar8);
                  lVar16 = 2;
                  fVar21 = pfVar9[2] - *(float *)(lVar10 + 8 + uVar8);
                  fVar19 = fVar26 * fVar26 + fVar20 * fVar20 + fVar21 * fVar21;
                  auVar22 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
                  fVar25 = auVar22._0_4_;
                  fVar19 = fVar25 * 0.5 * (3.0 - fVar19 * fVar25 * fVar25);
                  fStack0000000000000068 = (float)*(uint64_t *)(pfVar9 + 2);
                  fStack0000000000000064 = (float)((ulonglong)*(uint64_t *)pfVar9 >> 0x20);
                  fStack0000000000000060 = (float)*(uint64_t *)pfVar9;
                  do {
                    fVar25 = ((pfVar11[-6] - fStack0000000000000060) * pfVar11[-2] +
                              (pfVar11[-5] - fStack0000000000000064) * pfVar11[-1] +
                             (pfVar11[-4] - fStack0000000000000068) * *pfVar11) /
                             (pfVar11[-2] * fVar26 * fVar19 + pfVar11[-1] * fVar20 * fVar19 +
                             *pfVar11 * fVar21 * fVar19);
                    if (0.0 <= fVar25) {
                      fVar24 = fVar26 * fVar19 * fVar25 + fStack0000000000000060;
                      fVar23 = fVar20 * fVar19 * fVar25 + fStack0000000000000064;
                      fVar25 = fVar21 * fVar19 * fVar25 + fStack0000000000000068;
                      if ((0.0 <= (fVar23 - pfVar5[1]) * pfVar5[5] + (fVar24 - *pfVar5) * pfVar5[4]
                                  + (fVar25 - pfVar5[2]) * pfVar5[6]) &&
                         (0.0 <= (fVar23 - pfVar5[9]) * pfVar5[0xd] +
                                 (fVar24 - pfVar5[8]) * pfVar5[0xc] +
                                 (fVar25 - pfVar5[10]) * pfVar5[0xe])) goto LAB_1804cd21c;
                    }
                    lVar16 = lVar16 + 1;
                    pfVar11 = pfVar11 + 8;
                  } while (lVar16 < 6);
                  lVar17 = lVar17 + 1;
                  pfVar9 = pfVar9 + 4;
                } while (lVar17 < 8);
                goto LAB_1804cd233;
              }
            }
LAB_1804cd21c:
            puVar1 = (ushort *)(*(longlong *)(*param_1 + 0x158) + 8 + (ulonglong)uVar3 * 0x10);
            *puVar1 = *puVar1 | 1 << ((byte)uVar15 & 0x1f);
          }
LAB_1804cd233:
          uVar12 = (ulonglong)(int)(iVar14 + 1U);
          uVar8 = uVar8 + 0x10;
          uVar15 = (ulonglong)(iVar14 + 1U);
          uVar18 = uVar18 + 1;
        } while (uVar12 < (ulonglong)
                          (*(longlong *)(*param_1 + 0x10) - *(longlong *)(*param_1 + 8) >> 3));
      }
    }
    uStack0000000000000158 = uStack0000000000000158 + 1;
    uStack0000000000000040 = uStack0000000000000040 - 1;
    if (uStack0000000000000040 == 0) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1804cd31d(void)
void FUN_1804cd31d(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804cd320(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804cd320(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint64_t uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  iVar1 = _Mtx_lock(param_1 + 0x2e8);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  plVar3 = (longlong *)(param_1 + 0x1a8);
  lVar5 = 8;
  do {
    uVar4 = 0;
    if (plVar3[1] != 0) {
      do {
        if ((*(ulonglong *)(*plVar3 + (uVar4 & 0xffffffff) * 0x28) & 0xffffffff00000000) != 0) {
          if (*plVar3 + ((uVar4 & 0xffffffff) * 5 + 1) * 8 != 0) {
            FUN_1804ce6b0();
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (ulonglong)plVar3[1]);
    }
    if (*plVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *plVar3 = 0;
    plVar3[2] = 1;
    plVar3[1] = 0;
    plVar3[3] = 0xffffffff;
    lVar2 = FUN_18062b420(_DAT_180c8ed18,plVar3[4] * 0x28,0x18,param_4,uVar6);
    *plVar3 = lVar2;
    plVar3 = plVar3 + 5;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if (*(longlong *)(param_1 + 0x108) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x108) = 0;
  *(uint64_t *)(param_1 + 0x118) = 1;
  *(uint64_t *)(param_1 + 0x110) = 0;
  *(uint64_t *)(param_1 + 0x120) = 0xffffffff;
  uVar6 = FUN_18062b420(_DAT_180c8ed18,*(longlong *)(param_1 + 0x128) * 0x88,0x18);
  *(uint64_t *)(param_1 + 0x108) = uVar6;
  if (*(longlong *)(param_1 + 0x158) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x158) = 0;
  *(uint64_t *)(param_1 + 0x168) = 1;
  *(uint64_t *)(param_1 + 0x160) = 0;
  *(uint64_t *)(param_1 + 0x170) = 0xffffffff;
  uVar6 = FUN_18062b420(_DAT_180c8ed18,*(longlong *)(param_1 + 0x178) << 4,0x18);
  *(uint64_t *)(param_1 + 0x158) = uVar6;
  if (*(longlong *)(param_1 + 0x90) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x90) = 0;
  *(uint64_t *)(param_1 + 0xa0) = 1;
  *(uint64_t *)(param_1 + 0x98) = 0;
  *(uint64_t *)(param_1 + 0xa8) = 0xffffffff;
  uVar6 = FUN_18062b420(_DAT_180c8ed18,*(longlong *)(param_1 + 0xb0) * 0x48,0x18);
  *(uint64_t *)(param_1 + 0x90) = uVar6;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0xb8) = 0;
  *(uint64_t *)(param_1 + 200) = 1;
  *(uint64_t *)(param_1 + 0xc0) = 0;
  *(uint64_t *)(param_1 + 0xd0) = 0xffffffff;
  uVar6 = FUN_18062b420(_DAT_180c8ed18,*(longlong *)(param_1 + 0xd8) * 0xc0,0x18);
  *(uint64_t *)(param_1 + 0xb8) = uVar6;
  if (*(longlong *)(param_1 + 0x130) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x130) = 0;
  *(uint64_t *)(param_1 + 0x140) = 1;
  *(uint64_t *)(param_1 + 0x138) = 0;
  *(uint64_t *)(param_1 + 0x148) = 0xffffffff;
  uVar6 = FUN_18062b420(_DAT_180c8ed18,*(longlong *)(param_1 + 0x150) << 4,0x18);
  *(uint64_t *)(param_1 + 0x130) = uVar6;
  FUN_1804ce1c0(param_1 + 0xe0);
  FUN_1804ce510(param_1 + 0x68);
  *(uint64_t *)(param_1 + 400) = *(uint64_t *)(param_1 + 0x188);
  *(int32_t *)(param_1 + 0x33c) = 0;
  *(int32_t *)(param_1 + 0x180) = 0;
  iVar1 = _Mtx_unlock(param_1 + 0x2e8);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804cd610(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804cd610(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lStackX_10;
  uint64_t uVar16;
  
  uVar16 = 0xfffffffffffffffe;
  puVar14 = (ulonglong *)(param_1 + 0x1b0);
  lStackX_10 = 8;
  do {
    uVar6 = 0;
    uVar13 = uVar6;
    if (*puVar14 != 0) {
      do {
        plVar5 = (longlong *)0x0;
        plVar11 = (longlong *)(puVar14[-1] + ((uVar6 & 0xffffffff) * 5 + 1) * 8);
        if ((*(ulonglong *)(puVar14[-1] + (uVar6 & 0xffffffff) * 0x28) & 0xffffffff00000000) == 0) {
          plVar11 = plVar5;
        }
        if (plVar11 != (longlong *)0x0) {
          lVar7 = (plVar11[1] - *plVar11) / 6 + (plVar11[1] - *plVar11 >> 0x3f);
          lVar7 = (lVar7 >> 4) - (lVar7 >> 0x3f);
          if (lVar7 != 0) {
            plVar5 = (longlong *)
                     FUN_18062b420(_DAT_180c8ed18,lVar7 * 0x60,*(uint *)(plVar11 + 3) & 0xff,param_4
                                   ,uVar16);
          }
          plVar10 = (longlong *)plVar11[1];
          plVar11 = (longlong *)*plVar11;
          plVar8 = plVar5;
          if (plVar11 != plVar10) {
            lVar7 = (longlong)plVar5 - (longlong)plVar11;
            plVar11 = plVar11 + 9;
            do {
              lVar15 = plVar11[-8];
              *plVar8 = plVar11[-9];
              plVar8[1] = lVar15;
              lVar15 = plVar11[-6];
              plVar8[2] = plVar11[-7];
              plVar8[3] = lVar15;
              uVar3 = *(int32_t *)((longlong)plVar11 + -0x24);
              lVar15 = plVar11[-4];
              uVar4 = *(int32_t *)((longlong)plVar11 + -0x1c);
              *(int *)(plVar8 + 4) = (int)plVar11[-5];
              *(int32_t *)((longlong)plVar8 + 0x24) = uVar3;
              *(int *)(plVar8 + 5) = (int)lVar15;
              *(int32_t *)((longlong)plVar8 + 0x2c) = uVar4;
              uVar3 = *(int32_t *)((longlong)plVar11 + -0x14);
              lVar15 = plVar11[-2];
              uVar4 = *(int32_t *)((longlong)plVar11 + -0xc);
              *(int *)(plVar8 + 6) = (int)plVar11[-3];
              *(int32_t *)((longlong)plVar8 + 0x34) = uVar3;
              *(int *)(plVar8 + 7) = (int)lVar15;
              *(int32_t *)((longlong)plVar8 + 0x3c) = uVar4;
              plVar1 = (longlong *)plVar11[-1];
              *(longlong **)(lVar7 + -8 + (longlong)plVar11) = plVar1;
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x28))();
              }
              plVar1 = (longlong *)*plVar11;
              *(longlong **)(lVar7 + (longlong)plVar11) = plVar1;
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x28))();
              }
              *(char *)(lVar7 + 8 + (longlong)plVar11) = (char)plVar11[1];
              *(int32_t *)(lVar7 + 0xc + (longlong)plVar11) =
                   *(int32_t *)((longlong)plVar11 + 0xc);
              *(int *)(lVar7 + 0x10 + (longlong)plVar11) = (int)plVar11[2];
              *(int32_t *)(lVar7 + 0x14 + (longlong)plVar11) =
                   *(int32_t *)((longlong)plVar11 + 0x14);
              plVar8 = plVar8 + 0xc;
              plVar1 = plVar11 + 3;
              plVar11 = plVar11 + 0xc;
            } while (plVar1 != plVar10);
          }
          iVar9 = 0;
          lVar7 = ((longlong)plVar8 - (longlong)plVar5) / 6 +
                  ((longlong)plVar8 - (longlong)plVar5 >> 0x3f);
          lVar15 = lVar7 >> 4;
          lVar7 = lVar7 >> 0x3f;
          plVar11 = plVar5;
          if (lVar15 != lVar7) {
            plVar10 = plVar5 + 9;
            do {
              lVar2 = *plVar10;
              if (*(char *)(lVar2 + 0xf9) != '\0') {
                if (*(longlong *)(lVar2 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                *(uint64_t *)(lVar2 + 0x1d8) = 0;
                LOCK();
                *(int8_t *)(lVar2 + 0xf9) = 0;
                UNLOCK();
              }
              iVar9 = iVar9 + 1;
              plVar10 = plVar10 + 0xc;
            } while ((ulonglong)(longlong)iVar9 < (ulonglong)(lVar15 - lVar7));
          }
          for (; plVar11 != plVar8; plVar11 = plVar11 + 0xc) {
            if ((longlong *)plVar11[9] != (longlong *)0x0) {
              (**(code **)(*(longlong *)plVar11[9] + 0x38))();
            }
            if ((longlong *)plVar11[8] != (longlong *)0x0) {
              (**(code **)(*(longlong *)plVar11[8] + 0x38))();
            }
          }
          if (plVar5 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(plVar5);
          }
        }
        uVar12 = (int)uVar13 + 1;
        uVar6 = (ulonglong)(int)uVar12;
        uVar13 = (ulonglong)uVar12;
      } while (uVar6 < *puVar14);
    }
    puVar14 = puVar14 + 5;
    lStackX_10 = lStackX_10 + -1;
    if (lStackX_10 == 0) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1804cd8c0(longlong *param_1)
void FUN_1804cd8c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x60) {
    if (*(longlong **)(lVar2 + 0x48) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x48) + 0x38))();
    }
    if (*(longlong **)(lVar2 + 0x40) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x40) + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804cd8e0(longlong param_1)
void FUN_1804cd8e0(longlong param_1)

{
  int iVar1;
  uint64_t uVar2;
  longlong alStack_30 [2];
  void *puStack_20;
  code *pcStack_18;
  
  uVar2 = 0xfffffffffffffffe;
  iVar1 = _Mtx_lock(param_1 + 0x2e8);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  puStack_20 = &UNK_1804ce9d0;
  pcStack_18 = FUN_1804ce920;
  alStack_30[0] = param_1;
  FUN_18015b810(alStack_30,0,*(longlong *)(param_1 + 400) - *(longlong *)(param_1 + 0x188) >> 3,0x40
                ,0xffffffffffffffff,alStack_30,uVar2);
  iVar1 = _Mtx_unlock(param_1 + 0x2e8);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}






// 函数: void FUN_1804cd9a0(longlong param_1,ushort param_2,int32_t param_3,ushort param_4)
void FUN_1804cd9a0(longlong param_1,ushort param_2,int32_t param_3,ushort param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint64_t *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ushort uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint64_t uStack_e8;
  int32_t uStack_e0;
  int16_t uStack_dc;
  uint64_t uStack_d8;
  int32_t uStack_d0;
  int32_t uStack_cc;
  int32_t uStack_c8;
  int8_t uStack_c4;
  int32_t uStack_c0;
  int32_t uStack_bc;
  int32_t uStack_b8;
  int16_t uStack_b4;
  uint64_t uStack_b0;
  int32_t uStack_a8;
  uint64_t uStack_a0;
  int32_t uStack_98;
  int8_t uStack_94;
  uint64_t uStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint64_t uStack_48;
  uint64_t uStack_40;
  
  lVar5 = *(longlong *)(param_1 + 0x68);
  lVar12 = (ulonglong)param_2 * 0x38;
  if (*(longlong *)(lVar12 + 8 + lVar5) != 0) {
    lVar6 = *(longlong *)(param_1 + 0xe0);
    uVar7 = (ulonglong)*(ushort *)(lVar12 + 0x28 + lVar5);
    uVar10 = 0;
    uStack_e8 = 0;
    uStack_dc = 0xff01;
    uStack_d8 = 0;
    uStack_b8 = 0;
    uStack_d0 = *(int32_t *)(lVar6 + 0x3c + uVar7 * 0x50);
    uStack_98 = *(int32_t *)(lVar6 + 0x48 + uVar7 * 0x50);
    uStack_cc = *(int32_t *)(lVar6 + 0x38 + uVar7 * 0x50);
    uStack_c8 = *(int32_t *)(lVar6 + 0x34 + uVar7 * 0x50);
    uStack_c4 = *(int8_t *)(lVar6 + 0x30 + uVar7 * 0x50);
    uStack_bc = *(int32_t *)(lVar6 + 0x40 + uVar7 * 0x50);
    uStack_c0 = *(int32_t *)(lVar6 + 0x44 + uVar7 * 0x50);
    lVar8 = *(longlong *)(param_1 + 8);
    uVar7 = (ulonglong)*(ushort *)(lVar12 + 0x24 + lVar5);
    uStack_b4 = 0x400;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    lVar6 = *(longlong *)(param_1 + 0x90);
    uStack_94 = 0;
    uStack_80 = 0;
    pfVar1 = (float *)(lVar6 + 0x28 + uVar7 * 0x48);
    pfVar2 = (float *)(lVar6 + 8 + uVar7 * 0x48);
    pfVar3 = (float *)(lVar6 + 0x18 + uVar7 * 0x48);
    puVar4 = (uint64_t *)(lVar6 + 0x38 + uVar7 * 0x48);
    uStack_48 = *puVar4;
    uStack_40 = puVar4[1];
    fVar17 = *pfVar2 * 0.0;
    fVar18 = pfVar2[1] * 0.0;
    fVar19 = pfVar2[2] * 0.0;
    fVar20 = pfVar2[3] * 0.0;
    fStack_68 = *pfVar1 * 0.0;
    fStack_64 = pfVar1[1] * 0.0;
    fStack_60 = pfVar1[2] * 0.0;
    fStack_5c = pfVar1[3] * 0.0;
    fVar13 = *pfVar3 * 0.0;
    fVar14 = pfVar3[1] * 0.0;
    fVar15 = pfVar3[2] * 0.0;
    fVar16 = pfVar3[3] * 0.0;
    fStack_78 = *pfVar2 * 1.3 + fVar13 + fStack_68;
    fStack_74 = pfVar2[1] * 1.3 + fVar14 + fStack_64;
    fStack_70 = pfVar2[2] * 1.3 + fVar15 + fStack_60;
    fStack_6c = pfVar2[3] * 1.3 + fVar16 + fStack_5c;
    fStack_68 = *pfVar3 * 1.3 + fVar17 + fStack_68;
    fStack_64 = pfVar3[1] * 1.3 + fVar18 + fStack_64;
    fStack_60 = pfVar3[2] * 1.3 + fVar19 + fStack_60;
    fStack_5c = pfVar3[3] * 1.3 + fVar20 + fStack_5c;
    fStack_58 = *pfVar1 * 1.0 + fVar17 + fVar13;
    fStack_54 = pfVar1[1] * 1.0 + fVar18 + fVar14;
    fStack_50 = pfVar1[2] * 1.0 + fVar19 + fVar15;
    fStack_4c = pfVar1[3] * 1.0 + fVar20 + fVar16;
    uVar7 = uVar10;
    uStack_e0 = param_3;
    if (*(longlong *)(param_1 + 0x10) - lVar8 >> 3 != 0) {
      do {
        uVar11 = 1 << ((byte)uVar10 & 0x1f);
        if ((1 < *(int *)(*(longlong *)(lVar8 + uVar7) + 0x178)) && ((uVar11 & param_4) == uVar11))
        {
          FUN_180077750(*(uint64_t *)(lVar12 + 8 + lVar5),*(longlong *)(lVar8 + uVar7),&fStack_78,
                        0,&uStack_e8);
        }
        lVar8 = *(longlong *)(param_1 + 8);
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        uVar7 = uVar7 + 8;
      } while ((ulonglong)(longlong)(int)uVar9 <
               (ulonglong)(*(longlong *)(param_1 + 0x10) - lVar8 >> 3));
    }
  }
  return;
}






