#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part552.c - 6 个函数
// 函数: void function_570190(int64_t param_1,int32_t param_2,int32_t param_3,int32_t *param_4,
void function_570190(int64_t param_1,int32_t param_2,int32_t param_3,int32_t *param_4,
                  int32_t param_5)
{
  ushort uVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint64_t *puVar7;
  uint uVar8;
  uint uVar9;
  uint64_t uVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  int8_t astack_special_x_8 [8];
  uint astack_special_x_10 [2];
  uVar10 = 0;
  *(int32_t *)(param_1 + 0x10) = param_2;
  *(uint64_t *)(param_1 + 4) = 0;
  *(uint64_t *)(param_1 + 0x18) = 0;
  uVar6 = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  *(int32_t *)(param_1 + 0x558) = 0;
  *(int32_t *)(param_1 + 0x53c) = 0;
  *(int32_t *)(param_1 + 0xc) = 0;
  *(uint64_t *)(param_1 + 0x548) = 0;
  *(int32_t *)(param_1 + 0x550) = 0;
  *(int32_t *)(param_1 + 0x14) = param_3;
  *(uint *)(param_1 + 8) = param_4[4] & 0x3f;
  *(uint *)(param_1 + 4) = (uint)param_4[4] >> 6 & 0x3f;
  *(uint *)(param_1 + 0x18) = (uint)param_4[4] >> 0xc & 0x3f;
  *(float *)(param_1 + 0x558) = (float)((uint)param_4[4] >> 0x12 & 0x3f) * 0.015873017;
  *(uint *)(param_1 + 0x20) = (uint)param_4[4] >> 0x18 & 0x3f;
  *(int32_t *)(param_1 + 0x53c) = *param_4;
  astack_special_x_10[0] = SystemFunction_0001804bb950();
  puVar7 = (uint64_t *)0x180c95e98;
  puVar2 = render_system_config;
  while (puVar2 != (uint64_t *)0x0) {
    if (*(uint *)(puVar2 + 4) < astack_special_x_10[0]) {
      puVar2 = (uint64_t *)*puVar2;
    }
    else {
      puVar7 = puVar2;
      puVar2 = (uint64_t *)puVar2[1];
    }
  }
  if ((puVar7 == (uint64_t *)0x180c95e98) || (astack_special_x_10[0] < *(uint *)(puVar7 + 4))) {
    puVar7 = (uint64_t *)PhysicsSystem_IntegrationProcessor(0x180c95e98,astack_special_x_8,0x180c95e98,puVar7,astack_special_x_10);
    puVar7 = (uint64_t *)*puVar7;
  }
  lVar3 = puVar7[5];
  uVar9 = *(uint *)(param_1 + 8);
  uVar8 = *(int *)(lVar3 + 0x380) - 1;
  if ((int)uVar8 < 0) {
    uVar8 = uVar6;
  }
  uVar4 = uVar6;
  if ((-1 < (int)uVar9) && (uVar4 = uVar9, (int)uVar8 < (int)uVar9)) {
    uVar4 = uVar8;
  }
  *(uint *)(param_1 + 8) = uVar4;
  uVar9 = *(uint *)(param_1 + 4);
  uVar8 = *(int *)(lVar3 + 0x390) - 1;
  if ((int)uVar8 < 0) {
    uVar8 = uVar6;
  }
  uVar5 = 0;
  uVar4 = uVar5;
  if ((-1 < (int)uVar9) && (uVar4 = uVar9, (int)uVar8 < (int)uVar9)) {
    uVar4 = uVar8;
  }
  *(uint *)(param_1 + 4) = uVar4;
  uVar9 = *(uint *)(param_1 + 0x20);
  uVar8 = *(int *)(lVar3 + 0x3b0) - 1;
  if ((int)uVar8 < 0) {
    uVar8 = uVar6;
  }
  if ((-1 < (int)uVar9) && (uVar5 = uVar9, (int)uVar8 < (int)uVar9)) {
    uVar5 = uVar8;
  }
  *(uint *)(param_1 + 0x20) = uVar5;
  uVar9 = *(uint *)(param_1 + 0x18);
  uVar8 = (int)((*(int64_t *)(lVar3 + 0xa28) - *(int64_t *)(lVar3 + 0xa20)) / 0x50) - 1;
  if ((int)uVar8 < 0) {
    uVar8 = uVar6;
  }
  uVar4 = uVar6;
  if ((-1 < (int)uVar9) && (uVar4 = uVar9, (int)uVar8 < (int)uVar9)) {
    uVar4 = uVar8;
  }
  pfVar11 = (float *)(param_1 + 0x3c);
  *(uint *)(param_1 + 0x18) = uVar4;
  *(float *)(param_1 + 0x54c) =
       (float)((uint)(*(uint64_t *)(param_4 + 4) >> 0x1e) & 0x3f) * 0.015873017;
  *(float *)(param_1 + 0x550) =
       (float)((uint)((uint64_t)*(uint64_t *)(param_4 + 4) >> 0x2a) & 0x3f) * 0.015873017;
  uVar1 = *(ushort *)((int64_t)param_4 + 0x16);
  *(int32_t *)(param_1 + 0x38) = 0;
  *(float *)(param_1 + 0x548) = (float)(uVar1 & 0x3f) * 0.015873017;
  *(int32_t *)(param_1 + 0x540) = param_4[1];
  *(int32_t *)(param_1 + 0x544) = param_4[2];
  do {
    uVar9 = (uint)uVar10;
    if ((int)uVar9 < *(int *)(lVar3 + 0x298)) {
      fVar12 = (float)((uint)(*(uint64_t *)(param_4 + (uVar10 >> 4) * 2 + 6) >>
                             (sbyte)((uVar9 & 0xf) << 2)) & 0xf) * 0.06666667;
    }
    else {
      fVar12 = 0.0;
    }
    *pfVar11 = fVar12;
    uVar10 = (uint64_t)(uVar9 + 1);
    pfVar11 = pfVar11 + 1;
  } while ((int)(uVar9 + 1) < 0x140);
  *(uint *)(param_1 + 0x28) = param_4[0xe] & 0x7fffffff;
  *(uint *)(param_1 + 0x2c) = (uint)((uint64_t)*(uint64_t *)(param_4 + 0xe) >> 0x20) & 0x7fffffff
  ;
  *(uint *)(param_1 + 0x30) = param_4[0x10] & 0x7fffffff;
  *(uint *)(param_1 + 0x34) =
       (uint)((uint64_t)*(uint64_t *)(param_4 + 0x10) >> 0x20) & 0x7fffffff;
  uVar9 = (int)((*(int64_t *)(lVar3 + 0xa48) - *(int64_t *)(lVar3 + 0xa40)) / 0x50) - 1;
  if ((int)uVar9 < 0) {
    uVar9 = uVar6;
  }
  uVar8 = (uint)param_4[0x12] >> 6 & 0x3f;
  if ((int)uVar9 < (int)uVar8) {
    uVar8 = uVar9;
  }
  *(uint *)(param_1 + 0x1c) = uVar8;
  uVar9 = *(int *)(lVar3 + 0x3c0) - 1;
  if ((int)uVar9 < 0) {
    uVar9 = uVar6;
  }
  uVar8 = param_4[0x12] & 0x3f;
  if ((int)uVar9 < (int)(param_4[0x12] & 0x3f)) {
    uVar8 = uVar9;
  }
  *(uint *)(param_1 + 0x24) = uVar8;
  uVar9 = *(int *)(lVar3 + 0x3a0) - 1;
  if ((int)uVar9 < 0) {
    uVar9 = uVar6;
  }
  uVar6 = (uint)param_4[0x12] >> 0xc & 0x3f;
  if ((int)uVar9 < (int)uVar6) {
    uVar6 = uVar9;
  }
  *(uint *)(param_1 + 0xc) = uVar6;
  *(byte *)(param_1 + 0x564) = (byte)((uint)param_4[0x12] >> 0x12) & 1;
  fVar12 = (float)((uint)param_4[0x12] >> 0x13 & 0x3f) * 0.015873017;
  if (0.0 <= fVar12) {
    if (1.0 <= fVar12) {
      fVar12 = 1.0;
    }
  }
  else {
    fVar12 = 0.0;
  }
  *(float *)(param_1 + 0x55c) = fVar12;
  fVar13 = (float)((uint)param_4[0x12] >> 0x19 & 0x3f) * 0.015873017;
  fVar12 = 0.0;
  if ((0.0 <= fVar13) && (fVar12 = fVar13, 1.0 <= fVar13)) {
    fVar12 = 1.0;
  }
  *(int8_t *)(param_1 + 0x565) = 0;
  *(int32_t *)(param_1 + 0x554) = param_5;
  *(float *)(param_1 + 0x560) = fVar12;
  *(int8_t *)(param_1 + 0x56c) = 1;
  return;
}
uint64_t * function_5705b0(uint64_t *param_1,int param_2,uint64_t param_3,uint64_t param_4)
{
  int32_t *puVar1;
  uint64_t *puVar2;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_state_ptr;
  if (param_2 == 0) {
    *param_1 = &system_data_buffer_ptr;
    param_1[3] = 0;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    CoreEngineDataBufferProcessor(param_1,7,param_3,param_4,0,0xfffffffffffffffe);
    *(uint64_t *)param_1[1] = 0x72656c64646f74;
    *(int32_t *)(param_1 + 2) = 7;
  }
  else if (param_2 == 1) {
    *param_1 = &system_data_buffer_ptr;
    param_1[3] = 0;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    CoreEngineDataBufferProcessor(param_1,5,param_3,param_4,0,0xfffffffffffffffe);
    puVar1 = (int32_t *)param_1[1];
    *puVar1 = 0x6c696863;
    *(int16_t *)(puVar1 + 1) = 100;
    *(int32_t *)(param_1 + 2) = 5;
  }
  else if (param_2 == 2) {
    *param_1 = &system_data_buffer_ptr;
    param_1[3] = 0;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    CoreEngineDataBufferProcessor(param_1,5,param_3,param_4,0,0xfffffffffffffffe);
    puVar1 = (int32_t *)param_1[1];
    *puVar1 = 0x65657774;
    *(int16_t *)(puVar1 + 1) = 0x6e;
    *(int32_t *)(param_1 + 2) = 5;
  }
  else if (param_2 == 3) {
    *param_1 = &system_data_buffer_ptr;
    param_1[3] = 0;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    CoreEngineDataBufferProcessor(param_1,8,param_3,param_4,0,0xfffffffffffffffe);
    puVar2 = (uint64_t *)param_1[1];
    *puVar2 = 0x726567616e656574;
    *(int8_t *)(puVar2 + 1) = 0;
    *(int32_t *)(param_1 + 2) = 8;
  }
  else if (param_2 == 4) {
    *param_1 = &system_data_buffer_ptr;
    param_1[3] = 0;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    CoreEngineDataBufferProcessor(param_1,5,param_3,param_4,0,0xfffffffffffffffe);
    puVar1 = (int32_t *)param_1[1];
    *puVar1 = 0x6c756461;
    *(int16_t *)(puVar1 + 1) = 0x74;
    *(int32_t *)(param_1 + 2) = 5;
  }
  else {
    *param_1 = &system_data_buffer_ptr;
    param_1[3] = 0;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    CoreEngineDataBufferProcessor(param_1,7,param_3,param_4,0,0xfffffffffffffffe);
    *(uint64_t *)param_1[1] = 0x64696c61766e69;
    *(int32_t *)(param_1 + 2) = 7;
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_5707a0(int64_t param_1,char param_2)
void function_5707a0(int64_t param_1,char param_2)
{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int32_t *puVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int32_t uVar10;
  uint astack_special_x_8 [2];
  int8_t astack_special_x_18 [16];
  astack_special_x_8[0] = SystemFunction_0001804bb950();
  puVar3 = (uint64_t *)0x180c95e98;
  puVar1 = render_system_config;
  while (puVar1 != (uint64_t *)0x0) {
    if (*(uint *)(puVar1 + 4) < astack_special_x_8[0]) {
      puVar1 = (uint64_t *)*puVar1;
    }
    else {
      puVar3 = puVar1;
      puVar1 = (uint64_t *)puVar1[1];
    }
  }
  if ((puVar3 == (uint64_t *)0x180c95e98) || (astack_special_x_8[0] < *(uint *)(puVar3 + 4))) {
    puVar3 = (uint64_t *)PhysicsSystem_IntegrationProcessor(0x180c95e98,astack_special_x_18,puVar3,puVar3,astack_special_x_8);
    puVar3 = (uint64_t *)*puVar3;
  }
  lVar2 = puVar3[5];
  lVar5 = 0;
  lVar7 = (int64_t)*(int *)(lVar2 + 0x298);
  lVar9 = lVar5;
  if (3 < lVar7) {
    puVar6 = (int32_t *)(param_1 + 0x40);
    lVar8 = (lVar7 - 4U >> 2) + 1;
    lVar9 = lVar8 * 4;
    do {
      lVar4 = *(int64_t *)(lVar2 + 0x290);
      if (*(char *)(lVar5 + 0x50 + lVar4) != '\0') {
        if (param_2 == '\0') {
          uVar10 = 0;
        }
        else {
          uVar10 = 0x3f800000;
        }
        puVar6[-1] = uVar10;
        lVar4 = *(int64_t *)(lVar2 + 0x290);
      }
      if (*(char *)(lVar5 + 0xf8 + lVar4) != '\0') {
        if (param_2 == '\0') {
          uVar10 = 0;
        }
        else {
          uVar10 = 0x3f800000;
        }
        *puVar6 = uVar10;
        lVar4 = *(int64_t *)(lVar2 + 0x290);
      }
      if (*(char *)(lVar5 + 0x1a0 + lVar4) != '\0') {
        if (param_2 == '\0') {
          uVar10 = 0;
        }
        else {
          uVar10 = 0x3f800000;
        }
        puVar6[1] = uVar10;
        lVar4 = *(int64_t *)(lVar2 + 0x290);
      }
      if (*(char *)(lVar5 + 0x248 + lVar4) != '\0') {
        if (param_2 == '\0') {
          uVar10 = 0;
        }
        else {
          uVar10 = 0x3f800000;
        }
        puVar6[2] = uVar10;
      }
      puVar6 = puVar6 + 4;
      lVar5 = lVar5 + 0x2a0;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if (lVar9 < lVar7) {
    lVar5 = lVar9 * 0xa8;
    lVar7 = lVar7 - lVar9;
    puVar6 = (int32_t *)(param_1 + 0x3c + lVar9 * 4);
    do {
      if (*(char *)(lVar5 + 0x50 + *(int64_t *)(lVar2 + 0x290)) != '\0') {
        if (param_2 == '\0') {
          uVar10 = 0;
        }
        else {
          uVar10 = 0x3f800000;
        }
        *puVar6 = uVar10;
      }
      puVar6 = puVar6 + 1;
      lVar5 = lVar5 + 0xa8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}
// 函数: void function_570940(void)
void function_570940(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
uint64_t function_571e20(int64_t *param_1,int64_t param_2)
{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  byte *pbVar6;
  uint64_t uVar7;
  void *puVar8;
  int iVar9;
  int64_t lVar10;
  uint uVar11;
  int64_t lVar13;
  uint64_t uVar12;
  lVar4 = *param_1;
  uVar7 = 0;
  lVar5 = param_1[1] - lVar4 >> 0x3f;
  lVar13 = (param_1[1] - lVar4) / 0x38 + lVar5;
  if (lVar13 != lVar5) {
    iVar2 = *(int *)(param_2 + 0x10);
    uVar12 = uVar7;
    do {
      iVar3 = *(int *)(uVar7 * 0x38 + 0x10 + lVar4);
      iVar9 = iVar2;
      if (iVar3 == iVar2) {
        if (iVar3 != 0) {
          pbVar6 = *(byte **)(uVar7 * 0x38 + 8 + lVar4);
          lVar10 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar6;
          do {
            pbVar1 = pbVar6 + lVar10;
            iVar9 = (uint)*pbVar6 - (uint)*pbVar1;
            if (iVar9 != 0) break;
            pbVar6 = pbVar6 + 1;
          } while (*pbVar1 != 0);
        }
LAB_180571e9e:
        if (iVar9 == 0) {
          return uVar12 & 0xffff;
        }
      }
      else if (iVar3 == 0) goto LAB_180571e9e;
      uVar11 = (int)uVar12 + 1;
      uVar12 = (uint64_t)uVar11;
      uVar7 = (uint64_t)(int)uVar11;
    } while (uVar7 < (uint64_t)(lVar13 - lVar5));
  }
  puVar8 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar8 = *(void **)(param_2 + 8);
  }
  SystemDataInitializer(puVar8);
  return 0xffffffff;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_571ef0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_571ef0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint uVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  int32_t *puVar8;
  void *puVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  uVar11 = 0xfffffffffffffffe;
  lVar2 = param_1[1];
  lVar10 = *param_1;
  lVar5 = 0;
  uVar1 = *(uint *)(param_1 + 3);
  lVar7 = (lVar2 - lVar10) / 0x38;
  if (lVar7 != 0) {
    lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 0x38,uVar1 & 0xff,param_4,0xfffffffffffffffe,0,0,0,
                          uVar1);
  }
  lVar7 = lVar7 * 0x38 + lVar5;
  if (lVar10 != lVar2) {
    puVar8 = (int32_t *)(lVar5 + 0x10);
    lVar12 = lVar5;
    lVar13 = lVar7;
    lVar14 = lVar7;
    do {
      *(void **)(puVar8 + -4) = &system_state_ptr;
      *(uint64_t *)(puVar8 + -2) = 0;
      *puVar8 = 0;
      *(void **)(puVar8 + -4) = &processed_var_672_ptr;
      *(int32_t **)(puVar8 + -2) = puVar8 + 2;
      *puVar8 = 0;
      *(int8_t *)(puVar8 + 2) = 0;
      *puVar8 = *(int32_t *)(lVar10 + 0x10);
      puVar9 = &system_buffer_ptr;
      if (*(void **)(lVar10 + 8) != (void *)0x0) {
        puVar9 = *(void **)(lVar10 + 8);
      }
      strcpy_s(*(uint64_t *)(puVar8 + -2),0x20,puVar9,param_4,uVar11,lVar12,lVar13,lVar14);
      lVar10 = lVar10 + 0x38;
      puVar8 = puVar8 + 0xe;
    } while (lVar10 != lVar2);
  }
  puVar3 = (uint64_t *)*param_1;
  *param_1 = lVar5;
  puVar4 = (uint64_t *)param_1[1];
  param_1[1] = lVar7;
  param_1[2] = lVar7;
  *(uint *)(param_1 + 3) = uVar1;
  for (puVar6 = puVar3; puVar6 != puVar4; puVar6 = puVar6 + 7) {
    *puVar6 = &system_state_ptr;
  }
  if (puVar3 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_5720b0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_5720b0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  void *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  void *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  lVar9 = param_1[1];
  lVar6 = *param_1;
  lVar8 = (lVar9 - lVar6) / 0x38;
  puVar3 = (uint64_t *)0x0;
  if (lVar8 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = lVar8 * 2;
    if (lVar8 == 0) goto LAB_18057213b;
  }
  puVar3 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar8 * 0x38,(char)param_1[3],param_4,0xfffffffffffffffe);
  lVar9 = param_1[1];
  lVar6 = *param_1;
LAB_18057213b:
  puVar5 = puVar3;
  if (lVar6 != lVar9) {
    lVar6 = lVar6 - (int64_t)puVar3;
    do {
      *puVar5 = &system_state_ptr;
      puVar5[1] = 0;
      *(int32_t *)(puVar5 + 2) = 0;
      *puVar5 = &processed_var_672_ptr;
      puVar5[1] = puVar5 + 3;
      *(int32_t *)(puVar5 + 2) = 0;
      *(int8_t *)(puVar5 + 3) = 0;
      *(int32_t *)(puVar5 + 2) = *(int32_t *)(lVar6 + 0x10 + (int64_t)puVar5);
      puVar1 = *(void **)(lVar6 + 8 + (int64_t)puVar5);
      puVar7 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar7 = puVar1;
      }
      strcpy_s(puVar5[1],0x20,puVar7);
      puVar5 = puVar5 + 7;
    } while (lVar6 + (int64_t)puVar5 != lVar9);
  }
  function_04b640(puVar5,param_2);
  puVar2 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  if (puVar4 != puVar2) {
    do {
      *puVar4 = &system_state_ptr;
      puVar4 = puVar4 + 7;
    } while (puVar4 != puVar2);
    puVar4 = (uint64_t *)*param_1;
  }
  if (puVar4 == (uint64_t *)0x0) {
    *param_1 = (int64_t)puVar3;
    param_1[1] = (int64_t)(puVar5 + 7);
    param_1[2] = (int64_t)(puVar3 + lVar8 * 7);
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
int64_t * function_572240(int64_t *param_1,int64_t *param_2,int64_t *param_3,uint64_t *param_4)
{
  uint64_t *puVar1;
  int64_t *plVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  *param_1 = (int64_t)param_4;
  if (param_2 != param_3) {
    plVar5 = param_2 + 1;
    do {
      *param_4 = &system_state_ptr;
      param_4[1] = 0;
      *(int32_t *)(param_4 + 2) = 0;
      *param_4 = &system_data_buffer_ptr;
      param_4[3] = 0;
      param_4[1] = 0;
      *(int32_t *)(param_4 + 2) = 0;
      puVar1 = param_4 + 4;
      *puVar1 = &system_state_ptr;
      param_4[5] = 0;
      *(int32_t *)(param_4 + 6) = 0;
      *puVar1 = &system_data_buffer_ptr;
      param_4[7] = 0;
      param_4[5] = 0;
      *(int32_t *)(param_4 + 6) = 0;
      uVar3 = *(uint *)(plVar5 + 1);
      uVar4 = (uint64_t)uVar3;
      if (*plVar5 != 0) {
        CoreEngineDataBufferProcessor(param_4,uVar4);
      }
      if (uVar3 != 0) {
// WARNING: Subroutine does not return
        memcpy(param_4[1],*plVar5,uVar4);
      }
      *(int32_t *)(param_4 + 2) = 0;
      if (param_4[1] != 0) {
        *(int8_t *)(uVar4 + param_4[1]) = 0;
      }
      *(int32_t *)((int64_t)param_4 + 0x1c) = *(int32_t *)((int64_t)plVar5 + 0x14);
      uVar3 = *(uint *)(plVar5 + 5);
      uVar4 = (uint64_t)uVar3;
      if (plVar5[4] != 0) {
        CoreEngineDataBufferProcessor(puVar1,uVar4);
      }
      if (uVar3 != 0) {
// WARNING: Subroutine does not return
        memcpy(param_4[5],plVar5[4],uVar4);
      }
      *(int32_t *)(param_4 + 6) = 0;
      if (param_4[5] != 0) {
        *(int8_t *)(uVar4 + param_4[5]) = 0;
      }
      *(int32_t *)((int64_t)param_4 + 0x3c) = *(int32_t *)((int64_t)plVar5 + 0x34);
      *(char *)(param_4 + 8) = (char)plVar5[7];
      param_4[9] = plVar5[8];
      plVar5[8] = 0;
      param_4[10] = plVar5[9];
      plVar5[9] = 0;
      *(int *)(param_4 + 0xb) = (int)plVar5[10];
      *(int32_t *)((int64_t)param_4 + 0x5c) = *(int32_t *)((int64_t)plVar5 + 0x54);
      *param_1 = *param_1 + 0x60;
      param_4 = (uint64_t *)*param_1;
      plVar2 = plVar5 + 0xb;
      plVar5 = plVar5 + 0xc;
    } while (plVar2 != param_3);
  }
  return param_1;
}
int64_t * function_5723c0(int64_t *param_1,int64_t param_2,int64_t param_3,uint64_t *param_4)
{
  uint64_t *puVar1;
  uint uVar2;
  uint64_t uVar3;
  *param_1 = (int64_t)param_4;
  if (param_2 != param_3) {
    do {
      *param_4 = &system_state_ptr;
      param_4[1] = 0;
      *(int32_t *)(param_4 + 2) = 0;
      *param_4 = &system_data_buffer_ptr;
      param_4[3] = 0;
      param_4[1] = 0;
      *(int32_t *)(param_4 + 2) = 0;
      puVar1 = param_4 + 4;
      *puVar1 = &system_state_ptr;
      param_4[5] = 0;
      *(int32_t *)(param_4 + 6) = 0;
      *puVar1 = &system_data_buffer_ptr;
      param_4[7] = 0;
      param_4[5] = 0;
      *(int32_t *)(param_4 + 6) = 0;
      uVar2 = *(uint *)(param_2 + 0x10);
      uVar3 = (uint64_t)uVar2;
      if (*(int64_t *)(param_2 + 8) != 0) {
        CoreEngineDataBufferProcessor(param_4,uVar3);
      }
      if (uVar2 != 0) {
// WARNING: Subroutine does not return
        memcpy(param_4[1],*(uint64_t *)(param_2 + 8),uVar3);
      }
      *(int32_t *)(param_4 + 2) = 0;
      if (param_4[1] != 0) {
        *(int8_t *)(uVar3 + param_4[1]) = 0;
      }
      *(int32_t *)((int64_t)param_4 + 0x1c) = *(int32_t *)(param_2 + 0x1c);
      uVar2 = *(uint *)(param_2 + 0x30);
      uVar3 = (uint64_t)uVar2;
      if (*(int64_t *)(param_2 + 0x28) != 0) {
        CoreEngineDataBufferProcessor(puVar1,uVar3);
      }
      if (uVar2 != 0) {
// WARNING: Subroutine does not return
        memcpy(param_4[5],*(uint64_t *)(param_2 + 0x28),uVar3);
      }
      *(int32_t *)(param_4 + 6) = 0;
      if (param_4[5] != 0) {
        *(int8_t *)(uVar3 + param_4[5]) = 0;
      }
      *(int32_t *)((int64_t)param_4 + 0x3c) = *(int32_t *)(param_2 + 0x3c);
      *(int8_t *)(param_4 + 8) = *(int8_t *)(param_2 + 0x40);
      param_4[9] = *(uint64_t *)(param_2 + 0x48);
      *(uint64_t *)(param_2 + 0x48) = 0;
      param_4[10] = *(uint64_t *)(param_2 + 0x50);
      *(uint64_t *)(param_2 + 0x50) = 0;
      *(int32_t *)(param_4 + 0xb) = *(int32_t *)(param_2 + 0x58);
      *(int32_t *)((int64_t)param_4 + 0x5c) = *(int32_t *)(param_2 + 0x5c);
      param_2 = param_2 + 0x60;
      *param_1 = *param_1 + 0x60;
      param_4 = (uint64_t *)*param_1;
    } while (param_2 != param_3);
  }
  return param_1;
}
uint64_t *
function_572550(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uVar2 = 0xfffffffffffffffe;
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  puVar1 = param_1 + 4;
  *puVar1 = &system_state_ptr;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  *puVar1 = &system_data_buffer_ptr;
  param_1[7] = 0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  SystemCore_ConfigurationHandler0(param_1);
  SystemCore_ConfigurationHandler0(puVar1,param_2 + 0x20,param_3,param_4,uVar2);
  *(int8_t *)(param_1 + 8) = *(int8_t *)(param_2 + 0x40);
  param_1[9] = *(uint64_t *)(param_2 + 0x48);
  *(uint64_t *)(param_2 + 0x48) = 0;
  param_1[10] = *(uint64_t *)(param_2 + 0x50);
  *(uint64_t *)(param_2 + 0x50) = 0;
  *(int32_t *)(param_1 + 0xb) = *(int32_t *)(param_2 + 0x58);
  *(int32_t *)((int64_t)param_1 + 0x5c) = *(int32_t *)(param_2 + 0x5c);
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_572610(int64_t param_1,uint64_t param_2,int param_3)
{
  byte bVar1;
  bool bVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  byte *pbVar5;
  uint64_t *puVar6;
  uint uVar7;
  int iVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  void *plocal_var_70;
  byte *pbStack_68;
  int iStack_60;
  int32_t local_var_58;
  void *plocal_var_50;
  int64_t lStack_48;
  if (param_3 == -1) {
    *(uint64_t *)(param_1 + 0x3430) = 0;
    *(int32_t *)(param_1 + 0x3428) = 0xffffffff;
    return 0;
  }
  uVar4 = CoreMemoryPoolValidator(&plocal_var_50);
  puVar3 = render_system_data_config;
  SystemCore_EncryptionEngine0(&plocal_var_70,uVar4);
  puVar10 = (uint64_t *)puVar3[2];
  puVar9 = puVar3;
  if (puVar10 != (uint64_t *)0x0) {
    do {
      if (iStack_60 == 0) {
        bVar2 = false;
        puVar11 = (uint64_t *)puVar10[1];
      }
      else {
        if (*(int *)(puVar10 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar5 = pbStack_68;
          do {
            uVar7 = (uint)pbVar5[puVar10[5] - (int64_t)pbStack_68];
            iVar8 = *pbVar5 - uVar7;
            if (*pbVar5 != uVar7) break;
            pbVar5 = pbVar5 + 1;
          } while (uVar7 != 0);
          bVar2 = 0 < iVar8;
          if (iVar8 < 1) {
            puVar11 = (uint64_t *)puVar10[1];
            goto LAB_1805726d7;
          }
        }
        puVar11 = (uint64_t *)*puVar10;
      }
LAB_1805726d7:
      puVar6 = puVar10;
      if (bVar2) {
        puVar6 = puVar9;
      }
      puVar9 = puVar6;
      puVar10 = puVar11;
    } while (puVar11 != (uint64_t *)0x0);
    if (puVar6 != puVar3) {
      if (*(int *)(puVar6 + 6) == 0) goto LAB_18057271a;
      if (iStack_60 != 0) {
        pbVar5 = (byte *)puVar6[5];
        lVar12 = (int64_t)pbStack_68 - (int64_t)pbVar5;
        do {
          bVar1 = *pbVar5;
          uVar7 = (uint)pbVar5[lVar12];
          if (bVar1 != uVar7) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar7 != 0);
        if ((int)(bVar1 - uVar7) < 1) goto LAB_18057271a;
      }
    }
  }
  puVar6 = puVar3;
LAB_18057271a:
  plocal_var_70 = &system_data_buffer_ptr;
  if (pbStack_68 != (byte *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  pbStack_68 = (byte *)0x0;
  local_var_58 = 0;
  plocal_var_70 = &system_state_ptr;
  if (puVar6 == puVar3) {
    uVar4 = SystemCore_EncryptionEngine0(&plocal_var_70,uVar4);
    puVar6 = (uint64_t *)function_18c160(puVar3,uVar4);
  }
  else {
    puVar6 = puVar6 + 8;
  }
  plocal_var_50 = &system_data_buffer_ptr;
  if (lStack_48 == 0) {
    if (puVar6 == (uint64_t *)0x0) {
      *(uint64_t *)(param_1 + 0x3430) = 0;
      *(int32_t *)(param_1 + 0x3428) = 0xffffffff;
      return 0;
    }
    *(uint64_t **)(param_1 + 0x3430) = puVar6;
    *(int *)(param_1 + 0x3428) = param_3;
    return 1;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
float * function_5727f0(int64_t param_1,float *param_2)
{
  float fVar1;
  int8_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int8_t uVar5;
  uint uVar6;
  int64_t lVar7;
  int iVar8;
  uint64_t uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  plVar3 = *(int64_t **)(param_1 + 0x3430);
  fVar1 = *(float *)(param_1 + 0x3438);
  fVar13 = *(float *)(plVar3 + 4);
  if (0.0 <= fVar1) {
    fVar12 = fVar13;
    if (fVar1 <= fVar13) {
      fVar12 = fVar1;
    }
    if (0.0 < fVar12) {
      lVar4 = *plVar3;
      uVar9 = plVar3[1] - lVar4 >> 3;
      if (fVar12 < fVar13) {
        iVar10 = 0;
        iVar8 = 0;
        if (-1 < (int)uVar9) {
          lVar7 = uVar9 - 1;
          do {
            iVar8 = (int)(iVar10 + (uint)uVar9) / 2;
            fVar1 = *(float *)(lVar4 + (int64_t)iVar8 * 8);
            fVar11 = fVar13;
            if (iVar8 != lVar7) {
              fVar11 = *(float *)(lVar4 + (int64_t)(iVar8 + 1) * 8);
            }
            if ((fVar12 < fVar11) && (fVar1 <= fVar12)) break;
            if (fVar1 <= fVar12) {
              iVar10 = iVar8 + 1;
            }
            uVar6 = iVar8 - 1;
            if (fVar1 <= fVar12) {
              uVar6 = (uint)uVar9;
            }
            uVar9 = (uint64_t)uVar6;
          } while (iVar10 <= (int)uVar6);
        }
      }
      else {
        iVar8 = (int)uVar9 + -1;
      }
    }
    else {
      iVar8 = 0;
    }
  }
  else {
    fVar12 = 0.0;
    iVar8 = 0;
  }
  lVar7 = (int64_t)iVar8;
  lVar4 = *plVar3;
  fVar1 = *(float *)(lVar4 + lVar7 * 8);
  uVar2 = *(int8_t *)(lVar4 + 4 + lVar7 * 8);
  uVar5 = uVar2;
  if (lVar7 != (plVar3[1] - lVar4 >> 3) + -1) {
    fVar13 = *(float *)(lVar4 + 8 + lVar7 * 8);
    uVar5 = *(int8_t *)(lVar4 + 0xc + lVar7 * 8);
  }
  *(int8_t *)((int64_t)param_2 + 5) = uVar5;
  *(int8_t *)(param_2 + 1) = uVar2;
  *param_2 = 1.0 - (fVar12 - fVar1) / (fVar13 - fVar1);
  return param_2;
}
// 函数: void function_572852(uint64_t param_1,float param_2,uint64_t param_3,int param_4)
void function_572852(uint64_t param_1,float param_2,uint64_t param_3,int param_4)
{
  int64_t lVar1;
  float fVar2;
  int8_t uVar3;
  int8_t uVar4;
  int iVar5;
  uint uVar6;
  int64_t lVar7;
  float *unaff_RDI;
  int64_t in_R10;
  int64_t *in_R11;
  float fVar8;
  float in_XMM2_Da;
  lVar1 = param_3 - 1;
  do {
    iVar5 = (int)(param_4 + (uint)param_3) / 2;
    fVar2 = *(float *)(in_R10 + (int64_t)iVar5 * 8);
    fVar8 = in_XMM2_Da;
    if (iVar5 != lVar1) {
      fVar8 = *(float *)(in_R10 + (int64_t)(iVar5 + 1) * 8);
    }
    if ((param_2 < fVar8) && (fVar2 <= param_2)) break;
    if (fVar2 <= param_2) {
      param_4 = iVar5 + 1;
    }
    uVar6 = iVar5 - 1;
    if (fVar2 <= param_2) {
      uVar6 = (uint)param_3;
    }
    param_3 = (uint64_t)uVar6;
  } while (param_4 <= (int)uVar6);
  lVar7 = (int64_t)iVar5;
  lVar1 = *in_R11;
  fVar2 = *(float *)(lVar1 + lVar7 * 8);
  uVar3 = *(int8_t *)(lVar1 + 4 + lVar7 * 8);
  uVar4 = uVar3;
  if (lVar7 != (in_R11[1] - lVar1 >> 3) + -1) {
    in_XMM2_Da = *(float *)(lVar1 + 8 + lVar7 * 8);
    uVar4 = *(int8_t *)(lVar1 + 0xc + lVar7 * 8);
  }
  *(int8_t *)((int64_t)unaff_RDI + 5) = uVar4;
  *(int8_t *)(unaff_RDI + 1) = uVar3;
  *unaff_RDI = 1.0 - (param_2 - fVar2) / (in_XMM2_Da - fVar2);
  return;
}