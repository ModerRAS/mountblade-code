#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part264.c - 7 个函数

// 函数: void FUN_18022aff8(void)
void FUN_18022aff8(void)

{
  uint64_t in_stack_00000040;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000040 ^ (uint64_t)&stack0x00000000);
}



float * FUN_18022b050(int64_t param_1,float *param_2,int param_3,int64_t param_4)

{
  float *pfVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint64_t uVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  char cVar12;
  int64_t lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  uVar3 = *(uint64_t *)(param_1 + 0x800);
  lVar13 = (int64_t)(char)param_3;
  if (((*(uint64_t *)(param_1 + 0x810) & uVar3) != 0) &&
     ((*(uint64_t *)(lVar13 * 0x1b0 + 0xe0 + *(int64_t *)(param_4 + 0x140)) & uVar3) != 0)) {
    iVar11 = -1;
    do {
      cVar12 = (char)param_3;
      cVar10 = *(char *)((int64_t)cVar12 + 0x100 + param_4);
      param_3 = (int)cVar10;
      iVar9 = param_3;
      if ((*(uint64_t *)((int64_t)cVar12 * 0x1b0 + 0xe0 + *(int64_t *)(param_4 + 0x140)) & uVar3)
          == 0) {
        iVar9 = iVar11;
      }
      iVar11 = iVar9;
    } while (-1 < cVar10);
    pfVar1 = (float *)(param_1 + (lVar13 + 0x82) * 0x10);
    fVar23 = *pfVar1;
    fVar17 = pfVar1[1];
    fVar19 = pfVar1[2];
    fVar21 = pfVar1[3];
    cVar10 = *(char *)(lVar13 + 0x100 + param_4);
    if (-1 < cVar10) {
      while (cVar10 != iVar9) {
        lVar13 = (int64_t)cVar10;
        cVar10 = *(char *)(lVar13 + 0x100 + param_4);
        pfVar1 = (float *)(param_1 + (lVar13 + 0x82) * 0x10);
        fVar4 = *pfVar1;
        fVar5 = pfVar1[1];
        fVar6 = pfVar1[2];
        fVar7 = pfVar1[3];
        fVar18 = fVar7 * fVar17;
        fVar20 = fVar5 * fVar19;
        fVar22 = fVar7 * fVar21;
        fVar14 = fVar6 * fVar19;
        fVar15 = fVar6 * fVar17;
        fVar16 = fVar5 * fVar17;
        fVar17 = fVar6 * fVar21 * 1.0 + fVar4 * fVar17 * 1.0 + (fVar23 * fVar5 - fVar7 * fVar19);
        fVar19 = fVar18 * 1.0 + fVar4 * fVar19 * 1.0 + (fVar23 * fVar6 - fVar5 * fVar21);
        fVar21 = fVar20 * 1.0 + fVar4 * fVar21 * 1.0 + (fVar23 * fVar7 - fVar15);
        fVar23 = fVar22 * -1.0 + fVar14 * -1.0 + (fVar23 * fVar4 - fVar16);
        if (cVar10 < '\0') {
          *param_2 = fVar23;
          param_2[1] = fVar17;
          param_2[2] = fVar19;
          param_2[3] = fVar21;
          return param_2;
        }
      }
      if ((-1 < cVar10) && (cVar10 == iVar9)) {
        pfVar1 = (float *)(param_1 + (int64_t)cVar10 * 0x10);
        fVar4 = *pfVar1;
        fVar5 = pfVar1[1];
        fVar6 = pfVar1[2];
        fVar7 = pfVar1[3];
        fVar17 = fVar6 * fVar21 * 1.0 + fVar4 * fVar17 * 1.0 + (fVar23 * fVar5 - fVar7 * fVar19);
        fVar19 = fVar7 * fVar17 * 1.0 + fVar4 * fVar19 * 1.0 + (fVar23 * fVar6 - fVar5 * fVar21);
        fVar21 = fVar5 * fVar19 * 1.0 + fVar4 * fVar21 * 1.0 + (fVar23 * fVar7 - fVar6 * fVar17);
        fVar23 = fVar7 * fVar21 * -1.0 + fVar6 * fVar19 * -1.0 + (fVar23 * fVar4 - fVar5 * fVar17);
      }
    }
    *param_2 = fVar23;
    param_2[1] = fVar17;
    param_2[2] = fVar19;
    param_2[3] = fVar21;
    return param_2;
  }
  puVar2 = (uint64_t *)(param_1 + lVar13 * 0x10);
  uVar8 = puVar2[1];
  *(uint64_t *)param_2 = *puVar2;
  *(uint64_t *)(param_2 + 2) = uVar8;
  return param_2;
}





