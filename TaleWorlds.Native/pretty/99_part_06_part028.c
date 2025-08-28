#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part028.c - 4 个函数

// 函数: void FUN_1803bf690(int64_t *param_1,int64_t *param_2,int64_t param_3,uint64_t param_4,
void FUN_1803bf690(int64_t *param_1,int64_t *param_2,int64_t param_3,uint64_t param_4,
                  uint64_t param_5,int64_t param_6)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  char *pcVar6;
  void *puVar7;
  int *piVar8;
  int64_t *plVar9;
  int iVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  char *pcVar14;
  uint64_t *puVar15;
  char *pcVar16;
  uint64_t uVar17;
  int aiStackX_10 [2];
  int64_t lStackX_18;
  uint64_t uStackX_20;
  int64_t lStack_78;
  int64_t lStack_70;
  
  iVar10 = 0;
  if (param_2[1] - *param_2 >> 3 != 0) {
    lVar13 = 0;
    lStack_78 = 0;
    lStack_70 = 0;
    uVar17 = 0;
    lStackX_18 = param_3;
    uStackX_20 = param_4;
    do {
      plVar9 = (int64_t *)0x0;
      if (param_6 != 0) {
        for (piVar8 = *(int **)(*(int64_t *)(param_6 + 8) +
                               (uVar17 % (*(uint64_t *)(param_6 + 0x10) & 0xffffffff)) * 8);
            piVar8 != (int *)0x0; piVar8 = *(int **)(piVar8 + 4)) {
          if (iVar10 == *piVar8) {
            if (piVar8 != *(int **)(*(int64_t *)(param_6 + 8) + *(uint64_t *)(param_6 + 0x10) * 8)
               ) {
              iVar3 = 0;
              goto LAB_1803bf774;
            }
            break;
          }
        }
      }
      plVar9 = *(int64_t **)(*param_1 + (lStack_70 - lVar13) * 8);
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 0x28))(plVar9);
      }
      iVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
