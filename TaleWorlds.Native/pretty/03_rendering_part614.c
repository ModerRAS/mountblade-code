#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part614.c - 15 个函数

// 函数: void FUN_180605bc0(int64_t param_1)
void FUN_180605bc0(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  if ((param_1 != 0) && (*(char *)(param_1 + 0x8be) != '\0')) {
    lVar2 = *(int64_t *)(param_1 + 0x8a8);
    if ((*(int64_t *)(lVar2 + 0x260) != 0) &&
       (lVar1 = *(int64_t *)(*(int64_t *)(lVar2 + 0x260) + 0x210), lVar1 != 0)) {
      *(uint64_t *)(lVar1 + 0x48) = 0;
      *(uint64_t *)(lVar1 + 0x50) = 0;
      lVar2 = *(int64_t *)(param_1 + 0x8a8);
    }
    FUN_1802eeb00(lVar2);
    lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260);
    if ((lVar2 != 0) && (lVar2 = *(int64_t *)(lVar2 + 0x210), lVar2 != 0)) {
      *(int64_t *)(lVar2 + 0x48) = param_1;
      *(code **)(lVar2 + 0x50) = FUN_180541110;
    }
    FUN_1805444c0(param_1);
    FUN_180544ac0(param_1);
  }
  return;
}





// 函数: void FUN_180605c80(int64_t param_1,int8_t param_2)
void FUN_180605c80(int64_t param_1,int8_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lStack_30;
  int32_t uStack_28;
  int8_t auStack_20 [24];
  
  FUN_180540840(param_1,0);
  if (*(int64_t *)(param_1 + 0x8a8) != 0) {
    FUN_1802e9fa0(*(int64_t *)(param_1 + 0x8a8),param_2,1);
  }
  FUN_180540130(param_1);
  if (*(int64_t *)(param_1 + 0x830) != 0) {
    FUN_18054a450();
  }
  lVar2 = *(int64_t *)(param_1 + 0x930);
  lVar1 = lVar2 + 0x2be8;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  uStack_28 = *(int32_t *)(param_1 + 0x938);
  lStack_30 = param_1;
  FUN_1804dd4d0(lVar2 + 0x2b88,auStack_20,&lStack_30);
  iVar3 = _Mtx_unlock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180605ce0(int64_t param_1,int64_t *param_2)
void FUN_180605ce0(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t **pplStackX_18;
  int64_t **pplStackX_20;
  int64_t lStack_30;
  uint64_t uStack_28;
  int8_t auStack_20 [8];
  
  uStack_28 = 0xfffffffffffffffe;
  if (((param_1 != 0) && (*(char *)(param_1 + 0x8be) != '\0')) && (param_2 != (int64_t *)0x0)) {
    uVar4 = FUN_18062b1e0(system_memory_pool_ptr,0x3d0,8,3);
    plVar5 = (int64_t *)FUN_180275090(uVar4);
    plStackX_10 = plVar5;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    pplStackX_18 = &plStackX_8;
    plStackX_8 = param_2;
    (**(code **)(*param_2 + 0x28))(param_2);
    FUN_180275cf0(plVar5,0,&plStackX_8,1);
    uVar4 = *(uint64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260);
    pplStackX_18 = &plStackX_8;
    plStackX_8 = plVar5;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    pplStackX_20 = &plStackX_8;
    FUN_1802fc0f0(uVar4,plStackX_8);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5);
    }
  }
  lVar2 = *(int64_t *)(param_1 + 0x930);
  lVar1 = lVar2 + 0x2be8;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  uStack_28 = CONCAT44(uStack_28._4_4_,*(int32_t *)(param_1 + 0x938));
  lStack_30 = param_1;
  FUN_1804dd4d0(lVar2 + 0x2b88,auStack_20,&lStack_30);
  iVar3 = _Mtx_unlock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}





