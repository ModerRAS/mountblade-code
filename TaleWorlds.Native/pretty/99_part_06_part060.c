#include "TaleWorlds.Native.Split.h"

// 99_part_06_part060.c - 4 个函数

// 函数: void FUN_1803e2a40(longlong param_1,longlong param_2)
void FUN_1803e2a40(longlong param_1,longlong param_2)

{
  void *puVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  int32_t *puVar5;
  void *puVar6;
  uint64_t *puVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  iVar10 = *(int *)(param_2 + 0x10);
  FUN_1806277c0(param_2,iVar10 + 0x50);
  puVar7 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar7 = 0x65672074616f6c66;
  puVar7[1] = 0x6961727265745f74;
  puVar7[2] = 0x69726574616d5f6e;
  puVar7[3] = 0x65745f70616d6c61;
  puVar7[4] = 0x6c66286572757478;
  puVar7[5] = 0x786574203274616f;
  *(int32_t *)(puVar7 + 6) = 0x726f6f63;
  *(int32_t *)((longlong)puVar7 + 0x34) = 0x63202c64;
  *(int32_t *)(puVar7 + 7) = 0x74736e6f;
  *(int32_t *)((longlong)puVar7 + 0x3c) = 0x6e697520;
  *(int32_t *)(puVar7 + 8) = 0x616c2074;
  *(int32_t *)((longlong)puVar7 + 0x44) = 0x5f726579;
  *(int32_t *)(puVar7 + 9) = 0x65646e69;
  *(int32_t *)((longlong)puVar7 + 0x4c) = 0xa5c2978;
  *(int8_t *)(puVar7 + 10) = 0;
  *(int *)(param_2 + 0x10) = iVar10 + 0x50;
  FUN_1806277c0(param_2,iVar10 + 0x53);
  *(int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0xa5c7b;
  *(int *)(param_2 + 0x10) = iVar10 + 0x53;
  FUN_1806277c0(param_2,iVar10 + 0x6d);
  puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar5 = 0x746e6909;
  puVar5[1] = 0x78657420;
  puVar5[2] = 0x65727574;
  puVar5[3] = 0x646e695f;
  *(uint64_t *)(puVar5 + 4) = 0x3b312d203d207865;
  *(int16_t *)(puVar5 + 6) = 0xa5c;
  *(int8_t *)((longlong)puVar5 + 0x1a) = 0;
  *(int *)(param_2 + 0x10) = iVar10 + 0x6d;
  FUN_1806277c0(param_2,iVar10 + 0x84);
  puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar5 = 0x746e6909;
  puVar5[1] = 0x6f6c7320;
  puVar5[2] = 0x6e695f74;
  puVar5[3] = 0x20786564;
  *(uint64_t *)(puVar5 + 4) = 0xa5c3b312d203d;
  *(int *)(param_2 + 0x10) = iVar10 + 0x84;
  FUN_1806277c0(param_2,iVar10 + 0x9a);
  puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar5 = 0x28666909;
  puVar5[1] = 0x6579616c;
  puVar5[2] = 0x6e695f72;
  puVar5[3] = 0x20786564;
  puVar5[4] = 0x29322025;
  *(int16_t *)(puVar5 + 5) = 0xa5c;
  *(int8_t *)((longlong)puVar5 + 0x16) = 0;
  *(int *)(param_2 + 0x10) = iVar10 + 0x9a;
  FUN_1806277c0(param_2,iVar10 + 0x9e);
  puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar5 = 0xa5c7b09;
  *(int8_t *)(puVar5 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar10 + 0x9e;
  FUN_1806277c0(param_2,iVar10 + 0xdd);
  puVar7 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar7 = 0x7275747865740909;
  puVar7[1] = 0x207865646e695f65;
  puVar7[2] = 0x5f726579616c203d;
  puVar7[3] = 0x616d746867696577;
  *(int32_t *)(puVar7 + 4) = 0x6e695f70;
  *(int32_t *)((longlong)puVar7 + 0x24) = 0x65636964;
  *(int32_t *)(puVar7 + 5) = 0x616c5b73;
  *(int32_t *)((longlong)puVar7 + 0x2c) = 0x5f726579;
  *(int32_t *)(puVar7 + 6) = 0x65646e69;
  *(int32_t *)((longlong)puVar7 + 0x34) = 0x202f2078;
  *(int32_t *)(puVar7 + 7) = 0x7a2e5d32;
  *(int32_t *)((longlong)puVar7 + 0x3c) = 0xa5c3b;
  *(int *)(param_2 + 0x10) = iVar10 + 0xdd;
  FUN_1806277c0(param_2,iVar10 + 0x119);
  puVar7 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar7 = 0x695f746f6c730909;
  puVar7[1] = 0x6c203d207865646e;
  puVar7[2] = 0x6965775f72657961;
  puVar7[3] = 0x695f70616d746867;
  *(int32_t *)(puVar7 + 4) = 0x6369646e;
  *(int32_t *)((longlong)puVar7 + 0x24) = 0x6c5b7365;
  *(int32_t *)(puVar7 + 5) = 0x72657961;
  *(int32_t *)((longlong)puVar7 + 0x2c) = 0x646e695f;
  puVar7[6] = 0x2e5d32202f207865;
  *(int32_t *)(puVar7 + 7) = 0xa5c3b77;
  *(int8_t *)((longlong)puVar7 + 0x3c) = 0;
  *(int *)(param_2 + 0x10) = iVar10 + 0x119;
  FUN_1806277c0(param_2,iVar10 + 0x11d);
  puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar5 = 0xa5c7d09;
  *(int8_t *)(puVar5 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar10 + 0x11d;
  FUN_1806277c0(param_2,iVar10 + 0x124);
  *(uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) =
       0xa5c65736c6509;
  *(int *)(param_2 + 0x10) = iVar10 + 0x124;
  FUN_1806277c0(param_2,iVar10 + 0x128);
  puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar5 = 0xa5c7b09;
  *(int8_t *)(puVar5 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar10 + 0x128;
  FUN_1806277c0(param_2,iVar10 + 0x167);
  puVar7 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar7 = 0x7275747865740909;
  puVar7[1] = 0x207865646e695f65;
  puVar7[2] = 0x5f726579616c203d;
  puVar7[3] = 0x616d746867696577;
  *(int32_t *)(puVar7 + 4) = 0x6e695f70;
  *(int32_t *)((longlong)puVar7 + 0x24) = 0x65636964;
  *(int32_t *)(puVar7 + 5) = 0x616c5b73;
  *(int32_t *)((longlong)puVar7 + 0x2c) = 0x5f726579;
  *(int32_t *)(puVar7 + 6) = 0x65646e69;
  *(int32_t *)((longlong)puVar7 + 0x34) = 0x202f2078;
  *(int32_t *)(puVar7 + 7) = 0x782e5d32;
  *(int32_t *)((longlong)puVar7 + 0x3c) = 0xa5c3b;
  *(int *)(param_2 + 0x10) = iVar10 + 0x167;
  FUN_1806277c0(param_2,iVar10 + 0x1a3);
  puVar7 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar7 = 0x695f746f6c730909;
  puVar7[1] = 0x6c203d207865646e;
  puVar7[2] = 0x6965775f72657961;
  puVar7[3] = 0x695f70616d746867;
  *(int32_t *)(puVar7 + 4) = 0x6369646e;
  *(int32_t *)((longlong)puVar7 + 0x24) = 0x6c5b7365;
  *(int32_t *)(puVar7 + 5) = 0x72657961;
  *(int32_t *)((longlong)puVar7 + 0x2c) = 0x646e695f;
  puVar7[6] = 0x2e5d32202f207865;
  *(int32_t *)(puVar7 + 7) = 0xa5c3b79;
  *(int8_t *)((longlong)puVar7 + 0x3c) = 0;
  *(int *)(param_2 + 0x10) = iVar10 + 0x1a3;
  FUN_1806277c0(param_2,iVar10 + 0x1a7);
  puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar5 = 0xa5c7d09;
  *(int8_t *)(puVar5 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar10 + 0x1a7;
  FUN_1806277c0(param_2,iVar10 + 0x1ba);
  uVar8 = 0;
  puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar5 = 0x6f6c6609;
  puVar5[1] = 0x76207461;
  puVar5[2] = 0x65756c61;
  puVar5[3] = 0x30203d20;
  puVar5[4] = 0xa5c3b;
  *(int *)(param_2 + 0x10) = iVar10 + 0x1ba;
  bVar2 = false;
  lVar4 = *(longlong *)(param_1 + 0x110);
  if (*(longlong *)(param_1 + 0x118) - lVar4 >> 5 != 0) {
    uVar11 = uVar8;
    uVar13 = uVar8;
    do {
      puVar1 = *(void **)(uVar11 + 8 + lVar4);
      puVar6 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar6 = puVar1;
      }
      lVar3 = strstr(puVar6,&system_data_3168);
      lVar4 = *(longlong *)(param_1 + 0x110);
      uVar11 = uVar11 + 0x20;
      if (lVar3 != 0) {
        bVar2 = true;
      }
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
    } while ((ulonglong)(longlong)(int)uVar12 <
             (ulonglong)(*(longlong *)(param_1 + 0x118) - lVar4 >> 5));
    if (bVar2) {
      iVar10 = *(int *)(param_2 + 0x10);
      iVar9 = iVar10 + 0x24;
      FUN_1806277c0(param_2,iVar9);
      puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
      *puVar5 = 0x6f665b09;
      puVar5[1] = 0x63656372;
      puVar5[2] = 0x5d657361;
      puVar5[3] = 0x69777320;
      puVar5[4] = 0x28686374;
      puVar5[5] = 0x74786574;
      puVar5[6] = 0x5f657275;
      puVar5[7] = 0x65646e69;
      puVar5[8] = 0xa5c2978;
      *(int8_t *)(puVar5 + 9) = 0;
      *(int *)(param_2 + 0x10) = iVar9;
      iVar10 = iVar10 + 0x28;
      FUN_1806277c0(param_2,iVar10);
      puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
      *puVar5 = 0xa5c7b09;
      *(int8_t *)(puVar5 + 1) = 0;
      *(int *)(param_2 + 0x10) = iVar10;
      lVar4 = *(longlong *)(param_1 + 0x110);
      uVar11 = uVar8;
      if (*(longlong *)(param_1 + 0x118) - lVar4 >> 5 != 0) {
        do {
          puVar1 = *(void **)(uVar11 + 8 + lVar4);
          puVar6 = &system_buffer_ptr;
          if (puVar1 != (void *)0x0) {
            puVar6 = puVar1;
          }
          lVar4 = strstr(puVar6,&system_data_3168);
          if (lVar4 == 0) {
            iVar10 = *(int *)(param_2 + 0x10);
          }
          else {
            FUN_180628040(param_2,&unknown_var_7976_ptr,uVar8);
            puVar1 = *(void **)(uVar11 + 8 + *(longlong *)(param_1 + 0x110));
            puVar6 = &system_buffer_ptr;
            if (puVar1 != (void *)0x0) {
              puVar6 = puVar1;
            }
            FUN_180628040(param_2,&unknown_var_8000_ptr,puVar6);
            iVar10 = *(int *)(param_2 + 0x10) + 0xb;
            FUN_1806277c0(param_2,iVar10);
            puVar7 = (uint64_t *)
                     ((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
            *puVar7 = 0x6b61657262090909;
            *(int32_t *)(puVar7 + 1) = 0xa5c3b;
            *(int *)(param_2 + 0x10) = iVar10;
          }
          lVar4 = *(longlong *)(param_1 + 0x110);
          uVar12 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar12;
          uVar11 = uVar11 + 0x20;
        } while ((ulonglong)(longlong)(int)uVar12 <
                 (ulonglong)(*(longlong *)(param_1 + 0x118) - lVar4 >> 5));
      }
      FUN_1806277c0(param_2,iVar10 + 4);
      puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
      *puVar5 = 0xa5c7d09;
      *(int8_t *)(puVar5 + 1) = 0;
      *(int *)(param_2 + 0x10) = iVar10 + 4;
    }
  }
  iVar10 = *(int *)(param_2 + 0x10);
  iVar9 = iVar10 + 0x10;
  FUN_1806277c0(param_2,iVar9);
  puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar5 = 0x74657209;
  puVar5[1] = 0x206e7275;
  puVar5[2] = 0x756c6176;
  puVar5[3] = 0xa5c3b65;
  *(int8_t *)(puVar5 + 4) = 0;
  *(int *)(param_2 + 0x10) = iVar9;
  iVar10 = iVar10 + 0x13;
  FUN_1806277c0(param_2,iVar10);
  *(int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0xa5c7d;
  *(int *)(param_2 + 0x10) = iVar10;
  return;
}






// 函数: void FUN_1803e2dca(uint64_t param_1,longlong param_2)
void FUN_1803e2dca(uint64_t param_1,longlong param_2)

{
  void *puVar1;
  longlong lVar2;
  int32_t *puVar3;
  void *puVar4;
  uint64_t *puVar5;
  longlong unaff_RBX;
  uint uVar6;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  uint unaff_EDI;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int unaff_R15D;
  int32_t extraout_XMM0_Da;
  int32_t uVar10;
  int32_t extraout_XMM0_Da_00;
  
  uVar9 = unaff_RBP & 0xffffffff;
  do {
    puVar1 = *(void **)(uVar9 + 8 + param_2);
    puVar4 = &system_buffer_ptr;
    if (puVar1 != (void *)0x0) {
      puVar4 = puVar1;
    }
    lVar2 = strstr(puVar4,&system_data_3168);
    param_2 = *(longlong *)(unaff_RSI + 0x110);
    uVar9 = uVar9 + 0x20;
    unaff_EDI = unaff_EDI & 0xff;
    if (lVar2 != 0) {
      unaff_EDI = (int)unaff_RBP + 1;
    }
    unaff_R15D = unaff_R15D + 1;
  } while ((ulonglong)(longlong)unaff_R15D <
           (ulonglong)(*(longlong *)(unaff_RSI + 0x118) - param_2 >> 5));
  uVar10 = extraout_XMM0_Da;
  if ((char)unaff_EDI != '\0') {
    iVar8 = *(int *)(unaff_RBX + 0x10);
    iVar7 = iVar8 + 0x24;
    FUN_1806277c0(extraout_XMM0_Da,iVar7);
    puVar3 = (int32_t *)((ulonglong)*(uint *)(unaff_RBX + 0x10) + *(longlong *)(unaff_RBX + 8));
    *puVar3 = 0x6f665b09;
    puVar3[1] = 0x63656372;
    puVar3[2] = 0x5d657361;
    puVar3[3] = 0x69777320;
    puVar3[4] = 0x28686374;
    puVar3[5] = 0x74786574;
    puVar3[6] = 0x5f657275;
    puVar3[7] = 0x65646e69;
    puVar3[8] = 0xa5c2978;
    *(int8_t *)(puVar3 + 9) = 0;
    *(int *)(unaff_RBX + 0x10) = iVar7;
    iVar8 = iVar8 + 0x28;
    uVar10 = FUN_1806277c0(0x6f665b09,iVar8);
    puVar3 = (int32_t *)((ulonglong)*(uint *)(unaff_RBX + 0x10) + *(longlong *)(unaff_RBX + 8));
    *puVar3 = 0xa5c7b09;
    *(int8_t *)(puVar3 + 1) = 0;
    *(int *)(unaff_RBX + 0x10) = iVar8;
    lVar2 = *(longlong *)(unaff_RSI + 0x110);
    uVar9 = unaff_RBP;
    if (*(longlong *)(unaff_RSI + 0x118) - lVar2 >> 5 != 0) {
      do {
        puVar1 = *(void **)(uVar9 + 8 + lVar2);
        puVar4 = &system_buffer_ptr;
        if (puVar1 != (void *)0x0) {
          puVar4 = puVar1;
        }
        lVar2 = strstr(puVar4,&system_data_3168);
        if (lVar2 == 0) {
          iVar8 = *(int *)(unaff_RBX + 0x10);
          uVar10 = extraout_XMM0_Da_00;
        }
        else {
          uVar10 = FUN_180628040(extraout_XMM0_Da_00,&unknown_var_7976_ptr,unaff_RBP & 0xffffffff);
          puVar1 = *(void **)(uVar9 + 8 + *(longlong *)(unaff_RSI + 0x110));
          puVar4 = &system_buffer_ptr;
          if (puVar1 != (void *)0x0) {
            puVar4 = puVar1;
          }
          uVar10 = FUN_180628040(uVar10,&unknown_var_8000_ptr,puVar4);
          iVar8 = *(int *)(unaff_RBX + 0x10) + 0xb;
          FUN_1806277c0(uVar10,iVar8);
          uVar10 = 0x62090909;
          puVar5 = (uint64_t *)
                   ((ulonglong)*(uint *)(unaff_RBX + 0x10) + *(longlong *)(unaff_RBX + 8));
          *puVar5 = 0x6b61657262090909;
          *(int32_t *)(puVar5 + 1) = 0xa5c3b;
          *(int *)(unaff_RBX + 0x10) = iVar8;
        }
        lVar2 = *(longlong *)(unaff_RSI + 0x110);
        uVar6 = (int)unaff_RBP + 1;
        unaff_RBP = (ulonglong)uVar6;
        uVar9 = uVar9 + 0x20;
      } while ((ulonglong)(longlong)(int)uVar6 <
               (ulonglong)(*(longlong *)(unaff_RSI + 0x118) - lVar2 >> 5));
    }
    uVar10 = FUN_1806277c0(uVar10,iVar8 + 4);
    puVar3 = (int32_t *)((ulonglong)*(uint *)(unaff_RBX + 0x10) + *(longlong *)(unaff_RBX + 8));
    *puVar3 = 0xa5c7d09;
    *(int8_t *)(puVar3 + 1) = 0;
    *(int *)(unaff_RBX + 0x10) = iVar8 + 4;
  }
  iVar8 = *(int *)(unaff_RBX + 0x10);
  iVar7 = iVar8 + 0x10;
  FUN_1806277c0(uVar10,iVar7);
  puVar3 = (int32_t *)((ulonglong)*(uint *)(unaff_RBX + 0x10) + *(longlong *)(unaff_RBX + 8));
  *puVar3 = 0x74657209;
  puVar3[1] = 0x206e7275;
  puVar3[2] = 0x756c6176;
  puVar3[3] = 0xa5c3b65;
  *(int8_t *)(puVar3 + 4) = 0;
  *(int *)(unaff_RBX + 0x10) = iVar7;
  iVar8 = iVar8 + 0x13;
  FUN_1806277c0(0x74657209,iVar8);
  *(int32_t *)((ulonglong)*(uint *)(unaff_RBX + 0x10) + *(longlong *)(unaff_RBX + 8)) = 0xa5c7d;
  *(int *)(unaff_RBX + 0x10) = iVar8;
  return;
}






// 函数: void FUN_1803e2e3d(int32_t param_1)
void FUN_1803e2e3d(int32_t param_1)

{
  void *puVar1;
  longlong lVar2;
  int32_t *puVar3;
  void *puVar4;
  uint64_t *puVar5;
  longlong unaff_RBX;
  uint uVar6;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int32_t uVar10;
  int32_t extraout_XMM0_Da;
  
  iVar8 = *(int *)(unaff_RBX + 0x10);
  iVar7 = iVar8 + 0x24;
  FUN_1806277c0(param_1,iVar7);
  puVar3 = (int32_t *)((ulonglong)*(uint *)(unaff_RBX + 0x10) + *(longlong *)(unaff_RBX + 8));
  *puVar3 = 0x6f665b09;
  puVar3[1] = 0x63656372;
  puVar3[2] = 0x5d657361;
  puVar3[3] = 0x69777320;
  puVar3[4] = 0x28686374;
  puVar3[5] = 0x74786574;
  puVar3[6] = 0x5f657275;
  puVar3[7] = 0x65646e69;
  puVar3[8] = 0xa5c2978;
  *(int8_t *)(puVar3 + 9) = 0;
  *(int *)(unaff_RBX + 0x10) = iVar7;
  iVar8 = iVar8 + 0x28;
  uVar10 = FUN_1806277c0(0x6f665b09,iVar8);
  puVar3 = (int32_t *)((ulonglong)*(uint *)(unaff_RBX + 0x10) + *(longlong *)(unaff_RBX + 8));
  *puVar3 = 0xa5c7b09;
  *(int8_t *)(puVar3 + 1) = 0;
  *(int *)(unaff_RBX + 0x10) = iVar8;
  lVar2 = *(longlong *)(unaff_RSI + 0x110);
  uVar9 = unaff_RBP;
  if (*(longlong *)(unaff_RSI + 0x118) - lVar2 >> 5 != 0) {
    do {
      puVar1 = *(void **)(uVar9 + 8 + lVar2);
      puVar4 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar4 = puVar1;
      }
      lVar2 = strstr(puVar4,&system_data_3168);
      if (lVar2 == 0) {
        iVar8 = *(int *)(unaff_RBX + 0x10);
        uVar10 = extraout_XMM0_Da;
      }
      else {
        uVar10 = FUN_180628040(extraout_XMM0_Da,&unknown_var_7976_ptr,unaff_RBP & 0xffffffff);
        puVar1 = *(void **)(uVar9 + 8 + *(longlong *)(unaff_RSI + 0x110));
        puVar4 = &system_buffer_ptr;
        if (puVar1 != (void *)0x0) {
          puVar4 = puVar1;
        }
        uVar10 = FUN_180628040(uVar10,&unknown_var_8000_ptr,puVar4);
        iVar8 = *(int *)(unaff_RBX + 0x10) + 0xb;
        FUN_1806277c0(uVar10,iVar8);
        uVar10 = 0x62090909;
        puVar5 = (uint64_t *)
                 ((ulonglong)*(uint *)(unaff_RBX + 0x10) + *(longlong *)(unaff_RBX + 8));
        *puVar5 = 0x6b61657262090909;
        *(int32_t *)(puVar5 + 1) = 0xa5c3b;
        *(int *)(unaff_RBX + 0x10) = iVar8;
      }
      lVar2 = *(longlong *)(unaff_RSI + 0x110);
      uVar6 = (int)unaff_RBP + 1;
      unaff_RBP = (ulonglong)uVar6;
      uVar9 = uVar9 + 0x20;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(unaff_RSI + 0x118) - lVar2 >> 5));
  }
  uVar10 = FUN_1806277c0(uVar10,iVar8 + 4);
  puVar3 = (int32_t *)((ulonglong)*(uint *)(unaff_RBX + 0x10) + *(longlong *)(unaff_RBX + 8));
  *puVar3 = 0xa5c7d09;
  *(int8_t *)(puVar3 + 1) = 0;
  *(int *)(unaff_RBX + 0x10) = iVar8 + 4;
  iVar8 = *(int *)(unaff_RBX + 0x10);
  iVar7 = iVar8 + 0x10;
  FUN_1806277c0(uVar10,iVar7);
  puVar3 = (int32_t *)((ulonglong)*(uint *)(unaff_RBX + 0x10) + *(longlong *)(unaff_RBX + 8));
  *puVar3 = 0x74657209;
  puVar3[1] = 0x206e7275;
  puVar3[2] = 0x756c6176;
  puVar3[3] = 0xa5c3b65;
  *(int8_t *)(puVar3 + 4) = 0;
  *(int *)(unaff_RBX + 0x10) = iVar7;
  iVar8 = iVar8 + 0x13;
  FUN_1806277c0(0x74657209,iVar8);
  *(int32_t *)((ulonglong)*(uint *)(unaff_RBX + 0x10) + *(longlong *)(unaff_RBX + 8)) = 0xa5c7d;
  *(int *)(unaff_RBX + 0x10) = iVar8;
  return;
}






// 函数: void FUN_1803e2fb9(int32_t param_1)
void FUN_1803e2fb9(int32_t param_1)

{
  int32_t *puVar1;
  longlong unaff_RBX;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(unaff_RBX + 0x10);
  iVar2 = iVar3 + 0x10;
  FUN_1806277c0(param_1,iVar2);
  puVar1 = (int32_t *)((ulonglong)*(uint *)(unaff_RBX + 0x10) + *(longlong *)(unaff_RBX + 8));
  *puVar1 = 0x74657209;
  puVar1[1] = 0x206e7275;
  puVar1[2] = 0x756c6176;
  puVar1[3] = 0xa5c3b65;
  *(int8_t *)(puVar1 + 4) = 0;
  *(int *)(unaff_RBX + 0x10) = iVar2;
  iVar3 = iVar3 + 0x13;
  FUN_1806277c0(0x74657209,iVar3);
  *(int32_t *)((ulonglong)*(uint *)(unaff_RBX + 0x10) + *(longlong *)(unaff_RBX + 8)) = 0xa5c7d;
  *(int *)(unaff_RBX + 0x10) = iVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




