#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part678.c - 6 个函数

// 函数: void FUN_180657970(uint64_t param_1,uint64_t param_2,void *param_3,uint64_t param_4,
void FUN_180657970(uint64_t param_1,uint64_t param_2,void *param_3,uint64_t param_4,
                  int64_t param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int32_t uVar4;
  int64_t lVar5;
  
  if (((char)param_4 == '\0') && (param_3 != &system_data_67e0)) {
    if (*(int *)(param_3 + 0x30) == 0) {
LAB_1806579e7:
      uVar4 = 1;
      goto LAB_1806579f0;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar2 = *(byte **)(param_3 + 0x28);
      lVar5 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar3 = (uint)pbVar2[lVar5];
        if (bVar1 != uVar3) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar3 != 0);
      if ((int)(bVar1 - uVar3) < 1) goto LAB_1806579e7;
    }
  }
  uVar4 = 0;
LAB_1806579f0:
  lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x48,system_data_6808,param_4,0xfffffffffffffffe);
  CoreEngineDataTransformer(lVar5 + 0x20,param_5);
  *(uint64_t *)(lVar5 + 0x40) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar5,param_3,&system_data_67e0,uVar4);
}



uint64_t * FUN_180657a70(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_1792_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}





// 函数: void FUN_180657aa0(uint64_t *param_1)
void FUN_180657aa0(uint64_t *param_1)

{
  uint64_t uVar1;
  int32_t uVar2;
  
  uVar2 = SteamAPI_GetHSteamUser();
  uVar1 = SteamInternal_FindOrCreateUserInterface(uVar2,&unknown_var_1688_ptr);
  *param_1 = uVar1;
  return;
}





// 函数: void FUN_180657ad0(uint64_t *param_1)
void FUN_180657ad0(uint64_t *param_1)

{
  uint64_t uVar1;
  int32_t uVar2;
  
  uVar2 = SteamAPI_GetHSteamUser();
  uVar1 = SteamInternal_FindOrCreateUserInterface(uVar2,&unknown_var_1704_ptr);
  *param_1 = uVar1;
  return;
}



uint64_t *
FUN_180657b00(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_1744_ptr;
  FUN_18005d580();
  *param_1 = &unknown_var_1792_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,uVar1);
  }
  return param_1;
}





// 函数: void FUN_180657b70(void)
void FUN_180657b70(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_180657dd0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180657dd0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  void *puStack_50;
  int8_t *puStack_48;
  int iStack_40;
  uint64_t uStack_38;
  
  uVar7 = 0xfffffffffffffffe;
  uVar4 = 0;
  lVar3 = *(int64_t *)(param_1 + 8);
  uVar6 = uVar4;
  if (*(int64_t *)(param_1 + 0x10) - lVar3 >> 5 != 0) {
    do {
      puStack_50 = &system_data_buffer_ptr;
      uStack_38 = 0;
      puStack_48 = (int8_t *)0x0;
      iStack_40 = 0;
      CoreEngineDataBufferProcessor(&puStack_50,*(int32_t *)(uVar4 + 0x10 + lVar3));
      iVar1 = *(int *)(uVar4 + 0x10 + lVar3);
      if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_48,*(uint64_t *)(uVar4 + 8 + lVar3),iVar1 + 1,param_4,uVar7);
      }
      if (*(int64_t *)(uVar4 + 8 + lVar3) != 0) {
        iStack_40 = 0;
        if (puStack_48 != (int8_t *)0x0) {
          *puStack_48 = 0;
        }
        uStack_38 = uStack_38 & 0xffffffff;
      }
      puVar2 = *(uint64_t **)(param_2 + 8);
      if (puVar2 < *(uint64_t **)(param_2 + 0x10)) {
        *(uint64_t **)(param_2 + 8) = puVar2 + 4;
        *puVar2 = &system_state_ptr;
        puVar2[1] = 0;
        *(int32_t *)(puVar2 + 2) = 0;
        *puVar2 = &system_data_buffer_ptr;
        puVar2[3] = 0;
        puVar2[1] = 0;
        *(int32_t *)(puVar2 + 2) = 0;
        CoreEngineDataBufferProcessor(puVar2,iStack_40);
        if (iStack_40 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(puVar2[1],puStack_48,iStack_40 + 1,param_4,uVar7);
        }
        if (puStack_48 != (int8_t *)0x0) {
          *(int32_t *)(puVar2 + 2) = 0;
          if ((int8_t *)puVar2[1] != (int8_t *)0x0) {
            *(int8_t *)puVar2[1] = 0;
          }
          *(int32_t *)((int64_t)puVar2 + 0x1c) = 0;
        }
      }
      else {
        FUN_180059820(param_2,&puStack_50);
      }
      puStack_50 = &system_data_buffer_ptr;
      if (puStack_48 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 0x20;
      lVar3 = *(int64_t *)(param_1 + 8);
      uVar6 = (uint64_t)uVar5;
    } while ((uint64_t)(int64_t)(int)uVar5 <
             (uint64_t)(*(int64_t *)(param_1 + 0x10) - lVar3 >> 5));
  }
  return;
}





// 函数: void FUN_180657fa0(void)
void FUN_180657fa0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



