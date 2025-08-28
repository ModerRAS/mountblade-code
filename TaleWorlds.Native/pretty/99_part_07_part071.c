#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part071.c - 3 个函数

// 函数: void FUN_1804dad70(int64_t *****param_1,uint64_t param_2,uint64_t param_3)
void FUN_1804dad70(int64_t *****param_1,uint64_t param_2,uint64_t param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int64_t *****ppppplVar4;
  int64_t ****pppplVar5;
  int64_t ****pppplVar6;
  int64_t *****ppppplVar7;
  uint64_t uStackX_18;
  int64_t *****ppppplStackX_20;
  int64_t *****ppppplStack_118;
  uint64_t *puStack_110;
  uint64_t uStack_108;
  uint64_t *puStack_100;
  int64_t ***ppplStack_f8;
  int64_t ***ppplStack_f0;
  int64_t ****pppplStack_e8;
  int64_t ****pppplStack_e0;
  int64_t ***ppplStack_d8;
  int64_t ***ppplStack_d0;
  int64_t ****apppplStack_c8 [2];
  void *puStack_b8;
  code *pcStack_b0;
  int32_t uStack_a8;
  int32_t uStack_a4;
  uint64_t *puStack_a0;
  void *puStack_98;
  code *pcStack_90;
  int32_t uStack_88;
  int32_t uStack_84;
  uint64_t *puStack_80;
  void *puStack_78;
  code *pcStack_70;
  uint64_t uStack_68;
  uint64_t *puStack_60;
  void *puStack_58;
  code *pcStack_50;
  uint64_t uStack_48;
  int64_t ****pppplStack_40;
  int64_t ***ppplStack_38;
  int64_t ***ppplStack_30;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*(char *)(system_main_module_state + 0xfd) != '\0') {
    uStackX_18 = param_3;
    uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
    ppppplStackX_20 = apppplStack_c8;
    puStack_b8 = &unknown_var_7984_ptr;
    pcStack_b0 = FUN_1804ded00;
    apppplStack_c8[0] = (int64_t ****)param_1;
    ppppplVar4 = (int64_t *****)FUN_18006b640(uVar3,apppplStack_c8);
    pppplStack_40 = (int64_t ****)ppppplVar4;
    if (ppppplVar4 != (int64_t *****)0x0) {
      (*(code *)(*ppppplVar4)[5])(ppppplVar4);
    }
    uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
    ppppplStackX_20 = (int64_t *****)&uStack_a8;
    puStack_100 = &uStackX_18;
    puStack_98 = &unknown_var_7824_ptr;
    pcStack_90 = FUN_1804dec60;
    uStack_108._0_4_ = SUB84(param_1,0);
    uVar1 = (int32_t)uStack_108;
    uStack_108._4_4_ = (int32_t)((uint64_t)param_1 >> 0x20);
    uVar2 = uStack_108._4_4_;
    uStack_a8 = (int32_t)uStack_108;
    uStack_a4 = uStack_108._4_4_;
    uStack_108 = param_1;
    puStack_a0 = puStack_100;
    pppplVar5 = (int64_t ****)FUN_18006b640(uVar3,&uStack_a8);
    ppplStack_38 = (int64_t ***)pppplVar5;
    if (pppplVar5 != (int64_t ****)0x0) {
      (*(code *)(*pppplVar5)[5])(pppplVar5);
    }
    uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
    ppppplStackX_20 = (int64_t *****)&uStack_88;
    puStack_100 = &uStackX_18;
    puStack_78 = &unknown_var_7664_ptr;
    pcStack_70 = FUN_1804deba0;
    uStack_88 = uVar1;
    uStack_84 = uVar2;
    uStack_108 = param_1;
    puStack_80 = puStack_100;
    pppplVar6 = (int64_t ****)FUN_18006b640(uVar3,&uStack_88);
    ppplStack_30 = (int64_t ***)pppplVar6;
    if (pppplVar6 != (int64_t ****)0x0) {
      (*(code *)(*pppplVar6)[5])(pppplVar6);
    }
    uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
    ppppplStackX_20 = (int64_t *****)&uStack_68;
    puStack_110 = &uStackX_18;
    puStack_58 = &unknown_var_7472_ptr;
    pcStack_50 = FUN_1804dea90;
    uStack_68._0_4_ = uVar1;
    uStack_68._4_4_ = uVar2;
    ppppplStack_118 = param_1;
    puStack_60 = puStack_110;
    ppppplVar7 = (int64_t *****)FUN_18006b640(uVar3,&uStack_68);
    uStack_108 = ppppplVar7;
    if (ppppplVar7 != (int64_t *****)0x0) {
      (*(code *)(*ppppplVar7)[5])(ppppplVar7);
    }
    uVar3 = system_context_ptr;
    if (*(int *)(system_system_data_memory + 0x380) == 0) {
      ppppplStack_118 = (int64_t *****)&ppppplStackX_20;
      ppppplStackX_20 = ppppplVar4;
      if (ppppplVar4 != (int64_t *****)0x0) {
        (*(code *)(*ppppplVar4)[5])(ppppplVar4);
      }
      FUN_18005e110(uVar3,&ppppplStackX_20);
      uVar3 = system_context_ptr;
      ppppplStack_118 = (int64_t *****)&ppplStack_f8;
      ppplStack_f8 = (int64_t ***)pppplVar6;
      if (pppplVar6 != (int64_t ****)0x0) {
        (*(code *)(*pppplVar6)[5])(pppplVar6);
      }
      FUN_18005e110(uVar3,&ppplStack_f8);
      uVar3 = system_context_ptr;
      ppppplStackX_20 = (int64_t *****)&ppplStack_f0;
      ppplStack_f0 = (int64_t ***)pppplVar5;
      if (pppplVar5 != (int64_t ****)0x0) {
        (*(code *)(*pppplVar5)[5])(pppplVar5);
      }
      FUN_18005e110(uVar3,&ppplStack_f0);
      uVar3 = system_context_ptr;
      ppppplStackX_20 = &pppplStack_e8;
      pppplStack_e8 = (int64_t ****)ppppplVar7;
      if (ppppplVar7 != (int64_t *****)0x0) {
        (*(code *)(*ppppplVar7)[5])(ppppplVar7);
      }
      FUN_18005e110(uVar3,&pppplStack_e8);
      uVar3 = system_context_ptr;
      ppppplStackX_20 = &pppplStack_e0;
      pppplStack_e0 = (int64_t ****)ppppplVar4;
      if (ppppplVar4 != (int64_t *****)0x0) {
        (*(code *)(*ppppplVar4)[5])(ppppplVar4);
      }
      FUN_18005e6a0(uVar3,&pppplStack_e0,0);
      uVar3 = system_context_ptr;
      ppppplStackX_20 = (int64_t *****)&ppplStack_d8;
      ppplStack_d8 = (int64_t ***)pppplVar6;
      if (pppplVar6 != (int64_t ****)0x0) {
        (*(code *)(*pppplVar6)[5])(pppplVar6);
      }
      FUN_18005e6a0(uVar3,&ppplStack_d8,0);
      uVar3 = system_context_ptr;
      ppppplStackX_20 = (int64_t *****)&ppplStack_d0;
      ppplStack_d0 = (int64_t ***)pppplVar5;
      if (pppplVar5 != (int64_t ****)0x0) {
        (*(code *)(*pppplVar5)[5])(pppplVar5);
      }
      FUN_18005e6a0(uVar3,&ppplStack_d0,0);
      uVar3 = system_context_ptr;
      ppppplStackX_20 = (int64_t *****)&ppppplStack_118;
      ppppplStack_118 = ppppplVar7;
      if (ppppplVar7 != (int64_t *****)0x0) {
        (*(code *)(*ppppplVar7)[5])(ppppplVar7);
      }
      FUN_18005e6a0(uVar3,&ppppplStack_118,0);
    }
    else {
      (*(code *)(*ppppplVar4)[0xc])(ppppplVar4);
      (*(code *)(*pppplVar6)[0xc])(pppplVar6);
      (*(code *)(*pppplVar5)[0xc])(pppplVar5);
      (*(code *)(*ppppplVar7)[0xc])(ppppplVar7);
      if ((*ppppplVar4)[0xe] == (int64_t ***)&unknown_var_1280_ptr) {
        LOCK();
        *(int8_t *)(ppppplVar4 + 2) = 1;
        UNLOCK();
        FUN_1800466d0(ppppplVar4 + 4);
      }
      else {
        (*(code *)(*ppppplVar4)[0xe])(ppppplVar4);
      }
      if ((*pppplVar6)[0xe] == (int64_t **)&unknown_var_1280_ptr) {
        LOCK();
        *(int8_t *)(pppplVar6 + 2) = 1;
        UNLOCK();
        FUN_1800466d0(pppplVar6 + 4);
      }
      else {
        (*(code *)(*pppplVar6)[0xe])(pppplVar6);
      }
      if ((*pppplVar5)[0xe] == (int64_t **)&unknown_var_1280_ptr) {
        LOCK();
        *(int8_t *)(pppplVar5 + 2) = 1;
        UNLOCK();
        FUN_1800466d0(pppplVar5 + 4);
      }
      else {
        (*(code *)(*pppplVar5)[0xe])(pppplVar5);
      }
      if ((*ppppplVar7)[0xe] == (int64_t ***)&unknown_var_1280_ptr) {
        LOCK();
        *(int8_t *)(ppppplVar7 + 2) = 1;
        UNLOCK();
        FUN_1800466d0(ppppplVar7 + 4);
      }
      else {
        (*(code *)(*ppppplVar7)[0xe])(ppppplVar7);
      }
    }
    if (ppppplVar7 != (int64_t *****)0x0) {
      (*(code *)(*ppppplVar7)[7])(ppppplVar7);
    }
    if (pppplVar6 != (int64_t ****)0x0) {
      (*(code *)(*pppplVar6)[7])(pppplVar6);
    }
    if (pppplVar5 != (int64_t ****)0x0) {
      (*(code *)(*pppplVar5)[7])(pppplVar5);
    }
    if (ppppplVar4 != (int64_t *****)0x0) {
      (*(code *)(*ppppplVar4)[7])(ppppplVar4);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804db240(int64_t param_1,int64_t param_2)
void FUN_1804db240(int64_t param_1,int64_t param_2)

{
  byte bVar1;
  void *puVar2;
  int iVar3;
  int64_t lVar4;
  uint uVar5;
  byte *pbVar6;
  int64_t lVar7;
  int iVar8;
  void *puVar9;
  uint *puVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint uVar14;
  uint64_t uVar15;
  int32_t extraout_XMM0_Da;
  char acStackX_18 [8];
  uint uStackX_20;
  uint64_t uVar16;
  void *puStack_80;
  int8_t *puStack_78;
  uint uStack_70;
  uint64_t uStack_68;
  int64_t lStack_60;
  int64_t lStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  
  uVar16 = 0xfffffffffffffffe;
  lStack_60 = 0;
  lStack_58 = 0;
  uVar13 = 0;
  uStack_50 = 0;
  uStack_48 = 3;
  FUN_1802f4300(&lStack_60);
  uStackX_20 = 0;
  uVar12 = uVar13;
  if (0 < *(int *)(param_1 + 0x2acc)) {
    do {
      uVar5 = (uint)uVar12;
      lStack_58 = lStack_60;
      FUN_1802e9180(*(uint64_t *)
                     (*(int64_t *)
                       (*(int64_t *)(param_1 + 11000) + (int64_t)((int)uVar5 >> 10) * 8) + 8 +
                     (int64_t)(int)(*(uint *)(param_1 + 0x2b18) & uVar5) * 0xd8),&lStack_60,1,
                    0xffffffff,uVar16);
      uVar12 = uVar13;
      uVar15 = uVar13;
      if (lStack_58 - lStack_60 >> 3 != 0) {
        do {
          puVar2 = *(void **)(*(int64_t *)(uVar15 + lStack_60) + 0x18);
          puVar9 = &system_buffer_ptr;
          if (puVar2 != (void *)0x0) {
            puVar9 = puVar2;
          }
          puStack_80 = &system_data_buffer_ptr;
          uStack_68 = 0;
          puStack_78 = (int8_t *)0x0;
          uStack_70 = 0;
          if (puVar9 != (void *)0x0) {
            lVar7 = -1;
            do {
              lVar4 = lVar7;
              lVar7 = lVar4 + 1;
            } while (puVar9[lVar7] != '\0');
            if ((int)lVar7 != 0) {
              iVar8 = (int)lVar4 + 2;
              iVar3 = iVar8;
              if (iVar8 < 0x10) {
                iVar3 = 0x10;
              }
              puStack_78 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar3,0x13);
              *puStack_78 = 0;
              uVar12 = (uint64_t)puStack_78 & 0xffffffffffc00000;
              if (uVar12 == 0) {
                uVar5 = 0;
              }
              else {
                lVar7 = uVar12 + 0x80 + ((int64_t)puStack_78 - uVar12 >> 0x10) * 0x50;
                puVar10 = (uint *)(lVar7 - (uint64_t)*(uint *)(lVar7 + 4));
                if ((*(byte *)((int64_t)puVar10 + 0xe) & 2) == 0) {
                  uVar5 = puVar10[7];
                  if (0x3ffffff < uVar5) {
                    uVar5 = *puVar10 << 0x10;
                  }
                }
                else {
                  uVar5 = puVar10[7];
                  if (uVar5 < 0x4000000) {
                    uVar13 = (uint64_t)uVar5;
                  }
                  else {
                    uVar13 = (uint64_t)*puVar10 << 0x10;
                  }
                  if (0x3ffffff < uVar5) {
                    uVar5 = *puVar10 << 0x10;
                  }
                  uVar5 = uVar5 - (int)(((int64_t)puStack_78 -
                                        (((int64_t)((int64_t)puVar10 + (-0x80 - uVar12)) / 0x50) *
                                         0x10000 + uVar12)) % uVar13);
                }
              }
              uStack_68 = CONCAT44(uStack_68._4_4_,uVar5);
                    // WARNING: Subroutine does not return
              memcpy(puStack_78,puVar9,iVar8);
            }
            uStack_70 = 0;
          }
          while ((0 < (int)uStack_70 && (lVar7 = strstr(puStack_78,&system_data_ff10), lVar7 != 0))) {
            iVar8 = 6;
            iVar3 = (int)lVar7 - (int)puStack_78;
            if (uStack_70 < iVar3 + 6U) {
              iVar8 = uStack_70 - iVar3;
            }
            uVar5 = iVar3 + iVar8;
            if (uVar5 < uStack_70) {
              lVar7 = (int64_t)(int)uVar5;
              do {
                *(int8_t *)((lVar7 - iVar8) + (int64_t)puStack_78) =
                     *(int8_t *)(lVar7 + (int64_t)puStack_78);
                uVar5 = uVar5 + 1;
                lVar7 = lVar7 + 1;
              } while (uVar5 < uStack_70);
            }
            uStack_70 = uStack_70 - iVar8;
            *(int8_t *)((uint64_t)uStack_70 + (int64_t)puStack_78) = 0;
          }
          lVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(param_2 + 0x28));
          CoreEngineDataTransformer(lVar7 + 0x20,&puStack_80);
          lVar4 = FUN_1800590b0(param_2,acStackX_18,lVar7 + 0x20);
          if (acStackX_18[0] != '\0') {
            if (lVar4 == param_2) goto LAB_1804db572;
            if (*(int *)(lVar4 + 0x30) == 0) goto LAB_1804db567;
            if (*(int *)(lVar7 + 0x30) == 0) goto LAB_1804db572;
            pbVar6 = *(byte **)(lVar4 + 0x28);
            lVar11 = *(int64_t *)(lVar7 + 0x28) - (int64_t)pbVar6;
            goto LAB_1804db550;
          }
          FUN_18005d1f0(extraout_XMM0_Da,lVar7);
          puStack_80 = &system_data_buffer_ptr;
          if (puStack_78 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          puStack_78 = (int8_t *)0x0;
          uStack_68 = uStack_68 & 0xffffffff00000000;
          puStack_80 = &system_state_ptr;
          uVar14 = (int)uVar12 + 1;
          uVar12 = (uint64_t)uVar14;
          uVar15 = uVar15 + 8;
          uVar5 = uStackX_20;
        } while ((uint64_t)(int64_t)(int)uVar14 < (uint64_t)(lStack_58 - lStack_60 >> 3));
      }
      uStackX_20 = uVar5 + 1;
      uVar12 = (uint64_t)uStackX_20;
    } while ((int)uStackX_20 < *(int *)(param_1 + 0x2acc));
  }
  if (lStack_60 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
  while (pbVar6 = pbVar6 + 1, uVar5 != 0) {
LAB_1804db550:
    bVar1 = *pbVar6;
    uVar5 = (uint)pbVar6[lVar11];
    if (bVar1 != uVar5) break;
  }
  if ((int)(bVar1 - uVar5) < 1) {
LAB_1804db567:
    uVar13 = 1;
  }
LAB_1804db572:
                    // WARNING: Subroutine does not return
  SystemStateController(lVar7,lVar4,param_2,uVar13);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804db620(int64_t param_1,uint64_t param_2)
void FUN_1804db620(int64_t param_1,uint64_t param_2)

{
  int8_t *puVar1;
  uint64_t *puVar2;
  float fVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  uint uVar12;
  uint64_t *puVar13;
  int64_t lVar14;
  int8_t *puVar15;
  char cVar16;
  int64_t lVar17;
  int64_t lVar18;
  float *pfVar19;
  char cVar20;
  uint64_t uVar21;
  char *pcVar22;
  int8_t auStack_158 [32];
  uint64_t *puStack_138;
  char cStack_130;
  uint8_t uStack_12f;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  int8_t auStack_108 [189];
  int8_t auStack_4b [3];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  lVar17 = *(int64_t *)(param_1 + 0x70);
  lVar18 = *(int64_t *)(param_1 + 0x68);
  puVar9 = (uint64_t *)0x0;
  iVar4 = (int)((lVar17 - lVar18) / 0x28);
  if ((iVar4 == 0) &&
     (uVar21 = (uint64_t)
               (int)(*(int64_t *)(system_resource_state + 0x308) - *(int64_t *)(system_resource_state + 0x300)
                    >> 3), (uint64_t)((*(int64_t *)(param_1 + 0x78) - lVar18) / 0x28) < uVar21)) {
    puVar6 = puVar9;
    if (uVar21 != 0) {
      puVar6 = (uint64_t *)
               CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar21 * 0x28,*(int8_t *)(param_1 + 0x80));
      lVar18 = *(int64_t *)(param_1 + 0x68);
      lVar17 = *(int64_t *)(param_1 + 0x70);
    }
    if (lVar18 != lVar17) {
                    // WARNING: Subroutine does not return
      memmove(puVar6,lVar18,lVar17 - lVar18);
    }
    if (lVar18 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar18);
    }
    *(uint64_t **)(param_1 + 0x68) = puVar6;
    *(uint64_t **)(param_1 + 0x70) = puVar6;
    *(uint64_t **)(param_1 + 0x78) = puVar6 + uVar21 * 5;
  }
  if (0 < iVar4) {
    puVar6 = (uint64_t *)(*(int64_t *)(param_1 + 0x68) + 0x20);
    puVar10 = puVar9;
    do {
      if (*puVar6 == param_2) goto LAB_1804dbe6e;
      puVar10 = (uint64_t *)((int64_t)puVar10 + 1);
      puVar6 = puVar6 + 5;
    } while ((int64_t)puVar10 < (int64_t)iVar4);
  }
  puVar15 = auStack_108;
  lVar18 = 0x40;
  do {
    func_0x0001804dbea0(puVar15);
    puVar15 = puVar15 + 3;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  cVar20 = *(char *)(param_2 + 0x148) + -1;
  cVar16 = '\0';
  if (-1 < cVar20) {
    puVar15 = auStack_108 + (int64_t)cVar20 * 3 + 2;
    pcVar22 = (char *)((int64_t)cVar20 * 0x1b0 + *(int64_t *)(param_2 + 0x140) + 0x104);
    do {
      if (0.0 < *(float *)(pcVar22 + 0x54)) {
        if (*pcVar22 != -1) {
          puVar6 = puVar9;
          puVar10 = puVar9;
          puVar11 = puVar9;
          puVar13 = puVar9;
          if (0 < system_system_memory) {
            do {
              if (*(char *)((int64_t)puVar6 + system_system_memory) == *pcVar22) {
                puVar10 = (uint64_t *)(system_system_memory + (int64_t)(int)puVar13 * 3);
                break;
              }
              puVar11 = (uint64_t *)((int64_t)puVar11 + 1);
              puVar6 = (uint64_t *)((int64_t)puVar6 + 3);
              puVar13 = (uint64_t *)(uint64_t)((int)puVar13 + 1);
            } while ((int64_t)puVar11 < (int64_t)system_system_memory);
          }
          puVar15[-2] = *(int8_t *)((int64_t)puVar10 + 1);
          *puVar15 = *(int8_t *)((int64_t)puVar10 + 2);
        }
        puVar15[-1] = cVar20;
        cVar16 = cVar16 + '\x01';
      }
      pcVar22 = pcVar22 + -0x1b0;
      puVar15 = puVar15 + -3;
      cVar20 = cVar20 + -1;
    } while (-1 < cVar20);
  }
  FUN_1804de680(auStack_108,auStack_4b);
  uVar21 = (uint64_t)cVar16;
  puVar6 = puVar9;
  if (cVar16 != '\0') {
    puVar6 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar21 * 0x30,3);
    puVar10 = puVar6 + 4;
    puVar11 = puVar9;
    do {
      uVar12 = (int)puVar11 + 1;
      puVar11 = (uint64_t *)(uint64_t)uVar12;
      *(int32_t *)(puVar10 + -4) = 0;
      *(int32_t *)((int64_t)puVar10 + -0x1c) = 0;
      *(int32_t *)(puVar10 + -3) = 0;
      *(int32_t *)((int64_t)puVar10 + -0x14) = 0;
      *puVar10 = 0;
      *(int32_t *)(puVar10 + 1) = 0;
      *(int16_t *)((int64_t)puVar10 + 0xc) = 0xffff;
      *(int8_t *)((int64_t)puVar10 + 0xe) = 0;
      puVar10[-2] = 0;
      puVar10[-1] = 0;
      puVar10 = puVar10 + 6;
    } while ((uint64_t)(int64_t)(int)uVar12 < uVar21);
  }
  puVar10 = puVar9;
  if (3 < (int64_t)uVar21) {
    puVar15 = auStack_108;
    lVar18 = (uVar21 - 4 >> 2) + 1;
    pfVar19 = (float *)(puVar6 + 3);
    puVar10 = (uint64_t *)(lVar18 * 4);
    do {
      lVar17 = *(int64_t *)(param_2 + 0x140);
      cVar20 = puVar15[1];
      lVar14 = (int64_t)cVar20 * 0x1b0;
      puVar2 = (uint64_t *)(lVar14 + 0x138 + lVar17);
      uVar5 = puVar2[1];
      *(uint64_t *)(pfVar19 + -6) = *puVar2;
      *(uint64_t *)(pfVar19 + -4) = uVar5;
      puVar2 = (uint64_t *)(lVar14 + 0x148 + lVar17);
      uVar5 = puVar2[1];
      *(uint64_t *)(pfVar19 + -2) = *puVar2;
      *(uint64_t *)pfVar19 = uVar5;
      pfVar19[2] = *(float *)(lVar14 + 0x158 + lVar17);
      fVar3 = *(float *)(lVar14 + 0x17c + lVar17);
      pfVar19[3] = fVar3;
      *(char *)(pfVar19 + 5) = cVar20;
      pfVar19[4] = SQRT((pfVar19[-2] - pfVar19[-6]) * (pfVar19[-2] - pfVar19[-6]) +
                        (pfVar19[-1] - pfVar19[-5]) * (pfVar19[-1] - pfVar19[-5]) +
                        (*pfVar19 - pfVar19[-4]) * (*pfVar19 - pfVar19[-4])) + fVar3 + fVar3;
      *(int8_t *)((int64_t)pfVar19 + 0x15) = *puVar15;
      *(int8_t *)((int64_t)pfVar19 + 0x16) = puVar15[2];
      lVar17 = *(int64_t *)(param_2 + 0x140);
      cVar20 = puVar15[4];
      lVar14 = (int64_t)cVar20 * 0x1b0;
      puVar2 = (uint64_t *)(lVar14 + 0x138 + lVar17);
      uVar5 = puVar2[1];
      *(uint64_t *)(pfVar19 + 6) = *puVar2;
      *(uint64_t *)(pfVar19 + 8) = uVar5;
      puVar2 = (uint64_t *)(lVar14 + 0x148 + lVar17);
      uVar5 = puVar2[1];
      *(uint64_t *)(pfVar19 + 10) = *puVar2;
      *(uint64_t *)(pfVar19 + 0xc) = uVar5;
      pfVar19[0xe] = *(float *)(lVar14 + 0x158 + lVar17);
      fVar3 = *(float *)(lVar14 + 0x17c + lVar17);
      pfVar19[0xf] = fVar3;
      *(char *)(pfVar19 + 0x11) = cVar20;
      pfVar19[0x10] =
           SQRT((pfVar19[10] - pfVar19[6]) * (pfVar19[10] - pfVar19[6]) +
                (pfVar19[0xb] - pfVar19[7]) * (pfVar19[0xb] - pfVar19[7]) +
                (pfVar19[0xc] - pfVar19[8]) * (pfVar19[0xc] - pfVar19[8])) + fVar3 + fVar3;
      *(int8_t *)((int64_t)pfVar19 + 0x45) = puVar15[3];
      *(int8_t *)((int64_t)pfVar19 + 0x46) = puVar15[5];
      lVar17 = *(int64_t *)(param_2 + 0x140);
      cVar20 = puVar15[7];
      lVar14 = (int64_t)cVar20 * 0x1b0;
      puVar2 = (uint64_t *)(lVar14 + 0x138 + lVar17);
      uVar5 = puVar2[1];
      *(uint64_t *)(pfVar19 + 0x12) = *puVar2;
      *(uint64_t *)(pfVar19 + 0x14) = uVar5;
      puVar2 = (uint64_t *)(lVar14 + 0x148 + lVar17);
      uVar5 = puVar2[1];
      *(uint64_t *)(pfVar19 + 0x16) = *puVar2;
      *(uint64_t *)(pfVar19 + 0x18) = uVar5;
      pfVar19[0x1a] = *(float *)(lVar14 + 0x158 + lVar17);
      fVar3 = *(float *)(lVar14 + 0x17c + lVar17);
      pfVar19[0x1b] = fVar3;
      *(char *)(pfVar19 + 0x1d) = cVar20;
      pfVar19[0x1c] =
           SQRT((pfVar19[0x16] - pfVar19[0x12]) * (pfVar19[0x16] - pfVar19[0x12]) +
                (pfVar19[0x17] - pfVar19[0x13]) * (pfVar19[0x17] - pfVar19[0x13]) +
                (pfVar19[0x18] - pfVar19[0x14]) * (pfVar19[0x18] - pfVar19[0x14])) + fVar3 + fVar3;
      *(int8_t *)((int64_t)pfVar19 + 0x75) = puVar15[6];
      *(int8_t *)((int64_t)pfVar19 + 0x76) = puVar15[8];
      lVar17 = *(int64_t *)(param_2 + 0x140);
      cVar20 = puVar15[10];
      lVar14 = (int64_t)cVar20 * 0x1b0;
      puVar2 = (uint64_t *)(lVar14 + 0x138 + lVar17);
      uVar5 = puVar2[1];
      *(uint64_t *)(pfVar19 + 0x1e) = *puVar2;
      *(uint64_t *)(pfVar19 + 0x20) = uVar5;
      puVar2 = (uint64_t *)(lVar14 + 0x148 + lVar17);
      uVar5 = puVar2[1];
      *(uint64_t *)(pfVar19 + 0x22) = *puVar2;
      *(uint64_t *)(pfVar19 + 0x24) = uVar5;
      pfVar19[0x26] = *(float *)(lVar14 + 0x158 + lVar17);
      fVar3 = *(float *)(lVar14 + 0x17c + lVar17);
      pfVar19[0x27] = fVar3;
      *(char *)(pfVar19 + 0x29) = cVar20;
      pfVar19[0x28] =
           SQRT((pfVar19[0x22] - pfVar19[0x1e]) * (pfVar19[0x22] - pfVar19[0x1e]) +
                (pfVar19[0x23] - pfVar19[0x1f]) * (pfVar19[0x23] - pfVar19[0x1f]) +
                (pfVar19[0x24] - pfVar19[0x20]) * (pfVar19[0x24] - pfVar19[0x20])) + fVar3 + fVar3;
      *(int8_t *)((int64_t)pfVar19 + 0xa5) = puVar15[9];
      puVar1 = puVar15 + 0xb;
      puVar15 = puVar15 + 0xc;
      *(int8_t *)((int64_t)pfVar19 + 0xa6) = *puVar1;
      pfVar19 = pfVar19 + 0x30;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  if ((int64_t)puVar10 < (int64_t)uVar21) {
    puVar15 = auStack_108 + (int64_t)puVar10 * 3;
    pfVar19 = (float *)(puVar6 + (int64_t)puVar10 * 6 + 3);
    lVar18 = uVar21 - (int64_t)puVar10;
    do {
      lVar17 = *(int64_t *)(param_2 + 0x140);
      cVar20 = puVar15[1];
      lVar14 = (int64_t)cVar20 * 0x1b0;
      puVar2 = (uint64_t *)(lVar14 + 0x138 + lVar17);
      uVar5 = puVar2[1];
      *(uint64_t *)(pfVar19 + -6) = *puVar2;
      *(uint64_t *)(pfVar19 + -4) = uVar5;
      puVar2 = (uint64_t *)(lVar14 + 0x148 + lVar17);
      uVar5 = puVar2[1];
      *(uint64_t *)(pfVar19 + -2) = *puVar2;
      *(uint64_t *)pfVar19 = uVar5;
      pfVar19[2] = *(float *)(lVar14 + 0x158 + lVar17);
      fVar3 = *(float *)(lVar14 + 0x17c + lVar17);
      pfVar19[3] = fVar3;
      *(char *)(pfVar19 + 5) = cVar20;
      pfVar19[4] = SQRT((pfVar19[-2] - pfVar19[-6]) * (pfVar19[-2] - pfVar19[-6]) +
                        (pfVar19[-1] - pfVar19[-5]) * (pfVar19[-1] - pfVar19[-5]) +
                        (*pfVar19 - pfVar19[-4]) * (*pfVar19 - pfVar19[-4])) + fVar3 + fVar3;
      *(int8_t *)((int64_t)pfVar19 + 0x15) = *puVar15;
      puVar1 = puVar15 + 2;
      puVar15 = puVar15 + 3;
      *(int8_t *)((int64_t)pfVar19 + 0x16) = *puVar1;
      pfVar19 = pfVar19 + 0xc;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  puVar7 = (int32_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x34,4,3);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  FUN_1800b9f60(puVar7);
  puVar8 = (int32_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x34,4,3);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  uStack_120 = FUN_1800b9f60(puVar8);
  puVar10 = *(uint64_t **)(param_1 + 0x70);
  puStack_138 = puVar6;
  cStack_130 = cVar16;
  uStack_128 = puVar7;
  uStack_118 = param_2;
  if (puVar10 < *(uint64_t **)(param_1 + 0x78)) {
    *(uint64_t **)(param_1 + 0x70) = puVar10 + 5;
    *puVar10 = (uint64_t)puVar6;
    puVar10[1] = CONCAT71(uStack_12f,cVar16);
    puVar10[2] = (uint64_t)puVar7;
    puVar10[3] = uStack_120;
    puVar10[4] = param_2;
    goto LAB_1804dbe6e;
  }
  puVar6 = *(uint64_t **)(param_1 + 0x68);
  lVar18 = ((int64_t)puVar10 - (int64_t)puVar6) / 0x28;
  if (lVar18 == 0) {
    lVar18 = 1;
LAB_1804dbdc3:
    puVar9 = (uint64_t *)
             CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar18 * 0x28,*(int8_t *)(param_1 + 0x80));
    puVar6 = *(uint64_t **)(param_1 + 0x68);
    puVar10 = *(uint64_t **)(param_1 + 0x70);
  }
  else {
    lVar18 = lVar18 * 2;
    if (lVar18 != 0) goto LAB_1804dbdc3;
  }
  if (puVar6 != puVar10) {
                    // WARNING: Subroutine does not return
    memmove(puVar9,puVar6,(int64_t)puVar10 - (int64_t)puVar6);
  }
  *puVar9 = (uint64_t)puStack_138;
  puVar9[1] = CONCAT71(uStack_12f,cStack_130);
  *(int32_t *)(puVar9 + 2) = (int32_t)uStack_128;
  *(int32_t *)((int64_t)puVar9 + 0x14) = uStack_128._4_4_;
  *(int32_t *)(puVar9 + 3) = (int32_t)uStack_120;
  *(int32_t *)((int64_t)puVar9 + 0x1c) = uStack_120._4_4_;
  puVar9[4] = uStack_118;
  if (*(int64_t *)(param_1 + 0x68) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t **)(param_1 + 0x68) = puVar9;
  *(uint64_t **)(param_1 + 0x70) = puVar9 + 5;
  *(uint64_t **)(param_1 + 0x78) = puVar9 + lVar18 * 5;
LAB_1804dbe6e:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_158);
}



uint FUN_1804dbeb0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(int64_t *)(param_1 + 6) - *(int64_t *)(param_1 + 4) & 0xfffffffffffffffcU) == 0) {
    FUN_1804dc7a0();
  }
  uVar2 = *(uint *)(*(int64_t *)(param_1 + 6) + -4);
  *(uint **)(param_1 + 6) = (uint *)(*(int64_t *)(param_1 + 6) + -4);
  iVar3 = param_1[1];
  if (param_1[1] <= (int)uVar2) {
    iVar3 = uVar2 + 1;
  }
  param_1[1] = iVar3;
  piVar1 = (int *)(*(int64_t *)(*(int64_t *)(param_1 + 0xc) + (int64_t)((int)uVar2 >> 10) * 8) +
                  (int64_t)(int)(param_1[0x14] & uVar2) * 0xc);
  iVar3 = *param_1;
  *param_1 = iVar3 + 1;
  *piVar1 = iVar3;
  piVar1[1] = uVar2;
  if (piVar1 + 2 != (int *)0x0) {
    piVar1[2] = 0;
  }
  return uVar2;
}



