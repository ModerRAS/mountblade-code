#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part029.c - 12 个函数

// 函数: void FUN_1802a00a0(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_1802a00a0(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  int64_t param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  
  if (((char)param_4 == '\0') && (param_3 != param_1)) {
    if (*(int *)(param_3 + 0x30) == 0) {
LAB_1802a010a:
      uVar5 = 1;
      goto LAB_1802a0115;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar2 = *(byte **)(param_3 + 0x28);
      lVar4 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar3 = (uint)pbVar2[lVar4];
        if (bVar1 != uVar3) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar3 != 0);
      if ((int)(bVar1 - uVar3) < 1) goto LAB_1802a010a;
    }
  }
  uVar5 = 0;
LAB_1802a0115:
  lVar4 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x158,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  FUN_180068ff0(lVar4 + 0x20,param_5);
  *(uint64_t *)(lVar4 + 0x138) = 0;
  *(uint64_t *)(lVar4 + 0x140) = 0;
  *(uint64_t *)(lVar4 + 0x148) = 0;
  *(uint64_t *)(lVar4 + 0x150) = 0;
                    // WARNING: Subroutine does not return
  SystemStateController(lVar4,param_3,param_1,uVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802a01a0(uint64_t *param_1)
void FUN_1802a01a0(uint64_t *param_1)

{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int iVar4;
  uint64_t uVar5;
  void **ppuVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar9;
  bool bVar10;
  int8_t auStack_238 [32];
  void **ppuStack_218;
  void ***pppuStack_210;
  void **ppuStack_208;
  uint64_t uStack_200;
  void *puStack_1f8;
  int8_t *puStack_1f0;
  int32_t uStack_1e8;
  int8_t auStack_1e0 [128];
  int32_t uStack_160;
  uint64_t uStack_158;
  void *puStack_118;
  int8_t *puStack_110;
  int32_t uStack_108;
  int8_t auStack_100 [128];
  int32_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_38;
  
  uStack_200 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_238;
  if (system_data_ecee == '\0') {
    uVar7 = 0;
    if (param_1[2] != 0) {
      iVar1 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
      iVar4 = _Thrd_id();
      if (iVar4 == iVar1) {
        if ((int64_t *)param_1[2] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)param_1[2] + 0x10))();
          param_1[2] = 0;
        }
      }
      else {
        ppuStack_218 = &puStack_1f8;
        puStack_1f8 = &unknown_var_3432_ptr;
        puStack_1f0 = auStack_1e0;
        uStack_1e8 = 0;
        auStack_1e0[0] = 0;
        uStack_160 = 0x12;
        uStack_158 = param_1[2];
        uVar5 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
        ppuVar6 = (void **)FUN_18005ce30(uVar5,&puStack_1f8);
        ppuStack_208 = ppuVar6;
        if (ppuVar6 != (void **)0x0) {
          (**(code **)(*ppuVar6 + 0x28))(ppuVar6);
        }
        lVar3 = system_context_ptr;
        pppuStack_210 = &ppuStack_218;
        ppuStack_218 = ppuVar6;
        if (ppuVar6 != (void **)0x0) {
          (**(code **)(*ppuVar6 + 0x28))(ppuVar6);
        }
        FUN_18005e370(lVar3,&ppuStack_218);
        param_1[2] = 0;
        if (ppuVar6 != (void **)0x0) {
          (**(code **)(*ppuVar6 + 0x38))(ppuVar6);
        }
        pppuStack_210 = (void ***)&puStack_1f8;
        puStack_1f8 = &system_state_ptr;
      }
    }
    iVar1 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
    iVar4 = _Thrd_id();
    bVar10 = iVar4 != iVar1;
    uVar9 = uVar7;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        if ((param_1[3] != 0) &&
           (plVar2 = *(int64_t **)(param_1[3] + uVar7), plVar2 != (int64_t *)0x0)) {
          if (bVar10) {
            pppuStack_210 = (void ***)&puStack_1f8;
            puStack_1f8 = &unknown_var_3432_ptr;
            puStack_1f0 = auStack_1e0;
            uStack_1e8 = 0;
            auStack_1e0[0] = 0;
            uStack_160 = 0x12;
            uStack_158 = *(uint64_t *)(uVar7 + param_1[3]);
            uVar5 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
            ppuVar6 = (void **)FUN_18005ce30(uVar5,&puStack_1f8);
            ppuStack_208 = ppuVar6;
            if (ppuVar6 != (void **)0x0) {
              (**(code **)(*ppuVar6 + 0x28))(ppuVar6);
            }
            lVar3 = system_context_ptr;
            pppuStack_210 = &ppuStack_218;
            ppuStack_218 = ppuVar6;
            if (ppuVar6 != (void **)0x0) {
              (**(code **)(*ppuVar6 + 0x28))(ppuVar6);
            }
            FUN_18005e370(lVar3,&ppuStack_218);
            *(uint64_t *)(uVar7 + param_1[3]) = 0;
            if (ppuVar6 != (void **)0x0) {
              (**(code **)(*ppuVar6 + 0x38))(ppuVar6);
            }
            pppuStack_210 = (void ***)&puStack_1f8;
            puStack_1f8 = &system_state_ptr;
          }
          else {
            (**(code **)(*plVar2 + 0x10))();
            *(uint64_t *)(uVar7 + param_1[3]) = 0;
          }
        }
        uVar8 = (int)uVar9 + 1;
        uVar7 = uVar7 + 8;
        uVar9 = (uint64_t)uVar8;
      } while ((int)uVar8 < *(int *)(param_1 + 4));
    }
    if (param_1[3] != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    param_1[3] = 0;
    if ((int64_t *)param_1[1] != (int64_t *)0x0) {
      if (bVar10) {
        pppuStack_210 = (void ***)&puStack_118;
        puStack_118 = &unknown_var_3432_ptr;
        puStack_110 = auStack_100;
        uStack_108 = 0;
        auStack_100[0] = 0;
        uStack_80 = 0xe;
        uStack_78 = param_1[1];
        uVar5 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
        ppuVar6 = (void **)FUN_18005ce30(uVar5,&puStack_118);
        ppuStack_208 = ppuVar6;
        if (ppuVar6 != (void **)0x0) {
          (**(code **)(*ppuVar6 + 0x28))(ppuVar6);
        }
        lVar3 = system_context_ptr;
        pppuStack_210 = &ppuStack_218;
        ppuStack_218 = ppuVar6;
        if (ppuVar6 != (void **)0x0) {
          (**(code **)(*ppuVar6 + 0x28))(ppuVar6);
        }
        FUN_18005e370(lVar3,&ppuStack_218);
        param_1[1] = 0;
        if (ppuVar6 != (void **)0x0) {
          (**(code **)(*ppuVar6 + 0x38))(ppuVar6);
        }
        pppuStack_210 = (void ***)&puStack_118;
        puStack_118 = &system_state_ptr;
      }
      else {
        (**(code **)(*(int64_t *)param_1[1] + 0x10))();
      }
    }
    *param_1 = 0;
    *(int8_t *)(param_1 + 6) = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(int32_t *)(param_1 + 5) = 0;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802a05d0(int64_t param_1,uint64_t *param_2)
void FUN_1802a05d0(int64_t param_1,uint64_t *param_2)

{
  int8_t auStack_d8 [32];
  int32_t uStack_b8;
  int32_t uStack_b4;
  uint64_t uStack_b0;
  uint64_t *puStack_a8;
  int8_t auStack_98 [128];
  uint64_t uStack_18;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  uStack_b8 = 0;
  puStack_a8 = param_2;
  if (*(int64_t *)(param_1 + 8) != 0) {
    uStack_b4 = 0x80;
                    // WARNING: Subroutine does not return
    memset(auStack_98,0,0x80);
  }
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0;
  strcpy_s(param_2[1],0x80,&system_buffer_ptr);
  uStack_b8 = 1;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_d8);
}



