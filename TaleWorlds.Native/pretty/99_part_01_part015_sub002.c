// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: MemoryDebugger */
#define MemoryDebugger MemoryDebugger
// 99_part_01_part015_sub002.c - 1 个函数
// 函数: void function_0af9f0(int64_t param_1,uint64_t *param_2,int64_t param_3)
void function_0af9f0(int64_t param_1,uint64_t *param_2,int64_t param_3)
{
  byte *pbVar1;
  int iVar2;
  int32_t uVar3;
  byte *pbVar4;
  int8_t *puVar5;
  uint64_t uVar6;
  uint uVar7;
  int iVar8;
  uint64_t uVar9;
  int iVar10;
  int64_t lVar11;
  uint *puVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int iVar15;
  int8_t stack_array_b8 [32];
  void *plocal_var_98;
  int8_t *plocal_var_90;
  int32_t local_var_88;
  uint64_t local_var_80;
  int32_t local_var_78;
  uint64_t local_var_70;
  uint64_t *plocal_var_68;
  uint64_t local_var_60;
  uint64_t local_var_40;
  local_var_70 = 0xfffffffffffffffe;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  local_var_78 = 0;
  plocal_var_98 = &system_data_buffer_ptr;
  local_var_80 = 0;
  plocal_var_90 = (int8_t *)0x0;
  local_var_88 = 0;
  iVar15 = 0;
  uVar9 = *(int64_t *)(param_1 + 0x10) - *(int64_t *)(param_1 + 8) >> 3;
  plocal_var_68 = param_2;
  local_var_60 = param_1;
  if (uVar9 != 0) {
    iVar10 = *(int *)(param_3 + 0x10);
    lVar13 = 0;
    do {
      lVar11 = *(int64_t *)(lVar13 + *(int64_t *)(param_1 + 8));
      iVar2 = *(int *)(lVar11 + 0x18);
      iVar8 = iVar10;
      if (iVar2 == iVar10) {
        if (iVar2 != 0) {
          pbVar4 = *(byte **)(lVar11 + 0x10);
          lVar11 = *(int64_t *)(param_3 + 8) - (int64_t)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar11;
            iVar8 = (uint)*pbVar4 - (uint)*pbVar1;
            if (iVar8 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
        }
LAB_1800afade:
        if (iVar8 == 0) {
          RenderingEngine_BufferManager(&local_var_60,&processed_var_4576_ptr,
                        **(int32_t **)(*(int64_t *)(param_1 + 8) + (int64_t)iVar15 * 8));
          lVar13 = -1;
          do {
            lVar11 = lVar13;
            lVar13 = lVar11 + 1;
          } while (*(char *)((int64_t)&local_var_60 + lVar11 + 1) != '\0');
          if (0 < (int)(lVar11 + 1)) {
            iVar10 = (int)lVar11 + 2;
            iVar15 = iVar10;
            if (iVar10 < 0x10) {
              iVar15 = 0x10;
            }
            puVar5 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar15,0x13);
            *puVar5 = 0;
            plocal_var_90 = puVar5;
            uVar3 = CoreMemoryPoolCleaner(puVar5);
            local_var_80 = CONCAT44(local_var_80._4_4_,uVar3);
// WARNING: Subroutine does not return
            memcpy(puVar5,&local_var_60,(int64_t)iVar10);
          }
          *param_2 = &system_state_ptr;
          param_2[1] = 0;
          *(int32_t *)(param_2 + 2) = 0;
          *param_2 = &system_data_buffer_ptr;
          *(int32_t *)(param_2 + 2) = 0;
          param_2[1] = 0;
          *(int32_t *)((int64_t)param_2 + 0x1c) = 0;
          *(int32_t *)(param_2 + 3) = 0;
          local_var_88 = 0;
          local_var_80 = 0;
          goto LAB_1800affe3;
        }
      }
      else if (iVar2 == 0) goto LAB_1800afade;
      iVar15 = iVar15 + 1;
      lVar13 = lVar13 + 8;
    } while ((uint64_t)(int64_t)iVar15 < uVar9);
  }
  iVar15 = 0;
  uVar9 = *(int64_t *)(param_1 + 0x30) - *(int64_t *)(param_1 + 0x28) >> 3;
  if (uVar9 != 0) {
    iVar10 = *(int *)(param_3 + 0x10);
    lVar13 = 0;
    do {
      lVar11 = *(int64_t *)(lVar13 + *(int64_t *)(param_1 + 0x28));
      iVar2 = *(int *)(lVar11 + 0x18);
      iVar8 = iVar10;
      if (iVar2 == iVar10) {
        if (iVar2 != 0) {
          pbVar4 = *(byte **)(lVar11 + 0x10);
          lVar11 = *(int64_t *)(param_3 + 8) - (int64_t)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar11;
            iVar8 = (uint)*pbVar4 - (uint)*pbVar1;
            if (iVar8 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
        }
LAB_1800afc3f:
        if (iVar8 == 0) {
          SystemCore_CacheManager(&local_var_60,0x20,&system_data_6430,
                        (double)**(float **)(*(int64_t *)(param_1 + 0x28) + (int64_t)iVar15 * 8));
          lVar13 = -1;
          do {
            lVar11 = lVar13;
            lVar13 = lVar11 + 1;
          } while (*(char *)((int64_t)&local_var_60 + lVar11 + 1) != '\0');
          if (0 < (int)(lVar11 + 1)) {
            iVar10 = (int)lVar11 + 2;
            iVar15 = iVar10;
            if (iVar10 < 0x10) {
              iVar15 = 0x10;
            }
            puVar5 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar15,0x13);
            *puVar5 = 0;
            plocal_var_90 = puVar5;
            uVar3 = CoreMemoryPoolCleaner(puVar5);
            local_var_80 = CONCAT44(local_var_80._4_4_,uVar3);
// WARNING: Subroutine does not return
            memcpy(puVar5,&local_var_60,(int64_t)iVar10);
          }
          *param_2 = &system_state_ptr;
          param_2[1] = 0;
          *(int32_t *)(param_2 + 2) = 0;
          *param_2 = &system_data_buffer_ptr;
          *(int32_t *)(param_2 + 2) = 0;
          param_2[1] = 0;
          *(int32_t *)((int64_t)param_2 + 0x1c) = 0;
          *(int32_t *)(param_2 + 3) = 0;
          local_var_88 = 0;
          local_var_80 = 0;
          goto LAB_1800affe3;
        }
      }
      else if (iVar2 == 0) goto LAB_1800afc3f;
      iVar15 = iVar15 + 1;
      lVar13 = lVar13 + 8;
    } while ((uint64_t)(int64_t)iVar15 < uVar9);
  }
  iVar15 = 0;
  uVar9 = *(int64_t *)(param_1 + 0x50) - *(int64_t *)(param_1 + 0x48) >> 3;
  if (uVar9 != 0) {
    iVar10 = *(int *)(param_3 + 0x10);
    lVar13 = 0;
    do {
      lVar11 = *(int64_t *)(lVar13 + *(int64_t *)(param_1 + 0x48));
      iVar2 = *(int *)(lVar11 + 0x50);
      iVar8 = iVar10;
      if (iVar2 == iVar10) {
        if (iVar2 != 0) {
          pbVar4 = *(byte **)(lVar11 + 0x48);
          lVar11 = *(int64_t *)(param_3 + 8) - (int64_t)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar11;
            iVar8 = (uint)*pbVar4 - (uint)*pbVar1;
            if (iVar8 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
        }
LAB_1800afda6:
        if (iVar8 == 0) {
          lVar13 = *(int64_t *)(*(int64_t *)(param_1 + 0x48) + (int64_t)iVar15 * 8);
          if (0 < *(int *)(lVar13 + 0x10)) {
            iVar15 = *(int *)(lVar13 + 0x10) + 1;
            if (iVar15 < 0x10) {
              iVar15 = 0x10;
            }
            plocal_var_90 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar15,0x13);
            *plocal_var_90 = 0;
            uVar9 = (uint64_t)plocal_var_90 & 0xffffffffffc00000;
            if (uVar9 == 0) {
              uVar7 = 0;
            }
            else {
              lVar11 = ((int64_t)plocal_var_90 - uVar9 >> 0x10) * 0x50 + 0x80 + uVar9;
              puVar12 = (uint *)(lVar11 - (uint64_t)*(uint *)(lVar11 + 4));
              if ((*(byte *)((int64_t)puVar12 + 0xe) & 2) == 0) {
                uVar7 = puVar12[7];
                if (0x3ffffff < uVar7) {
                  uVar7 = *puVar12 << 0x10;
                }
              }
              else {
                uVar7 = puVar12[7];
                if (uVar7 < 0x4000000) {
                  uVar14 = (uint64_t)uVar7;
                }
                else {
                  uVar14 = (uint64_t)*puVar12 << 0x10;
                }
                if (0x3ffffff < uVar7) {
                  uVar7 = *puVar12 << 0x10;
                }
                uVar7 = uVar7 - (int)(((int64_t)plocal_var_90 -
                                      (((int64_t)((int64_t)puVar12 + (-0x80 - uVar9)) / 0x50) *
                                       0x10000 + uVar9)) % uVar14);
              }
            }
            local_var_80 = CONCAT44(local_var_80._4_4_,uVar7);
// WARNING: Subroutine does not return
            memcpy(plocal_var_90,*(uint64_t *)(lVar13 + 8),(int64_t)(*(int *)(lVar13 + 0x10) + 1));
          }
          *param_2 = &system_state_ptr;
          param_2[1] = 0;
          *(int32_t *)(param_2 + 2) = 0;
          *param_2 = &system_data_buffer_ptr;
          *(int32_t *)(param_2 + 2) = 0;
          param_2[1] = 0;
          *(int32_t *)((int64_t)param_2 + 0x1c) = 0;
          *(int32_t *)(param_2 + 3) = 0;
          local_var_88 = 0;
          local_var_80 = 0;
          goto LAB_1800affe3;
        }
      }
      else if (iVar2 == 0) goto LAB_1800afda6;
      iVar15 = iVar15 + 1;
      lVar13 = lVar13 + 8;
    } while ((uint64_t)(int64_t)iVar15 < uVar9);
  }
  iVar15 = 0;
  uVar9 = *(int64_t *)(param_1 + 0x70) - *(int64_t *)(param_1 + 0x68) >> 3;
  if (uVar9 != 0) {
    iVar10 = *(int *)(param_3 + 0x10);
    lVar13 = 0;
    do {
      lVar11 = *(int64_t *)(lVar13 + *(int64_t *)(param_1 + 0x68));
      iVar2 = *(int *)(lVar11 + 0x20);
      iVar8 = iVar10;
      if (iVar2 == iVar10) {
        if (iVar2 != 0) {
          pbVar4 = *(byte **)(lVar11 + 0x18);
          lVar11 = *(int64_t *)(param_3 + 8) - (int64_t)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar11;
            iVar8 = (uint)*pbVar4 - (uint)*pbVar1;
            if (iVar8 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
        }
LAB_1800aff9c:
        if (iVar8 == 0) {
          SystemCore_CacheManager(&local_var_60,0x20,&processed_var_7284_ptr,
                        **(uint64_t **)(*(int64_t *)(param_1 + 0x68) + (int64_t)iVar15 * 8));
          lVar13 = -1;
          do {
            lVar11 = lVar13;
            lVar13 = lVar11 + 1;
          } while (*(char *)((int64_t)&local_var_60 + lVar11 + 1) != '\0');
          if (0 < (int)(lVar11 + 1)) {
            iVar15 = (int)lVar11 + 2;
            if (iVar15 < 0x10) {
              iVar15 = 0x10;
            }
            plocal_var_90 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar15,0x13);
            *plocal_var_90 = 0;
            uVar9 = (uint64_t)plocal_var_90 & 0xffffffffffc00000;
            if (uVar9 == 0) {
              uVar7 = 0;
            }
            else {
              lVar13 = ((int64_t)plocal_var_90 - uVar9 >> 0x10) * 0x50 + 0x80 + uVar9;
              puVar12 = (uint *)(lVar13 - (uint64_t)*(uint *)(lVar13 + 4));
              if ((*(byte *)((int64_t)puVar12 + 0xe) & 2) == 0) {
                uVar7 = puVar12[7];
                if (0x3ffffff < uVar7) {
                  uVar7 = *puVar12 << 0x10;
                }
              }
              else {
                uVar7 = puVar12[7];
                if (uVar7 < 0x4000000) {
                  uVar14 = (uint64_t)uVar7;
                }
                else {
                  uVar14 = (uint64_t)*puVar12 << 0x10;
                }
                if (0x3ffffff < uVar7) {
                  uVar7 = *puVar12 << 0x10;
                }
                uVar7 = uVar7 - (int)(((int64_t)plocal_var_90 -
                                      (((int64_t)((int64_t)puVar12 + (-0x80 - uVar9)) / 0x50) *
                                       0x10000 + uVar9)) % uVar14);
              }
            }
            local_var_80 = CONCAT44(local_var_80._4_4_,uVar7);
// WARNING: Subroutine does not return
            memcpy(plocal_var_90,&local_var_60,(int64_t)((int)lVar11 + 2));
          }
          *param_2 = &system_state_ptr;
          param_2[1] = 0;
          *(int32_t *)(param_2 + 2) = 0;
          *param_2 = &system_data_buffer_ptr;
          *(int32_t *)(param_2 + 2) = 0;
          param_2[1] = 0;
          *(int32_t *)((int64_t)param_2 + 0x1c) = 0;
          *(int32_t *)(param_2 + 3) = 0;
          local_var_88 = 0;
          local_var_80 = 0;
          goto LAB_1800affe3;
        }
      }
      else if (iVar2 == 0) goto LAB_1800aff9c;
      iVar15 = iVar15 + 1;
      lVar13 = lVar13 + 8;
    } while ((uint64_t)(int64_t)iVar15 < uVar9);
  }
  uVar6 = MemoryDebugger0();
  SystemCore_NetworkHandler0(param_2,uVar6);
  local_var_80 = local_var_80 & 0xffffffff00000000;
LAB_1800affe3:
  local_var_78 = 1;
  plocal_var_90 = (int8_t *)0x0;
  plocal_var_98 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_b8);
}