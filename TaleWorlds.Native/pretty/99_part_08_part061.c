#include "TaleWorlds.Native.Split.h"

// 99_part_08_part061.c - 3 个函数

// 函数: void FUN_1805b3e21(longlong param_1)
void FUN_1805b3e21(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int *piVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong unaff_RBX;
  longlong lVar8;
  int iVar9;
  ulonglong unaff_RDI;
  ulonglong uVar10;
  uint unaff_R13D;
  ulonglong uVar11;
  double dVar12;
  double unaff_XMM6_Qa;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  ulonglong *in_stack_00000080;
  
  do {
    uVar7 = (ulonglong)unaff_R13D;
    piVar1 = *(int **)(param_1 + uVar7 * 8);
    if (unaff_XMM6_Qa + *(double *)(piVar1 + 2) <= (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) &&
        (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) != unaff_XMM6_Qa + *(double *)(piVar1 + 2)) {
      iVar9 = *piVar1;
      if ((iVar9 != _DAT_180bf6678) || (piVar1[1] != _DAT_180bf667c)) {
        piVar4 = *(int **)(unaff_RBX + 0x5890);
        uVar7 = unaff_RDI & 0xffffffff;
        uVar10 = *(longlong *)(unaff_RBX + 0x5898) - (longlong)piVar4 >> 5;
        if (uVar10 == 0) goto LAB_1805b3eb4;
        break;
      }
      lVar8 = *(longlong *)(unaff_RBX + 0x5828) + uVar7 * 8;
      in_stack_00000080 = *(ulonglong **)(*(longlong *)(unaff_RBX + 0x5828) + uVar7 * 8);
      lVar5 = lVar8 + 8;
      if (lVar8 != lVar5) {
        lVar2 = *(longlong *)(unaff_RBX + 0x5830);
        if (lVar5 != lVar2) {
                    // WARNING: Subroutine does not return
          memmove(lVar8,lVar5,lVar2 - lVar5);
        }
        *(longlong *)(unaff_RBX + 0x5830) = lVar2 + -8;
      }
      FUN_18005ea90(unaff_RBX + 0x5808,&stack0x00000080);
      unaff_R13D = unaff_R13D - 1;
    }
    param_1 = *(longlong *)(unaff_RBX + 0x5828);
    unaff_R13D = unaff_R13D + 1;
    if ((uint)(*(longlong *)(unaff_RBX + 0x5830) - param_1 >> 3) <= unaff_R13D) {
      lVar5 = *(longlong *)(unaff_RBX + 0x5868);
      if ((int)(*(longlong *)(unaff_RBX + 0x5870) - lVar5 >> 3) != 0) {
        do {
          iVar9 = (int)unaff_RDI;
          uVar7 = unaff_RDI & 0xffffffff;
          dVar12 = *(double *)(*(longlong *)(lVar5 + uVar7 * 8) + 8) + 3.0;
          if (dVar12 <= (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) &&
              (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) != dVar12) {
            lVar8 = *(longlong *)(unaff_RBX + 0x5868) + uVar7 * 8;
            in_stack_00000080 = *(ulonglong **)(*(longlong *)(unaff_RBX + 0x5868) + uVar7 * 8);
            lVar5 = lVar8 + 8;
            if (lVar8 != lVar5) {
              lVar2 = *(longlong *)(unaff_RBX + 0x5870);
              if (lVar5 != lVar2) {
                    // WARNING: Subroutine does not return
                memmove(lVar8,lVar5,lVar2 - lVar5);
              }
              *(longlong *)(unaff_RBX + 0x5870) = lVar2 + -8;
            }
            FUN_18005ea90(unaff_RBX + 0x5848,&stack0x00000080);
            iVar9 = iVar9 + -1;
          }
          lVar5 = *(longlong *)(unaff_RBX + 0x5868);
          unaff_RDI = (ulonglong)(iVar9 + 1U);
        } while (iVar9 + 1U < (uint)(*(longlong *)(unaff_RBX + 0x5870) - lVar5 >> 3));
      }
      return;
    }
  } while( true );
LAB_1805b3e92:
  if ((*piVar4 == iVar9) && (piVar4[1] == piVar1[1])) {
    *(int8_t *)(piVar4 + 7) = 1;
    goto LAB_1805b3eb4;
  }
  uVar6 = (int)uVar7 + 1;
  uVar7 = (ulonglong)uVar6;
  piVar4 = piVar4 + 8;
  if (uVar10 <= (ulonglong)(longlong)(int)uVar6) {
LAB_1805b3eb4:
    lVar5 = *(longlong *)(unaff_RBX + 0x5848);
    lVar8 = *(longlong *)(unaff_RBX + 0x5850);
    if (lVar5 == lVar8) {
      puVar3 = (ulonglong *)
               FUN_18062b1e0(_DAT_180c8ed18,0xc98,8,CONCAT71((uint7)(uint3)((uint)iVar9 >> 8),3));
      *puVar3 = unaff_RDI;
      *puVar3 = _DAT_180c966e8;
      puVar3[1] = unaff_RDI;
      puVar3[2] = unaff_RDI;
    }
    else {
      uVar10 = lVar8 - lVar5 >> 3;
      puVar3 = *(ulonglong **)(lVar5 + -8 + uVar10 * 8);
      uVar7 = uVar10 - 1;
      if (uVar10 < uVar7) {
        in_stack_00000080 = puVar3;
        if (*(longlong *)(unaff_RBX + 0x5858) - lVar8 >> 3 == -1) {
                    // WARNING: Subroutine does not return
          memset(lVar8,0,0xfffffffffffffff8);
        }
        uVar11 = uVar10 * 2;
        if (uVar10 == 0) {
          uVar11 = 1;
        }
        if (uVar11 < uVar7) {
          uVar11 = uVar7;
        }
        if (uVar11 != 0) {
          unaff_RDI = FUN_18062b420(_DAT_180c8ed18,uVar11 * 8,*(int8_t *)(unaff_RBX + 0x5860));
          lVar5 = *(longlong *)(unaff_RBX + 0x5848);
          lVar8 = *(longlong *)(unaff_RBX + 0x5850);
        }
        if (lVar5 != lVar8) {
                    // WARNING: Subroutine does not return
          memmove(unaff_RDI,lVar5,lVar8 - lVar5);
        }
                    // WARNING: Subroutine does not return
        memset(unaff_RDI,0,0xfffffffffffffff8);
      }
      *(ulonglong *)(unaff_RBX + 0x5850) = lVar5 + uVar7 * 8;
    }
    in_stack_00000080 = puVar3;
    FUN_18005ea90(unaff_RBX + 0x5868,&stack0x00000080);
                    // WARNING: Subroutine does not return
    memcpy(puVar3,piVar1,0xc98);
  }
  goto LAB_1805b3e92;
}






