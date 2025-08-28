#include "TaleWorlds.Native.Split.h"

// 99_part_11_part026.c - 8 个函数

// 函数: void FUN_1806f6090(longlong *param_1,float *param_2)
void FUN_1806f6090(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  longlong lVar6;
  float *pfVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  longlong *plStack_118;
  longlong *plStack_110;
  undefined1 auStack_108 [28];
  undefined1 auStack_ec [204];
  
  lVar6 = param_1[0xd];
  fVar18 = *(float *)(lVar6 + 0x50);
  fVar1 = *(float *)(lVar6 + 100);
  fVar2 = *(float *)(lVar6 + 0x5c);
  fVar3 = *(float *)(lVar6 + 0x60);
  fVar12 = *(float *)(lVar6 + 0x54);
  fVar14 = *(float *)(lVar6 + 0x58);
  (**(code **)(*param_1 + 0x30))(fVar14,&plStack_118,&plStack_110);
  plVar9 = plStack_118;
  fVar24 = 0.0;
  plVar10 = (longlong *)0x0;
  fStack_128 = 0.0;
  fStack_124 = 0.0;
  fStack_120 = 0.0;
  if (plStack_118 != (longlong *)0x0) {
    cVar5 = (**(code **)(*plStack_118 + 0x20))(plStack_118,&UNK_180a05010);
    plVar8 = plVar10;
    if (cVar5 != '\0') {
      plVar8 = plVar9;
    }
    if (plVar8 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plStack_118 + 0x20))(plStack_118,&UNK_180a05010);
      plVar9 = plVar10;
      if (cVar5 != '\0') {
        plVar9 = plStack_118;
      }
      lVar6 = (**(code **)(*plVar9 + 0xd8))(plVar9,auStack_108);
      pfVar7 = (float *)(**(code **)(*plVar9 + 0x90))(plVar9,auStack_ec);
      fVar23 = *(float *)(lVar6 + 0x10) + *(float *)(lVar6 + 0x10);
      fVar19 = *(float *)(lVar6 + 0x14) + *(float *)(lVar6 + 0x14);
      fVar13 = pfVar7[3];
      fVar22 = *(float *)(lVar6 + 0x18) + *(float *)(lVar6 + 0x18);
      fVar20 = pfVar7[1];
      fVar4 = pfVar7[2];
      fVar21 = fVar13 * fVar13 - 0.5;
      fVar17 = *pfVar7;
      fVar16 = fVar17 * fVar23 + fVar20 * fVar19 + fVar4 * fVar22;
      fVar15 = fVar18 - ((fVar20 * fVar22 - fVar4 * fVar19) * fVar13 + fVar21 * fVar23 +
                         fVar17 * fVar16 + pfVar7[4]);
      fVar11 = fVar12 - ((fVar4 * fVar23 - fVar17 * fVar22) * fVar13 + fVar21 * fVar19 +
                         fVar20 * fVar16 + pfVar7[5]);
      fVar13 = fVar14 - ((fVar17 * fVar19 - fVar20 * fVar23) * fVar13 + fVar21 * fVar22 +
                         fVar4 * fVar16 + pfVar7[6]);
      fStack_128 = fVar11 * fVar1 - fVar13 * fVar3;
      fStack_120 = fVar15 * fVar3 - fVar11 * fVar2;
      fStack_124 = fVar13 * fVar2 - fVar15 * fVar1;
    }
  }
  plVar9 = plStack_110;
  fVar13 = -0.0;
  fVar20 = -0.0;
  if (plStack_110 != (longlong *)0x0) {
    cVar5 = (**(code **)(*plStack_110 + 0x20))(plStack_110,&UNK_180a05010);
    plVar8 = plVar10;
    if (cVar5 != '\0') {
      plVar8 = plVar9;
    }
    if (plVar8 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plStack_110 + 0x20))(plStack_110,&UNK_180a05010);
      if (cVar5 != '\0') {
        plVar10 = plStack_110;
      }
      lVar6 = (**(code **)(*plVar10 + 0xd8))(plVar10,auStack_ec);
      pfVar7 = (float *)(**(code **)(*plVar10 + 0x90))(plVar10,auStack_108);
      fVar19 = *(float *)(lVar6 + 0x10) + *(float *)(lVar6 + 0x10);
      fVar11 = *(float *)(lVar6 + 0x14) + *(float *)(lVar6 + 0x14);
      fVar24 = pfVar7[3];
      fVar16 = *(float *)(lVar6 + 0x18) + *(float *)(lVar6 + 0x18);
      fVar13 = pfVar7[1];
      fVar20 = pfVar7[2];
      fVar15 = fVar24 * fVar24 - 0.5;
      fVar4 = *pfVar7;
      fVar17 = fVar4 * fVar19 + fVar13 * fVar11 + fVar20 * fVar16;
      fVar18 = fVar18 - ((fVar13 * fVar16 - fVar20 * fVar11) * fVar24 + fVar15 * fVar19 +
                         fVar4 * fVar17 + pfVar7[4]);
      fVar12 = fVar12 - ((fVar20 * fVar19 - fVar4 * fVar16) * fVar24 + fVar15 * fVar11 +
                         fVar13 * fVar17 + pfVar7[5]);
      fVar14 = fVar14 - ((fVar4 * fVar11 - fVar13 * fVar19) * fVar24 + fVar15 * fVar16 +
                         fVar20 * fVar17 + pfVar7[6]);
      fVar20 = fVar14 * fVar3 - fVar12 * fVar1;
      fVar24 = fVar18 * fVar3 - fVar12 * fVar2;
      fVar13 = fVar18 * fVar1 - fVar14 * fVar2;
    }
  }
  *param_2 = fVar2;
  param_2[1] = fVar3;
  param_2[2] = fVar1;
  param_2[6] = fStack_128;
  param_2[7] = fStack_124;
  param_2[8] = fStack_120;
  param_2[3] = -fVar2;
  param_2[4] = -fVar3;
  param_2[5] = -fVar1;
  param_2[9] = fVar20;
  param_2[10] = fVar13;
  param_2[0xb] = -fVar24;
  return;
}






