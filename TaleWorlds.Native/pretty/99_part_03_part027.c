#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part027.c - 1 个函数

// 函数: void FUN_1801e6150(int64_t *param_1,int64_t param_2,int64_t param_3,int param_4,
void FUN_1801e6150(int64_t *param_1,int64_t param_2,int64_t param_3,int param_4,
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
  goto LAB_1801e6284;
  uVar2 = *(uint *)(lVar15 + 0x2c0);
  if (*(int64_t *)(lVar15 + 0x2b8) == 0) {
LAB_1801e624e:
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
    goto LAB_1801e624e;
  }
  if (puVar10 != (int8_t *)0x0) {
    puVar10[uVar2] = 0;
  }
  uStack_f8 = CONCAT44(*(int32_t *)(lVar15 + 0x2cc),(int32_t)uStack_f8);
  iVar8 = (int)plStackX_8;
  uStack_100 = uVar2;
LAB_1801e6284:
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
  piVar3 = (int *)param_1[1];
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
LAB_1801e6635:
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
      if (puVar13 == (uint64_t *)0x0) goto LAB_1801e63e9;
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
LAB_1801e63e9:
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
        *(uint64_t *)(piVar3 + 6) = *(uint64_t *)(*(int64_t *)(lVar15 + 8) + 0x18);
        *(uint64_t *)(piVar3 + 10) = *(uint64_t *)(*(int64_t *)(puVar12[5] + 8) + 0x28);
      }
      goto LAB_1801e6635;
    }
    puVar11 = (void *)func_0x00018066bd70(puVar11);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1801e66c0(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  
  puVar7 = (uint64_t *)param_1[1];
  if (puVar7 < (uint64_t *)param_1[2]) {
    *puVar7 = *param_2;
    uVar4 = param_3[1];
    puVar7[1] = *param_3;
    puVar7[2] = uVar4;
    param_1[1] = param_1[1] + 0x18;
    return (uint64_t *)(param_1[1] - 0x18);
  }
  puVar8 = (uint64_t *)*param_1;
  lVar6 = ((int64_t)puVar7 - (int64_t)puVar8) / 0x18;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) {
      puVar5 = (uint64_t *)0x0;
      goto LAB_1801e6777;
    }
  }
  puVar5 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,lVar6 * 0x18,(char)param_1[3]);
  puVar8 = (uint64_t *)*param_1;
  puVar7 = (uint64_t *)param_1[1];
LAB_1801e6777:
  if (puVar8 != puVar7) {
                    // WARNING: Subroutine does not return
    memmove(puVar5,puVar8,(int64_t)puVar7 - (int64_t)puVar8);
  }
  *puVar5 = *param_2;
  uVar1 = *(int32_t *)((int64_t)param_3 + 4);
  uVar2 = *(int32_t *)(param_3 + 1);
  uVar3 = *(int32_t *)((int64_t)param_3 + 0xc);
  *(int32_t *)(puVar5 + 1) = *(int32_t *)param_3;
  *(int32_t *)((int64_t)puVar5 + 0xc) = uVar1;
  *(int32_t *)(puVar5 + 2) = uVar2;
  *(int32_t *)((int64_t)puVar5 + 0x14) = uVar3;
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (uint64_t)puVar5;
  param_1[2] = (uint64_t)(puVar5 + lVar6 * 3);
  param_1[1] = (uint64_t)(puVar5 + 3);
  return puVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1801e6717(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  int64_t *unaff_RBX;
  int32_t *unaff_RBP;
  int64_t lVar5;
  int64_t unaff_RDI;
  uint64_t *unaff_R15;
  
  if (param_1 / 0x18 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = (param_1 / 0x18) * 2;
    if (lVar5 == 0) {
      puVar4 = (uint64_t *)0x0;
      goto LAB_1801e6777;
    }
  }
  puVar4 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,lVar5 * 0x18,(char)unaff_RBX[3]);
  param_4 = *unaff_RBX;
  unaff_RDI = unaff_RBX[1];
