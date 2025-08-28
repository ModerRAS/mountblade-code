#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part010.c - 6 个函数

// 函数: void FUN_180272ef0(longlong *param_1,ulonglong param_2)
void FUN_180272ef0(longlong *param_1,ulonglong param_2)

{
  void *puVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  void *puVar8;
  longlong lVar9;
  
  puVar4 = (uint64_t *)param_1[1];
  if ((ulonglong)((param_1[2] - (longlong)puVar4) / 0x98) < param_2) {
    puVar7 = (uint64_t *)*param_1;
    lVar9 = ((longlong)puVar4 - (longlong)puVar7) / 0x98;
    uVar3 = lVar9 * 2;
    if (lVar9 == 0) {
      uVar3 = 1;
    }
    if (uVar3 < lVar9 + param_2) {
      uVar3 = lVar9 + param_2;
    }
    puVar2 = (uint64_t *)0x0;
    if (uVar3 != 0) {
      puVar2 = (uint64_t *)
               FUN_18062b420(system_memory_pool_ptr,uVar3 * 0x98,(char)param_1[3],0x6bca1af286bca1b,
                             0xfffffffffffffffe);
      puVar4 = (uint64_t *)param_1[1];
      puVar7 = (uint64_t *)*param_1;
    }
    puVar6 = puVar2;
    if (puVar7 != puVar4) {
      lVar9 = (longlong)puVar7 - (longlong)puVar2;
      do {
        *puVar6 = &unknown_var_720_ptr;
        puVar6[1] = 0;
        *(int32_t *)(puVar6 + 2) = 0;
        *puVar6 = &unknown_var_3432_ptr;
        puVar6[1] = puVar6 + 3;
        *(int32_t *)(puVar6 + 2) = 0;
        *(int8_t *)(puVar6 + 3) = 0;
        *(int32_t *)(puVar6 + 2) = *(int32_t *)((longlong)puVar6 + lVar9 + 0x10);
        puVar1 = *(void **)((longlong)puVar6 + lVar9 + 8);
        puVar8 = &system_buffer_ptr;
        if (puVar1 != (void *)0x0) {
          puVar8 = puVar1;
        }
        strcpy_s(puVar6[1],0x80,puVar8);
        puVar6 = puVar6 + 0x13;
      } while ((uint64_t *)((longlong)puVar6 + lVar9) != puVar4);
    }
    if (param_2 != 0) {
      puVar4 = puVar6 + 1;
      uVar5 = param_2;
      do {
        puVar4[-1] = &unknown_var_720_ptr;
        *puVar4 = 0;
        *(int32_t *)(puVar4 + 1) = 0;
        puVar4[-1] = &unknown_var_3432_ptr;
        *puVar4 = puVar4 + 2;
        *(int32_t *)(puVar4 + 1) = 0;
        *(int8_t *)(puVar4 + 2) = 0;
        puVar4 = puVar4 + 0x13;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    puVar4 = (uint64_t *)param_1[1];
    puVar7 = (uint64_t *)*param_1;
    if (puVar7 != puVar4) {
      do {
        (**(code **)*puVar7)(puVar7,0);
        puVar7 = puVar7 + 0x13;
      } while (puVar7 != puVar4);
      puVar7 = (uint64_t *)*param_1;
    }
    if (puVar7 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar7);
    }
    *param_1 = (longlong)puVar2;
    param_1[1] = (longlong)(puVar6 + param_2 * 0x13);
    param_1[2] = (longlong)(puVar2 + uVar3 * 0x13);
  }
  else {
    uVar3 = param_2;
    if (param_2 != 0) {
      do {
        *puVar4 = &unknown_var_720_ptr;
        puVar4[1] = 0;
        *(int32_t *)(puVar4 + 2) = 0;
        *puVar4 = &unknown_var_3432_ptr;
        puVar4[1] = puVar4 + 3;
        *(int32_t *)(puVar4 + 2) = 0;
        *(int8_t *)(puVar4 + 3) = 0;
        puVar4 = puVar4 + 0x13;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar4 = (uint64_t *)param_1[1];
    }
    param_1[1] = (longlong)(puVar4 + param_2 * 0x13);
  }
  return;
}





// 函数: void FUN_180273150(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180273150(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = *(uint64_t **)(param_1 + 0x128);
  for (puVar2 = *(uint64_t **)(param_1 + 0x120); puVar2 != puVar1; puVar2 = puVar2 + 0xb) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*(longlong *)(param_1 + 0x120) == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



uint64_t *
FUN_180273180(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180057170();
  *param_1 = &unknown_var_5192_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x1c8,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1802731f0(longlong param_1,longlong *param_2)

{
  uint64_t uVar1;
  longlong *plVar2;
  void *puVar3;
  
  uVar1 = FUN_18062b1e0(system_memory_pool_ptr,0x470,0x10,0x15,0,0xfffffffffffffffe);
  plVar2 = (longlong *)FUN_18022b590(uVar1);
  *param_2 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  *(longlong *)(*param_2 + 0xa8) = param_1;
  puVar3 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x70) != (void *)0x0) {
    puVar3 = *(void **)(param_1 + 0x70);
  }
  (**(code **)(*(longlong *)(*param_2 + 0x10) + 0x10))((longlong *)(*param_2 + 0x10),puVar3);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802732b0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802732b0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  longlong *plVar2;
  uint64_t uVar3;
  longlong lVar4;
  int iVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  longlong *plStackX_10;
  
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    puVar6 = (uint64_t *)FUN_1802731f0(param_1,&plStackX_10,param_3,param_4,0xfffffffffffffffe);
    uVar1 = *puVar6;
    *puVar6 = 0;
    plVar2 = *(longlong **)(param_1 + 0xb0);
    *(uint64_t *)(param_1 + 0xb0) = uVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    if (plStackX_10 != (longlong *)0x0) {
      (**(code **)(*plStackX_10 + 0x38))();
    }
    *(int8_t *)(*(longlong *)(param_1 + 0xb0) + 0xb1) = 1;
    lVar4 = system_resource_state;
    plVar2 = *(longlong **)(param_1 + 0xb0);
    iVar5 = (**(code **)(*plVar2 + 0x60))(plVar2);
    *(int8_t *)((longlong)plVar2 + 0xb2) = 1;
    FUN_1802abe00((longlong)iVar5 * 0x98 + lVar4 + 8,plVar2);
  }
  puVar8 = (uint64_t *)(render_system_data_config + 0x180);
  puVar6 = *(uint64_t **)(render_system_data_config + 400);
  puVar7 = puVar8;
  if (puVar6 != (uint64_t *)0x0) {
    do {
      iVar5 = memcmp(puVar6 + 4,param_1 + 0xc,0x10);
      if (iVar5 < 0) {
        puVar9 = (uint64_t *)*puVar6;
      }
      else {
        puVar9 = (uint64_t *)puVar6[1];
        puVar7 = puVar6;
      }
      puVar6 = puVar9;
    } while (puVar9 != (uint64_t *)0x0);
    if ((puVar7 != puVar8) && (iVar5 = memcmp(param_1 + 0xc,puVar7 + 4,0x10), -1 < iVar5))
    goto LAB_1802733d5;
  }
  puVar7 = puVar8;
LAB_1802733d5:
  if (puVar7 != puVar8) {
    uVar1 = puVar7[6];
    uVar3 = puVar7[7];
    lVar4 = *(longlong *)(param_1 + 0xb0);
    *(int32_t *)(lVar4 + 0x170) = 0;
    **(int8_t **)(lVar4 + 0x168) = 0;
    FUN_18004b860(lVar4 + 0x160,&unknown_var_7284_ptr,uVar1);
    *(uint64_t *)(lVar4 + 0x148) = uVar1;
    lVar4 = *(longlong *)(param_1 + 0xb0);
    *(int32_t *)(lVar4 + 0x1a8) = 0;
    **(int8_t **)(lVar4 + 0x1a0) = 0;
    FUN_18004b860(lVar4 + 0x198,&unknown_var_7284_ptr,uVar3);
    *(uint64_t *)(lVar4 + 0x150) = uVar3;
  }
  return;
}





