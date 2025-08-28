#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part162.c - 2 个函数

// 函数: void FUN_18036ae60(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_18036ae60(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  int32_t *puVar4;
  longlong lVar5;
  uint64_t uVar6;
  void *puStack_60;
  uint64_t *puStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  void *puStack_40;
  uint64_t *puStack_38;
  int32_t uStack_30;
  uint64_t uStack_28;
  
  uVar6 = 0xfffffffffffffffe;
  if (*(int *)(param_2 + 0x10) == 4) {
    lVar1 = 0;
    do {
      lVar5 = lVar1;
      if (*(char *)(*(longlong *)(param_2 + 8) + lVar5) != (&system_data_0e48)[lVar5]) {
        return;
      }
      lVar1 = lVar5 + 1;
    } while (lVar5 + 1 != 5);
    puStack_60 = &unknown_var_3456_ptr;
    uStack_48 = 0;
    puStack_58 = (uint64_t *)0x0;
    uStack_50 = 0;
    puVar3 = (uint64_t *)
             FUN_18062b420(system_memory_pool_ptr,(int)lVar5 + 0xc,&unknown_var_1379_ptr,param_4,0xfffffffffffffffe
                          );
    *(int8_t *)puVar3 = 0;
    puStack_58 = puVar3;
    uVar2 = FUN_18064e990(puVar3);
    *puVar3 = 0x6968747972657645;
    *(int16_t *)(puVar3 + 1) = 0x676e;
    *(int8_t *)((longlong)puVar3 + 10) = 0;
    uStack_50 = 10;
    uStack_48._0_4_ = uVar2;
    FUN_180066df0(param_3,&puStack_60);
    puStack_60 = &unknown_var_3456_ptr;
    if (puStack_58 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_58 = (uint64_t *)0x0;
    uStack_48 = (ulonglong)uStack_48._4_4_ << 0x20;
    puStack_60 = &unknown_var_720_ptr;
    puStack_40 = &unknown_var_3456_ptr;
    uStack_28 = 0;
    puStack_38 = (uint64_t *)0x0;
    uStack_30 = 0;
    puVar3 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13,param_4,uVar6);
    *(int8_t *)puVar3 = 0;
    puStack_38 = puVar3;
    uVar2 = FUN_18064e990(puVar3);
    *puVar3 = 0x65674120796c6e4f;
    *(int32_t *)(puVar3 + 1) = 0x73746e;
    uStack_30 = 0xb;
    uStack_28._0_4_ = uVar2;
    FUN_180066df0(param_3,&puStack_40);
    puStack_40 = &unknown_var_3456_ptr;
    if (puStack_38 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_38 = (uint64_t *)0x0;
    uStack_28 = (ulonglong)uStack_28._4_4_ << 0x20;
    puStack_40 = &unknown_var_720_ptr;
    puStack_60 = &unknown_var_3456_ptr;
    uStack_48 = 0;
    puStack_58 = (uint64_t *)0x0;
    uStack_50 = 0;
    puVar3 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar3 = 0;
    puStack_58 = puVar3;
    uVar2 = FUN_18064e990(puVar3);
    *puVar3 = 0x20494120796c6e4f;
    *(int32_t *)(puVar3 + 1) = 0x6e656741;
    *(int16_t *)((longlong)puVar3 + 0xc) = 0x7374;
    *(int8_t *)((longlong)puVar3 + 0xe) = 0;
    uStack_50 = 0xe;
    uStack_48._0_4_ = uVar2;
    FUN_180066df0(param_3,&puStack_60);
    puStack_60 = &unknown_var_3456_ptr;
    if (puStack_58 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_58 = (uint64_t *)0x0;
    uStack_48 = (ulonglong)uStack_48._4_4_ << 0x20;
    puStack_60 = &unknown_var_720_ptr;
    puStack_40 = &unknown_var_3456_ptr;
    uStack_28 = 0;
    puStack_38 = (uint64_t *)0x0;
    uStack_30 = 0;
    puVar4 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x17,0x13);
    *(int8_t *)puVar4 = 0;
    puStack_38 = (uint64_t *)puVar4;
    uVar2 = FUN_18064e990(puVar4);
    uStack_28 = CONCAT44(uStack_28._4_4_,uVar2);
    *puVar4 = 0x796c6e4f;
    puVar4[1] = 0x73694d20;
    puVar4[2] = 0x656c6973;
    puVar4[3] = 0x646e6120;
    puVar4[4] = 0x6c654d20;
    *(int16_t *)(puVar4 + 5) = 0x6565;
    *(int8_t *)((longlong)puVar4 + 0x16) = 0;
    uStack_30 = 0x16;
    FUN_180066df0(param_3,&puStack_40);
    puStack_40 = &unknown_var_3456_ptr;
    if (puStack_38 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001802e8bd3)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18036b140(longlong param_1)
void FUN_18036b140(longlong param_1)

{
  byte bVar1;
  int32_t uVar2;
  int32_t uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  uint64_t uVar7;
  longlong *plVar8;
  longlong lVar9;
  void *puVar10;
  int8_t uVar11;
  longlong *unaff_RBX;
  longlong **unaff_RBP;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  float fVar15;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  longlong **pplStackX_20;
  ulonglong in_stack_ffffffffffffff78;
  ulonglong uVar16;
  uint64_t uVar17;
  int8_t auStack_60 [8];
  uint64_t uStack_58;
  uint64_t uStack_50;
  int8_t uStack_48;
  int32_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  
  uStack_30 = 0xfffffffffffffffe;
  uStack_38 = 0;
  uVar17 = *(uint64_t *)(*(longlong *)(param_1 + 0x18) + 0x20);
  uVar7 = FUN_18062b1e0(system_memory_pool_ptr,0x2f0,0x10,0xd);
  plVar8 = (longlong *)FUN_1802e6b00(uVar7,4);
  plStackX_10 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8);
  }
  uStack_38 = 1;
  if (plVar8[0x4d] == 0) {
    FUN_180170ac0(plVar8,&unknown_var_4472_ptr);
  }
  FUN_1802ea790(plVar8,&system_data_0300);
  pplStackX_20 = &plStackX_8;
  plStackX_8 = plVar8;
  (**(code **)(*plVar8 + 0x28))(plVar8);
  uStack_48 = 0;
  uStack_50 = CONCAT71(uStack_50._1_7_,1);
  uStack_58 = 0;
  FUN_180198b90(uVar17,&plStackX_8,1);
  plStackX_10 = (longlong *)0x0;
  pplStackX_18 = *(longlong ***)(param_1 + 0xe8);
  *(longlong **)(param_1 + 0xe8) = plVar8;
  if (pplStackX_18 != (longlong **)0x0) {
    (**(code **)((longlong)*pplStackX_18 + 0x38))();
  }
  uStack_38 = 0;
  FUN_180170ac0(*(uint64_t *)(param_1 + 0xe8),&unknown_var_2984_ptr);
  lVar9 = *(longlong *)(param_1 + 0xe8);
  uVar12 = *(uint *)(lVar9 + 0x2ac);
  *(uint *)(lVar9 + 0x2ac) = uVar12 | 0x2020000;
  FUN_1802ee810(lVar9,uVar12);
  uVar16 = 0x18036b29c;
  FUN_1802ee990(lVar9,uVar12);
  lVar9 = *(longlong *)(param_1 + 0x18);
  fVar15 = *(float *)(lVar9 + 0x30) * *(float *)(lVar9 + 0x30) +
           *(float *)(lVar9 + 0x34) * *(float *)(lVar9 + 0x34) +
           *(float *)(lVar9 + 0x38) * *(float *)(lVar9 + 0x38);
  if (((((fVar15 <= 0.98010004) || (1.0201 <= fVar15)) ||
       (fVar15 = *(float *)(lVar9 + 0x40) * *(float *)(lVar9 + 0x40) +
                 *(float *)(lVar9 + 0x44) * *(float *)(lVar9 + 0x44) +
                 *(float *)(lVar9 + 0x48) * *(float *)(lVar9 + 0x48), fVar15 <= 0.98010004)) ||
      ((1.0201 <= fVar15 ||
       (fVar15 = *(float *)(lVar9 + 0x50) * *(float *)(lVar9 + 0x50) +
                 *(float *)(lVar9 + 0x54) * *(float *)(lVar9 + 0x54) +
                 *(float *)(lVar9 + 0x58) * *(float *)(lVar9 + 0x58), fVar15 <= 0.98010004)))) ||
     (1.0201 <= fVar15)) {
    puVar10 = &system_buffer_ptr;
    if (*(void **)(lVar9 + 0x290) != (void *)0x0) {
      puVar10 = *(void **)(lVar9 + 0x290);
    }
    uVar16 = 0x18036b358;
    FUN_180626f80(&unknown_var_1504_ptr,puVar10);
  }
  plVar8 = *(longlong **)(param_1 + 0xe8);
  lVar13 = *(longlong *)(param_1 + 0x18);
  uVar17 = 0xfffffffffffffffe;
  lVar9 = plVar8[4];
  plStackX_8 = unaff_RBX;
  pplStackX_18 = unaff_RBP;
  if ((lVar9 == 0) || (lVar9 == *(longlong *)(lVar13 + 0x20))) {
    uVar11 = 0;
    if (plVar8[0x2d] == 0) {
      if (lVar9 != 0) {
        FUN_180398550(*(longlong *)(lVar13 + 0x20) + 0x607e0);
      }
    }
    else {
      uVar16 = CONCAT44((int)(uVar16 >> 0x20),0x14);
      FUN_1802eb9a0(plVar8[0x2d],plVar8,1,0,in_stack_ffffffffffffff78 & 0xffffffffffffff00,uVar16);
    }
  }
  else {
    uVar11 = 1;
    FUN_180198980(lVar9,plVar8,1,0,0x1a);
  }
  if ((*(uint *)((longlong)plVar8 + 0x2ac) & 0x20000) == 0) {
    FUN_1802ed990(lVar13,1);
  }
  plVar8[0x2d] = lVar13;
  lVar9 = lVar13;
  do {
    lVar6 = lVar9;
    lVar9 = *(longlong *)(lVar6 + 0x168);
  } while (lVar9 != 0);
  FUN_1802f2700(lVar6,1);
  FUN_1802eaec0(plVar8,*(uint64_t *)(lVar13 + 0x20),uVar11,1,0,uVar16 & 0xffffffffffffff00,0,
                0xffffffff,uVar17);
  plStackX_10 = plVar8;
  (**(code **)(*plVar8 + 0x28))(plVar8);
  FUN_1800b87c0(lVar13 + 0x1c0,&plStackX_10);
  if (plStackX_10 != (longlong *)0x0) {
    (**(code **)(*plStackX_10 + 0x38))();
  }
  plVar5 = (longlong *)FUN_1802f5d10(lVar13 + 0x70,auStack_60,plVar8 + 6);
  cVar4 = func_0x000180285980(plVar8 + 6);
  if (cVar4 != '\0') {
    lVar9 = plVar5[1];
    plVar8[6] = *plVar5;
    plVar8[7] = lVar9;
    lVar9 = plVar5[3];
    plVar8[8] = plVar5[2];
    plVar8[9] = lVar9;
    uVar2 = *(int32_t *)((longlong)plVar5 + 0x24);
    lVar9 = plVar5[5];
    uVar3 = *(int32_t *)((longlong)plVar5 + 0x2c);
    *(int *)(plVar8 + 10) = (int)plVar5[4];
    *(int32_t *)((longlong)plVar8 + 0x54) = uVar2;
    *(int *)(plVar8 + 0xb) = (int)lVar9;
    *(int32_t *)((longlong)plVar8 + 0x5c) = uVar3;
    uVar2 = *(int32_t *)((longlong)plVar5 + 0x34);
    lVar9 = plVar5[7];
    uVar3 = *(int32_t *)((longlong)plVar5 + 0x3c);
    *(int *)(plVar8 + 0xc) = (int)plVar5[6];
    *(int32_t *)((longlong)plVar8 + 100) = uVar2;
    *(int *)(plVar8 + 0xd) = (int)lVar9;
    *(int32_t *)((longlong)plVar8 + 0x6c) = uVar3;
    FUN_180254610(plVar8);
    FUN_1802eace0();
  }
  FUN_1802eace0(plVar8);
  *(short *)(plVar8 + 0x56) = (short)plVar8[0x56] + 1;
  if (plVar8[0x2d] != 0) {
    func_0x0001802eeba0();
  }
  *(short *)(lVar13 + 0x2b0) = *(short *)(lVar13 + 0x2b0) + 1;
  if (*(longlong *)(lVar13 + 0x168) != 0) {
    func_0x0001802eeba0();
    for (lVar9 = *(longlong *)(lVar13 + 0x168); lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x168)) {
      lVar13 = lVar9;
    }
  }
  uStack_28 = 0xfffffffffffffffe;
  plStackX_10 = plStackX_8;
  bVar1 = *(byte *)(lVar13 + 0x2e8);
  *(byte *)(lVar13 + 0x2e8) = bVar1 & 0xf7 | 8;
  lVar9 = *(longlong *)(lVar13 + 0x20);
  uVar16 = 0;
  if (lVar9 != 0) {
    lVar6 = *(longlong *)(lVar13 + 0x28);
    if ((bVar1 & 3 | 8) == 0xb) {
      if ((*(longlong *)(lVar6 + 0x170) == 0) &&
         (plVar8 = *(longlong **)(lVar13 + 0x10), plVar8 != (longlong *)0x0)) {
        pplStackX_18 = &plStackX_8;
        uStack_50 = 0x1802f2797;
        plStackX_8 = plVar8;
        (**(code **)(*plVar8 + 0x28))();
        uStack_50 = 0x1802f27a5;
        uVar17 = FUN_180389a90(lVar9 + 0x29a0,&plStackX_8);
        *(uint64_t *)(*(longlong *)(lVar13 + 0x28) + 0x170) = uVar17;
        lVar9 = *(longlong *)(lVar13 + 0x20);
        plVar8 = *(longlong **)(lVar9 + 0x29a8);
        if (plVar8 != (longlong *)0x0) {
          uStack_50 = 0x1802f27d8;
          (**(code **)(*plVar8 + 0x18))
                    (plVar8,*(uint64_t *)(*(longlong *)(lVar13 + 0x28) + 0x170),lVar13 + 0x70);
          lVar9 = *(longlong *)(lVar13 + 0x20);
        }
        plVar8 = *(longlong **)(lVar9 + 0x29a8);
        if (plVar8 != (longlong *)0x0) {
          uStack_50 = 0x1802f27fd;
          (**(code **)(*plVar8 + 0x20))
                    (plVar8,*(uint64_t *)(*(longlong *)(lVar13 + 0x28) + 0x170),
                     *(int32_t *)(lVar13 + 0x18));
        }
      }
    }
    else if (*(longlong *)(lVar6 + 0x170) != 0) {
      plVar8 = *(longlong **)(lVar9 + 0x29a8);
      if (plVar8 != (longlong *)0x0) {
        uStack_50 = 0x1802f2820;
        (**(code **)(*plVar8 + 0x10))(plVar8,*(longlong *)(lVar6 + 0x170));
        lVar6 = *(longlong *)(lVar13 + 0x28);
      }
      *(uint64_t *)(lVar6 + 0x170) = 0;
    }
  }
  uVar14 = uVar16;
  if (*(longlong *)(lVar13 + 0x1c8) - *(longlong *)(lVar13 + 0x1c0) >> 3 != 0) {
    do {
      uStack_50 = 0x1802f2864;
      FUN_1802f2700(*(uint64_t *)(uVar14 + *(longlong *)(lVar13 + 0x1c0)),(bVar1 & 1) != 0);
      uVar12 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar12;
      uVar14 = uVar14 + 8;
    } while ((ulonglong)(longlong)(int)uVar12 <
             (ulonglong)(*(longlong *)(lVar13 + 0x1c8) - *(longlong *)(lVar13 + 0x1c0) >> 3));
  }
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



