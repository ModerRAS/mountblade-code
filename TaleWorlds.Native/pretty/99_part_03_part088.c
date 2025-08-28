#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part088.c - 4 个函数

// 函数: void FUN_18024bdd8(void)
void FUN_18024bdd8(void)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int32_t extraout_XMM0_Da;
  uint64_t uStackX_20;
  
  *(uint64_t *)(unaff_RBX + 0x12c00) = uStackX_20;
  uVar11 = func_0x000180239f10(unaff_RBP + 0x78);
  uVar12 = func_0x000180239f10(unaff_RBP + -8);
  uVar11 = FUN_18024dde0(uVar11,&stack0x00000078,uVar12);
  puVar13 = (uint64_t *)func_0x000180645570(&stack0x00000038,uVar11);
  uVar11 = puVar13[1];
  *(uint64_t *)(unaff_RBX + 0x12a80) = *puVar13;
  *(uint64_t *)(unaff_RBX + 0x12a88) = uVar11;
  uVar11 = puVar13[3];
  *(uint64_t *)(unaff_RBX + 0x12a90) = puVar13[2];
  *(uint64_t *)(unaff_RBX + 0x12a98) = uVar11;
  uVar2 = *(int32_t *)((int64_t)puVar13 + 0x24);
  uVar3 = *(int32_t *)(puVar13 + 5);
  uVar4 = *(int32_t *)((int64_t)puVar13 + 0x2c);
  *(int32_t *)(unaff_RBX + 0x12aa0) = *(int32_t *)(puVar13 + 4);
  *(int32_t *)(unaff_RBX + 0x12aa4) = uVar2;
  *(int32_t *)(unaff_RBX + 0x12aa8) = uVar3;
  *(int32_t *)(unaff_RBX + 0x12aac) = uVar4;
  uVar2 = *(int32_t *)((int64_t)puVar13 + 0x34);
  uVar3 = *(int32_t *)(puVar13 + 7);
  uVar4 = *(int32_t *)((int64_t)puVar13 + 0x3c);
  lVar1 = *(int64_t *)(unaff_RBX + 0x3580);
  *(int32_t *)(unaff_RBX + 0x12ab0) = *(int32_t *)(puVar13 + 6);
  *(int32_t *)(unaff_RBX + 0x12ab4) = uVar2;
  *(int32_t *)(unaff_RBX + 0x12ab8) = uVar3;
  *(int32_t *)(unaff_RBX + 0x12abc) = uVar4;
  if (((lVar1 != 0) && ((*(byte *)(unaff_RBX + 0x1bd9) & 2) == 0)) &&
     ((*(byte *)(unaff_RBX + 0x1bd8) & 0x20) != 0)) {
    uVar2 = *(int32_t *)(unaff_RBX + 0x12ac4);
    uVar3 = *(int32_t *)(unaff_RBX + 0x12ac8);
    uVar4 = *(int32_t *)(unaff_RBX + 0x12acc);
    uVar5 = *(int32_t *)(unaff_RBX + 0x12ad0);
    uVar6 = *(int32_t *)(unaff_RBX + 0x12ad4);
    uVar7 = *(int32_t *)(unaff_RBX + 0x12ad8);
    uVar8 = *(int32_t *)(unaff_RBX + 0x12adc);
    uVar11 = *(uint64_t *)(unaff_RBX + 0x12ae0);
    uVar12 = *(uint64_t *)(unaff_RBX + 0x12ae8);
    uVar9 = *(uint64_t *)(unaff_RBX + 0x12af0);
    uVar10 = *(uint64_t *)(unaff_RBX + 0x12af8);
    *(int32_t *)(lVar1 + 0x680) = *(int32_t *)(unaff_RBX + 0x12ac0);
    *(int32_t *)(lVar1 + 0x684) = uVar2;
    *(int32_t *)(lVar1 + 0x688) = uVar3;
    *(int32_t *)(lVar1 + 0x68c) = uVar4;
    *(int32_t *)(lVar1 + 0x690) = uVar5;
    *(int32_t *)(lVar1 + 0x694) = uVar6;
    *(int32_t *)(lVar1 + 0x698) = uVar7;
    *(int32_t *)(lVar1 + 0x69c) = uVar8;
    *(uint64_t *)(lVar1 + 0x6a0) = uVar11;
    *(uint64_t *)(lVar1 + 0x6a8) = uVar12;
    *(uint64_t *)(lVar1 + 0x6b0) = uVar9;
    *(uint64_t *)(lVar1 + 0x6b8) = uVar10;
  }
  uVar11 = FUN_180286010(unaff_RBX + 0x30,&stack0x00000038,0);
  puVar13 = (uint64_t *)FUN_1800946d0(extraout_XMM0_Da,unaff_RBP + 0x100,uVar11);
  uVar11 = puVar13[1];
  *(uint64_t *)(unaff_RBX + 0x12b00) = *puVar13;
  *(uint64_t *)(unaff_RBX + 0x12b08) = uVar11;
  uVar11 = puVar13[3];
  *(uint64_t *)(unaff_RBX + 0x12b10) = puVar13[2];
  *(uint64_t *)(unaff_RBX + 0x12b18) = uVar11;
  uVar2 = *(int32_t *)((int64_t)puVar13 + 0x24);
  uVar3 = *(int32_t *)(puVar13 + 5);
  uVar4 = *(int32_t *)((int64_t)puVar13 + 0x2c);
  *(int32_t *)(unaff_RBX + 0x12b20) = *(int32_t *)(puVar13 + 4);
  *(int32_t *)(unaff_RBX + 0x12b24) = uVar2;
  *(int32_t *)(unaff_RBX + 0x12b28) = uVar3;
  *(int32_t *)(unaff_RBX + 0x12b2c) = uVar4;
  uVar2 = *(int32_t *)((int64_t)puVar13 + 0x34);
  uVar3 = *(int32_t *)(puVar13 + 7);
  uVar4 = *(int32_t *)((int64_t)puVar13 + 0x3c);
  *(int32_t *)(unaff_RBX + 0x12b30) = *(int32_t *)(puVar13 + 6);
  *(int32_t *)(unaff_RBX + 0x12b34) = uVar2;
  *(int32_t *)(unaff_RBX + 0x12b38) = uVar3;
  *(int32_t *)(unaff_RBX + 0x12b3c) = uVar4;
  puVar13 = (uint64_t *)FUN_180286f50(unaff_RBX + 0x30,&stack0x00000038);
  uVar11 = puVar13[1];
  *(uint64_t *)(unaff_RBX + 0x12b80) = *puVar13;
  *(uint64_t *)(unaff_RBX + 0x12b88) = uVar11;
  uVar11 = puVar13[3];
  *(uint64_t *)(unaff_RBX + 0x12b90) = puVar13[2];
  *(uint64_t *)(unaff_RBX + 0x12b98) = uVar11;
  uVar2 = *(int32_t *)((int64_t)puVar13 + 0x24);
  uVar3 = *(int32_t *)(puVar13 + 5);
  uVar4 = *(int32_t *)((int64_t)puVar13 + 0x2c);
  *(int32_t *)(unaff_RBX + 0x12ba0) = *(int32_t *)(puVar13 + 4);
  *(int32_t *)(unaff_RBX + 0x12ba4) = uVar2;
  *(int32_t *)(unaff_RBX + 0x12ba8) = uVar3;
  *(int32_t *)(unaff_RBX + 0x12bac) = uVar4;
  uVar2 = *(int32_t *)((int64_t)puVar13 + 0x34);
  uVar3 = *(int32_t *)(puVar13 + 7);
  uVar4 = *(int32_t *)((int64_t)puVar13 + 0x3c);
  *(int32_t *)(unaff_RBX + 0x12bb0) = *(int32_t *)(puVar13 + 6);
  *(int32_t *)(unaff_RBX + 0x12bb4) = uVar2;
  *(int32_t *)(unaff_RBX + 0x12bb8) = uVar3;
  *(int32_t *)(unaff_RBX + 0x12bbc) = uVar4;
  uVar11 = func_0x000180239f10(unaff_RBP + 0x78);
  uVar12 = func_0x000180239f10(unaff_RBP + -8);
  uVar11 = FUN_18024dde0(uVar11,&stack0x00000078,uVar12);
  puVar13 = (uint64_t *)func_0x000180645570(unaff_RBP + 0x180,uVar11);
  uVar11 = puVar13[1];
  *(uint64_t *)(unaff_RBX + 0x12bc0) = *puVar13;
  *(uint64_t *)(unaff_RBX + 0x12bc8) = uVar11;
  uVar11 = puVar13[3];
  *(uint64_t *)(unaff_RBX + 0x12bd0) = puVar13[2];
  *(uint64_t *)(unaff_RBX + 0x12bd8) = uVar11;
  uVar2 = *(int32_t *)((int64_t)puVar13 + 0x24);
  uVar3 = *(int32_t *)(puVar13 + 5);
  uVar4 = *(int32_t *)((int64_t)puVar13 + 0x2c);
  *(int32_t *)(unaff_RBX + 0x12be0) = *(int32_t *)(puVar13 + 4);
  *(int32_t *)(unaff_RBX + 0x12be4) = uVar2;
  *(int32_t *)(unaff_RBX + 0x12be8) = uVar3;
  *(int32_t *)(unaff_RBX + 0x12bec) = uVar4;
  uVar2 = *(int32_t *)((int64_t)puVar13 + 0x34);
  uVar3 = *(int32_t *)(puVar13 + 7);
  uVar4 = *(int32_t *)((int64_t)puVar13 + 0x3c);
  *(int32_t *)(unaff_RBX + 0x12bf0) = *(int32_t *)(puVar13 + 6);
  *(int32_t *)(unaff_RBX + 0x12bf4) = uVar2;
  *(int32_t *)(unaff_RBX + 0x12bf8) = uVar3;
  *(int32_t *)(unaff_RBX + 0x12bfc) = uVar4;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x200) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_18024be63(void)
