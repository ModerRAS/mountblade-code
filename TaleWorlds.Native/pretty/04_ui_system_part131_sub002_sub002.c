#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part131_sub002_sub002.c - 1 个函数

// 函数: void FUN_180744bb0(int64_t param_1,int64_t param_2)
void FUN_180744bb0(int64_t param_1,int64_t param_2)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int iVar4;
  
  if (param_1 != 0) {
    func_0x000180743c20(param_1,0x11);
  }
  iVar2 = *(int *)(param_2 + 0x20);
  lVar3 = (int64_t)*(int *)(param_1 + 0x127e8) * 8 + -8;
  iVar4 = *(int *)(param_1 + 0x127e8) + -1;
  *(uint64_t *)((int64_t)iVar2 * 8 + *(int64_t *)(param_1 + 0x127e0)) =
       *(uint64_t *)(*(int64_t *)(param_1 + 0x127e0) + lVar3);
  *(int *)(*(int64_t *)((int64_t)iVar2 * 8 + *(int64_t *)(param_1 + 0x127e0)) + 0x20) = iVar2;
  if ((-1 < iVar4) && (iVar1 = *(int *)(param_1 + 0x127e8), iVar4 < iVar1)) {
    iVar4 = (iVar1 - iVar4) + -1;
    if (0 < iVar4) {
      lVar3 = *(int64_t *)(param_1 + 0x127e0) + lVar3;
                    // WARNING: Subroutine does not return
      memmove(lVar3,lVar3 + 8,(int64_t)iVar4 << 3);
    }
    *(int *)(param_1 + 0x127e8) = iVar1 + -1;
  }
  if (param_1 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(param_1,0x11);
  }
  iVar2 = FUN_18078a340(0x720,*(uint64_t *)(param_2 + 0x10),
                        CONCAT71((int7)(int3)((uint)iVar2 >> 8),1));
  if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&unknown_var_8576_ptr,0x410,1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t SystemLockProcessor(int64_t *param_1)

