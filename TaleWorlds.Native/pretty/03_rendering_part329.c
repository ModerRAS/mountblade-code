#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// 03_rendering_part329.c - 14 个函数

// 函数: void FUN_18043e990(uint64_t param_1)
void FUN_18043e990(uint64_t param_1)

{
  FUN_1802e9fa0(param_1,1,1);
  return;
}





// 函数: void FUN_18043e9b0(int64_t param_1)
void FUN_18043e9b0(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int iVar11;
  
  PhysicsSystem_CharacterController(param_1,1);
  plVar5 = (int64_t *)(param_1 + 0xf0);
  uVar6 = 0;
  uVar9 = uVar6;
  if (*(int64_t *)(param_1 + 0xf8) - *plVar5 >> 3 != 0) {
    do {
      (**(code **)(**(int64_t **)(uVar6 + *plVar5) + 0x1e0))(*(int64_t **)(uVar6 + *plVar5),0);
      uVar6 = uVar6 + 8;
      uVar7 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar7;
    } while ((uint64_t)(int64_t)(int)uVar7 <
             (uint64_t)(*(int64_t *)(param_1 + 0xf8) - *plVar5 >> 3));
  }
  SystemCore_Controller(plVar5);
  SystemCore_Controller(param_1 + 0x1e0);
  lVar2 = *(int64_t *)(param_1 + 0x260);
  if (lVar2 == 0) {
    return;
  }
  plVar5 = (int64_t *)(lVar2 + 0x1a8);
  iVar4 = 0;
  if (*(int64_t *)(lVar2 + 0x1b0) - *plVar5 >> 3 != 0) {
    lVar8 = 0;
    do {
      (**(code **)(**(int64_t **)(lVar8 + *plVar5) + 0x1e0))(*(int64_t **)(lVar8 + *plVar5),0);
      lVar8 = lVar8 + 8;
      iVar4 = iVar4 + 1;
    } while ((uint64_t)(int64_t)iVar4 < (uint64_t)(*(int64_t *)(lVar2 + 0x1b0) - *plVar5 >> 3));
  }
  SystemCore_Controller(plVar5);
  SystemCore_Controller(lVar2 + 0x1c8);
  iVar4 = 0;
  if ('\0' < *(char *)(lVar2 + 0x20)) {
    lVar8 = 0;
    do {
      lVar1 = *(int64_t *)(lVar2 + 0x18);
      iVar11 = 0;
      plVar5 = *(int64_t **)(lVar8 + 0xb8 + lVar1);
      plVar3 = *(int64_t **)(lVar8 + 0xb0 + lVar1);
      if (0 < (int)((int64_t)plVar5 - (int64_t)plVar3 >> 3)) {
        lVar10 = 0;
        do {
          plVar5 = *(int64_t **)(lVar10 + *(int64_t *)(lVar8 + 0xb0 + lVar1));
          (**(code **)(*plVar5 + 0x1e0))(plVar5,0);
          plVar5 = *(int64_t **)(lVar8 + 0xb8 + lVar1);
          lVar10 = lVar10 + 8;
          plVar3 = *(int64_t **)(lVar8 + 0xb0 + lVar1);
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)((int64_t)plVar5 - (int64_t)plVar3 >> 3));
      }
      if (plVar3 != plVar5) {
        do {
          if ((int64_t *)*plVar3 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar3 + 0x38))();
          }
          plVar3 = plVar3 + 1;
        } while (plVar3 != plVar5);
        plVar3 = *(int64_t **)(lVar8 + 0xb0 + lVar1);
      }
      *(int64_t **)(lVar8 + 0xb8 + lVar1) = plVar3;
      plVar5 = *(int64_t **)(lVar8 + 0xd8 + lVar1);
      plVar3 = *(int64_t **)(lVar8 + 0xd0 + lVar1);
      if (plVar3 != plVar5) {
        do {
          if ((int64_t *)*plVar3 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar3 + 0x38))();
          }
          plVar3 = plVar3 + 1;
        } while (plVar3 != plVar5);
        plVar3 = *(int64_t **)(lVar8 + 0xd0 + lVar1);
      }
      *(int64_t **)(lVar8 + 0xd8 + lVar1) = plVar3;
      iVar4 = iVar4 + 1;
      lVar8 = lVar8 + 0x100;
    } while (iVar4 < *(char *)(lVar2 + 0x20));
  }
  FUN_1802fc520(lVar2,0);
  if (*(float *)(lVar2 + 0x3c) < 0.0) {
    *(int32_t *)(lVar2 + 0x34) = 0x3dcccccd;
    return;
  }
  *(float *)(lVar2 + 0x34) = *(float *)(lVar2 + 0x3c) + 1.1920929e-07;
  return;
}





