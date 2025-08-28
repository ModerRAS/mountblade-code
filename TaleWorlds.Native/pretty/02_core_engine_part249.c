#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part249.c - 5 个函数

// 函数: void FUN_180214d20(int64_t param_1,int param_2,int64_t param_3,int64_t param_4)
void FUN_180214d20(int64_t param_1,int param_2,int64_t param_3,int64_t param_4)

{
  int64_t lVar1;
  uint uVar2;
  int32_t uVar3;
  uint uVar4;
  int iVar5;
  void *puVar6;
  int8_t auStack_1c8 [32];
  int64_t *plStack_1a8;
  int64_t lStack_198;
  int64_t *plStack_190;
  uint64_t uStack_188;
  int32_t uStack_180;
  int32_t uStack_17c;
  uint64_t uStack_178;
  int32_t uStack_160;
  int8_t auStack_150 [200];
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  uint64_t uStack_58;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1c8;
  if (((param_2 == 8) || (param_2 == 0x20)) &&
     ((*(int64_t *)(param_1 + 0x308) != 0 || (*(int64_t *)(param_1 + 0x310) != 0)))) {
    plStack_190 = (int64_t *)0x0;
    FUN_1808455f0(param_3,&plStack_190);
    lStack_198 = 0;
    FUN_180846fe0(plStack_190,&lStack_198);
    if ((lStack_198 != 0) && (-1 < *(int *)(lStack_198 + 8))) {
      uVar3 = FUN_180844f40(param_3,&uStack_88);
      FUN_180211a30(uVar3,&system_buffer_ptr);
      uStack_188 = CONCAT44(uStack_80,uStack_88);
      uStack_180 = uStack_84;
      uStack_17c = 0x7f7fffff;
      (**(code **)(param_1 + 0x310))
                (*(uint64_t *)(param_1 + 0x308),param_2 == 8,*(int32_t *)(lStack_198 + 8),
                 &uStack_188);
    }
  }
  if (param_2 == 0x20) {
    plStack_190 = (int64_t *)0x0;
    lStack_198 = param_3;
    uVar3 = FUN_180847110(param_3,&plStack_190);
    FUN_180211a30(uVar3,&system_buffer_ptr);
    FUN_18084a7a0(param_3,0);
    if ((plStack_190 == (int64_t *)0x0) || (lVar1 = *plStack_190, lVar1 == 0)) {
      uStack_188 = param_1 + 0x60;
      iVar5 = _Mtx_lock(uStack_188);
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      FUN_18005ea90(param_1 + 0x410,&lStack_198);
    }
    else {
      uStack_188 = param_1 + 0x60;
      if (*(int64_t *)(lVar1 + 0x80) == param_3) {
        iVar5 = _Mtx_lock();
        if (iVar5 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar5);
        }
        lStack_198 = CONCAT44(lStack_198._4_4_,*(int32_t *)(lVar1 + 0x50));
        FUN_1800571e0(param_1 + 0xb0,&lStack_198);
      }
      else {
        iVar5 = _Mtx_lock(uStack_188);
        if (iVar5 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar5);
        }
        FUN_18005ea90(param_1 + 0x410,&lStack_198);
      }
    }
    iVar5 = _Mtx_unlock(param_1 + 0x60);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
  }
  else if (param_2 == 0x80) {
    plStack_190 = (int64_t *)0x0;
    uVar3 = FUN_180847110(param_3,&plStack_190);
    FUN_180211a30(uVar3,&system_buffer_ptr);
    if (((plStack_190 != (int64_t *)0x0) && (lVar1 = *plStack_190, lVar1 != 0)) &&
       (*(int *)(lVar1 + 0x10) != 0)) {
      lStack_198 = 0;
      if (*(int *)(lVar1 + 0x10) != 1) {
        uStack_160 = 0;
                    // WARNING: Subroutine does not return
        memset(auStack_150,0,200);
      }
      uVar4 = 8;
      if (*(char *)(lVar1 + 0x49) != '\0') {
        uVar4 = 0x10;
      }
      uVar2 = uVar4 | 0x10000;
      if (*(char *)(lVar1 + 0x48) != '\0') {
        uVar2 = uVar4;
      }
      puVar6 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x20) != (void *)0x0) {
        puVar6 = *(void **)(lVar1 + 0x20);
      }
      plStack_1a8 = &lStack_198;
      uVar3 = FUN_180739270(*(uint64_t *)(param_1 + 0x370),puVar6,uVar2,0);
      puVar6 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x20) != (void *)0x0) {
        puVar6 = *(void **)(lVar1 + 0x20);
      }
      FUN_180211a30(uVar3,puVar6);
      *(int64_t *)(param_4 + 8) = lStack_198;
    }
  }
  else if (param_2 == 0x100) {
    FUN_18073ebd0(*(uint64_t *)(param_4 + 8));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (uint64_t)auStack_1c8);
}



