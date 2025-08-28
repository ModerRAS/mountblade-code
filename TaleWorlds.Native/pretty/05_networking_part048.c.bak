#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 05_networking_part048.c - 4 个函数

// 函数: void FUN_180866c90(int64_t param_1)
void FUN_180866c90(int64_t param_1)

{
  int64_t *plVar1;
  int iVar2;
  
  iVar2 = FUN_180866d00(param_1,1,0,1);
  if (iVar2 == 0) {
    plVar1 = (int64_t *)(param_1 + 8);
    **(int64_t **)(param_1 + 0x10) = *plVar1;
    *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(param_1 + 0x10);
    *(int64_t **)(param_1 + 0x10) = plVar1;
    *plVar1 = (int64_t)plVar1;
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&unknown_var_3024_ptr,0x1a4,1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180866d00(int64_t param_1,int param_2,char param_3,char param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  
  iVar4 = *(int *)(param_1 + 0x38);
  plVar7 = (int64_t *)0x0;
  lVar1 = *(int64_t *)(param_1 + 0x48);
  *(int32_t *)(param_1 + 0x38) = 0;
  *(int *)(param_1 + 0x6c) = param_2;
  if (iVar4 == 2) {
    plVar6 = (int64_t *)(*(int64_t *)(param_1 + 0x50) + -8);
    if (*(int64_t *)(param_1 + 0x50) == 0) {
      plVar6 = plVar7;
    }
    plVar2 = plVar7;
    if (plVar6 != (int64_t *)0x0) {
      plVar2 = plVar6 + 1;
    }
    while (plVar2 != (int64_t *)(param_1 + 0x50)) {
      plVar6 = plVar2 + -1;
      if (plVar2 == (int64_t *)0x0) {
        plVar6 = plVar7;
      }
      uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,lVar1);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if (plVar2 == (int64_t *)(param_1 + 0x50)) break;
      plVar6 = (int64_t *)(*plVar2 + -8);
      if (*plVar2 == 0) {
        plVar6 = plVar7;
      }
      plVar2 = plVar7;
      if (plVar6 != (int64_t *)0x0) {
        plVar2 = plVar6 + 1;
      }
    }
  }
  else if (1 < param_2 - 1U) {
    plVar6 = (int64_t *)(*(int64_t *)(param_1 + 0x50) + -8);
    if (*(int64_t *)(param_1 + 0x50) == 0) {
      plVar6 = plVar7;
    }
    plVar2 = plVar7;
    if (plVar6 != (int64_t *)0x0) {
      plVar2 = plVar6 + 1;
    }
    while (plVar2 != (int64_t *)(param_1 + 0x50)) {
      plVar6 = plVar2 + -1;
      if (plVar2 == (int64_t *)0x0) {
        plVar6 = plVar7;
      }
      uVar5 = (**(code **)(*plVar6 + 8))(plVar6,lVar1);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if (plVar2 == (int64_t *)(param_1 + 0x50)) break;
      plVar6 = (int64_t *)(*plVar2 + -8);
      if (*plVar2 == 0) {
        plVar6 = plVar7;
      }
      plVar2 = plVar7;
      if (plVar6 != (int64_t *)0x0) {
        plVar2 = plVar6 + 1;
      }
    }
  }
  if (0 < *(int *)(param_1 + 0x30)) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),**(uint64_t **)(param_1 + 0x28),
                  &unknown_var_3024_ptr,0x196,1);
  }
  FUN_180865ec0(param_1 + 0x28);
  *(int32_t *)(param_1 + 0x68) = 0;
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(int32_t *)(param_1 + 0x70) = 0;
  *(int32_t *)(param_1 + 0x40) = 1;
  *(int8_t *)(param_1 + 200) = 0;
  if (param_4 != '\0') {
    *(int32_t *)(param_1 + 0x78) = 0;
    *(int32_t *)(param_1 + 0x80) = 0;
    FUN_180840270(param_1 + 0x88);
  }
  if (param_3 != '\0') {
    cVar3 = (**(code **)(**(int64_t **)(param_1 + 0x20) + 0x18))();
    if (cVar3 == '\0') {
      uVar5 = (**(code **)(**(int64_t **)(param_1 + 0x20) + 0x28))();
      iVar4 = (int)uVar5;
    }
    else {
      if (lVar1 == 0) {
        return 0;
      }
      uVar5 = (**(code **)(**(int64_t **)(param_1 + 0x20) + 0x30))
                        (*(int64_t **)(param_1 + 0x20),lVar1);
      iVar4 = (int)uVar5;
    }
    if (iVar4 != 0) {
      return uVar5;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180866e25(void)

{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  int unaff_EBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  char unaff_R12B;
  int32_t uVar4;
  int64_t unaff_R13;
  char unaff_R15B;
  
  if (unaff_EBX < *(int *)(unaff_RDI + 0x30)) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                  *(uint64_t *)(unaff_R13 + *(int64_t *)(unaff_RDI + 0x28)),&unknown_var_3024_ptr,0x196,
                  1);
  }
  FUN_180865ec0(unaff_RDI + 0x28);
  uVar4 = (int32_t)unaff_R13;
  *(int32_t *)(unaff_RDI + 0x68) = uVar4;
  *(int64_t *)(unaff_RDI + 0x48) = unaff_R13;
  *(int32_t *)(unaff_RDI + 0x70) = uVar4;
  *(int32_t *)(unaff_RDI + 0x40) = 1;
  *(char *)(unaff_RDI + 200) = (char)unaff_R13;
  if (unaff_R12B != '\0') {
    *(int32_t *)(unaff_RDI + 0x78) = uVar4;
    *(int32_t *)(unaff_RDI + 0x80) = uVar4;
    FUN_180840270(unaff_RDI + 0x88);
  }
  if (unaff_R15B != '\0') {
    cVar1 = (**(code **)(**(int64_t **)(unaff_RDI + 0x20) + 0x18))();
    if (cVar1 == '\0') {
      uVar3 = (**(code **)(**(int64_t **)(unaff_RDI + 0x20) + 0x28))();
      iVar2 = (int)uVar3;
    }
    else {
      if (unaff_RBP == 0) {
        return 0;
      }
      uVar3 = (**(code **)(**(int64_t **)(unaff_RDI + 0x20) + 0x30))();
      iVar2 = (int)uVar3;
    }
    if (iVar2 != 0) {
      return uVar3;
    }
  }
  return 0;
}



