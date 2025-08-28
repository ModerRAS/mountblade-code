#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part148.c - 13 个函数

// 函数: void FUN_18035cdb0(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18035cdb0(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int iVar2;
  int64_t *plStackX_10;
  int64_t **pplStackX_18;
  
  if (*(int *)(param_2 + 0x10) == 0xe) {
    iVar2 = _stricmp(*(uint64_t *)(param_2 + 8),&system_data_ef48,param_3,param_4,0xfffffffffffffffe)
    ;
    if (iVar2 == 0) {
      FUN_18035ce30(param_1);
      lVar1 = param_1[3];
      pplStackX_18 = &plStackX_10;
      plStackX_10 = param_1;
      (**(code **)(*param_1 + 0x28))(param_1);
      FUN_1802f0080(lVar1,&plStackX_10,6);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035ce30(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18035ce30(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  code *pcVar2;
  int32_t uVar3;
  int32_t uVar4;
  int iVar5;
  int32_t uVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  int64_t *plVar12;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  
  if (*(int64_t *)(param_1 + 0x78) == 0) {
    lVar1 = *(int64_t *)(param_1 + 0x18);
    if (lVar1 == 0) {
      return;
    }
    iVar5 = FUN_1802ed190(lVar1,0,param_3,param_4,0xfffffffffffffffe);
    if (iVar5 == 0) {
      return;
    }
    uVar7 = FUN_18062b1e0(system_memory_pool_ptr,0x298,8,3);
    plVar9 = (int64_t *)FUN_1802f5f70(uVar7);
    plVar8 = (int64_t *)FUN_1802ed2b0(*(uint64_t *)(param_1 + 0x18),&plStackX_8,0,0);
    plVar8 = (int64_t *)*plVar8;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if (plVar8 != (int64_t *)0x0) {
      pcVar2 = *(code **)(*plVar9 + 0x148);
      if (*(code **)(*plVar8 + 0x158) == (code *)&unknown_var_2528_ptr) {
        plVar12 = plVar8 + 0x66;
      }
      else {
        plVar12 = (int64_t *)(**(code **)(*plVar8 + 0x158))(plVar8);
      }
      (*pcVar2)(plVar9,plVar12);
      lVar11 = FUN_180275820(plVar8);
      if (lVar11 == 0) {
        return;
      }
      lVar11 = FUN_180275820(plVar8);
      *(uint64_t *)(param_1 + 0x78) = *(uint64_t *)(lVar11 + 0x1b8);
      FUN_1802ed990(*(uint64_t *)(param_1 + 0x18),1);
      FUN_1802ee610(*(uint64_t *)(param_1 + 0x18),plVar8);
    }
    if (*(int64_t *)(param_1 + 0x78) == 0) {
      return;
    }
    FUN_1802edcd0(lVar1,plVar9,1);
    if (*(int64_t *)(param_1 + 0x70) != 0) {
      *(int8_t *)(*(int64_t *)(param_1 + 0x70) + 0x39) = 1;
      *(uint64_t *)(param_1 + 0x70) = 0;
    }
    pcVar2 = *(code **)(*plVar9 + 0x118);
    plStackX_8 = *(int64_t **)(param_1 + 0x78);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    (*pcVar2)(plVar9,&plStackX_8);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    (**(code **)(*plVar9 + 400))(plVar9,*(int64_t *)(param_1 + 0x78) + 0x288);
    lVar1 = *(int64_t *)(param_1 + 0x78);
    uVar6 = *(int32_t *)(lVar1 + 0x29c);
    uVar3 = *(int32_t *)(lVar1 + 0x2a0);
    uVar4 = *(int32_t *)(lVar1 + 0x2a4);
    *(int32_t *)(plVar9 + 0xc) = *(int32_t *)(lVar1 + 0x298);
    *(int32_t *)((int64_t)plVar9 + 100) = uVar6;
    *(int32_t *)(plVar9 + 0xd) = uVar3;
    *(int32_t *)((int64_t)plVar9 + 0x6c) = uVar4;
  }
  else {
    lVar1 = *(int64_t *)(param_1 + 0x18);
    if (lVar1 == 0) {
      return;
    }
    iVar5 = FUN_1802ed190(lVar1,0,param_3,param_4,0xfffffffffffffffe);
    if (iVar5 == 0) {
      return;
    }
    uVar7 = FUN_18062b1e0(system_memory_pool_ptr,0x298,8,3);
    plVar8 = (int64_t *)FUN_1802f5f70(uVar7);
    plVar9 = (int64_t *)FUN_1802ed2b0(*(uint64_t *)(param_1 + 0x18),&plStackX_8,0,0);
    plVar9 = (int64_t *)*plVar9;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if (*(code **)(*plVar9 + 0x130) == (code *)&unknown_var_4032_ptr) {
      uVar6 = (int32_t)plVar9[0x42];
    }
    else {
      uVar6 = (**(code **)(*plVar9 + 0x130))(plVar9);
    }
    FUN_1802ed990(lVar1,1);
    pcVar2 = *(code **)(*plVar8 + 0x148);
    if (*(code **)(*plVar9 + 0x158) == (code *)&unknown_var_2528_ptr) {
      plVar12 = plVar9 + 0x66;
    }
    else {
      plVar12 = (int64_t *)(**(code **)(*plVar9 + 0x158))(plVar9);
    }
    (*pcVar2)(plVar8,plVar12);
    FUN_1802ee610(*(uint64_t *)(param_1 + 0x18),plVar9);
    FUN_1802edcd0(lVar1,plVar8,1);
    iVar5 = FUN_1802ed190(*(uint64_t *)(param_1 + 0x18),7);
    if (iVar5 == 0) {
      return;
    }
    puVar10 = (uint64_t *)FUN_1802ed2b0(*(uint64_t *)(param_1 + 0x18),&plStackX_10,7);
    plVar9 = (int64_t *)*puVar10;
    if (plStackX_10 != (int64_t *)0x0) {
      (**(code **)(*plStackX_10 + 0x38))();
    }
    pcVar2 = *(code **)(*plVar9 + 0x118);
    plStackX_8 = *(int64_t **)(param_1 + 0x78);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    (*pcVar2)(plVar9,&plStackX_8);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    plStackX_8 = (int64_t *)CONCAT44(plStackX_8._4_4_,uVar6);
    (**(code **)(*plVar9 + 0x128))(plVar9,&plStackX_8);
    if (*(int64_t *)(param_1 + 0x70) != 0) {
      *(int8_t *)(*(int64_t *)(param_1 + 0x70) + 0x39) = 1;
    }
  }
  *(int64_t **)(param_1 + 0x70) = plVar9;
  FUN_18035d190(param_1);
  return;
}





// 函数: void FUN_18035d190(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18035d190(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  *(int8_t *)(*(int64_t *)(param_1 + 0x70) + 0x38) = 0;
  *(int8_t *)(*(int64_t *)(param_1 + 0x70) + 0x3a) = 1;
  lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20);
  if (lVar1 != 0) {
    pplStackX_10 = &plStackX_8;
    plStackX_8 = *(int64_t **)(param_1 + 0x70);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    FUN_1801a35b0(lVar1,&plStackX_8,param_3,param_4,uVar2);
  }
  return;
}





// 函数: void FUN_18035d200(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18035d200(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t *plStackX_8;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if ((char)param_1[0x10] == '\0') {
    lVar1 = param_1[3];
    plStackX_8 = param_1;
    (**(code **)(*param_1 + 0x28))();
    FUN_1802f0080(lVar1,&plStackX_8,7,param_4,uVar2);
    *(int8_t *)(param_1 + 0x10) = 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035d260(uint64_t param_1)
void FUN_18035d260(uint64_t param_1)

{
  int8_t auStack_118 [32];
  int32_t uStack_f8;
  uint64_t uStack_f0;
  void **appuStack_e8 [2];
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [72];
  void *apuStack_78 [11];
  int32_t uStack_20;
  uint64_t uStack_18;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  uStack_f8 = 0;
  puStack_d8 = &unknown_var_3480_ptr;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 0xe;
  strcpy_s(auStack_c0,0x40,&system_data_ef48);
  FUN_1800b8300(apuStack_78,&puStack_d8);
  uStack_20 = 10;
  uStack_f8 = 1;
  FUN_180180730(param_1,appuStack_e8,apuStack_78);
  uStack_f8 = 0;
  appuStack_e8[0] = apuStack_78;
  apuStack_78[0] = &system_state_ptr;
  puStack_d8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035d370(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18035d370(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  code *pcVar2;
  int32_t uVar3;
  int32_t uVar4;
  int iVar5;
  int32_t uVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  int64_t *plVar12;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  
  if ((void *)*param_1 != &unknown_var_3520_ptr) {
    (**(code **)((void *)*param_1 + 0x70))();
    return;
  }
  param_1[0xe] = 0;
  if (param_1[0xf] == 0) {
    lVar1 = param_1[3];
    if (lVar1 == 0) {
      return;
    }
    iVar5 = FUN_1802ed190(lVar1,0,param_3,param_4,0xfffffffffffffffe);
    if (iVar5 == 0) {
      return;
    }
    uVar7 = FUN_18062b1e0(system_memory_pool_ptr,0x298,8,3);
    plVar9 = (int64_t *)FUN_1802f5f70(uVar7);
    plVar8 = (int64_t *)FUN_1802ed2b0(param_1[3],&plStackX_8,0,0);
    plVar8 = (int64_t *)*plVar8;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if (plVar8 != (int64_t *)0x0) {
      pcVar2 = *(code **)(*plVar9 + 0x148);
      if (*(code **)(*plVar8 + 0x158) == (code *)&unknown_var_2528_ptr) {
        plVar12 = plVar8 + 0x66;
      }
      else {
        plVar12 = (int64_t *)(**(code **)(*plVar8 + 0x158))(plVar8);
      }
      (*pcVar2)(plVar9,plVar12);
      lVar11 = FUN_180275820(plVar8);
      if (lVar11 == 0) {
        return;
      }
      lVar11 = FUN_180275820(plVar8);
      param_1[0xf] = *(uint64_t *)(lVar11 + 0x1b8);
      FUN_1802ed990(param_1[3],1);
      FUN_1802ee610(param_1[3],plVar8);
    }
    if (param_1[0xf] == 0) {
      return;
    }
    FUN_1802edcd0(lVar1,plVar9,1);
    if (param_1[0xe] != 0) {
      *(int8_t *)(param_1[0xe] + 0x39) = 1;
      param_1[0xe] = 0;
    }
    pcVar2 = *(code **)(*plVar9 + 0x118);
    plStackX_8 = (int64_t *)param_1[0xf];
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    (*pcVar2)(plVar9,&plStackX_8);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    (**(code **)(*plVar9 + 400))(plVar9,param_1[0xf] + 0x288);
    lVar1 = param_1[0xf];
    uVar6 = *(int32_t *)(lVar1 + 0x29c);
    uVar3 = *(int32_t *)(lVar1 + 0x2a0);
    uVar4 = *(int32_t *)(lVar1 + 0x2a4);
    *(int32_t *)(plVar9 + 0xc) = *(int32_t *)(lVar1 + 0x298);
    *(int32_t *)((int64_t)plVar9 + 100) = uVar6;
    *(int32_t *)(plVar9 + 0xd) = uVar3;
    *(int32_t *)((int64_t)plVar9 + 0x6c) = uVar4;
  }
  else {
    lVar1 = param_1[3];
    if (lVar1 == 0) {
      return;
    }
    iVar5 = FUN_1802ed190(lVar1,0,param_3,param_4,0xfffffffffffffffe);
    if (iVar5 == 0) {
      return;
    }
    uVar7 = FUN_18062b1e0(system_memory_pool_ptr,0x298,8,3);
    plVar8 = (int64_t *)FUN_1802f5f70(uVar7);
    plVar9 = (int64_t *)FUN_1802ed2b0(param_1[3],&plStackX_8,0,0);
    plVar9 = (int64_t *)*plVar9;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if (*(code **)(*plVar9 + 0x130) == (code *)&unknown_var_4032_ptr) {
      uVar6 = (int32_t)plVar9[0x42];
    }
    else {
      uVar6 = (**(code **)(*plVar9 + 0x130))(plVar9);
    }
    FUN_1802ed990(lVar1,1);
    pcVar2 = *(code **)(*plVar8 + 0x148);
    if (*(code **)(*plVar9 + 0x158) == (code *)&unknown_var_2528_ptr) {
      plVar12 = plVar9 + 0x66;
    }
    else {
      plVar12 = (int64_t *)(**(code **)(*plVar9 + 0x158))(plVar9);
    }
    (*pcVar2)(plVar8,plVar12);
    FUN_1802ee610(param_1[3],plVar9);
    FUN_1802edcd0(lVar1,plVar8,1);
    iVar5 = FUN_1802ed190(param_1[3],7);
    if (iVar5 == 0) {
      return;
    }
    puVar10 = (uint64_t *)FUN_1802ed2b0(param_1[3],&plStackX_10,7);
    plVar9 = (int64_t *)*puVar10;
    if (plStackX_10 != (int64_t *)0x0) {
      (**(code **)(*plStackX_10 + 0x38))();
    }
    pcVar2 = *(code **)(*plVar9 + 0x118);
    plStackX_8 = (int64_t *)param_1[0xf];
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    (*pcVar2)(plVar9,&plStackX_8);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    plStackX_8 = (int64_t *)CONCAT44(plStackX_8._4_4_,uVar6);
    (**(code **)(*plVar9 + 0x128))(plVar9,&plStackX_8);
    if (param_1[0xe] != 0) {
      *(int8_t *)(param_1[0xe] + 0x39) = 1;
    }
  }
  param_1[0xe] = plVar9;
  FUN_18035d190(param_1);
  return;
}



uint64_t *
FUN_18035d3a0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_3520_ptr;
  FUN_1803457d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x88,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035d3f0(uint64_t *param_1)
void FUN_18035d3f0(uint64_t *param_1)

{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *puStack_80;
  uint64_t *puStack_78;
  int32_t uStack_70;
  uint64_t uStack_68;
  
  uVar4 = 0xfffffffffffffffe;
  puVar3 = param_1;
  FUN_1803456e0();
  *puVar3 = &unknown_var_3928_ptr;
  puVar1 = puVar3 + 0xf;
  *puVar1 = &system_state_ptr;
  puVar3[0x10] = 0;
  *(int32_t *)(puVar3 + 0x11) = 0;
  *puVar1 = &system_data_buffer_ptr;
  puVar3[0x12] = 0;
  puVar3[0x10] = 0;
  *(int32_t *)(puVar3 + 0x11) = 0;
  puVar3[0x13] = &system_state_ptr;
  puVar3[0x14] = 0;
  *(int32_t *)(puVar3 + 0x15) = 0;
  puVar3[0x13] = &system_data_buffer_ptr;
  puVar3[0x16] = 0;
  puVar3[0x14] = 0;
  *(int32_t *)(puVar3 + 0x15) = 0;
  puVar3[0x17] = 0;
  *(int8_t *)(puVar3 + 0xe) = 0;
  *(int32_t *)(puVar3 + 0x18) = 0;
  puStack_80 = &system_data_buffer_ptr;
  uStack_68 = 0;
  puStack_78 = (uint64_t *)0x0;
  uStack_70 = 0;
  puVar3 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_78 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar2);
  *puVar3 = 0x746f687370616e53;
  *(int32_t *)(puVar3 + 1) = 0x6d614e20;
  *(int16_t *)((int64_t)puVar3 + 0xc) = 0x65;
  uStack_70 = 0xd;
  FUN_1803460a0(param_1,&puStack_80,puVar1,0,uVar4);
  puStack_80 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



uint64_t * FUN_18035d5e0(uint64_t *param_1,uint param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  
  *param_1 = &unknown_var_3928_ptr;
  if (param_1[0x17] != 0) {
    FUN_1801584c0(param_1,*(int32_t *)(param_1[0x17] + 0x50),param_3,param_4,0xfffffffffffffffe);
    plVar1 = (int64_t *)param_1[0x17];
    param_1[0x17] = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  if ((int64_t *)param_1[0x17] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x17] + 0x38))();
  }
  param_1[0x13] = &system_data_buffer_ptr;
  if (param_1[0x14] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x14] = 0;
  *(int32_t *)(param_1 + 0x16) = 0;
  param_1[0x13] = &system_state_ptr;
  param_1[0xf] = &system_data_buffer_ptr;
  if (param_1[0x10] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x10] = 0;
  *(int32_t *)(param_1 + 0x12) = 0;
  param_1[0xf] = &system_state_ptr;
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,200);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035d710(uint64_t param_1,uint64_t param_2)
void FUN_18035d710(uint64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  void *puStack_80;
  uint64_t *puStack_78;
  int32_t uStack_70;
  uint64_t uStack_68;
  
  puVar4 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,200,8,3);
  uVar5 = 0xfffffffffffffffe;
  puVar3 = puVar4;
  FUN_1803456e0(puVar4,param_2,param_1);
  *puVar3 = &unknown_var_3928_ptr;
  puVar1 = puVar3 + 0xf;
  *puVar1 = &system_state_ptr;
  puVar3[0x10] = 0;
  *(int32_t *)(puVar3 + 0x11) = 0;
  *puVar1 = &system_data_buffer_ptr;
  puVar3[0x12] = 0;
  puVar3[0x10] = 0;
  *(int32_t *)(puVar3 + 0x11) = 0;
  puVar3[0x13] = &system_state_ptr;
  puVar3[0x14] = 0;
  *(int32_t *)(puVar3 + 0x15) = 0;
  puVar3[0x13] = &system_data_buffer_ptr;
  puVar3[0x16] = 0;
  puVar3[0x14] = 0;
  *(int32_t *)(puVar3 + 0x15) = 0;
  puVar3[0x17] = 0;
  *(int8_t *)(puVar3 + 0xe) = 0;
  *(int32_t *)(puVar3 + 0x18) = 0;
  puStack_80 = &system_data_buffer_ptr;
  uStack_68 = 0;
  puStack_78 = (uint64_t *)0x0;
  uStack_70 = 0;
  puVar3 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_78 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar2);
  *puVar3 = 0x746f687370616e53;
  *(int32_t *)(puVar3 + 1) = 0x6d614e20;
  *(int16_t *)((int64_t)puVar3 + 0xc) = 0x65;
  uStack_70 = 0xd;
  FUN_1803460a0(puVar4,&puStack_80,puVar1,0,uVar5);
  puStack_80 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035d760(uint64_t param_1)
