#include "TaleWorlds.Native.Split.h"

// 03_rendering_part461.c - 4 个函数

// 函数: void FUN_180515349(void)
void FUN_180515349(void)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong in_RAX;
  uint *puVar15;
  longlong lVar16;
  longlong unaff_RBX;
  float *unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong in_R11;
  float fVar17;
  undefined4 unaff_XMM6_Da;
  float fVar18;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  float fVar19;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  float fVar20;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  float fVar21;
  float fVar22;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  float fVar23;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  float unaff_XMM11_Da;
  undefined4 unaff_XMM12_Da;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  undefined4 unaff_XMM13_Da;
  float fVar24;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  undefined4 unaff_XMM15_Da;
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  float fStack0000000000000044;
  float fStack000000000000004c;
  uint uStack0000000000000054;
  uint uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float in_stack_00000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  float fStack000000000000007c;
  uint in_stack_00000080;
  uint uStack0000000000000084;
  uint in_stack_00000088;
  uint uStack000000000000008c;
  float in_stack_00000090;
  float fStack0000000000000094;
  float in_stack_00000098;
  float fStack000000000000009c;
  uint in_stack_000000a0;
  uint uStack00000000000000a4;
  uint in_stack_000000a8;
  uint uStack00000000000000ac;
  float in_stack_000000b0;
  float fStack00000000000000b4;
  float in_stack_000000b8;
  float fStack00000000000000bc;
  float in_stack_000000c0;
  float fStack00000000000000c4;
  float in_stack_000000c8;
  uint uStack00000000000000cc;
  ulonglong in_stack_000000d0;
  
  *(undefined8 *)(in_R11 + 0x10) = unaff_RSI;
  *(undefined8 *)(in_R11 + 0x18) = unaff_RDI;
  *(undefined4 *)(in_R11 + -0x18) = unaff_XMM6_Da;
  *(undefined4 *)(in_R11 + -0x14) = unaff_XMM6_Db;
  *(undefined4 *)(in_R11 + -0x10) = unaff_XMM6_Dc;
  *(undefined4 *)(in_R11 + -0xc) = unaff_XMM6_Dd;
  *(undefined1 *)(in_RAX + 0x5a8) = 0xff;
  lVar16 = *(longlong *)(unaff_RBX + 0x590);
  lVar5 = *(longlong *)(unaff_RBX + 0x728);
  *(undefined4 *)(in_R11 + -0x28) = unaff_XMM7_Da;
  *(undefined4 *)(in_R11 + -0x24) = unaff_XMM7_Db;
  *(undefined4 *)(in_R11 + -0x20) = unaff_XMM7_Dc;
  *(undefined4 *)(in_R11 + -0x1c) = unaff_XMM7_Dd;
  *(undefined4 *)(in_R11 + -0x38) = unaff_XMM8_Da;
  *(undefined4 *)(in_R11 + -0x34) = unaff_XMM8_Db;
  *(undefined4 *)(in_R11 + -0x30) = unaff_XMM8_Dc;
  *(undefined4 *)(in_R11 + -0x2c) = unaff_XMM8_Dd;
  uVar4 = *(undefined4 *)(lVar16 + 0x2498);
  *(undefined4 *)(in_R11 + -0x48) = unaff_XMM9_Da;
  *(undefined4 *)(in_R11 + -0x44) = unaff_XMM9_Db;
  *(undefined4 *)(in_R11 + -0x40) = unaff_XMM9_Dc;
  *(undefined4 *)(in_R11 + -0x3c) = unaff_XMM9_Dd;
  *(undefined4 *)(lVar5 + 0x5a0) = uVar4;
  lVar16 = *(longlong *)(unaff_RBX + 0x658);
  lVar5 = *(longlong *)(unaff_RBX + 0x590);
  *(undefined4 *)(in_R11 + -0x58) = unaff_XMM10_Da;
  *(undefined4 *)(in_R11 + -0x54) = unaff_XMM10_Db;
  *(undefined4 *)(in_R11 + -0x50) = unaff_XMM10_Dc;
  *(undefined4 *)(in_R11 + -0x4c) = unaff_XMM10_Dd;
  *(undefined4 *)(in_R11 + -0x78) = unaff_XMM12_Da;
  *(undefined4 *)(in_R11 + -0x74) = unaff_XMM12_Db;
  *(undefined4 *)(in_R11 + -0x70) = unaff_XMM12_Dc;
  *(undefined4 *)(in_R11 + -0x6c) = unaff_XMM12_Dd;
  bVar2 = *(byte *)(lVar16 + 0xa8);
  cVar3 = *(char *)(lVar5 + 0x25f9);
  *(undefined4 *)(in_R11 + -0x88) = unaff_XMM13_Da;
  *(undefined4 *)(in_R11 + -0x84) = unaff_XMM13_Db;
  *(undefined4 *)(in_R11 + -0x80) = unaff_XMM13_Dc;
  *(undefined4 *)(in_R11 + -0x7c) = unaff_XMM13_Dd;
  *(undefined4 *)(in_R11 + -0x98) = unaff_XMM14_Da;
  *(undefined4 *)(in_R11 + -0x94) = unaff_XMM14_Db;
  *(undefined4 *)(in_R11 + -0x90) = unaff_XMM14_Dc;
  *(undefined4 *)(in_R11 + -0x8c) = unaff_XMM14_Dd;
  *(undefined4 *)(in_R11 + -0xa8) = unaff_XMM15_Da;
  *(undefined4 *)(in_R11 + -0xa4) = unaff_XMM15_Db;
  *(undefined4 *)(in_R11 + -0xa0) = unaff_XMM15_Dc;
  *(undefined4 *)(in_R11 + -0x9c) = unaff_XMM15_Dd;
  if ((bVar2 & 1) == 0) {
    FUN_1802fac00(lVar16,*(longlong *)(lVar16 + 0x10) + 0x70,0xbf800000);
  }
  puVar15 = (uint *)((longlong)cVar3 * 0x100 + *(longlong *)(lVar16 + 0x18));
  do {
    LOCK();
    uVar1 = *puVar15;
    *puVar15 = *puVar15 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  in_stack_00000070 = (float)puVar15[1];
  fStack0000000000000044 = (float)puVar15[2];
  in_stack_00000078 = (float)puVar15[3];
  fStack000000000000004c = (float)puVar15[4];
  in_stack_00000080 = puVar15[5];
  uStack0000000000000054 = puVar15[6];
  in_stack_00000088 = puVar15[7];
  uStack000000000000005c = puVar15[8];
  *puVar15 = 0;
  lVar16 = *(longlong *)(unaff_RBX + 0x658);
  cVar3 = *(char *)(*(longlong *)(unaff_RBX + 0x590) + 0x25fb);
  fStack0000000000000074 = fStack0000000000000044;
  fStack000000000000007c = fStack000000000000004c;
  uStack0000000000000084 = uStack0000000000000054;
  uStack000000000000008c = uStack000000000000005c;
  in_stack_00000090 = in_stack_00000070;
  fStack0000000000000094 = fStack0000000000000044;
  in_stack_00000098 = in_stack_00000078;
  fStack000000000000009c = fStack000000000000004c;
  in_stack_000000a0 = in_stack_00000080;
  uStack00000000000000a4 = uStack0000000000000054;
  in_stack_000000a8 = in_stack_00000088;
  uStack00000000000000ac = uStack000000000000005c;
  if ((*(byte *)(lVar16 + 0xa8) & 1) == 0) {
    FUN_1802fac00(lVar16,*(longlong *)(lVar16 + 0x10) + 0x70,0xbf800000);
  }
  puVar15 = (uint *)((longlong)cVar3 * 0x100 + *(longlong *)(lVar16 + 0x18));
  do {
    LOCK();
    uVar1 = *puVar15;
    *puVar15 = *puVar15 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  fVar6 = (float)puVar15[1];
  fVar7 = (float)puVar15[2];
  fVar8 = (float)puVar15[3];
  fVar9 = (float)puVar15[4];
  fVar10 = (float)puVar15[5];
  fVar11 = (float)puVar15[6];
  fVar12 = (float)puVar15[7];
  uVar1 = puVar15[8];
  *puVar15 = 0;
  lVar16 = *(longlong *)(*(longlong *)(unaff_RBX + 0x6d8) + 0x8a8);
  lVar5 = *(longlong *)(unaff_RBX + 0x728);
  fStack000000000000004c = 3.4028235e+38;
  fVar20 = fVar11 * *(float *)(lVar16 + 0x80) + fVar10 * *(float *)(lVar16 + 0x70) +
           *(float *)(lVar16 + 0xa0);
  fVar18 = fVar10 * *(float *)(lVar16 + 0x74) + fVar11 * *(float *)(lVar16 + 0x84) +
           *(float *)(lVar16 + 0xa4);
  fVar19 = fVar12 * *(float *)(lVar16 + 0x98) + *(float *)(lVar16 + 0xa8);
  fVar21 = fVar6 * fVar8 + fVar6 * fVar8 + fVar7 * fVar9 + fVar7 * fVar9;
  fVar17 = fVar8 * fVar9 - fVar6 * fVar7;
  fVar17 = fVar17 + fVar17;
  fVar23 = 1.0 - (fVar7 * fVar7 + fVar7 * fVar7 + fVar8 * fVar8 + fVar8 * fVar8);
  fVar22 = fVar21 * *(float *)(unaff_RBX + 0x524) + fVar17 * *(float *)(unaff_RBX + 0x534);
  fVar24 = fVar17 * *(float *)(unaff_RBX + 0x530) + fVar21 * *(float *)(unaff_RBX + 0x520);
  fVar17 = unaff_RBP[1];
  fVar21 = unaff_RBP[2];
  fVar13 = unaff_RBP[3];
  *(float *)(lVar5 + 0x50) = *unaff_RBP;
  *(float *)(lVar5 + 0x54) = fVar17;
  *(float *)(lVar5 + 0x58) = fVar21;
  *(float *)(lVar5 + 0x5c) = fVar13;
  fStack0000000000000044 = fVar18;
  in_stack_000000b0 = fVar6;
  fStack00000000000000b4 = fVar7;
  in_stack_000000b8 = fVar8;
  fStack00000000000000bc = fVar9;
  in_stack_000000c0 = fVar10;
  fStack00000000000000c4 = fVar11;
  in_stack_000000c8 = fVar12;
  uStack00000000000000cc = uVar1;
  FUN_18063b470(&stack0x00000060);
  fVar14 = fStack000000000000009c;
  fVar13 = in_stack_00000098;
  fVar21 = fStack0000000000000094;
  fVar17 = in_stack_00000090;
  lVar16 = *(longlong *)(unaff_RBX + 0x728);
  *(float *)(lVar16 + 0x40) =
       fStack000000000000006c * fStack000000000000009c * -1.0 +
       fStack0000000000000068 * in_stack_00000098 * -1.0 +
       (in_stack_00000090 * fStack0000000000000060 - fStack0000000000000064 * fStack0000000000000094
       );
  *(float *)(lVar16 + 0x44) =
       fStack0000000000000068 * fStack000000000000009c * 1.0 +
       fStack0000000000000060 * fStack0000000000000094 * 1.0 +
       (in_stack_00000090 * fStack0000000000000064 - fStack000000000000006c * in_stack_00000098);
  *(float *)(lVar16 + 0x48) =
       fStack000000000000006c * fStack0000000000000094 * 1.0 +
       fStack0000000000000060 * in_stack_00000098 * 1.0 +
       (in_stack_00000090 * fStack0000000000000068 - fStack0000000000000064 * fStack000000000000009c
       );
  *(float *)(lVar16 + 0x4c) =
       fStack0000000000000064 * in_stack_00000098 * 1.0 +
       fStack0000000000000060 * fStack000000000000009c * 1.0 +
       (in_stack_00000090 * fStack000000000000006c - fStack0000000000000068 * fStack0000000000000094
       );
  *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x59c) =
       (unaff_RBP[1] - fVar18) * fVar22 + (*unaff_RBP - fVar20) * fVar24 +
       (unaff_RBP[2] - fVar19) * fVar23;
  *(undefined1 *)(*(longlong *)(unaff_RBX + 0x728) + 0x5ae) = 1;
  lVar16 = *(longlong *)(unaff_RBX + 0x728);
  if (*(float *)(lVar16 + 0x59c) < 0.1) {
    fVar18 = 0.1 - *(float *)(lVar16 + 0x59c);
    *(float *)(lVar16 + 0x54) = fVar22 * fVar18 + *(float *)(lVar16 + 0x54);
    *(float *)(lVar16 + 0x50) = fVar18 * fVar24 + *(float *)(lVar16 + 0x50);
    *(float *)(lVar16 + 0x58) = fVar23 * fVar18 + *(float *)(lVar16 + 0x58);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x728) + 0x59c) = 0x3dcccccd;
    lVar16 = *(longlong *)(unaff_RBX + 0x728);
  }
  FUN_180575360(*(undefined8 *)(unaff_RBX + 0x590),lVar16 + 0x50,lVar16 + 0x40,
                *(float *)(lVar16 + 0x59c) / *(float *)(*(longlong *)(unaff_RBX + 0x6d8) + 0x8c0),
                0x7149f2ca);
  *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x598) = unaff_XMM11_Da;
  *(longlong *)(*(longlong *)(unaff_RBX + 0x728) + 0x578) =
       *(longlong *)
        (&DAT_180c8ed30 + (longlong)*(int *)(*(longlong *)(unaff_RBX + 0x728) + 0x580) * 8) -
       (longlong)(unaff_XMM11_Da * -100000.0);
  lVar16 = *(longlong *)(unaff_RBX + 0x728);
  *(float *)(lVar16 + 0x10) = fVar20;
  *(float *)(lVar16 + 0x14) = fStack0000000000000044;
  *(float *)(lVar16 + 0x18) = fVar19;
  *(float *)(lVar16 + 0x1c) = fStack000000000000004c;
  lVar16 = *(longlong *)(unaff_RBX + 0x728);
  *(float *)(lVar16 + 0xa0) = fVar6;
  *(float *)(lVar16 + 0xa4) = fVar7;
  *(float *)(lVar16 + 0xa8) = fVar8;
  *(float *)(lVar16 + 0xac) = fVar9;
  *(float *)(lVar16 + 0xb0) = fVar10;
  *(float *)(lVar16 + 0xb4) = fVar11;
  *(float *)(lVar16 + 0xb8) = fVar12;
  *(uint *)(lVar16 + 0xbc) = uVar1;
  lVar16 = *(longlong *)(unaff_RBX + 0x728);
  *(float *)(lVar16 + 0x90) = fVar17;
  *(float *)(lVar16 + 0x94) = fVar21;
  *(float *)(lVar16 + 0x98) = fVar13;
  *(float *)(lVar16 + 0x9c) = fVar14;
  FUN_180516bd0(fVar20,0x100,0xc7d5);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000d0 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180515480(undefined8 param_1,uint *param_2)
