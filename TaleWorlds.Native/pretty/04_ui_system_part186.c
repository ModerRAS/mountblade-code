#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part186.c - 2 个函数
// 函数: void SystemCore_76090(void)
void SystemCore_76090(void)
{
// WARNING: Subroutine does not return
  memset(0x180c0cf84,0,0x5c);
}
uint64_t
SystemCore_762e0(uint64_t param_1,int64_t *param_2,uint64_t *param_3,int64_t param_4,int *param_5
             ,int *param_6,uint param_7,float param_8,float param_9,float param_10,int *param_11,
             int param_12,uint *param_13,int *param_14)
{
  uint uVar1;
  int16_t uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int16_t *puVar6;
  uint uVar7;
  short *psVar8;
  uint64_t uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  float *pfVar14;
  float *pfVar15;
  uint uVar16;
  uint64_t uVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  iVar5 = *param_11;
  uVar16 = *param_13;
  iVar11 = *param_5;
  iVar18 = *param_6;
  iVar12 = *param_14;
  pfVar14 = (float *)*param_3;
  pfVar15 = (float *)*param_2;
  while ((iVar5 != 0 && (uVar16 != 0))) {
    uVar7 = param_7;
    if ((uint)(iVar12 + iVar5) < param_7) {
      uVar7 = iVar12 + iVar5;
    }
    uVar3 = param_7;
    if ((uint)(iVar11 + iVar5) < param_7) {
      uVar3 = iVar11 + iVar5;
    }
    uVar4 = param_7;
    if ((uint)(iVar18 + iVar5) < param_7) {
      uVar4 = iVar18 + iVar5;
    }
    uVar1 = uVar3 - iVar11;
    if (uVar7 - iVar12 < uVar3 - iVar11) {
      uVar1 = uVar7 - iVar12;
    }
    uVar7 = uVar16;
    if (uVar4 - iVar18 < uVar16) {
      uVar7 = uVar4 - iVar18;
    }
    if (uVar1 < uVar7) {
      uVar7 = uVar1;
    }
    psVar8 = (short *)(param_4 + (uint64_t)(uint)(iVar11 * param_12) * 2);
    puVar6 = (int16_t *)(param_4 + (uint64_t)(uint)(iVar18 * param_12) * 2);
    psVar13 = (short *)(param_4 + (uint64_t)(uint)(iVar12 * param_12) * 2);
    if (uVar7 != 0) {
      uVar17 = (uint64_t)uVar7;
      do {
        iVar10 = 0;
        fVar22 = (float)uVar16 * 0.00048828125;
        if (3 < param_12) {
          fVar21 = 1.0 - fVar22;
          uVar3 = (param_12 - 4U >> 2) + 1;
          uVar9 = (uint64_t)uVar3;
          iVar10 = uVar3 * 4;
          do {
            fVar19 = ((float)(int)*psVar8 * fVar21 + (float)(int)*psVar13 * fVar22) * 3.051851e-05;
            fVar20 = fVar19 * param_10 + *pfVar14;
            *pfVar15 = fVar19 * param_8 + *pfVar14 * param_9;
            if (fVar20 <= 1.0) {
              if (-1.0 <= fVar20) {
                uVar2 = (int16_t)(int)(fVar20 * 32767.0);
              }
              else {
                uVar2 = 0x8000;
              }
            }
            else {
              uVar2 = 0x7fff;
            }
            *puVar6 = uVar2;
            fVar19 = ((float)(int)psVar8[1] * fVar21 + (float)(int)psVar13[1] * fVar22) *
                     3.051851e-05;
            fVar20 = fVar19 * param_10 + pfVar14[1];
            pfVar15[1] = fVar19 * param_8 + pfVar14[1] * param_9;
            if (fVar20 <= 1.0) {
              if (-1.0 <= fVar20) {
                uVar2 = (int16_t)(int)(fVar20 * 32767.0);
              }
              else {
                uVar2 = 0x8000;
              }
            }
            else {
              uVar2 = 0x7fff;
            }
            puVar6[1] = uVar2;
            fVar19 = ((float)(int)psVar8[2] * fVar21 + (float)(int)psVar13[2] * fVar22) *
                     3.051851e-05;
            fVar20 = fVar19 * param_10 + pfVar14[2];
            pfVar15[2] = fVar19 * param_8 + pfVar14[2] * param_9;
            if (fVar20 <= 1.0) {
              if (-1.0 <= fVar20) {
                uVar2 = (int16_t)(int)(fVar20 * 32767.0);
              }
              else {
                uVar2 = 0x8000;
              }
            }
            else {
              uVar2 = 0x7fff;
            }
            puVar6[2] = uVar2;
            fVar19 = ((float)(int)psVar8[3] * fVar21 + (float)(int)psVar13[3] * fVar22) *
                     3.051851e-05;
            fVar20 = fVar19 * param_10 + pfVar14[3];
            pfVar15[3] = fVar19 * param_8 + pfVar14[3] * param_9;
            if (fVar20 <= 1.0) {
              if (-1.0 <= fVar20) {
                uVar2 = (int16_t)(int)(fVar20 * 32767.0);
              }
              else {
                uVar2 = 0x8000;
              }
            }
            else {
              uVar2 = 0x7fff;
            }
            puVar6[3] = uVar2;
            psVar13 = psVar13 + 4;
            puVar6 = puVar6 + 4;
            psVar8 = psVar8 + 4;
            pfVar15 = pfVar15 + 4;
            pfVar14 = pfVar14 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        if (iVar10 < param_12) {
          uVar9 = (uint64_t)(uint)(param_12 - iVar10);
          do {
            fVar21 = ((float)(int)*psVar8 * (1.0 - fVar22) + (float)(int)*psVar13 * fVar22) *
                     3.051851e-05;
            fVar19 = fVar21 * param_10 + *pfVar14;
            *pfVar15 = fVar21 * param_8 + *pfVar14 * param_9;
            if (fVar19 <= 1.0) {
              if (-1.0 <= fVar19) {
                uVar2 = (int16_t)(int)(fVar19 * 32767.0);
              }
              else {
                uVar2 = 0x8000;
              }
            }
            else {
              uVar2 = 0x7fff;
            }
            *puVar6 = uVar2;
            psVar13 = psVar13 + 1;
            puVar6 = puVar6 + 1;
            psVar8 = psVar8 + 1;
            pfVar15 = pfVar15 + 1;
            pfVar14 = pfVar14 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        for (iVar12 = iVar12 + 1; iVar12 < 0; iVar12 = iVar12 + param_7) {
        }
        for (; (int)param_7 <= iVar12; iVar12 = iVar12 - param_7) {
        }
        for (iVar11 = iVar11 + 1; iVar11 < 0; iVar11 = iVar11 + param_7) {
        }
        for (; (int)param_7 <= iVar11; iVar11 = iVar11 - param_7) {
        }
        for (iVar18 = iVar18 + 1; iVar18 < 0; iVar18 = iVar18 + param_7) {
        }
        for (; (int)param_7 <= iVar18; iVar18 = iVar18 - param_7) {
        }
        uVar16 = uVar16 - 1;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    iVar5 = iVar5 - uVar7;
  }
  *param_5 = iVar11;
  *param_6 = iVar18;
  *param_14 = iVar12;
  *param_13 = uVar16;
  *param_3 = pfVar14;
  *param_2 = (int64_t)pfVar15;
  *param_11 = iVar5;
  return 0;
}
uint64_t SystemCore_76362(int param_1,uint64_t param_2,uint64_t param_3,uint param_4)
{
  uint uVar1;
  int16_t uVar2;
  uint uVar3;
  uint uVar4;
  int16_t *puVar5;
  short *psVar6;
  uint uVar7;
  uint64_t uVar8;
  int iVar9;
  int unaff_ESI;
  int unaff_EDI;
  short *psVar10;
  float *in_R10;
  float *in_R11;
  uint unaff_R12D;
  uint64_t uVar11;
  int unaff_R14D;
  int unaff_R15D;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int unaff_retaddr;
  int64_t *local_var_d8;
  uint64_t *local_var_e0;
  int64_t local_var_e8;
  int *local_var_f0;
  int *local_var_f8;
  uint local_var_100;
  float local_var_108;
  float local_var_110;
  float local_var_118;
  int *local_var_120;
  uint *local_var_130;
  int *local_var_138;
  do {
    if (unaff_R12D == 0) break;
    uVar7 = param_4;
    if ((uint)(unaff_EDI + param_1) < param_4) {
      uVar7 = unaff_EDI + param_1;
    }
    uVar3 = param_4;
    if ((uint)(unaff_ESI + param_1) < param_4) {
      uVar3 = unaff_ESI + param_1;
    }
    uVar4 = param_4;
    if ((uint)(unaff_R14D + param_1) < param_4) {
      uVar4 = unaff_R14D + param_1;
    }
    uVar1 = uVar3 - unaff_ESI;
    if (uVar7 - unaff_EDI < uVar3 - unaff_ESI) {
      uVar1 = uVar7 - unaff_EDI;
    }
    uVar7 = unaff_R12D;
    if (uVar4 - unaff_R14D < unaff_R12D) {
      uVar7 = uVar4 - unaff_R14D;
    }
    if (uVar1 < uVar7) {
      uVar7 = uVar1;
    }
    psVar6 = (short *)(local_var_e8 + (uint64_t)(uint)(unaff_ESI * unaff_R15D) * 2);
    puVar5 = (int16_t *)(local_var_e8 + (uint64_t)(uint)(unaff_R14D * unaff_R15D) * 2);
    psVar10 = (short *)(local_var_e8 + (uint64_t)(uint)(unaff_EDI * unaff_R15D) * 2);
    if (uVar7 != 0) {
      uVar11 = (uint64_t)uVar7;
      do {
        iVar9 = 0;
        fVar15 = (float)unaff_R12D * 0.00048828125;
        if (3 < unaff_R15D) {
          fVar14 = 1.0 - fVar15;
          uVar3 = (unaff_R15D - 4U >> 2) + 1;
          uVar8 = (uint64_t)uVar3;
          iVar9 = uVar3 * 4;
          do {
            fVar12 = ((float)(int)*psVar6 * fVar14 + (float)(int)*psVar10 * fVar15) * 3.051851e-05;
            fVar13 = fVar12 * local_var_118 + *in_R10;
            *in_R11 = fVar12 * local_var_108 + *in_R10 * local_var_110;
            if (fVar13 <= 1.0) {
              if (-1.0 <= fVar13) {
                uVar2 = (int16_t)(int)(fVar13 * 32767.0);
              }
              else {
                uVar2 = 0x8000;
              }
            }
            else {
              uVar2 = 0x7fff;
            }
            *puVar5 = uVar2;
            fVar12 = ((float)(int)psVar6[1] * fVar14 + (float)(int)psVar10[1] * fVar15) *
                     3.051851e-05;
            fVar13 = fVar12 * local_var_118 + in_R10[1];
            in_R11[1] = fVar12 * local_var_108 + in_R10[1] * local_var_110;
            if (fVar13 <= 1.0) {
              if (-1.0 <= fVar13) {
                uVar2 = (int16_t)(int)(fVar13 * 32767.0);
              }
              else {
                uVar2 = 0x8000;
              }
            }
            else {
              uVar2 = 0x7fff;
            }
            puVar5[1] = uVar2;
            fVar12 = ((float)(int)psVar6[2] * fVar14 + (float)(int)psVar10[2] * fVar15) *
                     3.051851e-05;
            fVar13 = fVar12 * local_var_118 + in_R10[2];
            in_R11[2] = fVar12 * local_var_108 + in_R10[2] * local_var_110;
            if (fVar13 <= 1.0) {
              if (-1.0 <= fVar13) {
                uVar2 = (int16_t)(int)(fVar13 * 32767.0);
              }
              else {
                uVar2 = 0x8000;
              }
            }
            else {
              uVar2 = 0x7fff;
            }
            puVar5[2] = uVar2;
            fVar12 = ((float)(int)psVar6[3] * fVar14 + (float)(int)psVar10[3] * fVar15) *
                     3.051851e-05;
            fVar13 = fVar12 * local_var_118 + in_R10[3];
            in_R11[3] = fVar12 * local_var_108 + in_R10[3] * local_var_110;
            if (fVar13 <= 1.0) {
              if (-1.0 <= fVar13) {
                uVar2 = (int16_t)(int)(fVar13 * 32767.0);
              }
              else {
                uVar2 = 0x8000;
              }
            }
            else {
              uVar2 = 0x7fff;
            }
            puVar5[3] = uVar2;
            psVar10 = psVar10 + 4;
            puVar5 = puVar5 + 4;
            psVar6 = psVar6 + 4;
            in_R11 = in_R11 + 4;
            in_R10 = in_R10 + 4;
            uVar8 = uVar8 - 1;
            param_4 = local_var_100;
          } while (uVar8 != 0);
        }
        if (iVar9 < unaff_R15D) {
          uVar8 = (uint64_t)(uint)(unaff_R15D - iVar9);
          do {
            fVar14 = ((float)(int)*psVar6 * (1.0 - fVar15) + (float)(int)*psVar10 * fVar15) *
                     3.051851e-05;
            fVar12 = fVar14 * local_var_118 + *in_R10;
            *in_R11 = fVar14 * local_var_108 + *in_R10 * local_var_110;
            if (fVar12 <= 1.0) {
              if (-1.0 <= fVar12) {
                uVar2 = (int16_t)(int)(fVar12 * 32767.0);
              }
              else {
                uVar2 = 0x8000;
              }
            }
            else {
              uVar2 = 0x7fff;
            }
            *puVar5 = uVar2;
            psVar10 = psVar10 + 1;
            puVar5 = puVar5 + 1;
            psVar6 = psVar6 + 1;
            in_R11 = in_R11 + 1;
            in_R10 = in_R10 + 1;
            uVar8 = uVar8 - 1;
            param_4 = local_var_100;
          } while (uVar8 != 0);
        }
        for (unaff_EDI = unaff_EDI + 1; unaff_EDI < 0; unaff_EDI = unaff_EDI + param_4) {
        }
        for (; (int)param_4 <= unaff_EDI; unaff_EDI = unaff_EDI - param_4) {
        }
        for (unaff_ESI = unaff_ESI + 1; unaff_ESI < 0; unaff_ESI = unaff_ESI + param_4) {
        }
        for (; (int)param_4 <= unaff_ESI; unaff_ESI = unaff_ESI - param_4) {
        }
        for (unaff_R14D = unaff_R14D + 1; unaff_R14D < 0; unaff_R14D = unaff_R14D + param_4) {
        }
        for (; (int)param_4 <= unaff_R14D; unaff_R14D = unaff_R14D - param_4) {
        }
        unaff_R12D = unaff_R12D - 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    param_1 = unaff_retaddr - uVar7;
    unaff_retaddr = param_1;
  } while (param_1 != 0);
  *local_var_f0 = unaff_ESI;
  *local_var_f8 = unaff_R14D;
  *local_var_138 = unaff_EDI;
  *local_var_130 = unaff_R12D;
  *local_var_e0 = in_R10;
  *local_var_d8 = (int64_t)in_R11;
  *local_var_120 = param_1;
  return 0;
}
uint64_t
SystemCore_76840(int32_t param_1,uint64_t *param_2,int32_t *param_3,int32_t *param_4)
{
  uint64_t *in_RAX;
  int32_t *unaff_RBX;
  int32_t *unaff_RBP;
  int32_t unaff_ESI;
  int32_t unaff_EDI;
  uint64_t in_R10;
  uint64_t in_R11;
  int32_t unaff_R12D;
  int32_t *unaff_R13;
  int32_t unaff_R14D;
  *unaff_RBP = unaff_ESI;
  *unaff_R13 = unaff_R14D;
  *param_4 = unaff_EDI;
  *unaff_RBX = unaff_R12D;
  *in_RAX = in_R10;
  *param_2 = in_R11;
  *param_3 = param_1;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_76880(int64_t param_1,uint param_2)
{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  iVar2 = *(int *)(*(int64_t *)(param_1 + 0xa8) + 0x6d0);
  if (param_2 == 0) {
    param_2 = (int)(int64_t)(*(float *)(param_1 + 0x218) * 0.001 * (float)iVar2 + 0.5) + 7U &
              0xfffffff8;
  }
  *(uint *)(param_1 + 0x250) = param_2;
  uVar1 = iVar2 / 2;
  uVar1 = ((uVar1 + 0x7f + param_2) / uVar1) * uVar1 + 7 & 0xfffffff8;
  *(uint *)(param_1 + 0x24c) = uVar1;
  iVar2 = uVar1 * *(int *)(param_1 + 0x26c);
  *(int *)(param_1 + 0x248) = iVar2;
  if (*(int64_t *)(param_1 + 0x240) != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x240),
                  &processed_var_4256_ptr,0x259,1);
  }
  iVar2 = iVar2 * 2;
  *(int *)(param_1 + 0x248) = iVar2;
  lVar3 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar2 + 0x10,&processed_var_4256_ptr,0x262,0)
  ;
  *(int64_t *)(param_1 + 0x240) = lVar3;
  *(uint64_t *)(param_1 + 0x238) = lVar3 + 0xfU & 0xfffffffffffffff0;
  if (lVar3 == 0) {
    *(uint64_t *)(param_1 + 0x248) = 0;
    return 0x26;
  }
  *(int32_t *)(param_1 + 0x1c0) = *(int32_t *)(param_1 + 0x26c);
  return 0;
}
uint64_t SystemCore_769b0(int64_t param_1)
{
  uint uVar1;
  uVar1 = *(uint *)(param_1 + 0x250);
  if (uVar1 == 0) {
    uVar1 = (int)(int64_t)
                 ((float)*(int *)(*(int64_t *)(param_1 + 0xa8) + 0x6d0) *
                  *(float *)(param_1 + 0x218) * 0.001 + 0.5) + 7U & 0xfffffff8;
    *(uint *)(param_1 + 0x250) = uVar1;
  }
  *(uint *)(param_1 + 0x254) = uVar1;
  *(int32_t *)(param_1 + 600) = 0;
  *(int32_t *)(param_1 + 0x260) = 0;
  if (*(int64_t *)(param_1 + 0x238) != 0) {
// WARNING: Subroutine does not return
    memset(*(int64_t *)(param_1 + 0x238),0,*(int32_t *)(param_1 + 0x248));
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_76a50(int64_t *param_1)
{
  if (*(int64_t *)(*param_1 + 0x2e8) != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(*param_1 + 0x2e8),
                  &processed_var_5616_ptr,0xde,1);
  }
  return 0;
}
uint64_t SystemCore_76b00(int64_t *param_1,uint param_2,int32_t *param_3,int64_t param_4)
{
  int64_t lVar1;
  float fVar2;
  lVar1 = *param_1;
  if (param_2 == 0x10) {
    *param_3 = *(int32_t *)(lVar1 + 0x21c);
    if (param_4 != 0) {
      fVar2 = *(float *)(lVar1 + 0x21c);
LAB_180776b4b:
// WARNING: Subroutine does not return
      SystemValidationProcessor(param_4,0x20,&rendering_buffer_2048_ptr,(double)fVar2);
    }
  }
  else if (param_2 < 0x10) {
    *param_3 = *(int32_t *)(lVar1 + 0x260 + (int64_t)(int)param_2 * 4);
    if (param_4 != 0) {
      fVar2 = *(float *)(lVar1 + 0x260 + (int64_t)(int)param_2 * 4);
      goto LAB_180776b4b;
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_76b70(int64_t param_1)
{
  int *piVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  lVar3 = *(int64_t *)(param_1 + 0xe8);
  piVar1 = (int *)(param_1 + 0x33c);
  *piVar1 = 0;
  iVar5 = 0;
  if (0 < *(int *)(lVar3 + 0x60)) {
    lVar4 = 0;
    do {
      uVar2 = SystemFunction_000180762a70(param_1,iVar5,
                                  *(int32_t *)
                                   (*(int64_t *)(*(int64_t *)(lVar3 + 0x68) + lVar4) + 0x38));
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      lVar3 = *(int64_t *)(param_1 + 0xe8);
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar5 < *(int *)(lVar3 + 0x60));
  }
  fVar7 = *(float *)(param_1 + 0x21c);
  *(float *)(param_1 + 0x218) = fVar7;
  iVar5 = *(int *)(*(int64_t *)(param_1 + 0xa8) + 0x6d0);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *(int *)(*(int64_t *)(param_1 + 0xa8) + 0x6d4);
    fVar7 = *(float *)(param_1 + 0x218);
  }
  fVar6 = *(float *)(param_1 + 0x260);
  if (fVar7 <= *(float *)(param_1 + 0x260)) {
    fVar6 = fVar7;
  }
  fVar8 = (float)iVar5;
  *(float *)(param_1 + 0x220) = fVar6;
  *(int *)(param_1 + 0x2a0) = (int)(fVar8 * fVar6 * 0.001 + 0.5);
  fVar7 = *(float *)(param_1 + 0x264);
  if (*(float *)(param_1 + 0x218) <= *(float *)(param_1 + 0x264)) {
    fVar7 = *(float *)(param_1 + 0x218);
  }
  *(float *)(param_1 + 0x224) = fVar7;
  *(int *)(param_1 + 0x2a4) = (int)(fVar8 * fVar7 * 0.001 + 0.5);
  fVar7 = *(float *)(param_1 + 0x268);
  if (*(float *)(param_1 + 0x218) <= *(float *)(param_1 + 0x268)) {
    fVar7 = *(float *)(param_1 + 0x218);
  }
  *(float *)(param_1 + 0x228) = fVar7;
  *(int *)(param_1 + 0x2a8) = (int)(fVar8 * fVar7 * 0.001 + 0.5);
  fVar7 = *(float *)(param_1 + 0x26c);
  if (*(float *)(param_1 + 0x218) <= *(float *)(param_1 + 0x26c)) {
    fVar7 = *(float *)(param_1 + 0x218);
  }
  *(float *)(param_1 + 0x22c) = fVar7;
  *(int *)(param_1 + 0x2ac) = (int)(fVar8 * fVar7 * 0.001 + 0.5);
  fVar7 = *(float *)(param_1 + 0x270);
  if (*(float *)(param_1 + 0x218) <= *(float *)(param_1 + 0x270)) {
    fVar7 = *(float *)(param_1 + 0x218);
  }
  *(float *)(param_1 + 0x230) = fVar7;
  *(int *)(param_1 + 0x2b0) = (int)(fVar7 * fVar8 * 0.001 + 0.5);
  fVar7 = *(float *)(param_1 + 0x274);
  if (*(float *)(param_1 + 0x218) <= *(float *)(param_1 + 0x274)) {
    fVar7 = *(float *)(param_1 + 0x218);
  }
  *(float *)(param_1 + 0x234) = fVar7;
  *(int *)(param_1 + 0x2b4) = (int)(fVar7 * fVar8 * 0.001 + 0.5);
  fVar7 = *(float *)(param_1 + 0x278);
  if (*(float *)(param_1 + 0x218) <= *(float *)(param_1 + 0x278)) {
    fVar7 = *(float *)(param_1 + 0x218);
  }
  *(float *)(param_1 + 0x238) = fVar7;
  *(int *)(param_1 + 0x2b8) = (int)(fVar7 * fVar8 * 0.001 + 0.5);
  fVar7 = *(float *)(param_1 + 0x27c);
  if (*(float *)(param_1 + 0x218) <= *(float *)(param_1 + 0x27c)) {
    fVar7 = *(float *)(param_1 + 0x218);
  }
  *(float *)(param_1 + 0x23c) = fVar7;
  *(int *)(param_1 + 700) = (int)(fVar7 * fVar8 * 0.001 + 0.5);
  fVar7 = *(float *)(param_1 + 0x280);
  if (*(float *)(param_1 + 0x218) <= *(float *)(param_1 + 0x280)) {
    fVar7 = *(float *)(param_1 + 0x218);
  }
  *(float *)(param_1 + 0x240) = fVar7;
  *(int *)(param_1 + 0x2c0) = (int)(fVar7 * fVar8 * 0.001 + 0.5);
  fVar7 = *(float *)(param_1 + 0x284);
  if (*(float *)(param_1 + 0x218) <= *(float *)(param_1 + 0x284)) {
    fVar7 = *(float *)(param_1 + 0x218);
  }
  *(float *)(param_1 + 0x244) = fVar7;
  *(int *)(param_1 + 0x2c4) = (int)(fVar7 * fVar8 * 0.001 + 0.5);
  fVar7 = *(float *)(param_1 + 0x288);
  if (*(float *)(param_1 + 0x218) <= *(float *)(param_1 + 0x288)) {
    fVar7 = *(float *)(param_1 + 0x218);
  }
  *(float *)(param_1 + 0x248) = fVar7;
  *(int *)(param_1 + 0x2c8) = (int)(fVar7 * fVar8 * 0.001 + 0.5);
  fVar7 = *(float *)(param_1 + 0x28c);
  if (*(float *)(param_1 + 0x218) <= *(float *)(param_1 + 0x28c)) {
    fVar7 = *(float *)(param_1 + 0x218);
  }
  *(float *)(param_1 + 0x24c) = fVar7;
  *(int *)(param_1 + 0x2cc) = (int)(fVar7 * fVar8 * 0.001 + 0.5);
  fVar7 = *(float *)(param_1 + 0x290);
  if (*(float *)(param_1 + 0x218) <= *(float *)(param_1 + 0x290)) {
    fVar7 = *(float *)(param_1 + 0x218);
  }
  *(float *)(param_1 + 0x250) = fVar7;
  *(int *)(param_1 + 0x2d0) = (int)(fVar7 * fVar8 * 0.001 + 0.5);
  fVar7 = *(float *)(param_1 + 0x294);
  if (*(float *)(param_1 + 0x218) <= *(float *)(param_1 + 0x294)) {
    fVar7 = *(float *)(param_1 + 0x218);
  }
  *(float *)(param_1 + 0x254) = fVar7;
  *(int *)(param_1 + 0x2d4) = (int)(fVar7 * fVar8 * 0.001 + 0.5);
  fVar7 = *(float *)(param_1 + 0x298);
  if (*(float *)(param_1 + 0x218) <= *(float *)(param_1 + 0x298)) {
    fVar7 = *(float *)(param_1 + 0x218);
  }
  *(float *)(param_1 + 600) = fVar7;
  *(int *)(param_1 + 0x2d8) = (int)(fVar7 * fVar8 * 0.001 + 0.5);
  fVar7 = *(float *)(param_1 + 0x29c);
  if (*(float *)(param_1 + 0x218) <= *(float *)(param_1 + 0x29c)) {
    fVar7 = *(float *)(param_1 + 0x218);
  }
  *(float *)(param_1 + 0x25c) = fVar7;
  *(int *)(param_1 + 0x2dc) = (int)(fVar7 * fVar8 * 0.001 + 0.5);
  iVar5 = (int)(fVar8 * *(float *)(param_1 + 0x218) * 0.001 + 0.5) + 1;
  *(int *)(param_1 + 0x2f4) = iVar5;
  if (*(int64_t *)(param_1 + 0x2e8) == 0) {
    iVar5 = iVar5 * *piVar1;
    *(int *)(param_1 + 0x2f0) = iVar5;
    iVar5 = iVar5 * 4;
    *(int *)(param_1 + 0x2f0) = iVar5;
    lVar3 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar5 + 0x10,&processed_var_5616_ptr,0xba,0
                         );
    *(int64_t *)(param_1 + 0x2e8) = lVar3;
    *(uint64_t *)(param_1 + 0x2e0) = lVar3 + 0xfU & 0xfffffffffffffff0;
    if (lVar3 == 0) {
      uVar2 = 0x26;
    }
    else {
      SystemCore_786c0(param_1);
      uVar2 = 0;
    }
    return uVar2;
  }
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x2e8),
                &processed_var_5616_ptr,0xae,1);
}
// 函数: void SystemCore_77010(void)
void SystemCore_77010(void)
{
// WARNING: Subroutine does not return
  memset(0x180c0d154,0,0x5c);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address