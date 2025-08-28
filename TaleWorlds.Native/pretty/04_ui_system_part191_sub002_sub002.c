#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part191_sub002_sub002.c - 1 个函数

// 函数: void FUN_18077a570(void)
void FUN_18077a570(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c0d9b4,0,0x5c);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_18077a750(int64_t param_1,int64_t param_2,int64_t param_3,uint param_4,uint param_5,
             int *param_6)

{
  short *psVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint uVar8;
  uint uVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint uVar12;
  int64_t lVar13;
  int64_t lVar14;
  float *pfVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int64_t lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iStackX_8;
  uint uStackX_20;
  
  uVar3 = param_5;
  lVar11 = (int64_t)(int)param_5;
  if (*(uint *)(param_1 + 0x260) != param_5) {
    *(uint *)(param_1 + 0x260) = param_5;
    if (*(int64_t *)(param_1 + 0x230) != 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x230),
                    &processed_var_6400_ptr,0xdb,1);
    }
    func_0x000180746360(*(uint64_t *)(param_1 + 0xa8),&param_5,0);
    uVar8 = (uint)((int)((float)*(int *)(param_1 + 0x25c) * 40.0) / 1000) / param_5 + 1;
    if (uVar8 < 2) {
      uVar8 = 2;
    }
    *(uint *)(param_1 + 0x240) = uVar8 * param_5;
    iVar4 = uVar8 * param_5 * *(int *)(param_1 + 0x260) * 2;
    *(int *)(param_1 + 0x244) = iVar4;
    lVar5 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar4 + 0x10,&processed_var_6400_ptr,0xf2,0
                         );
    *(int64_t *)(param_1 + 0x230) = lVar5;
    if (lVar5 == 0) {
      return 0x26;
    }
    *(uint64_t *)(param_1 + 0x238) = lVar5 + 0xfU & 0xfffffffffffffff0;
    FUN_18077b040(param_1);
  }
  uVar8 = *(uint *)(param_1 + 0x240);
  fVar2 = (float)((int)(float)uVar8 + -1);
  if (param_2 != 0) {
    fVar20 = *(float *)(param_1 + 0x218);
    fVar22 = *(float *)(param_1 + 0x8264);
    if (((fVar20 != fVar22) || (*(float *)(param_1 + 0x8268) != *(float *)(param_1 + 0x21c))) ||
       (*(float *)(param_1 + 0x826c) != *(float *)(param_1 + 0x228))) {
      *(float *)(param_1 + 0x21c) = *(float *)(param_1 + 0x8268);
      fVar21 = *(float *)(param_1 + 0x8268) * 0.01;
      *(float *)(param_1 + 0x218) = fVar22;
      *(float *)(param_1 + 0x228) = *(float *)(param_1 + 0x826c);
      *(float *)(param_1 + 0x220) = fVar21;
      *(float *)(param_1 + 0x224) = 1.0 - fVar21;
      if ((fVar22 != fVar20) &&
         (fVar20 = (float)*(int *)(param_1 + 0x25c) * fVar22 * 0.04 * fVar22 * 0.5,
         *(float *)(param_1 + 0x254) = fVar20, fVar20 < 4.0)) {
        *(int32_t *)(param_1 + 0x254) = 0x40800000;
      }
      *(float *)(param_1 + 0x250) = *(float *)(param_1 + 0x826c) / (float)*(int *)(param_1 + 0x25c);
    }
    if (param_4 != 0) {
      uVar12 = *(uint *)(param_1 + 0x248);
      uStackX_20 = param_4;
      do {
        uVar16 = uVar8 - uVar12;
        if (uVar12 + uStackX_20 <= uVar8) {
          uVar16 = uStackX_20;
        }
        uVar6 = 0;
        uVar8 = uVar16 * uVar3;
        if (3 < uVar8) {
          pfVar15 = (float *)(param_2 + 8);
          do {
            iVar4 = (int)uVar6;
            *(short *)(*(int64_t *)(param_1 + 0x238) +
                      (uint64_t)(uVar3 * *(int *)(param_1 + 0x248) + iVar4) * 2) =
                 (short)(int)(pfVar15[-2] * 16384.0);
            *(short *)(*(int64_t *)(param_1 + 0x238) +
                      (uint64_t)(uVar3 * *(int *)(param_1 + 0x248) + 1 + iVar4) * 2) =
                 (short)(int)(pfVar15[-1] * 16384.0);
            *(short *)(*(int64_t *)(param_1 + 0x238) +
                      (uint64_t)(uVar3 * *(int *)(param_1 + 0x248) + 2 + iVar4) * 2) =
                 (short)(int)(*pfVar15 * 16384.0);
            uVar6 = (uint64_t)(iVar4 + 4U);
            *(short *)(*(int64_t *)(param_1 + 0x238) +
                      (uint64_t)(uVar3 * *(int *)(param_1 + 0x248) + 3 + iVar4) * 2) =
                 (short)(int)(pfVar15[1] * 16384.0);
            pfVar15 = pfVar15 + 4;
          } while (iVar4 + 4U < uVar8 - 3);
          uVar12 = *(uint *)(param_1 + 0x248);
        }
        if ((uint)uVar6 < uVar8) {
          pfVar15 = (float *)(param_2 + uVar6 * 4);
          do {
            fVar20 = *pfVar15;
            pfVar15 = pfVar15 + 1;
            iVar4 = (int)uVar6;
            uVar12 = iVar4 + 1;
            uVar6 = (uint64_t)uVar12;
            *(short *)(*(int64_t *)(param_1 + 0x238) +
                      (uint64_t)(uVar3 * *(int *)(param_1 + 0x248) + iVar4) * 2) =
                 (short)(int)(fVar20 * 16384.0);
          } while (uVar12 < uVar8);
          uVar12 = *(uint *)(param_1 + 0x248);
        }
        param_5 = 0;
        if (uVar16 != 0) {
          iStackX_8 = 0;
          do {
            fVar20 = *(float *)(param_1 + 0x254);
            fVar22 = *(float *)(param_1 + 600);
            if (fVar20 - 0.015625 <= fVar22) {
              if (fVar20 + 0.015625 < fVar22) {
                fVar20 = fVar22 - 0.015625;
              }
            }
            else {
              fVar20 = fVar22 + 0.015625;
            }
            *(float *)(param_1 + 600) = fVar20;
            uVar12 = (uint)(*(float *)(param_1 + 0x24c) * 32768.0);
            if ((int)uVar12 < 0) {
              uVar12 = -uVar12;
            }
            uVar12 = uVar12 & 0x7fff;
            uVar6 = (uint64_t)uVar12;
            uVar9 = uVar12 >> 0xd;
            if (uVar12 >> 0xd == 0) {
              fVar22 = *(float *)(param_1 + 0x264 + uVar6 * 4);
            }
            else if (uVar9 == 1) {
              fVar22 = -*(float *)(param_1 + (0x4098 - (uint64_t)uVar12) * 4);
            }
            else if (uVar9 == 2) {
              fVar22 = -*(float *)(param_1 + -0xfd9c + uVar6 * 4);
            }
            else if (uVar9 == 3) {
              fVar22 = *(float *)(param_1 + (0x8098 - uVar6) * 4);
            }
            else {
              fVar22 = 0.0;
            }
            fVar20 = (fVar22 * 0.5 - 0.5) * fVar20 + (float)*(uint *)(param_1 + 0x248) +
                     (float)param_5;
            if (0.0 <= fVar20) {
              if (fVar2 < fVar20) {
                fVar20 = fVar20 - fVar2;
              }
            }
            else {
              fVar20 = fVar20 + fVar2;
            }
            iVar17 = (int)fVar20;
            uVar12 = (iVar17 + 1U) % *(uint *)(param_1 + 0x240);
            iVar4 = 0;
            fVar20 = fVar20 - (float)iVar17;
            if (lVar11 < 4) {
              lVar5 = 0;
            }
            else {
              fVar22 = 1.0 - fVar20;
              lVar7 = (int64_t)(int)(uVar12 * uVar3);
              lVar10 = lVar7 * 2;
              lVar7 = (int)(iVar17 * uVar3) - lVar7;
              lVar19 = (lVar11 - 4U >> 2) + 1;
              iVar4 = (int)lVar19 * 4;
              lVar5 = lVar19 * 4;
              iVar18 = iStackX_8;
              do {
                lVar14 = lVar10 + lVar7 * 2;
                lVar13 = (int64_t)iVar18;
                iVar18 = iVar18 + 4;
                *(float *)(param_3 + lVar13 * 4) =
                     ((float)(int)*(short *)(lVar10 + *(int64_t *)(param_1 + 0x238)) *
                      6.1035156e-05 * fVar20 +
                     (float)(int)*(short *)(*(int64_t *)(param_1 + 0x238) + lVar14) * 6.1035156e-05
                     * fVar22) * *(float *)(param_1 + 0x220) +
                     *(float *)(param_2 + lVar13 * 4) * *(float *)(param_1 + 0x224);
                *(float *)(param_3 + 4 + lVar13 * 4) =
                     ((float)(int)*(short *)(lVar10 + 2 + *(int64_t *)(param_1 + 0x238)) *
                      6.1035156e-05 * fVar20 +
                     (float)(int)*(short *)(*(int64_t *)(param_1 + 0x238) + 2 + lVar14) *
                     6.1035156e-05 * fVar22) * *(float *)(param_1 + 0x220) +
                     *(float *)(param_2 + 4 + lVar13 * 4) * *(float *)(param_1 + 0x224);
                *(float *)(param_3 + 8 + lVar13 * 4) =
                     ((float)(int)*(short *)(lVar10 + *(int64_t *)(param_1 + 0x238) + 4 + lVar7 * 2
                                            ) * 6.1035156e-05 * fVar22 +
                     (float)(int)*(short *)(*(int64_t *)(param_1 + 0x238) + 4 + lVar10) *
                     6.1035156e-05 * fVar20) * *(float *)(param_1 + 0x220) +
                     *(float *)(param_2 + 8 + lVar13 * 4) * *(float *)(param_1 + 0x224);
                lVar14 = lVar10 + *(int64_t *)(param_1 + 0x238);
                psVar1 = (short *)(*(int64_t *)(param_1 + 0x238) + 6 + lVar10);
                lVar10 = lVar10 + 8;
                *(float *)(param_3 + 0xc + lVar13 * 4) =
                     ((float)(int)*(short *)(lVar14 + 6 + lVar7 * 2) * 6.1035156e-05 * fVar22 +
                     (float)(int)*psVar1 * 6.1035156e-05 * fVar20) * *(float *)(param_1 + 0x220) +
                     *(float *)(param_2 + 0xc + lVar13 * 4) * *(float *)(param_1 + 0x224);
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
            }
            if (lVar5 < lVar11) {
              iVar4 = iVar4 + iStackX_8;
              lVar7 = (int64_t)(int)(uVar12 * uVar3);
              lVar10 = (lVar7 + lVar5) * 2;
              lVar5 = lVar11 - lVar5;
              do {
                lVar14 = (int64_t)iVar4;
                iVar4 = iVar4 + 1;
                lVar19 = *(int64_t *)(param_1 + 0x238) + lVar10;
                psVar1 = (short *)(*(int64_t *)(param_1 + 0x238) + lVar10);
                lVar10 = lVar10 + 2;
                *(float *)(param_3 + lVar14 * 4) =
                     ((float)(int)*(short *)(lVar19 + ((int)(iVar17 * uVar3) - lVar7) * 2) *
                      6.1035156e-05 * (1.0 - fVar20) + (float)(int)*psVar1 * 6.1035156e-05 * fVar20)
                     * *(float *)(param_1 + 0x220) +
                     *(float *)(param_2 + lVar14 * 4) * *(float *)(param_1 + 0x224);
                lVar5 = lVar5 + -1;
              } while (lVar5 != 0);
            }
            fVar20 = *(float *)(param_1 + 0x24c) + *(float *)(param_1 + 0x250);
            *(float *)(param_1 + 0x24c) = fVar20;
            if (1.0 < fVar20) {
              *(float *)(param_1 + 0x24c) = fVar20 - 1.0;
            }
            param_5 = param_5 + 1;
            iStackX_8 = iStackX_8 + uVar3;
          } while (param_5 < uVar16);
          uVar12 = *(uint *)(param_1 + 0x248);
        }
        uVar12 = uVar12 + uVar16;
        *(uint *)(param_1 + 0x248) = uVar12;
        param_2 = param_2 + (uint64_t)uVar8 * 4;
        uVar8 = *(uint *)(param_1 + 0x240);
        param_3 = param_3 + (uint64_t)(uVar16 * *param_6) * 4;
        if (uVar8 <= uVar12) {
          *(int32_t *)(param_1 + 0x248) = 0;
          uVar12 = 0;
        }
        uStackX_20 = uStackX_20 - uVar16;
      } while (uStackX_20 != 0);
    }
  }
  return 0;
}



