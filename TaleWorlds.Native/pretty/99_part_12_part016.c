#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part016.c - 4 个函数

// 函数: void FUN_1807d576b(void)
void FUN_1807d576b(void)

{
  float fVar1;
  uint64_t uVar2;
  float *pfVar3;
  float *pfVar4;
  int unaff_ESI;
  int64_t unaff_RDI;
  int in_R10D;
  int in_R11D;
  int32_t in_register_0000009c;
  int64_t unaff_R12;
  float in_XMM3_Da;
  int64_t in_stack_00000058;
  
  if (unaff_ESI < in_R10D) {
    pfVar3 = (float *)(in_stack_00000058 + (int64_t)(unaff_ESI * (int)unaff_RDI) * 4);
    pfVar4 = (float *)(unaff_R12 + (int64_t)(unaff_ESI * in_R11D) * 4);
    uVar2 = (uint64_t)(uint)(in_R10D - unaff_ESI);
    do {
      fVar1 = *pfVar4;
      pfVar4 = pfVar4 + CONCAT44(in_register_0000009c,in_R11D);
      *pfVar3 = in_XMM3_Da * fVar1 + *pfVar3;
      pfVar3 = pfVar3 + unaff_RDI;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



uint64_t FUN_1807d5870(int64_t param_1,int64_t param_2,int64_t param_3)

{
  float fVar1;
  uint64_t uVar2;
  float fVar3;
  int32_t uVar4;
  
  uVar2 = func_0x0001807d57f0();
  if ((int)uVar2 == 0) {
    fVar3 = *(float *)(param_3 + 4);
    fVar1 = *(float *)(param_2 + 4);
    if ((fVar3 - fVar1 <= 181.0) && ((fVar1 <= fVar3 || (179.0 <= fVar1 - fVar3)))) {
      if ((179.0 < *(float *)(param_1 + 0x14)) || (*(float *)(param_1 + 0x14) <= 0.0)) {
        *(int32_t *)(param_1 + 0x18) = 0;
        uVar4 = 0;
      }
      else {
        uVar4 = 0x3f800000;
        fVar3 = 1.0 / (*(float *)(param_2 + 8) * *(float *)(param_3 + 0x10) -
                      *(float *)(param_2 + 0x10) * *(float *)(param_3 + 8));
        *(float *)(param_1 + 0x18) = fVar3;
        if (fVar3 <= 0.0) {
          *(int32_t *)(param_1 + 0x1c) = 0xbf800000;
          return 0;
        }
      }
      *(int32_t *)(param_1 + 0x1c) = uVar4;
      return 0;
    }
    uVar2 = 0x1f;
  }
  return uVar2;
}



uint64_t FUN_1807d5970(int32_t *param_1,int64_t param_2,int param_3)

{
  uint64_t *puVar1;
  float *pfVar2;
  int iVar3;
  int64_t lVar4;
  float fVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  bool bVar9;
  uint64_t uVar10;
  int32_t *puVar11;
  float *pfVar12;
  int32_t *puVar13;
  int iVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  int64_t lVar18;
  uint64_t uVar19;
  int64_t lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  uVar15 = 0;
  lVar20 = (int64_t)param_3;
  fVar24 = -360.0;
  uVar16 = uVar15;
  uVar17 = uVar15;
  if (0 < param_3) {
    do {
      bVar9 = false;
      fVar21 = 360.0;
      uVar19 = uVar15;
      if (3 < lVar20) {
        pfVar12 = (float *)(param_2 + 0x18);
        lVar18 = (lVar20 - 4U >> 2) + 1;
        uVar19 = lVar18 * 4;
        do {
          fVar22 = pfVar12[-5];
          if ((fVar22 < fVar21) && (fVar24 < fVar22)) {
            lVar4 = *(int64_t *)(param_1 + 2);
            uVar10 = *(uint64_t *)(pfVar12 + -4);
            puVar1 = (uint64_t *)(lVar4 + uVar17);
            *puVar1 = *(uint64_t *)(pfVar12 + -6);
            puVar1[1] = uVar10;
            *(float *)(lVar4 + 0x10 + uVar17) = pfVar12[-2];
            bVar9 = true;
            fVar21 = fVar22;
          }
          fVar22 = *pfVar12;
          if ((fVar22 < fVar21) && (fVar24 < fVar22)) {
            lVar4 = *(int64_t *)(param_1 + 2);
            uVar10 = *(uint64_t *)(pfVar12 + 1);
            puVar1 = (uint64_t *)(lVar4 + uVar17);
            *puVar1 = *(uint64_t *)(pfVar12 + -1);
            puVar1[1] = uVar10;
            *(float *)(lVar4 + 0x10 + uVar17) = pfVar12[3];
            bVar9 = true;
            fVar21 = fVar22;
          }
          fVar22 = pfVar12[5];
          if ((fVar22 < fVar21) && (fVar24 < fVar22)) {
            lVar4 = *(int64_t *)(param_1 + 2);
            uVar10 = *(uint64_t *)(pfVar12 + 6);
            puVar1 = (uint64_t *)(lVar4 + uVar17);
            *puVar1 = *(uint64_t *)(pfVar12 + 4);
            puVar1[1] = uVar10;
            *(float *)(lVar4 + 0x10 + uVar17) = pfVar12[8];
            bVar9 = true;
            fVar21 = fVar22;
          }
          fVar22 = pfVar12[10];
          if ((fVar22 < fVar21) && (fVar24 < fVar22)) {
            lVar4 = *(int64_t *)(param_1 + 2);
            fVar21 = pfVar12[10];
            fVar23 = pfVar12[0xb];
            fVar5 = pfVar12[0xc];
            pfVar2 = (float *)(lVar4 + uVar17);
            *pfVar2 = pfVar12[9];
            pfVar2[1] = fVar21;
            pfVar2[2] = fVar23;
            pfVar2[3] = fVar5;
            *(float *)(lVar4 + 0x10 + uVar17) = pfVar12[0xd];
            bVar9 = true;
            fVar21 = fVar22;
          }
          pfVar12 = pfVar12 + 0x14;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      if ((int64_t)uVar19 < lVar20) {
        puVar13 = (int32_t *)(param_2 + uVar19 * 0x14);
        lVar18 = lVar20 - uVar19;
        do {
          fVar22 = (float)puVar13[1];
          if ((fVar22 < fVar21) && (fVar24 < fVar22)) {
            lVar4 = *(int64_t *)(param_1 + 2);
            uVar6 = puVar13[1];
            uVar7 = puVar13[2];
            uVar8 = puVar13[3];
            puVar11 = (int32_t *)(lVar4 + uVar17);
            *puVar11 = *puVar13;
            puVar11[1] = uVar6;
            puVar11[2] = uVar7;
            puVar11[3] = uVar8;
            *(int32_t *)(lVar4 + 0x10 + uVar17) = puVar13[4];
            bVar9 = true;
            fVar21 = fVar22;
          }
          puVar13 = puVar13 + 5;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      if (!bVar9) {
        *param_1 = 0;
        return 0x1f;
      }
      uVar16 = uVar16 + 1;
      uVar17 = uVar17 + 0x14;
      fVar24 = fVar21;
    } while ((int64_t)uVar16 < lVar20);
  }
  if ((1 < (int)param_1[1]) && (iVar3 = param_1[8], uVar16 = uVar15, 0 < iVar3)) {
    do {
      lVar20 = *(int64_t *)(param_1 + 2);
      puVar13 = (int32_t *)(lVar20 + uVar16 * 0x14);
      iVar14 = (int)uVar15;
      if (iVar14 != iVar3 + -1) {
        lVar20 = lVar20 + (int64_t)(iVar14 + 1) * 0x14;
      }
      fVar24 = *(float *)(lVar20 + 4);
      fVar21 = (float)puVar13[1];
      if (fVar24 < fVar21) {
        fVar22 = 360.0 - (fVar21 - fVar24);
      }
      else {
        fVar22 = fVar24 - fVar21;
      }
      if (180.0 < fVar22) {
        fVar22 = (fVar21 + fVar24) * 0.5;
        if (fVar24 < fVar21) {
          if (fVar22 < 0.0) {
            fVar22 = fVar22 + 180.0;
          }
          else {
            fVar22 = fVar22 - 180.0;
          }
        }
        param_1[0xc] = *puVar13;
        for (fVar22 = fVar22 - 90.0; fVar22 < -180.0; fVar22 = fVar22 + 360.0) {
        }
        for (; 180.0 <= fVar22; fVar22 = fVar22 + -360.0) {
        }
        param_1[0xd] = fVar22;
                    // WARNING: Subroutine does not return
        AdvancedSystemController(fVar22 * 0.017453292);
      }
      uVar10 = FUN_1807d5870((int64_t)iVar14 * 0x20 + *(int64_t *)(param_1 + 10),puVar13,lVar20);
      if ((int)uVar10 != 0) {
        return uVar10;
      }
      fVar24 = (float)puVar13[1];
      if ((fVar24 < 0.0) && (-90.0 <= fVar24)) {
        puVar11 = *(int32_t **)(param_1 + 0x22);
        if (puVar11 != (int32_t *)0x0) {
          if (-45.0 < fVar24) {
            fVar21 = 360.0 - (fVar24 - -45.0);
          }
          else {
            fVar21 = -45.0 - fVar24;
          }
          if (180.0 < fVar21) {
            fVar21 = 360.0 - fVar21;
          }
          fVar22 = (float)puVar11[1];
          if (-45.0 < fVar22) {
            fVar23 = 360.0 - (fVar22 - -45.0);
          }
          else {
            fVar23 = -45.0 - fVar22;
          }
          if (180.0 < fVar23) {
            fVar23 = 360.0 - fVar23;
          }
          if (fVar23 <= fVar21) {
            if (-45.0 < fVar24) {
              fVar21 = 360.0 - (fVar24 - -45.0);
            }
            else {
              fVar21 = -45.0 - fVar24;
            }
            if (180.0 < fVar21) {
              fVar21 = 360.0 - fVar21;
            }
            if (-45.0 < fVar22) {
              fVar23 = 360.0 - (fVar22 - -45.0);
            }
            else {
              fVar23 = -45.0 - fVar22;
            }
            if (180.0 < fVar23) {
              fVar23 = 360.0 - fVar23;
            }
            if (fVar21 == fVar23) {
              if (fVar22 < fVar24) {
                puVar11 = puVar13;
              }
              *(int32_t **)(param_1 + 0x22) = puVar11;
            }
            goto LAB_1807d5f17;
          }
        }
        *(int32_t **)(param_1 + 0x22) = puVar13;
      }
LAB_1807d5f17:
      fVar24 = (float)puVar13[1];
      if ((0.0 < fVar24) && (fVar24 <= 90.0)) {
        puVar11 = *(int32_t **)(param_1 + 0x24);
        if (puVar11 != (int32_t *)0x0) {
          if (45.0 < fVar24) {
            fVar21 = 360.0 - (fVar24 - 45.0);
          }
          else {
            fVar21 = 45.0 - fVar24;
          }
          if (180.0 < fVar21) {
            fVar21 = 360.0 - fVar21;
          }
          fVar22 = (float)puVar11[1];
          if (45.0 < fVar22) {
            fVar23 = 360.0 - (fVar22 - 45.0);
          }
          else {
            fVar23 = 45.0 - fVar22;
          }
          if (180.0 < fVar23) {
            fVar23 = 360.0 - fVar23;
          }
          if (fVar23 <= fVar21) {
            if (45.0 < fVar24) {
              fVar21 = 360.0 - (fVar24 - 45.0);
            }
            else {
              fVar21 = 45.0 - fVar24;
            }
            if (180.0 < fVar21) {
              fVar21 = 360.0 - fVar21;
            }
            if (45.0 < fVar22) {
              fVar23 = 360.0 - (fVar22 - 45.0);
            }
            else {
              fVar23 = 45.0 - fVar22;
            }
            if (180.0 < fVar23) {
              fVar23 = 360.0 - fVar23;
            }
            if (fVar21 == fVar23) {
              if (fVar22 < fVar24) {
                puVar11 = puVar13;
              }
              *(int32_t **)(param_1 + 0x24) = puVar11;
            }
            goto LAB_1807d602f;
          }
        }
        *(int32_t **)(param_1 + 0x24) = puVar13;
      }
LAB_1807d602f:
      iVar3 = param_1[8];
      uVar15 = (uint64_t)(iVar14 + 1U);
      uVar16 = uVar16 + 1;
    } while ((int)(iVar14 + 1U) < iVar3);
  }
  return 0;
}



uint64_t FUN_1807d5b05(void)

{
  int32_t *puVar1;
  float fVar2;
  int iVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  int64_t unaff_RBX;
  int iVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t unaff_R13;
  char in_SF;
  char in_OF;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_XMM8_Da;
  float unaff_XMM15_Da;
  
  if (in_OF == in_SF) {
    iVar3 = *(int *)(unaff_RBX + 0x20);
    uVar7 = unaff_R13 & 0xffffffff;
    if (0 < iVar3) {
      do {
        lVar8 = *(int64_t *)(unaff_RBX + 8);
        puVar1 = (int32_t *)(lVar8 + unaff_R13 * 0x14);
        iVar6 = (int)uVar7;
        if (iVar6 != iVar3 + -1) {
          lVar8 = lVar8 + (int64_t)(iVar6 + 1) * 0x14;
        }
        fVar2 = *(float *)(lVar8 + 4);
        fVar10 = (float)puVar1[1];
        if (fVar2 < fVar10) {
          fVar9 = unaff_XMM8_Da - (fVar10 - fVar2);
        }
        else {
          fVar9 = fVar2 - fVar10;
        }
        if (180.0 < fVar9) {
          fVar9 = (fVar10 + fVar2) * 0.5;
          if (fVar2 < fVar10) {
            if (fVar9 < 0.0) {
              fVar9 = fVar9 + 180.0;
            }
            else {
              fVar9 = fVar9 - 180.0;
            }
          }
          *(int32_t *)(unaff_RBX + 0x30) = *puVar1;
          for (fVar9 = fVar9 - 90.0; fVar9 < -180.0; fVar9 = fVar9 + unaff_XMM8_Da) {
          }
          for (; 180.0 <= fVar9; fVar9 = fVar9 + unaff_XMM15_Da) {
          }
          *(float *)(unaff_RBX + 0x34) = fVar9;
                    // WARNING: Subroutine does not return
          AdvancedSystemController(fVar9 * 0.017453292);
        }
        uVar4 = FUN_1807d5870((int64_t)iVar6 * 0x20 + *(int64_t *)(unaff_RBX + 0x28),puVar1,lVar8)
        ;
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        fVar2 = (float)puVar1[1];
        if ((fVar2 < 0.0) && (-90.0 <= fVar2)) {
          puVar5 = *(int32_t **)(unaff_RBX + 0x88);
          if (puVar5 != (int32_t *)0x0) {
            if (-45.0 < fVar2) {
              fVar10 = unaff_XMM8_Da - (fVar2 - -45.0);
            }
            else {
              fVar10 = -45.0 - fVar2;
            }
            if (180.0 < fVar10) {
              fVar10 = unaff_XMM8_Da - fVar10;
            }
            fVar9 = (float)puVar5[1];
            if (-45.0 < fVar9) {
              fVar11 = unaff_XMM8_Da - (fVar9 - -45.0);
            }
            else {
              fVar11 = -45.0 - fVar9;
            }
            if (180.0 < fVar11) {
              fVar11 = unaff_XMM8_Da - fVar11;
            }
            if (fVar11 <= fVar10) {
              if (-45.0 < fVar2) {
                fVar10 = unaff_XMM8_Da - (fVar2 - -45.0);
              }
              else {
                fVar10 = -45.0 - fVar2;
              }
              if (180.0 < fVar10) {
                fVar10 = unaff_XMM8_Da - fVar10;
              }
              if (-45.0 < fVar9) {
                fVar11 = unaff_XMM8_Da - (fVar9 - -45.0);
              }
              else {
                fVar11 = -45.0 - fVar9;
              }
              if (180.0 < fVar11) {
                fVar11 = unaff_XMM8_Da - fVar11;
              }
              if (fVar10 == fVar11) {
                if (fVar9 < fVar2) {
                  puVar5 = puVar1;
                }
                *(int32_t **)(unaff_RBX + 0x88) = puVar5;
              }
              goto LAB_1807d5f17;
            }
          }
          *(int32_t **)(unaff_RBX + 0x88) = puVar1;
        }
LAB_1807d5f17:
        fVar2 = (float)puVar1[1];
        if ((0.0 < fVar2) && (fVar2 <= 90.0)) {
          puVar5 = *(int32_t **)(unaff_RBX + 0x90);
          if (puVar5 != (int32_t *)0x0) {
            if (45.0 < fVar2) {
              fVar10 = unaff_XMM8_Da - (fVar2 - 45.0);
            }
            else {
              fVar10 = 45.0 - fVar2;
            }
            if (180.0 < fVar10) {
              fVar10 = unaff_XMM8_Da - fVar10;
            }
            fVar9 = (float)puVar5[1];
            if (45.0 < fVar9) {
              fVar11 = unaff_XMM8_Da - (fVar9 - 45.0);
            }
            else {
              fVar11 = 45.0 - fVar9;
            }
            if (180.0 < fVar11) {
              fVar11 = unaff_XMM8_Da - fVar11;
            }
            if (fVar11 <= fVar10) {
              if (45.0 < fVar2) {
                fVar10 = unaff_XMM8_Da - (fVar2 - 45.0);
              }
              else {
                fVar10 = 45.0 - fVar2;
              }
              if (180.0 < fVar10) {
                fVar10 = unaff_XMM8_Da - fVar10;
              }
              if (45.0 < fVar9) {
                fVar11 = unaff_XMM8_Da - (fVar9 - 45.0);
              }
              else {
                fVar11 = 45.0 - fVar9;
              }
              if (180.0 < fVar11) {
                fVar11 = unaff_XMM8_Da - fVar11;
              }
              if (fVar10 == fVar11) {
                if (fVar9 < fVar2) {
                  puVar5 = puVar1;
                }
                *(int32_t **)(unaff_RBX + 0x90) = puVar5;
              }
              goto LAB_1807d602f;
            }
          }
          *(int32_t **)(unaff_RBX + 0x90) = puVar1;
        }
LAB_1807d602f:
        iVar3 = *(int *)(unaff_RBX + 0x20);
        uVar7 = (uint64_t)(iVar6 + 1U);
        unaff_R13 = unaff_R13 + 1;
      } while ((int)(iVar6 + 1U) < iVar3);
    }
  }
  return 0;
}



uint64_t FUN_1807d5bea(void)

{
  int32_t *unaff_RBX;
  int32_t unaff_R13D;
  
  *unaff_RBX = unaff_R13D;
  return 0x1f;
}



uint64_t FUN_1807d5bf7(uint64_t param_1,uint64_t param_2,float param_3,float param_4)

{
  float fVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  int64_t unaff_RBX;
  int unaff_EBP;
  int iVar4;
  int64_t unaff_RSI;
  int64_t unaff_R12;
  int32_t *unaff_R15;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  
code_r0x0001807d5bf7:
  fVar5 = unaff_XMM8_Da - (param_4 - param_3);
  iVar4 = unaff_EBP;
  do {
    if (unaff_XMM7_Da < fVar5) {
      fVar5 = (param_4 + param_3) * unaff_XMM13_Da;
      if (param_3 < param_4) {
        if (fVar5 < unaff_XMM12_Da) {
          fVar5 = fVar5 + unaff_XMM7_Da;
        }
        else {
          fVar5 = fVar5 - unaff_XMM7_Da;
        }
      }
      *(int32_t *)(unaff_RBX + 0x30) = *unaff_R15;
      for (fVar5 = fVar5 - unaff_XMM14_Da; fVar5 < unaff_XMM11_Da; fVar5 = fVar5 + unaff_XMM8_Da) {
      }
      for (; unaff_XMM7_Da <= fVar5; fVar5 = fVar5 + unaff_XMM15_Da) {
      }
      *(float *)(unaff_RBX + 0x34) = fVar5;
                    // WARNING: Subroutine does not return
      AdvancedSystemController(fVar5 * 0.017453292);
    }
    uVar2 = FUN_1807d5870((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RBX + 0x28),unaff_R15,
                          unaff_RSI);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    fVar5 = (float)unaff_R15[1];
    if ((fVar5 < unaff_XMM12_Da) && (-90.0 <= fVar5)) {
      puVar3 = *(int32_t **)(unaff_RBX + 0x88);
      if (puVar3 != (int32_t *)0x0) {
        if (unaff_XMM10_Da < fVar5) {
          fVar6 = unaff_XMM8_Da - (fVar5 - unaff_XMM10_Da);
        }
        else {
          fVar6 = unaff_XMM10_Da - fVar5;
        }
        if (unaff_XMM7_Da < fVar6) {
          fVar6 = unaff_XMM8_Da - fVar6;
        }
        fVar1 = (float)puVar3[1];
        if (unaff_XMM10_Da < fVar1) {
          fVar7 = unaff_XMM8_Da - (fVar1 - unaff_XMM10_Da);
        }
        else {
          fVar7 = unaff_XMM10_Da - fVar1;
        }
        if (unaff_XMM7_Da < fVar7) {
          fVar7 = unaff_XMM8_Da - fVar7;
        }
        if (fVar7 <= fVar6) {
          if (unaff_XMM10_Da < fVar5) {
            fVar6 = unaff_XMM8_Da - (fVar5 - unaff_XMM10_Da);
          }
          else {
            fVar6 = unaff_XMM10_Da - fVar5;
          }
          if (unaff_XMM7_Da < fVar6) {
            fVar6 = unaff_XMM8_Da - fVar6;
          }
          if (unaff_XMM10_Da < fVar1) {
            fVar7 = unaff_XMM8_Da - (fVar1 - unaff_XMM10_Da);
          }
          else {
            fVar7 = unaff_XMM10_Da - fVar1;
          }
          if (unaff_XMM7_Da < fVar7) {
            fVar7 = unaff_XMM8_Da - fVar7;
          }
          if (fVar6 == fVar7) {
            if (fVar1 < fVar5) {
              puVar3 = unaff_R15;
            }
            *(int32_t **)(unaff_RBX + 0x88) = puVar3;
          }
          goto LAB_1807d5f17;
        }
      }
      *(int32_t **)(unaff_RBX + 0x88) = unaff_R15;
    }
LAB_1807d5f17:
    fVar5 = (float)unaff_R15[1];
    if ((unaff_XMM12_Da < fVar5) && (fVar5 <= unaff_XMM14_Da)) {
      puVar3 = *(int32_t **)(unaff_RBX + 0x90);
      if (puVar3 != (int32_t *)0x0) {
        if (unaff_XMM9_Da < fVar5) {
          fVar6 = unaff_XMM8_Da - (fVar5 - unaff_XMM9_Da);
        }
        else {
          fVar6 = unaff_XMM9_Da - fVar5;
        }
        if (unaff_XMM7_Da < fVar6) {
          fVar6 = unaff_XMM8_Da - fVar6;
        }
        fVar1 = (float)puVar3[1];
        if (unaff_XMM9_Da < fVar1) {
          fVar7 = unaff_XMM8_Da - (fVar1 - unaff_XMM9_Da);
        }
        else {
          fVar7 = unaff_XMM9_Da - fVar1;
        }
        if (unaff_XMM7_Da < fVar7) {
          fVar7 = unaff_XMM8_Da - fVar7;
        }
        if (fVar7 <= fVar6) {
          if (unaff_XMM9_Da < fVar5) {
            fVar6 = unaff_XMM8_Da - (fVar5 - unaff_XMM9_Da);
          }
          else {
            fVar6 = unaff_XMM9_Da - fVar5;
          }
          if (unaff_XMM7_Da < fVar6) {
            fVar6 = unaff_XMM8_Da - fVar6;
          }
          if (unaff_XMM9_Da < fVar1) {
            fVar7 = unaff_XMM8_Da - (fVar1 - unaff_XMM9_Da);
          }
          else {
            fVar7 = unaff_XMM9_Da - fVar1;
          }
          if (unaff_XMM7_Da < fVar7) {
            fVar7 = unaff_XMM8_Da - fVar7;
          }
          if (fVar6 == fVar7) {
            if (fVar1 < fVar5) {
              puVar3 = unaff_R15;
            }
            *(int32_t **)(unaff_RBX + 0x90) = puVar3;
          }
          goto LAB_1807d602f;
        }
      }
      *(int32_t **)(unaff_RBX + 0x90) = unaff_R15;
    }
LAB_1807d602f:
    unaff_EBP = iVar4 + 1;
    unaff_R12 = unaff_R12 + 1;
    if (*(int *)(unaff_RBX + 0x20) <= unaff_EBP) {
      return 0;
    }
    unaff_RSI = *(int64_t *)(unaff_RBX + 8);
    unaff_R15 = (int32_t *)(unaff_RSI + unaff_R12 * 0x14);
    if (unaff_EBP != *(int *)(unaff_RBX + 0x20) + -1) {
      unaff_RSI = unaff_RSI + (int64_t)(iVar4 + 2) * 0x14;
    }
    param_3 = *(float *)(unaff_RSI + 4);
    param_4 = (float)unaff_R15[1];
    if (param_3 < param_4) goto code_r0x0001807d5bf7;
    fVar5 = param_3 - param_4;
    iVar4 = unaff_EBP;
  } while( true );
}






// 函数: void FUN_1807d6098(void)
void FUN_1807d6098(void)

{
  return;
}



uint64_t FUN_1807d60b4(void)

{
  return 0x1f;
}



uint64_t FUN_1807d6160(int *param_1,int *param_2,float param_3,int param_4,int64_t param_5)

{
  int *piVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int iVar5;
  int iVar6;
  int32_t uVar7;
  
  if (param_1 == param_2) {
    iVar6 = 0;
    if (0 < *param_1) {
      iVar5 = 0;
      do {
        lVar2 = (int64_t)iVar5;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + param_4 + 1;
        *(float *)(param_5 + lVar2 * 4) = param_3 + *(float *)(param_5 + lVar2 * 4);
      } while (iVar6 < *param_1);
    }
  }
  else if (param_2[1] == 0) {
    if (param_2[0x2a] == 0) {
      if ((param_2[0x27] != 0) && (iVar6 = 0, 0 < param_2[0x27])) {
        lVar2 = 0;
        do {
          uVar4 = func_0x0001807d64c0(param_1,0x3f800000,param_3,
                                      param_5 + (int64_t)
                                                (*(int *)(lVar2 + *(int64_t *)(param_2 + 0x28)) *
                                                param_4) * 4);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          iVar6 = iVar6 + 1;
          lVar2 = lVar2 + 4;
        } while (iVar6 < param_2[0x27]);
      }
    }
    else {
      iVar6 = 0;
      if (0 < param_2[0x2a]) {
        lVar2 = 0;
        do {
          lVar3 = param_5 + (int64_t)(*(int *)(*(int64_t *)(param_2 + 0x2c) + lVar2) * param_4) *
                            4;
          uVar4 = FUN_1807d65f0(param_1,0,0x3f800000,param_3,
                                (int)(((int64_t)
                                       (*(int *)(lVar2 + *(int64_t *)(param_2 + 0x2e)) * param_4) *
                                       4 - lVar3) + param_5 >> 2),lVar3);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          iVar6 = iVar6 + 1;
          lVar2 = lVar2 + 4;
        } while (iVar6 < param_2[0x2a]);
      }
    }
  }
  else {
    if (((((param_1[1] != 0) || (param_1[0x2a] == 0)) || (*(int **)(param_2 + 0x22) == (int *)0x0))
        || ((**(int **)(param_2 + 0x22) < 0 || (*(int **)(param_2 + 0x24) == (int *)0x0)))) ||
       (**(int **)(param_2 + 0x24) < 0)) {
      if ((param_1[0x26] == -1) || (param_2[0x26] == -1)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0x3f800000;
      }
      uVar4 = FUN_1807d6d40(param_1,param_2,0,0x43b40000,0,uVar7,param_3,param_4,param_5,0);
      return uVar4;
    }
    iVar6 = 0;
    if (0 < param_1[0x2a]) {
      lVar2 = 0;
      do {
        iVar5 = func_0x0001807d49b0(param_2);
        lVar3 = (int64_t)(iVar5 * param_4 + *(int *)(*(int64_t *)(param_1 + 0x2c) + lVar2));
        *(float *)(param_5 + lVar3 * 4) = param_3 + *(float *)(param_5 + lVar3 * 4);
        iVar5 = func_0x0001807d49d0(param_2);
        iVar6 = iVar6 + 1;
        piVar1 = (int *)(lVar2 + *(int64_t *)(param_1 + 0x2e));
        lVar2 = lVar2 + 4;
        lVar3 = (int64_t)(iVar5 * param_4 + *piVar1);
        *(float *)(param_5 + lVar3 * 4) = param_3 + *(float *)(param_5 + lVar3 * 4);
      } while (iVar6 < param_1[0x2a]);
    }
  }
  return 0;
}






// 函数: void FUN_1807d6410(void)
void FUN_1807d6410(void)

{
  float in_XMM3_Da;
  
                    // WARNING: Subroutine does not return
  AdvancedSystemController(in_XMM3_Da * 0.017453292);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807d65f0(int64_t param_1,float param_2,float param_3,float param_4,int param_5,
void FUN_1807d65f0(int64_t param_1,float param_2,float param_3,float param_4,int param_5,
                  int64_t param_6)

{
  int *piVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int8_t auStack_1a8 [64];
  int8_t auStack_168 [256];
  uint64_t uStack_68;
  
  uStack_68 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1a8;
  fVar5 = (float)cosf(param_2 * 0.007853982 + 0.7853982);
  fVar5 = fVar5 * param_4;
  fVar6 = (float)cosf((100.0 - param_2) * 0.007853982);
  iVar4 = *(int *)(param_1 + 0x98);
  fVar6 = fVar6 * param_4;
  if (iVar4 != -1) {
    *(float *)(param_6 + (int64_t)iVar4 * 4) =
         fVar5 * param_3 + *(float *)(param_6 + (int64_t)iVar4 * 4);
    lVar2 = (int64_t)(*(int *)(param_1 + 0x98) + param_5);
    *(float *)(param_6 + lVar2 * 4) = fVar6 * param_3 + *(float *)(param_6 + lVar2 * 4);
  }
  if (*(int *)(param_1 + 0xa8) == 0) {
    if (*(int *)(param_1 + 0x9c) == 0) {
      if (*(int *)(param_1 + 4) == 1) {
        *(float *)(param_6 + (int64_t)**(int **)(param_1 + 8) * 4) =
             fVar5 + *(float *)(param_6 + (int64_t)**(int **)(param_1 + 8) * 4);
        lVar2 = (int64_t)(**(int **)(param_1 + 8) + param_5);
        *(float *)(param_6 + lVar2 * 4) = fVar6 + *(float *)(param_6 + lVar2 * 4);
      }
      else if (1 < *(int *)(param_1 + 4)) {
                    // WARNING: Subroutine does not return
        memset(auStack_168,0,0x100);
      }
    }
    else {
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x9c)) {
        lVar2 = 0;
        do {
          iVar4 = iVar4 + 1;
          lVar3 = (int64_t)*(int *)(lVar2 + *(int64_t *)(param_1 + 0xa0));
          *(float *)(param_6 + lVar3 * 4) = fVar5 + *(float *)(param_6 + lVar3 * 4);
          piVar1 = (int *)(lVar2 + *(int64_t *)(param_1 + 0xa0));
          lVar2 = lVar2 + 4;
          lVar3 = (int64_t)(*piVar1 + param_5);
          *(float *)(param_6 + lVar3 * 4) = fVar6 + *(float *)(param_6 + lVar3 * 4);
        } while (iVar4 < *(int *)(param_1 + 0x9c));
      }
    }
  }
  else {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0xa8)) {
      lVar2 = 0;
      do {
        iVar4 = iVar4 + 1;
        lVar3 = (int64_t)*(int *)(*(int64_t *)(param_1 + 0xb0) + lVar2);
        *(float *)(param_6 + lVar3 * 4) = fVar5 * 1.4142135 + *(float *)(param_6 + lVar3 * 4);
        piVar1 = (int *)(lVar2 + *(int64_t *)(param_1 + 0xb8));
        lVar2 = lVar2 + 4;
        lVar3 = (int64_t)(*piVar1 + param_5);
        *(float *)(param_6 + lVar3 * 4) = fVar6 * 1.4142135 + *(float *)(param_6 + lVar3 * 4);
      } while (iVar4 < *(int *)(param_1 + 0xa8));
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_68 ^ (uint64_t)auStack_1a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




