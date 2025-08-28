#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part239.c - 12 个函数

// 函数: void FUN_1802089d7(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_1802089d7(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  longlong param_9)

{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  longlong lVar4;
  uint64_t uVar5;
  char cVar6;
  byte bVar7;
  ulonglong *puVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  uint unaff_EBX;
  char *pcVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  int32_t uVar16;
  uint *puVar17;
  uint uVar18;
  float *pfVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int in_R10D;
  longlong *unaff_R12;
  uint uVar23;
  ulonglong unaff_R14;
  uint *puVar24;
  bool bVar25;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lStack0000000000000058;
  longlong *in_stack_000000a0;
  uint in_stack_000000a8;
  
  uVar22 = unaff_R14;
  do {
    lVar11 = *(longlong *)(param_3 + 0x58 + uVar22);
    uVar23 = (uint)unaff_R14;
    uVar21 = unaff_R14 & 0xffffffff;
    lVar9 = *(longlong *)(param_3 + 0x60 + uVar22) - lVar11;
    lVar14 = lVar9 >> 0x3f;
    param_6._0_4_ = uVar23;
    uVar26 = unaff_R14;
    uVar27 = unaff_R14;
    if (lVar9 / 0xc + lVar14 != lVar14) {
      do {
        lVar14 = *(longlong *)(*(longlong *)(param_3 + uVar22) + 0x38);
        uVar18 = (uint)uVar21;
        if ((*(byte *)(uVar26 + 8 + lVar14) & 1) != 0) {
          iVar15 = *(int *)(lVar11 + uVar27);
          lVar9 = *(longlong *)(uVar26 + lVar14);
          lStack0000000000000058 = lVar11;
          if (iVar15 == -1) {
            lVar4 = *(longlong *)(param_3 + 0x10 + uVar22);
            if (lVar4 == 0) {
              lVar14 = FUN_1801efdb0(lVar14,lVar9);
              param_3 = param_9;
              uVar18 = (uint)param_6;
              if ((lVar14 == 0) || (iVar20 = *(int *)(lVar14 + 0x18), iVar20 == 0))
              goto LAB_180208aa2;
              uVar16 = *(int32_t *)(lVar14 + 0x2c);
            }
            else {
              cVar6 = FUN_1801ef300(lVar14,lVar9,lVar4);
              if (cVar6 == '\0') {
                FUN_180626f80(&unknown_var_1920_ptr);
                iVar15 = *(int *)(lVar11 + uVar27);
                param_3 = param_9;
                uVar18 = (uint)param_6;
                goto LAB_180208aa2;
              }
              lVar14 = FUN_1801ef620(extraout_XMM0_Qa,lVar9,lVar4);
              uVar16 = *(int32_t *)(lVar14 + 0x2c);
              lVar14 = FUN_1801efdb0(extraout_XMM0_Qa_00,lVar4);
              iVar20 = *(int *)(lVar14 + 0x18);
            }
            uVar2 = *(int32_t *)(lVar14 + 0x24);
            uVar3 = *(int32_t *)(lVar14 + 0x28);
            *(int *)(lVar11 + 4 + uVar27) = iVar20;
            *(int32_t *)(lVar11 + 8 + uVar27) = *(int32_t *)(lVar14 + 0x1c);
            *(byte *)(lVar9 + 0xfe) = *(byte *)(lVar9 + 0xfe) & 0xf7;
            *(uint *)(lVar9 + 0x100) = *(uint *)(lVar9 + 0x100) | 0x800;
            uVar5 = _DAT_180c8ed18;
            *(int32_t *)(lVar9 + 0x10c) = uVar2;
            bVar7 = (byte)unaff_R14;
            if (lVar4 == 0) {
              bVar7 = 8;
            }
            *(int32_t *)(lVar9 + 0x110) = uVar3;
            *(byte *)(lVar9 + 0xfe) = *(byte *)(lVar9 + 0xfe) | bVar7;
            *(int32_t *)(lVar9 + 0x108) = uVar16;
            puVar8 = (ulonglong *)FUN_18062b1e0(uVar5,0x20,8,3);
            *puVar8 = unaff_R14;
            *(uint *)(puVar8 + 1) = uVar23;
            *(int32_t *)((longlong)puVar8 + 0xc) = 0xffffffff;
            puVar8[2] = unaff_R14;
            *(uint *)(puVar8 + 3) = uVar23;
            *(ulonglong **)(lVar9 + 0x2d0) = puVar8;
            *(uint *)(lVar11 + uVar27) = uVar23;
          }
          else {
LAB_180208aa2:
            if (iVar15 < 0) goto LAB_180208d4a;
          }
          puVar17 = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0x9c8) * 0x488 +
                            _DAT_180c86890 + 0xb8);
          if (unaff_EBX == 0) {
            uVar1 = 0xffffffff;
          }
          else {
            LOCK();
            uVar1 = *puVar17;
            *puVar17 = *puVar17 + unaff_EBX;
            UNLOCK();
            uVar21 = (ulonglong)(uVar1 >> 0xb);
            uVar13 = (ulonglong)((in_stack_000000a8 - 1) + uVar1 >> 0xb);
            unaff_EBX = in_stack_000000a8;
            if (uVar21 <= uVar13) {
              pcVar12 = (char *)((longlong)puVar17 + uVar21 + 0x408);
              lVar14 = (uVar13 - uVar21) + 1;
              puVar24 = puVar17 + uVar21 * 2 + 2;
              do {
                iVar15 = (int)uVar21;
                if (*(longlong *)puVar24 == 0) {
                  lVar11 = FUN_18062b420(_DAT_180c8ed18,0x4000,0x25);
                  LOCK();
                  bVar25 = *(longlong *)(puVar17 + (longlong)iVar15 * 2 + 2) == 0;
                  if (bVar25) {
                    *(longlong *)(puVar17 + (longlong)iVar15 * 2 + 2) = lVar11;
                  }
                  UNLOCK();
                  if (bVar25) {
                    uVar18 = iVar15 * 0x800;
                    iVar20 = uVar18 + 0x800;
                    for (; (int)uVar18 < iVar20; uVar18 = uVar18 + 1) {
                      *(ulonglong *)
                       (*(longlong *)(puVar17 + (ulonglong)(uVar18 >> 0xb) * 2 + 2) +
                       (longlong)(int)(uVar18 + (uVar18 >> 0xb) * -0x800) * 8) = unaff_R14;
                    }
                    LOCK();
                    *(byte *)((longlong)iVar15 + 0x408 + (longlong)puVar17) = (byte)unaff_R14;
                    UNLOCK();
                  }
                  else {
                    if (lVar11 != 0) {
                    // WARNING: Subroutine does not return
                      FUN_18064e900();
                    }
                    do {
                    } while (*pcVar12 != '\0');
                  }
                }
                else {
                  do {
                  } while (*pcVar12 != '\0');
                }
                uVar21 = (ulonglong)(iVar15 + 1);
                puVar24 = puVar24 + 2;
                pcVar12 = pcVar12 + 1;
                lVar14 = lVar14 + -1;
                lVar11 = lStack0000000000000058;
              } while (lVar14 != 0);
            }
          }
          *(int32_t *)(*(longlong *)(lVar9 + 0x2d0) + 0x10) =
               *(int32_t *)(lVar11 + 8 + uVar27);
          *(uint *)(*(longlong *)(lVar9 + 0x2d0) + 0x14) = unaff_EBX;
          *(uint *)(*(longlong *)(lVar9 + 0x2d0) + 0x18) = uVar1;
          *(int32_t *)(*(longlong *)(lVar9 + 0x2d0) + 0xc) =
               *(int32_t *)(_DAT_180c86870 + 0x224);
          param_3 = param_9;
          uVar18 = (uint)param_6;
          if (0 < (int)unaff_EBX) {
            uVar21 = (ulonglong)unaff_EBX;
            pfVar19 = (float *)(in_stack_000000a0 + 9);
            do {
              pfVar10 = (float *)(*(longlong *)(puVar17 + (ulonglong)(uVar1 >> 0xb) * 2 + 2) +
                                 (ulonglong)(uVar1 + (uVar1 >> 0xb) * -0x800) * 8);
              *pfVar10 = (float)(int)pfVar19[-1];
              pfVar10[1] = *pfVar19;
              uVar21 = uVar21 - 1;
              pfVar19 = pfVar19 + 2;
              unaff_EBX = in_stack_000000a8;
              uVar1 = uVar1 + 1;
            } while (uVar21 != 0);
          }
        }
LAB_180208d4a:
        lVar11 = *(longlong *)(param_3 + 0x58 + uVar22);
        param_6._0_4_ = uVar18 + 1;
        uVar21 = (ulonglong)(uint)param_6;
        unaff_R12 = in_stack_000000a0;
        in_R10D = param_6._4_4_;
        uVar26 = uVar26 + 0x10;
        uVar27 = uVar27 + 0xc;
      } while ((ulonglong)(longlong)(int)(uint)param_6 <
               (ulonglong)((*(longlong *)(param_3 + 0x60 + uVar22) - lVar11) / 0xc));
    }
    param_3 = *unaff_R12;
    in_R10D = in_R10D + 1;
    uVar22 = uVar22 + 0x78;
    lVar11 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(unaff_R12[1] - param_3),8) +
             (unaff_R12[1] - param_3);
    param_6._4_4_ = in_R10D;
    param_9 = param_3;
    if ((ulonglong)((lVar11 >> 6) - (lVar11 >> 0x3f)) <= (ulonglong)(longlong)in_R10D) {
      return;
    }
  } while( true );
}





