#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part072.c - 8 个函数

// 函数: void FUN_1808d9528(void)
void FUN_1808d9528(void)

{
  uint *puVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int iVar4;
  int iVar5;
  int64_t in_RAX;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int iVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  uint uVar12;
  int iVar13;
  uint64_t uVar14;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t *unaff_R15;
  uint64_t *puVar15;
  bool in_ZF;
  uint64_t extraout_XMM0_Qa;
  uint64_t in_stack_00000038;
  uint64_t in_stack_00000048;
  
  plVar11 = (int64_t *)(unaff_RBP + 0x10);
  plVar6 = (int64_t *)(in_RAX + -0x20);
  if (in_ZF) {
    plVar6 = unaff_RBX;
  }
  plVar8 = unaff_RBX;
  if (plVar6 != (int64_t *)0x0) {
    plVar8 = plVar6 + 4;
  }
joined_r0x0001808d9552:
  if (plVar8 == plVar11) {
LAB_1808d95f7:
    plVar11 = (int64_t *)(*unaff_R15 + -0x10);
    if (*unaff_R15 == 0) {
      plVar11 = unaff_RBX;
    }
    plVar6 = unaff_RBX;
    if (plVar11 != (int64_t *)0x0) {
      plVar6 = plVar11 + 2;
    }
    while ((plVar6 != unaff_R15 && (FUN_1808b2d20(), plVar6 != unaff_R15))) {
      plVar11 = (int64_t *)(*plVar6 + -0x10);
      if (*plVar6 == 0) {
        plVar11 = unaff_RBX;
      }
      plVar6 = unaff_RBX;
      if (plVar11 != (int64_t *)0x0) {
        plVar6 = plVar11 + 2;
      }
    }
    plVar11 = (int64_t *)(*(int64_t *)(unaff_RBP + 0x40) + -0x10);
    if (*(int64_t *)(unaff_RBP + 0x40) == 0) {
      plVar11 = unaff_RBX;
    }
    plVar6 = unaff_RBX;
    if (plVar11 != (int64_t *)0x0) {
      plVar6 = plVar11 + 2;
    }
    while ((plVar6 != (int64_t *)(unaff_RBP + 0x40) &&
           (FUN_1808b2d20(), plVar6 != (int64_t *)(unaff_RBP + 0x40)))) {
      plVar11 = (int64_t *)(*plVar6 + -0x10);
      if (*plVar6 == 0) {
        plVar11 = unaff_RBX;
      }
      plVar6 = unaff_RBX;
      if (plVar11 != (int64_t *)0x0) {
        plVar6 = plVar11 + 2;
      }
    }
    uVar12 = *(uint *)(unaff_RBP + 0x6c);
    iVar4 = (int)unaff_RBX;
    if ((int)((uVar12 ^ (int)uVar12 >> 0x1f) - ((int)uVar12 >> 0x1f)) < 0) {
      if (*(int *)(unaff_RBP + 0x68) <= iVar4) {
        if ((0 < (int)uVar12) && (*(int64_t *)(unaff_RBP + 0x60) != 0)) {
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RBP + 0x60),
                        &processed_var_8432_ptr,0x100,1);
        }
        *(int64_t **)(unaff_RBP + 0x60) = unaff_RBX;
        *(int *)(unaff_RBP + 0x6c) = iVar4;
        goto LAB_1808d9710;
      }
    }
    else {
LAB_1808d9710:
      *(int *)(unaff_RBP + 0x68) = iVar4;
    }
    plVar11 = (int64_t *)(*(int64_t *)(unaff_RBP + 0x20) + -0x20);
    if (*(int64_t *)(unaff_RBP + 0x20) == 0) {
      plVar11 = unaff_RBX;
    }
    plVar6 = plVar11 + 4;
    if (plVar11 == (int64_t *)0x0) {
      plVar6 = unaff_RBX;
    }
    if (plVar6 != (int64_t *)(unaff_RBP + 0x20)) {
      do {
        plVar11 = plVar6 + -4;
        if (plVar6 == (int64_t *)0x0) {
          plVar11 = unaff_RBX;
        }
        puVar15 = (uint64_t *)(plVar11[10] + 0x20);
        for (puVar3 = (uint64_t *)*puVar15; puVar3 != puVar15; puVar3 = (uint64_t *)*puVar3) {
          lVar2 = puVar3[3];
          if ((*(uint *)(lVar2 + 0x5c) >> 2 & 1) != 0) {
            uVar14 = (uint64_t)unaff_RBX & 0xffffffff;
            plVar8 = unaff_RBX;
            if (0 < *(int *)(unaff_RBP + 0x68)) {
              plVar7 = *(int64_t **)(unaff_RBP + 0x60);
              plVar10 = unaff_RBX;
              do {
                if (*plVar7 == lVar2) {
                  plVar8 = *(int64_t **)(unaff_RBP + 0x60) + (int64_t)(int)uVar14 * 4;
                  break;
                }
                uVar14 = (uint64_t)((int)uVar14 + 1);
                plVar10 = (int64_t *)((int64_t)plVar10 + 1);
                plVar7 = plVar7 + 4;
              } while ((int64_t)plVar10 < (int64_t)*(int *)(unaff_RBP + 0x68));
            }
            if (plVar8 == (int64_t *)0x0) {
              uVar12 = (int)*(uint *)(unaff_RBP + 0x6c) >> 0x1f;
              iVar5 = (*(uint *)(unaff_RBP + 0x6c) ^ uVar12) - uVar12;
              iVar9 = *(int *)(unaff_RBP + 0x68) + 1;
              uVar12 = (uint)in_stack_00000038._4_4_ >> 8;
              in_stack_00000038._4_4_ = CONCAT31((int3)uVar12,(char)unaff_RBX);
              if (iVar5 < iVar9) {
                iVar13 = (int)((float)iVar5 * 1.5);
                iVar5 = iVar9;
                if (iVar9 <= iVar13) {
                  iVar5 = iVar13;
                }
                if (iVar5 < 2) {
                  iVar13 = 2;
                }
                else if (iVar13 < iVar9) {
                  iVar13 = iVar9;
                }
                iVar5 = FUN_1808532e0(unaff_RBP + 0x60,iVar13);
                if (iVar5 != 0) {
                  return;
                }
              }
              plVar8 = (int64_t *)
                       ((int64_t)*(int *)(unaff_RBP + 0x68) * 0x20 +
                       *(int64_t *)(unaff_RBP + 0x60));
              *plVar8 = lVar2;
              plVar8[1] = CONCAT44(in_stack_00000038._4_4_,0x7fffffff);
              plVar8[2] = (int64_t)unaff_RBX;
              plVar8[3] = CONCAT44(in_stack_00000048._4_4_,iVar4);
              *(int *)(unaff_RBP + 0x68) = *(int *)(unaff_RBP + 0x68) + 1;
              plVar8 = (int64_t *)
                       ((int64_t)(*(int *)(unaff_RBP + 0x68) + -1) * 0x20 +
                       *(int64_t *)(unaff_RBP + 0x60));
            }
            iVar5 = FUN_1808d9950(plVar8,plVar11,puVar3);
            if (iVar5 != 0) {
              return;
            }
          }
          if (puVar3 == puVar15) break;
        }
        plVar11 = (int64_t *)(*plVar6 + -0x20);
        if (*plVar6 == 0) {
          plVar11 = unaff_RBX;
        }
        plVar6 = plVar11 + 4;
        if (plVar11 == (int64_t *)0x0) {
          plVar6 = unaff_RBX;
        }
      } while (plVar6 != (int64_t *)(unaff_RBP + 0x20));
    }
    plVar11 = unaff_RBX;
    if (iVar4 < *(int *)(unaff_RBP + 0x68)) {
      do {
        lVar2 = *(int64_t *)(unaff_RBP + 0x60);
        if (*(int *)((int64_t)plVar11 + lVar2 + 8) != 0x7fffffff) {
          iVar4 = FUN_1808b3950(*(uint64_t *)((int64_t)plVar11 + lVar2),
                                *(int32_t *)((int64_t)plVar11 + lVar2 + 0x10),
                                *(int32_t *)((int64_t)plVar11 + lVar2 + 0x18),
                                *(int8_t *)((int64_t)plVar11 + lVar2 + 0xc));
          if (iVar4 != 0) {
            return;
          }
          *(int32_t *)((int64_t)plVar11 + lVar2 + 8) = 0x7fffffff;
        }
        uVar12 = (int)unaff_RBX + 1;
        unaff_RBX = (int64_t *)(uint64_t)uVar12;
        puVar1 = (uint *)(*(int64_t *)((int64_t)plVar11 + lVar2) + 0x5c);
        *puVar1 = *puVar1 | 0x10;
        plVar11 = plVar11 + 4;
      } while ((int)uVar12 < *(int *)(unaff_RBP + 0x68));
    }
    iVar4 = FUN_1808d82a0();
    if (iVar4 == 0) {
      FUN_1808d82a0(extraout_XMM0_Qa,unaff_RBP + 0x40);
    }
  }
  else {
    plVar6 = plVar8 + 0xc;
    if (plVar8 == (int64_t *)0x0) {
      plVar6 = (int64_t *)0x80;
    }
    if ((int)*plVar6 != 1) {
      if (plVar8 == plVar11) goto LAB_1808d95f7;
      plVar6 = (int64_t *)(*plVar8 + -0x20);
      if (*plVar8 == 0) {
        plVar6 = unaff_RBX;
      }
      plVar8 = unaff_RBX;
      if (plVar6 != (int64_t *)0x0) {
        plVar8 = plVar6 + 4;
      }
      goto joined_r0x0001808d9552;
    }
    plVar6 = plVar8;
    if (plVar8 != plVar11) {
      lVar2 = *plVar8;
      plVar7 = (int64_t *)(lVar2 + -0x20);
      if (lVar2 == 0) {
        plVar7 = unaff_RBX;
      }
      plVar6 = unaff_RBX;
      if (plVar7 != (int64_t *)0x0) {
        plVar6 = plVar7 + 4;
      }
      *(int64_t *)plVar8[1] = lVar2;
      *(int64_t *)(*plVar8 + 8) = plVar8[1];
      plVar8[1] = (int64_t)plVar8;
      *plVar8 = (int64_t)plVar8;
    }
    iVar4 = FUN_1808d7d10();
    plVar8 = plVar6;
    if (iVar4 == 0) goto joined_r0x0001808d9552;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808d95fd(void)
void FUN_1808d95fd(void)

{
  uint *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int64_t in_RAX;
  int64_t *plVar6;
  int64_t *plVar7;
  int iVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  uint uVar11;
  int iVar12;
  uint64_t uVar13;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t *plVar14;
  int64_t *unaff_R15;
  uint64_t *puVar15;
  bool in_ZF;
  uint64_t extraout_XMM0_Qa;
  uint64_t in_stack_00000038;
  uint64_t in_stack_00000048;
  
  plVar10 = (int64_t *)(in_RAX + -0x10);
  if (in_ZF) {
    plVar10 = unaff_RBX;
  }
  plVar14 = unaff_RBX;
  if (plVar10 != (int64_t *)0x0) {
    plVar14 = plVar10 + 2;
  }
  while ((plVar14 != unaff_R15 && (FUN_1808b2d20(), plVar14 != unaff_R15))) {
    plVar10 = (int64_t *)(*plVar14 + -0x10);
    if (*plVar14 == 0) {
      plVar10 = unaff_RBX;
    }
    plVar14 = unaff_RBX;
    if (plVar10 != (int64_t *)0x0) {
      plVar14 = plVar10 + 2;
    }
  }
  plVar10 = (int64_t *)(*(int64_t *)(unaff_RBP + 0x40) + -0x10);
  if (*(int64_t *)(unaff_RBP + 0x40) == 0) {
    plVar10 = unaff_RBX;
  }
  plVar14 = unaff_RBX;
  if (plVar10 != (int64_t *)0x0) {
    plVar14 = plVar10 + 2;
  }
  while ((plVar14 != (int64_t *)(unaff_RBP + 0x40) &&
         (FUN_1808b2d20(), plVar14 != (int64_t *)(unaff_RBP + 0x40)))) {
    plVar10 = (int64_t *)(*plVar14 + -0x10);
    if (*plVar14 == 0) {
      plVar10 = unaff_RBX;
    }
    plVar14 = unaff_RBX;
    if (plVar10 != (int64_t *)0x0) {
      plVar14 = plVar10 + 2;
    }
  }
  uVar11 = *(uint *)(unaff_RBP + 0x6c);
  iVar5 = (int)unaff_RBX;
  if ((int)((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f)) < 0) {
    if (iVar5 < *(int *)(unaff_RBP + 0x68)) goto LAB_1808d9713;
    if ((0 < (int)uVar11) && (*(int64_t *)(unaff_RBP + 0x60) != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RBP + 0x60),
                    &processed_var_8432_ptr,0x100,1);
    }
    *(int64_t **)(unaff_RBP + 0x60) = unaff_RBX;
    *(int *)(unaff_RBP + 0x6c) = iVar5;
  }
  *(int *)(unaff_RBP + 0x68) = iVar5;
LAB_1808d9713:
  plVar10 = (int64_t *)(*(int64_t *)(unaff_RBP + 0x20) + -0x20);
  if (*(int64_t *)(unaff_RBP + 0x20) == 0) {
    plVar10 = unaff_RBX;
  }
  plVar14 = plVar10 + 4;
  if (plVar10 == (int64_t *)0x0) {
    plVar14 = unaff_RBX;
  }
  if (plVar14 != (int64_t *)(unaff_RBP + 0x20)) {
    do {
      plVar10 = plVar14 + -4;
      if (plVar14 == (int64_t *)0x0) {
        plVar10 = unaff_RBX;
      }
      puVar15 = (uint64_t *)(plVar10[10] + 0x20);
      for (puVar2 = (uint64_t *)*puVar15; puVar2 != puVar15; puVar2 = (uint64_t *)*puVar2) {
        lVar3 = puVar2[3];
        if ((*(uint *)(lVar3 + 0x5c) >> 2 & 1) != 0) {
          uVar13 = (uint64_t)unaff_RBX & 0xffffffff;
          plVar7 = unaff_RBX;
          if (0 < *(int *)(unaff_RBP + 0x68)) {
            plVar6 = *(int64_t **)(unaff_RBP + 0x60);
            plVar9 = unaff_RBX;
            do {
              if (*plVar6 == lVar3) {
                plVar7 = *(int64_t **)(unaff_RBP + 0x60) + (int64_t)(int)uVar13 * 4;
                break;
              }
              uVar13 = (uint64_t)((int)uVar13 + 1);
              plVar9 = (int64_t *)((int64_t)plVar9 + 1);
              plVar6 = plVar6 + 4;
            } while ((int64_t)plVar9 < (int64_t)*(int *)(unaff_RBP + 0x68));
          }
          if (plVar7 == (int64_t *)0x0) {
            uVar11 = (int)*(uint *)(unaff_RBP + 0x6c) >> 0x1f;
            iVar4 = (*(uint *)(unaff_RBP + 0x6c) ^ uVar11) - uVar11;
            iVar8 = *(int *)(unaff_RBP + 0x68) + 1;
            uVar11 = (uint)in_stack_00000038._4_4_ >> 8;
            in_stack_00000038._4_4_ = CONCAT31((int3)uVar11,(char)unaff_RBX);
            if (iVar4 < iVar8) {
              iVar12 = (int)((float)iVar4 * 1.5);
              iVar4 = iVar8;
              if (iVar8 <= iVar12) {
                iVar4 = iVar12;
              }
              if (iVar4 < 2) {
                iVar12 = 2;
              }
              else if (iVar12 < iVar8) {
                iVar12 = iVar8;
              }
              iVar4 = FUN_1808532e0(unaff_RBP + 0x60,iVar12);
              if (iVar4 != 0) {
                return;
              }
            }
            plVar7 = (int64_t *)
                     ((int64_t)*(int *)(unaff_RBP + 0x68) * 0x20 + *(int64_t *)(unaff_RBP + 0x60))
            ;
            *plVar7 = lVar3;
            plVar7[1] = CONCAT44(in_stack_00000038._4_4_,0x7fffffff);
            plVar7[2] = (int64_t)unaff_RBX;
            plVar7[3] = CONCAT44(in_stack_00000048._4_4_,iVar5);
            *(int *)(unaff_RBP + 0x68) = *(int *)(unaff_RBP + 0x68) + 1;
            plVar7 = (int64_t *)
                     ((int64_t)(*(int *)(unaff_RBP + 0x68) + -1) * 0x20 +
                     *(int64_t *)(unaff_RBP + 0x60));
          }
          iVar4 = FUN_1808d9950(plVar7,plVar10,puVar2);
          if (iVar4 != 0) {
            return;
          }
        }
        if (puVar2 == puVar15) break;
      }
      plVar10 = (int64_t *)(*plVar14 + -0x20);
      if (*plVar14 == 0) {
        plVar10 = unaff_RBX;
      }
      plVar14 = plVar10 + 4;
      if (plVar10 == (int64_t *)0x0) {
        plVar14 = unaff_RBX;
      }
    } while (plVar14 != (int64_t *)(unaff_RBP + 0x20));
  }
  plVar10 = unaff_RBX;
  if (iVar5 < *(int *)(unaff_RBP + 0x68)) {
    do {
      lVar3 = *(int64_t *)(unaff_RBP + 0x60);
      if (*(int *)((int64_t)plVar10 + lVar3 + 8) != 0x7fffffff) {
        iVar5 = FUN_1808b3950(*(uint64_t *)((int64_t)plVar10 + lVar3),
                              *(int32_t *)((int64_t)plVar10 + lVar3 + 0x10),
                              *(int32_t *)((int64_t)plVar10 + lVar3 + 0x18),
                              *(int8_t *)((int64_t)plVar10 + lVar3 + 0xc));
        if (iVar5 != 0) {
          return;
        }
        *(int32_t *)((int64_t)plVar10 + lVar3 + 8) = 0x7fffffff;
      }
      uVar11 = (int)unaff_RBX + 1;
      unaff_RBX = (int64_t *)(uint64_t)uVar11;
      puVar1 = (uint *)(*(int64_t *)((int64_t)plVar10 + lVar3) + 0x5c);
      *puVar1 = *puVar1 | 0x10;
      plVar10 = plVar10 + 4;
    } while ((int)uVar11 < *(int *)(unaff_RBP + 0x68));
  }
  iVar5 = FUN_1808d82a0();
  if (iVar5 == 0) {
    FUN_1808d82a0(extraout_XMM0_Qa,unaff_RBP + 0x40);
  }
  return;
}






