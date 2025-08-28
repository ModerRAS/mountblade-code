#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part083.c - 22 个函数

// 函数: void FUN_1808e2979(int64_t param_1)
void FUN_1808e2979(int64_t param_1)

{
  uint64_t uVar1;
  int64_t in_RAX;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  uint64_t unaff_RBX;
  int64_t *plVar5;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int iVar6;
  uint64_t unaff_RDI;
  int iVar7;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  int iVar8;
  uint64_t unaff_R14;
  bool bVar9;
  
  *(uint64_t *)(in_RAX + -0x18) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x40) = unaff_R14;
  *(int32_t *)(param_1 + 0x48) = 0;
  uVar1 = *(uint64_t *)(*(int64_t *)(param_1 + 0x28) + 0xa0);
  *(uint64_t *)(unaff_RBP + 0x7f) = uVar1;
  FUN_180768360(uVar1);
  lVar2 = *(int64_t *)(param_1 + 0x28);
  *(uint64_t *)(unaff_RBP + -0x11) = 0xffffffffffffffff;
  *(int32_t *)(unaff_RBP + -9) = 0xffffffff;
  lVar3 = *(int64_t *)(lVar2 + 0x90) + 0x108;
  *(int64_t *)(unaff_RBP + -0x19) = lVar3;
  FUN_1808741f0(lVar3,unaff_RBP + -0x11,unaff_RBP + -9);
  iVar7 = *(int *)(unaff_RBP + -9);
  if (iVar7 != -1) {
    iVar8 = *(int *)(unaff_RBP + -0x11);
    plVar5 = *(int64_t **)(unaff_RBP + -0x19);
    do {
      do {
        lVar2 = plVar5[2];
        lVar3 = (int64_t)iVar7 * 0x20;
        *(int64_t *)(unaff_RBP + 0x77) = lVar3;
        *(uint64_t *)(unaff_RBP + 7) = 0xffffffffffffffff;
        *(int32_t *)(unaff_RBP + 0xf) = 0xffffffff;
        uVar1 = *(uint64_t *)(lVar2 + 0x18 + lVar3);
        *(uint64_t *)(unaff_RBP + -1) = uVar1;
        FUN_1807d1650(uVar1,unaff_RBP + 7,unaff_RBP + 0xf);
        iVar6 = *(int *)(unaff_RBP + 0xf);
        if (iVar6 != -1) {
          plVar5 = *(int64_t **)(unaff_RBP + -1);
          iVar4 = *(int *)(unaff_RBP + 7);
          uVar1 = *(uint64_t *)(unaff_RBP + 0x67);
          do {
            do {
              if (*(int64_t *)(plVar5[2] + 8 + (int64_t)iVar6 * 0x10) != 0) {
                FUN_1808e20d0(uVar1,0);
              }
            } while ((iVar6 != -1) &&
                    (iVar6 = *(int *)(plVar5[2] + 4 + (int64_t)iVar6 * 0x10), iVar6 != -1));
            iVar6 = iVar4 + 1;
            bVar9 = iVar4 != -1;
            iVar4 = 0;
            if (bVar9) {
              iVar4 = iVar6;
            }
            if (iVar4 != (int)plVar5[1]) {
              lVar2 = (int64_t)iVar4;
              do {
                if (*(int *)(*plVar5 + lVar2 * 4) != -1) {
                  iVar6 = *(int *)(*plVar5 + (int64_t)iVar4 * 4);
                  goto LAB_1808e2abb;
                }
                iVar4 = iVar4 + 1;
                lVar2 = lVar2 + 1;
              } while (lVar2 != (int)plVar5[1]);
            }
            iVar6 = -1;
            iVar4 = iVar6;
LAB_1808e2abb:
          } while (iVar6 != -1);
          lVar3 = *(int64_t *)(unaff_RBP + 0x77);
          plVar5 = *(int64_t **)(unaff_RBP + -0x19);
        }
      } while ((iVar7 != -1) && (iVar7 = *(int *)(plVar5[2] + 0x10 + lVar3), iVar7 != -1));
      iVar7 = iVar8 + 1;
      bVar9 = iVar8 != -1;
      iVar8 = 0;
      if (bVar9) {
        iVar8 = iVar7;
      }
      if (iVar8 != (int)plVar5[1]) {
        lVar2 = (int64_t)iVar8;
        do {
          if (*(int *)(*plVar5 + lVar2 * 4) != -1) {
            iVar7 = *(int *)(*plVar5 + (int64_t)iVar8 * 4);
            goto LAB_1808e2b22;
          }
          iVar8 = iVar8 + 1;
          lVar2 = lVar2 + 1;
        } while (lVar2 != (int)plVar5[1]);
      }
      iVar7 = -1;
      iVar8 = iVar7;
LAB_1808e2b22:
    } while (iVar7 != -1);
    lVar2 = *(int64_t *)(*(int64_t *)(unaff_RBP + 0x67) + 0x28);
  }
  lVar2 = *(int64_t *)(lVar2 + 0x90) + 0x38;
  *(uint64_t *)(unaff_RBP + -0x11) = 0xffffffffffffffff;
  *(int64_t *)(unaff_RBP + -0x19) = lVar2;
  *(int32_t *)(unaff_RBP + -9) = 0xffffffff;
  FUN_1808741f0(lVar2,unaff_RBP + -0x11,unaff_RBP + -9);
  iVar7 = *(int *)(unaff_RBP + -9);
  if (iVar7 != -1) {
    iVar8 = *(int *)(unaff_RBP + -0x11);
    plVar5 = *(int64_t **)(unaff_RBP + -0x19);
    do {
      lVar2 = plVar5[2];
      lVar3 = (int64_t)iVar7 * 0x20;
      *(int64_t *)(unaff_RBP + 0x77) = lVar3;
      *(uint64_t *)(unaff_RBP + 7) = 0xffffffffffffffff;
      *(int32_t *)(unaff_RBP + 0xf) = 0xffffffff;
      uVar1 = *(uint64_t *)(lVar2 + 0x18 + lVar3);
      *(uint64_t *)(unaff_RBP + -1) = uVar1;
      FUN_1807d1650(uVar1,unaff_RBP + 7,unaff_RBP + 0xf);
      iVar6 = *(int *)(unaff_RBP + 0xf);
      if (iVar6 != -1) {
        plVar5 = *(int64_t **)(unaff_RBP + -1);
        iVar4 = *(int *)(unaff_RBP + 7);
        uVar1 = *(uint64_t *)(unaff_RBP + 0x67);
        do {
          do {
            if (*(int64_t *)(plVar5[2] + 8 + (int64_t)iVar6 * 0x10) != 0) {
              FUN_1808e2430(uVar1,0);
            }
          } while ((iVar6 != -1) &&
                  (iVar6 = *(int *)(plVar5[2] + 4 + (int64_t)iVar6 * 0x10), iVar6 != -1));
          iVar6 = iVar4 + 1;
          bVar9 = iVar4 != -1;
          iVar4 = 0;
          if (bVar9) {
            iVar4 = iVar6;
          }
          if (iVar4 != (int)plVar5[1]) {
            lVar2 = (int64_t)iVar4;
            do {
              if (*(int *)(*plVar5 + lVar2 * 4) != -1) {
                iVar6 = *(int *)(*plVar5 + (int64_t)iVar4 * 4);
                goto LAB_1808e2c3b;
              }
              iVar4 = iVar4 + 1;
              lVar2 = lVar2 + 1;
            } while (lVar2 != (int)plVar5[1]);
          }
          iVar6 = -1;
          iVar4 = iVar6;
LAB_1808e2c3b:
        } while (iVar6 != -1);
        lVar3 = *(int64_t *)(unaff_RBP + 0x77);
        plVar5 = *(int64_t **)(unaff_RBP + -0x19);
      }
      if ((iVar7 == -1) || (iVar7 = *(int *)(plVar5[2] + 0x10 + lVar3), iVar7 == -1)) {
        iVar7 = iVar8 + 1;
        bVar9 = iVar8 != -1;
        iVar8 = 0;
        if (bVar9) {
          iVar8 = iVar7;
        }
        if (iVar8 != (int)plVar5[1]) {
          lVar2 = (int64_t)iVar8;
          do {
            if (*(int *)(*plVar5 + lVar2 * 4) != -1) {
              iVar7 = *(int *)(*plVar5 + (int64_t)iVar8 * 4);
              goto LAB_1808e2cc7;
            }
            iVar8 = iVar8 + 1;
            lVar2 = lVar2 + 1;
          } while (lVar2 != (int)plVar5[1]);
        }
        iVar7 = -1;
        iVar8 = iVar7;
      }
LAB_1808e2cc7:
    } while (iVar7 != -1);
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(*(uint64_t *)(unaff_RBP + 0x7f));
}



