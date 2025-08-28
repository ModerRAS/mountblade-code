#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part022.c - 2 个函数

// 函数: void FUN_18027c650(uint64_t *param_1,int64_t param_2,int64_t param_3,uint64_t *param_4,
void FUN_18027c650(uint64_t *param_1,int64_t param_2,int64_t param_3,uint64_t *param_4,
                  int param_5)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int32_t uVar6;
  uint uVar7;
  uint64_t *puVar8;
  char *pcVar9;
  char *pcVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  int8_t *puVar14;
  byte *pbVar15;
  int64_t lVar16;
  uint64_t *puVar17;
  uint uVar18;
  uint uVar19;
  void *puVar20;
  int64_t lVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  void *puVar25;
  int iVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  int8_t *puVar29;
  bool bVar30;
  int iStackX_10;
  uint64_t *puStackX_20;
  void *puStack_108;
  byte *pbStack_100;
  uint uStack_f8;
  uint64_t uStack_f0;
  void *puStack_e8;
  int8_t *puStack_e0;
  uint uStack_d8;
  uint64_t uStack_d0;
  void *puStack_c8;
  int8_t *puStack_c0;
  uint uStack_b8;
  uint64_t uStack_b0;
  int iStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  int32_t uStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  int32_t uStack_84;
  int64_t lStack_80;
  int64_t alStack_78 [2];
  uint64_t uStack_68;
  
  uStack_68 = 0xfffffffffffffffe;
  puVar8 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[4] = 0;
  *(int32_t *)(puVar8 + 5) = 1;
  puVar8[6] = 0;
  puVar8[8] = 0;
  pcVar9 = "meta_mesh_component";
  do {
    pcVar10 = pcVar9;
    pcVar9 = pcVar10 + 1;
  } while (*pcVar9 != '\0');
  *puVar8 = &system_data_9d80;
  puVar8[2] = pcVar10 + -0x180a09d7f;
  if (param_4 == (uint64_t *)0x0) {
    lVar11 = FUN_180628ca0();
    iVar5 = *(int *)(param_1 + 0x40);
    if (iVar5 == *(int *)(lVar11 + 0x10)) {
      if (iVar5 == 0) {
LAB_18027c7b0:
        if (*(int *)(lVar11 + 0x10) != 0) goto LAB_18027c7b4;
      }
      else {
        pcVar9 = (char *)param_1[0x3f];
        pcVar10 = pcVar9;
        do {
          cVar4 = *pcVar10;
          cVar2 = pcVar10[*(int64_t *)(lVar11 + 8) - (int64_t)pcVar9];
          if (cVar4 != cVar2) break;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        if (cVar4 != cVar2) goto LAB_18027c7bb;
      }
    }
    else {
      if (iVar5 == 0) goto LAB_18027c7b0;
LAB_18027c7b4:
      pcVar9 = (char *)param_1[0x3f];
LAB_18027c7bb:
      pcVar10 = "";
      if (pcVar9 != (char *)0x0) {
        pcVar10 = pcVar9;
      }
      SystemAllocationProcessor(param_2,puVar8,&system_data_3a84,pcVar10);
    }
    puStackX_20 = (uint64_t *)FUN_1800b6de0(system_resource_state,param_1 + 0x3e,1);
    if (puStackX_20 == (uint64_t *)0x0) {
      return;
    }
    goto LAB_18027c801;
  }
  iVar5 = *(int *)(param_1 + 0x40);
  puStackX_20 = param_4;
  if (iVar5 == *(int *)(param_4 + 0x40)) {
    if (iVar5 == 0) {
LAB_18027c733:
      if (*(int *)(param_4 + 0x40) == 0) goto LAB_18027c801;
      goto LAB_18027c73b;
    }
    pcVar9 = (char *)param_1[0x3f];
    pcVar10 = pcVar9;
    do {
      cVar4 = *pcVar10;
      cVar2 = pcVar10[param_4[0x3f] - (int64_t)pcVar9];
      if (cVar4 != cVar2) break;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    if (cVar4 == cVar2) goto LAB_18027c801;
  }
  else {
    if (iVar5 == 0) goto LAB_18027c733;
LAB_18027c73b:
    pcVar9 = (char *)param_1[0x3f];
  }
  pcVar10 = "";
  if (pcVar9 != (char *)0x0) {
    pcVar10 = pcVar9;
  }
  SystemAllocationProcessor(param_2,puVar8,&system_data_3a84,pcVar10);
LAB_18027c801:
  if (*(int *)((int64_t)param_1 + 0x324) != *(int *)((int64_t)puStackX_20 + 0x324)) {
    FUN_180630c80(param_2,puVar8,&unknown_var_8904_ptr);
  }
  if ((void *)*puStackX_20 == &unknown_var_9304_ptr) {
    puVar13 = puStackX_20 + 0x66;
  }
  else {
    puVar13 = (uint64_t *)(**(code **)((void *)*puStackX_20 + 0x158))(puStackX_20);
  }
  if ((void *)*param_1 == &unknown_var_9304_ptr) {
    puVar17 = param_1 + 0x66;
  }
  else {
    puVar17 = (uint64_t *)(**(code **)((void *)*param_1 + 0x158))(param_1);
  }
  cVar4 = func_0x000180285f10(puVar13,puVar17,0x3c23d70a);
  if (cVar4 == '\0') {
    fStack_90 = *(float *)(param_1 + 0x6c);
    fStack_8c = *(float *)((int64_t)param_1 + 0x364);
    fStack_88 = *(float *)(param_1 + 0x6d);
    uStack_84 = *(int32_t *)((int64_t)param_1 + 0x36c);
    FUN_1801c1720(param_1 + 0x66,&fStack_a0);
    FUN_180085020(param_1 + 0x66,alStack_78);
    FUN_18062fb40(param_2,puVar8,&unknown_var_8872_ptr,&fStack_90);
    FUN_18062fb40(param_2,puVar8,&unknown_var_8888_ptr,&fStack_a0);
    FUN_18062fb40(param_2,puVar8,&unknown_var_8408_ptr,alStack_78);
  }
  if (param_1[0x77] != 0) {
    puVar20 = *(void **)(param_1[0x77] + 0x18);
    puVar25 = &system_buffer_ptr;
    if (puVar20 != (void *)0x0) {
      puVar25 = puVar20;
    }
    SystemAllocationProcessor(param_2,puVar8,&unknown_var_8928_ptr,puVar25);
  }
  iStack_a8 = 0;
  lVar11 = param_1[7];
  if (param_1[8] - lVar11 >> 4 != 0) {
    alStack_78[0] = 0;
    do {
      lVar21 = alStack_78[0];
      puVar20 = &system_data_buffer_ptr;
      lVar11 = *(int64_t *)(lVar11 + alStack_78[0] * 0x10);
      if (*(int64_t *)(lVar11 + 0x1b0) == 0) {
        lVar12 = lVar11 + 0x10;
      }
      else {
        lVar12 = func_0x000180079240();
      }
      uStack_f0 = 0;
      pbStack_100 = (byte *)0x0;
      uStack_f8 = 0;
      puStack_108 = puVar20;
      CoreEngineDataBufferProcessor(&puStack_108,*(int32_t *)(lVar12 + 0x10));
      if (0 < *(int *)(lVar12 + 0x10)) {
        puVar20 = &system_buffer_ptr;
        if (*(void **)(lVar12 + 8) != (void *)0x0) {
          puVar20 = *(void **)(lVar12 + 8);
        }
                    // WARNING: Subroutine does not return
        memcpy(pbStack_100,puVar20,(int64_t)(*(int *)(lVar12 + 0x10) + 1));
      }
      if ((*(int64_t *)(lVar12 + 8) != 0) && (uStack_f8 = 0, pbStack_100 != (byte *)0x0)) {
        *pbStack_100 = 0;
      }
      while ((0 < (int)uStack_f8 && (lVar12 = strstr(pbStack_100,&system_data_ff10), lVar12 != 0))) {
        iVar26 = 6;
        iVar5 = (int)lVar12 - (int)pbStack_100;
        if (uStack_f8 < iVar5 + 6U) {
          iVar26 = uStack_f8 - iVar5;
        }
        uVar24 = iVar5 + iVar26;
        if (uVar24 < uStack_f8) {
          lVar12 = (int64_t)(int)uVar24;
          do {
            pbStack_100[lVar12 - iVar26] = pbStack_100[lVar12];
            uVar24 = uVar24 + 1;
            lVar12 = lVar12 + 1;
          } while (uVar24 < uStack_f8);
        }
        uStack_f8 = uStack_f8 - iVar26;
        pbStack_100[uStack_f8] = 0;
      }
      puVar13 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[4] = 0;
      *(int32_t *)(puVar13 + 5) = 1;
      puVar13[6] = 0;
      puVar13[8] = 0;
      pcVar9 = "mesh";
      do {
        pcVar10 = pcVar9;
        pcVar9 = pcVar10 + 1;
      } while (*pcVar9 != '\0');
      *puVar13 = &unknown_var_9144_ptr;
      puVar13[2] = pcVar10 + -0x180a0f3e7;
      iStackX_10 = 0;
      lStack_80 = 0;
      if ((int64_t)(param_1[8] - param_1[7]) >> 4 != 0) {
        do {
          puVar14 = (int8_t *)0x0;
          lVar21 = *(int64_t *)(puStackX_20[7] + lStack_80 * 0x10);
          if (*(int64_t *)(lVar21 + 0x1b0) == 0) {
            lVar12 = lVar21 + 0x10;
          }
          else {
            lVar12 = func_0x000180079240();
          }
          uStack_b8 = (uint)puVar14;
          puStack_c8 = &system_data_buffer_ptr;
          uStack_b0 = 0;
          puVar29 = puVar14;
          if (*(int *)(lVar12 + 0x10) != 0) {
            iVar5 = *(int *)(lVar12 + 0x10) + 1;
            if (iVar5 < 0x10) {
              iVar5 = 0x10;
            }
            puStack_c0 = puVar14;
            puVar14 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar5,0x13);
            *puVar14 = 0;
            uVar27 = (uint64_t)puVar14 & 0xffffffffffc00000;
            if (uVar27 == 0) {
              uVar24 = 0;
            }
            else {
              lVar16 = uVar27 + 0x80 + ((int64_t)puVar14 - uVar27 >> 0x10) * 0x50;
              puVar23 = (uint *)(lVar16 - (uint64_t)*(uint *)(lVar16 + 4));
              if ((*(byte *)((int64_t)puVar23 + 0xe) & 2) == 0) {
                uVar24 = puVar23[7];
                if (0x3ffffff < uVar24) {
                  uVar24 = *puVar23 << 0x10;
                }
              }
              else {
                uVar24 = puVar23[7];
                if (uVar24 < 0x4000000) {
                  uVar28 = (uint64_t)uVar24;
                }
                else {
                  uVar28 = (uint64_t)*puVar23 << 0x10;
                }
                if (0x3ffffff < uVar24) {
                  uVar24 = *puVar23 << 0x10;
                }
                uVar24 = uVar24 - (int)(((int64_t)puVar14 -
                                        (((int64_t)((int64_t)puVar23 + (-0x80 - uVar27)) / 0x50) *
                                         0x10000 + uVar27)) % uVar28);
              }
            }
            puVar29 = (int8_t *)0x0;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar24);
            if (0 < *(int *)(lVar12 + 0x10)) {
              puVar20 = &system_buffer_ptr;
              if (*(void **)(lVar12 + 8) != (void *)0x0) {
                puVar20 = *(void **)(lVar12 + 8);
              }
              puStack_c0 = puVar14;
                    // WARNING: Subroutine does not return
              memcpy(puVar14,puVar20,(int64_t)(*(int *)(lVar12 + 0x10) + 1));
            }
          }
          puStack_c0 = puVar14;
          if ((*(int64_t *)(lVar12 + 8) != 0) &&
             (uStack_b8 = (uint)puVar29, puVar14 != (int8_t *)0x0)) {
            *puVar14 = 0;
          }
          while ((0 < (int)uStack_b8 && (lVar12 = strstr(puStack_c0,&system_data_ff10), lVar12 != 0)))
          {
            iVar26 = 6;
            iVar5 = (int)lVar12 - (int)puStack_c0;
            if (uStack_b8 < iVar5 + 6U) {
              iVar26 = uStack_b8 - iVar5;
            }
            uVar24 = iVar5 + iVar26;
            if (uVar24 < uStack_b8) {
              lVar12 = (int64_t)(int)uVar24;
              do {
                puStack_c0[lVar12 - iVar26] = puStack_c0[lVar12];
                uVar24 = uVar24 + 1;
                lVar12 = lVar12 + 1;
              } while (uVar24 < uStack_b8);
            }
            uStack_b8 = uStack_b8 - iVar26;
            puStack_c0[uStack_b8] = 0;
          }
          bVar3 = true;
          uVar24 = uStack_b8;
          if (uStack_f8 == uStack_b8) {
            if (uStack_f8 != 0) {
              pbVar15 = pbStack_100;
              do {
                pbVar1 = pbVar15 + ((int64_t)puStack_c0 - (int64_t)pbStack_100);
                uVar24 = (uint)*pbVar15 - (uint)*pbVar1;
                if (uVar24 != 0) break;
                pbVar15 = pbVar15 + 1;
              } while (*pbVar1 != 0);
            }
LAB_18027cd22:
            if (uVar24 == 0) {
              if ((*(int64_t *)(lVar11 + 0x1b8) != 0) &&
                 (*(int64_t *)(*(int64_t *)(lVar11 + 0x1b8) + 0xa8) != 0)) {
                lVar12 = FUN_180079430(lVar11);
                lVar16 = FUN_180079430(lVar21);
                iVar5 = *(int *)(lVar12 + 0x10);
                if (iVar5 == *(int *)(lVar16 + 0x10)) {
                  if (iVar5 == 0) {
LAB_18027cd90:
                    if (*(int *)(lVar16 + 0x10) != 0) goto LAB_18027cd98;
                    bVar30 = true;
                  }
                  else {
                    pcVar9 = *(char **)(lVar12 + 8);
                    lVar12 = *(int64_t *)(lVar16 + 8) - (int64_t)pcVar9;
                    do {
                      cVar4 = *pcVar9;
                      cVar2 = pcVar9[lVar12];
                      if (cVar4 != cVar2) break;
                      pcVar9 = pcVar9 + 1;
                    } while (cVar2 != '\0');
                    bVar30 = cVar4 == cVar2;
                  }
                }
                else {
                  if (iVar5 == 0) goto LAB_18027cd90;
LAB_18027cd98:
                  bVar30 = false;
                }
                if (!bVar30) {
                  pbVar15 = &system_buffer_ptr;
                  if (pbStack_100 != (byte *)0x0) {
                    pbVar15 = pbStack_100;
                  }
                  SystemAllocationProcessor(param_2,puVar13,&system_data_3a84,pbVar15);
                  bVar3 = false;
                  lVar12 = FUN_180079430(lVar11);
                  puStack_e8 = &system_data_buffer_ptr;
                  uStack_d0 = 0;
                  puStack_e0 = (int8_t *)0x0;
                  uStack_d8 = 0;
                  iVar5 = *(int *)(lVar12 + 0x10);
                  if (iVar5 != 0) {
                    iVar26 = iVar5 + 1;
                    if (iVar26 < 0x10) {
                      iVar26 = 0x10;
                    }
                    puStack_e0 = (int8_t *)
                                 CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar26,
                                               CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),0x13));
                    *puStack_e0 = 0;
                    uVar6 = CoreEngineSystemCleanup(puStack_e0);
                    uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar6);
                    if (0 < *(int *)(lVar12 + 0x10)) {
                      puVar20 = &system_buffer_ptr;
                      if (*(void **)(lVar12 + 8) != (void *)0x0) {
                        puVar20 = *(void **)(lVar12 + 8);
                      }
                    // WARNING: Subroutine does not return
                      memcpy(puStack_e0,puVar20,(int64_t)(*(int *)(lVar12 + 0x10) + 1));
                    }
                  }
                  if ((*(int64_t *)(lVar12 + 8) != 0) &&
                     (uStack_d8 = 0, puStack_e0 != (int8_t *)0x0)) {
                    *puStack_e0 = 0;
                  }
                  while ((0 < (int)uStack_d8 &&
                         (lVar12 = strstr(puStack_e0,&system_data_ff10), lVar12 != 0))) {
                    iVar26 = 6;
                    iVar5 = (int)lVar12 - (int)puStack_e0;
                    if (uStack_d8 < iVar5 + 6U) {
                      iVar26 = uStack_d8 - iVar5;
                    }
                    uVar24 = iVar5 + iVar26;
                    if (uVar24 < uStack_d8) {
                      lVar12 = (int64_t)(int)uVar24;
                      do {
                        puStack_e0[lVar12 - iVar26] = puStack_e0[lVar12];
                        uVar24 = uVar24 + 1;
                        lVar12 = lVar12 + 1;
                      } while (uVar24 < uStack_d8);
                    }
                    uStack_d8 = uStack_d8 - iVar26;
                    puStack_e0[uStack_d8] = 0;
                  }
                  puVar14 = &system_buffer_ptr;
                  if (puStack_e0 != (int8_t *)0x0) {
                    puVar14 = puStack_e0;
                  }
                  SystemAllocationProcessor(param_2,puVar13,&unknown_var_6864_ptr,puVar14);
                  puStack_e8 = &system_data_buffer_ptr;
                  if (puStack_e0 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
                    CoreEngineMemoryPoolCleaner();
                  }
                  puStack_e0 = (int8_t *)0x0;
                  uStack_d0 = uStack_d0 & 0xffffffff00000000;
                  puStack_e8 = &system_state_ptr;
                }
              }
              fStack_a0 = *(float *)(lVar11 + 0x238);
              fStack_9c = *(float *)(lVar11 + 0x23c);
              fStack_98 = *(float *)(lVar11 + 0x240);
              uStack_94 = *(int32_t *)(lVar11 + 0x244);
              fStack_90 = *(float *)(lVar21 + 0x238);
              fStack_8c = *(float *)(lVar21 + 0x23c);
              fStack_88 = *(float *)(lVar21 + 0x240);
              uStack_84 = *(int32_t *)(lVar21 + 0x244);
              if (((fStack_a0 != fStack_90) || (fStack_9c != fStack_8c)) || (fStack_98 != fStack_88)
                 ) {
                if (bVar3) {
                  pbVar15 = &system_buffer_ptr;
                  if (pbStack_100 != (byte *)0x0) {
                    pbVar15 = pbStack_100;
                  }
                  SystemAllocationProcessor(param_2,puVar13,&system_data_3a84,pbVar15);
                  bVar3 = false;
                }
                uVar7 = (uint)(int64_t)(*(float *)(lVar11 + 0x244) * 256.0);
                uVar24 = 0xff;
                if (uVar7 < 0xff) {
                  uVar24 = uVar7;
                }
                uVar18 = (uint)(int64_t)(*(float *)(lVar11 + 0x238) * 256.0);
                uVar7 = 0xff;
                if (uVar18 < 0xff) {
                  uVar7 = uVar18;
                }
                uVar19 = (uint)(int64_t)(*(float *)(lVar11 + 0x23c) * 256.0);
                uVar18 = 0xff;
                if (uVar19 < 0xff) {
                  uVar18 = uVar19;
                }
                uVar22 = (uint)(int64_t)(*(float *)(lVar11 + 0x240) * 256.0);
                uVar19 = 0xff;
                if (uVar22 < 0xff) {
                  uVar19 = uVar22;
                }
                FUN_18062f640(param_2,puVar13,&unknown_var_8684_ptr,
                              ((uVar24 << 8 | uVar7) << 8 | uVar18) << 8 | uVar19);
              }
              fStack_90 = *(float *)(lVar11 + 0x248);
              fStack_8c = *(float *)(lVar11 + 0x24c);
              fStack_88 = *(float *)(lVar11 + 0x250);
              uStack_84 = *(int32_t *)(lVar11 + 0x254);
              fStack_a0 = *(float *)(lVar21 + 0x248);
              fStack_9c = *(float *)(lVar21 + 0x24c);
              fStack_98 = *(float *)(lVar21 + 0x250);
              uStack_94 = *(int32_t *)(lVar21 + 0x254);
              if (((fStack_90 != fStack_a0) || (fStack_8c != fStack_9c)) || (fStack_88 != fStack_98)
                 ) {
                if (bVar3) {
                  pbVar15 = &system_buffer_ptr;
                  if (pbStack_100 != (byte *)0x0) {
                    pbVar15 = pbStack_100;
                  }
                  SystemAllocationProcessor(param_2,puVar13,&system_data_3a84,pbVar15);
                  bVar3 = false;
                }
                uVar7 = (uint)(int64_t)(*(float *)(lVar11 + 0x254) * 256.0);
                uVar24 = 0xff;
                if (uVar7 < 0xff) {
                  uVar24 = uVar7;
                }
                uVar18 = (uint)(int64_t)(*(float *)(lVar11 + 0x248) * 256.0);
                uVar7 = 0xff;
                if (uVar18 < 0xff) {
                  uVar7 = uVar18;
                }
                uVar19 = (uint)(int64_t)(*(float *)(lVar11 + 0x24c) * 256.0);
                uVar18 = 0xff;
                if (uVar19 < 0xff) {
                  uVar18 = uVar19;
                }
                uVar22 = (uint)(int64_t)(*(float *)(lVar11 + 0x250) * 256.0);
                uVar19 = 0xff;
                if (uVar22 < 0xff) {
                  uVar19 = uVar22;
                }
                FUN_18062f640(param_2,puVar13,&unknown_var_8864_ptr,
                              ((uVar24 << 8 | uVar7) << 8 | uVar18) << 8 | uVar19);
              }
              if (((*(float *)(lVar21 + 0x2a8) != *(float *)(lVar11 + 0x2a8)) ||
                  (*(float *)(lVar21 + 0x2ac) != *(float *)(lVar11 + 0x2ac))) ||
                 (*(float *)(lVar21 + 0x2b0) != *(float *)(lVar11 + 0x2b0))) {
                if (bVar3) {
                  pbVar15 = &system_buffer_ptr;
                  if (pbStack_100 != (byte *)0x0) {
                    pbVar15 = pbStack_100;
                  }
                  SystemAllocationProcessor(param_2,puVar13,&system_data_3a84,pbVar15);
                  bVar3 = false;
                }
                FUN_180630010(param_2,puVar13,&unknown_var_8832_ptr,lVar11 + 0x2a8);
              }
              if (((*(float *)(lVar21 + 0x2b8) != *(float *)(lVar11 + 0x2b8)) ||
                  (*(float *)(lVar21 + 700) != *(float *)(lVar11 + 700))) ||
                 (*(float *)(lVar21 + 0x2c0) != *(float *)(lVar11 + 0x2c0))) {
                if (bVar3) {
                  pbVar15 = &system_buffer_ptr;
                  if (pbStack_100 != (byte *)0x0) {
                    pbVar15 = pbStack_100;
                  }
                  SystemAllocationProcessor(param_2,puVar13,&system_data_3a84,pbVar15);
                  bVar3 = false;
                }
                FUN_180630010(param_2,puVar13,&unknown_var_8848_ptr,lVar11 + 0x2b8);
              }
              if (!bVar3) {
                if (puVar8[6] == 0) {
                  puVar13[10] = 0;
                  puVar8[6] = puVar13;
                }
                else {
                  puVar13[10] = puVar8[7];
                  *(uint64_t **)(puVar8[7] + 0x58) = puVar13;
                }
                puVar8[7] = puVar13;
                puVar13[4] = puVar8;
                puVar13[0xb] = 0;
              }
            }
          }
          else if (uStack_f8 == 0) goto LAB_18027cd22;
          puStack_c8 = &system_data_buffer_ptr;
          if (puStack_c0 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          puStack_c0 = (int8_t *)0x0;
          uStack_b0 = uStack_b0 & 0xffffffff00000000;
          puStack_c8 = &system_state_ptr;
          iStackX_10 = iStackX_10 + 1;
          lStack_80 = lStack_80 + 1;
          lVar21 = alStack_78[0];
        } while ((uint64_t)(int64_t)iStackX_10 <
                 (uint64_t)((int64_t)(param_1[8] - param_1[7]) >> 4));
      }
      puStack_108 = &system_data_buffer_ptr;
      if (pbStack_100 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      pbStack_100 = (byte *)0x0;
      uStack_f0 = uStack_f0 & 0xffffffff00000000;
      puStack_108 = &system_state_ptr;
      iStack_a8 = iStack_a8 + 1;
      alStack_78[0] = lVar21 + 1;
      lVar11 = param_1[7];
    } while ((uint64_t)(int64_t)iStack_a8 < (uint64_t)(param_1[8] - lVar11 >> 4));
  }
  if ((puVar8[6] != 0) || (puVar8[8] != 0)) {
    if (param_5 != 0) {
      FUN_180630c80(param_2,puVar8,&unknown_var_9168_ptr);
    }
    if (*(int64_t *)(param_3 + 0x30) == 0) {
      puVar8[10] = 0;
      *(uint64_t **)(param_3 + 0x30) = puVar8;
    }
    else {
      puVar8[10] = *(uint64_t *)(param_3 + 0x38);
      *(uint64_t **)(*(int64_t *)(param_3 + 0x38) + 0x58) = puVar8;
    }
    *(uint64_t **)(param_3 + 0x38) = puVar8;
    puVar8[4] = param_3;
    puVar8[0xb] = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18027d420(int64_t param_1)
void FUN_18027d420(int64_t param_1)

{
  int *piVar1;
  char cVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  void *puVar6;
  int32_t *puVar7;
  uint uVar8;
  uint64_t uVar9;
  int iVar10;
  int64_t lVar11;
  uint64_t uVar12;
  bool bVar13;
  int aiStackX_8 [2];
  int aiStackX_18 [2];
  int aiStackX_20 [2];
  int8_t auStack_a8 [8];
  void *puStack_a0;
  uint uStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  int iStack_84;
  int64_t lStack_80;
  int32_t uStack_78;
  int64_t lStack_70;
  int64_t *plStack_68;
  void *puStack_60;
  int64_t lStack_58;
  int32_t uStack_48;
  uint64_t uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0x324) < 1) {
    return;
  }
  SystemCore_EncryptionEngine0(auStack_a8);
  iVar10 = uStack_98 + -1;
  lVar3 = (int64_t)iVar10;
  if (-1 < iVar10) {
    do {
      if (*(char *)(lVar3 + (int64_t)puStack_a0) == '/') goto LAB_18027d492;
      iVar10 = iVar10 + -1;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  iVar10 = -1;
LAB_18027d492:
  lVar3 = FUN_180629a40(auStack_a8,&puStack_60,0,iVar10);
  if (puStack_a0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  uVar9 = 0;
  uStack_98 = *(uint *)(lVar3 + 0x10);
  puStack_a0 = *(void **)(lVar3 + 8);
  uStack_90 = *(uint64_t *)(lVar3 + 0x18);
  *(int32_t *)(lVar3 + 0x10) = 0;
  *(uint64_t *)(lVar3 + 8) = 0;
  *(uint64_t *)(lVar3 + 0x18) = 0;
  puStack_60 = &system_data_buffer_ptr;
  if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_58 = 0;
  uStack_48 = 0;
  puStack_60 = &system_state_ptr;
  uVar8 = uStack_98 + 4;
  CoreEngineDataBufferProcessor(auStack_a8,uVar8);
  *(int32_t *)(puStack_a0 + uStack_98) = 0x646d6d2f;
  *(int8_t *)((int64_t)(puStack_a0 + uStack_98) + 4) = 0;
  uStack_98 = uVar8;
  FUN_180628380(auStack_a8,*(int32_t *)(param_1 + 0x324));
  iVar10 = uStack_98 + 4;
  CoreEngineDataBufferProcessor(auStack_a8,iVar10);
  *(int32_t *)(puStack_a0 + uStack_98) = 0x646d6d2e;
  *(int8_t *)((int64_t)(puStack_a0 + uStack_98) + 4) = 0;
  uStack_98 = iVar10;
  puVar4 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
  puVar6 = &system_buffer_ptr;
  if (puStack_a0 != (void *)0x0) {
    puVar6 = puStack_a0;
  }
  *puVar4 = 0;
  *(int8_t *)(puVar4 + 2) = 0;
  FUN_18062dee0(puVar4,puVar6,&unknown_var_9772_ptr);
  uStack_88 = 0x31444d4d;
  fwrite(&uStack_88,4,1,puVar4[1]);
  aiStackX_18[0] = (int)(*(int64_t *)(param_1 + 0x40) - *(int64_t *)(param_1 + 0x38) >> 4);
  fwrite(aiStackX_18,4,1,puVar4[1]);
  uVar12 = uVar9;
  if (0 < aiStackX_18[0]) {
    do {
      lVar3 = *(int64_t *)(uVar12 + *(int64_t *)(param_1 + 0x38));
      aiStackX_20[0] = *(int *)(lVar3 + 0x20);
      fwrite(aiStackX_20,4,1,puVar4[1]);
      puVar6 = &system_buffer_ptr;
      if (*(void **)(lVar3 + 0x18) != (void *)0x0) {
        puVar6 = *(void **)(lVar3 + 0x18);
      }
      fwrite(puVar6,1,(int64_t)aiStackX_20[0],puVar4[1]);
      iStack_84 = (int)uVar9;
      fwrite(&iStack_84,4,1,puVar4[1]);
      uStack_78 = 0;
      lStack_80 = lVar3;
      FUN_18007f770(&lStack_80);
      lVar3 = lStack_70;
      aiStackX_8[0] = *(int *)(lStack_70 + 0x60);
      fwrite(aiStackX_8,4,1,puVar4[1]);
      puVar5 = (int32_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(int64_t)aiStackX_8[0] << 2,0x10);
      iVar10 = 0;
      if (0 < aiStackX_8[0]) {
        lVar11 = 0;
        puVar7 = puVar5;
        do {
          *puVar7 = *(int32_t *)(lVar11 + 0x54 + *(int64_t *)(lVar3 + 0x68));
          iVar10 = iVar10 + 1;
          lVar11 = lVar11 + 0x5c;
          puVar7 = puVar7 + 1;
        } while (iVar10 < aiStackX_8[0]);
      }
      fwrite(puVar5,4,(int64_t)aiStackX_8[0],puVar4[1]);
      lVar3 = lStack_80;
      if (puVar5 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar5);
      }
      if (lStack_80 != 0) {
        while( true ) {
          LOCK();
          cVar2 = *(char *)(lVar3 + 0xec);
          bVar13 = cVar2 == '\0';
          if (bVar13) {
            *(char *)(lVar3 + 0xec) = '\x01';
            cVar2 = '\0';
          }
          UNLOCK();
          if (bVar13) break;
          iVar10 = _Thrd_id();
          if ((*(int *)(lVar3 + 0xf0) == iVar10) || (*(int *)(lVar3 + 0xf0) != 0))
          goto LAB_18027d773;
          Sleep();
        }
        cVar2 = '\0';
LAB_18027d773:
        LOCK();
        piVar1 = (int *)(lVar3 + 0xe8);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (cVar2 == '\0') {
          if ((((iVar10 == 1) && (*(int64_t *)(lStack_80 + 0x210) != 0)) &&
              (lVar11 = lStack_80, FUN_1800791a0(lStack_80), *(char *)(lVar11 + 0xfc) == '\0')) &&
             ((*(char *)(lVar11 + 0xf4) == '\0' &&
              (((*(byte *)(lVar11 + 0xfd) & 0x20) == 0 || ((*(byte *)(lVar11 + 0xfe) & 1) == 0))))))
          {
            plStack_68 = *(int64_t **)(lVar11 + 0x210);
            *(uint64_t *)(lVar11 + 0x210) = 0;
            if (plStack_68 != (int64_t *)0x0) {
              (**(code **)(*plStack_68 + 0x38))();
            }
          }
          LOCK();
          *(int8_t *)(lVar3 + 0xec) = 0;
          UNLOCK();
        }
        lStack_80 = 0;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar8;
      uVar12 = uVar12 + 0x10;
    } while ((int)uVar8 < aiStackX_18[0]);
  }
  if (puVar4[1] != 0) {
    fclose();
    puVar4[1] = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar4);
}





