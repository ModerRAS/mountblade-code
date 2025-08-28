n//  的语义化别名
#define SystemCore_PointerManager
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: MathOptimizationEngine */
#define MathOptimizationEngine MathOptimizationEngine
// 03_rendering_part141.c - 13 个函数
// 函数: void function_351190(int64_t param_1)
void function_351190(int64_t param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int32_t uVar4;
  int32_t uVar5;
  float fVar6;
  float fVar7;
  int64_t lVar8;
  int iVar9;
  int iVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t *plVar16;
  int64_t *plVar17;
  int64_t lVar18;
  int64_t lVar19;
  int64_t *plVar20;
  int64_t lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int8_t auVar25 [16];
  float fVar26;
  float fVar27;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  uint64_t uVar28;
  uint64_t local_var_90;
  int64_t lStack_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uVar28 = 0xfffffffffffffffe;
  lVar14 = *(int64_t *)(param_1 + 0x18);
  if (lVar14 == 0) {
    return;
  }
  if (render_system_data_memory == 0) {
    uVar11 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xd8,8,3,0xfffffffffffffffe);
    render_system_data_memory = function_350540(uVar11);
    lVar14 = *(int64_t *)(param_1 + 0x18);
  }
  lVar12 = render_system_data_memory;
  function_350650(render_system_data_memory,lVar14);
  iVar10 = *(int *)(param_1 + 0x80);
  plVar13 = (int64_t *)0x0;
  if (iVar10 == 7) {
    plVar16 = plVar13;
    do {
      plVar17 = (int64_t *)((int64_t)plVar16 + 1);
      if (*(char *)(*(int64_t *)(param_1 + 0x78) + (int64_t)plVar16) != (char)plVar16[0x30143c73])
      goto LAB_180351429;
      plVar16 = plVar17;
    } while (plVar17 != (int64_t *)&system_data_0008);
    lVar14 = *(int64_t *)(param_1 + 0x18);
    lVar21 = *(int64_t *)(lVar14 + 0xa0);
    lVar8 = *(int64_t *)(lVar14 + 0xa8);
    fVar1 = *(float *)(lVar14 + 0x70);
    fVar2 = *(float *)(lVar14 + 0x74);
    fVar3 = *(float *)(lVar14 + 0x78);
    uVar4 = *(int32_t *)(lVar14 + 0x7c);
    fVar22 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
    auVar25 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
    fVar23 = auVar25._0_4_;
    fVar22 = fVar23 * 0.5 * (3.0 - fVar22 * fVar23 * fVar23);
    local_var_78 = CONCAT44(fVar2 * fVar22,fVar1 * fVar22);
    local_var_70 = CONCAT44(uVar4,fVar3 * fVar22);
    local_var_68 = CONCAT44(local_var_68._4_4_,0x447a0000);
    if (lVar12 == 0) {
      uVar28 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xd8,8,3,uVar28);
      lVar12 = function_350540(uVar28);
      render_system_data_memory = lVar12;
    }
    plVar16 = *(int64_t **)(lVar12 + 0x20);
    if (plVar16 < *(int64_t **)(lVar12 + 0x28)) {
      *(int64_t **)(lVar12 + 0x20) = plVar16 + 6;
      *plVar16 = lVar14;
      plVar16[1] = lVar21;
      plVar16[2] = lVar8;
      plVar16[3] = local_var_78;
      plVar16[4] = local_var_70;
      plVar16[5] = local_var_68;
      return;
    }
    plVar17 = *(int64_t **)(lVar12 + 0x18);
    lVar18 = ((int64_t)plVar16 - (int64_t)plVar17) / 0x30;
    if (lVar18 == 0) {
      lVar18 = 1;
    }
    else {
      lVar18 = lVar18 * 2;
      if (lVar18 == 0) goto LAB_1803513a7;
    }
    plVar13 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar18 * 0x30,*(int8_t *)(lVar12 + 0x30))
    ;
    plVar16 = *(int64_t **)(lVar12 + 0x20);
    plVar17 = *(int64_t **)(lVar12 + 0x18);
