#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part160.c - 17 个函数

// 函数: void FUN_180149a10(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180149a10(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t alStackX_10 [3];
  uint64_t uStack_30;
  uint64_t uStack_28;
  code *pcStack_20;
  code *pcStack_18;
  
  if (*(int *)(param_2 + 0x380) != 2) {
    *(int *)*param_1 = *(int *)*param_1 + 1;
    plVar1 = (int64_t *)param_1[1];
    if (*plVar1 != 0) {
      alStackX_10[0] = param_2;
      SystemInitializer(*plVar1,alStackX_10,param_3,param_4,0xfffffffffffffffe);
      plVar1 = (int64_t *)param_1[1];
    }
    if ((char)plVar1[2] != '\0') {
      uStack_30 = 0;
      uStack_28 = 0;
      pcStack_20 = (code *)0x0;
      pcStack_18 = _guard_check_icall;
      FUN_1800b6f90();
      if (pcStack_20 != (code *)0x0) {
        (*pcStack_20)(&uStack_30,0,0);
      }
    }
  }
  return;
}



uint64_t * FUN_180149ad0(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &processed_var_5912_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180149b00(int64_t param_1)
void FUN_180149b00(int64_t param_1)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t *puStackX_8;
  
  lVar12 = *(int64_t *)(param_1 + 0x98d8);
  puVar5 = *(uint **)(param_1 + 0x9650);
  if (lVar12 != 0) {
    uVar2 = *(ushort *)(lVar12 + 0x32c);
    uVar3 = *(ushort *)(lVar12 + 0x32e);
    uVar11 = 0;
    FUN_18029eb90(*(uint64_t *)(system_message_buffer + 0x1cd8),lVar12,0,0,&puStackX_8,0);
    uVar8 = 0;
    lVar12 = (int64_t)(int)((uint)uVar3 * (uint)uVar2);
    uVar9 = uVar11;
    uVar10 = uVar11;
    uVar6 = uVar8;
    if (0 < lVar12) {
      do {
        iVar4 = *(int *)((int64_t)puStackX_8 + uVar10 * 4);
        uVar7 = (uint64_t)(uint)((int)uVar11 + iVar4);
        if (iVar4 == 0) {
          uVar7 = uVar11;
        }
        uVar8 = (uint)uVar7;
        uVar6 = (uint)uVar9 + 1;
        if (iVar4 == 0) {
          uVar6 = (uint)uVar9;
        }
        uVar10 = uVar10 + 1;
        uVar11 = uVar7;
        uVar9 = (uint64_t)uVar6;
      } while ((int64_t)uVar10 < lVar12);
    }
    *puVar5 = uVar6;
    puVar5[1] = uVar8;
    if (puStackX_8 != (uint64_t *)0x0) {
      uVar11 = (uint64_t)puStackX_8 & 0xffffffffffc00000;
      if (uVar11 != 0) {
        lVar12 = uVar11 + 0x80 + ((int64_t)puStackX_8 - uVar11 >> 0x10) * 0x50;
        lVar12 = lVar12 - (uint64_t)*(uint *)(lVar12 + 4);
        if ((*(void ***)(uVar11 + 0x70) == &ExceptionList) && (*(char *)(lVar12 + 0xe) == '\0')) {
          *puStackX_8 = *(uint64_t *)(lVar12 + 0x20);
          *(uint64_t **)(lVar12 + 0x20) = puStackX_8;
          piVar1 = (int *)(lVar12 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            SystemDataCleaner();
            return;
          }
        }
        else {
          func_0x00018064e870(uVar11,CONCAT71(0xff000000,
                                              *(void ***)(uVar11 + 0x70) == &ExceptionList),
                              puStackX_8,uVar11,0xfffffffffffffffe);
        }
      }
      return;
    }
  }
  return;
}