// 函数: void FUN_180208e16(longlong *param_1)
void FUN_180208e16(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *unaff_R12;
  ulonglong uVar9;
  longlong unaff_R15;
  
  lVar7 = *param_1;
  uVar9 = 0;
  lVar2 = SUB168(SEXT816(unaff_R15) * SEXT816(param_1[1] - lVar7),8) + (param_1[1] - lVar7);
  uVar3 = uVar9;
  uVar8 = uVar9;
  if (lVar2 >> 6 != lVar2 >> 0x3f) {
    do {
      lVar2 = *(longlong *)(lVar7 + uVar8);
      uVar4 = uVar9;
      uVar6 = uVar9;
      if (*(longlong *)(lVar2 + 0x40) - *(longlong *)(lVar2 + 0x38) >> 4 != 0) {
        do {
          if (((*(byte *)(*(longlong *)(lVar2 + 0x38) + 8 + uVar4) & 1) != 0) &&
             (lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + uVar4),
             (*(uint *)(lVar1 + 0x100) & 0x800) != 0)) {
            *(int32_t *)(*(longlong *)(lVar1 + 0x2d0) + 0x10) = 0;
            *(int32_t *)(*(longlong *)(lVar1 + 0x2d0) + 0xc) = 0;
            *(int32_t *)(*(longlong *)(lVar1 + 0x2d0) + 0x14) = 0;
            *(int32_t *)(*(longlong *)(lVar1 + 0x2d0) + 0x18) = 0;
            lVar2 = *(longlong *)(lVar7 + uVar8);
          }
          uVar5 = (int)uVar6 + 1;
          uVar4 = uVar4 + 0x10;
          uVar6 = (ulonglong)uVar5;
        } while ((ulonglong)(longlong)(int)uVar5 <
                 (ulonglong)(*(longlong *)(lVar2 + 0x40) - *(longlong *)(lVar2 + 0x38) >> 4));
      }
      lVar7 = *unaff_R12;
      uVar5 = (int)uVar3 + 1;
      lVar2 = SUB168(SEXT816(unaff_R15) * SEXT816(unaff_R12[1] - lVar7),8) + (unaff_R12[1] - lVar7);
      uVar3 = (ulonglong)uVar5;
      uVar8 = uVar8 + 0x78;
    } while ((ulonglong)(longlong)(int)uVar5 < (ulonglong)((lVar2 >> 6) - (lVar2 >> 0x3f)));
  }
  return;
}





