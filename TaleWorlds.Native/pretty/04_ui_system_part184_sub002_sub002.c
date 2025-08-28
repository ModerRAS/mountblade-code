#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part184_sub002_sub002.c - 1 个函数

// 函数: void FUN_1807744e0(void)
void FUN_1807744e0(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c0cd84,0,0x5c);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_1807746b0(longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
             int *param_6)

{
  longlong lVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong lStackX_10;
  longlong lStackX_18;
  uint uStackX_20;
  
  uVar3 = param_5;
  if (*(uint *)(param_1 + 0x260) != param_5) {
    *(uint *)(param_1 + 0x260) = param_5;
    if (*(longlong *)(param_1 + 0x240) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x240),
                    &unknown_var_3712_ptr,0xd9,1);
    }
    func_0x000180746360(*(uint64_t *)(param_1 + 0xa8),&param_5,0);
    uVar9 = (uint)((int)((float)*(int *)(param_1 + 0x25c) * 120.0) / 1000) / param_5 + 1;
    if (uVar9 < 2) {
      uVar9 = 2;
    }
    *(uint *)(param_1 + 0x248) = uVar9 * param_5;
    iVar15 = uVar9 * param_5 * *(int *)(param_1 + 0x260) * 2;
    *(int *)(param_1 + 0x24c) = iVar15;
    lVar6 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),iVar15 + 0x10,&unknown_var_3712_ptr,0xf0,
                          0);
    *(longlong *)(param_1 + 0x240) = lVar6;
    if (lVar6 == 0) {
      return 0x26;
    }
    *(ulonglong *)(param_1 + 0x238) = lVar6 + 0xfU & 0xfffffffffffffff0;
    FUN_180774eb0(param_1);
  }
  fVar2 = (float)((int)(float)*(uint *)(param_1 + 0x248) + -1);
  if (param_2 != 0) {
    fVar19 = *(float *)(param_1 + 0x218);
    if (((fVar19 != *(float *)(param_1 + 0x8278)) ||
        (*(float *)(param_1 + 0x827c) != *(float *)(param_1 + 0x21c))) ||
       (*(float *)(param_1 + 0x8280) != *(float *)(param_1 + 0x230))) {
      *(float *)(param_1 + 0x218) = *(float *)(param_1 + 0x8278);
      fVar18 = *(float *)(param_1 + 0x827c);
      *(float *)(param_1 + 0x21c) = fVar18;
      fVar17 = fVar18 + fVar18;
      fVar18 = 200.0 / (fVar18 + 200.0);
      *(float *)(param_1 + 0x220) = fVar18;
      if (0.0 <= fVar17) {
        if (100.0 <= fVar17) {
          fVar17 = 100.0;
        }
      }
      else {
        fVar17 = 0.0;
      }
      *(float *)(param_1 + 0x224) = fVar18 * fVar17 * 0.01;
      fVar18 = *(float *)(param_1 + 0x21c) * 4.0 - 200.0;
      if (0.0 <= fVar18) {
        if (100.0 <= fVar18) {
          fVar18 = 100.0;
        }
      }
      else {
        fVar18 = 0.0;
      }
      *(float *)(param_1 + 0x228) = fVar18 * *(float *)(param_1 + 0x220) * 0.01;
      fVar18 = *(float *)(param_1 + 0x21c) * 4.0 - 300.0;
      if (0.0 <= fVar18) {
        if (100.0 <= fVar18) {
          fVar18 = 100.0;
        }
      }
      else {
        fVar18 = 0.0;
      }
      *(float *)(param_1 + 0x22c) = fVar18 * *(float *)(param_1 + 0x220) * 0.01;
      fVar18 = *(float *)(param_1 + 0x218);
      *(float *)(param_1 + 0x230) = *(float *)(param_1 + 0x8280);
      if (fVar18 != fVar19) {
        *(float *)(param_1 + 0x264) = (float)*(int *)(param_1 + 0x25c) * fVar18 * fVar18 * 1e-05;
      }
      *(float *)(param_1 + 600) = *(float *)(param_1 + 0x8280) / (float)*(int *)(param_1 + 0x25c);
    }
    if (param_4 != 0) {
      uVar9 = *(uint *)(param_1 + 0x250);
      uVar7 = *(uint *)(param_1 + 0x248);
      lStackX_10 = param_2;
      lStackX_18 = param_3;
      uStackX_20 = param_4;
      do {
        uVar16 = uVar7 - uVar9;
        if (uVar9 + uStackX_20 <= uVar7) {
          uVar16 = uStackX_20;
        }
        uVar8 = 0;
        uVar14 = uVar16 * uVar3;
        if (3 < uVar14) {
          pfVar12 = (float *)(lStackX_10 + 8);
          do {
            iVar15 = (int)uVar8;
            *(short *)(*(longlong *)(param_1 + 0x238) +
                      (ulonglong)(*(int *)(param_1 + 0x250) * uVar3 + iVar15) * 2) =
                 (short)(int)(pfVar12[-2] * 16384.0);
            *(short *)(*(longlong *)(param_1 + 0x238) +
                      (ulonglong)(*(int *)(param_1 + 0x250) * uVar3 + 1 + iVar15) * 2) =
                 (short)(int)(pfVar12[-1] * 16384.0);
            *(short *)(*(longlong *)(param_1 + 0x238) +
                      (ulonglong)(*(int *)(param_1 + 0x250) * uVar3 + 2 + iVar15) * 2) =
                 (short)(int)(*pfVar12 * 16384.0);
            uVar8 = (ulonglong)(iVar15 + 4U);
            *(short *)(*(longlong *)(param_1 + 0x238) +
                      (ulonglong)(*(int *)(param_1 + 0x250) * uVar3 + 3 + iVar15) * 2) =
                 (short)(int)(pfVar12[1] * 16384.0);
            pfVar12 = pfVar12 + 4;
          } while (iVar15 + 4U < uVar14 - 3);
        }
        if ((uint)uVar8 < uVar14) {
          pfVar12 = (float *)(lStackX_10 + uVar8 * 4);
          do {
            fVar19 = *pfVar12;
            pfVar12 = pfVar12 + 1;
            iVar15 = (int)uVar8;
            uVar9 = iVar15 + 1;
            uVar8 = (ulonglong)uVar9;
            *(short *)(*(longlong *)(param_1 + 0x238) +
                      (ulonglong)(*(int *)(param_1 + 0x250) * uVar3 + iVar15) * 2) =
                 (short)(int)(fVar19 * 16384.0);
          } while (uVar9 < uVar14);
        }
        uVar9 = 0;
        if (uVar16 != 0) {
          fVar19 = *(float *)(param_1 + 0x254);
          iVar15 = 0;
          do {
            fVar18 = *(float *)(param_1 + 0x264);
            fVar17 = *(float *)(param_1 + 0x268);
            lVar6 = 0;
            if (fVar18 - 0.03125 <= fVar17) {
              if (fVar18 + 0.03125 < fVar17) {
                fVar18 = fVar17 - 0.03125;
              }
            }
            else {
              fVar18 = fVar17 + 0.03125;
            }
            iVar13 = 0;
            *(float *)(param_1 + 0x268) = fVar18;
            if (0 < (int)uVar3) {
              pfVar12 = (float *)(lStackX_18 + (longlong)iVar15 * 4);
              do {
                uVar7 = (uint)((*(float *)(param_1 + 0x26c + lVar6 * 4) +
                               *(float *)(param_1 + 0x254)) * 32768.0);
                if ((int)uVar7 < 0) {
                  uVar7 = -uVar7;
                }
                uVar7 = uVar7 & 0x7fff;
                uVar8 = (ulonglong)uVar7;
                uVar10 = uVar7 >> 0xd;
                if (uVar7 >> 0xd == 0) {
                  fVar19 = *(float *)(param_1 + 0x278 + uVar8 * 4);
                }
                else if (uVar10 == 1) {
                  fVar19 = -*(float *)(param_1 + (0x409d - (ulonglong)uVar7) * 4);
                }
                else if (uVar10 == 2) {
                  fVar19 = -*(float *)(param_1 + -0xfd88 + uVar8 * 4);
                }
                else if (uVar10 == 3) {
                  fVar19 = *(float *)(param_1 + (0x809d - uVar8) * 4);
                }
                else {
                  fVar19 = 0.0;
                }
                fVar19 = (fVar19 * 0.5 - 0.5) * *(float *)(param_1 + 0x268) +
                         (float)*(uint *)(param_1 + 0x250) + (float)uVar9;
                if (0.0 <= fVar19) {
                  if (fVar2 < fVar19) {
                    fVar19 = fVar19 - fVar2;
                  }
                }
                else {
                  fVar19 = fVar19 + fVar2;
                }
                iVar11 = (int)fVar19;
                iVar4 = iVar11 * uVar3 + iVar13;
                iVar5 = iVar13 + ((iVar11 + 1U) % *(uint *)(param_1 + 0x248)) * uVar3;
                iVar13 = iVar13 + 1;
                lVar1 = lVar6 + 1;
                *pfVar12 = ((float)(int)*(short *)(*(longlong *)(param_1 + 0x238) +
                                                  (longlong)iVar4 * 2) * 6.1035156e-05 *
                            (1.0 - (fVar19 - (float)iVar11)) +
                           (float)(int)*(short *)(*(longlong *)(param_1 + 0x238) +
                                                 (longlong)iVar5 * 2) * 6.1035156e-05 *
                           (fVar19 - (float)iVar11)) * *(float *)(param_1 + 0x224 + lVar6 * 4) +
                           *(float *)((lStackX_10 - lStackX_18) + (longlong)pfVar12) *
                           *(float *)(param_1 + 0x220);
                pfVar12 = pfVar12 + 1;
                lVar6 = 0;
                if (lVar1 < 3) {
                  lVar6 = lVar1;
                }
              } while (iVar13 < (int)uVar3);
              fVar19 = *(float *)(param_1 + 0x254);
            }
            fVar19 = fVar19 + *(float *)(param_1 + 600);
            *(float *)(param_1 + 0x254) = fVar19;
            if (1.0 < fVar19) {
              fVar19 = fVar19 - 1.0;
              *(float *)(param_1 + 0x254) = fVar19;
            }
            uVar9 = uVar9 + 1;
            iVar15 = iVar15 + uVar3;
          } while (uVar9 < uVar16);
        }
        uVar7 = *(uint *)(param_1 + 0x248);
        uVar9 = *(int *)(param_1 + 0x250) + uVar16;
        *(uint *)(param_1 + 0x250) = uVar9;
        lStackX_10 = lStackX_10 + (ulonglong)uVar14 * 4;
        lStackX_18 = lStackX_18 + (ulonglong)(*param_6 * uVar16) * 4;
        if (uVar7 <= uVar9) {
          *(int32_t *)(param_1 + 0x250) = 0;
          uVar9 = 0;
        }
        uStackX_20 = uStackX_20 - uVar16;
      } while (uStackX_20 != 0);
    }
  }
  return 0;
}