{
  uint uVar1;
  uint64_t uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int64_t)param_1 + 0xc);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar1 = -uVar3;
  if (-1 < (int)uVar3) {
    uVar1 = uVar3;
  }
  if ((0 < (int)uVar1) && (uVar2 = FUN_180747e10(param_1,0), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180744d60(int64_t *param_1)

{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int64_t)param_1 + 0xc);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
    memset(*param_1 + (int64_t)iVar1 * 8,0,(int64_t)-iVar1 << 3);
  }
  *(int32_t *)(param_1 + 1) = 0;
  if ((0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) &&
     (uVar2 = FUN_180747f10(param_1,0), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180744e20(int64_t *param_1)

{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int64_t)param_1 + 0xc);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
    memset((int64_t)iVar1 * 0x10 + *param_1,0,(int64_t)-iVar1 << 4);
  }
  *(int32_t *)(param_1 + 1) = 0;
  if ((0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) &&
     (uVar2 = FUN_180748010(param_1,0), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180744ee0(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t *plVar9;
  uint uVar10;
  uint64_t uVar11;
  int iVar12;
  int8_t auStackX_8 [8];
  
  uVar11 = 0;
  uVar6 = uVar11;
  if ((param_1 != 0) && (iVar4 = FUN_180743c40(), uVar6 = 0, iVar4 == 0)) {
    uVar6 = param_1;
  }
  FUN_18078c0a0(param_1,0);
  if (uVar6 != 0) {
    FUN_180743d80(uVar6);
  }
  uVar6 = uVar11;
  uVar7 = uVar11;
  if (0 < *(int *)(param_1 + 0x694)) {
    do {
      if ((*(int64_t *)(uVar6 + 0x30 + *(int64_t *)(param_1 + 0x6a0)) != 0) &&
         (uVar5 = FUN_180748290(param_1,uVar7), (int)uVar5 != 0)) {
        return uVar5;
      }
      lVar8 = *(int64_t *)(uVar6 + *(int64_t *)(param_1 + 0x6a0));
      if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar8,&unknown_var_8576_ptr,0x242,1);
      }
      uVar10 = (int)uVar7 + 1;
      uVar6 = uVar6 + 0x38;
      uVar7 = (uint64_t)uVar10;
    } while ((int)uVar10 < *(int *)(param_1 + 0x694));
  }
  *(uint64_t *)(param_1 + 0x694) = 0;
  *(int32_t *)(param_1 + 0x69c) = 0;
  *(int8_t *)(param_1 + 0x6a8) = 0;
  *(int32_t *)(param_1 + 0x6ac) = 0;
  if (*(int64_t *)(param_1 + 0x6a0) != 0) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x6a0),
                  &unknown_var_8576_ptr,0x24a,1);
  }
  FUN_180743c40(param_1);
  uVar6 = uVar11;
  if (0 < *(int *)(param_1 + 0x1e0)) {
    do {
      FUN_180755c10((int64_t)(int)uVar6 * 0x230 + *(int64_t *)(param_1 + 0x1e8));
      uVar10 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar10;
    } while ((int)uVar10 < *(int *)(param_1 + 0x1e0));
  }
  FUN_180743d80(param_1);
  FUN_180743160(param_1,1);
  FUN_18078c0a0(param_1,0);
  if (*(char *)(param_1 + 0x12370) != '\0') {
    FUN_180767ad0(param_1 + 0x12220);
    *(int8_t *)(param_1 + 0x12370) = 0;
    FUN_180768380(*(uint64_t *)(param_1 + 0x11570),0);
    *(uint64_t *)(param_1 + 0x11570) = 0;
    FUN_180768380(*(uint64_t *)(param_1 + 0x11578),0);
    *(uint64_t *)(param_1 + 0x11578) = 0;
    FUN_180768380(*(uint64_t *)(param_1 + 0x11580),0);
    *(uint64_t *)(param_1 + 0x11580) = 0;
  }
  if (*(int64_t *)(param_1 + 0x670) != 0) {
    FUN_1807891d0();
  }
  if (*(int *)(param_1 + 0x127e8) != 0) {
    lVar8 = *(int64_t *)
             (*(int64_t *)(param_1 + 0x127e0) + -8 + (int64_t)*(int *)(param_1 + 0x127e8) * 8);
    func_0x000180743c20(param_1,0x11);
    iVar4 = *(int *)(lVar8 + 0x20);
    iVar12 = *(int *)(param_1 + 0x127e8) + -1;
    lVar8 = (int64_t)*(int *)(param_1 + 0x127e8) * 8 + -8;
    lVar1 = (int64_t)iVar4 * 8;
    *(uint64_t *)(lVar1 + *(int64_t *)(param_1 + 0x127e0)) =
         *(uint64_t *)(lVar8 + *(int64_t *)(param_1 + 0x127e0));
    *(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x127e0) + lVar1) + 0x20) = iVar4;
    if ((-1 < iVar12) && (iVar4 = *(int *)(param_1 + 0x127e8), iVar12 < iVar4)) {
      iVar12 = (iVar4 - iVar12) + -1;
      if (0 < iVar12) {
        lVar8 = *(int64_t *)(param_1 + 0x127e0) + lVar8;
                    // WARNING: Subroutine does not return
        memmove(lVar8,lVar8 + 8,(int64_t)iVar12 << 3);
      }
      *(int *)(param_1 + 0x127e8) = iVar4 + -1;
    }
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(param_1,0x11);
  }
  FUN_180744d60(param_1 + 0x127e0);
  if (*(int64_t *)(param_1 + 0x12770) != 0) {
    uVar6 = FUN_1807d0db0();
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    *(uint64_t *)(param_1 + 0x12770) = 0;
  }
  *(uint64_t *)(param_1 + 0x12778) = 0;
  if (*(int64_t *)(param_1 + 0x116e0) != 0) {
    uVar6 = FUN_180753880(*(int64_t *)(param_1 + 0x116e0),1);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    *(uint64_t *)(param_1 + 0x116e0) = 0;
  }
  if (*(int64_t *)(param_1 + 0x11720) != 0) {
    uVar6 = FUN_180755270();
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    *(uint64_t *)(param_1 + 0x11720) = 0;
  }
  puVar3 = *(uint64_t **)(param_1 + 0x12758);
  while (uVar6 = uVar11, puVar3 != (uint64_t *)(param_1 + 0x12758)) {
    puVar2 = (uint64_t *)*puVar3;
    uVar6 = FUN_1807675e0(puVar3[2],1);
    puVar3 = puVar2;
    if ((int)uVar6 != 0) {
      return uVar6;
    }
  }
  do {
    uVar7 = FUN_180767660(param_1 + ((int64_t)(int)uVar6 * 3 + 0x24c7) * 8);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    uVar10 = (int)uVar6 + 1;
    uVar6 = (uint64_t)uVar10;
  } while ((int)uVar10 < 4);
  puVar3 = *(uint64_t **)(param_1 + 0x670);
  uVar10 = 0;
  if (puVar3 != (uint64_t *)0x0) {
    if (param_2 == '\0') {
      uVar10 = (**(code **)*puVar3)();
      *(uint64_t *)(param_1 + 0x670) = 0;
    }
    else if ((code *)puVar3[0x6d] != (code *)0x0) {
      (*(code *)puVar3[0x6d])(puVar3 + 1);
    }
  }
  if (*(int64_t **)(param_1 + 0x10f78) != (int64_t *)0x0) {
    uVar6 = (**(code **)(**(int64_t **)(param_1 + 0x10f78) + 8))();
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    *(uint64_t *)(param_1 + 0x10f78) = 0;
    uVar10 = 0;
  }
  if (*(int64_t **)(param_1 + 0x10f80) == (int64_t *)0x0) {
    if (*(int64_t *)(param_1 + 0x10f88) == 0) {
      if (*(uint64_t **)(param_1 + 0x6b8) != (uint64_t *)0x0) {
        (**(code **)**(uint64_t **)(param_1 + 0x6b8))();
        *(uint64_t *)(param_1 + 0x6b8) = 0;
      }
      uVar6 = uVar11;
      if (*(uint64_t **)(param_1 + 0x6b0) != (uint64_t *)0x0) {
        (**(code **)**(uint64_t **)(param_1 + 0x6b0))();
        *(uint64_t *)(param_1 + 0x6b0) = 0;
      }
      do {
        uVar7 = FUN_180742d90(param_1,uVar6);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        uVar10 = (int)uVar6 + 1;
        uVar6 = (uint64_t)uVar10;
      } while ((int)uVar10 < 9);
      if (*(int64_t *)(param_1 + 0x1e8) != 0) {
                    // WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x1e8),
                      &unknown_var_8576_ptr,0x321,1);
      }
      lVar8 = param_1 + 0x598;
      *(int64_t *)(param_1 + 0x5a0) = lVar8;
      *(int64_t *)lVar8 = lVar8;
      *(uint64_t *)(param_1 + 0x5a8) = 0;
      if (param_2 == '\0') {
        uVar6 = FUN_18074a310(param_1);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        if (*(int64_t *)(param_1 + 0x11418) != 0) {
          uVar6 = FUN_1807726d0(*(int64_t *)(param_1 + 0x11418),1);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          *(uint64_t *)(param_1 + 0x11418) = 0;
          *(int8_t *)(param_1 + 9) = 0;
        }
        FUN_180743160(param_1,1);
        FUN_18078c0a0(param_1,0);
      }
      if ((*(int64_t *)(param_1 + 0x107b8) != 0) &&
         (lVar8 = *(int64_t *)(*(int64_t *)(param_1 + 0x107b8) + 0x18), lVar8 != 0)) {
                    // WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar8,&unknown_var_8576_ptr,0x343,1);
      }
      uVar6 = FUN_1807437c0(param_1);
      if ((((int)uVar6 == 0) && (uVar6 = FUN_180743160(param_1,1), (int)uVar6 == 0)) &&
         (uVar6 = FUN_180743660(param_1), (int)uVar6 == 0)) {
        func_0x00018078a4c0(param_1 + 0x720,auStackX_8);
        uVar6 = FUN_18078a260(param_1 + 0x720);
        if ((((int)uVar6 == 0) && (uVar6 = FUN_180742070(param_1 + 0x10848), (int)uVar6 == 0)) &&
           ((uVar6 = FUN_180742070(param_1 + 0x10bd0), (int)uVar6 == 0 &&
            ((uVar6 = FUN_180743880(param_1), (int)uVar6 == 0 &&
             (uVar6 = FUN_18076fc40(param_1 + 0x12798), (int)uVar6 == 0)))))) {
          plVar9 = (int64_t *)(param_1 + 0x11530);
          do {
            if (*plVar9 != 0) {
              uVar6 = FUN_180768380(*plVar9,0);
              if ((int)uVar6 != 0) {
                return uVar6;
              }
              *plVar9 = 0;
            }
            uVar10 = (int)uVar11 + 1;
            uVar11 = (uint64_t)uVar10;
            plVar9 = plVar9 + 1;
          } while ((int)uVar10 < 0x16);
          puVar3 = (uint64_t *)(param_1 + 0x11768);
          puVar2 = (uint64_t *)*puVar3;
          while (puVar2 != puVar3) {
            uVar6 = FUN_180789cf0(puVar2);
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            puVar2 = (uint64_t *)*puVar3;
          }
          uVar6 = FUN_180785a50(param_1 + 0x12438);
          if ((int)uVar6 == 0) {
            *(int8_t *)(param_1 + 8) = 0;
          }
        }
      }
    }
    else {
      FUN_180788f70();
      if (uVar10 == 0) {
                    // WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(param_1 + 0x10f88),
                      &unknown_var_8576_ptr,0x2fb,1);
      }
      uVar6 = (uint64_t)uVar10;
    }
  }
  else {
    uVar6 = (**(code **)(**(int64_t **)(param_1 + 0x10f80) + 0x10))();
    if ((int)uVar6 == 0) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(param_1 + 0x10f80),
                    &unknown_var_8576_ptr,0x2f2,1);
    }
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807455f0(int64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int64_t lVar6;
  
  plVar2 = (int64_t *)(param_1 + 0x12770);
  if (*plVar2 != 0) {
    return 0x1c;
  }
  uVar4 = FUN_1807d0940(plVar2,0,0x2430);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  plVar2 = (int64_t *)*plVar2;
  uVar4 = 0;
  plVar5 = (int64_t *)
           SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xb0,&unknown_var_208_ptr,0x7b,0,0,1);
  if (plVar5 == (int64_t *)0x0) {
    uVar4 = 0x26;
  }
  else {
    plVar5[3] = 0;
    plVar1 = plVar5 + 1;
    plVar5[2] = (int64_t)plVar1;
    *plVar1 = (int64_t)plVar1;
    plVar5[4] = 0;
    *plVar5 = (int64_t)&unknown_var_96_ptr;
    plVar5[10] = 0;
    plVar5[0xb] = 0;
    plVar5[0xc] = 0;
    plVar5[0xd] = 0;
    *(int32_t *)(plVar5 + 0xe) = 0xffffffff;
    *(int32_t *)((int64_t)plVar5 + 0x74) = 0;
    plVar5[0xf] = 0;
    plVar5[0x10] = 0;
    plVar5[0x11] = 0;
    plVar5[0x12] = 0;
    *(int32_t *)(plVar5 + 0x13) = 0xffffffff;
    *(int32_t *)((int64_t)plVar5 + 0x9c) = 0;
    lVar6 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x10020,&unknown_var_208_ptr,0x83,0,0,1)
    ;
    plVar5[5] = lVar6;
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x60))(plVar5,0);
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar5,&unknown_var_2144_ptr,0xc6,1);
    }
    plVar5[6] = 0;
    plVar5[8] = 0;
    plVar5[4] = (int64_t)plVar2;
    *(int32_t *)(plVar5 + 9) = 1;
    plVar5[0x14] = 0;
    plVar5[0x15] = 0;
    iVar3 = FUN_1807682e0(plVar5 + 7,0);
    if ((iVar3 != 0) || (iVar3 = (**(code **)(*plVar2 + 8))(plVar2,plVar5), iVar3 != 0)) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar6,&unknown_var_2144_ptr,0xb8,1);
    }
  }
  return uVar4;
}



