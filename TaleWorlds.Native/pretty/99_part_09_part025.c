#include "TaleWorlds.Native.Split.h"

// 99_part_09_part025.c - 3 个函数

// 函数: void FUN_1805c931e(uint64_t param_1,int param_2,int param_3,int param_4)
void FUN_1805c931e(uint64_t param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint64_t uVar2;
  bool bVar3;
  char cVar4;
  int64_t in_RAX;
  int iVar5;
  int64_t lVar6;
  int64_t *unaff_RBX;
  byte bVar7;
  uint uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  short *psVar11;
  int iVar12;
  uint64_t uVar13;
  
  uVar13 = 0xffffffff;
  lVar6 = *(int64_t *)(in_RAX + 0x8f8);
  bVar7 = 0;
  lVar10 = (int64_t)param_3;
  iVar1 = *(int *)(lVar6 + 0x9e0);
  iVar12 = -1;
  if (iVar1 == param_3) {
    bVar3 = false;
    if (-1 < param_3) {
      if (*(int *)(lVar6 + 0xa08) == -1) {
        iVar5 = *(int *)(*(int64_t *)(lVar6 + 0x9e8) + 0xf0);
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
    *(int32_t *)(unaff_RBX + 0x436) = 0xffffffff;
    iVar5 = -2;
    if (param_3 != 4) {
      iVar5 = param_3;
    }
    *(int *)(unaff_RBX + 0x435) = iVar5;
    bVar3 = false;
    if (-1 < param_3) {
      bVar3 = true;
      bVar7 = *(byte *)((int64_t)param_4 * 0xa0 + 0x50 +
                       *(int64_t *)(lVar10 * 0x1f8 + 0xd8 + *(int64_t *)(*unaff_RBX + 0x8f8))) >>
              4 & 1;
      if (param_4 != *(int *)(lVar10 * 0x1f8 + 0xf8 + *(int64_t *)(*unaff_RBX + 0x8f8))) {
        *(int *)(unaff_RBX + 0x436) = param_4;
        *(int32_t *)(unaff_RBX + 0x277) = 0;
      }
    }
  }
  if ((param_3 == -1) && (param_4 == -1)) {
LAB_1805c944c:
    if (bVar3) {
LAB_1805c94b7:
      iVar12 = -1;
      if (bVar7 == 0) {
        lVar6 = *(int64_t *)(*unaff_RBX + 0x8f8);
        cVar4 = SystemCore_EventHandler(lVar6 + 0x7e8);
        if ((cVar4 == '\0') ||
           ((*(uint *)((int64_t)*(int *)(lVar6 + 0x8d8) * 0xa0 + 0x58 +
                      *(int64_t *)(lVar6 + 0x8b8)) & 0x80000) == 0)) {
          uVar9 = 0;
          psVar11 = (short *)(lVar6 + 0x10);
          do {
            if (0 < *(int *)(psVar11 + 0x14)) {
              iVar1 = *(int *)(psVar11 + 0x74);
              lVar6 = *(int64_t *)(psVar11 + 100);
              uVar2 = *(uint64_t *)((int64_t)iVar1 * 0xa0 + 0x50 + lVar6);
              if (((((uVar2 >> 9 & 1) == 0) || (0 < *psVar11)) &&
                  ((cVar4 = func_0x000180534fb0(psVar11 + -4), cVar4 == '\0' || (0 < *psVar11)))) &&
                 (((*(uint *)((int64_t)iVar1 * 0xa0 + 0x58 + lVar6) & 0x80000) != 0 &&
                  (uVar13 = uVar13 & 0xffffffff, (uVar2 >> 0x1c & 1) != 0)))) {
                uVar13 = uVar9;
              }
            }
            iVar12 = (int)uVar13;
            uVar8 = (int)uVar9 + 1;
            uVar9 = (uint64_t)uVar8;
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
        lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)unaff_RBX[1] + 0x8f8) + 0x9e8);
        unaff_RBX[0x15] = lVar6;
        *(uint *)(unaff_RBX + 2) = *(uint *)(unaff_RBX + 2) | 0x20;
      }
      else {
        lVar6 = unaff_RBX[0x15];
      }
      if ((lVar6 == 0) ||
         (iVar12 = -1,
         (*(byte *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar6 + 0xd0)) >>
          4 & 1) == 0)) {
        bVar7 = 0;
        goto LAB_1805c94b7;
      }
    }
    if (iVar12 == *(int *)(*(int64_t *)(*unaff_RBX + 0x8f8) + 0x9e4)) goto LAB_1805c9594;
  }
  else {
    if ((!bVar3) && (lVar10 = (int64_t)iVar1, iVar1 < 0)) goto LAB_1805c9451;
    if ((*(uint64_t *)
          (*(int64_t *)(lVar10 * 0x1f8 + 0xd8 + *(int64_t *)(*unaff_RBX + 0x8f8)) + 0x50 +
          (int64_t)param_4 * 0xa0) >> 4 & 1) == 0) goto LAB_1805c944c;
    if (*(int *)(*(int64_t *)(*unaff_RBX + 0x8f8) + 0x9e4) < 0) goto LAB_1805c9594;
  }
  *(int *)((int64_t)unaff_RBX + 0x21ac) = iVar12;
LAB_1805c9594:
  if (*(int *)((int64_t)unaff_RBX + 0x215c) != param_2) {
    FUN_180508010();
    *(int32_t *)((int64_t)unaff_RBX + 0x178c) = 0;
    if (*(int *)(*unaff_RBX + 0x1fc) - 1U < 2) {
      *(uint *)((int64_t)unaff_RBX + 0x158c) =
           *(uint *)((int64_t)unaff_RBX + 0x158c) & 0xfffffc3f | 0x4000;
    }
    *(int *)((int64_t)unaff_RBX + 0x215c) = param_2;
  }
  return;
}






