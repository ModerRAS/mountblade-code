#include "TaleWorlds.Native.Split.h"

// 03_rendering_part198.c - 10 个函数

// 函数: void FUN_180382d5a(undefined8 param_1,longlong param_2)
void FUN_180382d5a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong in_RAX;
  float *pfVar3;
  longlong lVar4;
  longlong unaff_RBX;
  undefined8 *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar5;
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
  undefined1 auStackX_20 [8];
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  
  lVar4 = *(longlong *)(param_2 + 0x20);
  cVar2 = (**(code **)(in_RAX + 0x70))();
  uVar5 = extraout_XMM0_Da;
  if ((((cVar2 != '\0') && (*(char *)(lVar4 + 0x2a62) != '\0')) &&
      ((*(byte *)(unaff_RBX + 0x2e8) & 0x10) == 0)) &&
     (cVar2 = (**(code **)(*(longlong *)*unaff_RDI + 0x78))(), uVar5 = extraout_XMM0_Da_00,
     cVar2 != '\0')) {
    (**(code **)(*(longlong *)*unaff_RDI + 200))((longlong *)*unaff_RDI,&stack0x00000030);
    fVar6 = SQRT(*(float *)(unaff_RBX + 0x70) * *(float *)(unaff_RBX + 0x70) +
                 *(float *)(unaff_RBX + 0x74) * *(float *)(unaff_RBX + 0x74) +
                 *(float *)(unaff_RBX + 0x78) * *(float *)(unaff_RBX + 0x78));
    fVar12 = SQRT(*(float *)(unaff_RBX + 0x80) * *(float *)(unaff_RBX + 0x80) +
                  *(float *)(unaff_RBX + 0x84) * *(float *)(unaff_RBX + 0x84) +
                  *(float *)(unaff_RBX + 0x88) * *(float *)(unaff_RBX + 0x88));
    fVar13 = fStack0000000000000030 * 0.0;
    fVar14 = fStack0000000000000034 * 0.0;
    fVar15 = fStack0000000000000038 * 0.0;
    fVar16 = fStack000000000000003c * 0.0;
    fVar7 = fStack0000000000000040 * 0.0;
    fVar8 = fStack0000000000000044 * 0.0;
    fVar9 = fStack0000000000000048 * 0.0;
    fVar10 = fStack000000000000004c * 0.0;
    fVar11 = SQRT(*(float *)(unaff_RBX + 0x90) * *(float *)(unaff_RBX + 0x90) +
                  *(float *)(unaff_RBX + 0x94) * *(float *)(unaff_RBX + 0x94) +
                  *(float *)(unaff_RBX + 0x98) * *(float *)(unaff_RBX + 0x98));
    fStack0000000000000030 = fVar6 * fStack0000000000000030 + fVar7 + fStack0000000000000050 * 0.0;
    fStack0000000000000034 = fVar6 * fStack0000000000000034 + fVar8 + fStack0000000000000054 * 0.0;
    fStack0000000000000038 = fVar6 * fStack0000000000000038 + fVar9 + fStack0000000000000058 * 0.0;
    fStack000000000000003c = fVar6 * fStack000000000000003c + fVar10 + fStack000000000000005c * 0.0;
    fStack0000000000000040 = fVar12 * fStack0000000000000040 + fVar13 + fStack0000000000000050 * 0.0
    ;
    fStack0000000000000044 = fVar12 * fStack0000000000000044 + fVar14 + fStack0000000000000054 * 0.0
    ;
    fStack0000000000000048 = fVar12 * fStack0000000000000048 + fVar15 + fStack0000000000000058 * 0.0
    ;
    fStack000000000000004c = fVar12 * fStack000000000000004c + fVar16 + fStack000000000000005c * 0.0
    ;
    fStack0000000000000050 = fVar11 * fStack0000000000000050 + fVar13 + fVar7;
    fStack0000000000000054 = fVar11 * fStack0000000000000054 + fVar14 + fVar8;
    fStack0000000000000058 = fVar11 * fStack0000000000000058 + fVar15 + fVar9;
    fStack000000000000005c = fVar11 * fStack000000000000005c + fVar16 + fVar10;
    FUN_1802ea790(fStack0000000000000050,&stack0x00000030);
    *(byte *)(unaff_RBX + 0x2e8) = *(byte *)(unaff_RBX + 0x2e8) & 0xef;
    return;
  }
  pfVar3 = (float *)FUN_180085020(uVar5,auStackX_20);
  fVar6 = ABS(*(float *)(unaff_RBX + 0x138) - *pfVar3);
  if (((0.001 <= fVar6) || (fVar6 = ABS(*(float *)(unaff_RBX + 0x13c) - pfVar3[1]), 0.001 <= fVar6))
     || (fVar6 = ABS(*(float *)(unaff_RBX + 0x140) - pfVar3[2]), 0.001 <= fVar6)) {
    lVar4 = *(longlong *)(unaff_RBX + 0x20);
    if (lVar4 != 0) {
      if (*(longlong *)(unaff_RBX + 0x270) != 0) {
        fVar6 = (float)FUN_1802e8910();
        lVar4 = *(longlong *)(unaff_RBX + 0x20);
        *(undefined1 *)(unaff_RBX + 0x278) = 0;
      }
      FUN_1802f28f0(fVar6,lVar4);
    }
  }
  else {
    (**(code **)(*(longlong *)*unaff_RDI + 0x98))();
    plVar1 = *(longlong **)(*(longlong *)(unaff_RBX + 0x20) + 0x318);
    (**(code **)(*plVar1 + 0xa8))(plVar1,*unaff_RDI);
  }
  return;
}





