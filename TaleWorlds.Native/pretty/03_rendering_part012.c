#include "SystemAdvancedValidator_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part012.c - 8 个函数
// 函数: void function_274c70(int64_t param_1,int64_t *param_2)
void function_274c70(int64_t param_1,int64_t *param_2)
{
  int iVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  char *pcVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int *piVar10;
  int32_t *puVar11;
  uint uVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  int64_t *plVar15;
  uint64_t uVar16;
  puVar11 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar11 + (4 - *param_2));
    puVar11 = (int32_t *)param_2[1];
  }
  *puVar11 = 0;
  puVar11 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar11;
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 0x11) {
    System_BufferManager(param_2,(int64_t)puVar11 + (0x10 - *param_2));
    puVar11 = (int32_t *)param_2[1];
  }
  uVar2 = *(int32_t *)(param_1 + 0xc);
  uVar3 = *(int32_t *)(param_1 + 0x10);
  uVar4 = *(int32_t *)(param_1 + 0x14);
  *puVar11 = *(int32_t *)(param_1 + 8);
  puVar11[1] = uVar2;
  puVar11[2] = uVar3;
  puVar11[3] = uVar4;
  param_2[1] = param_2[1] + 0x10;
  puVar11 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar11 + (4 - *param_2));
    puVar11 = (int32_t *)param_2[1];
  }
  *puVar11 = 2;
  param_2[1] = param_2[1] + 4;
  System_DataSerializer(&rendering_sharpen_ptr,*(int32_t *)(param_1 + 0x18),param_2);
  puVar11 = (int32_t *)param_2[1];
  uVar12 = *(uint *)(param_1 + 0x1c);
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar11 + (4 - *param_2));
    puVar11 = (int32_t *)param_2[1];
  }
  uVar16 = 0;
  *puVar11 = 0;
  lVar9 = *param_2;
  lVar7 = param_2[1] + 4;
  param_2[1] = lVar7;
  uVar8 = uVar16;
  if (lVar9 != 0) {
    uVar8 = lVar7 - lVar9;
  }
  if ((uint64_t)((lVar9 - lVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(lVar7 - lVar9) + 4);
    lVar7 = param_2[1];
  }
  param_2[1] = lVar7 + 4;
  puVar14 = (uint64_t *)&rendering_line_ptr;
  uVar13 = uVar16;
  do {
    if ((*(uint *)(puVar14 + 1) & uVar12) != 0) {
      UtilitiesSystem_ThreadManager(param_2,*puVar14);
      uVar13 = (uint64_t)((int)uVar13 + 1);
    }
    puVar14 = puVar14 + 2;
  } while ((int64_t)puVar14 < 0x18098e220);
  *(int *)(uVar8 + *param_2) = (int)uVar13;
  pcVar5 = (char *)0x180bf8ff8;
  uVar8 = uVar16;
  do {
    if (*pcVar5 == *(char *)(param_1 + 0x134)) {
      UtilitiesSystem_ThreadManager(param_2,*(uint64_t *)((int64_t)(int)uVar8 * 0x10 + 0x180bf8ff0));
      break;
    }
    uVar8 = (uint64_t)((int)uVar8 + 1);
    pcVar5 = pcVar5 + 0x10;
  } while ((int64_t)pcVar5 < 0x180bf90b8);
  puVar11 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 0x11) {
    System_BufferManager(param_2,(int64_t)puVar11 + (0x10 - *param_2));
    puVar11 = (int32_t *)param_2[1];
  }
  uVar2 = *(int32_t *)(param_1 + 0x24);
  uVar3 = *(int32_t *)(param_1 + 0x28);
  uVar4 = *(int32_t *)(param_1 + 0x2c);
  plVar15 = (int64_t *)(param_1 + 0x30);
  *puVar11 = *(int32_t *)(param_1 + 0x20);
  puVar11[1] = uVar2;
  puVar11[2] = uVar3;
  puVar11[3] = uVar4;
  param_2[1] = param_2[1] + 0x10;
  lVar9 = 0x10;
  puVar11 = (int32_t *)param_2[1];
  plVar6 = plVar15;
  uVar8 = uVar16;
  do {
    if ((*plVar6 != 0) || (plVar6[1] != 0)) {
      uVar8 = (uint64_t)((int)uVar8 + 1);
    }
    plVar6 = plVar6 + 2;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar11 + (4 - *param_2));
    puVar11 = (int32_t *)param_2[1];
  }
  *puVar11 = (int)uVar8;
  param_2[1] = param_2[1] + 4;
  uVar8 = uVar16;
  plVar6 = plVar15;
  do {
    piVar10 = (int *)param_2[1];
    if ((*plVar15 != 0) || (plVar15[1] != 0)) {
      if ((uint64_t)((*param_2 - (int64_t)piVar10) + param_2[2]) < 5) {
        System_BufferManager(param_2,(int64_t)piVar10 + (4 - *param_2));
        piVar10 = (int *)param_2[1];
      }
      *piVar10 = (int)uVar8;
      param_2[1] = param_2[1] + 4;
      puVar11 = (int32_t *)param_2[1];
      if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 0x11) {
        System_BufferManager(param_2,(int64_t)puVar11 + (0x10 - *param_2));
        puVar11 = (int32_t *)param_2[1];
      }
      uVar2 = *(int32_t *)((int64_t)plVar6 + 4);
      lVar9 = plVar6[1];
      uVar3 = *(int32_t *)((int64_t)plVar6 + 0xc);
      *puVar11 = (int)*plVar6;
      puVar11[1] = uVar2;
      puVar11[2] = (int)lVar9;
      puVar11[3] = uVar3;
      param_2[1] = param_2[1] + 0x10;
      piVar10 = (int *)param_2[1];
    }
    uVar12 = (int)uVar8 + 1;
    uVar8 = (uint64_t)uVar12;
    plVar15 = plVar15 + 2;
    plVar6 = plVar6 + 2;
  } while ((int)uVar12 < 0x10);
  iVar1 = *(int *)(param_1 + 0x130);
  if ((uint64_t)((*param_2 - (int64_t)piVar10) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar10 + (4 - *param_2));
    piVar10 = (int *)param_2[1];
  }
  *piVar10 = iVar1;
  puVar11 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar11;
  lVar9 = *(int64_t *)(param_1 + 0x140);
  lVar7 = *(int64_t *)(param_1 + 0x138);
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar11 + (4 - *param_2));
    puVar11 = (int32_t *)param_2[1];
  }
  *puVar11 = (int)((lVar9 - lVar7) / 0x58);
  param_2[1] = param_2[1] + 4;
  lVar7 = *(int64_t *)(param_1 + 0x140) - *(int64_t *)(param_1 + 0x138);
  puVar11 = (int32_t *)param_2[1];
  lVar9 = lVar7 >> 0x3f;
  uVar8 = uVar16;
  if (lVar7 / 0x58 + lVar9 != lVar9) {
    do {
      System_QueueProcessor(param_2,uVar16 * 0x58 + *(int64_t *)(param_1 + 0x138));
      uVar12 = (int)uVar8 + 1;
      uVar16 = (uint64_t)(int)uVar12;
      uVar8 = (uint64_t)uVar12;
    } while (uVar16 < (uint64_t)
                      ((*(int64_t *)(param_1 + 0x140) - *(int64_t *)(param_1 + 0x138)) / 0x58));
    puVar11 = (int32_t *)param_2[1];
  }
  uVar2 = *(int32_t *)(param_1 + 0x158);
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar11 + (4 - *param_2));
    puVar11 = (int32_t *)param_2[1];
  }
  *puVar11 = uVar2;
  puVar11 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar11;
  uVar2 = *(int32_t *)(param_1 + 0x15c);
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar11 + (4 - *param_2));
    puVar11 = (int32_t *)param_2[1];
  }
  *puVar11 = uVar2;
  puVar11 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar11;
  uVar2 = *(int32_t *)(param_1 + 0x160);
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar11 + (4 - *param_2));
    puVar11 = (int32_t *)param_2[1];
  }
  *puVar11 = uVar2;
  puVar11 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar11;
  uVar2 = *(int32_t *)(param_1 + 0x164);
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar11 + (4 - *param_2));
    puVar11 = (int32_t *)param_2[1];
  }
  *puVar11 = uVar2;
  puVar11 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar11;
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 0x11) {
    System_BufferManager(param_2,(int64_t)puVar11 + (0x10 - *param_2));
    puVar11 = (int32_t *)param_2[1];
  }
  *puVar11 = *(int32_t *)(param_1 + 0x168);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(int32_t *)(lVar9 + 4) = *(int32_t *)(param_1 + 0x16c);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(int32_t *)(lVar9 + 4) = *(int32_t *)(param_1 + 0x170);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(int32_t *)(lVar9 + 4) = *(int32_t *)(param_1 + 0x174);
  puVar11 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar11;
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 0x11) {
    System_BufferManager(param_2,(int64_t)puVar11 + (0x10 - *param_2));
    puVar11 = (int32_t *)param_2[1];
  }
  *puVar11 = *(int32_t *)(param_1 + 0x178);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(int32_t *)(lVar9 + 4) = *(int32_t *)(param_1 + 0x17c);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(int32_t *)(lVar9 + 4) = *(int32_t *)(param_1 + 0x180);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(int32_t *)(lVar9 + 4) = *(int32_t *)(param_1 + 0x184);
  puVar11 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar11;
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 0x11) {
    System_BufferManager(param_2,(int64_t)puVar11 + (0x10 - *param_2));
    puVar11 = (int32_t *)param_2[1];
  }
  *puVar11 = *(int32_t *)(param_1 + 0x188);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(int32_t *)(lVar9 + 4) = *(int32_t *)(param_1 + 0x18c);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(int32_t *)(lVar9 + 4) = *(int32_t *)(param_1 + 400);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(int32_t *)(lVar9 + 4) = *(int32_t *)(param_1 + 0x194);
  puVar11 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar11;
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 0x11) {
    System_BufferManager(param_2,(int64_t)puVar11 + (0x10 - *param_2));
    puVar11 = (int32_t *)param_2[1];
  }
  *puVar11 = *(int32_t *)(param_1 + 0x198);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(int32_t *)(lVar9 + 4) = *(int32_t *)(param_1 + 0x19c);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(int32_t *)(lVar9 + 4) = *(int32_t *)(param_1 + 0x1a0);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(int32_t *)(lVar9 + 4) = *(int32_t *)(param_1 + 0x1a4);
  puVar11 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar11;
  uVar2 = *(int32_t *)(param_1 + 0x1a8);
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar11 + (4 - *param_2));
    puVar11 = (int32_t *)param_2[1];
  }
  *puVar11 = uVar2;
  puVar11 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar11;
  uVar2 = *(int32_t *)(param_1 + 0x1ac);
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar11 + (4 - *param_2));
    puVar11 = (int32_t *)param_2[1];
  }
  *puVar11 = uVar2;
  puVar11 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar11;
  uVar2 = *(int32_t *)(param_1 + 0x1b0);
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar11 + (4 - *param_2));
    puVar11 = (int32_t *)param_2[1];
  }
  *puVar11 = uVar2;
  puVar11 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar11;
  uVar2 = *(int32_t *)(param_1 + 0x1b4);
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar11 + (4 - *param_2));
    puVar11 = (int32_t *)param_2[1];
  }
  *puVar11 = uVar2;
  puVar11 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar11;
  uVar2 = *(int32_t *)(param_1 + 0x1b8);
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar11 + (4 - *param_2));
    puVar11 = (int32_t *)param_2[1];
  }
  *puVar11 = uVar2;
  puVar11 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar11;
  uVar2 = *(int32_t *)(param_1 + 0x1bc);
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar11 + (4 - *param_2));
    puVar11 = (int32_t *)param_2[1];
  }
  *puVar11 = uVar2;
  puVar11 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar11;
  uVar2 = *(int32_t *)(param_1 + 0x1c0);
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar11 + (4 - *param_2));
    puVar11 = (int32_t *)param_2[1];
  }
  *puVar11 = uVar2;
  puVar11 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar11;
  uVar2 = *(int32_t *)(param_1 + 0x1c4);
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar11 + (4 - *param_2));
    *(int32_t *)param_2[1] = uVar2;
  }
  else {
    *puVar11 = uVar2;
  }
  param_2[1] = param_2[1] + 4;
  return;
}
uint64_t * function_274db0(uint64_t *param_1)
{
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &memory_allocator_3480_ptr;
  param_1[1] = param_1 + 3;
  *(int32_t *)(param_1 + 2) = 0;
  *(int8_t *)(param_1 + 3) = 0;
  param_1[0x22] = &system_state_ptr;
  param_1[0x23] = 0;
  *(int32_t *)(param_1 + 0x24) = 0;
  param_1[0x22] = &system_data_buffer_ptr;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  *(int32_t *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(int32_t *)(param_1 + 0x29) = 3;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(int32_t *)(param_1 + 0x2d) = 3;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(int32_t *)(param_1 + 0x31) = 3;
  *(uint64_t *)((int64_t)param_1 + 0x5c) = 0;
  *(int32_t *)((int64_t)param_1 + 100) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  *(int32_t *)((int64_t)param_1 + 0x84) = 0;
  *(int32_t *)(param_1 + 0x11) = 0;
  *(int32_t *)((int64_t)param_1 + 0x8c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x12) = 0;
  *(int32_t *)((int64_t)param_1 + 0x94) = 0;
  *(int32_t *)(param_1 + 0x13) = 0;
  *(int32_t *)((int64_t)param_1 + 0x9c) = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x3f80000000000000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x3f800000;
  param_1[0x20] = 0;
  param_1[0x21] = 0x3f80000000000000;
  *(int32_t *)(param_1 + 0xb) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x33) = 0xffffffff;
  param_1[0x32] = 0;
  return param_1;
}
uint64_t *
function_275010(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &memory_allocator_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0xc;
  strcpy_s(param_2[1],0x80,&processed_var_8816_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}
uint64_t * RenderingSystem_ShaderManager(uint64_t *param_1)
{
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &processed_var_768_ptr;
  *(int32_t *)(param_1 + 2) = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 1) = 0;
  param_1[5] = 0;
  *param_1 = &processed_var_9304_ptr;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 0x16;
  function_285e20(param_1 + 0xd);
  param_1[0x3e] = &system_state_ptr;
  param_1[0x3f] = 0;
  *(int32_t *)(param_1 + 0x40) = 0;
  param_1[0x3e] = &system_data_buffer_ptr;
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  *(int32_t *)(param_1 + 0x40) = 0;
  *(int32_t *)((int64_t)param_1 + 0x244) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x214) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x21c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x224) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x22c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x234) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x23c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x24c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x254) = 0x7f7fffff00000000;
  *(uint64_t *)((int64_t)param_1 + 0x25c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x264) = 0x7f7fffff00000000;
  *(uint64_t *)((int64_t)param_1 + 0x26c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x274) = 0x7f7fffff00000000;
  *(uint64_t *)((int64_t)param_1 + 0x2fc) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x27c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x284) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x28c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x294) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x29c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2a4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2ac) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2b4) = 0;
  *(uint64_t *)((int64_t)param_1 + 700) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2c4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2cc) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2d4) = 0;
  *(int32_t *)((int64_t)param_1 + 0x2dc) = 0;
  *(int32_t *)(param_1 + 0x5c) = 0;
  *(int32_t *)((int64_t)param_1 + 0x2e4) = 0;
  *(int32_t *)(param_1 + 0x5d) = 0;
  *(int32_t *)((int64_t)param_1 + 0x2ec) = 0;
  *(int32_t *)(param_1 + 0x5e) = 0;
  *(int32_t *)((int64_t)param_1 + 0x2f4) = 0;
  *(int32_t *)(param_1 + 0x5f) = 0;
  param_1[0x61] = &processed_var_9288_ptr;
  LOCK();
  *(int32_t *)(param_1 + 0x62) = 0;
  UNLOCK();
  param_1[99] = 0xffffffffffffffff;
  param_1[0x77] = 0;
  param_1[0x79] = 0;
  function_2786d0(param_1);
  *(int32_t *)(param_1 + 1) = 0;
  return param_1;
}
uint64_t function_275250(uint64_t param_1,uint64_t param_2)
{
  function_275730();
  if ((param_2 & 1) != 0) {
    free(param_1,0x3d0);
  }
  return param_1;
}
// 函数: void function_275290(int64_t *param_1)
void function_275290(int64_t *param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  plVar1 = (int64_t *)param_1[1];
  for (plVar2 = (int64_t *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 2) {
    if ((int64_t *)*plVar2 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar2 + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void function_2752b0(int64_t param_1)
void function_2752b0(int64_t param_1)
{
  *(uint64_t *)(param_1 + 0x168) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x170) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x170) = 0;
  *(int32_t *)(param_1 + 0x180) = 0;
  *(uint64_t *)(param_1 + 0x168) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x148) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x150) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x150) = 0;
  *(int32_t *)(param_1 + 0x160) = 0;
  *(uint64_t *)(param_1 + 0x148) = &system_state_ptr;
  *(void **)(param_1 + 0xb0) = &system_state_ptr;
  *(void **)(param_1 + 0x18) = &system_state_ptr;
  return;
}
uint64_t *
function_275370(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &processed_var_768_ptr;
  *(int32_t *)(param_1 + 2) = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 1) = 0;
  param_1[5] = 0;
  *param_1 = &processed_var_9304_ptr;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 0x16;
  function_285e20(param_1 + 0xd,param_2,param_3,param_4,0xfffffffffffffffe);
  param_1[0x3e] = &system_state_ptr;
  param_1[0x3f] = 0;
  *(int32_t *)(param_1 + 0x40) = 0;
  param_1[0x3e] = &system_data_buffer_ptr;
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  *(int32_t *)(param_1 + 0x40) = 0;
  *(int32_t *)((int64_t)param_1 + 0x244) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x214) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x21c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x224) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x22c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x234) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x23c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x24c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x254) = 0x7f7fffff00000000;
  *(uint64_t *)((int64_t)param_1 + 0x25c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x264) = 0x7f7fffff00000000;
  *(uint64_t *)((int64_t)param_1 + 0x26c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x274) = 0x7f7fffff00000000;
  *(uint64_t *)((int64_t)param_1 + 0x2fc) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x27c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x284) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x28c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x294) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x29c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2a4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2ac) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2b4) = 0;
  *(uint64_t *)((int64_t)param_1 + 700) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2c4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2cc) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2d4) = 0;
  *(int32_t *)((int64_t)param_1 + 0x2dc) = 0;
  *(int32_t *)(param_1 + 0x5c) = 0;
  *(int32_t *)((int64_t)param_1 + 0x2e4) = 0;
  *(int32_t *)(param_1 + 0x5d) = 0;
  *(int32_t *)((int64_t)param_1 + 0x2ec) = 0;
  *(int32_t *)(param_1 + 0x5e) = 0;
  *(int32_t *)((int64_t)param_1 + 0x2f4) = 0;
  *(int32_t *)(param_1 + 0x5f) = 0;
  param_1[0x61] = &processed_var_9288_ptr;
  LOCK();
  *(int32_t *)(param_1 + 0x62) = 0;
  UNLOCK();
  param_1[99] = 0xffffffffffffffff;
  param_1[0x77] = 0;
  param_1[0x79] = 0;
  function_2786d0(param_1);
  *(int32_t *)(param_1 + 1) = 0;
  function_27a810(param_1,param_2);
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
function_275540(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &processed_var_768_ptr;
  *(int32_t *)(param_1 + 2) = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 1) = 0;
  param_1[5] = 0;
  *param_1 = &processed_var_9304_ptr;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 0x16;
  function_285e20(param_1 + 0xd,param_2,(char)param_3,param_4,0xfffffffffffffffe);
  param_1[0x3e] = &system_state_ptr;
  param_1[0x3f] = 0;
  *(int32_t *)(param_1 + 0x40) = 0;
  param_1[0x3e] = &system_data_buffer_ptr;
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  *(int32_t *)(param_1 + 0x40) = 0;
  *(int32_t *)((int64_t)param_1 + 0x244) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x214) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x21c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x224) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x22c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x234) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x23c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x24c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x254) = 0x7f7fffff00000000;
  *(uint64_t *)((int64_t)param_1 + 0x25c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x264) = 0x7f7fffff00000000;
  *(uint64_t *)((int64_t)param_1 + 0x26c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x274) = 0x7f7fffff00000000;
  *(uint64_t *)((int64_t)param_1 + 0x2fc) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x27c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x284) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x28c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x294) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x29c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2a4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2ac) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2b4) = 0;
  *(uint64_t *)((int64_t)param_1 + 700) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2c4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2cc) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2d4) = 0;
  *(int32_t *)((int64_t)param_1 + 0x2dc) = 0;
  *(int32_t *)(param_1 + 0x5c) = 0;
  *(int32_t *)((int64_t)param_1 + 0x2e4) = 0;
  *(int32_t *)(param_1 + 0x5d) = 0;
  *(int32_t *)((int64_t)param_1 + 0x2ec) = 0;
  *(int32_t *)(param_1 + 0x5e) = 0;
  *(int32_t *)((int64_t)param_1 + 0x2f4) = 0;
  *(int32_t *)(param_1 + 0x5f) = 0;
  param_1[0x61] = &processed_var_9288_ptr;
  LOCK();
  *(int32_t *)(param_1 + 0x62) = 0;
  UNLOCK();
  param_1[99] = 0xffffffffffffffff;
  param_1[0x77] = 0;
  param_1[0x79] = 0;
  function_2786d0(param_1);
  *(int32_t *)(param_1 + 1) = 0;
  lVar1 = RenderingSystem_VertexProcessor(system_resource_state,param_2,1);
  if (lVar1 != 0) {
    RenderingSystem_275A60(lVar1,param_1,1);
  }
  function_27a810(param_1,param_3);
  return param_1;
}
// 函数: void function_275730(uint64_t *param_1)
void function_275730(uint64_t *param_1)
{
  *param_1 = &processed_var_9304_ptr;
  function_275960();
  if ((int64_t *)param_1[0x79] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x79] + 0x38))();
  }
  if ((int64_t *)param_1[0x77] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x77] + 0x38))();
  }
  param_1[0x61] = &processed_var_9288_ptr;
  param_1[0x3e] = &system_data_buffer_ptr;
  if (param_1[0x3f] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x3f] = 0;
  *(int32_t *)(param_1 + 0x41) = 0;
  param_1[0x3e] = &system_state_ptr;
  function_2752b0(param_1 + 0xd);
  function_2841d0();
  *param_1 = &processed_var_768_ptr;
  param_1[5] = 0;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  return;
}
uint64_t function_275820(int64_t *param_1)
{
  char cVar1;
  if (*(code **)(*param_1 + 0xc0) == (code *)&processed_var_9120_ptr) {
    cVar1 = (param_1[8] - param_1[7] & 0xfffffffffffffff0U) == 0;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0xc0))();
  }
  if (cVar1 == '\0') {
    return *(uint64_t *)param_1[7];
  }
  return 0;
}
uint64_t function_275870(uint64_t *param_1)
{
  char cVar1;
  if ((void *)*param_1 == &processed_var_9304_ptr) {
    cVar1 = (param_1[8] - param_1[7] & 0xfffffffffffffff0) == 0;
  }
  else {
    cVar1 = (**(code **)((void *)*param_1 + 0xc0))(param_1);
  }
  if (cVar1 == '\0') {
    return *(uint64_t *)param_1[7];
  }
  return 0;
}
// 函数: void function_2758c0(int64_t param_1,char param_2)
void function_2758c0(int64_t param_1,char param_2)
{
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  lVar4 = *(int64_t *)(param_1 + 0x38);
  uVar1 = 0;
  uVar3 = uVar1;
  if (*(int64_t *)(param_1 + 0x40) - lVar4 >> 4 != 0) {
    do {
      lVar4 = *(int64_t *)(uVar1 + lVar4);
      if (param_2 == '\0') {
        if (*(char *)(lVar4 + 0xfa) != '\0') {
          *(int8_t *)(lVar4 + 0xfa) = 0;
LAB_18027591d:
          SystemInitializer();
        }
      }
      else if (*(char *)(lVar4 + 0xfa) != '\x01') {
        *(int8_t *)(lVar4 + 0xfa) = 1;
        goto LAB_18027591d;
      }
      lVar4 = *(int64_t *)(param_1 + 0x38);
      uVar2 = (int)uVar3 + 1;
      uVar1 = uVar1 + 0x10;
      uVar3 = (uint64_t)uVar2;
    } while ((uint64_t)(int64_t)(int)uVar2 <
             (uint64_t)(*(int64_t *)(param_1 + 0x40) - lVar4 >> 4));
  }
  return;
}
// 函数: void function_2758eb(uint64_t param_1,uint64_t param_2,int64_t param_3)
void function_2758eb(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  uint64_t uVar2;
  char unaff_BPL;
  int64_t unaff_RSI;
  uint unaff_EDI;
  uVar2 = (uint64_t)unaff_EDI;
  do {
    lVar1 = *(int64_t *)(uVar2 + param_3);
    if (unaff_BPL == '\0') {
      if (*(char *)(lVar1 + 0xfa) != '\0') {
        *(int8_t *)(lVar1 + 0xfa) = 0;
LAB_18027591d:
        SystemInitializer();
      }
    }
    else if (*(char *)(lVar1 + 0xfa) != '\x01') {
      *(int8_t *)(lVar1 + 0xfa) = 1;
      goto LAB_18027591d;
    }
    param_3 = *(int64_t *)(unaff_RSI + 0x38);
    unaff_EDI = unaff_EDI + 1;
    uVar2 = uVar2 + 0x10;
    if ((uint64_t)(*(int64_t *)(unaff_RSI + 0x40) - param_3 >> 4) <=
        (uint64_t)(int64_t)(int)unaff_EDI) {
      return;
    }
  } while( true );
}
// 函数: void function_275944(void)
void function_275944(void)
{
  return;
}
// 函数: void function_275960(int64_t param_1)
void function_275960(int64_t param_1)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  lVar2 = 0;
  iVar1 = (int)(*(int64_t *)(param_1 + 0x40) - *(int64_t *)(param_1 + 0x38) >> 4);
  lVar3 = (int64_t)iVar1;
  if (0 < iVar1) {
    do {
      *(uint64_t *)(*(int64_t *)(lVar2 + *(int64_t *)(param_1 + 0x38)) + 0x1c8) = 0;
      lVar3 = lVar3 + -1;
      lVar2 = lVar2 + 0x10;
    } while (lVar3 != 0);
  }
  function_284500();
  lVar2 = *(int64_t *)(param_1 + 0x28);
  *(int32_t *)(param_1 + 0x58) = 0;
  if ((lVar2 != 0) &&
     (*(short *)(lVar2 + 0x2b0) = *(short *)(lVar2 + 0x2b0) + 1, *(int64_t *)(lVar2 + 0x168) != 0))
  {
    SystemFunction_0001802eeba0();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_2759e0(uint64_t param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  int64_t *plVar2;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16,0,0xfffffffffffffffe);
  plVar2 = (int64_t *)RenderingSystem_ShaderManager(uVar1);
  *param_2 = plVar2;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  RenderingSystem_275A60(param_1,*param_2,1);
  return param_2;
}