uint64_t FUN_180866e97(void)

{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int32_t unaff_R13D;
  char unaff_R15B;
  
  *(int32_t *)(unaff_RDI + 0x78) = unaff_R13D;
  *(int32_t *)(unaff_RDI + 0x80) = unaff_R13D;
  FUN_180840270(unaff_RDI + 0x88);
  if (unaff_R15B != '\0') {
    cVar1 = (**(code **)(**(int64_t **)(unaff_RDI + 0x20) + 0x18))();
    if (cVar1 == '\0') {
      uVar3 = (**(code **)(**(int64_t **)(unaff_RDI + 0x20) + 0x28))();
      iVar2 = (int)uVar3;
    }
    else {
      if (unaff_RBP == 0) {
        return 0;
      }
      uVar3 = (**(code **)(**(int64_t **)(unaff_RDI + 0x20) + 0x30))();
      iVar2 = (int)uVar3;
    }
    if (iVar2 != 0) {
      return uVar3;
    }
  }
  return 0;
}



int FUN_180866f50(uint64_t param_1,int32_t *param_2,uint64_t *param_3)

{
  int iVar1;
  int8_t auStack_a8 [96];
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int8_t auStack_18 [16];
  
  FUN_180865a20(auStack_a8,0);
  uStack_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  iVar1 = FUN_1808661e0(auStack_18,*param_3,*(int32_t *)(param_3 + 1));
  if (iVar1 == 0) {
    iVar1 = FUN_180866fe0(param_1,auStack_a8,3);
  }
  FUN_180840100(auStack_18);
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180866fe0(uint64_t *param_1,int64_t *param_2,char param_3)

{
  int64_t lVar1;
  int8_t uVar2;
  uint uVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  void *puStack_58;
  void **ppuStack_50;
  int *piStack_48;
  uint64_t uStack_40;
  void *puStack_38;
  int *piStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  
  if ((param_3 != '\0') || (*(char *)((int64_t)param_1 + 0x7c) == '\0')) {
    if (*(int *)(param_1 + 0xd) == 0) {
      return 0x1c;
    }
    plVar4 = (int64_t *)(**(code **)(*param_2 + 0x28))(param_2);
    if (plVar4 != (int64_t *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4);
      piStack_48 = (int *)SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar3 + 0x10,
                                        &unknown_var_3024_ptr,0x2af,0,0,1);
      if (piStack_48 == (int *)0x0) {
        return 0x26;
      }
      lVar1 = plVar4[4];
      piStack_48[0] = 0;
      piStack_48[1] = 0;
      piStack_48[2] = 0;
      piStack_48[3] = 0;
      *piStack_48 = uVar3 + 0x10;
      uVar2 = (**(code **)*param_1)(param_1);
      *(char *)((int64_t)piStack_48 + 9) = param_3;
      *(int8_t *)(piStack_48 + 2) = uVar2;
      *(int8_t *)((int64_t)piStack_48 + 10) = 0;
      piStack_48[3] = (int)lVar1;
      puStack_38 = &unknown_var_2888_ptr;
      piStack_30 = piStack_48 + 4;
      puStack_58 = &unknown_var_9416_ptr;
      ppuStack_50 = &puStack_38;
      uStack_20 = 0;
      uStack_28 = (uint64_t)uVar3;
      uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,&puStack_58);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if (uStack_20 != uStack_28) {
        return 0x1c;
      }
      uStack_40 = 0;
      uVar5 = FUN_180866820(param_1 + 5,&piStack_48);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
  }
  return 0;
}



