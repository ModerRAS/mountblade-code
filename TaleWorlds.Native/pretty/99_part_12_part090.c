#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part090.c - 6 个函数

// 函数: void FUN_1808a5a85(void)
void FUN_1808a5a85(void)

{
  return;
}



uint64_t FUN_1808a5a90(uint64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint auStackX_8 [2];
  uint auStackX_20 [2];
  
  auStackX_20[0] = 0;
  uVar3 = FUN_1808afe30(*param_1,auStackX_20);
  uVar2 = auStackX_20[0];
  if ((int)uVar3 == 0) {
    uVar7 = auStackX_20[0] >> 1;
    uVar5 = auStackX_20[0] & 1;
    uVar3 = FUN_1808af810(param_2,uVar7);
    if ((int)uVar3 == 0) {
      iVar6 = 0;
      auStackX_8[0] = 0;
      if (uVar2 >> 1 != 0) {
        do {
          uVar3 = FUN_1808dde10(param_1,auStackX_8[0]);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          if (*(int *)(param_1[1] + 0x18) == 0) {
            uVar3 = *param_1;
            lVar1 = *param_2 + (int64_t)iVar6 * 0x18;
            uVar4 = SystemErrorHandler(uVar3,lVar1,4);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar4 = SystemErrorHandler(uVar3,lVar1 + 4,2);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar4 = SystemErrorHandler(uVar3,lVar1 + 6,2);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar4 = SystemErrorHandler(uVar3,lVar1 + 8,8);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar4 = SystemErrorHandler(uVar3,lVar1 + 0x10,4);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar3 = SystemErrorHandler(uVar3,lVar1 + 0x14,4);
          }
          else {
            uVar3 = 0x1c;
          }
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_1808de0e0(param_1,auStackX_8);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          iVar6 = iVar6 + 1;
          auStackX_8[0] = auStackX_8[0] & -uVar5;
        } while (iVar6 < (int)uVar7);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



uint64_t FUN_1808a5abb(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int unaff_EBX;
  int64_t *unaff_R12;
  uint64_t *unaff_R14;
  uint in_stack_00000068;
  
  uVar2 = FUN_1808af810();
  if ((int)uVar2 == 0) {
    if (in_stack_00000068 >> 1 != 0) {
      do {
        uVar2 = FUN_1808dde10();
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        if (*(int *)(unaff_R14[1] + 0x18) == 0) {
          uVar2 = *unaff_R14;
          lVar1 = *unaff_R12 + (int64_t)unaff_EBX * 0x18;
          uVar3 = SystemErrorHandler(uVar2,lVar1,4);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = SystemErrorHandler(uVar2,lVar1 + 4,2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = SystemErrorHandler(uVar2,lVar1 + 6,2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = SystemErrorHandler(uVar2,lVar1 + 8,8);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = SystemErrorHandler(uVar2,lVar1 + 0x10,4);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar2 = SystemErrorHandler(uVar2,lVar1 + 0x14,4);
        }
        else {
          uVar2 = 0x1c;
        }
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_1808de0e0();
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        unaff_EBX = unaff_EBX + 1;
      } while (unaff_EBX < (int)(in_stack_00000068 >> 1));
    }
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_1808a5ae5(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint unaff_EBX;
  int unaff_EBP;
  int64_t *unaff_R12;
  uint64_t *unaff_R14;
  int unaff_R15D;
  uint uStack0000000000000050;
  
  uStack0000000000000050 = unaff_EBX;
  if (unaff_R15D != 0) {
    do {
      uVar2 = FUN_1808dde10();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_R14[1] + 0x18) == 0) {
        uVar2 = *unaff_R14;
        lVar1 = *unaff_R12 + (int64_t)(int)unaff_EBX * 0x18;
        uVar3 = SystemErrorHandler(uVar2,lVar1,4);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = SystemErrorHandler(uVar2,lVar1 + 4,2);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = SystemErrorHandler(uVar2,lVar1 + 6,2);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = SystemErrorHandler(uVar2,lVar1 + 8,8);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = SystemErrorHandler(uVar2,lVar1 + 0x10,4);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar2 = SystemErrorHandler(uVar2,lVar1 + 0x14,4);
      }
      else {
        uVar2 = 0x1c;
      }
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = FUN_1808de0e0();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      unaff_EBX = unaff_EBX + 1;
      uStack0000000000000050 = uStack0000000000000050 & -unaff_EBP;
    } while ((int)unaff_EBX < unaff_R15D);
  }
  return 0;
}






// 函数: void FUN_1808a5be7(void)
void FUN_1808a5be7(void)

{
  return;
}






// 函数: void FUN_1808a5bf1(void)
void FUN_1808a5bf1(void)

{
  return;
}



uint64_t FUN_1808a5c00(int64_t *param_1,uint64_t *param_2,uint param_3)

{
  int64_t lVar1;
  uint *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  uint auStackX_8 [2];
  uint auStackX_10 [2];
  uint auStackX_18 [2];
  
  uVar5 = (int)param_2[1] * 2 | param_3;
  if (uVar5 < 0x8000) {
    auStackX_18[0] = CONCAT22(auStackX_18[0]._2_2_,(short)uVar5);
    puVar2 = auStackX_18;
    uVar4 = 2;
  }
  else {
    puVar2 = auStackX_10;
    uVar4 = 4;
    auStackX_10[0] = (uVar5 & 0xffffc000 | 0x4000) * 2 | uVar5 & 0x7fff;
  }
  uVar4 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),puVar2,uVar4);
  if ((int)uVar4 == 0) {
    auStackX_8[0] = 0;
    for (uVar3 = *param_2;
        (*param_2 <= uVar3 && (uVar3 < *param_2 + (int64_t)(int)param_2[1] * 0x18));
        uVar3 = uVar3 + 0x18) {
      uVar4 = FUN_1808ddf00(param_1);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (*(int *)(param_1[1] + 0x18) != 0) {
        return 0x1c;
      }
      lVar1 = *param_1;
      uVar4 = SystemCleanupProcessor(lVar1,uVar3);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      auStackX_18[0] = *(uint *)(uVar3 + 0x10);
      uVar4 = (**(code **)**(uint64_t **)(lVar1 + 8))(*(uint64_t **)(lVar1 + 8),auStackX_18,4);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      auStackX_10[0] = *(uint *)(uVar3 + 0x14);
      uVar4 = (**(code **)**(uint64_t **)(lVar1 + 8))(*(uint64_t **)(lVar1 + 8),auStackX_10,4);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = FUN_1808de160(param_1,auStackX_8);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      auStackX_8[0] = auStackX_8[0] & -param_3;
    }
    uVar4 = 0;
  }
  return uVar4;
}



uint64_t FUN_1808a5c74(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t *unaff_RDI;
  uint64_t *unaff_R14;
  int unaff_R15D;
  uint uStack0000000000000050;
  int32_t in_stack_00000058;
  int32_t in_stack_00000060;
  
  uStack0000000000000050 = 0;
  uVar3 = *unaff_R14;
  while( true ) {
    if ((uVar3 < *unaff_R14) || (*unaff_R14 + (int64_t)(int)unaff_R14[1] * 0x18 <= uVar3)) {
      return 0;
    }
    uVar2 = FUN_1808ddf00();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(int *)(unaff_RDI[1] + 0x18) != 0) {
      return 0x1c;
    }
    lVar1 = *unaff_RDI;
    uVar2 = SystemCleanupProcessor(lVar1,uVar3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    in_stack_00000060 = *(int32_t *)(uVar3 + 0x10);
    uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                      (*(uint64_t **)(lVar1 + 8),&stack0x00000060,4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    in_stack_00000058 = *(int32_t *)(uVar3 + 0x14);
    uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                      (*(uint64_t **)(lVar1 + 8),&stack0x00000058,4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_1808de160();
    if ((int)uVar2 != 0) break;
    uStack0000000000000050 = uStack0000000000000050 & -unaff_R15D;
    uVar3 = uVar3 + 0x18;
  }
  return uVar2;
}






// 函数: void FUN_1808a5d56(void)
void FUN_1808a5d56(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a5d60(uint64_t *param_1,uint64_t *param_2)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint auStackX_8 [2];
  uint auStackX_20 [2];
  
  uVar3 = 0;
  auStackX_20[0] = 0;
  uVar2 = FUN_1808afe30(*param_1,auStackX_20);
  uVar7 = auStackX_20[0];
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar4 = (int)*(uint *)((int64_t)param_2 + 0xc) >> 0x1f;
  uVar6 = auStackX_20[0] >> 1;
  uVar5 = auStackX_20[0] & 1;
  if ((int)((*(uint *)((int64_t)param_2 + 0xc) ^ uVar4) - uVar4) < (int)uVar6) {
    if ((int)uVar6 < (int)param_2[1]) {
      uVar2 = 0x1c;
      goto LAB_1808a5e95;
    }
    uVar2 = uVar3;
    if (auStackX_20[0] >> 1 != 0) {
      if ((0x3ffffffe < uVar6 * 0x10 - 1) ||
         (uVar2 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar6 * 0x10,&processed_var_8432_ptr,
                                0xf4,0,0,1), uVar2 == 0)) {
        uVar2 = 0x26;
        goto LAB_1808a5e95;
      }
      if ((int)param_2[1] != 0) {
                    // WARNING: Subroutine does not return
        memcpy(uVar2,*param_2,(int64_t)(int)param_2[1] << 4);
      }
    }
    if ((0 < *(int *)((int64_t)param_2 + 0xc)) && (*param_2 != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_2,&processed_var_8432_ptr,0x100,1);
    }
    *param_2 = uVar2;
    *(uint *)((int64_t)param_2 + 0xc) = uVar6;
  }
  iVar1 = (int)param_2[1];
  if (iVar1 < (int)uVar6) {
                    // WARNING: Subroutine does not return
    memset((int64_t)iVar1 * 0x10 + *param_2,0,(int64_t)(int)(uVar6 - iVar1) << 4);
  }
  *(uint *)(param_2 + 1) = uVar6;
  uVar2 = uVar3;
LAB_1808a5e95:
  if ((int)uVar2 == 0) {
    auStackX_8[0] = 0;
    uVar2 = uVar3;
    if (uVar7 >> 1 != 0) {
      do {
        uVar3 = FUN_1808dde10(param_1,uVar3);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = FUN_180899360(param_1,(int64_t)(int)uVar2 * 0x10 + *param_2);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = FUN_1808de0e0(param_1,auStackX_8);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar7 = (int)uVar2 + 1;
        uVar2 = (uint64_t)uVar7;
        auStackX_8[0] = auStackX_8[0] & -uVar5;
        uVar3 = (uint64_t)auStackX_8[0];
      } while ((int)uVar7 < (int)uVar6);
    }
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a5d8f(void)

{
  int iVar1;
  uint in_EAX;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t unaff_RBX;
  uint uVar4;
  uint uVar5;
  uint64_t *unaff_R14;
  uint in_stack_00000088;
  
  uVar4 = in_stack_00000088 >> 1;
  if ((int)((in_EAX ^ (int)in_EAX >> 0x1f) - ((int)in_EAX >> 0x1f)) < (int)uVar4) {
    if ((int)uVar4 < (int)unaff_R14[1]) {
      uVar2 = (uint64_t)((int)unaff_RBX + 0x1c);
      goto LAB_1808a5e95;
    }
    uVar2 = unaff_RBX;
    if (in_stack_00000088 >> 1 != 0) {
      if ((0x3ffffffe < uVar4 * 0x10 - 1) ||
         (uVar2 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar4 * 0x10,&processed_var_8432_ptr,
                                0xf4), uVar2 == 0)) {
        uVar2 = 0x26;
        goto LAB_1808a5e95;
      }
      if ((int)unaff_R14[1] != 0) {
                    // WARNING: Subroutine does not return
        memcpy(uVar2,*unaff_R14,(int64_t)(int)unaff_R14[1] << 4);
      }
    }
    if (((int)unaff_RBX < *(int *)((int64_t)unaff_R14 + 0xc)) && (*unaff_R14 != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_R14,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_R14 = uVar2;
    *(uint *)((int64_t)unaff_R14 + 0xc) = uVar4;
  }
  iVar1 = (int)unaff_R14[1];
  if (iVar1 < (int)uVar4) {
                    // WARNING: Subroutine does not return
    memset((int64_t)iVar1 * 0x10 + *unaff_R14,0,(int64_t)(int)(uVar4 - iVar1) << 4);
  }
  *(uint *)(unaff_R14 + 1) = uVar4;
  uVar2 = unaff_RBX & 0xffffffff;
LAB_1808a5e95:
  if ((int)uVar2 == 0) {
    uVar2 = unaff_RBX & 0xffffffff;
    if (in_stack_00000088 >> 1 != 0) {
      do {
        uVar3 = FUN_1808dde10();
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = FUN_180899360();
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = FUN_1808de0e0();
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar5 = (int)uVar2 + 1;
        uVar2 = (uint64_t)uVar5;
      } while ((int)uVar5 < (int)uVar4);
    }
    uVar2 = 0;
  }
  return uVar2;
}






// 函数: void FUN_1808a5efb(void)
void FUN_1808a5efb(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0001808a5e99)
// WARNING: Removing unreachable block (ram,0x0001808a5ea5)
// WARNING: Removing unreachable block (ram,0x0001808a5eb3)
// WARNING: Removing unreachable block (ram,0x0001808a5ec9)
// WARNING: Removing unreachable block (ram,0x0001808a5eda)
// WARNING: Removing unreachable block (ram,0x0001808a5eea)

uint64_t FUN_1808a5f05(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a5f10(uint64_t *param_1,uint64_t *param_2)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint auStackX_8 [2];
  uint auStackX_20 [2];
  
  uVar4 = 0;
  auStackX_20[0] = 0;
  uVar3 = FUN_1808afe30(*param_1,auStackX_20);
  uVar8 = auStackX_20[0];
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar5 = (int)*(uint *)((int64_t)param_2 + 0xc) >> 0x1f;
  uVar7 = auStackX_20[0] >> 1;
  uVar9 = auStackX_20[0] & 1;
  if ((int)((*(uint *)((int64_t)param_2 + 0xc) ^ uVar5) - uVar5) < (int)uVar7) {
    if ((int)uVar7 < (int)param_2[1]) {
      uVar3 = 0x1c;
      goto LAB_1808a6048;
    }
    uVar3 = uVar4;
    if (auStackX_20[0] >> 1 != 0) {
      if ((0x3ffffffe < uVar7 * 0x10 - 1) ||
         (uVar3 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar7 * 0x10,&processed_var_8432_ptr,
                                0xf4,0,0,1), uVar3 == 0)) {
        uVar3 = 0x26;
        goto LAB_1808a6048;
      }
      if ((int)param_2[1] != 0) {
                    // WARNING: Subroutine does not return
        memcpy(uVar3,*param_2,(int64_t)(int)param_2[1] << 4);
      }
    }
    if ((0 < *(int *)((int64_t)param_2 + 0xc)) && (*param_2 != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_2,&processed_var_8432_ptr,0x100,1);
    }
    *param_2 = uVar3;
    *(uint *)((int64_t)param_2 + 0xc) = uVar7;
  }
  iVar1 = (int)param_2[1];
  if (iVar1 < (int)uVar7) {
                    // WARNING: Subroutine does not return
    memset((int64_t)iVar1 * 0x10 + *param_2,0,(int64_t)(int)(uVar7 - iVar1) << 4);
  }
  *(uint *)(param_2 + 1) = uVar7;
  uVar3 = uVar4;
LAB_1808a6048:
  if ((int)uVar3 == 0) {
    auStackX_8[0] = 0;
    uVar3 = uVar4;
    if (uVar8 >> 1 != 0) {
      do {
        uVar4 = FUN_1808dde10(param_1,uVar4);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        if (*(int *)(param_1[1] + 0x18) == 0) {
          uVar2 = *param_1;
          lVar6 = (int64_t)(int)uVar3 * 0x10 + *param_2;
          uVar4 = SystemErrorHandler(uVar2,lVar6,4);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          uVar4 = SystemErrorHandler(uVar2,lVar6 + 4,2);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          uVar4 = SystemErrorHandler(uVar2,lVar6 + 6,2);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          uVar4 = SystemErrorHandler(uVar2,lVar6 + 8,8);
        }
        else {
          uVar4 = 0x1c;
        }
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar4 = FUN_1808de0e0(param_1,auStackX_8);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar8 = (int)uVar3 + 1;
        uVar3 = (uint64_t)uVar8;
        auStackX_8[0] = auStackX_8[0] & -uVar9;
        uVar4 = (uint64_t)auStackX_8[0];
      } while ((int)uVar8 < (int)uVar7);
    }
    uVar3 = 0;
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a5f3f(void)

{
  int iVar1;
  uint64_t uVar2;
  uint in_EAX;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t unaff_RBX;
  int64_t lVar5;
  uint uVar6;
  uint uVar7;
  uint64_t *unaff_R14;
  uint64_t *unaff_R15;
  uint in_stack_00000088;
  
  uVar6 = in_stack_00000088 >> 1;
  if ((int)((in_EAX ^ (int)in_EAX >> 0x1f) - ((int)in_EAX >> 0x1f)) < (int)uVar6) {
    if ((int)uVar6 < (int)unaff_R15[1]) {
      uVar3 = (uint64_t)((int)unaff_RBX + 0x1c);
      goto LAB_1808a6048;
    }
    uVar3 = unaff_RBX;
    if (in_stack_00000088 >> 1 != 0) {
      if ((0x3ffffffe < uVar6 * 0x10 - 1) ||
         (uVar3 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar6 * 0x10,&processed_var_8432_ptr,
                                0xf4), uVar3 == 0)) {
        uVar3 = 0x26;
        goto LAB_1808a6048;
      }
      if ((int)unaff_R15[1] != 0) {
                    // WARNING: Subroutine does not return
        memcpy(uVar3,*unaff_R15,(int64_t)(int)unaff_R15[1] << 4);
      }
    }
    if (((int)unaff_RBX < *(int *)((int64_t)unaff_R15 + 0xc)) && (*unaff_R15 != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_R15,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_R15 = uVar3;
    *(uint *)((int64_t)unaff_R15 + 0xc) = uVar6;
  }
  iVar1 = (int)unaff_R15[1];
  if (iVar1 < (int)uVar6) {
                    // WARNING: Subroutine does not return
    memset((int64_t)iVar1 * 0x10 + *unaff_R15,0,(int64_t)(int)(uVar6 - iVar1) << 4);
  }
  *(uint *)(unaff_R15 + 1) = uVar6;
  uVar3 = unaff_RBX & 0xffffffff;
LAB_1808a6048:
  if ((int)uVar3 == 0) {
    uVar3 = unaff_RBX & 0xffffffff;
    if (in_stack_00000088 >> 1 != 0) {
      do {
        uVar4 = FUN_1808dde10();
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        if (*(int *)(unaff_R14[1] + 0x18) == 0) {
          uVar2 = *unaff_R14;
          lVar5 = (int64_t)(int)uVar3 * 0x10 + *unaff_R15;
          uVar4 = SystemErrorHandler(uVar2,lVar5,4);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          uVar4 = SystemErrorHandler(uVar2,lVar5 + 4,2);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          uVar4 = SystemErrorHandler(uVar2,lVar5 + 6,2);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          uVar4 = SystemErrorHandler(uVar2,lVar5 + 8,8);
        }
        else {
          uVar4 = 0x1c;
        }
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar4 = FUN_1808de0e0();
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar7 = (int)uVar3 + 1;
        uVar3 = (uint64_t)uVar7;
      } while ((int)uVar7 < (int)uVar6);
    }
    uVar3 = 0;
  }
  return uVar3;
}



uint64_t FUN_1808a6053(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint unaff_EBX;
  int64_t lVar3;
  int unaff_EBP;
  uint unaff_R12D;
  uint64_t *unaff_R14;
  int64_t *unaff_R15;
  uint uStack0000000000000070;
  
  uStack0000000000000070 = unaff_EBX;
  if (unaff_EBP != 0) {
    do {
      uVar1 = FUN_1808dde10();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (*(int *)(unaff_R14[1] + 0x18) == 0) {
        uVar1 = *unaff_R14;
        lVar3 = (int64_t)(int)unaff_EBX * 0x10 + *unaff_R15;
        uVar2 = SystemErrorHandler(uVar1,lVar3,4);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = SystemErrorHandler(uVar1,lVar3 + 4,2);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = SystemErrorHandler(uVar1,lVar3 + 6,2);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar1 = SystemErrorHandler(uVar1,lVar3 + 8,8);
      }
      else {
        uVar1 = 0x1c;
      }
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = FUN_1808de0e0();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      unaff_EBX = unaff_EBX + 1;
      uStack0000000000000070 = uStack0000000000000070 & unaff_R12D;
    } while ((int)unaff_EBX < unaff_EBP);
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0001808a6050)
// WARNING: Removing unreachable block (ram,0x0001808a6070)
// WARNING: Removing unreachable block (ram,0x0001808a6082)
// WARNING: Removing unreachable block (ram,0x0001808a609a)
// WARNING: Removing unreachable block (ram,0x0001808a60bc)
// WARNING: Removing unreachable block (ram,0x0001808a60d0)
// WARNING: Removing unreachable block (ram,0x0001808a60e4)
// WARNING: Removing unreachable block (ram,0x0001808a608c)
// WARNING: Removing unreachable block (ram,0x0001808a60f4)
// WARNING: Removing unreachable block (ram,0x0001808a60f8)
// WARNING: Removing unreachable block (ram,0x0001808a6109)
// WARNING: Removing unreachable block (ram,0x0001808a611e)
// WARNING: Removing unreachable block (ram,0x0001808a6120)

uint64_t FUN_1808a6093(void)

{
  return 0x26;
}



uint64_t FUN_1808a609a(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int unaff_EBP;
  int unaff_ESI;
  uint64_t *unaff_R14;
  int64_t *unaff_R15;
  
  do {
    uVar2 = *unaff_R14;
    lVar3 = (int64_t)unaff_ESI * 0x10 + *unaff_R15;
    uVar1 = SystemErrorHandler(uVar2,lVar3,4);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = SystemErrorHandler(uVar2,lVar3 + 4,2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = SystemErrorHandler(uVar2,lVar3 + 6,2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar2 = SystemErrorHandler(uVar2,lVar3 + 8,8);
    while( true ) {
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = FUN_1808de0e0();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      unaff_ESI = unaff_ESI + 1;
      if (unaff_EBP <= unaff_ESI) {
        return 0;
      }
      uVar2 = FUN_1808dde10();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_R14[1] + 0x18) == 0) break;
      uVar2 = 0x1c;
    }
  } while( true );
}






// 函数: void FUN_1808a6128(void)
void FUN_1808a6128(void)

{
  return;
}






