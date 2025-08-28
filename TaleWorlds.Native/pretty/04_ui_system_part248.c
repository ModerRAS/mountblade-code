#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part248.c - 3 个函数

// 函数: void FUN_18080c4a0(int64_t *param_1,int param_2,int param_3,int *param_4,int *param_5,int *param_6,
void FUN_18080c4a0(int64_t *param_1,int param_2,int param_3,int *param_4,int *param_5,int *param_6,
                  int *param_7,int *param_8,int *param_9,int *param_10,int *param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = **(int **)(*param_1 + 0x20);
  iVar8 = (*(int **)(*param_1 + 0x20))[1];
  iVar3 = iVar8 >> 1;
  iVar4 = iVar2 >> 1;
  iVar2 = iVar2 >> 2;
  iVar8 = iVar8 >> 2;
  if (*(int *)((int64_t)param_1 + 0x24) == 0) {
    iVar3 = iVar4 - param_2;
    if ((int)param_1[5] == 0) {
      iVar8 = iVar3;
      if (param_2 <= iVar2) {
        iVar8 = param_2;
      }
      iVar6 = 0;
      *param_4 = 0;
      *param_7 = 0;
      iVar5 = iVar6;
      if (param_2 <= iVar2) {
        iVar5 = param_3;
        if (iVar2 < param_3) {
          iVar5 = iVar2;
        }
        iVar7 = iVar6;
        if (0 < param_2) {
          iVar7 = param_2;
        }
        iVar5 = iVar5 - iVar7;
      }
      *param_5 = iVar5;
      if (iVar2 <= param_3) {
        iVar6 = iVar2;
        if (iVar2 < param_2) {
          iVar6 = param_2;
        }
        if (iVar4 < param_3) {
          param_3 = iVar4;
        }
        iVar6 = param_3 - iVar6;
      }
      *param_6 = iVar6;
      *param_8 = iVar2 - iVar8;
    }
    else {
      iVar5 = iVar3;
      if (param_2 <= iVar2) {
        iVar5 = param_2;
      }
      iVar7 = 0;
      *param_4 = 0;
      iVar6 = iVar7;
      if (iVar4 <= param_3) {
        iVar6 = param_3;
        if (iVar8 + iVar2 < param_3) {
          iVar6 = iVar8 + iVar2;
        }
        iVar1 = iVar4;
        if (iVar4 < param_2) {
          iVar1 = param_2;
        }
        iVar6 = iVar6 - iVar1;
      }
      *param_7 = iVar6;
      iVar6 = iVar7;
      if (param_2 <= iVar2) {
        iVar6 = param_3;
        if (iVar2 < param_3) {
          iVar6 = iVar2;
        }
        iVar1 = iVar7;
        if (0 < param_2) {
          iVar1 = param_2;
        }
        iVar6 = iVar6 - iVar1;
      }
      *param_5 = iVar6;
      if ((param_2 <= iVar4) && (iVar2 <= param_3)) {
        iVar7 = iVar2;
        if (iVar2 < param_2) {
          iVar7 = param_2;
        }
        if (iVar4 < param_3) {
          param_3 = iVar4;
        }
        iVar7 = param_3 - iVar7;
      }
      iVar8 = (iVar5 - iVar2) + iVar8;
      *param_6 = iVar7;
      *param_8 = iVar2 - iVar5;
    }
    *param_9 = iVar8;
    *param_10 = iVar3;
  }
  else if ((int)param_1[5] == 0) {
    iVar6 = 0;
    iVar7 = iVar8 - iVar2;
    *param_7 = 0;
    iVar5 = iVar6;
    if (param_2 <= iVar7) {
      iVar5 = iVar7;
      if (param_3 < iVar7) {
        iVar5 = param_3;
      }
      iVar1 = param_2;
      if (param_2 < 0) {
        iVar1 = iVar6;
      }
      iVar5 = iVar5 - iVar1;
    }
    *param_4 = iVar5;
    iVar5 = iVar6;
    if ((iVar7 <= param_3) && (param_2 <= iVar8)) {
      iVar5 = iVar7;
      if (iVar7 < param_2) {
        iVar5 = param_2;
      }
      iVar1 = param_3;
      if (iVar8 < param_3) {
        iVar1 = iVar8;
      }
      iVar5 = iVar1 - iVar5;
    }
    *param_5 = iVar5;
    iVar5 = iVar6;
    if (iVar8 <= param_3) {
      if (iVar8 + iVar2 < param_3) {
        param_3 = iVar8 + iVar2;
      }
      iVar5 = iVar8;
      if (iVar8 < param_2) {
        iVar5 = param_2;
      }
      iVar5 = param_3 - iVar5;
    }
    iVar3 = iVar3 - param_2;
    if (param_2 <= iVar8) {
      iVar3 = param_2;
    }
    *param_6 = iVar5;
    *param_8 = iVar8 - iVar3;
    iVar8 = (iVar2 - iVar8) + param_2;
    if (iVar2 < iVar8) {
      iVar2 = (iVar7 - param_2) + iVar4;
    }
    else {
      iVar2 = iVar6;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
    }
    *param_9 = iVar2;
    param_2 = iVar6;
    if (-1 < iVar8) {
      param_2 = iVar8;
    }
    *param_10 = iVar4 - param_2;
  }
  else {
    iVar2 = iVar3 - param_2;
    if (param_2 <= iVar8) {
      iVar2 = param_2;
    }
    iVar5 = 0;
    *param_4 = 0;
    *param_7 = 0;
    iVar4 = iVar5;
    if (param_2 <= iVar8) {
      iVar4 = param_3;
      if (iVar8 < param_3) {
        iVar4 = iVar8;
      }
      iVar6 = iVar5;
      if (0 < param_2) {
        iVar6 = param_2;
      }
      iVar4 = iVar4 - iVar6;
    }
    *param_5 = iVar4;
    if (iVar8 <= param_3) {
      iVar5 = param_2;
      if (param_2 < iVar8) {
        iVar5 = iVar8;
      }
      if (iVar3 < param_3) {
        param_3 = iVar3;
      }
      iVar5 = param_3 - iVar5;
    }
    *param_6 = iVar5;
    *param_8 = iVar8 - iVar2;
    *param_9 = iVar2;
    *param_10 = iVar3 - param_2;
  }
  *param_11 = param_2;
  return;
}



