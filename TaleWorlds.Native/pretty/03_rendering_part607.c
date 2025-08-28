#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part607.c - 2 个函数

// 函数: void FUN_18059c48f(int32_t param_1)
void FUN_18059c48f(int32_t param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int32_t unaff_ESI;
  char cVar8;
  longlong unaff_RDI;
  longlong unaff_R12;
  int *unaff_R14;
  float fVar10;
  float fVar11;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  int32_t uVar9;
  
  cVar8 = (char)unaff_RDI;
  uVar9 = (int32_t)unaff_RDI;
  if (unaff_R14 != (int *)0x0) {
    if (*(int *)(unaff_RBX + 0x1d4) != 1) goto LAB_18059c6f5;
    if ((((unaff_R14 != *(int **)(unaff_RBX + 600)) && (iVar2 = *unaff_R14, iVar2 != 9)) &&
        (uVar3 = *(uint *)(*(longlong *)(unaff_RBX + 0x108) + 0x4c8), (uVar3 & 0x3c0) != 0)) &&
       (((uVar3 & 0x7c00) == 0 &&
        (iVar7 = FUN_1805a0a20(param_1,*(int32_t *)(unaff_RBX + 0x48)), iVar7 != -1)))) {
      *(int *)(unaff_RBX + 0x48) = iVar2;
      iVar2 = *unaff_R14;
      *(uint64_t *)(unaff_RBP + -0x59) = 0;
      *(uint64_t *)(unaff_RBP + -0x51) = 0;
      *(int32_t *)(unaff_RBP + -0x15) = 0;
      *(int32_t *)(unaff_RBP + -0x11) = 0;
      *(int32_t *)(unaff_RBP + -0xd) = 0;
      *(int32_t *)(unaff_RBP + -9) = 0;
      *(char *)(unaff_RBP + -0x21) = cVar8;
      *(int32_t *)(unaff_RBP + -5) = 0;
      *(int32_t *)(unaff_RBP + -1) = 0;
      *(int32_t *)(unaff_RBP + 3) = 0;
      *(int32_t *)(unaff_RBP + 7) = 0;
      *(uint64_t *)(unaff_RBP + -0x69) = 0xffffffffffffffff;
      *(int32_t *)(unaff_RBP + -0x61) = uVar9;
      *(longlong *)(unaff_RBP + -0x49) = unaff_RDI;
      *(int32_t *)(unaff_RBP + -0x41) = 0;
      *(int32_t *)(unaff_RBP + -0x3d) = 0x3f800000;
      *(int32_t *)(unaff_RBP + -0x39) = 0xbe4ccccd;
      *(int32_t *)(unaff_RBP + -0x35) = 0xbe4ccccd;
      *(uint64_t *)(unaff_RBP + -0x31) = 0x3ecccccd;
      *(int16_t *)(unaff_RBP + -0x29) = 0x100;
      *(int32_t *)(unaff_RBP + -0x1d) = uVar9;
      *(int *)(unaff_RBP + -0x19) = iVar2;
      *(uint64_t *)(unaff_RBP + 0xf) = 0xffffffffffffffff;
      *(int8_t *)(unaff_RBP + 0x17) = 0xff;
      *(longlong *)(unaff_RBP + 0x1b) = unaff_RDI;
      *(int32_t *)(unaff_RBP + 0xb) = 0xffffffff;
      *(int32_t *)(unaff_RBP + 0x23) = 0x3f800000;
      cVar6 = FUN_1805a4a20(0,unaff_ESI,unaff_RBP + -0x69,1);
      if (cVar6 != '\0') {
        *(uint64_t *)(unaff_RBX + 600) = *(uint64_t *)(unaff_RBX + 0x268);
        plVar4 = *(longlong **)(*(longlong *)(unaff_RBX + 0x108) + 0x590);
        fVar10 = (float)(**(code **)(*plVar4 + 0xf8))(plVar4,1);
        *(longlong *)(unaff_RBX + 0x248) =
             *(longlong *)(unaff_R12 + (longlong)*(int *)(unaff_RBX + 0x250) * 8) -
             (longlong)(-fVar10 * 100000.0);
      }
      goto LAB_18059c6f5;
    }
  }
  if (*(int *)(unaff_RBX + 0x1d4) == 1) {
    uVar3 = *(uint *)(*(longlong *)(unaff_RBX + 0x108) + 0x4c8);
    if (((uVar3 & 0x3c0) == 0) || ((uVar3 & 0x7c00) != 0)) {
      if (1.0 < (float)(*(longlong *)(unaff_R12 + (longlong)*(int *)(unaff_RBX + 0x250) * 8) -
                       *(longlong *)(unaff_RBX + 0x248)) * unaff_XMM6_Da) {
        *(char *)(unaff_RBP + -0x21) = cVar8;
        *(uint64_t *)(unaff_RBP + -0x59) = 0;
        *(uint64_t *)(unaff_RBP + -0x51) = 0;
        *(int32_t *)(unaff_RBP + -0x15) = 0;
        *(int32_t *)(unaff_RBP + -0x11) = 0;
        *(int32_t *)(unaff_RBP + -0xd) = 0;
        *(int32_t *)(unaff_RBP + -9) = 0;
        *(uint64_t *)(unaff_RBP + -0x69) = 0xffffffffffffffff;
        *(int32_t *)(unaff_RBP + -5) = 0;
        *(int32_t *)(unaff_RBP + -1) = 0;
        *(int32_t *)(unaff_RBP + 3) = 0;
        *(int32_t *)(unaff_RBP + 7) = 0;
        *(int32_t *)(unaff_RBP + -0x61) = uVar9;
        *(longlong *)(unaff_RBP + -0x49) = unaff_RDI;
        *(int32_t *)(unaff_RBP + -0x41) = 0;
        *(int32_t *)(unaff_RBP + -0x3d) = 0x3f800000;
        *(int32_t *)(unaff_RBP + -0x39) = 0xbe4ccccd;
        *(int32_t *)(unaff_RBP + -0x35) = 0xbe4ccccd;
        *(uint64_t *)(unaff_RBP + -0x31) = 0x3ecccccd;
        *(int16_t *)(unaff_RBP + -0x29) = 0x100;
        *(int32_t *)(unaff_RBP + -0x1d) = 6;
        *(int32_t *)(unaff_RBP + -0x19) = 0xffffffff;
        *(uint64_t *)(unaff_RBP + 0xf) = 0xffffffffffffffff;
        *(int8_t *)(unaff_RBP + 0x17) = 0xff;
        *(longlong *)(unaff_RBP + 0x1b) = unaff_RDI;
        *(int32_t *)(unaff_RBP + 0xb) = 0xffffffff;
        *(int32_t *)(unaff_RBP + 0x23) = 0x3f800000;
        FUN_1805a4a20(0,unaff_ESI,unaff_RBP + -0x69,1);
      }
    }
    else {
      lVar5 = *(longlong *)(unaff_R12 + (longlong)*(int *)(unaff_RBX + 0x250) * 8);
      fVar10 = (float)(lVar5 - *(longlong *)(unaff_RBX + 0x248)) * unaff_XMM6_Da;
      if (unaff_XMM7_Da <= fVar10) {
        fVar10 = unaff_XMM7_Da;
      }
      *(longlong *)(unaff_RBX + 0x248) = lVar5 - (longlong)(fVar10 * 100000.0);
    }
  }
LAB_18059c6f5:
  if (*(int *)(unaff_RBX + 0x1d4) != 1) {
    return;
  }
  uVar3 = *(uint *)(*(longlong *)(unaff_RBX + 0x108) + 0x4c8);
  if (((uVar3 & 0x3c0) == 0) || ((uVar3 & 0x7c00) != 0)) {
    if (*(char *)(unaff_RBX + 0x1e4) != cVar8) {
      return;
    }
    plVar4 = *(longlong **)(*(longlong *)(unaff_RBX + 0x108) + 0x590);
    fVar11 = (float)(**(code **)(*plVar4 + 0xa8))(plVar4,unaff_ESI);
    fVar10 = render_system_ui;
    if (0.2 <= fVar11) {
      return;
    }
    plVar4 = *(longlong **)(*(longlong *)(unaff_RBX + 0x108) + 0x590);
    fVar11 = (float)(**(code **)(*plVar4 + 0xa0))(plVar4,unaff_ESI);
    if (fVar10 * 0.7 <= fVar11) {
      return;
    }
  }
  if (*(longlong *)(unaff_RBX + 600) != unaff_RDI) {
    puVar1 = (uint *)(*(longlong *)(unaff_RBX + 0x108) + 0x4c8);
    *puVar1 = *puVar1 & 0xfffffc3f;
    iVar2 = **(int **)(unaff_RBX + 600);
    if (iVar2 == 0) {
      unaff_RDI = 0x100;
    }
    else if (iVar2 == 1) {
      unaff_RDI = 0x200;
    }
    else if (iVar2 == 2) {
      unaff_RDI = 0x40;
    }
    else if (iVar2 == 3) {
      unaff_RDI = 0x80;
    }
    puVar1 = (uint *)(*(longlong *)(unaff_RBX + 0x108) + 0x4c8);
    *puVar1 = *puVar1 | (uint)unaff_RDI;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18059c722(void)
void FUN_18059c722(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  float fVar5;
  longlong unaff_RBX;
  int32_t unaff_ESI;
  longlong unaff_RDI;
  float fVar6;
  
  uVar2 = *(uint *)(*(longlong *)(unaff_RBX + 0x108) + 0x4c8);
  if (((uVar2 & 0x3c0) == 0) || ((uVar2 & 0x7c00) != 0)) {
    if (*(char *)(unaff_RBX + 0x1e4) != (char)unaff_RDI) {
      return;
    }
    plVar4 = *(longlong **)(*(longlong *)(unaff_RBX + 0x108) + 0x590);
    fVar6 = (float)(**(code **)(*plVar4 + 0xa8))(plVar4,unaff_ESI);
    fVar5 = render_system_ui;
    if (0.2 <= fVar6) {
      return;
    }
    plVar4 = *(longlong **)(*(longlong *)(unaff_RBX + 0x108) + 0x590);
    fVar6 = (float)(**(code **)(*plVar4 + 0xa0))(plVar4,unaff_ESI);
    if (fVar5 * 0.7 <= fVar6) {
      return;
    }
  }
  if (*(longlong *)(unaff_RBX + 600) != unaff_RDI) {
    puVar1 = (uint *)(*(longlong *)(unaff_RBX + 0x108) + 0x4c8);
    *puVar1 = *puVar1 & 0xfffffc3f;
    iVar3 = **(int **)(unaff_RBX + 600);
    if (iVar3 == 0) {
      unaff_RDI = 0x100;
    }
    else if (iVar3 == 1) {
      unaff_RDI = 0x200;
    }
    else if (iVar3 == 2) {
      unaff_RDI = 0x40;
    }
    else if (iVar3 == 3) {
      unaff_RDI = 0x80;
    }
    puVar1 = (uint *)(*(longlong *)(unaff_RBX + 0x108) + 0x4c8);
    *puVar1 = *puVar1 | (uint)unaff_RDI;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



