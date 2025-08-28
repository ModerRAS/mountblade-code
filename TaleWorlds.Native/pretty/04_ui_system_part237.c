#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// 04_ui_system_part237.c - 3 个函数

// 函数: void FUN_180803120(int64_t param_1,int param_2)
void FUN_180803120(int64_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int *piVar5;
  uint uVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int iVar12;
  int64_t lVar13;
  int iVar14;
  uint64_t uVar15;
  
  SystemMemoryAllocator(*(uint64_t *)(param_1 + 0x4a8));
  lVar13 = *(int64_t *)(param_1 + 0x4b0);
  uVar10 = 0;
  if (lVar13 != 0) {
    uVar9 = uVar10;
    uVar11 = uVar10;
    uVar15 = uVar10;
    if (0 < *(int *)(lVar13 + 0x20)) {
      do {
        iVar1 = *(int *)(uVar11 + 0x10 + *(int64_t *)(param_1 + 0x448));
        if (iVar1 == 0x10) {
          iVar14 = 2;
LAB_1808031e5:
          lVar4 = *(int64_t *)
                   (*(int64_t *)(param_1 + 0x440) + 8 + (uVar15 + (int64_t)param_2) * 8);
          iVar2 = *(int *)(lVar13 + 0x20);
          iVar3 = *(int *)(param_1 + 0x4c0);
          lVar13 = *(int64_t *)(param_1 + 0x4b8);
          if (iVar14 == 4) {
            uVar8 = *(uint *)(param_1 + 0x470);
            if (iVar1 == 0x18) {
              iVar12 = 0x10;
            }
            else if (iVar1 == 0x19) {
              iVar12 = 0xe;
            }
            else if (iVar1 == 0x1a) {
              iVar12 = 0xc;
            }
            else {
              iVar12 = 0;
              if (iVar1 == 0x1b) {
                iVar12 = 8;
              }
            }
            if (iVar12 != 0) {
              uVar7 = uVar10;
              if ((0 < (int)uVar8) && (0xf < uVar8)) {
                uVar6 = uVar8 & 0x8000000f;
                if ((int)uVar6 < 0) {
                  uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
                }
                piVar5 = (int *)(lVar4 + 0x20);
                do {
                  uVar7 = uVar7 + 0x10;
                  piVar5[-8] = piVar5[-8] << iVar12;
                  piVar5[-7] = piVar5[-7];
                  piVar5[-6] = piVar5[-6];
                  piVar5[-5] = piVar5[-5];
                  piVar5[-4] = piVar5[-4] << iVar12;
                  piVar5[-3] = piVar5[-3];
                  piVar5[-2] = piVar5[-2];
                  piVar5[-1] = piVar5[-1];
                  *piVar5 = *piVar5 << iVar12;
                  piVar5[1] = piVar5[1];
                  piVar5[2] = piVar5[2];
                  piVar5[3] = piVar5[3];
                  piVar5[4] = piVar5[4] << iVar12;
                  piVar5[5] = piVar5[5];
                  piVar5[6] = piVar5[6];
                  piVar5[7] = piVar5[7];
                  piVar5 = piVar5 + 0x10;
                } while ((int64_t)uVar7 < (int64_t)(int)(uVar8 - uVar6));
              }
              for (; (int64_t)uVar7 < (int64_t)(int)uVar8; uVar7 = uVar7 + 1) {
                piVar5 = (int *)(lVar4 + uVar7 * 4);
                *piVar5 = *piVar5 << (sbyte)iVar12;
              }
            }
          }
          FUN_1807edf30(lVar13 + ((int64_t)(iVar2 * iVar3) + (int64_t)(int)uVar9) * 4,lVar4,5,
                        iVar14,*(int32_t *)(param_1 + 0x470),
                        *(int32_t *)(*(int64_t *)(param_1 + 0x4b0) + 0x20),1,0x3f800000,1);
        }
        else {
          if (iVar1 == 0x11) {
            iVar14 = 3;
            goto LAB_1808031e5;
          }
          if (iVar1 == 0x12) {
            iVar14 = 4;
            goto LAB_1808031e5;
          }
          if (iVar1 == 0x18) {
            iVar14 = 4;
            goto LAB_1808031e5;
          }
          if (iVar1 == 0x19) {
            iVar14 = 4;
            goto LAB_1808031e5;
          }
          if (iVar1 == 0x1a) {
            iVar14 = 4;
            goto LAB_1808031e5;
          }
          if (iVar1 == 0x1b) {
            iVar14 = 4;
            goto LAB_1808031e5;
          }
          if (iVar1 == 0x13) {
            iVar14 = 5;
            goto LAB_1808031e5;
          }
        }
        lVar13 = *(int64_t *)(param_1 + 0x4b0);
        uVar8 = (int)uVar9 + 1;
        uVar9 = (uint64_t)uVar8;
        uVar11 = uVar11 + 0x34;
        uVar15 = uVar15 + 3;
      } while ((int)uVar8 < *(int *)(lVar13 + 0x20));
    }
    *(uint *)(param_1 + 0x4c0) =
         (uint)(*(int *)(param_1 + 0x470) + *(int *)(param_1 + 0x4c0)) % *(uint *)(lVar13 + 0x24);
  }
                    // WARNING: Subroutine does not return
  SystemMemoryManager(*(uint64_t *)(param_1 + 0x4a8));
}



