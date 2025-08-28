#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part399.c - 10 个函数

// 函数: void FUN_18048cf00(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_18048cf00(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
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
  lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  plVar1 = (int64_t *)*param_5;
  *(int64_t **)(lVar2 + 0x20) = plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  *(uint64_t *)(lVar2 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  SystemNetworkHandler(lVar2,param_3,param_1,uVar3);
}



uint64_t *
FUN_18048cfd0(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4)

{
  code *pcVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = param_4;
  if (param_2 != param_3) {
    puVar2 = param_2 + 0x13;
    do {
      *param_4 = puVar2[-0x13];
      puVar2[-0x13] = 0;
      param_4[1] = puVar2[-0x12];
      puVar2[-0x12] = 0;
      param_4[2] = puVar2[-0x11];
      puVar2[-0x11] = 0;
      param_4[3] = puVar2[-0x10];
      puVar2[-0x10] = 0;
      param_4[4] = puVar2[-0xf];
      puVar2[-0xf] = 0;
      param_4[5] = puVar2[-0xe];
      puVar2[-0xe] = 0;
      param_4[6] = &system_state_ptr;
      param_4[7] = 0;
      *(int32_t *)(param_4 + 8) = 0;
      param_4[6] = &system_data_buffer_ptr;
      param_4[9] = 0;
      param_4[7] = 0;
      *(int32_t *)(param_4 + 8) = 0;
      *(int32_t *)(param_4 + 8) = *(int32_t *)(puVar2 + -0xb);
      param_4[7] = puVar2[-0xc];
      *(int32_t *)((int64_t)param_4 + 0x4c) = *(int32_t *)((int64_t)puVar2 + -0x4c);
      *(int32_t *)(param_4 + 9) = *(int32_t *)(puVar2 + -10);
      *(int32_t *)(puVar2 + -0xb) = 0;
      puVar2[-0xc] = 0;
      puVar2[-10] = 0;
      param_4[10] = &system_state_ptr;
      param_4[0xb] = 0;
      *(int32_t *)(param_4 + 0xc) = 0;
      param_4[10] = &system_data_buffer_ptr;
      param_4[0xd] = 0;
      param_4[0xb] = 0;
      *(int32_t *)(param_4 + 0xc) = 0;
      *(int32_t *)(param_4 + 0xc) = *(int32_t *)(puVar2 + -7);
      param_4[0xb] = puVar2[-8];
      *(int32_t *)((int64_t)param_4 + 0x6c) = *(int32_t *)((int64_t)puVar2 + -0x2c);
      *(int32_t *)(param_4 + 0xd) = *(int32_t *)(puVar2 + -6);
      *(int32_t *)(puVar2 + -7) = 0;
      puVar2[-8] = 0;
      puVar2[-6] = 0;
      *(int32_t *)(param_4 + 0xe) = *(int32_t *)(puVar2 + -5);
      *(int32_t *)((int64_t)param_4 + 0x74) = *(int32_t *)((int64_t)puVar2 + -0x24);
      *(int32_t *)(param_4 + 0xf) = *(int32_t *)(puVar2 + -4);
      *(int8_t *)((int64_t)param_4 + 0x7c) = *(int8_t *)((int64_t)puVar2 + -0x1c);
      *(int32_t *)(param_4 + 0x10) = *(int32_t *)(puVar2 + -3);
      param_4[0x13] = 0;
      param_4[0x14] = _guard_check_icall;
      puVar3 = param_4;
      if (param_4 + 0x11 != puVar2 + -2) {
        pcVar1 = (code *)*puVar2;
        if (pcVar1 != (code *)0x0) {
          (*pcVar1)(param_4 + 0x11,puVar2 + -2,2,param_4,uVar4);
          puVar3 = (uint64_t *)*param_1;
          pcVar1 = (code *)*puVar2;
        }
        param_4[0x13] = pcVar1;
        param_4[0x14] = puVar2[1];
        *puVar2 = 0;
        puVar2[1] = _guard_check_icall;
      }
      param_4 = puVar3 + 0x15;
      *param_1 = param_4;
      puVar3 = puVar2 + 2;
      puVar2 = puVar2 + 0x15;
    } while (puVar3 != param_3);
  }
  return param_1;
}