// 函数: void FUN_1805b40d1(void)
void FUN_1805b40d1(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  uint unaff_EDI;
  double dVar5;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  uint64_t uStack0000000000000080;
  
  lVar3 = *(longlong *)(unaff_RBX + 0x5868);
  if ((int)(*(longlong *)(unaff_RBX + 0x5870) - lVar3 >> 3) != 0) {
    do {
      uVar4 = (ulonglong)unaff_EDI;
      dVar5 = *(double *)(*(longlong *)(lVar3 + uVar4 * 8) + 8) + 3.0;
      if (dVar5 <= (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) &&
          (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) != dVar5) {
        lVar1 = *(longlong *)(unaff_RBX + 0x5868) + uVar4 * 8;
        uStack0000000000000080 = *(uint64_t *)(*(longlong *)(unaff_RBX + 0x5868) + uVar4 * 8);
        lVar3 = lVar1 + 8;
        if (lVar1 != lVar3) {
          lVar2 = *(longlong *)(unaff_RBX + 0x5870);
          if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
            memmove(lVar1,lVar3,lVar2 - lVar3);
          }
          *(longlong *)(unaff_RBX + 0x5870) = lVar2 + -8;
        }
        FUN_18005ea90(unaff_RBX + 0x5848,&stack0x00000080);
        unaff_EDI = unaff_EDI - 1;
      }
      lVar3 = *(longlong *)(unaff_RBX + 0x5868);
      unaff_EDI = unaff_EDI + 1;
    } while (unaff_EDI < (uint)(*(longlong *)(unaff_RBX + 0x5870) - lVar3 >> 3));
  }
  return;
}






// 函数: void FUN_1805b40f3(longlong param_1)
void FUN_1805b40f3(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  uint unaff_EDI;
  double dVar5;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  uint64_t uStack0000000000000080;
  
  do {
    uVar4 = (ulonglong)unaff_EDI;
    dVar5 = *(double *)(*(longlong *)(param_1 + uVar4 * 8) + 8) + 3.0;
    if (dVar5 <= (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) &&
        (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) != dVar5) {
      lVar2 = *(longlong *)(unaff_RBX + 0x5868) + uVar4 * 8;
      uStack0000000000000080 = *(uint64_t *)(*(longlong *)(unaff_RBX + 0x5868) + uVar4 * 8);
      lVar1 = lVar2 + 8;
      if (lVar2 != lVar1) {
        lVar3 = *(longlong *)(unaff_RBX + 0x5870);
        if (lVar1 != lVar3) {
                    // WARNING: Subroutine does not return
          memmove(lVar2,lVar1,lVar3 - lVar1);
        }
        *(longlong *)(unaff_RBX + 0x5870) = lVar3 + -8;
      }
      FUN_18005ea90(unaff_RBX + 0x5848,&stack0x00000080);
      unaff_EDI = unaff_EDI - 1;
    }
    param_1 = *(longlong *)(unaff_RBX + 0x5868);
    unaff_EDI = unaff_EDI + 1;
  } while (unaff_EDI < (uint)(*(longlong *)(unaff_RBX + 0x5870) - param_1 >> 3));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