// 函数: void FUN_180382da4(longlong *param_1)
void FUN_180382da4(longlong *param_1)

{
  longlong unaff_RBX;
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
  float fVar11;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  (**(code **)(*param_1 + 200))();
  fVar1 = SQRT(*(float *)(unaff_RBX + 0x70) * *(float *)(unaff_RBX + 0x70) +
               *(float *)(unaff_RBX + 0x74) * *(float *)(unaff_RBX + 0x74) +
               *(float *)(unaff_RBX + 0x78) * *(float *)(unaff_RBX + 0x78));
  fVar7 = SQRT(*(float *)(unaff_RBX + 0x80) * *(float *)(unaff_RBX + 0x80) +
               *(float *)(unaff_RBX + 0x84) * *(float *)(unaff_RBX + 0x84) +
               *(float *)(unaff_RBX + 0x88) * *(float *)(unaff_RBX + 0x88));
  fVar8 = fStack0000000000000030 * 0.0;
  fVar9 = fStack0000000000000034 * 0.0;
  fVar10 = fStack0000000000000038 * 0.0;
  fVar11 = fStack000000000000003c * 0.0;
  fVar2 = fStack0000000000000040 * 0.0;
  fVar3 = fStack0000000000000044 * 0.0;
  fVar4 = fStack0000000000000048 * 0.0;
  fVar5 = fStack000000000000004c * 0.0;
  fVar6 = SQRT(*(float *)(unaff_RBX + 0x90) * *(float *)(unaff_RBX + 0x90) +
               *(float *)(unaff_RBX + 0x94) * *(float *)(unaff_RBX + 0x94) +
               *(float *)(unaff_RBX + 0x98) * *(float *)(unaff_RBX + 0x98));
  fStack0000000000000030 = fVar1 * fStack0000000000000030 + fVar2 + fStack0000000000000050 * 0.0;
  fStack0000000000000034 = fVar1 * fStack0000000000000034 + fVar3 + fStack0000000000000054 * 0.0;
  fStack0000000000000038 = fVar1 * fStack0000000000000038 + fVar4 + fStack0000000000000058 * 0.0;
  fStack000000000000003c = fVar1 * fStack000000000000003c + fVar5 + fStack000000000000005c * 0.0;
  fStack0000000000000040 = fVar7 * fStack0000000000000040 + fVar8 + fStack0000000000000050 * 0.0;
  fStack0000000000000044 = fVar7 * fStack0000000000000044 + fVar9 + fStack0000000000000054 * 0.0;
  fStack0000000000000048 = fVar7 * fStack0000000000000048 + fVar10 + fStack0000000000000058 * 0.0;
  fStack000000000000004c = fVar7 * fStack000000000000004c + fVar11 + fStack000000000000005c * 0.0;
  fStack0000000000000050 = fVar6 * fStack0000000000000050 + fVar8 + fVar2;
  fStack0000000000000054 = fVar6 * fStack0000000000000054 + fVar9 + fVar3;
  fStack0000000000000058 = fVar6 * fStack0000000000000058 + fVar10 + fVar4;
  fStack000000000000005c = fVar6 * fStack000000000000005c + fVar11 + fVar5;
  FUN_1802ea790(fStack0000000000000050,&stack0x00000030);
  *(byte *)(unaff_RBX + 0x2e8) = *(byte *)(unaff_RBX + 0x2e8) & 0xef;
  return;
}





