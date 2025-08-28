#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part065.c - 5 个函数

// 函数: void FUN_1803e581b(int param_1,int64_t param_2,int param_3,int64_t param_4)
void FUN_1803e581b(int param_1,int64_t param_2,int param_3,int64_t param_4)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int *piVar8;
  int64_t *plVar9;
  uint64_t *puVar10;
  uint uVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  int iVar15;
  uint64_t unaff_RBX;
  uint64_t unaff_RSI;
  int unaff_EDI;
  int64_t in_R11;
  int unaff_R14D;
  int64_t unaff_R15;
  int iStack0000000000000030;
  int iStack0000000000000034;
  int iStack0000000000000038;
  int iStack000000000000003c;
  int32_t in_stack_00000080;
  
  *(uint64_t *)(in_R11 + -0x28) = unaff_RSI;
  iStack0000000000000038 = param_3;
  if ((((param_4 != 0) && (*(char *)(param_4 + 0x1e50) != (char)unaff_RBX)) && (param_1 == 0x800))
     && (param_3 == 0x800)) {
    param_1 = 0x400;
    iStack0000000000000038 = 0x400;
  }
  iStack0000000000000030 = *(int *)(param_2 + 0x324);
  iStack000000000000003c = (int)unaff_RBX;
  iStack0000000000000034 = param_1;
  uVar6 = FUN_1803e74c0();
  FUN_180284cf0(uVar6,&stack0x00000040);
  uVar12 = unaff_RBX & 0xffffffff;
  uVar14 = *(int64_t *)(unaff_R15 + 0xf8) - *(int64_t *)(unaff_R15 + 0xf0) >> 4;
  uVar7 = unaff_RBX;
  if (uVar14 != 0) {
    do {
      piVar8 = (int *)(uVar7 * 0x10 + *(int64_t *)(unaff_R15 + 0xf0));
      if (((*piVar8 == iStack0000000000000030) && (piVar8[1] == iStack0000000000000034)) &&
         ((piVar8[2] == iStack0000000000000038 && (piVar8[3] == iStack000000000000003c))))
      goto LAB_1803e58e9;
      uVar11 = (int)uVar12 + 1;
      uVar12 = (uint64_t)uVar11;
      uVar7 = (int64_t)(int)uVar11;
    } while ((uint64_t)(int64_t)(int)uVar11 < uVar14);
  }
  AudioMixer(unaff_R15 + 0xf0,&stack0x00000030);
LAB_1803e58e9:
  plVar9 = (int64_t *)FUN_1803e74c0();
  lVar2 = plVar9[1];
  lVar3 = *plVar9;
  uVar12 = *(int64_t *)(unaff_R15 + 0xf8) - *(int64_t *)(unaff_R15 + 0xf0) >> 4;
  uVar7 = unaff_RBX;
  if (uVar12 != 0) {
    do {
      iVar15 = (int)uVar7;
      piVar8 = (int *)(unaff_RBX * 0x10 + *(int64_t *)(unaff_R15 + 0xf0));
      if (((*piVar8 == iStack0000000000000030) && (piVar8[1] == iStack0000000000000034)) &&
         ((piVar8[2] == iStack0000000000000038 && (piVar8[3] == iStack000000000000003c))))
      goto LAB_1803e596c;
      unaff_RBX = (uint64_t)(int)(iVar15 + 1U);
      uVar7 = (uint64_t)(iVar15 + 1U);
    } while (unaff_RBX < uVar12);
  }
  iVar15 = -1;
