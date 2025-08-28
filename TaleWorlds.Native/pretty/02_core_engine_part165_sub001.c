#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part165_sub001.c - 29 个函数

#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part165.c - 29 个函数


// 函数: void FUN_18014e11f(uint64_t param_1,uint64_t param_2,int32_t *param_3)
void FUN_18014e11f(uint64_t param_1,uint64_t param_2,int32_t *param_3)

{
  int32_t uVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int32_t *unaff_RDI;
  
  if (unaff_RBX != 0) {
    uVar1 = *param_3;
    for (lVar2 = unaff_RBX; lVar2 != 0; lVar2 = lVar2 + -1) {
      *unaff_RDI = uVar1;
      unaff_RDI = unaff_RDI + 1;
    }
    unaff_RDI = *(int32_t **)(unaff_RSI + 8);
  }
  *(int32_t **)(unaff_RSI + 8) = unaff_RDI + unaff_RBX;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_18014e160(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  
  if (param_1 != param_2) {
    lVar1 = *param_1;
    lVar2 = *param_2;
    lVar3 = param_2[1];
    lVar7 = lVar3 - lVar2;
    uVar5 = lVar7 >> 5;
    if ((uint64_t)(param_1[2] - lVar1 >> 5) < uVar5) {
      if (uVar5 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = FUN_18062b420(system_memory_pool_ptr,uVar5 << 5,(char)param_1[3]);
      }
      if (lVar2 != lVar3) {
                    // WARNING: Subroutine does not return
        memmove(lVar4,lVar2,lVar7);
      }
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *param_1 = lVar4;
      lVar4 = uVar5 * 0x20 + lVar4;
      param_1[2] = lVar4;
    }
    else {
      lVar4 = param_1[1];
      uVar6 = lVar4 - lVar1 >> 5;
      if (uVar5 <= uVar6) {
        if (lVar2 == lVar3) {
          param_1[1] = lVar1;
          return param_1;
        }
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar2,lVar7);
      }
      lVar7 = uVar6 * 0x20 + lVar2;
      if (lVar2 != lVar7) {
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar2);
      }
      if (lVar7 != lVar3) {
                    // WARNING: Subroutine does not return
        memmove(lVar4,lVar7,lVar3 - lVar7);
      }
    }
    param_1[1] = lVar4;
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18014e179(int64_t param_1,int64_t *param_2)
void FUN_18014e179(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t in_RAX;
  int64_t lVar3;
  int64_t *unaff_RBX;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar6 = lVar2 - lVar1;
  uVar4 = lVar6 >> 5;
  if ((uint64_t)(in_RAX - param_1 >> 5) < uVar4) {
    if (uVar4 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_18062b420(system_memory_pool_ptr,uVar4 << 5,(char)unaff_RBX[3]);
    }
    if (lVar1 != lVar2) {
                    // WARNING: Subroutine does not return
      memmove(lVar3,lVar1,lVar6);
    }
    if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *unaff_RBX = lVar3;
    lVar3 = uVar4 * 0x20 + lVar3;
    unaff_RBX[2] = lVar3;
  }
  else {
    lVar3 = unaff_RBX[1];
    uVar5 = lVar3 - param_1 >> 5;
    if (uVar4 <= uVar5) {
      if (lVar1 == lVar2) {
        unaff_RBX[1] = param_1;
        return;
      }
                    // WARNING: Subroutine does not return
      memmove(param_1,lVar1,lVar6);
    }
    lVar6 = uVar5 * 0x20 + lVar1;
    if (lVar1 != lVar6) {
                    // WARNING: Subroutine does not return
      memmove(param_1,lVar1);
    }
    if (lVar6 != lVar2) {
                    // WARNING: Subroutine does not return
      memmove(lVar3,lVar6,lVar2 - lVar6);
    }
  }
  unaff_RBX[1] = lVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18014e1ad(void)
void FUN_18014e1ad(void)

{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  
  if (unaff_RDI == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(system_memory_pool_ptr,unaff_RDI << 5,(char)unaff_RBX[3]);
  }
  if (unaff_RBP != unaff_RSI) {
                    // WARNING: Subroutine does not return
    memmove(lVar1);
  }
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RBX = lVar1;
  lVar1 = unaff_RDI * 0x20 + lVar1;
  unaff_RBX[2] = lVar1;
  unaff_RBX[1] = lVar1;
  return;
}






// 函数: void FUN_18014e20d(int64_t param_1)
void FUN_18014e20d(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar3;
  
  lVar2 = *(int64_t *)(unaff_RBX + 8);
  uVar3 = lVar2 - param_1 >> 5;
  if (uVar3 < unaff_RDI) {
    lVar1 = uVar3 * 0x20 + unaff_RBP;
    if (unaff_RBP != lVar1) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    if (lVar1 != unaff_RSI) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar1,unaff_RSI - lVar1);
    }
    *(int64_t *)(unaff_RBX + 8) = lVar2;
  }
  else {
    if (unaff_RBP != unaff_RSI) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    *(int64_t *)(unaff_RBX + 8) = param_1;
  }
  return;
}






