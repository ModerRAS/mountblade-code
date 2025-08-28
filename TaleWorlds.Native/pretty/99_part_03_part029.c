#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part029.c - 8 个函数

// 函数: void FUN_1801e7b70(int64_t *param_1,int64_t param_2,int64_t param_3,int param_4,
void FUN_1801e7b70(int64_t *param_1,int64_t param_2,int64_t param_3,int param_4,
                  uint64_t param_5,uint64_t param_6)

{
  uint64_t *puVar1;
  uint uVar2;
  int *piVar3;
  int64_t *plVar4;
  char cVar5;
  int8_t uVar6;
  int32_t uVar7;
  int iVar8;
  int iVar9;
  int8_t *puVar10;
  void *puVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  void *puVar14;
  int64_t lVar15;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t lStackX_18;
  int iStackX_20;
  void **ppuVar16;
  void *puStack_110;
  int8_t *puStack_108;
  uint uStack_100;
  uint64_t uStack_f8;
  int iStack_f0;
  int64_t **pplStack_e8;
  int64_t *plStack_e0;
  int64_t lStack_d8;
  void *puStack_d0;
  int64_t lStack_c8;
  int32_t uStack_b8;
  void *puStack_b0;
  int8_t uStack_a8;
  void *puStack_a0;
  int8_t uStack_98;
  void *puStack_90;
  int64_t lStack_88;
  int32_t uStack_78;
  void *puStack_70;
  int64_t lStack_68;
  uint64_t uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  lStackX_18 = param_3;
  iStackX_20 = param_4;
  SystemCore_NetworkHandler0(&puStack_70,param_2 + 0x60);
  SystemCore_NetworkHandler0(&puStack_90,param_2 + 0x80);
  pplStackX_10 = (int64_t **)CONCAT44(pplStackX_10._4_4_,(uint)*(ushort *)(param_2 + 0x14));
  plStackX_8 = (int64_t *)CONCAT44(plStackX_8._4_4_,*(int *)(param_2 + 0xa4));
  puVar10 = (int8_t *)0x0;
  puStack_110 = &system_data_buffer_ptr;
  uStack_f8 = 0;
  puStack_108 = (int8_t *)0x0;
  uStack_100 = 0;
  lVar15 = *(int64_t *)(param_2 + 0x20);
  if ((lVar15 == 0) &&
     (lVar15 = *(int64_t *)(param_2 + 0x58), iVar8 = *(int *)(param_2 + 0xa4), lVar15 == 0))
  goto LAB_1801e7ca4;
  uVar2 = *(uint *)(lVar15 + 0x2c0);
  if (*(int64_t *)(lVar15 + 0x2b8) == 0) {
LAB_1801e7c6e:
    if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar10,*(uint64_t *)(lVar15 + 0x2b8),(uint64_t)uVar2);
    }
  }
  else if (uVar2 != 0) {
    iVar8 = uVar2 + 1;
    if ((int)(uVar2 + 1) < 0x10) {
      iVar8 = 0x10;
    }
    puVar10 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar8,0x13);
    *puVar10 = 0;
    puStack_108 = puVar10;
    uVar7 = CoreMemoryPoolCleaner(puVar10);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar7);
    goto LAB_1801e7c6e;
  }
  if (puVar10 != (int8_t *)0x0) {
    puVar10[uVar2] = 0;
  }
  uStack_f8 = CONCAT44(*(int32_t *)(lVar15 + 0x2cc),(int32_t)uStack_f8);
  iVar8 = (int)plStackX_8;
  uStack_100 = uVar2;