LAB_1803e596c:
  puVar1 = (uint64_t *)(unaff_R15 + 0x30);
  puVar13 = *(uint64_t **)(unaff_R15 + 0x40);
  puVar5 = puVar1;
  while (puVar10 = puVar5, puVar5 = puVar13, puVar5 != (uint64_t *)0x0) {
    if ((*(int *)(puVar5 + 4) < unaff_EDI) ||
       ((*(int *)(puVar5 + 4) <= unaff_EDI && (*(int *)((int64_t)puVar5 + 0x24) < unaff_R14D)))) {
      puVar13 = (uint64_t *)*puVar5;
      bVar4 = true;
    }
    else {
      puVar13 = (uint64_t *)puVar5[1];
      bVar4 = false;
    }
    if (bVar4) {
      puVar5 = puVar10;
    }
  }
  if (((puVar10 == puVar1) || (unaff_EDI < *(int *)(puVar10 + 4))) ||
     ((unaff_EDI <= *(int *)(puVar10 + 4) && (unaff_R14D < *(int *)((int64_t)puVar10 + 0x24))))) {
    puVar10 = (uint64_t *)FUN_1803e77a0(puVar1,&stack0x00000098);
    puVar10 = (uint64_t *)*puVar10;
  }
  *(int *)((int64_t)puVar10 + 0x2c) = (int)(lVar2 - lVar3 >> 4) + -1;
  *(int *)(puVar10 + 5) = iVar15;
  return;
}






// 函数: void FUN_1803e5923(uint64_t param_1)
void FUN_1803e5923(uint64_t param_1)

{
  uint64_t *puVar1;
  int iVar2;
  uint64_t *puVar3;
  int *piVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int iVar7;
  uint64_t unaff_RBX;
  uint64_t uVar8;
  int32_t unaff_EBP;
  int unaff_EDI;
  uint7 uVar10;
  uint64_t uVar9;
  int64_t in_R11;
  int unaff_R14D;
  int64_t unaff_R15;
  int iStack0000000000000030;
  int iStack0000000000000034;
  int iStack0000000000000038;
  int iStack000000000000003c;
  
  uVar9 = _iStack0000000000000038 & 0xffffffff;
  uVar8 = unaff_RBX;
  do {
    iVar7 = (int)uVar8;
    piVar4 = (int *)(unaff_RBX * 0x10 + in_R11);
    if ((((*piVar4 == iStack0000000000000030) && (piVar4[1] == iStack0000000000000034)) &&
        (piVar4[2] == iStack0000000000000038)) && (piVar4[3] == iStack000000000000003c))
    goto LAB_1803e596c;
    uVar8 = (uint64_t)(iVar7 + 1U);
    unaff_RBX = (uint64_t)(int)(iVar7 + 1U);
  } while (unaff_RBX < param_1);
  iVar7 = -1;
LAB_1803e596c:
  puVar1 = (uint64_t *)(unaff_R15 + 0x30);
  puVar6 = *(uint64_t **)(unaff_R15 + 0x40);
  puVar3 = puVar1;
  while (puVar5 = puVar3, puVar3 = puVar6, puVar3 != (uint64_t *)0x0) {
    iVar2 = *(int *)(puVar3 + 4);
    uVar10 = (uint7)(uint3)((uint)iVar2 >> 8);
    if ((iVar2 < unaff_EDI) ||
       ((iVar2 <= unaff_EDI && (*(int *)((int64_t)puVar3 + 0x24) < unaff_R14D)))) {
      puVar6 = (uint64_t *)*puVar3;
      uVar9 = CONCAT71(uVar10,1);
    }
    else {
      puVar6 = (uint64_t *)puVar3[1];
      uVar9 = (uint64_t)uVar10 << 8;
    }
    if ((char)uVar9 != '\0') {
      puVar3 = puVar5;
    }
  }
  if (((puVar5 == puVar1) || (unaff_EDI < *(int *)(puVar5 + 4))) ||
     ((unaff_EDI <= *(int *)(puVar5 + 4) && (unaff_R14D < *(int *)((int64_t)puVar5 + 0x24))))) {
    puVar5 = (uint64_t *)FUN_1803e77a0(puVar1,&stack0x00000098,uVar9,puVar5,&stack0x00000080);
    puVar5 = (uint64_t *)*puVar5;
  }
  *(int32_t *)((int64_t)puVar5 + 0x2c) = unaff_EBP;
  *(int *)(puVar5 + 5) = iVar7;
  return;
}






