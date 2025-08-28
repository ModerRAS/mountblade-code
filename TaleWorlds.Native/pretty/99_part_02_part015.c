#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part015.c - 8 个函数

// 函数: void FUN_1800f3de0(void)
void FUN_1800f3de0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uStackX_8;
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  uint64_t auStack_28 [3];
  
  lVar5 = system_system_data_config;
  lVar4 = system_main_module_state;
  uVar6 = 0;
  lVar1 = *(int64_t *)(system_system_data_config + 0x3e0);
  lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
  uStackX_8 = uVar6;
  if ((lVar1 != 0) &&
     (*(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar1 != -0x10)) {
    *(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(lVar4 + 0x224);
    uStackX_8 = *(uint64_t *)(lVar1 + 0x18);
  }
  plVar3 = *(int64_t **)(lVar2 + 0x8400);
  (**(code **)(*plVar3 + 200))(plVar3,0x39,1,&uStackX_8);
  lVar4 = system_main_module_state;
  lVar1 = *(int64_t *)(lVar5 + 0x410);
  lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
  uStackX_10 = uVar6;
  if ((lVar1 != 0) &&
     (*(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar1 != -0x10)) {
    *(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(lVar4 + 0x224);
    uStackX_10 = *(uint64_t *)(lVar1 + 0x18);
  }
  plVar3 = *(int64_t **)(lVar2 + 0x8400);
  (**(code **)(*plVar3 + 200))(plVar3,0x3a,1,&uStackX_10);
  lVar4 = system_main_module_state;
  lVar1 = *(int64_t *)(lVar5 + 0x418);
  lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
  uStackX_18 = uVar6;
  if ((lVar1 != 0) &&
     (*(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar1 != -0x10)) {
    *(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(lVar4 + 0x224);
    uStackX_18 = *(uint64_t *)(lVar1 + 0x18);
  }
  plVar3 = *(int64_t **)(lVar2 + 0x8400);
  (**(code **)(*plVar3 + 200))(plVar3,0x3b,1,&uStackX_18);
  lVar4 = system_main_module_state;
  lVar1 = *(int64_t *)(lVar5 + 0x420);
  lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
  uStackX_20 = uVar6;
  if ((lVar1 != 0) &&
     (*(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar1 != -0x10)) {
    *(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(lVar4 + 0x224);
    uStackX_20 = *(uint64_t *)(lVar1 + 0x18);
  }
  plVar3 = *(int64_t **)(lVar2 + 0x8400);
  (**(code **)(*plVar3 + 200))(plVar3,0x3c,1,&uStackX_20);
  lVar4 = system_main_module_state;
  lVar1 = *(int64_t *)(lVar5 + 0x458);
  lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
  auStack_28[0] = uVar6;
  if ((lVar1 != 0) &&
     (*(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar1 != -0x10)) {
    *(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(lVar4 + 0x224);
    auStack_28[0] = *(uint64_t *)(lVar1 + 0x18);
  }
  plVar3 = *(int64_t **)(lVar2 + 0x8400);
  (**(code **)(*plVar3 + 200))(plVar3,0x3d,1,auStack_28);
  lVar4 = system_main_module_state;
  lVar1 = *(int64_t *)(lVar5 + 0x460);
  lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if ((lVar1 != 0) &&
     (*(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar1 != -0x10)) {
    uVar6 = *(uint64_t *)(lVar1 + 0x18);
    *(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(lVar4 + 0x224);
  }
  plVar3 = *(int64_t **)(lVar2 + 0x8400);
  uStackX_8 = uVar6;
  (**(code **)(*plVar3 + 200))(plVar3,0x3e,1,&uStackX_8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800f4090(int64_t param_1,int param_2,int *param_3)
void FUN_1800f4090(int64_t param_1,int param_2,int *param_3)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int8_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int iVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint64_t *puVar12;
  uint64_t uVar13;
  
  uVar13 = 0xfffffffffffffffe;
  lVar5 = param_1 + 0x2b8;
  AcquireSRWLockExclusive();
  if (param_2 != 0) {
    if (param_2 == 2) {
      lVar8 = *(int64_t *)(param_1 + 0xe8);
      if (*(int64_t *)(param_1 + 0xe0) == lVar8) {
        plVar1 = (int64_t *)(param_1 + 0x180);
        lVar8 = *(int64_t *)(param_1 + 0x188);
        lVar11 = *plVar1;
        lVar6 = (lVar8 - lVar11) / 6 + (lVar8 - lVar11 >> 0x3f);
        uVar10 = (lVar6 >> 3) - (lVar6 >> 0x3f);
        iVar9 = (int)uVar10;
        uVar7 = (uint64_t)(iVar9 + 1);
        if (uVar10 < uVar7) {
          FUN_1800f6e70(plVar1,uVar7 - uVar10);
        }
        else {
          lVar6 = lVar11 + uVar7 * 0x30;
          if (lVar6 != lVar8) {
            do {
              FUN_1800f89b0();
              lVar6 = lVar6 + 0x30;
            } while (lVar6 != lVar8);
            lVar11 = *plVar1;
          }
          *(uint64_t *)(param_1 + 0x188) = lVar11 + uVar7 * 0x30;
        }
      }
      else {
        iVar9 = *(int *)(lVar8 + -4);
        *(int64_t *)(param_1 + 0xe8) = lVar8 + -4;
      }
      goto LAB_1800f449a;
    }
    if (param_2 != 1) {
      if (param_2 == 3) {
        lVar8 = *(int64_t *)(param_1 + 0x128);
        if (*(int64_t *)(param_1 + 0x120) == lVar8) {
          uVar10 = *(int64_t *)(param_1 + 0x1a8) - *(int64_t *)(param_1 + 0x1a0) >> 4;
          iVar9 = (int)uVar10;
          uVar7 = (uint64_t)(iVar9 + 1);
          if (uVar10 < uVar7) {
            FUN_1800f7100(param_1 + 0x1a0,uVar7 - uVar10);
          }
          else {
            *(uint64_t *)(param_1 + 0x1a8) = uVar7 * 0x10 + *(int64_t *)(param_1 + 0x1a0);
          }
        }
        else {
          iVar9 = *(int *)(lVar8 + -4);
          *(int64_t *)(param_1 + 0x128) = lVar8 + -4;
          puVar3 = (int8_t *)((int64_t)iVar9 * 0x10 + *(int64_t *)(param_1 + 0x1a0));
          *puVar3 = 0;
          *(uint64_t *)(puVar3 + 4) = 0xffffffffffffffff;
          *(int32_t *)(puVar3 + 0xc) = 0;
        }
      }
      else {
        iVar9 = -1;
      }
      goto LAB_1800f449a;
    }
    lVar8 = *(int64_t *)(param_1 + 0x108);
    if (*(int64_t *)(param_1 + 0x100) != lVar8) {
      iVar9 = *(int *)(lVar8 + -4);
      *(int64_t *)(param_1 + 0x108) = lVar8 + -4;
      goto LAB_1800f449a;
    }
    iVar9 = (int)(*(int64_t *)(param_1 + 0x168) - *(int64_t *)(param_1 + 0x160) >> 3);
    puVar3 = (int8_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,3,uVar13,lVar5,1);
    *puVar3 = 0;
    puVar4 = (uint64_t *)0x0;
    *(uint64_t *)(puVar3 + 8) = 0;
    *(uint64_t *)(puVar3 + 0x10) = 0;
    LOCK();
    *(int32_t *)(puVar3 + 0x18) = 0;
    UNLOCK();
    *(uint64_t *)(puVar3 + 0x20) = 0;
    *(int32_t *)(puVar3 + 0x28) = 0xffffffff;
    puVar12 = *(uint64_t **)(param_1 + 0x168);
    if (puVar12 < *(uint64_t **)(param_1 + 0x170)) {
      *(uint64_t **)(param_1 + 0x168) = puVar12 + 1;
      *puVar12 = puVar3;
      goto LAB_1800f449a;
    }
    puVar2 = *(uint64_t **)(param_1 + 0x160);
    lVar8 = (int64_t)puVar12 - (int64_t)puVar2 >> 3;
    if (lVar8 == 0) {
      lVar8 = 1;
LAB_1800f4372:
      puVar4 = (uint64_t *)
               CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar8 * 8,*(int8_t *)(param_1 + 0x178));
      puVar12 = *(uint64_t **)(param_1 + 0x168);
      puVar2 = *(uint64_t **)(param_1 + 0x160);
    }
    else {
      lVar8 = lVar8 * 2;
      if (lVar8 != 0) goto LAB_1800f4372;
    }
    if (puVar2 != puVar12) {
                    // WARNING: Subroutine does not return
      memmove(puVar4,puVar2,(int64_t)puVar12 - (int64_t)puVar2);
    }
    *puVar4 = puVar3;
    if (*(int64_t *)(param_1 + 0x160) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t **)(param_1 + 0x160) = puVar4;
    *(uint64_t **)(param_1 + 0x168) = puVar4 + 1;
    *(uint64_t **)(param_1 + 0x170) = puVar4 + lVar8;
    goto LAB_1800f449a;
  }
  lVar8 = *(int64_t *)(param_1 + 200);
  if (*(int64_t *)(param_1 + 0xc0) != lVar8) {
    iVar9 = *(int *)(lVar8 + -4);
    *(int64_t *)(param_1 + 200) = lVar8 + -4;
    goto LAB_1800f449a;
  }
  iVar9 = (int)(*(int64_t *)(param_1 + 0x148) - *(int64_t *)(param_1 + 0x140) >> 3);
  uVar13 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x1b0,8,3,uVar13,lVar5,1);
  uVar13 = FUN_1800f8be0(uVar13);
  puVar12 = *(uint64_t **)(param_1 + 0x148);
  if (puVar12 < *(uint64_t **)(param_1 + 0x150)) {
    *(uint64_t **)(param_1 + 0x148) = puVar12 + 1;
    *puVar12 = uVar13;
    goto LAB_1800f449a;
  }
  puVar4 = *(uint64_t **)(param_1 + 0x140);
  lVar8 = (int64_t)puVar12 - (int64_t)puVar4 >> 3;
  if (lVar8 == 0) {
    lVar8 = 1;
LAB_1800f4168:
    puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar8 * 8,*(int8_t *)(param_1 + 0x158));
    puVar12 = *(uint64_t **)(param_1 + 0x148);
    puVar4 = *(uint64_t **)(param_1 + 0x140);
  }
  else {
    lVar8 = lVar8 * 2;
    if (lVar8 != 0) goto LAB_1800f4168;
    puVar2 = (uint64_t *)0x0;
  }
  if (puVar4 != puVar12) {
                    // WARNING: Subroutine does not return
    memmove(puVar2,puVar4,(int64_t)puVar12 - (int64_t)puVar4);
  }
  *puVar2 = uVar13;
  if (*(int64_t *)(param_1 + 0x140) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t **)(param_1 + 0x140) = puVar2;
  *(uint64_t **)(param_1 + 0x148) = puVar2 + 1;
  *(uint64_t **)(param_1 + 0x150) = puVar2 + lVar8;
LAB_1800f449a:
  *param_3 = iVar9;
                    // WARNING: Could not recover jumptable at 0x0001808ffbd8. Too many branches
                    // WARNING: Treating indirect jump as call
  ReleaseSRWLockExclusive(lVar5);
  return;
}



uint64_t FUN_1800f44d0(int64_t param_1,int param_2)

{
  uint64_t uVar1;
  
  AcquireSRWLockShared(param_1 + 0x2b8);
  uVar1 = *(uint64_t *)(*(int64_t *)(param_1 + 0x140) + (int64_t)param_2 * 8);
  ReleaseSRWLockShared(param_1 + 0x2b8);
  return uVar1;
}






// 函数: void FUN_1800f4530(uint64_t *param_1)
void FUN_1800f4530(uint64_t *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    ReleaseSRWLockShared(*param_1);
  }
  return;
}



int64_t FUN_1800f4560(int64_t param_1,int param_2)

{
  int64_t lVar1;
  
  AcquireSRWLockShared(param_1 + 0x2b8);
  lVar1 = *(int64_t *)(param_1 + 0x1a0);
  ReleaseSRWLockShared(param_1 + 0x2b8);
  return (int64_t)param_2 * 0x10 + lVar1;
}






// 函数: void FUN_1800f45c0(int8_t *param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
void FUN_1800f45c0(int8_t *param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)

{
  int8_t *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  
  puVar1 = param_1 + 0x2b8;
  AcquireSRWLockExclusive(puVar1,param_2,param_3,param_4,0xfffffffffffffffe,puVar1,0);
  *param_1 = 1;
  lVar2 = (int64_t)(int)param_2 * 8;
  FUN_1800f46a0(*(int64_t *)(*(int64_t *)(param_1 + 0x140) + lVar2) + 8,param_3);
  *(uint64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x140) + lVar2) + 0x1a8) = param_4;
  **(int8_t **)(lVar2 + *(int64_t *)(param_1 + 0x140)) = 1;
  uVar4 = *(int32_t *)(param_3 + 0x94);
  uVar5 = *(int32_t *)(param_3 + 0x98);
  uVar6 = *(int32_t *)(param_3 + 0x9c);
  lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0x140) + lVar2);
  *(int32_t *)(lVar3 + 400) = *(int32_t *)(param_3 + 0x90);
  *(int32_t *)(lVar3 + 0x194) = uVar4;
  *(int32_t *)(lVar3 + 0x198) = uVar5;
  *(int32_t *)(lVar3 + 0x19c) = uVar6;
  uVar4 = *(int32_t *)(param_3 + 0x84);
  uVar5 = *(int32_t *)(param_3 + 0x88);
  uVar6 = *(int32_t *)(param_3 + 0x8c);
  lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x140) + lVar2);
  *(int32_t *)(lVar2 + 0x180) = *(int32_t *)(param_3 + 0x80);
  *(int32_t *)(lVar2 + 0x184) = uVar4;
  *(int32_t *)(lVar2 + 0x188) = uVar5;
  *(int32_t *)(lVar2 + 0x18c) = uVar6;
                    // WARNING: Could not recover jumptable at 0x0001808ffbd8. Too many branches
                    // WARNING: Treating indirect jump as call
  ReleaseSRWLockExclusive(puVar1);
  return;
}



int64_t * FUN_1800f46a0(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  
  plVar1 = (int64_t *)*param_2;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)*param_1;
  *param_1 = (int64_t)plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (int64_t *)param_2[1];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[1];
  param_1[1] = (int64_t)plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (int64_t *)param_2[2];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[2];
  param_1[2] = (int64_t)plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (int64_t *)param_2[3];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[3];
  param_1[3] = (int64_t)plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (int64_t *)param_2[4];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[4];
  param_1[4] = (int64_t)plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (int64_t *)param_2[5];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[5];
  param_1[5] = (int64_t)plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (int64_t *)param_2[6];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[6];
  param_1[6] = (int64_t)plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (int64_t *)param_2[7];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[7];
  param_1[7] = (int64_t)plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (int64_t *)param_2[8];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[8];
  param_1[8] = (int64_t)plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (int64_t *)param_2[9];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[9];
  param_1[9] = (int64_t)plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (int64_t *)param_2[10];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[10];
  param_1[10] = (int64_t)plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (int64_t *)param_2[0xb];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[0xb];
  param_1[0xb] = (int64_t)plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (int64_t *)param_2[0xc];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[0xc];
  param_1[0xc] = (int64_t)plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(int *)(param_1 + 0xd) = (int)param_2[0xd];
  *(int32_t *)((int64_t)param_1 + 0x6c) = *(int32_t *)((int64_t)param_2 + 0x6c);
  *(int *)(param_1 + 0xe) = (int)param_2[0xe];
  *(int32_t *)((int64_t)param_1 + 0x74) = *(int32_t *)((int64_t)param_2 + 0x74);
  *(int *)(param_1 + 0xf) = (int)param_2[0xf];
  *(int32_t *)((int64_t)param_1 + 0x7c) = *(int32_t *)((int64_t)param_2 + 0x7c);
  lVar3 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = lVar3;
  lVar3 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = lVar3;
  *(int *)(param_1 + 0x14) = (int)param_2[0x14];
  return param_1;
}






// 函数: void FUN_1800f4980(int64_t param_1,int param_2,int64_t param_3,uint64_t param_4)
void FUN_1800f4980(int64_t param_1,int param_2,int64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t lVar5;
  
  uVar4 = 0xfffffffffffffffe;
  lVar1 = param_1 + 0x2b8;
  lVar5 = lVar1;
  AcquireSRWLockExclusive(lVar1);
  *(int8_t *)(param_1 + 1) = 1;
  lVar2 = *(int64_t *)(param_1 + 0x180);
  puVar3 = (uint64_t *)(lVar2 + 8 + (int64_t)param_2 * 0x30);
  if (puVar3 != (uint64_t *)(param_3 + 0x18)) {
    FUN_1800f7cf0(puVar3,*(uint64_t *)(param_3 + 0x18),*(uint64_t *)(param_3 + 0x20),param_4,
                  uVar4,lVar5,1);
    lVar2 = *(int64_t *)(param_1 + 0x180);
  }
  *(int8_t *)((int64_t)param_2 * 0x30 + lVar2) = 1;
                    // WARNING: Could not recover jumptable at 0x0001808ffbd8. Too many branches
                    // WARNING: Treating indirect jump as call
  ReleaseSRWLockExclusive(lVar1);
  return;
}






// 函数: void FUN_1800f4a20(int64_t param_1,int param_2,int param_3,uint64_t param_4)
void FUN_1800f4a20(int64_t param_1,int param_2,int param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int8_t auStackX_8 [16];
  uint64_t uVar5;
  int64_t lVar6;
  int8_t uVar7;
  
  uVar5 = 0xfffffffffffffffe;
  lVar4 = (int64_t)param_2;
  lVar1 = param_1 + 0x2b8;
  lVar6 = lVar1;
  AcquireSRWLockExclusive(lVar1);
  uVar7 = 1;
  *(int8_t *)(param_1 + 3) = 1;
  lVar2 = *(int64_t *)(param_1 + 0x1a0);
  if (*(int *)(lVar2 + 0xc + lVar4 * 0x10) != param_3) {
    if (*(int *)(lVar2 + 4 + lVar4 * 0x10) != -1) {
      FUN_18030a460(param_1 + 0x58,*(uint64_t *)(lVar2 + 4 + lVar4 * 0x10));
    }
    puVar3 = (uint64_t *)
             FUN_18030a2a0(param_1 + 0x58,auStackX_8,param_3,param_4,uVar5,lVar6,uVar7);
    *(uint64_t *)(*(int64_t *)(param_1 + 0x1a0) + 4 + lVar4 * 0x10) = *puVar3;
  }
  *(int *)(*(int64_t *)(param_1 + 0x1a0) + 0xc + lVar4 * 0x10) = param_3;
  *(int8_t *)(*(int64_t *)(param_1 + 0x1a0) + lVar4 * 0x10) = 1;
                    // WARNING: Could not recover jumptable at 0x0001808ffbd8. Too many branches
                    // WARNING: Treating indirect jump as call
  ReleaseSRWLockExclusive(lVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800f4ad0(uint64_t param_1,int64_t *param_2,int64_t param_3)
void FUN_1800f4ad0(uint64_t param_1,int64_t *param_2,int64_t param_3)

{
  byte bVar1;
  int64_t *plVar2;
  bool bVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  byte *pbVar6;
  uint uVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  int iVar10;
  void *puVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  int8_t auStack_118 [32];
  int32_t uStack_f8;
  uint64_t uStack_f0;
  int64_t *plStack_e8;
  void *puStack_d8;
  byte *pbStack_d0;
  int iStack_c8;
  byte abStack_c0 [136];
  uint64_t uStack_38;
  
  lVar8 = system_system_data_config;
  uStack_f0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  uStack_f8 = 0;
  puVar9 = (uint64_t *)(system_system_data_config + 0x4110);
  puStack_d8 = &unknown_var_3432_ptr;
  pbStack_d0 = abStack_c0;
  abStack_c0[0] = 0;
  iStack_c8 = *(int *)(param_3 + 0x10);
  puVar11 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar11 = *(void **)(param_3 + 8);
  }
  plStack_e8 = param_2;
  strcpy_s(abStack_c0,0x80,puVar11);
  puVar12 = *(uint64_t **)(lVar8 + 0x4120);
  puVar4 = puVar9;
  if (puVar12 != (uint64_t *)0x0) {
    do {
      if (iStack_c8 == 0) {
        bVar3 = false;
        puVar13 = (uint64_t *)puVar12[1];
      }
      else {
        if (*(int *)(puVar12 + 6) == 0) {
          bVar3 = true;
        }
        else {
          pbVar6 = pbStack_d0;
          do {
            uVar7 = (uint)pbVar6[puVar12[5] - (int64_t)pbStack_d0];
            iVar10 = *pbVar6 - uVar7;
            if (*pbVar6 != uVar7) break;
            pbVar6 = pbVar6 + 1;
          } while (uVar7 != 0);
          bVar3 = 0 < iVar10;
          if (iVar10 < 1) {
            puVar13 = (uint64_t *)puVar12[1];
            goto LAB_1800f4beb;
          }
        }
        puVar13 = (uint64_t *)*puVar12;
      }
LAB_1800f4beb:
      puVar5 = puVar12;
      if (bVar3) {
        puVar5 = puVar4;
      }
      puVar4 = puVar5;
      puVar12 = puVar13;
    } while (puVar13 != (uint64_t *)0x0);
    if (puVar5 != puVar9) {
      if (*(int *)(puVar5 + 6) == 0) goto LAB_1800f4c2c;
      if (iStack_c8 != 0) {
        pbVar6 = (byte *)puVar5[5];
        lVar8 = (int64_t)pbStack_d0 - (int64_t)pbVar6;
        do {
          bVar1 = *pbVar6;
          uVar7 = (uint)pbVar6[lVar8];
          if (bVar1 != uVar7) break;
          pbVar6 = pbVar6 + 1;
        } while (uVar7 != 0);
        if ((int)(bVar1 - uVar7) < 1) goto LAB_1800f4c2c;
      }
    }
  }
  puVar5 = puVar9;
LAB_1800f4c2c:
  puStack_d8 = &system_state_ptr;
  if (puVar5 == puVar9) {
    *param_2 = 0;
  }
  else {
    plVar2 = (int64_t *)puVar5[0x17];
    *param_2 = (int64_t)plVar2;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x28))();
    }
  }
  uStack_f8 = 1;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_118);
}






