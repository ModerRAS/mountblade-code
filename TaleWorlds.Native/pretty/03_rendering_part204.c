#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part204.c - 15 个函数

// 函数: void FUN_180386f4d(void)
void FUN_180386f4d(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  uint uVar9;
  int64_t unaff_RBP;
  int64_t lVar10;
  int64_t unaff_RDI;
  int unaff_R12D;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int64_t unaff_R15;
  int64_t lVar11;
  float fVar12;
  int32_t uVar13;
  int8_t in_stack_00000030;
  uint uStack0000000000000058;
  uint uStack000000000000005c;
  uint uStack0000000000000060;
  int32_t uStack0000000000000064;
  uint uStack0000000000000068;
  uint uStack000000000000006c;
  uint uStack0000000000000070;
  int32_t uStack0000000000000074;
  
  do {
    lVar11 = *(int64_t *)(unaff_R15 + 8 + unaff_RDI);
    FUN_180254b30(lVar11 + 0x10,unaff_RBP + -0x70);
    if ((*(byte *)(*(int64_t *)(lVar11 + 0x28) + 0x2e8) & 0xb) == 0xb) {
      uStack0000000000000068 = *(uint *)(lVar11 + 0x30);
      uStack0000000000000060 = uStack0000000000000068 ^ 0x80000000;
      uStack0000000000000074 = 0x7f7fffff;
      uStack0000000000000058 = uStack0000000000000068 ^ 0x80000000;
      uStack000000000000005c = uStack0000000000000068 ^ 0x80000000;
      uStack0000000000000064 = 0x7f7fffff;
      uStack0000000000000070 = uStack0000000000000068;
      uStack000000000000006c = uStack0000000000000068;
      FUN_1800b9f60(&stack0x00000058);
      FUN_18063ad30(unaff_RBP + -0x30,&stack0x00000058,unaff_RBP + -0x70);
      lVar10 = *(int64_t *)(unaff_R14 + 0x90);
      if (*(float *)(unaff_RBP + 0x80) <= 2.0) {
        cVar4 = func_0x0001801be000(unaff_R13 + 0x30,unaff_RBP + -0x10);
        if (cVar4 != '\0') {
          iVar5 = 1;
          goto LAB_18038706d;
        }
LAB_1803870a3:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_18063c930(unaff_R13 + 0x30,unaff_RBP + -0x30);
        if (iVar5 == 0) goto LAB_1803870a3;
        lVar10 = *(int64_t *)(unaff_R14 + 0x90);
LAB_18038706d:
        if (((((*(byte *)(unaff_R13 + 0x1bd8) & 2) != 0) &&
             (plVar1 = *(int64_t **)(lVar10 + 0x29a8), plVar1 != (int64_t *)0x0)) &&
            (*(float *)(unaff_RBP + -0x78) <= 100.0)) &&
           (cVar4 = (**(code **)(*plVar1 + 0x28))(plVar1,&stack0x00000058,unaff_RBP + -0x70,0),
           cVar4 == '\0')) goto LAB_1803870a3;
      }
      uVar9 = (uint)(iVar5 != 0);
    }
    else {
      uVar9 = 0;
    }
    uVar9 = *(uint *)(unaff_R15 + unaff_RDI) & 0x7fffffff | uVar9 << 0x1f;
    *(uint *)(unaff_R15 + unaff_RDI) = uVar9;
    fVar12 = (float)FUN_1803dd6b0(lVar11,unaff_R13 + 0x30,(int)*(float *)(unaff_R13 + 0x11c20),
                                  (int)*(float *)(unaff_R13 + 0x11c24));
    *(uint *)(unaff_R15 + unaff_RDI) = ((int)fVar12 ^ uVar9) & 0x7fffffff ^ uVar9;
    if ((*(char *)(unaff_R14 + 0x50) != '\0') && (*(int *)(lVar11 + 200) != 0)) {
      FUN_1803e1720(*(uint64_t *)(unaff_R15 + 8 + unaff_RDI));
    }
    unaff_RDI = *(int64_t *)(unaff_R14 + 0x60);
    unaff_R12D = unaff_R12D + 1;
    unaff_R15 = unaff_R15 + 0x10;
    if ((uint64_t)(*(int64_t *)(unaff_R14 + 0x68) - unaff_RDI >> 4) <=
        (uint64_t)(int64_t)unaff_R12D) {
      lVar11 = *(int64_t *)(unaff_R14 + 0x68);
      lVar10 = lVar11 - unaff_RDI >> 4;
      if (1 < lVar10) {
        puVar7 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 0x10,system_allocation_flags);
        for (puVar8 = puVar7; puVar8 != puVar7 + lVar10 * 4; puVar8 = puVar8 + 4) {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
        }
        iVar5 = FUN_180388370(unaff_RDI,lVar11,puVar7,0,in_stack_00000030);
        if ((iVar5 == 1) && (puVar7 != puVar7 + lVar10 * 4)) {
                    // WARNING: Subroutine does not return
          memmove(unaff_RDI,puVar7,lVar10 * 0x10);
        }
        if (puVar7 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(puVar7);
        }
      }
      iVar5 = *(int *)(system_main_module_state + 0x224);
      iVar6 = (int)(*(int64_t *)(unaff_R14 + 0x68) - *(int64_t *)(unaff_R14 + 0x60) >> 4) + -1;
      lVar11 = (int64_t)iVar6;
      if (-1 < iVar6) {
        lVar10 = lVar11 << 4;
        do {
          lVar2 = *(int64_t *)(unaff_R14 + 0x60);
          lVar3 = *(int64_t *)(lVar10 + 8 + lVar2);
          uVar13 = FUN_180254b30(lVar3 + 0x10,unaff_RBP + -0x70);
          if (*(int *)(lVar10 + lVar2) < 0) {
            FUN_180386c10(uVar13,lVar3,unaff_RBP + -0x70);
          }
          else if (*(int *)(lVar3 + 0xd0) != iVar5) {
            FUN_180386260(uVar13,*(uint64_t *)(unaff_R13 + 0x3580),lVar3,0);
          }
          lVar10 = lVar10 + -0x10;
          lVar11 = lVar11 + -1;
        } while (-1 < lVar11);
      }
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x90) ^ (uint64_t)&stack0x00000000);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18038715d(void)
void FUN_18038715d(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  int64_t unaff_RBP;
  int64_t lVar7;
  int64_t unaff_RDI;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int64_t lVar8;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t uVar9;
  int8_t in_stack_00000030;
  int32_t uStack0000000000000038;
  
  lVar8 = *(int64_t *)(unaff_R14 + 0x68);
  lVar7 = lVar8 - unaff_RDI >> 4;
  if (1 < lVar7) {
    puVar5 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 0x10,system_allocation_flags);
    uStack0000000000000038 = extraout_XMM0_Da;
    if (puVar5 != puVar5 + lVar7 * 4) {
      uStack0000000000000038 = 0;
      puVar6 = puVar5;
      do {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6 = puVar6 + 4;
      } while (puVar6 != puVar5 + lVar7 * 4);
    }
    iVar3 = FUN_180388370(uStack0000000000000038,lVar8,puVar5,0,in_stack_00000030);
    if ((iVar3 == 1) && (puVar5 != puVar5 + lVar7 * 4)) {
                    // WARNING: Subroutine does not return
      memmove(extraout_XMM0_Da_00,puVar5,lVar7 * 0x10);
    }
    if (puVar5 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar5);
    }
  }
  iVar3 = *(int *)(system_main_module_state + 0x224);
  iVar4 = (int)(*(int64_t *)(unaff_R14 + 0x68) - *(int64_t *)(unaff_R14 + 0x60) >> 4) + -1;
  lVar8 = (int64_t)iVar4;
  if (-1 < iVar4) {
    lVar7 = lVar8 << 4;
    do {
      lVar1 = *(int64_t *)(unaff_R14 + 0x60);
      lVar2 = *(int64_t *)(lVar7 + 8 + lVar1);
      uVar9 = FUN_180254b30(lVar2 + 0x10,unaff_RBP + -0x70);
      if (*(int *)(lVar7 + lVar1) < 0) {
        FUN_180386c10(uVar9,lVar2,unaff_RBP + -0x70);
      }
      else if (*(int *)(lVar2 + 0xd0) != iVar3) {
        FUN_180386260(uVar9,*(uint64_t *)(unaff_R13 + 0x3580),lVar2,0);
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x90) ^ (uint64_t)&stack0x00000000);
}



