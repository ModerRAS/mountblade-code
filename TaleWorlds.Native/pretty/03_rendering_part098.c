#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part098.c - 1 个函数

// 函数: void FUN_180325930(int64_t param_1,uint64_t param_2,int64_t *param_3,int32_t *param_4)
void FUN_180325930(int64_t param_1,uint64_t param_2,int64_t *param_3,int32_t *param_4)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint uVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  uint64_t uStackX_10;
  int64_t *plStackX_18;
  int64_t lStack_68;
  int64_t lStack_60;
  int64_t lStack_58;
  uint uStack_50;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  
  lVar7 = 0;
  uStackX_10 = param_2;
  iVar6 = _Mtx_lock(param_1 + 0x30);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  plStackX_18 = &lStack_68;
  lVar9 = param_3[1] - *param_3 >> 3;
  uStack_50 = *(uint *)(param_3 + 3);
  if (lVar9 != 0) {
    lVar7 = CoreEngine_MemoryAllocator(system_memory_pool_ptr,lVar9 * 8,uStack_50 & 0xff);
  }
  lStack_58 = lVar7 + lVar9 * 8;
  lVar9 = *param_3;
  lStack_68 = lVar7;
  lStack_60 = lVar7;
  if (lVar9 != param_3[1]) {
                    // WARNING: Subroutine does not return
    memmove(lVar7,lVar9,param_3[1] - lVar9);
  }
  uStack_48 = *param_4;
  uStack_44 = param_4[1];
  uStack_40 = param_4[2];
  uStack_3c = param_4[3];
  puVar2 = (uint64_t *)(param_1 + 0x80);
  puVar8 = puVar2;
  puVar4 = *(uint64_t **)(param_1 + 0x90);
  while (puVar4 != (uint64_t *)0x0) {
    if ((uint64_t)puVar4[4] < param_2) {
      puVar4 = (uint64_t *)*puVar4;
    }
    else {
      puVar8 = puVar4;
      puVar4 = (uint64_t *)puVar4[1];
    }
  }
  if ((puVar8 == puVar2) || (param_2 < (uint64_t)puVar8[4])) {
    puVar8 = (uint64_t *)FUN_18033baf0(puVar2,&plStackX_18,puVar2,puVar8,&uStackX_10);
    puVar8 = (uint64_t *)*puVar8;
  }
  plVar1 = puVar8 + 5;
  if (plVar1 != &lStack_68) {
    FUN_180058160(plVar1);
    lVar7 = *plVar1;
    *plVar1 = lStack_68;
    lVar9 = puVar8[6];
    puVar8[6] = lStack_60;
    lVar5 = puVar8[7];
    puVar8[7] = lStack_58;
    uVar3 = *(uint *)(puVar8 + 8);
    *(uint *)(puVar8 + 8) = uStack_50;
    lStack_68 = lVar7;
    lStack_60 = lVar9;
    lStack_58 = lVar5;
    uStack_50 = uVar3;
  }
  *(int32_t *)(puVar8 + 9) = uStack_48;
  *(int32_t *)((int64_t)puVar8 + 0x4c) = uStack_44;
  *(int32_t *)(puVar8 + 10) = uStack_40;
  *(int32_t *)((int64_t)puVar8 + 0x54) = uStack_3c;
  plStackX_18 = &lStack_68;
  if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  iVar6 = _Mtx_unlock(param_1 + 0x30);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  return;
}



uint FUN_180325b10(uint64_t param_1,uint64_t *param_2,int64_t param_3,int64_t param_4,
                  uint param_5,uint param_6,uint64_t param_7)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint uVar3;
  int64_t *aplStackX_18 [2];
  uint64_t in_stack_ffffffffffffffc0;
  int32_t uVar4;
  
  uVar4 = (int32_t)((uint64_t)in_stack_ffffffffffffffc0 >> 0x20);
  aplStackX_18[0] = (int64_t *)0x0;
  uVar3 = (*(uint *)(param_3 + 0x10) | param_5) & ~param_6;
  if (((*(uint *)(param_3 + 0x10) & 1) != 0) &&
     (FUN_1803299a0(param_1,aplStackX_18,param_3,uVar3), plVar1 = aplStackX_18[0],
     aplStackX_18[0] != (int64_t *)0x0)) {
    if (((uVar3 >> 2 & 1) == 0) && ((uVar3 & 10) != 0)) {
      lVar2 = FUN_18033b3a0(param_1,*(int32_t *)(param_3 + 0xc));
      if (lVar2 != 0) {
        (**(code **)(*plVar1 + 0x1e0))(plVar1,lVar2);
      }
      (**(code **)(*plVar1 + 0x148))(plVar1,param_3 + 0x18);
    }
    (**(code **)(*plVar1 + 0x128))(plVar1,param_3 + 0x14);
    if ((param_4 == 0) || (*(int *)(param_4 + 0x8c) != *(int *)(param_3 + 0x8c))) {
      param_4 = 0;
    }
    switch(*(int *)(param_3 + 0x8c)) {
    case 0:
    case 7:
      if ((uVar3 & 10) != 0) {
        (**(code **)(*plVar1 + 0x1f0))(plVar1,param_1,param_3,param_4,uVar3);
      }
      break;
    case 1:
      FUN_180325ce0(param_1,plVar1,param_3,param_5,param_6);
      break;
    case 2:
      FUN_180326180(param_1,plVar1,param_3,param_4,param_5,CONCAT44(uVar4,param_6));
      break;
    case 4:
      FUN_180325ed0(param_1,plVar1,param_3,param_5,param_6,param_7);
      break;
    case 6:
      (**(code **)(*plVar1 + 0x1f0))(plVar1,param_1,param_3,param_4,param_5);
    }
    *param_2 = plVar1;
  }
  return uVar3;
}



