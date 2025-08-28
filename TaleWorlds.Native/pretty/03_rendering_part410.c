#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part410.c - 12 个函数

// 函数: void FUN_180492ee0(int64_t param_1,uint64_t *param_2,uint64_t *param_3,uint param_4)
void FUN_180492ee0(int64_t param_1,uint64_t *param_2,uint64_t *param_3,uint param_4)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int8_t auStack_48 [64];
  
  uVar6 = param_2[1];
  uVar7 = (uint64_t)param_4;
  puVar1 = *(uint64_t **)(param_1 + 0x1d0 + uVar7 * 8);
  *puVar1 = *param_2;
  puVar1[1] = uVar6;
  uVar6 = param_2[3];
  lVar2 = *(int64_t *)(param_1 + 0x1d0 + uVar7 * 8);
  *(uint64_t *)(lVar2 + 0x10) = param_2[2];
  *(uint64_t *)(lVar2 + 0x18) = uVar6;
  uVar6 = param_2[5];
  lVar2 = *(int64_t *)(param_1 + 0x1d0 + uVar7 * 8);
  *(uint64_t *)(lVar2 + 0x20) = param_2[4];
  *(uint64_t *)(lVar2 + 0x28) = uVar6;
  uVar6 = param_2[7];
  lVar2 = *(int64_t *)(param_1 + 0x1d0 + uVar7 * 8);
  *(uint64_t *)(lVar2 + 0x30) = param_2[6];
  *(uint64_t *)(lVar2 + 0x38) = uVar6;
  puVar1 = *(uint64_t **)(param_1 + 0x1e0 + uVar7 * 8);
  uVar6 = param_3[1];
  *puVar1 = *param_3;
  puVar1[1] = uVar6;
  lVar2 = *(int64_t *)(param_1 + 0x1e0 + uVar7 * 8);
  uVar6 = param_3[3];
  *(uint64_t *)(lVar2 + 0x10) = param_3[2];
  *(uint64_t *)(lVar2 + 0x18) = uVar6;
  lVar2 = *(int64_t *)(param_1 + 0x1e0 + uVar7 * 8);
  uVar3 = *(int32_t *)((int64_t)param_3 + 0x24);
  uVar4 = *(int32_t *)(param_3 + 5);
  uVar5 = *(int32_t *)((int64_t)param_3 + 0x2c);
  *(int32_t *)(lVar2 + 0x20) = *(int32_t *)(param_3 + 4);
  *(int32_t *)(lVar2 + 0x24) = uVar3;
  *(int32_t *)(lVar2 + 0x28) = uVar4;
  *(int32_t *)(lVar2 + 0x2c) = uVar5;
  lVar2 = *(int64_t *)(param_1 + 0x1e0 + uVar7 * 8);
  uVar3 = *(int32_t *)((int64_t)param_3 + 0x34);
  uVar4 = *(int32_t *)(param_3 + 7);
  uVar5 = *(int32_t *)((int64_t)param_3 + 0x3c);
  *(int32_t *)(lVar2 + 0x30) = *(int32_t *)(param_3 + 6);
  *(int32_t *)(lVar2 + 0x34) = uVar3;
  *(int32_t *)(lVar2 + 0x38) = uVar4;
  *(int32_t *)(lVar2 + 0x3c) = uVar5;
  uVar6 = FUN_1800946d0(param_2,auStack_48);
  FUN_1800946d0(uVar6,&uStack_88,0x180bfbc10);
  puVar1 = *(uint64_t **)(param_1 + 0x1f0 + uVar7 * 8);
  *puVar1 = uStack_88;
  puVar1[1] = uStack_80;
  lVar2 = *(int64_t *)(param_1 + 0x1f0 + uVar7 * 8);
  *(uint64_t *)(lVar2 + 0x10) = uStack_78;
  *(uint64_t *)(lVar2 + 0x18) = uStack_70;
  lVar2 = *(int64_t *)(param_1 + 0x1f0 + uVar7 * 8);
  *(uint64_t *)(lVar2 + 0x20) = uStack_68;
  *(uint64_t *)(lVar2 + 0x28) = uStack_60;
  lVar2 = *(int64_t *)(param_1 + 0x1f0 + uVar7 * 8);
  *(uint64_t *)(lVar2 + 0x30) = uStack_58;
  *(uint64_t *)(lVar2 + 0x38) = uStack_50;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180492fe0(int64_t param_1)