uint64_t *
FUN_1802a0730(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  param_1[10] = &system_state_ptr;
  FUN_1802a07c0(param_1 + 2);
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x170,param_3,param_4,uVar1);
  }
  return param_1;
}






// 函数: void FUN_1802a07a0(void)
void FUN_1802a07a0(void)

{
  FUN_1802a07c0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802a07c0(int64_t *param_1)
void FUN_1802a07c0(int64_t *param_1)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  int64_t ****pppplVar4;
  uint64_t uVar5;
  int64_t *****ppppplVar6;
  int8_t auStack_248 [32];
  int64_t ****pppplStack_228;
  int64_t ****pppplStack_220;
  int64_t ****pppplStack_218;
  int64_t ***ppplStack_210;
  uint64_t uStack_208;
  void *puStack_1f8;
  int8_t *puStack_1f0;
  int32_t uStack_1e8;
  int8_t auStack_1e0 [128];
  int32_t uStack_160;
  int64_t lStack_158;
  int64_t ***ppplStack_118;
  int8_t *puStack_110;
  int32_t uStack_108;
  int8_t auStack_100 [128];
  int32_t uStack_80;
  int64_t lStack_78;
  uint64_t uStack_38;
  
  uStack_208 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_248;
  if (system_data_ecee == '\0') {
    if (param_1[1] != 0) {
      iVar1 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
      iVar3 = _Thrd_id();
      if (iVar3 == iVar1) {
        if ((int64_t *)param_1[1] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)param_1[1] + 0x10))();
          param_1[1] = 0;
        }
      }
      else {
        pppplStack_228 = &ppplStack_118;
        ppplStack_118 = (int64_t ***)&unknown_var_3432_ptr;
        puStack_110 = auStack_100;
        uStack_108 = 0;
        auStack_100[0] = 0;
        uStack_80 = 0x12;
        lStack_78 = param_1[1];
        uVar5 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
        pppplVar4 = (int64_t ****)FUN_18005ce30(uVar5,&ppplStack_118);
        pppplStack_220 = pppplVar4;
        if (pppplVar4 != (int64_t ****)0x0) {
          (*(code *)(*pppplVar4)[5])(pppplVar4);
        }
        lVar2 = system_context_ptr;
        pppplStack_228 = &ppplStack_210;
        ppplStack_210 = (int64_t ***)pppplVar4;
        if (pppplVar4 != (int64_t ****)0x0) {
          (*(code *)(*pppplVar4)[5])(pppplVar4);
        }
        FUN_18005e370(lVar2,&ppplStack_210);
        param_1[1] = 0;
        if (pppplVar4 != (int64_t ****)0x0) {
          (*(code *)(*pppplVar4)[7])(pppplVar4);
        }
        pppplStack_220 = &ppplStack_118;
        ppplStack_118 = (int64_t ***)&system_state_ptr;
      }
    }
    if (param_1[2] != 0) {
      iVar1 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
      iVar3 = _Thrd_id();
      if (iVar3 == iVar1) {
        if ((int64_t *)param_1[2] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)param_1[2] + 0x10))();
          param_1[2] = 0;
        }
      }
      else {
        pppplStack_220 = (int64_t ****)&puStack_1f8;
        puStack_1f8 = &unknown_var_3432_ptr;
        puStack_1f0 = auStack_1e0;
        uStack_1e8 = 0;
        auStack_1e0[0] = 0;
        uStack_160 = 0x12;
        lStack_158 = param_1[2];
        uVar5 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
        ppppplVar6 = (int64_t *****)FUN_18005ce30(uVar5,&puStack_1f8);
        pppplStack_218 = (int64_t ****)ppppplVar6;
        if (ppppplVar6 != (int64_t *****)0x0) {
          (*(code *)(*ppppplVar6)[5])(ppppplVar6);
        }
        lVar2 = system_context_ptr;
        pppplStack_220 = (int64_t ****)&pppplStack_228;
        pppplStack_228 = (int64_t ****)ppppplVar6;
        if (ppppplVar6 != (int64_t *****)0x0) {
          (*(code *)(*ppppplVar6)[5])(ppppplVar6);
        }
        FUN_18005e370(lVar2,&pppplStack_228);
        param_1[2] = 0;
        if (ppppplVar6 != (int64_t *****)0x0) {
          (*(code *)(*ppppplVar6)[7])(ppppplVar6);
        }
        pppplStack_218 = (int64_t ****)&puStack_1f8;
        puStack_1f8 = &system_state_ptr;
      }
    }
    if (*param_1 != 0) {
      iVar1 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
      iVar3 = _Thrd_id();
      if (iVar3 == iVar1) {
        if ((int64_t *)*param_1 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*param_1 + 0x10))();
        }
      }
      else {
        pppplStack_218 = (int64_t ****)&puStack_1f8;
        puStack_1f8 = &unknown_var_3432_ptr;
        puStack_1f0 = auStack_1e0;
        uStack_1e8 = 0;
        auStack_1e0[0] = 0;
        uStack_160 = 0xe;
        lStack_158 = *param_1;
        uVar5 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
        ppppplVar6 = (int64_t *****)FUN_18005ce30(uVar5,&puStack_1f8);
        pppplStack_220 = (int64_t ****)ppppplVar6;
        if (ppppplVar6 != (int64_t *****)0x0) {
          (*(code *)(*ppppplVar6)[5])(ppppplVar6);
        }
        lVar2 = system_context_ptr;
        pppplStack_218 = (int64_t ****)&pppplStack_228;
        pppplStack_228 = (int64_t ****)ppppplVar6;
        if (ppppplVar6 != (int64_t *****)0x0) {
          (*(code *)(*ppppplVar6)[5])(ppppplVar6);
        }
        FUN_18005e370(lVar2,&pppplStack_228);
        *param_1 = 0;
        if (ppppplVar6 != (int64_t *****)0x0) {
          (*(code *)(*ppppplVar6)[7])(ppppplVar6);
        }
        pppplStack_218 = (int64_t ****)&puStack_1f8;
        puStack_1f8 = &system_state_ptr;
      }
    }
  }
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)((int64_t)param_1 + 0x1c) = 0;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_248);
}






