#include "TaleWorlds.Native.Split.h"

// 99_part_07_part052.c - 10 个函数

// 函数: void FUN_1804ce730(longlong *param_1,undefined8 *param_2)
void FUN_1804ce730(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  
  puVar12 = (undefined8 *)param_1[1];
  puVar8 = (undefined8 *)*param_1;
  lVar10 = ((longlong)puVar12 - (longlong)puVar8) / 0x60;
  puVar6 = (undefined8 *)0x0;
  if (lVar10 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 == 0) goto LAB_1804ce7ba;
  }
  puVar6 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,lVar10 * 0x60,(char)param_1[3],puVar8,0xfffffffffffffffe);
  puVar12 = (undefined8 *)param_1[1];
  puVar8 = (undefined8 *)*param_1;
LAB_1804ce7ba:
  puVar7 = puVar6;
  if (puVar8 != puVar12) {
    lVar11 = (longlong)puVar6 - (longlong)puVar8;
    puVar8 = puVar8 + 9;
    do {
      uVar5 = puVar8[-8];
      *puVar7 = puVar8[-9];
      puVar7[1] = uVar5;
      uVar5 = puVar8[-6];
      puVar7[2] = puVar8[-7];
      puVar7[3] = uVar5;
      uVar5 = puVar8[-4];
      puVar7[4] = puVar8[-5];
      puVar7[5] = uVar5;
      uVar5 = puVar8[-2];
      puVar7[6] = puVar8[-3];
      puVar7[7] = uVar5;
      *(undefined8 *)((longlong)puVar8 + lVar11 + -8) = puVar8[-1];
      puVar8[-1] = 0;
      *(undefined8 *)((longlong)puVar8 + lVar11) = *puVar8;
      *puVar8 = 0;
      *(undefined1 *)((longlong)puVar8 + lVar11 + 8) = *(undefined1 *)(puVar8 + 1);
      *(undefined4 *)((longlong)puVar8 + lVar11 + 0xc) = *(undefined4 *)((longlong)puVar8 + 0xc);
      *(undefined4 *)((longlong)puVar8 + lVar11 + 0x10) = *(undefined4 *)(puVar8 + 2);
      *(undefined4 *)((longlong)puVar8 + lVar11 + 0x14) = *(undefined4 *)((longlong)puVar8 + 0x14);
      puVar7 = puVar7 + 0xc;
      puVar1 = puVar8 + 3;
      puVar8 = puVar8 + 0xc;
    } while (puVar1 != puVar12);
  }
  uVar5 = param_2[1];
  *puVar7 = *param_2;
  puVar7[1] = uVar5;
  uVar5 = param_2[3];
  puVar7[2] = param_2[2];
  puVar7[3] = uVar5;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 5);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)puVar7 + 0x24) = uVar2;
  *(undefined4 *)(puVar7 + 5) = uVar3;
  *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar4;
  uVar5 = param_2[7];
  puVar7[6] = param_2[6];
  puVar7[7] = uVar5;
  puVar7[8] = param_2[8];
  param_2[8] = 0;
  puVar7[9] = param_2[9];
  param_2[9] = 0;
  *(undefined1 *)(puVar7 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined4 *)((longlong)puVar7 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(puVar7 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)puVar7 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  lVar11 = param_1[1];
  lVar9 = *param_1;
  if (lVar9 != lVar11) {
    do {
      if (*(longlong **)(lVar9 + 0x48) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar9 + 0x48) + 0x38))();
      }
      if (*(longlong **)(lVar9 + 0x40) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar9 + 0x40) + 0x38))();
      }
      lVar9 = lVar9 + 0x60;
    } while (lVar9 != lVar11);
    lVar9 = *param_1;
  }
  if (lVar9 == 0) {
    *param_1 = (longlong)puVar6;
    param_1[1] = (longlong)(puVar7 + 0xc);
    param_1[2] = (longlong)(puVar6 + lVar10 * 0xc);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar9);
}






