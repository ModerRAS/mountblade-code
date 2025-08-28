#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part002.c - 3 个函数

// 函数: void FUN_180258bc0(int64_t param_1,int64_t param_2)
void FUN_180258bc0(int64_t param_1,int64_t param_2)

{
  byte *pbVar1;
  uint uVar2;
  int32_t uVar3;
  int32_t *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t *puVar10;
  int64_t lVar11;
  byte *pbVar12;
  int *piVar13;
  int8_t *puVar14;
  int64_t lVar15;
  int iVar16;
  uint *puVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  int64_t *plVar20;
  int64_t lVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  int8_t auStack_498 [32];
  int64_t lStack_478;
  uint64_t uStack_470;
  void *puStack_468;
  byte *pbStack_460;
  int iStack_458;
  byte abStack_450 [1032];
  uint64_t uStack_48;
  
  uStack_470 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_498;
  piVar13 = *(int **)(param_2 + 8);
  iVar16 = *piVar13;
  *(int **)(param_2 + 8) = piVar13 + 1;
  iVar5 = piVar13[2];
  iVar6 = piVar13[3];
  iVar7 = piVar13[4];
  *(int *)(param_1 + 0x60) = piVar13[1];
  *(int *)(param_1 + 100) = iVar5;
  *(int *)(param_1 + 0x68) = iVar6;
  *(int *)(param_1 + 0x6c) = iVar7;
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 0x10);
  *(int32_t **)(param_2 + 8) = puVar10;
  *(int32_t *)(param_1 + 8) = *puVar10;
  lVar11 = *(int64_t *)(param_2 + 8);
  puVar17 = (uint *)(lVar11 + 4);
  *(uint **)(param_2 + 8) = puVar17;
  uVar2 = *puVar17;
  puVar10 = (int32_t *)(lVar11 + 8);
  *(int32_t **)(param_2 + 8) = puVar10;
  if (uVar2 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x10) + 0x18))((int64_t *)(param_1 + 0x10),puVar10,uVar2);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
    puVar10 = *(int32_t **)(param_2 + 8);
  }
  uVar3 = puVar10[1];
  uVar8 = puVar10[2];
  uVar9 = puVar10[3];
  *(int32_t *)(param_1 + 0x30) = *puVar10;
  *(int32_t *)(param_1 + 0x34) = uVar3;
  *(int32_t *)(param_1 + 0x38) = uVar8;
  *(int32_t *)(param_1 + 0x3c) = uVar9;
  lVar11 = *(int64_t *)(param_2 + 8);
  puVar17 = (uint *)(lVar11 + 0x10);
  *(uint **)(param_2 + 8) = puVar17;
  uVar23 = 0;
  if (iVar16 != 0) {
    *(int64_t *)(param_2 + 8) = lVar11 + 0x14;
    *(int32_t *)(param_1 + 0x70) = 0;
    uVar2 = **(uint **)(param_2 + 8);
    puVar17 = *(uint **)(param_2 + 8) + 1;
    *(uint **)(param_2 + 8) = puVar17;
    if (uVar2 != 0) {
      uVar19 = (uint64_t)uVar2;
      do {
        puStack_468 = &unknown_var_336_ptr;
        pbStack_460 = abStack_450;
        iStack_458 = 0;
        abStack_450[0] = 0;
        uVar2 = **(uint **)(param_2 + 8);
        puVar17 = *(uint **)(param_2 + 8) + 1;
        *(uint **)(param_2 + 8) = puVar17;
        if (uVar2 != 0) {
          FUN_180045f60(&puStack_468,puVar17,uVar2);
          *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
        }
        plVar20 = (int64_t *)&system_data_d7d0;
        uVar22 = uVar23;
        do {
          lVar11 = -1;
          do {
            lVar11 = lVar11 + 1;
          } while (*(char *)(*plVar20 + lVar11) != '\0');
          iVar16 = (int)lVar11;
          if (iStack_458 == iVar16) {
            if (iStack_458 != 0) {
              pbVar12 = pbStack_460;
              do {
                pbVar1 = pbVar12 + (*plVar20 - (int64_t)pbStack_460);
                iVar16 = (uint)*pbVar12 - (uint)*pbVar1;
                if (iVar16 != 0) break;
                pbVar12 = pbVar12 + 1;
              } while (*pbVar1 != 0);
            }
LAB_180258d5e:
            if (iVar16 == 0) {
              *(uint *)(param_1 + 0x70) =
                   *(uint *)(param_1 + 0x70) | *(uint *)(&unknown_var_7672_ptr + uVar22 * 0x10);
              break;
            }
          }
          else if (iStack_458 == 0) goto LAB_180258d5e;
          uVar22 = uVar22 + 1;
          plVar20 = plVar20 + 2;
        } while ((int64_t)plVar20 < 0x18098d7e0);
        puStack_468 = &system_state_ptr;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
      puVar17 = *(uint **)(param_2 + 8);
    }
  }
  uVar19 = (uint64_t)(int)*puVar17;
  *(uint **)(param_2 + 8) = puVar17 + 1;
  lVar15 = *(int64_t *)(param_1 + 0x48);
  lVar21 = *(int64_t *)(param_1 + 0x40);
  lVar11 = (lVar15 - lVar21) + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar15 - lVar21),8);
  uVar22 = (lVar11 >> 8) - (lVar11 >> 0x3f);
  if (uVar22 < uVar19) {
    FUN_18025b060(param_1 + 0x40,uVar19 - uVar22);
  }
  else {
    lVar11 = lVar21 + uVar19 * 0x170;
    lStack_478 = lVar11;
    if (lVar11 != lVar15) {
      do {
        lStack_478 = lVar11;
        FUN_180257e50(lVar11);
        lVar11 = lVar11 + 0x170;
      } while (lVar11 != lVar15);
      lVar21 = *(int64_t *)(param_1 + 0x40);
      lStack_478 = lVar11;
    }
    *(uint64_t *)(param_1 + 0x48) = uVar19 * 0x170 + lVar21;
  }
  uVar22 = uVar23;
  uVar18 = uVar23;
  if (0 < (int64_t)uVar19) {
    do {
      *(int8_t *)(*(int64_t *)(param_1 + 0x40) + 0x150 + uVar22) =
           **(int8_t **)(param_2 + 8);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 1;
      *(int32_t *)(*(int64_t *)(param_1 + 0x40) + 0x168 + uVar22) =
           **(int32_t **)(param_2 + 8);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
      uVar3 = **(int32_t **)(param_2 + 8);
      *(int32_t **)(param_2 + 8) = *(int32_t **)(param_2 + 8) + 1;
      *(int32_t *)(*(int64_t *)(param_1 + 0x40) + 0x154 + uVar22) = uVar3;
      puVar4 = *(int32_t **)(param_2 + 8);
      uVar3 = puVar4[1];
      uVar8 = puVar4[2];
      uVar9 = puVar4[3];
      puVar10 = (int32_t *)(*(int64_t *)(param_1 + 0x40) + 0x158 + uVar22);
      *puVar10 = *puVar4;
      puVar10[1] = uVar3;
      puVar10[2] = uVar8;
      puVar10[3] = uVar9;
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 0x10;
      FUN_1802595d0((int64_t)(int)uVar18 * 0x170 + *(int64_t *)(param_1 + 0x40),param_2);
      uVar19 = uVar19 - 1;
      uVar22 = uVar22 + 0x170;
      uVar18 = (uint64_t)((int)uVar18 + 1);
    } while (uVar19 != 0);
  }
  puVar10 = *(int32_t **)(param_2 + 8);
  uVar3 = puVar10[1];
  uVar8 = puVar10[2];
  uVar9 = puVar10[3];
  *(int32_t *)(param_1 + 0x74) = *puVar10;
  *(int32_t *)(param_1 + 0x78) = uVar3;
  *(int32_t *)(param_1 + 0x7c) = uVar8;
  *(int32_t *)(param_1 + 0x80) = uVar9;
  lVar11 = *(int64_t *)(param_2 + 8);
  piVar13 = (int *)(lVar11 + 0x10);
  *(int **)(param_2 + 8) = piVar13;
  lVar15 = (int64_t)*piVar13;
  *(int64_t *)(param_2 + 8) = lVar11 + 0x14;
  FUN_180080aa0(param_1 + 0x88,lVar15);
  if (0 < lVar15) {
    do {
      puVar4 = *(int32_t **)(param_2 + 8);
      uVar3 = puVar4[1];
      uVar8 = puVar4[2];
      uVar9 = puVar4[3];
      puVar10 = (int32_t *)(*(int64_t *)(param_1 + 0x88) + uVar23);
      *puVar10 = *puVar4;
      puVar10[1] = uVar3;
      puVar10[2] = uVar8;
      puVar10[3] = uVar9;
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 0x10;
      uVar23 = uVar23 + 0x10;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  *(int8_t *)(param_1 + 0xa8) = **(int8_t **)(param_2 + 8);
  puVar14 = (int8_t *)(*(int64_t *)(param_2 + 8) + 1);
  *(int8_t **)(param_2 + 8) = puVar14;
  *(int8_t *)(param_1 + 0xa9) = *puVar14;
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 1;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_498);
}