LAB_1803513a7:
    if (plVar17 != plVar16) {
// WARNING: Subroutine does not return
      memmove(plVar13,plVar17,(int64_t)plVar16 - (int64_t)plVar17);
    }
    *plVar13 = lVar14;
    plVar13[1] = lVar21;
    local_var_80._0_4_ = (int32_t)lVar8;
    local_var_80._4_4_ = (int32_t)((uint64_t)lVar8 >> 0x20);
    *(int32_t *)(plVar13 + 2) = (int32_t)local_var_80;
    *(int32_t *)((int64_t)plVar13 + 0x14) = local_var_80._4_4_;
    *(float *)(plVar13 + 3) = fVar1 * fVar22;
    *(float *)((int64_t)plVar13 + 0x1c) = fVar2 * fVar22;
    *(float *)(plVar13 + 4) = fVar3 * fVar22;
    *(int32_t *)((int64_t)plVar13 + 0x24) = uVar4;
    *(int32_t *)(plVar13 + 5) = 0x447a0000;
    *(int32_t *)((int64_t)plVar13 + 0x2c) = local_var_68._4_4_;
    if (*(int64_t *)(lVar12 + 0x18) == 0) {
      *(int64_t **)(lVar12 + 0x18) = plVar13;
      *(int64_t **)(lVar12 + 0x20) = plVar13 + 6;
      *(int64_t **)(lVar12 + 0x28) = plVar13 + lVar18 * 6;
      return;
    }
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
LAB_180351429:
  if (iVar10 == 0xb) {
    iVar9 = strcmp(*(uint64_t *)(param_1 + 0x78),&system_data_e388);
    if (iVar9 == 0) {
      local_var_90 = *(int64_t *)(param_1 + 0x18);
      uVar4 = *(int32_t *)(local_var_90 + 0xa0);
      uVar5 = *(int32_t *)(local_var_90 + 0xa4);
      lStack_88 = *(int64_t *)(local_var_90 + 0xa0);
      local_var_80 = *(int64_t *)(local_var_90 + 0xa8);
      lVar14 = function_350610();
      plVar16 = *(int64_t **)(lVar14 + 0x40);
      if (*(int64_t **)(lVar14 + 0x48) <= plVar16) {
        plVar17 = *(int64_t **)(lVar14 + 0x38);
        lVar12 = ((int64_t)plVar16 - (int64_t)plVar17) / 0x18;
        if (lVar12 == 0) {
          lVar12 = 1;
        }
        else {
          lVar12 = lVar12 * 2;
          if (lVar12 == 0) goto LAB_1803514da;
        }
        plVar13 = (int64_t *)
                  CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar12 * 0x18,*(int8_t *)(lVar14 + 0x50));
        plVar16 = *(int64_t **)(lVar14 + 0x40);
        plVar17 = *(int64_t **)(lVar14 + 0x38);
LAB_1803514da:
        if (plVar17 != plVar16) {
// WARNING: Subroutine does not return
          memmove(plVar13,plVar17,(int64_t)plVar16 - (int64_t)plVar17);
        }
        local_var_90._4_4_ = (int32_t)((uint64_t)local_var_90 >> 0x20);
        *(int32_t *)plVar13 = (int32_t)local_var_90;
        *(int32_t *)((int64_t)plVar13 + 4) = local_var_90._4_4_;
        *(int32_t *)(plVar13 + 1) = uVar4;
        *(int32_t *)((int64_t)plVar13 + 0xc) = uVar5;
        plVar13[2] = local_var_80;
        if (*(int64_t *)(lVar14 + 0x38) == 0) {
          *(int64_t **)(lVar14 + 0x38) = plVar13;
          *(int64_t **)(lVar14 + 0x40) = plVar13 + 3;
          *(int64_t **)(lVar14 + 0x48) = plVar13 + lVar12 * 3;
          return;
        }
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      *(int64_t **)(lVar14 + 0x40) = plVar16 + 3;
      goto LAB_180351b84;
    }
    iVar9 = strcmp(*(uint64_t *)(param_1 + 0x78),&system_data_e3e8);
    if (iVar9 == 0) {
      lVar14 = *(int64_t *)(param_1 + 0x18);
      lVar12 = *(int64_t *)(lVar14 + 0xa0);
      lVar21 = *(int64_t *)(lVar14 + 0xa8);
      lVar8 = *(int64_t *)(lVar14 + 0x70);
      lVar18 = *(int64_t *)(lVar14 + 0x78);
      lVar15 = function_350610();
      plVar16 = *(int64_t **)(lVar15 + 0x60);
      if (plVar16 < *(int64_t **)(lVar15 + 0x68)) {
        *(int64_t **)(lVar15 + 0x60) = plVar16 + 6;
        *plVar16 = lVar14;
        plVar16[1] = lVar12;
        plVar16[2] = lVar21;
        plVar16[3] = lVar8;
        plVar16[4] = lVar18;
        plVar16[5] = 0x3e99999a447a0000;
        return;
      }
      plVar17 = *(int64_t **)(lVar15 + 0x58);
      lVar19 = ((int64_t)plVar16 - (int64_t)plVar17) / 0x30;
      if (lVar19 == 0) {
        lVar19 = 1;
      }
      else {
        lVar19 = lVar19 * 2;
        if (lVar19 == 0) goto LAB_18035163a;
      }
      plVar13 = (int64_t *)
                CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar19 * 0x30,*(int8_t *)(lVar15 + 0x70));
      plVar16 = *(int64_t **)(lVar15 + 0x60);
      plVar17 = *(int64_t **)(lVar15 + 0x58);
LAB_18035163a:
      if (plVar17 != plVar16) {
// WARNING: Subroutine does not return
        memmove(plVar13,plVar17,(int64_t)plVar16 - (int64_t)plVar17);
      }
      *plVar13 = lVar14;
      plVar13[1] = lVar12;
      local_var_80._0_4_ = (int32_t)lVar21;
      local_var_80._4_4_ = (int32_t)((uint64_t)lVar21 >> 0x20);
      local_var_78._0_4_ = (int32_t)lVar8;
      local_var_78._4_4_ = (int32_t)((uint64_t)lVar8 >> 0x20);
      *(int32_t *)(plVar13 + 2) = (int32_t)local_var_80;
      *(int32_t *)((int64_t)plVar13 + 0x14) = local_var_80._4_4_;
      *(int32_t *)(plVar13 + 3) = (int32_t)local_var_78;
      *(int32_t *)((int64_t)plVar13 + 0x1c) = local_var_78._4_4_;
      local_var_70._0_4_ = (int32_t)lVar18;
      local_var_70._4_4_ = (int32_t)((uint64_t)lVar18 >> 0x20);
      *(int32_t *)(plVar13 + 4) = (int32_t)local_var_70;
      *(int32_t *)((int64_t)plVar13 + 0x24) = local_var_70._4_4_;
      *(int32_t *)(plVar13 + 5) = 0x447a0000;
      *(int32_t *)((int64_t)plVar13 + 0x2c) = 0x3e99999a;
      if (*(int64_t *)(lVar15 + 0x58) == 0) {
        *(int64_t **)(lVar15 + 0x58) = plVar13;
        *(int64_t **)(lVar15 + 0x60) = plVar13 + 6;
        *(int64_t **)(lVar15 + 0x68) = plVar13 + lVar19 * 6;
        return;
      }
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
  }
  if ((iVar10 != 0xd) ||
     (iVar9 = strcmp(*(uint64_t *)(param_1 + 0x78),&system_data_e3c0), iVar9 != 0)) {
    if (iVar10 != 0xb) {
      return;
    }
    iVar10 = strcmp(*(uint64_t *)(param_1 + 0x78),&system_data_e3b0);
    if (iVar10 != 0) {
      return;
    }
    local_var_90 = *(int64_t *)(param_1 + 0x18);
    uVar4 = *(int32_t *)(local_var_90 + 0xa0);
    uVar5 = *(int32_t *)(local_var_90 + 0xa4);
    lStack_88 = *(int64_t *)(local_var_90 + 0xa0);
    local_var_80 = *(int64_t *)(local_var_90 + 0xa8);
    lVar14 = function_350610();
    plVar16 = *(int64_t **)(lVar14 + 0xa0);
    if (*(int64_t **)(lVar14 + 0xa8) <= plVar16) {
      plVar17 = *(int64_t **)(lVar14 + 0x98);
      lVar12 = ((int64_t)plVar16 - (int64_t)plVar17) / 0x18;
      if (lVar12 == 0) {
        lVar12 = 1;
      }
      else {
        lVar12 = lVar12 * 2;
        if (lVar12 == 0) goto LAB_180351c06;
      }
      plVar13 = (int64_t *)
                CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar12 * 0x18,*(int8_t *)(lVar14 + 0xb0));
      plVar16 = *(int64_t **)(lVar14 + 0xa0);
      plVar17 = *(int64_t **)(lVar14 + 0x98);
LAB_180351c06:
      if (plVar17 != plVar16) {
// WARNING: Subroutine does not return
        memmove(plVar13,plVar17,(int64_t)plVar16 - (int64_t)plVar17);
      }
      local_var_90._4_4_ = (int32_t)((uint64_t)local_var_90 >> 0x20);
      *(int32_t *)plVar13 = (int32_t)local_var_90;
      *(int32_t *)((int64_t)plVar13 + 4) = local_var_90._4_4_;
      *(int32_t *)(plVar13 + 1) = uVar4;
      *(int32_t *)((int64_t)plVar13 + 0xc) = uVar5;
      plVar13[2] = local_var_80;
      if (*(int64_t *)(lVar14 + 0x98) == 0) {
        *(int64_t **)(lVar14 + 0x98) = plVar13;
        *(int64_t **)(lVar14 + 0xa0) = plVar13 + 3;
        *(int64_t **)(lVar14 + 0xa8) = plVar13 + lVar12 * 3;
        return;
      }
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    *(int64_t **)(lVar14 + 0xa0) = plVar16 + 3;
    goto LAB_180351b84;
  }
  uVar28 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x140,0x10,3,uVar28);
  uVar28 = function_14a1b0(uVar28);
  SystemCore_PointerManager((int64_t *)(param_1 + 0x90),uVar28);
  plVar16 = *(int64_t **)(*(int64_t *)(param_1 + 0x90) + 0xb8);
  lVar14 = *(int64_t *)(render_system_data_memory + 0x28);
  plVar17 = (int64_t *)plVar16[1];
  lVar12 = 1;
  if (plVar17 < (int64_t *)plVar16[2]) {
    plVar16[1] = (int64_t)(plVar17 + 6);
    *plVar17 = local_var_90;
    plVar17[1] = lStack_88;
    plVar17[2] = local_var_80;
    plVar17[3] = local_var_78;
    plVar17[4] = local_var_70;
    plVar17[5] = lVar14;
  }
  else {
    plVar20 = (int64_t *)*plVar16;
    lVar21 = ((int64_t)plVar17 - (int64_t)plVar20) / 0x30;
    if (lVar21 == 0) {
      lVar21 = 1;
LAB_18035179a:
      plStackX_8 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar21 * 0x30,(char)plVar16[3]);
      plVar17 = (int64_t *)plVar16[1];
      plVar20 = (int64_t *)*plVar16;
    }
    else {
      lVar21 = lVar21 * 2;
      plStackX_8 = plVar13;
      if (lVar21 != 0) goto LAB_18035179a;
    }
    if (plVar20 != plVar17) {
// WARNING: Subroutine does not return
      memmove(plStackX_8,plVar20,(int64_t)plVar17 - (int64_t)plVar20);
    }
    *plStackX_8 = local_var_90;
    plStackX_8[1] = lStack_88;
    *(int32_t *)(plStackX_8 + 2) = (int32_t)local_var_80;
    *(int32_t *)((int64_t)plStackX_8 + 0x14) = local_var_80._4_4_;
    *(int32_t *)(plStackX_8 + 3) = (int32_t)local_var_78;
    *(int32_t *)((int64_t)plStackX_8 + 0x1c) = local_var_78._4_4_;
    local_var_68._0_4_ = (int32_t)lVar14;
    local_var_68._4_4_ = (int32_t)((uint64_t)lVar14 >> 0x20);
    *(int32_t *)(plStackX_8 + 4) = (int32_t)local_var_70;
    *(int32_t *)((int64_t)plStackX_8 + 0x24) = local_var_70._4_4_;
    *(int32_t *)(plStackX_8 + 5) = (int32_t)local_var_68;
    *(int32_t *)((int64_t)plStackX_8 + 0x2c) = local_var_68._4_4_;
    if (*plVar16 != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    *plVar16 = (int64_t)plStackX_8;
    plVar16[1] = (int64_t)(plStackX_8 + 6);
    plVar16[2] = (int64_t)(plStackX_8 + lVar21 * 6);
  }
  plStackX_8 = (int64_t *)(param_1 + 0x90);
  uVar28 = *(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0xa8);
  lVar14 = **(int64_t **)(*plStackX_8 + 0xb8);
  *(uint64_t *)(lVar14 + 4) = *(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0xa0);
  *(uint64_t *)(lVar14 + 0xc) = uVar28;
  lVar14 = *(int64_t *)(param_1 + 0x18);
  fVar1 = *(float *)(lVar14 + 0xa8);
  uVar4 = *(int32_t *)(lVar14 + 0xa4);
  lVar21 = **(int64_t **)(*plStackX_8 + 0xb8);
  *(int32_t *)(lVar21 + 0x14) = *(int32_t *)(lVar14 + 0xa0);
  *(int32_t *)(lVar21 + 0x18) = uVar4;
  *(float *)(lVar21 + 0x1c) = fVar1 + 1.8;
  *(int32_t *)(lVar21 + 0x20) = 0x7f7fffff;
  *(int32_t *)**(uint64_t **)(*plStackX_8 + 0xb8) = 0x3ebd70a4;
  lVar14 = *(int64_t *)(param_1 + 0x18);
  lVar21 = **(int64_t **)(*plStackX_8 + 0xb8);
  fVar26 = *(float *)(lVar21 + 0xc) - *(float *)(lVar14 + 0xa8);
  fVar24 = *(float *)(lVar21 + 8) - *(float *)(lVar14 + 0xa4);
  fVar27 = *(float *)(lVar21 + 4) - *(float *)(lVar14 + 0xa0);
  fVar1 = *(float *)(lVar14 + 0x80);
  fVar2 = *(float *)(lVar14 + 0x84);
  fVar3 = *(float *)(lVar14 + 0x88);
  fVar22 = *(float *)(lVar14 + 0x90);
  fVar23 = *(float *)(lVar14 + 0x94);
  fVar6 = *(float *)(lVar14 + 0x98);
  fVar7 = *(float *)(lVar14 + 0x9c);
  *(float *)(lVar21 + 4) =
       fVar27 * *(float *)(lVar14 + 0x70) + fVar24 * *(float *)(lVar14 + 0x74) +
       fVar26 * *(float *)(lVar14 + 0x78);
  *(float *)(lVar21 + 8) = fVar27 * fVar1 + fVar24 * fVar2 + fVar26 * fVar3;
  *(float *)(lVar21 + 0xc) = fVar27 * fVar22 + fVar24 * fVar23 + fVar26 * fVar6;
  *(float *)(lVar21 + 0x10) = fVar27 * fVar7 + fVar24 * fVar7 + fVar26 * fVar7;
  lVar14 = *(int64_t *)(param_1 + 0x18);
  lVar21 = **(int64_t **)(*plStackX_8 + 0xb8);
  fVar26 = *(float *)(lVar21 + 0x1c) - *(float *)(lVar14 + 0xa8);
  fVar24 = *(float *)(lVar21 + 0x18) - *(float *)(lVar14 + 0xa4);
  fVar27 = *(float *)(lVar21 + 0x14) - *(float *)(lVar14 + 0xa0);
  fVar1 = *(float *)(lVar14 + 0x80);
  fVar2 = *(float *)(lVar14 + 0x84);
  fVar3 = *(float *)(lVar14 + 0x88);
  fVar22 = *(float *)(lVar14 + 0x90);
  fVar23 = *(float *)(lVar14 + 0x94);
  fVar6 = *(float *)(lVar14 + 0x98);
  fVar7 = *(float *)(lVar14 + 0x9c);
  *(float *)(lVar21 + 0x14) =
       fVar27 * *(float *)(lVar14 + 0x70) + fVar24 * *(float *)(lVar14 + 0x74) +
       fVar26 * *(float *)(lVar14 + 0x78);
  *(float *)(lVar21 + 0x18) = fVar27 * fVar1 + fVar24 * fVar2 + fVar26 * fVar3;
  *(float *)(lVar21 + 0x1c) = fVar27 * fVar22 + fVar24 * fVar23 + fVar26 * fVar6;
  *(float *)(lVar21 + 0x20) = fVar27 * fVar7 + fVar24 * fVar7 + fVar26 * fVar7;
  uVar28 = *(uint64_t *)(param_1 + 0x18);
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*plStackX_8;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  function_2eeab0(uVar28,&plStackX_8);
  local_var_90 = *(int64_t *)(param_1 + 0x18);
  uVar4 = *(int32_t *)(local_var_90 + 0xa0);
  uVar5 = *(int32_t *)(local_var_90 + 0xa4);
  lStack_88 = *(int64_t *)(local_var_90 + 0xa0);
  local_var_80 = *(int64_t *)(local_var_90 + 0xa8);
  lVar14 = function_350610();
  plVar16 = *(int64_t **)(lVar14 + 0x80);
  if (*(int64_t **)(lVar14 + 0x88) <= plVar16) {
    plVar17 = *(int64_t **)(lVar14 + 0x78);
    lVar21 = ((int64_t)plVar16 - (int64_t)plVar17) / 0x18;
    if ((lVar21 == 0) || (lVar12 = lVar21 * 2, lVar12 != 0)) {
      plVar13 = (int64_t *)
                CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar12 * 0x18,*(int8_t *)(lVar14 + 0x90));
      plVar16 = *(int64_t **)(lVar14 + 0x80);
      plVar17 = *(int64_t **)(lVar14 + 0x78);
    }
    if (plVar17 == plVar16) {
      local_var_90._4_4_ = (int32_t)((uint64_t)local_var_90 >> 0x20);
      *(int32_t *)plVar13 = (int32_t)local_var_90;
      *(int32_t *)((int64_t)plVar13 + 4) = local_var_90._4_4_;
      *(int32_t *)(plVar13 + 1) = uVar4;
      *(int32_t *)((int64_t)plVar13 + 0xc) = uVar5;
      plVar13[2] = local_var_80;
      if (*(int64_t *)(lVar14 + 0x78) == 0) {
        *(int64_t **)(lVar14 + 0x78) = plVar13;
        *(int64_t **)(lVar14 + 0x80) = plVar13 + 3;
        *(int64_t **)(lVar14 + 0x88) = plVar13 + lVar12 * 3;
        return;
      }
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
// WARNING: Subroutine does not return
    memmove(plVar13,plVar17,(int64_t)plVar16 - (int64_t)plVar17);
  }
  *(int64_t **)(lVar14 + 0x80) = plVar16 + 3;
