#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part142.c - 2 个函数

// 函数: void FUN_18074dfc0(longlong *param_1,int param_2,char param_3)
void FUN_18074dfc0(longlong *param_1,int param_2,char param_3)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar15;
  uint uVar16;
  float fVar17;
  int32_t uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int8_t auStack_e78 [32];
  float *pfStack_e58;
  int32_t uStack_e50;
  float fStack_e40;
  int iStack_e3c;
  uint auStack_e38 [2];
  float afStack_e30 [2];
  uint64_t uStack_e28;
  float fStack_e20;
  longlong lStack_e18;
  float fStack_e10;
  float afStack_e08 [2];
  longlong lStack_e00;
  float fStack_df8;
  int8_t auStack_df0 [8];
  uint64_t uStack_de8;
  float fStack_de0;
  int8_t auStack_dd8 [3328];
  ulonglong uStack_d8;
  ulonglong uVar14;
  
  uStack_d8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_e78;
  auStack_e38[0] = 0;
  iStack_e3c = param_2;
  iVar5 = (**(code **)(*param_1 + 0x98))(param_1,auStack_e38);
  uVar16 = auStack_e38[0];
  if (iVar5 != 0) goto FUN_18074f89e;
  if ((auStack_e38[0] & 0x40000010) == 0x10) {
    fVar17 = *(float *)(param_1 + 0x19);
    pfVar1 = (float *)((longlong)param_1 + 0xcc);
    fVar25 = *pfVar1;
    bVar3 = false;
    if ((*(byte *)(param_1 + 9) & 4) == 0) {
      lVar7 = param_1[1];
      cVar4 = func_0x00018074caf0(lVar7);
      if (((cVar4 != '\0') || (*(char *)(lVar7 + 0x12440) != '\0')) || (param_3 != '\0'))
      goto LAB_18074e0a0;
LAB_18074e14c:
      lVar7 = FUN_180785db0(param_1[1] + 0x12448,param_1[10]);
      if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x20) == param_1[10])) {
        bVar3 = true;
        *(int32_t *)(param_1 + 0x19) = *(int32_t *)(lVar7 + 0x34);
        *pfVar1 = *(float *)(lVar7 + 0x38);
      }
    }
    else {
LAB_18074e0a0:
      lVar7 = param_1[1];
      if (*(longlong *)(lVar7 + 0x12430) != 0) {
        if ((uVar16 >> 0x12 & 1) == 0) {
          uStack_de8 = param_1[0x10];
          fStack_de0 = *(float *)(param_1 + 0x11);
        }
        else {
          uStack_de8 = CONCAT44(*(float *)(lVar7 + 0x11084) + *(float *)((longlong)param_1 + 0x84),
                                *(float *)(lVar7 + 0x11080) + *(float *)(param_1 + 0x10));
          fStack_de0 = *(float *)(lVar7 + 0x11088) + *(float *)(param_1 + 0x11);
        }
        if (param_3 == '\0') {
          FUN_180785b10(lVar7 + 0x12448,param_1[10],&uStack_de8);
          goto LAB_18074e14c;
        }
        pfStack_e58 = pfVar1;
        FUN_180785c10(lVar7 + 0x12438,(float *)(lVar7 + 0x11080),&uStack_de8,param_1 + 0x19);
        bVar3 = true;
      }
      if (param_3 == '\0') goto LAB_18074e14c;
    }
    if ((param_1[0x2e] != 0) && (bVar3)) {
      lVar7 = param_1[10];
      iVar5 = FUN_180743cc0(param_1[1],0);
      if (iVar5 != 0) goto FUN_18074f89e;
      pfStack_e58 = pfVar1;
      iVar5 = (*(code *)param_1[0x2e])(lVar7,0,3,param_1 + 0x19);
      iVar6 = FUN_180743da0(param_1[1]);
      if ((iVar6 != 0) || ((iVar5 != 0 && (iVar5 != 0)))) goto FUN_18074f89e;
    }
    if (*(uint *)(param_1[1] + 0x1164c) == 0) {
      fVar22 = 500.0;
    }
    else {
      fVar22 = (float)*(uint *)(param_1[1] + 0x1164c);
    }
    fVar24 = *(float *)(param_1 + 0x19);
    if (fVar17 != fVar24) {
      fVar17 = (fVar24 - *(float *)(param_1 + 0x18)) / fVar22;
      if (0.0 <= fVar17) {
        if (fVar17 <= 0.0001) {
          fVar17 = 0.0001;
        }
      }
      else if (-0.0001 <= fVar17) {
        fVar17 = -0.0001;
      }
      *(float *)(param_1 + 0x1b) = fVar17;
    }
    fVar17 = *pfVar1;
    if (fVar25 != fVar17) {
      fVar22 = (fVar17 - *(float *)((longlong)param_1 + 0xc4)) / fVar22;
      if (0.0 <= fVar22) {
        if (fVar22 <= 0.0001) {
          fVar22 = 0.0001;
        }
      }
      else if (-0.0001 <= fVar22) {
        fVar22 = -0.0001;
      }
      *(float *)((longlong)param_1 + 0xdc) = fVar22;
    }
    if (((*(float *)(param_1 + 0x18) != fVar24) || (fVar17 != *(float *)((longlong)param_1 + 0xc4)))
       && ((iStack_e3c != 0 || (param_3 != '\0')))) {
      if (param_3 == '\0') {
        fVar25 = (float)iStack_e3c * *(float *)(param_1 + 0x1b) + *(float *)(param_1 + 0x18);
        fVar22 = *(float *)((longlong)param_1 + 0xdc) * (float)iStack_e3c +
                 *(float *)((longlong)param_1 + 0xc4);
        *(float *)(param_1 + 0x18) = fVar25;
        *(float *)((longlong)param_1 + 0xc4) = fVar22;
        if (*(float *)(param_1 + 0x1b) <= 0.0) {
          if (fVar25 < fVar24) goto LAB_18074e31e;
        }
        else if (fVar24 < fVar25) {
LAB_18074e31e:
          *(float *)(param_1 + 0x18) = fVar24;
          fVar25 = fVar24;
        }
        if (*(float *)((longlong)param_1 + 0xdc) <= 0.0) {
          if (fVar22 < fVar17) goto LAB_18074e34e;
        }
        else if (fVar17 < fVar22) {
          *(float *)((longlong)param_1 + 0xc4) = fVar17;
          fVar22 = fVar17;
        }
      }
      else {
        *(float *)(param_1 + 0x18) = fVar24;
        fVar25 = fVar24;
LAB_18074e34e:
        *(float *)((longlong)param_1 + 0xc4) = fVar17;
        fVar22 = fVar17;
      }
      (**(code **)(*param_1 + 0x198))(param_1,fVar25,fVar22,0);
    }
  }
  uVar15 = 0;
  iVar5 = func_0x0001807460a0(param_1[1],afStack_e30,afStack_e08,auStack_df0);
  if (iVar5 != 0) {
FUN_18074f89e:
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_d8 ^ (ulonglong)auStack_e78);
  }
  afStack_e30[0] = afStack_e30[0] * *(float *)((longlong)param_1 + 0xf4);
  if ((*(byte *)(param_1 + 9) & 4) == 0) {
    lVar7 = (longlong)*(int *)(param_1[1] + 0x11400);
    if (0 < lVar7) {
      pcVar8 = (char *)(param_1[1] + 0x110ec);
      uVar10 = uVar15;
      do {
        if (*pcVar8 != '\0') goto LAB_18074e436;
        uVar10 = uVar10 + 1;
        pcVar8 = pcVar8 + 0x70;
      } while ((longlong)uVar10 < lVar7);
    }
  }
  else {
LAB_18074e436:
    fVar17 = 3.4028235e+38;
    iVar5 = func_0x000180746080(param_1[1],&iStack_e3c);
    if (iVar5 != 0) goto FUN_18074f89e;
    uVar10 = uVar15;
    uVar14 = uVar15;
    iVar5 = iStack_e3c;
    uVar16 = auStack_e38[0];
    if (0 < iStack_e3c) {
      do {
        lVar7 = param_1[1];
        if ((uVar16 >> 0x12 & 1) == 0) {
          fVar24 = *(float *)((longlong)param_1 + 0x84) - *(float *)(lVar7 + 0x11084 + uVar10);
          fVar22 = *(float *)(param_1 + 0x10) - *(float *)(lVar7 + 0x11080 + uVar10);
          fVar25 = *(float *)(param_1 + 0x11) - *(float *)(lVar7 + 0x11088 + uVar10);
        }
        else {
          lStack_e00 = param_1[0x10];
          fVar25 = *(float *)(param_1 + 0x11);
          fVar24 = (float)((ulonglong)lStack_e00 >> 0x20);
          fVar22 = (float)lStack_e00;
          fStack_df8 = fVar25;
        }
        if ((*(byte *)(lVar7 + 0x78) & 4) != 0) {
          fVar25 = -fVar25;
        }
        fVar25 = SQRT(fVar24 * fVar24 + fVar22 * fVar22 + fVar25 * fVar25);
        if (fVar25 < fVar17) {
          *(float *)(param_1 + 0x13) = fVar25;
          if (*(longlong *)(lVar7 + 0x11410) == 0) {
            if ((uVar16 >> 0x1a & 1) == 0) {
              uVar13 = uVar16 & 0x4f00000;
              if (uVar13 == 0x200000) {
                uVar11 = 1;
LAB_18074e6a1:
                uStack_e50 = *(int32_t *)(lVar7 + 0x11408);
                pfStack_e58 = &fStack_e40;
                func_0x0001807d49f0(uVar11,fVar25,*(int32_t *)((longlong)param_1 + 0x9c),
                                    (int)param_1[0x14]);
                iVar5 = iStack_e3c;
                uVar16 = auStack_e38[0];
                fVar17 = fStack_e40;
              }
              else {
                uVar11 = uVar15;
                if (uVar13 == 0x400000) goto LAB_18074e6a1;
                if (uVar13 == 0x800000) {
                  uVar11 = 3;
                  goto LAB_18074e6a1;
                }
                uVar11 = 2;
                if (uVar13 != 0x4000000) goto LAB_18074e6a1;
                fVar17 = 1.0;
              }
LAB_18074e6de:
              *(float *)(param_1 + 0xf) = fVar17;
            }
            else {
              pfVar1 = (float *)param_1[0x1c];
              if (pfVar1 != (float *)0x0) {
                iVar6 = (int)param_1[0x1d];
                if (iVar6 != 0) {
                  if (fVar25 < pfVar1[(longlong)iVar6 * 3 + -3]) {
                    iVar9 = 1;
                    lVar12 = 1;
                    pfVar2 = pfVar1;
                    if (1 < iVar6) {
                      do {
                        fVar17 = *pfVar2;
                        if ((fVar17 <= fVar25) && (fVar22 = pfVar2[3], fVar25 < fVar22)) {
                          fVar17 = (fVar25 - fVar17) / (fVar22 - fVar17);
                          fVar17 = (1.0 - fVar17) * pfVar1[lVar12 * 3 + -2] +
                                   fVar17 * pfVar1[lVar12 * 3 + 1];
                          goto LAB_18074e6de;
                        }
                        iVar9 = iVar9 + 1;
                        lVar12 = lVar12 + 1;
                        pfVar2 = pfVar2 + 3;
                      } while (iVar9 < iVar6);
                    }
                  }
                  else {
                    *(float *)(param_1 + 0xf) = pfVar1[(longlong)iVar6 * 3 + -2];
                  }
                  goto LAB_18074e6e3;
                }
              }
              *(int32_t *)(param_1 + 0xf) = 0x3f800000;
            }
          }
          else {
            iVar5 = FUN_180743cc0(lVar7,0);
            if (iVar5 != 0) goto FUN_18074f89e;
            uVar18 = (**(code **)(param_1[1] + 0x11410))(param_1[10],(int)param_1[0x13]);
            *(int32_t *)(param_1 + 0xf) = uVar18;
            iVar6 = FUN_180743da0(param_1[1]);
            iVar5 = iStack_e3c;
            uVar16 = auStack_e38[0];
            if (iVar6 != 0) goto FUN_18074f89e;
          }
LAB_18074e6e3:
          if (0.0 <= *(float *)(param_1 + 0xf)) {
            if (1.0 < *(float *)(param_1 + 0xf)) {
              *(int32_t *)(param_1 + 0xf) = 0x3f800000;
            }
          }
          else {
            *(int32_t *)(param_1 + 0xf) = 0;
          }
          fVar22 = *(float *)((longlong)param_1 + 0xac);
          fVar17 = fVar25;
          if ((fVar22 < 360.0) ||
             (*(float *)(param_1 + 0x15) <= 360.0 && *(float *)(param_1 + 0x15) != 360.0)) {
            if (0.0 < *(float *)(param_1 + 0x13)) {
              fStack_de0 = *(float *)((longlong)param_1 + 0xbc);
              uStack_de8 = *(longlong *)((longlong)param_1 + 0xb4);
              fVar25 = (float)acosf();
              fVar25 = fVar25 * 57.295776 + fVar25 * 57.295776;
            }
            else {
              fVar25 = 0.0;
            }
            fVar24 = *(float *)(param_1 + 0x15);
            if (fVar24 <= fVar25) {
              fVar26 = *(float *)(param_1 + 0x16);
              if (fVar25 < fVar22) {
                fVar25 = (fVar25 - fVar24) / (fVar22 - fVar24);
                fVar26 = fVar26 * fVar25 + (1.0 - fVar25);
              }
              *(float *)((longlong)param_1 + 0xa4) = fVar26;
            }
            else {
              *(int32_t *)((longlong)param_1 + 0xa4) = 0x3f800000;
            }
          }
        }
        if ((0.0 < afStack_e30[0]) && (iVar5 == 1)) {
          if ((uVar16 >> 0x12 & 1) == 0) {
            fVar19 = *(float *)(param_1 + 0x12) - *(float *)(lVar7 + 0x1109c + uVar10);
            fVar26 = *(float *)((longlong)param_1 + 0x8c) - *(float *)(lVar7 + 0x11098 + uVar10);
            fVar25 = *(float *)((longlong)param_1 + 0x94) - *(float *)(lVar7 + 0x110a0 + uVar10);
            fVar24 = *(float *)(param_1 + 0x10) - *(float *)(lVar7 + 0x11080 + uVar10);
            fVar22 = *(float *)(param_1 + 0x11) - *(float *)(lVar7 + 0x11088 + uVar10);
            fVar20 = *(float *)((longlong)param_1 + 0x84) - *(float *)(lVar7 + 0x11084 + uVar10);
          }
          else {
            uStack_e28 = *(uint64_t *)((longlong)param_1 + 0x8c);
            fVar25 = *(float *)((longlong)param_1 + 0x94);
            fVar19 = (float)((ulonglong)uStack_e28 >> 0x20);
            lStack_e18 = param_1[0x10];
            fVar20 = (float)((ulonglong)lStack_e18 >> 0x20);
            fVar22 = *(float *)(param_1 + 0x11);
            fVar24 = (float)lStack_e18;
            fVar26 = (float)uStack_e28;
            fStack_e20 = fVar25;
            fStack_e10 = fVar22;
          }
          fVar23 = 0.0;
          fVar21 = SQRT(fVar20 * fVar20 + fVar24 * fVar24 + fVar22 * fVar22);
          if (0.0 < fVar21) {
            fVar23 = (fVar20 * fVar19 + fVar24 * fVar26 + fVar22 * fVar25) / fVar21;
          }
          *(float *)((longlong)param_1 + 0x7c) =
               (afStack_e08[0] * 340.0 - fVar23 * afStack_e30[0]) / (afStack_e08[0] * 340.0);
        }
        if (*(float *)((longlong)param_1 + 0x7c) <= 1e-06 &&
            *(float *)((longlong)param_1 + 0x7c) != 1e-06) {
          *(int32_t *)((longlong)param_1 + 0x7c) = 0x358637bd;
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        uVar10 = uVar10 + 0x70;
      } while ((int)uVar13 < iVar5);
    }
  }
                    // WARNING: Subroutine does not return
  memset(auStack_dd8,0,0x80);
}