float FUN_1802150c0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int aiStackX_18 [4];
  
  lVar1 = FUN_180213700(param_1,param_2,0);
  if (lVar1 != 0) {
    aiStackX_18[0] = -1;
    FUN_180845ef0(lVar1,aiStackX_18);
    return (float)aiStackX_18[0] * 0.001;
  }
  return -1.0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t *
FUN_180215110(int64_t param_1,int64_t *param_2,int *param_3,int32_t param_4,int64_t param_5)

{
  int32_t uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  int8_t *puVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  uint uVar11;
  int64_t *plVar12;
  void *puStack_1a8;
  uint64_t *puStack_1a0;
  int32_t uStack_198;
  uint64_t uStack_190;
  void *puStack_188;
  uint64_t *puStack_180;
  int32_t uStack_178;
  uint64_t uStack_170;
  void *puStack_168;
  uint64_t *puStack_160;
  int32_t uStack_158;
  uint64_t uStack_150;
  void *puStack_148;
  uint64_t *puStack_140;
  int32_t uStack_138;
  uint64_t uStack_130;
  void *puStack_128;
  int64_t lStack_120;
  int32_t uStack_110;
  void *puStack_108;
  int64_t lStack_100;
  int32_t uStack_f0;
  int8_t auStack_e8 [32];
  void *puStack_c8;
  int64_t lStack_c0;
  int32_t uStack_b0;
  void *puStack_a8;
  int64_t lStack_a0;
  int32_t uStack_90;
  int8_t auStack_88 [32];
  uint64_t uStack_68;
  int64_t *plStack_60;
  int64_t *plStack_58;
  
  uStack_68 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x210) != '\0') {
    plVar12 = *(int64_t **)(param_1 + 0x1e8);
    *param_2 = (int64_t)plVar12;
    if (plVar12 == (int64_t *)0x0) {
      return param_2;
    }
    (**(code **)(*plVar12 + 0x28))();
    return param_2;
  }
  if (*param_3 != 1) {
    lVar5 = FUN_180213440(param_1,param_3 + 2,1);
    if (param_5 == 0) goto LAB_1802158ec;
    if (lVar5 != 0) goto LAB_1802158f5;
    puStack_148 = &system_data_buffer_ptr;
    uStack_130 = 0;
    puStack_140 = (uint64_t *)0x0;
    uStack_138 = 0;
    puVar6 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar6 = 0;
    puStack_140 = puVar6;
    uVar1 = FUN_18064e990(puVar6);
    uStack_130 = CONCAT44(uStack_130._4_4_,uVar1);
    *puVar6 = 0x2220656e656353;
    uStack_138 = 7;
    uVar7 = FUN_180627ce0(&puStack_148,auStack_88,param_5 + 0x4d8);
    puStack_168 = &system_data_buffer_ptr;
    uStack_150 = 0;
    puStack_160 = (uint64_t *)0x0;
    uStack_158 = 0;
    puVar6 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x37,0x13);
    *(int8_t *)puVar6 = 0;
    puStack_160 = puVar6;
    uVar1 = FUN_18064e990(puVar6);
    uStack_150 = CONCAT44(uStack_150._4_4_,uVar1);
    *puVar6 = 0x2064656972742022;
    puVar6[1] = 0x636f6c6c61206f74;
    *(int32_t *)(puVar6 + 2) = 0x20657461;
    *(int32_t *)((int64_t)puVar6 + 0x14) = 0x69206e61;
    *(int32_t *)(puVar6 + 3) = 0x6c61766e;
    *(int32_t *)((int64_t)puVar6 + 0x1c) = 0x73206469;
    *(int32_t *)(puVar6 + 4) = 0x646e756f;
    *(int32_t *)((int64_t)puVar6 + 0x24) = 0x65766520;
    *(int32_t *)(puVar6 + 5) = 0x7720746e;
    *(int32_t *)((int64_t)puVar6 + 0x2c) = 0x20687469;
    *(int32_t *)(puVar6 + 6) = 0x656d616e;
    *(int16_t *)((int64_t)puVar6 + 0x34) = 0x2220;
    *(int8_t *)((int64_t)puVar6 + 0x36) = 0;
    uStack_158 = 0x36;
    uVar7 = FUN_180627ce0(uVar7,&puStack_a8,&puStack_168);
    lVar5 = FUN_180627ce0(uVar7,&puStack_c8,param_3 + 2);
    puVar8 = (int8_t *)0x0;
    uVar11 = 0;
    uVar4 = *(uint *)(lVar5 + 0x10);
    uVar10 = (uint64_t)uVar4;
    uVar3 = 0;
    if (*(int64_t *)(lVar5 + 8) == 0) {
LAB_18021573d:
      uVar11 = uVar3;
      if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puVar8,*(uint64_t *)(lVar5 + 8),uVar10);
      }
    }
    else if (uVar4 != 0) {
      iVar2 = uVar4 + 1;
      if (iVar2 < 0x10) {
        iVar2 = 0x10;
      }
      puVar8 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)iVar2,0x13);
      *puVar8 = 0;
      uVar3 = FUN_18064e990(puVar8);
      goto LAB_18021573d;
    }
    if (puVar8 != (int8_t *)0x0) {
      puVar8[uVar10] = 0;
    }
    if (uVar4 != 0xfffffffe) {
      uVar4 = uVar4 + 3;
      if (puVar8 == (int8_t *)0x0) {
        if ((int)uVar4 < 0x10) {
          uVar4 = 0x10;
        }
        puVar8 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)(int)uVar4,0x13);
        *puVar8 = 0;
      }
      else {
        if (uVar4 <= uVar11) goto LAB_1802157dc;
        puVar8 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar8,uVar4,0x10,0x13);
      }
      FUN_18064e990(puVar8);
    }
