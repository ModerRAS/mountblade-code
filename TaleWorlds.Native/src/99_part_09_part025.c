#include "TaleWorlds.Native.Split.h"

// 99_part_09_part025.c - 3 个函数

// 函数: void FUN_1805c931e(undefined8 param_1,int param_2,int param_3,int param_4)
void FUN_1805c931e(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  char cVar4;
  longlong in_RAX;
  int iVar5;
  longlong lVar6;
  longlong *unaff_RBX;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  short *psVar11;
  int iVar12;
  ulonglong uVar13;
  
  uVar13 = 0xffffffff;
  lVar6 = *(longlong *)(in_RAX + 0x8f8);
  bVar7 = 0;
  lVar10 = (longlong)param_3;
  iVar1 = *(int *)(lVar6 + 0x9e0);
  iVar12 = -1;
  if (iVar1 == param_3) {
    bVar3 = false;
    if (-1 < param_3) {
      if (*(int *)(lVar6 + 0xa08) == -1) {
        iVar5 = *(int *)(*(longlong *)(lVar6 + 0x9e8) + 0xf0);
      }
      else {
        iVar5 = *(int *)(lVar6 + 0xa10);
      }
      bVar3 = false;
      if (iVar5 != param_4) goto LAB_1805c937e;
    }
  }
  else {
LAB_1805c937e:
    *(undefined4 *)(unaff_RBX + 0x436) = 0xffffffff;
    iVar5 = -2;
    if (param_3 != 4) {
      iVar5 = param_3;
    }
    *(int *)(unaff_RBX + 0x435) = iVar5;
    bVar3 = false;
    if (-1 < param_3) {
      bVar3 = true;
      bVar7 = *(byte *)((longlong)param_4 * 0xa0 + 0x50 +
                       *(longlong *)(lVar10 * 0x1f8 + 0xd8 + *(longlong *)(*unaff_RBX + 0x8f8))) >>
              4 & 1;
      if (param_4 != *(int *)(lVar10 * 0x1f8 + 0xf8 + *(longlong *)(*unaff_RBX + 0x8f8))) {
        *(int *)(unaff_RBX + 0x436) = param_4;
        *(undefined4 *)(unaff_RBX + 0x277) = 0;
      }
    }
  }
  if ((param_3 == -1) && (param_4 == -1)) {
LAB_1805c944c:
    if (bVar3) {
LAB_1805c94b7:
      iVar12 = -1;
      if (bVar7 == 0) {
        lVar6 = *(longlong *)(*unaff_RBX + 0x8f8);
        cVar4 = FUN_18058f970(lVar6 + 0x7e8);
        if ((cVar4 == '\0') ||
           ((*(uint *)((longlong)*(int *)(lVar6 + 0x8d8) * 0xa0 + 0x58 +
                      *(longlong *)(lVar6 + 0x8b8)) & 0x80000) == 0)) {
          uVar9 = 0;
          psVar11 = (short *)(lVar6 + 0x10);
          do {
            if (0 < *(int *)(psVar11 + 0x14)) {
              iVar1 = *(int *)(psVar11 + 0x74);
              lVar6 = *(longlong *)(psVar11 + 100);
              uVar2 = *(ulonglong *)((longlong)iVar1 * 0xa0 + 0x50 + lVar6);
              if (((((uVar2 >> 9 & 1) == 0) || (0 < *psVar11)) &&
                  ((cVar4 = func_0x000180534fb0(psVar11 + -4), cVar4 == '\0' || (0 < *psVar11)))) &&
                 (((*(uint *)((longlong)iVar1 * 0xa0 + 0x58 + lVar6) & 0x80000) != 0 &&
                  (uVar13 = uVar13 & 0xffffffff, (uVar2 >> 0x1c & 1) != 0)))) {
                uVar13 = uVar9;
              }
            }
            iVar12 = (int)uVar13;
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
            psVar11 = psVar11 + 0xfc;
          } while ((int)uVar8 < 4);
        }
        else {
          iVar12 = -2;
        }
      }
    }
    else {
LAB_1805c9451:
      if ((*(uint *)(unaff_RBX + 2) & 0x20) == 0) {
        lVar6 = *(longlong *)(*(longlong *)(*(longlong *)unaff_RBX[1] + 0x8f8) + 0x9e8);
        unaff_RBX[0x15] = lVar6;
        *(uint *)(unaff_RBX + 2) = *(uint *)(unaff_RBX + 2) | 0x20;
      }
      else {
        lVar6 = unaff_RBX[0x15];
      }
      if ((lVar6 == 0) ||
         (iVar12 = -1,
         (*(byte *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar6 + 0xd0)) >>
          4 & 1) == 0)) {
        bVar7 = 0;
        goto LAB_1805c94b7;
      }
    }
    if (iVar12 == *(int *)(*(longlong *)(*unaff_RBX + 0x8f8) + 0x9e4)) goto LAB_1805c9594;
  }
  else {
    if ((!bVar3) && (lVar10 = (longlong)iVar1, iVar1 < 0)) goto LAB_1805c9451;
    if ((*(ulonglong *)
          (*(longlong *)(lVar10 * 0x1f8 + 0xd8 + *(longlong *)(*unaff_RBX + 0x8f8)) + 0x50 +
          (longlong)param_4 * 0xa0) >> 4 & 1) == 0) goto LAB_1805c944c;
    if (*(int *)(*(longlong *)(*unaff_RBX + 0x8f8) + 0x9e4) < 0) goto LAB_1805c9594;
  }
  *(int *)((longlong)unaff_RBX + 0x21ac) = iVar12;