// 函数: void FUN_18043e9b4(int64_t param_1)
void FUN_18043e9b4(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int iVar11;
  
  PhysicsSystem_CharacterController(param_1,1);
  plVar5 = (int64_t *)(param_1 + 0xf0);
  uVar6 = 0;
  uVar9 = uVar6;
  if (*(int64_t *)(param_1 + 0xf8) - *plVar5 >> 3 != 0) {
    do {
      (**(code **)(**(int64_t **)(uVar6 + *plVar5) + 0x1e0))(*(int64_t **)(uVar6 + *plVar5),0);
      uVar6 = uVar6 + 8;
      uVar7 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar7;
    } while ((uint64_t)(int64_t)(int)uVar7 <
             (uint64_t)(*(int64_t *)(param_1 + 0xf8) - *plVar5 >> 3));
  }
  SystemCore_Controller(plVar5);
  SystemCore_Controller(param_1 + 0x1e0);
  lVar2 = *(int64_t *)(param_1 + 0x260);
  if (lVar2 == 0) {
    return;
  }
  plVar5 = (int64_t *)(lVar2 + 0x1a8);
  iVar4 = 0;
  if (*(int64_t *)(lVar2 + 0x1b0) - *plVar5 >> 3 != 0) {
    lVar8 = 0;
    do {
      (**(code **)(**(int64_t **)(lVar8 + *plVar5) + 0x1e0))(*(int64_t **)(lVar8 + *plVar5),0);
      lVar8 = lVar8 + 8;
      iVar4 = iVar4 + 1;
    } while ((uint64_t)(int64_t)iVar4 < (uint64_t)(*(int64_t *)(lVar2 + 0x1b0) - *plVar5 >> 3));
  }
  SystemCore_Controller(plVar5);
  SystemCore_Controller(lVar2 + 0x1c8);
  iVar4 = 0;
  if ('\0' < *(char *)(lVar2 + 0x20)) {
    lVar8 = 0;
    do {
      lVar1 = *(int64_t *)(lVar2 + 0x18);
      iVar11 = 0;
      plVar5 = *(int64_t **)(lVar8 + 0xb8 + lVar1);
      plVar3 = *(int64_t **)(lVar8 + 0xb0 + lVar1);
      if (0 < (int)((int64_t)plVar5 - (int64_t)plVar3 >> 3)) {
        lVar10 = 0;
        do {
          plVar5 = *(int64_t **)(lVar10 + *(int64_t *)(lVar8 + 0xb0 + lVar1));
          (**(code **)(*plVar5 + 0x1e0))(plVar5,0);
          plVar5 = *(int64_t **)(lVar8 + 0xb8 + lVar1);
          lVar10 = lVar10 + 8;
          plVar3 = *(int64_t **)(lVar8 + 0xb0 + lVar1);
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)((int64_t)plVar5 - (int64_t)plVar3 >> 3));
      }
      if (plVar3 != plVar5) {
        do {
          if ((int64_t *)*plVar3 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar3 + 0x38))();
          }
          plVar3 = plVar3 + 1;
        } while (plVar3 != plVar5);
        plVar3 = *(int64_t **)(lVar8 + 0xb0 + lVar1);
      }
      *(int64_t **)(lVar8 + 0xb8 + lVar1) = plVar3;
      plVar5 = *(int64_t **)(lVar8 + 0xd8 + lVar1);
      plVar3 = *(int64_t **)(lVar8 + 0xd0 + lVar1);
      if (plVar3 != plVar5) {
        do {
          if ((int64_t *)*plVar3 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar3 + 0x38))();
          }
          plVar3 = plVar3 + 1;
        } while (plVar3 != plVar5);
        plVar3 = *(int64_t **)(lVar8 + 0xd0 + lVar1);
      }
      *(int64_t **)(lVar8 + 0xd8 + lVar1) = plVar3;
      iVar4 = iVar4 + 1;
      lVar8 = lVar8 + 0x100;
    } while (iVar4 < *(char *)(lVar2 + 0x20));
  }
  FUN_1802fc520(lVar2,0);
  if (*(float *)(lVar2 + 0x3c) < 0.0) {
    *(int32_t *)(lVar2 + 0x34) = 0x3dcccccd;
    return;
  }
  *(float *)(lVar2 + 0x34) = *(float *)(lVar2 + 0x3c) + 1.1920929e-07;
  return;
}





