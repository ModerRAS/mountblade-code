#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part026.c - 3 个函数

// 函数: void FUN_1801e5100(int64_t *param_1,int64_t param_2,int64_t param_3,int param_4,
void FUN_1801e5100(int64_t *param_1,int64_t param_2,int64_t param_3,int param_4,
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
  FUN_180627ae0(&puStack_70,param_2 + 0x60);
  FUN_180627ae0(&puStack_90,param_2 + 0x80);
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
  goto LAB_1801e5234;
  uVar2 = *(uint *)(lVar15 + 0x2c0);
  if (*(int64_t *)(lVar15 + 0x2b8) == 0) {
LAB_1801e51fe:
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
    puVar10 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)iVar8,0x13);
    *puVar10 = 0;
    puStack_108 = puVar10;
    uVar7 = FUN_18064e990(puVar10);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar7);
    goto LAB_1801e51fe;
  }
  if (puVar10 != (int8_t *)0x0) {
    puVar10[uVar2] = 0;
  }
  uStack_f8 = CONCAT44(*(int32_t *)(lVar15 + 0x2cc),(int32_t)uStack_f8);
  iVar8 = (int)plStackX_8;
  uStack_100 = uVar2;
LAB_1801e5234:
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
  piVar3 = (int *)param_1[3];
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
          FUN_18064e900();
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
        plStack_e0 = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x20,8,3);
        *(int *)((int64_t)plStack_e0 + 0x14) = (int)pplStackX_10;
        *plStack_e0 = lVar15;
        *(int *)(plStack_e0 + 2) = iVar8;
        *(int *)(plStack_e0 + 3) = iVar9;
        pplStack_e8 = (int64_t **)CONCAT44(pplStack_e8._4_4_,iVar9);
        FUN_1801e8ce0(puVar14 + 0x40,&puStack_d0,&pplStack_e8);
LAB_1801e55e5:
        ReleaseSRWLockExclusive(puStack_b0);
      }
      puStack_110 = &system_data_buffer_ptr;
      if (puVar10 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar10);
      }
      puStack_108 = (int8_t *)0x0;
      uStack_f8 = uStack_f8 & 0xffffffff00000000;
      puStack_110 = &system_state_ptr;
      puStack_90 = &system_data_buffer_ptr;
      if (lStack_88 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_88 = 0;
      uStack_78 = 0;
      puStack_90 = &system_state_ptr;
      puStack_70 = &system_data_buffer_ptr;
      if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return;
    }
    plVar4 = *(int64_t **)(puVar11 + 0x28);
    if (((((int)pplStackX_10 == *(int *)((int64_t)plVar4 + 0x14)) && ((int)plVar4[2] == iStackX_20)
         ) && (*plVar4 != 0)) &&
       (iVar8 = memcmp(lStackX_18,*plVar4,(int64_t)iStackX_20), iVar8 == 0)) {
      if (lStackX_18 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lStackX_18);
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
      if (puVar13 == (uint64_t *)0x0) goto LAB_1801e5399;
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
LAB_1801e5399:
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
        *(uint64_t *)(piVar3 + 6) = *(uint64_t *)(*(int64_t *)(lVar15 + 0x18) + 0x18);
        *(uint64_t *)(piVar3 + 10) = *(uint64_t *)(*(int64_t *)(puVar12[5] + 0x18) + 0x28);
      }
      goto LAB_1801e55e5;
    }
    puVar11 = (void *)func_0x00018066bd70(puVar11);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801e5670(int64_t *param_1,int64_t param_2,int64_t param_3,int param_4,
void FUN_1801e5670(int64_t *param_1,int64_t param_2,int64_t param_3,int param_4,
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
  FUN_180627ae0(&puStack_70,param_2 + 0x60);
  FUN_180627ae0(&puStack_90,param_2 + 0x80);
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
  goto LAB_1801e57a4;
  uVar2 = *(uint *)(lVar15 + 0x2c0);
  if (*(int64_t *)(lVar15 + 0x2b8) == 0) {
LAB_1801e576e:
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
    puVar10 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)iVar8,0x13);
    *puVar10 = 0;
    puStack_108 = puVar10;
    uVar7 = FUN_18064e990(puVar10);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar7);
    goto LAB_1801e576e;
  }
  if (puVar10 != (int8_t *)0x0) {
    puVar10[uVar2] = 0;
  }
  uStack_f8 = CONCAT44(*(int32_t *)(lVar15 + 0x2cc),(int32_t)uStack_f8);
  iVar8 = (int)plStackX_8;
  uStack_100 = uVar2;
LAB_1801e57a4:
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
  piVar3 = (int *)param_1[5];
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
          FUN_18064e900();
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
        plStack_e0 = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x20,8,3);
        *(int *)((int64_t)plStack_e0 + 0x14) = (int)pplStackX_10;
        *plStack_e0 = lVar15;
        *(int *)(plStack_e0 + 2) = iVar8;
        *(int *)(plStack_e0 + 3) = iVar9;
        pplStack_e8 = (int64_t **)CONCAT44(pplStack_e8._4_4_,iVar9);
        FUN_1801e8ce0(puVar14 + 0x40,&puStack_d0,&pplStack_e8);
