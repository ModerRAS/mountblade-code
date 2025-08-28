#include "TaleWorlds.Native.Split.h"

// 99_part_03_part097.c - 17 个函数

// 函数: void FUN_180253b30(longlong param_1,undefined8 param_2,longlong *param_3)
void FUN_180253b30(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  LOCK();
  plVar1 = param_3 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + 0x180;
  UNLOCK();
  uVar7 = 0;
  uVar4 = lVar2 + 7U & 0xfffffffffffffff8;
  uVar5 = uVar7;
  if (uVar4 + 0x178 < (ulonglong)param_3[3]) {
    uVar5 = uVar4 + *param_3;
  }
  uVar3 = FUN_1800ee510(uVar5);
  *(byte *)(param_1 + 0x2e9) = *(byte *)(param_1 + 0x2e9) | 4;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  uVar5 = uVar7;
  if (*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      lVar2 = *(longlong *)(uVar5 + *(longlong *)(param_1 + 0x1c0));
      FUN_180253b30(lVar2,lVar2 + 0x70,param_3);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar5 = uVar5 + 8;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
  }
  return;
}






// 函数: void FUN_180253b95(void)
void FUN_180253b95(void)

{
  longlong lVar1;
  longlong unaff_RSI;
  uint uVar2;
  ulonglong unaff_RDI;
  ulonglong uVar3;
  
  uVar3 = unaff_RDI;
  do {
    lVar1 = *(longlong *)(uVar3 + *(longlong *)(unaff_RSI + 0x1c0));
    FUN_180253b30(lVar1,lVar1 + 0x70);
    uVar3 = uVar3 + 8;
    uVar2 = (int)unaff_RDI + 1;
    unaff_RDI = (ulonglong)uVar2;
  } while ((ulonglong)(longlong)(int)uVar2 <
           (ulonglong)(*(longlong *)(unaff_RSI + 0x1c8) - *(longlong *)(unaff_RSI + 0x1c0) >> 3));
  return;
}






