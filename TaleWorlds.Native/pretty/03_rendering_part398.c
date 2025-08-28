#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part398.c - 8 个函数

// 函数: void FUN_18048bbd0(int64_t param_1,int64_t *param_2,char param_3)
void FUN_18048bbd0(int64_t param_1,int64_t *param_2,char param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int64_t *aplStackX_10 [2];
  void **ppuStackX_20;
  uint64_t uStack_60;
  void *puStack_58;
  uint64_t *puStack_50;
  int32_t uStack_48;
  uint64_t uStack_40;
  
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  puVar6 = (uint64_t *)(param_1 + 0x108);
  puVar5 = *(uint64_t **)(param_1 + 0x118);
  puVar4 = puVar6;
  if (puVar5 != (uint64_t *)0x0) {
    do {
      if ((int64_t *)puVar5[4] < param_2) {
        puVar5 = (uint64_t *)*puVar5;
      }
      else {
        puVar4 = puVar5;
        puVar5 = (uint64_t *)puVar5[1];
      }
    } while (puVar5 != (uint64_t *)0x0);
    if ((puVar4 != puVar6) && ((int64_t *)puVar4[4] <= param_2)) goto LAB_18048bc4f;
  }
  puVar4 = puVar6;
LAB_18048bc4f:
  if (puVar4 == puVar6) {
    if ((int)param_2[0x14] == -1) {
      FUN_1801a9c10(param_2);
    }
    uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x880,0x10,0x1f);
    plVar3 = (int64_t *)FUN_180301040(uVar2);
    puVar4 = puVar6;
    puVar5 = *(uint64_t **)(param_1 + 0x118);
    while (puVar5 != (uint64_t *)0x0) {
      if ((int64_t *)puVar5[4] < param_2) {
        puVar5 = (uint64_t *)*puVar5;
      }
      else {
        puVar4 = puVar5;
        puVar5 = (uint64_t *)puVar5[1];
      }
    }
    if ((puVar4 == puVar6) || (param_2 < (int64_t *)puVar4[4])) {
      puVar4 = (uint64_t *)FUN_18048c8f0(puVar6,&ppuStackX_20);
      puVar4 = (uint64_t *)*puVar4;
    }
    if (plVar3 != (int64_t *)0x0) {
      aplStackX_10[0] = plVar3;
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    aplStackX_10[0] = (int64_t *)puVar4[5];
    puVar4[5] = plVar3;
    if (aplStackX_10[0] != (int64_t *)0x0) {
      (**(code **)(*aplStackX_10[0] + 0x38))();
    }
    puVar4 = puVar6;
    puVar5 = *(uint64_t **)(param_1 + 0x118);
    while (puVar5 != (uint64_t *)0x0) {
      if ((int64_t *)puVar5[4] < param_2) {
        puVar5 = (uint64_t *)*puVar5;
      }
      else {
        puVar4 = puVar5;
        puVar5 = (uint64_t *)puVar5[1];
      }
    }
    if ((puVar4 == puVar6) || (param_2 < (int64_t *)puVar4[4])) {
      puVar4 = (uint64_t *)FUN_18048c8f0(puVar6,aplStackX_10);
      puVar4 = (uint64_t *)*puVar4;
    }
    lVar1 = puVar4[5];
    *(int8_t *)(lVar1 + 0xde) = 1;
    *(int8_t *)(lVar1 + 0x826) = 1;
    *(int8_t *)(lVar1 + 0xe8) = 1;
    FUN_1803033b0(lVar1,1);
    *(int8_t *)(lVar1 + 0x100) = 0;
    *(int32_t *)(lVar1 + 0xd0) = 0;
    *(uint *)(lVar1 + 0xcc) = *(uint *)(lVar1 + 0xcc) | 3;
    *(int8_t *)(lVar1 + 0x827) = 0;
    ppuStackX_20 = &puStack_58;
    puStack_58 = &system_data_buffer_ptr;
    uStack_40 = 0;
    puStack_50 = (uint64_t *)0x0;
    uStack_48 = 0;
    CoreEngineDataBufferProcessor(&puStack_58,9);
    *puStack_50 = 0x69616e626d756874;
    *(int16_t *)(puStack_50 + 1) = 0x6c;
    uStack_48 = 9;
    ppuStackX_20 = &puStack_58;
    SystemCore_ConfigurationHandler0(lVar1 + 0x858,&puStack_58);
    puStack_58 = &system_data_buffer_ptr;
    if (puStack_50 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puStack_50 = (uint64_t *)0x0;
    uStack_40 = uStack_40 & 0xffffffff00000000;
    *(int32_t *)(lVar1 + 0xf4) = 0x3f000000;
    puVar4 = puVar6;
    puVar5 = *(uint64_t **)(param_1 + 0x118);
    while (puVar5 != (uint64_t *)0x0) {
      if ((int64_t *)puVar5[4] < param_2) {
        puVar5 = (uint64_t *)*puVar5;
      }
      else {
        puVar4 = puVar5;
        puVar5 = (uint64_t *)puVar5[1];
      }
    }
    if ((puVar4 == puVar6) || (param_2 < (int64_t *)puVar4[4])) {
      puVar4 = (uint64_t *)FUN_18048c8f0(puVar6,aplStackX_10);
      puVar4 = (uint64_t *)*puVar4;
    }
    FUN_180301f30(puVar4[5],param_2);
    *(int32_t *)(param_2 + 0x4f8) = 7;
    *(int16_t *)(param_2 + 0xc172) = 0x101;
    *(int8_t *)(param_2 + 0x517) = 1;
    *(int8_t *)((int64_t)param_2 + 0x1d9) = 1;
    puVar4 = puVar6;
    puVar5 = *(uint64_t **)(param_1 + 0x118);
    while (puVar5 != (uint64_t *)0x0) {
      if ((int64_t *)puVar5[4] < param_2) {
        puVar5 = (uint64_t *)*puVar5;
      }
      else {
        puVar4 = puVar5;
        puVar5 = (uint64_t *)puVar5[1];
      }
    }
    if ((puVar4 == puVar6) || (param_2 < (int64_t *)puVar4[4])) {
      puVar4 = (uint64_t *)FUN_18048c8f0(puVar6,aplStackX_10);
      puVar4 = (uint64_t *)*puVar4;
    }
    *(int8_t *)(puVar4[5] + 0x821) = 1;
    puVar4 = puVar6;
    puVar5 = *(uint64_t **)(param_1 + 0x118);
    if (param_3 == '\0') {
      while (puVar5 != (uint64_t *)0x0) {
        if ((int64_t *)puVar5[4] < param_2) {
          puVar5 = (uint64_t *)*puVar5;
        }
        else {
          puVar4 = puVar5;
          puVar5 = (uint64_t *)puVar5[1];
        }
      }
      if ((puVar4 == puVar6) || (param_2 < (int64_t *)puVar4[4])) {
        puVar4 = (uint64_t *)FUN_18048c8f0(puVar6,aplStackX_10);
        puVar4 = (uint64_t *)*puVar4;
      }
      *(int8_t *)(puVar4[5] + 0x823) = 0;
      puVar4 = puVar6;
      puVar5 = *(uint64_t **)(param_1 + 0x118);
      while (puVar5 != (uint64_t *)0x0) {
        if ((int64_t *)puVar5[4] < param_2) {
          puVar5 = (uint64_t *)*puVar5;
        }
        else {
          puVar4 = puVar5;
          puVar5 = (uint64_t *)puVar5[1];
        }
      }
      if ((puVar4 == puVar6) || (param_2 < (int64_t *)puVar4[4])) {
        puVar4 = (uint64_t *)FUN_18048c8f0(puVar6,aplStackX_10);
        puVar4 = (uint64_t *)*puVar4;
      }
      *(int8_t *)(puVar4[5] + 0x824) = 0;
      puVar4 = puVar6;
      puVar5 = *(uint64_t **)(param_1 + 0x118);
      while (puVar5 != (uint64_t *)0x0) {
        if ((int64_t *)puVar5[4] < param_2) {
          puVar5 = (uint64_t *)*puVar5;
        }
        else {
          puVar4 = puVar5;
          puVar5 = (uint64_t *)puVar5[1];
        }
      }
      if ((puVar4 == puVar6) || (param_2 < (int64_t *)puVar4[4])) {
        puVar4 = (uint64_t *)FUN_18048c8f0(puVar6,aplStackX_10);
        puVar4 = (uint64_t *)*puVar4;
      }
      FUN_1803033b0(puVar4[5],0);
      puVar4 = puVar6;
      puVar5 = *(uint64_t **)(param_1 + 0x118);
      while (puVar5 != (uint64_t *)0x0) {
        if ((int64_t *)puVar5[4] < param_2) {
          puVar5 = (uint64_t *)*puVar5;
        }
        else {
          puVar4 = puVar5;
          puVar5 = (uint64_t *)puVar5[1];
        }
      }
      if ((puVar4 == puVar6) || (param_2 < (int64_t *)puVar4[4])) {
        puVar4 = (uint64_t *)FUN_18048c8f0(puVar6,aplStackX_10);
        puVar4 = (uint64_t *)*puVar4;
      }
      *(int8_t *)(puVar4[5] + 0x10d) = 1;
      *(int8_t *)(param_2 + 0x1033) = 0;
    }
    else {
      while (puVar5 != (uint64_t *)0x0) {
        if ((int64_t *)puVar5[4] < param_2) {
          puVar5 = (uint64_t *)*puVar5;
        }
        else {
          puVar4 = puVar5;
          puVar5 = (uint64_t *)puVar5[1];
        }
      }
      if ((puVar4 == puVar6) || (param_2 < (int64_t *)puVar4[4])) {
        puVar4 = (uint64_t *)FUN_18048c8f0(puVar6,aplStackX_10);
        puVar4 = (uint64_t *)*puVar4;
      }
      *(int8_t *)(puVar4[5] + 0x823) = 1;
      puVar4 = puVar6;
      puVar5 = *(uint64_t **)(param_1 + 0x118);
      while (puVar5 != (uint64_t *)0x0) {
        if ((int64_t *)puVar5[4] < param_2) {
          puVar5 = (uint64_t *)*puVar5;
        }
        else {
          puVar4 = puVar5;
          puVar5 = (uint64_t *)puVar5[1];
        }
      }
      if ((puVar4 == puVar6) || (param_2 < (int64_t *)puVar4[4])) {
        puVar4 = (uint64_t *)FUN_18048c8f0(puVar6,aplStackX_10);
        puVar4 = (uint64_t *)*puVar4;
      }
      FUN_180303b70(puVar4[5],0x7ffbe9eb,0);
      puVar4 = puVar6;
      puVar5 = *(uint64_t **)(param_1 + 0x118);
      while (puVar5 != (uint64_t *)0x0) {
        if ((int64_t *)puVar5[4] < param_2) {
          puVar5 = (uint64_t *)*puVar5;
        }
        else {
          puVar4 = puVar5;
          puVar5 = (uint64_t *)puVar5[1];
        }
      }
      if ((puVar4 == puVar6) || (param_2 < (int64_t *)puVar4[4])) {
        puVar4 = (uint64_t *)FUN_18048c8f0(puVar6,aplStackX_10);
        puVar4 = (uint64_t *)*puVar4;
      }
      *(int8_t *)(puVar4[5] + 0x10d) = 1;
      puVar4 = puVar6;
      puVar5 = *(uint64_t **)(param_1 + 0x118);
      while (puVar5 != (uint64_t *)0x0) {
        if ((int64_t *)puVar5[4] < param_2) {
          puVar5 = (uint64_t *)*puVar5;
        }
        else {
          puVar4 = puVar5;
          puVar5 = (uint64_t *)puVar5[1];
        }
      }
      if ((puVar4 == puVar6) || (param_2 < (int64_t *)puVar4[4])) {
        puVar4 = (uint64_t *)FUN_18048c8f0(puVar6,&ppuStackX_20);
        puVar4 = (uint64_t *)*puVar4;
      }
      lVar1 = puVar4[5];
      *(int8_t *)(lVar1 + 0x824) = 1;
      if (*(int64_t *)(lVar1 + 0x588) != *(int64_t *)(lVar1 + 0x6d0)) {
        FUN_1802e1590(lVar1 + 0x560);
      }
      puVar4 = puVar6;
      puVar5 = *(uint64_t **)(param_1 + 0x118);
      if (*(int *)(system_message_buffer + 0x1d48) == 6) {
        while (puVar5 != (uint64_t *)0x0) {
          if ((int64_t *)puVar5[4] < param_2) {
            puVar5 = (uint64_t *)*puVar5;
          }
          else {
            puVar4 = puVar5;
            puVar5 = (uint64_t *)puVar5[1];
          }
        }
        if ((puVar4 == puVar6) || (param_2 < (int64_t *)puVar4[4])) {
          puVar4 = (uint64_t *)FUN_18048c8f0(puVar6,&uStack_60);
          puVar4 = (uint64_t *)*puVar4;
        }
        *(int32_t *)(puVar4[5] + 0x5b4) = 0x3e800000;
      }
      else {
        while (puVar5 != (uint64_t *)0x0) {
          if ((int64_t *)puVar5[4] < param_2) {
            puVar5 = (uint64_t *)*puVar5;
          }
          else {
            puVar4 = puVar5;
            puVar5 = (uint64_t *)puVar5[1];
          }
        }
        if ((puVar4 == puVar6) || (param_2 < (int64_t *)puVar4[4])) {
          puVar4 = (uint64_t *)FUN_18048c8f0(puVar6,&uStack_60);
          puVar4 = (uint64_t *)*puVar4;
        }
        *(int32_t *)(puVar4[5] + 0x5b4) = 0x3f000000;
      }
    }
    puVar4 = puVar6;
    puVar5 = *(uint64_t **)(param_1 + 0x118);
    if (*(int *)(system_message_buffer + 0x1d48) == 6) {
      while (puVar5 != (uint64_t *)0x0) {
        if ((int64_t *)puVar5[4] < param_2) {
          puVar5 = (uint64_t *)*puVar5;
        }
        else {
          puVar4 = puVar5;
          puVar5 = (uint64_t *)puVar5[1];
        }
      }
      if ((puVar4 == puVar6) || (param_2 < (int64_t *)puVar4[4])) {
        puVar4 = (uint64_t *)FUN_18048c8f0(puVar6,aplStackX_10);
        puVar4 = (uint64_t *)*puVar4;
      }
      *(int32_t *)(puVar4[5] + 0xf4) = 0x3e800000;
    }
    else {
      while (puVar5 != (uint64_t *)0x0) {
        if ((int64_t *)puVar5[4] < param_2) {
          puVar5 = (uint64_t *)*puVar5;
        }
        else {
          puVar4 = puVar5;
          puVar5 = (uint64_t *)puVar5[1];
        }
      }
      if ((puVar4 == puVar6) || (param_2 < (int64_t *)puVar4[4])) {
        puVar4 = (uint64_t *)FUN_18048c8f0(puVar6,aplStackX_10);
        puVar4 = (uint64_t *)*puVar4;
      }
      *(int32_t *)(puVar4[5] + 0xf4) = 0x3f000000;
    }
    puVar4 = puVar6;
    puVar5 = *(uint64_t **)(param_1 + 0x118);
    while (puVar5 != (uint64_t *)0x0) {
      if ((int64_t *)puVar5[4] < param_2) {
        puVar5 = (uint64_t *)*puVar5;
      }
      else {
        puVar4 = puVar5;
        puVar5 = (uint64_t *)puVar5[1];
      }
    }
    if ((puVar4 == puVar6) || (param_2 < (int64_t *)puVar4[4])) {
      puVar4 = (uint64_t *)FUN_18048c8f0(puVar6,aplStackX_10);
      puVar4 = (uint64_t *)*puVar4;
    }
    (**(code **)(*(int64_t *)puVar4[5] + 0x88))((int64_t *)puVar4[5],1);
  }
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  return;
}





// 函数: void FUN_18048c490(int64_t param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4,
void FUN_18048c490(int64_t param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4,
                  int64_t *param_5,int64_t param_6,int64_t param_7,int32_t param_8,
                  int32_t param_9,int32_t param_10)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  void *puVar4;
  int64_t *plStack_e8;
  int64_t *plStack_e0;
  int64_t *plStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  int64_t *plStack_c0;
  void *puStack_b8;
  uint64_t uStack_b0;
  int32_t uStack_a8;
  uint64_t uStack_a0;
  void *puStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int8_t uStack_6c;
  int32_t uStack_68;
  uint64_t uStack_50;
  code *pcStack_48;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  plStack_e8 = (int64_t *)0x0;
  plStack_e0 = (int64_t *)0x0;
  plStack_d8 = (int64_t *)0x0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  plStack_c0 = (int64_t *)0x0;
  puStack_b8 = &system_data_buffer_ptr;
  uStack_a0 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  puStack_98 = &system_data_buffer_ptr;
  uStack_80 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_50 = 0;
  pcStack_48 = _guard_check_icall;
  uStack_6c = 1;
  uStack_68 = 0;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar3 = param_2;
  if (plStack_e8 != (int64_t *)0x0) {
    lVar1 = *plStack_e8;
    plStack_e8 = param_2;
    (**(code **)(lVar1 + 0x38))();
    plVar3 = plStack_e8;
  }
  plStack_e8 = plVar3;
  if (param_3 != (int64_t *)0x0) {
    (**(code **)(*param_3 + 0x28))(param_3);
  }
  plVar3 = param_3;
  if (plStack_e0 != (int64_t *)0x0) {
    lVar1 = *plStack_e0;
    plStack_e0 = param_3;
    (**(code **)(lVar1 + 0x38))();
    plVar3 = plStack_e0;
  }
  plStack_e0 = plVar3;
  if (param_4 != (int64_t *)0x0) {
    (**(code **)(*param_4 + 0x28))(param_4);
  }
  plVar3 = param_4;
  if (plStack_d8 != (int64_t *)0x0) {
    lVar1 = *plStack_d8;
    plStack_d8 = param_4;
    (**(code **)(lVar1 + 0x38))();
    plVar3 = plStack_d8;
  }
  plStack_d8 = plVar3;
  if (param_5 != (int64_t *)0x0) {
    (**(code **)(*param_5 + 0x28))(param_5);
  }
  plVar3 = plStack_c0;
  plStack_c0 = param_5;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_6 + 8) != (void *)0x0) {
    puVar4 = *(void **)(param_6 + 8);
  }
  (**(code **)(puStack_b8 + 0x10))(&puStack_b8,puVar4);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_7 + 8) != (void *)0x0) {
    puVar4 = *(void **)(param_7 + 8);
  }
  (**(code **)(puStack_98 + 0x10))(&puStack_98,puVar4);
  uStack_78 = param_8;
  uStack_74 = param_9;
  uStack_70 = param_10;
  FUN_1802ee720(plStack_c0,0);
  lVar1 = *(int64_t *)(param_1 + 0x138);
  lVar2 = *(int64_t *)(param_1 + 0x140);
  if ((lVar2 == *(int64_t *)(param_1 + 0x148)) || (lVar1 != lVar2)) {
    FUN_18048ca70((int64_t *)(param_1 + 0x138),lVar1,&plStack_e8);
  }
  else {
    FUN_180489f80(lVar2,&plStack_e8);
    *(int64_t *)(param_1 + 0x140) = *(int64_t *)(param_1 + 0x140) + 0xa8;
  }
  FUN_18048a0c0(&plStack_e8);
  return;
}



