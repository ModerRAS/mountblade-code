#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part082_sub002_sub002.c - 1 个函数

// 函数: void FUN_18010f0d0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18010f0d0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  lVar7 = _DAT_180c8a9b0;
  uStack_48 = 0;
  uStack_44 = *(undefined4 *)(_DAT_180c8a9b0 + 0x16c8);
  uStack_40 = *(undefined4 *)(_DAT_180c8a9b0 + 0x16cc);
  uStack_3c = *(undefined4 *)(_DAT_180c8a9b0 + 0x16d0);
  uStack_38 = *(undefined4 *)(_DAT_180c8a9b0 + 0x16d4);
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  FUN_18013e100(_DAT_180c8a9b0 + 0x1b80,&uStack_48);
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  *(undefined4 *)(lVar7 + 0x16c8) = *param_1;
  *(undefined4 *)(lVar7 + 0x16cc) = uVar3;
  *(undefined4 *)(lVar7 + 0x16d0) = uVar4;
  *(undefined4 *)(lVar7 + 0x16d4) = uVar5;
  FUN_18010f040(param_2,&uStackX_18);
  lVar7 = _DAT_180c8a9b0;
  puVar1 = (undefined8 *)
           (*(longlong *)(_DAT_180c8a9b0 + 0x1b88) + -0x10 +
           (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b80) * 0x14);
  uVar6 = puVar1[1];
  puVar2 = (undefined8 *)
           (_DAT_180c8a9b0 + 0x16c8 +
           (longlong)
           *(int *)(*(longlong *)(_DAT_180c8a9b0 + 0x1b88) + -0x14 +
                   (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b80) * 0x14) * 0x10);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  *(int *)(lVar7 + 0x1b80) = *(int *)(lVar7 + 0x1b80) + -1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18010f170(float *param_1,int param_2,char *param_3,undefined1 *param_4,uint param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 uVar10;
  byte bVar11;
  float fVar12;
  
  lVar5 = _DAT_180c8a9b0;
  uVar9 = *(ulonglong *)(_DAT_180c8a9b0 + 0x1af8);
  *(undefined1 *)(uVar9 + 0xb1) = 1;
  lVar1 = *(longlong *)(lVar5 + 0x1af8);
  if ((param_5 >> 8 & 1) != 0) {
    if (param_3 != (char *)0x0) {
      *param_3 = '\0';
    }
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 0;
    }
    iVar8 = *(int *)(lVar5 + 0x1b2c);
    if (iVar8 == param_2) {
      uVar9 = CONCAT71((int7)(uVar9 >> 8),iVar8 != 0);
      *(bool *)(lVar5 + 0x1b3c) = iVar8 != 0;
      if (iVar8 != 0) {
        *(undefined4 *)(lVar5 + 0x1b38) = 0;
        *(undefined1 *)(lVar5 + 0x1b3e) = 0;
      }
      *(undefined4 *)(lVar5 + 0x1b2c) = 0;
      *(undefined4 *)(lVar5 + 0x1b44) = 0;
      *(undefined1 *)(lVar5 + 0x1b3d) = 0;
      *(undefined8 *)(lVar5 + 0x1b50) = 0;
    }
    return uVar9 & 0xffffffffffffff00;
  }
  uVar2 = *(undefined8 *)(lVar5 + 0x1b00);
  uVar3 = param_5 | 2;
  if ((param_5 & 0x1e) != 0) {
    uVar3 = param_5;
  }
  if (((uVar3 & 0x20) == 0) || (*(longlong *)(lVar5 + 0x1b08) != *(longlong *)(lVar1 + 0x3a0))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    *(longlong *)(lVar5 + 0x1b00) = lVar1;
  }
  bVar11 = 0;
  cVar6 = FUN_1801243a0();
  if (cVar6 == '\0') {
LAB_18010f2a4:
    if (((*(char *)(lVar5 + 0x1dd0) != '\0') && ((uVar3 >> 0xc & 1) != 0)) &&
       ((*(byte *)(lVar5 + 0x1dd4) & 4) == 0)) {
      cVar7 = FUN_1801242c0(0x20);
      if (cVar7 != '\0') {
        *(int *)(lVar5 + 0x1b18) = param_2;
        cVar6 = '\x01';
        *(undefined1 *)(lVar5 + 0x1b1c) = 0;
        if ((param_2 != 0) && (*(int *)(lVar5 + 0x1b20) != param_2)) {
          *(undefined8 *)(lVar5 + 0x1b24) = 0;
        }
        fVar12 = *(float *)(lVar5 + 0x1b24) + 0.0001;
        iVar8 = func_0x000180128180(fVar12,fVar12 - *(float *)(lVar5 + 0x18),0x3c23d70a,0x3f333333);
        if (iVar8 != 0) {
          bVar11 = 1;
          FUN_18012d2e0(lVar1);
        }
      }
    }
  }
  else if (*(char *)(lVar5 + 0x1dd0) != '\0') {
    if ((*(int *)(lVar5 + 0x1dec) == param_2) && ((*(byte *)(lVar5 + 0x1dd4) & 2) == 0)) {
      cVar6 = '\0';
    }
    goto LAB_18010f2a4;
  }
  if (bVar4) {
    *(undefined8 *)(lVar5 + 0x1b00) = uVar2;
  }
  if (cVar6 == '\0') goto LAB_18010f4d1;
  if ((((uVar3 & 0x40) != 0) && (*(int *)(lVar5 + 0x1b20) != param_2)) &&
     (*(int *)(lVar5 + 0x1b20) != 0)) {
    cVar6 = '\0';
    goto LAB_18010f4d1;
  }
  if (((uVar3 >> 10 & 1) == 0) ||
     (((*(char *)(lVar5 + 0x134) == '\0' && (*(char *)(lVar5 + 0x135) == '\0')) &&
      (*(char *)(lVar5 + 0x136) == '\0')))) {
    if (((uVar3 & 2) != 0) && (*(char *)(lVar5 + 0x410) != '\0')) {
      func_0x000180123e90(param_2);
      if ((uVar3 >> 0xd & 1) == 0) {
        FUN_180123f30();
      }
      FUN_18012d2e0(lVar1);
    }
    if ((((uVar3 & 4) != 0) && (*(char *)(lVar5 + 0x410) != '\0')) ||
       (((uVar3 & 0x10) != 0 && (*(char *)(lVar5 + 0x415) != '\0')))) {
      bVar11 = 1;
      if ((uVar3 >> 0xb & 1) == 0) {
        func_0x000180123e90(param_2);
      }
      else {
        *(bool *)(lVar5 + 0x1b3c) = *(int *)(lVar5 + 0x1b2c) != 0;
        if (*(int *)(lVar5 + 0x1b2c) != 0) {
          *(undefined4 *)(lVar5 + 0x1b38) = 0;
          *(undefined1 *)(lVar5 + 0x1b3e) = 0;
        }
        *(undefined4 *)(lVar5 + 0x1b2c) = 0;
        *(undefined4 *)(lVar5 + 0x1b44) = 0;
        *(undefined1 *)(lVar5 + 0x1b3d) = 0;
        *(undefined8 *)(lVar5 + 0x1b50) = 0;
      }
      FUN_18012d2e0(lVar1);
    }
    if (((uVar3 & 8) != 0) && (*(char *)(lVar5 + 0x41a) != '\0')) {
      if (((uVar3 & 1) == 0) ||
         (*(float *)(lVar5 + 0x438) <= *(float *)(lVar5 + 0x90) &&
          *(float *)(lVar5 + 0x90) != *(float *)(lVar5 + 0x438))) {
        bVar11 = 1;
      }
      *(bool *)(lVar5 + 0x1b3c) = *(int *)(lVar5 + 0x1b2c) != 0;
      if (*(int *)(lVar5 + 0x1b2c) != 0) {
        *(undefined4 *)(lVar5 + 0x1b38) = 0;
        *(undefined1 *)(lVar5 + 0x1b3e) = 0;
      }
      *(undefined4 *)(lVar5 + 0x1b2c) = 0;
      *(undefined4 *)(lVar5 + 0x1b44) = 0;
      *(undefined1 *)(lVar5 + 0x1b3d) = 0;
      *(undefined8 *)(lVar5 + 0x1b50) = 0;
    }
    if ((((uVar3 & 1) == 0) || (*(int *)(lVar5 + 0x1b2c) != param_2)) ||
       (*(float *)(lVar5 + 0x424) <= 0.0)) goto LAB_18010f4c5;
    cVar7 = FUN_180128280(0);
    if (cVar7 == '\0') goto LAB_18010f4c5;
    bVar11 = 1;
  }
  else {
LAB_18010f4c5:
    if (bVar11 == 0) goto LAB_18010f4d1;
  }
  *(undefined1 *)(lVar5 + 0x1d06) = 1;
LAB_18010f4d1:
  if ((((*(int *)(lVar5 + 0x1ca0) == param_2) && (*(char *)(lVar5 + 0x1d06) == '\0')) &&
      (*(char *)(lVar5 + 0x1d07) != '\0')) &&
     (((iVar8 = *(int *)(lVar5 + 0x1b2c), iVar8 == 0 || (iVar8 == param_2)) ||
      (iVar8 == *(int *)(lVar1 + 0x84))))) {
    cVar6 = '\x01';
  }
  if (*(int *)(lVar5 + 0x1ca8) == param_2) {
    iVar8 = *(int *)(lVar5 + 0x1ca4);
    fVar12 = (float)FUN_1801319b0(0);
    cVar7 = 0.0 < fVar12;
    if ((iVar8 == param_2) || ((bool)cVar7)) {
      bVar11 = 1;
    }
    if (((iVar8 == param_2) || ((bool)cVar7)) || (*(int *)(lVar5 + 0x1b2c) == param_2)) {
      *(int *)(lVar5 + 0x1ca4) = param_2;
      func_0x000180123e90(param_2);
      if (((iVar8 == param_2) || (cVar7 != '\0')) && ((uVar3 >> 0xd & 1) == 0)) {
        FUN_180123f30();
      }
      *(undefined4 *)(lVar5 + 0x1b44) = 0xf;
    }
  }
  uVar10 = 0;
  if (*(int *)(lVar5 + 0x1b2c) == param_2) {
    if (*(int *)(lVar5 + 0x1b60) == 1) {
      if (*(char *)(lVar5 + 0x1b3c) != '\0') {
        fVar12 = param_1[1];
        *(float *)(lVar5 + 0x1b48) = *(float *)(lVar5 + 0x118) - *param_1;
        *(float *)(lVar5 + 0x1b4c) = *(float *)(lVar5 + 0x11c) - fVar12;
      }
      if (*(char *)(lVar5 + 0x120) == '\0') {
        if (((cVar6 != '\0') && ((uVar3 & 2) != 0)) &&
           ((((uVar3 & 1) == 0 ||
             (*(float *)(lVar5 + 0x438) <= *(float *)(lVar5 + 0x90) &&
              *(float *)(lVar5 + 0x90) != *(float *)(lVar5 + 0x438))) &&
            (*(char *)(lVar5 + 0x1dd0) == '\0')))) {
          bVar11 = 1;
        }
        *(bool *)(lVar5 + 0x1b3c) = *(int *)(lVar5 + 0x1b2c) != 0;
        if (*(int *)(lVar5 + 0x1b2c) != 0) {
          *(undefined4 *)(lVar5 + 0x1b38) = 0;
          *(undefined1 *)(lVar5 + 0x1b3e) = 0;
        }
        *(undefined4 *)(lVar5 + 0x1b2c) = 0;
        *(undefined4 *)(lVar5 + 0x1b44) = 0;
        *(undefined1 *)(lVar5 + 0x1b3d) = 0;
        *(undefined8 *)(lVar5 + 0x1b50) = 0;
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
      }
      if ((uVar3 >> 0xd & 1) == 0) {
        *(undefined1 *)(lVar5 + 0x1d06) = 1;
      }
    }
    else if ((*(int *)(lVar5 + 0x1b60) == 2) && (*(int *)(lVar5 + 0x1ca8) != param_2)) {
      *(bool *)(lVar5 + 0x1b3c) = *(int *)(lVar5 + 0x1b2c) != 0;
      if (*(int *)(lVar5 + 0x1b2c) != 0) {
        *(undefined4 *)(lVar5 + 0x1b38) = 0;
        *(undefined1 *)(lVar5 + 0x1b3e) = 0;
      }
      *(undefined4 *)(lVar5 + 0x1b2c) = 0;
      *(undefined4 *)(lVar5 + 0x1b44) = 0;
      *(undefined1 *)(lVar5 + 0x1b3d) = 0;
      *(undefined8 *)(lVar5 + 0x1b50) = 0;
    }
  }
  if (param_3 != (char *)0x0) {
    *param_3 = cVar6;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar10;
  }
  return (ulonglong)bVar11;
}