// 函数: void FUN_1805c9504(void)
void FUN_1805c9504(void)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  char cVar4;
  int64_t *unaff_RBX;
  int64_t unaff_RSI;
  uint uVar5;
  uint64_t unaff_RDI;
  short *psVar6;
  uint64_t in_R11;
  int unaff_R15D;
  
  psVar6 = (short *)(unaff_RSI + 0x10);
  do {
    if (0 < *(int *)(psVar6 + 0x14)) {
      iVar1 = *(int *)(psVar6 + 0x74);
      lVar2 = *(int64_t *)(psVar6 + 100);
      uVar3 = *(uint64_t *)((int64_t)iVar1 * 0xa0 + 0x50 + lVar2);
      if (((uVar3 >> 9 & 1) == 0) || (0 < *psVar6)) {
        cVar4 = func_0x000180534fb0(psVar6 + -4);
        if (((cVar4 == '\0') || (0 < *psVar6)) &&
           (((*(uint *)((int64_t)iVar1 * 0xa0 + 0x58 + lVar2) & 0x80000) != 0 &&
            (in_R11 = in_R11 & 0xffffffff, (uVar3 >> 0x1c & 1) != 0)))) {
          in_R11 = unaff_RDI & 0xffffffff;
        }
      }
    }
    uVar5 = (int)unaff_RDI + 1;
    unaff_RDI = (uint64_t)uVar5;
    psVar6 = psVar6 + 0xfc;
  } while ((int)uVar5 < 4);
  if ((int)in_R11 != *(int *)(*(int64_t *)(*unaff_RBX + 0x8f8) + 0x9e4)) {
    *(int *)((int64_t)unaff_RBX + 0x21ac) = (int)in_R11;
  }
  if (*(int *)((int64_t)unaff_RBX + 0x215c) != unaff_R15D) {
    FUN_180508010();
    *(int32_t *)((int64_t)unaff_RBX + 0x178c) = 0;
    if (*(int *)(*unaff_RBX + 0x1fc) - 1U < 2) {
      *(uint *)((int64_t)unaff_RBX + 0x158c) =
           *(uint *)((int64_t)unaff_RBX + 0x158c) & 0xfffffc3f | 0x4000;
    }
    *(int *)((int64_t)unaff_RBX + 0x215c) = unaff_R15D;
  }
  return;
}






// 函数: void FUN_1805c957a(void)
void FUN_1805c957a(void)

{
  int64_t *unaff_RBX;
  int in_R11D;
  int unaff_R15D;
  
  if (in_R11D != *(int *)(*(int64_t *)(*unaff_RBX + 0x8f8) + 0x9e4)) {
    *(int *)((int64_t)unaff_RBX + 0x21ac) = in_R11D;
  }
  if (*(int *)((int64_t)unaff_RBX + 0x215c) != unaff_R15D) {
    FUN_180508010();
    *(int32_t *)((int64_t)unaff_RBX + 0x178c) = 0;
    if (*(int *)(*unaff_RBX + 0x1fc) - 1U < 2) {
      *(uint *)((int64_t)unaff_RBX + 0x158c) =
           *(uint *)((int64_t)unaff_RBX + 0x158c) & 0xfffffc3f | 0x4000;
    }
    *(int *)((int64_t)unaff_RBX + 0x215c) = unaff_R15D;
  }
  return;
}