// 函数: void FUN_180382ef8(undefined4 param_1)
void FUN_180382ef8(undefined4 param_1)

{
  longlong *plVar1;
  float *pfVar2;
  longlong lVar3;
  longlong unaff_RBX;
  undefined8 *unaff_RDI;
  float fVar4;
  undefined1 auStackX_20 [8];
  
  pfVar2 = (float *)FUN_180085020(param_1,auStackX_20);
  fVar4 = ABS(*(float *)(unaff_RBX + 0x138) - *pfVar2);
  if (((0.001 <= fVar4) || (fVar4 = ABS(*(float *)(unaff_RBX + 0x13c) - pfVar2[1]), 0.001 <= fVar4))
     || (fVar4 = ABS(*(float *)(unaff_RBX + 0x140) - pfVar2[2]), 0.001 <= fVar4)) {
    lVar3 = *(longlong *)(unaff_RBX + 0x20);
    if (lVar3 != 0) {
      if (*(longlong *)(unaff_RBX + 0x270) != 0) {
        fVar4 = (float)FUN_1802e8910();
        lVar3 = *(longlong *)(unaff_RBX + 0x20);
        *(undefined1 *)(unaff_RBX + 0x278) = 0;
      }
      FUN_1802f28f0(fVar4,lVar3);
    }
  }
  else {
    (**(code **)(*(longlong *)*unaff_RDI + 0x98))();
    plVar1 = *(longlong **)(*(longlong *)(unaff_RBX + 0x20) + 0x318);
    (**(code **)(*plVar1 + 0xa8))(plVar1,*unaff_RDI);
  }
  return;
}





// 函数: void FUN_180382fb1(void)
void FUN_180382fb1(void)

{
  return;
}



