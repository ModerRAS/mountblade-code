#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part078.c - 6 个函数

// 函数: void FUN_1802436f0(int64_t param_1)
void FUN_1802436f0(int64_t param_1)

{
  int32_t *puVar1;
  int64_t lVar2;
  uint uVar3;
  char cVar4;
  int32_t uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  int8_t *puVar13;
  uint64_t uVar14;
  void *puVar15;
  uint uVar16;
  int32_t extraout_XMM0_Da;
  int8_t auStack_f8 [32];
  int8_t uStack_d8;
  int32_t uStack_c8;
  void *puStack_c0;
  void *puStack_b8;
  uint uStack_b0;
  uint64_t uStack_a8;
  void *puStack_a0;
  void *puStack_98;
  uint uStack_90;
  uint64_t uStack_88;
  int64_t *plStack_80;
  int64_t **pplStack_78;
  uint64_t uStack_70;
  int64_t *plStack_68;
  void *puStack_60;
  uint64_t *puStack_58;
  uint uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_38;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  uStack_c8 = 0;
  uVar11 = *(uint64_t *)(param_1 + 0x9690);
  lVar2 = *(int64_t *)(param_1 + 0x9650);
  puStack_a0 = &system_data_buffer_ptr;
  uStack_88 = 0;
  puStack_98 = (void *)0x0;
  uStack_90 = 0;
  if (*(int *)(lVar2 + 0xb8) == 0) {
    puVar15 = &system_buffer_ptr;
    if (*(void **)(*system_main_module_state + 0x440) != (void *)0x0) {
      puVar15 = *(void **)(*system_main_module_state + 0x440);
    }
    FUN_180627c50(&puStack_a0,puVar15);
    uVar16 = uStack_90;
    puStack_c0 = &system_data_buffer_ptr;
    uStack_a8 = 0;
    puStack_b8 = (void *)0x0;
    uStack_b0 = 0;
    uStack_c8 = 1;
    uVar14 = (uint64_t)uStack_90;
    if (puStack_98 != (void *)0x0) {
      FUN_1806277c0(&puStack_c0,uVar14);
    }
    if (uVar16 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_b8,puStack_98,uVar14);
    }
    uStack_b0 = uVar16;
    if (puStack_b8 != (void *)0x0) {
      puStack_b8[uVar14] = 0;
    }
    uStack_a8._4_4_ = uStack_88._4_4_;
    FUN_1806277c0(&puStack_c0,0x12);
    uVar14 = (uint64_t)uStack_b0;
    puVar1 = (int32_t *)(puStack_b8 + uVar14);
    *puVar1 = 0x656e6547;
    puVar1[1] = 0x65746172;
    puVar1[2] = 0x78655464;
    puVar1[3] = 0x65727574;
    *(int16_t *)(puStack_b8 + uVar14 + 0x10) = 0x2f73;
    puStack_b8[uVar14 + 0x12] = 0;
    uStack_b0 = 0x12;
    if (puStack_98 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_90 = 0x12;
    puStack_98 = puStack_b8;
    uStack_88 = CONCAT44(uStack_a8._4_4_,(int32_t)uStack_a8);
    uStack_b0 = 0;
    uStack_c8 = 0;
    puStack_b8 = (void *)0x0;
    uStack_a8 = 0;
    puStack_c0 = &system_state_ptr;
  }
  else {
    uVar16 = *(uint *)(param_1 + 0x95d8);
    uVar14 = (uint64_t)uVar16;
    if (*(int64_t *)(param_1 + 0x95d0) != 0) {
      FUN_1806277c0(&puStack_a0,uVar14);
    }
    if (uVar16 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_98,*(uint64_t *)(param_1 + 0x95d0),uVar14);
    }
    if (puStack_98 != (void *)0x0) {
      puStack_98[uVar14] = 0;
    }
    uStack_88 = CONCAT44(*(int32_t *)(param_1 + 0x95e4),(int32_t)uStack_88);
    uStack_90 = 0;
  }
  if (0 < *(int *)(param_1 + 0x95f8)) {
    FUN_1806277c0(&puStack_a0,uStack_90 + *(int *)(param_1 + 0x95f8));
                    // WARNING: Subroutine does not return
    memcpy(puStack_98 + uStack_90,*(uint64_t *)(param_1 + 0x95f0),
           (int64_t)(*(int *)(param_1 + 0x95f8) + 1));
  }
  lVar9 = FUN_1800f9980(&puStack_60,*(int32_t *)(param_1 + 0x9608));
  if (0 < *(int *)(lVar9 + 0x10)) {
    FUN_1806277c0(&puStack_a0,uStack_90 + *(int *)(lVar9 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy(puStack_98 + uStack_90,*(uint64_t *)(lVar9 + 8),(int64_t)(*(int *)(lVar9 + 0x10) + 1))
    ;
  }
  puStack_60 = &system_state_ptr;
  if (*(char *)(lVar2 + 0xea) == '\0') {
    uVar11 = FUN_18023a940(uVar11);
    FUN_180225ee0(extraout_XMM0_Da,&puStack_a0,*(int32_t *)(param_1 + 0x9608),uVar11);
  }
  else {
    puVar10 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x70,8,3);
    *puVar10 = 0;
    puVar10[1] = 0;
    *(int16_t *)(puVar10 + 2) = 0;
    *(int8_t *)((int64_t)puVar10 + 0x12) = 3;
    *(int32_t *)((int64_t)puVar10 + 0x62) = 0;
    *(uint64_t *)((int64_t)puVar10 + 0x54) = 0;
    *(int32_t *)((int64_t)puVar10 + 0x5c) = 0;
    *(int16_t *)(puVar10 + 0xc) = 0;
    *(int8_t *)((int64_t)puVar10 + 0x66) = 0;
    *(uint64_t *)((int64_t)puVar10 + 0x14) = 0;
    *(uint64_t *)((int64_t)puVar10 + 0x1c) = 0;
    *(uint64_t *)((int64_t)puVar10 + 0x24) = 0;
    *(uint64_t *)((int64_t)puVar10 + 0x2c) = 0;
    *(uint64_t *)((int64_t)puVar10 + 0x34) = 0;
    *(uint64_t *)((int64_t)puVar10 + 0x3c) = 0;
    *(uint64_t *)((int64_t)puVar10 + 0x44) = 0;
    *(uint64_t *)((int64_t)puVar10 + 0x4c) = 0;
    uVar11 = FUN_18023a940(uVar11);
    FUN_1800a5fc0(system_message_buffer,uVar11,puVar10);
    plVar12 = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr,0xf0,8,3);
    uVar5 = *(int32_t *)(param_1 + 0x9608);
    pplStack_78 = (int64_t **)plVar12;
    FUN_180049830(plVar12);
    *plVar12 = (int64_t)&unknown_var_9624_ptr;
    plStack_80 = plVar12 + 0x18;
    *plStack_80 = (int64_t)&system_state_ptr;
    plVar12[0x19] = 0;
    *(int32_t *)(plVar12 + 0x1a) = 0;
    *plStack_80 = (int64_t)&system_data_buffer_ptr;
    plVar12[0x1b] = 0;
    plVar12[0x19] = 0;
    *(int32_t *)(plVar12 + 0x1a) = 0;
    plVar12[0x1c] = (int64_t)puVar10;
    puVar15 = &system_buffer_ptr;
    if (puStack_98 != (void *)0x0) {
      puVar15 = puStack_98;
    }
    (**(code **)(*plStack_80 + 0x10))(plStack_80,puVar15);
    *(int32_t *)(plVar12 + 0x1d) = uVar5;
    plStack_68 = plVar12;
    (**(code **)(*plVar12 + 0x28))(plVar12);
    uVar11 = system_context_ptr;
    pplStack_78 = &plStack_80;
    plStack_80 = plVar12;
    (**(code **)(*plVar12 + 0x28))(plVar12);
    FUN_18005e110(uVar11,&plStack_80);
    (**(code **)(*plVar12 + 0x38))(plVar12);
  }
  uVar16 = 0;
  puStack_a0 = &system_data_buffer_ptr;
  if (puStack_98 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_98 = (void *)0x0;
  uStack_88 = uStack_88 & 0xffffffff00000000;
  puStack_a0 = &system_state_ptr;
  puStack_60 = &system_data_buffer_ptr;
  uStack_48 = 0;
  puStack_58 = (uint64_t *)0x0;
  uStack_50 = 0;
  puVar10 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar10 = 0;
  puStack_58 = puVar10;
  uVar5 = FUN_18064e990(puVar10);
  uStack_48 = CONCAT44(uStack_48._4_4_,uVar5);
  *puVar10 = 0x2f736573736170;
  uStack_50 = 7;
  cVar4 = FUN_180624a00(&puStack_60);
  if (cVar4 == '\0') {
    FUN_180624910(&puStack_60);
  }
  plStack_80 = (int64_t *)FUN_18023a940(*(uint64_t *)(param_1 + 0x9690));
  uVar3 = uStack_50;
  puVar10 = puStack_58;
  puStack_c0 = &system_data_buffer_ptr;
  uStack_a8 = 0;
  puVar13 = (int8_t *)0x0;
  puStack_b8 = (int8_t *)0x0;
  uStack_b0 = 0;
  uStack_c8 = 2;
  uVar14 = (uint64_t)uStack_50;
  uVar7 = 0;
  if (puStack_58 == (uint64_t *)0x0) {
LAB_180243c26:
    uVar16 = uVar7;
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar13,puVar10,uVar14);
    }
  }
  else if (uStack_50 != 0) {
    iVar6 = uStack_50 + 1;
    if (iVar6 < 0x10) {
      iVar6 = 0x10;
    }
    puVar13 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)iVar6,0x13);
    *puVar13 = 0;
    puStack_b8 = puVar13;
    uVar7 = FUN_18064e990(puVar13);
    uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar7);
    goto LAB_180243c26;
  }
  uStack_b0 = uVar3;
  if (puVar13 != (int8_t *)0x0) {
    puVar13[uVar14] = 0;
  }
  uStack_a8._4_4_ = uStack_48._4_4_;
  iVar6 = uVar3 + 9;
  if (iVar6 != 0) {
    uVar7 = uVar3 + 10;
    if (puVar13 == (int8_t *)0x0) {
      if ((int)uVar7 < 0x10) {
        uVar7 = 0x10;
      }
      puVar13 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)(int)uVar7,0x13);
      *puVar13 = 0;
    }
    else {
      if (uVar7 <= uVar16) goto LAB_180243cb3;
      uStack_d8 = 0x13;
      puVar13 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar13,uVar7,0x10);
    }
    puStack_b8 = puVar13;
    uStack_a8._0_4_ = FUN_18064e990(puVar13);
  }
