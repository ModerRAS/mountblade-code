#include "TaleWorlds.Native.Split.h"
// 99_part_13_part034.c - 1 个函数
// 函数: void NetworkProtocol_bc8f4(void)
void NetworkProtocol_bc8f4(void)
{
  uint64_t local_var_48;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)&local_buffer_00000000);
}
int NetworkProtocol_bc920(int64_t param_1)
{
  int64_t lVar1;
  bool bVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  int iVar7;
  uint64_t stack_special_x_8;
  lVar1 = *(int64_t *)(param_1 + 0x4c0);
  bVar2 = false;
  lVar4 = lVar1;
  if ((*(char *)(param_1 + 0x782) == '\0') && (lVar1 != 0)) {
    Function_571d7c62(lVar1,2);
    lVar4 = *(int64_t *)(param_1 + 0x4c0);
    bVar2 = true;
  }
  stack_special_x_8 = 0;
  iVar3 = SystemCore_73A200(lVar4,&stack_special_x_8);
  if ((iVar3 == 0) && (iVar3 = UtilitiesSystem_MathCalculator(stack_special_x_8,param_1 + 0x4c8,0), iVar3 == 0)) {
    iVar7 = 0;
    for (lVar4 = 0;
        ((-1 < lVar4 && (iVar7 < *(int *)(param_1 + 0x53c))) &&
        (*(int64_t *)(*(int64_t *)(param_1 + 0x530) + lVar4 * 8) == 0)); lVar4 = lVar4 + 1) {
      iVar7 = iVar7 + 1;
    }
    while (((-1 < iVar7 && (iVar7 < *(int *)(param_1 + 0x53c))) &&
           (*(int64_t *)(*(int64_t *)(param_1 + 0x530) + (int64_t)iVar7 * 8) != 0))) {
      iVar6 = 0;
      lVar4 = *(int64_t *)(*(int64_t *)(param_1 + 0x530) + (int64_t)iVar7 * 8);
      for (lVar5 = 0;
          ((-1 < lVar5 && (iVar6 < *(int *)(lVar4 + 0x34))) &&
          (*(int64_t *)(*(int64_t *)(lVar4 + 0x28) + lVar5 * 8) == 0)); lVar5 = lVar5 + 1) {
        iVar6 = iVar6 + 1;
      }
      while (((-1 < iVar6 && (iVar6 < *(int *)(lVar4 + 0x34))) &&
             (*(int64_t *)(*(int64_t *)(lVar4 + 0x28) + (int64_t)iVar6 * 8) != 0))) {
        iVar3 = NetworkProtocol_5ef10(*(uint64_t *)(*(int64_t *)(lVar4 + 0x28) + (int64_t)iVar6 * 8));
        if (iVar3 != 0) goto LAB_1808bcab0;
        iVar6 = iVar6 + 1;
        for (lVar5 = (int64_t)iVar6;
            ((-1 < lVar5 && (iVar6 < *(int *)(lVar4 + 0x34))) &&
            (*(int64_t *)(*(int64_t *)(lVar4 + 0x28) + lVar5 * 8) == 0)); lVar5 = lVar5 + 1) {
          iVar6 = iVar6 + 1;
        }
      }
      iVar7 = iVar7 + 1;
      for (lVar4 = (int64_t)iVar7;
          ((-1 < lVar4 && (iVar7 < *(int *)(param_1 + 0x53c))) &&
          (*(int64_t *)(*(int64_t *)(param_1 + 0x530) + lVar4 * 8) == 0)); lVar4 = lVar4 + 1) {
        iVar7 = iVar7 + 1;
      }
    }
    if ((bVar2) && (lVar1 != 0)) {
// WARNING: Subroutine does not return
      SystemCoreHandler(lVar1,2);
    }
    iVar3 = 0;
  }
  else {
LAB_1808bcab0:
    if ((bVar2) && (lVar1 != 0)) {
// WARNING: Subroutine does not return
      SystemCoreHandler(lVar1,2);
    }
  }
  return iVar3;
}
uint64_t NetworkProtocol_bcb00(int64_t param_1,int64_t *param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int *piVar4;
  uint local_var_18;
  uint local_var_14;
  uint local_var_10;
  uint local_var_c;
  (**(code **)(*param_2 + 0x38))(param_2,&local_var_18);
  if ((*(int *)(param_1 + 0x264) != 0) && (*(int *)(param_1 + 0x248) != 0)) {
    iVar3 = *(int *)(*(int64_t *)(param_1 + 0x240) +
                    (int64_t)
                    (int)((local_var_18 ^ local_var_14 ^ local_var_10 ^ local_var_c) &
                         *(int *)(param_1 + 0x248) - 1U) * 4);
    if (iVar3 != -1) {
      lVar2 = *(int64_t *)(param_1 + 0x250);
      do {
        lVar1 = (int64_t)iVar3 * 0x20;
        if ((*(int64_t *)(lVar1 + lVar2) == CONCAT44(local_var_14,local_var_18)) &&
           (*(int64_t *)(lVar1 + 8 + lVar2) == CONCAT44(local_var_c,local_var_10))) {
          if (iVar3 == -1) {
            return 0;
          }
          NetworkProtocol_bac50(*(uint64_t *)(lVar2 + 0x18 + (int64_t)iVar3 * 0x20),&rendering_buffer_2688_ptr,0x5b1)
          ;
          (**(code **)(*param_2 + 0x38))(param_2,&local_var_18);
          if (*(int *)(param_1 + 0x264) == 0) {
            return 0;
          }
          if (*(int *)(param_1 + 0x248) == 0) {
            return 0x1c;
          }
          lVar2 = (int64_t)
                  (int)((local_var_18 ^ local_var_14 ^ local_var_10 ^ local_var_c) &
                       *(int *)(param_1 + 0x248) - 1U);
          piVar4 = (int *)(*(int64_t *)(param_1 + 0x240) + lVar2 * 4);
          iVar3 = *(int *)(*(int64_t *)(param_1 + 0x240) + lVar2 * 4);
          if (iVar3 == -1) {
            return 0;
          }
          lVar2 = *(int64_t *)(param_1 + 0x250);
          while ((lVar1 = (int64_t)iVar3 * 0x20,
                 *(int64_t *)(lVar1 + lVar2) != CONCAT44(local_var_14,local_var_18) ||
                 (*(int64_t *)(lVar1 + 8 + lVar2) != CONCAT44(local_var_c,local_var_10)))) {
            piVar4 = (int *)(lVar2 + 0x10 + lVar1);
            iVar3 = *piVar4;
            if (iVar3 == -1) {
              return 0;
            }
          }
          iVar3 = *piVar4;
          lVar1 = (int64_t)iVar3 * 0x20;
          *(uint64_t *)(lVar1 + 0x18 + lVar2) = 0;
          *piVar4 = *(int *)(lVar1 + 0x10 + lVar2);
          *(int32_t *)(lVar1 + 0x10 + lVar2) = *(int32_t *)(param_1 + 0x260);
          *(int *)(param_1 + 0x264) = *(int *)(param_1 + 0x264) + -1;
          *(int *)(param_1 + 0x260) = iVar3;
          return 0;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + lVar2);
      } while (iVar3 != -1);
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address