LAB_1803bf774:
      puVar11 = (uint64_t *)0x0;
      lVar5 = param_2[1] - *param_2 >> 3;
      if (lVar5 != 0) {
        if (lVar5 == 1) {
          pcVar16 = *(char **)(&unknown_var_4848_ptr + (int64_t)iVar3 * 8);
          if (pcVar16 == (char *)0x0) {
            puVar11 = *(uint64_t **)(lStackX_18 + 0x30);
          }
          else {
            cVar2 = *pcVar16;
            pcVar14 = pcVar16;
            while (cVar2 != '\0') {
              pcVar14 = pcVar14 + 1;
              cVar2 = *pcVar14;
            }
            for (puVar11 = *(uint64_t **)(lStackX_18 + 0x30); puVar11 != (uint64_t *)0x0;
                puVar11 = (uint64_t *)puVar11[0xb]) {
              pcVar6 = (char *)*puVar11;
              if (pcVar6 == (char *)0x0) {
                lVar5 = 0;
                pcVar6 = (char *)0x180d48d24;
              }
              else {
                lVar5 = puVar11[2];
              }
              if (lVar5 == (int64_t)pcVar14 - (int64_t)pcVar16) {
                pcVar1 = pcVar6 + lVar5;
                if (pcVar1 <= pcVar6) goto LAB_1803bfa1e;
                lVar5 = (int64_t)pcVar16 - (int64_t)pcVar6;
                while (*pcVar6 == pcVar6[lVar5]) {
                  pcVar6 = pcVar6 + 1;
                  if (pcVar1 <= pcVar6) goto LAB_1803bfa1e;
                }
              }
            }
            puVar11 = (uint64_t *)0x0;
          }
        }
        else {
          pcVar16 = *(char **)(&unknown_var_4848_ptr + (int64_t)iVar3 * 8);
          lVar13 = lStack_78;
          if (pcVar16 == (char *)0x0) {
            puVar12 = *(uint64_t **)(lStackX_18 + 0x30);
LAB_1803bf8a2:
            if (puVar12 != (uint64_t *)0x0) {
              while (puVar11 == (uint64_t *)0x0) {
                aiStackX_10[0] = 0;
                pcVar16 = "_index_";
                do {
                  pcVar14 = pcVar16;
                  pcVar16 = pcVar14 + 1;
                } while (*pcVar16 != '\0');
                puVar15 = (uint64_t *)puVar12[8];
LAB_1803bf8e0:
                if (puVar15 != (uint64_t *)0x0) {
                  pcVar16 = (char *)*puVar15;
                  if (pcVar16 == (char *)0x0) {
                    pcVar6 = (char *)0x0;
                    pcVar16 = (char *)0x180d48d24;
                  }
                  else {
                    pcVar6 = (char *)puVar15[2];
                  }
                  if (pcVar6 != pcVar14 + -0x180a1692f) goto LAB_1803bf9cf;
                  pcVar6 = pcVar6 + (int64_t)pcVar16;
                  if (pcVar16 < pcVar6) {
                    lVar5 = (int64_t)&unknown_var_9168_ptr - (int64_t)pcVar16;
                    while (*pcVar16 == pcVar16[lVar5]) {
                      pcVar16 = pcVar16 + 1;
                      if (pcVar6 <= pcVar16) goto LAB_1803bf934;
                    }
                    goto LAB_1803bf9cf;
                  }
LAB_1803bf934:
                  pcVar16 = (char *)0x180d48d24;
                  if ((char *)puVar15[1] != (char *)0x0) {
                    pcVar16 = (char *)puVar15[1];
                  }
                  uVar4 = 0xffffffffffffffff;
                  do {
                    uVar4 = uVar4 + 1;
                  } while (pcVar16[uVar4] != '\0');
                  if (((uVar4 < 3) || (*pcVar16 != '0')) ||
                     (puVar7 = &unknown_var_5412_ptr, (pcVar16[1] + 0xa8U & 0xdf) != 0)) {
                    puVar7 = &unknown_var_2208_ptr;
                  }
                  AdvancedSystemOptimizer(pcVar16,puVar7,aiStackX_10);
                  if (aiStackX_10[0] == iVar10) {
                    puVar11 = puVar12;
                  }
                }
                pcVar16 = *(char **)(&unknown_var_4848_ptr + (int64_t)iVar3 * 8);
                if (pcVar16 != (char *)0x0) {
                  cVar2 = *pcVar16;
                  pcVar14 = pcVar16;
                  while (cVar2 != '\0') {
                    pcVar14 = pcVar14 + 1;
                    cVar2 = *pcVar14;
                  }
                  while (puVar12 = (uint64_t *)puVar12[0xb], puVar12 != (uint64_t *)0x0) {
                    pcVar6 = (char *)*puVar12;
                    if (pcVar6 == (char *)0x0) {
                      lVar5 = 0;
                      pcVar6 = (char *)0x180d48d24;
                    }
                    else {
                      lVar5 = puVar12[2];
                    }
                    if (lVar5 == (int64_t)pcVar14 - (int64_t)pcVar16) {
                      pcVar1 = pcVar6 + lVar5;
                      if (pcVar1 <= pcVar6) goto LAB_1803bfa0b;
                      lVar5 = (int64_t)pcVar16 - (int64_t)pcVar6;
                      while (*pcVar6 == pcVar6[lVar5]) {
                        pcVar6 = pcVar6 + 1;
                        if (pcVar1 <= pcVar6) goto LAB_1803bfa0b;
                      }
                    }
                  }
                  break;
                }
                puVar12 = (uint64_t *)puVar12[0xb];
LAB_1803bfa0b:
                if (puVar12 == (uint64_t *)0x0) break;
              }
            }
          }
          else {
            cVar2 = *pcVar16;
            pcVar14 = pcVar16;
            while (cVar2 != '\0') {
              pcVar14 = pcVar14 + 1;
              cVar2 = *pcVar14;
            }
            for (puVar12 = *(uint64_t **)(lStackX_18 + 0x30); puVar12 != (uint64_t *)0x0;
                puVar12 = (uint64_t *)puVar12[0xb]) {
              pcVar6 = (char *)*puVar12;
              if (pcVar6 == (char *)0x0) {
                lVar5 = 0;
                pcVar6 = (char *)0x180d48d24;
              }
              else {
                lVar5 = puVar12[2];
              }
              if (lVar5 == (int64_t)pcVar14 - (int64_t)pcVar16) {
                pcVar1 = pcVar6 + lVar5;
                if (pcVar1 <= pcVar6) goto LAB_1803bf8a2;
                lVar5 = (int64_t)pcVar16 - (int64_t)pcVar6;
                while (*pcVar6 == pcVar6[lVar5]) {
                  pcVar6 = pcVar6 + 1;
                  if (pcVar1 <= pcVar6) goto LAB_1803bf8a2;
                }
              }
            }
          }
        }
      }
