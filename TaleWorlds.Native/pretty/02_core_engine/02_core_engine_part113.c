#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part113.c - 7 个函数

// 函数: void render_scene_update(void)
// 渲染场景更新函数，处理3D场景的渲染和位置计算
void render_scene_update(void)

{
  float *pfVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint uVar14;
  longlong unaff_RDI;
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
  float unaff_XMM8_Da;
  
  lVar11 = *(longlong *)(unaff_RSI + 0x3a0);
  iVar12 = *(int *)(lVar11 + 0x188) + -1;
  if (-1 < iVar12) {
    plVar13 = (longlong *)(*(longlong *)(lVar11 + 400) + (longlong)iVar12 * 8);
    lVar10 = (longlong)iVar12;
    do {
      if ((*(char *)(*plVar13 + 0xaf) != '\0') && (*(char *)(*plVar13 + 0xb6) == '\0')) {
        lVar11 = func_0x000180126de0(*(undefined8 *)
                                      (*(longlong *)(lVar11 + 400) + (longlong)iVar12 * 8));
        break;
      }
      iVar12 = iVar12 + -1;
      plVar13 = plVar13 + -1;
      bVar4 = 0 < lVar10;
      lVar10 = lVar10 + -1;
    } while (bVar4);
  }
  lVar11 = *(longlong *)(lVar11 + 0x2e8);
  FUN_180291b40(lVar11,*(undefined8 *)(*(longlong *)(lVar11 + 0x38) + 0x18),
                *(undefined8 *)(*(longlong *)(lVar11 + 0x38) + 0x20),0);
  lVar10 = *(longlong *)(unaff_RSI + 0x3a8);
  if (((*(byte *)(lVar10 + 0x432) & 1) != 0) &&
     (lVar3 = *(longlong *)(unaff_RSI + 0x3a0), lVar3 != lVar10)) {
    fVar19 = *(float *)(lVar10 + 0x40);
    fVar15 = *(float *)(unaff_RDI + 0x1dc8);
    pfVar1 = (float *)(lVar3 + 0x40);
    fVar16 = *pfVar1;
    uVar7 = *(undefined4 *)(lVar3 + 0x44);
    fVar20 = *pfVar1;
    uVar6 = *(undefined4 *)(lVar3 + 0x44);
    uVar8 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19cc);
    uVar5 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19d0);
    fVar18 = *(float *)(_DAT_180c8a9b0 + 0x19d4);
    fVar22 = *(float *)(_DAT_180c8a9b0 + 0x1628);
    fVar21 = *pfVar1 + *(float *)(lVar3 + 0x48);
    fVar23 = *(float *)(lVar3 + 0x44) + *(float *)(lVar3 + 0x4c);
    *(undefined4 *)(unaff_RBP + -0x59) = *(undefined4 *)(_DAT_180c8a9b0 + 0x19c8);
    *(undefined4 *)(unaff_RBP + -0x55) = uVar8;
    *(undefined4 *)(unaff_RBP + -0x51) = uVar5;
    *(float *)(unaff_RBP + -0x4d) = fVar18;
    fVar24 = *(float *)(lVar10 + 0x44);
    fVar17 = fVar24 + *(float *)(lVar10 + 0x4c);
    *(float *)(unaff_RBP + -0x4d) = fVar18 * fVar15 * fVar22;
    fVar15 = fVar19 + *(float *)(lVar10 + 0x48);
    *(float *)(unaff_RBP + -0x69) = fVar19;
    *(float *)(unaff_RBP + -0x65) = fVar24;
    *(float *)(unaff_RBP + -0x61) = fVar15;
    *(float *)(unaff_RBP + -0x5d) = fVar17;
    *(float *)(unaff_RBP + -0x69) = fVar20;
    *(undefined4 *)(unaff_RBP + -0x65) = uVar6;
    *(float *)(unaff_RBP + -0x61) = fVar21;
    *(float *)(unaff_RBP + -0x5d) = fVar23;
    *(float *)(unaff_RBP + -0x69) = fVar16;
    *(undefined4 *)(unaff_RBP + -0x65) = uVar7;
    *(float *)(unaff_RBP + -0x61) = fVar21;
    *(float *)(unaff_RBP + -0x5d) = fVar23;
    *(float *)(unaff_RBP + -0x49) = fVar19;
    *(float *)(unaff_RBP + -0x45) = fVar24;
    *(float *)(unaff_RBP + -0x41) = fVar15;
    *(float *)(unaff_RBP + -0x3d) = fVar17;
    uVar8 = func_0x000180121e20(unaff_RBP + -0x59);
    FUN_180298890(lVar11,unaff_RBP + -0x69,unaff_RBP + -0x49,uVar8,
                  *(undefined4 *)(unaff_RDI + 0x1634));
  }
  fVar19 = *(float *)(unaff_RDI + 0x19f8);
  lVar10 = *(longlong *)(unaff_RSI + 0x28);
  fVar24 = *(float *)(unaff_RSI + 0x40) - fVar19;
  fVar22 = *(float *)(unaff_RSI + 0x44) - fVar19;
  fVar15 = *(float *)(unaff_RDI + 0x1634);
  if (*(float *)(unaff_RDI + 0x1634) <= *(float *)(unaff_RSI + 0x78)) {
    fVar15 = *(float *)(unaff_RSI + 0x78);
  }
  fVar20 = *(float *)(unaff_RSI + 0x40) + *(float *)(unaff_RSI + 0x48) + fVar19;
  fVar18 = *(float *)(unaff_RSI + 0x44) + *(float *)(unaff_RSI + 0x4c) + fVar19;
  if ((((fVar24 <= *(float *)(lVar10 + 8)) && (fVar22 <= *(float *)(lVar10 + 0xc))) &&
      (*(float *)(lVar10 + 8) + *(float *)(lVar10 + 0x10) <= fVar20)) &&
     (*(float *)(lVar10 + 0xc) + *(float *)(lVar10 + 0x14) <= fVar18)) {
    fVar15 = *(float *)(unaff_RSI + 0x78);
    fVar19 = -fVar19 - 1.0;
    fVar24 = fVar24 - fVar19;
    fVar22 = fVar22 - fVar19;
    fVar20 = fVar19 + fVar20;
    fVar18 = fVar19 + fVar18;
  }
  fVar19 = *(float *)(_DAT_180c8a9b0 + 0x19b8);
  uVar8 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19bc);
  uVar5 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19c0);
  fVar16 = *(float *)(_DAT_180c8a9b0 + 0x19c4);
  fVar17 = *(float *)(unaff_RDI + 0x1cf4) * *(float *)(_DAT_180c8a9b0 + 0x1628) * fVar16;
  *(float *)(unaff_RBP + -0x59) = fVar19;
  *(undefined4 *)(unaff_RBP + -0x55) = uVar8;
  *(undefined4 *)(unaff_RBP + -0x51) = uVar5;
  *(float *)(unaff_RBP + -0x4d) = fVar16;
  fVar16 = unaff_XMM8_Da;
  if ((unaff_XMM8_Da <= fVar19) && (fVar16 = fVar19, 1.0 <= fVar19)) {
    fVar16 = 1.0;
  }
  fVar19 = *(float *)(unaff_RBP + -0x55);
  fVar21 = unaff_XMM8_Da;
  if ((unaff_XMM8_Da <= fVar19) && (fVar21 = fVar19, 1.0 <= fVar19)) {
    fVar21 = 1.0;
  }
  fVar19 = *(float *)(unaff_RBP + -0x51);
  fVar23 = unaff_XMM8_Da;
  if ((unaff_XMM8_Da <= fVar19) && (fVar23 = fVar19, 1.0 <= fVar19)) {
    fVar23 = 1.0;
  }
  uVar14 = (int)(fVar16 * 255.0 + 0.5) | (int)(fVar21 * 255.0 + 0.5) << 8 |
           (int)(fVar23 * 255.0 + 0.5) << 0x10;
  if ((unaff_XMM8_Da <= fVar17) && (unaff_XMM8_Da = fVar17, 1.0 <= fVar17)) {
    unaff_XMM8_Da = 1.0;
  }
  uVar9 = (int)(unaff_XMM8_Da * 255.0 + 0.5) << 0x18;
  if ((uVar14 & 0xff000000) != 0 || uVar9 != 0) {
    bVar2 = *(byte *)(lVar11 + 0x30);
    *(float *)(unaff_RBP + 0x6f) = fVar24 + 0.5;
    *(float *)(unaff_RBP + 0x73) = fVar22 + 0.5;
    if ((bVar2 & 1) == 0) {
      fVar20 = fVar20 - 0.49;
      fVar18 = fVar18 - 0.49;
    }
    else {
      fVar20 = fVar20 - 0.5;
      fVar18 = fVar18 - 0.5;
    }
    *(float *)(unaff_RBP + 0x67) = fVar20;
    *(float *)(unaff_RBP + 0x6b) = fVar18;
    FUN_1802939e0(lVar11,unaff_RBP + 0x6f,unaff_RBP + 0x67,fVar15,0xffffffff);
    FUN_1802923e0(lVar11,*(undefined8 *)(lVar11 + 0x88),*(undefined4 *)(lVar11 + 0x80),
                  uVar14 | uVar9,1);
    *(undefined4 *)(lVar11 + 0x80) = 0;
  }
  *(int *)(lVar11 + 0x60) = *(int *)(lVar11 + 0x60) + -1;
  FUN_180291950(lVar11);
  return;
}





