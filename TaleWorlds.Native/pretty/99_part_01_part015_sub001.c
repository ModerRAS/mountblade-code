#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part015_sub001.c - 2 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_01_part015.c - 2 个函数


// 函数: void FUN_1800aeef0(uint64_t param_1,int64_t param_2,int64_t param_3,int64_t *param_4)
void FUN_1800aeef0(uint64_t param_1,int64_t param_2,int64_t param_3,int64_t *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int8_t *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint64_t uVar11;
  int8_t *puVar12;
  bool bVar13;
  int8_t auStack_c8 [32];
  int64_t *plStack_a8;
  int64_t lStack_a0;
  void *puStack_98;
  int8_t *puStack_90;
  uint uStack_88;
  uint64_t uStack_80;
  int64_t lStack_78;
  int64_t lStack_70;
  uint64_t uStack_68;
  int8_t auStack_60 [32];
  uint64_t uStack_40;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  *(int32_t *)(param_3 + 0x10) = 0;
  if (*(int8_t **)(param_3 + 8) != (int8_t *)0x0) {
    **(int8_t **)(param_3 + 8) = 0;
  }
  *(int32_t *)(param_4 + 2) = 0;
  if ((int8_t *)param_4[1] != (int8_t *)0x0) {
    *(int8_t *)param_4[1] = 0;
  }
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(param_2 + lVar4) != '\0');
  iVar2 = 0;
  lStack_a0 = 0;
  puStack_98 = &system_data_buffer_ptr;
  uStack_80 = 0;
  puVar12 = (int8_t *)0x0;
  puStack_90 = (int8_t *)0x0;
  uVar6 = 0;
  iVar9 = 0;
  uStack_88 = 0;
  uVar11 = 1;
  iVar3 = 1;
  lStack_78 = (int64_t)(int)lVar4;
  plStack_a8 = param_4;
  lStack_70 = param_2;
  if (0 < lStack_78) {
    lVar4 = 0;
    do {
      iVar9 = (int)uVar6;
      cVar1 = *(char *)(lStack_70 + lVar4);
      if ((((byte)(cVar1 - 0x24U) < 0x3c) &&
          ((0x97fffffe07fff01U >> ((int64_t)(char)(cVar1 - 0x24U) & 0x3fU) & 1) != 0)) ||
         ((byte)(cVar1 + 0x9fU) < 0x1a)) {
        iVar10 = 1;
        iVar8 = iVar10;
        if (iVar2 == 0) {
LAB_1800af096:
          CoreEngineDataBufferProcessor(param_3,*(int *)(param_3 + 0x10) + 1);
          *(char *)((uint64_t)*(uint *)(param_3 + 0x10) + *(int64_t *)(param_3 + 8)) = cVar1;
          *(int8_t *)((uint64_t)(*(int *)(param_3 + 0x10) + 1) + *(int64_t *)(param_3 + 8)) =
               0;
          *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
          param_4 = plStack_a8;
          iVar2 = iVar8;
        }
        else if (iVar2 == 2) {
          iVar2 = 3;
LAB_1800af0c8:
          CoreEngineDataBufferProcessor(param_4,(int)param_4[2] + 1);
          *(char *)((uint64_t)*(uint *)(plStack_a8 + 2) + plStack_a8[1]) = cVar1;
          *(int8_t *)((uint64_t)((int)plStack_a8[2] + 1) + plStack_a8[1]) = 0;
          *(int *)(plStack_a8 + 2) = (int)plStack_a8[2] + 1;
          param_4 = plStack_a8;
        }
        else {
          if (iVar2 == 4) {
            iVar2 = 5;
          }
          else {
            iVar8 = iVar2;
            if (iVar2 == 1) goto LAB_1800af096;
            if (iVar2 == 3) goto LAB_1800af0c8;
            if (iVar2 != 5) goto LAB_1800af16e;
          }
          if (iVar3 == 0) {
            lVar5 = 1;
            if (iVar9 != 0) {
              puVar7 = &system_buffer_ptr;
              if (puVar12 != (int8_t *)0x0) {
                puVar7 = puVar12;
              }
              lVar5 = strtoull(puVar7,0,10);
            }
            lStack_a0 = lStack_a0 + lVar5;
            iVar9 = 0;
            uStack_88 = 0;
            iVar3 = iVar10;
            if (puVar12 != (int8_t *)0x0) {
              *puVar12 = 0;
            }
          }
          CoreEngineDataBufferProcessor(&puStack_98,iVar9 + 1);
          puStack_90[uStack_88] = cVar1;
          uStack_88 = uStack_88 + 1;
          uVar6 = (uint64_t)uStack_88;
          puStack_90[uVar6] = 0;
          param_4 = plStack_a8;
          puVar12 = puStack_90;
        }
      }
      else if (iVar2 == 1) {
        if (*(int *)(param_3 + 0x10) == 0x13) {
          iVar2 = strcmp(*(uint64_t *)(param_3 + 8),&processed_var_7264_ptr);
          param_4 = plStack_a8;
joined_r0x0001800af044:
          plStack_a8 = param_4;
          if (iVar2 == 0) {
            iVar2 = 4;
            goto LAB_1800af16e;
          }
        }
        else if (*(int *)(param_3 + 0x10) == 0x11) {
          iVar2 = strcmp(*(uint64_t *)(param_3 + 8),&processed_var_7240_ptr);
          param_4 = plStack_a8;
          goto joined_r0x0001800af044;
        }
        iVar2 = 2;
      }
      else if (iVar2 == 5) {
        iVar3 = 0;
      }
      else if (iVar2 == 3) {
        iVar2 = 6;
      }
LAB_1800af16e:
      iVar9 = (int)uVar6;
      lVar4 = lVar4 + 1;
    } while (lVar4 < lStack_78);
  }
  iVar3 = *(int *)(param_3 + 0x10);
  if (((iVar3 == 0x13) && (iVar2 = strcmp(*(uint64_t *)(param_3 + 8),&processed_var_7264_ptr), iVar2 == 0))
     || ((iVar3 == 0x11 && (iVar2 = strcmp(*(uint64_t *)(param_3 + 8),&processed_var_7240_ptr), iVar2 == 0)
         ))) {
    if (iVar9 != 0) {
      puVar7 = &system_buffer_ptr;
      if (puVar12 != (int8_t *)0x0) {
        puVar7 = puVar12;
      }
      uVar11 = strtoull(puVar7,0,10);
      iVar3 = *(int *)(param_3 + 0x10);
    }
    if (iVar3 == 0x13) {
      iVar3 = strcmp(*(uint64_t *)(param_3 + 8),&processed_var_7264_ptr);
      bVar13 = iVar3 == 0;
    }
    else {
      bVar13 = false;
    }
    uVar6 = 0xffffffff00000000;
    if (!bVar13) {
      uVar6 = 0xffffffff;
    }
    FUN_180626eb0(auStack_60,0x20,&processed_var_7284_ptr,lStack_a0 + (uVar6 & uVar11));
    (**(code **)(*plStack_a8 + 0x10))(plStack_a8,auStack_60);
  }
  puStack_98 = &system_data_buffer_ptr;
  if (puVar12 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar12);
  }
  puStack_90 = (int8_t *)0x0;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  puStack_98 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_40 ^ (uint64_t)auStack_c8);
}