LAB_1801e6777:
  if (param_4 != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(puVar4,param_4,unaff_RDI - param_4);
  }
  *puVar4 = *unaff_R15;
  uVar1 = unaff_RBP[1];
  uVar2 = unaff_RBP[2];
  uVar3 = unaff_RBP[3];
  *(int32_t *)(puVar4 + 1) = *unaff_RBP;
  *(int32_t *)((int64_t)puVar4 + 0xc) = uVar1;
  *(int32_t *)(puVar4 + 2) = uVar2;
  *(int32_t *)((int64_t)puVar4 + 0x14) = uVar3;
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RBX = (int64_t)puVar4;
  unaff_RBX[2] = (int64_t)(puVar4 + lVar5 * 3);
  unaff_RBX[1] = (int64_t)(puVar4 + 3);
  return puVar4;
}



void thunk_FUN_18064e900(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



int64_t FUN_1801e6800(uint64_t *param_1,uint *param_2)

{
  bool bVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  char cVar5;
  char cStackX_8;
  uint8_t uStackX_9;
  
  puVar2 = param_1;
  if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
    puVar3 = (uint64_t *)param_1[2];
    do {
      if (*(uint *)(puVar3 + 4) < *param_2) {
LAB_1801e687a:
        puVar4 = (uint64_t *)*puVar3;
        bVar1 = true;
      }
      else {
        if (*(uint *)(puVar3 + 4) <= *param_2) {
          if (*(ushort *)(puVar3 + 6) < (ushort)param_2[4]) goto LAB_1801e687a;
          if (*(ushort *)(puVar3 + 6) <= (ushort)param_2[4]) {
            if (*(uint *)((int64_t)puVar3 + 0x24) < param_2[1]) goto LAB_1801e687a;
            if (*(uint *)((int64_t)puVar3 + 0x24) <= param_2[1]) {
              if (*(uint *)(puVar3 + 5) < param_2[2]) goto LAB_1801e687a;
              if (*(uint *)(puVar3 + 5) <= param_2[2]) {
                if ((*(uint *)((int64_t)puVar3 + 0x2c) < param_2[3]) ||
                   ((*(uint *)((int64_t)puVar3 + 0x2c) <= param_2[3] &&
                    (*(byte *)((int64_t)puVar3 + 0x32) < *(byte *)((int64_t)param_2 + 0x12)))))
                goto LAB_1801e687a;
              }
            }
          }
        }
        puVar4 = (uint64_t *)puVar3[1];
        bVar1 = false;
      }
      if (bVar1) {
        puVar3 = puVar2;
      }
      puVar2 = puVar3;
      puVar3 = puVar4;
    } while (puVar4 != (uint64_t *)0x0);
  }
  if (puVar2 != param_1) {
    if (*(uint *)(puVar2 + 4) <= *param_2) {
      if (*(uint *)(puVar2 + 4) < *param_2) goto LAB_1801e692e;
      if (*(ushort *)(puVar2 + 6) <= (ushort)param_2[4]) {
        if (*(ushort *)(puVar2 + 6) < (ushort)param_2[4]) goto LAB_1801e692e;
        if (*(uint *)((int64_t)puVar2 + 0x24) <= param_2[1]) {
          if (*(uint *)((int64_t)puVar2 + 0x24) < param_2[1]) goto LAB_1801e692e;
          if (*(uint *)(puVar2 + 5) <= param_2[2]) {
            if (*(uint *)(puVar2 + 5) < param_2[2]) goto LAB_1801e692e;
            if ((*(uint *)((int64_t)puVar2 + 0x2c) <= param_2[3]) &&
               ((*(uint *)((int64_t)puVar2 + 0x2c) < param_2[3] ||
                (*(byte *)((int64_t)puVar2 + 0x32) <= *(byte *)((int64_t)param_2 + 0x12)))))
            goto LAB_1801e692e;
          }
        }
      }
    }
  }
  puVar2 = (uint64_t *)FUN_1801ea180(param_1,puVar2,&cStackX_8,param_2);
  cVar5 = cStackX_8;
  if (puVar2 == (uint64_t *)0x0) {
    puVar2 = (uint64_t *)FUN_1801ea730(param_1,&cStackX_8,param_2);
    if (cStackX_8 == '\0') goto LAB_1801e692e;
    cVar5 = '\0';
  }
  FUN_1801ea0a0(param_1,&cStackX_8,puVar2,cVar5,param_2);
  puVar2 = (uint64_t *)CONCAT71(uStackX_9,cStackX_8);
LAB_1801e692e:
  return (int64_t)puVar2 + 0x34;
}



