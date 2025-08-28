#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part012_sub002.c - 1 个函数

// 函数: void FUN_1807d2655(void)
void FUN_1807d2655(void)

{
  uint64_t in_stack_00000038;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000038 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807d2660(int64_t param_1,int64_t param_2)

{
  int *piVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int iVar6;
  int aiStackX_10 [2];
  
  if (0x8000000 < *(uint *)(param_2 + 0x14)) {
    return 0x1c;
  }
  iVar6 = *(uint *)(param_2 + 0x14) + 0x21;
  if (*(int *)(param_1 + 0x40) < iVar6) {
    if (*(int64_t *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x30),
                    &rendering_buffer_208_ptr,0x289,1);
    }
    lVar3 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar6,&rendering_buffer_208_ptr,0x28c,0,0,1);
    *(int64_t *)(param_1 + 0x30) = lVar3;
    if (lVar3 == 0) {
      return 0x26;
    }
    *(int *)(param_1 + 0x40) = iVar6;
  }
  piVar1 = *(int **)(param_1 + 0x30);
  piVar1[0] = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[6] = 0;
  piVar1[7] = 0;
  *piVar1 = 0x20;
  *(int16_t *)(piVar1 + 2) = 0x30a;
  piVar1[3] = *(int *)(param_2 + 0xc);
  piVar1[5] = *(int *)(param_2 + 0x10);
  piVar1[6] = *(int *)(param_2 + 0x14);
  piVar1[4] = 3;
  uVar2 = *(uint64_t *)(param_1 + 0x38);
  SystemStateManager(uVar2);
  if ((*(int *)(param_1 + 0x9c) != 0) && (*(int *)(param_1 + 0x80) != 0)) {
    iVar6 = *(int *)(*(int64_t *)(param_1 + 0x78) +
                    (int64_t)(int)(*(int *)(param_1 + 0x80) - 1U & *(uint *)(param_2 + 0xc)) * 4);
    if (iVar6 != -1) {
      lVar3 = *(int64_t *)(param_1 + 0x88);
      do {
        lVar4 = (int64_t)iVar6;
        if (*(uint *)(lVar3 + lVar4 * 0x10) == *(uint *)(param_2 + 0xc)) {
          lVar3 = *(int64_t *)(lVar3 + 8 + lVar4 * 0x10);
          if (((lVar3 != 0) &&
              (iVar6 = FUN_180768620(*(uint64_t *)(lVar3 + 0x10),*(int32_t *)(param_2 + 0x10)),
              iVar6 == 0)) &&
             (aiStackX_10[0] = iVar6,
             uVar5 = FUN_1807685b0(*(uint64_t *)(lVar3 + 0x10),piVar1 + 8,
                                   *(int32_t *)(param_2 + 0x14),aiStackX_10),
             (uVar5 & 0xffffffef) == 0)) {
            *piVar1 = *piVar1 + aiStackX_10[0];
            piVar1[7] = aiStackX_10[0];
            piVar1[4] = 0;
          }
          break;
        }
        iVar6 = *(int *)(lVar3 + 4 + lVar4 * 0x10);
      } while (iVar6 != -1);
    }
  }
                    // WARNING: Subroutine does not return
  SystemConfigManager(uVar2);
}