// 函数: void FUN_1802a0b90(void)
void FUN_1802a0b90(void)

{
  FUN_1802a0bb0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802a0bb0(int64_t param_1)
void FUN_1802a0bb0(int64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t **pplVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar9;
  int8_t auStack_248 [32];
  int64_t **pplStack_228;
  int64_t ***ppplStack_220;
  int64_t *plStack_218;
  uint64_t uStack_210;
  int64_t **pplStack_208;
  int64_t *plStack_1f8;
  int8_t *puStack_1f0;
  int32_t uStack_1e8;
  int8_t auStack_1e0 [128];
  int32_t uStack_160;
  uint64_t uStack_158;
  void *puStack_118;
  int8_t *puStack_110;
  int32_t uStack_108;
  int8_t auStack_100 [128];
  int32_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_38;
  
  uStack_210 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_248;
  if ((*(int64_t *)(param_1 + 0x10) != 0) && (system_data_ecee == '\0')) {
    iVar1 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
    iVar3 = _Thrd_id();
    uVar7 = 0;
    if (iVar3 == iVar1) {
      if (*(int64_t **)(param_1 + 0x10) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(param_1 + 0x10) + 0x10))();
        *(uint64_t *)(param_1 + 0x10) = 0;
      }
    }
    else {
      pplStack_228 = &plStack_1f8;
      plStack_1f8 = (int64_t *)&unknown_var_3432_ptr;
      puStack_1f0 = auStack_1e0;
      uStack_1e8 = 0;
      auStack_1e0[0] = 0;
      uStack_160 = 0x12;
      uStack_158 = *(uint64_t *)(param_1 + 0x10);
      uVar5 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
      plVar4 = (int64_t *)FUN_18005ce30(uVar5,&plStack_1f8);
      ppplStack_220 = (int64_t ***)plVar4;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4);
      }
      lVar2 = system_context_ptr;
      pplStack_228 = &plStack_218;
      plStack_218 = plVar4;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4);
      }
      FUN_18005e370(lVar2,&plStack_218);
      *(uint64_t *)(param_1 + 0x10) = 0;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4);
      }
      ppplStack_220 = (int64_t ***)&plStack_1f8;
      plStack_1f8 = (int64_t *)&system_state_ptr;
    }
    uVar9 = uVar7;
    if (0 < *(int *)(param_1 + 0x20)) {
      do {
        if ((*(int64_t *)(param_1 + 0x18) != 0) &&
           (plVar4 = *(int64_t **)(uVar7 + *(int64_t *)(param_1 + 0x18)),
           plVar4 != (int64_t *)0x0)) {
          if (iVar3 == iVar1) {
            (**(code **)(*plVar4 + 0x10))();
            *(uint64_t *)(uVar7 + *(int64_t *)(param_1 + 0x18)) = 0;
          }
          else {
            ppplStack_220 = (int64_t ***)&puStack_118;
            puStack_118 = &unknown_var_3432_ptr;
            puStack_110 = auStack_100;
            uStack_108 = 0;
            auStack_100[0] = 0;
            uStack_80 = 0x12;
            uStack_78 = *(uint64_t *)(uVar7 + *(int64_t *)(param_1 + 0x18));
            uVar5 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
            pplVar6 = (int64_t **)FUN_18005ce30(uVar5,&puStack_118);
            pplStack_208 = pplVar6;
            if (pplVar6 != (int64_t **)0x0) {
              (*(code *)(*pplVar6)[5])(pplVar6);
            }
            lVar2 = system_context_ptr;
            ppplStack_220 = &pplStack_228;
            pplStack_228 = pplVar6;
            if (pplVar6 != (int64_t **)0x0) {
              (*(code *)(*pplVar6)[5])(pplVar6);
            }
            FUN_18005e370(lVar2,&pplStack_228);
            *(uint64_t *)(uVar7 + *(int64_t *)(param_1 + 0x18)) = 0;
            if (pplVar6 != (int64_t **)0x0) {
              (*(code *)(*pplVar6)[7])(pplVar6);
            }
            ppplStack_220 = (int64_t ***)&puStack_118;
            puStack_118 = &system_state_ptr;
          }
        }
        uVar8 = (int)uVar9 + 1;
        uVar7 = uVar7 + 8;
        uVar9 = (uint64_t)uVar8;
      } while ((int)uVar8 < *(int *)(param_1 + 0x20));
    }
    if (*(int64_t *)(param_1 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_248);
}