// 函数: void FUN_18043e9e6(void)
void FUN_18043e9e6(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int iVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint unaff_EDI;
  int64_t lVar7;
  int64_t lVar8;
  int iVar9;
  
  uVar6 = (uint64_t)unaff_EDI;
  do {
    (**(code **)(**(int64_t **)(uVar6 + *unaff_RBX) + 0x1e0))(*(int64_t **)(uVar6 + *unaff_RBX),0)
    ;
    uVar6 = uVar6 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)(int)unaff_EDI < (uint64_t)(unaff_RBX[1] - *unaff_RBX >> 3));
  SystemCore_Controller();
  SystemCore_Controller(unaff_RBP + 0x1e0);
  lVar2 = *(int64_t *)(unaff_RBP + 0x260);
  if (lVar2 == 0) {
    return;
  }
  plVar5 = (int64_t *)(lVar2 + 0x1a8);
  iVar4 = 0;
  if (*(int64_t *)(lVar2 + 0x1b0) - *plVar5 >> 3 != 0) {
    lVar7 = 0;
    do {
      (**(code **)(**(int64_t **)(lVar7 + *plVar5) + 0x1e0))(*(int64_t **)(lVar7 + *plVar5),0);
      lVar7 = lVar7 + 8;
      iVar4 = iVar4 + 1;
    } while ((uint64_t)(int64_t)iVar4 < (uint64_t)(*(int64_t *)(lVar2 + 0x1b0) - *plVar5 >> 3));
  }
  SystemCore_Controller(plVar5);
  SystemCore_Controller(lVar2 + 0x1c8);
  iVar4 = 0;
  if ('\0' < *(char *)(lVar2 + 0x20)) {
    lVar7 = 0;
    do {
      lVar1 = *(int64_t *)(lVar2 + 0x18);
      iVar9 = 0;
      plVar5 = *(int64_t **)(lVar7 + 0xb8 + lVar1);
      plVar3 = *(int64_t **)(lVar7 + 0xb0 + lVar1);
      if (0 < (int)((int64_t)plVar5 - (int64_t)plVar3 >> 3)) {
        lVar8 = 0;
        do {
          plVar5 = *(int64_t **)(lVar8 + *(int64_t *)(lVar7 + 0xb0 + lVar1));
          (**(code **)(*plVar5 + 0x1e0))(plVar5,0);
          plVar5 = *(int64_t **)(lVar7 + 0xb8 + lVar1);
          lVar8 = lVar8 + 8;
          plVar3 = *(int64_t **)(lVar7 + 0xb0 + lVar1);
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)((int64_t)plVar5 - (int64_t)plVar3 >> 3));
      }
      if (plVar3 != plVar5) {
        do {
          if ((int64_t *)*plVar3 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar3 + 0x38))();
          }
          plVar3 = plVar3 + 1;
        } while (plVar3 != plVar5);
        plVar3 = *(int64_t **)(lVar7 + 0xb0 + lVar1);
      }
      *(int64_t **)(lVar7 + 0xb8 + lVar1) = plVar3;
      plVar5 = *(int64_t **)(lVar7 + 0xd8 + lVar1);
      plVar3 = *(int64_t **)(lVar7 + 0xd0 + lVar1);
      if (plVar3 != plVar5) {
        do {
          if ((int64_t *)*plVar3 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar3 + 0x38))();
          }
          plVar3 = plVar3 + 1;
        } while (plVar3 != plVar5);
        plVar3 = *(int64_t **)(lVar7 + 0xd0 + lVar1);
      }
      *(int64_t **)(lVar7 + 0xd8 + lVar1) = plVar3;
      iVar4 = iVar4 + 1;
      lVar7 = lVar7 + 0x100;
    } while (iVar4 < *(char *)(lVar2 + 0x20));
  }
  FUN_1802fc520(lVar2,0);
  if (*(float *)(lVar2 + 0x3c) < 0.0) {
    *(int32_t *)(lVar2 + 0x34) = 0x3dcccccd;
    return;
  }
  *(float *)(lVar2 + 0x34) = *(float *)(lVar2 + 0x3c) + 1.1920929e-07;
  return;
}