int64_t * FUN_18048d1c0(int64_t param_1,int64_t param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  code *pcVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t *plVar6;
  
  lVar5 = (param_2 - param_1) + SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(param_2 - param_1),8);
  lVar5 = (lVar5 >> 7) - (lVar5 >> 0x3f);
  if (0 < lVar5) {
    plVar6 = param_3 + 0x13;
    plVar4 = (int64_t *)(param_1 + 0x98);
    do {
      lVar1 = plVar4[-0x13];
      plVar4[-0x13] = 0;
      plVar2 = (int64_t *)*param_3;
      *param_3 = lVar1;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      lVar1 = plVar4[-0x12];
      plVar4[-0x12] = 0;
      plVar2 = (int64_t *)plVar6[-0x12];
      plVar6[-0x12] = lVar1;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      lVar1 = plVar4[-0x11];
      plVar4[-0x11] = 0;
      plVar2 = (int64_t *)plVar6[-0x11];
      plVar6[-0x11] = lVar1;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      lVar1 = plVar4[-0x10];
      plVar4[-0x10] = 0;
      plVar2 = (int64_t *)plVar6[-0x10];
      plVar6[-0x10] = lVar1;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      lVar1 = plVar4[-0xf];
      plVar4[-0xf] = 0;
      plVar2 = (int64_t *)plVar6[-0xf];
      plVar6[-0xf] = lVar1;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      lVar1 = plVar4[-0xe];
      plVar4[-0xe] = 0;
      plVar2 = (int64_t *)plVar6[-0xe];
      plVar6[-0xe] = lVar1;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      FUN_18005d190(plVar6 + -0xd,plVar4 + -0xd);
      FUN_18005d190(plVar6 + -9,plVar4 + -9);
      *(int *)(plVar6 + -5) = (int)plVar4[-5];
      *(int32_t *)((int64_t)plVar6 + -0x24) = *(int32_t *)((int64_t)plVar4 + -0x24);
      *(int *)(plVar6 + -4) = (int)plVar4[-4];
      *(int8_t *)((int64_t)plVar6 + -0x1c) = *(int8_t *)((int64_t)plVar4 + -0x1c);
      *(int *)(plVar6 + -3) = (int)plVar4[-3];
      plVar2 = plVar6 + -2;
      if (plVar2 != plVar4 + -2) {
        if ((code *)*plVar6 != (code *)0x0) {
          (*(code *)*plVar6)(plVar2,0,0);
        }
        pcVar3 = (code *)*plVar4;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(plVar2,plVar4 + -2);
          pcVar3 = (code *)*plVar4;
        }
        *plVar6 = (int64_t)pcVar3;
        plVar6[1] = plVar4[1];
        *plVar4 = 0;
        plVar4[1] = (int64_t)_guard_check_icall;
      }
      lVar5 = lVar5 + -1;
      param_3 = param_3 + 0x15;
      plVar4 = plVar4 + 0x15;
      plVar6 = plVar6 + 0x15;
    } while (0 < lVar5);
  }
  return param_3;
}



