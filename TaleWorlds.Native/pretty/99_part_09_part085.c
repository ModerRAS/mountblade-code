#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part085.c - 4 个函数

// 函数: void FUN_1805f5c41(void)
void FUN_1805f5c41(void)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t unaff_RBX;
  int32_t unaff_R15D;
  uint64_t uStackX_20;
  uint64_t in_stack_00000028;
  uint64_t in_stack_00000050;
  
  uVar3 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0xe0,*(int8_t *)(unaff_RBX + 0x50));
  *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x48) + 8) = uVar3;
  puVar1 = *(uint64_t **)(unaff_RBX + 0x30);
  *puVar1 = uStackX_20;
  puVar1[1] = in_stack_00000028;
  puVar1[2] = in_stack_00000050;
  *(int32_t *)(puVar1 + 3) = unaff_R15D;
  plVar4 = (int64_t *)(*(int64_t *)(unaff_RBX + 0x48) + 8);
  *(int64_t **)(unaff_RBX + 0x48) = plVar4;
  lVar2 = *plVar4;
  *(int64_t *)(unaff_RBX + 0x38) = lVar2;
  *(int64_t *)(unaff_RBX + 0x40) = lVar2 + 0xe0;
  *(int64_t *)(unaff_RBX + 0x30) = lVar2;
  return;
}



uint64_t FUN_1805f5cb0(int64_t param_1,uint64_t *param_2)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    if ((uint64_t)
        ((*(int64_t *)(param_1 + 0x30) - *(int64_t *)(param_1 + 0x38)) -
        *(int64_t *)(param_1 + 0x20)) < 0x8000000000000001) {
      return 0;
    }
    LOCK();
    plVar1 = (int64_t *)(param_1 + 0x30);
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (0x8000000000000000 <
        (uint64_t)((lVar4 - *(int64_t *)(param_1 + 0x20)) - *(int64_t *)(param_1 + 0x38))) {
      LOCK();
      puVar2 = (uint64_t *)(param_1 + 0x28);
      uVar5 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      plVar1 = *(int64_t **)(param_1 + 0x60);
      lVar10 = *(int64_t *)
                (plVar1[3] +
                (((uVar5 & 0xffffffffffffffe0) - **(int64_t **)(plVar1[3] + plVar1[1] * 8) >> 5) +
                 plVar1[1] & *plVar1 - 1U) * 8);
      lVar11 = (uint64_t)((uint)uVar5 & 0x1f) * 0x1c;
      lVar4 = *(int64_t *)(lVar10 + 8);
      puVar3 = (int32_t *)(lVar11 + lVar4);
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      uVar8 = puVar3[3];
      *(int32_t *)param_2 = *puVar3;
      *(int32_t *)((int64_t)param_2 + 4) = uVar6;
      *(int32_t *)(param_2 + 1) = uVar7;
      *(int32_t *)((int64_t)param_2 + 0xc) = uVar8;
      param_2[2] = *(uint64_t *)(lVar11 + 0x10 + lVar4);
      *(int32_t *)(param_2 + 3) = *(int32_t *)(lVar11 + 0x18 + lVar4);
      LOCK();
      plVar1 = (int64_t *)(lVar4 + 0x388);
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (lVar4 == 0x1f) {
        *(uint64_t *)(lVar10 + 8) = 0;
        func_0x0001805f5a70(*(uint64_t *)(param_1 + 0x50));
      }
      return 1;
    }
  }
  else {
    if ((uint64_t)
        ((*(int64_t *)(param_1 + 0x30) - *(int64_t *)(param_1 + 0x38)) -
        *(int64_t *)(param_1 + 0x20)) < 0x8000000000000001) {
      return 0;
    }
    LOCK();
    plVar1 = (int64_t *)(param_1 + 0x30);
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (0x8000000000000000 <
        (uint64_t)((lVar4 - *(int64_t *)(param_1 + 0x20)) - *(int64_t *)(param_1 + 0x38))) {
      LOCK();
      puVar2 = (uint64_t *)(param_1 + 0x28);
      uVar5 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      plVar1 = *(int64_t **)(param_1 + 0x58);
      uVar12 = (uint64_t)((uint)uVar5 & 0x1f);
      lVar10 = uVar12 * 0x1c;
      lVar4 = *(int64_t *)
               (plVar1[2] + 8 +
               (((uVar5 & 0xffffffffffffffe0) - *(int64_t *)(plVar1[2] + plVar1[1] * 0x10) >> 5) +
                plVar1[1] & *plVar1 - 1U) * 0x10);
      uVar9 = ((uint64_t *)(lVar10 + lVar4))[1];
      *param_2 = *(uint64_t *)(lVar10 + lVar4);
      param_2[1] = uVar9;
      param_2[2] = *(uint64_t *)(lVar10 + 0x10 + lVar4);
      *(int32_t *)(param_2 + 3) = *(int32_t *)(lVar10 + 0x18 + lVar4);
      *(int8_t *)((lVar4 - uVar12) + 0x3af) = 1;
      return 1;
    }
  }
  LOCK();
  *(int64_t *)(param_1 + 0x38) = *(int64_t *)(param_1 + 0x38) + 1;
  UNLOCK();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1805f5e60(int64_t param_1)