// 函数: void FUN_180253bdc(void)
void FUN_180253bdc(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180253bf0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180253bf0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  
  puVar12 = (undefined8 *)param_1[1];
  puVar9 = (undefined8 *)*param_1;
  lVar14 = ((longlong)puVar12 - (longlong)puVar9) / 0x420;
  plVar8 = (longlong *)0x0;
  if (lVar14 == 0) {
    lVar14 = 1;
  }
  else {
    lVar14 = lVar14 * 2;
    if (lVar14 == 0) goto LAB_180253c82;
  }
  plVar8 = (longlong *)
           FUN_18062b420(_DAT_180c8ed18,lVar14 * 0x420,(char)param_1[3],param_4,0xfffffffffffffffe);
  puVar12 = (undefined8 *)param_1[1];
  puVar9 = (undefined8 *)*param_1;
LAB_180253c82:
  plVar10 = plVar8;
  if (puVar9 != puVar12) {
    lVar13 = (longlong)plVar8 - (longlong)puVar9;
    puVar9 = puVar9 + 2;
    do {
      *plVar10 = 0;
      *(undefined8 *)(lVar13 + -8 + (longlong)puVar9) = 0;
      if (puVar9[-2] != 0) {
        LOCK();
        piVar1 = (int *)(puVar9[-2] + 0x10);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (*plVar10 != 0) {
          FUN_180080060();
        }
        *plVar10 = puVar9[-2];
        lVar11 = *(longlong *)(lVar13 + -8 + (longlong)puVar9);
        if (lVar11 != 0) {
          pbVar3 = (byte *)(lVar11 + 0xfe);
          *pbVar3 = *pbVar3 & 0xfb;
        }
      }
      *(undefined8 *)(lVar13 + (longlong)puVar9) = *puVar9;
      *puVar9 = 0;
      uVar7 = puVar9[2];
      *(undefined8 *)((longlong)puVar9 + lVar13 + 8) = puVar9[1];
      *(undefined8 *)((longlong)puVar9 + lVar13 + 0x10) = uVar7;
      uVar7 = puVar9[4];
      *(undefined8 *)((longlong)puVar9 + lVar13 + 0x18) = puVar9[3];
      *(undefined8 *)((longlong)puVar9 + lVar13 + 0x20) = uVar7;
      uVar7 = puVar9[6];
      *(undefined8 *)((longlong)puVar9 + lVar13 + 0x28) = puVar9[5];
      *(undefined8 *)((longlong)puVar9 + lVar13 + 0x30) = uVar7;
      uVar7 = puVar9[8];
      *(undefined8 *)((longlong)puVar9 + lVar13 + 0x38) = puVar9[7];
      *(undefined8 *)((longlong)puVar9 + lVar13 + 0x40) = uVar7;
      uVar7 = puVar9[10];
      *(undefined8 *)((longlong)puVar9 + lVar13 + 0x48) = puVar9[9];
      *(undefined8 *)((longlong)puVar9 + lVar13 + 0x50) = uVar7;
      uVar7 = puVar9[0xc];
      *(undefined8 *)((longlong)puVar9 + lVar13 + 0x58) = puVar9[0xb];
      *(undefined8 *)((longlong)puVar9 + lVar13 + 0x60) = uVar7;
      uVar7 = puVar9[0xe];
      *(undefined8 *)((longlong)puVar9 + lVar13 + 0x68) = puVar9[0xd];
      *(undefined8 *)((longlong)puVar9 + lVar13 + 0x70) = uVar7;
      uVar7 = puVar9[0x10];
      *(undefined8 *)((longlong)puVar9 + lVar13 + 0x78) = puVar9[0xf];
      *(undefined8 *)((longlong)puVar9 + lVar13 + 0x80) = uVar7;
      uVar7 = puVar9[0x12];
      *(undefined8 *)((longlong)puVar9 + lVar13 + 0x88) = puVar9[0x11];
      *(undefined8 *)((longlong)puVar9 + lVar13 + 0x90) = uVar7;
      uVar7 = puVar9[0x14];
      *(undefined8 *)((longlong)puVar9 + lVar13 + 0x98) = puVar9[0x13];
      *(undefined8 *)((longlong)puVar9 + lVar13 + 0xa0) = uVar7;
      uVar7 = puVar9[0x16];
      *(undefined8 *)((longlong)puVar9 + lVar13 + 0xa8) = puVar9[0x15];
      *(undefined8 *)((longlong)puVar9 + lVar13 + 0xb0) = uVar7;
      uVar4 = *(undefined4 *)((longlong)puVar9 + 0xbc);
      uVar5 = *(undefined4 *)(puVar9 + 0x18);
      uVar6 = *(undefined4 *)((longlong)puVar9 + 0xc4);
      *(undefined4 *)((longlong)puVar9 + lVar13 + 0xb8) = *(undefined4 *)(puVar9 + 0x17);
      *(undefined4 *)((longlong)puVar9 + lVar13 + 0xbc) = uVar4;
      *(undefined4 *)((longlong)puVar9 + lVar13 + 0xc0) = uVar5;
      *(undefined4 *)((longlong)puVar9 + lVar13 + 0xc4) = uVar6;
      *(undefined8 *)(lVar13 + 200 + (longlong)puVar9) = puVar9[0x19];
      *(undefined4 *)(lVar13 + 0xd0 + (longlong)puVar9) = *(undefined4 *)(puVar9 + 0x1a);
      *(undefined4 *)(lVar13 + 0xd4 + (longlong)puVar9) = *(undefined4 *)((longlong)puVar9 + 0xd4);
      FUN_1801bd980((longlong)puVar9 + lVar13 + 0xe0,puVar9 + 0x1c);
      plVar10 = plVar10 + 0x84;
      puVar2 = puVar9 + 0x82;
      puVar9 = puVar9 + 0x84;
    } while (puVar2 != puVar12);
  }
  FUN_1802533e0(plVar10,param_2);
  lVar13 = param_1[1];
  lVar11 = *param_1;
  if (lVar11 != lVar13) {
    do {
      FUN_1801bd090(lVar11);
      lVar11 = lVar11 + 0x420;
    } while (lVar11 != lVar13);
    lVar11 = *param_1;
  }
  if (lVar11 == 0) {
    *param_1 = (longlong)plVar8;
    param_1[1] = (longlong)(plVar10 + 0x84);
    param_1[2] = (longlong)(plVar8 + lVar14 * 0x84);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar11);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180253e50(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)
void FUN_180253e50(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
  lVar7 = (longlong)puVar8 - (longlong)puVar3 >> 4;
  puVar2 = (undefined8 *)0x0;
  if (lVar7 == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = lVar7 * 2;
    if (lVar7 == 0) goto LAB_180253ec1;
  }
  puVar2 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,lVar7 << 4,(char)param_1[3],param_4,0xfffffffffffffffe);
  puVar8 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
LAB_180253ec1:
  puVar5 = puVar2;
  if (puVar3 != puVar8) {
    puVar4 = puVar3;
    do {
      *puVar5 = *puVar4;
      *puVar4 = 0;
      *(undefined8 *)((longlong)puVar2 + (8 - (longlong)puVar3) + (longlong)puVar4) = puVar4[1];
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 2;
    } while (puVar4 != puVar8);
  }
  *puVar5 = *param_2;
  *param_2 = 0;
  puVar5[1] = param_2[1];
  param_2[1] = 0;
  plVar1 = (longlong *)param_1[1];
  plVar6 = (longlong *)*param_1;
  if (plVar6 != plVar1) {
    do {
      if ((longlong *)plVar6[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar6[1] + 0x38))();
      }
      if ((longlong *)*plVar6 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar6 + 0x38))();
      }
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar1);
    plVar6 = (longlong *)*param_1;
  }
  if (plVar6 == (longlong *)0x0) {
    *param_1 = (longlong)puVar2;
    param_1[1] = (longlong)(puVar5 + 2);
    param_1[2] = (longlong)(puVar2 + lVar7 * 2);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180253fe0(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 == 3) {
    return 0x180c041f0;
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
      puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x40,8,DAT_180bf65bc,0xfffffffffffffffe);
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
      uVar2 = puVar1[7];
      puVar3[6] = puVar1[6];
      puVar3[7] = uVar2;
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






// 函数: void FUN_1802540d0(int param_1,int param_2,longlong *param_3)
void FUN_1802540d0(int param_1,int param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  
  puVar4 = (undefined8 *)*param_3;
  lVar10 = (longlong)param_1;
  do {
    if (param_2 <= lVar10) {
      return;
    }
    lVar5 = puVar4[1];
    lVar8 = (longlong)*(int *)(*(longlong *)*puVar4 + lVar10 * 4);
    lVar9 = lVar8 * 0x420 + *(longlong *)(lVar5 + 0x78);
    lVar6 = *(longlong *)(lVar9 + 0x370);
    uVar11 = *(uint *)(lVar9 + 0xe4) & **(uint **)puVar4[2];
    if (*(char *)puVar4[3] == '\0') {
      bVar12 = uVar11 == 0;
LAB_180254184:
      if (!bVar12) {
        piVar7 = (int *)puVar4[5];
        LOCK();
        iVar1 = *piVar7;
        *piVar7 = *piVar7 + 1;
        UNLOCK();
        *(int *)(*(longlong *)puVar4[4] + lVar10 * 4) = iVar1;
      }
    }
    else {
      if (((((uint)(int)*(char *)((longlong)*(int *)(*(longlong *)(lVar5 + 0x38) + lVar8 * 0xc + 4)
                                 + *(longlong *)(lVar5 + 0xd8)) >> 5 & 1) == 0) &&
          (uVar3 = *(uint *)(lVar6 + 0x138), (uVar3 & 0x2000010c) == 0)) &&
         ((cVar2 = *(char *)(lVar6 + 0x13c), cVar2 == '\x06' ||
          ((cVar2 == '\0' || ((uVar3 >> 0x12 & 1) != 0)))))) {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
      if (uVar11 != 0) {
        bVar12 = !bVar12;
        goto LAB_180254184;
      }
    }
    lVar10 = lVar10 + 1;
  } while( true );
}






// 函数: void FUN_1802540e4(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_1802540e4(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong unaff_RSI;
  uint uVar9;
  undefined8 *in_R11;
  bool bVar10;
  
  do {
    lVar4 = in_R11[1];
    lVar7 = (longlong)*(int *)(*(longlong *)*in_R11 + param_3 * 4);
    lVar8 = lVar7 * 0x420 + *(longlong *)(lVar4 + 0x78);
    lVar5 = *(longlong *)(lVar8 + 0x370);
    uVar9 = *(uint *)(lVar8 + 0xe4) & **(uint **)in_R11[2];
    if (*(char *)in_R11[3] == '\0') {
      bVar10 = uVar9 == 0;
LAB_180254184:
      if (!bVar10) {
        piVar6 = (int *)in_R11[5];
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + 1;
        UNLOCK();
        *(int *)(*(longlong *)in_R11[4] + param_3 * 4) = iVar1;
      }
    }
    else {
      if (((((uint)(int)*(char *)((longlong)*(int *)(*(longlong *)(lVar4 + 0x38) + lVar7 * 0xc + 4)
                                 + *(longlong *)(lVar4 + 0xd8)) >> 5 & 1) == 0) &&
          (uVar3 = *(uint *)(lVar5 + 0x138), (uVar3 & 0x2000010c) == 0)) &&
         ((cVar2 = *(char *)(lVar5 + 0x13c), cVar2 == '\x06' ||
          ((cVar2 == '\0' || ((uVar3 >> 0x12 & 1) != 0)))))) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      if (uVar9 != 0) {
        bVar10 = !bVar10;
        goto LAB_180254184;
      }
    }
    param_3 = param_3 + 1;
    if (unaff_RSI <= param_3) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1802541b4(void)
void FUN_1802541b4(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1802541c0(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 == 3) {
    return 0x180c041b0;
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
      puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x30,8,DAT_180bf65bc,0xfffffffffffffffe);
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






// 函数: void FUN_1802542a0(int param_1,int param_2,longlong *param_3)
void FUN_1802542a0(int param_1,int param_2,longlong *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  param_3 = (longlong *)*param_3;
  lVar5 = (longlong)param_1;
  if (lVar5 < param_2) {
    lVar6 = lVar5 * 0xbc;
    do {
      lVar7 = *(longlong *)(*param_3 + 0x98) + lVar6;
      lVar2 = *(longlong *)param_3[1];
      if (*(int *)(lVar2 + 0x178) == 3) {
        *(byte *)(lVar5 + *(longlong *)param_3[2]) =
             *(byte *)(lVar5 + *(longlong *)param_3[2]) & 0xef;
      }
      else if ((*(float *)(lVar7 + 0xb8) == 3.4028235e+38) ||
              (lVar3 = *(longlong *)(lVar2 + 0x28),
              fVar10 = *(float *)(lVar3 + 0x124) - *(float *)(lVar7 + 0x24),
              fVar9 = *(float *)(lVar3 + 0x120) - *(float *)(lVar7 + 0x20),
              fVar8 = *(float *)(lVar3 + 0x128) - *(float *)(lVar7 + 0x28),
              (fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8) -
              *(float *)(lVar7 + 0xb0) * *(float *)(lVar7 + 0xb0) <= *(float *)(lVar7 + 0xb8))) {
        iVar4 = FUN_1801b8ce0(*(longlong *)param_3[3] + 0x2998,param_3[4],lVar7,0,0,
                              *(undefined4 *)param_3[5],1,*(byte *)(lVar2 + 0x1bd8) >> 1 & 1);
        if (iVar4 < 1) {
          pbVar1 = (byte *)(*(longlong *)param_3[2] + lVar5);
          *pbVar1 = *pbVar1 & 0xef;
        }
        else {
          pbVar1 = (byte *)(*(longlong *)param_3[2] + lVar5);
          *pbVar1 = *pbVar1 | 0x10;
        }
      }
      else {
        *(byte *)(lVar5 + *(longlong *)param_3[2]) =
             *(byte *)(lVar5 + *(longlong *)param_3[2]) & 0xef;
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0xbc;
    } while (lVar5 < param_2);
  }
  return;
}






// 函数: void FUN_1802542c1(void)
void FUN_1802542c1(void)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong lVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uStack0000000000000028;
  undefined1 uStack0000000000000030;
  byte bStack0000000000000038;
  
  lVar5 = unaff_RBX * 0xbc;
  do {
    lVar6 = *(longlong *)(*unaff_RDI + 0x98) + lVar5;
    lVar2 = *(longlong *)unaff_RDI[1];
    if (*(int *)(lVar2 + 0x178) == 3) {
      *(byte *)(unaff_RBX + *(longlong *)unaff_RDI[2]) =
           *(byte *)(unaff_RBX + *(longlong *)unaff_RDI[2]) & 0xef;
    }
    else if ((*(float *)(lVar6 + 0xb8) == 3.4028235e+38) ||
            (lVar3 = *(longlong *)(lVar2 + 0x28),
            fVar9 = *(float *)(lVar3 + 0x124) - *(float *)(lVar6 + 0x24),
            fVar8 = *(float *)(lVar3 + 0x120) - *(float *)(lVar6 + 0x20),
            fVar7 = *(float *)(lVar3 + 0x128) - *(float *)(lVar6 + 0x28),
            (fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7) -
            *(float *)(lVar6 + 0xb0) * *(float *)(lVar6 + 0xb0) <= *(float *)(lVar6 + 0xb8))) {
      bStack0000000000000038 = *(byte *)(lVar2 + 0x1bd8) >> 1 & 1;
      uStack0000000000000030 = 1;
      uStack0000000000000028 = *(undefined4 *)unaff_RDI[5];
      iVar4 = FUN_1801b8ce0(*(longlong *)unaff_RDI[3] + 0x2998,unaff_RDI[4],lVar6,0,0);
      if (iVar4 < 1) {
        pbVar1 = (byte *)(*(longlong *)unaff_RDI[2] + unaff_RBX);
        *pbVar1 = *pbVar1 & 0xef;
      }
      else {
        pbVar1 = (byte *)(*(longlong *)unaff_RDI[2] + unaff_RBX);
        *pbVar1 = *pbVar1 | 0x10;
      }
    }
    else {
      *(byte *)(unaff_RBX + *(longlong *)unaff_RDI[2]) =
           *(byte *)(unaff_RBX + *(longlong *)unaff_RDI[2]) & 0xef;
    }
    unaff_RBX = unaff_RBX + 1;
    lVar5 = lVar5 + 0xbc;
  } while (unaff_RBX < unaff_RBP);
  return;
}






// 函数: void FUN_1802543fb(void)
void FUN_1802543fb(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180254410(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 == 3) {
    return 0x180c04130;
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
      puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x30,8,DAT_180bf65bc,0xfffffffffffffffe);
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



longlong FUN_1802544f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x150) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return param_1;
}






// 函数: void FUN_180254550(longlong param_1)
void FUN_180254550(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x150) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x130) == 0) {
    uVar1 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    uVar3 = uVar1;
    if (*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0) {
      do {
        FUN_180254550(*(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + uVar1));
        uVar2 = (int)uVar3 + 1;
        uVar1 = uVar1 + 8;
        uVar3 = (ulonglong)uVar2;
      } while ((ulonglong)(longlong)(int)uVar2 <
               (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
    }
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_180254610(longlong param_1)
void FUN_180254610(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  float fVar14;
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  lVar13 = *(longlong *)(param_1 + 0x168);
  if (lVar13 != 0) {
    fVar14 = *(float *)(lVar13 + 0x80);
    fVar15 = *(float *)(lVar13 + 0x84);
    fVar16 = *(float *)(lVar13 + 0x88);
    fVar17 = *(float *)(lVar13 + 0x8c);
    fVar1 = *(float *)(param_1 + 0x30);
    fVar2 = *(float *)(param_1 + 0x38);
    fVar3 = *(float *)(param_1 + 0x44);
    fVar4 = *(float *)(param_1 + 0x54);
    fVar5 = *(float *)(param_1 + 100);
    fVar18 = *(float *)(lVar13 + 0x70);
    fVar19 = *(float *)(lVar13 + 0x74);
    fVar20 = *(float *)(lVar13 + 0x78);
    fVar21 = *(float *)(lVar13 + 0x7c);
    fVar22 = *(float *)(lVar13 + 0x90);
    fVar23 = *(float *)(lVar13 + 0x94);
    fVar24 = *(float *)(lVar13 + 0x98);
    fVar25 = *(float *)(lVar13 + 0x9c);
    fVar6 = *(float *)(param_1 + 0x34);
    fVar7 = *(float *)(param_1 + 0x40);
    fVar8 = *(float *)(param_1 + 0x48);
    fVar9 = *(float *)(param_1 + 0x50);
    fVar10 = *(float *)(param_1 + 0x58);
    fVar11 = *(float *)(param_1 + 0x60);
    fVar12 = *(float *)(param_1 + 0x68);
    fVar26 = *(float *)(lVar13 + 0xa0);
    fVar27 = *(float *)(lVar13 + 0xa4);
    fVar28 = *(float *)(lVar13 + 0xa8);
    fVar29 = *(float *)(lVar13 + 0xac);
    *(float *)(param_1 + 0x70) = fVar6 * fVar14 + fVar1 * fVar18 + fVar2 * fVar22;
    *(float *)(param_1 + 0x74) = fVar6 * fVar15 + fVar1 * fVar19 + fVar2 * fVar23;
    *(float *)(param_1 + 0x78) = fVar6 * fVar16 + fVar1 * fVar20 + fVar2 * fVar24;
    *(float *)(param_1 + 0x7c) = fVar6 * fVar17 + fVar1 * fVar21 + fVar2 * fVar25;
    *(float *)(param_1 + 0x80) = fVar3 * fVar14 + fVar7 * fVar18 + fVar8 * fVar22;
    *(float *)(param_1 + 0x84) = fVar3 * fVar15 + fVar7 * fVar19 + fVar8 * fVar23;
    *(float *)(param_1 + 0x88) = fVar3 * fVar16 + fVar7 * fVar20 + fVar8 * fVar24;
    *(float *)(param_1 + 0x8c) = fVar3 * fVar17 + fVar7 * fVar21 + fVar8 * fVar25;
    *(float *)(param_1 + 0x90) = fVar4 * fVar14 + fVar9 * fVar18 + fVar10 * fVar22;
    *(float *)(param_1 + 0x94) = fVar4 * fVar15 + fVar9 * fVar19 + fVar10 * fVar23;
    *(float *)(param_1 + 0x98) = fVar4 * fVar16 + fVar9 * fVar20 + fVar10 * fVar24;
    *(float *)(param_1 + 0x9c) = fVar4 * fVar17 + fVar9 * fVar21 + fVar10 * fVar25;
    *(float *)(param_1 + 0xa0) = fVar5 * fVar14 + fVar11 * fVar18 + fVar12 * fVar22 + fVar26;
    *(float *)(param_1 + 0xa4) = fVar5 * fVar15 + fVar11 * fVar19 + fVar12 * fVar23 + fVar27;
    *(float *)(param_1 + 0xa8) = fVar5 * fVar16 + fVar11 * fVar20 + fVar12 * fVar24 + fVar28;
    *(float *)(param_1 + 0xac) = fVar5 * fVar17 + fVar11 * fVar21 + fVar12 * fVar25 + fVar29;
    return;
  }
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x68);
  return;
}






// 函数: void FUN_18025464c(longlong param_1,undefined8 param_2,float param_3,float param_4)
void FUN_18025464c(longlong param_1,undefined8 param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong in_RAX;
  undefined8 in_XMM0_Qa;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  float in_XMM5_Da;
  
  fVar8 = *(float *)(in_RAX + 0x70);
  fVar9 = *(float *)(in_RAX + 0x74);
  fVar10 = *(float *)(in_RAX + 0x78);
  fVar11 = *(float *)(in_RAX + 0x7c);
  fVar12 = *(float *)(in_RAX + 0x90);
  fVar13 = *(float *)(in_RAX + 0x94);
  fVar14 = *(float *)(in_RAX + 0x98);
  fVar15 = *(float *)(in_RAX + 0x9c);
  fVar1 = *(float *)(param_1 + 0x34);
  fVar2 = *(float *)(param_1 + 0x40);
  fVar3 = *(float *)(param_1 + 0x48);
  fVar4 = *(float *)(param_1 + 0x50);
  fVar5 = *(float *)(param_1 + 0x58);
  fVar6 = *(float *)(param_1 + 0x60);
  fVar7 = *(float *)(param_1 + 0x68);
  fVar16 = *(float *)(in_RAX + 0xa0);
  fVar17 = *(float *)(in_RAX + 0xa4);
  fVar18 = *(float *)(in_RAX + 0xa8);
  fVar19 = *(float *)(in_RAX + 0xac);
  *(float *)(param_1 + 0x70) =
       fVar1 * in_XMM4_Da + (float)in_XMM0_Qa * fVar8 + (float)param_2 * fVar12;
  *(float *)(param_1 + 0x74) =
       fVar1 * in_XMM4_Db + (float)((ulonglong)in_XMM0_Qa >> 0x20) * fVar9 +
       (float)((ulonglong)param_2 >> 0x20) * fVar13;
  *(float *)(param_1 + 0x78) = fVar1 * in_XMM4_Dc + in_XMM0_Dc * fVar10 + in_XMM1_Dc * fVar14;
  *(float *)(param_1 + 0x7c) = fVar1 * in_XMM4_Dd + in_XMM0_Dd * fVar11 + in_XMM1_Dd * fVar15;
  *(float *)(param_1 + 0x80) = in_XMM5_Da * in_XMM4_Da + fVar2 * fVar8 + fVar3 * fVar12;
  *(float *)(param_1 + 0x84) = in_XMM5_Da * in_XMM4_Db + fVar2 * fVar9 + fVar3 * fVar13;
  *(float *)(param_1 + 0x88) = in_XMM5_Da * in_XMM4_Dc + fVar2 * fVar10 + fVar3 * fVar14;
  *(float *)(param_1 + 0x8c) = in_XMM5_Da * in_XMM4_Dd + fVar2 * fVar11 + fVar3 * fVar15;
  *(float *)(param_1 + 0x90) = param_4 * in_XMM4_Da + fVar4 * fVar8 + fVar5 * fVar12;
  *(float *)(param_1 + 0x94) = param_4 * in_XMM4_Db + fVar4 * fVar9 + fVar5 * fVar13;
  *(float *)(param_1 + 0x98) = param_4 * in_XMM4_Dc + fVar4 * fVar10 + fVar5 * fVar14;
  *(float *)(param_1 + 0x9c) = param_4 * in_XMM4_Dd + fVar4 * fVar11 + fVar5 * fVar15;
  *(float *)(param_1 + 0xa0) = param_3 * in_XMM4_Da + fVar6 * fVar8 + fVar7 * fVar12 + fVar16;
  *(float *)(param_1 + 0xa4) = param_3 * in_XMM4_Db + fVar6 * fVar9 + fVar7 * fVar13 + fVar17;
  *(float *)(param_1 + 0xa8) = param_3 * in_XMM4_Dc + fVar6 * fVar10 + fVar7 * fVar14 + fVar18;
  *(float *)(param_1 + 0xac) = param_3 * in_XMM4_Dd + fVar6 * fVar11 + fVar7 * fVar15 + fVar19;
  return;
}






// 函数: void FUN_18025472a(longlong param_1)
void FUN_18025472a(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x68);
  return;
}



undefined8 *
FUN_180254770(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_1809fcc28;
  param_2[1] = param_2 + 3;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 2) = 0x13;
  strcpy_s(param_2[1],0x80,&UNK_180a14840,param_4,0,0xfffffffffffffffe);
  return param_2;
}



undefined8 *
FUN_1802547f0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a14860;
  param_1[5] = 0;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}






