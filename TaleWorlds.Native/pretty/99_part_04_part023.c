#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part023.c - 4 个函数

// 函数: void FUN_18026d3f0(int64_t param_1,int64_t param_2)
void FUN_18026d3f0(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  int iVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t *plVar15;
  int64_t lVar16;
  int64_t lStackX_18;
  uint64_t uVar17;
  int64_t *plVar18;
  int64_t *plVar19;
  int64_t *plVar20;
  int64_t *plVar21;
  int32_t uVar22;
  
  uVar17 = 0xfffffffffffffffe;
  FUN_180627be0();
  plVar20 = (int64_t *)(param_1 + 0x40);
  if (plVar20 != (int64_t *)(param_2 + 0x40)) {
    lVar9 = *(int64_t *)(param_2 + 0x48);
    lVar13 = *(int64_t *)(param_2 + 0x40);
    lVar16 = lVar9 - lVar13;
    uVar14 = lVar16 >> 2;
    lVar6 = *plVar20;
    if ((uint64_t)(*(int64_t *)(param_1 + 0x50) - lVar6 >> 2) < uVar14) {
      if (uVar14 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = FUN_18062b420(system_memory_pool_ptr,uVar14 * 4,*(int8_t *)(param_1 + 0x58));
      }
      if (lVar13 != lVar9) {
                    // WARNING: Subroutine does not return
        memmove(lVar6,lVar13,lVar16);
      }
      if (*plVar20 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *plVar20 = lVar6;
      lVar6 = lVar6 + uVar14 * 4;
      *(int64_t *)(param_1 + 0x48) = lVar6;
      *(int64_t *)(param_1 + 0x50) = lVar6;
    }
    else {
      lVar2 = *(int64_t *)(param_1 + 0x48);
      uVar7 = lVar2 - lVar6 >> 2;
      if (uVar7 < uVar14) {
        lVar1 = uVar7 * 4;
        lVar16 = lVar13 + lVar1;
        if (lVar13 != lVar16) {
                    // WARNING: Subroutine does not return
          memmove(lVar6,lVar13,lVar1,lVar2,uVar17);
        }
        if (lVar16 != lVar9) {
                    // WARNING: Subroutine does not return
          memmove(lVar2,lVar16,lVar9 - lVar16,lVar2,uVar17);
        }
        *(int64_t *)(param_1 + 0x48) = lVar2;
      }
      else {
        if (lVar13 != lVar9) {
                    // WARNING: Subroutine does not return
          memmove(lVar6,lVar13,lVar16,lVar2,uVar17);
        }
        *(int64_t *)(param_1 + 0x48) = lVar6;
      }
    }
  }
  plVar8 = (int64_t *)0x0;
  plVar20 = (int64_t *)0x0;
  uVar22 = 3;
  lVar9 = *(int64_t *)(param_2 + 0x28);
  lVar13 = lVar9 - *(int64_t *)(param_2 + 0x20) >> 3;
  if (lVar13 != 0) {
    plVar8 = (int64_t *)FUN_18062b420(system_memory_pool_ptr,lVar13 * 8,3);
    plVar20 = plVar8 + lVar13;
    lVar9 = *(int64_t *)(param_2 + 0x28);
  }
  lVar9 = (int64_t)(int)(lVar9 - *(int64_t *)(param_2 + 0x20) >> 3);
  plVar11 = plVar8;
  if (0 < lVar9) {
    lStackX_18 = 0;
    plVar15 = plVar8;
    plVar18 = plVar8;
    plVar19 = plVar8;
    plVar21 = plVar20;
    do {
      plVar3 = *(int64_t **)(*(int64_t *)(param_2 + 0x20) + lStackX_18 * 8);
      lVar13 = *(int64_t *)(param_1 + 0x20);
      lVar6 = 0;
      iVar5 = (int)(*(int64_t *)(param_1 + 0x28) - lVar13 >> 3);
      plVar11 = plVar15;
      if (0 < iVar5) {
        do {
          plVar4 = *(int64_t **)(lVar13 + lVar6 * 8);
          if ((*plVar4 == *plVar3) && (plVar4[1] == plVar3[1])) {
            if (plVar4 != (int64_t *)0x0) {
              if (plVar8 < plVar20) {
                *plVar8 = (int64_t)plVar4;
              }
              else {
                lVar6 = (int64_t)plVar8 - (int64_t)plVar15 >> 3;
                if (lVar6 == 0) {
                  lVar6 = 1;
LAB_18026d697:
                  plVar11 = (int64_t *)
                            FUN_18062b420(system_memory_pool_ptr,lVar6 * 8,
                                          CONCAT71((int7)((uint64_t)lVar13 >> 8),3));
                }
                else {
                  lVar6 = lVar6 * 2;
                  if (lVar6 != 0) goto LAB_18026d697;
                  plVar11 = (int64_t *)0x0;
                }
                if (plVar15 != plVar8) {
                    // WARNING: Subroutine does not return
                  memmove(plVar11,plVar15,(int64_t)plVar8 - (int64_t)plVar15);
                }
                *plVar11 = (int64_t)plVar4;
                if (plVar15 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900(plVar15);
                }
                plVar20 = plVar11 + lVar6;
                plVar18 = plVar11;
                plVar21 = plVar20;
                plVar8 = plVar11;
              }
              plVar8 = plVar8 + 1;
              plVar19 = plVar8;
              FUN_180267ee0(plVar4,plVar3,0);
              goto LAB_18026d794;
            }
            break;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < iVar5);
      }
      uVar10 = FUN_18062b1e0(system_memory_pool_ptr,0x900,8,0xd,uVar17,plVar18,plVar19,plVar21,uVar22);
      lVar13 = FUN_1802699c0(uVar10,plVar3);
      FUN_180267ee0(lVar13,plVar3,0);
      if (plVar8 < plVar20) {
        *plVar8 = lVar13;
      }
      else {
        lVar6 = (int64_t)plVar8 - (int64_t)plVar15 >> 3;
        if (lVar6 == 0) {
          lVar6 = 1;
LAB_18026d731:
          plVar11 = (int64_t *)FUN_18062b420(system_memory_pool_ptr,lVar6 * 8,3);
        }
        else {
          lVar6 = lVar6 * 2;
          if (lVar6 != 0) goto LAB_18026d731;
          plVar11 = (int64_t *)0x0;
        }
        if (plVar15 != plVar8) {
                    // WARNING: Subroutine does not return
          memmove(plVar11,plVar15,(int64_t)plVar8 - (int64_t)plVar15);
        }
        *plVar11 = lVar13;
        if (plVar15 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar15);
        }
        plVar20 = plVar11 + lVar6;
        plVar18 = plVar11;
        plVar21 = plVar20;
        plVar8 = plVar11;
      }
      plVar8 = plVar8 + 1;
      plVar19 = plVar8;
LAB_18026d794:
      lStackX_18 = lStackX_18 + 1;
      plVar15 = plVar11;
    } while (lStackX_18 < lVar9);
  }
  lVar9 = *(int64_t *)(param_1 + 0x20);
  *(int64_t **)(param_1 + 0x20) = plVar11;
  lVar13 = *(int64_t *)(param_1 + 0x28);
  *(int64_t **)(param_1 + 0x28) = plVar8;
  *(int64_t **)(param_1 + 0x30) = plVar20;
  *(int32_t *)(param_1 + 0x38) = 3;
  iVar5 = (int)(lVar13 - lVar9 >> 3);
  if (0 < iVar5) {
    lVar13 = 0;
    do {
      plVar20 = *(int64_t **)(lVar9 + lVar13 * 8);
      lVar6 = 0;
      iVar12 = (int)(*(int64_t *)(param_1 + 0x28) - *(int64_t *)(param_1 + 0x20) >> 3);
      if (0 < iVar12) {
        do {
          plVar8 = *(int64_t **)(*(int64_t *)(param_1 + 0x20) + lVar6 * 8);
          if ((*plVar8 == *plVar20) && (plVar8[1] == plVar20[1])) {
            if (plVar8 != (int64_t *)0x0) goto LAB_18026d86a;
            break;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < iVar12);
      }
      if (plVar20 != (int64_t *)0x0) {
        FUN_18026dbe0(plVar20);
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar20);
      }
LAB_18026d86a:
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar5);
  }
  if (lVar9 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar9);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18026d890(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  
  *param_1 = &system_state_ptr;
  puVar3 = (int32_t *)0x0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(int32_t *)(param_1 + 7) = 3;
  plVar1 = param_1 + 8;
  *plVar1 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xb) = 3;
  puVar5 = (int32_t *)param_1[9];
  if (puVar5 < (int32_t *)param_1[10]) {
    *puVar5 = 0;
    param_1[9] = param_1[9] + 4;
    return param_1;
  }
  puVar4 = (int32_t *)*plVar1;
  lVar2 = (int64_t)puVar5 - (int64_t)puVar4 >> 2;
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar2 * 2;
    if (lVar2 == 0) goto LAB_18026d976;
  }
  puVar3 = (int32_t *)
           FUN_18062b420(system_memory_pool_ptr,lVar2 * 4,*(int8_t *)(param_1 + 0xb),param_4,
                         0xfffffffffffffffe);
  puVar5 = (int32_t *)param_1[9];
  puVar4 = (int32_t *)*plVar1;
LAB_18026d976:
  if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
    memmove(puVar3,puVar4,(int64_t)puVar5 - (int64_t)puVar4);
  }
  *puVar3 = 0;
  if (*plVar1 == 0) {
    *plVar1 = (int64_t)puVar3;
    param_1[9] = puVar3 + 1;
    param_1[10] = puVar3 + lVar2;
    return param_1;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_18026d9d0(uint64_t *param_1)
void FUN_18026d9d0(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  
  plVar1 = param_1 + 4;
  iVar3 = (int)(param_1[5] - *plVar1 >> 3);
  lVar4 = 0;
  if (0 < iVar3) {
    do {
      lVar2 = *(int64_t *)(*plVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_18026dbe0(lVar2);
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(*plVar1 + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if (param_1[8] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] == 0) {
    param_1[1] = 0;
    *(int32_t *)(param_1 + 3) = 0;
    *param_1 = &system_state_ptr;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



uint64_t * FUN_18026daf0(uint64_t *param_1,int64_t param_2)

{
  FUN_18026ead0();
  *param_1 = &unknown_var_7360_ptr;
  *(int32_t *)(param_1 + 5) = *(int32_t *)(param_2 + 0x28);
  *(int32_t *)((int64_t)param_1 + 0x2c) = *(int32_t *)(param_2 + 0x2c);
  *param_1 = &unknown_var_7264_ptr;
  *param_1 = &unknown_var_7168_ptr;
  FUN_18026e450(param_1);
  return param_1;
}



uint64_t *
FUN_18026db60(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_7440_ptr;
  FUN_1802708b0(param_1 + 1);
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if ((param_2 & 1) != 0) {
    free(param_1,0xb0,param_3,param_4,uVar1);
  }
  return param_1;
}






// 函数: void FUN_18026dbe0(int64_t param_1)
void FUN_18026dbe0(int64_t param_1)

{
  *(uint64_t *)(param_1 + 0x8d8) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x8e0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x8e0) = 0;
  *(int32_t *)(param_1 + 0x8f0) = 0;
  *(uint64_t *)(param_1 + 0x8d8) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x8b8) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x8c0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x8c0) = 0;
  *(int32_t *)(param_1 + 0x8d0) = 0;
  *(uint64_t *)(param_1 + 0x8b8) = &system_state_ptr;
  if (*(int64_t *)(param_1 + 0x868) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(int64_t *)(param_1 + 0x7c0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(int64_t *)(param_1 + 0x7a0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(void **)(param_1 + 0x430) = &unknown_var_7440_ptr;
  FUN_1802708b0((int64_t *)(param_1 + 0x438));
  if (*(int64_t *)(param_1 + 0x438) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(void **)(param_1 + 0x3f8) = &unknown_var_7440_ptr;
  FUN_1802708b0((int64_t *)(param_1 + 0x400));
  if (*(int64_t *)(param_1 + 0x400) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(void **)(param_1 + 0x3c0) = &unknown_var_7440_ptr;
  FUN_1802708b0((int64_t *)(param_1 + 0x3c8));
  if (*(int64_t *)(param_1 + 0x3c8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(void **)(param_1 + 0x388) = &unknown_var_7440_ptr;
  FUN_1802708b0((int64_t *)(param_1 + 0x390));
  if (*(int64_t *)(param_1 + 0x390) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(void **)(param_1 + 0x350) = &unknown_var_7440_ptr;
  FUN_1802708b0((int64_t *)(param_1 + 0x358));
  if (*(int64_t *)(param_1 + 0x358) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(void **)(param_1 + 0x318) = &unknown_var_7440_ptr;
  FUN_1802708b0((int64_t *)(param_1 + 800));
  if (*(int64_t *)(param_1 + 800) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(void **)(param_1 + 0x2e0) = &unknown_var_7440_ptr;
  FUN_1802708b0((int64_t *)(param_1 + 0x2e8));
  if (*(int64_t *)(param_1 + 0x2e8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_180269f50(param_1 + 0x270);
  *(void **)(param_1 + 0x240) = &unknown_var_7440_ptr;
  FUN_1802708b0((int64_t *)(param_1 + 0x248));
  if (*(int64_t *)(param_1 + 0x248) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(void **)(param_1 + 0x208) = &unknown_var_7440_ptr;
  FUN_1802708b0((int64_t *)(param_1 + 0x210));
  if (*(int64_t *)(param_1 + 0x210) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(void **)(param_1 + 0x1d0) = &unknown_var_7440_ptr;
  FUN_1802708b0((int64_t *)(param_1 + 0x1d8));
  if (*(int64_t *)(param_1 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(void **)(param_1 + 0x198) = &unknown_var_7440_ptr;
  FUN_1802708b0((int64_t *)(param_1 + 0x1a0));
  if (*(int64_t *)(param_1 + 0x1a0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(void **)(param_1 + 0x160) = &unknown_var_7440_ptr;
  FUN_1802708b0((int64_t *)(param_1 + 0x168));
  if (*(int64_t *)(param_1 + 0x168) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(void **)(param_1 + 0x108) = &unknown_var_7440_ptr;
  FUN_1802708b0((int64_t *)(param_1 + 0x110));
  if (*(int64_t *)(param_1 + 0x110) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x40) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x48) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(int32_t *)(param_1 + 0x58) = 0;
  *(uint64_t *)(param_1 + 0x40) = &system_state_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18026dfc0(int64_t *param_1,uint64_t param_2)
void FUN_18026dfc0(int64_t *param_1,uint64_t param_2)

{
  int32_t uVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  
  puVar6 = (uint64_t *)param_1[1];
  if (param_2 <= (uint64_t)((param_1[2] - (int64_t)puVar6) / 0x28)) {
    if (param_2 != 0) {
      puVar5 = puVar6 + 2;
      uVar11 = param_2;
      do {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        *(int32_t *)(puVar5 + 2) = 3;
        puVar6 = puVar6 + 5;
        puVar5 = puVar5 + 5;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      puVar6 = (uint64_t *)param_1[1];
    }
    param_1[1] = (int64_t)(puVar6 + param_2 * 5);
    return;
  }
  puVar5 = (uint64_t *)*param_1;
  lVar10 = ((int64_t)puVar6 - (int64_t)puVar5) / 0x28;
  uVar11 = lVar10 * 2;
  if (lVar10 == 0) {
    uVar11 = 1;
  }
  if (uVar11 < lVar10 + param_2) {
    uVar11 = lVar10 + param_2;
  }
  puVar3 = (int32_t *)0x0;
  if (uVar11 != 0) {
    puVar3 = (int32_t *)
             FUN_18062b420(system_memory_pool_ptr,uVar11 * 0x28,(char)param_1[3],puVar6,0xfffffffffffffffe);
    puVar6 = (uint64_t *)param_1[1];
    puVar5 = (uint64_t *)*param_1;
  }
  puVar4 = puVar3;
  if (puVar5 != puVar6) {
    lVar10 = (int64_t)puVar3 - (int64_t)puVar5;
    puVar5 = puVar5 + 4;
    do {
      *puVar4 = *(int32_t *)(puVar5 + -4);
      puVar8 = (uint64_t *)((int64_t)puVar5 + lVar10 + -0x18);
      *puVar8 = 0;
      *(uint64_t *)(lVar10 + -0x10 + (int64_t)puVar5) = 0;
      *(uint64_t *)(lVar10 + -8 + (int64_t)puVar5) = 0;
      *(int32_t *)(lVar10 + (int64_t)puVar5) = *(int32_t *)puVar5;
      uVar2 = *puVar8;
      *puVar8 = puVar5[-3];
      puVar5[-3] = uVar2;
      uVar2 = *(uint64_t *)(lVar10 + -0x10 + (int64_t)puVar5);
      *(uint64_t *)(lVar10 + -0x10 + (int64_t)puVar5) = puVar5[-2];
      puVar5[-2] = uVar2;
      uVar2 = *(uint64_t *)(lVar10 + -8 + (int64_t)puVar5);
      *(uint64_t *)(lVar10 + -8 + (int64_t)puVar5) = puVar5[-1];
      puVar5[-1] = uVar2;
      uVar1 = *(int32_t *)(lVar10 + (int64_t)puVar5);
      *(int32_t *)(lVar10 + (int64_t)puVar5) = *(int32_t *)puVar5;
      *(int32_t *)puVar5 = uVar1;
      puVar4 = puVar4 + 10;
      puVar8 = puVar5 + 1;
      puVar5 = puVar5 + 5;
    } while (puVar8 != puVar6);
  }
  if (param_2 != 0) {
    puVar6 = (uint64_t *)(puVar4 + 4);
    uVar9 = param_2;
    do {
      puVar6[-2] = 0;
      *(int32_t *)((int64_t)puVar6 + 0x14) = 0;
      puVar6[-1] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      *(int32_t *)(puVar6 + 2) = 3;
      puVar6 = puVar6 + 5;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  lVar10 = param_1[1];
  lVar7 = *param_1;
  if (lVar7 != lVar10) {
    do {
      FUN_180057830();
      lVar7 = lVar7 + 0x28;
    } while (lVar7 != lVar10);
    lVar7 = *param_1;
  }
  if (lVar7 == 0) {
    *param_1 = (int64_t)puVar3;
    param_1[1] = (int64_t)(puVar4 + param_2 * 10);
    param_1[2] = (int64_t)(puVar3 + uVar11 * 10);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar7);
}






