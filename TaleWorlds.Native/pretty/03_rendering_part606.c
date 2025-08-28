#include "TaleWorlds.Native.Split.h"

// 03_rendering_part606.c - 4 个函数

// 函数: void FUN_18059bc2a(void)
void FUN_18059bc2a(void)

{
  uint *puVar1;
  int iVar2;
  int32_t uVar3;
  char cVar4;
  int32_t *puVar5;
  uint uVar6;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint uVar7;
  uint64_t unaff_RDI;
  char unaff_R15B;
  
  puVar5 = (int32_t *)FUN_1805a0900();
  uVar7 = (uint)unaff_RDI;
  if ((((puVar5 != (int32_t *)0x0) &&
       (cVar4 = func_0x000180525320(), *(char *)((longlong)puVar5 + 5) == cVar4)) &&
      (iVar2 = *(int *)(*(longlong *)(unaff_RSI + 0x590) + 0x2498), iVar2 != -1)) &&
     (*(char *)((longlong)iVar2 * 0x68 + 0x60 + _DAT_180c96150) == '\x05')) {
    uVar3 = *puVar5;
    *(uint64_t *)(unaff_RBP + -0x39) = 0;
    *(uint64_t *)(unaff_RBP + -0x31) = 0;
    *(int32_t *)(unaff_RBP + 0xb) = 0;
    *(int32_t *)(unaff_RBP + 0xf) = 0;
    *(int32_t *)(unaff_RBP + 0x13) = 0;
    *(int32_t *)(unaff_RBP + 0x17) = 0;
    *(char *)(unaff_RBP + -1) = (char)unaff_RDI;
    *(int32_t *)(unaff_RBP + 0x1b) = 0;
    *(int32_t *)(unaff_RBP + 0x1f) = 0;
    *(int32_t *)(unaff_RBP + 0x23) = 0;
    *(int32_t *)(unaff_RBP + 0x27) = 0;
    *(uint64_t *)(unaff_RBP + -0x49) = 0xffffffffffffffff;
    *(uint *)(unaff_RBP + -0x41) = uVar7;
    *(uint64_t *)(unaff_RBP + -0x29) = unaff_RDI;
    *(int32_t *)(unaff_RBP + -0x21) = 0;
    *(int32_t *)(unaff_RBP + -0x1d) = 0x3f800000;
    *(int32_t *)(unaff_RBP + -0x19) = 0xbe4ccccd;
    *(int32_t *)(unaff_RBP + -0x15) = 0xbe4ccccd;
    *(uint64_t *)(unaff_RBP + -0x11) = 0x3ecccccd;
    *(int16_t *)(unaff_RBP + -9) = 0x100;
    *(int32_t *)(unaff_RBP + 3) = 5;
    *(int32_t *)(unaff_RBP + 7) = uVar3;
    *(uint64_t *)(unaff_RBP + 0x2f) = 0xffffffffffffffff;
    *(int8_t *)(unaff_RBP + 0x37) = 0xff;
    *(uint64_t *)(unaff_RBP + 0x3b) = unaff_RDI;
    *(int32_t *)(unaff_RBP + 0x2b) = 0xffffffff;
    *(int32_t *)(unaff_RBP + 0x43) = 0x3f800000;
    cVar4 = FUN_1805a4a20(0,1,unaff_RBP + -0x49,1);
    if (cVar4 != '\0') {
      *(int32_t **)(unaff_RBX + 0x270) = puVar5;
    }
  }
  if ((*(int *)(*(longlong *)(unaff_RBX + 0x108) + 0x570) == 2) &&
     (**(int **)(unaff_RBX + 0x260) != 8)) {
    puVar1 = (uint *)(*(longlong *)(unaff_RBX + 0x108) + 0x4c8);
    *puVar1 = *puVar1 & 0xffff83ff;
    iVar2 = **(int **)(unaff_RBX + 0x260);
    if (iVar2 == 4) {
      uVar6 = 0x1000;
    }
    else if (iVar2 == 5) {
      uVar6 = 0x2000;
    }
    else if (iVar2 == 6) {
      uVar6 = 0x400;
    }
    else {
      uVar6 = uVar7;
      if (iVar2 == 7) {
        uVar6 = 0x800;
      }
    }
    puVar1 = (uint *)(*(longlong *)(unaff_RBX + 0x108) + 0x4c8);
    *puVar1 = *puVar1 | uVar6;
  }
  if (unaff_R15B != '\0') {
    *(char *)(unaff_RBP + -1) = (char)unaff_RDI;
    *(uint64_t *)(unaff_RBP + -0x39) = 0;
    *(uint64_t *)(unaff_RBP + -0x31) = 0;
    *(int32_t *)(unaff_RBP + 0xb) = 0;
    *(int32_t *)(unaff_RBP + 0xf) = 0;
    *(int32_t *)(unaff_RBP + 0x13) = 0;
    *(int32_t *)(unaff_RBP + 0x17) = 0;
    *(uint64_t *)(unaff_RBP + -0x49) = 0xffffffffffffffff;
    *(int32_t *)(unaff_RBP + 0x1b) = 0;
    *(int32_t *)(unaff_RBP + 0x1f) = 0;
    *(int32_t *)(unaff_RBP + 0x23) = 0;
    *(int32_t *)(unaff_RBP + 0x27) = 0;
    *(uint *)(unaff_RBP + -0x41) = uVar7;
    *(uint64_t *)(unaff_RBP + -0x29) = unaff_RDI;
    *(int32_t *)(unaff_RBP + -0x21) = 0;
    *(int32_t *)(unaff_RBP + -0x1d) = 0x3f800000;
    *(int32_t *)(unaff_RBP + -0x19) = 0xbe4ccccd;
    *(int32_t *)(unaff_RBP + -0x15) = 0xbe4ccccd;
    *(uint64_t *)(unaff_RBP + -0x11) = 0x3ecccccd;
    *(int16_t *)(unaff_RBP + -9) = 0x100;
    *(int32_t *)(unaff_RBP + 3) = 7;
    *(int32_t *)(unaff_RBP + 7) = 0xffffffff;
    *(uint64_t *)(unaff_RBP + 0x2f) = 0xffffffffffffffff;
    *(int8_t *)(unaff_RBP + 0x37) = 0xff;
    *(uint64_t *)(unaff_RBP + 0x3b) = unaff_RDI;
    *(int32_t *)(unaff_RBP + 0x2b) = 0xffffffff;
    *(int32_t *)(unaff_RBP + 0x43) = 0x3f800000;
    FUN_1805a4a20(0,1,unaff_RBP + -0x49,1);
  }
  return;
}