uint FUN_180325b7e(void)

{
  int64_t lVar1;
  int64_t *unaff_RBX;
  uint unaff_ESI;
  int64_t unaff_RDI;
  uint64_t *in_stack_00000078;
  
  if (((unaff_ESI >> 2 & 1) == 0) && ((unaff_ESI & 10) != 0)) {
    lVar1 = FUN_18033b3a0();
    if (lVar1 != 0) {
      (**(code **)(*unaff_RBX + 0x1e0))();
    }
    (**(code **)(*unaff_RBX + 0x148))();
  }
  (**(code **)(*unaff_RBX + 0x128))();
  switch(*(int32_t *)(unaff_RDI + 0x8c)) {
  case 0:
  case 7:
    if ((unaff_ESI & 10) != 0) {
      (**(code **)(*unaff_RBX + 0x1f0))();
    }
    break;
  case 1:
    FUN_180325ce0();
    break;
  case 2:
    FUN_180326180();
    break;
  case 4:
    FUN_180325ed0();
    break;
  case 6:
    (**(code **)(*unaff_RBX + 0x1f0))();
  }
  *in_stack_00000078 = unaff_RBX;
  return unaff_ESI;
}



int32_t FUN_180325cac(void)

{
  int32_t unaff_ESI;
  
  return unaff_ESI;
}



uint FUN_180325ce0(uint64_t param_1,int64_t param_2,int64_t param_3,uint param_4,uint param_5)

{
  int64_t lVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int64_t *aplStackX_18 [2];
  
  uVar10 = (*(uint *)(param_3 + 0x10) | param_4) & ~param_5;
  bVar8 = (byte)(uVar10 >> 2);
  bVar9 = bVar8 & 1;
  if (((uVar10 >> 2 & 1) == 0) && ((uVar10 >> 3 & 1) != 0)) {
    uVar6 = *(uint64_t *)(param_3 + 0xe0);
    *(uint64_t *)(param_2 + 0xd4) = *(uint64_t *)(param_3 + 0xd8);
    *(uint64_t *)(param_2 + 0xdc) = uVar6;
    if (*(float *)(param_2 + 0x30) != *(float *)(param_3 + 0xb0)) {
      *(byte *)(param_2 + 1000) = bVar8 & 1;
      *(int8_t *)(param_2 + 0x3a1) = 1;
      *(int32_t *)(param_2 + 0x30) = *(int32_t *)(param_3 + 0xb0);
      lVar1 = *(int64_t *)(param_2 + 0x28);
      if (lVar1 != 0) {
        *(short *)(lVar1 + 0x2b0) = *(short *)(lVar1 + 0x2b0) + 1;
        if (*(int64_t *)(lVar1 + 0x168) != 0) {
          func_0x0001802eeba0();
        }
      }
    }
    fVar11 = *(float *)(param_3 + 0xb8);
    *(float *)(param_2 + 0xe8) = fVar11;
    fVar13 = *(float *)(param_2 + 0xec);
    fVar12 = fVar13;
    if (fVar13 <= fVar11) {
      fVar12 = fVar11;
    }
    if (fVar13 != fVar12) {
      *(int8_t *)(param_2 + 1000) = 0;
      *(int8_t *)(param_2 + 0x3a1) = 1;
      *(float *)(param_2 + 0xec) = fVar12;
      fVar13 = fVar12;
    }
    fVar12 = *(float *)(param_3 + 0xbc);
    if (fVar13 != fVar12) {
      *(int8_t *)(param_2 + 1000) = 0;
      *(int8_t *)(param_2 + 0x3a1) = 1;
      *(float *)(param_2 + 0xec) = fVar12;
      if (fVar12 <= fVar11) {
        fVar11 = fVar12;
      }
      *(float *)(param_2 + 0xe8) = fVar11;
    }
    *(int32_t *)(param_2 + 0x168) = *(int32_t *)(param_3 + 200);
    *(int32_t *)(param_2 + 0xe4) = *(int32_t *)(param_3 + 0xb4);
    *(int32_t *)(param_2 + 0x16c) = *(int32_t *)(param_3 + 0xcc);
    uVar3 = *(int32_t *)(param_3 + 0xec);
    uVar4 = *(int32_t *)(param_3 + 0xf0);
    uVar5 = *(int32_t *)(param_3 + 0xf4);
    *(int32_t *)(param_2 + 0x158) = *(int32_t *)(param_3 + 0xe8);
    *(int32_t *)(param_2 + 0x15c) = uVar3;
    *(int32_t *)(param_2 + 0x160) = uVar4;
    *(int32_t *)(param_2 + 0x164) = uVar5;
    *(int32_t *)(param_2 + 0xf0) = *(int32_t *)(param_3 + 0xc0);
    *(int32_t *)(param_2 + 0xf4) = *(int32_t *)(param_3 + 0xc4);
  }
  if (((bVar9 == 0) && ((uVar10 >> 1 & 1) == 0)) && ((uVar10 >> 4 & 1) != 0)) {
    aplStackX_18[0] = (int64_t *)0x0;
    FUN_1803276a0(param_1,aplStackX_18,param_3 + 0x1a8);
    plVar7 = aplStackX_18[0];
    if (aplStackX_18[0] != (int64_t *)0x0) {
      (**(code **)(*aplStackX_18[0] + 0x28))(aplStackX_18[0]);
    }
    plVar2 = *(int64_t **)(param_2 + 0x110);
    *(int64_t **)(param_2 + 0x110) = plVar7;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x38))(plVar7);
    }
  }
  return uVar10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_180325ed0(int64_t param_1,uint64_t param_2,int64_t param_3,uint param_4,uint param_5,
                  int64_t **param_6)