LAB_180243cb3:
  *(uint64_t *)(puVar13 + uVar14) = 0x64642e6c616e6966;
  *(int16_t *)(puVar13 + uVar14 + 8) = 0x73;
  uStack_b0 = iVar6;
  FUN_180225ee0(0x616e6966,&puStack_c0,3,plStack_80);
  uStack_c8 = 0;
  puStack_c0 = &system_data_buffer_ptr;
  if (puStack_b8 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_b8 = (void *)0x0;
  uStack_a8 = (uint64_t)uStack_a8._4_4_ << 0x20;
  puStack_c0 = &system_state_ptr;
  pplStack_78 = (int64_t **)FUN_18023a940();
  puVar13 = (int8_t *)0x0;
  puStack_a0 = &system_data_buffer_ptr;
  plStack_80 = (int64_t *)0x0;
  puStack_98 = (int8_t *)0x0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_c8 = 4;
  if (puVar10 == (uint64_t *)0x0) {
LAB_180243da1:
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar13,puVar10,uVar14);
    }
  }
  else if (uVar3 != 0) {
    iVar8 = uVar3 + 1;
    if (iVar8 < 0x10) {
      iVar8 = 0x10;
    }
    puVar13 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)iVar8,0x13);
    *puVar13 = 0;
    puStack_98 = puVar13;
    plStack_80 = (int64_t *)FUN_18064e990(puVar13);
    uStack_88 = CONCAT44(uStack_88._4_4_,(int)plStack_80);
    goto LAB_180243da1;
  }
  uStack_90 = uVar3;
  if (puVar13 != (int8_t *)0x0) {
    puVar13[uVar14] = 0;
  }
  uStack_88._4_4_ = uStack_48._4_4_;
  if (iVar6 != 0) {
    uVar16 = uVar3 + 10;
    if (puVar13 == (int8_t *)0x0) {
      if ((int)uVar16 < 0x10) {
        uVar16 = 0x10;
      }
      puVar13 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)(int)uVar16,0x13);
      *puVar13 = 0;
    }
    else {
      if (uVar16 <= (uint)plStack_80) goto LAB_180243e2b;
      uStack_d8 = 0x13;
      puVar13 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar13,uVar16,0x10);
    }
    puStack_98 = puVar13;
    uStack_88._0_4_ = FUN_18064e990(puVar13);
  }