LAB_180351b84:
  *plVar16 = local_var_90;
  plVar16[1] = lStack_88;
  plVar16[2] = local_var_80;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_351cb0(int64_t param_1)
void function_351cb0(int64_t param_1)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  if (render_system_data_memory == (uint64_t *)0x0) {
    uVar2 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xd8,8,3);
    render_system_data_memory = (uint64_t *)function_350540(uVar2);
  }
  puVar1 = render_system_data_memory;
  *render_system_data_memory = *(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20);
  *(int8_t *)(puVar1 + 2) = *(int8_t *)(param_1 + 0x70);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_351d10(uint64_t *param_1)
void function_351d10(uint64_t *param_1)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  if ((void *)*param_1 == &ui_system_data_1024_ptr) {
    if (render_system_data_memory == (uint64_t *)0x0) {
      uVar2 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xd8,8,3);
      render_system_data_memory = (uint64_t *)function_350540(uVar2);
    }
    puVar1 = render_system_data_memory;
    *render_system_data_memory = *(uint64_t *)(param_1[3] + 0x20);
    *(int8_t *)(puVar1 + 2) = *(int8_t *)(param_1 + 0xe);
    return;
  }
  (**(code **)((void *)*param_1 + 0x70))(param_1);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_351d90(uint64_t param_1)
