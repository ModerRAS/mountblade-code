#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part025.c - 7 个函数

// 函数: void FUN_1804b3e80(int64_t *param_1,int64_t param_2)
void FUN_1804b3e80(int64_t *param_1,int64_t param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  uint64_t uVar4;
  char *pcVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  uint64_t uVar14;
  void *puStack_70;
  int64_t lStack_68;
  int iStack_60;
  uint64_t uStack_58;
  void *puStack_50;
  int64_t lStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  char *pcVar13;
  
  pcVar2 = (char *)0x0;
  uVar12 = 0;
  puStack_70 = &system_data_buffer_ptr;
  uStack_58 = 0;
  lStack_68 = 0;
  iStack_60 = 0;
  pcVar10 = "name";
  do {
    pcVar11 = pcVar10;
    pcVar10 = pcVar11 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar10 = (char *)*puVar9;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x180d48d24;
      pcVar5 = pcVar2;
    }
    else {
      pcVar5 = (char *)puVar9[2];
    }
    if (pcVar5 == pcVar11 + -0x180a03a83) {
      pcVar5 = pcVar5 + (int64_t)pcVar10;
      if (pcVar5 <= pcVar10) {
LAB_1804b3f44:
        lVar6 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar6 = puVar9[1];
        }
        (**(code **)(param_1[4] + 0x10))(param_1 + 4,lVar6,pcVar5,puVar9,0xfffffffffffffffe);
        pcVar10 = pcVar2;
        if (0 < (int)param_1[6]) {
          pcVar10 = (char *)FUN_1800b6de0(system_resource_state,param_1 + 4,1);
        }
        param_1[8] = (int64_t)pcVar10;
        break;
      }
      lVar6 = (int64_t)&system_data_3a84 - (int64_t)pcVar10;
      while (*pcVar10 == pcVar10[lVar6]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar5 <= pcVar10) goto LAB_1804b3f44;
      }
    }
  }
  pcVar10 = "cover_type1";
  do {
    pcVar11 = pcVar10;
    pcVar10 = pcVar11 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar10 = (char *)*puVar9;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x180d48d24;
      pcVar5 = pcVar2;
    }
    else {
      pcVar5 = (char *)puVar9[2];
    }
    if (pcVar5 == pcVar11 + -0x180a2e4af) {
      pcVar5 = pcVar5 + (int64_t)pcVar10;
      if (pcVar5 <= pcVar10) {
LAB_1804b3fe0:
        lVar6 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar6 = puVar9[1];
        }
        (**(code **)(puStack_70 + 0x10))(&puStack_70,lVar6);
        pcVar10 = pcVar2;
        if (0 < iStack_60) {
          pcVar10 = (char *)FUN_1800b6de0(system_resource_state,&puStack_70,1);
        }
        param_1[9] = (int64_t)pcVar10;
        break;
      }
      lVar6 = (int64_t)&processed_var_6320_ptr - (int64_t)pcVar10;
      while (*pcVar10 == pcVar10[lVar6]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar5 <= pcVar10) goto LAB_1804b3fe0;
      }
    }
  }
  pcVar10 = "cover_type2";
  do {
    pcVar11 = pcVar10;
    pcVar10 = pcVar11 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar10 = (char *)*puVar9;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x180d48d24;
      pcVar5 = pcVar2;
    }
    else {
      pcVar5 = (char *)puVar9[2];
    }
    if (pcVar5 == pcVar11 + -0x180a2e49f) {
      pcVar5 = pcVar5 + (int64_t)pcVar10;
      if (pcVar5 <= pcVar10) {
LAB_1804b4080:
        lVar6 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar6 = puVar9[1];
        }
        (**(code **)(puStack_70 + 0x10))(&puStack_70,lVar6);
        pcVar10 = pcVar2;
        if (0 < iStack_60) {
          pcVar10 = (char *)FUN_1800b6de0(system_resource_state,&puStack_70,1);
        }
        param_1[10] = (int64_t)pcVar10;
        break;
      }
      lVar6 = (int64_t)&processed_var_6304_ptr - (int64_t)pcVar10;
      while (*pcVar10 == pcVar10[lVar6]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar5 <= pcVar10) goto LAB_1804b4080;
      }
    }
  }
  pcVar10 = "cover_type3";
  do {
    pcVar11 = pcVar10;
    pcVar10 = pcVar11 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar10 = (char *)*puVar9;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x180d48d24;
      pcVar5 = pcVar2;
    }
    else {
      pcVar5 = (char *)puVar9[2];
    }
    if (pcVar5 == pcVar11 + -0x180a2e677) {
      pcVar5 = pcVar10 + (int64_t)pcVar5;
      if (pcVar5 <= pcVar10) {
LAB_1804b4120:
        lVar6 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar6 = puVar9[1];
        }
        (**(code **)(puStack_70 + 0x10))(&puStack_70,lVar6);
        pcVar10 = pcVar2;
        if (0 < iStack_60) {
          pcVar10 = (char *)FUN_1800b6de0(system_resource_state,&puStack_70,1);
        }
        param_1[0xb] = (int64_t)pcVar10;
        break;
      }
      lVar6 = (int64_t)&processed_var_6776_ptr - (int64_t)pcVar10;
      while (*pcVar10 == pcVar10[lVar6]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar5 <= pcVar10) goto LAB_1804b4120;
      }
    }
  }
  pcVar10 = "cover_type4";
  do {
    pcVar11 = pcVar10;
    pcVar10 = pcVar11 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar10 = (char *)*puVar9;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x180d48d24;
      pcVar5 = pcVar2;
    }
    else {
      pcVar5 = (char *)puVar9[2];
    }
    if (pcVar5 == pcVar11 + -0x180a2e667) {
      pcVar5 = pcVar5 + (int64_t)pcVar10;
      if (pcVar5 <= pcVar10) {
LAB_1804b41c0:
        lVar6 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar6 = puVar9[1];
        }
        (**(code **)(puStack_70 + 0x10))(&puStack_70,lVar6);
        pcVar10 = pcVar2;
        if (0 < iStack_60) {
          pcVar10 = (char *)FUN_1800b6de0(system_resource_state,&puStack_70,1);
        }
        param_1[0xc] = (int64_t)pcVar10;
        break;
      }
      lVar6 = (int64_t)&processed_var_6760_ptr - (int64_t)pcVar10;
      while (*pcVar10 == pcVar10[lVar6]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar5 <= pcVar10) goto LAB_1804b41c0;
      }
    }
  }
  pcVar10 = "cover_all";
  do {
    pcVar11 = pcVar10;
    pcVar10 = pcVar11 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar10 = (char *)*puVar9;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x180d48d24;
      pcVar5 = pcVar2;
    }
    else {
      pcVar5 = (char *)puVar9[2];
    }
    if (pcVar5 == pcVar11 + -0x180a2e697) {
      pcVar5 = pcVar5 + (int64_t)pcVar10;
      if (pcVar5 <= pcVar10) {
LAB_1804b4260:
        lVar6 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar6 = puVar9[1];
        }
        (**(code **)(puStack_70 + 0x10))(&puStack_70,lVar6);
        pcVar10 = pcVar2;
        if (0 < iStack_60) {
          pcVar10 = (char *)FUN_1800b6de0(system_resource_state,&puStack_70,1);
        }
        param_1[0xd] = (int64_t)pcVar10;
        break;
      }
      lVar6 = (int64_t)&processed_var_6808_ptr - (int64_t)pcVar10;
      while (*pcVar10 == pcVar10[lVar6]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar5 <= pcVar10) goto LAB_1804b4260;
      }
    }
  }
  pcVar10 = "style_tags";
  do {
    pcVar11 = pcVar10;
    pcVar10 = pcVar11 + 1;
  } while (*pcVar10 != '\0');
  puVar9 = *(uint64_t **)(param_2 + 0x30);
  do {
    if (puVar9 == (uint64_t *)0x0) goto LAB_1804b46ae;
    pcVar10 = (char *)*puVar9;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x180d48d24;
      pcVar5 = pcVar2;
    }
    else {
      pcVar5 = (char *)puVar9[2];
    }
    if (pcVar5 == pcVar11 + -0x180a2e687) {
      pcVar5 = pcVar5 + (int64_t)pcVar10;
      if (pcVar5 <= pcVar10) {
LAB_1804b4301:
        pcVar10 = "style_tag";
        do {
          pcVar11 = pcVar10;
          pcVar10 = pcVar11 + 1;
        } while (*pcVar10 != '\0');
        pcVar10 = (char *)puVar9[6];
        for (pcVar5 = pcVar10; pcVar5 != (char *)0x0; pcVar5 = *(char **)(pcVar5 + 0x58)) {
          pcVar3 = *(char **)pcVar5;
          if (pcVar3 == (char *)0x0) {
            pcVar3 = (char *)0x180d48d24;
            pcVar1 = pcVar2;
          }
          else {
            pcVar1 = *(char **)(pcVar5 + 0x10);
          }
          if (pcVar1 == pcVar11 + -0x180a2e627) {
            pcVar1 = pcVar1 + (int64_t)pcVar3;
            pcVar13 = pcVar2;
            if (pcVar1 <= pcVar3) {
LAB_1804b4380:
              do {
                uVar12 = (int)pcVar13 + 1;
                pcVar11 = "style_tag";
                do {
                  pcVar3 = pcVar11;
                  pcVar11 = pcVar3 + 1;
                } while (*pcVar11 != '\0');
                while( true ) {
                  do {
                    pcVar5 = *(char **)(pcVar5 + 0x58);
                    if (pcVar5 == (char *)0x0) goto LAB_1804b43e5;
                    pcVar11 = *(char **)pcVar5;
                    if (pcVar11 == (char *)0x0) {
                      pcVar11 = (char *)0x180d48d24;
                      pcVar1 = pcVar2;
                    }
                    else {
                      pcVar1 = *(char **)(pcVar5 + 0x10);
                    }
                  } while (pcVar1 != pcVar3 + -0x180a2e627);
                  pcVar1 = pcVar1 + (int64_t)pcVar11;
                  pcVar13 = (char *)(uint64_t)uVar12;
                  if (pcVar1 <= pcVar11) break;
                  lVar6 = (int64_t)&processed_var_6696_ptr - (int64_t)pcVar11;
                  while (*pcVar11 == pcVar11[lVar6]) {
                    pcVar11 = pcVar11 + 1;
                    if (pcVar1 <= pcVar11) goto LAB_1804b4380;
                  }
                }
              } while( true );
            }
            lVar6 = (int64_t)&processed_var_6696_ptr - (int64_t)pcVar3;
            while (*pcVar3 == pcVar3[lVar6]) {
              pcVar3 = pcVar3 + 1;
              if (pcVar1 <= pcVar3) goto LAB_1804b4380;
            }
          }
        }
LAB_1804b43e5:
        pcVar11 = "style_tag";
        do {
          pcVar5 = pcVar11;
          pcVar11 = pcVar5 + 1;
        } while (*pcVar11 != '\0');
        for (; pcVar11 = pcVar2, pcVar10 != (char *)0x0; pcVar10 = *(char **)(pcVar10 + 0x58)) {
          pcVar3 = *(char **)pcVar10;
          if (pcVar3 == (char *)0x0) {
            pcVar3 = (char *)0x180d48d24;
            pcVar1 = pcVar2;
          }
          else {
            pcVar1 = *(char **)(pcVar10 + 0x10);
          }
          if (pcVar1 == pcVar5 + -0x180a2e627) {
            pcVar1 = pcVar1 + (int64_t)pcVar3;
            pcVar11 = pcVar10;
            if (pcVar1 <= pcVar3) break;
            lVar6 = (int64_t)&processed_var_6696_ptr - (int64_t)pcVar3;
            while (*pcVar3 == pcVar3[lVar6]) {
              pcVar3 = pcVar3 + 1;
              if (pcVar1 <= pcVar3) goto LAB_1804b444f;
            }
          }
        }
LAB_1804b444f:
        if ((int)uVar12 < 1) goto LAB_1804b46ae;
        uVar14 = (uint64_t)uVar12;
        do {
          pcVar2 = (char *)0x0;
          puStack_50 = &system_data_buffer_ptr;
          uStack_38 = 0;
          lStack_48 = 0;
          uStack_40 = 0;
          pcVar10 = "name";
          do {
            pcVar5 = pcVar10;
            pcVar10 = pcVar5 + 1;
          } while (*pcVar10 != '\0');
          for (puVar9 = *(uint64_t **)(pcVar11 + 0x40); puVar9 != (uint64_t *)0x0;
              puVar9 = (uint64_t *)puVar9[6]) {
            pcVar10 = (char *)*puVar9;
            if (pcVar10 == (char *)0x0) {
              pcVar10 = (char *)0x180d48d24;
              pcVar3 = pcVar2;
            }
            else {
              pcVar3 = (char *)puVar9[2];
            }
            if (pcVar3 == pcVar5 + -0x180a03a83) {
              pcVar3 = pcVar3 + (int64_t)pcVar10;
              if (pcVar3 <= pcVar10) {
LAB_1804b44f0:
                lVar6 = 0x180d48d24;
                if (puVar9[1] != 0) {
                  lVar6 = puVar9[1];
                }
                CoreSystem_ConfigValidator0(&puStack_50,lVar6);
                break;
              }
              lVar6 = (int64_t)&system_data_3a84 - (int64_t)pcVar10;
              while (*pcVar10 == pcVar10[lVar6]) {
                pcVar10 = pcVar10 + 1;
                if (pcVar3 <= pcVar10) goto LAB_1804b44f0;
              }
            }
          }
          uVar4 = param_1[1];
          if (uVar4 < (uint64_t)param_1[2]) {
            param_1[1] = uVar4 + 0x20;
            CoreEngineDataTransformer(uVar4,&puStack_50);
          }
          else {
            lVar6 = *param_1;
            lVar8 = (int64_t)(uVar4 - lVar6) >> 5;
            if (lVar8 == 0) {
              lVar8 = 1;
LAB_1804b4557:
              pcVar2 = (char *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar8 << 5,(char)param_1[3]);
              uVar4 = param_1[1];
              lVar6 = *param_1;
            }
            else {
              lVar8 = lVar8 * 2;
              if (lVar8 != 0) goto LAB_1804b4557;
            }
            lVar6 = FUN_180059780(lVar6,uVar4,pcVar2);
            CoreEngineDataTransformer(lVar6,&puStack_50);
            puVar9 = (uint64_t *)param_1[1];
            puVar7 = (uint64_t *)*param_1;
            if (puVar7 != puVar9) {
              do {
                (**(code **)*puVar7)(puVar7,0);
                puVar7 = puVar7 + 4;
              } while (puVar7 != puVar9);
              puVar7 = (uint64_t *)*param_1;
            }
            if (puVar7 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner(puVar7);
            }
            *param_1 = (int64_t)pcVar2;
            param_1[1] = lVar6 + 0x20;
            param_1[2] = (int64_t)(pcVar2 + lVar8 * 0x20);
          }
          pcVar10 = "style_tag";
          do {
            pcVar2 = pcVar10;
            pcVar10 = pcVar2 + 1;
          } while (*pcVar10 != '\0');
          for (pcVar10 = *(char **)(pcVar11 + 0x58); pcVar11 = (char *)0x0, pcVar10 != (char *)0x0;
              pcVar10 = *(char **)(pcVar10 + 0x58)) {
            pcVar5 = *(char **)pcVar10;
            if (pcVar5 == (char *)0x0) {
              pcVar3 = (char *)0x0;
              pcVar5 = (char *)0x180d48d24;
            }
            else {
              pcVar3 = *(char **)(pcVar10 + 0x10);
            }
            if (pcVar3 == pcVar2 + -0x180a2e627) {
              pcVar3 = pcVar3 + (int64_t)pcVar5;
              pcVar11 = pcVar10;
              if (pcVar3 <= pcVar5) break;
              lVar6 = (int64_t)&processed_var_6696_ptr - (int64_t)pcVar5;
              while (*pcVar5 == pcVar5[lVar6]) {
                pcVar5 = pcVar5 + 1;
                if (pcVar3 <= pcVar5) goto LAB_1804b466f;
              }
            }
          }
LAB_1804b466f:
          puStack_50 = &system_data_buffer_ptr;
          if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          lStack_48 = 0;
          uStack_38 = uStack_38 & 0xffffffff00000000;
          puStack_50 = &system_state_ptr;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
LAB_1804b46ae:
        puStack_70 = &system_data_buffer_ptr;
        if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        return;
      }
      lVar6 = (int64_t)&processed_var_6792_ptr - (int64_t)pcVar10;
      while (*pcVar10 == pcVar10[lVar6]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar5 <= pcVar10) goto LAB_1804b4301;
      }
    }
    puVar9 = (uint64_t *)puVar9[0xb];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t *
