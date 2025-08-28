#include "TaleWorlds.Native.Split.h"

// 99_part_09_part045.c - 4 个函数

// 函数: void FUN_1805d10b5(float param_1)
void FUN_1805d10b5(float param_1)

{
  bool bVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  longlong in_RAX;
  uint64_t uVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  longlong unaff_R12;
  char cVar17;
  int iVar18;
  longlong unaff_R13;
  float fVar19;
  int32_t uVar20;
  float fVar21;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  
  cVar17 = (char)unaff_R13;
  if ((float)in_RAX * unaff_XMM7_Da < param_1) {
    fVar21 = *(float *)(unaff_RSI + 0x285);
  }
  else {
    fVar21 = unaff_XMM9_Da;
    if ((*(uint *)(*unaff_RSI + 0x56c) & 0x4000) != 0) {
      fVar21 = 1.5;
    }
    fVar19 = *(float *)(unaff_RSI[0x291] + 0x98d9d8);
    uVar14 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar14 = uVar14 ^ uVar14 >> 0x11;
    uVar14 = uVar14 ^ uVar14 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar14;
    *(char *)((longlong)unaff_RSI + 0x13bc) = cVar17;
    *(float *)(unaff_RSI + 0x277) =
         ((unaff_XMM8_Da - fVar19) * fVar21 - ((float)in_RAX * unaff_XMM7_Da - param_1)) +
         (float)(uVar14 - 1) * 2.3283064e-10;
    unaff_RSI[0x275] = *(longlong *)(unaff_R12 + (longlong)(int)unaff_RSI[0x276] * 8);
    FUN_1805c2bf0();
    uVar14 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar14 = uVar14 ^ uVar14 >> 0x11;
    uVar14 = uVar14 ^ uVar14 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar14;
    *(uint *)(unaff_RSI + 0x427) = uVar14 - 1;
    fVar21 = *(float *)(*unaff_RSI + 0x340);
    fVar19 = *(float *)(*unaff_RSI + 0x344);
    uVar14 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar14 = uVar14 ^ uVar14 >> 0x11;
    uVar14 = uVar14 ^ uVar14 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar14;
    *(float *)((longlong)unaff_RSI + 0x213c) =
         (float)(uVar14 - 1) * 2.3283064e-10 * (fVar19 - fVar21) + fVar21;
    fVar21 = *(float *)(*unaff_RSI + 0x348);
    uVar14 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar14 = uVar14 ^ uVar14 >> 0x11;
    uVar14 = uVar14 ^ uVar14 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar14;
    *(float *)(unaff_RSI + 0x428) = (float)(uVar14 - 1) * fVar21 * 4.656613e-10 - fVar21;
    fVar21 = *(float *)(*unaff_RSI + 0x34c);
    uVar14 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar14 = uVar14 ^ uVar14 >> 0x11;
    uVar14 = uVar14 ^ uVar14 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar14;
    *(float *)((longlong)unaff_RSI + 0x2144) = (float)(uVar14 - 1) * fVar21 * 4.656613e-10 - fVar21;
    fVar21 = (float)(*(longlong *)(unaff_R12 + (longlong)(int)unaff_RSI[0x287] * 8) -
                    unaff_RSI[0x286]) * unaff_XMM7_Da;
    *(float *)(unaff_RSI + 0x285) = fVar21;
  }
  bVar5 = false;
  fVar19 = (float)(*(longlong *)(unaff_R12 + (longlong)(int)unaff_RSI[0x287] * 8) - unaff_RSI[0x286]
                  ) * unaff_XMM7_Da;
  bVar1 = fVar21 <= fVar19;
  iVar18 = (int)unaff_R13;
  if ((bVar1) ||
     (((*(int *)((longlong)unaff_RSI + 0x18c) == 1 ||
       (iVar18 <= *(int *)((longlong)unaff_RSI + 0x12dc))) &&
      (fVar19 = (float)(*(longlong *)(unaff_R12 + (longlong)(int)unaff_RSI[0x28c] * 8) -
                       unaff_RSI[0x28b]) * unaff_XMM7_Da,
      *(float *)((longlong)unaff_RSI + 0x146c) <= fVar19)))) {
    if ((*(uint *)(*unaff_RSI + 0x56c) & 0x4000) == 0) {
LAB_1805d1360:
      uVar11 = 0;
    }
    else {
      if (!bVar1) {
        if ((*(byte *)(unaff_RSI + 2) & 0x80) == 0) {
          fVar19 = (float)FUN_1805d4440(unaff_RSI + 1);
        }
        if (*(char *)((longlong)unaff_RSI + 0xd5) != cVar17) goto LAB_1805d1360;
      }
      uVar11 = 1;
    }
    FUN_1805c7200(fVar19,uVar11);
    bVar5 = true;
    lVar13 = *(longlong *)(unaff_R12 + (longlong)(int)unaff_RSI[0x287] * 8);
    lVar15 = unaff_RSI[0x286];
    fVar21 = *(float *)(unaff_RSI + 0x285);
    unaff_RSI[0x286] = lVar13;
    fVar19 = *(float *)(unaff_RSI[0x291] + 0x98d9d8);
    uVar14 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar14 = uVar14 ^ uVar14 >> 0x11;
    uVar14 = uVar14 ^ uVar14 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar14;
    fVar19 = ((float)(uVar14 - 1) * 1.1641532e-10 + 0.75) * (unaff_XMM8_Da - fVar19);
    *(float *)(unaff_RSI + 0x285) = fVar19;
    if (bVar1) {
      *(float *)(unaff_RSI + 0x285) = fVar19 - ((float)(lVar13 - lVar15) * unaff_XMM7_Da - fVar21);
    }
    if ((char)unaff_RSI[0x438] == '\0') {
      iVar9 = *(int *)((longlong)unaff_RSI + 0x14b4);
    }
    else {
      iVar9 = *(int *)((longlong)unaff_RSI + 0x21c4);
    }
    if (-1 < iVar9) {
      lVar13 = *(longlong *)((longlong)iVar9 * 0xa60 + 0x3778 + unaff_RSI[0x291]);
      if (((lVar13 != 0) && (*(char *)(lVar13 + 0x8be) != cVar17)) &&
         (*(int *)(*unaff_RSI + 0x564) < iVar18)) {
        if ((char)unaff_RSI[0x438] == '\0') {
          iVar9 = *(int *)((longlong)unaff_RSI + 0x14b4);
        }
        else {
          iVar9 = *(int *)((longlong)unaff_RSI + 0x21c4);
        }
        if (1 < *(int *)((longlong)iVar9 * 0xa60 + 0x3718 + unaff_RSI[0x291])) {
          *(int8_t *)((longlong)unaff_RSI + 0x21fc) = 1;
        }
      }
    }
    *(float *)((longlong)unaff_RSI + 0x1454) =
         (float)(*(longlong *)(unaff_R12 + (longlong)(int)unaff_RSI[0x289] * 8) - unaff_RSI[0x288])
         * unaff_XMM7_Da;
  }
  if ((*(uint *)((longlong)unaff_RSI + 0x1484) >> 2 & 1) != 0) goto LAB_1805d1a6a;
  lVar13 = *(longlong *)(*(longlong *)unaff_RSI[0x33] + 0x20);
  uVar20 = *(int32_t *)(lVar13 + 0xc);
  uVar2 = *(int32_t *)(lVar13 + 0x10);
  uVar3 = *(int32_t *)(lVar13 + 0x14);
  uVar4 = *(int32_t *)(lVar13 + 0x18);
  *(int *)(unaff_RSI + 0x34) = iVar18;
  *(int32_t *)((longlong)unaff_RSI + 0x1a4) = uVar20;
  *(int32_t *)(unaff_RSI + 0x35) = uVar2;
  *(int32_t *)((longlong)unaff_RSI + 0x1ac) = uVar3;
  *(int32_t *)(unaff_RSI + 0x36) = uVar4;
  fVar19 = *(float *)(*(longlong *)(*unaff_RSI + 0x20) + 0x234) * unaff_XMM11_Da;
  fVar21 = (float)func_0x000180507a40();
  if ((fVar21 <= fVar19) ||
     (*(float *)((longlong)unaff_RSI + 0x1454) <=
      (float)(*(longlong *)(unaff_R12 + (longlong)(int)unaff_RSI[0x289] * 8) - unaff_RSI[0x288]) *
      unaff_XMM7_Da)) {
    uVar14 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar14 = uVar14 ^ uVar14 >> 0x11;
    uVar14 = uVar14 ^ uVar14 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar14;
    *(float *)((longlong)unaff_RSI + 0x1454) =
         ((float)(uVar14 - 1) * 1.1641532e-11 + 1.0) * *(float *)(unaff_RSI + 0x28a);
    unaff_RSI[0x288] = *(longlong *)(unaff_R12 + (longlong)(int)unaff_RSI[0x289] * 8);
    uVar8 = FUN_1805dc680(unaff_RSI + 0x2f);
    FUN_1805df120(unaff_RSI + 0x2f);
    if (uVar8 != 0) {
      *(ushort *)(unaff_RSI + 0x26) = *(ushort *)(unaff_RSI + 0x26) | uVar8;
      if ((uVar8 & 4) != 0) {
        *(int32_t *)((longlong)unaff_RSI + 0x134) = 0xffffffff;
      }
      if ((uVar8 & 0x40) != 0) {
        *(int32_t *)(unaff_RSI + 0x27) = 0xffffffff;
      }
    }
    *(uint64_t *)((longlong)unaff_RSI + 0x21f4) = *(uint64_t *)((longlong)unaff_RSI + 0x1b4);
    *(int8_t *)(unaff_RSI + 0x43e) = 1;
  }
  if ((bVar5) ||
     (*(float *)((longlong)unaff_RSI + 0x146c) <=
      (float)(*(longlong *)(unaff_R12 + (longlong)(int)unaff_RSI[0x28c] * 8) - unaff_RSI[0x28b]) *
      unaff_XMM7_Da)) {
    if ((*(uint *)(*unaff_RSI + 0x56c) & 0x14000) == 0x14000) {
      *(int8_t *)((longlong)unaff_RSI + 0x21b4) = 1;
      *(float *)(unaff_RSI + 0x437) =
           (float)(*(longlong *)(unaff_R12 + (longlong)(int)unaff_RSI[0x28c] * 8) - unaff_RSI[0x28b]
                  ) * unaff_XMM7_Da;
    }
    else {
      *(char *)((longlong)unaff_RSI + 0x21b4) = cVar17;
    }
    *(int *)((longlong)unaff_RSI + 0x158c) = iVar18;
    *(int *)((longlong)unaff_RSI + 0x159c) = iVar18;
    FUN_1805d22d0();
    lVar13 = *(longlong *)(unaff_R12 + (longlong)(int)unaff_RSI[0x28c] * 8);
    lVar15 = unaff_RSI[0x28b];
    fVar21 = *(float *)((longlong)unaff_RSI + 0x146c);
    unaff_RSI[0x28b] = lVar13;
    uVar14 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar14 = uVar14 ^ uVar14 >> 0x11;
    uVar14 = uVar14 ^ uVar14 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar14;
    fVar19 = ((float)(uVar14 - 1) * 4.656613e-11 + 1.0) * *(float *)(unaff_RSI + 0x28d);
    *(float *)((longlong)unaff_RSI + 0x146c) = fVar19;
    if (!bVar5) {
      fVar19 = fVar19 - ((float)(lVar13 - lVar15) * unaff_XMM7_Da - fVar21);
      *(float *)((longlong)unaff_RSI + 0x146c) = fVar19;
    }
    *(float *)(unaff_RSI + 0x2e8) = fVar19;
    cVar6 = func_0x0001805b7cd0();
    if (cVar6 != '\0') {
      *(uint *)((longlong)unaff_RSI + 0x159c) = *(uint *)((longlong)unaff_RSI + 0x159c) & 0xffff83ff
      ;
      *(uint *)((longlong)unaff_RSI + 0x159c) =
           *(uint *)((longlong)unaff_RSI + 0x159c) | *(uint *)(unaff_RSI + 0x2f1);
      if (((*(uint *)((longlong)unaff_RSI + 0x209c) >> 2 & 1) == 0) &&
         (fVar21 = *(float *)(*unaff_RSI + 0x354),
         fVar21 * -0.5 <
         (float)(*(longlong *)(unaff_R12 + (longlong)(int)unaff_RSI[0x2ee] * 8) - unaff_RSI[0x2ed])
         * unaff_XMM7_Da)) {
        cVar6 = FUN_1805b7d90();
        if (cVar6 == '\0') {
          uVar14 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
          uVar14 = uVar14 ^ uVar14 >> 0x11;
          uVar14 = uVar14 ^ uVar14 << 5;
          *(uint *)(unaff_RSI + 0x272) = uVar14;
          if ((float)(*(longlong *)(unaff_R12 + (longlong)(int)unaff_RSI[0x2ee] * 8) -
                     unaff_RSI[0x2ed]) * unaff_XMM7_Da <=
              (float)(uVar14 - 1) * 4.656613e-11 + (*(float *)(unaff_RSI + 0x2e8) - fVar21))
          goto LAB_1805d185c;
          lVar13 = -0x8000000000000000;
          unaff_RSI[0x2f1] = unaff_R13;
        }
        else {
          lVar13 = 100;
        }
        unaff_RSI[0x2ed] = *(longlong *)(unaff_R12 + (longlong)(int)unaff_RSI[0x2ee] * 8) - lVar13;
      }
    }
LAB_1805d185c:
    if ((*(uint *)((longlong)unaff_RSI + 0x158c) >> 0xe & 1) != 0) {
      *(uint *)((longlong)unaff_RSI + 0x158c) = *(uint *)((longlong)unaff_RSI + 0x158c) & 0xffffbfff
      ;
      uVar14 = FUN_1805c8d60();
      *(uint *)((longlong)unaff_RSI + 0x158c) = *(uint *)((longlong)unaff_RSI + 0x158c) | uVar14;
    }
    *(int *)(unaff_RBP + 0x67) = iVar18;
    *(int32_t *)(unaff_RBP + 0x6b) = 0x3f800000;
    *(uint64_t *)(unaff_RBP + -0x79) = *(uint64_t *)(unaff_RBP + 0x67);
    *(int *)(unaff_RBP + -0x51) = iVar18;
    *(int *)(unaff_RBP + -0x71) = iVar18;
    uVar20 = atan2f(0x80000000,0x3f800000);
    uVar14 = *(uint *)(unaff_RSI + 2);
    *(int32_t *)(unaff_RBP + -0x4d) = *(int32_t *)((longlong)unaff_RSI + 0x159c);
    *(int32_t *)(unaff_RBP + -0x69) = uVar20;
    *(char *)(unaff_RBP + -0x41) = cVar17;
    *(longlong *)(unaff_RBP + -0x65) = unaff_R13;
    *(longlong *)(unaff_RBP + -0x5d) = unaff_R13;
    *(int32_t *)(unaff_RBP + -0x55) = 0xffffffff;
    if ((uVar14 & 0x8000000) == 0) {
      bVar7 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RSI[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((longlong)unaff_RSI + 0x11c) = bVar7;
    }
    else {
      bVar7 = *(byte *)((longlong)unaff_RSI + 0x11c);
    }
    if ((bVar7 == 0) && ((*(byte *)(*unaff_RSI + 0x56c) & 1) == 0)) {
      fVar21 = *(float *)(unaff_RSI + 0x4b);
      if ((-0.2 <= fVar21) && (fVar21 <= unaff_XMM9_Da)) {
        fVar21 = unaff_XMM10_Da;
      }
      fVar19 = *(float *)((longlong)unaff_RSI + 0x25c);
      if ((-0.2 <= fVar19) && (fVar19 <= unaff_XMM9_Da)) {
        fVar19 = unaff_XMM10_Da;
      }
      *(float *)(unaff_RBP + 0x67) = fVar21;
      *(float *)(unaff_RBP + 0x6b) = fVar19;
      uVar11 = *(uint64_t *)(unaff_RBP + 0x67);
    }
    else {
      uVar11 = 0;
    }
    *(uint64_t *)(unaff_RBP + -0x49) = uVar11;
    FUN_180538160(unaff_RBP + -0x79,(longlong)unaff_RSI + 0x135c);
    uVar14 = *(uint *)(unaff_RBP + -0x4d);
    if ((uVar14 >> 0xe & 1) != 0) {
      uVar10 = FUN_1805c8d60();
      *(uint *)(unaff_RBP + -0x4d) = uVar10 | uVar14 & 0xffffbfff;
    }
    fVar21 = *(float *)((longlong)unaff_RSI + 0x21a4);
    *(float *)((longlong)unaff_RSI + 0x21a4) = *(float *)(*unaff_RSI + 0x324) * 0.1;
    *(longlong *)(unaff_RBP + -0x39) = (longlong)(fVar21 * 100000.0 + (float)_DAT_180c8ed38);
    *(uint *)(unaff_RSI + 0x2b1) = *(uint *)(unaff_RSI + 0x2b1) | *(uint *)(unaff_RSI + 0x27a);
    FUN_1805d8a70(unaff_RSI + 0x2b4);
  }
  else {
    FUN_18061a730(unaff_RSI + 0x269,(int)unaff_RSI[0x427],(longlong)unaff_RSI + 0x213c,0);
    FUN_180538160(unaff_RSI + 0x2ac);
  }
  if (*(char *)((longlong)unaff_RSI + 0x26c) != cVar17) {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(*(float *)(unaff_RSI + 0x4d) -
                  *(float *)(*(longlong *)(*(longlong *)unaff_RSI[0x33] + 0x20) + 0x34));
  }
LAB_1805d1a6a:
  lVar13 = _DAT_180c8ed38;
  bVar1 = false;
  if (unaff_RSI[0x2b6] == unaff_RSI[0x2ba]) {
LAB_1805d1bc2:
    *(uint *)((longlong)unaff_RSI + 0x158c) =
         *(uint *)((longlong)unaff_RSI + 0x158c) | *(uint *)((longlong)unaff_RSI + 0x1794);
    if ((*(uint *)(unaff_RSI + 2) & 0x8000000) == 0) {
      bVar7 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RSI[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((longlong)unaff_RSI + 0x11c) = bVar7;
    }
    else {
      bVar7 = *(byte *)((longlong)unaff_RSI + 0x11c);
    }
    if ((bVar7 == 0) && ((*(byte *)(*unaff_RSI + 0x56c) & 1) == 0)) {
      fVar21 = *(float *)(unaff_RSI + 0x4b);
      if ((-0.2 <= fVar21) && (fVar21 <= unaff_XMM9_Da)) {
        fVar21 = unaff_XMM10_Da;
      }
      fVar19 = *(float *)((longlong)unaff_RSI + 0x25c);
      if ((fVar19 < -0.2) || (unaff_XMM9_Da < fVar19)) {
        unaff_XMM10_Da = fVar19;
      }
      *(float *)(unaff_RBP + 0x67) = fVar21;
      *(float *)(unaff_RBP + 0x6b) = unaff_XMM10_Da;
      lVar13 = *(longlong *)(unaff_RBP + 0x67);
    }
    else {
      lVar13 = 0;
    }
    unaff_RSI[0x2b2] = lVar13;
  }
  else {
    do {
      if (lVar13 < *(longlong *)(unaff_RSI[0x2b6] + 0x40)) {
        if (bVar1) {
          return;
        }
        goto LAB_1805d1bc2;
      }
      *(uint *)((longlong)unaff_RSI + 0x158c) =
           *(uint *)((longlong)unaff_RSI + 0x158c) | *(uint *)(unaff_RSI[0x2b6] + 0x2c);
      if ((*(uint *)(unaff_RSI + 2) & 0x8000000) == 0) {
        bVar7 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RSI[1] + 0x564) >> 0x1f) ^ 1;
        *(byte *)((longlong)unaff_RSI + 0x11c) = bVar7;
      }
      else {
        bVar7 = *(byte *)((longlong)unaff_RSI + 0x11c);
      }
      if ((bVar7 == 0) && ((*(byte *)(*unaff_RSI + 0x56c) & 1) == 0)) {
        lVar15 = unaff_RSI[0x2b6];
        plVar12 = (longlong *)(lVar15 + 0x30);
      }
      else {
        lVar15 = unaff_RSI[0x2b6];
        plVar12 = (longlong *)&system_data_f0c8;
      }
      unaff_RSI[0x2b2] = *plVar12;
      lVar16 = lVar15 + 0x48;
      *(int32_t *)((longlong)unaff_RSI + 0x1794) = *(int32_t *)(lVar15 + 0x2c);
      if (lVar16 == unaff_RSI[0x2b8]) {
        if (unaff_RSI[0x2b7] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(unaff_RSI[0x2b7],lVar15);
        }
        lVar15 = unaff_RSI[0x2b9];
        unaff_RSI[0x2b9] = lVar15 + 8;
        lVar15 = *(longlong *)(lVar15 + 8);
        unaff_RSI[0x2b7] = lVar15;
        unaff_RSI[0x2b8] = lVar15 + 0x120;
        lVar16 = unaff_RSI[0x2b7];
      }
      unaff_RSI[0x2b6] = lVar16;
      bVar1 = true;
    } while (lVar16 != unaff_RSI[0x2ba]);
  }
  return;
}