// 函数: void FUN_18059bd17(void)
void FUN_18059bd17(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint64_t unaff_RDI;
  char unaff_R15B;
  
  if ((*(int *)(*(longlong *)(unaff_RBX + 0x108) + 0x570) == 2) &&
     (**(int **)(unaff_RBX + 0x260) != 8)) {
    puVar1 = (uint *)(*(longlong *)(unaff_RBX + 0x108) + 0x4c8);
    *puVar1 = *puVar1 & 0xffff83ff;
    iVar2 = **(int **)(unaff_RBX + 0x260);
    if (iVar2 == 4) {
      uVar3 = 0x1000;
    }
    else if (iVar2 == 5) {
      uVar3 = 0x2000;
    }
    else if (iVar2 == 6) {
      uVar3 = 0x400;
    }
    else {
      uVar3 = (uint)unaff_RDI;
      if (iVar2 == 7) {
        uVar3 = 0x800;
      }
    }
    puVar1 = (uint *)(*(longlong *)(unaff_RBX + 0x108) + 0x4c8);
    *puVar1 = *puVar1 | uVar3;
  }
  if (unaff_R15B != '\0') {
    *(char *)(unaff_RBP + -1) = (char)unaff_RDI;
    *(uint64_t *)(unaff_RBP + -0x39) = 0;
    *(uint64_t *)(unaff_RBP + -0x31) = 0;
    *(int32_t *)(unaff_RBP + 0xb) = 0;
    *(int32_t *)(unaff_RBP + 0xf) = 0;
    *(int32_t *)(unaff_RBP + 0x13) = 0;
    *(int32_t *)(unaff_RBP + 0x17) = 0;
    *(uint64_t *)(unaff_RBP + -0x49) = 0xffffffffffffffff;
    *(int32_t *)(unaff_RBP + 0x1b) = 0;
    *(int32_t *)(unaff_RBP + 0x1f) = 0;
    *(int32_t *)(unaff_RBP + 0x23) = 0;
    *(int32_t *)(unaff_RBP + 0x27) = 0;
    *(uint *)(unaff_RBP + -0x41) = (uint)unaff_RDI;
    *(uint64_t *)(unaff_RBP + -0x29) = unaff_RDI;
    *(int32_t *)(unaff_RBP + -0x21) = 0;
    *(int32_t *)(unaff_RBP + -0x1d) = 0x3f800000;
    *(int32_t *)(unaff_RBP + -0x19) = 0xbe4ccccd;
    *(int32_t *)(unaff_RBP + -0x15) = 0xbe4ccccd;
    *(uint64_t *)(unaff_RBP + -0x11) = 0x3ecccccd;
    *(int16_t *)(unaff_RBP + -9) = 0x100;
    *(int32_t *)(unaff_RBP + 3) = 7;
    *(int32_t *)(unaff_RBP + 7) = 0xffffffff;
    *(uint64_t *)(unaff_RBP + 0x2f) = 0xffffffffffffffff;
    *(int8_t *)(unaff_RBP + 0x37) = 0xff;
    *(uint64_t *)(unaff_RBP + 0x3b) = unaff_RDI;
    *(int32_t *)(unaff_RBP + 0x2b) = 0xffffffff;
    *(int32_t *)(unaff_RBP + 0x43) = 0x3f800000;
    FUN_1805a4a20(0,1,unaff_RBP + -0x49,1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18059c100(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  float extraout_XMM0_Da;
  
  fVar2 = _DAT_180c963d0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x108) + 0x590);
  if (((int)plVar1[0x493] != -1) &&
     (*(char *)((longlong)(int)plVar1[0x493] * 0x68 + 0x60 + _DAT_180c96150) == '\x02')) {
    (**(code **)(*plVar1 + 0x90))(plVar1,1);
    if (fVar2 < extraout_XMM0_Da) {
      return 1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_18059c138(void)

{
  float fVar1;
  int8_t in_AL;
  uint8_t in_register_00000001;
  float fVar2;
  
  fVar1 = _DAT_180c963d0;
  fVar2 = (float)(**(code **)(CONCAT71(in_register_00000001,in_AL) + 0x90))();
  if (fVar1 < fVar2) {
    return 1;
  }
  return 0;
}



int8_t FUN_18059c155(void)

{
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18059c170(longlong param_1)
void FUN_18059c170(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  uint64_t uStack_c8;
  int32_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_98;
  int32_t uStack_94;
  uint64_t uStack_90;
  int16_t uStack_88;
  int8_t uStack_80;
  uint uStack_7c;
  int iStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  uint64_t uStack_50;
  int8_t uStack_48;
  uint64_t uStack_44;
  int32_t uStack_3c;
  
  uVar8 = *(uint *)(*(longlong *)(param_1 + 0x108) + 0x56c) >> 0xe & 1;
  if (*(int *)(param_1 + 0x1d4) == 2) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x108) + 0x590);
    fVar11 = (float)(**(code **)(*plVar2 + 0x90))(plVar2,uVar8);
    fVar12 = _DAT_180c96438;
    if ((*(longlong *)(param_1 + 600) != 0) && (*(int *)(*(longlong *)(param_1 + 600) + 0x104) == 1)
       ) {
      fVar12 = _DAT_180c9643c;
    }
    if (fVar12 < fVar11) {
      *(int32_t *)(param_1 + 0x1d4) = 5;
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x108);
  uVar9 = 0;
  iVar4 = *(int *)(*(longlong *)(lVar7 + 0x590) + 0x2450);
  if ((((iVar4 == -1) || (1 < *(int *)((longlong)iVar4 * 0x68 + 0x58 + _DAT_180c96150) - 0x1cU)) &&
      ((iVar4 = *(int *)(*(longlong *)(lVar7 + 0x590) + 0x2498), iVar4 == -1 ||
       (*(int *)((longlong)iVar4 * 0x68 + 0x58 + _DAT_180c96150) != 0x1f)))) &&
     (((((*(uint *)(lVar7 + 0x4c8) & 0x7c00) == 0 &&
        (piVar10 = *(int **)(param_1 + 0x268), piVar10 != (int *)0x0)) &&
       (0.0 <= (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x200) * 8) -
                      *(longlong *)(param_1 + 0x1f8)) * 1e-05)) &&
      ((uVar6 = *(uint *)(param_1 + 0x1d4), uVar6 < 8 && ((0xa1U >> (uVar6 & 0x1f) & 1) != 0)))))) {
    if (uVar6 == 7) {
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_80 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_c8 = 0xffffffffffffffff;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_9c = 0x3f800000;
      uStack_98 = 0xbe4ccccd;
      uStack_94 = 0xbe4ccccd;
      uStack_90 = 0x3ecccccd;
      uStack_88 = 0x100;
      iStack_78 = -1;
      uStack_50 = 0xffffffffffffffff;
      uStack_48 = 0xff;
      uStack_44 = 0;
      uStack_54 = 0xffffffff;
      uStack_3c = 0x3f800000;
      uStack_7c = uVar6;
      FUN_1805a4a20(param_1,uVar8,&uStack_c8,1);
      lVar7 = *(longlong *)(param_1 + 0x108);
      uVar6 = *(uint *)(param_1 + 0x1d4);
      piVar10 = *(int **)(param_1 + 0x268);
    }
    if ((((((*(uint *)(lVar7 + 0x4c8) & 0x3c0) != 0) || (*(int *)(param_1 + 0x27c) - 4U < 5)) &&
         (uVar6 == 0)) || (*(uint *)(param_1 + 0x27c) < 4)) &&
       ((iVar4 = *piVar10, *(int *)(param_1 + 0x48) = iVar4, iVar4 != 9 &&
        (iVar4 = FUN_1805a0a20(param_1), iVar4 != -1)))) {
      uStack_80 = 0;
      uStack_c8 = 0xffffffffffffffff;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_7c = (uint)(*(uint *)(param_1 + 0x27c) < 4);
      iStack_78 = *piVar10;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_9c = 0x3f800000;
      uStack_98 = 0xbe4ccccd;
      uStack_94 = 0xbe4ccccd;
      uStack_90 = 0x3ecccccd;
      uStack_88 = 0x100;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_50 = 0xffffffffffffffff;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_48 = 0xff;
      uStack_44 = 0;
      uStack_54 = 0xffffffff;
      uStack_3c = 0x3f800000;
      cVar3 = FUN_1805a4a20(param_1,uVar8,&uStack_c8,1);
      if (cVar3 != '\0') {
        *(uint64_t *)(param_1 + 600) = *(uint64_t *)(param_1 + 0x268);
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x108) + 0x590);
        fVar12 = (float)(**(code **)(*plVar2 + 0xf8))(plVar2,1);
        *(longlong *)(param_1 + 0x248) =
             *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x250) * 8) -
             (longlong)(-fVar12 * 100000.0);
      }
    }
  }
  piVar10 = *(int **)(param_1 + 0x268);
  if (piVar10 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1d4) != 1) goto LAB_18059c6f5;
    if ((((piVar10 != *(int **)(param_1 + 600)) && (iVar4 = *piVar10, iVar4 != 9)) &&
        (uVar6 = *(uint *)(*(longlong *)(param_1 + 0x108) + 0x4c8), (uVar6 & 0x3c0) != 0)) &&
       (((uVar6 & 0x7c00) == 0 &&
        (iVar5 = FUN_1805a0a20(param_1,*(int32_t *)(param_1 + 0x48)), iVar5 != -1)))) {
      *(int *)(param_1 + 0x48) = iVar4;
      iStack_78 = *piVar10;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_80 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_c8 = 0xffffffffffffffff;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_9c = 0x3f800000;
      uStack_98 = 0xbe4ccccd;
      uStack_94 = 0xbe4ccccd;
      uStack_90 = 0x3ecccccd;
      uStack_88 = 0x100;
      uStack_7c = 0;
      uStack_50 = 0xffffffffffffffff;
      uStack_48 = 0xff;
      uStack_44 = 0;
      uStack_54 = 0xffffffff;
      uStack_3c = 0x3f800000;
      cVar3 = FUN_1805a4a20(param_1,uVar8,&uStack_c8,1);
      if (cVar3 != '\0') {
        *(uint64_t *)(param_1 + 600) = *(uint64_t *)(param_1 + 0x268);
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x108) + 0x590);
        fVar12 = (float)(**(code **)(*plVar2 + 0xf8))(plVar2,1);
        *(longlong *)(param_1 + 0x248) =
             *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x250) * 8) -
             (longlong)(-fVar12 * 100000.0);
      }
      goto LAB_18059c6f5;
    }
  }
  if (*(int *)(param_1 + 0x1d4) == 1) {
    uVar6 = *(uint *)(*(longlong *)(param_1 + 0x108) + 0x4c8);
    if (((uVar6 & 0x3c0) == 0) || ((uVar6 & 0x7c00) != 0)) {
      if (1.0 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x250) * 8) -
                       *(longlong *)(param_1 + 0x248)) * 1e-05) {
        uStack_80 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        uStack_68 = 0;
        uStack_c8 = 0xffffffffffffffff;
        uStack_64 = 0;
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_58 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_9c = 0x3f800000;
        uStack_98 = 0xbe4ccccd;
        uStack_94 = 0xbe4ccccd;
        uStack_90 = 0x3ecccccd;
        uStack_88 = 0x100;
        uStack_7c = 6;
        iStack_78 = -1;
        uStack_50 = 0xffffffffffffffff;
        uStack_48 = 0xff;
        uStack_44 = 0;
        uStack_54 = 0xffffffff;
        uStack_3c = 0x3f800000;
        FUN_1805a4a20(param_1,uVar8,&uStack_c8,1);
      }
    }
    else {
      fVar12 = (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x250) * 8) -
                      *(longlong *)(param_1 + 0x248)) * 1e-05;
      if (0.0 <= fVar12) {
        fVar12 = 0.0;
      }
      *(longlong *)(param_1 + 0x248) =
           *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x250) * 8) -
           (longlong)(fVar12 * 100000.0);
    }
  }