LAB_180243e2b:
  *(uint64_t *)(puVar13 + uVar14) = 0x64642e6874706564;
  *(int16_t *)(puVar13 + uVar14 + 8) = 0x73;
  uStack_90 = iVar6;
  FUN_180225ee0(0x74706564,&puStack_a0,3,pplStack_78);
  uStack_c8 = 0;
  puStack_a0 = &system_data_buffer_ptr;
  if (puStack_98 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puVar13 = (int8_t *)0x0;
  puStack_98 = (void *)0x0;
  uVar16 = 0;
  uStack_88 = (uint64_t)uStack_88._4_4_ << 0x20;
  puStack_a0 = &system_state_ptr;
  if (*(int64_t *)
       (*(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x99d0) + 0x58) + -8) + 0x428) == 0)
  goto LAB_18024401f;
  uVar11 = FUN_18023a940();
  puStack_c0 = &system_data_buffer_ptr;
  uStack_a8 = 0;
  puStack_b8 = (int8_t *)0x0;
  uStack_b0 = 0;
  uStack_c8 = 8;
  uVar7 = 0;
  if (puVar10 == (uint64_t *)0x0) {
LAB_180243f24:
    uVar16 = uVar7;
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar13,puVar10,uVar14);
    }
  }
  else if (uVar3 != 0) {
    iVar6 = uVar3 + 1;
    if (iVar6 < 0x10) {
      iVar6 = 0x10;
    }
    puVar13 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)iVar6,0x13);
    *puVar13 = 0;
    puStack_b8 = puVar13;
    uVar7 = FUN_18064e990(puVar13);
    uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar7);
    goto LAB_180243f24;
  }
  uStack_b0 = uVar3;
  if (puVar13 != (int8_t *)0x0) {
    puVar13[uVar14] = 0;
  }
  uStack_a8._4_4_ = uStack_48._4_4_;
  if (uVar3 + 10 != 0) {
    uVar7 = uVar3 + 0xb;
    if (puVar13 == (int8_t *)0x0) {
      if ((int)uVar7 < 0x10) {
        uVar7 = 0x10;
      }
      puVar13 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)(int)uVar7,0x13);
      *puVar13 = 0;
    }
    else {
      if (uVar7 <= uVar16) goto LAB_180243fae;
      uStack_d8 = 0x13;
      puVar13 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar13,uVar7,0x10);
    }
    puStack_b8 = puVar13;
    uStack_a8._0_4_ = FUN_18064e990(puVar13);
  }
