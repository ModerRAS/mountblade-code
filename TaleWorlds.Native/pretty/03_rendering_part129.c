#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part129.c - 3 个函数
// 函数: void function_3440a0(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)
void function_3440a0(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  int16_t *puVar7;
  uint64_t *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint64_t uVar12;
  uint uVar13;
  uint64_t uVar14;
  uVar12 = 0;
  puVar5 = (int32_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,0x13,param_4,0,0xfffffffffffffffe,&system_data_buffer_ptr,0,0,0)
  ;
  *(int8_t *)puVar5 = 0;
  CoreEngineSystemCleanup(puVar5);
  *puVar5 = 0x65786950;
  puVar5[1] = 0x68735f6c;
  puVar5[2] = 0x72656461;
  puVar5[3] = 0x706e695f;
  *(uint64_t *)(puVar5 + 4) = 0x657079745f7475;
  iVar9 = *(int *)(param_2 + 0x10);
  CoreEngineDataBufferProcessor(param_2,iVar9 + 0x14);
  puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar6 = 0x64666923;
  puVar6[1] = 0x50206665;
  puVar6[2] = 0x4c455849;
  puVar6[3] = 0x4148535f;
  puVar6[4] = 0xa524544;
  *(int8_t *)(puVar6 + 5) = 0;
  *(int *)(param_2 + 0x10) = iVar9 + 0x14;
  CoreEngineDataBufferProcessor(param_2,iVar9 + 0x2d);
  puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar6 = 0x4f5f5350;
  puVar6[1] = 0x55505455;
  puVar6[2] = 0x4f545f54;
  puVar6[3] = 0x4553555f;
  *(uint64_t *)(puVar6 + 4) = 0x73705f6e69616d20;
  *(int16_t *)(puVar6 + 6) = 0x28;
  *(int *)(param_2 + 0x10) = iVar9 + 0x2d;
  CoreEngineDataBufferProcessor(param_2,iVar9 + 0x44);
  puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *puVar6 = *puVar5;
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(uint64_t *)(puVar6 + 4) = *(uint64_t *)(puVar5 + 4);
  *(int *)(param_2 + 0x10) = iVar9 + 0x44;
  CoreEngineDataBufferProcessor(param_2,iVar9 + 0x49);
  puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar6 = 0x296e4920;
  *(int16_t *)(puVar6 + 1) = 10;
  *(int *)(param_2 + 0x10) = iVar9 + 0x49;
  CoreEngineDataBufferProcessor(param_2,iVar9 + 0x4b);
  puVar7 = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0xa7b;
  *(int8_t *)(puVar7 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar9 + 0x4b;
  CoreEngineDataBufferProcessor(param_2,iVar9 + 0x78);
  puVar8 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar8 = 0x5054554f5f535009;
  puVar8[1] = 0x53555f4f545f5455;
  *(int32_t *)(puVar8 + 2) = 0x754f2045;
  *(int32_t *)((int64_t)puVar8 + 0x14) = 0x203d2074;
  *(int32_t *)(puVar8 + 3) = 0x5f535028;
  *(int32_t *)((int64_t)puVar8 + 0x1c) = 0x5054554f;
  puVar8[4] = 0x53555f4f545f5455;
  *(int32_t *)(puVar8 + 5) = 0x3b302945;
  *(int16_t *)((int64_t)puVar8 + 0x2c) = 10;
  *(int *)(param_2 + 0x10) = iVar9 + 0x78;
  CoreEngineDataBufferProcessor(param_2,iVar9 + 0xbf);
  puVar8 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar8 = 0x7869705f72655009;
  puVar8[1] = 0x69746174735f6c65;
  puVar8[2] = 0x6261697261765f63;
  puVar8[3] = 0x735f70702073656c;
  puVar8[4] = 0x203d206369746174;
  puVar8[5] = 0x7869705f72655028;
  *(int32_t *)(puVar8 + 6) = 0x735f6c65;
  *(int32_t *)((int64_t)puVar8 + 0x34) = 0x69746174;
  *(int32_t *)(puVar8 + 7) = 0x61765f63;
  *(int32_t *)((int64_t)puVar8 + 0x3c) = 0x62616972;
  puVar8[8] = 0xa3b302973656c;
  *(int *)(param_2 + 0x10) = iVar9 + 0xbf;
  CoreEngineDataBufferProcessor(param_2,iVar9 + 0x113);
  puVar8 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar8 = 0x7869705f72655009;
  puVar8[1] = 0x6669646f6d5f6c65;
  puVar8[2] = 0x61765f656c626169;
  puVar8[3] = 0x2073656c62616972;
  puVar8[4] = 0x6669646f6d5f7070;
  puVar8[5] = 0x203d20656c626169;
  *(int32_t *)(puVar8 + 6) = 0x72655028;
  *(int32_t *)((int64_t)puVar8 + 0x34) = 0x7869705f;
  *(int32_t *)(puVar8 + 7) = 0x6d5f6c65;
  *(int32_t *)((int64_t)puVar8 + 0x3c) = 0x6669646f;
  *(int32_t *)(puVar8 + 8) = 0x6c626169;
  *(int32_t *)((int64_t)puVar8 + 0x44) = 0x61765f65;
  *(int32_t *)(puVar8 + 9) = 0x62616972;
  *(int32_t *)((int64_t)puVar8 + 0x4c) = 0x2973656c;
  *(int32_t *)(puVar8 + 10) = 0xa0a3b30;
  *(int8_t *)((int64_t)puVar8 + 0x54) = 0;
  *(int *)(param_2 + 0x10) = iVar9 + 0x113;
  CoreEngineDataBufferProcessor(param_2,iVar9 + 0x15e);
  puVar8 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar8 = 0x7869705f72655009;
  puVar8[1] = 0x6c697875615f6c65;
  puVar8[2] = 0x7261765f79726169;
  puVar8[3] = 0x702073656c626169;
  puVar8[4] = 0x203d207875615f70;
  puVar8[5] = 0x7869705f72655028;
  *(int32_t *)(puVar8 + 6) = 0x615f6c65;
  *(int32_t *)((int64_t)puVar8 + 0x34) = 0x6c697875;
  *(int32_t *)(puVar8 + 7) = 0x79726169;
  *(int32_t *)((int64_t)puVar8 + 0x3c) = 0x7261765f;
  puVar8[8] = 0x302973656c626169;
  *(int32_t *)(puVar8 + 9) = 0xa0a3b;
  *(int *)(param_2 + 0x10) = iVar9 + 0x15e;
  iVar9 = iVar9 + 0x195;
  CoreEngineDataBufferProcessor(param_2,iVar9);
  puVar8 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar8 = 0x616c75636c616309;
  puVar8[1] = 0x705f7265705f6574;
  puVar8[2] = 0x6174735f6c657869;
  puVar8[3] = 0x697261765f636974;
  *(int32_t *)(puVar8 + 4) = 0x656c6261;
  *(int32_t *)((int64_t)puVar8 + 0x24) = 0x6e492873;
  *(int32_t *)(puVar8 + 5) = 0x7070202c;
  *(int32_t *)((int64_t)puVar8 + 0x2c) = 0x6174735f;
  puVar8[6] = 0xa0a3b29636974;
  *(int *)(param_2 + 0x10) = iVar9;
  puVar8 = (uint64_t *)(*(int64_t *)(param_3 + 0x498) - *(int64_t *)(param_3 + 0x490));
  uVar14 = uVar12;
  if ((int64_t)puVar8 / 0x98 + ((int64_t)puVar8 >> 0x3f) != (int64_t)puVar8 >> 0x3f) {
    do {
      iVar10 = iVar9 + 1;
      CoreEngineDataBufferProcessor(param_2,iVar10);
      *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
      *(int *)(param_2 + 0x10) = iVar10;
      lVar1 = *(int64_t *)(param_3 + 0x490);
      iVar11 = *(int *)(lVar1 + 0x10 + uVar12);
      if (0 < iVar11) {
        CoreEngineDataBufferProcessor(param_2,iVar10 + iVar11);
// WARNING: Subroutine does not return
        memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
               *(uint64_t *)(lVar1 + 8 + uVar12),(int64_t)(*(int *)(lVar1 + 0x10 + uVar12) + 1));
      }
      iVar9 = iVar9 + 7;
      CoreEngineDataBufferProcessor(param_2,iVar9);
      puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
      *puVar6 = 0x296e4928;
      *(int16_t *)(puVar6 + 1) = 0xa3b;
      *(int8_t *)((int64_t)puVar6 + 6) = 0;
      *(int *)(param_2 + 0x10) = iVar9;
      uVar13 = (int)uVar14 + 1;
      uVar12 = uVar12 + 0x98;
      puVar8 = (uint64_t *)(*(int64_t *)(param_3 + 0x498) - *(int64_t *)(param_3 + 0x490));
      uVar14 = (uint64_t)uVar13;
    } while ((uint64_t)(int64_t)(int)uVar13 < (uint64_t)((int64_t)puVar8 / 0x98));
  }
  if (*(int *)(param_3 + 0xa40) != 0) {
    iVar11 = iVar9 + 1;
    CoreEngineDataBufferProcessor(param_2,iVar11);
    *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
    *(int *)(param_2 + 0x10) = iVar11;
    if (0 < *(int *)(param_3 + 0xa40)) {
      CoreEngineDataBufferProcessor(param_2,iVar11 + *(int *)(param_3 + 0xa40));
// WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
             *(uint64_t *)(param_3 + 0xa38),(int64_t)(*(int *)(param_3 + 0xa40) + 1));
    }
    iVar9 = iVar9 + 0x2b;
    CoreEngineDataBufferProcessor(param_2,iVar9);
    puVar8 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar8 = 0x7070202c206e4928;
    puVar8[1] = 0x206369746174735f;
    puVar8[2] = 0x646f6d5f7070202c;
    puVar8[3] = 0x2c656c6261696669;
    puVar8[4] = 0x297875615f707020;
    *(int16_t *)(puVar8 + 5) = 0xa3b;
    *(int8_t *)((int64_t)puVar8 + 0x2a) = 0;
    *(int *)(param_2 + 0x10) = iVar9;
  }
  if (*(int *)(param_3 + 0xad8) != 0) {
    iVar11 = iVar9 + 1;
    CoreEngineDataBufferProcessor(param_2,iVar11);
    *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
    *(int *)(param_2 + 0x10) = iVar11;
    if (0 < *(int *)(param_3 + 0xad8)) {
      CoreEngineDataBufferProcessor(param_2,iVar11 + *(int *)(param_3 + 0xad8));
// WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
             *(uint64_t *)(param_3 + 0xad0),(int64_t)(*(int *)(param_3 + 0xad8) + 1));
    }
    CoreEngineDataBufferProcessor(param_2,iVar9 + 0x2b);
    puVar8 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar8 = 0x7070202c206e4928;
    puVar8[1] = 0x206369746174735f;
    puVar8[2] = 0x646f6d5f7070202c;
    puVar8[3] = 0x2c656c6261696669;
    puVar8[4] = 0x297875615f707020;
    *(int16_t *)(puVar8 + 5) = 0xa3b;
    *(int8_t *)((int64_t)puVar8 + 0x2a) = 0;
    *(int *)(param_2 + 0x10) = iVar9 + 0x2b;
  }
  function_344f00(puVar8,param_2,param_3);
  iVar9 = *(int *)(param_2 + 0x10);
  CoreEngineDataBufferProcessor(param_2,iVar9 + 0x4e);
  puVar8 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar8 = 0x434247522e74754f;
  puVar8[1] = 0x67203d20726f6c6f;
  puVar8[2] = 0x6f635f6f72657a5f;
  puVar8[3] = 0x6f5f746e6174736e;
  puVar8[4] = 0x203f207475707475;
  puVar8[5] = 0x30283474616f6c66;
  *(int32_t *)(puVar8 + 6) = 0x2c30202c;
  *(int32_t *)((int64_t)puVar8 + 0x34) = 0x202c3020;
  *(int32_t *)(puVar8 + 7) = 0x3a202930;
  *(int32_t *)((int64_t)puVar8 + 0x3c) = 0x635f6720;
  puVar8[8] = 0x635f72756f746e6f;
  *(int32_t *)(puVar8 + 9) = 0x726f6c6f;
  *(int16_t *)((int64_t)puVar8 + 0x4c) = 0xa3b;
  *(int8_t *)((int64_t)puVar8 + 0x4e) = 0;
  *(int *)(param_2 + 0x10) = iVar9 + 0x4e;
  CoreEngineDataBufferProcessor(param_2,iVar9 + 0x5b);
  puVar8 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar8 = 0x206e727574657209;
  *(int32_t *)(puVar8 + 1) = 0x3b74754f;
  *(int16_t *)((int64_t)puVar8 + 0xc) = 10;
  *(int *)(param_2 + 0x10) = iVar9 + 0x5b;
  CoreEngineDataBufferProcessor(param_2,iVar9 + 0x5d);
  puVar7 = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0xa7d;
  *(int8_t *)(puVar7 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar9 + 0x5d;
  CoreEngineDataBufferProcessor(param_2,iVar9 + 100);
  *(uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) =
       0xa6669646e6523;
  *(int *)(param_2 + 0x10) = iVar9 + 100;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar5);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3447a0(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)