// 函数: void FUN_1806f619c(void)
void FUN_1806f619c(void)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  float *pfVar4;
  longlong *plVar5;
  longlong *unaff_RBX;
  float *unaff_RSI;
  longlong *unaff_R14;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  longlong *in_stack_00000038;
  float in_stack_00000150;
  float in_stack_00000158;
  float in_stack_00000160;
  float in_stack_00000168;
  
  cVar2 = (**(code **)(*unaff_RBX + 0x20))();
  plVar5 = (longlong *)((ulonglong)unaff_R14 & 0xffffffff);
  if (cVar2 != '\0') {
    plVar5 = unaff_RBX;
  }
  lVar3 = (**(code **)(*plVar5 + 0xd8))(plVar5,&stack0x00000040);
  pfVar4 = (float *)(**(code **)(*plVar5 + 0x90))(plVar5,&stack0x0000005c);
  fVar15 = *(float *)(lVar3 + 0x10) + *(float *)(lVar3 + 0x10);
  fVar11 = *(float *)(lVar3 + 0x14) + *(float *)(lVar3 + 0x14);
  fVar7 = pfVar4[3];
  fVar14 = *(float *)(lVar3 + 0x18) + *(float *)(lVar3 + 0x18);
  fVar10 = pfVar4[1];
  fVar12 = pfVar4[2];
  fVar13 = fVar7 * fVar7 - unaff_XMM12_Da;
  fVar1 = *pfVar4;
  fVar9 = fVar1 * fVar15 + fVar10 * fVar11 + fVar12 * fVar14;
  fVar8 = in_stack_00000150 -
          ((fVar10 * fVar14 - fVar12 * fVar11) * fVar7 + fVar13 * fVar15 + fVar1 * fVar9 + pfVar4[4]
          );
  fVar6 = in_stack_00000158 -
          ((fVar12 * fVar15 - fVar1 * fVar14) * fVar7 + fVar13 * fVar11 + fVar10 * fVar9 + pfVar4[5]
          );
  fVar7 = in_stack_00000160 -
          ((fVar1 * fVar11 - fVar10 * fVar15) * fVar7 + fVar13 * fVar14 + fVar12 * fVar9 + pfVar4[6]
          );
  fVar10 = -0.0;
  fVar12 = -0.0;
  if (in_stack_00000038 != (longlong *)0x0) {
    cVar2 = (**(code **)(*in_stack_00000038 + 0x20))(in_stack_00000038,&UNK_180a05010);
    plVar5 = unaff_R14;
    if (cVar2 != '\0') {
      plVar5 = in_stack_00000038;
    }
    if (plVar5 != (longlong *)0x0) {
      cVar2 = (**(code **)(*in_stack_00000038 + 0x20))(in_stack_00000038,&UNK_180a05010);
      if (cVar2 != '\0') {
        unaff_R14 = in_stack_00000038;
      }
      lVar3 = (**(code **)(*unaff_R14 + 0xd8))(unaff_R14,&stack0x0000005c);
      pfVar4 = (float *)(**(code **)(*unaff_R14 + 0x90))(unaff_R14,&stack0x00000040);
      fVar16 = *(float *)(lVar3 + 0x10) + *(float *)(lVar3 + 0x10);
      fVar13 = *(float *)(lVar3 + 0x14) + *(float *)(lVar3 + 0x14);
      fVar10 = pfVar4[3];
      fVar15 = *(float *)(lVar3 + 0x18) + *(float *)(lVar3 + 0x18);
      fVar12 = pfVar4[1];
      fVar1 = pfVar4[2];
      fVar14 = fVar10 * fVar10 - 0.5;
      fVar9 = *pfVar4;
      fVar11 = fVar9 * fVar16 + fVar12 * fVar13 + fVar1 * fVar15;
      in_stack_00000150 =
           in_stack_00000150 -
           ((fVar12 * fVar15 - fVar1 * fVar13) * fVar10 + fVar14 * fVar16 + fVar9 * fVar11 +
           pfVar4[4]);
      in_stack_00000158 =
           in_stack_00000158 -
           ((fVar1 * fVar16 - fVar9 * fVar15) * fVar10 + fVar14 * fVar13 + fVar12 * fVar11 +
           pfVar4[5]);
      in_stack_00000160 =
           in_stack_00000160 -
           ((fVar9 * fVar13 - fVar12 * fVar16) * fVar10 + fVar14 * fVar15 + fVar1 * fVar11 +
           pfVar4[6]);
      fVar12 = in_stack_00000160 * unaff_XMM15_Da - in_stack_00000158 * in_stack_00000168;
      unaff_XMM13_Da = in_stack_00000150 * unaff_XMM15_Da - in_stack_00000158 * unaff_XMM14_Da;
      fVar10 = in_stack_00000150 * in_stack_00000168 - in_stack_00000160 * unaff_XMM14_Da;
    }
  }
  *unaff_RSI = unaff_XMM14_Da;
  unaff_RSI[1] = unaff_XMM15_Da;
  unaff_RSI[2] = in_stack_00000168;
  unaff_RSI[6] = fVar6 * in_stack_00000168 - fVar7 * unaff_XMM15_Da;
  unaff_RSI[7] = fVar7 * unaff_XMM14_Da - fVar8 * in_stack_00000168;
  unaff_RSI[8] = fVar8 * unaff_XMM15_Da - fVar6 * unaff_XMM14_Da;
  unaff_RSI[3] = -unaff_XMM14_Da;
  unaff_RSI[4] = -unaff_XMM15_Da;
  unaff_RSI[5] = -in_stack_00000168;
  unaff_RSI[9] = fVar12;
  unaff_RSI[10] = fVar10;
  unaff_RSI[0xb] = -unaff_XMM13_Da;
  return;
}