// 函数: void FUN_1808d9732(uint64_t param_1,int64_t *param_2)
void FUN_1808d9732(uint64_t param_1,int64_t *param_2)

{
  uint *puVar1;
  int64_t lVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  uint uVar9;
  int iVar10;
  uint64_t uVar11;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t *plVar12;
  int64_t *unaff_R12;
  int64_t unaff_R13;
  int64_t *plVar13;
  uint64_t extraout_XMM0_Qa;
  uint64_t in_stack_00000038;
  uint64_t in_stack_00000048;
  
  if (unaff_R12 != param_2) {
    do {
      plVar8 = unaff_R12 + -4;
      if (unaff_R12 == (int64_t *)0x0) {
        plVar8 = unaff_RBX;
      }
      plVar13 = (int64_t *)(plVar8[10] + 0x20);
      plVar12 = (int64_t *)*plVar13;
      if (plVar12 != plVar13) {
        do {
          lVar2 = plVar12[3];
          if ((*(uint *)(lVar2 + 0x5c) >> 2 & 1) != 0) {
            uVar11 = (uint64_t)unaff_RBX & 0xffffffff;
            plVar5 = unaff_RBX;
            if (0 < *(int *)(unaff_RBP + 0x68)) {
              plVar4 = *(int64_t **)(unaff_RBP + 0x60);
              plVar7 = unaff_RBX;
              do {
                if (*plVar4 == lVar2) {
                  plVar5 = *(int64_t **)(unaff_RBP + 0x60) + (int64_t)(int)uVar11 * 4;
                  break;
                }
                uVar11 = (uint64_t)((int)uVar11 + 1);
                plVar7 = (int64_t *)((int64_t)plVar7 + 1);
                plVar4 = plVar4 + 4;
              } while ((int64_t)plVar7 < (int64_t)*(int *)(unaff_RBP + 0x68));
            }
            if (plVar5 == (int64_t *)0x0) {
              uVar9 = (int)*(uint *)(unaff_RBP + 0x6c) >> 0x1f;
              iVar3 = (*(uint *)(unaff_RBP + 0x6c) ^ uVar9) - uVar9;
              iVar6 = *(int *)(unaff_RBP + 0x68) + 1;
              in_stack_00000038._4_4_ = CONCAT31(in_stack_00000038._5_3_,(char)unaff_RBX);
              if (iVar3 < iVar6) {
                iVar10 = (int)((float)iVar3 * 1.5);
                iVar3 = iVar6;
                if (iVar6 <= iVar10) {
                  iVar3 = iVar10;
                }
                if (iVar3 < 2) {
                  iVar10 = 2;
                }
                else if (iVar10 < iVar6) {
                  iVar10 = iVar6;
                }
                iVar3 = FUN_1808532e0(unaff_RBP + 0x60,iVar10);
                if (iVar3 != 0) {
                  return;
                }
              }
              plVar5 = (int64_t *)
                       ((int64_t)*(int *)(unaff_RBP + 0x68) * 0x20 +
                       *(int64_t *)(unaff_RBP + 0x60));
              *plVar5 = lVar2;
              plVar5[1] = CONCAT44(in_stack_00000038._4_4_,0x7fffffff);
              plVar5[2] = (int64_t)unaff_RBX;
              plVar5[3] = CONCAT44(in_stack_00000048._4_4_,(int)unaff_RBX);
              *(int *)(unaff_RBP + 0x68) = *(int *)(unaff_RBP + 0x68) + 1;
              plVar5 = (int64_t *)
                       ((int64_t)(*(int *)(unaff_RBP + 0x68) + -1) * 0x20 +
                       *(int64_t *)(unaff_RBP + 0x60));
            }
            iVar3 = FUN_1808d9950(plVar5,plVar8,plVar12);
            if (iVar3 != 0) {
              return;
            }
          }
        } while ((plVar12 != plVar13) && (plVar12 = (int64_t *)*plVar12, plVar12 != plVar13));
        param_2 = (int64_t *)(unaff_RBP + 0x20);
      }
      plVar8 = (int64_t *)(*unaff_R12 + -0x20);
      if (*unaff_R12 == 0) {
        plVar8 = unaff_RBX;
      }
      unaff_R12 = plVar8 + 4;
      if (plVar8 == (int64_t *)0x0) {
        unaff_R12 = unaff_RBX;
      }
    } while (unaff_R12 != param_2);
    unaff_R13 = unaff_RBP + 0x40;
  }
  plVar8 = unaff_RBX;
  if ((int)unaff_RBX < *(int *)(unaff_RBP + 0x68)) {
    do {
      lVar2 = *(int64_t *)(unaff_RBP + 0x60);
      if (*(int *)((int64_t)plVar8 + lVar2 + 8) != 0x7fffffff) {
        iVar3 = FUN_1808b3950(*(uint64_t *)((int64_t)plVar8 + lVar2),
                              *(int32_t *)((int64_t)plVar8 + lVar2 + 0x10),
                              *(int32_t *)((int64_t)plVar8 + lVar2 + 0x18),
                              *(int8_t *)((int64_t)plVar8 + lVar2 + 0xc));
        if (iVar3 != 0) {
          return;
        }
        *(int32_t *)((int64_t)plVar8 + lVar2 + 8) = 0x7fffffff;
      }
      uVar9 = (int)unaff_RBX + 1;
      unaff_RBX = (int64_t *)(uint64_t)uVar9;
      puVar1 = (uint *)(*(int64_t *)((int64_t)plVar8 + lVar2) + 0x5c);
      *puVar1 = *puVar1 | 0x10;
      plVar8 = plVar8 + 4;
    } while ((int)uVar9 < *(int *)(unaff_RBP + 0x68));
  }
  iVar3 = FUN_1808d82a0();
  if (iVar3 == 0) {
    FUN_1808d82a0(extraout_XMM0_Qa,unaff_R13);
  }
  return;
}