// 函数: void FUN_180254850(undefined8 *param_1)
void FUN_180254850(undefined8 *param_1)

{
  *param_1 = &UNK_180a14860;
  param_1[5] = 0;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802548a0(longlong *param_1,longlong param_2)
void FUN_1802548a0(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = (**(code **)(*param_1 + 0x98))();
  if (iVar1 != 1) {
    return;
  }
  puVar3 = *(undefined8 **)(param_2 + 0x180);
  puVar2 = (undefined4 *)0x0;
  puVar4 = *(undefined8 **)(param_2 + 0x188);
  lVar5 = (longlong)puVar4 - (longlong)puVar3 >> 4;
  if (puVar4 < *(undefined8 **)(param_2 + 400)) {
    *(undefined8 **)(param_2 + 0x188) = puVar4 + 2;
    *puVar4 = 0;
    puVar4[1] = param_1;
    return;
  }
  if (lVar5 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = lVar5 * 2;
    if (lVar5 == 0) goto LAB_180254953;
  }
  puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,lVar5 << 4,*(undefined1 *)(param_2 + 0x198));
  puVar3 = *(undefined8 **)(param_2 + 0x180);
  puVar4 = *(undefined8 **)(param_2 + 0x188);
LAB_180254953:
  if (puVar3 != puVar4) {
                    // WARNING: Subroutine does not return
    memmove(puVar2,puVar3,(longlong)puVar4 - (longlong)puVar3);
  }
  uStack_20 = SUB84(param_1,0);
  uStack_1c = (undefined4)((ulonglong)param_1 >> 0x20);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  if (*(longlong *)(param_2 + 0x180) == 0) {
    *(undefined4 **)(param_2 + 0x180) = puVar2;
    *(undefined4 **)(param_2 + 400) = puVar2 + lVar5 * 4;
    *(undefined4 **)(param_2 + 0x188) = puVar2 + 4;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