LAB_1803bfa1e:
      if (plVar9 == (int64_t *)0x0) {
        if (puVar11 != (uint64_t *)0x0) {
          for (piVar8 = *(int **)(*(int64_t *)(param_6 + 8) +
                                 (uVar17 % (uint64_t)*(uint *)(param_6 + 0x10)) * 8);
              piVar8 != (int *)0x0; piVar8 = *(int **)(piVar8 + 4)) {
            if (iVar10 == *piVar8) goto LAB_1803bfab5;
          }
          piVar8 = *(int **)(*(int64_t *)(param_6 + 8) + *(int64_t *)(param_6 + 0x10) * 8);
LAB_1803bfab5:
          FUN_180278870(param_5,*(uint64_t *)(piVar8 + 2),puVar11);
        }
      }
      else {
        if (puVar11 != (uint64_t *)0x0) {
          (**(code **)(*plVar9 + 0x60))(plVar9);
        }
        iVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
        if (iVar3 == 0) {
          FUN_18027ba80();
        }
        else {
          iVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
          if ((iVar3 == 7) && ((void *)*plVar9 != &unknown_var_1008_ptr)) {
            (**(code **)((void *)*plVar9 + 0x160))(plVar9);
          }
        }
      }
      if (param_6 != 0) {
        for (piVar8 = *(int **)(*(int64_t *)(param_6 + 8) +
                               (uVar17 % (*(uint64_t *)(param_6 + 0x10) & 0xffffffff)) * 8);
            piVar8 != (int *)0x0; piVar8 = *(int **)(piVar8 + 4)) {
          if (iVar10 == *piVar8) {
            if (piVar8 != *(int **)(*(int64_t *)(param_6 + 8) + *(uint64_t *)(param_6 + 0x10) * 8)
               ) {
              lVar13 = lVar13 + 1;
              lStack_78 = lVar13;
            }
            break;
          }
        }
      }
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      iVar10 = iVar10 + 1;
      lStack_70 = lStack_70 + 1;
      uVar17 = (uint64_t)iVar10;
    } while (uVar17 < (uint64_t)(param_2[1] - *param_2 >> 3));
  }
  return;
LAB_1803bf9cf:
  puVar15 = (uint64_t *)puVar15[6];
  goto LAB_1803bf8e0;
}






// 函数: void FUN_1803bfb60(int8_t *param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_1803bfb60(int8_t *param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
                  int param_5)