{
  uint64_t *puVar1;
  uint *puVar2;
  uint uVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  bool bVar10;
  
  if (*(uint64_t *)(param_1 + 0x10) < *(uint64_t *)(param_1 + 0x20)) {
    LOCK();
    puVar1 = (uint64_t *)(param_1 + 0x10);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar4 < *(uint64_t *)(param_1 + 0x20)) &&
       (lVar6 = uVar4 * 0x3c8 + *(int64_t *)(param_1 + 0x18), lVar6 != 0)) {
      return lVar6;
    }
  }
  lVar6 = *(int64_t *)(param_1 + 0x28);
LAB_1805f5e97:
  do {
    lVar9 = lVar6;
    if (lVar9 == 0) {
LAB_1805f5f36:
      lVar6 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x3c8,10);
      if (lVar6 == 0) {
        return 0;
      }
      *(uint64_t *)(lVar6 + 0x380) = 0;
      *(uint64_t *)(lVar6 + 0x388) = 0;
      *(int32_t *)(lVar6 + 0x3b0) = 0;
      *(uint64_t *)(lVar6 + 0x3b8) = 0;
      *(int16_t *)(lVar6 + 0x3c0) = 0x100;
      return lVar6;
    }
    puVar2 = (uint *)(lVar9 + 0x3b0);
    uVar5 = *puVar2;
    if ((uVar5 & 0x7fffffff) == 0) {
LAB_1805f5f17:
      lVar6 = *(int64_t *)(param_1 + 0x28);
      goto LAB_1805f5e97;
    }
    LOCK();
    uVar3 = *puVar2;
    if (uVar5 == uVar3) {
      *puVar2 = uVar5 + 1;
    }
    UNLOCK();
    if (uVar5 != uVar3) goto LAB_1805f5f17;
    LOCK();
    lVar6 = *(int64_t *)(param_1 + 0x28);
    bVar10 = lVar9 == lVar6;
    if (bVar10) {
      *(int64_t *)(param_1 + 0x28) = *(int64_t *)(lVar9 + 0x3b8);
      lVar6 = lVar9;
    }
    UNLOCK();
    if (bVar10) {
      LOCK();
      *puVar2 = *puVar2 - 2;
      UNLOCK();
      if (lVar9 != 0) {
        return lVar9;
      }
      goto LAB_1805f5f36;
    }
    LOCK();
    uVar5 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (uVar5 == 0x80000001) {
      lVar8 = *(int64_t *)(param_1 + 0x28);
      do {
        *(int64_t *)(lVar9 + 0x3b8) = lVar8;
        *puVar2 = 1;
        LOCK();
        lVar7 = *(int64_t *)(param_1 + 0x28);
        bVar10 = lVar8 == lVar7;
        if (bVar10) {
          *(int64_t *)(param_1 + 0x28) = lVar9;
          lVar7 = lVar8;
        }
        UNLOCK();
        if (bVar10) break;
        LOCK();
        uVar5 = *puVar2;
        *puVar2 = *puVar2 + 0x7fffffff;
        UNLOCK();
        lVar8 = lVar7;
      } while (uVar5 == 1);
    }
  } while( true );
}