// 函数: void FUN_1806f635b(void)
void FUN_1806f635b(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  float *pfVar5;
  longlong *plVar6;
  float *unaff_RSI;
  longlong *unaff_R14;
  float fVar7;
  float fVar8;
  float unaff_XMM7_Da;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fStackX_20;
  float fStackX_24;
  float in_stack_00000028;
  longlong *in_stack_00000038;
  float in_stack_00000150;
  float in_stack_00000158;
  float in_stack_00000160;
  float in_stack_00000168;
  
  fVar8 = -0.0;
  fVar9 = -0.0;
  if (in_stack_00000038 != (longlong *)0x0) {
    cVar3 = (**(code **)(*in_stack_00000038 + 0x20))(in_stack_00000038,&UNK_180a05010);
    plVar6 = unaff_R14;
    if (cVar3 != '\0') {
      plVar6 = in_stack_00000038;
    }
    if (plVar6 != (longlong *)0x0) {
      cVar3 = (**(code **)(*in_stack_00000038 + 0x20))(in_stack_00000038,&UNK_180a05010);
      if (cVar3 != '\0') {
        unaff_R14 = in_stack_00000038;
      }
      lVar4 = (**(code **)(*unaff_R14 + 0xd8))(unaff_R14,&stack0x0000005c);
      pfVar5 = (float *)(**(code **)(*unaff_R14 + 0x90))(unaff_R14,&stack0x00000040);
      fVar13 = *(float *)(lVar4 + 0x10) + *(float *)(lVar4 + 0x10);
      fVar10 = *(float *)(lVar4 + 0x14) + *(float *)(lVar4 + 0x14);
      fVar8 = pfVar5[3];
      fVar12 = *(float *)(lVar4 + 0x18) + *(float *)(lVar4 + 0x18);
      fVar9 = pfVar5[1];
      fVar1 = pfVar5[2];
      fVar11 = fVar8 * fVar8 - unaff_XMM12_Da;
      fVar2 = *pfVar5;
      fVar7 = fVar2 * fVar13 + fVar9 * fVar10 + fVar1 * fVar12;
      in_stack_00000150 =
           in_stack_00000150 -
           ((fVar9 * fVar12 - fVar1 * fVar10) * fVar8 + fVar11 * fVar13 + fVar2 * fVar7 + pfVar5[4])
      ;
      in_stack_00000158 =
           in_stack_00000158 -
           ((fVar1 * fVar13 - fVar2 * fVar12) * fVar8 + fVar11 * fVar10 + fVar9 * fVar7 + pfVar5[5])
      ;
      in_stack_00000160 =
           in_stack_00000160 -
           ((fVar2 * fVar10 - fVar9 * fVar13) * fVar8 + fVar11 * fVar12 + fVar1 * fVar7 + pfVar5[6])
      ;
      fVar9 = in_stack_00000160 * unaff_XMM15_Da - in_stack_00000158 * in_stack_00000168;
      unaff_XMM13_Da = in_stack_00000150 * unaff_XMM15_Da - in_stack_00000158 * unaff_XMM14_Da;
      fVar8 = in_stack_00000150 * in_stack_00000168 - in_stack_00000160 * unaff_XMM14_Da;
      unaff_XMM7_Da = in_stack_00000168;
    }
  }
  *unaff_RSI = unaff_XMM14_Da;
  unaff_RSI[1] = unaff_XMM15_Da;
  unaff_RSI[2] = unaff_XMM7_Da;
  unaff_RSI[6] = fStackX_20;
  unaff_RSI[7] = fStackX_24;
  unaff_RSI[8] = in_stack_00000028;
  unaff_RSI[3] = -unaff_XMM14_Da;
  unaff_RSI[4] = -unaff_XMM15_Da;
  unaff_RSI[5] = -unaff_XMM7_Da;
  unaff_RSI[9] = fVar9;
  unaff_RSI[10] = fVar8;
  unaff_RSI[0xb] = -unaff_XMM13_Da;
  return;
}