uint64_t FUN_180867092(void)

{
  int64_t lVar1;
  int8_t uVar2;
  uint64_t in_RAX;
  uint64_t uVar3;
  int8_t unaff_BPL;
  uint64_t *unaff_RSI;
  uint64_t *unaff_RDI;
  int32_t unaff_R12D;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  uint64_t in_stack_00000050;
  
  lVar1 = unaff_R14[4];
  *unaff_RSI = in_RAX;
  unaff_RSI[1] = in_RAX;
  *(int32_t *)unaff_RSI = unaff_R12D;
  uVar2 = (**(code **)*unaff_RDI)();
  *(int8_t *)((int64_t)unaff_RSI + 9) = unaff_BPL;
  *(int8_t *)(unaff_RSI + 1) = uVar2;
  *(int8_t *)((int64_t)unaff_RSI + 10) = 0;
  *(int *)((int64_t)unaff_RSI + 0xc) = (int)lVar1;
  uVar3 = (**(code **)(*unaff_R14 + 0x10))();
  if ((int)uVar3 == 0) {
    if (unaff_R15 == 0) {
      uVar3 = FUN_180866820(unaff_RDI + 5,&stack0x00000050);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0x1c;
    }
  }
  return uVar3;
}



uint64_t FUN_180867111(void)

{
  uint64_t uVar1;
  int64_t unaff_RDI;
  uint64_t uStack0000000000000058;
  int64_t in_stack_00000070;
  int64_t in_stack_00000078;
  
  if (in_stack_00000078 == in_stack_00000070) {
    uStack0000000000000058 = 0;
    uVar1 = FUN_180866820(unaff_RDI + 0x28,&stack0x00000050);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0x1c;
  }
  return uVar1;
}



uint64_t FUN_180867170(int64_t param_1,int64_t *param_2)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  
  if (((*(int64_t *)(param_1 + 0xa8) != *param_2) || (*(int64_t *)(param_1 + 0xb0) != param_2[1]))
     && (((int)*param_2 != 0 ||
         (((*(int *)((int64_t)param_2 + 4) != 0 || ((int)param_2[1] != 0)) ||
          (*(int *)((int64_t)param_2 + 0xc) != 0)))))) {
    lVar3 = *param_2;
    iVar1 = *(int *)((int64_t)param_2 + 4);
    lVar4 = param_2[1];
    iVar2 = *(int *)((int64_t)param_2 + 0xc);
    *(int *)(param_1 + 0xa8) = (int)lVar3;
    *(int *)(param_1 + 0xac) = iVar1;
    *(int *)(param_1 + 0xb0) = (int)lVar4;
    *(int *)(param_1 + 0xb4) = iVar2;
    if (((*(int *)(param_1 + 0x38) == 2) &&
        (*(int64_t *)(param_1 + 0xa8) == *(int64_t *)(param_1 + 0xb8))) &&
       (*(int64_t *)(param_1 + 0xb0) == *(int64_t *)(param_1 + 0xc0))) {
      *(int8_t *)(param_1 + 200) = 1;
      uVar5 = FUN_180865e20((int)lVar3,*(uint64_t *)(param_1 + 0x48));
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
  }
  return 0;
}