int64_t * FUN_18048d400(int64_t param_1,int64_t param_2,int64_t *param_3)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  code *pcVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t *plVar8;
  
  lVar7 = (param_2 - param_1) + SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(param_2 - param_1),8);
  lVar7 = (lVar7 >> 7) - (lVar7 >> 0x3f);
  if (0 < lVar7) {
    plVar6 = (int64_t *)(param_2 + 0x98);
    plVar8 = param_3 + 0x13;
    do {
      param_3 = param_3 + -0x15;
      plVar1 = plVar6 + -0x15;
      plVar2 = plVar8 + -0x15;
      lVar3 = plVar6[-0x28];
      plVar6[-0x28] = 0;
      plVar4 = (int64_t *)*param_3;
      *param_3 = lVar3;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x38))();
      }
      lVar3 = plVar6[-0x27];
      plVar6[-0x27] = 0;
      plVar4 = (int64_t *)plVar8[-0x27];
      plVar8[-0x27] = lVar3;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x38))();
      }
      lVar3 = plVar6[-0x26];
      plVar6[-0x26] = 0;
      plVar4 = (int64_t *)plVar8[-0x26];
      plVar8[-0x26] = lVar3;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x38))();
      }
      lVar3 = plVar6[-0x25];
      plVar6[-0x25] = 0;
      plVar4 = (int64_t *)plVar8[-0x25];
      plVar8[-0x25] = lVar3;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x38))();
      }
      lVar3 = plVar6[-0x24];
      plVar6[-0x24] = 0;
      plVar4 = (int64_t *)plVar8[-0x24];
      plVar8[-0x24] = lVar3;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x38))();
      }
      lVar3 = plVar6[-0x23];
      plVar6[-0x23] = 0;
      plVar4 = (int64_t *)plVar8[-0x23];
      plVar8[-0x23] = lVar3;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x38))();
      }
      FUN_18005d190(plVar8 + -0x22,plVar6 + -0x22);
      FUN_18005d190(plVar8 + -0x1e,plVar6 + -0x1e);
      *(int *)(plVar8 + -0x1a) = (int)plVar6[-0x1a];
      *(int32_t *)((int64_t)plVar8 + -0xcc) = *(int32_t *)((int64_t)plVar6 + -0xcc);
      *(int *)(plVar8 + -0x19) = (int)plVar6[-0x19];
      *(int8_t *)((int64_t)plVar8 + -0xc4) = *(int8_t *)((int64_t)plVar6 + -0xc4);
      *(int *)(plVar8 + -0x18) = (int)plVar6[-0x18];
      plVar4 = plVar8 + -0x17;
      if (plVar4 != plVar6 + -0x17) {
        if ((code *)*plVar2 != (code *)0x0) {
          (*(code *)*plVar2)(plVar4,0,0);
        }
        pcVar5 = (code *)*plVar1;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(plVar4,plVar6 + -0x17);
          pcVar5 = (code *)*plVar1;
        }
        *plVar2 = (int64_t)pcVar5;
        plVar8[-0x14] = plVar6[-0x14];
        *plVar1 = 0;
        plVar6[-0x14] = (int64_t)_guard_check_icall;
      }
      lVar7 = lVar7 + -1;
      plVar6 = plVar1;
      plVar8 = plVar2;
    } while (0 < lVar7);
  }
  return param_3;
}



uint64_t *
FUN_18048d650(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &memory_allocator_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0x14;
  strcpy_s(param_2[1],0x80,&system_data_c510,param_4,0,0xfffffffffffffffe);
  return param_2;
}