// 函数: void FUN_180258f70(int64_t param_1,int64_t *param_2)
void FUN_180258f70(int64_t param_1,int64_t *param_2)

{
  int32_t *puVar1;
  int32_t uVar2;
  int8_t uVar3;
  uint uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  int *piVar10;
  int8_t *puVar11;
  uint64_t uVar12;
  int iVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  bool bVar16;
  
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
  uVar2 = *(int32_t *)(param_1 + 100);
  uVar5 = *(int32_t *)(param_1 + 0x68);
  uVar6 = *(int32_t *)(param_1 + 0x6c);
  *puVar7 = *(int32_t *)(param_1 + 0x60);
  puVar7[1] = uVar2;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  puVar7 = (int32_t *)(param_2[1] + 0x10);
  param_2[1] = (int64_t)puVar7;
  uVar2 = *(int32_t *)(param_1 + 8);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar2;
  param_2[1] = param_2[1] + 4;
  System_QueueProcessor(param_2,param_1 + 0x10);
  puVar7 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 0x11) {
    System_BufferManager(param_2,(int64_t)puVar7 + (0x10 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  uVar2 = *(int32_t *)(param_1 + 0x34);
  uVar5 = *(int32_t *)(param_1 + 0x38);
  uVar6 = *(int32_t *)(param_1 + 0x3c);
  *puVar7 = *(int32_t *)(param_1 + 0x30);
  puVar7[1] = uVar2;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  puVar7 = (int32_t *)(param_2[1] + 0x10);
  param_2[1] = (int64_t)puVar7;
  uVar4 = *(uint *)(param_1 + 0x70);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  uVar12 = 0;
  *puVar7 = 0;
  lVar9 = *param_2;
  lVar8 = param_2[1] + 4;
  param_2[1] = lVar8;
  uVar14 = uVar12;
  if (lVar9 != 0) {
    uVar14 = lVar8 - lVar9;
  }
  if ((uint64_t)((lVar9 - lVar8) + param_2[2]) < 5) {
    System_BufferManager(param_2,(lVar8 - lVar9) + 4);
    lVar8 = param_2[1];
  }
  param_2[1] = lVar8 + 4;
  bVar16 = (uVar4 & 1) != 0;
  if (bVar16) {
    FUN_180639de0(param_2,&unknown_var_2120_ptr);
  }
  *(uint *)(uVar14 + *param_2) = (uint)bVar16;
  lVar9 = *(int64_t *)(param_1 + 0x48) - *(int64_t *)(param_1 + 0x40);
  lVar9 = lVar9 + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar9),8);
  piVar10 = (int *)param_2[1];
  iVar13 = (int)((uint64_t)lVar9 >> 8) - (int)(lVar9 >> 0x3f);
  if ((uint64_t)((*param_2 - (int64_t)piVar10) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar10 + (4 - *param_2));
    piVar10 = (int *)param_2[1];
  }
  *piVar10 = iVar13;
  param_2[1] = param_2[1] + 4;
  lVar9 = (int64_t)iVar13;
  uVar14 = uVar12;
  uVar15 = uVar12;
  if (0 < iVar13) {
    do {
      puVar11 = (int8_t *)param_2[1];
      uVar3 = *(int8_t *)(*(int64_t *)(param_1 + 0x40) + 0x150 + uVar14);
      if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 2) {
        System_BufferManager(param_2,puVar11 + (1 - *param_2));
        puVar11 = (int8_t *)param_2[1];
      }
      *puVar11 = uVar3;
      param_2[1] = param_2[1] + 1;
      puVar7 = (int32_t *)param_2[1];
      uVar2 = *(int32_t *)(*(int64_t *)(param_1 + 0x40) + 0x168 + uVar14);
      if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
        System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
        puVar7 = (int32_t *)param_2[1];
      }
      *puVar7 = uVar2;
      param_2[1] = param_2[1] + 4;
      puVar7 = (int32_t *)param_2[1];
      uVar2 = *(int32_t *)(*(int64_t *)(param_1 + 0x40) + 0x154 + uVar14);
      if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
        System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
        puVar7 = (int32_t *)param_2[1];
      }
      *puVar7 = uVar2;
      param_2[1] = param_2[1] + 4;
      puVar7 = (int32_t *)param_2[1];
      lVar8 = *(int64_t *)(param_1 + 0x40);
      if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 0x11) {
        System_BufferManager(param_2,(int64_t)puVar7 + (0x10 - *param_2));
        puVar7 = (int32_t *)param_2[1];
      }
      puVar1 = (int32_t *)(lVar8 + 0x158 + uVar14);
      uVar2 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar7 = *puVar1;
      puVar7[1] = uVar2;
      puVar7[2] = uVar5;
      puVar7[3] = uVar6;
      param_2[1] = param_2[1] + 0x10;
      FUN_180259b10((int64_t)(int)uVar15 * 0x170 + *(int64_t *)(param_1 + 0x40),param_2);
      lVar9 = lVar9 + -1;
      uVar14 = uVar14 + 0x170;
      uVar15 = (uint64_t)((int)uVar15 + 1);
    } while (lVar9 != 0);
  }
  puVar7 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 0x11) {
    System_BufferManager(param_2,(int64_t)puVar7 + (0x10 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  uVar2 = *(int32_t *)(param_1 + 0x78);
  uVar5 = *(int32_t *)(param_1 + 0x7c);
  uVar6 = *(int32_t *)(param_1 + 0x80);
  *puVar7 = *(int32_t *)(param_1 + 0x74);
  puVar7[1] = uVar2;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  piVar10 = (int *)(param_2[1] + 0x10);
  param_2[1] = (int64_t)piVar10;
  lVar9 = *(int64_t *)(param_1 + 0x90);
  lVar8 = *(int64_t *)(param_1 + 0x88);
  if ((uint64_t)((*param_2 - (int64_t)piVar10) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar10 + (4 - *param_2));
    piVar10 = (int *)param_2[1];
  }
  iVar13 = (int)(lVar9 - lVar8 >> 4);
  *piVar10 = iVar13;
  puVar7 = (int32_t *)(param_2[1] + 4);
  lVar9 = (int64_t)iVar13;
  param_2[1] = (int64_t)puVar7;
  if (0 < lVar9) {
    do {
      lVar8 = *(int64_t *)(param_1 + 0x88);
      if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 0x11) {
        System_BufferManager(param_2,(int8_t *)((int64_t)puVar7 + (0x10 - *param_2)));
        puVar7 = (int32_t *)param_2[1];
      }
      puVar1 = (int32_t *)(lVar8 + uVar12);
      uVar2 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar12 = uVar12 + 0x10;
      *puVar7 = *puVar1;
      puVar7[1] = uVar2;
      puVar7[2] = uVar5;
      puVar7[3] = uVar6;
      puVar7 = (int32_t *)(param_2[1] + 0x10);
      param_2[1] = (int64_t)puVar7;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  uVar3 = *(int8_t *)(param_1 + 0xa8);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 2) {
    System_BufferManager(param_2,(int8_t *)((int64_t)puVar7 + (1 - *param_2)));
    puVar7 = (int32_t *)param_2[1];
  }
  *(int8_t *)puVar7 = uVar3;
  puVar11 = (int8_t *)(param_2[1] + 1);
  param_2[1] = (int64_t)puVar11;
  uVar3 = *(int8_t *)(param_1 + 0xa9);
  if ((uint64_t)((*param_2 - (int64_t)puVar11) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar11 + (1 - *param_2));
    *(int8_t *)param_2[1] = uVar3;
  }
  else {
    *puVar11 = uVar3;
  }
  param_2[1] = param_2[1] + 1;
  return;
}



uint64_t * FUN_180259450(uint64_t *param_1)

{
  param_1[2] = &system_state_ptr;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[2] = &system_data_buffer_ptr;
  param_1[5] = 0;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  *(int32_t *)(param_1 + 0x19) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(int32_t *)(param_1 + 0x1d) = 3;
  param_1[0x1f] = &system_state_ptr;
  param_1[0x20] = 0;
  *(int32_t *)(param_1 + 0x21) = 0;
  param_1[0x1f] = &system_data_buffer_ptr;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  *(int32_t *)(param_1 + 0x21) = 0;
  *(int32_t *)(param_1 + 0x1e) = 0x3f800000;
  *(int32_t *)(param_1 + 0x23) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x11c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x24) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x124) = 0x3f800000;
  *(int32_t *)(param_1 + 0x25) = 0x3f733333;
  *(int32_t *)((int64_t)param_1 + 300) = 0x3f800000;
  *(int32_t *)(param_1 + 0x26) = 0x3f000000;
  *(int32_t *)((int64_t)param_1 + 0x134) = 0xbf800000;
  *(int32_t *)(param_1 + 0x27) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x13c) = 0x3f000000;
  *(int32_t *)(param_1 + 0x28) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x144) = 0x78;
  *(int16_t *)(param_1 + 0x29) = 0;
  *(int8_t *)((int64_t)param_1 + 0x14a) = 0;
  *(int32_t *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(uint64_t *)((int64_t)param_1 + 0x34) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x3c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x44) = 0x3f8000003f800000;
  *(uint64_t *)((int64_t)param_1 + 0x4c) = 0x3f8000003f800000;
  *(uint64_t *)((int64_t)param_1 + 0x54) = 0x3f8000003f800000;
  *(uint64_t *)((int64_t)param_1 + 0x5c) = 0x3f8000003f800000;
  *(uint64_t *)((int64_t)param_1 + 100) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x6c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x74) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x7c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x84) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x8c) = 0;
  *(int32_t *)((int64_t)param_1 + 0x94) = 0;
  *(int32_t *)((int64_t)param_1 + 0xcc) = 0;
  return param_1;
}






