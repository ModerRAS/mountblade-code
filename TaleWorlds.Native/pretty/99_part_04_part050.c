/* 函数别名定义: DataTransformer */
#define DataTransformer DataTransformer


#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part050.c - 4 个函数

// 函数: void FUN_1802b5c40(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802b5c40(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  int iStackX_18;
  int64_t lStackX_20;
  int32_t uVar12;
  int64_t lVar13;
  int64_t lVar14;
  
  uVar12 = 0;
  iVar1 = (int)((*(int64_t *)(param_1 + 0x90) - *(int64_t *)(param_1 + 0x88)) / 0x28);
  lVar5 = (int64_t)iVar1;
  if (0 < iVar1) {
    lVar13 = 0;
    do {
      iStackX_18 = 0;
      lVar6 = *(int64_t *)(param_1 + 0x88);
      if (*(int64_t *)(lVar13 + 0x10 + lVar6) - *(int64_t *)(lVar13 + 8 + lVar6) >> 3 != 0) {
        lStackX_20 = 0;
        lVar14 = lVar13;
        do {
          plVar2 = (int64_t *)0x0;
          plVar8 = (int64_t *)(lStackX_20 + *(int64_t *)(lVar13 + 8 + lVar6));
          plVar7 = (int64_t *)param_2[1];
          if (plVar7 < (int64_t *)param_2[2]) {
            param_2[1] = (int64_t)(plVar7 + 1);
            plVar8 = (int64_t *)*plVar8;
            *plVar7 = (int64_t)plVar8;
            if (plVar8 != (int64_t *)0x0) {
              (**(code **)(*plVar8 + 0x28))();
            }
          }
          else {
            plVar3 = (int64_t *)*param_2;
            lVar6 = (int64_t)plVar7 - (int64_t)plVar3 >> 3;
            if (lVar6 == 0) {
              lVar6 = 1;
LAB_1802b5d46:
              plVar2 = (int64_t *)
                       CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 8,(char)param_2[3],param_4,uVar12);
              plVar7 = (int64_t *)param_2[1];
              plVar3 = (int64_t *)*param_2;
              lVar13 = lVar14;
              plVar10 = plVar2;
            }
            else {
              lVar6 = lVar6 * 2;
              lVar13 = lVar14;
              plVar10 = plVar2;
              if (lVar6 != 0) goto LAB_1802b5d46;
            }
            for (; plVar3 != plVar7; plVar3 = plVar3 + 1) {
              *plVar2 = *plVar3;
              *plVar3 = 0;
              plVar2 = plVar2 + 1;
            }
            plVar8 = (int64_t *)*plVar8;
            *plVar2 = (int64_t)plVar8;
            if (plVar8 != (int64_t *)0x0) {
              (**(code **)(*plVar8 + 0x28))();
            }
            plVar7 = (int64_t *)param_2[1];
            plVar8 = (int64_t *)*param_2;
            if (plVar8 != plVar7) {
              do {
                if ((int64_t *)*plVar8 != (int64_t *)0x0) {
                  (**(code **)(*(int64_t *)*plVar8 + 0x38))();
                }
                plVar8 = plVar8 + 1;
              } while (plVar8 != plVar7);
              plVar8 = (int64_t *)*param_2;
            }
            if (plVar8 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
              CoreMemoryPoolInitializer(plVar8);
            }
            *param_2 = (int64_t)plVar10;
            param_2[1] = (int64_t)(plVar2 + 1);
            param_2[2] = (int64_t)(plVar10 + lVar6);
            lVar14 = lVar13;
          }
          lVar9 = 0;
          lVar6 = *(int64_t *)(param_1 + 0x88);
          lVar4 = *(int64_t *)(lStackX_20 + *(int64_t *)(lVar13 + 8 + lVar6));
          lVar4 = (int64_t)(int)(*(int64_t *)(lVar4 + 0xf58) - *(int64_t *)(lVar4 + 0xf50) >> 3);
          if (0 < lVar4) {
            do {
              plVar8 = (int64_t *)0x0;
              plVar7 = *(int64_t **)
                        (*(int64_t *)
                          (*(int64_t *)
                            (lStackX_20 + *(int64_t *)(lVar13 + 8 + *(int64_t *)(param_1 + 0x88)))
                          + 0xf50) + lVar9 * 8);
              plVar2 = plVar7;
              if (plVar7 != (int64_t *)0x0) {
                (**(code **)(*plVar7 + 0x28))(plVar7);
              }
              plVar3 = (int64_t *)param_2[1];
              if (plVar3 < (int64_t *)param_2[2]) {
                param_2[1] = (int64_t)(plVar3 + 1);
                *plVar3 = (int64_t)plVar7;
              }
              else {
                plVar10 = (int64_t *)*param_2;
                lVar6 = (int64_t)plVar3 - (int64_t)plVar10 >> 3;
                if (lVar6 == 0) {
                  lVar6 = 1;
LAB_1802b5ebb:
                  plVar8 = (int64_t *)
                           CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 8,(char)param_2[3],param_4,1,lVar14,
                                         plVar2);
                  plVar3 = (int64_t *)param_2[1];
                  plVar10 = (int64_t *)*param_2;
                  lVar13 = lVar14;
                  plVar11 = plVar8;
                }
                else {
                  lVar6 = lVar6 * 2;
                  lVar13 = lVar14;
                  plVar11 = plVar8;
                  if (lVar6 != 0) goto LAB_1802b5ebb;
                }
                for (; plVar10 != plVar3; plVar10 = plVar10 + 1) {
                  *plVar8 = *plVar10;
                  *plVar10 = 0;
                  plVar8 = plVar8 + 1;
                }
                *plVar8 = (int64_t)plVar7;
                plVar7 = (int64_t *)param_2[1];
                plVar2 = (int64_t *)*param_2;
                if (plVar2 != plVar7) {
                  do {
                    if ((int64_t *)*plVar2 != (int64_t *)0x0) {
                      (**(code **)(*(int64_t *)*plVar2 + 0x38))();
                    }
                    plVar2 = plVar2 + 1;
                  } while (plVar2 != plVar7);
                  plVar2 = (int64_t *)*param_2;
                }
                if (plVar2 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
                  CoreMemoryPoolInitializer(plVar2);
                }
                *param_2 = (int64_t)plVar11;
                param_2[1] = (int64_t)(plVar8 + 1);
                param_2[2] = (int64_t)(plVar11 + lVar6);
                lVar14 = lVar13;
              }
              uVar12 = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < lVar4);
            lVar6 = *(int64_t *)(param_1 + 0x88);
          }
          iStackX_18 = iStackX_18 + 1;
          lStackX_20 = lStackX_20 + 8;
        } while ((uint64_t)(int64_t)iStackX_18 <
                 (uint64_t)
                 (*(int64_t *)(lVar13 + 0x10 + lVar6) - *(int64_t *)(lVar13 + 8 + lVar6) >> 3));
      }
      lVar13 = lVar13 + 0x28;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



