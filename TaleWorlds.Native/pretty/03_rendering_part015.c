#include "TaleWorlds.Native.Split.h"

// 03_rendering_part015.c - 5 个函数

// 函数: void FUN_180276ade(int64_t param_1)
void FUN_180276ade(int64_t param_1)

{
  uint *puVar1;
  uint64_t *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int64_t lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  int32_t uVar21;
  int64_t in_RAX;
  float *pfVar22;
  int64_t unaff_RBX;
  uint64_t *unaff_RBP;
  float *unaff_RSI;
  float *unaff_RDI;
  int64_t lVar23;
  int64_t in_R11;
  char unaff_R12B;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  int32_t unaff_XMM8_Da;
  float fVar39;
  int32_t unaff_XMM8_Db;
  float fVar40;
  int32_t unaff_XMM8_Dc;
  float fVar41;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000028;
  float in_stack_00000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  int32_t uStack000000000000003c;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  float in_stack_00000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  int32_t uStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack000000000000006c;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  int32_t in_stack_00000078;
  
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM10_Dd;
  if (in_RAX == param_1) {
    pfVar22 = (float *)(unaff_RBX + 0x330);
  }
  else {
    pfVar22 = (float *)(**(code **)(in_RAX + 0x158))();
  }
  fVar27 = *(float *)(unaff_R15 + 0x70);
  fVar28 = *(float *)(unaff_R15 + 0x74);
  fVar29 = *(float *)(unaff_R15 + 0x78);
  fVar10 = *(float *)(unaff_R15 + 0x7c);
  fVar11 = *(float *)(unaff_R15 + 0x80);
  fVar12 = *(float *)(unaff_R15 + 0x84);
  fVar13 = *(float *)(unaff_R15 + 0x88);
  fVar14 = *(float *)(unaff_R15 + 0x8c);
  fVar15 = *(float *)(unaff_R15 + 0x90);
  fVar16 = *(float *)(unaff_R15 + 0x94);
  fVar17 = *(float *)(unaff_R15 + 0x98);
  fVar18 = *(float *)(unaff_R15 + 0x9c);
  fVar24 = pfVar22[1];
  fVar26 = *pfVar22;
  fVar31 = pfVar22[2];
  fVar3 = pfVar22[5];
  fVar25 = pfVar22[9];
  fVar4 = pfVar22[0xd];
  fVar5 = pfVar22[4];
  fVar39 = fVar24 * fVar11 + fVar26 * fVar27 + fVar31 * fVar15;
  fVar40 = fVar24 * fVar12 + fVar26 * fVar28 + fVar31 * fVar16;
  fVar41 = fVar24 * fVar13 + fVar26 * fVar29 + fVar31 * fVar17;
  fVar6 = pfVar22[6];
  fVar30 = unaff_RDI[1];
  fVar7 = pfVar22[8];
  fVar36 = fVar3 * fVar11 + fVar5 * fVar27 + fVar6 * fVar15;
  fVar37 = fVar3 * fVar12 + fVar5 * fVar28 + fVar6 * fVar16;
  fVar38 = fVar3 * fVar13 + fVar5 * fVar29 + fVar6 * fVar17;
  *(float *)(unaff_RBP + -0xc) = fVar39;
  *(float *)((int64_t)unaff_RBP + -0x5c) = fVar40;
  *(float *)(unaff_RBP + -0xb) = fVar41;
  *(float *)((int64_t)unaff_RBP + -0x54) = fVar24 * fVar14 + fVar26 * fVar10 + fVar31 * fVar18;
  fVar24 = pfVar22[10];
  fVar26 = pfVar22[0xc];
  fVar31 = unaff_RDI[2];
  fVar32 = fVar25 * fVar11 + fVar7 * fVar27 + fVar24 * fVar15;
  fVar33 = fVar25 * fVar12 + fVar7 * fVar28 + fVar24 * fVar16;
  fVar34 = fVar25 * fVar13 + fVar7 * fVar29 + fVar24 * fVar17;
  fVar35 = fVar25 * fVar14 + fVar7 * fVar10 + fVar24 * fVar18;
  fVar24 = pfVar22[0xe];
  fVar7 = *(float *)(unaff_R15 + 0xac);
  fVar25 = *unaff_RDI;
  fVar27 = fVar4 * fVar11 + fVar26 * fVar27 + fVar24 * fVar15 + *(float *)(unaff_R15 + 0xa0);
  fVar28 = fVar4 * fVar12 + fVar26 * fVar28 + fVar24 * fVar16 + *(float *)(unaff_R15 + 0xa4);
  fVar29 = fVar4 * fVar13 + fVar26 * fVar29 + fVar24 * fVar17 + *(float *)(unaff_R15 + 0xa8);
  *(float *)(unaff_RBP + -10) = fVar36;
  *(float *)((int64_t)unaff_RBP + -0x4c) = fVar37;
  *(float *)(unaff_RBP + -9) = fVar38;
  *(float *)((int64_t)unaff_RBP + -0x44) = fVar3 * fVar14 + fVar5 * fVar10 + fVar6 * fVar18;
  *(float *)(unaff_RBP + -8) = fVar32;
  *(float *)((int64_t)unaff_RBP + -0x3c) = fVar33;
  *(float *)(unaff_RBP + -7) = fVar34;
  *(float *)((int64_t)unaff_RBP + -0x34) = fVar35;
  fVar25 = fVar25 - fVar27;
  *(float *)(unaff_RBP + -6) = fVar27;
  *(float *)((int64_t)unaff_RBP + -0x2c) = fVar28;
  *(float *)(unaff_RBP + -5) = fVar29;
  *(float *)((int64_t)unaff_RBP + -0x24) =
       fVar4 * fVar14 + fVar26 * fVar10 + fVar24 * fVar18 + fVar7;
  fVar30 = fVar30 - fVar28;
  fVar31 = fVar31 - fVar29;
  in_stack_00000030 = fVar25 * fVar39 + fVar30 * fVar40 + fVar31 * fVar41;
  fStack0000000000000034 = fVar25 * fVar36 + fVar30 * fVar37 + fVar31 * fVar38;
  in_stack_00000038 = fVar25 * fVar32 + fVar30 * fVar33 + fVar31 * fVar34;
  in_stack_00000040 = CONCAT44(fStack0000000000000034,in_stack_00000030);
  in_stack_00000048 =
       CONCAT44(fVar25 * fVar35 + fVar30 * fVar35 + fVar31 * fVar35,in_stack_00000038);
  lVar23 = (int64_t)unaff_R12B * 0x100;
  lVar9 = *(int64_t *)(*(int64_t *)(unaff_R15 + 0x260) + 0x18);
  do {
    LOCK();
    puVar1 = (uint *)(lVar23 + lVar9);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 | 1;
    UNLOCK();
  } while ((uVar8 & 1) != 0);
  puVar2 = (uint64_t *)(lVar23 + 4 + lVar9);
  uVar19 = *puVar2;
  uVar20 = puVar2[1];
  pfVar22 = (float *)(lVar23 + 0x14 + lVar9);
  fVar24 = *pfVar22;
  fVar26 = pfVar22[1];
  fVar31 = pfVar22[2];
  fVar3 = pfVar22[3];
  unaff_RBP[8] = uVar19;
  unaff_RBP[9] = uVar20;
  *(float *)(unaff_RBP + 10) = fVar24;
  *(float *)((int64_t)unaff_RBP + 0x54) = fVar26;
  *(float *)(unaff_RBP + 0xb) = fVar31;
  *(float *)((int64_t)unaff_RBP + 0x5c) = fVar3;
  unaff_RBP[-4] = uVar19;
  unaff_RBP[-3] = uVar20;
  in_stack_00000030 = in_stack_00000030 - fVar24;
  *(float *)(unaff_RBP + -2) = fVar24;
  *(float *)((int64_t)unaff_RBP + -0xc) = fVar26;
  *(float *)(unaff_RBP + -1) = fVar31;
  *(float *)((int64_t)unaff_RBP + -4) = fVar3;
  *(int32_t *)(lVar23 + lVar9) = 0;
  uStack000000000000003c = 0x7f7fffff;
  fStack0000000000000034 = fStack0000000000000034 - fVar26;
  in_stack_00000038 = in_stack_00000038 - fVar31;
  FUN_180285b40(unaff_RBP + -4,&fStackX_20,&stack0x00000030);
  in_stack_00000048 = _fStack0000000000000028;
  fVar31 = *unaff_RSI - *(float *)(unaff_RBP + -6);
  fVar26 = unaff_RSI[2] - *(float *)(unaff_RBP + -5);
  fVar24 = unaff_RSI[1] - *(float *)((int64_t)unaff_RBP + -0x2c);
  lVar9 = *(int64_t *)(*(int64_t *)(unaff_R15 + 0x260) + 0x18);
  in_stack_00000060 = fVar31 * fVar39 + fVar24 * fVar40 + fVar26 * fVar41;
  fStack0000000000000064 = fVar31 * fVar36 + fVar24 * fVar37 + fVar26 * fVar38;
  in_stack_00000068 = fVar31 * fVar32 + fVar24 * fVar33 + fVar26 * fVar34;
  fStack000000000000006c = fVar31 * fVar35 + fVar24 * fVar35 + fVar26 * fVar35;
  do {
    LOCK();
    puVar1 = (uint *)(lVar23 + lVar9);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 | 1;
    UNLOCK();
  } while ((uVar8 & 1) != 0);
  puVar2 = (uint64_t *)(lVar23 + 4 + lVar9);
  uVar19 = *puVar2;
  uVar20 = puVar2[1];
  pfVar22 = (float *)(lVar23 + 0x14 + lVar9);
  fVar24 = *pfVar22;
  fVar26 = pfVar22[1];
  in_stack_00000058 = pfVar22[2];
  fVar31 = pfVar22[3];
  unaff_RBP[0xc] = uVar19;
  unaff_RBP[0xd] = uVar20;
  *(float *)(unaff_RBP + 0xe) = fVar24;
  *(float *)((int64_t)unaff_RBP + 0x74) = fVar26;
  *(float *)(unaff_RBP + 0xf) = in_stack_00000058;
  *(float *)((int64_t)unaff_RBP + 0x7c) = fVar31;
  *unaff_RBP = uVar19;
  unaff_RBP[1] = uVar20;
  in_stack_00000050 = in_stack_00000060 - fVar24;
  *(float *)(unaff_RBP + 2) = fVar24;
  *(float *)((int64_t)unaff_RBP + 0x14) = fVar26;
  *(float *)(unaff_RBP + 3) = in_stack_00000058;
  *(float *)((int64_t)unaff_RBP + 0x1c) = fVar31;
  *(int32_t *)(lVar23 + lVar9) = 0;
  uStack000000000000005c = 0x7f7fffff;
  fStack0000000000000054 = fStack0000000000000064 - fVar26;
  in_stack_00000058 = in_stack_00000068 - in_stack_00000058;
  FUN_180285b40(fVar26,&stack0x00000070,&stack0x00000050);
  if ((((*(float *)(unaff_RBX + 0x214) <= fStackX_20) &&
       (fStackX_20 < *(float *)(unaff_RBX + 0x224) || fStackX_20 == *(float *)(unaff_RBX + 0x224)))
      && (*(float *)(unaff_RBX + 0x218) <= fStackX_24)) &&
     (((fStackX_24 < *(float *)(unaff_RBX + 0x228) || fStackX_24 == *(float *)(unaff_RBX + 0x228) &&
       (*(float *)(unaff_RBX + 0x21c) <= fStack0000000000000028)) &&
      (fStack0000000000000028 < *(float *)(unaff_RBX + 0x22c) ||
       fStack0000000000000028 == *(float *)(unaff_RBX + 0x22c))))) {
    if (*(int *)(unaff_RBX + 0x318) == -1) {
      *(int32_t *)(unaff_RBX + 0x314) = *(int32_t *)(unaff_RBP + 0x26);
      uVar21 = FUN_1801b9a40(unaff_R14 + 0x1218);
      *(int32_t *)(unaff_RBX + 0x318) = uVar21;
      LOCK();
      *(int32_t *)(unaff_RBX + 0x310) = 0;
      UNLOCK();
    }
    *(int32_t *)(unaff_RBP + 6) = uStack0000000000000070;
    *(int32_t *)((int64_t)unaff_RBP + 0x34) = uStack0000000000000074;
    *(int32_t *)(unaff_RBP + 7) = in_stack_00000078;
    *(float *)((int64_t)unaff_RBP + 0x3c) = (float)*(int *)(unaff_RBP + 0x27);
    *(float *)(unaff_RBP + 4) = fStackX_20;
    *(float *)((int64_t)unaff_RBP + 0x24) = fStackX_24;
    *(float *)(unaff_RBP + 5) = fStack0000000000000028;
    *(int32_t *)((int64_t)unaff_RBP + 0x2c) = 0x3e19999a;
    FUN_18020a7b0(unaff_RBX + 0x308,uStack0000000000000074,unaff_RBP + 4);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(unaff_RBP[0x10] ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180276d52(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4,
void FUN_180276d52(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4,
                  float param_5)

{
  uint *puVar1;
  uint64_t *puVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int32_t uVar10;
  int64_t unaff_RBX;
  uint64_t *unaff_RBP;
  int32_t unaff_EDI;
  int64_t unaff_R14;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  int32_t uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  int32_t in_stack_00000078;
  
  do {
    LOCK();
    puVar1 = (uint *)(param_4 + param_2);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 | 1;
    UNLOCK();
  } while ((uVar4 & 1) != 0);
  puVar2 = (uint64_t *)(param_4 + 4 + param_2);
  uVar8 = *puVar2;
  uVar9 = puVar2[1];
  pfVar3 = (float *)(param_4 + 0x14 + param_2);
  fVar5 = *pfVar3;
  fVar6 = pfVar3[1];
  fStack0000000000000058 = pfVar3[2];
  fVar7 = pfVar3[3];
  unaff_RBP[0xc] = uVar8;
  unaff_RBP[0xd] = uVar9;
  *(float *)(unaff_RBP + 0xe) = fVar5;
  *(float *)((int64_t)unaff_RBP + 0x74) = fVar6;
  *(float *)(unaff_RBP + 0xf) = fStack0000000000000058;
  *(float *)((int64_t)unaff_RBP + 0x7c) = fVar7;
  *unaff_RBP = uVar8;
  unaff_RBP[1] = uVar9;
  fStack0000000000000050 = fStack0000000000000060 - fVar5;
  *(float *)(unaff_RBP + 2) = fVar5;
  *(float *)((int64_t)unaff_RBP + 0x14) = fVar6;
  *(float *)(unaff_RBP + 3) = fStack0000000000000058;
  *(float *)((int64_t)unaff_RBP + 0x1c) = fVar7;
  *(int32_t *)(param_4 + param_2) = unaff_EDI;
  uStack000000000000005c = 0x7f7fffff;
  fStack0000000000000054 = fStack0000000000000064 - fVar6;
  fStack0000000000000058 = in_stack_00000068 - fStack0000000000000058;
  FUN_180285b40(fVar6,&stack0x00000070,&stack0x00000050);
  if ((((*(float *)(unaff_RBX + 0x214) <= fStackX_20) &&
       (fStackX_20 < *(float *)(unaff_RBX + 0x224) || fStackX_20 == *(float *)(unaff_RBX + 0x224)))
      && (*(float *)(unaff_RBX + 0x218) <= fStackX_24)) &&
     (((fStackX_24 < *(float *)(unaff_RBX + 0x228) || fStackX_24 == *(float *)(unaff_RBX + 0x228) &&
       (*(float *)(unaff_RBX + 0x21c) <= param_5)) &&
      (param_5 < *(float *)(unaff_RBX + 0x22c) || param_5 == *(float *)(unaff_RBX + 0x22c))))) {
    if (*(int *)(unaff_RBX + 0x318) == -1) {
      *(int32_t *)(unaff_RBX + 0x314) = *(int32_t *)(unaff_RBP + 0x26);
      uVar10 = FUN_1801b9a40(unaff_R14 + 0x1218);
      *(int32_t *)(unaff_RBX + 0x318) = uVar10;
      LOCK();
      *(int32_t *)(unaff_RBX + 0x310) = unaff_EDI;
      UNLOCK();
    }
    *(int32_t *)(unaff_RBP + 6) = uStack0000000000000070;
    *(int32_t *)((int64_t)unaff_RBP + 0x34) = uStack0000000000000074;
    *(int32_t *)(unaff_RBP + 7) = in_stack_00000078;
    *(float *)((int64_t)unaff_RBP + 0x3c) = (float)*(int *)(unaff_RBP + 0x27);
    *(float *)(unaff_RBP + 4) = fStackX_20;
    *(float *)((int64_t)unaff_RBP + 0x24) = fStackX_24;
    *(float *)(unaff_RBP + 5) = param_5;
    *(int32_t *)((int64_t)unaff_RBP + 0x2c) = 0x3e19999a;
    FUN_18020a7b0(unaff_RBX + 0x308,uStack0000000000000074,unaff_RBP + 4);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(unaff_RBP[0x10] ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180276eef(void)
void FUN_180276eef(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x80) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180276f1a(void)
void FUN_180276f1a(void)

{
  uint *puVar1;
  uint64_t *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int64_t lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  int32_t uVar21;
  int64_t in_RAX;
  float *pfVar22;
  int64_t unaff_RBX;
  uint64_t *unaff_RBP;
  float *unaff_RSI;
  float *unaff_RDI;
  int64_t lVar23;
  char unaff_R12B;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000028;
  float in_stack_00000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  int32_t uStack000000000000003c;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  float in_stack_00000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  int32_t uStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack000000000000006c;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  int32_t in_stack_00000078;
  
  pfVar22 = (float *)(**(code **)(in_RAX + 0x158))();
  fVar27 = *(float *)(unaff_R15 + 0x70);
  fVar28 = *(float *)(unaff_R15 + 0x74);
  fVar29 = *(float *)(unaff_R15 + 0x78);
  fVar10 = *(float *)(unaff_R15 + 0x7c);
  fVar11 = *(float *)(unaff_R15 + 0x80);
  fVar12 = *(float *)(unaff_R15 + 0x84);
  fVar13 = *(float *)(unaff_R15 + 0x88);
  fVar14 = *(float *)(unaff_R15 + 0x8c);
  fVar15 = *(float *)(unaff_R15 + 0x90);
  fVar16 = *(float *)(unaff_R15 + 0x94);
  fVar17 = *(float *)(unaff_R15 + 0x98);
  fVar18 = *(float *)(unaff_R15 + 0x9c);
  fVar24 = pfVar22[1];
  fVar26 = *pfVar22;
  fVar31 = pfVar22[2];
  fVar3 = pfVar22[5];
  fVar25 = pfVar22[9];
  fVar4 = pfVar22[0xd];
  fVar5 = pfVar22[4];
  fVar39 = fVar24 * fVar11 + fVar26 * fVar27 + fVar31 * fVar15;
  fVar40 = fVar24 * fVar12 + fVar26 * fVar28 + fVar31 * fVar16;
  fVar41 = fVar24 * fVar13 + fVar26 * fVar29 + fVar31 * fVar17;
  fVar6 = pfVar22[6];
  fVar30 = unaff_RDI[1];
  fVar7 = pfVar22[8];
  fVar36 = fVar3 * fVar11 + fVar5 * fVar27 + fVar6 * fVar15;
  fVar37 = fVar3 * fVar12 + fVar5 * fVar28 + fVar6 * fVar16;
  fVar38 = fVar3 * fVar13 + fVar5 * fVar29 + fVar6 * fVar17;
  *(float *)(unaff_RBP + -0xc) = fVar39;
  *(float *)((int64_t)unaff_RBP + -0x5c) = fVar40;
  *(float *)(unaff_RBP + -0xb) = fVar41;
  *(float *)((int64_t)unaff_RBP + -0x54) = fVar24 * fVar14 + fVar26 * fVar10 + fVar31 * fVar18;
  fVar24 = pfVar22[10];
  fVar26 = pfVar22[0xc];
  fVar31 = unaff_RDI[2];
  fVar32 = fVar25 * fVar11 + fVar7 * fVar27 + fVar24 * fVar15;
  fVar33 = fVar25 * fVar12 + fVar7 * fVar28 + fVar24 * fVar16;
  fVar34 = fVar25 * fVar13 + fVar7 * fVar29 + fVar24 * fVar17;
  fVar35 = fVar25 * fVar14 + fVar7 * fVar10 + fVar24 * fVar18;
  fVar24 = pfVar22[0xe];
  fVar7 = *(float *)(unaff_R15 + 0xac);
  fVar25 = *unaff_RDI;
  fVar27 = fVar4 * fVar11 + fVar26 * fVar27 + fVar24 * fVar15 + *(float *)(unaff_R15 + 0xa0);
  fVar28 = fVar4 * fVar12 + fVar26 * fVar28 + fVar24 * fVar16 + *(float *)(unaff_R15 + 0xa4);
  fVar29 = fVar4 * fVar13 + fVar26 * fVar29 + fVar24 * fVar17 + *(float *)(unaff_R15 + 0xa8);
  *(float *)(unaff_RBP + -10) = fVar36;
  *(float *)((int64_t)unaff_RBP + -0x4c) = fVar37;
  *(float *)(unaff_RBP + -9) = fVar38;
  *(float *)((int64_t)unaff_RBP + -0x44) = fVar3 * fVar14 + fVar5 * fVar10 + fVar6 * fVar18;
  *(float *)(unaff_RBP + -8) = fVar32;
  *(float *)((int64_t)unaff_RBP + -0x3c) = fVar33;
  *(float *)(unaff_RBP + -7) = fVar34;
  *(float *)((int64_t)unaff_RBP + -0x34) = fVar35;
  fVar25 = fVar25 - fVar27;
  *(float *)(unaff_RBP + -6) = fVar27;
  *(float *)((int64_t)unaff_RBP + -0x2c) = fVar28;
  *(float *)(unaff_RBP + -5) = fVar29;
  *(float *)((int64_t)unaff_RBP + -0x24) =
       fVar4 * fVar14 + fVar26 * fVar10 + fVar24 * fVar18 + fVar7;
  fVar30 = fVar30 - fVar28;
  fVar31 = fVar31 - fVar29;
  in_stack_00000030 = fVar25 * fVar39 + fVar30 * fVar40 + fVar31 * fVar41;
  fStack0000000000000034 = fVar25 * fVar36 + fVar30 * fVar37 + fVar31 * fVar38;
  in_stack_00000038 = fVar25 * fVar32 + fVar30 * fVar33 + fVar31 * fVar34;
  in_stack_00000040 = CONCAT44(fStack0000000000000034,in_stack_00000030);
  in_stack_00000048 =
       CONCAT44(fVar25 * fVar35 + fVar30 * fVar35 + fVar31 * fVar35,in_stack_00000038);
  lVar23 = (int64_t)unaff_R12B * 0x100;
  lVar9 = *(int64_t *)(*(int64_t *)(unaff_R15 + 0x260) + 0x18);
  do {
    LOCK();
    puVar1 = (uint *)(lVar23 + lVar9);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 | 1;
    UNLOCK();
  } while ((uVar8 & 1) != 0);
  puVar2 = (uint64_t *)(lVar23 + 4 + lVar9);
  uVar19 = *puVar2;
  uVar20 = puVar2[1];
  pfVar22 = (float *)(lVar23 + 0x14 + lVar9);
  fVar24 = *pfVar22;
  fVar26 = pfVar22[1];
  fVar31 = pfVar22[2];
  fVar3 = pfVar22[3];
  unaff_RBP[8] = uVar19;
  unaff_RBP[9] = uVar20;
  *(float *)(unaff_RBP + 10) = fVar24;
  *(float *)((int64_t)unaff_RBP + 0x54) = fVar26;
  *(float *)(unaff_RBP + 0xb) = fVar31;
  *(float *)((int64_t)unaff_RBP + 0x5c) = fVar3;
  unaff_RBP[-4] = uVar19;
  unaff_RBP[-3] = uVar20;
  in_stack_00000030 = in_stack_00000030 - fVar24;
  *(float *)(unaff_RBP + -2) = fVar24;
  *(float *)((int64_t)unaff_RBP + -0xc) = fVar26;
  *(float *)(unaff_RBP + -1) = fVar31;
  *(float *)((int64_t)unaff_RBP + -4) = fVar3;
  *(int32_t *)(lVar23 + lVar9) = 0;
  uStack000000000000003c = 0x7f7fffff;
  fStack0000000000000034 = fStack0000000000000034 - fVar26;
  in_stack_00000038 = in_stack_00000038 - fVar31;
  FUN_180285b40(unaff_RBP + -4,&fStackX_20,&stack0x00000030);
  in_stack_00000048 = _fStack0000000000000028;
  fVar31 = *unaff_RSI - *(float *)(unaff_RBP + -6);
  fVar26 = unaff_RSI[2] - *(float *)(unaff_RBP + -5);
  fVar24 = unaff_RSI[1] - *(float *)((int64_t)unaff_RBP + -0x2c);
  lVar9 = *(int64_t *)(*(int64_t *)(unaff_R15 + 0x260) + 0x18);
  in_stack_00000060 = fVar31 * fVar39 + fVar24 * fVar40 + fVar26 * fVar41;
  fStack0000000000000064 = fVar31 * fVar36 + fVar24 * fVar37 + fVar26 * fVar38;
  in_stack_00000068 = fVar31 * fVar32 + fVar24 * fVar33 + fVar26 * fVar34;
  fStack000000000000006c = fVar31 * fVar35 + fVar24 * fVar35 + fVar26 * fVar35;
  do {
    LOCK();
    puVar1 = (uint *)(lVar23 + lVar9);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 | 1;
    UNLOCK();
  } while ((uVar8 & 1) != 0);
  puVar2 = (uint64_t *)(lVar23 + 4 + lVar9);
  uVar19 = *puVar2;
  uVar20 = puVar2[1];
  pfVar22 = (float *)(lVar23 + 0x14 + lVar9);
  fVar24 = *pfVar22;
  fVar26 = pfVar22[1];
  in_stack_00000058 = pfVar22[2];
  fVar31 = pfVar22[3];
  unaff_RBP[0xc] = uVar19;
  unaff_RBP[0xd] = uVar20;
  *(float *)(unaff_RBP + 0xe) = fVar24;
  *(float *)((int64_t)unaff_RBP + 0x74) = fVar26;
  *(float *)(unaff_RBP + 0xf) = in_stack_00000058;
  *(float *)((int64_t)unaff_RBP + 0x7c) = fVar31;
  *unaff_RBP = uVar19;
  unaff_RBP[1] = uVar20;
  in_stack_00000050 = in_stack_00000060 - fVar24;
  *(float *)(unaff_RBP + 2) = fVar24;
  *(float *)((int64_t)unaff_RBP + 0x14) = fVar26;
  *(float *)(unaff_RBP + 3) = in_stack_00000058;
  *(float *)((int64_t)unaff_RBP + 0x1c) = fVar31;
  *(int32_t *)(lVar23 + lVar9) = 0;
  uStack000000000000005c = 0x7f7fffff;
  fStack0000000000000054 = fStack0000000000000064 - fVar26;
  in_stack_00000058 = in_stack_00000068 - in_stack_00000058;
  FUN_180285b40(fVar26,&stack0x00000070,&stack0x00000050);
  if ((((*(float *)(unaff_RBX + 0x214) <= fStackX_20) &&
       (fStackX_20 < *(float *)(unaff_RBX + 0x224) || fStackX_20 == *(float *)(unaff_RBX + 0x224)))
      && (*(float *)(unaff_RBX + 0x218) <= fStackX_24)) &&
     (((fStackX_24 < *(float *)(unaff_RBX + 0x228) || fStackX_24 == *(float *)(unaff_RBX + 0x228) &&
       (*(float *)(unaff_RBX + 0x21c) <= fStack0000000000000028)) &&
      (fStack0000000000000028 < *(float *)(unaff_RBX + 0x22c) ||
       fStack0000000000000028 == *(float *)(unaff_RBX + 0x22c))))) {
    if (*(int *)(unaff_RBX + 0x318) == -1) {
      *(int32_t *)(unaff_RBX + 0x314) = *(int32_t *)(unaff_RBP + 0x26);
      uVar21 = FUN_1801b9a40(unaff_R14 + 0x1218);
      *(int32_t *)(unaff_RBX + 0x318) = uVar21;
      LOCK();
      *(int32_t *)(unaff_RBX + 0x310) = 0;
      UNLOCK();
    }
    *(int32_t *)(unaff_RBP + 6) = uStack0000000000000070;
    *(int32_t *)((int64_t)unaff_RBP + 0x34) = uStack0000000000000074;
    *(int32_t *)(unaff_RBP + 7) = in_stack_00000078;
    *(float *)((int64_t)unaff_RBP + 0x3c) = (float)*(int *)(unaff_RBP + 0x27);
    *(float *)(unaff_RBP + 4) = fStackX_20;
    *(float *)((int64_t)unaff_RBP + 0x24) = fStackX_24;
    *(float *)(unaff_RBP + 5) = fStack0000000000000028;
    *(int32_t *)((int64_t)unaff_RBP + 0x2c) = 0x3e19999a;
    FUN_18020a7b0(unaff_RBX + 0x308,uStack0000000000000074,unaff_RBP + 4);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(unaff_RBP[0x10] ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180276f30(int64_t param_1,uint64_t *param_2,char param_3)
void FUN_180276f30(int64_t param_1,uint64_t *param_2,char param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int8_t auStack_e8 [224];
  
  lVar1 = *(int64_t *)(param_1 + 0x40);
  lVar3 = *(int64_t *)(param_1 + 0x38);
  *(int32_t *)(param_2 + 6) = 0;
  if (lVar1 - lVar3 >> 4 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
  }
  else {
    *param_2 = 0x4cbebc204cbebc20;
    param_2[1] = 0x7f7fffff4cbebc20;
    *(int32_t *)(param_2 + 4) = 0;
    *(int32_t *)((int64_t)param_2 + 0x24) = 0;
    *(int32_t *)(param_2 + 5) = 0;
    *(int32_t *)((int64_t)param_2 + 0x2c) = 0x7f7fffff;
    param_2[2] = 0xccbebc20ccbebc20;
    param_2[3] = 0x7f7fffffccbebc20;
    plVar4 = *(int64_t **)(param_1 + 0x38);
    if (plVar4 < *(int64_t **)(param_1 + 0x40)) {
      do {
        lVar1 = *plVar4;
        if (param_3 != '\0') {
          FUN_180075b70(lVar1);
        }
        if (((*(byte *)(lVar1 + 0x100) & 0x20) == 0) || (*(int64_t *)(param_1 + 0x28) == 0)) {
          lVar3 = lVar1 + 0x120;
        }
        else {
          lVar3 = FUN_180194940(lVar1 + 0x120,auStack_e8,*(int64_t *)(param_1 + 0x28) + 0x70);
        }
        FUN_18063a240(param_2,lVar1 + 0x274,lVar3);
        plVar4 = plVar4 + 2;
      } while (plVar4 < *(int64_t **)(param_1 + 0x40));
    }
    if (((*(int64_t *)(param_1 + 0x40) - (int64_t)*(int64_t **)(param_1 + 0x38) &
         0xfffffffffffffff0U) == 0x10) &&
       (lVar1 = **(int64_t **)(param_1 + 0x38), (*(uint *)(lVar1 + 0x100) & 0x4000000) == 0)) {
      uVar2 = *(uint64_t *)(lVar1 + 0x29c);
      param_2[4] = *(uint64_t *)(lVar1 + 0x294);
      param_2[5] = uVar2;
      *(int32_t *)(param_2 + 6) = *(int32_t *)(**(int64_t **)(param_1 + 0x38) + 0x2a4);
    }
    else {
      FUN_1800b9f60(param_2);
      plVar4 = *(int64_t **)(param_1 + 0x38);
      fVar7 = 0.0;
      if (plVar4 < *(int64_t **)(param_1 + 0x40)) {
        do {
          lVar1 = *plVar4;
          if ((*(uint *)(lVar1 + 0x100) & 0x4000000) == 0) {
            fVar8 = *(float *)(lVar1 + 0x294);
            fVar9 = *(float *)(lVar1 + 0x298);
            fVar10 = *(float *)(lVar1 + 0x29c);
            fVar5 = *(float *)(lVar1 + 0x2a4);
          }
          else {
            fVar5 = *(float *)(lVar1 + 0x298);
            fVar10 = *(float *)(lVar1 + 0x294);
            fVar6 = *(float *)(lVar1 + 0x29c);
            fVar8 = *(float *)(lVar1 + 0x130) * fVar5 + *(float *)(lVar1 + 0x120) * fVar10 +
                    *(float *)(lVar1 + 0x140) * fVar6 + *(float *)(lVar1 + 0x150);
            fVar9 = *(float *)(lVar1 + 0x134) * fVar5 + *(float *)(lVar1 + 0x124) * fVar10 +
                    *(float *)(lVar1 + 0x144) * fVar6 + *(float *)(lVar1 + 0x154);
            fVar10 = *(float *)(lVar1 + 0x138) * fVar5 + *(float *)(lVar1 + 0x128) * fVar10 +
                     *(float *)(lVar1 + 0x148) * fVar6 + *(float *)(lVar1 + 0x158);
            fVar5 = *(float *)(lVar1 + 0x140) * *(float *)(lVar1 + 0x140) +
                    *(float *)(lVar1 + 0x144) * *(float *)(lVar1 + 0x144) +
                    *(float *)(lVar1 + 0x148) * *(float *)(lVar1 + 0x148);
            fVar6 = *(float *)(lVar1 + 0x130) * *(float *)(lVar1 + 0x130) +
                    *(float *)(lVar1 + 0x134) * *(float *)(lVar1 + 0x134) +
                    *(float *)(lVar1 + 0x138) * *(float *)(lVar1 + 0x138);
            fVar11 = *(float *)(lVar1 + 0x120) * *(float *)(lVar1 + 0x120) +
                     *(float *)(lVar1 + 0x124) * *(float *)(lVar1 + 0x124) +
                     *(float *)(lVar1 + 0x128) * *(float *)(lVar1 + 0x128);
            if (fVar11 <= fVar6) {
              if (fVar5 <= fVar6) {
                fVar5 = fVar6;
              }
            }
            else if (fVar5 <= fVar11) {
              fVar5 = fVar11;
            }
            if ((fVar5 - 1.0 <= -1e-06) || (1e-06 <= fVar5 - 1.0)) {
              fVar5 = SQRT(fVar5) * *(float *)(lVar1 + 0x2a4);
            }
            else {
              fVar5 = *(float *)(lVar1 + 0x2a4) * 1.0;
            }
          }
          fVar9 = *(float *)((int64_t)param_2 + 0x24) - fVar9;
          fVar9 = fVar9 * fVar9 +
                  (*(float *)(param_2 + 4) - fVar8) * (*(float *)(param_2 + 4) - fVar8) +
                  (*(float *)(param_2 + 5) - fVar10) * (*(float *)(param_2 + 5) - fVar10);
          fVar8 = fVar7 - fVar5;
          if (fVar8 <= 0.0) {
            fVar8 = 0.0;
          }
          if (fVar8 * fVar8 < fVar9) {
            fVar7 = SQRT(fVar9) + fVar5;
          }
          plVar4 = plVar4 + 2;
        } while (plVar4 < *(int64_t **)(param_1 + 0x40));
        if ((0.0 < fVar7) && (fVar7 < *(float *)(param_2 + 6) || fVar7 == *(float *)(param_2 + 6)))
        {
          *(float *)(param_2 + 6) = fVar7;
        }
      }
    }
  }
  return;
}