uint64_t FUN_18077a8d0(uint64_t param_1,uint param_2,float param_3)

{
  short *psVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint uVar7;
  int64_t unaff_RBX;
  uint unaff_ESI;
  int64_t lVar8;
  int iVar9;
  int64_t unaff_RDI;
  uint uVar10;
  int64_t lVar11;
  int64_t lVar12;
  float *pfVar13;
  uint uVar14;
  int iVar15;
  int64_t lVar16;
  int64_t unaff_R12;
  int iVar17;
  int64_t lVar18;
  int64_t unaff_R15;
  bool in_ZF;
  float fVar19;
  float fVar20;
  float in_XMM4_Da;
  int iStack00000000000000f0;
  uint in_stack_00000108;
  float in_stack_00000110;
  int *in_stack_00000118;
  
  fVar3 = in_stack_00000110;
  if (((!in_ZF) || (*(float *)(unaff_RBX + 0x8268) != *(float *)(unaff_RBX + 0x21c))) ||
     (*(float *)(unaff_RBX + 0x826c) != *(float *)(unaff_RBX + 0x228))) {
    *(float *)(unaff_RBX + 0x21c) = *(float *)(unaff_RBX + 0x8268);
    fVar19 = *(float *)(unaff_RBX + 0x8268) * 0.01;
    *(float *)(unaff_RBX + 0x218) = param_3;
    *(float *)(unaff_RBX + 0x228) = *(float *)(unaff_RBX + 0x826c);
    *(float *)(unaff_RBX + 0x220) = fVar19;
    *(float *)(unaff_RBX + 0x224) = 1.0 - fVar19;
    if ((param_3 != in_XMM4_Da) &&
       (fVar19 = (float)*(int *)(unaff_RBX + 0x25c) * param_3 * 0.04 * param_3 * 0.5,
       *(float *)(unaff_RBX + 0x254) = fVar19, fVar19 < 4.0)) {
      *(int32_t *)(unaff_RBX + 0x254) = 0x40800000;
    }
    *(float *)(unaff_RBX + 0x250) =
         *(float *)(unaff_RBX + 0x826c) / (float)*(int *)(unaff_RBX + 0x25c);
  }
  if (unaff_ESI != 0) {
    uVar10 = *(uint *)(unaff_RBX + 0x248);
    do {
      uVar2 = param_2 - uVar10;
      if (uVar10 + unaff_ESI <= param_2) {
        uVar2 = unaff_ESI;
      }
      uVar5 = 0;
      iVar9 = (int)unaff_RDI;
      uVar14 = uVar2 * iVar9;
      if (3 < uVar14) {
        pfVar13 = (float *)(unaff_R15 + 8);
        do {
          iVar4 = (int)uVar5;
          *(short *)(*(int64_t *)(unaff_RBX + 0x238) +
                    (uint64_t)(uint)(iVar9 * *(int *)(unaff_RBX + 0x248) + iVar4) * 2) =
               (short)(int)(pfVar13[-2] * 16384.0);
          *(short *)(*(int64_t *)(unaff_RBX + 0x238) +
                    (uint64_t)(uint)(iVar9 * *(int *)(unaff_RBX + 0x248) + 1 + iVar4) * 2) =
               (short)(int)(pfVar13[-1] * 16384.0);
          *(short *)(*(int64_t *)(unaff_RBX + 0x238) +
                    (uint64_t)(uint)(iVar9 * *(int *)(unaff_RBX + 0x248) + 2 + iVar4) * 2) =
               (short)(int)(*pfVar13 * 16384.0);
          uVar5 = (uint64_t)(iVar4 + 4U);
          *(short *)(*(int64_t *)(unaff_RBX + 0x238) +
                    (uint64_t)(uint)(iVar9 * *(int *)(unaff_RBX + 0x248) + 3 + iVar4) * 2) =
               (short)(int)(pfVar13[1] * 16384.0);
          pfVar13 = pfVar13 + 4;
        } while (iVar4 + 4U < uVar14 - 3);
        uVar10 = *(uint *)(unaff_RBX + 0x248);
      }
      if ((uint)uVar5 < uVar14) {
        pfVar13 = (float *)(unaff_R15 + uVar5 * 4);
        do {
          fVar19 = *pfVar13;
          pfVar13 = pfVar13 + 1;
          iVar4 = (int)uVar5;
          uVar10 = iVar4 + 1;
          uVar5 = (uint64_t)uVar10;
          *(short *)(*(int64_t *)(unaff_RBX + 0x238) +
                    (uint64_t)(uint)(iVar9 * *(int *)(unaff_RBX + 0x248) + iVar4) * 2) =
               (short)(int)(fVar19 * 16384.0);
        } while (uVar10 < uVar14);
        uVar10 = *(uint *)(unaff_RBX + 0x248);
      }
      in_stack_00000110 = 0.0;
      if (uVar2 != 0) {
        iStack00000000000000f0 = 0;
        do {
          fVar19 = *(float *)(unaff_RBX + 0x254);
          fVar20 = *(float *)(unaff_RBX + 600);
          if (fVar19 - 0.015625 <= fVar20) {
            if (fVar19 + 0.015625 < fVar20) {
              fVar19 = fVar20 - 0.015625;
            }
          }
          else {
            fVar19 = fVar20 + 0.015625;
          }
          *(float *)(unaff_RBX + 600) = fVar19;
          uVar10 = (uint)(*(float *)(unaff_RBX + 0x24c) * 32768.0);
          if ((int)uVar10 < 0) {
            uVar10 = -uVar10;
          }
          uVar10 = uVar10 & 0x7fff;
          uVar5 = (uint64_t)uVar10;
          uVar7 = uVar10 >> 0xd;
          if (uVar10 >> 0xd == 0) {
            fVar20 = *(float *)(unaff_RBX + 0x264 + uVar5 * 4);
          }
          else if (uVar7 == 1) {
            fVar20 = -*(float *)(unaff_RBX + (0x4098 - (uint64_t)uVar10) * 4);
          }
          else if (uVar7 == 2) {
            fVar20 = -*(float *)(unaff_RBX + -0xfd9c + uVar5 * 4);
          }
          else if (uVar7 == 3) {
            fVar20 = *(float *)(unaff_RBX + (0x8098 - uVar5) * 4);
          }
          else {
            fVar20 = 0.0;
          }
          fVar19 = (fVar20 * 0.5 - 0.5) * fVar19 + (float)*(uint *)(unaff_RBX + 0x248) +
                   (float)(uint)in_stack_00000110;
          if (0.0 <= fVar19) {
            if (fVar3 < fVar19) {
              fVar19 = fVar19 - fVar3;
            }
          }
          else {
            fVar19 = fVar19 + fVar3;
          }
          iVar15 = (int)fVar19;
          uVar10 = (iVar15 + 1U) % *(uint *)(unaff_RBX + 0x240);
          iVar4 = 0;
          fVar19 = fVar19 - (float)iVar15;
          if (unaff_RDI < 4) {
            lVar16 = 0;
          }
          else {
            fVar20 = 1.0 - fVar19;
            lVar6 = (int64_t)(int)(uVar10 * iVar9);
            lVar8 = lVar6 * 2;
            lVar6 = iVar15 * iVar9 - lVar6;
            lVar18 = (unaff_RDI - 4U >> 2) + 1;
            iVar4 = (int)lVar18 * 4;
            lVar16 = lVar18 * 4;
            iVar17 = iStack00000000000000f0;
            do {
              lVar12 = lVar8 + lVar6 * 2;
              lVar11 = (int64_t)iVar17;
              iVar17 = iVar17 + 4;
              *(float *)(unaff_R12 + lVar11 * 4) =
                   ((float)(int)*(short *)(lVar8 + *(int64_t *)(unaff_RBX + 0x238)) * 6.1035156e-05
                    * fVar19 +
                   (float)(int)*(short *)(*(int64_t *)(unaff_RBX + 0x238) + lVar12) * 6.1035156e-05
                   * fVar20) * *(float *)(unaff_RBX + 0x220) +
                   *(float *)(unaff_R15 + lVar11 * 4) * *(float *)(unaff_RBX + 0x224);
              *(float *)(unaff_R12 + 4 + lVar11 * 4) =
                   ((float)(int)*(short *)(lVar8 + 2 + *(int64_t *)(unaff_RBX + 0x238)) *
                    6.1035156e-05 * fVar19 +
                   (float)(int)*(short *)(*(int64_t *)(unaff_RBX + 0x238) + 2 + lVar12) *
                   6.1035156e-05 * fVar20) * *(float *)(unaff_RBX + 0x220) +
                   *(float *)(unaff_R15 + 4 + lVar11 * 4) * *(float *)(unaff_RBX + 0x224);
              *(float *)(unaff_R12 + 8 + lVar11 * 4) =
                   ((float)(int)*(short *)(lVar8 + *(int64_t *)(unaff_RBX + 0x238) + 4 + lVar6 * 2)
                    * 6.1035156e-05 * fVar20 +
                   (float)(int)*(short *)(*(int64_t *)(unaff_RBX + 0x238) + 4 + lVar8) *
                   6.1035156e-05 * fVar19) * *(float *)(unaff_RBX + 0x220) +
                   *(float *)(unaff_R15 + 8 + lVar11 * 4) * *(float *)(unaff_RBX + 0x224);
              lVar12 = lVar8 + *(int64_t *)(unaff_RBX + 0x238);
              psVar1 = (short *)(*(int64_t *)(unaff_RBX + 0x238) + 6 + lVar8);
              lVar8 = lVar8 + 8;
              *(float *)(unaff_R12 + 0xc + lVar11 * 4) =
                   ((float)(int)*(short *)(lVar12 + 6 + lVar6 * 2) * 6.1035156e-05 * fVar20 +
                   (float)(int)*psVar1 * 6.1035156e-05 * fVar19) * *(float *)(unaff_RBX + 0x220) +
                   *(float *)(unaff_R15 + 0xc + lVar11 * 4) * *(float *)(unaff_RBX + 0x224);
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
          }
          if (lVar16 < unaff_RDI) {
            iVar4 = iVar4 + iStack00000000000000f0;
            lVar6 = (int64_t)(int)(uVar10 * iVar9);
            lVar8 = (lVar6 + lVar16) * 2;
            lVar16 = unaff_RDI - lVar16;
            do {
              lVar12 = (int64_t)iVar4;
              iVar4 = iVar4 + 1;
              lVar18 = *(int64_t *)(unaff_RBX + 0x238) + lVar8;
              psVar1 = (short *)(*(int64_t *)(unaff_RBX + 0x238) + lVar8);
              lVar8 = lVar8 + 2;
              *(float *)(unaff_R12 + lVar12 * 4) =
                   ((float)(int)*(short *)(lVar18 + (iVar15 * iVar9 - lVar6) * 2) * 6.1035156e-05 *
                    (1.0 - fVar19) + (float)(int)*psVar1 * 6.1035156e-05 * fVar19) *
                   *(float *)(unaff_RBX + 0x220) +
                   *(float *)(unaff_R15 + lVar12 * 4) * *(float *)(unaff_RBX + 0x224);
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
          }
          fVar19 = *(float *)(unaff_RBX + 0x24c) + *(float *)(unaff_RBX + 0x250);
          *(float *)(unaff_RBX + 0x24c) = fVar19;
          if (1.0 < fVar19) {
            *(float *)(unaff_RBX + 0x24c) = fVar19 - 1.0;
          }
          in_stack_00000110 = (float)((int)in_stack_00000110 + 1);
          iStack00000000000000f0 = iStack00000000000000f0 + iVar9;
        } while ((uint)in_stack_00000110 < uVar2);
        uVar10 = *(uint *)(unaff_RBX + 0x248);
        unaff_ESI = in_stack_00000108;
      }
      uVar10 = uVar10 + uVar2;
      *(uint *)(unaff_RBX + 0x248) = uVar10;
      unaff_R15 = unaff_R15 + (uint64_t)uVar14 * 4;
      param_2 = *(uint *)(unaff_RBX + 0x240);
      unaff_R12 = unaff_R12 + (uint64_t)(uVar2 * *in_stack_00000118) * 4;
      if (param_2 <= uVar10) {
        *(int32_t *)(unaff_RBX + 0x248) = 0;
        uVar10 = 0;
      }
      unaff_ESI = unaff_ESI - uVar2;
      in_stack_00000108 = unaff_ESI;
    } while (unaff_ESI != 0);
  }
  return 0;
}



uint64_t FUN_18077a9d3(uint param_1,uint param_2,uint64_t param_3,float param_4)

{
  short *psVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint uVar7;
  int64_t unaff_RBX;
  uint unaff_ESI;
  int64_t lVar8;
  int iVar9;
  int64_t unaff_RDI;
  uint uVar10;
  int64_t lVar11;
  int64_t lVar12;
  float *pfVar13;
  uint uVar14;
  int iVar15;
  int64_t lVar16;
  int64_t unaff_R12;
  int iVar17;
  int64_t lVar18;
  int64_t unaff_R15;
  float fVar19;
  float fVar20;
  float in_XMM5_Da;
  float unaff_XMM7_Da;
  float unaff_XMM11_Da;
  int iStack00000000000000f0;
  uint in_stack_00000108;
  float in_stack_00000110;
  int *in_stack_00000118;
  
  fVar3 = in_stack_00000110;
  do {
    uVar2 = param_2 - param_1;
    if (param_1 + unaff_ESI <= param_2) {
      uVar2 = unaff_ESI;
    }
    uVar5 = 0;
    iVar9 = (int)unaff_RDI;
    uVar14 = uVar2 * iVar9;
    if (3 < uVar14) {
      pfVar13 = (float *)(unaff_R15 + 8);
      do {
        iVar4 = (int)uVar5;
        *(short *)(*(int64_t *)(unaff_RBX + 0x238) +
                  (uint64_t)(uint)(iVar9 * *(int *)(unaff_RBX + 0x248) + iVar4) * 2) =
             (short)(int)(pfVar13[-2] * 16384.0);
        *(short *)(*(int64_t *)(unaff_RBX + 0x238) +
                  (uint64_t)(uint)(iVar9 * *(int *)(unaff_RBX + 0x248) + 1 + iVar4) * 2) =
             (short)(int)(pfVar13[-1] * 16384.0);
        *(short *)(*(int64_t *)(unaff_RBX + 0x238) +
                  (uint64_t)(uint)(iVar9 * *(int *)(unaff_RBX + 0x248) + 2 + iVar4) * 2) =
             (short)(int)(*pfVar13 * 16384.0);
        uVar5 = (uint64_t)(iVar4 + 4U);
        *(short *)(*(int64_t *)(unaff_RBX + 0x238) +
                  (uint64_t)(uint)(iVar9 * *(int *)(unaff_RBX + 0x248) + 3 + iVar4) * 2) =
             (short)(int)(pfVar13[1] * 16384.0);
        pfVar13 = pfVar13 + 4;
      } while (iVar4 + 4U < uVar14 - 3);
      param_1 = *(uint *)(unaff_RBX + 0x248);
    }
    if ((uint)uVar5 < uVar14) {
      pfVar13 = (float *)(unaff_R15 + uVar5 * 4);
      do {
        fVar19 = *pfVar13;
        pfVar13 = pfVar13 + 1;
        iVar4 = (int)uVar5;
        uVar10 = iVar4 + 1;
        uVar5 = (uint64_t)uVar10;
        *(short *)(*(int64_t *)(unaff_RBX + 0x238) +
                  (uint64_t)(uint)(iVar9 * *(int *)(unaff_RBX + 0x248) + iVar4) * 2) =
             (short)(int)(fVar19 * 16384.0);
      } while (uVar10 < uVar14);
      param_1 = *(uint *)(unaff_RBX + 0x248);
    }
    in_stack_00000110 = 0.0;
    if (uVar2 != 0) {
      iStack00000000000000f0 = 0;
      do {
        fVar19 = *(float *)(unaff_RBX + 0x254);
        fVar20 = *(float *)(unaff_RBX + 600);
        if (fVar19 - in_XMM5_Da <= fVar20) {
          if (fVar19 + in_XMM5_Da < fVar20) {
            fVar19 = fVar20 - in_XMM5_Da;
          }
        }
        else {
          fVar19 = fVar20 + in_XMM5_Da;
        }
        *(float *)(unaff_RBX + 600) = fVar19;
        uVar10 = (uint)(*(float *)(unaff_RBX + 0x24c) * 32768.0);
        if ((int)uVar10 < 0) {
          uVar10 = -uVar10;
        }
        uVar10 = uVar10 & 0x7fff;
        uVar5 = (uint64_t)uVar10;
        uVar7 = uVar10 >> 0xd;
        if (uVar10 >> 0xd == 0) {
          fVar20 = *(float *)(unaff_RBX + 0x264 + uVar5 * 4);
        }
        else if (uVar7 == 1) {
          fVar20 = -*(float *)(unaff_RBX + (0x4098 - (uint64_t)uVar10) * 4);
        }
        else if (uVar7 == 2) {
          fVar20 = -*(float *)(unaff_RBX + -0xfd9c + uVar5 * 4);
        }
        else if (uVar7 == 3) {
          fVar20 = *(float *)(unaff_RBX + (0x8098 - uVar5) * 4);
        }
        else {
          fVar20 = 0.0;
        }
        fVar19 = (fVar20 * unaff_XMM11_Da - unaff_XMM11_Da) * fVar19 +
                 (float)*(uint *)(unaff_RBX + 0x248) + (float)(uint)in_stack_00000110;
        if (0.0 <= fVar19) {
          if (fVar3 < fVar19) {
            fVar19 = fVar19 - fVar3;
          }
        }
        else {
          fVar19 = fVar19 + fVar3;
        }
        iVar15 = (int)fVar19;
        uVar10 = (iVar15 + 1U) % *(uint *)(unaff_RBX + 0x240);
        iVar4 = 0;
        fVar19 = fVar19 - (float)iVar15;
        if (unaff_RDI < 4) {
          lVar16 = 0;
        }
        else {
          fVar20 = unaff_XMM7_Da - fVar19;
          lVar6 = (int64_t)(int)(uVar10 * iVar9);
          lVar8 = lVar6 * 2;
          lVar6 = iVar15 * iVar9 - lVar6;
          lVar18 = (unaff_RDI - 4U >> 2) + 1;
          iVar4 = (int)lVar18 * 4;
          lVar16 = lVar18 * 4;
          iVar17 = iStack00000000000000f0;
          do {
            lVar12 = lVar8 + lVar6 * 2;
            lVar11 = (int64_t)iVar17;
            iVar17 = iVar17 + 4;
            *(float *)(unaff_R12 + lVar11 * 4) =
                 ((float)(int)*(short *)(lVar8 + *(int64_t *)(unaff_RBX + 0x238)) * param_4 *
                  fVar19 + (float)(int)*(short *)(*(int64_t *)(unaff_RBX + 0x238) + lVar12) *
                           param_4 * fVar20) * *(float *)(unaff_RBX + 0x220) +
                 *(float *)(unaff_R15 + lVar11 * 4) * *(float *)(unaff_RBX + 0x224);
            *(float *)(unaff_R12 + 4 + lVar11 * 4) =
                 ((float)(int)*(short *)(lVar8 + 2 + *(int64_t *)(unaff_RBX + 0x238)) * param_4 *
                  fVar19 + (float)(int)*(short *)(*(int64_t *)(unaff_RBX + 0x238) + 2 + lVar12) *
                           param_4 * fVar20) * *(float *)(unaff_RBX + 0x220) +
                 *(float *)(unaff_R15 + 4 + lVar11 * 4) * *(float *)(unaff_RBX + 0x224);
            *(float *)(unaff_R12 + 8 + lVar11 * 4) =
                 ((float)(int)*(short *)(lVar8 + *(int64_t *)(unaff_RBX + 0x238) + 4 + lVar6 * 2) *
                  param_4 * fVar20 +
                 (float)(int)*(short *)(*(int64_t *)(unaff_RBX + 0x238) + 4 + lVar8) * param_4 *
                 fVar19) * *(float *)(unaff_RBX + 0x220) +
                 *(float *)(unaff_R15 + 8 + lVar11 * 4) * *(float *)(unaff_RBX + 0x224);
            lVar12 = lVar8 + *(int64_t *)(unaff_RBX + 0x238);
            psVar1 = (short *)(*(int64_t *)(unaff_RBX + 0x238) + 6 + lVar8);
            lVar8 = lVar8 + 8;
            *(float *)(unaff_R12 + 0xc + lVar11 * 4) =
                 ((float)(int)*(short *)(lVar12 + 6 + lVar6 * 2) * param_4 * fVar20 +
                 (float)(int)*psVar1 * param_4 * fVar19) * *(float *)(unaff_RBX + 0x220) +
                 *(float *)(unaff_R15 + 0xc + lVar11 * 4) * *(float *)(unaff_RBX + 0x224);
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
        }
        if (lVar16 < unaff_RDI) {
          iVar4 = iVar4 + iStack00000000000000f0;
          lVar6 = (int64_t)(int)(uVar10 * iVar9);
          lVar8 = (lVar6 + lVar16) * 2;
          lVar16 = unaff_RDI - lVar16;
          do {
            lVar12 = (int64_t)iVar4;
            iVar4 = iVar4 + 1;
            lVar18 = *(int64_t *)(unaff_RBX + 0x238) + lVar8;
            psVar1 = (short *)(*(int64_t *)(unaff_RBX + 0x238) + lVar8);
            lVar8 = lVar8 + 2;
            *(float *)(unaff_R12 + lVar12 * 4) =
                 ((float)(int)*(short *)(lVar18 + (iVar15 * iVar9 - lVar6) * 2) * param_4 *
                  (unaff_XMM7_Da - fVar19) + (float)(int)*psVar1 * param_4 * fVar19) *
                 *(float *)(unaff_RBX + 0x220) +
                 *(float *)(unaff_R15 + lVar12 * 4) * *(float *)(unaff_RBX + 0x224);
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        fVar19 = *(float *)(unaff_RBX + 0x24c) + *(float *)(unaff_RBX + 0x250);
        *(float *)(unaff_RBX + 0x24c) = fVar19;
        if (unaff_XMM7_Da < fVar19) {
          *(float *)(unaff_RBX + 0x24c) = fVar19 - unaff_XMM7_Da;
        }
        in_stack_00000110 = (float)((int)in_stack_00000110 + 1);
        iStack00000000000000f0 = iStack00000000000000f0 + iVar9;
      } while ((uint)in_stack_00000110 < uVar2);
      param_1 = *(uint *)(unaff_RBX + 0x248);
      unaff_ESI = in_stack_00000108;
    }
    param_1 = param_1 + uVar2;
    *(uint *)(unaff_RBX + 0x248) = param_1;
    unaff_R15 = unaff_R15 + (uint64_t)uVar14 * 4;
    param_2 = *(uint *)(unaff_RBX + 0x240);
    unaff_R12 = unaff_R12 + (uint64_t)(uVar2 * *in_stack_00000118) * 4;
    if (param_2 <= param_1) {
      *(int32_t *)(unaff_RBX + 0x248) = 0;
      param_1 = 0;
    }
    unaff_ESI = unaff_ESI - uVar2;
    in_stack_00000108 = unaff_ESI;
  } while (unaff_ESI != 0);
  return 0;
}



uint64_t FUN_18077abb2(void)

{
  return 0x26;
}



uint64_t
FUN_18077abc6(uint64_t param_1,float param_2,float param_3,float param_4,uint64_t param_5,
             uint param_6,uint param_7)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t unaff_RBX;
  int64_t lVar7;
  int iVar8;
  int64_t unaff_RDI;
  int64_t in_R8;
  int64_t lVar9;
  int64_t lVar10;
  float *pfVar11;
  int iVar12;
  int64_t lVar13;
  int64_t unaff_R12;
  int unaff_R13D;
  uint unaff_R14D;
  int64_t lVar14;
  int64_t unaff_R15;
  float fVar15;
  float fVar16;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  uint unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  int in_stack_000000f0;
  uint in_stack_00000108;
  uint in_stack_00000110;
  int *in_stack_00000118;
  
  do {
    if (param_3 + in_XMM5_Da < param_2) {
      param_3 = param_2 - in_XMM5_Da;
    }
    while( true ) {
      *(float *)(unaff_RBX + 600) = param_3;
      uVar3 = (uint)(*(float *)(unaff_RBX + 0x24c) * unaff_XMM12_Da);
      if ((int)uVar3 < 0) {
        uVar3 = -uVar3;
      }
      uVar3 = uVar3 & 0x7fff;
      uVar4 = (uint64_t)uVar3;
      uVar6 = uVar3 >> 0xd;
      if (uVar3 >> 0xd == 0) {
        fVar15 = *(float *)(unaff_RBX + 0x264 + uVar4 * 4);
      }
      else if (uVar6 == 1) {
        fVar15 = (float)(*(uint *)(unaff_RBX + (0x4098 - (uint64_t)uVar3) * 4) ^ unaff_XMM9_Da);
      }
      else if (uVar6 == 2) {
        fVar15 = (float)(*(uint *)(unaff_RBX + -0xfd9c + uVar4 * 4) ^ unaff_XMM9_Da);
      }
      else {
        fVar15 = unaff_XMM10_Da;
        if (uVar6 == 3) {
          fVar15 = *(float *)(unaff_RBX + (0x8098 - uVar4) * 4);
        }
      }
      fVar15 = (fVar15 * unaff_XMM11_Da - unaff_XMM11_Da) * param_3 +
               (float)*(uint *)(unaff_RBX + 0x248) + (float)unaff_R14D;
      if (unaff_XMM10_Da <= fVar15) {
        if (unaff_XMM8_Da < fVar15) {
          fVar15 = fVar15 - unaff_XMM8_Da;
        }
      }
      else {
        fVar15 = fVar15 + unaff_XMM8_Da;
      }
      iVar12 = (int)fVar15;
      uVar3 = (iVar12 + 1U) % *(uint *)(unaff_RBX + 0x240);
      iVar2 = 0;
      fVar15 = fVar15 - (float)iVar12;
      iVar8 = (int)unaff_RDI;
      if (in_R8 < 4) {
        lVar13 = 0;
        in_stack_00000110 = unaff_R14D;
        in_stack_000000f0 = unaff_R13D;
      }
      else {
        fVar16 = unaff_XMM7_Da - fVar15;
        lVar5 = (int64_t)(int)(uVar3 * iVar8);
        lVar7 = lVar5 * 2;
        lVar5 = iVar12 * iVar8 - lVar5;
        lVar14 = (in_R8 - 4U >> 2) + 1;
        iVar2 = (int)lVar14 * 4;
        lVar13 = lVar14 * 4;
        do {
          lVar10 = lVar7 + lVar5 * 2;
          lVar9 = (int64_t)unaff_R13D;
          unaff_R13D = unaff_R13D + 4;
          *(float *)(unaff_R12 + lVar9 * 4) =
               ((float)(int)*(short *)(lVar7 + *(int64_t *)(unaff_RBX + 0x238)) * param_4 * fVar15
               + (float)(int)*(short *)(*(int64_t *)(unaff_RBX + 0x238) + lVar10) * param_4 *
                 fVar16) * *(float *)(unaff_RBX + 0x220) +
               *(float *)(unaff_R15 + lVar9 * 4) * *(float *)(unaff_RBX + 0x224);
          *(float *)(unaff_R12 + 4 + lVar9 * 4) =
               ((float)(int)*(short *)(lVar7 + 2 + *(int64_t *)(unaff_RBX + 0x238)) * param_4 *
                fVar15 + (float)(int)*(short *)(*(int64_t *)(unaff_RBX + 0x238) + 2 + lVar10) *
                         param_4 * fVar16) * *(float *)(unaff_RBX + 0x220) +
               *(float *)(unaff_R15 + 4 + lVar9 * 4) * *(float *)(unaff_RBX + 0x224);
          *(float *)(unaff_R12 + 8 + lVar9 * 4) =
               ((float)(int)*(short *)(lVar7 + *(int64_t *)(unaff_RBX + 0x238) + 4 + lVar5 * 2) *
                param_4 * fVar16 +
               (float)(int)*(short *)(*(int64_t *)(unaff_RBX + 0x238) + 4 + lVar7) * param_4 *
               fVar15) * *(float *)(unaff_RBX + 0x220) +
               *(float *)(unaff_R15 + 8 + lVar9 * 4) * *(float *)(unaff_RBX + 0x224);
          lVar10 = lVar7 + *(int64_t *)(unaff_RBX + 0x238);
          psVar1 = (short *)(*(int64_t *)(unaff_RBX + 0x238) + 6 + lVar7);
          lVar7 = lVar7 + 8;
          *(float *)(unaff_R12 + 0xc + lVar9 * 4) =
               ((float)(int)*(short *)(lVar10 + 6 + lVar5 * 2) * param_4 * fVar16 +
               (float)(int)*psVar1 * param_4 * fVar15) * *(float *)(unaff_RBX + 0x220) +
               *(float *)(unaff_R15 + 0xc + lVar9 * 4) * *(float *)(unaff_RBX + 0x224);
          lVar14 = lVar14 + -1;
          in_R8 = unaff_RDI;
        } while (lVar14 != 0);
      }
      if (lVar13 < in_R8) {
        iVar2 = iVar2 + in_stack_000000f0;
        lVar5 = (int64_t)(int)(uVar3 * iVar8);
        lVar7 = (lVar5 + lVar13) * 2;
        lVar13 = in_R8 - lVar13;
        do {
          lVar10 = (int64_t)iVar2;
          iVar2 = iVar2 + 1;
          lVar14 = *(int64_t *)(unaff_RBX + 0x238) + lVar7;
          psVar1 = (short *)(*(int64_t *)(unaff_RBX + 0x238) + lVar7);
          lVar7 = lVar7 + 2;
          *(float *)(unaff_R12 + lVar10 * 4) =
               ((float)(int)*(short *)(lVar14 + (iVar12 * iVar8 - lVar5) * 2) * param_4 *
                (unaff_XMM7_Da - fVar15) + (float)(int)*psVar1 * param_4 * fVar15) *
               *(float *)(unaff_RBX + 0x220) +
               *(float *)(unaff_R15 + lVar10 * 4) * *(float *)(unaff_RBX + 0x224);
          lVar13 = lVar13 + -1;
          in_R8 = unaff_RDI;
        } while (lVar13 != 0);
      }
      fVar15 = *(float *)(unaff_RBX + 0x24c) + *(float *)(unaff_RBX + 0x250);
      *(float *)(unaff_RBX + 0x24c) = fVar15;
      if (unaff_XMM7_Da < fVar15) {
        *(float *)(unaff_RBX + 0x24c) = fVar15 - unaff_XMM7_Da;
      }
      in_stack_00000110 = in_stack_00000110 + 1;
      in_stack_000000f0 = in_stack_000000f0 + iVar8;
      if (param_6 <= in_stack_00000110) {
        uVar3 = *(uint *)(unaff_RBX + 0x248);
        do {
          uVar3 = uVar3 + param_6;
          *(uint *)(unaff_RBX + 0x248) = uVar3;
          unaff_R15 = unaff_R15 + (uint64_t)param_7 * 4;
          uVar6 = *(uint *)(unaff_RBX + 0x240);
          unaff_R12 = unaff_R12 + (uint64_t)(param_6 * *in_stack_00000118) * 4;
          if (uVar6 <= uVar3) {
            *(int32_t *)(unaff_RBX + 0x248) = 0;
            uVar3 = 0;
          }
          in_stack_00000108 = in_stack_00000108 - param_6;
          if (in_stack_00000108 == 0) {
            return 0;
          }
          param_6 = uVar6 - uVar3;
          if (uVar3 + in_stack_00000108 <= uVar6) {
            param_6 = in_stack_00000108;
          }
          uVar4 = 0;
          param_7 = param_6 * iVar8;
          if (3 < param_7) {
            pfVar11 = (float *)(unaff_R15 + 8);
            do {
              iVar2 = (int)uVar4;
              *(short *)(*(int64_t *)(unaff_RBX + 0x238) +
                        (uint64_t)(uint)(iVar8 * *(int *)(unaff_RBX + 0x248) + iVar2) * 2) =
                   (short)(int)(pfVar11[-2] * unaff_XMM6_Da);
              *(short *)(*(int64_t *)(unaff_RBX + 0x238) +
                        (uint64_t)(uint)(iVar8 * *(int *)(unaff_RBX + 0x248) + 1 + iVar2) * 2) =
                   (short)(int)(pfVar11[-1] * unaff_XMM6_Da);
              *(short *)(*(int64_t *)(unaff_RBX + 0x238) +
                        (uint64_t)(uint)(iVar8 * *(int *)(unaff_RBX + 0x248) + 2 + iVar2) * 2) =
                   (short)(int)(*pfVar11 * unaff_XMM6_Da);
              uVar4 = (uint64_t)(iVar2 + 4U);
              *(short *)(*(int64_t *)(unaff_RBX + 0x238) +
                        (uint64_t)(uint)(iVar8 * *(int *)(unaff_RBX + 0x248) + 3 + iVar2) * 2) =
                   (short)(int)(pfVar11[1] * unaff_XMM6_Da);
              pfVar11 = pfVar11 + 4;
            } while (iVar2 + 4U < param_7 - 3);
            uVar3 = *(uint *)(unaff_RBX + 0x248);
          }
          if ((uint)uVar4 < param_7) {
            pfVar11 = (float *)(unaff_R15 + uVar4 * 4);
            do {
              fVar15 = *pfVar11;
              pfVar11 = pfVar11 + 1;
              iVar2 = (int)uVar4;
              uVar3 = iVar2 + 1;
              uVar4 = (uint64_t)uVar3;
              *(short *)(*(int64_t *)(unaff_RBX + 0x238) +
                        (uint64_t)(uint)(iVar8 * *(int *)(unaff_RBX + 0x248) + iVar2) * 2) =
                   (short)(int)(fVar15 * unaff_XMM6_Da);
            } while (uVar3 < param_7);
            uVar3 = *(uint *)(unaff_RBX + 0x248);
          }
          in_stack_00000110 = 0;
        } while (param_6 == 0);
        in_stack_000000f0 = 0;
        in_R8 = unaff_RDI;
      }
      param_3 = *(float *)(unaff_RBX + 0x254);
      param_2 = *(float *)(unaff_RBX + 600);
      unaff_R14D = in_stack_00000110;
      unaff_R13D = in_stack_000000f0;
      if (param_3 - in_XMM5_Da <= param_2) break;
      param_3 = param_2 + in_XMM5_Da;
    }
  } while( true );
}



uint64_t FUN_18077b01b(void)

{
  return 0;
}



uint64_t FUN_18077b029(void)

{
  return 0;
}



uint64_t FUN_18077b040(int64_t param_1)

{
  float fVar1;
  float fVar2;
  
  *(uint64_t *)(param_1 + 0x248) = 0;
  if (*(int64_t *)(param_1 + 0x238) == 0) {
    fVar1 = *(float *)(param_1 + 0x8264);
    *(float *)(param_1 + 0x21c) = *(float *)(param_1 + 0x8268);
    fVar2 = *(float *)(param_1 + 0x8268) * 0.01;
    *(float *)(param_1 + 0x218) = fVar1;
    *(float *)(param_1 + 0x220) = fVar2;
    *(float *)(param_1 + 0x228) = *(float *)(param_1 + 0x826c);
    *(float *)(param_1 + 0x224) = 1.0 - fVar2;
    fVar1 = fVar1 * 40.0 * (float)*(int *)(param_1 + 0x25c) * 0.001 * fVar1 * 0.5;
    *(float *)(param_1 + 0x254) = fVar1;
    if (fVar1 < 4.0) {
      *(int32_t *)(param_1 + 0x254) = 0x40800000;
      fVar1 = 4.0;
    }
    *(float *)(param_1 + 600) = fVar1;
    *(float *)(param_1 + 0x250) = *(float *)(param_1 + 0x826c) / (float)*(int *)(param_1 + 0x25c);
    return 0;
  }
                    // WARNING: Subroutine does not return
  memset(*(int64_t *)(param_1 + 0x238),0,*(int32_t *)(param_1 + 0x244));
}



uint64_t FUN_18077b130(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int iVar4;
  int64_t lVar5;
  
  lVar1 = *param_1;
  iVar4 = 0;
  lVar2 = *(int64_t *)(lVar1 + 0xe8);
  *(float *)(lVar1 + 0x21c) = (float)*(int *)(*(int64_t *)(lVar1 + 0xa8) + 0x6d0) * 0.5 - 10.0;
  if (0 < *(int *)(lVar2 + 0x60)) {
    lVar5 = 0;
    do {
      uVar3 = func_0x000180762a70(lVar1,iVar4,
                                  *(int32_t *)
                                   (*(int64_t *)(*(int64_t *)(lVar2 + 0x68) + lVar5) + 0x38));
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar2 = *(int64_t *)(lVar1 + 0xe8);
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < *(int *)(lVar2 + 0x60));
  }
  func_0x00018077cfd0(lVar1);
  *(int32_t *)(lVar1 + 0x220) = *(int32_t *)(lVar1 + 0x440);
  *(int32_t *)(lVar1 + 0x218) = *(int32_t *)(lVar1 + 0x43c);
  FUN_18077d1a0(lVar1);
  return 0;
}



uint64_t FUN_18077b250(int64_t *param_1,int param_2,int32_t *param_3,int64_t param_4)

{
  int64_t lVar1;
  float fVar2;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    *param_3 = *(int32_t *)(lVar1 + 0x43c);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x43c);
  }
  else {
    if ((param_2 != 1) || (*param_3 = *(int32_t *)(lVar1 + 0x440), param_4 == 0)) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x440);
  }
                    // WARNING: Subroutine does not return
  SystemValidationProcessor(param_4,0x20,&rendering_buffer_2048_ptr,(double)fVar2);
}







