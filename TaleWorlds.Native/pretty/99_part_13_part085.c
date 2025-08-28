#include "TaleWorlds.Native.Split.h"

// 99_part_13_part085.c - 1 个函数

// 函数: void FUN_1808e4690(int64_t param_1)
void FUN_1808e4690(int64_t param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x30);
  iVar3 = 0;
  iVar4 = iVar1 + 1;
  uVar5 = (int)*(uint *)(param_1 + 0x34) >> 0x1f;
  iVar2 = (*(uint *)(param_1 + 0x34) ^ uVar5) - uVar5;
  if (iVar2 < iVar4) {
    iVar6 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar4;
    if (iVar4 <= iVar6) {
      iVar2 = iVar6;
    }
    if ((-1 < iVar2) && (iVar3 = iVar6, iVar6 < iVar4)) {
      iVar3 = iVar4;
    }
    iVar3 = FUN_180882c70(param_1 + 0x28,iVar3);
    if (iVar3 != 0) {
      return;
    }
  }
                    // WARNING: Subroutine does not return
  memset(*(int64_t *)(param_1 + 0x28) + (int64_t)iVar1 * 0x6c,0,0x6c);
}



uint64_t FUN_1808e4742(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int32_t uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  uint64_t uVar16;
  int64_t unaff_RSI;
  int64_t *plVar17;
  uint uVar18;
  int64_t *unaff_RDI;
  int64_t lVar19;
  int64_t unaff_R14;
  int32_t *unaff_R15;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  float unaff_XMM6_Da;
  int64_t in_stack_00000070;
  char in_stack_00000080;
  
  uVar8 = func_0x00018085fa80();
  iVar5 = memcmp(unaff_R14 + 0x28,uVar8,0x30);
  iVar6 = FUN_1808605e0();
  uVar18 = (uint)unaff_RDI;
  uVar14 = uVar18;
  if (iVar6 != 2) {
    uVar14 = 1;
  }
  iVar6 = FUN_1808605e0();
  if (iVar6 == 4) {
    uVar14 = uVar14 | 2;
  }
  uVar15 = uVar14 | 8;
  if (1 < *(int *)(unaff_R14 + 0x2e4) - 1U) {
    uVar15 = uVar14;
  }
  uVar14 = uVar15 | 4;
  if ((*(uint *)(unaff_R14 + 0x2d8) >> 1 & 1) == 0) {
    uVar14 = uVar15;
  }
  if (in_stack_00000080 == (char)unaff_RDI) {
    uVar14 = uVar14 | 0x10;
  }
  uVar15 = uVar14 | 0x20;
  if (iVar5 == 0) {
    uVar15 = uVar14;
  }
  uVar14 = uVar15 | 0x40;
  if ((*(uint *)(unaff_R14 + 0x2d8) >> 4 & 1) == 0) {
    uVar14 = uVar15;
  }
  uVar15 = uVar14 | 0x80;
  if (*(int64_t **)(unaff_R14 + 0x478) == unaff_RDI) {
    uVar15 = uVar14;
  }
  uVar14 = uVar15 | 0x100;
  if (*(int64_t **)(unaff_R14 + 0x350) == unaff_RDI) {
    uVar14 = uVar15;
  }
  lVar9 = (**(code **)**(uint64_t **)(unaff_R14 + 0x2b0))();
  uVar15 = uVar14 | 0x200;
  if (*(int *)(lVar9 + 200) == -1) {
    uVar15 = uVar14;
  }
  uVar14 = uVar15 | 0x400;
  if ((*(uint *)(unaff_R14 + 0x2d8) >> 10 & 1) == 0) {
    uVar14 = uVar15;
  }
  if (*(char *)(unaff_RSI + 0x90) != (char)unaff_RDI) {
    iVar5 = *(int *)(unaff_RSI + 0x60);
    uVar8 = FUN_1808e4d80(extraout_XMM0_Qa,unaff_R14 + 0x378);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    uVar8 = FUN_1808e4d80(extraout_XMM0_Qa_00,unaff_R14 + 0x3f8);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    iVar6 = *(int *)(unaff_RSI + 0x60);
    if (iVar6 != iVar5) {
      unaff_R15[0x18] = iVar5;
      unaff_R15[0x17] = iVar6 - iVar5;
      uVar14 = uVar14 | 0x800;
    }
  }
  uVar7 = func_0x000180855b70(unaff_R14 + 200);
  plVar1 = (int64_t *)(unaff_R14 + 0x240);
  uVar16 = (uint64_t)unaff_RDI & 0xffffffff;
  uVar15 = uVar18;
  for (plVar2 = (int64_t *)*plVar1; plVar2 != plVar1; plVar2 = (int64_t *)*plVar2) {
    uVar15 = (int)uVar16 + 1;
    uVar16 = (uint64_t)uVar15;
  }
  if (*(int64_t *)(unaff_R14 + 0x80) == 0) {
    uVar11 = *(int32_t *)(unaff_R14 + 0x2dc);
  }
  else {
    uVar11 = *(int32_t *)(*(int64_t *)(unaff_R14 + 0x80) + 8);
  }
  *unaff_R15 = uVar11;
  unaff_R15[1] = uVar14;
  uVar8 = *(uint64_t *)(unaff_R14 + 0x30);
  *(uint64_t *)(unaff_R15 + 2) = *(uint64_t *)(unaff_R14 + 0x28);
  *(uint64_t *)(unaff_R15 + 4) = uVar8;
  uVar11 = *(int32_t *)(unaff_R14 + 0x3c);
  uVar3 = *(int32_t *)(unaff_R14 + 0x40);
  uVar4 = *(int32_t *)(unaff_R14 + 0x44);
  unaff_R15[6] = *(int32_t *)(unaff_R14 + 0x38);
  unaff_R15[7] = uVar11;
  unaff_R15[8] = uVar3;
  unaff_R15[9] = uVar4;
  uVar8 = *(uint64_t *)(unaff_R14 + 0x50);
  *(uint64_t *)(unaff_R15 + 10) = *(uint64_t *)(unaff_R14 + 0x48);
  *(uint64_t *)(unaff_R15 + 0xc) = uVar8;
  unaff_R15[0xe] = uVar7 / 0x30;
  unaff_R15[0xf] = uVar18;
  unaff_R15[0x10] = uVar18;
  uVar8 = FUN_1808e5120(*(uint64_t *)(*(int64_t *)(unaff_R14 + 0x2b0) + 0x78));
  if ((int)uVar8 == 0) {
    if (*(int64_t *)(unaff_R14 + 0x350) != 0) {
      lVar9 = *(int64_t *)(*(int64_t *)(unaff_R14 + 0x350) + 0xf0);
      if (*(int64_t *)(lVar9 + 0x80) == 0) {
        uVar11 = *(int32_t *)(lVar9 + 0x2dc);
      }
      else {
        uVar11 = *(int32_t *)(*(int64_t *)(lVar9 + 0x80) + 8);
      }
      unaff_R15[0x12] = uVar11;
      lVar9 = (*(code *)**(uint64_t **)(lVar9 + 8))();
      uVar8 = *(uint64_t *)(lVar9 + 0x18);
      *(uint64_t *)(unaff_R15 + 0x13) = *(uint64_t *)(lVar9 + 0x10);
      *(uint64_t *)(unaff_R15 + 0x15) = uVar8;
    }
    lVar9 = unaff_RSI;
    if (0 < (int)uVar15) {
      plVar2 = (int64_t *)(unaff_RSI + 0x48);
      unaff_R15[0x11] = *(int32_t *)(unaff_RSI + 0x50);
      uVar8 = FUN_1808e5210(plVar2,*(int *)(unaff_RSI + 0x50) + uVar15);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      plVar10 = (int64_t *)(*plVar1 + -0x18);
      if (*plVar1 == 0) {
        plVar10 = unaff_RDI;
      }
      plVar17 = unaff_RDI;
      if (plVar10 != (int64_t *)0x0) {
        plVar17 = plVar10 + 3;
      }
      uVar16 = (uint64_t)unaff_RDI & 0xffffffff;
      lVar9 = in_stack_00000070;
      if (0 < (int)uVar15) {
        iVar5 = *(int *)(unaff_RSI + 0x50);
        do {
          plVar10 = plVar17 + 4;
          if (plVar17 == (int64_t *)0x0) {
            plVar10 = (int64_t *)0x38;
          }
          iVar5 = iVar5 + 1;
          uVar11 = *(int32_t *)(*plVar10 + 0x28);
          uVar14 = (int)*(uint *)(unaff_RSI + 0x54) >> 0x1f;
          iVar6 = (*(uint *)(unaff_RSI + 0x54) ^ uVar14) - uVar14;
          if (iVar6 < iVar5) {
            iVar12 = (int)((float)iVar6 * unaff_XMM6_Da);
            iVar6 = iVar5;
            if (iVar5 <= iVar12) {
              iVar6 = iVar12;
            }
            if (iVar6 < 0x10) {
              iVar12 = 0x10;
            }
            else if (iVar12 < iVar5) {
              iVar12 = iVar5;
            }
            uVar8 = FUN_180747e10(plVar2,iVar12);
            if ((int)uVar8 != 0) {
              return uVar8;
            }
          }
          *(int32_t *)(*plVar2 + (int64_t)*(int *)(unaff_RSI + 0x50) * 4) = uVar11;
          iVar5 = *(int *)(unaff_RSI + 0x50) + 1;
          *(int *)(unaff_RSI + 0x50) = iVar5;
          if (plVar17 == plVar1) {
            return 0x1c;
          }
          plVar10 = (int64_t *)(*plVar17 + -0x18);
          if (*plVar17 == 0) {
            plVar10 = unaff_RDI;
          }
          plVar17 = unaff_RDI;
          if (plVar10 != (int64_t *)0x0) {
            plVar17 = plVar10 + 3;
          }
          uVar14 = (int)uVar16 + 1;
          uVar16 = (uint64_t)uVar14;
        } while ((int)uVar14 < (int)uVar15);
      }
    }
    uVar8 = FUN_1808e4fe0(lVar9,unaff_R14 + 8,unaff_R15 + 0x19);
    if ((int)uVar8 == 0) {
      if (*(int64_t **)(unaff_R14 + 0x478) != unaff_RDI) {
        if (0 < (int)unaff_R15[0x1a]) {
          piVar13 = (int *)(*(int64_t *)(lVar9 + 0x78) + (int64_t)(int)unaff_R15[0x19] * 8);
          do {
            if (*piVar13 == 3) goto LAB_1808e4b4a;
            unaff_RDI = (int64_t *)((int64_t)unaff_RDI + 1);
            piVar13 = piVar13 + 2;
          } while ((int64_t)unaff_RDI < (int64_t)(int)unaff_R15[0x1a]);
        }
        lVar19 = (int64_t)*(int *)(lVar9 + 0x80);
        uVar14 = (int)*(uint *)(lVar9 + 0x84) >> 0x1f;
        iVar5 = (*(uint *)(lVar9 + 0x84) ^ uVar14) - uVar14;
        iVar6 = *(int *)(lVar9 + 0x80) + 1;
        if (iVar5 < iVar6) {
          iVar12 = (int)((float)iVar5 * unaff_XMM6_Da);
          iVar5 = iVar6;
          if (iVar6 <= iVar12) {
            iVar5 = iVar12;
          }
          if (iVar5 < 8) {
            iVar12 = 8;
          }
          else if (iVar12 < iVar6) {
            iVar12 = iVar6;
          }
          uVar8 = FUN_180882f00(lVar9 + 0x78,iVar12);
          if ((int)uVar8 != 0) {
            return uVar8;
          }
        }
        *(uint64_t *)(*(int64_t *)(lVar9 + 0x78) + lVar19 * 8) = 0;
        *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
        lVar9 = *(int64_t *)(lVar9 + 0x78);
        *(int32_t *)(lVar9 + lVar19 * 8) = 3;
        *(int32_t *)(lVar9 + 4 + lVar19 * 8) =
             *(int32_t *)(*(int64_t *)(unaff_R14 + 0x478) + 0x68);
        unaff_R15[0x1a] = unaff_R15[0x1a] + 1;
      }
LAB_1808e4b4a:
      uVar8 = 0;
    }
  }
  return uVar8;
}