LAB_1802157dc:
    *(int16_t *)(puVar8 + uVar10) = 0xa22;
    puVar8[uVar10 + 2] = 0;
    puStack_c8 = &system_data_buffer_ptr;
    if (lStack_c0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_c0 = 0;
    uStack_b0 = 0;
    puStack_c8 = &system_state_ptr;
    puStack_a8 = &system_data_buffer_ptr;
    if (lStack_a0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_a0 = 0;
    uStack_90 = 0;
    puStack_a8 = &system_state_ptr;
    puStack_168 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
    FUN_18064e900(puStack_160);
  }
  lVar5 = FUN_180213700(param_1,param_3[10]);
  if (param_5 == 0) {
LAB_1802158ec:
    if (lVar5 == 0) {
      plVar12 = *(int64_t **)(param_1 + 0x1e8);
      *param_2 = (int64_t)plVar12;
      if (plVar12 == (int64_t *)0x0) {
        return param_2;
      }
      (**(code **)(*plVar12 + 0x28))();
      return param_2;
    }
LAB_1802158f5:
    FUN_180159210(param_1,param_2);
    uVar1 = 8;
    if (*param_2 == 0) {
      plVar9 = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr,0xb8,8,3);
      *plVar9 = (int64_t)&system_handler1_ptr;
      *plVar9 = (int64_t)&system_handler2_ptr;
      *(int32_t *)(plVar9 + 1) = 0;
      *plVar9 = (int64_t)&unknown_var_7872_ptr;
      plVar12 = plVar9;
      FUN_18015c2b0(plVar9 + 2);
      *(int32_t *)(plVar9 + 10) = param_4;
      plVar9[0xb] = param_5;
      if (*(int *)(core_system_data_memory + 0x9a0) != 0) {
        core_system_memory = core_system_memory + 1;
        FUN_1800623b0(system_message_context,0,0x1000000000000,3,&unknown_var_7304_ptr,core_system_memory,uVar1,plVar12
                     );
      }
      *plVar9 = (int64_t)&unknown_var_2656_ptr;
      plVar9[0x11] = 0;
      *(int32_t *)(plVar9 + 0x12) = 0xffffffff;
      plStack_60 = plVar9 + 0x13;
      plVar9[0x15] = 0;
      plVar9[0x16] = (int64_t)_guard_check_icall;
      FUN_180406a00(plVar9,lVar5,param_4,param_5);
      plStack_58 = plVar9;
      (**(code **)(*plVar9 + 0x28))(plVar9);
      (**(code **)(*plVar9 + 0x28))(plVar9);
      plVar12 = (int64_t *)*param_2;
      *param_2 = (int64_t)plVar9;
      if (plVar12 != (int64_t *)0x0) {
        (**(code **)(*plVar12 + 0x38))();
      }
      (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    else {
      FUN_180406a00(*param_2,lVar5,param_4,param_5);
    }
    return param_2;
  }
  if (lVar5 != 0) goto LAB_1802158f5;
  puStack_188 = &system_data_buffer_ptr;
  uStack_170 = 0;
  puStack_180 = (uint64_t *)0x0;
  uStack_178 = 0;
  puVar6 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar6 = 0;
  puStack_180 = puVar6;
  uVar1 = FUN_18064e990(puVar6);
  uStack_170 = CONCAT44(uStack_170._4_4_,uVar1);
  *puVar6 = 0x2220656e656353;
  uStack_178 = 7;
  uVar7 = FUN_180627ce0(&puStack_188,auStack_e8,param_5 + 0x4d8);
  puStack_1a8 = &system_data_buffer_ptr;
  uStack_190 = 0;
  puStack_1a0 = (uint64_t *)0x0;
  uStack_198 = 0;
  puVar6 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x37,0x13);
  *(int8_t *)puVar6 = 0;
  puStack_1a0 = puVar6;
  uVar1 = FUN_18064e990(puVar6);
  uStack_190 = CONCAT44(uStack_190._4_4_,uVar1);
  *puVar6 = 0x2064656972742022;
  puVar6[1] = 0x636f6c6c61206f74;
  *(int32_t *)(puVar6 + 2) = 0x20657461;
  *(int32_t *)((int64_t)puVar6 + 0x14) = 0x69206e61;
  *(int32_t *)(puVar6 + 3) = 0x6c61766e;
  *(int32_t *)((int64_t)puVar6 + 0x1c) = 0x73206469;
  *(int32_t *)(puVar6 + 4) = 0x646e756f;
  *(int32_t *)((int64_t)puVar6 + 0x24) = 0x65766520;
  *(int32_t *)(puVar6 + 5) = 0x7720746e;
  *(int32_t *)((int64_t)puVar6 + 0x2c) = 0x20687469;
  *(int32_t *)(puVar6 + 6) = 0x656d616e;
  *(int16_t *)((int64_t)puVar6 + 0x34) = 0x2220;
  *(int8_t *)((int64_t)puVar6 + 0x36) = 0;
  uStack_198 = 0x36;
  uVar7 = FUN_180627ce0(uVar7,&puStack_108,&puStack_1a8);
  lVar5 = FUN_180627ce0(uVar7,&puStack_128,param_3 + 2);
  puVar8 = (int8_t *)0x0;
  uVar11 = 0;
  uVar4 = *(uint *)(lVar5 + 0x10);
  uVar10 = (uint64_t)uVar4;
  uVar3 = 0;
  if (*(int64_t *)(lVar5 + 8) == 0) {
LAB_180215380:
    uVar11 = uVar3;
    if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar8,*(uint64_t *)(lVar5 + 8),uVar10);
    }
  }
  else if (uVar4 != 0) {
    iVar2 = uVar4 + 1;
    if (iVar2 < 0x10) {
      iVar2 = 0x10;
    }
    puVar8 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)iVar2,0x13);
    *puVar8 = 0;
    uVar3 = FUN_18064e990(puVar8);
    goto LAB_180215380;
  }
  if (puVar8 != (int8_t *)0x0) {
    puVar8[uVar10] = 0;
  }
  if (uVar4 != 0xfffffffe) {
    uVar4 = uVar4 + 3;
    if (puVar8 == (int8_t *)0x0) {
      if ((int)uVar4 < 0x10) {
        uVar4 = 0x10;
      }
      puVar8 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)(int)uVar4,0x13);
      *puVar8 = 0;
    }
    else {
      if (uVar4 <= uVar11) goto LAB_18021541f;
      puVar8 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar8,uVar4,0x10,0x13);
    }
    FUN_18064e990(puVar8);
  }
