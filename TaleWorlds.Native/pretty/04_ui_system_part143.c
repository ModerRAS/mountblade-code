#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part143.c - 6 个函数

// 函数: void FUN_18074e3aa(float param_1)
void FUN_18074e3aa(float param_1)

{
  byte bVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int iVar12;
  int unaff_R13D;
  int32_t unaff_000000ac;
  uint uVar13;
  bool in_ZF;
  int32_t uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float fVar22;
  float fVar23;
  float fStack0000000000000038;
  int iStack000000000000003c;
  uint in_stack_00000040;
  float fStack0000000000000048;
  float fStack0000000000000050;
  float in_stack_00000058;
  float fStack0000000000000060;
  float in_stack_00000068;
  float in_stack_00000070;
  float fStack0000000000000078;
  
  fStack0000000000000048 = param_1;
  if (in_ZF) {
    lVar10 = (longlong)*(int *)(*(longlong *)(unaff_RBX + 8) + 0x11400);
    if (0 < lVar10) {
      lVar9 = CONCAT44(unaff_000000ac,unaff_R13D);
      pcVar7 = (char *)(*(longlong *)(unaff_RBX + 8) + 0x110ec);
      do {
        if (*pcVar7 != '\0') goto LAB_18074e436;
        lVar9 = lVar9 + 1;
        pcVar7 = pcVar7 + 0x70;
      } while (lVar9 < lVar10);
    }
  }
  else {
LAB_18074e436:
    fVar23 = 3.4028235e+38;
    iVar4 = func_0x000180746080(*(uint64_t *)(unaff_RBX + 8),(longlong)&stack0x00000038 + 4);
    if (iVar4 != 0) {
LAB_18074f826:
                    // WARNING: Subroutine does not return
      FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xca0) ^ (ulonglong)&stack0x00000000);
    }
    if (0 < iStack000000000000003c) {
      lVar10 = CONCAT44(unaff_000000ac,unaff_R13D);
      iVar4 = iStack000000000000003c;
      iVar12 = unaff_R13D;
      uVar13 = in_stack_00000040;
      do {
        lVar9 = *(longlong *)(unaff_RBX + 8);
        if ((uVar13 >> 0x12 & 1) == 0) {
          fVar21 = *(float *)(unaff_RBX + 0x84) - *(float *)(lVar9 + 0x11084 + lVar10);
          fVar20 = *(float *)(unaff_RBX + 0x80) - *(float *)(lVar9 + 0x11080 + lVar10);
          fVar22 = *(float *)(unaff_RBX + 0x88) - *(float *)(lVar9 + 0x11088 + lVar10);
        }
        else {
          _fStack0000000000000078 = *(uint64_t *)(unaff_RBX + 0x80);
          fVar21 = (float)((ulonglong)_fStack0000000000000078 >> 0x20);
          *(int32_t *)(unaff_RBP + -0x80) = *(int32_t *)(unaff_RBX + 0x88);
          fVar22 = *(float *)(unaff_RBP + -0x80);
          fVar20 = fStack0000000000000078;
        }
        if ((*(byte *)(lVar9 + 0x78) & 4) != 0) {
          fVar22 = -fVar22;
        }
        fVar18 = SQRT(fVar21 * fVar21 + fVar20 * fVar20 + fVar22 * fVar22);
        if (fVar18 < fVar23) {
          *(float *)(unaff_RBX + 0x98) = fVar18;
          if (*(longlong *)(lVar9 + 0x11410) == 0) {
            if ((uVar13 >> 0x1a & 1) == 0) {
              uVar6 = uVar13 & 0x4f00000;
              if (uVar6 == 0x200000) {
                iVar5 = 1;
LAB_18074e6a1:
                func_0x0001807d49f0(iVar5,fVar18,*(int32_t *)(unaff_RBX + 0x9c),
                                    *(int32_t *)(unaff_RBX + 0xa0),&stack0x00000038);
                iVar4 = iStack000000000000003c;
                uVar13 = in_stack_00000040;
                fVar23 = fStack0000000000000038;
              }
              else {
                iVar5 = unaff_R13D;
                if (uVar6 == 0x400000) goto LAB_18074e6a1;
                if (uVar6 == 0x800000) {
                  iVar5 = 3;
                  goto LAB_18074e6a1;
                }
                fVar23 = unaff_XMM6_Da;
                iVar5 = 2;
                if (uVar6 != 0x4000000) goto LAB_18074e6a1;
              }
LAB_18074e6de:
              *(float *)(unaff_RBX + 0x78) = fVar23;
            }
            else {
              pfVar2 = *(float **)(unaff_RBX + 0xe0);
              if (pfVar2 != (float *)0x0) {
                iVar5 = *(int *)(unaff_RBX + 0xe8);
                if (iVar5 != 0) {
                  if (fVar18 < pfVar2[(longlong)iVar5 * 3 + -3]) {
                    iVar8 = 1;
                    lVar11 = 1;
                    pfVar3 = pfVar2;
                    if (1 < iVar5) {
                      do {
                        fVar23 = *pfVar3;
                        if ((fVar23 <= fVar18) && (fVar15 = pfVar3[3], fVar18 < fVar15)) {
                          fVar23 = (fVar18 - fVar23) / (fVar15 - fVar23);
                          fVar23 = (unaff_XMM6_Da - fVar23) * pfVar2[lVar11 * 3 + -2] +
                                   fVar23 * pfVar2[lVar11 * 3 + 1];
                          goto LAB_18074e6de;
                        }
                        iVar8 = iVar8 + 1;
                        lVar11 = lVar11 + 1;
                        pfVar3 = pfVar3 + 3;
                      } while (iVar8 < iVar5);
                    }
                  }
                  else {
                    *(float *)(unaff_RBX + 0x78) = pfVar2[(longlong)iVar5 * 3 + -2];
                  }
                  goto LAB_18074e6e3;
                }
              }
              *(int32_t *)(unaff_RBX + 0x78) = 0x3f800000;
            }
          }
          else {
            iVar4 = FUN_180743cc0(lVar9,0);
            if (iVar4 != 0) goto LAB_18074f826;
            uVar14 = (**(code **)(*(longlong *)(unaff_RBX + 8) + 0x11410))
                               (*(uint64_t *)(unaff_RBX + 0x50),*(int32_t *)(unaff_RBX + 0x98))
            ;
            *(int32_t *)(unaff_RBX + 0x78) = uVar14;
            iVar5 = FUN_180743da0(*(uint64_t *)(unaff_RBX + 8));
            iVar4 = iStack000000000000003c;
            uVar13 = in_stack_00000040;
            if (iVar5 != 0) goto LAB_18074f826;
          }
LAB_18074e6e3:
          if (unaff_XMM7_Da <= *(float *)(unaff_RBX + 0x78)) {
            if (unaff_XMM6_Da < *(float *)(unaff_RBX + 0x78)) {
              *(int32_t *)(unaff_RBX + 0x78) = 0x3f800000;
            }
          }
          else {
            *(int *)(unaff_RBX + 0x78) = unaff_R13D;
          }
          fVar15 = *(float *)(unaff_RBX + 0xac);
          fVar23 = fVar18;
          if ((fVar15 < 360.0) ||
             (*(float *)(unaff_RBX + 0xa8) <= 360.0 && *(float *)(unaff_RBX + 0xa8) != 360.0)) {
            fVar18 = *(float *)(unaff_RBX + 0x98);
            fVar16 = unaff_XMM7_Da;
            if (unaff_XMM7_Da < fVar18) {
              *(int32_t *)(unaff_RBP + -0x68) = *(int32_t *)(unaff_RBX + 0xbc);
              fVar16 = *(float *)(unaff_RBP + -0x68);
              fVar18 = 1.0 / fVar18;
              bVar1 = *(byte *)(*(longlong *)(unaff_RBX + 8) + 0x78);
              *(uint64_t *)(unaff_RBP + -0x70) = *(uint64_t *)(unaff_RBX + 0xb4);
              if ((bVar1 & 4) != 0) {
                fVar16 = -fVar16;
              }
              fVar22 = -(fVar18 * fVar21 * *(float *)(unaff_RBP + -0x6c) +
                         fVar18 * fVar20 * *(float *)(unaff_RBP + -0x70) + fVar18 * fVar22 * fVar16)
              ;
              if (-1.0 <= fVar22) {
                if (1.0 <= fVar22) {
                  fVar22 = 1.0;
                }
              }
              else {
                fVar22 = -1.0;
              }
              fVar22 = (float)acosf(fVar22);
              fVar16 = fVar22 * 57.295776 + fVar22 * 57.295776;
            }
            fVar22 = *(float *)(unaff_RBX + 0xa8);
            if (fVar22 <= fVar16) {
              fVar20 = *(float *)(unaff_RBX + 0xb0);
              if (fVar16 < fVar15) {
                fVar22 = (fVar16 - fVar22) / (fVar15 - fVar22);
                fVar20 = fVar20 * fVar22 + (1.0 - fVar22);
              }
              *(float *)(unaff_RBX + 0xa4) = fVar20;
            }
            else {
              *(int32_t *)(unaff_RBX + 0xa4) = 0x3f800000;
            }
          }
        }
        if ((unaff_XMM7_Da < fStack0000000000000048) && (iVar4 == 1)) {
          if ((uVar13 >> 0x12 & 1) == 0) {
            fVar15 = *(float *)(unaff_RBX + 0x90) - *(float *)(lVar9 + 0x1109c + lVar10);
            fVar18 = *(float *)(unaff_RBX + 0x8c) - *(float *)(lVar9 + 0x11098 + lVar10);
            fVar22 = *(float *)(unaff_RBX + 0x94) - *(float *)(lVar9 + 0x110a0 + lVar10);
            fVar21 = *(float *)(unaff_RBX + 0x80) - *(float *)(lVar9 + 0x11080 + lVar10);
            fVar20 = *(float *)(unaff_RBX + 0x88) - *(float *)(lVar9 + 0x11088 + lVar10);
            fVar16 = *(float *)(unaff_RBX + 0x84) - *(float *)(lVar9 + 0x11084 + lVar10);
          }
          else {
            _fStack0000000000000050 = *(uint64_t *)(unaff_RBX + 0x8c);
            fVar22 = *(float *)(unaff_RBX + 0x94);
            fVar15 = (float)((ulonglong)_fStack0000000000000050 >> 0x20);
            _fStack0000000000000060 = *(uint64_t *)(unaff_RBX + 0x80);
            fVar16 = (float)((ulonglong)_fStack0000000000000060 >> 0x20);
            fVar20 = *(float *)(unaff_RBX + 0x88);
            fVar21 = fStack0000000000000060;
            fVar18 = fStack0000000000000050;
            in_stack_00000058 = fVar22;
            in_stack_00000068 = fVar20;
          }
          fVar17 = SQRT(fVar16 * fVar16 + fVar21 * fVar21 + fVar20 * fVar20);
          fVar19 = unaff_XMM7_Da;
          if (unaff_XMM7_Da < fVar17) {
            fVar19 = (fVar16 * fVar15 + fVar21 * fVar18 + fVar20 * fVar22) / fVar17;
          }
          *(float *)(unaff_RBX + 0x7c) =
               (in_stack_00000070 * 340.0 - fVar19 * fStack0000000000000048) /
               (in_stack_00000070 * 340.0);
        }
        if (*(float *)(unaff_RBX + 0x7c) <= 1e-06 && *(float *)(unaff_RBX + 0x7c) != 1e-06) {
          *(int32_t *)(unaff_RBX + 0x7c) = 0x358637bd;
        }
        iVar12 = iVar12 + 1;
        lVar10 = lVar10 + 0x70;
        if (iVar4 <= iVar12) break;
        unaff_XMM6_Da = 1.0;
      } while( true );
    }
  }
                    // WARNING: Subroutine does not return
  memset(unaff_RBP + -0x60,0,0x80);
}