void FUN_18024be63(void)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int64_t in_RAX;
  uint64_t uVar16;
  uint64_t *puVar17;
  uint64_t uVar18;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int32_t extraout_XMM0_Da;
  
  if (((*(byte *)(unaff_RBX + 0x1bd9) & 2) == 0) && ((*(byte *)(unaff_RBX + 0x1bd8) & 0x20) != 0)) {
    uVar1 = *(int32_t *)(unaff_RBX + 0x12ac4);
    uVar2 = *(int32_t *)(unaff_RBX + 0x12ac8);
    uVar3 = *(int32_t *)(unaff_RBX + 0x12acc);
    uVar4 = *(int32_t *)(unaff_RBX + 0x12ad0);
    uVar5 = *(int32_t *)(unaff_RBX + 0x12ad4);
    uVar6 = *(int32_t *)(unaff_RBX + 0x12ad8);
    uVar7 = *(int32_t *)(unaff_RBX + 0x12adc);
    uVar8 = *(int32_t *)(unaff_RBX + 0x12ae0);
    uVar9 = *(int32_t *)(unaff_RBX + 0x12ae4);
    uVar10 = *(int32_t *)(unaff_RBX + 0x12ae8);
    uVar11 = *(int32_t *)(unaff_RBX + 0x12aec);
    uVar12 = *(int32_t *)(unaff_RBX + 0x12af0);
    uVar13 = *(int32_t *)(unaff_RBX + 0x12af4);
    uVar14 = *(int32_t *)(unaff_RBX + 0x12af8);
    uVar15 = *(int32_t *)(unaff_RBX + 0x12afc);
    *(int32_t *)(in_RAX + 0x680) = *(int32_t *)(unaff_RBX + 0x12ac0);
    *(int32_t *)(in_RAX + 0x684) = uVar1;
    *(int32_t *)(in_RAX + 0x688) = uVar2;
    *(int32_t *)(in_RAX + 0x68c) = uVar3;
    *(int32_t *)(in_RAX + 0x690) = uVar4;
    *(int32_t *)(in_RAX + 0x694) = uVar5;
    *(int32_t *)(in_RAX + 0x698) = uVar6;
    *(int32_t *)(in_RAX + 0x69c) = uVar7;
    *(int32_t *)(in_RAX + 0x6a0) = uVar8;
    *(int32_t *)(in_RAX + 0x6a4) = uVar9;
    *(int32_t *)(in_RAX + 0x6a8) = uVar10;
    *(int32_t *)(in_RAX + 0x6ac) = uVar11;
    *(int32_t *)(in_RAX + 0x6b0) = uVar12;
    *(int32_t *)(in_RAX + 0x6b4) = uVar13;
    *(int32_t *)(in_RAX + 0x6b8) = uVar14;
    *(int32_t *)(in_RAX + 0x6bc) = uVar15;
  }
  uVar16 = FUN_180286010(unaff_RBX + 0x30,&stack0x00000038,0);
  puVar17 = (uint64_t *)FUN_1800946d0(extraout_XMM0_Da,unaff_RBP + 0x100,uVar16);
  uVar16 = puVar17[1];
  *(uint64_t *)(unaff_RBX + 0x12b00) = *puVar17;
  *(uint64_t *)(unaff_RBX + 0x12b08) = uVar16;
  uVar16 = puVar17[3];
  *(uint64_t *)(unaff_RBX + 0x12b10) = puVar17[2];
  *(uint64_t *)(unaff_RBX + 0x12b18) = uVar16;
  uVar1 = *(int32_t *)((int64_t)puVar17 + 0x24);
  uVar2 = *(int32_t *)(puVar17 + 5);
  uVar3 = *(int32_t *)((int64_t)puVar17 + 0x2c);
  *(int32_t *)(unaff_RBX + 0x12b20) = *(int32_t *)(puVar17 + 4);
  *(int32_t *)(unaff_RBX + 0x12b24) = uVar1;
  *(int32_t *)(unaff_RBX + 0x12b28) = uVar2;
  *(int32_t *)(unaff_RBX + 0x12b2c) = uVar3;
  uVar1 = *(int32_t *)((int64_t)puVar17 + 0x34);
  uVar2 = *(int32_t *)(puVar17 + 7);
  uVar3 = *(int32_t *)((int64_t)puVar17 + 0x3c);
  *(int32_t *)(unaff_RBX + 0x12b30) = *(int32_t *)(puVar17 + 6);
  *(int32_t *)(unaff_RBX + 0x12b34) = uVar1;
  *(int32_t *)(unaff_RBX + 0x12b38) = uVar2;
  *(int32_t *)(unaff_RBX + 0x12b3c) = uVar3;
  puVar17 = (uint64_t *)FUN_180286f50(unaff_RBX + 0x30,&stack0x00000038);
  uVar16 = puVar17[1];
  *(uint64_t *)(unaff_RBX + 0x12b80) = *puVar17;
  *(uint64_t *)(unaff_RBX + 0x12b88) = uVar16;
  uVar16 = puVar17[3];
  *(uint64_t *)(unaff_RBX + 0x12b90) = puVar17[2];
  *(uint64_t *)(unaff_RBX + 0x12b98) = uVar16;
  uVar1 = *(int32_t *)((int64_t)puVar17 + 0x24);
  uVar2 = *(int32_t *)(puVar17 + 5);
  uVar3 = *(int32_t *)((int64_t)puVar17 + 0x2c);
  *(int32_t *)(unaff_RBX + 0x12ba0) = *(int32_t *)(puVar17 + 4);
  *(int32_t *)(unaff_RBX + 0x12ba4) = uVar1;
  *(int32_t *)(unaff_RBX + 0x12ba8) = uVar2;
  *(int32_t *)(unaff_RBX + 0x12bac) = uVar3;
  uVar1 = *(int32_t *)((int64_t)puVar17 + 0x34);
  uVar2 = *(int32_t *)(puVar17 + 7);
  uVar3 = *(int32_t *)((int64_t)puVar17 + 0x3c);
  *(int32_t *)(unaff_RBX + 0x12bb0) = *(int32_t *)(puVar17 + 6);
  *(int32_t *)(unaff_RBX + 0x12bb4) = uVar1;
  *(int32_t *)(unaff_RBX + 0x12bb8) = uVar2;
  *(int32_t *)(unaff_RBX + 0x12bbc) = uVar3;
  uVar16 = func_0x000180239f10(unaff_RBP + 0x78);
  uVar18 = func_0x000180239f10(unaff_RBP + -8);
  uVar16 = FUN_18024dde0(uVar16,&stack0x00000078,uVar18);
  puVar17 = (uint64_t *)func_0x000180645570(unaff_RBP + 0x180,uVar16);
  uVar16 = puVar17[1];
  *(uint64_t *)(unaff_RBX + 0x12bc0) = *puVar17;
  *(uint64_t *)(unaff_RBX + 0x12bc8) = uVar16;
  uVar16 = puVar17[3];
  *(uint64_t *)(unaff_RBX + 0x12bd0) = puVar17[2];
  *(uint64_t *)(unaff_RBX + 0x12bd8) = uVar16;
  uVar1 = *(int32_t *)((int64_t)puVar17 + 0x24);
  uVar2 = *(int32_t *)(puVar17 + 5);
  uVar3 = *(int32_t *)((int64_t)puVar17 + 0x2c);
  *(int32_t *)(unaff_RBX + 0x12be0) = *(int32_t *)(puVar17 + 4);
  *(int32_t *)(unaff_RBX + 0x12be4) = uVar1;
  *(int32_t *)(unaff_RBX + 0x12be8) = uVar2;
  *(int32_t *)(unaff_RBX + 0x12bec) = uVar3;
  uVar1 = *(int32_t *)((int64_t)puVar17 + 0x34);
  uVar2 = *(int32_t *)(puVar17 + 7);
  uVar3 = *(int32_t *)((int64_t)puVar17 + 0x3c);
  *(int32_t *)(unaff_RBX + 0x12bf0) = *(int32_t *)(puVar17 + 6);
  *(int32_t *)(unaff_RBX + 0x12bf4) = uVar1;
  *(int32_t *)(unaff_RBX + 0x12bf8) = uVar2;
  *(int32_t *)(unaff_RBX + 0x12bfc) = uVar3;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x200) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_18024c080(int64_t param_1,char param_2)