uint64_t *
FUN_18048d6d0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_8280_ptr;
  FUN_18048dac0();
  if ((int64_t *)param_1[0x20] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x20] + 0x38))();
  }
  if ((int64_t *)param_1[0x1f] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x1f] + 0x38))();
  }
  FUN_180244780(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x108,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18048d750(int64_t param_1,int64_t param_2)
void FUN_18048d750(int64_t param_1,int64_t param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int64_t *plVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int8_t uVar10;
  int32_t uVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  uint64_t *puVar14;
  void *puVar15;
  int64_t lVar16;
  byte bVar17;
  int8_t auStack_98 [32];
  int64_t *plStack_78;
  int64_t *plStack_70;
  uint64_t uStack_68;
  void *puStack_60;
  void *puStack_58;
  int32_t uStack_50;
  uint8_t auStack_48 [32];
  uint64_t uStack_28;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  if (*(int64_t *)(param_1 + 0xf0) != 0) {
    lVar12 = FUN_1800daa50();
    *(int32_t *)(lVar12 + 0x3588) = *(int32_t *)(param_1 + 0x40);
    *(int32_t *)(lVar12 + 0x358c) = *(int32_t *)(param_1 + 0x44);
    *(int *)(lVar12 + 0x3590) = (int)*(float *)(param_1 + 0x48);
    *(int *)(lVar12 + 0x3594) = (int)*(float *)(param_1 + 0x4c);
    bVar17 = 0;
    puStack_60 = &processed_var_672_ptr;
    puStack_58 = auStack_48;
    auStack_48[0] = 0;
    uStack_50 = 0x11;
    strcpy_s(auStack_48,0x20,&processed_var_8248_ptr);
    puVar15 = &system_buffer_ptr;
    if (puStack_58 != (void *)0x0) {
      puVar15 = puStack_58;
    }
    (**(code **)(*(int64_t *)(lVar12 + 0x3520) + 0x10))((int64_t *)(lVar12 + 0x3520),puVar15);
    puStack_60 = &system_state_ptr;
    plVar4 = *(int64_t **)(system_message_buffer + 0x121e0);
    if (plVar4 != (int64_t *)0x0) {
      plStack_78 = plVar4;
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    plStack_78 = *(int64_t **)(lVar12 + 0x9690);
    *(int64_t **)(lVar12 + 0x9690) = plVar4;
    if (plStack_78 != (int64_t *)0x0) {
      (**(code **)(*plStack_78 + 0x38))();
    }
    plStack_70 = *(int64_t **)(lVar12 + 0x96a8);
    *(uint64_t *)(lVar12 + 0x96a8) = 0;
    if (plStack_70 != (int64_t *)0x0) {
      (**(code **)(*plStack_70 + 0x38))();
    }
    lVar16 = 2;
    puVar8 = (uint64_t *)(system_operation_state + 0x16a0);
    puVar9 = (uint64_t *)(lVar12 + 0x30);
    do {
      puVar14 = puVar9;
      puVar13 = puVar8;
      uVar7 = puVar13[1];
      *puVar14 = *puVar13;
      puVar14[1] = uVar7;
      uVar7 = puVar13[3];
      puVar14[2] = puVar13[2];
      puVar14[3] = uVar7;
      uVar7 = puVar13[5];
      puVar14[4] = puVar13[4];
      puVar14[5] = uVar7;
      uVar7 = puVar13[7];
      puVar14[6] = puVar13[6];
      puVar14[7] = uVar7;
      uVar7 = puVar13[9];
      puVar14[8] = puVar13[8];
      puVar14[9] = uVar7;
      uVar7 = puVar13[0xb];
      puVar14[10] = puVar13[10];
      puVar14[0xb] = uVar7;
      uVar7 = puVar13[0xd];
      puVar14[0xc] = puVar13[0xc];
      puVar14[0xd] = uVar7;
      uVar7 = puVar13[0xf];
      puVar14[0xe] = puVar13[0xe];
      puVar14[0xf] = uVar7;
      lVar16 = lVar16 + -1;
      puVar8 = puVar13 + 0x10;
      puVar9 = puVar14 + 0x10;
    } while (lVar16 != 0);
    uVar7 = puVar13[0x11];
    puVar14[0x10] = puVar13[0x10];
    puVar14[0x11] = uVar7;
    uVar7 = puVar13[0x13];
    puVar14[0x12] = puVar13[0x12];
    puVar14[0x13] = uVar7;
    uVar11 = *(int32_t *)((int64_t)puVar13 + 0xa4);
    uVar5 = *(int32_t *)(puVar13 + 0x15);
    uVar6 = *(int32_t *)((int64_t)puVar13 + 0xac);
    *(int32_t *)(puVar14 + 0x14) = *(int32_t *)(puVar13 + 0x14);
    *(int32_t *)((int64_t)puVar14 + 0xa4) = uVar11;
    *(int32_t *)(puVar14 + 0x15) = uVar5;
    *(int32_t *)((int64_t)puVar14 + 0xac) = uVar6;
    uVar11 = *(int32_t *)((int64_t)puVar13 + 0xb4);
    uVar5 = *(int32_t *)(puVar13 + 0x17);
    uVar6 = *(int32_t *)((int64_t)puVar13 + 0xbc);
    *(int32_t *)(puVar14 + 0x16) = *(int32_t *)(puVar13 + 0x16);
    *(int32_t *)((int64_t)puVar14 + 0xb4) = uVar11;
    *(int32_t *)(puVar14 + 0x17) = uVar5;
    *(int32_t *)((int64_t)puVar14 + 0xbc) = uVar6;
    FUN_18024b8d0(lVar12);
    *(int8_t *)(lVar12 + 0x1c60) = 1;
    uVar10 = func_0x0001800e2bf0(system_parameter_buffer,lVar12);
    *(int8_t *)(lVar12 + 0x1c61) = uVar10;
    if (*(int *)(lVar12 + 8) != -1) {
      bVar17 = (byte)*(int32_t *)(lVar12 + 0x18);
    }
    *(byte *)(lVar12 + 0x1c62) = bVar17 & 1;
    uVar11 = func_0x00018024c420(lVar12);
    *(int32_t *)(lVar12 + 0x1c64) = uVar11;
    uVar11 = *(int32_t *)(param_1 + 0x20);
    uVar5 = *(int32_t *)(param_1 + 0x24);
    uVar6 = *(int32_t *)(param_1 + 0x28);
    *(int32_t *)(lVar12 + 0x11c18) = *(int32_t *)(param_1 + 0x1c);
    *(int32_t *)(lVar12 + 0x11c1c) = uVar11;
    *(int32_t *)(lVar12 + 0x11c20) = uVar5;
    *(int32_t *)(lVar12 + 0x11c24) = uVar6;
    *(uint64_t *)(lVar12 + 0x11c28) = *(uint64_t *)(param_1 + 0x2c);
    *(int16_t *)(lVar12 + 0x11c36) = 0x100;
    *(int8_t *)(lVar12 + 0x9a31) = 0;
    uVar3 = *(uint *)(param_1 + 0xcc);
    *(uint *)(lVar12 + 4) = uVar3;
    if (*(char *)(param_1 + 0xdc) != '\0') {
      *(uint *)(lVar12 + 4) = uVar3 | 0x40000;
    }
    *(int32_t *)(lVar12 + 0x11cf0) = 0xff000000;
    *(int32_t *)(lVar12 + 0x9a2c) = *(int32_t *)(param_1 + 0xd8);
    (**(code **)(**(int64_t **)(param_1 + 0xf0) + 0x10))(*(int64_t **)(param_1 + 0xf0),lVar12);
    LOCK();
    piVar1 = (int *)(param_2 + 0x11a48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *(int64_t *)(param_2 + 0x9a48 + (int64_t)iVar2 * 8) = lVar12;
    uVar11 = *(int32_t *)(param_2 + 0x9a38);
    uVar5 = *(int32_t *)(param_2 + 0x9a3c);
    uVar6 = *(int32_t *)(param_2 + 0x9a40);
    *(int32_t *)(lVar12 + 0x9a34) = *(int32_t *)(param_2 + 0x9a34);
    *(int32_t *)(lVar12 + 0x9a38) = uVar11;
    *(int32_t *)(lVar12 + 0x9a3c) = uVar5;
    *(int32_t *)(lVar12 + 0x9a40) = uVar6;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_98);
}



uint64_t *
FUN_18048da30(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  CoreEngineDataBufferProcessor(param_2,0x14,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (uint64_t *)param_2[1];
  *puVar1 = 0x6f656469566c6772;
  puVar1[1] = 0x5f726579616c705f;
  *(int32_t *)(puVar1 + 2) = 0x77656976;
  *(int8_t *)((int64_t)puVar1 + 0x14) = 0;
  *(int32_t *)(param_2 + 2) = 0x14;
  return param_2;
}





// 函数: void FUN_18048dac0(int64_t param_1)
void FUN_18048dac0(int64_t param_1)

{
  uint64_t *puVar1;
  int64_t lVar2;
  
  if (*(int64_t **)(param_1 + 0xf0) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0xf0) + 0x28))();
    puVar1 = *(uint64_t **)(param_1 + 0xf0);
    if (puVar1 != (uint64_t *)0x0) {
      lVar2 = __RTCastToVoid(puVar1);
      (**(code **)*puVar1)(puVar1,0);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar2);
      }
    }
    *(uint64_t *)(param_1 + 0xf0) = 0;
  }
  return;
}