{
  int64_t lVar1;
  uint64_t *puVar2;
  char *pcVar3;
  uint64_t *puVar4;
  char *pcVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint uVar8;
  uint64_t uVar10;
  uint64_t uStack_70;
  int64_t lStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  uint64_t uVar9;
  
  if (*(char *)(*(int64_t *)(param_1 + 8) + 0x2e5) == '\x04') {
    puVar2 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
    uVar9 = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    *(int32_t *)(puVar2 + 5) = 1;
    puVar2[6] = 0;
    puVar2[8] = 0;
    pcVar3 = "game_entity";
    do {
      pcVar5 = pcVar3;
      pcVar3 = pcVar5 + 1;
    } while (*pcVar3 != '\0');
    *puVar2 = &unknown_var_3424_ptr;
    puVar2[2] = pcVar5 + -0x180a0b67f;
    FUN_1803bff20(param_1,param_2,puVar2);
    FUN_1803c05d0(param_1,param_2,puVar2);
    FUN_1803c11d0(param_1,param_2,puVar2);
    FUN_1803c1470(param_1,param_2,puVar2);
    FUN_180381360(*(int64_t *)(param_1 + 8) + 0x110,param_2,puVar2,
                  *(uint64_t *)(*(int64_t *)(param_1 + 8) + 0x268));
    FUN_1803c0180(param_1,param_2,puVar2);
    lVar7 = *(int64_t *)(param_1 + 8);
    lVar1 = *(int64_t *)(lVar7 + 0x268);
    if (lVar1 == 0) {
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 3;
      uStack_70 = 0;
      lStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 3;
      plVar6 = (int64_t *)(*(int64_t *)(param_1 + 8) + 0xf0);
      if (*(int64_t *)(*(int64_t *)(param_1 + 8) + 0xf8) - *plVar6 >> 3 != 0) {
        FUN_1803c1870(plVar6,&uStack_50,&uStack_70,param_2,puVar2,param_4);
      }
    }
    else if (*(int64_t *)(lVar7 + 0xf8) - *(int64_t *)(lVar7 + 0xf0) >> 3 != 0) {
      FUN_1803c1870((int64_t *)(lVar7 + 0xf0),lVar1 + 0xf0,lVar1 + 0xb0,param_2,puVar2,param_4);
    }
    lVar7 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x260);
    if (lVar7 != 0) {
      lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x268);
      uVar10 = uVar9;
      if (lVar1 != 0) {
        uVar10 = *(uint64_t *)(lVar1 + 0x260);
      }
      FUN_1802fef20(lVar7,param_2,puVar2,uVar10,param_4);
    }
    FUN_1803c1e40(param_1,param_2,puVar2);
    if (*(int64_t *)(*(int64_t *)(param_1 + 8) + 0x1c8) -
        *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x1c0) >> 3 != 0) {
      puVar4 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[4] = 0;
      *(int32_t *)(puVar4 + 5) = 1;
      puVar4[6] = 0;
      puVar4[8] = 0;
      pcVar3 = "children";
      do {
        pcVar5 = pcVar3;
        pcVar3 = pcVar5 + 1;
      } while (*pcVar3 != '\0');
      *puVar4 = &unknown_var_5064_ptr;
      puVar4[2] = pcVar5 + -0x180a18037;
      lVar7 = *(int64_t *)(param_1 + 8);
      uVar10 = uVar9;
      if (*(int64_t *)(lVar7 + 0x1c8) - *(int64_t *)(lVar7 + 0x1c0) >> 3 != 0) {
        do {
          lVar1 = *(int64_t *)(uVar10 + *(int64_t *)(lVar7 + 0x1c0));
          if ((*(uint *)(lVar1 + 0x2ac) & 0x20000) == 0) {
            uStack_70 = CONCAT71(uStack_70._1_7_,*param_1);
            lStack_68 = lVar1;
            FUN_1803bfb60(&uStack_70,param_2,puVar4,param_4,uVar9);
            lVar7 = *(int64_t *)(param_1 + 8);
          }
          uVar8 = (int)uVar9 + 1;
          uVar9 = (uint64_t)uVar8;
          uVar10 = uVar10 + 8;
        } while ((uint64_t)(int64_t)(int)uVar8 <
                 (uint64_t)(*(int64_t *)(lVar7 + 0x1c8) - *(int64_t *)(lVar7 + 0x1c0) >> 3));
      }
      if ((puVar4[6] != 0) || (puVar4[8] != 0)) {
        if (puVar2[6] == 0) {
          puVar4[10] = 0;
          puVar2[6] = puVar4;
        }
        else {
          puVar4[10] = puVar2[7];
          *(uint64_t **)(puVar2[7] + 0x58) = puVar4;
        }
        puVar2[7] = puVar4;
        puVar4[4] = puVar2;
        puVar4[0xb] = 0;
      }
    }
    FUN_1803c1a30(param_1,param_2,puVar2);
    FUN_1803c21c0(param_1,param_2,puVar2);
    if ((*(int64_t *)(*(int64_t *)(param_1 + 8) + 0x268) != 0) && (param_5 != -1)) {
      if ((puVar2[6] == 0) && (puVar2[8] == 0)) {
        return;
      }
      FUN_180630c80(param_2,puVar2,&unknown_var_9168_ptr);
    }
    if (*(int64_t *)(param_3 + 0x30) == 0) {
      puVar2[10] = 0;
      *(uint64_t **)(param_3 + 0x30) = puVar2;
    }
    else {
      puVar2[10] = *(uint64_t *)(param_3 + 0x38);
      *(uint64_t **)(*(int64_t *)(param_3 + 0x38) + 0x58) = puVar2;
    }
    *(uint64_t **)(param_3 + 0x38) = puVar2;
    puVar2[4] = param_3;
    puVar2[0xb] = 0;
  }
  return;
}