// 函数: void FUN_18074f865(void)
void FUN_18074f865(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xca0) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18074f89e(void)
void FUN_18074f89e(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xca0) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18074f900(longlong *param_1,uint64_t param_2,uint64_t param_3,char param_4)
void FUN_18074f900(longlong *param_1,uint64_t param_2,uint64_t param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int aiStackX_8 [2];
  float *pfStack_68;
  longlong lStack_60;
  uint64_t uStack_58;
  
  iVar6 = -1;
  fVar9 = 1.0;
  aiStackX_8[0] = 0;
  fVar8 = 0.0;
  iVar4 = (**(code **)(*param_1 + 0x120))(param_1,0xfffffffe,&lStack_60);
  if (iVar4 != 0) {
    return;
  }
  (**(code **)(*param_1 + 0x138))(param_1,lStack_60,aiStackX_8);
  plVar1 = param_1 + 0x22;
  bVar3 = false;
  plVar5 = (longlong *)*plVar1;
  if ((plVar5 != plVar1) || (((longlong *)param_1[0x23] != plVar1 && (plVar5 != plVar1)))) {
    do {
      plVar2 = (longlong *)*plVar5;
      uStack_58 = plVar5[2];
      if ((iVar6 < aiStackX_8[0]) && (aiStackX_8[0] < (short)((ulonglong)uStack_58 >> 0x10))) {
        bVar3 = true;
        fVar7 = *(float *)(lStack_60 + 0x2a0);
        if (*(float *)(lStack_60 + 0x2a0) <= *(float *)(lStack_60 + 0x230)) {
          fVar7 = *(float *)(lStack_60 + 0x230);
        }
        fVar9 = fVar7 * fVar9 * *(float *)(param_1 + 6);
        fVar8 = fVar7 * fVar8 * *(float *)(param_1 + 6);
      }
      if ((*plVar5 & 0x100000000) == 0) {
        pfStack_68 = (float *)0x0;
        iVar4 = FUN_18075f090(plVar5 + -0x12,(int)(short)uStack_58,&pfStack_68,0,0,0);
        if (iVar4 != 0) {
          return;
        }
        fVar9 = fVar9 * *pfStack_68;
        fVar8 = *pfStack_68 * fVar8 + pfStack_68[1];
      }
      iVar6 = (int)uStack_58._2_2_;
      plVar5 = plVar2;
    } while (plVar2 != plVar1);
    if (bVar3) goto LAB_18074faa2;
  }
  if (lStack_60 != 0) {
    fVar7 = *(float *)(lStack_60 + 0x2a0);
    if (*(float *)(lStack_60 + 0x2a0) <= *(float *)(lStack_60 + 0x230)) {
      fVar7 = *(float *)(lStack_60 + 0x230);
    }
    fVar9 = fVar7 * fVar9 * *(float *)(param_1 + 6);
    fVar8 = fVar7 * fVar8 * *(float *)(param_1 + 6);
  }
LAB_18074faa2:
  if (((fVar9 != *(float *)(param_1 + 0xb)) || (fVar8 != *(float *)((longlong)param_1 + 0x5c))) ||
     (param_4 != '\0')) {
    *(float *)(param_1 + 0xb) = fVar9;
    *(float *)((longlong)param_1 + 0x5c) = fVar8;
    iVar4 = (**(code **)(*param_1 + 0x200))(param_1);
    if (iVar4 != 0) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x210))(param_1);
  return;
}