LAB_18021541f:
  *(int16_t *)(puVar8 + uVar10) = 0xa22;
  puVar8[uVar10 + 2] = 0;
  puStack_128 = &system_data_buffer_ptr;
  if (lStack_120 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_120 = 0;
  uStack_110 = 0;
  puStack_128 = &system_state_ptr;
  puStack_108 = &system_data_buffer_ptr;
  if (lStack_100 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_100 = 0;
  uStack_f0 = 0;
  puStack_108 = &system_state_ptr;
  puStack_1a8 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puStack_1a0);
}





// 函数: void FUN_180215a70(int64_t param_1)
void FUN_180215a70(int64_t param_1)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int iVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  int iVar7;
  
  FUN_180156300();
  iVar7 = 0;
  iVar3 = _Mtx_lock(param_1 + 0x60);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  puVar1 = *(uint64_t **)(param_1 + 0x410);
  *(uint64_t *)(param_1 + 0x410) = 0;
  lVar2 = *(int64_t *)(param_1 + 0x418);
  *(uint64_t *)(param_1 + 0x418) = 0;
  *(uint64_t *)(param_1 + 0x420) = 0;
  *(int32_t *)(param_1 + 0x428) = 3;
  iVar3 = _Mtx_unlock(param_1 + 0x60);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  uVar6 = lVar2 - (int64_t)puVar1 >> 3;
  puVar5 = puVar1;
  if (uVar6 != 0) {
    do {
      uVar4 = FUN_180849230(*puVar5);
      FUN_180211a30(uVar4,&system_buffer_ptr);
      iVar7 = iVar7 + 1;
      puVar5 = puVar5 + 1;
    } while ((uint64_t)(int64_t)iVar7 < uVar6);
  }
  if (puVar1 == (uint64_t *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180215b90(int64_t param_1,int64_t param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  byte *pbVar6;
  void *puVar7;
  int iVar8;
  int64_t lVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  
  uVar11 = 0xfffffffffffffffe;
  lVar5 = FUN_18020fa10(*(uint64_t *)(param_1 + 0x1f8));
  if (lVar5 == 0) {
    iVar3 = _Mtx_lock(param_1 + 0x318);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    iVar3 = 0;
    iVar4 = (int)((*(int64_t *)(param_1 + 0x3a0) - *(int64_t *)(param_1 + 0x398)) / 0x98);
    if (0 < iVar4) {
      lVar5 = 0;
      iVar2 = *(int *)(param_2 + 0x10);
      plVar10 = (int64_t *)(*(int64_t *)(param_1 + 0x398) + 8);
      do {
        iVar8 = (int)plVar10[1];
        if (iVar2 == iVar8) {
          if (iVar2 != 0) {
            pbVar6 = *(byte **)(param_2 + 8);
            lVar9 = *plVar10 - (int64_t)pbVar6;
            do {
              pbVar1 = pbVar6 + lVar9;
              iVar8 = (uint)*pbVar6 - (uint)*pbVar1;
              if (iVar8 != 0) break;
              pbVar6 = pbVar6 + 1;
            } while (*pbVar1 != 0);
          }
LAB_180215c6e:
          if (iVar8 == 0) goto LAB_180215cc5;
        }
        else if (iVar2 == 0) goto LAB_180215c6e;
        iVar3 = iVar3 + 1;
        lVar5 = lVar5 + 1;
        plVar10 = plVar10 + 0x13;
      } while (lVar5 < iVar4);
    }
    puVar7 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar7 = *(void **)(param_2 + 8);
    }
    FUN_1800623b0(system_message_context,0,0x1000000000000,3,&unknown_var_4496_ptr,puVar7,uVar11);
    iVar3 = -1;
LAB_180215cc5:
    iVar4 = _Mtx_unlock(param_1 + 0x318);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
  }
  else {
    iVar3 = *(int *)(lVar5 + 0x54);
  }
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180215d00(int64_t param_1,int64_t param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  void *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t lVar10;
  
  iVar7 = 0;
  iVar5 = (int)((*(int64_t *)(param_1 + 0x3e0) - *(int64_t *)(param_1 + 0x3d8)) / 0x28);
  if (0 < iVar5) {
    iVar2 = *(int *)(param_2 + 0x10);
    lVar10 = 0;
    plVar9 = (int64_t *)(*(int64_t *)(param_1 + 0x3d8) + 8);
    do {
      iVar6 = (int)plVar9[1];
      if (iVar2 == iVar6) {
        if (iVar2 != 0) {
          pbVar3 = *(byte **)(param_2 + 8);
          lVar8 = *plVar9 - (int64_t)pbVar3;
          do {
            pbVar1 = pbVar3 + lVar8;
            iVar6 = (uint)*pbVar3 - (uint)*pbVar1;
            if (iVar6 != 0) break;
            pbVar3 = pbVar3 + 1;
          } while (*pbVar1 != 0);
        }
LAB_180215d8e:
        if (iVar6 == 0) {
          return iVar7;
        }
      }
      else if (iVar2 == 0) goto LAB_180215d8e;
      iVar7 = iVar7 + 1;
      lVar10 = lVar10 + 1;
      plVar9 = plVar9 + 5;
    } while (lVar10 < iVar5);
  }
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar4 = *(void **)(param_2 + 8);
  }
  FUN_1800623b0(system_message_context,0,0x1000000000000,3,&unknown_var_4680_ptr,puVar4);
  return -1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180215e10(int64_t param_1)
void FUN_180215e10(int64_t param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x210) == '\0') {
    iVar1 = FUN_18084b380(*(uint64_t *)(param_1 + 0x368));
    if (iVar1 == 0) {
      *(uint64_t *)(param_1 + 0x380) = *(uint64_t *)(param_1 + 0x378);
      return;
    }
    FUN_1800623b0(system_message_context,0,0x1000000000000,3,&unknown_var_4728_ptr);
  }
  return;
}