LAB_1801e7ca4:
  lStack_d8 = *(int64_t *)(param_2 + 0x20);
  puStack_d0 = *(void **)(param_2 + 0x58);
  if (lStack_d8 == 0) {
    puVar14 = puStack_d0;
    if (puStack_d0 == (void *)0x0) {
      puVar14 = *(void **)(system_global_data_ptr + 0x50);
    }
    puVar14 = puVar14 + (int64_t)iVar8 * 0x70;
  }
  else {
    puVar14 = (void *)((int64_t)iVar8 * 0x70 + lStack_d8);
  }
  puVar1 = (uint64_t *)(puVar14 + 0x10);
  piVar3 = (int *)param_1[2];
  puStack_b0 = puVar14 + 0x70;
  uStack_a8 = 0;
  AcquireSRWLockExclusive(puStack_b0);
  uStack_a8 = 1;
  puVar11 = *(void **)(puVar14 + 0x48);
  do {
    if (puVar11 == puVar14 + 0x40) {
      ReleaseSRWLockExclusive(puVar14 + 0x70);
      iVar8 = iStackX_20;
      *(int64_t *)(piVar3 + 2) = lStackX_18;
      piVar3[4] = iStackX_20;
      iVar9 = FUN_1801eb880(puVar1);
      *piVar3 = iVar9;
      iStack_f0 = iVar9;
      cVar5 = FUN_1801de690(system_global_data_ptr,param_1,*(int32_t *)(param_2 + 0xa4),lStackX_18);
      if (cVar5 == '\0') {
        piVar3[2] = 0;
        piVar3[3] = 0;
        piVar3[4] = 0;
      }
      else {
        puStack_a0 = puVar14 + 0x70;
        uStack_98 = 0;
        AcquireSRWLockExclusive(puStack_a0);
        uStack_98 = 1;
        puVar12 = puVar1;
        puVar13 = *(uint64_t **)(puVar14 + 0x20);
        while (puVar13 != (uint64_t *)0x0) {
          if (*(int *)(puVar13 + 4) < iVar9) {
            puVar13 = (uint64_t *)*puVar13;
          }
          else {
            puVar12 = puVar13;
            puVar13 = (uint64_t *)puVar13[1];
          }
        }
        if ((puVar12 == puVar1) || (iVar9 < *(int *)(puVar12 + 4))) {
          puVar12 = (uint64_t *)FUN_180179aa0(puVar1,&pplStack_e8);
          puVar12 = (uint64_t *)*puVar12;
        }
        puVar12[5] = param_1;
        if ((lStack_d8 == 0) && (puStack_d0 == (void *)0x0)) {
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
        FUN_1801c6b50(param_1,&puStack_d0,(uint64_t)plStackX_8 & 0xffffffff,iVar9,uVar6);
        lVar15 = lStackX_18;
        ppuVar16 = &puStack_110;
        FUN_1801c5940();
        puStack_d0 = &system_data_buffer_ptr;
        if (lStack_c8 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        lStack_c8 = 0;
        uStack_b8 = 0;
        puStack_d0 = &system_state_ptr;
        if (*(int64_t *)(param_2 + 0x20) == 0) {
          plVar4 = *(int64_t **)(param_2 + 0x58);
          if (plVar4 == (int64_t *)0x0) {
            FUN_1801c5d30(0,param_5,*piVar3,0,ppuVar16);
          }
          else {
            pplStack_e8 = &plStackX_8;
            plStackX_8 = plVar4;
            (**(code **)(*plVar4 + 0x28))();
            FUN_1801c5e10();
          }
        }
        else {
          FUN_1801c5f20(0,param_6,*piVar3);
        }
        plStack_e0 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
        *(int *)((int64_t)plStack_e0 + 0x14) = (int)pplStackX_10;
        *plStack_e0 = lVar15;
        *(int *)(plStack_e0 + 2) = iVar8;
        *(int *)(plStack_e0 + 3) = iVar9;
        pplStack_e8 = (int64_t **)CONCAT44(pplStack_e8._4_4_,iVar9);
        FUN_1801e8ce0(puVar14 + 0x40,&puStack_d0,&pplStack_e8);
LAB_1801e8055:
        ReleaseSRWLockExclusive(puStack_b0);
      }
      puStack_110 = &system_data_buffer_ptr;
      if (puVar10 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(puVar10);
      }
      puStack_108 = (int8_t *)0x0;
      uStack_f8 = uStack_f8 & 0xffffffff00000000;
      puStack_110 = &system_state_ptr;
      puStack_90 = &system_data_buffer_ptr;
      if (lStack_88 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      lStack_88 = 0;
      uStack_78 = 0;
      puStack_90 = &system_state_ptr;
      puStack_70 = &system_data_buffer_ptr;
      if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      return;
    }
    plVar4 = *(int64_t **)(puVar11 + 0x28);
    if (((((int)pplStackX_10 == *(int *)((int64_t)plVar4 + 0x14)) && ((int)plVar4[2] == iStackX_20)
         ) && (*plVar4 != 0)) &&
       (iVar8 = memcmp(lStackX_18,*plVar4,(int64_t)iStackX_20), iVar8 == 0)) {
      if (lStackX_18 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(lStackX_18);
      }
      *piVar3 = (int)plVar4[3];
      if (lStack_d8 == 0) {
        if (puStack_d0 == (void *)0x0) {
          FUN_1801c5d30();
        }
        else {
          pplStackX_10 = &plStackX_8;
          plStackX_8 = *(int64_t **)(param_2 + 0x58);
          if (plStackX_8 != (int64_t *)0x0) {
            (**(code **)(*plStackX_8 + 0x28))();
          }
          FUN_1801c5e10();
        }
      }
      else {
        FUN_1801c5f20();
      }
      *(int64_t *)(piVar3 + 2) = *plVar4;
      piVar3[4] = (int)plVar4[2];
      puVar13 = *(uint64_t **)(puVar14 + 0x20);
      if (puVar13 == (uint64_t *)0x0) goto LAB_1801e7e09;
      puVar12 = puVar1;
      do {
        if (*(int *)(puVar13 + 4) < (int)plVar4[3]) {
          puVar13 = (uint64_t *)*puVar13;
        }
        else {
          puVar12 = puVar13;
          puVar13 = (uint64_t *)puVar13[1];
        }
      } while (puVar13 != (uint64_t *)0x0);
      if ((puVar12 == puVar1) || ((int)plVar4[3] < *(int *)(puVar12 + 4))) {
LAB_1801e7e09:
        puVar12 = puVar1;
      }
      if (((puVar12 == puVar1) || (lVar15 = puVar12[5], lVar15 == 0)) ||
         (*(char *)(lVar15 + 0x81) == '\0')) {
        FUN_1801de690(system_global_data_ptr,param_1,*(int32_t *)(param_2 + 0xa4),*plVar4);
        pplStack_e8 = (int64_t **)CONCAT44(pplStack_e8._4_4_,(int)plVar4[3]);
        plStack_e0 = param_1;
        FUN_1801e8ce0(puVar1,&puStack_a0,&pplStack_e8);
      }
      else {
        *(uint64_t *)(piVar3 + 6) = *(uint64_t *)(*(int64_t *)(lVar15 + 0x10) + 0x18);
        *(uint64_t *)(piVar3 + 10) = *(uint64_t *)(*(int64_t *)(puVar12[5] + 0x10) + 0x28);
      }
      goto LAB_1801e8055;
    }
    puVar11 = (void *)func_0x00018066bd70(puVar11);
  } while( true );
}






// 函数: void FUN_1801e80e0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801e80e0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1801e88e0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



uint64_t * FUN_1801e8100(uint64_t *param_1,uint64_t *param_2)

{
  *param_1 = *param_2;
  param_1[1] = &system_state_ptr;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  param_1[1] = &system_data_buffer_ptr;
  param_1[4] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *(int32_t *)(param_1 + 3) = *(int32_t *)(param_2 + 3);
  param_1[2] = param_2[2];
  *(int32_t *)((int64_t)param_1 + 0x24) = *(int32_t *)((int64_t)param_2 + 0x24);
  *(int32_t *)(param_1 + 4) = *(int32_t *)(param_2 + 4);
  *(int32_t *)(param_2 + 3) = 0;
  param_2[2] = 0;
  param_2[4] = 0;
  param_1[5] = &system_state_ptr;
  param_1[6] = 0;
  *(int32_t *)(param_1 + 7) = 0;
  param_1[5] = &system_data_buffer_ptr;
  param_1[8] = 0;
  param_1[6] = 0;
  *(int32_t *)(param_1 + 7) = 0;
  *(int32_t *)(param_1 + 7) = *(int32_t *)(param_2 + 7);
  param_1[6] = param_2[6];
  *(int32_t *)((int64_t)param_1 + 0x44) = *(int32_t *)((int64_t)param_2 + 0x44);
  *(int32_t *)(param_1 + 8) = *(int32_t *)(param_2 + 8);
  *(int32_t *)(param_2 + 7) = 0;
  param_2[6] = 0;
  param_2[8] = 0;
  param_1[9] = &system_state_ptr;
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xb) = 0;
  param_1[9] = &system_data_buffer_ptr;
  param_1[0xc] = 0;
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xb) = 0;
  *(int32_t *)(param_1 + 0xb) = *(int32_t *)(param_2 + 0xb);
  param_1[10] = param_2[10];
  *(int32_t *)((int64_t)param_1 + 100) = *(int32_t *)((int64_t)param_2 + 100);
  *(int32_t *)(param_1 + 0xc) = *(int32_t *)(param_2 + 0xc);
  *(int32_t *)(param_2 + 0xb) = 0;
  param_2[10] = 0;
  param_2[0xc] = 0;
  return param_1;
}