// 函数: void FUN_18074f95b(int32_t param_1)
void FUN_18074f95b(int32_t param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  longlong in_RAX;
  longlong *plVar6;
  longlong *unaff_RBX;
  int unaff_ESI;
  char unaff_R12B;
  float *unaff_R13;
  float fVar7;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float *in_stack_00000030;
  longlong in_stack_00000038;
  int in_stack_000000a0;
  
  (**(code **)(in_RAX + 0x138))(param_1,in_stack_00000038);
  plVar1 = unaff_RBX + 0x22;
  bVar3 = false;
  plVar6 = (longlong *)*plVar1;
  if ((plVar6 != plVar1) || (((longlong *)unaff_RBX[0x23] != plVar1 && (plVar6 != plVar1)))) {
    do {
      plVar2 = (longlong *)*plVar6;
      sVar4 = (short)((ulonglong)plVar6[2] >> 0x10);
      if ((unaff_ESI < in_stack_000000a0) && (in_stack_000000a0 < sVar4)) {
        bVar3 = true;
        fVar7 = *(float *)(in_stack_00000038 + 0x2a0);
        if (*(float *)(in_stack_00000038 + 0x2a0) <= *(float *)(in_stack_00000038 + 0x230)) {
          fVar7 = *(float *)(in_stack_00000038 + 0x230);
        }
        unaff_XMM7_Da = fVar7 * unaff_XMM7_Da * *(float *)(unaff_RBX + 6);
        unaff_XMM6_Da = fVar7 * unaff_XMM6_Da * *(float *)(unaff_RBX + 6);
      }
      if ((*plVar6 & 0x100000000) == 0) {
        in_stack_00000030 = unaff_R13;
        iVar5 = FUN_18075f090(plVar6 + -0x12,(int)(short)plVar6[2],&stack0x00000030,0);
        if (iVar5 != 0) {
          return;
        }
        unaff_XMM7_Da = unaff_XMM7_Da * *in_stack_00000030;
        unaff_XMM6_Da = *in_stack_00000030 * unaff_XMM6_Da + in_stack_00000030[1];
      }
      unaff_ESI = (int)sVar4;
      plVar6 = plVar2;
    } while (plVar2 != plVar1);
    if (bVar3) goto LAB_18074faa2;
  }
  if (in_stack_00000038 != 0) {
    fVar7 = *(float *)(in_stack_00000038 + 0x2a0);
    if (*(float *)(in_stack_00000038 + 0x2a0) <= *(float *)(in_stack_00000038 + 0x230)) {
      fVar7 = *(float *)(in_stack_00000038 + 0x230);
    }
    unaff_XMM7_Da = fVar7 * unaff_XMM7_Da * *(float *)(unaff_RBX + 6);
    unaff_XMM6_Da = fVar7 * unaff_XMM6_Da * *(float *)(unaff_RBX + 6);
  }
LAB_18074faa2:
  if (((unaff_XMM7_Da != *(float *)(unaff_RBX + 0xb)) ||
      (unaff_XMM6_Da != *(float *)((longlong)unaff_RBX + 0x5c))) || (unaff_R12B != '\0')) {
    *(float *)(unaff_RBX + 0xb) = unaff_XMM7_Da;
    *(float *)((longlong)unaff_RBX + 0x5c) = unaff_XMM6_Da;
    iVar5 = (**(code **)(*unaff_RBX + 0x200))();
    if (iVar5 != 0) {
      return;
    }
  }
  (**(code **)(*unaff_RBX + 0x210))();
  return;
}