uint64_t *
FUN_1803872c0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_5040_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



int64_t FUN_180387310(uint64_t *param_1,int *param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int8_t auStackX_8 [32];
  
  puVar1 = (uint64_t *)param_1[2];
  puVar3 = param_1;
  if (puVar1 != (uint64_t *)0x0) {
    param_3 = param_1;
    do {
      if (*(int *)(puVar1 + 4) < *param_2) {
        puVar1 = (uint64_t *)*puVar1;
      }
      else {
        param_3 = puVar1;
        puVar1 = (uint64_t *)puVar1[1];
      }
      puVar3 = param_3;
    } while (puVar1 != (uint64_t *)0x0);
  }
  if ((puVar3 != param_1) && (*(int *)(puVar3 + 4) <= *param_2)) {
    return (int64_t)puVar3 + 0x24;
  }
  plVar2 = (int64_t *)FUN_180387710(param_1,auStackX_8,param_3,puVar3,param_2);
  return *plVar2 + 0x24;
}



uint64_t * FUN_180387380(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int8_t auStackX_8 [32];
  
  puVar1 = (uint64_t *)param_1[2];
  puVar3 = param_1;
  if (puVar1 != (uint64_t *)0x0) {
    param_3 = param_1;
    do {
      if ((uint64_t)puVar1[4] < *param_2) {
        puVar1 = (uint64_t *)*puVar1;
      }
      else {
        param_3 = puVar1;
        puVar1 = (uint64_t *)puVar1[1];
      }
      puVar3 = param_3;
    } while (puVar1 != (uint64_t *)0x0);
  }
  if ((puVar3 != param_1) && ((uint64_t)puVar3[4] <= *param_2)) {
    return puVar3 + 5;
  }
  plVar2 = (int64_t *)FUN_180387860(param_1,auStackX_8,param_3,puVar3,param_2);
  return (uint64_t *)(*plVar2 + 0x28);
}