void FUN_180515480(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  longlong unaff_RBX;
  float *unaff_RBP;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_XMM11_Da;
  float fVar19;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  undefined4 uStack000000000000004c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  float fStack00000000000000b8;
  float fStack00000000000000bc;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  uint uStack00000000000000cc;
  ulonglong in_stack_000000d0;
  
  do {
    LOCK();
    uVar1 = *param_2;
    *param_2 = *param_2 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  fVar3 = (float)param_2[1];
  fVar4 = (float)param_2[2];
  fVar5 = (float)param_2[3];
  fVar6 = (float)param_2[4];
  fVar7 = (float)param_2[5];
  fVar8 = (float)param_2[6];
  fVar9 = (float)param_2[7];
  uVar1 = param_2[8];
  *param_2 = 0;
  lVar10 = *(longlong *)(*(longlong *)(unaff_RBX + 0x6d8) + 0x8a8);
  lVar2 = *(longlong *)(unaff_RBX + 0x728);
  uStack000000000000004c = 0x7f7fffff;
  fVar15 = fVar8 * *(float *)(lVar10 + 0x80) + fVar7 * *(float *)(lVar10 + 0x70) +
           *(float *)(lVar10 + 0xa0);
  fVar13 = fVar7 * *(float *)(lVar10 + 0x74) + fVar8 * *(float *)(lVar10 + 0x84) +
           *(float *)(lVar10 + 0xa4);
  fVar14 = fVar9 * *(float *)(lVar10 + 0x98) + *(float *)(lVar10 + 0xa8);
  fVar16 = fVar3 * fVar5 + fVar3 * fVar5 + fVar4 * fVar6 + fVar4 * fVar6;
  fVar12 = fVar5 * fVar6 - fVar3 * fVar4;
  fVar12 = fVar12 + fVar12;
  fVar18 = 1.0 - (fVar4 * fVar4 + fVar4 * fVar4 + fVar5 * fVar5 + fVar5 * fVar5);
  fVar17 = fVar16 * *(float *)(unaff_RBX + 0x524) + fVar12 * *(float *)(unaff_RBX + 0x534);
  fVar19 = fVar12 * *(float *)(unaff_RBX + 0x530) + fVar16 * *(float *)(unaff_RBX + 0x520);
  fVar12 = unaff_RBP[1];
  fVar16 = unaff_RBP[2];
  fVar11 = unaff_RBP[3];
  *(float *)(lVar2 + 0x50) = *unaff_RBP;
  *(float *)(lVar2 + 0x54) = fVar12;
  *(float *)(lVar2 + 0x58) = fVar16;
  *(float *)(lVar2 + 0x5c) = fVar11;
  fStack0000000000000040 = fVar15;
  fStack0000000000000044 = fVar13;
  fStack0000000000000048 = fVar14;
  fStack00000000000000b0 = fVar3;
  fStack00000000000000b4 = fVar4;
  fStack00000000000000b8 = fVar5;
  fStack00000000000000bc = fVar6;
  fStack00000000000000c0 = fVar7;
  fStack00000000000000c4 = fVar8;
  fStack00000000000000c8 = fVar9;
  uStack00000000000000cc = uVar1;
  FUN_18063b470(&stack0x00000060);
  fVar16 = fStack0000000000000098;
  fVar12 = fStack0000000000000090;
  lVar10 = *(longlong *)(unaff_RBX + 0x728);
  *(float *)(lVar10 + 0x40) =
       fStack000000000000006c * fStack000000000000009c * -1.0 +
       fStack0000000000000068 * fStack0000000000000098 * -1.0 +
       (fStack0000000000000090 * fStack0000000000000060 -
       fStack0000000000000064 * fStack0000000000000094);
  *(float *)(lVar10 + 0x44) =
       fStack0000000000000068 * fStack000000000000009c * 1.0 +
       fStack0000000000000060 * fStack0000000000000094 * 1.0 +
       (fStack0000000000000090 * fStack0000000000000064 -
       fStack000000000000006c * fStack0000000000000098);
  *(float *)(lVar10 + 0x48) =
       fStack000000000000006c * fStack0000000000000094 * 1.0 +
       fStack0000000000000060 * fStack0000000000000098 * 1.0 +
       (fStack0000000000000090 * fStack0000000000000068 -
       fStack0000000000000064 * fStack000000000000009c);
  *(float *)(lVar10 + 0x4c) =
       fStack0000000000000064 * fStack0000000000000098 * 1.0 +
       fStack0000000000000060 * fStack000000000000009c * 1.0 +
       (fStack0000000000000090 * fStack000000000000006c -
       fStack0000000000000068 * fStack0000000000000094);
  *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x59c) =
       (unaff_RBP[1] - fVar13) * fVar17 + (*unaff_RBP - fVar15) * fVar19 +
       (unaff_RBP[2] - fVar14) * fVar18;
  *(undefined1 *)(*(longlong *)(unaff_RBX + 0x728) + 0x5ae) = 1;
  lVar10 = *(longlong *)(unaff_RBX + 0x728);
  if (*(float *)(lVar10 + 0x59c) < 0.1) {
    fVar11 = 0.1 - *(float *)(lVar10 + 0x59c);
    *(float *)(lVar10 + 0x54) = fVar17 * fVar11 + *(float *)(lVar10 + 0x54);
    *(float *)(lVar10 + 0x50) = fVar11 * fVar19 + *(float *)(lVar10 + 0x50);
    *(float *)(lVar10 + 0x58) = fVar18 * fVar11 + *(float *)(lVar10 + 0x58);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x728) + 0x59c) = 0x3dcccccd;
    lVar10 = *(longlong *)(unaff_RBX + 0x728);
  }
  FUN_180575360(*(undefined8 *)(unaff_RBX + 0x590),lVar10 + 0x50,lVar10 + 0x40,
                *(float *)(lVar10 + 0x59c) / *(float *)(*(longlong *)(unaff_RBX + 0x6d8) + 0x8c0),
                0x7149f2ca);
  *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x598) = unaff_XMM11_Da;
  *(longlong *)(*(longlong *)(unaff_RBX + 0x728) + 0x578) =
       *(longlong *)
        (&DAT_180c8ed30 + (longlong)*(int *)(*(longlong *)(unaff_RBX + 0x728) + 0x580) * 8) -
       (longlong)(unaff_XMM11_Da * -100000.0);
  lVar10 = *(longlong *)(unaff_RBX + 0x728);
  *(float *)(lVar10 + 0x10) = fStack0000000000000040;
  *(float *)(lVar10 + 0x14) = fStack0000000000000044;
  *(float *)(lVar10 + 0x18) = fStack0000000000000048;
  *(undefined4 *)(lVar10 + 0x1c) = uStack000000000000004c;
  lVar10 = *(longlong *)(unaff_RBX + 0x728);
  *(float *)(lVar10 + 0xa0) = fVar3;
  *(float *)(lVar10 + 0xa4) = fVar4;
  *(float *)(lVar10 + 0xa8) = fVar5;
  *(float *)(lVar10 + 0xac) = fVar6;
  *(float *)(lVar10 + 0xb0) = fVar7;
  *(float *)(lVar10 + 0xb4) = fVar8;
  *(float *)(lVar10 + 0xb8) = fVar9;
  *(uint *)(lVar10 + 0xbc) = uVar1;
  lVar10 = *(longlong *)(unaff_RBX + 0x728);
  *(float *)(lVar10 + 0x90) = fVar12;
  *(float *)(lVar10 + 0x94) = fStack0000000000000094;
  *(float *)(lVar10 + 0x98) = fVar16;
  *(float *)(lVar10 + 0x9c) = fStack000000000000009c;
  FUN_180516bd0(fStack0000000000000040,0x100,0xc7d5);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000d0 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1805156f4(float param_1,float param_2)