uint64_t FUN_180745640(int64_t param_1,int64_t param_2,int64_t *param_3)

{
  uint64_t uVar1;
  
  if ((param_3 == (int64_t *)0x0) || (*param_3 = 0, param_2 == 0)) {
    uVar1 = 0x1f;
  }
  else {
    if (*(int64_t *)(param_1 + 0x11418) == 0) {
      return 0x43;
    }
    uVar1 = FUN_1807716e0(*(int64_t *)(param_1 + 0x11418),0,param_2,param_3);
    if ((int)uVar1 == 0) {
      *(int64_t *)(*param_3 + 0xa8) = param_1;
      return 0;
    }
  }
  return uVar1;
}



uint64_t FUN_1807456c0(int64_t param_1,uint64_t param_2,int64_t *param_3)

{
  uint64_t uVar1;
  int64_t lStackX_8;
  
  lStackX_8 = 0;
  if (*(int64_t *)(param_1 + 0x11418) == 0) {
    return 0x43;
  }
  if (param_3 == (int64_t *)0x0) {
    return 0x1f;
  }
  *param_3 = 0;
  uVar1 = func_0x000180771c60(*(uint64_t *)(param_1 + 0x11418),param_2,&lStackX_8);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_1807716e0(*(uint64_t *)(param_1 + 0x11418),lStackX_8,0,param_3);
    if ((int)uVar1 == 0) {
      LOCK();
      *(uint *)(*param_3 + 100) = *(uint *)(*param_3 + 100) | 4;
      UNLOCK();
      *(int *)(lStackX_8 + 0x44) = *(int *)(lStackX_8 + 0x44) + 1;
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint64_t FUN_180745760(int64_t param_1,uint64_t param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  uint64_t uStackX_8;
  uint64_t uStack_48;
  void *puStack_40;
  uint64_t uStack_38;
  int iStack_30;
  uint64_t uStack_2c;
  uint64_t uStack_24;
  uint64_t uStack_1c;
  uint64_t uStack_14;
  int32_t uStack_c;
  
  if (*(int64_t *)(param_1 + 0x11418) == 0) {
    return 0x43;
  }
  if (param_3 != (uint64_t *)0x0) {
    *param_3 = 0;
    iStack_30 = (int)param_2;
    if ((iStack_30 != 0) && (iStack_30 < 0x25)) {
      if (iStack_30 == 1) {
        uStack_48 = 0;
        uStack_38 = 0;
        uStack_2c = 0;
        uStack_24 = 0;
        uStack_1c = 0;
        uStack_14 = 0;
        uStack_c = 0;
        puStack_40 = &unknown_var_8728_ptr;
        uVar1 = FUN_180742e00(param_1,&uStack_48,0,param_3,(char)param_2);
        if ((int)uVar1 == 0) {
          return 0;
        }
        return uVar1;
      }
      uStackX_8 = 0;
      uVar1 = func_0x000180771cb0(*(uint64_t *)(param_1 + 0x11418),param_2,&uStackX_8);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = FUN_1807716e0(*(uint64_t *)(param_1 + 0x11418),uStackX_8,0,param_3);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      return 0;
    }
  }
  return 0x1f;
}



// WARNING: Removing unreachable block (ram,0x000180745d77)
// WARNING: Removing unreachable block (ram,0x000180745b1f)
// WARNING: Removing unreachable block (ram,0x0001807459fa)
// WARNING: Removing unreachable block (ram,0x000180745a0d)
// WARNING: Removing unreachable block (ram,0x000180745a19)
// WARNING: Removing unreachable block (ram,0x000180745a22)
// WARNING: Removing unreachable block (ram,0x000180745b3e)
// WARNING: Removing unreachable block (ram,0x000180745bd9)
// WARNING: Removing unreachable block (ram,0x000180745be5)
// WARNING: Removing unreachable block (ram,0x000180745c05)
// WARNING: Removing unreachable block (ram,0x000180745c32)
// WARNING: Removing unreachable block (ram,0x000180745c3e)
// WARNING: Removing unreachable block (ram,0x000180745c64)
// WARNING: Removing unreachable block (ram,0x000180745c70)
// WARNING: Removing unreachable block (ram,0x000180745e57)
// WARNING: Removing unreachable block (ram,0x000180745e67)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180745870(int64_t param_1,int64_t param_2,uint param_3,uint *param_4,
                       uint64_t *param_5)

{
  int64_t lVar1;
  int iVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t in_stack_fffffffffffffdf0;
  int64_t *plStack_1f0;
  int8_t auStack_1e8 [448];
  
  if (*(char *)(param_1 + 8) == '\0') {
    return 0x43;
  }
  if ((param_5 == (uint64_t *)0x0) || ((param_2 == 0 && ((param_3 >> 10 & 1) == 0)))) {
    return 0x1f;
  }
  if (param_4 != (uint *)0x0) {
    if (0xdc < *param_4 - 4) {
      return 0x1f;
    }
    if ((*param_4 & 3) != 0) {
      return 0x1f;
    }
                    // WARNING: Subroutine does not return
    memset(auStack_1e8,0,0xe0);
  }
  *param_5 = 0;
  if ((param_3 >> 0x10 & 1) == 0) {
    uVar3 = FUN_18078e180(param_1,param_2,param_3,*(int32_t *)(param_1 + 0x11934),
                          *(int32_t *)(param_1 + 0x11938),0,1,param_5);
    return (uint64_t)uVar3;
  }
  if ((char)param_3 < '\0') {
    lVar4 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x198,&unknown_var_8576_ptr,0xf59,0);
    if (lVar4 == 0) {
      return 0x26;
    }
    plVar5 = (int64_t *)FUN_180773a80(lVar4);
    if (plVar5 == (int64_t *)0x0) {
      return 0x26;
    }
    *param_5 = plVar5;
  }
  else {
    plStack_1f0 = (int64_t *)0x0;
    uVar6 = FUN_1807aaba0(*(uint64_t *)(param_1 + 0x6b8),0,0,&plStack_1f0);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    *param_5 = plStack_1f0;
    plVar5 = plStack_1f0;
  }
  lVar4 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x128,&unknown_var_8576_ptr,0xf89,0);
  plVar5[0x21] = lVar4;
  if (lVar4 == 0) {
    return 0x26;
  }
  if ((param_3 & 0x10000800) == 0) {
    if (param_2 != 0) {
      iVar2 = func_0x00018076b690(param_2);
      uVar7 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar2 + 1,&unknown_var_8576_ptr,0xf97,0
                            ,in_stack_fffffffffffffdf0 & 0xffffffffffffff00,1);
      *(uint64_t *)plVar5[0x21] = uVar7;
                    // WARNING: Subroutine does not return
      memcpy(*(uint64_t *)plVar5[0x21],param_2,(int64_t)(iVar2 + 1));
    }
  }
  else {
    *(int64_t *)(lVar4 + 0x30) = param_2;
  }
  *(int32_t *)(plVar5[0x21] + 8) = *(int32_t *)(param_1 + 0x11934);
  *(int32_t *)(plVar5[0x21] + 0xc) = *(int32_t *)(param_1 + 0x11938);
  *(uint *)((int64_t)plVar5 + 0x2c) = param_3;
  plVar5[0x1b] = param_1;
  LOCK();
  *(int32_t *)(plVar5 + 0x22) = 1;
  UNLOCK();
  plVar5[0x19] = 0;
  *(int8_t *)(plVar5[0x21] + 0x118) = 0;
  uVar3 = FUN_18076ac40(0,plVar5[0x21] + 0x10);
  if (uVar3 == 0) {
    lVar4 = *(int64_t *)(plVar5[0x21] + 0x10);
    uVar7 = *(uint64_t *)(lVar4 + 0x168);
    SystemStateManager(uVar7);
    *(int64_t **)(plVar5[0x21] + 0x28) = plVar5;
    lVar1 = plVar5[0x21];
    plVar5 = (int64_t *)(lVar1 + 0x18);
    *(uint64_t *)(lVar1 + 0x20) = *(uint64_t *)(lVar4 + 0x158);
    *plVar5 = lVar4 + 0x150;
    *(int64_t **)(lVar4 + 0x158) = plVar5;
    **(uint64_t **)(lVar1 + 0x20) = plVar5;
                    // WARNING: Subroutine does not return
    SystemConfigManager(uVar7);
  }
  LOCK();
  lVar4 = plVar5[0x22];
  *(int32_t *)(plVar5 + 0x22) = 2;
  UNLOCK();
  (**(code **)(*plVar5 + 0x18))(plVar5,CONCAT71((uint7)(uint3)((uint)(int)lVar4 >> 8),1));
  *param_5 = 0;
  return (uint64_t)uVar3;
}