// 函数: void FUN_180208f20(longlong param_1,longlong param_2,int *param_3,longlong param_4,float param_5)
void FUN_180208f20(longlong param_1,longlong param_2,int *param_3,longlong param_4,float param_5)

{
  bool bVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  
  if (param_2 == *(longlong *)(param_1 + 0x20)) {
    fVar11 = *(float *)(param_1 + 0x28);
  }
  else {
    fVar11 = *(float *)(param_1 + 0x848);
  }
  piVar8 = *(int **)(param_2 + 0xb8);
  iVar9 = 0;
  fVar11 = fVar11 * 30.0;
  iVar4 = (int)((*(longlong *)(param_2 + 0xc0) - (longlong)piVar8) / 0x28) + -1;
  if (0 < iVar4) {
    lVar2 = 0;
    do {
      if ((int)fVar11 < *piVar8) break;
      iVar9 = iVar9 + 1;
      lVar2 = lVar2 + 1;
      piVar8 = piVar8 + 10;
    } while (lVar2 < iVar4);
  }
  lVar2 = *(longlong *)(param_2 + 0xb8);
  iVar4 = iVar9 + -1;
  piVar8 = (int *)(lVar2 + (longlong)iVar9 * 0x28);
  if (iVar4 < 0) {
    fVar11 = 0.0;
    piVar7 = piVar8;
  }
  else {
    iVar9 = *(int *)(lVar2 + (longlong)iVar4 * 0x28);
    fVar12 = (float)*piVar8;
    if (fVar11 <= fVar12) {
      fVar12 = fVar11;
    }
    fVar11 = (fVar12 - (float)iVar9) / (float)(*piVar8 - iVar9);
    piVar7 = (int *)(lVar2 + (longlong)iVar4 * 0x28);
  }
  if ((piVar7 != (int *)0x0) && (piVar8 != (int *)0x0)) {
    if (0.0 <= fVar11) {
      if (1.0 <= fVar11) {
        fVar11 = 1.0;
      }
    }
    else {
      fVar11 = 0.0;
    }
    fVar12 = fVar11 * param_5;
    param_5 = (1.0 - fVar11) * param_5;
    if (0.0 < param_5) {
      lVar2 = *(longlong *)(piVar7 + 2);
      iVar4 = 0;
      if (0 < (int)(*(longlong *)(piVar7 + 4) - lVar2 >> 3)) {
        lVar10 = 0;
        do {
          if (0.0 < *(float *)(lVar10 + 4 + lVar2)) {
            iVar9 = *param_3;
            lVar6 = (longlong)iVar9;
            pfVar3 = (float *)(param_4 + 4);
            bVar1 = false;
            lVar5 = 0;
            do {
              if (lVar6 <= lVar5) {
                if (!bVar1) {
                  if (0xff < iVar9) goto FUN_1802090ff;
                  *(int32_t *)(param_4 + lVar6 * 8) = *(int32_t *)(lVar10 + lVar2);
                  fVar11 = *(float *)(lVar10 + 4 + lVar2);
                  *param_3 = iVar9 + 1;
                  *(float *)(param_4 + 4 + lVar6 * 8) = param_5 * fVar11;
                }
                break;
              }
              if (pfVar3[-1] == *(float *)(lVar10 + lVar2)) {
                bVar1 = true;
                *pfVar3 = param_5 * *(float *)(lVar10 + 4 + lVar2) + *pfVar3;
              }
              lVar5 = lVar5 + 1;
              pfVar3 = pfVar3 + 2;
            } while (!bVar1);
          }
          lVar2 = *(longlong *)(piVar7 + 2);
          iVar4 = iVar4 + 1;
          lVar10 = lVar10 + 8;
        } while (iVar4 < (int)(*(longlong *)(piVar7 + 4) - lVar2 >> 3));
      }
    }
FUN_1802090ff:
    if (0.0 < fVar12) {
      lVar2 = *(longlong *)(piVar8 + 2);
      iVar4 = 0;
      if (0 < (int)(*(longlong *)(piVar8 + 4) - lVar2 >> 3)) {
        lVar10 = 0;
        do {
          if (0.0 < *(float *)(lVar2 + 4 + lVar10)) {
            iVar9 = *param_3;
            lVar5 = (longlong)iVar9;
            pfVar3 = (float *)(param_4 + 4);
            bVar1 = false;
            lVar6 = 0;
            do {
              if (lVar5 <= lVar6) {
                if (!bVar1) {
                  if (0xff < iVar9) {
                    return;
                  }
                  *(int32_t *)(param_4 + lVar5 * 8) = *(int32_t *)(lVar2 + lVar10);
                  fVar11 = *(float *)(lVar2 + 4 + lVar10);
                  *param_3 = iVar9 + 1;
                  *(float *)(param_4 + 4 + lVar5 * 8) = fVar12 * fVar11;
                }
                break;
              }
              if (pfVar3[-1] == *(float *)(lVar2 + lVar10)) {
                bVar1 = true;
                *pfVar3 = fVar12 * *(float *)(lVar2 + 4 + lVar10) + *pfVar3;
              }
              lVar6 = lVar6 + 1;
              pfVar3 = pfVar3 + 2;
            } while (!bVar1);
          }
          lVar2 = *(longlong *)(piVar8 + 2);
          iVar4 = iVar4 + 1;
          lVar10 = lVar10 + 8;
        } while (iVar4 < (int)(*(longlong *)(piVar8 + 4) - lVar2 >> 3));
      }
    }
  }
  return;
}