LAB_18059c6f5:
  if (*(int *)(param_1 + 0x1d4) == 1) {
    uVar6 = *(uint *)(*(longlong *)(param_1 + 0x108) + 0x4c8);
    if (((((uVar6 & 0x3c0) != 0) && ((uVar6 & 0x7c00) == 0)) ||
        ((*(char *)(param_1 + 0x1e4) == '\0' &&
         ((plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x108) + 0x590),
          fVar11 = (float)(**(code **)(*plVar2 + 0xa8))(plVar2,uVar8), fVar12 = _DAT_180c963e4,
          fVar11 < 0.2 &&
          (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x108) + 0x590),
          fVar11 = (float)(**(code **)(*plVar2 + 0xa0))(plVar2,uVar8), fVar11 < fVar12 * 0.7))))))
       && (*(longlong *)(param_1 + 600) != 0)) {
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x108) + 0x4c8);
      *puVar1 = *puVar1 & 0xfffffc3f;
      iVar4 = **(int **)(param_1 + 600);
      if (iVar4 == 0) {
        uVar9 = 0x100;
      }
      else if (iVar4 == 1) {
        uVar9 = 0x200;
      }
      else if (iVar4 == 2) {
        uVar9 = 0x40;
      }
      else if (iVar4 == 3) {
        uVar9 = 0x80;
      }
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x108) + 0x4c8);
      *puVar1 = *puVar1 | uVar9;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18059c193(float param_1)