// 函数: void FUN_1808d9937(void)
void FUN_1808d9937(void)

{
  return;
}






// 函数: void FUN_1808d9944(void)
void FUN_1808d9944(void)

{
  return;
}



uint64_t FUN_1808d9950(int64_t *param_1,int64_t param_2,int64_t param_3)

{
  int64_t *plVar1;
  int8_t uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int32_t uVar9;
  int32_t uVar10;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    if ((int)param_1[1] == 0x7fffffff) {
      return 0;
    }
    uVar2 = *(int8_t *)((int64_t)param_1 + 0xc);
    uVar10 = (int32_t)param_1[3];
    uVar9 = (int32_t)param_1[2];
    lVar8 = *param_1;
  }
  else {
    plVar1 = (int64_t *)(param_2 + 0x30);
    plVar7 = (int64_t *)*plVar1;
    if (plVar7 != plVar1) {
      while ((int)plVar7[2] != *(int *)(*(int64_t *)(param_3 + 0x10) + 0x2c)) {
        if ((plVar7 == plVar1) || (plVar7 = (int64_t *)*plVar7, plVar7 == plVar1))
        goto LAB_1808d99c0;
      }
      if (plVar7 != (int64_t *)0xfffffffffffffff0) {
        uVar9 = *(int32_t *)((int64_t)plVar7 + 0x14);
        goto LAB_1808d99c5;
      }
    }
LAB_1808d99c0:
    uVar9 = *(int32_t *)(*(int64_t *)(param_3 + 0x10) + 0x30);
LAB_1808d99c5:
    if (*(int64_t *)(*param_1 + 0x30) != 0) {
      uVar9 = func_0x0001808c6500(*(int64_t *)(*param_1 + 0x30),uVar9);
    }
    plVar1 = param_1 + 3;
    uVar10 = *(int32_t *)(param_2 + 0x68);
    lVar8 = *(int64_t *)(*(int64_t *)(param_2 + 0x50) + 0x10);
    iVar5 = (int)param_1[1];
    iVar3 = *(int *)(lVar8 + 0x44);
    iVar4 = *(int *)(lVar8 + 0x4c);
    if (iVar5 < iVar3) {
      uVar6 = FUN_1808b3950(*param_1,(int)param_1[2],(int)*plVar1,
                            *(int8_t *)((int64_t)param_1 + 0xc));
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar3) {
      *(int8_t *)((int64_t)param_1 + 0xc) = *(int8_t *)(lVar8 + 0x48);
      *(int32_t *)(param_1 + 2) = 0;
      *(int32_t *)((int64_t)param_1 + 0x14) = 0;
      *(int32_t *)plVar1 = 0;
      *(int *)(param_1 + 1) = iVar3;
    }
    if (iVar4 == 3) {
      uVar6 = FUN_1808b1d10(*param_1,param_1 + 2,uVar9,uVar10,3,iVar5 != iVar3,
                            (int32_t *)((int64_t)param_1 + 0x14),plVar1);
      if ((int)uVar6 == 0) {
        return 0;
      }
      return uVar6;
    }
    if (iVar4 != 5) {
      return 0x1c;
    }
    uVar2 = *(int8_t *)((int64_t)param_1 + 0xc);
    lVar8 = *param_1;
  }
  uVar6 = FUN_1808b3950(lVar8,uVar9,uVar10,uVar2);
  if ((int)uVar6 == 0) {
    *(int32_t *)(param_1 + 1) = 0x7fffffff;
    return 0;
  }
  return uVar6;
}