// 函数: void FUN_18048dad8(void)
void FUN_18048dad8(void)

{
  uint64_t *puVar1;
  int64_t in_RAX;
  int64_t lVar2;
  int64_t unaff_RBX;
  
  (**(code **)(in_RAX + 0x28))();
  puVar1 = *(uint64_t **)(unaff_RBX + 0xf0);
  if (puVar1 != (uint64_t *)0x0) {
    lVar2 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar2);
    }
  }
  *(uint64_t *)(unaff_RBX + 0xf0) = 0;
  return;
}





// 函数: void FUN_18048daef(void)
void FUN_18048daef(void)

{
  int64_t lVar1;
  int64_t unaff_RBX;
  uint64_t *unaff_RDI;
  
  lVar1 = __RTCastToVoid();
  (**(code **)*unaff_RDI)();
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar1);
  }
  *(uint64_t *)(unaff_RBX + 0xf0) = 0;
  return;
}





// 函数: void FUN_18048db19(void)
void FUN_18048db19(void)

{
  int64_t unaff_RBX;
  
  *(uint64_t *)(unaff_RBX + 0xf0) = 0;
  return;
}





// 函数: void FUN_18048db29(void)
void FUN_18048db29(void)

{
  return;
}





// 函数: void FUN_18048db30(int64_t *param_1,uint64_t *param_2)
void FUN_18048db30(int64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  
  uVar4 = param_2[1];
  *(uint64_t *)((int64_t)param_1 + 0xc) = *param_2;
  *(uint64_t *)((int64_t)param_1 + 0x14) = uVar4;
  uVar4 = param_2[3];
  *(uint64_t *)((int64_t)param_1 + 0x1c) = param_2[2];
  *(uint64_t *)((int64_t)param_1 + 0x24) = uVar4;
  uVar4 = param_2[5];
  *(uint64_t *)((int64_t)param_1 + 0x2c) = param_2[4];
  *(uint64_t *)((int64_t)param_1 + 0x34) = uVar4;
  uVar4 = param_2[7];
  *(uint64_t *)((int64_t)param_1 + 0x3c) = param_2[6];
  *(uint64_t *)((int64_t)param_1 + 0x44) = uVar4;
  *(int32_t *)(param_1 + 9) = 0x3f800000;
  *(int32_t *)(param_1 + 3) = 0;
  *(int32_t *)(param_1 + 5) = 0;
  *(int32_t *)(param_1 + 7) = 0;
  puVar1 = (uint64_t *)param_1[10];
  uVar4 = *(uint64_t *)((int64_t)param_1 + 0x14);
  *puVar1 = *(uint64_t *)((int64_t)param_1 + 0xc);
  puVar1[1] = uVar4;
  lVar2 = param_1[10];
  uVar4 = *(uint64_t *)((int64_t)param_1 + 0x24);
  *(uint64_t *)(lVar2 + 0x10) = *(uint64_t *)((int64_t)param_1 + 0x1c);
  *(uint64_t *)(lVar2 + 0x18) = uVar4;
  lVar2 = param_1[10];
  lVar5 = param_1[6];
  uVar3 = *(int32_t *)((int64_t)param_1 + 0x34);
  lVar6 = param_1[7];
  *(int32_t *)(lVar2 + 0x20) = *(int32_t *)((int64_t)param_1 + 0x2c);
  *(int *)(lVar2 + 0x24) = (int)lVar5;
  *(int32_t *)(lVar2 + 0x28) = uVar3;
  *(int *)(lVar2 + 0x2c) = (int)lVar6;
  lVar2 = param_1[10];
  lVar5 = param_1[8];
  uVar3 = *(int32_t *)((int64_t)param_1 + 0x44);
  lVar6 = param_1[9];
  *(int32_t *)(lVar2 + 0x30) = *(int32_t *)((int64_t)param_1 + 0x3c);
  *(int *)(lVar2 + 0x34) = (int)lVar5;
  *(int32_t *)(lVar2 + 0x38) = uVar3;
  *(int *)(lVar2 + 0x3c) = (int)lVar6;
  FUN_18063a7b0(*(int64_t *)(*param_1 + 0xb8) + 0xf8,(int64_t)param_1 + 0xc,&fStack_88,&fStack_78)
  ;
  fVar9 = (fStack_78 - fStack_88) * 0.5;
  fVar8 = (fStack_74 - fStack_84) * 0.5;
  fVar7 = (fStack_70 - fStack_80) * 0.5;
  *(float *)(param_1 + 0xe) = (fStack_78 + fStack_88) * 0.5;
  *(float *)((int64_t)param_1 + 0x74) = (fStack_74 + fStack_84) * 0.5;
  *(float *)(param_1 + 0xf) = (fStack_80 + fStack_70) * 0.5;
  *(int32_t *)((int64_t)param_1 + 0x7c) = 0x7f7fffff;
  *(float *)(param_1 + 0x10) = fVar9;
  *(float *)((int64_t)param_1 + 0x84) = fVar8;
  *(float *)(param_1 + 0x11) = fVar7;
  *(int32_t *)((int64_t)param_1 + 0x8c) = 0x7f7fffff;
  *(float *)(param_1 + 0x15) = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7);
  *(bool *)((int64_t)param_1 + 0x94) =
       0.0 <= (*(float *)((int64_t)param_1 + 0x14) * *(float *)((int64_t)param_1 + 0x1c) -
              *(float *)((int64_t)param_1 + 0xc) * *(float *)((int64_t)param_1 + 0x24)) *
              *(float *)(param_1 + 6) +
              (*(float *)(param_1 + 2) * *(float *)((int64_t)param_1 + 0x24) -
              *(float *)((int64_t)param_1 + 0x14) * *(float *)(param_1 + 4)) *
              *(float *)((int64_t)param_1 + 0x2c) +
              (*(float *)((int64_t)param_1 + 0xc) * *(float *)(param_1 + 4) -
              *(float *)(param_1 + 2) * *(float *)((int64_t)param_1 + 0x1c)) *
              *(float *)((int64_t)param_1 + 0x34);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18048dd80(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)