// WARNING: Removing unreachable block (ram,0x0001808e2d4a)

uint64_t FUN_1808e2d42(void)

{
  return 0x1c;
}



// WARNING: Removing unreachable block (ram,0x0001808e2de9)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808e2d90(int64_t param_1)

{
  int64_t lVar1;
  
  lVar1 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                        *(int *)(param_1 + 0x4c) * 0x128 + 0xc,&unknown_var_8576_ptr,0x3a,0);
  *(int64_t *)(param_1 + 0x30) = lVar1;
  if (lVar1 == 0) {
    return 0x26;
  }
  *(int64_t *)(param_1 + 0x38) = lVar1;
  *(int64_t *)(param_1 + 0x40) = lVar1 + 0xc;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808e2e40(int64_t param_1,int64_t *param_2)

{
  uint uVar1;
  int64_t lVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x48);
  uVar1 = *(uint *)(param_1 + 0x4c);
  if (uVar1 <= uVar3 + 1) {
    *(uint *)(param_1 + 0x4c) = uVar1 * 2;
    lVar2 = FUN_180742650(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(param_1 + 0x30),
                          uVar1 * 0x250 + 0xc,&unknown_var_8576_ptr,0x161,0);
    *(int64_t *)(param_1 + 0x30) = lVar2;
    if (lVar2 == 0) {
      return 0x26;
    }
    uVar3 = *(uint *)(param_1 + 0x48);
    *(int64_t *)(param_1 + 0x38) = lVar2;
    *(int64_t *)(param_1 + 0x40) = lVar2 + 0xc;
  }
  *param_2 = (uint64_t)uVar3 * 0x128 + *(int64_t *)(param_1 + 0x40);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return 0;
}