void FUN_18024c080(int64_t param_1,char param_2)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if ((param_2 == '\0') && ((*(uint *)(param_1 + 4) & 0x10000) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  puVar3 = (uint64_t *)(param_1 + 0x9a48);
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x11a48); iVar1 = iVar1 + 1) {
    FUN_18024c080(*puVar3,uVar2);
    puVar3 = puVar3 + 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024c0f0(int64_t param_1,uint64_t param_2)
void FUN_18024c0f0(int64_t param_1,uint64_t param_2)

{
  void **ppuVar1;
  uint uVar2;
  void *puVar3;
  int8_t auStack_128 [32];
  uint uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uStack_100 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_128;
  uStack_108 = 0;
  uStack_f8 = param_2;
  if (*(int *)(param_1 + 0x3530) < 1) {
    puStack_e8 = &unknown_var_3480_ptr;
    puStack_e0 = auStack_d0;
    auStack_d0[0] = 0;
    uStack_d8 = 7;
    strcpy_s(auStack_d0,0x40,&unknown_var_600_ptr);
    ppuVar1 = &puStack_e8;
    uVar2 = 2;
  }
  else {
    puStack_88 = &unknown_var_3480_ptr;
    puStack_80 = auStack_70;
    auStack_70[0] = 0;
    uStack_78 = *(int32_t *)(param_1 + 0x3530);
    puVar3 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x3528) != (void *)0x0) {
      puVar3 = *(void **)(param_1 + 0x3528);
    }
    strcpy_s(auStack_70,0x40,puVar3);
    ppuVar1 = &puStack_88;
    uVar2 = 1;
  }
  uStack_108 = uVar2;
  FUN_1800b8300(param_2,ppuVar1);
  if ((uVar2 & 2) != 0) {
    uVar2 = uVar2 & 0xfffffffd;
    puStack_e8 = &system_state_ptr;
  }
  if ((uVar2 & 1) != 0) {
    uVar2 = uVar2 & 0xfffffffe;
    puStack_88 = &system_state_ptr;
  }
  uStack_108 = uVar2 | 4;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_128);
}



