#include "TaleWorlds.Native.Split.h"

// 99_part_07_part037.c - 1 个函数

// 函数: void FUN_1804bd560(longlong param_1,longlong param_2,undefined4 *param_3)
void FUN_1804bd560(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int *piVar7;
  byte bVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auStackX_10 [8];
  
  uVar13 = 0;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 10) = 0;
  *(undefined8 *)(param_3 + 0xc) = 0;
  *(undefined8 *)(param_3 + 0xe) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x12) = 0;
  uVar10 = *(ulonglong *)(param_3 + 4) & 0xffffffffffffffc0 | (longlong)*(int *)(param_2 + 8);
  *(ulonglong *)(param_3 + 4) = uVar10;
  uVar10 = (longlong)*(int *)(param_2 + 4) << 6 | uVar10 & 0xfffffffffffff03f;
  *(ulonglong *)(param_3 + 4) = uVar10;
  uVar10 = (longlong)*(int *)(param_2 + 0x18) << 0xc | uVar10 & 0xfffffffffffc0fff;
  *(ulonglong *)(param_3 + 4) = uVar10;
  uVar10 = (longlong)(int)(*(float *)(param_2 + 0x558) * 63.0) << 0x12 | uVar10 & 0xffffffffff03ffff
  ;
  *(ulonglong *)(param_3 + 4) = uVar10;
  uVar10 = (longlong)*(int *)(param_2 + 0x20) << 0x18 | uVar10 & 0xffffffffc0ffffff;
  *(ulonglong *)(param_3 + 4) = uVar10;
  *(ulonglong *)(param_3 + 4) =
       (longlong)(int)(*(float *)(param_2 + 0x54c) * 63.0) << 0x1e | uVar10 & 0xfffffff03fffffff;
  *param_3 = *(undefined4 *)(param_2 + 0x53c);
  param_3[1] = *(undefined4 *)(param_2 + 0x540);
  param_3[2] = *(undefined4 *)(param_2 + 0x544);
  uVar10 = (longlong)(int)(*(float *)(param_2 + 0x550) * 63.0) << 0x2a |
           *(ulonglong *)(param_3 + 4) & 0xffff03ffffffffff;
  *(ulonglong *)(param_3 + 4) = uVar10;
  *(ulonglong *)(param_3 + 4) =
       (longlong)(int)(*(float *)(param_2 + 0x548) * 63.0) << 0x30 | uVar10 & 0xffc0ffffffffffff;
  uVar10 = *(ulonglong *)(param_3 + 0xe) & 0xffffffff80000000 | (longlong)*(int *)(param_2 + 0x28);
  *(ulonglong *)(param_3 + 0xe) = uVar10;
  *(ulonglong *)(param_3 + 0xe) =
       (longlong)*(int *)(param_2 + 0x2c) << 0x20 | uVar10 & 0x80000000ffffffff;
  uVar10 = *(ulonglong *)(param_3 + 0x10) & 0xffffffff80000000 | (longlong)*(int *)(param_2 + 0x30);
  *(ulonglong *)(param_3 + 0x10) = uVar10;
  *(ulonglong *)(param_3 + 0x10) =
       (longlong)*(int *)(param_2 + 0x34) << 0x20 | uVar10 & 0x80000000ffffffff;
  uVar10 = *(ulonglong *)(param_3 + 0x12) & 0xffffffffffffffc0 | (longlong)*(int *)(param_2 + 0x24);
  *(ulonglong *)(param_3 + 0x12) = uVar10;
  uVar10 = (longlong)*(int *)(param_2 + 0x1c) << 6 | uVar10 & 0xfffffffffffff03f;
  *(ulonglong *)(param_3 + 0x12) = uVar10;
  uVar14 = (longlong)*(int *)(param_2 + 0xc) << 0xc | uVar10 & 0xfffffffffffc0fff;
  *(ulonglong *)(param_3 + 0x12) = uVar14;
  uVar10 = (ulonglong)(-(uint)(*(char *)(param_2 + 0x564) != '\0') & 0x40000);
  *(ulonglong *)(param_3 + 0x12) = uVar14 & 0xfffffffffffbffff | uVar10;
  fVar19 = *(float *)(param_2 + 0x55c);
  fVar21 = 0.0;
  if ((0.0 <= fVar19) && (fVar21 = fVar19, 1.0 <= fVar19)) {
    fVar21 = 1.0;
  }
  uVar10 = (longlong)(int)(fVar21 * 63.0) << 0x13 | uVar14 & 0xfffffffffe03ffff | uVar10;
  puVar15 = (undefined8 *)(param_1 + 0xb8);
  *(ulonglong *)(param_3 + 0x12) = uVar10;
  *(ulonglong *)(param_3 + 0x12) =
       (longlong)(int)(*(float *)(param_2 + 0x560) * 63.0) << 0x19 | uVar10 & 0xffffffff81ffffff;
  uVar4 = func_0x0001804bb950(param_2);
  puVar3 = (undefined8 *)puVar15[2];
  puVar6 = puVar15;
  while (puVar2 = puVar3, puVar2 != (undefined8 *)0x0) {
    if (*(uint *)(puVar2 + 4) < uVar4) {
      puVar3 = (undefined8 *)*puVar2;
    }
    else {
      puVar3 = (undefined8 *)puVar2[1];
      puVar6 = puVar2;
    }
  }
  if ((puVar6 == puVar15) || (uVar4 < *(uint *)(puVar6 + 4))) {
    puVar6 = (undefined8 *)FUN_1804c0610(puVar15,auStackX_10);
    puVar6 = (undefined8 *)*puVar6;
  }
  lVar1 = puVar6[5];
  iVar9 = *(int *)(lVar1 + 0x298);
  if (0 < iVar9) {
    piVar7 = (int *)(*(longlong *)(lVar1 + 0x290) + 0x44);
    uVar10 = uVar13;
    uVar14 = uVar13;
    do {
      iVar17 = (int)uVar14;
      if (*piVar7 == 0x3c) goto LAB_1804bd86c;
      uVar14 = (ulonglong)(iVar17 + 1);
      uVar10 = uVar10 + 1;
      piVar7 = piVar7 + 0x2a;
    } while ((longlong)uVar10 < (longlong)iVar9);
  }
  iVar17 = -1;