uint64_t *
FUN_1801e8210(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puVar1;
  
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_config_ptr;
  param_1[1] = param_1 + 3;
  *(int32_t *)(param_1 + 2) = 0;
  *(int8_t *)(param_1 + 3) = 0;
  *(int32_t *)(param_1 + 2) = *(int32_t *)(param_2 + 0x10);
  puVar1 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar1 = *(void **)(param_2 + 8);
  }
  strcpy_s(param_1[1],0x10,puVar1,param_4,0xfffffffffffffffe);
  return param_1;
}



uint64_t *
FUN_1801e8280(uint64_t *param_1,uint64_t *param_2,int8_t param_3,uint64_t param_4,
             int64_t param_5)

{
  char cVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int8_t auStackX_18 [16];
  uint64_t *puStack_a8;
  int64_t lStack_a0;
  uint64_t *puStack_98;
  uint64_t *puStack_90;
  uint64_t *puStack_88;
  int64_t lStack_80;
  uint64_t *puStack_78;
  int64_t lStack_70;
  int64_t lStack_68;
  int64_t lStack_60;
  int64_t lStack_58;
  int64_t lStack_50;
  int64_t lStack_48;
  
  auStackX_18[0] = param_3;
  lVar2 = FUN_1801e9e00(param_1,param_4,auStackX_18,param_5);
  if (lVar2 != 0) {
    FUN_1801e9ce0(param_1,param_2,lVar2,auStackX_18[0],param_5);
    return param_2;
  }
  cVar1 = '\x01';
  puVar4 = param_1;
  if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
    puVar3 = (uint64_t *)param_1[2];
    do {
      puVar4 = puVar3;
      puStack_78 = puVar4 + 4;
      lStack_a0 = (int64_t)puVar4 + 0x3c;
      puStack_98 = puVar4 + 7;
      puStack_90 = puVar4 + 6;
      puStack_88 = puVar4 + 5;
      lStack_80 = (int64_t)puVar4 + 0x34;
      lStack_48 = param_5;
      lStack_70 = param_5 + 0x1c;
      lStack_68 = param_5 + 0x18;
      lStack_60 = param_5 + 0x10;
      lStack_58 = param_5 + 8;
      lStack_50 = param_5 + 0x14;
      cVar1 = func_0x0001801eb6f0(&lStack_70,&lStack_a0);
      if (cVar1 == '\0') {
        puVar3 = (uint64_t *)*puVar4;
      }
      else {
        puVar3 = (uint64_t *)puVar4[1];
      }
    } while (puVar3 != (uint64_t *)0x0);
  }
  puVar3 = puVar4;
  if (cVar1 == '\0') {
LAB_1801e83ce:
    puStack_78 = puVar3 + 4;
    lStack_48 = param_5;
    lStack_70 = param_5 + 0x1c;
    lStack_68 = param_5 + 0x18;
    lStack_60 = param_5 + 0x10;
    lStack_58 = param_5 + 8;
    lStack_50 = param_5 + 0x14;
    lStack_a0 = (int64_t)puVar3 + 0x3c;
    puStack_98 = puVar3 + 7;
    puStack_90 = puVar3 + 6;
    puStack_88 = puVar3 + 5;
    lStack_80 = (int64_t)puVar3 + 0x34;
    cVar1 = func_0x0001801eb6f0(&lStack_a0,&lStack_70);
    if (cVar1 == '\0') goto LAB_1801e8456;
  }
  else if (puVar4 != (uint64_t *)param_1[1]) {
    puVar3 = (uint64_t *)func_0x00018066b9a0(puVar4);
    goto LAB_1801e83ce;
  }
  FUN_1801e9ce0(param_1,&puStack_a8,puVar4,0,param_5);
  puVar3 = puStack_a8;
