#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part013.c - 10 个函数

// 函数: void FUN_1801d7420(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801d7420(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  uint64_t uVar2;
  char cVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t *plStackX_8;
  uint64_t uVar7;
  
  plVar1 = system_global_data_ptr;
  uVar7 = 0xfffffffffffffffe;
  plStackX_8 = param_1;
  do {
    lVar6 = 0x19;
    do {
      uVar2 = system_context_ptr;
      lVar4 = FUN_18005e890(system_context_ptr);
      if (lVar4 == 0) {
LAB_1801d748f:
        Sleep(1);
      }
      else {
        plVar5 = (int64_t *)FUN_18005e890(uVar2);
        cVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,0,*(code **)(*plVar5 + 0x20),param_4,uVar7);
        if (cVar3 == '\0') goto LAB_1801d748f;
      }
      uVar2 = system_context_ptr;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if (*(int *)((int64_t)system_global_data_ptr + 0x30c) == 0) {
      plVar5 = (int64_t *)plVar1[9];
      if (plVar5 != (int64_t *)0x0) {
        plStackX_8 = plVar5;
        (**(code **)(*plVar5 + 0x28))();
        FUN_18005e6a0(uVar2,&plStackX_8,0);
      }
      plVar1 = (int64_t *)*plVar1;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d7510(int64_t param_1)
void FUN_1801d7510(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  
  while (uVar1 = system_context_ptr, *(int *)(param_1 + 0x30c) != 0) {
    lVar2 = FUN_18005e890(system_context_ptr);
    if (lVar2 != 0) {
      plVar3 = (int64_t *)FUN_18005e890(uVar1);
      (**(code **)(*plVar3 + 0x20))(plVar3,0);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d7560(void)
void FUN_1801d7560(void)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  char cVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  void *puVar7;
  int iVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int8_t auStack_318 [32];
  int32_t uStack_2f8;
  void *puStack_2f0;
  int8_t *puStack_2e8;
  uint uStack_2e0;
  uint64_t uStack_2d8;
  void *puStack_2d0;
  int64_t lStack_2c8;
  uint uStack_2c0;
  int32_t uStack_2b8;
  uint64_t *puStack_2b0;
  uint64_t *puStack_2a8;
  uint64_t uStack_2a0;
  int32_t uStack_298;
  uint64_t uStack_290;
  void *puStack_288;
  int8_t *puStack_280;
  int iStack_278;
  int8_t auStack_270 [24];
  void *apuStack_258 [68];
  uint64_t uStack_38;
  
  uStack_290 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_318;
  uStack_2f8 = 0;
  lVar11 = -1;
  puStack_288 = &system_config_ptr;
  puStack_280 = auStack_270;
  auStack_270[0] = 0;
  iStack_278 = 6;
  strcpy_s(auStack_270,0x10,&unknown_var_2588_ptr);
  uStack_2f8 = 1;
  SystemCore_EncryptionEngine0(&puStack_2d0,&puStack_288);
  uStack_2f8 = 0;
  puStack_288 = &system_state_ptr;
  iVar8 = uStack_2c0 + 0x10;
  CoreMemoryPoolProcessor(&puStack_2d0,iVar8);
  puVar6 = (int32_t *)((uint64_t)uStack_2c0 + lStack_2c8);
  *puVar6 = 0x64616853;
  puVar6[1] = 0x2f737265;
  puVar6[2] = 0x72756f53;
  puVar6[3] = 0x2f736563;
  *(int8_t *)(puVar6 + 4) = 0;
  uStack_2c0 = iVar8;
  lVar4 = FUN_180624440(apuStack_258,&puStack_2d0);
  puVar7 = &system_buffer_ptr;
  if (*(void **)(lVar4 + 8) != (void *)0x0) {
    puVar7 = *(void **)(lVar4 + 8);
  }
  (**(code **)(puStack_2d0 + 0x10))(&puStack_2d0,puVar7);
  apuStack_258[0] = &system_state_ptr;
  puStack_2b0 = (uint64_t *)0x0;
  puStack_2a8 = (uint64_t *)0x0;
  uStack_2a0 = 0;
  uStack_298 = 3;
  FUN_18062d0d0(&puStack_2d0,&puStack_2b0);
  cVar3 = FUN_180624a00(&puStack_2d0);
  puVar2 = puStack_2a8;
  puVar1 = puStack_2b0;
  if (cVar3 != '\0') {
    uVar10 = (int64_t)puStack_2a8 - (int64_t)puStack_2b0 >> 5;
    iVar8 = 0;
    if (uVar10 != 0) {
      uVar5 = 0;
      do {
        lVar4 = FUN_18062d860(puVar1 + uVar5 * 4);
        if (lVar11 < lVar4) {
          lVar11 = lVar4;
        }
        iVar8 = iVar8 + 1;
        uVar5 = (uint64_t)iVar8;
      } while (uVar5 < uVar10);
    }
  }
  puStack_288 = &system_config_ptr;
  puStack_280 = auStack_270;
  auStack_270[0] = 0;
  iStack_278 = 6;
  strcpy_s(auStack_270,0x10,&unknown_var_2588_ptr);
  uStack_2f8 = 2;
  puStack_2f0 = &system_data_buffer_ptr;
  uStack_2d8 = 0;
  puStack_2e8 = (int8_t *)0x0;
  uStack_2e0 = 0;
  CoreMemoryPoolProcessor(&puStack_2f0,iStack_278);
  if (0 < iStack_278) {
    puVar7 = &system_buffer_ptr;
    if (puStack_280 != (void *)0x0) {
      puVar7 = puStack_280;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_2e8,puVar7,(int64_t)(iStack_278 + 1));
  }
  if ((puStack_280 != (void *)0x0) && (uStack_2e0 = 0, puStack_2e8 != (int8_t *)0x0)) {
    *puStack_2e8 = 0;
  }
  uStack_2f8 = 0;
  puStack_288 = &system_state_ptr;
  iVar8 = uStack_2e0 + 0x1e;
  CoreMemoryPoolProcessor(&puStack_2f0,iVar8);
  puVar6 = (int32_t *)(puStack_2e8 + uStack_2e0);
  *puVar6 = 0x64616853;
  puVar6[1] = 0x2f737265;
  puVar6[2] = 0x64616873;
  puVar6[3] = 0x635f7265;
  *(uint64_t *)(puVar6 + 4) = 0x6172756769666e6f;
  puVar6[6] = 0x6e6f6974;
  *(int16_t *)(puVar6 + 7) = 0x682e;
  *(int8_t *)((int64_t)puVar6 + 0x1e) = 0;
  uStack_2e0 = iVar8;
  cVar3 = FUN_180624af0(&puStack_2f0);
  if (cVar3 != '\0') {
    FUN_18062d860(&puStack_2f0);
  }
  puStack_2f0 = &system_data_buffer_ptr;
  if (puStack_2e8 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  puStack_2e8 = (int8_t *)0x0;
  uStack_2d8 = uStack_2d8 & 0xffffffff00000000;
  puStack_2f0 = &system_state_ptr;
  for (puVar9 = puVar1; puVar9 != puVar2; puVar9 = puVar9 + 4) {
    (**(code **)*puVar9)(puVar9,0);
  }
  if (puVar1 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(puVar1);
  }
  puStack_2d0 = &system_data_buffer_ptr;
  if (lStack_2c8 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  lStack_2c8 = 0;
  uStack_2b8 = 0;
  puStack_2d0 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_318);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d7910(uint64_t param_1,uint param_2,uint64_t *param_3,int *param_4,int64_t param_5)
void FUN_1801d7910(uint64_t param_1,uint param_2,uint64_t *param_3,int *param_4,int64_t param_5)

{
  uint uVar1;
  int64_t lVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint64_t uVar10;
  
  uVar8 = 0;
  iVar4 = 1 << ((byte)((int64_t)(uint64_t)(uint)(param_4[2] - *param_4) >> 2) & 0x1f);
  if (0 < iVar4) {
    do {
      puVar5 = *(uint **)param_4;
      uVar7 = 0;
      iVar9 = 0;
      uVar10 = *(int64_t *)(param_4 + 2) - (int64_t)puVar5 >> 2;
      if (uVar10 != 0) {
        uVar1 = 1;
        do {
          if ((uVar8 & uVar1) != 0) {
            uVar7 = uVar7 | *puVar5;
          }
          iVar9 = iVar9 + 1;
          uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
          puVar5 = puVar5 + 1;
        } while ((uint64_t)(int64_t)iVar9 < uVar10);
      }
      if (param_5 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = *(uint *)(param_5 + 0x1610);
      }
      uVar1 = (uVar7 | param_2) & uVar1;
      if ((((uVar1 & 0x600) != 0x600) && ((uVar1 & 0x40008000) != 0x40008000)) &&
         (((byte)uVar1 & 0x30) != 0x30)) {
        puVar5 = (uint *)param_3[1];
        if (puVar5 < (uint *)param_3[2]) {
          param_3[1] = (uint64_t)(puVar5 + 1);
          *puVar5 = uVar1;
        }
        else {
          puVar6 = (uint *)*param_3;
          lVar2 = (int64_t)puVar5 - (int64_t)puVar6 >> 2;
          if (lVar2 == 0) {
            lVar2 = 1;
LAB_1801d7a2f:
            puVar3 = (uint *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,lVar2 * 4);
            puVar6 = (uint *)*param_3;
            puVar5 = (uint *)param_3[1];
          }
          else {
            lVar2 = lVar2 * 2;
            if (lVar2 != 0) goto LAB_1801d7a2f;
            puVar3 = (uint *)0x0;
          }
          if (puVar6 != puVar5) {
                    // WARNING: Subroutine does not return
            memmove(puVar3,puVar6,(int64_t)puVar5 - (int64_t)puVar6);
          }
          *puVar3 = uVar1;
          if (*param_3 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager();
          }
          param_3[2] = (uint64_t)(puVar3 + lVar2);
          *param_3 = (uint64_t)puVar3;
          param_3[1] = (uint64_t)(puVar3 + 1);
        }
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d794b(void)
void FUN_1801d794b(void)

{
  uint uVar1;
  int64_t in_RAX;
  int64_t lVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint64_t unaff_RBX;
  uint unaff_EBP;
  uint64_t *unaff_RSI;
  uint64_t unaff_RDI;
  int iVar7;
  uint64_t uVar8;
  uint in_R10D;
  uint64_t *unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int in_stack_00000060;
  uint in_stack_00000068;
  int64_t in_stack_00000080;
  
  *(uint64_t *)(in_RAX + 0x18) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  do {
    puVar4 = (uint *)*unaff_R12;
    uVar6 = 0;
    iVar7 = 0;
    uVar8 = unaff_R12[1] - (int64_t)puVar4 >> 2;
    if (uVar8 != 0) {
      uVar1 = 1;
      do {
        if ((unaff_EBP & uVar1) != 0) {
          uVar6 = uVar6 | *puVar4;
        }
        iVar7 = iVar7 + 1;
        uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
        puVar4 = puVar4 + 1;
      } while ((uint64_t)(int64_t)iVar7 < uVar8);
    }
    if (in_stack_00000080 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = *(uint *)(in_stack_00000080 + 0x1610);
    }
    uVar1 = (uVar6 | in_R10D) & uVar1;
    if ((((uVar1 & 0x600) != 0x600) && ((uVar1 & 0x40008000) != 0x40008000)) &&
       (((byte)uVar1 & 0x30) != 0x30)) {
      puVar4 = (uint *)unaff_RSI[1];
      if (puVar4 < (uint *)unaff_RSI[2]) {
        unaff_RSI[1] = (uint64_t)(puVar4 + 1);
        *puVar4 = uVar1;
      }
      else {
        puVar5 = (uint *)*unaff_RSI;
        lVar2 = (int64_t)puVar4 - (int64_t)puVar5 >> 2;
        if (lVar2 == 0) {
          lVar2 = 1;
LAB_1801d7a2f:
          puVar3 = (uint *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,lVar2 * 4);
          puVar5 = (uint *)*unaff_RSI;
          puVar4 = (uint *)unaff_RSI[1];
        }
        else {
          lVar2 = lVar2 * 2;
          if (lVar2 != 0) goto LAB_1801d7a2f;
          puVar3 = (uint *)0x0;
        }
        if (puVar5 != puVar4) {
                    // WARNING: Subroutine does not return
          memmove(puVar3,puVar5,(int64_t)puVar4 - (int64_t)puVar5);
        }
        *puVar3 = uVar1;
        if (*unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        unaff_RSI[2] = (uint64_t)(puVar3 + lVar2);
        *unaff_RSI = (uint64_t)puVar3;
        unaff_RSI[1] = (uint64_t)(puVar3 + 1);
        in_R10D = in_stack_00000068;
      }
    }
    unaff_EBP = unaff_EBP + 1;
    if (in_stack_00000060 <= (int)unaff_EBP) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1801d7abe(void)
void FUN_1801d7abe(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d7ad0(uint64_t param_1,uint64_t param_2,uint64_t *param_3,int64_t *param_4,
void FUN_1801d7ad0(uint64_t param_1,uint64_t param_2,uint64_t *param_3,int64_t *param_4,
                  uint64_t param_5)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int iVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint uVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  uint64_t uVar12;
  
  puVar8 = (uint64_t *)0x0;
  uVar9 = 1 << ((byte)((int64_t)(uint64_t)(uint)((int)param_4[1] - (int)*param_4) >> 3) & 0x1f);
  if (0 < (int)uVar9) {
    uVar12 = (uint64_t)uVar9;
    puVar11 = puVar8;
    do {
      puVar5 = (uint64_t *)*param_4;
      uVar10 = param_4[1] - (int64_t)puVar5 >> 3;
      puVar7 = puVar8;
      if (uVar10 != 0) {
        uVar1 = 1;
        puVar6 = puVar8;
        do {
          if ((uVar1 & (uint64_t)puVar11) != 0) {
            puVar7 = (uint64_t *)((uint64_t)puVar7 | *puVar5);
          }
          uVar9 = (int)puVar6 + 1;
          puVar6 = (uint64_t *)(uint64_t)uVar9;
          uVar1 = uVar1 << 1 | (uint64_t)((int64_t)uVar1 < 0);
          puVar5 = puVar5 + 1;
        } while ((uint64_t)(int64_t)(int)uVar9 < uVar10);
      }
      puVar5 = (uint64_t *)param_3[1];
      if (puVar5 < (uint64_t *)param_3[2]) {
        param_3[1] = (uint64_t)(puVar5 + 1);
        *puVar5 = (uint64_t)puVar7 | param_2;
      }
      else {
        puVar6 = (uint64_t *)*param_3;
        lVar2 = (int64_t)puVar5 - (int64_t)puVar6 >> 3;
        if (lVar2 == 0) {
          lVar2 = 1;
LAB_1801d7bad:
          puVar3 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,lVar2 * 8,(char)param_3[3]);
          puVar6 = (uint64_t *)*param_3;
          puVar5 = (uint64_t *)param_3[1];
        }
        else {
          lVar2 = lVar2 * 2;
          puVar3 = puVar8;
          if (lVar2 != 0) goto LAB_1801d7bad;
        }
        if (puVar6 != puVar5) {
                    // WARNING: Subroutine does not return
          memmove(puVar3,puVar6,(int64_t)puVar5 - (int64_t)puVar6);
        }
        *puVar3 = (uint64_t)puVar7 | param_2;
        if (*param_3 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        param_3[2] = (uint64_t)(puVar3 + lVar2);
        *param_3 = (uint64_t)puVar3;
        param_3[1] = (uint64_t)(puVar3 + 1);
      }
      puVar11 = (uint64_t *)((int64_t)puVar11 + 1);
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar12 = FUN_180241250(param_5);
  iVar4 = (int)((int64_t)(param_3[1] - *param_3) >> 3);
  if (0 < iVar4) {
    do {
      puVar11 = (uint64_t *)(*param_3 + (int64_t)puVar8 * 8);
      *puVar11 = *puVar11 & ~uVar12;
      puVar8 = (uint64_t *)((int64_t)puVar8 + 1);
    } while ((int64_t)puVar8 < (int64_t)iVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d7b06(uint64_t param_1,uint64_t param_2,uint param_3,int64_t *param_4)
void FUN_1801d7b06(uint64_t param_1,uint64_t param_2,uint param_3,int64_t *param_4)

{
  int64_t in_RAX;
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int iVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t unaff_RBX;
  uint64_t *puVar7;
  uint64_t *unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t *unaff_RDI;
  uint uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t in_R10;
  uint64_t unaff_R12;
  uint64_t uVar11;
  uint64_t unaff_R13;
  uint64_t uVar12;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  uint64_t in_stack_00000068;
  int64_t *in_stack_00000078;
  uint64_t in_stack_00000080;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R12;
  uVar11 = (uint64_t)unaff_RBP & 0xffffffff;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  uVar12 = (uint64_t)param_3;
  do {
    puVar5 = (uint64_t *)*param_4;
    uVar9 = (uint64_t)unaff_RBP & 0xffffffff;
    uVar10 = param_4[1] - (int64_t)puVar5 >> 3;
    puVar7 = unaff_RBP;
    if (uVar10 != 0) {
      uVar1 = 1;
      do {
        if ((uVar1 & uVar11) != 0) {
          puVar7 = (uint64_t *)((uint64_t)puVar7 | *puVar5);
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (uint64_t)uVar8;
        uVar1 = uVar1 << 1 | (uint64_t)((int64_t)uVar1 < 0);
        puVar5 = puVar5 + 1;
      } while ((uint64_t)(int64_t)(int)uVar8 < uVar10);
    }
    puVar5 = (uint64_t *)unaff_RDI[1];
    if (puVar5 < (uint64_t *)unaff_RDI[2]) {
      unaff_RDI[1] = (uint64_t)(puVar5 + 1);
      *puVar5 = (uint64_t)puVar7 | in_R10;
    }
    else {
      puVar6 = (uint64_t *)*unaff_RDI;
      lVar2 = (int64_t)puVar5 - (int64_t)puVar6 >> 3;
      if (lVar2 == 0) {
        lVar2 = 1;
LAB_1801d7bad:
        puVar3 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,lVar2 * 8,(char)unaff_RDI[3]);
        puVar6 = (uint64_t *)*unaff_RDI;
        puVar5 = (uint64_t *)unaff_RDI[1];
      }
      else {
        lVar2 = lVar2 * 2;
        puVar3 = unaff_RBP;
        if (lVar2 != 0) goto LAB_1801d7bad;
      }
      if (puVar6 != puVar5) {
                    // WARNING: Subroutine does not return
        memmove(puVar3,puVar6,(int64_t)puVar5 - (int64_t)puVar6);
      }
      *puVar3 = (uint64_t)puVar7 | in_R10;
      if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      unaff_RDI[2] = (uint64_t)(puVar3 + lVar2);
      *unaff_RDI = (uint64_t)puVar3;
      unaff_RDI[1] = (uint64_t)(puVar3 + 1);
      in_R10 = in_stack_00000068;
    }
    uVar11 = uVar11 + 1;
    uVar12 = uVar12 - 1;
    param_4 = in_stack_00000078;
    if (uVar12 == 0) {
      uVar11 = FUN_180241250(in_stack_00000080);
      iVar4 = (int)((int64_t)(unaff_RDI[1] - *unaff_RDI) >> 3);
      if (0 < iVar4) {
        do {
          puVar5 = (uint64_t *)(*unaff_RDI + (int64_t)unaff_RBP * 8);
          *puVar5 = *puVar5 & ~uVar11;
          unaff_RBP = (uint64_t *)((int64_t)unaff_RBP + 1);
        } while ((int64_t)unaff_RBP < (int64_t)iVar4);
      }
      return;
    }
  } while( true );
}






// 函数: void FUN_1801d7c48(void)
void FUN_1801d7c48(void)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t unaff_RBP;
  int64_t *unaff_RDI;
  uint64_t in_stack_00000080;
  
  uVar2 = FUN_180241250(in_stack_00000080);
  iVar3 = (int)(unaff_RDI[1] - *unaff_RDI >> 3);
  if (0 < iVar3) {
    do {
      puVar1 = (uint64_t *)(*unaff_RDI + unaff_RBP * 8);
      *puVar1 = *puVar1 & ~uVar2;
      unaff_RBP = unaff_RBP + 1;
    } while (unaff_RBP < iVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d7c90(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4,
void FUN_1801d7c90(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4,
                  int64_t *param_5,char param_6)

{
  uint64_t uVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  char cVar6;
  uint64_t uVar7;
  void **ppuVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  int iVar12;
  uint64_t **ppuVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  void *puVar19;
  uint uVar20;
  uint64_t *puVar21;
  int8_t auStack_358 [32];
  int64_t lStack_338;
  uint64_t uStack_330;
  void **ppuStack_328;
  uint uStack_320;
  uint64_t uStack_318;
  uint64_t *puStack_310;
  uint64_t uStack_308;
  void *puStack_300;
  uint *puStack_2f8;
  int32_t uStack_2f0;
  uint auStack_2e8 [2];
  code *pcStack_2e0;
  char cStack_2d8;
  void *puStack_2c8;
  int8_t *puStack_2c0;
  int32_t uStack_2b8;
  int8_t auStack_2b0 [72];
  uint64_t *puStack_268;
  uint64_t *puStack_260;
  uint64_t *puStack_258;
  uint64_t auStack_250 [64];
  uint64_t uStack_50;
  uint64_t uStack_48;
  
  uStack_308 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_358;
  lStack_338 = *(int64_t *)(param_2 + 0x1e0);
  ppuVar13 = &puStack_268;
  lVar15 = 4;
  puVar17 = auStack_250;
  do {
    puVar9 = ppuVar13[1];
    *puVar17 = (uint64_t)*ppuVar13;
    puVar17[1] = (uint64_t)puVar9;
    puVar9 = ppuVar13[3];
    puVar17[2] = (uint64_t)ppuVar13[2];
    puVar17[3] = (uint64_t)puVar9;
    puVar9 = ppuVar13[5];
    puVar17[4] = (uint64_t)ppuVar13[4];
    puVar17[5] = (uint64_t)puVar9;
    puVar9 = ppuVar13[7];
    puVar17[6] = (uint64_t)ppuVar13[6];
    puVar17[7] = (uint64_t)puVar9;
    puVar9 = ppuVar13[9];
    puVar17[8] = (uint64_t)ppuVar13[8];
    puVar17[9] = (uint64_t)puVar9;
    puVar9 = ppuVar13[0xb];
    puVar17[10] = (uint64_t)ppuVar13[10];
    puVar17[0xb] = (uint64_t)puVar9;
    uVar3 = *(int32_t *)((int64_t)ppuVar13 + 100);
    uVar4 = *(int32_t *)(ppuVar13 + 0xd);
    uVar5 = *(int32_t *)((int64_t)ppuVar13 + 0x6c);
    *(int32_t *)(puVar17 + 0xc) = *(int32_t *)(ppuVar13 + 0xc);
    *(int32_t *)((int64_t)puVar17 + 100) = uVar3;
    *(int32_t *)(puVar17 + 0xd) = uVar4;
    *(int32_t *)((int64_t)puVar17 + 0x6c) = uVar5;
    puVar9 = ppuVar13[0xf];
    puVar17[0xe] = (uint64_t)ppuVar13[0xe];
    puVar17[0xf] = (uint64_t)puVar9;
    ppuVar13 = ppuVar13 + 0x10;
    lVar15 = lVar15 + -1;
    puVar17 = puVar17 + 0x10;
  } while (lVar15 != 0);
  uStack_50 = 0x200;
  puStack_268 = auStack_250;
  puStack_260 = auStack_250;
  puStack_258 = &uStack_50;
  puVar17 = (uint64_t *)0x0;
  lVar15 = *param_5;
  lVar14 = param_5[1] - lVar15;
  lVar2 = lVar14 >> 0x3f;
  uStack_330 = param_2;
  uStack_318 = param_3;
  puStack_310 = param_4;
  if (param_6 == '\0') {
    puVar9 = puVar17;
    if (lVar14 / 0x30 + lVar2 != lVar2) {
      do {
        lVar15 = lVar15 + (int64_t)puVar17;
        ppuVar8 = (void **)FUN_180240430(lStack_338,lVar15,0);
        ppuStack_328 = ppuVar8;
        if ((ppuVar8 != (void **)0x0) &&
           (cVar6 = (**(code **)(lVar15 + 0x20))(param_2), cVar6 != '\0')) {
          if (*(char *)(lVar15 + 0x28) == '\0') {
            FUN_1801e7a90(&puStack_268,&ppuStack_328);
          }
          else {
            uStack_318 = uStack_318 | (uint64_t)ppuVar8;
          }
        }
        uVar20 = (int)puVar9 + 1;
        puVar17 = puVar17 + 6;
        lVar15 = *param_5;
        puVar9 = (uint64_t *)(uint64_t)uVar20;
        param_4 = puStack_310;
      } while ((uint64_t)(int64_t)(int)uVar20 < (uint64_t)((param_5[1] - lVar15) / 0x30));
    }
  }
  else {
    puVar9 = puVar17;
    puVar21 = puVar17;
    if (lVar14 / 0x30 + lVar2 != lVar2) {
      do {
        lVar15 = lVar15 + (int64_t)puVar9;
        FUN_180627ae0(&puStack_300,lVar15);
        pcStack_2e0 = *(code **)(lVar15 + 0x20);
        cStack_2d8 = *(char *)(lVar15 + 0x28);
        uVar7 = FUN_180240430(lStack_338,&puStack_300,0);
        if (((uVar7 != 0) && (cVar6 = (*pcStack_2e0)(param_2), cVar6 != '\0')) &&
           (cStack_2d8 != '\0')) {
          uStack_318 = uStack_318 | uVar7;
        }
        ppuStack_328 = &puStack_300;
        puStack_300 = &system_data_buffer_ptr;
        if (puStack_2f8 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        puStack_2f8 = (uint *)0x0;
        auStack_2e8[0] = 0;
        puStack_300 = &system_state_ptr;
        uVar20 = (int)puVar21 + 1;
        lVar15 = *param_5;
        puVar9 = puVar9 + 6;
        puVar21 = (uint64_t *)(uint64_t)uVar20;
      } while ((uint64_t)(int64_t)(int)uVar20 < (uint64_t)((param_5[1] - lVar15) / 0x30));
    }
    param_4 = puStack_310;
    lVar15 = lStack_338;
    ppuVar8 = (void **)FUN_180240a60(lStack_338);
    uStack_320 = 0;
    puVar19 = *ppuVar8;
    puVar9 = puVar17;
    puVar21 = puVar17;
    ppuStack_328 = ppuVar8;
    if (((int64_t)ppuVar8[1] - (int64_t)puVar19) / 0x60 != 0) {
      do {
        uVar20 = (uint)puVar9;
        uVar7 = FUN_180240430(lVar15,puVar19 + (int64_t)puVar21 * 0x60,0);
        if (uVar7 != 0) {
          if (puStack_260 < puStack_258) {
            *puStack_260 = uVar7;
            puVar9 = puStack_260;
          }
          else {
            lVar15 = (int64_t)puStack_260 - (int64_t)puStack_268 >> 3;
            if (lVar15 == 0) {
              lVar15 = 1;
LAB_1801d7f36:
              puVar9 = (uint64_t *)((int64_t)auStack_250 + uStack_50);
              uStack_50 = uStack_50 + lVar15 * 8;
            }
            else {
              lVar15 = lVar15 * 2;
              puVar9 = puVar17;
              if (lVar15 != 0) goto LAB_1801d7f36;
            }
            if (puStack_268 != puStack_260) {
                    // WARNING: Subroutine does not return
              memmove(puVar9,puStack_268);
            }
            *puVar9 = uVar7;
            puStack_258 = puVar9 + lVar15;
            ppuVar8 = ppuStack_328;
            uVar20 = uStack_320;
            puStack_268 = puVar9;
          }
          puStack_260 = puVar9 + 1;
          lVar15 = lStack_338;
        }
        uStack_320 = uVar20 + 1;
        puVar19 = *ppuVar8;
        puVar9 = (uint64_t *)(uint64_t)uStack_320;
        puVar21 = (uint64_t *)(int64_t)(int)uStack_320;
        param_4 = puStack_310;
      } while ((uint64_t *)(int64_t)(int)uStack_320 <
               (uint64_t *)(((int64_t)ppuVar8[1] - (int64_t)puVar19) / 0x60));
    }
  }
  lVar15 = lStack_338;
  puVar17 = (uint64_t *)0x0;
  uVar7 = *(uint64_t *)(lStack_338 + 0x1608);
  if (uVar7 == 0xffffffffffffffff) {
    FUN_180240b30(lStack_338);
    uVar7 = *(uint64_t *)(lVar15 + 0x1608);
  }
  uVar10 = uStack_330;
  if (uVar7 == 0) goto LAB_1801d8153;
  if (puStack_260 < puStack_258) {
    *puStack_260 = uVar7;
    puStack_260 = puStack_260 + 1;
    goto LAB_1801d8153;
  }
  lVar15 = (int64_t)puStack_260 - (int64_t)puStack_268 >> 3;
  if (lVar15 == 0) {
    lVar15 = 1;
LAB_1801d80f9:
    puVar9 = (uint64_t *)((int64_t)auStack_250 + uStack_50);
    uStack_50 = uStack_50 + lVar15 * 8;
  }
  else {
    lVar15 = lVar15 * 2;
    puVar9 = puVar17;
    if (lVar15 != 0) goto LAB_1801d80f9;
  }
  if (puStack_268 != puStack_260) {
                    // WARNING: Subroutine does not return
    memmove(puVar9,puStack_268);
  }
  *puVar9 = uVar7;
  puStack_260 = puVar9 + 1;
  puStack_258 = puVar9 + lVar15;
  puStack_268 = puVar9;
LAB_1801d8153:
  uVar20 = 1 << ((byte)((int64_t)puStack_260 - (int64_t)puStack_268 >> 3) & 0x1f);
  uVar1 = *(uint64_t *)(uStack_330 + 0x1e0);
  puStack_300 = &unknown_var_672_ptr;
  puStack_2f8 = auStack_2e8;
  auStack_2e8[0] = auStack_2e8[0] & 0xffffff00;
  uStack_2f0 = 0x14;
  strcpy_s(auStack_2e8,0x20,&system_data_d5b8);
  ppuVar8 = (void **)FUN_180240430(uVar1,&puStack_300,0);
  puStack_300 = &system_state_ptr;
  uVar1 = *(uint64_t *)(uVar10 + 0x1e0);
  puStack_2c8 = &unknown_var_3480_ptr;
  puStack_2c0 = auStack_2b0;
  auStack_2b0[0] = 0;
  uStack_2b8 = 0x25;
  ppuStack_328 = ppuVar8;
  strcpy_s(auStack_2b0,0x40,&system_data_d5d0);
  puVar9 = (uint64_t *)FUN_180240430(uVar1,&puStack_2c8,0);
  puStack_2c8 = &system_state_ptr;
  puStack_310 = puVar9;
  if (0 < (int)uVar20) {
    uStack_330 = (uint64_t)uVar20;
    puVar21 = puVar17;
    do {
      uVar7 = (int64_t)puStack_260 - (int64_t)puStack_268 >> 3;
      puVar16 = puVar17;
      if (uVar7 != 0) {
        uVar10 = 1;
        puVar11 = puStack_268;
        puVar18 = puVar17;
        do {
          if (((uint64_t)puVar21 & uVar10) != 0) {
            puVar16 = (uint64_t *)((uint64_t)puVar16 | *puVar11);
          }
          uVar20 = (int)puVar18 + 1;
          puVar18 = (uint64_t *)(uint64_t)uVar20;
          uVar10 = uVar10 << 1 | (uint64_t)((int64_t)uVar10 < 0);
          puVar11 = puVar11 + 1;
        } while ((uint64_t)(int64_t)(int)uVar20 < uVar7);
      }
      if (((uint64_t)ppuVar8 & (uint64_t)puVar16) == 0 ||
          ((uint64_t)puVar9 & (uint64_t)puVar16) == 0) {
        uVar7 = (uint64_t)puVar16 | uStack_318;
        puVar16 = (uint64_t *)param_4[1];
        if (puVar16 < (uint64_t *)param_4[2]) {
          param_4[1] = (uint64_t)(puVar16 + 1);
          *puVar16 = uVar7;
        }
        else {
          puVar9 = (uint64_t *)*param_4;
          lVar15 = (int64_t)puVar16 - (int64_t)puVar9 >> 3;
          if (lVar15 == 0) {
            lVar15 = 1;
LAB_1801d82f3:
            puVar11 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,lVar15 * 8,(char)param_4[3]);
            puVar16 = (uint64_t *)param_4[1];
            puVar9 = (uint64_t *)*param_4;
          }
          else {
            lVar15 = lVar15 * 2;
            puVar11 = puVar17;
            if (lVar15 != 0) goto LAB_1801d82f3;
          }
          if (puVar9 != puVar16) {
                    // WARNING: Subroutine does not return
            memmove(puVar11,puVar9,(int64_t)puVar16 - (int64_t)puVar9);
          }
          *puVar11 = uVar7;
          if (*param_4 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager();
          }
          *param_4 = (uint64_t)puVar11;
          param_4[1] = (uint64_t)(puVar11 + 1);
          param_4[2] = (uint64_t)(puVar11 + lVar15);
          puVar9 = puStack_310;
          ppuVar8 = ppuStack_328;
        }
      }
      puVar21 = (uint64_t *)((int64_t)puVar21 + 1);
      uStack_330 = uStack_330 - 1;
    } while (uStack_330 != 0);
  }
  uVar7 = FUN_180241250(lStack_338);
  iVar12 = (int)((int64_t)(param_4[1] - *param_4) >> 3);
  if (0 < iVar12) {
    do {
      puVar9 = (uint64_t *)(*param_4 + (int64_t)puVar17 * 8);
      *puVar9 = *puVar9 & ~uVar7;
      puVar17 = (uint64_t *)((int64_t)puVar17 + 1);
    } while ((int64_t)puVar17 < (int64_t)iVar12);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_358);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