int32_t FUN_18080c770(int64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int iVar2;
  int32_t uVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *(int64_t *)(param_1 + 0x20);
  iVar5 = 0;
  iVar4 = *(int *)(lVar1 + 8);
  iVar2 = FUN_18080b990(param_2,1);
  if (iVar2 == 0) {
    for (; 1 < iVar4; iVar4 = iVar4 >> 1) {
      iVar5 = iVar5 + 1;
    }
    iVar4 = FUN_18080b990(param_2,iVar5);
    if (iVar4 == -1) {
      uVar3 = 0xffffff78;
    }
    else {
      uVar3 = *(int32_t *)
               (lVar1 + (uint64_t)*(byte *)(*(int64_t *)(lVar1 + 0x20) + (int64_t)iVar4 * 2) * 4)
      ;
    }
  }
  else {
    uVar3 = 0xffffff79;
  }
  return uVar3;
}



uint64_t FUN_18080c800(int64_t *param_1)

{
  int64_t *plVar1;
  char acStackX_8 [32];
  
  acStackX_8[0] = '\0';
  plVar1 = (int64_t *)param_1[4];
  if ((plVar1 != (int64_t *)0x0) &&
     ((**(code **)(*plVar1 + 0xa8))(plVar1,acStackX_8), acStackX_8[0] != '\0')) {
    return 0;
  }
  if (param_1[4] != 0) {
    FUN_180758220(param_1[4],0x80);
    if (*(int64_t *)(param_1[6] + 0x5f0) != 0) {
      plVar1 = (int64_t *)param_1[4];
      (**(code **)(*plVar1 + 0x118))
                (plVar1,*(uint64_t *)
                         (*(int64_t *)(param_1[6] + 0x5f0) + (int64_t)(int)plVar1[0x3a] * 8));
    }
  }
  *(int8_t *)((int64_t)param_1 + 0x3c) = 0;
  *(int64_t *)param_1[1] = *param_1;
  *(int64_t *)(*param_1 + 8) = param_1[1];
  param_1[1] = (int64_t)param_1;
  *param_1 = (int64_t)param_1;
  *(int8_t *)((int64_t)param_1 + 0x1c) = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18080c8a0(int64_t param_1)

{
  uint *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  int64_t *plVar7;
  
  lVar2 = *(int64_t *)(param_1 + 0x5e0);
  uVar4 = 0;
  if (lVar2 != 0) {
    uVar5 = uVar4;
    if (0 < *(int *)(param_1 + 0x3cc)) {
      do {
        FUN_180758220((int64_t)(int)uVar5 * 0x230 + lVar2,0x80);
        lVar2 = *(int64_t *)(param_1 + 0x5e0);
        lVar3 = *(int64_t *)(uVar4 + 0x70 + lVar2);
        if (lVar3 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar3 + 100);
          *puVar1 = *puVar1 & 0xffffffdf;
          UNLOCK();
          LOCK();
          puVar1 = (uint *)(*(int64_t *)(uVar4 + 0x70 + *(int64_t *)(param_1 + 0x5e0)) + 100);
          *puVar1 = *puVar1 & 0xffffffbf;
          UNLOCK();
          (**(code **)(**(int64_t **)(uVar4 + 0x70 + *(int64_t *)(param_1 + 0x5e0)) + 0x10))();
          lVar2 = *(int64_t *)(param_1 + 0x5e0);
        }
        uVar6 = (int)uVar5 + 1;
        uVar4 = uVar4 + 0x230;
        uVar5 = (uint64_t)uVar6;
      } while ((int)uVar6 < *(int *)(param_1 + 0x3cc));
    }
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&unknown_var_9952_ptr,0x2d6,1);
  }
  if (*(int64_t **)(param_1 + 0x280) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x280) + 0x10))();
    *(uint64_t *)(param_1 + 0x280) = 0;
  }
  if (*(int64_t *)(param_1 + 0x5d8) != 0) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x5d8),
                  &unknown_var_9952_ptr,0x2e2,1);
  }
  if (*(int64_t *)(param_1 + 0x5e8) != 0) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x5e8),
                  &unknown_var_9952_ptr,0x2e8,1);
  }
  lVar2 = *(int64_t *)(param_1 + 0x278);
  if (lVar2 == 0) {
    if (0 < *(int *)(param_1 + 0x3c8)) {
      plVar7 = (int64_t *)(param_1 + 0x3d0);
      uVar5 = uVar4;
      do {
        if (*plVar7 != 0) {
                    // WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar7,&unknown_var_9952_ptr,0x2ff,1);
        }
        uVar6 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar6;
        plVar7 = plVar7 + 1;
      } while ((int)uVar6 < *(int *)(param_1 + 0x3c8));
    }
    if (*(int64_t *)(param_1 + 0x288) == 0) {
      lVar2 = *(int64_t *)(param_1 + 0x848);
      if (lVar2 == 0) {
        return 0;
      }
      lVar3 = lVar2;
      uVar5 = uVar4;
      if (0 < *(int *)(param_1 + 0x8fc)) {
        do {
          if ((*(int64_t **)(lVar3 + uVar5) != (int64_t *)0x0) &&
             (plVar7 = (int64_t *)**(int64_t **)(lVar3 + uVar5), plVar7 != (int64_t *)0x0)) {
            (**(code **)(*plVar7 + 0x18))(plVar7,CONCAT71((int7)((uint64_t)lVar3 >> 8),1));
            **(uint64_t **)(uVar5 + *(int64_t *)(param_1 + 0x848)) = 0;
            *(uint64_t *)(uVar5 + *(int64_t *)(param_1 + 0x848)) = 0;
            lVar2 = *(int64_t *)(param_1 + 0x848);
            lVar3 = lVar2;
          }
          uVar6 = (int)uVar4 + 1;
          uVar4 = (uint64_t)uVar6;
          uVar5 = uVar5 + 8;
        } while ((int)uVar6 < *(int *)(param_1 + 0x8fc));
      }
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&unknown_var_9952_ptr,0x318,1);
    }
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x288),
                  &unknown_var_9952_ptr,0x306,1);
  }
  uVar5 = uVar4;
  if (0 < *(int *)(param_1 + 0x8f4)) {
    do {
      lVar3 = *(int64_t *)(uVar5 + 8 + lVar2);
      if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar3,&unknown_var_9952_ptr,0x2f2,1);
      }
      uVar6 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar6;
      uVar5 = uVar5 + 0x10;
    } while ((int)uVar6 < *(int *)(param_1 + 0x8f4));
  }
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&unknown_var_9952_ptr,0x2f7,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18080ce10(int64_t param_1,int param_2)

