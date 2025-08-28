#include "TaleWorlds.Native.Split.h"
// 99_part_12_part019.c - 4 个函数
// 函数: void SystemCore_d761a(int *param_1,float param_2)
void SystemCore_d761a(int *param_1,float param_2)
{
  int *piVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint uVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t *unaff_RBP;
  int64_t unaff_RSI;
  int unaff_EDI;
  uint64_t *puVar8;
  int iVar9;
  int64_t unaff_R14;
  int unaff_R15D;
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  float fVar12;
  float fVar13;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM14_Da;
  float local_var_30;
  float local_var_38;
  uint64_t local_var_110;
  uint64_t local_var_118;
  uint64_t extraout_XMM0_Qb;
  if (param_2 < -180.0) {
    do {
      unaff_XMM6_Da = unaff_XMM6_Da + 360.0;
    } while (unaff_XMM6_Da < -180.0);
  }
  for (; 180.0 <= unaff_XMM6_Da; unaff_XMM6_Da = unaff_XMM6_Da + -360.0) {
  }
  if (unaff_EDI == 0) {
    iVar6 = param_1[0x2a];
    if (iVar6 == 0) {
      if ((param_1[0x27] != 0) && (uVar4 = 0, uVar7 = uVar4, 0 < param_1[0x27])) {
        do {
          uVar5 = (int)uVar7 + 1;
          piVar1 = (int *)(uVar4 + *(int64_t *)(param_1 + 0x28));
          uVar4 = uVar4 + 4;
          lVar2 = (int64_t)(*piVar1 * unaff_R15D);
          *(float *)(unaff_R14 + lVar2 * 4) = unaff_XMM14_Da + *(float *)(unaff_R14 + lVar2 * 4);
          uVar7 = (uint64_t)uVar5;
        } while ((int)uVar5 < param_1[0x27]);
      }
    }
    else {
      local_var_38 = 0.0;
      local_var_30 = 0.0;
      if (1e-05 <= ABS(unaff_XMM7_Da)) {
        fVar12 = (float)sinf();
        fVar12 = fVar12 / (unaff_XMM7_Da * 0.008726646);
      }
      else {
        fVar12 = 1.0;
      }
      auVar10._0_8_ = sinf();
      auVar10._8_8_ = extraout_XMM0_Qb;
      auVar11._4_12_ = auVar10._4_12_;
      auVar11._0_4_ = (float)auVar10._0_8_ * fVar12;
      fVar12 = (float)asinf(auVar11._0_8_);
      SystemCore_d80d0(*(uint64_t *)(unaff_RSI + 0x28),&local_buffer_00000038,&local_buffer_00000030,
                    fVar12 * 57.295776);
      uVar4 = 0;
      uVar7 = uVar4;
      if (0 < iVar6) {
        do {
          uVar5 = (int)uVar7 + 1;
          lVar2 = (int64_t)(*(int *)(*(int64_t *)(unaff_RSI + 0xb0) + uVar4) * unaff_R15D);
          *(float *)(unaff_R14 + lVar2 * 4) = local_var_38 + *(float *)(unaff_R14 + lVar2 * 4);
          piVar1 = (int *)(*(int64_t *)(unaff_RSI + 0xb8) + uVar4);
          uVar4 = uVar4 + 4;
          lVar2 = (int64_t)(*piVar1 * unaff_R15D);
          *(float *)(unaff_R14 + lVar2 * 4) = local_var_30 + *(float *)(unaff_R14 + lVar2 * 4);
          uVar7 = (uint64_t)uVar5;
        } while ((int)uVar5 < *(int *)(unaff_RSI + 0xa8));
      }
    }
  }
  else if (unaff_XMM7_Da < 360.0) {
    if (0.0 < unaff_XMM7_Da) {
// WARNING: Subroutine does not return
      memset(unaff_RBP + -0x10,0,(int64_t)*param_1 << 2);
    }
    iVar6 = 0;
    iVar9 = 0;
    if (0 < unaff_EDI) {
      lVar2 = 0;
      plVar3 = *(int64_t **)(param_1 + 10);
      do {
        fVar12 = *(float *)(plVar3[1] + 4);
        fVar13 = *(float *)(*plVar3 + 4);
        if (fVar13 < fVar12) {
LAB_1807d774d:
          if (fVar13 <= unaff_XMM6_Da) {
LAB_1807d7752:
            if (unaff_XMM6_Da <= fVar12) {
              plVar3 = *(int64_t **)(param_1 + 10) + (int64_t)iVar9 * 4;
              if ((char)unaff_RBP[0x20] == '\0') {
                SystemCore_d80d0(plVar3,unaff_R14 + (int64_t)(*(int *)*plVar3 * unaff_R15D) * 4,
                              unaff_R14 + (int64_t)(*(int *)plVar3[1] * unaff_R15D) * 4,
                              unaff_XMM6_Da);
              }
              else {
                SystemCore_d81b0();
              }
              goto LAB_1807d805e;
            }
          }
        }
        else {
          if (unaff_XMM6_Da < 0.0) {
            fVar13 = fVar13 - 360.0;
            goto LAB_1807d774d;
          }
          if (fVar13 <= unaff_XMM6_Da) {
            fVar12 = fVar12 + 360.0;
            goto LAB_1807d7752;
          }
        }
        iVar9 = iVar9 + 1;
        lVar2 = lVar2 + 1;
        plVar3 = plVar3 + 4;
      } while (lVar2 < unaff_EDI);
    }
    iVar9 = SystemFunction_0001807d57d0();
    if (0 < iVar9) {
      puVar8 = (uint64_t *)(unaff_RSI + 0x58);
      do {
        fVar12 = *(float *)(puVar8[1] + 4);
        fVar13 = (float)((int *)*puVar8)[1];
        if (fVar13 < fVar12) {
LAB_1807d77fc:
          if (fVar13 <= unaff_XMM6_Da) {
LAB_1807d7801:
            if (unaff_XMM6_Da <= fVar12) {
              lVar2 = (int64_t)(unaff_R15D * *(int *)*puVar8);
              *(float *)(unaff_R14 + lVar2 * 4) = unaff_XMM14_Da + *(float *)(unaff_R14 + lVar2 * 4)
              ;
            }
          }
        }
        else {
          if (unaff_XMM6_Da < 0.0) {
            fVar13 = fVar13 - 360.0;
            goto LAB_1807d77fc;
          }
          if (fVar13 <= unaff_XMM6_Da) {
            fVar12 = fVar12 + 360.0;
            goto LAB_1807d7801;
          }
        }
        iVar6 = iVar6 + 1;
        puVar8 = puVar8 + 3;
        iVar9 = SystemFunction_0001807d57d0();
      } while (iVar6 < iVar9);
    }
  }
  else {
    uVar4 = 0;
    uVar7 = uVar4;
    if (0 < unaff_EDI) {
      do {
        uVar5 = (int)uVar7 + 1;
        piVar1 = (int *)(uVar4 + *(int64_t *)(param_1 + 2));
        uVar4 = uVar4 + 0x14;
        lVar2 = (int64_t)(*piVar1 * unaff_R15D);
        *(float *)(unaff_R14 + lVar2 * 4) =
             unaff_XMM14_Da / SQRT((float)unaff_EDI) + *(float *)(unaff_R14 + lVar2 * 4);
        uVar7 = (uint64_t)uVar5;
      } while ((int)uVar5 < param_1[1]);
    }
  }
LAB_1807d805e:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*unaff_RBP ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_d7847(void)
void SystemCore_d7847(void)
{
// WARNING: Subroutine does not return
  memset();
}
// 函数: void SystemCore_d78d8(uint64_t param_1,uint64_t *param_2)
void SystemCore_d78d8(uint64_t param_1,uint64_t *param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int *piVar10;
  int *piVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int64_t in_RAX;
  float *pfVar15;
  uint uVar16;
  int64_t lVar17;
  float *pfVar18;
  uint uVar19;
  uint64_t unaff_RBX;
  uint64_t *unaff_RBP;
  int iVar20;
  uint uVar21;
  uint64_t uVar22;
  int64_t lVar23;
  int64_t lVar24;
  uint64_t uVar25;
  int64_t lVar26;
  int64_t lVar27;
  int64_t in_R11;
  uint64_t uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float local_var_30;
  int local_var_38;
  float fStack0000000000000040;
  float fStack0000000000000044;
  int64_t lStack0000000000000048;
  uint64_t *plocal_buffer_50;
  int64_t lStack0000000000000060;
  int64_t local_var_68;
  int64_t local_var_70;
  plocal_buffer_50 = param_2;
  uVar19 = (uint)unaff_RBX;
  uVar25 = unaff_RBX & 0xffffffff;
  bVar12 = false;
  lStack0000000000000048 = in_RAX;
  uVar28 = unaff_RBX;
  lStack0000000000000060 = in_R11;
  do {
    piVar10 = (int *)*plocal_buffer_50;
    piVar11 = (int *)plocal_buffer_50[1];
    fVar31 = (float)piVar10[1];
    fVar32 = (float)piVar11[1];
    uVar13 = uVar19;
    if (fVar32 < fVar31) {
      if (unaff_XMM8_Da < unaff_XMM7_Da) {
        if ((unaff_XMM8_Da < unaff_XMM10_Da) && (fVar31 < unaff_XMM7_Da)) {
          if (fVar31 <= unaff_XMM8_Da) {
            fVar31 = unaff_XMM8_Da;
          }
          local_var_30 = unaff_XMM7_Da;
          if (unaff_XMM10_Da <= unaff_XMM7_Da) {
            local_var_30 = unaff_XMM10_Da;
          }
          fStack0000000000000040 = fVar31;
          uVar13 = 1;
        }
        pfVar15 = &local_buffer_00000030 + uVar13;
        pfVar18 = (float *)((int64_t)&local_buffer_00000040 + (uint64_t)uVar13 * 4);
        if ((unaff_XMM8_Da < fVar32) && (unaff_XMM13_Da < unaff_XMM7_Da)) {
          if (pfVar18 != (float *)0x0) {
            fVar31 = unaff_XMM8_Da;
            if (unaff_XMM8_Da <= unaff_XMM13_Da) {
              fVar31 = unaff_XMM13_Da;
            }
            *pfVar18 = fVar31;
          }
          goto LAB_1807d79b1;
        }
LAB_1807d79ca:
        uVar13 = uVar13 + uVar19;
        goto LAB_1807d7ae2;
      }
      if ((fVar31 <= unaff_XMM7_Da) || (unaff_XMM8_Da <= fVar32)) {
        if (fVar32 <= unaff_XMM8_Da) {
          fStack0000000000000040 = fVar31;
          if (fVar31 == unaff_XMM7_Da) {
            pfVar15 = &local_buffer_00000040;
            pfVar18 = &local_buffer_00000030;
          }
          else {
            uVar13 = 1;
            pfVar15 = (float *)((int64_t)&local_buffer_00000040 + 4);
            pfVar18 = (float *)&local_buffer_00000034;
          }
          *pfVar15 = unaff_XMM8_Da;
          local_var_30 = unaff_XMM7_Da;
          *pfVar18 = fVar32;
          if (unaff_XMM8_Da != fVar32) {
            uVar13 = uVar13 + 1;
          }
          goto LAB_1807d7ae2;
        }
        local_var_30 = fVar32;
        fStack0000000000000044 = fVar31;
        if (fVar31 == unaff_XMM7_Da) {
          uVar13 = 1;
          fStack0000000000000040 = unaff_XMM8_Da;
        }
        else {
          uVar13 = 2;
          fStack0000000000000040 = unaff_XMM8_Da;
        }
      }
      else {
        if (unaff_XMM7_Da <= fVar32) {
          fVar32 = unaff_XMM7_Da;
        }
        uVar13 = 1;
        if (fVar31 <= unaff_XMM8_Da) {
          fVar31 = unaff_XMM8_Da;
        }
        local_var_30 = fVar32;
        fStack0000000000000040 = fVar31;
      }
LAB_1807d7aea:
      iVar14 = *piVar10;
      iVar20 = *piVar11;
      if (uVar13 != 0) {
        fVar31 = *(float *)((int64_t)plocal_buffer_50 + 0x14);
        lVar24 = in_R11 + uVar25;
        bVar12 = true;
        uVar22 = unaff_RBX;
        do {
          fVar32 = (&local_buffer_00000030)[uVar22];
          fVar33 = *(float *)((int64_t)&local_buffer_00000040 + uVar22 * 4);
          if (fVar32 < fVar33) {
            fVar29 = unaff_XMM12_Da - (fVar33 - fVar32);
          }
          else {
            fVar29 = fVar32 - fVar33;
          }
          fVar30 = (fVar33 + fVar32) * unaff_XMM15_Da;
          if (fVar32 < fVar33) {
            if (fVar30 < unaff_XMM9_Da) {
              fVar30 = fVar30 + unaff_XMM10_Da;
            }
            else {
              fVar30 = fVar30 - unaff_XMM10_Da;
            }
          }
          SystemCore_d81b0(lVar24,(int64_t)unaff_RBP + (int64_t)iVar14 * 4 + -0x80,
                        (int64_t)unaff_RBP + (int64_t)iVar20 * 4 + -0x80,fVar30,fVar29 / fVar31);
          uVar22 = uVar22 + 1;
          uVar25 = uVar28;
          in_R11 = lStack0000000000000060;
        } while ((int64_t)uVar22 < (int64_t)(uint64_t)uVar13);
      }
    }
    else {
      if (unaff_XMM7_Da <= unaff_XMM8_Da) {
        if ((unaff_XMM8_Da < fVar32) && (fVar31 < unaff_XMM10_Da)) {
          fStack0000000000000040 = fVar31;
          if (fVar31 <= unaff_XMM8_Da) {
            fStack0000000000000040 = unaff_XMM8_Da;
          }
          local_var_30 = fVar32;
          if (unaff_XMM10_Da <= fVar32) {
            local_var_30 = unaff_XMM10_Da;
          }
          uVar13 = 1;
        }
        pfVar15 = &local_buffer_00000030 + uVar13;
        pfVar18 = (float *)((int64_t)&local_buffer_00000040 + (uint64_t)uVar13 * 4);
        if ((fVar32 <= unaff_XMM13_Da) || (unaff_XMM7_Da <= fVar31)) goto LAB_1807d79ca;
        if (pfVar18 != (float *)0x0) {
          if (fVar31 <= unaff_XMM13_Da) {
            fVar31 = unaff_XMM13_Da;
          }
          *pfVar18 = fVar31;
        }
LAB_1807d79b1:
        if (pfVar15 != (float *)0x0) {
          if (unaff_XMM7_Da <= fVar32) {
            fVar32 = unaff_XMM7_Da;
          }
          *pfVar15 = fVar32;
        }
        uVar13 = uVar13 + 1;
      }
      else if ((unaff_XMM8_Da < fVar32) && (fVar31 < unaff_XMM7_Da)) {
        if (fVar31 <= unaff_XMM8_Da) {
          fVar31 = unaff_XMM8_Da;
        }
        if (unaff_XMM7_Da <= fVar32) {
          fVar32 = unaff_XMM7_Da;
        }
        fStack0000000000000040 = fVar31;
        local_var_30 = fVar32;
        uVar13 = 1;
      }
LAB_1807d7ae2:
      if (uVar13 != 0) goto LAB_1807d7aea;
    }
    uVar25 = uVar25 + 0x20;
    lStack0000000000000048 = lStack0000000000000048 + -1;
    plocal_buffer_50 = plocal_buffer_50 + 4;
    uVar28 = uVar25;
  } while (lStack0000000000000048 != 0);
  if (!bVar12) {
    uVar25 = unaff_RBX & 0xffffffff;
    iVar14 = SystemFunction_0001807d57d0(local_var_68);
    if (0 < iVar14) {
      do {
        iVar20 = (int)uVar25;
        iVar14 = SystemCore_d5340(local_var_68 + ((int64_t)iVar20 * 3 + 0xb) * 8);
        if (iVar14 != 0) {
          lVar24 = (int64_t)**(int **)(local_var_68 + 0x58 + (int64_t)iVar20 * 0x18);
          *(float *)((int64_t)unaff_RBP + lVar24 * 4 + -0x80) =
               *(float *)((int64_t)unaff_RBP + lVar24 * 4 + -0x80) + 1.0;
          break;
        }
        uVar25 = (uint64_t)(iVar20 + 1U);
        iVar14 = SystemFunction_0001807d57d0(local_var_68);
      } while ((int)(iVar20 + 1U) < iVar14);
    }
  }
  if ((char)unaff_RBP[0x20] != (char)unaff_RBX) {
    uVar13 = *(uint *)(local_var_68 + 4);
    lVar24 = (int64_t)(int)uVar13;
    uVar25 = unaff_RBX & 0xffffffff;
    uVar21 = uVar19;
    if ((0 < (int)uVar13) && (7 < uVar13)) {
      lVar27 = *(int64_t *)(local_var_68 + 8);
      fVar31 = 0.0;
      fVar32 = 0.0;
      fVar33 = 0.0;
      fVar29 = 0.0;
      fVar30 = 0.0;
      fVar34 = 0.0;
      fVar35 = 0.0;
      fVar36 = 0.0;
      uVar16 = uVar13 & 0x80000007;
      if ((int)uVar16 < 0) {
        uVar16 = (uVar16 - 1 | 0xfffffff8) + 1;
      }
      lVar26 = 0x28;
      uVar28 = unaff_RBX;
      do {
        uVar21 = (int)uVar25 + 8;
        uVar25 = (uint64_t)uVar21;
        uVar28 = uVar28 + 8;
        fVar3 = *(float *)((int64_t)unaff_RBP +
                          (int64_t)*(int *)(lVar26 + 0x14 + lVar27) * 4 + -0x80);
        fVar4 = *(float *)((int64_t)unaff_RBP + (int64_t)*(int *)(lVar27 + lVar26) * 4 + -0x80);
        fVar5 = *(float *)((int64_t)unaff_RBP +
                          (int64_t)*(int *)(lVar26 + -0x14 + lVar27) * 4 + -0x80);
        fVar6 = *(float *)((int64_t)unaff_RBP +
                          (int64_t)*(int *)(lVar26 + -0x28 + lVar27) * 4 + -0x80);
        lVar17 = lVar26 + 100;
        lVar23 = lVar26 + 0x50;
        lVar1 = lVar26 + 0x3c;
        lVar2 = lVar26 + 0x28;
        lVar26 = lVar26 + 0xa0;
        fVar7 = *(float *)((int64_t)unaff_RBP + (int64_t)*(int *)(lVar23 + lVar27) * 4 + -0x80);
        fVar8 = *(float *)((int64_t)unaff_RBP + (int64_t)*(int *)(lVar17 + lVar27) * 4 + -0x80);
        fVar9 = *(float *)((int64_t)unaff_RBP + (int64_t)*(int *)(lVar1 + lVar27) * 4 + -0x80);
        fVar31 = fVar31 + fVar6 * fVar6;
        fVar32 = fVar32 + fVar5 * fVar5;
        fVar33 = fVar33 + fVar4 * fVar4;
        fVar29 = fVar29 + fVar3 * fVar3;
        fVar3 = *(float *)((int64_t)unaff_RBP + (int64_t)*(int *)(lVar2 + lVar27) * 4 + -0x80);
        fVar30 = fVar30 + fVar3 * fVar3;
        fVar34 = fVar34 + fVar9 * fVar9;
        fVar35 = fVar35 + fVar7 * fVar7;
        fVar36 = fVar36 + fVar8 * fVar8;
      } while ((int64_t)uVar28 < (int64_t)(int)(uVar13 - uVar16));
      unaff_XMM9_Da = fVar33 + fVar35 + fVar31 + fVar30 + fVar29 + fVar36 + fVar32 + fVar34;
    }
    lVar27 = (int64_t)(int)uVar21;
    if (lVar27 < lVar24) {
      if (3 < lVar24 - lVar27) {
        lVar26 = *(int64_t *)(local_var_68 + 8);
        lVar17 = lVar27 * 0x14;
        lVar23 = ((lVar24 - lVar27) - 4U >> 2) + 1;
        lVar27 = lVar27 + lVar23 * 4;
        do {
          fVar31 = *(float *)((int64_t)unaff_RBP + (int64_t)*(int *)(lVar17 + lVar26) * 4 + -0x80)
          ;
          fVar32 = *(float *)((int64_t)unaff_RBP +
                             (int64_t)*(int *)(lVar17 + 0x14 + lVar26) * 4 + -0x80);
          fVar33 = *(float *)((int64_t)unaff_RBP +
                             (int64_t)*(int *)(lVar26 + 0x28 + lVar17) * 4 + -0x80);
          piVar10 = (int *)(lVar26 + 0x3c + lVar17);
          lVar17 = lVar17 + 0x50;
          fVar29 = *(float *)((int64_t)unaff_RBP + (int64_t)*piVar10 * 4 + -0x80);
          unaff_XMM9_Da =
               unaff_XMM9_Da + fVar31 * fVar31 + fVar32 * fVar32 + fVar33 * fVar33 + fVar29 * fVar29
          ;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
      }
      if (lVar27 < lVar24) {
        lVar26 = lVar27 * 0x14;
        lVar24 = lVar24 - lVar27;
        do {
          piVar10 = (int *)(*(int64_t *)(local_var_68 + 8) + lVar26);
          lVar26 = lVar26 + 0x14;
          fVar31 = *(float *)((int64_t)unaff_RBP + (int64_t)*piVar10 * 4 + -0x80);
          unaff_XMM9_Da = unaff_XMM9_Da + fVar31 * fVar31;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
      }
    }
    if ((unaff_XMM9_Da < 0.999999) || (1.000001 < unaff_XMM9_Da)) {
      unaff_XMM14_Da = unaff_XMM14_Da / SQRT(unaff_XMM9_Da);
    }
  }
  if ((unaff_XMM14_Da < 0.999999) || (1.000001 < unaff_XMM14_Da)) {
    uVar25 = unaff_RBX;
    if ((int)uVar19 < *(int *)(local_var_68 + 4)) {
      do {
        uVar19 = (int)unaff_RBX + 1;
        unaff_RBX = (uint64_t)uVar19;
        iVar14 = *(int *)(uVar25 + *(int64_t *)(local_var_68 + 8));
        lVar24 = (int64_t)(local_var_38 * iVar14);
        *(float *)(local_var_70 + lVar24 * 4) =
             unaff_XMM14_Da * *(float *)((int64_t)unaff_RBP + (int64_t)iVar14 * 4 + -0x80) +
             *(float *)(local_var_70 + lVar24 * 4);
        uVar25 = uVar25 + 0x14;
      } while ((int)uVar19 < *(int *)(local_var_68 + 4));
    }
  }
  else {
    uVar25 = unaff_RBX;
    if ((int)uVar19 < *(int *)(local_var_68 + 4)) {
      do {
        uVar19 = (int)unaff_RBX + 1;
        unaff_RBX = (uint64_t)uVar19;
        iVar14 = *(int *)(uVar25 + *(int64_t *)(local_var_68 + 8));
        lVar24 = (int64_t)(local_var_38 * iVar14);
        *(float *)(local_var_70 + lVar24 * 4) =
             *(float *)((int64_t)unaff_RBP + (int64_t)iVar14 * 4 + -0x80) +
             *(float *)(local_var_70 + lVar24 * 4);
        uVar25 = uVar25 + 0x14;
      } while ((int)uVar19 < *(int *)(local_var_68 + 4));
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*unaff_RBP ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_d7bd5(void)
void SystemCore_d7bd5(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int64_t lVar14;
  uint uVar15;
  uint64_t unaff_RBX;
  uint64_t *unaff_RBP;
  int64_t unaff_RSI;
  int iVar16;
  uint uVar17;
  uint64_t uVar18;
  int64_t lVar19;
  int64_t lVar20;
  int64_t lVar21;
  int64_t lVar22;
  int64_t unaff_R14;
  uint64_t uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float unaff_XMM9_Da;
  float unaff_XMM14_Da;
  int local_var_38;
  uVar15 = (uint)unaff_RBX;
  uVar18 = unaff_RBX & 0xffffffff;
  iVar12 = SystemFunction_0001807d57d0();
  if (0 < iVar12) {
    do {
      iVar16 = (int)uVar18;
      iVar12 = SystemCore_d5340(unaff_RSI + ((int64_t)iVar16 * 3 + 0xb) * 8);
      if (iVar12 != 0) {
        lVar20 = (int64_t)**(int **)(unaff_RSI + 0x58 + (int64_t)iVar16 * 0x18);
        *(float *)((int64_t)unaff_RBP + lVar20 * 4 + -0x80) =
             *(float *)((int64_t)unaff_RBP + lVar20 * 4 + -0x80) + 1.0;
        break;
      }
      uVar18 = (uint64_t)(iVar16 + 1U);
      iVar12 = SystemFunction_0001807d57d0();
    } while ((int)(iVar16 + 1U) < iVar12);
  }
  if ((char)unaff_RBP[0x20] != (char)unaff_RBX) {
    uVar11 = *(uint *)(unaff_RSI + 4);
    lVar20 = (int64_t)(int)uVar11;
    uVar18 = unaff_RBX & 0xffffffff;
    uVar17 = uVar15;
    if ((0 < (int)uVar11) && (7 < uVar11)) {
      lVar22 = *(int64_t *)(unaff_RSI + 8);
      fVar24 = 0.0;
      fVar25 = 0.0;
      fVar26 = 0.0;
      fVar27 = 0.0;
      fVar28 = 0.0;
      fVar29 = 0.0;
      fVar30 = 0.0;
      fVar31 = 0.0;
      uVar13 = uVar11 & 0x80000007;
      if ((int)uVar13 < 0) {
        uVar13 = (uVar13 - 1 | 0xfffffff8) + 1;
      }
      lVar21 = 0x28;
      uVar23 = unaff_RBX;
      do {
        uVar17 = (int)uVar18 + 8;
        uVar18 = (uint64_t)uVar17;
        uVar23 = uVar23 + 8;
        fVar4 = *(float *)((int64_t)unaff_RBP +
                          (int64_t)*(int *)(lVar21 + 0x14 + lVar22) * 4 + -0x80);
        fVar5 = *(float *)((int64_t)unaff_RBP + (int64_t)*(int *)(lVar22 + lVar21) * 4 + -0x80);
        fVar6 = *(float *)((int64_t)unaff_RBP +
                          (int64_t)*(int *)(lVar21 + -0x14 + lVar22) * 4 + -0x80);
        fVar7 = *(float *)((int64_t)unaff_RBP +
                          (int64_t)*(int *)(lVar21 + -0x28 + lVar22) * 4 + -0x80);
        lVar14 = lVar21 + 100;
        lVar19 = lVar21 + 0x50;
        lVar1 = lVar21 + 0x3c;
        lVar2 = lVar21 + 0x28;
        lVar21 = lVar21 + 0xa0;
        fVar8 = *(float *)((int64_t)unaff_RBP + (int64_t)*(int *)(lVar19 + lVar22) * 4 + -0x80);
        fVar9 = *(float *)((int64_t)unaff_RBP + (int64_t)*(int *)(lVar14 + lVar22) * 4 + -0x80);
        fVar10 = *(float *)((int64_t)unaff_RBP + (int64_t)*(int *)(lVar1 + lVar22) * 4 + -0x80);
        fVar24 = fVar24 + fVar7 * fVar7;
        fVar25 = fVar25 + fVar6 * fVar6;
        fVar26 = fVar26 + fVar5 * fVar5;
        fVar27 = fVar27 + fVar4 * fVar4;
        fVar4 = *(float *)((int64_t)unaff_RBP + (int64_t)*(int *)(lVar2 + lVar22) * 4 + -0x80);
        fVar28 = fVar28 + fVar4 * fVar4;
        fVar29 = fVar29 + fVar10 * fVar10;
        fVar30 = fVar30 + fVar8 * fVar8;
        fVar31 = fVar31 + fVar9 * fVar9;
      } while ((int64_t)uVar23 < (int64_t)(int)(uVar11 - uVar13));
      unaff_XMM9_Da = fVar26 + fVar30 + fVar24 + fVar28 + fVar27 + fVar31 + fVar25 + fVar29;
    }
    lVar22 = (int64_t)(int)uVar17;
    if (lVar22 < lVar20) {
      if (3 < lVar20 - lVar22) {
        lVar21 = *(int64_t *)(unaff_RSI + 8);
        lVar14 = lVar22 * 0x14;
        lVar19 = ((lVar20 - lVar22) - 4U >> 2) + 1;
        lVar22 = lVar22 + lVar19 * 4;
        do {
          fVar24 = *(float *)((int64_t)unaff_RBP + (int64_t)*(int *)(lVar14 + lVar21) * 4 + -0x80)
          ;
          fVar25 = *(float *)((int64_t)unaff_RBP +
                             (int64_t)*(int *)(lVar14 + 0x14 + lVar21) * 4 + -0x80);
          fVar26 = *(float *)((int64_t)unaff_RBP +
                             (int64_t)*(int *)(lVar21 + 0x28 + lVar14) * 4 + -0x80);
          piVar3 = (int *)(lVar21 + 0x3c + lVar14);
          lVar14 = lVar14 + 0x50;
          fVar27 = *(float *)((int64_t)unaff_RBP + (int64_t)*piVar3 * 4 + -0x80);
          unaff_XMM9_Da =
               unaff_XMM9_Da + fVar24 * fVar24 + fVar25 * fVar25 + fVar26 * fVar26 + fVar27 * fVar27
          ;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      if (lVar22 < lVar20) {
        lVar21 = lVar22 * 0x14;
        lVar20 = lVar20 - lVar22;
        do {
          piVar3 = (int *)(*(int64_t *)(unaff_RSI + 8) + lVar21);
          lVar21 = lVar21 + 0x14;
          fVar24 = *(float *)((int64_t)unaff_RBP + (int64_t)*piVar3 * 4 + -0x80);
          unaff_XMM9_Da = unaff_XMM9_Da + fVar24 * fVar24;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
    }
    if ((unaff_XMM9_Da < 0.999999) || (1.000001 < unaff_XMM9_Da)) {
      unaff_XMM14_Da = unaff_XMM14_Da / SQRT(unaff_XMM9_Da);
    }
  }
  if ((unaff_XMM14_Da < 0.999999) || (1.000001 < unaff_XMM14_Da)) {
    uVar18 = unaff_RBX;
    if ((int)uVar15 < *(int *)(unaff_RSI + 4)) {
      do {
        uVar15 = (int)unaff_RBX + 1;
        unaff_RBX = (uint64_t)uVar15;
        iVar12 = *(int *)(uVar18 + *(int64_t *)(unaff_RSI + 8));
        lVar20 = (int64_t)(local_var_38 * iVar12);
        *(float *)(unaff_R14 + lVar20 * 4) =
             unaff_XMM14_Da * *(float *)((int64_t)unaff_RBP + (int64_t)iVar12 * 4 + -0x80) +
             *(float *)(unaff_R14 + lVar20 * 4);
        uVar18 = uVar18 + 0x14;
      } while ((int)uVar15 < *(int *)(unaff_RSI + 4));
    }
  }
  else {
    uVar18 = unaff_RBX;
    if ((int)uVar15 < *(int *)(unaff_RSI + 4)) {
      do {
        uVar15 = (int)unaff_RBX + 1;
        unaff_RBX = (uint64_t)uVar15;
        iVar12 = *(int *)(uVar18 + *(int64_t *)(unaff_RSI + 8));
        lVar20 = (int64_t)(local_var_38 * iVar12);
        *(float *)(unaff_R14 + lVar20 * 4) =
             *(float *)((int64_t)unaff_RBP + (int64_t)iVar12 * 4 + -0x80) +
             *(float *)(unaff_R14 + lVar20 * 4);
        uVar18 = uVar18 + 0x14;
      } while ((int)uVar15 < *(int *)(unaff_RSI + 4));
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*unaff_RBP ^ (uint64_t)&local_buffer_00000000);
}