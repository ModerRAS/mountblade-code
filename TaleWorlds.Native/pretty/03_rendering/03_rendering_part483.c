#include "TaleWorlds.Native.Split.h"

// 03_rendering_part483.c - 5 个函数

// 函数: void FUN_180526aff(float param_1)
void FUN_180526aff(float param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong lVar9;
  int iVar10;
  char unaff_R15B;
  float fVar11;
  float fVar12;
  float unaff_XMM6_Da;
  float unaff_XMM11_Da;
  
  iVar10 = 0;
  if (((*(uint *)(unaff_RBX + 0x56c) & 0x800) != 0) &&
     (param_1 = (float)(*(longlong *)
                         (&DAT_180c8ed30 +
                         (longlong)*(int *)(*(longlong *)(unaff_RBX + 0x728) + 0x590) * 8) -
                       *(longlong *)(*(longlong *)(unaff_RBX + 0x728) + 0x588)) * 1e-05,
     unaff_XMM6_Da < param_1)) {
    lVar8 = *(longlong *)(unaff_RBX + 0x590);
    *(undefined4 *)(lVar8 + 0xa414) = 0;
    *(undefined4 *)(lVar8 + 0xa418) = 0x40400000;
    *(longlong *)(*(longlong *)(unaff_RBX + 0x728) + 0x588) =
         *(longlong *)
          (&DAT_180c8ed30 + (longlong)*(int *)(*(longlong *)(unaff_RBX + 0x728) + 0x590) * 8) +
         0x9184e700000;
    if (((*(ushort *)(*(longlong *)(unaff_RBX + 0x728) + 0x5ac) |
         *(ushort *)(*(longlong *)(unaff_RBX + 0x728) + 0x5aa)) & 0x33ff) == 0) {
      lVar8 = *(longlong *)(unaff_RBX + 0x590);
      *(undefined8 *)(lVar8 + 0x3440) = 0;
      *(undefined8 *)(lVar8 + 0x3448) = 0;
    }
  }
  if (unaff_R15B == '\0') {
    if ((*(uint *)(unaff_RBX + 0x56c) & 0x800) != 0) goto LAB_180526d2c;
  }
  else {
    iVar5 = *(int *)(unaff_RBX + 0x564);
    lVar8 = *(longlong *)(unaff_RBX + 0x8d8);
    plVar2 = *(longlong **)((longlong)iVar5 * 0xa60 + 0x3630 + lVar8);
    if ((plVar2 != (longlong *)0x0) && ((int)plVar2[0x48a] != -1)) {
      param_1 = (float)(**(code **)(*plVar2 + 0x90))(plVar2,0);
      iVar5 = *(int *)(unaff_RBX + 0x564);
      lVar8 = *(longlong *)(unaff_RBX + 0x8d8);
    }
    if (*(longlong *)((longlong)iVar5 * 0xa60 + 0x3630 + lVar8) != 0) {
      *(undefined4 *)(unaff_RBP + 0x67) = 0x3f800000;
      iVar5 = FUN_18050d480(param_1,unaff_RBP + 0x67);
      if (*(int *)(*(longlong *)(unaff_RBX + 0x590) + 0x2450) != iVar5) {
        *(undefined4 *)(unaff_RBP + -0x29) = 0;
        *(undefined4 *)(unaff_RBP + -0x25) = 0;
        *(undefined4 *)(unaff_RBP + -0x21) = 0x3f800000;
        *(undefined4 *)(unaff_RBP + -0x1d) = 0xbe4ccccd;
        *(undefined4 *)(unaff_RBP + -0x19) = 0xbe4ccccd;
        *(undefined4 *)(unaff_RBP + -0x11) = 0x1000000;
        *(undefined4 *)(unaff_RBP + -0x15) = 0x3ecccccd;
        *(undefined1 *)(unaff_RBP + -0xd) = 0;
        *(undefined4 *)(unaff_RBP + -0x39) = 0;
        *(undefined4 *)(unaff_RBP + -0x35) = 0xffffffff;
        *(undefined8 *)(unaff_RBP + -0x31) = 0x2002;
        FUN_18051ec50(0,unaff_RBP + -0x39);
        if (iVar5 != -1) {
          *(undefined4 *)(unaff_RBP + -0x21) = *(undefined4 *)(unaff_RBP + 0x67);
          *(undefined8 *)(unaff_RBP + -0x31) = 0;
          *(undefined8 *)(unaff_RBP + -0x29) = 0;
          *(undefined4 *)(unaff_RBP + -0x11) = 0x1000000;
          *(undefined4 *)(unaff_RBP + -0x1d) = 0xbe4ccccd;
          *(undefined4 *)(unaff_RBP + -0x19) = 0xbe4ccccd;
          *(undefined4 *)(unaff_RBP + -0x15) = 0x3ecccccd;
          *(undefined1 *)(unaff_RBP + -0xd) = 0;
          *(undefined4 *)(unaff_RBP + -0x39) = 0;
          *(int *)(unaff_RBP + -0x35) = iVar5;
          FUN_18051ec50(*(undefined4 *)(unaff_RBP + 0x67),unaff_RBP + -0x39);
        }
      }
    }
    if (((*(uint *)(unaff_RBX + 0x56c) & 0x800) != 0) &&
       (*(int *)(*(longlong *)(unaff_RBX + 0x590) + 0x8228) < 0)) {
LAB_180526d2c:
      func_0x0001805a7480(unaff_RBX + 0x28);
    }
  }
  if ((((_DAT_180c92514 != 1) && (_DAT_180c92514 != 4)) &&
      ((*(uint *)(unaff_RBX + 0x56c) & 0x4000) != 0)) &&
     ((lVar8 = *(longlong *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e8), lVar8 != 0 &&
      ((*(byte *)((longlong)
                  *(int *)((longlong)*(int *)(lVar8 + 0xf0) * 0xa0 + 100 +
                          *(longlong *)(lVar8 + 0xd0)) * 0x170 + 0x140 + _DAT_180c95ff0) & 0x10) !=
       0)))) {
    cVar3 = FUN_1805a3b20(unaff_RBX + 0x28,unaff_RBP + 0x67);
    if (cVar3 == '\0') {
LAB_180526f68:
      lVar7 = *(longlong *)(unaff_RBX + 0x8f8);
      uVar6 = FUN_180590480(lVar8,0,*(undefined4 *)(unaff_RBX + 0x56c),unaff_R15B,
                            (byte)((uint)*(undefined4 *)(lVar7 + 0x9e4) >> 0x1f) ^ 1);
      if (*(char *)(unaff_RBP + 0x67) != '\0') {
        *(undefined4 *)(lVar7 + 0xa14) = *(undefined4 *)(lVar8 + 0xf0);
      }
LAB_180526faa:
      *(undefined4 *)(unaff_RBX + 0x2c0) = uVar6;
    }
    else {
      lVar7 = *(longlong *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9f0);
      lVar9 = (longlong)
              *(int *)((longlong)*(int *)(lVar8 + 0xf0) * 0xa0 + 100 + *(longlong *)(lVar8 + 0xd0))
              * 0x170 + _DAT_180c95ff0;
      uVar4 = func_0x000180525320();
      if (lVar7 == 0) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)
                 ((longlong)*(int *)(lVar7 + 0xf0) * 0xa0 + 100 + *(longlong *)(lVar7 + 0xd0));
      }
      lVar7 = FUN_18054f900(lVar9,9,unaff_R15B,uVar6,uVar4);
      if (lVar7 == 0) goto LAB_180526f68;
      iVar5 = *(int *)(lVar7 + 0x1c);
      iVar1 = *(int *)(*(longlong *)(unaff_RBX + 0x590) + 0x2498);
      if (iVar5 != iVar1) {
        if (iVar1 != -1) {
          iVar10 = *(int *)((longlong)iVar1 * 0x68 + 0x58 + _DAT_180c96150);
        }
        *(undefined8 *)(unaff_RBP + -0x31) = 0;
        *(undefined4 *)(unaff_RBP + -0x29) = 0;
        *(undefined4 *)(unaff_RBP + -0x11) = 0x1000000;
        *(undefined1 *)(unaff_RBP + -0xd) = 0;
        *(undefined4 *)(unaff_RBP + -0x39) = 1;
        *(int *)(unaff_RBP + -0x35) = iVar5;
        *(undefined8 *)(unaff_RBP + -0x21) = 0xbe4ccccd3f800000;
        *(undefined8 *)(unaff_RBP + -0x19) = 0x3ecccccdbe4ccccd;
        if (unaff_R15B == '\0') {
          fVar11 = 0.0;
        }
        else {
          fVar11 = *(float *)(unaff_RBX + 0x3bc);
          if (0.05 <= fVar11) {
            if (0.95 <= fVar11) {
              fVar11 = 0.95;
            }
          }
          else {
            fVar11 = 0.05;
          }
        }
        *(float *)(unaff_RBP + -0x25) = fVar11;
        cVar3 = FUN_18051ec50(fVar11,unaff_RBP + -0x39);
        if (cVar3 != '\0') {
          if (iVar10 != 0x20) {
            *(undefined4 *)(unaff_RBX + 0x7c) = 0xffff;
            *(undefined8 *)(unaff_RBX + 0x74) = 0xffffffffbf800000;
            *(undefined1 *)(unaff_RBX + 0x68) = 0;
            *(undefined4 *)(unaff_RBX + 0xb0) = 0xf149f2ca;
            *(undefined4 *)(unaff_RBX + 0xf0) = 0xf149f2ca;
            *(undefined1 *)(unaff_RBX + 0x100) = 0xff;
            *(undefined4 *)(unaff_RBX + 0x6c) = 0x3f800000;
            *(undefined4 *)(unaff_RBX + 0x70) = 1;
            *(undefined8 *)(unaff_RBX + 0x280) = 0;
          }
          goto LAB_180526fb7;
        }
        uVar6 = FUN_180590480(lVar8,0,*(undefined4 *)(unaff_RBX + 0x56c),unaff_R15B,
                              (byte)((uint)*(undefined4 *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e4)
                                    >> 0x1f) ^ 1);
        goto LAB_180526faa;
      }
    }
