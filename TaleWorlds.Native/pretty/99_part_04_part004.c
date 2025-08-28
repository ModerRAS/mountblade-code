#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_04_part004.c - 9 个函数
// 函数: void function_259b10(int32_t *param_1,int64_t *param_2)
void function_259b10(int32_t *param_1,int64_t *param_2)
{
  int32_t uVar1;
  int8_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t *puVar7;
  uint64_t uVar8;
  int8_t *puVar9;
  uint uVar10;
  uint64_t uVar11;
  puVar7 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = 1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 0x11) {
    System_BufferManager(param_2,(int64_t)puVar7 + (0x10 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  *puVar7 = *param_1;
  puVar7[1] = uVar1;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  param_2[1] = param_2[1] + 0x10;
  System_QueueProcessor(param_2,param_1 + 4);
  function_25a940(&processed_var_7680_ptr,param_1[0xc],param_2);
  puVar7 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 0x11) {
    System_BufferManager(param_2,(int64_t)puVar7 + (0x10 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  uVar1 = param_1[0xe];
  uVar5 = param_1[0xf];
  uVar6 = param_1[0x10];
  *puVar7 = param_1[0xd];
  puVar7[1] = uVar1;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  param_2[1] = param_2[1] + 0x10;
  Audio_SoundManager(param_2,param_1 + 0x11);
  Audio_SoundManager(param_2,param_1 + 0x15);
  puVar7 = (int32_t *)param_2[1];
  uVar1 = param_1[0x19];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x1a];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x1b];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x1c];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x1d];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x1e];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x1f];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x20];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x21];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x22];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x23];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x24];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x25];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  uVar8 = 0;
  *puVar7 = 0;
  param_2[1] = param_2[1] + 4;
  function_639f50(param_2,param_1 + 0x26);
  function_639f50(param_2,param_1 + 0x2a);
  function_639f50(param_2,param_1 + 0x2e);
  puVar7 = (int32_t *)param_2[1];
  uVar1 = param_1[0x32];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x33];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  lVar3 = *(int64_t *)(param_1 + 0x36);
  lVar4 = *(int64_t *)(param_1 + 0x34);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = (int)(lVar3 - lVar4 >> 5);
  param_2[1] = param_2[1] + 4;
  puVar7 = (int32_t *)param_2[1];
  uVar11 = uVar8;
  if (*(int64_t *)(param_1 + 0x36) - *(int64_t *)(param_1 + 0x34) >> 5 != 0) {
    do {
      System_QueueProcessor(param_2,uVar8 * 0x20 + *(int64_t *)(param_1 + 0x34));
      uVar10 = (int)uVar11 + 1;
      uVar8 = (uint64_t)(int)uVar10;
      uVar11 = (uint64_t)uVar10;
    } while (uVar8 < (uint64_t)(*(int64_t *)(param_1 + 0x36) - *(int64_t *)(param_1 + 0x34) >> 5)
            );
    puVar7 = (int32_t *)param_2[1];
  }
  uVar1 = param_1[0x3c];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  param_2[1] = param_2[1] + 4;
  System_QueueProcessor(param_2,param_1 + 0x3e);
  puVar7 = (int32_t *)param_2[1];
  uVar1 = param_1[0x46];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x47];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x48];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x49];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x4a];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x4b];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x4c];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x4f];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x50];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x51];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar9 = (int8_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar9;
  uVar2 = *(int8_t *)(param_1 + 0x52);
  if ((uint64_t)((*param_2 - (int64_t)puVar9) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar9 + (1 - *param_2));
    puVar9 = (int8_t *)param_2[1];
  }
  *puVar9 = uVar2;
  puVar9 = (int8_t *)(param_2[1] + 1);
  param_2[1] = (int64_t)puVar9;
  uVar2 = *(int8_t *)((int64_t)param_1 + 0x149);
  if ((uint64_t)((*param_2 - (int64_t)puVar9) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar9 + (1 - *param_2));
    puVar9 = (int8_t *)param_2[1];
  }
  *puVar9 = uVar2;
  puVar7 = (int32_t *)(param_2[1] + 1);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x4d];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar1 = param_1[0x4e];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar9 = (int8_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar9;
  uVar2 = *(int8_t *)((int64_t)param_1 + 0x14a);
  if ((uint64_t)((*param_2 - (int64_t)puVar9) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar9 + (1 - *param_2));
    *(int8_t *)param_2[1] = uVar2;
  }
  else {
    *puVar9 = uVar2;
  }
  param_2[1] = param_2[1] + 1;
  return;
}
// 函数: void function_25a480(int64_t param_1,int64_t param_2)
void function_25a480(int64_t param_1,int64_t param_2)
{
  uint *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  int iVar4;
  uint uVar5;
  int32_t *puVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint64_t uVar10;
  int *piVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t *plVar14;
  int64_t lVar15;
  piVar11 = *(int **)(param_2 + 8);
  iVar4 = *piVar11;
  *(int **)(param_2 + 8) = piVar11 + 1;
  uVar5 = piVar11[1];
  piVar11 = piVar11 + 2;
  *(int **)(param_2 + 8) = piVar11;
  if (uVar5 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 8) + 0x18))((int64_t *)(param_1 + 8),piVar11,uVar5);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar5;
    piVar11 = *(int **)(param_2 + 8);
  }
  *(uint64_t *)(param_1 + 0x28) = *(uint64_t *)piVar11;
  lVar13 = *(int64_t *)(param_2 + 8);
  piVar11 = (int *)(lVar13 + 8);
  *(int **)(param_2 + 8) = piVar11;
  lVar12 = (int64_t)*piVar11;
  *(int64_t *)(param_2 + 8) = lVar13 + 0xc;
  function_25ab30(param_1 + 0x30,lVar12);
  lVar15 = 0;
  lVar13 = lVar15;
  if (0 < lVar12) {
    do {
      lVar13 = lVar13 + 0x20;
      uVar10 = (*(uint64_t **)(param_2 + 8))[1];
      puVar2 = (uint64_t *)(*(int64_t *)(param_1 + 0x30) + -0x20 + lVar13);
      *puVar2 = **(uint64_t **)(param_2 + 8);
      puVar2[1] = uVar10;
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 0x10;
      puVar6 = *(int32_t **)(param_2 + 8);
      uVar7 = puVar6[1];
      uVar8 = puVar6[2];
      uVar9 = puVar6[3];
      puVar3 = (int32_t *)(*(int64_t *)(param_1 + 0x30) + -0x10 + lVar13);
      *puVar3 = *puVar6;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 0x10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (iVar4 != 0) {
    lVar13 = (int64_t)**(int **)(param_2 + 8);
    *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
    function_25aa20((int64_t *)(param_1 + 0x50),lVar13);
    if (0 < lVar13) {
      do {
        plVar14 = (int64_t *)(*(int64_t *)(param_1 + 0x50) + lVar15);
        uVar5 = **(uint **)(param_2 + 8);
        puVar1 = *(uint **)(param_2 + 8) + 1;
        *(uint **)(param_2 + 8) = puVar1;
        if (uVar5 != 0) {
          (**(code **)(*plVar14 + 0x18))(plVar14,puVar1,uVar5);
          *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar5;
        }
        lVar15 = lVar15 + 0x20;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  return;
}
// 函数: void function_25a5c0(int64_t param_1,int64_t *param_2)
void function_25a5c0(int64_t param_1,int64_t *param_2)
{
  int *piVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint64_t *puVar10;
  int *piVar11;
  int32_t *puVar12;
  int iVar13;
  int64_t lVar14;
  uint64_t uVar15;
  int64_t lVar16;
  int64_t lVar17;
  puVar12 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar12) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar12 + (4 - *param_2));
    puVar12 = (int32_t *)param_2[1];
  }
  *puVar12 = 1;
  param_2[1] = param_2[1] + 4;
  System_QueueProcessor(param_2,param_1 + 8);
  puVar10 = (uint64_t *)param_2[1];
  uVar3 = *(uint64_t *)(param_1 + 0x28);
  if ((uint64_t)((*param_2 - (int64_t)puVar10) + param_2[2]) < 9) {
    System_BufferManager(param_2,(int64_t)puVar10 + (8 - *param_2));
    puVar10 = (uint64_t *)param_2[1];
  }
  *puVar10 = uVar3;
  piVar11 = (int *)(param_2[1] + 8);
  param_2[1] = (int64_t)piVar11;
  lVar14 = *(int64_t *)(param_1 + 0x38);
  lVar16 = *(int64_t *)(param_1 + 0x30);
  if ((uint64_t)((*param_2 - (int64_t)piVar11) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar11 + (4 - *param_2));
    piVar11 = (int *)param_2[1];
  }
  iVar13 = (int)(lVar14 - lVar16 >> 5);
  *piVar11 = iVar13;
  lVar17 = (int64_t)iVar13;
  piVar11 = (int *)(param_2[1] + 4);
  lVar16 = 0;
  param_2[1] = (int64_t)piVar11;
  lVar14 = lVar16;
  if (0 < lVar17) {
    do {
      lVar4 = *(int64_t *)(param_1 + 0x30);
      if ((uint64_t)((*param_2 - (int64_t)piVar11) + param_2[2]) < 0x11) {
        System_BufferManager(param_2,(int64_t)piVar11 + (0x10 - *param_2));
        piVar11 = (int *)param_2[1];
      }
      piVar1 = (int *)(lVar4 + lVar14);
      iVar13 = piVar1[1];
      iVar5 = piVar1[2];
      iVar6 = piVar1[3];
      *piVar11 = *piVar1;
      piVar11[1] = iVar13;
      piVar11[2] = iVar5;
      piVar11[3] = iVar6;
      param_2[1] = param_2[1] + 0x10;
      puVar12 = (int32_t *)param_2[1];
      lVar4 = *(int64_t *)(param_1 + 0x30);
      if ((uint64_t)((*param_2 - (int64_t)puVar12) + param_2[2]) < 0x11) {
        System_BufferManager(param_2,(int64_t)puVar12 + (0x10 - *param_2));
        puVar12 = (int32_t *)param_2[1];
      }
      puVar2 = (int32_t *)(lVar4 + 0x10 + lVar14);
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      *puVar12 = *puVar2;
      puVar12[1] = uVar7;
      puVar12[2] = uVar8;
      puVar12[3] = uVar9;
      piVar11 = (int *)(param_2[1] + 0x10);
      param_2[1] = (int64_t)piVar11;
      lVar17 = lVar17 + -1;
      lVar14 = lVar14 + 0x20;
    } while (lVar17 != 0);
  }
  uVar15 = *(int64_t *)(param_1 + 0x58) - *(int64_t *)(param_1 + 0x50) >> 5;
  if ((uint64_t)((*param_2 - (int64_t)piVar11) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar11 + (4 - *param_2));
    piVar11 = (int *)param_2[1];
  }
  iVar13 = (int)uVar15;
  *piVar11 = iVar13;
  param_2[1] = param_2[1] + 4;
  if (0 < iVar13) {
    uVar15 = uVar15 & 0xffffffff;
    do {
      System_QueueProcessor(param_2,*(int64_t *)(param_1 + 0x50) + lVar16);
      lVar16 = lVar16 + 0x20;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  return;
}
// 函数: void function_25a5cf(int32_t param_1,int64_t *param_2)
void function_25a5cf(int32_t param_1,int64_t *param_2)
{
  int *piVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int64_t in_RCX;
  uint64_t *puVar11;
  int *piVar12;
  int32_t *puVar13;
  int64_t *unaff_RBX;
  int iVar14;
  int64_t lVar15;
  uint64_t uVar16;
  int64_t lVar17;
  int64_t lVar18;
  int32_t uVar19;
  puVar13 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar13) + unaff_RBX[2]) < 5) {
    param_1 = System_BufferManager(param_1,(int64_t)puVar13 + (4 - *param_2));
    puVar13 = (int32_t *)unaff_RBX[1];
  }
  *puVar13 = 1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  uVar19 = System_QueueProcessor(param_1,in_RCX + 8);
  puVar11 = (uint64_t *)unaff_RBX[1];
  uVar3 = *(uint64_t *)(in_RCX + 0x28);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar11) + unaff_RBX[2]) < 9) {
    uVar19 = System_BufferManager(uVar19,(int64_t)puVar11 + (8 - *unaff_RBX));
    puVar11 = (uint64_t *)unaff_RBX[1];
  }
  *puVar11 = uVar3;
  piVar12 = (int *)(unaff_RBX[1] + 8);
  unaff_RBX[1] = (int64_t)piVar12;
  lVar15 = *(int64_t *)(in_RCX + 0x38);
  lVar17 = *(int64_t *)(in_RCX + 0x30);
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar12) + unaff_RBX[2]) < 5) {
    uVar19 = System_BufferManager(uVar19,(int64_t)piVar12 + (4 - *unaff_RBX));
    piVar12 = (int *)unaff_RBX[1];
  }
  iVar14 = (int)(lVar15 - lVar17 >> 5);
  *piVar12 = iVar14;
  lVar18 = (int64_t)iVar14;
  piVar12 = (int *)(unaff_RBX[1] + 4);
  lVar17 = 0;
  unaff_RBX[1] = (int64_t)piVar12;
  lVar15 = lVar17;
  if (0 < lVar18) {
    do {
      lVar4 = *(int64_t *)(in_RCX + 0x30);
      if ((uint64_t)((*unaff_RBX - (int64_t)piVar12) + unaff_RBX[2]) < 0x11) {
        System_BufferManager(uVar19,(int64_t)piVar12 + (0x10 - *unaff_RBX));
        piVar12 = (int *)unaff_RBX[1];
      }
      piVar1 = (int *)(lVar4 + lVar15);
      iVar14 = *piVar1;
      iVar5 = piVar1[1];
      iVar6 = piVar1[2];
      iVar7 = piVar1[3];
      *piVar12 = iVar14;
      piVar12[1] = iVar5;
      piVar12[2] = iVar6;
      piVar12[3] = iVar7;
      unaff_RBX[1] = unaff_RBX[1] + 0x10;
      puVar13 = (int32_t *)unaff_RBX[1];
      lVar4 = *(int64_t *)(in_RCX + 0x30);
      if ((uint64_t)((*unaff_RBX - (int64_t)puVar13) + unaff_RBX[2]) < 0x11) {
        System_BufferManager(iVar14,(int64_t)puVar13 + (0x10 - *unaff_RBX));
        puVar13 = (int32_t *)unaff_RBX[1];
      }
      puVar2 = (int32_t *)(lVar4 + 0x10 + lVar15);
      uVar19 = *puVar2;
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      *puVar13 = uVar19;
      puVar13[1] = uVar8;
      puVar13[2] = uVar9;
      puVar13[3] = uVar10;
      piVar12 = (int *)(unaff_RBX[1] + 0x10);
      unaff_RBX[1] = (int64_t)piVar12;
      lVar18 = lVar18 + -1;
      lVar15 = lVar15 + 0x20;
    } while (lVar18 != 0);
  }
  uVar16 = *(int64_t *)(in_RCX + 0x58) - *(int64_t *)(in_RCX + 0x50) >> 5;
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar12) + unaff_RBX[2]) < 5) {
    uVar19 = System_BufferManager(uVar19,(int64_t)piVar12 + (4 - *unaff_RBX));
    piVar12 = (int *)unaff_RBX[1];
  }
  iVar14 = (int)uVar16;
  *piVar12 = iVar14;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  if (0 < iVar14) {
    uVar16 = uVar16 & 0xffffffff;
    do {
      uVar19 = System_QueueProcessor(uVar19,*(int64_t *)(in_RCX + 0x50) + lVar17);
      lVar17 = lVar17 + 0x20;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  return;
}
// 函数: void function_25a6a3(int *param_1)
void function_25a6a3(int *param_1)
{
  int *piVar1;
  int32_t *puVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t *puVar10;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int iVar11;
  uint64_t uVar12;
  uint64_t unaff_RDI;
  int64_t unaff_R15;
  int32_t in_XMM0_Da;
  uVar12 = unaff_RDI & 0xffffffff;
  do {
    lVar3 = *(int64_t *)(unaff_RBP + 0x30);
    if ((uint64_t)((*unaff_RBX - (int64_t)param_1) + unaff_RBX[2]) < 0x11) {
      System_BufferManager(in_XMM0_Da,(int64_t)param_1 + (0x10 - *unaff_RBX));
      param_1 = (int *)unaff_RBX[1];
    }
    piVar1 = (int *)(lVar3 + uVar12);
    iVar11 = *piVar1;
    iVar4 = piVar1[1];
    iVar5 = piVar1[2];
    iVar6 = piVar1[3];
    *param_1 = iVar11;
    param_1[1] = iVar4;
    param_1[2] = iVar5;
    param_1[3] = iVar6;
    unaff_RBX[1] = unaff_RBX[1] + 0x10;
    puVar10 = (int32_t *)unaff_RBX[1];
    lVar3 = *(int64_t *)(unaff_RBP + 0x30);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar10) + unaff_RBX[2]) < 0x11) {
      System_BufferManager(iVar11,(int64_t)puVar10 + (0x10 - *unaff_RBX));
      puVar10 = (int32_t *)unaff_RBX[1];
    }
    puVar2 = (int32_t *)(lVar3 + 0x10 + uVar12);
    in_XMM0_Da = *puVar2;
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    uVar12 = uVar12 + 0x20;
    *puVar10 = in_XMM0_Da;
    puVar10[1] = uVar7;
    puVar10[2] = uVar8;
    puVar10[3] = uVar9;
    param_1 = (int *)(unaff_RBX[1] + 0x10);
    unaff_RBX[1] = (int64_t)param_1;
    unaff_R15 = unaff_R15 + -1;
  } while (unaff_R15 != 0);
  uVar12 = *(int64_t *)(unaff_RBP + 0x58) - *(int64_t *)(unaff_RBP + 0x50) >> 5;
  if ((uint64_t)((*unaff_RBX - (int64_t)param_1) + unaff_RBX[2]) < 5) {
    in_XMM0_Da = System_BufferManager(in_XMM0_Da,(int64_t)param_1 + (4 - *unaff_RBX));
    param_1 = (int *)unaff_RBX[1];
  }
  iVar11 = (int)uVar12;
  *param_1 = iVar11;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  if (0 < iVar11) {
    uVar12 = uVar12 & 0xffffffff;
    do {
      in_XMM0_Da = System_QueueProcessor(in_XMM0_Da,*(int64_t *)(unaff_RBP + 0x50) + unaff_RDI);
      unaff_RDI = unaff_RDI + 0x20;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}
// 函数: void function_25a73d(int *param_1)
void function_25a73d(int *param_1)
{
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int iVar1;
  uint64_t uVar2;
  uVar2 = *(int64_t *)(unaff_RBP + 0x58) - *(int64_t *)(unaff_RBP + 0x50) >> 5;
  if ((uint64_t)((*unaff_RBX - (int64_t)param_1) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    param_1 = (int *)unaff_RBX[1];
  }
  iVar1 = (int)uVar2;
  *param_1 = iVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  if (0 < iVar1) {
    uVar2 = uVar2 & 0xffffffff;
    do {
      System_QueueProcessor();
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}
// 函数: void function_25a761(void)
void function_25a761(void)
{
  int64_t unaff_RBX;
  uint unaff_ESI;
  uint64_t uVar1;
  System_BufferManager();
  **(uint **)(unaff_RBX + 8) = unaff_ESI;
  *(int64_t *)(unaff_RBX + 8) = *(int64_t *)(unaff_RBX + 8) + 4;
  if (0 < (int)unaff_ESI) {
    uVar1 = (uint64_t)unaff_ESI;
    do {
      System_QueueProcessor();
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_25a7b0(int64_t *param_1,int64_t param_2,uint *param_3)
void function_25a7b0(int64_t *param_1,int64_t param_2,uint *param_3)
{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  int64_t lVar4;
  byte *pbVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int8_t stack_array_498 [32];
  uint64_t local_var_478;
  void *plocal_var_468;
  byte *pbStack_460;
  int iStack_458;
  byte abStack_450 [1032];
  uint64_t local_var_48;
  local_var_478 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_498;
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *param_3 = 0;
  uVar3 = **(uint **)(param_2 + 8);
  uVar7 = (uint64_t)uVar3;
  *(uint **)(param_2 + 8) = *(uint **)(param_2 + 8) + 1;
  if (uVar3 != 0) {
    do {
      plocal_var_468 = &memory_allocator_336_ptr;
      pbStack_460 = abStack_450;
      iStack_458 = 0;
      abStack_450[0] = 0;
      uVar3 = **(uint **)(param_2 + 8);
      puVar1 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar1;
      lVar8 = 0;
      plVar9 = param_1;
      if (uVar3 != 0) {
        SystemManager_Executor(&plocal_var_468,puVar1,uVar3);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar3;
      }
      do {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (*(char *)(*plVar9 + lVar4) != '\0');
        iVar6 = (int)lVar4;
        if (iStack_458 == iVar6) {
          if (iStack_458 != 0) {
            pbVar5 = pbStack_460;
            do {
              pbVar2 = pbVar5 + (*plVar9 - (int64_t)pbStack_460);
              iVar6 = (uint)*pbVar5 - (uint)*pbVar2;
              if (iVar6 != 0) break;
              pbVar5 = pbVar5 + 1;
            } while (*pbVar2 != 0);
          }
LAB_18025a8de:
          if (iVar6 == 0) {
            *param_3 = *param_3 | *(uint *)(param_1 + lVar8 * 2 + 1);
            break;
          }
        }
        else if (iStack_458 == 0) goto LAB_18025a8de;
        lVar8 = lVar8 + 1;
        plVar9 = plVar9 + 2;
      } while (lVar8 < 0x1f);
      plocal_var_468 = &system_state_ptr;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_498);
}
// 函数: void function_25a940(uint64_t *param_1,uint param_2,int64_t *param_3)
void function_25a940(uint64_t *param_1,uint param_2,int64_t *param_3)
{
  int32_t *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  puVar1 = (int32_t *)param_3[1];
  if ((uint64_t)((*param_3 - (int64_t)puVar1) + param_3[2]) < 5) {
    System_BufferManager(param_3,(int64_t)puVar1 + (4 - *param_3));
    puVar1 = (int32_t *)param_3[1];
  }
  iVar4 = 0;
  *puVar1 = 0;
  lVar3 = *param_3;
  lVar2 = param_3[1] + 4;
  param_3[1] = lVar2;
  lVar5 = 0;
  if (lVar3 != 0) {
    lVar5 = lVar2 - lVar3;
  }
  if ((uint64_t)((lVar3 - lVar2) + param_3[2]) < 5) {
    System_BufferManager(param_3,(lVar2 - lVar3) + 4);
    lVar2 = param_3[1];
  }
  lVar3 = 0x1f;
  param_3[1] = lVar2 + 4;
  do {
    if ((*(uint *)(param_1 + 1) & param_2) != 0) {
      UtilitiesSystem_ThreadManager(param_3,*param_1);
      iVar4 = iVar4 + 1;
    }
    param_1 = param_1 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(int *)(lVar5 + *param_3) = iVar4;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address