// 函数: void FUN_18020902a(uint64_t param_1,float param_2,float param_3)
void FUN_18020902a(uint64_t param_1,float param_2,float param_3)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int *unaff_RBP;
  int iVar8;
  longlong unaff_RDI;
  longlong lVar9;
  longlong unaff_R14;
  longlong unaff_R15;
  float in_XMM4_Da;
  float in_stack_00000038;
  
  param_2 = param_2 * in_stack_00000038;
  param_3 = param_3 * in_stack_00000038;
  if (in_XMM4_Da < param_3) {
    lVar6 = *(longlong *)(unaff_RDI + 8);
    iVar8 = 0;
    if (0 < (int)(*(longlong *)(unaff_RDI + 0x10) - lVar6 >> 3)) {
      lVar9 = 0;
      do {
        if (in_XMM4_Da < *(float *)(lVar9 + 4 + lVar6)) {
          iVar2 = *unaff_RBP;
          lVar7 = (longlong)iVar2;
          pfVar4 = (float *)(unaff_R14 + 4);
          bVar3 = false;
          lVar5 = 0;
          do {
            if (lVar7 <= lVar5) {
              if (!bVar3) {
                if (0xff < iVar2) goto FUN_1802090ff;
                *(int32_t *)(unaff_R14 + lVar7 * 8) = *(int32_t *)(lVar9 + lVar6);
                fVar1 = *(float *)(lVar9 + 4 + lVar6);
                *unaff_RBP = iVar2 + 1;
                *(float *)(unaff_R14 + 4 + lVar7 * 8) = param_3 * fVar1;
              }
              break;
            }
            if (pfVar4[-1] == *(float *)(lVar9 + lVar6)) {
              bVar3 = true;
              *pfVar4 = param_3 * *(float *)(lVar9 + 4 + lVar6) + *pfVar4;
            }
            lVar5 = lVar5 + 1;
            pfVar4 = pfVar4 + 2;
          } while (!bVar3);
        }
        lVar6 = *(longlong *)(unaff_RDI + 8);
        iVar8 = iVar8 + 1;
        lVar9 = lVar9 + 8;
      } while (iVar8 < (int)(*(longlong *)(unaff_RDI + 0x10) - lVar6 >> 3));
    }
  }
