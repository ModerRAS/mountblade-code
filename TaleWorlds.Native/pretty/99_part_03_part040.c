#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part040.c - 2 个函数

// 函数: void FUN_1801f1ca0(uint64_t param_1,int64_t param_2,int param_3)
void FUN_1801f1ca0(uint64_t param_1,int64_t param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  char *pcVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int64_t lVar11;
  char *pcVar12;
  uint64_t *puVar13;
  char *pcVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  int32_t auStack_a8 [2];
  void *puStack_a0;
  int64_t lStack_98;
  int iStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  uint64_t *puStack_58;
  void **ppuStack_50;
  int64_t lStack_48;
  uint64_t uStack_40;
  
  lVar4 = system_system_data_config;
  if (0 < param_3) {
    uStack_40 = 0xfffffffffffffffe;
    lVar15 = (int64_t)param_3;
    lVar17 = 0;
    lStack_48 = lVar15;
    do {
      pcVar12 = (char *)0x0;
      lVar16 = lVar17 * 0x3088 + param_2;
      pcVar14 = "base";
      do {
        pcVar8 = pcVar14;
        pcVar14 = pcVar8 + 1;
      } while (*pcVar14 != '\0');
      puVar13 = *(uint64_t **)(lVar16 + 0x30);
      if (puVar13 != (uint64_t *)0x0) {
LAB_1801f1d30:
        pcVar14 = (char *)*puVar13;
        if (pcVar14 == (char *)0x0) {
          pcVar14 = (char *)0x180d48d24;
          pcVar5 = pcVar12;
        }
        else {
          pcVar5 = (char *)puVar13[2];
        }
        if (pcVar5 != pcVar8 + -0x180a04ee3) goto LAB_1801f1d95;
        pcVar5 = pcVar5 + (int64_t)pcVar14;
        if (pcVar14 < pcVar5) {
          lVar11 = (int64_t)&system_data_4ee4 - (int64_t)pcVar14;
          while (*pcVar14 == pcVar14[lVar11]) {
            pcVar14 = pcVar14 + 1;
            if (pcVar5 <= pcVar14) goto LAB_1801f1d68;
          }
          goto LAB_1801f1d95;
        }
LAB_1801f1d68:
        pcVar14 = "postfx_graphs";
        do {
          pcVar8 = pcVar14;
          pcVar14 = pcVar8 + 1;
        } while (*pcVar14 != '\0');
        for (pcVar14 = (char *)puVar13[6]; pcVar5 = pcVar12, pcVar14 != (char *)0x0;
            pcVar14 = *(char **)(pcVar14 + 0x58)) {
          pcVar9 = *(char **)pcVar14;
          if (pcVar9 == (char *)0x0) {
            pcVar9 = (char *)0x180d48d24;
            pcVar6 = pcVar12;
          }
          else {
            pcVar6 = *(char **)(pcVar14 + 0x10);
          }
          if (pcVar6 == pcVar8 + -0x180a0e4af) {
            pcVar6 = pcVar6 + (int64_t)pcVar9;
            pcVar5 = pcVar14;
            if (pcVar6 <= pcVar9) break;
            lVar11 = (int64_t)&unknown_var_5248_ptr - (int64_t)pcVar9;
            while (*pcVar9 == pcVar9[lVar11]) {
              pcVar9 = pcVar9 + 1;
              if (pcVar6 <= pcVar9) goto LAB_1801f1de5;
            }
          }
        }
LAB_1801f1de5:
        pcVar14 = "postfx_graph";
        do {
          pcVar8 = pcVar14;
          pcVar14 = pcVar8 + 1;
        } while (*pcVar14 != '\0');
        for (pcVar14 = *(char **)(pcVar5 + 0x30); pcVar5 = pcVar12, pcVar14 != (char *)0x0;
            pcVar14 = *(char **)(pcVar14 + 0x58)) {
          pcVar9 = *(char **)pcVar14;
          if (pcVar9 == (char *)0x0) {
            pcVar9 = (char *)0x180d48d24;
            pcVar6 = pcVar12;
          }
          else {
            pcVar6 = *(char **)(pcVar14 + 0x10);
          }
          if (pcVar6 == pcVar8 + -0x180a0e4bf) {
            pcVar6 = pcVar6 + (int64_t)pcVar9;
            pcVar5 = pcVar14;
            if (pcVar6 <= pcVar9) break;
            lVar11 = (int64_t)&unknown_var_5264_ptr - (int64_t)pcVar9;
            while (*pcVar9 == pcVar9[lVar11]) {
              pcVar9 = pcVar9 + 1;
              if (pcVar6 <= pcVar9) goto joined_r0x0001801f1e51;
            }
          }
        }
joined_r0x0001801f1e51:
        do {
          if (pcVar5 == (char *)0x0) {
            for (lVar11 = *(int64_t *)(lVar16 + 0x30); lVar11 != 0;
                lVar11 = *(int64_t *)(lVar11 + 0x58)) {
              *(uint64_t *)(lVar11 + 0x20) = 0;
            }
            *(uint64_t *)(lVar16 + 0x30) = 0;
            for (lVar11 = *(int64_t *)(lVar16 + 0x40); lVar11 != 0;
                lVar11 = *(int64_t *)(lVar11 + 0x30)) {
              *(uint64_t *)(lVar11 + 0x20) = 0;
            }
            *(uint64_t *)(lVar16 + 0x40) = 0;
            FUN_180057010(lVar16 + 0x60);
            break;
          }
          puStack_a0 = &system_data_buffer_ptr;
          uStack_88 = 0;
          lStack_98 = 0;
          iStack_90 = 0;
          puStack_58 = &uStack_80;
          uStack_80 = 0;
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_68 = 3;
          auStack_a8[0] = 0xffffffff;
          FUN_1802c9150(auStack_a8,pcVar5);
          puVar3 = *(uint64_t **)(lVar4 + 0x58);
          for (puVar13 = *(uint64_t **)(lVar4 + 0x50); puVar13 != puVar3; puVar13 = puVar13 + 9) {
            iVar2 = *(int *)(puVar13 + 3);
            iVar10 = iStack_90;
            if (iVar2 == iStack_90) {
              if (iVar2 != 0) {
                pbVar7 = (byte *)puVar13[2];
                lVar15 = lStack_98 - (int64_t)pbVar7;
                do {
                  pbVar1 = pbVar7 + lVar15;
                  iVar10 = (uint)*pbVar7 - (uint)*pbVar1;
                  if (iVar10 != 0) break;
                  pbVar7 = pbVar7 + 1;
                } while (*pbVar1 != 0);
              }
LAB_1801f1f1e:
              if (iVar10 == 0) goto LAB_1801f1f73;
            }
            else if (iVar2 == 0) goto LAB_1801f1f1e;
          }
          if (puVar3 < *(uint64_t **)(lVar4 + 0x60)) {
            *(uint64_t **)(lVar4 + 0x58) = puVar3 + 9;
            *(int32_t *)puVar3 = auStack_a8[0];
            puStack_58 = puVar3;
            CoreEngineDataTransformer(puVar3 + 1,&puStack_a0);
            ppuStack_50 = (void **)(puVar3 + 5);
            FUN_1801f2f70(ppuStack_50,&uStack_80);
          }
          else {
            FUN_1801f3190(lVar4 + 0x50,auStack_a8);
          }
LAB_1801f1f73:
          pcVar14 = "postfx_graph";
          do {
            pcVar12 = pcVar14;
            pcVar14 = pcVar12 + 1;
          } while (*pcVar14 != '\0');
          for (pcVar5 = *(char **)(pcVar5 + 0x58); pcVar5 != (char *)0x0;
              pcVar5 = *(char **)(pcVar5 + 0x58)) {
            pcVar8 = *(char **)pcVar5;
            pcVar14 = (char *)0x0;
            if (pcVar8 == (char *)0x0) {
              pcVar8 = (char *)0x180d48d24;
            }
            else {
              pcVar14 = *(char **)(pcVar5 + 0x10);
            }
            if (pcVar14 == pcVar12 + -0x180a0e4bf) {
              pcVar14 = pcVar14 + (int64_t)pcVar8;
              if (pcVar14 <= pcVar8) goto LAB_1801f1fe9;
              lVar15 = (int64_t)&unknown_var_5264_ptr - (int64_t)pcVar8;
              while (*pcVar8 == pcVar8[lVar15]) {
                pcVar8 = pcVar8 + 1;
                if (pcVar14 <= pcVar8) goto LAB_1801f1fe9;
              }
            }
          }
          pcVar5 = (char *)0x0;
LAB_1801f1fe9:
          ppuStack_50 = (void **)&uStack_80;
          FUN_1800591c0(&uStack_80);
          ppuStack_50 = &puStack_a0;
          puStack_a0 = &system_data_buffer_ptr;
          if (lStack_98 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          lStack_98 = 0;
          uStack_88 = uStack_88 & 0xffffffff00000000;
          puStack_a0 = &system_state_ptr;
          lVar15 = lStack_48;
        } while( true );
      }
LAB_1801f208c:
      lVar17 = lVar17 + 1;
    } while (lVar17 < lVar15);
  }
  return;
LAB_1801f1d95:
  puVar13 = (uint64_t *)puVar13[0xb];
  if (puVar13 == (uint64_t *)0x0) goto LAB_1801f208c;
  goto LAB_1801f1d30;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1801f20c0(uint64_t param_1,int64_t param_2,int32_t param_3)

{
  byte *pbVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  byte *pbVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int iVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint uVar13;
  uint64_t uVar14;
  
  lVar4 = system_system_data_config;
  iVar5 = _Mtx_lock(system_system_data_config);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  uVar7 = 0;
  lVar3 = *(int64_t *)(lVar4 + 0x50);
  lVar8 = *(int64_t *)(lVar4 + 0x58) - lVar3;
  lVar8 = lVar8 / 0x12 + (lVar8 >> 0x3f);
  lVar10 = lVar8 >> 2;
  lVar8 = lVar8 >> 0x3f;
  if (lVar10 != lVar8) {
    iVar5 = *(int *)(param_2 + 0x10);
    uVar12 = uVar7;
    uVar14 = uVar7;
    do {
      iVar2 = *(int *)(uVar12 + 0x18 + lVar3);
      iVar9 = iVar5;
      if (iVar2 == iVar5) {
        if (iVar2 != 0) {
          pbVar6 = *(byte **)(uVar12 + 0x10 + lVar3);
          lVar11 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar6;
          do {
            pbVar1 = pbVar6 + lVar11;
            iVar9 = (uint)*pbVar6 - (uint)*pbVar1;
            if (iVar9 != 0) break;
            pbVar6 = pbVar6 + 1;
          } while (*pbVar1 != 0);
        }
LAB_1801f218e:
        if (iVar9 == 0) {
          uVar7 = FUN_1802c9580(lVar3 + (int64_t)(int)uVar14 * 0x48,param_3);
          break;
        }
      }
      else if (iVar2 == 0) goto LAB_1801f218e;
      uVar13 = (int)uVar14 + 1;
      uVar14 = (uint64_t)uVar13;
      uVar12 = uVar12 + 0x48;
    } while ((uint64_t)(int64_t)(int)uVar13 < (uint64_t)(lVar10 - lVar8));
  }
  iVar5 = _Mtx_unlock(lVar4);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  return uVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_1801f21f0(uint64_t param_1,int32_t *param_2,int64_t param_3)

{
  byte *pbVar1;
  int32_t *puVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  byte *pbVar7;
  int64_t lVar8;
  int iVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint uVar13;
  uint64_t uVar14;
  
  lVar5 = system_system_data_config;
  uVar12 = 0;
  iVar6 = _Mtx_lock(system_system_data_config);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  lVar4 = *(int64_t *)(lVar5 + 0x50);
  lVar8 = *(int64_t *)(lVar5 + 0x58) - lVar4;
  lVar8 = lVar8 / 0x12 + (lVar8 >> 0x3f);
  lVar10 = lVar8 >> 2;
  lVar8 = lVar8 >> 0x3f;
  if (lVar10 != lVar8) {
    iVar6 = *(int *)(param_3 + 0x10);
    uVar14 = uVar12;
    do {
      iVar3 = *(int *)(uVar12 + 0x18 + lVar4);
      iVar9 = iVar6;
      if (iVar3 == iVar6) {
        if (iVar3 != 0) {
          pbVar7 = *(byte **)(uVar12 + 0x10 + lVar4);
          lVar11 = *(int64_t *)(param_3 + 8) - (int64_t)pbVar7;
          do {
            pbVar1 = pbVar7 + lVar11;
            iVar9 = (uint)*pbVar7 - (uint)*pbVar1;
            if (iVar9 != 0) break;
            pbVar7 = pbVar7 + 1;
          } while (*pbVar1 != 0);
        }
LAB_1801f22be:
        if (iVar9 == 0) {
          puVar2 = (int32_t *)(lVar4 + (int64_t)(int)uVar14 * 0x48);
          *param_2 = *puVar2;
          CoreEngineDataTransformer(param_2 + 2,puVar2 + 2);
          FUN_1801f2f70(param_2 + 10,puVar2 + 10);
          goto LAB_1801f2325;
        }
      }
      else if (iVar3 == 0) goto LAB_1801f22be;
      uVar13 = (int)uVar14 + 1;
      uVar14 = (uint64_t)uVar13;
      uVar12 = uVar12 + 0x48;
    } while ((uint64_t)(int64_t)(int)uVar13 < (uint64_t)(lVar10 - lVar8));
  }
  *(void **)(param_2 + 2) = &system_state_ptr;
  *(uint64_t *)(param_2 + 4) = 0;
  param_2[6] = 0;
  *(void **)(param_2 + 2) = &system_data_buffer_ptr;
  *(uint64_t *)(param_2 + 8) = 0;
  *(uint64_t *)(param_2 + 4) = 0;
  param_2[6] = 0;
  *(uint64_t *)(param_2 + 10) = 0;
  *(uint64_t *)(param_2 + 0xc) = 0;
  *(uint64_t *)(param_2 + 0xe) = 0;
  param_2[0x10] = 3;
  *param_2 = 0xffffffff;
LAB_1801f2325:
  iVar6 = _Mtx_unlock(lVar5);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  return param_2;
}



int32_t
FUN_1801f2390(uint64_t param_1,uint64_t *param_2,void *param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  iVar1 = *(int *)(param_2 + 2);
  lVar4 = 0;
  if (iVar1 == 3) {
    param_3 = &unknown_var_5300_ptr;
    lVar5 = lVar4;
    while (lVar3 = lVar5 + 1, *(char *)(param_2[1] + lVar5) == (&unknown_var_5300_ptr)[lVar5]) {
      lVar5 = lVar3;
      if (lVar3 == 4) {
        *param_2 = &system_data_buffer_ptr;
        if (param_2[1] == 0) {
          param_2[1] = 0;
          *(int32_t *)(param_2 + 3) = 0;
          *param_2 = &system_state_ptr;
          return 1;
        }
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
    }
  }
  if ((iVar1 == 9) &&
     (iVar2 = strcmp(param_2[1],&unknown_var_5304_ptr,param_3,param_4,0xfffffffffffffffe), iVar2 == 0)) {
    FUN_180627b90(param_2);
    return 2;
  }
  if (iVar1 == 7) {
    lVar5 = lVar4;
    while (lVar3 = lVar5 + 1, *(char *)(param_2[1] + lVar5) == (&unknown_var_5280_ptr)[lVar5]) {
      lVar5 = lVar3;
      if (lVar3 == 8) {
        FUN_180627b90(param_2);
        return 0x4000;
      }
    }
  }
  if ((iVar1 == 8) && (iVar2 = strcmp(param_2[1],&unknown_var_5288_ptr), iVar2 == 0)) {
    FUN_180627b90(param_2);
    return 0x20000;
  }
  if (iVar1 == 5) {
    lVar5 = lVar4;
    while (lVar3 = lVar5 + 1, *(char *)(param_2[1] + lVar5) == (&unknown_var_5364_ptr)[lVar5]) {
      lVar5 = lVar3;
      if (lVar3 == 6) {
        FUN_180627b90(param_2);
        return 0x80000;
      }
    }
  }
  if ((iVar1 == 0xb) && (iVar2 = strcmp(param_2[1],&unknown_var_5376_ptr), iVar2 == 0)) {
    FUN_180627b90(param_2);
    return 0x8000;
  }
  if ((iVar1 == 0x14) && (iVar2 = strcmp(param_2[1],&unknown_var_5320_ptr), iVar2 == 0)) {
    FUN_180627b90(param_2);
    return 0x10000;
  }
  if ((iVar1 == 0x10) && (iVar2 = strcmp(param_2[1],&unknown_var_5344_ptr), iVar2 == 0)) {
    FUN_180627b90(param_2);
    return 0x10000000;
  }
  if ((iVar1 == 0x13) && (iVar2 = strcmp(param_2[1],&unknown_var_5400_ptr), iVar2 == 0)) {
    FUN_180627b90(param_2);
    return 0x20000000;
  }
  if ((iVar1 == 10) && (iVar2 = strcmp(param_2[1],&unknown_var_5424_ptr), iVar2 == 0)) {
    FUN_180627b90(param_2);
    return 4;
  }
  if (iVar1 == 3) {
    lVar5 = lVar4;
    while (lVar3 = lVar5 + 1, *(char *)(param_2[1] + lVar5) == (&unknown_var_5388_ptr)[lVar5]) {
      lVar5 = lVar3;
      if (lVar3 == 4) {
        FUN_180627b90(param_2);
        return 8;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5 + 1, *(char *)(param_2[1] + lVar5) == (&unknown_var_1684_ptr)[lVar5]) {
      lVar5 = lVar3;
      if (lVar3 == 4) {
        FUN_180627b90(param_2);
        return 0x1000;
      }
    }
  }
  if (iVar1 == 4) {
    lVar5 = lVar4;
    while (lVar3 = lVar5 + 1, *(char *)(param_2[1] + lVar5) == (&unknown_var_5392_ptr)[lVar5]) {
      lVar5 = lVar3;
      if (lVar3 == 5) {
        FUN_180627b90(param_2);
        return 0x10;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5 + 1, *(char *)(param_2[1] + lVar5) == (&unknown_var_5464_ptr)[lVar5]) {
      lVar5 = lVar3;
      if (lVar3 == 5) {
        FUN_180627b90(param_2);
        return 0x80;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5 + 1, *(char *)(param_2[1] + lVar5) == (&unknown_var_5472_ptr)[lVar5]) {
      lVar5 = lVar3;
      if (lVar3 == 5) {
        FUN_180627b90(param_2);
        return 0x40;
      }
    }
  }
  if ((iVar1 == 0xd) && (iVar2 = strcmp(param_2[1],&unknown_var_5440_ptr), iVar2 == 0)) {
    FUN_180627b90(param_2);
    return 0x100;
  }
  if (iVar1 == 4) {
    lVar5 = lVar4;
    while (lVar3 = lVar5 + 1, *(char *)(param_2[1] + lVar5) == (&unknown_var_5456_ptr)[lVar5]) {
      lVar5 = lVar3;
      if (lVar3 == 5) {
        FUN_180627b90(param_2);
        return 0x80000000;
      }
    }
  }
  if (iVar1 == 3) {
    lVar5 = lVar4;
    while (lVar3 = lVar5 + 1, *(char *)(param_2[1] + lVar5) == (&unknown_var_5504_ptr)[lVar5]) {
      lVar5 = lVar3;
      if (lVar3 == 4) {
        FUN_180627b90(param_2);
        return 0x20;
      }
    }
  }
  if ((iVar1 == 0x10) && (iVar2 = strcmp(param_2[1],&unknown_var_5512_ptr), iVar2 == 0)) {
    FUN_180627b90(param_2);
    return 0x200;
  }
  if ((iVar1 == 0xf) && (iVar2 = strcmp(param_2[1],&unknown_var_5480_ptr), iVar2 == 0)) {
    FUN_180627b90(param_2);
    return 0x400;
  }
  if (iVar1 == 7) {
    lVar5 = lVar4;
    while (lVar3 = lVar5 + 1, *(char *)(param_2[1] + lVar5) == (&unknown_var_5496_ptr)[lVar5]) {
      lVar5 = lVar3;
      if (lVar3 == 8) {
        FUN_180627b90(param_2);
        return 0x40000;
      }
    }
  }
  if ((iVar1 == 0xf) && (iVar2 = strcmp(param_2[1],&unknown_var_5576_ptr), iVar2 == 0)) {
    FUN_180627b90(param_2);
    return 0x100000;
  }
  if (iVar1 == 7) {
    lVar5 = lVar4;
    while (lVar3 = lVar5 + 1, *(char *)(param_2[1] + lVar5) == (&unknown_var_5592_ptr)[lVar5]) {
      lVar5 = lVar3;
      if (lVar3 == 8) {
        FUN_180627b90(param_2);
        return 0x800;
      }
    }
  }
  if (iVar1 == 5) {
    while (lVar5 = lVar4 + 1, *(char *)(param_2[1] + lVar4) == (&unknown_var_5532_ptr)[lVar4]) {
      lVar4 = lVar5;
      if (lVar5 == 6) {
        FUN_180627b90(param_2);
        return 0x2000;
      }
    }
  }
  if (system_debug_flag == '\0') {
    SystemDataInitializer(&unknown_var_5544_ptr);
  }
  FUN_180627b90(param_2);
  return 0xffffffff;
}



int32_t FUN_1801f2c40(uint64_t param_1,int64_t param_2)

{
  void *puVar1;
  int iVar2;
  int iVar3;
  void *puVar4;
  
  iVar3 = *(int *)(param_2 + 0x10);
  if ((iVar3 == 9) && (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_5656_ptr), iVar2 == 0)) {
    return 0xfffffffd;
  }
  if ((iVar3 == 0xf) && (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_5672_ptr), iVar2 == 0)) {
    return 0xfffffffc;
  }
  if ((iVar3 == 0x16) && (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_5600_ptr), iVar2 == 0))
  {
    return 0xffffffe9;
  }
  if ((iVar3 == 0x18) && (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_5624_ptr), iVar2 == 0))
  {
    return 0xfffffffb;
  }
  if ((iVar3 == 0x1c) && (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_5728_ptr), iVar2 == 0))
  {
    return 0xffffffec;
  }
  if ((iVar3 == 0x12) && (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_5760_ptr), iVar2 == 0))
  {
    return 0xffffffeb;
  }
  if ((iVar3 == 0xd) && (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_5688_ptr), iVar2 == 0)) {
    return 0xfffffff9;
  }
  if ((iVar3 == 0x15) && (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_5704_ptr), iVar2 == 0))
  {
    return 0xffffffed;
  }
  if ((iVar3 == 0xb) && (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_9144_ptr), iVar2 == 0)) {
    return 0xfffffff8;
  }
  if ((iVar3 == 0x11) && (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_5824_ptr), iVar2 == 0))
  {
    return 0xffffffef;
  }
  if (iVar3 == 0x17) {
    iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_5848_ptr);
    if (iVar2 == 0) {
      return 0xfffffff1;
    }
    iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_5784_ptr);
    if (iVar2 == 0) {
      return 0xfffffff0;
    }
  }
  if ((iVar3 == 0xd) && (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_5808_ptr), iVar2 == 0)) {
    return 0xfffffff7;
  }
  if ((iVar3 == 0x18) && (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_5912_ptr), iVar2 == 0))
  {
    return 0xffffffea;
  }
  if ((iVar3 == 0xf) && (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_5944_ptr), iVar2 == 0)) {
    return 0xffffffee;
  }
  if ((iVar3 == 0x16) && (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_5872_ptr), iVar2 == 0))
  {
    return 0xfffffff6;
  }
  if (iVar3 == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_5896_ptr);
    if (iVar2 == 0) {
      return 0xfffffff4;
    }
    iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_6008_ptr);
    if (iVar2 == 0) {
      return 0xfffffff3;
    }
  }
  puVar1 = *(void **)(param_2 + 8);
  if ((iVar3 == 0xd) && (iVar3 = strcmp(puVar1,&unknown_var_6024_ptr), iVar3 == 0)) {
    return 0xfffffff2;
  }
  puVar4 = &system_buffer_ptr;
  if (puVar1 != (void *)0x0) {
    puVar4 = puVar1;
  }
  SystemDataInitializer(&unknown_var_5960_ptr,puVar4);
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_1801f2f70(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  
  lVar4 = (param_2[1] - *param_2) / 0x548;
  uVar2 = *(uint *)(param_2 + 3);
  *(uint *)(param_1 + 3) = uVar2;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 0x548,uVar2 & 0xff);
  }
  *param_1 = lVar3;
  param_1[1] = lVar3;
  param_1[2] = lVar4 * 0x548 + lVar3;
  lVar4 = *param_1;
  lVar3 = param_2[1];
  lVar6 = *param_2;
  if (lVar6 != lVar3) {
    lVar5 = lVar4 - lVar6;
    lVar6 = lVar6 + 0x40;
    do {
      CoreEngineDataTransformer(lVar4,lVar6 + -0x40);
      CoreEngineDataTransformer(lVar5 + -0x20 + lVar6,lVar6 + -0x20);
      CoreEngineDataTransformer(lVar6 + lVar5,lVar6);
      *(int8_t *)(lVar6 + 0x20 + lVar5) = *(int8_t *)(lVar6 + 0x20);
      *(int32_t *)(lVar6 + 0x24 + lVar5) = *(int32_t *)(lVar6 + 0x24);
      *(int8_t *)(lVar6 + 0x28 + lVar5) = *(int8_t *)(lVar6 + 0x28);
      *(int8_t *)(lVar6 + 0x29 + lVar5) = *(int8_t *)(lVar6 + 0x29);
      *(int8_t *)(lVar6 + 0x2a + lVar5) = *(int8_t *)(lVar6 + 0x2a);
      *(int32_t *)(lVar6 + 0x2c + lVar5) = *(int32_t *)(lVar6 + 0x2c);
      *(int32_t *)(lVar6 + 0x30 + lVar5) = *(int32_t *)(lVar6 + 0x30);
      *(int32_t *)(lVar6 + 0x34 + lVar5) = *(int32_t *)(lVar6 + 0x34);
      *(int32_t *)(lVar6 + 0x38 + lVar5) = *(int32_t *)(lVar6 + 0x38);
      *(int32_t *)(lVar6 + 0x3c + lVar5) = *(int32_t *)(lVar6 + 0x3c);
      *(int32_t *)(lVar6 + 0x40 + lVar5) = *(int32_t *)(lVar6 + 0x40);
      *(int32_t *)(lVar6 + 0x44 + lVar5) = *(int32_t *)(lVar6 + 0x44);
      FUN_1808fcf5c(lVar5 + 0x48 + lVar6,lVar6 + 0x48,0x20,0x10,FUN_1801f34f0,FUN_180059620);
      FUN_1808fcf5c(lVar5 + 0x248 + lVar6,lVar6 + 0x248,0x58,4,FUN_1800b8300,FUN_180044a30);
      FUN_1808fcf5c(lVar5 + 0x3a8 + lVar6,lVar6 + 0x3a8,0x58,4,FUN_1800b8300,FUN_180044a30);
      lVar4 = lVar4 + 0x548;
      lVar1 = lVar6 + 0x508;
      lVar6 = lVar6 + 0x548;
    } while (lVar1 != lVar3);
  }
  param_1[1] = lVar4;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801f3190(int64_t *param_1,int32_t *param_2)