// 函数: void FUN_18074e00f(void)
void FUN_18074e00f(void)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  char unaff_SIL;
  uint uVar13;
  ulonglong uVar14;
  ulonglong unaff_R13;
  uint uVar15;
  float fVar16;
  float fVar17;
  int32_t uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fStack0000000000000038;
  int iStack000000000000003c;
  uint in_stack_00000040;
  float in_stack_00000048;
  float fStack0000000000000050;
  float in_stack_00000058;
  float fStack0000000000000060;
  float in_stack_00000068;
  float in_stack_00000070;
  float fStack0000000000000078;
  
  uVar15 = in_stack_00000040;
  if ((in_stack_00000040 & 0x40000010) == 0x10) {
    fVar17 = *(float *)(unaff_RBX + 0x19);
    pfVar1 = (float *)((longlong)unaff_RBX + 0xcc);
    fVar24 = *pfVar1;
    bVar3 = false;
    if ((*(byte *)(unaff_RBX + 9) & 4) == 0) {
      lVar7 = unaff_RBX[1];
      cVar4 = func_0x00018074caf0(lVar7);
      if (((cVar4 != '\0') || (*(char *)(lVar7 + 0x12440) != '\0')) || (unaff_SIL != '\0'))
      goto LAB_18074e0a0;
LAB_18074e14c:
      lVar7 = FUN_180785db0(unaff_RBX[1] + 0x12448,unaff_RBX[10]);
      if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x20) == unaff_RBX[10])) {
        bVar3 = true;
        *(int32_t *)(unaff_RBX + 0x19) = *(int32_t *)(lVar7 + 0x34);
        *pfVar1 = *(float *)(lVar7 + 0x38);
      }
    }
    else {
LAB_18074e0a0:
      lVar7 = unaff_RBX[1];
      if (*(longlong *)(lVar7 + 0x12430) != 0) {
        if ((uVar15 >> 0x12 & 1) == 0) {
          uVar18 = *(int32_t *)((longlong)unaff_RBX + 0x84);
          *(int *)(unaff_RBP + -0x70) = (int)unaff_RBX[0x10];
          fVar16 = *(float *)(unaff_RBX + 0x11);
          *(int32_t *)(unaff_RBP + -0x6c) = uVar18;
        }
        else {
          *(float *)(unaff_RBP + -0x70) = *(float *)(lVar7 + 0x11080) + *(float *)(unaff_RBX + 0x10)
          ;
          *(float *)(unaff_RBP + -0x6c) =
               *(float *)(lVar7 + 0x11084) + *(float *)((longlong)unaff_RBX + 0x84);
          fVar16 = *(float *)(lVar7 + 0x11088) + *(float *)(unaff_RBX + 0x11);
        }
        *(float *)(unaff_RBP + -0x68) = fVar16;
        if (unaff_SIL == '\0') {
          FUN_180785b10(lVar7 + 0x12448,unaff_RBX[10],unaff_RBP + -0x70);
          goto LAB_18074e14c;
        }
        FUN_180785c10(lVar7 + 0x12438,(float *)(lVar7 + 0x11080),unaff_RBP + -0x70,unaff_RBX + 0x19,
                      pfVar1);
        bVar3 = true;
      }
      if (unaff_SIL == '\0') goto LAB_18074e14c;
    }
    if ((unaff_RBX[0x2e] != 0) && (bVar3)) {
      lVar7 = unaff_RBX[10];
      iVar5 = FUN_180743cc0(unaff_RBX[1],0);
      if (iVar5 != 0) goto FUN_18074f865;
      iVar5 = (*(code *)unaff_RBX[0x2e])(lVar7,0,3,unaff_RBX + 0x19,pfVar1);
      iVar6 = FUN_180743da0(unaff_RBX[1]);
      if ((iVar6 != 0) || ((iVar5 != 0 && (iVar5 != 0)))) goto FUN_18074f865;
    }
    if (*(uint *)(unaff_RBX[1] + 0x1164c) == 0) {
      fVar16 = 500.0;
    }
    else {
      fVar16 = (float)*(uint *)(unaff_RBX[1] + 0x1164c);
    }
    fVar23 = *(float *)(unaff_RBX + 0x19);
    if (fVar17 != fVar23) {
      fVar17 = (fVar23 - *(float *)(unaff_RBX + 0x18)) / fVar16;
      if (0.0 <= fVar17) {
        if (fVar17 <= 0.0001) {
          fVar17 = 0.0001;
        }
      }
      else if (-0.0001 <= fVar17) {
        fVar17 = -0.0001;
      }
      *(float *)(unaff_RBX + 0x1b) = fVar17;
    }
    fVar17 = *pfVar1;
    if (fVar24 != fVar17) {
      fVar16 = (fVar17 - *(float *)((longlong)unaff_RBX + 0xc4)) / fVar16;
      if (0.0 <= fVar16) {
        if (fVar16 <= 0.0001) {
          fVar16 = 0.0001;
        }
      }
      else if (-0.0001 <= fVar16) {
        fVar16 = -0.0001;
      }
      *(float *)((longlong)unaff_RBX + 0xdc) = fVar16;
    }
    if (((*(float *)(unaff_RBX + 0x18) != fVar23) ||
        (fVar17 != *(float *)((longlong)unaff_RBX + 0xc4))) &&
       ((iStack000000000000003c != 0 || (unaff_SIL != '\0')))) {
      if (unaff_SIL == '\0') {
        fVar24 = (float)iStack000000000000003c * *(float *)(unaff_RBX + 0x1b) +
                 *(float *)(unaff_RBX + 0x18);
        fVar16 = *(float *)((longlong)unaff_RBX + 0xdc) * (float)iStack000000000000003c +
                 *(float *)((longlong)unaff_RBX + 0xc4);
        *(float *)(unaff_RBX + 0x18) = fVar24;
        *(float *)((longlong)unaff_RBX + 0xc4) = fVar16;
        if (*(float *)(unaff_RBX + 0x1b) <= 0.0) {
          if (fVar24 < fVar23) goto LAB_18074e31e;
        }
        else if (fVar23 < fVar24) {
LAB_18074e31e:
          *(float *)(unaff_RBX + 0x18) = fVar23;
        }
        if (*(float *)((longlong)unaff_RBX + 0xdc) <= 0.0) {
          if (fVar16 < fVar17) goto LAB_18074e34e;
        }
        else if (fVar17 < fVar16) {
          *(float *)((longlong)unaff_RBX + 0xc4) = fVar17;
        }
      }
      else {
        *(float *)(unaff_RBX + 0x18) = fVar23;
LAB_18074e34e:
        *(float *)((longlong)unaff_RBX + 0xc4) = fVar17;
      }
      (**(code **)(*unaff_RBX + 0x198))();
    }
    unaff_R13 = 0;
  }
  iVar5 = func_0x0001807460a0(unaff_RBX[1],&stack0x00000048,&stack0x00000070,unaff_RBP + -0x78);
  if (iVar5 != 0) {
FUN_18074f865:
                    // WARNING: Subroutine does not return
    FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xca0) ^ (ulonglong)&stack0x00000000);
  }
  in_stack_00000048 = in_stack_00000048 * *(float *)((longlong)unaff_RBX + 0xf4);
  if ((*(byte *)(unaff_RBX + 9) & 4) == 0) {
    lVar7 = (longlong)*(int *)(unaff_RBX[1] + 0x11400);
    if (0 < lVar7) {
      pcVar8 = (char *)(unaff_RBX[1] + 0x110ec);
      uVar10 = unaff_R13;
      do {
        if (*pcVar8 != '\0') goto LAB_18074e436;
        uVar10 = uVar10 + 1;
        pcVar8 = pcVar8 + 0x70;
      } while ((longlong)uVar10 < lVar7);
    }
  }
  else {
LAB_18074e436:
    fVar17 = 3.4028235e+38;
    iVar5 = func_0x000180746080(unaff_RBX[1],(longlong)&stack0x00000038 + 4);
    if (iVar5 != 0) goto FUN_18074f865;
    uVar14 = unaff_R13 & 0xffffffff;
    uVar10 = unaff_R13;
    iVar5 = iStack000000000000003c;
    uVar15 = in_stack_00000040;
    if (0 < iStack000000000000003c) {
      do {
        lVar7 = unaff_RBX[1];
        if ((uVar15 >> 0x12 & 1) == 0) {
          fVar23 = *(float *)((longlong)unaff_RBX + 0x84) - *(float *)(lVar7 + 0x11084 + uVar10);
          fVar16 = *(float *)(unaff_RBX + 0x10) - *(float *)(lVar7 + 0x11080 + uVar10);
          fVar24 = *(float *)(unaff_RBX + 0x11) - *(float *)(lVar7 + 0x11088 + uVar10);
        }
        else {
          _fStack0000000000000078 = unaff_RBX[0x10];
          fVar23 = (float)((ulonglong)_fStack0000000000000078 >> 0x20);
          *(int *)(unaff_RBP + -0x80) = (int)unaff_RBX[0x11];
          fVar24 = *(float *)(unaff_RBP + -0x80);
          fVar16 = fStack0000000000000078;
        }
        if ((*(byte *)(lVar7 + 0x78) & 4) != 0) {
          fVar24 = -fVar24;
        }
        fVar24 = SQRT(fVar23 * fVar23 + fVar16 * fVar16 + fVar24 * fVar24);
        if (fVar24 < fVar17) {
          *(float *)(unaff_RBX + 0x13) = fVar24;
          if (*(longlong *)(lVar7 + 0x11410) == 0) {
            if ((uVar15 >> 0x1a & 1) == 0) {
              uVar11 = 2;
              uVar13 = uVar15 & 0x4f00000;
              if (uVar13 == 0x200000) {
                uVar11 = 1;
LAB_18074e6a1:
                func_0x0001807d49f0(uVar11,fVar24,*(int32_t *)((longlong)unaff_RBX + 0x9c),
                                    (int)unaff_RBX[0x14],&stack0x00000038);
                iVar5 = iStack000000000000003c;
                uVar15 = in_stack_00000040;
                fVar17 = fStack0000000000000038;
              }
              else {
                if (uVar13 == 0x400000) {
                  uVar11 = unaff_R13 & 0xffffffff;
                  goto LAB_18074e6a1;
                }
                if (uVar13 == 0x800000) {
                  uVar11 = 3;
                  goto LAB_18074e6a1;
                }
                if (uVar13 != 0x4000000) goto LAB_18074e6a1;
                fVar17 = 1.0;
              }
LAB_18074e6de:
              *(float *)(unaff_RBX + 0xf) = fVar17;
            }
            else {
              pfVar1 = (float *)unaff_RBX[0x1c];
              if (pfVar1 != (float *)0x0) {
                iVar6 = (int)unaff_RBX[0x1d];
                if (iVar6 != 0) {
                  if (fVar24 < pfVar1[(longlong)iVar6 * 3 + -3]) {
                    iVar9 = 1;
                    lVar12 = 1;
                    pfVar2 = pfVar1;
                    if (1 < iVar6) {
                      do {
                        fVar17 = *pfVar2;
                        if ((fVar17 <= fVar24) && (fVar16 = pfVar2[3], fVar24 < fVar16)) {
                          fVar17 = (fVar24 - fVar17) / (fVar16 - fVar17);
                          fVar17 = (1.0 - fVar17) * pfVar1[lVar12 * 3 + -2] +
                                   fVar17 * pfVar1[lVar12 * 3 + 1];
                          goto LAB_18074e6de;
                        }
                        iVar9 = iVar9 + 1;
                        lVar12 = lVar12 + 1;
                        pfVar2 = pfVar2 + 3;
                      } while (iVar9 < iVar6);
                    }
                  }
                  else {
                    *(float *)(unaff_RBX + 0xf) = pfVar1[(longlong)iVar6 * 3 + -2];
                  }
                  goto LAB_18074e6e3;
                }
              }
              *(int32_t *)(unaff_RBX + 0xf) = 0x3f800000;
            }
          }
          else {
            iVar5 = FUN_180743cc0(lVar7,0);
            if (iVar5 != 0) goto FUN_18074f865;
            uVar18 = (**(code **)(unaff_RBX[1] + 0x11410))(unaff_RBX[10],(int)unaff_RBX[0x13]);
            *(int32_t *)(unaff_RBX + 0xf) = uVar18;
            iVar6 = FUN_180743da0(unaff_RBX[1]);
            iVar5 = iStack000000000000003c;
            uVar15 = in_stack_00000040;
            if (iVar6 != 0) goto FUN_18074f865;
          }
LAB_18074e6e3:
          if (0.0 <= *(float *)(unaff_RBX + 0xf)) {
            if (1.0 < *(float *)(unaff_RBX + 0xf)) {
              *(int32_t *)(unaff_RBX + 0xf) = 0x3f800000;
            }
          }
          else {
            *(int *)(unaff_RBX + 0xf) = (int)unaff_R13;
          }
          fVar16 = *(float *)((longlong)unaff_RBX + 0xac);
          fVar17 = fVar24;
          if ((fVar16 < 360.0) ||
             (*(float *)(unaff_RBX + 0x15) <= 360.0 && *(float *)(unaff_RBX + 0x15) != 360.0)) {
            if (0.0 < *(float *)(unaff_RBX + 0x13)) {
              *(int32_t *)(unaff_RBP + -0x68) = *(int32_t *)((longlong)unaff_RBX + 0xbc);
              *(uint64_t *)(unaff_RBP + -0x70) = *(uint64_t *)((longlong)unaff_RBX + 0xb4);
              fVar24 = (float)acosf();
              fVar24 = fVar24 * 57.295776 + fVar24 * 57.295776;
            }
            else {
              fVar24 = 0.0;
            }
            fVar23 = *(float *)(unaff_RBX + 0x15);
            if (fVar23 <= fVar24) {
              fVar25 = *(float *)(unaff_RBX + 0x16);
              if (fVar24 < fVar16) {
                fVar24 = (fVar24 - fVar23) / (fVar16 - fVar23);
                fVar25 = fVar25 * fVar24 + (1.0 - fVar24);
              }
              *(float *)((longlong)unaff_RBX + 0xa4) = fVar25;
            }
            else {
              *(int32_t *)((longlong)unaff_RBX + 0xa4) = 0x3f800000;
            }
          }
        }
        if ((0.0 < in_stack_00000048) && (iVar5 == 1)) {
          if ((uVar15 >> 0x12 & 1) == 0) {
            fVar19 = *(float *)(unaff_RBX + 0x12) - *(float *)(lVar7 + 0x1109c + uVar10);
            fVar25 = *(float *)((longlong)unaff_RBX + 0x8c) - *(float *)(lVar7 + 0x11098 + uVar10);
            fVar24 = *(float *)((longlong)unaff_RBX + 0x94) - *(float *)(lVar7 + 0x110a0 + uVar10);
            fVar23 = *(float *)(unaff_RBX + 0x10) - *(float *)(lVar7 + 0x11080 + uVar10);
            fVar16 = *(float *)(unaff_RBX + 0x11) - *(float *)(lVar7 + 0x11088 + uVar10);
            fVar20 = *(float *)((longlong)unaff_RBX + 0x84) - *(float *)(lVar7 + 0x11084 + uVar10);
          }
          else {
            _fStack0000000000000050 = *(uint64_t *)((longlong)unaff_RBX + 0x8c);
            fVar24 = *(float *)((longlong)unaff_RBX + 0x94);
            fVar19 = (float)((ulonglong)_fStack0000000000000050 >> 0x20);
            _fStack0000000000000060 = unaff_RBX[0x10];
            fVar20 = (float)((ulonglong)_fStack0000000000000060 >> 0x20);
            fVar16 = *(float *)(unaff_RBX + 0x11);
            fVar23 = fStack0000000000000060;
            fVar25 = fStack0000000000000050;
            in_stack_00000058 = fVar24;
            in_stack_00000068 = fVar16;
          }
          fVar22 = 0.0;
          fVar21 = SQRT(fVar20 * fVar20 + fVar23 * fVar23 + fVar16 * fVar16);
          if (0.0 < fVar21) {
            fVar22 = (fVar20 * fVar19 + fVar23 * fVar25 + fVar16 * fVar24) / fVar21;
          }
          *(float *)((longlong)unaff_RBX + 0x7c) =
               (in_stack_00000070 * 340.0 - fVar22 * in_stack_00000048) /
               (in_stack_00000070 * 340.0);
        }
        if (*(float *)((longlong)unaff_RBX + 0x7c) <= 1e-06 &&
            *(float *)((longlong)unaff_RBX + 0x7c) != 1e-06) {
          *(int32_t *)((longlong)unaff_RBX + 0x7c) = 0x358637bd;
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        uVar10 = uVar10 + 0x70;
      } while ((int)uVar13 < iVar5);
    }
  }
                    // WARNING: Subroutine does not return
  memset(unaff_RBP + -0x60,0,0x80);
}