FUN_1802090ff:
  if (in_XMM4_Da < param_2) {
    lVar6 = *(longlong *)(unaff_R15 + 8);
    iVar8 = 0;
    if (0 < (int)(*(longlong *)(unaff_R15 + 0x10) - lVar6 >> 3)) {
      lVar9 = 0;
      do {
        if (in_XMM4_Da < *(float *)(lVar6 + 4 + lVar9)) {
          iVar2 = *unaff_RBP;
          lVar5 = (longlong)iVar2;
          pfVar4 = (float *)(unaff_R14 + 4);
          bVar3 = false;
          lVar7 = 0;
          do {
            if (lVar5 <= lVar7) {
              if (!bVar3) {
                if (0xff < iVar2) {
                  return;
                }
                *(int32_t *)(unaff_R14 + lVar5 * 8) = *(int32_t *)(lVar6 + lVar9);
                fVar1 = *(float *)(lVar6 + 4 + lVar9);
                *unaff_RBP = iVar2 + 1;
                *(float *)(unaff_R14 + 4 + lVar5 * 8) = param_2 * fVar1;
              }
              break;
            }
            if (pfVar4[-1] == *(float *)(lVar6 + lVar9)) {
              bVar3 = true;
              *pfVar4 = param_2 * *(float *)(lVar6 + 4 + lVar9) + *pfVar4;
            }
            lVar7 = lVar7 + 1;
            pfVar4 = pfVar4 + 2;
          } while (!bVar3);
        }
        lVar6 = *(longlong *)(unaff_R15 + 8);
        iVar8 = iVar8 + 1;
        lVar9 = lVar9 + 8;
      } while (iVar8 < (int)(*(longlong *)(unaff_R15 + 0x10) - lVar6 >> 3));
    }
  }
  return;
}