int8_t FUN_1800af2c0(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  byte *pbVar1;
  int64_t *plVar2;
  byte bVar3;
  byte bVar4;
  uint64_t *puVar5;
  double dVar6;
  char cVar7;
  int8_t uVar8;
  byte *pbVar9;
  uint64_t uVar10;
  void **ppuVar11;
  uint64_t uVar12;
  void *puVar13;
  int iVar14;
  int64_t *plVar15;
  int64_t *plVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  float *pfVar19;
  int64_t *plVar20;
  int64_t *plVar21;
  int64_t lVar22;
  uint uVar23;
  int iVar24;
  int64_t lVar25;
  uint64_t uVar26;
  bool bVar27;
  float fVar28;
  uint64_t uStackX_8;
  void *puStack_b8;
  byte *pbStack_b0;
  uint uStack_a8;
  uint64_t uStack_a0;
  void *puStack_98;
  void *puStack_90;
  int iStack_88;
  int32_t uStack_80;
  void *puStack_78;
  byte *pbStack_70;
  int iStack_68;
  void *puStack_58;
  int64_t lStack_50;
  int32_t uStack_40;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  SystemCore_EncryptionEngine0(&puStack_78);
  CoreEngineDataTransformer(&puStack_98,param_3);
  plVar2 = param_1 + 0x12;
  SystemCore_EncryptionEngine0(&puStack_b8,param_2);
  plVar20 = (int64_t *)param_1[0x14];
  plVar15 = plVar2;
  if (plVar20 != (int64_t *)0x0) {
    do {
      if (uStack_a8 == 0) {
        bVar27 = false;
        plVar21 = (int64_t *)plVar20[1];
      }
      else {
        if ((int)plVar20[6] == 0) {
          bVar27 = true;
        }
        else {
          pbVar9 = pbStack_b0;
          do {
            uVar23 = (uint)pbVar9[plVar20[5] - (int64_t)pbStack_b0];
            iVar14 = *pbVar9 - uVar23;
            if (*pbVar9 != uVar23) break;
            pbVar9 = pbVar9 + 1;
          } while (uVar23 != 0);
          bVar27 = 0 < iVar14;
          if (iVar14 < 1) {
            plVar21 = (int64_t *)plVar20[1];
            goto LAB_1800af387;
          }
        }
        plVar21 = (int64_t *)*plVar20;
      }
LAB_1800af387:
      plVar16 = plVar20;
      if (bVar27) {
        plVar16 = plVar15;
      }
      plVar15 = plVar16;
      plVar20 = plVar21;
    } while (plVar21 != (int64_t *)0x0);
    if (plVar16 != plVar2) {
      if ((int)plVar16[6] == 0) goto LAB_1800af3ca;
      if (uStack_a8 != 0) {
        pbVar9 = (byte *)plVar16[5];
        lVar25 = (int64_t)pbStack_b0 - (int64_t)pbVar9;
        do {
          bVar3 = *pbVar9;
          uVar23 = (uint)pbVar9[lVar25];
          if (bVar3 != uVar23) break;
          pbVar9 = pbVar9 + 1;
        } while (uVar23 != 0);
        if ((int)(bVar3 - uVar23) < 1) goto LAB_1800af3ca;
      }
    }
  }
  plVar16 = plVar2;
LAB_1800af3ca:
  puStack_b8 = &system_data_buffer_ptr;
  if (pbStack_b0 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  uVar12 = 0;
  pbStack_b0 = (byte *)0x0;
  uStack_a0 = (uint64_t)uStack_a0._4_4_ << 0x20;
  puStack_b8 = &system_state_ptr;
  if ((plVar16 == plVar2) &&
     (cVar7 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3), cVar7 == '\0')) {
    lVar25 = param_1[1];
    uVar17 = param_1[2] - lVar25 >> 3;
    uVar26 = uVar12;
    uVar18 = uVar12;
    if (uVar17 != 0) {
      do {
        iVar14 = *(int *)(*(int64_t *)(uVar18 + lVar25) + 0x18);
        if (iStack_68 == iVar14) {
          if (iStack_68 != 0) {
            pbVar9 = pbStack_70;
            do {
              pbVar1 = pbVar9 + (*(int64_t *)(*(int64_t *)(uVar18 + lVar25) + 0x10) -
                                (int64_t)pbStack_70);
              iVar14 = (uint)*pbVar9 - (uint)*pbVar1;
              if (iVar14 != 0) break;
              pbVar9 = pbVar9 + 1;
            } while (*pbVar1 != 0);
          }
LAB_1800af47e:
          if (iVar14 == 0) {
            pfVar19 = *(float **)(lVar25 + (int64_t)(int)uVar26 * 8);
            fVar28 = 1.4013e-45;
            if (iStack_88 != 0) {
              puVar13 = &system_buffer_ptr;
              if (puStack_90 != (void *)0x0) {
                puVar13 = puStack_90;
              }
              fVar28 = (float)atoi(puVar13);
            }
            uStackX_8 = CONCAT44(uStackX_8._4_4_,fVar28);
            if (*(int64_t *)(pfVar19 + 0x18) != 0) {
              cVar7 = (**(code **)(pfVar19 + 0x1a))(&uStackX_8);
              if (cVar7 == '\0') {
                if (system_debug_flag != '\0') goto LAB_1800af665;
                puVar13 = &system_buffer_ptr;
                if (*(void **)(pfVar19 + 4) != (void *)0x0) {
                  puVar13 = *(void **)(pfVar19 + 4);
                }
                SystemDataInitializer(&processed_var_544_ptr,puVar13);
                *pfVar19 = pfVar19[0x12];
                uVar8 = 0;
                goto LAB_1800af973;
              }
              fVar28 = (float)uStackX_8;
            }
            *pfVar19 = fVar28;
            goto LAB_1800af971;
          }
        }
        else if (iStack_68 == 0) goto LAB_1800af47e;
        uVar23 = (int)uVar26 + 1;
        uVar26 = (uint64_t)uVar23;
        uVar18 = uVar18 + 8;
      } while ((uint64_t)(int64_t)(int)uVar23 < uVar17);
    }
    lVar25 = param_1[5];
    uVar17 = param_1[6] - lVar25 >> 3;
    uVar26 = uVar12;
    uVar18 = uVar12;
    if (uVar17 != 0) {
      do {
        iVar14 = *(int *)(*(int64_t *)(uVar18 + lVar25) + 0x18);
        if (iStack_68 == iVar14) {
          if (iStack_68 != 0) {
            pbVar9 = pbStack_70;
            do {
              pbVar1 = pbVar9 + (*(int64_t *)(*(int64_t *)(uVar18 + lVar25) + 0x10) -
                                (int64_t)pbStack_70);
              iVar14 = (uint)*pbVar9 - (uint)*pbVar1;
              if (iVar14 != 0) break;
              pbVar9 = pbVar9 + 1;
            } while (*pbVar1 != 0);
          }
LAB_1800af57a:
          if (iVar14 == 0) {
            pfVar19 = *(float **)(lVar25 + (int64_t)(int)uVar26 * 8);
            fVar28 = 1.0;
            if (iStack_88 != 0) {
              puVar13 = &system_buffer_ptr;
              if (puStack_90 != (void *)0x0) {
                puVar13 = puStack_90;
              }
              dVar6 = (double)atof(puVar13);
              fVar28 = (float)dVar6;
            }
            uStackX_8 = CONCAT44(uStackX_8._4_4_,fVar28);
            if (*(int64_t *)(pfVar19 + 0x18) != 0) {
              cVar7 = (**(code **)(pfVar19 + 0x1a))(&uStackX_8);
              if (cVar7 == '\0') {
                if (system_debug_flag == '\0') {
                  puVar13 = &system_buffer_ptr;
                  if (*(void **)(pfVar19 + 4) != (void *)0x0) {
                    puVar13 = *(void **)(pfVar19 + 4);
                  }
                  SystemDataInitializer(&processed_var_544_ptr,puVar13);
                }
LAB_1800af665:
                *pfVar19 = pfVar19[0x12];
                uVar8 = 0;
                goto LAB_1800af973;
              }
              fVar28 = (float)uStackX_8;
            }
            *pfVar19 = fVar28;
            goto LAB_1800af971;
          }
        }
        else if (iStack_68 == 0) goto LAB_1800af57a;
        uVar23 = (int)uVar26 + 1;
        uVar26 = (uint64_t)uVar23;
        uVar18 = uVar18 + 8;
      } while ((uint64_t)(int64_t)(int)uVar23 < uVar17);
    }
    uVar17 = param_1[10] - param_1[9] >> 3;
    uVar26 = uVar12;
    uVar18 = uVar12;
    if (uVar17 != 0) {
      do {
        lVar25 = *(int64_t *)(uVar18 + param_1[9]);
        iVar14 = *(int *)(lVar25 + 0x50);
        if (iStack_68 == iVar14) {
          if (iStack_68 == 0) {
LAB_1800af684:
            if (iVar14 != 0) goto LAB_1800af68c;
            bVar27 = true;
          }
          else {
            pbVar9 = pbStack_70;
            do {
              bVar3 = *pbVar9;
              bVar4 = pbVar9[*(int64_t *)(lVar25 + 0x48) - (int64_t)pbStack_70];
              if (bVar3 != bVar4) break;
              pbVar9 = pbVar9 + 1;
            } while (bVar4 != 0);
            bVar27 = bVar3 == bVar4;
          }
        }
        else {
          if (iStack_68 == 0) goto LAB_1800af684;
LAB_1800af68c:
          bVar27 = false;
        }
        if (bVar27) {
          puStack_b8 = &system_data_buffer_ptr;
          uStack_a0 = 0;
          pbStack_b0 = (int8_t *)0x0;
          uStack_a8 = 0;
          CoreEngineDataBufferProcessor(&puStack_b8,iStack_88);
          if (iStack_88 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(pbStack_b0,puStack_90,iStack_88 + 1);
          }
          if (puStack_90 != (void *)0x0) {
            uStack_a8 = 0;
            if (pbStack_b0 != (int8_t *)0x0) {
              *pbStack_b0 = 0;
            }
            uStack_a0 = uStack_a0 & 0xffffffff;
          }
          while ((0 < (int)uStack_a8 && (lVar25 = strstr(pbStack_b0,&processed_var_7168_ptr), lVar25 != 0)))
          {
            iVar24 = 5;
            iVar14 = (int)lVar25 - (int)pbStack_b0;
            if (uStack_a8 < iVar14 + 5U) {
              iVar24 = uStack_a8 - iVar14;
            }
            uVar23 = iVar14 + iVar24;
            if (uVar23 < uStack_a8) {
              lVar22 = (int64_t)(int)uVar23;
              do {
                pbStack_b0[lVar22 - iVar24] = pbStack_b0[lVar22];
                uVar23 = uVar23 + 1;
                lVar22 = lVar22 + 1;
              } while (uVar23 < uStack_a8);
            }
            uStack_a8 = uStack_a8 - iVar24;
            pbStack_b0[uStack_a8] = 0;
            uVar10 = CoreMemoryPoolValidator(&puStack_58,&system_data_c8e4);
            FUN_1806288c0(&puStack_b8,(int)lVar25 - (int)pbStack_b0,uVar10);
            puStack_58 = &system_data_buffer_ptr;
            if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            lStack_50 = 0;
            uStack_40 = 0;
            puStack_58 = &system_state_ptr;
          }
          uVar10 = *(uint64_t *)(param_1[9] + (int64_t)(int)uVar26 * 8);
          if (iStack_88 == 4) {
            do {
              uVar26 = uVar12 + 1;
              if (puStack_90[uVar12] != (&processed_var_7160_ptr)[uVar12]) goto LAB_1800af89b;
              uVar12 = uVar26;
            } while (uVar26 != 5);
            ppuVar11 = (void **)FUN_180628ca0();
          }
          else {
LAB_1800af89b:
            ppuVar11 = &puStack_b8;
          }
          uVar8 = FUN_18005c8a0(uVar10,ppuVar11);
          puStack_b8 = &system_data_buffer_ptr;
          if (pbStack_b0 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          pbStack_b0 = (byte *)0x0;
          uStack_a0 = uStack_a0 & 0xffffffff00000000;
          puStack_b8 = &system_state_ptr;
          goto LAB_1800af973;
        }
        uVar23 = (int)uVar26 + 1;
        uVar26 = (uint64_t)uVar23;
        uVar18 = uVar18 + 8;
      } while ((uint64_t)(int64_t)(int)uVar23 < uVar17);
    }
    lVar25 = param_1[0xd];
    uVar18 = param_1[0xe] - lVar25 >> 3;
    uVar26 = uVar12;
    if (uVar18 != 0) {
      do {
        iVar14 = *(int *)(*(int64_t *)(uVar26 + lVar25) + 0x20);
        if (iStack_68 == iVar14) {
          if (iStack_68 != 0) {
            pbVar9 = pbStack_70;
            do {
              pbVar1 = pbVar9 + (*(int64_t *)(*(int64_t *)(uVar26 + lVar25) + 0x18) -
                                (int64_t)pbStack_70);
              iVar14 = (uint)*pbVar9 - (uint)*pbVar1;
              if (iVar14 != 0) break;
              pbVar9 = pbVar9 + 1;
            } while (*pbVar1 != 0);
          }
LAB_1800af8d7:
          if (iVar14 == 0) {
            puVar5 = *(uint64_t **)(lVar25 + (int64_t)(int)uVar12 * 8);
            uStackX_8 = 1;
            if (iStack_88 != 0) {
              puVar13 = &system_buffer_ptr;
              if (puStack_90 != (void *)0x0) {
                puVar13 = puStack_90;
              }
              uStackX_8 = strtoull(puVar13,0,10);
            }
            if ((puVar5[0xd] == 0) || (cVar7 = (*(code *)puVar5[0xe])(&uStackX_8), cVar7 != '\0')) {
              *puVar5 = uStackX_8;
              goto LAB_1800af971;
            }
            if (system_debug_flag == '\0') {
              puVar13 = &system_buffer_ptr;
              if ((void *)puVar5[3] != (void *)0x0) {
                puVar13 = (void *)puVar5[3];
              }
              SystemDataInitializer(&processed_var_544_ptr,puVar13);
            }
            *puVar5 = puVar5[10];
            break;
          }
        }
        else if (iStack_68 == 0) goto LAB_1800af8d7;
        uVar23 = (int)uVar12 + 1;
        uVar12 = (uint64_t)uVar23;
        uVar26 = uVar26 + 8;
      } while ((uint64_t)(int64_t)(int)uVar23 < uVar18);
    }
    uVar8 = 0;
  }
  else {
LAB_1800af971:
    uVar8 = 1;
  }
LAB_1800af973:
  puStack_98 = &system_data_buffer_ptr;
  if (puStack_90 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_90 = (void *)0x0;
  uStack_80 = 0;
  puStack_98 = &system_state_ptr;
  puStack_78 = &system_data_buffer_ptr;
  if (pbStack_70 == (byte *)0x0) {
    return uVar8;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