void FUN_18035d760(uint64_t param_1)

{
  int8_t auStack_188 [32];
  int32_t uStack_168;
  void **appuStack_160 [2];
  uint64_t uStack_150;
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [72];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  void *apuStack_88 [11];
  int32_t uStack_30;
  uint64_t uStack_28;
  
  uStack_150 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_188;
  uStack_168 = 0;
  puStack_148 = &unknown_var_3480_ptr;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 0xd;
  strcpy_s(auStack_130,0x40,&system_data_f0d0);
  FUN_1800b8300(apuStack_88,&puStack_148);
  uStack_30 = 0;
  uStack_168 = 1;
  FUN_180180730(param_1,appuStack_160,apuStack_88);
  uStack_168 = 0;
  apuStack_88[0] = &system_state_ptr;
  puStack_148 = &system_state_ptr;
  puStack_e8 = &unknown_var_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 5;
  appuStack_160[0] = apuStack_88;
  strcpy_s(auStack_d0,0x40,&system_data_f0c8);
  FUN_1800b8300(apuStack_88,&puStack_e8);
  uStack_30 = 9;
  uStack_168 = 2;
  FUN_180180730(param_1,appuStack_160,apuStack_88);
  uStack_168 = 0;
  apuStack_88[0] = &system_state_ptr;
  puStack_e8 = &system_state_ptr;
  appuStack_160[0] = apuStack_88;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_188);
}