// 函数: void FUN_18043ea20(void)
void FUN_18043ea20(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t unaff_RBP;
  int iVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  
  SystemCore_Controller();
  SystemCore_Controller(unaff_RBP + 0x1e0);
  lVar2 = *(int64_t *)(unaff_RBP + 0x260);
  if (lVar2 == 0) {
    return;
  }
  plVar5 = (int64_t *)(lVar2 + 0x1a8);
  iVar4 = 0;
  if (*(int64_t *)(lVar2 + 0x1b0) - *plVar5 >> 3 != 0) {
    lVar6 = 0;
    do {
      (**(code **)(**(int64_t **)(lVar6 + *plVar5) + 0x1e0))(*(int64_t **)(lVar6 + *plVar5),0);
      lVar6 = lVar6 + 8;
      iVar4 = iVar4 + 1;
    } while ((uint64_t)(int64_t)iVar4 < (uint64_t)(*(int64_t *)(lVar2 + 0x1b0) - *plVar5 >> 3));
  }
  SystemCore_Controller(plVar5);
  SystemCore_Controller(lVar2 + 0x1c8);
  iVar4 = 0;
  if ('\0' < *(char *)(lVar2 + 0x20)) {
    lVar6 = 0;
    do {
      lVar1 = *(int64_t *)(lVar2 + 0x18);
      iVar8 = 0;
      plVar5 = *(int64_t **)(lVar6 + 0xb8 + lVar1);
      plVar3 = *(int64_t **)(lVar6 + 0xb0 + lVar1);
      if (0 < (int)((int64_t)plVar5 - (int64_t)plVar3 >> 3)) {
        lVar7 = 0;
        do {
          plVar5 = *(int64_t **)(lVar7 + *(int64_t *)(lVar6 + 0xb0 + lVar1));
          (**(code **)(*plVar5 + 0x1e0))(plVar5,0);
          plVar5 = *(int64_t **)(lVar6 + 0xb8 + lVar1);
          lVar7 = lVar7 + 8;
          plVar3 = *(int64_t **)(lVar6 + 0xb0 + lVar1);
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)((int64_t)plVar5 - (int64_t)plVar3 >> 3));
      }
      if (plVar3 != plVar5) {
        do {
          if ((int64_t *)*plVar3 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar3 + 0x38))();
          }
          plVar3 = plVar3 + 1;
        } while (plVar3 != plVar5);
        plVar3 = *(int64_t **)(lVar6 + 0xb0 + lVar1);
      }
      *(int64_t **)(lVar6 + 0xb8 + lVar1) = plVar3;
      plVar5 = *(int64_t **)(lVar6 + 0xd8 + lVar1);
      plVar3 = *(int64_t **)(lVar6 + 0xd0 + lVar1);
      if (plVar3 != plVar5) {
        do {
          if ((int64_t *)*plVar3 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar3 + 0x38))();
          }
          plVar3 = plVar3 + 1;
        } while (plVar3 != plVar5);
        plVar3 = *(int64_t **)(lVar6 + 0xd0 + lVar1);
      }
      *(int64_t **)(lVar6 + 0xd8 + lVar1) = plVar3;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 0x100;
    } while (iVar4 < *(char *)(lVar2 + 0x20));
  }
  FUN_1802fc520(lVar2,0);
  if (*(float *)(lVar2 + 0x3c) < 0.0) {
    *(int32_t *)(lVar2 + 0x34) = 0x3dcccccd;
    return;
  }
  *(float *)(lVar2 + 0x34) = *(float *)(lVar2 + 0x3c) + 1.1920929e-07;
  return;
}