{
  uint *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  int iVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  
  *(int *)(param_1 + 0x5d0) = param_2;
  uVar8 = 0;
  lVar3 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 200,&unknown_var_9952_ptr,0x255,0
                       );
  *(int64_t *)(param_1 + 0x5d8) = lVar3;
  if (lVar3 != 0) {
    uVar6 = uVar8;
    uVar9 = uVar8;
    if (0 < *(int *)(param_1 + 0x5d0)) {
      do {
        uVar5 = (int)uVar6 + 1;
        lVar3 = *(int64_t *)(param_1 + 0x5d8) + uVar9;
        *(int64_t *)(lVar3 + 8) = lVar3;
        *(int64_t *)lVar3 = lVar3;
        *(uint64_t *)(lVar3 + 0x10) = 0;
        uVar6 = (uint64_t)uVar5;
        uVar9 = uVar9 + 200;
      } while ((int)uVar5 < *(int *)(param_1 + 0x5d0));
    }
    *(int *)(param_1 + 0x3cc) = param_2 * 2;
    lVar3 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x460,&unknown_var_9952_ptr,
                          0x264,0);
    *(int64_t *)(param_1 + 0x5e0) = lVar3;
    if (lVar3 != 0) {
      iVar7 = *(int *)(param_1 + 0x3cc);
      uVar6 = uVar8;
      uVar9 = uVar8;
      if (0 < iVar7) {
        do {
          lVar3 = (int64_t)(int)uVar6 * 0x230;
          FUN_1807554e0(*(int64_t *)(param_1 + 0x5e0) + lVar3);
          uVar4 = FUN_180756640(*(int64_t *)(param_1 + 0x5e0) + lVar3,uVar6,
                                *(uint64_t *)(param_1 + 0x20));
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          uVar5 = (int)uVar6 + 1;
          *(int32_t *)(uVar9 + 0x224 + *(int64_t *)(param_1 + 0x5e0)) = 1000;
          iVar7 = *(int *)(param_1 + 0x3cc);
          uVar6 = (uint64_t)uVar5;
          uVar9 = uVar9 + 0x230;
        } while ((int)uVar5 < iVar7);
      }
      lVar3 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar7 * 0x308,&unknown_var_9952_ptr,
                            0x271,0);
      *(int64_t *)(param_1 + 0x5e8) = lVar3;
      if (lVar3 != 0) {
        uVar6 = uVar8;
        if (0 < *(int *)(param_1 + 0x3cc)) {
          do {
            iVar7 = (int)uVar8;
            lVar3 = (int64_t)iVar7 * 0x308;
            FUN_1807ff8a0(*(int64_t *)(param_1 + 0x5e8) + lVar3);
            *(int64_t *)(uVar6 + 0x1d8 + *(int64_t *)(param_1 + 0x5e0)) =
                 *(int64_t *)(param_1 + 0x5e8) + lVar3;
            plVar2 = *(int64_t **)(uVar6 + 0x1d8 + *(int64_t *)(param_1 + 0x5e0));
            (**(code **)(*plVar2 + 0x10))
                      (plVar2,uVar8,*(int64_t *)(param_1 + 0x20),
                       *(uint64_t *)(*(int64_t *)(param_1 + 0x20) + 0x670));
            uVar8 = (uint64_t)(iVar7 + 1U);
            puVar1 = (uint *)(*(int64_t *)(uVar6 + 0x1d8 + *(int64_t *)(param_1 + 0x5e0)) + 0x3c);
            *puVar1 = *puVar1 | 0x10000;
            *(int64_t *)(*(int64_t *)(uVar6 + 0x1d8 + *(int64_t *)(param_1 + 0x5e0)) + 0x18) =
                 (int64_t)iVar7 * 0x230 + *(int64_t *)(param_1 + 0x5e0);
            uVar6 = uVar6 + 0x230;
          } while ((int)(iVar7 + 1U) < *(int *)(param_1 + 0x3cc));
        }
        return 0;
      }
    }
  }
  return 0x26;
}