uint64_t * FUN_1805f5fa0(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &processed_var_5880_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}



uint64_t FUN_1805f5fe0(uint64_t param_1,uint64_t param_2)

{
  FUN_1805f6020();
  if ((param_2 & 1) != 0) {
    free(param_1,0x118);
  }
  return param_1;
}






// 函数: void FUN_1805f6020(uint64_t *param_1)
void FUN_1805f6020(uint64_t *param_1)

{
  int64_t *plVar1;
  
  *param_1 = &processed_var_5896_ptr;
  plVar1 = (int64_t *)param_1[0x1c];
  param_1[0x1c] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (int64_t *)param_1[0x1d];
  param_1[0x1d] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (int64_t *)param_1[0x1e];
  param_1[0x1e] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (int64_t *)param_1[0x1f];
  param_1[0x1f] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if ((int64_t *)param_1[0x20] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x20] + 0x38))();
  }
  if ((int64_t *)param_1[0x1f] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x1f] + 0x38))();
  }
  if ((int64_t *)param_1[0x1e] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x1e] + 0x38))();
  }
  if ((int64_t *)param_1[0x1d] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x1d] + 0x38))();
  }
  if ((int64_t *)param_1[0x1c] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x1c] + 0x38))();
  }
  *param_1 = &memory_allocator_3280_ptr;
  _Mtx_destroy_in_situ();
  _Cnd_destroy_in_situ(param_1 + 4);
  *param_1 = &ui_system_data_1000_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805f6150(int64_t param_1)