{
  int8_t uVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int64_t lVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  int64_t lVar10;
  uint uVar11;
  int64_t *aplStackX_18 [2];
  int64_t *aplStack_78 [2];
  int64_t *plStack_68;
  int64_t *plStack_60;
  int64_t lStack_58;
  int8_t uStack_50;
  uint64_t uStack_48;
  int64_t **pplStack_40;
  int64_t lStack_38;
  uint64_t *puStack_30;
  
  lVar6 = (int64_t)param_6;
  uStack_48 = 0xfffffffffffffffe;
  uVar11 = (*(uint *)(param_3 + 0x10) | param_4) & ~param_5;
  if (((param_6 != (int64_t **)0x0) && (*(int *)(param_1 + 0x110) == 3)) &&
     ((uVar11 >> 1 & 1) != 0)) {
    FUN_1800c1750(param_1,aplStack_78,*(int32_t *)(param_3 + 0xf0));
    if (aplStack_78[0] == (int64_t *)0x0) {
      FUN_180627020(&unknown_var_9528_ptr,*(int32_t *)(param_3 + 0xf0));
      if (aplStack_78[0] != (int64_t *)0x0) {
        (**(code **)(*aplStack_78[0] + 0x38))();
      }
    }
    else {
      uVar8 = FUN_18062b1e0(system_memory_pool_ptr,0x168,8,3);
      plVar9 = (int64_t *)FUN_1802ac390(uVar8);
      FUN_1802ae9a0(plVar9,*(uint64_t *)(param_1 + 0x2d8));
      aplStackX_18[0] = (int64_t *)&param_6;
      param_6 = (int64_t **)aplStack_78[0];
      if (aplStack_78[0] != (int64_t *)0x0) {
        (**(code **)(*aplStack_78[0] + 0x28))();
      }
      FUN_1802adab0(plVar9,&param_6);
      lVar10 = *(int64_t *)(param_3 + 0xb8);
      plVar9[10] = *(int64_t *)(param_3 + 0xb0);
      plVar9[0xb] = lVar10;
      lVar10 = *(int64_t *)(param_3 + 200);
      plVar9[0xc] = *(int64_t *)(param_3 + 0xc0);
      plVar9[0xd] = lVar10;
      uVar3 = *(int32_t *)(param_3 + 0xd4);
      uVar4 = *(int32_t *)(param_3 + 0xd8);
      uVar5 = *(int32_t *)(param_3 + 0xdc);
      *(int32_t *)(plVar9 + 0xe) = *(int32_t *)(param_3 + 0xd0);
      *(int32_t *)((int64_t)plVar9 + 0x74) = uVar3;
      *(int32_t *)(plVar9 + 0xf) = uVar4;
      *(int32_t *)((int64_t)plVar9 + 0x7c) = uVar5;
      uVar3 = *(int32_t *)(param_3 + 0xe4);
      uVar4 = *(int32_t *)(param_3 + 0xe8);
      uVar5 = *(int32_t *)(param_3 + 0xec);
      *(int32_t *)(plVar9 + 0x10) = *(int32_t *)(param_3 + 0xe0);
      *(int32_t *)((int64_t)plVar9 + 0x84) = uVar3;
      *(int32_t *)(plVar9 + 0x11) = uVar4;
      *(int32_t *)((int64_t)plVar9 + 0x8c) = uVar5;
      lVar10 = *(int64_t *)(lVar6 + 0x10);
      plVar9[5] = lVar10;
      if (lVar10 != 0) {
        if ((*(char *)(lVar10 + 0x2e8) < '\0') && (*(int *)(plVar9[9] + 0x70) == 0)) {
          *(int32_t *)(plVar9[9] + 0x70) = 2;
        }
        lVar10 = *(int64_t *)(lVar10 + 0x20);
      }
      FUN_1802ae9a0(plVar9,lVar10);
      uVar1 = *(int8_t *)(param_3 + 0xf4);
      param_6 = aplStackX_18;
      aplStackX_18[0] = plVar9;
      (**(code **)(*plVar9 + 0x28))(plVar9);
      pplStack_40 = aplStackX_18;
      lVar10 = param_1 + 0x7c8;
      lStack_38 = lVar10;
      iVar7 = _Mtx_lock(lVar10);
      if (iVar7 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar7);
      }
      param_6 = (int64_t **)aplStackX_18[0];
      if (aplStackX_18[0] != (int64_t *)0x0) {
        (**(code **)(*aplStackX_18[0] + 0x28))();
      }
      plVar9 = (int64_t *)param_6;
      puStack_30 = &param_6;
      plStack_60 = (int64_t *)0x0;
      plStack_68 = (int64_t *)param_6;
      if (param_6 != (int64_t **)0x0) {
        (**(code **)((int64_t)*param_6 + 0x28))(param_6);
      }
      plStack_68 = (int64_t *)0x0;
      plStack_60 = plVar9;
      lStack_58 = lVar6;
      uStack_50 = uVar1;
      if (param_6 != (int64_t **)0x0) {
        (**(code **)((int64_t)*param_6 + 0x38))();
      }
      plVar2 = *(int64_t **)(param_1 + 0x7b0);
      if (plVar2 < *(int64_t **)(param_1 + 0x7b8)) {
        *(int64_t **)(param_1 + 0x7b0) = plVar2 + 3;
        *plVar2 = (int64_t)plVar9;
        param_6 = (int64_t **)plVar2;
        if (plVar9 != (int64_t *)0x0) {
          (**(code **)(*plVar9 + 0x28))(plVar9);
        }
        plVar2[1] = lVar6;
        *(int8_t *)(plVar2 + 2) = uVar1;
      }
      else {
        FUN_18033c190(param_1 + 0x7a8,&plStack_60);
        plVar9 = plStack_60;
      }
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      iVar7 = _Mtx_unlock(lVar10);
      if (iVar7 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar7);
      }
      if (aplStackX_18[0] != (int64_t *)0x0) {
        (**(code **)(*aplStackX_18[0] + 0x38))();
      }
      if (aplStack_78[0] != (int64_t *)0x0) {
        (**(code **)(*aplStack_78[0] + 0x38))();
      }
    }
  }
  return uVar11;
}