// 函数: void FUN_1804ce920(int param_1,int param_2,longlong *param_3)
void FUN_1804ce920(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  for (lVar5 = (longlong)param_1; lVar5 < param_2; lVar5 = lVar5 + 1) {
    lVar4 = *param_3;
    uVar3 = *(ushort *)(*(longlong *)(lVar4 + 0x188) + lVar5 * 8);
    lVar1 = *(longlong *)(lVar4 + 0x188) + lVar5 * 8;
    lVar6 = (ulonglong)uVar3 * 0x38 + *(longlong *)(lVar4 + 0x68);
    if (*(int *)(lVar1 + 4) == *(int *)(lVar6 + 0x10)) {
      uVar2 = *(undefined1 *)
               (*(longlong *)(lVar4 + 0x130) + 8 + (ulonglong)*(ushort *)(lVar6 + 0x2a) * 0x10);
      FUN_1804cdb90(lVar4,(ulonglong)uVar3,uVar2,*(undefined2 *)(lVar1 + 2));
      FUN_1804cd9a0(*param_3,uVar3,uVar2,*(undefined2 *)(lVar1 + 2));
    }
  }
  return;
}






// 函数: void FUN_1804ce93c(void)
void FUN_1804ce93c(void)

{
  longlong lVar1;
  undefined1 uVar2;
  ushort uVar3;
  longlong lVar4;
  longlong unaff_RBX;
  longlong lVar5;
  longlong unaff_R14;
  longlong *unaff_R15;
  
  do {
    lVar4 = *unaff_R15;
    uVar3 = *(ushort *)(*(longlong *)(lVar4 + 0x188) + unaff_RBX * 8);
    lVar1 = *(longlong *)(lVar4 + 0x188) + unaff_RBX * 8;
    lVar5 = (ulonglong)uVar3 * 0x38 + *(longlong *)(lVar4 + 0x68);
    if (*(int *)(lVar1 + 4) == *(int *)(lVar5 + 0x10)) {
      uVar2 = *(undefined1 *)
               (*(longlong *)(lVar4 + 0x130) + 8 + (ulonglong)*(ushort *)(lVar5 + 0x2a) * 0x10);
      FUN_1804cdb90(lVar4,(ulonglong)uVar3,uVar2,*(undefined2 *)(lVar1 + 2));
      FUN_1804cd9a0(*unaff_R15,uVar3,uVar2,*(undefined2 *)(lVar1 + 2));
    }
    unaff_RBX = unaff_RBX + 1;
  } while (unaff_RBX < unaff_R14);
  return;
}






// 函数: void FUN_1804ce9c2(void)
void FUN_1804ce9c2(void)

{
  return;
}






// 函数: void FUN_1804cea10(int param_1,int param_2,longlong *param_3)
void FUN_1804cea10(int param_1,int param_2,longlong *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  for (lVar5 = (longlong)param_1; lVar5 < param_2; lVar5 = lVar5 + 1) {
    lVar2 = *param_3;
    lVar3 = *(longlong *)(lVar2 + 0x68);
    lVar6 = (ulonglong)*(ushort *)(*(longlong *)(lVar2 + 0x188) + lVar5 * 8) * 0x38;
    FUN_1802fb280(*(undefined8 *)
                   (*(longlong *)(lVar2 + 0xe0) + 0x28 +
                   (ulonglong)*(ushort *)(lVar6 + 0x28 + lVar3) * 0x50));
    uVar1 = *(ushort *)(lVar6 + 0x28 + lVar3);
    if (uVar1 != 0xffff) {
      lVar2 = *param_3;
      uVar4 = (ulonglong)uVar1;
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xe0) + 0x28 + uVar4 * 0x50);
      *(undefined1 *)(*(longlong *)(lVar2 + 0xe0) + 0x30 + uVar4 * 0x50) =
           *(undefined1 *)(lVar3 + 0x20);
      *(undefined4 *)(*(longlong *)(lVar2 + 0xe0) + 0x34 + uVar4 * 0x50) =
           *(undefined4 *)(lVar3 + 0x44);
      *(undefined4 *)(*(longlong *)(lVar2 + 0xe0) + 0x38 + uVar4 * 0x50) =
           *(undefined4 *)(lVar3 + 0x48);
      *(undefined4 *)(*(longlong *)(lVar2 + 0xe0) + 0x3c + uVar4 * 0x50) =
           *(undefined4 *)(lVar3 + 0x44);
      *(undefined4 *)(*(longlong *)(lVar2 + 0xe0) + 0x40 + uVar4 * 0x50) =
           *(undefined4 *)(lVar3 + 0x168);
      *(undefined4 *)(*(longlong *)(lVar2 + 0xe0) + 0x44 + uVar4 * 0x50) =
           *(undefined4 *)(lVar3 + 0x170);
      *(undefined4 *)(*(longlong *)(lVar2 + 0xe0) + 0x48 + uVar4 * 0x50) =
           *(undefined4 *)(lVar3 + 0x180);
      *(byte *)(*(longlong *)(lVar2 + 0xe0) + 0x4c + uVar4 * 0x50) =
           *(byte *)(lVar3 + 0xa8) >> 3 & 1;
    }
  }
  return;
}