// WARNING: Removing unreachable block (ram,0x000180745d77)
// WARNING: Removing unreachable block (ram,0x000180745b1f)
// WARNING: Removing unreachable block (ram,0x0001807459fa)
// WARNING: Removing unreachable block (ram,0x000180745a0d)
// WARNING: Removing unreachable block (ram,0x000180745a19)
// WARNING: Removing unreachable block (ram,0x000180745a22)
// WARNING: Removing unreachable block (ram,0x000180745b3e)
// WARNING: Removing unreachable block (ram,0x000180745bd9)
// WARNING: Removing unreachable block (ram,0x000180745be5)
// WARNING: Removing unreachable block (ram,0x000180745c05)
// WARNING: Removing unreachable block (ram,0x000180745c32)
// WARNING: Removing unreachable block (ram,0x000180745c3e)
// WARNING: Removing unreachable block (ram,0x000180745c64)
// WARNING: Removing unreachable block (ram,0x000180745c70)
// WARNING: Removing unreachable block (ram,0x000180745e57)
// WARNING: Removing unreachable block (ram,0x000180745e67)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807458a3(int32_t param_1,int32_t param_2,uint64_t param_3,uint *param_4)

{
  int64_t lVar1;
  int iVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  uint unaff_R15D;
  int64_t *in_stack_00000048;
  uint64_t in_stack_00000130;
  uint64_t in_stack_00000138;
  uint64_t in_stack_00000140;
  uint64_t in_stack_00000148;
  uint64_t in_stack_00000150;
  uint64_t in_stack_00000158;
  uint64_t in_stack_00000160;
  uint64_t in_stack_00000168;
  uint64_t in_stack_00000170;
  uint64_t in_stack_00000178;
  uint64_t in_stack_00000180;
  uint64_t in_stack_00000188;
  uint64_t in_stack_00000190;
  uint64_t in_stack_00000198;
  uint64_t in_stack_000001a0;
  uint64_t in_stack_000001a8;
  uint64_t in_stack_000001b0;
  uint64_t in_stack_000001b8;
  uint64_t in_stack_000001c0;
  uint64_t in_stack_000001c8;
  uint64_t in_stack_000001d0;
  uint64_t in_stack_000001d8;
  uint64_t in_stack_000001e0;
  uint64_t in_stack_000001e8;
  int32_t in_stack_000001f0;
  int32_t in_stack_000001f8;
  int32_t in_stack_00000200;
  int32_t in_stack_00000208;
  uint64_t *in_stack_00000260;
  
  if ((in_stack_00000260 == (uint64_t *)0x0) ||
     ((unaff_R12 == 0 && ((unaff_R15D >> 10 & 1) == 0)))) {
    return 0x1f;
  }
  if (unaff_RDI != 0) {
    if (0xdc < *param_4 - 4) {
      return 0x1f;
    }
    if ((*param_4 & 3) != 0) {
      return 0x1f;
    }
                    // WARNING: Subroutine does not return
    memset(&stack0x00000050,0,0xe0);
  }
  *in_stack_00000260 = 0;
  if ((unaff_R15D >> 0x10 & 1) == 0) {
    uVar3 = FUN_18078e180(param_1,param_2,unaff_R15D,*(int32_t *)(unaff_RBP + 0x11934),
                          *(int32_t *)(unaff_RBP + 0x11938));
    return (uint64_t)uVar3;
  }
  if ((char)unaff_R15D < '\0') {
    lVar4 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x198,&unknown_var_8576_ptr,0xf59,0);
    if (lVar4 == 0) {
      return 0x26;
    }
    plVar5 = (int64_t *)FUN_180773a80(lVar4);
    if (plVar5 == (int64_t *)0x0) {
      return 0x26;
    }
    *in_stack_00000260 = plVar5;
  }
  else {
    in_stack_00000048 = (int64_t *)0x0;
    uVar6 = FUN_1807aaba0(*(uint64_t *)(unaff_RBP + 0x6b8),0,0,&stack0x00000048);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    *in_stack_00000260 = in_stack_00000048;
    plVar5 = in_stack_00000048;
  }
  lVar4 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x128,&unknown_var_8576_ptr,0xf89,0);
  plVar5[0x21] = lVar4;
  if (lVar4 == 0) {
    return 0x26;
  }
  if ((unaff_R15D & 0x10000800) == 0) {
    if (unaff_R12 != 0) {
      iVar2 = func_0x00018076b690();
      uVar7 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar2 + 1,&unknown_var_8576_ptr,0xf97,0
                           );
      *(uint64_t *)plVar5[0x21] = uVar7;
                    // WARNING: Subroutine does not return
      memcpy(*(uint64_t *)plVar5[0x21]);
    }
  }
  else {
    *(int64_t *)(lVar4 + 0x30) = unaff_R12;
  }
  *(int32_t *)(plVar5[0x21] + 8) = *(int32_t *)(unaff_RBP + 0x11934);
  *(int32_t *)(plVar5[0x21] + 0xc) = *(int32_t *)(unaff_RBP + 0x11938);
  *(uint *)((int64_t)plVar5 + 0x2c) = unaff_R15D;
  plVar5[0x1b] = unaff_RBP;
  LOCK();
  *(int32_t *)(plVar5 + 0x22) = 1;
  UNLOCK();
  plVar5[0x19] = 0;
  *(int8_t *)(plVar5[0x21] + 0x118) = 0;
  uVar3 = FUN_18076ac40(0,plVar5[0x21] + 0x10);
  if (uVar3 == 0) {
    lVar4 = *(int64_t *)(plVar5[0x21] + 0x10);
    uVar7 = *(uint64_t *)(lVar4 + 0x168);
    SystemStateManager(uVar7);
    *(int64_t **)(plVar5[0x21] + 0x28) = plVar5;
    lVar1 = plVar5[0x21];
    plVar5 = (int64_t *)(lVar1 + 0x18);
    *(uint64_t *)(lVar1 + 0x20) = *(uint64_t *)(lVar4 + 0x158);
    *plVar5 = lVar4 + 0x150;
    *(int64_t **)(lVar4 + 0x158) = plVar5;
    **(uint64_t **)(lVar1 + 0x20) = plVar5;
                    // WARNING: Subroutine does not return
    SystemConfigManager(uVar7);
  }
  LOCK();
  lVar4 = plVar5[0x22];
  *(int32_t *)(plVar5 + 0x22) = 2;
  UNLOCK();
  (**(code **)(*plVar5 + 0x18))(plVar5,CONCAT71((uint7)(uint3)((uint)(int)lVar4 >> 8),1));
  *in_stack_00000260 = 0;
  return (uint64_t)uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180745946(int32_t param_1,int32_t param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int iVar11;
  int64_t unaff_RBP;
  uint64_t *unaff_RDI;
  int64_t unaff_R12;
  int64_t *unaff_R14;
  uint unaff_R15D;
  int32_t uStack0000000000000040;
  int64_t *in_stack_00000048;
  uint64_t in_stack_00000130;
  uint64_t in_stack_00000138;
  uint64_t in_stack_00000140;
  uint64_t in_stack_00000148;
  uint64_t in_stack_00000150;
  uint64_t in_stack_00000158;
  uint64_t in_stack_00000160;
  uint64_t in_stack_00000168;
  uint64_t in_stack_00000170;
  uint64_t in_stack_00000178;
  uint64_t in_stack_00000180;
  uint64_t in_stack_00000188;
  uint64_t in_stack_00000190;
  uint64_t in_stack_00000198;
  uint64_t in_stack_000001a0;
  uint64_t in_stack_000001a8;
  uint64_t in_stack_000001b0;
  uint64_t in_stack_000001b8;
  uint64_t in_stack_000001c0;
  uint64_t in_stack_000001c8;
  uint64_t in_stack_000001d0;
  uint64_t in_stack_000001d8;
  uint64_t in_stack_000001e0;
  uint64_t in_stack_000001e8;
  int32_t uStack00000000000001f0;
  int32_t uStack00000000000001f4;
  int32_t uStack00000000000001f8;
  int32_t uStack00000000000001fc;
  int32_t uStack0000000000000200;
  int32_t uStack0000000000000204;
  int32_t uStack0000000000000208;
  int32_t uStack000000000000020c;
  int iVar12;
  
  iVar4 = 0;
  *unaff_R14 = 0;
  if ((unaff_R15D >> 0x10 & 1) != 0) {
    uStack0000000000000040 = 0;
    if ((char)unaff_R15D < '\0') {
      lVar6 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x198,&unknown_var_8576_ptr,0xf59,0);
      if (lVar6 == 0) {
        return 0x26;
      }
      plVar7 = (int64_t *)FUN_180773a80(lVar6);
      if (plVar7 == (int64_t *)0x0) {
        return 0x26;
      }
      *unaff_R14 = (int64_t)plVar7;
    }
    else {
      in_stack_00000048 = (int64_t *)0x0;
      uVar8 = FUN_1807aaba0(*(uint64_t *)(unaff_RBP + 0x6b8),0,0,&stack0x00000048);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      *unaff_R14 = (int64_t)in_stack_00000048;
      plVar7 = in_stack_00000048;
    }
    iVar12 = 0;
    iVar11 = 0x128;
    if (unaff_RDI != (uint64_t *)0x0) {
      iVar11 = *(int *)(unaff_RDI + 6) * 4 + 0x128;
      if (unaff_RDI[10] != 0) {
        iVar4 = func_0x00018076b690();
        iVar4 = iVar4 + 1;
        iVar11 = iVar11 + iVar4;
      }
      if (unaff_RDI[0xb] != 0) {
        iVar12 = func_0x00018076b690();
        iVar12 = iVar12 + 1;
        iVar11 = iVar11 + iVar12;
      }
    }
    lVar6 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar11,&unknown_var_8576_ptr,0xf89,0);
    plVar7[0x21] = lVar6;
    if (lVar6 == 0) {
      return 0x26;
    }
    if ((unaff_R15D & 0x10000800) == 0) {
      if (unaff_R12 != 0) {
        iVar4 = func_0x00018076b690();
        uVar9 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar4 + 1,&unknown_var_8576_ptr,0xf97
                              ,0);
        *(uint64_t *)plVar7[0x21] = uVar9;
                    // WARNING: Subroutine does not return
        memcpy(*(uint64_t *)plVar7[0x21]);
      }
    }
    else {
      *(int64_t *)(lVar6 + 0x30) = unaff_R12;
    }
    *(int32_t *)(plVar7[0x21] + 8) = *(int32_t *)(unaff_RBP + 0x11934);
    *(int32_t *)(plVar7[0x21] + 0xc) = *(int32_t *)(unaff_RBP + 0x11938);
    *(uint *)((int64_t)plVar7 + 0x2c) = unaff_R15D;
    plVar7[0x1b] = unaff_RBP;
    LOCK();
    *(int32_t *)(plVar7 + 0x22) = 1;
    UNLOCK();
    if (unaff_RDI == (uint64_t *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = unaff_RDI[0xd];
    }
    plVar7[0x19] = lVar6;
    lVar6 = plVar7[0x21];
    if (unaff_RDI == (uint64_t *)0x0) {
      *(int8_t *)(lVar6 + 0x118) = 0;
    }
    else {
      uVar9 = unaff_RDI[1];
      *(uint64_t *)(lVar6 + 0x38) = *unaff_RDI;
      *(uint64_t *)(lVar6 + 0x40) = uVar9;
      uVar9 = unaff_RDI[3];
      *(uint64_t *)(lVar6 + 0x48) = unaff_RDI[2];
      *(uint64_t *)(lVar6 + 0x50) = uVar9;
      uVar9 = unaff_RDI[5];
      *(uint64_t *)(lVar6 + 0x58) = unaff_RDI[4];
      *(uint64_t *)(lVar6 + 0x60) = uVar9;
      uVar9 = unaff_RDI[7];
      *(uint64_t *)(lVar6 + 0x68) = unaff_RDI[6];
      *(uint64_t *)(lVar6 + 0x70) = uVar9;
      uVar9 = unaff_RDI[9];
      *(uint64_t *)(lVar6 + 0x78) = unaff_RDI[8];
      *(uint64_t *)(lVar6 + 0x80) = uVar9;
      uVar9 = unaff_RDI[0xb];
      *(uint64_t *)(lVar6 + 0x88) = unaff_RDI[10];
      *(uint64_t *)(lVar6 + 0x90) = uVar9;
      uVar9 = unaff_RDI[0xd];
      *(uint64_t *)(lVar6 + 0x98) = unaff_RDI[0xc];
      *(uint64_t *)(lVar6 + 0xa0) = uVar9;
      uVar9 = unaff_RDI[0xf];
      *(uint64_t *)(lVar6 + 0xa8) = unaff_RDI[0xe];
      *(uint64_t *)(lVar6 + 0xb0) = uVar9;
      uVar9 = unaff_RDI[0x11];
      *(uint64_t *)(lVar6 + 0xb8) = unaff_RDI[0x10];
      *(uint64_t *)(lVar6 + 0xc0) = uVar9;
      uVar9 = unaff_RDI[0x13];
      *(uint64_t *)(lVar6 + 200) = unaff_RDI[0x12];
      *(uint64_t *)(lVar6 + 0xd0) = uVar9;
      uVar9 = unaff_RDI[0x15];
      *(uint64_t *)(lVar6 + 0xd8) = unaff_RDI[0x14];
      *(uint64_t *)(lVar6 + 0xe0) = uVar9;
      uVar9 = unaff_RDI[0x17];
      *(uint64_t *)(lVar6 + 0xe8) = unaff_RDI[0x16];
      *(uint64_t *)(lVar6 + 0xf0) = uVar9;
      uVar1 = *(int32_t *)((int64_t)unaff_RDI + 0xc4);
      uVar2 = *(int32_t *)(unaff_RDI + 0x19);
      uVar3 = *(int32_t *)((int64_t)unaff_RDI + 0xcc);
      *(int32_t *)(lVar6 + 0xf8) = *(int32_t *)(unaff_RDI + 0x18);
      *(int32_t *)(lVar6 + 0xfc) = uVar1;
      *(int32_t *)(lVar6 + 0x100) = uVar2;
      *(int32_t *)(lVar6 + 0x104) = uVar3;
      uVar1 = *(int32_t *)((int64_t)unaff_RDI + 0xd4);
      uVar2 = *(int32_t *)(unaff_RDI + 0x1b);
      uVar3 = *(int32_t *)((int64_t)unaff_RDI + 0xdc);
      *(int32_t *)(lVar6 + 0x108) = *(int32_t *)(unaff_RDI + 0x1a);
      *(int32_t *)(lVar6 + 0x10c) = uVar1;
      *(int32_t *)(lVar6 + 0x110) = uVar2;
      *(int32_t *)(lVar6 + 0x114) = uVar3;
      *(int8_t *)(plVar7[0x21] + 0x118) = 1;
      if (unaff_RDI[0x17] != 0) {
        (**(code **)(*plVar7 + 0xd8))(plVar7);
      }
      lVar10 = plVar7[0x21];
      uStack0000000000000040 = *(int32_t *)((int64_t)unaff_RDI + 0xd4);
      lVar6 = lVar10 + 0x128;
      if (*(int *)(lVar10 + 0x68) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar6,*(uint64_t *)(lVar10 + 0x60),(int64_t)*(int *)(lVar10 + 0x68) << 2);
      }
      if (*(int64_t *)(lVar10 + 0x88) != 0) {
        func_0x00018076b450(lVar6,*(int64_t *)(lVar10 + 0x88),iVar4);
        *(int64_t *)(plVar7[0x21] + 0x88) = lVar6;
        lVar10 = plVar7[0x21];
        lVar6 = lVar6 + iVar4;
      }
      if (*(int64_t *)(lVar10 + 0x90) != 0) {
        func_0x00018076b450(lVar6,*(int64_t *)(lVar10 + 0x90),iVar12);
        *(int64_t *)(plVar7[0x21] + 0x90) = lVar6;
      }
    }
    uVar5 = FUN_18076ac40(uStack0000000000000040,plVar7[0x21] + 0x10);
    if (uVar5 == 0) {
      lVar6 = *(int64_t *)(plVar7[0x21] + 0x10);
      uVar9 = *(uint64_t *)(lVar6 + 0x168);
      SystemStateManager(uVar9);
      *(int64_t **)(plVar7[0x21] + 0x28) = plVar7;
      lVar10 = plVar7[0x21];
      plVar7 = (int64_t *)(lVar10 + 0x18);
      *(uint64_t *)(lVar10 + 0x20) = *(uint64_t *)(lVar6 + 0x158);
      *plVar7 = lVar6 + 0x150;
      *(int64_t **)(lVar6 + 0x158) = plVar7;
      **(uint64_t **)(lVar10 + 0x20) = plVar7;
                    // WARNING: Subroutine does not return
      SystemConfigManager(uVar9);
    }
    LOCK();
    lVar6 = plVar7[0x22];
    *(int32_t *)(plVar7 + 0x22) = 2;
    UNLOCK();
    (**(code **)(*plVar7 + 0x18))(plVar7,CONCAT71((uint7)(uint3)((uint)(int)lVar6 >> 8),1));
    *unaff_R14 = 0;
    return (uint64_t)uVar5;
  }
  if (unaff_RDI != (uint64_t *)0x0) {
    in_stack_00000130 = *unaff_RDI;
    in_stack_00000138 = unaff_RDI[1];
    in_stack_00000140 = unaff_RDI[2];
    in_stack_00000148 = unaff_RDI[3];
    in_stack_00000150 = unaff_RDI[4];
    in_stack_00000158 = unaff_RDI[5];
    in_stack_00000160 = unaff_RDI[6];
    in_stack_00000168 = unaff_RDI[7];
    in_stack_00000170 = unaff_RDI[8];
    in_stack_00000178 = unaff_RDI[9];
    in_stack_00000180 = unaff_RDI[10];
    in_stack_00000188 = unaff_RDI[0xb];
    in_stack_00000190 = unaff_RDI[0xc];
    in_stack_00000198 = unaff_RDI[0xd];
    in_stack_000001b0 = unaff_RDI[0x10];
    in_stack_000001b8 = unaff_RDI[0x11];
    in_stack_000001a0 = unaff_RDI[0xe];
    in_stack_000001a8 = unaff_RDI[0xf];
    in_stack_000001c0 = unaff_RDI[0x12];
    in_stack_000001c8 = unaff_RDI[0x13];
    in_stack_000001d0 = unaff_RDI[0x14];
    in_stack_000001d8 = unaff_RDI[0x15];
    in_stack_000001e0 = unaff_RDI[0x16];
    in_stack_000001e8 = unaff_RDI[0x17];
    param_2 = *(int32_t *)(unaff_RDI + 0x18);
    uStack00000000000001f4 = *(int32_t *)((int64_t)unaff_RDI + 0xc4);
    uStack00000000000001f8 = *(int32_t *)(unaff_RDI + 0x19);
    uStack00000000000001fc = *(int32_t *)((int64_t)unaff_RDI + 0xcc);
    param_1 = *(int32_t *)(unaff_RDI + 0x1a);
    uStack0000000000000204 = *(int32_t *)((int64_t)unaff_RDI + 0xd4);
    uStack0000000000000208 = *(int32_t *)(unaff_RDI + 0x1b);
    uStack000000000000020c = *(int32_t *)((int64_t)unaff_RDI + 0xdc);
    uStack00000000000001f0 = param_2;
    uStack0000000000000200 = param_1;
  }
  uVar5 = FUN_18078e180(param_1,param_2,unaff_R15D,*(int32_t *)(unaff_RBP + 0x11934),
                        *(int32_t *)(unaff_RBP + 0x11938));
  uVar8 = (uint64_t)uVar5;
  if ((int64_t *)*unaff_R14 == (int64_t *)0x0) {
    return uVar8;
  }
  if (unaff_RDI == (uint64_t *)0x0) {
    return uVar8;
  }
  if (unaff_RDI[0x17] != 0) {
    (**(code **)(*(int64_t *)*unaff_R14 + 0xd8))();
    return uVar8;
  }
  return uVar8;
}