// 函数: void FUN_18074faf6(void)
void FUN_18074faf6(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_18074fc70(longlong param_1,uint param_2,int param_3,longlong param_4,longlong *param_5,
             int param_6,char param_7)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    lVar2 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x78,&unknown_var_9552_ptr,0x8b0,0);
    *(longlong *)(param_1 + 0xf0) = lVar2;
    if (lVar2 == 0) {
      return 0x26;
    }
    *(longlong *)(param_1 + 0xf8) = lVar2 + 0x3c;
    *(int32_t *)(lVar2 + 0x18) = 0xffffffff;
    *(longlong *)lVar2 = lVar2;
    *(longlong *)(lVar2 + 8) = lVar2;
    *(uint64_t *)(lVar2 + 0x10) = 0;
    lVar2 = *(longlong *)(param_1 + 0xf8);
    *(int32_t *)(lVar2 + 0x18) = 0xffffffff;
    *(longlong *)lVar2 = lVar2;
    *(longlong *)(lVar2 + 8) = lVar2;
    *(uint64_t *)(lVar2 + 0x10) = 0;
    *(int32_t *)(*(longlong *)(param_1 + 0xf0) + 0x30) = 0;
    *(uint64_t *)(*(longlong *)(param_1 + 0xf0) + 0x20) = 0;
    *(int32_t *)(*(longlong *)(param_1 + 0xf8) + 0x30) = 0xffffffff;
    *(uint64_t *)(*(longlong *)(param_1 + 0xf8) + 0x20) = 0;
    plVar3 = *(longlong **)(param_1 + 0xf0);
    plVar5 = *(longlong **)(param_1 + 0xf8);
    lVar2 = *plVar3;
    *plVar5 = lVar2;
    plVar5[1] = (longlong)plVar3;
    *(longlong **)(lVar2 + 8) = plVar5;
    *(longlong **)plVar5[1] = plVar5;
  }
  if ((param_5 == (longlong *)0x0) || (plVar3 = (longlong *)*param_5, plVar3 == (longlong *)0x0)) {
    if (param_4 == 0) {
      plVar3 = (longlong *)
               FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x3c,&unknown_var_9552_ptr,0x8de,0,0,1
                            );
      if (plVar3 == (longlong *)0x0) {
        return 0x26;
      }
      *(int32_t *)(plVar3 + 3) = 0xffffffff;
      *plVar3 = (longlong)plVar3;
      plVar3[1] = (longlong)plVar3;
      plVar3[2] = 0;
      plVar3[4] = 0;
    }
    else {
      plVar3 = (longlong *)
               FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x13c,&unknown_var_9552_ptr,0x8d5,0,0,
                             1);
      if (plVar3 == (longlong *)0x0) {
        return 0x26;
      }
      *(int32_t *)(plVar3 + 3) = 0xffffffff;
      *plVar3 = (longlong)plVar3;
      plVar3[1] = (longlong)plVar3;
      plVar3[2] = 0;
      plVar3[4] = (longlong)plVar3 + 0x3c;
    }
    if (param_5 != (longlong *)0x0) {
      *param_5 = (longlong)plVar3;
    }
    *(int32_t *)(plVar3 + 7) = 0;
  }
  else {
    *(int32_t *)(plVar3 + 3) = 0xffffffff;
    *plVar3 = (longlong)plVar3;
    plVar3[1] = (longlong)plVar3;
    plVar3[2] = 0;
    *(int32_t *)(plVar3 + 7) = 1;
  }
  uVar6 = param_2;
  if (param_3 != 2) {
    if (param_3 == 4) {
      uVar6 = 0;
      if (*(uint *)(param_1 + 0x68) != 0) {
        iVar1 = *(int *)(param_1 + 0x28);
        if (iVar1 == 1) {
          uVar4 = 8;
        }
        else if (iVar1 == 2) {
          uVar4 = 0x10;
        }
        else if (iVar1 == 3) {
          uVar4 = 0x18;
        }
        else {
          if ((iVar1 != 4) && (uVar6 = param_2, iVar1 != 5)) goto LAB_18074fec8;
          uVar4 = 0x20;
        }
        uVar6 = (uint)((((ulonglong)param_2 << 3) / uVar4 & 0xffffffff) /
                      (ulonglong)*(uint *)(param_1 + 0x68));
      }
    }
    else {
      if (param_3 != 1) {
        return 0x1f;
      }
      uVar6 = (uint)(longlong)((float)param_2 * 0.001 * *(float *)(param_1 + 0x6c));
    }
  }