char FUN_18010f213(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined1 uVar6;
  longlong unaff_RBX;
  uint uVar7;
  int unaff_ESI;
  longlong unaff_R14;
  char cVar8;
  float fVar9;
  float *in_stack_00000080;
  char *in_stack_00000090;
  undefined1 *in_stack_00000098;
  
  uVar1 = *(undefined8 *)(unaff_RBX + 0x1b00);
  uVar7 = param_2 | 2;
  if ((param_2 & 0x1e) != 0) {
    uVar7 = param_2;
  }
  if (((uVar7 & 0x20) == 0) ||
     (*(longlong *)(unaff_RBX + 0x1b08) != *(longlong *)(unaff_R14 + 0x3a0))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    *(longlong *)(unaff_RBX + 0x1b00) = unaff_R14;
  }
  cVar8 = '\0';
  cVar3 = FUN_1801243a0();
  if (cVar3 == '\0') {
LAB_18010f2a4:
    if (((*(char *)(unaff_RBX + 0x1dd0) != '\0') && ((uVar7 >> 0xc & 1) != 0)) &&
       ((*(byte *)(unaff_RBX + 0x1dd4) & 4) == 0)) {
      cVar4 = FUN_1801242c0(0x20);
      if (cVar4 != '\0') {
        *(int *)(unaff_RBX + 0x1b18) = unaff_ESI;
        cVar3 = '\x01';
        *(undefined1 *)(unaff_RBX + 0x1b1c) = 0;
        if ((unaff_ESI != 0) && (*(int *)(unaff_RBX + 0x1b20) != unaff_ESI)) {
          *(undefined8 *)(unaff_RBX + 0x1b24) = 0;
        }
        fVar9 = *(float *)(unaff_RBX + 0x1b24) + 0.0001;
        iVar5 = func_0x000180128180(fVar9,fVar9 - *(float *)(unaff_RBX + 0x18),0x3c23d70a,0x3f333333
                                   );
        if (iVar5 != 0) {
          cVar8 = '\x01';
          FUN_18012d2e0();
        }
      }
    }
  }
  else if (*(char *)(unaff_RBX + 0x1dd0) != '\0') {
    if ((*(int *)(unaff_RBX + 0x1dec) == unaff_ESI) && ((*(byte *)(unaff_RBX + 0x1dd4) & 2) == 0)) {
      cVar3 = '\0';
    }
    goto LAB_18010f2a4;
  }
  if (bVar2) {
    *(undefined8 *)(unaff_RBX + 0x1b00) = uVar1;
  }
  if (cVar3 == '\0') goto LAB_18010f4d1;
  if ((((uVar7 & 0x40) != 0) && (*(int *)(unaff_RBX + 0x1b20) != unaff_ESI)) &&
     (*(int *)(unaff_RBX + 0x1b20) != 0)) {
    cVar3 = '\0';
    goto LAB_18010f4d1;
  }
  if (((uVar7 >> 10 & 1) == 0) ||
     (((*(char *)(unaff_RBX + 0x134) == '\0' && (*(char *)(unaff_RBX + 0x135) == '\0')) &&
      (*(char *)(unaff_RBX + 0x136) == '\0')))) {
    if (((uVar7 & 2) != 0) && (*(char *)(unaff_RBX + 0x410) != '\0')) {
      func_0x000180123e90(unaff_ESI);
      if ((uVar7 >> 0xd & 1) == 0) {
        FUN_180123f30();
      }
      FUN_18012d2e0();
    }
    if ((((uVar7 & 4) != 0) && (*(char *)(unaff_RBX + 0x410) != '\0')) ||
       (((uVar7 & 0x10) != 0 && (*(char *)(unaff_RBX + 0x415) != '\0')))) {
      cVar8 = '\x01';
      if ((uVar7 >> 0xb & 1) == 0) {
        func_0x000180123e90(unaff_ESI);
      }
      else {
        *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
        if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
          *(undefined4 *)(unaff_RBX + 0x1b38) = 0;
          *(undefined1 *)(unaff_RBX + 0x1b3e) = 0;
        }
        *(undefined4 *)(unaff_RBX + 0x1b2c) = 0;
        *(undefined4 *)(unaff_RBX + 0x1b44) = 0;
        *(undefined1 *)(unaff_RBX + 0x1b3d) = 0;
        *(undefined8 *)(unaff_RBX + 0x1b50) = 0;
      }
      FUN_18012d2e0();
    }
    if (((uVar7 & 8) != 0) && (*(char *)(unaff_RBX + 0x41a) != '\0')) {
      if (((uVar7 & 1) == 0) ||
         (*(float *)(unaff_RBX + 0x438) <= *(float *)(unaff_RBX + 0x90) &&
          *(float *)(unaff_RBX + 0x90) != *(float *)(unaff_RBX + 0x438))) {
        cVar8 = '\x01';
      }
      *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
      if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
        *(undefined4 *)(unaff_RBX + 0x1b38) = 0;
        *(undefined1 *)(unaff_RBX + 0x1b3e) = 0;
      }
      *(undefined4 *)(unaff_RBX + 0x1b2c) = 0;
      *(undefined4 *)(unaff_RBX + 0x1b44) = 0;
      *(undefined1 *)(unaff_RBX + 0x1b3d) = 0;
      *(undefined8 *)(unaff_RBX + 0x1b50) = 0;
    }
    if ((((uVar7 & 1) == 0) || (*(int *)(unaff_RBX + 0x1b2c) != unaff_ESI)) ||
       (*(float *)(unaff_RBX + 0x424) <= 0.0)) goto LAB_18010f4c5;
    cVar4 = FUN_180128280(0);
    if (cVar4 == '\0') goto LAB_18010f4c5;
    cVar8 = '\x01';
  }
  else {
LAB_18010f4c5:
    if (cVar8 == '\0') goto LAB_18010f4d1;
  }
  *(undefined1 *)(unaff_RBX + 0x1d06) = 1;
LAB_18010f4d1:
  if ((((*(int *)(unaff_RBX + 0x1ca0) == unaff_ESI) && (*(char *)(unaff_RBX + 0x1d06) == '\0')) &&
      (*(char *)(unaff_RBX + 0x1d07) != '\0')) &&
     (((iVar5 = *(int *)(unaff_RBX + 0x1b2c), iVar5 == 0 || (iVar5 == unaff_ESI)) ||
      (iVar5 == *(int *)(unaff_R14 + 0x84))))) {
    cVar3 = '\x01';
  }
  if (*(int *)(unaff_RBX + 0x1ca8) == unaff_ESI) {
    iVar5 = *(int *)(unaff_RBX + 0x1ca4);
    fVar9 = (float)FUN_1801319b0(0);
    cVar4 = 0.0 < fVar9;
    if ((iVar5 == unaff_ESI) || ((bool)cVar4)) {
      cVar8 = '\x01';
    }
    if (((iVar5 == unaff_ESI) || ((bool)cVar4)) || (*(int *)(unaff_RBX + 0x1b2c) == unaff_ESI)) {
      *(int *)(unaff_RBX + 0x1ca4) = unaff_ESI;
      func_0x000180123e90(unaff_ESI);
      if (((iVar5 == unaff_ESI) || (cVar4 != '\0')) && ((uVar7 >> 0xd & 1) == 0)) {
        FUN_180123f30();
      }
      *(undefined4 *)(unaff_RBX + 0x1b44) = 0xf;
    }
  }
  uVar6 = 0;
  if (*(int *)(unaff_RBX + 0x1b2c) == unaff_ESI) {
    if (*(int *)(unaff_RBX + 0x1b60) == 1) {
      if (*(char *)(unaff_RBX + 0x1b3c) != '\0') {
        fVar9 = in_stack_00000080[1];
        *(float *)(unaff_RBX + 0x1b48) = *(float *)(unaff_RBX + 0x118) - *in_stack_00000080;
        *(float *)(unaff_RBX + 0x1b4c) = *(float *)(unaff_RBX + 0x11c) - fVar9;
      }
      if (*(char *)(unaff_RBX + 0x120) == '\0') {
        if (((cVar3 != '\0') && ((uVar7 & 2) != 0)) &&
           ((((uVar7 & 1) == 0 ||
             (*(float *)(unaff_RBX + 0x438) <= *(float *)(unaff_RBX + 0x90) &&
              *(float *)(unaff_RBX + 0x90) != *(float *)(unaff_RBX + 0x438))) &&
            (*(char *)(unaff_RBX + 0x1dd0) == '\0')))) {
          cVar8 = '\x01';
        }
        *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
        if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
          *(undefined4 *)(unaff_RBX + 0x1b38) = 0;
          *(undefined1 *)(unaff_RBX + 0x1b3e) = 0;
        }
        *(undefined4 *)(unaff_RBX + 0x1b2c) = 0;
        *(undefined4 *)(unaff_RBX + 0x1b44) = 0;
        *(undefined1 *)(unaff_RBX + 0x1b3d) = 0;
        *(undefined8 *)(unaff_RBX + 0x1b50) = 0;
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      if ((uVar7 >> 0xd & 1) == 0) {
        *(undefined1 *)(unaff_RBX + 0x1d06) = 1;
      }
    }
    else if ((*(int *)(unaff_RBX + 0x1b60) == 2) && (*(int *)(unaff_RBX + 0x1ca8) != unaff_ESI)) {
      *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
      if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
        *(undefined4 *)(unaff_RBX + 0x1b38) = 0;
        *(undefined1 *)(unaff_RBX + 0x1b3e) = 0;
      }
      *(undefined4 *)(unaff_RBX + 0x1b2c) = 0;
      *(undefined4 *)(unaff_RBX + 0x1b44) = 0;
      *(undefined1 *)(unaff_RBX + 0x1b3d) = 0;
      *(undefined8 *)(unaff_RBX + 0x1b50) = 0;
    }
  }
  if (in_stack_00000090 != (char *)0x0) {
    *in_stack_00000090 = cVar3;
  }
  if (in_stack_00000098 != (undefined1 *)0x0) {
    *in_stack_00000098 = uVar6;
  }
  return cVar8;
}