uint64_t FUN_1808e2ef0(int64_t param_1,int64_t param_2)

{
  int iVar1;
  uint64_t uVar2;
  
  if ((*(char *)(param_2 + 8) == '\a') && (*(char *)(param_2 + 9) == '\x01')) {
    param_2 = param_2 + 0xc;
    uVar2 = func_0x00018076b630(param_2,&unknown_var_8872_ptr);
    if ((int)uVar2 == 0) {
      *(int32_t *)(param_1 + 0x50) = 1;
      return uVar2;
    }
    iVar1 = func_0x00018076b630(param_2,&unknown_var_8888_ptr);
    if ((iVar1 == 0) || (iVar1 = func_0x00018076b630(param_2,&unknown_var_600_ptr), iVar1 == 0)) {
      *(int32_t *)(param_1 + 0x50) = 0;
    }
  }
  return 0;
}



uint64_t FUN_1808e2f05(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  uint64_t uVar2;
  int64_t unaff_RBX;
  
  param_2 = param_2 + 0xc;
  uVar2 = func_0x00018076b630(param_2,&unknown_var_8872_ptr);
  if ((int)uVar2 == 0) {
    *(int32_t *)(unaff_RBX + 0x50) = 1;
    return uVar2;
  }
  iVar1 = func_0x00018076b630(param_2,&unknown_var_8888_ptr);
  if ((iVar1 != 0) && (iVar1 = func_0x00018076b630(param_2,&unknown_var_600_ptr), iVar1 != 0)) {
    return 0;
  }
  *(int32_t *)(unaff_RBX + 0x50) = 0;
  return 0;
}



uint64_t FUN_1808e2f33(void)

{
  int iVar1;
  int64_t unaff_RBX;
  
  iVar1 = func_0x00018076b630();
  if ((iVar1 != 0) && (iVar1 = func_0x00018076b630(), iVar1 != 0)) {
    return 0;
  }
  *(int32_t *)(unaff_RBX + 0x50) = 0;
  return 0;
}



uint64_t FUN_1808e2f65(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808e2f70(int64_t param_1)
void FUN_1808e2f70(int64_t param_1)

{
  if (*(int64_t *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x30),
                  &unknown_var_8576_ptr,0x59,1);
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&unknown_var_8576_ptr,0x5f,1);
}



uint64_t * FUN_1808e3040(uint64_t *param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int iVar2;
  
  *param_1 = &unknown_var_8904_ptr;
  if (param_1[5] != 0) {
    iVar2 = FUN_1808e3310();
    if (iVar2 != 0) goto LAB_1808e3098;
    iVar2 = FUN_180768380(param_1[5],0);
    if (iVar2 != 0) goto LAB_1808e3098;
  }
  plVar1 = param_1 + 1;
  *(int64_t *)param_1[2] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[2];
  param_1[2] = plVar1;
  *plVar1 = (int64_t)plVar1;
LAB_1808e3098:
  FUN_180744d60(param_1 + 6);
  *param_1 = &unknown_var_9984_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x70);
  }
  return param_1;
}






