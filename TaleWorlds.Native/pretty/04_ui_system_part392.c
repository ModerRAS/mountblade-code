#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part392.c - 10 个函数

// 函数: void FUN_18087b819(void)
void FUN_18087b819(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



uint64_t FUN_18087b82f(void)

{
  int64_t in_RAX;
  char unaff_SIL;
  
  if (unaff_SIL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}



int64_t FUN_18087b860(int64_t param_1,uint *param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  
  lVar5 = *(int64_t *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(int64_t *)(lVar5 + 0x770);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x76c) != 0) && (*(int *)(lVar5 + 0x750) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(lVar5 + 0x748) +
                      (int64_t)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x750) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(lVar5 + 0x758));
      if ((*plVar3 == *(int64_t *)param_2) && (plVar3[1] == *(int64_t *)(param_2 + 2))) {
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



int64_t FUN_18087b883(uint64_t param_1,uint64_t param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  uint *unaff_RBX;
  int64_t lVar5;
  int64_t unaff_RDI;
  
  lVar1 = *(int64_t *)(unaff_RDI + 0x770);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x76c) != 0) && (*(int *)(unaff_RDI + 0x750) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(unaff_RDI + 0x748) +
                      (int64_t)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x750) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RDI + 0x758));
      if ((*plVar3 == *(int64_t *)unaff_RBX) && (plVar3[1] == *(int64_t *)(unaff_RBX + 2))) {
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



uint64_t FUN_18087b93b(void)

{
  int64_t in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}



int64_t FUN_18087b970(int64_t param_1,uint *param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  
  lVar5 = *(int64_t *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(int64_t *)(lVar5 + 0x620);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x61c) != 0) && (*(int *)(lVar5 + 0x600) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(lVar5 + 0x5f8) +
                      (int64_t)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x600) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(lVar5 + 0x608));
      if ((*plVar3 == *(int64_t *)param_2) && (plVar3[1] == *(int64_t *)(param_2 + 2))) {
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



int64_t FUN_18087b993(uint64_t param_1,uint64_t param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  uint *unaff_RBX;
  int64_t lVar5;
  int64_t unaff_RDI;
  
  lVar1 = *(int64_t *)(unaff_RDI + 0x620);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x61c) != 0) && (*(int *)(unaff_RDI + 0x600) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(unaff_RDI + 0x5f8) +
                      (int64_t)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x600) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RDI + 0x608));
      if ((*plVar3 == *(int64_t *)unaff_RBX) && (plVar3[1] == *(int64_t *)(unaff_RBX + 2))) {
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



uint64_t FUN_18087ba4b(void)

{
  int64_t in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}



int64_t FUN_18087ba80(int64_t param_1,uint *param_2,char param_3)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int iVar10;
  int64_t lVar11;
  
  lVar11 = *(int64_t *)(param_1 + 8);
  if (lVar11 == 0) {
    return 0;
  }
  uVar2 = *param_2;
  uVar3 = param_2[1];
  lVar7 = *(int64_t *)param_2;
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  lVar8 = *(int64_t *)(param_2 + 2);
  lVar1 = *(int64_t *)(lVar11 + 0x410);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(lVar11 + 0x40c) != 0) && (*(int *)(lVar11 + 0x3f0) != 0)) {
    iVar10 = *(int *)(*(int64_t *)(lVar11 + 1000) +
                     (int64_t)
                     (int)((uVar3 ^ uVar2 ^ uVar4 ^ uVar5) & *(int *)(lVar11 + 0x3f0) - 1U) * 4);
    if (iVar10 != -1) {
      do {
        plVar9 = (int64_t *)((int64_t)iVar10 * 0x20 + *(int64_t *)(lVar11 + 0x3f8));
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



int64_t FUN_18087ba9a(int64_t param_1,uint64_t param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t unaff_RBX;
  int64_t lVar5;
  int64_t in_XMM0_Qb;
  uint uStackX_24;
  int64_t lStack0000000000000028;
  
  lVar1 = *(int64_t *)(unaff_RBX + 0x410);
  lStack0000000000000028 = in_XMM0_Qb;
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(unaff_RBX + 0x40c) != 0) && (*(int *)(unaff_RBX + 0x3f0) != 0)) {
    uStackX_24 = (uint)((uint64_t)param_1 >> 0x20);
    iVar4 = *(int *)(*(int64_t *)(unaff_RBX + 1000) +
                    (int64_t)
                    (int)((uStackX_24 ^ (uint)param_1 ^ (uint)lStack0000000000000028 ^
                          lStack0000000000000028._4_4_) & *(int *)(unaff_RBX + 0x3f0) - 1U) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RBX + 0x3f8));
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



uint64_t FUN_18087bb5f(void)

{
  int64_t in_RAX;
  char unaff_SIL;
  
  if (unaff_SIL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}



int64_t FUN_18087bbb0(int64_t param_1,uint *param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  
  lVar5 = *(int64_t *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(int64_t *)(lVar5 + 0x830);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x82c) != 0) && (*(int *)(lVar5 + 0x810) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(lVar5 + 0x808) +
                      (int64_t)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x810) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(lVar5 + 0x818));
      if ((*plVar3 == *(int64_t *)param_2) && (plVar3[1] == *(int64_t *)(param_2 + 2))) {
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



int64_t FUN_18087bbd3(uint64_t param_1,uint64_t param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  uint *unaff_RBX;
  int64_t lVar5;
  int64_t unaff_RDI;
  
  lVar1 = *(int64_t *)(unaff_RDI + 0x830);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x82c) != 0) && (*(int *)(unaff_RDI + 0x810) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(unaff_RDI + 0x808) +
                      (int64_t)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x810) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RDI + 0x818));
      if ((*plVar3 == *(int64_t *)unaff_RBX) && (plVar3[1] == *(int64_t *)(unaff_RBX + 2))) {
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



uint64_t FUN_18087bc8b(void)

{
  int64_t in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}



int64_t FUN_18087bca0(int64_t param_1,uint *param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  
  lVar5 = *(int64_t *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(int64_t *)(lVar5 + 0x800);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x7fc) != 0) && (*(int *)(lVar5 + 0x7e0) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(lVar5 + 0x7d8) +
                      (int64_t)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x7e0) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(lVar5 + 0x7e8));
      if ((*plVar3 == *(int64_t *)param_2) && (plVar3[1] == *(int64_t *)(param_2 + 2))) {
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



int64_t FUN_18087bcc3(uint64_t param_1,uint64_t param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  uint *unaff_RBX;
  int64_t lVar5;
  int64_t unaff_RDI;
  
  lVar1 = *(int64_t *)(unaff_RDI + 0x800);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x7fc) != 0) && (*(int *)(unaff_RDI + 0x7e0) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(unaff_RDI + 0x7d8) +
                      (int64_t)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x7e0) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RDI + 0x7e8));
      if ((*plVar3 == *(int64_t *)unaff_RBX) && (plVar3[1] == *(int64_t *)(unaff_RBX + 2))) {
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



uint64_t FUN_18087bd7b(void)

{
  int64_t in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}



int64_t FUN_18087bdd0(int64_t param_1,uint *param_2,char param_3)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int iVar10;
  int64_t lVar11;
  
  lVar11 = *(int64_t *)(param_1 + 8);
  if (lVar11 == 0) {
    return 0;
  }
  uVar2 = *param_2;
  uVar3 = param_2[1];
  lVar7 = *(int64_t *)param_2;
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  lVar8 = *(int64_t *)(param_2 + 2);
  lVar1 = *(int64_t *)(lVar11 + 0x470);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(lVar11 + 0x46c) != 0) && (*(int *)(lVar11 + 0x450) != 0)) {
    iVar10 = *(int *)(*(int64_t *)(lVar11 + 0x448) +
                     (int64_t)
                     (int)((uVar3 ^ uVar2 ^ uVar4 ^ uVar5) & *(int *)(lVar11 + 0x450) - 1U) * 4);
    if (iVar10 != -1) {
      do {
        plVar9 = (int64_t *)((int64_t)iVar10 * 0x20 + *(int64_t *)(lVar11 + 0x458));
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



int64_t FUN_18087bdea(int64_t param_1,uint64_t param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t unaff_RBX;
  int64_t lVar5;
  int64_t in_XMM0_Qb;
  uint uStackX_24;
  int64_t lStack0000000000000028;
  
  lVar1 = *(int64_t *)(unaff_RBX + 0x470);
  lStack0000000000000028 = in_XMM0_Qb;
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(unaff_RBX + 0x46c) != 0) && (*(int *)(unaff_RBX + 0x450) != 0)) {
    uStackX_24 = (uint)((uint64_t)param_1 >> 0x20);
    iVar4 = *(int *)(*(int64_t *)(unaff_RBX + 0x448) +
                    (int64_t)
                    (int)((uStackX_24 ^ (uint)param_1 ^ (uint)lStack0000000000000028 ^
                          lStack0000000000000028._4_4_) & *(int *)(unaff_RBX + 0x450) - 1U) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RBX + 0x458));
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



uint64_t FUN_18087beaf(void)

{
  int64_t in_RAX;
  char unaff_SIL;
  
  if (unaff_SIL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}



int64_t FUN_18087bee0(int64_t param_1,uint *param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  
  lVar5 = *(int64_t *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(int64_t *)(lVar5 + 0x560);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x55c) != 0) && (*(int *)(lVar5 + 0x540) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(lVar5 + 0x538) +
                      (int64_t)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x540) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(lVar5 + 0x548));
      if ((*plVar3 == *(int64_t *)param_2) && (plVar3[1] == *(int64_t *)(param_2 + 2))) {
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



int64_t FUN_18087bf03(uint64_t param_1,uint64_t param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  uint *unaff_RBX;
  int64_t lVar5;
  int64_t unaff_RDI;
  
  lVar1 = *(int64_t *)(unaff_RDI + 0x560);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x55c) != 0) && (*(int *)(unaff_RDI + 0x540) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(unaff_RDI + 0x538) +
                      (int64_t)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x540) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RDI + 0x548));
      if ((*plVar3 == *(int64_t *)unaff_RBX) && (plVar3[1] == *(int64_t *)(unaff_RBX + 2))) {
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



uint64_t FUN_18087bfbb(void)

{
  int64_t in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}



int64_t FUN_18087bff0(int64_t param_1,uint *param_2,char param_3)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int iVar10;
  int64_t lVar11;
  
  lVar11 = *(int64_t *)(param_1 + 8);
  if (lVar11 == 0) {
    return 0;
  }
  uVar2 = *param_2;
  uVar3 = param_2[1];
  lVar7 = *(int64_t *)param_2;
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  lVar8 = *(int64_t *)(param_2 + 2);
  lVar1 = *(int64_t *)(lVar11 + 0x3b0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(lVar11 + 0x3ac) != 0) && (*(int *)(lVar11 + 0x390) != 0)) {
    iVar10 = *(int *)(*(int64_t *)(lVar11 + 0x388) +
                     (int64_t)
                     (int)((uVar3 ^ uVar2 ^ uVar4 ^ uVar5) & *(int *)(lVar11 + 0x390) - 1U) * 4);
    if (iVar10 != -1) {
      do {
        plVar9 = (int64_t *)((int64_t)iVar10 * 0x20 + *(int64_t *)(lVar11 + 0x398));
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



int64_t FUN_18087c00a(int64_t param_1,uint64_t param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t unaff_RBX;
  int64_t lVar5;
  int64_t in_XMM0_Qb;
  uint uStackX_24;
  int64_t lStack0000000000000028;
  
  lVar1 = *(int64_t *)(unaff_RBX + 0x3b0);
  lStack0000000000000028 = in_XMM0_Qb;
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(unaff_RBX + 0x3ac) != 0) && (*(int *)(unaff_RBX + 0x390) != 0)) {
    uStackX_24 = (uint)((uint64_t)param_1 >> 0x20);
    iVar4 = *(int *)(*(int64_t *)(unaff_RBX + 0x388) +
                    (int64_t)
                    (int)((uStackX_24 ^ (uint)param_1 ^ (uint)lStack0000000000000028 ^
                          lStack0000000000000028._4_4_) & *(int *)(unaff_RBX + 0x390) - 1U) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RBX + 0x398));
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



uint64_t FUN_18087c0cf(void)

{
  int64_t in_RAX;
  char unaff_SIL;
  
  if (unaff_SIL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}



int64_t FUN_18087c140(int64_t param_1,uint *param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  
  lVar5 = *(int64_t *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(int64_t *)(lVar5 + 0x650);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(lVar5 + 0x64c) != 0) && (*(int *)(lVar5 + 0x630) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(lVar5 + 0x628) +
                      (int64_t)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x630) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(lVar5 + 0x638));
      if ((*plVar3 == *(int64_t *)param_2) && (plVar3[1] == *(int64_t *)(param_2 + 2))) {
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



int64_t FUN_18087c163(uint64_t param_1,uint64_t param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  uint *unaff_RBX;
  int64_t lVar5;
  int64_t unaff_RDI;
  
  lVar1 = *(int64_t *)(unaff_RDI + 0x650);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x64c) != 0) && (*(int *)(unaff_RDI + 0x630) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(unaff_RDI + 0x628) +
                      (int64_t)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x630) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RDI + 0x638));
      if ((*plVar3 == *(int64_t *)unaff_RBX) && (plVar3[1] == *(int64_t *)(unaff_RBX + 2))) {
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



uint64_t FUN_18087c21b(void)

{
  int64_t in_RAX;
  char unaff_BPL;
  
  if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}



int64_t FUN_18087c250(int64_t param_1,uint *param_2,char param_3)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int iVar10;
  int64_t lVar11;
  
  lVar11 = *(int64_t *)(param_1 + 8);
  if (lVar11 == 0) {
    return 0;
  }
  uVar2 = *param_2;
  uVar3 = param_2[1];
  lVar7 = *(int64_t *)param_2;
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  lVar8 = *(int64_t *)(param_2 + 2);
  lVar1 = *(int64_t *)(lVar11 + 0x4a0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(lVar11 + 0x49c) != 0) && (*(int *)(lVar11 + 0x480) != 0)) {
    iVar10 = *(int *)(*(int64_t *)(lVar11 + 0x478) +
                     (int64_t)
                     (int)((uVar3 ^ uVar2 ^ uVar4 ^ uVar5) & *(int *)(lVar11 + 0x480) - 1U) * 4);
    if (iVar10 != -1) {
      do {
        plVar9 = (int64_t *)((int64_t)iVar10 * 0x20 + *(int64_t *)(lVar11 + 0x488));
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



int64_t FUN_18087c26a(int64_t param_1,uint64_t param_2,char param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t unaff_RBX;
  int64_t lVar5;
  int64_t in_XMM0_Qb;
  uint uStackX_24;
  int64_t lStack0000000000000028;
  
  lVar1 = *(int64_t *)(unaff_RBX + 0x4a0);
  lStack0000000000000028 = in_XMM0_Qb;
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if ((*(int *)(unaff_RBX + 0x49c) != 0) && (*(int *)(unaff_RBX + 0x480) != 0)) {
    uStackX_24 = (uint)((uint64_t)param_1 >> 0x20);
    iVar4 = *(int *)(*(int64_t *)(unaff_RBX + 0x478) +
                    (int64_t)
                    (int)((uStackX_24 ^ (uint)param_1 ^ (uint)lStack0000000000000028 ^
                          lStack0000000000000028._4_4_) & *(int *)(unaff_RBX + 0x480) - 1U) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RBX + 0x488));
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