char FUN_18010f227(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  bool bVar2;
  byte in_AL;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined1 uVar6;
  longlong unaff_RBX;
  uint unaff_EBP;
  int unaff_ESI;
  longlong unaff_R14;
  char cVar7;
  float fVar8;
  float *in_stack_00000080;
  char *in_stack_00000090;
  undefined1 *in_stack_00000098;
  
  uVar1 = *(undefined8 *)(unaff_RBX + 0x1b00);
  if ((in_AL & 0x1e) != 0) {
    unaff_EBP = param_2;
  }
  if (((unaff_EBP & 0x20) == 0) ||
     (*(longlong *)(unaff_RBX + 0x1b08) != *(longlong *)(unaff_R14 + 0x3a0))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    *(longlong *)(unaff_RBX + 0x1b00) = unaff_R14;
  }
  cVar7 = '\0';
  cVar3 = FUN_1801243a0();
  if (cVar3 == '\0') {
LAB_18010f2a4:
    if (((*(char *)(unaff_RBX + 0x1dd0) != '\0') && ((unaff_EBP >> 0xc & 1) != 0)) &&
       ((*(byte *)(unaff_RBX + 0x1dd4) & 4) == 0)) {
      cVar4 = FUN_1801242c0(0x20);
      if (cVar4 != '\0') {
        *(int *)(unaff_RBX + 0x1b18) = unaff_ESI;
        cVar3 = '\x01';
        *(undefined1 *)(unaff_RBX + 0x1b1c) = 0;
        if ((unaff_ESI != 0) && (*(int *)(unaff_RBX + 0x1b20) != unaff_ESI)) {
          *(undefined8 *)(unaff_RBX + 0x1b24) = 0;
        }
        fVar8 = *(float *)(unaff_RBX + 0x1b24) + 0.0001;
        iVar5 = func_0x000180128180(fVar8,fVar8 - *(float *)(unaff_RBX + 0x18),0x3c23d70a,0x3f333333
                                   );
        if (iVar5 != 0) {
          cVar7 = '\x01';
          FUN_18012d2e0();
        }
      }
    }
  }
  else if (*(char *)(unaff_RBX + 0x1dd0) != '\0') {
    if ((*(int *)(unaff_RBX + 0x1dec) == unaff_ESI) && ((*(byte *)(unaff_RBX + 0x1dd4) & 2) == 0)) {
      cVar3 = '\0';
    }
    goto LAB_18010f2a4;
  }
  if (bVar2) {
    *(undefined8 *)(unaff_RBX + 0x1b00) = uVar1;
  }
  if (cVar3 == '\0') goto LAB_18010f4d1;
  if ((((unaff_EBP & 0x40) != 0) && (*(int *)(unaff_RBX + 0x1b20) != unaff_ESI)) &&
     (*(int *)(unaff_RBX + 0x1b20) != 0)) {
    cVar3 = '\0';
    goto LAB_18010f4d1;
  }
  if (((unaff_EBP >> 10 & 1) == 0) ||
     (((*(char *)(unaff_RBX + 0x134) == '\0' && (*(char *)(unaff_RBX + 0x135) == '\0')) &&
      (*(char *)(unaff_RBX + 0x136) == '\0')))) {
    if (((unaff_EBP & 2) != 0) && (*(char *)(unaff_RBX + 0x410) != '\0')) {
      func_0x000180123e90(unaff_ESI);
      if ((unaff_EBP >> 0xd & 1) == 0) {
        FUN_180123f30();
      }
      FUN_18012d2e0();
    }
    if ((((unaff_EBP & 4) != 0) && (*(char *)(unaff_RBX + 0x410) != '\0')) ||
       (((unaff_EBP & 0x10) != 0 && (*(char *)(unaff_RBX + 0x415) != '\0')))) {
      cVar7 = '\x01';
      if ((unaff_EBP >> 0xb & 1) == 0) {
        func_0x000180123e90(unaff_ESI);
      }
      else {
        *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
        if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
          *(undefined4 *)(unaff_RBX + 0x1b38) = 0;
          *(undefined1 *)(unaff_RBX + 0x1b3e) = 0;
        }
        *(undefined4 *)(unaff_RBX + 0x1b2c) = 0;
        *(undefined4 *)(unaff_RBX + 0x1b44) = 0;
        *(undefined1 *)(unaff_RBX + 0x1b3d) = 0;
        *(undefined8 *)(unaff_RBX + 0x1b50) = 0;
      }
      FUN_18012d2e0();
    }
    if (((unaff_EBP & 8) != 0) && (*(char *)(unaff_RBX + 0x41a) != '\0')) {
      if (((unaff_EBP & 1) == 0) ||
         (*(float *)(unaff_RBX + 0x438) <= *(float *)(unaff_RBX + 0x90) &&
          *(float *)(unaff_RBX + 0x90) != *(float *)(unaff_RBX + 0x438))) {
        cVar7 = '\x01';
      }
      *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
      if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
        *(undefined4 *)(unaff_RBX + 0x1b38) = 0;
        *(undefined1 *)(unaff_RBX + 0x1b3e) = 0;
      }
      *(undefined4 *)(unaff_RBX + 0x1b2c) = 0;
      *(undefined4 *)(unaff_RBX + 0x1b44) = 0;
      *(undefined1 *)(unaff_RBX + 0x1b3d) = 0;
      *(undefined8 *)(unaff_RBX + 0x1b50) = 0;
    }
    if ((((unaff_EBP & 1) == 0) || (*(int *)(unaff_RBX + 0x1b2c) != unaff_ESI)) ||
       (*(float *)(unaff_RBX + 0x424) <= 0.0)) goto LAB_18010f4c5;
    cVar4 = FUN_180128280(0);
    if (cVar4 == '\0') goto LAB_18010f4c5;
    cVar7 = '\x01';
  }
  else {
LAB_18010f4c5:
    if (cVar7 == '\0') goto LAB_18010f4d1;
  }
  *(undefined1 *)(unaff_RBX + 0x1d06) = 1;
LAB_18010f4d1:
  if ((((*(int *)(unaff_RBX + 0x1ca0) == unaff_ESI) && (*(char *)(unaff_RBX + 0x1d06) == '\0')) &&
      (*(char *)(unaff_RBX + 0x1d07) != '\0')) &&
     (((iVar5 = *(int *)(unaff_RBX + 0x1b2c), iVar5 == 0 || (iVar5 == unaff_ESI)) ||
      (iVar5 == *(int *)(unaff_R14 + 0x84))))) {
    cVar3 = '\x01';
  }
  if (*(int *)(unaff_RBX + 0x1ca8) == unaff_ESI) {
    iVar5 = *(int *)(unaff_RBX + 0x1ca4);
    fVar8 = (float)FUN_1801319b0(0);
    cVar4 = 0.0 < fVar8;
    if ((iVar5 == unaff_ESI) || ((bool)cVar4)) {
      cVar7 = '\x01';
    }
    if (((iVar5 == unaff_ESI) || ((bool)cVar4)) || (*(int *)(unaff_RBX + 0x1b2c) == unaff_ESI)) {
      *(int *)(unaff_RBX + 0x1ca4) = unaff_ESI;
      func_0x000180123e90(unaff_ESI);
      if (((iVar5 == unaff_ESI) || (cVar4 != '\0')) && ((unaff_EBP >> 0xd & 1) == 0)) {
        FUN_180123f30();
      }
      *(undefined4 *)(unaff_RBX + 0x1b44) = 0xf;
    }
  }
  uVar6 = 0;
  if (*(int *)(unaff_RBX + 0x1b2c) == unaff_ESI) {
    if (*(int *)(unaff_RBX + 0x1b60) == 1) {
      if (*(char *)(unaff_RBX + 0x1b3c) != '\0') {
        fVar8 = in_stack_00000080[1];
        *(float *)(unaff_RBX + 0x1b48) = *(float *)(unaff_RBX + 0x118) - *in_stack_00000080;
        *(float *)(unaff_RBX + 0x1b4c) = *(float *)(unaff_RBX + 0x11c) - fVar8;
      }
      if (*(char *)(unaff_RBX + 0x120) == '\0') {
        if (((cVar3 != '\0') && ((unaff_EBP & 2) != 0)) &&
           ((((unaff_EBP & 1) == 0 ||
             (*(float *)(unaff_RBX + 0x438) <= *(float *)(unaff_RBX + 0x90) &&
              *(float *)(unaff_RBX + 0x90) != *(float *)(unaff_RBX + 0x438))) &&
            (*(char *)(unaff_RBX + 0x1dd0) == '\0')))) {
          cVar7 = '\x01';
        }
        *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
        if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
          *(undefined4 *)(unaff_RBX + 0x1b38) = 0;
          *(undefined1 *)(unaff_RBX + 0x1b3e) = 0;
        }
        *(undefined4 *)(unaff_RBX + 0x1b2c) = 0;
        *(undefined4 *)(unaff_RBX + 0x1b44) = 0;
        *(undefined1 *)(unaff_RBX + 0x1b3d) = 0;
        *(undefined8 *)(unaff_RBX + 0x1b50) = 0;
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      if ((unaff_EBP >> 0xd & 1) == 0) {
        *(undefined1 *)(unaff_RBX + 0x1d06) = 1;
      }
    }
    else if ((*(int *)(unaff_RBX + 0x1b60) == 2) && (*(int *)(unaff_RBX + 0x1ca8) != unaff_ESI)) {
      *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
      if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
        *(undefined4 *)(unaff_RBX + 0x1b38) = 0;
        *(undefined1 *)(unaff_RBX + 0x1b3e) = 0;
      }
      *(undefined4 *)(unaff_RBX + 0x1b2c) = 0;
      *(undefined4 *)(unaff_RBX + 0x1b44) = 0;
      *(undefined1 *)(unaff_RBX + 0x1b3d) = 0;
      *(undefined8 *)(unaff_RBX + 0x1b50) = 0;
    }
  }
  if (in_stack_00000090 != (char *)0x0) {
    *in_stack_00000090 = cVar3;
  }
  if (in_stack_00000098 != (undefined1 *)0x0) {
    *in_stack_00000098 = uVar6;
  }
  return cVar7;
}



char FUN_18010f333(void)

{
  char cVar1;
  undefined1 uVar2;
  longlong unaff_RBX;
  uint unaff_EBP;
  int unaff_ESI;
  char cVar3;
  undefined8 unaff_RDI;
  int iVar5;
  char unaff_R12B;
  longlong unaff_R14;
  char unaff_R15B;
  float fVar6;
  undefined8 uStackX_20;
  float *in_stack_00000080;
  char *in_stack_00000090;
  undefined1 *in_stack_00000098;
  undefined4 uVar4;
  
  *(undefined8 *)(unaff_RBX + 0x1b00) = uStackX_20;
  cVar3 = (char)unaff_RDI;
  uVar4 = (undefined4)unaff_RDI;
  if (unaff_R12B == '\0') goto LAB_18010f4d1;
  if ((((unaff_EBP & 0x40) != 0) && (*(int *)(unaff_RBX + 0x1b20) != unaff_ESI)) &&
     (*(int *)(unaff_RBX + 0x1b20) != 0)) {
    unaff_R12B = '\0';
    goto LAB_18010f4d1;
  }
  if (((unaff_EBP >> 10 & 1) == 0) ||
     (((*(char *)(unaff_RBX + 0x134) == cVar3 && (*(char *)(unaff_RBX + 0x135) == cVar3)) &&
      (*(char *)(unaff_RBX + 0x136) == cVar3)))) {
    if (((unaff_EBP & 2) != 0) && (*(char *)(unaff_RBX + 0x410) != cVar3)) {
      func_0x000180123e90(unaff_ESI);
      if ((unaff_EBP >> 0xd & 1) == 0) {
        FUN_180123f30();
      }
      FUN_18012d2e0();
    }
    if ((((unaff_EBP & 4) != 0) && (*(char *)(unaff_RBX + 0x410) != cVar3)) ||
       (((unaff_EBP & 0x10) != 0 && (*(char *)(unaff_RBX + 0x415) != cVar3)))) {
      unaff_R15B = '\x01';
      if ((unaff_EBP >> 0xb & 1) == 0) {
        func_0x000180123e90(unaff_ESI);
      }
      else {
        *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
        if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
          *(undefined4 *)(unaff_RBX + 0x1b38) = uVar4;
          *(char *)(unaff_RBX + 0x1b3e) = cVar3;
        }
        *(undefined4 *)(unaff_RBX + 0x1b2c) = uVar4;
        *(undefined4 *)(unaff_RBX + 0x1b44) = uVar4;
        *(char *)(unaff_RBX + 0x1b3d) = cVar3;
        *(undefined8 *)(unaff_RBX + 0x1b50) = unaff_RDI;
      }
      FUN_18012d2e0();
    }
    if (((unaff_EBP & 8) != 0) && (*(char *)(unaff_RBX + 0x41a) != cVar3)) {
      if (((unaff_EBP & 1) == 0) ||
         (*(float *)(unaff_RBX + 0x438) <= *(float *)(unaff_RBX + 0x90) &&
          *(float *)(unaff_RBX + 0x90) != *(float *)(unaff_RBX + 0x438))) {
        unaff_R15B = '\x01';
      }
      *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
      if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
        *(undefined4 *)(unaff_RBX + 0x1b38) = uVar4;
        *(char *)(unaff_RBX + 0x1b3e) = cVar3;
      }
      *(undefined4 *)(unaff_RBX + 0x1b2c) = uVar4;
      *(undefined4 *)(unaff_RBX + 0x1b44) = uVar4;
      *(char *)(unaff_RBX + 0x1b3d) = cVar3;
      *(undefined8 *)(unaff_RBX + 0x1b50) = unaff_RDI;
    }
    if ((((unaff_EBP & 1) == 0) || (*(int *)(unaff_RBX + 0x1b2c) != unaff_ESI)) ||
       (*(float *)(unaff_RBX + 0x424) <= 0.0)) goto LAB_18010f4c5;
    cVar1 = FUN_180128280(0);
    if (cVar1 == '\0') goto LAB_18010f4c5;
    unaff_R15B = '\x01';
  }
  else {
LAB_18010f4c5:
    if (unaff_R15B == '\0') goto LAB_18010f4d1;
  }
  *(undefined1 *)(unaff_RBX + 0x1d06) = 1;