// 函数: void FUN_1803873f0(int64_t *param_1,uint64_t param_2)
void FUN_1803873f0(int64_t *param_1,uint64_t param_2)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  
  lVar2 = param_1[1];
  lVar6 = *param_1;
  uVar3 = lVar2 - lVar6 >> 2;
  if (param_2 <= uVar3) {
    param_1[1] = lVar6 + param_2 * 4;
    return;
  }
  uVar4 = param_2 - uVar3;
  if ((uint64_t)(param_1[2] - lVar2 >> 2) < uVar4) {
    uVar5 = uVar3 * 2;
    if (uVar3 == 0) {
      uVar5 = 1;
    }
    if (uVar5 < param_2) {
      uVar5 = param_2;
    }
    if (uVar5 == 0) {
      lVar7 = 0;
    }
    else {
      piVar1 = (int *)param_1[3];
      lVar2 = (int64_t)*piVar1;
      uVar3 = (int64_t)(piVar1[lVar2 * 6 + 6] + 0xf) & 0xfffffffffffffff0;
      lVar7 = *(int64_t *)(piVar1 + lVar2 * 6 + 2) + uVar3;
      piVar1[lVar2 * 6 + 6] = (int)uVar3 + (int)uVar5 * 4;
      lVar2 = param_1[1];
      lVar6 = *param_1;
    }
    if (lVar6 == lVar2) {
      if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar7,0,uVar4 * 4);
      }
      *param_1 = lVar7;
      param_1[2] = lVar7 + uVar5 * 4;
      param_1[1] = lVar7;
      return;
    }
                    // WARNING: Subroutine does not return
    memmove(lVar7,lVar6,lVar2 - lVar6);
  }
  if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar2,0,uVar4 * 4);
  }
  param_1[1] = lVar2;
  return;
}