uint64_t * FUN_1801e6940(uint64_t *param_1,uint64_t *param_2,uint *param_3)

{
  uint uVar1;
  bool bVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  
  if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
    uVar1 = *param_3;
    puVar3 = (uint64_t *)param_1[2];
    puVar5 = param_1;
    do {
      if (*(uint *)(puVar3 + 4) < uVar1) {
LAB_1801e69bc:
        puVar4 = (uint64_t *)*puVar3;
        bVar2 = true;
      }
      else {
        if (*(uint *)(puVar3 + 4) <= uVar1) {
          if (*(ushort *)(puVar3 + 6) < (ushort)param_3[4]) goto LAB_1801e69bc;
          if (*(ushort *)(puVar3 + 6) <= (ushort)param_3[4]) {
            if (*(uint *)((int64_t)puVar3 + 0x24) < param_3[1]) goto LAB_1801e69bc;
            if (*(uint *)((int64_t)puVar3 + 0x24) <= param_3[1]) {
              if (*(uint *)(puVar3 + 5) < param_3[2]) goto LAB_1801e69bc;
              if (*(uint *)(puVar3 + 5) <= param_3[2]) {
                if ((*(uint *)((int64_t)puVar3 + 0x2c) < param_3[3]) ||
                   ((*(uint *)((int64_t)puVar3 + 0x2c) <= param_3[3] &&
                    (*(byte *)((int64_t)puVar3 + 0x32) < *(byte *)((int64_t)param_3 + 0x12)))))
                goto LAB_1801e69bc;
              }
            }
          }
        }
        puVar4 = (uint64_t *)puVar3[1];
        bVar2 = false;
      }
      if (bVar2) {
        puVar3 = puVar5;
      }
      puVar5 = puVar3;
      puVar3 = puVar4;
    } while (puVar4 != (uint64_t *)0x0);
    if (puVar5 != param_1) {
      if (*(uint *)(puVar5 + 4) <= uVar1) {
        if (uVar1 <= *(uint *)(puVar5 + 4)) {
          if ((ushort)param_3[4] < *(ushort *)(puVar5 + 6)) goto LAB_1801e6a33;
          if ((ushort)param_3[4] <= *(ushort *)(puVar5 + 6)) {
            if (param_3[1] < *(uint *)((int64_t)puVar5 + 0x24)) goto LAB_1801e6a33;
            if (param_3[1] <= *(uint *)((int64_t)puVar5 + 0x24)) {
              if (param_3[2] < *(uint *)(puVar5 + 5)) goto LAB_1801e6a33;
              if (param_3[2] <= *(uint *)(puVar5 + 5)) {
                if ((param_3[3] < *(uint *)((int64_t)puVar5 + 0x2c)) ||
                   ((param_3[3] <= *(uint *)((int64_t)puVar5 + 0x2c) &&
                    (*(byte *)((int64_t)param_3 + 0x12) < *(byte *)((int64_t)puVar5 + 0x32)))))
                goto LAB_1801e6a33;
              }
            }
          }
        }
        *param_2 = puVar5;
        return param_2;
      }
    }
  }