// 函数: void FUN_180605df0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180605df0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int8_t uVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lStack_30;
  
  if (((param_1 != 0) && (*(char *)(param_1 + 0x8be) != '\0')) && (param_2 != 0)) {
    lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260);
    for (plVar7 = *(int64_t **)(lVar2 + 0x1a8); plVar7 < *(int64_t **)(lVar2 + 0x1b0);
        plVar7 = plVar7 + 1) {
      iVar6 = (**(code **)(*(int64_t *)*plVar7 + 0x98))();
      if (iVar6 == 0) {
        plVar3 = (int64_t *)*plVar7;
        plStackX_10 = plVar3;
        if (plVar3 != (int64_t *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3);
        }
        cVar4 = FUN_1802828a0(plVar3,param_2);
        if ((cVar4 != '\0') && ((plVar3[8] - plVar3[7] & 0xfffffffffffffff0U) == 0)) {
          plStackX_8 = plVar3;
          if (plVar3 != (int64_t *)0x0) {
            (**(code **)(*plVar3 + 0x28))(plVar3);
          }
          pplStackX_18 = &plStackX_8;
          uVar5 = FUN_1802fc790(lVar2,plStackX_8);
          FUN_1802fca80(lVar2,plStackX_8,uVar5);
          if (plStackX_8 != (int64_t *)0x0) {
            (**(code **)(*plStackX_8 + 0x38))();
          }
          if (plVar3 != (int64_t *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3);
          }
          break;
        }
        if (plVar3 != (int64_t *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3);
        }
      }
    }
  }
  uVar8 = 0xfffffffffffffffe;
  lVar1 = *(int64_t *)(param_1 + 0x930);
  lVar2 = lVar1 + 0x2be8;
  lVar9 = lVar2;
  iVar6 = _Mtx_lock(lVar2);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  lStack_30 = param_1;
  FUN_1804dd4d0(lVar1 + 0x2b88,&stack0xffffffffffffffe0,&lStack_30,param_4,uVar8,lVar9,1);
  iVar6 = _Mtx_unlock(lVar2);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  return;
}



uint64_t * FUN_180605fa0(uint64_t *param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int8_t auStack_18 [16];
  
  puVar2 = (uint64_t *)
           FUN_1804bc610(param_1,auStack_18,*(uint64_t *)(*(int64_t *)(param_2 + 0x830) + 0x188))
  ;
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x0001802e8b83)
// WARNING: Removing unreachable block (ram,0x0001802e8ba5)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180605ff0(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_180605ff0(int64_t param_1,int64_t param_2,int64_t param_3)