// 函数: void FUN_18038741b(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_18038741b(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  int *piVar1;
  int64_t in_RAX;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar6;
  
  uVar4 = param_2 - param_1;
  if (uVar4 <= (uint64_t)(in_RAX - unaff_RDI >> 2)) {
    if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
      memset();
    }
    unaff_RSI[1] = unaff_RDI;
    return;
  }
  uVar5 = param_1 * 2;
  if (param_1 == 0) {
    uVar5 = 1;
  }
  if (uVar5 < param_2) {
    uVar5 = param_2;
  }
  if (uVar5 == 0) {
    lVar6 = 0;
  }
  else {
    piVar1 = (int *)unaff_RSI[3];
    lVar2 = (int64_t)*piVar1;
    uVar3 = (int64_t)(piVar1[lVar2 * 6 + 6] + 0xf) & 0xfffffffffffffff0;
    lVar6 = *(int64_t *)(piVar1 + lVar2 * 6 + 2) + uVar3;
    piVar1[lVar2 * 6 + 6] = (int)uVar3 + (int)uVar5 * 4;
    unaff_RDI = unaff_RSI[1];
    param_4 = *unaff_RSI;
  }
  if (param_4 == unaff_RDI) {
    if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar6,0,uVar4 * 4);
    }
    *unaff_RSI = lVar6;
    unaff_RSI[2] = lVar6 + uVar5 * 4;
    unaff_RSI[1] = lVar6;
    return;
  }
                    // WARNING: Subroutine does not return
  memmove(lVar6,param_4,unaff_RDI - param_4);
}





// 函数: void FUN_1803874f9(void)
void FUN_1803874f9(void)

{
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *(uint64_t *)(unaff_RSI + 8) = unaff_RDI;
  return;
}





// 函数: void FUN_18038752c(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_18038752c(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)

{
  int64_t unaff_RSI;
  
  *(int64_t *)(unaff_RSI + 8) = param_4 + param_2 * 4;
  return;
}





// 函数: void FUN_180387540(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180387540(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  
  plVar1 = (int64_t *)param_1[1];
  lVar3 = *param_1;
  uVar2 = (int64_t)plVar1 - lVar3 >> 5;
  if (uVar2 < param_2) {
    FUN_1803879f0(param_1,param_2 - uVar2,param_3,param_4,0xfffffffffffffffe);
  }
  else {
    plVar4 = (int64_t *)(param_2 * 0x20 + lVar3);
    if (plVar4 != plVar1) {
      do {
        if (*plVar4 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        plVar4 = plVar4 + 4;
      } while (plVar4 != plVar1);
      lVar3 = *param_1;
    }
    param_1[1] = param_2 * 0x20 + lVar3;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803875e0(uint64_t param_1,int64_t *param_2,int param_3)
void FUN_1803875e0(uint64_t param_1,int64_t *param_2,int param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int8_t auStack_c8 [32];
  int32_t uStack_a8;
  uint64_t uStack_a0;
  int64_t *plStack_98;
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uVar1 = render_system_data_config;
  uStack_a0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  uStack_a8 = 0;
  param_3 = param_3 << 4;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x1c;
  plStack_98 = param_2;
  strcpy_s(auStack_70,0x40,&system_data_fc60);
  FUN_1802037e0();
  puStack_88 = &system_state_ptr;
  uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,param_3,0x10,3);
  FUN_18031f2e0(uVar1,param_2);
  *(uint64_t *)(*param_2 + 0x10) = uVar2;
  *(int *)(*param_2 + 0x18) = param_3;
  *(int *)(*param_2 + 0x1c) = param_3;
  *(int8_t *)(*param_2 + 0x20) = 0;
  uStack_a8 = 1;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180387710(int64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             int *param_5)

{
  bool bVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t uVar6;
  
  plVar3 = (int64_t *)*param_1;
  if ((param_4 == plVar3) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (param_4 = plVar3, *(int *)(plVar3 + 4) < *param_5)) {
LAB_18038776f:
      uVar6 = 0;
      goto LAB_180387772;
    }
  }
  else {
    plVar3 = (int64_t *)func_0x00018066bd70(param_4);
    if (((int)param_4[4] < *param_5) && (*param_5 < (int)plVar3[4])) {
      if (*param_4 == 0) goto LAB_18038776f;
      uVar6 = 1;
      param_4 = plVar3;
LAB_180387772:
      if (param_4 != (int64_t *)0x0) {
        FUN_18009d0a0(param_1,param_2,param_4,uVar6,param_5);
        return param_2;
      }
    }
  }
  bVar1 = true;
  plVar3 = param_1;
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    plVar4 = (int64_t *)param_1[2];
    do {
      plVar3 = plVar4;
      bVar1 = *param_5 < (int)plVar3[4];
      if (*param_5 < (int)plVar3[4]) {
        plVar4 = (int64_t *)plVar3[1];
      }
      else {
        plVar4 = (int64_t *)*plVar3;
      }
    } while (plVar4 != (int64_t *)0x0);
  }
  plVar4 = plVar3;
  if (bVar1) {
    if (plVar3 == (int64_t *)param_1[1]) {
      iVar2 = *param_5;
      goto FUN_1803877ea;
    }
    plVar4 = (int64_t *)func_0x00018066b9a0(plVar3);
  }
  iVar2 = *param_5;
  if (iVar2 <= (int)plVar4[4]) {
    *param_2 = plVar4;
    return param_2;
  }
FUN_1803877ea:
  if ((plVar3 == param_1) || (iVar2 < (int)plVar3[4])) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x28,(char)param_1[5]);
  *(int *)(lVar5 + 0x20) = *param_5;
  *(int32_t *)(lVar5 + 0x24) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar5,plVar3,param_1,uVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803877ea(void)