LAB_1801e5b55:
        ReleaseSRWLockExclusive(puStack_b0);
      }
      puStack_110 = &system_data_buffer_ptr;
      if (puVar10 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar10);
      }
      puStack_108 = (int8_t *)0x0;
      uStack_f8 = uStack_f8 & 0xffffffff00000000;
      puStack_110 = &system_state_ptr;
      puStack_90 = &system_data_buffer_ptr;
      if (lStack_88 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_88 = 0;
      uStack_78 = 0;
      puStack_90 = &system_state_ptr;
      puStack_70 = &system_data_buffer_ptr;
      if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return;
    }
    plVar4 = *(int64_t **)(puVar11 + 0x28);
    if (((((int)pplStackX_10 == *(int *)((int64_t)plVar4 + 0x14)) && ((int)plVar4[2] == iStackX_20)
         ) && (*plVar4 != 0)) &&
       (iVar8 = memcmp(lStackX_18,*plVar4,(int64_t)iStackX_20), iVar8 == 0)) {
      if (lStackX_18 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lStackX_18);
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
      if (puVar13 == (uint64_t *)0x0) goto LAB_1801e5909;
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
LAB_1801e5909:
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
        *(uint64_t *)(piVar3 + 6) = *(uint64_t *)(*(int64_t *)(lVar15 + 0x28) + 0x18);
        *(uint64_t *)(piVar3 + 10) = *(uint64_t *)(*(int64_t *)(puVar12[5] + 0x28) + 0x28);
      }
      goto LAB_1801e5b55;
    }
    puVar11 = (void *)func_0x00018066bd70(puVar11);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801e5be0(int64_t *param_1,int64_t param_2,int64_t param_3,int param_4,
void FUN_1801e5be0(int64_t *param_1,int64_t param_2,int64_t param_3,int param_4,
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
  FUN_180627ae0(&puStack_70,param_2 + 0x60);
  FUN_180627ae0(&puStack_90,param_2 + 0x80);
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
  goto LAB_1801e5d14;
  uVar2 = *(uint *)(lVar15 + 0x2c0);
  if (*(int64_t *)(lVar15 + 0x2b8) == 0) {
LAB_1801e5cde:
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
    puVar10 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)iVar8,0x13);
    *puVar10 = 0;
    puStack_108 = puVar10;
    uVar7 = FUN_18064e990(puVar10);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar7);
    goto LAB_1801e5cde;
  }
  if (puVar10 != (int8_t *)0x0) {
    puVar10[uVar2] = 0;
  }
  uStack_f8 = CONCAT44(*(int32_t *)(lVar15 + 0x2cc),(int32_t)uStack_f8);
  iVar8 = (int)plStackX_8;
  uStack_100 = uVar2;
LAB_1801e5d14:
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
  piVar3 = (int *)param_1[4];
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
          FUN_18064e900();
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
        plStack_e0 = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x20,8,3);
        *(int *)((int64_t)plStack_e0 + 0x14) = (int)pplStackX_10;
        *plStack_e0 = lVar15;
        *(int *)(plStack_e0 + 2) = iVar8;
        *(int *)(plStack_e0 + 3) = iVar9;
        pplStack_e8 = (int64_t **)CONCAT44(pplStack_e8._4_4_,iVar9);
        FUN_1801e8ce0(puVar14 + 0x40,&puStack_d0,&pplStack_e8);
LAB_1801e60c5:
        ReleaseSRWLockExclusive(puStack_b0);
      }
      puStack_110 = &system_data_buffer_ptr;
      if (puVar10 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar10);
      }
      puStack_108 = (int8_t *)0x0;
      uStack_f8 = uStack_f8 & 0xffffffff00000000;
      puStack_110 = &system_state_ptr;
      puStack_90 = &system_data_buffer_ptr;
      if (lStack_88 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_88 = 0;
      uStack_78 = 0;
      puStack_90 = &system_state_ptr;
      puStack_70 = &system_data_buffer_ptr;
      if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return;
    }
    plVar4 = *(int64_t **)(puVar11 + 0x28);
    if (((((int)pplStackX_10 == *(int *)((int64_t)plVar4 + 0x14)) && ((int)plVar4[2] == iStackX_20)
         ) && (*plVar4 != 0)) &&
       (iVar8 = memcmp(lStackX_18,*plVar4,(int64_t)iStackX_20), iVar8 == 0)) {
      if (lStackX_18 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lStackX_18);
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
      if (puVar13 == (uint64_t *)0x0) goto LAB_1801e5e79;
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
LAB_1801e5e79:
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
        *(uint64_t *)(piVar3 + 6) = *(uint64_t *)(*(int64_t *)(lVar15 + 0x20) + 0x18);
        *(uint64_t *)(piVar3 + 10) = *(uint64_t *)(*(int64_t *)(puVar12[5] + 0x20) + 0x28);
      }
      goto LAB_1801e60c5;
    }
    puVar11 = (void *)func_0x00018066bd70(puVar11);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