bool FUN_1806f6610(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0xd0))(param_2,param_3,param_4,param_1 + 0x18,0x180be1230,0x80);
  *(longlong *)(param_1 + 0x60) = lVar1;
  return lVar1 != 0;
}



undefined8
FUN_1806f66a0(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,longlong param_6,longlong param_7,undefined8 param_8,
             undefined4 *param_9,undefined4 *param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  *param_9 = *(undefined4 *)(param_5 + 0x50);
  param_9[1] = *(undefined4 *)(param_5 + 0x54);
  param_9[2] = *(undefined4 *)(param_5 + 0x58);
  *param_10 = *(undefined4 *)(param_5 + 0x50);
  param_10[1] = *(undefined4 *)(param_5 + 0x54);
  param_10[2] = *(undefined4 *)(param_5 + 0x58);
  fVar5 = *(float *)(param_5 + 0x58) - *(float *)(param_6 + 0x18);
  fVar7 = *(float *)(param_5 + 0x50) - *(float *)(param_6 + 0x10);
  fVar6 = *(float *)(param_5 + 0x54) - *(float *)(param_6 + 0x14);
  fVar10 = *(float *)(param_5 + 0x50) - *(float *)(param_7 + 0x10);
  fVar8 = *(float *)(param_5 + 0x58) - *(float *)(param_7 + 0x18);
  fVar9 = *(float *)(param_5 + 0x54) - *(float *)(param_7 + 0x14);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *param_1 = *(undefined4 *)(param_5 + 0x5c);
  param_1[1] = *(undefined4 *)(param_5 + 0x60);
  param_1[2] = *(undefined4 *)(param_5 + 100);
  param_1[8] = *(undefined4 *)(param_5 + 0x5c);
  param_1[9] = *(undefined4 *)(param_5 + 0x60);
  param_1[10] = *(undefined4 *)(param_5 + 100);
  fVar1 = *(float *)(param_5 + 0x5c);
  fVar2 = *(float *)(param_5 + 0x5c);
  fVar3 = *(float *)(param_5 + 0x60);
  fVar4 = *(float *)(param_5 + 100);
  param_1[4] = fVar6 * *(float *)(param_5 + 100) - fVar5 * *(float *)(param_5 + 0x60);
  param_1[6] = fVar7 * fVar3 - fVar6 * fVar2;
  param_1[5] = fVar5 * fVar1 - fVar7 * fVar4;
  fVar1 = *(float *)(param_5 + 0x5c);
  fVar2 = *(float *)(param_5 + 0x5c);
  fVar3 = *(float *)(param_5 + 0x60);
  fVar4 = *(float *)(param_5 + 100);
  param_1[0xc] = fVar9 * *(float *)(param_5 + 100) - fVar8 * *(float *)(param_5 + 0x60);
  param_1[0xe] = fVar10 * fVar3 - fVar9 * fVar2;
  param_1[0xd] = fVar8 * fVar1 - fVar10 * fVar4;
  param_1[3] = *(undefined4 *)(param_5 + 0x68);
  param_1[0xb] = 0;
  param_1[0xf] = 0x7f7fffff;
  param_1[7] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x10;
  param_1[0x10] = *(undefined4 *)(param_5 + 0x6c);
  param_1[0x11] = *(undefined4 *)(param_5 + 0x70);
  return 1;
}



