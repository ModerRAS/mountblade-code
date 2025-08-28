#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part004.c - 9 个函数

// 函数: void FUN_180259b10(int32_t *param_1,longlong *param_2)
void FUN_180259b10(int32_t *param_1,longlong *param_2)

{
  int32_t uVar1;
  int8_t uVar2;
  longlong lVar3;
  longlong lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t *puVar7;
  ulonglong uVar8;
  int8_t *puVar9;
  uint uVar10;
  ulonglong uVar11;
  
  puVar7 = (int32_t *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = 1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 0x11) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (0x10 - *param_2));
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
  FUN_180639ec0(param_2,param_1 + 4);
  FUN_18025a940(&unknown_var_7680_ptr,param_1[0xc],param_2);
  puVar7 = (int32_t *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 0x11) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (0x10 - *param_2));
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
  FUN_180639fd0(param_2,param_1 + 0x11);
  FUN_180639fd0(param_2,param_1 + 0x15);
  puVar7 = (int32_t *)param_2[1];
  uVar1 = param_1[0x19];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x1a];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x1b];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x1c];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x1d];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x1e];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x1f];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x20];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x21];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x22];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x23];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x24];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x25];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  uVar8 = 0;
  *puVar7 = 0;
  param_2[1] = param_2[1] + 4;
  FUN_180639f50(param_2,param_1 + 0x26);
  FUN_180639f50(param_2,param_1 + 0x2a);
  FUN_180639f50(param_2,param_1 + 0x2e);
  puVar7 = (int32_t *)param_2[1];
  uVar1 = param_1[0x32];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x33];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  lVar3 = *(longlong *)(param_1 + 0x36);
  lVar4 = *(longlong *)(param_1 + 0x34);
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = (int)(lVar3 - lVar4 >> 5);
  param_2[1] = param_2[1] + 4;
  puVar7 = (int32_t *)param_2[1];
  uVar11 = uVar8;
  if (*(longlong *)(param_1 + 0x36) - *(longlong *)(param_1 + 0x34) >> 5 != 0) {
    do {
      FUN_180639ec0(param_2,uVar8 * 0x20 + *(longlong *)(param_1 + 0x34));
      uVar10 = (int)uVar11 + 1;
      uVar8 = (ulonglong)(int)uVar10;
      uVar11 = (ulonglong)uVar10;
    } while (uVar8 < (ulonglong)(*(longlong *)(param_1 + 0x36) - *(longlong *)(param_1 + 0x34) >> 5)
            );
    puVar7 = (int32_t *)param_2[1];
  }
  uVar1 = param_1[0x3c];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  param_2[1] = param_2[1] + 4;
  FUN_180639ec0(param_2,param_1 + 0x3e);
  puVar7 = (int32_t *)param_2[1];
  uVar1 = param_1[0x46];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x47];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x48];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x49];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x4a];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x4b];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x4c];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x4f];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x50];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x51];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar9 = (int8_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar9;
  uVar2 = *(int8_t *)(param_1 + 0x52);
  if ((ulonglong)((*param_2 - (longlong)puVar9) + param_2[2]) < 2) {
    FUN_180639bf0(param_2,puVar9 + (1 - *param_2));
    puVar9 = (int8_t *)param_2[1];
  }
  *puVar9 = uVar2;
  puVar9 = (int8_t *)(param_2[1] + 1);
  param_2[1] = (longlong)puVar9;
  uVar2 = *(int8_t *)((longlong)param_1 + 0x149);
  if ((ulonglong)((*param_2 - (longlong)puVar9) + param_2[2]) < 2) {
    FUN_180639bf0(param_2,puVar9 + (1 - *param_2));
    puVar9 = (int8_t *)param_2[1];
  }
  *puVar9 = uVar2;
  puVar7 = (int32_t *)(param_2[1] + 1);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x4d];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar1 = param_1[0x4e];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar1;
  puVar9 = (int8_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar9;
  uVar2 = *(int8_t *)((longlong)param_1 + 0x14a);
  if ((ulonglong)((*param_2 - (longlong)puVar9) + param_2[2]) < 2) {
    FUN_180639bf0(param_2,puVar9 + (1 - *param_2));
    *(int8_t *)param_2[1] = uVar2;
  }
  else {
    *puVar9 = uVar2;
  }
  param_2[1] = param_2[1] + 1;
  return;
}