// 函数: void FUN_18022b240(uint64_t *param_1,char param_2,float *param_3,int64_t param_4)
void FUN_18022b240(uint64_t *param_1,char param_2,float *param_3,int64_t param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint64_t uVar9;
  float *pfVar10;
  int64_t lVar11;
  uint64_t uVar12;
  
  uVar12 = (uint64_t)param_2;
  lVar11 = uVar12 * 0x1b0 + *(int64_t *)(param_4 + 0x140);
  param_1[0x100] = param_1[0x100] | *(uint64_t *)(lVar11 + 0xe8);
  if (param_2 == '\0') {
    uVar9 = *(uint64_t *)(param_3 + 2);
    param_1[0x104] = *(uint64_t *)param_3;
    param_1[0x105] = uVar9;
    uVar9 = *(uint64_t *)(param_3 + 2);
    *param_1 = *(uint64_t *)param_3;
    param_1[1] = uVar9;
    param_1[0x100] = param_1[0x100] & 0xfffffffffffffffe;
  }
  else {
    pfVar10 = (float *)FUN_18022a890(param_1,*(int8_t *)(lVar11 + 0xf0),param_4);
    fVar1 = *param_3;
    fVar2 = param_3[1];
    fVar3 = param_3[2];
    fVar4 = param_3[3];
    fVar5 = *pfVar10;
    fVar6 = pfVar10[1];
    fVar7 = pfVar10[2];
    fVar8 = pfVar10[3];
    pfVar10 = (float *)(param_1 + (uVar12 + 0x82) * 2);
    *pfVar10 = fVar8 * fVar4 * 1.0 + fVar1 * fVar5 * 1.0 + fVar7 * fVar3 + fVar6 * fVar2;
    pfVar10[1] = fVar7 * fVar4 * -1.0 + fVar1 * fVar6 * -1.0 + fVar5 * fVar2 + fVar8 * fVar3;
    pfVar10[2] = fVar8 * fVar2 * -1.0 + fVar1 * fVar7 * -1.0 + fVar5 * fVar3 + fVar6 * fVar4;
    pfVar10[3] = fVar6 * fVar3 * -1.0 + fVar1 * fVar8 * -1.0 + fVar5 * fVar4 + fVar7 * fVar2;
    uVar9 = *(uint64_t *)(param_3 + 2);
    param_1[uVar12 * 2] = *(uint64_t *)param_3;
    (param_1 + uVar12 * 2)[1] = uVar9;
  }
  param_1[0x101] = param_1[0x101] | 1L << (uVar12 & 0x3f);
  return;
}