undefined8 *
FUN_1806f6880(undefined8 *param_1,undefined2 param_2,undefined2 *param_3,undefined8 param_4,
             float *param_5,undefined8 param_6,float *param_7,int param_8)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [160];
  
  puVar7 = (undefined4 *)0x0;
  uVar1 = *param_3;
  *(undefined2 *)(param_1 + 1) = param_2;
  *(undefined2 *)((longlong)param_1 + 10) = uVar1;
  *param_1 = &UNK_18094e8b0;
  param_1[3] = &UNK_18094ea08;
  param_1[4] = 0;
  param_1[0xc] = 0;
  param_1[2] = 0;
  if (param_8 != 0) {
    plVar6 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    puVar7 = (undefined4 *)
             (**(code **)(*plVar6 + 8))(plVar6,param_8,&UNK_18094a258,&UNK_18094d010,0x1c6);
  }
  fVar11 = param_5[1];
  fVar13 = *param_5;
  fVar16 = param_5[2];
  fVar12 = param_5[3];
  fVar15 = param_5[4];
  fVar17 = param_5[6];
  fVar14 = 1.0 / SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar16 * fVar16 + fVar12 * fVar12);
  fVar18 = param_5[5];
  *(float *)(param_1 + 5) = fVar13 * fVar14;
  *(float *)((longlong)param_1 + 0x2c) = fVar11 * fVar14;
  *(float *)(param_1 + 6) = fVar16 * fVar14;
  *(float *)((longlong)param_1 + 0x34) = fVar12 * fVar14;
  *(float *)(param_1 + 7) = fVar15;
  *(float *)(param_1 + 8) = fVar17;
  *(float *)((longlong)param_1 + 0x3c) = fVar18;
  fVar11 = param_7[1];
  fVar13 = *param_7;
  fVar16 = param_7[2];
  fVar12 = param_7[3];
  fVar15 = param_7[5];
  fVar17 = param_7[6];
  fVar14 = 1.0 / SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar16 * fVar16 + fVar12 * fVar12);
  fVar18 = param_7[4];
  *(float *)((longlong)param_1 + 0x44) = fVar13 * fVar14;
  *(float *)(param_1 + 9) = fVar11 * fVar14;
  *(float *)((longlong)param_1 + 0x4c) = fVar16 * fVar14;
  *(float *)(param_1 + 10) = fVar12 * fVar14;
  *(float *)((longlong)param_1 + 0x54) = fVar18;
  *(float *)(param_1 + 0xb) = fVar15;
  *(float *)((longlong)param_1 + 0x5c) = fVar17;
  pfVar8 = (float *)FUN_1806dfd60(param_1,auStack_a8,param_4);
  fVar11 = *pfVar8;
  fVar13 = pfVar8[1];
  fStack_c8 = -fVar11;
  fStack_c4 = -fVar13;
  fStack_bc = pfVar8[3];
  fVar16 = pfVar8[2];
  fStack_c0 = -fVar16;
  fVar18 = (param_5[4] - pfVar8[4]) + (param_5[4] - pfVar8[4]);
  fVar17 = (param_5[5] - pfVar8[5]) + (param_5[5] - pfVar8[5]);
  fVar20 = (param_5[6] - pfVar8[6]) + (param_5[6] - pfVar8[6]);
  fVar15 = fStack_bc * fStack_bc - 0.5;
  fVar12 = fVar13 * fVar17 + fVar18 * fVar11 + fVar16 * fVar20;
  fVar19 = (fVar16 * fVar17 - fVar13 * fVar20) * fStack_bc;
  fVar14 = (fVar11 * fVar20 - fVar16 * fVar18) * fStack_bc;
  fVar21 = (fVar13 * fVar18 - fVar11 * fVar17) * fStack_bc;
  puVar9 = (undefined4 *)FUN_1800fcb90(&fStack_c8,auStack_b8,param_5);
  uVar2 = puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  puVar7[4] = *puVar9;
  puVar7[5] = uVar2;
  puVar7[6] = uVar3;
  puVar7[7] = uVar4;
  puVar7[8] = fVar19 + fVar15 * fVar18 + fVar11 * fVar12;
  puVar7[9] = fVar14 + fVar15 * fVar17 + fVar13 * fVar12;
  puVar7[10] = fVar21 + fVar15 * fVar20 + fVar16 * fVar12;
  pfVar8 = (float *)FUN_1806dfd60(param_1,auStack_a8,param_6);
  fStack_c8 = -*pfVar8;
  fStack_c4 = -pfVar8[1];
  fStack_bc = pfVar8[3];
  fStack_c0 = -pfVar8[2];
  fVar15 = (param_7[4] - pfVar8[4]) + (param_7[4] - pfVar8[4]);
  fVar12 = (param_7[5] - pfVar8[5]) + (param_7[5] - pfVar8[5]);
  fVar14 = (param_7[6] - pfVar8[6]) + (param_7[6] - pfVar8[6]);
  fVar16 = fStack_bc * fStack_bc - 0.5;
  fVar13 = fStack_c4 * fVar12 + fStack_c8 * fVar15 + fStack_c0 * fVar14;
  fVar11 = fStack_c8 * fVar13;
  fVar18 = (fStack_c4 * fVar14 - fStack_c0 * fVar12) * fStack_bc;
  fVar19 = fStack_c0 * fVar13;
  fVar13 = fStack_c4 * fVar13;
  fVar17 = (fStack_c0 * fVar15 - fStack_c8 * fVar14) * fStack_bc;
  fVar20 = (fStack_c8 * fVar12 - fStack_c4 * fVar15) * fStack_bc;
  puVar10 = (undefined8 *)FUN_1800fcb90(&fStack_c8,auStack_b8,param_7);
  uVar5 = puVar10[1];
  *(undefined8 *)(puVar7 + 0xb) = *puVar10;
  *(undefined8 *)(puVar7 + 0xd) = uVar5;
  puVar7[0xf] = fVar18 + fVar16 * fVar15 + fVar11;
  puVar7[0x10] = fVar17 + fVar16 * fVar12 + fVar13;
  puVar7[0x11] = fVar20 + fVar16 * fVar14 + fVar19;
  *puVar7 = 0x3f800000;
  puVar7[1] = 0x3f800000;
  puVar7[2] = 0x3f800000;
  puVar7[3] = 0x3f800000;
  param_1[0xd] = puVar7;
  return param_1;
}