// 函数: void FUN_1808e30d0(int64_t param_1,int *param_2)
void FUN_1808e30d0(int64_t param_1,int *param_2)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint64_t *)(param_1 + 0x28);
  FUN_180768360(uVar1);
  if ((0 < *(int *)(param_1 + 0x58)) || (*(int64_t *)(param_1 + 0x48) != 0)) {
    if (*(code **)(param_1 + 0x48) == (code *)0x0) {
      if ((*(int *)(param_1 + 0x40) < 0x200001) || (iVar2 = FUN_1808e3310(param_1), iVar2 == 0)) {
        uVar4 = (int)*(uint *)(param_1 + 0x3c) >> 0x1f;
        iVar2 = *(int *)(param_1 + 0x38) + 1;
        iVar3 = (*(uint *)(param_1 + 0x3c) ^ uVar4) - uVar4;
        if (iVar3 < iVar2) {
          iVar3 = (int)((float)iVar3 * 1.5);
          if (iVar2 <= iVar3) {
            iVar2 = iVar3;
          }
          if (iVar2 < 8) {
            iVar2 = 8;
          }
          iVar2 = FUN_180747f10(param_1 + 0x30,iVar2);
          if (iVar2 != 0) goto LAB_1808e31af;
        }
        *(int **)(*(int64_t *)(param_1 + 0x30) + (int64_t)*(int *)(param_1 + 0x38) * 8) = param_2;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + *param_2;
      }
    }
    else {
      (**(code **)(param_1 + 0x48))(param_2,1,*(uint64_t *)(param_1 + 0x50));
    }
  }
LAB_1808e31af:
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar1);
}






// 函数: void FUN_1808e30db(int64_t param_1,int *param_2)
void FUN_1808e30db(int64_t param_1,int *param_2)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint64_t in_stack_00000058;
  
  uVar1 = *(uint64_t *)(param_1 + 0x28);
  FUN_180768360(uVar1);
  if ((0 < *(int *)(param_1 + 0x58)) || (*(int64_t *)(param_1 + 0x48) != 0)) {
    if (*(code **)(param_1 + 0x48) == (code *)0x0) {
      if ((*(int *)(param_1 + 0x40) < 0x200001) || (iVar2 = FUN_1808e3310(param_1), iVar2 == 0)) {
        uVar4 = (int)*(uint *)(param_1 + 0x3c) >> 0x1f;
        iVar2 = *(int *)(param_1 + 0x38) + 1;
        iVar3 = (*(uint *)(param_1 + 0x3c) ^ uVar4) - uVar4;
        if (iVar3 < iVar2) {
          iVar3 = (int)((float)iVar3 * 1.5);
          if (iVar2 <= iVar3) {
            iVar2 = iVar3;
          }
          if (iVar2 < 8) {
            iVar2 = 8;
          }
          iVar2 = FUN_180747f10(param_1 + 0x30,iVar2);
          if (iVar2 != 0) goto LAB_1808e31af;
        }
        *(uint64_t *)(*(int64_t *)(param_1 + 0x30) + (int64_t)*(int *)(param_1 + 0x38) * 8) =
             in_stack_00000058;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + *param_2;
      }
    }
    else {
      (**(code **)(param_1 + 0x48))(param_2,1,*(uint64_t *)(param_1 + 0x50));
    }
  }
LAB_1808e31af:
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808e31cb(void)
void FUN_1808e31cb(void)

