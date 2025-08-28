#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 05_networking_part068.c - 3 个函数

// 函数: void FUN_1808782c0(int64_t param_1,uint64_t param_2,int64_t *param_3)
void FUN_1808782c0(int64_t param_1,uint64_t param_2,int64_t *param_3)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int32_t *puVar3;
  uint *puVar4;
  uint64_t uVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int64_t lVar10;
  int iVar11;
  uint uVar12;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int iVar13;
  uint64_t unaff_RDI;
  uint *puVar14;
  int *piVar15;
  int iVar16;
  int64_t *plVar17;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  bool bVar18;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RSI;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RDI;
  *(uint64_t *)(in_R11 + 0x20) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
  *(uint64_t *)(unaff_RBP + -0x41) = 0;
  *(uint64_t *)(unaff_RBP + -0x39) = 0;
  *(uint64_t *)(unaff_RBP + -0x31) = 0;
  *(uint64_t *)(unaff_RBP + -0x29) = 0;
  *(int32_t *)(unaff_RBP + -0x21) = 0xffffffff;
  *(int32_t *)(unaff_RBP + -0x1d) = 0;
  for (iVar13 = 0; (-1 < iVar13 && (iVar13 < *(int *)(param_1 + 0x198))); iVar13 = iVar13 + 1) {
    lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 400) + (int64_t)iVar13 * 8);
    if (*(int *)(lVar2 + 0x48) == 2) {
      puVar1 = (uint64_t *)(lVar2 + 0x60);
      lVar7 = (**(code **)(*param_3 + 0x318))(param_3,puVar1,1);
      if (lVar7 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18076b390(unaff_RBP + -9,0x27,&unknown_var_8960_ptr,*(int32_t *)puVar1,
                      *(int16_t *)(lVar2 + 100));
      }
      if (*(int *)(lVar7 + 0x60) != 0x1f) goto LAB_180878734;
      *(int32_t *)(unaff_RBP + -0x49) = 0;
      *(int64_t *)(unaff_RBP + -0x19) = lVar2 + 0x70;
      puVar8 = (uint64_t *)(unaff_RBP + -0x19);
      *(int32_t *)(unaff_RBP + -0x45) = 1;
      *(int64_t *)(unaff_RBP + -0x11) = lVar2 + 0x74;
      piVar15 = (int *)(unaff_RBP + -0x49);
      iVar16 = 0;
      do {
        lVar9 = *(int64_t *)(*(int64_t *)(lVar7 + 0x48) + (int64_t)*piVar15 * 8);
        if ((lVar9 == 0) || (*(int *)(lVar9 + 0x10) != 0)) goto LAB_180878734;
        puVar3 = (int32_t *)*puVar8;
        iVar16 = iVar16 + 1;
        piVar15 = piVar15 + 1;
        puVar8 = puVar8 + 1;
        *puVar3 = *(int32_t *)(lVar9 + 0x18);
      } while (iVar16 < 2);
      uVar5 = *(uint64_t *)(lVar2 + 0x68);
      *(uint64_t *)(unaff_RBP + -9) = *puVar1;
      *(uint64_t *)(unaff_RBP + -1) = uVar5;
      iVar16 = FUN_18087dd70(unaff_RBP + -0x41,unaff_RBP + -9,lVar2 + 0x10);
      if (iVar16 != 0) goto LAB_180878734;
      puVar8 = (uint64_t *)FUN_180847820();
      uVar5 = puVar8[1];
      *puVar1 = *puVar8;
      *(uint64_t *)(lVar2 + 0x68) = uVar5;
    }
  }
  if (*(int *)(unaff_RBP + -0x1d) != 0) {
    *(uint64_t *)(unaff_RBP + -9) = param_2;
    *(uint64_t *)(unaff_RBP + -1) = 0xffffffffffffffff;
    *(int32_t *)(unaff_RBP + 7) = 0xffffffff;
    FUN_1808741f0(param_2,unaff_RBP + -1,unaff_RBP + 7);
    iVar13 = *(int *)(unaff_RBP + 7);
    *(int *)(unaff_RBP + -0x49) = iVar13;
    if (iVar13 != -1) {
      lVar2 = *(int64_t *)(unaff_RBP + -0x31);
      iVar16 = *(int *)(unaff_RBP + -1);
      plVar17 = *(int64_t **)(unaff_RBP + -9);
LAB_1808784c1:
      lVar7 = plVar17[2];
      *(int64_t *)(unaff_RBP + -0x19) = (int64_t)iVar13 * 0x20;
      lVar7 = *(int64_t *)((int64_t)iVar13 * 0x20 + 0x18 + lVar7);
      puVar14 = *(uint **)(lVar7 + 0x48);
LAB_1808784e0:
      do {
        puVar4 = *(uint **)(lVar7 + 0x48);
        if ((puVar14 < puVar4) || (puVar4 + (int64_t)*(int *)(lVar7 + 0x50) * 4 <= puVar14))
        goto LAB_1808786c3;
        if (*(int *)(unaff_RBP + -0x39) != 0) {
          iVar13 = *(int *)(*(int64_t *)(unaff_RBP + -0x41) +
                           (int64_t)
                           (int)(*(int *)(unaff_RBP + -0x39) - 1U &
                                (puVar14[3] ^ puVar14[2] ^ puVar14[1] ^ *puVar14)) * 4);
          while (iVar13 != -1) {
            lVar9 = (int64_t)iVar13;
            if ((*(int64_t *)(lVar2 + lVar9 * 0x24) == *(int64_t *)puVar14) &&
               (*(int64_t *)(lVar2 + 8 + lVar9 * 0x24) == *(int64_t *)(puVar14 + 2))) {
              if (iVar13 != -1) {
                iVar13 = (int)((int64_t)puVar14 - (int64_t)puVar4 >> 4);
                if ((iVar13 < 0) || (iVar6 = *(int *)(lVar7 + 0x50), iVar6 <= iVar13))
                goto LAB_180878734;
                iVar11 = (iVar6 - iVar13) + -1;
                if (0 < iVar11) {
                    // WARNING: Subroutine does not return
                  memmove(puVar4 + (int64_t)iVar13 * 4,puVar4 + (int64_t)iVar13 * 4 + 4,
                          (int64_t)iVar11 << 4);
                }
                *(int *)(lVar7 + 0x50) = iVar6 + -1;
                uVar12 = (int)*(uint *)(lVar7 + 100) >> 0x1f;
                iVar6 = (*(uint *)(lVar7 + 100) ^ uVar12) - uVar12;
                iVar13 = *(int *)(lVar7 + 0x60) + 1;
                if (iVar6 < iVar13) {
                  iVar11 = (int)((float)iVar6 * 1.5);
                  iVar6 = iVar13;
                  if (iVar13 <= iVar11) {
                    iVar6 = iVar11;
                  }
                  if (iVar6 < 4) {
                    iVar11 = 4;
                  }
                  else if (iVar11 < iVar13) {
                    iVar11 = iVar13;
                  }
                  if (iVar11 < *(int *)(lVar7 + 0x60)) goto LAB_180878734;
                  lVar10 = 0;
                  if (iVar11 != 0) {
                    if ((0x3ffffffe < iVar11 * 0x10 - 1U) ||
                       (lVar10 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar11 * 0x10
                                               ,&unknown_var_8432_ptr,0xf4,0), lVar10 == 0))
                    goto LAB_180878734;
                    if (*(int *)(lVar7 + 0x60) != 0) {
                    // WARNING: Subroutine does not return
                      memcpy(lVar10,*(uint64_t *)(lVar7 + 0x58),
                             (int64_t)*(int *)(lVar7 + 0x60) << 4);
                    }
                  }
                  if ((0 < *(int *)(lVar7 + 100)) && (*(int64_t *)(lVar7 + 0x58) != 0)) {
                    // WARNING: Subroutine does not return
                    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                  *(int64_t *)(lVar7 + 0x58),&unknown_var_8432_ptr,0x100,1);
                  }
                  *(int64_t *)(lVar7 + 0x58) = lVar10;
                  *(int *)(lVar7 + 100) = iVar11;
                }
                puVar1 = (uint64_t *)(lVar2 + 0x14 + lVar9 * 0x24);
                uVar5 = puVar1[1];
                puVar8 = (uint64_t *)
                         ((int64_t)*(int *)(lVar7 + 0x60) * 0x10 + *(int64_t *)(lVar7 + 0x58));
                *puVar8 = *puVar1;
                puVar8[1] = uVar5;
                *(int *)(lVar7 + 0x60) = *(int *)(lVar7 + 0x60) + 1;
                goto LAB_1808784e0;
              }
              break;
            }
            iVar13 = *(int *)(lVar2 + 0x10 + lVar9 * 0x24);
          }
        }
        puVar14 = puVar14 + 4;
      } while( true );
    }
  }