// 函数: void FUN_1802595d0(int *param_1,int64_t param_2)
void FUN_1802595d0(int *param_1,int64_t param_2)

{
  int iVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int32_t *puVar7;
  int8_t *puVar8;
  uint *puVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint uVar12;
  uint64_t uVar13;
  
  piVar6 = *(int **)(param_2 + 8);
  iVar1 = *piVar6;
  *(int **)(param_2 + 8) = piVar6 + 1;
  iVar3 = piVar6[2];
  iVar4 = piVar6[3];
  iVar5 = piVar6[4];
  *param_1 = piVar6[1];
  param_1[1] = iVar3;
  param_1[2] = iVar4;
  param_1[3] = iVar5;
  lVar10 = *(int64_t *)(param_2 + 8);
  puVar9 = (uint *)(lVar10 + 0x10);
  *(uint **)(param_2 + 8) = puVar9;
  uVar12 = *puVar9;
  lVar10 = lVar10 + 0x14;
  *(int64_t *)(param_2 + 8) = lVar10;
  if (uVar12 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 4) + 0x18))(param_1 + 4,lVar10,uVar12);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar12;
  }
  FUN_18025a7b0(&unknown_var_7680_ptr,param_2,param_1 + 0xc);
  piVar6 = *(int **)(param_2 + 8);
  iVar3 = piVar6[1];
  iVar4 = piVar6[2];
  iVar5 = piVar6[3];
  param_1[0xd] = *piVar6;
  param_1[0xe] = iVar3;
  param_1[0xf] = iVar4;
  param_1[0x10] = iVar5;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 0x10);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x11] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x12] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x13] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x14] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x15] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x16] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x17] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x18] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x19] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x1a] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x1b] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x1c] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x1d] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x1e] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x1f] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x20] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x21] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x22] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x23] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x24] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x25] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 8);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x26] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x27] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x28] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x29] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x2a] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x2b] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x2c] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x2d] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x2e] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x2f] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x30] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x31] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x32] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x33] = *piVar6;
  lVar10 = *(int64_t *)(param_2 + 8);
  puVar7 = (int32_t *)(lVar10 + 4);
  *(int32_t **)(param_2 + 8) = puVar7;
  uVar2 = *puVar7;
  *(int64_t *)(param_2 + 8) = lVar10 + 8;
  FUN_18025aa20(param_1 + 0x34,uVar2);
  lVar10 = *(int64_t *)(param_1 + 0x34);
  uVar11 = 0;
  uVar13 = uVar11;
  if (*(int64_t *)(param_1 + 0x36) - lVar10 >> 5 == 0) {
    puVar9 = *(uint **)(param_2 + 8);
  }
  else {
    do {
      uVar12 = **(uint **)(param_2 + 8);
      puVar9 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar9;
      if (uVar12 != 0) {
        (**(code **)(*(int64_t *)(lVar10 + uVar11) + 0x18))
                  ((int64_t *)(lVar10 + uVar11),puVar9,uVar12);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar12;
        puVar9 = *(uint **)(param_2 + 8);
      }
      lVar10 = *(int64_t *)(param_1 + 0x34);
      uVar12 = (int)uVar13 + 1;
      uVar11 = uVar11 + 0x20;
      uVar13 = (uint64_t)uVar12;
    } while ((uint64_t)(int64_t)(int)uVar12 <
             (uint64_t)(*(int64_t *)(param_1 + 0x36) - lVar10 >> 5));
  }
  param_1[0x3c] = *puVar9;
  lVar10 = *(int64_t *)(param_2 + 8);
  puVar9 = (uint *)(lVar10 + 4);
  *(uint **)(param_2 + 8) = puVar9;
  uVar12 = *puVar9;
  piVar6 = (int *)(lVar10 + 8);
  *(int **)(param_2 + 8) = piVar6;
  if (uVar12 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x3e) + 0x18))(param_1 + 0x3e,piVar6,uVar12);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar12;
    piVar6 = *(int **)(param_2 + 8);
  }
  param_1[0x46] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x47] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x48] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x49] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x4a] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x4b] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x4c] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x4f] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x50] = *piVar6;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
  *(int **)(param_2 + 8) = piVar6;
  param_1[0x51] = *piVar6;
  puVar8 = (int8_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int8_t **)(param_2 + 8) = puVar8;
  *(int8_t *)(param_1 + 0x52) = *puVar8;
  puVar8 = (int8_t *)(*(int64_t *)(param_2 + 8) + 1);
  *(int8_t **)(param_2 + 8) = puVar8;
  *(int8_t *)((int64_t)param_1 + 0x149) = *puVar8;
  piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 1);
  *(int **)(param_2 + 8) = piVar6;
  if (iVar1 != 0) {
    param_1[0x4d] = *piVar6;
    piVar6 = (int *)(*(int64_t *)(param_2 + 8) + 4);
    *(int **)(param_2 + 8) = piVar6;
    param_1[0x4e] = *piVar6;
    puVar8 = (int8_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int8_t **)(param_2 + 8) = puVar8;
    *(int8_t *)((int64_t)param_1 + 0x14a) = *puVar8;
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 1;
  }
  return;
}






