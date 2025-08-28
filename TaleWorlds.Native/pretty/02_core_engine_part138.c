#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part138.c - 7 个函数

// 函数: void FUN_180133320(void)
void FUN_180133320(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong in_R9;
  undefined4 *in_R10;
  
  *(bool *)(in_R9 + 0x1b3c) = *(int *)(in_R9 + 0x1b2c) != 0;
  if (*(int *)(in_R9 + 0x1b2c) != 0) {
    *(undefined4 *)(in_R9 + 0x1b38) = 0;
    *(undefined1 *)(in_R9 + 0x1b3e) = 0;
  }
  *(undefined4 *)(in_R9 + 0x1b2c) = 0;
  *(undefined4 *)(in_R9 + 0x1b44) = 0;
  *(undefined1 *)(in_R9 + 0x1b3d) = 0;
  *(undefined8 *)(in_R9 + 0x1b50) = 0;
  lVar4 = *(longlong *)(in_R10 + 2);
  iVar2 = *(int *)(in_R9 + 0x1cfc);
  *(longlong *)(in_R9 + 0x1c98) = lVar4;
  uVar3 = *in_R10;
  *(undefined4 *)(in_R9 + 0x1ca0) = uVar3;
  *(undefined4 *)(lVar4 + 0x3c8 + (longlong)iVar2 * 4) = uVar3;
  uVar5 = *(undefined8 *)(in_R10 + 9);
  puVar1 = (undefined8 *)(*(longlong *)(in_R9 + 0x1c98) + ((longlong)iVar2 + 0x3d) * 0x10);
  *puVar1 = *(undefined8 *)(in_R10 + 7);
  puVar1[1] = uVar5;
  *(undefined2 *)(in_R9 + 0x1d05) = 1;
  *(undefined1 *)(in_R9 + 0x1d07) = 1;
  *(undefined4 *)(in_R9 + 0x1cb8) = *in_R10;
  *(undefined1 *)(in_R9 + 0x1d20) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1801333d0(uint param_1)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  
  if ((((*(int *)(_DAT_180c8a9b0 + 0x1d2c) != -1) ||
       (lVar4 = *(longlong *)(_DAT_180c8a9b0 + 0x1c98), lVar4 == 0)) ||
      ((*(uint *)(lVar4 + 0xc) & 0x40000) != 0)) ||
     ((*(longlong *)(_DAT_180c8a9b0 + 0x1cd8) != 0 || (*(int *)(_DAT_180c8a9b0 + 0x1cfc) != 0)))) {
    return 0;
  }
  lVar2 = (longlong)*(int *)(_DAT_180c8a9b0 + 0x50);
  if (((*(int *)(_DAT_180c8a9b0 + 0x50) < 0) || (*(char *)(lVar2 + 0x138 + _DAT_180c8a9b0) == '\0'))
     || ((param_1 & 4) == 0)) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  uVar5 = (ulonglong)*(int *)(_DAT_180c8a9b0 + 0x54);
  if (((*(int *)(_DAT_180c8a9b0 + 0x54) < 0) || (*(char *)(uVar5 + 0x138 + _DAT_180c8a9b0) == '\0'))
     || ((param_1 & 8) == 0)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if (cVar3 == cVar1) {
    return 0;
  }
  if ((*(int *)(lVar4 + 0x174) == 0) && (*(char *)(lVar4 + 0x17d) != '\0')) {
    cVar3 = func_0x0001801281d0(lVar2,1);
    if (cVar3 != '\0') {
      fVar7 = *(float *)(lVar4 + 0x90);
      fVar6 = fVar7 - (*(float *)(lVar4 + 0x264) - *(float *)(lVar4 + 0x25c));
      *(float *)(lVar4 + 0x90) = fVar6;
      *(float *)(lVar4 + 0x11c) = (fVar7 + *(float *)(lVar4 + 0x11c)) - fVar6;
      return 0;
    }
    cVar3 = func_0x0001801281d0(uVar5 & 0xffffffff);
    if (cVar3 == '\0') {
      return 0;
    }
    fVar7 = *(float *)(lVar4 + 0x90);
    fVar6 = (*(float *)(lVar4 + 0x264) - *(float *)(lVar4 + 0x25c)) + fVar7;
    *(float *)(lVar4 + 0x90) = fVar6;
    *(float *)(lVar4 + 0x11c) = (fVar7 + *(float *)(lVar4 + 0x11c)) - fVar6;
    return 0;
  }
  fVar7 = 0.0;
  uVar8 = 0;
  fVar6 = ((*(float *)(lVar4 + 0x264) - *(float *)(lVar4 + 0x25c)) -
          *(float *)(_DAT_180c8a9b0 + 0x19fc) * *(float *)(lVar4 + 0x2d8) *
          *(float *)(lVar4 + 0x2dc)) + (*(float *)(lVar4 + 0x3dc) - *(float *)(lVar4 + 0x3d4));
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  lVar4 = _DAT_180c8a9b0;
  cVar3 = func_0x0001801281d0(lVar2,1);
  if (cVar3 == '\0') {
    cVar3 = func_0x0001801281d0(uVar5 & 0xffffffff);
    if (cVar3 == '\0') goto LAB_1801335e1;
    uVar8 = 0;
    *(undefined4 *)(lVar4 + 0x1d2c) = 2;
    *(undefined4 *)(lVar4 + 0x1d34) = 3;
  }
  else {
    *(undefined4 *)(lVar4 + 0x1d2c) = 3;
    uVar8 = 0x80000000;
    fVar6 = -fVar6;
    *(undefined4 *)(lVar4 + 0x1d34) = 2;
  }
  *(undefined4 *)(lVar4 + 0x1d24) = 0x30;
  fVar7 = fVar6;
LAB_1801335e1:
  return CONCAT44(uVar8,fVar7);
}



undefined8 FUN_180133548(float param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  longlong in_R10;
  undefined4 in_R11D;
  float in_XMM5_Da;
  undefined4 in_XMM5_Db;
  float fVar2;
  
  fVar2 = ((*(float *)(param_4 + 0x264) - *(float *)(param_4 + 0x25c)) -
          param_1 * *(float *)(param_4 + 0x2dc)) +
          (*(float *)(param_4 + 0x3dc) - *(float *)(param_4 + 0x3d4));
  if (fVar2 <= in_XMM5_Da) {
    fVar2 = in_XMM5_Da;
  }
  cVar1 = func_0x0001801281d0();
  if (cVar1 == '\0') {
    cVar1 = func_0x0001801281d0(in_R11D);
    if (cVar1 == '\0') goto LAB_1801335e1;
    in_XMM5_Db = 0;
    *(undefined4 *)(in_R10 + 0x1d2c) = 2;
    *(undefined4 *)(in_R10 + 0x1d34) = 3;
  }
  else {
    *(undefined4 *)(in_R10 + 0x1d2c) = 3;
    in_XMM5_Db = 0x80000000;
    fVar2 = -fVar2;
    *(undefined4 *)(in_R10 + 0x1d34) = 2;
  }
  *(undefined4 *)(in_R10 + 0x1d24) = 0x30;
  in_XMM5_Da = fVar2;
LAB_1801335e1:
  return CONCAT44(in_XMM5_Db,in_XMM5_Da);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1801335f0(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = (ulonglong)param_1;
  if (-1 < param_1) {
    uVar3 = uVar2;
    do {
      if ((longlong)*(int *)(_DAT_180c8a9b0 + 0x1ab0) <= (longlong)uVar2) {
        return 0;
      }
      if (uVar2 == (longlong)param_2) {
        return 0;
      }
      lVar1 = *(longlong *)(*(longlong *)(_DAT_180c8a9b0 + 0x1ab8) + uVar2 * 8);
      if (((*(char *)(lVar1 + 0xaf) != '\0') && (lVar1 == *(longlong *)(lVar1 + 0x3a8))) &&
         ((*(uint *)(lVar1 + 0xc) & 0x80000) == 0)) {
        return *(undefined8 *)(*(longlong *)(_DAT_180c8a9b0 + 0x1ab8) + (longlong)(int)uVar3 * 8);
      }
      uVar3 = (ulonglong)(uint)((int)uVar3 + param_3);
      uVar2 = uVar2 + (longlong)param_3;
    } while (-1 < (longlong)uVar2);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180133680(int param_1)
void FUN_180133680(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar2 = _DAT_180c8a9b0;
  if ((*(uint *)(*(longlong *)(_DAT_180c8a9b0 + 0x1cd8) + 0xc) & 0x8000000) == 0) {
    iVar5 = *(int *)(_DAT_180c8a9b0 + 0x1ab0) + -1;
    uVar7 = (ulonglong)iVar5;
    if (-1 < iVar5) {
      plVar4 = (longlong *)(*(longlong *)(_DAT_180c8a9b0 + 0x1ab8) + uVar7 * 8);
      uVar8 = uVar7;
      do {
        if (*plVar4 == *(longlong *)(_DAT_180c8a9b0 + 0x1cd8)) goto LAB_1801336e8;
        uVar8 = (ulonglong)((int)uVar8 - 1);
        plVar4 = plVar4 + -1;
        uVar7 = uVar7 - 1;
      } while (-1 < (longlong)uVar7);
    }
    uVar8 = 0xffffffff;
LAB_1801336e8:
    iVar6 = (int)uVar8 + param_1;
    if (-1 < iVar6) {
      lVar3 = (longlong)iVar6;
      do {
        if ((*(int *)(_DAT_180c8a9b0 + 0x1ab0) <= lVar3) || (lVar3 == -0x7fffffff)) break;
        lVar1 = *(longlong *)(*(longlong *)(_DAT_180c8a9b0 + 0x1ab8) + lVar3 * 8);
        if ((*(char *)(lVar1 + 0xaf) != '\0') &&
           ((lVar1 == *(longlong *)(lVar1 + 0x3a8) && ((*(uint *)(lVar1 + 0xc) & 0x80000) == 0)))) {
          lVar3 = *(longlong *)(*(longlong *)(_DAT_180c8a9b0 + 0x1ab8) + (longlong)iVar6 * 8);
          if (lVar3 != 0) goto LAB_180133764;
          break;
        }
        iVar6 = iVar6 + param_1;
        lVar3 = lVar3 + param_1;
      } while (-1 < lVar3);
    }
    if (-1 < param_1) {
      iVar5 = 0;
    }
    lVar3 = FUN_1801335f0(iVar5,uVar8 & 0xffffffff,param_1);
    if (lVar3 != 0) {
LAB_180133764:
      *(longlong *)(lVar2 + 0x1ce0) = lVar3;
      *(longlong *)(lVar2 + 0x1cd8) = lVar3;
    }
    *(undefined1 *)(lVar2 + 0x1cf8) = 0;
  }
  return;
}





// 函数: void FUN_1801336ac(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_1801336ac(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong unaff_RBX;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong in_R10;
  int in_R11D;
  undefined4 in_register_0000009c;
  
  iVar4 = (int)in_R10 + -1;
  uVar6 = (ulonglong)iVar4;
  if (-1 < iVar4) {
    plVar3 = (longlong *)(*(longlong *)(unaff_RBX + 0x1ab8) + uVar6 * 8);
    uVar7 = uVar6;
    do {
      if (*plVar3 == param_3) goto LAB_1801336e8;
      uVar7 = (ulonglong)((int)uVar7 - 1);
      plVar3 = plVar3 + -1;
      uVar6 = uVar6 - 1;
    } while (-1 < (longlong)uVar6);
  }
  uVar7 = 0xffffffff;
LAB_1801336e8:
  iVar5 = (int)uVar7 + in_R11D;
  if (-1 < iVar5) {
    lVar2 = (longlong)iVar5;
    do {
      if ((in_R10 <= lVar2) || (lVar2 == -0x7fffffff)) break;
      lVar1 = *(longlong *)(*(longlong *)(unaff_RBX + 0x1ab8) + lVar2 * 8);
      if ((*(char *)(lVar1 + 0xaf) != '\0') &&
         ((lVar1 == *(longlong *)(lVar1 + 0x3a8) && ((*(uint *)(lVar1 + 0xc) & 0x80000) == 0)))) {
        lVar2 = *(longlong *)(*(longlong *)(unaff_RBX + 0x1ab8) + (longlong)iVar5 * 8);
        if (lVar2 != 0) goto LAB_180133764;
        break;
      }
      iVar5 = iVar5 + in_R11D;
      lVar2 = lVar2 + CONCAT44(in_register_0000009c,in_R11D);
    } while (-1 < lVar2);
  }
  if (-1 < in_R11D) {
    iVar4 = 0;
  }
  lVar2 = FUN_1801335f0(iVar4,uVar7 & 0xffffffff,in_R11D);
  if (lVar2 != 0) {
LAB_180133764:
    *(longlong *)(unaff_RBX + 0x1ce0) = lVar2;
    *(longlong *)(unaff_RBX + 0x1cd8) = lVar2;
  }
  *(undefined1 *)(unaff_RBX + 0x1cf8) = 0;
  return;
}





// 函数: void FUN_180133783(void)
void FUN_180133783(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180133790(void)
void FUN_180133790(void)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  char cVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStackX_8 [8];
  undefined1 auStackX_10 [8];
  
  lVar2 = _DAT_180c8a9b0;
  lVar11 = 0;
  bVar1 = false;
  lVar12 = 0;
  if (0 < *(int *)(_DAT_180c8a9b0 + 0x1bb0)) {
    lVar9 = (longlong)*(int *)(_DAT_180c8a9b0 + 0x1bb0) + -1;
    plVar13 = (longlong *)(*(longlong *)(_DAT_180c8a9b0 + 0x1bb8) + 8 + lVar9 * 0x30);
    do {
      if ((*plVar13 != 0) && ((*(uint *)(*plVar13 + 0xc) & 0x8000000) != 0)) {
        *(undefined8 *)(_DAT_180c8a9b0 + 0x1cd8) = 0;
        return;
      }
      plVar13 = plVar13 + -6;
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
  }
  if ((*(longlong *)(_DAT_180c8a9b0 + 0x1ce0) != 0) && (*(longlong *)(_DAT_180c8a9b0 + 0x1cd8) == 0)
     ) {
    pfVar6 = (float *)(_DAT_180c8a9b0 + 0x1dc8);
    fVar15 = *(float *)(_DAT_180c8a9b0 + 0x1cf4) - *(float *)(_DAT_180c8a9b0 + 0x18) * 10.0;
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    *(float *)(_DAT_180c8a9b0 + 0x1cf4) = fVar15;
    if ((*pfVar6 <= 0.0) && (fVar15 <= 0.0)) {
      *(undefined8 *)(lVar2 + 0x1ce0) = 0;
    }
  }
  if (*(longlong *)(lVar2 + 0x1cd8) == 0) {
    if (0.0 <= *(float *)(lVar2 + 0x1494)) {
      if (*(float *)(lVar2 + 0x1494) != 0.0) goto LAB_18013389d;
      cVar14 = '\x01';
    }
    else {
      cVar14 = '\0';
    }
LAB_1801338a5:
    if ((*(char *)(lVar2 + 0x134) == '\0') || (*(int *)(lVar2 + 0x3c) < 0)) goto LAB_1801338ca;
    bVar4 = 1;
    cVar3 = func_0x0001801281d0();
    if ((cVar3 == '\0') || ((*(byte *)(lVar2 + 8) & bVar4) == 0)) goto LAB_1801338ca;
  }
  else {
LAB_18013389d:
    cVar14 = '\0';
    if (*(longlong *)(lVar2 + 0x1cd8) == 0) goto LAB_1801338a5;
LAB_1801338ca:
    bVar4 = 0;
  }
  if (((cVar14 != '\0') || (bVar4 != 0)) &&
     ((lVar9 = *(longlong *)(lVar2 + 0x1c98), lVar9 != 0 ||
      (lVar9 = FUN_1801335f0(*(int *)(lVar2 + 0x1ab0) + -1,0x80000001,0xffffffff), lVar9 != 0)))) {
    *(longlong *)(lVar2 + 0x1ce0) = lVar9;
    *(longlong *)(lVar2 + 0x1cd8) = lVar9;
    *(byte *)(lVar2 + 0x1cf8) = bVar4 ^ 1;
    *(uint *)(lVar2 + 0x1cc0) = (bVar4 ^ 1) + 3;
    *(undefined8 *)(lVar2 + 0x1cf0) = 0;
  }
  fVar15 = *(float *)(lVar2 + 0x18) + *(float *)(lVar2 + 0x1cf0);
  *(float *)(lVar2 + 0x1cf0) = fVar15;
  lVar9 = lVar11;
  if ((*(longlong *)(lVar2 + 0x1cd8) != 0) && (lVar9 = lVar12, *(int *)(lVar2 + 0x1cc0) == 4)) {
    fVar15 = (fVar15 - 0.2) * 20.0;
    if (0.0 <= fVar15) {
      if (1.0 <= fVar15) {
        fVar15 = 1.0;
      }
    }
    else {
      fVar15 = 0.0;
    }
    if (fVar15 <= *(float *)(lVar2 + 0x1cf4)) {
      fVar15 = *(float *)(lVar2 + 0x1cf4);
    }
    *(float *)(lVar2 + 0x1cf4) = fVar15;
    fVar17 = *(float *)(lVar2 + 0x14b8);
    if (0.0 <= fVar17) {
      iVar5 = func_0x000180128180(fVar17,fVar17 - *(float *)(lVar2 + 0x18),
                                  *(undefined4 *)(lVar2 + 0x90),
                                  *(float *)(lVar2 + 0x94) + *(float *)(lVar2 + 0x94));
      fVar17 = (float)iVar5;
    }
    else {
      fVar17 = 0.0;
    }
    fVar16 = *(float *)(lVar2 + 0x14bc);
    if (0.0 <= fVar16) {
      iVar5 = func_0x000180128180(fVar16,fVar16 - *(float *)(lVar2 + 0x18),
                                  *(undefined4 *)(lVar2 + 0x90),
                                  *(float *)(lVar2 + 0x94) + *(float *)(lVar2 + 0x94));
      fVar16 = (float)iVar5;
    }
    else {
      fVar16 = 0.0;
    }
    if (0.0 < fVar17 != 0.0 < fVar16) {
      FUN_180133680();
      *(undefined4 *)(lVar2 + 0x1cf4) = 0x3f800000;
      fVar15 = 1.0;
    }
    if (*(float *)(lVar2 + 0x344) <= 0.0) {
      bVar4 = fVar15 < 1.0 & *(byte *)(lVar2 + 0x1cf8);
      *(byte *)(lVar2 + 0x1cf8) = bVar4;
      if ((bVar4 == 0) || (*(longlong *)(lVar2 + 0x1c98) == 0)) {
        if (bVar4 == 0) {
          lVar12 = *(longlong *)(lVar2 + 0x1cd8);
        }
      }
      else {
        bVar1 = true;
        lVar12 = lVar11;
      }
      *(undefined8 *)(lVar2 + 0x1cd8) = 0;
      lVar9 = lVar12;
    }
  }
  lVar12 = *(longlong *)(lVar2 + 0x1cd8);
  if ((lVar12 != 0) && (*(int *)(lVar2 + 0x1cc0) == 3)) {
    fVar15 = (*(float *)(lVar2 + 0x1cf0) - 0.2) * 20.0;
    if (0.0 <= fVar15) {
      if (1.0 <= fVar15) {
        fVar15 = 1.0;
      }
    }
    else {
      fVar15 = 0.0;
    }
    if (fVar15 <= *(float *)(lVar2 + 0x1cf4)) {
      fVar15 = *(float *)(lVar2 + 0x1cf4);
    }
    *(float *)(lVar2 + 0x1cf4) = fVar15;
    if (*(int *)(lVar2 + 0x3c) < 0) {
      cVar14 = '\0';
    }
    else {
      cVar14 = func_0x0001801281d0(*(int *)(lVar2 + 0x3c),1);
    }
    if (cVar14 != '\0') {
      FUN_180133680();
      lVar12 = *(longlong *)(lVar2 + 0x1cd8);
    }
    if (*(char *)(lVar2 + 0x134) == '\0') {
      lVar9 = lVar12;
    }
  }
  if ((0.0 <= *(float *)(lVar2 + 0x14c8)) && (*(float *)(lVar2 + 0x14c8) == 0.0)) {
    *(undefined1 *)(lVar2 + 0x1cf8) = 1;
  }
  if ((((*(int *)(lVar2 + 0x1b2c) == 0) || (*(char *)(lVar2 + 0x1b3d) != '\0')) &&
      (*(char *)(lVar2 + 0x1cf8) != '\0')) &&
     ((*(float *)(lVar2 + 0x14c8) < 0.0 &&
      (0.0 < *(float *)(lVar2 + 0x151c) || *(float *)(lVar2 + 0x151c) == 0.0)))) {
    if ((*(float *)(lVar2 + 0x118) <= -256000.0 && *(float *)(lVar2 + 0x118) != -256000.0) ||
       (*(float *)(lVar2 + 0x11c) <= -256000.0 && *(float *)(lVar2 + 0x11c) != -256000.0)) {
      cVar14 = '\0';
    }
    else {
      cVar14 = '\x01';
    }
    pfVar6 = (float *)(lVar2 + 0x3b4);
    if (pfVar6 == (float *)0x0) {
      pfVar6 = (float *)(lVar2 + 0x118);
    }
    if ((*pfVar6 <= -256000.0 && *pfVar6 != -256000.0) ||
       (pfVar6[1] <= -256000.0 && pfVar6[1] != -256000.0)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    if (cVar14 == cVar3) {
      bVar1 = true;
    }
  }
  if ((lVar12 != 0) && ((*(byte *)(lVar12 + 0xc) & 4) == 0)) {
    if (*(int *)(lVar2 + 0x1cc0) == 3) {
      if (*(char *)(lVar2 + 0x135) == '\0') {
        uVar10 = 1;
        puVar8 = auStackX_8;
LAB_180133c1e:
        pfVar6 = (float *)FUN_180131aa0(puVar8,uVar10,0,0,0);
        fVar15 = pfVar6[1];
        if ((*pfVar6 != 0.0) || (fVar15 != 0.0)) {
          fVar17 = *(float *)(lVar2 + 0xbc);
          if (*(float *)(lVar2 + 0xb8) <= *(float *)(lVar2 + 0xbc)) {
            fVar17 = *(float *)(lVar2 + 0xb8);
          }
          lVar12 = *(longlong *)(lVar12 + 0x3a0);
          fVar17 = (float)(int)(fVar17 * *(float *)(lVar2 + 0x18) * 800.0);
          *(float *)(lVar12 + 0x40) = *pfVar6 * fVar17 + *(float *)(lVar12 + 0x40);
          *(float *)(lVar12 + 0x44) = fVar15 * fVar17 + *(float *)(lVar12 + 0x44);
          *(undefined1 *)(lVar2 + 0x1d07) = 1;
          if (((*(uint *)(*(longlong *)(lVar2 + 0x1cd8) + 0xc) & 0x100) == 0) &&
             (*(float *)(lVar2 + 0x2e04) <= 0.0)) {
            *(undefined4 *)(lVar2 + 0x2e04) = *(undefined4 *)(lVar2 + 0x1c);
          }
        }
      }
    }
    else if (*(int *)(lVar2 + 0x1cc0) == 4) {
      uVar10 = 4;
      puVar8 = auStackX_10;
      goto LAB_180133c1e;
    }
  }
  if (lVar9 == 0) goto LAB_180133d4a;
  lVar12 = *(longlong *)(lVar2 + 0x1c98);
  if (lVar12 == 0) {
LAB_180133ce2:
    *(undefined2 *)(lVar2 + 0x1d06) = 0x100;
    if (*(longlong *)(lVar9 + 0x3c0) != 0) {
      lVar9 = *(longlong *)(lVar9 + 0x3c0);
    }
    FUN_18012ed10(lVar9);
    FUN_18012d2e0(lVar9);
    if (*(int *)(lVar9 + 0x3c8) == 0) {
      func_0x000180131810(lVar9,0);
    }
    if (*(int *)(lVar9 + 0x174) == 2) {
      *(undefined4 *)(lVar2 + 0x1cfc) = 1;
    }
    if ((*(longlong *)(lVar9 + 0x28) != lVar11) && (*(code **)(lVar2 + 0x1578) != (code *)0x0)) {
      (**(code **)(lVar2 + 0x1578))();
    }
  }
  else if (lVar9 != *(longlong *)(lVar12 + 0x3a8)) {
    lVar11 = *(longlong *)(lVar12 + 0x28);
    goto LAB_180133ce2;
  }
  *(undefined8 *)(lVar2 + 0x1cd8) = 0;
LAB_180133d4a:
  if ((bVar1) && (lVar12 = *(longlong *)(lVar2 + 0x1c98), lVar12 != 0)) {
    plVar13 = (longlong *)(lVar12 + 0x398);
    lVar11 = *plVar13;
    lVar9 = lVar12;
    while (((lVar11 != 0 && ((*(byte *)(lVar9 + 0x174) & 2) == 0)) &&
           ((*(uint *)(lVar9 + 0xc) & 0x15000000) == 0x1000000))) {
      lVar9 = *plVar13;
      plVar13 = (longlong *)(lVar9 + 0x398);
      lVar11 = *plVar13;
    }
    if (lVar9 != lVar12) {
      FUN_18012d2e0(lVar9);
      *(longlong *)(lVar9 + 0x3c0) = lVar12;
      lVar12 = *(longlong *)(lVar2 + 0x1c98);
    }
    *(undefined2 *)(lVar2 + 0x1d06) = 0x100;
    if ((*(byte *)(lVar12 + 0x174) & 2) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(lVar2 + 0x1cfc) ^ 1;
      if ((uVar7 == 1) && (*(longlong *)(lVar9 + 0x410) == 0)) {
        *(undefined4 *)(lVar12 + 0x3cc) = 0;
      }
    }
    func_0x000180131750(uVar7);
  }
  return;
}





// 函数: void FUN_1801337ef(void)
void FUN_1801337ef(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined7 uVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined8 uVar13;
  longlong unaff_RBX;
  ulonglong uVar14;
  longlong unaff_RDI;
  char cVar15;
  char unaff_R14B;
  int iVar16;
  ulonglong unaff_R15;
  float fVar17;
  float fVar18;
  float fVar19;
  ulonglong uVar12;
  
  if ((*(longlong *)(unaff_RBX + 0x1ce0) != unaff_RDI) &&
     (*(longlong *)(unaff_RBX + 0x1cd8) == unaff_RDI)) {
    fVar17 = *(float *)(unaff_RBX + 0x1cf4) - *(float *)(unaff_RBX + 0x18) * 10.0;
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    *(float *)(unaff_RBX + 0x1cf4) = fVar17;
    if ((*(float *)(unaff_RBX + 0x1dc8) <= 0.0) && (fVar17 <= 0.0)) {
      *(ulonglong *)(unaff_RBX + 0x1ce0) = unaff_R15;
    }
  }
  if (*(longlong *)(unaff_RBX + 0x1cd8) == 0) {
    if (0.0 <= *(float *)(unaff_RBX + 0x1494)) {
      if (*(float *)(unaff_RBX + 0x1494) != 0.0) goto LAB_18013389d;
      cVar15 = '\x01';
    }
    else {
      cVar15 = '\0';
    }
LAB_1801338a5:
    if ((*(char *)(unaff_RBX + 0x134) == (char)unaff_RDI) || (*(int *)(unaff_RBX + 0x3c) < 0))
    goto LAB_1801338ca;
    bVar5 = 1;
    cVar4 = func_0x0001801281d0();
    if ((cVar4 == '\0') || ((*(byte *)(unaff_RBX + 8) & bVar5) == 0)) goto LAB_1801338ca;
  }
  else {
LAB_18013389d:
    cVar15 = '\0';
    if (*(longlong *)(unaff_RBX + 0x1cd8) == 0) goto LAB_1801338a5;
LAB_1801338ca:
    bVar5 = 0;
  }
  if (((cVar15 != '\0') || (bVar5 != 0)) &&
     ((lVar8 = *(longlong *)(unaff_RBX + 0x1c98), lVar8 != 0 ||
      (lVar8 = FUN_1801335f0(*(int *)(unaff_RBX + 0x1ab0) + -1,0x80000001,0xffffffff), lVar8 != 0)))
     ) {
    *(longlong *)(unaff_RBX + 0x1ce0) = lVar8;
    *(longlong *)(unaff_RBX + 0x1cd8) = lVar8;
    *(byte *)(unaff_RBX + 0x1cf8) = bVar5 ^ 1;
    *(uint *)(unaff_RBX + 0x1cc0) = (bVar5 ^ 1) + 3;
    *(ulonglong *)(unaff_RBX + 0x1cf0) = unaff_R15;
  }
  fVar17 = *(float *)(unaff_RBX + 0x18) + *(float *)(unaff_RBX + 0x1cf0);
  *(float *)(unaff_RBX + 0x1cf0) = fVar17;
  iVar16 = (int)unaff_R15;
  if ((*(longlong *)(unaff_RBX + 0x1cd8) != unaff_RDI) && (*(int *)(unaff_RBX + 0x1cc0) == 4)) {
    fVar17 = (fVar17 - 0.2) * 20.0;
    if (0.0 <= fVar17) {
      if (1.0 <= fVar17) {
        fVar17 = 1.0;
      }
    }
    else {
      fVar17 = 0.0;
    }
    if (fVar17 <= *(float *)(unaff_RBX + 0x1cf4)) {
      fVar17 = *(float *)(unaff_RBX + 0x1cf4);
    }
    *(float *)(unaff_RBX + 0x1cf4) = fVar17;
    fVar19 = *(float *)(unaff_RBX + 0x14b8);
    if (0.0 <= fVar19) {
      iVar7 = func_0x000180128180(fVar19,fVar19 - *(float *)(unaff_RBX + 0x18),
                                  *(undefined4 *)(unaff_RBX + 0x90),
                                  *(float *)(unaff_RBX + 0x94) + *(float *)(unaff_RBX + 0x94));
      fVar19 = (float)iVar7;
    }
    else {
      fVar19 = 0.0;
    }
    fVar18 = *(float *)(unaff_RBX + 0x14bc);
    if (0.0 <= fVar18) {
      iVar7 = func_0x000180128180(fVar18,fVar18 - *(float *)(unaff_RBX + 0x18),
                                  *(undefined4 *)(unaff_RBX + 0x90),
                                  *(float *)(unaff_RBX + 0x94) + *(float *)(unaff_RBX + 0x94));
      fVar18 = (float)iVar7;
    }
    else {
      fVar18 = 0.0;
    }
    uVar3 = (undefined7)(unaff_R15 >> 8);
    if ((int)CONCAT71(uVar3,0.0 < fVar19) != (int)CONCAT71(uVar3,0.0 < fVar18)) {
      FUN_180133680();
      *(undefined4 *)(unaff_RBX + 0x1cf4) = 0x3f800000;
      fVar17 = 1.0;
    }
    if (*(float *)(unaff_RBX + 0x344) <= 0.0) {
      bVar5 = fVar17 < 1.0 & *(byte *)(unaff_RBX + 0x1cf8);
      *(byte *)(unaff_RBX + 0x1cf8) = bVar5;
      if ((bVar5 == 0) || (*(longlong *)(unaff_RBX + 0x1c98) == unaff_RDI)) {
        if (bVar5 == 0) {
          unaff_RDI = *(longlong *)(unaff_RBX + 0x1cd8);
        }
      }
      else {
        unaff_R14B = '\x01';
      }
      *(ulonglong *)(unaff_RBX + 0x1cd8) = unaff_R15;
    }
  }
  lVar8 = *(longlong *)(unaff_RBX + 0x1cd8);
  cVar15 = (char)unaff_R15;
  if ((lVar8 != 0) && (*(int *)(unaff_RBX + 0x1cc0) == 3)) {
    fVar17 = (*(float *)(unaff_RBX + 0x1cf0) - 0.2) * 20.0;
    if (0.0 <= fVar17) {
      if (1.0 <= fVar17) {
        fVar17 = 1.0;
      }
    }
    else {
      fVar17 = 0.0;
    }
    if (fVar17 <= *(float *)(unaff_RBX + 0x1cf4)) {
      fVar17 = *(float *)(unaff_RBX + 0x1cf4);
    }
    *(float *)(unaff_RBX + 0x1cf4) = fVar17;
    if (*(int *)(unaff_RBX + 0x3c) < 0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = func_0x0001801281d0(*(int *)(unaff_RBX + 0x3c),1);
    }
    if (cVar4 != '\0') {
      FUN_180133680();
      lVar8 = *(longlong *)(unaff_RBX + 0x1cd8);
    }
    if (*(char *)(unaff_RBX + 0x134) == cVar15) {
      unaff_RDI = lVar8;
    }
  }
  if ((0.0 <= *(float *)(unaff_RBX + 0x14c8)) && (*(float *)(unaff_RBX + 0x14c8) == 0.0)) {
    *(undefined1 *)(unaff_RBX + 0x1cf8) = 1;
  }
  if ((((*(int *)(unaff_RBX + 0x1b2c) == iVar16) || (*(char *)(unaff_RBX + 0x1b3d) != cVar15)) &&
      (*(char *)(unaff_RBX + 0x1cf8) != cVar15)) &&
     ((*(float *)(unaff_RBX + 0x14c8) < 0.0 &&
      (0.0 < *(float *)(unaff_RBX + 0x151c) || *(float *)(unaff_RBX + 0x151c) == 0.0)))) {
    if ((*(float *)(unaff_RBX + 0x118) <= -256000.0 && *(float *)(unaff_RBX + 0x118) != -256000.0)
       || (*(float *)(unaff_RBX + 0x11c) <= -256000.0 && *(float *)(unaff_RBX + 0x11c) != -256000.0)
       ) {
      cVar4 = '\0';
    }
    else {
      cVar4 = '\x01';
    }
    pfVar9 = (float *)(unaff_RBX + 0x3b4);
    if (pfVar9 == (float *)0x0) {
      pfVar9 = (float *)(unaff_RBX + 0x118);
    }
    if ((*pfVar9 <= -256000.0 && *pfVar9 != -256000.0) ||
       (pfVar9[1] <= -256000.0 && pfVar9[1] != -256000.0)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    if (cVar4 == cVar6) {
      unaff_R14B = '\x01';
    }
  }
  if ((lVar8 != 0) && ((*(byte *)(lVar8 + 0xc) & 4) == 0)) {
    if (*(int *)(unaff_RBX + 0x1cc0) == 3) {
      if (*(char *)(unaff_RBX + 0x135) == cVar15) {
        uVar13 = 1;
        puVar11 = &stack0x000000a0;
LAB_180133c1e:
        pfVar9 = (float *)FUN_180131aa0(puVar11,uVar13,0,0,0);
        fVar17 = pfVar9[1];
        if ((*pfVar9 != 0.0) || (fVar17 != 0.0)) {
          fVar19 = *(float *)(unaff_RBX + 0xbc);
          if (*(float *)(unaff_RBX + 0xb8) <= *(float *)(unaff_RBX + 0xbc)) {
            fVar19 = *(float *)(unaff_RBX + 0xb8);
          }
          lVar8 = *(longlong *)(lVar8 + 0x3a0);
          fVar19 = (float)(int)(fVar19 * *(float *)(unaff_RBX + 0x18) * 800.0);
          *(float *)(lVar8 + 0x40) = *pfVar9 * fVar19 + *(float *)(lVar8 + 0x40);
          *(float *)(lVar8 + 0x44) = fVar17 * fVar19 + *(float *)(lVar8 + 0x44);
          *(undefined1 *)(unaff_RBX + 0x1d07) = 1;
          if (((*(uint *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0xc) & 0x100) == 0) &&
             (*(float *)(unaff_RBX + 0x2e04) <= 0.0)) {
            *(undefined4 *)(unaff_RBX + 0x2e04) = *(undefined4 *)(unaff_RBX + 0x1c);
          }
        }
      }
    }
    else if (*(int *)(unaff_RBX + 0x1cc0) == 4) {
      uVar13 = 4;
      puVar11 = &stack0x000000a8;
      goto LAB_180133c1e;
    }
  }
  if (unaff_RDI == 0) goto LAB_180133d4a;
  lVar8 = *(longlong *)(unaff_RBX + 0x1c98);
  uVar14 = unaff_R15;
  if (lVar8 == 0) {
LAB_180133ce2:
    *(undefined2 *)(unaff_RBX + 0x1d06) = 0x100;
    if (*(longlong *)(unaff_RDI + 0x3c0) != 0) {
      unaff_RDI = *(longlong *)(unaff_RDI + 0x3c0);
    }
    FUN_18012ed10(unaff_RDI);
    FUN_18012d2e0(unaff_RDI);
    if (*(int *)(unaff_RDI + 0x3c8) == iVar16) {
      func_0x000180131810(unaff_RDI,0);
    }
    if (*(int *)(unaff_RDI + 0x174) == 2) {
      *(undefined4 *)(unaff_RBX + 0x1cfc) = 1;
    }
    if ((*(ulonglong *)(unaff_RDI + 0x28) != uVar14) &&
       (*(code **)(unaff_RBX + 0x1578) != (code *)0x0)) {
      (**(code **)(unaff_RBX + 0x1578))();
    }
  }
  else if (unaff_RDI != *(longlong *)(lVar8 + 0x3a8)) {
    uVar14 = *(ulonglong *)(lVar8 + 0x28);
    goto LAB_180133ce2;
  }
  *(ulonglong *)(unaff_RBX + 0x1cd8) = unaff_R15;
LAB_180133d4a:
  if ((unaff_R14B != '\0') && (uVar14 = *(ulonglong *)(unaff_RBX + 0x1c98), uVar14 != 0)) {
    puVar1 = (ulonglong *)(uVar14 + 0x398);
    uVar12 = *puVar1;
    uVar2 = uVar14;
    while (((uVar12 != unaff_R15 && ((*(byte *)(uVar2 + 0x174) & 2) == 0)) &&
           ((*(uint *)(uVar2 + 0xc) & 0x15000000) == 0x1000000))) {
      uVar2 = *puVar1;
      puVar1 = (ulonglong *)(uVar2 + 0x398);
      uVar12 = *puVar1;
    }
    if (uVar2 != uVar14) {
      FUN_18012d2e0(uVar2);
      *(ulonglong *)(uVar2 + 0x3c0) = uVar14;
      uVar14 = *(ulonglong *)(unaff_RBX + 0x1c98);
    }
    *(undefined2 *)(unaff_RBX + 0x1d06) = 0x100;
    if ((*(byte *)(uVar14 + 0x174) & 2) == 0) {
      uVar12 = unaff_R15 & 0xffffffff;
    }
    else {
      uVar10 = *(uint *)(unaff_RBX + 0x1cfc) ^ 1;
      uVar12 = (ulonglong)uVar10;
      if ((uVar10 == 1) && (*(ulonglong *)(uVar2 + 0x410) == unaff_R15)) {
        *(int *)(uVar14 + 0x3cc) = iVar16;
      }
    }
    func_0x000180131750(uVar12);
  }
  return;
}





// 函数: void FUN_180133881(void)
void FUN_180133881(void)

{
  longlong unaff_RBX;
  undefined8 unaff_R15;
  
  *(undefined8 *)(unaff_RBX + 0x1cd8) = unaff_R15;
  return;
}