void FUN_1803877ea(void)

{
  int64_t lVar1;
  int32_t *unaff_RSI;
  int64_t unaff_RDI;
  
  lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x28,*(int8_t *)(unaff_RDI + 0x28));
  *(int32_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(int32_t *)(lVar1 + 0x24) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180387801(void)
void FUN_180387801(void)

{
  int64_t lVar1;
  int32_t *unaff_RSI;
  int64_t unaff_RDI;
  
  lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x28,*(int8_t *)(unaff_RDI + 0x28));
  *(int32_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(int32_t *)(lVar1 + 0x24) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180387805(void)
void FUN_180387805(void)

{
  int64_t lVar1;
  int32_t *unaff_RSI;
  int64_t unaff_RDI;
  
  lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x28,*(int8_t *)(unaff_RDI + 0x28));
  *(int32_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(int32_t *)(lVar1 + 0x24) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}





// 函数: void FUN_180387847(void)
void FUN_180387847(void)

{
  uint64_t unaff_RBX;
  uint64_t *unaff_R14;
  
  *unaff_R14 = unaff_RBX;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180387860(int64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t *param_5)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  bool bVar6;
  
  plVar1 = (int64_t *)*param_1;
  if ((param_4 == plVar1) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (param_4 = plVar1, (uint64_t)plVar1[4] < *param_5)) {
LAB_1803878db:
      uVar5 = 0;
      goto LAB_1803878de;
    }
  }
  else {
    plVar1 = (int64_t *)func_0x00018066bd70(param_4);
    if (((uint64_t)param_4[4] < *param_5) && (*param_5 < (uint64_t)plVar1[4])) {
      if (*param_4 == 0) goto LAB_1803878db;
      uVar5 = 1;
      param_4 = plVar1;
LAB_1803878de:
      if (param_4 != (int64_t *)0x0) {
        FUN_180387c00(param_1,param_2,param_4,uVar5,param_5);
        return param_2;
      }
    }
  }
  bVar6 = true;
  plVar1 = param_1;
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    plVar2 = (int64_t *)param_1[2];
    do {
      plVar1 = plVar2;
      bVar6 = *param_5 < (uint64_t)plVar1[4];
      if (bVar6) {
        plVar2 = (int64_t *)plVar1[1];
      }
      else {
        plVar2 = (int64_t *)*plVar1;
      }
    } while (plVar2 != (int64_t *)0x0);
  }
  plVar2 = plVar1;
  if (bVar6) {
    if (plVar1 == (int64_t *)param_1[1]) {
      uVar3 = *param_5;
      goto LAB_18038794d;
    }
    plVar2 = (int64_t *)func_0x00018066b9a0(plVar1);
  }
  uVar3 = *param_5;
  if (uVar3 <= (uint64_t)plVar2[4]) {
    *param_2 = plVar2;
    return param_2;
  }
LAB_18038794d:
  if ((plVar1 == param_1) || (uVar3 < (uint64_t)plVar1[4])) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x58,(char)param_1[5]);
  plVar2 = (int64_t *)*param_5;
  *(int64_t **)(lVar4 + 0x20) = plVar2;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  *(uint64_t *)(lVar4 + 0x28) = 0;
  *(uint64_t *)(lVar4 + 0x30) = 0;
  *(uint64_t *)(lVar4 + 0x38) = 0;
  *(uint64_t *)(lVar4 + 0x40) = 0;
  *(uint64_t *)(lVar4 + 0x48) = 0;
  *(uint64_t *)(lVar4 + 0x50) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,plVar1,param_1,uVar5);
}