uint64_t FUN_1808035a0(int64_t param_1)

{
  SystemCore_PerformanceMonitor(param_1 + 8);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808035c0(int64_t param_1)

{
  int64_t *plVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int64_t *)(param_1 + 0x758) != 0) {
    (**(code **)(**(int64_t **)(param_1 + 0x720) + 0x38))();
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(param_1 + 0x758),
                  &processed_var_7648_ptr,0x1ef,1);
  }
  if (0 < *(int *)(param_1 + 0x760)) {
    plVar1 = (int64_t *)(param_1 + 0x770);
    iVar2 = iVar3;
    do {
      CoTaskMemFree(plVar1[-1]);
      plVar1[-1] = 0;
      if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar1,&processed_var_7648_ptr,0x10f,1);
      }
      plVar1[1] = 0;
      iVar2 = iVar2 + 1;
      plVar1 = plVar1 + 3;
    } while (iVar2 < *(int *)(param_1 + 0x760));
  }
  *(int32_t *)(param_1 + 0x760) = 0;
  if (*(int64_t **)(param_1 + 0x720) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x720) + 0x10))();
    *(uint64_t *)(param_1 + 0x720) = 0;
  }
  if (*(int64_t **)(param_1 + 0x730) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x730) + 0x10))();
    *(uint64_t *)(param_1 + 0x730) = 0;
  }
  if (*(int64_t **)(param_1 + 0x728) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x728) + 0x58))();
    (**(code **)(**(int64_t **)(param_1 + 0x728) + 0x10))();
    *(uint64_t *)(param_1 + 0x728) = 0;
  }
  if (*(int64_t *)(param_1 + 0x740) != 0) {
    RenderingSystem_MaterialHandler(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x740),
                  &processed_var_7648_ptr,0x20f);
    *(uint64_t *)(param_1 + 0x740) = 0;
  }
  if (*(int64_t *)(param_1 + 0x738) != 0) {
    CloseHandle();
    *(uint64_t *)(param_1 + 0x738) = 0;
  }
  if (0 < *(int *)(param_1 + 0x418)) {
    plVar1 = (int64_t *)(param_1 + 0x428);
    do {
      CoTaskMemFree(plVar1[-1]);
      plVar1[-1] = 0;
      if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar1,&processed_var_7648_ptr,0x10f,1);
      }
      plVar1[1] = 0;
      iVar3 = iVar3 + 1;
      plVar1 = plVar1 + 3;
    } while (iVar3 < *(int *)(param_1 + 0x418));
  }
  *(int32_t *)(param_1 + 0x418) = 0;
  *(int8_t *)(param_1 + 0x310) = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808037e0(int64_t param_1)