undefined8 *
FUN_180382fd0(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined *puVar4;
  longlong *plStack_30;
  longlong *plStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  if (*param_3 == 0) {
    *param_2 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x50))(param_1,param_3);
    if ((*(uint *)(param_3 + 7) & 0x1008) == 0) {
      puVar2 = (undefined8 *)
               (**(code **)(*param_1 + 200))(param_1,&plStack_30,param_3,uVar1,param_5);
      uVar1 = *puVar2;
      *puVar2 = 0;
      plStack_28 = (longlong *)0x0;
      plVar3 = plStack_30;
    }
    else {
      if (*(float *)((longlong)param_3 + 0x3c) < 0.01) {
        puVar4 = &DAT_18098bc73;
        if (*(undefined **)(*param_3 + 0x18) != (undefined *)0x0) {
          puVar4 = *(undefined **)(*param_3 + 0x18);
        }
        FUN_180626f80(&UNK_180a21bd0,(double)*(float *)((longlong)param_3 + 0x3c),puVar4);
      }
      puVar2 = (undefined8 *)
               (**(code **)(*param_1 + 0xc0))(param_1,&plStack_28,param_3,uVar1,param_5);
      uVar1 = *puVar2;
      *puVar2 = 0;
      plStack_30 = (longlong *)0x0;
      plVar3 = plStack_28;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
    *param_2 = uVar1;
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_180383180(longlong param_1,int *param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  float fVar14;
  float extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar15 [16];
  
  iVar9 = *(int *)(param_3 + 200);
  *(undefined2 *)((longlong)param_2 + 5) = 0;
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  if (iVar9 == 0) {
    return param_2;
  }
  fVar14 = (float)FUN_1803dd6b0(param_3,param_4 + 0x30,(int)*(float *)(param_4 + 0x11c20),
                                (int)*(float *)(param_4 + 0x11c24));
  uVar3 = logf((fVar14 * 280.0) / *(float *)(param_4 + 0x11c24));
  fVar17 = extraout_XMM0_Da * 1.442695;
  auVar16._4_4_ = extraout_XMM0_Db;
  auVar16._0_4_ = fVar17;
  iVar9 = (int)fVar17;
  fVar14 = fVar17;
  if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar17)) {
    auVar16._8_4_ = extraout_XMM0_Db;
    auVar16._12_4_ = extraout_XMM0_Db;
    auVar15._8_8_ = auVar16._8_8_;
    auVar15._4_4_ = fVar17;
    auVar15._0_4_ = fVar17;
    uVar4 = movmskps(uVar3,auVar15);
    fVar14 = (float)(int)(iVar9 + (uVar4 & 1 ^ 1));
  }
  if (fVar17 <= 0.0) {
    fVar14 = fVar14 - 1e-08;
  }
  else {
    fVar14 = fVar14 + 1e-08;
  }
  iVar9 = 1 << ((byte)(int)fVar14 & 0x1f);
  if (iVar9 < 0x21) {
    *(undefined1 *)((longlong)param_2 + 6) = 1;
  }
  iVar12 = 0x40;
  if (1 < *(int *)(_DAT_180c86920 + 0xcb0)) {
    iVar12 = 0x80;
  }
  iVar10 = 0x40;
  if ((0x3f < iVar9) && (iVar10 = iVar9, iVar12 < iVar9)) {
    iVar10 = iVar12;
  }
  iVar9 = *(int *)(param_3 + 0xcc);
  if (1 < iVar9) {
    *(undefined1 *)((longlong)param_2 + 6) = 0;
    iVar10 = iVar9 * iVar12;
  }
  iVar9 = iVar10 * 2;
  if ((*(byte *)(param_3 + 0xc0) & 0x80) == 0) {
    iVar9 = iVar10;
  }
  *param_2 = iVar9;
  if (iVar9 == *(int *)(param_3 + 0x3ec)) {
    fVar14 = 0.01;
    cVar1 = func_0x000180285f10(param_3 + 0x3a4,param_3 + 0x80);
    if (((((cVar1 == '\0') ||
          (fVar17 = *(float *)(param_3 + 0x3e4) - *(float *)(param_3 + 0x3c), fVar17 <= -0.01)) ||
         (fVar14 <= fVar17)) || ((*(int *)(param_3 + 200) == 2 && (*(int *)(param_3 + 0xc4) == 1))))
       || (plVar5 = (longlong *)FUN_180387380(param_3 + 0x170,param_4 + 0x3580), *plVar5 == 0))
    goto LAB_180383325;
    uVar2 = 0;
  }
  else {
LAB_180383325:
    uVar2 = 1;
  }
  iVar12 = *(int *)(param_3 + 200);
  *(undefined1 *)(param_2 + 1) = uVar2;
  if ((iVar12 == 2) && (*(char *)(param_1 + 0xb8) != '\0')) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  *(char *)((longlong)param_2 + 5) = cVar1;
  if (cVar1 == '\0') goto LAB_1803833bf;
  puVar13 = (undefined8 *)(_DAT_180c8a9d8 + 0x20);
  puVar11 = *(undefined8 **)(_DAT_180c8a9d8 + 0x30);
  if (puVar11 == (undefined8 *)0x0) {
LAB_180383399:
    puVar6 = puVar13;
  }
  else {
    puVar6 = puVar13;
    do {
      if (*(int *)(puVar11 + 4) < *(int *)(param_3 + 0x3ec)) {
        puVar11 = (undefined8 *)*puVar11;
      }
      else {
        puVar6 = puVar11;
        puVar11 = (undefined8 *)puVar11[1];
      }
    } while (puVar11 != (undefined8 *)0x0);
    if ((puVar6 == puVar13) || (*(int *)(param_3 + 0x3ec) < *(int *)(puVar6 + 4)))
    goto LAB_180383399;
  }
  if (puVar6 == puVar13) {
    puVar8 = (undefined4 *)FUN_180387310(puVar13,param_3 + 0x3ec);
    *puVar8 = 0;
  }
  else {
    piVar7 = (int *)FUN_180387310(puVar13,param_3 + 0x3ec);
    *piVar7 = *piVar7 + 1;
  }
