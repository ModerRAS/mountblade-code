#include "TaleWorlds.Native.Split.h"

// 05_networking_part072.c - 10 个函数

// 函数: void FUN_18087ad70(void)
void FUN_18087ad70(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087ad8b(void)

{
  longlong in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087adc0(longlong param_1,uint *param_2,char param_3)

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
  lVar1 = *(longlong *)(lVar5 + 0x740);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x73c) != 0) && (*(int *)(lVar5 + 0x720) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(lVar5 + 0x718) +
                      (longlong)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x720) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar5 + 0x728));
      if ((*plVar3 == *(longlong *)param_2) && (plVar3[1] == *(longlong *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087ae76;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087ae76:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}



longlong FUN_18087ade3(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  uint *unaff_RBX;
  longlong lVar5;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x740);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x73c) != 0) && (*(int *)(unaff_RDI + 0x720) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x718) +
                      (longlong)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x720) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RDI + 0x728));
      if ((*plVar3 == *(longlong *)unaff_RBX) && (plVar3[1] == *(longlong *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087ae76;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087ae76:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087ae80(void)
void FUN_18087ae80(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087ae9b(void)

{
  longlong in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087aed0(longlong param_1,uint *param_2,char param_3)

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
  lVar1 = *(longlong *)(lVar5 + 0x860);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x85c) != 0) && (*(int *)(lVar5 + 0x840) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(lVar5 + 0x838) +
                      (longlong)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x840) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar5 + 0x848));
      if ((*plVar3 == *(longlong *)param_2) && (plVar3[1] == *(longlong *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087af86;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087af86:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}



longlong FUN_18087aef3(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  uint *unaff_RBX;
  longlong lVar5;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x860);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x85c) != 0) && (*(int *)(unaff_RDI + 0x840) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x838) +
                      (longlong)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x840) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RDI + 0x848));
      if ((*plVar3 == *(longlong *)unaff_RBX) && (plVar3[1] == *(longlong *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087af86;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087af86:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087af90(void)
void FUN_18087af90(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087afab(void)

{
  longlong in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087afe0(longlong param_1,uint *param_2,char param_3)

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
  lVar1 = *(longlong *)(lVar5 + 0x590);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x58c) != 0) && (*(int *)(lVar5 + 0x570) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(lVar5 + 0x568) +
                      (longlong)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x570) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar5 + 0x578));
      if ((*plVar3 == *(longlong *)param_2) && (plVar3[1] == *(longlong *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087b096;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087b096:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}



longlong FUN_18087b003(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  uint *unaff_RBX;
  longlong lVar5;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x590);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x58c) != 0) && (*(int *)(unaff_RDI + 0x570) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x568) +
                      (longlong)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x570) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RDI + 0x578));
      if ((*plVar3 == *(longlong *)unaff_RBX) && (plVar3[1] == *(longlong *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087b096;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087b096:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087b0a0(void)
void FUN_18087b0a0(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087b0bb(void)

{
  longlong in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087b110(longlong param_1,uint *param_2,char param_3)

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
  lVar1 = *(longlong *)(lVar5 + 0x680);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x67c) != 0) && (*(int *)(lVar5 + 0x660) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(lVar5 + 0x658) +
                      (longlong)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x660) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar5 + 0x668));
      if ((*plVar3 == *(longlong *)param_2) && (plVar3[1] == *(longlong *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087b1c6;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087b1c6:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}



longlong FUN_18087b133(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  uint *unaff_RBX;
  longlong lVar5;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x680);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x67c) != 0) && (*(int *)(unaff_RDI + 0x660) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x658) +
                      (longlong)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x660) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RDI + 0x668));
      if ((*plVar3 == *(longlong *)unaff_RBX) && (plVar3[1] == *(longlong *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087b1c6;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087b1c6:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087b1d0(void)
void FUN_18087b1d0(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087b1eb(void)

{
  longlong in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087b200(longlong param_1,uint *param_2,char param_3)

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
  lVar1 = *(longlong *)(lVar5 + 0x7a0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x79c) != 0) && (*(int *)(lVar5 + 0x780) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(lVar5 + 0x778) +
                      (longlong)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x780) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar5 + 0x788));
      if ((*plVar3 == *(longlong *)param_2) && (plVar3[1] == *(longlong *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087b2b6;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087b2b6:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}



longlong FUN_18087b223(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  uint *unaff_RBX;
  longlong lVar5;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x7a0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x79c) != 0) && (*(int *)(unaff_RDI + 0x780) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x778) +
                      (longlong)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x780) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RDI + 0x788));
      if ((*plVar3 == *(longlong *)unaff_RBX) && (plVar3[1] == *(longlong *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087b2b6;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087b2b6:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087b2c0(void)
void FUN_18087b2c0(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087b2db(void)

{
  longlong in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087b310(longlong param_1,uint *param_2,char param_3)

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
  lVar1 = *(longlong *)(lVar11 + 0x380);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(lVar11 + 0x37c) != 0) && (*(int *)(lVar11 + 0x360) != 0)) {
    iVar10 = *(int *)(*(longlong *)(lVar11 + 0x358) +
                     (longlong)
                     (int)((uVar3 ^ uVar2 ^ uVar4 ^ uVar5) & *(int *)(lVar11 + 0x360) - 1U) * 4);
    if (iVar10 != -1) {
      do {
        plVar9 = (longlong *)((longlong)iVar10 * 0x20 + *(longlong *)(lVar11 + 0x368));
        if ((*plVar9 == lVar7) && (plVar9[1] == lVar8)) {
          lVar11 = plVar9[3];
          goto LAB_18087b3cf;
        }
        iVar10 = (int)plVar9[2];
      } while (iVar10 != -1);
    }
  }
  lVar11 = 0;
LAB_18087b3cf:
  if (bVar6) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar11;
}



longlong FUN_18087b32a(longlong param_1,undefined8 param_2,char param_3)

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
  
  lVar1 = *(longlong *)(unaff_RBX + 0x380);
  lStack0000000000000028 = in_XMM0_Qb;
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(unaff_RBX + 0x37c) != 0) && (*(int *)(unaff_RBX + 0x360) != 0)) {
    uStackX_24 = (uint)((ulonglong)param_1 >> 0x20);
    iVar4 = *(int *)(*(longlong *)(unaff_RBX + 0x358) +
                    (longlong)
                    (int)((uStackX_24 ^ (uint)param_1 ^ (uint)lStack0000000000000028 ^
                          lStack0000000000000028._4_4_) & *(int *)(unaff_RBX + 0x360) - 1U) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RBX + 0x368));
        if ((*plVar3 == param_1) && (plVar3[1] == lStack0000000000000028)) {
          lVar5 = plVar3[3];
          goto LAB_18087b3cf;
        }
        iVar4 = (int)plVar3[2];
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_18087b3cf:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087b3d9(void)
void FUN_18087b3d9(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087b3ef(void)

{
  longlong in_RAX;
  char unaff_SIL;
  
  if (unaff_SIL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087b420(longlong param_1,uint *param_2,char param_3)

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
  lVar1 = *(longlong *)(lVar11 + 0x350);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(lVar11 + 0x34c) != 0) && (*(int *)(lVar11 + 0x330) != 0)) {
    iVar10 = *(int *)(*(longlong *)(lVar11 + 0x328) +
                     (longlong)
                     (int)((uVar3 ^ uVar2 ^ uVar4 ^ uVar5) & *(int *)(lVar11 + 0x330) - 1U) * 4);
    if (iVar10 != -1) {
      do {
        plVar9 = (longlong *)((longlong)iVar10 * 0x20 + *(longlong *)(lVar11 + 0x338));
        if ((*plVar9 == lVar7) && (plVar9[1] == lVar8)) {
          lVar11 = plVar9[3];
          goto LAB_18087b4df;
        }
        iVar10 = (int)plVar9[2];
      } while (iVar10 != -1);
    }
  }
  lVar11 = 0;
LAB_18087b4df:
  if (bVar6) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar11;
}