uint FUN_180326180(uint64_t param_1,int64_t *param_2,int64_t param_3,int64_t param_4,
                  uint param_5,uint param_6)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t *plVar4;
  uint uVar5;
  uint uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t *plStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int64_t lStack_48;
  int64_t lStack_40;
  uint64_t uStack_38;
  int32_t uStack_30;
  
  uStack_50 = 0xfffffffffffffffe;
  uVar6 = (*(uint *)(param_3 + 0x10) | param_5) & ~param_6;
  if (((uVar6 >> 2 & 1) == 0) && ((uVar6 & 10) != 0)) {
    *(int8_t *)((int64_t)param_2 + 0xa9) = *(int8_t *)(param_3 + 0xb0);
    lVar7 = *(int64_t *)(param_3 + 0x60);
    param_2[0xe] = *(int64_t *)(param_3 + 0x58);
    param_2[0xf] = lVar7;
    uVar1 = *(int32_t *)(param_3 + 0x6c);
    uVar2 = *(int32_t *)(param_3 + 0x70);
    uVar3 = *(int32_t *)(param_3 + 0x74);
    *(int32_t *)(param_2 + 0x10) = *(int32_t *)(param_3 + 0x68);
    *(int32_t *)((int64_t)param_2 + 0x84) = uVar1;
    *(int32_t *)(param_2 + 0x11) = uVar2;
    *(int32_t *)((int64_t)param_2 + 0x8c) = uVar3;
    uVar1 = *(int32_t *)(param_3 + 0x7c);
    uVar2 = *(int32_t *)(param_3 + 0x80);
    uVar3 = *(int32_t *)(param_3 + 0x84);
    *(int32_t *)(param_2 + 0x12) = *(int32_t *)(param_3 + 0x78);
    *(int32_t *)((int64_t)param_2 + 0x94) = uVar1;
    *(int32_t *)(param_2 + 0x13) = uVar2;
    *(int32_t *)((int64_t)param_2 + 0x9c) = uVar3;
    *(int32_t *)(param_2 + 0x14) = *(int32_t *)(param_3 + 0x88);
    (**(code **)(*param_2 + 0x148))(param_2,param_3 + 0x18);
  }
  uStack_58 = *(int64_t *)(param_3 + 0xc0) - *(int64_t *)(param_3 + 0xb8) >> 3;
  if ((int)uStack_58 != 0) {
    uVar8 = 0;
    uStack_58 = uStack_58 & 0xffffffff;
    uVar11 = uVar8;
    do {
      uVar9 = 0;
      plStack_60 = (int64_t *)0x0;
      uVar10 = uVar9;
      if ((param_4 != 0) &&
         (uVar8 < (uint64_t)(*(int64_t *)(param_4 + 0xc0) - *(int64_t *)(param_4 + 0xb8) >> 3)))
      {
        uVar10 = *(uint64_t *)(uVar11 + *(int64_t *)(param_4 + 0xb8));
      }
      uVar5 = FUN_180325b10(param_1,&plStack_60,
                            *(uint64_t *)(uVar11 + *(int64_t *)(param_3 + 0xb8)),uVar10,param_5,
                            param_6,0);
      plVar4 = plStack_60;
      if (plStack_60 != (int64_t *)0x0) {
        if ((uVar5 & 2) != 0) {
          FUN_18039f160(param_2,plStack_60);
        }
        if ((uVar5 & 4) != 0) {
          lStack_48 = 0;
          lStack_40 = 0;
          uStack_38 = 0;
          uStack_30 = 3;
          (**(code **)(*plVar4 + 0x170))(plVar4,&lStack_48,0xffffffff);
          if (lStack_40 - lStack_48 >> 3 != 0) {
            lVar7 = 0;
            do {
              FUN_180325830(param_1,*(uint64_t *)(lVar7 + lStack_48));
              uVar5 = (int)uVar9 + 1;
              uVar9 = (uint64_t)uVar5;
              lVar7 = lVar7 + 8;
            } while ((uint64_t)(int64_t)(int)uVar5 < (uint64_t)(lStack_40 - lStack_48 >> 3));
          }
          FUN_18039f2b0(param_2,plVar4);
          if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager();
          }
        }
      }
      uVar8 = uVar8 + 1;
      uVar11 = uVar11 + 8;
      uStack_58 = uStack_58 - 1;
    } while (uStack_58 != 0);
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_1803263e0(int64_t *param_1,int64_t param_2,int64_t param_3)