// 函数: void FUN_1806f6db0(undefined8 *param_1)
void FUN_1806f6db0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &UNK_18094e8b0;
  param_1[3] = &UNK_18094ea08;
  if ((*(byte *)((longlong)param_1 + 10) & 1) != 0) {
    lVar1 = param_1[0xd];
    if (lVar1 != 0) {
      plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
    }
    param_1[0xd] = 0;
  }
  param_1[3] = &UNK_18094a0b8;
  *param_1 = &UNK_18094cba8;
  return;
}






// 函数: void FUN_1806f6dd4(longlong param_1)
void FUN_1806f6dd4(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *unaff_RBX;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  unaff_RBX[0xd] = 0;
  unaff_RBX[3] = &UNK_18094a0b8;
  *unaff_RBX = &UNK_18094cba8;
  return;
}






// 函数: void FUN_1806f6e02(void)
void FUN_1806f6e02(void)

{
  undefined8 *unaff_RBX;
  
  unaff_RBX[3] = &UNK_18094a0b8;
  *unaff_RBX = &UNK_18094cba8;
  return;
}



longlong FUN_1806f6e30(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  FUN_1806f6db0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        plVar1 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
        return param_1;
      }
    }
    else {
      _guard_check_icall(param_1,0x70);
    }
  }
  return param_1;
}



undefined8 FUN_1806f6ec0(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = strcmp();
  if (iVar2 != 0) {
    lVar3 = 0;
    lVar4 = lVar3;
    do {
      pcVar1 = &UNK_18094cbd0 + lVar4;
      lVar4 = lVar4 + 1;
      if (*pcVar1 != *(char *)(param_2 + -1 + lVar4)) {
        do {
          lVar4 = lVar3 + 1;
          if (*(char *)(param_2 + lVar3) != (&UNK_18094cb9c)[lVar3]) {
            return 0;
          }
          lVar3 = lVar4;
        } while (lVar4 != 7);
        return 1;
      }
    } while (lVar4 != 8);
  }
  return 1;
}



int FUN_1806f7040(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_4 * 0x28 + 0x14;
  iVar1 = (((200 - param_3) * iVar2 + param_2) * 3) / 0xc80;
  iVar2 = ((param_1 * 4 - iVar2) * 0x1e0) / ((int)(48000 / (longlong)param_3) + 0xf0) + iVar2;
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  if (param_4 * 8 + 4 < iVar2) {
    if (0x101 < iVar2) {
      iVar2 = 0x101;
    }
    return iVar2;
  }
  return 0;
}