// 函数: void FUN_1804cea2b(void)
void FUN_1804cea2b(void)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar5;
  longlong *unaff_R14;
  
  do {
    lVar2 = *unaff_R14;
    lVar3 = *(longlong *)(lVar2 + 0x68);
    lVar5 = (ulonglong)*(ushort *)(*(longlong *)(lVar2 + 0x188) + unaff_RSI * 8) * 0x38;
    FUN_1802fb280(*(undefined8 *)
                   (*(longlong *)(lVar2 + 0xe0) + 0x28 +
                   (ulonglong)*(ushort *)(lVar5 + 0x28 + lVar3) * 0x50));
    uVar1 = *(ushort *)(lVar5 + 0x28 + lVar3);
    if (uVar1 != 0xffff) {
      lVar2 = *unaff_R14;
      uVar4 = (ulonglong)uVar1;
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xe0) + 0x28 + uVar4 * 0x50);
      *(undefined1 *)(*(longlong *)(lVar2 + 0xe0) + 0x30 + uVar4 * 0x50) =
           *(undefined1 *)(lVar3 + 0x20);
      *(undefined4 *)(*(longlong *)(lVar2 + 0xe0) + 0x34 + uVar4 * 0x50) =
           *(undefined4 *)(lVar3 + 0x44);
      *(undefined4 *)(*(longlong *)(lVar2 + 0xe0) + 0x38 + uVar4 * 0x50) =
           *(undefined4 *)(lVar3 + 0x48);
      *(undefined4 *)(*(longlong *)(lVar2 + 0xe0) + 0x3c + uVar4 * 0x50) =
           *(undefined4 *)(lVar3 + 0x44);
      *(undefined4 *)(*(longlong *)(lVar2 + 0xe0) + 0x40 + uVar4 * 0x50) =
           *(undefined4 *)(lVar3 + 0x168);
      *(undefined4 *)(*(longlong *)(lVar2 + 0xe0) + 0x44 + uVar4 * 0x50) =
           *(undefined4 *)(lVar3 + 0x170);
      *(undefined4 *)(*(longlong *)(lVar2 + 0xe0) + 0x48 + uVar4 * 0x50) =
           *(undefined4 *)(lVar3 + 0x180);
      *(byte *)(*(longlong *)(lVar2 + 0xe0) + 0x4c + uVar4 * 0x50) =
           *(byte *)(lVar3 + 0xa8) >> 3 & 1;
    }
    unaff_RSI = unaff_RSI + 1;
  } while (unaff_RSI < unaff_RBP);
  return;
}