// 函数: void FUN_18043ea4f(int64_t param_1)
void FUN_18043ea4f(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  int iVar7;
  
  plVar4 = (int64_t *)(param_1 + 0x1a8);
  iVar3 = 0;
  if (*(int64_t *)(param_1 + 0x1b0) - *plVar4 >> 3 != 0) {
    lVar5 = 0;
    do {
      (**(code **)(**(int64_t **)(lVar5 + *plVar4) + 0x1e0))(*(int64_t **)(lVar5 + *plVar4),0);
      lVar5 = lVar5 + 8;
      iVar3 = iVar3 + 1;
    } while ((uint64_t)(int64_t)iVar3 < (uint64_t)(*(int64_t *)(param_1 + 0x1b0) - *plVar4 >> 3)
            );
  }
  SystemCore_Controller(plVar4);
  SystemCore_Controller(param_1 + 0x1c8);
  iVar3 = 0;
  if ('\0' < *(char *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      lVar1 = *(int64_t *)(param_1 + 0x18);
      iVar7 = 0;
      plVar4 = *(int64_t **)(lVar5 + 0xb8 + lVar1);
      plVar2 = *(int64_t **)(lVar5 + 0xb0 + lVar1);
      if (0 < (int)((int64_t)plVar4 - (int64_t)plVar2 >> 3)) {
        lVar6 = 0;
        do {
          plVar4 = *(int64_t **)(lVar6 + *(int64_t *)(lVar5 + 0xb0 + lVar1));
          (**(code **)(*plVar4 + 0x1e0))(plVar4,0);
          plVar4 = *(int64_t **)(lVar5 + 0xb8 + lVar1);
          lVar6 = lVar6 + 8;
          plVar2 = *(int64_t **)(lVar5 + 0xb0 + lVar1);
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)((int64_t)plVar4 - (int64_t)plVar2 >> 3));
      }
      if (plVar2 != plVar4) {
        do {
          if ((int64_t *)*plVar2 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar2 + 0x38))();
          }
          plVar2 = plVar2 + 1;
        } while (plVar2 != plVar4);
        plVar2 = *(int64_t **)(lVar5 + 0xb0 + lVar1);
      }
      *(int64_t **)(lVar5 + 0xb8 + lVar1) = plVar2;
      plVar4 = *(int64_t **)(lVar5 + 0xd8 + lVar1);
      plVar2 = *(int64_t **)(lVar5 + 0xd0 + lVar1);
      if (plVar2 != plVar4) {
        do {
          if ((int64_t *)*plVar2 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar2 + 0x38))();
          }
          plVar2 = plVar2 + 1;
        } while (plVar2 != plVar4);
        plVar2 = *(int64_t **)(lVar5 + 0xd0 + lVar1);
      }
      *(int64_t **)(lVar5 + 0xd8 + lVar1) = plVar2;
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x100;
    } while (iVar3 < *(char *)(param_1 + 0x20));
  }
  FUN_1802fc520(param_1,0);
  if (*(float *)(param_1 + 0x3c) < 0.0) {
    *(int32_t *)(param_1 + 0x34) = 0x3dcccccd;
    return;
  }
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x3c) + 1.1920929e-07;
  return;
}





// 函数: void FUN_18043ea60(void)
void FUN_18043ea60(void)

{
  FUN_1802e9fa0();
  return;
}





// 函数: void FUN_18043ea80(uint64_t param_1,int64_t *param_2,int8_t param_3,uint64_t param_4)
void FUN_18043ea80(uint64_t param_1,int64_t *param_2,int8_t param_3,uint64_t param_4)

{
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = param_2;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  FUN_1800ee700(param_1,&plStackX_8,param_3,param_4,uVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043eb00(int64_t param_1,int64_t *param_2,char param_3)
void FUN_18043eb00(int64_t param_1,int64_t *param_2,char param_3)

{
  short *psVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  
  lVar4 = *(int64_t *)(param_1 + 0x260);
  uVar9 = (**(code **)(*param_2 + 0x158))(param_2);
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2,param_3,param_2,uVar9,0xfffffffffffffffe);
  }
  iVar6 = (**(code **)(*param_2 + 0x98))(param_2);
  if (iVar6 == 0) {
    cVar5 = func_0x000180282950();
    if (cVar5 != '\0') {
      uVar7 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,200,8,3);
      plVar8 = (int64_t *)FUN_18030b420(uVar7,param_2,0);
      if (plVar8 != (int64_t *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8);
      }
      (**(code **)(*param_2 + 0x38))(param_2);
      param_2 = plVar8;
    }
  }
  else {
    (**(code **)(*param_2 + 0x98))(param_2);
  }
  lVar3 = *(int64_t *)(lVar4 + 0x18);
  (**(code **)(*param_2 + 0x148))(param_2,uVar9);
  (**(code **)(*param_2 + 0x1e0))(param_2,*(uint64_t *)(lVar4 + 0x10));
  FUN_1802f9110((int64_t)param_3 * 0x100 + lVar3,param_2,lVar4);
  *(ushort *)(lVar4 + 0xa8) = *(ushort *)(lVar4 + 0xa8) | 0x40;
  if (*(int64_t *)(lVar4 + 0x10) != 0) {
    uVar2 = *(uint *)(*(int64_t *)(lVar4 + 0x10) + 0x2ac);
    (**(code **)(*param_2 + 0xe0))
              (param_2,CONCAT31((uint3)(uVar2 >> 0x1e),~(byte)(uVar2 >> 0x16)) & 0xffffff01);
    (**(code **)(*param_2 + 0x128))(param_2,&stack0x00000010);
    lVar3 = *(int64_t *)(lVar4 + 0x10);
    psVar1 = (short *)(lVar3 + 0x2b0);
    *psVar1 = *psVar1 + 1;
    if (*(int64_t *)(lVar3 + 0x168) != 0) {
      func_0x0001802eeba0();
    }
    if (*(float *)(lVar4 + 0x3c) < 0.0) {
      *(int32_t *)(lVar4 + 0x34) = 0x3dcccccd;
    }
    else {
      *(float *)(lVar4 + 0x34) = *(float *)(lVar4 + 0x3c) + 1.1920929e-07;
    }
  }
                    // WARNING: Could not recover jumptable at 0x0001802fc0e2. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x38))(param_2);
  return;
}