uint64_t FUN_180774836(uint64_t param_1,float param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong unaff_RBX;
  float *pfVar9;
  int unaff_EDI;
  uint uVar10;
  longlong lVar11;
  longlong in_R10;
  uint in_R11D;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong unaff_R14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong in_stack_000000e8;
  longlong in_stack_000000f0;
  uint in_stack_000000f8;
  float in_stack_00000100;
  int *in_stack_00000108;
  
  fVar17 = *(float *)(unaff_RBX + 0x218);
  if (((fVar17 != param_2) || (*(float *)(unaff_RBX + 0x827c) != *(float *)(unaff_RBX + 0x21c))) ||
     (*(float *)(unaff_RBX + 0x8280) != *(float *)(unaff_RBX + 0x230))) {
    *(float *)(unaff_RBX + 0x218) = param_2;
    fVar16 = *(float *)(unaff_RBX + 0x827c);
    *(float *)(unaff_RBX + 0x21c) = fVar16;
    fVar15 = fVar16 + fVar16;
    fVar16 = 200.0 / (fVar16 + 200.0);
    *(float *)(unaff_RBX + 0x220) = fVar16;
    if (0.0 <= fVar15) {
      if (100.0 <= fVar15) {
        fVar15 = 100.0;
      }
    }
    else {
      fVar15 = 0.0;
    }
    *(float *)(unaff_RBX + 0x224) = fVar16 * fVar15 * 0.01;
    fVar16 = *(float *)(unaff_RBX + 0x21c) * 4.0 - 200.0;
    if (0.0 <= fVar16) {
      if (100.0 <= fVar16) {
        fVar16 = 100.0;
      }
    }
    else {
      fVar16 = 0.0;
    }
    *(float *)(unaff_RBX + 0x228) = fVar16 * *(float *)(unaff_RBX + 0x220) * 0.01;
    fVar16 = *(float *)(unaff_RBX + 0x21c) * 4.0 - 300.0;
    if (0.0 <= fVar16) {
      if (100.0 <= fVar16) {
        fVar16 = 100.0;
      }
    }
    else {
      fVar16 = 0.0;
    }
    *(float *)(unaff_RBX + 0x22c) = fVar16 * *(float *)(unaff_RBX + 0x220) * 0.01;
    fVar16 = *(float *)(unaff_RBX + 0x218);
    *(float *)(unaff_RBX + 0x230) = *(float *)(unaff_RBX + 0x8280);
    if (fVar16 != fVar17) {
      *(float *)(unaff_RBX + 0x264) = (float)*(int *)(unaff_RBX + 0x25c) * fVar16 * fVar16 * 1e-05;
    }
    *(float *)(unaff_RBX + 600) =
         *(float *)(unaff_RBX + 0x8280) / (float)*(int *)(unaff_RBX + 0x25c);
  }
  if (in_R11D != 0) {
    uVar10 = *(uint *)(unaff_RBX + 0x250);
    uVar5 = *(uint *)(unaff_RBX + 0x248);
    do {
      uVar3 = uVar5 - uVar10;
      if (uVar10 + in_R11D <= uVar5) {
        uVar3 = in_R11D;
      }
      uVar6 = 0;
      uVar13 = uVar3 * unaff_EDI;
      if (3 < uVar13) {
        pfVar9 = (float *)(in_stack_000000e8 + 8);
        do {
          iVar14 = (int)uVar6;
          *(short *)(*(longlong *)(unaff_RBX + 0x238) +
                    (ulonglong)(uint)(*(int *)(unaff_RBX + 0x250) * unaff_EDI + iVar14) * 2) =
               (short)(int)(pfVar9[-2] * 16384.0);
          *(short *)(*(longlong *)(unaff_RBX + 0x238) +
                    (ulonglong)(uint)(*(int *)(unaff_RBX + 0x250) * unaff_EDI + 1 + iVar14) * 2) =
               (short)(int)(pfVar9[-1] * 16384.0);
          *(short *)(*(longlong *)(unaff_RBX + 0x238) +
                    (ulonglong)(uint)(*(int *)(unaff_RBX + 0x250) * unaff_EDI + 2 + iVar14) * 2) =
               (short)(int)(*pfVar9 * 16384.0);
          uVar6 = (ulonglong)(iVar14 + 4U);
          *(short *)(*(longlong *)(unaff_RBX + 0x238) +
                    (ulonglong)(uint)(*(int *)(unaff_RBX + 0x250) * unaff_EDI + 3 + iVar14) * 2) =
               (short)(int)(pfVar9[1] * 16384.0);
          pfVar9 = pfVar9 + 4;
          in_R10 = in_stack_000000e8;
        } while (iVar14 + 4U < uVar13 - 3);
      }
      if ((uint)uVar6 < uVar13) {
        pfVar9 = (float *)(in_R10 + uVar6 * 4);
        do {
          fVar17 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          iVar14 = (int)uVar6;
          uVar10 = iVar14 + 1;
          uVar6 = (ulonglong)uVar10;
          *(short *)(*(longlong *)(unaff_RBX + 0x238) +
                    (ulonglong)(uint)(*(int *)(unaff_RBX + 0x250) * unaff_EDI + iVar14) * 2) =
               (short)(int)(fVar17 * 16384.0);
        } while (uVar10 < uVar13);
      }
      uVar10 = 0;
      if (uVar3 != 0) {
        fVar17 = *(float *)(unaff_RBX + 0x254);
        iVar14 = 0;
        do {
          fVar16 = *(float *)(unaff_RBX + 0x264);
          fVar15 = *(float *)(unaff_RBX + 0x268);
          lVar11 = 0;
          if (fVar16 - 0.03125 <= fVar15) {
            if (fVar16 + 0.03125 < fVar15) {
              fVar16 = fVar15 - 0.03125;
            }
          }
          else {
            fVar16 = fVar15 + 0.03125;
          }
          iVar12 = 0;
          *(float *)(unaff_RBX + 0x268) = fVar16;
          if (0 < unaff_EDI) {
            pfVar9 = (float *)(in_stack_000000f0 + (longlong)iVar14 * 4);
            do {
              uVar5 = (uint)((*(float *)(unaff_RBX + 0x26c + lVar11 * 4) +
                             *(float *)(unaff_RBX + 0x254)) * 32768.0);
              if ((int)uVar5 < 0) {
                uVar5 = -uVar5;
              }
              uVar5 = uVar5 & 0x7fff;
              uVar6 = (ulonglong)uVar5;
              uVar7 = uVar5 >> 0xd;
              if (uVar5 >> 0xd == 0) {
                fVar17 = *(float *)(unaff_RBX + 0x278 + uVar6 * 4);
              }
              else if (uVar7 == 1) {
                fVar17 = -*(float *)(unaff_RBX + (0x409d - (ulonglong)uVar5) * 4);
              }
              else if (uVar7 == 2) {
                fVar17 = -*(float *)(unaff_RBX + -0xfd88 + uVar6 * 4);
              }
              else if (uVar7 == 3) {
                fVar17 = *(float *)(unaff_RBX + (0x809d - uVar6) * 4);
              }
              else {
                fVar17 = 0.0;
              }
              fVar17 = (fVar17 * 0.5 - 0.5) * *(float *)(unaff_RBX + 0x268) +
                       (float)*(uint *)(unaff_RBX + 0x250) + (float)uVar10;
              if (0.0 <= fVar17) {
                if (in_stack_00000100 < fVar17) {
                  fVar17 = fVar17 - in_stack_00000100;
                }
              }
              else {
                fVar17 = fVar17 + in_stack_00000100;
              }
              iVar8 = (int)fVar17;
              iVar4 = iVar8 * unaff_EDI + iVar12;
              iVar2 = iVar12 + ((iVar8 + 1U) % *(uint *)(unaff_RBX + 0x248)) * unaff_EDI;
              iVar12 = iVar12 + 1;
              lVar1 = lVar11 + 1;
              *pfVar9 = ((float)(int)*(short *)(*(longlong *)(unaff_RBX + 0x238) +
                                               (longlong)iVar4 * 2) * 6.1035156e-05 *
                         (1.0 - (fVar17 - (float)iVar8)) +
                        (float)(int)*(short *)(*(longlong *)(unaff_RBX + 0x238) +
                                              (longlong)iVar2 * 2) * 6.1035156e-05 *
                        (fVar17 - (float)iVar8)) * *(float *)(unaff_RBX + 0x224 + lVar11 * 4) +
                        *(float *)((in_R10 - in_stack_000000f0) + (longlong)pfVar9) *
                        *(float *)(unaff_RBX + 0x220);
              pfVar9 = pfVar9 + 1;
              lVar11 = 0;
              if (lVar1 < 3) {
                lVar11 = lVar1;
              }
            } while (iVar12 < unaff_EDI);
            fVar17 = *(float *)(unaff_RBX + 0x254);
          }
          fVar17 = fVar17 + *(float *)(unaff_RBX + 600);
          *(float *)(unaff_RBX + 0x254) = fVar17;
          if (1.0 < fVar17) {
            fVar17 = fVar17 - 1.0;
            *(float *)(unaff_RBX + 0x254) = fVar17;
          }
          uVar10 = uVar10 + 1;
          iVar14 = iVar14 + unaff_EDI;
          in_R10 = in_stack_000000e8;
          unaff_R14 = in_stack_000000f0;
          in_R11D = in_stack_000000f8;
        } while (uVar10 < uVar3);
      }
      uVar5 = *(uint *)(unaff_RBX + 0x248);
      uVar10 = *(int *)(unaff_RBX + 0x250) + uVar3;
      *(uint *)(unaff_RBX + 0x250) = uVar10;
      in_R10 = in_R10 + (ulonglong)uVar13 * 4;
      unaff_R14 = unaff_R14 + (ulonglong)(*in_stack_00000108 * uVar3) * 4;
      if (uVar5 <= uVar10) {
        *(int32_t *)(unaff_RBX + 0x250) = 0;
        uVar10 = 0;
      }
      in_R11D = in_R11D - uVar3;
      in_stack_000000e8 = in_R10;
      in_stack_000000f0 = unaff_R14;
      in_stack_000000f8 = in_R11D;
    } while (in_R11D != 0);
  }
  return 0;
}