uint64_t *
FUN_18022b510(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &memory_allocator_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0xb;
  strcpy_s(param_2[1],0x80,&processed_var_7240_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}



uint64_t * FUN_18022b590(uint64_t *param_1)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  uint64_t *puVar7;
  
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
  *param_1 = &processed_var_7792_ptr;
  plVar3 = param_1 + 0x17;
  lVar4 = 0x10;
  DataStructureManager(plVar3,8,0x10,&SUB_18005d5f0,SystemTimer);
  puVar2 = param_1 + 0x29;
  plVar1 = param_1 + 0x2c;
  DataStructureManager(plVar1,0x38,2,FUN_180046480,FUN_180044a30);
  puVar7 = param_1 + 0x2b;
  lVar5 = 2;
  plVar6 = plVar1;
  do {
    *(int8_t *)puVar7 = 0;
    *puVar2 = 0xffffffffffffffff;
    (**(code **)(*plVar6 + 0x10))(plVar1,&system_buffer_ptr);
    plVar1 = plVar1 + 7;
    puVar7 = (uint64_t *)((int64_t)puVar7 + 1);
    puVar2 = puVar2 + 1;
    plVar6 = plVar6 + 7;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  param_1[0x3c] = 0;
  _Mtx_init_in_situ(param_1 + 0x3d,2);
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(int32_t *)(param_1 + 0x4a) = 3;
  param_1[0x5a] = &system_state_ptr;
  param_1[0x5b] = 0;
  *(int32_t *)(param_1 + 0x5c) = 0;
  param_1[0x5a] = &memory_allocator_3432_ptr;
  param_1[0x5b] = param_1 + 0x5d;
  *(int32_t *)(param_1 + 0x5c) = 0;
  *(int8_t *)(param_1 + 0x5d) = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(int32_t *)(param_1 + 0x70) = 0x11;
  puVar7 = param_1 + 0x7b;
  plVar1 = param_1 + 0x7c;
  DataStructureManager(plVar1,8,0x10,&SUB_18005d5f0,SystemTimer);
  lVar5 = 5;
  do {
    plVar6 = (int64_t *)*plVar1;
    *plVar1 = 0;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x38))();
    }
    plVar1 = plVar1 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(int8_t *)puVar7 = 0;
  FUN_18040f650(puVar7);
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  FUN_18040f650(puVar7);
  param_1[0x3a] = 0xffffffffffffffff;
  *(int8_t *)(param_1 + 0x3b) = 0;
  *(int32_t *)(param_1 + 0x27) = 0;
  do {
    plVar1 = (int64_t *)*plVar3;
    *plVar3 = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar3 = plVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  plVar1 = (int64_t *)param_1[0x3c];
  param_1[0x3c] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(int8_t *)((int64_t)param_1 + 0x1d9) = 0;
  param_1[0x28] = 0;
  FUN_18022ebe0(param_1 + 0x6d);
  *(int32_t *)((int64_t)param_1 + 0x25c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x4c) = 0x3f266666;
  *(int32_t *)((int64_t)param_1 + 0x264) = 0x3f800000;
  param_1[0x4d] = 0x3f800000;
  *(int32_t *)(param_1 + 0x50) = 0x3f800000;
  *(int32_t *)(param_1 + 0x4f) = 0;
  *(int32_t *)((int64_t)param_1 + 0x27c) = 0x3f000000;
  *(int32_t *)((int64_t)param_1 + 0x284) = 0x3f800000;
  *(int32_t *)(param_1 + 0x4b) = 0;
  *(int32_t *)(param_1 + 0x4e) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x274) = 0x3f800000;
  *(int8_t *)((int64_t)param_1 + 0x13c) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0x3f8000003f800000;
  param_1[0x56] = 0x3f8000003f800000;
  param_1[0x57] = 0x3f8000003f800000;
  param_1[0x58] = 0x3f8000003f800000;
  *(int32_t *)(param_1 + 0x59) = 0;
  *(int32_t *)(param_1 + 0x71) = 0;
  *(int8_t *)((int64_t)param_1 + 0x38c) = 9;
  *(int16_t *)(param_1 + 0x78) = 0xffff;
  return param_1;
}



uint64_t FUN_18022b980(uint64_t param_1,uint64_t param_2)

{
  FUN_18022ba40();
  if ((param_2 & 1) != 0) {
    free(param_1,0x470);
  }
  return param_1;
}





// 函数: void FUN_18022b9c0(int64_t param_1)
void FUN_18022b9c0(int64_t param_1)