// 函数: void FUN_1800f4c90(void)
void FUN_1800f4c90(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1800f5a90(uint64_t param_1,int64_t *param_2,uint64_t param_3,int64_t *param_4)

{
  uint *puVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  uint uVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t lVar7;
  bool bVar8;
  
  lVar5 = system_system_data_config;
  if (*(char *)((int64_t)param_2 + 0x41) != '\0') {
    if ((int64_t *)*param_4 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*param_4 + 0x38))();
    }
    return 0;
  }
  param_2[0xb] = param_2[10];
  *(int8_t *)((int64_t)param_2 + 0x41) = 1;
  puVar1 = (uint *)(lVar5 + 0x250);
  LOCK();
  uVar4 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar6 = uVar4 >> 0xc;
  if (*(int64_t *)(lVar5 + 600 + (uint64_t)uVar6 * 8) == 0) {
    lVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18000,0x1e,param_4,0xfffffffffffffffe);
    plVar3 = (int64_t *)(lVar5 + 600 + (uint64_t)uVar6 * 8);
    LOCK();
    bVar8 = *plVar3 == 0;
    if (bVar8) {
      *plVar3 = lVar7;
    }
    UNLOCK();
    if ((!bVar8) && (lVar7 != 0)) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  puVar2 = (uint64_t *)
           (*(int64_t *)(lVar5 + 600 + (uint64_t)uVar6 * 8) +
           (uint64_t)(uVar4 + uVar6 * -0x1000) * 0x18);
  plVar3 = (int64_t *)*param_4;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x28))();
  }
  *puVar2 = param_2;
  (**(code **)(*param_2 + 0x28))(param_2);
  puVar2[1] = plVar3;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x28))();
  }
  *(int8_t *)(puVar2 + 2) = 0;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  if ((int64_t *)*param_4 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_4 + 0x38))();
  }
  return 1;
}