// 函数: void FUN_180273460(longlong param_1)
void FUN_180273460(longlong param_1)

{
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  
  plStackX_8 = *(longlong **)(param_1 + 0xb0);
  if (plStackX_8 != (longlong *)0x0) {
    pplStackX_18 = &plStackX_8;
    (**(code **)(*plStackX_8 + 0x28))();
    FUN_1800b55b0();
    plStackX_10 = *(longlong **)(param_1 + 0xb0);
    *(uint64_t *)(param_1 + 0xb0) = 0;
    if (plStackX_10 != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001802734c5. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*plStackX_10 + 0x38))();
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802734d0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802734d0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong **pplVar1;
  char cVar2;
  int iVar3;
  uint64_t *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  void *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  uint64_t uVar13;
  
  plStackX_8 = *(longlong **)(param_1 + 0xb0);
  if (plStackX_8 == (longlong *)0x0) {
    cVar2 = func_0x00018008a5c0(0,*(uint64_t *)(*(longlong *)(param_1 + 0x88) + 8),param_3,param_4
                                ,0xfffffffffffffffe);
    if (cVar2 != '\0') {
      puVar4 = (uint64_t *)FUN_1802731f0(param_1,&pplStackX_10);
      uVar13 = *puVar4;
      *puVar4 = 0;
      plStackX_8 = *(longlong **)(param_1 + 0xb0);
      *(uint64_t *)(param_1 + 0xb0) = uVar13;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      if (pplStackX_10 != (longlong **)0x0) {
        (*(code *)(*pplStackX_10)[7])();
      }
      *(int8_t *)(*(longlong *)(param_1 + 0xb0) + 0xb1) = 1;
      FUN_1800b5cc0();
    }
    return;
  }
  pplStackX_10 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x28))();
  FUN_1800b55b0();
  puVar10 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x70) != (void *)0x0) {
    puVar10 = *(void **)(param_1 + 0x70);
  }
  plVar7 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x10);
  (**(code **)(*plVar7 + 0x10))(plVar7,puVar10);
  lVar9 = system_resource_state;
  plVar7 = *(longlong **)(param_1 + 0xb0);
  iVar3 = (**(code **)(*plVar7 + 0x60))(plVar7);
  *(int8_t *)((longlong)plVar7 + 0xb2) = 1;
  plVar8 = (longlong *)((longlong)iVar3 * 0x98 + lVar9 + 8);
  uVar13 = 0xfffffffffffffffe;
  pplVar1 = (longlong **)(plVar8 + 8);
  pplStackX_10 = pplVar1;
  iVar3 = _Mtx_lock(pplVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  plStackX_8 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plVar11 = (longlong *)plVar8[1];
  plVar5 = (longlong *)0x0;
  if (plVar11 < (longlong *)plVar8[2]) {
    plVar8[1] = (longlong)(plVar11 + 1);
    *plVar11 = (longlong)plVar7;
    plStackX_8 = (longlong *)0x0;
    goto LAB_1802abf36;
  }
  plVar6 = (longlong *)*plVar8;
  lVar9 = (longlong)plVar11 - (longlong)plVar6 >> 3;
  if (lVar9 == 0) {
    lVar9 = 1;
LAB_1802abea0:
    plVar5 = (longlong *)FUN_18062b420(system_memory_pool_ptr,lVar9 * 8,(char)plVar8[3],param_4,uVar13);
    plVar11 = (longlong *)plVar8[1];
    plVar6 = (longlong *)*plVar8;
    plVar12 = plVar5;
  }
  else {
    lVar9 = lVar9 * 2;
    plVar12 = plVar5;
    if (lVar9 != 0) goto LAB_1802abea0;
  }
  for (; plVar6 != plVar11; plVar6 = plVar6 + 1) {
    *plVar5 = *plVar6;
    *plVar6 = 0;
    plVar5 = plVar5 + 1;
  }
  *plVar5 = (longlong)plVar7;
  plStackX_8 = (longlong *)0x0;
  plVar7 = (longlong *)plVar8[1];
  plVar11 = (longlong *)*plVar8;
  if (plVar11 != plVar7) {
    do {
      if ((longlong *)*plVar11 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar11 + 0x38))();
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar7);
    plVar11 = (longlong *)*plVar8;
  }
  if (plVar11 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar11);
  }
  *plVar8 = (longlong)plVar12;
  plVar8[1] = (longlong)(plVar5 + 1);
  plVar8[2] = (longlong)(plVar12 + lVar9);
