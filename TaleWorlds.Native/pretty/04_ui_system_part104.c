#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part104.c - 9 个函数
// 函数: void SystemCore_2cc1b(void)
void SystemCore_2cc1b(void)
{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  char cVar4;
  uint64_t *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int64_t in_RAX;
  int64_t lVar9;
  int64_t lVar10;
  uint uVar11;
  int64_t lVar12;
  int64_t lVar13;
  char *pcVar14;
  uint64_t uVar15;
  int iVar16;
  int64_t unaff_RBP;
  void *unaff_RSI;
  short sVar17;
  int iVar18;
  int64_t lVar19;
  int64_t lVar20;
  uint uVar21;
  uint64_t uVar22;
  int64_t lVar23;
  int *piVar24;
  float *pfVar25;
  int64_t unaff_R12;
  uint64_t unaff_R13;
  int16_t unaff_R14W;
  int16_t unaff_000000b2;
  int32_t unaff_000000b4;
  int unaff_R15D;
  float fVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  double dVar30;
  float fVar31;
  double dVar32;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  float unaff_XMM10_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  int unaff_XMM14_Da;
  float fVar33;
  float unaff_XMM15_Da;
  int local_var_40;
  uint local_buffer_48;
  int iStack000000000000004c;
  int iStack0000000000000050;
  int iStack0000000000000054;
  int local_buffer_58;
  int local_buffer_60;
  int local_buffer_68;
  void *plocal_buffer_70;
  int64_t local_buffer_78;
  fVar33 = (float)unaff_XMM14_Da;
  plocal_buffer_70 =
       (void *)CONCAT44(unaff_000000b4,CONCAT22(unaff_000000b2,unaff_R14W));
  fVar27 = *(float *)(unaff_RBP + 0x2c98);
  do {
    iVar8 = *(int *)(unaff_RBP + -0x10 + (int64_t)unaff_RSI * 4);
    iVar18 = CONCAT22(unaff_000000b2,unaff_R14W);
    if (in_RAX != 0) {
      uVar21 = *(uint *)(unaff_RBP + 0x2cb0);
      pfVar25 = (float *)(unaff_RBP + 0x50);
      do {
        *pfVar25 = (float)CONCAT22(unaff_000000b2,unaff_R14W);
        if (0 < (int)uVar21) {
          lVar19 = CONCAT44(unaff_000000b4,CONCAT22(unaff_000000b2,unaff_R14W));
          pcVar14 = (char *)(iVar18 + unaff_R12);
          uVar22 = (uint64_t)uVar21;
          fVar26 = unaff_XMM8_Da;
          do {
            cVar4 = *pcVar14;
            pcVar14 = pcVar14 + (unaff_R13 & 0xffffffff);
            lVar12 = (cVar4 + iVar8) + lVar19;
            lVar19 = lVar19 + 0x95;
            fVar26 = fVar26 + *(float *)(unaff_RBP + 400 + lVar12 * 4);
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
          *pfVar25 = fVar26;
        }
        iVar18 = iVar18 + 1;
        pfVar25 = pfVar25 + 1;
        in_RAX = in_RAX + -1;
        unaff_RSI = plocal_buffer_70;
        unaff_R15D = local_buffer_60;
      } while (in_RAX != 0);
    }
    uVar21 = CONCAT22(unaff_000000b2,unaff_R14W);
    uVar11 = CONCAT22(unaff_000000b2,unaff_R14W);
    fVar26 = unaff_XMM7_Da;
    do {
      fVar31 = *(float *)(unaff_RBP + 0x50 + (int64_t)(int)uVar11 * 4);
      uVar6 = uVar11;
      if (fVar31 <= fVar26) {
        uVar6 = uVar21;
        fVar31 = fVar26;
      }
      fVar26 = fVar31;
      uVar21 = uVar6;
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < unaff_R15D);
    dVar28 = (double)log10((double)iVar8);
    fVar31 = fVar26 - fVar33 * unaff_XMM10_Da * (float)(dVar28 * 3.32192809488736);
    if (CONCAT22(unaff_000000b2,unaff_R14W) < *(int *)(unaff_RBP + 0x2c88)) {
      fVar29 = (float)(dVar28 * 3.32192809488736) - unaff_XMM15_Da;
      fVar29 = fVar29 * fVar29;
      fVar31 = fVar31 - (fVar33 * unaff_XMM10_Da * **(float **)(unaff_RBP + -0x78) * fVar29) /
                        (fVar29 + 0.5);
    }
    if ((unaff_XMM12_Da < fVar31) && (fVar33 * fVar27 < fVar26)) {
      unaff_XMM12_Da = fVar31;
      unaff_XMM13_Da = fVar26;
      local_var_40 = iVar8;
      local_buffer_48 = uVar21;
    }
    in_RAX = *(int64_t *)(unaff_RBP + -0x38);
    unaff_RSI = unaff_RSI + 1;
    plocal_buffer_70 = unaff_RSI;
  } while ((int64_t)unaff_RSI < *(int64_t *)(unaff_RBP + -0x40));
  if (local_var_40 == -1) {
    puVar5 = *(uint64_t **)(unaff_RBP + -0x80);
    *puVar5 = 0;
    puVar5[1] = 0;
    **(int32_t **)(unaff_RBP + -0x78) = CONCAT22(unaff_000000b2,unaff_R14W);
    **(int16_t **)(unaff_RBP + -0x58) = unaff_R14W;
    **(int8_t **)(unaff_RBP + -0x50) = 0;
  }
  else {
    **(float **)(unaff_RBP + -0x78) = unaff_XMM13_Da / fVar33;
    if (iStack000000000000004c < 9) {
      if (0 < (int)*(uint *)(unaff_RBP + 0x2cb0)) {
        lVar19 = *(int64_t *)(unaff_RBP + -0x70);
        piVar24 = *(int **)(unaff_RBP + -0x80);
        uVar22 = (uint64_t)*(uint *)(unaff_RBP + 0x2cb0);
        pcVar14 = (char *)((int)local_buffer_48 + unaff_R12);
        do {
          iVar8 = *pcVar14 + local_var_40;
          if (iVar8 < 0x91) {
            if (iVar8 < 0x10) {
              iVar8 = 0x10;
            }
          }
          else {
            iVar8 = 0x90;
          }
          *piVar24 = iVar8;
          pcVar14 = pcVar14 + lVar19;
          piVar24 = piVar24 + 1;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      sVar17 = (short)local_var_40 + -0x10;
      uVar22 = (uint64_t)local_buffer_48;
    }
    else {
      if (iStack000000000000004c == 0xc) {
        uVar21 = (short)local_var_40 * 3;
        local_var_40 = ((int)uVar21 >> 1) + (uVar21 & 1);
      }
      else {
        local_var_40 = local_var_40 * 2;
      }
      if (local_buffer_68 < local_buffer_58) {
        iVar8 = local_buffer_58;
        if ((local_var_40 <= local_buffer_58) &&
           (iVar8 = local_var_40, local_var_40 < local_buffer_68)) {
          iVar8 = local_buffer_68;
        }
      }
      else {
        iVar8 = local_buffer_68;
        if ((local_var_40 <= local_buffer_68) &&
           (iVar8 = local_var_40, local_var_40 < local_buffer_58)) {
          iVar8 = local_buffer_58;
        }
      }
      iVar18 = *(int *)(unaff_RBP + 0x2cb0);
      local_buffer_48 = CONCAT22(unaff_000000b2,unaff_R14W);
      iVar16 = local_buffer_58;
      if (local_buffer_58 < iVar8 + -2) {
        iVar16 = iVar8 + -2;
      }
      iVar7 = local_buffer_68;
      if (iVar8 + 2 < local_buffer_68) {
        iVar7 = iVar8 + 2;
      }
      SystemCore_2b930(unaff_RBP + 0xae0,*(uint64_t *)(unaff_RBP + -0x60),iVar16,
                    iStack0000000000000054,iVar18);
      SystemCore_2bbd0(unaff_RBP + 0x1d00,*(uint64_t *)(unaff_RBP + -0x60),iVar16,
                    iStack0000000000000054,iVar18);
      fVar27 = (float)iVar8;
      if (iVar18 == 4) {
        plocal_buffer_70 = &processed_var_4112_ptr;
        lVar19 = 0x22;
        iVar18 = (int)(char)(&processed_var_4108_ptr)[iStack0000000000000050];
      }
      else {
        iVar18 = 0xc;
        plocal_buffer_70 = &processed_var_4280_ptr;
        lVar19 = 0xc;
      }
      dVar28 = (double)SystemCore_72B3A0(*(int64_t *)(unaff_RBP + -0x60) +
                                     (int64_t)(iStack000000000000004c * 0x14) * 4,
                                     iStack0000000000000054 * *(int *)(unaff_RBP + 0x2cb0));
      if (iVar16 <= iVar7) {
        lVar12 = CONCAT44(unaff_000000b4,CONCAT22(unaff_000000b2,unaff_R14W));
        do {
          uVar21 = CONCAT22(unaff_000000b2,unaff_R14W);
          lVar20 = CONCAT44(unaff_000000b4,CONCAT22(unaff_000000b2,unaff_R14W));
          if (0 < (int64_t)iVar18) {
            lVar23 = lVar12 * 4;
            do {
              dVar30 = (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da);
              lVar10 = CONCAT44(unaff_000000b4,CONCAT22(unaff_000000b2,unaff_R14W));
              dVar32 = dVar28 + 1.0;
              if (3 < local_buffer_78) {
                lVar13 = (local_buffer_78 - 4U >> 2) + 1;
                lVar10 = lVar13 * 4;
                lVar9 = lVar23;
                do {
                  pfVar25 = (float *)(unaff_RBP + 0x1d00 + lVar9);
                  dVar30 = (double)*(float *)(unaff_RBP + 0xae0 + lVar9) + dVar30 +
                           (double)*(float *)(unaff_RBP + 0xd88 + lVar9) +
                           (double)*(float *)(unaff_RBP + 0x1030 + lVar9) +
                           (double)*(float *)(unaff_RBP + 0x12d8 + lVar9);
                  pfVar1 = (float *)(unaff_RBP + 0x1fa8 + lVar9);
                  pfVar2 = (float *)(unaff_RBP + 0x2250 + lVar9);
                  pfVar3 = (float *)(unaff_RBP + 0x24f8 + lVar9);
                  lVar9 = lVar9 + 0xaa0;
                  dVar32 = (double)*pfVar25 + dVar32 + (double)*pfVar1 + (double)*pfVar2 +
                           (double)*pfVar3;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
              }
              if (lVar10 < local_buffer_78) {
                lVar9 = (lVar12 + (lVar10 * 0x22 + lVar20) * 5) * 4;
                lVar10 = local_buffer_78 - lVar10;
                do {
                  pfVar25 = (float *)(unaff_RBP + 0xae0 + lVar9);
                  pfVar1 = (float *)(unaff_RBP + 0x1d00 + lVar9);
                  lVar9 = lVar9 + 0x2a8;
                  dVar30 = dVar30 + (double)*pfVar25;
                  dVar32 = dVar32 + (double)*pfVar1;
                  lVar10 = lVar10 + -1;
                } while (lVar10 != 0);
              }
              fVar33 = unaff_XMM8_Da;
              if ((double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da) <= dVar30 &&
                  dVar30 != (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da)) {
                fVar33 = (1.0 - (float)(int)uVar21 * (0.05 / fVar27)) *
                         (float)((dVar30 + dVar30) / dVar32);
              }
              if ((unaff_XMM7_Da < fVar33) &&
                 ((char)(&processed_var_4112_ptr)[lVar20] + iVar16 <= local_buffer_68)) {
                unaff_XMM7_Da = fVar33;
                iVar8 = iVar16;
                local_buffer_48 = uVar21;
              }
              uVar21 = uVar21 + 1;
              lVar20 = lVar20 + 1;
              lVar23 = lVar23 + 0x14;
            } while (lVar20 < iVar18);
          }
          lVar12 = lVar12 + 1;
          iVar16 = iVar16 + 1;
        } while (iVar16 <= iVar7);
      }
      if ((int)*(uint *)(unaff_RBP + 0x2cb0) < 1) {
        uVar22 = (uint64_t)local_buffer_48;
        sVar17 = (short)iVar8 - (short)local_buffer_58;
      }
      else {
        uVar22 = (uint64_t)(int)local_buffer_48;
        uVar15 = (uint64_t)*(uint *)(unaff_RBP + 0x2cb0);
        piVar24 = *(int **)(unaff_RBP + -0x80);
        pcVar14 = plocal_buffer_70 + uVar22;
        iVar18 = *(int *)(unaff_RBP + -0x68);
        do {
          iVar16 = *pcVar14 + iVar8;
          if (iVar18 < local_buffer_58) {
            iVar7 = local_buffer_58;
            if ((iVar16 <= local_buffer_58) && (iVar7 = iVar16, iVar16 < iVar18)) {
              iVar7 = iVar18;
            }
          }
          else {
            iVar7 = iVar18;
            if ((iVar16 <= iVar18) && (iVar7 = iVar16, iVar16 < local_buffer_58)) {
              iVar7 = local_buffer_58;
            }
          }
          *piVar24 = iVar7;
          pcVar14 = pcVar14 + lVar19;
          piVar24 = piVar24 + 1;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
        sVar17 = (short)iVar8 - (short)local_buffer_58;
      }
    }
    **(short **)(unaff_RBP + -0x58) = sVar17;
    **(int8_t **)(unaff_RBP + -0x50) = (char)uVar22;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x2b60) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_2cdb2(float *param_1,int param_2,int param_3)
void SystemCore_2cdb2(float *param_1,int param_2,int param_3)
{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  char *pcVar10;
  uint64_t uVar11;
  int iVar12;
  int64_t unaff_RBP;
  int iVar13;
  short sVar14;
  int64_t lVar15;
  uint uVar16;
  int64_t lVar17;
  int *piVar18;
  int64_t lVar19;
  int64_t unaff_R12;
  int64_t lVar20;
  int64_t unaff_R13;
  uint unaff_R14D;
  int32_t unaff_000000b4;
  float fVar21;
  double dVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  uint local_buffer_48;
  int iStack000000000000004c;
  int iStack0000000000000050;
  int iStack0000000000000054;
  int local_buffer_58;
  int local_buffer_68;
  void *plocal_buffer_70;
  *param_1 = unaff_XMM13_Da / unaff_XMM14_Da;
  if (iStack000000000000004c < 9) {
    if (0 < (int)*(uint *)(unaff_RBP + 0x2cb0)) {
      lVar20 = *(int64_t *)(unaff_RBP + -0x70);
      piVar18 = *(int **)(unaff_RBP + -0x80);
      uVar11 = (uint64_t)*(uint *)(unaff_RBP + 0x2cb0);
      pcVar10 = (char *)(param_2 + unaff_R12);
      do {
        iVar6 = *pcVar10 + param_3;
        if (iVar6 < 0x91) {
          if (iVar6 < 0x10) {
            iVar6 = 0x10;
          }
        }
        else {
          iVar6 = 0x90;
        }
        *piVar18 = iVar6;
        pcVar10 = pcVar10 + lVar20;
        piVar18 = piVar18 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    sVar14 = (short)param_3 + -0x10;
    _local_buffer_48 = _local_buffer_48 & 0xffffffff;
  }
  else {
    if (iStack000000000000004c == 0xc) {
      uVar16 = (short)param_3 * 3;
      param_3 = ((int)uVar16 >> 1) + (uVar16 & 1);
    }
    else {
      param_3 = param_3 * 2;
    }
    if (local_buffer_68 < local_buffer_58) {
      iVar6 = local_buffer_58;
      if ((param_3 <= local_buffer_58) && (iVar6 = param_3, param_3 < local_buffer_68)) {
        iVar6 = local_buffer_68;
      }
    }
    else {
      iVar6 = local_buffer_68;
      if ((param_3 <= local_buffer_68) && (iVar6 = param_3, param_3 < local_buffer_58)) {
        iVar6 = local_buffer_58;
      }
    }
    iVar13 = *(int *)(unaff_RBP + 0x2cb0);
    iVar12 = local_buffer_58;
    if (local_buffer_58 < iVar6 + -2) {
      iVar12 = iVar6 + -2;
    }
    iVar5 = local_buffer_68;
    if (iVar6 + 2 < local_buffer_68) {
      iVar5 = iVar6 + 2;
    }
    SystemCore_2b930(unaff_RBP + 0xae0,*(uint64_t *)(unaff_RBP + -0x60),iVar12,iStack0000000000000054
                  ,iVar13);
    SystemCore_2bbd0(unaff_RBP + 0x1d00,*(uint64_t *)(unaff_RBP + -0x60),iVar12,
                  iStack0000000000000054,iVar13);
    fVar21 = (float)iVar6;
    if (iVar13 == 4) {
      plocal_buffer_70 = &processed_var_4112_ptr;
      lVar20 = 0x22;
      iVar13 = (int)(char)(&processed_var_4108_ptr)[iStack0000000000000050];
    }
    else {
      iVar13 = 0xc;
      plocal_buffer_70 = &processed_var_4280_ptr;
      lVar20 = 0xc;
    }
    dVar22 = (double)SystemCore_72B3A0(*(int64_t *)(unaff_RBP + -0x60) +
                                   (int64_t)(iStack000000000000004c * 0x14) * 4,
                                   iStack0000000000000054 * *(int *)(unaff_RBP + 0x2cb0));
    local_buffer_48 = unaff_R14D;
    if (iVar12 <= iVar5) {
      lVar19 = CONCAT44(unaff_000000b4,unaff_R14D);
      do {
        lVar15 = CONCAT44(unaff_000000b4,unaff_R14D);
        if (0 < (int64_t)iVar13) {
          lVar17 = lVar19 * 4;
          uVar16 = unaff_R14D;
          do {
            dVar24 = (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da);
            lVar8 = CONCAT44(unaff_000000b4,unaff_R14D);
            dVar25 = dVar22 + 1.0;
            if (3 < unaff_R13) {
              lVar9 = (unaff_R13 - 4U >> 2) + 1;
              lVar8 = lVar9 * 4;
              lVar7 = lVar17;
              do {
                pfVar1 = (float *)(unaff_RBP + 0x1d00 + lVar7);
                dVar24 = (double)*(float *)(unaff_RBP + 0xae0 + lVar7) + dVar24 +
                         (double)*(float *)(unaff_RBP + 0xd88 + lVar7) +
                         (double)*(float *)(unaff_RBP + 0x1030 + lVar7) +
                         (double)*(float *)(unaff_RBP + 0x12d8 + lVar7);
                pfVar2 = (float *)(unaff_RBP + 0x1fa8 + lVar7);
                pfVar3 = (float *)(unaff_RBP + 0x2250 + lVar7);
                pfVar4 = (float *)(unaff_RBP + 0x24f8 + lVar7);
                lVar7 = lVar7 + 0xaa0;
                dVar25 = (double)*pfVar1 + dVar25 + (double)*pfVar2 + (double)*pfVar3 +
                         (double)*pfVar4;
                lVar9 = lVar9 + -1;
              } while (lVar9 != 0);
            }
            if (lVar8 < unaff_R13) {
              lVar7 = (lVar19 + (lVar8 * 0x22 + lVar15) * 5) * 4;
              lVar8 = unaff_R13 - lVar8;
              do {
                pfVar1 = (float *)(unaff_RBP + 0xae0 + lVar7);
                pfVar2 = (float *)(unaff_RBP + 0x1d00 + lVar7);
                lVar7 = lVar7 + 0x2a8;
                dVar24 = dVar24 + (double)*pfVar1;
                dVar25 = dVar25 + (double)*pfVar2;
                lVar8 = lVar8 + -1;
              } while (lVar8 != 0);
            }
            fVar23 = unaff_XMM8_Da;
            if ((double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da) <= dVar24 &&
                dVar24 != (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da)) {
              fVar23 = (1.0 - (float)(int)uVar16 * (0.05 / fVar21)) *
                       (float)((dVar24 + dVar24) / dVar25);
            }
            if ((unaff_XMM7_Da < fVar23) &&
               ((char)(&processed_var_4112_ptr)[lVar15] + iVar12 <= local_buffer_68)) {
              unaff_XMM7_Da = fVar23;
              iVar6 = iVar12;
              local_buffer_48 = uVar16;
            }
            uVar16 = uVar16 + 1;
            lVar15 = lVar15 + 1;
            lVar17 = lVar17 + 0x14;
          } while (lVar15 < iVar13);
        }
        lVar19 = lVar19 + 1;
        iVar12 = iVar12 + 1;
      } while (iVar12 <= iVar5);
    }
    if ((int)*(uint *)(unaff_RBP + 0x2cb0) < 1) {
      _local_buffer_48 = (uint64_t)local_buffer_48;
      sVar14 = (short)iVar6 - (short)local_buffer_58;
    }
    else {
      _local_buffer_48 = (uint64_t)(int)local_buffer_48;
      uVar11 = (uint64_t)*(uint *)(unaff_RBP + 0x2cb0);
      piVar18 = *(int **)(unaff_RBP + -0x80);
      pcVar10 = plocal_buffer_70 + _local_buffer_48;
      iVar13 = *(int *)(unaff_RBP + -0x68);
      do {
        iVar12 = *pcVar10 + iVar6;
        if (iVar13 < local_buffer_58) {
          iVar5 = local_buffer_58;
          if ((iVar12 <= local_buffer_58) && (iVar5 = iVar12, iVar12 < iVar13)) {
            iVar5 = iVar13;
          }
        }
        else {
          iVar5 = iVar13;
          if ((iVar12 <= iVar13) && (iVar5 = iVar12, iVar12 < local_buffer_58)) {
            iVar5 = local_buffer_58;
          }
        }
        *piVar18 = iVar5;
        pcVar10 = pcVar10 + lVar20;
        piVar18 = piVar18 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      sVar14 = (short)iVar6 - (short)local_buffer_58;
    }
  }
  **(short **)(unaff_RBP + -0x58) = sVar14;
  **(int8_t **)(unaff_RBP + -0x50) = (char)_local_buffer_48;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x2b60) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_2d1d8(void)
void SystemCore_2d1d8(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x2b60) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_2d226(void)
void SystemCore_2d226(void)
{
  uint64_t *puVar1;
  int64_t unaff_RBP;
  int32_t unaff_R14D;
  puVar1 = *(uint64_t **)(unaff_RBP + -0x80);
  *puVar1 = 0;
  puVar1[1] = 0;
  **(int32_t **)(unaff_RBP + -0x78) = unaff_R14D;
  **(int16_t **)(unaff_RBP + -0x58) = (short)unaff_R14D;
  **(int8_t **)(unaff_RBP + -0x50) = 0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x2b60) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_2d250(void)
void SystemCore_2d250(void)
{
  code *pcVar1;
  UltraHighFreq_ThreadManager1();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
// 函数: void SystemCore_2d260(int64_t param_1,float *param_2,int64_t param_3,int param_4)
void SystemCore_2d260(int64_t param_1,float *param_2,int64_t param_3,int param_4)
{
  float *pfVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  lVar5 = (int64_t)param_4;
  if (10 < lVar5) {
    lVar4 = 10;
    if (0xd < lVar5) {
      pfVar1 = (float *)(param_3 + 0x1c);
      lVar2 = param_1 - param_3;
      lVar3 = (lVar5 - 0xeU >> 2) + 1;
      lVar4 = lVar3 * 4 + 10;
      do {
        *(float *)(lVar2 + 0xc + (int64_t)pfVar1) =
             pfVar1[3] -
             (*param_2 * pfVar1[2] + pfVar1[1] * param_2[1] + param_2[2] * *pfVar1 +
              param_2[3] * pfVar1[-1] + param_2[4] * pfVar1[-2] + param_2[5] * pfVar1[-3] +
              param_2[6] * pfVar1[-4] + param_2[7] * pfVar1[-5] + param_2[8] * pfVar1[-6] +
             pfVar1[-7] * param_2[9]);
        *(float *)(lVar2 + 0x10 + (int64_t)pfVar1) =
             pfVar1[4] -
             (*param_2 * pfVar1[3] + pfVar1[2] * param_2[1] + param_2[2] * pfVar1[1] +
              param_2[3] * *pfVar1 + param_2[4] * pfVar1[-1] + param_2[5] * pfVar1[-2] +
              param_2[6] * pfVar1[-3] + param_2[7] * pfVar1[-4] + param_2[8] * pfVar1[-5] +
             param_2[9] * pfVar1[-6]);
        *(float *)(lVar2 + 0x14 + (int64_t)pfVar1) =
             pfVar1[5] -
             (pfVar1[4] * *param_2 + pfVar1[3] * param_2[1] + param_2[2] * pfVar1[2] +
              param_2[3] * pfVar1[1] + param_2[4] * *pfVar1 + param_2[5] * pfVar1[-1] +
              param_2[6] * pfVar1[-2] + param_2[7] * pfVar1[-3] + param_2[8] * pfVar1[-4] +
             param_2[9] * pfVar1[-5]);
        *(float *)(lVar2 + 0x18 + (int64_t)pfVar1) =
             pfVar1[6] -
             (pfVar1[4] * param_2[1] + *param_2 * pfVar1[5] + param_2[2] * pfVar1[3] +
              param_2[3] * pfVar1[2] + param_2[4] * pfVar1[1] + param_2[5] * *pfVar1 +
              param_2[6] * pfVar1[-1] + param_2[7] * pfVar1[-2] + param_2[8] * pfVar1[-3] +
             param_2[9] * pfVar1[-4]);
        pfVar1 = pfVar1 + 4;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (lVar4 < lVar5) {
      pfVar1 = (float *)(param_3 + -0xc + lVar4 * 4);
      lVar5 = lVar5 - lVar4;
      do {
        *(float *)((param_1 - param_3) + 0xc + (int64_t)pfVar1) =
             pfVar1[3] -
             (pfVar1[2] * *param_2 + pfVar1[1] * param_2[1] + *pfVar1 * param_2[2] +
              pfVar1[-1] * param_2[3] + pfVar1[-2] * param_2[4] + pfVar1[-3] * param_2[5] +
              pfVar1[-4] * param_2[6] + pfVar1[-5] * param_2[7] + pfVar1[-6] * param_2[8] +
             pfVar1[-7] * param_2[9]);
        pfVar1 = pfVar1 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  return;
}
// 函数: void SystemCore_2d289(float *param_1,float *param_2)
void SystemCore_2d289(float *param_1,float *param_2)
{
  float *pfVar1;
  int64_t unaff_RBX;
  int64_t lVar2;
  int64_t lVar3;
  int64_t in_R10;
  int64_t lVar4;
  int64_t in_R11;
  lVar2 = in_R11 - unaff_RBX;
  lVar3 = (in_R10 - 0xeU >> 2) + 1;
  lVar4 = lVar3 * 4 + 10;
  do {
    *(float *)(lVar2 + 0xc + (int64_t)param_1) =
         param_1[3] -
         (*param_2 * param_1[2] + param_1[1] * param_2[1] + param_2[2] * *param_1 +
          param_2[3] * param_1[-1] + param_2[4] * param_1[-2] + param_2[5] * param_1[-3] +
          param_2[6] * param_1[-4] + param_2[7] * param_1[-5] + param_2[8] * param_1[-6] +
         param_1[-7] * param_2[9]);
    *(float *)(lVar2 + 0x10 + (int64_t)param_1) =
         param_1[4] -
         (*param_2 * param_1[3] + param_1[2] * param_2[1] + param_2[2] * param_1[1] +
          param_2[3] * *param_1 + param_2[4] * param_1[-1] + param_2[5] * param_1[-2] +
          param_2[6] * param_1[-3] + param_2[7] * param_1[-4] + param_2[8] * param_1[-5] +
         param_2[9] * param_1[-6]);
    *(float *)(lVar2 + 0x14 + (int64_t)param_1) =
         param_1[5] -
         (param_1[4] * *param_2 + param_1[3] * param_2[1] + param_2[2] * param_1[2] +
          param_2[3] * param_1[1] + param_2[4] * *param_1 + param_2[5] * param_1[-1] +
          param_2[6] * param_1[-2] + param_2[7] * param_1[-3] + param_2[8] * param_1[-4] +
         param_2[9] * param_1[-5]);
    *(float *)(lVar2 + 0x18 + (int64_t)param_1) =
         param_1[6] -
         (param_1[4] * param_2[1] + *param_2 * param_1[5] + param_2[2] * param_1[3] +
          param_2[3] * param_1[2] + param_2[4] * param_1[1] + param_2[5] * *param_1 +
          param_2[6] * param_1[-1] + param_2[7] * param_1[-2] + param_2[8] * param_1[-3] +
         param_2[9] * param_1[-4]);
    param_1 = param_1 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (lVar4 < in_R10) {
    pfVar1 = (float *)(unaff_RBX + -0xc + lVar4 * 4);
    lVar4 = in_R10 - lVar4;
    do {
      *(float *)((in_R11 - unaff_RBX) + 0xc + (int64_t)pfVar1) =
           pfVar1[3] -
           (pfVar1[2] * *param_2 + pfVar1[1] * param_2[1] + *pfVar1 * param_2[2] +
            pfVar1[-1] * param_2[3] + pfVar1[-2] * param_2[4] + pfVar1[-3] * param_2[5] +
            pfVar1[-4] * param_2[6] + pfVar1[-5] * param_2[7] + pfVar1[-6] * param_2[8] +
           pfVar1[-7] * param_2[9]);
      pfVar1 = pfVar1 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}
// 函数: void SystemCore_2d517(uint64_t param_1,float *param_2,uint64_t param_3,int64_t param_4)
void SystemCore_2d517(uint64_t param_1,float *param_2,uint64_t param_3,int64_t param_4)
{
  float *pfVar1;
  int64_t unaff_RBX;
  int64_t in_R10;
  int64_t in_R11;
  if (param_4 < in_R10) {
    pfVar1 = (float *)(unaff_RBX + -0xc + param_4 * 4);
    param_4 = in_R10 - param_4;
    do {
      *(float *)((in_R11 - unaff_RBX) + 0xc + (int64_t)pfVar1) =
           pfVar1[3] -
           (pfVar1[2] * *param_2 + pfVar1[1] * param_2[1] + *pfVar1 * param_2[2] +
            pfVar1[-1] * param_2[3] + pfVar1[-2] * param_2[4] + pfVar1[-3] * param_2[5] +
            pfVar1[-4] * param_2[6] + pfVar1[-5] * param_2[7] + pfVar1[-6] * param_2[8] +
           pfVar1[-7] * param_2[9]);
      pfVar1 = pfVar1 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}
// 函数: void SystemCore_2d5e0(int64_t param_1,float *param_2,int64_t param_3,int param_4)
void SystemCore_2d5e0(int64_t param_1,float *param_2,int64_t param_3,int param_4)
{
  float *pfVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  lVar5 = (int64_t)param_4;
  if (0xc < lVar5) {
    lVar4 = 0xc;
    if (0xf < lVar5) {
      pfVar1 = (float *)(param_3 + 0x24);
      lVar2 = param_1 - param_3;
      lVar3 = (lVar5 - 0x10U >> 2) + 1;
      lVar4 = lVar3 * 4 + 0xc;
      do {
        *(float *)((int64_t)pfVar1 + lVar2 + 0xc) =
             pfVar1[3] -
             (*param_2 * pfVar1[2] + pfVar1[1] * param_2[1] + *pfVar1 * param_2[2] +
              param_2[3] * pfVar1[-1] + param_2[4] * pfVar1[-2] + param_2[5] * pfVar1[-3] +
              param_2[6] * pfVar1[-4] + param_2[7] * pfVar1[-5] + param_2[8] * pfVar1[-6] +
              param_2[9] * pfVar1[-7] + param_2[10] * pfVar1[-8] + pfVar1[-9] * param_2[0xb]);
        *(float *)((int64_t)pfVar1 + lVar2 + 0x10) =
             pfVar1[4] -
             (*param_2 * pfVar1[3] + pfVar1[2] * param_2[1] + param_2[2] * pfVar1[1] +
              *pfVar1 * param_2[3] + param_2[4] * pfVar1[-1] + param_2[5] * pfVar1[-2] +
              param_2[6] * pfVar1[-3] + param_2[7] * pfVar1[-4] + param_2[8] * pfVar1[-5] +
              param_2[9] * pfVar1[-6] + param_2[10] * pfVar1[-7] + param_2[0xb] * pfVar1[-8]);
        *(float *)((int64_t)pfVar1 + lVar2 + 0x14) =
             pfVar1[5] -
             (*param_2 * pfVar1[4] + pfVar1[3] * param_2[1] + param_2[2] * pfVar1[2] +
              param_2[3] * pfVar1[1] + *pfVar1 * param_2[4] + param_2[5] * pfVar1[-1] +
              param_2[6] * pfVar1[-2] + param_2[7] * pfVar1[-3] + param_2[8] * pfVar1[-4] +
              param_2[9] * pfVar1[-5] + param_2[10] * pfVar1[-6] + param_2[0xb] * pfVar1[-7]);
        *(float *)((int64_t)pfVar1 + lVar2 + 0x18) =
             pfVar1[6] -
             (*param_2 * pfVar1[5] + pfVar1[4] * param_2[1] + param_2[2] * pfVar1[3] +
              param_2[3] * pfVar1[2] + param_2[4] * pfVar1[1] + *pfVar1 * param_2[5] +
              param_2[6] * pfVar1[-1] + param_2[7] * pfVar1[-2] + param_2[8] * pfVar1[-3] +
              param_2[9] * pfVar1[-4] + param_2[10] * pfVar1[-5] + param_2[0xb] * pfVar1[-6]);
        pfVar1 = pfVar1 + 4;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (lVar4 < lVar5) {
      pfVar1 = (float *)(param_3 + -0xc + lVar4 * 4);
      lVar5 = lVar5 - lVar4;
      do {
        *(float *)((int64_t)pfVar1 + (param_1 - param_3) + 0xc) =
             pfVar1[3] -
             (pfVar1[2] * *param_2 + pfVar1[1] * param_2[1] + *pfVar1 * param_2[2] +
              pfVar1[-1] * param_2[3] + pfVar1[-2] * param_2[4] + pfVar1[-3] * param_2[5] +
              pfVar1[-4] * param_2[6] + pfVar1[-5] * param_2[7] + pfVar1[-6] * param_2[8] +
              pfVar1[-7] * param_2[9] + pfVar1[-8] * param_2[10] + pfVar1[-9] * param_2[0xb]);
        pfVar1 = pfVar1 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  return;
}