uint64_t FUN_18080d060(int64_t param_1,char param_2)

{
  uint uVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  uint uVar5;
  uint *puVar6;
  float fVar7;
  
  uVar4 = FUN_18080d690();
  if ((int)uVar4 == 0) {
    *(uint *)(param_1 + 0xbe0) = (uint)*(byte *)(param_1 + 0x8e8);
    *(int32_t *)(param_1 + 0xbf0) = *(int32_t *)(param_1 + 0x860);
    *(uint64_t *)(param_1 + 0xbf8) = 0;
    *(uint64_t *)(param_1 + 0xc08) = 0;
    *(int32_t *)(param_1 + 0x850) = 0;
    *(int32_t *)(param_1 + 0xbec) = 0;
    *(uint64_t *)(param_1 + 0xc00) = 0;
    *(int32_t *)(param_1 + 0x858) = 0;
    *(int8_t *)(param_1 + 0xbe9) = 0;
    if (param_2 != '\0') {
      lVar2 = *(int64_t *)(param_1 + 0x20);
      *(int32_t *)(param_1 + 0x85c) = 1;
      puVar6 = (uint *)(lVar2 + 0x117d8);
      uVar5 = *puVar6 << 0xb ^ *puVar6;
      *puVar6 = *(uint *)(lVar2 + 0x117dc);
      *(int32_t *)(lVar2 + 0x117dc) = *(int32_t *)(lVar2 + 0x117e0);
      uVar1 = *(uint *)(lVar2 + 0x117e4);
      *(uint *)(lVar2 + 0x117e0) = uVar1;
      uVar5 = (uVar1 >> 0xb ^ uVar5) >> 8 ^ uVar1 ^ uVar5;
      *(uint *)(lVar2 + 0x117e4) = uVar5;
      *(uint *)(param_1 + 0xc10) = uVar5;
      *(uint *)(param_1 + 0xc14) = ~uVar5;
      *(uint *)(param_1 + 0xc18) = uVar5 * 0x2220c267;
      *(uint *)(param_1 + 0xc1c) = ~uVar5 * -0x57dea137;
    }
    func_0x000180752d10(param_1 + 0x5f8);
    *(uint64_t *)(param_1 + 0x658) = *(uint64_t *)(param_1 + 0x280);
    *(uint64_t *)(param_1 + 0x660) = *(uint64_t *)(param_1 + 0x280);
    *(uint64_t *)(param_1 + 0x668) = 0;
    *(int32_t *)(param_1 + 0x628) = 0x3f800000;
    if (*(int64_t *)(param_1 + 0x288) != 0) {
                    // WARNING: Subroutine does not return
      memset(*(int64_t *)(param_1 + 0x288),0,(int64_t)*(int *)(param_1 + 0x8ec) << 8);
    }
    iVar3 = *(int *)(param_1 + 0x864);
    if (*(int *)(param_1 + 0x864) < 1) {
      iVar3 = 1;
    }
    *(int *)(param_1 + 0xbf4) = iVar3;
    fVar7 = (float)iVar3 * 0.4 * *(float *)(param_1 + 0xbd4);
    if (0.01 <= fVar7) {
      *(int *)(param_1 + 0x854) = (int)((float)*(int *)(*(int64_t *)(param_1 + 8) + 0x10) / fVar7);
    }
    if ((*(int *)(param_1 + 0x3c8) != 0) && (0 < *(int *)(param_1 + 0x3c8))) {
                    // WARNING: Subroutine does not return
      memset(*(int64_t *)(param_1 + 0x3d0) + 0x10,0,0x120);
    }
    if (0 < *(int *)(param_1 + 0x5d0)) {
                    // WARNING: Subroutine does not return
      memset(*(uint64_t *)(param_1 + 0x5d8),0,200);
    }
    uVar4 = 0;
    *(int8_t *)(param_1 + 0xbe8) = 1;
  }
  return uVar4;
}