// 函数: void FUN_1802a0f80(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int64_t *param_6
void FUN_1802a0f80(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int64_t *param_6
                  ,int64_t *param_7)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint uVar10;
  int64_t lStack_38;
  
  uVar9 = (uint64_t)param_5;
  lVar5 = 0;
  uVar10 = 0;
  lStack_38 = 0;
  if (param_5 != 0) {
    do {
      uVar6 = param_2 >> ((byte)uVar10 & 0x1f);
      if ((int)uVar6 < 1) {
        uVar6 = 1;
      }
      uVar7 = param_3 >> ((byte)uVar10 & 0x1f);
      if ((int)uVar7 < 1) {
        uVar7 = 1;
      }
      uVar8 = (uint64_t)uVar7;
      switch(param_1) {
      case 0xe:
      case 0x13:
        lVar4 = 8;
        break;
      default:
        iVar1 = func_0x0001802a0ec0(param_1);
        lVar4 = (uint64_t)(iVar1 * uVar6 + 7 >> 3) * (uVar8 & 0xffffffff);
        goto code_r0x0001802a107b;
      case 0x10:
      case 0x12:
      case 0x14:
      case 0x15:
      case 0x16:
        lVar4 = 0x10;
      }
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar6 = uVar6 + 3 >> 2;
        uVar8 = 1;
        if (1 < uVar6) {
          uVar8 = (uint64_t)uVar6;
        }
      }
      uVar3 = 0;
      if (uVar7 != 0) {
        uVar6 = uVar7 + 3 >> 2;
        uVar3 = 1;
        if (1 < uVar6) {
          uVar3 = (uint64_t)uVar6;
        }
      }
      lVar4 = lVar4 * uVar3 * uVar8;
code_r0x0001802a107b:
      lVar5 = lVar5 + lVar4;
      uVar10 = uVar10 + 1;
      lStack_38 = lVar5;
    } while (uVar10 < (uint)uVar9);
  }
  lVar5 = 0;
  if ((uint)uVar9 < param_4) {
    uVar8 = (uint64_t)(param_1 - 0xe);
    do {
      iVar1 = (int)uVar9;
      uVar10 = param_2 >> ((byte)uVar9 & 0x1f);
      if ((int)uVar10 < 1) {
        uVar10 = 1;
      }
      uVar6 = param_3 >> ((byte)uVar9 & 0x1f);
      if ((int)uVar6 < 1) {
        uVar6 = 1;
      }
      uVar9 = (uint64_t)uVar6;
      if ((uint)uVar8 < 9) {
                    // WARNING: Could not recover jumptable at 0x0001802a10ee. Too many branches
                    // WARNING: Treating indirect jump as call
        (*(code *)((uint64_t)*(uint *)(&unknown_var_7992_ptr + uVar8 * 4) + 0x180000000))
                  ((code *)((uint64_t)*(uint *)(&unknown_var_7992_ptr + uVar8 * 4) + 0x180000000));
        return;
      }
      iVar2 = func_0x0001802a0ec0(param_1);
      lVar5 = lVar5 + (uint64_t)(iVar2 * uVar10 + 7 >> 3) * (uVar9 & 0xffffffff);
      uVar9 = (uint64_t)(iVar1 + 1U);
    } while (iVar1 + 1U < param_4);
  }
  *param_6 = lStack_38;
  *param_7 = lVar5;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802a11e0(int64_t *param_1,float *param_2,uint64_t param_3,int param_4)