char FUN_1802b6000(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  int64_t lVar9;
  int64_t lStackX_8;
  int64_t *plStackX_10;
  int64_t lStackX_18;
  int32_t uVar10;
  uint64_t uVar11;
  
  uVar11 = 0xfffffffffffffffe;
  uVar10 = 0;
  cVar3 = '\0';
  iVar8 = (int)((*(int64_t *)(param_1 + 0x90) - *(int64_t *)(param_1 + 0x88)) / 0x28);
  lVar6 = (int64_t)iVar8;
  if (0 < iVar8) {
    lStackX_8 = 0;
    lVar7 = 8;
    lStackX_18 = lVar6;
    do {
      if (cVar3 != '\0') {
        return cVar3;
      }
      iVar8 = 0;
      lVar2 = *(int64_t *)(param_1 + 0x88);
      if (*(int64_t *)(lVar7 + 8 + lVar2) - *(int64_t *)(lVar7 + lVar2) >> 3 != 0) {
        lVar9 = 0;
        do {
          lVar6 = lStackX_18;
          if (cVar3 != '\0') break;
          lVar6 = *(int64_t *)(lVar9 + *(int64_t *)(lVar7 + lVar2));
          if ((*(int *)(lVar6 + 0x1060) == -1) || (*(int *)(lVar6 + 0x1064) == -1)) {
            cVar3 = '\0';
          }
          else {
            cVar3 = '\x01';
          }
          iVar5 = 0;
          iVar4 = (int)(*(int64_t *)(lVar6 + 0xf58) - *(int64_t *)(lVar6 + 0xf50) >> 3);
          if (0 < iVar4) {
            do {
              if (cVar3 != '\0') break;
              plVar1 = (int64_t *)
                       FUN_1802bf4f0(*(uint64_t *)
                                      (lVar9 + *(int64_t *)(lVar7 + *(int64_t *)(param_1 + 0x88)))
                                     ,&plStackX_10,iVar5,param_4,uVar10,uVar11);
              if ((*(int *)(*plVar1 + 0x1060) == -1) || (*(int *)(*plVar1 + 0x1064) == -1)) {
                cVar3 = '\0';
              }
              else {
                cVar3 = '\x01';
              }
              uVar10 = 0;
              if (plStackX_10 != (int64_t *)0x0) {
                (**(code **)(*plStackX_10 + 0x38))();
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar4);
          }
          iVar8 = iVar8 + 1;
          lVar9 = lVar9 + 8;
          lVar2 = *(int64_t *)(param_1 + 0x88);
          lVar6 = lStackX_18;
        } while ((uint64_t)(int64_t)iVar8 <
                 (uint64_t)(*(int64_t *)(lVar7 + 8 + lVar2) - *(int64_t *)(lVar7 + lVar2) >> 3));
      }
      lStackX_8 = lStackX_8 + 1;
      lVar7 = lVar7 + 0x28;
    } while (lStackX_8 < lVar6);
  }
  return cVar3;
}



uint64_t FUN_1802b61b0(uint64_t param_1,int64_t param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int64_t lVar6;
  void *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  char *pcVar11;
  char *pcVar12;
  int aiStackX_18 [2];
  int aiStackX_20 [2];
  int32_t uVar13;
  int64_t *plStack_50;
  uint64_t uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar13 = 0;
  pcVar12 = "emitters";
  do {
    pcVar11 = pcVar12;
    pcVar12 = pcVar11 + 1;
  } while (*pcVar12 != '\0');
  puVar8 = *(uint64_t **)(param_2 + 0x30);
joined_r0x0001802b61f6:
  if (puVar8 == (uint64_t *)0x0) {
    return 1;
  }
  pcVar12 = (char *)*puVar8;
  if (pcVar12 == (char *)0x0) {
    pcVar3 = (char *)0x0;
    pcVar12 = (char *)0x180d48d24;
  }
  else {
    pcVar3 = (char *)puVar8[2];
  }
  if (pcVar3 == pcVar11 + -0x180a1804f) {
    pcVar3 = pcVar3 + (int64_t)pcVar12;
    if (pcVar3 <= pcVar12) {
LAB_1802b6237:
      pcVar12 = "emitter";
      do {
        pcVar11 = pcVar12;
        pcVar12 = pcVar11 + 1;
      } while (*pcVar12 != '\0');
      puVar8 = (uint64_t *)puVar8[6];
      do {
        if (puVar8 == (uint64_t *)0x0) {
          return 1;
        }
        pcVar12 = (char *)*puVar8;
        if (pcVar12 == (char *)0x0) {
          pcVar3 = (char *)0x0;
          pcVar12 = (char *)0x180d48d24;
        }
        else {
          pcVar3 = (char *)puVar8[2];
        }
        if (pcVar3 == pcVar11 + -0x180a18047) {
          pcVar3 = pcVar3 + (int64_t)pcVar12;
          if (pcVar3 <= pcVar12) goto LAB_1802b62c0;
          lVar6 = (int64_t)&processed_var_5080_ptr - (int64_t)pcVar12;
          while (*pcVar12 == pcVar12[lVar6]) {
            pcVar12 = pcVar12 + 1;
            if (pcVar3 <= pcVar12) goto LAB_1802b62c0;
          }
        }
        puVar8 = (uint64_t *)puVar8[0xb];
      } while( true );
    }
    lVar6 = (int64_t)&processed_var_5088_ptr - (int64_t)pcVar12;
    while (*pcVar12 == pcVar12[lVar6]) {
      pcVar12 = pcVar12 + 1;
      if (pcVar3 <= pcVar12) goto LAB_1802b6237;
    }
  }
  puVar8 = (uint64_t *)puVar8[0xb];
  goto joined_r0x0001802b61f6;
LAB_1802b62c0:
  aiStackX_18[0] = -1;
  pcVar12 = "_index_";
  do {
    pcVar11 = pcVar12;
    pcVar12 = pcVar11 + 1;
  } while (*pcVar12 != '\0');
  puVar9 = (uint64_t *)puVar8[8];
  do {
    if (puVar9 == (uint64_t *)0x0) {
      return 0;
    }
    pcVar12 = (char *)*puVar9;
    if (pcVar12 == (char *)0x0) {
      pcVar3 = (char *)0x0;
      pcVar12 = (char *)0x180d48d24;
    }
    else {
      pcVar3 = (char *)puVar9[2];
    }
    if (pcVar3 == pcVar11 + -0x180a1692f) {
      pcVar3 = pcVar12 + (int64_t)pcVar3;
      if (pcVar3 <= pcVar12) break;
      lVar6 = (int64_t)&processed_var_9168_ptr - (int64_t)pcVar12;
      while (*pcVar12 == pcVar12[lVar6]) {
        pcVar12 = pcVar12 + 1;
        if (pcVar3 <= pcVar12) goto LAB_1802b6334;
      }
    }
    puVar9 = (uint64_t *)puVar9[6];
  } while( true );
LAB_1802b6334:
  pcVar12 = (char *)0x180d48d24;
  if ((char *)puVar9[1] != (char *)0x0) {
    pcVar12 = (char *)puVar9[1];
  }
  uVar4 = 0xffffffffffffffff;
  do {
    uVar4 = uVar4 + 1;
  } while (pcVar12[uVar4] != '\0');
  if (((uVar4 < 3) || (*pcVar12 != '0')) ||
     (puVar7 = &processed_var_5412_ptr, (pcVar12[1] + 0xa8U & 0xdf) != 0)) {
    puVar7 = &rendering_buffer_2208_ptr;
  }
  AdvancedSystemOptimizer(pcVar12,puVar7,aiStackX_18,puVar9,uVar13);
  iVar2 = func_0x0001802c0080(param_1,0);
  if ((iVar2 <= aiStackX_18[0]) || (aiStackX_18[0] < 0)) {
    return 0;
  }
  pcVar12 = "children";
  do {
    pcVar11 = pcVar12;
    pcVar12 = pcVar11 + 1;
  } while (*pcVar12 != '\0');
  puVar9 = (uint64_t *)puVar8[6];
LAB_1802b63c0:
  if (puVar9 == (uint64_t *)0x0) goto LAB_1802b661d;
  pcVar12 = (char *)*puVar9;
  if (pcVar12 == (char *)0x0) {
    pcVar3 = (char *)0x0;
    pcVar12 = (char *)0x180d48d24;
  }
  else {
    pcVar3 = (char *)puVar9[2];
  }
  if (pcVar3 == pcVar11 + -0x180a18037) {
    pcVar3 = pcVar3 + (int64_t)pcVar12;
    if (pcVar3 <= pcVar12) {
LAB_1802b6410:
      pcVar12 = "emitter";
      do {
        pcVar11 = pcVar12;
        pcVar12 = pcVar11 + 1;
      } while (*pcVar12 != '\0');
      for (puVar9 = (uint64_t *)puVar9[6]; puVar9 != (uint64_t *)0x0;
          puVar9 = (uint64_t *)puVar9[0xb]) {
        pcVar12 = (char *)*puVar9;
        if (pcVar12 == (char *)0x0) {
          pcVar3 = (char *)0x0;
          pcVar12 = (char *)0x180d48d24;
        }
        else {
          pcVar3 = (char *)puVar9[2];
        }
        if (pcVar3 == pcVar11 + -0x180a18047) {
          pcVar3 = pcVar3 + (int64_t)pcVar12;
          if (pcVar3 <= pcVar12) {
LAB_1802b6470:
            do {
              aiStackX_20[0] = -1;
              pcVar12 = "_index_";
              do {
                pcVar11 = pcVar12;
                pcVar12 = pcVar11 + 1;
              } while (*pcVar12 != '\0');
              puVar10 = (uint64_t *)puVar9[8];
LAB_1802b6490:
              if (puVar10 != (uint64_t *)0x0) {
                pcVar12 = (char *)*puVar10;
                if (pcVar12 == (char *)0x0) {
                  pcVar3 = (char *)0x0;
                  pcVar12 = (char *)0x180d48d24;
                }
                else {
                  pcVar3 = (char *)puVar10[2];
                }
                if (pcVar3 != pcVar11 + -0x180a1692f) goto LAB_1802b6586;
                pcVar3 = pcVar3 + (int64_t)pcVar12;
                if (pcVar12 < pcVar3) {
                  lVar6 = (int64_t)&processed_var_9168_ptr - (int64_t)pcVar12;
                  while (*pcVar12 == pcVar12[lVar6]) {
                    pcVar12 = pcVar12 + 1;
                    if (pcVar3 <= pcVar12) goto LAB_1802b64e4;
                  }
                  goto LAB_1802b6586;
                }
LAB_1802b64e4:
                pcVar12 = (char *)0x180d48d24;
                if ((char *)puVar10[1] != (char *)0x0) {
                  pcVar12 = (char *)puVar10[1];
                }
                uVar4 = 0xffffffffffffffff;
                do {
                  uVar4 = uVar4 + 1;
                } while (pcVar12[uVar4] != '\0');
                if (((uVar4 < 3) || (*pcVar12 != '0')) ||
                   (puVar7 = &processed_var_5412_ptr, (pcVar12[1] + 0xa8U & 0xdf) != 0)) {
                  puVar7 = &rendering_buffer_2208_ptr;
                }
                AdvancedSystemOptimizer(pcVar12,puVar7,aiStackX_20,puVar10,uVar13);
              }
              plVar5 = (int64_t *)FUN_1802b5be0(param_1,&plStack_50,0,aiStackX_18[0]);
              if (((uint64_t)(int64_t)aiStackX_20[0] <
                   (uint64_t)(*(int64_t *)(*plVar5 + 0xf58) - *(int64_t *)(*plVar5 + 0xf50) >> 3)
                  ) && (-1 < aiStackX_20[0])) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              uVar13 = 0;
              if (plStack_50 != (int64_t *)0x0) {
                (**(code **)(*plStack_50 + 0x38))();
              }
              if (bVar1) {
                return 0;
              }
              pcVar12 = "emitter";
              do {
                pcVar11 = pcVar12;
                pcVar12 = pcVar11 + 1;
              } while (*pcVar12 != '\0');
              while( true ) {
                do {
                  puVar9 = (uint64_t *)puVar9[0xb];
                  if (puVar9 == (uint64_t *)0x0) goto LAB_1802b661d;
                  pcVar12 = (char *)*puVar9;
                  if (pcVar12 == (char *)0x0) {
                    pcVar3 = (char *)0x0;
                    pcVar12 = (char *)0x180d48d24;
                  }
                  else {
                    pcVar3 = (char *)puVar9[2];
                  }
                } while (pcVar3 != pcVar11 + -0x180a18047);
                pcVar3 = pcVar3 + (int64_t)pcVar12;
                if (pcVar3 <= pcVar12) break;
                lVar6 = (int64_t)&processed_var_5080_ptr - (int64_t)pcVar12;
                while (*pcVar12 == pcVar12[lVar6]) {
                  pcVar12 = pcVar12 + 1;
                  if (pcVar3 <= pcVar12) goto LAB_1802b6470;
                }
              }
            } while( true );
          }
          lVar6 = (int64_t)&processed_var_5080_ptr - (int64_t)pcVar12;
          while (*pcVar12 == pcVar12[lVar6]) {
            pcVar12 = pcVar12 + 1;
            if (pcVar3 <= pcVar12) goto LAB_1802b6470;
          }
        }
      }
LAB_1802b661d:
      pcVar12 = "emitter";
      do {
        pcVar11 = pcVar12;
        pcVar12 = pcVar11 + 1;
      } while (*pcVar12 != '\0');
      while( true ) {
        do {
          puVar8 = (uint64_t *)puVar8[0xb];
          if (puVar8 == (uint64_t *)0x0) {
            return 1;
          }
          pcVar12 = (char *)*puVar8;
          if (pcVar12 == (char *)0x0) {
            pcVar3 = (char *)0x0;
            pcVar12 = (char *)0x180d48d24;
          }
          else {
            pcVar3 = (char *)puVar8[2];
          }
        } while (pcVar3 != pcVar11 + -0x180a18047);
        pcVar3 = pcVar3 + (int64_t)pcVar12;
        if (pcVar3 <= pcVar12) break;
        lVar6 = (int64_t)&processed_var_5080_ptr - (int64_t)pcVar12;
        while (*pcVar12 == pcVar12[lVar6]) {
          pcVar12 = pcVar12 + 1;
          if (pcVar3 <= pcVar12) goto LAB_1802b62c0;
        }
      }
      goto LAB_1802b62c0;
    }
    lVar6 = (int64_t)&processed_var_5064_ptr - (int64_t)pcVar12;
    while (*pcVar12 == pcVar12[lVar6]) {
      pcVar12 = pcVar12 + 1;
      if (pcVar3 <= pcVar12) goto LAB_1802b6410;
    }
  }
  puVar9 = (uint64_t *)puVar9[0xb];
  goto LAB_1802b63c0;
LAB_1802b6586:
  puVar10 = (uint64_t *)puVar10[6];
  goto LAB_1802b6490;
}



uint64_t * FUN_1802b6690(uint64_t *param_1)

{
  int64_t *plVar1;
  
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &processed_var_6328_ptr;
  param_1[3] = &system_state_ptr;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 5) = 0;
  param_1[3] = &system_data_buffer_ptr;
  param_1[6] = 0;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 5) = 0;
  param_1[9] = &system_state_ptr;
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xb) = 0;
  param_1[9] = &system_data_buffer_ptr;
  param_1[0xc] = 0;
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xb) = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(int32_t *)(param_1 + 0x14) = 3;
  FUN_18026d890(param_1 + 0x15);
  *(int32_t *)(param_1 + 8) = 0;
  plVar1 = (int64_t *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  param_1[2] = 0;
  param_1[0x10] = param_1;
  *(int32_t *)(param_1 + 7) = 0xffffffff;
  *(int32_t *)(param_1 + 0xe) = 0;
  *(int8_t *)((int64_t)param_1 + 0x3c) = 0;
  return param_1;
}