LAB_180526fb7:
    if (*(char *)(unaff_RBP + 0x67) == '\0') {
      *(undefined4 *)(*(longlong *)(unaff_RBX + 0x8f8) + 0xa14) = 0xffffffff;
    }
  }
  lVar8 = *(longlong *)(unaff_RBX + 0x590);
  if (((*(int *)(lVar8 + 0x2498) == -1) ||
      (*(int *)((longlong)*(int *)(lVar8 + 0x2498) * 0x68 + 0x58 + _DAT_180c96150) != 0x20)) ||
     (unaff_R15B == '\0')) {
    lVar8 = -0xe8d4a50000;
    lVar7 = *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(unaff_RBX + 0x5d0) * 8);
  }
  else {
    lVar7 = *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(unaff_RBX + 0x5d0) * 8);
    fVar11 = (float)(lVar7 - *(longlong *)(unaff_RBX + 0x5c8)) * 1e-05;
    if (unaff_XMM6_Da < fVar11) {
      fVar12 = *(float *)(unaff_RBX + 0x3cc);
      if (fVar12 < fVar11) {
        if (*(float *)(unaff_RBX + 0x3d0) <= fVar11) {
          *(undefined4 *)(lVar8 + 0x24d4) = 0x3f733333;
        }
        else {
          fVar12 = ((fVar11 - fVar12) / (*(float *)(unaff_RBX + 0x3d0) - fVar12)) *
                   (unaff_XMM11_Da - *(float *)(unaff_RBX + 0x3bc)) + *(float *)(unaff_RBX + 0x3bc);
          fVar11 = 0.05;
          if ((0.05 <= fVar12) && (fVar11 = fVar12, 0.95 <= fVar12)) {
            fVar11 = 0.95;
          }
          *(float *)(lVar8 + 0x24d4) = fVar11;
        }
      }
      goto LAB_1805270ca;
    }
    lVar8 = (longlong)unaff_XMM6_Da;
  }
  *(longlong *)(unaff_RBX + 0x5c8) = lVar7 - lVar8;
