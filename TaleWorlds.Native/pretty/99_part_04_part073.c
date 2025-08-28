#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part073.c - 2 个函数

// 函数: void FUN_1802c9f60(int64_t param_1,uint64_t param_2,uint64_t *param_3,uint64_t *param_4,
void FUN_1802c9f60(int64_t param_1,uint64_t param_2,uint64_t *param_3,uint64_t *param_4,
                  int64_t *param_5)

{
  byte *pbVar1;
  bool bVar2;
  uint64_t *****pppppuVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t lVar8;
  byte *pbVar9;
  uint64_t ****ppppuVar10;
  int64_t lVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  int64_t *plVar14;
  uint64_t uVar15;
  uint uVar16;
  uint64_t *****pppppuVar17;
  uint64_t *****pppppuVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint uVar21;
  uint64_t uVar22;
  int64_t lVar23;
  uint uStack_98;
  int64_t *plStack_90;
  uint64_t uStack_88;
  uint64_t ****ppppuStack_80;
  uint64_t ****ppppuStack_78;
  uint64_t ****ppppuStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  
  uStack_88 = 0xfffffffffffffffe;
  uVar20 = 0;
  uStack_58 = 3;
  ppppuStack_80 = &ppppuStack_80;
  ppppuStack_78 = &ppppuStack_80;
  ppppuStack_70 = (uint64_t *****)0x0;
  uStack_68 = 0;
  uStack_60 = 0;
  uVar19 = *(uint64_t *)(param_1 + 0x28);
  lVar8 = *(int64_t *)(param_1 + 0x30) - uVar19;
  lVar6 = lVar8 >> 0x3f;
  uVar22 = uVar20;
  uVar5 = uVar20;
  uVar15 = uVar20;
  if (lVar8 / 0x548 + lVar6 != lVar6) {
    do {
      if (*(int *)(uVar15 + *param_5) != 3) {
        lVar6 = uVar19 + uVar20;
        pppppuVar3 = &ppppuStack_80;
        if ((uint64_t *****)ppppuStack_70 != (uint64_t *****)0x0) {
          pppppuVar17 = (uint64_t *****)ppppuStack_70;
          do {
            if (*(int *)(lVar6 + 0x10) == 0) {
              bVar2 = false;
              pppppuVar18 = (uint64_t *****)pppppuVar17[1];
            }
            else {
              if (*(int *)(pppppuVar17 + 6) == 0) {
                bVar2 = true;
              }
              else {
                pbVar9 = *(byte **)(lVar6 + 8);
                lVar8 = (int64_t)pppppuVar17[5] - (int64_t)pbVar9;
                do {
                  pbVar1 = pbVar9 + lVar8;
                  uVar21 = (uint)*pbVar9 - (uint)*pbVar1;
                  uVar19 = (uint64_t)uVar21;
                  if (uVar21 != 0) break;
                  pbVar9 = pbVar9 + 1;
                } while (*pbVar1 != 0);
                bVar2 = 0 < (int)uVar21;
                if ((int)uVar21 < 1) {
                  pppppuVar18 = (uint64_t *****)pppppuVar17[1];
                  goto LAB_1802ca09b;
                }
              }
              pppppuVar18 = (uint64_t *****)*pppppuVar17;
            }
LAB_1802ca09b:
            if (bVar2) {
              pppppuVar17 = pppppuVar3;
            }
            pppppuVar3 = pppppuVar17;
            pppppuVar17 = pppppuVar18;
          } while (pppppuVar18 != (uint64_t *****)0x0);
        }
        if (pppppuVar3 == &ppppuStack_80) {
LAB_1802ca0ea:
          puVar4 = (uint64_t *)FUN_1800c2ab0(&ppppuStack_80,&plStack_90,uVar19,pppppuVar3,lVar6);
          pppppuVar3 = (uint64_t *****)*puVar4;
        }
        else if (*(int *)(pppppuVar3 + 6) != 0) {
          if (*(int *)(lVar6 + 0x10) != 0) {
            ppppuVar10 = pppppuVar3[5];
            lVar8 = *(int64_t *)(lVar6 + 8) - (int64_t)ppppuVar10;
            do {
              uVar21 = (uint)*(byte *)((int64_t)ppppuVar10 + lVar8);
              uVar16 = *(byte *)ppppuVar10 - uVar21;
              uVar19 = (uint64_t)uVar16;
              if (uVar16 != 0) break;
              ppppuVar10 = (uint64_t ****)((int64_t)ppppuVar10 + 1);
            } while (uVar21 != 0);
            if ((int)uVar16 < 1) goto LAB_1802ca102;
          }
          goto LAB_1802ca0ea;
        }
LAB_1802ca102:
        *(int *)(pppppuVar3 + 8) = (int)uVar5;
        uVar5 = (uint64_t)((int)uVar5 + 1);
      }
      uVar21 = (int)uVar22 + 1;
      uVar20 = uVar20 + 0x548;
      uVar19 = *(uint64_t *)(param_1 + 0x28);
      uVar22 = (uint64_t)uVar21;
      uVar15 = uVar15 + 4;
    } while ((uint64_t)(int64_t)(int)uVar21 <
             (uint64_t)((int64_t)(*(int64_t *)(param_1 + 0x30) - uVar19) / 0x548));
  }
  uVar20 = 0;
  param_4[1] = *param_4;
  param_3[1] = *param_3;
  uVar5 = (*(int64_t *)(param_1 + 0x30) - *(int64_t *)(param_1 + 0x28)) / 0x548;
  uVar19 = param_4[1];
  uVar22 = *param_4;
  uVar15 = (int64_t)(uVar19 - uVar22) >> 3;
  if (uVar15 < uVar5) {
    uVar13 = uVar5 - uVar15;
    if ((uint64_t)((int64_t)(param_4[2] - uVar19) >> 3) < uVar13) {
      if (uVar15 == 0) {
        uVar15 = 1;
      }
      else {
        uVar15 = uVar15 * 2;
      }
      if (uVar15 < uVar5) {
        uVar15 = uVar5;
      }
      uVar5 = uVar20;
      if (uVar15 != 0) {
        uVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar15 * 8,(char)param_4[3]);
        uVar19 = param_4[1];
        uVar22 = *param_4;
      }
      if (uVar22 != uVar19) {
                    // WARNING: Subroutine does not return
        memmove(uVar5,uVar22,uVar19 - uVar22);
      }
      if (uVar13 != 0) {
                    // WARNING: Subroutine does not return
        memset(uVar5,0,uVar13 * 8);
      }
      if (*param_4 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *param_4 = uVar5;
      param_4[1] = uVar5;
      param_4[2] = uVar5 + uVar15 * 8;
      goto LAB_1802ca28e;
    }
    if (uVar13 != 0) {
                    // WARNING: Subroutine does not return
      memset(uVar19,0,uVar13 * 8);
    }
  }
  else {
    uVar19 = uVar22 + uVar5 * 8;
  }
  param_4[1] = uVar19;
LAB_1802ca28e:
  uStack_98 = 0;
  lVar6 = *(int64_t *)(param_1 + 0x28);
  lVar11 = *(int64_t *)(param_1 + 0x30) - lVar6;
  lVar8 = lVar11 >> 0x3f;
  if (lVar11 / 0x548 + lVar8 != lVar8) {
    lVar8 = 0;
    uVar19 = uVar20;
    uVar22 = uVar20;
    uVar5 = uVar20;
    do {
      uVar21 = (uint)uVar20;
      if (*(int *)(lVar8 + *param_5) != 3) {
        lVar23 = uVar19 * 0x548;
        lVar6 = FUN_1801f5690(lVar23 + lVar6,&ppppuStack_80);
        plVar14 = (int64_t *)(lVar6 + 0x428);
        lVar11 = 4;
        do {
          plStack_90 = (int64_t *)*plVar14;
          *plVar14 = 0;
          if (plStack_90 != (int64_t *)0x0) {
            (**(code **)(*plStack_90 + 0x38))();
          }
          plVar7 = (int64_t *)0x0;
          plVar14 = plVar14 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        *(int64_t *)(*param_4 + uVar22) = lVar6;
        plVar14 = (int64_t *)param_3[1];
        if (plVar14 < (int64_t *)param_3[2]) {
          param_3[1] = (uint64_t)(plVar14 + 1);
          *plVar14 = lVar6;
          lVar6 = *(int64_t *)(param_1 + 0x28);
          uVar5 = lVar23 + lVar6;
        }
        else {
          plVar12 = (int64_t *)*param_3;
          lVar11 = (int64_t)plVar14 - (int64_t)plVar12 >> 3;
          if (lVar11 == 0) {
            lVar11 = 1;
LAB_1802ca38f:
            plVar7 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar11 * 8,(char)param_3[3]);
            plVar14 = (int64_t *)param_3[1];
            plVar12 = (int64_t *)*param_3;
          }
          else {
            lVar11 = lVar11 * 2;
            if (lVar11 != 0) goto LAB_1802ca38f;
          }
          if (plVar12 != plVar14) {
                    // WARNING: Subroutine does not return
            memmove(plVar7,plVar12,(int64_t)plVar14 - (int64_t)plVar12);
          }
          *plVar7 = lVar6;
          if (*param_3 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          *param_3 = (uint64_t)plVar7;
          param_3[1] = (uint64_t)(plVar7 + 1);
          param_3[2] = (uint64_t)(plVar7 + lVar11);
          lVar6 = *(int64_t *)(param_1 + 0x28);
          uVar5 = lVar23 + lVar6;
          uVar21 = uStack_98;
        }
      }
      uStack_98 = uVar21 + 1;
      uVar20 = (uint64_t)uStack_98;
      lVar8 = lVar8 + 4;
      uVar22 = uVar22 + 8;
      uVar19 = (uint64_t)(int)uStack_98;
    } while (uVar19 < (uint64_t)((*(int64_t *)(param_1 + 0x30) - lVar6) / 0x548));
    if ((uVar5 != 0) && (*(char *)(uVar5 + 0x69) != '\0')) {
      *(int8_t *)
       (*(int64_t *)((*param_3 - 8) + ((int64_t)(param_3[1] - *param_3) >> 3) * 8) + 0x4d) = 1;
    }
  }
  ppppuVar10 = ppppuStack_70;
  if ((uint64_t *****)ppppuStack_70 == (uint64_t *****)0x0) {
    return;
  }
  FUN_180058370(&ppppuStack_80,*ppppuStack_70);
  ppppuVar10[4] = (uint64_t ***)&system_data_buffer_ptr;
  if ((uint64_t ****)ppppuVar10[5] == (uint64_t ****)0x0) {
    ppppuVar10[5] = (uint64_t ****)0x0;
    *(int32_t *)(ppppuVar10 + 7) = 0;
    ppppuVar10[4] = (uint64_t ***)&system_state_ptr;
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(ppppuVar10);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



int64_t * FUN_1802ca500(int64_t *param_1,uint64_t *param_2,uint64_t *param_3,int64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = param_4;
  if (param_2 != param_3) {
    puVar2 = param_2 + 1;
    do {
      puVar1 = (uint64_t *)*param_1;
      *puVar1 = &system_state_ptr;
      puVar1[1] = 0;
      *(int32_t *)(puVar1 + 2) = 0;
      *puVar1 = &system_data_buffer_ptr;
      puVar1[3] = 0;
      puVar1[1] = 0;
      *(int32_t *)(puVar1 + 2) = 0;
      *(int32_t *)(puVar1 + 2) = *(int32_t *)(puVar2 + 1);
      puVar1[1] = *puVar2;
      *(int32_t *)((int64_t)puVar1 + 0x1c) = *(int32_t *)((int64_t)puVar2 + 0x14);
      *(int32_t *)(puVar1 + 3) = *(int32_t *)(puVar2 + 2);
      *(int32_t *)(puVar2 + 1) = 0;
      *puVar2 = 0;
      puVar2[2] = 0;
      puVar1[4] = &system_state_ptr;
      puVar1[5] = 0;
      *(int32_t *)(puVar1 + 6) = 0;
      puVar1[4] = &system_data_buffer_ptr;
      puVar1[7] = 0;
      puVar1[5] = 0;
      *(int32_t *)(puVar1 + 6) = 0;
      *(int32_t *)(puVar1 + 6) = *(int32_t *)(puVar2 + 5);
      puVar1[5] = puVar2[4];
      *(int32_t *)((int64_t)puVar1 + 0x3c) = *(int32_t *)((int64_t)puVar2 + 0x34);
      *(int32_t *)(puVar1 + 7) = *(int32_t *)(puVar2 + 6);
      *(int32_t *)(puVar2 + 5) = 0;
      puVar2[4] = 0;
      puVar2[6] = 0;
      puVar1[8] = &system_state_ptr;
      puVar1[9] = 0;
      *(int32_t *)(puVar1 + 10) = 0;
      puVar1[8] = &system_data_buffer_ptr;
      puVar1[0xb] = 0;
      puVar1[9] = 0;
      *(int32_t *)(puVar1 + 10) = 0;
      *(int32_t *)(puVar1 + 10) = *(int32_t *)(puVar2 + 9);
      puVar1[9] = puVar2[8];
      *(int32_t *)((int64_t)puVar1 + 0x5c) = *(int32_t *)((int64_t)puVar2 + 0x54);
      *(int32_t *)(puVar1 + 0xb) = *(int32_t *)(puVar2 + 10);
      *(int32_t *)(puVar2 + 9) = 0;
      puVar2[8] = 0;
      puVar2[10] = 0;
      *(int8_t *)(puVar1 + 0xc) = *(int8_t *)(puVar2 + 0xb);
      *(int32_t *)((int64_t)puVar1 + 100) = *(int32_t *)((int64_t)puVar2 + 0x5c);
      *(int8_t *)(puVar1 + 0xd) = *(int8_t *)(puVar2 + 0xc);
      *(int8_t *)((int64_t)puVar1 + 0x69) = *(int8_t *)((int64_t)puVar2 + 0x61);
      *(int8_t *)((int64_t)puVar1 + 0x6a) = *(int8_t *)((int64_t)puVar2 + 0x62);
      *(int32_t *)((int64_t)puVar1 + 0x6c) = *(int32_t *)((int64_t)puVar2 + 100);
      *(int32_t *)(puVar1 + 0xe) = *(int32_t *)(puVar2 + 0xd);
      *(int32_t *)((int64_t)puVar1 + 0x74) = *(int32_t *)((int64_t)puVar2 + 0x6c);
      *(int32_t *)(puVar1 + 0xf) = *(int32_t *)(puVar2 + 0xe);
      *(int32_t *)((int64_t)puVar1 + 0x7c) = *(int32_t *)((int64_t)puVar2 + 0x74);
      *(int32_t *)(puVar1 + 0x10) = *(int32_t *)(puVar2 + 0xf);
      *(int32_t *)((int64_t)puVar1 + 0x84) = *(int32_t *)((int64_t)puVar2 + 0x7c);
      FUN_1808fcf5c(puVar1 + 0x11,puVar2 + 0x10,0x20,0x10,FUN_1802ca760,FUN_180059620,uVar3);
      FUN_1808fcf5c(puVar1 + 0x51,puVar2 + 0x50,0x58,4,FUN_1800b8300,FUN_180044a30);
      FUN_1808fcf5c(puVar1 + 0x7d,puVar2 + 0x7c,0x58,4,FUN_1800b8300,FUN_180044a30);
      *param_1 = *param_1 + 0x548;
      puVar1 = puVar2 + 0xa8;
      puVar2 = puVar2 + 0xa9;
    } while (puVar1 != param_3);
  }
  return param_1;
}



uint64_t * FUN_1802ca760(uint64_t *param_1,uint64_t *param_2)

{
  int32_t uVar1;
  uint64_t uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = *(int32_t *)(param_2 + 3);
  uVar2 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar2;
  uVar1 = *(int32_t *)(param_1 + 3);
  *(int32_t *)(param_1 + 3) = *(int32_t *)(param_2 + 3);
  *(int32_t *)(param_2 + 3) = uVar1;
  return param_1;
}



uint64_t * FUN_1802ca7d0(uint64_t *param_1,uint param_2)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  
  *param_1 = &processed_var_8624_ptr;
  uVar4 = 0;
  plVar1 = param_1 + 0xe;
  lVar3 = *plVar1;
  uVar6 = uVar4;
  if (param_1[0xf] - lVar3 >> 3 != 0) {
    do {
      puVar2 = *(uint64_t **)(uVar4 + lVar3);
      if (puVar2 != (uint64_t *)0x0) {
        lVar3 = __RTCastToVoid(puVar2);
        (**(code **)*puVar2)(puVar2,0);
        if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(lVar3);
        }
      }
      *(uint64_t *)(uVar4 + *plVar1) = 0;
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 8;
      lVar3 = *plVar1;
      uVar6 = (uint64_t)uVar5;
    } while ((uint64_t)(int64_t)(int)uVar5 < (uint64_t)(param_1[0xf] - lVar3 >> 3));
  }
  if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (param_1[10] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[3] = &system_data_buffer_ptr;
  if (param_1[4] == 0) {
    param_1[4] = 0;
    *(int32_t *)(param_1 + 6) = 0;
    param_1[3] = &system_state_ptr;
    *param_1 = &system_handler2_ptr;
    *param_1 = &system_handler1_ptr;
    if ((param_2 & 1) != 0) {
      free(param_1,0xa0);
    }
    return param_1;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802ca920(int64_t *param_1)
void FUN_1802ca920(int64_t *param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int8_t auStack_198 [32];
  code *pcStack_178;
  int32_t uStack_170;
  int32_t uStack_168;
  int32_t uStack_160;
  int32_t uStack_158;
  uint64_t uStack_150;
  int8_t uStack_148;
  int32_t uStack_140;
  int64_t *plStack_138;
  int64_t **pplStack_130;
  int64_t *aplStack_128 [2];
  int64_t *aplStack_118 [2];
  void *puStack_108;
  void *puStack_100;
  uint64_t uStack_f8;
  int64_t *plStack_f0;
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_198;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  pcStack_178 = DataCacheManager;
  plStack_f0 = param_1;
  DataStructureManager(param_1 + 5,8,2,&SUB_18005d5f0);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(int32_t *)(param_1 + 0xf) = 0;
  *(int8_t *)((int64_t)param_1 + 0x7c) = 1;
  *(int32_t *)(param_1 + 0x10) = 0;
  param_1[0x13] = 0;
  *(uint64_t *)((int64_t)param_1 + 0x84) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x8c) = 0x7f7fffff00000000;
  param_1[0x14] = 0x3f800000;
  param_1[0x15] = 0;
  param_1[0x16] = 0x3f80000000000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x3f800000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x3f80000000000000;
  param_1[0x1c] = 0x3f800000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x3f80000000000000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x3f800000;
  param_1[0x22] = 0;
  param_1[0x23] = 0x3f80000000000000;
  param_1[0x24] = 0x3f800000;
  param_1[0x25] = 0;
  param_1[0x26] = 0x3f80000000000000;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0x3f800000;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x3f80000000000000;
  param_1[0x2c] = 0x3f800000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x3f80000000000000;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0x3f800000;
  param_1[0x32] = 0;
  param_1[0x33] = 0x3f80000000000000;
  param_1[0x34] = 0x3f800000;
  param_1[0x35] = 0;
  param_1[0x36] = 0x3f80000000000000;
  param_1[0x37] = 0;
  *(int32_t *)(param_1 + 0x38) = 0;
  *(int32_t *)((int64_t)param_1 + 0x1c4) = 0;
  *(int32_t *)(param_1 + 0x39) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x1cc) = 0;
  *(int32_t *)(param_1 + 0x3a) = 0;
  *(int32_t *)((int64_t)param_1 + 0x1d4) = 0;
  *(int32_t *)(param_1 + 0x3b) = 0;
  *(int32_t *)((int64_t)param_1 + 0x1dc) = 0x3f800000;
  puStack_88 = &memory_allocator_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x22;
  uVar3 = strcpy_s(auStack_70,0x40,&processed_var_8824_ptr);
  uStack_140 = 1;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_158 = 0x400;
  uStack_160 = 4;
  uStack_168 = 5;
  uStack_170 = 0;
  pcStack_178 = (code *)CONCAT44(pcStack_178._4_4_,0x104);
  plVar2 = (int64_t *)FUN_1800b0a10(uVar3,&pplStack_130,0xffffffff,&puStack_88);
  lVar1 = *plVar2;
  *plVar2 = 0;
  aplStack_128[0] = (int64_t *)param_1[3];
  param_1[3] = lVar1;
  if (aplStack_128[0] != (int64_t *)0x0) {
    (**(code **)(*aplStack_128[0] + 0x38))();
  }
  if (pplStack_130 != (int64_t **)0x0) {
    (*(code *)(*pplStack_130)[7])();
  }
  puStack_88 = &system_state_ptr;
  puStack_e8 = &memory_allocator_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x18;
  uVar3 = strcpy_s(auStack_d0,0x40,&processed_var_8792_ptr);
  uStack_140 = 1;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_158 = 0x400;
  uStack_160 = 4;
  uStack_168 = 5;
  uStack_170 = 0;
  pcStack_178 = (code *)CONCAT44(pcStack_178._4_4_,5);
  plVar2 = (int64_t *)FUN_1800b0a10(uVar3,&plStack_138,0xffffffff,&puStack_e8);
  lVar1 = *plVar2;
  *plVar2 = 0;
  aplStack_128[0] = (int64_t *)param_1[4];
  param_1[4] = lVar1;
  if (aplStack_128[0] != (int64_t *)0x0) {
    (**(code **)(*aplStack_128[0] + 0x38))();
  }
  if (plStack_138 != (int64_t *)0x0) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  puStack_e8 = &system_state_ptr;
  puStack_88 = &memory_allocator_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x17;
  uVar3 = strcpy_s(auStack_70,0x40,&processed_var_8768_ptr);
  uStack_140 = 1;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_158 = 0x300000;
  uStack_160 = 4;
  uStack_168 = 5;
  uStack_170 = 0;
  pcStack_178 = (code *)CONCAT44(pcStack_178._4_4_,5);
  plVar2 = (int64_t *)FUN_1800b0a10(uVar3,aplStack_128,0xffffffff,&puStack_88);
  lVar1 = *plVar2;
  *plVar2 = 0;
  pplStack_130 = (int64_t **)param_1[5];
  param_1[5] = lVar1;
  if (pplStack_130 != (int64_t **)0x0) {
    (*(code *)(*pplStack_130)[7])();
  }
  if (aplStack_128[0] != (int64_t *)0x0) {
    (**(code **)(*aplStack_128[0] + 0x38))();
  }
  puStack_88 = &system_state_ptr;
  puStack_e8 = &memory_allocator_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x17;
  uVar3 = strcpy_s(auStack_d0,0x40,&processed_var_8744_ptr);
  uStack_140 = 1;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_158 = 0x300000;
  uStack_160 = 4;
  uStack_168 = 5;
  uStack_170 = 0;
  pcStack_178 = (code *)CONCAT44(pcStack_178._4_4_,5);
  plVar2 = (int64_t *)FUN_1800b0a10(uVar3,&pplStack_130,0xffffffff,&puStack_e8);
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_138 = (int64_t *)param_1[6];
  param_1[6] = lVar1;
  if (plStack_138 != (int64_t *)0x0) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  if (pplStack_130 != (int64_t **)0x0) {
    (*(code *)(*pplStack_130)[7])();
  }
  puStack_e8 = &system_state_ptr;
  puStack_88 = &memory_allocator_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x1c;
  uVar3 = strcpy_s(auStack_70,0x40,&processed_var_8944_ptr);
  uStack_140 = 1;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_158 = 0x300000;
  uStack_160 = 4;
  uStack_168 = 5;
  uStack_170 = 0;
  pcStack_178 = (code *)CONCAT44(pcStack_178._4_4_,5);
  plVar2 = (int64_t *)FUN_1800b0a10(uVar3,aplStack_128,0xffffffff,&puStack_88);
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_138 = (int64_t *)param_1[7];
  param_1[7] = lVar1;
  if (plStack_138 != (int64_t *)0x0) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  if (aplStack_128[0] != (int64_t *)0x0) {
    (**(code **)(*aplStack_128[0] + 0x38))();
  }
  puStack_88 = &system_state_ptr;
  puStack_e8 = &memory_allocator_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x12;
  uVar3 = strcpy_s(auStack_d0,0x40,&processed_var_8920_ptr);
  uStack_140 = 1;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_158 = 1;
  uStack_160 = 0x260;
  uStack_168 = 0;
  uStack_170 = 3;
  pcStack_178 = (code *)CONCAT44(pcStack_178._4_4_,0x220);
  plVar2 = (int64_t *)FUN_1800b0a10(uVar3,&pplStack_130,0xffffffff,&puStack_e8);
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_138 = (int64_t *)param_1[8];
  param_1[8] = lVar1;
  if (plStack_138 != (int64_t *)0x0) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  if (pplStack_130 != (int64_t **)0x0) {
    (*(code *)(*pplStack_130)[7])();
  }
  puStack_e8 = &system_state_ptr;
  puStack_88 = &memory_allocator_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x13;
  strcpy_s(auStack_70,0x40,&processed_var_8896_ptr);
  plVar2 = (int64_t *)FUN_1800b08e0(system_resource_state,aplStack_128,&puStack_88,1);
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_138 = (int64_t *)param_1[0xb];
  param_1[0xb] = lVar1;
  if (plStack_138 != (int64_t *)0x0) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  if (aplStack_128[0] != (int64_t *)0x0) {
    (**(code **)(*aplStack_128[0] + 0x38))();
  }
  puStack_88 = &system_state_ptr;
  *(uint *)(param_1[0xb] + 0x328) = *(uint *)(param_1[0xb] + 0x328) | 0x20000000;
  puStack_e8 = &memory_allocator_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x18;
  strcpy_s(auStack_d0,0x40,&processed_var_8864_ptr);
  plVar2 = (int64_t *)FUN_1800b08e0(system_resource_state,&pplStack_130,&puStack_e8,1);
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_138 = (int64_t *)param_1[0xc];
  param_1[0xc] = lVar1;
  if (plStack_138 != (int64_t *)0x0) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  if (pplStack_130 != (int64_t **)0x0) {
    (*(code *)(*pplStack_130)[7])();
  }
  puStack_e8 = &system_state_ptr;
  *(uint *)(param_1[0xc] + 0x328) = *(uint *)(param_1[0xc] + 0x328) | 0x20000000;
  plStack_138 = (int64_t *)param_1[0xe];
  param_1[0xe] = 0;
  if (plStack_138 != (int64_t *)0x0) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  plStack_138 = (int64_t *)param_1[0xd];
  param_1[0xd] = 0;
  if (plStack_138 != (int64_t *)0x0) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  pplStack_130 = aplStack_118;
  puStack_108 = &ui_system_data_1200_ptr;
  puStack_100 = &ui_system_data_1184_ptr;
  aplStack_118[0] = param_1;
  FUN_18005c650(aplStack_118);
  puStack_e8 = &memory_allocator_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x18;
  strcpy_s(auStack_d0,0x40,&rendering_buffer_2976_ptr);
  plVar2 = (int64_t *)FUN_1800b31f0(system_resource_state,&pplStack_130,&puStack_e8,1);
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_138 = (int64_t *)*param_1;
  *param_1 = lVar1;
  if (plStack_138 != (int64_t *)0x0) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  if (pplStack_130 != (int64_t **)0x0) {
    (*(code *)(*pplStack_130)[7])();
  }
  puStack_e8 = &system_state_ptr;
  puStack_88 = &memory_allocator_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x15;
  strcpy_s(auStack_70,0x40,&processed_var_9056_ptr);
  plVar2 = (int64_t *)FUN_1800b31f0(system_resource_state,aplStack_128,&puStack_88,1);
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_138 = (int64_t *)param_1[1];
  param_1[1] = lVar1;
  if (plStack_138 != (int64_t *)0x0) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  if (aplStack_128[0] != (int64_t *)0x0) {
    (**(code **)(*aplStack_128[0] + 0x38))();
  }
  puStack_88 = &system_state_ptr;
  puStack_e8 = &memory_allocator_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x1d;
  strcpy_s(auStack_d0,0x40,&system_data_d498);
  plVar2 = (int64_t *)FUN_1800b31f0(system_resource_state,&pplStack_130,&puStack_e8,1);
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_138 = (int64_t *)param_1[2];
  param_1[2] = lVar1;
  if (plStack_138 != (int64_t *)0x0) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  if (pplStack_130 != (int64_t **)0x0) {
    (*(code *)(*pplStack_130)[7])();
  }
  puStack_e8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_198);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