// 函数: void render_scene_params(undefined4 param_1,undefined8 param_2,float param_3,undefined8 param_4)
// 渲染场景参数设置函数，设置渲染相关的参数
void render_scene_params(undefined4 param_1,undefined8 param_2,float param_3,undefined8 param_4)

{
  byte bVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  float in_XMM3_Da;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  
  bVar1 = *(byte *)(unaff_RBX + 0x30);
  *(float *)(unaff_RBP + 0x6f) = unaff_XMM6_Da + in_XMM4_Da;
  *(float *)(unaff_RBP + 0x73) = in_XMM5_Da + in_XMM4_Da;
  if ((bVar1 & 1) == 0) {
    in_XMM3_Da = in_XMM3_Da - 0.49;
    param_3 = param_3 - 0.49;
  }
  else {
    in_XMM3_Da = in_XMM3_Da - in_XMM4_Da;
    param_3 = param_3 - in_XMM4_Da;
  }
  *(float *)(unaff_RBP + 0x67) = in_XMM3_Da;
  *(float *)(unaff_RBP + 0x6b) = param_3;
  FUN_1802939e0(param_1,unaff_RBP + 0x6f,unaff_RBP + 0x67,param_4,0xffffffff);
  FUN_1802923e0(0x40400000,*(undefined8 *)(unaff_RBX + 0x88),*(undefined4 *)(unaff_RBX + 0x80),
                unaff_EDI,1);
  *(undefined4 *)(unaff_RBX + 0x80) = 0;
  *(int *)(unaff_RBX + 0x60) = *(int *)(unaff_RBX + 0x60) + -1;
  FUN_180291950();
  return;
}