// 函数: void FUN_1804ceb3b(void)
void FUN_1804ceb3b(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804ceb90(int param_1,int param_2,longlong *param_3)
void FUN_1804ceb90(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar7 = _DAT_180c8a9c8;
  lVar6 = _DAT_180c86870;
  param_3 = (longlong *)*param_3;
  for (lVar11 = (longlong)param_1; lVar11 < param_2; lVar11 = lVar11 + 1) {
    lVar1 = *param_3;
    lVar2 = *(longlong *)(lVar1 + 0x68);
    lVar12 = (ulonglong)*(ushort *)(*(longlong *)(lVar1 + 0x188) + lVar11 * 8) * 0x38;
    lVar3 = *(longlong *)(lVar1 + 0x90);
    uVar8 = (ulonglong)*(ushort *)(lVar12 + 0x24 + lVar2);
    pfVar4 = (float *)param_3[1];
    fVar15 = *(float *)(lVar3 + 0x3c + uVar8 * 0x48) - pfVar4[1];
    fVar13 = *(float *)(lVar3 + 0x40 + uVar8 * 0x48) - pfVar4[2];
    fVar14 = *(float *)(lVar3 + 0x38 + uVar8 * 0x48) - *pfVar4;
    fVar14 = fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13;
    fVar13 = *(float *)param_3[2];
    if (fVar13 < 1.0) {
      fVar14 = fVar14 * fVar13 * fVar13 * 0.9;
    }
    uVar10 = *(uint *)param_3[3];
    if ((int)*(uint *)param_3[3] < 0) {
      lVar3 = *(longlong *)(lVar6 + 0x3d8);
      if ((lVar3 == 0) ||
         ((*(int *)(lVar3 + 0x110) != 1 && ((lVar3 == 0 || (*(int *)(lVar3 + 0x110) != 3)))))) {
        bVar9 = 0;
        if ((*(int *)(lVar7 + 0x7e0) == 0) &&
           (*(float *)(lVar1 + 0x340) <= fVar14 && fVar14 != *(float *)(lVar1 + 0x340))) {
          do {
            bVar9 = bVar9 + 1;
            pfVar4 = (float *)(lVar1 + 0x340 + (ulonglong)bVar9 * 4);
          } while (*pfVar4 <= fVar14 && fVar14 != *pfVar4);
        }
      }
      else {
        bVar9 = 0;
      }
      bVar5 = bVar9 + 1;
      if (*(char *)(lVar12 + 0x32 + lVar2) != '\0') {
        bVar5 = bVar9;
      }
      uVar10 = 5;
      if (bVar5 < 5) {
        uVar10 = (uint)bVar5;
      }
    }
    *(char *)(*(longlong *)(lVar1 + 0x130) + 8 +
             (ulonglong)*(ushort *)(lVar12 + 0x2a + lVar2) * 0x10) = (char)uVar10;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804cebb8(void)
void FUN_1804cebb8(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  longlong *unaff_RBX;
  longlong unaff_RDI;
  longlong in_R9;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float in_XMM3_Da;
  float in_XMM4_Da;
  
  lVar7 = _DAT_180c8a9c8;
  lVar6 = _DAT_180c86870;
  do {
    lVar1 = *unaff_RBX;
    lVar2 = *(longlong *)(lVar1 + 0x68);
    lVar11 = (ulonglong)*(ushort *)(*(longlong *)(lVar1 + 0x188) + in_R9 * 8) * 0x38;
    lVar3 = *(longlong *)(lVar1 + 0x90);
    uVar8 = (ulonglong)*(ushort *)(lVar11 + 0x24 + lVar2);
    pfVar4 = (float *)unaff_RBX[1];
    fVar14 = *(float *)(lVar3 + 0x3c + uVar8 * 0x48) - pfVar4[1];
    fVar12 = *(float *)(lVar3 + 0x40 + uVar8 * 0x48) - pfVar4[2];
    fVar13 = *(float *)(lVar3 + 0x38 + uVar8 * 0x48) - *pfVar4;
    fVar13 = fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12;
    fVar12 = *(float *)unaff_RBX[2];
    if (fVar12 < in_XMM4_Da) {
      fVar13 = fVar13 * fVar12 * fVar12 * in_XMM3_Da;
    }
    uVar10 = *(uint *)unaff_RBX[3];
    if ((int)*(uint *)unaff_RBX[3] < 0) {
      lVar3 = *(longlong *)(lVar6 + 0x3d8);
      if ((lVar3 == 0) ||
         ((*(int *)(lVar3 + 0x110) != 1 && ((lVar3 == 0 || (*(int *)(lVar3 + 0x110) != 3)))))) {
        bVar9 = 0;
        if ((*(int *)(lVar7 + 0x7e0) == 0) &&
           (*(float *)(lVar1 + 0x340) <= fVar13 && fVar13 != *(float *)(lVar1 + 0x340))) {
          do {
            bVar9 = bVar9 + 1;
            pfVar4 = (float *)(lVar1 + 0x340 + (ulonglong)bVar9 * 4);
          } while (*pfVar4 <= fVar13 && fVar13 != *pfVar4);
        }
      }
      else {
        bVar9 = 0;
      }
      bVar5 = bVar9 + 1;
      if (*(char *)(lVar11 + 0x32 + lVar2) != '\0') {
        bVar5 = bVar9;
      }
      uVar10 = 5;
      if (bVar5 < 5) {
        uVar10 = (uint)bVar5;
      }
    }
    in_R9 = in_R9 + 1;
    *(char *)(*(longlong *)(lVar1 + 0x130) + 8 +
             (ulonglong)*(ushort *)(lVar11 + 0x2a + lVar2) * 0x10) = (char)uVar10;
  } while (in_R9 < unaff_RDI);
  return;
}






// 函数: void FUN_1804cece9(void)
void FUN_1804cece9(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1804cecf0(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 == 3) {
    return 0x180c09810;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,DAT_180bf65bc,0xfffffffffffffffe);
      puVar1 = (undefined8 *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1804cede0(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 == 3) {
    return 0x180c09790;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x38,8,DAT_180bf65bc,0xfffffffffffffffe);
      puVar1 = (undefined8 *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      puVar3[6] = puVar1[6];
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