{
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808e3200(int64_t param_1,int param_2,int param_3,int param_4)
void FUN_1808e3200(int64_t param_1,int param_2,int param_3,int param_4)

{
  uint64_t uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  piVar3 = (int *)FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x28,&unknown_var_9024_ptr,0xe7,0);
  piVar3[6] = 0;
  piVar3[7] = 0;
  piVar3[8] = 0;
  piVar3[9] = 0;
  *piVar3 = 0x28;
  *(int16_t *)(piVar3 + 2) = 8;
  *(int8_t *)((int64_t)piVar3 + 10) = 3;
  piVar3[3] = param_2;
  piVar3[4] = param_3;
  piVar3[5] = param_4;
  uVar1 = *(uint64_t *)(param_1 + 0x28);
  FUN_180768360(uVar1);
  uVar5 = (int)*(uint *)(param_1 + 0x3c) >> 0x1f;
  iVar2 = (*(uint *)(param_1 + 0x3c) ^ uVar5) - uVar5;
  iVar4 = *(int *)(param_1 + 0x38) + 1;
  if (iVar2 < iVar4) {
    iVar2 = (int)((float)iVar2 * 1.5);
    if (iVar4 <= iVar2) {
      iVar4 = iVar2;
    }
    if (iVar4 < 8) {
      iVar4 = 8;
    }
    iVar4 = FUN_180747f10(param_1 + 0x30,iVar4);
    if (iVar4 != 0) goto LAB_1808e32de;
  }
  *(int **)(*(int64_t *)(param_1 + 0x30) + (int64_t)*(int *)(param_1 + 0x38) * 8) = piVar3;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
LAB_1808e32de:
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + *piVar3;
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808e3310(int64_t param_1)
void FUN_1808e3310(int64_t param_1)

{
  uint64_t uVar1;
  
  uVar1 = *(uint64_t *)(param_1 + 0x28);
  FUN_180768360(uVar1);
  if (0 < *(int *)(param_1 + 0x38)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),**(uint64_t **)(param_1 + 0x30),
                  &unknown_var_9024_ptr,0x137,1);
  }
  FUN_180744d60(param_1 + 0x30);
  *(int32_t *)(param_1 + 0x40) = 0;
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808e333b(void)
void FUN_1808e333b(void)

{
  int64_t unaff_RBX;
  
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),**(uint64_t **)(unaff_RBX + 0x30),
                &unknown_var_9024_ptr,0x137,1);
}






// 函数: void FUN_1808e337f(void)
void FUN_1808e337f(void)

{
  int64_t unaff_RBX;
  
  FUN_180744d60(unaff_RBX + 0x30);
  *(int32_t *)(unaff_RBX + 0x40) = 0;
                    // WARNING: Subroutine does not return
  FUN_180768400();
}






// 函数: void FUN_1808e33b0(int64_t param_1)
void FUN_1808e33b0(int64_t param_1)

{
  uint64_t uVar1;
  
  uVar1 = *(uint64_t *)(param_1 + 0x28);
  FUN_180768360(uVar1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar1);
}






// 函数: void FUN_1808e3410(int64_t param_1)
void FUN_1808e3410(int64_t param_1)

{
  int *piVar1;
  uint64_t uVar2;
  
  uVar2 = *(uint64_t *)(param_1 + 0x28);
  FUN_180768360(uVar2);
  piVar1 = (int *)(param_1 + 0x58);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(int64_t *)(param_1 + 0x48) == 0)) {
    *(int32_t *)(param_1 + 99) = 0;
    *(int16_t *)(param_1 + 0x67) = 0;
    *(int8_t *)(param_1 + 0x69) = 0;
    FUN_1808e3310(param_1);
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808e3480(int64_t param_1,uint64_t *param_2)
void FUN_1808e3480(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  int *piVar2;
  int iVar3;
  int8_t auStack_68 [32];
  int8_t uStack_48;
  uint64_t uStack_38;
  int32_t uStack_30;
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_68;
  uVar1 = *(uint64_t *)(param_1 + 0x28);
  FUN_180768360(uVar1);
  if (*(int *)(param_1 + 0x38) == 0) {
    uStack_38 = 0;
    uStack_30 = 0xff;
    if (*(int *)(param_2 + 1) < 1) {
      *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
      (*(code *)**(uint64_t **)*param_2)((uint64_t *)*param_2,&uStack_38,0);
    }
  }
  else {
    piVar2 = (int *)**(uint64_t **)(param_1 + 0x30);
    if (*(int *)(param_2 + 1) < 1) {
      *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
      iVar3 = (*(code *)**(uint64_t **)*param_2)((uint64_t *)*param_2,piVar2,0);
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x38);
        if (0 < iVar3) {
          if (iVar3 + -1 < 1) {
            uStack_48 = 1;
            *(int *)(param_1 + 0x38) = iVar3 + -1;
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) - *piVar2;
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),piVar2,&unknown_var_9024_ptr,0x9b);
          }
                    // WARNING: Subroutine does not return
          memmove(*(int64_t *)(param_1 + 0x30),*(int64_t *)(param_1 + 0x30) + 8,
                  (int64_t)(iVar3 + -1) << 3);
        }
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808e34b7(void)
void FUN_1808e34b7(void)