{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  uint uVar4;
  int64_t *plVar5;
  uint auStackX_8 [2];
  int64_t *plStackX_10;
  uint64_t uStackX_18;
  int64_t *plStackX_20;
  int64_t *in_stack_ffffffffffffffc8;
  
  if (*(char *)(param_1 + 0x310) != '\0') {
    return 0;
  }
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x418)) {
    plVar5 = (int64_t *)(param_1 + 0x428);
    uVar3 = uVar4;
    do {
      CoTaskMemFree(plVar5[-1]);
      plVar5[-1] = 0;
      if (*plVar5 != 0) {
                    // WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar5,&processed_var_7648_ptr,0x10f,1);
      }
      plVar5[1] = 0;
      uVar3 = uVar3 + 1;
      plVar5 = plVar5 + 3;
    } while ((int)uVar3 < *(int *)(param_1 + 0x418));
  }
  plVar5 = (int64_t *)(param_1 + 0x720);
  *(int32_t *)(param_1 + 0x418) = 0;
  if (*plVar5 == 0) {
    in_stack_ffffffffffffffc8 = plVar5;
    iVar1 = CoCreateInstance(&ui_system_data_1392_ptr,0,0x17,&ui_system_data_1408_ptr,plVar5);
    if (iVar1 == -0x7ffbfe10) {
      iVar1 = CoInitializeEx(0,2);
      if (iVar1 < 0) {
        return 0x33;
      }
      in_stack_ffffffffffffffc8 = plVar5;
      iVar1 = CoCreateInstance(&ui_system_data_1392_ptr,0,0x17,&ui_system_data_1408_ptr,plVar5);
    }
    if (iVar1 < 0) {
      return 0x33;
    }
  }
  plStackX_10 = (int64_t *)0x0;
  iVar1 = (**(code **)(*(int64_t *)*plVar5 + 0x20))((int64_t *)*plVar5,0,0,&plStackX_10);
  if (iVar1 != -0x7ff8fb70) {
    if (iVar1 < 0) {
      return 0x33;
    }
    in_stack_ffffffffffffffc8 =
         (int64_t *)((uint64_t)in_stack_ffffffffffffffc8 & 0xffffffffffffff00);
    uVar2 = FUN_180804c50(param_1,plStackX_10,
                          param_1 + ((int64_t)*(int *)(param_1 + 0x418) + 0x2c) * 0x18,0,
                          in_stack_ffffffffffffffc8);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *(int *)(param_1 + 0x418) = *(int *)(param_1 + 0x418) + 1;
    (**(code **)(*plStackX_10 + 0x10))();
  }
  plStackX_20 = (int64_t *)0x0;
  iVar1 = (**(code **)(*(int64_t *)*plVar5 + 0x18))((int64_t *)*plVar5,0,1,&plStackX_20);
  if (-1 < iVar1) {
    auStackX_8[0] = 0;
    iVar1 = (**(code **)(*plStackX_20 + 0x18))(plStackX_20,auStackX_8);
    if (-1 < iVar1) {
      if (auStackX_8[0] != 0) {
        do {
          iVar1 = (**(code **)(*plStackX_20 + 0x20))(plStackX_20,uVar4,&plStackX_10);
          if (iVar1 < 0) {
            return 0x33;
          }
          uStackX_18 = 0;
          iVar1 = (**(code **)(*plStackX_10 + 0x28))(plStackX_10,&uStackX_18);
          if (iVar1 < 0) {
            return 0x33;
          }
          if ((*(int *)(param_1 + 0x418) < 0x20) &&
             ((*(int64_t *)(param_1 + 0x420) == 0 ||
              (iVar1 = func_0x0001807f7d80(uStackX_18), iVar1 != 0)))) {
            in_stack_ffffffffffffffc8 =
                 (int64_t *)((uint64_t)in_stack_ffffffffffffffc8 & 0xffffffffffffff00);
            uVar2 = FUN_180804c50(param_1,plStackX_10,
                                  param_1 + ((int64_t)*(int *)(param_1 + 0x418) + 0x2c) * 0x18,
                                  uStackX_18,in_stack_ffffffffffffffc8);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            *(int *)(param_1 + 0x418) = *(int *)(param_1 + 0x418) + 1;
          }
          else {
            CoTaskMemFree(uStackX_18);
          }
          (**(code **)(*plStackX_10 + 0x10))();
          uVar4 = uVar4 + 1;
        } while (uVar4 < auStackX_8[0]);
      }
      (**(code **)(*plStackX_20 + 0x10))();
      *(int8_t *)(param_1 + 0x310) = 1;
      return 0;
    }
  }
  return 0x33;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808037fa(int64_t param_1)