longlong FUN_18087b43a(longlong param_1,undefined8 param_2,char param_3)

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
  
  lVar1 = *(longlong *)(unaff_RBX + 0x350);
  lStack0000000000000028 = in_XMM0_Qb;
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(unaff_RBX + 0x34c) != 0) && (*(int *)(unaff_RBX + 0x330) != 0)) {
    uStackX_24 = (uint)((ulonglong)param_1 >> 0x20);
    iVar4 = *(int *)(*(longlong *)(unaff_RBX + 0x328) +
                    (longlong)
                    (int)((uStackX_24 ^ (uint)param_1 ^ (uint)lStack0000000000000028 ^
                          lStack0000000000000028._4_4_) & *(int *)(unaff_RBX + 0x330) - 1U) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RBX + 0x338));
        if ((*plVar3 == param_1) && (plVar3[1] == lStack0000000000000028)) {
          lVar5 = plVar3[3];
          goto LAB_18087b4df;
        }
        iVar4 = (int)plVar3[2];
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_18087b4df:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087b4e9(void)
void FUN_18087b4e9(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087b4ff(void)

{
  longlong in_RAX;
  char unaff_SIL;
  
  if (unaff_SIL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087b530(longlong param_1,uint *param_2,char param_3)

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
  lVar1 = *(longlong *)(lVar5 + 0x6e0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x6dc) != 0) && (*(int *)(lVar5 + 0x6c0) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(lVar5 + 0x6b8) +
                      (longlong)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x6c0) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar5 + 0x6c8));
      if ((*plVar3 == *(longlong *)param_2) && (plVar3[1] == *(longlong *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087b5e6;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087b5e6:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}



longlong FUN_18087b553(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  uint *unaff_RBX;
  longlong lVar5;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x6e0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x6dc) != 0) && (*(int *)(unaff_RDI + 0x6c0) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x6b8) +
                      (longlong)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x6c0) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RDI + 0x6c8));
      if ((*plVar3 == *(longlong *)unaff_RBX) && (plVar3[1] == *(longlong *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087b5e6;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087b5e6:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087b5f0(void)
void FUN_18087b5f0(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087b60b(void)

{
  longlong in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087b640(longlong param_1,uint *param_2,char param_3)

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
  lVar1 = *(longlong *)(lVar5 + 0x890);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x88c) != 0) && (*(int *)(lVar5 + 0x870) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(lVar5 + 0x868) +
                      (longlong)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x870) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar5 + 0x878));
      if ((*plVar3 == *(longlong *)param_2) && (plVar3[1] == *(longlong *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087b6f6;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087b6f6:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}



longlong FUN_18087b663(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  uint *unaff_RBX;
  longlong lVar5;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x890);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x88c) != 0) && (*(int *)(unaff_RDI + 0x870) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x868) +
                      (longlong)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x870) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RDI + 0x878));
      if ((*plVar3 == *(longlong *)unaff_RBX) && (plVar3[1] == *(longlong *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087b6f6;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087b6f6:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087b700(void)
void FUN_18087b700(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087b71b(void)

{
  longlong in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087b750(longlong param_1,uint *param_2,char param_3)

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
  lVar1 = *(longlong *)(lVar11 + 0x3e0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(lVar11 + 0x3dc) != 0) && (*(int *)(lVar11 + 0x3c0) != 0)) {
    iVar10 = *(int *)(*(longlong *)(lVar11 + 0x3b8) +
                     (longlong)
                     (int)((uVar3 ^ uVar2 ^ uVar4 ^ uVar5) & *(int *)(lVar11 + 0x3c0) - 1U) * 4);
    if (iVar10 != -1) {
      do {
        plVar9 = (longlong *)((longlong)iVar10 * 0x20 + *(longlong *)(lVar11 + 0x3c8));
        if ((*plVar9 == lVar7) && (plVar9[1] == lVar8)) {
          lVar11 = plVar9[3];
          goto LAB_18087b80f;
        }
        iVar10 = (int)plVar9[2];
      } while (iVar10 != -1);
    }
  }
  lVar11 = 0;
LAB_18087b80f:
  if (bVar6) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar11;
}



longlong FUN_18087b76a(longlong param_1,undefined8 param_2,char param_3)

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
  
  lVar1 = *(longlong *)(unaff_RBX + 0x3e0);
  lStack0000000000000028 = in_XMM0_Qb;
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(unaff_RBX + 0x3dc) != 0) && (*(int *)(unaff_RBX + 0x3c0) != 0)) {
    uStackX_24 = (uint)((ulonglong)param_1 >> 0x20);
    iVar4 = *(int *)(*(longlong *)(unaff_RBX + 0x3b8) +
                    (longlong)
                    (int)((uStackX_24 ^ (uint)param_1 ^ (uint)lStack0000000000000028 ^
                          lStack0000000000000028._4_4_) & *(int *)(unaff_RBX + 0x3c0) - 1U) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RBX + 0x3c8));
        if ((*plVar3 == param_1) && (plVar3[1] == lStack0000000000000028)) {
          lVar5 = plVar3[3];
          goto LAB_18087b80f;
        }
        iVar4 = (int)plVar3[2];
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_18087b80f:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