// 函数: void FUN_180209052(uint64_t param_1,uint64_t param_2,float param_3,float param_4)
void FUN_180209052(uint64_t param_1,uint64_t param_2,float param_3,float param_4)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  longlong in_RAX;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  int *unaff_RBP;
  int iVar7;
  longlong unaff_RDI;
  longlong in_R8;
  longlong lVar8;
  longlong lVar9;
  longlong unaff_R14;
  longlong unaff_R15;
  float in_XMM4_Da;
  
  iVar7 = 0;
  if (0 < (int)(in_RAX >> 3)) {
    lVar9 = 0;
    do {
      if (in_XMM4_Da < *(float *)(lVar9 + 4 + in_R8)) {
        iVar2 = *unaff_RBP;
        lVar6 = (longlong)iVar2;
        pfVar4 = (float *)(unaff_R14 + 4);
        bVar3 = false;
        lVar5 = 0;
        do {
          if (lVar6 <= lVar5) {
            if (!bVar3) {
              if (0xff < iVar2) goto LAB_1802090fa;
              *(int32_t *)(unaff_R14 + lVar6 * 8) = *(int32_t *)(lVar9 + in_R8);
              fVar1 = *(float *)(lVar9 + 4 + in_R8);
              *unaff_RBP = iVar2 + 1;
              *(float *)(unaff_R14 + 4 + lVar6 * 8) = param_3 * fVar1;
            }
            break;
          }
          if (pfVar4[-1] == *(float *)(lVar9 + in_R8)) {
            bVar3 = true;
            *pfVar4 = param_3 * *(float *)(lVar9 + 4 + in_R8) + *pfVar4;
          }
          lVar5 = lVar5 + 1;
          pfVar4 = pfVar4 + 2;
        } while (!bVar3);
      }
      in_R8 = *(longlong *)(unaff_RDI + 8);
      iVar7 = iVar7 + 1;
      lVar9 = lVar9 + 8;
    } while (iVar7 < (int)(*(longlong *)(unaff_RDI + 0x10) - in_R8 >> 3));
  }
LAB_1802090fa:
  if (in_XMM4_Da < param_4) {
    lVar9 = *(longlong *)(unaff_R15 + 8);
    iVar7 = 0;
    if (0 < (int)(*(longlong *)(unaff_R15 + 0x10) - lVar9 >> 3)) {
      lVar5 = 0;
      do {
        if (in_XMM4_Da < *(float *)(lVar9 + 4 + lVar5)) {
          iVar2 = *unaff_RBP;
          lVar6 = (longlong)iVar2;
          pfVar4 = (float *)(unaff_R14 + 4);
          bVar3 = false;
          lVar8 = 0;
          do {
            if (lVar6 <= lVar8) {
              if (!bVar3) {
                if (0xff < iVar2) {
                  return;
                }
                *(int32_t *)(unaff_R14 + lVar6 * 8) = *(int32_t *)(lVar9 + lVar5);
                fVar1 = *(float *)(lVar9 + 4 + lVar5);
                *unaff_RBP = iVar2 + 1;
                *(float *)(unaff_R14 + 4 + lVar6 * 8) = param_4 * fVar1;
              }
              break;
            }
            if (pfVar4[-1] == *(float *)(lVar9 + lVar5)) {
              bVar3 = true;
              *pfVar4 = param_4 * *(float *)(lVar9 + 4 + lVar5) + *pfVar4;
            }
            lVar8 = lVar8 + 1;
            pfVar4 = pfVar4 + 2;
          } while (!bVar3);
        }
        lVar9 = *(longlong *)(unaff_R15 + 8);
        iVar7 = iVar7 + 1;
        lVar5 = lVar5 + 8;
      } while (iVar7 < (int)(*(longlong *)(unaff_R15 + 0x10) - lVar9 >> 3));
    }
  }
  return;
}





