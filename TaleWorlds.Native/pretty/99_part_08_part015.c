#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part015.c - 12 个函数

// 函数: void FUN_1804ecfb1(uint64_t param_1,uint64_t param_2,uint param_3)
void FUN_1804ecfb1(uint64_t param_1,uint64_t param_2,uint param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int8_t uVar8;
  uint64_t *puVar9;
  uint uVar10;
  int64_t lVar11;
  uint64_t *puVar12;
  uint uVar13;
  int64_t unaff_RBX;
  uint64_t *puVar14;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  uint in_R10D;
  int64_t lVar15;
  int64_t in_R11;
  int64_t unaff_R13;
  int32_t uVar16;
  uint64_t uStack0000000000000040;
  int64_t lStack0000000000000048;
  uint uStack0000000000000050;
  int32_t uStack0000000000000054;
  int64_t lStack0000000000000058;
  
  lVar1 = unaff_RDI + 0x87d220;
  param_3 = param_3 & 0x800003ff;
  if ((int)param_3 < 0) {
    param_3 = (param_3 - 1 | 0xfffffc00) + 1;
  }
  uVar13 = param_3 + 0x3ff & 0x800003ff;
  if ((int)uVar13 < 0) {
    uVar13 = (uVar13 - 1 | 0xfffffc00) + 1;
  }
  uVar10 = *(int *)(unaff_RDI + 0x98d22c) + *(int *)(unaff_RDI + 0x98d228) & 0x800003ff;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xfffffc00) + 1;
  }
  uVar10 = uVar10 + 0x3ff & 0x800003ff;
  uStack0000000000000050 = uVar13;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xfffffc00) + 1;
  }
  while ((uStack0000000000000050 != in_R10D &&
         (in_R11 < *(int64_t *)((int64_t)(int)uStack0000000000000050 * 0x200 + 0x10 + lVar1)))) {
    uStack0000000000000050 = uStack0000000000000050 + 0x3ff & 0x800003ff;
    if ((int)uStack0000000000000050 < 0) {
      uStack0000000000000050 = (uStack0000000000000050 - 1 | 0xfffffc00) + 1;
    }
    uVar10 = uVar10 + 0x3ff & 0x800003ff;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffc00) + 1;
    }
  }
  if ((*(int *)(unaff_R13 + 0x10) ==
       *(int *)((int64_t)(int)uStack0000000000000050 * 0x200 + 0x1c + lVar1)) &&
     (*(int64_t *)((int64_t)(int)uStack0000000000000050 * 0x200 + 0x10 + lVar1) == in_R11)) {
    while ((uStack0000000000000050 != param_3 &&
           (*(int *)((int64_t)(int)uStack0000000000000050 * 0x200 + 0x28 + lVar1) != 0))) {
      uStack0000000000000050 = uStack0000000000000050 + 1 & 0x800003ff;
      if ((int)uStack0000000000000050 < 0) {
        uStack0000000000000050 = (uStack0000000000000050 - 1 | 0xfffffc00) + 1;
      }
      uVar10 = uVar10 + 1 & 0x800003ff;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xfffffc00) + 1;
      }
    }
    if (uStack0000000000000050 != param_3) {
      lVar15 = 4;
      lVar11 = 4;
      puVar6 = (uint64_t *)&stack0x00000060;
      puVar7 = (uint64_t *)((int64_t)(int)uVar10 * 0x240 + unaff_RDI + 0x8fd228);
      do {
        puVar9 = puVar7;
        puVar14 = puVar6;
        uVar2 = puVar9[1];
        uVar3 = puVar9[2];
        uVar4 = puVar9[3];
        *puVar14 = *puVar9;
        puVar14[1] = uVar2;
        uVar2 = puVar9[4];
        uVar5 = puVar9[5];
        puVar14[2] = uVar3;
        puVar14[3] = uVar4;
        uVar3 = puVar9[6];
        uVar4 = puVar9[7];
        puVar14[4] = uVar2;
        puVar14[5] = uVar5;
        uVar2 = puVar9[8];
        uVar5 = puVar9[9];
        puVar14[6] = uVar3;
        puVar14[7] = uVar4;
        uVar3 = puVar9[10];
        uVar4 = puVar9[0xb];
        puVar14[8] = uVar2;
        puVar14[9] = uVar5;
        uVar2 = puVar9[0xc];
        uVar5 = puVar9[0xd];
        puVar14[10] = uVar3;
        puVar14[0xb] = uVar4;
        uVar3 = puVar9[0xe];
        uVar4 = puVar9[0xf];
        puVar14[0xc] = uVar2;
        puVar14[0xd] = uVar5;
        puVar14[0xe] = uVar3;
        puVar14[0xf] = uVar4;
        lVar11 = lVar11 + -1;
        puVar6 = puVar14 + 0x10;
        puVar7 = puVar9 + 0x10;
      } while (lVar11 != 0);
      uVar2 = puVar9[0x11];
      uVar3 = puVar9[0x12];
      uVar4 = puVar9[0x13];
      puVar14[0x10] = puVar9[0x10];
      puVar14[0x11] = uVar2;
      uVar2 = puVar9[0x14];
      uVar5 = puVar9[0x15];
      puVar14[0x12] = uVar3;
      puVar14[0x13] = uVar4;
      uVar3 = puVar9[0x16];
      uVar4 = puVar9[0x17];
      puVar14[0x14] = uVar2;
      puVar14[0x15] = uVar5;
      puVar14[0x16] = uVar3;
      puVar14[0x17] = uVar4;
      puVar14 = (uint64_t *)(unaff_RDI + 0x74eb90 + unaff_RSI * 0x240);
      puVar6 = puVar14;
      puVar7 = (uint64_t *)&stack0x00000060;
      do {
        puVar12 = puVar7;
        puVar9 = puVar6;
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        uVar4 = puVar12[3];
        *puVar9 = *puVar12;
        puVar9[1] = uVar2;
        uVar2 = puVar12[4];
        uVar5 = puVar12[5];
        puVar9[2] = uVar3;
        puVar9[3] = uVar4;
        uVar3 = puVar12[6];
        uVar4 = puVar12[7];
        puVar9[4] = uVar2;
        puVar9[5] = uVar5;
        uVar2 = puVar12[8];
        uVar5 = puVar12[9];
        puVar9[6] = uVar3;
        puVar9[7] = uVar4;
        uVar3 = puVar12[10];
        uVar4 = puVar12[0xb];
        puVar9[8] = uVar2;
        puVar9[9] = uVar5;
        uVar2 = puVar12[0xc];
        uVar5 = puVar12[0xd];
        puVar9[10] = uVar3;
        puVar9[0xb] = uVar4;
        uVar3 = puVar12[0xe];
        uVar4 = puVar12[0xf];
        puVar9[0xc] = uVar2;
        puVar9[0xd] = uVar5;
        puVar9[0xe] = uVar3;
        puVar9[0xf] = uVar4;
        lVar15 = lVar15 + -1;
        puVar6 = puVar9 + 0x10;
        puVar7 = puVar12 + 0x10;
      } while (lVar15 != 0);
      uVar2 = puVar12[0x11];
      uVar3 = puVar12[0x12];
      uVar4 = puVar12[0x13];
      puVar9[0x10] = puVar12[0x10];
      puVar9[0x11] = uVar2;
      uVar2 = puVar12[0x14];
      uVar5 = puVar12[0x15];
      puVar9[0x12] = uVar3;
      puVar9[0x13] = uVar4;
      uVar3 = puVar12[0x16];
      uVar4 = puVar12[0x17];
      puVar9[0x14] = uVar2;
      puVar9[0x15] = uVar5;
      puVar9[0x16] = uVar3;
      puVar9[0x17] = uVar4;
      uVar2 = *(uint64_t *)(unaff_RBX + 0x4c4b0);
      uVar13 = *(uint *)((int64_t)(int)uStack0000000000000050 * 0x200 + 0x24 + lVar1);
      *(uint64_t *)((int64_t)puVar14 + 0xc) = *(uint64_t *)(unaff_RBX + 0x4c4a8);
      *(uint64_t *)((int64_t)puVar14 + 0x14) = uVar2;
      *(uint64_t *)((int64_t)puVar14 + 0x1c) = *(uint64_t *)(unaff_RBX + 0x4c4c8);
      if ((uVar13 >> 0xb & 1) == 0) {
        *(int32_t *)((int64_t)puVar14 + 0x34) = *(int32_t *)(unaff_RBX + 0x4c4d8);
      }
      uStack0000000000000040 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      uVar13 = uStack0000000000000050;
      lStack0000000000000048 = lVar1;
      lStack0000000000000058 = lVar1;
      while( true ) {
        uVar10 = *(int *)(unaff_RDI + 0x8fd220) + *(int *)(unaff_RDI + 0x8fd224) & 0x800003ff;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffc00) + 1;
        }
        if (uVar13 == uVar10) break;
        lVar11 = (int64_t)(int)uVar13 * 0x200 + lVar1;
        uVar16 = func_0x000180598ed0(puVar14,*(int32_t *)(lVar11 + 0x18));
        if ((*(uint *)(lVar11 + 0x24) & 0x800) != 0) {
          FUN_1805984e0(uVar16,*(int32_t *)(lVar11 + 0x18),lVar11);
        }
        FUN_180598f80(puVar14);
        FUN_180590fc0(puVar14);
        FUN_180593ce0(puVar14,*(int32_t *)(lVar11 + 0x18));
        uVar16 = *(int32_t *)(lVar11 + 0x18);
        if ((system_status_flag == 0) || (system_status_flag == 5)) {
          uVar8 = 1;
        }
        else {
          uVar8 = 0;
        }
        *(int8_t *)(unaff_RDI + 0x87d208) = uVar8;
        if ((system_status_flag == 1) || (system_status_flag == 4)) {
          uVar8 = 1;
        }
        else {
          uVar8 = 0;
        }
        *(int8_t *)(unaff_RDI + 0x87d209) = uVar8;
        FUN_1805a7cb0(unaff_RDI + 0x87bd80,uVar16);
        FUN_1805a9bc0(unaff_RDI + 0x87bd80);
        FUN_180592060(puVar14,*(int32_t *)(lVar11 + 0x18));
        uVar13 = uVar13 + 1 & 0x800003ff;
        if ((int)uVar13 < 0) {
          uVar13 = (uVar13 - 1 | 0xfffffc00) + 1;
        }
      }
      uStack0000000000000040 = *(uint64_t *)((int64_t)puVar14 + 0xc);
      lStack0000000000000048 = *(uint64_t *)((int64_t)puVar14 + 0x14);
      FUN_18051f1e0(*(int32_t *)((int64_t)puVar14 + 0xc),&stack0x00000040);
      uVar13 = uVar13 + 0x3ff & 0x800003ff;
      if ((int)uVar13 < 0) {
        uVar13 = (uVar13 - 1 | 0xfffffc00) + 1;
      }
      if (*(int *)((int64_t)(int)uVar13 * 0x200 + 0x28 + lVar1) == 0) {
        *(uint64_t *)(*(int64_t *)(unaff_R13 + 0x20) + 0x1c) =
             *(uint64_t *)((int64_t)puVar14 + 0x1c);
      }
      if ((*(uint *)((int64_t)(int)uVar13 * 0x200 + 0x24 + lVar1) & 0x800) == 0) {
        func_0x000180598e50(*(uint64_t *)(unaff_R13 + 0x20),
                            *(int32_t *)((int64_t)puVar14 + 0x34));
      }
      if (-1 < *(int *)(unaff_R13 + 0x560)) {
        func_0x00018051a670((int64_t)*(int *)(unaff_R13 + 0x560) * 0xa60 + 0x30a0 + unaff_RDI);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804ed12e(uint64_t param_1,int param_2,uint64_t param_3,int64_t param_4)
void FUN_1804ed12e(uint64_t param_1,int param_2,uint64_t param_3,int64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int8_t uVar8;
  uint uVar9;
  int64_t in_RAX;
  uint64_t *puVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  uint uVar13;
  int64_t unaff_RBX;
  uint64_t *puVar14;
  int64_t unaff_RSI;
  int64_t lVar15;
  int64_t unaff_RDI;
  uint64_t in_R10;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int32_t uVar16;
  uint uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  uint in_stack_00000050;
  int32_t uStack0000000000000058;
  
  lVar5 = _uStack0000000000000058;
  uVar11 = in_R10 & 0xffffffff;
  puVar6 = (uint64_t *)&stack0x00000060;
  puVar7 = (uint64_t *)(in_RAX * 0x240 + _uStack0000000000000048);
  do {
    puVar10 = puVar7;
    puVar14 = puVar6;
    uVar1 = puVar10[1];
    uVar2 = puVar10[2];
    uVar3 = puVar10[3];
    *puVar14 = *puVar10;
    puVar14[1] = uVar1;
    uVar1 = puVar10[4];
    uVar4 = puVar10[5];
    puVar14[2] = uVar2;
    puVar14[3] = uVar3;
    uVar2 = puVar10[6];
    uVar3 = puVar10[7];
    puVar14[4] = uVar1;
    puVar14[5] = uVar4;
    uVar1 = puVar10[8];
    uVar4 = puVar10[9];
    puVar14[6] = uVar2;
    puVar14[7] = uVar3;
    uVar2 = puVar10[10];
    uVar3 = puVar10[0xb];
    puVar14[8] = uVar1;
    puVar14[9] = uVar4;
    uVar1 = puVar10[0xc];
    uVar4 = puVar10[0xd];
    puVar14[10] = uVar2;
    puVar14[0xb] = uVar3;
    uVar2 = puVar10[0xe];
    uVar3 = puVar10[0xf];
    puVar14[0xc] = uVar1;
    puVar14[0xd] = uVar4;
    puVar14[0xe] = uVar2;
    puVar14[0xf] = uVar3;
    uVar11 = uVar11 - 1;
    puVar6 = puVar14 + 0x10;
    puVar7 = puVar10 + 0x10;
  } while (uVar11 != 0);
  uVar1 = puVar10[0x11];
  uVar2 = puVar10[0x12];
  uVar3 = puVar10[0x13];
  puVar14[0x10] = puVar10[0x10];
  puVar14[0x11] = uVar1;
  uVar1 = puVar10[0x14];
  uVar4 = puVar10[0x15];
  puVar14[0x12] = uVar2;
  puVar14[0x13] = uVar3;
  uVar2 = puVar10[0x16];
  uVar3 = puVar10[0x17];
  puVar14[0x14] = uVar1;
  puVar14[0x15] = uVar4;
  puVar14[0x16] = uVar2;
  puVar14[0x17] = uVar3;
  puVar14 = (uint64_t *)(unaff_RDI + 0x74eb90 + unaff_RSI * 0x240);
  puVar6 = puVar14;
  puVar7 = (uint64_t *)&stack0x00000060;
  do {
    puVar12 = puVar7;
    puVar10 = puVar6;
    uVar1 = puVar12[1];
    uVar2 = puVar12[2];
    uVar3 = puVar12[3];
    *puVar10 = *puVar12;
    puVar10[1] = uVar1;
    uVar1 = puVar12[4];
    uVar4 = puVar12[5];
    puVar10[2] = uVar2;
    puVar10[3] = uVar3;
    uVar2 = puVar12[6];
    uVar3 = puVar12[7];
    puVar10[4] = uVar1;
    puVar10[5] = uVar4;
    uVar1 = puVar12[8];
    uVar4 = puVar12[9];
    puVar10[6] = uVar2;
    puVar10[7] = uVar3;
    uVar2 = puVar12[10];
    uVar3 = puVar12[0xb];
    puVar10[8] = uVar1;
    puVar10[9] = uVar4;
    uVar1 = puVar12[0xc];
    uVar4 = puVar12[0xd];
    puVar10[10] = uVar2;
    puVar10[0xb] = uVar3;
    uVar2 = puVar12[0xe];
    uVar3 = puVar12[0xf];
    puVar10[0xc] = uVar1;
    puVar10[0xd] = uVar4;
    puVar10[0xe] = uVar2;
    puVar10[0xf] = uVar3;
    in_R10 = in_R10 - 1;
    puVar6 = puVar10 + 0x10;
    puVar7 = puVar12 + 0x10;
  } while (in_R10 != 0);
  uVar1 = puVar12[0x11];
  uVar2 = puVar12[0x12];
  uVar3 = puVar12[0x13];
  puVar10[0x10] = puVar12[0x10];
  puVar10[0x11] = uVar1;
  uVar1 = puVar12[0x14];
  uVar4 = puVar12[0x15];
  puVar10[0x12] = uVar2;
  puVar10[0x13] = uVar3;
  uVar2 = puVar12[0x16];
  uVar3 = puVar12[0x17];
  puVar10[0x14] = uVar1;
  puVar10[0x15] = uVar4;
  puVar10[0x16] = uVar2;
  puVar10[0x17] = uVar3;
  uVar1 = *(uint64_t *)(unaff_RBX + 0x4c4b0);
  uVar13 = *(uint *)((int64_t)param_2 * 0x200 + 0x24 + param_4);
  *(uint64_t *)((int64_t)puVar14 + 0xc) = *(uint64_t *)(unaff_RBX + 0x4c4a8);
  *(uint64_t *)((int64_t)puVar14 + 0x14) = uVar1;
  *(uint64_t *)((int64_t)puVar14 + 0x1c) = *(uint64_t *)(unaff_RBX + 0x4c4c8);
  if ((uVar13 >> 0xb & 1) == 0) {
    *(int32_t *)((int64_t)puVar14 + 0x34) = *(int32_t *)(unaff_RBX + 0x4c4d8);
  }
  uStack0000000000000040 = in_stack_00000050;
  uStack0000000000000048 = uStack0000000000000058;
  uVar13 = in_stack_00000050;
  while( true ) {
    uVar9 = *(int *)(unaff_R14 + 0x80000) + *(int *)(unaff_R14 + 0x80004) & 0x800003ff;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffc00) + 1;
    }
    if ((lVar5 == unaff_R14) && (uVar13 == uVar9)) break;
    lVar15 = (int64_t)(int)uVar13 * 0x200 + lVar5;
    uVar16 = func_0x000180598ed0(puVar14,*(int32_t *)(lVar15 + 0x18));
    if ((*(uint *)(lVar15 + 0x24) & 0x800) != 0) {
      FUN_1805984e0(uVar16,*(int32_t *)(lVar15 + 0x18),lVar15);
    }
    FUN_180598f80(puVar14);
    FUN_180590fc0(puVar14);
    FUN_180593ce0(puVar14,*(int32_t *)(lVar15 + 0x18));
    uVar16 = *(int32_t *)(lVar15 + 0x18);
    if ((system_status_flag == 0) || (system_status_flag == 5)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    *(int8_t *)(unaff_RDI + 0x87d208) = uVar8;
    if ((system_status_flag == 1) || (system_status_flag == 4)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    *(int8_t *)(unaff_RDI + 0x87d209) = uVar8;
    FUN_1805a7cb0(unaff_RDI + 0x87bd80,uVar16);
    FUN_1805a9bc0(unaff_RDI + 0x87bd80);
    FUN_180592060(puVar14,*(int32_t *)(lVar15 + 0x18));
    uVar13 = uVar13 + 1 & 0x800003ff;
    if ((int)uVar13 < 0) {
      uVar13 = (uVar13 - 1 | 0xfffffc00) + 1;
    }
  }
  uStack0000000000000040 = *(int32_t *)((int64_t)puVar14 + 0xc);
  uStack0000000000000044 = *(int32_t *)(puVar14 + 2);
  uStack0000000000000048 = *(int32_t *)((int64_t)puVar14 + 0x14);
  uStack000000000000004c = *(int32_t *)(puVar14 + 3);
  FUN_18051f1e0(uStack0000000000000040,&stack0x00000040);
  uVar13 = uVar13 + 0x3ff & 0x800003ff;
  if ((int)uVar13 < 0) {
    uVar13 = (uVar13 - 1 | 0xfffffc00) + 1;
  }
  if (*(int *)((int64_t)(int)uVar13 * 0x200 + 0x28 + lVar5) == 0) {
    *(uint64_t *)(*(int64_t *)(unaff_R13 + 0x20) + 0x1c) =
         *(uint64_t *)((int64_t)puVar14 + 0x1c);
  }
  if ((*(uint *)((int64_t)(int)uVar13 * 0x200 + 0x24 + lVar5) & 0x800) == 0) {
    func_0x000180598e50(*(uint64_t *)(unaff_R13 + 0x20),*(int32_t *)((int64_t)puVar14 + 0x34))
    ;
  }
  if (-1 < *(int *)(unaff_R13 + 0x560)) {
    func_0x00018051a670((int64_t)*(int *)(unaff_R13 + 0x560) * 0xa60 + 0x30a0 + unaff_RDI);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804ed139(int64_t param_1,int param_2,uint64_t param_3,int64_t param_4)
void FUN_1804ed139(int64_t param_1,int param_2,uint64_t param_3,int64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int8_t uVar8;
  uint uVar9;
  int64_t in_RAX;
  uint64_t *puVar10;
  uint64_t *puVar11;
  uint uVar12;
  int64_t unaff_RBX;
  uint64_t *puVar13;
  int64_t unaff_RSI;
  int64_t lVar14;
  int64_t unaff_RDI;
  int64_t in_R10;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int32_t uVar15;
  uint uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  uint in_stack_00000050;
  int32_t uStack0000000000000058;
  
  lVar5 = _uStack0000000000000058;
  puVar6 = (uint64_t *)&stack0x00000060;
  puVar7 = (uint64_t *)(in_RAX * 0x240 + _uStack0000000000000048);
  do {
    puVar10 = puVar7;
    puVar13 = puVar6;
    uVar1 = puVar10[1];
    uVar2 = puVar10[2];
    uVar3 = puVar10[3];
    *puVar13 = *puVar10;
    puVar13[1] = uVar1;
    uVar1 = puVar10[4];
    uVar4 = puVar10[5];
    puVar13[2] = uVar2;
    puVar13[3] = uVar3;
    uVar2 = puVar10[6];
    uVar3 = puVar10[7];
    puVar13[4] = uVar1;
    puVar13[5] = uVar4;
    uVar1 = puVar10[8];
    uVar4 = puVar10[9];
    puVar13[6] = uVar2;
    puVar13[7] = uVar3;
    uVar2 = puVar10[10];
    uVar3 = puVar10[0xb];
    puVar13[8] = uVar1;
    puVar13[9] = uVar4;
    uVar1 = puVar10[0xc];
    uVar4 = puVar10[0xd];
    puVar13[10] = uVar2;
    puVar13[0xb] = uVar3;
    uVar2 = puVar10[0xe];
    uVar3 = puVar10[0xf];
    puVar13[0xc] = uVar1;
    puVar13[0xd] = uVar4;
    puVar13[0xe] = uVar2;
    puVar13[0xf] = uVar3;
    param_1 = param_1 + -1;
    puVar6 = puVar13 + 0x10;
    puVar7 = puVar10 + 0x10;
  } while (param_1 != 0);
  uVar1 = puVar10[0x11];
  uVar2 = puVar10[0x12];
  uVar3 = puVar10[0x13];
  puVar13[0x10] = puVar10[0x10];
  puVar13[0x11] = uVar1;
  uVar1 = puVar10[0x14];
  uVar4 = puVar10[0x15];
  puVar13[0x12] = uVar2;
  puVar13[0x13] = uVar3;
  uVar2 = puVar10[0x16];
  uVar3 = puVar10[0x17];
  puVar13[0x14] = uVar1;
  puVar13[0x15] = uVar4;
  puVar13[0x16] = uVar2;
  puVar13[0x17] = uVar3;
  puVar13 = (uint64_t *)(unaff_RDI + 0x74eb90 + unaff_RSI * 0x240);
  puVar6 = puVar13;
  puVar7 = (uint64_t *)&stack0x00000060;
  do {
    puVar11 = puVar7;
    puVar10 = puVar6;
    uVar1 = puVar11[1];
    uVar2 = puVar11[2];
    uVar3 = puVar11[3];
    *puVar10 = *puVar11;
    puVar10[1] = uVar1;
    uVar1 = puVar11[4];
    uVar4 = puVar11[5];
    puVar10[2] = uVar2;
    puVar10[3] = uVar3;
    uVar2 = puVar11[6];
    uVar3 = puVar11[7];
    puVar10[4] = uVar1;
    puVar10[5] = uVar4;
    uVar1 = puVar11[8];
    uVar4 = puVar11[9];
    puVar10[6] = uVar2;
    puVar10[7] = uVar3;
    uVar2 = puVar11[10];
    uVar3 = puVar11[0xb];
    puVar10[8] = uVar1;
    puVar10[9] = uVar4;
    uVar1 = puVar11[0xc];
    uVar4 = puVar11[0xd];
    puVar10[10] = uVar2;
    puVar10[0xb] = uVar3;
    uVar2 = puVar11[0xe];
    uVar3 = puVar11[0xf];
    puVar10[0xc] = uVar1;
    puVar10[0xd] = uVar4;
    puVar10[0xe] = uVar2;
    puVar10[0xf] = uVar3;
    in_R10 = in_R10 + -1;
    puVar6 = puVar10 + 0x10;
    puVar7 = puVar11 + 0x10;
  } while (in_R10 != 0);
  uVar1 = puVar11[0x11];
  uVar2 = puVar11[0x12];
  uVar3 = puVar11[0x13];
  puVar10[0x10] = puVar11[0x10];
  puVar10[0x11] = uVar1;
  uVar1 = puVar11[0x14];
  uVar4 = puVar11[0x15];
  puVar10[0x12] = uVar2;
  puVar10[0x13] = uVar3;
  uVar2 = puVar11[0x16];
  uVar3 = puVar11[0x17];
  puVar10[0x14] = uVar1;
  puVar10[0x15] = uVar4;
  puVar10[0x16] = uVar2;
  puVar10[0x17] = uVar3;
  uVar1 = *(uint64_t *)(unaff_RBX + 0x4c4b0);
  uVar12 = *(uint *)((int64_t)param_2 * 0x200 + 0x24 + param_4);
  *(uint64_t *)((int64_t)puVar13 + 0xc) = *(uint64_t *)(unaff_RBX + 0x4c4a8);
  *(uint64_t *)((int64_t)puVar13 + 0x14) = uVar1;
  *(uint64_t *)((int64_t)puVar13 + 0x1c) = *(uint64_t *)(unaff_RBX + 0x4c4c8);
  if ((uVar12 >> 0xb & 1) == 0) {
    *(int32_t *)((int64_t)puVar13 + 0x34) = *(int32_t *)(unaff_RBX + 0x4c4d8);
  }
  uStack0000000000000040 = in_stack_00000050;
  uStack0000000000000048 = uStack0000000000000058;
  uVar12 = in_stack_00000050;
  while( true ) {
    uVar9 = *(int *)(unaff_R14 + 0x80000) + *(int *)(unaff_R14 + 0x80004) & 0x800003ff;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffc00) + 1;
    }
    if ((lVar5 == unaff_R14) && (uVar12 == uVar9)) break;
    lVar14 = (int64_t)(int)uVar12 * 0x200 + lVar5;
    uVar15 = func_0x000180598ed0(puVar13,*(int32_t *)(lVar14 + 0x18));
    if ((*(uint *)(lVar14 + 0x24) & 0x800) != 0) {
      FUN_1805984e0(uVar15,*(int32_t *)(lVar14 + 0x18),lVar14);
    }
    FUN_180598f80(puVar13);
    FUN_180590fc0(puVar13);
    FUN_180593ce0(puVar13,*(int32_t *)(lVar14 + 0x18));
    uVar15 = *(int32_t *)(lVar14 + 0x18);
    if ((system_status_flag == 0) || (system_status_flag == 5)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    *(int8_t *)(unaff_RDI + 0x87d208) = uVar8;
    if ((system_status_flag == 1) || (system_status_flag == 4)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    *(int8_t *)(unaff_RDI + 0x87d209) = uVar8;
    FUN_1805a7cb0(unaff_RDI + 0x87bd80,uVar15);
    FUN_1805a9bc0(unaff_RDI + 0x87bd80);
    FUN_180592060(puVar13,*(int32_t *)(lVar14 + 0x18));
    uVar12 = uVar12 + 1 & 0x800003ff;
    if ((int)uVar12 < 0) {
      uVar12 = (uVar12 - 1 | 0xfffffc00) + 1;
    }
  }
  uStack0000000000000040 = *(int32_t *)((int64_t)puVar13 + 0xc);
  uStack0000000000000044 = *(int32_t *)(puVar13 + 2);
  uStack0000000000000048 = *(int32_t *)((int64_t)puVar13 + 0x14);
  uStack000000000000004c = *(int32_t *)(puVar13 + 3);
  FUN_18051f1e0(uStack0000000000000040,&stack0x00000040);
  uVar12 = uVar12 + 0x3ff & 0x800003ff;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xfffffc00) + 1;
  }
  if (*(int *)((int64_t)(int)uVar12 * 0x200 + 0x28 + lVar5) == 0) {
    *(uint64_t *)(*(int64_t *)(unaff_R13 + 0x20) + 0x1c) =
         *(uint64_t *)((int64_t)puVar13 + 0x1c);
  }
  if ((*(uint *)((int64_t)(int)uVar12 * 0x200 + 0x24 + lVar5) & 0x800) == 0) {
    func_0x000180598e50(*(uint64_t *)(unaff_R13 + 0x20),*(int32_t *)((int64_t)puVar13 + 0x34))
    ;
  }
  if (-1 < *(int *)(unaff_R13 + 0x560)) {
    func_0x00018051a670((int64_t)*(int *)(unaff_R13 + 0x560) * 0xa60 + 0x30a0 + unaff_RDI);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804ed2b8(int32_t param_1)
void FUN_1804ed2b8(int32_t param_1)

{
  int8_t uVar1;
  uint uVar2;
  uint unaff_EBX;
  int64_t unaff_RBP;
  int64_t lVar3;
  int64_t unaff_RDI;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int64_t unaff_R15;
  int32_t uVar4;
  int32_t in_stack_00000040;
  int32_t uStack0000000000000044;
  int32_t in_stack_00000048;
  int32_t uStack000000000000004c;
  
  while( true ) {
    uVar2 = *(int *)(unaff_R14 + 0x80000) + *(int *)(unaff_R14 + 0x80004) & 0x800003ff;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffc00) + 1;
    }
    if ((unaff_R15 == unaff_R14) && (unaff_EBX == uVar2)) break;
    lVar3 = (int64_t)(int)unaff_EBX * 0x200 + unaff_R15;
    uVar4 = func_0x000180598ed0(param_1,*(int32_t *)(lVar3 + 0x18));
    if ((*(uint *)(lVar3 + 0x24) & 0x800) != 0) {
      FUN_1805984e0(uVar4,*(int32_t *)(lVar3 + 0x18),lVar3);
    }
    FUN_180598f80();
    uVar4 = FUN_180590fc0();
    FUN_180593ce0(uVar4,*(int32_t *)(lVar3 + 0x18));
    uVar4 = *(int32_t *)(lVar3 + 0x18);
    if ((system_status_flag == 0) || (system_status_flag == 5)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    *(int8_t *)(unaff_RDI + 0x87d208) = uVar1;
    if ((system_status_flag == 1) || (system_status_flag == 4)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    *(int8_t *)(unaff_RDI + 0x87d209) = uVar1;
    FUN_1805a7cb0(unaff_RDI + 0x87bd80,uVar4);
    uVar4 = FUN_1805a9bc0(unaff_RDI + 0x87bd80);
    param_1 = FUN_180592060(uVar4,*(int32_t *)(lVar3 + 0x18));
    unaff_EBX = unaff_EBX + 1 & 0x800003ff;
    if ((int)unaff_EBX < 0) {
      unaff_EBX = (unaff_EBX - 1 | 0xfffffc00) + 1;
    }
  }
  in_stack_00000040 = *(int32_t *)(unaff_RBP + 0xc);
  uStack0000000000000044 = *(int32_t *)(unaff_RBP + 0x10);
  in_stack_00000048 = *(int32_t *)(unaff_RBP + 0x14);
  uStack000000000000004c = *(int32_t *)(unaff_RBP + 0x18);
  FUN_18051f1e0(in_stack_00000040,&stack0x00000040);
  uVar2 = unaff_EBX + 0x3ff & 0x800003ff;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffc00) + 1;
  }
  if (*(int *)((int64_t)(int)uVar2 * 0x200 + 0x28 + unaff_R15) == 0) {
    *(uint64_t *)(*(int64_t *)(unaff_R13 + 0x20) + 0x1c) = *(uint64_t *)(unaff_RBP + 0x1c);
  }
  if ((*(uint *)((int64_t)(int)uVar2 * 0x200 + 0x24 + unaff_R15) & 0x800) == 0) {
    func_0x000180598e50(*(uint64_t *)(unaff_R13 + 0x20),*(int32_t *)(unaff_RBP + 0x34));
  }
  if (-1 < *(int *)(unaff_R13 + 0x560)) {
    func_0x00018051a670((int64_t)*(int *)(unaff_R13 + 0x560) * 0xa60 + 0x30a0 + unaff_RDI);
  }
  return;
}






// 函数: void FUN_1804ed470(void)
void FUN_1804ed470(void)

{
  int64_t lVar1;
  int unaff_EBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t unaff_R13;
  int64_t unaff_R15;
  
  lVar1 = (int64_t)(int)((unaff_EBX - 1U | 0xfffffc00) + 1) * 0x200;
  if (*(int *)(lVar1 + 0x28 + unaff_R15) == 0) {
    *(uint64_t *)(*(int64_t *)(unaff_R13 + 0x20) + 0x1c) = *(uint64_t *)(unaff_RBP + 0x1c);
  }
  if ((*(uint *)(lVar1 + 0x24 + unaff_R15) & 0x800) == 0) {
    func_0x000180598e50(*(uint64_t *)(unaff_R13 + 0x20),*(int32_t *)(unaff_RBP + 0x34));
  }
  if (-1 < *(int *)(unaff_R13 + 0x560)) {
    func_0x00018051a670((int64_t)*(int *)(unaff_R13 + 0x560) * 0xa60 + 0x30a0 + unaff_RDI);
  }
  return;
}






// 函数: void FUN_1804ed4a8(void)
void FUN_1804ed4a8(void)

{
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t unaff_R13;
  
  func_0x000180598e50(*(uint64_t *)(unaff_R13 + 0x20),*(int32_t *)(unaff_RBP + 0x34));
  if (-1 < *(int *)(unaff_R13 + 0x560)) {
    func_0x00018051a670((int64_t)*(int *)(unaff_R13 + 0x560) * 0xa60 + 0x30a0 + unaff_RDI);
  }
  return;
}






// 函数: void FUN_1804ed4c9(void)
void FUN_1804ed4c9(void)

{
  int64_t in_RAX;
  int64_t unaff_RDI;
  
  func_0x00018051a670(in_RAX * 0xa60 + 0x30a0 + unaff_RDI);
  return;
}






// 函数: void FUN_1804ed4e7(void)
void FUN_1804ed4e7(void)

{
  return;
}






// 函数: void FUN_1804ed4f7(void)
void FUN_1804ed4f7(void)

{
  return;
}






// 函数: void FUN_1804ed4ff(void)
void FUN_1804ed4ff(void)

{
  return;
}






// 函数: void FUN_1804ed510(void)
void FUN_1804ed510(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






// 函数: void FUN_1804ed6a0(void)
void FUN_1804ed6a0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