// 函数: void FUN_18043eb50(int64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18043eb50(int64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t *plVar4;
  int iVar5;
  int iVar6;
  int64_t *plStackX_8;
  
  iVar3 = FUN_1802ed190(param_1,3,param_3,param_4,0xfffffffffffffffe);
  iVar5 = 0;
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      plVar4 = (int64_t *)FUN_1802ed2b0(param_1,&plStackX_8,3,iVar6);
      lVar1 = *plVar4;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      *(int32_t *)(lVar1 + 0xb8) = param_2;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  lVar1 = *(int64_t *)(param_1 + 0x260);
  if ((lVar1 != 0) && (iVar3 = FUN_1803008f0(lVar1,3), 0 < iVar3)) {
    do {
      plVar4 = (int64_t *)FUN_1802fc690(lVar1,&plStackX_8,3,iVar5);
      lVar2 = *plVar4;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      *(int32_t *)(lVar2 + 0xb8) = param_2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}





// 函数: void FUN_18043ecc0(int64_t param_1)
void FUN_18043ecc0(int64_t param_1)

{
  if (*(short *)(param_1 + 0x2b0) != *(short *)(param_1 + 0x2b4)) {
    if (*(short *)(param_1 + 0x2b0) != *(short *)(param_1 + 0x2b4)) {
      if (*(char *)(param_1 + 0x2d8) == '\0') {
        FUN_1802e7e20();
      }
      else {
        UltraHighFreq_DataProcessor1(*(int64_t *)(param_1 + 0x28),*(int64_t *)(param_1 + 0x28) + 0xf8,
                      param_1 + 0x70);
      }
      *(int16_t *)(param_1 + 0x2b0) = *(int16_t *)(param_1 + 0x2b4);
    }
    return;
  }
  UltraHighFreq_DataProcessor1(*(int64_t *)(param_1 + 0x28),*(int64_t *)(param_1 + 0x28) + 0xf8,param_1 + 0x70);
  *(int16_t *)(param_1 + 0x2b6) = *(int16_t *)(param_1 + 0x2b2);
  return;
}





// 函数: void FUN_18043ed10(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18043ed10(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  char cVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *aplStackX_10 [2];
  int64_t **pplStackX_20;
  
  lVar1 = *(int64_t *)(param_1 + 0x260);
  cVar2 = FUN_1802fc790(lVar1);
  if (param_2 != (int64_t *)0x0) {
    if (cVar2 == -1) {
      plVar3 = (int64_t *)
               FUN_1802f4600(*(uint64_t *)(lVar1 + 0x1a8),*(uint64_t *)(lVar1 + 0x1b0),param_2);
      if (plVar3 != *(int64_t **)(lVar1 + 0x1b0)) {
        param_2 = (int64_t *)*plVar3;
        (**(code **)(*param_2 + 0x1e0))(param_2,0);
        if ((*(int64_t *)(lVar1 + 0x10) != 0) &&
           (*(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 0x20) != 0)) {
          FUN_1802549d0(param_2);
        }
        *(int32_t *)(param_2 + 2) = 4;
        *(int32_t *)((int64_t)param_2 + 0x14) = 1;
        *(int32_t *)(param_2 + 3) = 0;
        *(int32_t *)((int64_t)param_2 + 0x1c) = 0;
        param_2[4] = 0;
        FUN_1800ba050(lVar1 + 0x1a8,plVar3);
      }
      lVar4 = FUN_1802f4600(*(uint64_t *)(lVar1 + 0x1c8),*(uint64_t *)(lVar1 + 0x1d0),param_2);
      if (lVar4 != *(int64_t *)(lVar1 + 0x1d0)) {
        FUN_1800ba050(lVar1 + 0x1c8,lVar4);
      }
    }
    else {
      lVar4 = *(int64_t *)(lVar1 + 0x18);
      pplStackX_20 = aplStackX_10;
      aplStackX_10[0] = param_2;
      (**(code **)(*param_2 + 0x28))(param_2,param_2,cVar2,param_4,0xfffffffffffffffe);
      FUN_1802f9710((int64_t)cVar2 * 0x100 + lVar4,aplStackX_10,lVar1);
    }
    if (0.0 <= *(float *)(lVar1 + 0x3c)) {
      *(float *)(lVar1 + 0x34) = *(float *)(lVar1 + 0x3c) + 1.1920929e-07;
      return;
    }
    *(int32_t *)(lVar1 + 0x34) = 0x3dcccccd;
  }
  return;
}