LAB_1801e8456:
  *param_2 = puVar3;
  return param_2;
}



uint64_t * FUN_1801e82fc(void)

{
  uint64_t *puVar1;
  char cVar2;
  uint64_t *puVar3;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  uint64_t *in_R10;
  
  do {
    puVar3 = in_R10;
    *(int64_t *)(unaff_RBP + -0x19) = unaff_RBX + 0x1c;
    *(uint64_t **)(unaff_RBP + -0x21) = puVar3 + 4;
    *(int64_t *)(unaff_RBP + -0x49) = (int64_t)puVar3 + 0x3c;
    *(int64_t *)(unaff_RBP + -0x11) = unaff_RBX + 0x18;
    *(uint64_t **)(unaff_RBP + -0x41) = puVar3 + 7;
    *(uint64_t **)(unaff_RBP + -0x39) = puVar3 + 6;
    *(uint64_t **)(unaff_RBP + -0x31) = puVar3 + 5;
    *(int64_t *)(unaff_RBP + -0x29) = (int64_t)puVar3 + 0x34;
    *(int64_t *)(unaff_RBP + -9) = unaff_RBX + 0x10;
    *(int64_t *)(unaff_RBP + -1) = unaff_RBX + 8;
    *(int64_t *)(unaff_RBP + 7) = unaff_RBX + 0x14;
    *(int64_t *)(unaff_RBP + 0xf) = unaff_RBX;
    cVar2 = func_0x0001801eb6f0(unaff_RBP + -0x19,unaff_RBP + -0x49);
    if (cVar2 == '\0') {
      in_R10 = (uint64_t *)*puVar3;
    }
    else {
      in_R10 = (uint64_t *)puVar3[1];
    }
  } while (in_R10 != (uint64_t *)0x0);
  puVar1 = *(uint64_t **)(unaff_RBP + 0x67);
  if (cVar2 == '\0') {
LAB_1801e83ce:
    *(int64_t *)(unaff_RBP + 0xf) = unaff_RBX;
    *(uint64_t **)(unaff_RBP + -0x21) = puVar3 + 4;
    *(int64_t *)(unaff_RBP + -0x19) = unaff_RBX + 0x1c;
    *(int64_t *)(unaff_RBP + -0x11) = unaff_RBX + 0x18;
    *(int64_t *)(unaff_RBP + -9) = unaff_RBX + 0x10;
    *(int64_t *)(unaff_RBP + -1) = unaff_RBX + 8;
    *(int64_t *)(unaff_RBP + 7) = unaff_RBX + 0x14;
    *(int64_t *)(unaff_RBP + -0x49) = (int64_t)puVar3 + 0x3c;
    *(uint64_t **)(unaff_RBP + -0x41) = puVar3 + 7;
    *(uint64_t **)(unaff_RBP + -0x39) = puVar3 + 6;
    *(uint64_t **)(unaff_RBP + -0x31) = puVar3 + 5;
    *(int64_t *)(unaff_RBP + -0x29) = (int64_t)puVar3 + 0x34;
    cVar2 = func_0x0001801eb6f0(unaff_RBP + -0x49,unaff_RBP + -0x19);
    if (cVar2 == '\0') goto LAB_1801e8456;
  }
  else if (puVar3 != *(uint64_t **)(unaff_RDI + 8)) {
    puVar3 = (uint64_t *)func_0x00018066b9a0(puVar3);
    goto LAB_1801e83ce;
  }
  FUN_1801e9ce0();
  puVar3 = *(uint64_t **)(unaff_RBP + -0x51);
LAB_1801e8456:
  *puVar1 = puVar3;
  return puVar1;
}