void FUN_18059c193(float param_1)

{
  uint *puVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong in_RAX;
  uint uVar6;
  longlong in_RCX;
  longlong lVar7;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint uVar8;
  uint uVar9;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  int *piVar10;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar11;
  float fVar12;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  
  *(uint64_t *)(in_RAX + 8) = unaff_R12;
  *(uint64_t *)(in_RAX + 0x10) = unaff_R14;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM7_Dd;
  uVar8 = *(uint *)(in_RCX + 0x56c) >> 0xe & 1;
  if (*(int *)(unaff_RBX + 0x1d4) == 2) {
    param_1 = (float)(**(code **)(**(longlong **)(in_RCX + 0x590) + 0x90))
                               (*(longlong **)(in_RCX + 0x590),uVar8);
    fVar11 = _DAT_180c96438;
    if ((*(longlong *)(unaff_RBX + 600) != 0) &&
       (*(int *)(*(longlong *)(unaff_RBX + 600) + 0x104) == 1)) {
      fVar11 = _DAT_180c9643c;
    }
    if (fVar11 < param_1) {
      *(int32_t *)(unaff_RBX + 0x1d4) = 5;
    }
  }
  lVar7 = *(longlong *)(unaff_RBX + 0x108);
  uVar9 = 0;
  iVar4 = *(int *)(*(longlong *)(lVar7 + 0x590) + 0x2450);
  if ((((iVar4 == -1) || (1 < *(int *)((longlong)iVar4 * 0x68 + 0x58 + _DAT_180c96150) - 0x1cU)) &&
      ((iVar4 = *(int *)(*(longlong *)(lVar7 + 0x590) + 0x2498), iVar4 == -1 ||
       (*(int *)((longlong)iVar4 * 0x68 + 0x58 + _DAT_180c96150) != 0x1f)))) &&
     (((((*(uint *)(lVar7 + 0x4c8) & 0x7c00) == 0 &&
        (piVar10 = *(int **)(unaff_RBX + 0x268), piVar10 != (int *)0x0)) &&
       (param_1 = (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(unaff_RBX + 0x200) * 8)
                         - *(longlong *)(unaff_RBX + 0x1f8)) * 1e-05, 0.0 <= param_1)) &&
      ((uVar6 = *(uint *)(unaff_RBX + 0x1d4), uVar6 < 8 && ((0xa1U >> (uVar6 & 0x1f) & 1) != 0))))))
  {
    if (uVar6 == 7) {
      *(int32_t *)(unaff_RBP + -0x1d) = 7;
      *(uint64_t *)(unaff_RBP + -0x59) = 0;
      *(uint64_t *)(unaff_RBP + -0x51) = 0;
      *(int32_t *)(unaff_RBP + -0x15) = 0;
      *(int32_t *)(unaff_RBP + -0x11) = 0;
      *(int32_t *)(unaff_RBP + -0xd) = 0;
      *(int32_t *)(unaff_RBP + -9) = 0;
      *(int8_t *)(unaff_RBP + -0x21) = 0;
      *(int32_t *)(unaff_RBP + -5) = 0;
      *(int32_t *)(unaff_RBP + -1) = 0;
      *(int32_t *)(unaff_RBP + 3) = 0;
      *(int32_t *)(unaff_RBP + 7) = 0;
      *(uint64_t *)(unaff_RBP + -0x69) = 0xffffffffffffffff;
      *(int32_t *)(unaff_RBP + -0x61) = 0;
      *(uint64_t *)(unaff_RBP + -0x49) = 0;
      *(int32_t *)(unaff_RBP + -0x41) = 0;
      *(int32_t *)(unaff_RBP + -0x3d) = 0x3f800000;
      *(int32_t *)(unaff_RBP + -0x39) = 0xbe4ccccd;
      *(int32_t *)(unaff_RBP + -0x35) = 0xbe4ccccd;
      *(uint64_t *)(unaff_RBP + -0x31) = 0x3ecccccd;
      *(int16_t *)(unaff_RBP + -0x29) = 0x100;
      *(int32_t *)(unaff_RBP + -0x19) = 0xffffffff;
      *(uint64_t *)(unaff_RBP + 0xf) = 0xffffffffffffffff;
      *(int8_t *)(unaff_RBP + 0x17) = 0xff;
      *(uint64_t *)(unaff_RBP + 0x1b) = 0;
      *(int32_t *)(unaff_RBP + 0xb) = 0xffffffff;
      *(int32_t *)(unaff_RBP + 0x23) = 0x3f800000;
      param_1 = (float)FUN_1805a4a20(0,uVar8,unaff_RBP + -0x69,1);
      lVar7 = *(longlong *)(unaff_RBX + 0x108);
      uVar6 = *(uint *)(unaff_RBX + 0x1d4);
      piVar10 = *(int **)(unaff_RBX + 0x268);
    }
    if ((((((*(uint *)(lVar7 + 0x4c8) & 0x3c0) != 0) || (*(int *)(unaff_RBX + 0x27c) - 4U < 5)) &&
         (uVar6 == 0)) || (*(uint *)(unaff_RBX + 0x27c) < 4)) &&
       ((iVar4 = *piVar10, *(int *)(unaff_RBX + 0x48) = iVar4, iVar4 != 9 &&
        (iVar4 = FUN_1805a0a20(), param_1 = extraout_XMM0_Da, iVar4 != -1)))) {
      uVar6 = *(uint *)(unaff_RBX + 0x27c);
      *(int8_t *)(unaff_RBP + -0x21) = 0;
      *(uint64_t *)(unaff_RBP + -0x69) = 0xffffffffffffffff;
      *(uint64_t *)(unaff_RBP + -0x59) = 0;
      *(uint64_t *)(unaff_RBP + -0x51) = 0;
      *(uint *)(unaff_RBP + -0x1d) = (uint)(uVar6 < 4);
      *(int *)(unaff_RBP + -0x19) = *piVar10;
      *(int32_t *)(unaff_RBP + -0x61) = 0;
      *(uint64_t *)(unaff_RBP + -0x49) = 0;
      *(int32_t *)(unaff_RBP + -0x41) = 0;
      *(int32_t *)(unaff_RBP + -0x3d) = 0x3f800000;
      *(int32_t *)(unaff_RBP + -0x39) = 0xbe4ccccd;
      *(int32_t *)(unaff_RBP + -0x35) = 0xbe4ccccd;
      *(uint64_t *)(unaff_RBP + -0x31) = 0x3ecccccd;
      *(int16_t *)(unaff_RBP + -0x29) = 0x100;
      *(int32_t *)(unaff_RBP + -0x15) = 0;
      *(int32_t *)(unaff_RBP + -0x11) = 0;
      *(int32_t *)(unaff_RBP + -0xd) = 0;
      *(int32_t *)(unaff_RBP + -9) = 0;
      *(uint64_t *)(unaff_RBP + 0xf) = 0xffffffffffffffff;
      *(int32_t *)(unaff_RBP + -5) = 0;
      *(int32_t *)(unaff_RBP + -1) = 0;
      *(int32_t *)(unaff_RBP + 3) = 0;
      *(int32_t *)(unaff_RBP + 7) = 0;
      *(int8_t *)(unaff_RBP + 0x17) = 0xff;
      *(uint64_t *)(unaff_RBP + 0x1b) = 0;
      *(int32_t *)(unaff_RBP + 0xb) = 0xffffffff;
      *(int32_t *)(unaff_RBP + 0x23) = 0x3f800000;
      cVar3 = FUN_1805a4a20(0,uVar8,unaff_RBP + -0x69,1);
      param_1 = extraout_XMM0_Da_00;
      if (cVar3 != '\0') {
        *(uint64_t *)(unaff_RBX + 600) = *(uint64_t *)(unaff_RBX + 0x268);
        plVar2 = *(longlong **)(*(longlong *)(unaff_RBX + 0x108) + 0x590);
        fVar11 = (float)(**(code **)(*plVar2 + 0xf8))(plVar2,1);
        param_1 = -fVar11 * 100000.0;
        *(longlong *)(unaff_RBX + 0x248) =
             *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(unaff_RBX + 0x250) * 8) -
             (longlong)param_1;
      }
    }
  }
  piVar10 = *(int **)(unaff_RBX + 0x268);
  if (piVar10 != (int *)0x0) {
    if (*(int *)(unaff_RBX + 0x1d4) != 1) goto LAB_18059c6f5;
    if ((((piVar10 != *(int **)(unaff_RBX + 600)) && (iVar4 = *piVar10, iVar4 != 9)) &&
        (uVar6 = *(uint *)(*(longlong *)(unaff_RBX + 0x108) + 0x4c8), (uVar6 & 0x3c0) != 0)) &&
       (((uVar6 & 0x7c00) == 0 &&
        (iVar5 = FUN_1805a0a20(param_1,*(int32_t *)(unaff_RBX + 0x48)), iVar5 != -1)))) {
      *(int *)(unaff_RBX + 0x48) = iVar4;
      iVar4 = *piVar10;
      *(uint64_t *)(unaff_RBP + -0x59) = 0;
      *(uint64_t *)(unaff_RBP + -0x51) = 0;
      *(int32_t *)(unaff_RBP + -0x15) = 0;
      *(int32_t *)(unaff_RBP + -0x11) = 0;
      *(int32_t *)(unaff_RBP + -0xd) = 0;
      *(int32_t *)(unaff_RBP + -9) = 0;
      *(int8_t *)(unaff_RBP + -0x21) = 0;
      *(int32_t *)(unaff_RBP + -5) = 0;
      *(int32_t *)(unaff_RBP + -1) = 0;
      *(int32_t *)(unaff_RBP + 3) = 0;
      *(int32_t *)(unaff_RBP + 7) = 0;
      *(uint64_t *)(unaff_RBP + -0x69) = 0xffffffffffffffff;
      *(int32_t *)(unaff_RBP + -0x61) = 0;
      *(uint64_t *)(unaff_RBP + -0x49) = 0;
      *(int32_t *)(unaff_RBP + -0x41) = 0;
      *(int32_t *)(unaff_RBP + -0x3d) = 0x3f800000;
      *(int32_t *)(unaff_RBP + -0x39) = 0xbe4ccccd;
      *(int32_t *)(unaff_RBP + -0x35) = 0xbe4ccccd;
      *(uint64_t *)(unaff_RBP + -0x31) = 0x3ecccccd;
      *(int16_t *)(unaff_RBP + -0x29) = 0x100;
      *(int32_t *)(unaff_RBP + -0x1d) = 0;
      *(int *)(unaff_RBP + -0x19) = iVar4;
      *(uint64_t *)(unaff_RBP + 0xf) = 0xffffffffffffffff;
      *(int8_t *)(unaff_RBP + 0x17) = 0xff;
      *(uint64_t *)(unaff_RBP + 0x1b) = 0;
      *(int32_t *)(unaff_RBP + 0xb) = 0xffffffff;
      *(int32_t *)(unaff_RBP + 0x23) = 0x3f800000;
      cVar3 = FUN_1805a4a20(0,uVar8,unaff_RBP + -0x69,1);
      if (cVar3 != '\0') {
        *(uint64_t *)(unaff_RBX + 600) = *(uint64_t *)(unaff_RBX + 0x268);
        plVar2 = *(longlong **)(*(longlong *)(unaff_RBX + 0x108) + 0x590);
        fVar11 = (float)(**(code **)(*plVar2 + 0xf8))(plVar2,1);
        *(longlong *)(unaff_RBX + 0x248) =
             *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(unaff_RBX + 0x250) * 8) -
             (longlong)(-fVar11 * 100000.0);
      }
      goto LAB_18059c6f5;
    }
  }
  if (*(int *)(unaff_RBX + 0x1d4) == 1) {
    uVar6 = *(uint *)(*(longlong *)(unaff_RBX + 0x108) + 0x4c8);
    if (((uVar6 & 0x3c0) == 0) || ((uVar6 & 0x7c00) != 0)) {
      if (1.0 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(unaff_RBX + 0x250) * 8) -
                       *(longlong *)(unaff_RBX + 0x248)) * 1e-05) {
        *(int8_t *)(unaff_RBP + -0x21) = 0;
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
        *(int32_t *)(unaff_RBP + -0x61) = 0;
        *(uint64_t *)(unaff_RBP + -0x49) = 0;
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
        *(uint64_t *)(unaff_RBP + 0x1b) = 0;
        *(int32_t *)(unaff_RBP + 0xb) = 0xffffffff;
        *(int32_t *)(unaff_RBP + 0x23) = 0x3f800000;
        FUN_1805a4a20(0,uVar8,unaff_RBP + -0x69,1);
      }
    }
    else {
      fVar11 = (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(unaff_RBX + 0x250) * 8) -
                      *(longlong *)(unaff_RBX + 0x248)) * 1e-05;
      if (0.0 <= fVar11) {
        fVar11 = 0.0;
      }
      *(longlong *)(unaff_RBX + 0x248) =
           *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(unaff_RBX + 0x250) * 8) -
           (longlong)(fVar11 * 100000.0);
    }
  }