LAB_18010f4d1:
  if ((((*(int *)(unaff_RBX + 0x1ca0) == unaff_ESI) && (*(char *)(unaff_RBX + 0x1d06) == cVar3)) &&
      (*(char *)(unaff_RBX + 0x1d07) != cVar3)) &&
     (((iVar5 = *(int *)(unaff_RBX + 0x1b2c), iVar5 == 0 || (iVar5 == unaff_ESI)) ||
      (iVar5 == *(int *)(unaff_R14 + 0x84))))) {
    unaff_R12B = '\x01';
  }
  if (*(int *)(unaff_RBX + 0x1ca8) == unaff_ESI) {
    iVar5 = *(int *)(unaff_RBX + 0x1ca4);
    fVar6 = (float)FUN_1801319b0(0);
    cVar1 = 0.0 < fVar6;
    if ((iVar5 == unaff_ESI) || ((bool)cVar1)) {
      unaff_R15B = '\x01';
    }
    if (((iVar5 == unaff_ESI) || ((bool)cVar1)) || (*(int *)(unaff_RBX + 0x1b2c) == unaff_ESI)) {
      *(int *)(unaff_RBX + 0x1ca4) = unaff_ESI;
      func_0x000180123e90(unaff_ESI);
      if (((iVar5 == unaff_ESI) || (cVar1 != '\0')) && ((unaff_EBP >> 0xd & 1) == 0)) {
        FUN_180123f30();
      }
      *(undefined4 *)(unaff_RBX + 0x1b44) = 0xf;
    }
  }
  uVar2 = 0;
  if (*(int *)(unaff_RBX + 0x1b2c) == unaff_ESI) {
    if (*(int *)(unaff_RBX + 0x1b60) == 1) {
      if (*(char *)(unaff_RBX + 0x1b3c) != cVar3) {
        fVar6 = in_stack_00000080[1];
        *(float *)(unaff_RBX + 0x1b48) = *(float *)(unaff_RBX + 0x118) - *in_stack_00000080;
        *(float *)(unaff_RBX + 0x1b4c) = *(float *)(unaff_RBX + 0x11c) - fVar6;
      }
      if (*(char *)(unaff_RBX + 0x120) == cVar3) {
        if (((unaff_R12B != '\0') && ((unaff_EBP & 2) != 0)) &&
           ((((unaff_EBP & 1) == 0 ||
             (*(float *)(unaff_RBX + 0x438) <= *(float *)(unaff_RBX + 0x90) &&
              *(float *)(unaff_RBX + 0x90) != *(float *)(unaff_RBX + 0x438))) &&
            (*(char *)(unaff_RBX + 0x1dd0) == cVar3)))) {
          unaff_R15B = '\x01';
        }
        *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
        if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
          *(undefined4 *)(unaff_RBX + 0x1b38) = uVar4;
          *(char *)(unaff_RBX + 0x1b3e) = cVar3;
        }
        *(undefined4 *)(unaff_RBX + 0x1b2c) = uVar4;
        *(undefined4 *)(unaff_RBX + 0x1b44) = uVar4;
        *(char *)(unaff_RBX + 0x1b3d) = cVar3;
        *(undefined8 *)(unaff_RBX + 0x1b50) = unaff_RDI;
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      if ((unaff_EBP >> 0xd & 1) == 0) {
        *(undefined1 *)(unaff_RBX + 0x1d06) = 1;
      }
    }
    else if ((*(int *)(unaff_RBX + 0x1b60) == 2) && (*(int *)(unaff_RBX + 0x1ca8) != unaff_ESI)) {
      *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
      if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
        *(undefined4 *)(unaff_RBX + 0x1b38) = uVar4;
        *(char *)(unaff_RBX + 0x1b3e) = cVar3;
      }
      *(undefined4 *)(unaff_RBX + 0x1b2c) = uVar4;
      *(undefined4 *)(unaff_RBX + 0x1b44) = uVar4;
      *(char *)(unaff_RBX + 0x1b3d) = cVar3;
      *(undefined8 *)(unaff_RBX + 0x1b50) = unaff_RDI;
    }
  }
  if (in_stack_00000090 != (char *)0x0) {
    *in_stack_00000090 = unaff_R12B;
  }
  if (in_stack_00000098 != (undefined1 *)0x0) {
    *in_stack_00000098 = uVar2;
  }
  return unaff_R15B;
}



undefined1 FUN_18010f58d(undefined8 param_1,undefined1 param_2)

{
  float fVar1;
  undefined1 unaff_10000020;
  longlong unaff_RBX;
  uint unaff_EBP;
  int unaff_ESI;
  char cVar2;
  undefined8 unaff_RDI;
  char unaff_R12B;
  undefined1 unaff_R15B;
  float *in_stack_00000080;
  char *in_stack_00000090;
  undefined1 *in_stack_00000098;
  undefined4 uVar3;
  
  uVar3 = (undefined4)unaff_RDI;
  cVar2 = (char)unaff_RDI;
  if (*(int *)(unaff_RBX + 0x1b60) == 1) {
    if (*(char *)(unaff_RBX + 0x1b3c) != cVar2) {
      fVar1 = in_stack_00000080[1];
      *(float *)(unaff_RBX + 0x1b48) = *(float *)(unaff_RBX + 0x118) - *in_stack_00000080;
      *(float *)(unaff_RBX + 0x1b4c) = *(float *)(unaff_RBX + 0x11c) - fVar1;
    }
    if (*(char *)(unaff_RBX + 0x120) == cVar2) {
      if (((unaff_R12B != '\0') && ((unaff_EBP & 2) != 0)) &&
         (((unaff_EBP & 1) == 0 ||
          (*(float *)(unaff_RBX + 0x438) <= *(float *)(unaff_RBX + 0x90) &&
           *(float *)(unaff_RBX + 0x90) != *(float *)(unaff_RBX + 0x438))))) {
        unaff_R15B = unaff_10000020;
        if (*(char *)(unaff_RBX + 0x1dd0) == cVar2) {
          unaff_R15B = 1;
        }
      }
      *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
      if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
        *(undefined4 *)(unaff_RBX + 0x1b38) = uVar3;
        *(char *)(unaff_RBX + 0x1b3e) = cVar2;
      }
      *(undefined4 *)(unaff_RBX + 0x1b2c) = uVar3;
      *(undefined4 *)(unaff_RBX + 0x1b44) = uVar3;
      *(char *)(unaff_RBX + 0x1b3d) = cVar2;
      *(undefined8 *)(unaff_RBX + 0x1b50) = unaff_RDI;
    }
    else {
      param_2 = 1;
    }
    if ((unaff_EBP >> 0xd & 1) == 0) {
      *(undefined1 *)(unaff_RBX + 0x1d06) = 1;
    }
  }
  else if ((*(int *)(unaff_RBX + 0x1b60) == 2) && (*(int *)(unaff_RBX + 0x1ca8) != unaff_ESI)) {
    *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
    if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
      *(undefined4 *)(unaff_RBX + 0x1b38) = uVar3;
      *(char *)(unaff_RBX + 0x1b3e) = cVar2;
    }
    *(undefined4 *)(unaff_RBX + 0x1b2c) = uVar3;
    *(undefined4 *)(unaff_RBX + 0x1b44) = uVar3;
    *(char *)(unaff_RBX + 0x1b3d) = cVar2;
    *(undefined8 *)(unaff_RBX + 0x1b50) = unaff_RDI;
  }
  if (in_stack_00000090 != (char *)0x0) {
    *in_stack_00000090 = unaff_R12B;
  }
  if (in_stack_00000098 != (undefined1 *)0x0) {
    *in_stack_00000098 = param_2;
  }
  return unaff_R15B;
}



undefined1 FUN_18010f6c2(undefined8 param_1,undefined1 param_2)

{
  undefined1 *in_RAX;
  undefined1 unaff_R12B;
  undefined1 unaff_R15B;
  undefined1 *in_stack_00000098;
  
  *in_RAX = unaff_R12B;
  if (in_stack_00000098 != (undefined1 *)0x0) {
    *in_stack_00000098 = param_2;
  }
  return unaff_R15B;
}



undefined1 FUN_18010f6d7(undefined8 param_1,undefined1 param_2)