// 函数: void FUN_1801e83b6(void)
void FUN_1801e83b6(void)

{
  char in_AL;
  char cVar1;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  int64_t in_R11;
  
  if (in_AL == '\0') {
LAB_1801e83ce:
    *(int64_t *)(unaff_RBP + 0xf) = unaff_RBX;
    *(int64_t *)(unaff_RBP + -0x21) = in_R11 + 0x20;
    *(int64_t *)(unaff_RBP + -0x19) = unaff_RBX + 0x1c;
    *(int64_t *)(unaff_RBP + -0x11) = unaff_RBX + 0x18;
    *(int64_t *)(unaff_RBP + -9) = unaff_RBX + 0x10;
    *(int64_t *)(unaff_RBP + -1) = unaff_RBX + 8;
    *(int64_t *)(unaff_RBP + 7) = unaff_RBX + 0x14;
    *(int64_t *)(unaff_RBP + -0x49) = in_R11 + 0x3c;
    *(int64_t *)(unaff_RBP + -0x41) = in_R11 + 0x38;
    *(int64_t *)(unaff_RBP + -0x39) = in_R11 + 0x30;
    *(int64_t *)(unaff_RBP + -0x31) = in_R11 + 0x28;
    *(int64_t *)(unaff_RBP + -0x29) = in_R11 + 0x34;
    cVar1 = func_0x0001801eb6f0(unaff_RBP + -0x49,unaff_RBP + -0x19);
    if (cVar1 == '\0') goto LAB_1801e8456;
  }
  else if (in_R11 != *(int64_t *)(unaff_RDI + 8)) {
    in_R11 = func_0x00018066b9a0();
    goto LAB_1801e83ce;
  }
  FUN_1801e9ce0();
  in_R11 = *(int64_t *)(unaff_RBP + -0x51);
LAB_1801e8456:
  *unaff_RSI = in_R11;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1801e8470(int64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             int *param_5)

{
  bool bVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t uVar6;
  
  plVar3 = (int64_t *)*param_1;
  if ((param_4 == plVar3) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (param_4 = plVar3, *(int *)(plVar3 + 4) < *param_5)) {
LAB_1801e84df:
      uVar6 = 0;
      goto LAB_1801e84e2;
    }
  }
  else {
    plVar3 = (int64_t *)func_0x00018066bd70(param_4);
    if (((int)param_4[4] < *param_5) && (*param_5 < (int)plVar3[4])) {
      if (*param_4 == 0) goto LAB_1801e84df;
      uVar6 = 1;
      param_4 = plVar3;
LAB_1801e84e2:
      if (param_4 != (int64_t *)0x0) {
        FUN_1801e9fd0(param_1,param_2,param_4,uVar6,param_5);
        return param_2;
      }
    }
  }
  bVar1 = true;
  plVar3 = param_1;
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    plVar4 = (int64_t *)param_1[2];
    do {
      plVar3 = plVar4;
      bVar1 = *param_5 < (int)plVar3[4];
      if (*param_5 < (int)plVar3[4]) {
        plVar4 = (int64_t *)plVar3[1];
      }
      else {
        plVar4 = (int64_t *)*plVar3;
      }
    } while (plVar4 != (int64_t *)0x0);
  }
  plVar4 = plVar3;
  if (bVar1) {
    if (plVar3 == (int64_t *)param_1[1]) {
      iVar2 = *param_5;
      goto LAB_1801e854a;
    }
    plVar4 = (int64_t *)func_0x00018066b9a0(plVar3);
  }
  iVar2 = *param_5;
  if (iVar2 <= (int)plVar4[4]) {
    *param_2 = plVar4;
    return param_2;
  }