// 函数: void FUN_18025a480(longlong param_1,longlong param_2)
void FUN_18025a480(longlong param_1,longlong param_2)

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
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  
  piVar11 = *(int **)(param_2 + 8);
  iVar4 = *piVar11;
  *(int **)(param_2 + 8) = piVar11 + 1;
  uVar5 = piVar11[1];
  piVar11 = piVar11 + 2;
  *(int **)(param_2 + 8) = piVar11;
  if (uVar5 != 0) {
    (**(code **)(*(longlong *)(param_1 + 8) + 0x18))((longlong *)(param_1 + 8),piVar11,uVar5);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar5;
    piVar11 = *(int **)(param_2 + 8);
  }
  *(uint64_t *)(param_1 + 0x28) = *(uint64_t *)piVar11;
  lVar13 = *(longlong *)(param_2 + 8);
  piVar11 = (int *)(lVar13 + 8);
  *(int **)(param_2 + 8) = piVar11;
  lVar12 = (longlong)*piVar11;
  *(longlong *)(param_2 + 8) = lVar13 + 0xc;
  FUN_18025ab30(param_1 + 0x30,lVar12);
  lVar15 = 0;
  lVar13 = lVar15;
  if (0 < lVar12) {
    do {
      lVar13 = lVar13 + 0x20;
      uVar10 = (*(uint64_t **)(param_2 + 8))[1];
      puVar2 = (uint64_t *)(*(longlong *)(param_1 + 0x30) + -0x20 + lVar13);
      *puVar2 = **(uint64_t **)(param_2 + 8);
      puVar2[1] = uVar10;
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x10;
      puVar6 = *(int32_t **)(param_2 + 8);
      uVar7 = puVar6[1];
      uVar8 = puVar6[2];
      uVar9 = puVar6[3];
      puVar3 = (int32_t *)(*(longlong *)(param_1 + 0x30) + -0x10 + lVar13);
      *puVar3 = *puVar6;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (iVar4 != 0) {
    lVar13 = (longlong)**(int **)(param_2 + 8);
    *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
    FUN_18025aa20((longlong *)(param_1 + 0x50),lVar13);
    if (0 < lVar13) {
      do {
        plVar14 = (longlong *)(*(longlong *)(param_1 + 0x50) + lVar15);
        uVar5 = **(uint **)(param_2 + 8);
        puVar1 = *(uint **)(param_2 + 8) + 1;
        *(uint **)(param_2 + 8) = puVar1;
        if (uVar5 != 0) {
          (**(code **)(*plVar14 + 0x18))(plVar14,puVar1,uVar5);
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar5;
        }
        lVar15 = lVar15 + 0x20;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  return;
}






// 函数: void FUN_18025a5c0(longlong param_1,longlong *param_2)
void FUN_18025a5c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint64_t *puVar10;
  int *piVar11;
  int32_t *puVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  
  puVar12 = (int32_t *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar12) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar12 + (4 - *param_2));
    puVar12 = (int32_t *)param_2[1];
  }
  *puVar12 = 1;
  param_2[1] = param_2[1] + 4;
  FUN_180639ec0(param_2,param_1 + 8);
  puVar10 = (uint64_t *)param_2[1];
  uVar3 = *(uint64_t *)(param_1 + 0x28);
  if ((ulonglong)((*param_2 - (longlong)puVar10) + param_2[2]) < 9) {
    FUN_180639bf0(param_2,(longlong)puVar10 + (8 - *param_2));
    puVar10 = (uint64_t *)param_2[1];
  }
  *puVar10 = uVar3;
  piVar11 = (int *)(param_2[1] + 8);
  param_2[1] = (longlong)piVar11;
  lVar14 = *(longlong *)(param_1 + 0x38);
  lVar16 = *(longlong *)(param_1 + 0x30);
  if ((ulonglong)((*param_2 - (longlong)piVar11) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)piVar11 + (4 - *param_2));
    piVar11 = (int *)param_2[1];
  }
  iVar13 = (int)(lVar14 - lVar16 >> 5);
  *piVar11 = iVar13;
  lVar17 = (longlong)iVar13;
  piVar11 = (int *)(param_2[1] + 4);
  lVar16 = 0;
  param_2[1] = (longlong)piVar11;
  lVar14 = lVar16;
  if (0 < lVar17) {
    do {
      lVar4 = *(longlong *)(param_1 + 0x30);
      if ((ulonglong)((*param_2 - (longlong)piVar11) + param_2[2]) < 0x11) {
        FUN_180639bf0(param_2,(longlong)piVar11 + (0x10 - *param_2));
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
      lVar4 = *(longlong *)(param_1 + 0x30);
      if ((ulonglong)((*param_2 - (longlong)puVar12) + param_2[2]) < 0x11) {
        FUN_180639bf0(param_2,(longlong)puVar12 + (0x10 - *param_2));
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
      param_2[1] = (longlong)piVar11;
      lVar17 = lVar17 + -1;
      lVar14 = lVar14 + 0x20;
    } while (lVar17 != 0);
  }
  uVar15 = *(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50) >> 5;
  if ((ulonglong)((*param_2 - (longlong)piVar11) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)piVar11 + (4 - *param_2));
    piVar11 = (int *)param_2[1];
  }
  iVar13 = (int)uVar15;
  *piVar11 = iVar13;
  param_2[1] = param_2[1] + 4;
  if (0 < iVar13) {
    uVar15 = uVar15 & 0xffffffff;
    do {
      FUN_180639ec0(param_2,*(longlong *)(param_1 + 0x50) + lVar16);
      lVar16 = lVar16 + 0x20;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  return;
}






// 函数: void FUN_18025a5cf(int32_t param_1,longlong *param_2)
void FUN_18025a5cf(int32_t param_1,longlong *param_2)

{
  int *piVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  longlong in_RCX;
  uint64_t *puVar11;
  int *piVar12;
  int32_t *puVar13;
  longlong *unaff_RBX;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  int32_t uVar19;
  
  puVar13 = (int32_t *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar13) + unaff_RBX[2]) < 5) {
    param_1 = FUN_180639bf0(param_1,(longlong)puVar13 + (4 - *param_2));
    puVar13 = (int32_t *)unaff_RBX[1];
  }
  *puVar13 = 1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  uVar19 = FUN_180639ec0(param_1,in_RCX + 8);
  puVar11 = (uint64_t *)unaff_RBX[1];
  uVar3 = *(uint64_t *)(in_RCX + 0x28);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar11) + unaff_RBX[2]) < 9) {
    uVar19 = FUN_180639bf0(uVar19,(longlong)puVar11 + (8 - *unaff_RBX));
    puVar11 = (uint64_t *)unaff_RBX[1];
  }
  *puVar11 = uVar3;
  piVar12 = (int *)(unaff_RBX[1] + 8);
  unaff_RBX[1] = (longlong)piVar12;
  lVar15 = *(longlong *)(in_RCX + 0x38);
  lVar17 = *(longlong *)(in_RCX + 0x30);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar12) + unaff_RBX[2]) < 5) {
    uVar19 = FUN_180639bf0(uVar19,(longlong)piVar12 + (4 - *unaff_RBX));
    piVar12 = (int *)unaff_RBX[1];
  }
  iVar14 = (int)(lVar15 - lVar17 >> 5);
  *piVar12 = iVar14;
  lVar18 = (longlong)iVar14;
  piVar12 = (int *)(unaff_RBX[1] + 4);
  lVar17 = 0;
  unaff_RBX[1] = (longlong)piVar12;
  lVar15 = lVar17;
  if (0 < lVar18) {
    do {
      lVar4 = *(longlong *)(in_RCX + 0x30);
      if ((ulonglong)((*unaff_RBX - (longlong)piVar12) + unaff_RBX[2]) < 0x11) {
        FUN_180639bf0(uVar19,(longlong)piVar12 + (0x10 - *unaff_RBX));
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
      lVar4 = *(longlong *)(in_RCX + 0x30);
      if ((ulonglong)((*unaff_RBX - (longlong)puVar13) + unaff_RBX[2]) < 0x11) {
        FUN_180639bf0(iVar14,(longlong)puVar13 + (0x10 - *unaff_RBX));
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
      unaff_RBX[1] = (longlong)piVar12;
      lVar18 = lVar18 + -1;
      lVar15 = lVar15 + 0x20;
    } while (lVar18 != 0);
  }
  uVar16 = *(longlong *)(in_RCX + 0x58) - *(longlong *)(in_RCX + 0x50) >> 5;
  if ((ulonglong)((*unaff_RBX - (longlong)piVar12) + unaff_RBX[2]) < 5) {
    uVar19 = FUN_180639bf0(uVar19,(longlong)piVar12 + (4 - *unaff_RBX));
    piVar12 = (int *)unaff_RBX[1];
  }
  iVar14 = (int)uVar16;
  *piVar12 = iVar14;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  if (0 < iVar14) {
    uVar16 = uVar16 & 0xffffffff;
    do {
      uVar19 = FUN_180639ec0(uVar19,*(longlong *)(in_RCX + 0x50) + lVar17);
      lVar17 = lVar17 + 0x20;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  return;
}






// 函数: void FUN_18025a6a3(int *param_1)
void FUN_18025a6a3(int *param_1)

{
  int *piVar1;
  int32_t *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t *puVar10;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  int iVar11;
  ulonglong uVar12;
  ulonglong unaff_RDI;
  longlong unaff_R15;
  int32_t in_XMM0_Da;
  
  uVar12 = unaff_RDI & 0xffffffff;
  do {
    lVar3 = *(longlong *)(unaff_RBP + 0x30);
    if ((ulonglong)((*unaff_RBX - (longlong)param_1) + unaff_RBX[2]) < 0x11) {
      FUN_180639bf0(in_XMM0_Da,(longlong)param_1 + (0x10 - *unaff_RBX));
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
    lVar3 = *(longlong *)(unaff_RBP + 0x30);
    if ((ulonglong)((*unaff_RBX - (longlong)puVar10) + unaff_RBX[2]) < 0x11) {
      FUN_180639bf0(iVar11,(longlong)puVar10 + (0x10 - *unaff_RBX));
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
    unaff_RBX[1] = (longlong)param_1;
    unaff_R15 = unaff_R15 + -1;
  } while (unaff_R15 != 0);
  uVar12 = *(longlong *)(unaff_RBP + 0x58) - *(longlong *)(unaff_RBP + 0x50) >> 5;
  if ((ulonglong)((*unaff_RBX - (longlong)param_1) + unaff_RBX[2]) < 5) {
    in_XMM0_Da = FUN_180639bf0(in_XMM0_Da,(longlong)param_1 + (4 - *unaff_RBX));
    param_1 = (int *)unaff_RBX[1];
  }
  iVar11 = (int)uVar12;
  *param_1 = iVar11;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  if (0 < iVar11) {
    uVar12 = uVar12 & 0xffffffff;
    do {
      in_XMM0_Da = FUN_180639ec0(in_XMM0_Da,*(longlong *)(unaff_RBP + 0x50) + unaff_RDI);
      unaff_RDI = unaff_RDI + 0x20;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}






// 函数: void FUN_18025a73d(int *param_1)
void FUN_18025a73d(int *param_1)

{
  longlong *unaff_RBX;
  longlong unaff_RBP;
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = *(longlong *)(unaff_RBP + 0x58) - *(longlong *)(unaff_RBP + 0x50) >> 5;
  if ((ulonglong)((*unaff_RBX - (longlong)param_1) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    param_1 = (int *)unaff_RBX[1];
  }
  iVar1 = (int)uVar2;
  *param_1 = iVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  if (0 < iVar1) {
    uVar2 = uVar2 & 0xffffffff;
    do {
      FUN_180639ec0();
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}






// 函数: void FUN_18025a761(void)
void FUN_18025a761(void)

{
  longlong unaff_RBX;
  uint unaff_ESI;
  ulonglong uVar1;
  
  FUN_180639bf0();
  **(uint **)(unaff_RBX + 8) = unaff_ESI;
  *(longlong *)(unaff_RBX + 8) = *(longlong *)(unaff_RBX + 8) + 4;
  if (0 < (int)unaff_ESI) {
    uVar1 = (ulonglong)unaff_ESI;
    do {
      FUN_180639ec0();
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025a7b0(longlong *param_1,longlong param_2,uint *param_3)
void FUN_18025a7b0(longlong *param_1,longlong param_2,uint *param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  int8_t auStack_498 [32];
  uint64_t uStack_478;
  void *puStack_468;
  byte *pbStack_460;
  int iStack_458;
  byte abStack_450 [1032];
  ulonglong uStack_48;
  
  uStack_478 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_498;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *param_3 = 0;
  uVar3 = **(uint **)(param_2 + 8);
  uVar7 = (ulonglong)uVar3;
  *(uint **)(param_2 + 8) = *(uint **)(param_2 + 8) + 1;
  if (uVar3 != 0) {
    do {
      puStack_468 = &unknown_var_336_ptr;
      pbStack_460 = abStack_450;
      iStack_458 = 0;
      abStack_450[0] = 0;
      uVar3 = **(uint **)(param_2 + 8);
      puVar1 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar1;
      lVar8 = 0;
      plVar9 = param_1;
      if (uVar3 != 0) {
        FUN_180045f60(&puStack_468,puVar1,uVar3);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar3;
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
              pbVar2 = pbVar5 + (*plVar9 - (longlong)pbStack_460);
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
      puStack_468 = &unknown_var_720_ptr;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_498);
}






// 函数: void FUN_18025a940(uint64_t *param_1,uint param_2,longlong *param_3)
void FUN_18025a940(uint64_t *param_1,uint param_2,longlong *param_3)

{
  int32_t *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  puVar1 = (int32_t *)param_3[1];
  if ((ulonglong)((*param_3 - (longlong)puVar1) + param_3[2]) < 5) {
    FUN_180639bf0(param_3,(longlong)puVar1 + (4 - *param_3));
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
  if ((ulonglong)((lVar3 - lVar2) + param_3[2]) < 5) {
    FUN_180639bf0(param_3,(lVar2 - lVar3) + 4);
    lVar2 = param_3[1];
  }
  lVar3 = 0x1f;
  param_3[1] = lVar2 + 4;
  do {
    if ((*(uint *)(param_1 + 1) & param_2) != 0) {
      FUN_180639de0(param_3,*param_1);
      iVar4 = iVar4 + 1;
    }
    param_1 = param_1 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(int *)(lVar5 + *param_3) = iVar4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