LAB_180878734:
  iVar13 = SystemStatusChecker(unaff_RBP + -0x41);
  if ((iVar13 == 0) && (iVar13 = FUN_1808745b0(unaff_RBP + -0x31), iVar13 == 0)) {
    *(int32_t *)(unaff_RBP + -0x21) = 0xffffffff;
    *(int32_t *)(unaff_RBP + -0x1d) = 0;
  }
  FUN_1808745b0(unaff_RBP + -0x31);
  SystemStatusChecker(unaff_RBP + -0x41);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1f) ^ (uint64_t)&stack0x00000000);
LAB_1808786c3:
  plVar17 = *(int64_t **)(unaff_RBP + -9);
  if (*(int *)(unaff_RBP + -0x49) != -1) {
    iVar13 = *(int *)(*(int64_t *)(unaff_RBP + -0x19) + 0x10 + plVar17[2]);
    *(int *)(unaff_RBP + -0x49) = iVar13;
    if (iVar13 != -1) goto LAB_1808784c1;
  }
  iVar13 = iVar16 + 1;
  bVar18 = iVar16 != -1;
  iVar16 = 0;
  if (bVar18) {
    iVar16 = iVar13;
  }
  if (iVar16 != (int)plVar17[1]) {
    lVar7 = (int64_t)iVar16;
    do {
      if (*(int *)(*plVar17 + lVar7 * 4) != -1) {
        iVar13 = *(int *)(*plVar17 + (int64_t)iVar16 * 4);
        goto LAB_180878722;
      }
      iVar16 = iVar16 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 != (int)plVar17[1]);
  }
  iVar13 = -1;
  iVar16 = -1;