// 函数: void FUN_180215ea0(int64_t *param_1)
void FUN_180215ea0(int64_t *param_1)

{
  (**(code **)(*param_1 + 0x68))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180215ed0(int64_t param_1,int64_t param_2,uint64_t param_3,int32_t *param_4,
                       uint64_t param_5)

{
  int32_t uVar1;
  uint64_t in_RAX;
  int64_t lVar2;
  uint64_t uVar3;
  void *puVar4;
  int64_t lStackX_8;
  
  if ((*(char *)(param_1 + 0x210) == '\0') &&
     (in_RAX = core_system_data_memory, *(int *)(core_system_data_memory + 0xb60) == 1)) {
    if ((*(int64_t *)(param_1 + 0x18) != 0) && (0 < *(int *)(param_2 + 0x10))) {
      (**(code **)(param_1 + 0x20))(param_2,param_3,param_5,param_1 + 8);
    }
    lVar2 = FUN_180213440(param_1,param_2,0);
    if (lVar2 != 0) {
      uVar1 = FUN_180840490(lVar2,&lStackX_8);
      FUN_180211a30(uVar1,&system_buffer_ptr);
      if (lStackX_8 != 0) {
        FUN_180407630(lStackX_8,param_3,&system_data_02f0);
        FUN_1802164f0();
        FUN_18084a280(lStackX_8,*param_4);
        uVar3 = FUN_180406800(lStackX_8);
        return uVar3;
      }
    }
    puVar4 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar4 = *(void **)(param_2 + 8);
    }
    uVar3 = FUN_1800623b0(system_message_context,0,0x1000000000000,3,&unknown_var_4600_ptr,puVar4);
    return uVar3 & 0xffffffffffffff00;
  }
  return in_RAX & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180215f2d(void)

{
  int32_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int32_t *unaff_R15;
  int64_t in_stack_00000050;
  
  lVar2 = FUN_180213440();
  if (lVar2 != 0) {
    uVar1 = FUN_180840490(lVar2,&stack0x00000050);
    FUN_180211a30(uVar1,&system_buffer_ptr);
    lVar2 = in_stack_00000050;
    if (in_stack_00000050 != 0) {
      FUN_180407630(in_stack_00000050);
      FUN_1802164f0();
      FUN_18084a280(lVar2,*unaff_R15);
      uVar3 = FUN_180406800(lVar2);
      return uVar3;
    }
  }
  uVar3 = FUN_1800623b0(system_message_context,0,0x1000000000000,3,&unknown_var_4600_ptr);
  return uVar3 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180215fb2(void)

{
  uint64_t uVar1;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int64_t lStack0000000000000028;
  
  lStack0000000000000028 = unaff_RBX;
  if (*(int64_t *)(unaff_RDI + 8) != 0) {
    lStack0000000000000028 = *(int64_t *)(unaff_RDI + 8);
  }
  uVar1 = FUN_1800623b0(system_message_context,0,0x1000000000000,3,&unknown_var_4600_ptr);
  return uVar1 & 0xffffffffffffff00;
}



int8_t FUN_180215fee(void)

{
  return 0;
}





// 函数: void FUN_180216000(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180216000(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uStackX_8;
  int32_t uStackX_c;
  
  uStackX_8 = 0x3f800000;
  uStackX_c = 0;
  (**(code **)(*param_1 + 0x58))(0x3f800000,0,param_3,&uStackX_8,param_4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180216030(int64_t param_1,int param_2,uint64_t param_3,int32_t *param_4,uint64_t param_5
             )

{
  int64_t *plVar1;
  int iVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t *plStackX_8;
  
  if ((*(char *)(param_1 + 0x210) == '\0') && (*(int *)(core_system_data_memory + 0xb60) == 1)) {
    iVar2 = *(int *)(*(int64_t *)(param_1 + 0x1f8) + 0x50);
    if (param_2 < iVar2) {
      if ((*(int64_t *)(param_1 + 0x18) != 0) && (-1 < param_2)) {
        plVar1 = (int64_t *)(param_1 + 0x318);
        plStackX_8 = plVar1;
        iVar2 = _Mtx_lock(plVar1);
        if (iVar2 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar2);
        }
        lVar5 = (int64_t)param_2 * 0x98 + *(int64_t *)(param_1 + 0x398);
        if (0 < *(int *)(lVar5 + 0x10)) {
          (**(code **)(param_1 + 0x20))(lVar5,param_3,param_5);
        }
        iVar2 = _Mtx_unlock(plVar1);
        if (iVar2 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar2);
        }
      }
      uVar4 = FUN_180213700(param_1,param_2,0);
      uVar3 = FUN_180840490(uVar4,&plStackX_8);
      FUN_180211a30(uVar3,&system_buffer_ptr);
      plVar1 = plStackX_8;
      FUN_180407630(plStackX_8,param_3,&system_data_02f0);
      FUN_1802164f0();
      FUN_18084a280(plVar1,*param_4);
      uVar4 = FUN_180406800(plVar1);
    }
    else {
      FUN_1801582f0(param_1,&plStackX_8,
                    (int64_t)(param_2 - iVar2) * 0x60 +
                    *(int64_t *)(*(int64_t *)(param_1 + 0x1f8) + 0x30),param_4,0xfffffffffffffffe)
      ;
      (**(code **)(*plStackX_8 + 0xa8))(plStackX_8,param_3);
      (**(code **)(*plStackX_8 + 0x148))(plStackX_8,param_5);
      (**(code **)(*plStackX_8 + 0x60))();
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



int32_t FUN_1802161d0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int32_t auStackX_18 [2];
  int8_t auStackX_20 [8];
  
  lVar1 = FUN_180213440(param_1,param_2,0);
  if (lVar1 != 0) {
    FUN_180846050(lVar1,auStackX_20,auStackX_18);
    return auStackX_18[0];
  }
  return 0;
}



int32_t FUN_180216210(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int32_t auStackX_18 [2];
  int8_t auStackX_20 [8];
  
  lVar1 = FUN_180213700(param_1,param_2,0);
  if (lVar1 != 0) {
    FUN_180846050(lVar1,auStackX_20,auStackX_18);
    return auStackX_18[0];
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



