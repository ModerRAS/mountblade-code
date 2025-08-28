/* UtilitiesSystem_272a0 - RenderingSystem_ResourceRegistrar */
#define RenderingSystem_ResourceRegistrar UtilitiesSystem_272a0
/* NetworkSystem_ProtocolParser - RenderingSystem_StringParser */
#define RenderingSystem_StringParser NetworkSystem_ProtocolParser
#include "CoreSystem_ValidationEngine0_definition.h"
#include "SystemAdvancedValidator_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part021.c - 1 个函数
// 函数: void DataStructure_7ba80(int64_t param_1,uint64_t param_2,int8_t param_3)
void DataStructure_7ba80(int64_t param_1,uint64_t param_2,int8_t param_3)
{
  char cVar1;
  char cVar2;
  bool bVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int32_t uVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int64_t lVar10;
  int32_t *puVar11;
  int64_t *plVar12;
  char *pcVar13;
  uint64_t uVar14;
  void *puVar15;
  uint64_t uVar16;
  uint uVar17;
  uint64_t uVar18;
  int32_t *puVar19;
  int iVar20;
  uint64_t uVar21;
  int iVar22;
  bool bVar23;
  int8_t *pstack_special_x_8;
  int aiStackX_18 [2];
  uint64_t *pstack_special_x_20;
  int8_t stack_array_198 [8];
  void *plocal_var_190;
  uint local_var_188;
  uint64_t local_var_180;
  int aiStack_178 [2];
  void *plocal_var_170;
  char *pcStack_168;
  uint local_var_160;
  uint64_t local_var_158;
  int64_t *plStack_150;
  int64_t *plStack_148;
  int64_t lStack_140;
  int64_t *plStack_138;
  int32_t local_var_130;
  int64_t *plStack_128;
  int16_t local_var_120;
  char cStack_11e;
  int aiStack_118 [2];
  int64_t *plStack_110;
  int64_t *plStack_108;
  int8_t stack_array_100 [8];
  uint64_t local_var_f8;
  int64_t *plStack_e8;
  char cStack_e0;
  char cStack_df;
  char cStack_de;
  void *plocal_var_d8;
  void *plocal_var_d0;
  uint local_var_c8;
  int32_t local_var_c0;
  int aiStack_b8 [2];
  int64_t *plStack_b0;
  int64_t *plStack_a8;
  int8_t stack_array_a0 [4];
  int8_t stack_array_9c [4];
  int64_t *plStack_98;
  int64_t *plStack_90;
  int64_t *plStack_88;
  int64_t *plStack_80;
  int64_t *plStack_78;
  void *plocal_var_70;
  int64_t lStack_68;
  int32_t local_var_58;
  uint64_t local_var_50;
  int64_t *plStack_48;
  aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,param_3);
  local_var_50 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0x324) < 1) {
    return;
  }
  SystemCore_EncryptionEngine0(stack_array_198);
  iVar20 = local_var_188 + -1;
  lVar7 = (int64_t)iVar20;
  if (-1 < iVar20) {
    do {
      if (*(char *)(lVar7 + (int64_t)plocal_var_190) == '/') goto LAB_18027baf2;
      iVar20 = iVar20 + -1;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  iVar20 = -1;
LAB_18027baf2:
  lVar7 = RenderingSystem_StringParser(stack_array_198,&plocal_var_70,0,iVar20);
  if (plocal_var_190 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  local_var_188 = *(uint *)(lVar7 + 0x10);
  plocal_var_190 = *(void **)(lVar7 + 8);
  local_var_180 = *(uint64_t *)(lVar7 + 0x18);
  *(int32_t *)(lVar7 + 0x10) = 0;
  *(uint64_t *)(lVar7 + 8) = 0;
  *(uint64_t *)(lVar7 + 0x18) = 0;
  plocal_var_70 = &system_data_buffer_ptr;
  if (lStack_68 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_68 = 0;
  local_var_58 = 0;
  plocal_var_70 = &system_state_ptr;
  uVar17 = local_var_188 + 4;
  CoreEngineDataBufferProcessor(stack_array_198,uVar17);
  *(int32_t *)(plocal_var_190 + local_var_188) = 0x646d6d2f;
  *(int8_t *)((int64_t)(plocal_var_190 + local_var_188) + 4) = 0;
  local_var_188 = uVar17;
  RenderingSystem_CameraController(stack_array_198,*(int32_t *)(param_1 + 0x324));
  iVar20 = local_var_188 + 4;
  CoreEngineDataBufferProcessor(stack_array_198,iVar20);
  *(int32_t *)(plocal_var_190 + local_var_188) = 0x646d6d2e;
  *(int8_t *)((int64_t)(plocal_var_190 + local_var_188) + 4) = 0;
  local_var_188 = iVar20;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
  puVar15 = &system_buffer_ptr;
  if (plocal_var_190 != (void *)0x0) {
    puVar15 = plocal_var_190;
  }
  lVar7 = 0;
  *puVar8 = 0;
  *(int8_t *)(puVar8 + 2) = 0;
  pstack_special_x_20 = puVar8;
  SystemCore_Validator(puVar8,puVar15,&processed_var_4880_ptr);
  if (puVar8[1] == 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar8);
  }
  fread(aiStack_b8,4,1);
  lVar9 = (int64_t)aiStack_b8[0];
  if (aiStack_b8[0] == 0x31444d4d) {
    fread(aiStack_118,4,1,puVar8[1]);
    aiStackX_18[0] = 0;
    if (0 < aiStack_118[0]) {
      do {
        fread(aiStack_178,4,1,puVar8[1]);
        plVar12 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(int64_t)(aiStack_178[0] + 1),0x10,3);
        plStack_b0 = plVar12;
        fread(plVar12,1,(int64_t)aiStack_178[0],puVar8[1]);
        *(int8_t *)((int64_t)aiStack_178[0] + (int64_t)plVar12) = 0;
        CoreMemoryPoolValidator(&plocal_var_d8,plVar12);
        while ((0 < (int)local_var_c8 && (lVar7 = strstr(plocal_var_d0,&system_data_ff10), lVar7 != 0))) {
          iVar22 = 6;
          iVar20 = (int)lVar7 - (int)plocal_var_d0;
          if (local_var_c8 < iVar20 + 6U) {
            iVar22 = local_var_c8 - iVar20;
          }
          uVar17 = iVar20 + iVar22;
          if (uVar17 < local_var_c8) {
            lVar7 = (int64_t)(int)uVar17;
            lVar9 = lVar7 - iVar22;
            do {
              plocal_var_d0[lVar9] = plocal_var_d0[lVar7];
              uVar17 = uVar17 + 1;
              lVar7 = lVar7 + 1;
              lVar9 = lVar9 + 1;
            } while (uVar17 < local_var_c8);
          }
          local_var_c8 = local_var_c8 - iVar22;
          plocal_var_d0[local_var_c8] = 0;
        }
        fread(stack_array_9c,4,1,puVar8[1]);
        fread(&pstack_special_x_8,4,1,puVar8[1]);
        puVar11 = (int32_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(int64_t)(int)pstack_special_x_8 << 2,0x10,3);
        fread(puVar11,4,(int64_t)(int)pstack_special_x_8);
        bVar3 = false;
        uVar18 = 0;
        lVar7 = *(int64_t *)(param_1 + 0x38);
        uVar14 = uVar18;
        if (*(int64_t *)(param_1 + 0x40) - lVar7 >> 4 == 0) {
LAB_18027c5be:
          puVar15 = &system_buffer_ptr;
          if (plocal_var_d0 != (void *)0x0) {
            puVar15 = plocal_var_d0;
          }
          RenderingSystem_ResourceRegistrar(&processed_var_9040_ptr,puVar15);
        }
        else {
          do {
            lVar7 = *(int64_t *)(uVar18 + lVar7);
            plocal_var_170 = &system_data_buffer_ptr;
            local_var_158 = 0;
            pcStack_168 = (char *)0x0;
            local_var_160 = 0;
            iVar20 = *(int *)(lVar7 + 0x20);
            if (iVar20 != 0) {
              iVar22 = iVar20 + 1;
              if (iVar22 < 0x10) {
                iVar22 = 0x10;
              }
              pcStack_168 = (char *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar22,
                                                  CONCAT71((uint7)(uint3)((uint)iVar20 >> 8),0x13));
              *pcStack_168 = '\0';
              uVar6 = CoreEngineSystemCleanup(pcStack_168);
              local_var_158 = CONCAT44(local_var_158._4_4_,uVar6);
              if (0 < *(int *)(lVar7 + 0x20)) {
                puVar15 = &system_buffer_ptr;
                if (*(void **)(lVar7 + 0x18) != (void *)0x0) {
                  puVar15 = *(void **)(lVar7 + 0x18);
                }
// WARNING: Subroutine does not return
                memcpy(pcStack_168,puVar15,(int64_t)(*(int *)(lVar7 + 0x20) + 1));
              }
            }
            if ((*(int64_t *)(lVar7 + 0x18) != 0) && (local_var_160 = 0, pcStack_168 != (char *)0x0))
            {
              *pcStack_168 = '\0';
            }
            while ((0 < (int)local_var_160 && (lVar7 = strstr(pcStack_168,&system_data_ff10), lVar7 != 0))
                  ) {
              iVar22 = 6;
              iVar20 = (int)lVar7 - (int)pcStack_168;
              if (local_var_160 < iVar20 + 6U) {
                iVar22 = local_var_160 - iVar20;
              }
              uVar17 = iVar20 + iVar22;
              if (uVar17 < local_var_160) {
                lVar7 = (int64_t)(int)uVar17;
                lVar9 = lVar7 - iVar22;
                do {
                  pcStack_168[lVar9] = pcStack_168[lVar7];
                  uVar17 = uVar17 + 1;
                  lVar7 = lVar7 + 1;
                  lVar9 = lVar9 + 1;
                } while (uVar17 < local_var_160);
              }
              local_var_160 = local_var_160 - iVar22;
              pcStack_168[local_var_160] = '\0';
            }
            if (local_var_160 == local_var_c8) {
              if (local_var_160 == 0) {
LAB_18027c2fe:
                if (local_var_c8 != 0) goto LAB_18027c306;
                bVar23 = true;
              }
              else {
                pcVar13 = pcStack_168;
                do {
                  cVar1 = *pcVar13;
                  cVar2 = pcVar13[(int64_t)plocal_var_d0 - (int64_t)pcStack_168];
                  if (cVar1 != cVar2) break;
                  pcVar13 = pcVar13 + 1;
                } while (cVar2 != '\0');
                bVar23 = cVar1 == cVar2;
              }
            }
            else {
              if (local_var_160 == 0) goto LAB_18027c2fe;
LAB_18027c306:
              bVar23 = false;
            }
            if (bVar23) {
              bVar3 = true;
              plVar12 = *(int64_t **)(uVar18 + *(int64_t *)(param_1 + 0x38));
              GenericFunction_18007ea10(plVar12,0);
              plStack_48 = plVar12;
              if (plVar12 != (int64_t *)0x0) {
                (**(code **)(*plVar12 + 0x28))(plVar12);
              }
              plStack_150 = (int64_t *)0x0;
              plStack_148 = (int64_t *)0x0;
              plStack_a8 = &lStack_140;
              plStack_128 = (int64_t *)0x0;
              plStack_138 = (int64_t *)0x0;
              lStack_140._0_1_ = 0;
              if (plVar12 != (int64_t *)0x0) {
                plStack_90 = plVar12;
                (**(code **)(*plVar12 + 0x28))(plVar12);
              }
              plStack_90 = plStack_150;
              plVar5 = plVar12;
              if (plStack_150 != (int64_t *)0x0) {
                lVar7 = *plStack_150;
                plStack_150 = plVar12;
                (**(code **)(lVar7 + 0x38))();
                plVar5 = plStack_150;
              }
              plStack_150 = plVar5;
              local_var_130 = 0;
              plStack_138 = plVar12;
              CoreEngine_07F4C0(&lStack_140);
              plVar5 = plStack_128;
              plStack_88 = plStack_128;
              if (plStack_128 != (int64_t *)0x0) {
                (**(code **)(*plStack_128 + 0x28))(plStack_128);
              }
              plVar4 = plStack_148;
              plStack_88 = plStack_148;
              plStack_148 = plVar5;
              if (plVar4 != (int64_t *)0x0) {
                (**(code **)(*plVar4 + 0x38))();
              }
              local_var_120 = 0;
              cStack_11e = '\0';
              if (plVar12 != (int64_t *)0x0) {
                (**(code **)(*plVar12 + 0x38))(plVar12);
              }
              if ((int)plStack_148[0xc] == (int)pstack_special_x_8) {
                uVar16 = 0;
                puVar19 = puVar11;
                uVar21 = uVar16;
                if (0 < (int)pstack_special_x_8) {
                  do {
                    *(int32_t *)(plStack_148[0xd] + 0x54 + uVar16) = *puVar19;
                    local_var_120 = CONCAT11(local_var_120._1_1_,1);
                    uVar17 = (int)uVar21 + 1;
                    uVar16 = uVar16 + 0x5c;
                    puVar19 = puVar19 + 1;
                    uVar21 = (uint64_t)uVar17;
                  } while ((int)uVar17 < (int)pstack_special_x_8);
                }
              }
              else {
                pcVar13 = "";
                if (pcStack_168 != (char *)0x0) {
                  pcVar13 = pcStack_168;
                }
                RenderingSystem_ResourceRegistrar(&processed_var_8944_ptr,pcVar13);
              }
              if (plStack_148 != (int64_t *)0x0) {
                if (cStack_11e != '\0') {
                  SystemConfig_Manager(plStack_150);
                }
                SystemSecurityManager(&lStack_140);
                if ((char)local_var_120 != '\0') {
                  SystemInitializer(plStack_150);
                }
                if (local_var_120._1_1_ != '\0') {
                  SystemInitializer(plStack_150);
                }
                plVar12 = plStack_148;
                plStack_80 = plStack_148;
                plStack_148 = (int64_t *)0x0;
                if (plVar12 != (int64_t *)0x0) {
                  (**(code **)(*plVar12 + 0x38))();
                }
              }
              if ((plStack_150 != (int64_t *)0x0) && (plStack_148 != (int64_t *)0x0)) {
                if (cStack_11e != '\0') {
                  SystemConfig_Manager();
                }
                SystemSecurityManager(&lStack_140);
                if ((char)local_var_120 != '\0') {
                  SystemInitializer(plStack_150);
                }
                if (local_var_120._1_1_ != '\0') {
                  SystemInitializer(plStack_150);
                }
                plVar12 = plStack_148;
                plStack_78 = plStack_148;
                plStack_148 = (int64_t *)0x0;
                if (plVar12 != (int64_t *)0x0) {
                  (**(code **)(*plVar12 + 0x38))();
                }
              }
              plStack_a8 = &lStack_140;
              SystemSecurityManager(&lStack_140);
              if (plStack_128 != (int64_t *)0x0) {
                (**(code **)(*plStack_128 + 0x38))();
              }
              if (plStack_148 != (int64_t *)0x0) {
                (**(code **)(*plStack_148 + 0x38))();
              }
              if (plStack_150 != (int64_t *)0x0) {
                (**(code **)(*plStack_150 + 0x38))();
              }
            }
            plocal_var_170 = &system_data_buffer_ptr;
            if (pcStack_168 != (char *)0x0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            pcStack_168 = (char *)0x0;
            local_var_158 = local_var_158 & 0xffffffff00000000;
            plocal_var_170 = &system_state_ptr;
            uVar17 = (int)uVar14 + 1;
            uVar18 = uVar18 + 0x10;
            lVar7 = *(int64_t *)(param_1 + 0x38);
            uVar14 = (uint64_t)uVar17;
          } while ((uint64_t)(int64_t)(int)uVar17 <
                   (uint64_t)(*(int64_t *)(param_1 + 0x40) - lVar7 >> 4));
          if (!bVar3) goto LAB_18027c5be;
        }
        if (puVar11 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(puVar11);
        }
        if (plStack_b0 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        plocal_var_d8 = &system_data_buffer_ptr;
        if (plocal_var_d0 != (void *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        plocal_var_d0 = (void *)0x0;
        local_var_c0 = 0;
        plocal_var_d8 = &system_state_ptr;
        aiStackX_18[0] = aiStackX_18[0] + 1;
        puVar8 = pstack_special_x_20;
      } while (aiStackX_18[0] < aiStack_118[0]);
    }
  }
  else if (0 < aiStack_b8[0]) {
    do {
      fread(&pstack_special_x_20,4,1,puVar8[1]);
      lVar10 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(int64_t)((int)pstack_special_x_20 + 1),0x10,3);
      fread(lVar10,1,(int64_t)(int)pstack_special_x_20,puVar8[1]);
      *(int8_t *)((int)pstack_special_x_20 + lVar10) = 0;
      fread(stack_array_a0,4,1,puVar8[1]);
      fread(aiStackX_18,4,1,puVar8[1]);
      puVar11 = (int32_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(int64_t)aiStackX_18[0] << 2,0x10,3);
      fread(puVar11,4,(int64_t)aiStackX_18[0],puVar8[1]);
      plVar12 = *(int64_t **)(lVar7 + *(int64_t *)(param_1 + 0x38));
      GenericFunction_18007ea10(plVar12,0);
      plStack_a8 = plVar12;
      if (plVar12 != (int64_t *)0x0) {
        (**(code **)(*plVar12 + 0x28))();
      }
      plStack_110 = (int64_t *)0x0;
      plStack_108 = (int64_t *)0x0;
      pstack_special_x_8 = stack_array_100;
      plStack_e8 = (int64_t *)0x0;
      local_var_f8 = 0;
      stack_array_100[0] = 0;
      RenderingSystem_MaterialProcessor(&plStack_110,plVar12,0);
      if (plVar12 != (int64_t *)0x0) {
        (**(code **)(*plVar12 + 0x38))(plVar12);
      }
      uVar14 = 0;
      puVar19 = puVar11;
      uVar18 = uVar14;
      if (0 < aiStackX_18[0]) {
        do {
          *(int32_t *)(plStack_108[0xd] + 0x54 + uVar14) = *puVar19;
          cStack_e0 = '\x01';
          uVar17 = (int)uVar18 + 1;
          uVar14 = uVar14 + 0x5c;
          puVar19 = puVar19 + 1;
          uVar18 = (uint64_t)uVar17;
        } while ((int)uVar17 < aiStackX_18[0]);
      }
      if (plStack_108 != (int64_t *)0x0) {
        if (cStack_de != '\0') {
          SystemConfig_Manager(plStack_110);
        }
        SystemSecurityManager(stack_array_100);
        if (cStack_e0 != '\0') {
          SystemInitializer(plStack_110);
        }
        if (cStack_df != '\0') {
          SystemInitializer(plStack_110);
        }
        plVar12 = plStack_108;
        plStack_98 = plStack_108;
        plStack_108 = (int64_t *)0x0;
        if (plVar12 != (int64_t *)0x0) {
          (**(code **)(*plVar12 + 0x38))();
        }
      }
      if ((plStack_110 != (int64_t *)0x0) && (plStack_108 != (int64_t *)0x0)) {
        if (cStack_de != '\0') {
          SystemConfig_Manager();
        }
        SystemSecurityManager(stack_array_100);
        if (cStack_e0 != '\0') {
          SystemInitializer(plStack_110);
        }
        if (cStack_df != '\0') {
          SystemInitializer(plStack_110);
        }
        plVar12 = plStack_108;
        plStack_b0 = plStack_108;
        plStack_108 = (int64_t *)0x0;
        if (plVar12 != (int64_t *)0x0) {
          (**(code **)(*plVar12 + 0x38))();
        }
      }
      pstack_special_x_8 = stack_array_100;
      SystemSecurityManager(stack_array_100);
      if (plStack_e8 != (int64_t *)0x0) {
        (**(code **)(*plStack_e8 + 0x38))();
      }
      if (plStack_108 != (int64_t *)0x0) {
        (**(code **)(*plStack_108 + 0x38))();
      }
      if (plStack_110 != (int64_t *)0x0) {
        (**(code **)(*plStack_110 + 0x38))();
      }
      if (puVar11 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar11);
      }
      if (lVar10 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar10);
      }
      lVar7 = lVar7 + 0x10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if (puVar8[1] != 0) {
    fclose();
    puVar8[1] = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address