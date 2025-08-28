#include "TaleWorlds.Native.Split.h"

// 99_part_03_part034.c - 2 个函数

// 函数: void FUN_1801ed52b(undefined8 param_1,float param_2)
void FUN_1801ed52b(undefined8 param_1,float param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong in_RAX;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  char *pcVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  char *pcVar16;
  char *unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_RDI;
  int iVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  float fVar21;
  float fVar22;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  
  *(undefined8 *)(in_RAX + 0x18) = unaff_RDI;
  *(undefined4 *)(in_RAX + -0x28) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x24) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x20) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0x1c) = unaff_XMM6_Dd;
  *(undefined4 *)(in_RAX + -0x38) = unaff_XMM7_Da;
  *(undefined4 *)(in_RAX + -0x34) = unaff_XMM7_Db;
  *(undefined4 *)(in_RAX + -0x30) = unaff_XMM7_Dc;
  *(undefined4 *)(in_RAX + -0x2c) = unaff_XMM7_Dd;
  *(undefined4 *)(in_RAX + -0x78) = unaff_XMM11_Da;
  *(undefined4 *)(in_RAX + -0x74) = unaff_XMM11_Db;
  *(undefined4 *)(in_RAX + -0x70) = unaff_XMM11_Dc;
  *(undefined4 *)(in_RAX + -0x6c) = unaff_XMM11_Dd;
  if (*(int *)(*(longlong *)(unaff_RBX + 0x2010) + 0x68) < 1) {
    if (*(int *)(*(longlong *)(unaff_RBX + 0x2010) + 0x68) < 0) {
      *(undefined4 *)(unaff_RBP + 0x67) = 0x3f800000;
      *(undefined4 *)(unaff_RBP + 0x6b) = 0;
    }
    else {
      *(undefined8 *)(unaff_RBP + 0x67) = 0;
      uVar7 = *(undefined8 *)(unaff_RBP + 0x67);
      *(undefined8 *)(unaff_RBP + 0x67) = uVar7;
      fVar21 = *(float *)(unaff_RBP + 0x67);
      *(undefined8 *)(unaff_RBX + 0x1f2c) = uVar7;
      unaff_RBX[0x1590] = '\0';
      *(undefined8 *)(unaff_RBP + 0x67) = 0;
      *(ushort *)(unaff_RBX + 0x158c) = *(ushort *)(unaff_RBX + 0x158c) | (fVar21 <= 0.7) + 1;
    }
    uVar7 = *(undefined8 *)(unaff_RBP + 0x67);
    *(undefined8 *)(unaff_RBX + 0x1f34) = uVar7;
    *(undefined8 *)(unaff_RBP + 0x67) = uVar7;
    fVar21 = *(float *)(unaff_RBP + 0x67);
    unaff_RBX[0x15a8] = '\0';
    *(ushort *)(unaff_RBX + 0x15a4) = *(ushort *)(unaff_RBX + 0x15a4) | (fVar21 <= 0.7) + 1;
  }
  else {
    *(undefined4 *)(unaff_RBP + 0x67) = 0x3f800000;
    *(undefined4 *)(unaff_RBP + 0x6b) = 0;
    uVar7 = *(undefined8 *)(unaff_RBP + 0x67);
    *(undefined8 *)(unaff_RBX + 0x1f2c) = uVar7;
    *(undefined8 *)(unaff_RBP + 0x67) = uVar7;
    fVar21 = *(float *)(unaff_RBP + 0x67);
    unaff_RBX[0x1590] = '\0';
    *(ushort *)(unaff_RBX + 0x158c) = *(ushort *)(unaff_RBX + 0x158c) | (fVar21 <= 0.7) + 1;
  }
  pcVar12 = *(char **)(unaff_RBX + 0x2010);
  if (*(char *)(_DAT_180c86950 + 0x1609) == '\0') {
    if (*pcVar12 == '\0') {
      FUN_180287ed0(pcVar12,(int)(*(float *)(_DAT_180c86950 + 0x17ec) * 0.5),
                    (int)(*(float *)(_DAT_180c86950 + 0x17f0) * 0.5));
    }
  }
  else if (*pcVar12 != '\0') {
    *pcVar12 = '\0';
  }
  *(undefined4 *)(pcVar12 + 0x6c) = *(undefined4 *)(pcVar12 + 0x60);
  *(undefined4 *)(pcVar12 + 0x70) = *(undefined4 *)(pcVar12 + 100);
  *(undefined4 *)(pcVar12 + 0x74) = *(undefined4 *)(pcVar12 + 0x68);
  pcVar12[0x68] = '\0';
  pcVar12[0x69] = '\0';
  pcVar12[0x6a] = '\0';
  pcVar12[0x6b] = '\0';
  pcVar12[0x60] = '\0';
  pcVar12[0x61] = '\0';
  pcVar12[0x62] = '\0';
  pcVar12[99] = '\0';
  pcVar12[100] = '\0';
  pcVar12[0x65] = '\0';
  pcVar12[0x66] = '\0';
  pcVar12[0x67] = '\0';
  FUN_18030f390(*(undefined8 *)(unaff_RBX + 0x2018));
  if ((*unaff_RBX != '\0') &&
     (*(char *)(*(longlong *)(_DAT_180c86870 + 8) + 0xbc +
               (ulonglong)(*(uint *)(*(longlong *)(_DAT_180c86870 + 8) + 0x13c) & 1) * 0x48) == '\0'
     )) {
    FUN_1801ed150();
  }
  lVar18 = *(longlong *)(unaff_RBX + 0x2018);
  lVar11 = *(longlong *)(lVar18 + 0x10);
  if (lVar11 != *(longlong *)(lVar18 + 0x30)) {
    do {
      uVar7 = *(undefined8 *)(lVar11 + 8);
      uVar10 = (ulonglong)*(byte *)(lVar11 + 4);
      *(undefined8 *)(unaff_RBP + 0x67) = uVar7;
      fVar21 = *(float *)(unaff_RBP + 0x67);
      *(undefined8 *)(unaff_RBX + uVar10 * 8 + 0x1804) = uVar7;
      unaff_RBX[uVar10 * 0x18 + 0x18] = '\0';
      *(ushort *)(unaff_RBX + uVar10 * 0x18 + 0x14) =
           *(ushort *)(unaff_RBX + uVar10 * 0x18 + 0x14) | (fVar21 <= 0.7) + 1;
      lVar11 = *(longlong *)(lVar18 + 0x10) + 0x10;
      if (lVar11 == *(longlong *)(lVar18 + 0x20)) {
        if (*(longlong *)(lVar18 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar6 = (longlong *)(*(longlong *)(lVar18 + 0x28) + 8);
        *(longlong **)(lVar18 + 0x28) = plVar6;
        lVar11 = *plVar6;
        *(longlong *)(lVar18 + 0x18) = lVar11;
        *(longlong *)(lVar18 + 0x20) = lVar11 + 0x100;
      }
      *(longlong *)(lVar18 + 0x10) = lVar11;
    } while (lVar11 != *(longlong *)(lVar18 + 0x30));
  }
  plVar6 = *(longlong **)(unaff_RBX + 0x2008);
  *(undefined8 *)(unaff_RBP + -0x61) = 0;
  do {
    puVar15 = (ulonglong *)*plVar6;
    uVar10 = *puVar15;
    if ((uVar10 == puVar15[1]) && (puVar15[1] = puVar15[8], uVar10 == puVar15[8])) {
      if (puVar15 == (ulonglong *)plVar6[8]) break;
      puVar15 = (ulonglong *)*plVar6;
      puVar15[1] = puVar15[8];
      uVar10 = *puVar15;
      if (uVar10 != puVar15[8]) goto LAB_1801ed809;
      puVar15 = (ulonglong *)puVar15[0x10];
      uVar10 = *puVar15;
      puVar15[1] = puVar15[8];
      *plVar6 = (longlong)puVar15;
      puVar1 = (undefined8 *)(puVar15[0x11] + uVar10 * 0x10);
      uVar7 = puVar1[1];
      uVar14 = puVar15[0x12];
      *(undefined8 *)(unaff_RBP + -0x69) = *puVar1;
      *(undefined8 *)(unaff_RBP + -0x61) = uVar7;
      *puVar15 = uVar14 & uVar10 + 1;
    }
    else {
LAB_1801ed809:
      puVar1 = (undefined8 *)(puVar15[0x11] + uVar10 * 0x10);
      uVar7 = puVar1[1];
      uVar14 = puVar15[0x12];
      *(undefined8 *)(unaff_RBP + -0x69) = *puVar1;
      *(undefined8 *)(unaff_RBP + -0x61) = uVar7;
      *puVar15 = uVar14 & uVar10 + 1;
    }
    *(undefined8 *)(unaff_RBP + 0x67) = *(undefined8 *)(unaff_RBP + -0x61);
    fVar21 = *(float *)(unaff_RBP + 0x67);
    uVar10 = *(ulonglong *)(unaff_RBP + -0x69) >> 0x20 & 0xff;
    *(undefined8 *)(unaff_RBX + uVar10 * 8 + 0x1804) = *(undefined8 *)(unaff_RBP + -0x61);
    unaff_RBX[uVar10 * 0x18 + 0x18] = '\0';
    *(ushort *)(unaff_RBX + uVar10 * 0x18 + 0x14) =
         *(ushort *)(unaff_RBX + uVar10 * 0x18 + 0x14) | (fVar21 <= 0.7) + 1;
  } while( true );
LAB_1801ed890:
  puVar15 = (ulonglong *)plVar6[10];
  uVar10 = *puVar15;
  if ((uVar10 == puVar15[1]) && (puVar15[1] = puVar15[8], uVar10 == puVar15[8])) {
    if (puVar15 == (ulonglong *)plVar6[0x12]) {
      lVar18 = *(longlong *)(unaff_RBX + 0x2010);
      *(undefined8 *)(unaff_RBP + -0x31) = 0;
      goto FUN_1801eda00;
    }
    puVar15 = (ulonglong *)plVar6[10];
    puVar15[1] = puVar15[8];
    uVar10 = *puVar15;
    if (uVar10 != puVar15[8]) goto LAB_1801ed8fb;
    puVar15 = (ulonglong *)puVar15[0x10];
    uVar10 = *puVar15;
    puVar15[1] = puVar15[8];
    plVar6[10] = (longlong)puVar15;
    uVar14 = puVar15[0x12];
    uVar7 = *(undefined8 *)(puVar15[0x11] + uVar10 * 8);
  }
  else {
LAB_1801ed8fb:
    uVar14 = puVar15[0x12];
    uVar7 = *(undefined8 *)(puVar15[0x11] + uVar10 * 8);
  }
  *(undefined8 *)(unaff_RBP + 0x67) = uVar7;
  *puVar15 = uVar14 & uVar10 + 1;
  puVar9 = *(undefined4 **)(unaff_RBX + 0x2038);
  if (puVar9 < *(undefined4 **)(unaff_RBX + 0x2040)) {
    *(undefined4 **)(unaff_RBX + 0x2038) = puVar9 + 1;
    *puVar9 = (int)((ulonglong)uVar7 >> 0x20);
  }
  else {
    lVar18 = *(longlong *)(unaff_RBX + 0x2030);
    lVar11 = (longlong)puVar9 - lVar18 >> 2;
    if (lVar11 == 0) {
      lVar11 = 1;
LAB_1801ed969:
      lVar8 = FUN_18062b420(_DAT_180c8ed18,lVar11 * 4,unaff_RBX[0x2048]);
      puVar9 = *(undefined4 **)(unaff_RBX + 0x2038);
      lVar18 = *(longlong *)(unaff_RBX + 0x2030);
    }
    else {
      lVar11 = lVar11 * 2;
      if (lVar11 != 0) goto LAB_1801ed969;
      lVar8 = 0;
    }
    puVar9 = (undefined4 *)FUN_180059350(lVar18,puVar9,lVar8);
    *puVar9 = *(undefined4 *)(unaff_RBP + 0x6b);
    if (*(longlong *)(unaff_RBX + 0x2030) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(longlong *)(unaff_RBX + 0x2030) = lVar8;
    *(longlong *)(unaff_RBX + 0x2040) = lVar8 + lVar11 * 4;
    *(undefined4 **)(unaff_RBX + 0x2038) = puVar9 + 1;
  }
  goto LAB_1801ed890;
FUN_1801eda00:
  puVar15 = *(ulonglong **)(lVar18 + 0x10);
  uVar10 = *puVar15;
  if ((uVar10 == puVar15[1]) && (puVar15[1] = puVar15[8], uVar10 == puVar15[8])) {
    if (puVar15 == *(ulonglong **)(lVar18 + 0x50)) goto LAB_1801edb41;
    puVar15 = *(ulonglong **)(lVar18 + 0x10);
    puVar15[1] = puVar15[8];
    uVar10 = *puVar15;
    if (uVar10 != puVar15[8]) goto LAB_1801eda8e;
    puVar15 = (ulonglong *)puVar15[0x10];
    uVar10 = *puVar15;
    puVar15[1] = puVar15[8];
    *(ulonglong **)(lVar18 + 0x10) = puVar15;
    uVar14 = puVar15[0x11];
    lVar11 = uVar10 * 0x1c;
    uVar5 = ((undefined8 *)(uVar14 + lVar11))[1];
    iVar13 = *(int *)(uVar14 + 0x18 + lVar11);
    uVar7 = *(undefined8 *)(uVar14 + 0x10 + lVar11);
    uVar4 = puVar15[0x12];
    *(undefined8 *)(unaff_RBP + -0x39) = *(undefined8 *)(uVar14 + lVar11);
    *(undefined8 *)(unaff_RBP + -0x31) = uVar5;
    *(int *)(unaff_RBP + -0x21) = iVar13;
    *(undefined8 *)(unaff_RBP + -0x29) = uVar7;
    *puVar15 = uVar4 & uVar10 + 1;
  }
  else {
LAB_1801eda8e:
    uVar14 = puVar15[0x11];
    lVar11 = uVar10 * 0x1c;
    uVar5 = ((undefined8 *)(lVar11 + uVar14))[1];
    iVar13 = *(int *)(lVar11 + 0x18 + uVar14);
    uVar7 = *(undefined8 *)(lVar11 + 0x10 + uVar14);
    uVar4 = puVar15[0x12];
    *(undefined8 *)(unaff_RBP + -0x39) = *(undefined8 *)(lVar11 + uVar14);
    *(undefined8 *)(unaff_RBP + -0x31) = uVar5;
    *(int *)(unaff_RBP + -0x21) = iVar13;
    *(undefined8 *)(unaff_RBP + -0x29) = uVar7;
    *puVar15 = uVar10 + 1 & uVar4;
  }
  if (*(int *)(unaff_RBP + -0x39) == 0) {
    *(int *)(*(longlong *)(unaff_RBX + 0x2010) + 0x60) =
         *(int *)(*(longlong *)(unaff_RBX + 0x2010) + 0x60) + *(int *)(unaff_RBP + -0x29);
    *(int *)(*(longlong *)(unaff_RBX + 0x2010) + 100) =
         *(int *)(*(longlong *)(unaff_RBX + 0x2010) + 100) +
         (int)((ulonglong)*(undefined8 *)(unaff_RBP + -0x29) >> 0x20);
  }
  else if (*(int *)(unaff_RBP + -0x39) == 3) {
    *(int *)(*(longlong *)(unaff_RBX + 0x2010) + 0x68) =
         *(int *)(*(longlong *)(unaff_RBX + 0x2010) + 0x68) + iVar13;
  }
  else {
    *(undefined8 *)(unaff_RBP + 0x67) = *(undefined8 *)(unaff_RBP + -0x31);
    fVar21 = *(float *)(unaff_RBP + 0x67);
    uVar10 = *(ulonglong *)(unaff_RBP + -0x39) >> 0x20 & 0xff;
    *(undefined8 *)(unaff_RBX + uVar10 * 8 + 0x1804) = *(undefined8 *)(unaff_RBP + -0x31);
    unaff_RBX[uVar10 * 0x18 + 0x18] = '\0';
    *(ushort *)(unaff_RBX + uVar10 * 0x18 + 0x14) =
         *(ushort *)(unaff_RBX + uVar10 * 0x18 + 0x14) | (fVar21 <= 0.7) + 1;
  }
  goto FUN_1801eda00;
LAB_1801edb41:
  unaff_RBX[0x2020] = '\0';
  lVar18 = _DAT_180c86950;
  unaff_RBX[0x2021] = '\0';
  unaff_RBX[0x2022] = '\0';
  unaff_RBX[0x2023] = '\0';
  unaff_RBX[0x2024] = '\0';
  unaff_RBX[0x2025] = '\0';
  unaff_RBX[0x2026] = '\0';
  unaff_RBX[0x2027] = '\0';
  if (((-1 < *(int *)(*(longlong *)(unaff_RBX + 0x2018) + 0x330)) &&
      (*(char *)(_DAT_180c86950 + 0x1609) != '\0')) && (unaff_RBX[0x2028] == '\0')) {
    *(undefined8 *)(unaff_RBP + 0x67) = *(undefined8 *)(unaff_RBX + 0x14d4);
    fVar21 = *(float *)(unaff_RBP + 0x6b);
    fVar22 = *(float *)(unaff_RBP + 0x67);
    if (SQRT(fVar21 * fVar21 + fVar22 * fVar22) != 0.0) {
      fVar2 = *(float *)(lVar18 + 0x17f0);
      fVar19 = (float)expf(*(float *)(_DAT_180c86920 + 0x16c0) * 4.0);
      fVar3 = *(float *)(unaff_RBX + 0x202c);
      fVar20 = (float)powf();
      lVar11 = _DAT_180c86870;
      param_2 = fVar19 * 125.0 * fVar3 * fVar20 * param_2;
      fVar22 = fVar22 * param_2 * *(float *)(lVar18 + 0x17ec) * 0.00052083336;
      fVar21 = fVar21 * param_2 * fVar2 * -0.0009259259;
      *(float *)(unaff_RBX + 0x2020) = fVar22;
      *(int *)(unaff_RBP + 0x67) = (int)fVar22;
      *(float *)(unaff_RBX + 0x2024) = fVar21;
      uVar7 = *(undefined8 *)(lVar11 + 8);
      *(int *)(unaff_RBP + 0x6b) = (int)fVar21;
      FUN_180174080(uVar7,*(undefined8 *)(unaff_RBP + 0x67));
      lVar18 = *(longlong *)(_DAT_180c86870 + 8);
      uVar10 = (ulonglong)(*(uint *)(lVar18 + 0x13c) & 1);
      *(undefined4 *)(unaff_RBP + -0x79) = *(undefined4 *)(lVar18 + 0xac + uVar10 * 0x48);
      *(undefined4 *)(unaff_RBP + -0x71) = *(undefined4 *)(lVar18 + 0xb4 + uVar10 * 0x48);
      *(undefined4 *)(unaff_RBP + -0x75) = *(undefined4 *)(lVar18 + 0xb0 + uVar10 * 0x48);
      *(undefined4 *)(unaff_RBP + -0x6d) = *(undefined4 *)(lVar18 + 0xb8 + uVar10 * 0x48);
      lVar11 = _DAT_180c86870;
      lVar18 = *(longlong *)(_DAT_180c86870 + 8);
      uVar10 = (ulonglong)(*(uint *)(lVar18 + 0x13c) & 1);
      iVar13 = *(int *)(lVar18 + 0xf0 + uVar10 * 0x48) + *(int *)(unaff_RBP + -0x75);
      iVar17 = *(int *)(lVar18 + 0xec + uVar10 * 0x48) + *(int *)(unaff_RBP + -0x79);
      *(int *)(unaff_RBP + -0x6d) = *(int *)(unaff_RBP + -0x6d) + iVar13;
      *(int *)(unaff_RBP + -0x71) = *(int *)(unaff_RBP + -0x71) + iVar17;
      uVar7 = *(undefined8 *)(lVar11 + 8);
      *(int *)(unaff_RBP + -0x75) = iVar13;
      *(int *)(unaff_RBP + -0x79) = iVar17;
      FUN_180171fb0(uVar7,unaff_RBP + -0x79);
    }
  }
  if (unaff_RBX[0x2029] == '\0') {
    if (unaff_RBX[0x2028] == '\0') goto LAB_1801ede50;
    FUN_180171d50(*(undefined8 *)(_DAT_180c86870 + 8),unaff_RBP + -0x59,0);
    fVar21 = (float)(*(int *)(unaff_RBP + -0x51) - *(int *)(unaff_RBP + -0x59)) *
             *(float *)(_DAT_180c86950 + 0x17e0);
    FUN_180093780(fVar21,(int)fVar21 + *(int *)(unaff_RBP + -0x59),
                  (int)((float)(*(int *)(unaff_RBP + -0x4d) - *(int *)(unaff_RBP + -0x55)) *
                       *(float *)(_DAT_180c86950 + 0x17e4)) + *(int *)(unaff_RBP + -0x55));
    FUN_1801723a0(*(undefined8 *)(_DAT_180c86870 + 8),*(undefined1 *)(_DAT_180c86950 + 0x160a),
                  *(undefined4 *)(_DAT_180c86950 + 0x160c));
    lVar18 = 0;
  }
  else {
    if (unaff_RBX[0x2028] != '\0') goto LAB_1801ede50;
    FUN_180171d50(*(undefined8 *)(_DAT_180c86870 + 8),unaff_RBP + -0x49,0);
    FUN_1801723a0(*(undefined8 *)(_DAT_180c86870 + 8),0,1);
    lVar18 = unaff_RBP + -0x49;
  }
  FUN_180171fb0(*(undefined8 *)(_DAT_180c86870 + 8),lVar18);
LAB_1801ede50:
  lVar18 = 0x100;
  pcVar12 = unaff_RBX + 0x16;
  pcVar16 = unaff_RBX + 0x1804;
  do {
    *(undefined2 *)pcVar12 = *(undefined2 *)(pcVar12 + -2);
    *(undefined8 *)(pcVar12 + -10) = *(undefined8 *)(pcVar12 + -0x12);
    *(undefined8 *)(pcVar12 + -0x12) = *(undefined8 *)pcVar16;
    pcVar12[2] = '\0';
    lVar18 = lVar18 + -1;
    pcVar12 = pcVar12 + 0x18;
    pcVar16 = pcVar16 + 8;
  } while (lVar18 != 0);
  unaff_RBX[0x2029] = unaff_RBX[0x2028];
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ed86d(void)
void FUN_1801ed86d(void)

{
  int *piVar1;
  ushort *puVar2;
  float fVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  undefined8 *puVar15;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  int iVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float unaff_XMM6_Da;
  float fVar20;
  float unaff_XMM7_Da;
  float fVar21;
  float fVar22;
  float unaff_XMM11_Da;
  
  do {
    puVar14 = *(ulonglong **)(unaff_RDI + 0x50);
    uVar10 = *puVar14;
    if ((uVar10 == puVar14[1]) && (puVar14[1] = puVar14[8], uVar10 == puVar14[8])) {
      if (puVar14 == *(ulonglong **)(unaff_RDI + 0x90)) {
        lVar17 = *(longlong *)(unaff_RBX + 0x2010);
        *(undefined8 *)(unaff_RBP + -0x31) = 0;
        break;
      }
      puVar14 = *(ulonglong **)(unaff_RDI + 0x50);
      puVar14[1] = puVar14[8];
      uVar10 = *puVar14;
      if (uVar10 != puVar14[8]) goto LAB_1801ed8fb;
      puVar14 = (ulonglong *)puVar14[0x10];
      uVar10 = *puVar14;
      puVar14[1] = puVar14[8];
      *(ulonglong **)(unaff_RDI + 0x50) = puVar14;
      uVar13 = puVar14[0x12];
      uVar6 = *(undefined8 *)(puVar14[0x11] + uVar10 * 8);
    }
    else {
LAB_1801ed8fb:
      uVar13 = puVar14[0x12];
      uVar6 = *(undefined8 *)(puVar14[0x11] + uVar10 * 8);
    }
    *(undefined8 *)(unaff_RBP + 0x67) = uVar6;
    *puVar14 = uVar13 & uVar10 + 1;
    puVar9 = *(undefined4 **)(unaff_RBX + 0x2038);
    if (puVar9 < *(undefined4 **)(unaff_RBX + 0x2040)) {
      *(undefined4 **)(unaff_RBX + 0x2038) = puVar9 + 1;
      *puVar9 = (int)((ulonglong)uVar6 >> 0x20);
    }
    else {
      lVar17 = *(longlong *)(unaff_RBX + 0x2030);
      lVar7 = (longlong)puVar9 - lVar17 >> 2;
      if (lVar7 == 0) {
        lVar7 = 1;
LAB_1801ed969:
        lVar8 = FUN_18062b420(_DAT_180c8ed18,lVar7 * 4,*(undefined1 *)(unaff_RBX + 0x2048));
        puVar9 = *(undefined4 **)(unaff_RBX + 0x2038);
        lVar17 = *(longlong *)(unaff_RBX + 0x2030);
      }
      else {
        lVar7 = lVar7 * 2;
        if (lVar7 != 0) goto LAB_1801ed969;
        lVar8 = 0;
      }
      puVar9 = (undefined4 *)FUN_180059350(lVar17,puVar9,lVar8);
      *puVar9 = *(undefined4 *)(unaff_RBP + 0x6b);
      if (*(longlong *)(unaff_RBX + 0x2030) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(longlong *)(unaff_RBX + 0x2030) = lVar8;
      *(longlong *)(unaff_RBX + 0x2040) = lVar8 + lVar7 * 4;
      *(undefined4 **)(unaff_RBX + 0x2038) = puVar9 + 1;
    }
  } while( true );
FUN_1801eda00:
  puVar14 = *(ulonglong **)(lVar17 + 0x10);
  uVar10 = *puVar14;
  if ((uVar10 == puVar14[1]) && (puVar14[1] = puVar14[8], uVar10 == puVar14[8])) {
    if (puVar14 == *(ulonglong **)(lVar17 + 0x50)) goto LAB_1801edb41;
    puVar14 = *(ulonglong **)(lVar17 + 0x10);
    puVar14[1] = puVar14[8];
    uVar10 = *puVar14;
    if (uVar10 != puVar14[8]) goto LAB_1801eda8e;
    puVar14 = (ulonglong *)puVar14[0x10];
    uVar10 = *puVar14;
    puVar14[1] = puVar14[8];
    *(ulonglong **)(lVar17 + 0x10) = puVar14;
    uVar13 = puVar14[0x11];
    lVar7 = uVar10 * 0x1c;
    uVar5 = ((undefined8 *)(uVar13 + lVar7))[1];
    iVar12 = *(int *)(uVar13 + 0x18 + lVar7);
    uVar6 = *(undefined8 *)(uVar13 + 0x10 + lVar7);
    uVar4 = puVar14[0x12];
    *(undefined8 *)(unaff_RBP + -0x39) = *(undefined8 *)(uVar13 + lVar7);
    *(undefined8 *)(unaff_RBP + -0x31) = uVar5;
    *(int *)(unaff_RBP + -0x21) = iVar12;
    *(undefined8 *)(unaff_RBP + -0x29) = uVar6;
    *puVar14 = uVar4 & uVar10 + 1;
  }
  else {
LAB_1801eda8e:
    uVar13 = puVar14[0x11];
    lVar7 = uVar10 * 0x1c;
    uVar5 = ((undefined8 *)(lVar7 + uVar13))[1];
    iVar12 = *(int *)(lVar7 + 0x18 + uVar13);
    uVar6 = *(undefined8 *)(lVar7 + 0x10 + uVar13);
    uVar4 = puVar14[0x12];
    *(undefined8 *)(unaff_RBP + -0x39) = *(undefined8 *)(lVar7 + uVar13);
    *(undefined8 *)(unaff_RBP + -0x31) = uVar5;
    *(int *)(unaff_RBP + -0x21) = iVar12;
    *(undefined8 *)(unaff_RBP + -0x29) = uVar6;
    *puVar14 = uVar10 + 1 & uVar4;
  }
  if (*(int *)(unaff_RBP + -0x39) == 0) {
    piVar1 = (int *)(*(longlong *)(unaff_RBX + 0x2010) + 0x60);
    *piVar1 = *piVar1 + *(int *)(unaff_RBP + -0x29);
    piVar1 = (int *)(*(longlong *)(unaff_RBX + 0x2010) + 100);
    *piVar1 = *piVar1 + (int)((ulonglong)*(undefined8 *)(unaff_RBP + -0x29) >> 0x20);
  }
  else if (*(int *)(unaff_RBP + -0x39) == 3) {
    piVar1 = (int *)(*(longlong *)(unaff_RBX + 0x2010) + 0x68);
    *piVar1 = *piVar1 + iVar12;
  }
  else {
    *(undefined8 *)(unaff_RBP + 0x67) = *(undefined8 *)(unaff_RBP + -0x31);
    fVar21 = *(float *)(unaff_RBP + 0x67);
    uVar10 = *(ulonglong *)(unaff_RBP + -0x39) >> 0x20 & 0xff;
    *(undefined8 *)(unaff_RBX + 0x1804 + uVar10 * 8) = *(undefined8 *)(unaff_RBP + -0x31);
    *(undefined1 *)(unaff_RBX + 0x18 + uVar10 * 0x18) = 0;
    puVar2 = (ushort *)(unaff_RBX + 0x14 + uVar10 * 0x18);
    *puVar2 = *puVar2 | (fVar21 <= unaff_XMM6_Da) + 1;
  }
  goto FUN_1801eda00;
LAB_1801edb41:
  *(undefined8 *)(unaff_RBX + 0x2020) = 0;
  lVar17 = _DAT_180c86950;
  if (((-1 < *(int *)(*(longlong *)(unaff_RBX + 0x2018) + 0x330)) &&
      (*(char *)(_DAT_180c86950 + 0x1609) != '\0')) && (*(char *)(unaff_RBX + 0x2028) == '\0')) {
    *(undefined8 *)(unaff_RBP + 0x67) = *(undefined8 *)(unaff_RBX + 0x14d4);
    fVar21 = *(float *)(unaff_RBP + 0x6b);
    fVar22 = *(float *)(unaff_RBP + 0x67);
    if (SQRT(fVar21 * fVar21 + fVar22 * fVar22) != unaff_XMM7_Da) {
      fVar3 = *(float *)(lVar17 + 0x17f0);
      fVar18 = (float)expf(*(float *)(_DAT_180c86920 + 0x16c0) * 4.0);
      fVar20 = *(float *)(unaff_RBX + 0x202c);
      fVar19 = (float)powf();
      lVar7 = _DAT_180c86870;
      fVar20 = fVar18 * 125.0 * fVar20 * fVar19 * unaff_XMM11_Da;
      fVar22 = fVar22 * fVar20 * *(float *)(lVar17 + 0x17ec) * 0.00052083336;
      fVar21 = fVar21 * fVar20 * fVar3 * -0.0009259259;
      *(float *)(unaff_RBX + 0x2020) = fVar22;
      *(int *)(unaff_RBP + 0x67) = (int)fVar22;
      *(float *)(unaff_RBX + 0x2024) = fVar21;
      uVar6 = *(undefined8 *)(lVar7 + 8);
      *(int *)(unaff_RBP + 0x6b) = (int)fVar21;
      FUN_180174080(uVar6,*(undefined8 *)(unaff_RBP + 0x67));
      lVar17 = *(longlong *)(_DAT_180c86870 + 8);
      uVar10 = (ulonglong)(*(uint *)(lVar17 + 0x13c) & 1);
      *(undefined4 *)(unaff_RBP + -0x79) = *(undefined4 *)(lVar17 + 0xac + uVar10 * 0x48);
      *(undefined4 *)(unaff_RBP + -0x71) = *(undefined4 *)(lVar17 + 0xb4 + uVar10 * 0x48);
      *(undefined4 *)(unaff_RBP + -0x75) = *(undefined4 *)(lVar17 + 0xb0 + uVar10 * 0x48);
      *(undefined4 *)(unaff_RBP + -0x6d) = *(undefined4 *)(lVar17 + 0xb8 + uVar10 * 0x48);
      lVar7 = _DAT_180c86870;
      lVar17 = *(longlong *)(_DAT_180c86870 + 8);
      uVar10 = (ulonglong)(*(uint *)(lVar17 + 0x13c) & 1);
      iVar12 = *(int *)(lVar17 + 0xf0 + uVar10 * 0x48) + *(int *)(unaff_RBP + -0x75);
      iVar16 = *(int *)(lVar17 + 0xec + uVar10 * 0x48) + *(int *)(unaff_RBP + -0x79);
      *(int *)(unaff_RBP + -0x6d) = *(int *)(unaff_RBP + -0x6d) + iVar12;
      *(int *)(unaff_RBP + -0x71) = *(int *)(unaff_RBP + -0x71) + iVar16;
      uVar6 = *(undefined8 *)(lVar7 + 8);
      *(int *)(unaff_RBP + -0x75) = iVar12;
      *(int *)(unaff_RBP + -0x79) = iVar16;
      FUN_180171fb0(uVar6,unaff_RBP + -0x79);
    }
  }
  if (*(char *)(unaff_RBX + 0x2029) == '\0') {
    if (*(char *)(unaff_RBX + 0x2028) == '\0') goto LAB_1801ede50;
    FUN_180171d50(*(undefined8 *)(_DAT_180c86870 + 8),unaff_RBP + -0x59,0);
    fVar21 = (float)(*(int *)(unaff_RBP + -0x51) - *(int *)(unaff_RBP + -0x59)) *
             *(float *)(_DAT_180c86950 + 0x17e0);
    FUN_180093780(fVar21,(int)fVar21 + *(int *)(unaff_RBP + -0x59),
                  (int)((float)(*(int *)(unaff_RBP + -0x4d) - *(int *)(unaff_RBP + -0x55)) *
                       *(float *)(_DAT_180c86950 + 0x17e4)) + *(int *)(unaff_RBP + -0x55));
    FUN_1801723a0(*(undefined8 *)(_DAT_180c86870 + 8),*(undefined1 *)(_DAT_180c86950 + 0x160a),
                  *(undefined4 *)(_DAT_180c86950 + 0x160c));
    lVar17 = 0;
  }
  else {
    if (*(char *)(unaff_RBX + 0x2028) != '\0') goto LAB_1801ede50;
    FUN_180171d50(*(undefined8 *)(_DAT_180c86870 + 8),unaff_RBP + -0x49,0);
    FUN_1801723a0(*(undefined8 *)(_DAT_180c86870 + 8),0,1);
    lVar17 = unaff_RBP + -0x49;
  }
  FUN_180171fb0(*(undefined8 *)(_DAT_180c86870 + 8),lVar17);
LAB_1801ede50:
  lVar17 = 0x100;
  puVar11 = (undefined2 *)(unaff_RBX + 0x16);
  puVar15 = (undefined8 *)(unaff_RBX + 0x1804);
  do {
    *puVar11 = puVar11[-1];
    *(undefined8 *)(puVar11 + -5) = *(undefined8 *)(puVar11 + -9);
    *(undefined8 *)(puVar11 + -9) = *puVar15;
    *(undefined1 *)(puVar11 + 1) = 0;
    lVar17 = lVar17 + -1;
    puVar11 = puVar11 + 0xc;
    puVar15 = puVar15 + 1;
  } while (lVar17 != 0);
  *(undefined1 *)(unaff_RBX + 0x2029) = *(undefined1 *)(unaff_RBX + 0x2028);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