LAB_180243fae:
  *(uint64_t *)(puVar13 + uVar14) = 0x642e776f64616873;
  *(int16_t *)(puVar13 + uVar14 + 8) = 0x7364;
  puVar13[uVar14 + 10] = 0;
  uStack_b0 = uVar3 + 10;
  FUN_180225ee0(0x64616873,&puStack_c0,3,uVar11);
  uStack_c8 = 0;
  puStack_c0 = &system_data_buffer_ptr;
  if (puStack_b8 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_b8 = (void *)0x0;
  uStack_a8 = (uint64_t)uStack_a8._4_4_ << 0x20;
  puStack_c0 = &system_state_ptr;
LAB_18024401f:
  uStack_c8 = 0;
  puStack_60 = &system_data_buffer_ptr;
  if (puVar10 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar10);
  }
  puStack_58 = (uint64_t *)0x0;
  uStack_48 = uStack_48 & 0xffffffff00000000;
  puStack_60 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_f8);
}



uint64_t *
FUN_180244080(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0xc;
  strcpy_s(param_2[1],0x80,&unknown_var_264_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}



uint64_t *
FUN_180244110(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 7;
  strcpy_s(param_2[1],0x80,&system_data_4640,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_180244190(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int64_t *plVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t uStackX_10;
  uint64_t uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  *param_1 = (int64_t)&system_handler1_ptr;
  *param_1 = (int64_t)&system_handler2_ptr;
  puVar4 = (uint64_t *)0x0;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = (int64_t)&unknown_var_9768_ptr;
  param_1[2] = 0;
  *param_1 = (int64_t)&unknown_var_9896_ptr;
  *(uint64_t *)((int64_t)param_1 + 0x1c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x24) = 0;
  *(int32_t *)((int64_t)param_1 + 0x2c) = 0;
  *(int32_t *)(param_1 + 6) = 0x3f800000;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  plVar1 = param_1 + 0x11;
  *plVar1 = (int64_t)&system_state_ptr;
  param_1[0x12] = 0;
  *(int32_t *)(param_1 + 0x13) = 0;
  *plVar1 = (int64_t)&system_data_buffer_ptr;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  *(int32_t *)(param_1 + 0x13) = 0;
  param_1[0x15] = (int64_t)&system_state_ptr;
  param_1[0x16] = 0;
  *(int32_t *)(param_1 + 0x17) = 0;
  param_1[0x15] = (int64_t)&system_data_buffer_ptr;
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  *(int32_t *)(param_1 + 0x17) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x3f8000003f800000;
  param_1[0xc] = 0x3f8000003f800000;
  param_1[0xd] = 0x3f8000003f800000;
  param_1[0xe] = 0x3f8000003f800000;
  uStackX_10 = (uint64_t)
               CONCAT24(*(int16_t *)(*(int64_t *)(system_message_buffer + 0x121e0) + 0x32e),
                        (uint)*(ushort *)(*(int64_t *)(system_message_buffer + 0x121e0) + 0x32c));
  param_1[0xf] = uStackX_10;
  *(int16_t *)(param_1 + 0x10) = 0;
  *(int16_t *)((int64_t)param_1 + 0xe9) = 0;
  *(int8_t *)((int64_t)param_1 + 0xde) = 0;
  *(int32_t *)(param_1 + 0x1b) = 0xffffffff;
  plVar2 = (int64_t *)param_1[7];
  param_1[7] = 0;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(int32_t *)((int64_t)param_1 + 0xcc) = 3;
  *(int8_t *)((int64_t)param_1 + 0xdc) = 0;
  *(int32_t *)((int64_t)param_1 + 0xd4) = 0;
  lVar3 = system_operation_state;
  (**(code **)(*param_1 + 0x28))(param_1);
  puVar8 = *(uint64_t **)(lVar3 + 0x1870);
  if (puVar8 < *(uint64_t **)(lVar3 + 0x1878)) {
    *(uint64_t **)(lVar3 + 0x1870) = puVar8 + 1;
    *puVar8 = param_1;
    goto LAB_180244462;
  }
  puVar5 = *(uint64_t **)(lVar3 + 0x1868);
  lVar6 = (int64_t)puVar8 - (int64_t)puVar5 >> 3;
  if (lVar6 == 0) {
    lVar6 = 1;
LAB_1802443a8:
    puVar4 = (uint64_t *)
             FUN_18062b420(system_memory_pool_ptr,lVar6 * 8,*(int8_t *)(lVar3 + 0x1880),param_4,uVar10);
    puVar8 = *(uint64_t **)(lVar3 + 0x1870);
    puVar5 = *(uint64_t **)(lVar3 + 0x1868);
    puVar9 = puVar4;
  }
  else {
    lVar6 = lVar6 * 2;
    puVar9 = puVar4;
    if (lVar6 != 0) goto LAB_1802443a8;
  }
  for (; puVar5 != puVar8; puVar5 = puVar5 + 1) {
    *puVar4 = *puVar5;
    *puVar5 = 0;
    puVar4 = puVar4 + 1;
  }
  *puVar4 = param_1;
  plVar2 = *(int64_t **)(lVar3 + 0x1870);
  plVar7 = *(int64_t **)(lVar3 + 0x1868);
  if (plVar7 != plVar2) {
    do {
      if ((int64_t *)*plVar7 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar7 + 0x38))();
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar2);
    plVar7 = *(int64_t **)(lVar3 + 0x1868);
  }
  if (plVar7 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar7);
  }
  *(uint64_t **)(lVar3 + 0x1868) = puVar9;
  *(uint64_t **)(lVar3 + 0x1870) = puVar4 + 1;
  *(uint64_t **)(lVar3 + 0x1878) = puVar9 + lVar6;
LAB_180244462:
  *(int32_t *)(param_1 + 0x1c) = 0;
  *(int8_t *)(param_1 + 0x1d) = 0;
  *(int8_t *)((int64_t)param_1 + 0xdd) = 1;
  *(int32_t *)(param_1 + 0x19) = 3;
  (**(code **)(*plVar1 + 0x10))(plVar1,&unknown_var_232_ptr);
  *(int8_t *)(param_1 + 3) = 0;
  FUN_1802445c0(param_1);
  return param_1;
}



uint64_t FUN_1802444c0(uint64_t param_1,uint64_t param_2)

{
  FUN_180244780();
  if ((param_2 & 1) != 0) {
    free(param_1,0xf0);
  }
  return param_1;
}






// 函数: void FUN_180244500(uint64_t *param_1)
void FUN_180244500(uint64_t *param_1)

{
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[2] + 0x38))();
  }
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  return;
}