LAB_1805270ca:
  FUN_18058ada0(*(undefined8 *)(unaff_RBX + 0x590));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180526b0e(float param_1)
void FUN_180526b0e(float param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined *unaff_RSI;
  longlong lVar9;
  int iVar10;
  char unaff_R15B;
  float fVar11;
  float fVar12;
  float unaff_XMM6_Da;
  float unaff_XMM11_Da;
  
  iVar10 = 0;
  if (((*(uint *)(unaff_RBX + 0x56c) & 0x800) != 0) &&
     (param_1 = (float)(*(longlong *)
                         (unaff_RSI +
                         (longlong)*(int *)(*(longlong *)(unaff_RBX + 0x728) + 0x590) * 8) -
                       *(longlong *)(*(longlong *)(unaff_RBX + 0x728) + 0x588)) * 1e-05,
     unaff_XMM6_Da < param_1)) {
    lVar8 = *(longlong *)(unaff_RBX + 0x590);
    *(undefined4 *)(lVar8 + 0xa414) = 0;
    *(undefined4 *)(lVar8 + 0xa418) = 0x40400000;
    *(longlong *)(*(longlong *)(unaff_RBX + 0x728) + 0x588) =
         *(longlong *)(unaff_RSI + (longlong)*(int *)(*(longlong *)(unaff_RBX + 0x728) + 0x590) * 8)
         + 0x9184e700000;
    if (((*(ushort *)(*(longlong *)(unaff_RBX + 0x728) + 0x5ac) |
         *(ushort *)(*(longlong *)(unaff_RBX + 0x728) + 0x5aa)) & 0x33ff) == 0) {
      lVar8 = *(longlong *)(unaff_RBX + 0x590);
      *(undefined8 *)(lVar8 + 0x3440) = 0;
      *(undefined8 *)(lVar8 + 0x3448) = 0;
    }
  }
  if (unaff_R15B == '\0') {
    if ((*(uint *)(unaff_RBX + 0x56c) & 0x800) != 0) goto LAB_180526d2c;
  }
  else {
    iVar5 = *(int *)(unaff_RBX + 0x564);
    lVar8 = *(longlong *)(unaff_RBX + 0x8d8);
    plVar2 = *(longlong **)((longlong)iVar5 * 0xa60 + 0x3630 + lVar8);
    if ((plVar2 != (longlong *)0x0) && ((int)plVar2[0x48a] != -1)) {
      param_1 = (float)(**(code **)(*plVar2 + 0x90))(plVar2,0);
      iVar5 = *(int *)(unaff_RBX + 0x564);
      lVar8 = *(longlong *)(unaff_RBX + 0x8d8);
    }
    if (*(longlong *)((longlong)iVar5 * 0xa60 + 0x3630 + lVar8) != 0) {
      *(undefined4 *)(unaff_RBP + 0x67) = 0x3f800000;
      iVar5 = FUN_18050d480(param_1,unaff_RBP + 0x67);
      if (*(int *)(*(longlong *)(unaff_RBX + 0x590) + 0x2450) != iVar5) {
        *(undefined4 *)(unaff_RBP + -0x29) = 0;
        *(undefined4 *)(unaff_RBP + -0x25) = 0;
        *(undefined4 *)(unaff_RBP + -0x21) = 0x3f800000;
        *(undefined4 *)(unaff_RBP + -0x1d) = 0xbe4ccccd;
        *(undefined4 *)(unaff_RBP + -0x19) = 0xbe4ccccd;
        *(undefined4 *)(unaff_RBP + -0x11) = 0x1000000;
        *(undefined4 *)(unaff_RBP + -0x15) = 0x3ecccccd;
        *(undefined1 *)(unaff_RBP + -0xd) = 0;
        *(undefined4 *)(unaff_RBP + -0x39) = 0;
        *(undefined4 *)(unaff_RBP + -0x35) = 0xffffffff;
        *(undefined8 *)(unaff_RBP + -0x31) = 0x2002;
        FUN_18051ec50(0,unaff_RBP + -0x39);
        if (iVar5 != -1) {
          *(undefined4 *)(unaff_RBP + -0x21) = *(undefined4 *)(unaff_RBP + 0x67);
          *(undefined8 *)(unaff_RBP + -0x31) = 0;
          *(undefined8 *)(unaff_RBP + -0x29) = 0;
          *(undefined4 *)(unaff_RBP + -0x11) = 0x1000000;
          *(undefined4 *)(unaff_RBP + -0x1d) = 0xbe4ccccd;
          *(undefined4 *)(unaff_RBP + -0x19) = 0xbe4ccccd;
          *(undefined4 *)(unaff_RBP + -0x15) = 0x3ecccccd;
          *(undefined1 *)(unaff_RBP + -0xd) = 0;
          *(undefined4 *)(unaff_RBP + -0x39) = 0;
          *(int *)(unaff_RBP + -0x35) = iVar5;
          FUN_18051ec50(*(undefined4 *)(unaff_RBP + 0x67),unaff_RBP + -0x39);
        }
      }
    }
    if (((*(uint *)(unaff_RBX + 0x56c) & 0x800) != 0) &&
       (*(int *)(*(longlong *)(unaff_RBX + 0x590) + 0x8228) < 0)) {
LAB_180526d2c:
      func_0x0001805a7480(unaff_RBX + 0x28);
    }
  }
  if ((((_DAT_180c92514 != 1) && (_DAT_180c92514 != 4)) &&
      ((*(uint *)(unaff_RBX + 0x56c) & 0x4000) != 0)) &&
     ((lVar8 = *(longlong *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e8), lVar8 != 0 &&
      ((*(byte *)((longlong)
                  *(int *)((longlong)*(int *)(lVar8 + 0xf0) * 0xa0 + 100 +
                          *(longlong *)(lVar8 + 0xd0)) * 0x170 + 0x140 + _DAT_180c95ff0) & 0x10) !=
       0)))) {
    cVar3 = FUN_1805a3b20(unaff_RBX + 0x28,unaff_RBP + 0x67);
    if (cVar3 == '\0') {
LAB_180526f68:
      lVar7 = *(longlong *)(unaff_RBX + 0x8f8);
      uVar6 = FUN_180590480(lVar8,0,*(undefined4 *)(unaff_RBX + 0x56c),unaff_R15B,
                            (byte)((uint)*(undefined4 *)(lVar7 + 0x9e4) >> 0x1f) ^ 1);
      if (*(char *)(unaff_RBP + 0x67) != '\0') {
        *(undefined4 *)(lVar7 + 0xa14) = *(undefined4 *)(lVar8 + 0xf0);
      }
LAB_180526faa:
      unaff_RSI = &DAT_180c8ed30;
      *(undefined4 *)(unaff_RBX + 0x2c0) = uVar6;
    }
    else {
      lVar7 = *(longlong *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9f0);
      lVar9 = (longlong)
              *(int *)((longlong)*(int *)(lVar8 + 0xf0) * 0xa0 + 100 + *(longlong *)(lVar8 + 0xd0))
              * 0x170 + _DAT_180c95ff0;
      uVar4 = func_0x000180525320();
      if (lVar7 == 0) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)
                 ((longlong)*(int *)(lVar7 + 0xf0) * 0xa0 + 100 + *(longlong *)(lVar7 + 0xd0));
      }
      lVar7 = FUN_18054f900(lVar9,9,unaff_R15B,uVar6,uVar4);
      if (lVar7 == 0) goto LAB_180526f68;
      iVar5 = *(int *)(lVar7 + 0x1c);
      iVar1 = *(int *)(*(longlong *)(unaff_RBX + 0x590) + 0x2498);
      if (iVar5 != iVar1) {
        if (iVar1 != -1) {
          iVar10 = *(int *)((longlong)iVar1 * 0x68 + 0x58 + _DAT_180c96150);
        }
        *(undefined8 *)(unaff_RBP + -0x31) = 0;
        *(undefined4 *)(unaff_RBP + -0x29) = 0;
        *(undefined4 *)(unaff_RBP + -0x11) = 0x1000000;
        *(undefined1 *)(unaff_RBP + -0xd) = 0;
        *(undefined4 *)(unaff_RBP + -0x39) = 1;
        *(int *)(unaff_RBP + -0x35) = iVar5;
        *(undefined8 *)(unaff_RBP + -0x21) = 0xbe4ccccd3f800000;
        *(undefined8 *)(unaff_RBP + -0x19) = 0x3ecccccdbe4ccccd;
        if (unaff_R15B == '\0') {
          fVar11 = 0.0;
        }
        else {
          fVar11 = *(float *)(unaff_RBX + 0x3bc);
          if (0.05 <= fVar11) {
            if (0.95 <= fVar11) {
              fVar11 = 0.95;
            }
          }
          else {
            fVar11 = 0.05;
          }
        }
        *(float *)(unaff_RBP + -0x25) = fVar11;
        cVar3 = FUN_18051ec50(fVar11,unaff_RBP + -0x39);
        if (cVar3 != '\0') {
          unaff_RSI = &DAT_180c8ed30;
          if (iVar10 != 0x20) {
            *(undefined4 *)(unaff_RBX + 0x7c) = 0xffff;
            *(undefined8 *)(unaff_RBX + 0x74) = 0xffffffffbf800000;
            *(undefined1 *)(unaff_RBX + 0x68) = 0;
            *(undefined4 *)(unaff_RBX + 0xb0) = 0xf149f2ca;
            *(undefined4 *)(unaff_RBX + 0xf0) = 0xf149f2ca;
            *(undefined1 *)(unaff_RBX + 0x100) = 0xff;
            *(undefined4 *)(unaff_RBX + 0x6c) = 0x3f800000;
            *(undefined4 *)(unaff_RBX + 0x70) = 1;
            *(undefined8 *)(unaff_RBX + 0x280) = 0;
          }
          goto LAB_180526fb7;
        }
        uVar6 = FUN_180590480(lVar8,0,*(undefined4 *)(unaff_RBX + 0x56c),unaff_R15B,
                              (byte)((uint)*(undefined4 *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e4)
                                    >> 0x1f) ^ 1);
        goto LAB_180526faa;
      }
    }