uint64_t * FUN_1808d9af0(uint64_t *param_1)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  
  FUN_1808b0200(param_1,6);
  puVar2 = param_1 + 6;
  *puVar2 = puVar2;
  param_1[7] = puVar2;
  *param_1 = &processed_var_7472_ptr;
  *(int8_t *)(param_1 + 8) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x44) = 0;
  puVar2 = (uint64_t *)SystemCoreProcessor();
  uVar1 = puVar2[1];
  *(uint64_t *)((int64_t)param_1 + 0x4c) = *puVar2;
  *(uint64_t *)((int64_t)param_1 + 0x54) = uVar1;
  return param_1;
}



uint64_t * FUN_1808d9b40(uint64_t *param_1)

{
  uint64_t *puVar1;
  
  FUN_1808b0200(param_1,7);
  puVar1 = param_1 + 6;
  *puVar1 = puVar1;
  param_1[7] = puVar1;
  *param_1 = &processed_var_7544_ptr;
  *(int8_t *)(param_1 + 8) = 0;
  *(int32_t *)((int64_t)param_1 + 0x44) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(int32_t *)(param_1 + 0xd) = 0;
  *(int8_t *)((int64_t)param_1 + 0x6c) = 1;
  return param_1;
}






// 函数: void FUN_1808d9ba0(uint64_t *param_1)
void FUN_1808d9ba0(uint64_t *param_1)