uint64_t FUN_18080d083(void)

{
  uint uVar1;
  int64_t lVar2;
  int32_t in_EAX;
  int iVar3;
  uint uVar4;
  int64_t unaff_RDI;
  uint *puVar5;
  char unaff_R12B;
  float fVar6;
  
  *(int32_t *)(unaff_RDI + 0xbe0) = in_EAX;
  *(int32_t *)(unaff_RDI + 0xbf0) = *(int32_t *)(unaff_RDI + 0x860);
  *(uint64_t *)(unaff_RDI + 0xbf8) = 0;
  *(uint64_t *)(unaff_RDI + 0xc08) = 0;
  *(int32_t *)(unaff_RDI + 0x850) = 0;
  *(int32_t *)(unaff_RDI + 0xbec) = 0;
  *(uint64_t *)(unaff_RDI + 0xc00) = 0;
  *(int32_t *)(unaff_RDI + 0x858) = 0;
  *(int8_t *)(unaff_RDI + 0xbe9) = 0;
  if (unaff_R12B != '\0') {
    lVar2 = *(int64_t *)(unaff_RDI + 0x20);
    *(int32_t *)(unaff_RDI + 0x85c) = 1;
    puVar5 = (uint *)(lVar2 + 0x117d8);
    uVar4 = *puVar5 << 0xb ^ *puVar5;
    *puVar5 = *(uint *)(lVar2 + 0x117dc);
    *(int32_t *)(lVar2 + 0x117dc) = *(int32_t *)(lVar2 + 0x117e0);
    uVar1 = *(uint *)(lVar2 + 0x117e4);
    *(uint *)(lVar2 + 0x117e0) = uVar1;
    uVar4 = (uVar1 >> 0xb ^ uVar4) >> 8 ^ uVar1 ^ uVar4;
    *(uint *)(lVar2 + 0x117e4) = uVar4;
    *(uint *)(unaff_RDI + 0xc10) = uVar4;
    *(uint *)(unaff_RDI + 0xc14) = ~uVar4;
    *(uint *)(unaff_RDI + 0xc18) = uVar4 * 0x2220c267;
    *(uint *)(unaff_RDI + 0xc1c) = ~uVar4 * -0x57dea137;
  }
  func_0x000180752d10(unaff_RDI + 0x5f8);
  *(uint64_t *)(unaff_RDI + 0x658) = *(uint64_t *)(unaff_RDI + 0x280);
  *(uint64_t *)(unaff_RDI + 0x660) = *(uint64_t *)(unaff_RDI + 0x280);
  *(uint64_t *)(unaff_RDI + 0x668) = 0;
  *(int32_t *)(unaff_RDI + 0x628) = 0x3f800000;
  if (*(int64_t *)(unaff_RDI + 0x288) != 0) {
                    // WARNING: Subroutine does not return
    memset(*(int64_t *)(unaff_RDI + 0x288),0,(int64_t)*(int *)(unaff_RDI + 0x8ec) << 8);
  }
  iVar3 = *(int *)(unaff_RDI + 0x864);
  if (*(int *)(unaff_RDI + 0x864) < 1) {
    iVar3 = 1;
  }
  *(int *)(unaff_RDI + 0xbf4) = iVar3;
  fVar6 = (float)iVar3 * 0.4 * *(float *)(unaff_RDI + 0xbd4);
  if (0.01 <= fVar6) {
    *(int *)(unaff_RDI + 0x854) =
         (int)((float)*(int *)(*(int64_t *)(unaff_RDI + 8) + 0x10) / fVar6);
  }
  if ((*(int *)(unaff_RDI + 0x3c8) != 0) && (0 < *(int *)(unaff_RDI + 0x3c8))) {
                    // WARNING: Subroutine does not return
    memset(*(int64_t *)(unaff_RDI + 0x3d0) + 0x10,0,0x120);
  }
  if (0 < *(int *)(unaff_RDI + 0x5d0)) {
                    // WARNING: Subroutine does not return
    memset(*(uint64_t *)(unaff_RDI + 0x5d8),0,200);
  }
  *(int8_t *)(unaff_RDI + 0xbe8) = 1;
  return 0;
}