// 函数: void empty_function_1(void)
// 空函数1 - 无实际功能
void empty_function_1(void)

{
  return;
}





// 函数: void empty_function_2(void)
// 空函数2 - 无实际功能
void empty_function_2(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void update_game_state(void)
// 游戏状态更新函数，处理游戏逻辑和状态管理
void update_game_state(void)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  bool bVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  
  lVar10 = _DAT_180c8a9b0;
  if (*(int *)(_DAT_180c8a9b0 + 0x1a94) == *(int *)(_DAT_180c8a9b0 + 0x1a90)) {
    return;
  }
  uVar16 = 0;
  if ((*(code **)(_DAT_180c8a9b0 + 0x15c8) != (code *)0x0) &&
     ((((*(float *)(_DAT_180c8a9b0 + 0x2de8) == 3.4028235e+38 ||
        (fVar20 = *(float *)(_DAT_180c8a9b0 + 0x2de0) - *(float *)(_DAT_180c8a9b0 + 0x2de8),
        fVar19 = *(float *)(_DAT_180c8a9b0 + 0x2de4) - *(float *)(_DAT_180c8a9b0 + 0x2dec),
        0.0001 < fVar19 * fVar19 + fVar20 * fVar20)) &&
       (lVar4 = *(longlong *)(_DAT_180c8a9b0 + 0x2df0), lVar4 != 0)) &&
      (*(char *)(lVar4 + 0x76) != '\0')))) {
    (**(code **)(_DAT_180c8a9b0 + 0x15c8))(lVar4,*(undefined8 *)(_DAT_180c8a9b0 + 0x2de0));
    *(undefined8 *)(lVar10 + 0x2de8) = *(undefined8 *)(lVar10 + 0x2de0);
    *(undefined8 *)(lVar10 + 0x2df0) = 0;
  }
  iVar13 = *(int *)(lVar10 + 0x1ad0);
  while (1 < iVar13) {
    FUN_18012cfe0();
    iVar13 = *(int *)(lVar10 + 0x1ad0);
  }
  lVar4 = *(longlong *)(lVar10 + 0x1af8);
  *(undefined1 *)(lVar10 + 2) = 0;
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xb1) == '\0')) {
    *(undefined1 *)(lVar4 + 0xaf) = 0;
  }
  FUN_18012cfe0();
  FUN_180126e40();
  if (*(longlong *)(lVar10 + 0x1cd8) != 0) {
    FUN_180133e10();
  }
  lVar4 = _DAT_180c8a9b0;
  if (*(longlong *)(_DAT_180c8a9b0 + 0x1c78) != 0) {
    *(undefined8 *)(_DAT_180c8a9b0 + 0x1c78) = 0;
  }
  cVar14 = *(char *)(lVar10 + 0x1dd0);
  if (cVar14 != '\0') {
    if ((*(int *)(lVar10 + 0x1df4) + 1 < *(int *)(lVar10 + 0x1a90)) &&
       (((*(byte *)(lVar10 + 0x1dd4) & 0x20) != 0 ||
        (*(char *)((longlong)*(int *)(lVar10 + 0x1ddc) + 0x120 + lVar4) == '\0')))) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if ((*(char *)(lVar10 + 0x1e1a) != '\0') || (bVar9)) {
      FUN_180135090();
      cVar14 = *(char *)(lVar10 + 0x1dd0);
    }
    if ((cVar14 != '\0') && (*(int *)(lVar10 + 0x1dd8) < *(int *)(lVar10 + 0x1a90))) {
      *(undefined1 *)(lVar10 + 0x1dd1) = 1;
      FUN_18012ea30(&DAT_180a0649c);
      *(undefined1 *)(lVar10 + 0x1dd1) = 0;
    }
  }
  *(undefined4 *)(lVar10 + 0x1a94) = *(undefined4 *)(lVar10 + 0x1a90);
  *(undefined1 *)(lVar10 + 1) = 0;
  FUN_180124b90();
  lVar4 = _DAT_180c8a9b0;
  piVar1 = (int *)(_DAT_180c8a9b0 + 0x1618);
  *(undefined8 *)(_DAT_180c8a9b0 + 0x1610) = **(undefined8 **)(_DAT_180c8a9b0 + 0x1c70);
  iVar13 = *(int *)(lVar4 + 0x161c);
  if (iVar13 < 0) {
    uVar11 = iVar13 / 2 + iVar13;
    uVar15 = uVar16;
    if (0 < (int)uVar11) {
      uVar15 = (ulonglong)uVar11;
    }
    FUN_18011dc70(piVar1,uVar15);
  }
  *piVar1 = 0;
  uVar15 = uVar16;
  uVar18 = uVar16;
  if (0 < *(int *)(lVar4 + 0x1c68)) {
    do {
      lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x1c70) + uVar15 * 8);
      *(undefined8 *)(lVar5 + 100) = *(undefined8 *)(lVar5 + 8);
      if (((((*(int *)(lVar4 + 0x1a90) <= *(int *)(lVar5 + 0x54)) &&
            (0.0 < *(float *)(lVar5 + 0x10))) && (0.0 < *(float *)(lVar5 + 0x14))) ||
          ((longlong)uVar15 < 1)) &&
         ((lVar6 = *(longlong *)(lVar5 + 0x78), lVar6 == 0 ||
          ((*(char *)(lVar6 + 0xaf) != '\0' && (*(char *)(lVar6 + 0xb6) == '\0')))))) {
        iVar13 = *piVar1;
        iVar12 = *(int *)(lVar4 + 0x161c);
        if (iVar13 == iVar12) {
          if (iVar12 == 0) {
            iVar12 = 8;
          }
          else {
            iVar12 = iVar12 / 2 + iVar12;
          }
          iVar8 = iVar13 + 1;
          if (iVar13 + 1 < iVar12) {
            iVar8 = iVar12;
          }
          FUN_18011dc70(piVar1,iVar8);
          iVar13 = *piVar1;
        }
        *(longlong *)(*(longlong *)(lVar4 + 0x1620) + (longlong)iVar13 * 8) = lVar5;
        *piVar1 = *piVar1 + 1;
      }
      uVar11 = (int)uVar18 + 1;
      uVar15 = uVar15 + 1;
      uVar18 = (ulonglong)uVar11;
    } while ((int)uVar11 < *(int *)(lVar4 + 0x1c68));
  }
  puVar2 = (uint *)(lVar10 + 0x1ac0);
  lVar4 = **(longlong **)(lVar4 + 0x1c70);
  *(undefined2 *)(lVar4 + 0x49) = 0;
  *(undefined1 *)(lVar4 + 0x48) = 0;
  iVar13 = *(int *)(lVar10 + 0x1ac4);
  if (iVar13 < 0) {
    uVar11 = iVar13 / 2 + iVar13;
    uVar15 = uVar16;
    if (0 < (int)uVar11) {
      uVar15 = (ulonglong)uVar11;
    }
    FUN_18011dc70(puVar2,uVar15);
  }
  *puVar2 = 0;
  FUN_18011dc70(puVar2,*(undefined4 *)(lVar10 + 0x1aa0));
  uVar11 = *(uint *)(lVar10 + 0x1aa0);
  uVar15 = uVar16;
  uVar18 = uVar16;
  if (uVar11 != 0) {
    do {
      lVar4 = *(longlong *)(uVar18 + *(longlong *)(lVar10 + 0x1aa8));
      if ((*(char *)(lVar4 + 0xaf) == '\0') || ((*(uint *)(lVar4 + 0xc) & 0x1000000) == 0)) {
        FUN_180126b00(puVar2);
      }
      uVar11 = *(uint *)(lVar10 + 0x1aa0);
      uVar17 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar17;
      uVar18 = uVar18 + 8;
    } while (uVar17 != uVar11);
  }
  uVar17 = *puVar2;
  *puVar2 = uVar11;
  *(uint *)(lVar10 + 0x1aa0) = uVar17;
  uVar3 = *(undefined4 *)(lVar10 + 0x1ac4);
  *(undefined4 *)(lVar10 + 0x1ac4) = *(undefined4 *)(lVar10 + 0x1aa4);
  *(undefined4 *)(lVar10 + 0x1aa4) = uVar3;
  uVar7 = *(undefined8 *)(lVar10 + 0x1ac8);
  *(undefined8 *)(lVar10 + 0x1ac8) = *(undefined8 *)(lVar10 + 0x1aa8);
  *(undefined8 *)(lVar10 + 0x1aa8) = uVar7;
  *(undefined4 *)(lVar10 + 0x3a4) = *(undefined4 *)(lVar10 + 0x1af0);
  **(undefined1 **)(lVar10 + 0xa0) = 0;
  *(undefined8 *)(lVar10 + 0x128) = 0;
  iVar13 = *(int *)(lVar10 + 0x1534);
  if (iVar13 < 0) {
    uVar11 = iVar13 / 2 + iVar13;
    if (0 < (int)uVar11) {
      uVar16 = (ulonglong)uVar11;
    }
    FUN_18011dd10(lVar10 + 0x1530,uVar16);
  }
  *(undefined4 *)(lVar10 + 0x1530) = 0;
                    // WARNING: Subroutine does not return
  memset(lVar10 + 0x338,0,0x54);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void update_game_state_alt(void)