void function_3447a0(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  int16_t *puVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint64_t uVar13;
  uint uVar14;
  uint64_t uVar15;
  uVar13 = 0;
  puVar5 = (int32_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,0x13,param_4,0,0xfffffffffffffffe,&system_data_buffer_ptr,0,0,0)
  ;
  *(int8_t *)puVar5 = 0;
  CoreEngineSystemCleanup(puVar5);
  *puVar5 = 0x65786950;
  puVar5[1] = 0x68735f6c;
  puVar5[2] = 0x72656461;
  puVar5[3] = 0x706e695f;
  *(uint64_t *)(puVar5 + 4) = 0x657079745f7475;
  iVar12 = *(int *)(param_2 + 0x10);
  iVar10 = iVar12 + 0x14;
  CoreEngineDataBufferProcessor(param_2,iVar10);
  puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar6 = 0x64666923;
  puVar6[1] = 0x50206665;
  puVar6[2] = 0x4c455849;
  puVar6[3] = 0x4148535f;
  puVar6[4] = 0xa524544;
  *(int8_t *)(puVar6 + 5) = 0;
  *(int *)(param_2 + 0x10) = iVar10;
  if (*(char *)(param_3 + 0x10f8) == '\0') {
    CoreEngineDataBufferProcessor(param_2,iVar12 + 0x24);
    puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar6 = 0x20666923;
    puVar6[1] = 0x504c4121;
    puVar6[2] = 0x545f4148;
    puVar6[3] = 0xa545345;
    *(int8_t *)(puVar6 + 4) = 0;
    *(int *)(param_2 + 0x10) = iVar12 + 0x24;
    CoreEngineDataBufferProcessor(param_2,iVar12 + 0x38);
    puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar6 = 0x7261655b;
    puVar6[1] = 0x6564796c;
    puVar6[2] = 0x73687470;
    puVar6[3] = 0x636e6574;
    puVar6[4] = 0xa5d6c69;
    *(int8_t *)(puVar6 + 5) = 0;
    *(int *)(param_2 + 0x10) = iVar12 + 0x38;
    iVar10 = iVar12 + 0x3f;
    CoreEngineDataBufferProcessor(param_2,iVar10);
    *(uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) =
         0xa6669646e6523;
    *(int *)(param_2 + 0x10) = iVar10;
  }
  CoreEngineDataBufferProcessor(param_2,iVar10 + 0x19);
  puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar6 = 0x4f5f5350;
  puVar6[1] = 0x55505455;
  puVar6[2] = 0x4f545f54;
  puVar6[3] = 0x4553555f;
  *(uint64_t *)(puVar6 + 4) = 0x73705f6e69616d20;
  *(int16_t *)(puVar6 + 6) = 0x28;
  *(int *)(param_2 + 0x10) = iVar10 + 0x19;
  CoreEngineDataBufferProcessor(param_2,iVar10 + 0x30);
  puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *puVar6 = *puVar5;
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(uint64_t *)(puVar6 + 4) = *(uint64_t *)(puVar5 + 4);
  *(int *)(param_2 + 0x10) = iVar10 + 0x30;
  CoreEngineDataBufferProcessor(param_2,iVar10 + 0x54);
  puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar6 = 0x2c6e4920;
  puVar6[1] = 0x6e697520;
  puVar6[2] = 0x72702074;
  puVar6[3] = 0x695f6d69;
  puVar6[4] = 0x203a2064;
  puVar6[5] = 0x505f5653;
  puVar6[6] = 0x696d6972;
  puVar6[7] = 0x65766974;
  puVar6[8] = 0xa294449;
  *(int8_t *)(puVar6 + 9) = 0;
  *(int *)(param_2 + 0x10) = iVar10 + 0x54;
  CoreEngineDataBufferProcessor(param_2,iVar10 + 0x56);
  puVar7 = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0xa7b;
  *(int8_t *)(puVar7 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar10 + 0x56;
  CoreEngineDataBufferProcessor(param_2,iVar10 + 0x83);
  puVar8 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar8 = 0x5054554f5f535009;
  puVar8[1] = 0x53555f4f545f5455;
  *(int32_t *)(puVar8 + 2) = 0x754f2045;
  *(int32_t *)((int64_t)puVar8 + 0x14) = 0x203d2074;
  *(int32_t *)(puVar8 + 3) = 0x5f535028;
  *(int32_t *)((int64_t)puVar8 + 0x1c) = 0x5054554f;
  puVar8[4] = 0x53555f4f545f5455;
  *(int32_t *)(puVar8 + 5) = 0x3b302945;
  *(int16_t *)((int64_t)puVar8 + 0x2c) = 10;
  *(int *)(param_2 + 0x10) = iVar10 + 0x83;
  CoreEngineDataBufferProcessor(param_2,iVar10 + 0xca);
  puVar8 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar8 = 0x7869705f72655009;
  puVar8[1] = 0x69746174735f6c65;
  puVar8[2] = 0x6261697261765f63;
  puVar8[3] = 0x735f70702073656c;
  puVar8[4] = 0x203d206369746174;
  puVar8[5] = 0x7869705f72655028;
  *(int32_t *)(puVar8 + 6) = 0x735f6c65;
  *(int32_t *)((int64_t)puVar8 + 0x34) = 0x69746174;
  *(int32_t *)(puVar8 + 7) = 0x61765f63;
  *(int32_t *)((int64_t)puVar8 + 0x3c) = 0x62616972;
  puVar8[8] = 0xa3b302973656c;
  *(int *)(param_2 + 0x10) = iVar10 + 0xca;
  CoreEngineDataBufferProcessor(param_2,iVar10 + 0x11e);
  puVar8 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar8 = 0x7869705f72655009;
  puVar8[1] = 0x6669646f6d5f6c65;
  puVar8[2] = 0x61765f656c626169;
  puVar8[3] = 0x2073656c62616972;
  puVar8[4] = 0x6669646f6d5f7070;
  puVar8[5] = 0x203d20656c626169;
  *(int32_t *)(puVar8 + 6) = 0x72655028;
  *(int32_t *)((int64_t)puVar8 + 0x34) = 0x7869705f;
  *(int32_t *)(puVar8 + 7) = 0x6d5f6c65;
  *(int32_t *)((int64_t)puVar8 + 0x3c) = 0x6669646f;
  *(int32_t *)(puVar8 + 8) = 0x6c626169;
  *(int32_t *)((int64_t)puVar8 + 0x44) = 0x61765f65;
  *(int32_t *)(puVar8 + 9) = 0x62616972;
  *(int32_t *)((int64_t)puVar8 + 0x4c) = 0x2973656c;
  *(int32_t *)(puVar8 + 10) = 0xa0a3b30;
  *(int8_t *)((int64_t)puVar8 + 0x54) = 0;
  *(int *)(param_2 + 0x10) = iVar10 + 0x11e;
  CoreEngineDataBufferProcessor(param_2,iVar10 + 0x169);
  puVar8 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar8 = 0x7869705f72655009;
  puVar8[1] = 0x6c697875615f6c65;
  puVar8[2] = 0x7261765f79726169;
  puVar8[3] = 0x702073656c626169;
  puVar8[4] = 0x203d207875615f70;
  puVar8[5] = 0x7869705f72655028;
  *(int32_t *)(puVar8 + 6) = 0x615f6c65;
  *(int32_t *)((int64_t)puVar8 + 0x34) = 0x6c697875;
  *(int32_t *)(puVar8 + 7) = 0x79726169;
  *(int32_t *)((int64_t)puVar8 + 0x3c) = 0x7261765f;
  puVar8[8] = 0x302973656c626169;
  *(int32_t *)(puVar8 + 9) = 0xa0a3b;
  *(int *)(param_2 + 0x10) = iVar10 + 0x169;
  iVar10 = iVar10 + 0x1a0;
  CoreEngineDataBufferProcessor(param_2,iVar10);
  puVar8 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar8 = 0x616c75636c616309;
  puVar8[1] = 0x705f7265705f6574;
  puVar8[2] = 0x6174735f6c657869;
  puVar8[3] = 0x697261765f636974;
  *(int32_t *)(puVar8 + 4) = 0x656c6261;
  *(int32_t *)((int64_t)puVar8 + 0x24) = 0x6e492873;
  *(int32_t *)(puVar8 + 5) = 0x7070202c;
  *(int32_t *)((int64_t)puVar8 + 0x2c) = 0x6174735f;
  puVar8[6] = 0xa0a3b29636974;
  *(int *)(param_2 + 0x10) = iVar10;
  lVar9 = *(int64_t *)(param_3 + 0x498) - *(int64_t *)(param_3 + 0x490);
  lVar1 = lVar9 >> 0x3f;
  uVar15 = uVar13;
  if (lVar9 / 0x98 + lVar1 != lVar1) {
    do {
      iVar11 = iVar10 + 1;
      CoreEngineDataBufferProcessor(param_2,iVar11);
      *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
      *(int *)(param_2 + 0x10) = iVar11;
      lVar1 = *(int64_t *)(param_3 + 0x490);
      iVar12 = *(int *)(lVar1 + 0x10 + uVar13);
      if (0 < iVar12) {
        CoreEngineDataBufferProcessor(param_2,iVar11 + iVar12);
// WARNING: Subroutine does not return
        memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
               *(uint64_t *)(lVar1 + 8 + uVar13),(int64_t)(*(int *)(lVar1 + 0x10 + uVar13) + 1));
      }
      iVar10 = iVar10 + 7;
      CoreEngineDataBufferProcessor(param_2,iVar10);
      puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
      *puVar6 = 0x296e4928;
      *(int16_t *)(puVar6 + 1) = 0xa3b;
      *(int8_t *)((int64_t)puVar6 + 6) = 0;
      *(int *)(param_2 + 0x10) = iVar10;
      uVar14 = (int)uVar15 + 1;
      uVar13 = uVar13 + 0x98;
      uVar15 = (uint64_t)uVar14;
    } while ((uint64_t)(int64_t)(int)uVar14 <
             (uint64_t)((*(int64_t *)(param_3 + 0x498) - *(int64_t *)(param_3 + 0x490)) / 0x98));
  }
  if (*(int *)(param_3 + 0xad8) != 0) {
    iVar12 = iVar10 + 1;
    CoreEngineDataBufferProcessor(param_2,iVar12);
    *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
    *(int *)(param_2 + 0x10) = iVar12;
    if (0 < *(int *)(param_3 + 0xad8)) {
      CoreEngineDataBufferProcessor(param_2,iVar12 + *(int *)(param_3 + 0xad8));
// WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
             *(uint64_t *)(param_3 + 0xad0),(int64_t)(*(int *)(param_3 + 0xad8) + 1));
    }
    iVar10 = iVar10 + 0x2b;
    CoreEngineDataBufferProcessor(param_2,iVar10);
    puVar8 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar8 = 0x7070202c206e4928;
    puVar8[1] = 0x206369746174735f;
    puVar8[2] = 0x646f6d5f7070202c;
    puVar8[3] = 0x2c656c6261696669;
    puVar8[4] = 0x297875615f707020;
    *(int16_t *)(puVar8 + 5) = 0xa3b;
    *(int8_t *)((int64_t)puVar8 + 0x2a) = 0;
    *(int *)(param_2 + 0x10) = iVar10;
  }
  CoreEngineDataBufferProcessor(param_2,iVar10 + 0x14);
  puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar6 = 0x64666923;
  puVar6[1] = 0x50206665;
  puVar6[2] = 0x4c455849;
  puVar6[3] = 0x4148535f;
  puVar6[4] = 0xa524544;
  *(int8_t *)(puVar6 + 5) = 0;
  *(int *)(param_2 + 0x10) = iVar10 + 0x14;
  CoreEngineDataBufferProcessor(param_2,iVar10 + 0x4f);
  puVar8 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar8 = 0x5f657475706d6f63;
  puVar8[1] = 0x776172647265766f;
  puVar8[2] = 0x2e6e49202c6e4928;
  puVar8[3] = 0x6e6f697469736f70;
  *(int32_t *)(puVar8 + 4) = 0x6e49202c;
  *(int32_t *)((int64_t)puVar8 + 0x24) = 0x736e692e;
  *(int32_t *)(puVar8 + 5) = 0x636e6174;
  *(int32_t *)((int64_t)puVar8 + 0x2c) = 0x2c444965;
  puVar8[6] = 0x64695f6d69727020;
  *(int32_t *)(puVar8 + 7) = 0xa3b29;
  *(int *)(param_2 + 0x10) = iVar10 + 0x4f;
  CoreEngineDataBufferProcessor(param_2,iVar10 + 0x56);
  *(uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) =
       0xa6669646e6523;
  *(int *)(param_2 + 0x10) = iVar10 + 0x56;
  function_344f00(0x646e6523,param_2,param_3);
  iVar12 = *(int *)(param_2 + 0x10);
  CoreEngineDataBufferProcessor(param_2,iVar12 + 0x20);
  puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar6 = 0x2e74754f;
  puVar6[1] = 0x43424752;
  puVar6[2] = 0x726f6c6f;
  puVar6[3] = 0x66203d20;
  puVar6[4] = 0x74616f6c;
  puVar6[5] = 0x2c312834;
  puVar6[6] = 0x2c302c31;
  puVar6[7] = 0xa3b2931;
  *(int8_t *)(puVar6 + 8) = 0;
  *(int *)(param_2 + 0x10) = iVar12 + 0x20;
  CoreEngineDataBufferProcessor(param_2,iVar12 + 0x2d);
  puVar8 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar8 = 0x206e727574657209;
  *(int32_t *)(puVar8 + 1) = 0x3b74754f;
  *(int16_t *)((int64_t)puVar8 + 0xc) = 10;
  *(int *)(param_2 + 0x10) = iVar12 + 0x2d;
  CoreEngineDataBufferProcessor(param_2,iVar12 + 0x2f);
  puVar7 = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0xa7d;
  *(int8_t *)(puVar7 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar12 + 0x2f;
  CoreEngineDataBufferProcessor(param_2,iVar12 + 0x36);
  *(uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) =
       0xa6669646e6523;
  *(int *)(param_2 + 0x10) = iVar12 + 0x36;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar5);
}
// 函数: void function_344f00(uint64_t param_1,int64_t param_2,int64_t param_3)
void function_344f00(uint64_t param_1,int64_t param_2,int64_t param_3)
{
  int iVar1;
  uint64_t *puVar2;
  int iVar3;
  iVar1 = *(int *)(param_2 + 0x10);
  if (*(int *)(param_3 + 0x10e8) == 0) {
    CoreEngineDataBufferProcessor(param_2,iVar1 + 0x38);
    puVar2 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar2 = 0x615f796c70706109;
    puVar2[1] = 0x7365745f6168706c;
    puVar2[2] = 0x7070202c6e492874;
    puVar2[3] = 0x61696669646f6d5f;
    puVar2[4] = 0x6c7261652e656c62;
    puVar2[5] = 0x5f6168706c615f79;
    puVar2[6] = 0xa3b2965756c6176;
    *(int8_t *)(puVar2 + 7) = 0;
    *(int *)(param_2 + 0x10) = iVar1 + 0x38;
    return;
  }
  iVar3 = iVar1 + 1;
  CoreEngineDataBufferProcessor(param_2,iVar3);
  *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
  *(int *)(param_2 + 0x10) = iVar3;
  if (0 < *(int *)(param_3 + 0x10e8)) {
    CoreEngineDataBufferProcessor(param_2,iVar3 + *(int *)(param_3 + 0x10e8));
// WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
           *(uint64_t *)(param_3 + 0x10e0),(int64_t)(*(int *)(param_3 + 0x10e8) + 1));
  }
  CoreEngineDataBufferProcessor(param_2,iVar1 + 0x2b);
  puVar2 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar2 = 0x7070202c206e4928;
  puVar2[1] = 0x206369746174735f;
  puVar2[2] = 0x646f6d5f7070202c;
  puVar2[3] = 0x2c656c6261696669;
  puVar2[4] = 0x297875615f707020;
  *(int16_t *)(puVar2 + 5) = 0xa3b;
  *(int8_t *)((int64_t)puVar2 + 0x2a) = 0;
  *(int *)(param_2 + 0x10) = iVar1 + 0x2b;
  return;
}