uint64_t FUN_18080d1e3(void)

{
  int in_EAX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  
  if ((in_EAX != 0) && (0 < in_EAX)) {
                    // WARNING: Subroutine does not return
    memset(*(int64_t *)(unaff_RDI + 0x3d0) + 0x10,0,0x120);
  }
  if (0 < *(int *)(unaff_RDI + 0x5d0)) {
                    // WARNING: Subroutine does not return
    memset(*(int64_t *)(unaff_RDI + 0x5d8) + unaff_RSI,0,200);
  }
  *(int8_t *)(unaff_RDI + 0xbe8) = 1;
  return 0;
}





// 函数: void FUN_18080d1f9(void)
void FUN_18080d1f9(void)

{
  int64_t unaff_RDI;
  
                    // WARNING: Subroutine does not return
  memset(*(int64_t *)(unaff_RDI + 0x3d0) + 0x10,0,0x120);
}



uint64_t FUN_18080d29c(void)

{
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  
  if (0 < *(int *)(unaff_RDI + 0x5d0)) {
                    // WARNING: Subroutine does not return
    memset(*(int64_t *)(unaff_RDI + 0x5d8) + unaff_RSI,0,200);
  }
  *(int8_t *)(unaff_RDI + 0xbe8) = 1;
  return 0;
}





