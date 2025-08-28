#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part666_sub002.c - 1 个函数
// 函数: void function_64c2bf(int64_t param_1)
void function_64c2bf(int64_t param_1)
{
  uint uVar1;
  uint *unaff_RBX;
  int64_t unaff_RDI;
  uVar1 = *unaff_RBX;
  if (render_system_control_ui == 0) {
    AudioSystem_SoundManager(&system_data_bdf8);
  }
  if (render_system_control_ui == 0) {
    function_6492c0((((param_1 - unaff_RDI) + -0x80) / 0x50) * 0x10000 + unaff_RDI,
                  (uint64_t)uVar1 << 0x10);
  }
  else {
    function_6491b0();
  }
  *(byte *)(unaff_RBX + 2) = (byte)unaff_RBX[2] & 0xfb;
  *(uint64_t *)((int64_t)unaff_RBX + 10) = 0;
  *(uint64_t *)((int64_t)unaff_RBX + 0x12) = 0;
  *(int16_t *)((int64_t)unaff_RBX + 0x1a) = 0;
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
  function_64b830();
  *(int64_t *)(unaff_RDI + 0x48) = *(int64_t *)(unaff_RDI + 0x48) + -1;
  return;
}