{
  int iVar1;
  uint64_t uVar2;
  int64_t unaff_RBX;
  uint uVar3;
  uint uVar4;
  int64_t *plVar5;
  uint in_stack_00000060;
  int64_t *in_stack_00000068;
  uint64_t in_stack_00000070;
  int64_t *in_stack_00000078;
  
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x418)) {
    plVar5 = (int64_t *)(param_1 + 0x428);
    uVar3 = uVar4;
    do {
      CoTaskMemFree(plVar5[-1]);
      plVar5[-1] = 0;
      if (*plVar5 != 0) {
                    // WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar5,&processed_var_7648_ptr,0x10f,1);
      }
      plVar5[1] = 0;
      uVar3 = uVar3 + 1;
      plVar5 = plVar5 + 3;
    } while ((int)uVar3 < *(int *)(unaff_RBX + 0x418));
  }
  plVar5 = (int64_t *)(unaff_RBX + 0x720);
  *(int32_t *)(unaff_RBX + 0x418) = 0;
  if (*plVar5 == 0) {
    iVar1 = CoCreateInstance(&ui_system_data_1392_ptr,0,0x17,&ui_system_data_1408_ptr,plVar5);
    if (iVar1 == -0x7ffbfe10) {
      iVar1 = CoInitializeEx(0,2);
      if (iVar1 < 0) {
        return 0x33;
      }
      iVar1 = CoCreateInstance(&ui_system_data_1392_ptr,0,0x17,&ui_system_data_1408_ptr,plVar5);
    }
    if (iVar1 < 0) {
      return 0x33;
    }
  }
  in_stack_00000068 = (int64_t *)0x0;
  iVar1 = (**(code **)(*(int64_t *)*plVar5 + 0x20))((int64_t *)*plVar5,0,0,&stack0x00000068);
  if (iVar1 != -0x7ff8fb70) {
    if (iVar1 < 0) {
      return 0x33;
    }
    uVar2 = FUN_180804c50();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *(int *)(unaff_RBX + 0x418) = *(int *)(unaff_RBX + 0x418) + 1;
    (**(code **)(*in_stack_00000068 + 0x10))();
  }
  in_stack_00000078 = (int64_t *)0x0;
  iVar1 = (**(code **)(*(int64_t *)*plVar5 + 0x18))((int64_t *)*plVar5,0,1,&stack0x00000078);
  if (-1 < iVar1) {
    in_stack_00000060 = 0;
    iVar1 = (**(code **)(*in_stack_00000078 + 0x18))(in_stack_00000078,&stack0x00000060);
    if (-1 < iVar1) {
      if (in_stack_00000060 != 0) {
        do {
          iVar1 = (**(code **)(*in_stack_00000078 + 0x20))(in_stack_00000078,uVar4,&stack0x00000068)
          ;
          if (iVar1 < 0) {
            return 0x33;
          }
          in_stack_00000070 = 0;
          iVar1 = (**(code **)(*in_stack_00000068 + 0x28))(in_stack_00000068,&stack0x00000070);
          if (iVar1 < 0) {
            return 0x33;
          }
          if ((*(int *)(unaff_RBX + 0x418) < 0x20) &&
             ((*(int64_t *)(unaff_RBX + 0x420) == 0 ||
              (iVar1 = func_0x0001807f7d80(in_stack_00000070), iVar1 != 0)))) {
            uVar2 = FUN_180804c50();
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            *(int *)(unaff_RBX + 0x418) = *(int *)(unaff_RBX + 0x418) + 1;
          }
          else {
            CoTaskMemFree(in_stack_00000070);
          }
          (**(code **)(*in_stack_00000068 + 0x10))();
          uVar4 = uVar4 + 1;
        } while (uVar4 < in_stack_00000060);
      }
      (**(code **)(*in_stack_00000078 + 0x10))();
      *(int8_t *)(unaff_RBX + 0x310) = 1;
      return 0;
    }
  }
  return 0x33;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180803801(int64_t param_1)