uint FUN_1804dbf30(int *param_1)

{
  uint uVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  
  if ((*(int64_t *)(param_1 + 6) - *(int64_t *)(param_1 + 4) & 0xfffffffffffffffcU) == 0) {
    FUN_1804dc9e0();
  }
  uVar1 = *(uint *)(*(int64_t *)(param_1 + 6) + -4);
  *(uint **)(param_1 + 6) = (uint *)(*(int64_t *)(param_1 + 6) + -4);
  iVar3 = param_1[1];
  if (param_1[1] <= (int)uVar1) {
    iVar3 = uVar1 + 1;
  }
  param_1[1] = iVar3;
  lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0xc) + (int64_t)((int)uVar1 >> 10) * 8);
  lVar4 = (int64_t)(int)(param_1[0x14] & uVar1);
  iVar3 = *param_1;
  *param_1 = iVar3 + 1;
  *(int *)(lVar2 + lVar4 * 0x28) = iVar3;
  *(uint *)(lVar2 + 4 + lVar4 * 0x28) = uVar1;
  puVar5 = (uint64_t *)(lVar4 * 0x28 + 8 + lVar2);
  *puVar5 = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(int32_t *)(puVar5 + 3) = 0;
  return uVar1;
}



uint FUN_1804dbfe0(int *param_1)