char FUN_18043ed70(int64_t param_1,int64_t param_2)

{
  int iVar1;
  int64_t *plVar2;
  int iVar3;
  char cVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  
  lVar5 = *(int64_t *)(param_1 + 0xf0);
  cVar4 = '\0';
  if (*(int64_t *)(param_1 + 0xf8) - lVar5 >> 3 == 0) {
    return '\0';
  }
  iVar3 = 0;
  lVar7 = 0;
  do {
    if (cVar4 != '\0') {
      return cVar4;
    }
    iVar1 = (**(code **)(**(int64_t **)(lVar7 + lVar5) + 0x98))();
    if (iVar1 == 0) {
      iVar1 = 0;
      lVar5 = *(int64_t *)(lVar7 + *(int64_t *)(param_1 + 0xf0));
      plVar2 = *(int64_t **)(lVar5 + 0x38);
      uVar6 = *(int64_t *)(lVar5 + 0x40) - (int64_t)plVar2 >> 4;
      if (uVar6 != 0) {
        do {
          if (*plVar2 == param_2) {
            FUN_1802ee610(param_1,lVar5);
            cVar4 = '\x01';
            break;
          }
          iVar1 = iVar1 + 1;
          plVar2 = plVar2 + 2;
        } while ((uint64_t)(int64_t)iVar1 < uVar6);
      }
    }
    lVar5 = *(int64_t *)(param_1 + 0xf0);
    iVar3 = iVar3 + 1;
    lVar7 = lVar7 + 8;
    if ((uint64_t)(*(int64_t *)(param_1 + 0xf8) - lVar5 >> 3) <= (uint64_t)(int64_t)iVar3) {
      return cVar4;
    }
  } while( true );
}



char FUN_18043eda6(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t unaff_RBX;
  int iVar4;
  int64_t unaff_RSI;
  char unaff_DIL;
  uint64_t uVar5;
  int64_t lVar6;
  
  iVar4 = 0;
  lVar6 = 0;
  do {
    if (unaff_DIL != '\0') {
      return unaff_DIL;
    }
    iVar2 = (**(code **)(**(int64_t **)(lVar6 + param_3) + 0x98))();
    if (iVar2 == 0) {
      iVar2 = 0;
      lVar1 = *(int64_t *)(lVar6 + *(int64_t *)(unaff_RSI + 0xf0));
      plVar3 = *(int64_t **)(lVar1 + 0x38);
      uVar5 = *(int64_t *)(lVar1 + 0x40) - (int64_t)plVar3 >> 4;
      if (uVar5 != 0) {
        do {
          if (*plVar3 == unaff_RBX) {
            FUN_1802ee610();
            unaff_DIL = '\x01';
            break;
          }
          iVar2 = iVar2 + 1;
          plVar3 = plVar3 + 2;
        } while ((uint64_t)(int64_t)iVar2 < uVar5);
      }
    }
    param_3 = *(int64_t *)(unaff_RSI + 0xf0);
    iVar4 = iVar4 + 1;
    lVar6 = lVar6 + 8;
    if ((uint64_t)(*(int64_t *)(unaff_RSI + 0xf8) - param_3 >> 3) <= (uint64_t)(int64_t)iVar4) {
      return unaff_DIL;
    }
  } while( true );
}



int8_t FUN_18043ee58(void)

{
  int8_t unaff_DIL;
  
  return unaff_DIL;
}



uint64_t FUN_18043ee70(int64_t param_1)

{
  char cVar1;
  float *pfVar2;
  int8_t auStack_28 [16];
  int8_t auStack_18 [16];
  
  if ((*(int64_t **)(param_1 + 0x270) == (int64_t *)0x0) ||
     (cVar1 = (**(code **)(**(int64_t **)(param_1 + 0x270) + 0x70))(), cVar1 == '\0')) {
    return 1;
  }
  pfVar2 = (float *)(**(code **)(**(int64_t **)(param_1 + 0x270) + 0xa0))
                              (*(int64_t **)(param_1 + 0x270),auStack_28);
  if ((*pfVar2 * *pfVar2 + pfVar2[1] * pfVar2[1] + pfVar2[2] * pfVar2[2] < 0.0025000002) &&
     (pfVar2 = (float *)(**(code **)(**(int64_t **)(param_1 + 0x270) + 0xb0))
                                  (*(int64_t **)(param_1 + 0x270),auStack_18),
     *pfVar2 * *pfVar2 + pfVar2[1] * pfVar2[1] + pfVar2[2] * pfVar2[2] < 0.0025000002)) {
    return 1;
  }
  return 0;
}