{
  int iVar1;
  uint64_t uVar2;
  int64_t unaff_RBX;
  int64_t *unaff_RBP;
  uint uVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t *plVar6;
  uint in_stack_00000060;
  int64_t *in_stack_00000068;
  int64_t *in_stack_00000070;
  int64_t *in_stack_00000078;
  
  uVar5 = (uint)unaff_RBP;
  uVar4 = (uint64_t)unaff_RBP & 0xffffffff;
  if ((int)uVar5 < *(int *)(param_1 + 0x418)) {
    plVar6 = (int64_t *)(param_1 + 0x428);
    do {
      CoTaskMemFree(plVar6[-1]);
      plVar6[-1] = (int64_t)unaff_RBP;
      if (*plVar6 != 0) {
                    // WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar6,&processed_var_7648_ptr,0x10f,1);
      }
      plVar6[1] = (int64_t)unaff_RBP;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
      plVar6 = plVar6 + 3;
    } while ((int)uVar3 < *(int *)(unaff_RBX + 0x418));
  }
  plVar6 = (int64_t *)(unaff_RBX + 0x720);
  *(uint *)(unaff_RBX + 0x418) = uVar5;
  if ((int64_t *)*plVar6 == unaff_RBP) {
    iVar1 = CoCreateInstance(&ui_system_data_1392_ptr,0,0x17,&ui_system_data_1408_ptr,plVar6);
    if (iVar1 == -0x7ffbfe10) {
      iVar1 = CoInitializeEx(0,2);
      if (iVar1 < 0) {
        return 0x33;
      }
      iVar1 = CoCreateInstance(&ui_system_data_1392_ptr,0,0x17,&ui_system_data_1408_ptr,plVar6);
    }
    if (iVar1 < 0) {
      return 0x33;
    }
  }
  in_stack_00000068 = unaff_RBP;
  iVar1 = (**(code **)(*(int64_t *)*plVar6 + 0x20))((int64_t *)*plVar6,0,0,&stack0x00000068);
  if (iVar1 != -0x7ff8fb70) {
    if (iVar1 < 0) {
      return 0x33;
    }
    uVar2 = FUN_180804c50();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *(int *)(unaff_RBX + 0x418) = *(int *)(unaff_RBX + 0x418) + 1;
    (**(code **)(*in_stack_00000068 + 0x10))();
  }
  in_stack_00000078 = unaff_RBP;
  iVar1 = (**(code **)(*(int64_t *)*plVar6 + 0x18))((int64_t *)*plVar6,0,1,&stack0x00000078);
  if ((iVar1 < 0) ||
     (in_stack_00000060 = uVar5,
     iVar1 = (**(code **)(*in_stack_00000078 + 0x18))(in_stack_00000078,&stack0x00000060), iVar1 < 0
     )) {
    return 0x33;
  }
  uVar4 = (uint64_t)unaff_RBP & 0xffffffff;
  if (uVar5 < in_stack_00000060) {
    do {
      iVar1 = (**(code **)(*in_stack_00000078 + 0x20))(in_stack_00000078,uVar4,&stack0x00000068);
      if (iVar1 < 0) {
        return 0x33;
      }
      in_stack_00000070 = unaff_RBP;
      iVar1 = (**(code **)(*in_stack_00000068 + 0x28))(in_stack_00000068,&stack0x00000070);
      if (iVar1 < 0) {
        return 0x33;
      }
      if ((*(int *)(unaff_RBX + 0x418) < 0x20) &&
         ((*(int64_t *)(unaff_RBX + 0x420) == 0 ||
          (iVar1 = func_0x0001807f7d80(in_stack_00000070), iVar1 != 0)))) {
        uVar2 = FUN_180804c50();
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        *(int *)(unaff_RBX + 0x418) = *(int *)(unaff_RBX + 0x418) + 1;
      }
      else {
        CoTaskMemFree(in_stack_00000070);
      }
      (**(code **)(*in_stack_00000068 + 0x10))();
      uVar5 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar5;
    } while (uVar5 < in_stack_00000060);
  }
  (**(code **)(*in_stack_00000078 + 0x10))();
  *(int8_t *)(unaff_RBX + 0x310) = 1;
  return 0;
}



uint64_t FUN_180803887(void)

