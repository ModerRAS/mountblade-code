#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part261.c - 8 个函数

// 函数: void FUN_180228898(void)
void FUN_180228898(void)

{
  int32_t uVar1;
  int8_t uVar2;
  int64_t lVar3;
  char *pcVar4;
  int8_t *puVar5;
  int32_t *puVar6;
  int64_t *unaff_RBX;
  int iVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int *piVar10;
  int64_t unaff_R12;
  int64_t unaff_R14;
  int64_t unaff_R15;
  
  lVar8 = unaff_R14;
  do {
    lVar3 = *(int64_t *)(unaff_R15 + 0x90);
    System_QueueProcessor();
    puVar5 = (int8_t *)unaff_RBX[1];
    uVar2 = *(int8_t *)(lVar8 + lVar3);
    if ((uint64_t)((unaff_RBX[2] - (int64_t)puVar5) + *unaff_RBX) < 2) {
      System_BufferManager();
      puVar5 = (int8_t *)unaff_RBX[1];
    }
    *puVar5 = uVar2;
    unaff_RBX[1] = unaff_RBX[1] + 1;
    System_QueueProcessor();
    pcVar4 = (char *)0x180bf7d28;
    do {
      if (*pcVar4 == *(char *)(lVar8 + 0xf8 + lVar3)) {
        FUN_180639de0();
        break;
      }
      pcVar4 = pcVar4 + 0x10;
    } while ((int64_t)pcVar4 < 0x180bf7e28);
    puVar6 = (int32_t *)unaff_RBX[1];
    uVar1 = *(int32_t *)(lVar8 + 0xfc + lVar3);
    if ((uint64_t)((unaff_RBX[2] - (int64_t)puVar6) + *unaff_RBX) < 5) {
      System_BufferManager();
      puVar6 = (int32_t *)unaff_RBX[1];
    }
    *puVar6 = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar6 = (int32_t *)unaff_RBX[1];
    if ((uint64_t)((unaff_RBX[2] - (int64_t)puVar6) + *unaff_RBX) < 0x11) {
      System_BufferManager();
      puVar6 = (int32_t *)unaff_RBX[1];
    }
    *puVar6 = *(int32_t *)(lVar8 + 0x104 + lVar3);
    unaff_RBX[1] = unaff_RBX[1] + 4;
    *(int32_t *)unaff_RBX[1] = *(int32_t *)(lVar8 + 0x108 + lVar3);
    unaff_RBX[1] = unaff_RBX[1] + 4;
    *(int32_t *)unaff_RBX[1] = *(int32_t *)(lVar8 + 0x10c + lVar3);
    unaff_RBX[1] = unaff_RBX[1] + 4;
    *(int32_t *)unaff_RBX[1] = 0x3f800000;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar6 = (int32_t *)unaff_RBX[1];
    if ((uint64_t)((unaff_RBX[2] - (int64_t)puVar6) + *unaff_RBX) < 0x11) {
      System_BufferManager();
      puVar6 = (int32_t *)unaff_RBX[1];
    }
    *puVar6 = *(int32_t *)(lVar8 + 0x114 + lVar3);
    unaff_RBX[1] = unaff_RBX[1] + 4;
    *(int32_t *)unaff_RBX[1] = *(int32_t *)(lVar8 + 0x118 + lVar3);
    unaff_RBX[1] = unaff_RBX[1] + 4;
    *(int32_t *)unaff_RBX[1] = *(int32_t *)(lVar8 + 0x11c + lVar3);
    unaff_RBX[1] = unaff_RBX[1] + 4;
    *(int32_t *)unaff_RBX[1] = 0x3f800000;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar6 = (int32_t *)unaff_RBX[1];
    uVar1 = *(int32_t *)(lVar8 + 0x124 + lVar3);
    if ((uint64_t)((unaff_RBX[2] - (int64_t)puVar6) + *unaff_RBX) < 5) {
      System_BufferManager();
      puVar6 = (int32_t *)unaff_RBX[1];
    }
    *puVar6 = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar6 = (int32_t *)unaff_RBX[1];
    if ((uint64_t)((unaff_RBX[2] - (int64_t)puVar6) + *unaff_RBX) < 0x11) {
      System_BufferManager();
      puVar6 = (int32_t *)unaff_RBX[1];
    }
    *puVar6 = *(int32_t *)(lVar8 + 0x128 + lVar3);
    unaff_RBX[1] = unaff_RBX[1] + 4;
    *(int32_t *)unaff_RBX[1] = *(int32_t *)(lVar8 + 300 + lVar3);
    unaff_RBX[1] = unaff_RBX[1] + 4;
    *(int32_t *)unaff_RBX[1] = *(int32_t *)(lVar8 + 0x130 + lVar3);
    unaff_RBX[1] = unaff_RBX[1] + 4;
    *(int32_t *)unaff_RBX[1] = 0x3f800000;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar6 = (int32_t *)unaff_RBX[1];
    if ((uint64_t)((unaff_RBX[2] - (int64_t)puVar6) + *unaff_RBX) < 0x11) {
      System_BufferManager();
      puVar6 = (int32_t *)unaff_RBX[1];
    }
    *puVar6 = *(int32_t *)(lVar8 + 0x138 + lVar3);
    unaff_RBX[1] = unaff_RBX[1] + 4;
    *(int32_t *)unaff_RBX[1] = *(int32_t *)(lVar8 + 0x13c + lVar3);
    unaff_RBX[1] = unaff_RBX[1] + 4;
    *(int32_t *)unaff_RBX[1] = *(int32_t *)(lVar8 + 0x140 + lVar3);
    unaff_RBX[1] = unaff_RBX[1] + 4;
    *(int32_t *)unaff_RBX[1] = 0x3f800000;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar6 = (int32_t *)unaff_RBX[1];
    uVar1 = *(int32_t *)(lVar8 + 0x148 + lVar3);
    if ((uint64_t)((unaff_RBX[2] - (int64_t)puVar6) + *unaff_RBX) < 5) {
      System_BufferManager();
      puVar6 = (int32_t *)unaff_RBX[1];
    }
    *puVar6 = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar6 = (int32_t *)unaff_RBX[1];
    uVar1 = *(int32_t *)(lVar8 + 0x100 + lVar3);
    if ((uint64_t)((unaff_RBX[2] - (int64_t)puVar6) + *unaff_RBX) < 5) {
      System_BufferManager();
      puVar6 = (int32_t *)unaff_RBX[1];
    }
    *puVar6 = uVar1;
    lVar8 = lVar8 + 0x150;
    puVar6 = (int32_t *)(unaff_RBX[1] + 4);
    unaff_RBX[1] = (int64_t)puVar6;
    unaff_R12 = unaff_R12 + -1;
    if (unaff_R12 == 0) {
      if ((uint64_t)((unaff_RBX[2] - (int64_t)puVar6) + *unaff_RBX) < 5) {
        System_BufferManager();
        puVar6 = (int32_t *)unaff_RBX[1];
      }
      *puVar6 = (int)unaff_R14;
      piVar10 = (int *)(unaff_RBX[1] + 4);
      unaff_RBX[1] = (int64_t)piVar10;
      lVar8 = *(int64_t *)(unaff_R15 + 0xb8) - *(int64_t *)(unaff_R15 + 0xb0);
      lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
      uVar9 = (lVar8 >> 4) - (lVar8 >> 0x3f);
      if ((uint64_t)((unaff_RBX[2] - (int64_t)piVar10) + *unaff_RBX) < 5) {
        System_BufferManager();
        piVar10 = (int *)unaff_RBX[1];
      }
      iVar7 = (int)uVar9;
      *piVar10 = iVar7;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      if (0 < iVar7) {
        uVar9 = uVar9 & 0xffffffff;
        do {
          FUN_180226a90(*(int64_t *)(unaff_R15 + 0xb0) + unaff_R14);
          unaff_R14 = unaff_R14 + 0x60;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      return;
    }
  } while( true );
}





// 函数: void FUN_180228c0f(int32_t *param_1)
void FUN_180228c0f(int32_t *param_1)

{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int iVar2;
  uint64_t uVar3;
  int *piVar4;
  int64_t unaff_R14;
  int64_t unaff_R15;
  
  if ((uint64_t)((unaff_RBX[2] - (int64_t)param_1) + *unaff_RBX) < 5) {
    System_BufferManager();
    param_1 = (int32_t *)unaff_RBX[1];
  }
  *param_1 = (int)unaff_R14;
  piVar4 = (int *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (int64_t)piVar4;
  lVar1 = *(int64_t *)(unaff_R15 + 0xb8) - *(int64_t *)(unaff_R15 + 0xb0);
  lVar1 = lVar1 / 6 + (lVar1 >> 0x3f);
  uVar3 = (lVar1 >> 4) - (lVar1 >> 0x3f);
  if ((uint64_t)((unaff_RBX[2] - (int64_t)piVar4) + *unaff_RBX) < 5) {
    System_BufferManager();
    piVar4 = (int *)unaff_RBX[1];
  }
  iVar2 = (int)uVar3;
  *piVar4 = iVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  if (0 < iVar2) {
    uVar3 = uVar3 & 0xffffffff;
    do {
      FUN_180226a90(*(int64_t *)(unaff_R15 + 0xb0) + unaff_R14);
      unaff_R14 = unaff_R14 + 0x60;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}





// 函数: void FUN_180228c2c(void)
void FUN_180228c2c(void)

{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int iVar2;
  uint64_t uVar3;
  int *piVar4;
  int64_t unaff_R14;
  int64_t unaff_R15;
  
  System_BufferManager();
  *(int *)unaff_RBX[1] = (int)unaff_R14;
  piVar4 = (int *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (int64_t)piVar4;
  lVar1 = *(int64_t *)(unaff_R15 + 0xb8) - *(int64_t *)(unaff_R15 + 0xb0);
  lVar1 = lVar1 / 6 + (lVar1 >> 0x3f);
  uVar3 = (lVar1 >> 4) - (lVar1 >> 0x3f);
  if ((uint64_t)((unaff_RBX[2] - (int64_t)piVar4) + *unaff_RBX) < 5) {
    System_BufferManager();
    piVar4 = (int *)unaff_RBX[1];
  }
  iVar2 = (int)uVar3;
  *piVar4 = iVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  if (0 < iVar2) {
    uVar3 = uVar3 & 0xffffffff;
    do {
      FUN_180226a90(*(int64_t *)(unaff_R15 + 0xb0) + unaff_R14);
      unaff_R14 = unaff_R14 + 0x60;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180228ce0(int32_t *param_1,int64_t param_2,uint param_3)
void FUN_180228ce0(int32_t *param_1,int64_t param_2,uint param_3)

{
  uint64_t *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int64_t lVar6;
  byte *pbVar7;
  int *piVar8;
  int64_t lVar9;
  uint *puVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int iVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  uint64_t uVar17;
  int64_t *plVar18;
  int iVar19;
  int64_t lVar20;
  int64_t lVar21;
  int8_t auStack_518 [32];
  uint64_t uStack_4f8;
  int32_t *puStack_4f0;
  uint64_t *puStack_4e8;
  uint64_t uStack_4e0;
  uint64_t *puStack_4d8;
  uint64_t *puStack_4d0;
  uint64_t uStack_4c8;
  uint64_t uStack_4c0;
  uint64_t uStack_4b8;
  uint64_t uStack_4b0;
  uint64_t uStack_4a8;
  uint64_t uStack_4a0;
  uint64_t uStack_498;
  uint64_t uStack_490;
  int32_t uStack_488;
  int32_t uStack_484;
  int32_t uStack_480;
  int32_t uStack_47c;
  uint64_t uStack_478;
  int64_t lStack_470;
  void *puStack_468;
  byte *pbStack_460;
  int iStack_458;
  byte abStack_450 [1032];
  uint64_t uStack_48;
  
  uStack_4e0 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_518;
  uStack_4f8 = CONCAT44(uStack_4f8._4_4_,param_3);
  *param_1 = **(int32_t **)(param_2 + 8);
  lVar6 = *(int64_t *)(param_2 + 8);
  *(int32_t **)(param_2 + 8) = (int32_t *)(lVar6 + 4);
  if (2 < param_3) {
    param_1[1] = *(int32_t *)(lVar6 + 4);
    param_1[2] = *(int32_t *)(lVar6 + 8);
    param_1[3] = *(int32_t *)(lVar6 + 0xc);
    param_1[4] = *(int32_t *)(lVar6 + 0x10);
    param_1[5] = *(int32_t *)(lVar6 + 0x14);
    param_1[6] = *(int32_t *)(lVar6 + 0x18);
    param_1[7] = *(int32_t *)(lVar6 + 0x1c);
    param_1[8] = *(int32_t *)(lVar6 + 0x20);
    *(int64_t *)(param_2 + 8) = lVar6 + 0x24;
  }
  iVar19 = 0;
  puStack_468 = &unknown_var_336_ptr;
  pbStack_460 = abStack_450;
  iStack_458 = 0;
  abStack_450[0] = 0;
  uVar3 = **(uint **)(param_2 + 8);
  puVar10 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar10;
  puStack_4f0 = param_1;
  if (uVar3 != 0) {
    FUN_180045f60(&puStack_468,puVar10,uVar3);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar3;
  }
  plVar18 = (int64_t *)0x180bf7cf0;
  do {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(char *)(*plVar18 + lVar6) != '\0');
    iVar14 = (int)lVar6;
    if (iStack_458 == iVar14) {
      if (iStack_458 != 0) {
        pbVar7 = pbStack_460;
        do {
          pbVar2 = pbVar7 + (*plVar18 - (int64_t)pbStack_460);
          iVar14 = (uint)*pbVar7 - (uint)*pbVar2;
          if (iVar14 != 0) break;
          pbVar7 = pbVar7 + 1;
        } while (*pbVar2 != 0);
      }
LAB_180228e3e:
      if (iVar14 == 0) {
        *(int8_t *)(param_1 + 9) = *(int8_t *)((int64_t)iVar19 * 0x10 + 0x180bf7cf8);
        break;
      }
    }
    else if (iStack_458 == 0) goto LAB_180228e3e;
    iVar19 = iVar19 + 1;
    plVar18 = plVar18 + 2;
  } while ((int64_t)plVar18 < 0x180bf7d20);
  puStack_468 = &system_state_ptr;
  uVar3 = **(uint **)(param_2 + 8);
  puVar10 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar10;
  if (uVar3 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 10) + 0x18))(param_1 + 10,puVar10,uVar3);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar3;
    puVar10 = *(uint **)(param_2 + 8);
  }
  uVar3 = puVar10[1];
  uVar4 = puVar10[2];
  uVar5 = puVar10[3];
  param_1[0x20] = *puVar10;
  param_1[0x21] = uVar3;
  param_1[0x22] = uVar4;
  param_1[0x23] = uVar5;
  lVar6 = *(int64_t *)(param_2 + 8);
  piVar8 = (int *)(lVar6 + 0x10);
  *(int **)(param_2 + 8) = piVar8;
  lVar12 = (int64_t)*piVar8;
  *(int64_t *)(param_2 + 8) = lVar6 + 0x14;
  plVar18 = (int64_t *)(param_1 + 0x24);
  FUN_180229b30(plVar18,lVar12);
  puVar10 = *(uint **)(param_2 + 8);
  if (0 < lVar12) {
    lVar6 = 0;
    uVar3 = (uint)uStack_4f8;
    do {
      lVar21 = *plVar18;
      plVar13 = (int64_t *)(lVar21 + 8 + lVar6);
      uVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      *(uint **)(param_2 + 8) = puVar10;
      if (uVar4 != 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13,puVar10,uVar4);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar4;
        puVar10 = *(uint **)(param_2 + 8);
      }
      if (1 < uVar3) {
        *(char *)(lVar6 + lVar21) = (char)*puVar10;
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 1;
        puVar10 = *(uint **)(param_2 + 8);
      }
      plVar13 = (int64_t *)(lVar21 + 0xa0 + lVar6);
      uVar4 = *puVar10;
      *(uint **)(param_2 + 8) = puVar10 + 1;
      if (uVar4 != 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13,puVar10 + 1,uVar4);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar4;
      }
      puStack_468 = &unknown_var_336_ptr;
      pbStack_460 = abStack_450;
      iStack_458 = 0;
      abStack_450[0] = 0;
      uVar4 = **(uint **)(param_2 + 8);
      puVar10 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar10;
      if (uVar4 != 0) {
        FUN_180045f60(&puStack_468,puVar10,uVar4);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar4;
      }
      lVar20 = 0;
      plVar13 = (int64_t *)0x180bf7d20;
      do {
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (*(char *)(*plVar13 + lVar9) != '\0');
        iVar19 = (int)lVar9;
        if (iStack_458 == iVar19) {
          if (iStack_458 != 0) {
            pbVar7 = pbStack_460;
            do {
              pbVar2 = pbVar7 + (*plVar13 - (int64_t)pbStack_460);
              iVar19 = (uint)*pbVar7 - (uint)*pbVar2;
              if (iVar19 != 0) break;
              pbVar7 = pbVar7 + 1;
            } while (*pbVar2 != 0);
          }
LAB_180229003:
          if (iVar19 == 0) {
            *(int8_t *)(lVar6 + 0xf8 + lVar21) = *(int8_t *)(lVar20 * 0x10 + 0x180bf7d28);
            break;
          }
        }
        else if (iStack_458 == 0) goto LAB_180229003;
        lVar20 = lVar20 + 1;
        plVar13 = plVar13 + 2;
      } while ((int64_t)plVar13 < 0x180bf7e20);
      puStack_468 = &system_state_ptr;
      *(int32_t *)(lVar6 + 0xfc + lVar21) = **(int32_t **)(param_2 + 8);
      lVar20 = *(int64_t *)(param_2 + 8);
      *(int32_t *)(lVar6 + 0x104 + lVar21) = *(int32_t *)(lVar20 + 4);
      *(int32_t *)(lVar6 + 0x108 + lVar21) = *(int32_t *)(lVar20 + 8);
      *(int32_t *)(lVar6 + 0x10c + lVar21) = *(int32_t *)(lVar20 + 0xc);
      *(int32_t *)(lVar6 + 0x110 + lVar21) = *(int32_t *)(lVar20 + 0x10);
      *(int32_t *)(lVar6 + 0x114 + lVar21) = *(int32_t *)(lVar20 + 0x14);
      *(int32_t *)(lVar6 + 0x118 + lVar21) = *(int32_t *)(lVar20 + 0x18);
      *(int32_t *)(lVar6 + 0x11c + lVar21) = *(int32_t *)(lVar20 + 0x1c);
      *(int32_t *)(lVar6 + 0x120 + lVar21) = *(int32_t *)(lVar20 + 0x20);
      *(int32_t **)(param_2 + 8) = (int32_t *)(lVar20 + 0x24);
      *(int32_t *)(lVar6 + 0x124 + lVar21) = *(int32_t *)(lVar20 + 0x24);
      lVar20 = *(int64_t *)(param_2 + 8);
      *(int32_t *)(lVar6 + 0x128 + lVar21) = *(int32_t *)(lVar20 + 4);
      *(int32_t *)(lVar6 + 300 + lVar21) = *(int32_t *)(lVar20 + 8);
      *(int32_t *)(lVar6 + 0x130 + lVar21) = *(int32_t *)(lVar20 + 0xc);
      *(int32_t *)(lVar6 + 0x134 + lVar21) = *(int32_t *)(lVar20 + 0x10);
      *(int32_t *)(lVar6 + 0x138 + lVar21) = *(int32_t *)(lVar20 + 0x14);
      *(int32_t *)(lVar6 + 0x13c + lVar21) = *(int32_t *)(lVar20 + 0x18);
      *(int32_t *)(lVar6 + 0x140 + lVar21) = *(int32_t *)(lVar20 + 0x1c);
      *(int32_t *)(lVar6 + 0x144 + lVar21) = *(int32_t *)(lVar20 + 0x20);
      *(int32_t **)(param_2 + 8) = (int32_t *)(lVar20 + 0x24);
      *(int32_t *)(lVar6 + 0x148 + lVar21) = *(int32_t *)(lVar20 + 0x24);
      puVar10 = (uint *)(*(int64_t *)(param_2 + 8) + 4);
      *(uint **)(param_2 + 8) = puVar10;
      if (uVar3 != 0) {
        *(uint *)(lVar6 + 0x100 + lVar21) = *puVar10;
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
        puVar10 = *(uint **)(param_2 + 8);
      }
      lVar6 = lVar6 + 0x150;
      lVar12 = lVar12 + -1;
      param_1 = puStack_4f0;
    } while (lVar12 != 0);
  }
  *(uint **)(param_2 + 8) = puVar10 + 1;
  uVar3 = puVar10[1];
  uVar17 = (uint64_t)(int)uVar3;
  *(uint **)(param_2 + 8) = puVar10 + 2;
  lVar6 = *(int64_t *)(param_1 + 0x2c);
  if ((uint64_t)((*(int64_t *)(param_1 + 0x30) - lVar6) / 0x60) < uVar17) {
    if (uVar3 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = FUN_18062b420(system_memory_pool_ptr,uVar17 * 0x60,*(int8_t *)(param_1 + 0x32));
      lVar6 = *(int64_t *)(param_1 + 0x2c);
    }
    lVar21 = *(int64_t *)(param_1 + 0x2e);
    lVar20 = lVar12;
    if (lVar6 != lVar21) {
      do {
        FUN_18040d890(lVar20,lVar6);
        lVar6 = lVar6 + 0x60;
        lVar20 = lVar20 + 0x60;
      } while (lVar6 != lVar21);
      lVar21 = *(int64_t *)(param_1 + 0x2e);
      lVar6 = *(int64_t *)(param_1 + 0x2c);
      if (lVar6 != lVar21) {
        do {
          FUN_18040d990(lVar6);
          lVar6 = lVar6 + 0x60;
        } while (lVar6 != lVar21);
        lVar6 = *(int64_t *)(param_1 + 0x2c);
      }
    }
    if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar6);
    }
    *(int64_t *)(param_1 + 0x2c) = lVar12;
    *(int64_t *)(param_1 + 0x2e) = lVar20;
    *(uint64_t *)(param_1 + 0x30) = uVar17 * 0x60 + lVar12;
  }
  if (0 < (int)uVar3) {
    uStack_4f8 = (uint64_t)uVar3;
    do {
      FUN_180226e10(&uStack_4c8,param_2);
      puVar16 = *(uint64_t **)(param_1 + 0x2e);
      if (puVar16 < *(uint64_t **)(param_1 + 0x30)) {
        *(uint64_t **)(param_1 + 0x2e) = puVar16 + 0xc;
        puVar11 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x60,8,3);
        lVar6 = lStack_470;
        *(uint64_t *)((int64_t)puVar11 + 0x14) = 0;
        *(uint64_t *)((int64_t)puVar11 + 0x1c) = 0;
        *(uint64_t *)((int64_t)puVar11 + 0x24) = 0;
        *(uint64_t *)((int64_t)puVar11 + 0x2c) = 0;
        *(uint64_t *)((int64_t)puVar11 + 0x34) = 0;
        *(uint64_t *)((int64_t)puVar11 + 0x3c) = 0;
        *(uint64_t *)((int64_t)puVar11 + 0x44) = 0;
        *(uint64_t *)((int64_t)puVar11 + 0x4c) = 0;
        *(uint64_t *)((int64_t)puVar11 + 0x54) = 0;
        *(int32_t *)((int64_t)puVar11 + 0x5c) = 0;
        *puVar11 = &system_state_ptr;
        puVar11[1] = 0;
        *(int32_t *)(puVar11 + 2) = 0;
        *puVar11 = &system_data_buffer_ptr;
        puVar11[3] = 0;
        puVar11[1] = 0;
        *(int32_t *)(puVar11 + 2) = 0;
        puVar15 = puVar11 + 4;
        *puVar15 = &system_state_ptr;
        puVar11[5] = 0;
        *(int32_t *)(puVar11 + 6) = 0;
        *puVar15 = &system_data_buffer_ptr;
        puVar11[7] = 0;
        puVar11[5] = 0;
        *(int32_t *)(puVar11 + 6) = 0;
        puVar1 = puVar11 + 8;
        *puVar1 = &system_state_ptr;
        puVar11[9] = 0;
        *(int32_t *)(puVar11 + 10) = 0;
        *puVar1 = &system_data_buffer_ptr;
        puVar11[0xb] = 0;
        puVar11[9] = 0;
        *(int32_t *)(puVar11 + 10) = 0;
        puVar16[0xb] = puVar11;
        uVar3 = *(uint *)(lStack_470 + 0x10);
        uVar17 = (uint64_t)uVar3;
        puStack_4e8 = puVar15;
        puStack_4d8 = puVar11;
        puStack_4d0 = puVar1;
        if (*(int64_t *)(lStack_470 + 8) != 0) {
          FUN_1806277c0(puVar11,uVar17);
        }
        if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(puVar11[1],*(uint64_t *)(lVar6 + 8),uVar17);
        }
        *(int32_t *)(puVar11 + 2) = 0;
        if (puVar11[1] != 0) {
          *(int8_t *)(uVar17 + puVar11[1]) = 0;
        }
        *(int32_t *)((int64_t)puVar11 + 0x1c) = *(int32_t *)(lVar6 + 0x1c);
        uVar3 = *(uint *)(lVar6 + 0x30);
        uVar17 = (uint64_t)uVar3;
        if (*(int64_t *)(lVar6 + 0x28) != 0) {
          FUN_1806277c0(puVar15,uVar17);
        }
        if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(puVar11[5],*(uint64_t *)(lVar6 + 0x28),uVar17);
        }
        *(int32_t *)(puVar11 + 6) = 0;
        if (puVar11[5] != 0) {
          *(int8_t *)(uVar17 + puVar11[5]) = 0;
        }
        *(int32_t *)((int64_t)puVar11 + 0x3c) = *(int32_t *)(lVar6 + 0x3c);
        uVar3 = *(uint *)(lVar6 + 0x50);
        uVar17 = (uint64_t)uVar3;
        if (*(int64_t *)(lVar6 + 0x48) != 0) {
          FUN_1806277c0(puVar1,uVar17);
        }
        if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(puVar11[9],*(uint64_t *)(lVar6 + 0x48),uVar17);
        }
        *(int32_t *)(puVar11 + 10) = 0;
        if (puVar11[9] != 0) {
          *(int8_t *)(uVar17 + puVar11[9]) = 0;
        }
        *(int32_t *)((int64_t)puVar11 + 0x5c) = *(int32_t *)(lVar6 + 0x5c);
        *puVar16 = uStack_4c8;
        puVar16[1] = uStack_4c0;
        puVar16[2] = uStack_4b8;
        puVar16[3] = uStack_4b0;
        puVar16[4] = uStack_4a8;
        puVar16[5] = uStack_4a0;
        puVar16[6] = uStack_498;
        puVar16[7] = uStack_490;
        *(int32_t *)(puVar16 + 8) = uStack_488;
        *(int32_t *)((int64_t)puVar16 + 0x44) = uStack_484;
        *(int32_t *)(puVar16 + 9) = uStack_480;
        *(int32_t *)((int64_t)puVar16 + 0x4c) = uStack_47c;
        puVar16[10] = uStack_478;
        puVar16[0xb] = lStack_470;
        puVar16[0xb] = puVar11;
        param_1 = puStack_4f0;
      }
      else {
        puVar15 = *(uint64_t **)(param_1 + 0x2c);
        lVar6 = ((int64_t)puVar16 - (int64_t)puVar15) / 0x60;
        if (lVar6 == 0) {
          lVar6 = 1;
LAB_1802294ca:
          lVar12 = FUN_18062b420(system_memory_pool_ptr,lVar6 * 0x60,*(int8_t *)(param_1 + 0x32));
          puVar16 = *(uint64_t **)(param_1 + 0x2e);
          puVar15 = *(uint64_t **)(param_1 + 0x2c);
          lVar21 = lVar12;
        }
        else {
          lVar6 = lVar6 * 2;
          if (lVar6 != 0) goto LAB_1802294ca;
          lVar12 = 0;
          lVar21 = lVar12;
        }
        for (; puVar15 != puVar16; puVar15 = puVar15 + 0xc) {
          FUN_18040d890(lVar12,puVar15);
          lVar12 = lVar12 + 0x60;
        }
        FUN_18040d890(lVar12,&uStack_4c8);
        lVar20 = *(int64_t *)(param_1 + 0x2e);
        lVar9 = *(int64_t *)(param_1 + 0x2c);
        if (lVar9 != lVar20) {
          do {
            FUN_18040d990(lVar9);
            lVar9 = lVar9 + 0x60;
          } while (lVar9 != lVar20);
          lVar9 = *(int64_t *)(param_1 + 0x2c);
        }
        if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar9);
        }
        *(int64_t *)(param_1 + 0x2c) = lVar21;
        *(int64_t *)(param_1 + 0x2e) = lVar12 + 0x60;
        *(int64_t *)(param_1 + 0x30) = lVar6 * 0x60 + lVar21;
      }
      FUN_18040d990(&uStack_4c8);
      uStack_4f8 = uStack_4f8 - 1;
    } while (uStack_4f8 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_518);
}