LAB_18059c6f5:
  if (*(int *)(unaff_RBX + 0x1d4) == 1) {
    uVar6 = *(uint *)(*(longlong *)(unaff_RBX + 0x108) + 0x4c8);
    if (((((uVar6 & 0x3c0) != 0) && ((uVar6 & 0x7c00) == 0)) ||
        ((*(char *)(unaff_RBX + 0x1e4) == '\0' &&
         ((plVar2 = *(longlong **)(*(longlong *)(unaff_RBX + 0x108) + 0x590),
          fVar12 = (float)(**(code **)(*plVar2 + 0xa8))(plVar2,uVar8), fVar11 = _DAT_180c963e4,
          fVar12 < 0.2 &&
          (plVar2 = *(longlong **)(*(longlong *)(unaff_RBX + 0x108) + 0x590),
          fVar12 = (float)(**(code **)(*plVar2 + 0xa0))(plVar2,uVar8), fVar12 < fVar11 * 0.7))))))
       && (*(longlong *)(unaff_RBX + 600) != 0)) {
      puVar1 = (uint *)(*(longlong *)(unaff_RBX + 0x108) + 0x4c8);
      *puVar1 = *puVar1 & 0xfffffc3f;
      iVar4 = **(int **)(unaff_RBX + 600);
      if (iVar4 == 0) {
        uVar9 = 0x100;
      }
      else if (iVar4 == 1) {
        uVar9 = 0x200;
      }
      else if (iVar4 == 2) {
        uVar9 = 0x40;
      }
      else if (iVar4 == 3) {
        uVar9 = 0x80;
      }
      puVar1 = (uint *)(*(longlong *)(unaff_RBX + 0x108) + 0x4c8);
      *puVar1 = *puVar1 | uVar9;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



