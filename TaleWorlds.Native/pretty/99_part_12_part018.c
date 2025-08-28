#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part018.c - 7 个函数

// 函数: void FUN_1807d6db0(int64_t param_1,int param_2)
void FUN_1807d6db0(int64_t param_1,int param_2)

{
  int32_t in_EAX;
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  int iVar6;
  uint64_t unaff_RBX;
  int iVar7;
  uint64_t unaff_RBP;
  int iVar8;
  uint64_t unaff_RDI;
  int32_t *puVar9;
  int64_t in_R11;
  int64_t unaff_R12;
  int *unaff_R14;
  int unaff_R15D;
  float fVar10;
  float fVar11;
  int8_t auVar12 [16];
  float fVar13;
  int32_t unaff_XMM6_Da;
  float fVar14;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  uint64_t in_stack_000000e0;
  int32_t in_stack_00000130;
  int32_t in_stack_00000138;
  int32_t in_stack_00000140;
  int32_t in_stack_00000148;
  int32_t in_stack_00000150;
  int32_t in_stack_00000158;
  int32_t in_stack_00000160;
  int32_t in_stack_00000168;
  int32_t in_stack_00000180;
  int32_t in_stack_00000188;
  float in_stack_00000200;
  float in_stack_00000208;
  byte in_stack_00000228;
  
  *(uint64_t *)(in_R11 + -0x20) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x38) = unaff_RDI;
  *(int32_t *)(in_R11 + -0xb8) = unaff_XMM12_Da;
  *(int32_t *)(in_R11 + -0xb4) = unaff_XMM12_Db;
  *(int32_t *)(in_R11 + -0xb0) = unaff_XMM12_Dc;
  *(int32_t *)(in_R11 + -0xac) = unaff_XMM12_Dd;
  if ((param_2 == 0) && (unaff_R14[0x2a] == 0)) {
    iVar7 = 0;
    if (0 < unaff_R14[0x27]) {
      do {
        func_0x0001807d64c0(param_1);
        iVar7 = iVar7 + 1;
      } while (iVar7 < unaff_R14[0x27]);
    }
    if ((*(int *)(param_1 + 0x98) == -1) && (unaff_R14[0x26] != -1)) {
      func_0x0001807d64c0(param_1);
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 4);
    in_stack_00000180 = unaff_XMM6_Da;
    in_stack_00000188 = unaff_XMM6_Dc;
    if (iVar7 == 0) {
      if (*(int *)(param_1 + 0xa8) == 0) {
        if ((*(int *)(param_1 + 0x9c) != 0) && (iVar7 = 0, 0 < *(int *)(param_1 + 0x9c))) {
          lVar3 = 0;
          do {
            if ((*(int *)(param_1 + 0x98) != -1) || (fVar11 = unaff_XMM15_Da, unaff_R14[0x26] == -1)
               ) {
              fVar11 = 0.0;
            }
            lVar5 = unaff_R12 + (int64_t)*(int *)(lVar3 + *(int64_t *)(param_1 + 0xa0)) * 4;
            FUN_1807d7590();
            if (unaff_R14[0x26] != -1) {
              lVar2 = (int64_t)(unaff_R14[0x26] * unaff_R15D);
              *(float *)(lVar5 + lVar2 * 4) =
                   fVar11 * unaff_XMM13_Da + *(float *)(lVar5 + lVar2 * 4);
            }
            iVar7 = iVar7 + 1;
            lVar3 = lVar3 + 4;
          } while (iVar7 < *(int *)(param_1 + 0x9c));
        }
      }
      else {
        iVar7 = 0;
        if (0 < *(int *)(param_1 + 0xa8)) {
          do {
            FUN_1807d68f0();
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(param_1 + 0xa8));
        }
      }
    }
    else {
      fVar13 = in_stack_00000200 * 0.0027777778 * (float)iVar7;
      iVar4 = (int)fVar13;
      fVar11 = fVar13;
      if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar13)) {
        auVar12._4_4_ = fVar13;
        auVar12._0_4_ = fVar13;
        auVar12._8_8_ = 0;
        uVar1 = movmskps(in_EAX,auVar12);
        fVar11 = (float)(int)(iVar4 - (uVar1 & 1));
      }
      iVar4 = (int)fVar11;
      if ((param_2 == 0) && (unaff_R14[0x2a] != 0)) {
        fVar11 = SQRT((float)unaff_R14[0x2a]);
      }
      else {
        fVar11 = 1.0;
      }
      if (0 < iVar7) {
        lVar3 = 0;
        iVar8 = iVar4;
        in_stack_00000130 = unaff_XMM11_Da;
        in_stack_00000138 = unaff_XMM11_Dc;
        in_stack_00000140 = unaff_XMM10_Da;
        in_stack_00000148 = unaff_XMM10_Dc;
        in_stack_00000150 = unaff_XMM9_Da;
        in_stack_00000158 = unaff_XMM9_Dc;
        in_stack_00000160 = unaff_XMM8_Da;
        in_stack_00000168 = unaff_XMM8_Dc;
        do {
          if (iVar7 == 1) {
            for (fVar14 = (*(float *)(*(int64_t *)(param_1 + 8) + 4) - unaff_XMM14_Da) +
                          in_stack_00000200; fVar14 < -180.0; fVar14 = fVar14 + 360.0) {
            }
            for (; 180.0 <= fVar14; fVar14 = fVar14 + -360.0) {
            }
          }
          else {
            iVar6 = iVar8;
            if ((in_stack_00000228 & 1) == 0) {
              for (; iVar6 < 0; iVar6 = iVar6 + iVar7) {
              }
              for (; iVar7 <= iVar6; iVar6 = iVar6 - iVar7) {
              }
              fVar14 = *(float *)(*(int64_t *)(param_1 + 8) + 4 + (int64_t)iVar6 * 0x14);
              fVar10 = *(float *)(*(int64_t *)(param_1 + 0x28) + 0x14 + (int64_t)iVar6 * 0x20);
              if (180.0 <= fVar10) {
                for (iVar6 = iVar6 + 1; iVar6 < 0; iVar6 = iVar6 + iVar7) {
                }
                for (; iVar7 <= iVar6; iVar6 = iVar6 - iVar7) {
                }
                for (fVar10 = *(float *)(*(int64_t *)(param_1 + 8) + 4 + (int64_t)iVar6 * 0x14) -
                              fVar14; fVar10 < 0.0; fVar10 = fVar10 + 360.0) {
                }
                for (; 360.0 <= fVar10; fVar10 = fVar10 + -360.0) {
                }
              }
              for (fVar14 = (fVar14 - unaff_XMM14_Da) + fVar10 * (fVar13 - (float)iVar4);
                  fVar14 < -180.0; fVar14 = fVar14 + 360.0) {
              }
              for (; 180.0 <= fVar14; fVar14 = fVar14 + -360.0) {
              }
            }
            else {
              for (fVar14 = (*(float *)(*(int64_t *)(*(int64_t *)(param_1 + 0x28) + lVar3) + 4) -
                            unaff_XMM14_Da) + in_stack_00000200; fVar14 < -180.0;
                  fVar14 = fVar14 + 360.0) {
              }
              for (; 180.0 <= fVar14; fVar14 = fVar14 + -360.0) {
              }
            }
          }
          if (-150.0 <= fVar14) {
            if (150.0 < fVar14) {
              lVar5 = (int64_t)*unaff_R14;
              if (0 < lVar5) {
                puVar9 = (int32_t *)&stack0x00000060;
                for (; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *puVar9 = 0;
                  puVar9 = puVar9 + 1;
                }
              }
              FUN_1807d7590();
              goto LAB_1807d71b7;
            }
            FUN_1807d7590();
          }
          else {
            lVar5 = (int64_t)*unaff_R14;
            if (0 < lVar5) {
              puVar9 = (int32_t *)&stack0x00000060;
              for (; lVar5 != 0; lVar5 = lVar5 + -1) {
                *puVar9 = 0;
                puVar9 = puVar9 + 1;
              }
            }
            FUN_1807d7590();
LAB_1807d71b7:
            FUN_1807d7590();
            FUN_1807d5580(*unaff_R14,fVar11 * unaff_XMM13_Da,1,&stack0x00000060);
          }
          iVar7 = *(int *)(param_1 + 4);
          iVar8 = iVar8 + 1;
          lVar3 = lVar3 + 0x20;
          unaff_XMM15_Da = in_stack_00000208;
        } while (iVar8 - iVar4 < iVar7);
      }
      if ((*(int *)(param_1 + 0x98) == -1) && (unaff_R14[0x26] != -1)) {
        func_0x0001807d64c0(param_1);
      }
    }
  }
  if (*(int *)(param_1 + 0x98) != -1) {
    if (unaff_R14[0x26] == -1) {
      FUN_1807d7590();
    }
    else {
      lVar3 = (int64_t)(unaff_R14[0x26] * unaff_R15D + *(int *)(param_1 + 0x98));
      *(float *)(unaff_R12 + lVar3 * 4) =
           unaff_XMM15_Da * unaff_XMM13_Da + *(float *)(unaff_R12 + lVar3 * 4);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000e0 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1807d6e65(int64_t param_1,int param_2)
void FUN_1807d6e65(int64_t param_1,int param_2)

{
  int32_t in_EAX;
  uint uVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int iVar5;
  int64_t unaff_RBX;
  int iVar6;
  int unaff_EDI;
  int32_t *puVar7;
  int64_t unaff_R12;
  int64_t lVar8;
  int *unaff_R14;
  int unaff_R15D;
  float fVar9;
  float fVar10;
  int8_t auVar11 [16];
  float fVar12;
  float fVar13;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Dc;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  uint64_t in_stack_000000e0;
  int32_t in_stack_00000130;
  int32_t in_stack_00000138;
  int32_t in_stack_00000140;
  int32_t in_stack_00000148;
  int32_t in_stack_00000150;
  int32_t in_stack_00000158;
  int32_t in_stack_00000160;
  int32_t in_stack_00000168;
  float in_stack_00000200;
  float in_stack_00000208;
  byte in_stack_00000228;
  
  if (unaff_EDI == 0) {
    if (*(int *)(param_1 + 0xa8) == 0) {
      if ((*(int *)(param_1 + 0x9c) != 0) && (iVar3 = 0, 0 < *(int *)(param_1 + 0x9c))) {
        lVar8 = 0;
        do {
          if ((*(int *)(unaff_RBX + 0x98) != -1) || (fVar10 = unaff_XMM15_Da, unaff_R14[0x26] == -1)
             ) {
            fVar10 = 0.0;
          }
          lVar4 = unaff_R12 + (int64_t)*(int *)(lVar8 + *(int64_t *)(unaff_RBX + 0xa0)) * 4;
          FUN_1807d7590();
          if (unaff_R14[0x26] != -1) {
            lVar2 = (int64_t)(unaff_R14[0x26] * unaff_R15D);
            *(float *)(lVar4 + lVar2 * 4) = fVar10 * unaff_XMM13_Da + *(float *)(lVar4 + lVar2 * 4);
          }
          iVar3 = iVar3 + 1;
          lVar8 = lVar8 + 4;
        } while (iVar3 < *(int *)(unaff_RBX + 0x9c));
      }
    }
    else {
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0xa8)) {
        do {
          FUN_1807d68f0();
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(unaff_RBX + 0xa8));
      }
    }
  }
  else {
    fVar12 = in_stack_00000200 * 0.0027777778 * (float)unaff_EDI;
    iVar3 = (int)fVar12;
    fVar10 = fVar12;
    if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar12)) {
      auVar11._4_4_ = fVar12;
      auVar11._0_4_ = fVar12;
      auVar11._8_8_ = 0;
      uVar1 = movmskps(in_EAX,auVar11);
      fVar10 = (float)(int)(iVar3 - (uVar1 & 1));
    }
    iVar3 = (int)fVar10;
    if ((param_2 == 0) && (unaff_R14[0x2a] != 0)) {
      fVar10 = SQRT((float)unaff_R14[0x2a]);
    }
    else {
      fVar10 = 1.0;
    }
    if (0 < unaff_EDI) {
      lVar8 = 0;
      iVar6 = iVar3;
      in_stack_00000130 = unaff_XMM11_Da;
      in_stack_00000138 = unaff_XMM11_Dc;
      in_stack_00000140 = unaff_XMM10_Da;
      in_stack_00000148 = unaff_XMM10_Dc;
      in_stack_00000150 = unaff_XMM9_Da;
      in_stack_00000158 = unaff_XMM9_Dc;
      in_stack_00000160 = unaff_XMM8_Da;
      in_stack_00000168 = unaff_XMM8_Dc;
      do {
        if (unaff_EDI == 1) {
          for (fVar13 = (*(float *)(*(int64_t *)(unaff_RBX + 8) + 4) - unaff_XMM14_Da) +
                        in_stack_00000200; fVar13 < -180.0; fVar13 = fVar13 + 360.0) {
          }
          for (; 180.0 <= fVar13; fVar13 = fVar13 + -360.0) {
          }
        }
        else {
          iVar5 = iVar6;
          if ((in_stack_00000228 & 1) == 0) {
            for (; iVar5 < 0; iVar5 = iVar5 + unaff_EDI) {
            }
            for (; unaff_EDI <= iVar5; iVar5 = iVar5 - unaff_EDI) {
            }
            fVar13 = *(float *)(*(int64_t *)(unaff_RBX + 8) + 4 + (int64_t)iVar5 * 0x14);
            fVar9 = *(float *)(*(int64_t *)(unaff_RBX + 0x28) + 0x14 + (int64_t)iVar5 * 0x20);
            if (180.0 <= fVar9) {
              for (iVar5 = iVar5 + 1; iVar5 < 0; iVar5 = iVar5 + unaff_EDI) {
              }
              for (; unaff_EDI <= iVar5; iVar5 = iVar5 - unaff_EDI) {
              }
              for (fVar9 = *(float *)(*(int64_t *)(unaff_RBX + 8) + 4 + (int64_t)iVar5 * 0x14) -
                           fVar13; fVar9 < 0.0; fVar9 = fVar9 + 360.0) {
              }
              for (; 360.0 <= fVar9; fVar9 = fVar9 + -360.0) {
              }
            }
            for (fVar13 = (fVar13 - unaff_XMM14_Da) + fVar9 * (fVar12 - (float)iVar3);
                fVar13 < -180.0; fVar13 = fVar13 + 360.0) {
            }
            for (; 180.0 <= fVar13; fVar13 = fVar13 + -360.0) {
            }
          }
          else {
            for (fVar13 = (*(float *)(*(int64_t *)(*(int64_t *)(unaff_RBX + 0x28) + lVar8) + 4) -
                          unaff_XMM14_Da) + in_stack_00000200; fVar13 < -180.0;
                fVar13 = fVar13 + 360.0) {
            }
            for (; 180.0 <= fVar13; fVar13 = fVar13 + -360.0) {
            }
          }
        }
        if (-150.0 <= fVar13) {
          if (150.0 < fVar13) {
            lVar4 = (int64_t)*unaff_R14;
            if (0 < lVar4) {
              puVar7 = (int32_t *)&stack0x00000060;
              for (; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar7 = 0;
                puVar7 = puVar7 + 1;
              }
            }
            FUN_1807d7590();
            goto LAB_1807d71b7;
          }
          FUN_1807d7590();
        }
        else {
          lVar4 = (int64_t)*unaff_R14;
          if (0 < lVar4) {
            puVar7 = (int32_t *)&stack0x00000060;
            for (; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            }
          }
          FUN_1807d7590();
LAB_1807d71b7:
          FUN_1807d7590();
          FUN_1807d5580(*unaff_R14,fVar10 * unaff_XMM13_Da,1,&stack0x00000060);
        }
        unaff_EDI = *(int *)(unaff_RBX + 4);
        iVar6 = iVar6 + 1;
        lVar8 = lVar8 + 0x20;
        unaff_XMM15_Da = in_stack_00000208;
      } while (iVar6 - iVar3 < unaff_EDI);
    }
    if ((*(int *)(unaff_RBX + 0x98) == -1) && (unaff_R14[0x26] != -1)) {
      func_0x0001807d64c0();
    }
  }
  if (*(int *)(unaff_RBX + 0x98) != -1) {
    if (unaff_R14[0x26] == -1) {
      FUN_1807d7590();
    }
    else {
      lVar8 = (int64_t)(unaff_R14[0x26] * unaff_R15D + *(int *)(unaff_RBX + 0x98));
      *(float *)(unaff_R12 + lVar8 * 4) =
           unaff_XMM15_Da * unaff_XMM13_Da + *(float *)(unaff_R12 + lVar8 * 4);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000e0 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1807d6f2e(float param_1,uint64_t param_2,float param_3,float param_4)
void FUN_1807d6f2e(float param_1,uint64_t param_2,float param_3,float param_4)

{
  int64_t lVar1;
  int iVar2;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  int unaff_EDI;
  int32_t *puVar3;
  int in_R8D;
  int64_t unaff_R12;
  uint64_t uVar4;
  int *unaff_R14;
  int unaff_R15D;
  float fVar5;
  int32_t uVar6;
  float in_XMM4_Da;
  float fVar7;
  float unaff_XMM7_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  int8_t *puStack0000000000000030;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  int32_t in_stack_00000050;
  uint64_t in_stack_000000e0;
  float in_stack_00000200;
  float in_stack_00000208;
  byte in_stack_00000228;
  
  uVar4 = unaff_RBP & 0xffffffff;
  param_1 = param_1 * param_3;
  do {
    if (unaff_EDI == 1) {
      for (fVar7 = (*(float *)(*(int64_t *)(unaff_RBX + 8) + 4) - unaff_XMM14_Da) + in_XMM4_Da;
          fVar7 < -180.0; fVar7 = fVar7 + unaff_XMM7_Da) {
      }
      for (; 180.0 <= fVar7; fVar7 = fVar7 + -360.0) {
      }
    }
    else {
      iVar2 = in_R8D;
      if ((in_stack_00000228 & 1) == 0) {
        for (; iVar2 < 0; iVar2 = iVar2 + unaff_EDI) {
        }
        for (; unaff_EDI <= iVar2; iVar2 = iVar2 - unaff_EDI) {
        }
        fVar7 = *(float *)(*(int64_t *)(unaff_RBX + 8) + 4 + (int64_t)iVar2 * 0x14);
        fVar5 = *(float *)(*(int64_t *)(unaff_RBX + 0x28) + 0x14 + (int64_t)iVar2 * 0x20);
        if (180.0 <= fVar5) {
          for (iVar2 = iVar2 + 1; iVar2 < 0; iVar2 = iVar2 + unaff_EDI) {
          }
          for (; unaff_EDI <= iVar2; iVar2 = iVar2 - unaff_EDI) {
          }
          for (fVar5 = *(float *)(*(int64_t *)(unaff_RBX + 8) + 4 + (int64_t)iVar2 * 0x14) - fVar7
              ; fVar5 < unaff_XMM12_Da; fVar5 = fVar5 + unaff_XMM7_Da) {
          }
          for (; unaff_XMM7_Da <= fVar5; fVar5 = fVar5 + -360.0) {
          }
        }
        for (fVar7 = (fVar7 - unaff_XMM14_Da) + fVar5 * param_4; fVar7 < -180.0;
            fVar7 = fVar7 + unaff_XMM7_Da) {
        }
        for (; 180.0 <= fVar7; fVar7 = fVar7 + -360.0) {
        }
      }
      else {
        for (fVar7 = (*(float *)(*(int64_t *)(*(int64_t *)(unaff_RBX + 0x28) + uVar4) + 4) -
                     unaff_XMM14_Da) + in_XMM4_Da; fVar7 < -180.0; fVar7 = fVar7 + unaff_XMM7_Da) {
        }
        for (; 180.0 <= fVar7; fVar7 = fVar7 + -360.0) {
        }
      }
    }
    if (-150.0 <= fVar7) {
      if (150.0 < fVar7) {
        lVar1 = (int64_t)*unaff_R14;
        if (0 < lVar1) {
          puVar3 = (int32_t *)&stack0x00000060;
          for (; lVar1 != 0; lVar1 = lVar1 + -1) {
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
          }
        }
        puStack0000000000000030 = &stack0x00000060;
        uVar6 = FUN_1807d7590(param_1,param_1 * fVar7 + unaff_XMM14_Da);
        fVar7 = fVar7 - unaff_XMM7_Da;
        goto LAB_1807d71b7;
      }
      puStack0000000000000030 =
           (int8_t *)
           (unaff_R12 + (int64_t)*(int *)(*(int64_t *)(unaff_RBX + 8) + unaff_RBP) * 4);
      FUN_1807d7590(param_1,param_1 * fVar7 + unaff_XMM14_Da);
    }
    else {
      lVar1 = (int64_t)*unaff_R14;
      if (0 < lVar1) {
        puVar3 = (int32_t *)&stack0x00000060;
        for (; lVar1 != 0; lVar1 = lVar1 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
      }
      puStack0000000000000030 = &stack0x00000060;
      uVar6 = FUN_1807d7590(param_1,param_1 * fVar7 + unaff_XMM14_Da);
      fVar7 = fVar7 + unaff_XMM7_Da;
LAB_1807d71b7:
      puStack0000000000000030 = &stack0x00000060;
      FUN_1807d7590(uVar6,fVar7 * param_1 + unaff_XMM14_Da);
      FUN_1807d5580(*unaff_R14,in_stack_00000040._4_4_ * unaff_XMM13_Da,1,&stack0x00000060);
    }
    unaff_EDI = *(int *)(unaff_RBX + 4);
    in_R8D = in_R8D + 1;
    uVar4 = uVar4 + 0x20;
    unaff_RBP = unaff_RBP + 0x14;
    in_XMM4_Da = in_stack_00000200;
    if (unaff_EDI <= in_R8D - in_stack_00000048._4_4_) {
      if ((*(int *)(unaff_RBX + 0x98) == -1) && (unaff_R14[0x26] != -1)) {
        param_1 = (float)func_0x0001807d64c0();
      }
      iVar2 = *(int *)(unaff_RBX + 0x98);
      if (iVar2 != -1) {
        if (unaff_R14[0x26] == -1) {
          puStack0000000000000030 = (int8_t *)(unaff_R12 + (int64_t)iVar2 * 4);
          FUN_1807d7590(param_1,puStack0000000000000030,in_stack_00000050,
                        in_stack_00000208 * unaff_XMM13_Da,1);
        }
        else {
          lVar1 = (int64_t)(unaff_R14[0x26] * unaff_R15D + iVar2);
          *(float *)(unaff_R12 + lVar1 * 4) =
               in_stack_00000208 * unaff_XMM13_Da + *(float *)(unaff_R12 + lVar1 * 4);
        }
      }
                    // WARNING: Subroutine does not return
      FUN_1808fc050(in_stack_000000e0 ^ (uint64_t)&stack0x00000000);
    }
  } while( true );
}






// 函数: void FUN_1807d72d2(void)
void FUN_1807d72d2(void)

{
  int64_t lVar1;
  int64_t unaff_RBX;
  int64_t unaff_R12;
  int64_t unaff_R14;
  int unaff_R15D;
  float unaff_XMM13_Da;
  float unaff_XMM15_Da;
  uint64_t in_stack_000000e0;
  
  if ((*(int *)(unaff_RBX + 0x98) == -1) && (*(int *)(unaff_R14 + 0x98) != -1)) {
    func_0x0001807d64c0();
  }
  if (*(int *)(unaff_RBX + 0x98) != -1) {
    if (*(int *)(unaff_R14 + 0x98) == -1) {
      FUN_1807d7590();
    }
    else {
      lVar1 = (int64_t)(*(int *)(unaff_R14 + 0x98) * unaff_R15D + *(int *)(unaff_RBX + 0x98));
      *(float *)(unaff_R12 + lVar1 * 4) =
           unaff_XMM15_Da * unaff_XMM13_Da + *(float *)(unaff_R12 + lVar1 * 4);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000e0 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1807d744e(void)
void FUN_1807d744e(void)

{
  int64_t lVar1;
  int64_t unaff_RBX;
  int64_t unaff_R12;
  int64_t unaff_R14;
  int unaff_R15D;
  float unaff_XMM13_Da;
  float unaff_XMM15_Da;
  uint64_t in_stack_000000e0;
  
  if (*(int *)(unaff_RBX + 0x98) != -1) {
    if (*(int *)(unaff_R14 + 0x98) == -1) {
      FUN_1807d7590();
    }
    else {
      lVar1 = (int64_t)(*(int *)(unaff_R14 + 0x98) * unaff_R15D + *(int *)(unaff_RBX + 0x98));
      *(float *)(unaff_R12 + lVar1 * 4) =
           unaff_XMM15_Da * unaff_XMM13_Da + *(float *)(unaff_R12 + lVar1 * 4);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000e0 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1807d747b(int param_1)
void FUN_1807d747b(int param_1)

{
  int64_t lVar1;
  int64_t unaff_R12;
  int64_t unaff_R14;
  int unaff_R15D;
  float unaff_XMM13_Da;
  float unaff_XMM15_Da;
  uint64_t in_stack_000000e0;
  
  if (*(int *)(unaff_R14 + 0x98) == -1) {
    FUN_1807d7590();
  }
  else {
    lVar1 = (int64_t)(*(int *)(unaff_R14 + 0x98) * unaff_R15D + param_1);
    *(float *)(unaff_R12 + lVar1 * 4) =
         unaff_XMM15_Da * unaff_XMM13_Da + *(float *)(unaff_R12 + lVar1 * 4);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000e0 ^ (uint64_t)&stack0x00000000);
}



uint64_t
FUN_1807d7510(int64_t param_1,uint64_t param_2,uint64_t param_3,float param_4,float param_5,
             int param_6,int64_t param_7)

{
  int64_t lVar1;
  
  FUN_1807d7590();
  if (*(int *)(param_1 + 0x98) != -1) {
    lVar1 = (int64_t)(*(int *)(param_1 + 0x98) * param_6);
    *(float *)(param_7 + lVar1 * 4) = param_4 * param_5 + *(float *)(param_7 + lVar1 * 4);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807d7590(int *param_1,float param_2,float param_3,float param_4,char param_5,float param_6
void FUN_1807d7590(int *param_1,float param_2,float param_3,float param_4,char param_5,float param_6
                  ,int64_t param_7)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint uVar5;
  int iVar6;
  uint64_t uVar7;
  int *piVar8;
  int iVar9;
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  float fVar12;
  float fVar13;
  int8_t auStack_1d8 [32];
  float fStack_1b8;
  float afStack_1a8 [2];
  float afStack_1a0 [12];
  int *piStack_170;
  int64_t lStack_168;
  int8_t auStack_158 [128];
  uint64_t uStack_d8;
  uint64_t extraout_XMM0_Qb;
  
  uStack_d8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1d8;
  iVar1 = param_1[1];
  afStack_1a0[0] = param_6;
  lStack_168 = param_7;
  piStack_170 = param_1;
  if (iVar1 == 1) {
    *(float *)(param_7 + (int64_t)(**(int **)(param_1 + 2) * (int)param_6) * 4) =
         param_4 + *(float *)(param_7 + (int64_t)(**(int **)(param_1 + 2) * (int)param_6) * 4);
  }
  else {
    if (param_2 < -180.0) {
      do {
        param_2 = param_2 + 360.0;
      } while (param_2 < -180.0);
    }
    for (; 180.0 <= param_2; param_2 = param_2 + -360.0) {
    }
    if (iVar1 == 0) {
      iVar1 = param_1[0x2a];
      if (iVar1 == 0) {
        if ((param_1[0x27] != 0) && (uVar4 = 0, uVar7 = uVar4, 0 < param_1[0x27])) {
          do {
            uVar5 = (int)uVar7 + 1;
            piVar8 = (int *)(uVar4 + *(int64_t *)(param_1 + 0x28));
            uVar4 = uVar4 + 4;
            lVar2 = (int64_t)(*piVar8 * (int)param_6);
            *(float *)(param_7 + lVar2 * 4) = param_4 + *(float *)(param_7 + lVar2 * 4);
            uVar7 = (uint64_t)uVar5;
          } while ((int)uVar5 < param_1[0x27]);
        }
      }
      else {
        afStack_1a0[0] = 0.0;
        afStack_1a8[0] = 0.0;
        if (1e-05 <= ABS(param_3)) {
          fVar12 = (float)sinf();
          fVar12 = fVar12 / (param_3 * 0.008726646);
        }
        else {
          fVar12 = 1.0;
        }
        auVar10._0_8_ = sinf();
        auVar10._8_8_ = extraout_XMM0_Qb;
        auVar11._4_12_ = auVar10._4_12_;
        auVar11._0_4_ = (float)auVar10._0_8_ * fVar12;
        fVar12 = (float)asinf(auVar11._0_8_);
        fStack_1b8 = param_4;
        FUN_1807d80d0(*(uint64_t *)(param_1 + 10),afStack_1a0,afStack_1a8,fVar12 * 57.295776);
        uVar4 = 0;
        uVar7 = uVar4;
        if (0 < iVar1) {
          do {
            uVar5 = (int)uVar7 + 1;
            lVar2 = (int64_t)(*(int *)(*(int64_t *)(param_1 + 0x2c) + uVar4) * (int)param_6);
            *(float *)(param_7 + lVar2 * 4) = afStack_1a0[0] + *(float *)(param_7 + lVar2 * 4);
            piVar8 = (int *)(*(int64_t *)(param_1 + 0x2e) + uVar4);
            uVar4 = uVar4 + 4;
            lVar2 = (int64_t)(*piVar8 * (int)param_6);
            *(float *)(param_7 + lVar2 * 4) = afStack_1a8[0] + *(float *)(param_7 + lVar2 * 4);
            uVar7 = (uint64_t)uVar5;
          } while ((int)uVar5 < param_1[0x2a]);
        }
      }
    }
    else if (param_3 < 360.0) {
      if (0.0 < param_3) {
                    // WARNING: Subroutine does not return
        memset(auStack_158,0,(int64_t)*param_1 << 2);
      }
      iVar6 = 0;
      iVar9 = 0;
      if (0 < iVar1) {
        lVar2 = 0;
        plVar3 = *(int64_t **)(param_1 + 10);
        do {
          fVar12 = *(float *)(plVar3[1] + 4);
          fVar13 = *(float *)(*plVar3 + 4);
          if (fVar13 < fVar12) {
LAB_1807d774d:
            if (fVar13 <= param_2) {
LAB_1807d7752:
              if (param_2 <= fVar12) {
                plVar3 = *(int64_t **)(param_1 + 10) + (int64_t)iVar9 * 4;
                if (param_5 == '\0') {
                  fStack_1b8 = param_4;
                  FUN_1807d80d0(plVar3,param_7 + (int64_t)(*(int *)*plVar3 * (int)param_6) * 4,
                                param_7 + (int64_t)(*(int *)plVar3[1] * (int)param_6) * 4,param_2);
                }
                else {
                  fStack_1b8 = param_4;
                  FUN_1807d81b0();
                }
                goto FUN_1807d8093;
              }
            }
          }
          else {
            if (param_2 < 0.0) {
              fVar13 = fVar13 - 360.0;
              goto LAB_1807d774d;
            }
            if (fVar13 <= param_2) {
              fVar12 = fVar12 + 360.0;
              goto LAB_1807d7752;
            }
          }
          iVar9 = iVar9 + 1;
          lVar2 = lVar2 + 1;
          plVar3 = plVar3 + 4;
        } while (lVar2 < iVar1);
      }
      iVar1 = func_0x0001807d57d0(param_1);
      if (0 < iVar1) {
        piVar8 = param_1 + 0x16;
        do {
          fVar12 = *(float *)(*(int64_t *)(piVar8 + 2) + 4);
          fVar13 = (float)(*(int **)piVar8)[1];
          if (fVar13 < fVar12) {
LAB_1807d77fc:
            if (fVar13 <= param_2) {
LAB_1807d7801:
              if (param_2 <= fVar12) {
                lVar2 = (int64_t)((int)param_6 * **(int **)piVar8);
                *(float *)(param_7 + lVar2 * 4) = param_4 + *(float *)(param_7 + lVar2 * 4);
              }
            }
          }
          else {
            if (param_2 < 0.0) {
              fVar13 = fVar13 - 360.0;
              goto LAB_1807d77fc;
            }
            if (fVar13 <= param_2) {
              fVar12 = fVar12 + 360.0;
              goto LAB_1807d7801;
            }
          }
          iVar6 = iVar6 + 1;
          piVar8 = piVar8 + 6;
          iVar1 = func_0x0001807d57d0(param_1);
        } while (iVar6 < iVar1);
      }
    }
    else {
      uVar4 = 0;
      uVar7 = uVar4;
      if (0 < iVar1) {
        do {
          uVar5 = (int)uVar7 + 1;
          piVar8 = (int *)(uVar4 + *(int64_t *)(param_1 + 2));
          uVar4 = uVar4 + 0x14;
          lVar2 = (int64_t)(*piVar8 * (int)param_6);
          *(float *)(param_7 + lVar2 * 4) =
               param_4 / SQRT((float)iVar1) + *(float *)(param_7 + lVar2 * 4);
          uVar7 = (uint64_t)uVar5;
        } while ((int)uVar5 < param_1[1]);
      }
    }
  }
FUN_1807d8093:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (uint64_t)auStack_1d8);
}