void FUN_1805f6150(int64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  int64_t lVar10;
  int8_t uVar11;
  int iVar12;
  int8_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  int32_t uVar19;
  int32_t uVar20;
  int32_t uVar21;
  int32_t uVar22;
  int32_t uVar23;
  int32_t uVar24;
  int32_t uVar25;
  int32_t uVar26;
  int32_t uVar27;
  int32_t uVar28;
  int32_t uVar29;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  int64_t *plStack_e8;
  int64_t *plStack_e0;
  int64_t **pplStack_d8;
  int64_t **pplStack_d0;
  uint64_t uStack_c8;
  int64_t *plStack_c0;
  int64_t *plStack_b8;
  int64_t *plStack_b0;
  int64_t *plStack_a8;
  int64_t **pplStack_a0;
  int64_t **pplStack_98;
  int64_t **pplStack_90;
  
  uStack_c8 = 0xfffffffffffffffe;
  if ((*(char *)(param_1 + 0xc0) != '\0') &&
     ((*(int64_t *)(*(int64_t *)(param_1 + 0x100) + 0xd8) != 0 ||
      (*(char *)(param_1 + 0x112) == '\0')))) {
    plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0x100) + 0x100);
    plStack_c0 = plVar1;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = *(int64_t **)(*(int64_t *)(param_1 + 0x100) + 0x108);
    plStack_b8 = plVar2;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    plVar3 = *(int64_t **)(*(int64_t *)(param_1 + 0x100) + 0x110);
    plStack_b0 = plVar3;
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plVar4 = *(int64_t **)(*(int64_t *)(param_1 + 0x100) + 0x118);
    plStack_a8 = plVar4;
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    plVar7 = plStackX_10;
    plVar9 = plStackX_8;
    uVar11 = 0;
    uVar13 = 0;
    plStackX_8 = (int64_t *)((uint64_t)plStackX_8 & 0xffffffffffffff00);
    plStackX_10 = (int64_t *)((uint64_t)plStackX_10 & 0xffffffffffffff00);
    uVar26 = 0x3f800000;
    uVar27 = 0x3f800000;
    uVar28 = 0x3f800000;
    uVar29 = 0x7f7fffff;
    uVar14 = uVar26;
    uVar15 = uVar27;
    uVar16 = uVar28;
    uVar17 = uVar29;
    if ((plVar1 != (int64_t *)0x0) && (lVar5 = *(int64_t *)plVar1[7], lVar5 != 0)) {
      uVar11 = *(int8_t *)(lVar5 + 0xf8);
      uVar14 = *(int32_t *)(lVar5 + 0x1a0);
      uVar15 = *(int32_t *)(lVar5 + 0x1a4);
      uVar16 = *(int32_t *)(lVar5 + 0x1a8);
      uVar17 = *(int32_t *)(lVar5 + 0x1ac);
    }
    uVar18 = uVar26;
    uVar19 = uVar27;
    uVar20 = uVar28;
    uVar21 = uVar29;
    if ((plVar2 != (int64_t *)0x0) && (lVar5 = *(int64_t *)plVar2[7], lVar5 != 0)) {
      uVar13 = *(int8_t *)(lVar5 + 0xf8);
      uVar18 = *(int32_t *)(lVar5 + 0x1a0);
      uVar19 = *(int32_t *)(lVar5 + 0x1a4);
      uVar20 = *(int32_t *)(lVar5 + 0x1a8);
      uVar21 = *(int32_t *)(lVar5 + 0x1ac);
    }
    uVar22 = uVar26;
    uVar23 = uVar27;
    uVar24 = uVar28;
    uVar25 = uVar29;
    if ((plVar3 != (int64_t *)0x0) && (lVar5 = *(int64_t *)plVar3[7], lVar5 != 0)) {
      plStackX_8._1_7_ = SUB87(plVar9,1);
      plStackX_8 = (int64_t *)CONCAT71(plStackX_8._1_7_,*(int8_t *)(lVar5 + 0xf8));
      uVar22 = *(int32_t *)(lVar5 + 0x1a0);
      uVar23 = *(int32_t *)(lVar5 + 0x1a4);
      uVar24 = *(int32_t *)(lVar5 + 0x1a8);
      uVar25 = *(int32_t *)(lVar5 + 0x1ac);
    }
    if ((plVar4 != (int64_t *)0x0) && (lVar5 = *(int64_t *)plVar4[7], lVar5 != 0)) {
      plStackX_10 = (int64_t *)CONCAT71(SUB87(plVar7,1),*(int8_t *)(lVar5 + 0xf8));
      uVar26 = *(int32_t *)(lVar5 + 0x1a0);
      uVar27 = *(int32_t *)(lVar5 + 0x1a4);
      uVar28 = *(int32_t *)(lVar5 + 0x1a8);
      uVar29 = *(int32_t *)(lVar5 + 0x1ac);
    }
    *(int8_t *)(param_1 + 0xc1) = 1;
    FUN_1804bb5b0(0x180c95de0,param_1 + 0xe0,param_1 + 0xe8,param_1 + 0xf0,param_1 + 0xf8);
    if (*(int64_t *)(param_1 + 0xe0) != 0) {
      func_0x0001802827f0(*(int64_t *)(param_1 + 0xe0),uVar11);
      lVar5 = *(int64_t *)(param_1 + 0xe0);
      iVar12 = 0;
      if (*(int64_t *)(lVar5 + 0x40) - *(int64_t *)(lVar5 + 0x38) >> 4 != 0) {
        lVar10 = 0;
        do {
          lVar6 = *(int64_t *)(lVar10 + *(int64_t *)(lVar5 + 0x38));
          *(int32_t *)(lVar6 + 0x1a0) = uVar14;
          *(int32_t *)(lVar6 + 0x1a4) = uVar15;
          *(int32_t *)(lVar6 + 0x1a8) = uVar16;
          *(int32_t *)(lVar6 + 0x1ac) = uVar17;
          iVar12 = iVar12 + 1;
          lVar10 = lVar10 + 0x10;
        } while ((uint64_t)(int64_t)iVar12 <
                 (uint64_t)(*(int64_t *)(lVar5 + 0x40) - *(int64_t *)(lVar5 + 0x38) >> 4));
      }
    }
    if (*(int64_t *)(param_1 + 0xe8) != 0) {
      func_0x0001802827f0(*(int64_t *)(param_1 + 0xe8),uVar13);
      lVar5 = *(int64_t *)(param_1 + 0xe8);
      iVar12 = 0;
      if (*(int64_t *)(lVar5 + 0x40) - *(int64_t *)(lVar5 + 0x38) >> 4 != 0) {
        lVar10 = 0;
        do {
          lVar6 = *(int64_t *)(lVar10 + *(int64_t *)(lVar5 + 0x38));
          *(int32_t *)(lVar6 + 0x1a0) = uVar18;
          *(int32_t *)(lVar6 + 0x1a4) = uVar19;
          *(int32_t *)(lVar6 + 0x1a8) = uVar20;
          *(int32_t *)(lVar6 + 0x1ac) = uVar21;
          iVar12 = iVar12 + 1;
          lVar10 = lVar10 + 0x10;
        } while ((uint64_t)(int64_t)iVar12 <
                 (uint64_t)(*(int64_t *)(lVar5 + 0x40) - *(int64_t *)(lVar5 + 0x38) >> 4));
      }
    }
    if (*(int64_t *)(param_1 + 0xf0) != 0) {
      func_0x0001802827f0(*(int64_t *)(param_1 + 0xf0),(uint64_t)plStackX_8 & 0xff);
      lVar5 = *(int64_t *)(param_1 + 0xf0);
      iVar12 = 0;
      if (*(int64_t *)(lVar5 + 0x40) - *(int64_t *)(lVar5 + 0x38) >> 4 != 0) {
        lVar10 = 0;
        do {
          lVar6 = *(int64_t *)(lVar10 + *(int64_t *)(lVar5 + 0x38));
          *(int32_t *)(lVar6 + 0x1a0) = uVar22;
          *(int32_t *)(lVar6 + 0x1a4) = uVar23;
          *(int32_t *)(lVar6 + 0x1a8) = uVar24;
          *(int32_t *)(lVar6 + 0x1ac) = uVar25;
          iVar12 = iVar12 + 1;
          lVar10 = lVar10 + 0x10;
        } while ((uint64_t)(int64_t)iVar12 <
                 (uint64_t)(*(int64_t *)(lVar5 + 0x40) - *(int64_t *)(lVar5 + 0x38) >> 4));
      }
    }
    if (*(int64_t *)(param_1 + 0xf8) != 0) {
      func_0x0001802827f0();
      lVar5 = *(int64_t *)(param_1 + 0xf8);
      iVar12 = 0;
      if (*(int64_t *)(lVar5 + 0x40) - *(int64_t *)(lVar5 + 0x38) >> 4 != 0) {
        lVar10 = 0;
        do {
          lVar6 = *(int64_t *)(lVar10 + *(int64_t *)(lVar5 + 0x38));
          *(int32_t *)(lVar6 + 0x1a0) = uVar26;
          *(int32_t *)(lVar6 + 0x1a4) = uVar27;
          *(int32_t *)(lVar6 + 0x1a8) = uVar28;
          *(int32_t *)(lVar6 + 0x1ac) = uVar29;
          iVar12 = iVar12 + 1;
          lVar10 = lVar10 + 0x10;
        } while ((uint64_t)(int64_t)iVar12 <
                 (uint64_t)(*(int64_t *)(lVar5 + 0x40) - *(int64_t *)(lVar5 + 0x38) >> 4));
      }
    }
    FUN_1800466d0(*(uint64_t *)(param_1 + 0x108));
    if (*(char *)(param_1 + 0xc0) != '\0') {
      plVar9 = *(int64_t **)(param_1 + 0xe0);
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 200))(plVar9,1);
      }
      plVar9 = *(int64_t **)(param_1 + 0xe8);
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 200))(plVar9,1);
      }
      plVar9 = *(int64_t **)(param_1 + 0xf0);
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 200))(plVar9,1);
      }
      plVar9 = *(int64_t **)(param_1 + 0xf8);
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 200))(plVar9,1);
      }
      uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xf0,8,3);
      uVar11 = *(int8_t *)(param_1 + 0x110);
      plStackX_8 = (int64_t *)CONCAT71(plStackX_8._1_7_,*(int8_t *)(param_1 + 0x111));
      pplStack_a0 = &plStackX_10;
      plStackX_10 = *(int64_t **)(param_1 + 0xf8);
      if (plStackX_10 != (int64_t *)0x0) {
        (**(code **)(*plStackX_10 + 0x28))();
      }
      pplStack_98 = &plStackX_18;
      plStackX_18 = *(int64_t **)(param_1 + 0xf0);
      if (plStackX_18 != (int64_t *)0x0) {
        (**(code **)(*plStackX_18 + 0x28))();
      }
      pplStack_90 = &plStackX_20;
      plStackX_20 = *(int64_t **)(param_1 + 0xe8);
      if (plStackX_20 != (int64_t *)0x0) {
        (**(code **)(*plStackX_20 + 0x28))();
      }
      pplStack_d8 = &plStack_e8;
      plStack_e8 = *(int64_t **)(param_1 + 0xe0);
      if (plStack_e8 != (int64_t *)0x0) {
        (**(code **)(*plStack_e8 + 0x28))();
      }
      pplStack_d0 = &plStack_e0;
      plStack_e0 = *(int64_t **)(param_1 + 0x100);
      if (plStack_e0 != (int64_t *)0x0) {
        (**(code **)(*plStack_e0 + 0x28))();
      }
      plVar9 = (int64_t *)
               FUN_1805f6720(uVar8,&plStack_e0,&plStack_e8,&plStackX_20,&plStackX_18,&plStackX_10,
                             plStackX_8._0_1_,uVar11);
      pplStack_d0 = (int64_t **)plVar9;
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 0x28))(plVar9);
      }
      uVar8 = system_context_ptr;
      pplStack_d8 = &plStackX_8;
      plStackX_8 = plVar9;
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 0x28))(plVar9);
      }
      FUN_18005e300(uVar8,&plStackX_8);
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9);
      }
    }
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2);
    }
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1);
    }
  }
  plStackX_8 = *(int64_t **)(param_1 + 0x100);
  *(uint64_t *)(param_1 + 0x100) = 0;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}