int FUN_1806f70e0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 1;
  piVar1 = (int *)0x180be1264;
  do {
    if (param_1 < *piVar1) break;
    iVar5 = iVar5 + 1;
    piVar1 = piVar1 + 5;
  } while ((longlong)piVar1 < 0x180be12dc);
  lVar4 = (longlong)(param_3 + param_5 * 2);
  lVar3 = (longlong)iVar5;
  iVar2 = *(int *)(lVar3 * 0x14 + 0x180be123c);
  piVar1 = (int *)((lVar4 + -4 + lVar3 * 5) * 4 + 0x180be1250);
  if (iVar5 == 7) {
    iVar5 = (param_1 - iVar2) / 2 + *piVar1;
  }
  else {
    iVar5 = *(int *)(lVar3 * 0x14 + 0x180be1250);
    iVar5 = ((iVar5 - param_1) * *piVar1 +
            *(int *)((lVar4 + 1 + lVar3 * 5) * 4 + 0x180be1250) * (param_1 - iVar2)) /
            (iVar5 - iVar2);
  }
  iVar2 = iVar5 + 100;
  if (param_4 != 0) {
    iVar2 = iVar5;
  }
  iVar5 = iVar2 + 300;
  if (param_2 != 0x450) {
    iVar5 = iVar2;
  }
  return iVar5;
}