// 函数: void FUN_1803bff20(int64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1803bff20(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  void *puVar7;
  int64_t lVar8;
  void *puVar9;
  int64_t lVar10;
  bool bVar11;
  
  lVar10 = *(int64_t *)(param_1 + 8);
  lVar8 = *(int64_t *)(lVar10 + 0x268);
  if (lVar8 == 0) {
LAB_1803bff9f:
    puVar9 = &system_buffer_ptr;
    if (*(void **)(lVar10 + 0x290) != (void *)0x0) {
      puVar9 = *(void **)(lVar10 + 0x290);
    }
    SystemAllocationProcessor(param_2,param_3,&system_flag_3a84,puVar9);
    lVar10 = *(int64_t *)(param_1 + 8);
  }
  else {
    iVar4 = *(int *)(lVar10 + 0x298);
    iVar6 = *(int *)(lVar8 + 0x298);
    if (iVar4 == iVar6) {
      if (iVar4 != 0) {
        pbVar5 = *(byte **)(lVar10 + 0x290);
        lVar8 = *(int64_t *)(lVar8 + 0x290) - (int64_t)pbVar5;
        do {
          pbVar1 = pbVar5 + lVar8;
          iVar6 = (uint)*pbVar5 - (uint)*pbVar1;
          if (iVar6 != 0) break;
          pbVar5 = pbVar5 + 1;
        } while (*pbVar1 != 0);
      }
    }
    else if (iVar4 != 0) goto LAB_1803bff9f;
    if (iVar6 != 0) goto LAB_1803bff9f;
  }
  if (*(int64_t *)(lVar10 + 0x268) == 0) {
    puVar9 = &system_buffer_ptr;
    if (*(void **)(lVar10 + 0x248) != (void *)0x0) {
      puVar9 = *(void **)(lVar10 + 0x248);
    }
    SystemAllocationProcessor(param_2,param_3,&unknown_var_2736_ptr,puVar9);
    lVar10 = *(int64_t *)(param_1 + 8);
  }
  if (*(int64_t *)(lVar10 + 0x170) != 0) {
    lVar8 = FUN_1802267d0();
    puVar9 = &system_buffer_ptr;
    if (*(void **)(lVar8 + 8) != (void *)0x0) {
      puVar9 = *(void **)(lVar8 + 8);
    }
    SystemAllocationProcessor(param_2,param_3,&unknown_var_6228_ptr,puVar9);
    lVar10 = *(int64_t *)(param_1 + 8);
  }
  if ((*(int64_t *)(lVar10 + 0x268) != 0) &&
     ((*(int64_t *)(lVar10 + 0x168) == 0 ||
      (*(int64_t *)(*(int64_t *)(lVar10 + 0x168) + 0x268) == 0)))) {
    puVar9 = *(void **)(*(int64_t *)(lVar10 + 0x268) + 0x290);
    puVar7 = &system_buffer_ptr;
    if (puVar9 != (void *)0x0) {
      puVar7 = puVar9;
    }
    SystemAllocationProcessor(param_2,param_3,&unknown_var_2580_ptr,puVar7);
    lVar10 = *(int64_t *)(param_1 + 8);
  }
  bVar2 = *(byte *)(lVar10 + 0x2e8);
  if (*(int64_t *)(lVar10 + 0x268) == 0) {
    if ((bVar2 & 1) != 0) goto LAB_1803c00bb;
  }
  else if ((bVar2 & 1) == (*(byte *)(*(int64_t *)(lVar10 + 0x268) + 0x2e8) & 1))
  goto LAB_1803c00bb;
  FUN_18062f7c0(param_2,param_3,&unknown_var_2688_ptr,bVar2 & 1);
  lVar10 = *(int64_t *)(param_1 + 8);