{
  uint64_t uVar1;
  
  *param_1 = &processed_var_9360_ptr;
  *param_1 = &processed_var_8632_ptr;
  _Mtx_init_in_situ(param_1 + 1,2,param_3,param_4,0xfffffffffffffffe);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(int32_t *)(param_1 + 0xf) = 3;
  *(int32_t *)((int64_t)param_1 + 0x84) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(int32_t *)(param_1 + 0x44) = 0;
  *(int32_t *)(param_1 + 0x4a) = 0;
  *(int8_t *)(param_1 + 0x4d) = 1;
  *(int8_t *)(param_1 + 0x10) = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,0x10,3);
  param_1[0x39] = uVar1;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,0x10,3);
  param_1[0x3a] = uVar1;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,0x10,3);
  param_1[0x3b] = uVar1;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,0x10,3);
  param_1[0x3c] = uVar1;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,0x10,3);
  param_1[0x3d] = uVar1;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,0x10,3);
  param_1[0x3e] = uVar1;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3840,0x40,3);
  param_1[0x4b] = uVar1;
  param_1[0x4c] = 0;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe1000,0x20,0x1d);
  param_1[0x3f] = uVar1;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  return param_1;
}



uint64_t FUN_18048dfb0(uint64_t param_1,uint64_t param_2)