int8_t * FUN_1802295e0(int8_t *param_1)

{
  *(void **)(param_1 + 8) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(void **)(param_1 + 8) = &unknown_var_3432_ptr;
  *(int8_t **)(param_1 + 0x10) = param_1 + 0x20;
  *(int32_t *)(param_1 + 0x18) = 0;
  param_1[0x20] = 0;
  *(void **)(param_1 + 0xa0) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0xa8) = 0;
  *(int32_t *)(param_1 + 0xb0) = 0;
  *(void **)(param_1 + 0xa0) = &unknown_var_3480_ptr;
  *(int8_t **)(param_1 + 0xa8) = param_1 + 0xb8;
  *(int32_t *)(param_1 + 0xb0) = 0;
  param_1[0xb8] = 0;
  *(uint64_t *)(param_1 + 0x104) = 0;
  *(uint64_t *)(param_1 + 0x10c) = 0;
  *(uint64_t *)(param_1 + 0x114) = 0;
  *(uint64_t *)(param_1 + 0x11c) = 0;
  *(int32_t *)(param_1 + 0x124) = 0xbf800000;
  *(uint64_t *)(param_1 + 0x128) = 0;
  *(uint64_t *)(param_1 + 0x130) = 0;
  *(uint64_t *)(param_1 + 0x138) = 0;
  *(uint64_t *)(param_1 + 0x140) = 0;
  *(int32_t *)(param_1 + 0x148) = 0xbf800000;
  param_1[0xf8] = 0xff;
  *(uint64_t *)(param_1 + 0xfc) = 0;
  *param_1 = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802296d0(uint64_t param_1,int64_t param_2,int8_t *param_3)