// 函数: void FUN_1805d1ac0(uint64_t param_1,char param_2)
void FUN_1805d1ac0(uint64_t param_1,char param_2)

{
  float fVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  float fVar6;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  
  do {
    if (unaff_RBX < *(longlong *)(unaff_RSI[0x2b6] + 0x40)) {
      if (param_2 != '\0') {
        return;
      }
      *(uint *)((longlong)unaff_RSI + 0x158c) =
           *(uint *)((longlong)unaff_RSI + 0x158c) | *(uint *)((longlong)unaff_RSI + 0x1794);
      if ((*(uint *)(unaff_RSI + 2) & 0x8000000) == 0) {
        bVar2 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RSI[1] + 0x564) >> 0x1f) ^ 1;
        *(byte *)((longlong)unaff_RSI + 0x11c) = bVar2;
      }
      else {
        bVar2 = *(byte *)((longlong)unaff_RSI + 0x11c);
      }
      if ((bVar2 == 0) && ((*(byte *)(*unaff_RSI + 0x56c) & 1) == 0)) {
        fVar6 = *(float *)(unaff_RSI + 0x4b);
        if ((unaff_XMM8_Da <= fVar6) && (fVar6 <= unaff_XMM9_Da)) {
          fVar6 = unaff_XMM10_Da;
        }
        fVar1 = *(float *)((longlong)unaff_RSI + 0x25c);
        if ((fVar1 < unaff_XMM8_Da) || (unaff_XMM9_Da < fVar1)) {
          unaff_XMM10_Da = fVar1;
        }
        *(float *)(unaff_RBP + 0x67) = fVar6;
        *(float *)(unaff_RBP + 0x6b) = unaff_XMM10_Da;
        lVar4 = *(longlong *)(unaff_RBP + 0x67);
      }
      else {
        lVar4 = 0;
      }
      unaff_RSI[0x2b2] = lVar4;
      return;
    }
    *(uint *)((longlong)unaff_RSI + 0x158c) =
         *(uint *)((longlong)unaff_RSI + 0x158c) | *(uint *)(unaff_RSI[0x2b6] + 0x2c);
    if ((*(uint *)(unaff_RSI + 2) & 0x8000000) == 0) {
      bVar2 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RSI[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((longlong)unaff_RSI + 0x11c) = bVar2;
    }
    else {
      bVar2 = *(byte *)((longlong)unaff_RSI + 0x11c);
    }
    if ((bVar2 == 0) && ((*(byte *)(*unaff_RSI + 0x56c) & 1) == 0)) {
      lVar4 = unaff_RSI[0x2b6];
      plVar3 = (longlong *)(lVar4 + 0x30);
    }
    else {
      lVar4 = unaff_RSI[0x2b6];
      plVar3 = (longlong *)&system_data_f0c8;
    }
    unaff_RSI[0x2b2] = *plVar3;
    lVar5 = lVar4 + 0x48;
    *(int32_t *)((longlong)unaff_RSI + 0x1794) = *(int32_t *)(lVar4 + 0x2c);
    if (lVar5 == unaff_RSI[0x2b8]) {
      if (unaff_RSI[0x2b7] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(unaff_RSI[0x2b7],lVar4);
      }
      lVar4 = unaff_RSI[0x2b9];
      unaff_RSI[0x2b9] = lVar4 + 8;
      lVar4 = *(longlong *)(lVar4 + 8);
      unaff_RSI[0x2b7] = lVar4;
      unaff_RSI[0x2b8] = lVar4 + 0x120;
      lVar5 = unaff_RSI[0x2b7];
    }
    unaff_RSI[0x2b6] = lVar5;
    param_2 = '\x01';
  } while (lVar5 != unaff_RSI[0x2ba]);
  return;
}