{
  int iVar1;
  uint64_t uVar2;
  int64_t unaff_RBX;
  int64_t *unaff_RBP;
  uint uVar3;
  uint64_t *unaff_RDI;
  uint64_t uVar4;
  uint in_stack_00000060;
  int64_t *in_stack_00000068;
  int64_t *in_stack_00000070;
  int64_t *in_stack_00000078;
  
  iVar1 = CoCreateInstance(&ui_system_data_1392_ptr,0,0x17,&ui_system_data_1408_ptr);
  if (iVar1 == -0x7ffbfe10) {
    iVar1 = CoInitializeEx(0,2);
    if (iVar1 < 0) {
      return 0x33;
    }
    iVar1 = CoCreateInstance(&ui_system_data_1392_ptr,0,0x17,&ui_system_data_1408_ptr);
  }
  if (-1 < iVar1) {
    in_stack_00000068 = unaff_RBP;
    iVar1 = (**(code **)(*(int64_t *)*unaff_RDI + 0x20))
                      ((int64_t *)*unaff_RDI,0,0,&stack0x00000068);
    if (iVar1 != -0x7ff8fb70) {
      if (iVar1 < 0) {
        return 0x33;
      }
      uVar2 = FUN_180804c50();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      *(int *)(unaff_RBX + 0x418) = *(int *)(unaff_RBX + 0x418) + 1;
      (**(code **)(*in_stack_00000068 + 0x10))();
    }
    in_stack_00000078 = unaff_RBP;
    iVar1 = (**(code **)(*(int64_t *)*unaff_RDI + 0x18))
                      ((int64_t *)*unaff_RDI,0,1,&stack0x00000078);
    if (-1 < iVar1) {
      in_stack_00000060 = (uint)unaff_RBP;
      iVar1 = (**(code **)(*in_stack_00000078 + 0x18))(in_stack_00000078,&stack0x00000060);
      if (-1 < iVar1) {
        uVar4 = (uint64_t)unaff_RBP & 0xffffffff;
        if ((uint)unaff_RBP < in_stack_00000060) {
          do {
            iVar1 = (**(code **)(*in_stack_00000078 + 0x20))
                              (in_stack_00000078,uVar4,&stack0x00000068);
            if (iVar1 < 0) {
              return 0x33;
            }
            in_stack_00000070 = unaff_RBP;
            iVar1 = (**(code **)(*in_stack_00000068 + 0x28))(in_stack_00000068,&stack0x00000070);
            if (iVar1 < 0) {
              return 0x33;
            }
            if ((*(int *)(unaff_RBX + 0x418) < 0x20) &&
               ((*(int64_t *)(unaff_RBX + 0x420) == 0 ||
                (iVar1 = func_0x0001807f7d80(in_stack_00000070), iVar1 != 0)))) {
              uVar2 = FUN_180804c50();
              if ((int)uVar2 != 0) {
                return uVar2;
              }
              *(int *)(unaff_RBX + 0x418) = *(int *)(unaff_RBX + 0x418) + 1;
            }
            else {
              CoTaskMemFree(in_stack_00000070);
            }
            (**(code **)(*in_stack_00000068 + 0x10))();
            uVar3 = (int)uVar4 + 1;
            uVar4 = (uint64_t)uVar3;
          } while (uVar3 < in_stack_00000060);
        }
        (**(code **)(*in_stack_00000078 + 0x10))();
        *(int8_t *)(unaff_RBX + 0x310) = 1;
        return 0;
      }
    }
  }
  return 0x33;
}



uint64_t FUN_180803a76(void)

{
  return 0x33;
}





// 函数: void FUN_180803a90(void)
void FUN_180803a90(void)

{
                    // WARNING: Subroutine does not return
  memset(&system_data_6dd0,0,0xf0);
}



int64_t FUN_180803ba0(int64_t param_1,int param_2,int64_t param_3,int param_4,int64_t param_5,
                      int32_t *param_6,uint64_t param_7,int32_t *param_8)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  lVar3 = (int64_t)param_2;
  lVar2 = param_1 + -8;
  if (param_1 == 0) {
    lVar2 = 0;
  }
  lVar1 = FUN_1808037e0(lVar2);
  if ((int)lVar1 == 0) {
    if ((param_3 != 0) && (0 < param_4)) {
      func_0x00018076b450(param_3,*(uint64_t *)(lVar2 + 0x428 + lVar3 * 0x18),param_4);
    }
    if ((param_5 != 0) &&
       (lVar1 = FUN_1808043c0(lVar2,*(uint64_t *)(lVar2 + 0x420 + lVar3 * 0x18)), (int)lVar1 != 0)
       ) {
      return lVar1;
    }
    lVar2 = lVar2 + lVar3 * 0x18;
    *param_8 = *(int32_t *)(lVar2 + 0x430);
    *param_6 = *(int32_t *)(lVar2 + 0x434);
    lVar1 = 0;
  }
  return lVar1;
}