uint64_t FUN_1807748c8(void)

{
  return 0x26;
}



uint64_t FUN_1807748da(uint64_t param_1,float param_2,float param_3,float param_4)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong unaff_RBX;
  float *pfVar10;
  int unaff_EDI;
  uint uVar11;
  longlong lVar12;
  longlong in_R10;
  uint in_R11D;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong unaff_R14;
  float fVar16;
  float fVar17;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  longlong in_stack_000000e8;
  longlong in_stack_000000f0;
  uint in_stack_000000f8;
  float in_stack_00000100;
  int *in_stack_00000108;
  
  if (param_4 <= param_2) {
    param_2 = param_4;
  }
  *(float *)(unaff_RBX + 0x224) = param_3 * param_2 * 0.01;
  fVar16 = *(float *)(unaff_RBX + 0x21c) * 4.0 - in_XMM5_Da;
  if (unaff_XMM7_Da <= fVar16) {
    if (param_4 <= fVar16) {
      fVar16 = param_4;
    }
  }
  else {
    fVar16 = 0.0;
  }
  *(float *)(unaff_RBX + 0x228) = fVar16 * *(float *)(unaff_RBX + 0x220) * 0.01;
  fVar16 = *(float *)(unaff_RBX + 0x21c) * 4.0 - 300.0;
  if (unaff_XMM7_Da <= fVar16) {
    if (param_4 <= fVar16) {
      fVar16 = param_4;
    }
  }
  else {
    fVar16 = 0.0;
  }
  *(float *)(unaff_RBX + 0x22c) = fVar16 * *(float *)(unaff_RBX + 0x220) * 0.01;
  fVar16 = *(float *)(unaff_RBX + 0x218);
  *(float *)(unaff_RBX + 0x230) = *(float *)(unaff_RBX + 0x8280);
  if (fVar16 != unaff_XMM6_Da) {
    *(float *)(unaff_RBX + 0x264) = (float)*(int *)(unaff_RBX + 0x25c) * fVar16 * fVar16 * 1e-05;
  }
  *(float *)(unaff_RBX + 600) = *(float *)(unaff_RBX + 0x8280) / (float)*(int *)(unaff_RBX + 0x25c);
  if (in_R11D != 0) {
    uVar11 = *(uint *)(unaff_RBX + 0x250);
    uVar6 = *(uint *)(unaff_RBX + 0x248);
    do {
      uVar4 = uVar6 - uVar11;
      if (uVar11 + in_R11D <= uVar6) {
        uVar4 = in_R11D;
      }
      uVar7 = 0;
      uVar14 = uVar4 * unaff_EDI;
      if (3 < uVar14) {
        pfVar10 = (float *)(in_stack_000000e8 + 8);
        do {
          iVar15 = (int)uVar7;
          *(short *)(*(longlong *)(unaff_RBX + 0x238) +
                    (ulonglong)(uint)(*(int *)(unaff_RBX + 0x250) * unaff_EDI + iVar15) * 2) =
               (short)(int)(pfVar10[-2] * 16384.0);
          *(short *)(*(longlong *)(unaff_RBX + 0x238) +
                    (ulonglong)(uint)(*(int *)(unaff_RBX + 0x250) * unaff_EDI + 1 + iVar15) * 2) =
               (short)(int)(pfVar10[-1] * 16384.0);
          *(short *)(*(longlong *)(unaff_RBX + 0x238) +
                    (ulonglong)(uint)(*(int *)(unaff_RBX + 0x250) * unaff_EDI + 2 + iVar15) * 2) =
               (short)(int)(*pfVar10 * 16384.0);
          uVar7 = (ulonglong)(iVar15 + 4U);
          *(short *)(*(longlong *)(unaff_RBX + 0x238) +
                    (ulonglong)(uint)(*(int *)(unaff_RBX + 0x250) * unaff_EDI + 3 + iVar15) * 2) =
               (short)(int)(pfVar10[1] * 16384.0);
          pfVar10 = pfVar10 + 4;
          in_R10 = in_stack_000000e8;
        } while (iVar15 + 4U < uVar14 - 3);
      }
      if ((uint)uVar7 < uVar14) {
        pfVar10 = (float *)(in_R10 + uVar7 * 4);
        do {
          fVar16 = *pfVar10;
          pfVar10 = pfVar10 + 1;
          iVar15 = (int)uVar7;
          uVar11 = iVar15 + 1;
          uVar7 = (ulonglong)uVar11;
          *(short *)(*(longlong *)(unaff_RBX + 0x238) +
                    (ulonglong)(uint)(*(int *)(unaff_RBX + 0x250) * unaff_EDI + iVar15) * 2) =
               (short)(int)(fVar16 * 16384.0);
        } while (uVar11 < uVar14);
      }
      uVar11 = 0;
      if (uVar4 != 0) {
        fVar16 = *(float *)(unaff_RBX + 0x254);
        iVar15 = 0;
        do {
          fVar17 = *(float *)(unaff_RBX + 0x264);
          fVar3 = *(float *)(unaff_RBX + 0x268);
          lVar12 = 0;
          if (fVar17 - 0.03125 <= fVar3) {
            if (fVar17 + 0.03125 < fVar3) {
              fVar17 = fVar3 - 0.03125;
            }
          }
          else {
            fVar17 = fVar3 + 0.03125;
          }
          iVar13 = 0;
          *(float *)(unaff_RBX + 0x268) = fVar17;
          if (0 < unaff_EDI) {
            pfVar10 = (float *)(in_stack_000000f0 + (longlong)iVar15 * 4);
            do {
              uVar6 = (uint)((*(float *)(unaff_RBX + 0x26c + lVar12 * 4) +
                             *(float *)(unaff_RBX + 0x254)) * 32768.0);
              if ((int)uVar6 < 0) {
                uVar6 = -uVar6;
              }
              uVar6 = uVar6 & 0x7fff;
              uVar7 = (ulonglong)uVar6;
              uVar8 = uVar6 >> 0xd;
              if (uVar6 >> 0xd == 0) {
                fVar16 = *(float *)(unaff_RBX + 0x278 + uVar7 * 4);
              }
              else if (uVar8 == 1) {
                fVar16 = -*(float *)(unaff_RBX + (0x409d - (ulonglong)uVar6) * 4);
              }
              else if (uVar8 == 2) {
                fVar16 = -*(float *)(unaff_RBX + -0xfd88 + uVar7 * 4);
              }
              else {
                fVar16 = unaff_XMM7_Da;
                if (uVar8 == 3) {
                  fVar16 = *(float *)(unaff_RBX + (0x809d - uVar7) * 4);
                }
              }
              fVar16 = (fVar16 * 0.5 - 0.5) * *(float *)(unaff_RBX + 0x268) +
                       (float)*(uint *)(unaff_RBX + 0x250) + (float)uVar11;
              if (unaff_XMM7_Da <= fVar16) {
                if (in_stack_00000100 < fVar16) {
                  fVar16 = fVar16 - in_stack_00000100;
                }
              }
              else {
                fVar16 = fVar16 + in_stack_00000100;
              }
              iVar9 = (int)fVar16;
              iVar5 = iVar9 * unaff_EDI + iVar13;
              iVar2 = iVar13 + ((iVar9 + 1U) % *(uint *)(unaff_RBX + 0x248)) * unaff_EDI;
              iVar13 = iVar13 + 1;
              lVar1 = lVar12 + 1;
              *pfVar10 = ((float)(int)*(short *)(*(longlong *)(unaff_RBX + 0x238) +
                                                (longlong)iVar5 * 2) * 6.1035156e-05 *
                          (1.0 - (fVar16 - (float)iVar9)) +
                         (float)(int)*(short *)(*(longlong *)(unaff_RBX + 0x238) +
                                               (longlong)iVar2 * 2) * 6.1035156e-05 *
                         (fVar16 - (float)iVar9)) * *(float *)(unaff_RBX + 0x224 + lVar12 * 4) +
                         *(float *)((in_R10 - in_stack_000000f0) + (longlong)pfVar10) *
                         *(float *)(unaff_RBX + 0x220);
              pfVar10 = pfVar10 + 1;
              lVar12 = 0;
              if (lVar1 < 3) {
                lVar12 = lVar1;
              }
            } while (iVar13 < unaff_EDI);
            fVar16 = *(float *)(unaff_RBX + 0x254);
          }
          fVar16 = fVar16 + *(float *)(unaff_RBX + 600);
          *(float *)(unaff_RBX + 0x254) = fVar16;
          if (1.0 < fVar16) {
            fVar16 = fVar16 - 1.0;
            *(float *)(unaff_RBX + 0x254) = fVar16;
          }
          uVar11 = uVar11 + 1;
          iVar15 = iVar15 + unaff_EDI;
          in_R10 = in_stack_000000e8;
          unaff_R14 = in_stack_000000f0;
          in_R11D = in_stack_000000f8;
        } while (uVar11 < uVar4);
      }
      uVar6 = *(uint *)(unaff_RBX + 0x248);
      uVar11 = *(int *)(unaff_RBX + 0x250) + uVar4;
      *(uint *)(unaff_RBX + 0x250) = uVar11;
      in_R10 = in_R10 + (ulonglong)uVar14 * 4;
      unaff_R14 = unaff_R14 + (ulonglong)(*in_stack_00000108 * uVar4) * 4;
      if (uVar6 <= uVar11) {
        *(int32_t *)(unaff_RBX + 0x250) = 0;
        uVar11 = 0;
      }
      in_R11D = in_R11D - uVar4;
      in_stack_000000e8 = in_R10;
      in_stack_000000f0 = unaff_R14;
      in_stack_000000f8 = in_R11D;
    } while (in_R11D != 0);
  }
  return 0;
}