// 函数: void FUN_180149b31(int64_t param_1,int64_t param_2)
void FUN_180149b31(int64_t param_1,int64_t param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int in_EAX;
  uint uVar4;
  uint64_t uVar5;
  uint *unaff_RSI;
  uint uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t uStack0000000000000028;
  uint64_t *in_stack_00000040;
  
  uVar2 = *(ushort *)(param_2 + 0x32e);
  uVar9 = 0;
  uStack0000000000000028 = 0;
  FUN_18029eb90(*(uint64_t *)(param_1 + 0x1cd8));
  uVar6 = 0;
  lVar10 = (int64_t)(int)((uint)uVar2 * in_EAX);
  uVar7 = uVar9;
  uVar8 = uVar9;
  uVar4 = uVar6;
  if (0 < lVar10) {
    do {
      iVar3 = *(int *)((int64_t)in_stack_00000040 + uVar8 * 4);
      uVar5 = (uint64_t)(uint)((int)uVar9 + iVar3);
      if (iVar3 == 0) {
        uVar5 = uVar9;
      }
      uVar6 = (uint)uVar5;
      uVar4 = (uint)uVar7 + 1;
      if (iVar3 == 0) {
        uVar4 = (uint)uVar7;
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar5;
      uVar7 = (uint64_t)uVar4;
    } while ((int64_t)uVar8 < lVar10);
  }
  *unaff_RSI = uVar4;
  unaff_RSI[1] = uVar6;
  if (in_stack_00000040 == (uint64_t *)0x0) {
    return;
  }
  uVar9 = (uint64_t)in_stack_00000040 & 0xffffffffffc00000;
  if (uVar9 != 0) {
    lVar10 = uVar9 + 0x80 + ((int64_t)in_stack_00000040 - uVar9 >> 0x10) * 0x50;
    lVar10 = lVar10 - (uint64_t)*(uint *)(lVar10 + 4);
    if ((*(void ***)(uVar9 + 0x70) == &ExceptionList) && (*(char *)(lVar10 + 0xe) == '\0')) {
      *in_stack_00000040 = *(uint64_t *)(lVar10 + 0x20);
      *(uint64_t **)(lVar10 + 0x20) = in_stack_00000040;
      piVar1 = (int *)(lVar10 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        SystemDataCleaner();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar9,CONCAT71(0xff000000,*(void ***)(uVar9 + 0x70) == &ExceptionList),
                          in_stack_00000040,uVar9,0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_180149b76(uint64_t param_1,uint param_2,uint64_t param_3,uint64_t *param_4)
void FUN_180149b76(uint64_t param_1,uint param_2,uint64_t param_3,uint64_t *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int64_t lVar4;
  uint *unaff_RSI;
  uint unaff_EDI;
  uint64_t uVar5;
  int64_t in_R10;
  
  uVar5 = (uint64_t)unaff_EDI;
  do {
    iVar2 = *(int *)((int64_t)param_4 + uVar5 * 4);
    uVar3 = param_2 + iVar2;
    if (iVar2 == 0) {
      uVar3 = param_2;
    }
    param_2 = uVar3;
    uVar3 = unaff_EDI + 1;
    if (iVar2 == 0) {
      uVar3 = unaff_EDI;
    }
    unaff_EDI = uVar3;
    uVar5 = uVar5 + 1;
  } while ((int64_t)uVar5 < in_R10);
  *unaff_RSI = unaff_EDI;
  unaff_RSI[1] = param_2;
  if (param_4 != (uint64_t *)0x0) {
    uVar5 = (uint64_t)param_4 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar4 = uVar5 + 0x80 + ((int64_t)param_4 - uVar5 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *param_4 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = param_4;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            param_4,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_180149bac(void)
void FUN_180149bac(void)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t *in_R9;
  uint64_t uVar3;
  
  uVar3 = (uint64_t)in_R9 & 0xffffffffffc00000;
  if (uVar3 != 0) {
    lVar2 = uVar3 + 0x80 + ((int64_t)in_R9 - uVar3 >> 0x10) * 0x50;
    lVar2 = lVar2 - (uint64_t)*(uint *)(lVar2 + 4);
    if ((*(void ***)(uVar3 + 0x70) == &ExceptionList) && (*(char *)(lVar2 + 0xe) == '\0')) {
      *in_R9 = *(uint64_t *)(lVar2 + 0x20);
      *(uint64_t **)(lVar2 + 0x20) = in_R9;
      piVar1 = (int *)(lVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        SystemDataCleaner();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar3,CONCAT71(0xff000000,*(void ***)(uVar3 + 0x70) == &ExceptionList),
                          in_R9,uVar3,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180149bd0(int64_t param_1,int8_t *param_2)
void FUN_180149bd0(int64_t param_1,int8_t *param_2)

{
  int64_t *plVar1;
  code *pcVar2;
  uint64_t *puVar3;
  code *pcVar4;
  int8_t auStack_e8 [16];
  code *pcStack_d8;
  code *pcStack_d0;
  int64_t lStack_c8;
  int8_t auStack_c0 [16];
  code *pcStack_b0;
  code *pcStack_a8;
  int64_t lStack_a0;
  int8_t *apuStack_98 [2];
  code *pcStack_88;
  code *pcStack_80;
  int8_t auStack_78 [16];
  code *pcStack_68;
  code *pcStack_60;
  uint64_t uStack_58;
  int8_t *puStack_50;
  
  uStack_58 = 0xfffffffffffffffe;
  if (*(int64_t *)(param_1 + 0xc0) == 0) {
    puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x60,8,3);
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(int32_t *)(puVar3 + 3) = 3;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *(int32_t *)(puVar3 + 7) = 3;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    *(int32_t *)(puVar3 + 0xb) = 3;
    *(uint64_t **)(param_1 + 0xc0) = puVar3;
    pcStack_68 = (code *)&processed_var_5136_ptr;
    pcStack_60 = _guard_check_icall;
    plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0xa8) + 0x88);
    pcVar2 = *(code **)(*plVar1 + 0x70);
    pcStack_d8 = (code *)0x0;
    pcStack_d0 = _guard_check_icall;
    if (auStack_e8 != param_2) {
      pcVar4 = *(code **)(param_2 + 0x10);
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(auStack_e8,param_2,1);
        pcVar4 = *(code **)(param_2 + 0x10);
      }
      pcStack_d0 = *(code **)(param_2 + 0x18);
      pcStack_d8 = pcVar4;
    }
    pcStack_b0 = (code *)0x0;
    pcStack_a8 = _guard_check_icall;
    lStack_c8 = param_1;
    FUN_180069130(auStack_c0,auStack_e8);
    lStack_a0 = lStack_c8;
    pcStack_88 = FUN_18014f840;
    pcStack_80 = FUN_18014f810;
    apuStack_98[0] = (int8_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,system_allocation_flags);
    *(uint64_t *)(apuStack_98[0] + 0x10) = 0;
    *(code **)(apuStack_98[0] + 0x18) = _guard_check_icall;
    puStack_50 = apuStack_98[0];
    if (apuStack_98[0] != auStack_c0) {
      FUN_180069130(apuStack_98[0],auStack_c0);
    }
    *(int64_t *)(apuStack_98[0] + 0x20) = lStack_a0;
    if (pcStack_b0 != (code *)0x0) {
      (*pcStack_b0)(auStack_c0,0,0);
    }
    if (pcStack_d8 != (code *)0x0) {
      (*pcStack_d8)(auStack_e8,0,0);
    }
    (*pcVar2)(plVar1,&system_data_c968,*(int64_t *)(param_1 + 0xa8) + 0xc,0,apuStack_98,auStack_78);
    if (pcStack_88 != (code *)0x0) {
      (*pcStack_88)(apuStack_98,0,0);
    }
    if (pcStack_68 != (code *)0x0) {
      (*pcStack_68)(auStack_78,0,0);
    }
  }
  else {
    (**(code **)(param_2 + 0x18))(param_2);
  }
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    (**(code **)(param_2 + 0x10))(param_2,0,0);
  }
  return;
}





// 函数: void FUN_180149eb0(int64_t *param_1)
void FUN_180149eb0(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  plVar1 = (int64_t *)param_1[1];
  plVar2 = (int64_t *)*param_1;
  while( true ) {
    if (plVar2 == plVar1) {
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      return;
    }
    if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *plVar2 = 0;
    if (plVar2[3] != 0) break;
    plVar2 = plVar2 + 7;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180149ed0(int64_t param_1,int8_t *param_2,float *param_3)
void FUN_180149ed0(int64_t param_1,int8_t *param_2,float *param_3)

{
  int *piVar1;
  int64_t *plVar2;
  code *pcVar3;
  int iVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t uVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  int8_t auStack_108 [16];
  code *pcStack_f8;
  code *pcStack_f0;
  uint uStack_e8;
  int64_t lStack_e0;
  float *pfStack_d8;
  uint64_t auStack_d0 [2];
  code *pcStack_c0;
  code *pcStack_b8;
  int8_t auStack_b0 [16];
  code *pcStack_a0;
  code *pcStack_98;
  uint64_t uStack_90;
  int8_t auStack_88 [72];
  uint64_t uVar11;
  
  uStack_90 = 0xfffffffffffffffe;
  iVar4 = 2;
  if (param_3[1] <= 0.0 && param_3[1] != 0.0) {
    iVar4 = 0;
  }
  iVar9 = 4;
  if (*param_3 <= 0.0 && *param_3 != 0.0) {
    iVar9 = 0;
  }
  uVar10 = iVar9 + iVar4 + (uint)(0.0 < param_3[2] || param_3[2] == 0.0);
  uVar11 = (uint64_t)uVar10;
  if (*(int64_t *)(param_1 + 200 + uVar11 * 8) == 0) {
    puVar5 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x60,8,3);
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *(int32_t *)(puVar5 + 3) = 3;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    *(int32_t *)(puVar5 + 7) = 3;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    *(int32_t *)(puVar5 + 0xb) = 3;
    *(uint64_t **)(param_1 + 200 + uVar11 * 8) = puVar5;
    pcStack_a0 = (code *)&processed_var_4704_ptr;
    pcStack_98 = _guard_check_icall;
    plVar2 = *(int64_t **)(*(int64_t *)(param_1 + 0xa8) + 0x88);
    pcVar3 = *(code **)(*plVar2 + 0x70);
    pcStack_f8 = (code *)0x0;
    pcStack_f0 = _guard_check_icall;
    if (auStack_108 != param_2) {
      pcVar8 = *(code **)(param_2 + 0x10);
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(auStack_108,param_2,1);
        pcVar8 = *(code **)(param_2 + 0x10);
      }
      pcStack_f0 = *(code **)(param_2 + 0x18);
      pcStack_f8 = pcVar8;
    }
    uStack_e8 = uVar10;
    lStack_e0 = param_1;
    pfStack_d8 = param_3;
    lVar6 = FUN_18014e960(auStack_88,auStack_108);
    pcStack_c0 = FUN_18014f6a0;
    pcStack_b8 = FUN_18014f660;
    uVar7 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x38,8,system_allocation_flags);
    FUN_18014e960(uVar7,lVar6);
    auStack_d0[0] = uVar7;
    if (*(code **)(lVar6 + 0x10) != (code *)0x0) {
      (**(code **)(lVar6 + 0x10))(lVar6,0,0);
    }
    if (pcStack_f8 != (code *)0x0) {
      (*pcStack_f8)(auStack_108,0,0);
    }
    (*pcVar3)(plVar2,&system_data_c990,*(int64_t *)(param_1 + 0xa8) + 0xc,0,auStack_d0,auStack_b0);
    if (pcStack_c0 != (code *)0x0) {
      (*pcStack_c0)(auStack_d0,0,0);
    }
    if (pcStack_a0 != (code *)0x0) {
      (*pcStack_a0)(auStack_b0,0,0);
    }
  }
  else {
    (**(code **)(param_2 + 0x18))(param_2);
  }
  piVar1 = (int *)(param_1 + 0x108 + uVar11 * 4);
  *piVar1 = *piVar1 + 1;
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    (**(code **)(param_2 + 0x10))(param_2,0,0);
  }
  return;
}



uint64_t * FUN_18014a1b0(uint64_t *param_1)

{
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &processed_var_8584_ptr;
  param_1[2] = &system_state_ptr;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[2] = &memory_allocator_3432_ptr;
  param_1[3] = param_1 + 5;
  *(int32_t *)(param_1 + 4) = 0;
  *(int8_t *)(param_1 + 5) = 0;
  *(int8_t *)((int64_t)param_1 + 0xb2) = 0;
  *(int32_t *)(param_1 + 1) = 0;
  *(int16_t *)(param_1 + 0x16) = 0;
  param_1[0x15] = 0;
  *param_1 = &processed_var_5960_ptr;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  *(int8_t *)((int64_t)param_1 + 300) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(int32_t *)(param_1 + 0x25) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return param_1;
}



uint64_t *
FUN_18014a2d0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_5960_ptr;
  FUN_18014e610(param_1[0x17]);
  param_1[0x17] = 0;
  *param_1 = &processed_var_8584_ptr;
  param_1[2] = &system_state_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x140,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18014a370(int64_t param_1,char param_2,int8_t *param_3)
void FUN_18014a370(int64_t param_1,char param_2,int8_t *param_3)

{
  int64_t *plVar1;
  char cVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  code *pcVar6;
  int64_t lStack_148;
  int8_t auStack_140 [16];
  code *pcStack_130;
  code *pcStack_128;
  uint64_t auStack_120 [2];
  code *pcStack_110;
  void *puStack_108;
  int64_t lStack_100;
  int8_t auStack_f8 [16];
  code *pcStack_e8;
  code *pcStack_e0;
  int8_t auStack_d8 [16];
  code *pcStack_c8;
  uint64_t uStack_b0;
  int8_t auStack_a8 [40];
  int8_t auStack_80 [40];
  int8_t auStack_58 [48];
  
  uStack_b0 = 0xfffffffffffffffe;
  if (*(int64_t *)(param_1 + 0xb8) == 0) {
    if (*(int64_t *)(param_1 + 0xa8) == 0) {
      uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x130,8,6);
                    // WARNING: Subroutine does not return
      memset(uVar3,0,0x130);
    }
    pcStack_e8 = (code *)0x0;
    pcStack_e0 = _guard_check_icall;
    lStack_100 = param_1;
    if (auStack_f8 != param_3) {
      pcVar6 = *(code **)(param_3 + 0x10);
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(auStack_f8,param_3,1);
        pcVar6 = *(code **)(param_3 + 0x10);
      }
      pcStack_e0 = *(code **)(param_3 + 0x18);
      pcStack_e8 = pcVar6;
    }
    pcStack_130 = (code *)0x0;
    pcStack_128 = _guard_check_icall;
    lStack_148 = param_1;
    if (auStack_140 != param_3) {
      pcVar6 = *(code **)(param_3 + 0x10);
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(auStack_140,param_3,1);
        pcVar6 = *(code **)(param_3 + 0x10);
      }
      pcStack_128 = *(code **)(param_3 + 0x18);
      pcStack_130 = pcVar6;
    }
    if (param_2 == '\0') {
      plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0xa8) + 0x88);
      pcVar6 = *(code **)(*plVar1 + 0x70);
      lVar4 = FUN_18014aa50(auStack_a8,&lStack_148);
      lVar5 = FUN_18014aa50(auStack_80,lVar4);
      pcStack_110 = FUN_18014f3f0;
      puStack_108 = &processed_var_4080_ptr;
      uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,system_allocation_flags);
      FUN_18014aa50(uVar3,lVar5);
      auStack_120[0] = uVar3;
      if (*(code **)(lVar5 + 0x18) != (code *)0x0) {
        (**(code **)(lVar5 + 0x18))(lVar5 + 8,0,0);
      }
      if (*(code **)(lVar4 + 0x18) != (code *)0x0) {
        (**(code **)(lVar4 + 0x18))(lVar4 + 8,0,0);
      }
      uVar3 = FUN_18014aa50(auStack_58,&lStack_100);
      FUN_18014e700(auStack_d8,uVar3);
      (*pcVar6)(plVar1,&system_data_0d48,*(int64_t *)(param_1 + 0xa8) + 0xc,0,auStack_d8,auStack_120);
      if (pcStack_c8 != (code *)0x0) {
        (*pcStack_c8)(auStack_d8,0,0);
      }
      if (pcStack_110 != (code *)0x0) {
        (*pcStack_110)(auStack_120,0,0);
      }
    }
    else {
      plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0xa8) + 0x88);
      pcVar6 = *(code **)(*plVar1 + 0x60);
      uVar3 = FUN_18014aa50(auStack_d8,&lStack_100);
      FUN_18014e700(auStack_120,uVar3);
      cVar2 = (*pcVar6)(plVar1,&system_data_0d48,*(int64_t *)(param_1 + 0xa8) + 0xc,0,auStack_120);
      if (pcStack_110 != (code *)0x0) {
        (*pcStack_110)(auStack_120,0,0);
      }
      if ((cVar2 == '\0') && (pcStack_130 != (code *)0x0)) {
        (*pcStack_128)(0,lStack_148,auStack_140);
      }
    }
    if (pcStack_130 != (code *)0x0) {
      (*pcStack_130)(auStack_140,0,0);
    }
    if (pcStack_e8 != (code *)0x0) {
      (*pcStack_e8)(auStack_f8,0,0);
    }
  }
  else {
    (**(code **)(param_3 + 0x18))(1,param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18014a720(void)
void FUN_18014a720(void)

{
  uint64_t uVar1;
  
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x130,8,3);
                    // WARNING: Subroutine does not return
  memset(uVar1,0,0x130);
}



uint64_t * FUN_18014a900(uint64_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(int32_t *)(param_1 + 7) = 3;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xb) = 3;
  param_1[0xc] = &system_state_ptr;
  param_1[0xd] = 0;
  *(int32_t *)(param_1 + 0xe) = 0;
  param_1[0xc] = &memory_allocator_3432_ptr;
  param_1[0xd] = param_1 + 0xf;
  *(int32_t *)(param_1 + 0xe) = 0;
  *(int8_t *)(param_1 + 0xf) = 0;
  *(int32_t *)(param_1 + 0x25) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return param_1;
}