LAB_180526fb7:
    if (*(char *)(unaff_RBP + 0x67) == '\0') {
      *(undefined4 *)(*(longlong *)(unaff_RBX + 0x8f8) + 0xa14) = 0xffffffff;
    }
  }
  lVar8 = *(longlong *)(unaff_RBX + 0x590);
  if (((*(int *)(lVar8 + 0x2498) == -1) ||
      (*(int *)((longlong)*(int *)(lVar8 + 0x2498) * 0x68 + 0x58 + _DAT_180c96150) != 0x20)) ||
     (unaff_R15B == '\0')) {
    lVar8 = -0xe8d4a50000;
    lVar7 = *(longlong *)(unaff_RSI + (longlong)*(int *)(unaff_RBX + 0x5d0) * 8);
  }
  else {
    lVar7 = *(longlong *)(unaff_RSI + (longlong)*(int *)(unaff_RBX + 0x5d0) * 8);
    fVar11 = (float)(lVar7 - *(longlong *)(unaff_RBX + 0x5c8)) * 1e-05;
    if (unaff_XMM6_Da < fVar11) {
      fVar12 = *(float *)(unaff_RBX + 0x3cc);
      if (fVar12 < fVar11) {
        if (*(float *)(unaff_RBX + 0x3d0) <= fVar11) {
          *(undefined4 *)(lVar8 + 0x24d4) = 0x3f733333;
        }
        else {
          fVar12 = ((fVar11 - fVar12) / (*(float *)(unaff_RBX + 0x3d0) - fVar12)) *
                   (unaff_XMM11_Da - *(float *)(unaff_RBX + 0x3bc)) + *(float *)(unaff_RBX + 0x3bc);
          fVar11 = 0.05;
          if ((0.05 <= fVar12) && (fVar11 = fVar12, 0.95 <= fVar12)) {
            fVar11 = 0.95;
          }
          *(float *)(lVar8 + 0x24d4) = fVar11;
        }
      }
      goto LAB_1805270ca;
    }
    lVar8 = (longlong)unaff_XMM6_Da;
  }
  *(longlong *)(unaff_RBX + 0x5c8) = lVar7 - lVar8;