// 游戏状态更新函数的替代版本，处理游戏逻辑和状态管理
void update_game_state_alt(void)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  code *in_RAX;
  char cVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong unaff_RBX;
  uint uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  
  uVar15 = 0;
  if ((in_RAX != (code *)0x0) &&
     ((((*(float *)(unaff_RBX + 0x2de8) == 3.4028235e+38 ||
        (fVar19 = *(float *)(unaff_RBX + 0x2de0) - *(float *)(unaff_RBX + 0x2de8),
        fVar18 = *(float *)(unaff_RBX + 0x2de4) - *(float *)(unaff_RBX + 0x2dec),
        0.0001 < fVar18 * fVar18 + fVar19 * fVar19)) &&
       (lVar4 = *(longlong *)(unaff_RBX + 0x2df0), lVar4 != 0)) && (*(char *)(lVar4 + 0x76) != '\0')
      ))) {
    (*in_RAX)(lVar4,*(undefined8 *)(unaff_RBX + 0x2de0));
    *(undefined8 *)(unaff_RBX + 0x2de8) = *(undefined8 *)(unaff_RBX + 0x2de0);
    *(undefined8 *)(unaff_RBX + 0x2df0) = 0;
  }
  iVar12 = *(int *)(unaff_RBX + 0x1ad0);
  while (1 < iVar12) {
    FUN_18012cfe0();
    iVar12 = *(int *)(unaff_RBX + 0x1ad0);
  }
  lVar4 = *(longlong *)(unaff_RBX + 0x1af8);
  *(undefined1 *)(unaff_RBX + 2) = 0;
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xb1) == '\0')) {
    *(undefined1 *)(lVar4 + 0xaf) = 0;
  }
  FUN_18012cfe0();
  FUN_180126e40();
  if (*(longlong *)(unaff_RBX + 0x1cd8) != 0) {
    FUN_180133e10();
  }
  lVar4 = _DAT_180c8a9b0;
  if (*(longlong *)(_DAT_180c8a9b0 + 0x1c78) != 0) {
    *(undefined8 *)(_DAT_180c8a9b0 + 0x1c78) = 0;
  }
  cVar13 = *(char *)(unaff_RBX + 0x1dd0);
  if (cVar13 != '\0') {
    if ((*(int *)(unaff_RBX + 0x1df4) + 1 < *(int *)(unaff_RBX + 0x1a90)) &&
       (((*(byte *)(unaff_RBX + 0x1dd4) & 0x20) != 0 ||
        (*(char *)((longlong)*(int *)(unaff_RBX + 0x1ddc) + 0x120 + lVar4) == '\0')))) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if ((*(char *)(unaff_RBX + 0x1e1a) != '\0') || (bVar9)) {
      FUN_180135090();
      cVar13 = *(char *)(unaff_RBX + 0x1dd0);
    }
    if ((cVar13 != '\0') && (*(int *)(unaff_RBX + 0x1dd8) < *(int *)(unaff_RBX + 0x1a90))) {
      *(undefined1 *)(unaff_RBX + 0x1dd1) = 1;
      FUN_18012ea30(&DAT_180a0649c);
      *(undefined1 *)(unaff_RBX + 0x1dd1) = 0;
    }
  }
  *(undefined4 *)(unaff_RBX + 0x1a94) = *(undefined4 *)(unaff_RBX + 0x1a90);
  *(undefined1 *)(unaff_RBX + 1) = 0;
  FUN_180124b90();
  lVar4 = _DAT_180c8a9b0;
  piVar1 = (int *)(_DAT_180c8a9b0 + 0x1618);
  *(undefined8 *)(_DAT_180c8a9b0 + 0x1610) = **(undefined8 **)(_DAT_180c8a9b0 + 0x1c70);
  iVar12 = *(int *)(lVar4 + 0x161c);
  if (iVar12 < 0) {
    uVar10 = iVar12 / 2 + iVar12;
    uVar14 = uVar15;
    if (0 < (int)uVar10) {
      uVar14 = (ulonglong)uVar10;
    }
    FUN_18011dc70(piVar1,uVar14);
  }
  *piVar1 = 0;
  uVar14 = uVar15;
  uVar17 = uVar15;
  if (0 < *(int *)(lVar4 + 0x1c68)) {
    do {
      lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x1c70) + uVar14 * 8);
      *(undefined8 *)(lVar5 + 100) = *(undefined8 *)(lVar5 + 8);
      if (((((*(int *)(lVar4 + 0x1a90) <= *(int *)(lVar5 + 0x54)) &&
            (0.0 < *(float *)(lVar5 + 0x10))) && (0.0 < *(float *)(lVar5 + 0x14))) ||
          ((longlong)uVar14 < 1)) &&
         ((lVar6 = *(longlong *)(lVar5 + 0x78), lVar6 == 0 ||
          ((*(char *)(lVar6 + 0xaf) != '\0' && (*(char *)(lVar6 + 0xb6) == '\0')))))) {
        iVar12 = *piVar1;
        iVar11 = *(int *)(lVar4 + 0x161c);
        if (iVar12 == iVar11) {
          if (iVar11 == 0) {
            iVar11 = 8;
          }
          else {
            iVar11 = iVar11 / 2 + iVar11;
          }
          iVar8 = iVar12 + 1;
          if (iVar12 + 1 < iVar11) {
            iVar8 = iVar11;
          }
          FUN_18011dc70(piVar1,iVar8);
          iVar12 = *piVar1;
        }
        *(longlong *)(*(longlong *)(lVar4 + 0x1620) + (longlong)iVar12 * 8) = lVar5;
        *piVar1 = *piVar1 + 1;
      }
      uVar10 = (int)uVar17 + 1;
      uVar14 = uVar14 + 1;
      uVar17 = (ulonglong)uVar10;
    } while ((int)uVar10 < *(int *)(lVar4 + 0x1c68));
  }
  puVar2 = (uint *)(unaff_RBX + 0x1ac0);
  lVar4 = **(longlong **)(lVar4 + 0x1c70);
  *(undefined2 *)(lVar4 + 0x49) = 0;
  *(undefined1 *)(lVar4 + 0x48) = 0;
  iVar12 = *(int *)(unaff_RBX + 0x1ac4);
  if (iVar12 < 0) {
    uVar10 = iVar12 / 2 + iVar12;
    uVar14 = uVar15;
    if (0 < (int)uVar10) {
      uVar14 = (ulonglong)uVar10;
    }
    FUN_18011dc70(puVar2,uVar14);
  }
  *puVar2 = 0;
  FUN_18011dc70(puVar2,*(undefined4 *)(unaff_RBX + 0x1aa0));
  uVar10 = *(uint *)(unaff_RBX + 0x1aa0);
  uVar14 = uVar15;
  uVar17 = uVar15;
  if (uVar10 != 0) {
    do {
      lVar4 = *(longlong *)(uVar17 + *(longlong *)(unaff_RBX + 0x1aa8));
      if ((*(char *)(lVar4 + 0xaf) == '\0') || ((*(uint *)(lVar4 + 0xc) & 0x1000000) == 0)) {
        FUN_180126b00(puVar2);
      }
      uVar10 = *(uint *)(unaff_RBX + 0x1aa0);
      uVar16 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar16;
      uVar17 = uVar17 + 8;
    } while (uVar16 != uVar10);
  }
  uVar16 = *puVar2;
  *puVar2 = uVar10;
  *(uint *)(unaff_RBX + 0x1aa0) = uVar16;
  uVar3 = *(undefined4 *)(unaff_RBX + 0x1ac4);
  *(undefined4 *)(unaff_RBX + 0x1ac4) = *(undefined4 *)(unaff_RBX + 0x1aa4);
  *(undefined4 *)(unaff_RBX + 0x1aa4) = uVar3;
  uVar7 = *(undefined8 *)(unaff_RBX + 0x1ac8);
  *(undefined8 *)(unaff_RBX + 0x1ac8) = *(undefined8 *)(unaff_RBX + 0x1aa8);
  *(undefined8 *)(unaff_RBX + 0x1aa8) = uVar7;
  *(undefined4 *)(unaff_RBX + 0x3a4) = *(undefined4 *)(unaff_RBX + 0x1af0);
  **(undefined1 **)(unaff_RBX + 0xa0) = 0;
  *(undefined8 *)(unaff_RBX + 0x128) = 0;
  iVar12 = *(int *)(unaff_RBX + 0x1534);
  if (iVar12 < 0) {
    uVar10 = iVar12 / 2 + iVar12;
    if (0 < (int)uVar10) {
      uVar15 = (ulonglong)uVar10;
    }
    FUN_18011dd10(unaff_RBX + 0x1530,uVar15);
  }
  *(undefined4 *)(unaff_RBX + 0x1530) = 0;
                    // WARNING: Subroutine does not return
  memset(unaff_RBX + 0x338,0,0x54);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void update_game_state_extended(void)