// 函数: void FUN_1803e5a05(void)
void FUN_1803e5a05(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e5a10(uint *param_1)
void FUN_1803e5a10(uint *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int64_t lVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  int **ppiVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  uint64_t uVar13;
  uint *puVar14;
  uint *puVar15;
  uint64_t *puVar16;
  uint *puVar17;
  uint uVar18;
  uint64_t uVar19;
  uint *puVar20;
  int64_t lVar21;
  uint64_t uVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  int iVar26;
  uint64_t uVar27;
  uint64_t *puVar28;
  int iVar29;
  int8_t auStackX_8 [8];
  char acStackX_10 [8];
  int8_t auStackX_18 [8];
  char acStackX_20 [8];
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  uint *puStack_d8;
  uint *puStack_d0;
  int iStack_c8;
  int iStack_c4;
  uint64_t uStack_c0;
  uint *puStack_b8;
  uint64_t uStack_b0;
  int iStack_a8;
  uint64_t uStack_a4;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int *piStack_88;
  uint64_t *puStack_80;
  int *piStack_78;
  uint64_t *puStack_70;
  uint64_t uStack_68;
  uint64_t *puStack_60;
  
  uStack_68 = 0xfffffffffffffffe;
  lVar10 = *(int64_t *)(param_1 + 100);
  uVar27 = *(uint64_t *)(lVar10 + 0x14);
  iStack_e4 = 0;
  if (0 < (int)uVar27) {
    uStack_c0._4_4_ = (int)((uint64_t)uVar27 >> 0x20);
    iVar7 = uStack_c0._4_4_;
    uStack_c0 = uVar27;
    uStack_b0 = uVar27;
    do {
      iStack_e8 = 0;
      iVar29 = iStack_e4;
      if (0 < iVar7) {
        iStack_e0 = iStack_e4 * 1000;
        do {
          lVar4 = *(int64_t *)(lVar10 + 0x40);
          puVar16 = (uint64_t *)
                    (lVar4 + ((uint64_t)(int64_t)(iStack_e0 + iStack_e8) %
                             (uint64_t)*(uint *)(lVar10 + 0x48)) * 8);
          for (piVar8 = (int *)*puVar16; piVar8 != (int *)0x0; piVar8 = *(int **)(piVar8 + 4)) {
            if ((iVar29 == *piVar8) && (iStack_e8 == piVar8[1])) {
              piStack_88 = piVar8;
              puStack_80 = puVar16;
              ppiVar9 = &piStack_88;
              lVar21 = *(int64_t *)(lVar10 + 0x48);
              goto LAB_1803e5adb;
            }
          }
          lVar21 = *(int64_t *)(lVar10 + 0x48);
          puStack_70 = (uint64_t *)(lVar4 + lVar21 * 8);
          piStack_78 = (int *)*puStack_70;
          ppiVar9 = &piStack_78;
LAB_1803e5adb:
          iVar7 = iStack_e8;
          if (((*ppiVar9 != *(int **)(lVar4 + lVar21 * 8)) &&
              (lVar4 = *(int64_t *)(*ppiVar9 + 2), lVar4 != 0)) &&
             (iVar26 = 1, 1 < *(int *)(lVar10 + 0x78))) {
            uStack_98 = 0;
            do {
              uStack_90 = *(int64_t *)(lVar4 + 0x710 + (int64_t)iVar26 * 8);
              if (uStack_90 != 0) {
                uVar1 = *(ushort *)(uStack_90 + 0x5c);
                uVar2 = *(ushort *)(uStack_90 + 0x5e);
                uStack_f8 = *(uint *)(uStack_90 + 0x54);
                uStack_f4 = (uint)uVar1;
                uStack_f0 = (uint)uVar2;
                uStack_ec = 0;
                uVar18 = (uint)uVar1;
                uVar23 = (uint)uVar1;
                uVar25 = (uint)uVar2;
                puVar15 = *(uint **)(param_1 + 4);
                puVar24 = param_1;
                while (puVar14 = puVar24, puVar24 = puVar15, puVar24 != (uint *)0x0) {
                  uVar3 = puVar24[8];
                  if ((((uVar3 < uStack_f8) ||
                       ((uVar3 <= uStack_f8 && ((int)puVar24[9] < (int)uVar23)))) ||
                      ((uVar3 <= uStack_f8 &&
                       (((uVar3 < uStack_f8 || ((int)puVar24[9] <= (int)uVar23)) &&
                        ((int)puVar24[10] < (int)uVar25)))))) ||
                     (((uVar3 <= uStack_f8 && ((int)puVar24[9] <= (int)uVar18)) &&
                      ((((int)puVar24[9] < (int)uVar18 || ((int)puVar24[10] <= (int)uVar25)) &&
                       ((int)puVar24[0xb] < 0)))))) {
                    bVar5 = true;
                    puVar15 = *(uint **)puVar24;
                  }
                  else {
                    bVar5 = false;
                    puVar15 = *(uint **)(puVar24 + 2);
                  }
                  if (bVar5) {
                    puVar24 = puVar14;
                  }
                }
                if ((((puVar14 == param_1) || (uVar3 = puVar14[8], uStack_f8 < uVar3)) ||
                    ((uStack_f8 <= uVar3 && ((int)uVar18 < (int)puVar14[9])))) ||
                   (((uStack_f8 <= uVar3 &&
                     (((uStack_f8 < uVar3 || ((int)uVar23 <= (int)puVar14[9])) &&
                      ((int)(uint)uVar2 < (int)puVar14[10])))) ||
                    ((((puVar15 = puStack_d8, uStack_f8 <= uVar3 && ((int)uVar23 <= (int)puVar14[9])
                       ) && (((int)uVar23 < (int)puVar14[9] || ((int)uVar25 <= (int)puVar14[10]))))
                     && (0 < (int)puVar14[0xb])))))) {
                  lVar10 = FUN_1803e7da0(param_1,puVar14,auStackX_8,&uStack_f8);
                  if (lVar10 == 0) {
                    puVar14 = (uint *)FUN_1803e8310(param_1,acStackX_10,&uStack_f8);
                    puVar15 = puVar14;
                    if (acStackX_10[0] != '\0') {
                      if (((((puVar14 == param_1) || (uVar18 = puVar14[8], uStack_f8 < uVar18)) ||
                           ((uStack_f8 <= uVar18 && ((int)uStack_f4 < (int)puVar14[9])))) ||
                          ((uStack_f8 <= uVar18 &&
                           (((uStack_f8 < uVar18 || ((int)uStack_f4 <= (int)puVar14[9])) &&
                            ((int)uStack_f0 < (int)puVar14[10])))))) ||
                         ((((uStack_f8 <= uVar18 && ((int)uStack_f4 <= (int)puVar14[9])) &&
                           (((int)uStack_f4 < (int)puVar14[9] ||
                            ((int)uStack_f0 <= (int)puVar14[10])))) &&
                          ((int)uStack_ec < (int)puVar14[0xb])))) {
                        uVar27 = 0;
                      }
                      else {
                        uVar27 = 1;
                      }
                      lVar10 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x50,(char)param_1[10]);
                      puStack_d8 = (uint *)(lVar10 + 0x20);
                      *puStack_d8 = uStack_f8;
                      *(uint *)(lVar10 + 0x24) = uStack_f4;
                      *(uint *)(lVar10 + 0x28) = uStack_f0;
                      *(uint *)(lVar10 + 0x2c) = uStack_ec;
                      puStack_60 = (uint64_t *)(lVar10 + 0x30);
                      *puStack_60 = 0;
                      *(uint64_t *)(lVar10 + 0x38) = 0;
                      *(uint64_t *)(lVar10 + 0x40) = 0;
                      *(int32_t *)(lVar10 + 0x48) = 3;
                    // WARNING: Subroutine does not return
                      SystemStateController(lVar10,puVar14,param_1,uVar27);
                    }
                  }
                  else {
                    FUN_1803e7c80(param_1,&puStack_d8,lVar10,auStackX_8[0],&uStack_f8);
                    puVar14 = puStack_d8;
                    puVar15 = puStack_d8;
                  }
                }
                puStack_d8 = puVar15;
                puVar16 = *(uint64_t **)(puVar14 + 0xe);
                if (puVar16 < *(uint64_t **)(puVar14 + 0x10)) {
                  *(uint64_t **)(puVar14 + 0xe) = puVar16 + 2;
                  *(int32_t *)puVar16 = (int32_t)uStack_98;
                  *(int32_t *)((int64_t)puVar16 + 4) = uStack_98._4_4_;
                  *(int32_t *)(puVar16 + 1) = (int32_t)uStack_90;
                  *(int32_t *)((int64_t)puVar16 + 0xc) = uStack_90._4_4_;
                }
                else {
                  puVar12 = *(uint64_t **)(puVar14 + 0xc);
                  lVar10 = (int64_t)puVar16 - (int64_t)puVar12 >> 4;
                  if (lVar10 == 0) {
                    lVar10 = 1;
LAB_1803e5d54:
                    puVar11 = (uint64_t *)
                              CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar10 << 4,(char)puVar14[0x12]);
                    puVar16 = *(uint64_t **)(puVar14 + 0xe);
                    puVar12 = *(uint64_t **)(puVar14 + 0xc);
                    puVar28 = puVar11;
                  }
                  else {
                    lVar10 = lVar10 * 2;
                    if (lVar10 != 0) goto LAB_1803e5d54;
                    puVar11 = (uint64_t *)0x0;
                    puVar28 = puVar11;
                  }
                  for (; puVar12 != puVar16; puVar12 = puVar12 + 2) {
                    uVar27 = puVar12[1];
                    *puVar11 = *puVar12;
                    puVar11[1] = uVar27;
                    puVar11 = puVar11 + 2;
                  }
                  *(int32_t *)puVar11 = (int32_t)uStack_98;
                  *(int32_t *)((int64_t)puVar11 + 4) = uStack_98._4_4_;
                  *(int32_t *)(puVar11 + 1) = (int32_t)uStack_90;
                  *(int32_t *)((int64_t)puVar11 + 0xc) = uStack_90._4_4_;
                  if (*(int64_t *)(puVar14 + 0xc) != 0) {
                    // WARNING: Subroutine does not return
                    CoreEngine_MemoryPoolManager();
                  }
                  *(uint64_t **)(puVar14 + 0xc) = puVar28;
                  *(uint64_t **)(puVar14 + 0xe) = puVar11 + 2;
                  *(uint64_t **)(puVar14 + 0x10) = puVar28 + lVar10 * 2;
                  iVar29 = iStack_e4;
                }
                uVar19 = 0;
                puVar15 = *(uint **)(param_1 + 0x3e);
                puVar24 = *(uint **)(param_1 + 0x3c);
                uVar22 = (int64_t)puVar15 - (int64_t)puVar24 >> 4;
                if (uVar22 != 0) {
                  uVar13 = 0;
                  do {
                    puVar15 = puVar24 + uVar13 * 4;
                    if (((*puVar15 == uStack_f8) && (puVar15[1] == uStack_f4)) &&
                       ((puVar15[2] == uStack_f0 && (puVar15[3] == uStack_ec)))) goto LAB_1803e5eff;
                    uVar18 = (int)uVar19 + 1;
                    uVar19 = (uint64_t)uVar18;
                    uVar13 = (uint64_t)(int)uVar18;
                  } while (uVar13 < uVar22);
                  puVar15 = *(uint **)(param_1 + 0x3e);
                }
                if (puVar15 < *(uint **)(param_1 + 0x40)) {
                  *(uint **)(param_1 + 0x3e) = puVar15 + 4;
                  *puVar15 = uStack_f8;
                  puVar15[1] = uStack_f4;
                  puVar15[2] = uStack_f0;
                  puVar15[3] = uStack_ec;
                }
                else {
                  if (uVar22 == 0) {
                    lVar10 = 1;
LAB_1803e5e66:
                    puVar14 = (uint *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar10 << 4,(char)param_1[0x42]);
                    puVar15 = *(uint **)(param_1 + 0x3e);
                    puVar24 = *(uint **)(param_1 + 0x3c);
                  }
                  else {
                    lVar10 = uVar22 * 2;
                    if (lVar10 != 0) goto LAB_1803e5e66;
                    puVar14 = (uint *)0x0;
                  }
                  if (puVar24 != puVar15) {
                    // WARNING: Subroutine does not return
                    memmove(puVar14,puVar24,(int64_t)puVar15 - (int64_t)puVar24);
                  }
                  *puVar14 = uStack_f8;
                  puVar14[1] = uStack_f4;
                  puVar14[2] = uStack_f0;
                  puVar14[3] = uStack_ec;
                  if (*(int64_t *)(param_1 + 0x3c) != 0) {
                    // WARNING: Subroutine does not return
                    CoreEngine_MemoryPoolManager();
                  }
                  *(uint **)(param_1 + 0x3c) = puVar14;
                  *(uint **)(param_1 + 0x3e) = puVar14 + 4;
                  *(uint **)(param_1 + 0x40) = puVar14 + lVar10 * 4;
                  uVar19 = 0;
                }
LAB_1803e5eff:
                puVar15 = *(uint **)(param_1 + 4);
                puVar24 = param_1;
                while (puVar14 = puVar24, puVar24 = puVar15, puVar24 != (uint *)0x0) {
                  uVar18 = puVar24[8];
                  uVar19 = (uint64_t)uVar18;
                  if ((uVar18 < uStack_f8) ||
                     ((uVar18 <= uStack_f8 && ((int)puVar24[9] < (int)uStack_f4)))) {
LAB_1803e5f53:
                    uVar19 = CONCAT71((int7)(uVar19 >> 8),1);
                    puVar15 = *(uint **)puVar24;
                  }
                  else {
                    if (uVar18 <= uStack_f8) {
                      if (((int)puVar24[9] <= (int)uStack_f4) && ((int)puVar24[10] < (int)uStack_f0)
                         ) goto LAB_1803e5f53;
                      if (uVar18 <= uStack_f8) {
                        uVar18 = puVar24[9];
                        uVar19 = (uint64_t)uVar18;
                        if (((int)uVar18 <= (int)uStack_f4) &&
                           ((((int)uVar18 < (int)uStack_f4 || ((int)puVar24[10] <= (int)uStack_f0))
                            && ((int)puVar24[0xb] < (int)uStack_ec)))) goto LAB_1803e5f53;
                      }
                    }
                    uVar19 = uVar19 & 0xffffffffffffff00;
                    puVar15 = *(uint **)(puVar24 + 2);
                  }
                  if ((char)uVar19 != '\0') {
                    puVar24 = puVar14;
                  }
                }
                if ((puVar14 == param_1) ||
                   (cVar6 = func_0x0001803e7a30(uVar19,&uStack_f8,puVar14 + 8), puVar15 = puStack_d0
                   , cVar6 != '\0')) {
                  lVar10 = FUN_1803e7da0(param_1,puVar14,auStackX_18,&uStack_f8);
                  if (lVar10 == 0) {
                    puVar14 = (uint *)FUN_1803e8310(param_1,acStackX_20,&uStack_f8);
                    puVar15 = puVar14;
                    if (acStackX_20[0] != '\0') {
                      FUN_1803e7c80(param_1,&puStack_b8,puVar14,0,&uStack_f8);
                      puVar14 = puStack_b8;
                      puVar15 = puStack_b8;
                    }
                  }
                  else {
                    FUN_1803e7c80(param_1,&puStack_d0,lVar10,auStackX_18[0],&uStack_f8);
                    puVar14 = puStack_d0;
                    puVar15 = puStack_d0;
                  }
                }
                puStack_d0 = puVar15;
                lVar10 = *(int64_t *)(puVar14 + 0xe);
                lVar21 = *(int64_t *)(puVar14 + 0xc);
                uVar18 = 0;
                uVar19 = *(int64_t *)(param_1 + 0x3e) - *(int64_t *)(param_1 + 0x3c) >> 4;
                if (uVar19 != 0) {
                  uVar22 = 0;
                  do {
                    puVar15 = (uint *)(uVar22 * 0x10 + *(int64_t *)(param_1 + 0x3c));
                    if (((*puVar15 == uStack_f8) && (puVar15[1] == uStack_f4)) &&
                       ((puVar15[2] == uStack_f0 && (puVar15[3] == uStack_ec)))) goto LAB_1803e606c;
                    uVar18 = uVar18 + 1;
                    uVar22 = (uint64_t)(int)uVar18;
                  } while (uVar22 < uVar19);
                }
                uVar18 = 0xffffffff;
LAB_1803e606c:
                iStack_c4 = iStack_e8;
                uStack_a4 = CONCAT44(iStack_e8,iVar29);
                puVar15 = param_1 + 0x18;
                puVar14 = puVar15;
                puVar24 = *(uint **)(param_1 + 0x1c);
                while (puVar17 = puVar14, puVar24 != (uint *)0x0) {
                  if (((int)puVar24[8] < iVar26) ||
                     (((int)puVar24[8] <= iVar26 &&
                      (((int)puVar24[9] < iVar29 ||
                       (((int)puVar24[9] <= iVar29 && ((int)puVar24[10] < iStack_e8)))))))) {
                    bVar5 = true;
                    puVar20 = *(uint **)puVar24;
                  }
                  else {
                    bVar5 = false;
                    puVar20 = *(uint **)(puVar24 + 2);
                  }
                  puVar14 = puVar24;
                  puVar24 = puVar20;
                  if (bVar5) {
                    puVar14 = puVar17;
                  }
                }
                iStack_c8 = iVar29;
                iStack_a8 = iVar26;
                if (((puVar17 == puVar15) || (iVar26 < (int)puVar17[8])) ||
                   ((iVar26 <= (int)puVar17[8] &&
                    ((iVar29 < (int)puVar17[9] ||
                     ((iVar29 <= (int)puVar17[9] && (iStack_e8 < (int)puVar17[10])))))))) {
                  puVar16 = (uint64_t *)FUN_1803e7940(puVar15);
                  puVar17 = (uint *)*puVar16;
                }
                puVar17[0xb] = uVar18;
                puVar17[0xc] = (int)(lVar10 - lVar21 >> 4) - 1;
                iVar7 = iStack_e8;
              }
              iVar26 = iVar26 + 1;
              lVar10 = *(int64_t *)(param_1 + 100);
            } while (iVar26 < *(int *)(lVar10 + 0x78));
          }
          iStack_e8 = iVar7 + 1;
          uVar27 = uStack_b0;
          iVar7 = uStack_c0._4_4_;
        } while (iStack_e8 < uStack_c0._4_4_);
      }
      iStack_e4 = iVar29 + 1;
    } while (iStack_e4 < (int)uVar27);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001803e634f)