{
  undefined1 *in_RAX;
  undefined1 unaff_R15B;
  
  *in_RAX = param_2;
  return unaff_R15B;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18010f6f0(char *param_1,undefined8 *param_2,uint param_3)

{
  uint *puVar1;
  float fVar2;
  float *pfVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  uint uVar9;
  char *pcVar10;
  longlong lVar11;
  float fVar12;
  float fStackX_20;
  float fStackX_24;
  undefined8 in_stack_ffffffffffffff48;
  undefined8 uVar13;
  undefined4 uVar14;
  char acStack_98 [8];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  lVar4 = _DAT_180c8a9b0;
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  uVar8 = *(ulonglong *)(_DAT_180c8a9b0 + 0x1af8);
  *(undefined1 *)(uVar8 + 0xb1) = 1;
  lVar11 = *(longlong *)(lVar4 + 0x1af8);
  if (*(char *)(lVar11 + 0xb4) == '\0') {
    iVar6 = FUN_180121250(param_1,0,
                          *(undefined4 *)
                           (*(longlong *)(lVar11 + 0x220) + -4 +
                           (longlong)*(int *)(lVar11 + 0x218) * 4));
    if (*(int *)(lVar4 + 0x1b2c) == iVar6) {
      *(int *)(lVar4 + 0x1b34) = iVar6;
    }
    if (*(int *)(lVar4 + 0x1b30) == iVar6) {
      *(undefined1 *)(lVar4 + 0x1b3f) = 1;
    }
    pcVar10 = param_1;
    if (param_1 != (char *)0xffffffffffffffff) {
      while (*pcVar10 != '\0') {
        if (((*pcVar10 == '#') && (pcVar10[1] == '#')) ||
           (pcVar10 = pcVar10 + 1, pcVar10 == (char *)0xffffffffffffffff)) break;
      }
    }
    pfVar3 = *(float **)(lVar4 + 0x19f0);
    fVar2 = *(float *)(lVar4 + 0x19f8);
    if (param_1 == pcVar10) {
      fStack_90 = 0.0;
      fStack_8c = fVar2;
    }
    else {
      uVar13 = CONCAT44(uVar14,0xbf800000);
      FUN_180297340(pfVar3,&fStackX_20,fVar2,0x7f7fffff,uVar13,param_1,pcVar10,0);
      uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
      fVar12 = fStackX_20;
      if (0.0 < fStackX_20) {
        fVar12 = fStackX_20 - fVar2 / *pfVar3;
      }
      fStack_90 = (float)(int)(fVar12 + 0.95);
      fStack_8c = fStackX_24;
    }
    fVar2 = *(float *)(lVar11 + 0x100);
    fVar12 = *(float *)(lVar11 + 0x104);
    if ((param_3 >> 9 & 1) != 0) {
      if (*(float *)(lVar4 + 0x1660) < *(float *)(lVar11 + 0x128)) {
        fVar12 = fVar12 + (*(float *)(lVar11 + 0x128) - *(float *)(lVar4 + 0x1660));
      }
    }
    FUN_180124550(&fStackX_20,*param_2,
                  *(float *)(lVar4 + 0x165c) + *(float *)(lVar4 + 0x165c) + fStack_90,
                  *(float *)(lVar4 + 0x1660) + *(float *)(lVar4 + 0x1660) + fStack_8c);
    fStack_70 = fStackX_20 + fVar2;
    fStack_6c = fStackX_24 + fVar12;
    fStack_78 = fVar2;
    fStack_74 = fVar12;
    func_0x000180124080(&fStackX_20);
    uVar8 = FUN_180124190(&fStack_78,iVar6,0);
    if ((char)uVar8 != '\0') {
      uVar9 = param_3 | 1;
      if ((*(uint *)(lVar11 + 0x1a8) & 2) == 0) {
        uVar9 = param_3;
      }
      uVar13 = CONCAT44(uVar14,uVar9);
      bVar5 = FUN_18010f170(&fStack_78,iVar6,&fStackX_20,acStack_98,uVar13);
      uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
      if (bVar5 != 0) {
        *(undefined1 *)(lVar4 + 0x1b3e) = 1;
        puVar1 = (uint *)(*(longlong *)(lVar4 + 0x1af8) + 0x148);
        *puVar1 = *puVar1 | 4;
      }
      if ((acStack_98[0] == '\0') || (fStackX_20._0_1_ == '\0')) {
        lVar11 = (ulonglong)(fStackX_20._0_1_ != '\0') + 0x15;
      }
      else {
        lVar11 = 0x17;
      }
      pfVar3 = (float *)(lVar4 + 0x1628 + (lVar11 + 10) * 0x10);
      fStack_88 = *pfVar3;
      fStack_84 = pfVar3[1];
      fStack_80 = pfVar3[2];
      fStack_7c = pfVar3[3] * *(float *)(lVar4 + 0x1628);
      uVar7 = func_0x000180121e20(&fStack_88);
      if (iVar6 == *(int *)(lVar4 + 0x1ca0)) {
        FUN_1801230e0(&fStack_78,1,lVar4);
      }
      FUN_180122960(CONCAT44(fStack_74,fStack_78),CONCAT44(fStack_6c,fStack_70),uVar7,1,
                    CONCAT44(uVar14,*(undefined4 *)(lVar4 + 0x1664)));
      lVar11 = _DAT_180c8a9b0;
      fStack_88 = fStack_70 - *(float *)(lVar4 + 0x165c);
      fStack_84 = fStack_6c - *(float *)(lVar4 + 0x1660);
      fStackX_20 = *(float *)(lVar4 + 0x165c) + fStack_78;
      fStackX_24 = *(float *)(lVar4 + 0x1660) + fStack_74;
      pcVar10 = param_1;
      if (param_1 != (char *)0xffffffffffffffff) {
        do {
          if ((*pcVar10 == '\0') || ((*pcVar10 == '#' && (pcVar10[1] == '#')))) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 != (char *)0xffffffffffffffff);
      }
      if (((int)pcVar10 != (int)param_1) &&
         (FUN_1801224c0(*(undefined8 *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x2e8),&fStackX_20,
                        &fStack_88,param_1,pcVar10,&fStack_90,lVar4 + 0x16a4,&fStack_78),
         *(char *)(lVar11 + 0x2e38) != '\0')) {
        FUN_18013c800(&fStackX_20,param_1,pcVar10);
      }
      return (ulonglong)bVar5;
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18010f750(undefined4 param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  longlong in_RAX;
  ulonglong uVar9;
  uint uVar10;
  longlong in_RCX;
  char *pcVar11;
  longlong lVar12;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_R11;
  uint unaff_R13D;
  char *unaff_R14;
  float fVar13;
  undefined4 unaff_XMM7_Da;
  float fVar14;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  float fVar15;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined8 in_stack_00000020;
  undefined8 uVar16;
  undefined4 uVar17;
  
  uVar17 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
  *(undefined4 *)(in_R11 + -0x48) = unaff_XMM7_Da;
  *(undefined4 *)(in_R11 + -0x44) = unaff_XMM7_Db;
  *(undefined4 *)(in_R11 + -0x40) = unaff_XMM7_Dc;
  *(undefined4 *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
  *(undefined4 *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(undefined4 *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(undefined4 *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(undefined4 *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
  *(undefined4 *)(in_R11 + -0x68) = unaff_XMM9_Da;
  *(undefined4 *)(in_R11 + -100) = unaff_XMM9_Db;
  *(undefined4 *)(in_R11 + -0x60) = unaff_XMM9_Dc;
  *(undefined4 *)(in_R11 + -0x5c) = unaff_XMM9_Dd;
  iVar7 = FUN_180121250(param_1,param_2,*(undefined4 *)(in_RAX + -4 + in_RCX * 4));
  if (*(int *)(unaff_RSI + 0x1b2c) == iVar7) {
    *(int *)(unaff_RSI + 0x1b34) = iVar7;
  }
  if (*(int *)(unaff_RSI + 0x1b30) == iVar7) {
    *(undefined1 *)(unaff_RSI + 0x1b3f) = 1;
  }
  pcVar11 = unaff_R14;
  if (unaff_R14 != (char *)0xffffffffffffffff) {
    while (*pcVar11 != '\0') {
      if (((*pcVar11 == '#') && (pcVar11[1] == '#')) ||
         (pcVar11 = pcVar11 + 1, pcVar11 == (char *)0xffffffffffffffff)) break;
    }
  }
  pfVar4 = *(float **)(unaff_RSI + 0x19f0);
  fVar14 = *(float *)(unaff_RSI + 0x19f8);
  if (unaff_R14 == pcVar11) {
    fVar13 = 0.0;
  }
  else {
    uVar16 = CONCAT44(uVar17,0xbf800000);
    FUN_180297340(pfVar4,unaff_RBP + 0x7f,fVar14,0x7f7fffff,uVar16);
    uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
    fVar13 = *(float *)(unaff_RBP + 0x7f);
    if (0.0 < fVar13) {
      fVar13 = fVar13 - fVar14 / *pfVar4;
    }
    fVar14 = *(float *)(unaff_RBP + 0x83);
    fVar13 = (float)(int)(fVar13 + 0.95);
  }
  fVar3 = *(float *)(unaff_RDI + 0x100);
  fVar15 = *(float *)(unaff_RDI + 0x104);
  *(float *)(unaff_RBP + -0x2d) = fVar14;
  *(float *)(unaff_RBP + -0x31) = fVar13;
  if ((unaff_R13D >> 9 & 1) != 0) {
    if (*(float *)(unaff_RSI + 0x1660) < *(float *)(unaff_RDI + 0x128)) {
      fVar15 = fVar15 + (*(float *)(unaff_RDI + 0x128) - *(float *)(unaff_RSI + 0x1660));
    }
  }
  FUN_180124550(unaff_RBP + 0x7f,**(undefined8 **)(unaff_RBP + 0x6f),
                *(float *)(unaff_RSI + 0x165c) + *(float *)(unaff_RSI + 0x165c) + fVar13,
                *(float *)(unaff_RSI + 0x1660) + *(float *)(unaff_RSI + 0x1660) + fVar14);
  *(float *)(unaff_RBP + -0x19) = fVar3;
  *(float *)(unaff_RBP + -0x15) = fVar15;
  *(float *)(unaff_RBP + -0x11) = *(float *)(unaff_RBP + 0x7f) + fVar3;
  *(float *)(unaff_RBP + -0xd) = *(float *)(unaff_RBP + 0x83) + fVar15;
  func_0x000180124080(unaff_RBP + 0x7f);
  uVar9 = FUN_180124190(unaff_RBP + -0x19,iVar7,0);
  if ((char)uVar9 == '\0') {
    uVar9 = uVar9 & 0xffffffffffffff00;
  }
  else {
    uVar10 = unaff_R13D | 1;
    if ((*(uint *)(unaff_RDI + 0x1a8) & 2) == 0) {
      uVar10 = unaff_R13D;
    }
    uVar16 = CONCAT44(uVar17,uVar10);
    bVar6 = FUN_18010f170(unaff_RBP + -0x19,iVar7,unaff_RBP + 0x7f,unaff_RBP + -0x39,uVar16);
    uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
    if (bVar6 != 0) {
      *(undefined1 *)(unaff_RSI + 0x1b3e) = 1;
      puVar1 = (uint *)(*(longlong *)(unaff_RSI + 0x1af8) + 0x148);
      *puVar1 = *puVar1 | 4;
    }
    if ((*(char *)(unaff_RBP + -0x39) == '\0') || (*(char *)(unaff_RBP + 0x7f) == '\0')) {
      lVar12 = (ulonglong)(*(char *)(unaff_RBP + 0x7f) != '\0') + 0x15;
    }
    else {
      lVar12 = 0x17;
    }
    puVar2 = (undefined4 *)(unaff_RSI + 0x1628 + (lVar12 + 10) * 0x10);
    uVar8 = puVar2[1];
    uVar5 = puVar2[2];
    fVar14 = (float)puVar2[3];
    *(undefined4 *)(unaff_RBP + -0x29) = *puVar2;
    *(undefined4 *)(unaff_RBP + -0x25) = uVar8;
    *(undefined4 *)(unaff_RBP + -0x21) = uVar5;
    *(float *)(unaff_RBP + -0x1d) = fVar14;
    *(float *)(unaff_RBP + -0x1d) = fVar14 * *(float *)(unaff_RSI + 0x1628);
    uVar8 = func_0x000180121e20(unaff_RBP + -0x29);
    if (iVar7 == *(int *)(unaff_RSI + 0x1ca0)) {
      FUN_1801230e0(unaff_RBP + -0x19,1);
    }
    FUN_180122960(*(undefined8 *)(unaff_RBP + -0x19),*(undefined8 *)(unaff_RBP + -0x11),uVar8,1,
                  CONCAT44(uVar17,*(undefined4 *)(unaff_RSI + 0x1664)));
    fVar14 = *(float *)(unaff_RSI + 0x1660);
    fVar13 = *(float *)(unaff_RSI + 0x165c) + *(float *)(unaff_RBP + -0x19);
    *(float *)(unaff_RBP + -0x29) = *(float *)(unaff_RBP + -0x11) - *(float *)(unaff_RSI + 0x165c);
    *(float *)(unaff_RBP + -0x25) = *(float *)(unaff_RBP + -0xd) - fVar14;
    *(float *)(unaff_RBP + 0x7f) = fVar13;
    *(float *)(unaff_RBP + 0x83) = fVar14 + *(float *)(unaff_RBP + -0x15);
    lVar12 = _DAT_180c8a9b0;
    pcVar11 = unaff_R14;
    if (unaff_R14 != (char *)0xffffffffffffffff) {
      do {
        if ((*pcVar11 == '\0') || ((*pcVar11 == '#' && (pcVar11[1] == '#')))) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 != (char *)0xffffffffffffffff);
    }
    if (((int)pcVar11 != (int)unaff_R14) &&
       (FUN_1801224c0(*(undefined8 *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x2e8),
                      unaff_RBP + 0x7f,unaff_RBP + -0x29,fVar13,pcVar11),
       *(char *)(lVar12 + 0x2e38) != '\0')) {
      FUN_18013c800(unaff_RBP + 0x7f);
    }
    uVar9 = (ulonglong)bVar6;
  }
  return uVar9;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char FUN_18010f90d(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 unaff_RBX;
  longlong lVar8;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char *pcVar9;
  uint unaff_R13D;
  char *unaff_R14;
  int unaff_R15D;
  float fVar10;
  undefined8 in_stack_00000020;
  undefined8 uVar11;
  undefined4 uVar12;
  
  uVar7 = unaff_R13D | 1;
  if ((*(uint *)(unaff_RDI + 0x1a8) & 2) == 0) {
    uVar7 = unaff_R13D;
  }
  uVar11 = CONCAT44((int)((ulonglong)in_stack_00000020 >> 0x20),uVar7);
  cVar5 = FUN_18010f170(unaff_RBP + -0x19,unaff_R15D,unaff_RBP + 0x7f,unaff_RBP + -0x39,uVar11);
  uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
  if (cVar5 != '\0') {
    *(undefined1 *)(unaff_RSI + 0x1b3e) = 1;
    puVar1 = (uint *)(*(longlong *)(unaff_RSI + 0x1af8) + 0x148);
    *puVar1 = *puVar1 | 4;
  }
  if ((*(char *)(unaff_RBP + -0x39) == (char)unaff_RBX) || (*(char *)(unaff_RBP + 0x7f) == '\0')) {
    lVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(char *)(unaff_RBP + 0x7f) != '\0') + 0x15;
  }
  else {
    lVar8 = 0x17;
  }
  puVar2 = (undefined4 *)(unaff_RSI + 0x1628 + (lVar8 + 10) * 0x10);
  uVar6 = puVar2[1];
  uVar4 = puVar2[2];
  fVar3 = (float)puVar2[3];
  *(undefined4 *)(unaff_RBP + -0x29) = *puVar2;
  *(undefined4 *)(unaff_RBP + -0x25) = uVar6;
  *(undefined4 *)(unaff_RBP + -0x21) = uVar4;
  *(float *)(unaff_RBP + -0x1d) = fVar3;
  *(float *)(unaff_RBP + -0x1d) = fVar3 * *(float *)(unaff_RSI + 0x1628);
  uVar6 = func_0x000180121e20(unaff_RBP + -0x29);
  if (unaff_R15D == *(int *)(unaff_RSI + 0x1ca0)) {
    FUN_1801230e0(unaff_RBP + -0x19,1);
  }
  FUN_180122960(*(undefined8 *)(unaff_RBP + -0x19),*(undefined8 *)(unaff_RBP + -0x11),uVar6,1,
                CONCAT44(uVar12,*(undefined4 *)(unaff_RSI + 0x1664)));
  fVar3 = *(float *)(unaff_RSI + 0x1660);
  fVar10 = *(float *)(unaff_RSI + 0x165c) + *(float *)(unaff_RBP + -0x19);
  *(float *)(unaff_RBP + -0x29) = *(float *)(unaff_RBP + -0x11) - *(float *)(unaff_RSI + 0x165c);
  *(float *)(unaff_RBP + -0x25) = *(float *)(unaff_RBP + -0xd) - fVar3;
  *(float *)(unaff_RBP + 0x7f) = fVar10;
  *(float *)(unaff_RBP + 0x83) = fVar3 + *(float *)(unaff_RBP + -0x15);
  lVar8 = _DAT_180c8a9b0;
  pcVar9 = unaff_R14;
  if (unaff_R14 != (char *)0xffffffffffffffff) {
    while (*pcVar9 != '\0') {
      if (((*pcVar9 == '#') && (pcVar9[1] == '#')) ||
         (pcVar9 = pcVar9 + 1, pcVar9 == (char *)0xffffffffffffffff)) break;
    }
  }
  if (((int)pcVar9 != (int)unaff_R14) &&
     (FUN_1801224c0(*(undefined8 *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x2e8),unaff_RBP + 0x7f
                    ,unaff_RBP + -0x29,fVar10,pcVar9), *(char *)(lVar8 + 0x2e38) != '\0')) {
    FUN_18013c800(unaff_RBP + 0x7f);
  }
  return cVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18010fad0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined4 auStackX_20 [2];
  char acStack_78 [8];
  undefined8 uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  lVar2 = _DAT_180c8a9b0;
  uVar7 = *(ulonglong *)(_DAT_180c8a9b0 + 0x1af8);
  *(undefined1 *)(uVar7 + 0xb1) = 1;
  lVar8 = *(longlong *)(lVar2 + 0x1af8);
  if (*(char *)(lVar8 + 0xb4) == '\0') {
    auStackX_20[0] = param_4;
    uStack_70 = param_3;
    iVar5 = FUN_180121250(param_1,0,
                          *(undefined4 *)
                           (*(longlong *)(lVar8 + 0x220) + -4 +
                           (longlong)*(int *)(lVar8 + 0x218) * 4));
    if (*(int *)(lVar2 + 0x1b2c) == iVar5) {
      *(int *)(lVar2 + 0x1b34) = iVar5;
    }
    if (*(int *)(lVar2 + 0x1b30) == iVar5) {
      *(undefined1 *)(lVar2 + 0x1b3f) = 1;
    }
    fVar9 = *(float *)(lVar2 + 0x1660);
    fStack_58 = *(float *)(lVar8 + 0x100);
    fStack_54 = *(float *)(lVar8 + 0x104);
    fVar3 = uStack_70._4_4_;
    fVar10 = (float)uStack_70;
    fStack_50 = fStack_58 + (float)uStack_70;
    fStack_4c = fStack_54 + uStack_70._4_4_;
    if (uStack_70._4_4_ < fVar9 + fVar9 + *(float *)(lVar2 + 0x19f8)) {
      fVar9 = 0.0;
    }
    fStack_68 = fStack_50 - fStack_58;
    fStack_64 = fStack_4c - fStack_54;
    func_0x000180124080(&fStack_68,fVar9);
    uVar7 = FUN_180124190(&fStack_58,iVar5,0);
    if ((char)uVar7 != '\0') {
      bVar4 = FUN_18010f170(&fStack_58,iVar5,auStackX_20,acStack_78,5);
      if ((acStack_78[0] == '\0') || ((char)auStackX_20[0] == '\0')) {
        lVar8 = (ulonglong)((char)auStackX_20[0] != '\0') + 0x15;
      }
      else {
        lVar8 = 0x17;
      }
      pfVar1 = (float *)(lVar2 + 0x1628 + (lVar8 + 10) * 0x10);
      fStack_68 = *pfVar1;
      fStack_64 = pfVar1[1];
      fStack_60 = pfVar1[2];
      fStack_5c = pfVar1[3] * *(float *)(lVar2 + 0x1628);
      uVar6 = func_0x000180121e20(&fStack_68);
      if (iVar5 == *(int *)(lVar2 + 0x1ca0)) {
        FUN_1801230e0(&fStack_58,1,lVar2);
      }
      FUN_180122960(CONCAT44(fStack_54,fStack_58),CONCAT44(fStack_4c,fStack_50),uVar6,1,
                    *(undefined4 *)(lVar2 + 0x1664));
      fVar10 = (fVar10 - *(float *)(lVar2 + 0x19f8)) * 0.5;
      fVar9 = (fVar3 - *(float *)(lVar2 + 0x19f8)) * 0.5;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      FUN_180122c80(CONCAT44(fVar9 + fStack_54,fVar10 + fStack_58),param_2,0x3f800000);
      return (ulonglong)bVar4;
    }
  }
  return uVar7 & 0xffffffffffffff00;
}



undefined1 FUN_18010fbff(void)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong unaff_RBX;
  int unaff_EDI;
  undefined1 in_R9B;
  undefined4 unaff_R14D;
  float unaff_XMM6_Da;
  float fVar5;
  float unaff_XMM7_Da;
  float fVar6;
  float unaff_XMM8_Da;
  char in_stack_00000030;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  undefined8 in_stack_00000058;
  char in_stack_000000c8;
  
  uVar2 = FUN_18010f170(&stack0x00000050,unaff_EDI,&stack0x000000c8,in_R9B,5);
  if ((in_stack_00000030 == '\0') || (in_stack_000000c8 == '\0')) {
    lVar4 = (ulonglong)(in_stack_000000c8 != '\0') + 0x15;
  }
  else {
    lVar4 = 0x17;
  }
  puVar1 = (undefined4 *)(unaff_RBX + 0x1628 + (lVar4 + 10) * 0x10);
  in_stack_00000040 = *puVar1;
  uStack0000000000000044 = puVar1[1];
  in_stack_00000048 = puVar1[2];
  fStack000000000000004c = (float)puVar1[3] * *(float *)(unaff_RBX + 0x1628);
  uVar3 = func_0x000180121e20(&stack0x00000040);
  if (unaff_EDI == *(int *)(unaff_RBX + 0x1ca0)) {
    FUN_1801230e0(&stack0x00000050,1);
  }
  FUN_180122960(CONCAT44(fStack0000000000000054,fStack0000000000000050),in_stack_00000058,uVar3,1,
                *(undefined4 *)(unaff_RBX + 0x1664));
  fVar6 = (unaff_XMM7_Da - *(float *)(unaff_RBX + 0x19f8)) * 0.5;
  fVar5 = (unaff_XMM6_Da - *(float *)(unaff_RBX + 0x19f8)) * 0.5;
  if (fVar6 <= unaff_XMM8_Da) {
    fVar6 = unaff_XMM8_Da;
  }
  if (fVar5 <= unaff_XMM8_Da) {
    fVar5 = unaff_XMM8_Da;
  }
  FUN_180122c80(CONCAT44(fVar5 + fStack0000000000000054,fVar6 + fStack0000000000000050),unaff_R14D,
                0x3f800000);
  return uVar2;
}



undefined1 FUN_18010fd19(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 FUN_18010fd40(undefined4 param_1,float *param_2,float param_3)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStackX_10;
  float fStackX_14;
  char acStackX_18 [8];
  float fStackX_20;
  float fStackX_24;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  lVar9 = _DAT_180c8a9b0;
  fStack_90 = *param_2 + param_3;
  lVar2 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
  fStack_8c = param_2[1] + param_3;
  fStack_98 = *param_2 - param_3;
  fStack_94 = param_2[1] - param_3;
  cVar4 = FUN_180124190(&fStack_98,param_1,0);
  uVar5 = FUN_18010f170(&fStack_98,param_1,acStackX_18,&fStackX_10,0);
  if (cVar4 != '\0') {
    fVar11 = (fStack_98 + fStack_90) * 0.5;
    fVar13 = (fStack_94 + fStack_8c) * 0.5;
    fStackX_20 = fVar11;
    fStackX_24 = fVar13;
    if (acStackX_18[0] != '\0') {
      lVar3 = *(longlong *)(lVar2 + 0x2e8);
      lVar8 = 0x200;
      if (fStackX_10._0_1_ != '\0') {
        lVar8 = 0x210;
      }
      pfVar1 = (float *)(lVar8 + 0x1628 + lVar9);
      fStack_98 = *pfVar1;
      fStack_94 = pfVar1[1];
      fStack_90 = pfVar1[2];
      fStack_8c = pfVar1[3] * *(float *)(lVar9 + 0x1628);
      uVar6 = func_0x000180121e20(&fStack_98);
      if ((uVar6 & 0xff000000) != 0) {
        fVar10 = param_3;
        if (param_3 <= 2.0) {
          fVar10 = 2.0;
        }
        FUN_180293860(lVar3,&fStackX_20,fVar10,0,0x40b2b8c3,8);
        FUN_180293190(lVar3,*(undefined8 *)(lVar3 + 0x88),*(undefined4 *)(lVar3 + 0x80),uVar6);
        lVar9 = _DAT_180c8a9b0;
        *(undefined4 *)(lVar3 + 0x80) = 0;
      }
    }
    fStack_98 = *(float *)(lVar9 + 0x16c8);
    fStack_94 = *(float *)(lVar9 + 0x16cc);
    fStack_90 = *(float *)(lVar9 + 0x16d0);
    fVar14 = param_3 * 0.7071 - 1.0;
    fStack_8c = *(float *)(lVar9 + 0x16d4) * *(float *)(lVar9 + 0x1628);
    uVar7 = func_0x000180121e20(&fStack_98);
    fVar12 = (fVar11 - 0.5) + fVar14;
    fVar10 = (fVar11 - 0.5) - fVar14;
    fVar11 = (fVar13 - 0.5) - fVar14;
    fVar14 = (fVar13 - 0.5) + fVar14;
    fStackX_10 = fVar10;
    fStackX_14 = fVar11;
    fStackX_20 = fVar12;
    fStackX_24 = fVar14;
    FUN_180293d20(*(undefined8 *)(lVar2 + 0x2e8),&fStackX_20,&fStackX_10,uVar7,0x3f800000);
    fStackX_10 = fVar10;
    fStackX_14 = fVar14;
    fStackX_20 = fVar12;
    fStackX_24 = fVar11;
    FUN_180293d20(*(undefined8 *)(lVar2 + 0x2e8),&fStackX_20,&fStackX_10,uVar7,0x3f800000);
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 FUN_18010fde5(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined1 unaff_R14B;
  longlong unaff_R15;
  bool in_ZF;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_XMM11_Da;
  float fVar11;
  undefined4 uVar12;
  
  fVar8 = (*(float *)(unaff_RBP + -0x39) + *(float *)(unaff_RBP + -0x31)) * 0.5;
  fVar10 = (*(float *)(unaff_RBP + -0x35) + *(float *)(unaff_RBP + -0x2d)) * 0.5;
  *(float *)(unaff_RBP + 0x7f) = fVar8;
  *(float *)(unaff_RBP + 0x83) = fVar10;
  if (!in_ZF) {
    lVar2 = *(longlong *)(unaff_R15 + 0x2e8);
    lVar6 = 0x200;
    if (*(char *)(unaff_RBP + 0x6f) != '\0') {
      lVar6 = 0x210;
    }
    puVar1 = (undefined4 *)(lVar6 + 0x1628 + unaff_RSI);
    uVar12 = puVar1[1];
    uVar4 = puVar1[2];
    fVar7 = (float)puVar1[3];
    *(undefined4 *)(unaff_RBP + -0x39) = *puVar1;
    *(undefined4 *)(unaff_RBP + -0x35) = uVar12;
    *(undefined4 *)(unaff_RBP + -0x31) = uVar4;
    *(float *)(unaff_RBP + -0x2d) = fVar7;
    *(float *)(unaff_RBP + -0x2d) = fVar7 * *(float *)(unaff_RSI + 0x1628);
    uVar5 = func_0x000180121e20(unaff_RBP + -0x39);
    if ((uVar5 & 0xff000000) != 0) {
      uVar12 = 0x40b2b8c3;
      FUN_180293860(lVar2,unaff_RBP + 0x7f);
      FUN_180293190(lVar2,*(undefined8 *)(lVar2 + 0x88),*(undefined4 *)(lVar2 + 0x80),uVar5,uVar12);
      unaff_RSI = _DAT_180c8a9b0;
      *(undefined4 *)(lVar2 + 0x80) = 0;
    }
  }
  uVar12 = *(undefined4 *)(unaff_RSI + 0x16cc);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x16d0);
  fVar7 = *(float *)(unaff_RSI + 0x16d4);
  *(undefined4 *)(unaff_RBP + -0x39) = *(undefined4 *)(unaff_RSI + 0x16c8);
  *(undefined4 *)(unaff_RBP + -0x35) = uVar12;
  *(undefined4 *)(unaff_RBP + -0x31) = uVar4;
  *(float *)(unaff_RBP + -0x2d) = fVar7;
  fVar11 = unaff_XMM11_Da * 0.7071 - 1.0;
  *(float *)(unaff_RBP + -0x2d) = fVar7 * *(float *)(unaff_RSI + 0x1628);
  uVar12 = func_0x000180121e20(unaff_RBP + -0x39);
  uVar3 = *(undefined8 *)(unaff_R15 + 0x2e8);
  fVar8 = fVar8 - 0.5;
  fVar10 = fVar10 - 0.5;
  fVar9 = fVar8 + fVar11;
  fVar8 = fVar8 - fVar11;
  fVar7 = fVar10 - fVar11;
  fVar10 = fVar10 + fVar11;
  *(float *)(unaff_RBP + 0x7f) = fVar9;
  *(float *)(unaff_RBP + 0x6f) = fVar8;
  *(float *)(unaff_RBP + 0x73) = fVar7;
  *(float *)(unaff_RBP + 0x83) = fVar10;
  FUN_180293d20(uVar3,unaff_RBP + 0x7f,unaff_RBP + 0x6f,uVar12,0x3f800000);
  uVar3 = *(undefined8 *)(unaff_R15 + 0x2e8);
  *(float *)(unaff_RBP + 0x6f) = fVar8;
  *(float *)(unaff_RBP + 0x73) = fVar10;
  *(float *)(unaff_RBP + 0x7f) = fVar9;
  *(float *)(unaff_RBP + 0x83) = fVar7;
  FUN_180293d20(uVar3,unaff_RBP + 0x7f,unaff_RBP + 0x6f,uVar12,0x3f800000);
  return unaff_R14B;
}



undefined1 FUN_18010ffdc(void)

{
  undefined1 unaff_R14B;
  
  return unaff_R14B;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 FUN_180110000(undefined4 param_1,float *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  undefined8 uVar14;
  float *pfVar15;
  char cVar16;
  char cVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fStackX_10;
  float fStackX_14;
  float fStackX_18;
  float fStackX_1c;
  ulonglong uStackX_20;
  undefined8 uStack_e8;
  float fStack_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  longlong lStack_90;
  
  lVar7 = _DAT_180c8a9b0;
  lVar5 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
  fStack_e0 = *(float *)(_DAT_180c8a9b0 + 0x165c) + *(float *)(_DAT_180c8a9b0 + 0x165c) +
              *(float *)(_DAT_180c8a9b0 + 0x19f8) + *param_2;
  uStack_e8 = *(undefined8 *)param_2;
  fStack_dc = *(float *)(_DAT_180c8a9b0 + 0x19f8) + param_2[1] +
              *(float *)(_DAT_180c8a9b0 + 0x1660) + *(float *)(_DAT_180c8a9b0 + 0x1660);
  FUN_180124190(&uStack_e8,param_1,0);
  uVar9 = FUN_18010f170(&uStack_e8,param_1,&fStackX_10,&fStackX_18,0);
  pfVar15 = (float *)&uStackX_20;
  if (param_3 == 0) {
    uStackX_20 = 0;
  }
  else {
    uStackX_20 = (ulonglong)(uint)(0.5 - (float)(int)(*(float *)(lVar7 + 0x1674) * 0.5));
  }
  if ((fStackX_18._0_1_ == '\0') || (fStackX_10._0_1_ == '\0')) {
    lVar12 = (ulonglong)(fStackX_10._0_1_ != '\0') + 0x15;
  }
  else {
    lVar12 = 0x17;
  }
  puVar2 = (undefined4 *)(lVar7 + 0x1628 + (lVar12 + 10) * 0x10);
  uStack_d8 = *puVar2;
  uStack_d4 = puVar2[1];
  uStack_d0 = puVar2[2];
  fStack_cc = (float)puVar2[3] * *(float *)(lVar7 + 0x1628);
  cVar17 = fStackX_18._0_1_;
  cVar16 = fStackX_10._0_1_;
  fStackX_10 = (float)func_0x000180121e20(&uStack_d8);
  iVar18 = 8;
  fVar20 = uStack_e8._4_4_;
  fVar19 = (float)uStack_e8;
  lVar12 = lVar7;
  if ((cVar16 != '\0') || (cVar17 != '\0')) {
    lVar6 = *(longlong *)(lVar5 + 0x2e8);
    fStackX_18 = (fStack_e0 + (float)uStack_e8) * 0.5 + *pfVar15;
    fStackX_1c = ((fStack_dc + uStack_e8._4_4_) * 0.5 + pfVar15[1]) - 0.5;
    if (((uint)fStackX_10 & 0xff000000) != 0) {
      FUN_180293860(lVar6,&fStackX_18,*(float *)(lVar7 + 0x19f8) * 0.5 + 1.0,0,0x40b2b8c3,8);
      FUN_180293190(lVar6,*(undefined8 *)(lVar6 + 0x88),*(undefined4 *)(lVar6 + 0x80),fStackX_10);
      lVar12 = _DAT_180c8a9b0;
      *(undefined4 *)(lVar6 + 0x80) = 0;
    }
  }
  if (param_3 == 0) {
    uVar14 = 3;
    if (*(char *)(lVar5 + 0xb2) != '\0') {
      uVar14 = 1;
    }
    FUN_180122c80(CONCAT44(fVar20 + *(float *)(lVar7 + 0x1660),fVar19 + *(float *)(lVar7 + 0x165c)),
                  uVar14,0x3f800000);
  }
  else {
    uStack_d8 = *(undefined4 *)(lVar12 + 0x16c8);
    uStack_d4 = *(undefined4 *)(lVar12 + 0x16cc);
    uStack_d0 = *(undefined4 *)(lVar12 + 0x16d0);
    fStack_cc = *(float *)(lVar12 + 0x16d4) * *(float *)(lVar12 + 0x1628);
    uVar10 = func_0x000180121e20(&uStack_d8);
    fVar3 = *(float *)(lVar7 + 0x19f8);
    fVar19 = fVar19 + *(float *)(lVar7 + 0x165c);
    fVar20 = fVar20 + *(float *)(lVar7 + 0x1660);
    uVar14 = *(undefined8 *)(lVar5 + 0x2e8);
    fStackX_10 = fVar3 * 0.7 + fVar19;
    fStackX_18 = fVar3 * 0.1 + fVar19;
    fStackX_14 = fVar3 * 0.3 + fVar20;
    fStackX_1c = fVar3 * 0.15 + fVar20;
    FUN_180293f50(uVar14,&fStackX_18,&fStackX_10,uVar10,0,0xf);
    FUN_1802981f0(uVar14,CONCAT44(fVar3 * 0.85 + fVar20,fVar3 * 0.4 + fVar19),
                  CONCAT44(fVar3 * 0.4,fVar3 * 0.3));
  }
  if ((((*(int *)(_DAT_180c8a9b0 + 0x1b2c) != 0) &&
       (*(int *)(_DAT_180c8a9b0 + 0x1b2c) ==
        *(int *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x144))) &&
      (*(char *)(_DAT_180c8a9b0 + 0x120) != '\0')) &&
     (fVar19 = *(float *)(_DAT_180c8a9b0 + 0x38) * *(float *)(_DAT_180c8a9b0 + 0x38),
     fVar19 < *(float *)(_DAT_180c8a9b0 + 0x474) || fVar19 == *(float *)(_DAT_180c8a9b0 + 0x474))) {
    if (param_3 != 0) {
      lVar6 = *(longlong *)(param_3 + 8);
      lVar12 = param_3;
      while (lVar8 = lVar6, lVar8 != 0) {
        lVar12 = lVar8;
        lVar6 = *(longlong *)(lVar8 + 8);
      }
      if ((*(longlong *)(lVar12 + 0x80) != param_3) || (*(longlong *)(lVar12 + 0x78) != 0)) {
        if ((*(float *)(lVar7 + 0x44c) <= *(float *)(lVar7 + 0x19f8) * 2.2) &&
           (*(float *)(lVar7 + 0x450) <= *(float *)(lVar7 + 0x19f8) * 1.5)) {
          return uVar9;
        }
        lVar5 = *(longlong *)(lVar7 + 0x2df8);
        uStack_98 = 0;
        uStack_b0 = 0;
        uStack_c0 = 0;
        iVar13 = *(int *)(lVar5 + 0x14);
        uStack_b8 = 0;
        uStack_a0 = 0;
        iVar11 = *(int *)(lVar5 + 0x10);
        uStack_a8 = 0xffffffff;
        uStack_a4 = 0x3f000000;
        uStack_c8 = 2;
        lStack_90 = param_3;
        if (iVar11 == iVar13) {
          if (iVar13 != 0) {
            iVar18 = iVar13 + iVar13 / 2;
          }
          iVar13 = iVar11 + 1;
          if (iVar11 + 1 < iVar18) {
            iVar13 = iVar18;
          }
          FUN_18013e6c0(lVar5 + 0x10,iVar13);
          iVar11 = *(int *)(lVar5 + 0x10);
        }
        lVar7 = *(longlong *)(lVar5 + 0x18);
        lVar12 = (longlong)iVar11 * 0x40;
        *(undefined8 *)(lVar12 + lVar7) = CONCAT44(uStack_c4,uStack_c8);
        ((undefined8 *)(lVar12 + lVar7))[1] = uStack_c0;
        puVar1 = (undefined8 *)(lVar12 + 0x10 + lVar7);
        *puVar1 = uStack_b8;
        puVar1[1] = uStack_b0;
        puVar1 = (undefined8 *)(lVar12 + 0x20 + lVar7);
        *puVar1 = CONCAT44(uStack_a4,uStack_a8);
        puVar1[1] = CONCAT71(uStack_9f,uStack_a0);
        puVar1 = (undefined8 *)(lVar12 + 0x30 + lVar7);
        *puVar1 = uStack_98;
        puVar1[1] = lStack_90;
        *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
        return uVar9;
      }
    }
    uVar10 = *(undefined4 *)(lVar7 + 0x1b48);
    uVar4 = *(undefined4 *)(lVar7 + 0x1b4c);
    FUN_1801248f0(lVar5);
    *(undefined4 *)(lVar7 + 0x1b48) = uVar10;
    *(undefined4 *)(lVar7 + 0x1b4c) = uVar4;
  }
  return uVar9;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 FUN_180110026(undefined4 param_1,float *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  longlong in_RAX;
  longlong lVar16;
  int iVar17;
  undefined8 uVar18;
  undefined4 unaff_EBX;
  longlong unaff_RBP;
  undefined8 unaff_RDI;
  float *pfVar19;
  char cVar20;
  char cVar21;
  int iVar22;
  longlong unaff_R15;
  undefined4 unaff_XMM8_Da;
  float fVar23;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  float fVar24;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RDI;
  lVar7 = _DAT_180c8a9b0;
  *(undefined4 *)(in_RAX + -0x68) = unaff_XMM8_Da;
  *(undefined4 *)(in_RAX + -100) = unaff_XMM8_Db;
  *(undefined4 *)(in_RAX + -0x60) = unaff_XMM8_Dc;
  *(undefined4 *)(in_RAX + -0x5c) = unaff_XMM8_Dd;
  *(undefined4 *)(in_RAX + -0x78) = unaff_XMM9_Da;
  *(undefined4 *)(in_RAX + -0x74) = unaff_XMM9_Db;
  *(undefined4 *)(in_RAX + -0x70) = unaff_XMM9_Dc;
  *(undefined4 *)(in_RAX + -0x6c) = unaff_XMM9_Dd;
  *(undefined4 *)(in_RAX + -0x88) = unaff_XMM10_Da;
  *(undefined4 *)(in_RAX + -0x84) = unaff_XMM10_Db;
  *(undefined4 *)(in_RAX + -0x80) = unaff_XMM10_Dc;
  *(undefined4 *)(in_RAX + -0x7c) = unaff_XMM10_Dd;
  lVar5 = *(longlong *)(lVar7 + 0x1af8);
  fStack0000000000000038 =
       *(float *)(lVar7 + 0x165c) + *(float *)(lVar7 + 0x165c) +
       *(float *)(lVar7 + 0x19f8) + *param_2;
  _fStack0000000000000030 = *(undefined8 *)param_2;
  *(float *)(unaff_RBP + -0x7d) =
       *(float *)(lVar7 + 0x19f8) + param_2[1] +
       *(float *)(lVar7 + 0x1660) + *(float *)(lVar7 + 0x1660);
  FUN_180124190(&stack0x00000030,param_1,0);
  uVar12 = FUN_18010f170(&stack0x00000030,unaff_EBX,unaff_RBP + 0x6f,unaff_RBP + 0x77,0);
  pfVar19 = (float *)(unaff_RBP + 0x7f);
  if (unaff_R15 == 0) {
    *(undefined8 *)(unaff_RBP + 0x7f) = 0;
  }
  else {
    fVar23 = *(float *)(lVar7 + 0x1674);
    *(undefined4 *)(unaff_RBP + 0x83) = 0;
    *(float *)(unaff_RBP + 0x7f) = 0.5 - (float)(int)(fVar23 * 0.5);
  }
  cVar21 = *(char *)(unaff_RBP + 0x77);
  cVar20 = *(char *)(unaff_RBP + 0x6f);
  if ((cVar21 == '\0') || (cVar20 == '\0')) {
    lVar16 = (ulonglong)(cVar20 != '\0') + 0x15;
  }
  else {
    lVar16 = 0x17;
  }
  puVar2 = (undefined4 *)(lVar7 + 0x1628 + (lVar16 + 10) * 0x10);
  uVar14 = puVar2[1];
  uVar4 = puVar2[2];
  fVar23 = (float)puVar2[3];
  *(undefined4 *)(unaff_RBP + -0x79) = *puVar2;
  *(undefined4 *)(unaff_RBP + -0x75) = uVar14;
  *(undefined4 *)(unaff_RBP + -0x71) = uVar4;
  *(float *)(unaff_RBP + -0x6d) = fVar23;
  *(float *)(unaff_RBP + -0x6d) = fVar23 * *(float *)(lVar7 + 0x1628);
  uVar13 = func_0x000180121e20(unaff_RBP + -0x79);
  iVar22 = 8;
  fVar24 = fStack0000000000000034;
  fVar23 = fStack0000000000000030;
  *(uint *)(unaff_RBP + 0x6f) = uVar13;
  lVar16 = lVar7;
  if ((cVar20 != '\0') || (cVar21 != '\0')) {
    lVar6 = *(longlong *)(lVar5 + 0x2e8);
    fVar3 = pfVar19[1];
    *(float *)(unaff_RBP + 0x77) =
         (fStack0000000000000038 + fStack0000000000000030) * 0.5 + *pfVar19;
    *(float *)(unaff_RBP + 0x7b) =
         ((*(float *)(unaff_RBP + -0x7d) + fStack0000000000000034) * 0.5 + fVar3) - 0.5;
    if ((uVar13 & 0xff000000) != 0) {
      FUN_180293860(lVar6,unaff_RBP + 0x77,*(float *)(lVar7 + 0x19f8) * 0.5 + 1.0,0,0x40b2b8c3);
      FUN_180293190(lVar6,*(undefined8 *)(lVar6 + 0x88),*(undefined4 *)(lVar6 + 0x80),
                    *(undefined4 *)(unaff_RBP + 0x6f));
      lVar16 = _DAT_180c8a9b0;
      *(undefined4 *)(lVar6 + 0x80) = 0;
    }
  }
  if (unaff_R15 == 0) {
    uVar18 = 3;
    if (*(char *)(lVar5 + 0xb2) != '\0') {
      uVar18 = 1;
    }
    FUN_180122c80(CONCAT44(fVar24 + *(float *)(lVar7 + 0x1660),fVar23 + *(float *)(lVar7 + 0x165c)),
                  uVar18,0x3f800000);
  }
  else {
    uVar14 = *(undefined4 *)(lVar16 + 0x16cc);
    uVar4 = *(undefined4 *)(lVar16 + 0x16d0);
    fVar3 = *(float *)(lVar16 + 0x16d4);
    *(undefined4 *)(unaff_RBP + -0x79) = *(undefined4 *)(lVar16 + 0x16c8);
    *(undefined4 *)(unaff_RBP + -0x75) = uVar14;
    *(undefined4 *)(unaff_RBP + -0x71) = uVar4;
    *(float *)(unaff_RBP + -0x6d) = fVar3;
    *(float *)(unaff_RBP + -0x6d) = fVar3 * *(float *)(lVar16 + 0x1628);
    uVar14 = func_0x000180121e20(unaff_RBP + -0x79);
    fVar3 = *(float *)(lVar7 + 0x19f8);
    fVar23 = fVar23 + *(float *)(lVar7 + 0x165c);
    fVar24 = fVar24 + *(float *)(lVar7 + 0x1660);
    uVar18 = *(undefined8 *)(lVar5 + 0x2e8);
    *(float *)(unaff_RBP + 0x6f) = fVar3 * 0.7 + fVar23;
    *(float *)(unaff_RBP + 0x77) = fVar3 * 0.1 + fVar23;
    *(float *)(unaff_RBP + 0x73) = fVar3 * 0.3 + fVar24;
    *(float *)(unaff_RBP + 0x7b) = fVar3 * 0.15 + fVar24;
    FUN_180293f50(uVar18,unaff_RBP + 0x77,unaff_RBP + 0x6f,uVar14,0);
    FUN_1802981f0(uVar18,CONCAT44(fVar3 * 0.85 + fVar24,fVar3 * 0.4 + fVar23),
                  CONCAT44(fVar3 * 0.4,fVar3 * 0.3));
  }
  if ((((*(int *)(_DAT_180c8a9b0 + 0x1b2c) != 0) &&
       (*(int *)(_DAT_180c8a9b0 + 0x1b2c) ==
        *(int *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x144))) &&
      (*(char *)(_DAT_180c8a9b0 + 0x120) != '\0')) &&
     (fVar23 = *(float *)(_DAT_180c8a9b0 + 0x38) * *(float *)(_DAT_180c8a9b0 + 0x38),
     fVar23 < *(float *)(_DAT_180c8a9b0 + 0x474) || fVar23 == *(float *)(_DAT_180c8a9b0 + 0x474))) {
    if (unaff_R15 != 0) {
      lVar6 = *(longlong *)(unaff_R15 + 8);
      lVar16 = unaff_R15;
      while (lVar11 = lVar6, lVar11 != 0) {
        lVar16 = lVar11;
        lVar6 = *(longlong *)(lVar11 + 8);
      }
      if ((*(longlong *)(lVar16 + 0x80) != unaff_R15) || (*(longlong *)(lVar16 + 0x78) != 0)) {
        if ((*(float *)(lVar7 + 0x44c) <= *(float *)(lVar7 + 0x19f8) * 2.2) &&
           (*(float *)(lVar7 + 0x450) <= *(float *)(lVar7 + 0x19f8) * 1.5)) {
          return uVar12;
        }
        lVar5 = *(longlong *)(lVar7 + 0x2df8);
        *(undefined8 *)(unaff_RBP + -0x39) = 0;
        *(undefined8 *)(unaff_RBP + -0x51) = 0;
        *(undefined8 *)(unaff_RBP + -0x61) = 0;
        iVar17 = *(int *)(lVar5 + 0x14);
        *(undefined8 *)(unaff_RBP + -0x59) = 0;
        *(undefined1 *)(unaff_RBP + -0x41) = 0;
        iVar15 = *(int *)(lVar5 + 0x10);
        *(undefined4 *)(unaff_RBP + -0x49) = 0xffffffff;
        *(undefined4 *)(unaff_RBP + -0x45) = 0x3f000000;
        *(undefined4 *)(unaff_RBP + -0x69) = 2;
        *(longlong *)(unaff_RBP + -0x31) = unaff_R15;
        if (iVar15 == iVar17) {
          if (iVar17 != 0) {
            iVar22 = iVar17 + iVar17 / 2;
          }
          iVar17 = iVar15 + 1;
          if (iVar15 + 1 < iVar22) {
            iVar17 = iVar22;
          }
          FUN_18013e6c0(lVar5 + 0x10,iVar17);
          iVar15 = *(int *)(lVar5 + 0x10);
        }
        uVar18 = *(undefined8 *)(unaff_RBP + -0x61);
        uVar8 = *(undefined8 *)(unaff_RBP + -0x59);
        uVar9 = *(undefined8 *)(unaff_RBP + -0x51);
        lVar7 = *(longlong *)(lVar5 + 0x18);
        lVar16 = (longlong)iVar15 * 0x40;
        *(undefined8 *)(lVar16 + lVar7) = *(undefined8 *)(unaff_RBP + -0x69);
        ((undefined8 *)(lVar16 + lVar7))[1] = uVar18;
        uVar18 = *(undefined8 *)(unaff_RBP + -0x49);
        uVar10 = *(undefined8 *)(unaff_RBP + -0x41);
        puVar1 = (undefined8 *)(lVar16 + 0x10 + lVar7);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        uVar8 = *(undefined8 *)(unaff_RBP + -0x39);
        uVar9 = *(undefined8 *)(unaff_RBP + -0x31);
        puVar1 = (undefined8 *)(lVar16 + 0x20 + lVar7);
        *puVar1 = uVar18;
        puVar1[1] = uVar10;
        puVar1 = (undefined8 *)(lVar16 + 0x30 + lVar7);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
        return uVar12;
      }
    }
    uVar14 = *(undefined4 *)(lVar7 + 0x1b48);
    uVar4 = *(undefined4 *)(lVar7 + 0x1b4c);
    FUN_1801248f0(lVar5);
    *(undefined4 *)(lVar7 + 0x1b48) = uVar14;
    *(undefined4 *)(lVar7 + 0x1b4c) = uVar4;
  }
  return uVar12;
}



undefined1 FUN_1801103b2(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int unaff_R12D;
  undefined1 unaff_R14B;
  longlong unaff_R15;
  float fVar13;
  
  if (((param_2 == *(int *)(*(longlong *)(param_1 + 0x1af8) + 0x144)) &&
      (*(char *)(param_1 + 0x120) != '\0')) &&
     (fVar13 = *(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38),
     fVar13 < *(float *)(param_1 + 0x474) || fVar13 == *(float *)(param_1 + 0x474))) {
    if (unaff_R15 != 0) {
      lVar5 = *(longlong *)(unaff_R15 + 8);
      lVar4 = unaff_R15;
      while (lVar12 = lVar5, lVar12 != 0) {
        lVar4 = lVar12;
        lVar5 = *(longlong *)(lVar12 + 8);
      }
      if ((*(longlong *)(lVar4 + 0x80) != unaff_R15) || (*(longlong *)(lVar4 + 0x78) != 0)) {
        if ((*(float *)(unaff_RSI + 0x44c) <= *(float *)(unaff_RSI + 0x19f8) * 2.2) &&
           (*(float *)(unaff_RSI + 0x450) <= *(float *)(unaff_RSI + 0x19f8) * 1.5)) {
          return unaff_R14B;
        }
        lVar4 = *(longlong *)(unaff_RSI + 0x2df8);
        *(undefined8 *)(unaff_RBP + -0x39) = 0;
        *(undefined8 *)(unaff_RBP + -0x51) = 0;
        *(undefined8 *)(unaff_RBP + -0x61) = 0;
        iVar11 = *(int *)(lVar4 + 0x14);
        *(undefined8 *)(unaff_RBP + -0x59) = 0;
        *(undefined1 *)(unaff_RBP + -0x41) = 0;
        iVar10 = *(int *)(lVar4 + 0x10);
        *(undefined4 *)(unaff_RBP + -0x49) = 0xffffffff;
        *(undefined4 *)(unaff_RBP + -0x45) = 0x3f000000;
        *(undefined4 *)(unaff_RBP + -0x69) = 2;
        *(longlong *)(unaff_RBP + -0x31) = unaff_R15;
        if (iVar10 == iVar11) {
          if (iVar11 != 0) {
            unaff_R12D = iVar11 + iVar11 / 2;
          }
          iVar11 = iVar10 + 1;
          if (iVar10 + 1 < unaff_R12D) {
            iVar11 = unaff_R12D;
          }
          FUN_18013e6c0(lVar4 + 0x10,iVar11);
          iVar10 = *(int *)(lVar4 + 0x10);
        }
        uVar6 = *(undefined8 *)(unaff_RBP + -0x61);
        uVar7 = *(undefined8 *)(unaff_RBP + -0x59);
        uVar8 = *(undefined8 *)(unaff_RBP + -0x51);
        lVar5 = *(longlong *)(lVar4 + 0x18);
        lVar12 = (longlong)iVar10 * 0x40;
        *(undefined8 *)(lVar12 + lVar5) = *(undefined8 *)(unaff_RBP + -0x69);
        ((undefined8 *)(lVar12 + lVar5))[1] = uVar6;
        uVar6 = *(undefined8 *)(unaff_RBP + -0x49);
        uVar9 = *(undefined8 *)(unaff_RBP + -0x41);
        puVar1 = (undefined8 *)(lVar12 + 0x10 + lVar5);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        uVar7 = *(undefined8 *)(unaff_RBP + -0x39);
        uVar8 = *(undefined8 *)(unaff_RBP + -0x31);
        puVar1 = (undefined8 *)(lVar12 + 0x20 + lVar5);
        *puVar1 = uVar6;
        puVar1[1] = uVar9;
        puVar1 = (undefined8 *)(lVar12 + 0x30 + lVar5);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
        return unaff_R14B;
      }
    }
    uVar2 = *(undefined4 *)(unaff_RSI + 0x1b48);
    uVar3 = *(undefined4 *)(unaff_RSI + 0x1b4c);
    FUN_1801248f0();
    *(undefined4 *)(unaff_RSI + 0x1b48) = uVar2;
    *(undefined4 *)(unaff_RSI + 0x1b4c) = uVar3;
  }
  return unaff_R14B;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