// 函数: void FUN_1805d1c80(longlong *param_1,int *param_2,int32_t param_3)
void FUN_1805d1c80(longlong *param_1,int *param_2,int32_t param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  if ((char)param_1[0x438] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0x14b4);
  }
  else {
    iVar2 = *(int *)((longlong)param_1 + 0x21c4);
  }
  if (iVar2 != iVar1) {
    *(int8_t *)((longlong)param_1 + 0x13be) = 0;
    *(int32_t *)(param_1 + 2) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(int32_t *)(param_1 + 5) = 0;
    *(int32_t *)((longlong)param_1 + 0x2c) = 0xbf800000;
    param_1[6] = 0;
    *(int32_t *)(param_1 + 7) = 0xffffffff;
    param_1[0x292] = *(longlong *)(&system_error_code + (longlong)(int)param_1[0x293] * 8);
    *(int8_t *)((longlong)param_1 + 0x14a4) = 0;
    if (iVar1 < 0) {
      *(int32_t *)((longlong)param_1 + 0x178c) = 0;
      if (*(int *)(*param_1 + 0x1fc) - 1U < 2) {
        *(uint *)((longlong)param_1 + 0x158c) =
             *(uint *)((longlong)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
      }
      FUN_180508010(param_1);
    }
  }
  *(int8_t *)(param_1 + 0x438) = 1;
  *(uint64_t *)((longlong)param_1 + 0x21c4) = *(uint64_t *)param_2;
  *(int32_t *)(param_1 + 0x43c) = param_3;
  return;
}