// WARNING: Removing unreachable block (ram,0x0001803e6515)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e6170(int64_t param_1,int64_t param_2)
void FUN_1803e6170(int64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  int32_t uVar2;
  int64_t lVar3;
  int8_t *puVar4;
  void *puVar5;
  void *puVar6;
  int iVar7;
  int64_t lVar8;
  uint64_t uVar10;
  void *puVar11;
  int iVar12;
  int iVar13;
  int64_t lStackX_8;
  int32_t uVar14;
  void *puStack_90;
  void *puStack_88;
  int iStack_80;
  uint64_t uStack_78;
  void *puStack_70;
  int64_t lStack_68;
  int iStack_60;
  uint64_t uStack_58;
  void *puStack_50;
  int8_t *puStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  int64_t lVar9;
  
  if (*(char *)(param_1 + 0x1e8) == '\0') {
    System_DataHandler(param_2,&processed_var_9232_ptr,0x5d);
    System_DataHandler(param_2,&processed_var_9320_ptr,0x5e);
    uVar10 = 0x5f;
    puVar5 = &processed_var_9368_ptr;
  }
  else {
    System_DataHandler(param_2,&processed_var_9040_ptr,0);
    System_DataHandler(param_2,&processed_var_9104_ptr,1);
    uVar10 = 2;
    puVar5 = &processed_var_9168_ptr;
  }
  System_DataHandler(param_2,puVar5,uVar10);
  iVar13 = 0;
  lVar3 = *(int64_t *)(param_1 + 0xf0);
  if (*(int64_t *)(param_1 + 0xf8) - lVar3 >> 4 != 0) {
    lStackX_8 = 0;
    do {
      iVar12 = 0x10;
      puVar5 = &system_data_buffer_ptr;
      lVar3 = func_0x000180220c90(*(int32_t *)(lVar3 + lStackX_8));
      uStack_38 = 0;
      puStack_48 = (int8_t *)0x0;
      uStack_40 = 0;
      puStack_50 = puVar5;
      if (lVar3 != 0) {
        lVar8 = -1;
        do {
          lVar9 = lVar8;
          lVar8 = lVar9 + 1;
        } while (*(char *)(lVar3 + lVar8) != '\0');
        if ((int)lVar8 != 0) {
          iVar7 = (int)lVar9 + 2;
          iVar13 = iVar7;
          if (iVar7 < 0x10) {
            iVar13 = iVar12;
          }
          puVar4 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar13,0x13);
          *puVar4 = 0;
          puStack_48 = puVar4;
          uVar2 = CoreMemoryPoolCleaner(puVar4);
          uStack_38 = CONCAT44(uStack_38._4_4_,uVar2);
                    // WARNING: Subroutine does not return
          memcpy(puVar4,lVar3,iVar7);
        }
      }
      uStack_40 = 0;
      lVar3 = *(int64_t *)(param_1 + 0xf0);
      uVar2 = *(int32_t *)(lStackX_8 + 8 + lVar3);
      uVar14 = *(int32_t *)(lStackX_8 + 0xc + lVar3);
      puStack_90 = &system_data_buffer_ptr;
      uStack_78 = 0;
      puStack_88 = (void *)0x0;
      iStack_80 = 0;
      puVar5 = &system_buffer_ptr;
      System_DataHandler(&puStack_90,&processed_var_9416_ptr,iVar13,*(int32_t *)(lStackX_8 + 4 + lVar3),uVar2,
                    &system_buffer_ptr,uVar14);
      puStack_70 = &system_data_buffer_ptr;
      uStack_58 = 0;
      lStack_68 = 0;
      iStack_60 = 0;
      if (*(char *)(param_1 + 0x1e8) == '\0') {
        iVar12 = iVar13 + 0x60;
        puVar6 = &processed_var_9280_ptr;
      }
      else {
        iVar12 = iVar13 + 3;
        puVar6 = &processed_var_9448_ptr;
      }
      puVar11 = &system_buffer_ptr;
      if (puStack_88 != (void *)0x0) {
        puVar11 = puStack_88;
      }
      System_DataHandler(&puStack_70,puVar6,puVar11,iVar12,uVar2,puVar5,uVar14);
      if (0 < iStack_60) {
        CoreMemoryPoolProcessor(param_2,*(int *)(param_2 + 0x10) + iStack_60);
                    // WARNING: Subroutine does not return
        memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),lStack_68,
               (int64_t)(iStack_60 + 1));
      }
      puVar1 = *(uint64_t **)(param_1 + 0x118);
      if (puVar1 < *(uint64_t **)(param_1 + 0x120)) {
        *(uint64_t **)(param_1 + 0x118) = puVar1 + 4;
        *puVar1 = &system_state_ptr;
        puVar1[1] = 0;
        *(int32_t *)(puVar1 + 2) = 0;
        *puVar1 = &system_data_buffer_ptr;
        puVar1[3] = 0;
        puVar1[1] = 0;
        *(int32_t *)(puVar1 + 2) = 0;
        CoreMemoryPoolProcessor(puVar1,iStack_80);
        if (iStack_80 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(puVar1[1],puStack_88,iStack_80 + 1);
        }
        if (puStack_88 != (void *)0x0) {
          *(int32_t *)(puVar1 + 2) = 0;
          if ((int8_t *)puVar1[1] != (int8_t *)0x0) {
            *(int8_t *)puVar1[1] = 0;
          }
          *(int32_t *)((int64_t)puVar1 + 0x1c) = 0;
        }
      }
      else {
        SystemCore_BackupSystem(param_1 + 0x110,&puStack_90);
      }
      puStack_70 = &system_data_buffer_ptr;
      if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      lStack_68 = 0;
      uStack_58 = uStack_58 & 0xffffffff00000000;
      puStack_70 = &system_state_ptr;
      puStack_90 = &system_data_buffer_ptr;
      if (puStack_88 != (void *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      puStack_88 = (void *)0x0;
      uStack_78 = uStack_78 & 0xffffffff00000000;
      puStack_90 = &system_state_ptr;
      puStack_48 = (int8_t *)0x0;
      uStack_38 = uStack_38 & 0xffffffff00000000;
      puStack_50 = &system_state_ptr;
      iVar13 = iVar13 + 1;
      lStackX_8 = lStackX_8 + 0x10;
      lVar3 = *(int64_t *)(param_1 + 0xf0);
    } while ((uint64_t)(int64_t)iVar13 < (uint64_t)(*(int64_t *)(param_1 + 0xf8) - lVar3 >> 4));
  }
  return;
}






