#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part032.c - 4 个函数

// 函数: void FUN_1800bf9e0(uint64_t param_1,uint64_t *param_2)
void FUN_1800bf9e0(uint64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  int64_t lVar14;
  uint64_t *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int8_t auStack_158 [32];
  uint64_t *puStack_138;
  uint64_t uStack_128;
  uint64_t uStack_120;
  float fStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  int32_t uStack_dc;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t *puStack_c0;
  int64_t lStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  int64_t alStack_a0 [15];
  
  lVar2 = system_system_data_memory;
  uStack_c8 = 0xfffffffffffffffe;
  alStack_a0[2] = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  uStack_110 = 0;
  lVar1 = system_system_data_memory + 0x418;
  puStack_c0 = param_2;
  lStack_b8 = lVar1;
  iVar6 = _Mtx_lock(lVar1);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  plVar12 = *(int64_t **)(lVar2 + 0x340);
  if (plVar12 == (int64_t *)0x0) {
    uStack_108 = 0x3f800000;
    uStack_100 = 0;
    uStack_f8 = 0x3f80000000000000;
    uStack_f0 = 0;
    fStack_e8 = 0.0;
    fStack_e4 = 0.0;
    fStack_e0 = 1.0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_d0 = 0x3f80000000000000;
    puVar15 = &uStack_b0;
    lVar14 = 4;
    do {
      func_0x00018005d390(puVar15);
      puVar15 = puVar15 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    uStack_b0 = 0x3f8000003f800000;
    uStack_a8 = 0x3f80000000000000;
    uStack_128 = 0x3f800000;
    alStack_a0[1] = 0x3f800000;
    alStack_a0[0] = lVar14;
    uVar11 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x300,0x10,3);
    plVar12 = (int64_t *)FUN_180075030(uVar11,1);
    if (plVar12 != (int64_t *)0x0) {
      uStack_120 = plVar12;
      (**(code **)(*plVar12 + 0x28))(plVar12);
    }
    uStack_120 = *(int64_t **)(lVar2 + 0x340);
    *(int64_t **)(lVar2 + 0x340) = plVar12;
    if (uStack_120 != (int64_t *)0x0) {
      (**(code **)(*uStack_120 + 0x38))();
    }
    plVar12 = (int64_t *)(*(int64_t *)(lVar2 + 0x340) + 0x10);
    (**(code **)(*plVar12 + 0x10))(plVar12,&unknown_var_528_ptr);
    lVar14 = *(int64_t *)(lVar2 + 0x340);
    if (*(char *)(lVar14 + 0xfa) != '\x01') {
      *(int8_t *)(lVar14 + 0xfa) = 1;
      FUN_180079520();
      lVar14 = *(int64_t *)(lVar2 + 0x340);
    }
    if (*(char *)(lVar14 + 0xfb) != '\x01') {
      *(int8_t *)(lVar14 + 0xfb) = 1;
      FUN_180079520();
      lVar14 = *(int64_t *)(lVar2 + 0x340);
    }
    FUN_180076a20(lVar14);
    fVar17 = fStack_e0;
    fVar18 = fStack_e4;
    fVar16 = fStack_e8;
    fVar5 = (float)uStack_100;
    fStack_118 = (float)uStack_100 + fStack_e0;
    fVar4 = uStack_108._4_4_;
    fVar3 = (float)uStack_108;
    uStack_120 = (int64_t *)CONCAT44(uStack_108._4_4_ + fStack_e4,(float)uStack_108 + fStack_e8);
    uStack_114 = 0x7f7fffff;
    uVar7 = FUN_1800c11a0(*(uint64_t *)(lVar2 + 0x340),&uStack_120);
    fStack_118 = fVar17 - fVar5;
    uStack_120 = (int64_t *)CONCAT44(fVar18 - fVar4,fVar16 - fVar3);
    uStack_114 = 0x7f7fffff;
    uVar8 = FUN_1800c11a0(*(uint64_t *)(lVar2 + 0x340),&uStack_120);
    fVar17 = -fVar17;
    fVar18 = -fVar18;
    fVar16 = -fVar16;
    fStack_118 = fVar17 - fVar5;
    uStack_120 = (int64_t *)CONCAT44(fVar18 - fVar4,fVar16 - fVar3);
    uStack_114 = 0x7f7fffff;
    uVar9 = FUN_1800c11a0(*(uint64_t *)(lVar2 + 0x340),&uStack_120);
    fStack_118 = fVar5 + fVar17;
    uStack_120 = (int64_t *)CONCAT44(fVar4 + fVar18,fVar3 + fVar16);
    uStack_114 = 0x7f7fffff;
    uVar10 = FUN_1800c11a0(*(uint64_t *)(lVar2 + 0x340),&uStack_120);
    uStack_128._0_4_ = 0xffffffff;
    puStack_138 = &uStack_f8;
    uVar7 = FUN_1800c1040(*(uint64_t *)(lVar2 + 0x340),uVar7,&uStack_b0,&uStack_128);
    uStack_128._0_4_ = 0xffffffff;
    puStack_138 = &uStack_f8;
    uVar8 = FUN_1800c1040(*(uint64_t *)(lVar2 + 0x340),uVar8,&uStack_a8,&uStack_128);
    uStack_128._0_4_ = 0xffffffff;
    puStack_138 = &uStack_f8;
    uVar9 = FUN_1800c1040(*(uint64_t *)(lVar2 + 0x340),uVar9,alStack_a0,&uStack_128);
    uStack_128 = CONCAT44(uStack_128._4_4_,0xffffffff);
    puStack_138 = &uStack_f8;
    uVar10 = FUN_1800c1040(*(uint64_t *)(lVar2 + 0x340),uVar10,alStack_a0 + 1,&uStack_128);
    FUN_1800c0ef0(*(uint64_t *)(lVar2 + 0x340),uVar7,uVar8,uVar9);
    FUN_1800c0ef0(*(uint64_t *)(lVar2 + 0x340),uVar7,uVar9,uVar10);
    uVar11 = *(uint64_t *)(lVar2 + 0x340);
    uVar13 = FUN_1800be9a0(system_system_data_memory,&uStack_120,0);
    FUN_180076910(uVar11,uVar13);
    if (uStack_120 != (int64_t *)0x0) {
      (**(code **)(*uStack_120 + 0x38))();
    }
    FUN_180075b70(*(uint64_t *)(lVar2 + 0x340));
    plVar12 = *(int64_t **)(lVar2 + 0x340);
  }
  *param_2 = plVar12;
  if (plVar12 != (int64_t *)0x0) {
    (**(code **)(*plVar12 + 0x28))();
  }
  uStack_110 = 1;
  iVar6 = _Mtx_unlock(lVar1);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(alStack_a0[2] ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_1800bfec0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t *aplStackX_10 [3];
  
  lVar3 = system_system_data_memory;
  if (*(int64_t *)(system_system_data_memory + 0x3d8) == 0) {
    puVar4 = (uint64_t *)
             FUN_18009e9e0(param_1,aplStackX_10,&unknown_var_768_ptr,param_4,0xfffffffffffffffe);
    uVar1 = *puVar4;
    *puVar4 = 0;
    plVar2 = *(int64_t **)(lVar3 + 0x3d8);
    *(uint64_t *)(lVar3 + 0x3d8) = uVar1;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    if (aplStackX_10[0] != (int64_t *)0x0) {
      (**(code **)(*aplStackX_10[0] + 0x38))();
    }
  }
  return *(uint64_t *)(lVar3 + 0x3d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_1800bff50(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t *aplStackX_10 [3];
  
  lVar3 = system_system_data_memory;
  if (*(int64_t *)(system_system_data_memory + 0x3b8) == 0) {
    puVar4 = (uint64_t *)
             FUN_18009e9e0(param_1,aplStackX_10,&system_data_36e0,param_4,0xfffffffffffffffe);
    uVar1 = *puVar4;
    *puVar4 = 0;
    plVar2 = *(int64_t **)(lVar3 + 0x3b8);
    *(uint64_t *)(lVar3 + 0x3b8) = uVar1;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    if (aplStackX_10[0] != (int64_t *)0x0) {
      (**(code **)(*aplStackX_10[0] + 0x38))();
    }
  }
  return *(uint64_t *)(lVar3 + 0x3b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_1800bffe0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t *aplStackX_10 [3];
  
  lVar3 = system_system_data_memory;
  if (*(int64_t *)(system_system_data_memory + 0x3f0) == 0) {
    puVar4 = (uint64_t *)
             FUN_18009e9e0(param_1,aplStackX_10,&unknown_var_816_ptr,param_4,0xfffffffffffffffe);
    uVar1 = *puVar4;
    *puVar4 = 0;
    plVar2 = *(int64_t **)(lVar3 + 0x3f0);
    *(uint64_t *)(lVar3 + 0x3f0) = uVar1;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    if (aplStackX_10[0] != (int64_t *)0x0) {
      (**(code **)(*aplStackX_10[0] + 0x38))();
    }
  }
  return *(uint64_t *)(lVar3 + 0x3f0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_1800c0070(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t *aplStackX_10 [3];
  
  lVar3 = system_system_data_memory;
  if (*(int64_t *)(system_system_data_memory + 0x3f8) == 0) {
    puVar4 = (uint64_t *)
             FUN_18009e9e0(param_1,aplStackX_10,&unknown_var_872_ptr,param_4,0xfffffffffffffffe);
    uVar1 = *puVar4;
    *puVar4 = 0;
    plVar2 = *(int64_t **)(lVar3 + 0x3f8);
    *(uint64_t *)(lVar3 + 0x3f8) = uVar1;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    if (aplStackX_10[0] != (int64_t *)0x0) {
      (**(code **)(*aplStackX_10[0] + 0x38))();
    }
  }
  return *(uint64_t *)(lVar3 + 0x3f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1800c0100(int64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int64_t alStackX_8 [4];
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_30;
  int32_t uStack_2c;
  int64_t *plStack_28;
  code *pcStack_20;
  code *pcStack_18;
  
  plVar2 = system_system_data_memory;
  if (*system_system_data_memory == 0) {
    alStackX_8[0] = param_1;
    alStackX_8[0] = FUN_1800bd410(system_system_data_memory);
    puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x70,8);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(int16_t *)(puVar3 + 2) = 0;
    *(int8_t *)((int64_t)puVar3 + 0x12) = 3;
    *(int32_t *)((int64_t)puVar3 + 0x62) = 0;
    *(uint64_t *)((int64_t)puVar3 + 0x54) = 0;
    *(int32_t *)((int64_t)puVar3 + 0x5c) = 0;
    *(int16_t *)(puVar3 + 0xc) = 0;
    *(int8_t *)((int64_t)puVar3 + 0x66) = 0;
    *(uint64_t *)((int64_t)puVar3 + 0x14) = 0;
    *(uint64_t *)((int64_t)puVar3 + 0x1c) = 0;
    *(uint64_t *)((int64_t)puVar3 + 0x24) = 0;
    *(uint64_t *)((int64_t)puVar3 + 0x2c) = 0;
    *(uint64_t *)((int64_t)puVar3 + 0x34) = 0;
    *(uint64_t *)((int64_t)puVar3 + 0x3c) = 0;
    *(uint64_t *)((int64_t)puVar3 + 0x44) = 0;
    *(uint64_t *)((int64_t)puVar3 + 0x4c) = 0;
    *plVar2 = (int64_t)puVar3;
    plVar1 = *(int64_t **)(*(int64_t *)(alStackX_8[0] + 0xa8) + 0x88);
    plStack_28 = alStackX_8;
    pcStack_20 = (code *)&unknown_var_1120_ptr;
    pcStack_18 = FUN_1800c0da0;
    uStack_40 = SUB84(plVar2,0);
    uStack_3c = (int32_t)((uint64_t)plVar2 >> 0x20);
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    (**(code **)(*plVar1 + 0x60))
              (plVar1,&system_data_1050,*(int64_t *)(alStackX_8[0] + 0xa8) + 0xc,0,&uStack_30);
    if (pcStack_20 != (code *)0x0) {
      (*pcStack_20)(&uStack_30,0,0);
    }
  }
  return *plVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800c0230(uint64_t param_1,int64_t *param_2)
void FUN_1800c0230(uint64_t param_1,int64_t *param_2)

{
  uint *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t **pplVar10;
  int8_t auStack_78 [32];
  int32_t uStack_58;
  int64_t *plStack_50;
  uint64_t uStack_48;
  int64_t *plStack_40;
  int64_t *plStack_38;
  int32_t uStack_30;
  int8_t auStack_2c [20];
  
  lVar6 = system_system_data_memory;
  uStack_48 = 0xfffffffffffffffe;
  auStack_2c._4_8_ = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_78;
  lVar9 = 0;
  uStack_58 = 0;
  plStack_40 = param_2;
  if (*(int64_t *)(system_system_data_memory + 0x290) == 0) {
    puVar7 = (uint64_t *)FUN_180095000(param_1,&plStack_38,&unknown_var_944_ptr,1);
    uVar3 = *puVar7;
    *puVar7 = 0;
    plStack_50 = *(int64_t **)(lVar6 + 0x290);
    *(uint64_t *)(lVar6 + 0x290) = uVar3;
    if (plStack_50 != (int64_t *)0x0) {
      (**(code **)(*plStack_50 + 0x38))();
    }
    if (plStack_38 != (int64_t *)0x0) {
      (**(code **)(*plStack_38 + 0x38))();
    }
    plVar4 = *(int64_t **)(lVar6 + 0x290);
    plStack_38 = plVar4;
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    FUN_1800b4e00();
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    plStack_38 = (int64_t *)0x200000000;
    uStack_30 = 4;
    pplVar10 = &plStack_38;
    lVar8 = 3;
    if (auStack_2c < &plStack_38) {
      lVar8 = lVar9;
    }
    do {
      lVar5 = *(int64_t *)(lVar6 + 0x290);
      lVar2 = (int64_t)*(int *)pplVar10 * 8 + 0xb8;
      puVar1 = (uint *)(*(int64_t *)(lVar2 + lVar5) + 0x328);
      *puVar1 = *puVar1 | 0x20000000;
      FUN_1800b4e00(lVar5,*(uint64_t *)(lVar2 + *(int64_t *)(lVar6 + 0x290)),
                    *(int32_t *)(lVar6 + 0x468));
      pplVar10 = (int64_t **)((int64_t)pplVar10 + 4);
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar8);
  }
  plVar4 = *(int64_t **)(lVar6 + 0x290);
  *param_2 = (int64_t)plVar4;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x28))();
  }
  uStack_58 = 1;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(auStack_2c._4_8_ ^ (uint64_t)auStack_78);
}



// WARNING: Removing unreachable block (ram,0x0001800c0524)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_1800c03c0(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  uint64_t uStackX_18;
  int64_t alStack_40 [3];
  
  lVar2 = *(int64_t *)(system_system_data_memory + 0x2a8);
  puVar6 = *(uint64_t **)(lVar2 + (param_3 % (uint64_t)*(uint *)(system_system_data_memory + 0x2b0)) * 8);
  do {
    if (puVar6 == (uint64_t *)0x0) {
      lVar5 = *(int64_t *)(system_system_data_memory + 0x2b0);
      puVar6 = *(uint64_t **)(lVar2 + lVar5 * 8);
LAB_1800c043d:
      lVar1 = system_system_data_memory + 0x2a0;
      plStackX_8 = param_1;
      plStackX_10 = param_2;
      uStackX_18 = param_3;
      if (puVar6 == *(uint64_t **)(lVar2 + lVar5 * 8)) {
        FUN_1800b4a00(system_resource_state,&plStackX_8,param_4,1);
        plVar4 = plStackX_8;
        if (plStackX_8 != (int64_t *)0x0) {
          (**(code **)(*plStackX_8 + 0x28))(plStackX_8);
        }
        FUN_1800b4e00();
        if (plVar4 != (int64_t *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4);
        }
        FUN_1800c08e0(lVar1,alStack_40);
        plVar4 = plStackX_8;
        if (plStackX_8 != (int64_t *)0x0) {
          (**(code **)(*plStackX_8 + 0x28))(plStackX_8);
        }
        plVar3 = *(int64_t **)(alStack_40[0] + 8);
        *(int64_t **)(alStack_40[0] + 8) = plVar4;
        if (plVar3 != (int64_t *)0x0) {
          (**(code **)(*plVar3 + 0x38))();
        }
        *param_2 = (int64_t)plStackX_8;
      }
      else {
        plVar4 = (int64_t *)puVar6[1];
        *param_2 = (int64_t)plVar4;
        if (plVar4 != (int64_t *)0x0) {
          (**(code **)(*plVar4 + 0x28))();
        }
      }
      return param_2;
    }
    if (param_3 == *puVar6) {
      lVar5 = *(int64_t *)(system_system_data_memory + 0x2b0);
      goto LAB_1800c043d;
    }
    puVar6 = (uint64_t *)puVar6[2];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800c0570(int64_t param_1,uint64_t *param_2)
void FUN_1800c0570(int64_t param_1,uint64_t *param_2)

{
  uint *puVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int8_t auStack_f8 [32];
  int32_t uStack_d8;
  int64_t *plStack_d0;
  uint64_t uStack_c8;
  uint64_t *puStack_c0;
  int8_t auStack_b8 [88];
  void *puStack_60;
  int8_t *puStack_58;
  int32_t uStack_50;
  int8_t auStack_48 [32];
  uint64_t uStack_28;
  
  uStack_c8 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  uStack_d8 = 0;
  plVar3 = *(int64_t **)(param_1 + 0x2d0);
  puStack_c0 = param_2;
  if (plVar3 == (int64_t *)0x0) {
    uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x470,0x10,3);
    plVar3 = (int64_t *)FUN_18022b590(uVar2);
    if (plVar3 != (int64_t *)0x0) {
      plStack_d0 = plVar3;
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plStack_d0 = *(int64_t **)(param_1 + 0x2d0);
    *(int64_t **)(param_1 + 0x2d0) = plVar3;
    if (plStack_d0 != (int64_t *)0x0) {
      (**(code **)(*plStack_d0 + 0x38))();
    }
    plVar3 = (int64_t *)(*(int64_t *)(param_1 + 0x2d0) + 0x10);
    (**(code **)(*plVar3 + 0x10))(plVar3,&unknown_var_976_ptr);
    uVar2 = *(uint64_t *)(param_1 + 0x2d0);
    plStack_d0 = (int64_t *)auStack_b8;
    puStack_60 = &unknown_var_672_ptr;
    puStack_58 = auStack_48;
    auStack_48[0] = 0;
    uStack_50 = 0xb;
    strcpy_s(auStack_48,0x20,&unknown_var_768_ptr);
    uVar4 = FUN_1800b8300(auStack_b8,&puStack_60);
    FUN_18022ccc0(uVar2,uVar4);
    puStack_60 = &system_state_ptr;
    puVar1 = (uint *)(*(int64_t *)(param_1 + 0x2d0) + 0x138);
    *puVar1 = *puVar1 | 1;
    *(int32_t *)(*(int64_t *)(param_1 + 0x2d0) + 0x388) = 0x40000000;
    plVar3 = *(int64_t **)(param_1 + 0x2d0);
  }
  *param_2 = plVar3;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x28))();
  }
  uStack_d8 = 1;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_1800c0750(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t *aplStackX_10 [3];
  
  lVar3 = system_system_data_memory;
  if (*(int64_t *)(system_system_data_memory + 1000) == 0) {
    puVar4 = (uint64_t *)
             FUN_18009e9e0(param_1,aplStackX_10,&unknown_var_1008_ptr,param_4,0xfffffffffffffffe);
    uVar1 = *puVar4;
    *puVar4 = 0;
    plVar2 = *(int64_t **)(lVar3 + 1000);
    *(uint64_t *)(lVar3 + 1000) = uVar1;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    if (aplStackX_10[0] != (int64_t *)0x0) {
      (**(code **)(*aplStackX_10[0] + 0x38))();
    }
  }
  return *(uint64_t *)(lVar3 + 1000);
}



uint64_t *
FUN_1800c07e0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_1056_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}






// 函数: void FUN_1800c0830(int64_t param_1)
void FUN_1800c0830(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  
  uVar3 = *(uint64_t *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar1 + uVar4 * 8);
      if (lVar2 != 0) {
        if (*(int64_t **)(lVar2 + 8) != (int64_t *)0x0) {
          (**(code **)(**(int64_t **)(lVar2 + 8) + 0x38))();
        }
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar2);
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(int64_t *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1800c08e0(int64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t param_5)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  
  uVar2 = param_5 % (uint64_t)*(uint *)(param_1 + 0x10);
  plVar4 = (int64_t *)(*(int64_t *)(param_1 + 8) + uVar2 * 8);
  plVar3 = (int64_t *)*plVar4;
  if (plVar3 != (int64_t *)0x0) {
    do {
      if (*param_4 == *plVar3) {
        *param_2 = plVar3;
        param_2[1] = plVar4;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
      plVar3 = (int64_t *)plVar3[2];
    } while (plVar3 != (int64_t *)0x0);
  }
  FUN_18066c220(param_1 + 0x20,&param_5,(uint64_t)*(uint *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),1);
  plVar4 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,*(int8_t *)(param_1 + 0x2c));
  *plVar4 = *param_4;
  plVar4[1] = 0;
  plVar4[2] = 0;
  if ((char)param_5 == '\0') {
    plVar4[2] = *(int64_t *)(*(int64_t *)(param_1 + 8) + uVar2 * 8);
    *(int64_t **)(*(int64_t *)(param_1 + 8) + uVar2 * 8) = plVar4;
    *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
    lVar1 = *(int64_t *)(param_1 + 8);
    *param_2 = plVar4;
    param_2[1] = lVar1 + uVar2 * 8;
    *(int8_t *)(param_2 + 2) = 1;
    return param_2;
  }
  uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)param_5._4_4_ * 8 + 8,8,
                        *(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
  memset(uVar5,0,(uint64_t)param_5._4_4_ * 8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_1800c0ad0(uint64_t param_1,int64_t *param_2,uint64_t param_3,int32_t param_4)

{
  uint64_t uVar1;
  int32_t uVar2;
  int32_t *puVar3;
  void *puStack_48;
  int32_t *puStack_40;
  int32_t uStack_38;
  uint64_t uStack_30;
  
  uVar1 = system_system_data_memory;
  puStack_48 = &system_data_buffer_ptr;
  uStack_30 = 0;
  puStack_40 = (int32_t *)0x0;
  uStack_38 = 0;
  puVar3 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1d,0x13,param_4,0,0xfffffffffffffffe);
  *(int8_t *)puVar3 = 0;
  puStack_40 = puVar3;
  uVar2 = CoreEngineSystemCleanup(puVar3);
  *puVar3 = 0x6f736552;
  puVar3[1] = 0x65637275;
  puVar3[2] = 0x66754220;
  puVar3[3] = 0x73726566;
  *(uint64_t *)(puVar3 + 4) = 0x6f6f70206e6f6e28;
  puVar3[6] = 0x2964656c;
  *(int8_t *)(puVar3 + 7) = 0;
  uStack_38 = 0x1c;
  uStack_30._0_4_ = uVar2;
  FUN_1802037e0(0,param_4,&puStack_48);
  puStack_48 = &system_data_buffer_ptr;
  if (puStack_40 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_40 = (int32_t *)0x0;
  uStack_30 = (uint64_t)uStack_30._4_4_ << 0x20;
  puStack_48 = &system_state_ptr;
  FUN_1800c0c20(uVar1,param_2);
  *(uint64_t *)(*param_2 + 0x10) = param_3;
  *(int32_t *)(*param_2 + 0x18) = param_4;
  *(int32_t *)(*param_2 + 0x1c) = param_4;
  *(int8_t *)(*param_2 + 0x20) = 1;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1800c0c20(int64_t param_1,uint64_t *param_2)

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
    *plVar3 = (int64_t)&unknown_var_1056_ptr;
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
    *plVar3 = (int64_t)&unknown_var_1056_ptr;
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