uint64_t FUN_1805d1d60(uint64_t *param_1,longlong param_2)

{
  char cVar1;
  
  if ((*(int *)((longlong)param_1 + 0x14e4) != -1) &&
     (*(int *)((longlong)param_1 + 0x14e4) == *(int *)(param_2 + 0x504))) {
    cVar1 = func_0x000180508390(param_2,*param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}






// 函数: void FUN_1805d1e30(longlong *param_1,float *param_2,uint *param_3,uint *param_4)
void FUN_1805d1e30(longlong *param_1,float *param_2,uint *param_3,uint *param_4)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  int8_t auVar20 [16];
  int32_t uVar21;
  float fVar22;
  float fVar23;
  int8_t auVar19 [16];
  
  lVar7 = *(longlong *)(*param_1 + 0x20);
  fVar18 = *(float *)(*param_1 + 0x7e0);
  uVar10 = *param_4;
  fVar22 = *param_2 - *(float *)(lVar7 + 0xc);
  fVar23 = param_2[1] - *(float *)(lVar7 + 0x10);
  if (fVar18 * fVar18 * 6.25 <= fVar23 * fVar23 + fVar22 * fVar22) {
    uVar8 = uVar10;
    if (-1 < (int)uVar10) {
      *param_3 = *param_3 & ~(1 << (uVar10 & 0x1f));
      uVar8 = 0xffffffff;
      *param_4 = 0xffffffff;
    }
    goto LAB_1805d2251;
  }
  if ((int)uVar10 < 0) {
    fVar18 = (float)atan2f();
    if (fVar18 < 0.0) {
      fVar18 = fVar18 + 6.2831855;
    }
    uVar6 = *param_3;
    uVar16 = (uint)(fVar18 * 5.092958);
    uVar8 = uVar16;
    if ((1 << ((byte)uVar16 & 0x1f) & uVar6) != 0) {
      iVar5 = 0;
      do {
        uVar8 = iVar5 + uVar16 & 0x1f;
        uVar13 = uVar6 & 1 << (sbyte)uVar8;
        if (uVar13 == 0) break;
        iVar5 = (uint)(iVar5 < 1) - iVar5;
      } while (iVar5 != -0x10);
      if (uVar13 != 0) {
        uVar8 = uVar16;
      }
    }
    *param_3 = uVar6 | 1 << (uVar8 & 0x1f);
    *param_4 = uVar8;
    goto LAB_1805d2251;
  }
  uVar11 = (ulonglong)*(uint *)((longlong)param_1 + 0x1484);
  if (((*(uint *)((longlong)param_1 + 0x1484) & 0x40) == 0) &&
     (puVar12 = param_4, cVar4 = func_0x0001805d1da0(), cVar4 != '\0')) {
    lVar7 = func_0x0001805d1df0(param_1);
    if (*(int *)(lVar7 + 0x678) == 0) {
      if ((uVar11 & 0x38) == 0) {
        *puVar12 = 0xfffffffe;
        uVar8 = *param_4;
        goto LAB_1805d2251;
      }
      bVar1 = true;
      iVar14 = 0;
      iVar17 = 0;
      bVar3 = true;
      iVar5 = 1;
      do {
        uVar8 = uVar10 + iVar5 & 0x1f;
        if (iVar5 < 0) {
          if (bVar1) {
            if ((*param_3 >> uVar8 & 1) == 0) {
              iVar14 = iVar14 + 1;
            }
            else {
              bVar1 = false;
            }
          }
        }
        else if (bVar3) {
          if ((*param_3 >> uVar8 & 1) == 0) {
            iVar17 = iVar17 + 1;
          }
          else {
            bVar3 = false;
          }
        }
        iVar5 = (uint)(iVar5 < 1) - iVar5;
      } while (iVar5 != -8);
      uVar8 = iVar14 - iVar17 >> 0x1f;
      if (1 < (int)((iVar14 - iVar17 ^ uVar8) - uVar8)) {
        *param_3 = *param_3 & ~(1 << (uVar10 & 0x1f));
        uVar8 = *param_4;
        iVar5 = iVar17 + iVar14 >> 1;
        if (3 < iVar5) {
          iVar5 = 3;
        }
        iVar2 = -iVar5;
        if (iVar14 <= iVar17) {
          iVar2 = iVar5;
        }
        *param_4 = uVar8 + iVar2;
        *param_3 = *param_3 | 1 << (uVar8 + iVar2 & 0x1f);
        uVar8 = *param_4;
        goto LAB_1805d2251;
      }
    }
    else {
      lVar7 = func_0x0001805d1df0(param_1);
      iVar17 = 0x20;
      uVar11 = (ulonglong)(0x20 - *(int *)(lVar7 + 0x678));
      lVar7 = func_0x0001805d1df0(param_1);
      uVar11 = (ulonglong)(uint)((int)uVar11 >> 0x1f) << 0x20 | uVar11 & 0xffffffff;
      uVar8 = 1;
      iVar14 = (int)((longlong)uVar11 / (longlong)*(int *)(lVar7 + 0x678));
      iVar5 = 1;
      if (iVar14 < 1) {
        iVar5 = iVar14;
      }
      lVar7 = func_0x0001805d1df0(param_1,(longlong)uVar11 % (longlong)*(int *)(lVar7 + 0x678) &
                                          0xffffffff);
      uVar11 = (ulonglong)(uint)(float)(iVar17 - *(int *)(lVar7 + 0x678));
      lVar7 = func_0x0001805d1df0(param_1);
      fVar22 = (float)uVar11 / (float)*(int *)(lVar7 + 0x678);
      uVar21 = (int32_t)(uVar11 >> 0x20);
      auVar20._4_4_ = uVar21;
      auVar20._0_4_ = fVar22;
      iVar14 = (int)fVar22;
      fVar18 = fVar22;
      if ((iVar14 != -0x80000000) && ((float)iVar14 != fVar22)) {
        auVar20._8_4_ = uVar21;
        auVar20._12_4_ = uVar21;
        auVar19._8_8_ = auVar20._8_8_;
        auVar19._4_4_ = fVar22;
        auVar19._0_4_ = fVar22;
        uVar6 = movmskps((int)lVar7,auVar19);
        fVar18 = (float)(int)(iVar14 + (uVar6 & uVar8 ^ uVar8));
      }
      if (fVar22 <= 0.0) {
        fVar18 = fVar18 - 1e-08;
      }
      else {
        fVar18 = fVar18 + 1e-08;
      }
      iVar14 = 4;
      if ((int)fVar18 < 4) {
        iVar14 = (int)fVar18;
      }
      if (0 < iVar14) {
        uVar6 = iVar14 + 1;
        uVar13 = 0;
        uVar16 = uVar6;
        if (0 < (int)uVar6) {
          uVar15 = uVar10 + 0x1f;
          uVar9 = uVar13;
          do {
            uVar16 = uVar9;
            if ((*param_3 >> (uVar15 & 0x1f) & 1) != 0) break;
            uVar9 = uVar9 + 1;
            uVar15 = uVar15 - 1;
            uVar16 = uVar6;
          } while ((int)uVar9 < (int)uVar6);
        }
        uVar15 = uVar6;
        if (0 < (int)uVar6) {
          uVar9 = uVar13;
          do {
            uVar15 = uVar9;
            if ((*param_3 >> (uVar10 + 0x21 + uVar9 & 0x1f) & 1) != 0) break;
            uVar9 = uVar9 + 1;
            uVar15 = uVar6;
          } while ((int)uVar9 < (int)uVar6);
        }
        if (((int)uVar16 < iVar5) || (iVar14 < (int)uVar15)) {
          uVar13 = uVar8;
        }
        if (((int)uVar15 < iVar5) || (iVar14 < (int)uVar16)) {
          uVar13 = uVar13 - 1;
        }
        if (uVar13 == 0) {
          fVar18 = (float)atan2f();
          if (fVar18 < 0.0) {
            fVar18 = fVar18 + 6.2831855;
          }
          uVar8 = (uint)(fVar18 * 5.092958);
          if ((*param_3 >> (uVar8 & 0x1f) & 1) != 0) goto FUN_1805d2230;
          *param_3 = *param_3 & ~(1 << (uVar10 & 0x1f));
        }
        else {
          *param_3 = *param_3 & ~(1 << (uVar10 & 0x1f));
          uVar8 = *param_4 + 0x21 + ((int)uVar13 >> 0x1f & 0xfffffffeU) & 0x8000001f;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
          }
        }
        *param_4 = uVar8;
        *param_3 = *param_3 | 1 << (uVar8 & 0x1f);
      }
    }
  }
FUN_1805d2230:
  uVar8 = *param_4;
LAB_1805d2251:
  if ((uVar10 != uVar8) && (-1 < (int)uVar8)) {
    uVar10 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar10 = uVar10 >> 0x11 ^ uVar10;
    uVar10 = uVar10 << 5 ^ uVar10;
    *(uint *)(param_1 + 0x272) = uVar10;
    *(float *)(param_1 + 0x2e6) =
         (float)(uVar10 - 1) * 6.9849196e-11 * *(float *)(*(longlong *)(*param_1 + 0x20) + 0x1d0);
  }
  return;
}






