#define ConditionChecker ConditionChecker  // 条件检查器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part059.c - 6 个函数

// 函数: void FUN_1808cf489(int64_t *param_1)
void FUN_1808cf489(int64_t *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint *puVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int64_t *unaff_R14;
  char cStack0000000000000070;
  int32_t uStack0000000000000074;
  int16_t in_stack_00000078;
  int8_t in_stack_00000080;
  uint64_t in_stack_000000b0;
  int32_t in_stack_000000c0;
  int32_t in_stack_000000c8;
  
  iVar2 = (**(code **)(*param_1 + 0x10))();
  if (iVar2 != 0) {
    plVar5 = (int64_t *)(**(code **)*unaff_R14)();
    (**(code **)(*plVar5 + 0x30))(plVar5,(int64_t)&stack0x00000070 + 4);
                    // WARNING: Subroutine does not return
    SystemDataValidator(&stack0x00000088,0x27,&processed_var_8960_ptr,uStack0000000000000074,in_stack_00000078);
  }
  if (cStack0000000000000070 == '\0') goto LAB_1808cf945;
  plVar5 = unaff_R14 + 0x1f;
  if (*plVar5 == 0) {
    iVar2 = (**(code **)(*(int64_t *)unaff_R14[0x20] + 0x20))
                      ((int64_t *)unaff_R14[0x20],unaff_R14[0x21],unaff_R14 + 0x2a);
    if (iVar2 != 0) goto LAB_1808cf945;
    if (unaff_R14[0x2a] != 0) {
      lVar6 = (**(code **)(*unaff_R14 + 0x30))();
      iVar2 = FUN_18085ffc0(*(uint64_t *)(lVar6 + 0x18),0x2000,unaff_R14[0x2a]);
      if (iVar2 != 0) goto LAB_1808cf945;
      *(uint *)((int64_t)unaff_R14 + 0x134) = *(uint *)((int64_t)unaff_R14 + 0x134) | 8;
    }
    lVar7 = (**(code **)(*unaff_R14 + 0x30))();
    lVar6 = *(int64_t *)unaff_R14[0x20];
    func_0x00018085f3b0(*(uint64_t *)(lVar7 + 0x18));
    iVar2 = (**(code **)(lVar6 + 0x28))
                      (unaff_R14[0x20],unaff_R14[0x21],unaff_R14[0x14],unaff_R14[0x1d],1);
    if (iVar2 != 0) goto LAB_1808cf945;
  }
  iVar2 = (**(code **)(*(int64_t *)unaff_R14[0x20] + 0x10))
                    ((int64_t *)unaff_R14[0x20],unaff_R14[0x21],&stack0x00000070);
  if ((iVar2 == 0) && (cStack0000000000000070 != '\0')) {
    if ((char)unaff_R14[0x18] == '\0') {
      iVar2 = FUN_1808c9e60();
      if (iVar2 != 0) goto LAB_1808cf945;
    }
    else {
      uVar3 = FUN_18073d6e0(*plVar5,0x40000010);
      if (((((0x1e < uVar3) || ((0x40000009U >> (uVar3 & 0x1f) & 1) == 0)) ||
           (uVar3 = FUN_18073d010(*plVar5,unaff_R14 + 0x28,0), 0x1e < uVar3)) ||
          (((0x40000009U >> (uVar3 & 0x1f) & 1) == 0 ||
           (uVar3 = FUN_18073d150(*plVar5,0), 0x1e < uVar3)))) ||
         ((0x40000009U >> (uVar3 & 0x1f) & 1) == 0)) goto LAB_1808cf945;
    }
    iVar2 = 0;
    iVar12 = 0;
    do {
      uVar3 = FUN_18073da60(*plVar5,iVar12,0);
      if ((0x1e < uVar3) || ((0x40000009U >> (uVar3 & 0x1f) & 1) == 0)) goto LAB_1808cf945;
      iVar12 = iVar12 + 1;
    } while (iVar12 < 4);
    puVar8 = (uint *)FUN_18084da10();
    uVar3 = *(uint *)(unaff_R14 + 0x25);
    if ((uVar3 == *puVar8) && (*(float *)((int64_t)unaff_R14 + 300) == 0.0)) {
      uVar3 = FUN_18073fd60(*plVar5,(int)unaff_R14[0x26]);
      if ((0x1e < uVar3) || ((0x40000009U >> (uVar3 & 0x1f) & 1) == 0)) goto LAB_1808cf945;
    }
    else {
      if (0.0 < *(float *)(unaff_R14 + 0x2b)) {
        iVar12 = -1;
        uVar11 = (uint)*(float *)(unaff_R14 + 0x2b);
        uVar9 = (uint64_t)
                ((float)*(uint *)((int64_t)unaff_R14 + 0x15c) *
                 *(float *)((int64_t)unaff_R14 + 300) * 0.01);
        uVar10 = uVar9 & 0xffffffff;
        if ((int)uVar9 == 0) {
          uVar10 = 0;
        }
        else {
          if (uVar11 != 48000) {
            uVar10 = (uVar10 * 48000) / (uint64_t)uVar11;
          }
          if (0xffffffff < uVar10) {
            uVar10 = 0xffffffff;
          }
        }
        if ((uVar10 & 0xffffffff) + (uint64_t)uVar3 < 0x100000000) {
          iVar12 = uVar3 + (int)uVar10;
        }
        *(int *)(unaff_R14 + 0x25) = iVar12;
        *(int32_t *)((int64_t)unaff_R14 + 300) = 0;
      }
      iVar12 = *(int *)((int64_t)unaff_R14 + 0x15c);
      if (iVar12 == 0) {
        uVar11 = 0;
      }
      else {
        uVar3 = *(uint *)(unaff_R14 + 0x25);
        if ((int)*(float *)(unaff_R14 + 0x2b) != 48000) {
          uVar3 = (uint)(((uint64_t)uVar3 * (uint64_t)(uint)(int)*(float *)(unaff_R14 + 0x2b)) /
                        48000);
        }
        iVar2 = (int)unaff_R14[0x26];
        if (iVar2 == 0) {
          uVar11 = iVar12 - 1U;
          if (uVar3 < iVar12 - 1U) {
            uVar11 = uVar3;
          }
        }
        else {
          uVar1 = *(uint *)(unaff_R14 + 0x2c);
          uVar11 = uVar3;
          if (uVar1 < uVar3) {
            uVar13 = uVar3 - uVar1;
            uVar11 = (*(int *)((int64_t)unaff_R14 + 0x164) - uVar1) + 1;
            if (iVar2 == -1) {
              uVar11 = uVar1 + uVar13 % uVar11;
            }
            else {
              uVar4 = (iVar2 + 1) * uVar11 + uVar1;
              if (uVar4 < uVar3) {
                iVar2 = 0;
                uVar11 = (*(int *)((int64_t)unaff_R14 + 0x164) - uVar4) + uVar3;
                if (iVar12 - 1U <= uVar11) {
                  uVar11 = iVar12 - 1U;
                }
              }
              else {
                iVar2 = iVar2 - uVar13 / uVar11;
                uVar11 = uVar1 + uVar13 % uVar11;
              }
            }
          }
        }
      }
      uVar3 = FUN_18073fd60(*plVar5,iVar2);
      if ((0x1e < uVar3) || ((0x40000009U >> (uVar3 & 0x1f) & 1) == 0)) goto LAB_1808cf945;
      if (uVar11 != 0) {
        uVar3 = FUN_18073fe30(*plVar5,uVar11,2);
        if ((0x1e < uVar3) || ((0x40000009U >> (uVar3 & 0x1f) & 1) == 0)) goto LAB_1808cf945;
        *(uint *)((int64_t)unaff_R14 + 0x13c) = uVar11;
      }
    }
    *(int32_t *)(unaff_R14 + 0x27) = 1;
    iVar2 = FUN_1808ce950();
    if (iVar2 == 0) {
      if ((unaff_R14[6] != 0) && ((uint64_t)unaff_R14[6] < (uint64_t)unaff_R14[7])) {
        unaff_R14[6] = unaff_R14[7];
      }
      iVar2 = (**(code **)(*unaff_R14 + 0x118))();
      if ((iVar2 == 0) && (iVar2 = (**(code **)(*unaff_R14 + 0x110))(), iVar2 == 0)) {
        FUN_18073d8a0(*plVar5,0);
      }
    }
  }
LAB_1808cf945:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000b0 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808cf569(void)
void FUN_1808cf569(void)

{
  int64_t *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint *puVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int64_t *unaff_R14;
  bool in_ZF;
  char in_stack_00000070;
  uint64_t in_stack_000000b0;
  
  if (in_ZF) goto LAB_1808cf945;
  plVar1 = unaff_R14 + 0x1f;
  if (*plVar1 == 0) {
    iVar3 = (**(code **)(*(int64_t *)unaff_R14[0x20] + 0x20))
                      ((int64_t *)unaff_R14[0x20],unaff_R14[0x21],unaff_R14 + 0x2a);
    if (iVar3 != 0) goto LAB_1808cf945;
    if (unaff_R14[0x2a] != 0) {
      lVar6 = (**(code **)(*unaff_R14 + 0x30))();
      iVar3 = FUN_18085ffc0(*(uint64_t *)(lVar6 + 0x18),0x2000,unaff_R14[0x2a]);
      if (iVar3 != 0) goto LAB_1808cf945;
      *(uint *)((int64_t)unaff_R14 + 0x134) = *(uint *)((int64_t)unaff_R14 + 0x134) | 8;
    }
    lVar7 = (**(code **)(*unaff_R14 + 0x30))();
    lVar6 = *(int64_t *)unaff_R14[0x20];
    func_0x00018085f3b0(*(uint64_t *)(lVar7 + 0x18));
    iVar3 = (**(code **)(lVar6 + 0x28))
                      (unaff_R14[0x20],unaff_R14[0x21],unaff_R14[0x14],unaff_R14[0x1d],1);
    if (iVar3 != 0) goto LAB_1808cf945;
  }
  iVar3 = (**(code **)(*(int64_t *)unaff_R14[0x20] + 0x10))
                    ((int64_t *)unaff_R14[0x20],unaff_R14[0x21],&stack0x00000070);
  if ((iVar3 == 0) && (in_stack_00000070 != '\0')) {
    if ((char)unaff_R14[0x18] == '\0') {
      iVar3 = FUN_1808c9e60();
      if (iVar3 != 0) goto LAB_1808cf945;
    }
    else {
      uVar4 = FUN_18073d6e0(*plVar1,0x40000010);
      if (((((0x1e < uVar4) || ((0x40000009U >> (uVar4 & 0x1f) & 1) == 0)) ||
           (uVar4 = FUN_18073d010(*plVar1,unaff_R14 + 0x28,0), 0x1e < uVar4)) ||
          (((0x40000009U >> (uVar4 & 0x1f) & 1) == 0 ||
           (uVar4 = FUN_18073d150(*plVar1,0), 0x1e < uVar4)))) ||
         ((0x40000009U >> (uVar4 & 0x1f) & 1) == 0)) goto LAB_1808cf945;
    }
    iVar3 = 0;
    iVar12 = 0;
    do {
      uVar4 = FUN_18073da60(*plVar1,iVar12,0);
      if ((0x1e < uVar4) || ((0x40000009U >> (uVar4 & 0x1f) & 1) == 0)) goto LAB_1808cf945;
      iVar12 = iVar12 + 1;
    } while (iVar12 < 4);
    puVar8 = (uint *)FUN_18084da10();
    uVar4 = *(uint *)(unaff_R14 + 0x25);
    if ((uVar4 == *puVar8) && (*(float *)((int64_t)unaff_R14 + 300) == 0.0)) {
      uVar4 = FUN_18073fd60(*plVar1,(int)unaff_R14[0x26]);
      if ((0x1e < uVar4) || ((0x40000009U >> (uVar4 & 0x1f) & 1) == 0)) goto LAB_1808cf945;
    }
    else {
      if (0.0 < *(float *)(unaff_R14 + 0x2b)) {
        iVar12 = -1;
        uVar11 = (uint)*(float *)(unaff_R14 + 0x2b);
        uVar9 = (uint64_t)
                ((float)*(uint *)((int64_t)unaff_R14 + 0x15c) *
                 *(float *)((int64_t)unaff_R14 + 300) * 0.01);
        uVar10 = uVar9 & 0xffffffff;
        if ((int)uVar9 == 0) {
          uVar10 = 0;
        }
        else {
          if (uVar11 != 48000) {
            uVar10 = (uVar10 * 48000) / (uint64_t)uVar11;
          }
          if (0xffffffff < uVar10) {
            uVar10 = 0xffffffff;
          }
        }
        if ((uVar10 & 0xffffffff) + (uint64_t)uVar4 < 0x100000000) {
          iVar12 = uVar4 + (int)uVar10;
        }
        *(int *)(unaff_R14 + 0x25) = iVar12;
        *(int32_t *)((int64_t)unaff_R14 + 300) = 0;
      }
      iVar12 = *(int *)((int64_t)unaff_R14 + 0x15c);
      if (iVar12 == 0) {
        uVar11 = 0;
      }
      else {
        uVar4 = *(uint *)(unaff_R14 + 0x25);
        if ((int)*(float *)(unaff_R14 + 0x2b) != 48000) {
          uVar4 = (uint)(((uint64_t)uVar4 * (uint64_t)(uint)(int)*(float *)(unaff_R14 + 0x2b)) /
                        48000);
        }
        iVar3 = (int)unaff_R14[0x26];
        if (iVar3 == 0) {
          uVar11 = iVar12 - 1U;
          if (uVar4 < iVar12 - 1U) {
            uVar11 = uVar4;
          }
        }
        else {
          uVar2 = *(uint *)(unaff_R14 + 0x2c);
          uVar11 = uVar4;
          if (uVar2 < uVar4) {
            uVar13 = uVar4 - uVar2;
            uVar11 = (*(int *)((int64_t)unaff_R14 + 0x164) - uVar2) + 1;
            if (iVar3 == -1) {
              uVar11 = uVar2 + uVar13 % uVar11;
            }
            else {
              uVar5 = (iVar3 + 1) * uVar11 + uVar2;
              if (uVar5 < uVar4) {
                iVar3 = 0;
                uVar11 = (*(int *)((int64_t)unaff_R14 + 0x164) - uVar5) + uVar4;
                if (iVar12 - 1U <= uVar11) {
                  uVar11 = iVar12 - 1U;
                }
              }
              else {
                iVar3 = iVar3 - uVar13 / uVar11;
                uVar11 = uVar2 + uVar13 % uVar11;
              }
            }
          }
        }
      }
      uVar4 = FUN_18073fd60(*plVar1,iVar3);
      if ((0x1e < uVar4) || ((0x40000009U >> (uVar4 & 0x1f) & 1) == 0)) goto LAB_1808cf945;
      if (uVar11 != 0) {
        uVar4 = FUN_18073fe30(*plVar1,uVar11,2);
        if ((0x1e < uVar4) || ((0x40000009U >> (uVar4 & 0x1f) & 1) == 0)) goto LAB_1808cf945;
        *(uint *)((int64_t)unaff_R14 + 0x13c) = uVar11;
      }
    }
    *(int32_t *)(unaff_R14 + 0x27) = 1;
    iVar3 = FUN_1808ce950();
    if (iVar3 == 0) {
      if ((unaff_R14[6] != 0) && ((uint64_t)unaff_R14[6] < (uint64_t)unaff_R14[7])) {
        unaff_R14[6] = unaff_R14[7];
      }
      iVar3 = (**(code **)(*unaff_R14 + 0x118))();
      if ((iVar3 == 0) && (iVar3 = (**(code **)(*unaff_R14 + 0x110))(), iVar3 == 0)) {
        FUN_18073d8a0(*plVar1,0);
      }
    }
  }
LAB_1808cf945:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000b0 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808cf955(void)
void FUN_1808cf955(void)

{
  uint64_t in_stack_000000b0;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000b0 ^ (uint64_t)&stack0x00000000);
}






// 函数: void ConditionChecker(void)
void ConditionChecker(void)

{
  uint64_t in_stack_000000b0;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000b0 ^ (uint64_t)&stack0x00000000);
}