LAB_180878722:
  *(int *)(unaff_RBP + -0x49) = iVar13;
  if (iVar13 == -1) goto LAB_180878734;
  goto LAB_1808784c1;
}





// 函数: void FUN_180878771(void)
void FUN_180878771(void)

{
  int iVar1;
  int64_t unaff_RBP;
  int32_t unaff_R13D;
  
  iVar1 = FUN_1808745b0(unaff_RBP + -0x31);
  if (iVar1 == 0) {
    *(int32_t *)(unaff_RBP + -0x21) = 0xffffffff;
    *(int32_t *)(unaff_RBP + -0x1d) = unaff_R13D;
  }
  FUN_1808745b0(unaff_RBP + -0x31);
  SystemStatusChecker(unaff_RBP + -0x41);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1f) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808787b5(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)
void FUN_1808787b5(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)

{
  uint64_t *puVar1;
  uint *puVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int iVar10;
  uint uVar11;
  int64_t unaff_RBP;
  uint *puVar12;
  int iVar13;
  int unaff_R13D;
  int64_t unaff_R15;
  float unaff_XMM6_Da;
  
code_r0x0001808787b5:
  iVar5 = *(int *)(param_1 + (int64_t)unaff_R13D * 4);
  iVar13 = unaff_R13D;
LAB_180878722:
  *(int *)(unaff_RBP + -0x49) = iVar5;
  if (iVar5 == -1) {
LAB_180878734:
    iVar5 = SystemStatusChecker(unaff_RBP + -0x41);
    if ((iVar5 == 0) && (iVar5 = FUN_1808745b0(unaff_RBP + -0x31), iVar5 == 0)) {
      *(int32_t *)(unaff_RBP + -0x21) = 0xffffffff;
      *(int32_t *)(unaff_RBP + -0x1d) = 0;
    }
    FUN_1808745b0(unaff_RBP + -0x31);
    SystemStatusChecker(unaff_RBP + -0x41);
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1f) ^ (uint64_t)&stack0x00000000);
  }
LAB_1808784c1:
  lVar9 = param_4[2];
  *(int64_t *)(unaff_RBP + -0x19) = (int64_t)iVar5 * 0x20;
  lVar9 = *(int64_t *)((int64_t)iVar5 * 0x20 + 0x18 + lVar9);
  puVar12 = *(uint **)(lVar9 + 0x48);
