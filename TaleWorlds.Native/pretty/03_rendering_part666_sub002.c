#include "TaleWorlds.Native.Split.h"

// 03_rendering_part666_sub002.c - 1 个函数

// 函数: void FUN_18064c2bf(longlong param_1)
void FUN_18064c2bf(longlong param_1)

{
  uint uVar1;
  uint *unaff_RBX;
  longlong unaff_RDI;
  
  uVar1 = *unaff_RBX;
  if (_DAT_180bfbdfc == 0) {
    FUN_180650490(&DAT_180bfbdf8);
  }
  if (_DAT_180bfbdf8 == 0) {
    FUN_1806492c0((((param_1 - unaff_RDI) + -0x80) / 0x50) * 0x10000 + unaff_RDI,
                  (ulonglong)uVar1 << 0x10);
  }
  else {
    FUN_1806491b0();
  }
  *(byte *)(unaff_RBX + 2) = (byte)unaff_RBX[2] & 0xfb;
  *(uint64_t *)((longlong)unaff_RBX + 10) = 0;
  *(uint64_t *)((longlong)unaff_RBX + 0x12) = 0;
  *(int16_t *)((longlong)unaff_RBX + 0x1a) = 0;
  unaff_RBX[8] = 0;
  unaff_RBX[9] = 0;
  unaff_RBX[10] = 0;
  unaff_RBX[0xb] = 0;
  unaff_RBX[0xc] = 0;
  unaff_RBX[0xd] = 0;
  unaff_RBX[0xe] = 0;
  unaff_RBX[0xf] = 0;
  unaff_RBX[0x10] = 0;
  unaff_RBX[0x11] = 0;
  unaff_RBX[0x12] = 0;
  unaff_RBX[0x13] = 0;
  unaff_RBX[7] = 1;
  FUN_18064b830();
  *(longlong *)(unaff_RDI + 0x48) = *(longlong *)(unaff_RDI + 0x48) + -1;
  return;
}