float FUN_1806f71d0(longlong param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar11 = 0.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  param_3 = param_3 / param_2;
  iVar10 = param_3;
  if (param_3 < 0x32) {
    iVar10 = 0x32;
  }
  fVar15 = 1.0 - 25.0 / (float)iVar10;
  if (0 < param_2 + -3) {
    pfVar8 = (float *)(param_1 + 8);
    lVar9 = ((longlong)(param_2 + -3) - 1U >> 2) + 1;
    do {
      fVar12 = pfVar8[-2];
      fVar1 = *pfVar8;
      fVar2 = pfVar8[1];
      fVar3 = pfVar8[-1];
      fVar4 = pfVar8[3];
      fVar5 = pfVar8[2];
      fVar6 = pfVar8[4];
      fVar7 = pfVar8[5];
      pfVar8 = pfVar8 + 8;
      fVar13 = fVar13 + fVar6 * fVar6 + fVar12 * fVar12 + fVar1 * fVar1 + fVar5 * fVar5;
      fVar14 = fVar14 + fVar7 * fVar6 + fVar3 * fVar12 + fVar2 * fVar1 + fVar4 * fVar5;
      fVar11 = fVar11 + fVar7 * fVar7 + fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  fVar11 = (fVar11 - param_4[2]) * fVar15 + param_4[2];
  fVar13 = (fVar13 - *param_4) * fVar15 + *param_4;
  fVar14 = (fVar14 - param_4[1]) * fVar15 + param_4[1];
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  param_4[2] = fVar11;
  fVar15 = fVar11;
  if (fVar11 <= fVar13) {
    fVar15 = fVar13;
  }
  *param_4 = fVar13;
  param_4[1] = fVar14;
  if (fVar15 <= 0.0008) {
    fVar11 = param_4[4];
  }
  else {
    fVar12 = SQRT(SQRT(fVar13));
    fVar15 = SQRT(SQRT(fVar11));
    fVar13 = SQRT(fVar11) * SQRT(fVar13);
    fVar11 = fVar13;
    if (fVar14 <= fVar13) {
      fVar11 = fVar14;
    }
    param_4[1] = fVar11;
    fVar11 = fVar11 / (fVar13 + 1e-15);
    fVar13 = (SQRT(1.0 - fVar11 * fVar11) * (ABS(fVar12 - fVar15) / (fVar12 + 1e-15 + fVar15)) -
             param_4[3]) * (1.0 / (float)param_3) + param_4[3];
    fVar11 = param_4[4] - (1.0 / (float)param_3) * 0.02;
    param_4[3] = fVar13;
    if (fVar11 <= fVar13) {
      fVar11 = fVar13;
    }
    param_4[4] = fVar11;
  }
  fVar11 = fVar11 * 20.0;
  if (1.0 <= fVar11) {
    fVar11 = 1.0;
  }
  return fVar11;
}






// 函数: void FUN_1806f7219(undefined8 param_1,float param_2,int param_3,float *param_4)
void FUN_1806f7219(undefined8 param_1,float param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong in_RAX;
  float *pfVar5;
  longlong lVar6;
  int iVar7;
  int in_R10D;
  longlong in_R11;
  float fVar8;
  float unaff_XMM8_Da;
  float fVar9;
  float fVar10;
  float unaff_XMM9_Da;
  float fVar11;
  float unaff_XMM10_Da;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  undefined4 unaff_XMM12_Da;
  float fVar12;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  float unaff_XMM13_Da;
  
  *(undefined4 *)(in_RAX + -0x68) = unaff_XMM11_Da;
  *(undefined4 *)(in_RAX + -100) = unaff_XMM11_Db;
  *(undefined4 *)(in_RAX + -0x60) = unaff_XMM11_Dc;
  *(undefined4 *)(in_RAX + -0x5c) = unaff_XMM11_Dd;
  *(undefined4 *)(in_RAX + -0x78) = unaff_XMM12_Da;
  *(undefined4 *)(in_RAX + -0x74) = unaff_XMM12_Db;
  *(undefined4 *)(in_RAX + -0x70) = unaff_XMM12_Dc;
  *(undefined4 *)(in_RAX + -0x6c) = unaff_XMM12_Dd;
  param_3 = param_3 / in_R10D;
  iVar7 = param_3;
  if (param_3 < 0x32) {
    iVar7 = 0x32;
  }
  fVar12 = unaff_XMM13_Da - param_2 / (float)iVar7;
  if (0 < in_R10D + -3) {
    pfVar5 = (float *)(in_R11 + 8);
    lVar6 = ((longlong)(in_R10D + -3) - 1U >> 2) + 1;
    do {
      fVar9 = pfVar5[-2];
      fVar11 = *pfVar5;
      fVar8 = pfVar5[1];
      fVar10 = pfVar5[-1];
      fVar1 = pfVar5[3];
      fVar2 = pfVar5[2];
      fVar3 = pfVar5[4];
      fVar4 = pfVar5[5];
      pfVar5 = pfVar5 + 8;
      unaff_XMM9_Da =
           unaff_XMM9_Da + fVar3 * fVar3 + fVar9 * fVar9 + fVar11 * fVar11 + fVar2 * fVar2;
      unaff_XMM10_Da =
           unaff_XMM10_Da + fVar4 * fVar3 + fVar10 * fVar9 + fVar8 * fVar11 + fVar1 * fVar2;
      unaff_XMM8_Da =
           unaff_XMM8_Da + fVar4 * fVar4 + fVar10 * fVar10 + fVar8 * fVar8 + fVar1 * fVar1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  fVar9 = (unaff_XMM8_Da - param_4[2]) * fVar12 + param_4[2];
  fVar11 = (unaff_XMM9_Da - *param_4) * fVar12 + *param_4;
  fVar12 = (unaff_XMM10_Da - param_4[1]) * fVar12 + param_4[1];
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  param_4[2] = fVar9;
  fVar8 = fVar9;
  if (fVar9 <= fVar11) {
    fVar8 = fVar11;
  }
  *param_4 = fVar11;
  param_4[1] = fVar12;
  if (0.0008 < fVar8) {
    fVar10 = SQRT(SQRT(fVar11));
    fVar8 = SQRT(SQRT(fVar9));
    fVar11 = SQRT(fVar9) * SQRT(fVar11);
    fVar9 = fVar11;
    if (fVar12 <= fVar11) {
      fVar9 = fVar12;
    }
    param_4[1] = fVar9;
    fVar9 = fVar9 / (fVar11 + 1e-15);
    fVar9 = (SQRT(unaff_XMM13_Da - fVar9 * fVar9) * (ABS(fVar10 - fVar8) / (fVar10 + 1e-15 + fVar8))
            - param_4[3]) * (unaff_XMM13_Da / (float)param_3) + param_4[3];
    fVar12 = param_4[4] - (unaff_XMM13_Da / (float)param_3) * 0.02;
    param_4[3] = fVar9;
    if (fVar12 <= fVar9) {
      fVar12 = fVar9;
    }
    param_4[4] = fVar12;
  }
  return;
}






// 函数: void FUN_1806f7393(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)
void FUN_1806f7393(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float unaff_XMM8_Da;
  float fVar4;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM13_Da;
  
  fVar4 = SQRT(SQRT(unaff_XMM9_Da));
  fVar3 = SQRT(SQRT(unaff_XMM8_Da));
  fVar1 = SQRT(unaff_XMM8_Da) * SQRT(unaff_XMM9_Da);
  fVar2 = fVar1;
  if (unaff_XMM10_Da <= fVar1) {
    fVar2 = unaff_XMM10_Da;
  }
  *(float *)(param_4 + 4) = fVar2;
  fVar2 = fVar2 / (fVar1 + 1e-15);
  fVar1 = (SQRT(unaff_XMM13_Da - fVar2 * fVar2) * (ABS(fVar4 - fVar3) / (fVar4 + 1e-15 + fVar3)) -
          *(float *)(param_4 + 0xc)) * (unaff_XMM13_Da / (float)param_2) + *(float *)(param_4 + 0xc)
  ;
  fVar2 = *(float *)(param_4 + 0x10) - (unaff_XMM13_Da / (float)param_2) * 0.02;
  *(float *)(param_4 + 0xc) = fVar1;
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  *(float *)(param_4 + 0x10) = fVar2;
  return;
}






