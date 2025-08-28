#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part121_sub002_sub002.c - 1 个函数

// 函数: void FUN_180129e9e(undefined8 param_1)
void FUN_180129e9e(undefined8 param_1)

{
  undefined2 *puVar1;
  int *piVar2;
  char cVar3;
  char *pcVar4;
  undefined1 *puVar5;
  char cVar6;
  char cVar7;
  uint in_EAX;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  float *pfVar15;
  float *pfVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined8 uVar20;
  undefined1 uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  float *pfVar25;
  float *unaff_RBP;
  longlong unaff_RSI;
  byte bVar26;
  char unaff_R12B;
  float fVar27;
  longlong lVar28;
  char unaff_R13B;
  bool bVar29;
  undefined4 unaff_R14D;
  uint unaff_R15D;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float unaff_XMM13_Da;
  undefined8 *in_stack_00000020;
  longlong *in_stack_00000040;
  char cStack0000000000000048;
  char cStack0000000000000049;
  char cStack000000000000004a;
  float fStack0000000000000050;
  float fStack0000000000000054;
  char cStack0000000000000058;
  char cStack0000000000000059;
  float fStack0000000000000060;
  float fStack0000000000000064;
  uint in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  
  unaff_RBP[-4] = (float)(in_EAX & 0x3000000);
  func_0x000180129900(param_1,unaff_R15D);
  lVar12 = *(longlong *)(unaff_RBP + 10);
  unaff_RBP[0x20] = -3.4028235e+38;
  unaff_RBP[0x21] = -3.4028235e+38;
  unaff_RBP[0x22] = 3.4028235e+38;
  unaff_RBP[0x23] = 3.4028235e+38;
  *(undefined1 *)((longlong)in_stack_00000040 + 0xaf) = 1;
  *(bool *)((longlong)in_stack_00000040 + 0xb7) = lVar12 != 0;
  func_0x00018010e540(unaff_RBP + -0x20,unaff_RBP + 0x20);
  lVar12 = *(longlong *)(unaff_RBP + -0x1e);
  in_stack_00000040[0x45] = *(longlong *)(unaff_RBP + -0x20);
  in_stack_00000040[0x46] = lVar12;
  FUN_18013dae0(in_stack_00000040 + 0x43,1);
  cVar6 = cStack0000000000000049;
  if (((((in_stack_00000040[5] != 0) &&
        (*(longlong **)(in_stack_00000040[5] + 0x78) == in_stack_00000040)) ||
       ((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) != 0)) ||
      ((*(longlong *)(unaff_RSI + 0x1ce8) != 0 &&
       ((*(uint *)((longlong)in_stack_00000040 + 0xc) & 0x80000) == 0)))) &&
     (cStack0000000000000049 == '\0')) {
    pcVar4 = *(char **)(unaff_RBP + 0x1e);
    pcVar11 = pcVar4;
    do {
      cVar7 = *pcVar11;
      cVar3 = pcVar11[*in_stack_00000040 - (longlong)pcVar4];
      if (cVar7 != cVar3) break;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    if (cVar7 != cVar3) {
      _fStack0000000000000050 = (longlong)(int)in_stack_00000040[0x10];
      lVar12 = FUN_180121130(*in_stack_00000040,&stack0x00000050,pcVar4);
      *in_stack_00000040 = lVar12;
      *(float *)(in_stack_00000040 + 0x10) = fStack0000000000000050;
    }
  }
  if (*(char *)((longlong)in_stack_00000040 + 0xb2) == '\0') {
    if (((*(char *)((longlong)in_stack_00000040 + 0xb6) == '\0') ||
        (*(int *)((longlong)in_stack_00000040 + 0xdc) != 0)) || ((int)in_stack_00000040[0x1b] < 1))
    {
      fVar30 = *(float *)(in_stack_00000040 + 0xd);
      if (fVar30 == unaff_XMM13_Da) {
        fVar30 = (*(float *)(in_stack_00000040 + 0x23) - *(float *)(in_stack_00000040 + 8)) +
                 *(float *)((longlong)in_stack_00000040 + 0x8c);
      }
      fVar27 = *(float *)((longlong)in_stack_00000040 + 0x6c);
      if (fVar27 == unaff_XMM13_Da) {
        fVar27 = (*(float *)((longlong)in_stack_00000040 + 0x11c) -
                 *(float *)((longlong)in_stack_00000040 + 0x44)) +
                 *(float *)(in_stack_00000040 + 0x12);
      }
      fVar30 = (float)(int)fVar30 + *(float *)(in_stack_00000040 + 0xe);
      fVar27 = (float)(int)fVar27 + *(float *)((longlong)in_stack_00000040 + 0x74);
    }
    else {
      fVar30 = *(float *)(in_stack_00000040 + 0xc);
      fVar27 = *(float *)((longlong)in_stack_00000040 + 100);
    }
  }
  else {
    fVar30 = *(float *)(in_stack_00000040 + 0xc);
    fVar27 = *(float *)((longlong)in_stack_00000040 + 100);
  }
  *(float *)(in_stack_00000040 + 0xc) = fVar30;
  *(float *)((longlong)in_stack_00000040 + 100) = fVar27;
  if (0 < (int)in_stack_00000040[0x1b]) {
    *(int *)(in_stack_00000040 + 0x1b) = (int)in_stack_00000040[0x1b] + -1;
  }
  if (0 < *(int *)((longlong)in_stack_00000040 + 0xdc)) {
    *(int *)((longlong)in_stack_00000040 + 0xdc) = *(int *)((longlong)in_stack_00000040 + 0xdc) + -1
    ;
  }
  if ((cVar6 != '\0') && ((unaff_R12B == '\0' || (unaff_R13B == '\0')))) {
    *(undefined4 *)((longlong)in_stack_00000040 + 0xdc) = 1;
  }
  if (((cStack000000000000004a != '\0') && ((unaff_R15D & 0x6000000) != 0)) &&
     (*(undefined4 *)((longlong)in_stack_00000040 + 0xdc) = 1, (unaff_R15D & 0x40) != 0)) {
    if (unaff_R12B == '\0') {
      *(undefined4 *)(in_stack_00000040 + 10) = unaff_R14D;
      *(undefined4 *)(in_stack_00000040 + 9) = unaff_R14D;
    }
    if (unaff_R13B == '\0') {
      *(undefined4 *)((longlong)in_stack_00000040 + 0x54) = unaff_R14D;
      *(undefined4 *)((longlong)in_stack_00000040 + 0x4c) = unaff_R14D;
    }
    in_stack_00000040[0xc] = 0;
  }
  FUN_180130a80(in_stack_00000040);
  func_0x00018012fb50(in_stack_00000040,in_stack_00000040[5]);
  if ((*(uint *)(unaff_RSI + 8) & 0x8000) == 0) {
    uVar9 = 0x3f800000;
  }
  else {
    uVar9 = *(undefined4 *)(in_stack_00000040[5] + 0x18);
  }
  *(undefined4 *)((longlong)in_stack_00000040 + 0x2dc) = uVar9;
  func_0x000180123e50(in_stack_00000040);
  fVar30 = *(float *)((longlong)in_stack_00000040 + 0xc);
  unaff_RBP[-10] = fVar30;
  if ((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) == 0) {
    if (((uint)fVar30 >> 0x18 & 1) == 0) {
      if ((((uint)fVar30 & 0x6000000) == 0) || (((uint)fVar30 >> 0x1b & 1) != 0)) {
        uVar9 = *(undefined4 *)(unaff_RSI + 0x1638);
      }
      else {
        uVar9 = *(undefined4 *)(unaff_RSI + 0x1658);
      }
      *(undefined4 *)((longlong)in_stack_00000040 + 0x7c) = uVar9;
    }
    else {
      *(undefined4 *)((longlong)in_stack_00000040 + 0x7c) = *(undefined4 *)(unaff_RSI + 0x1650);
    }
  }
  else {
    *(undefined4 *)((longlong)in_stack_00000040 + 0x7c) = unaff_R14D;
  }
  if ((((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) == 0) &&
      (((uint)fVar30 & 0x5010000) == 0x1000000)) &&
     (unaff_XMM13_Da == *(float *)((longlong)in_stack_00000040 + 0x7c))) {
    if (((uint)fVar30 >> 10 & 1) == 0) {
      *(undefined4 *)(in_stack_00000040 + 0xe) = unaff_R14D;
      *(float *)((longlong)in_stack_00000040 + 0x74) = unaff_XMM13_Da;
    }
    else {
      uVar9 = *(undefined4 *)(unaff_RSI + 0x1630);
      *(undefined4 *)(in_stack_00000040 + 0xe) = unaff_R14D;
      *(undefined4 *)((longlong)in_stack_00000040 + 0x74) = uVar9;
    }
  }
  else {
    in_stack_00000040[0xe] = *(longlong *)(unaff_RSI + 0x162c);
  }
  fVar27 = *(float *)(in_stack_00000040 + 0xe);
  if (*(float *)(in_stack_00000040 + 0xe) <= *(float *)(unaff_RSI + 0x166c)) {
    fVar27 = *(float *)(unaff_RSI + 0x166c);
  }
  if (fVar27 <= *(float *)(unaff_RSI + 0x1c58)) {
    fVar27 = *(float *)(unaff_RSI + 0x1c58);
  }
  *(float *)(in_stack_00000040 + 0x30) = fVar27;
  *(undefined4 *)((longlong)in_stack_00000040 + 0x184) = *(undefined4 *)(unaff_RSI + 0x1c5c);
  if ((((uint)fVar30 & 0x21) == 0) && ((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) == 0)) {
    func_0x000180120c80(in_stack_00000040,unaff_RBP + 0x20);
    if ((((*(longlong **)(unaff_RSI + 0x1b00) == in_stack_00000040) &&
         (*(int *)(unaff_RSI + 0x1b18) == 0)) && (*(int *)(unaff_RSI + 0x1b20) == 0)) &&
       ((cVar6 = FUN_180128040(unaff_RBP + 0x20,unaff_RBP + 0x22,1), cVar6 != '\0' &&
        (*(char *)(unaff_RSI + 0x415) != '\0')))) {
      *(undefined1 *)((longlong)in_stack_00000040 + 0xb3) = 1;
    }
    if (*(char *)((longlong)in_stack_00000040 + 0xb3) != '\0') {
      *(bool *)((longlong)in_stack_00000040 + 0xb2) =
           *(char *)((longlong)in_stack_00000040 + 0xb2) == '\0';
      if (((*(uint *)((longlong)in_stack_00000040 + 0xc) & 0x100) == 0) &&
         (*(float *)(_DAT_180c8a9b0 + 0x2e04) <= unaff_XMM13_Da)) {
        *(undefined4 *)(_DAT_180c8a9b0 + 0x2e04) = *(undefined4 *)(_DAT_180c8a9b0 + 0x1c);
      }
      FUN_18012d2e0(in_stack_00000040);
    }
  }
  else {
    *(undefined1 *)((longlong)in_stack_00000040 + 0xb2) = 0;
  }
  plVar18 = in_stack_00000040;
  lVar12 = _DAT_180c8a9b0;
  *(undefined1 *)((longlong)in_stack_00000040 + 0xb3) = 0;
  if ((*(uint *)((longlong)in_stack_00000040 + 0xc) >> 0x19 & 1) == 0) {
    _fStack0000000000000070 = *(undefined8 *)(lVar12 + 0x163c);
    if ((*(uint *)((longlong)in_stack_00000040 + 0xc) & 0x14000000) != 0) {
      _fStack0000000000000050 = 0x4080000040800000;
      puVar17 = (undefined8 *)
                func_0x00018011fc20(unaff_RBP + -0x18,&stack0x00000070,&stack0x00000050);
      _fStack0000000000000070 = *puVar17;
    }
    fVar27 = *(float *)(plVar18[5] + 0x10);
    fVar31 = *(float *)(plVar18[5] + 0x14);
    if (*(char *)((longlong)plVar18 + 0xae) != '\0') {
      fVar27 = 3.4028235e+38;
      fVar31 = 3.4028235e+38;
    }
    iVar24 = *(int *)((longlong)plVar18 + 0x3c);
    if ((-1 < iVar24) && (iVar24 < *(int *)(lVar12 + 0x1600))) {
      fVar27 = *(float *)(*(longlong *)(lVar12 + 0x1608) + 0x18 + (longlong)iVar24 * 0x24);
      fVar31 = *(float *)(*(longlong *)(lVar12 + 0x1608) + 0x1c + (longlong)iVar24 * 0x24);
    }
    _fStack0000000000000050 =
         CONCAT44(fVar31 - (*(float *)(lVar12 + 0x16b8) + *(float *)(lVar12 + 0x16b8)),
                  fVar27 - (*(float *)(lVar12 + 0x16b4) + *(float *)(lVar12 + 0x16b4)));
    puVar17 = (undefined8 *)func_0x00018011fc50(unaff_RBP + -0x18,&stack0x00000070,&stack0x00000050)
    ;
    FUN_18011fc80(&stack0x00000060,plVar18 + 0xc,&stack0x00000070,*puVar17);
    FUN_180128fd0(unaff_RBP + 2,plVar18,CONCAT44(fStack0000000000000064,fStack0000000000000060));
    if (((unaff_RBP[2] < *(float *)(plVar18 + 0xc)) &&
        ((*(uint *)((longlong)plVar18 + 0xc) & 8) == 0)) &&
       ((*(uint *)((longlong)plVar18 + 0xc) >> 0xb & 1) != 0)) {
      fStack0000000000000064 = fStack0000000000000064 + *(float *)(lVar12 + 0x168c);
    }
    lVar28 = _DAT_180c8a9b0;
    fVar31 = fStack0000000000000060;
    fVar27 = fStack0000000000000064;
    if ((unaff_RBP[3] < *(float *)((longlong)plVar18 + 100)) &&
       ((*(byte *)((longlong)plVar18 + 0xc) & 8) == 0)) {
      fStack0000000000000060 = fStack0000000000000060 + *(float *)(lVar12 + 0x168c);
      fVar31 = fStack0000000000000060;
    }
  }
  else {
    lVar28 = lVar12;
    fVar31 = *(float *)(in_stack_00000040 + 0xc);
    fVar27 = *(float *)((longlong)in_stack_00000040 + 100);
  }
  fVar32 = 3.4028235e+38;
  _fStack0000000000000050 = CONCAT44(fVar27,fVar31);
  fVar36 = 3.4028235e+38;
  if ((((uint)fVar30 & 0x40) == 0) || (*(char *)((longlong)in_stack_00000040 + 0xb2) != '\0')) {
    if ((0 < *(int *)((longlong)in_stack_00000040 + 0xc4)) || (0 < (int)in_stack_00000040[0x19])) {
      if ((unaff_R12B == '\0') && (0 < *(int *)((longlong)in_stack_00000040 + 0xc4))) {
        fVar32 = fVar31;
        if ((*(char *)((longlong)in_stack_00000040 + 0xcc) != '\0') &&
           (fVar32 = *(float *)(in_stack_00000040 + 10),
           *(float *)(in_stack_00000040 + 10) <= fVar31)) {
          fVar32 = fVar31;
        }
        *(float *)(in_stack_00000040 + 10) = fVar32;
      }
      if ((unaff_R13B == '\0') && (0 < (int)in_stack_00000040[0x19])) {
        fVar36 = fVar27;
        if ((*(char *)((longlong)in_stack_00000040 + 0xcc) != '\0') &&
           (fVar36 = *(float *)((longlong)in_stack_00000040 + 0x54),
           *(float *)((longlong)in_stack_00000040 + 0x54) <= fVar27)) {
          fVar36 = fVar27;
        }
        *(float *)((longlong)in_stack_00000040 + 0x54) = fVar36;
      }
      if (((*(char *)((longlong)in_stack_00000040 + 0xb2) == '\0') &&
          ((*(uint *)((longlong)in_stack_00000040 + 0xc) & 0x100) == 0)) &&
         (*(float *)(lVar28 + 0x2e04) <= unaff_XMM13_Da)) {
        *(undefined4 *)(lVar28 + 0x2e04) = *(undefined4 *)(lVar28 + 0x1c);
      }
    }
  }
  else {
    if (unaff_R12B == '\0') {
      *(float *)(in_stack_00000040 + 10) = fVar31;
      fVar32 = fVar31;
    }
    if (unaff_R13B == '\0') {
      *(float *)((longlong)in_stack_00000040 + 0x54) = fVar27;
      fVar36 = fVar27;
    }
  }
  puVar13 = (undefined4 *)FUN_180128fd0(unaff_RBP + -0x18,in_stack_00000040,in_stack_00000040[10]);
  uVar9 = puVar13[1];
  *(undefined4 *)(in_stack_00000040 + 10) = *puVar13;
  *(undefined4 *)((longlong)in_stack_00000040 + 0x54) = uVar9;
  if ((*(char *)((longlong)in_stack_00000040 + 0xb2) == '\0') || (((uint)fVar30 >> 0x18 & 1) != 0))
  {
    pfVar15 = unaff_RBP + -0xe;
    *(longlong *)(unaff_RBP + -0xe) = in_stack_00000040[10];
  }
  else {
    uVar14 = func_0x000180120c80(in_stack_00000040,unaff_RBP + 0x20);
    pfVar15 = (float *)func_0x00018010e570(uVar14,unaff_RBP + -0x18);
  }
  cVar6 = cStack0000000000000048;
  in_stack_00000040[9] = *(longlong *)pfVar15;
  if (*(char *)((longlong)in_stack_00000040 + 0xb2) == '\0') {
    if (fVar32 == 3.4028235e+38) {
      fVar27 = *(float *)(in_stack_00000040 + 0xb);
    }
    else {
      fVar27 = *(float *)(in_stack_00000040 + 10);
    }
    if (fVar36 == 3.4028235e+38) {
      fVar31 = *(float *)((longlong)in_stack_00000040 + 0x5c);
    }
    else {
      fVar31 = *(float *)((longlong)in_stack_00000040 + 0x54);
    }
    if ((((uint)fVar30 >> 0xe & 1) != 0) ||
       ((fVar31 < *(float *)((longlong)in_stack_00000040 + 100) && (((uint)fVar30 & 8) == 0)))) {
      cVar7 = '\x01';
    }
    else {
      cVar7 = '\0';
    }
    *(char *)((longlong)in_stack_00000040 + 0xad) = cVar7;
    if (((uint)fVar30 >> 0xf & 1) == 0) {
      fVar32 = unaff_XMM13_Da;
      if (cVar7 != '\0') {
        fVar32 = *(float *)(unaff_RSI + 0x168c);
      }
      if ((fVar27 - fVar32 < *(float *)(in_stack_00000040 + 0xc)) &&
         (((uint)fVar30 & 0x808) == 0x800)) goto LAB_18012a70f;
      cVar7 = '\0';
    }
    else {
LAB_18012a70f:
      cVar7 = '\x01';
    }
    *(char *)((longlong)in_stack_00000040 + 0xac) = cVar7;
    if ((cVar7 != '\0') && (*(char *)((longlong)in_stack_00000040 + 0xad) == '\0')) {
      if ((*(float *)((longlong)in_stack_00000040 + 100) <= fVar31 - *(float *)(unaff_RSI + 0x168c))
         || (((uint)fVar30 & 8) != 0)) {
        uVar21 = 0;
      }
      else {
        uVar21 = 1;
      }
      *(undefined1 *)((longlong)in_stack_00000040 + 0xad) = uVar21;
    }
    fVar27 = unaff_XMM13_Da;
    if (*(char *)((longlong)in_stack_00000040 + 0xac) != '\0') {
      fVar27 = *(float *)(unaff_RSI + 0x168c);
    }
    fVar31 = unaff_XMM13_Da;
    if (*(char *)((longlong)in_stack_00000040 + 0xad) != '\0') {
      fVar31 = *(float *)(unaff_RSI + 0x168c);
    }
    *(float *)((longlong)in_stack_00000040 + 0xa4) = fVar31;
    *(float *)(in_stack_00000040 + 0x15) = fVar27;
  }
  unaff_RBP[0xc] = -NAN;
  if (((cStack000000000000004a != '\0') &&
      (*(undefined4 *)((longlong)in_stack_00000040 + 0xd4) = 0xffffffff,
      ((uint)fVar30 >> 0x1a & 1) != 0)) && (cStack0000000000000048 == '\0')) {
    uVar9 = *(undefined4 *)
             (*(longlong *)(unaff_RSI + 0x1bc8) + -0xc +
             (longlong)*(int *)(unaff_RSI + 0x1bc0) * 0x30);
    *(undefined4 *)(in_stack_00000040 + 8) =
         *(undefined4 *)
          (*(longlong *)(unaff_RSI + 0x1bc8) + -0x10 + (longlong)*(int *)(unaff_RSI + 0x1bc0) * 0x30
          );
    *(undefined4 *)((longlong)in_stack_00000040 + 0x44) = uVar9;
  }
  fVar27 = (float)((uint)fVar30 & 0x1000000);
  unaff_RBP[0x16] = fVar27;
  if (fVar27 == 0.0) {
    fVar31 = unaff_RBP[-4];
  }
  else {
    lVar12 = *(longlong *)(unaff_RBP + 8);
    puVar1 = (undefined2 *)(lVar12 + 0x188);
    *(undefined2 *)((longlong)in_stack_00000040 + 0xba) = *puVar1;
    FUN_18011d9a0(puVar1,&stack0x00000040);
    fVar31 = unaff_RBP[-4];
    if (((((uint)fVar30 >> 0x1a & 1) == 0) && (cVar6 == '\0')) && (fVar31 != 3.761582e-37)) {
      in_stack_00000040[8] = *(longlong *)(lVar12 + 0x100);
    }
  }
  if ((*(float *)(in_stack_00000040 + 0x1e) == 3.4028235e+38) ||
     (*(int *)((longlong)in_stack_00000040 + 0xdc) != 0)) {
    if (((uint)fVar30 >> 0x1c & 1) == 0) {
      if ((((((uint)fVar30 >> 0x1a & 1) != 0) && (cStack0000000000000048 == '\0')) &&
          (0 < (int)in_stack_00000068)) ||
         (((cVar6 = cStack0000000000000048, ((uint)fVar30 >> 0x19 & 1) != 0 &&
           (cStack0000000000000048 == '\0')) && (fVar31 != 3.761582e-37)))) {
        puVar13 = (undefined4 *)FUN_18012f6d0(unaff_RBP + -0x18,in_stack_00000040);
        uVar9 = puVar13[1];
        *(undefined4 *)(in_stack_00000040 + 8) = *puVar13;
        *(undefined4 *)((longlong)in_stack_00000040 + 0x44) = uVar9;
        cVar6 = cStack0000000000000048;
      }
    }
    else {
      puVar13 = (undefined4 *)FUN_18012f6d0(unaff_RBP + -0x18,in_stack_00000040);
      uVar9 = puVar13[1];
      *(undefined4 *)(in_stack_00000040 + 8) = *puVar13;
      *(undefined4 *)((longlong)in_stack_00000040 + 0x44) = uVar9;
    }
  }
  else {
    fVar32 = *(float *)(in_stack_00000040 + 0x1e) -
             *(float *)(in_stack_00000040 + 0x1f) * *(float *)(in_stack_00000040 + 10);
    fVar31 = *(float *)((longlong)in_stack_00000040 + 0xf4) -
             *(float *)((longlong)in_stack_00000040 + 0x54) *
             *(float *)((longlong)in_stack_00000040 + 0xfc);
    if (fVar32 <= *(float *)(unaff_RSI + 0x16b4)) {
      fVar32 = *(float *)(unaff_RSI + 0x16b4);
    }
    if (fVar31 <= *(float *)(unaff_RSI + 0x16b8)) {
      fVar31 = *(float *)(unaff_RSI + 0x16b8);
    }
    _fStack0000000000000070 = CONCAT44(fVar31,fVar32);
    func_0x00018012ddc0(in_stack_00000040,&stack0x00000070,0);
  }
  if (*(int *)((longlong)in_stack_00000040 + 0x3c) < 0) {
LAB_18012aa37:
    if (*(char *)((longlong)in_stack_00000040 + 0xae) != '\0') goto LAB_18012aa45;
  }
  else {
    if (*(char *)((longlong)in_stack_00000040 + 0xae) == '\0') {
      if (*(char *)(in_stack_00000040[5] + 0x77) == '\0') {
        pfVar15 = (float *)func_0x00018011feb0(in_stack_00000040[5],unaff_RBP + 0x20);
        pfVar16 = (float *)func_0x00018010e720(in_stack_00000040,unaff_RBP + -0x20);
        if (((*pfVar16 <= *pfVar15 && *pfVar15 != *pfVar16) ||
            (pfVar16[1] <= pfVar15[1] && pfVar15[1] != pfVar16[1])) ||
           ((pfVar15[2] < pfVar16[2] || (pfVar15[3] < pfVar16[3])))) {
          in_stack_00000020 = (undefined8 *)CONCAT44((int)((ulonglong)in_stack_00000020 >> 0x20),4);
          lVar12 = FUN_180130830(in_stack_00000040,(int)in_stack_00000040[1],in_stack_00000040 + 8,
                                 in_stack_00000040 + 9,in_stack_00000020);
          in_stack_00000040[5] = lVar12;
          func_0x00018012fb50(in_stack_00000040,lVar12);
          if ((*(uint *)(unaff_RSI + 8) & 0x8000) == 0) {
            uVar9 = 0x3f800000;
          }
          else {
            uVar9 = *(undefined4 *)(in_stack_00000040[5] + 0x18);
          }
          *(undefined4 *)((longlong)in_stack_00000040 + 0x2dc) = uVar9;
          func_0x000180123e50(in_stack_00000040);
        }
      }
      goto LAB_18012aa37;
    }
LAB_18012aa45:
    if (*(char *)(in_stack_00000040[5] + 0x49) != '\0') {
      in_stack_00000040[8] = *(longlong *)(in_stack_00000040[5] + 8);
    }
    if (*(char *)(in_stack_00000040[5] + 0x4a) != '\0') {
      lVar12 = *(longlong *)(in_stack_00000040[5] + 0x10);
      in_stack_00000040[10] = lVar12;
      in_stack_00000040[9] = lVar12;
    }
    uVar22 = *(uint *)(in_stack_00000040[5] + 4) & 0xffffffdc;
    uVar23 = uVar22 | 0x20;
    if (((uint)fVar30 & 0x2000000) == 0) {
      uVar23 = uVar22;
    }
    if ((*(char *)(unaff_RSI + 0xc5) != '\0') || (((uint)fVar30 & 0x16000000) != 0)) {
      uVar23 = uVar23 | 2;
    }
    if ((*(char *)(unaff_RSI + 0xc6) != '\0') || (((uint)fVar30 & 0x16000000) != 0)) {
      uVar23 = uVar23 | 1;
    }
    iVar24 = (int)in_stack_00000040[3];
    if ((iVar24 == 0) && (iVar24 = 0x11111111, *(char *)(unaff_RSI + 199) != '\0')) {
      iVar24 = 0;
    }
    *(int *)(in_stack_00000040[5] + 0x28) = iVar24;
    uVar22 = *(uint *)((longlong)in_stack_00000040 + 0x1c);
    if (uVar22 != 0) {
      uVar23 = uVar23 & ~uVar22 | *(uint *)(in_stack_00000040 + 4) & uVar22;
    }
    *(uint *)(in_stack_00000040[5] + 4) = uVar23 | 0x10;
  }
  func_0x00018011feb0(in_stack_00000040[5],unaff_RBP + 4);
  if ((((cVar6 == '\0') && (fVar27 == 0.0)) && (*(int *)((longlong)in_stack_00000040 + 0xc4) < 1))
     && ((int)in_stack_00000040[0x19] < 1)) {
    func_0x00018011fc50(&stack0x00000060,unaff_RSI + 0x16ac,unaff_RSI + 0x16b4);
    if (*(char *)((longlong)in_stack_00000040 + 0xae) == '\0') {
      if ((unaff_XMM13_Da < unaff_RBP[6] - unaff_RBP[4]) &&
         (unaff_XMM13_Da < unaff_RBP[7] - unaff_RBP[5])) {
        pfVar15 = unaff_RBP + 4;
LAB_18012ac57:
        func_0x000180129830(in_stack_00000040,pfVar15,&stack0x00000060);
      }
    }
    else if (0 < *(int *)(unaff_RSI + 0x1600)) {
      if (*(short *)(in_stack_00000040[5] + 0x74) != -1) {
        lVar28 = (longlong)*(short *)(in_stack_00000040[5] + 0x74);
        pfVar15 = unaff_RBP + -8;
        lVar12 = *(longlong *)(unaff_RSI + 0x1608);
        fVar31 = *(float *)(lVar12 + 0x10 + lVar28 * 0x24);
        fVar32 = *(float *)(lVar12 + 0x14 + lVar28 * 0x24);
        fVar36 = *(float *)(lVar12 + 0x18 + lVar28 * 0x24);
        unaff_RBP[-8] = fVar31;
        fVar33 = *(float *)(lVar12 + 0x1c + lVar28 * 0x24);
        unaff_RBP[-7] = fVar32;
        unaff_RBP[-6] = fVar31 + fVar36;
        unaff_RBP[-5] = fVar32 + fVar33;
        goto LAB_18012ac57;
      }
      _fStack0000000000000070 =
           CONCAT44(*(float *)(unaff_RSI + 0x16b0) +
                    *(float *)(**(longlong **)(unaff_RSI + 0x1c70) + 0xc),
                    *(float *)(**(longlong **)(unaff_RSI + 0x1c70) + 8) +
                    *(float *)(unaff_RSI + 0x16ac));
      func_0x00018012ddc0(in_stack_00000040,&stack0x00000070,1);
    }
  }
  *(float *)(in_stack_00000040 + 8) = (float)(int)*(float *)(in_stack_00000040 + 8);
  *(float *)((longlong)in_stack_00000040 + 0x44) =
       (float)(int)*(float *)((longlong)in_stack_00000040 + 0x44);
  if (fVar27 == 0.0) {
    if (((uint)fVar30 & 0xc000000) == 0x4000000) {
      uVar9 = *(undefined4 *)(unaff_RSI + 0x1654);
    }
    else {
      uVar9 = *(undefined4 *)(unaff_RSI + 0x1634);
    }
  }
  else {
    uVar9 = *(undefined4 *)(unaff_RSI + 0x164c);
  }
  uVar23 = 0;
  *(undefined4 *)(in_stack_00000040 + 0xf) = uVar9;
  if (*(char *)((longlong)in_stack_00000040 + 0xae) != '\0') {
    *(undefined4 *)(in_stack_00000040 + 0xf) = 0;
  }
  if (((int)in_stack_00000040[0x80] == 0x7fffffff) ||
     (iVar24 = (int)in_stack_00000040[0x7e], iVar24 == -1)) {
    iVar24 = 0x7fffffff;
  }
  else {
    iVar24 = ((int)in_stack_00000040[0x80] + 1 + iVar24) % (iVar24 + 1);
  }
  *(int *)(in_stack_00000040 + 0x7f) = iVar24;
  if ((*(int *)((longlong)in_stack_00000040 + 0x404) == 0x7fffffff) ||
     (iVar24 = *(int *)((longlong)in_stack_00000040 + 0x3f4), iVar24 == -1)) {
    iVar24 = 0x7fffffff;
  }
  else {
    iVar24 = (*(int *)((longlong)in_stack_00000040 + 0x404) + 1 + iVar24) % (iVar24 + 1);
  }
  *(int *)((longlong)in_stack_00000040 + 0x3fc) = iVar24;
  pfVar15 = unaff_RBP + -0x18;
  *(undefined4 *)((longlong)in_stack_00000040 + 0x3f4) = 0xffffffff;
  *(undefined4 *)(in_stack_00000040 + 0x7e) = 0xffffffff;
  *(undefined4 *)((longlong)in_stack_00000040 + 0x404) = 0x7fffffff;
  *(undefined4 *)(in_stack_00000040 + 0x80) = 0x7fffffff;
  puVar13 = (undefined4 *)FUN_1801293e0(pfVar15,in_stack_00000040,1);
  plVar18 = in_stack_00000040;
  in_stack_00000068 = (uint)pfVar15 & 0xffffff00;
  uVar9 = puVar13[1];
  *(undefined4 *)((longlong)in_stack_00000040 + 0x8c) = *puVar13;
  *(undefined4 *)(in_stack_00000040 + 0x12) = uVar9;
  *(undefined4 *)((longlong)in_stack_00000040 + 0x94) = 0x7f7fffff;
  *(undefined4 *)(in_stack_00000040 + 0x13) = 0x7f7fffff;
  if ((cStack000000000000004a != '\0') && (((uint)fVar30 >> 0xc & 1) == 0)) {
    if (((uint)fVar30 >> 0x1a & 1) == 0) {
      if (((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) != 0) || (fVar27 == 0.0)) {
        in_stack_00000068 = (uint)(((uint)fVar30 >> 0x19 & 1) == 0);
      }
    }
    else {
      uVar22 = in_stack_00000068 >> 8;
      in_stack_00000068 = CONCAT31((int3)uVar22,1);
    }
  }
  fVar27 = *(float *)(unaff_RSI + 0x19f8);
  fVar31 = *(float *)(in_stack_00000040 + 0xf);
  cVar6 = *(char *)(unaff_RSI + 0xcb);
  unaff_RBP[0x20] = 0.0;
  unaff_RBP[0x21] = 0.0;
  unaff_RBP[0x22] = 0.0;
  unaff_RBP[0x23] = 0.0;
  fVar32 = fVar27 * 1.35;
  fVar27 = fVar27 * 0.2 + fVar31 + 1.0;
  if (fVar27 <= fVar32) {
    fVar27 = fVar32;
  }
  cVar7 = *(char *)((longlong)in_stack_00000040 + 0xb2);
  fVar27 = (float)(int)fVar27;
  *(ulonglong *)(unaff_RBP + -0xe) = (ulonglong)(cVar6 != '\0') + 1;
  lVar12 = _DAT_180c8a9b0;
  if ((((cVar7 != '\0') || ((*(byte *)((longlong)in_stack_00000040 + 0xc) & 0x42) != 0)) ||
      (0 < *(int *)((longlong)in_stack_00000040 + 0xc4))) ||
     ((0 < (int)in_stack_00000040[0x19] || ((char)in_stack_00000040[0x16] == '\0'))))
  goto LAB_18012b510;
  cVar6 = *(char *)(_DAT_180c8a9b0 + 0xcb);
  fVar32 = *(float *)(_DAT_180c8a9b0 + 0x19f8) * 1.35;
  fVar30 = fVar31 + 1.0 + *(float *)(_DAT_180c8a9b0 + 0x19f8) * 0.2;
  unaff_RBP[2] = (float)(-(uint)(cVar6 != '\0') & 4);
  if (fVar30 <= fVar32) {
    fVar30 = fVar32;
  }
  fVar31 = (float)(int)((float)(int)fVar30 * 0.75);
  fVar30 = unaff_XMM13_Da;
  if (cVar6 != '\0') {
    fVar30 = 4.0;
  }
  _fStack0000000000000070 = 0x7f7fffff7f7fffff;
  fStack0000000000000060 = 3.4028235e+38;
  fStack0000000000000064 = 3.4028235e+38;
  FUN_18012e1b0(&UNK_180a064a0);
  uVar14 = _fStack0000000000000050;
  pfVar15 = (float *)0x180bf66e8;
  lVar28 = 0;
  do {
    uVar9 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
    _fStack0000000000000050 =
         CONCAT44(*(float *)((longlong)plVar18 + 0x4c) + *(float *)((longlong)plVar18 + 0x44),
                  *(float *)(plVar18 + 8) + *(float *)(plVar18 + 9));
    func_0x00018011fcd0(unaff_RBP + 0xe,plVar18 + 8,&stack0x00000050,pfVar15 + -2);
    fVar33 = fVar31 * *pfVar15 + unaff_RBP[0xe];
    fVar32 = pfVar15[1];
    fVar36 = fVar31 * pfVar15[1] + unaff_RBP[0xf];
    fVar34 = unaff_RBP[0xe] - fVar30 * *pfVar15;
    unaff_RBP[-0x1a] = fVar33;
    fVar32 = unaff_RBP[0xf] - fVar30 * fVar32;
    unaff_RBP[-0x19] = fVar36;
    unaff_RBP[-0x1c] = fVar34;
    unaff_RBP[-0x1b] = fVar32;
    if (fVar33 < fVar34) {
      unaff_RBP[-0x1c] = fVar33;
      unaff_RBP[-0x1a] = fVar34;
    }
    if (fVar36 < fVar32) {
      unaff_RBP[-0x1b] = fVar36;
      unaff_RBP[-0x19] = fVar32;
    }
    uVar8 = func_0x000180123c50(plVar18,(longlong)(int)uVar23);
    in_stack_00000020 = (undefined8 *)CONCAT44(uVar9,0x2020);
    FUN_18010f170(unaff_RBP + -0x1c,uVar8,&stack0x00000048,(longlong)&stack0x00000048 + 1,
                  in_stack_00000020);
    if (((cStack0000000000000048 == '\0') && (cStack0000000000000049 == '\0')) ||
       (*(uint *)(lVar12 + 0x1dcc) = (~uVar23 & 1) + 5, cStack0000000000000049 == '\0')) {
LAB_18012b18f:
      if (uVar23 == 0) goto LAB_18012b0c8;
      if (cStack0000000000000049 != '\0') goto LAB_18012b0d0;
      if (cStack0000000000000048 != '\0') goto LAB_18012b1a3;
    }
    else {
      if ((*(char *)(lVar12 + 0x415) == '\0') || (uVar23 != 0)) {
        fVar32 = *pfVar15;
        fVar36 = pfVar15[1];
        unaff_RBP[0x10] = fVar32 * -fVar31;
        unaff_RBP[0x11] = fVar36 * -fVar31;
        unaff_RBP[0x12] = fVar30 * fVar32;
        unaff_RBP[0x13] = fVar30 * fVar36;
        pfVar16 = (float *)func_0x00018011fcd0(unaff_RBP + 0x1c,unaff_RBP + 0x12,unaff_RBP + 0x10,
                                               pfVar15 + -2);
        fVar32 = *(float *)(lVar12 + 0x118);
        fVar36 = *(float *)(lVar12 + 0x1b48);
        fVar33 = *pfVar16;
        in_stack_00000020 = (undefined8 *)&stack0x00000060;
        unaff_RBP[0x15] = (*(float *)(lVar12 + 0x11c) - *(float *)(lVar12 + 0x1b4c)) + pfVar16[1];
        unaff_RBP[0x14] = (fVar32 - fVar36) + fVar33;
        FUN_1801295b0(plVar18,unaff_RBP + 0x14,pfVar15 + -2,&stack0x00000070,in_stack_00000020);
        goto LAB_18012b18f;
      }
      pfVar16 = (float *)FUN_180128fd0(unaff_RBP + -0x14,plVar18,uVar14);
      fStack0000000000000060 = *pfVar16;
      fStack0000000000000064 = pfVar16[1];
      func_0x000180123e90(0,0);
LAB_18012b0c8:
      if (cStack0000000000000049 == '\0') {
LAB_18012b1a3:
        cVar6 = (cStack0000000000000048 != '\0') + '\x1e';
      }
      else {
LAB_18012b0d0:
        cVar6 = ' ';
      }
      fVar32 = (float)FUN_180121ed0(cVar6);
      unaff_RBP[lVar28 + 0x20] = fVar32;
    }
    uVar23 = uVar23 + 1;
    lVar28 = lVar28 + 1;
    pfVar15 = pfVar15 + 6;
  } while (lVar28 < *(longlong *)(unaff_RBP + -0xe));
  fVar32 = unaff_RBP[2];
  fVar30 = unaff_RBP[-10];
  fVar36 = 0.0;
  if (fVar32 != 0.0) {
    do {
      uVar14 = CONCAT44((int)((ulonglong)in_stack_00000020 >> 0x20),0x40800000);
      FUN_1801296e0(unaff_RBP + -0x20,plVar18,fVar36,fVar31,uVar14);
      uVar8 = (undefined4)((ulonglong)uVar14 >> 0x20);
      uVar9 = func_0x000180123c50(plVar18,(longlong)((int)fVar36 + 4));
      in_stack_00000020 = (undefined8 *)CONCAT44(uVar8,0x20);
      FUN_18010f170(unaff_RBP + -0x20,uVar9,(longlong)&stack0x00000058 + 1,&stack0x00000058,
                    in_stack_00000020);
      if ((((cStack0000000000000059 != '\0') && (0.04 < *(float *)(lVar12 + 0x1b24))) ||
          (cStack0000000000000058 != '\0')) &&
         (*(uint *)(lVar12 + 0x1dcc) = ((uint)fVar36 & 1) + 3, cStack0000000000000058 != '\0')) {
        *(longlong *)(unaff_RBP + -10) = plVar18[8];
        unaff_RBP[0xc] = fVar36;
        _fStack0000000000000050 = 0;
        if (fVar36 == 0.0) {
LAB_18012b293:
          unaff_RBP[-9] = (*(float *)(lVar12 + 0x11c) - *(float *)(lVar12 + 0x1b4c)) + 4.0;
        }
        else if (fVar36 == 1.4013e-45) {
          _fStack0000000000000050 = 0x3f800000;
LAB_18012b2d2:
          unaff_RBP[-10] = (*(float *)(lVar12 + 0x118) - *(float *)(lVar12 + 0x1b48)) + 4.0;
        }
        else {
          if (fVar36 == 2.8026e-45) {
            _fStack0000000000000050 = 0x3f80000000000000;
            goto LAB_18012b293;
          }
          if (fVar36 == 4.2039e-45) goto LAB_18012b2d2;
        }
        in_stack_00000020 = (undefined8 *)&stack0x00000060;
        FUN_1801295b0(plVar18,unaff_RBP + -10,&stack0x00000050,&stack0x00000070,in_stack_00000020);
      }
      fVar36 = (float)((int)fVar36 + 1);
    } while ((int)fVar36 < (int)fVar32);
  }
  piVar2 = (int *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x218);
  *piVar2 = *piVar2 + -1;
  if ((*(longlong *)(lVar12 + 0x1cd8) != 0) &&
     (*(longlong **)(*(longlong *)(lVar12 + 0x1cd8) + 0x3a0) == plVar18)) {
    iVar24 = *(int *)(lVar12 + 0x1cc0);
    fVar31 = unaff_XMM13_Da;
    fVar32 = unaff_XMM13_Da;
    if (iVar24 == 3) {
      if (*(char *)(lVar12 + 0x135) == '\0') goto LAB_18012b465;
      in_stack_00000020 =
           (undefined8 *)CONCAT44((int)((ulonglong)in_stack_00000020 >> 0x20),unaff_XMM13_Da);
      pfVar15 = (float *)FUN_180131aa0(unaff_RBP + -0x14,1,0);
      fVar31 = *pfVar15;
      fVar32 = pfVar15[1];
      iVar24 = *(int *)(lVar12 + 0x1cc0);
    }
    if (iVar24 == 4) {
      in_stack_00000020 =
           (undefined8 *)CONCAT44((int)((ulonglong)in_stack_00000020 >> 0x20),unaff_XMM13_Da);
      pfVar15 = (float *)FUN_180131aa0(unaff_RBP + 0x18,2,0);
      fVar31 = *pfVar15;
      fVar32 = pfVar15[1];
    }
    if ((fVar31 != unaff_XMM13_Da) || (fVar32 != unaff_XMM13_Da)) {
      fVar36 = *(float *)(lVar12 + 0xbc);
      if (*(float *)(lVar12 + 0xb8) <= *(float *)(lVar12 + 0xbc)) {
        fVar36 = *(float *)(lVar12 + 0xb8);
      }
      *(undefined1 *)(lVar12 + 0x1cf8) = 0;
      *(undefined1 *)(lVar12 + 0x1d07) = 1;
      fVar33 = (float)(int)(fVar36 * *(float *)(lVar12 + 0x18) * 600.0);
      fVar36 = (float)FUN_180121ed0(0x20);
      unaff_RBP[0x20] = fVar36;
      pfVar15 = (float *)FUN_180128fd0(unaff_RBP + -0x18,plVar18,
                                       CONCAT44(fVar32 * fVar33 +
                                                *(float *)((longlong)plVar18 + 0x54),
                                                fVar31 * fVar33 + *(float *)(plVar18 + 10)));
      fStack0000000000000060 = *pfVar15;
      fStack0000000000000064 = pfVar15[1];
    }
  }
LAB_18012b465:
  lVar12 = _DAT_180c8a9b0;
  if ((fStack0000000000000060 != 3.4028235e+38) &&
     ((fStack0000000000000060 != *(float *)(plVar18 + 10) ||
      (fStack0000000000000064 != *(float *)((longlong)plVar18 + 0x54))))) {
    *(float *)(plVar18 + 10) = fStack0000000000000060;
    *(float *)((longlong)plVar18 + 0x54) = fStack0000000000000064;
    if (((*(uint *)((longlong)plVar18 + 0xc) & 0x100) == 0) &&
       (*(float *)(lVar12 + 0x2e04) <= unaff_XMM13_Da)) {
      *(undefined4 *)(lVar12 + 0x2e04) = *(undefined4 *)(lVar12 + 0x1c);
    }
  }
  lVar12 = _DAT_180c8a9b0;
  if (fStack0000000000000070 != 3.4028235e+38) {
    *(float *)(plVar18 + 8) = (float)(int)fStack0000000000000070;
    *(float *)((longlong)plVar18 + 0x44) = (float)(int)fStack0000000000000074;
    if (((*(uint *)((longlong)plVar18 + 0xc) & 0x100) == 0) &&
       (*(float *)(lVar12 + 0x2e04) <= unaff_XMM13_Da)) {
      *(undefined4 *)(lVar12 + 0x2e04) = *(undefined4 *)(lVar12 + 0x1c);
    }
  }
  plVar18[9] = plVar18[10];
LAB_18012b510:
  pfVar15 = (float *)0x180bf66e8;
  if (*(char *)((longlong)in_stack_00000040 + 0xae) != '\0') {
    if (*(char *)(in_stack_00000040[5] + 0x49) == '\0') {
      *(longlong *)(in_stack_00000040[5] + 8) = in_stack_00000040[8];
    }
    if (*(char *)(in_stack_00000040[5] + 0x4a) == '\0') {
      *(longlong *)(in_stack_00000040[5] + 0x10) = in_stack_00000040[9];
    }
    puVar17 = (undefined8 *)func_0x00018011feb0(in_stack_00000040[5]);
    uVar14 = puVar17[1];
    *(undefined8 *)(unaff_RBP + 4) = *puVar17;
    *(undefined8 *)(unaff_RBP + 6) = uVar14;
  }
  *(undefined8 *)((longlong)in_stack_00000040 + 0x34) = *(undefined8 *)(in_stack_00000040[5] + 8);
  if ((*(float *)(in_stack_00000040 + 9) <= unaff_XMM13_Da) || (((uint)fVar30 & 0x2000040) != 0)) {
    fVar31 = *(float *)(unaff_RSI + 0x19f8) * 16.0;
  }
  else {
    fVar31 = *(float *)(in_stack_00000040 + 9) * 0.65;
  }
  *(float *)((longlong)in_stack_00000040 + 0x284) = (float)(int)fVar31;
  FUN_180291500(in_stack_00000040[0x5d]);
  *(uint *)(in_stack_00000040[0x5d] + 0x30) =
       -(uint)(*(char *)(unaff_RSI + 0x16c1) != '\0') & 2 |
       (uint)(*(char *)(unaff_RSI + 0x16c0) != '\0');
  lVar12 = in_stack_00000040[0x5d];
  *(undefined8 *)(unaff_RBP + -0x14) =
       *(undefined8 *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x19f0) + 0x58) + 8);
  FUN_18011d9a0(lVar12 + 0x70,unaff_RBP + -0x14);
  FUN_180291a50(lVar12);
  if ((((uint)fVar30 & 0x5000000) == 0x1000000) && (unaff_RBP[-4] != 3.761582e-37)) {
    pfVar16 = (float *)(*(longlong *)(unaff_RBP + 8) + 0x228);
    pfVar25 = (float *)(*(longlong *)(unaff_RBP + 8) + 0x230);
  }
  else {
    pfVar16 = unaff_RBP + 4;
    pfVar25 = unaff_RBP + 6;
  }
  FUN_180126d10(pfVar16,pfVar25);
  if (((((uint)fVar30 >> 0x1b & 1) == 0) ||
      (plVar18 = (longlong *)func_0x00018012ea90(), in_stack_00000040 != plVar18)) ||
     (0 < *(int *)((longlong)in_stack_00000040 + 0xdc))) {
    bVar26 = 0;
  }
  else {
    bVar26 = 1;
  }
  uVar9 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
  lVar12 = *(longlong *)(unaff_RSI + 0x1ce0);
  if ((lVar12 == 0) ||
     ((in_stack_00000040 != *(longlong **)(lVar12 + 0x3a0) &&
      (((plVar18 = *(longlong **)(unaff_RSI + 0x1ce8), plVar18 == (longlong *)0x0 ||
        (in_stack_00000040 != plVar18)) || (plVar18[5] == *(longlong *)(lVar12 + 0x28))))))) {
    bVar29 = false;
  }
  else {
    bVar29 = true;
  }
  if ((bVar26 != 0) || (bVar29)) {
    fVar31 = *(float *)(unaff_RSI + 0x1dc8);
    fVar32 = *(float *)(_DAT_180c8a9b0 + 0x1628);
    pfVar16 = (float *)(_DAT_180c8a9b0 + 0x1628 + ((ulonglong)bVar26 + 0x3a) * 0x10);
    fVar36 = pfVar16[1];
    fVar33 = pfVar16[2];
    fVar34 = pfVar16[3];
    unaff_RBP[-0x20] = *pfVar16;
    unaff_RBP[-0x1f] = fVar36;
    unaff_RBP[-0x1e] = fVar33;
    unaff_RBP[-0x1d] = fVar34;
    unaff_RBP[-0x1d] = fVar34 * fVar31 * fVar32;
    uVar8 = func_0x000180121e20(unaff_RBP + -0x20);
    in_stack_00000020 = (undefined8 *)CONCAT44(uVar9,unaff_XMM13_Da);
    FUN_180293f50(in_stack_00000040[0x5d],unaff_RBP + 4,unaff_RBP + 6,uVar8,in_stack_00000020);
    if ((bVar29) && (in_stack_00000040 == *(longlong **)(unaff_RSI + 0x1ce0))) {
      func_0x00018010e720(in_stack_00000040,unaff_RBP + -0x18);
      func_0x00018010e610(unaff_RBP + -0x18);
      uVar9 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
      if ((((unaff_RBP[4] < unaff_RBP[-0x18]) || (unaff_RBP[5] < unaff_RBP[-0x17])) ||
          (unaff_RBP[-0x16] <= unaff_RBP[6] && unaff_RBP[6] != unaff_RBP[-0x16])) ||
         (unaff_RBP[-0x15] <= unaff_RBP[7] && unaff_RBP[7] != unaff_RBP[-0x15])) {
        fVar31 = *(float *)(unaff_RSI + 0x1cf4);
        lVar12 = in_stack_00000040[0x5d];
        uVar8 = *(undefined4 *)(unaff_RSI + 0x1634);
        fVar36 = *(float *)(_DAT_180c8a9b0 + 0x19bc);
        fVar33 = *(float *)(_DAT_180c8a9b0 + 0x19c0);
        fVar34 = *(float *)(_DAT_180c8a9b0 + 0x19c4);
        fVar32 = *(float *)(_DAT_180c8a9b0 + 0x1628);
        unaff_RBP[-0x20] = *(float *)(_DAT_180c8a9b0 + 0x19b8);
        unaff_RBP[-0x1f] = fVar36;
        unaff_RBP[-0x1e] = fVar33;
        unaff_RBP[-0x1d] = fVar34;
        unaff_RBP[-0x1d] = fVar34 * fVar31 * 0.25 * fVar32;
        uVar10 = func_0x000180121e20(unaff_RBP + -0x20);
        in_stack_00000020 = (undefined8 *)CONCAT44(uVar9,uVar8);
        FUN_180293f50(lVar12,unaff_RBP + -0x18,unaff_RBP + -0x16,uVar10,in_stack_00000020);
      }
    }
  }
  uVar23 = in_stack_00000068;
  lVar12 = *(longlong *)(unaff_RSI + 0x1cd8);
  fVar31 = *(float *)(in_stack_00000040 + 0xf);
  fVar32 = *(float *)((longlong)in_stack_00000040 + 0x7c);
  if (lVar12 == 0) {
    lVar12 = *(longlong *)(unaff_RSI + 0x1c98);
  }
  if (((char)in_stack_00000068 == '\0') &&
     ((lVar12 == 0 ||
      ((in_stack_00000040[0x76] != *(longlong *)(lVar12 + 0x3b0) &&
       ((in_stack_00000040[0x81] == 0 || (in_stack_00000040[0x81] != *(longlong *)(lVar12 + 0x408)))
       )))))) {
    bVar26 = 0;
  }
  else {
    bVar26 = 1;
  }
  func_0x000180120c80(in_stack_00000040,unaff_RBP + -2);
  plVar18 = in_stack_00000040;
  uVar9 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
  if (*(char *)((longlong)in_stack_00000040 + 0xb2) == '\0') {
    unaff_RBP[-10] = (float)((uint)fVar30 & 0x80);
    if ((float)((uint)fVar30 & 0x80) == 0.0) {
      bVar29 = false;
      if (((*(char *)(unaff_RSI + 0x1dd0) != '\0') &&
          (*(int *)(unaff_RSI + 0x1a90) - *(int *)(unaff_RSI + 0x1e44) < 2)) &&
         ((*(char *)(unaff_RSI + 0xc3) != '\0' &&
          (((*(int *)(unaff_RSI + 0x1df4) != -1 &&
            (iVar24 = strcmp(&UNK_180a06400,unaff_RSI + 0x1df8), iVar24 == 0)) &&
           (bVar29 = false, (longlong *)**(undefined8 **)(unaff_RSI + 0x1de0) == plVar18)))))) {
        bVar29 = true;
      }
      lVar12 = _DAT_180c8a9b0;
      if (((uint)fVar30 & 0x6000000) == 0) {
        lVar28 = 0xc0;
        if (unaff_RBP[0x16] != 0.0) {
          lVar28 = 0xd0;
        }
      }
      else {
        lVar28 = 0xe0;
      }
      pfVar16 = (float *)(lVar28 + 0x1628 + _DAT_180c8a9b0);
      fVar36 = pfVar16[1];
      fVar33 = pfVar16[2];
      fVar34 = pfVar16[3];
      unaff_RBP[-0x20] = *pfVar16;
      unaff_RBP[-0x1f] = fVar36;
      unaff_RBP[-0x1e] = fVar33;
      unaff_RBP[-0x1d] = fVar34;
      unaff_RBP[-0x1d] = fVar34 * *(float *)(lVar12 + 0x1628);
      uVar23 = func_0x000180121e20(unaff_RBP + -0x20);
      if (*(char *)((longlong)in_stack_00000040 + 0xae) == '\0') {
        fVar36 = 1.0;
        if (*(int *)(unaff_RSI + 0x1be8) != 0) {
          fVar36 = *(float *)(unaff_RSI + 0x1c38);
        }
        if (bVar29) {
          fVar36 = fVar36 * 0.5;
        }
        if (fVar36 != 1.0) {
          fVar33 = unaff_XMM13_Da;
          if ((unaff_XMM13_Da <= fVar36) && (fVar33 = fVar36, 1.0 <= fVar36)) {
            fVar33 = 1.0;
          }
          uVar23 = (int)(fVar33 * 255.0 + 0.5) << 0x18 | uVar23 & 0xffffff;
        }
      }
      else {
        uVar23 = uVar23 | 0xff000000;
        if (bVar29) {
          *(float *)(in_stack_00000040[5] + 0x6c) = *(float *)(in_stack_00000040[5] + 0x6c) * 0.5;
        }
      }
      fVar36 = *(float *)(in_stack_00000040 + 9);
      fVar33 = *(float *)(in_stack_00000040 + 8);
      lVar12 = in_stack_00000040[0x5d];
      unaff_RBP[0x15] =
           *(float *)((longlong)in_stack_00000040 + 0x4c) +
           *(float *)((longlong)in_stack_00000040 + 0x44);
      unaff_RBP[0x14] = fVar36 + fVar33;
      fVar33 = (float)func_0x00018010e760(in_stack_00000040);
      fVar36 = *(float *)((longlong)in_stack_00000040 + 0x44);
      unaff_RBP[0x12] = *(float *)(in_stack_00000040 + 8);
      in_stack_00000020 = (undefined8 *)CONCAT44(uVar9,fVar31);
      unaff_RBP[0x13] = fVar33 + fVar36;
      FUN_180293f50(lVar12,unaff_RBP + 0x12,unaff_RBP + 0x14,uVar23,in_stack_00000020);
    }
    uVar9 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
    bVar29 = false;
    *(undefined4 *)(unaff_RSI + 0x1be8) = 0;
    lVar12 = _DAT_180c8a9b0;
    if ((((uint)fVar30 & 1) == 0) && ((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) == 0)) {
      pfVar16 = (float *)(_DAT_180c8a9b0 + 0x1628 + ((ulonglong)bVar26 + 0x14) * 0x10);
      fVar36 = pfVar16[1];
      fVar33 = pfVar16[2];
      fVar34 = pfVar16[3];
      unaff_RBP[-0x20] = *pfVar16;
      unaff_RBP[-0x1f] = fVar36;
      unaff_RBP[-0x1e] = fVar33;
      unaff_RBP[-0x1d] = fVar34;
      unaff_RBP[-0x1d] = fVar34 * *(float *)(lVar12 + 0x1628);
      func_0x000180121e20(unaff_RBP + -0x20);
      in_stack_00000020 = (undefined8 *)CONCAT44(uVar9,fVar31);
      FUN_180293f50(in_stack_00000040[0x5d],unaff_RBP + -2);
    }
    uVar9 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
    if (((uint)fVar30 >> 10 & 1) != 0) {
      func_0x00018010e7f0(in_stack_00000040,unaff_RBP + -8);
      uVar14 = func_0x00018010e720(in_stack_00000040,unaff_RBP + -0x18);
      func_0x00018010e690(unaff_RBP + -8,uVar14);
      lVar28 = _DAT_180c8a9b0;
      lVar12 = in_stack_00000040[0x5d];
      fVar36 = unaff_XMM13_Da;
      if (((uint)fVar30 & 1) != 0) {
        fVar36 = fVar31;
      }
      fVar33 = *(float *)(_DAT_180c8a9b0 + 0x179c);
      fVar34 = *(float *)(_DAT_180c8a9b0 + 0x17a0);
      fVar35 = *(float *)(_DAT_180c8a9b0 + 0x17a4);
      unaff_RBP[-0x20] = *(float *)(_DAT_180c8a9b0 + 0x1798);
      unaff_RBP[-0x1f] = fVar33;
      unaff_RBP[-0x1e] = fVar34;
      unaff_RBP[-0x1d] = fVar35;
      unaff_RBP[-0x1d] = fVar35 * *(float *)(lVar28 + 0x1628);
      uVar8 = func_0x000180121e20(unaff_RBP + -0x20);
      in_stack_00000020 = (undefined8 *)CONCAT44(uVar9,fVar36);
      FUN_180293f50(lVar12,unaff_RBP + -8,unaff_RBP + -6,uVar8,in_stack_00000020);
      lVar12 = _DAT_180c8a9b0;
      uVar9 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
      fVar36 = *(float *)(unaff_RSI + 0x1668);
      if ((unaff_XMM13_Da < fVar36) &&
         (unaff_RBP[-5] <
          *(float *)((longlong)in_stack_00000040 + 0x4c) +
          *(float *)((longlong)in_stack_00000040 + 0x44))) {
        lVar28 = in_stack_00000040[0x5d];
        fVar33 = *(float *)(_DAT_180c8a9b0 + 0x171c);
        fVar34 = *(float *)(_DAT_180c8a9b0 + 0x1720);
        fVar35 = *(float *)(_DAT_180c8a9b0 + 0x1724);
        unaff_RBP[-0x20] = *(float *)(_DAT_180c8a9b0 + 0x1718);
        unaff_RBP[-0x1f] = fVar33;
        unaff_RBP[-0x1e] = fVar34;
        unaff_RBP[-0x1d] = fVar35;
        unaff_RBP[-0x1d] = fVar35 * *(float *)(lVar12 + 0x1628);
        uVar8 = func_0x000180121e20(unaff_RBP + -0x20);
        *(undefined8 *)(unaff_RBP + -0x18) = *(undefined8 *)(unaff_RBP + -6);
        unaff_RBP[0x11] = unaff_RBP[-5];
        unaff_RBP[0x10] = unaff_RBP[-8];
        in_stack_00000020 = (undefined8 *)CONCAT44(uVar9,fVar36);
        FUN_180293d20(lVar28,unaff_RBP + 0x10,unaff_RBP + -0x18,uVar8,in_stack_00000020);
      }
    }
    uVar9 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
    lVar12 = in_stack_00000040[0x81];
    if ((lVar12 != 0) && ((*(byte *)(lVar12 + 0xa0) & 0x40) != 0)) {
      fVar36 = *(float *)(lVar12 + 0x38);
      fVar33 = *(float *)(unaff_RSI + 0x19f8);
      fVar34 = *(float *)(lVar12 + 0x3c);
      _fStack0000000000000050 = *(longlong *)(lVar12 + 0x38);
      unaff_RBP[-0x20] = fVar36;
      unaff_RBP[-0x1f] = fVar34;
      fVar35 = (float)(int)(fVar33 * 0.7);
      fVar33 = (float)(int)(fVar33 * 0.55);
      unaff_RBP[-0x1e] = fVar36 + fVar33;
      unaff_RBP[-0x1d] = fVar34 + fVar33;
      uVar8 = FUN_180123c00(in_stack_00000040,&UNK_180a064c0,0);
      uVar14 = CONCAT44(uVar9,0x20);
      cVar6 = FUN_18010f170(unaff_RBP + -0x20,uVar8,(longlong)&stack0x00000058 + 1,&stack0x00000058,
                            uVar14);
      uVar9 = (undefined4)((ulonglong)uVar14 >> 0x20);
      if (cVar6 != '\0') {
        *(byte *)(in_stack_00000040[0x81] + 0xa1) = *(byte *)(in_stack_00000040[0x81] + 0xa1) | 0x10
        ;
      }
      lVar12 = _DAT_180c8a9b0;
      if (((cStack0000000000000058 == '\0') || (cStack0000000000000059 == '\0')) &&
         (((*(byte *)(in_stack_00000040[0x81] + 0xa0) & 8) == 0 || (cStack0000000000000059 != '\0'))
         )) {
        lVar28 = (ulonglong)(cStack0000000000000059 != '\0') + 0x15;
      }
      else {
        lVar28 = 0x17;
      }
      pfVar16 = (float *)(_DAT_180c8a9b0 + 0x1628 + (lVar28 + 10) * 0x10);
      fVar36 = pfVar16[1];
      fVar33 = pfVar16[2];
      fVar34 = pfVar16[3];
      unaff_RBP[-0x14] = *pfVar16;
      unaff_RBP[-0x13] = fVar36;
      unaff_RBP[-0x12] = fVar33;
      unaff_RBP[-0x11] = fVar34;
      unaff_RBP[-0x11] = fVar34 * *(float *)(lVar12 + 0x1628);
      uVar8 = func_0x000180121e20(unaff_RBP + -0x14);
      in_stack_00000020 = (undefined8 *)CONCAT44(uVar9,uVar8);
      lVar12 = in_stack_00000040[0x5d];
      unaff_RBP[0xe] = fStack0000000000000050;
      unaff_RBP[0xf] = fStack0000000000000054 + fVar35;
      _fStack0000000000000070 = CONCAT44(fStack0000000000000054,fStack0000000000000050 + fVar35);
      FUN_1802940f0(lVar12,&stack0x00000050,&stack0x00000070,unaff_RBP + 0xe,in_stack_00000020);
    }
    if (*(char *)((longlong)in_stack_00000040 + 0xac) != '\0') {
      FUN_180110540(0);
    }
    if (*(char *)((longlong)in_stack_00000040 + 0xad) != '\0') {
      FUN_180110540(1);
    }
    uVar9 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
    if (((uint)fVar30 & 2) == 0) {
      lVar12 = 0;
      do {
        uVar9 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
        fVar36 = *(float *)(in_stack_00000040 + 8);
        fVar33 = *(float *)((longlong)in_stack_00000040 + 0x44);
        lVar28 = in_stack_00000040[0x5d];
        fVar36 = ((fVar36 + *(float *)(in_stack_00000040 + 9)) - fVar36) * pfVar15[-2] + fVar36;
        fVar33 = ((fVar33 + *(float *)((longlong)in_stack_00000040 + 0x4c)) - fVar33) * pfVar15[-1]
                 + fVar33;
        if (bVar29) {
          unaff_RBP[2] = fVar32;
          unaff_RBP[3] = fVar27;
          fVar34 = fVar32;
        }
        else {
          fStack0000000000000064 = fVar32;
          fStack0000000000000060 = fVar27;
          fVar34 = fVar27;
        }
        pfVar16 = (float *)((longlong)&stack0x00000060 + 4);
        if (bVar29) {
          pfVar16 = unaff_RBP + 3;
        }
        unaff_RBP[-4] = fVar34 * *pfVar15 + fVar36;
        unaff_RBP[-3] = *pfVar16 * pfVar15[1] + fVar33;
        FUN_18011d9a0(lVar28 + 0x80,unaff_RBP + -4);
        lVar28 = in_stack_00000040[0x5d];
        if (bVar29) {
          unaff_RBP[0x1c] = fVar27;
          unaff_RBP[0x1d] = fVar32;
          fVar34 = fVar27;
        }
        else {
          unaff_RBP[-0x1c] = fVar32;
          unaff_RBP[-0x1b] = fVar27;
          fVar34 = fVar32;
        }
        pfVar16 = unaff_RBP + -0x1b;
        if (bVar29) {
          pfVar16 = unaff_RBP + 0x1d;
        }
        unaff_RBP[0x18] = fVar34 * *pfVar15 + fVar36;
        unaff_RBP[0x19] = *pfVar16 * pfVar15[1] + fVar33;
        FUN_18011d9a0(lVar28 + 0x80,unaff_RBP + 0x18);
        fVar34 = pfVar15[1];
        lVar28 = in_stack_00000040[0x5d];
        in_stack_00000020 = (undefined8 *)CONCAT44(uVar9,pfVar15[3]);
        unaff_RBP[-0x14] = (fVar32 + fVar31) * *pfVar15 + fVar36;
        unaff_RBP[-0x13] = (fVar32 + fVar31) * fVar34 + fVar33;
        FUN_180293730(lVar28,unaff_RBP + -0x14);
        lVar28 = in_stack_00000040[0x5d];
        FUN_180293190(lVar28,*(undefined8 *)(lVar28 + 0x88),*(undefined4 *)(lVar28 + 0x80),
                      unaff_RBP[lVar12 + 0x20],in_stack_00000020);
        uVar9 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
        bVar29 = (bool)(bVar29 ^ 1);
        *(undefined4 *)(lVar28 + 0x80) = 0;
        lVar12 = lVar12 + 1;
        pfVar15 = pfVar15 + 6;
      } while (lVar12 < *(longlong *)(unaff_RBP + -0xe));
    }
    lVar12 = _DAT_180c8a9b0;
    if ((unaff_XMM13_Da < fVar32) && (unaff_RBP[-10] == 0.0)) {
      lVar28 = in_stack_00000040[0x5d];
      fVar36 = *(float *)(_DAT_180c8a9b0 + 0x171c);
      fVar33 = *(float *)(_DAT_180c8a9b0 + 0x1720);
      fVar34 = *(float *)(_DAT_180c8a9b0 + 0x1724);
      unaff_RBP[0x20] = *(float *)(_DAT_180c8a9b0 + 0x1718);
      unaff_RBP[0x21] = fVar36;
      unaff_RBP[0x22] = fVar33;
      unaff_RBP[0x23] = fVar34;
      unaff_RBP[0x23] = fVar34 * *(float *)(lVar12 + 0x1628);
      uVar23 = func_0x000180121e20(unaff_RBP + 0x20);
      fVar36 = *(float *)((longlong)in_stack_00000040 + 0x44);
      fVar33 = *(float *)(in_stack_00000040 + 8) + *(float *)(in_stack_00000040 + 9);
      fVar34 = fVar36 + *(float *)((longlong)in_stack_00000040 + 0x4c);
      if ((uVar23 & 0xff000000) != 0) {
        bVar26 = *(byte *)(lVar28 + 0x30);
        uVar14 = CONCAT44(uVar9,0xf);
        unaff_RBP[-0x14] = *(float *)(in_stack_00000040 + 8) + 0.5;
        unaff_RBP[-0x13] = fVar36 + 0.5;
        if ((bVar26 & 1) == 0) {
          fVar33 = fVar33 - 0.49;
          fVar34 = fVar34 - 0.49;
        }
        else {
          fVar33 = fVar33 - 0.5;
          fVar34 = fVar34 - 0.5;
        }
        unaff_RBP[-0xe] = fVar33;
        unaff_RBP[-0xd] = fVar34;
        FUN_1802939e0(lVar28,unaff_RBP + -0x14,unaff_RBP + -0xe,fVar31,uVar14);
        uVar9 = (undefined4)((ulonglong)uVar14 >> 0x20);
        FUN_18010e4e0(lVar28,uVar23,1,fVar32);
      }
    }
    if (unaff_RBP[0xc] != -NAN) {
      uVar14 = CONCAT44(uVar9,unaff_XMM13_Da);
      FUN_1801296e0(unaff_RBP + -0x14,in_stack_00000040,unaff_RBP[0xc],fVar27,uVar14);
      lVar28 = _DAT_180c8a9b0;
      uVar8 = (undefined4)((ulonglong)uVar14 >> 0x20);
      lVar12 = in_stack_00000040[0x5d];
      fVar27 = *(float *)(_DAT_180c8a9b0 + 0x189c);
      fVar31 = *(float *)(_DAT_180c8a9b0 + 0x18a0);
      fVar36 = *(float *)(_DAT_180c8a9b0 + 0x18a4);
      unaff_RBP[-0xe] = *(float *)(_DAT_180c8a9b0 + 0x1898);
      unaff_RBP[-0xd] = fVar27;
      unaff_RBP[-0xc] = fVar31;
      unaff_RBP[-0xb] = fVar36;
      unaff_RBP[-0xb] = fVar36 * *(float *)(lVar28 + 0x1628);
      uVar9 = func_0x000180121e20(unaff_RBP + -0xe);
      if (fVar32 <= 1.0) {
        fVar32 = 1.0;
      }
      uVar14 = CONCAT44(uVar8,fVar32);
      FUN_180293d20(lVar12,unaff_RBP + -0x14,unaff_RBP + -0x12,uVar9,uVar14);
      uVar9 = (undefined4)((ulonglong)uVar14 >> 0x20);
    }
    lVar12 = _DAT_180c8a9b0;
    fVar27 = *(float *)(unaff_RSI + 0x1668);
    uVar23 = in_stack_00000068;
    if (((unaff_XMM13_Da < fVar27) && (((uint)fVar30 & 1) == 0)) &&
       ((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) == 0)) {
      lVar28 = in_stack_00000040[0x5d];
      fVar31 = *(float *)(_DAT_180c8a9b0 + 0x171c);
      fVar32 = *(float *)(_DAT_180c8a9b0 + 0x1720);
      fVar36 = *(float *)(_DAT_180c8a9b0 + 0x1724);
      unaff_RBP[0x18] = *(float *)(_DAT_180c8a9b0 + 0x1718);
      unaff_RBP[0x19] = fVar31;
      unaff_RBP[0x1a] = fVar32;
      unaff_RBP[0x1b] = fVar36;
      unaff_RBP[0x1b] = fVar36 * *(float *)(lVar12 + 0x1628);
      uVar8 = func_0x000180121e20(unaff_RBP + 0x18);
      fVar31 = *(float *)(unaff_RSI + 0x1638);
      uVar14 = CONCAT44(uVar9,fVar27);
      unaff_RBP[-0xe] = *unaff_RBP - fVar31;
      unaff_RBP[-0xd] = unaff_RBP[1] - 1.0;
      unaff_RBP[-0x13] = unaff_RBP[1] - 1.0;
      unaff_RBP[-0x14] = unaff_RBP[-2] + fVar31;
      FUN_180293d20(lVar28,unaff_RBP + -0x14,unaff_RBP + -0xe,uVar8,uVar14);
      uVar9 = (undefined4)((ulonglong)uVar14 >> 0x20);
      uVar23 = in_stack_00000068;
    }
  }
  else {
    uVar8 = *(undefined4 *)(unaff_RSI + 0x1668);
    *(undefined4 *)(unaff_RSI + 0x1668) = *(undefined4 *)((longlong)in_stack_00000040 + 0x7c);
    lVar12 = _DAT_180c8a9b0;
    if ((bVar26 == 0) || (lVar28 = 0x150, *(char *)(unaff_RSI + 0x1d06) != '\0')) {
      lVar28 = 0x160;
    }
    pfVar15 = (float *)(lVar28 + 0x1628 + _DAT_180c8a9b0);
    fVar27 = pfVar15[1];
    fVar32 = pfVar15[2];
    fVar36 = pfVar15[3];
    unaff_RBP[0x20] = *pfVar15;
    unaff_RBP[0x21] = fVar27;
    unaff_RBP[0x22] = fVar32;
    unaff_RBP[0x23] = fVar36;
    unaff_RBP[0x23] = fVar36 * *(float *)(lVar12 + 0x1628);
    uVar10 = func_0x000180121e20(unaff_RBP + 0x20);
    uVar14 = CONCAT44(uVar9,fVar31);
    FUN_180122960(*(undefined8 *)(unaff_RBP + -2),*(undefined8 *)unaff_RBP,uVar10,1,uVar14);
    uVar9 = (undefined4)((ulonglong)uVar14 >> 0x20);
    *(undefined4 *)(unaff_RSI + 0x1668) = uVar8;
  }
  pfVar15 = (float *)(unaff_RSI + 0x1668);
  in_stack_00000040[0xb] = in_stack_00000040[10];
  *(float *)(in_stack_00000040 + 0x4e) =
       (*(float *)(in_stack_00000040 + 8) - *(float *)((longlong)in_stack_00000040 + 0x8c)) +
       *(float *)(in_stack_00000040 + 0xe);
  fVar36 = (float)func_0x00018010e760(in_stack_00000040);
  fVar27 = *(float *)((longlong)in_stack_00000040 + 0x44);
  fVar31 = *(float *)(in_stack_00000040 + 0x12);
  fVar32 = *(float *)((longlong)in_stack_00000040 + 0x74);
  fVar33 = (float)func_0x00018010e7a0();
  *(float *)((longlong)in_stack_00000040 + 0x274) = fVar33 + fVar36 + (fVar27 - fVar31) + fVar32;
  fVar27 = *(float *)(in_stack_00000040 + 0xd);
  if (fVar27 == unaff_XMM13_Da) {
    fVar27 = *(float *)(in_stack_00000040 + 9) - *(float *)((longlong)in_stack_00000040 + 0xa4);
  }
  *(float *)(in_stack_00000040 + 0x4f) =
       ((*(float *)(in_stack_00000040 + 8) - *(float *)((longlong)in_stack_00000040 + 0x8c)) -
       *(float *)(in_stack_00000040 + 0xe)) + fVar27;
  fVar27 = *(float *)((longlong)in_stack_00000040 + 0x6c);
  if (fVar27 == unaff_XMM13_Da) {
    fVar27 = *(float *)((longlong)in_stack_00000040 + 0x4c) - *(float *)(in_stack_00000040 + 0x15);
  }
  *(float *)((longlong)in_stack_00000040 + 0x27c) =
       ((*(float *)((longlong)in_stack_00000040 + 0x44) - *(float *)(in_stack_00000040 + 0x12)) -
       *(float *)((longlong)in_stack_00000040 + 0x74)) + fVar27;
  *(float *)((longlong)in_stack_00000040 + 0x204) =
       *(float *)(in_stack_00000040 + 0xe) - *(float *)((longlong)in_stack_00000040 + 0x8c);
  uVar10 = 0;
  *(undefined4 *)(in_stack_00000040 + 0x41) = 0;
  *(undefined4 *)((longlong)in_stack_00000040 + 0x20c) = 0;
  func_0x00018010e7a0(in_stack_00000040);
  func_0x00018010e760(in_stack_00000040);
  uVar14 = func_0x00018004ba20(unaff_RBP + -0x18,
                               *(float *)((longlong)in_stack_00000040 + 0x20c) +
                               *(float *)((longlong)in_stack_00000040 + 0x204));
  puVar13 = (undefined4 *)func_0x00018011fbf0(unaff_RBP + -0xe,in_stack_00000040 + 8,uVar14);
  uVar8 = puVar13[1];
  *(undefined4 *)(in_stack_00000040 + 0x22) = *puVar13;
  *(undefined4 *)((longlong)in_stack_00000040 + 0x114) = uVar8;
  in_stack_00000040[0x20] = in_stack_00000040[0x22];
  in_stack_00000040[0x21] = in_stack_00000040[0x22];
  in_stack_00000040[0x23] = in_stack_00000040[0x22];
  puVar13 = (undefined4 *)func_0x00018004ba20(unaff_RBP + -0x18);
  uVar8 = puVar13[1];
  *(undefined4 *)((longlong)in_stack_00000040 + 300) = *puVar13;
  *(undefined4 *)(in_stack_00000040 + 0x26) = uVar8;
  in_stack_00000040[0x24] = *(longlong *)((longlong)in_stack_00000040 + 300);
  *(undefined4 *)((longlong)in_stack_00000040 + 0x134) = 0;
  *(undefined4 *)(in_stack_00000040 + 0x25) = 0;
  *(undefined1 *)((longlong)in_stack_00000040 + 0x17c) = 0;
  fVar27 = (float)func_0x0001801293c0(in_stack_00000040);
  *(bool *)((longlong)in_stack_00000040 + 0x17d) = unaff_XMM13_Da < fVar27;
  *(int *)((longlong)in_stack_00000040 + 0x174) = (int)in_stack_00000040[0x2f];
  *(undefined4 *)(in_stack_00000040 + 0x2f) = 0;
  *(undefined1 *)((longlong)in_stack_00000040 + 0x17e) = 0;
  *(float *)(in_stack_00000040 + 0x27) = *(float *)((longlong)in_stack_00000040 + 0x104) - 9999.0;
  FUN_18013e200(in_stack_00000040 + 0x31,0);
  lVar12 = *(longlong *)(unaff_RBP + 8);
  *(undefined4 *)(in_stack_00000040 + 0x34) = 1;
  if (lVar12 == 0) {
    uVar8 = 1;
  }
  else {
    uVar8 = *(undefined4 *)(lVar12 + 0x1a0);
  }
  *(undefined4 *)((longlong)in_stack_00000040 + 0x1a4) = uVar8;
  if (lVar12 != 0) {
    uVar10 = *(undefined4 *)(lVar12 + 0x1a8);
  }
  *(undefined4 *)(in_stack_00000040 + 0x35) = uVar10;
  *(undefined4 *)((longlong)in_stack_00000040 + 0x1ac) =
       *(undefined4 *)((longlong)in_stack_00000040 + 0x284);
  *(undefined4 *)(in_stack_00000040 + 0x36) = 0xbf800000;
  FUN_18013e340(in_stack_00000040 + 0x37,0);
  FUN_18013e2f0(in_stack_00000040 + 0x39,0);
  FUN_18013e2f0(in_stack_00000040 + 0x3b,0);
  in_stack_00000040[0x42] = 0;
  *(undefined4 *)((longlong)in_stack_00000040 + 0x13c) = 0;
  *(undefined4 *)(in_stack_00000040 + 0x28) = 0;
  in_stack_00000040[0x33] = (longlong)(in_stack_00000040 + 0x57);
  FUN_18013db40(in_stack_00000040 + 0x3d,0);
  func_0x00018011a9d0(in_stack_00000040 + 0x51,3);
  if ((unaff_RBP[0x16] != 0.0) && ((int)in_stack_00000040[0x35] != *(int *)(lVar12 + 0x1a8))) {
    *(int *)(in_stack_00000040 + 0x35) = *(int *)(lVar12 + 0x1a8);
    FUN_18011d940(in_stack_00000040 + 0x37,in_stack_00000040 + 0x35);
  }
  if (0 < *(int *)((longlong)in_stack_00000040 + 0xc4)) {
    *(int *)((longlong)in_stack_00000040 + 0xc4) = *(int *)((longlong)in_stack_00000040 + 0xc4) + -1
    ;
  }
  if (0 < (int)in_stack_00000040[0x19]) {
    *(int *)(in_stack_00000040 + 0x19) = (int)in_stack_00000040[0x19] + -1;
  }
  if ((char)uVar23 != '\0') {
    FUN_18012d2e0(in_stack_00000040);
    func_0x000180131810(in_stack_00000040,0);
  }
  puVar5 = *(undefined1 **)(unaff_RBP + 10);
  if ((((puVar5 != (undefined1 *)0x0) &&
       (lVar28 = in_stack_00000040[5], *(char *)(lVar28 + 0x48) != '\0')) &&
      (lVar19 = func_0x00018012fae0(), lVar28 != lVar19)) &&
     (((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) == 0 ||
      ((*(byte *)((longlong)in_stack_00000040 + 0x432) & 2) != 0)))) {
    *(undefined1 *)(lVar28 + 0x48) = 0;
    *(undefined1 *)(unaff_RSI + 0x1cf8) = 0;
    *puVar5 = 0;
  }
  if ((((uint)fVar30 & 1) == 0) && ((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) == 0)) {
    uVar23 = *(uint *)(in_stack_00000040 + 0x35);
    *(uint *)(in_stack_00000040 + 0x35) = uVar23 | 0x10;
    *(undefined4 *)((longlong)in_stack_00000040 + 0x16c) = 1;
    *(undefined4 *)(in_stack_00000040 + 0x2e) = 2;
    if (((uint)fVar30 & 0x20) == 0) {
      plVar18 = in_stack_00000040 + 8;
      uVar8 = FUN_180123c00(in_stack_00000040,&UNK_180a064b0,0);
      cVar6 = FUN_180110000(uVar8,plVar18,0);
      if (cVar6 != '\0') {
        *(undefined1 *)((longlong)in_stack_00000040 + 0xb3) = 1;
      }
    }
    if (*(longlong *)(unaff_RBP + 10) != 0) {
      fVar27 = *(float *)(unaff_RSI + 0x19f8) * 0.5;
      uVar14 = func_0x00018004ba20(unaff_RBP + -0x18,
                                   ((*(float *)(in_stack_00000040 + 9) +
                                    *(float *)(in_stack_00000040 + 8)) -
                                   *(float *)(unaff_RSI + 0x165c)) - fVar27,
                                   *(float *)((longlong)in_stack_00000040 + 0x44) +
                                   *(float *)(unaff_RSI + 0x1660) + fVar27);
      uVar8 = FUN_180123c00(in_stack_00000040,&UNK_180a064d0,0);
      cVar6 = FUN_18010fd40(uVar8,uVar14);
      if (cVar6 != '\0') {
        **(undefined1 **)(unaff_RBP + 10) = 0;
      }
    }
    *(undefined4 *)((longlong)in_stack_00000040 + 0x16c) = 0;
    *(undefined4 *)(in_stack_00000040 + 0x2e) = 1;
    *(uint *)(in_stack_00000040 + 0x35) = uVar23;
    fVar27 = unaff_XMM13_Da;
    if (((uint)fVar30 & 0x100000) != 0) {
      uVar14 = CONCAT44(uVar9,0xbf800000);
      pfVar16 = (float *)FUN_180127c60(unaff_RBP + -0x18,&DAT_1809fdf28,0,0,uVar14);
      uVar9 = (undefined4)((ulonglong)uVar14 >> 0x20);
      fVar27 = *pfVar16;
    }
    uVar14 = func_0x00018004ba20(unaff_RBP + -0x18);
    uVar20 = FUN_180127c60(unaff_RBP + -0xe,*(undefined8 *)(unaff_RBP + 0x1e),0,1,
                           CONCAT44(uVar9,0xbf800000));
    func_0x00018011fbf0(&stack0x00000050,uVar20,uVar14);
    fVar33 = unaff_RBP[-2];
    fVar31 = unaff_RBP[-1];
    fVar36 = *unaff_RBP;
    fVar32 = unaff_RBP[1];
    unaff_RBP[-0x1c] = fVar33;
    unaff_RBP[-0x1b] = fVar31;
    unaff_RBP[-0x1a] = fVar36;
    unaff_RBP[-0x19] = fVar32;
    if (((uint)fVar30 & 0x20) == 0) {
      fVar34 = *(float *)(unaff_RSI + 0x165c);
      fVar35 = fVar34 + *(float *)(unaff_RSI + 0x19f8) + *(float *)(unaff_RSI + 0x1674);
    }
    else {
      fVar34 = *(float *)(unaff_RSI + 0x165c);
      fVar35 = fVar34;
    }
    lVar28 = *(longlong *)(unaff_RBP + 10);
    if (lVar28 != 0) {
      fVar34 = fVar34 + *(float *)(unaff_RSI + 0x19f8) + *(float *)(unaff_RSI + 0x1674);
    }
    if (unaff_XMM13_Da < *(float *)(unaff_RSI + 0x1644)) {
      fVar34 = (float)func_0x00018013e9f0();
      fVar32 = unaff_RBP[-0x19];
      fVar36 = unaff_RBP[-0x1a];
      fVar31 = unaff_RBP[-0x1b];
      fVar33 = unaff_RBP[-0x1c];
    }
    unaff_RBP[-7] = fVar31;
    unaff_RBP[-5] = fVar32;
    unaff_RBP[-0x1c] = fVar33 + fVar35;
    unaff_RBP[-0x1a] = fVar36 - fVar34;
    unaff_RBP[-8] = fVar33 + fVar35;
    unaff_RBP[-6] = fVar36 - fVar34;
    if (lVar28 == 0) {
      fVar31 = *(float *)(unaff_RSI + 0x165c);
    }
    else {
      fVar31 = (float)func_0x00018010e5a0(unaff_RBP + -2);
      fVar31 = fVar31 - 3.0;
    }
    unaff_RBP[-6] = (*(float *)(in_stack_00000040 + 9) + *(float *)(in_stack_00000040 + 8)) - fVar31
    ;
    FUN_180122890(unaff_RBP + -0x1c,unaff_RBP + -0x1a,*(undefined8 *)(unaff_RBP + 0x1e),0,
                  &stack0x00000050);
    if (((uint)fVar30 & 0x100000) != 0) {
      uVar14 = func_0x00018004ba20(unaff_RBP + -0x14,2.0 - fVar27);
      func_0x00018010e590(unaff_RBP + -0x1c);
      func_0x00018013e900();
      uVar20 = func_0x00018004ba20(unaff_RBP + 0x18);
      func_0x00018011fbf0(unaff_RBP + -0x18,uVar20,uVar14);
      func_0x00018004ba20(unaff_RBP + -0xe);
      func_0x00018004ba20(unaff_RBP + -0x14);
      uVar14 = func_0x00018011fbf0(unaff_RBP + 0x18,unaff_RBP + -0x1a,unaff_RBP + -0xe);
      uVar20 = func_0x00018011fbf0(unaff_RBP + 0x1c,unaff_RBP + -0x18,unaff_RBP + -0xe);
      FUN_180122890(uVar20,uVar14,&DAT_1809fdf28,0,0);
    }
  }
  *(undefined2 *)((longlong)in_stack_00000040 + 0x26a) = 0;
  *(undefined2 *)(in_stack_00000040 + 0x4d) = 0;
  plVar18 = (longlong *)func_0x00018010e720(in_stack_00000040,unaff_RBP + 0x20);
  lVar28 = plVar18[1];
  in_stack_00000040[0x47] = *plVar18;
  in_stack_00000040[0x48] = lVar28;
  if ((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) != 0) {
    fVar27 = (float)func_0x00018010e760();
    *(float *)((longlong)in_stack_00000040 + 0x23c) =
         fVar27 + *(float *)((longlong)in_stack_00000040 + 0x23c);
  }
  func_0x00018010e690(in_stack_00000040 + 0x47,in_stack_00000040 + 0x45);
  *(float *)(in_stack_00000040 + 0x49) =
       unaff_RBP[-2] + *(float *)((longlong)in_stack_00000040 + 0x7c);
  if (((uint)fVar30 & 0x401) == 1) {
    pfVar15 = (float *)((longlong)in_stack_00000040 + 0x7c);
  }
  fVar27 = *pfVar15;
  fVar31 = (float)func_0x00018010e7a0();
  *(float *)((longlong)in_stack_00000040 + 0x24c) = fVar31 + unaff_RBP[1] + fVar27;
  *(float *)(in_stack_00000040 + 0x4a) =
       ((*(float *)(in_stack_00000040 + 9) + *(float *)(in_stack_00000040 + 8)) -
       *(float *)((longlong)in_stack_00000040 + 0xa4)) -
       *(float *)((longlong)in_stack_00000040 + 0x7c);
  *(float *)((longlong)in_stack_00000040 + 0x254) =
       ((*(float *)((longlong)in_stack_00000040 + 0x4c) +
        *(float *)((longlong)in_stack_00000040 + 0x44)) - *(float *)(in_stack_00000040 + 0x15)) -
       *(float *)((longlong)in_stack_00000040 + 0x7c);
  fVar27 = (float)func_0x00018013e900();
  *(float *)(in_stack_00000040 + 0x4b) =
       (float)(int)(fVar27 + *(float *)(in_stack_00000040 + 0x49) + 0.5);
  *(float *)((longlong)in_stack_00000040 + 0x25c) =
       (float)(int)(*(float *)((longlong)in_stack_00000040 + 0x24c) + 0.5);
  fVar27 = *(float *)(in_stack_00000040 + 0x4a);
  fVar31 = (float)func_0x00018013e900();
  *(float *)(in_stack_00000040 + 0x4c) = (float)(int)((fVar27 + 0.5) - fVar31);
  *(float *)((longlong)in_stack_00000040 + 0x264) =
       (float)(int)(*(float *)((longlong)in_stack_00000040 + 0x254) + 0.5);
  if ((*(byte *)(unaff_RSI + 8) & 0x40) != 0) {
    if ((*(int *)(unaff_RSI + 0x1b2c) == *(int *)((longlong)in_stack_00000040 + 0x84)) &&
       (((*(char *)(unaff_RSI + 0xc1) == '\0' || (*(char *)(unaff_RSI + 0x135) != '\0')) &&
        ((*(uint *)(in_stack_00000040[0x74] + 0xc) & 0x200004) == 0)))) {
      FUN_18013ba30();
    }
    if ((((*(char *)(unaff_RSI + 0x1dd0) != '\0') && (((uint)fVar30 >> 0x15 & 1) == 0)) &&
        ((*(longlong *)(unaff_RSI + 0x1b78) == 0 ||
         (*(longlong **)(*(longlong *)(unaff_RSI + 0x1b78) + 0x3a0) != in_stack_00000040)))) &&
       ((in_stack_00000040 == (longlong *)in_stack_00000040[0x74] &&
        ((*(uint *)((longlong)in_stack_00000040 + 0xc) & 0x20000000) == 0)))) {
      FUN_18013baf0();
    }
  }
  if ((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) == 0) {
    *(undefined4 *)((longlong)in_stack_00000040 + 0x144) =
         *(undefined4 *)((longlong)in_stack_00000040 + 0x84);
    cVar6 = FUN_180128040(unaff_RBP + -2);
    fVar27 = unaff_RBP[-0x10];
    *(uint *)(in_stack_00000040 + 0x29) = (uint)(cVar6 != '\0');
    uVar14 = *(undefined8 *)unaff_RBP;
    *(undefined8 *)((longlong)in_stack_00000040 + 0x14c) = *(undefined8 *)(unaff_RBP + -2);
    *(undefined8 *)((longlong)in_stack_00000040 + 0x154) = uVar14;
  }
  else {
    fVar27 = unaff_RBP[-0x10];
    *(int *)((longlong)in_stack_00000040 + 0x144) = (int)in_stack_00000040[1];
    *(undefined4 *)(in_stack_00000040 + 0x29) = *(undefined4 *)((longlong)in_stack_00000040 + 0x41c)
    ;
    *(longlong *)((longlong)in_stack_00000040 + 0x14c) = in_stack_00000040[0x84];
    *(longlong *)((longlong)in_stack_00000040 + 0x154) = in_stack_00000040[0x85];
  }
  fVar31 = in_stack_00000078;
  if (((uint)fVar30 >> 0x1d & 1) == 0) {
    FUN_180126d10(in_stack_00000040 + 0x4b,in_stack_00000040 + 0x4c,1);
  }
  if (fVar31 != fVar27) {
    *(undefined1 *)((longlong)in_stack_00000040 + 0xb1) = 0;
  }
  *(short *)(in_stack_00000040 + 0x17) = (short)in_stack_00000040[0x17] + 1;
  FUN_18011ff20(unaff_RSI + 0x1bd0);
  if (((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) != 0) &&
     ((*(byte *)((longlong)in_stack_00000040 + 0x432) & 2) == 0)) {
    *(undefined4 *)(in_stack_00000040 + 0x1b) = 1;
  }
  if (((uint)fVar30 >> 0x18 & 1) != 0) {
    if ((((((uint)fVar30 & 0x40) == 0) && (*(int *)((longlong)in_stack_00000040 + 0xc4) < 1)) &&
        ((int)in_stack_00000040[0x19] < 1)) &&
       ((*(float *)(in_stack_00000040 + 0x48) < *(float *)(in_stack_00000040 + 0x47) ||
         *(float *)(in_stack_00000040 + 0x48) == *(float *)(in_stack_00000040 + 0x47) ||
        (*(float *)((longlong)in_stack_00000040 + 0x244) <
         *(float *)((longlong)in_stack_00000040 + 0x23c) ||
         *(float *)((longlong)in_stack_00000040 + 0x244) ==
         *(float *)((longlong)in_stack_00000040 + 0x23c))))) {
      *(undefined4 *)(in_stack_00000040 + 0x1b) = 1;
    }
    if ((lVar12 != 0) && ((*(char *)(lVar12 + 0xb2) != '\0' || (*(char *)(lVar12 + 0xb6) != '\0'))))
    {
      *(undefined4 *)(in_stack_00000040 + 0x1b) = 1;
    }
  }
  if (*(float *)(unaff_RSI + 0x1628) <= unaff_XMM13_Da) {
    *(undefined4 *)(in_stack_00000040 + 0x1b) = 1;
  }
  if (((int)in_stack_00000040[0x1b] < 1) && (*(int *)((longlong)in_stack_00000040 + 0xdc) < 1)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
  }
  *(char *)((longlong)in_stack_00000040 + 0xb6) = cVar6;
  if (((((*(char *)((longlong)in_stack_00000040 + 0xb2) == '\0') &&
        (*(char *)((longlong)in_stack_00000040 + 0xaf) != '\0')) && (cVar6 == '\0')) ||
      ((0 < *(int *)((longlong)in_stack_00000040 + 0xc4) || (0 < (int)in_stack_00000040[0x19])))) ||
     (0 < *(int *)((longlong)in_stack_00000040 + 0xdc))) {
    uVar21 = 0;
  }
  else {
    uVar21 = 1;
  }
  *(undefined1 *)((longlong)in_stack_00000040 + 0xb4) = uVar21;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x24) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