uint64_t * FUN_18043ef40(uint64_t *param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int8_t auStack_18 [16];
  
  plVar1 = *(int64_t **)(param_2 + 0x270);
  if (plVar1 != (int64_t *)0x0) {
    puVar3 = (uint64_t *)(**(code **)(*plVar1 + 0xa0))(plVar1,auStack_18);
    uVar2 = puVar3[1];
    *param_1 = *puVar3;
    param_1[1] = uVar2;
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}





// 函数: void FUN_18043ef90(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18043ef90(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  void *puVar2;
  uint64_t uVar3;
  void *puStack_30;
  void *puStack_28;
  
  uVar3 = 0xfffffffffffffffe;
  SystemCore_CacheManager(&puStack_30);
  pcVar1 = *(code **)(*(int64_t *)(param_1 + 0x288) + 0x10);
  puVar2 = &system_buffer_ptr;
  if (puStack_28 != (void *)0x0) {
    puVar2 = puStack_28;
  }
  (*pcVar1)((int64_t *)(param_1 + 0x288),puVar2,pcVar1,param_4,uVar3);
  puStack_30 = &system_data_buffer_ptr;
  if (puStack_28 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18043f010(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  uint64_t uVar2;
  void *puStack_30;
  int64_t lStack_28;
  int32_t uStack_20;
  uint64_t uStack_18;
  
  if (*(int64_t *)(param_1 + 0x268) == 0) {
    puStack_30 = &system_data_buffer_ptr;
    uStack_18 = 0;
    lStack_28 = 0;
    uStack_20 = 0;
    uVar1 = (**(code **)(*system_cache_buffer + 0x70))
                      (system_cache_buffer,&puStack_30,param_3,param_4,0xfffffffffffffffe);
    uVar2 = (uint64_t)uVar1;
    puStack_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    uVar2 = (**(code **)(*system_cache_buffer + 0x70))
                      (system_cache_buffer,*(int64_t *)(param_1 + 0x268) + 0x288);
  }
  return uVar2;
}





// 函数: void FUN_18043f0d0(uint64_t param_1,int64_t param_2,int64_t param_3)
void FUN_18043f0d0(uint64_t param_1,int64_t param_2,int64_t param_3)

{
  byte *pbVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  byte *pbVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int iVar8;
  int64_t *plVar9;
  int64_t lVar10;
  uint uVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  int8_t auStack_40 [40];
  
  plVar9 = (int64_t *)0x0;
  lVar3 = *(int64_t *)(param_2 + 0x200);
  uVar13 = *(int64_t *)(param_2 + 0x208) - lVar3 >> 3;
  plVar7 = plVar9;
  plVar12 = plVar9;
  if (uVar13 != 0) {
    do {
      lVar10 = *(int64_t *)(*(int64_t *)((int64_t)plVar12 + lVar3) + 0x10);
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(param_3 + lVar4) != '\0');
      iVar2 = *(int *)(lVar10 + 0x18);
      iVar8 = (int)lVar4;
      if (iVar2 == iVar8) {
        if (iVar2 != 0) {
          pbVar5 = *(byte **)(lVar10 + 0x10);
          lVar10 = param_3 - (int64_t)pbVar5;
          do {
            pbVar1 = pbVar5 + lVar10;
            iVar8 = (uint)*pbVar5 - (uint)*pbVar1;
            if (iVar8 != 0) break;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18043f16d:
        if (iVar8 == 0) {
          plVar9 = *(int64_t **)(lVar3 + (int64_t)(int)plVar7 * 8);
          if (plVar9 != (int64_t *)0x0) {
            (**(code **)(*plVar9 + 0x28))(plVar9);
            uVar6 = SystemCore_CacheManager(auStack_40,param_3);
            plVar7 = (int64_t *)FUN_1803543b0(param_1,uVar6,0,0);
            if (plVar7 != (int64_t *)0x0) {
              (**(code **)(*plVar7 + 0x28))(plVar7);
            }
            (**(code **)(*plVar7 + 0xf0))(plVar7,plVar9,0);
            FUN_180354170(plVar7);
            (**(code **)(*plVar7 + 0x38))(plVar7);
          }
          break;
        }
      }
      else if (iVar2 == 0) goto LAB_18043f16d;
      uVar11 = (int)plVar7 + 1;
      plVar7 = (int64_t *)(uint64_t)uVar11;
      plVar12 = plVar12 + 1;
    } while ((uint64_t)(int64_t)(int)uVar11 < uVar13);
  }
  if (plVar9 != (int64_t *)0x0) {
    (**(code **)(*plVar9 + 0x38))(plVar9);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