// 扩展游戏状态更新函数，处理更复杂的游戏逻辑和状态管理
void update_game_state_extended(void)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  code *in_RAX;
  char cVar10;
  longlong unaff_RBX;
  longlong lVar11;
  longlong lVar12;
  char unaff_R12B;
  undefined1 unaff_000000a1;
  undefined2 unaff_000000a2;
  undefined4 unaff_000000a4;
  int iVar13;
  float fVar14;
  float fVar15;
  
  if ((in_RAX != (code *)0x0) &&
     ((((*(float *)(unaff_RBX + 0x2de8) == 3.4028235e+38 ||
        (fVar15 = *(float *)(unaff_RBX + 0x2de0) - *(float *)(unaff_RBX + 0x2de8),
        fVar14 = *(float *)(unaff_RBX + 0x2de4) - *(float *)(unaff_RBX + 0x2dec),
        0.0001 < fVar14 * fVar14 + fVar15 * fVar15)) &&
       (lVar12 = *(longlong *)(unaff_RBX + 0x2df0), lVar12 != 0)) &&
      (*(char *)(lVar12 + 0x76) != unaff_R12B)))) {
    (*in_RAX)(lVar12,*(undefined8 *)(unaff_RBX + 0x2de0));
    *(undefined8 *)(unaff_RBX + 0x2de8) = *(undefined8 *)(unaff_RBX + 0x2de0);
    *(ulonglong *)(unaff_RBX + 0x2df0) =
         CONCAT44(unaff_000000a4,CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B)));
  }
  iVar8 = *(int *)(unaff_RBX + 0x1ad0);
  while (1 < iVar8) {
    FUN_18012cfe0();
    iVar8 = *(int *)(unaff_RBX + 0x1ad0);
  }
  lVar12 = *(longlong *)(unaff_RBX + 0x1af8);
  *(char *)(unaff_RBX + 2) = unaff_R12B;
  if ((lVar12 != 0) && (*(char *)(lVar12 + 0xb1) == unaff_R12B)) {
    *(char *)(lVar12 + 0xaf) = unaff_R12B;
  }
  FUN_18012cfe0();
  FUN_180126e40();
  if (*(longlong *)(unaff_RBX + 0x1cd8) !=
      CONCAT44(unaff_000000a4,CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B)))) {
    FUN_180133e10();
  }
  lVar12 = _DAT_180c8a9b0;
  if (*(longlong *)(_DAT_180c8a9b0 + 0x1c78) !=
      CONCAT44(unaff_000000a4,CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B)))) {
    *(ulonglong *)(_DAT_180c8a9b0 + 0x1c78) =
         CONCAT44(unaff_000000a4,CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B)));
  }
  cVar10 = *(char *)(unaff_RBX + 0x1dd0);
  if (cVar10 != '\0') {
    if ((*(int *)(unaff_RBX + 0x1df4) + 1 < *(int *)(unaff_RBX + 0x1a90)) &&
       (((*(byte *)(unaff_RBX + 0x1dd4) & 0x20) != 0 ||
        (*(char *)((longlong)*(int *)(unaff_RBX + 0x1ddc) + 0x120 + lVar12) == unaff_R12B)))) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if ((*(char *)(unaff_RBX + 0x1e1a) != unaff_R12B) || (bVar7)) {
      FUN_180135090();
      cVar10 = *(char *)(unaff_RBX + 0x1dd0);
    }
    if ((cVar10 != '\0') && (*(int *)(unaff_RBX + 0x1dd8) < *(int *)(unaff_RBX + 0x1a90))) {
      *(undefined1 *)(unaff_RBX + 0x1dd1) = 1;
      FUN_18012ea30(&DAT_180a0649c);
      *(char *)(unaff_RBX + 0x1dd1) = unaff_R12B;
    }
  }
  *(undefined4 *)(unaff_RBX + 0x1a94) = *(undefined4 *)(unaff_RBX + 0x1a90);
  *(char *)(unaff_RBX + 1) = unaff_R12B;
  FUN_180124b90();
  lVar12 = _DAT_180c8a9b0;
  piVar1 = (int *)(_DAT_180c8a9b0 + 0x1618);
  *(undefined8 *)(_DAT_180c8a9b0 + 0x1610) = **(undefined8 **)(_DAT_180c8a9b0 + 0x1c70);
  iVar8 = *(int *)(lVar12 + 0x161c);
  if (iVar8 < 0) {
    iVar8 = iVar8 / 2 + iVar8;
    iVar13 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
    if (0 < iVar8) {
      iVar13 = iVar8;
    }
    FUN_18011dc70(piVar1,iVar13);
  }
  *piVar1 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
  iVar13 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
  iVar8 = *(int *)(lVar12 + 0x1c68);
  iVar9 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
  if (iVar8 != iVar9 &&
      SBORROW4(iVar8,CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B))) ==
      iVar8 - iVar9 < 0) {
    lVar11 = CONCAT44(unaff_000000a4,CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B)));
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar12 + 0x1c70) + lVar11 * 8);
      *(undefined8 *)(lVar3 + 100) = *(undefined8 *)(lVar3 + 8);
      if (((((*(int *)(lVar12 + 0x1a90) <= *(int *)(lVar3 + 0x54)) &&
            (0.0 < *(float *)(lVar3 + 0x10))) && (0.0 < *(float *)(lVar3 + 0x14))) || (lVar11 < 1))
         && ((lVar4 = *(longlong *)(lVar3 + 0x78), lVar4 == 0 ||
             ((*(char *)(lVar4 + 0xaf) != unaff_R12B && (*(char *)(lVar4 + 0xb6) == unaff_R12B))))))
      {
        iVar8 = *piVar1;
        iVar9 = *(int *)(lVar12 + 0x161c);
        if (iVar8 == iVar9) {
          if (iVar9 == 0) {
            iVar9 = 8;
          }
          else {
            iVar9 = iVar9 / 2 + iVar9;
          }
          iVar6 = iVar8 + 1;
          if (iVar8 + 1 < iVar9) {
            iVar6 = iVar9;
          }
          FUN_18011dc70(piVar1,iVar6);
          iVar8 = *piVar1;
        }
        *(longlong *)(*(longlong *)(lVar12 + 0x1620) + (longlong)iVar8 * 8) = lVar3;
        *piVar1 = *piVar1 + 1;
      }
      iVar13 = iVar13 + 1;
      lVar11 = lVar11 + 1;
    } while (iVar13 < *(int *)(lVar12 + 0x1c68));
  }
  piVar1 = (int *)(unaff_RBX + 0x1ac0);
  lVar12 = **(longlong **)(lVar12 + 0x1c70);
  *(ushort *)(lVar12 + 0x49) = CONCAT11(unaff_000000a1,unaff_R12B);
  *(char *)(lVar12 + 0x48) = unaff_R12B;
  iVar8 = *(int *)(unaff_RBX + 0x1ac4);
  if (iVar8 < 0) {
    iVar8 = iVar8 / 2 + iVar8;
    iVar13 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
    if (0 < iVar8) {
      iVar13 = iVar8;
    }
    FUN_18011dc70(piVar1,iVar13);
  }
  *piVar1 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
  FUN_18011dc70(piVar1,*(undefined4 *)(unaff_RBX + 0x1aa0));
  iVar8 = *(int *)(unaff_RBX + 0x1aa0);
  iVar13 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
  if (iVar8 != 0) {
    lVar12 = CONCAT44(unaff_000000a4,CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B)));
    do {
      lVar11 = *(longlong *)(lVar12 + *(longlong *)(unaff_RBX + 0x1aa8));
      if ((*(char *)(lVar11 + 0xaf) == unaff_R12B) || ((*(uint *)(lVar11 + 0xc) & 0x1000000) == 0))
      {
        FUN_180126b00(piVar1);
      }
      iVar8 = *(int *)(unaff_RBX + 0x1aa0);
      iVar13 = iVar13 + 1;
      lVar12 = lVar12 + 8;
    } while (iVar13 != iVar8);
  }
  iVar13 = *piVar1;
  *piVar1 = iVar8;
  *(int *)(unaff_RBX + 0x1aa0) = iVar13;
  uVar2 = *(undefined4 *)(unaff_RBX + 0x1ac4);
  *(undefined4 *)(unaff_RBX + 0x1ac4) = *(undefined4 *)(unaff_RBX + 0x1aa4);
  *(undefined4 *)(unaff_RBX + 0x1aa4) = uVar2;
  uVar5 = *(undefined8 *)(unaff_RBX + 0x1ac8);
  *(undefined8 *)(unaff_RBX + 0x1ac8) = *(undefined8 *)(unaff_RBX + 0x1aa8);
  *(undefined8 *)(unaff_RBX + 0x1aa8) = uVar5;
  *(undefined4 *)(unaff_RBX + 0x3a4) = *(undefined4 *)(unaff_RBX + 0x1af0);
  **(char **)(unaff_RBX + 0xa0) = unaff_R12B;
  *(ulonglong *)(unaff_RBX + 0x128) =
       CONCAT44(unaff_000000a4,CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B)));
  iVar8 = *(int *)(unaff_RBX + 0x1534);
  if (iVar8 < 0) {
    iVar8 = iVar8 / 2 + iVar8;
    iVar13 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
    if (0 < iVar8) {
      iVar13 = iVar8;
    }
    FUN_18011dd10(unaff_RBX + 0x1530,iVar13);
  }
  *(uint *)(unaff_RBX + 0x1530) = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
                    // WARNING: Subroutine does not return
  memset(unaff_RBX + 0x338,0,0x54);
}





