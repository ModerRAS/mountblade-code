#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part139.c - 8 个函数

// 函数: void FUN_18034ef70(uint64_t *param_1)
void FUN_18034ef70(uint64_t *param_1)

{
  int64_t *plVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  void *puStack_98;
  uint64_t *puStack_90;
  int32_t uStack_88;
  uint64_t uStack_80;
  
  uVar4 = 0xfffffffffffffffe;
  puVar3 = param_1;
  FUN_1803456e0();
  *puVar3 = &unknown_var_9296_ptr;
  plVar1 = puVar3 + 0xe;
  *plVar1 = (int64_t)&system_state_ptr;
  puVar3[0xf] = 0;
  *(int32_t *)(puVar3 + 0x10) = 0;
  *plVar1 = (int64_t)&system_data_buffer_ptr;
  puVar3[0x11] = 0;
  puVar3[0xf] = 0;
  *(int32_t *)(puVar3 + 0x10) = 0;
  puVar3[0x12] = 0;
  plVar5 = plVar1;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr);
  puStack_98 = &system_data_buffer_ptr;
  uStack_80 = 0;
  puStack_90 = (uint64_t *)0x0;
  uStack_88 = 0;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_90 = puVar3;
  uVar2 = CoreEngineSystemCleanup(puVar3);
  uStack_80 = CONCAT44(uStack_80._4_4_,uVar2);
  *puVar3 = 0x6d614e2068746150;
  *(int16_t *)(puVar3 + 1) = 0x65;
  uStack_88 = 9;
  FUN_1803460a0(param_1,&puStack_98,plVar1,0,uVar4,plVar5);
  puStack_98 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}



uint64_t * FUN_18034f1f0(uint64_t *param_1,uint64_t param_2)