uint64_t *
FUN_1802b67a0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_6328_ptr;
  FUN_18026d9d0(param_1 + 0x15);
  FUN_1802b6f60();
  FUN_180226750(param_1 + 0xf);
  if ((int64_t *)param_1[0xd] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0xd] + 0x38))();
  }
  param_1[9] = &system_data_buffer_ptr;
  if (param_1[10] != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xc) = 0;
  param_1[9] = &system_state_ptr;
  param_1[3] = &system_data_buffer_ptr;
  if (param_1[4] != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  param_1[4] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  param_1[3] = &system_state_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x108,param_3,param_4,uVar1);
  }
  return param_1;
}






// 函数: void FUN_1802b68a0(int64_t *param_1)
void FUN_1802b68a0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    DataTransformer0();
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}



int64_t * FUN_1802b68c0(int64_t *param_1,int64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 8) = 3;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(int32_t *)(param_1 + 0xc) = 3;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x10) = 3;
  lVar1 = FUN_1802bf8f0(*(uint64_t *)(param_2 + 0x260),param_3,param_3,param_2,0xfffffffffffffffe)
  ;
  *param_1 = lVar1;
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802b6970(int64_t param_1,int32_t param_2,int32_t param_3)
void FUN_1802b6970(int64_t param_1,int32_t param_2,int32_t param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  
  iVar4 = 0;
  iVar1 = (int)((*(int64_t *)(param_1 + 0x30) - *(int64_t *)(param_1 + 0x28)) / 0x90);
  lVar8 = (int64_t)iVar1;
  if (0 < iVar1) {
    lVar9 = 0;
    do {
      pcVar5 = (char *)(*(int64_t *)(param_1 + 0x28) + lVar9);
      if ((*(int64_t *)(pcVar5 + 0x20) != 0) &&
         (lVar7 = (int64_t)iVar4 * 0x40 + *(int64_t *)(param_1 + 8),
         FUN_1802aeb00(pcVar5,param_2,lVar7,lVar7,param_3), *pcVar5 == '\0')) {
        FUN_1802b13d0(pcVar5);
        piVar6 = *(int **)(param_1 + 0x70);
        if (piVar6 < *(int **)(param_1 + 0x78)) {
          *(int **)(param_1 + 0x70) = piVar6 + 1;
          *piVar6 = iVar4;
        }
        else {
          piVar3 = *(int **)(param_1 + 0x68);
          lVar7 = (int64_t)piVar6 - (int64_t)piVar3 >> 2;
          if (lVar7 == 0) {
            lVar7 = 1;
LAB_1802b6a52:
            piVar2 = (int *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 4,*(int8_t *)(param_1 + 0x80));
            piVar3 = *(int **)(param_1 + 0x68);
            piVar6 = *(int **)(param_1 + 0x70);
          }
          else {
            lVar7 = lVar7 * 2;
            if (lVar7 != 0) goto LAB_1802b6a52;
            piVar2 = (int *)0x0;
          }
          if (piVar3 != piVar6) {
                    // WARNING: Subroutine does not return
            memmove(piVar2,piVar3,(int64_t)piVar6 - (int64_t)piVar3);
          }
          *piVar2 = iVar4;
          if (*(int64_t *)(param_1 + 0x68) != 0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          *(int **)(param_1 + 0x68) = piVar2;
          *(int **)(param_1 + 0x78) = piVar2 + lVar7;
          *(int **)(param_1 + 0x70) = piVar2 + 1;
        }
      }
      iVar4 = iVar4 + 1;
      lVar9 = lVar9 + 0x90;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802b69be(void)
void FUN_1802b69be(void)

{
  int64_t lVar1;
  int *piVar2;
  int *piVar3;
  int64_t unaff_RBX;
  int unaff_EBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  char *pcVar4;
  int *piVar5;
  int64_t in_R11;
  int64_t unaff_R12;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int64_t lVar6;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RDI;
  *(uint64_t *)(in_R11 + 0x20) = unaff_R15;
  lVar6 = 0;
  *(uint64_t *)(in_R11 + 8) = unaff_RSI;
  *(uint64_t *)(in_R11 + 0x18) = unaff_R14;
  do {
    pcVar4 = (char *)(*(int64_t *)(unaff_RBX + 0x28) + lVar6);
    if (*(int64_t *)(pcVar4 + 0x20) != 0) {
      FUN_1802aeb00(pcVar4);
      if (*pcVar4 == '\0') {
        FUN_1802b13d0(pcVar4);
        piVar5 = *(int **)(unaff_RBX + 0x70);
        if (piVar5 < *(int **)(unaff_RBX + 0x78)) {
          *(int **)(unaff_RBX + 0x70) = piVar5 + 1;
          *piVar5 = unaff_EBP;
        }
        else {
          piVar3 = *(int **)(unaff_RBX + 0x68);
          lVar1 = (int64_t)piVar5 - (int64_t)piVar3 >> 2;
          if (lVar1 == 0) {
            lVar1 = 1;
LAB_1802b6a52:
            piVar2 = (int *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 4,*(int8_t *)(unaff_RBX + 0x80)
                                         );
            piVar3 = *(int **)(unaff_RBX + 0x68);
            piVar5 = *(int **)(unaff_RBX + 0x70);
          }
          else {
            lVar1 = lVar1 * 2;
            if (lVar1 != 0) goto LAB_1802b6a52;
            piVar2 = (int *)0x0;
          }
          if (piVar3 != piVar5) {
                    // WARNING: Subroutine does not return
            memmove(piVar2,piVar3,(int64_t)piVar5 - (int64_t)piVar3);
          }
          *piVar2 = unaff_EBP;
          if (*(int64_t *)(unaff_RBX + 0x68) != 0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          *(int **)(unaff_RBX + 0x68) = piVar2;
          *(int **)(unaff_RBX + 0x78) = piVar2 + lVar1;
          *(int **)(unaff_RBX + 0x70) = piVar2 + 1;
        }
      }
    }
    unaff_EBP = unaff_EBP + 1;
    lVar6 = lVar6 + 0x90;
    unaff_R12 = unaff_R12 + -1;
    if (unaff_R12 == 0) {
      return;
    }
  } while( true );
}