uint64_t FUN_1808cf990(uint64_t param_1)

{
  FUN_1808b2f30(param_1,2);
  return 0;
}



uint64_t
FUN_1808cf9b0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint param_4,float param_5)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t uStackX_8;
  
  uVar5 = (uint64_t)param_4;
  if (param_1[0x1f] == 0) {
LAB_1808cfb35:
    uVar2 = 0x1c;
  }
  else {
    (**(code **)(*param_1 + 0x80))();
    uStackX_8 = 0;
    uVar2 = func_0x0001808601b0(param_1[0x1f],0,&uStackX_8);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if ((uStackX_8 == 0) || (param_3 < uStackX_8)) {
      if (param_1[0x1f] == 0) goto LAB_1808cfb35;
      uVar2 = FUN_180862d70(param_1[0x1f],param_2,param_3,0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = FUN_1808b2f30(param_1,3);
    if ((int)uVar2 == 0) {
      puVar6 = (uint64_t *)(param_1[0x1d] + 0xe8);
      for (puVar1 = (uint64_t *)*puVar6; puVar1 != puVar6; puVar1 = (uint64_t *)*puVar1) {
        uVar2 = FUN_1808b2f30(param_1,*(int32_t *)((int64_t)puVar1 + 0x24));
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        if (puVar1 == puVar6) break;
      }
      uVar2 = FUN_18073d8a0(*(uint64_t *)(*(int64_t *)(param_1[0x1f] + 0x2b0) + 0x78),0);
      if ((int)uVar2 == 0) {
        if (param_5 != 0.0) {
          uVar4 = (uint64_t)*(uint *)(param_1[0x1f] + 0x1d4);
          if (param_5 * 0.01 != 1.0) {
            uVar3 = ((int64_t)(param_5 * 0.01 * 1048576.0) & 0xffffffffU) * uVar4 >> 0x14;
            uVar4 = 0xffffffff;
            if (uVar3 < 0x100000000) {
              uVar4 = uVar3 & 0xffffffff;
            }
          }
          if (uVar4 + uVar5 < 0x100000000) {
            uVar5 = (uint64_t)(param_4 + (int)uVar4);
          }
          else {
            uVar5 = 0xffffffff;
          }
        }
        uVar2 = FUN_18085bbe0(param_1[0x1f] + 200,uVar5);
        if ((int)uVar2 == 0) {
          uVar2 = FUN_180863420(param_1[0x1f]);
        }
      }
    }
  }
  return uVar2;
}



uint64_t
FUN_1808cfb50(int64_t *param_1,int64_t param_2,int64_t param_3,int param_4,float param_5,
             int32_t param_6)

{
  int64_t lVar1;
  int *piVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int32_t auStackX_8 [2];
  
  lVar4 = 0;
  if (*(char *)((int64_t)param_1 + 0x1dd) != '\0') {
    lVar1 = lVar4;
    if ((int)param_1[0x3a] != 2) {
      lVar1 = param_1[0x37];
    }
    if (lVar1 != 0) {
      return 0x1c;
    }
  }
  piVar2 = (int *)FUN_18084da10();
  if ((param_4 != *piVar2) || (param_5 != 0.0)) {
    lVar1 = param_1[0x1e];
    param_1[0x39] = param_2 + 0x40;
    uVar3 = FUN_18073c160(lVar1,0);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = FUN_18073d3c0(lVar1,param_1[0x39],0x3f800000);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  uVar3 = (**(code **)(*param_1 + 0x110))(param_1);
  if ((((int)uVar3 == 0) && (uVar3 = (**(code **)(*param_1 + 0x118))(param_1), (int)uVar3 == 0)) &&
     (uVar3 = FUN_18073d230(param_1[0x1e],param_2,0,1), (int)uVar3 == 0)) {
    FUN_18073c4c0(param_1[0x1e],param_1 + 0x38,0);
    param_1[7] = param_1[0x38];
    uVar3 = FUN_18073d8a0(param_1[0x1e],0);
    if ((int)uVar3 == 0) {
      auStackX_8[0] = 0x3f800000;
      uVar3 = FUN_18073ca90(param_1[0x1e],auStackX_8);
      if ((int)uVar3 == 0) {
        if (param_3 != 0) {
          lVar4 = (param_1[0x38] - param_2) + param_3;
        }
        uVar3 = (**(code **)(*param_1 + 0x150))
                          (param_1,param_1[0x38],lVar4,param_4,param_5,
                           *(int32_t *)((int64_t)param_1 + 0x1d4),param_6);
      }
    }
  }
  return uVar3;
}






// 函数: void FUN_1808cfb99(void)
void FUN_1808cfb99(void)

{
  int64_t lVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  int64_t unaff_RDI;
  int64_t *unaff_R14;
  int32_t in_stack_00000070;
  float in_stack_00000090;
  
  piVar3 = (int *)FUN_18084da10();
  if ((unaff_EBP != *piVar3) || (in_stack_00000090 != 0.0)) {
    lVar1 = unaff_R14[0x1e];
    unaff_R14[0x39] = unaff_RDI + 0x40;
    iVar2 = FUN_18073c160(lVar1,0);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_18073d3c0(lVar1,unaff_R14[0x39],0x3f800000);
    if (iVar2 != 0) {
      return;
    }
  }
  iVar2 = (**(code **)(*unaff_R14 + 0x110))();
  if (((iVar2 == 0) && (iVar2 = (**(code **)(*unaff_R14 + 0x118))(), iVar2 == 0)) &&
     (iVar2 = FUN_18073d230(unaff_R14[0x1e]), iVar2 == 0)) {
    FUN_18073c4c0(unaff_R14[0x1e],unaff_R14 + 0x38,0);
    unaff_R14[7] = unaff_R14[0x38];
    iVar2 = FUN_18073d8a0(unaff_R14[0x1e],0);
    if (iVar2 == 0) {
      in_stack_00000070 = 0x3f800000;
      iVar2 = FUN_18073ca90(unaff_R14[0x1e],&stack0x00000070);
      if (iVar2 == 0) {
        (**(code **)(*unaff_R14 + 0x150))();
      }
    }
  }
  return;
}






// 函数: void FUN_1808cfce7(void)
void FUN_1808cfce7(void)

{
  return;
}



uint64_t
FUN_1808cfd00(int64_t *param_1,uint64_t param_2,int64_t param_3,uint param_4,float param_5)

{
  float fVar1;
  byte bVar2;
  uint64_t uVar3;
  uint uVar4;
  uint uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  float fVar8;
  
  uVar5 = 1;
  param_1[0x20] = param_3;
  FUN_1808b2f30(param_1,1);
  FUN_1808b2f30(param_1,0x1d);
  fVar8 = (float)(**(code **)(*param_1 + 0xc0))(param_1);
  if (0.0 <= fVar8) {
    fVar1 = *(float *)(param_1 + 0x1f);
    if ((fVar1 < 0.0) || (fVar8 == 0.0)) {
      lVar6 = 0;
    }
    else {
      uVar5 = 0;
      uVar4 = uVar5;
      if (0.0 < fVar1) {
        uVar4 = (uint)(int64_t)(fVar1 * 48.0);
      }
      if (param_5 != 0.0) {
        uVar7 = (uint64_t)uVar4;
        if (param_5 * 0.01 != 1.0) {
          uVar3 = ((int64_t)(param_5 * 10485.76) & 0xffffffffU) * (uint64_t)uVar4 >> 0x14;
          uVar7 = 0xffffffff;
          if (uVar3 < 0x100000000) {
            uVar7 = uVar3 & 0xffffffff;
          }
        }
        if (uVar7 + param_4 < 0x100000000) {
          param_4 = param_4 + (int)uVar7;
        }
        else {
          param_4 = 0xffffffff;
        }
      }
      *(uint *)(param_1 + 0x22) = param_4;
      if (param_4 < uVar4) {
        uVar7 = (uint64_t)(uVar4 - param_4);
        if (1.0 / fVar8 != 1.0) {
          uVar3 = ((int64_t)((1.0 / fVar8) * 1048576.0) & 0xffffffffU) * uVar7 >> 0x14;
          uVar7 = 0xffffffff;
          if (uVar3 < 0x100000000) {
            uVar7 = uVar3 & 0xffffffff;
          }
        }
      }
      else {
        uVar7 = 0;
      }
      uVar4 = (uint)uVar7;
      if (*(uint *)(param_1[0x1e] + 0x774) != 48000) {
        uVar4 = (uint)((*(uint *)(param_1[0x1e] + 0x774) * uVar7) / 48000);
      }
      lVar6 = (uint64_t)uVar4 + param_1[6];
    }
    param_1[0x21] = lVar6;
    *(uint *)((int64_t)param_1 + 0x114) = uVar5;
    *(uint *)(param_1 + 0x23) = *(uint *)(param_1 + 0x23) | 1;
    bVar2 = *(byte *)(param_1[0x1d] + 0xb8) & 1;
    *(uint *)(param_1 + 0x23) =
         ~((bVar2 ^ 1) * 2) & ((uint)bVar2 + (uint)bVar2 | *(uint *)(param_1 + 0x23));
    return 0;
  }
  return 0x1c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_1808cfed0(int64_t *param_1,uint64_t param_2,int64_t param_3,int32_t param_4,
             int32_t param_5,int32_t param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint *puVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int8_t auStack_e8 [32];
  uint uStack_c8;
  uint uStack_c0;
  int64_t *plStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  char acStack_78 [4];
  int32_t uStack_74;
  ushort uStack_70;
  ushort uStack_6e;
  byte bStack_6c;
  byte bStack_6b;
  byte bStack_6a;
  byte bStack_69;
  byte bStack_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  int8_t auStack_60 [40];
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  if ((int)param_1[0x27] != 2) {
    return 0x1c;
  }
  param_1[0x22] = param_3;
  param_1[0x23] = param_3;
  *(int32_t *)((int64_t)param_1 + 300) = param_5;
  *(int32_t *)(param_1 + 0x26) = param_6;
  *(int32_t *)(param_1 + 0x27) = 0;
  *(int32_t *)(param_1 + 0x25) = param_4;
  uStack_30 = 0x1808cff3b;
  uVar11 = (**(code **)(*(int64_t *)param_1[0x20] + 8))
                     ((int64_t *)param_1[0x20],param_4,param_1 + 0x21);
  if ((int)uVar11 != 0) {
    return uVar11;
  }
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_e8;
  if ((int)param_1[0x27] == 0) {
    acStack_78[0] = '\0';
    iVar2 = (**(code **)(*(int64_t *)param_1[0x20] + 0x10))
                      ((int64_t *)param_1[0x20],param_1[0x21],acStack_78);
    if (iVar2 != 0) {
      plVar5 = (int64_t *)(**(code **)*param_1)(param_1);
      (**(code **)(*plVar5 + 0x30))(plVar5,&uStack_74);
      uStack_80 = (uint)bStack_65;
      uStack_88 = (uint)bStack_66;
      uStack_90 = (uint)bStack_67;
      uStack_98 = (uint)bStack_68;
      uStack_a0 = (uint)bStack_69;
      uStack_a8 = (uint)bStack_6a;
      uStack_b0 = (uint)bStack_6b;
      plStack_b8 = (int64_t *)CONCAT44(plStack_b8._4_4_,(uint)bStack_6c);
      uStack_c0 = (uint)uStack_6e;
      uStack_c8 = (uint)uStack_70;
                    // WARNING: Subroutine does not return
      SystemDataValidator(auStack_60,0x27,&processed_var_8960_ptr,uStack_74);
    }
    if (acStack_78[0] != '\0') {
      plVar5 = param_1 + 0x1f;
      if (*plVar5 == 0) {
        iVar2 = (**(code **)(*(int64_t *)param_1[0x20] + 0x20))
                          ((int64_t *)param_1[0x20],param_1[0x21],param_1 + 0x2a);
        if (iVar2 != 0) goto ConditionChecker;
        if (param_1[0x2a] != 0) {
          lVar6 = (**(code **)(*param_1 + 0x30))(param_1);
          iVar2 = FUN_18085ffc0(*(uint64_t *)(lVar6 + 0x18),0x2000,param_1[0x2a]);
          if (iVar2 != 0) goto ConditionChecker;
          *(uint *)((int64_t)param_1 + 0x134) = *(uint *)((int64_t)param_1 + 0x134) | 8;
        }
        lVar7 = (**(code **)(*param_1 + 0x30))(param_1);
        lVar6 = *(int64_t *)param_1[0x20];
        uStack_c0 = func_0x00018085f3b0(*(uint64_t *)(lVar7 + 0x18));
        uStack_c8 = CONCAT31(uStack_c8._1_3_,1);
        plStack_b8 = plVar5;
        iVar2 = (**(code **)(lVar6 + 0x28))(param_1[0x20],param_1[0x21],param_1[0x14],param_1[0x1d])
        ;
        if (iVar2 != 0) goto ConditionChecker;
      }
      iVar2 = (**(code **)(*(int64_t *)param_1[0x20] + 0x10))
                        ((int64_t *)param_1[0x20],param_1[0x21],acStack_78);
      if ((iVar2 == 0) && (acStack_78[0] != '\0')) {
        if ((char)param_1[0x18] == '\0') {
          iVar2 = FUN_1808c9e60(param_1);
          if (iVar2 != 0) goto ConditionChecker;
        }
        else {
          uVar3 = FUN_18073d6e0(*plVar5,0x40000010);
          if (((((0x1e < uVar3) || ((0x40000009U >> (uVar3 & 0x1f) & 1) == 0)) ||
               (uVar3 = FUN_18073d010(*plVar5,param_1 + 0x28,0), 0x1e < uVar3)) ||
              (((0x40000009U >> (uVar3 & 0x1f) & 1) == 0 ||
               (uVar3 = FUN_18073d150(*plVar5,0), 0x1e < uVar3)))) ||
             ((0x40000009U >> (uVar3 & 0x1f) & 1) == 0)) goto ConditionChecker;
        }
        iVar2 = 0;
        iVar13 = 0;
        do {
          uVar3 = FUN_18073da60(*plVar5,iVar13,0);
          if ((0x1e < uVar3) || ((0x40000009U >> (uVar3 & 0x1f) & 1) == 0)) goto ConditionChecker;
          iVar13 = iVar13 + 1;
        } while (iVar13 < 4);
        puVar8 = (uint *)FUN_18084da10();
        uVar3 = *(uint *)(param_1 + 0x25);
        if ((uVar3 == *puVar8) && (*(float *)((int64_t)param_1 + 300) == 0.0)) {
          uVar3 = FUN_18073fd60(*plVar5,(int)param_1[0x26]);
          if ((0x1e < uVar3) || ((0x40000009U >> (uVar3 & 0x1f) & 1) == 0)) goto ConditionChecker;
        }
        else {
          if (0.0 < *(float *)(param_1 + 0x2b)) {
            iVar13 = -1;
            uVar12 = (uint)*(float *)(param_1 + 0x2b);
            uVar9 = (uint64_t)
                    ((float)*(uint *)((int64_t)param_1 + 0x15c) *
                     *(float *)((int64_t)param_1 + 300) * 0.01);
            uVar10 = uVar9 & 0xffffffff;
            if ((int)uVar9 == 0) {
              uVar10 = 0;
            }
            else {
              if (uVar12 != 48000) {
                uVar10 = (uVar10 * 48000) / (uint64_t)uVar12;
              }
              if (0xffffffff < uVar10) {
                uVar10 = 0xffffffff;
              }
            }
            if ((uVar10 & 0xffffffff) + (uint64_t)uVar3 < 0x100000000) {
              iVar13 = uVar3 + (int)uVar10;
            }
            *(int *)(param_1 + 0x25) = iVar13;
            *(int32_t *)((int64_t)param_1 + 300) = 0;
          }
          iVar13 = *(int *)((int64_t)param_1 + 0x15c);
          if (iVar13 == 0) {
            uVar12 = 0;
          }
          else {
            uVar3 = *(uint *)(param_1 + 0x25);
            if ((int)*(float *)(param_1 + 0x2b) != 48000) {
              uVar3 = (uint)(((uint64_t)uVar3 * (uint64_t)(uint)(int)*(float *)(param_1 + 0x2b)) /
                            48000);
            }
            iVar2 = (int)param_1[0x26];
            if (iVar2 == 0) {
              uVar12 = iVar13 - 1U;
              if (uVar3 < iVar13 - 1U) {
                uVar12 = uVar3;
              }
            }
            else {
              uVar1 = *(uint *)(param_1 + 0x2c);
              uVar12 = uVar3;
              if (uVar1 < uVar3) {
                uVar14 = uVar3 - uVar1;
                uVar12 = (*(int *)((int64_t)param_1 + 0x164) - uVar1) + 1;
                if (iVar2 == -1) {
                  uVar12 = uVar1 + uVar14 % uVar12;
                }
                else {
                  uVar4 = (iVar2 + 1) * uVar12 + uVar1;
                  if (uVar4 < uVar3) {
                    iVar2 = 0;
                    uVar12 = (*(int *)((int64_t)param_1 + 0x164) - uVar4) + uVar3;
                    if (iVar13 - 1U <= uVar12) {
                      uVar12 = iVar13 - 1U;
                    }
                  }
                  else {
                    iVar2 = iVar2 - uVar14 / uVar12;
                    uVar12 = uVar1 + uVar14 % uVar12;
                  }
                }
              }
            }
          }
          uVar3 = FUN_18073fd60(*plVar5,iVar2);
          if ((0x1e < uVar3) || ((0x40000009U >> (uVar3 & 0x1f) & 1) == 0)) goto ConditionChecker;
          if (uVar12 != 0) {
            uVar3 = FUN_18073fe30(*plVar5,uVar12,2);
            if ((0x1e < uVar3) || ((0x40000009U >> (uVar3 & 0x1f) & 1) == 0)) goto ConditionChecker;
            *(uint *)((int64_t)param_1 + 0x13c) = uVar12;
          }
        }
        *(int32_t *)(param_1 + 0x27) = 1;
        iVar2 = FUN_1808ce950(param_1);
        if (iVar2 == 0) {
          if ((param_1[6] != 0) && ((uint64_t)param_1[6] < (uint64_t)param_1[7])) {
            param_1[6] = param_1[7];
          }
          iVar2 = (**(code **)(*param_1 + 0x118))(param_1);
          if ((iVar2 == 0) && (iVar2 = (**(code **)(*param_1 + 0x110))(param_1), iVar2 == 0)) {
            FUN_18073d8a0(*plVar5,0);
          }
        }
      }
    }
  }
ConditionChecker:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