{
  int *piVar1;
  int iVar2;
  uint64_t *in_RAX;
  uint64_t *unaff_RBX;
  int64_t unaff_RDI;
  
  piVar1 = (int *)*in_RAX;
  if (*(int *)(unaff_RBX + 1) < 1) {
    *(int *)(unaff_RBX + 1) = *(int *)(unaff_RBX + 1) + 1;
    iVar2 = (*(code *)**(uint64_t **)*unaff_RBX)((uint64_t *)*unaff_RBX,piVar1,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(unaff_RDI + 0x38);
      if (0 < iVar2) {
        if (iVar2 + -1 < 1) {
          *(int *)(unaff_RDI + 0x38) = iVar2 + -1;
          *(int *)(unaff_RDI + 0x40) = *(int *)(unaff_RDI + 0x40) - *piVar1;
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),piVar1,&unknown_var_9024_ptr,0x9b,1);
        }
                    // WARNING: Subroutine does not return
        memmove(*(int64_t *)(unaff_RDI + 0x30),*(int64_t *)(unaff_RDI + 0x30) + 8,
                (int64_t)(iVar2 + -1) << 3);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_180768400();
}






// 函数: void FUN_1808e3547(void)
void FUN_1808e3547(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}






// 函数: void FUN_1808e3556(void)
void FUN_1808e3556(void)

{
  uint64_t *unaff_RBX;
  uint64_t uStack0000000000000030;
  int32_t uStack0000000000000038;
  
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0xff;
  if (*(int *)(unaff_RBX + 1) < 1) {
    *(int *)(unaff_RBX + 1) = *(int *)(unaff_RBX + 1) + 1;
    (*(code *)**(uint64_t **)*unaff_RBX)((uint64_t *)*unaff_RBX,&stack0x00000030,0);
  }
                    // WARNING: Subroutine does not return
  FUN_180768400();
}






// 函数: void FUN_1808e35b0(uint64_t *param_1,int8_t *param_2)
void FUN_1808e35b0(uint64_t *param_1,int8_t *param_2)

{
  uint64_t uVar1;
  int8_t uVar2;
  
  uVar1 = param_1[5];
  FUN_180768360(uVar1);
  if (*(int *)(param_1 + 7) == 0) {
    *param_2 = 0xff;
  }
  else {
    uVar2 = (**(code **)*param_1)(param_1);
    *param_2 = uVar2;
    param_2[1] = *(int8_t *)(*(int64_t *)param_1[6] + 9);
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar1);
}



uint64_t FUN_1808e3620(int64_t param_1,int64_t *param_2)

{
  uint64_t uVar1;
  
  if (*(int64_t *)(param_1 + 0x28) != 0) {
    return 0x1c;
  }
  FUN_1807682e0((int64_t *)(param_1 + 0x28),0);
  if (param_2 != (int64_t *)0x0) {
    *(int64_t **)(param_1 + 0x20) = param_2;
    uVar1 = (**(code **)(*param_2 + 8))(param_2,param_1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



uint64_t FUN_1808e3680(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  if (*(char *)(param_2 + 8) != '\b') {
    return 0x1c;
  }
  if (*(char *)(param_2 + 10) == '\x03') {
    if (*(char *)(param_2 + 9) == '\0') {
      if ((*(int *)(param_2 + 0xc) == 0) && (*(int *)(param_2 + 0x10) < 7)) {
        *(bool *)((int64_t)*(int *)(param_2 + 0x10) + 99 + param_1) = *(int *)(param_2 + 0x14) != 0
        ;
        return 0;
      }
    }
    else if ((*(code **)(param_1 + 0x48) != (code *)0x0) &&
            (uVar1 = (**(code **)(param_1 + 0x48))(param_2,0,*(uint64_t *)(param_1 + 0x50)),
            (int)uVar1 != 0)) {
      return uVar1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808e36f0(uint64_t param_1,int64_t *param_2)

{
  int iVar1;
  uint64_t uVar2;
  int *piVar3;
  int iVar4;
  void *puStack_68;
  uint64_t uStack_60;
  void *puStack_58;
  void **ppuStack_50;
  void *puStack_48;
  void **ppuStack_40;
  void *puStack_38;
  int *piStack_30;
  int64_t lStack_28;
  int64_t lStack_20;
  
  uStack_60 = 0;
  puStack_68 = &unknown_var_9424_ptr;
  puStack_58 = &unknown_var_9416_ptr;
  ppuStack_50 = &puStack_68;
  uVar2 = FUN_180899950(&puStack_58,param_1);
  if ((int)uVar2 == 0) {
    puStack_58 = &unknown_var_9416_ptr;
    iVar1 = (int)uStack_60;
    iVar4 = iVar1 + 0xc;
    piVar3 = (int *)FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar4,&unknown_var_9024_ptr,0x28,
                                  0);
    if (piVar3 == (int *)0x0) {
      uVar2 = 0x26;
    }
    else {
      *piVar3 = iVar4;
      *(int16_t *)(piVar3 + 2) = 0x208;
      *(int8_t *)((int64_t)piVar3 + 10) = 3;
      puStack_38 = &unknown_var_2888_ptr;
      piStack_30 = piVar3 + 3;
      lStack_28 = (int64_t)iVar1;
      ppuStack_40 = &puStack_38;
      lStack_20 = 0;
      puStack_48 = &unknown_var_9416_ptr;
      uVar2 = FUN_180899950(&puStack_48,param_1);
      if ((int)uVar2 == 0) {
        if (lStack_20 == lStack_28) {
          *param_2 = (int64_t)piVar3;
          uVar2 = 0;
        }
        else {
          uVar2 = 0x1c;
        }
      }
    }
  }
  return uVar2;
}



uint64_t FUN_1808e374d(int64_t param_1)

{
  int *piVar1;
  uint64_t uVar2;
  int64_t *unaff_RDI;
  int in_stack_00000038;
  uint64_t in_stack_00000050;
  
  piVar1 = (int *)FUN_180742050(*(uint64_t *)(param_1 + 0x1a0),in_stack_00000038 + 0xc,
                                &unknown_var_9024_ptr);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x26;
  }
  else {
    *piVar1 = in_stack_00000038 + 0xc;
    *(int16_t *)(piVar1 + 2) = 0x208;
    *(int8_t *)((int64_t)piVar1 + 10) = 3;
    uVar2 = FUN_180899950(&stack0x00000050);
    if ((int)uVar2 == 0) {
      if (in_stack_00000038 == 0) {
        *unaff_RDI = (int64_t)piVar1;
        uVar2 = 0;
      }
      else {
        uVar2 = 0x1c;
      }
    }
  }
  return uVar2;
}






// 函数: void FUN_1808e381d(void)
void FUN_1808e381d(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808e3830(uint64_t param_1,int64_t *param_2)

{
  int iVar1;
  uint64_t uVar2;
  int *piVar3;
  int iVar4;
  void *puStack_68;
  uint64_t uStack_60;
  void *puStack_58;
  void **ppuStack_50;
  void *puStack_48;
  void **ppuStack_40;
  void *puStack_38;
  int *piStack_30;
  int64_t lStack_28;
  int64_t lStack_20;
  
  uStack_60 = 0;
  puStack_68 = &unknown_var_9424_ptr;
  puStack_58 = &unknown_var_9416_ptr;
  ppuStack_50 = &puStack_68;
  uVar2 = FUN_180899fe0(&puStack_58,param_1);
  if ((int)uVar2 == 0) {
    puStack_58 = &unknown_var_9416_ptr;
    iVar1 = (int)uStack_60;
    iVar4 = iVar1 + 0xc;
    piVar3 = (int *)FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar4,&unknown_var_9024_ptr,0x28,
                                  0);
    if (piVar3 == (int *)0x0) {
      uVar2 = 0x26;
    }
    else {
      *piVar3 = iVar4;
      *(int16_t *)(piVar3 + 2) = 0x108;
      *(int8_t *)((int64_t)piVar3 + 10) = 3;
      puStack_38 = &unknown_var_2888_ptr;
      piStack_30 = piVar3 + 3;
      lStack_28 = (int64_t)iVar1;
      ppuStack_40 = &puStack_38;
      lStack_20 = 0;
      puStack_48 = &unknown_var_9416_ptr;
      uVar2 = FUN_180899fe0(&puStack_48,param_1);
      if ((int)uVar2 == 0) {
        if (lStack_20 == lStack_28) {
          *param_2 = (int64_t)piVar3;
          uVar2 = 0;
        }
        else {
          uVar2 = 0x1c;
        }
      }
    }
  }
  return uVar2;
}



uint64_t FUN_1808e388d(int64_t param_1)

{
  int *piVar1;
  uint64_t uVar2;
  int64_t *unaff_RDI;
  int in_stack_00000038;
  uint64_t in_stack_00000050;
  
  piVar1 = (int *)FUN_180742050(*(uint64_t *)(param_1 + 0x1a0),in_stack_00000038 + 0xc,
                                &unknown_var_9024_ptr);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x26;
  }
  else {
    *piVar1 = in_stack_00000038 + 0xc;
    *(int16_t *)(piVar1 + 2) = 0x108;
    *(int8_t *)((int64_t)piVar1 + 10) = 3;
    uVar2 = FUN_180899fe0(&stack0x00000050);
    if ((int)uVar2 == 0) {
      if (in_stack_00000038 == 0) {
        *unaff_RDI = (int64_t)piVar1;
        uVar2 = 0;
      }
      else {
        uVar2 = 0x1c;
      }
    }
  }
  return uVar2;
}






// 函数: void FUN_1808e395d(void)
void FUN_1808e395d(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808e3970(uint64_t param_1,int64_t *param_2)

{
  int iVar1;
  uint64_t uVar2;
  int *piVar3;
  int iVar4;
  void *puStack_68;
  uint64_t uStack_60;
  void *puStack_58;
  void **ppuStack_50;
  void *puStack_48;
  void **ppuStack_40;
  void *puStack_38;
  int *piStack_30;
  int64_t lStack_28;
  int64_t lStack_20;
  
  uStack_60 = 0;
  puStack_68 = &unknown_var_9424_ptr;
  puStack_58 = &unknown_var_9416_ptr;
  ppuStack_50 = &puStack_68;
  uVar2 = FUN_18089a690(&puStack_58,param_1);
  if ((int)uVar2 == 0) {
    puStack_58 = &unknown_var_9416_ptr;
    iVar1 = (int)uStack_60;
    iVar4 = iVar1 + 0xc;
    piVar3 = (int *)FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar4,&unknown_var_9024_ptr,0x28,
                                  0);
    if (piVar3 == (int *)0x0) {
      uVar2 = 0x26;
    }
    else {
      *piVar3 = iVar4;
      *(int16_t *)(piVar3 + 2) = 0x608;
      *(int8_t *)((int64_t)piVar3 + 10) = 3;
      puStack_38 = &unknown_var_2888_ptr;
      piStack_30 = piVar3 + 3;
      lStack_28 = (int64_t)iVar1;
      ppuStack_40 = &puStack_38;
      lStack_20 = 0;
      puStack_48 = &unknown_var_9416_ptr;
      uVar2 = FUN_18089a690(&puStack_48,param_1);
      if ((int)uVar2 == 0) {
        if (lStack_20 == lStack_28) {
          *param_2 = (int64_t)piVar3;
          uVar2 = 0;
        }
        else {
          uVar2 = 0x1c;
        }
      }
    }
  }
  return uVar2;
}



uint64_t FUN_1808e39cd(int64_t param_1)

{
  int *piVar1;
  uint64_t uVar2;
  int64_t *unaff_RDI;
  int in_stack_00000038;
  uint64_t in_stack_00000050;
  
  piVar1 = (int *)FUN_180742050(*(uint64_t *)(param_1 + 0x1a0),in_stack_00000038 + 0xc,
                                &unknown_var_9024_ptr);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x26;
  }
  else {
    *piVar1 = in_stack_00000038 + 0xc;
    *(int16_t *)(piVar1 + 2) = 0x608;
    *(int8_t *)((int64_t)piVar1 + 10) = 3;
    uVar2 = FUN_18089a690(&stack0x00000050);
    if ((int)uVar2 == 0) {
      if (in_stack_00000038 == 0) {
        *unaff_RDI = (int64_t)piVar1;
        uVar2 = 0;
      }
      else {
        uVar2 = 0x1c;
      }
    }
  }
  return uVar2;
}






// 函数: void FUN_1808e3a9d(void)
void FUN_1808e3a9d(void)

{
  return;
}






// 函数: void FUN_1808e3ab0(uint64_t *param_1,int param_2)
void FUN_1808e3ab0(uint64_t *param_1,int param_2)

{
  if (0 < param_2) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
                    // WARNING: Subroutine does not return
    memset(param_1 + 9,0,0x108);
  }
  return;
}






// 函数: void FUN_1808e3abd(uint64_t *param_1)
void FUN_1808e3abd(uint64_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
                    // WARNING: Subroutine does not return
  memset(param_1 + 9,0,0x108);
}






// 函数: void FUN_1808e3b79(void)
void FUN_1808e3b79(void)

{
  return;
}