void FUN_1802296d0(uint64_t param_1,int64_t param_2,int8_t *param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  int64_t lVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int64_t *plVar8;
  int8_t auStack_478 [32];
  uint64_t uStack_458;
  void *puStack_448;
  byte *pbStack_440;
  int iStack_438;
  byte abStack_430 [1032];
  uint64_t uStack_28;
  
  uStack_458 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_478;
  iVar7 = 0;
  puStack_448 = &unknown_var_336_ptr;
  pbStack_440 = abStack_430;
  iStack_438 = 0;
  abStack_430[0] = 0;
  uVar3 = **(uint **)(param_2 + 8);
  puVar1 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar1;
  if (uVar3 != 0) {
    FUN_180045f60(&puStack_448,puVar1,uVar3);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar3;
  }
  plVar8 = (int64_t *)0x180bf7e60;
  do {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(char *)(*plVar8 + lVar4) != '\0');
    iVar6 = (int)lVar4;
    if (iStack_438 == iVar6) {
      if (iStack_438 != 0) {
        pbVar5 = pbStack_440;
        do {
          pbVar2 = pbVar5 + (*plVar8 - (int64_t)pbStack_440);
          iVar6 = (uint)*pbVar5 - (uint)*pbVar2;
          if (iVar6 != 0) break;
          pbVar5 = pbVar5 + 1;
        } while (*pbVar2 != 0);
      }
LAB_1802297ce:
      if (iVar6 == 0) {
        *param_3 = *(int8_t *)((int64_t)iVar7 * 0x10 + 0x180bf7e68);
        goto LAB_1802297eb;
      }
    }
    else if (iStack_438 == 0) goto LAB_1802297ce;
    iVar7 = iVar7 + 1;
    plVar8 = plVar8 + 2;
    if (0x180bf7e8f < (int64_t)plVar8) {
LAB_1802297eb:
      puStack_448 = &system_state_ptr;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_478);
    }
  } while( true );
}