void FUN_1802a11e0(int64_t *param_1,float *param_2,uint64_t param_3,int param_4)

{
  byte bVar1;
  uint64_t uVar2;
  ushort uVar3;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int16_t *puVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint64_t uStackX_18;
  int8_t auStack_2e8 [32];
  int iStack_2c8;
  byte abStack_2b8 [8];
  uint64_t uStack_2b0;
  uint64_t uStack_2a8;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  int8_t auStack_258 [512];
  uint64_t uStack_58;
  ushort uVar4;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2e8;
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  uVar6 = *(int *)((int64_t)param_1 + 0x54) - 1;
  uStackX_18 = param_3;
  if (0x2b < uVar6) goto FUN_1802a1af3;
  lVar10 = (uint64_t)*(uint *)(&unknown_var_384_ptr + (uint64_t)uVar6 * 4) + 0x180000000;
  switch(*(int *)((int64_t)param_1 + 0x54)) {
  case 1:
    iStack_2c8 = param_4;
    FUN_1802a2f60(lVar10,&uStack_2b0,param_1,&uStackX_18);
    goto code_r0x0001802a14f5;
  case 2:
    iStack_2c8 = param_4;
    FUN_1802a2f60(lVar10,&uStack_2b0,param_1,&uStackX_18);
    goto code_r0x0001802a1677;
  case 4:
    iStack_2c8 = param_4;
    lVar10 = FUN_1802a49f0(lVar10,&uStack_2b0,param_1,&uStackX_18);
    fVar16 = (float)func_0x0001800adf40(*(int16_t *)(lVar10 + 2));
    fVar17 = (float)func_0x0001800adf40();
    *param_2 = fVar17;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    goto code_r0x0001802a1ade;
  case 6:
    iStack_2c8 = param_4;
    FUN_1802a2420(lVar10,abStack_2b8,param_1,&uStackX_18);
    *param_2 = 1.0;
    param_2[1] = 1.0;
    param_2[2] = 1.0;
    param_2[3] = (float)abStack_2b8[0] * 0.003921569;
    break;
  case 7:
    iStack_2c8 = param_4;
    FUN_1802a2f60(lVar10,&uStack_2b0,param_1,&uStackX_18);
    *param_2 = (float)(byte)uStack_2b0 * 0.003921569;
    bVar1 = uStack_2b0._2_1_;
    goto code_r0x0001802a151f;
  case 9:
    iStack_2c8 = param_4;
    FUN_1802a26b0(lVar10,&uStack_2b0,param_1,&uStackX_18);
    fVar16 = 1.5259022e-05;
    *param_2 = (float)(ushort)uStack_2b0 * 1.5259022e-05;
    uVar5 = uStack_2b0._2_2_;
    uVar3 = uStack_2b0._4_2_;
    uVar4 = uStack_2b0._6_2_;
    goto code_r0x0001802a1528;
  case 0xb:
    iStack_2c8 = param_4;
    FUN_1802a2420(lVar10,abStack_2b8,param_1,&uStackX_18);
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 1.0;
    *param_2 = (float)abStack_2b8[0] * 0.003921569;
    break;
  case 0xc:
    uVar5 = FUN_1802a21d0(lVar10,param_1,&uStackX_18);
    fVar16 = (float)uVar5 * 1.5259022e-05;
    goto code_r0x0001802a1829;
  case 0xe:
    iStack_2c8 = param_4;
    FUN_1802a3e80(lVar10,&uStack_2b0,param_1,&uStackX_18);
    goto code_r0x0001802a14f5;
  case 0x10:
    iStack_2c8 = param_4;
    FUN_1802a3b30(lVar10,&uStack_2b0,param_1,&uStackX_18);
    goto code_r0x0001802a14f5;
  case 0x12:
    iStack_2c8 = param_4;
    FUN_1802a37e0(lVar10,&uStack_2b0,param_1,&uStackX_18);
    goto code_r0x0001802a14f5;
  case 0x13:
    fVar16 = (float)FUN_1802a35e0(lVar10,param_1,&uStackX_18);
    *param_2 = fVar16;
    param_2[3] = 1.0;
    break;
  case 0x14:
    iStack_2c8 = param_4;
    FUN_1802a3340(lVar10,&uStack_2b0,param_1,&uStackX_18);
    *param_2 = (float)uStack_2b0;
    param_2[2] = 0.0;
    goto code_r0x0001802a1ad1;
  case 0x15:
    if (param_4 == 0) {
      if (cRam0000000180d48da9 == '\0') {
        cRam0000000180d48da9 = '\x01';
        iStack_2c8 = 0x78a;
        FUN_180060680(auStack_258,&unknown_var_2944_ptr,&unknown_var_2904_ptr,&unknown_var_2856_ptr);
        OutputDebugStringA(auStack_258);
      }
      fVar14 = 0.0;
      fVar16 = 0.0;
      fVar17 = 0.0;
    }
    else if (param_4 == 1) {
      pfVar12 = &fStack_298;
      lVar10 = 4;
      do {
        func_0x000180074f10(pfVar12);
        pfVar12 = pfVar12 + 3;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      if (system_data_8da8 == '\0') {



// 函数: void FUN_1802a1227(void)
void FUN_1802a1227(void)

{
  int64_t in_RAX;
  int64_t in_R11;
  uint64_t unaff_XMM6_Qa;
  uint64_t unaff_XMM6_Qb;
  uint64_t unaff_XMM7_Qa;
  uint64_t unaff_XMM7_Qb;
  
  *(uint64_t *)(in_R11 + -0x38) = unaff_XMM6_Qa;
  *(uint64_t *)(in_R11 + -0x30) = unaff_XMM6_Qb;
  *(uint64_t *)(in_R11 + -0x48) = unaff_XMM7_Qa;
  *(uint64_t *)(in_R11 + -0x40) = unaff_XMM7_Qb;
                    // WARNING: Could not recover jumptable at 0x0001802a1242. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)((uint64_t)*(uint *)(&unknown_var_384_ptr + in_RAX * 4) + 0x180000000))
            ((code *)((uint64_t)*(uint *)(&unknown_var_384_ptr + in_RAX * 4) + 0x180000000));
  return;
}






// 函数: void FUN_1802a12fa(void)
void FUN_1802a12fa(void)

{
  ushort uVar1;
  float *unaff_RBX;
  int64_t unaff_RBP;
  uint64_t *puVar2;
  int64_t unaff_RDI;
  int in_R9D;
  uint64_t uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  puVar2 = (uint64_t *)&stack0x00000050;
  uVar3 = (uint64_t)(in_R9D + 3);
  do {
    func_0x000180074f10(puVar2);
    puVar2 = (uint64_t *)((int64_t)puVar2 + 0xc);
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  if (system_data_8da8 == '\0') {



// 函数: void FUN_1802a133e(void)
void FUN_1802a133e(void)

{
  ushort uVar1;
  float *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  