// 函数: void FUN_18080d2fa(void)
void FUN_18080d2fa(void)

{
  return;
}



uint64_t FUN_18080d310(int64_t param_1,uint64_t *param_2,int64_t param_3,char param_4,
                       int64_t param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  char acStackX_8 [8];
  
  plVar5 = *(int64_t **)(param_3 + 0x20);
  if (plVar5 != (int64_t *)0x0) {
    acStackX_8[0] = '\0';
    (**(code **)(*plVar5 + 0xa8))(plVar5,acStackX_8);
    if (acStackX_8[0] != '\0') {
      (**(code **)(*plVar5 + 0x20))(plVar5,0,0);
    }
  }
  if (*(char *)(param_3 + 0x1d) == '\0') {
    iVar2 = *(int *)(param_3 + 0x18);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x5d0) + *(int *)(param_3 + 0x18);
  }
  plVar5 = (int64_t *)((int64_t)iVar2 * 0x230 + *(int64_t *)(param_1 + 0x5e0));
  *(int64_t **)(param_3 + 0x20) = plVar5;
  *(bool *)(param_3 + 0x1d) = *(char *)(param_3 + 0x1d) == '\0';
  if (plVar5[0xc] != 0) {
    LOCK();
    puVar1 = (uint *)(plVar5[0xc] + 100);
    *puVar1 = *puVar1 | 0x100;
    UNLOCK();
  }
  uVar4 = FUN_180758220(plVar5,0x80);
  if ((int)uVar4 == 0) {
    if (param_5 == 0) {
      param_5 = param_1 + 0x5f8;
    }
    plVar5[4] = param_5;
    uVar3 = FUN_180756aa0(plVar5,*param_2,param_5,1,1,0);
    uVar4 = (uint64_t)uVar3;
    if (uVar3 == 0) {
      if (*(int *)(param_3 + 0x58) != 0) {
        FUN_180757ed0(plVar5,*(int *)(param_3 + 0x58),2);
        *(int32_t *)(param_3 + 0x58) = 0;
      }
      if ((*(int64_t *)(param_1 + 0x5f0) != 0) &&
         ((**(code **)(*plVar5 + 0x118))
                    (plVar5,*(uint64_t *)
                             (*(int64_t *)(param_1 + 0x5f0) + (int64_t)(int)plVar5[0x3a] * 8)),
         param_4 != '\0')) {
        (**(code **)(*plVar5 + 0x110))
                  (plVar5,0xfffffffd,
                   *(uint64_t *)(*(int64_t *)(param_1 + 0x5f0) + (int64_t)(int)plVar5[0x3a] * 8)
                  );
      }
      uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
    else {
      FUN_180758220(plVar5,0x80);
      *(uint64_t *)(param_3 + 0x20) = 0;
    }
  }
  return uVar4;
}



uint64_t FUN_18080d3c2(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  uint uVar1;
  uint64_t uVar2;
  int64_t *unaff_RBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  char unaff_R14B;
  int8_t uStack0000000000000028;
  
  if (param_3 == 0) {
    param_3 = unaff_RSI + 0x5f8;
  }
  unaff_RBX[4] = param_3;
  uStack0000000000000028 = 0;
  uVar1 = FUN_180756aa0();
  uVar2 = (uint64_t)uVar1;
  if (uVar1 == 0) {
    if (*(int *)(unaff_RDI + 0x58) != 0) {
      FUN_180757ed0();
      *(int32_t *)(unaff_RDI + 0x58) = 0;
    }
    if (*(int64_t *)(unaff_RSI + 0x5f0) != 0) {
      (**(code **)(*unaff_RBX + 0x118))();
      if (unaff_R14B != '\0') {
        (**(code **)(*unaff_RBX + 0x110))();
      }
    }
    uVar2 = (**(code **)(*unaff_RBX + 0x10))();
  }
  else {
    FUN_180758220();
    *(uint64_t *)(unaff_RDI + 0x20) = 0;
  }
  return uVar2;
}





