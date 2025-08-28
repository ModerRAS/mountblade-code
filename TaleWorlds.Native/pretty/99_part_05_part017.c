#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part017.c - 2 个函数

// 函数: void FUN_1802e1590(int64_t param_1,uint64_t param_2)
void FUN_1802e1590(int64_t param_1,uint64_t param_2)

{
  int32_t *puVar1;
  int iVar2;
  int64_t lVar3;
  int iVar4;
  int32_t *puVar5;
  int64_t lVar6;
  float fVar7;
  int8_t auStack_c8 [32];
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  *(uint64_t *)(param_1 + 0x28) = param_2;
  FUN_1802e4490();
  fVar7 = *(float *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 4);
  iVar4 = (int)(fVar7 * *(float *)(param_1 + 0x58));
  *(int *)(param_1 + 0x20) = iVar4;
  if (iVar2 == 1) {
    fVar7 = fVar7 * *(float *)(param_1 + 0x5c);
  }
  else if (iVar2 == 2) {
    fVar7 = fVar7 * *(float *)(param_1 + 0x60);
  }
  else {
    if (iVar2 != 3) goto LAB_1802e15fc;
    fVar7 = fVar7 * *(float *)(param_1 + 100);
  }
  iVar4 = (int)fVar7;
  *(int *)(param_1 + 0x20) = iVar4;
LAB_1802e15fc:
  if (0x4000 < iVar4) {
    *(int32_t *)(param_1 + 0x20) = 0x4000;
  }
  *(int32_t *)(param_1 + 0x50) = 0x3f800000;
  FUN_1801983b0(*(int64_t *)(param_1 + 0x28),*(int64_t *)(param_1 + 0x28) + 0x3830);
  lVar3 = *(int64_t *)(param_1 + 0x28);
  *(uint64_t *)(lVar3 + 0x3860) = 0;
  *(uint64_t *)(lVar3 + 0x3868) = 0x7f7fffff00000000;
  lVar3 = *(int64_t *)(param_1 + 0x28);
  *(uint64_t *)(lVar3 + 0x3810) = 0x461c4000461c4000;
  *(uint64_t *)(lVar3 + 0x3818) = 0x7f7fffff461c4000;
  lVar3 = *(int64_t *)(param_1 + 0x28);
  *(uint64_t *)(lVar3 + 0x3820) = 0xc61c4000c61c4000;
  *(uint64_t *)(lVar3 + 0x3828) = 0x7f7fffffc61c4000;
  lVar3 = *(int64_t *)(param_1 + 0x28);
  *(int32_t *)(param_1 + 0x40) = 0xff7fffff;
  *(int32_t *)(param_1 + 0x44) = 0xff7fffff;
  *(int32_t *)(param_1 + 0x48) = 0xff7fffff;
  *(int32_t *)(param_1 + 0x4c) = 0xff7fffff;
  *(int32_t *)(param_1 + 0x30) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x34) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x38) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x3c) = 0x7f7fffff;
  if (*(int64_t *)(lVar3 + 0x60b80) == 0) {
    puVar1 = (int32_t *)(lVar3 + 0x60b68);
    uStack_88 = *puVar1;
    puVar5 = &uStack_98;
    uStack_a4 = *(int32_t *)(lVar3 + 0x60b6c);
    uStack_58 = *puVar1;
    uStack_54 = *(int32_t *)(lVar3 + 0x60b6c);
    uStack_98 = *puVar1;
    uStack_94 = *(int32_t *)(lVar3 + 0x60b6c);
    lVar6 = 8;
    uStack_84 = *(int32_t *)(lVar3 + 0x60b74);
    puVar1 = (int32_t *)(lVar3 + 0x60b70);
    uStack_a8 = *puVar1;
    uStack_28 = *puVar1;
    uStack_24 = *(int32_t *)(lVar3 + 0x60b74);
    uStack_68 = *puVar1;
    uStack_64 = *(int32_t *)(lVar3 + 0x60b74);
    uStack_90 = 0xc1a00000;
    uStack_8c = 0x7f7fffff;
    uStack_80 = 0xc1a00000;
    uStack_7c = 0x7f7fffff;
    uStack_70 = 0xc1a00000;
    uStack_6c = 0x7f7fffff;
    uStack_60 = 0xc1a00000;
    uStack_5c = 0x7f7fffff;
    uStack_50 = 0x42200000;
    uStack_4c = 0x7f7fffff;
    uStack_40 = 0x42200000;
    uStack_3c = 0x7f7fffff;
    uStack_a0 = 0x42200000;
    uStack_30 = 0x42200000;
    uStack_2c = 0x7f7fffff;
    uStack_9c = 0x7f7fffff;
    uStack_20 = 0x42200000;
    uStack_1c = 0x7f7fffff;
    uStack_78 = uStack_a8;
    uStack_74 = uStack_a4;
    uStack_48 = uStack_88;
    uStack_44 = uStack_84;
    uStack_38 = uStack_a8;
    uStack_34 = uStack_a4;
    do {
      FUN_1802e4210(param_1,puVar5);
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  else {
    FUN_1803b25a0(*(int64_t *)(lVar3 + 0x60b80),param_1,lVar3);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_c8);
}






// 函数: void FUN_1802e18c0(int64_t param_1)
void FUN_1802e18c0(int64_t param_1)

{
  int64_t lVar1;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  
  FUN_1801983b0(*(int64_t *)(param_1 + 0x28),*(int64_t *)(param_1 + 0x28) + 0x3830);
  lVar1 = *(int64_t *)(param_1 + 0x28);
  *(uint64_t *)(lVar1 + 0x3860) = 0;
  *(uint64_t *)(lVar1 + 0x3868) = 0x7f7fffff00000000;
  uStack_48 = *(int32_t *)(param_1 + 0x30);
  uStack_44 = *(int32_t *)(param_1 + 0x34);
  uStack_40 = *(int32_t *)(param_1 + 0x38);
  uStack_3c = *(int32_t *)(param_1 + 0x3c);
  uStack_38 = *(int32_t *)(param_1 + 0x40);
  uStack_34 = *(int32_t *)(param_1 + 0x44);
  uStack_30 = *(int32_t *)(param_1 + 0x48);
  uStack_2c = *(int32_t *)(param_1 + 0x4c);
  FUN_1800b9f60(&uStack_48);
  FUN_180287610(*(int64_t *)(param_1 + 0x28) + 0x36d0,*(int64_t *)(param_1 + 0x28) + 0x3830,
                &uStack_48);
  lVar1 = FUN_1802e1950(param_1);
  if (lVar1 != 0) {
    *(int32_t *)(param_1 + 0xc) = 3;
  }
  *(int8_t *)(*(int64_t *)(param_1 + 0x28) + 0x2830) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_1802e1950(int *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  char cVar9;
  int32_t *puVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  uint64_t uVar14;
  
  uVar14 = 0xfffffffffffffffe;
  if (0 < *param_1) {
    cVar9 = FUN_1802e4840();
    if ((cVar9 != '\0') && (*(int64_t *)(param_1 + 4) != 0)) {
      puVar10 = (int32_t *)FUN_1800daa50();
      *(int8_t *)((int64_t)puVar10 + 0x23) = 1;
      FUN_180094b30(puVar10,&processed_var_0_ptr);
      *puVar10 = 0x10;
      *(uint64_t *)(puVar10 + 0x4706) = 0;
      puVar10[0x4708] = (float)(param_1[8] << 2);
      puVar10[0x4709] = (float)(param_1[8] << 2);
      puVar10[0x470a] = 0;
      puVar10[0x470b] = 0x3f800000;
      lVar13 = 2;
      puVar7 = (uint64_t *)(*(int64_t *)(param_1 + 10) + 0x36d0);
      puVar8 = (uint64_t *)(puVar10 + 0xc);
      do {
        puVar12 = puVar8;
        puVar11 = puVar7;
        uVar6 = puVar11[1];
        *puVar12 = *puVar11;
        puVar12[1] = uVar6;
        uVar6 = puVar11[3];
        puVar12[2] = puVar11[2];
        puVar12[3] = uVar6;
        uVar6 = puVar11[5];
        puVar12[4] = puVar11[4];
        puVar12[5] = uVar6;
        uVar6 = puVar11[7];
        puVar12[6] = puVar11[6];
        puVar12[7] = uVar6;
        uVar6 = puVar11[9];
        puVar12[8] = puVar11[8];
        puVar12[9] = uVar6;
        uVar6 = puVar11[0xb];
        puVar12[10] = puVar11[10];
        puVar12[0xb] = uVar6;
        uVar6 = puVar11[0xd];
        puVar12[0xc] = puVar11[0xc];
        puVar12[0xd] = uVar6;
        uVar6 = puVar11[0xf];
        puVar12[0xe] = puVar11[0xe];
        puVar12[0xf] = uVar6;
        lVar13 = lVar13 + -1;
        puVar7 = puVar11 + 0x10;
        puVar8 = puVar12 + 0x10;
      } while (lVar13 != 0);
      uVar6 = puVar11[0x11];
      puVar12[0x10] = puVar11[0x10];
      puVar12[0x11] = uVar6;
      uVar6 = puVar11[0x13];
      puVar12[0x12] = puVar11[0x12];
      puVar12[0x13] = uVar6;
      uVar6 = puVar11[0x15];
      puVar12[0x14] = puVar11[0x14];
      puVar12[0x15] = uVar6;
      uVar3 = *(int32_t *)((int64_t)puVar11 + 0xb4);
      uVar4 = *(int32_t *)(puVar11 + 0x17);
      uVar5 = *(int32_t *)((int64_t)puVar11 + 0xbc);
      *(int32_t *)(puVar12 + 0x16) = *(int32_t *)(puVar11 + 0x16);
      *(int32_t *)((int64_t)puVar12 + 0xb4) = uVar3;
      *(int32_t *)(puVar12 + 0x17) = uVar4;
      *(int32_t *)((int64_t)puVar12 + 0xbc) = uVar5;
      FUN_18024b8d0(puVar10);
      puVar10[0x473c] = 0xffffffff;
      if (*(code **)(puVar10 + 0x2588) != (code *)0x0) {
        (**(code **)(puVar10 + 0x2588))(puVar10 + 0x2584,0,0,param_4,uVar14);
      }
      *(void **)(puVar10 + 0x2588) = &processed_var_7024_ptr;
      *(void **)(puVar10 + 0x258a) = &processed_var_7008_ptr;
      *(code **)(puVar10 + 0x2584) = _guard_check_icall;
      plVar1 = *(int64_t **)(puVar10 + 0x25a4);
      *(uint64_t *)(puVar10 + 0x25a4) = 0;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      plVar1 = *(int64_t **)(param_1 + 4);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      plVar2 = *(int64_t **)(puVar10 + 0x25aa);
      *(int64_t **)(puVar10 + 0x25aa) = plVar1;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      *(int8_t *)((int64_t)puVar10 + 0x124c5) = 0;
      puVar10[0x268b] = 0xfffffff6;
      puVar10[1] = puVar10[1] | 0x218003;
      puVar10[0x4938] = 0;
      *(int8_t *)(puVar10 + 0x25c4) = 0;
      puVar10[0x6e] = 0x40008182;
      FUN_1801be080(puVar10 + 2,system_parameter_buffer + 0x13b0);
      lVar13 = *(int64_t *)(*(int64_t *)(param_1 + 10) + 0x60b80);
      if (lVar13 != 0) {
        *(int8_t *)(lVar13 + 0x170) = 1;
        LOCK();
        *(int32_t *)(lVar13 + 0x10) = 0;
        UNLOCK();
      }
      return puVar10;
    }
  }
  return (int32_t *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