int64_t FUN_180803ca0(int64_t param_1,int32_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar2 = param_1 + -8;
  if (param_1 == 0) {
    lVar2 = 0;
  }
  lVar1 = FUN_1808037e0(lVar2);
  if ((int)lVar1 == 0) {
    *param_2 = *(int32_t *)(lVar2 + 0x418);
    lVar1 = 0;
  }
  return lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180803cf0(int64_t param_1,int param_2,uint64_t param_3,int *param_4,int32_t *param_5,
void FUN_180803cf0(int64_t param_1,int param_2,uint64_t param_3,int *param_4,int32_t *param_5,
                  uint *param_6,int32_t *param_7,int param_8,int *param_9)

{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint uVar5;
  int32_t uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int8_t auStack_d8 [32];
  uint64_t *puStack_b8;
  int16_t *puStack_b0;
  uint64_t uStack_a8;
  int64_t *plStack_98;
  int64_t lStack_90;
  int32_t *puStack_88;
  int *piStack_80;
  uint64_t uStack_78;
  int16_t uStack_70;
  short sStack_6e;
  int iStack_6c;
  int32_t uStack_68;
  ushort uStack_64;
  ushort uStack_62;
  int16_t uStack_60;
  int16_t uStack_5e;
  uint uStack_5c;
  int16_t uStack_58;
  uint8_t uStack_56;
  uint64_t uStack_50;
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  puStack_88 = param_7;
  piStack_80 = param_9;
  iVar2 = FUN_1808037e0();
  uStack_68 = CONCAT22(uStack_68._2_2_,(int16_t)uStack_68);
  if ((iVar2 == 0) &&
     (uStack_68 = CONCAT22(uStack_68._2_2_,(int16_t)uStack_68), *(int *)(param_1 + 0x418) != 0))
  {
    puVar7 = (uint64_t *)0x0;
    plStack_98 = (int64_t *)0x0;
    iVar2 = (**(code **)(**(int64_t **)(param_1 + 0x720) + 0x28))
                      (*(int64_t **)(param_1 + 0x720),
                       *(uint64_t *)(param_1 + ((int64_t)param_2 + 0x2c) * 0x18),&plStack_98);
    if (-1 < iVar2) {
      puVar4 = (uint64_t *)(param_1 + 0x728);
      puStack_b8 = puVar4;
      iVar2 = (**(code **)(*plStack_98 + 0x18))(plStack_98,&processed_var_7600_ptr,0x17,0);
      if (-1 < iVar2) {
        (**(code **)(*plStack_98 + 0x10))();
        lStack_90 = 0;
        iVar2 = (**(code **)(*(int64_t *)*puVar4 + 0x40))((int64_t *)*puVar4,&lStack_90);
        if (-1 < iVar2) {
          puVar8 = puVar7;
          if (0x15 < *(ushort *)(lStack_90 + 0x10)) {
            puVar8 = (uint64_t *)(uint64_t)*(uint *)(lStack_90 + 0x14);
          }
          uVar1 = *(uint *)(lStack_90 + 4);
          iVar2 = *param_4;
          uVar5 = (uint)puVar8 & 1;
          *(int32_t *)(param_1 + 0x5c) = 1;
          *(int *)(param_1 + 0x748) = (int)(((float)param_8 / (float)iVar2) * (float)uVar1);
          uVar1 = uVar5 | 2;
          if (((uint64_t)puVar8 & 2) == 0) {
            uVar1 = uVar5;
          }
          uVar5 = uVar1 | 4;
          if (((uint64_t)puVar8 & 4) == 0) {
            uVar5 = uVar1;
          }
          uVar1 = uVar5 | 8;
          if (((uint64_t)puVar8 & 8) == 0) {
            uVar1 = uVar5;
          }
          uVar5 = uVar1 | 0x10;
          if (((uint64_t)puVar8 & 0x200) == 0) {
            uVar5 = uVar1;
          }
          uVar1 = uVar5 | 0x20;
          if (((uint64_t)puVar8 & 0x400) == 0) {
            uVar1 = uVar5;
          }
          uVar5 = uVar1 | 0x40;
          if (((uint64_t)puVar8 & 0x10) == 0) {
            uVar5 = uVar1;
          }
          uVar1 = uVar5 | 0x80;
          if (((uint64_t)puVar8 & 0x20) == 0) {
            uVar1 = uVar5;
          }
          uVar5 = uVar1 | 8;
          if (((uint64_t)puVar8 & 0x100) == 0) {
            uVar5 = uVar1;
          }
          uVar6 = 5;
          *(uint *)(param_1 + 0x60) = uVar5;
          *puStack_88 = 5;
          switch(*(int16_t *)(lStack_90 + 2)) {
          case 1:
            uVar6 = 2;
            break;
          case 2:
            uVar6 = 3;
            break;
          default:
            uVar6 = 1;
            break;
          case 4:
            uVar6 = 4;
            break;
          case 5:
            break;
          case 6:
            uVar6 = 6;
            break;
          case 8:
            uVar6 = 7;
            break;
          case 0xc:
            uVar6 = 8;
          }
          *param_5 = uVar6;
          *param_6 = (uint)*(ushort *)(lStack_90 + 2);
          *param_4 = *(int *)(lStack_90 + 4);
          CoTaskMemFree(lStack_90);
          iStack_6c = *param_4;
          uStack_70 = 0xfffe;
          sStack_6e = (short)*param_6;
          uStack_64 = sStack_6e << 2;
          uStack_68 = (uint)uStack_64 * iStack_6c;
          uStack_5e = 0x20;
          uStack_62 = 0x20;
          uStack_60 = 0x16;
          uStack_58 = 3;
          uStack_56 = 0x1000000000;
          uStack_50 = 0x719b3800aa000080;
          uStack_a8 = 0;
          lVar3 = ((int64_t)(*piStack_80 * *(int *)(param_1 + 0x748)) * 10000000) /
                  (int64_t)iStack_6c;
          puStack_b0 = &uStack_70;
          puStack_b8 = (uint64_t *)0x0;
          uStack_5c = (uint)puVar8;
          iVar2 = (**(code **)(*(int64_t *)*puVar4 + 0x18))((int64_t *)*puVar4,0,0x40000,lVar3);
          if (iVar2 == -0x7776fff8) {
            *(int32_t *)(param_1 + 0x60) = 3;
            *param_5 = 3;
            uStack_5c = 3;
            uStack_a8 = 0;
            iVar2 = (int)((uint)uStack_62 * 2) >> 3;
            puStack_b0 = &uStack_70;
            uStack_68 = iVar2 * iStack_6c;
            *param_6 = 2;
            sStack_6e = 2;
            uStack_64 = (ushort)iVar2;
            puStack_b8 = (uint64_t *)0x0;
            iVar2 = (**(code **)(*(int64_t *)*puVar4 + 0x18))((int64_t *)*puVar4,0,0x40000,lVar3);
          }
          if (-1 < iVar2) {
            lVar3 = CreateEventA(0,0,0,0);
            *(int64_t *)(param_1 + 0x738) = lVar3;
            if (lVar3 != 0) {
              iVar2 = (**(code **)(*(int64_t *)*puVar4 + 0x68))((int64_t *)*puVar4,lVar3);
              if (-1 < iVar2) {
                iVar2 = (**(code **)(*(int64_t *)*puVar4 + 0x20))
                                  ((int64_t *)*puVar4,param_1 + 0x750);
                if (-1 < iVar2) {
                  iVar2 = (**(code **)(*(int64_t *)*puVar4 + 0x70))
                                    ((int64_t *)*puVar4,&processed_var_7800_ptr,param_1 + 0x730);
                  if (-1 < iVar2) {
                    uStack_78 = 0;
                    iVar2 = (**(code **)(**(int64_t **)(param_1 + 0x730) + 0x18))
                                      (*(int64_t **)(param_1 + 0x730),
                                       *(int32_t *)(param_1 + 0x750),&uStack_78);
                    if (-1 < iVar2) {
                      iVar2 = (**(code **)(**(int64_t **)(param_1 + 0x730) + 0x20))
                                        (*(int64_t **)(param_1 + 0x730),
                                         *(int32_t *)(param_1 + 0x750),2);
                      if (-1 < iVar2) {
                        iVar2 = (**(code **)(*(int64_t *)*puVar4 + 0x50))();
                        if (-1 < iVar2) {
                          iVar2 = (uint)uStack_64 * *(int *)(param_1 + 0x748);
                          puStack_b0 = (int16_t *)((uint64_t)puStack_b0 & 0xffffffff00000000);
                          puStack_b8 = (uint64_t *)CONCAT44(puStack_b8._4_4_,0x1bb);
                          *(int *)(param_1 + 0x74c) = iVar2;
                          lVar3 = FUN_180741d80(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar2,0x20,
                                                &processed_var_7648_ptr);
                          *(int64_t *)(param_1 + 0x740) = lVar3;
                          if (lVar3 != 0) {
                            uStack_a8 = CONCAT71(uStack_a8._1_7_,1);
                            puStack_b0 = (int16_t *)((uint64_t)puStack_b0 & 0xffffffffffffff00);
                            puStack_b8 = (uint64_t *)((uint64_t)puStack_b8 & 0xffffffff00000000);
                            puVar4 = (uint64_t *)
                                     SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x10,
                                                   &processed_var_7648_ptr,0x1d2);
                            if (puVar4 != (uint64_t *)0x0) {
                              *(int32_t *)(puVar4 + 1) = 0;
                              *puVar4 = &processed_var_7536_ptr;
                              puVar7 = puVar4;
                            }
                            *(uint64_t **)(param_1 + 0x758) = puVar7;
                            if (puVar7 != (uint64_t *)0x0) {
                              iVar2 = (**(code **)(**(int64_t **)(param_1 + 0x720) + 0x30))();
                              if (-1 < iVar2) {
                                *(int32_t *)(*(int64_t *)(param_1 + 0x758) + 8) = 1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto FUN_1808041e8;
        }
      }
    }
  }
FUN_1808041e8:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



