#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part080.c - 3 个函数

// 函数: void FUN_18010e8a0(ulonglong param_1,ulonglong param_2)
void FUN_18010e8a0(ulonglong param_1,ulonglong param_2)

{
  uint64_t *puVar1;
  float *pfVar2;
  uint64_t uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint64_t uStackX_18;
  float fStackX_20;
  float fStackX_24;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  
  lVar11 = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lVar10 = *(longlong *)(lVar11 + 0x1af8);
  if (*(char *)(lVar10 + 0xb4) != '\0') {
    return;
  }
  if (param_2 == 0) {
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (*(char *)(param_1 + lVar9) != '\0');
    param_2 = lVar9 + param_1;
  }
  fVar18 = *(float *)(lVar10 + 0x1b0);
  fVar17 = *(float *)(lVar10 + 0x100);
  fVar23 = *(float *)(lVar10 + 0x128) + *(float *)(lVar10 + 0x104);
  if ((longlong)(param_2 - param_1) < 0x7d1) {
    if (0.0 <= fVar18) goto LAB_18010ecde;
  }
  else {
    if (0.0 > fVar18) {
      uStack_d8 = *(uint64_t *)(lVar10 + 0x228);
      uStack_d0 = *(uint64_t *)(lVar10 + 0x230);
      fVar18 = *(float *)(lVar11 + 0x19f8);
      fVar22 = 0.0;
      fStackX_20 = 0.0;
      fStackX_24 = 0.0;
      if (fVar23 <= *(float *)(lVar10 + 0x234)) {
        uStackX_18 = CONCAT44(fVar23,fVar17);
        iVar13 = 0;
        fVar19 = fVar23;
        if (*(char *)(lVar11 + 0x2e38) == '\0') {
          uStackX_18 = CONCAT44(fVar23,fVar17);
          iVar14 = (int)((*(float *)(lVar10 + 0x22c) - fVar23) / fVar18);
          if (0 < iVar14) {
            iVar12 = iVar13;
            iVar4 = 0;
            if (param_1 < param_2) {
              do {
                iVar12 = iVar4;
                if (iVar14 <= iVar12) break;
                param_1 = memchr(param_1,10,param_2 - param_1);
                if (param_1 == 0) {
                  param_1 = param_2;
                }
                iVar12 = iVar12 + 1;
                param_1 = param_1 + 1;
                iVar4 = iVar12;
              } while (param_1 < param_2);
            }
            fVar19 = (float)iVar12 * fVar18 + fVar23;
            uStackX_18 = CONCAT44(fVar19,(int32_t)uStackX_18);
          }
        }
        if (param_1 < param_2) {
          fVar21 = fVar19;
          fVar20 = fVar19;
          do {
            fVar21 = fVar21 + fVar18;
            lVar10 = *(longlong *)(lVar11 + 0x1af8);
            if (((((fVar21 < *(float *)(lVar10 + 0x22c) || fVar21 == *(float *)(lVar10 + 0x22c)) ||
                  (*(float *)(lVar10 + 0x234) <= fVar19)) ||
                 (fVar17 + 3.4028235e+38 < *(float *)(lVar10 + 0x228) ||
                  fVar17 + 3.4028235e+38 == *(float *)(lVar10 + 0x228))) ||
                (*(float *)(lVar10 + 0x230) <= fVar17)) && (*(char *)(lVar11 + 0x2e38) == '\0'))
            break;
            uVar7 = memchr(param_1,10,param_2 - param_1);
            pfVar2 = *(float **)(lVar11 + 0x19f0);
            fVar16 = *(float *)(lVar11 + 0x19f8);
            if (uVar7 == 0) {
              uVar7 = param_2;
            }
            if (param_1 == uVar7) {
              fVar16 = 0.0;
            }
            else {
              FUN_180297340(pfVar2,&uStack_d8,fVar16,0x7f7fffff,0xbf800000,param_1,uVar7,0);
              fVar15 = (float)uStack_d8;
              if (0.0 < (float)uStack_d8) {
                fVar15 = (float)uStack_d8 - fVar16 / *pfVar2;
              }
              fVar16 = (float)(int)(fVar15 + 0.95);
              uStack_d8 = CONCAT44(uStack_d8._4_4_,fVar16);
            }
            if (fVar22 < fVar16) {
              fVar22 = fVar16;
              fStackX_20 = fVar16;
            }
            FUN_180122320(uStackX_18,param_1,uVar7,0);
            fVar20 = fVar20 + fVar18;
            param_1 = uVar7 + 1;
            fVar19 = fVar19 + fVar18;
            uStackX_18 = CONCAT44(fVar20,(int32_t)uStackX_18);
            lVar11 = SYSTEM_DATA_MANAGER_A;
          } while (param_1 < param_2);
          for (; param_1 < param_2; param_1 = param_1 + 1) {
            param_1 = memchr(param_1,10,param_2 - param_1);
            if (param_1 == 0) {
              param_1 = param_2;
            }
            iVar13 = iVar13 + 1;
          }
          fVar19 = fVar20 + (float)iVar13 * fVar18;
        }
        fStackX_24 = fVar19 - fVar23;
      }
      fVar18 = fVar23 + fStackX_24;
      fVar22 = fVar17 + fVar22;
      func_0x000180124080(&fStackX_20,0);
      lVar10 = *(longlong *)(lVar11 + 0x1af8);
      *(uint64_t *)(lVar10 + 0x144) = 0;
      *(float *)(lVar10 + 0x14c) = fVar17;
      *(float *)(lVar10 + 0x150) = fVar23;
      *(float *)(lVar10 + 0x154) = fVar22;
      *(float *)(lVar10 + 0x158) = fVar18;
      lVar9 = *(longlong *)(lVar11 + 0x1af8);
      uStack_d8 = CONCAT44(fVar23,fVar17);
      uStack_d0 = CONCAT44(fVar18,fVar22);
      if ((((fVar18 < *(float *)(lVar9 + 0x22c) || fVar18 == *(float *)(lVar9 + 0x22c)) ||
           (*(float *)(lVar9 + 0x234) <= fVar23)) ||
          ((fVar22 < *(float *)(lVar9 + 0x228) || fVar22 == *(float *)(lVar9 + 0x228) ||
           (*(float *)(lVar9 + 0x230) <= fVar17)))) && (*(char *)(lVar11 + 0x2e38) == '\0')) {
        return;
      }
      cVar5 = FUN_180128040(&uStack_d8,&uStack_d0,1);
      if (cVar5 == '\0') {
        return;
      }
      *(uint *)(lVar10 + 0x148) = *(uint *)(lVar10 + 0x148) | 1;
      return;
    }
LAB_18010ecde:
    if (0.0 <= fVar18) {
      if (fVar18 == 0.0) {
        lVar9 = *(longlong *)(lVar10 + 0x210);
        fVar18 = *(float *)(lVar10 + 0x278) - *(float *)(lVar10 + 0x40);
        if (lVar9 != 0) {
          iVar13 = *(int *)(lVar9 + 0xc) + 1;
          iVar14 = *(int *)(lVar9 + 0xc);
          if (-1 < iVar13) {
            iVar14 = iVar13;
          }
          fVar18 = ((*(float *)(lVar9 + 0x18) - *(float *)(lVar9 + 0x14)) *
                    *(float *)((longlong)iVar14 * 0x1c + *(longlong *)(lVar9 + 0x38)) +
                   *(float *)(lVar9 + 0x14)) - *(float *)(lVar10 + 0x70);
        }
        fVar18 = (fVar18 + *(float *)(lVar10 + 0x40)) - fVar17;
        if (fVar18 <= 1.0) {
          fVar18 = 1.0;
        }
      }
      else {
        if (0.0 < fVar18) {
          fVar18 = (*(float *)(lVar10 + 0x40) - *(float *)(lVar10 + 0x8c)) + fVar18;
        }
        fVar18 = fVar18 - fVar17;
        if (fVar18 <= 1.0) {
          fVar18 = 1.0;
        }
      }
      goto LAB_18010ed80;
    }
  }
  fVar18 = 0.0;
LAB_18010ed80:
  pfVar2 = *(float **)(lVar11 + 0x19f0);
  fVar22 = *(float *)(lVar11 + 0x19f8);
  if (param_1 == param_2) {
    fVar19 = 0.0;
    fStackX_24 = fVar22;
  }
  else {
    FUN_180297340(pfVar2,&fStackX_20,fVar22,0x7f7fffff,fVar18,param_1,param_2,0);
    if (0.0 < fStackX_20) {
      fStackX_20 = fStackX_20 - fVar22 / *pfVar2;
    }
    fVar19 = (float)(int)(fStackX_20 + 0.95);
  }
  uStackX_18 = CONCAT44(fStackX_24,fVar19);
  fVar22 = fStackX_24 + fVar23;
  fVar19 = fVar19 + fVar17;
  func_0x000180124080(&uStackX_18,0);
  lVar10 = *(longlong *)(lVar11 + 0x1af8);
  *(uint64_t *)(lVar10 + 0x144) = 0;
  *(float *)(lVar10 + 0x14c) = fVar17;
  *(float *)(lVar10 + 0x150) = fVar23;
  *(float *)(lVar10 + 0x154) = fVar19;
  *(float *)(lVar10 + 0x158) = fVar22;
  lVar9 = *(longlong *)(lVar11 + 0x1af8);
  uStack_d8 = CONCAT44(fVar23,fVar17);
  uStack_d0 = CONCAT44(fVar22,fVar19);
  if ((((*(float *)(lVar9 + 0x22c) <= fVar22 && fVar22 != *(float *)(lVar9 + 0x22c)) &&
       (fVar23 < *(float *)(lVar9 + 0x234))) &&
      ((*(float *)(lVar9 + 0x228) <= fVar19 && fVar19 != *(float *)(lVar9 + 0x228) &&
       (fVar17 < *(float *)(lVar9 + 0x230))))) || (*(char *)(lVar11 + 0x2e38) != '\0')) {
    cVar5 = FUN_180128040(&uStack_d8,&uStack_d0,1);
    uVar3 = uStack_d8;
    if (cVar5 != '\0') {
      *(uint *)(lVar10 + 0x148) = *(uint *)(lVar10 + 0x148) | 1;
    }
    uStackX_18 = uStack_d8;
    if (param_2 == 0) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (*(char *)(param_1 + lVar10) != '\0');
      param_2 = lVar10 + param_1;
    }
    if (param_1 != param_2) {
      uStack_d8 = *(uint64_t *)(lVar11 + 0x16c8);
      lVar10 = *(longlong *)(*(longlong *)(lVar11 + 0x1af8) + 0x2e8);
      uStack_d0 = CONCAT44(*(float *)(lVar11 + 0x16d4) * *(float *)(lVar11 + 0x1628),
                           *(int32_t *)(lVar11 + 0x16d0));
      uVar6 = func_0x000180121e20(&uStack_d8);
      fVar17 = *(float *)(lVar11 + 0x19f8);
      lVar9 = *(longlong *)(lVar11 + 0x19f0);
      if ((uVar6 & 0xff000000) != 0) {
        uVar7 = param_2;
        if (param_2 == 0) {
          lVar8 = -1;
          do {
            lVar8 = lVar8 + 1;
          } while (*(char *)(param_1 + lVar8) != '\0');
          uVar7 = lVar8 + param_1;
        }
        if (param_1 != uVar7) {
          if (lVar9 == 0) {
            lVar9 = *(longlong *)(*(longlong *)(lVar10 + 0x38) + 8);
          }
          if (fVar17 == 0.0) {
            fVar17 = *(float *)(*(longlong *)(lVar10 + 0x38) + 0x10);
          }
          puVar1 = (uint64_t *)
                   (*(longlong *)(lVar10 + 0x68) + -0x10 + (longlong)*(int *)(lVar10 + 0x60) * 0x10)
          ;
          uStack_d8 = *puVar1;
          uStack_d0 = puVar1[1];
          FUN_180297590(lVar9,lVar10,fVar17,uVar3,uVar6,&uStack_d8,param_1,uVar7,fVar18,0);
        }
      }
      if (*(char *)(lVar11 + 0x2e38) != '\0') {
        FUN_18013c800(&uStackX_18,param_1,param_2);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18010e8e1(longlong param_1,longlong param_2)
void FUN_18010e8e1(longlong param_1,longlong param_2)

{
  uint64_t *puVar1;
  float fVar2;
  float *pfVar3;
  uint64_t uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong unaff_RBX;
  longlong lVar10;
  longlong lVar11;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  longlong in_R11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint64_t unaff_XMM6_Qa;
  uint64_t unaff_XMM6_Qb;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  float fVar20;
  int32_t unaff_XMM9_Dc;
  float fVar21;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM13_Da;
  float fVar22;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  int32_t unaff_XMM15_Da;
  int32_t unaff_XMM15_Dc;
  float fStack0000000000000050;
  int32_t uStack0000000000000054;
  uint64_t in_stack_00000058;
  int32_t in_stack_00000060;
  int32_t in_stack_00000068;
  int32_t in_stack_00000090;
  int32_t in_stack_00000098;
  int32_t in_stack_000000a0;
  int32_t in_stack_000000a8;
  int32_t in_stack_000000b0;
  int32_t in_stack_000000b8;
  int32_t in_stack_000000c0;
  int32_t in_stack_000000c8;
  
  *(uint64_t *)(in_R11 + -0x38) = unaff_XMM6_Qa;
  *(uint64_t *)(in_R11 + -0x30) = unaff_XMM6_Qb;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0xa8) = unaff_XMM13_Da;
  *(int32_t *)(in_R11 + -0xa4) = unaff_XMM13_Db;
  *(int32_t *)(in_R11 + -0xa0) = unaff_XMM13_Dc;
  *(int32_t *)(in_R11 + -0x9c) = unaff_XMM13_Dd;
  if (param_2 == 0) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (*(char *)(unaff_RDI + lVar10) != '\0');
    unaff_RBX = lVar10 + unaff_RDI;
  }
  fVar19 = *(float *)(param_1 + 0x1b0);
  fVar2 = *(float *)(param_1 + 0x100);
  fVar22 = *(float *)(param_1 + 0x128) + *(float *)(param_1 + 0x104);
  if ((longlong)(unaff_RBX - unaff_RDI) < 0x7d1) {
    if (fVar19 >= 0.0) goto LAB_18010ecde;
  }
  else {
    if (fVar19 < 0.0) {
      fVar20 = *(float *)(param_1 + 0x22c);
      _fStack0000000000000050 = *(uint64_t *)(param_1 + 0x228);
      fVar18 = *(float *)(param_1 + 0x234);
      in_stack_00000058 = *(uint64_t *)(param_1 + 0x230);
      fVar17 = 0.0;
      fVar19 = *(float *)(unaff_RSI + 0x19f8);
      fVar21 = 0.0;
      *(int32_t *)(unaff_RBP + 0x48) = 0;
      *(int32_t *)(unaff_RBP + 0x4c) = 0;
      if (fVar22 <= fVar18) {
        *(float *)(unaff_RBP + 0x40) = fVar2;
        *(float *)(unaff_RBP + 0x44) = fVar22;
        iVar13 = 0;
        fVar17 = fVar22;
        if (*(char *)(unaff_RSI + 0x2e38) == '\0') {
          *(float *)(unaff_RBP + 0x44) = fVar22;
          iVar14 = (int)((fVar20 - fVar22) / fVar19);
          if (0 < iVar14) {
            iVar12 = iVar13;
            iVar5 = 0;
            if (unaff_RDI < unaff_RBX) {
              do {
                iVar12 = iVar5;
                if (iVar14 <= iVar12) break;
                uVar8 = memchr(unaff_RDI,10,unaff_RBX - unaff_RDI);
                if (uVar8 == 0) {
                  uVar8 = unaff_RBX;
                }
                iVar12 = iVar12 + 1;
                unaff_RDI = uVar8 + 1;
                iVar5 = iVar12;
              } while (unaff_RDI < unaff_RBX);
            }
            fVar17 = (float)iVar12 * fVar19 + fVar22;
            *(float *)(unaff_RBP + 0x44) = fVar17;
          }
        }
        if (unaff_RDI < unaff_RBX) {
          fVar20 = fVar17;
          fVar18 = fVar17;
          in_stack_00000060 = unaff_XMM15_Da;
          in_stack_00000068 = unaff_XMM15_Dc;
          in_stack_00000090 = unaff_XMM12_Da;
          in_stack_00000098 = unaff_XMM12_Dc;
          in_stack_000000c0 = unaff_XMM9_Da;
          in_stack_000000c8 = unaff_XMM9_Dc;
          do {
            fVar20 = fVar20 + fVar19;
            lVar10 = *(longlong *)(unaff_RSI + 0x1af8);
            if (((((fVar20 < *(float *)(lVar10 + 0x22c) || fVar20 == *(float *)(lVar10 + 0x22c)) ||
                  (*(float *)(lVar10 + 0x234) <= fVar17)) ||
                 (fVar2 + 3.4028235e+38 < *(float *)(lVar10 + 0x228) ||
                  fVar2 + 3.4028235e+38 == *(float *)(lVar10 + 0x228))) ||
                (*(float *)(lVar10 + 0x230) <= fVar2)) && (*(char *)(unaff_RSI + 0x2e38) == '\0'))
            break;
            uVar8 = memchr(unaff_RDI,10,unaff_RBX - unaff_RDI);
            pfVar3 = *(float **)(unaff_RSI + 0x19f0);
            fVar16 = *(float *)(unaff_RSI + 0x19f8);
            if (uVar8 == 0) {
              uVar8 = unaff_RBX;
            }
            if (unaff_RDI == uVar8) {
              fVar16 = 0.0;
            }
            else {
              FUN_180297340(pfVar3,&stack0x00000050,fVar16,0x7f7fffff,0xbf800000);
              fVar15 = fStack0000000000000050;
              if (0.0 < fStack0000000000000050) {
                fVar15 = fStack0000000000000050 - fVar16 / *pfVar3;
              }
              fVar16 = (float)(int)(fVar15 + 0.95);
              _fStack0000000000000050 = CONCAT44(uStack0000000000000054,fVar16);
            }
            if (fVar21 < fVar16) {
              *(float *)(unaff_RBP + 0x48) = fVar16;
              fVar21 = fVar16;
            }
            FUN_180122320(*(uint64_t *)(unaff_RBP + 0x40),unaff_RDI,uVar8,0);
            unaff_RSI = SYSTEM_DATA_MANAGER_A;
            fVar18 = fVar18 + fVar19;
            unaff_RDI = uVar8 + 1;
            fVar17 = fVar17 + fVar19;
            *(float *)(unaff_RBP + 0x44) = fVar18;
          } while (unaff_RDI < unaff_RBX);
          while (unaff_RDI < unaff_RBX) {
            uVar8 = memchr(unaff_RDI,10,unaff_RBX - unaff_RDI);
            if (uVar8 == 0) {
              uVar8 = unaff_RBX;
            }
            iVar13 = iVar13 + 1;
            unaff_RDI = uVar8 + 1;
          }
          fVar17 = fVar18 + (float)iVar13 * fVar19;
        }
        fVar17 = fVar17 - fVar22;
        *(float *)(unaff_RBP + 0x4c) = fVar17;
      }
      fVar17 = fVar22 + fVar17;
      fVar21 = fVar2 + fVar21;
      func_0x000180124080(unaff_RBP + 0x48,0);
      lVar10 = *(longlong *)(unaff_RSI + 0x1af8);
      *(uint64_t *)(lVar10 + 0x144) = 0;
      *(float *)(lVar10 + 0x14c) = fVar2;
      *(float *)(lVar10 + 0x150) = fVar22;
      *(float *)(lVar10 + 0x154) = fVar21;
      *(float *)(lVar10 + 0x158) = fVar17;
      lVar11 = *(longlong *)(unaff_RSI + 0x1af8);
      _fStack0000000000000050 = CONCAT44(fVar22,fVar2);
      in_stack_00000058 = CONCAT44(fVar17,fVar21);
      if ((((fVar17 < *(float *)(lVar11 + 0x22c) || fVar17 == *(float *)(lVar11 + 0x22c)) ||
           (*(float *)(lVar11 + 0x234) <= fVar22)) ||
          ((fVar21 < *(float *)(lVar11 + 0x228) || fVar21 == *(float *)(lVar11 + 0x228) ||
           (*(float *)(lVar11 + 0x230) <= fVar2)))) && (*(char *)(unaff_RSI + 0x2e38) == '\0')) {
        return;
      }
      cVar6 = FUN_180128040(&stack0x00000050,&stack0x00000058,1);
      if (cVar6 == '\0') {
        return;
      }
      *(uint *)(lVar10 + 0x148) = *(uint *)(lVar10 + 0x148) | 1;
      return;
    }
LAB_18010ecde:
    if (0.0 <= fVar19) {
      if (fVar19 == 0.0) {
        lVar10 = *(longlong *)(param_1 + 0x210);
        fVar19 = *(float *)(param_1 + 0x278) - *(float *)(param_1 + 0x40);
        if (lVar10 != 0) {
          iVar13 = *(int *)(lVar10 + 0xc) + 1;
          iVar14 = *(int *)(lVar10 + 0xc);
          if (-1 < iVar13) {
            iVar14 = iVar13;
          }
          fVar19 = ((*(float *)(lVar10 + 0x18) - *(float *)(lVar10 + 0x14)) *
                    *(float *)((longlong)iVar14 * 0x1c + *(longlong *)(lVar10 + 0x38)) +
                   *(float *)(lVar10 + 0x14)) - *(float *)(param_1 + 0x70);
        }
        fVar19 = (fVar19 + *(float *)(param_1 + 0x40)) - fVar2;
        if (fVar19 <= 1.0) {
          fVar19 = 1.0;
        }
      }
      else {
        if (0.0 < fVar19) {
          fVar19 = (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x8c)) + fVar19;
        }
        fVar19 = fVar19 - fVar2;
        if (fVar19 <= 1.0) {
          fVar19 = 1.0;
        }
      }
      goto LAB_18010ed80;
    }
  }
  fVar19 = 0.0;
LAB_18010ed80:
  pfVar3 = *(float **)(unaff_RSI + 0x19f0);
  fVar20 = *(float *)(unaff_RSI + 0x19f8);
  if (unaff_RDI == unaff_RBX) {
    fVar19 = 0.0;
  }
  else {
    FUN_180297340(pfVar3,unaff_RBP + 0x48,fVar20,0x7f7fffff,fVar19);
    fVar19 = *(float *)(unaff_RBP + 0x48);
    if (0.0 < fVar19) {
      fVar19 = fVar19 - fVar20 / *pfVar3;
    }
    fVar20 = *(float *)(unaff_RBP + 0x4c);
    fVar19 = (float)(int)(fVar19 + 0.95);
  }
  *(float *)(unaff_RBP + 0x44) = fVar20;
  *(float *)(unaff_RBP + 0x40) = fVar19;
  fVar20 = fVar20 + fVar22;
  fVar19 = fVar19 + fVar2;
  func_0x000180124080(unaff_RBP + 0x40,0);
  lVar10 = *(longlong *)(unaff_RSI + 0x1af8);
  *(uint64_t *)(lVar10 + 0x144) = 0;
  *(float *)(lVar10 + 0x14c) = fVar2;
  *(float *)(lVar10 + 0x150) = fVar22;
  *(float *)(lVar10 + 0x154) = fVar19;
  *(float *)(lVar10 + 0x158) = fVar20;
  lVar11 = *(longlong *)(unaff_RSI + 0x1af8);
  _fStack0000000000000050 = CONCAT44(fVar22,fVar2);
  in_stack_00000058 = CONCAT44(fVar20,fVar19);
  if ((((*(float *)(lVar11 + 0x22c) <= fVar20 && fVar20 != *(float *)(lVar11 + 0x22c)) &&
       (fVar22 < *(float *)(lVar11 + 0x234))) &&
      ((*(float *)(lVar11 + 0x228) <= fVar19 && fVar19 != *(float *)(lVar11 + 0x228) &&
       (fVar2 < *(float *)(lVar11 + 0x230))))) || (*(char *)(unaff_RSI + 0x2e38) != '\0')) {
    cVar6 = FUN_180128040(&stack0x00000050,&stack0x00000058,1);
    uVar4 = _fStack0000000000000050;
    if (cVar6 != '\0') {
      *(uint *)(lVar10 + 0x148) = *(uint *)(lVar10 + 0x148) | 1;
    }
    lVar10 = *(longlong *)(unaff_RSI + 0x1af8);
    *(uint64_t *)(unaff_RBP + 0x40) = _fStack0000000000000050;
    if (unaff_RBX == 0) {
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (*(char *)(unaff_RDI + lVar11) != '\0');
      unaff_RBX = lVar11 + unaff_RDI;
    }
    if (unaff_RDI != unaff_RBX) {
      _fStack0000000000000050 = *(uint64_t *)(unaff_RSI + 0x16c8);
      lVar10 = *(longlong *)(lVar10 + 0x2e8);
      in_stack_00000058 =
           CONCAT44(*(float *)(unaff_RSI + 0x16d4) * *(float *)(unaff_RSI + 0x1628),
                    *(int32_t *)(unaff_RSI + 0x16d0));
      uVar7 = func_0x000180121e20(&stack0x00000050);
      fVar19 = *(float *)(unaff_RSI + 0x19f8);
      lVar11 = *(longlong *)(unaff_RSI + 0x19f0);
      if ((uVar7 & 0xff000000) != 0) {
        if (unaff_RBX == 0) {
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while (*(char *)(unaff_RDI + lVar9) != '\0');
          unaff_RBX = lVar9 + unaff_RDI;
        }
        if (unaff_RDI != unaff_RBX) {
          if (lVar11 == 0) {
            lVar11 = *(longlong *)(*(longlong *)(lVar10 + 0x38) + 8);
          }
          if (fVar19 == 0.0) {
            fVar19 = *(float *)(*(longlong *)(lVar10 + 0x38) + 0x10);
          }
          puVar1 = (uint64_t *)
                   (*(longlong *)(lVar10 + 0x68) + -0x10 + (longlong)*(int *)(lVar10 + 0x60) * 0x10)
          ;
          _fStack0000000000000050 = *puVar1;
          in_stack_00000058 = puVar1[1];
          FUN_180297590(lVar11,lVar10,fVar19,uVar4,uVar7);
        }
      }
      if (*(char *)(unaff_RSI + 0x2e38) != '\0') {
        FUN_18013c800(unaff_RBP + 0x40);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18010e97b(uint64_t param_1)
void FUN_18010e97b(uint64_t param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  longlong lVar8;
  ulonglong unaff_R12;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float in_XMM0_Dd;
  float fVar13;
  float fVar14;
  float unaff_XMM8_Da;
  int32_t unaff_XMM9_Da;
  float fVar15;
  int32_t unaff_XMM9_Dc;
  float fVar16;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Dc;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  int32_t unaff_XMM15_Da;
  int32_t unaff_XMM15_Dc;
  float fStack0000000000000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  int32_t in_stack_00000060;
  int32_t in_stack_00000068;
  int32_t in_stack_00000090;
  int32_t in_stack_00000098;
  int32_t in_stack_000000c0;
  int32_t in_stack_000000c8;
  
  fStack0000000000000050 = (float)param_1;
  fVar13 = 0.0;
  fVar1 = *(float *)(unaff_RSI + 0x19f8);
  fVar16 = 0.0;
  *(int32_t *)(unaff_RBP + 0x48) = 0;
  *(int32_t *)(unaff_RBP + 0x4c) = 0;
  cVar5 = (char)unaff_R12;
  if (unaff_XMM13_Da <= in_XMM0_Dd) {
    *(float *)(unaff_RBP + 0x40) = unaff_XMM14_Da;
    *(float *)(unaff_RBP + 0x44) = unaff_XMM13_Da;
    uVar10 = (uint)unaff_R12;
    fVar13 = unaff_XMM13_Da;
    if (*(char *)(unaff_RSI + 0x2e38) == cVar5) {
      *(float *)(unaff_RBP + 0x44) = unaff_XMM13_Da;
      iVar11 = (int)(((float)((ulonglong)param_1 >> 0x20) - unaff_XMM13_Da) / fVar1);
      if (0 < iVar11) {
        uVar7 = unaff_R12 & 0xffffffff;
        uVar9 = uVar10;
        if (unaff_RDI < unaff_RBX) {
          do {
            uVar9 = (uint)uVar7;
            if (iVar11 <= (int)uVar9) break;
            uVar6 = memchr(unaff_RDI,10,unaff_RBX - unaff_RDI);
            if (uVar6 == 0) {
              uVar6 = unaff_RBX;
            }
            uVar9 = uVar9 + 1;
            uVar7 = (ulonglong)uVar9;
            unaff_RDI = uVar6 + 1;
          } while (unaff_RDI < unaff_RBX);
        }
        fVar13 = (float)(int)uVar9 * fVar1 + unaff_XMM13_Da;
        *(float *)(unaff_RBP + 0x44) = fVar13;
      }
    }
    if (unaff_RDI < unaff_RBX) {
      fVar15 = fVar13;
      fVar14 = fVar13;
      in_stack_00000060 = unaff_XMM15_Da;
      in_stack_00000068 = unaff_XMM15_Dc;
      in_stack_00000090 = unaff_XMM12_Da;
      in_stack_00000098 = unaff_XMM12_Dc;
      in_stack_000000c0 = unaff_XMM9_Da;
      in_stack_000000c8 = unaff_XMM9_Dc;
      do {
        fVar15 = fVar15 + fVar1;
        lVar8 = *(longlong *)(unaff_RSI + 0x1af8);
        if (((((fVar15 < *(float *)(lVar8 + 0x22c) || fVar15 == *(float *)(lVar8 + 0x22c)) ||
              (*(float *)(lVar8 + 0x234) <= fVar13)) ||
             (unaff_XMM14_Da + 3.4028235e+38 < *(float *)(lVar8 + 0x228) ||
              unaff_XMM14_Da + 3.4028235e+38 == *(float *)(lVar8 + 0x228))) ||
            (*(float *)(lVar8 + 0x230) <= unaff_XMM14_Da)) &&
           (*(char *)(unaff_RSI + 0x2e38) == cVar5)) break;
        uVar7 = memchr(unaff_RDI,10,unaff_RBX - unaff_RDI);
        pfVar3 = *(float **)(unaff_RSI + 0x19f0);
        fVar2 = *(float *)(unaff_RSI + 0x19f8);
        if (uVar7 == 0) {
          uVar7 = unaff_RBX;
        }
        fVar12 = unaff_XMM8_Da;
        if (unaff_RDI != uVar7) {
          FUN_180297340(pfVar3,&stack0x00000050,fVar2,0x7f7fffff,0xbf800000);
          if (unaff_XMM8_Da < fStack0000000000000050) {
            fStack0000000000000050 = fStack0000000000000050 - fVar2 / *pfVar3;
          }
          fStack0000000000000050 = (float)(int)(fStack0000000000000050 + 0.95);
          fVar12 = fStack0000000000000050;
        }
        if (fVar16 < fVar12) {
          *(float *)(unaff_RBP + 0x48) = fVar12;
          fVar16 = fVar12;
        }
        FUN_180122320(*(uint64_t *)(unaff_RBP + 0x40),unaff_RDI,uVar7,0);
        unaff_RSI = SYSTEM_DATA_MANAGER_A;
        fVar14 = fVar14 + fVar1;
        unaff_RDI = uVar7 + 1;
        fVar13 = fVar13 + fVar1;
        *(float *)(unaff_RBP + 0x44) = fVar14;
      } while (unaff_RDI < unaff_RBX);
      uVar7 = unaff_R12 & 0xffffffff;
      while (unaff_RDI < unaff_RBX) {
        uVar6 = memchr(unaff_RDI,10,unaff_RBX - unaff_RDI);
        if (uVar6 == 0) {
          uVar6 = unaff_RBX;
        }
        uVar10 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar10;
        unaff_RDI = uVar6 + 1;
      }
      fVar13 = fVar14 + (float)(int)uVar10 * fVar1;
    }
    fVar13 = fVar13 - unaff_XMM13_Da;
    *(float *)(unaff_RBP + 0x4c) = fVar13;
  }
  fVar13 = unaff_XMM13_Da + fVar13;
  fVar16 = unaff_XMM14_Da + fVar16;
  func_0x000180124080(unaff_RBP + 0x48);
  lVar8 = *(longlong *)(unaff_RSI + 0x1af8);
  *(ulonglong *)(lVar8 + 0x144) = unaff_R12;
  *(float *)(lVar8 + 0x14c) = unaff_XMM14_Da;
  *(float *)(lVar8 + 0x150) = unaff_XMM13_Da;
  *(float *)(lVar8 + 0x154) = fVar16;
  *(float *)(lVar8 + 0x158) = fVar13;
  lVar4 = *(longlong *)(unaff_RSI + 0x1af8);
  if (((((*(float *)(lVar4 + 0x22c) <= fVar13 && fVar13 != *(float *)(lVar4 + 0x22c)) &&
        (unaff_XMM13_Da < *(float *)(lVar4 + 0x234))) &&
       ((*(float *)(lVar4 + 0x228) <= fVar16 && fVar16 != *(float *)(lVar4 + 0x228) &&
        (unaff_XMM14_Da < *(float *)(lVar4 + 0x230))))) || (*(char *)(unaff_RSI + 0x2e38) != cVar5))
     && (fStack0000000000000058 = fVar16, fStack000000000000005c = fVar13,
        cVar5 = FUN_180128040(&stack0x00000050,&stack0x00000058,1), cVar5 != '\0')) {
    *(uint *)(lVar8 + 0x148) = *(uint *)(lVar8 + 0x148) | 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



