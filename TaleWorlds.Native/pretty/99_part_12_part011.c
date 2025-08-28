#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part011.c - 12 个函数

// 函数: void FUN_1807d0928(void)
void FUN_1807d0928(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1807d0940(uint64_t *param_1,int8_t param_2,short param_3)

{
  int64_t *plVar1;
  int64_t *plVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  
  if (param_1 == (uint64_t *)0x0) {
    return 0x1f;
  }
  plVar6 = (int64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x58,&processed_var_9872_ptr,0x18,0,0,1);
  if (plVar6 == (int64_t *)0x0) {
    return 0x26;
  }
  *plVar6 = (int64_t)&processed_var_9792_ptr;
  plVar8 = plVar6 + 2;
  plVar6[3] = (int64_t)plVar8;
  *plVar8 = (int64_t)plVar8;
  plVar6[4] = 0;
  plVar6[7] = 0;
  plVar1 = plVar6 + 5;
  plVar6[6] = (int64_t)plVar1;
  *plVar1 = (int64_t)plVar1;
  plVar6[9] = 0;
  sVar3 = 0x2430;
  if (param_3 != 0) {
    sVar3 = param_3;
  }
  plVar6[1] = -1;
  *(short *)((int64_t)plVar6 + 0x52) = sVar3;
  plVar6[8] = 0;
  *(int8_t *)(plVar6 + 10) = param_2;
  iVar4 = FUN_1807aa7e0();
  if ((((iVar4 == 0) && (iVar4 = FUN_1807682e0(plVar6 + 8,0), iVar4 == 0)) &&
      (iVar4 = FUN_180768b70(plVar6 + 9), iVar4 == 0)) || (iVar4 == 0)) {
    *param_1 = plVar6;
    return 0;
  }
  iVar5 = (**(code **)(*plVar6 + 0x28))(plVar6);
  if (iVar5 != 0) {
    return iVar4;
  }
  *(int8_t *)(plVar6 + 10) = 0;
  iVar5 = FUN_1807d0fe0(plVar6);
  if (iVar5 != 0) {
    return iVar4;
  }
  if (plVar6[1] != -1) {
    FUN_1807ff260();
  }
  plVar7 = (int64_t *)*plVar8;
  while (plVar7 != plVar8) {
    plVar2 = (int64_t *)*plVar7;
    *(int64_t **)plVar7[1] = plVar2;
    *(int64_t *)(*plVar7 + 8) = plVar7[1];
    plVar7[1] = (int64_t)plVar7;
    *plVar7 = (int64_t)plVar7;
    iVar5 = FUN_18081bc90(plVar7);
    plVar7 = plVar2;
    if (iVar5 != 0) {
      return iVar4;
    }
  }
  plVar8 = (int64_t *)*plVar1;
  if (plVar8 != plVar1) {
    do {
      plVar7 = plVar8 + -1;
      if (plVar8 == (int64_t *)0x0) {
        plVar7 = (int64_t *)0x0;
      }
      plVar2 = plVar7 + 1;
      plVar8 = (int64_t *)*plVar2;
      *(int64_t **)plVar7[2] = plVar8;
      *(int64_t *)(*plVar2 + 8) = plVar7[2];
      plVar7[2] = (int64_t)plVar2;
      *plVar2 = (int64_t)plVar2;
      iVar5 = (**(code **)(*plVar7 + 0x10))();
      if (iVar5 != 0) {
        return iVar4;
      }
    } while (plVar8 != plVar1);
  }
  if (plVar6[8] != 0) {
    FUN_180768380(plVar6[8],0);
  }
  iVar5 = FUN_1807aab10();
  if (iVar5 != 0) {
    return iVar4;
  }
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar6,&processed_var_9872_ptr,0xeb,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1807d0978(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t *plVar1;
  int64_t *plVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  uint64_t *unaff_RBX;
  int64_t *plVar8;
  short unaff_BP;
  int8_t unaff_R15B;
  int8_t uStack0000000000000028;
  
  uStack0000000000000028 = 0;
  plVar6 = (int64_t *)SystemResourceManager(*(uint64_t *)(param_1 + 0x1a0),0x58,param_3,0x18,0);
  if (plVar6 == (int64_t *)0x0) {
    return 0x26;
  }
  *plVar6 = (int64_t)&processed_var_9792_ptr;
  plVar8 = plVar6 + 2;
  plVar6[3] = (int64_t)plVar8;
  *plVar8 = (int64_t)plVar8;
  plVar6[4] = 0;
  plVar6[7] = 0;
  plVar1 = plVar6 + 5;
  plVar6[6] = (int64_t)plVar1;
  *plVar1 = (int64_t)plVar1;
  plVar6[9] = 0;
  sVar3 = 0x2430;
  if (unaff_BP != 0) {
    sVar3 = unaff_BP;
  }
  plVar6[1] = -1;
  *(short *)((int64_t)plVar6 + 0x52) = sVar3;
  plVar6[8] = 0;
  *(int8_t *)(plVar6 + 10) = unaff_R15B;
  iVar4 = FUN_1807aa7e0();
  if ((((iVar4 == 0) && (iVar4 = FUN_1807682e0(plVar6 + 8,0), iVar4 == 0)) &&
      (iVar4 = FUN_180768b70(plVar6 + 9), iVar4 == 0)) || (iVar4 == 0)) {
    *unaff_RBX = plVar6;
    return 0;
  }
  iVar5 = (**(code **)(*plVar6 + 0x28))(plVar6);
  if (iVar5 != 0) {
    return iVar4;
  }
  *(int8_t *)(plVar6 + 10) = 0;
  iVar5 = FUN_1807d0fe0(plVar6);
  if (iVar5 != 0) {
    return iVar4;
  }
  if (plVar6[1] != -1) {
    FUN_1807ff260();
  }
  plVar7 = (int64_t *)*plVar8;
  while (plVar7 != plVar8) {
    plVar2 = (int64_t *)*plVar7;
    *(int64_t **)plVar7[1] = plVar2;
    *(int64_t *)(*plVar7 + 8) = plVar7[1];
    plVar7[1] = (int64_t)plVar7;
    *plVar7 = (int64_t)plVar7;
    iVar5 = FUN_18081bc90(plVar7);
    plVar7 = plVar2;
    if (iVar5 != 0) {
      return iVar4;
    }
  }
  plVar8 = (int64_t *)*plVar1;
  if (plVar8 != plVar1) {
    do {
      plVar7 = plVar8 + -1;
      if (plVar8 == (int64_t *)0x0) {
        plVar7 = (int64_t *)0x0;
      }
      plVar2 = plVar7 + 1;
      plVar8 = (int64_t *)*plVar2;
      *(int64_t **)plVar7[2] = plVar8;
      *(int64_t *)(*plVar2 + 8) = plVar7[2];
      plVar7[2] = (int64_t)plVar2;
      *plVar2 = (int64_t)plVar2;
      iVar5 = (**(code **)(*plVar7 + 0x10))();
      if (iVar5 != 0) {
        return iVar4;
      }
    } while (plVar8 != plVar1);
  }
  if (plVar6[8] != 0) {
    FUN_180768380(plVar6[8],0);
  }
  iVar5 = FUN_1807aab10();
  if (iVar5 != 0) {
    return iVar4;
  }
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar6,&processed_var_9872_ptr,0xeb,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1807d09b4(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int64_t *plVar6;
  uint64_t *unaff_RBX;
  int64_t *plVar7;
  short unaff_BP;
  int64_t *unaff_RDI;
  int64_t unaff_R12;
  int8_t unaff_R15B;
  
  *unaff_RDI = (int64_t)&processed_var_9792_ptr;
  plVar7 = unaff_RDI + 2;
  unaff_RDI[3] = (int64_t)plVar7;
  *plVar7 = (int64_t)plVar7;
  unaff_RDI[4] = unaff_R12;
  unaff_RDI[7] = unaff_R12;
  plVar1 = unaff_RDI + 5;
  unaff_RDI[6] = (int64_t)plVar1;
  *plVar1 = (int64_t)plVar1;
  unaff_RDI[9] = 0;
  sVar3 = 0x2430;
  if (unaff_BP != 0) {
    sVar3 = unaff_BP;
  }
  unaff_RDI[1] = -1;
  *(short *)((int64_t)unaff_RDI + 0x52) = sVar3;
  unaff_RDI[8] = unaff_R12;
  *(int8_t *)(unaff_RDI + 10) = unaff_R15B;
  iVar4 = FUN_1807aa7e0();
  if ((((iVar4 == 0) && (iVar4 = FUN_1807682e0(unaff_RDI + 8,0), iVar4 == 0)) &&
      (iVar4 = FUN_180768b70(unaff_RDI + 9), iVar4 == 0)) || (iVar4 == 0)) {
    *unaff_RBX = unaff_RDI;
    return 0;
  }
  iVar5 = (**(code **)(*unaff_RDI + 0x28))();
  if (iVar5 != 0) {
    return iVar4;
  }
  *(char *)(unaff_RDI + 10) = (char)unaff_R12;
  iVar5 = FUN_1807d0fe0();
  if (iVar5 != 0) {
    return iVar4;
  }
  if (unaff_RDI[1] != -1) {
    FUN_1807ff260();
  }
  plVar6 = (int64_t *)*plVar7;
  while (plVar6 != plVar7) {
    plVar2 = (int64_t *)*plVar6;
    *(int64_t **)plVar6[1] = plVar2;
    *(int64_t *)(*plVar6 + 8) = plVar6[1];
    plVar6[1] = (int64_t)plVar6;
    *plVar6 = (int64_t)plVar6;
    iVar5 = FUN_18081bc90(plVar6);
    plVar6 = plVar2;
    if (iVar5 != 0) {
      return iVar4;
    }
  }
  plVar7 = (int64_t *)*plVar1;
  if (plVar7 != plVar1) {
    do {
      plVar6 = plVar7 + -1;
      if (plVar7 == (int64_t *)0x0) {
        plVar6 = (int64_t *)0x0;
      }
      plVar2 = plVar6 + 1;
      plVar7 = (int64_t *)*plVar2;
      *(int64_t **)plVar6[2] = plVar7;
      *(int64_t *)(*plVar2 + 8) = plVar6[2];
      plVar6[2] = (int64_t)plVar2;
      *plVar2 = (int64_t)plVar2;
      iVar5 = (**(code **)(*plVar6 + 0x10))();
      if (iVar5 != 0) {
        return iVar4;
      }
    } while (plVar7 != plVar1);
  }
  if (unaff_RDI[8] != 0) {
    FUN_180768380(unaff_RDI[8],0);
  }
  iVar5 = FUN_1807aab10();
  if (iVar5 != 0) {
    return iVar4;
  }
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}






// 函数: void FUN_1807d0b5c(void)
void FUN_1807d0b5c(void)

{
  return;
}



uint64_t FUN_1807d0b72(void)

{
  uint64_t *unaff_RBX;
  uint64_t unaff_RDI;
  
  *unaff_RBX = unaff_RDI;
  return 0;
}



uint64_t FUN_1807d0b79(void)

{
  return 0x26;
}






// 函数: void FUN_1807d0b80(int64_t param_1)
void FUN_1807d0b80(int64_t param_1)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int iVar3;
  
  uVar1 = *(uint64_t *)(param_1 + 0x40);
  SystemMemoryAllocator(uVar1);
  puVar2 = *(uint64_t **)(param_1 + 0x10);
  while ((puVar2 != (uint64_t *)(param_1 + 0x10) && (iVar3 = FUN_18081b670(puVar2), iVar3 == 0)))
  {
    puVar2 = (uint64_t *)*puVar2;
  }
                    // WARNING: Subroutine does not return
  SystemMemoryManager(uVar1);
}



int64_t * FUN_1807d0c10(int64_t param_1,int64_t param_2)

{
  char cVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  
  plVar2 = *(int64_t **)(param_1 + 0x28);
  if (plVar2 != (int64_t *)(param_1 + 0x28)) {
    do {
      plVar3 = plVar2 + -1;
      if (plVar2 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
      }
      cVar1 = (**(code **)*plVar3)(plVar3);
      if ((cVar1 == *(char *)(param_2 + 8)) &&
         (cVar1 = (**(code **)(*plVar3 + 8))(plVar3), cVar1 != '\0')) {
        return plVar3;
      }
      plVar2 = (int64_t *)*plVar2;
    } while (plVar2 != (int64_t *)(param_1 + 0x28));
  }
  return (int64_t *)0x0;
}



int64_t * FUN_1807d0c90(int64_t param_1,char param_2)

{
  char cVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  
  plVar2 = *(int64_t **)(param_1 + 0x28);
  if (plVar2 != (int64_t *)(param_1 + 0x28)) {
    do {
      plVar3 = plVar2 + -1;
      if (plVar2 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
      }
      cVar1 = (**(code **)*plVar3)(plVar3);
      if (cVar1 == param_2) {
        return plVar3;
      }
      plVar2 = (int64_t *)*plVar2;
    } while (plVar2 != (int64_t *)(param_1 + 0x28));
  }
  return (int64_t *)0x0;
}



int32_t FUN_1807d0d20(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  
  if (param_2 != 0) {
    uVar2 = *(uint64_t *)(param_1 + 0x40);
    SystemMemoryAllocator(uVar2);
    plVar1 = (int64_t *)(param_2 + 8);
    *(uint64_t *)(param_2 + 0x10) = *(uint64_t *)(param_1 + 0x30);
    *plVar1 = param_1 + 0x28;
    *(int64_t **)(param_1 + 0x30) = plVar1;
    **(int64_t **)(param_2 + 0x10) = (int64_t)plVar1;
                    // WARNING: Subroutine does not return
    SystemMemoryManager(uVar2);
  }
  return 0x1f;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807d0db0(int64_t *param_1)
void FUN_1807d0db0(int64_t *param_1)

{
  int64_t *plVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  
  iVar2 = (**(code **)(*param_1 + 0x28))();
  if (iVar2 != 0) {
    return;
  }
  *(int8_t *)(param_1 + 10) = 0;
  iVar2 = FUN_1807d0fe0(param_1);
  if (iVar2 != 0) {
    return;
  }
  if (param_1[1] != -1) {
    FUN_1807ff260();
  }
  plVar4 = (int64_t *)param_1[2];
  while (plVar4 != param_1 + 2) {
    plVar3 = (int64_t *)*plVar4;
    *(int64_t **)plVar4[1] = plVar3;
    *(int64_t *)(*plVar4 + 8) = plVar4[1];
    plVar4[1] = (int64_t)plVar4;
    *plVar4 = (int64_t)plVar4;
    iVar2 = FUN_18081bc90(plVar4);
    plVar4 = plVar3;
    if (iVar2 != 0) {
      return;
    }
  }
  plVar4 = (int64_t *)param_1[5];
  if (plVar4 != param_1 + 5) {
    do {
      plVar3 = plVar4 + -1;
      if (plVar4 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
      }
      plVar1 = plVar3 + 1;
      plVar4 = (int64_t *)*plVar1;
      *(int64_t **)plVar3[2] = plVar4;
      *(int64_t *)(*plVar1 + 8) = plVar3[2];
      plVar3[2] = (int64_t)plVar1;
      *plVar1 = (int64_t)plVar1;
      iVar2 = (**(code **)(*plVar3 + 0x10))();
      if (iVar2 != 0) {
        return;
      }
    } while (plVar4 != param_1 + 5);
  }
  if (param_1[8] != 0) {
    FUN_180768380(param_1[8],0);
  }
  iVar2 = FUN_1807aab10();
  if (iVar2 != 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&processed_var_9872_ptr,0xeb,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807d0dde(int64_t param_1)
void FUN_1807d0dde(int64_t param_1)

{
  int64_t *plVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t unaff_RDI;
  
  if (param_1 != -1) {
    FUN_1807ff260();
  }
  plVar3 = *(int64_t **)(unaff_RDI + 0x10);
  while (plVar3 != (int64_t *)(unaff_RDI + 0x10)) {
    plVar1 = (int64_t *)*plVar3;
    *(int64_t **)plVar3[1] = plVar1;
    *(int64_t *)(*plVar3 + 8) = plVar3[1];
    plVar3[1] = (int64_t)plVar3;
    *plVar3 = (int64_t)plVar3;
    iVar2 = FUN_18081bc90(plVar3);
    plVar3 = plVar1;
    if (iVar2 != 0) {
      return;
    }
  }
  lVar4 = *(int64_t *)(unaff_RDI + 0x28);
  if (lVar4 != unaff_RDI + 0x28) {
    do {
      plVar3 = (int64_t *)(lVar4 + -8);
      if (lVar4 == 0) {
        plVar3 = (int64_t *)0x0;
      }
      plVar1 = plVar3 + 1;
      lVar4 = *plVar1;
      *(int64_t *)plVar3[2] = lVar4;
      *(int64_t *)(*plVar1 + 8) = plVar3[2];
      plVar3[2] = (int64_t)plVar1;
      *plVar1 = (int64_t)plVar1;
      iVar2 = (**(code **)(*plVar3 + 0x10))();
      if (iVar2 != 0) {
        return;
      }
    } while (lVar4 != unaff_RDI + 0x28);
  }
  if (*(int64_t *)(unaff_RDI + 0x40) != 0) {
    FUN_180768380(*(int64_t *)(unaff_RDI + 0x40),0);
  }
  iVar2 = FUN_1807aab10();
  if (iVar2 != 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807d0e3c(void)
void FUN_1807d0e3c(void)

{
  int64_t *plVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  
  if (unaff_RBX != unaff_RSI) {
    do {
      plVar3 = (int64_t *)(unaff_RBX + -8);
      if (unaff_RBX == 0) {
        plVar3 = (int64_t *)0x0;
      }
      plVar1 = plVar3 + 1;
      unaff_RBX = *plVar1;
      *(int64_t *)plVar3[2] = unaff_RBX;
      *(int64_t *)(*plVar1 + 8) = plVar3[2];
      plVar3[2] = (int64_t)plVar1;
      *plVar1 = (int64_t)plVar1;
      iVar2 = (**(code **)(*plVar3 + 0x10))();
      if (iVar2 != 0) {
        return;
      }
    } while (unaff_RBX != unaff_RSI);
  }
  if (*(int64_t *)(unaff_RDI + 0x40) != 0) {
    FUN_180768380(*(int64_t *)(unaff_RDI + 0x40),0);
  }
  iVar2 = FUN_1807aab10();
  if (iVar2 != 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}






// 函数: void FUN_1807d0ed2(void)
void FUN_1807d0ed2(void)

{
  return;
}






// 函数: void FUN_1807d0edc(void)
void FUN_1807d0edc(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807d0ef0(int64_t param_1,int8_t param_2,int8_t param_3,int32_t param_4,
void FUN_1807d0ef0(int64_t param_1,int8_t param_2,int8_t param_3,int32_t param_4,
                  int64_t param_5)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int iVar3;
  int8_t auStack_78 [32];
  uint64_t uStack_58;
  int32_t uStack_50;
  int8_t uStack_4c;
  int8_t uStack_4b;
  int32_t uStack_4a;
  uint64_t uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_78;
  uStack_58 = 0x12;
  uStack_50 = 0;
  uStack_4c = param_2;
  uStack_4b = param_3;
  uStack_4a = param_4;
  if (param_5 != 0) {
    FUN_18081c420(param_5,&uStack_58);
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_40 ^ (uint64_t)auStack_78);
  }
  uVar1 = *(uint64_t *)(param_1 + 0x40);
  SystemMemoryAllocator(uVar1);
  puVar2 = *(uint64_t **)(param_1 + 0x10);
  while( true ) {
    if (puVar2 == (uint64_t *)(param_1 + 0x10)) {
                    // WARNING: Subroutine does not return
      SystemMemoryManager(uVar1);
    }
    iVar3 = FUN_18081c420(puVar2,&uStack_58);
    if ((iVar3 != 0) || (iVar3 = FUN_18081bd90(puVar2,param_2,param_3,param_4), iVar3 != 0)) break;
    puVar2 = (uint64_t *)*puVar2;
  }
                    // WARNING: Subroutine does not return
  SystemMemoryManager(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807d0fe0(int64_t param_1)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  char cStackX_10;
  int8_t uStackX_11;
  int16_t uStackX_12;
  int32_t uStackX_14;
  int aiStackX_18 [2];
  int64_t *plStackX_20;
  int64_t lStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  
  plVar9 = (int64_t *)0x0;
  if (*(char *)(param_1 + 0x50) != '\0') {
    if (*(int64_t *)(param_1 + 8) == -1) {
      cStackX_10 = '\0';
      uStackX_11 = 0;
      uStackX_12 = 0;
      uVar7 = FUN_180768b70(&cStackX_10);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      if (CONCAT22(uStackX_12,CONCAT11(uStackX_11,cStackX_10)) <= *(uint *)(param_1 + 0x4c)) {
        return 0;
      }
      uVar7 = FUN_1807ff550(*(int16_t *)(param_1 + 0x52),1,param_1 + 8);
      if ((int)uVar7 == 0x2b) {
        *(int *)(param_1 + 0x4c) = CONCAT22(uStackX_12,CONCAT11(uStackX_11,cStackX_10)) + 5000;
        return 0;
      }
      if ((int)uVar7 != 0) {
        return uVar7;
      }
    }
    plStackX_20 = (int64_t *)0x0;
    iVar5 = FUN_1807ff1d0(*(uint64_t *)(param_1 + 8),0,&plStackX_20);
    if (iVar5 == 0) {
      lVar8 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x570,&processed_var_9872_ptr,0x112,0,0,1
                           );
      if ((lVar8 != 0) && (plVar9 = (int64_t *)FUN_18081b150(lVar8), plVar9 != (int64_t *)0x0)) {
        uVar7 = FUN_18081b390(plVar9,plStackX_20,param_1);
        if ((int)uVar7 == 0) {
          SystemMemoryAllocator(*(uint64_t *)(param_1 + 0x40));
          plVar9[1] = *(int64_t *)(param_1 + 0x18);
          *plVar9 = param_1 + 0x10;
          *(int64_t **)(param_1 + 0x18) = plVar9;
          *(int64_t **)plVar9[1] = plVar9;
                    // WARNING: Subroutine does not return
          SystemMemoryManager(*(uint64_t *)(param_1 + 0x40));
        }
        return uVar7;
      }
      return 0x26;
    }
    if (iVar5 != 0x2d) {
      FUN_1807ff260(*(uint64_t *)(param_1 + 8));
      *(uint64_t *)(param_1 + 8) = 0xffffffffffffffff;
    }
  }
  aiStackX_18[0] = 0;
  uVar7 = FUN_180768b70(aiStackX_18);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  aiStackX_18[0] = aiStackX_18[0] - *(int *)(param_1 + 0x48);
  plVar1 = (int64_t *)(param_1 + 0x28);
  for (plStackX_20 = *(int64_t **)(param_1 + 0x28); plStackX_20 != plVar1;
      plStackX_20 = (int64_t *)*plStackX_20) {
    cStackX_10 = '\0';
    uStackX_11 = 0;
    plVar11 = plStackX_20 + -1;
    if (plStackX_20 == (int64_t *)0x0) {
      plVar11 = plVar9;
    }
    uVar7 = (**(code **)(*plVar11 + 0x18))(plVar11,&cStackX_10);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    if (cStackX_10 != -1) {
      plVar1 = (int64_t *)(param_1 + 0x10);
      uVar2 = *(uint64_t *)(param_1 + 0x40);
      SystemMemoryAllocator(uVar2);
      plVar11 = (int64_t *)*plVar1;
      if (plVar11 != plVar1) {
        do {
          cVar4 = func_0x00018081b540(plVar11,&cStackX_10);
          if (cVar4 != '\0') {
            plVar9 = (int64_t *)(uint64_t)((int)plVar9 + 1);
          }
          plVar11 = (int64_t *)*plVar11;
        } while (plVar11 != plVar1);
        if ((int)plVar9 != 0) {
          for (plVar9 = (int64_t *)*plVar1; plVar9 != plVar1; plVar9 = (int64_t *)*plVar9) {
            FUN_18081b580(plVar9,&cStackX_10);
          }
                    // WARNING: Subroutine does not return
          SystemMemoryManager(uVar2);
        }
      }
                    // WARNING: Subroutine does not return
      SystemMemoryManager(uVar2);
    }
    cStackX_10 = -1;
  }
  SystemMemoryAllocator(*(uint64_t *)(param_1 + 0x40));
  plVar9 = (int64_t *)(param_1 + 0x10);
  plVar11 = *(int64_t **)(param_1 + 0x10);
  plStackX_20 = plVar9;
  if (*(int64_t **)(param_1 + 0x10) == plVar9) {
LAB_1807d1460:
                    // WARNING: Subroutine does not return
    SystemMemoryManager(*(uint64_t *)(param_1 + 0x40));
  }
LAB_1807d1310:
  plVar3 = (int64_t *)*plVar11;
  uVar7 = func_0x000180069ee0(plVar11);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((char)plVar11[0x5a] == (char)uVar7) {
    do {
      uStack_58 = 0;
      uStack_50 = 0;
      lStack_68 = 0;
      uStack_60 = 0;
      uVar6 = FUN_18081b8a0(plVar11,&cStackX_10,&lStack_68);
      if (uVar6 != 0) {
FUN_1807d1486:
        if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
          SystemMemoryManager();
        }
        return (uint64_t)uVar6;
      }
      lVar8 = CONCAT44(uStackX_14,CONCAT22(uStackX_12,CONCAT11(uStackX_11,cStackX_10)));
      if (lVar8 == 0) goto LAB_1807d1446;
      plVar12 = (int64_t *)*plVar1;
      if (plVar12 != plVar1) {
        do {
          plVar9 = plVar12 + -1;
          if (plVar12 == (int64_t *)0x0) {
            plVar9 = (int64_t *)0x0;
          }
          cVar4 = (**(code **)*plVar9)(plVar9);
          if (cVar4 == *(char *)(lVar8 + 8)) {
            (**(code **)(*plVar9 + 0x28))
                      (plVar9,CONCAT44(uStackX_14,
                                       CONCAT22(uStackX_12,CONCAT11(uStackX_11,cStackX_10))),plVar11
                      );
          }
          plVar12 = (int64_t *)*plVar12;
          lVar8 = CONCAT44(uStackX_14,CONCAT22(uStackX_12,CONCAT11(uStackX_11,cStackX_10)));
          plVar9 = plStackX_20;
        } while (plVar12 != plVar1);
      }
      uVar6 = FUN_18081b330(plVar11,lVar8,&lStack_68);
      if (uVar6 != 0) goto FUN_1807d1486;
      if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
        SystemMemoryManager();
      }
    } while( true );
  }
  for (plVar12 = (int64_t *)*plVar1; plVar12 != plVar1; plVar12 = (int64_t *)*plVar12) {
    plVar10 = plVar12 + -1;
    if (plVar12 == (int64_t *)0x0) {
      plVar10 = (int64_t *)0x0;
    }
    uVar7 = (**(code **)(*plVar10 + 0x48))(plVar10,plVar11);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
  }
  *(int64_t *)plVar11[1] = *plVar11;
  *(int64_t *)(*plVar11 + 8) = plVar11[1];
  plVar11[1] = (int64_t)plVar11;
  *plVar11 = (int64_t)plVar11;
  uVar7 = FUN_18081bc90(plVar11);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  goto LAB_1807d1454;
LAB_1807d1446:
  if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager();
  }
LAB_1807d1454:
  plVar11 = plVar3;
  if (plVar3 == plVar9) goto LAB_1807d1460;
  goto LAB_1807d1310;
}



uint64_t FUN_1807d1165(void)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  char cVar4;
  uint uVar5;
  uint64_t *in_RAX;
  uint64_t uVar6;
  int64_t *plVar7;
  uint64_t *puVar8;
  int64_t unaff_RBP;
  int64_t lVar9;
  int64_t *unaff_RDI;
  int64_t *plVar10;
  int64_t unaff_R13;
  int64_t *plVar11;
  
  puVar1 = (uint64_t *)(unaff_R13 + 0x28);
  *(uint64_t **)(unaff_RBP + 0x50) = in_RAX;
  if (in_RAX != puVar1) {
    do {
      *(int16_t *)(unaff_RBP + 0x40) = 0;
      plVar10 = in_RAX + -1;
      if (in_RAX == (uint64_t *)0x0) {
        plVar10 = unaff_RDI;
      }
      uVar6 = (**(code **)(*plVar10 + 0x18))(plVar10,unaff_RBP + 0x40);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      if (*(char *)(unaff_RBP + 0x40) != -1) {
        plVar10 = (int64_t *)(unaff_R13 + 0x10);
        uVar2 = *(uint64_t *)(unaff_R13 + 0x40);
        uVar6 = (uint64_t)unaff_RDI & 0xffffffff;
        SystemMemoryAllocator(uVar2);
        plVar11 = (int64_t *)*plVar10;
        if (plVar11 != plVar10) {
          do {
            cVar4 = func_0x00018081b540(plVar11,unaff_RBP + 0x40);
            if (cVar4 != '\0') {
              uVar6 = (uint64_t)((int)uVar6 + 1);
            }
            plVar11 = (int64_t *)*plVar11;
          } while (plVar11 != plVar10);
          if ((int)uVar6 != 0) {
            for (plVar11 = (int64_t *)*plVar10; plVar11 != plVar10; plVar11 = (int64_t *)*plVar11)
            {
              FUN_18081b580(plVar11,unaff_RBP + 0x40);
            }
                    // WARNING: Subroutine does not return
            SystemMemoryManager(uVar2);
          }
        }
                    // WARNING: Subroutine does not return
        SystemMemoryManager(uVar2);
      }
      in_RAX = (uint64_t *)**(int64_t **)(unaff_RBP + 0x50);
      *(uint64_t **)(unaff_RBP + 0x50) = in_RAX;
    } while (in_RAX != puVar1);
  }
  SystemMemoryAllocator(*(uint64_t *)(unaff_R13 + 0x40));
  plVar10 = *(int64_t **)(unaff_R13 + 0x10);
  plVar11 = (int64_t *)(unaff_R13 + 0x10);
  *(int64_t **)(unaff_RBP + 0x50) = plVar11;
  if (plVar10 == plVar11) {
LAB_1807d1460:
                    // WARNING: Subroutine does not return
    SystemMemoryManager(*(uint64_t *)(*(int64_t *)(unaff_RBP + 0x38) + 0x40));
  }
LAB_1807d1310:
  plVar3 = (int64_t *)*plVar10;
  uVar6 = func_0x000180069ee0(plVar10);
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  if ((char)plVar10[0x5a] == (char)uVar6) {
    do {
      *(int64_t **)(unaff_RBP + -0x28) = unaff_RDI;
      *(uint64_t *)(unaff_RBP + -0x20) = 0;
      *(uint64_t *)(unaff_RBP + -0x38) = 0;
      *(uint64_t *)(unaff_RBP + -0x30) = 0;
      uVar5 = FUN_18081b8a0(plVar10,unaff_RBP + 0x40,unaff_RBP + -0x38);
      if (uVar5 != 0) {
FUN_1807d1486:
        if (*(int64_t *)(unaff_RBP + -0x38) != 0) {
                    // WARNING: Subroutine does not return
          SystemMemoryManager();
        }
        return (uint64_t)uVar5;
      }
      lVar9 = *(int64_t *)(unaff_RBP + 0x40);
      if (lVar9 == 0) goto LAB_1807d1446;
      puVar8 = (uint64_t *)*puVar1;
      if (puVar8 != puVar1) {
        do {
          plVar11 = puVar8 + -1;
          if (puVar8 == (uint64_t *)0x0) {
            plVar11 = (int64_t *)0x0;
          }
          cVar4 = (**(code **)*plVar11)(plVar11);
          if (cVar4 == *(char *)(lVar9 + 8)) {
            (**(code **)(*plVar11 + 0x28))(plVar11,*(uint64_t *)(unaff_RBP + 0x40),plVar10);
          }
          puVar8 = (uint64_t *)*puVar8;
          lVar9 = *(int64_t *)(unaff_RBP + 0x40);
        } while (puVar8 != puVar1);
        plVar11 = *(int64_t **)(unaff_RBP + 0x50);
        unaff_RDI = (int64_t *)0x0;
      }
      uVar5 = FUN_18081b330(plVar10,lVar9,unaff_RBP + -0x38);
      if (uVar5 != 0) goto FUN_1807d1486;
      if (*(int64_t *)(unaff_RBP + -0x38) != 0) {
                    // WARNING: Subroutine does not return
        SystemMemoryManager();
      }
    } while( true );
  }
  for (puVar8 = (uint64_t *)*puVar1; puVar8 != puVar1; puVar8 = (uint64_t *)*puVar8) {
    plVar7 = puVar8 + -1;
    if (puVar8 == (uint64_t *)0x0) {
      plVar7 = unaff_RDI;
    }
    uVar6 = (**(code **)(*plVar7 + 0x48))(plVar7,plVar10);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
  }
  *(int64_t *)plVar10[1] = *plVar10;
  *(int64_t *)(*plVar10 + 8) = plVar10[1];
  plVar10[1] = (int64_t)plVar10;
  *plVar10 = (int64_t)plVar10;
  uVar6 = FUN_18081bc90(plVar10);
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  goto LAB_1807d1454;
LAB_1807d1446:
  if (*(int64_t *)(unaff_RBP + -0x38) != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager();
  }
LAB_1807d1454:
  plVar10 = plVar3;
  if (plVar3 == plVar11) goto LAB_1807d1460;
  goto LAB_1807d1310;
}



uint64_t FUN_1807d129d(void)

{
  return 0x26;
}






// 函数: void FUN_1807d12ce(void)
void FUN_1807d12ce(void)

{
                    // WARNING: Subroutine does not return
  SystemMemoryManager();
}






// 函数: void FUN_1807d1479(void)
void FUN_1807d1479(void)

{
  return;
}



int32_t FUN_1807d1486(void)

{
  int32_t unaff_EBX;
  int64_t unaff_RBP;
  
  if (*(int64_t *)(unaff_RBP + -0x38) != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager();
  }
  return unaff_EBX;
}



uint64_t FUN_1807d14a0(int64_t param_1,int64_t param_2,int64_t param_3)

{
  uint64_t *puVar1;
  int iVar2;
  uint64_t uVar3;
  int aiStackX_20 [2];
  
  aiStackX_20[0] = 0;
  uVar3 = FUN_180768b70(aiStackX_20);
  if ((int)uVar3 == 0) {
    *(int *)(param_2 + 4) = aiStackX_20[0] - *(int *)(param_1 + 0x48);
    if (param_3 == 0) {
      uVar3 = *(uint64_t *)(param_1 + 0x40);
      SystemMemoryAllocator(uVar3);
      puVar1 = *(uint64_t **)(param_1 + 0x10);
      while( true ) {
        if (puVar1 == (uint64_t *)(param_1 + 0x10)) {
                    // WARNING: Subroutine does not return
          SystemMemoryManager(uVar3);
        }
        iVar2 = FUN_18081c420(puVar1,param_2);
        if (iVar2 != 0) break;
        puVar1 = (uint64_t *)*puVar1;
      }
                    // WARNING: Subroutine does not return
      SystemMemoryManager(uVar3);
    }
    uVar3 = FUN_18081c420(param_3,param_2);
    if ((int)uVar3 == 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}



uint64_t FUN_1807d14ce(void)

{
  uint64_t *puVar1;
  int32_t in_EAX;
  int iVar2;
  uint64_t uVar3;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  
  *(int32_t *)(unaff_RBP + 4) = in_EAX;
  if (unaff_RBX != 0) {
    uVar3 = FUN_18081c420();
    if ((int)uVar3 == 0) {
      uVar3 = 0;
    }
    return uVar3;
  }
  uVar3 = *(uint64_t *)(unaff_RDI + 0x40);
  SystemMemoryAllocator(uVar3);
  puVar1 = *(uint64_t **)(unaff_RDI + 0x10);
  while( true ) {
    if (puVar1 == (uint64_t *)(unaff_RDI + 0x10)) {
                    // WARNING: Subroutine does not return
      SystemMemoryManager(uVar3);
    }
    iVar2 = FUN_18081c420(puVar1);
    if (iVar2 != 0) break;
    puVar1 = (uint64_t *)*puVar1;
  }
                    // WARNING: Subroutine does not return
  SystemMemoryManager(uVar3);
}






// 函数: void FUN_1807d153d(void)
void FUN_1807d153d(void)

{
  return;
}






