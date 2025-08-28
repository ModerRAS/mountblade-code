#include "TaleWorlds.Native.Split.h"

// 99_part_12_part042.c - 5 个函数

// 函数: void FUN_1807e7120(longlong param_1,int param_2,longlong param_3,longlong param_4,undefined8 param_5
void FUN_1807e7120(longlong param_1,int param_2,longlong param_3,longlong param_4,undefined8 param_5
                  ,int param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_1c8 [32];
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  char cStack_198;
  int iStack_194;
  int iStack_190;
  longlong lStack_188;
  undefined1 auStack_178 [256];
  ulonglong uStack_78;
  
  uStack_78 = _DAT_180bf00a8 ^ (ulonglong)auStack_1c8;
  iStack_194 = param_2;
  lStack_188 = param_1;
  if (param_6 == 1) {
    if (param_3 != 0) {
      **(undefined4 **)(param_3 + 8) = *(undefined4 *)(*(longlong *)(param_1 + 0x220) + 0x30);
    }
    if (param_4 != 0) {
      **(undefined4 **)(param_4 + 8) = *(undefined4 *)(*(longlong *)(param_1 + 0x220) + 0x34);
    }
  }
  else {
    cStack_198 = '\0';
    puVar12 = (undefined4 *)**(undefined8 **)(param_3 + 0x18);
    puVar10 = (undefined4 *)**(undefined8 **)(param_4 + 0x18);
    uVar2 = **(uint **)(param_3 + 8);
    lVar11 = (longlong)(int)uVar2;
    iVar3 = **(int **)(param_4 + 8);
    lVar17 = (longlong)iVar3;
    if (puVar12 != (undefined4 *)0x0) {
      if ((((int)uVar2 < 2) || (*(int *)(*(longlong *)(param_1 + 0x220) + 0x30) != 1)) &&
         ((int)uVar2 < 3)) {
        if ((uVar2 != *(uint *)(*(longlong *)(param_1 + 0x220) + 0x30)) ||
           (iVar3 != *(int *)(*(longlong *)(param_1 + 0x220) + 0x34))) {
                    // WARNING: Subroutine does not return
          memcpy(puVar10,puVar12,(ulonglong)(uint)(param_2 * iVar3) << 2);
        }
      }
      else {
        cStack_198 = '\x01';
      }
      if (0 < iVar3) {
                    // WARNING: Subroutine does not return
        memset(_DAT_180c31040,0,0x400);
      }
      if (param_2 != 0) {
        do {
          iVar5 = iStack_194;
          iStack_190 = iStack_194;
          if (0x100 < iStack_194) {
            iStack_190 = 0x100;
          }
          lVar16 = (longlong)iStack_190;
          if (cStack_198 == '\0') {
            lVar13 = 0;
            if (0 < iStack_190) {
              do {
                lVar7 = 0;
                if (3 < lVar11) {
                  do {
                    *(undefined4 *)(*(longlong *)(&DAT_180c30f40 + lVar7 * 8) + lVar13 * 4) =
                         *puVar12;
                    *(undefined4 *)(*(longlong *)(&DAT_180c30f48 + lVar7 * 8) + lVar13 * 4) =
                         puVar12[1];
                    *(undefined4 *)(*(longlong *)(lVar7 * 8 + 0x180c30f50) + lVar13 * 4) =
                         puVar12[2];
                    lVar9 = lVar7 * 8;
                    lVar7 = lVar7 + 4;
                    puVar1 = puVar12 + 3;
                    puVar12 = puVar12 + 4;
                    *(undefined4 *)(*(longlong *)(lVar9 + 0x180c30f58) + lVar13 * 4) = *puVar1;
                  } while (lVar7 < lVar11 + -3);
                }
                for (; lVar7 < lVar11; lVar7 = lVar7 + 1) {
                  uVar4 = *puVar12;
                  puVar12 = puVar12 + 1;
                  *(undefined4 *)(*(longlong *)(&DAT_180c30f40 + lVar7 * 8) + lVar13 * 4) = uVar4;
                }
                lVar13 = lVar13 + 1;
              } while (lVar13 < lVar16);
            }
          }
          else if (iVar3 == 1) {
            lVar13 = 0;
            if (0 < iStack_190) {
              do {
                lVar7 = 0;
                fVar18 = 0.0;
                if ((0 < (int)uVar2) && (7 < uVar2)) {
                  fVar22 = 0.0;
                  fVar23 = 0.0;
                  fVar24 = 0.0;
                  fVar25 = 0.0;
                  fVar18 = 0.0;
                  fVar19 = 0.0;
                  fVar20 = 0.0;
                  fVar21 = 0.0;
                  uVar8 = uVar2 & 0x80000007;
                  if ((int)uVar8 < 0) {
                    uVar8 = (uVar8 - 1 | 0xfffffff8) + 1;
                  }
                  do {
                    pfVar6 = (float *)(puVar12 + lVar7);
                    fVar22 = fVar22 + *pfVar6;
                    fVar23 = fVar23 + pfVar6[1];
                    fVar24 = fVar24 + pfVar6[2];
                    fVar25 = fVar25 + pfVar6[3];
                    pfVar6 = (float *)(puVar12 + lVar7 + 4);
                    lVar7 = lVar7 + 8;
                    fVar18 = fVar18 + *pfVar6;
                    fVar19 = fVar19 + pfVar6[1];
                    fVar20 = fVar20 + pfVar6[2];
                    fVar21 = fVar21 + pfVar6[3];
                  } while (lVar7 < (int)(uVar2 - uVar8));
                  fVar18 = fVar24 + fVar20 + fVar22 + fVar18 + fVar25 + fVar21 + fVar23 + fVar19;
                }
                if (lVar7 < lVar11) {
                  if (3 < lVar11 - lVar7) {
                    pfVar6 = (float *)(puVar12 + lVar7 + 2);
                    lVar9 = ((lVar11 - lVar7) - 4U >> 2) + 1;
                    lVar7 = lVar7 + lVar9 * 4;
                    do {
                      fVar18 = fVar18 + pfVar6[-2] + pfVar6[-1] + *pfVar6 + pfVar6[1];
                      pfVar6 = pfVar6 + 4;
                      lVar9 = lVar9 + -1;
                    } while (lVar9 != 0);
                  }
                  for (; lVar7 < lVar11; lVar7 = lVar7 + 1) {
                    fVar18 = fVar18 + (float)puVar12[lVar7];
                  }
                }
                puVar12 = puVar12 + lVar11;
                *(float *)(_DAT_180c30f40 + lVar13 * 4) = (1.0 / (float)(int)uVar2) * fVar18;
                lVar13 = lVar13 + 1;
              } while (lVar13 < lVar16);
            }
          }
          else if (iVar3 == 2) {
                    // WARNING: Subroutine does not return
            memset(auStack_178,0,0x100);
          }
          lVar13 = *(longlong *)(lStack_188 + 0x220);
          if (lVar13 != 0) {
            uStack_1a0 = 0;
            uStack_1a8 = 0;
            (**(code **)(lVar13 + 8))(lVar13,0x47);
            lVar13 = *(longlong *)(lStack_188 + 0x220);
            if (*(code **)(lVar13 + 0x78) != (code *)0x0) {
              (**(code **)(lVar13 + 0x78))(lVar13,&DAT_180c30f40);
              lVar13 = *(longlong *)(lStack_188 + 0x220);
            }
            uStack_1a0 = 0;
            uStack_1a8 = 0;
            (**(code **)(lVar13 + 8))(lVar13);
          }
          if (cStack_198 == '\0') {
            lVar13 = 0;
            if (0 < lVar16) {
              do {
                lVar7 = 0;
                if (3 < lVar17) {
                  do {
                    *puVar10 = *(undefined4 *)
                                (*(longlong *)(&DAT_180c31040 + lVar7 * 8) + lVar13 * 4);
                    puVar10[1] = *(undefined4 *)
                                  (*(longlong *)(lVar7 * 8 + 0x180c31048) + lVar13 * 4);
                    puVar10[2] = *(undefined4 *)
                                  (*(longlong *)(lVar7 * 8 + 0x180c31050) + lVar13 * 4);
                    lVar9 = lVar7 * 8;
                    lVar7 = lVar7 + 4;
                    puVar10[3] = *(undefined4 *)(*(longlong *)(lVar9 + 0x180c31058) + lVar13 * 4);
                    puVar10 = puVar10 + 4;
                  } while (lVar7 < lVar17 + -3);
                }
                for (; lVar7 < lVar17; lVar7 = lVar7 + 1) {
                  *puVar10 = *(undefined4 *)(*(longlong *)(&DAT_180c31040 + lVar7 * 8) + lVar13 * 4)
                  ;
                  puVar10 = puVar10 + 1;
                }
                lVar13 = lVar13 + 1;
              } while (lVar13 < lVar16);
            }
          }
          else {
            lVar13 = 0;
            if (0 < lVar16) {
              do {
                iVar15 = 0;
                if (3 < iVar3) {
                  uVar8 = (iVar3 - 4U >> 2) + 1;
                  uVar14 = (ulonglong)uVar8;
                  iVar15 = uVar8 * 4;
                  do {
                    *puVar10 = *(undefined4 *)(_DAT_180c31040 + lVar13 * 4);
                    puVar10[1] = *(undefined4 *)(_DAT_180c31040 + lVar13 * 4);
                    puVar10[2] = *(undefined4 *)(_DAT_180c31040 + lVar13 * 4);
                    puVar10[3] = *(undefined4 *)(_DAT_180c31040 + lVar13 * 4);
                    puVar10 = puVar10 + 4;
                    uVar14 = uVar14 - 1;
                  } while (uVar14 != 0);
                }
                if (iVar15 < iVar3) {
                  uVar14 = (ulonglong)(uint)(iVar3 - iVar15);
                  do {
                    *puVar10 = *(undefined4 *)(_DAT_180c31040 + lVar13 * 4);
                    puVar10 = puVar10 + 1;
                    uVar14 = uVar14 - 1;
                  } while (uVar14 != 0);
                }
                lVar13 = lVar13 + 1;
              } while (lVar13 < lVar16);
            }
          }
          iStack_194 = iVar5 - iStack_190;
        } while (iStack_194 != 0);
        iStack_194 = 0;
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_78 ^ (ulonglong)auStack_1c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807e7209(void)
void FUN_1807e7209(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 *unaff_RBX;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  undefined4 *unaff_RDI;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  int unaff_R13D;
  undefined4 unaff_000000ac;
  int unaff_R14D;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Dc;
  char in_stack_00000030;
  longlong in_stack_00000040;
  ulonglong in_stack_00000150;
  undefined4 in_stack_00000160;
  undefined4 in_stack_00000168;
  undefined4 in_stack_00000170;
  undefined4 in_stack_00000178;
  
  if (0 < unaff_R13D) {
                    // WARNING: Subroutine does not return
    memset(_DAT_180c31040,0,0x400);
  }
  uVar2 = unaff_XMM7_Da;
  uVar3 = unaff_XMM7_Dc;
  uVar4 = unaff_XMM6_Da;
  uVar5 = unaff_XMM6_Dc;
  if (unaff_R14D != 0) {
    do {
      in_stack_00000178 = uVar5;
      in_stack_00000170 = uVar4;
      in_stack_00000168 = uVar3;
      in_stack_00000160 = uVar2;
      iVar6 = unaff_R14D;
      if (0x100 < unaff_R14D) {
        iVar6 = 0x100;
      }
      lVar14 = (longlong)iVar6;
      if (in_stack_00000030 == '\0') {
        lVar11 = 0;
        if (0 < iVar6) {
          do {
            lVar8 = 0;
            if (3 < CONCAT44(unaff_0000002c,unaff_EBP)) {
              do {
                *(undefined4 *)(*(longlong *)(&DAT_180c30f40 + lVar8 * 8) + lVar11 * 4) = *unaff_RDI
                ;
                *(undefined4 *)(*(longlong *)(&DAT_180c30f48 + lVar8 * 8) + lVar11 * 4) =
                     unaff_RDI[1];
                *(undefined4 *)(*(longlong *)(lVar8 * 8 + 0x180c30f50) + lVar11 * 4) = unaff_RDI[2];
                lVar10 = lVar8 * 8;
                lVar8 = lVar8 + 4;
                puVar1 = unaff_RDI + 3;
                unaff_RDI = unaff_RDI + 4;
                *(undefined4 *)(*(longlong *)(lVar10 + 0x180c30f58) + lVar11 * 4) = *puVar1;
              } while (lVar8 < CONCAT44(unaff_0000002c,unaff_EBP) + -3);
            }
            if (lVar8 < CONCAT44(unaff_0000002c,unaff_EBP)) {
              do {
                lVar10 = lVar8 * 8;
                lVar8 = lVar8 + 1;
                uVar2 = *unaff_RDI;
                unaff_RDI = unaff_RDI + 1;
                *(undefined4 *)(*(longlong *)(&DAT_180c30f40 + lVar10) + lVar11 * 4) = uVar2;
              } while (lVar8 < CONCAT44(unaff_0000002c,unaff_EBP));
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 < lVar14);
        }
      }
      else if (unaff_R13D == 1) {
        lVar11 = 0;
        if (0 < iVar6) {
          do {
            lVar8 = 0;
            fVar15 = 0.0;
            if ((0 < (int)unaff_EBP) && (7 < unaff_EBP)) {
              fVar19 = 0.0;
              fVar20 = 0.0;
              fVar21 = 0.0;
              fVar22 = 0.0;
              fVar15 = 0.0;
              fVar16 = 0.0;
              fVar17 = 0.0;
              fVar18 = 0.0;
              uVar9 = unaff_EBP & 0x80000007;
              if ((int)uVar9 < 0) {
                uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
              }
              do {
                pfVar7 = (float *)(unaff_RDI + lVar8);
                fVar19 = fVar19 + *pfVar7;
                fVar20 = fVar20 + pfVar7[1];
                fVar21 = fVar21 + pfVar7[2];
                fVar22 = fVar22 + pfVar7[3];
                pfVar7 = (float *)(unaff_RDI + lVar8 + 4);
                lVar8 = lVar8 + 8;
                fVar15 = fVar15 + *pfVar7;
                fVar16 = fVar16 + pfVar7[1];
                fVar17 = fVar17 + pfVar7[2];
                fVar18 = fVar18 + pfVar7[3];
              } while (lVar8 < (int)(unaff_EBP - uVar9));
              fVar15 = fVar21 + fVar17 + fVar19 + fVar15 + fVar22 + fVar18 + fVar20 + fVar16;
            }
            if (lVar8 < CONCAT44(unaff_0000002c,unaff_EBP)) {
              if (3 < CONCAT44(unaff_0000002c,unaff_EBP) - lVar8) {
                pfVar7 = (float *)(unaff_RDI + lVar8 + 2);
                lVar10 = ((CONCAT44(unaff_0000002c,unaff_EBP) - lVar8) - 4U >> 2) + 1;
                lVar8 = lVar8 + lVar10 * 4;
                do {
                  fVar15 = fVar15 + pfVar7[-2] + pfVar7[-1] + *pfVar7 + pfVar7[1];
                  pfVar7 = pfVar7 + 4;
                  lVar10 = lVar10 + -1;
                } while (lVar10 != 0);
              }
              if (lVar8 < CONCAT44(unaff_0000002c,unaff_EBP)) {
                do {
                  fVar15 = fVar15 + (float)unaff_RDI[lVar8];
                  lVar8 = lVar8 + 1;
                } while (lVar8 < CONCAT44(unaff_0000002c,unaff_EBP));
              }
            }
            unaff_RDI = unaff_RDI + CONCAT44(unaff_0000002c,unaff_EBP);
            *(float *)(_DAT_180c30f40 + lVar11 * 4) = (1.0 / (float)(int)unaff_EBP) * fVar15;
            lVar11 = lVar11 + 1;
          } while (lVar11 < lVar14);
        }
      }
      else if (unaff_R13D == 2) {
                    // WARNING: Subroutine does not return
        memset(&stack0x00000050,0,0x100);
      }
      lVar11 = *(longlong *)(in_stack_00000040 + 0x220);
      if (lVar11 != 0) {
        (**(code **)(lVar11 + 8))(lVar11,0x47,0,0,0);
        lVar11 = *(longlong *)(in_stack_00000040 + 0x220);
        if (*(code **)(lVar11 + 0x78) != (code *)0x0) {
          (**(code **)(lVar11 + 0x78))(lVar11,&DAT_180c30f40);
          lVar11 = *(longlong *)(in_stack_00000040 + 0x220);
        }
        (**(code **)(lVar11 + 8))(lVar11,0x48,0,0,0);
      }
      if (in_stack_00000030 == '\0') {
        lVar11 = 0;
        if (0 < lVar14) {
          do {
            lVar8 = 0;
            if (3 < CONCAT44(unaff_000000ac,unaff_R13D)) {
              do {
                *unaff_RBX = *(undefined4 *)(*(longlong *)(&DAT_180c31040 + lVar8 * 8) + lVar11 * 4)
                ;
                unaff_RBX[1] = *(undefined4 *)(*(longlong *)(lVar8 * 8 + 0x180c31048) + lVar11 * 4);
                unaff_RBX[2] = *(undefined4 *)(*(longlong *)(lVar8 * 8 + 0x180c31050) + lVar11 * 4);
                lVar10 = lVar8 * 8;
                lVar8 = lVar8 + 4;
                unaff_RBX[3] = *(undefined4 *)(*(longlong *)(lVar10 + 0x180c31058) + lVar11 * 4);
                unaff_RBX = unaff_RBX + 4;
              } while (lVar8 < CONCAT44(unaff_000000ac,unaff_R13D) + -3);
            }
            if (lVar8 < CONCAT44(unaff_000000ac,unaff_R13D)) {
              do {
                lVar10 = lVar8 * 8;
                lVar8 = lVar8 + 1;
                *unaff_RBX = *(undefined4 *)(*(longlong *)(&DAT_180c31040 + lVar10) + lVar11 * 4);
                unaff_RBX = unaff_RBX + 1;
              } while (lVar8 < CONCAT44(unaff_000000ac,unaff_R13D));
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 < lVar14);
        }
      }
      else {
        lVar11 = 0;
        if (0 < lVar14) {
          do {
            iVar13 = 0;
            if (3 < unaff_R13D) {
              uVar9 = (unaff_R13D - 4U >> 2) + 1;
              uVar12 = (ulonglong)uVar9;
              iVar13 = uVar9 * 4;
              do {
                *unaff_RBX = *(undefined4 *)(_DAT_180c31040 + lVar11 * 4);
                unaff_RBX[1] = *(undefined4 *)(_DAT_180c31040 + lVar11 * 4);
                unaff_RBX[2] = *(undefined4 *)(_DAT_180c31040 + lVar11 * 4);
                unaff_RBX[3] = *(undefined4 *)(_DAT_180c31040 + lVar11 * 4);
                unaff_RBX = unaff_RBX + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            if (iVar13 < unaff_R13D) {
              uVar12 = (ulonglong)(uint)(unaff_R13D - iVar13);
              do {
                *unaff_RBX = *(undefined4 *)(_DAT_180c31040 + lVar11 * 4);
                unaff_RBX = unaff_RBX + 1;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 < lVar14);
        }
      }
      unaff_R14D = unaff_R14D - iVar6;
      uVar2 = in_stack_00000160;
      uVar3 = in_stack_00000168;
      uVar4 = in_stack_00000170;
      uVar5 = in_stack_00000178;
    } while (unaff_R14D != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000150 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807e7257(void)
void FUN_1807e7257(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  float *pfVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 *unaff_RBX;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  undefined4 *unaff_RDI;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  int unaff_R13D;
  undefined4 unaff_000000ac;
  int unaff_R14D;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  char in_stack_00000030;
  int iStack0000000000000038;
  longlong in_stack_00000040;
  ulonglong in_stack_00000150;
  
  do {
    iStack0000000000000038 = unaff_R14D;
    if (0x100 < unaff_R14D) {
      iStack0000000000000038 = 0x100;
    }
    lVar10 = (longlong)iStack0000000000000038;
    if (in_stack_00000030 == '\0') {
      lVar7 = 0;
      if (0 < iStack0000000000000038) {
        do {
          lVar4 = 0;
          if (3 < CONCAT44(unaff_0000002c,unaff_EBP)) {
            do {
              *(undefined4 *)(*(longlong *)(&DAT_180c30f40 + lVar4 * 8) + lVar7 * 4) = *unaff_RDI;
              *(undefined4 *)(*(longlong *)(&DAT_180c30f48 + lVar4 * 8) + lVar7 * 4) = unaff_RDI[1];
              *(undefined4 *)(*(longlong *)(lVar4 * 8 + 0x180c30f50) + lVar7 * 4) = unaff_RDI[2];
              lVar6 = lVar4 * 8;
              lVar4 = lVar4 + 4;
              puVar1 = unaff_RDI + 3;
              unaff_RDI = unaff_RDI + 4;
              *(undefined4 *)(*(longlong *)(lVar6 + 0x180c30f58) + lVar7 * 4) = *puVar1;
            } while (lVar4 < CONCAT44(unaff_0000002c,unaff_EBP) + -3);
          }
          if (lVar4 < CONCAT44(unaff_0000002c,unaff_EBP)) {
            do {
              lVar6 = lVar4 * 8;
              lVar4 = lVar4 + 1;
              uVar2 = *unaff_RDI;
              unaff_RDI = unaff_RDI + 1;
              *(undefined4 *)(*(longlong *)(&DAT_180c30f40 + lVar6) + lVar7 * 4) = uVar2;
            } while (lVar4 < CONCAT44(unaff_0000002c,unaff_EBP));
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar10);
      }
    }
    else if (unaff_R13D == 1) {
      lVar7 = 0;
      if (0 < iStack0000000000000038) {
        do {
          lVar4 = 0;
          fVar11 = 0.0;
          if ((0 < (int)unaff_EBP) && (7 < unaff_EBP)) {
            fVar15 = 0.0;
            fVar16 = 0.0;
            fVar17 = 0.0;
            fVar18 = 0.0;
            fVar11 = 0.0;
            fVar12 = 0.0;
            fVar13 = 0.0;
            fVar14 = 0.0;
            uVar5 = unaff_EBP & 0x80000007;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
            }
            do {
              pfVar3 = (float *)(unaff_RDI + lVar4);
              fVar15 = fVar15 + *pfVar3;
              fVar16 = fVar16 + pfVar3[1];
              fVar17 = fVar17 + pfVar3[2];
              fVar18 = fVar18 + pfVar3[3];
              pfVar3 = (float *)(unaff_RDI + lVar4 + 4);
              lVar4 = lVar4 + 8;
              fVar11 = fVar11 + *pfVar3;
              fVar12 = fVar12 + pfVar3[1];
              fVar13 = fVar13 + pfVar3[2];
              fVar14 = fVar14 + pfVar3[3];
            } while (lVar4 < (int)(unaff_EBP - uVar5));
            fVar11 = fVar17 + fVar13 + fVar15 + fVar11 + fVar18 + fVar14 + fVar16 + fVar12;
          }
          if (lVar4 < CONCAT44(unaff_0000002c,unaff_EBP)) {
            if (3 < CONCAT44(unaff_0000002c,unaff_EBP) - lVar4) {
              pfVar3 = (float *)(unaff_RDI + lVar4 + 2);
              lVar6 = ((CONCAT44(unaff_0000002c,unaff_EBP) - lVar4) - 4U >> 2) + 1;
              lVar4 = lVar4 + lVar6 * 4;
              do {
                fVar11 = fVar11 + pfVar3[-2] + pfVar3[-1] + *pfVar3 + pfVar3[1];
                pfVar3 = pfVar3 + 4;
                lVar6 = lVar6 + -1;
              } while (lVar6 != 0);
            }
            if (lVar4 < CONCAT44(unaff_0000002c,unaff_EBP)) {
              do {
                fVar11 = fVar11 + (float)unaff_RDI[lVar4];
                lVar4 = lVar4 + 1;
              } while (lVar4 < CONCAT44(unaff_0000002c,unaff_EBP));
            }
          }
          unaff_RDI = unaff_RDI + CONCAT44(unaff_0000002c,unaff_EBP);
          *(float *)(_DAT_180c30f40 + lVar7 * 4) = (1.0 / (float)(int)unaff_EBP) * fVar11;
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar10);
      }
    }
    else if (unaff_R13D == 2) {
                    // WARNING: Subroutine does not return
      memset(&stack0x00000050,0,0x100);
    }
    lVar7 = *(longlong *)(in_stack_00000040 + 0x220);
    if (lVar7 != 0) {
      (**(code **)(lVar7 + 8))(lVar7,0x47,0,0,0);
      lVar7 = *(longlong *)(in_stack_00000040 + 0x220);
      if (*(code **)(lVar7 + 0x78) != (code *)0x0) {
        (**(code **)(lVar7 + 0x78))(lVar7,&DAT_180c30f40);
        lVar7 = *(longlong *)(in_stack_00000040 + 0x220);
      }
      (**(code **)(lVar7 + 8))(lVar7,0x48,0,0,0);
    }
    if (in_stack_00000030 == '\0') {
      lVar7 = 0;
      if (0 < lVar10) {
        do {
          lVar4 = 0;
          if (3 < CONCAT44(unaff_000000ac,unaff_R13D)) {
            do {
              *unaff_RBX = *(undefined4 *)(*(longlong *)(&DAT_180c31040 + lVar4 * 8) + lVar7 * 4);
              unaff_RBX[1] = *(undefined4 *)(*(longlong *)(lVar4 * 8 + 0x180c31048) + lVar7 * 4);
              unaff_RBX[2] = *(undefined4 *)(*(longlong *)(lVar4 * 8 + 0x180c31050) + lVar7 * 4);
              lVar6 = lVar4 * 8;
              lVar4 = lVar4 + 4;
              unaff_RBX[3] = *(undefined4 *)(*(longlong *)(lVar6 + 0x180c31058) + lVar7 * 4);
              unaff_RBX = unaff_RBX + 4;
            } while (lVar4 < CONCAT44(unaff_000000ac,unaff_R13D) + -3);
          }
          if (lVar4 < CONCAT44(unaff_000000ac,unaff_R13D)) {
            do {
              lVar6 = lVar4 * 8;
              lVar4 = lVar4 + 1;
              *unaff_RBX = *(undefined4 *)(*(longlong *)(&DAT_180c31040 + lVar6) + lVar7 * 4);
              unaff_RBX = unaff_RBX + 1;
            } while (lVar4 < CONCAT44(unaff_000000ac,unaff_R13D));
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar10);
      }
    }
    else {
      lVar7 = 0;
      if (0 < lVar10) {
        do {
          iVar9 = 0;
          if (3 < unaff_R13D) {
            uVar5 = (unaff_R13D - 4U >> 2) + 1;
            uVar8 = (ulonglong)uVar5;
            iVar9 = uVar5 * 4;
            do {
              *unaff_RBX = *(undefined4 *)(_DAT_180c31040 + lVar7 * 4);
              unaff_RBX[1] = *(undefined4 *)(_DAT_180c31040 + lVar7 * 4);
              unaff_RBX[2] = *(undefined4 *)(_DAT_180c31040 + lVar7 * 4);
              unaff_RBX[3] = *(undefined4 *)(_DAT_180c31040 + lVar7 * 4);
              unaff_RBX = unaff_RBX + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          if (iVar9 < unaff_R13D) {
            uVar8 = (ulonglong)(uint)(unaff_R13D - iVar9);
            do {
              *unaff_RBX = *(undefined4 *)(_DAT_180c31040 + lVar7 * 4);
              unaff_RBX = unaff_RBX + 1;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar10);
      }
    }
    unaff_R14D = unaff_R14D - iStack0000000000000038;
  } while (unaff_R14D != 0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000150 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807e7882(void)
void FUN_1807e7882(void)

{
  ulonglong in_stack_00000150;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000150 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807e7892(void)
void FUN_1807e7892(void)

{
  ulonglong in_stack_00000150;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000150 ^ (ulonglong)&stack0x00000000);
}