LAB_1803833bf:
  *(undefined8 *)(param_3 + 0x3a4) = *(undefined8 *)(param_3 + 0x80);
  *(undefined8 *)(param_3 + 0x3ac) = *(undefined8 *)(param_3 + 0x88);
  *(int *)(param_3 + 0x3ec) = iVar9;
  *(undefined8 *)(param_3 + 0x3b4) = *(undefined8 *)(param_3 + 0x90);
  *(undefined8 *)(param_3 + 0x3bc) = *(undefined8 *)(param_3 + 0x98);
  *(undefined4 *)(param_3 + 0x3e4) = *(undefined4 *)(param_3 + 0x3c);
  *(undefined8 *)(param_3 + 0x3c4) = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_3 + 0x3cc) = *(undefined8 *)(param_3 + 0xa8);
  *(undefined8 *)(param_3 + 0x3d4) = *(undefined8 *)(param_3 + 0xb0);
  *(undefined8 *)(param_3 + 0x3dc) = *(undefined8 *)(param_3 + 0xb8);
  if (*(char *)(param_4 + 0x1bd0) != '\0') {
    return param_2;
  }
  *(undefined1 *)((longlong)param_2 + 6) = 1;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803831c1(undefined4 param_1)
void FUN_1803831c1(undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong unaff_RBX;
  int *unaff_RDI;
  int iVar12;
  undefined8 *puVar13;
  longlong unaff_R13;
  longlong unaff_R15;
  float fVar14;
  float extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar15 [16];
  
  fVar14 = (float)FUN_1803dd6b0(param_1,unaff_R13 + 0x30,(int)*(float *)(unaff_R13 + 0x11c20));
  uVar3 = logf((fVar14 * 280.0) / *(float *)(unaff_R13 + 0x11c24));
  fVar17 = extraout_XMM0_Da * 1.442695;
  auVar16._4_4_ = extraout_XMM0_Db;
  auVar16._0_4_ = fVar17;
  iVar9 = (int)fVar17;
  fVar14 = fVar17;
  if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar17)) {
    auVar16._8_4_ = extraout_XMM0_Db;
    auVar16._12_4_ = extraout_XMM0_Db;
    auVar15._8_8_ = auVar16._8_8_;
    auVar15._4_4_ = fVar17;
    auVar15._0_4_ = fVar17;
    uVar4 = movmskps(uVar3,auVar15);
    fVar14 = (float)(int)(iVar9 + (uVar4 & 1 ^ 1));
  }
  if (fVar17 <= 0.0) {
    fVar14 = fVar14 - 1e-08;
  }
  else {
    fVar14 = fVar14 + 1e-08;
  }
  iVar9 = 1 << ((byte)(int)fVar14 & 0x1f);
  if (iVar9 < 0x21) {
    *(undefined1 *)((longlong)unaff_RDI + 6) = 1;
  }
  iVar12 = 0x40;
  if (1 < *(int *)(_DAT_180c86920 + 0xcb0)) {
    iVar12 = 0x80;
  }
  iVar10 = 0x40;
  if ((0x3f < iVar9) && (iVar10 = iVar9, iVar12 < iVar9)) {
    iVar10 = iVar12;
  }
  iVar9 = *(int *)(unaff_RBX + 0xcc);
  if (1 < iVar9) {
    *(undefined1 *)((longlong)unaff_RDI + 6) = 0;
    iVar10 = iVar9 * iVar12;
  }
  iVar9 = iVar10 * 2;
  if ((*(byte *)(unaff_RBX + 0xc0) & 0x80) == 0) {
    iVar9 = iVar10;
  }
  *unaff_RDI = iVar9;
  if (iVar9 == *(int *)(unaff_RBX + 0x3ec)) {
    fVar14 = 0.01;
    cVar1 = func_0x000180285f10(unaff_RBX + 0x3a4,unaff_RBX + 0x80);
    if (((((cVar1 == '\0') ||
          (fVar17 = *(float *)(unaff_RBX + 0x3e4) - *(float *)(unaff_RBX + 0x3c), fVar17 <= -0.01))
         || (fVar14 <= fVar17)) ||
        ((*(int *)(unaff_RBX + 200) == 2 && (*(int *)(unaff_RBX + 0xc4) == 1)))) ||
       (plVar5 = (longlong *)FUN_180387380(unaff_RBX + 0x170,unaff_R13 + 0x3580), *plVar5 == 0))
    goto LAB_180383325;
    uVar2 = 0;
  }
  else {
LAB_180383325:
    uVar2 = 1;
  }
  iVar12 = *(int *)(unaff_RBX + 200);
  *(undefined1 *)(unaff_RDI + 1) = uVar2;
  if ((iVar12 == 2) && (*(char *)(unaff_R15 + 0xb8) != '\0')) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  *(char *)((longlong)unaff_RDI + 5) = cVar1;
  if (cVar1 == '\0') goto LAB_1803833bf;
  puVar13 = (undefined8 *)(_DAT_180c8a9d8 + 0x20);
  puVar11 = *(undefined8 **)(_DAT_180c8a9d8 + 0x30);
  if (puVar11 == (undefined8 *)0x0) {
LAB_180383399:
    puVar6 = puVar13;
  }
  else {
    puVar6 = puVar13;
    do {
      if (*(int *)(puVar11 + 4) < *(int *)(unaff_RBX + 0x3ec)) {
        puVar11 = (undefined8 *)*puVar11;
      }
      else {
        puVar6 = puVar11;
        puVar11 = (undefined8 *)puVar11[1];
      }
    } while (puVar11 != (undefined8 *)0x0);
    if ((puVar6 == puVar13) || (*(int *)(unaff_RBX + 0x3ec) < *(int *)(puVar6 + 4)))
    goto LAB_180383399;
  }
  if (puVar6 == puVar13) {
    puVar8 = (undefined4 *)FUN_180387310(puVar13,unaff_RBX + 0x3ec);
    *puVar8 = 0;
  }
  else {
    piVar7 = (int *)FUN_180387310(puVar13,unaff_RBX + 0x3ec);
    *piVar7 = *piVar7 + 1;
  }
