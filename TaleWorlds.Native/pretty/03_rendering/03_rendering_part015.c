#include "TaleWorlds.Native.Split.h"

// 03_rendering_part015.c - 5 个函数

// 函数: void FUN_180276ade(longlong param_1)
// 渲染对象矩阵变换和可见性检查
void render_object_matrix_transform(longlong render_context)

{
  uint *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  longlong in_RAX;
  float *pfVar22;
  longlong unaff_RBX;
  undefined8 *unaff_RBP;
  float *unaff_RSI;
  float *unaff_RDI;
  longlong lVar23;
  longlong in_R11;
  char unaff_R12B;
  longlong unaff_R14;
  longlong unaff_R15;
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
  undefined4 unaff_XMM8_Da;
  float fVar39;
  undefined4 unaff_XMM8_Db;
  float fVar40;
  undefined4 unaff_XMM8_Dc;
  float fVar41;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000028;
  float in_stack_00000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  float in_stack_00000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  undefined4 uStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  
  *(undefined4 *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(undefined4 *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(undefined4 *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(undefined4 *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
  *(undefined4 *)(in_R11 + -0x68) = unaff_XMM9_Da;
  *(undefined4 *)(in_R11 + -100) = unaff_XMM9_Db;
  *(undefined4 *)(in_R11 + -0x60) = unaff_XMM9_Dc;
  *(undefined4 *)(in_R11 + -0x5c) = unaff_XMM9_Dd;
  *(undefined4 *)(in_R11 + -0x78) = unaff_XMM10_Da;
  *(undefined4 *)(in_R11 + -0x74) = unaff_XMM10_Db;
  *(undefined4 *)(in_R11 + -0x70) = unaff_XMM10_Dc;
  *(undefined4 *)(in_R11 + -0x6c) = unaff_XMM10_Dd;
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
  *(float *)((longlong)unaff_RBP + -0x5c) = fVar40;
  *(float *)(unaff_RBP + -0xb) = fVar41;
  *(float *)((longlong)unaff_RBP + -0x54) = fVar24 * fVar14 + fVar26 * fVar10 + fVar31 * fVar18;
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
  *(float *)((longlong)unaff_RBP + -0x4c) = fVar37;
  *(float *)(unaff_RBP + -9) = fVar38;
  *(float *)((longlong)unaff_RBP + -0x44) = fVar3 * fVar14 + fVar5 * fVar10 + fVar6 * fVar18;
  *(float *)(unaff_RBP + -8) = fVar32;
  *(float *)((longlong)unaff_RBP + -0x3c) = fVar33;
  *(float *)(unaff_RBP + -7) = fVar34;
  *(float *)((longlong)unaff_RBP + -0x34) = fVar35;
  fVar25 = fVar25 - fVar27;
  *(float *)(unaff_RBP + -6) = fVar27;
  *(float *)((longlong)unaff_RBP + -0x2c) = fVar28;
  *(float *)(unaff_RBP + -5) = fVar29;
  *(float *)((longlong)unaff_RBP + -0x24) =
       fVar4 * fVar14 + fVar26 * fVar10 + fVar24 * fVar18 + fVar7;
  fVar30 = fVar30 - fVar28;
  fVar31 = fVar31 - fVar29;
  in_stack_00000030 = fVar25 * fVar39 + fVar30 * fVar40 + fVar31 * fVar41;
  fStack0000000000000034 = fVar25 * fVar36 + fVar30 * fVar37 + fVar31 * fVar38;
  in_stack_00000038 = fVar25 * fVar32 + fVar30 * fVar33 + fVar31 * fVar34;
  in_stack_00000040 = CONCAT44(fStack0000000000000034,in_stack_00000030);
  in_stack_00000048 =
       CONCAT44(fVar25 * fVar35 + fVar30 * fVar35 + fVar31 * fVar35,in_stack_00000038);
  lVar23 = (longlong)unaff_R12B * 0x100;
  lVar9 = *(longlong *)(*(longlong *)(unaff_R15 + 0x260) + 0x18);
  do {
    LOCK();
    puVar1 = (uint *)(lVar23 + lVar9);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 | 1;
    UNLOCK();
  } while ((uVar8 & 1) != 0);
  puVar2 = (undefined8 *)(lVar23 + 4 + lVar9);
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
  *(float *)((longlong)unaff_RBP + 0x54) = fVar26;
  *(float *)(unaff_RBP + 0xb) = fVar31;
  *(float *)((longlong)unaff_RBP + 0x5c) = fVar3;
  unaff_RBP[-4] = uVar19;
  unaff_RBP[-3] = uVar20;
  in_stack_00000030 = in_stack_00000030 - fVar24;
  *(float *)(unaff_RBP + -2) = fVar24;
  *(float *)((longlong)unaff_RBP + -0xc) = fVar26;
  *(float *)(unaff_RBP + -1) = fVar31;
  *(float *)((longlong)unaff_RBP + -4) = fVar3;
  *(undefined4 *)(lVar23 + lVar9) = 0;
  uStack000000000000003c = 0x7f7fffff;
  fStack0000000000000034 = fStack0000000000000034 - fVar26;
  in_stack_00000038 = in_stack_00000038 - fVar31;
  FUN_180285b40(unaff_RBP + -4,&fStackX_20,&stack0x00000030);
  in_stack_00000048 = _fStack0000000000000028;
  fVar31 = *unaff_RSI - *(float *)(unaff_RBP + -6);
  fVar26 = unaff_RSI[2] - *(float *)(unaff_RBP + -5);
  fVar24 = unaff_RSI[1] - *(float *)((longlong)unaff_RBP + -0x2c);
  lVar9 = *(longlong *)(*(longlong *)(unaff_R15 + 0x260) + 0x18);
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
  puVar2 = (undefined8 *)(lVar23 + 4 + lVar9);
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
  *(float *)((longlong)unaff_RBP + 0x74) = fVar26;
  *(float *)(unaff_RBP + 0xf) = in_stack_00000058;
  *(float *)((longlong)unaff_RBP + 0x7c) = fVar31;
  *unaff_RBP = uVar19;
  unaff_RBP[1] = uVar20;
  in_stack_00000050 = in_stack_00000060 - fVar24;
  *(float *)(unaff_RBP + 2) = fVar24;
  *(float *)((longlong)unaff_RBP + 0x14) = fVar26;
  *(float *)(unaff_RBP + 3) = in_stack_00000058;
  *(float *)((longlong)unaff_RBP + 0x1c) = fVar31;
  *(undefined4 *)(lVar23 + lVar9) = 0;
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
      *(undefined4 *)(unaff_RBX + 0x314) = *(undefined4 *)(unaff_RBP + 0x26);
      uVar21 = FUN_1801b9a40(unaff_R14 + 0x1218);
      *(undefined4 *)(unaff_RBX + 0x318) = uVar21;
      LOCK();
      *(undefined4 *)(unaff_RBX + 0x310) = 0;
      UNLOCK();
    }
    *(undefined4 *)(unaff_RBP + 6) = uStack0000000000000070;
    *(undefined4 *)((longlong)unaff_RBP + 0x34) = uStack0000000000000074;
    *(undefined4 *)(unaff_RBP + 7) = in_stack_00000078;
    *(float *)((longlong)unaff_RBP + 0x3c) = (float)*(int *)(unaff_RBP + 0x27);
    *(float *)(unaff_RBP + 4) = fStackX_20;
    *(float *)((longlong)unaff_RBP + 0x24) = fStackX_24;
    *(float *)(unaff_RBP + 5) = fStack0000000000000028;
    *(undefined4 *)((longlong)unaff_RBP + 0x2c) = 0x3e19999a;
    FUN_18020a7b0(unaff_RBX + 0x308,uStack0000000000000074,unaff_RBP + 4);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(unaff_RBP[0x10] ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180276d52(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
// 渲染参数处理和边界检查
void render_parameter_processor(undefined8 render_system, longlong render_data, undefined8 texture_handle, longlong resource_pool, float depth_value)

{
  uint *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  longlong unaff_RBX;
  undefined8 *unaff_RBP;
  undefined4 unaff_EDI;
  longlong unaff_R14;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  undefined4 uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  
  do {
    LOCK();
    puVar1 = (uint *)(param_4 + param_2);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 | 1;
    UNLOCK();
  } while ((uVar4 & 1) != 0);
  puVar2 = (undefined8 *)(param_4 + 4 + param_2);
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
  *(float *)((longlong)unaff_RBP + 0x74) = fVar6;
  *(float *)(unaff_RBP + 0xf) = fStack0000000000000058;
  *(float *)((longlong)unaff_RBP + 0x7c) = fVar7;
  *unaff_RBP = uVar8;
  unaff_RBP[1] = uVar9;
  fStack0000000000000050 = fStack0000000000000060 - fVar5;
  *(float *)(unaff_RBP + 2) = fVar5;
  *(float *)((longlong)unaff_RBP + 0x14) = fVar6;
  *(float *)(unaff_RBP + 3) = fStack0000000000000058;
  *(float *)((longlong)unaff_RBP + 0x1c) = fVar7;
  *(undefined4 *)(param_4 + param_2) = unaff_EDI;
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
      *(undefined4 *)(unaff_RBX + 0x314) = *(undefined4 *)(unaff_RBP + 0x26);
      uVar10 = FUN_1801b9a40(unaff_R14 + 0x1218);
      *(undefined4 *)(unaff_RBX + 0x318) = uVar10;
      LOCK();
      *(undefined4 *)(unaff_RBX + 0x310) = unaff_EDI;
      UNLOCK();
    }
    *(undefined4 *)(unaff_RBP + 6) = uStack0000000000000070;
    *(undefined4 *)((longlong)unaff_RBP + 0x34) = uStack0000000000000074;
    *(undefined4 *)(unaff_RBP + 7) = in_stack_00000078;
    *(float *)((longlong)unaff_RBP + 0x3c) = (float)*(int *)(unaff_RBP + 0x27);
    *(float *)(unaff_RBP + 4) = fStackX_20;
    *(float *)((longlong)unaff_RBP + 0x24) = fStackX_24;
    *(float *)(unaff_RBP + 5) = param_5;
    *(undefined4 *)((longlong)unaff_RBP + 0x2c) = 0x3e19999a;
    FUN_18020a7b0(unaff_RBX + 0x308,uStack0000000000000074,unaff_RBP + 4);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(unaff_RBP[0x10] ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180276eef(void)
// 渲染堆栈清理函数
void render_stack_cleanup(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x80) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180276f1a(void)
// 渲染对象深度计算和可见性测试
void render_object_depth_test(void)

{
  uint *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  longlong in_RAX;
  float *pfVar22;
  longlong unaff_RBX;
  undefined8 *unaff_RBP;
  float *unaff_RSI;
  float *unaff_RDI;
  longlong lVar23;
  char unaff_R12B;
  longlong unaff_R14;
  longlong unaff_R15;
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
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  float in_stack_00000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  undefined4 uStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  
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
  *(float *)((longlong)unaff_RBP + -0x5c) = fVar40;
  *(float *)(unaff_RBP + -0xb) = fVar41;
  *(float *)((longlong)unaff_RBP + -0x54) = fVar24 * fVar14 + fVar26 * fVar10 + fVar31 * fVar18;
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
  *(float *)((longlong)unaff_RBP + -0x4c) = fVar37;
  *(float *)(unaff_RBP + -9) = fVar38;
  *(float *)((longlong)unaff_RBP + -0x44) = fVar3 * fVar14 + fVar5 * fVar10 + fVar6 * fVar18;
  *(float *)(unaff_RBP + -8) = fVar32;
  *(float *)((longlong)unaff_RBP + -0x3c) = fVar33;
  *(float *)(unaff_RBP + -7) = fVar34;
  *(float *)((longlong)unaff_RBP + -0x34) = fVar35;
  fVar25 = fVar25 - fVar27;
  *(float *)(unaff_RBP + -6) = fVar27;
  *(float *)((longlong)unaff_RBP + -0x2c) = fVar28;
  *(float *)(unaff_RBP + -5) = fVar29;
  *(float *)((longlong)unaff_RBP + -0x24) =
       fVar4 * fVar14 + fVar26 * fVar10 + fVar24 * fVar18 + fVar7;
  fVar30 = fVar30 - fVar28;
  fVar31 = fVar31 - fVar29;
  in_stack_00000030 = fVar25 * fVar39 + fVar30 * fVar40 + fVar31 * fVar41;
  fStack0000000000000034 = fVar25 * fVar36 + fVar30 * fVar37 + fVar31 * fVar38;
  in_stack_00000038 = fVar25 * fVar32 + fVar30 * fVar33 + fVar31 * fVar34;
  in_stack_00000040 = CONCAT44(fStack0000000000000034,in_stack_00000030);
  in_stack_00000048 =
       CONCAT44(fVar25 * fVar35 + fVar30 * fVar35 + fVar31 * fVar35,in_stack_00000038);
  lVar23 = (longlong)unaff_R12B * 0x100;
  lVar9 = *(longlong *)(*(longlong *)(unaff_R15 + 0x260) + 0x18);
  do {
    LOCK();
    puVar1 = (uint *)(lVar23 + lVar9);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 | 1;
    UNLOCK();
  } while ((uVar8 & 1) != 0);
  puVar2 = (undefined8 *)(lVar23 + 4 + lVar9);
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
  *(float *)((longlong)unaff_RBP + 0x54) = fVar26;
  *(float *)(unaff_RBP + 0xb) = fVar31;
  *(float *)((longlong)unaff_RBP + 0x5c) = fVar3;
  unaff_RBP[-4] = uVar19;
  unaff_RBP[-3] = uVar20;
  in_stack_00000030 = in_stack_00000030 - fVar24;
  *(float *)(unaff_RBP + -2) = fVar24;
  *(float *)((longlong)unaff_RBP + -0xc) = fVar26;
  *(float *)(unaff_RBP + -1) = fVar31;
  *(float *)((longlong)unaff_RBP + -4) = fVar3;
  *(undefined4 *)(lVar23 + lVar9) = 0;
  uStack000000000000003c = 0x7f7fffff;
  fStack0000000000000034 = fStack0000000000000034 - fVar26;
  in_stack_00000038 = in_stack_00000038 - fVar31;
  FUN_180285b40(unaff_RBP + -4,&fStackX_20,&stack0x00000030);
  in_stack_00000048 = _fStack0000000000000028;
  fVar31 = *unaff_RSI - *(float *)(unaff_RBP + -6);
  fVar26 = unaff_RSI[2] - *(float *)(unaff_RBP + -5);
  fVar24 = unaff_RSI[1] - *(float *)((longlong)unaff_RBP + -0x2c);
  lVar9 = *(longlong *)(*(longlong *)(unaff_R15 + 0x260) + 0x18);
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
  puVar2 = (undefined8 *)(lVar23 + 4 + lVar9);
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
  *(float *)((longlong)unaff_RBP + 0x74) = fVar26;
  *(float *)(unaff_RBP + 0xf) = in_stack_00000058;
  *(float *)((longlong)unaff_RBP + 0x7c) = fVar31;
  *unaff_RBP = uVar19;
  unaff_RBP[1] = uVar20;
  in_stack_00000050 = in_stack_00000060 - fVar24;
  *(float *)(unaff_RBP + 2) = fVar24;
  *(float *)((longlong)unaff_RBP + 0x14) = fVar26;
  *(float *)(unaff_RBP + 3) = in_stack_00000058;
  *(float *)((longlong)unaff_RBP + 0x1c) = fVar31;
  *(undefined4 *)(lVar23 + lVar9) = 0;
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
      *(undefined4 *)(unaff_RBX + 0x314) = *(undefined4 *)(unaff_RBP + 0x26);
      uVar21 = FUN_1801b9a40(unaff_R14 + 0x1218);
      *(undefined4 *)(unaff_RBX + 0x318) = uVar21;
      LOCK();
      *(undefined4 *)(unaff_RBX + 0x310) = 0;
      UNLOCK();
    }
    *(undefined4 *)(unaff_RBP + 6) = uStack0000000000000070;
    *(undefined4 *)((longlong)unaff_RBP + 0x34) = uStack0000000000000074;
    *(undefined4 *)(unaff_RBP + 7) = in_stack_00000078;
    *(float *)((longlong)unaff_RBP + 0x3c) = (float)*(int *)(unaff_RBP + 0x27);
    *(float *)(unaff_RBP + 4) = fStackX_20;
    *(float *)((longlong)unaff_RBP + 0x24) = fStackX_24;
    *(float *)(unaff_RBP + 5) = fStack0000000000000028;
    *(undefined4 *)((longlong)unaff_RBP + 0x2c) = 0x3e19999a;
    FUN_18020a7b0(unaff_RBX + 0x308,uStack0000000000000074,unaff_RBP + 4);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(unaff_RBP[0x10] ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180276f30(longlong param_1,undefined8 *param_2,char param_3)
// 渲染边界框计算和碰撞检测
void render_bounding_box_calculation(longlong render_object, undefined8 *bounding_box, char include_children)

{
  longlong object_end_ptr;           // 对象数据结束指针
  undefined8 bounding_box_data;     // 边界框数据
  longlong object_start_ptr;        // 对象数据开始指针
  longlong *object_iterator;        // 对象迭代器
  float bounding_sphere_radius;     // 边界球半径
  float matrix_scale;               // 矩阵缩放值
  float min_distance;               // 最小距离
  float transformed_x;               // 变换后的X坐标
  float transformed_y;               // 变换后的Y坐标
  float transformed_z;               // 变换后的Z坐标
  float magnitude_squared;         // 平方值
  undefined1 transform_stack [224]; // 变换堆栈
  
  // 获取对象的开始和结束指针
  object_end_ptr = *(longlong *)(render_object + 0x40);
  object_start_ptr = *(longlong *)(render_object + 0x38);
  *(undefined4 *)(bounding_box + 6) = 0;
  // 如果对象为空，初始化边界框为零
  if (object_end_ptr - object_start_ptr >> 4 == 0) {
    *bounding_box = 0;
    bounding_box[1] = 0;
    bounding_box[2] = 0;
    bounding_box[3] = 0;
    bounding_box[4] = 0;
    bounding_box[5] = 0;
  }
  else {
    // 初始化边界框为最大/最小值
    *bounding_box = 0x4cbebc204cbebc20;  // 最小值
    bounding_box[1] = 0x7f7fffff4cbebc20; // 最大值
    *(undefined4 *)(bounding_box + 4) = 0;
    *(undefined4 *)((longlong)bounding_box + 0x24) = 0;
    *(undefined4 *)(bounding_box + 5) = 0;
    *(undefined4 *)((longlong)bounding_box + 0x2c) = 0x7f7fffff;
    bounding_box[2] = 0xccbebc20ccbebc20; // 最小值
    bounding_box[3] = 0x7f7fffffccbebc20; // 最大值
    // 遍历所有子对象并计算边界框
    object_iterator = *(longlong **)(render_object + 0x38);
    if (object_iterator < *(longlong **)(render_object + 0x40)) {
      do {
        longlong child_object = *object_iterator;
        if (include_children != '\0') {
          Render_UpdateObjectTransform(child_object);
        }
        // 获取对象的变换矩阵
        if (((*(byte *)(child_object + 0x100) & 0x20) == 0) || (*(longlong *)(render_object + 0x28) == 0)) {
          object_start_ptr = child_object + 0x120;
        }
        else {
          object_start_ptr = Render_GetTransformMatrix(child_object + 0x120, transform_stack, *(longlong *)(render_object + 0x28) + 0x70);
        }
        // 合并子对象的边界框
        Render_MergeBoundingBox(bounding_box, child_object + 0x274, object_start_ptr);
        object_iterator = object_iterator + 2;
      } while (object_iterator < *(longlong **)(render_object + 0x40));
    }
    // 如果只有一个对象且没有特殊标志，直接使用其边界框
    if (((*(longlong *)(render_object + 0x40) - (longlong)*(longlong **)(render_object + 0x38) &
         0xfffffffffffffff0U) == 0x10) &&
       (longlong single_object = **(longlong **)(render_object + 0x38), (*(uint *)(single_object + 0x100) & 0x4000000) == 0)) {
      bounding_box_data = *(undefined8 *)(single_object + 0x29c);
      bounding_box[4] = *(undefined8 *)(single_object + 0x294);
      bounding_box[5] = bounding_box_data;
      *(undefined4 *)(bounding_box + 6) = *(undefined4 *)(**(longlong **)(render_object + 0x38) + 0x2a4);
    }
    else {
      // 计算复杂的边界球半径
      Render_InitBoundingBox(bounding_box);
      object_iterator = *(longlong **)(render_object + 0x38);
      min_distance = 0.0;
      if (object_iterator < *(longlong **)(render_object + 0x40)) {
        do {
          longlong current_object = *object_iterator;
          if ((*(uint *)(current_object + 0x100) & 0x4000000) == 0) {
            // 直接使用边界框数据
            transformed_x = *(float *)(current_object + 0x294);
            transformed_y = *(float *)(current_object + 0x298);
            transformed_z = *(float *)(current_object + 0x29c);
            bounding_sphere_radius = *(float *)(current_object + 0x2a4);
          }
          else {
            // 计算变换后的边界球半径
            bounding_sphere_radius = *(float *)(current_object + 0x298);
            transformed_z = *(float *)(current_object + 0x294);
            matrix_scale = *(float *)(current_object + 0x29c);
            transformed_x = *(float *)(current_object + 0x130) * bounding_sphere_radius + *(float *)(current_object + 0x120) * transformed_z +
                    *(float *)(current_object + 0x140) * matrix_scale + *(float *)(current_object + 0x150);
            transformed_y = *(float *)(current_object + 0x134) * bounding_sphere_radius + *(float *)(current_object + 0x124) * transformed_z +
                    *(float *)(current_object + 0x144) * matrix_scale + *(float *)(current_object + 0x154);
            transformed_z = *(float *)(current_object + 0x138) * bounding_sphere_radius + *(float *)(current_object + 0x128) * transformed_z +
                     *(float *)(current_object + 0x148) * matrix_scale + *(float *)(current_object + 0x158);
            // 计算矩阵的缩放因子
            bounding_sphere_radius = *(float *)(current_object + 0x140) * *(float *)(current_object + 0x140) +
                    *(float *)(current_object + 0x144) * *(float *)(current_object + 0x144) +
                    *(float *)(current_object + 0x148) * *(float *)(current_object + 0x148);
            matrix_scale = *(float *)(current_object + 0x130) * *(float *)(current_object + 0x130) +
                    *(float *)(current_object + 0x134) * *(float *)(current_object + 0x134) +
                    *(float *)(current_object + 0x138) * *(float *)(current_object + 0x138);
            magnitude_squared = *(float *)(current_object + 0x120) * *(float *)(current_object + 0x120) +
                     *(float *)(current_object + 0x124) * *(float *)(current_object + 0x124) +
                     *(float *)(current_object + 0x128) * *(float *)(current_object + 0x128);
            // 选择最大的缩放因子
            if (magnitude_squared <= matrix_scale) {
              if (bounding_sphere_radius <= matrix_scale) {
                bounding_sphere_radius = matrix_scale;
              }
            }
            else if (bounding_sphere_radius <= magnitude_squared) {
              bounding_sphere_radius = magnitude_squared;
            }
            // 计算最终的边界球半径
            if ((bounding_sphere_radius - 1.0 <= -1e-06) || (1e-06 <= bounding_sphere_radius - 1.0)) {
              bounding_sphere_radius = SQRT(bounding_sphere_radius) * *(float *)(current_object + 0x2a4);
            }
            else {
              bounding_sphere_radius = *(float *)(current_object + 0x2a4) * 1.0;
            }
          }
          // 计算距离平方
          transformed_y = *(float *)((longlong)bounding_box + 0x24) - transformed_y;
          transformed_y = transformed_y * transformed_y +
                  (*(float *)(bounding_box + 4) - transformed_x) * (*(float *)(bounding_box + 4) - transformed_x) +
                  (*(float *)(bounding_box + 5) - transformed_z) * (*(float *)(bounding_box + 5) - transformed_z);
          transformed_x = min_distance - bounding_sphere_radius;
          if (transformed_x <= 0.0) {
            transformed_x = 0.0;
          }
          // 更新最小距离
          if (transformed_x * transformed_x < transformed_y) {
            min_distance = SQRT(transformed_y) + bounding_sphere_radius;
          }
          object_iterator = object_iterator + 2;
        } while (object_iterator < *(longlong **)(render_object + 0x40));
        // 更新边界框的距离值
        if ((0.0 < min_distance) && (min_distance < *(float *)(bounding_box + 6) || min_distance == *(float *)(bounding_box + 6)))
        {
          *(float *)(bounding_box + 6) = min_distance;
        }
      }
    }
  }
  return;
}