uint64_t FUN_180867280(int64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  
  *(uint64_t *)(param_1 + 0x48) = param_2;
  *(int32_t *)(param_1 + 0x38) = 2;
  plVar4 = (int64_t *)0x0;
  *(int32_t *)(param_1 + 0x6c) = 0;
  uVar2 = (**(code **)(**(int64_t **)(param_1 + 0x20) + 0x10))
                    (*(int64_t **)(param_1 + 0x20),6,0,0xffffffff,param_2);
  if (((int)uVar2 == 0) &&
     (uVar2 = (**(code **)(**(int64_t **)(param_1 + 0x20) + 0x10))
                        (*(int64_t **)(param_1 + 0x20),6,2,0x32,*(uint64_t *)(param_1 + 0x48)),
     (int)uVar2 == 0)) {
    plVar3 = (int64_t *)(*(int64_t *)(param_1 + 0x50) + -8);
    if (*(int64_t *)(param_1 + 0x50) == 0) {
      plVar3 = plVar4;
    }
    plVar1 = plVar4;
    if (plVar3 != (int64_t *)0x0) {
      plVar1 = plVar3 + 1;
    }
    while (plVar1 != (int64_t *)(param_1 + 0x50)) {
      plVar3 = plVar1 + -1;
      if (plVar1 == (int64_t *)0x0) {
        plVar3 = plVar4;
      }
      uVar2 = (**(code **)*plVar3)(plVar3,*(uint64_t *)(param_1 + 0x48));
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (plVar1 == (int64_t *)(param_1 + 0x50)) break;
      plVar3 = (int64_t *)(*plVar1 + -8);
      if (*plVar1 == 0) {
        plVar3 = plVar4;
      }
      plVar1 = plVar4;
      if (plVar3 != (int64_t *)0x0) {
        plVar1 = plVar3 + 1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_1808672e4(void)

{
  int64_t *plVar1;
  int64_t in_RAX;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *unaff_RBP;
  int64_t unaff_RSI;
  
  plVar3 = (int64_t *)(in_RAX + -8);
  if (in_RAX == 0) {
    plVar3 = unaff_RBP;
  }
  plVar1 = unaff_RBP;
  if (plVar3 != (int64_t *)0x0) {
    plVar1 = plVar3 + 1;
  }
  while( true ) {
    if (plVar1 == (int64_t *)(unaff_RSI + 0x50)) {
      return 0;
    }
    plVar3 = plVar1 + -1;
    if (plVar1 == (int64_t *)0x0) {
      plVar3 = unaff_RBP;
    }
    uVar2 = (**(code **)*plVar3)();
    if ((int)uVar2 != 0) break;
    if (plVar1 == (int64_t *)(unaff_RSI + 0x50)) {
      return 0;
    }
    plVar3 = (int64_t *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      plVar3 = unaff_RBP;
    }
    plVar1 = unaff_RBP;
    if (plVar3 != (int64_t *)0x0) {
      plVar1 = plVar3 + 1;
    }
  }
  return uVar2;
}





// 函数: void FUN_18086735a(void)
void FUN_18086735a(void)

{
  return;
}



uint64_t FUN_1808673a0(int64_t param_1)

{
  uint64_t uVar1;
  void *puVar2;
  int aiStackX_8 [8];
  
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = FUN_180866d00(param_1,*(int *)(param_1 + 0x70),1,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  if (*(int *)(param_1 + 0x38) == 1) {
    uVar1 = FUN_180768b70(aiStackX_8);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (3999 < aiStackX_8[0] - *(int *)(param_1 + 0x74)) {
      uVar1 = FUN_180866d00(param_1,5,1);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
  }
  if ((1 < *(int *)(param_1 + 0x38) - 1U) && (*(int *)(param_1 + 0x78) != 0)) {
    uVar1 = FUN_180768b70(aiStackX_8);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (999 < aiStackX_8[0] - *(int *)(param_1 + 0x78)) {
      if (*(int *)(param_1 + 0x90) < 1) {
        puVar2 = &system_buffer_ptr;
      }
      else {
        puVar2 = *(void **)(param_1 + 0x88);
      }
      FUN_180865fc0(param_1,*(int16_t *)(param_1 + 0x80),puVar2,1);
      *(int *)(param_1 + 0x78) = aiStackX_8[0];
    }
  }
  return 0;
}



uint64_t FUN_180867470(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  if ((uint64_t)(*(int64_t *)(param_1 + 0x10) - *(int64_t *)(param_1 + 0x18)) < param_3) {
    return 0x1c;
  }
                    // WARNING: Subroutine does not return
  memcpy(*(int64_t *)(param_1 + 0x18) + *(int64_t *)(param_1 + 8));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808674e0(int64_t *param_1,int64_t param_2)
void FUN_1808674e0(int64_t *param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int64_t lVar8;
  int8_t auStack_58 [32];
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  
  uStack_20 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_58;
  uStack_38 = 0;
  iVar3 = FUN_18088c740(&uStack_38,param_1[2]);
  if (iVar3 == 0) {
    lVar8 = (int64_t)(int)param_1[1];
    uVar6 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
    lVar1 = *(int64_t *)(param_2 + 0x18);
    iVar3 = (*(uint *)((int64_t)param_1 + 0xc) ^ uVar6) - uVar6;
    iVar5 = (int)param_1[1] + 1;
    if (iVar3 < iVar5) {
      iVar7 = (int)((float)iVar3 * 1.5);
      iVar3 = iVar5;
      if (iVar5 <= iVar7) {
        iVar3 = iVar7;
      }
      if (iVar3 < 2) {
        iVar7 = 2;
      }
      else if (iVar7 < iVar5) {
        iVar7 = iVar5;
      }
      iVar3 = FUN_1808676f0(param_1,iVar7);
      if (iVar3 != 0) goto LAB_1808675ba;
    }
    lVar2 = *param_1;
    *(uint64_t *)(lVar2 + lVar8 * 0x18) = 0;
    *(uint64_t *)(lVar2 + 8 + lVar8 * 0x18) = 0;
    *(uint64_t *)(lVar2 + 0x10 + lVar8 * 0x18) = 0;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    uStack_30 = *(uint64_t *)(lVar1 + 0x10);
    uStack_28 = *(uint64_t *)(lVar1 + 0x18);
    lVar2 = *param_1;
    uVar4 = FUN_18084dc20(&uStack_30);
    *(uint64_t *)(lVar2 + lVar8 * 0x18) = uVar4;
    *(int64_t *)(lVar2 + 8 + lVar8 * 0x18) = param_2;
    *(int32_t *)(lVar2 + 0x10 + lVar8 * 0x18) = *(int32_t *)(lVar1 + 0x4c);
  }
LAB_1808675ba:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_38);
}



uint64_t FUN_180867600(uint64_t *param_1,int *param_2,int *param_3)

{
  uint64_t uVar1;
  int *piVar2;
  int iVar3;
  int64_t lVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 1)) {
    piVar2 = (int *)*param_1;
    lVar4 = 0;
    do {
      if ((*piVar2 == *param_2) && (piVar2[1] == param_2[1])) goto LAB_180867645;
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 1;
      piVar2 = piVar2 + 6;
    } while (lVar4 < *(int *)(param_1 + 1));
  }
  iVar3 = -1;
LAB_180867645:
  *param_3 = iVar3;
  uVar1 = 0x4a;
  if (-1 < iVar3) {
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808676f0(int64_t *param_1,int param_2)

{
  int32_t *puVar1;
  int iVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t *puVar7;
  int64_t lVar8;
  int32_t *puVar9;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar7 = (int32_t *)0x0;
  if (param_2 != 0) {
    if (param_2 * 0x18 - 1U < 0x3fffffff) {
      puVar7 = (int32_t *)
               SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x18,&unknown_var_8432_ptr,
                             0xf4,0,0,1);
      if (puVar7 != (int32_t *)0x0) {
        iVar2 = (int)param_1[1];
        lVar8 = (int64_t)iVar2;
        if ((iVar2 != 0) && (lVar3 = *param_1, 0 < iVar2)) {
          puVar9 = puVar7;
          do {
            puVar1 = (int32_t *)((lVar3 - (int64_t)puVar7) + (int64_t)puVar9);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *puVar9 = *puVar1;
            puVar9[1] = uVar4;
            puVar9[2] = uVar5;
            puVar9[3] = uVar6;
            *(uint64_t *)(puVar9 + 4) =
                 *(uint64_t *)((lVar3 - (int64_t)puVar7) + -8 + (int64_t)(puVar9 + 6));
            lVar8 = lVar8 + -1;
            puVar9 = puVar9 + 6;
          } while (lVar8 != 0);
        }
        goto LAB_1808677af;
      }
    }
    return 0x26;
  }
LAB_1808677af:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = (int64_t)puVar7;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180867714(uint64_t param_1,int param_2)

{
  int32_t *puVar1;
  int iVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t *puVar7;
  int64_t lVar8;
  int32_t *puVar9;
  int64_t *unaff_RBX;
  int unaff_EDI;
  
  puVar7 = (int32_t *)0x0;
  if (unaff_EDI == 0) {
LAB_1808677af:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&unknown_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = (int64_t)puVar7;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0x18 - 1U < 0x3fffffff) {
    puVar7 = (int32_t *)
             SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x18,&unknown_var_8432_ptr,
                           0xf4,0);
    if (puVar7 != (int32_t *)0x0) {
      iVar2 = (int)unaff_RBX[1];
      lVar8 = (int64_t)iVar2;
      if ((iVar2 != 0) && (lVar3 = *unaff_RBX, 0 < iVar2)) {
        puVar9 = puVar7;
        do {
          puVar1 = (int32_t *)((lVar3 - (int64_t)puVar7) + (int64_t)puVar9);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          *puVar9 = *puVar1;
          puVar9[1] = uVar4;
          puVar9[2] = uVar5;
          puVar9[3] = uVar6;
          *(uint64_t *)(puVar9 + 4) =
               *(uint64_t *)((lVar3 - (int64_t)puVar7) + -8 + (int64_t)(puVar9 + 6));
          lVar8 = lVar8 + -1;
          puVar9 = puVar9 + 6;
        } while (lVar8 != 0);
      }
      goto LAB_1808677af;
    }
  }
  return 0x26;
}



uint64_t FUN_1808677fa(void)

{
  return 0x26;
}





// 函数: void FUN_180867810(int64_t *param_1,int64_t param_2)
void FUN_180867810(int64_t *param_1,int64_t param_2)

{
  int iVar1;
  int64_t *plVar2;
  int32_t *puVar3;
  uint uVar4;
  int64_t lVar6;
  int iVar7;
  uint64_t uVar8;
  uint64_t uStackX_8;
  uint64_t uVar5;
  
  uVar5 = 0;
  uStackX_8 = 0;
  iVar1 = FUN_18088c740(&uStackX_8,param_1[2]);
  if (iVar1 == 0) {
    iVar1 = (int)param_1[1];
    uVar4 = 0;
    if (0 < iVar1) {
      plVar2 = (int64_t *)(*param_1 + 8);
      uVar8 = uVar5;
      do {
        uVar4 = (uint)uVar5;
        if (*plVar2 == param_2) break;
        uVar4 = uVar4 + 1;
        uVar5 = (uint64_t)uVar4;
        uVar8 = uVar8 + 1;
        plVar2 = plVar2 + 3;
      } while ((int64_t)uVar8 < (int64_t)iVar1);
    }
    if ((-1 < (int)uVar4) && ((int)uVar4 < iVar1)) {
      iVar7 = (iVar1 - uVar4) + -1;
      if (0 < iVar7) {
        lVar6 = (int64_t)iVar7;
        puVar3 = (int32_t *)(*param_1 + (int64_t)(int)uVar4 * 0x18);
        do {
          *puVar3 = puVar3[6];
          puVar3[1] = puVar3[7];
          puVar3[2] = puVar3[8];
          puVar3[3] = puVar3[9];
          *(uint64_t *)(puVar3 + 4) = *(uint64_t *)(puVar3 + 10);
          lVar6 = lVar6 + -1;
          puVar3 = puVar3 + 6;
        } while (lVar6 != 0);
        iVar1 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar1 + -1;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStackX_8);
}



uint64_t FUN_1808678e0(uint64_t *param_1,int *param_2,int32_t param_3,int8_t param_4)

{
  uint64_t uVar1;
  int *piVar2;
  uint64_t uVar3;
  int iVar4;
  uint64_t uVar5;
  
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 1)) {
    piVar2 = (int *)*param_1;
    uVar5 = uVar3;
    while ((iVar4 = (int)uVar5, *piVar2 != *param_2 || (piVar2[1] != param_2[1]))) {
      uVar5 = (uint64_t)(iVar4 + 1);
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 6;
      if ((int64_t)*(int *)(param_1 + 1) <= (int64_t)uVar3) {
        return 0;
      }
    }
    if ((-1 < iVar4) &&
       (uVar1 = FUN_1808d73b0(*(uint64_t *)((int *)*param_1 + (int64_t)iVar4 * 6 + 2),param_3,
                              param_4), (int)uVar1 != 0)) {
      return uVar1;
    }
  }
  return 0;
}