LAB_1801e854a:
  if ((plVar3 == param_1) || (iVar2 < (int)plVar3[4])) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  lVar5 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x48,(char)param_1[5]);
  *(int *)(lVar5 + 0x20) = *param_5;
  *(uint64_t *)(lVar5 + 0x28) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(int32_t *)(lVar5 + 0x40) = 3;
                    // WARNING: Subroutine does not return
  SystemStateController(lVar5,plVar3,param_1,uVar6);
}






// 函数: void FUN_1801e85e0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801e85e0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 != (uint64_t *)0x0) {
    FUN_1801e85e0(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
    FUN_18004b730();
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801e8650(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801e8650(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int32_t *puVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  
  uVar15 = 0xfffffffffffffffe;
  puVar11 = (uint64_t *)param_1[1];
  if (param_2 <= (uint64_t)((param_1[2] - (int64_t)puVar11) / 0x68)) {
    if (param_2 == 0) {
      param_1[1] = (int64_t)puVar11;
      return;
    }
                    // WARNING: Subroutine does not return
    memset(puVar11,0,0x68,param_4,0xfffffffffffffffe);
  }
  puVar13 = (uint64_t *)*param_1;
  lVar12 = ((int64_t)puVar11 - (int64_t)puVar13) / 0x68;
  uVar14 = lVar12 * 2;
  if (lVar12 == 0) {
    uVar14 = 1;
  }
  if (uVar14 < lVar12 + param_2) {
    uVar14 = lVar12 + param_2;
  }
  puVar6 = (int32_t *)0x0;
  if (uVar14 != 0) {
    puVar6 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar14 * 0x68,(char)param_1[3]);
    puVar11 = (uint64_t *)param_1[1];
    puVar13 = (uint64_t *)*param_1;
  }
  puVar9 = puVar6;
  if (puVar13 != puVar11) {
    puVar8 = puVar13 + 5;
    lVar12 = (int64_t)puVar6 - (int64_t)puVar13;
    puVar13 = (uint64_t *)&system_state_ptr;
    do {
      *puVar9 = *(int32_t *)(puVar8 + -5);
      *(int32_t *)(lVar12 + -0x24 + (int64_t)puVar8) = *(int32_t *)((int64_t)puVar8 + -0x24)
      ;
      *(uint64_t *)((int64_t)puVar8 + lVar12 + -0x20) = puVar8[-4];
      uVar5 = puVar8[-2];
      puVar7 = (uint64_t *)(lVar12 + -0x18 + (int64_t)puVar8);
      *puVar7 = puVar8[-3];
      puVar7[1] = uVar5;
      *(int32_t *)(lVar12 + -8 + (int64_t)puVar8) = *(int32_t *)(puVar8 + -1);
      *(uint64_t *)(lVar12 + (int64_t)puVar8) = *puVar8;
      *puVar8 = 0;
      puVar7 = (uint64_t *)((int64_t)puVar8 + lVar12 + 8);
      *puVar7 = &system_state_ptr;
      *(uint64_t *)(lVar12 + 0x10 + (int64_t)puVar8) = 0;
      *(int32_t *)(lVar12 + 0x18 + (int64_t)puVar8) = 0;
      *puVar7 = &system_data_buffer_ptr;
      *(uint64_t *)(lVar12 + 0x20 + (int64_t)puVar8) = 0;
      *(uint64_t *)(lVar12 + 0x10 + (int64_t)puVar8) = 0;
      *(int32_t *)(lVar12 + 0x18 + (int64_t)puVar8) = 0;
      *(int32_t *)(lVar12 + 0x18 + (int64_t)puVar8) = *(int32_t *)(puVar8 + 3);
      *(uint64_t *)(lVar12 + 0x10 + (int64_t)puVar8) = puVar8[2];
      *(int32_t *)(lVar12 + 0x24 + (int64_t)puVar8) = *(int32_t *)((int64_t)puVar8 + 0x24);
      *(int32_t *)(lVar12 + 0x20 + (int64_t)puVar8) = *(int32_t *)(puVar8 + 4);
      *(int32_t *)(puVar8 + 3) = 0;
      puVar8[2] = 0;
      puVar8[4] = 0;
      uVar2 = *(int32_t *)((int64_t)puVar8 + 0x2c);
      uVar3 = *(int32_t *)(puVar8 + 6);
      uVar4 = *(int32_t *)((int64_t)puVar8 + 0x34);
      puVar1 = (int32_t *)(lVar12 + 0x28 + (int64_t)puVar8);
      *puVar1 = *(int32_t *)(puVar8 + 5);
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      *(uint64_t *)(lVar12 + 0x38 + (int64_t)puVar8) = puVar8[7];
      puVar8[7] = 0;
      puVar9 = puVar9 + 0x1a;
      puVar7 = puVar8 + 8;
      puVar8 = puVar8 + 0xd;
    } while (puVar7 != puVar11);
  }
  if (param_2 == 0) {
    lVar12 = param_1[1];
    lVar10 = *param_1;
    if (lVar10 != lVar12) {
      do {
        FUN_18009e960(lVar10 + 8);
        lVar10 = lVar10 + 0x68;
      } while (lVar10 != lVar12);
      lVar10 = *param_1;
    }
    if (lVar10 == 0) {
      *param_1 = (int64_t)puVar6;
      param_1[1] = (int64_t)puVar9;
      param_1[2] = (int64_t)(puVar6 + uVar14 * 0x1a);
      return;
    }
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(lVar10);
  }
                    // WARNING: Subroutine does not return
  memset(puVar9,0,0x68,puVar13,uVar15);
}






// 函数: void FUN_1801e88e0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801e88e0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 != (uint64_t *)0x0) {
    FUN_1801e88e0(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
    FUN_18009e960(param_2 + 9);
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801e8960(int64_t *param_1,int64_t param_2)
void FUN_1801e8960(int64_t *param_1,int64_t param_2)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  
  lVar7 = param_1[1];
  lVar6 = *param_1;
  lVar5 = (lVar7 - lVar6) / 0x50;
  puVar1 = (uint64_t *)0x0;
  if (lVar5 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = lVar5 * 2;
    if (lVar5 == 0) goto LAB_1801e89e3;
  }
  puVar1 = (uint64_t *)
           CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar5 * 0x50,(char)param_1[3],lVar6,0xfffffffffffffffe);
  lVar7 = param_1[1];
  lVar6 = *param_1;
LAB_1801e89e3:
  puVar4 = puVar1;
  if (lVar6 != lVar7) {
    lVar6 = lVar6 - (int64_t)puVar1;
    puVar3 = puVar1 + 7;
    do {
      *puVar4 = &system_state_ptr;
      puVar3[-6] = 0;
      *(int32_t *)(puVar3 + -5) = 0;
      *puVar4 = &system_data_buffer_ptr;
      puVar3[-4] = 0;
      puVar3[-6] = 0;
      *(int32_t *)(puVar3 + -5) = 0;
      *(int32_t *)(puVar3 + -5) = *(int32_t *)(lVar6 + -0x28 + (int64_t)puVar3);
      puVar3[-6] = *(uint64_t *)(lVar6 + -0x30 + (int64_t)puVar3);
      *(int32_t *)((int64_t)puVar3 + -0x1c) = *(int32_t *)(lVar6 + -0x1c + (int64_t)puVar3);
      *(int32_t *)(puVar3 + -4) = *(int32_t *)(lVar6 + -0x20 + (int64_t)puVar3);
      *(int32_t *)(lVar6 + -0x28 + (int64_t)puVar3) = 0;
      *(uint64_t *)(lVar6 + -0x30 + (int64_t)puVar3) = 0;
      *(uint64_t *)(lVar6 + -0x20 + (int64_t)puVar3) = 0;
      puVar3[-3] = *(uint64_t *)(lVar6 + -0x18 + (int64_t)puVar3);
      *(int32_t *)(puVar3 + -2) = *(int32_t *)(lVar6 + -0x10 + (int64_t)puVar3);
      puVar3[-1] = &system_state_ptr;
      *puVar3 = 0;
      *(int32_t *)(puVar3 + 1) = 0;
      puVar3[-1] = &system_data_buffer_ptr;
      puVar3[2] = 0;
      *puVar3 = 0;
      *(int32_t *)(puVar3 + 1) = 0;
      *(int32_t *)(puVar3 + 1) = *(int32_t *)(lVar6 + 8 + (int64_t)puVar3);
      *puVar3 = *(uint64_t *)(lVar6 + (int64_t)puVar3);
      *(int32_t *)((int64_t)puVar3 + 0x14) = *(int32_t *)(lVar6 + 0x14 + (int64_t)puVar3);
      *(int32_t *)(puVar3 + 2) = *(int32_t *)(lVar6 + 0x10 + (int64_t)puVar3);
      *(int32_t *)(lVar6 + 8 + (int64_t)puVar3) = 0;
      *(uint64_t *)(lVar6 + (int64_t)puVar3) = 0;
      *(uint64_t *)(lVar6 + 0x10 + (int64_t)puVar3) = 0;
      puVar4 = puVar4 + 10;
      lVar2 = (int64_t)puVar3 + lVar6 + 0x18;
      puVar3 = puVar3 + 10;
    } while (lVar2 != lVar7);
  }
  SystemCore_NetworkHandler0(puVar4,param_2);
  puVar4[4] = *(uint64_t *)(param_2 + 0x20);
  *(int32_t *)(puVar4 + 5) = *(int32_t *)(param_2 + 0x28);
  SystemCore_NetworkHandler0(puVar4 + 6,param_2 + 0x30);
  lVar7 = param_1[1];
  lVar6 = *param_1;
  if (lVar6 != lVar7) {
    do {
      FUN_1801c5b20(lVar6);
      lVar6 = lVar6 + 0x50;
    } while (lVar6 != lVar7);
    lVar6 = *param_1;
  }
  if (lVar6 == 0) {
    *param_1 = (int64_t)puVar1;
    param_1[1] = (int64_t)(puVar4 + 10);
    param_1[2] = (int64_t)(puVar1 + lVar5 * 10);
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(lVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801e8b60(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801e8b60(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int64_t lVar7;
  void *puVar8;
  int64_t lVar9;
  
  lVar6 = param_1[1];
  lVar7 = *param_1;
  lVar9 = (lVar6 - lVar7) / 0x28;
  puVar3 = (uint64_t *)0x0;
  if (lVar9 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = lVar9 * 2;
    if (lVar9 == 0) goto LAB_1801e8bf0;
  }
  puVar3 = (uint64_t *)
           CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar9 * 0x28,(char)param_1[3],param_4,0xfffffffffffffffe);
  lVar6 = param_1[1];
  lVar7 = *param_1;
LAB_1801e8bf0:
  puVar4 = puVar3;
  if (lVar7 != lVar6) {
    lVar7 = lVar7 - (int64_t)puVar3;
    do {
      *puVar4 = &system_state_ptr;
      puVar4[1] = 0;
      *(int32_t *)(puVar4 + 2) = 0;
      *puVar4 = &system_config_ptr;
      puVar4[1] = puVar4 + 3;
      *(int32_t *)(puVar4 + 2) = 0;
      *(int8_t *)(puVar4 + 3) = 0;
      *(int32_t *)(puVar4 + 2) = *(int32_t *)(lVar7 + 0x10 + (int64_t)puVar4);
      puVar1 = *(void **)(lVar7 + 8 + (int64_t)puVar4);
      puVar8 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar8 = puVar1;
      }
      strcpy_s(puVar4[1],0x10,puVar8);
      puVar4 = puVar4 + 5;
    } while (lVar7 + (int64_t)puVar4 != lVar6);
  }
  FUN_1801e8210(puVar4,param_2);
  puVar2 = (uint64_t *)param_1[1];
  puVar5 = (uint64_t *)*param_1;
  if (puVar5 != puVar2) {
    do {
      (**(code **)*puVar5)(puVar5,0);
      puVar5 = puVar5 + 5;
    } while (puVar5 != puVar2);
    puVar5 = (uint64_t *)*param_1;
  }
  if (puVar5 == (uint64_t *)0x0) {
    *param_1 = (int64_t)puVar3;
    param_1[1] = (int64_t)(puVar4 + 5);
    param_1[2] = (int64_t)(puVar3 + lVar9 * 5);
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(puVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