LAB_1802abf36:
  *(int8_t *)(plVar8 + 0x12) = 1;
  iVar3 = _Mtx_unlock(pplVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180273600(uint64_t param_1,longlong param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  
  puVar5 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x1c8,8,3,0xfffffffffffffffe);
  *puVar5 = &unknown_var_5192_ptr;
  *puVar5 = &unknown_var_8792_ptr;
  *(int32_t *)(puVar5 + 1) = 0;
  *(int32_t *)((longlong)puVar5 + 0xc) = 0;
  *(int32_t *)(puVar5 + 2) = 0;
  *(int32_t *)((longlong)puVar5 + 0x14) = 0;
  FUN_180274ab0(puVar5 + 3);
  if (param_2 != 0) {
    uVar4 = *(uint64_t *)(param_2 + 0x10);
    puVar5[1] = *(uint64_t *)(param_2 + 8);
    puVar5[2] = uVar4;
    *(int32_t *)(puVar5 + 3) = *(int32_t *)(param_2 + 0x18);
    *(int32_t *)((longlong)puVar5 + 0x1c) = *(int32_t *)(param_2 + 0x1c);
    uVar4 = *(uint64_t *)(param_2 + 0x28);
    puVar5[4] = *(uint64_t *)(param_2 + 0x20);
    puVar5[5] = uVar4;
    uVar4 = *(uint64_t *)(param_2 + 0x38);
    puVar5[6] = *(uint64_t *)(param_2 + 0x30);
    puVar5[7] = uVar4;
    uVar4 = *(uint64_t *)(param_2 + 0x48);
    puVar5[8] = *(uint64_t *)(param_2 + 0x40);
    puVar5[9] = uVar4;
    uVar4 = *(uint64_t *)(param_2 + 0x58);
    puVar5[10] = *(uint64_t *)(param_2 + 0x50);
    puVar5[0xb] = uVar4;
    uVar4 = *(uint64_t *)(param_2 + 0x68);
    puVar5[0xc] = *(uint64_t *)(param_2 + 0x60);
    puVar5[0xd] = uVar4;
    uVar4 = *(uint64_t *)(param_2 + 0x78);
    puVar5[0xe] = *(uint64_t *)(param_2 + 0x70);
    puVar5[0xf] = uVar4;
    uVar4 = *(uint64_t *)(param_2 + 0x88);
    puVar5[0x10] = *(uint64_t *)(param_2 + 0x80);
    puVar5[0x11] = uVar4;
    uVar4 = *(uint64_t *)(param_2 + 0x98);
    puVar5[0x12] = *(uint64_t *)(param_2 + 0x90);
    puVar5[0x13] = uVar4;
    uVar4 = *(uint64_t *)(param_2 + 0xa8);
    puVar5[0x14] = *(uint64_t *)(param_2 + 0xa0);
    puVar5[0x15] = uVar4;
    uVar4 = *(uint64_t *)(param_2 + 0xb8);
    puVar5[0x16] = *(uint64_t *)(param_2 + 0xb0);
    puVar5[0x17] = uVar4;
    uVar4 = *(uint64_t *)(param_2 + 200);
    puVar5[0x18] = *(uint64_t *)(param_2 + 0xc0);
    puVar5[0x19] = uVar4;
    uVar4 = *(uint64_t *)(param_2 + 0xd8);
    puVar5[0x1a] = *(uint64_t *)(param_2 + 0xd0);
    puVar5[0x1b] = uVar4;
    uVar4 = *(uint64_t *)(param_2 + 0xe8);
    puVar5[0x1c] = *(uint64_t *)(param_2 + 0xe0);
    puVar5[0x1d] = uVar4;
    uVar4 = *(uint64_t *)(param_2 + 0xf8);
    puVar5[0x1e] = *(uint64_t *)(param_2 + 0xf0);
    puVar5[0x1f] = uVar4;
    uVar4 = *(uint64_t *)(param_2 + 0x108);
    puVar5[0x20] = *(uint64_t *)(param_2 + 0x100);
    puVar5[0x21] = uVar4;
    uVar4 = *(uint64_t *)(param_2 + 0x118);
    puVar5[0x22] = *(uint64_t *)(param_2 + 0x110);
    puVar5[0x23] = uVar4;
    uVar1 = *(int32_t *)(param_2 + 0x124);
    uVar2 = *(int32_t *)(param_2 + 0x128);
    uVar3 = *(int32_t *)(param_2 + 300);
    *(int32_t *)(puVar5 + 0x24) = *(int32_t *)(param_2 + 0x120);
    *(int32_t *)((longlong)puVar5 + 0x124) = uVar1;
    *(int32_t *)(puVar5 + 0x25) = uVar2;
    *(int32_t *)((longlong)puVar5 + 300) = uVar3;
    *(int32_t *)(puVar5 + 0x26) = *(int32_t *)(param_2 + 0x130);
    *(int8_t *)((longlong)puVar5 + 0x134) = *(int8_t *)(param_2 + 0x134);
    if (puVar5 + 0x27 != (uint64_t *)(param_2 + 0x138)) {
      FUN_18022ec40(puVar5 + 0x27,*(uint64_t *)(param_2 + 0x138),*(uint64_t *)(param_2 + 0x140))
      ;
    }
    *(int32_t *)(puVar5 + 0x2b) = *(int32_t *)(param_2 + 0x158);
    *(int32_t *)((longlong)puVar5 + 0x15c) = *(int32_t *)(param_2 + 0x15c);
    *(int32_t *)(puVar5 + 0x2c) = *(int32_t *)(param_2 + 0x160);
    *(int32_t *)((longlong)puVar5 + 0x164) = *(int32_t *)(param_2 + 0x164);
    uVar4 = *(uint64_t *)(param_2 + 0x170);
    puVar5[0x2d] = *(uint64_t *)(param_2 + 0x168);
    puVar5[0x2e] = uVar4;
    uVar4 = *(uint64_t *)(param_2 + 0x180);
    puVar5[0x2f] = *(uint64_t *)(param_2 + 0x178);
    puVar5[0x30] = uVar4;
    uVar4 = *(uint64_t *)(param_2 + 400);
    puVar5[0x31] = *(uint64_t *)(param_2 + 0x188);
    puVar5[0x32] = uVar4;
    uVar4 = *(uint64_t *)(param_2 + 0x1a0);
    puVar5[0x33] = *(uint64_t *)(param_2 + 0x198);
    puVar5[0x34] = uVar4;
    *(int32_t *)(puVar5 + 0x35) = *(int32_t *)(param_2 + 0x1a8);
    *(int32_t *)((longlong)puVar5 + 0x1ac) = *(int32_t *)(param_2 + 0x1ac);
    *(int32_t *)(puVar5 + 0x36) = *(int32_t *)(param_2 + 0x1b0);
    *(int32_t *)((longlong)puVar5 + 0x1b4) = *(int32_t *)(param_2 + 0x1b4);
    *(int32_t *)(puVar5 + 0x37) = *(int32_t *)(param_2 + 0x1b8);
    *(int32_t *)((longlong)puVar5 + 0x1bc) = *(int32_t *)(param_2 + 0x1bc);
    *(int32_t *)(puVar5 + 0x38) = *(int32_t *)(param_2 + 0x1c0);
    *(int32_t *)((longlong)puVar5 + 0x1c4) = *(int32_t *)(param_2 + 0x1c4);
  }
  return puVar5;
}





// 函数: void FUN_180273870(longlong param_1,longlong param_2)
void FUN_180273870(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  
  if (*(longlong *)(param_2 + 0xb0) == 0) {
    plVar1 = *(longlong **)(param_1 + 0xb0);
    if (plVar1 != (longlong *)0x0) {
      plStackX_8 = plVar1;
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plStackX_8 = *(longlong **)(param_2 + 0xb0);
    *(longlong **)(param_2 + 0xb0) = plVar1;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  else {
    pplStackX_10 = &plStackX_8;
    plStackX_8 = *(longlong **)(param_1 + 0xb0);
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    FUN_1800b55b0();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0xa8) = param_2;
    FUN_18022dfe0();
  }
  plStackX_8 = *(longlong **)(param_1 + 0xb0);
  *(uint64_t *)(param_1 + 0xb0) = 0;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