// 函数: void FUN_18035d8f0(int64_t param_1,int64_t param_2)
void FUN_18035d8f0(int64_t param_1,int64_t param_2)

{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  uint64_t *puVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plStackX_18;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if ((iVar1 != 0xd) || (iVar3 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_f0d0), iVar3 != 0)) {
    if (iVar1 == 5) {
      lVar7 = 0;
      lVar8 = lVar7;
      do {
        lVar6 = lVar8 + 1;
        if (*(char *)(*(int64_t *)(param_2 + 8) + lVar8) != (&system_data_f0c8)[lVar8]) {
          return;
        }
        lVar8 = lVar6;
      } while (lVar6 != 6);
      iVar1 = *(int *)(param_1 + 0xa8);
      if (0 < iVar1) {
        if (iVar1 == 6) {
          lVar8 = lVar7;
          while (lVar6 = lVar8 + 1,
                *(char *)(*(int64_t *)(param_1 + 0xa0) + lVar8) == (&system_data_f0e4)[lVar8]) {
            lVar8 = lVar6;
            if (lVar6 == 7) {
              *(int32_t *)(param_1 + 0xc0) = 0;
              return;
            }
          }
        }
        if (iVar1 == 3) {
          do {
            lVar8 = lVar7 + 1;
            if (*(char *)(*(int64_t *)(param_1 + 0xa0) + lVar7) != (&system_data_f0e0)[lVar7]) {
              return;
            }
            lVar7 = lVar8;
          } while (lVar8 != 4);
          *(int32_t *)(param_1 + 0xc0) = 1;
        }
      }
    }
    return;
  }
  plVar5 = *(int64_t **)(param_1 + 0xb8);
  if (plVar5 != (int64_t *)0x0) {
    if (*(char *)(param_1 + 0x70) != '\0') {
      (**(code **)(*plVar5 + 0x68))();
      plVar5 = *(int64_t **)(param_1 + 0xb8);
    }
    FUN_1801584c0(plVar5,(int)plVar5[10]);
    plVar5 = *(int64_t **)(param_1 + 0xb8);
    *(uint64_t *)(param_1 + 0xb8) = 0;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x38))();
    }
  }
  if (*(int *)(param_1 + 0x88) < 1) {
    return;
  }
  puVar4 = (uint64_t *)FUN_180157390();
  uVar2 = *puVar4;
  *puVar4 = 0;
  plVar5 = *(int64_t **)(param_1 + 0xb8);
  *(uint64_t *)(param_1 + 0xb8) = uVar2;
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x38))();
  }
  if (plStackX_18 == (int64_t *)0x0) {
    return;
  }
  (**(code **)(*plStackX_18 + 0x38))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035dac0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18035dac0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int32_t uVar2;
  int64_t lVar3;
  int32_t *puVar4;
  uint64_t uVar5;
  void *puStack_60;
  int32_t *puStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  void *puStack_40;
  int32_t *puStack_38;
  int32_t uStack_30;
  uint64_t uStack_28;
  
  uVar5 = 0xfffffffffffffffe;
  if (*(int *)(param_2 + 0x10) == 5) {
    lVar1 = 0;
    do {
      lVar3 = lVar1;
      if (*(char *)(*(int64_t *)(param_2 + 8) + lVar3) != (&system_data_f0c8)[lVar3]) {
        return;
      }
      lVar1 = lVar3 + 1;
    } while (lVar3 + 1 != 6);
    puStack_60 = &system_data_buffer_ptr;
    uStack_48 = 0;
    puStack_58 = (int32_t *)0x0;
    uStack_50 = 0;
    puVar4 = (int32_t *)
             FUN_18062b420(system_memory_pool_ptr,(int)lVar3 + 0xb,&unknown_var_3699_ptr,param_4,0xfffffffffffffffe
                          );
    *(int8_t *)puVar4 = 0;
    puStack_58 = puVar4;
    uVar2 = FUN_18064e990(puVar4);
    *puVar4 = 0x65687053;
    *(int16_t *)(puVar4 + 1) = 0x6572;
    *(int8_t *)((int64_t)puVar4 + 6) = 0;
    uStack_50 = 6;
    uStack_48._0_4_ = uVar2;
    FUN_180066df0(param_3,&puStack_60);
    puStack_60 = &system_data_buffer_ptr;
    if (puStack_58 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_58 = (int32_t *)0x0;
    uStack_48 = (uint64_t)uStack_48._4_4_ << 0x20;
    puStack_60 = &system_state_ptr;
    puStack_40 = &system_data_buffer_ptr;
    uStack_28 = 0;
    puStack_38 = (int32_t *)0x0;
    uStack_30 = 0;
    puVar4 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13,param_4,uVar5);
    *(int8_t *)puVar4 = 0;
    puStack_38 = puVar4;
    uVar2 = FUN_18064e990(puVar4);
    uStack_28 = CONCAT44(uStack_28._4_4_,uVar2);
    *puVar4 = 0x786f42;
    uStack_30 = 3;
    FUN_180066df0(param_3,&puStack_40);
    puStack_40 = &system_data_buffer_ptr;
    if (puStack_38 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}





// 函数: void FUN_18035dc50(int64_t param_1)
void FUN_18035dc50(int64_t param_1)

{
  int iVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plStackX_10;
  
  if (0 < *(int *)(param_1 + 0x88)) {
    puVar4 = (uint64_t *)
             FUN_180157390(param_1,&plStackX_10,param_1 + 0x78,
                           *(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20),1);
    uVar2 = *puVar4;
    *puVar4 = 0;
    plVar3 = *(int64_t **)(param_1 + 0xb8);
    *(uint64_t *)(param_1 + 0xb8) = uVar2;
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
    if (plStackX_10 != (int64_t *)0x0) {
      (**(code **)(*plStackX_10 + 0x38))();
    }
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  if (0 < iVar1) {
    if (iVar1 == 6) {
      lVar5 = 0;
      while (lVar6 = lVar5 + 1,
            *(char *)(*(int64_t *)(param_1 + 0xa0) + lVar5) == (&system_data_f0e4)[lVar5]) {
        lVar5 = lVar6;
        if (lVar6 == 7) {
          *(int32_t *)(param_1 + 0xc0) = 0;
          return;
        }
      }
    }
    if (iVar1 == 3) {
      lVar5 = 0;
      do {
        lVar6 = lVar5 + 1;
        if (*(char *)(*(int64_t *)(param_1 + 0xa0) + lVar5) != (&system_data_f0e0)[lVar5]) {
          return;
        }
        lVar5 = lVar6;
      } while (lVar6 != 4);
      *(int32_t *)(param_1 + 0xc0) = 1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035dd60(int64_t param_1)
void FUN_18035dd60(int64_t param_1)

{
  int64_t lVar1;
  float fVar2;
  float fVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int32_t uStack_ac;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int32_t uStack_2c;
  
  lVar1 = *(int64_t *)(param_1 + 0x18);
  plVar5 = *(int64_t **)(param_1 + 0xb8);
  uVar4 = *(uint64_t *)(lVar1 + 0x30);
  uStack_a0 = *(uint64_t *)(lVar1 + 0x38);
  uStack_98 = *(uint64_t *)(lVar1 + 0x40);
  uStack_90 = *(uint64_t *)(lVar1 + 0x48);
  uStack_88 = *(uint64_t *)(lVar1 + 0x50);
  uStack_80 = *(uint64_t *)(lVar1 + 0x58);
  uStack_78 = *(uint64_t *)(lVar1 + 0x60);
  uStack_70 = *(uint64_t *)(lVar1 + 0x68);
  uStack_68 = *(uint64_t *)(lVar1 + 0x70);
  uStack_60 = *(uint64_t *)(lVar1 + 0x78);
  uStack_58 = *(uint64_t *)(lVar1 + 0x80);
  uStack_50 = *(uint64_t *)(lVar1 + 0x88);
  uStack_48 = *(uint64_t *)(lVar1 + 0x90);
  uStack_40 = *(uint64_t *)(lVar1 + 0x98);
  fStack_b8 = *(float *)(lVar1 + 0xa0);
  fStack_b4 = *(float *)(lVar1 + 0xa4);
  fStack_b0 = *(float *)(lVar1 + 0xa8);
  uStack_ac = *(int32_t *)(lVar1 + 0xac);
  fVar7 = *(float *)(render_system_data_memory + 0x1b8);
  fVar2 = *(float *)(render_system_data_memory + 0x1bc);
  fVar3 = *(float *)(render_system_data_memory + 0x1c0);
  if (plVar5 == (int64_t *)0x0) {
    return;
  }
  cVar6 = '\0';
  uStack_a8 = uVar4;
  fStack_38 = fStack_b8;
  fStack_34 = fStack_b4;
  fStack_30 = fStack_b0;
  if (*(int *)(param_1 + 0xc0) == 0) {
    uStack_a8._4_4_ = (float)((uint64_t)uVar4 >> 0x20);
    uStack_a8._0_4_ = (float)uVar4;
    cVar6 = (float)uStack_a8 * (float)uStack_a8 + uStack_a8._4_4_ * uStack_a8._4_4_ +
            (float)uStack_a0 * (float)uStack_a0 <
            (fStack_b4 - fVar2) * (fStack_b4 - fVar2) + (fStack_b8 - fVar7) * (fStack_b8 - fVar7) +
            (fStack_b0 - fVar3) * (fStack_b0 - fVar3);
    uStack_2c = uStack_ac;
    if (!(bool)cVar6) goto LAB_18035dfab;
  }
  else {
    if (*(int *)(param_1 + 0xc0) != 1) {
      return;
    }
    uStack_60 = uStack_60 & 0xffffffff;
    uStack_50 = uStack_50 & 0xffffffff;
    uStack_40 = uStack_40 & 0xffffffff;
    uStack_2c = 0x3f800000;
    FUN_180084760(&uStack_68,&uStack_a8);
    fVar9 = (float)uStack_a8 * fVar7 + (float)uStack_98 * fVar2 + (float)uStack_88 * fVar3 +
            (float)uStack_78;
    fVar8 = uStack_a8._4_4_ * fVar7 + uStack_98._4_4_ * fVar2 + uStack_88._4_4_ * fVar3 +
            uStack_78._4_4_;
    fVar7 = (float)uStack_a0 * fVar7 + (float)uStack_90 * fVar2 + (float)uStack_80 * fVar3 +
            (float)uStack_70;
    if ((((fVar9 < -1.0) || (1.0 < fVar9)) || (fVar8 < -1.0)) ||
       (((1.0 < fVar8 || (fVar7 < -1.0)) || (1.0 < fVar7)))) goto LAB_18035de70;
LAB_18035dfab:
    if (*(char *)(param_1 + 0x70) == '\0') {
      (**(code **)(*plVar5 + 0xa8))(plVar5,&fStack_b8);
      (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x60))();
      *(int8_t *)(param_1 + 0x70) = 1;
      return;
    }
  }
  if (cVar6 == '\0') {
    return;
  }
LAB_18035de70:
  if (*(char *)(param_1 + 0x70) != '\0') {
    (**(code **)(*plVar5 + 0x68))(plVar5);
    *(int8_t *)(param_1 + 0x70) = 0;
  }
  return;
}