// 函数: void FUN_180229820(uint64_t param_1,char param_2,int64_t *param_3)
void FUN_180229820(uint64_t param_1,char param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  char *pcVar3;
  int32_t *puVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  
  pcVar3 = (char *)0x180bf7e68;
  iVar5 = 0;
  while (*pcVar3 != param_2) {
    iVar5 = iVar5 + 1;
    pcVar3 = pcVar3 + 0x10;
    if (0x180bf7e97 < (int64_t)pcVar3) {
      return;
    }
  }
  uVar6 = 0xffffffffffffffff;
  lVar1 = *(int64_t *)((int64_t)iVar5 * 0x10 + 0x180bf7e60);
  do {
    uVar6 = uVar6 + 1;
  } while (*(char *)(lVar1 + uVar6) != '\0');
  puVar4 = (int32_t *)param_3[1];
  uVar7 = uVar6 & 0xffffffff;
  if ((uint64_t)((*param_3 - (int64_t)puVar4) + param_3[2]) <= uVar7 + 4) {
    System_BufferManager(param_3,(int64_t)puVar4 + ((uVar7 + 4) - *param_3));
    puVar4 = (int32_t *)param_3[1];
  }
  *puVar4 = (int)uVar6;
  param_3[1] = param_3[1] + 4;
  lVar2 = param_3[1];
  uVar6 = (param_3[2] - lVar2) + *param_3;
  if (uVar7 != 0) {
    if (lVar2 != 0) {
      if ((lVar1 != 0) && (uVar7 <= uVar6)) {
                    // WARNING: Subroutine does not return
        memcpy(lVar2,lVar1,uVar7);
      }
                    // WARNING: Subroutine does not return
      memset(lVar2,0,uVar6);
    }
    puVar4 = (int32_t *)_errno();
    *puVar4 = 0x16;
    _invalid_parameter_noinfo();
  }
  param_3[1] = param_3[1] + uVar7;
  return;
}





// 函数: void FUN_180229940(int64_t *param_1)
void FUN_180229940(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x60) {
    FUN_18040d990(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_1802299a0(uint64_t *param_1)
void FUN_1802299a0(uint64_t *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  
  uVar5 = param_1[1];
  for (uVar4 = *param_1; uVar4 != uVar5; uVar4 = uVar4 + 0xe0) {
    *(void **)(uVar4 + 8) = &system_state_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((int64_t)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