uint64_t * FUN_18048c6f0(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int8_t auStackX_8 [32];
  
  puVar1 = (uint64_t *)param_1[2];
  puVar3 = param_1;
  if (puVar1 != (uint64_t *)0x0) {
    param_3 = param_1;
    do {
      if ((uint64_t)puVar1[4] < *param_2) {
        puVar1 = (uint64_t *)*puVar1;
      }
      else {
        param_3 = puVar1;
        puVar1 = (uint64_t *)puVar1[1];
      }
      puVar3 = param_3;
    } while (puVar1 != (uint64_t *)0x0);
  }
  if ((puVar3 != param_1) && ((uint64_t)puVar3[4] <= *param_2)) {
    return puVar3 + 5;
  }
  plVar2 = (int64_t *)FUN_18048c8f0(param_1,auStackX_8,param_3,puVar3,param_2);
  return (uint64_t *)(*plVar2 + 0x28);
}





// 函数: void FUN_18048c760(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18048c760(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_18048c870(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_18048c780(int64_t *param_1)
void FUN_18048c780(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0xa8) {
    FUN_18048a0c0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_18048c7f0(int64_t *param_1)
void FUN_18048c7f0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  if (lVar2 != lVar1) {
    do {
      FUN_18048a0c0(lVar2);
      lVar2 = lVar2 + 0xa8;
    } while (lVar2 != lVar1);
    param_1[1] = *param_1;
    return;
  }
  param_1[1] = lVar2;
  return;
}