void FUN_1805156f4(float param_1,float param_2)

{
  longlong lVar1;
  longlong in_RDX;
  longlong unaff_RBX;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  undefined4 unaff_XMM12_Da;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  float unaff_XMM13_Da;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  undefined4 unaff_XMM15_Da;
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  undefined1 uStack0000000000000028;
  undefined1 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  ulonglong in_stack_000000d0;
  
  param_2 = param_2 - param_1;
  *(float *)(in_RDX + 0x54) = unaff_XMM9_Da * param_2 + *(float *)(in_RDX + 0x54);
  *(float *)(in_RDX + 0x50) = param_2 * unaff_XMM13_Da + *(float *)(in_RDX + 0x50);
  *(float *)(in_RDX + 0x58) = unaff_XMM10_Da * param_2 + *(float *)(in_RDX + 0x58);
  *(undefined4 *)(*(longlong *)(unaff_RBX + 0x728) + 0x59c) = 0x3dcccccd;
  lVar1 = *(longlong *)(unaff_RBX + 0x728);
  uStack0000000000000038 = *(undefined8 *)(unaff_RBX + 0x658);
  uStack0000000000000030 = *(undefined1 *)(*(longlong *)(unaff_RBX + 0x590) + 0x2600);
  uStack0000000000000028 = 1;
  FUN_180575360(*(longlong *)(unaff_RBX + 0x590),lVar1 + 0x50,lVar1 + 0x40,
                *(float *)(lVar1 + 0x59c) / *(float *)(*(longlong *)(unaff_RBX + 0x6d8) + 0x8c0),
                0x7149f2ca);
  *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x598) = unaff_XMM11_Da;
  *(longlong *)(*(longlong *)(unaff_RBX + 0x728) + 0x578) =
       *(longlong *)
        (&DAT_180c8ed30 + (longlong)*(int *)(*(longlong *)(unaff_RBX + 0x728) + 0x580) * 8) -
       (longlong)(unaff_XMM11_Da * -100000.0);
  lVar1 = *(longlong *)(unaff_RBX + 0x728);
  *(undefined4 *)(lVar1 + 0x10) = uStack0000000000000040;
  *(undefined4 *)(lVar1 + 0x14) = uStack0000000000000044;
  *(undefined4 *)(lVar1 + 0x18) = uStack0000000000000048;
  *(undefined4 *)(lVar1 + 0x1c) = uStack000000000000004c;
  lVar1 = *(longlong *)(unaff_RBX + 0x728);
  *(undefined4 *)(lVar1 + 0xa0) = unaff_XMM12_Da;
  *(undefined4 *)(lVar1 + 0xa4) = unaff_XMM12_Db;
  *(undefined4 *)(lVar1 + 0xa8) = unaff_XMM12_Dc;
  *(undefined4 *)(lVar1 + 0xac) = unaff_XMM12_Dd;
  *(undefined4 *)(lVar1 + 0xb0) = unaff_XMM14_Da;
  *(undefined4 *)(lVar1 + 0xb4) = unaff_XMM14_Db;
  *(undefined4 *)(lVar1 + 0xb8) = unaff_XMM14_Dc;
  *(undefined4 *)(lVar1 + 0xbc) = unaff_XMM14_Dd;
  lVar1 = *(longlong *)(unaff_RBX + 0x728);
  *(undefined4 *)(lVar1 + 0x90) = unaff_XMM15_Da;
  *(undefined4 *)(lVar1 + 0x94) = unaff_XMM15_Db;
  *(undefined4 *)(lVar1 + 0x98) = unaff_XMM15_Dc;
  *(undefined4 *)(lVar1 + 0x9c) = unaff_XMM15_Dd;
  FUN_180516bd0(uStack0000000000000040,0x100,0xc7d5);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000d0 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180515859(void)
void FUN_180515859(void)

{
  ulonglong in_stack_000000d0;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000d0 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