uint64_t *
FUN_180244540(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[2] + 0x38))();
  }
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802445c0(int64_t *param_1)
void FUN_1802445c0(int64_t *param_1)

{
  uint64_t uVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  float fStackX_8;
  float fStackX_c;
  
  lVar4 = (**(code **)(*param_1 + 0x60))();
  if (lVar4 == 0) {
    if (system_operation_state != 0) {
      uVar1 = *(uint64_t *)(system_operation_state + 0x17ec);
      fStackX_8 = (float)uVar1;
      *(int *)(param_1 + 8) = (int)fStackX_8;
      fStackX_c = (float)((uint64_t)uVar1 >> 0x20);
      *(int *)((int64_t)param_1 + 0x44) = (int)fStackX_c;
    }
  }
  else {
    lVar4 = (**(code **)(*param_1 + 0x60))(param_1);
    *(uint *)(param_1 + 8) = (uint)*(ushort *)(lVar4 + 0x32c);
    lVar4 = (**(code **)(*param_1 + 0x60))(param_1);
    *(uint *)((int64_t)param_1 + 0x44) = (uint)*(ushort *)(lVar4 + 0x32e);
  }
  cVar2 = (char)param_1[0x10];
  if (cVar2 == '\0') {
    iVar3 = lroundf((float)(int)param_1[8] * *(float *)(param_1 + 0xb));
    cVar2 = (char)param_1[0x10];
  }
  else {
    iVar3 = (int)param_1[0xf];
  }
  *(float *)(param_1 + 9) = (float)iVar3;
  if (cVar2 == '\0') {
    iVar3 = lroundf((float)*(int *)((int64_t)param_1 + 0x44) * *(float *)((int64_t)param_1 + 0x5c)
                   );
  }
  else {
    iVar3 = *(int *)((int64_t)param_1 + 0x7c);
  }
  *(float *)((int64_t)param_1 + 0x4c) = (float)iVar3;
  *(float *)(param_1 + 4) =
       (float)*(int *)((int64_t)param_1 + 0x44) * *(float *)((int64_t)param_1 + 0x54);
  *(float *)((int64_t)param_1 + 0x1c) = (float)(int)param_1[8] * *(float *)(param_1 + 10);
  iVar3 = lroundf((float)(int)param_1[8] * *(float *)(param_1 + 0xb) * *(float *)(param_1 + 0xd));
  *(float *)((int64_t)param_1 + 0x24) = (float)iVar3;
  iVar3 = lroundf((float)*(int *)((int64_t)param_1 + 0x44) * *(float *)((int64_t)param_1 + 0x5c) *
                  *(float *)((int64_t)param_1 + 0x6c));
  *(float *)(param_1 + 5) = (float)iVar3;
  return;
}