FUN_1804b4700(int64_t param_1,int64_t *param_2,uint64_t param_3,int param_4,uint param_5,
             uint param_6,uint64_t param_7,char param_8,uint64_t param_9)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  uint64_t uStack_50;
  float fStack_48;
  float fStack_44;
  uint64_t uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  *param_2 = 0;
  lVar1 = *(int64_t *)(param_1 + 0x40 + (int64_t)param_4 * 8);
  if (lVar1 != 0) {
    uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16);
    plVar4 = (int64_t *)FUN_180275090(uVar3);
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    FUN_180275a60(lVar1,plVar4,1);
    uStack_50 = (int64_t *)*param_2;
    *param_2 = (int64_t)plVar4;
    if (uStack_50 != (int64_t *)0x0) {
      (**(code **)(*uStack_50 + 0x38))();
    }
    if (param_8 == '\0') {
      FUN_1804b4d20(param_3,*param_2,param_1 + 0x70 + (int64_t)param_4 * 0x30,param_7,1,param_9,1);
    }
    fStack_44 = (float)(param_5 >> 0x18) * 0.003921569;
    uStack_50 = (int64_t *)
                CONCAT44((float)(param_5 >> 8 & 0xff) * 0.003921569,
                         (float)(param_5 >> 0x10 & 0xff) * 0.003921569);
    fStack_48 = (float)(param_5 & 0xff) * 0.003921569;
    (**(code **)(*(int64_t *)*param_2 + 0x108))((int64_t *)*param_2,&uStack_50);
    lVar1 = *param_2;
    uStack_50 = (int64_t *)
                CONCAT44((float)(param_6 >> 8 & 0xff) * 0.003921569,
                         (float)(param_6 >> 0x10 & 0xff) * 0.003921569);
    plVar4 = *(int64_t **)(lVar1 + 0x38);
    if (plVar4 < *(int64_t **)(lVar1 + 0x40)) {
      do {
        lVar2 = *plVar4;
        *(int64_t **)(lVar2 + 0x248) = uStack_50;
        *(uint64_t *)(lVar2 + 0x250) =
             CONCAT44((float)(param_6 >> 0x18) * 0.003921569,(float)(param_6 & 0xff) * 0.003921569);
        plVar4 = plVar4 + 2;
      } while (plVar4 < *(int64_t **)(lVar1 + 0x40));
    }
  }
  return param_2;
}






