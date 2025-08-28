#include "TaleWorlds.Native.Split.h"

// 05_networking_part074.c - 7 个函数

// 函数: void FUN_18087c319(void)
void FUN_18087c319(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087c32f(void)

{
  longlong in_RAX;
  char unaff_SIL;
  
  if (unaff_SIL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087c360(longlong param_1,uint *param_2,char param_3)

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
  lVar1 = *(longlong *)(lVar11 + 0x4d0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(lVar11 + 0x4cc) != 0) && (*(int *)(lVar11 + 0x4b0) != 0)) {
    iVar10 = *(int *)(*(longlong *)(lVar11 + 0x4a8) +
                     (longlong)
                     (int)((uVar3 ^ uVar2 ^ uVar4 ^ uVar5) & *(int *)(lVar11 + 0x4b0) - 1U) * 4);
    if (iVar10 != -1) {
      do {
        plVar9 = (longlong *)((longlong)iVar10 * 0x20 + *(longlong *)(lVar11 + 0x4b8));
        if ((*plVar9 == lVar7) && (plVar9[1] == lVar8)) {
          lVar11 = plVar9[3];
          goto LAB_18087c41f;
        }
        iVar10 = (int)plVar9[2];
      } while (iVar10 != -1);
    }
  }
  lVar11 = 0;
LAB_18087c41f:
  if (bVar6) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar11;
}



longlong FUN_18087c37a(longlong param_1,undefined8 param_2,char param_3)

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
  
  lVar1 = *(longlong *)(unaff_RBX + 0x4d0);
  lStack0000000000000028 = in_XMM0_Qb;
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(unaff_RBX + 0x4cc) != 0) && (*(int *)(unaff_RBX + 0x4b0) != 0)) {
    uStackX_24 = (uint)((ulonglong)param_1 >> 0x20);
    iVar4 = *(int *)(*(longlong *)(unaff_RBX + 0x4a8) +
                    (longlong)
                    (int)((uStackX_24 ^ (uint)param_1 ^ (uint)lStack0000000000000028 ^
                          lStack0000000000000028._4_4_) & *(int *)(unaff_RBX + 0x4b0) - 1U) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RBX + 0x4b8));
        if ((*plVar3 == param_1) && (plVar3[1] == lStack0000000000000028)) {
          lVar5 = plVar3[3];
          goto LAB_18087c41f;
        }
        iVar4 = (int)plVar3[2];
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_18087c41f:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087c429(void)
void FUN_18087c429(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087c43f(void)

{
  longlong in_RAX;
  char unaff_SIL;
  
  if (unaff_SIL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087c470(longlong param_1,uint *param_2,char param_3)

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
  lVar1 = *(longlong *)(lVar5 + 0x5f0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x5ec) != 0) && (*(int *)(lVar5 + 0x5d0) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(lVar5 + 0x5c8) +
                      (longlong)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x5d0) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar5 + 0x5d8));
      if ((*plVar3 == *(longlong *)param_2) && (plVar3[1] == *(longlong *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087c526;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087c526:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}



longlong FUN_18087c493(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  uint *unaff_RBX;
  longlong lVar5;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x5f0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x5ec) != 0) && (*(int *)(unaff_RDI + 0x5d0) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x5c8) +
                      (longlong)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x5d0) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RDI + 0x5d8));
      if ((*plVar3 == *(longlong *)unaff_RBX) && (plVar3[1] == *(longlong *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087c526;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087c526:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087c530(void)
void FUN_18087c530(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087c54b(void)

{
  longlong in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087c580(longlong param_1,uint *param_2,char param_3)

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
  lVar1 = *(longlong *)(lVar5 + 2000);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x7cc) != 0) && (*(int *)(lVar5 + 0x7b0) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(lVar5 + 0x7a8) +
                      (longlong)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x7b0) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar5 + 0x7b8));
      if ((*plVar3 == *(longlong *)param_2) && (plVar3[1] == *(longlong *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087c636;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087c636:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}



longlong FUN_18087c5a3(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  uint *unaff_RBX;
  longlong lVar5;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 2000);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x7cc) != 0) && (*(int *)(unaff_RDI + 0x7b0) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x7a8) +
                      (longlong)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x7b0) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RDI + 0x7b8));
      if ((*plVar3 == *(longlong *)unaff_RBX) && (plVar3[1] == *(longlong *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087c636;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087c636:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087c640(void)
void FUN_18087c640(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087c65b(void)

{
  longlong in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087c690(longlong param_1,uint *param_2,char param_3)

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
  lVar1 = *(longlong *)(lVar5 + 0x530);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x52c) != 0) && (*(int *)(lVar5 + 0x510) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(lVar5 + 0x508) +
                      (longlong)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x510) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar5 + 0x518));
      if ((*plVar3 == *(longlong *)param_2) && (plVar3[1] == *(longlong *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087c746;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087c746:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}



longlong FUN_18087c6b3(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  uint *unaff_RBX;
  longlong lVar5;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x530);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x52c) != 0) && (*(int *)(unaff_RDI + 0x510) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x508) +
                      (longlong)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x510) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RDI + 0x518));
      if ((*plVar3 == *(longlong *)unaff_RBX) && (plVar3[1] == *(longlong *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087c746;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087c746:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087c750(void)
void FUN_18087c750(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087c76b(void)

{
  longlong in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087c7a0(longlong param_1,uint *param_2,char param_3)

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
  lVar1 = *(longlong *)(lVar5 + 0x500);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x4fc) != 0) && (*(int *)(lVar5 + 0x4e0) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(lVar5 + 0x4d8) +
                      (longlong)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x4e0) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar5 + 0x4e8));
      if ((*plVar3 == *(longlong *)param_2) && (plVar3[1] == *(longlong *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087c856;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087c856:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}



longlong FUN_18087c7c3(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  uint *unaff_RBX;
  longlong lVar5;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x500);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x4fc) != 0) && (*(int *)(unaff_RDI + 0x4e0) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x4d8) +
                      (longlong)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x4e0) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RDI + 0x4e8));
      if ((*plVar3 == *(longlong *)unaff_RBX) && (plVar3[1] == *(longlong *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087c856;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087c856:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087c860(void)
void FUN_18087c860(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087c87b(void)

{
  longlong in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}



longlong FUN_18087c8b0(longlong param_1,uint *param_2,char param_3)

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
  lVar1 = *(longlong *)(lVar5 + 0x6b0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x6ac) != 0) && (*(int *)(lVar5 + 0x690) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(lVar5 + 0x688) +
                      (longlong)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x690) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar5 + 0x698));
      if ((*plVar3 == *(longlong *)param_2) && (plVar3[1] == *(longlong *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087c966;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087c966:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}



longlong FUN_18087c8d3(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  uint *unaff_RBX;
  longlong lVar5;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x6b0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x6ac) != 0) && (*(int *)(unaff_RDI + 0x690) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x688) +
                      (longlong)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x690) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(unaff_RDI + 0x698));
      if ((*plVar3 == *(longlong *)unaff_RBX) && (plVar3[1] == *(longlong *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087c966;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087c966:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}





// 函数: void FUN_18087c970(void)
void FUN_18087c970(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_18087c98b(void)

{
  longlong in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(undefined8 *)(in_RAX + 0x18);
}