// 函数: void FUN_18048c870(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18048c870(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 != (uint64_t *)0x0) {
    FUN_18048c870(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
    if ((int64_t *)param_2[5] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)param_2[5] + 0x38))();
    }
    if ((int64_t *)param_2[4] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)param_2[4] + 0x38))();
    }
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18048c8f0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t *param_5)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  bool bVar6;
  
  plVar1 = (int64_t *)*param_1;
  if ((param_4 == plVar1) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (param_4 = plVar1, (uint64_t)plVar1[4] < *param_5)) {
LAB_18048c96b:
      uVar5 = 0;
      goto LAB_18048c96e;
    }
  }
  else {
    plVar1 = (int64_t *)func_0x00018066bd70(param_4);
    if (((uint64_t)param_4[4] < *param_5) && (*param_5 < (uint64_t)plVar1[4])) {
      if (*param_4 == 0) goto LAB_18048c96b;
      uVar5 = 1;
      param_4 = plVar1;
LAB_18048c96e:
      if (param_4 != (int64_t *)0x0) {
        FUN_18048cf00(param_1,param_2,param_4,uVar5,param_5);
        return param_2;
      }
    }
  }
  bVar6 = true;
  plVar1 = param_1;
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    plVar2 = (int64_t *)param_1[2];
    do {
      plVar1 = plVar2;
      bVar6 = *param_5 < (uint64_t)plVar1[4];
      if (bVar6) {
        plVar2 = (int64_t *)plVar1[1];
      }
      else {
        plVar2 = (int64_t *)*plVar1;
      }
    } while (plVar2 != (int64_t *)0x0);
  }
  plVar2 = plVar1;
  if (bVar6) {
    if (plVar1 == (int64_t *)param_1[1]) {
      uVar3 = *param_5;
      goto LAB_18048c9dd;
    }
    plVar2 = (int64_t *)func_0x00018066b9a0(plVar1);
  }
  uVar3 = *param_5;
  if (uVar3 <= (uint64_t)plVar2[4]) {
    *param_2 = plVar2;
    return param_2;
  }
