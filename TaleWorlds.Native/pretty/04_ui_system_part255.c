#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part255.c - 1 个函数

// 函数: void FUN_1808108af(void)
void FUN_1808108af(void)

{
  uint64_t in_stack_000000a0;
  
  func_0x000180815aa0();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000a0 ^ (uint64_t)&stack0x00000000);
}



uint64_t FUN_1808108e0(uint64_t param_1,uint64_t *param_2,uint *param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = param_3[3];
  *param_4 = 0;
  bVar1 = *(byte *)((uint64_t)uVar3 + 0x180beb628);
  bVar2 = *(byte *)((uint64_t)uVar3 + 0x180beb638);
  if (param_3[4] == 2) {
    iVar7 = 0x12;
    iVar6 = 0x12;
    *param_4 = ((uint)bVar2 + (uint)bVar1) * 0x12;
    if (param_3[5] != 0) {
      iVar6 = 8;
      do {
        uVar4 = func_0x000180815b30(param_1,bVar1);
        *(int32_t *)param_2 = uVar4;
        param_2 = (uint64_t *)((int64_t)param_2 + 4);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      *param_4 = *param_4 - (uint)bVar1;
      iVar6 = 9;
    }
    do {
      uVar4 = func_0x000180815b30(param_1,bVar1);
      *(int32_t *)param_2 = uVar4;
      param_2 = (uint64_t *)((int64_t)param_2 + 4);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    do {
      puVar5 = param_2;
      uVar4 = func_0x000180815b30(param_1,bVar2);
      *(int32_t *)puVar5 = uVar4;
      iVar7 = iVar7 + -1;
      param_2 = (uint64_t *)((int64_t)puVar5 + 4);
    } while (iVar7 != 0);
    *(uint64_t *)((int64_t)puVar5 + 4) = 0;
    *(int32_t *)((int64_t)puVar5 + 0xc) = 0;
  }
  else {
    uVar3 = *param_3;
    if ((int)uVar3 < 0) {
      iVar6 = 0xb;
      do {
        uVar4 = func_0x000180815b30(param_1,bVar1);
        *(int32_t *)param_2 = uVar4;
        param_2 = (uint64_t *)((int64_t)param_2 + 4);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar6 = 10;
      do {
        uVar4 = func_0x000180815b30(param_1,bVar2);
        *(int32_t *)param_2 = uVar4;
        param_2 = (uint64_t *)((int64_t)param_2 + 4);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      *param_4 = (uint)bVar1 + ((uint)bVar2 + (uint)bVar1) * 10;
    }
    else {
      if ((uVar3 & 8) == 0) {
        iVar6 = 6;
        do {
          uVar4 = func_0x000180815b30(param_1,bVar1);
          *(int32_t *)param_2 = uVar4;
          param_2 = (uint64_t *)((int64_t)param_2 + 4);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        *param_4 = *param_4 + ((uint)bVar1 + (uint)bVar1 * 2) * 2;
      }
      else {
        param_2 = param_2 + 3;
      }
      iVar6 = 5;
      if ((uVar3 & 4) == 0) {
        iVar7 = 5;
        do {
          uVar4 = func_0x000180815b30(param_1,bVar1);
          *(int32_t *)param_2 = uVar4;
          param_2 = (uint64_t *)((int64_t)param_2 + 4);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        *param_4 = (uint)bVar1 + *param_4 + (uint)bVar1 * 4;
      }
      else {
        param_2 = (uint64_t *)((int64_t)param_2 + 0x14);
      }
      if ((uVar3 & 2) == 0) {
        iVar7 = 5;
        do {
          uVar4 = func_0x000180815b30(param_1,bVar2);
          *(int32_t *)param_2 = uVar4;
          param_2 = (uint64_t *)((int64_t)param_2 + 4);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        *param_4 = *param_4 + (uint)bVar2 * 4 + (uint)bVar2;
      }
      else {
        param_2 = (uint64_t *)((int64_t)param_2 + 0x14);
      }
      if ((uVar3 & 1) == 0) {
        do {
          uVar4 = func_0x000180815b30(param_1,bVar2);
          *(int32_t *)param_2 = uVar4;
          param_2 = (uint64_t *)((int64_t)param_2 + 4);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        *param_4 = (uint)bVar2 + *param_4 + (uint)bVar2 * 4;
      }
      else {
        param_2 = (uint64_t *)((int64_t)param_2 + 0x14);
      }
    }
    *(int32_t *)param_2 = 0;
  }
  return 0;
}