{
  int64_t *plVar1;
  
  *param_1 = &unknown_var_9296_ptr;
  plVar1 = (int64_t *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if ((int64_t *)param_1[0x12] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x12] + 0x38))();
  }
  param_1[0xe] = &system_data_buffer_ptr;
  if (param_1[0xf] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x11) = 0;
  param_1[0xe] = &system_state_ptr;
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xa0);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034f2c0(int64_t param_1)
void FUN_18034f2c0(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int32_t uVar3;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  int8_t auVar7 [16];
  float fVar8;
  float fVar9;
  int32_t unaff_XMM6_Da;
  float fVar10;
  int32_t unaff_XMM6_Db;
  float fVar11;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int32_t uStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  int32_t uStack_10c;
  int32_t uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  int32_t uStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int32_t uStack_ac;
  uint64_t uStack_40;
  uint64_t uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  if ((*(int64_t *)(param_1 + 0x90) != 0) && (*(int *)(*(int64_t *)(param_1 + 0x90) + 8) == 1)) {
    plVar1 = *(int64_t **)(param_1 + 0x90);
    *(uint64_t *)(param_1 + 0x90) = 0;
    if (plVar1 != (int64_t *)0x0) {
      uStack_40 = 0x18034f30b;
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  lVar4 = render_system_data_memory;
  if (*(int64_t *)(param_1 + 0x90) != 0) {
    lVar2 = *(int64_t *)(param_1 + 0x18);
    uStack_148 = *(uint64_t *)(lVar2 + 0x70);
    uStack_140 = *(uint64_t *)(lVar2 + 0x78);
    uStack_138 = *(uint64_t *)(lVar2 + 0x80);
    uStack_130 = *(uint64_t *)(lVar2 + 0x88);
    fVar16 = *(float *)(lVar2 + 0x90);
    fVar12 = *(float *)(lVar2 + 0x94);
    fVar13 = *(float *)(lVar2 + 0x98);
    uVar3 = *(int32_t *)(lVar2 + 0x9c);
    fStack_128 = fVar16;
    fStack_124 = fVar12;
    fStack_120 = fVar13;
    uStack_11c = uVar3;
    FUN_1804664b0(*(int64_t *)(param_1 + 0x90),&uStack_e8,render_system_data_memory + 0x1b8);
    fStack_118 = fStack_b8;
    fStack_114 = fStack_b4;
    fStack_110 = fStack_b0;
    uStack_10c = uStack_ac;
    if (*(char *)(param_1 + 0x98) != '\0') {
      uStack_18 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
      uStack_40 = CONCAT44(unaff_XMM9_Dd,unaff_XMM9_Dc);
      FUN_180085020(&uStack_148,&fStack_f8);
      fVar11 = fStack_b8 - *(float *)(lVar4 + 0x1b8);
      fVar10 = fStack_b4 - *(float *)(lVar4 + 0x1bc);
      fVar9 = fStack_b0 - *(float *)(lVar4 + 0x1c0);
      fVar5 = fVar10 * fVar10 + fVar11 * fVar11 + fVar9 * fVar9;
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar8 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
      fVar5 = fVar12 * fVar12 + fVar16 * fVar16 + fVar13 * fVar13;
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar5 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
      fVar13 = fVar13 * fVar5;
      fVar16 = fVar16 * fVar5;
      fVar12 = fVar12 * fVar5;
      fVar15 = fVar12 * fVar9 * fVar8 - fVar13 * fVar10 * fVar8;
      fVar14 = fVar13 * fVar11 * fVar8 - fVar16 * fVar9 * fVar8;
      uStack_fc = 0x7f7fffff;
      fVar11 = fVar16 * fVar10 * fVar8 - fVar12 * fVar11 * fVar8;
      fVar5 = fVar15 * fVar15 + fVar14 * fVar14 + fVar11 * fVar11;
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar5 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
      fVar14 = fVar14 * fVar5;
      fVar11 = fVar11 * fVar5;
      fVar15 = fVar15 * fVar5;
      fVar10 = fVar13 * fVar14 - fVar12 * fVar11;
      fVar9 = fVar11 * fVar16 - fVar13 * fVar15;
      fVar8 = fVar12 * fVar15 - fVar14 * fVar16;
      fVar5 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8;
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar5 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
      uStack_148 = CONCAT44(fStack_f8 * fVar14,fStack_f8 * fVar15);
      uStack_130 = CONCAT44(0x7f7fffff,fVar8 * fVar5 * fStack_f4);
      uStack_140 = CONCAT44(0x7f7fffff,fStack_f8 * fVar11);
      uStack_138 = CONCAT44(fVar9 * fVar5 * fStack_f4,fStack_f4 * fVar10 * fVar5);
      fStack_128 = fStack_f0 * fVar16;
      fStack_124 = fVar12 * fStack_f0;
      fStack_120 = fVar13 * fStack_f0;
      uStack_11c = uVar3;
    }
    if (*(char *)(param_1 + 0x99) != '\0') {
      uStack_148 = uStack_e8;
      uStack_140 = uStack_e0;
      fStack_128 = fStack_c8;
      fStack_124 = fStack_c4;
      fStack_120 = fStack_c0;
      uStack_11c = uStack_bc;
      uStack_138 = uStack_d8;
      uStack_130 = uStack_d0;
      fStack_118 = fStack_b8;
      fStack_114 = fStack_b4;
      fStack_110 = fStack_b0;
      uStack_10c = uStack_ac;
    }
    FUN_1802ea790(*(uint64_t *)(param_1 + 0x18),&uStack_148);
  }
  return;
}





// 函数: void FUN_18034f320(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18034f320(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int64_t *aplStackX_10 [3];
  
  puVar3 = (uint64_t *)
           FUN_180389090(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x2970,aplStackX_10,
                         param_1 + 0x70,param_4,0xfffffffffffffffe);
  uVar1 = *puVar3;
  *puVar3 = 0;
  plVar2 = *(int64_t **)(param_1 + 0x90);
  *(uint64_t *)(param_1 + 0x90) = uVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  if (aplStackX_10[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034f3a0(uint64_t param_1)
void FUN_18034f3a0(uint64_t param_1)

{
  int8_t auStack_1e8 [32];
  int32_t uStack_1c8;
  void **appuStack_1c0 [2];
  uint64_t uStack_1b0;
  void *apuStack_1a8 [11];
  int32_t uStack_150;
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [72];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uStack_1b0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1e8;
  uStack_1c8 = 0;
  puStack_148 = &unknown_var_3480_ptr;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 9;
  strcpy_s(auStack_130,0x40,&system_data_d578);
  FUN_1800b8300(apuStack_1a8,&puStack_148);
  uStack_150 = 0;
  uStack_1c8 = 1;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &system_state_ptr;
  puStack_148 = &system_state_ptr;
  puStack_e8 = &unknown_var_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x10;
  strcpy_s(auStack_d0,0x40,&system_data_dec0);
  FUN_1800b8300(apuStack_1a8,&puStack_e8);
  uStack_150 = 3;
  uStack_1c8 = 2;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &system_state_ptr;
  puStack_e8 = &system_state_ptr;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0xb;
  strcpy_s(auStack_70,0x40,&system_data_deb0);
  FUN_1800b8300(apuStack_1a8,&puStack_88);
  uStack_150 = 3;
  uStack_1c8 = 4;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &system_state_ptr;
  puStack_88 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_1e8);
}





// 函数: void FUN_18034f5c0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18034f5c0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int iVar3;
  uint64_t *puVar4;
  int64_t *aplStackX_18 [2];
  
  if (*(int *)(param_2 + 0x10) == 9) {
    iVar3 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_d578,param_3,param_4,0xfffffffffffffffe);
    if (iVar3 == 0) {
      puVar4 = (uint64_t *)
               FUN_180389090(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x2970,
                             aplStackX_18,param_1 + 0x70);
      uVar1 = *puVar4;
      *puVar4 = 0;
      plVar2 = *(int64_t **)(param_1 + 0x90);
      *(uint64_t *)(param_1 + 0x90) = uVar1;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      if (aplStackX_18[0] != (int64_t *)0x0) {
        (**(code **)(*aplStackX_18[0] + 0x38))();
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034f660(int64_t param_1)
void FUN_18034f660(int64_t param_1)

{
  int64_t lVar1;
  int32_t uVar2;
  int64_t lVar3;
  float fVar4;
  float fVar5;
  int8_t auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int32_t uStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  int32_t uStack_10c;
  int32_t uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  int32_t uStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int32_t uStack_ac;
  
  lVar3 = render_system_data_memory;
  if (*(int64_t *)(param_1 + 0x90) != 0) {
    lVar1 = *(int64_t *)(param_1 + 0x18);
    uStack_148 = *(uint64_t *)(lVar1 + 0x70);
    uStack_140 = *(uint64_t *)(lVar1 + 0x78);
    uStack_138 = *(uint64_t *)(lVar1 + 0x80);
    uStack_130 = *(uint64_t *)(lVar1 + 0x88);
    fVar15 = *(float *)(lVar1 + 0x90);
    fVar11 = *(float *)(lVar1 + 0x94);
    fVar12 = *(float *)(lVar1 + 0x98);
    uVar2 = *(int32_t *)(lVar1 + 0x9c);
    fStack_128 = fVar15;
    fStack_124 = fVar11;
    fStack_120 = fVar12;
    uStack_11c = uVar2;
    FUN_1804664b0(*(int64_t *)(param_1 + 0x90),&uStack_e8,render_system_data_memory + 0x1b8);
    fStack_118 = fStack_b8;
    fStack_114 = fStack_b4;
    fStack_110 = fStack_b0;
    uStack_10c = uStack_ac;
    if (*(char *)(param_1 + 0x98) != '\0') {
      FUN_180085020(&uStack_148,&fStack_f8);
      fVar10 = fStack_b8 - *(float *)(lVar3 + 0x1b8);
      fVar9 = fStack_b4 - *(float *)(lVar3 + 0x1bc);
      fVar8 = fStack_b0 - *(float *)(lVar3 + 0x1c0);
      fVar4 = fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8;
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      fVar7 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
      fVar4 = fVar11 * fVar11 + fVar15 * fVar15 + fVar12 * fVar12;
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
      fVar12 = fVar12 * fVar4;
      fVar15 = fVar15 * fVar4;
      fVar11 = fVar11 * fVar4;
      fVar14 = fVar11 * fVar8 * fVar7 - fVar12 * fVar9 * fVar7;
      fVar13 = fVar12 * fVar10 * fVar7 - fVar15 * fVar8 * fVar7;
      uStack_fc = 0x7f7fffff;
      fVar10 = fVar15 * fVar9 * fVar7 - fVar11 * fVar10 * fVar7;
      fVar4 = fVar14 * fVar14 + fVar13 * fVar13 + fVar10 * fVar10;
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
      fVar13 = fVar13 * fVar4;
      fVar10 = fVar10 * fVar4;
      fVar14 = fVar14 * fVar4;
      fVar9 = fVar12 * fVar13 - fVar11 * fVar10;
      fVar8 = fVar10 * fVar15 - fVar12 * fVar14;
      fVar7 = fVar11 * fVar14 - fVar13 * fVar15;
      fVar4 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7;
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
      uStack_148 = CONCAT44(fStack_f8 * fVar13,fStack_f8 * fVar14);
      uStack_130 = CONCAT44(0x7f7fffff,fVar7 * fVar4 * fStack_f4);
      uStack_140 = CONCAT44(0x7f7fffff,fStack_f8 * fVar10);
      uStack_138 = CONCAT44(fVar8 * fVar4 * fStack_f4,fStack_f4 * fVar9 * fVar4);
      fStack_128 = fStack_f0 * fVar15;
      fStack_124 = fVar11 * fStack_f0;
      fStack_120 = fVar12 * fStack_f0;
      uStack_11c = uVar2;
    }
    if (*(char *)(param_1 + 0x99) != '\0') {
      uStack_148 = uStack_e8;
      uStack_140 = uStack_e0;
      fStack_128 = fStack_c8;
      fStack_124 = fStack_c4;
      fStack_120 = fStack_c0;
      uStack_11c = uStack_bc;
      uStack_138 = uStack_d8;
      uStack_130 = uStack_d0;
      fStack_118 = fStack_b8;
      fStack_114 = fStack_b4;
      fStack_110 = fStack_b0;
      uStack_10c = uStack_ac;
    }
    FUN_1802ea790(*(uint64_t *)(param_1 + 0x18),&uStack_148);
  }
  return;
}





// 函数: void FUN_18034f69c(void)
void FUN_18034f69c(void)

{
  int32_t uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int32_t uVar5;
  int64_t in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  float fVar6;
  float fVar7;
  int8_t auVar8 [16];
  float fVar9;
  float fVar10;
  int32_t unaff_XMM6_Da;
  float fVar11;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM7_Da;
  float fVar12;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM9_Da;
  float fVar13;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM10_Da;
  float fVar14;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM11_Da;
  float fVar15;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM12_Da;
  float fVar16;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM13_Da;
  float fVar17;
  int32_t unaff_XMM13_Dc;
  float fVar18;
  uint64_t uStack0000000000000030;
  uint64_t uStack0000000000000038;
  uint64_t uStack0000000000000040;
  uint64_t uStack0000000000000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  int32_t uStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  int32_t uStack000000000000006c;
  uint64_t in_stack_00000078;
  int32_t in_stack_000000f0;
  int32_t in_stack_000000f8;
  int32_t in_stack_00000100;
  int32_t in_stack_00000108;
  int32_t in_stack_00000110;
  int32_t in_stack_00000118;
  int32_t in_stack_00000120;
  int32_t in_stack_00000128;
  int32_t in_stack_00000130;
  int32_t in_stack_00000138;
  int32_t in_stack_00000140;
  int32_t in_stack_00000148;
  int32_t in_stack_00000150;
  int32_t in_stack_00000158;
  int32_t in_stack_00000160;
  int32_t in_stack_00000168;
  
  uStack0000000000000030 = *(uint64_t *)(in_RAX + 0x70);
  uStack0000000000000038 = *(uint64_t *)(in_RAX + 0x78);
  uStack0000000000000040 = *(uint64_t *)(in_RAX + 0x80);
  uStack0000000000000048 = *(uint64_t *)(in_RAX + 0x88);
  fVar18 = *(float *)(in_RAX + 0x90);
  fVar14 = *(float *)(in_RAX + 0x94);
  fVar15 = *(float *)(in_RAX + 0x98);
  uVar1 = *(int32_t *)(in_RAX + 0x9c);
  fStack0000000000000050 = fVar18;
  fStack0000000000000054 = fVar14;
  fStack0000000000000058 = fVar15;
  uStack000000000000005c = uVar1;
  FUN_1804664b0(*(int32_t *)(in_RAX + 0x70),unaff_RBP + -0x70);
  fVar2 = *(float *)(unaff_RBP + -0x40);
  fVar3 = *(float *)(unaff_RBP + -0x3c);
  fVar4 = *(float *)(unaff_RBP + -0x38);
  uVar5 = *(int32_t *)(unaff_RBP + -0x34);
  in_stack_00000060 = fVar2;
  fStack0000000000000064 = fVar3;
  in_stack_00000068 = fVar4;
  uStack000000000000006c = uVar5;
  if (*(char *)(unaff_RBX + 0x98) != '\0') {
    in_stack_000000f0 = unaff_XMM13_Da;
    in_stack_000000f8 = unaff_XMM13_Dc;
    in_stack_00000100 = unaff_XMM12_Da;
    in_stack_00000108 = unaff_XMM12_Dc;
    in_stack_00000110 = unaff_XMM11_Da;
    in_stack_00000118 = unaff_XMM11_Dc;
    in_stack_00000120 = unaff_XMM10_Da;
    in_stack_00000128 = unaff_XMM10_Dc;
    in_stack_00000130 = unaff_XMM9_Da;
    in_stack_00000138 = unaff_XMM9_Dc;
    in_stack_00000140 = unaff_XMM8_Da;
    in_stack_00000148 = unaff_XMM8_Dc;
    in_stack_00000150 = unaff_XMM7_Da;
    in_stack_00000158 = unaff_XMM7_Dc;
    in_stack_00000160 = unaff_XMM6_Da;
    in_stack_00000168 = unaff_XMM6_Dc;
    FUN_180085020(&stack0x00000030,unaff_RBP + -0x80);
    fVar12 = fVar2 - *(float *)(unaff_RDI + 0x1b8);
    fVar11 = fVar3 - *(float *)(unaff_RDI + 0x1bc);
    fVar10 = fVar4 - *(float *)(unaff_RDI + 0x1c0);
    fVar6 = fVar11 * fVar11 + fVar12 * fVar12 + fVar10 * fVar10;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar9 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar6 = fVar14 * fVar14 + fVar18 * fVar18 + fVar15 * fVar15;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar15 = fVar15 * fVar6;
    fVar18 = fVar18 * fVar6;
    fVar14 = fVar14 * fVar6;
    fVar17 = fVar14 * fVar10 * fVar9 - fVar15 * fVar11 * fVar9;
    fVar16 = fVar15 * fVar12 * fVar9 - fVar18 * fVar10 * fVar9;
    in_stack_00000078._4_4_ = 0x7f7fffff;
    fVar13 = fVar18 * fVar11 * fVar9 - fVar14 * fVar12 * fVar9;
    fVar6 = fVar17 * fVar17 + fVar16 * fVar16 + fVar13 * fVar13;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar16 = fVar16 * fVar6;
    fVar13 = fVar13 * fVar6;
    fVar17 = fVar17 * fVar6;
    fVar12 = fVar15 * fVar16 - fVar14 * fVar13;
    fVar11 = fVar13 * fVar18 - fVar15 * fVar17;
    fVar10 = fVar14 * fVar17 - fVar16 * fVar18;
    fVar6 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar9 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar6 = *(float *)(unaff_RBP + -0x80);
    fVar7 = *(float *)(unaff_RBP + -0x7c);
    uStack0000000000000030 = CONCAT44(fVar6 * fVar16,fVar6 * fVar17);
    uStack0000000000000048 = CONCAT44(0x7f7fffff,fVar10 * fVar9 * fVar7);
    uStack0000000000000038 = CONCAT44(0x7f7fffff,fVar6 * fVar13);
    fStack0000000000000058 = *(float *)(unaff_RBP + -0x78);
    uStack0000000000000040 = CONCAT44(fVar11 * fVar9 * fVar7,fVar7 * fVar12 * fVar9);
    fStack0000000000000050 = fStack0000000000000058 * fVar18;
    fStack0000000000000054 = fVar14 * fStack0000000000000058;
    fStack0000000000000058 = fVar15 * fStack0000000000000058;
    uStack000000000000005c = uVar1;
  }
  if (*(char *)(unaff_RBX + 0x99) != '\0') {
    uStack0000000000000030 = *(uint64_t *)(unaff_RBP + -0x70);
    uStack0000000000000038 = *(uint64_t *)(unaff_RBP + -0x68);
    uStack0000000000000040 = *(uint64_t *)(unaff_RBP + -0x60);
    uStack0000000000000048 = *(uint64_t *)(unaff_RBP + -0x58);
    fStack0000000000000050 = *(float *)(unaff_RBP + -0x50);
    fStack0000000000000054 = *(float *)(unaff_RBP + -0x4c);
    fStack0000000000000058 = *(float *)(unaff_RBP + -0x48);
    uStack000000000000005c = *(int32_t *)(unaff_RBP + -0x44);
    in_stack_00000060 = fVar2;
    fStack0000000000000064 = fVar3;
    in_stack_00000068 = fVar4;
    uStack000000000000006c = uVar5;
  }
  FUN_1802ea790(*(uint64_t *)(unaff_RBX + 0x18),&stack0x00000030);
  return;
}





// 函数: void FUN_18034f6a9(void)
void FUN_18034f6a9(void)

{
  int32_t uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int32_t uVar5;
  int64_t in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  float fVar6;
  float fVar7;
  int8_t auVar8 [16];
  float fVar9;
  float fVar10;
  int32_t unaff_XMM6_Da;
  float fVar11;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM7_Da;
  float fVar12;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM9_Da;
  float fVar13;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM10_Da;
  float fVar14;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM11_Da;
  float fVar15;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM12_Da;
  float fVar16;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM13_Da;
  float fVar17;
  int32_t unaff_XMM13_Dc;
  float fVar18;
  uint64_t uStack0000000000000030;
  uint64_t uStack0000000000000038;
  uint64_t uStack0000000000000040;
  uint64_t uStack0000000000000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  int32_t uStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  int32_t uStack000000000000006c;
  uint64_t in_stack_00000078;
  int32_t in_stack_000000f0;
  int32_t in_stack_000000f8;
  int32_t in_stack_00000100;
  int32_t in_stack_00000108;
  int32_t in_stack_00000110;
  int32_t in_stack_00000118;
  int32_t in_stack_00000120;
  int32_t in_stack_00000128;
  int32_t in_stack_00000130;
  int32_t in_stack_00000138;
  int32_t in_stack_00000140;
  int32_t in_stack_00000148;
  int32_t in_stack_00000150;
  int32_t in_stack_00000158;
  int32_t in_stack_00000160;
  int32_t in_stack_00000168;
  
  uStack0000000000000030 = *(uint64_t *)(in_RAX + 0x70);
  uStack0000000000000038 = *(uint64_t *)(in_RAX + 0x78);
  uStack0000000000000040 = *(uint64_t *)(in_RAX + 0x80);
  uStack0000000000000048 = *(uint64_t *)(in_RAX + 0x88);
  fVar18 = *(float *)(in_RAX + 0x90);
  fVar14 = *(float *)(in_RAX + 0x94);
  fVar15 = *(float *)(in_RAX + 0x98);
  uVar1 = *(int32_t *)(in_RAX + 0x9c);
  fStack0000000000000050 = fVar18;
  fStack0000000000000054 = fVar14;
  fStack0000000000000058 = fVar15;
  uStack000000000000005c = uVar1;
  FUN_1804664b0();
  fVar2 = *(float *)(unaff_RBP + -0x40);
  fVar3 = *(float *)(unaff_RBP + -0x3c);
  fVar4 = *(float *)(unaff_RBP + -0x38);
  uVar5 = *(int32_t *)(unaff_RBP + -0x34);
  in_stack_00000060 = fVar2;
  fStack0000000000000064 = fVar3;
  in_stack_00000068 = fVar4;
  uStack000000000000006c = uVar5;
  if (*(char *)(unaff_RBX + 0x98) != '\0') {
    in_stack_000000f0 = unaff_XMM13_Da;
    in_stack_000000f8 = unaff_XMM13_Dc;
    in_stack_00000100 = unaff_XMM12_Da;
    in_stack_00000108 = unaff_XMM12_Dc;
    in_stack_00000110 = unaff_XMM11_Da;
    in_stack_00000118 = unaff_XMM11_Dc;
    in_stack_00000120 = unaff_XMM10_Da;
    in_stack_00000128 = unaff_XMM10_Dc;
    in_stack_00000130 = unaff_XMM9_Da;
    in_stack_00000138 = unaff_XMM9_Dc;
    in_stack_00000140 = unaff_XMM8_Da;
    in_stack_00000148 = unaff_XMM8_Dc;
    in_stack_00000150 = unaff_XMM7_Da;
    in_stack_00000158 = unaff_XMM7_Dc;
    in_stack_00000160 = unaff_XMM6_Da;
    in_stack_00000168 = unaff_XMM6_Dc;
    FUN_180085020(&stack0x00000030,unaff_RBP + -0x80);
    fVar12 = fVar2 - *(float *)(unaff_RDI + 0x1b8);
    fVar11 = fVar3 - *(float *)(unaff_RDI + 0x1bc);
    fVar10 = fVar4 - *(float *)(unaff_RDI + 0x1c0);
    fVar6 = fVar11 * fVar11 + fVar12 * fVar12 + fVar10 * fVar10;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar9 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar6 = fVar14 * fVar14 + fVar18 * fVar18 + fVar15 * fVar15;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar15 = fVar15 * fVar6;
    fVar18 = fVar18 * fVar6;
    fVar14 = fVar14 * fVar6;
    fVar17 = fVar14 * fVar10 * fVar9 - fVar15 * fVar11 * fVar9;
    fVar16 = fVar15 * fVar12 * fVar9 - fVar18 * fVar10 * fVar9;
    in_stack_00000078._4_4_ = 0x7f7fffff;
    fVar13 = fVar18 * fVar11 * fVar9 - fVar14 * fVar12 * fVar9;
    fVar6 = fVar17 * fVar17 + fVar16 * fVar16 + fVar13 * fVar13;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar16 = fVar16 * fVar6;
    fVar13 = fVar13 * fVar6;
    fVar17 = fVar17 * fVar6;
    fVar12 = fVar15 * fVar16 - fVar14 * fVar13;
    fVar11 = fVar13 * fVar18 - fVar15 * fVar17;
    fVar10 = fVar14 * fVar17 - fVar16 * fVar18;
    fVar6 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar9 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar6 = *(float *)(unaff_RBP + -0x80);
    fVar7 = *(float *)(unaff_RBP + -0x7c);
    uStack0000000000000030 = CONCAT44(fVar6 * fVar16,fVar6 * fVar17);
    uStack0000000000000048 = CONCAT44(0x7f7fffff,fVar10 * fVar9 * fVar7);
    uStack0000000000000038 = CONCAT44(0x7f7fffff,fVar6 * fVar13);
    fStack0000000000000058 = *(float *)(unaff_RBP + -0x78);
    uStack0000000000000040 = CONCAT44(fVar11 * fVar9 * fVar7,fVar7 * fVar12 * fVar9);
    fStack0000000000000050 = fStack0000000000000058 * fVar18;
    fStack0000000000000054 = fVar14 * fStack0000000000000058;
    fStack0000000000000058 = fVar15 * fStack0000000000000058;
    uStack000000000000005c = uVar1;
  }
  if (*(char *)(unaff_RBX + 0x99) != '\0') {
    uStack0000000000000030 = *(uint64_t *)(unaff_RBP + -0x70);
    uStack0000000000000038 = *(uint64_t *)(unaff_RBP + -0x68);
    uStack0000000000000040 = *(uint64_t *)(unaff_RBP + -0x60);
    uStack0000000000000048 = *(uint64_t *)(unaff_RBP + -0x58);
    fStack0000000000000050 = *(float *)(unaff_RBP + -0x50);
    fStack0000000000000054 = *(float *)(unaff_RBP + -0x4c);
    fStack0000000000000058 = *(float *)(unaff_RBP + -0x48);
    uStack000000000000005c = *(int32_t *)(unaff_RBP + -0x44);
    in_stack_00000060 = fVar2;
    fStack0000000000000064 = fVar3;
    in_stack_00000068 = fVar4;
    uStack000000000000006c = uVar5;
  }
  FUN_1802ea790(*(uint64_t *)(unaff_RBX + 0x18),&stack0x00000030);
  return;
}