LAB_18048c9dd:
  if ((plVar1 == param_1) || (uVar3 < (uint64_t)plVar1[4])) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,(char)param_1[5]);
  plVar2 = (int64_t *)*param_5;
  *(int64_t **)(lVar4 + 0x20) = plVar2;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  *(uint64_t *)(lVar4 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,plVar1,param_1,uVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18048ca70(int64_t *param_1,int64_t param_2,uint64_t param_3)
void FUN_18048ca70(int64_t *param_1,int64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lStackX_8;
  int8_t auStack_c8 [176];
  
  if (param_1[1] != param_1[2]) {
    FUN_180489f80(auStack_c8,param_3);
    FUN_18048cda0(param_1[1],param_1[1] + -0xa8);
    FUN_18048d400(param_2,param_1[1] + -0xa8);
    FUN_18048a0c0(param_2);
    FUN_18048cda0(param_2,auStack_c8);
    param_1[1] = param_1[1] + 0xa8;
    FUN_18048a0c0(auStack_c8);
    return;
  }
  lVar1 = (param_2 - *param_1) +
          SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(param_2 - *param_1),8);
  lVar4 = param_1[1] - *param_1;
  lVar4 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar4),8) + lVar4;
  lVar4 = (lVar4 >> 7) - (lVar4 >> 0x3f);
  if (lVar4 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = lVar4 * 2;
    if (lVar4 == 0) {
      lVar2 = 0;
      goto LAB_18048cb76;
    }
  }
  lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 0xa8,(char)param_1[3]);