LAB_1805270ca:
  FUN_18058ada0(*(undefined8 *)(unaff_RBX + 0x590));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180526ffa(undefined8 param_1,longlong param_2)
void FUN_180526ffa(undefined8 param_1,longlong param_2)

{
  float fVar1;
  longlong in_RAX;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBX;
  longlong unaff_RSI;
  char unaff_R15B;
  float in_XMM1_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM11_Da;
  
  if ((*(int *)(in_RAX * 0x68 + 0x58 + _DAT_180c96150) == 0x20) && (unaff_R15B != '\0')) {
    lVar3 = *(longlong *)(unaff_RSI + (longlong)*(int *)(unaff_RBX + 0x5d0) * 8);
    in_XMM1_Da = (float)(lVar3 - *(longlong *)(unaff_RBX + 0x5c8)) * 1e-05;
    if (unaff_XMM6_Da < in_XMM1_Da) {
      fVar1 = *(float *)(unaff_RBX + 0x3cc);
      if (fVar1 < in_XMM1_Da) {
        if (*(float *)(unaff_RBX + 0x3d0) <= in_XMM1_Da) {
          *(undefined4 *)(param_2 + 0x24d4) = 0x3f733333;
        }
        else {
          in_XMM1_Da = ((in_XMM1_Da - fVar1) / (*(float *)(unaff_RBX + 0x3d0) - fVar1)) *
                       (unaff_XMM11_Da - *(float *)(unaff_RBX + 0x3bc)) +
                       *(float *)(unaff_RBX + 0x3bc);
          if ((unaff_XMM7_Da <= in_XMM1_Da) && (unaff_XMM7_Da = in_XMM1_Da, 0.95 <= in_XMM1_Da)) {
            unaff_XMM7_Da = 0.95;
          }
          *(float *)(param_2 + 0x24d4) = unaff_XMM7_Da;
        }
      }
      goto LAB_1805270ca;
    }
    lVar2 = (longlong)unaff_XMM6_Da;
  }
  else {
    lVar2 = -0xe8d4a50000;
    lVar3 = *(longlong *)(unaff_RSI + (longlong)*(int *)(unaff_RBX + 0x5d0) * 8);
  }
  *(longlong *)(unaff_RBX + 0x5c8) = lVar3 - lVar2;
LAB_1805270ca:
  FUN_18058ada0(*(undefined8 *)(unaff_RBX + 0x590),in_XMM1_Da,
                *(undefined8 *)(*(longlong *)(unaff_RBX + 0x658) + 0x208));
  return;
}





// 函数: void FUN_1805270fc(void)
void FUN_1805270fc(void)

{
  return;
}





// 函数: void FUN_180527112(void)
void FUN_180527112(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