{
  byte bVar1;
  code *pcVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int32_t uVar5;
  int32_t uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int32_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  int8_t *puVar14;
  void *puVar15;
  void *puVar16;
  uint *puVar17;
  uint64_t *puVar18;
  int8_t *puVar19;
  uint64_t *puVar20;
  int8_t *puVar21;
  int64_t lVar22;
  uint64_t *puVar23;
  bool bVar24;
  uint64_t uVar25;
  uint auStack_80 [2];
  uint64_t *puStack_78;
  int64_t lStack_70;
  int32_t uStack_68;
  uint64_t uStack_60;
  int8_t auStack_58 [32];
  
  uVar25 = 0xfffffffffffffffe;
  *(int32_t *)((int64_t)param_1 + 0x5c) = 0;
  *(int32_t *)((int64_t)param_1 + 100) = *(int32_t *)(param_3 + 0x270);
  *(int32_t *)(param_1 + 0xc) = *(int32_t *)(param_3 + 0x100);
  lVar11 = *(int64_t *)(param_3 + 0x128);
  param_1[0x1a] = *(int64_t *)(param_3 + 0x120);
  param_1[0x1b] = lVar11;
  lVar11 = *(int64_t *)(param_3 + 0x138);
  param_1[0x1c] = *(int64_t *)(param_3 + 0x130);
  param_1[0x1d] = lVar11;
  uVar10 = *(int32_t *)(param_3 + 0x144);
  uVar5 = *(int32_t *)(param_3 + 0x148);
  uVar6 = *(int32_t *)(param_3 + 0x14c);
  *(int32_t *)(param_1 + 0x1e) = *(int32_t *)(param_3 + 0x140);
  *(int32_t *)((int64_t)param_1 + 0xf4) = uVar10;
  *(int32_t *)(param_1 + 0x1f) = uVar5;
  *(int32_t *)((int64_t)param_1 + 0xfc) = uVar6;
  uVar10 = *(int32_t *)(param_3 + 0x154);
  uVar5 = *(int32_t *)(param_3 + 0x158);
  uVar6 = *(int32_t *)(param_3 + 0x15c);
  *(int32_t *)(param_1 + 0x20) = *(int32_t *)(param_3 + 0x150);
  *(int32_t *)((int64_t)param_1 + 0x104) = uVar10;
  *(int32_t *)(param_1 + 0x21) = uVar5;
  *(int32_t *)((int64_t)param_1 + 0x10c) = uVar6;
  if (*(int64_t *)(param_3 + 0x1b0) == 0) {
    lVar11 = param_3 + 0x10;
  }
  else {
    lVar11 = func_0x000180079240();
  }
  puVar15 = &system_buffer_ptr;
  if (*(void **)(lVar11 + 8) != (void *)0x0) {
    puVar15 = *(void **)(lVar11 + 8);
  }
  (**(code **)(*param_1 + 0x10))(param_1,puVar15);
  lVar11 = *(int64_t *)(param_3 + 0x240);
  param_1[0x10] = *(int64_t *)(param_3 + 0x238);
  param_1[0x11] = lVar11;
  lVar11 = *(int64_t *)(param_3 + 0x250);
  param_1[0x12] = *(int64_t *)(param_3 + 0x248);
  param_1[0x13] = lVar11;
  lVar11 = *(int64_t *)(param_3 + 0x2b0);
  param_1[0x14] = *(int64_t *)(param_3 + 0x2a8);
  param_1[0x15] = lVar11;
  uVar10 = *(int32_t *)(param_3 + 700);
  uVar5 = *(int32_t *)(param_3 + 0x2c0);
  uVar6 = *(int32_t *)(param_3 + 0x2c4);
  *(int32_t *)(param_1 + 0x16) = *(int32_t *)(param_3 + 0x2b8);
  *(int32_t *)((int64_t)param_1 + 0xb4) = uVar10;
  *(int32_t *)(param_1 + 0x17) = uVar5;
  *(int32_t *)((int64_t)param_1 + 0xbc) = uVar6;
  lVar11 = FUN_180079430(param_3);
  pcVar2 = *(code **)(param_1[0x22] + 0x10);
  puVar15 = *(void **)(lVar11 + 8);
  puVar16 = &system_buffer_ptr;
  if (puVar15 != (void *)0x0) {
    puVar16 = puVar15;
  }
  (*pcVar2)(param_1 + 0x22,puVar16,puVar15,pcVar2,uVar25);
  uVar3 = *(uint64_t *)(*(int64_t *)(param_3 + 0x1b8) + 0x3b0);
  if ((uVar3 != 0) && ((*(uint64_t *)(*(int64_t *)(param_3 + 0x1b8) + 0x140) & uVar3) != 0)) {
    *(uint *)((int64_t)param_1 + 0x5c) = *(uint *)((int64_t)param_1 + 0x5c) | 0x100;
  }
  puVar20 = *(uint64_t **)(*(int64_t *)(param_3 + 0x1b8) + 0xc0);
  if (puVar20 != (uint64_t *)0x0) {
    puVar15 = &system_buffer_ptr;
    if ((void *)puVar20[3] != (void *)0x0) {
      puVar15 = (void *)puVar20[3];
    }
    lVar11 = strstr(puVar15,&unknown_var_7544_ptr);
    if (lVar11 != 0) {
      uVar8 = FUN_18032b4a0(param_2);
      lVar11 = *(int64_t *)(param_2 + 0xaf0);
      for (puVar17 = *(uint **)(lVar11 + ((uint64_t)uVar8 % (uint64_t)*(uint *)(param_2 + 0xaf8))
                                         * 8); puVar17 != (uint *)0x0;
          puVar17 = *(uint **)(puVar17 + 4)) {
        if (uVar8 == *puVar17) {
          lVar12 = *(int64_t *)(param_2 + 0xaf8);
          goto LAB_1803265ac;
        }
      }
      lVar12 = *(int64_t *)(param_2 + 0xaf8);
      puVar17 = *(uint **)(lVar11 + lVar12 * 8);
LAB_1803265ac:
      if (puVar17 == *(uint **)(lVar11 + lVar12 * 8)) {
        if ((void *)*puVar20 == &unknown_var_8720_ptr) {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
        }
        else {
          (**(code **)((void *)*puVar20 + 0x28))(puVar20);
        }
        auStack_80[0] = uVar8;
        puStack_78 = puVar20;
        FUN_18033b220(param_2 + 0xae8,auStack_58,auStack_80);
      }
      *(uint *)((int64_t)param_1 + 0x6c) = uVar8;
    }
  }
  if (*(int64_t *)(param_3 + 600) == 0) {
    iVar9 = *(int *)((int64_t)param_1 + 0x74);
  }
  else {
    iVar9 = *(int *)(*(int64_t *)(param_3 + 600) + 8);
    *(int *)((int64_t)param_1 + 0x74) = iVar9;
    *(int32_t *)(param_1 + 0xf) = *(int32_t *)(*(int64_t *)(param_3 + 600) + 0x18);
    *(int32_t *)((int64_t)param_1 + 0x7c) = *(int32_t *)(*(int64_t *)(param_3 + 600) + 0x1c)
    ;
  }
  uVar8 = 0;
  if (iVar9 != 0) {
    lVar11 = 0;
    do {
      lVar12 = 1;
      puVar23 = (uint64_t *)(**(int64_t **)(param_3 + 600) + lVar11);
      puVar20 = (uint64_t *)param_1[0x2b];
      if (puVar20 < (uint64_t *)param_1[0x2c]) {
        param_1[0x2b] = (int64_t)(puVar20 + 8);
        uVar25 = puVar23[1];
        *puVar20 = *puVar23;
        puVar20[1] = uVar25;
        uVar25 = puVar23[3];
        puVar20[2] = puVar23[2];
        puVar20[3] = uVar25;
        uVar10 = *(int32_t *)((int64_t)puVar23 + 0x24);
        uVar5 = *(int32_t *)(puVar23 + 5);
        uVar6 = *(int32_t *)((int64_t)puVar23 + 0x2c);
        *(int32_t *)(puVar20 + 4) = *(int32_t *)(puVar23 + 4);
        *(int32_t *)((int64_t)puVar20 + 0x24) = uVar10;
        *(int32_t *)(puVar20 + 5) = uVar5;
        *(int32_t *)((int64_t)puVar20 + 0x2c) = uVar6;
        uVar25 = puVar23[7];
        puVar20[6] = puVar23[6];
        puVar20[7] = uVar25;
      }
      else {
        puVar18 = (uint64_t *)param_1[0x2a];
        lVar22 = (int64_t)puVar20 - (int64_t)puVar18 >> 6;
        if ((lVar22 == 0) || (lVar12 = lVar22 * 2, lVar12 != 0)) {
          puVar13 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,lVar12 << 6,(char)param_1[0x2d]);
          puVar20 = (uint64_t *)param_1[0x2b];
          puVar18 = (uint64_t *)param_1[0x2a];
        }
        else {
          puVar13 = (uint64_t *)0x0;
        }
        if (puVar18 != puVar20) {
                    // WARNING: Subroutine does not return
          memmove(puVar13,puVar18,(int64_t)puVar20 - (int64_t)puVar18);
        }
        uVar25 = puVar23[1];
        *puVar13 = *puVar23;
        puVar13[1] = uVar25;
        uVar25 = puVar23[3];
        puVar13[2] = puVar23[2];
        puVar13[3] = uVar25;
        uVar10 = *(int32_t *)((int64_t)puVar23 + 0x24);
        uVar5 = *(int32_t *)(puVar23 + 5);
        uVar6 = *(int32_t *)((int64_t)puVar23 + 0x2c);
        *(int32_t *)(puVar13 + 4) = *(int32_t *)(puVar23 + 4);
        *(int32_t *)((int64_t)puVar13 + 0x24) = uVar10;
        *(int32_t *)(puVar13 + 5) = uVar5;
        *(int32_t *)((int64_t)puVar13 + 0x2c) = uVar6;
        uVar10 = *(int32_t *)((int64_t)puVar23 + 0x34);
        uVar5 = *(int32_t *)(puVar23 + 7);
        uVar6 = *(int32_t *)((int64_t)puVar23 + 0x3c);
        *(int32_t *)(puVar13 + 6) = *(int32_t *)(puVar23 + 6);
        *(int32_t *)((int64_t)puVar13 + 0x34) = uVar10;
        *(int32_t *)(puVar13 + 7) = uVar5;
        *(int32_t *)((int64_t)puVar13 + 0x3c) = uVar6;
        if (param_1[0x2a] != 0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        param_1[0x2a] = (int64_t)puVar13;
        param_1[0x2b] = (int64_t)(puVar13 + 8);
        param_1[0x2c] = (int64_t)(puVar13 + lVar12 * 8);
      }
      uVar8 = uVar8 + 1;
      lVar11 = lVar11 + 0x40;
    } while (uVar8 < *(uint *)((int64_t)param_1 + 0x74));
  }
  uVar8 = 0;
  if ((int)param_1[0xf] != 0) {
    lVar11 = 0;
    do {
      lVar22 = 1;
      lVar12 = *(int64_t *)(*(int64_t *)(param_3 + 600) + 0x10);
      puVar21 = (int8_t *)param_1[0x2f];
      if (puVar21 < (int8_t *)param_1[0x30]) {
        param_1[0x2f] = (int64_t)(puVar21 + 1);
        *puVar21 = *(int8_t *)(lVar12 + lVar11);
      }
      else {
        puVar19 = (int8_t *)param_1[0x2e];
        if (((int64_t)puVar21 - (int64_t)puVar19 == 0) ||
           (lVar22 = ((int64_t)puVar21 - (int64_t)puVar19) * 2, lVar22 != 0)) {
          puVar14 = (int8_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,lVar22,(char)param_1[0x31]);
          puVar21 = (int8_t *)param_1[0x2f];
          puVar19 = (int8_t *)param_1[0x2e];
        }
        else {
          puVar14 = (int8_t *)0x0;
        }
        if (puVar19 != puVar21) {
                    // WARNING: Subroutine does not return
          memmove(puVar14,puVar19,(int64_t)puVar21 - (int64_t)puVar19);
        }
        *puVar14 = *(int8_t *)(lVar12 + lVar11);
        if (param_1[0x2e] != 0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        param_1[0x2e] = (int64_t)puVar14;
        param_1[0x2f] = (int64_t)(puVar14 + 1);
        param_1[0x30] = (int64_t)(puVar14 + lVar22);
      }
      uVar8 = uVar8 + 1;
      lVar11 = lVar11 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0xf));
  }
  lVar11 = *(int64_t *)(param_3 + 0x1b0);
  while (lVar12 = lVar11, lVar12 != 0) {
    param_3 = lVar12;
    lVar11 = *(int64_t *)(lVar12 + 0x1b0);
  }
  uVar8 = 0;
  if ((int)param_1[0xe] == 0) {
    uStack_68 = 0;
    lStack_70 = param_3;
    iVar9 = _Thrd_id();
    while( true ) {
      LOCK();
      cVar7 = *(char *)(param_3 + 0xec);
      bVar24 = cVar7 == '\0';
      if (bVar24) {
        *(char *)(param_3 + 0xec) = '\x01';
        cVar7 = '\0';
      }
      UNLOCK();
      if (bVar24) break;
      if (*(int *)(param_3 + 0xf0) == iVar9) goto LAB_1803268c5;
      Sleep(0);
    }
    cVar7 = '\0';
LAB_1803268c5:
    LOCK();
    *(int *)(param_3 + 0xe8) = *(int *)(param_3 + 0xe8) + 1;
    UNLOCK();
    FUN_18007eb80(param_3,0);
    if (cVar7 == '\0') {
      LOCK();
      *(int8_t *)(param_3 + 0xec) = 0;
      UNLOCK();
    }
    uStack_60 = *(uint64_t *)(param_3 + 0x210);
    uVar10 = FUN_1803239f0(param_2);
    *(int32_t *)(param_1 + 0xe) = uVar10;
    while( true ) {
      LOCK();
      cVar7 = *(char *)(param_3 + 0xec);
      bVar24 = cVar7 == '\0';
      if (bVar24) {
        *(char *)(param_3 + 0xec) = '\x01';
        cVar7 = '\0';
      }
      UNLOCK();
      if (bVar24) break;
      iVar9 = _Thrd_id();
      if ((*(int *)(param_3 + 0xf0) == iVar9) || (*(int *)(param_3 + 0xf0) != 0))
      goto LAB_18032693e;
      Sleep();
    }
    cVar7 = '\0';
LAB_18032693e:
    LOCK();
    puVar17 = (uint *)(param_3 + 0xe8);
    uVar8 = *puVar17;
    *puVar17 = *puVar17 - 1;
    UNLOCK();
    if (cVar7 == '\0') {
      if ((((uVar8 == 1) && (*(int64_t *)(param_3 + 0x210) != 0)) &&
          (FUN_1800791a0(param_3), *(char *)(param_3 + 0xfc) == '\0')) &&
         ((*(char *)(param_3 + 0xf4) == '\0' &&
          (((*(byte *)(param_3 + 0xfd) & 0x20) == 0 || ((*(byte *)(param_3 + 0xfe) & 1) == 0)))))) {
        plVar4 = *(int64_t **)(param_3 + 0x210);
        *(uint64_t *)(param_3 + 0x210) = 0;
        if (plVar4 != (int64_t *)0x0) {
          (**(code **)(*plVar4 + 0x38))();
        }
      }
      LOCK();
      bVar1 = *(byte *)(param_3 + 0xec);
      *(byte *)(param_3 + 0xec) = 0;
      uVar8 = (uint)bVar1;
      UNLOCK();
    }
  }
  return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