LAB_1803c00bb:
  cVar3 = *(char *)(lVar10 + 0x2e4);
  if (*(int64_t *)(lVar10 + 0x268) == 0) {
    bVar11 = cVar3 == '\0';
  }
  else {
    bVar11 = cVar3 == *(char *)(*(int64_t *)(lVar10 + 0x268) + 0x2e4);
  }
  if (!bVar11) {
    FUN_180630c80(param_2,param_3,&unknown_var_2672_ptr,(int)cVar3);
    lVar10 = *(int64_t *)(param_1 + 8);
  }
  if (*(int64_t *)(lVar10 + 0x268) == 0) {
    bVar11 = *(float *)(lVar10 + 700) == 0.0;
  }
  else {
    bVar11 = *(float *)(lVar10 + 700) == *(float *)(*(int64_t *)(lVar10 + 0x268) + 700);
  }
  if (!bVar11) {
    FUN_18062f990(param_2,param_3,&unknown_var_2816_ptr);
    lVar10 = *(int64_t *)(param_1 + 8);
  }
  cVar3 = *(char *)(lVar10 + 0x2e7);
  if (*(int64_t *)(lVar10 + 0x268) == 0) {
    bVar11 = cVar3 == -1;
  }
  else {
    bVar11 = cVar3 == *(char *)(*(int64_t *)(lVar10 + 0x268) + 0x2e7);
  }
  if (!bVar11) {
    FUN_18062f640(param_2,param_3,&unknown_var_2752_ptr,cVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803c0180(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_1803c0180(int64_t param_1,int64_t param_2,int64_t param_3)

{
  byte *pbVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  void *puVar5;
  int64_t lVar6;
  byte *pbVar7;
  uint64_t *puVar8;
  char *pcVar9;
  uint64_t *puVar11;
  int iVar12;
  void *puVar13;
  int8_t auStack_148 [32];
  int64_t lStack_128;
  int64_t lStack_120;
  uint64_t uStack_118;
  void *puStack_108;
  byte *pbStack_100;
  int iStack_f8;
  byte abStack_f0 [72];
  void *puStack_a8;
  int8_t *puStack_a0;
  int iStack_98;
  int8_t auStack_90 [72];
  uint64_t uStack_48;
  char *pcVar10;
  
  uStack_118 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_148;
  lVar3 = *(int64_t *)(param_1 + 8);
  lVar4 = *(int64_t *)(lVar3 + 0x268);
  lStack_128 = param_2;
  lStack_120 = param_1;
  if (lVar4 == 0) {
    puStack_108 = &unknown_var_3480_ptr;
    pbStack_100 = abStack_f0;
    abStack_f0[0] = 0;
    iStack_f8 = 0;
    strcpy_s(abStack_f0,0x40,&system_buffer_ptr);
    if (*(int64_t *)(lVar3 + 0x10) != 0) {
      puVar5 = *(void **)(*(int64_t *)(lVar3 + 0x10) + 0x18);
      puVar13 = &system_buffer_ptr;
      if (puVar5 != (void *)0x0) {
        puVar13 = puVar5;
      }
      (**(code **)(puStack_108 + 0x10))(&puStack_108,puVar13);
    }
    if (iStack_f8 != 0) {
      pbVar7 = &system_buffer_ptr;
      if (pbStack_100 != (byte *)0x0) {
        pbVar7 = pbStack_100;
      }
      SystemAllocationProcessor(lStack_128,param_3,&unknown_var_1520_ptr,pbVar7);
    }
    goto LAB_1803c03a8;
  }
  puStack_108 = &unknown_var_3480_ptr;
  pbStack_100 = abStack_f0;
  abStack_f0[0] = 0;
  iStack_f8 = 0;
  strcpy_s(abStack_f0,0x40,&system_buffer_ptr);
  if (*(int64_t *)(lVar3 + 0x10) != 0) {
    puVar5 = *(void **)(*(int64_t *)(lVar3 + 0x10) + 0x18);
    puVar13 = &system_buffer_ptr;
    if (puVar5 != (void *)0x0) {
      puVar13 = puVar5;
    }
    (**(code **)(puStack_108 + 0x10))(&puStack_108,puVar13);
  }
  puStack_a8 = &unknown_var_3480_ptr;
  puStack_a0 = auStack_90;
  auStack_90[0] = 0;
  iStack_98 = 0;
  strcpy_s(auStack_90,0x40,&system_buffer_ptr);
  lVar3 = *(int64_t *)(lVar4 + 0x10);
  if (lVar3 != 0) {
    puVar5 = *(void **)(lVar3 + 0x18);
    puVar13 = &system_buffer_ptr;
    if (puVar5 != (void *)0x0) {
      puVar13 = puVar5;
    }
    (**(code **)(puStack_a8 + 0x10))(&puStack_a8,puVar13);
  }
  iVar12 = iStack_98;
  if (iStack_f8 == iStack_98) {
    if (iStack_f8 != 0) {
      pbVar7 = pbStack_100;
      do {
        pbVar1 = pbVar7 + ((int64_t)puStack_a0 - (int64_t)pbStack_100);
        iVar12 = (uint)*pbVar7 - (uint)*pbVar1;
        if (iVar12 != 0) break;
        pbVar7 = pbVar7 + 1;
      } while (*pbVar1 != 0);
    }
LAB_1803c02ed:
    if (iVar12 != 0) goto LAB_1803c02ef;
  }
  else {
    if (iStack_f8 == 0) goto LAB_1803c02ed;
LAB_1803c02ef:
    pbVar7 = &system_buffer_ptr;
    if (pbStack_100 != (byte *)0x0) {
      pbVar7 = pbStack_100;
    }
    SystemAllocationProcessor(lStack_128,param_3,&unknown_var_1520_ptr,pbVar7);
  }
  puStack_a8 = &system_state_ptr;
LAB_1803c03a8:
  lVar6 = lStack_128;
  puStack_108 = &system_state_ptr;
  lVar3 = *(int64_t *)(lStack_120 + 8);
  lVar4 = *(int64_t *)(lVar3 + 0x268);
  if (((lVar4 == 0) || (*(int *)(lVar3 + 0x18) != *(int *)(lVar4 + 0x18))) &&
     ((uVar2 = *(uint *)(lVar3 + 0x18), lVar4 != 0 || (uVar2 != 0)))) {
    puVar8 = (uint64_t *)DataPipelineManager(lStack_128 + 0x60,0x60);
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[4] = 0;
    *(int32_t *)(puVar8 + 5) = 1;
    puVar8[6] = 0;
    puVar8[8] = 0;
    pcVar9 = "occlusion_body_flags";
    do {
      pcVar10 = pcVar9;
      pcVar9 = pcVar10 + 1;
    } while (*pcVar9 != '\0');
    *puVar8 = &unknown_var_1496_ptr;
    puVar8[2] = pcVar10 + -0x180a23597;
    if ((uVar2 & 4) != 0) {
      puVar11 = (uint64_t *)DataPipelineManager(lVar6 + 0x60,0x60);
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[4] = 0;
      *(int32_t *)(puVar11 + 5) = 1;
      puVar11[6] = 0;
      puVar11[8] = 0;
      pcVar9 = "occlusion_body_flag";
      do {
        pcVar10 = pcVar9;
        pcVar9 = pcVar10 + 1;
      } while (*pcVar9 != '\0');
      *puVar11 = &unknown_var_1472_ptr;
      puVar11[2] = pcVar10 + -0x180a2357f;
      SystemAllocationProcessor(lVar6,puVar11,&system_flag_3a84,&unknown_var_8160_ptr);
      if (puVar8[6] == 0) {
        puVar11[10] = 0;
        puVar8[6] = puVar11;
      }
      else {
        puVar11[10] = puVar8[7];
        *(uint64_t **)(puVar8[7] + 0x58) = puVar11;
      }
      puVar8[7] = puVar11;
      puVar11[4] = puVar8;
      puVar11[0xb] = 0;
    }
    if ((uVar2 & 1) != 0) {
      puVar11 = (uint64_t *)DataPipelineManager(lVar6 + 0x60,0x60);
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[4] = 0;
      *(int32_t *)(puVar11 + 5) = 1;
      puVar11[6] = 0;
      puVar11[8] = 0;
      pcVar9 = "occlusion_body_flag";
      do {
        pcVar10 = pcVar9;
        pcVar9 = pcVar10 + 1;
      } while (*pcVar9 != '\0');
      *puVar11 = &unknown_var_1472_ptr;
      puVar11[2] = pcVar10 + -0x180a2357f;
      SystemAllocationProcessor(lVar6,puVar11,&system_flag_3a84,&unknown_var_4504_ptr);
      if (puVar8[6] == 0) {
        puVar11[10] = 0;
        puVar8[6] = puVar11;
      }
      else {
        puVar11[10] = puVar8[7];
        *(uint64_t **)(puVar8[7] + 0x58) = puVar11;
      }
      puVar8[7] = puVar11;
      puVar11[4] = puVar8;
      puVar11[0xb] = 0;
    }
    if ((puVar8[6] != 0) || (puVar8[8] != 0)) {
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
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_148);
}