{
  FUN_18048dff0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x2c0);
  }
  return param_1;
}





// 函数: void FUN_18048dff0(uint64_t *param_1)
void FUN_18048dff0(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t lVar4;
  
  *param_1 = &processed_var_8632_ptr;
  if (param_1[0x11] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lVar4 = 0;
  param_1[0x11] = 0;
  if (param_1[0x12] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x12] = 0;
  if (param_1[0x13] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x13] = 0;
  if (param_1[0x45] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x45] = 0;
  if (param_1[0x46] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x46] = 0;
  if (param_1[0x35] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x35] = 0;
  if (param_1[0x36] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x36] = 0;
  if (param_1[0x39] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x39] = 0;
  if (param_1[0x3a] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x3a] = 0;
  if (param_1[0x3b] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x3b] = 0;
  if (param_1[0x3c] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x3c] = 0;
  if (param_1[0x3d] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x3d] = 0;
  if (param_1[0x3e] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x3e] = 0;
  if (param_1[0x4b] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x4b] = 0;
  if (param_1[0x4c] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x4c] = 0;
  if (param_1[0x3f] == 0) {
    param_1[0x3f] = 0;
    if (param_1[0x40] != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    param_1[0x40] = 0;
    plVar1 = param_1 + 0xc;
    iVar3 = (int)(param_1[0xd] - *plVar1 >> 3);
    if (0 < iVar3) {
      do {
        plVar2 = *(int64_t **)(*plVar1 + lVar4 * 8);
        if (plVar2 != (int64_t *)0x0) {
          FUN_180490c90(plVar2[0x16]);
          plVar2[0x16] = 0;
          if (plVar2[10] != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          plVar2[10] = 0;
          if (plVar2[0xb] == 0) {
            plVar2[0xb] = 0;
            if (plVar2[0xc] == 0) {
              plVar2[0xc] = 0;
              if ((int64_t *)*plVar2 != (int64_t *)0x0) {
                (**(code **)(*(int64_t *)*plVar2 + 0x38))();
              }
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner(plVar2);
            }
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *(uint64_t *)(*plVar1 + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
    if (*plVar1 == 0) {
      if ((int64_t *)param_1[0xb] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_1[0xb] + 0x38))();
      }
      _Mtx_destroy_in_situ();
      *param_1 = &processed_var_9360_ptr;
      return;
    }
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18048e2d0(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  uint64_t uStackX_18;
  int64_t **pplStackX_20;
  
  plStackX_10 = param_2;
  uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xd0,8,3,0xfffffffffffffffe);
  uVar3 = FUN_180490790(uVar3);
  pplStackX_20 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_2;
  uStackX_18 = uVar3;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  FUN_180490840(uVar3,&plStackX_8);
  *(int8_t *)(param_1 + 0x80) = 1;
  lVar1 = param_1 + 8;
  pplStackX_20 = (int64_t **)lVar1;
  iVar2 = _Mtx_lock(lVar1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  SystemInitializer(param_1 + 0x60,&uStackX_18);
  iVar2 = _Mtx_unlock(lVar1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  return uVar3;
}





// 函数: void FUN_18048e3b0(int64_t param_1,int64_t param_2)
void FUN_18048e3b0(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int iVar4;
  
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z();
  }
  lVar1 = *(int64_t *)(param_1 + 0x60);
  iVar4 = 0;
  iVar2 = (int)(*(int64_t *)(param_1 + 0x68) - lVar1 >> 3);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      if (param_2 == *(int64_t *)(lVar1 + lVar3 * 8)) {
        lVar3 = (int64_t)iVar4 * 8;
        FUN_1804903f0(*(uint64_t *)(lVar3 + lVar1));
        *(uint64_t *)(lVar3 + *(int64_t *)(param_1 + 0x60)) = 0;
        *(uint64_t *)(*(int64_t *)(param_1 + 0x60) + lVar3) =
             *(uint64_t *)(*(int64_t *)(param_1 + 0x60) + ((int64_t)iVar2 + -1) * 8);
        FUN_180057340(param_1 + 0x60);
        *(int8_t *)(param_1 + 0x80) = 1;
        break;
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  iVar2 = _Mtx_unlock(param_1 + 8);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