LAB_1801e6a33:
  *param_2 = param_1;
  return param_2;
}



int64_t FUN_1801e6a50(uint64_t *param_1,uint *param_2)

{
  bool bVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  char cVar5;
  char cStackX_8;
  uint8_t uStackX_9;
  
  puVar2 = param_1;
  if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
    puVar3 = (uint64_t *)param_1[2];
    do {
      if (*(uint *)(puVar3 + 4) < *param_2) {
LAB_1801e6aca:
        puVar4 = (uint64_t *)*puVar3;
        bVar1 = true;
      }
      else {
        if (*(uint *)(puVar3 + 4) <= *param_2) {
          if (*(ushort *)(puVar3 + 6) < (ushort)param_2[4]) goto LAB_1801e6aca;
          if (*(ushort *)(puVar3 + 6) <= (ushort)param_2[4]) {
            if (*(uint *)((int64_t)puVar3 + 0x24) < param_2[1]) goto LAB_1801e6aca;
            if (*(uint *)((int64_t)puVar3 + 0x24) <= param_2[1]) {
              if (*(uint *)(puVar3 + 5) < param_2[2]) goto LAB_1801e6aca;
              if (*(uint *)(puVar3 + 5) <= param_2[2]) {
                if ((*(uint *)((int64_t)puVar3 + 0x2c) < param_2[3]) ||
                   ((*(uint *)((int64_t)puVar3 + 0x2c) <= param_2[3] &&
                    (*(byte *)((int64_t)puVar3 + 0x32) < *(byte *)((int64_t)param_2 + 0x12)))))
                goto LAB_1801e6aca;
              }
            }
          }
        }
        puVar4 = (uint64_t *)puVar3[1];
        bVar1 = false;
      }
      if (bVar1) {
        puVar3 = puVar2;
      }
      puVar2 = puVar3;
      puVar3 = puVar4;
    } while (puVar4 != (uint64_t *)0x0);
  }
  if (puVar2 != param_1) {
    if (*(uint *)(puVar2 + 4) <= *param_2) {
      if (*(uint *)(puVar2 + 4) < *param_2) goto LAB_1801e6b7e;
      if (*(ushort *)(puVar2 + 6) <= (ushort)param_2[4]) {
        if (*(ushort *)(puVar2 + 6) < (ushort)param_2[4]) goto LAB_1801e6b7e;
        if (*(uint *)((int64_t)puVar2 + 0x24) <= param_2[1]) {
          if (*(uint *)((int64_t)puVar2 + 0x24) < param_2[1]) goto LAB_1801e6b7e;
          if (*(uint *)(puVar2 + 5) <= param_2[2]) {
            if (*(uint *)(puVar2 + 5) < param_2[2]) goto LAB_1801e6b7e;
            if ((*(uint *)((int64_t)puVar2 + 0x2c) <= param_2[3]) &&
               ((*(uint *)((int64_t)puVar2 + 0x2c) < param_2[3] ||
                (*(byte *)((int64_t)puVar2 + 0x32) <= *(byte *)((int64_t)param_2 + 0x12)))))
            goto LAB_1801e6b7e;
          }
        }
      }
    }
  }
  puVar2 = (uint64_t *)FUN_1801ea180(param_1,puVar2,&cStackX_8,param_2);
  cVar5 = cStackX_8;
  if (puVar2 == (uint64_t *)0x0) {
    puVar2 = (uint64_t *)FUN_1801ea730(param_1,&cStackX_8,param_2);
    if (cStackX_8 == '\0') goto LAB_1801e6b7e;
    cVar5 = '\0';
  }
  FUN_1801ea320(param_1,&cStackX_8,puVar2,cVar5,param_2);
  puVar2 = (uint64_t *)CONCAT71(uStackX_9,cStackX_8);
LAB_1801e6b7e:
  return (int64_t)puVar2 + 0x34;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