// 函数: void FUN_1804b4950(uint64_t *param_1)
void FUN_1804b4950(uint64_t *param_1)

{
  if (param_1[0x12] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x12] = 0;
  if (param_1[0x14] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x14] = 0;
  if (param_1[0x13] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x13] = 0;
  param_1[4] = &system_data_buffer_ptr;
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[5] = 0;
  *(int32_t *)(param_1 + 7) = 0;
  param_1[4] = &system_state_ptr;
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}



int64_t FUN_1804b4a30(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  
  CoreEngineDataTransformer(param_1 + 8);
  *(uint64_t *)(param_1 + 0x28) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(int32_t *)(param_1 + 0x38) = 0;
  *(uint64_t *)(param_1 + 0x28) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(int32_t *)(param_1 + 0x38) = 0;
  *(uint64_t *)(param_1 + 0x50) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x58) = 0;
  *(int32_t *)(param_1 + 0x60) = 0;
  *(uint64_t *)(param_1 + 0x50) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x68) = 0;
  *(uint64_t *)(param_1 + 0x58) = 0;
  *(int32_t *)(param_1 + 0x60) = 0;
  DataStructureManager(param_1 + 0x70,0x28,0xc,&processed_var_704_ptr,FUN_1804bfc50);
  *(uint64_t *)(param_1 + 0x250) = 0;
  *(uint64_t *)(param_1 + 600) = 0;
  *(uint64_t *)(param_1 + 0x260) = 0;
  lVar2 = 3;
  *(int32_t *)(param_1 + 0x268) = 3;
  *(uint64_t *)(param_1 + 0x270) = 0;
  *(uint64_t *)(param_1 + 0x278) = 0;
  *(uint64_t *)(param_1 + 0x280) = 0;
  *(int32_t *)(param_1 + 0x288) = 3;
  plVar3 = (int64_t *)(param_1 + 0x2a0);
  DataStructureManager(plVar3,8,3,&SUB_18005d5f0,DataCacheManager);
  DataStructureManager(param_1 + 0x2d8,0x30,3,FUN_1800ae3f0,FUN_18004b6f0);
  *(uint64_t *)(param_1 + 0x9e0) = 0;
  *(uint64_t *)(param_1 + 0x9e8) = 0;
  *(uint64_t *)(param_1 + 0x9f0) = 0;
  *(int32_t *)(param_1 + 0x9f8) = 3;
  *(uint64_t *)(param_1 + 0xa00) = 0;
  *(uint64_t *)(param_1 + 0xa08) = 0;
  *(uint64_t *)(param_1 + 0xa10) = 0;
  *(int32_t *)(param_1 + 0xa18) = 3;
  *(uint64_t *)(param_1 + 0xa20) = 0;
  *(uint64_t *)(param_1 + 0xa28) = 0;
  *(uint64_t *)(param_1 + 0xa30) = 0;
  *(int32_t *)(param_1 + 0xa38) = 3;
  *(uint64_t *)(param_1 + 0xa40) = 0;
  *(uint64_t *)(param_1 + 0xa48) = 0;
  *(uint64_t *)(param_1 + 0xa50) = 0;
  *(int32_t *)(param_1 + 0xa58) = 3;
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(uint64_t *)(param_1 + 0x290) = 0;
  *(int32_t *)(param_1 + 0x298) = 0;
  do {
    plVar1 = (int64_t *)*plVar3;
    *plVar3 = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar3 = plVar3 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(uint64_t *)(param_1 + 0x2b8) = 0;
  *(uint64_t *)(param_1 + 0x2c0) = 0;
  *(uint64_t *)(param_1 + 0x2c8) = 0;
  *(uint64_t *)(param_1 + 0x2d0) = 0;
  *(uint64_t *)(param_1 + 0x370) = 0;
  *(uint64_t *)(param_1 + 0x388) = 0;
  *(uint64_t *)(param_1 + 0x3a8) = 0;
  *(uint64_t *)(param_1 + 0x378) = 0;
  *(uint64_t *)(param_1 + 0x3b8) = 0;
  *(int32_t *)(param_1 + 0x5c4) = 2;
  *(uint64_t *)(param_1 + 0x3c4) = 0x3f8000003f800000;
  *(uint64_t *)(param_1 + 0x3cc) = 0x7f7fffff3f800000;
  *(uint64_t *)(param_1 + 0x3d4) = 0x3f8000003f800000;
  *(uint64_t *)(param_1 + 0x3dc) = 0x7f7fffff3f800000;
  *(int32_t *)(param_1 + 0x5d0) = 0;
  *(int32_t *)(param_1 + 0x7d4) = 2;
  *(uint64_t *)(param_1 + 0x5d4) = 0x3f8000003f800000;
  *(uint64_t *)(param_1 + 0x5dc) = 0x7f7fffff3f800000;
  *(uint64_t *)(param_1 + 0x5e4) = 0x3f8000003f800000;
  *(uint64_t *)(param_1 + 0x5ec) = 0x7f7fffff3f800000;
  *(int32_t *)(param_1 + 0x9d8) = 2;
  *(uint64_t *)(param_1 + 0x7d8) = 0x3f8000003f800000;
  *(uint64_t *)(param_1 + 0x7e0) = 0x7f7fffff3f800000;
  *(uint64_t *)(param_1 + 0x7e8) = 0x3f8000003f800000;
  *(uint64_t *)(param_1 + 0x7f0) = 0x7f7fffff3f800000;
  *(uint64_t *)(param_1 + 0xa60) = 0;
  *(uint64_t *)(param_1 + 0xa68) = 0;
  *(int32_t *)(param_1 + 0x390) = 0;
  *(int32_t *)(param_1 + 0x380) = 0;
  *(int32_t *)(param_1 + 0x3b0) = 0;
  *(uint64_t *)(param_1 + 0x3a0) = 0;
  *(int32_t *)(param_1 + 0x3c0) = 0;
  *(uint64_t *)(param_1 + 0xa78) = 0;
  *(int8_t *)(param_1 + 0xa70) = 1;
  return param_1;
}