LAB_18048cb76:
  FUN_180489f80(((lVar1 >> 7) - (lVar1 >> 0x3f)) * 0xa8 + lVar2,param_3);
  FUN_18048cfd0(&lStackX_8,*param_1,param_2,lVar2);
  FUN_18048cfd0(&lStackX_8,param_2,param_1[1],lStackX_8 + 0xa8);
  lVar1 = param_1[1];
  lVar3 = *param_1;
  if (lVar3 != lVar1) {
    do {
      FUN_18048a0c0(lVar3);
      lVar3 = lVar3 + 0xa8;
    } while (lVar3 != lVar1);
    lVar3 = *param_1;
  }
  if (lVar3 == 0) {
    *param_1 = lVar2;
    param_1[1] = lStackX_8;
    param_1[2] = lVar4 * 0xa8 + lVar2;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(lVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18048cc30(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18048cc30(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  
  plVar6 = (int64_t *)param_1[1];
  plVar2 = (int64_t *)*param_1;
  lVar4 = (int64_t)plVar6 - (int64_t)plVar2 >> 4;
  plVar1 = (int64_t *)0x0;
  if (lVar4 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = lVar4 * 2;
    if (lVar4 == 0) goto LAB_18048cca5;
  }
  plVar1 = (int64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 << 4,(char)param_1[3],param_4,0xfffffffffffffffe);
  plVar6 = (int64_t *)param_1[1];
  plVar2 = (int64_t *)*param_1;
LAB_18048cca5:
  plVar5 = plVar1;
  if (plVar2 != plVar6) {
    plVar3 = plVar2;
    do {
      *plVar5 = *plVar3;
      *plVar3 = 0;
      *(int64_t *)((int64_t)plVar1 + (8 - (int64_t)plVar2) + (int64_t)plVar3) = plVar3[1];
      plVar3[1] = 0;
      plVar3 = plVar3 + 2;
      plVar5 = plVar5 + 2;
    } while (plVar3 != plVar6);
  }
  plVar6 = (int64_t *)*param_2;
  *plVar5 = (int64_t)plVar6;
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x28))();
  }
  plVar6 = (int64_t *)param_2[1];
  plVar5[1] = (int64_t)plVar6;
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x28))();
  }
  plVar6 = (int64_t *)param_1[1];
  plVar2 = (int64_t *)*param_1;
  if (plVar2 != plVar6) {
    do {
      if ((int64_t *)plVar2[1] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)plVar2[1] + 0x38))();
      }
      if ((int64_t *)*plVar2 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar2 + 0x38))();
      }
      plVar2 = plVar2 + 2;
    } while (plVar2 != plVar6);
    plVar2 = (int64_t *)*param_1;
  }
  if (plVar2 == (int64_t *)0x0) {
    *param_1 = (int64_t)plVar1;
    param_1[1] = (int64_t)(plVar5 + 2);
    param_1[2] = (int64_t)(plVar1 + lVar4 * 2);
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(plVar2);
}