void FUN_180492fe0(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  uint uVar14;
  int64_t lVar15;
  uint64_t uVar16;
  
  plVar1 = *(int64_t **)(param_1 + 0x70);
  uVar10 = 0;
  plVar8 = *(int64_t **)(param_1 + 0x68);
  uVar6 = 0;
  if (plVar8 != plVar1) {
    lVar11 = (int64_t)plVar1 - (int64_t)plVar8 >> 3;
    uVar3 = uVar10;
    for (lVar2 = lVar11; lVar2 != 0; lVar2 = lVar2 >> 1) {
      uVar6 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar6;
    }
    FUN_1804935b0(plVar8,plVar1,(int64_t)(int)(uVar6 - 1) * 2,0);
    if (lVar11 < 0x1d) {
      FUN_1804933a0(plVar8,plVar1);
    }
    else {
      plVar12 = plVar8 + 0x1c;
      FUN_1804933a0(plVar8,plVar12);
      for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
        lVar11 = plVar12[-1];
        lVar2 = *plVar12;
        plVar8 = plVar12;
        plVar7 = plVar12;
        if (*(uint *)(lVar2 + 0x6c) < *(uint *)(lVar11 + 0x6c)) {
          do {
            plVar8 = plVar7 + -1;
            *plVar7 = lVar11;
            lVar11 = plVar7[-2];
            plVar7 = plVar8;
          } while (*(uint *)(lVar2 + 0x6c) < *(uint *)(lVar11 + 0x6c));
        }
        *plVar8 = lVar2;
      }
    }
  }
  *(int32_t *)(param_1 + 0x88) = 0;
  *(uint64_t *)(param_1 + 0xa8) = 0;
  uVar13 = *(int64_t *)(param_1 + 0x70) - *(int64_t *)(param_1 + 0x68) >> 3;
  uVar6 = (uint)uVar13;
  uVar3 = uVar10;
  if (uVar6 != 0) {
    uVar13 = uVar13 & 0xffffffff;
    uVar16 = uVar10;
    do {
      lVar2 = *(int64_t *)(**(int64_t **)(uVar16 + *(int64_t *)(param_1 + 0x68)) + 0xb8);
      uVar14 = (int)uVar3 +
               (int)((*(int64_t *)(lVar2 + 0x48) - *(int64_t *)(lVar2 + 0x40)) / 0x88);
      uVar3 = (uint64_t)uVar14;
      *(uint *)(param_1 + 0x88) = uVar14;
      uVar13 = uVar13 - 1;
      uVar16 = uVar16 + 8;
    } while (uVar13 != 0);
  }
  uVar14 = (int)uVar3 + 1;
  uVar13 = uVar10;
  if (uVar14 != 0) {
    uVar13 = CoreMemoryPoolAllocator(system_memory_pool_ptr,(uint64_t)uVar14 * 4,CONCAT71((int7)(uVar3 >> 8),3));
    uVar3 = (uint64_t)*(uint *)(param_1 + 0x88);
  }
  *(uint64_t *)(param_1 + 0x98) = uVar13;
  uVar14 = (int)uVar3 + 1;
  uVar13 = uVar10;
  if (uVar14 != 0) {
    uVar13 = CoreMemoryPoolAllocator(system_memory_pool_ptr,(uint64_t)uVar14 * 4,CONCAT71((int7)(uVar3 >> 8),3));
    uVar3 = (uint64_t)*(uint *)(param_1 + 0x88);
  }
  *(uint64_t *)(param_1 + 0xa0) = uVar13;
  uVar13 = uVar10;
  if ((int)uVar3 != 0) {
    uVar13 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar3 * 4,CONCAT71((int7)(uVar3 >> 8),3));
  }
  *(uint64_t *)(param_1 + 0x230) = uVar13;
  uVar3 = uVar10;
  if ((uint64_t)*(uint *)(param_1 + 0x88) != 0) {
    uVar3 = CoreMemoryPoolAllocator(system_memory_pool_ptr,(uint64_t)*(uint *)(param_1 + 0x88) * 4,3);
  }
  *(uint64_t *)(param_1 + 0x238) = uVar3;
  uVar3 = uVar10;
  uVar13 = uVar10;
  if (uVar6 != 0) {
    do {
      uVar14 = (int)uVar13 + 1;
      uVar3 = (uint64_t)uVar14;
      *(int32_t *)(*(int64_t *)(param_1 + 0x98) + uVar13 * 4) = *(int32_t *)(param_1 + 0xa8);
      *(int *)(param_1 + 0xa8) =
           *(int *)(param_1 + 0xa8) +
           *(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x68) + uVar13 * 8) + 0x68);
      *(int32_t *)(*(int64_t *)(param_1 + 0xa0) + uVar13 * 4) = *(int32_t *)(param_1 + 0xac);
      *(int *)(param_1 + 0xac) =
           *(int *)(param_1 + 0xac) +
           *(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x68) + uVar13 * 8) + 0x6c);
      uVar13 = uVar3;
    } while (uVar14 < uVar6);
  }
  *(int32_t *)(uVar3 * 4 + *(int64_t *)(param_1 + 0x98)) = *(int32_t *)(param_1 + 0xa8);
  *(int32_t *)(uVar3 * 4 + *(int64_t *)(param_1 + 0xa0)) = *(int32_t *)(param_1 + 0xac);
  uVar4 = CoreMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)*(uint *)(param_1 + 0xa8) << 4,0x10,3);
  uVar5 = system_memory_pool_ptr;
  *(uint64_t *)(param_1 + 0x1b0) = uVar4;
  uVar5 = CoreMemoryPoolReallocator(uVar5,(uint64_t)*(uint *)(param_1 + 0xa8) << 4,0x10,3);
  *(uint64_t *)(param_1 + 0x1b8) = uVar5;
  if (*(int *)(param_1 + 0x88) == 0) {
    *(int8_t *)(param_1 + 0x60) = 0;
  }
  else {
    do {
      lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x68) + uVar10 * 8);
      lVar11 = *(int64_t *)(lVar2 + 0xb0);
      lVar9 = (uint64_t)*(uint *)(*(int64_t *)(param_1 + 0x98) + uVar10 * 4) * 0x10;
      lVar15 = *(int64_t *)(param_1 + 0x1b8) + lVar9;
      lVar9 = *(int64_t *)(param_1 + 0x1b0) + lVar9;
      *(int64_t *)(lVar2 + 0xb8) = lVar9;
      *(int64_t *)(lVar2 + 0xc0) = lVar15;
      *(int64_t *)(lVar11 + 0x28) = lVar9;
      *(int64_t *)(lVar11 + 0x30) = lVar15;
      lVar11 = *(int64_t *)(lVar2 + 0xb0);
      uVar6 = *(uint *)(lVar11 + 0x1c);
      uVar3 = 1;
      if (1 < *(uint *)(lVar2 + 8)) {
        do {
          lVar9 = *(int64_t *)(lVar2 + 0xc0);
          uVar14 = (int)uVar3 + 1;
          lVar15 = uVar3 * 0x38;
          *(uint64_t *)(lVar11 + 0x28 + lVar15) =
               (uint64_t)uVar6 * 0x10 + *(int64_t *)(lVar2 + 0xb8);
          *(uint64_t *)(lVar11 + 0x30 + lVar15) = lVar9 + (uint64_t)uVar6 * 0x10;
          lVar11 = *(int64_t *)(lVar2 + 0xb0);
          uVar6 = uVar6 + *(int *)(lVar11 + 0x1c + lVar15);
          uVar3 = (uint64_t)uVar14;
        } while (uVar14 < *(uint *)(lVar2 + 8));
      }
      uVar6 = (int)uVar10 + 1;
      uVar10 = (uint64_t)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x88));
    *(int8_t *)(param_1 + 0x60) = 0;
  }
  return;
}