LAB_1804bd86c:
  if (0 < iVar9) {
    piVar7 = (int *)(*(longlong *)(lVar1 + 0x290) + 0x44);
    uVar10 = uVar13;
    uVar14 = uVar13;
    do {
      iVar16 = (int)uVar14;
      if (*piVar7 == 0x3d) goto LAB_1804bd89d;
      uVar14 = (ulonglong)(iVar16 + 1);
      uVar10 = uVar10 + 1;
      piVar7 = piVar7 + 0x2a;
    } while ((longlong)uVar10 < (longlong)iVar9);
  }
  iVar16 = -1;
LAB_1804bd89d:
  if (0 < iVar9) {
    pfVar18 = (float *)(param_2 + 0x3c);
    do {
      uVar12 = (uint)uVar13;
      uVar5 = uVar12 & 0xf;
      uVar4 = uVar12;
      if ((int)uVar12 < 0) {
        uVar4 = uVar12 + 0xf;
        uVar5 = uVar5 - 0x10;
      }
      bVar8 = (char)uVar5 * '\x04';
      iVar9 = (int)uVar4 >> 4;
      fVar21 = *pfVar18 * 15.0;
      iVar11 = (int)fVar21;
      fVar19 = fVar21;
      if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar21)) {
        auVar20._4_4_ = fVar21;
        auVar20._0_4_ = fVar21;
        auVar20._8_8_ = 0;
        uVar4 = movmskps(uVar5,auVar20);
        fVar19 = (float)(int)(iVar11 - (uVar4 & 1));
      }
      if ((iVar9 + 1 != iVar17) && (iVar9 + 1 != iVar16)) {
        iVar11 = (int)fVar19;
        if (0.5 < fVar21 - fVar19) {
          iVar11 = (int)fVar19 + 1;
        }
        *(ulonglong *)(param_3 + (longlong)iVar9 * 2 + 6) =
             (longlong)iVar11 << (bVar8 & 0x3f) |
             ~(0xfL << (bVar8 & 0x3f)) & *(ulonglong *)(param_3 + (longlong)iVar9 * 2 + 6);
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      pfVar18 = pfVar18 + 1;
    } while ((int)(uVar12 + 1) < *(int *)(lVar1 + 0x298));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