uint FUN_18024c250(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  uVar5 = 0;
  if ((param_2 != 0) && (lVar1 = *(int64_t *)(param_2 + 0x280), lVar1 != 0)) {
    if (((*(char *)(lVar1 + 0x13c) == '\x06') && (*(float *)(param_2 + 0x154) != 1.0)) &&
       (*(float *)(param_2 + 0x154) != 0.0)) {
      uVar5 = 0x100000;
    }
    uVar7 = uVar5 | 0x8000;
    if ((*(uint *)(param_2 + 0x1cc) & 0x400) == 0) {
      uVar7 = uVar5;
    }
    cVar4 = FUN_18022e5d0(lVar1);
    if (cVar4 == '\0') {
      lVar2 = *(int64_t *)(lVar1 + 200);
      if (lVar2 != 0) {
        if ((*(byte *)(lVar2 + 0x2e0) & 1) == 0) {
          if (*(int *)(lVar2 + 0x324) == 0x14) {
            uVar7 = uVar7 | 0x40000;
          }
        }
        else {
          uVar7 = uVar7 | 0x10000;
        }
      }
      lVar1 = *(int64_t *)(lVar1 + 0xd0);
      if (lVar1 != 0) {
        if ((*(byte *)(lVar1 + 0x2e0) & 1) == 0) {
          if (*(int *)(lVar1 + 0x324) == 0x14) {
            uVar7 = uVar7 | 0x80000;
          }
        }
        else {
          uVar7 = uVar7 | 0x20000;
        }
      }
    }
    if (((*(uint *)(param_1 + 4) >> 0x16 & 1) != 0) &&
       ((*(uint *)(param_2 + 0x1cc) >> 0x1e & 1) == 0)) {
      uVar7 = uVar7 | 0x20;
    }
    uVar5 = *(uint *)(*(int64_t *)(param_2 + 0x280) + 0x138);
    uVar6 = uVar7 | 0x400000;
    if ((uVar5 & 0x20) == 0) {
      uVar6 = uVar7;
    }
    if ((*(char *)(*(int64_t *)(param_2 + 0x280) + 0x13c) == '\x01') && ((uVar5 >> 0x13 & 1) != 0))
    {
      uVar6 = uVar6 | 4;
    }
    if ((((*(char *)(param_1 + 0x9a38) != '\0') && ((*(uint *)(param_2 + 0x1cc) & 0x400000) != 0))
        && (*(int64_t *)(param_2 + 0x1b8) != 0)) &&
       (*(char *)(*(int64_t *)(param_2 + 0x1b8) + 0x13d) != '\0')) {
      uVar6 = uVar6 | 0x100;
    }
    if (((*(float *)(param_2 + 0x1a8) == 0.0) && (*(float *)(param_2 + 0x1ac) == 0.0)) &&
       (*(float *)(param_2 + 0x1b0) == 0.0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    uVar5 = uVar6 | 0x20000000;
    if (!bVar3) {
      uVar5 = uVar6;
    }
    return uVar5;
  }
  if ((*(uint *)(param_1 + 4) >> 0x16 & 1) != 0) {
    uVar7 = 0x20;
  }
  return uVar7;
}



uint FUN_18024c28e(uint param_1,int64_t param_2)

{
  uint uVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  uint in_EAX;
  uint uVar5;
  uint uVar6;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  bool in_ZF;
  
  if (((in_ZF) && (*(float *)(param_2 + 0x154) != 1.0)) && (*(float *)(param_2 + 0x154) != 0.0)) {
    in_EAX = 0x100000;
  }
  uVar6 = in_EAX | 0x8000;
  if ((param_1 & 0x400) == 0) {
    uVar6 = in_EAX;
  }
  cVar4 = FUN_18022e5d0();
  if (cVar4 == '\0') {
    lVar2 = *(int64_t *)(unaff_RBP + 200);
    if (lVar2 != 0) {
      if ((*(byte *)(lVar2 + 0x2e0) & 1) == 0) {
        if (*(int *)(lVar2 + 0x324) == 0x14) {
          uVar6 = uVar6 | 0x40000;
        }
      }
      else {
        uVar6 = uVar6 | 0x10000;
      }
    }
    lVar2 = *(int64_t *)(unaff_RBP + 0xd0);
    if (lVar2 != 0) {
      if ((*(byte *)(lVar2 + 0x2e0) & 1) == 0) {
        if (*(int *)(lVar2 + 0x324) == 0x14) {
          uVar6 = uVar6 | 0x80000;
        }
      }
      else {
        uVar6 = uVar6 | 0x20000;
      }
    }
  }
  if (((*(uint *)(unaff_R14 + 4) >> 0x16 & 1) != 0) &&
     ((*(uint *)(unaff_RDI + 0x1cc) >> 0x1e & 1) == 0)) {
    uVar6 = uVar6 | 0x20;
  }
  uVar1 = *(uint *)(*(int64_t *)(unaff_RDI + 0x280) + 0x138);
  uVar5 = uVar6 | 0x400000;
  if ((uVar1 & 0x20) == 0) {
    uVar5 = uVar6;
  }
  if ((*(char *)(*(int64_t *)(unaff_RDI + 0x280) + 0x13c) == '\x01') && ((uVar1 >> 0x13 & 1) != 0))
  {
    uVar5 = uVar5 | 4;
  }
  if ((((*(char *)(unaff_R14 + 0x9a38) != '\0') && ((*(uint *)(unaff_RDI + 0x1cc) & 0x400000) != 0))
      && (*(int64_t *)(unaff_RDI + 0x1b8) != 0)) &&
     (*(char *)(*(int64_t *)(unaff_RDI + 0x1b8) + 0x13d) != '\0')) {
    uVar5 = uVar5 | 0x100;
  }
  if (((*(float *)(unaff_RDI + 0x1a8) == 0.0) && (*(float *)(unaff_RDI + 0x1ac) == 0.0)) &&
     (*(float *)(unaff_RDI + 0x1b0) == 0.0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uVar6 = uVar5 | 0x20000000;
  if (!bVar3) {
    uVar6 = uVar5;
  }
  return uVar6;
}



uint FUN_18024c293(uint param_1,int64_t param_2)

{
  uint uVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  uint in_EAX;
  uint uVar5;
  uint uVar6;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  bool in_ZF;
  
  if (((in_ZF) && (*(float *)(param_2 + 0x154) != 1.0)) && (*(float *)(param_2 + 0x154) != 0.0)) {
    in_EAX = 0x100000;
  }
  uVar6 = in_EAX | 0x8000;
  if ((param_1 & 0x400) == 0) {
    uVar6 = in_EAX;
  }
  cVar4 = FUN_18022e5d0();
  if (cVar4 == '\0') {
    lVar2 = *(int64_t *)(unaff_RBP + 200);
    if (lVar2 != 0) {
      if ((*(byte *)(lVar2 + 0x2e0) & 1) == 0) {
        if (*(int *)(lVar2 + 0x324) == 0x14) {
          uVar6 = uVar6 | 0x40000;
        }
      }
      else {
        uVar6 = uVar6 | 0x10000;
      }
    }
    lVar2 = *(int64_t *)(unaff_RBP + 0xd0);
    if (lVar2 != 0) {
      if ((*(byte *)(lVar2 + 0x2e0) & 1) == 0) {
        if (*(int *)(lVar2 + 0x324) == 0x14) {
          uVar6 = uVar6 | 0x80000;
        }
      }
      else {
        uVar6 = uVar6 | 0x20000;
      }
    }
  }
  if (((*(uint *)(unaff_R14 + 4) >> 0x16 & 1) != 0) &&
     ((*(uint *)(unaff_RDI + 0x1cc) >> 0x1e & 1) == 0)) {
    uVar6 = uVar6 | 0x20;
  }
  uVar1 = *(uint *)(*(int64_t *)(unaff_RDI + 0x280) + 0x138);
  uVar5 = uVar6 | 0x400000;
  if ((uVar1 & 0x20) == 0) {
    uVar5 = uVar6;
  }
  if ((*(char *)(*(int64_t *)(unaff_RDI + 0x280) + 0x13c) == '\x01') && ((uVar1 >> 0x13 & 1) != 0))
  {
    uVar5 = uVar5 | 4;
  }
  if ((((*(char *)(unaff_R14 + 0x9a38) != '\0') && ((*(uint *)(unaff_RDI + 0x1cc) & 0x400000) != 0))
      && (*(int64_t *)(unaff_RDI + 0x1b8) != 0)) &&
     (*(char *)(*(int64_t *)(unaff_RDI + 0x1b8) + 0x13d) != '\0')) {
    uVar5 = uVar5 | 0x100;
  }
  if (((*(float *)(unaff_RDI + 0x1a8) == 0.0) && (*(float *)(unaff_RDI + 0x1ac) == 0.0)) &&
     (*(float *)(unaff_RDI + 0x1b0) == 0.0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uVar6 = uVar5 | 0x20000000;
  if (!bVar3) {
    uVar6 = uVar5;
  }
  return uVar6;
}



uint FUN_18024c33a(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_EBX;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  float unaff_XMM6_Da;
  
  if ((*(uint *)(unaff_RDI + 0x1cc) >> 0x1e & 1) == 0) {
    unaff_EBX = unaff_EBX | 0x20;
  }
  uVar2 = *(uint *)(*(int64_t *)(unaff_RDI + 0x280) + 0x138);
  uVar3 = unaff_EBX | 0x400000;
  if ((uVar2 & 0x20) == 0) {
    uVar3 = unaff_EBX;
  }
  if ((*(char *)(*(int64_t *)(unaff_RDI + 0x280) + 0x13c) == '\x01') && ((uVar2 >> 0x13 & 1) != 0))
  {
    uVar3 = uVar3 | 4;
  }
  if ((((*(char *)(unaff_R14 + 0x9a38) != '\0') && ((*(uint *)(unaff_RDI + 0x1cc) & 0x400000) != 0))
      && (*(int64_t *)(unaff_RDI + 0x1b8) != 0)) &&
     (*(char *)(*(int64_t *)(unaff_RDI + 0x1b8) + 0x13d) != '\0')) {
    uVar3 = uVar3 | 0x100;
  }
  if (((unaff_XMM6_Da == *(float *)(unaff_RDI + 0x1a8)) &&
      (unaff_XMM6_Da == *(float *)(unaff_RDI + 0x1ac))) &&
     (unaff_XMM6_Da == *(float *)(unaff_RDI + 0x1b0))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar2 = uVar3 | 0x20000000;
  if (!bVar1) {
    uVar2 = uVar3;
  }
  return uVar2;
}



uint FUN_18024c37a(uint64_t param_1,uint param_2,uint64_t param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  float unaff_XMM6_Da;
  
  if ((param_4 >> 0x13 & 1) != 0) {
    param_2 = param_2 | 4;
  }
  if ((((*(char *)(unaff_R14 + 0x9a38) != '\0') && ((*(uint *)(unaff_RDI + 0x1cc) & 0x400000) != 0))
      && (*(int64_t *)(unaff_RDI + 0x1b8) != 0)) &&
     (*(char *)(*(int64_t *)(unaff_RDI + 0x1b8) + 0x13d) != '\0')) {
    param_2 = param_2 | 0x100;
  }
  if (((unaff_XMM6_Da == *(float *)(unaff_RDI + 0x1a8)) &&
      (unaff_XMM6_Da == *(float *)(unaff_RDI + 0x1ac))) &&
     (unaff_XMM6_Da == *(float *)(unaff_RDI + 0x1b0))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uVar1 = param_2 | 0x20000000;
  if (!bVar2) {
    uVar1 = param_2;
  }
  return uVar1;
}



int32_t FUN_18024c3f5(int64_t param_1)

{
  int32_t in_EAX;
  
  if ((*(uint *)(param_1 + 4) >> 0x16 & 1) != 0) {
    in_EAX = 0x20;
  }
  return in_EAX;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