// 函数: void FUN_18014e28c(void)
void FUN_18014e28c(void)

{
  return;
}






// 函数: void FUN_18014e2a0(int64_t *param_1)
void FUN_18014e2a0(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  plVar1 = (int64_t *)param_1[1];
  plVar2 = (int64_t *)*param_1;
  while( true ) {
    if (plVar2 == plVar1) {
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return;
    }
    if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *plVar2 = 0;
    if (plVar2[3] != 0) break;
    plVar2 = plVar2 + 7;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_18014e330(int64_t *param_1,uint64_t param_2)
void FUN_18014e330(int64_t *param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  plVar1 = (int64_t *)param_1[1];
  lVar5 = *param_1;
  uVar2 = ((int64_t)plVar1 - lVar5) / 0x38;
  if (uVar2 < param_2) {
    lVar4 = param_2 - uVar2;
    FUN_18014ece0(param_1,lVar4,(int64_t)plVar1 - lVar5,lVar4,0xfffffffffffffffe);
  }
  else {
    plVar3 = (int64_t *)(param_2 * 0x38 + lVar5);
    if (plVar3 != plVar1) {
      do {
        if (*plVar3 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *plVar3 = 0;
        if (plVar3[3] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar3 = plVar3 + 7;
      } while (plVar3 != plVar1);
      lVar5 = *param_1;
    }
    param_1[1] = param_2 * 0x38 + lVar5;
  }
  return;
}






// 函数: void FUN_18014e400(int64_t *param_1)
void FUN_18014e400(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x88) {
    FUN_18014c7d0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_18014e470(int64_t *param_1)
void FUN_18014e470(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x60) {
    FUN_18014d790(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_18014e4d0(int64_t *param_1)
void FUN_18014e4d0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
    *(uint64_t *)(lVar2 + 0x28) = &system_data_buffer_ptr;
    if (*(int64_t *)(lVar2 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t *)(lVar2 + 0x30) = 0;
    *(int32_t *)(lVar2 + 0x40) = 0;
    *(uint64_t *)(lVar2 + 0x28) = &system_state_ptr;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}






// 函数: void FUN_18014e570(int64_t *param_1)
void FUN_18014e570(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
    *(uint64_t *)(lVar2 + 0x18) = &system_data_buffer_ptr;
    if (*(int64_t *)(lVar2 + 0x20) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t *)(lVar2 + 0x20) = 0;
    *(int32_t *)(lVar2 + 0x30) = 0;
    *(uint64_t *)(lVar2 + 0x18) = &system_state_ptr;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}






// 函数: void FUN_18014e610(int64_t *param_1)
void FUN_18014e610(int64_t *param_1)

{
  if (param_1 == (int64_t *)0x0) {
    return;
  }
  param_1[0xc] = (int64_t)&system_state_ptr;
  FUN_18014e400();
  if (param_1[4] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_1);
}






// 函数: void FUN_18014e690(int64_t *param_1)
void FUN_18014e690(int64_t *param_1)

{
  if (param_1 == (int64_t *)0x0) {
    return;
  }
  FUN_18014e2a0();
  if (param_1[4] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18014e700(uint64_t *param_1,int64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  int8_t auStack_40 [40];
  
  uVar2 = 0xfffffffffffffffe;
  lVar1 = FUN_18014aa50(auStack_40);
  param_1[2] = FUN_18014f520;
  param_1[3] = &unknown_var_4400_ptr;
  uVar2 = FUN_18062b1e0(system_memory_pool_ptr,0x28,8,system_allocation_flags,uVar2);
  FUN_18014aa50(uVar2,lVar1);
  *param_1 = uVar2;
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    (**(code **)(lVar1 + 0x18))(lVar1 + 8,0,0);
  }
  if (*(code **)(param_2 + 0x18) != (code *)0x0) {
    (**(code **)(param_2 + 0x18))(param_2 + 8,0,0);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18014e7d0(int64_t *param_1,uint64_t param_2)
void FUN_18014e7d0(int64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  int64_t lVar4;
  
  lVar4 = *param_1;
  if ((uint64_t)((param_1[2] - lVar4) / 0xc) < param_2) {
    if (param_2 == 0) {
      puVar2 = (int32_t *)0x0;
    }
    else {
      puVar2 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,param_2 * 0xc,(char)param_1[3]);
      lVar4 = *param_1;
    }
    lVar1 = param_1[1];
    puVar3 = puVar2;
    if (lVar4 != lVar1) {
      lVar4 = lVar4 - (int64_t)puVar2;
      do {
        *puVar3 = *(int32_t *)(lVar4 + (int64_t)puVar3);
        puVar3[1] = *(int32_t *)(lVar4 + 4 + (int64_t)puVar3);
        puVar3[2] = *(int32_t *)(lVar4 + 8 + (int64_t)puVar3);
        puVar3 = puVar3 + 3;
      } while (lVar4 + (int64_t)puVar3 != lVar1);
      lVar4 = *param_1;
    }
    if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar4);
    }
    *param_1 = (int64_t)puVar2;
    param_1[1] = (int64_t)puVar3;
    param_1[2] = (int64_t)(puVar2 + param_2 * 3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18014e80d(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_18014e80d(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  int64_t lVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  
  if (unaff_RSI == 0) {
    puVar2 = (int32_t *)0x0;
  }
  else {
    puVar2 = (int32_t *)
             FUN_18062b420(system_memory_pool_ptr,unaff_RSI * 0xc,*(int8_t *)(param_1 + 0x18));
    param_4 = *unaff_RDI;
  }
  lVar1 = unaff_RDI[1];
  puVar3 = puVar2;
  if (param_4 != lVar1) {
    param_4 = param_4 - (int64_t)puVar2;
    do {
      *puVar3 = *(int32_t *)(param_4 + (int64_t)puVar3);
      puVar3[1] = *(int32_t *)(param_4 + 4 + (int64_t)puVar3);
      puVar3[2] = *(int32_t *)(param_4 + 8 + (int64_t)puVar3);
      puVar3 = puVar3 + 3;
    } while (param_4 + (int64_t)puVar3 != lVar1);
    param_4 = *unaff_RDI;
  }
  if (param_4 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_4);
  }
  *unaff_RDI = (int64_t)puVar2;
  unaff_RDI[1] = (int64_t)puVar3;
  unaff_RDI[2] = (int64_t)(puVar2 + unaff_RSI * 3);
  return;
}






// 函数: void FUN_18014e8a0(void)
void FUN_18014e8a0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18014e8b0(int64_t *param_1,uint64_t param_2)
void FUN_18014e8b0(int64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar2 = *param_1;
  if ((uint64_t)(param_1[2] - lVar2 >> 2) < param_2) {
    if (param_2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_18062b420(system_memory_pool_ptr,param_2 * 4,(char)param_1[3]);
      lVar2 = *param_1;
    }
    if (lVar2 != param_1[1]) {
                    // WARNING: Subroutine does not return
      memmove(lVar1,lVar2,param_1[1] - lVar2);
    }
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2 * 4;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18014e8d3(int64_t param_1,int64_t param_2)
void FUN_18014e8d3(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int64_t unaff_RSI;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(system_memory_pool_ptr,param_2 * 4,(char)unaff_RBX[3]);
    param_1 = *unaff_RBX;
  }
  if (param_1 == unaff_RBX[1]) {
    if (param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *unaff_RBX = lVar1;
    unaff_RBX[1] = lVar1;
    unaff_RBX[2] = lVar1 + unaff_RSI * 4;
    return;
  }
                    // WARNING: Subroutine does not return
  memmove(lVar1,param_1,unaff_RBX[1] - param_1);
}






// 函数: void FUN_18014e952(void)
void FUN_18014e952(void)

{
  return;
}



int64_t FUN_18014e960(int64_t param_1,int64_t param_2)

{
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(code **)(param_1 + 0x18) = _guard_check_icall;
  if (param_1 != param_2) {
    FUN_180069130();
  }
  *(int32_t *)(param_1 + 0x20) = *(int32_t *)(param_2 + 0x20);
  *(uint64_t *)(param_1 + 0x28) = *(uint64_t *)(param_2 + 0x28);
  *(uint64_t *)(param_1 + 0x30) = *(uint64_t *)(param_2 + 0x30);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18014e9d0(int64_t *param_1,uint64_t param_2)
void FUN_18014e9d0(int64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  
  lVar6 = core_system_data_config;
  lVar5 = param_1[1];
  if (param_2 <= (uint64_t)((param_1[2] - lVar5) / 0x30)) {
    if (param_2 != 0) {
      puVar4 = (uint64_t *)(lVar5 + 0x28);
      uVar7 = param_2;
      do {
        *puVar4 = *(uint64_t *)(lVar6 + 0x28);
        puVar4 = puVar4 + 6;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      lVar5 = param_1[1];
    }
    param_1[1] = param_2 * 0x30 + lVar5;
    return;
  }
  lVar6 = *param_1;
  lVar2 = (lVar5 - lVar6) / 0x30;
  uVar7 = lVar2 * 2;
  if (lVar2 == 0) {
    uVar7 = 1;
  }
  if (uVar7 < lVar2 + param_2) {
    uVar7 = lVar2 + param_2;
  }
  if (uVar7 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18062b420(system_memory_pool_ptr,uVar7 * 0x30,(char)param_1[3]);
    lVar6 = *param_1;
    lVar5 = param_1[1];
  }
  lVar1 = core_system_data_config;
  if (lVar6 == lVar5) {
    if (param_2 != 0) {
      puVar4 = (uint64_t *)(lVar2 + 0x28);
      uVar3 = param_2;
      do {
        *puVar4 = *(uint64_t *)(lVar1 + 0x28);
        puVar4 = puVar4 + 6;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = lVar2;
    param_1[2] = uVar7 * 0x30 + lVar2;
    param_1[1] = param_2 * 0x30 + lVar2;
    return;
  }
                    // WARNING: Subroutine does not return
  memmove(lVar2,lVar6,lVar5 - lVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18014ea1e(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_18014ea1e(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  int64_t lVar1;
  int64_t in_RAX;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t *unaff_RBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t uVar5;
  
  lVar3 = SUB168(SEXT816(in_RAX) * SEXT816(param_1 - param_4),8);
  lVar3 = (lVar3 >> 3) - (lVar3 >> 0x3f);
  uVar5 = lVar3 * 2;
  if (lVar3 == 0) {
    uVar5 = 1;
  }
  if (uVar5 < (uint64_t)(lVar3 + unaff_RDI)) {
    uVar5 = lVar3 + unaff_RDI;
  }
  if (uVar5 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_18062b420(system_memory_pool_ptr,uVar5 * 0x30,(char)unaff_RBX[3]);
    param_4 = *unaff_RBX;
    unaff_RSI = unaff_RBX[1];
  }
  lVar1 = core_system_data_config;
  if (param_4 != unaff_RSI) {
                    // WARNING: Subroutine does not return
    memmove(lVar3,param_4,unaff_RSI - param_4);
  }
  if (unaff_RDI != 0) {
    puVar4 = (uint64_t *)(lVar3 + 0x28);
    lVar2 = unaff_RDI;
    do {
      *puVar4 = *(uint64_t *)(lVar1 + 0x28);
      puVar4 = puVar4 + 6;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RBX = lVar3;
  unaff_RBX[2] = uVar5 * 0x30 + lVar3;
  unaff_RBX[1] = unaff_RDI * 0x30 + lVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18014eb27(void)
void FUN_18014eb27(void)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  
  lVar1 = core_system_data_config;
  if (unaff_RDI != 0) {
    puVar3 = (uint64_t *)(unaff_RSI + 0x28);
    lVar2 = unaff_RDI;
    do {
      *puVar3 = *(uint64_t *)(lVar1 + 0x28);
      puVar3 = puVar3 + 6;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    unaff_RSI = *(int64_t *)(unaff_RBX + 8);
  }
  *(int64_t *)(unaff_RBX + 8) = unaff_RDI * 0x30 + unaff_RSI;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18014eb80(int64_t *param_1,uint64_t param_2)
void FUN_18014eb80(int64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  int64_t lVar7;
  
  lVar4 = core_system_data_config;
  lVar7 = param_1[1];
  if (param_2 <= (uint64_t)(param_1[2] - lVar7 >> 5)) {
    if (param_2 != 0) {
      puVar5 = (uint64_t *)(lVar7 + 0x18);
      uVar6 = param_2;
      do {
        *puVar5 = *(uint64_t *)(lVar4 + 0x28);
        puVar5 = puVar5 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      lVar7 = param_1[1];
    }
    param_1[1] = param_2 * 0x20 + lVar7;
    return;
  }
  lVar4 = *param_1;
  lVar2 = lVar7 - lVar4 >> 5;
  uVar6 = lVar2 * 2;
  if (lVar2 == 0) {
    uVar6 = 1;
  }
  if (uVar6 < lVar2 + param_2) {
    uVar6 = lVar2 + param_2;
  }
  if (uVar6 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18062b420(system_memory_pool_ptr,uVar6 << 5,(char)param_1[3]);
    lVar4 = *param_1;
    lVar7 = param_1[1];
  }
  lVar1 = core_system_data_config;
  if (lVar4 == lVar7) {
    if (param_2 != 0) {
      puVar5 = (uint64_t *)(lVar2 + 0x18);
      uVar3 = param_2;
      do {
        *puVar5 = *(uint64_t *)(lVar1 + 0x28);
        puVar5 = puVar5 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = lVar2;
    param_1[2] = uVar6 * 0x20 + lVar2;
    param_1[1] = param_2 * 0x20 + lVar2;
    return;
  }
                    // WARNING: Subroutine does not return
  memmove(lVar2,lVar4,lVar7 - lVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18014ebb6(int64_t param_1,int64_t param_2)
void FUN_18014ebb6(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t in_RAX;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t unaff_RBX;
  uint64_t uVar5;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  
  lVar2 = in_RAX >> 5;
  uVar5 = lVar2 * 2;
  if (lVar2 == 0) {
    uVar5 = 1;
  }
  if (uVar5 < (uint64_t)(lVar2 + unaff_RBX)) {
    uVar5 = lVar2 + unaff_RBX;
  }
  if (uVar5 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18062b420(system_memory_pool_ptr,uVar5 << 5,*(int8_t *)(param_1 + 0x18));
    param_2 = *unaff_RDI;
    unaff_RSI = unaff_RDI[1];
  }
  lVar1 = core_system_data_config;
  if (param_2 != unaff_RSI) {
                    // WARNING: Subroutine does not return
    memmove(lVar2,param_2,unaff_RSI - param_2);
  }
  if (unaff_RBX != 0) {
    puVar4 = (uint64_t *)(lVar2 + 0x18);
    lVar3 = unaff_RBX;
    do {
      *puVar4 = *(uint64_t *)(lVar1 + 0x28);
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RDI = lVar2;
  unaff_RDI[2] = uVar5 * 0x20 + lVar2;
  unaff_RDI[1] = unaff_RBX * 0x20 + lVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18014ec91(void)
void FUN_18014ec91(void)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  
  lVar1 = core_system_data_config;
  if (unaff_RBX != 0) {
    puVar3 = (uint64_t *)(unaff_RSI + 0x18);
    lVar2 = unaff_RBX;
    do {
      *puVar3 = *(uint64_t *)(lVar1 + 0x28);
      puVar3 = puVar3 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    unaff_RSI = *(int64_t *)(unaff_RDI + 8);
  }
  *(int64_t *)(unaff_RDI + 8) = unaff_RBX * 0x20 + unaff_RSI;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18014ece0(uint64_t *param_1,uint64_t param_2)
void FUN_18014ece0(uint64_t *param_1,uint64_t param_2)

{
  uint uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  uint64_t uVar12;
  
  plVar6 = (int64_t *)param_1[1];
  if ((uint64_t)((param_1[2] - (int64_t)plVar6) / 0x38) < param_2) {
    plVar7 = (int64_t *)*param_1;
    lVar4 = ((int64_t)plVar6 - (int64_t)plVar7) / 0x38;
    uVar12 = lVar4 * 2;
    if (lVar4 == 0) {
      uVar12 = 1;
    }
    if (uVar12 < lVar4 + param_2) {
      uVar12 = lVar4 + param_2;
    }
    plVar3 = (int64_t *)0x0;
    if (uVar12 != 0) {
      plVar3 = (int64_t *)
               FUN_18062b420(system_memory_pool_ptr,uVar12 * 0x38,*(int8_t *)(param_1 + 3),
                             0x4924924924924925,0xfffffffffffffffe);
      plVar6 = (int64_t *)param_1[1];
      plVar7 = (int64_t *)*param_1;
    }
    plVar9 = plVar3;
    if (plVar7 != plVar6) {
      lVar4 = (int64_t)plVar3 - (int64_t)plVar7;
      plVar7 = plVar7 + 4;
      do {
        *plVar9 = plVar7[-4];
        *(int64_t *)(lVar4 + -0x18 + (int64_t)plVar7) = plVar7[-3];
        *(int *)(lVar4 + -0x10 + (int64_t)plVar7) = (int)plVar7[-2];
        puVar11 = (uint64_t *)((int64_t)plVar7 + lVar4 + -8);
        lVar10 = *plVar7 - plVar7[-1] >> 3;
        uVar1 = *(uint *)(plVar7 + 2);
        *(uint *)(lVar4 + 0x10 + (int64_t)plVar7) = uVar1;
        plVar5 = (int64_t *)0x0;
        if (lVar10 != 0) {
          plVar5 = (int64_t *)FUN_18062b420(system_memory_pool_ptr,lVar10 * 8,uVar1 & 0xff);
        }
        *puVar11 = plVar5;
        *(int64_t **)(lVar4 + (int64_t)plVar7) = plVar5;
        *(int64_t **)(lVar4 + 8 + (int64_t)plVar7) = plVar5 + lVar10;
        uVar2 = *puVar11;
        lVar10 = plVar7[-1];
        if (lVar10 != *plVar7) {
                    // WARNING: Subroutine does not return
          memmove(uVar2,lVar10,*plVar7 - lVar10);
        }
        *(uint64_t *)(lVar4 + (int64_t)plVar7) = uVar2;
        plVar9 = plVar9 + 7;
        plVar5 = plVar7 + 3;
        plVar7 = plVar7 + 7;
      } while (plVar5 != plVar6);
    }
    if (param_2 != 0) {
      plVar6 = plVar9 + 4;
      uVar8 = param_2;
      do {
        plVar6[-4] = 0;
        plVar6[-3] = 0;
        plVar6[-2] = 0;
        *(int32_t *)((int64_t)plVar6 + 0x14) = 0;
        plVar6[-1] = 0;
        *plVar6 = 0;
        plVar6[1] = 0;
        *(int32_t *)(plVar6 + 2) = 3;
        plVar6 = plVar6 + 7;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    plVar6 = (int64_t *)param_1[1];
    plVar7 = (int64_t *)*param_1;
    if (plVar7 != plVar6) {
      do {
        if (*plVar7 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *plVar7 = 0;
        if (plVar7[3] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar7 = plVar7 + 7;
      } while (plVar7 != plVar6);
      plVar7 = (int64_t *)*param_1;
    }
    if (plVar7 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar7);
    }
    *param_1 = plVar3;
    param_1[1] = plVar9 + param_2 * 7;
    param_1[2] = plVar3 + uVar12 * 7;
  }
  else {
    if (param_2 != 0) {
      plVar7 = plVar6 + 4;
      uVar12 = param_2;
      do {
        *plVar6 = 0;
        plVar6[1] = 0;
        plVar6[2] = 0;
        plVar6[3] = 0;
        plVar6[4] = 0;
        plVar6[5] = 0;
        plVar6[6] = 0;
        plVar7[-1] = 0;
        *plVar7 = 0;
        plVar7[1] = 0;
        *(int32_t *)(plVar7 + 2) = 3;
        plVar6 = plVar6 + 7;
        plVar7 = plVar7 + 7;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      plVar6 = (int64_t *)param_1[1];
    }
    param_1[1] = plVar6 + param_2 * 7;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18014eff0(int64_t *param_1,int64_t param_2,int64_t param_3)
void FUN_18014eff0(int64_t *param_1,int64_t param_2,int64_t param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lStackX_8;
  
  uVar2 = (param_3 - param_2) / 0x88;
  if ((uint64_t)((param_1[2] - *param_1) / 0x88) < uVar2) {
    if (uVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_18062b420(system_memory_pool_ptr,uVar2 * 0x88,(char)param_1[3]);
    }
    FUN_18014fbc0(&lStackX_8,param_2,param_3,lVar3);
    lVar5 = param_1[1];
    lVar4 = *param_1;
    if (lVar4 != lVar5) {
      do {
        FUN_18014c7d0(lVar4);
        lVar4 = lVar4 + 0x88;
      } while (lVar4 != lVar5);
      lVar4 = *param_1;
    }
    if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar4);
    }
    *param_1 = lVar3;
    lVar3 = uVar2 * 0x88 + lVar3;
    param_1[1] = lVar3;
    param_1[2] = lVar3;
  }
  else {
    uVar1 = (param_1[1] - *param_1) / 0x88;
    if (uVar1 < uVar2) {
      lVar3 = uVar1 * 0x88 + param_2;
      FUN_18014fe60(param_2,lVar3);
      FUN_18014fbc0(&lStackX_8,lVar3,param_3,param_1[1]);
      param_1[1] = lStackX_8;
    }
    else {
      lVar4 = FUN_18014fe60(param_2,param_3);
      lVar3 = param_1[1];
      for (lVar5 = lVar4; lVar5 != lVar3; lVar5 = lVar5 + 0x88) {
        FUN_18014c7d0(lVar5);
      }
      param_1[1] = lVar4;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18014f059(void)
void FUN_18014f059(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int64_t *unaff_RDI;
  
  if (unaff_RBP == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18062b420(system_memory_pool_ptr,unaff_RBP * 0x88,(char)unaff_RDI[3]);
  }
  FUN_18014fbc0(&stack0x00000050);
  lVar1 = unaff_RDI[1];
  lVar3 = *unaff_RDI;
  if (lVar3 != lVar1) {
    do {
      FUN_18014c7d0(lVar3);
      lVar3 = lVar3 + 0x88;
    } while (lVar3 != lVar1);
    lVar3 = *unaff_RDI;
  }
  if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar3);
  }
  *unaff_RDI = lVar2;
  lVar2 = unaff_RBP * 0x88 + lVar2;
  unaff_RDI[1] = lVar2;
  unaff_RDI[2] = lVar2;
  return;
}