// 函数: void FUN_1802090ff(void)
void FUN_1802090ff(void)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  int *unaff_RBP;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong unaff_R14;
  longlong unaff_R15;
  float in_XMM3_Da;
  float in_XMM4_Da;
  
  if (in_XMM4_Da < in_XMM3_Da) {
    lVar5 = *(longlong *)(unaff_R15 + 8);
    iVar7 = 0;
    if (0 < (int)(*(longlong *)(unaff_R15 + 0x10) - lVar5 >> 3)) {
      lVar9 = 0;
      do {
        if (in_XMM4_Da < *(float *)(lVar5 + 4 + lVar9)) {
          iVar2 = *unaff_RBP;
          lVar6 = (longlong)iVar2;
          pfVar4 = (float *)(unaff_R14 + 4);
          bVar3 = false;
          lVar8 = 0;
          do {
            if (lVar6 <= lVar8) {
              if (!bVar3) {
                if (0xff < iVar2) {
                  return;
                }
                *(int32_t *)(unaff_R14 + lVar6 * 8) = *(int32_t *)(lVar5 + lVar9);
                fVar1 = *(float *)(lVar5 + 4 + lVar9);
                *unaff_RBP = iVar2 + 1;
                *(float *)(unaff_R14 + 4 + lVar6 * 8) = in_XMM3_Da * fVar1;
              }
              break;
            }
            if (pfVar4[-1] == *(float *)(lVar5 + lVar9)) {
              bVar3 = true;
              *pfVar4 = in_XMM3_Da * *(float *)(lVar5 + 4 + lVar9) + *pfVar4;
            }
            lVar8 = lVar8 + 1;
            pfVar4 = pfVar4 + 2;
          } while (!bVar3);
        }
        lVar5 = *(longlong *)(unaff_R15 + 8);
        iVar7 = iVar7 + 1;
        lVar9 = lVar9 + 8;
      } while (iVar7 < (int)(*(longlong *)(unaff_R15 + 0x10) - lVar5 >> 3));
    }
  }
  return;
}





// 函数: void FUN_1802091bf(void)
void FUN_1802091bf(void)

{
  return;
}





// 函数: void FUN_1802091d0(longlong *param_1)
void FUN_1802091d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  lVar5 = *param_1;
  iVar7 = 0;
  lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - lVar5),8) +
          (param_1[1] - lVar5);
  if (lVar2 >> 6 != lVar2 >> 0x3f) {
    lVar2 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      iVar6 = 0;
      if (*(longlong *)(lVar3 + 0x40) - *(longlong *)(lVar3 + 0x38) >> 4 != 0) {
        lVar4 = 0;
        do {
          if (((*(byte *)(*(longlong *)(lVar3 + 0x38) + 8 + lVar4) & 1) != 0) &&
             (lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + lVar4),
             (*(uint *)(lVar1 + 0x100) & 0x800) != 0)) {
            FUN_18007f0e0(lVar1,(longlong)param_1 + 0x44,*(int32_t *)((longlong)param_1 + 0x844))
            ;
            lVar3 = *(longlong *)(lVar2 + lVar5);
          }
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 0x10;
        } while ((ulonglong)(longlong)iVar6 <
                 (ulonglong)(*(longlong *)(lVar3 + 0x40) - *(longlong *)(lVar3 + 0x38) >> 4));
      }
      lVar5 = *param_1;
      iVar7 = iVar7 + 1;
      lVar2 = lVar2 + 0x78;
      lVar3 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - lVar5),8) +
              (param_1[1] - lVar5);
    } while ((ulonglong)(longlong)iVar7 < (ulonglong)((lVar3 >> 6) - (lVar3 >> 0x3f)));
  }
  return;
}