{
  *param_1 = &processed_var_9368_ptr;
  FUN_1808d9e90(param_1 + 3);
  *param_1 = &processed_var_9352_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808d9bd0(uint64_t *param_1)
void FUN_1808d9bd0(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int64_t *plVar5;
  
  *param_1 = &render_data_ptr;
  if (0 < (int64_t)*(int *)(param_1 + 10)) {
    lVar4 = 0;
    do {
      puVar3 = *(uint64_t **)(param_1[9] + lVar4 * 8);
      if (puVar3 != (uint64_t *)0x0) {
        (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar3,&processed_var_9456_ptr,0x130,1);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 10));
  }
  FUN_18085dbf0(param_1 + 9);
  plVar1 = param_1 + 6;
  *(int64_t *)param_1[7] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[7];
  param_1[7] = plVar1;
  *plVar1 = (int64_t)plVar1;
  *(int64_t **)param_1[7] = plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[7];
  param_1[7] = plVar1;
  *plVar1 = (int64_t)plVar1;
  *param_1 = &processed_var_936_ptr;
  plVar1 = param_1 + 4;
  plVar2 = (int64_t *)*plVar1;
  if ((plVar2 == plVar1) && ((int64_t *)param_1[5] == plVar1)) {
    func_0x00018085dda0(plVar1);
    *param_1 = &ui_system_data_1544_ptr;
    *(int32_t *)(param_1 + 1) = 0xdeadf00d;
    return;
  }
  plVar5 = (int64_t *)0x0;
  if (plVar2 != plVar1) {
    plVar5 = plVar2;
  }
  *(int32_t *)((int64_t)plVar5 + 0x44) = 0xffffffff;
  FUN_18084c220(plVar5 + 4);
  FUN_18084c220(plVar5 + 2);
  *(int64_t *)plVar5[1] = *plVar5;
  *(int64_t *)(*plVar5 + 8) = plVar5[1];
  plVar5[1] = (int64_t)plVar5;
  *plVar5 = (int64_t)plVar5;
  *(int64_t **)plVar5[1] = plVar5;
  *(int64_t *)(*plVar5 + 8) = plVar5[1];
  plVar5[1] = (int64_t)plVar5;
  *plVar5 = (int64_t)plVar5;
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar5,&processed_var_976_ptr,0x30,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808d9bf4(void)
void FUN_1808d9bf4(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int64_t unaff_RBP;
  int64_t *plVar5;
  uint64_t *unaff_R14;
  
  lVar4 = 0;
  do {
    puVar3 = *(uint64_t **)(unaff_R14[9] + lVar4 * 8);
    if (puVar3 != (uint64_t *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar3,&processed_var_9456_ptr,0x130,1);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 < unaff_RBP);
  FUN_18085dbf0(unaff_R14 + 9);
  plVar1 = unaff_R14 + 6;
  *(int64_t *)unaff_R14[7] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = unaff_R14[7];
  unaff_R14[7] = plVar1;
  *plVar1 = (int64_t)plVar1;
  *(int64_t **)unaff_R14[7] = plVar1;
  *(uint64_t *)(*plVar1 + 8) = unaff_R14[7];
  unaff_R14[7] = plVar1;
  *plVar1 = (int64_t)plVar1;
  *unaff_R14 = &processed_var_936_ptr;
  plVar1 = unaff_R14 + 4;
  plVar2 = (int64_t *)*plVar1;
  if ((plVar2 == plVar1) && ((int64_t *)unaff_R14[5] == plVar1)) {
    func_0x00018085dda0(plVar1);
    *unaff_R14 = &ui_system_data_1544_ptr;
    *(int32_t *)(unaff_R14 + 1) = 0xdeadf00d;
    return;
  }
  plVar5 = (int64_t *)0x0;
  if (plVar2 != plVar1) {
    plVar5 = plVar2;
  }
  *(int32_t *)((int64_t)plVar5 + 0x44) = 0xffffffff;
  FUN_18084c220(plVar5 + 4);
  FUN_18084c220(plVar5 + 2);
  *(int64_t *)plVar5[1] = *plVar5;
  *(int64_t *)(*plVar5 + 8) = plVar5[1];
  plVar5[1] = (int64_t)plVar5;
  *plVar5 = (int64_t)plVar5;
  *(int64_t **)plVar5[1] = plVar5;
  *(int64_t *)(*plVar5 + 8) = plVar5[1];
  plVar5[1] = (int64_t)plVar5;
  *plVar5 = (int64_t)plVar5;
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar5,&processed_var_976_ptr,0x30);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