void function_351d90(uint64_t param_1)
{
  int8_t stack_array_118 [32];
  int32_t local_var_f8;
  uint64_t local_var_f0;
  void **applocal_var_e8 [2];
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int32_t local_var_c8;
  int8_t stack_array_c0 [72];
  void *aplocal_var_78 [11];
  int32_t local_var_20;
  uint64_t local_var_18;
  local_var_f0 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_118;
  local_var_f8 = 0;
  plocal_var_d8 = &memory_allocator_3480_ptr;
  plocal_var_d0 = stack_array_c0;
  stack_array_c0[0] = 0;
  local_var_c8 = 0x11;
  strcpy_s(stack_array_c0,0x40,&system_data_e3f8);
  SystemCommunicationProcessor(aplocal_var_78,&plocal_var_d8);
  local_var_20 = 3;
  local_var_f8 = 1;
  MathOptimizationEngine0(param_1,applocal_var_e8,aplocal_var_78);
  local_var_f8 = 0;
  applocal_var_e8[0] = aplocal_var_78;
  aplocal_var_78[0] = &system_state_ptr;
  plocal_var_d8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_118);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_351ea0(void)
void function_351ea0(void)
{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t lVar4;
  if (render_system_data_memory == 0) {
    uVar2 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xd8,8,3);
    render_system_data_memory = function_350540(uVar2);
  }
  lVar1 = render_system_data_memory;
  if ((*(char *)(render_system_data_memory + 0x10) != '\0') &&
     (iVar3 = (int)(*(int64_t *)(render_system_data_memory + 0xc0) - *(int64_t *)(render_system_data_memory + 0xb8) >> 3
                   ), 0 < iVar3)) {
    lVar4 = 0;
    do {
      function_351190(*(uint64_t *)(*(int64_t *)(lVar1 + 0xb8) + lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  return;
}
// 函数: void function_351ef4(int param_1)
void function_351ef4(int param_1)
{
  int64_t lVar1;
  int64_t unaff_RDI;
  if (0 < param_1) {
    lVar1 = 0;
    do {
      function_351190(*(uint64_t *)(*(int64_t *)(unaff_RDI + 0xb8) + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_1);
  }
  return;
}
// 函数: void function_351f00(void)
void function_351f00(void)
{
  int64_t lVar1;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  lVar1 = 0;
  do {
    function_351190(*(uint64_t *)(*(int64_t *)(unaff_RDI + 0xb8) + lVar1 * 8));
    lVar1 = lVar1 + 1;
  } while (lVar1 < unaff_RSI);
  return;
}
// 函数: void function_351f2d(void)
void function_351f2d(void)
{
  return;
}
// 函数: void function_351f32(void)
void function_351f32(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_351f40(int64_t param_1,int64_t param_2)
void function_351f40(int64_t param_1,int64_t param_2)
{
  int iVar1;
  uint64_t uVar2;
  if (*(int *)(param_2 + 0x10) == 0x11) {
    iVar1 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_e3f8);
    if (iVar1 == 0) {
      if (render_system_data_memory == 0) {
        uVar2 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xd8,8,3);
        render_system_data_memory = function_350540(uVar2);
      }
      *(int8_t *)(render_system_data_memory + 0x10) = *(int8_t *)(param_1 + 0x70);
    }
  }
  return;
}
uint64_t * function_351fb0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &ui_system_data_1584_ptr;
  if (param_1[0x13] != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  UIComponent_Manager(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xb8);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_352020(uint64_t *param_1)
void function_352020(uint64_t *param_1)
{
  int32_t uVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  void *plocal_var_138;
  int32_t *plocal_var_130;
  int32_t local_var_128;
  uint64_t local_var_120;
  uint64_t local_var_38;
  local_var_38 = 0xfffffffffffffffe;
  puVar3 = param_1;
  SystemCore_SyncController();
  *puVar3 = &ui_system_data_1584_ptr;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  *(int32_t *)(puVar3 + 0x16) = 3;
  plocal_var_138 = &system_data_buffer_ptr;
  local_var_120 = 0;
  plocal_var_130 = (int32_t *)0x0;
  local_var_128 = 0;
  puVar2 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x18,0x13);
  *(int8_t *)puVar2 = 0;
  plocal_var_130 = puVar2;
  uVar1 = CoreMemoryPoolCleaner(puVar2);
  local_var_120 = CONCAT44(local_var_120._4_4_,uVar1);
  *puVar2 = 0x6e756f42;
  puVar2[1] = 0x676e6964;
  puVar2[2] = 0x786f4220;
  puVar2[3] = 0x6e6f4320;
  *(uint64_t *)(puVar2 + 4) = 0x746e6961727473;
  local_var_128 = 0x17;
  SystemNetwork_Processor(param_1,&plocal_var_138,(int64_t)param_1 + 0x74,2);
  plocal_var_138 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(puVar2);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3525b0(uint64_t param_1)
void function_3525b0(uint64_t param_1)
{
  int8_t stack_array_3c8 [32];
  int32_t local_var_3a8;
  void **applocal_var_3a0 [2];
  uint64_t local_var_390;
  void *aplocal_var_388 [11];
  int32_t local_var_330;
  void *plocal_var_328;
  int8_t *plocal_var_320;
  int32_t local_var_318;
  int8_t stack_array_310 [72];
  void *plocal_var_2c8;
  int8_t *plocal_var_2c0;
  int32_t local_var_2b8;
  int8_t stack_array_2b0 [72];
  void *plocal_var_268;
  int8_t *plocal_var_260;
  int32_t local_var_258;
  int8_t stack_array_250 [72];
  void *plocal_var_208;
  int8_t *plocal_var_200;
  int32_t local_var_1f8;
  int8_t stack_array_1f0 [72];
  void *plocal_var_1a8;
  int8_t *plocal_var_1a0;
  int32_t local_var_198;
  int8_t stack_array_190 [72];
  void *plocal_var_148;
  int8_t *plocal_var_140;
  int32_t local_var_138;
  int8_t stack_array_130 [72];
  void *plocal_var_e8;
  int8_t *plocal_var_e0;
  int32_t local_var_d8;
  int8_t stack_array_d0 [72];
  void *plocal_var_88;
  int8_t *plocal_var_80;
  int32_t local_var_78;
  int8_t stack_array_70 [72];
  uint64_t local_var_28;
  local_var_390 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_3c8;
  local_var_3a8 = 0;
  plocal_var_328 = &memory_allocator_3480_ptr;
  plocal_var_320 = stack_array_310;
  stack_array_310[0] = 0;
  local_var_318 = 0x17;
  strcpy_s(stack_array_310,0x40,&system_data_e718);
  SystemCommunicationProcessor(aplocal_var_388,&plocal_var_328);
  local_var_330 = 2;
  local_var_3a8 = 1;
  MathOptimizationEngine0(param_1,applocal_var_3a0,aplocal_var_388);
  local_var_3a8 = 0;
  applocal_var_3a0[0] = aplocal_var_388;
  aplocal_var_388[0] = &system_state_ptr;
  plocal_var_328 = &system_state_ptr;
  plocal_var_2c8 = &memory_allocator_3480_ptr;
  plocal_var_2c0 = stack_array_2b0;
  stack_array_2b0[0] = 0;
  local_var_2b8 = 0xe;
  strcpy_s(stack_array_2b0,0x40,&system_data_e708);
  SystemCommunicationProcessor(aplocal_var_388,&plocal_var_2c8);
  local_var_330 = 3;
  local_var_3a8 = 2;
  MathOptimizationEngine0(param_1,applocal_var_3a0,aplocal_var_388);
  local_var_3a8 = 0;
  applocal_var_3a0[0] = aplocal_var_388;
  aplocal_var_388[0] = &system_state_ptr;
  plocal_var_2c8 = &system_state_ptr;
  plocal_var_268 = &memory_allocator_3480_ptr;
  plocal_var_260 = stack_array_250;
  stack_array_250[0] = 0;
  local_var_258 = 0xd;
  strcpy_s(stack_array_250,0x40,&system_data_e770);
  SystemCommunicationProcessor(aplocal_var_388,&plocal_var_268);
  local_var_330 = 3;
  local_var_3a8 = 4;
  MathOptimizationEngine0(param_1,applocal_var_3a0,aplocal_var_388);
  local_var_3a8 = 0;
  applocal_var_3a0[0] = aplocal_var_388;
  aplocal_var_388[0] = &system_state_ptr;
  plocal_var_268 = &system_state_ptr;
  plocal_var_208 = &memory_allocator_3480_ptr;
  plocal_var_200 = stack_array_1f0;
  stack_array_1f0[0] = 0;
  local_var_1f8 = 0xe;
  strcpy_s(stack_array_1f0,0x40,&system_data_e760);
  SystemCommunicationProcessor(aplocal_var_388,&plocal_var_208);
  local_var_330 = 0xb;
  local_var_3a8 = 8;
  MathOptimizationEngine0(param_1,applocal_var_3a0,aplocal_var_388);
  local_var_3a8 = 0;
  applocal_var_3a0[0] = aplocal_var_388;
  aplocal_var_388[0] = &system_state_ptr;
  plocal_var_208 = &system_state_ptr;
  plocal_var_1a8 = &memory_allocator_3480_ptr;
  plocal_var_1a0 = stack_array_190;
  stack_array_190[0] = 0;
  local_var_198 = 0x11;
  strcpy_s(stack_array_190,0x40,&system_data_e748);
  SystemCommunicationProcessor(aplocal_var_388,&plocal_var_1a8);
  local_var_330 = 5;
  local_var_3a8 = 0x10;
  MathOptimizationEngine0(param_1,applocal_var_3a0,aplocal_var_388);
  local_var_3a8 = 0;
  applocal_var_3a0[0] = aplocal_var_388;
  aplocal_var_388[0] = &system_state_ptr;
  plocal_var_1a8 = &system_state_ptr;
  plocal_var_148 = &memory_allocator_3480_ptr;
  plocal_var_140 = stack_array_130;
  stack_array_130[0] = 0;
  local_var_138 = 0x11;
  strcpy_s(stack_array_130,0x40,&system_data_e730);
  SystemCommunicationProcessor(aplocal_var_388,&plocal_var_148);
  local_var_330 = 5;
  local_var_3a8 = 0x20;
  MathOptimizationEngine0(param_1,applocal_var_3a0,aplocal_var_388);
  local_var_3a8 = 0;
  applocal_var_3a0[0] = aplocal_var_388;
  aplocal_var_388[0] = &system_state_ptr;
  plocal_var_148 = &system_state_ptr;
  plocal_var_e8 = &memory_allocator_3480_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = 0x29;
  strcpy_s(stack_array_d0,0x40,&system_data_e798);
  SystemCommunicationProcessor(aplocal_var_388,&plocal_var_e8);
  local_var_330 = 0xb;
  local_var_3a8 = 0x40;
  MathOptimizationEngine0(param_1,applocal_var_3a0,aplocal_var_388);
  local_var_3a8 = 0;
  applocal_var_3a0[0] = aplocal_var_388;
  aplocal_var_388[0] = &system_state_ptr;
  plocal_var_e8 = &system_state_ptr;
  plocal_var_88 = &memory_allocator_3480_ptr;
  plocal_var_80 = stack_array_70;
  stack_array_70[0] = 0;
  local_var_78 = 0x15;
  strcpy_s(stack_array_70,0x40,&system_data_e780);
  SystemCommunicationProcessor(aplocal_var_388,&plocal_var_88);
  local_var_330 = 0xb;
  local_var_3a8 = 0x80;
  MathOptimizationEngine0(param_1,applocal_var_3a0,aplocal_var_388);
  local_var_3a8 = 0;
  applocal_var_3a0[0] = aplocal_var_388;
  aplocal_var_388[0] = &system_state_ptr;
  plocal_var_88 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_3c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_352b20(int64_t param_1)
void function_352b20(int64_t param_1)
{
  int64_t lVar1;
  int32_t local_var_78;
  uint64_t local_var_74;
  uint64_t local_var_6c;
  uint64_t local_var_64;
  uint64_t local_var_5c;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_74 = 0x3f8000003f800000;
  local_var_6c = 0x7f7fffff3f800000;
  local_var_78 = render_system_control_memory;
  lVar1 = *(int64_t *)(param_1 + 0x18);
  local_var_64 = 0xbf800000bf800000;
  local_var_5c = 0x7f7fffffbf800000;
  local_var_48 = *(uint64_t *)(lVar1 + 0x70);
  local_var_40 = *(uint64_t *)(lVar1 + 0x78);
  local_var_38 = *(uint64_t *)(lVar1 + 0x80);
  local_var_30 = *(uint64_t *)(lVar1 + 0x88);
  local_var_28 = *(uint64_t *)(lVar1 + 0x90);
  local_var_20 = *(uint64_t *)(lVar1 + 0x98);
  local_var_18 = *(int32_t *)(lVar1 + 0xa0);
  local_var_14 = *(int32_t *)(lVar1 + 0xa4);
  local_var_10 = *(int32_t *)(lVar1 + 0xa8);
  local_var_c = *(int32_t *)(lVar1 + 0xac);
  if (*(char *)(render_system_data_memory + 0x50) != '\0') {
    function_634a60(render_system_data_memory,&local_var_64,&local_var_74,&local_var_48,&local_var_78,1,0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address