{
  SystemDataValidator(param_1 + 0x18,0x38,2,FUN_180044a30,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_18022ba00(int64_t param_1)
void FUN_18022ba00(int64_t param_1)

{
  SystemDataValidator(param_1 + 8,8,0x10,SystemTimer,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_18022ba40(uint64_t *param_1)
void FUN_18022ba40(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = &processed_var_7792_ptr;
  plVar2 = param_1 + 0x17;
  lVar3 = 0x10;
  do {
    plVar1 = (int64_t *)*plVar2;
    *plVar2 = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar2 = plVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  plVar2 = (int64_t *)param_1[0x3c];
  param_1[0x3c] = 0;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  SystemDataValidator(param_1 + 0x7c,8,0x10,SystemTimer,uVar4);
  FUN_180057170();
  param_1[0x5a] = &system_state_ptr;
  if (param_1[0x47] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  _Mtx_destroy_in_situ();
  if ((int64_t *)param_1[0x3c] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x3c] + 0x38))();
  }
  SystemDataValidator(param_1 + 0x2c,0x38,2,FUN_180044a30);
  SystemDataValidator(param_1 + 0x17,8,0x10,SystemTimer);
  *param_1 = &processed_var_8584_ptr;
  param_1[2] = &system_state_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  return;
}



uint64_t FUN_18022bbe0(int64_t param_1,int param_2)

{
  int64_t lVar1;
  
  param_1 = param_1 + (int64_t)param_2 * 8;
  lVar1 = *(int64_t *)(param_1 + 0x3c8);
  if (lVar1 != 0) {
    (**(code **)(**(int64_t **)(lVar1 + 0x20) + 0x80))(*(int64_t **)(lVar1 + 0x20),lVar1,0);
    return *(uint64_t *)(param_1 + 0x3c8);
  }
  return 0x180d49658;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18022bc30(int64_t param_1)
void FUN_18022bc30(int64_t param_1)

{
  int32_t *puVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint uVar11;
  int64_t *plVar12;
  int8_t auStack_d8 [32];
  int8_t *puStack_b8;
  int64_t lStack_a8;
  int iStack_a0;
  uint uStack_9c;
  int64_t *plStack_98;
  int64_t *plStack_90;
  int64_t lStack_88;
  int8_t auStack_80 [16];
  code *pcStack_70;
  code *pcStack_68;
  uint64_t uStack_60;
  int8_t auStack_58 [16];
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int64_t *plStack_38;
  uint64_t uStack_30;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  uStack_9c = 0;
  iVar3 = *(int *)(system_main_module_state + 0x224);
  *(int8_t *)(param_1 + 0x460) = 1;
  uVar11 = 0;
  do {
    uVar11 = uVar11 + 8;
  } while (uVar11 < 0x10);
  plVar12 = (int64_t *)(param_1 + 0x3e0);
  lStack_a8 = 0x10;
  iStack_a0 = iVar3;
  lStack_88 = param_1;
  do {
    lVar2 = plVar12[-0x65];
    lVar7 = lStack_a8;
    if (lVar2 != 0) {
      if ((*plVar12 == 0) && (lVar7 = *(int64_t *)(lVar2 + 0xa8), lVar7 != 0)) {
        puVar1 = (int32_t *)(lVar7 + 0xc);
        puVar8 = (uint64_t *)(core_system_data_config + 0x1f8);
        puVar6 = puVar8;
        puVar9 = *(uint64_t **)(core_system_data_config + 0x208);
        if (*(uint64_t **)(core_system_data_config + 0x208) == (uint64_t *)0x0) {
LAB_18022bda0:
          puVar6 = puVar8;
        }
        else {
          do {
            iVar3 = memcmp(puVar9 + 4,puVar1,0x10);
            if (iVar3 < 0) {
              puVar10 = (uint64_t *)*puVar9;
            }
            else {
              puVar10 = (uint64_t *)puVar9[1];
              puVar6 = puVar9;
            }
            puVar9 = puVar10;
          } while (puVar10 != (uint64_t *)0x0);
          if ((puVar6 == puVar8) || (iVar3 = memcmp(puVar1,puVar6 + 4,0x10), iVar3 < 0))
          goto LAB_18022bda0;
        }
        if (puVar6 == puVar8) {
          uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3b0,0x10,3);
          plVar5 = (int64_t *)FUN_18023a2e0(uVar4,0);
          if (plVar5 != (int64_t *)0x0) {
            plStack_90 = plVar5;
            (**(code **)(*plVar5 + 0x28))(plVar5);
          }
          plStack_90 = (int64_t *)*plVar12;
          *plVar12 = (int64_t)plVar5;
          if (plStack_90 != (int64_t *)0x0) {
            (**(code **)(*plStack_90 + 0x38))();
          }
          (**(code **)(*(int64_t *)(*plVar12 + 0x10) + 0x10))
                    ((int64_t *)(*plVar12 + 0x10),&processed_var_7296_ptr);
          *(uint64_t *)(*plVar12 + 0xa8) = *(uint64_t *)(lVar2 + 0xa8);
          lVar2 = core_system_data_config;
          uStack_48 = *puVar1;
          uStack_44 = *(int32_t *)(lVar7 + 0x10);
          uStack_40 = *(int32_t *)(lVar7 + 0x14);
          uStack_3c = *(int32_t *)(lVar7 + 0x18);
          plStack_38 = (int64_t *)*plVar12;
          if (plStack_38 != (int64_t *)0x0) {
            (**(code **)(*plStack_38 + 0x28))();
          }
          uVar11 = uStack_9c;
          uStack_9c = uStack_9c | 1;
          FUN_18022edb0(lVar2 + 0x1f8,auStack_58);
          uStack_9c = uVar11 & 0xfffffffe;
          plVar5 = plStack_38;
        }
        else {
          plVar5 = (int64_t *)puVar6[6];
          if (plVar5 != (int64_t *)0x0) {
            plStack_98 = plVar5;
            (**(code **)(*plVar5 + 0x28))(plVar5);
          }
          plStack_98 = (int64_t *)*plVar12;
          *plVar12 = (int64_t)plVar5;
          plVar5 = plStack_98;
        }
        iVar3 = iStack_a0;
        if (plVar5 != (int64_t *)0x0) {
          (**(code **)(*plVar5 + 0x38))();
          iVar3 = iStack_a0;
        }
      }
      lVar7 = lStack_a8;
      if (*plVar12 != 0) {
        pcStack_70 = (code *)0x0;
        pcStack_68 = _guard_check_icall;
        puStack_b8 = auStack_80;
        FUN_18023baa0();
        if (pcStack_70 != (code *)0x0) {
          (*pcStack_70)(auStack_80,0,0);
        }
        *(int64_t *)(*plVar12 + 0x340) = (int64_t)iVar3;
      }
    }
    plVar12 = plVar12 + 1;
    lStack_a8 = lVar7 + -1;
    if (lStack_a8 == 0) {
      FUN_18022f080(lStack_88);
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_d8);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18022bf70(int64_t param_1,char param_2)
void FUN_18022bf70(int64_t param_1,char param_2)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  uint uVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  byte *pbVar12;
  char *pcVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  void *puVar16;
  int iVar17;
  int64_t lVar18;
  int64_t lVar19;
  int64_t lVar20;
  int64_t lVar21;
  void *puVar22;
  int64_t lVar23;
  int iVar24;
  int iVar25;
  int64_t lVar26;
  uint64_t uVar27;
  int8_t auStack_2c8 [32];
  code *pcStack_2a8;
  int64_t *plStack_298;
  int64_t *plStack_290;
  int64_t *plStack_288;
  int64_t lStack_280;
  int64_t *plStack_278;
  int64_t *plStack_268;
  int64_t *plStack_260;
  int64_t *plStack_258;
  int64_t *plStack_250;
  uint uStack_248;
  uint64_t uStack_240;
  void *puStack_238;
  int8_t *puStack_230;
  int32_t uStack_228;
  int8_t auStack_220 [72];
  void *puStack_1d8;
  int8_t *puStack_1d0;
  int32_t uStack_1c8;
  int8_t auStack_1c0 [72];
  void *puStack_178;
  int8_t *puStack_170;
  int32_t uStack_168;
  int8_t auStack_160 [72];
  void *puStack_118;
  int8_t *puStack_110;
  int32_t uStack_108;
  int8_t auStack_100 [72];
  int8_t *apuStack_b8 [2];
  int32_t uStack_a8;
  int8_t auStack_a0 [104];
  uint64_t uStack_38;
  
  uStack_240 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2c8;
  lStack_280 = param_1;
  plVar9 = (int64_t *)FUN_1800b31f0(system_resource_state,&plStack_268,param_1 + 0x2d0,0);
  plVar9 = (int64_t *)*plVar9;
  plStack_288 = plVar9;
  if (plStack_268 != (int64_t *)0x0) {
    (**(code **)(*plStack_268 + 0x38))();
  }
  if ((param_2 == '\0') || (*(int64_t **)(param_1 + 0x1e0) == (int64_t *)0x0)) {
LAB_18022c3ff:
    if (plVar9 != (int64_t *)0x0) goto LAB_18022c460;
  }
  else if (plVar9 != (int64_t *)0x0) {
    if (*(int64_t **)(param_1 + 0x1e0) != plVar9) {
      plVar9 = (int64_t *)(param_1 + 0x368);
      lVar5 = (*(int64_t *)(param_1 + 0x370) - *plVar9) / 0x58;
      uStack_248 = *(uint *)(param_1 + 0x380);
      plStack_298 = plVar9;
      if (lVar5 == 0) {
        plVar10 = (int64_t *)0x0;
      }
      else {
        plVar10 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar5 * 0x58,uStack_248 & 0xff);
      }
      plStack_250 = plVar10 + lVar5 * 0xb;
      lVar5 = *(int64_t *)(param_1 + 0x370);
      plVar11 = plVar10;
      plStack_278 = plVar10;
      plStack_260 = plVar10;
      if (*plVar9 != lVar5) {
        lVar19 = *plVar9 - (int64_t)plVar10;
        plStack_258 = plVar10;
        do {
          *plVar11 = (int64_t)&system_state_ptr;
          plVar11[1] = 0;
          *(int32_t *)(plVar11 + 2) = 0;
          *plVar11 = (int64_t)&memory_allocator_3480_ptr;
          plVar11[1] = (int64_t)(plVar11 + 3);
          *(int32_t *)(plVar11 + 2) = 0;
          *(int8_t *)(plVar11 + 3) = 0;
          *(int32_t *)(plVar11 + 2) = *(int32_t *)((int64_t)plVar11 + lVar19 + 0x10);
          puVar22 = *(void **)((int64_t)plVar11 + lVar19 + 8);
          puVar16 = &system_buffer_ptr;
          if (puVar22 != (void *)0x0) {
            puVar16 = puVar22;
          }
          plStack_290 = plVar11;
          strcpy_s(plVar11[1],0x40,puVar16);
          plVar11 = plVar11 + 0xb;
          plVar9 = plStack_298;
          param_1 = lStack_280;
        } while ((int64_t)plVar11 + lVar19 != lVar5);
      }
      plStack_290 = plVar11;
      plStack_258 = plVar11;
      FUN_18022ebe0(plVar9);
      lVar5 = (int64_t)plVar11 - (int64_t)plVar10 >> 0x3f;
      lVar19 = ((int64_t)plVar11 - (int64_t)plVar10) / 0x58 + lVar5;
      iVar25 = 0;
      if (lVar19 != lVar5) {
        uVar27 = 0;
        plVar10 = plVar10 + 2;
        do {
          plVar11 = (int64_t *)FUN_180240a60(plStack_288);
          iVar24 = 0;
          lVar26 = *plVar11;
          lVar18 = (plVar11[1] - lVar26) / 6 + (plVar11[1] - lVar26 >> 0x3f);
          lVar20 = lVar18 >> 4;
          lVar18 = lVar18 >> 0x3f;
          if (lVar20 != lVar18) {
            iVar4 = (int)*plVar10;
            lVar23 = 0;
            do {
              iVar17 = *(int *)(lVar23 + 0x10 + lVar26);
              if (iVar4 == iVar17) {
                if (iVar4 != 0) {
                  pbVar12 = (byte *)plVar10[-1];
                  lVar21 = *(int64_t *)(lVar23 + 8 + lVar26) - (int64_t)pbVar12;
                  do {
                    pbVar1 = pbVar12 + lVar21;
                    iVar17 = (uint)*pbVar12 - (uint)*pbVar1;
                    if (iVar17 != 0) break;
                    pbVar12 = pbVar12 + 1;
                  } while (*pbVar1 != 0);
                }
LAB_18022c20f:
                if (iVar17 == 0) {
                  FUN_1800b8370(plVar9,plStack_278 + uVar27 * 0xb);
                  break;
                }
              }
              else if (iVar4 == 0) goto LAB_18022c20f;
              iVar24 = iVar24 + 1;
              lVar23 = lVar23 + 0x60;
            } while ((uint64_t)(int64_t)iVar24 < (uint64_t)(lVar20 - lVar18));
          }
          iVar25 = iVar25 + 1;
          plVar10 = plVar10 + 0xb;
          uVar27 = (uint64_t)iVar25;
          plVar11 = plStack_290;
          param_1 = lStack_280;
        } while (uVar27 < (uint64_t)(lVar19 - lVar5));
      }
      lVar5 = *(int64_t *)(param_1 + 0x1e0);
      pcStack_2a8 = SystemTimer;
      DataStructureManager(apuStack_b8,8,0x10,&SUB_18005d5f0);
      lVar26 = 0;
      lVar19 = lVar26;
      do {
        plVar9 = *(int64_t **)(param_1 + 0xb8 + lVar19 * 8);
        if (plVar9 != (int64_t *)0x0) {
          plStack_298 = plVar9;
          (**(code **)(*plVar9 + 0x28))(plVar9);
        }
        plStack_298 = (int64_t *)apuStack_b8[lVar19];
        apuStack_b8[lVar19] = (int8_t *)plVar9;
        if (plStack_298 != (int64_t *)0x0) {
          (**(code **)(*plStack_298 + 0x38))();
        }
        lVar19 = lVar19 + 1;
      } while (lVar19 < 0x10);
      plVar10 = (int64_t *)(param_1 + 0xb8);
      plVar9 = plStack_288 + 0x388;
      lVar19 = 0x10;
      do {
        iVar25 = (int)*plVar9;
        lVar18 = lVar26;
        lVar20 = lVar26;
        do {
          if (((iVar25 != 0) && (iVar25 == *(int *)(lVar20 + 0x1c40 + lVar5))) && (iVar25 != 0)) {
            pcVar13 = (char *)plVar9[-1];
            lVar23 = *(int64_t *)(lVar20 + 0x1c38 + lVar5) - (int64_t)pcVar13;
            do {
              cVar2 = *pcVar13;
              cVar3 = pcVar13[lVar23];
              if (cVar2 != cVar3) break;
              pcVar13 = pcVar13 + 1;
            } while (cVar3 != '\0');
            if (cVar2 == cVar3) {
              plVar6 = (int64_t *)apuStack_b8[lVar18];
              if (plVar6 != (int64_t *)0x0) {
                plStack_298 = plVar6;
                (**(code **)(*plVar6 + 0x28))(plVar6);
              }
              plStack_298 = (int64_t *)*plVar10;
              *plVar10 = (int64_t)plVar6;
              if (plStack_298 != (int64_t *)0x0) {
                (**(code **)(*plStack_298 + 0x38))();
              }
              break;
            }
          }
          lVar18 = lVar18 + 1;
          lVar20 = lVar20 + 0x58;
        } while (lVar20 < 0x580);
        plVar10 = plVar10 + 1;
        plVar9 = plVar9 + 0xb;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      SystemDataValidator(apuStack_b8,8,0x10,SystemTimer);
      plVar6 = plStack_278;
      plVar9 = plStack_288;
      param_1 = lStack_280;
      for (plVar10 = plStack_278; plStack_288 = plVar9, lStack_280 = param_1, plVar10 != plVar11;
          plVar10 = plVar10 + 0xb) {
        (**(code **)*plVar10)(plVar10,0);
        plVar9 = plStack_288;
        param_1 = lStack_280;
      }
      if (plVar6 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(plVar6);
      }
    }
    goto LAB_18022c3ff;
  }
  puVar22 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    puVar22 = *(void **)(param_1 + 0x18);
  }
  puVar16 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x2d8) != (void *)0x0) {
    puVar16 = *(void **)(param_1 + 0x2d8);
  }
  FUN_180627020(&processed_var_7320_ptr,puVar16,puVar22);
  FUN_1800be9a0(core_system_data_config,&plStack_290,0);
  plVar9 = (int64_t *)plStack_290[0x3c];
  if (plStack_290 != (int64_t *)0x0) {
    (**(code **)(*plStack_290 + 0x38))();
  }
LAB_18022c460:
  if (plVar9 != (int64_t *)0x0) {
    plStack_298 = plVar9;
    (**(code **)(*plVar9 + 0x28))(plVar9);
  }
  plStack_298 = *(int64_t **)(param_1 + 0x1e0);
  *(int64_t **)(param_1 + 0x1e0) = plVar9;
  if (plStack_298 != (int64_t *)0x0) {
    (**(code **)(*plStack_298 + 0x38))();
  }
  FUN_18022d860(param_1);
  uVar14 = *(uint64_t *)(param_1 + 0x1e0);
  puStack_238 = &memory_allocator_3480_ptr;
  puStack_230 = auStack_220;
  auStack_220[0] = 0;
  uStack_228 = 0xf;
  strcpy_s(auStack_220,0x40,&system_data_ba58);
  uVar14 = SystemCore_LoggingSystem0(uVar14,&puStack_238,0);
  *(uint64_t *)(param_1 + 0x390) = uVar14;
  puStack_238 = &system_state_ptr;
  uVar14 = *(uint64_t *)(param_1 + 0x1e0);
  puStack_1d8 = &memory_allocator_3480_ptr;
  puStack_1d0 = auStack_1c0;
  auStack_1c0[0] = 0;
  uStack_1c8 = 9;
  strcpy_s(auStack_1c0,0x40,&processed_var_7256_ptr);
  uVar7 = *(uint64_t *)(param_1 + 0x1e0);
  puStack_238 = &memory_allocator_3480_ptr;
  puStack_230 = auStack_220;
  auStack_220[0] = 0;
  uStack_228 = 0x17;
  strcpy_s(auStack_220,0x40,&processed_var_7272_ptr);
  uVar27 = SystemCore_LoggingSystem0(uVar7,&puStack_238,0);
  uVar15 = SystemCore_LoggingSystem0(uVar14,&puStack_1d8,0);
  *(uint64_t *)(param_1 + 0x3a8) = uVar27 | uVar15;
  puStack_238 = &system_state_ptr;
  puStack_1d8 = &system_state_ptr;
  uVar14 = *(uint64_t *)(param_1 + 0x1e0);
  puStack_178 = &memory_allocator_3480_ptr;
  puStack_170 = auStack_160;
  auStack_160[0] = 0;
  uStack_168 = 0x10;
  strcpy_s(auStack_160,0x40,&system_data_d580);
  uVar14 = SystemCore_LoggingSystem0(uVar14,&puStack_178,0);
  *(uint64_t *)(param_1 + 0x3b0) = uVar14;
  puStack_178 = &system_state_ptr;
  uVar14 = *(uint64_t *)(param_1 + 0x1e0);
  puStack_118 = &memory_allocator_3480_ptr;
  puStack_110 = auStack_100;
  auStack_100[0] = 0;
  uStack_108 = 0x14;
  strcpy_s(auStack_100,0x40,&system_data_d5b8);
  uVar14 = SystemCore_LoggingSystem0(uVar14,&puStack_118,0);
  *(uint64_t *)(param_1 + 0x3b8) = uVar14;
  puStack_118 = &system_state_ptr;
  uVar14 = *(uint64_t *)(param_1 + 0x1e0);
  apuStack_b8[0] = &memory_allocator_3480_ptr;
  apuStack_b8[1] = auStack_a0;
  auStack_a0[0] = 0;
  uStack_a8 = 0x1d;
  strcpy_s(auStack_a0,0x40,&processed_var_7528_ptr);
  uVar14 = SystemCore_LoggingSystem0(uVar14,apuStack_b8,0);
  *(uint64_t *)(param_1 + 0x398) = uVar14;
  apuStack_b8[0] = &system_state_ptr;
  uVar8 = FUN_18022d6c0(param_1);
  *(uint64_t *)(param_1 + 0x3a0) = (uint64_t)uVar8;
  *(int16_t *)(param_1 + 0x3c0) = 0xffff;
  FUN_18022ce40(param_1);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_2c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