uint64_t * FUN_18048cda0(uint64_t *param_1,uint64_t *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  param_1[3] = param_2[3];
  param_2[3] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  param_1[5] = param_2[5];
  param_2[5] = 0;
  param_1[6] = &system_state_ptr;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 8) = 0;
  param_1[6] = &system_data_buffer_ptr;
  param_1[9] = 0;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 8) = *(int32_t *)(param_2 + 8);
  param_1[7] = param_2[7];
  *(int32_t *)((int64_t)param_1 + 0x4c) = *(int32_t *)((int64_t)param_2 + 0x4c);
  *(int32_t *)(param_1 + 9) = *(int32_t *)(param_2 + 9);
  *(int32_t *)(param_2 + 8) = 0;
  param_2[7] = 0;
  param_2[9] = 0;
  param_1[10] = &system_state_ptr;
  param_1[0xb] = 0;
  *(int32_t *)(param_1 + 0xc) = 0;
  param_1[10] = &system_data_buffer_ptr;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  *(int32_t *)(param_1 + 0xc) = 0;
  *(int32_t *)(param_1 + 0xc) = *(int32_t *)(param_2 + 0xc);
  param_1[0xb] = param_2[0xb];
  *(int32_t *)((int64_t)param_1 + 0x6c) = *(int32_t *)((int64_t)param_2 + 0x6c);
  *(int32_t *)(param_1 + 0xd) = *(int32_t *)(param_2 + 0xd);
  *(int32_t *)(param_2 + 0xc) = 0;
  param_2[0xb] = 0;
  param_2[0xd] = 0;
  *(int32_t *)(param_1 + 0xe) = *(int32_t *)(param_2 + 0xe);
  *(int32_t *)((int64_t)param_1 + 0x74) = *(int32_t *)((int64_t)param_2 + 0x74);
  *(int32_t *)(param_1 + 0xf) = *(int32_t *)(param_2 + 0xf);
  *(int8_t *)((int64_t)param_1 + 0x7c) = *(int8_t *)((int64_t)param_2 + 0x7c);
  *(int32_t *)(param_1 + 0x10) = *(int32_t *)(param_2 + 0x10);
  param_1[0x13] = 0;
  param_1[0x14] = _guard_check_icall;
  if (param_1 + 0x11 != param_2 + 0x11) {
    FUN_180069130();
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