LAB_1803833bf:
  *(undefined8 *)(unaff_RBX + 0x3a4) = *(undefined8 *)(unaff_RBX + 0x80);
  *(undefined8 *)(unaff_RBX + 0x3ac) = *(undefined8 *)(unaff_RBX + 0x88);
  *(int *)(unaff_RBX + 0x3ec) = iVar9;
  *(undefined8 *)(unaff_RBX + 0x3b4) = *(undefined8 *)(unaff_RBX + 0x90);
  *(undefined8 *)(unaff_RBX + 0x3bc) = *(undefined8 *)(unaff_RBX + 0x98);
  *(undefined4 *)(unaff_RBX + 0x3e4) = *(undefined4 *)(unaff_RBX + 0x3c);
  *(undefined8 *)(unaff_RBX + 0x3c4) = *(undefined8 *)(unaff_RBX + 0xa0);
  *(undefined8 *)(unaff_RBX + 0x3cc) = *(undefined8 *)(unaff_RBX + 0xa8);
  *(undefined8 *)(unaff_RBX + 0x3d4) = *(undefined8 *)(unaff_RBX + 0xb0);
  *(undefined8 *)(unaff_RBX + 0x3dc) = *(undefined8 *)(unaff_RBX + 0xb8);
  if (*(char *)(unaff_R13 + 0x1bd0) != '\0') {
    return;
  }
  *(undefined1 *)((longlong)unaff_RDI + 6) = 1;
  return;
}