LAB_18074fec8:
  if ((plVar3[4] != 0) && (param_4 != 0)) {
    func_0x00018076b450(plVar3[4],param_4,0x100);
  }
  *(uint *)(plVar3 + 6) = uVar6;
  lVar2 = *(longlong *)(param_1 + 0xf8);
  plVar5 = (longlong *)**(uint64_t **)(param_1 + 0xf0);
  do {
    if (uVar6 < *(uint *)(plVar5 + 3)) {
      *(uint *)(plVar3 + 3) = uVar6;
      plVar3[1] = plVar5[1];
      *plVar3 = (longlong)plVar5;
      plVar5[1] = (longlong)plVar3;
      goto LAB_18074ff2c;
    }
    plVar5 = (longlong *)*plVar5;
  } while (plVar5[1] != lVar2);
  *(uint *)(plVar3 + 3) = uVar6;
  plVar3[1] = *(longlong *)(lVar2 + 8);
  *plVar3 = lVar2;
  *(longlong **)(lVar2 + 8) = plVar3;
LAB_18074ff2c:
  *(longlong **)plVar3[1] = plVar3;
  if (param_6 == -1) {
    param_6 = *(int *)(param_1 + 0xc0);
  }
  *(short *)((longlong)plVar3 + 0x34) = (short)param_6;
  plVar3[5] = param_1;
  *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
  if (param_7 != '\0') {
    FUN_180752af0(param_1);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18074ffa0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 == 0) {
    lVar1 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x100,&unknown_var_9552_ptr,0x5a0,0);
    *(longlong *)(param_1 + 0x38) = lVar1;
    if (lVar1 == 0) {
      return 0x26;
    }
  }
  *(longlong *)(param_1 + 0x30) = lVar1;
  return 0;
}