void FUN_1801f3190(int64_t *param_1,int32_t *param_2)

{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  int64_t lVar5;
  int32_t *puVar6;
  int64_t lVar7;
  int32_t *puVar8;
  int64_t lVar9;
  int64_t lVar10;
  
  lVar10 = param_1[1];
  lVar9 = *param_1;
  lVar7 = (lVar10 - lVar9) / 0x48;
  puVar4 = (int32_t *)0x0;
  if (lVar7 == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = lVar7 * 2;
    if (lVar7 == 0) goto LAB_1801f3218;
  }
  puVar4 = (int32_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 0x48,(char)param_1[3],lVar9,0xfffffffffffffffe);
  lVar10 = param_1[1];
  lVar9 = *param_1;
LAB_1801f3218:
  puVar6 = puVar4;
  if (lVar9 != lVar10) {
    lVar9 = lVar9 - (int64_t)puVar4;
    puVar8 = puVar4 + 0x10;
    do {
      *puVar6 = *(int32_t *)(lVar9 + -0x40 + (int64_t)puVar8);
      *(void **)(puVar8 + -0xe) = &system_state_ptr;
      *(uint64_t *)(puVar8 + -0xc) = 0;
      puVar8[-10] = 0;
      *(void **)(puVar8 + -0xe) = &system_data_buffer_ptr;
      *(uint64_t *)(puVar8 + -8) = 0;
      *(uint64_t *)(puVar8 + -0xc) = 0;
      puVar8[-10] = 0;
      puVar8[-10] = *(int32_t *)(lVar9 + -0x28 + (int64_t)puVar8);
      *(uint64_t *)(puVar8 + -0xc) = *(uint64_t *)(lVar9 + -0x30 + (int64_t)puVar8);
      puVar8[-7] = *(int32_t *)(lVar9 + -0x1c + (int64_t)puVar8);
      puVar8[-8] = *(int32_t *)(lVar9 + -0x20 + (int64_t)puVar8);
      *(int32_t *)(lVar9 + -0x28 + (int64_t)puVar8) = 0;
      *(uint64_t *)(lVar9 + -0x30 + (int64_t)puVar8) = 0;
      *(uint64_t *)(lVar9 + -0x20 + (int64_t)puVar8) = 0;
      puVar1 = (uint64_t *)(puVar8 + -6);
      *puVar1 = 0;
      *(uint64_t *)(puVar8 + -4) = 0;
      *(uint64_t *)(puVar8 + -2) = 0;
      *puVar8 = *(int32_t *)(lVar9 + (int64_t)puVar8);
      uVar3 = *puVar1;
      *puVar1 = *(uint64_t *)(lVar9 + -0x18 + (int64_t)puVar8);
      *(uint64_t *)(lVar9 + -0x18 + (int64_t)puVar8) = uVar3;
      uVar3 = *(uint64_t *)(puVar8 + -4);
      *(uint64_t *)(puVar8 + -4) = *(uint64_t *)(lVar9 + -0x10 + (int64_t)puVar8);
      *(uint64_t *)(lVar9 + -0x10 + (int64_t)puVar8) = uVar3;
      uVar3 = *(uint64_t *)(puVar8 + -2);
      *(uint64_t *)(puVar8 + -2) = *(uint64_t *)(lVar9 + -8 + (int64_t)puVar8);
      *(uint64_t *)(lVar9 + -8 + (int64_t)puVar8) = uVar3;
      uVar2 = *puVar8;
      *puVar8 = *(int32_t *)(lVar9 + (int64_t)puVar8);
      *(int32_t *)(lVar9 + (int64_t)puVar8) = uVar2;
      puVar6 = puVar6 + 0x12;
      lVar5 = (int64_t)puVar8 + lVar9 + 8;
      puVar8 = puVar8 + 0x12;
    } while (lVar5 != lVar10);
  }
  *puVar6 = *param_2;
  CoreEngineDataTransformer(puVar6 + 2,param_2 + 2);
  FUN_1801f2f70(puVar6 + 10,param_2 + 10);
  lVar10 = param_1[1];
  lVar9 = *param_1;
  if (lVar9 != lVar10) {
    do {
      FUN_180058c20(lVar9);
      lVar9 = lVar9 + 0x48;
    } while (lVar9 != lVar10);
    lVar9 = *param_1;
  }
  if (lVar9 == 0) {
    *param_1 = (int64_t)puVar4;
    param_1[1] = (int64_t)(puVar6 + 0x12);
    param_1[2] = (int64_t)(puVar4 + lVar7 * 0x12);
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(lVar9);
}



int64_t FUN_1801f33a0(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  CoreEngineDataTransformer();
  CoreEngineDataTransformer(param_1 + 0x20,param_2 + 0x20);
  CoreEngineDataTransformer(param_1 + 0x40,param_2 + 0x40);
  *(int8_t *)(param_1 + 0x60) = *(int8_t *)(param_2 + 0x60);
  *(int32_t *)(param_1 + 100) = *(int32_t *)(param_2 + 100);
  *(int8_t *)(param_1 + 0x68) = *(int8_t *)(param_2 + 0x68);
  *(int8_t *)(param_1 + 0x69) = *(int8_t *)(param_2 + 0x69);
  *(int8_t *)(param_1 + 0x6a) = *(int8_t *)(param_2 + 0x6a);
  *(int32_t *)(param_1 + 0x6c) = *(int32_t *)(param_2 + 0x6c);
  *(int32_t *)(param_1 + 0x70) = *(int32_t *)(param_2 + 0x70);
  *(int32_t *)(param_1 + 0x74) = *(int32_t *)(param_2 + 0x74);
  *(int32_t *)(param_1 + 0x78) = *(int32_t *)(param_2 + 0x78);
  *(int32_t *)(param_1 + 0x7c) = *(int32_t *)(param_2 + 0x7c);
  *(int32_t *)(param_1 + 0x80) = *(int32_t *)(param_2 + 0x80);
  *(int32_t *)(param_1 + 0x84) = *(int32_t *)(param_2 + 0x84);
  FUN_1808fcf5c(param_1 + 0x88,param_2 + 0x88,0x20,0x10,FUN_1801f34f0,FUN_180059620,uVar1);
  FUN_1808fcf5c(param_1 + 0x288,param_2 + 0x288,0x58,4,FUN_1800b8300,FUN_180044a30);
  FUN_1808fcf5c(param_1 + 1000,param_2 + 1000,0x58,4,FUN_1800b8300,FUN_180044a30);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_1801f34f0(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  uint uVar2;
  int32_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int32_t *puVar6;
  
  lVar5 = (param_2[1] - *param_2) / 0x50;
  uVar2 = *(uint *)(param_2 + 3);
  *(uint *)(param_1 + 3) = uVar2;
  if (lVar5 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar5 * 0x50,uVar2 & 0xff,param_4,0xfffffffffffffffe);
  }
  *param_1 = lVar4;
  param_1[1] = lVar4;
  param_1[2] = lVar5 * 0x50 + lVar4;
  lVar5 = *param_1;
  puVar3 = (int32_t *)param_2[1];
  puVar6 = (int32_t *)*param_2;
  if (puVar6 != puVar3) {
    lVar4 = lVar5 - (int64_t)puVar6;
    puVar6 = puVar6 + 0x10;
    do {
      CoreEngineDataTransformer(lVar5,puVar6 + -0x10);
      CoreEngineDataTransformer(lVar4 + -0x20 + (int64_t)puVar6,puVar6 + -8);
      *(int32_t *)(lVar4 + (int64_t)puVar6) = *puVar6;
      *(int32_t *)(lVar4 + 4 + (int64_t)puVar6) = puVar6[1];
      *(int32_t *)(lVar4 + 8 + (int64_t)puVar6) = puVar6[2];
      lVar5 = lVar5 + 0x50;
      puVar1 = puVar6 + 4;
      puVar6 = puVar6 + 0x14;
    } while (puVar1 != puVar3);
  }
  param_1[1] = lVar5;
  return param_1;
}



uint64_t *
FUN_1801f3600(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_8072_ptr;
  FUN_1801f9920();
  if ((param_2 & 1) != 0) {
    free(param_1,0x450,param_3,param_4,uVar1);
  }
  return param_1;
}



uint64_t *
FUN_1801f3650(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_8160_ptr;
  FUN_1801f9920();
  if ((param_2 & 1) != 0) {
    free(param_1,0x450,param_3,param_4,uVar1);
  }
  return param_1;
}



uint64_t * FUN_1801f36a0(uint64_t *param_1,uint param_2)

{
  *param_1 = &unknown_var_7888_ptr;
  SystemDataValidator(param_1 + 0x8b,8,3,DataCacheManager,0xfffffffffffffffe);
  FUN_1801f9920(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x470);
  }
  return param_1;
}



uint64_t FUN_1801f3710(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1801f9920();
  if ((param_2 & 1) != 0) {
    free(param_1,0x460,param_3,param_4,uVar1);
  }
  return param_1;
}



uint64_t FUN_1801f3760(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1801f9920();
  if ((param_2 & 1) != 0) {
    free(param_1,0x450,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