uint64_t FUN_1807749e9(uint param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong unaff_RBX;
  float *pfVar10;
  int unaff_EDI;
  uint uVar11;
  longlong lVar12;
  longlong in_R10;
  uint in_R11D;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong unaff_R14;
  float fVar16;
  float fVar17;
  float in_XMM4_Da;
  uint in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  longlong in_stack_000000e8;
  longlong in_stack_000000f0;
  uint in_stack_000000f8;
  int *in_stack_00000108;
  
  do {
    uVar4 = param_2 - param_1;
    if (param_1 + in_R11D <= param_2) {
      uVar4 = in_R11D;
    }
    uVar7 = 0;
    uVar14 = uVar4 * unaff_EDI;
    if (3 < uVar14) {
      pfVar10 = (float *)(in_stack_000000e8 + 8);
      do {
        iVar15 = (int)uVar7;
        *(short *)(*(longlong *)(unaff_RBX + 0x238) +
                  (ulonglong)(uint)(*(int *)(unaff_RBX + 0x250) * unaff_EDI + iVar15) * 2) =
             (short)(int)(pfVar10[-2] * 16384.0);
        *(short *)(*(longlong *)(unaff_RBX + 0x238) +
                  (ulonglong)(uint)(*(int *)(unaff_RBX + 0x250) * unaff_EDI + 1 + iVar15) * 2) =
             (short)(int)(pfVar10[-1] * 16384.0);
        *(short *)(*(longlong *)(unaff_RBX + 0x238) +
                  (ulonglong)(uint)(*(int *)(unaff_RBX + 0x250) * unaff_EDI + 2 + iVar15) * 2) =
             (short)(int)(*pfVar10 * 16384.0);
        uVar7 = (ulonglong)(iVar15 + 4U);
        *(short *)(*(longlong *)(unaff_RBX + 0x238) +
                  (ulonglong)(uint)(*(int *)(unaff_RBX + 0x250) * unaff_EDI + 3 + iVar15) * 2) =
             (short)(int)(pfVar10[1] * 16384.0);
        pfVar10 = pfVar10 + 4;
        in_R10 = in_stack_000000e8;
      } while (iVar15 + 4U < uVar14 - 3);
    }
    if ((uint)uVar7 < uVar14) {
      pfVar10 = (float *)(in_R10 + uVar7 * 4);
      do {
        fVar17 = *pfVar10;
        pfVar10 = pfVar10 + 1;
        iVar15 = (int)uVar7;
        uVar11 = iVar15 + 1;
        uVar7 = (ulonglong)uVar11;
        *(short *)(*(longlong *)(unaff_RBX + 0x238) +
                  (ulonglong)(uint)(*(int *)(unaff_RBX + 0x250) * unaff_EDI + iVar15) * 2) =
             (short)(int)(fVar17 * 16384.0);
      } while (uVar11 < uVar14);
    }
    uVar11 = 0;
    if (uVar4 != 0) {
      fVar17 = *(float *)(unaff_RBX + 0x254);
      iVar15 = 0;
      do {
        fVar16 = *(float *)(unaff_RBX + 0x264);
        fVar3 = *(float *)(unaff_RBX + 0x268);
        lVar12 = 0;
        if (fVar16 - 0.03125 <= fVar3) {
          if (fVar16 + 0.03125 < fVar3) {
            fVar16 = fVar3 - 0.03125;
          }
        }
        else {
          fVar16 = fVar3 + 0.03125;
        }
        iVar13 = 0;
        *(float *)(unaff_RBX + 0x268) = fVar16;
        if (0 < unaff_EDI) {
          pfVar10 = (float *)(in_stack_000000f0 + (longlong)iVar15 * 4);
          do {
            uVar6 = (uint)((*(float *)(unaff_RBX + 0x26c + lVar12 * 4) +
                           *(float *)(unaff_RBX + 0x254)) * 32768.0);
            if ((int)uVar6 < 0) {
              uVar6 = -uVar6;
            }
            uVar6 = uVar6 & 0x7fff;
            uVar7 = (ulonglong)uVar6;
            uVar8 = uVar6 >> 0xd;
            if (uVar6 >> 0xd == 0) {
              fVar17 = *(float *)(unaff_RBX + 0x278 + uVar7 * 4);
            }
            else if (uVar8 == 1) {
              fVar17 = (float)(*(uint *)(unaff_RBX + (0x409d - (ulonglong)uVar6) * 4) ^ in_XMM5_Da);
            }
            else if (uVar8 == 2) {
              fVar17 = (float)(*(uint *)(unaff_RBX + -0xfd88 + uVar7 * 4) ^ in_XMM5_Da);
            }
            else {
              fVar17 = unaff_XMM7_Da;
              if (uVar8 == 3) {
                fVar17 = *(float *)(unaff_RBX + (0x809d - uVar7) * 4);
              }
            }
            fVar17 = (fVar17 * unaff_XMM6_Da - unaff_XMM6_Da) * *(float *)(unaff_RBX + 0x268) +
                     (float)*(uint *)(unaff_RBX + 0x250) + (float)uVar11;
            if (unaff_XMM7_Da <= fVar17) {
              if (in_XMM4_Da < fVar17) {
                fVar17 = fVar17 - in_XMM4_Da;
              }
            }
            else {
              fVar17 = fVar17 + in_XMM4_Da;
            }
            iVar9 = (int)fVar17;
            iVar5 = iVar9 * unaff_EDI + iVar13;
            iVar2 = iVar13 + ((iVar9 + 1U) % *(uint *)(unaff_RBX + 0x248)) * unaff_EDI;
            iVar13 = iVar13 + 1;
            lVar1 = lVar12 + 1;
            *pfVar10 = ((float)(int)*(short *)(*(longlong *)(unaff_RBX + 0x238) +
                                              (longlong)iVar5 * 2) * 6.1035156e-05 *
                        (1.0 - (fVar17 - (float)iVar9)) +
                       (float)(int)*(short *)(*(longlong *)(unaff_RBX + 0x238) + (longlong)iVar2 * 2
                                             ) * 6.1035156e-05 * (fVar17 - (float)iVar9)) *
                       *(float *)(unaff_RBX + 0x224 + lVar12 * 4) +
                       *(float *)((in_R10 - in_stack_000000f0) + (longlong)pfVar10) *
                       *(float *)(unaff_RBX + 0x220);
            pfVar10 = pfVar10 + 1;
            lVar12 = 0;
            if (lVar1 < 3) {
              lVar12 = lVar1;
            }
          } while (iVar13 < unaff_EDI);
          fVar17 = *(float *)(unaff_RBX + 0x254);
        }
        fVar17 = fVar17 + *(float *)(unaff_RBX + 600);
        *(float *)(unaff_RBX + 0x254) = fVar17;
        if (1.0 < fVar17) {
          fVar17 = fVar17 - 1.0;
          *(float *)(unaff_RBX + 0x254) = fVar17;
        }
        uVar11 = uVar11 + 1;
        iVar15 = iVar15 + unaff_EDI;
        in_R10 = in_stack_000000e8;
        unaff_R14 = in_stack_000000f0;
        in_R11D = in_stack_000000f8;
      } while (uVar11 < uVar4);
    }
    param_2 = *(uint *)(unaff_RBX + 0x248);
    param_1 = *(int *)(unaff_RBX + 0x250) + uVar4;
    *(uint *)(unaff_RBX + 0x250) = param_1;
    in_R10 = in_R10 + (ulonglong)uVar14 * 4;
    unaff_R14 = unaff_R14 + (ulonglong)(*in_stack_00000108 * uVar4) * 4;
    if (param_2 <= param_1) {
      *(int32_t *)(unaff_RBX + 0x250) = 0;
      param_1 = 0;
    }
    in_R11D = in_R11D - uVar4;
    in_stack_000000e8 = in_R10;
    in_stack_000000f0 = unaff_R14;
    in_stack_000000f8 = in_R11D;
  } while (in_R11D != 0);
  return 0;
}