// 函数: void FUN_180209215(void)
void FUN_180209215(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  int iVar4;
  longlong unaff_R12;
  longlong lVar5;
  int unaff_R15D;
  
  lVar5 = 0;
  do {
    lVar2 = *(longlong *)(lVar5 + unaff_RBP);
    iVar4 = 0;
    if (*(longlong *)(lVar2 + 0x40) - *(longlong *)(lVar2 + 0x38) >> 4 != 0) {
      lVar3 = 0;
      do {
        if (((*(byte *)(*(longlong *)(lVar2 + 0x38) + 8 + lVar3) & 1) != 0) &&
           (lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + lVar3),
           (*(uint *)(lVar1 + 0x100) & 0x800) != 0)) {
          FUN_18007f0e0(lVar1,(longlong)unaff_RSI + 0x44,
                        *(int32_t *)((longlong)unaff_RSI + 0x844));
          lVar2 = *(longlong *)(lVar5 + unaff_RBP);
        }
        iVar4 = iVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while ((ulonglong)(longlong)iVar4 <
               (ulonglong)(*(longlong *)(lVar2 + 0x40) - *(longlong *)(lVar2 + 0x38) >> 4));
    }
    unaff_RBP = *unaff_RSI;
    unaff_R15D = unaff_R15D + 1;
    lVar5 = lVar5 + 0x78;
    lVar2 = SUB168(SEXT816(unaff_R12) * SEXT816(unaff_RSI[1] - unaff_RBP),8) +
            (unaff_RSI[1] - unaff_RBP);
  } while ((ulonglong)(longlong)unaff_R15D < (ulonglong)((lVar2 >> 6) - (lVar2 >> 0x3f)));
  return;
}





// 函数: void FUN_1802092dc(void)
void FUN_1802092dc(void)

{
  return;
}



longlong FUN_1802092f0(longlong param_1)

{
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x28) = 3;
  *(longlong *)param_1 = param_1;
  *(longlong *)(param_1 + 8) = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int8_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180209330(uint64_t *param_1,longlong param_2,uint64_t param_3)
void FUN_180209330(uint64_t *param_1,longlong param_2,uint64_t param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  int iVar6;
  longlong lVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  bool bVar10;
  
  uVar1 = *(int32_t *)(param_2 + 0xb8);
  uVar2 = *(int32_t *)(param_2 + 0xbc);
  uVar3 = *(int32_t *)(param_2 + 0xc0);
  uVar4 = *(int32_t *)(param_2 + 0xc4);
  lVar7 = FUN_18062b420(_DAT_180c8ed18,0x38,*(int8_t *)(param_1 + 5));
  bVar10 = true;
  *(int32_t *)(lVar7 + 0x20) = uVar1;
  *(int32_t *)(lVar7 + 0x24) = uVar2;
  *(int32_t *)(lVar7 + 0x28) = uVar3;
  *(int32_t *)(lVar7 + 0x2c) = uVar4;
  *(uint64_t *)(lVar7 + 0x30) = param_3;
  puVar8 = (uint64_t *)param_1[2];
  puVar5 = param_1;
  while (puVar8 != (uint64_t *)0x0) {
    iVar6 = memcmp(lVar7 + 0x20,puVar8 + 4,0x10);
    bVar10 = iVar6 < 0;
    puVar5 = puVar8;
    if (bVar10) {
      puVar8 = (uint64_t *)puVar8[1];
    }
    else {
      puVar8 = (uint64_t *)*puVar8;
    }
  }
  puVar8 = puVar5;
  if (bVar10) {
    if (puVar5 == (uint64_t *)param_1[1]) goto LAB_1802093e9;
    puVar8 = (uint64_t *)func_0x00018066b9a0(puVar5);
  }
  iVar6 = memcmp(puVar8 + 4,lVar7 + 0x20,0x10);
  if (-1 < iVar6) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar7);
  }
LAB_1802093e9:
  if ((puVar5 == param_1) || (iVar6 = memcmp(lVar7 + 0x20,puVar5 + 4,0x10), iVar6 < 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar7,puVar5,param_1,uVar9);
}





// 函数: void FUN_180209450(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180209450(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  if (puVar1 != (uint64_t *)0x0) {
    FUN_18004b790(param_1,*puVar1,param_3,param_4,0xfffffffffffffffe);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