uint64_t FUN_180750000(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  longlong lStackX_8;
  int aiStackX_10 [2];
  int aiStackX_18 [2];
  longlong lStackX_20;
  
  iVar3 = 1;
  if ((*(uint *)((longlong)param_1 + 0x2c) & 0x200) == 0) {
    iVar1 = (int)param_1[5];
    if (iVar1 == 1) {
      iVar3 = 1;
    }
    else if (iVar1 == 2) {
      iVar3 = 2;
    }
    else if (iVar1 == 3) {
      iVar3 = 3;
    }
    else if ((iVar1 == 4) || (iVar1 == 5)) {
      iVar3 = 4;
    }
    iVar3 = iVar3 * (int)param_1[0xd];
  }
  *(int *)(param_1 + 8) = param_2;
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    uVar2 = (**(code **)(*param_1 + 0x28))
                      (param_1,iVar3 * param_2,iVar3 * param_3,&lStackX_8,&lStackX_20,aiStackX_10,
                       aiStackX_18);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if ((lStackX_8 != 0) && (aiStackX_10[0] != 0)) {
                    // WARNING: Subroutine does not return
      memset(lStackX_8,0,aiStackX_10[0]);
    }
    if ((lStackX_20 != 0) && (aiStackX_18[0] != 0)) break;
    uVar2 = (**(code **)(*param_1 + 0x30))
                      (param_1,lStackX_8,lStackX_20,aiStackX_10[0],aiStackX_18[0]);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
                    // WARNING: Subroutine does not return
  memset(lStackX_20,0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_180750190(longlong param_1,longlong *param_2,char param_3)

{
  if (param_2 == (longlong *)0x0) {
    return 0x1f;
  }
  if (param_1 != param_2[5]) {
    return 0x22;
  }
  *(longlong *)param_2[1] = *param_2;
  *(longlong *)(*param_2 + 8) = param_2[1];
  param_2[1] = (longlong)param_2;
  *param_2 = (longlong)param_2;
  *(int32_t *)(param_2 + 3) = 0xffffffff;
  param_2[2] = 0;
  if ((int)param_2[7] == 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_2,&unknown_var_9552_ptr,0x93a,1);
  }
  *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + -1;
  if (param_3 == '\0') {
    FUN_180752af0(param_1);
  }
  return 0;
}



uint64_t FUN_180750240(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x108) != 0) &&
     (((*(int *)(param_1 + 0x110) != 0 && (*(int *)(param_1 + 0x110) != 2)) ||
      (*(char *)(param_1 + 0x5c) != '\0')))) {
    FUN_180768360(*(uint64_t *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x10) + 0x168));
    lVar1 = *(longlong *)(param_1 + 0x108);
    plVar2 = (longlong *)(lVar1 + 0x18);
    **(longlong **)(lVar1 + 0x20) = *plVar2;
    *(uint64_t *)(*plVar2 + 8) = *(uint64_t *)(lVar1 + 0x20);
    *(longlong **)(lVar1 + 0x20) = plVar2;
    *plVar2 = (longlong)plVar2;
                    // WARNING: Subroutine does not return
    FUN_180768400(*(uint64_t *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x10) + 0x168));
  }
  return 0;
}





