#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part392.c - 10 个函数

// 函数: void FUN_18087b819(void)
void FUN_18087b819(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087b82f(void)

{
  longlong in_RAX;
  char unaff_SIL;
  
  if (unaff_SIL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087b860(longlong param_1,uint *param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(lVar5 + 0x770);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x76c) != 0) && (*(int *)(lVar5 + 0x750) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(lVar5 + 0x748) +
                      (longlong)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x750) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar5 + 0x758));
      if ((*plVar3 == *(longlong *)param_2) && (plVar3[1] == *(longlong *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087b916;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087b916:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}



longlong FUN_18087b883(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  uint *unaff_RBX;
  longlong lVar5;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x770);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x76c) != 0) && (*(int *)(unaff_RDI + 0x750) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x748) +
                      (longlong)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x750) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RDI + 0x758));
      if ((*plVar3 == *(longlong *)unaff_RBX) && (plVar3[1] == *(longlong *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087b916;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087b916:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087b920(void)
void FUN_18087b920(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087b93b(void)

{
  longlong in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087b970(longlong param_1,uint *param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(lVar5 + 0x620);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x61c) != 0) && (*(int *)(lVar5 + 0x600) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(lVar5 + 0x5f8) +
                      (longlong)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x600) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar5 + 0x608));
      if ((*plVar3 == *(longlong *)param_2) && (plVar3[1] == *(longlong *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087ba26;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087ba26:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}



longlong FUN_18087b993(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  uint *unaff_RBX;
  longlong lVar5;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x620);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x61c) != 0) && (*(int *)(unaff_RDI + 0x600) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x5f8) +
                      (longlong)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x600) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RDI + 0x608));
      if ((*plVar3 == *(longlong *)unaff_RBX) && (plVar3[1] == *(longlong *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087ba26;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087ba26:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087ba30(void)
void FUN_18087ba30(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087ba4b(void)

{
  longlong in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087ba80(longlong param_1,uint *param_2,char param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  
  lVar11 = *(longlong *)(param_1 + 8);
  if (lVar11 == 0) {
    return 0;
  }
  uVar2 = *param_2;
  uVar3 = param_2[1];
  lVar7 = *(longlong *)param_2;
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  lVar8 = *(longlong *)(param_2 + 2);
  lVar1 = *(longlong *)(lVar11 + 0x410);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(lVar11 + 0x40c) != 0) && (*(int *)(lVar11 + 0x3f0) != 0)) {
    iVar10 = *(int *)(*(longlong *)(lVar11 + 1000) +
                     (longlong)
                     (int)((uVar3 ^ uVar2 ^ uVar4 ^ uVar5) & *(int *)(lVar11 + 0x3f0) - 1U) * 4);
    if (iVar10 != -1) {
      do {
        plVar9 = (longlong *)((longlong)iVar10 * 0x20 + *(longlong *)(lVar11 + 0x3f8));
        if ((*plVar9 == lVar7) && (plVar9[1] == lVar8)) {
          lVar11 = plVar9[3];
          goto LAB_18087bb3f;
        }
        iVar10 = (int)plVar9[2];
      } while (iVar10 != -1);
    }
  }
  lVar11 = 0;
LAB_18087bb3f:
  if (bVar6) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar11;
}



longlong FUN_18087ba9a(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  longlong unaff_RBX;
  longlong lVar5;
  longlong in_XMM0_Qb;
  uint uStackX_24;
  longlong lStack0000000000000028;
  
  lVar1 = *(longlong *)(unaff_RBX + 0x410);
  lStack0000000000000028 = in_XMM0_Qb;
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(unaff_RBX + 0x40c) != 0) && (*(int *)(unaff_RBX + 0x3f0) != 0)) {
    uStackX_24 = (uint)((ulonglong)param_1 >> 0x20);
    iVar4 = *(int *)(*(longlong *)(unaff_RBX + 1000) +
                    (longlong)
                    (int)((uStackX_24 ^ (uint)param_1 ^ (uint)lStack0000000000000028 ^
                          lStack0000000000000028._4_4_) & *(int *)(unaff_RBX + 0x3f0) - 1U) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RBX + 0x3f8));
        if ((*plVar3 == param_1) && (plVar3[1] == lStack0000000000000028)) {
          lVar5 = plVar3[3];
          goto LAB_18087bb3f;
        }
        iVar4 = (int)plVar3[2];
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_18087bb3f:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087bb49(void)
void FUN_18087bb49(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087bb5f(void)

{
  longlong in_RAX;
  char unaff_SIL;
  
  if (unaff_SIL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087bbb0(longlong param_1,uint *param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(lVar5 + 0x830);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x82c) != 0) && (*(int *)(lVar5 + 0x810) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(lVar5 + 0x808) +
                      (longlong)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x810) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar5 + 0x818));
      if ((*plVar3 == *(longlong *)param_2) && (plVar3[1] == *(longlong *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087bc66;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087bc66:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}



longlong FUN_18087bbd3(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  uint *unaff_RBX;
  longlong lVar5;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x830);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x82c) != 0) && (*(int *)(unaff_RDI + 0x810) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x808) +
                      (longlong)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x810) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RDI + 0x818));
      if ((*plVar3 == *(longlong *)unaff_RBX) && (plVar3[1] == *(longlong *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087bc66;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087bc66:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087bc70(void)
void FUN_18087bc70(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087bc8b(void)

{
  longlong in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087bca0(longlong param_1,uint *param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(lVar5 + 0x800);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x7fc) != 0) && (*(int *)(lVar5 + 0x7e0) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(lVar5 + 0x7d8) +
                      (longlong)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x7e0) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar5 + 0x7e8));
      if ((*plVar3 == *(longlong *)param_2) && (plVar3[1] == *(longlong *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087bd56;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087bd56:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}



longlong FUN_18087bcc3(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  uint *unaff_RBX;
  longlong lVar5;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x800);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x7fc) != 0) && (*(int *)(unaff_RDI + 0x7e0) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x7d8) +
                      (longlong)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x7e0) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RDI + 0x7e8));
      if ((*plVar3 == *(longlong *)unaff_RBX) && (plVar3[1] == *(longlong *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087bd56;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087bd56:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087bd60(void)
void FUN_18087bd60(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087bd7b(void)

{
  longlong in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087bdd0(longlong param_1,uint *param_2,char param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  
  lVar11 = *(longlong *)(param_1 + 8);
  if (lVar11 == 0) {
    return 0;
  }
  uVar2 = *param_2;
  uVar3 = param_2[1];
  lVar7 = *(longlong *)param_2;
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  lVar8 = *(longlong *)(param_2 + 2);
  lVar1 = *(longlong *)(lVar11 + 0x470);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(lVar11 + 0x46c) != 0) && (*(int *)(lVar11 + 0x450) != 0)) {
    iVar10 = *(int *)(*(longlong *)(lVar11 + 0x448) +
                     (longlong)
                     (int)((uVar3 ^ uVar2 ^ uVar4 ^ uVar5) & *(int *)(lVar11 + 0x450) - 1U) * 4);
    if (iVar10 != -1) {
      do {
        plVar9 = (longlong *)((longlong)iVar10 * 0x20 + *(longlong *)(lVar11 + 0x458));
        if ((*plVar9 == lVar7) && (plVar9[1] == lVar8)) {
          lVar11 = plVar9[3];
          goto LAB_18087be8f;
        }
        iVar10 = (int)plVar9[2];
      } while (iVar10 != -1);
    }
  }
  lVar11 = 0;
LAB_18087be8f:
  if (bVar6) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar11;
}



longlong FUN_18087bdea(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  longlong unaff_RBX;
  longlong lVar5;
  longlong in_XMM0_Qb;
  uint uStackX_24;
  longlong lStack0000000000000028;
  
  lVar1 = *(longlong *)(unaff_RBX + 0x470);
  lStack0000000000000028 = in_XMM0_Qb;
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(unaff_RBX + 0x46c) != 0) && (*(int *)(unaff_RBX + 0x450) != 0)) {
    uStackX_24 = (uint)((ulonglong)param_1 >> 0x20);
    iVar4 = *(int *)(*(longlong *)(unaff_RBX + 0x448) +
                    (longlong)
                    (int)((uStackX_24 ^ (uint)param_1 ^ (uint)lStack0000000000000028 ^
                          lStack0000000000000028._4_4_) & *(int *)(unaff_RBX + 0x450) - 1U) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RBX + 0x458));
        if ((*plVar3 == param_1) && (plVar3[1] == lStack0000000000000028)) {
          lVar5 = plVar3[3];
          goto LAB_18087be8f;
        }
        iVar4 = (int)plVar3[2];
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_18087be8f:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087be99(void)
void FUN_18087be99(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087beaf(void)

{
  longlong in_RAX;
  char unaff_SIL;
  
  if (unaff_SIL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087bee0(longlong param_1,uint *param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(lVar5 + 0x560);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x55c) != 0) && (*(int *)(lVar5 + 0x540) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(lVar5 + 0x538) +
                      (longlong)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x540) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar5 + 0x548));
      if ((*plVar3 == *(longlong *)param_2) && (plVar3[1] == *(longlong *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087bf96;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087bf96:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}



longlong FUN_18087bf03(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  uint *unaff_RBX;
  longlong lVar5;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x560);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x55c) != 0) && (*(int *)(unaff_RDI + 0x540) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x538) +
                      (longlong)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x540) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RDI + 0x548));
      if ((*plVar3 == *(longlong *)unaff_RBX) && (plVar3[1] == *(longlong *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087bf96;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087bf96:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087bfa0(void)
void FUN_18087bfa0(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087bfbb(void)

{
  longlong in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087bff0(longlong param_1,uint *param_2,char param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  
  lVar11 = *(longlong *)(param_1 + 8);
  if (lVar11 == 0) {
    return 0;
  }
  uVar2 = *param_2;
  uVar3 = param_2[1];
  lVar7 = *(longlong *)param_2;
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  lVar8 = *(longlong *)(param_2 + 2);
  lVar1 = *(longlong *)(lVar11 + 0x3b0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(lVar11 + 0x3ac) != 0) && (*(int *)(lVar11 + 0x390) != 0)) {
    iVar10 = *(int *)(*(longlong *)(lVar11 + 0x388) +
                     (longlong)
                     (int)((uVar3 ^ uVar2 ^ uVar4 ^ uVar5) & *(int *)(lVar11 + 0x390) - 1U) * 4);
    if (iVar10 != -1) {
      do {
        plVar9 = (longlong *)((longlong)iVar10 * 0x20 + *(longlong *)(lVar11 + 0x398));
        if ((*plVar9 == lVar7) && (plVar9[1] == lVar8)) {
          lVar11 = plVar9[3];
          goto LAB_18087c0af;
        }
        iVar10 = (int)plVar9[2];
      } while (iVar10 != -1);
    }
  }
  lVar11 = 0;
LAB_18087c0af:
  if (bVar6) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar11;
}



longlong FUN_18087c00a(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  longlong unaff_RBX;
  longlong lVar5;
  longlong in_XMM0_Qb;
  uint uStackX_24;
  longlong lStack0000000000000028;
  
  lVar1 = *(longlong *)(unaff_RBX + 0x3b0);
  lStack0000000000000028 = in_XMM0_Qb;
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(unaff_RBX + 0x3ac) != 0) && (*(int *)(unaff_RBX + 0x390) != 0)) {
    uStackX_24 = (uint)((ulonglong)param_1 >> 0x20);
    iVar4 = *(int *)(*(longlong *)(unaff_RBX + 0x388) +
                    (longlong)
                    (int)((uStackX_24 ^ (uint)param_1 ^ (uint)lStack0000000000000028 ^
                          lStack0000000000000028._4_4_) & *(int *)(unaff_RBX + 0x390) - 1U) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RBX + 0x398));
        if ((*plVar3 == param_1) && (plVar3[1] == lStack0000000000000028)) {
          lVar5 = plVar3[3];
          goto LAB_18087c0af;
        }
        iVar4 = (int)plVar3[2];
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_18087c0af:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087c0b9(void)
void FUN_18087c0b9(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087c0cf(void)

{
  longlong in_RAX;
  char unaff_SIL;
  
  if (unaff_SIL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087c140(longlong param_1,uint *param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(lVar5 + 0x650);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x64c) != 0) && (*(int *)(lVar5 + 0x630) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(lVar5 + 0x628) +
                      (longlong)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x630) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar5 + 0x638));
      if ((*plVar3 == *(longlong *)param_2) && (plVar3[1] == *(longlong *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087c1f6;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087c1f6:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}



longlong FUN_18087c163(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  uint *unaff_RBX;
  longlong lVar5;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x650);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x64c) != 0) && (*(int *)(unaff_RDI + 0x630) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x628) +
                      (longlong)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x630) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RDI + 0x638));
      if ((*plVar3 == *(longlong *)unaff_RBX) && (plVar3[1] == *(longlong *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087c1f6;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087c1f6:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087c200(void)
void FUN_18087c200(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087c21b(void)

{
  longlong in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087c250(longlong param_1,uint *param_2,char param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  
  lVar11 = *(longlong *)(param_1 + 8);
  if (lVar11 == 0) {
    return 0;
  }
  uVar2 = *param_2;
  uVar3 = param_2[1];
  lVar7 = *(longlong *)param_2;
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  lVar8 = *(longlong *)(param_2 + 2);
  lVar1 = *(longlong *)(lVar11 + 0x4a0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(lVar11 + 0x49c) != 0) && (*(int *)(lVar11 + 0x480) != 0)) {
    iVar10 = *(int *)(*(longlong *)(lVar11 + 0x478) +
                     (longlong)
                     (int)((uVar3 ^ uVar2 ^ uVar4 ^ uVar5) & *(int *)(lVar11 + 0x480) - 1U) * 4);
    if (iVar10 != -1) {
      do {
        plVar9 = (longlong *)((longlong)iVar10 * 0x20 + *(longlong *)(lVar11 + 0x488));
        if ((*plVar9 == lVar7) && (plVar9[1] == lVar8)) {
          lVar11 = plVar9[3];
          goto LAB_18087c30f;
        }
        iVar10 = (int)plVar9[2];
      } while (iVar10 != -1);
    }
  }
  lVar11 = 0;
LAB_18087c30f:
  if (bVar6) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar11;
}



longlong FUN_18087c26a(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  longlong unaff_RBX;
  longlong lVar5;
  longlong in_XMM0_Qb;
  uint uStackX_24;
  longlong lStack0000000000000028;
  
  lVar1 = *(longlong *)(unaff_RBX + 0x4a0);
  lStack0000000000000028 = in_XMM0_Qb;
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(unaff_RBX + 0x49c) != 0) && (*(int *)(unaff_RBX + 0x480) != 0)) {
    uStackX_24 = (uint)((ulonglong)param_1 >> 0x20);
    iVar4 = *(int *)(*(longlong *)(unaff_RBX + 0x478) +
                    (longlong)
                    (int)((uStackX_24 ^ (uint)param_1 ^ (uint)lStack0000000000000028 ^
                          lStack0000000000000028._4_4_) & *(int *)(unaff_RBX + 0x480) - 1U) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RBX + 0x488));
        if ((*plVar3 == param_1) && (plVar3[1] == lStack0000000000000028)) {
          lVar5 = plVar3[3];
          goto LAB_18087c30f;
        }
        iVar4 = (int)plVar3[2];
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_18087c30f:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





