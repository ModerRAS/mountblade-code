#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part010.c - 5 个函数

// 函数: void FUN_18025f9b0(int64_t param_1,int64_t param_2)
void FUN_18025f9b0(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int *piVar6;
  int32_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t lVar11;
  uint *puVar12;
  int8_t *puVar13;
  int64_t lVar14;
  int iVar15;
  uint64_t uVar16;
  int iStackX_10;
  
  *(int32_t *)(param_1 + 8) = **(int32_t **)(param_2 + 8);
  lVar14 = *(int64_t *)(param_2 + 8);
  puVar12 = (uint *)(lVar14 + 4);
  *(uint **)(param_2 + 8) = puVar12;
  uVar2 = *puVar12;
  puVar13 = (int8_t *)(lVar14 + 8);
  *(int8_t **)(param_2 + 8) = puVar13;
  if (uVar2 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x10) + 0x18))((int64_t *)(param_1 + 0x10),puVar13,uVar2);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
    puVar13 = *(int8_t **)(param_2 + 8);
  }
  *(int8_t *)(param_1 + 0xd4) = *puVar13;
  lVar14 = *(int64_t *)(param_2 + 8);
  *(int32_t **)(param_2 + 8) = (int32_t *)(lVar14 + 1);
  uVar3 = *(int32_t *)(lVar14 + 5);
  uVar4 = *(int32_t *)(lVar14 + 9);
  uVar5 = *(int32_t *)(lVar14 + 0xd);
  *(int32_t *)(param_1 + 0x30) = *(int32_t *)(lVar14 + 1);
  *(int32_t *)(param_1 + 0x34) = uVar3;
  *(int32_t *)(param_1 + 0x38) = uVar4;
  *(int32_t *)(param_1 + 0x3c) = uVar5;
  lVar14 = *(int64_t *)(param_2 + 8);
  piVar6 = (int *)(lVar14 + 0x10);
  *(int **)(param_2 + 8) = piVar6;
  if (*(int *)(param_1 + 8) != 0) {
    iVar15 = *piVar6;
    *(int64_t *)(param_2 + 8) = lVar14 + 0x14;
    FUN_180260aa0(param_1 + 0x60,(int64_t)iVar15);
    lVar8 = *(int64_t *)(param_1 + 0x68) - *(int64_t *)(param_1 + 0x60);
    iVar15 = 0;
    lVar14 = lVar8 >> 0x3f;
    if (lVar8 / 0x48 + lVar14 != lVar14) {
      uVar16 = 0;
      do {
        FUN_18025e9f0(*(int64_t *)(param_1 + 0x60) + uVar16 * 0x48,param_2);
        iVar15 = iVar15 + 1;
        uVar16 = (uint64_t)iVar15;
      } while (uVar16 < (uint64_t)
                        ((*(int64_t *)(param_1 + 0x68) - *(int64_t *)(param_1 + 0x60)) / 0x48));
    }
    iVar15 = **(int **)(param_2 + 8);
    *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
    FUN_180260b90(param_1 + 0x40,(int64_t)iVar15);
    lVar14 = *(int64_t *)(param_1 + 0x40);
    puVar12 = *(uint **)(param_2 + 8);
    lVar9 = *(int64_t *)(param_1 + 0x48) - lVar14;
    iVar15 = 0;
    lVar8 = lVar9 >> 0x3f;
    if (lVar9 / 0x38 + lVar8 != lVar8) {
      lVar8 = 0;
      do {
        *(uint **)(param_2 + 8) = puVar12 + 1;
        *(uint *)(lVar8 + lVar14) = puVar12[1];
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
        *(int32_t *)(lVar8 + 4 + lVar14) = **(int32_t **)(param_2 + 8);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
        *(int32_t *)(lVar8 + 8 + lVar14) = **(int32_t **)(param_2 + 8);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
        *(int32_t *)(lVar8 + 0xc + lVar14) = **(int32_t **)(param_2 + 8);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
        uVar3 = **(int32_t **)(param_2 + 8);
        *(int32_t *)(lVar8 + 0x10 + lVar14) = uVar3;
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
        FUN_180260830(uVar3,param_2,lVar14 + 0x14 + lVar8);
        plVar10 = (int64_t *)(lVar14 + 0x18 + lVar8);
        uVar2 = **(uint **)(param_2 + 8);
        puVar12 = *(uint **)(param_2 + 8) + 1;
        *(uint **)(param_2 + 8) = puVar12;
        if (uVar2 != 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10,puVar12,uVar2);
          *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
          puVar12 = *(uint **)(param_2 + 8);
        }
        lVar14 = *(int64_t *)(param_1 + 0x40);
        iVar15 = iVar15 + 1;
        lVar8 = lVar8 + 0x38;
      } while ((uint64_t)(int64_t)iVar15 <
               (uint64_t)((*(int64_t *)(param_1 + 0x48) - lVar14) / 0x38));
    }
    uVar2 = *puVar12;
    plVar10 = (int64_t *)(param_1 + 0x80);
    *(uint **)(param_2 + 8) = puVar12 + 1;
    FUN_180260cf0(plVar10,(int64_t)(int)uVar2);
    lVar14 = *plVar10;
    lVar8 = *(int64_t *)(param_2 + 8);
    lVar11 = *(int64_t *)(param_1 + 0x88) - lVar14;
    iStackX_10 = 0;
    lVar9 = lVar11 >> 0x3f;
    if (lVar11 / 0x30 + lVar9 != lVar9) {
      lVar9 = 0;
      do {
        *(int **)(param_2 + 8) = (int *)(lVar8 + 4);
        plVar1 = (int64_t *)(lVar9 + lVar14);
        iVar15 = *(int *)(lVar8 + 4);
        *(int64_t *)(param_2 + 8) = lVar8 + 8;
        FUN_18025aa20(plVar1,(int64_t)iVar15);
        lVar14 = *plVar1;
        iVar15 = 0;
        if (plVar1[1] - lVar14 >> 5 != 0) {
          lVar8 = 0;
          do {
            uVar2 = **(uint **)(param_2 + 8);
            puVar12 = *(uint **)(param_2 + 8) + 1;
            *(uint **)(param_2 + 8) = puVar12;
            if (uVar2 != 0) {
              (**(code **)(*(int64_t *)(lVar8 + lVar14) + 0x18))
                        ((int64_t *)(lVar8 + lVar14),puVar12,uVar2);
              *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
            }
            lVar14 = *plVar1;
            iVar15 = iVar15 + 1;
            lVar8 = lVar8 + 0x20;
          } while ((uint64_t)(int64_t)iVar15 < (uint64_t)(plVar1[1] - lVar14 >> 5));
        }
        iStackX_10 = iStackX_10 + 1;
        lVar9 = lVar9 + 0x30;
        *(int32_t *)(plVar1 + 4) = **(int32_t **)(param_2 + 8);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
        *(int32_t *)((int64_t)plVar1 + 0x24) = **(int32_t **)(param_2 + 8);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
        *(int32_t *)(plVar1 + 5) = **(int32_t **)(param_2 + 8);
        lVar8 = *(int64_t *)(param_2 + 8) + 4;
        *(int64_t *)(param_2 + 8) = lVar8;
        lVar14 = *plVar10;
      } while ((uint64_t)(int64_t)iStackX_10 <
               (uint64_t)((*(int64_t *)(param_1 + 0x88) - lVar14) / 0x30));
    }
    *(int32_t **)(param_2 + 8) = (int32_t *)(lVar8 + 4);
    *(int32_t *)(param_1 + 0xa0) = *(int32_t *)(lVar8 + 4);
    puVar7 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar7;
    *(int32_t *)(param_1 + 0xa4) = *puVar7;
    puVar7 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar7;
    *(int32_t *)(param_1 + 0xa8) = *puVar7;
    puVar7 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar7;
    *(int32_t *)(param_1 + 0xac) = *puVar7;
    puVar7 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar7;
    *(int32_t *)(param_1 + 0xb0) = *puVar7;
    puVar7 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar7;
    *(int32_t *)(param_1 + 0xb4) = *puVar7;
    puVar7 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar7;
    *(int32_t *)(param_1 + 0xb8) = *puVar7;
    puVar7 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar7;
    *(int32_t *)(param_1 + 0xbc) = *puVar7;
    puVar7 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar7;
    *(int32_t *)(param_1 + 0xc0) = *puVar7;
    puVar7 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar7;
    *(int32_t *)(param_1 + 0xc4) = *puVar7;
    puVar7 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar7;
    *(int32_t *)(param_1 + 200) = *puVar7;
    puVar7 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar7;
    *(int32_t *)(param_1 + 0xcc) = *puVar7;
    puVar7 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar7;
    *(int32_t *)(param_1 + 0xd0) = *puVar7;
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  }
  return;
}