// 函数: void FUN_1804933a0(int64_t *param_1,int64_t *param_2)
void FUN_1804933a0(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  
  if (param_1 != param_2) {
    for (plVar5 = param_1 + 1; plVar5 != param_2; plVar5 = plVar5 + 1) {
      lVar2 = *plVar5;
      plVar4 = plVar5;
      plVar3 = plVar5;
      while (plVar3 != param_1) {
        plVar1 = plVar3 + -1;
        plVar3 = plVar3 + -1;
        if (*(uint *)(*plVar1 + 0x6c) <= *(uint *)(lVar2 + 0x6c)) break;
        *plVar4 = *plVar1;
        plVar4 = plVar4 + -1;
      }
      *plVar4 = lVar2;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180493400(int64_t *param_1)
void FUN_180493400(int64_t *param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  uint64_t uVar7;
  int32_t *puVar8;
  uint uVar9;
  int32_t *puVar10;
  int32_t uVar11;
  int32_t *puStack_48;
  uint uStack_40;
  
  lVar5 = *(int64_t *)(*param_1 + 0x200);
  lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
  lVar4 = FUN_18023a940(*(uint64_t *)(*param_1 + 0x58));
  plVar2 = *(int64_t **)(lVar1 + 0x8400);
  iVar3 = (**(code **)(*plVar2 + 0x70))(plVar2,*(uint64_t *)(lVar4 + 8),0,4,0,&puStack_48);
  if (iVar3 < 0) {
    FUN_180220810(iVar3,&ui_system_data_1856_ptr);
  }
  uVar9 = 0;
  puVar10 = puStack_48;
  do {
    uVar7 = 0;
    puVar8 = puVar10;
    do {
      uVar11 = powf(*(int32_t *)
                     (lVar5 + (int64_t)
                              (int)(((uint)uVar7 & 1) +
                                   ((uVar9 & 1) + ((int)(uVar7 >> 1) + (uVar9 >> 1) * 0x140) * 2) *
                                   2) * 4),0x3e800000);
      uVar6 = (uint)uVar7 + 1;
      uVar7 = (uint64_t)uVar6;
      *puVar8 = uVar11;
      puVar8 = puVar8 + 1;
    } while ((int)uVar6 < 0x280);
    puVar10 = (int32_t *)((int64_t)puVar10 + (uint64_t)uStack_40);
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x168);
  plVar2 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x78);
  lVar5 = FUN_18023a940(*(uint64_t *)(*param_1 + 0x58));
                    // WARNING: Could not recover jumptable at 0x000180493561. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(plVar2,*(uint64_t *)(lVar5 + 8),0);
  return;
}





// 函数: void FUN_1804935b0(int64_t *param_1,int64_t *param_2,int64_t param_3,int8_t param_4)
void FUN_1804935b0(int64_t *param_1,int64_t *param_2,int64_t param_3,int8_t param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int64_t *plVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t lVar11;
  
  uVar6 = (int64_t)param_2 - (int64_t)param_1;
  while ((0xe0 < (int64_t)(uVar6 & 0xfffffffffffffff8) && (0 < param_3))) {
    lVar7 = (int64_t)param_2 - (int64_t)param_1 >> 3;
    if (lVar7 < 0) {
      lVar7 = lVar7 + 1;
    }
    lVar9 = *param_1;
    uVar1 = *(uint *)(lVar9 + 0x6c);
    lVar7 = param_1[lVar7 >> 1];
    uVar2 = *(uint *)(param_2[-1] + 0x6c);
    uVar3 = *(uint *)(lVar7 + 0x6c);
    lVar11 = lVar9;
    uVar5 = uVar3;
    if (uVar1 < uVar3) {
      lVar11 = lVar7;
      lVar7 = lVar9;
      uVar5 = uVar1;
      uVar1 = uVar3;
    }
    plVar8 = param_2;
    plVar10 = param_1;
    if ((uVar2 <= uVar1) && (lVar11 = lVar7, uVar5 < uVar2)) {
      lVar11 = param_2[-1];
    }
    while( true ) {
      while (*(uint *)(lVar9 + 0x6c) < *(uint *)(lVar11 + 0x6c)) {
        lVar9 = plVar10[1];
        plVar10 = plVar10 + 1;
      }
      uVar2 = *(uint *)(plVar8[-1] + 0x6c);
      while (plVar4 = plVar8 + -1, *(uint *)(lVar11 + 0x6c) < uVar2) {
        uVar2 = *(uint *)(plVar8[-2] + 0x6c);
        plVar8 = plVar4;
      }
      if (plVar4 <= plVar10) break;
      lVar7 = *plVar10;
      *plVar10 = *plVar4;
      *plVar4 = lVar7;
      lVar9 = plVar10[1];
      plVar8 = plVar4;
      plVar10 = plVar10 + 1;
    }
    param_3 = param_3 + -1;
    FUN_1804935b0(plVar10,param_2,param_3,param_4);
    uVar6 = (int64_t)plVar10 - (int64_t)param_1;
    param_2 = plVar10;
  }
  if (param_3 == 0) {
    FUN_1804936f0(param_1,param_2,param_2,param_4);
  }
  return;
}





// 函数: void FUN_1804935bd(int64_t *param_1,int64_t *param_2,int64_t param_3,int8_t param_4)
void FUN_1804935bd(int64_t *param_1,int64_t *param_2,int64_t param_3,int8_t param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int64_t *plVar4;
  uint uVar5;
  int64_t in_RAX;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t lVar11;
  
  uVar6 = in_RAX - (int64_t)param_1;
  while ((0xe0 < (int64_t)(uVar6 & 0xfffffffffffffff8) && (0 < param_3))) {
    lVar7 = (int64_t)param_2 - (int64_t)param_1 >> 3;
    if (lVar7 < 0) {
      lVar7 = lVar7 + 1;
    }
    lVar9 = *param_1;
    uVar1 = *(uint *)(lVar9 + 0x6c);
    lVar7 = param_1[lVar7 >> 1];
    uVar2 = *(uint *)(param_2[-1] + 0x6c);
    uVar3 = *(uint *)(lVar7 + 0x6c);
    lVar11 = lVar9;
    uVar5 = uVar3;
    if (uVar1 < uVar3) {
      lVar11 = lVar7;
      lVar7 = lVar9;
      uVar5 = uVar1;
      uVar1 = uVar3;
    }
    plVar8 = param_2;
    plVar10 = param_1;
    if ((uVar2 <= uVar1) && (lVar11 = lVar7, uVar5 < uVar2)) {
      lVar11 = param_2[-1];
    }
    while( true ) {
      while (*(uint *)(lVar9 + 0x6c) < *(uint *)(lVar11 + 0x6c)) {
        lVar9 = plVar10[1];
        plVar10 = plVar10 + 1;
      }
      uVar2 = *(uint *)(plVar8[-1] + 0x6c);
      while (plVar4 = plVar8 + -1, *(uint *)(lVar11 + 0x6c) < uVar2) {
        uVar2 = *(uint *)(plVar8[-2] + 0x6c);
        plVar8 = plVar4;
      }
      if (plVar4 <= plVar10) break;
      lVar7 = *plVar10;
      *plVar10 = *plVar4;
      *plVar4 = lVar7;
      lVar9 = plVar10[1];
      plVar8 = plVar4;
      plVar10 = plVar10 + 1;
    }
    param_3 = param_3 + -1;
    FUN_1804935b0(plVar10,param_2,param_3,param_4);
    uVar6 = (int64_t)plVar10 - (int64_t)param_1;
    param_2 = plVar10;
  }
  if (param_3 == 0) {
    FUN_1804936f0(param_1,param_2,param_2,param_4);
  }
  return;
}





// 函数: void FUN_1804935e2(void)
void FUN_1804935e2(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int64_t *plVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int8_t unaff_BL;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int64_t *plVar9;
  int64_t lVar10;
  int64_t *in_R11;
  
  do {
    if (unaff_RBP < 1) break;
    lVar6 = (int64_t)in_R11 - (int64_t)unaff_RSI >> 3;
    if (lVar6 < 0) {
      lVar6 = lVar6 + 1;
    }
    lVar8 = *unaff_RSI;
    uVar1 = *(uint *)(lVar8 + 0x6c);
    lVar6 = unaff_RSI[lVar6 >> 1];
    uVar2 = *(uint *)(in_R11[-1] + 0x6c);
    uVar3 = *(uint *)(lVar6 + 0x6c);
    lVar10 = lVar8;
    uVar5 = uVar3;
    if (uVar1 < uVar3) {
      lVar10 = lVar6;
      lVar6 = lVar8;
      uVar5 = uVar1;
      uVar1 = uVar3;
    }
    plVar7 = in_R11;
    plVar9 = unaff_RSI;
    if ((uVar2 <= uVar1) && (lVar10 = lVar6, uVar5 < uVar2)) {
      lVar10 = in_R11[-1];
    }
    while( true ) {
      while (*(uint *)(lVar8 + 0x6c) < *(uint *)(lVar10 + 0x6c)) {
        lVar8 = plVar9[1];
        plVar9 = plVar9 + 1;
      }
      uVar2 = *(uint *)(plVar7[-1] + 0x6c);
      while (plVar4 = plVar7 + -1, *(uint *)(lVar10 + 0x6c) < uVar2) {
        uVar2 = *(uint *)(plVar7[-2] + 0x6c);
        plVar7 = plVar4;
      }
      if (plVar4 <= plVar9) break;
      lVar6 = *plVar9;
      *plVar9 = *plVar4;
      *plVar4 = lVar6;
      lVar8 = plVar9[1];
      plVar7 = plVar4;
      plVar9 = plVar9 + 1;
    }
    unaff_RBP = unaff_RBP + -1;
    FUN_1804935b0(plVar9,in_R11,unaff_RBP,unaff_BL);
    in_R11 = plVar9;
  } while (0xe0 < (int64_t)((int64_t)plVar9 - (int64_t)unaff_RSI & 0xfffffffffffffff8U));
  if (unaff_RBP == 0) {
    FUN_1804936f0();
  }
  return;
}





// 函数: void FUN_1804936ba(void)
void FUN_1804936ba(void)

{
  int64_t unaff_RBP;
  
  if (unaff_RBP == 0) {
    FUN_1804936f0();
  }
  return;
}





// 函数: void FUN_1804936c4(void)
void FUN_1804936c4(void)

{
  FUN_1804936f0();
  return;
}





// 函数: void FUN_1804936f0(int64_t *param_1,int64_t *param_2,int64_t *param_3)
void FUN_1804936f0(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  bool bVar10;
  
  uVar7 = (int64_t)param_2 - (int64_t)param_1 >> 3;
  if (1 < (int64_t)uVar7) {
    uVar3 = ((int64_t)(uVar7 - 2) >> 1) + 1;
    uVar4 = uVar3 * 2 + 2;
    do {
      lVar1 = param_1[uVar3 - 1];
      uVar3 = uVar3 - 1;
      uVar4 = uVar4 - 2;
      uVar5 = uVar3;
      uVar2 = uVar4;
      while ((int64_t)uVar2 < (int64_t)uVar7) {
        uVar9 = uVar2 - 1;
        if (*(uint *)(param_1[uVar2 - 1] + 0x6c) <= *(uint *)(param_1[uVar2] + 0x6c)) {
          uVar9 = uVar2;
        }
        param_1[uVar5] = param_1[uVar9];
        uVar5 = uVar9;
        uVar2 = uVar9 * 2 + 2;
      }
      if (uVar2 == uVar7) {
        param_1[uVar5] = param_1[uVar2 - 1];
        uVar5 = uVar2 - 1;
      }
      while ((int64_t)uVar3 < (int64_t)uVar5) {
        uVar2 = (int64_t)(uVar5 - 1) >> 1;
        if (*(uint *)(lVar1 + 0x6c) <= *(uint *)(param_1[uVar2] + 0x6c)) break;
        param_1[uVar5] = param_1[uVar2];
        uVar5 = uVar2;
      }
      param_1[uVar5] = lVar1;
    } while (uVar3 != 0);
  }
  uVar3 = 0;
  uVar4 = (uint64_t)((int64_t)param_3 + (7 - (int64_t)param_2)) >> 3;
  if (param_3 < param_2) {
    uVar4 = uVar3;
  }
  uVar5 = uVar3;
  plVar6 = param_2;
  if (uVar4 != 0) {
    do {
      lVar1 = *plVar6;
      if (*(uint *)(lVar1 + 0x6c) < *(uint *)(*param_1 + 0x6c)) {
        uVar9 = 2;
        *plVar6 = *param_1;
        bVar10 = uVar7 == 2;
        uVar8 = uVar3;
        uVar2 = uVar3;
        if (2 < (int64_t)uVar7) {
          do {
            uVar2 = uVar9 - 1;
            if (*(uint *)(param_1[uVar9 - 1] + 0x6c) <= *(uint *)(param_1[uVar9] + 0x6c)) {
              uVar2 = uVar9;
            }
            uVar9 = uVar2 * 2 + 2;
            param_1[uVar8] = param_1[uVar2];
            bVar10 = uVar9 == uVar7;
            uVar8 = uVar2;
          } while ((int64_t)uVar9 < (int64_t)uVar7);
        }
        if (bVar10) {
          param_1[uVar2] = param_1[uVar9 - 1];
          uVar2 = uVar9 - 1;
        }
        while (0 < (int64_t)uVar2) {
          uVar9 = (int64_t)(uVar2 - 1) >> 1;
          if (*(uint *)(lVar1 + 0x6c) <= *(uint *)(param_1[uVar9] + 0x6c)) break;
          param_1[uVar2] = param_1[uVar9];
          uVar2 = uVar9;
        }
        param_1[uVar2] = lVar1;
      }
      uVar5 = uVar5 + 1;
      plVar6 = plVar6 + 1;
    } while (uVar5 < uVar4);
  }
  if (1 < (int64_t)uVar7) {
    param_2 = param_2 + -1;
    do {
      uVar7 = uVar7 - 1;
      lVar1 = *param_2;
      uVar5 = 2;
      *param_2 = *param_1;
      bVar10 = uVar7 == 2;
      uVar4 = uVar3;
      uVar2 = uVar3;
      if (2 < (int64_t)uVar7) {
        do {
          uVar4 = uVar5 - 1;
          if (*(uint *)(param_1[uVar5 - 1] + 0x6c) <= *(uint *)(param_1[uVar5] + 0x6c)) {
            uVar4 = uVar5;
          }
          uVar5 = uVar4 * 2 + 2;
          param_1[uVar2] = param_1[uVar4];
          bVar10 = uVar5 == uVar7;
          uVar2 = uVar4;
        } while ((int64_t)uVar5 < (int64_t)uVar7);
      }
      if (bVar10) {
        param_1[uVar4] = param_1[uVar5 - 1];
        uVar4 = uVar5 - 1;
      }
      while (0 < (int64_t)uVar4) {
        uVar7 = (int64_t)(uVar4 - 1) >> 1;
        if (*(uint *)(lVar1 + 0x6c) <= *(uint *)(param_1[uVar7] + 0x6c)) break;
        param_1[uVar4] = param_1[uVar7];
        uVar4 = uVar7;
      }
      param_2 = param_2 + -1;
      param_1[uVar4] = lVar1;
      uVar7 = (8 - (int64_t)param_1) + (int64_t)param_2 >> 3;
    } while (1 < (int64_t)uVar7);
  }
  return;
}





// 函数: void FUN_180493704(int64_t *param_1,int64_t *param_2,int64_t *param_3)
void FUN_180493704(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t unaff_RDI;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  bool bVar10;
  
  uVar7 = unaff_RDI - (int64_t)param_1 >> 3;
  if (1 < (int64_t)uVar7) {
    uVar3 = ((int64_t)(uVar7 - 2) >> 1) + 1;
    uVar4 = uVar3 * 2 + 2;
    do {
      lVar1 = param_1[uVar3 - 1];
      uVar3 = uVar3 - 1;
      uVar4 = uVar4 - 2;
      uVar5 = uVar3;
      uVar2 = uVar4;
      while ((int64_t)uVar2 < (int64_t)uVar7) {
        uVar9 = uVar2 - 1;
        if (*(uint *)(param_1[uVar2 - 1] + 0x6c) <= *(uint *)(param_1[uVar2] + 0x6c)) {
          uVar9 = uVar2;
        }
        param_1[uVar5] = param_1[uVar9];
        uVar5 = uVar9;
        uVar2 = uVar9 * 2 + 2;
      }
      if (uVar2 == uVar7) {
        param_1[uVar5] = param_1[uVar2 - 1];
        uVar5 = uVar2 - 1;
      }
      while ((int64_t)uVar3 < (int64_t)uVar5) {
        uVar2 = (int64_t)(uVar5 - 1) >> 1;
        if (*(uint *)(lVar1 + 0x6c) <= *(uint *)(param_1[uVar2] + 0x6c)) break;
        param_1[uVar5] = param_1[uVar2];
        uVar5 = uVar2;
      }
      param_1[uVar5] = lVar1;
    } while (uVar3 != 0);
  }
  uVar3 = 0;
  uVar4 = (uint64_t)((int64_t)param_3 + (7 - (int64_t)param_2)) >> 3;
  if (param_3 < param_2) {
    uVar4 = uVar3;
  }
  uVar5 = uVar3;
  plVar6 = param_2;
  if (uVar4 != 0) {
    do {
      lVar1 = *plVar6;
      if (*(uint *)(lVar1 + 0x6c) < *(uint *)(*param_1 + 0x6c)) {
        uVar9 = 2;
        *plVar6 = *param_1;
        bVar10 = uVar7 == 2;
        uVar8 = uVar3;
        uVar2 = uVar3;
        if (2 < (int64_t)uVar7) {
          do {
            uVar2 = uVar9 - 1;
            if (*(uint *)(param_1[uVar9 - 1] + 0x6c) <= *(uint *)(param_1[uVar9] + 0x6c)) {
              uVar2 = uVar9;
            }
            uVar9 = uVar2 * 2 + 2;
            param_1[uVar8] = param_1[uVar2];
            bVar10 = uVar9 == uVar7;
            uVar8 = uVar2;
          } while ((int64_t)uVar9 < (int64_t)uVar7);
        }
        if (bVar10) {
          param_1[uVar2] = param_1[uVar9 - 1];
          uVar2 = uVar9 - 1;
        }
        while (0 < (int64_t)uVar2) {
          uVar9 = (int64_t)(uVar2 - 1) >> 1;
          if (*(uint *)(lVar1 + 0x6c) <= *(uint *)(param_1[uVar9] + 0x6c)) break;
          param_1[uVar2] = param_1[uVar9];
          uVar2 = uVar9;
        }
        param_1[uVar2] = lVar1;
      }
      uVar5 = uVar5 + 1;
      plVar6 = plVar6 + 1;
    } while (uVar5 < uVar4);
  }
  if (1 < (int64_t)uVar7) {
    param_2 = param_2 + -1;
    do {
      uVar7 = uVar7 - 1;
      lVar1 = *param_2;
      uVar5 = 2;
      *param_2 = *param_1;
      bVar10 = uVar7 == 2;
      uVar4 = uVar3;
      uVar2 = uVar3;
      if (2 < (int64_t)uVar7) {
        do {
          uVar4 = uVar5 - 1;
          if (*(uint *)(param_1[uVar5 - 1] + 0x6c) <= *(uint *)(param_1[uVar5] + 0x6c)) {
            uVar4 = uVar5;
          }
          uVar5 = uVar4 * 2 + 2;
          param_1[uVar2] = param_1[uVar4];
          bVar10 = uVar5 == uVar7;
          uVar2 = uVar4;
        } while ((int64_t)uVar5 < (int64_t)uVar7);
      }
      if (bVar10) {
        param_1[uVar4] = param_1[uVar5 - 1];
        uVar4 = uVar5 - 1;
      }
      while (0 < (int64_t)uVar4) {
        uVar7 = (int64_t)(uVar4 - 1) >> 1;
        if (*(uint *)(lVar1 + 0x6c) <= *(uint *)(param_1[uVar7] + 0x6c)) break;
        param_1[uVar4] = param_1[uVar7];
        uVar4 = uVar7;
      }
      param_2 = param_2 + -1;
      param_1[uVar4] = lVar1;
      uVar7 = (8 - (int64_t)param_1) + (int64_t)param_2 >> 3;
    } while (1 < (int64_t)uVar7);
  }
  return;
}





// 函数: void FUN_18049370c(int64_t *param_1,int64_t *param_2,int64_t *param_3)
void FUN_18049370c(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t unaff_RDI;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  bool bVar10;
  
  uVar7 = unaff_RDI >> 3;
  if (1 < (int64_t)uVar7) {
    uVar3 = ((int64_t)(uVar7 - 2) >> 1) + 1;
    uVar4 = uVar3 * 2 + 2;
    do {
      lVar1 = param_1[uVar3 - 1];
      uVar3 = uVar3 - 1;
      uVar4 = uVar4 - 2;
      uVar5 = uVar3;
      uVar2 = uVar4;
      while ((int64_t)uVar2 < (int64_t)uVar7) {
        uVar9 = uVar2 - 1;
        if (*(uint *)(param_1[uVar2 - 1] + 0x6c) <= *(uint *)(param_1[uVar2] + 0x6c)) {
          uVar9 = uVar2;
        }
        param_1[uVar5] = param_1[uVar9];
        uVar5 = uVar9;
        uVar2 = uVar9 * 2 + 2;
      }
      if (uVar2 == uVar7) {
        param_1[uVar5] = param_1[uVar2 - 1];
        uVar5 = uVar2 - 1;
      }
      while ((int64_t)uVar3 < (int64_t)uVar5) {
        uVar2 = (int64_t)(uVar5 - 1) >> 1;
        if (*(uint *)(lVar1 + 0x6c) <= *(uint *)(param_1[uVar2] + 0x6c)) break;
        param_1[uVar5] = param_1[uVar2];
        uVar5 = uVar2;
      }
      param_1[uVar5] = lVar1;
    } while (uVar3 != 0);
  }
  uVar3 = 0;
  uVar4 = (uint64_t)((int64_t)param_3 + (7 - (int64_t)param_2)) >> 3;
  if (param_3 < param_2) {
    uVar4 = uVar3;
  }
  uVar5 = uVar3;
  plVar6 = param_2;
  if (uVar4 != 0) {
    do {
      lVar1 = *plVar6;
      if (*(uint *)(lVar1 + 0x6c) < *(uint *)(*param_1 + 0x6c)) {
        uVar9 = 2;
        *plVar6 = *param_1;
        bVar10 = uVar7 == 2;
        uVar8 = uVar3;
        uVar2 = uVar3;
        if (2 < (int64_t)uVar7) {
          do {
            uVar2 = uVar9 - 1;
            if (*(uint *)(param_1[uVar9 - 1] + 0x6c) <= *(uint *)(param_1[uVar9] + 0x6c)) {
              uVar2 = uVar9;
            }
            uVar9 = uVar2 * 2 + 2;
            param_1[uVar8] = param_1[uVar2];
            bVar10 = uVar9 == uVar7;
            uVar8 = uVar2;
          } while ((int64_t)uVar9 < (int64_t)uVar7);
        }
        if (bVar10) {
          param_1[uVar2] = param_1[uVar9 - 1];
          uVar2 = uVar9 - 1;
        }
        while (0 < (int64_t)uVar2) {
          uVar9 = (int64_t)(uVar2 - 1) >> 1;
          if (*(uint *)(lVar1 + 0x6c) <= *(uint *)(param_1[uVar9] + 0x6c)) break;
          param_1[uVar2] = param_1[uVar9];
          uVar2 = uVar9;
        }
        param_1[uVar2] = lVar1;
      }
      uVar5 = uVar5 + 1;
      plVar6 = plVar6 + 1;
    } while (uVar5 < uVar4);
  }
  if (1 < (int64_t)uVar7) {
    param_2 = param_2 + -1;
    do {
      uVar7 = uVar7 - 1;
      lVar1 = *param_2;
      uVar5 = 2;
      *param_2 = *param_1;
      bVar10 = uVar7 == 2;
      uVar4 = uVar3;
      uVar2 = uVar3;
      if (2 < (int64_t)uVar7) {
        do {
          uVar4 = uVar5 - 1;
          if (*(uint *)(param_1[uVar5 - 1] + 0x6c) <= *(uint *)(param_1[uVar5] + 0x6c)) {
            uVar4 = uVar5;
          }
          uVar5 = uVar4 * 2 + 2;
          param_1[uVar2] = param_1[uVar4];
          bVar10 = uVar5 == uVar7;
          uVar2 = uVar4;
        } while ((int64_t)uVar5 < (int64_t)uVar7);
      }
      if (bVar10) {
        param_1[uVar4] = param_1[uVar5 - 1];
        uVar4 = uVar5 - 1;
      }
      while (0 < (int64_t)uVar4) {
        uVar7 = (int64_t)(uVar4 - 1) >> 1;
        if (*(uint *)(lVar1 + 0x6c) <= *(uint *)(param_1[uVar7] + 0x6c)) break;
        param_1[uVar4] = param_1[uVar7];
        uVar4 = uVar7;
      }
      param_2 = param_2 + -1;
      param_1[uVar4] = lVar1;
      uVar7 = (8 - (int64_t)param_1) + (int64_t)param_2 >> 3;
    } while (1 < (int64_t)uVar7);
  }
  return;
}