{
  int *piVar1;
  byte bVar2;
  int8_t uVar3;
  int8_t uVar4;
  int32_t uVar5;
  int64_t *plVar6;
  int iVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int8_t uVar14;
  int64_t *unaff_RBX;
  uint64_t uVar15;
  int64_t *plVar16;
  uint uVar17;
  uint64_t uVar18;
  int32_t uVar19;
  int64_t lVar20;
  uint64_t uVar21;
  int64_t *plStackX_8;
  uint64_t in_stack_ffffffffffffff78;
  uint64_t in_stack_ffffffffffffff80;
  int8_t uVar22;
  int64_t *plStack_50;
  int64_t *plStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  
  uVar18 = 0;
  if (*(int *)(param_3 + 0x58) < 2) {
    *(int32_t *)(param_3 + 0x58) = 2;
  }
  else {
    plStack_50 = (int64_t *)0x0;
    plStack_48 = (int64_t *)0x0;
    uStack_40 = 0;
    uStack_38._0_4_ = 0x16;
    plVar11 = *(int64_t **)(param_3 + 0x38);
    iVar7 = (int)(*(int64_t *)(param_3 + 0x40) - (int64_t)plVar11 >> 4);
    lVar20 = (int64_t)iVar7;
    uVar13 = uVar18;
    uVar15 = uVar18;
    uVar21 = uVar18;
    uVar19 = 0x16;
    if (0 < iVar7) {
      do {
        plVar11 = *(int64_t **)(param_3 + 0x38);
        if ((*(byte *)(uVar15 + 8 + (int64_t)plVar11) & 1) != 0) {
          in_stack_ffffffffffffff80 = 0x18060607f;
          lVar12 = FUN_180607910(&plStack_50,plVar11 + (int64_t)(int)uVar21 * 2);
          *(int32_t *)(lVar12 + 8) = 1;
          plVar11 = *(int64_t **)(param_3 + 0x38);
        }
        lVar20 = lVar20 + -1;
        uVar13 = uStack_40;
        uVar15 = uVar15 + 0x10;
        uVar21 = (uint64_t)((int)uVar21 + 1);
        uVar19 = (int32_t)uStack_38;
      } while (lVar20 != 0);
    }
    *(int64_t **)(param_3 + 0x38) = plStack_50;
    plVar6 = *(int64_t **)(param_3 + 0x40);
    *(int64_t **)(param_3 + 0x40) = plStack_48;
    uStack_40 = *(uint64_t *)(param_3 + 0x48);
    *(uint64_t *)(param_3 + 0x48) = uVar13;
    uVar5 = *(int32_t *)(param_3 + 0x50);
    *(int32_t *)(param_3 + 0x50) = uVar19;
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar5);
    plStack_48 = plVar6;
    plVar16 = plVar11;
    plStack_50 = plVar11;
    while (plVar16 != plVar6) {
      if ((int64_t *)*plVar16 != (int64_t *)0x0) {
        in_stack_ffffffffffffff80 = 0x1806060fe;
        plStackX_8 = plVar16;
        (**(code **)(*(int64_t *)*plVar16 + 0x38))();
      }
      plVar16 = plVar16 + 2;
      plStackX_8 = plVar16;
    }
    if (plVar11 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar11);
    }
  }
  if (*(int *)(param_2 + 0x58) < 2) {
    iVar7 = (int)(*(int64_t *)(param_2 + 0x40) - *(int64_t *)(param_2 + 0x38) >> 4);
    lVar20 = (int64_t)iVar7;
    if (0 < iVar7) {
      do {
        piVar1 = (int *)(uVar18 + 8 + *(int64_t *)(param_2 + 0x38));
        *piVar1 = *piVar1 << 1;
        uVar18 = uVar18 + 0x10;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    *(int32_t *)(param_2 + 0x58) = 2;
  }
  else {
    in_stack_ffffffffffffff80 = 0x180606137;
    FUN_180277a20(param_2,0);
  }
  plStack_50 = (int64_t *)0xfffffffffffffffe;
  lVar20 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260) + 0x210);
  uVar9 = FUN_18062b1e0(system_memory_pool_ptr,0x220,0x10,3);
  uVar14 = *(int8_t *)(lVar20 + 0x2589);
  bVar2 = *(byte *)(lVar20 + 0x2588);
  uVar22 = *(int8_t *)(lVar20 + 0x2587);
  uVar3 = *(int8_t *)(lVar20 + 0x2586);
  uVar4 = *(int8_t *)(lVar20 + 0x2585);
  uVar10 = FUN_180544d70(lVar20,&plStackX_8);
  uVar17 = (uint)bVar2;
  uVar13 = CONCAT71((int7)((uint64_t)in_stack_ffffffffffffff80 >> 8),uVar3);
  uVar18 = CONCAT71((int7)((uint64_t)in_stack_ffffffffffffff78 >> 8),uVar4);
  FUN_1805ef6e0(uVar9,*(uint64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260),
                *(uint64_t *)(lVar20 + 0x2548),uVar10,uVar18,uVar13,uVar22,uVar17,uVar14);
  uVar9 = FUN_18062b1e0(system_memory_pool_ptr,0x2f0,0x10,3);
  plVar11 = (int64_t *)FUN_1802e6b00(uVar9,4);
  if (plVar11 != (int64_t *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plVar6 = *(int64_t **)(param_1 + 0x10);
  *(int64_t **)(param_1 + 0x10) = plVar11;
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x38))();
  }
  FUN_180170ac0(*(uint64_t *)(param_1 + 0x10),&unknown_var_9752_ptr);
  FUN_1802ec3d0(*(uint64_t *)(param_1 + 0x10),*(uint64_t *)(lVar20 + 0x2548));
  FUN_1802fc0f0(*(uint64_t *)(*(int64_t *)(param_1 + 0x10) + 0x260),param_3);
  lVar20 = *(int64_t *)(param_1 + 0x10);
  *(uint *)(lVar20 + 0x2ac) = *(uint *)(lVar20 + 0x2ac) | 0x10000000;
  lVar12 = *(int64_t *)(lVar20 + 0x20);
  if (lVar12 != 0) {
    iVar7 = *(int *)(lVar20 + 0x2b8);
    if (((iVar7 != -1) && ((uint64_t)(int64_t)iVar7 < *(uint64_t *)(lVar12 + 0x60838))) &&
       ((*(uint64_t *)(*(int64_t *)(lVar12 + 0x60830) + (int64_t)iVar7 * 0x10) &
        0xffffffff00000000) != 0)) {
      FUN_180398450(lVar12 + 0x607e0);
    }
  }
  plVar11 = *(int64_t **)(param_1 + 0x10);
  lVar12 = *(int64_t *)(param_1 + 0x8a8);
  lVar20 = plVar11[4];
  plStackX_8 = unaff_RBX;
  if ((lVar20 == 0) || (lVar20 == *(int64_t *)(lVar12 + 0x20))) {
    uVar14 = 0;
    if (plVar11[0x2d] == 0) {
      if (lVar20 != 0) {
        FUN_180398550(*(int64_t *)(lVar12 + 0x20) + 0x607e0);
      }
    }
    else {
      uVar13 = CONCAT44((int)(uVar13 >> 0x20),0x14);
      FUN_1802eb9a0(plVar11[0x2d],plVar11,1,0,uVar18 & 0xffffffffffffff00,uVar13,uVar22,uVar17,
                    0xfffffffffffffffe);
    }
  }
  else {
    uVar14 = 1;
    FUN_180198980(lVar20);
  }
  if ((*(uint *)((int64_t)plVar11 + 0x2ac) & 0x20000) == 0) {
    FUN_1802ed990(lVar12,1);
  }
  plVar11[0x2d] = lVar12;
  lVar20 = lVar12;
  do {
    lVar8 = lVar20;
    lVar20 = *(int64_t *)(lVar8 + 0x168);
  } while (lVar20 != 0);
  FUN_1802f2700(lVar8,1);
  FUN_1802eaec0(plVar11,*(uint64_t *)(lVar12 + 0x20),uVar14,1,0,uVar13 & 0xffffffffffffff00,1,
                0xffffffff);
  (**(code **)(*plVar11 + 0x28))(plVar11);
  FUN_1800b87c0(lVar12 + 0x1c0,&stack0x00000010);
  if (plVar11 != (int64_t *)0x0) {
    (**(code **)(*plVar11 + 0x38))();
  }
  FUN_180254610(plVar11);
  FUN_1802eace0(plVar11);
  *(short *)(plVar11 + 0x56) = (short)plVar11[0x56] + 1;
  if (plVar11[0x2d] != 0) {
    func_0x0001802eeba0();
  }
  *(short *)(lVar12 + 0x2b0) = *(short *)(lVar12 + 0x2b0) + 1;
  if (*(int64_t *)(lVar12 + 0x168) != 0) {
    func_0x0001802eeba0();
    for (lVar20 = *(int64_t *)(lVar12 + 0x168); lVar20 != 0; lVar20 = *(int64_t *)(lVar20 + 0x168)
        ) {
      lVar12 = lVar20;
    }
  }
  bVar2 = *(byte *)(lVar12 + 0x2e8);
  *(byte *)(lVar12 + 0x2e8) = bVar2 & 0xf7 | 8;
  lVar20 = *(int64_t *)(lVar12 + 0x20);
  uVar18 = 0;
  if (lVar20 != 0) {
    lVar8 = *(int64_t *)(lVar12 + 0x28);
    if ((bVar2 & 3 | 8) == 0xb) {
      if ((*(int64_t *)(lVar8 + 0x170) == 0) &&
         (plVar11 = *(int64_t **)(lVar12 + 0x10), plVar11 != (int64_t *)0x0)) {
        plStack_50 = (int64_t *)0x1802f2797;
        plStackX_8 = plVar11;
        (**(code **)(*plVar11 + 0x28))();
        plStack_50 = (int64_t *)0x1802f27a5;
        uVar9 = FUN_180389a90(lVar20 + 0x29a0,&plStackX_8);
        *(uint64_t *)(*(int64_t *)(lVar12 + 0x28) + 0x170) = uVar9;
        lVar20 = *(int64_t *)(lVar12 + 0x20);
        plVar11 = *(int64_t **)(lVar20 + 0x29a8);
        if (plVar11 != (int64_t *)0x0) {
          plStack_50 = (int64_t *)0x1802f27d8;
          (**(code **)(*plVar11 + 0x18))
                    (plVar11,*(uint64_t *)(*(int64_t *)(lVar12 + 0x28) + 0x170),lVar12 + 0x70);
          lVar20 = *(int64_t *)(lVar12 + 0x20);
        }
        plVar11 = *(int64_t **)(lVar20 + 0x29a8);
        if (plVar11 != (int64_t *)0x0) {
          plStack_50 = (int64_t *)0x1802f27fd;
          (**(code **)(*plVar11 + 0x20))
                    (plVar11,*(uint64_t *)(*(int64_t *)(lVar12 + 0x28) + 0x170),
                     *(int32_t *)(lVar12 + 0x18));
        }
      }
    }
    else if (*(int64_t *)(lVar8 + 0x170) != 0) {
      plVar11 = *(int64_t **)(lVar20 + 0x29a8);
      if (plVar11 != (int64_t *)0x0) {
        plStack_50 = (int64_t *)0x1802f2820;
        (**(code **)(*plVar11 + 0x10))(plVar11,*(int64_t *)(lVar8 + 0x170));
        lVar8 = *(int64_t *)(lVar12 + 0x28);
      }
      *(uint64_t *)(lVar8 + 0x170) = 0;
    }
  }
  uVar13 = uVar18;
  if (*(int64_t *)(lVar12 + 0x1c8) - *(int64_t *)(lVar12 + 0x1c0) >> 3 != 0) {
    do {
      plStack_50 = (int64_t *)0x1802f2864;
      FUN_1802f2700(*(uint64_t *)(uVar13 + *(int64_t *)(lVar12 + 0x1c0)),(bVar2 & 1) != 0);
      uVar17 = (int)uVar18 + 1;
      uVar18 = (uint64_t)uVar17;
      uVar13 = uVar13 + 8;
    } while ((uint64_t)(int64_t)(int)uVar17 <
             (uint64_t)(*(int64_t *)(lVar12 + 0x1c8) - *(int64_t *)(lVar12 + 0x1c0) >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806061a0(int64_t param_1,int32_t *param_2,int32_t param_3,byte param_4,
void FUN_1806061a0(int64_t param_1,int32_t *param_2,int32_t param_3,byte param_4,
                  int64_t param_5,int32_t *param_6)

{
  int32_t *puVar1;
  char cVar2;
  char cVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  int32_t *puVar9;
  int64_t lVar10;
  int64_t lVar11;
  
  lVar11 = *(int64_t *)(param_1 + 0x8a8);
  if (lVar11 != 0) {
    lVar11 = *(int64_t *)(lVar11 + 0x260);
  }
  cVar2 = *(char *)(*(int64_t *)(lVar11 + 0x208) + 0x148);
  uVar8 = FUN_18062b1e0(system_memory_pool_ptr,0x28,8,3);
  puVar9 = (int32_t *)FUN_180435440(uVar8,cVar2);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  puVar9[4] = param_3;
  *puVar9 = uVar4;
  puVar9[1] = uVar5;
  puVar9[2] = uVar6;
  puVar9[3] = uVar7;
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      cVar3 = *(char *)(lVar10 + param_5);
      if (cVar3 < cVar2) {
        uVar4 = param_6[1];
        uVar5 = param_6[2];
        uVar6 = param_6[3];
        puVar1 = (int32_t *)(*(int64_t *)(puVar9 + 6) + (int64_t)cVar3 * 0x10);
        *puVar1 = *param_6;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
      }
      else {
        FUN_180627020(&unknown_var_7992_ptr,(int)cVar3);
      }
      lVar10 = lVar10 + 1;
      param_6 = param_6 + 4;
    } while (lVar10 < (int64_t)(uint64_t)param_4);
  }
  lVar10 = *(int64_t *)(lVar11 + 0xd8);
  if (lVar10 == 0) {
    *(int32_t **)(lVar11 + 0xd8) = puVar9;
    return;
  }
  if (*(int64_t *)(lVar10 + 0x18) == 0) {
    *(uint64_t *)(lVar10 + 0x18) = 0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar10);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806061b3(uint64_t param_1,int32_t *param_2,int32_t param_3)
void FUN_1806061b3(uint64_t param_1,int32_t *param_2,int32_t param_3)

{
  int32_t *puVar1;
  char cVar2;
  char cVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  int32_t *puVar9;
  byte unaff_BL;
  int64_t lVar10;
  int64_t unaff_RSI;
  int64_t in_stack_00000070;
  int32_t *in_stack_00000078;
  
  if (unaff_RSI != 0) {
    unaff_RSI = *(int64_t *)(unaff_RSI + 0x260);
  }
  cVar2 = *(char *)(*(int64_t *)(unaff_RSI + 0x208) + 0x148);
  uVar8 = FUN_18062b1e0(system_memory_pool_ptr,0x28,8,3);
  puVar9 = (int32_t *)FUN_180435440(uVar8,cVar2);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  puVar9[4] = param_3;
  *puVar9 = uVar4;
  puVar9[1] = uVar5;
  puVar9[2] = uVar6;
  puVar9[3] = uVar7;
  if (unaff_BL != 0) {
    lVar10 = 0;
    do {
      cVar3 = *(char *)(lVar10 + in_stack_00000070);
      if (cVar3 < cVar2) {
        uVar4 = in_stack_00000078[1];
        uVar5 = in_stack_00000078[2];
        uVar6 = in_stack_00000078[3];
        puVar1 = (int32_t *)(*(int64_t *)(puVar9 + 6) + (int64_t)cVar3 * 0x10);
        *puVar1 = *in_stack_00000078;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
      }
      else {
        FUN_180627020(&unknown_var_7992_ptr,(int)cVar3);
      }
      lVar10 = lVar10 + 1;
      in_stack_00000078 = in_stack_00000078 + 4;
    } while (lVar10 < (int64_t)(uint64_t)unaff_BL);
  }
  lVar10 = *(int64_t *)(unaff_RSI + 0xd8);
  if (lVar10 == 0) {
    *(int32_t **)(unaff_RSI + 0xd8) = puVar9;
    return;
  }
  if (*(int64_t *)(lVar10 + 0x18) == 0) {
    *(uint64_t *)(lVar10 + 0x18) = 0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar10);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806061c5(uint64_t param_1,uint64_t param_2,int32_t param_3)
void FUN_1806061c5(uint64_t param_1,uint64_t param_2,int32_t param_3)

{
  int32_t *puVar1;
  char cVar2;
  char cVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  int32_t *puVar9;
  byte unaff_BL;
  int64_t lVar10;
  int64_t unaff_RSI;
  int32_t *unaff_RDI;
  int64_t in_stack_00000070;
  int32_t *in_stack_00000078;
  
  if (unaff_RSI != 0) {
    unaff_RSI = *(int64_t *)(unaff_RSI + 0x260);
  }
  cVar2 = *(char *)(*(int64_t *)(unaff_RSI + 0x208) + 0x148);
  uVar8 = FUN_18062b1e0(system_memory_pool_ptr,0x28,8,3);
  puVar9 = (int32_t *)FUN_180435440(uVar8,cVar2);
  uVar4 = *unaff_RDI;
  uVar5 = unaff_RDI[1];
  uVar6 = unaff_RDI[2];
  uVar7 = unaff_RDI[3];
  puVar9[4] = param_3;
  *puVar9 = uVar4;
  puVar9[1] = uVar5;
  puVar9[2] = uVar6;
  puVar9[3] = uVar7;
  if (unaff_BL != 0) {
    lVar10 = 0;
    do {
      cVar3 = *(char *)(lVar10 + in_stack_00000070);
      if (cVar3 < cVar2) {
        uVar4 = in_stack_00000078[1];
        uVar5 = in_stack_00000078[2];
        uVar6 = in_stack_00000078[3];
        puVar1 = (int32_t *)(*(int64_t *)(puVar9 + 6) + (int64_t)cVar3 * 0x10);
        *puVar1 = *in_stack_00000078;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
      }
      else {
        FUN_180627020(&unknown_var_7992_ptr,(int)cVar3);
      }
      lVar10 = lVar10 + 1;
      in_stack_00000078 = in_stack_00000078 + 4;
    } while (lVar10 < (int64_t)(uint64_t)unaff_BL);
  }
  lVar10 = *(int64_t *)(unaff_RSI + 0xd8);
  if (lVar10 == 0) {
    *(int32_t **)(unaff_RSI + 0xd8) = puVar9;
    return;
  }
  if (*(int64_t *)(lVar10 + 0x18) == 0) {
    *(uint64_t *)(lVar10 + 0x18) = 0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar10);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180606227(void)
void FUN_180606227(void)

{
  int32_t *puVar1;
  char cVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int64_t lVar6;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  char unaff_R12B;
  int64_t unaff_R15;
  int64_t in_stack_00000070;
  int32_t *in_stack_00000078;
  
  lVar6 = 0;
  do {
    cVar2 = *(char *)(lVar6 + in_stack_00000070);
    if (cVar2 < unaff_R12B) {
      uVar3 = in_stack_00000078[1];
      uVar4 = in_stack_00000078[2];
      uVar5 = in_stack_00000078[3];
      puVar1 = (int32_t *)(*(int64_t *)(unaff_RBP + 0x18) + (int64_t)cVar2 * 0x10);
      *puVar1 = *in_stack_00000078;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
    }
    else {
      FUN_180627020(&unknown_var_7992_ptr,(int)cVar2);
    }
    lVar6 = lVar6 + 1;
    in_stack_00000078 = in_stack_00000078 + 4;
  } while (lVar6 < unaff_R15);
  lVar6 = *(int64_t *)(unaff_RSI + 0xd8);
  if (lVar6 != 0) {
    if (*(int64_t *)(lVar6 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t *)(lVar6 + 0x18) = 0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar6);
  }
  *(int64_t *)(unaff_RSI + 0xd8) = unaff_RBP;
  return;
}





// 函数: void FUN_18060622e(void)
void FUN_18060622e(void)

{
  int32_t *puVar1;
  char cVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int32_t *unaff_RDI;
  char unaff_R12B;
  int64_t unaff_R15;
  int64_t in_stack_00000070;
  
  do {
    cVar2 = *(char *)(unaff_RBX + in_stack_00000070);
    if (cVar2 < unaff_R12B) {
      uVar4 = unaff_RDI[1];
      uVar5 = unaff_RDI[2];
      uVar6 = unaff_RDI[3];
      puVar1 = (int32_t *)(*(int64_t *)(unaff_RBP + 0x18) + (int64_t)cVar2 * 0x10);
      *puVar1 = *unaff_RDI;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
    }
    else {
      FUN_180627020(&unknown_var_7992_ptr,(int)cVar2);
    }
    unaff_RBX = unaff_RBX + 1;
    unaff_RDI = unaff_RDI + 4;
  } while (unaff_RBX < unaff_R15);
  lVar3 = *(int64_t *)(unaff_RSI + 0xd8);
  if (lVar3 != 0) {
    if (*(int64_t *)(lVar3 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t *)(lVar3 + 0x18) = 0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar3);
  }
  *(int64_t *)(unaff_RSI + 0xd8) = unaff_RBP;
  return;
}





// 函数: void FUN_18060627e(void)
void FUN_18060627e(void)

{
  int64_t lVar1;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  
  lVar1 = *(int64_t *)(unaff_RSI + 0xd8);
  if (lVar1 == 0) {
    *(uint64_t *)(unaff_RSI + 0xd8) = unaff_RBP;
    return;
  }
  if (*(int64_t *)(lVar1 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(lVar1 + 0x18) = 0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar1);
}





// 函数: void FUN_180606299(void)
void FUN_180606299(void)

{
  int64_t unaff_RBX;
  
  if (*(int64_t *)(unaff_RBX + 0x18) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(unaff_RBX + 0x18) = 0;
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_1806062d0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1806062d0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int8_t uVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uStackX_8;
  
  if (param_1 != 0) {
    iVar3 = (int)param_3;
    if (*(char *)(param_1 + 0x8be) != '\0') {
      if (iVar3 != -1) {
        param_2 = *(int64_t *)(param_1 + 0x18 + (int64_t)iVar3 * 8);
      }
      lVar2 = *(int64_t *)(param_1 + 0x8a8);
      if (lVar2 != 0) {
        lVar2 = *(int64_t *)(lVar2 + 0x260);
      }
      if ((param_2 != 0) && (lVar2 != 0)) {
        uVar1 = FUN_1802fc790(lVar2,param_2,param_3,param_4,0xfffffffffffffffe);
        FUN_1802fca80(lVar2,param_2,uVar1);
        if (iVar3 != -1) {
          uStackX_8 = 0;
          FUN_180544860(param_1,param_3 & 0xffffffff,&uStackX_8);
        }
      }
      FUN_180544ac0(param_1);
    }
  }
  return;
}





// 函数: void FUN_180606380(int64_t param_1)
void FUN_180606380(int64_t param_1)

{
  uint64_t auStackX_8 [2];
  uint64_t *puStackX_18;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  int32_t uStack_130;
  int32_t uStack_12c;
  int32_t uStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  int32_t uStack_11c;
  int32_t uStack_118;
  int32_t uStack_114;
  uint64_t uStack_110;
  int32_t uStack_108;
  uint64_t uStack_104;
  uint64_t uStack_fc;
  uint64_t uStack_f4;
  uint64_t uStack_ec;
  int32_t uStack_e4;
  int32_t uStack_e0;
  uint64_t uStack_dc;
  uint64_t uStack_d4;
  uint64_t uStack_cc;
  int32_t uStack_c4;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  uint64_t uStack_70;
  int32_t uStack_68;
  uint64_t uStack_64;
  uint64_t uStack_5c;
  uint64_t uStack_54;
  uint64_t uStack_4c;
  int32_t uStack_44;
  int32_t uStack_40;
  uint64_t uStack_3c;
  uint64_t uStack_34;
  uint64_t uStack_2c;
  int32_t uStack_24;
  
  if ((param_1 != 0) && (*(char *)(param_1 + 0x8be) != '\0')) {
    puStackX_18 = auStackX_8;
    auStackX_8[0] = 0;
    uStack_160 = 0x3f800000;
    uStack_158 = 0;
    uStack_150 = 0x3f80000000000000;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0x3f800000;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_128 = 0;
    uStack_124 = 0x3f800000;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_fc = 0x64ffffffff;
    uStack_f4 = 100;
    uStack_ec = 0;
    uStack_e4 = 0;
    uStack_e0 = 100;
    uStack_dc = 0;
    uStack_d4 = 0;
    uStack_cc = 0;
    uStack_c4 = 0;
    uStack_c0 = 0x3f800000;
    uStack_b8 = 0;
    uStack_b0 = 0x3f80000000000000;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0x3f800000;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 0x3f800000;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_5c = 0x64ffffffff;
    uStack_54 = 100;
    uStack_4c = 0;
    uStack_44 = 0;
    uStack_40 = 100;
    uStack_3c = 0;
    uStack_34 = 0;
    uStack_2c = 0;
    uStack_24 = 0;
    FUN_180540960(param_1,100,0,0,&uStack_c0,&uStack_160,auStackX_8,1,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180606500(int64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_180606500(int64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5,uint64_t param_6,uint64_t param_7,int32_t param_8,
                  int64_t *param_9)

{
  int8_t auStack_2b8 [32];
  uint64_t uStack_298;
  uint64_t uStack_290;
  int32_t uStack_288;
  int64_t **pplStack_280;
  int64_t lStack_278;
  int32_t uStack_270;
  int8_t uStack_268;
  int64_t *plStack_258;
  uint64_t uStack_250;
  int64_t **pplStack_248;
  int8_t auStack_238 [512];
  uint64_t uStack_38;
  
  if (param_1 != 0) {
    uStack_250 = 0xfffffffffffffffe;
    uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2b8;
    if (*(char *)(param_1 + 0x8be) != '\0') {
      FUN_18058f390(auStack_238);
      pplStack_248 = &plStack_258;
      plStack_258 = param_9;
      if (param_9 != (int64_t *)0x0) {
        (**(code **)(*param_9 + 0x28))();
      }
      uStack_268 = 1;
      pplStack_280 = &plStack_258;
      uStack_288 = param_8;
      uStack_290 = param_7;
      uStack_298 = param_6;
      lStack_278 = param_1;
      uStack_270 = param_2;
      FUN_18058e430(auStack_238,param_3,param_4,param_5);
      FUN_18058f420(auStack_238);
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_2b8);
  }
  return;
}