// 函数: void FUN_18025fa38(void)
void FUN_18025fa38(void)

{
  int64_t *plVar1;
  uint uVar2;
  int64_t in_RAX;
  int32_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t unaff_RBX;
  int iVar9;
  uint64_t uVar10;
  uint *puVar11;
  int64_t unaff_R13;
  int64_t lVar12;
  int64_t in_stack_00000060;
  int iStack0000000000000068;
  
  *(int64_t *)(unaff_RBX + 8) = in_RAX + 4;
  FUN_180260aa0();
  lVar4 = *(int64_t *)(unaff_R13 + 0x68) - *(int64_t *)(unaff_R13 + 0x60);
  iVar9 = 0;
  lVar8 = lVar4 >> 0x3f;
  if (lVar4 / 0x48 + lVar8 != lVar8) {
    uVar10 = 0;
    do {
      FUN_18025e9f0(*(int64_t *)(unaff_R13 + 0x60) + uVar10 * 0x48);
      iVar9 = iVar9 + 1;
      uVar10 = (uint64_t)iVar9;
    } while (uVar10 < (uint64_t)
                      ((*(int64_t *)(unaff_R13 + 0x68) - *(int64_t *)(unaff_R13 + 0x60)) / 0x48));
  }
  iVar9 = **(int **)(unaff_RBX + 8);
  *(int **)(unaff_RBX + 8) = *(int **)(unaff_RBX + 8) + 1;
  FUN_180260b90(unaff_R13 + 0x40,(int64_t)iVar9);
  lVar8 = *(int64_t *)(unaff_R13 + 0x40);
  puVar11 = *(uint **)(unaff_RBX + 8);
  lVar5 = *(int64_t *)(unaff_R13 + 0x48) - lVar8;
  iVar9 = 0;
  lVar4 = lVar5 >> 0x3f;
  if (lVar5 / 0x38 + lVar4 != lVar4) {
    lVar4 = 0;
    do {
      *(uint **)(unaff_RBX + 8) = puVar11 + 1;
      *(uint *)(lVar4 + lVar8) = puVar11[1];
      *(int64_t *)(unaff_RBX + 8) = *(int64_t *)(unaff_RBX + 8) + 4;
      *(int32_t *)(lVar4 + 4 + lVar8) = **(int32_t **)(unaff_RBX + 8);
      *(int64_t *)(unaff_RBX + 8) = *(int64_t *)(unaff_RBX + 8) + 4;
      *(int32_t *)(lVar4 + 8 + lVar8) = **(int32_t **)(unaff_RBX + 8);
      *(int64_t *)(unaff_RBX + 8) = *(int64_t *)(unaff_RBX + 8) + 4;
      *(int32_t *)(lVar4 + 0xc + lVar8) = **(int32_t **)(unaff_RBX + 8);
      *(int64_t *)(unaff_RBX + 8) = *(int64_t *)(unaff_RBX + 8) + 4;
      *(int32_t *)(lVar4 + 0x10 + lVar8) = **(int32_t **)(unaff_RBX + 8);
      *(int64_t *)(unaff_RBX + 8) = *(int64_t *)(unaff_RBX + 8) + 4;
      FUN_180260830();
      plVar6 = (int64_t *)(lVar8 + 0x18 + lVar4);
      uVar2 = **(uint **)(unaff_RBX + 8);
      puVar11 = *(uint **)(unaff_RBX + 8) + 1;
      *(uint **)(unaff_RBX + 8) = puVar11;
      if (uVar2 != 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6,puVar11,uVar2);
        *(int64_t *)(unaff_RBX + 8) = *(int64_t *)(unaff_RBX + 8) + (uint64_t)uVar2;
        puVar11 = *(uint **)(unaff_RBX + 8);
      }
      lVar8 = *(int64_t *)(unaff_R13 + 0x40);
      iVar9 = iVar9 + 1;
      lVar4 = lVar4 + 0x38;
    } while ((uint64_t)(int64_t)iVar9 <
             (uint64_t)((*(int64_t *)(unaff_R13 + 0x48) - lVar8) / 0x38));
  }
  uVar2 = *puVar11;
  plVar6 = (int64_t *)(unaff_R13 + 0x80);
  *(uint **)(unaff_RBX + 8) = puVar11 + 1;
  FUN_180260cf0(plVar6,(int64_t)(int)uVar2);
  lVar8 = *plVar6;
  lVar4 = *(int64_t *)(unaff_RBX + 8);
  lVar7 = *(int64_t *)(unaff_R13 + 0x88) - lVar8;
  iStack0000000000000068 = 0;
  lVar5 = lVar7 >> 0x3f;
  lVar12 = unaff_R13;
  if (lVar7 / 0x30 + lVar5 != lVar5) {
    lVar5 = 0;
    do {
      *(int **)(unaff_RBX + 8) = (int *)(lVar4 + 4);
      plVar1 = (int64_t *)(lVar5 + lVar8);
      iVar9 = *(int *)(lVar4 + 4);
      *(int64_t *)(unaff_RBX + 8) = lVar4 + 8;
      FUN_18025aa20(plVar1,(int64_t)iVar9);
      lVar8 = *plVar1;
      iVar9 = 0;
      if (plVar1[1] - lVar8 >> 5 != 0) {
        lVar4 = 0;
        do {
          uVar2 = **(uint **)(unaff_RBX + 8);
          puVar11 = *(uint **)(unaff_RBX + 8) + 1;
          *(uint **)(unaff_RBX + 8) = puVar11;
          if (uVar2 != 0) {
            (**(code **)(*(int64_t *)(lVar4 + lVar8) + 0x18))
                      ((int64_t *)(lVar4 + lVar8),puVar11,uVar2);
            *(int64_t *)(unaff_RBX + 8) = *(int64_t *)(unaff_RBX + 8) + (uint64_t)uVar2;
          }
          lVar8 = *plVar1;
          iVar9 = iVar9 + 1;
          lVar4 = lVar4 + 0x20;
        } while ((uint64_t)(int64_t)iVar9 < (uint64_t)(plVar1[1] - lVar8 >> 5));
      }
      iStack0000000000000068 = iStack0000000000000068 + 1;
      lVar5 = lVar5 + 0x30;
      *(int32_t *)(plVar1 + 4) = **(int32_t **)(unaff_RBX + 8);
      *(int64_t *)(unaff_RBX + 8) = *(int64_t *)(unaff_RBX + 8) + 4;
      *(int32_t *)((int64_t)plVar1 + 0x24) = **(int32_t **)(unaff_RBX + 8);
      *(int64_t *)(unaff_RBX + 8) = *(int64_t *)(unaff_RBX + 8) + 4;
      *(int32_t *)(plVar1 + 5) = **(int32_t **)(unaff_RBX + 8);
      lVar4 = *(int64_t *)(unaff_RBX + 8) + 4;
      *(int64_t *)(unaff_RBX + 8) = lVar4;
      lVar8 = *plVar6;
      lVar12 = in_stack_00000060;
    } while ((uint64_t)(int64_t)iStack0000000000000068 <
             (uint64_t)((*(int64_t *)(unaff_R13 + 0x88) - lVar8) / 0x30));
  }
  *(int32_t **)(unaff_RBX + 8) = (int32_t *)(lVar4 + 4);
  *(int32_t *)(lVar12 + 0xa0) = *(int32_t *)(lVar4 + 4);
  puVar3 = (int32_t *)(*(int64_t *)(unaff_RBX + 8) + 4);
  *(int32_t **)(unaff_RBX + 8) = puVar3;
  *(int32_t *)(lVar12 + 0xa4) = *puVar3;
  puVar3 = (int32_t *)(*(int64_t *)(unaff_RBX + 8) + 4);
  *(int32_t **)(unaff_RBX + 8) = puVar3;
  *(int32_t *)(lVar12 + 0xa8) = *puVar3;
  puVar3 = (int32_t *)(*(int64_t *)(unaff_RBX + 8) + 4);
  *(int32_t **)(unaff_RBX + 8) = puVar3;
  *(int32_t *)(lVar12 + 0xac) = *puVar3;
  puVar3 = (int32_t *)(*(int64_t *)(unaff_RBX + 8) + 4);
  *(int32_t **)(unaff_RBX + 8) = puVar3;
  *(int32_t *)(lVar12 + 0xb0) = *puVar3;
  puVar3 = (int32_t *)(*(int64_t *)(unaff_RBX + 8) + 4);
  *(int32_t **)(unaff_RBX + 8) = puVar3;
  *(int32_t *)(lVar12 + 0xb4) = *puVar3;
  puVar3 = (int32_t *)(*(int64_t *)(unaff_RBX + 8) + 4);
  *(int32_t **)(unaff_RBX + 8) = puVar3;
  *(int32_t *)(lVar12 + 0xb8) = *puVar3;
  puVar3 = (int32_t *)(*(int64_t *)(unaff_RBX + 8) + 4);
  *(int32_t **)(unaff_RBX + 8) = puVar3;
  *(int32_t *)(lVar12 + 0xbc) = *puVar3;
  puVar3 = (int32_t *)(*(int64_t *)(unaff_RBX + 8) + 4);
  *(int32_t **)(unaff_RBX + 8) = puVar3;
  *(int32_t *)(lVar12 + 0xc0) = *puVar3;
  puVar3 = (int32_t *)(*(int64_t *)(unaff_RBX + 8) + 4);
  *(int32_t **)(unaff_RBX + 8) = puVar3;
  *(int32_t *)(lVar12 + 0xc4) = *puVar3;
  puVar3 = (int32_t *)(*(int64_t *)(unaff_RBX + 8) + 4);
  *(int32_t **)(unaff_RBX + 8) = puVar3;
  *(int32_t *)(lVar12 + 200) = *puVar3;
  puVar3 = (int32_t *)(*(int64_t *)(unaff_RBX + 8) + 4);
  *(int32_t **)(unaff_RBX + 8) = puVar3;
  *(int32_t *)(lVar12 + 0xcc) = *puVar3;
  puVar3 = (int32_t *)(*(int64_t *)(unaff_RBX + 8) + 4);
  *(int32_t **)(unaff_RBX + 8) = puVar3;
  *(int32_t *)(lVar12 + 0xd0) = *puVar3;
  *(int64_t *)(unaff_RBX + 8) = *(int64_t *)(unaff_RBX + 8) + 4;
  return;
}