uint64_t *
FUN_1805f6720(uint64_t *param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4,
             int64_t *param_5,int64_t *param_6,int8_t param_7,int8_t param_8)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  FUN_180049830();
  *param_1 = &processed_var_6040_ptr;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  plVar1 = (int64_t *)*param_2;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[0x18];
  param_1[0x18] = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (int64_t *)*param_3;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[0x19];
  param_1[0x19] = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (int64_t *)*param_4;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[0x1a];
  param_1[0x1a] = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (int64_t *)*param_5;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[0x1b];
  param_1[0x1b] = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (int64_t *)*param_6;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[0x1c];
  param_1[0x1c] = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(int8_t *)(param_1 + 0x1d) = param_7;
  *(int8_t *)((int64_t)param_1 + 0xe9) = param_8;
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  if ((int64_t *)*param_3 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_3 + 0x38))();
  }
  if ((int64_t *)*param_4 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_4 + 0x38))();
  }
  if ((int64_t *)*param_5 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_5 + 0x38))();
  }
  if ((int64_t *)*param_6 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_6 + 0x38))();
  }
  return param_1;
}






// 函数: void FUN_1805f6930(int64_t param_1)
void FUN_1805f6930(int64_t param_1)

{
  int8_t uVar1;
  int8_t uVar2;
  uint64_t uVar3;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  
  uVar3 = *(uint64_t *)(param_1 + 0xc0);
  uVar1 = *(int8_t *)(param_1 + 0xe9);
  uVar2 = *(int8_t *)(param_1 + 0xe8);
  plStackX_8 = *(int64_t **)(param_1 + 0xe0);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  plStackX_10 = *(int64_t **)(param_1 + 0xd8);
  if (plStackX_10 != (int64_t *)0x0) {
    (**(code **)(*plStackX_10 + 0x28))();
  }
  plStackX_18 = *(int64_t **)(param_1 + 0xd0);
  if (plStackX_18 != (int64_t *)0x0) {
    (**(code **)(*plStackX_18 + 0x28))();
  }
  plStackX_20 = *(int64_t **)(param_1 + 200);
  if (plStackX_20 != (int64_t *)0x0) {
    (**(code **)(*plStackX_20 + 0x28))();
  }
  FUN_180548ce0(uVar3,&plStackX_20,&plStackX_18,&plStackX_10,&plStackX_8,uVar2,uVar1);
  return;
}



int64_t FUN_1805f6a40(int64_t param_1,uint64_t param_2)

{
  if (*(int64_t **)(param_1 + 0xe0) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0xe0) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0xd8) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0xd8) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0xd0) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0xd0) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 200) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 200) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0xc0) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0xc0) + 0x38))();
  }
  FUN_180049470(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xf0);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