{
  uint uVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  
  if ((*(int64_t *)(param_1 + 6) - *(int64_t *)(param_1 + 4) & 0xfffffffffffffffcU) == 0) {
    FUN_1804dcc20();
  }
  uVar1 = *(uint *)(*(int64_t *)(param_1 + 6) + -4);
  *(uint **)(param_1 + 6) = (uint *)(*(int64_t *)(param_1 + 6) + -4);
  iVar3 = param_1[1];
  if (param_1[1] <= (int)uVar1) {
    iVar3 = uVar1 + 1;
  }
  param_1[1] = iVar3;
  lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0xc) + (int64_t)((int)uVar1 >> 10) * 8);
  lVar4 = (int64_t)(int)(param_1[0x14] & uVar1);
  iVar3 = *param_1;
  *param_1 = iVar3 + 1;
  *(int *)(lVar2 + lVar4 * 0x18) = iVar3;
  *(uint *)(lVar2 + 4 + lVar4 * 0x18) = uVar1;
  puVar5 = (uint64_t *)(lVar4 * 0x18 + 8 + lVar2);
  *puVar5 = 0;
  puVar5[1] = 0;
  return uVar1;
}



uint64_t * FUN_1804dc080(uint64_t *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 5) = 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(int32_t *)(param_1 + 9) = 3;
  *(int32_t *)(param_1 + 10) = 0x3ff;
  *(int32_t *)((int64_t)param_1 + 0x54) = 0x400;
  *param_1 = 0;
  *(int32_t *)(param_1 + 1) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