// 函数: void FUN_1804b4ce0(int64_t *param_1)
void FUN_1804b4ce0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    FUN_18004b730(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}






// 函数: void FUN_1804b4d00(int64_t *param_1)
void FUN_1804b4d00(int64_t *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  puVar1 = (uint64_t *)param_1[1];
  puVar2 = (uint64_t *)*param_1;
  while( true ) {
    if (puVar2 == puVar1) {
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      return;
    }
    puVar2[6] = &system_data_buffer_ptr;
    if (puVar2[7] != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puVar2[7] = 0;
    *(int32_t *)(puVar2 + 9) = 0;
    puVar2[6] = &system_state_ptr;
    if ((int64_t *)puVar2[5] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)puVar2[5] + 0x38))();
    }
    if ((int64_t *)puVar2[4] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)puVar2[4] + 0x38))();
    }
    *puVar2 = &system_data_buffer_ptr;
    if (puVar2[1] != 0) break;
    puVar2[1] = 0;
    *(int32_t *)(puVar2 + 3) = 0;
    *puVar2 = &system_state_ptr;
    puVar2 = puVar2 + 10;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}






// 函数: void FUN_1804b4d20(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1804b4d20(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                  int8_t param_5,uint64_t param_6)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_2 + 0x38);
  if (puVar1 != *(uint64_t **)(param_2 + 0x40)) {
    do {
      if ((*(byte *)(puVar1 + 1) & 1) != 0) {
        FUN_1804b0d50(param_1,*puVar1,param_3,param_4,param_5,param_6);
        FUN_18007ea10(*puVar1,1);
      }
      puVar1 = puVar1 + 2;
    } while (puVar1 != *(uint64_t **)(param_2 + 0x40));
  }
  return;
}