uint64_t FUN_180774e89(void)

{
  return 0;
}



uint64_t FUN_180774e99(void)

{
  return 0;
}



uint64_t FUN_180774eb0(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  *(uint64_t *)(param_1 + 0x250) = 0;
  if (*(longlong *)(param_1 + 0x238) == 0) {
    fVar2 = *(float *)(param_1 + 0x827c);
    *(float *)(param_1 + 0x21c) = fVar2;
    fVar1 = fVar2 + fVar2;
    fVar2 = 200.0 / (fVar2 + 200.0);
    *(float *)(param_1 + 0x220) = fVar2;
    if (0.0 <= fVar1) {
      if (100.0 <= fVar1) {
        fVar1 = 100.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
    *(float *)(param_1 + 0x224) = fVar1 * 0.01 * fVar2;
    fVar2 = *(float *)(param_1 + 0x21c) * 4.0 - 200.0;
    if (0.0 <= fVar2) {
      if (100.0 <= fVar2) {
        fVar2 = 100.0;
      }
    }
    else {
      fVar2 = 0.0;
    }
    *(float *)(param_1 + 0x228) = fVar2 * 0.01 * *(float *)(param_1 + 0x220);
    fVar1 = *(float *)(param_1 + 0x21c) * 4.0 - 300.0;
    fVar2 = 0.0;
    if ((0.0 <= fVar1) && (fVar2 = fVar1, 100.0 <= fVar1)) {
      fVar2 = 100.0;
    }
    *(float *)(param_1 + 0x22c) = fVar2 * 0.01 * *(float *)(param_1 + 0x220);
    fVar2 = *(float *)(param_1 + 0x8278);
    *(float *)(param_1 + 0x230) = *(float *)(param_1 + 0x8280);
    *(float *)(param_1 + 0x218) = fVar2;
    *(float *)(param_1 + 600) = *(float *)(param_1 + 0x8280) / (float)*(int *)(param_1 + 0x25c);
    fVar2 = (float)*(int *)(param_1 + 0x25c) * fVar2 * fVar2 * 1e-05;
    *(float *)(param_1 + 0x264) = fVar2;
    *(float *)(param_1 + 0x268) = fVar2;
    *(int32_t *)(param_1 + 0x26c) = 0;
    *(int32_t *)(param_1 + 0x270) = 0x3e800000;
    *(int32_t *)(param_1 + 0x274) = 0x3f000000;
    return 0;
  }
                    // WARNING: Subroutine does not return
  memset(*(longlong *)(param_1 + 0x238),0,*(int32_t *)(param_1 + 0x24c));
}



uint64_t FUN_180775040(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  iVar4 = 0;
  lVar2 = *(longlong *)(lVar1 + 0xe8);
  if (0 < *(int *)(lVar2 + 0x60)) {
    lVar5 = 0;
    do {
      uVar3 = func_0x000180762a70(lVar1,iVar4,
                                  *(int32_t *)
                                   (*(longlong *)(*(longlong *)(lVar2 + 0x68) + lVar5) + 0x38));
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar2 = *(longlong *)(lVar1 + 0xe8);
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < *(int *)(lVar2 + 0x60));
  }
  return 0;
}



uint64_t FUN_1807750d0(longlong *param_1,uint64_t param_2,int32_t *param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  *param_3 = *(int32_t *)(lVar1 + 0x220);
  if (param_4 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18076b390(param_4,0x20,&unknown_var_2048_ptr,(double)*(float *)(lVar1 + 0x220));
  }
  return 0;
}