LAB_1808784e0:
  do {
    puVar2 = *(uint **)(lVar9 + 0x48);
    if ((puVar12 < puVar2) || (puVar2 + (int64_t)*(int *)(lVar9 + 0x50) * 4 <= puVar12)) break;
    if (*(int *)(unaff_RBP + -0x39) != 0) {
      iVar5 = *(int *)(*(int64_t *)(unaff_RBP + -0x41) +
                      (int64_t)
                      (int)(*(int *)(unaff_RBP + -0x39) - 1U &
                           (puVar12[3] ^ puVar12[2] ^ puVar12[1] ^ *puVar12)) * 4);
      while (iVar5 != -1) {
        lVar6 = (int64_t)iVar5;
        if ((*(int64_t *)(unaff_R15 + lVar6 * 0x24) == *(int64_t *)puVar12) &&
           (*(int64_t *)(unaff_R15 + 8 + lVar6 * 0x24) == *(int64_t *)(puVar12 + 2))) {
          if (iVar5 != -1) {
            iVar5 = (int)((int64_t)puVar12 - (int64_t)puVar2 >> 4);
            if ((iVar5 < 0) || (iVar4 = *(int *)(lVar9 + 0x50), iVar4 <= iVar5)) goto LAB_180878734;
            iVar10 = (iVar4 - iVar5) + -1;
            if (0 < iVar10) {
                    // WARNING: Subroutine does not return
              memmove(puVar2 + (int64_t)iVar5 * 4,puVar2 + (int64_t)iVar5 * 4 + 4,
                      (int64_t)iVar10 << 4);
            }
            *(int *)(lVar9 + 0x50) = iVar4 + -1;
            uVar11 = (int)*(uint *)(lVar9 + 100) >> 0x1f;
            iVar4 = (*(uint *)(lVar9 + 100) ^ uVar11) - uVar11;
            iVar5 = *(int *)(lVar9 + 0x60) + 1;
            if (iVar4 < iVar5) {
              iVar10 = (int)((float)iVar4 * unaff_XMM6_Da);
              iVar4 = iVar5;
              if (iVar5 <= iVar10) {
                iVar4 = iVar10;
              }
              if (iVar4 < 4) {
                iVar10 = 4;
              }
              else if (iVar10 < iVar5) {
                iVar10 = iVar5;
              }
              if (iVar10 < *(int *)(lVar9 + 0x60)) goto LAB_180878734;
              lVar7 = 0;
              if (iVar10 != 0) {
                if ((0x3ffffffe < iVar10 * 0x10 - 1U) ||
                   (lVar7 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar10 * 0x10,
                                          &unknown_var_8432_ptr,0xf4,0), lVar7 == 0)) goto LAB_180878734;
                if (*(int *)(lVar9 + 0x60) != 0) {
                    // WARNING: Subroutine does not return
                  memcpy(lVar7,*(uint64_t *)(lVar9 + 0x58),(int64_t)*(int *)(lVar9 + 0x60) << 4);
                }
              }
              if ((0 < *(int *)(lVar9 + 100)) && (*(int64_t *)(lVar9 + 0x58) != 0)) {
                    // WARNING: Subroutine does not return
                SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(lVar9 + 0x58),
                              &unknown_var_8432_ptr,0x100,1);
              }
              *(int64_t *)(lVar9 + 0x58) = lVar7;
              *(int *)(lVar9 + 100) = iVar10;
            }
            puVar1 = (uint64_t *)(unaff_R15 + 0x14 + lVar6 * 0x24);
            uVar3 = puVar1[1];
            puVar8 = (uint64_t *)
                     ((int64_t)*(int *)(lVar9 + 0x60) * 0x10 + *(int64_t *)(lVar9 + 0x58));
            *puVar8 = *puVar1;
            puVar8[1] = uVar3;
            *(int *)(lVar9 + 0x60) = *(int *)(lVar9 + 0x60) + 1;
            goto LAB_1808784e0;
          }
          break;
        }
        iVar5 = *(int *)(unaff_R15 + 0x10 + lVar6 * 0x24);
      }
    }
    puVar12 = puVar12 + 4;
  } while( true );
  param_4 = *(int64_t **)(unaff_RBP + -9);
  if (*(int *)(unaff_RBP + -0x49) == -1) goto LAB_1808786e5;
  iVar5 = *(int *)(*(int64_t *)(unaff_RBP + -0x19) + 0x10 + param_4[2]);
  *(int *)(unaff_RBP + -0x49) = iVar5;
  if (iVar5 == -1) goto LAB_1808786e5;
  goto LAB_1808784c1;
LAB_1808786e5:
  unaff_R13D = 0;
  if (iVar13 != -1) {
    unaff_R13D = iVar13 + 1;
  }
  if (unaff_R13D != (int)param_4[1]) {
    param_1 = *param_4;
    lVar9 = (int64_t)unaff_R13D;
    do {
      if (*(int *)(param_1 + lVar9 * 4) != -1) goto code_r0x0001808787b5;
      unaff_R13D = unaff_R13D + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 != (int)param_4[1]);
  }
  iVar5 = -1;
  iVar13 = iVar5;
  goto LAB_180878722;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