// 函数: void FUN_1804b4d4a(void)
void FUN_1804b4d4a(void)

{
  uint64_t *unaff_RBX;
  int64_t unaff_RDI;
  uint64_t uStack0000000000000028;
  uint64_t in_stack_00000078;
  
  do {
    if ((*(byte *)(unaff_RBX + 1) & 1) != 0) {
      uStack0000000000000028 = in_stack_00000078;
      FUN_1804b0d50();
      FUN_18007ea10(*unaff_RBX,1);
    }
    unaff_RBX = unaff_RBX + 2;
  } while (unaff_RBX != *(uint64_t **)(unaff_RDI + 0x40));
  return;
}






// 函数: void FUN_1804b4d9f(void)
void FUN_1804b4d9f(void)

{
  return;
}



int32_t FUN_1804b4dc0(int64_t param_1,int64_t param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  void *puVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  int iVar10;
  
  iVar2 = *(int *)(param_1 + 0x298);
  iVar10 = 0;
  if (0 < iVar2) {
    iVar3 = *(int *)(param_2 + 0x10);
    puVar9 = (uint64_t *)(*(int64_t *)(param_1 + 0x290) + 0x28);
    do {
      iVar4 = *(int *)(puVar9 + 1);
      iVar6 = iVar3;
      if (iVar4 == iVar3) {
        if (iVar4 != 0) {
          pbVar5 = (byte *)*puVar9;
          lVar8 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar5;
          do {
            pbVar1 = pbVar5 + lVar8;
            iVar6 = (uint)*pbVar5 - (uint)*pbVar1;
            if (iVar6 != 0) break;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar1 != 0);
        }
LAB_1804b4e2e:
        if (iVar6 == 0) {
          return *(int32_t *)((int64_t)iVar10 * 0xa8 + 0x44 + *(int64_t *)(param_1 + 0x290));
        }
      }
      else if (iVar4 == 0) goto LAB_1804b4e2e;
      iVar10 = iVar10 + 1;
      puVar9 = puVar9 + 0x15;
    } while (iVar10 < iVar2);
  }
  puVar7 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar7 = *(void **)(param_2 + 8);
  }
  SystemDataInitializer(&processed_var_6608_ptr,puVar7,iVar2);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