// 函数: void FUN_18025fe5d(void)
void FUN_18025fe5d(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025fe70(int64_t *param_1,int64_t param_2,uint64_t param_3)
void FUN_18025fe70(int64_t *param_1,int64_t param_2,uint64_t param_3)

{
  int64_t *plVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  uint64_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int iVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  void *puVar14;
  int64_t lVar15;
  uint64_t *puVar16;
  uint uVar17;
  int64_t *plVar18;
  uint64_t uVar19;
  int64_t lVar20;
  uint64_t *puVar21;
  uint64_t *puVar22;
  int64_t lVar23;
  int64_t lVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  int64_t lStackX_8;
  
  puVar14 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar14 = *(void **)(param_2 + 8);
  }
  (**(code **)(param_1[0xc] + 0x10))(param_1 + 0xc,puVar14);
  lVar12 = param_1[1] - *param_1;
  uVar25 = (uint64_t)(int)((*(int64_t *)(param_2 + 0x48) - *(int64_t *)(param_2 + 0x40)) / 0x48);
  lVar12 = lVar12 / 6 + (lVar12 >> 0x3f);
  uVar13 = (lVar12 >> 3) - (lVar12 >> 0x3f);
  if (uVar13 < uVar25) {
    FUN_18014e9d0(param_1,uVar25 - uVar13);
  }
  else {
    param_1[1] = uVar25 * 0x30 + *param_1;
  }
  uVar11 = 0;
  uVar13 = uVar11;
  uVar27 = uVar11;
  if (0 < (int64_t)uVar25) {
    do {
      lVar12 = *(int64_t *)(param_2 + 0x40);
      lVar20 = *param_1;
      puVar10 = (uint64_t *)(uVar27 + 4 + lVar12);
      uVar4 = puVar10[1];
      puVar22 = (uint64_t *)(uVar13 + 4 + lVar20);
      *puVar22 = *puVar10;
      puVar22[1] = uVar4;
      puVar2 = (int32_t *)(uVar27 + 0x14 + lVar12);
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar3 = (int32_t *)(uVar13 + 0x14 + lVar20);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      *(int32_t *)(uVar13 + lVar20) = *(int32_t *)(uVar27 + lVar12);
      *(int32_t *)(uVar13 + 0x24 + lVar20) = *(int32_t *)(uVar27 + 0x24 + lVar12);
      lVar15 = system_system_data_config;
      uVar26 = param_3;
      if ((param_3 == 0) &&
         (iVar8 = FUN_180191c00(system_system_data_config,lVar12 + 0x28 + uVar27), uVar26 = uVar11, iVar8 != -1
         )) {
        uVar26 = (int64_t)iVar8 * 0x68 + *(int64_t *)(lVar15 + 0x38);
      }
      *(uint64_t *)(uVar13 + 0x28 + lVar20) = uVar26;
      uVar25 = uVar25 - 1;
      uVar13 = uVar13 + 0x30;
      uVar27 = uVar27 + 0x48;
    } while (uVar25 != 0);
  }
  uVar25 = (uint64_t)(int)((*(int64_t *)(param_2 + 0x68) - *(int64_t *)(param_2 + 0x60)) / 0x38);
  uVar13 = param_1[5] - param_1[4] >> 5;
  if (uVar13 < uVar25) {
    FUN_18014eb80(param_1 + 4,uVar25 - uVar13);
  }
  else {
    param_1[5] = uVar25 * 0x20 + param_1[4];
  }
  if (0 < (int64_t)uVar25) {
    lVar12 = 0;
    lVar20 = 0;
    do {
      lVar15 = *(int64_t *)(param_2 + 0x60);
      lVar23 = param_1[4];
      *(int32_t *)(lVar12 + 0x14 + lVar23) = *(int32_t *)(lVar20 + 0x14 + lVar15);
      puVar2 = (int32_t *)(lVar20 + 4 + lVar15);
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar3 = (int32_t *)(lVar12 + 4 + lVar23);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      *(int32_t *)(lVar12 + lVar23) = *(int32_t *)(lVar20 + lVar15);
      lVar24 = system_system_data_config;
      uVar13 = param_3;
      if (param_3 == 0) {
        iVar8 = FUN_180191c00(system_system_data_config,lVar15 + 0x18 + lVar20);
        if (iVar8 == -1) {
          uVar13 = 0;
        }
        else {
          uVar13 = (int64_t)iVar8 * 0x68 + *(int64_t *)(lVar24 + 0x38);
        }
      }
      *(uint64_t *)(lVar12 + 0x18 + lVar23) = uVar13;
      lVar20 = lVar20 + 0x38;
      lVar12 = lVar12 + 0x20;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
  plVar1 = param_1 + 8;
  lVar12 = param_1[9];
  lVar20 = *plVar1;
  uVar25 = (uint64_t)(int)((*(int64_t *)(param_2 + 0x28) - *(int64_t *)(param_2 + 0x20)) / 0x60);
  uVar13 = (lVar12 - lVar20) / 0x88;
  if (uVar13 < uVar25) {
    FUN_180260f40(plVar1,uVar25 - uVar13);
  }
  else {
    lVar15 = uVar25 * 0x88 + lVar20;
    if (lVar15 != lVar12) {
      do {
        FUN_18014c7d0(lVar15);
        lVar15 = lVar15 + 0x88;
      } while (lVar15 != lVar12);
      lVar20 = *plVar1;
    }
    param_1[9] = uVar25 * 0x88 + lVar20;
  }
  if (0 < (int64_t)uVar25) {
    lStackX_8 = 0;
    do {
      puVar16 = (uint64_t *)(lStackX_8 * 0x88 + *plVar1);
      plVar18 = (int64_t *)(lStackX_8 * 0x60 + *(int64_t *)(param_2 + 0x20));
      if (param_3 == 0) {
        puVar10 = (uint64_t *)puVar16[1];
        puVar22 = (uint64_t *)*puVar16;
        uVar13 = plVar18[1] - *plVar18 >> 5;
        uVar27 = (int64_t)puVar10 - (int64_t)puVar22 >> 3;
        if (uVar27 < uVar13) {
          uVar11 = uVar13 - uVar27;
          if ((uint64_t)((int64_t)(puVar16[2] - (int64_t)puVar10) >> 3) < uVar11) {
            uVar26 = uVar27 * 2;
            if (uVar27 == 0) {
              uVar26 = 1;
            }
            if (uVar26 < uVar13) {
              uVar26 = uVar13;
            }
            puVar21 = puVar10;
            puVar10 = (uint64_t *)0x0;
            if (uVar26 != 0) {
              puVar10 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,uVar26 * 8,(char)puVar16[3]);
              puVar22 = (uint64_t *)*puVar16;
              puVar21 = (uint64_t *)puVar16[1];
            }
            if (puVar22 != puVar21) {
                    // WARNING: Subroutine does not return
              memmove(puVar10,puVar22,(int64_t)puVar21 - (int64_t)puVar22);
            }
            if (uVar11 != 0) {
                    // WARNING: Subroutine does not return
              memset(puVar10,0,uVar11 * 8);
            }
            if (*puVar16 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *puVar16 = (uint64_t)puVar10;
            puVar16[2] = (uint64_t)(puVar10 + uVar26);
          }
          else if (uVar11 != 0) {
                    // WARNING: Subroutine does not return
            memset(puVar10,0,uVar11 * 8);
          }
        }
        else {
          puVar10 = puVar22 + uVar13;
        }
        uVar11 = 0;
        puVar16[1] = (uint64_t)puVar10;
        lVar12 = *plVar18;
        uVar13 = uVar11;
        uVar27 = uVar11;
        if (plVar18[1] - lVar12 >> 5 != 0) {
          do {
            lVar20 = system_system_data_config;
            iVar8 = FUN_180191c00(system_system_data_config,lVar12 + uVar11 * 0x20);
            if ((iVar8 == -1) ||
               (lVar12 = (int64_t)iVar8 * 0x68 + *(int64_t *)(lVar20 + 0x38), lVar12 == 0)) {
              lVar12 = *(int64_t *)(lVar20 + 0x28);
            }
            uVar17 = (int)uVar13 + 1;
            *(int64_t *)(uVar27 + *puVar16) = lVar12;
            lVar12 = *plVar18;
            uVar11 = (uint64_t)(int)uVar17;
            uVar13 = (uint64_t)uVar17;
            uVar27 = uVar27 + 8;
          } while (uVar11 < (uint64_t)(plVar18[1] - lVar12 >> 5));
          puVar10 = (uint64_t *)puVar16[1];
        }
        if (((int64_t)puVar10 - *puVar16 & 0xfffffffffffffff8) == 0) {
          uVar4 = *(uint64_t *)(system_system_data_config + 0x28);
          if (puVar10 < (uint64_t *)puVar16[2]) {
            puVar16[1] = (uint64_t)(puVar10 + 1);
            *puVar10 = uVar4;
          }
          else {
            puVar10 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,8,(char)puVar16[3]);
            uVar13 = *puVar16;
            if (uVar13 != puVar16[1]) {
                    // WARNING: Subroutine does not return
              memmove(puVar10,uVar13,puVar16[1] - uVar13);
            }
            *puVar10 = uVar4;
            if (*puVar16 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *puVar16 = (uint64_t)puVar10;
            puVar16[2] = (uint64_t)(puVar10 + 1);
            puVar16[1] = (uint64_t)(puVar10 + 1);
          }
        }
      }
      else {
        puVar9 = (uint64_t *)*puVar16;
        puVar16[1] = (uint64_t)puVar9;
        if (puVar9 < puVar16[2]) {
          puVar16[1] = (uint64_t)(puVar9 + 1);
          *puVar9 = param_3;
          puVar16[4] = param_3;
        }
        else {
          puVar9 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,8,(char)puVar16[3]);
          uVar13 = *puVar16;
          if (uVar13 != puVar16[1]) {
                    // WARNING: Subroutine does not return
            memmove(puVar9,uVar13,puVar16[1] - uVar13);
          }
          *puVar9 = param_3;
          if (*puVar16 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *puVar16 = (uint64_t)puVar9;
          puVar16[2] = (uint64_t)(puVar9 + 1);
          puVar16[1] = (uint64_t)(puVar9 + 1);
          puVar16[4] = param_3;
        }
      }
      lVar20 = 0;
      FUN_180150240(puVar16 + 5,plVar18 + 8);
      lVar12 = puVar16[0xe] - puVar16[0xd];
      uVar27 = (uint64_t)(int)((plVar18[5] - plVar18[4]) / 0x14);
      lVar12 = lVar12 / 6 + (lVar12 >> 0x3f);
      uVar13 = (lVar12 >> 2) - (lVar12 >> 0x3f);
      if (uVar13 < uVar27) {
        FUN_180260db0(puVar16 + 0xd,uVar27 - uVar13);
      }
      else {
        puVar16[0xe] = puVar16[0xd] + uVar27 * 0x18;
      }
      lVar12 = lVar20;
      if (0 < (int64_t)uVar27) {
        do {
          *(int32_t *)(lVar20 + puVar16[0xd]) = 3;
          *(int32_t *)(lVar20 + 4 + puVar16[0xd]) = *(int32_t *)(plVar18[4] + 4 + lVar12);
          *(int32_t *)(lVar20 + 8 + puVar16[0xd]) = *(int32_t *)(plVar18[4] + 8 + lVar12);
          *(int32_t *)(lVar20 + 0xc + puVar16[0xd]) = *(int32_t *)(plVar18[4] + 0xc + lVar12);
          if (param_3 == 0) {
            iVar8 = *(int *)(plVar18[4] + 0x10 + lVar12);
            if (iVar8 == -1) {
              iVar8 = 0;
            }
            *(int *)(lVar20 + 0x14 + puVar16[0xd]) = iVar8;
          }
          else {
            *(int32_t *)(lVar20 + 0x14 + puVar16[0xd]) = 0;
          }
          lVar20 = lVar20 + 0x18;
          uVar27 = uVar27 - 1;
          lVar12 = lVar12 + 0x14;
        } while (uVar27 != 0);
      }
      if (param_3 == 0) {
        FUN_18014c430(puVar16);
      }
      uVar13 = puVar16[9];
      puVar16[10] = uVar13;
      lVar12 = (int64_t)(puVar16[0xe] - puVar16[0xd]) / 6 +
               ((int64_t)(puVar16[0xe] - puVar16[0xd]) >> 0x3f);
      iVar8 = (int)(lVar12 >> 2) - (int)(lVar12 >> 0x3f);
      uVar27 = (uint64_t)(iVar8 * 3);
      if (iVar8 * 3 == 0) {
LAB_1802605fe:
        uVar11 = uVar13 + uVar27 * 4;
      }
      else {
        if (uVar27 <= (uint64_t)((int64_t)(puVar16[0xb] - uVar13) >> 2)) {
          if (uVar27 != 0) {
                    // WARNING: Subroutine does not return
            memset(uVar13,0,uVar27 * 4);
          }
          goto LAB_1802605fe;
        }
        uVar26 = 1;
        if (1 < uVar27) {
          uVar26 = uVar27;
        }
        if (uVar26 == 0) {
          uVar11 = 0;
          uVar19 = uVar13;
        }
        else {
          uVar11 = FUN_18062b420(system_memory_pool_ptr,uVar26 * 4,(char)puVar16[0xc]);
          uVar13 = puVar16[9];
          uVar19 = puVar16[10];
        }
        if (uVar13 != uVar19) {
                    // WARNING: Subroutine does not return
          memmove(uVar11,uVar13,uVar19 - uVar13);
        }
        if (uVar27 != 0) {
                    // WARNING: Subroutine does not return
          memset(uVar11,0,uVar27 * 4);
        }
        if (puVar16[9] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puVar16[9] = uVar11;
        puVar16[0xb] = uVar11 + uVar26 * 4;
      }
      puVar16[10] = uVar11;
      lVar12 = (int64_t)iVar8;
      if (0 < iVar8) {
        lVar20 = 8;
        lVar15 = 0xc;
        lVar23 = 0;
        lVar24 = 0;
        do {
          *(int32_t *)(lVar23 + puVar16[9]) = *(int32_t *)(lVar24 + 4 + puVar16[0xd]);
          *(int32_t *)(lVar20 + -4 + puVar16[9]) = *(int32_t *)(lVar15 + -4 + puVar16[0xd]);
          *(int32_t *)(lVar20 + puVar16[9]) = *(int32_t *)(lVar15 + puVar16[0xd]);
          lVar12 = lVar12 + -1;
          lVar20 = lVar20 + 0xc;
          lVar15 = lVar15 + 0x18;
          lVar23 = lVar23 + 0xc;
          lVar24 = lVar24 + 0x18;
        } while (lVar12 != 0);
      }
      lStackX_8 = lStackX_8 + 1;
    } while (lStackX_8 < (int64_t)uVar25);
  }
  return;
}






// 函数: void FUN_1802606b0(int64_t *param_1,int64_t *param_2)
void FUN_1802606b0(int64_t *param_1,int64_t *param_2)

{
  int32_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  uint uVar6;
  uint64_t uVar7;
  
  puVar5 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  uVar4 = 0;
  *puVar5 = 0;
  param_2[1] = param_2[1] + 4;
  puVar5 = (int32_t *)param_2[1];
  lVar2 = param_1[1];
  lVar3 = *param_1;
  if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = (int)(lVar2 - lVar3 >> 5);
  param_2[1] = param_2[1] + 4;
  puVar5 = (int32_t *)param_2[1];
  uVar7 = uVar4;
  if (param_1[1] - *param_1 >> 5 != 0) {
    do {
      System_QueueProcessor(param_2,uVar4 * 0x20 + *param_1);
      uVar6 = (int)uVar7 + 1;
      uVar4 = (uint64_t)(int)uVar6;
      uVar7 = (uint64_t)uVar6;
    } while (uVar4 < (uint64_t)(param_1[1] - *param_1 >> 5));
    puVar5 = (int32_t *)param_2[1];
  }
  lVar2 = param_1[4];
  if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = (int)lVar2;
  param_2[1] = param_2[1] + 4;
  puVar5 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)((int64_t)param_1 + 0x24);
  if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar5 = (int32_t *)param_2[1];
  lVar2 = param_1[5];
  if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar5 + (4 - *param_2));
    *(int *)param_2[1] = (int)lVar2;
  }
  else {
    *puVar5 = (int)lVar2;
  }
  param_2[1] = param_2[1] + 4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