LAB_1805c9594:
  if (*(int *)((longlong)unaff_RBX + 0x215c) != param_2) {
    FUN_180508010();
    *(undefined4 *)((longlong)unaff_RBX + 0x178c) = 0;
    if (*(int *)(*unaff_RBX + 0x1fc) - 1U < 2) {
      *(uint *)((longlong)unaff_RBX + 0x158c) =
           *(uint *)((longlong)unaff_RBX + 0x158c) & 0xfffffc3f | 0x4000;
    }
    *(int *)((longlong)unaff_RBX + 0x215c) = param_2;
  }
  return;
}






// 函数: void FUN_1805c9504(void)
void FUN_1805c9504(void)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  longlong *unaff_RBX;
  longlong unaff_RSI;
  uint uVar5;
  ulonglong unaff_RDI;
  short *psVar6;
  ulonglong in_R11;
  int unaff_R15D;
  
  psVar6 = (short *)(unaff_RSI + 0x10);
  do {
    if (0 < *(int *)(psVar6 + 0x14)) {
      iVar1 = *(int *)(psVar6 + 0x74);
      lVar2 = *(longlong *)(psVar6 + 100);
      uVar3 = *(ulonglong *)((longlong)iVar1 * 0xa0 + 0x50 + lVar2);
      if (((uVar3 >> 9 & 1) == 0) || (0 < *psVar6)) {
        cVar4 = func_0x000180534fb0(psVar6 + -4);
        if (((cVar4 == '\0') || (0 < *psVar6)) &&
           (((*(uint *)((longlong)iVar1 * 0xa0 + 0x58 + lVar2) & 0x80000) != 0 &&
            (in_R11 = in_R11 & 0xffffffff, (uVar3 >> 0x1c & 1) != 0)))) {
          in_R11 = unaff_RDI & 0xffffffff;
        }
      }
    }
    uVar5 = (int)unaff_RDI + 1;
    unaff_RDI = (ulonglong)uVar5;
    psVar6 = psVar6 + 0xfc;
  } while ((int)uVar5 < 4);
  if ((int)in_R11 != *(int *)(*(longlong *)(*unaff_RBX + 0x8f8) + 0x9e4)) {
    *(int *)((longlong)unaff_RBX + 0x21ac) = (int)in_R11;
  }
  if (*(int *)((longlong)unaff_RBX + 0x215c) != unaff_R15D) {
    FUN_180508010();
    *(undefined4 *)((longlong)unaff_RBX + 0x178c) = 0;
    if (*(int *)(*unaff_RBX + 0x1fc) - 1U < 2) {
      *(uint *)((longlong)unaff_RBX + 0x158c) =
           *(uint *)((longlong)unaff_RBX + 0x158c) & 0xfffffc3f | 0x4000;
    }
    *(int *)((longlong)unaff_RBX + 0x215c) = unaff_R15D;
  }
  return;
}






// 函数: void FUN_1805c957a(void)
void FUN_1805c957a(void)

{
  longlong *unaff_RBX;
  int in_R11D;
  int unaff_R15D;
  
  if (in_R11D != *(int *)(*(longlong *)(*unaff_RBX + 0x8f8) + 0x9e4)) {
    *(int *)((longlong)unaff_RBX + 0x21ac) = in_R11D;
  }
  if (*(int *)((longlong)unaff_RBX + 0x215c) != unaff_R15D) {
    FUN_180508010();
    *(undefined4 *)((longlong)unaff_RBX + 0x178c) = 0;
    if (*(int *)(*unaff_RBX + 0x1fc) - 1U < 2) {
      *(uint *)((longlong)unaff_RBX + 0x158c) =
           *(uint *)((longlong)unaff_RBX + 0x158c) & 0xfffffc3f | 0x4000;
    }
    *(int *)((longlong)unaff_RBX + 0x215c) = unaff_R15D;
  }
  return;
}