// 函数: void FUN_1803879f0(uint64_t *param_1,uint64_t param_2)
void FUN_1803879f0(uint64_t *param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  int iVar2;
  int32_t uVar3;
  int *piVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int64_t *plVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  
  puVar10 = (uint64_t *)param_1[1];
  if ((uint64_t)(param_1[2] - (int64_t)puVar10 >> 5) < param_2) {
    puVar9 = (uint64_t *)*param_1;
    lVar6 = (int64_t)puVar10 - (int64_t)puVar9 >> 5;
    uVar12 = lVar6 * 2;
    if (lVar6 == 0) {
      uVar12 = 1;
    }
    if (uVar12 < lVar6 + param_2) {
      uVar12 = lVar6 + param_2;
    }
    puVar13 = (uint64_t *)0x0;
    if (uVar12 != 0) {
      piVar4 = (int *)param_1[3];
      iVar2 = *piVar4;
      uVar7 = (int64_t)(piVar4[(int64_t)iVar2 * 6 + 6] + 0xf) & 0xfffffffffffffff0;
      piVar4[(int64_t)iVar2 * 6 + 6] = (int)(uVar12 << 5) + (int)uVar7;
      puVar13 = (uint64_t *)(*(int64_t *)(piVar4 + (int64_t)iVar2 * 6 + 2) + uVar7);
      puVar10 = (uint64_t *)param_1[1];
      puVar9 = (uint64_t *)*param_1;
    }
    puVar8 = puVar13;
    if (puVar9 != puVar10) {
      lVar6 = (int64_t)puVar13 - (int64_t)puVar9;
      puVar9 = puVar9 + 3;
      do {
        *puVar8 = 0;
        *(uint64_t *)(lVar6 + -0x10 + (int64_t)puVar9) = 0;
        *(uint64_t *)(lVar6 + -8 + (int64_t)puVar9) = 0;
        *(int32_t *)(lVar6 + (int64_t)puVar9) = *(int32_t *)puVar9;
        uVar5 = *puVar8;
        *puVar8 = puVar9[-3];
        puVar9[-3] = uVar5;
        uVar5 = *(uint64_t *)(lVar6 + -0x10 + (int64_t)puVar9);
        *(uint64_t *)(lVar6 + -0x10 + (int64_t)puVar9) = puVar9[-2];
        puVar9[-2] = uVar5;
        uVar5 = *(uint64_t *)(lVar6 + -8 + (int64_t)puVar9);
        *(uint64_t *)(lVar6 + -8 + (int64_t)puVar9) = puVar9[-1];
        puVar9[-1] = uVar5;
        uVar3 = *(int32_t *)(lVar6 + (int64_t)puVar9);
        *(int32_t *)(lVar6 + (int64_t)puVar9) = *(int32_t *)puVar9;
        *(int32_t *)puVar9 = uVar3;
        puVar8 = puVar8 + 4;
        puVar1 = puVar9 + 1;
        puVar9 = puVar9 + 4;
      } while (puVar1 != puVar10);
    }
    if (param_2 != 0) {
      puVar10 = puVar8 + 1;
      uVar7 = param_2;
      do {
        puVar10[-1] = 0;
        *puVar10 = 0;
        puVar10[1] = 0;
        *(int32_t *)(puVar10 + 2) = 0xc;
        puVar10 = puVar10 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    for (plVar11 = (int64_t *)*param_1; plVar11 != (int64_t *)param_1[1]; plVar11 = plVar11 + 4) {
      if (*plVar11 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
    }
    *param_1 = puVar13;
    param_1[1] = puVar8 + param_2 * 4;
    param_1[2] = puVar13 + uVar12 * 4;
  }
  else {
    uVar12 = param_2;
    if (param_2 != 0) {
      do {
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        *(int32_t *)(puVar10 + 3) = 0xc;
        puVar10 = puVar10 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      puVar10 = (uint64_t *)param_1[1];
    }
    param_1[1] = puVar10 + param_2 * 4;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180387c00(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_180387c00(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  uint64_t *param_5)

{
  int64_t *plVar1;
  int64_t lVar2;
  int32_t uVar3;
  
  if ((((char)param_4 == '\0') && (param_3 != param_1)) &&
     (*(uint64_t *)(param_3 + 0x20) <= *param_5)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x58,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  plVar1 = (int64_t *)*param_5;
  *(int64_t **)(lVar2 + 0x20) = plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  *(uint64_t *)(lVar2 + 0x28) = 0;
  *(uint64_t *)(lVar2 + 0x30) = 0;
  *(uint64_t *)(lVar2 + 0x38) = 0;
  *(uint64_t *)(lVar2 + 0x40) = 0;
  *(uint64_t *)(lVar2 + 0x48) = 0;
  *(uint64_t *)(lVar2 + 0x50) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar2,param_3,param_1,uVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180387ce0(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t *plVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(int64_t *)(param_1 + 200);
  if (*(int64_t *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&unknown_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (int64_t)&unknown_var_5040_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(int64_t **)(lVar1 + -8);
    *(int64_t *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&unknown_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (int64_t)&unknown_var_5040_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_180387e60(int64_t param_1,uint64_t param_2)

{
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    FUN_1802fac00(param_1,param_2,0xbf800000);
  }
  if ((*(byte *)(param_1 + 0xa8) >> 3 & 1) != 0) {
    (**(code **)(**(int64_t **)(param_1 + 0x210) + 0xd0))(*(int64_t **)(param_1 + 0x210),param_1);
  }
  FUN_1802fb280(param_1);
  if (*(int64_t *)(param_1 + 0x28) != 0) {
    FUN_1802fb280();
  }
  return *(int *)(param_1 + 0x50) == *(int *)(system_main_module_state + 0x224);
}





// 函数: void FUN_180387ed0(int param_1,int param_2,int64_t *param_3)
void FUN_180387ed0(int param_1,int param_2,int64_t *param_3)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  float fVar5;
  int32_t uStack_88;
  uint uStack_84;
  int iStack_80;
  int16_t uStack_7c;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  int8_t uStack_64;
  int32_t uStack_60;
  uint64_t uStack_5c;
  int16_t uStack_54;
  uint64_t uStack_50;
  int32_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  int8_t uStack_34;
  int64_t lStack_20;
  
  puVar1 = (uint64_t *)*param_3;
  for (lVar4 = (int64_t)param_1; lVar4 < param_2; lVar4 = lVar4 + 1) {
    lVar2 = *(int64_t *)(*(int64_t *)*puVar1 + lVar4 * 8);
    uStack_84 = *(uint *)(lVar2 + 0x2b8);
    if (uStack_84 != 0xffffffff) {
      uStack_88 = 0;
      uStack_7c = 0xff00;
      uStack_78 = 0;
      uStack_70 = 0xffffffffffffffff;
      uStack_68 = 0xffffffff;
      uStack_64 = 0xff;
      uStack_60 = 0xffffffff;
      uStack_5c = 0;
      uStack_54 = 0x400;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      if (*(char *)puVar1[1] == '\0') {
        fVar5 = *(float *)(lVar2 + 0x2c0);
      }
      else {
        fVar5 = 0.0;
      }
      iStack_80 = (int)fVar5;
      if (*(char *)puVar1[1] == '\0') {
        lStack_20 = *(int64_t *)(lVar2 + 0x28) + 0x150;
      }
      else {
        lStack_20 = *(int64_t *)(lVar2 + 0x28) + 0x130;
      }
      lVar3 = *(int64_t *)puVar1[2];
      if (*(int *)(*(int64_t *)(lVar3 + 0x98f8) + (uint64_t)uStack_84 * 4) != 0) {
        if (*(int64_t *)(lVar2 + 0x260) != 0) {
          FUN_1801bcdd0(*(int64_t *)(lVar2 + 0x260),lVar2 + 0x70,*(int64_t *)puVar1[3] + 0xf0,
                        *(int32_t *)(*(int64_t *)(puVar1[4] + 0x90) + 0x8220));
          lVar3 = *(int64_t *)puVar1[2];
        }
        FUN_1802e7550(lVar2,lVar3,&uStack_88);
      }
    }
  }
  return;
}