// 函数: void FUN_18014a9d0(uint64_t *param_1)
void FUN_18014a9d0(uint64_t *param_1)

{
  FUN_18014e570();
  FUN_18014e4d0();
  FUN_18014e470();
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}



uint64_t *
FUN_18014aa50(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  
  *param_1 = *param_2;
  param_1[3] = 0;
  param_1[4] = _guard_check_icall;
  if (param_1 + 1 != param_2 + 1) {
    pcVar1 = (code *)param_2[3];
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1 + 1,param_2 + 1,1,param_4,0xfffffffffffffffe);
      pcVar1 = (code *)param_2[3];
    }
    param_1[3] = pcVar1;
    param_1[4] = param_2[4];
  }
  return param_1;
}





// 函数: void FUN_18014aae0(int64_t *param_1)
void FUN_18014aae0(int64_t *param_1)

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
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_18014ab00(int64_t *param_1)
void FUN_18014ab00(int64_t *param_1)

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
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_18014ab20(int64_t *param_1)
void FUN_18014ab20(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
    *(uint64_t *)(lVar2 + 0x28) = &system_data_buffer_ptr;
    if (*(int64_t *)(lVar2 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(lVar2 + 0x30) = 0;
    *(int32_t *)(lVar2 + 0x40) = 0;
    *(uint64_t *)(lVar2 + 0x28) = &system_state_ptr;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}





// 函数: void FUN_18014ab40(int64_t *param_1)
void FUN_18014ab40(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
    *(uint64_t *)(lVar2 + 0x18) = &system_data_buffer_ptr;
    if (*(int64_t *)(lVar2 + 0x20) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(lVar2 + 0x20) = 0;
    *(int32_t *)(lVar2 + 0x30) = 0;
    *(uint64_t *)(lVar2 + 0x18) = &system_state_ptr;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18014ab60(uint64_t *param_1,uint64_t param_2)
void FUN_18014ab60(uint64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  void *puStack_b8;
  int64_t lStack_b0;
  int32_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  int32_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  int32_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  
  lVar1 = core_system_data_config;
  uStack_38 = 0xfffffffffffffffe;
  lVar3 = 0;
  if (*(int *)(*(int64_t *)(*(int64_t *)*param_1 + 0x20) + 0x20) != 0) {
    iVar2 = RenderingSystem_PostProcessor(core_system_data_config,*(int64_t *)(*(int64_t *)*param_1 + 0x20) + 0x10);
    lVar3 = 0;
    if (iVar2 != -1) {
      lVar3 = (int64_t)iVar2 * 0x68 + *(int64_t *)(lVar1 + 0x38);
    }
  }
  puStack_b8 = &system_data_buffer_ptr;
  uStack_a0 = 0;
  lStack_b0 = 0;
  uStack_a8 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 6;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 6;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 6;
  FUN_18025e700(&puStack_b8,param_2);
  FUN_18025fe70(*(uint64_t *)(param_1[1] + 0xb8),&puStack_b8,lVar3);
  FUN_18014e570(&uStack_58);
  FUN_18014e4d0(&uStack_78);
  FUN_18014e470(&uStack_98);
  puStack_b8 = &system_data_buffer_ptr;
  if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_18014acf0(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  void *puVar4;
  int32_t uVar5;
  uint64_t uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x140,0x10,3,0,0xfffffffffffffffe);
  plVar3 = (int64_t *)FUN_18014a1b0(uVar2);
  *param_2 = (int64_t)plVar3;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  uVar5 = 1;
  *(uint64_t *)(*param_2 + 0xa8) = *(uint64_t *)(param_1 + 0xa8);
  lVar1 = *param_2;
  *(int32_t *)(lVar1 + 0x20) = *(int32_t *)(param_1 + 0x20);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    puVar4 = *(void **)(param_1 + 0x18);
  }
  strcpy_s(*(uint64_t *)(lVar1 + 0x18),0x80,puVar4);
  *(uint64_t *)(*param_2 + 0xb8) = 0;
  if (*(int64_t *)(param_1 + 0xb8) != 0) {
    uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x130,8,6,uVar5,uVar6);
                    // WARNING: Subroutine does not return
    memset(uVar2,0,0x130);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18014ae10(int64_t *param_1,int64_t *param_2)
void FUN_18014ae10(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  void *puVar8;
  int64_t lVar9;
  
  lVar5 = param_2[0x20];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = lVar5;
  uVar3 = *(int32_t *)((int64_t)param_2 + 0x10c);
  lVar5 = param_2[0x22];
  uVar4 = *(int32_t *)((int64_t)param_2 + 0x114);
  *(int *)(param_1 + 0x21) = (int)param_2[0x21];
  *(int32_t *)((int64_t)param_1 + 0x10c) = uVar3;
  *(int *)(param_1 + 0x22) = (int)lVar5;
  *(int32_t *)((int64_t)param_1 + 0x114) = uVar4;
  uVar3 = *(int32_t *)((int64_t)param_2 + 0x11c);
  lVar5 = param_2[0x24];
  uVar4 = *(int32_t *)((int64_t)param_2 + 0x124);
  *(int *)(param_1 + 0x23) = (int)param_2[0x23];
  *(int32_t *)((int64_t)param_1 + 0x11c) = uVar3;
  *(int *)(param_1 + 0x24) = (int)lVar5;
  *(int32_t *)((int64_t)param_1 + 0x124) = uVar4;
  *(int *)(param_1 + 0x25) = (int)param_2[0x25];
  if (param_1 != param_2) {
    lVar5 = *param_2;
    lVar1 = param_2[1];
    lVar9 = lVar1 - lVar5;
    lVar6 = lVar9 / 6 + (lVar9 >> 0x3f);
    uVar7 = (lVar6 >> 3) - (lVar6 >> 0x3f);
    if ((uint64_t)((param_1[2] - *param_1) / 0x30) < uVar7) {
      if (uVar7 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar7 * 0x30,(char)param_1[3]);
      }
      if (lVar5 != lVar1) {
                    // WARNING: Subroutine does not return
        memmove(lVar6,lVar5,lVar9);
      }
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *param_1 = lVar6;
      lVar6 = uVar7 * 0x30 + lVar6;
      param_1[1] = lVar6;
      param_1[2] = lVar6;
    }
    else {
      uVar2 = (param_1[1] - *param_1) / 0x30;
      if (uVar2 < uVar7) {
        lVar6 = uVar2 * 0x30 + lVar5;
        FUN_18014fb60(lVar5,lVar6);
        lVar5 = FUN_18014fb60(lVar6,lVar1,param_1[1]);
      }
      else {
        lVar5 = FUN_18014fb60(lVar5,lVar1);
      }
      param_1[1] = lVar5;
    }
  }
  FUN_18014e160(param_1 + 4,param_2 + 4);
  if (param_1 + 8 != param_2 + 8) {
    FUN_18014eff0(param_1 + 8,param_2[8],param_2[9]);
  }
  *(int *)(param_1 + 0xe) = (int)param_2[0xe];
  puVar8 = &system_buffer_ptr;
  if ((void *)param_2[0xd] != (void *)0x0) {
    puVar8 = (void *)param_2[0xd];
  }
                    // WARNING: Could not recover jumptable at 0x00018014afdc. Too many branches
                    // WARNING: Treating indirect jump as call
  strcpy_s(param_1[0xd],0x80,puVar8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