// 函数: void FUN_18038341e(void)
void FUN_18038341e(void)

{
  longlong unaff_RDI;
  
  *(undefined1 *)(unaff_RDI + 6) = 1;
  return;
}





// 函数: void FUN_180383450(longlong param_1,undefined8 param_2,longlong *param_3)
void FUN_180383450(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 0x28))(param_3);
    plVar1 = *(longlong **)(param_1 + 0x58);
    *(longlong **)(param_1 + 0x58) = param_3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    iVar2 = 0;
    if (*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 4 != 0) {
      lVar3 = 0;
      do {
        FUN_180386260(param_1,param_2,*(undefined8 *)(lVar3 + 8 + *(longlong *)(param_1 + 0x60)),1);
        iVar2 = iVar2 + 1;
        lVar3 = lVar3 + 0x10;
      } while ((ulonglong)(longlong)iVar2 <
               (ulonglong)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 4));
    }
    *(undefined4 *)(param_1 + 0xa8) = 0x96;
    *(undefined4 *)(param_1 + 0xac) = 300;
    *(undefined4 *)(param_1 + 0xb0) = 0x1e0;
    plVar1 = *(longlong **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  iVar2 = _Mtx_unlock(param_1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}





// 函数: void FUN_180383570(longlong param_1)
void FUN_180383570(longlong param_1)

{
  FUN_18004b730();
  if (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x38))();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x38))();
  }
  _Mtx_destroy_in_situ(param_1);
  return;
}





// 函数: void FUN_180383630(longlong param_1,longlong *param_2)
void FUN_180383630(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar8;
  ulonglong uVar7;
  
  uVar7 = 0;
  lVar4 = *(longlong *)(param_1 + 0x60);
  uVar8 = uVar7;
  if (*(longlong *)(param_1 + 0x68) - lVar4 >> 4 != 0) {
    do {
      lVar4 = *(longlong *)(lVar4 + 8 + uVar8);
      puVar1 = (undefined8 *)(lVar4 + 0x170);
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x28))(param_2);
      }
      puVar3 = *(undefined8 **)(lVar4 + 0x180);
      puVar5 = puVar1;
      if (puVar3 == (undefined8 *)0x0) {
LAB_1803836dc:
        puVar5 = puVar1;
      }
      else {
        do {
          if ((longlong *)puVar3[4] < param_2) {
            puVar3 = (undefined8 *)*puVar3;
          }
          else {
            puVar5 = puVar3;
            puVar3 = (undefined8 *)puVar3[1];
          }
        } while (puVar3 != (undefined8 *)0x0);
        if ((puVar5 == puVar1) || (param_2 < (longlong *)puVar5[4])) goto LAB_1803836dc;
      }
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x38))(param_2);
      }
      if (puVar5 != puVar1) {
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[10] = 0;
      }
      puVar1 = (undefined8 *)(lVar4 + 0x1a0);
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x28))(param_2);
      }
      puVar3 = *(undefined8 **)(lVar4 + 0x1b0);
      puVar5 = puVar1;
      if (puVar3 == (undefined8 *)0x0) {
LAB_18038375c:
        puVar5 = puVar1;
      }
      else {
        do {
          if ((longlong *)puVar3[4] < param_2) {
            puVar3 = (undefined8 *)*puVar3;
          }
          else {
            puVar5 = puVar3;
            puVar3 = (undefined8 *)puVar3[1];
          }
        } while (puVar3 != (undefined8 *)0x0);
        if ((puVar5 == puVar1) || (param_2 < (longlong *)puVar5[4])) goto LAB_18038375c;
      }
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x38))(param_2);
      }
      if (puVar5 != puVar1) {
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[10] = 0;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      lVar4 = *(longlong *)(param_1 + 0x60);
      uVar8 = uVar8 + 0x10;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(param_1 + 0x68) - lVar4 >> 4));
  }
  plVar2 = *(longlong **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return;
}





// 函数: void FUN_1803837e0(longlong param_1)
void FUN_1803837e0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