// 函数: void FUN_180244780(uint64_t *param_1)
void FUN_180244780(uint64_t *param_1)

{
  *param_1 = &unknown_var_9896_ptr;
  param_1[0x15] = &system_data_buffer_ptr;
  if (param_1[0x16] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x16] = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  param_1[0x15] = &system_state_ptr;
  param_1[0x11] = &system_data_buffer_ptr;
  if (param_1[0x12] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x12] = 0;
  *(int32_t *)(param_1 + 0x14) = 0;
  param_1[0x11] = &system_state_ptr;
  if ((int64_t *)param_1[7] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[7] + 0x38))();
  }
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[2] + 0x38))();
  }
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180244860(int64_t *param_1,int64_t param_2)
void FUN_180244860(int64_t *param_1,int64_t param_2)

{
  int64_t lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int64_t *plVar5;
  int32_t *puVar6;
  int64_t *plVar7;
  int32_t *puVar8;
  int32_t uVar9;
  int8_t auStack_178 [32];
  int8_t uStack_158;
  void *puStack_148;
  int32_t *puStack_140;
  int32_t uStack_138;
  uint64_t uStack_130;
  uint uStack_128;
  uint uStack_124;
  int64_t *plStack_120;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  int32_t uStack_108;
  int32_t uStack_104;
  int32_t uStack_100;
  uint64_t uStack_f8;
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [136];
  uint64_t uStack_48;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  plVar5 = (int64_t *)(**(code **)(*param_1 + 0x60))();
  if (plVar5 == (int64_t *)0x0) {
    plVar5 = *(int64_t **)(system_message_buffer + 0x121e0);
  }
  uStack_128 = (uint)*(ushort *)((int64_t)plVar5 + 0x32c);
  uStack_124 = (uint)*(ushort *)((int64_t)plVar5 + 0x32e);
  lVar1 = *(int64_t *)(system_parameter_buffer + 0x7ab8);
  if ((((lVar1 == 0) ||
       (cVar2 = (**(code **)(**(int64_t **)(param_2 + 0x3580) + 0x78))(), cVar2 == '\0')) ||
      (*(char *)(lVar1 + 0xd8) == '\0')) || (*(int *)(SYSTEM_STATE_MANAGER + 0x540) + -1 < 0)) {
    plStack_120 = (int64_t *)CONCAT44(uStack_124,uStack_128);
  }
  else {
    FUN_1802aa800(lVar1,&plStack_120,&uStack_128);
  }
  if (((int)param_1[0xf] != (int)plStack_120) ||
     (*(int *)((int64_t)param_1 + 0x7c) != (int)((uint64_t)plStack_120 >> 0x20))) {
    param_1[0xf] = (int64_t)plStack_120;
    (**(code **)(*param_1 + 0x70))(param_1);
  }
  if ((char)param_1[0x1d] == '\0') {
    puStack_148 = &system_data_buffer_ptr;
    uStack_130 = 0;
    puStack_140 = (int32_t *)0x0;
    uStack_138 = 0;
    puVar6 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x17,0x13);
    *(int8_t *)puVar6 = 0;
    puStack_140 = puVar6;
    uVar3 = FUN_18064e990(puVar6);
    *puVar6 = 0x566c6772;
    puVar6[1] = 0x3a776569;
    puVar6[2] = 0x7065643a;
    puVar6[3] = 0x625f6874;
    puVar6[4] = 0x65666675;
    *(int16_t *)(puVar6 + 5) = 0x5f72;
    *(int8_t *)((int64_t)puVar6 + 0x16) = 0;
    uStack_138 = 0x16;
    iVar4 = *(int *)(param_2 + 0x3530);
    uStack_130._0_4_ = uVar3;
    if (0 < iVar4) {
      if ((iVar4 != -0x16) && (uVar3 < iVar4 + 0x17U)) {
        uStack_158 = 0x13;
        puVar6 = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar6,iVar4 + 0x17U,0x10);
        puStack_140 = puVar6;
        uStack_130._0_4_ = FUN_18064e990(puVar6);
        iVar4 = *(int *)(param_2 + 0x3530);
      }
                    // WARNING: Subroutine does not return
      memcpy((int8_t *)((int64_t)puVar6 + 0x16),*(uint64_t *)(param_2 + 0x3528),
             (int64_t)(iVar4 + 1));
    }
    uStack_110 = 1;
    uStack_104 = 0x1018a;
    uStack_108 = 0;
    uStack_118 = (int32_t)(int64_t)*(float *)(param_1 + 9);
    uStack_114 = (int32_t)(int64_t)*(float *)((int64_t)param_1 + 0x4c);
    uStack_10c = 0x2f;
    uStack_100 = *(int32_t *)(param_2 + 0x1bd4);
    puStack_e8 = &unknown_var_3432_ptr;
    puStack_e0 = auStack_d0;
    auStack_d0[0] = 0;
    uStack_d8 = 0x16;
    puVar8 = (int32_t *)&system_buffer_ptr;
    if (puVar6 != (int32_t *)0x0) {
      puVar8 = puVar6;
    }
    strcpy_s(auStack_d0,0x80,puVar8);
    FUN_1800db370(&puStack_e8,param_1 + 7,&uStack_118);
    puStack_e8 = &system_state_ptr;
    puStack_148 = &system_data_buffer_ptr;
    if (puVar6 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar6);
    }
  }
  else {
    puStack_148 = &system_data_buffer_ptr;
    uStack_130 = 0;
    puStack_140 = (int32_t *)0x0;
    uStack_138 = 0;
    puVar6 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x1c,0x13);
    *(int8_t *)puVar6 = 0;
    puStack_140 = puVar6;
    uVar3 = FUN_18064e990(puVar6);
    *puVar6 = 0x566c6772;
    puVar6[1] = 0x3a776569;
    puVar6[2] = 0x7065643a;
    puVar6[3] = 0x625f6874;
    *(uint64_t *)(puVar6 + 4) = 0x75615f7265666675;
    puVar6[6] = 0x5f6f74;
    uStack_138 = 0x1b;
    iVar4 = *(int *)(param_2 + 0x3530);
    uStack_130._0_4_ = uVar3;
    if (0 < iVar4) {
      if ((iVar4 != -0x1b) && (uVar3 < iVar4 + 0x1cU)) {
        uStack_158 = 0x13;
        puVar6 = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar6,iVar4 + 0x1cU,0x10);
        puStack_140 = puVar6;
        uStack_130._0_4_ = FUN_18064e990(puVar6);
        iVar4 = *(int *)(param_2 + 0x3530);
      }
                    // WARNING: Subroutine does not return
      memcpy((int8_t *)((int64_t)puVar6 + 0x1b),*(uint64_t *)(param_2 + 0x3528),
             (int64_t)(iVar4 + 1));
    }
    uStack_110 = 1;
    uStack_104 = 0x1018a;
    uStack_108 = 0;
    uStack_118 = (int32_t)(int64_t)*(float *)(param_1 + 9);
    uStack_114 = (int32_t)(int64_t)*(float *)((int64_t)param_1 + 0x4c);
    uStack_10c = 0x2f;
    uStack_100 = *(int32_t *)(param_2 + 0x1bd4);
    puStack_e8 = &unknown_var_3432_ptr;
    puStack_e0 = auStack_d0;
    auStack_d0[0] = 0;
    uStack_d8 = 0x1b;
    puVar8 = (int32_t *)&system_buffer_ptr;
    if (puVar6 != (int32_t *)0x0) {
      puVar8 = puVar6;
    }
    uVar9 = strcpy_s(auStack_d0,0x80,puVar8);
    plVar7 = (int64_t *)FUN_1800b1d80(uVar9,&uStack_128,&puStack_e8,&uStack_118);
    lVar1 = *plVar7;
    *plVar7 = 0;
    plStack_120 = (int64_t *)param_1[7];
    param_1[7] = lVar1;
    if (plStack_120 != (int64_t *)0x0) {
      (**(code **)(*plStack_120 + 0x38))();
    }
    if ((int64_t *)CONCAT44(uStack_124,uStack_128) != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)CONCAT44(uStack_124,uStack_128) + 0x38))();
    }
    puStack_e8 = &system_state_ptr;
    puStack_148 = &system_data_buffer_ptr;
    if (puVar6 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar6);
    }
  }
  uStack_130 = (uint64_t)uStack_130._4_4_ << 0x20;
  puStack_e8 = &system_state_ptr;
  puStack_140 = (int32_t *)0x0;
  puStack_148 = &system_state_ptr;
  plStack_120 = plVar5;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  plStack_120 = *(int64_t **)(param_2 + 0x9690);
  *(int64_t **)(param_2 + 0x9690) = plVar5;
  if (plStack_120 != (int64_t *)0x0) {
    (**(code **)(*plStack_120 + 0x38))();
  }
  plVar5 = (int64_t *)param_1[7];
  if (plVar5 != (int64_t *)0x0) {
    plStack_120 = plVar5;
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plStack_120 = *(int64_t **)(param_2 + 0x96a8);
  *(int64_t **)(param_2 + 0x96a8) = plVar5;
  if (plStack_120 != (int64_t *)0x0) {
    (**(code **)(*plStack_120 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_178);
}



uint64_t *
FUN_180244d90(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,7,param_3,param_4,0,0xfffffffffffffffe);
  *(uint64_t *)param_2[1] = 0x776569566c6772;
  *(int32_t *)(param_2 + 2) = 7;
  return param_2;
}






// 函数: void FUN_180244e10(int64_t *param_1)
void FUN_180244e10(int64_t *param_1)

{
  int64_t lVar1;
  void *puVar2;
  
  lVar1 = (**(code **)(*param_1 + 0xd8))();
  if ((lVar1 != 0) && (*(char *)((int64_t)param_1 + 0xe9) != '\0')) {
    *(int64_t **)(lVar1 + 0x9650) = param_1;
    if (*(code **)(lVar1 + 0x9620) != (code *)0x0) {
      (**(code **)(lVar1 + 0x9620))(lVar1 + 0x9610,0,0);
    }
    *(void **)(lVar1 + 0x9620) = &unknown_var_7024_ptr;
    *(void **)(lVar1 + 0x9628) = &unknown_var_7008_ptr;
    *(code **)(lVar1 + 0x9610) = FUN_1802436f0;
    puVar2 = &system_buffer_ptr;
    if ((void *)param_1[0x16] != (void *)0x0) {
      puVar2 = (void *)param_1[0x16];
    }
    (**(code **)(*(int64_t *)(lVar1 + 0x95c8) + 0x10))((int64_t *)(lVar1 + 0x95c8),puVar2);
    puVar2 = &system_buffer_ptr;
    if ((void *)param_1[0x12] != (void *)0x0) {
      puVar2 = (void *)param_1[0x12];
    }
    (**(code **)(*(int64_t *)(lVar1 + 0x95e8) + 0x10))((int64_t *)(lVar1 + 0x95e8),puVar2);
    *(int *)(lVar1 + 0x9608) = (int)param_1[0x19];
    *(int8_t *)((int64_t)param_1 + 0xe9) = 0;
  }
  return;
}






