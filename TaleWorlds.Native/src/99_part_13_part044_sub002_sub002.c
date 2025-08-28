#include "TaleWorlds.Native.Split.h"

// 99_part_13_part044_sub002_sub002.c - 1 个函数

// 函数: void FUN_1808c1e30(longlong param_1,longlong param_2)
void FUN_1808c1e30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x30) == -1) {
    iVar2 = FUN_180867810(*(undefined8 *)(param_1 + 0x7c0));
    if (iVar2 != 0) {
      return;
    }
    plVar1 = (longlong *)(param_2 + 8);
    **(undefined8 **)(param_2 + 0x10) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(*plVar1 + 8) = *(undefined8 *)(param_2 + 0x10);
    *(longlong **)(param_2 + 0x10) = plVar1;
    *plVar1 = (longlong)plVar1;
  }
  iVar2 = FUN_1808c1c80(param_1 + 0xa0,param_2);
  if (iVar2 == 0) {
    FUN_1808be9f0(param_1 + 0x430,param_2);
  }
  return;
}



undefined8 FUN_1808c1eb0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined8 uStack_40;
  int aiStack_38 [4];
  
  uStack_40 = 0xffffffffffffffff;
  aiStack_38[0] = -1;
  FUN_1808741f0((longlong *)(param_1 + 0x108),&uStack_40,aiStack_38);
  if (aiStack_38[0] != -1) {
    iVar8 = aiStack_38[0];
    iVar6 = (int)uStack_40;
    do {
      do {
        uStack_40 = 0xffffffffffffffff;
        aiStack_38[0] = -1;
        plVar1 = *(longlong **)((longlong)iVar8 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x118));
        FUN_1807d1650(plVar1,&uStack_40,aiStack_38);
        if (aiStack_38[0] != -1) {
          iVar7 = aiStack_38[0];
          iVar5 = (int)uStack_40;
          do {
            do {
              uVar2 = FUN_180853ba0(*(undefined8 *)(plVar1[2] + 8 + (longlong)iVar7 * 0x10),0);
              if ((int)uVar2 != 0) {
                return uVar2;
              }
            } while ((iVar7 != -1) &&
                    (iVar7 = *(int *)(plVar1[2] + 4 + (longlong)iVar7 * 0x10), iVar7 != -1));
            iVar7 = iVar5 + 1;
            bVar9 = iVar5 != -1;
            iVar5 = 0;
            if (bVar9) {
              iVar5 = iVar7;
            }
            if (iVar5 != (int)plVar1[1]) {
              lVar3 = (longlong)iVar5;
              do {
                if (*(int *)(*plVar1 + lVar3 * 4) != -1) {
                  iVar7 = *(int *)(*plVar1 + (longlong)iVar5 * 4);
                  goto LAB_1808c1fcb;
                }
                iVar5 = iVar5 + 1;
                lVar3 = lVar3 + 1;
              } while (lVar3 != (int)plVar1[1]);
            }
            iVar7 = -1;
            iVar5 = iVar7;
LAB_1808c1fcb:
          } while (iVar7 != -1);
        }
      } while ((iVar8 != -1) &&
              (iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x10 + *(longlong *)(param_1 + 0x118)),
              iVar8 != -1));
      iVar8 = iVar6 + 1;
      bVar9 = iVar6 != -1;
      iVar6 = 0;
      if (bVar9) {
        iVar6 = iVar8;
      }
      if (iVar6 != *(int *)(param_1 + 0x110)) {
        lVar3 = *(longlong *)(param_1 + 0x108);
        lVar4 = (longlong)iVar6;
        do {
          if (*(int *)(lVar3 + lVar4 * 4) != -1) {
            iVar8 = *(int *)(lVar3 + (longlong)iVar6 * 4);
            goto LAB_1808c201d;
          }
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 1;
        } while (lVar4 != *(int *)(param_1 + 0x110));
      }
      iVar8 = -1;
      iVar6 = iVar8;
LAB_1808c201d:
    } while (iVar8 != -1);
  }
  return 0;
}



undefined8 FUN_1808c2060(longlong param_1,uint *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 auStackX_18 [16];
  
  if (param_3 == '\0') {
    if (*(int *)(param_1 + 0x28c) != 0) {
      if (*(int *)(param_1 + 0x270) == 0) {
        return 0x1c;
      }
      lVar1 = *(longlong *)(param_1 + 0x268);
      lVar4 = (longlong)
              (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                   *(int *)(param_1 + 0x270) - 1U);
      piVar5 = (int *)(lVar1 + lVar4 * 4);
      iVar2 = *(int *)(lVar1 + lVar4 * 4);
      if (iVar2 != -1) {
        lVar1 = *(longlong *)(param_1 + 0x278);
        do {
          lVar4 = (longlong)iVar2;
          if ((*(longlong *)(lVar1 + lVar4 * 0x18) == *(longlong *)param_2) &&
             (*(longlong *)(lVar1 + 8 + lVar4 * 0x18) == *(longlong *)(param_2 + 2))) {
            iVar2 = *piVar5;
            lVar4 = (longlong)iVar2;
            *(undefined1 *)(lVar1 + 0x14 + lVar4 * 0x18) = 0;
            *piVar5 = *(int *)(lVar1 + 0x10 + lVar4 * 0x18);
            *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = *(undefined4 *)(param_1 + 0x288);
            *(int *)(param_1 + 0x28c) = *(int *)(param_1 + 0x28c) + -1;
            *(int *)(param_1 + 0x288) = iVar2;
            return 0;
          }
          iVar2 = *(int *)(lVar1 + 0x10 + lVar4 * 0x18);
          piVar5 = (int *)(lVar1 + 0x10 + lVar4 * 0x18);
        } while (iVar2 != -1);
      }
    }
  }
  else {
    auStackX_18[0] = 1;
    uVar3 = FUN_180879610((longlong *)(param_1 + 0x268),param_2,auStackX_18);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  return 0;
}



bool FUN_1808c2150(longlong param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar8;
  ulonglong uVar9;
  code *pcVar10;
  int iVar11;
  float extraout_XMM0_Da;
  float fVar12;
  float extraout_XMM0_Da_00;
  ulonglong uVar7;
  
  if (param_3 == (int *)0x0) {
    return false;
  }
  uVar9 = 0;
  iVar8 = 0;
  *param_3 = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x50) + 0xe8) == 1) {
    return true;
  }
  plVar1 = (longlong *)(param_1 + 0x28);
  iVar3 = FUN_1808bd910(plVar1);
  iVar11 = *(int *)(*(longlong *)(param_1 + 0x50) + 0xd8);
  if (iVar3 < iVar11) {
    return true;
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x50) + 0xe8);
  if (iVar2 == 0) {
    return false;
  }
  iVar11 = (iVar3 - iVar11) + 1;
  if (iVar2 == 2) {
    func_0x0001808bd8a0(plVar1);
    pcVar10 = (code *)&UNK_180863400;
  }
  else if (iVar2 == 3) {
    func_0x0001808bd8a0(plVar1);
    pcVar10 = (code *)&UNK_1808633a0;
  }
  else {
    if (iVar2 != 4) goto LAB_1808c2219;
    func_0x0001808bd8a0(plVar1);
    pcVar10 = FUN_1808632b0;
  }
  qsort(*plVar1,(longlong)*(int *)(param_1 + 0x30),8,pcVar10);
LAB_1808c2219:
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x50) + 0xe8);
  uVar5 = uVar9;
  uVar7 = uVar9;
  if (iVar3 == 2) {
    for (; ((-1 < (longlong)uVar5 && ((int)uVar7 < *(int *)(param_1 + 0x34))) &&
           (*(longlong *)(*plVar1 + uVar5 * 8) == 0)); uVar5 = uVar5 + 1) {
      uVar7 = (ulonglong)((int)uVar7 + 1);
    }
    iVar8 = 0;
    if (0 < iVar11) {
      while( true ) {
        iVar8 = (int)uVar9;
        iVar3 = (int)uVar7;
        if (((iVar3 < 0) || (*(int *)(param_1 + 0x34) <= iVar3)) ||
           (*(longlong *)(*plVar1 + (longlong)iVar3 * 8) == 0)) break;
        lVar4 = *(longlong *)(*plVar1 + (longlong)iVar3 * 8);
        uVar5 = (ulonglong)(iVar8 + 1);
        if (3 < *(int *)(lVar4 + 0x2e4) - 1U) {
          uVar5 = uVar9;
        }
        uVar9 = uVar5;
        if (*(longlong *)(lVar4 + 0x2b8) == *(longlong *)(param_2 + 0x2b8)) {
          *param_3 = *param_3 + 1;
        }
        uVar6 = iVar3 + 1;
        for (lVar4 = (longlong)(int)uVar6;
            ((uVar7 = (ulonglong)uVar6, -1 < lVar4 && ((int)uVar6 < *(int *)(param_1 + 0x34))) &&
            (*(longlong *)(*plVar1 + lVar4 * 8) == 0)); lVar4 = lVar4 + 1) {
          uVar6 = uVar6 + 1;
        }
        if (iVar11 <= (int)uVar9) {
          return iVar11 <= (int)uVar9;
        }
      }
    }
  }
  else if (iVar3 == 3) {
    func_0x00018085fd60(param_2);
    for (; ((-1 < (longlong)uVar5 && ((int)uVar7 < *(int *)(param_1 + 0x34))) &&
           (*(longlong *)(*plVar1 + uVar5 * 8) == 0)); uVar5 = uVar5 + 1) {
      uVar7 = (ulonglong)((int)uVar7 + 1);
    }
    if (0 < iVar11) {
      do {
        iVar8 = (int)uVar9;
        iVar3 = (int)uVar7;
        if (((iVar3 < 0) || (*(int *)(param_1 + 0x34) <= iVar3)) ||
           (*(longlong *)(*plVar1 + (longlong)iVar3 * 8) == 0)) break;
        lVar4 = *(longlong *)(*plVar1 + (longlong)iVar3 * 8);
        if ((*(int *)(lVar4 + 0x2e4) - 1U < 4) &&
           (fVar12 = (float)func_0x00018085fd60(lVar4), fVar12 <= extraout_XMM0_Da)) {
          uVar9 = (ulonglong)(iVar8 + 1);
        }
        iVar8 = (int)uVar9;
        if (*(longlong *)(lVar4 + 0x2b8) == *(longlong *)(param_2 + 0x2b8)) {
          *param_3 = *param_3 + 1;
        }
        uVar6 = iVar3 + 1;
        for (lVar4 = (longlong)(int)uVar6;
            ((uVar7 = (ulonglong)uVar6, -1 < lVar4 && ((int)uVar6 < *(int *)(param_1 + 0x34))) &&
            (*(longlong *)(*plVar1 + lVar4 * 8) == 0)); lVar4 = lVar4 + 1) {
          uVar6 = uVar6 + 1;
        }
      } while (iVar8 < iVar11);
    }
  }
  else if (iVar3 == 4) {
    FUN_18085f080(param_2);
    for (; ((-1 < (longlong)uVar5 && ((int)uVar7 < *(int *)(param_1 + 0x34))) &&
           (*(longlong *)(*plVar1 + uVar5 * 8) == 0)); uVar5 = uVar5 + 1) {
      uVar7 = (ulonglong)((int)uVar7 + 1);
    }
    if (0 < iVar11) {
      do {
        iVar8 = (int)uVar9;
        iVar3 = (int)uVar7;
        if (((iVar3 < 0) || (*(int *)(param_1 + 0x34) <= iVar3)) ||
           (*(longlong *)(*plVar1 + (longlong)iVar3 * 8) == 0)) break;
        lVar4 = *(longlong *)(*plVar1 + (longlong)iVar3 * 8);
        if ((*(int *)(lVar4 + 0x2e4) - 1U < 4) &&
           (fVar12 = (float)FUN_18085f080(lVar4), extraout_XMM0_Da_00 <= fVar12)) {
          uVar9 = (ulonglong)(iVar8 + 1);
        }
        iVar8 = (int)uVar9;
        if (*(longlong *)(lVar4 + 0x2b8) == *(longlong *)(param_2 + 0x2b8)) {
          *param_3 = *param_3 + 1;
        }
        uVar6 = iVar3 + 1;
        for (lVar4 = (longlong)(int)uVar6;
            ((uVar7 = (ulonglong)uVar6, -1 < lVar4 && ((int)uVar6 < *(int *)(param_1 + 0x34))) &&
            (*(longlong *)(*plVar1 + lVar4 * 8) == 0)); lVar4 = lVar4 + 1) {
          uVar6 = uVar6 + 1;
        }
      } while (iVar8 < iVar11);
    }
  }
  return iVar11 <= iVar8;
}



bool FUN_1808c22e0(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *unaff_RBX;
  ulonglong unaff_RBP;
  uint uVar4;
  ulonglong uVar5;
  longlong unaff_R13;
  int *unaff_R14;
  int unaff_R15D;
  float fVar6;
  float fVar7;
  
  if (param_1 == 3) {
    fVar6 = (float)func_0x00018085fd60();
    uVar5 = unaff_RBP & 0xffffffff;
    for (uVar2 = unaff_RBP;
        ((-1 < (longlong)uVar2 && ((int)uVar5 < *(int *)((longlong)unaff_RBX + 0xc))) &&
        (*(ulonglong *)(*unaff_RBX + uVar2 * 8) == unaff_RBP)); uVar2 = uVar2 + 1) {
      uVar5 = (ulonglong)((int)uVar5 + 1);
    }
    if (0 < unaff_R15D) {
      do {
        iVar1 = (int)uVar5;
        if (((iVar1 < 0) || (*(int *)((longlong)unaff_RBX + 0xc) <= iVar1)) ||
           (*(longlong *)(*unaff_RBX + (longlong)iVar1 * 8) == 0)) break;
        lVar3 = *(longlong *)(*unaff_RBX + (longlong)iVar1 * 8);
        if ((*(int *)(lVar3 + 0x2e4) - 1U < 4) &&
           (fVar7 = (float)func_0x00018085fd60(lVar3), fVar7 <= fVar6)) {
          unaff_RBP = (ulonglong)((int)unaff_RBP + 1);
        }
        if (*(longlong *)(lVar3 + 0x2b8) == *(longlong *)(unaff_R13 + 0x2b8)) {
          *unaff_R14 = *unaff_R14 + 1;
        }
        uVar4 = iVar1 + 1;
        for (lVar3 = (longlong)(int)uVar4;
            ((uVar5 = (ulonglong)uVar4, -1 < lVar3 &&
             ((int)uVar4 < *(int *)((longlong)unaff_RBX + 0xc))) &&
            (*(longlong *)(*unaff_RBX + lVar3 * 8) == 0)); lVar3 = lVar3 + 1) {
          uVar4 = uVar4 + 1;
        }
      } while ((int)unaff_RBP < unaff_R15D);
    }
  }
  else if (param_1 == 4) {
    fVar6 = (float)FUN_18085f080();
    uVar5 = unaff_RBP & 0xffffffff;
    for (uVar2 = unaff_RBP;
        ((-1 < (longlong)uVar2 && ((int)uVar5 < *(int *)((longlong)unaff_RBX + 0xc))) &&
        (*(ulonglong *)(*unaff_RBX + uVar2 * 8) == unaff_RBP)); uVar2 = uVar2 + 1) {
      uVar5 = (ulonglong)((int)uVar5 + 1);
    }
    if (0 < unaff_R15D) {
      do {
        iVar1 = (int)uVar5;
        if (((iVar1 < 0) || (*(int *)((longlong)unaff_RBX + 0xc) <= iVar1)) ||
           (*(longlong *)(*unaff_RBX + (longlong)iVar1 * 8) == 0)) break;
        lVar3 = *(longlong *)(*unaff_RBX + (longlong)iVar1 * 8);
        if ((*(int *)(lVar3 + 0x2e4) - 1U < 4) &&
           (fVar7 = (float)FUN_18085f080(lVar3), fVar6 <= fVar7)) {
          unaff_RBP = (ulonglong)((int)unaff_RBP + 1);
        }
        if (*(longlong *)(lVar3 + 0x2b8) == *(longlong *)(unaff_R13 + 0x2b8)) {
          *unaff_R14 = *unaff_R14 + 1;
        }
        uVar4 = iVar1 + 1;
        for (lVar3 = (longlong)(int)uVar4;
            ((uVar5 = (ulonglong)uVar4, -1 < lVar3 &&
             ((int)uVar4 < *(int *)((longlong)unaff_RBX + 0xc))) &&
            (*(longlong *)(*unaff_RBX + lVar3 * 8) == 0)); lVar3 = lVar3 + 1) {
          uVar4 = uVar4 + 1;
        }
      } while ((int)unaff_RBP < unaff_R15D);
    }
  }
  return unaff_R15D <= (int)unaff_RBP;
}



bool FUN_1808c2461(void)

{
  int unaff_EBP;
  int unaff_R15D;
  
  return unaff_R15D <= unaff_EBP;
}



int FUN_1808c2490(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  iVar2 = FUN_18088a1f0(param_1 + 0x30);
  if (iVar2 == 0) {
    iVar2 = FUN_18088a1f0(param_1);
  }
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return iVar2;
}



ulonglong FUN_1808c24f0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  uVar2 = FUN_18088a1f0(param_1 + 0x68);
  if ((uVar2 == 0) && (uVar2 = FUN_18088a1f0(param_1 + 0x38), uVar2 == 0)) {
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
  }
  else {
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
    if (uVar2 != 0) {
      return (ulonglong)uVar2;
    }
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  uVar2 = FUN_18088a1f0(param_1 + 0xd0);
  if ((uVar2 == 0) && (uVar2 = FUN_18088a1f0(param_1 + 0xa0), uVar2 == 0)) {
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
  }
  else {
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
    if (uVar2 != 0) {
      return (ulonglong)uVar2;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x130);
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  uVar2 = FUN_18088a1f0(param_1 + 0x138);
  if ((uVar2 == 0) && (uVar2 = FUN_18088a1f0(param_1 + 0x108), uVar2 == 0)) {
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
  }
  else {
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
    if (uVar2 != 0) {
      return (ulonglong)uVar2;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x200);
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  uVar2 = FUN_18088a1f0(param_1 + 0x208);
  if ((uVar2 == 0) && (uVar2 = FUN_18088a1f0(param_1 + 0x1d8), uVar2 == 0)) {
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
  }
  else {
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
    if (uVar2 != 0) {
      return (ulonglong)uVar2;
    }
  }
  uVar3 = FUN_1808c2490(param_1 + 0x170);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (*(int *)(param_1 + 0x264) == 0) {
    uVar3 = FUN_180744cc0(param_1 + 0x240);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = FUN_1808744f0(param_1 + 0x250);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    *(undefined4 *)(param_1 + 0x260) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x264) = 0;
  }
  uVar3 = FUN_1808c2490(param_1 + 0x170);
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808c26e0(longlong param_1,longlong param_2,char param_3,longlong param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char *pcVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  float fVar19;
  uint auStackX_18 [2];
  longlong lStackX_20;
  int iStack_a4;
  longlong *plStack_a0;
  undefined8 uStack_98;
  longlong *plStack_90;
  undefined8 uStack_88;
  int aiStack_80 [2];
  longlong *plStack_78;
  undefined8 uStack_70;
  int aiStack_68 [10];
  
  uVar1 = *(undefined1 *)(param_1 + 0x780);
  *(undefined1 *)(param_1 + 0x780) = 1;
  lStackX_20 = param_4;
  if ((param_3 == '\0') && (uVar3 = FUN_1808bc920(), (int)uVar3 != 0)) {
LAB_1808c2c1e:
    *(undefined1 *)(param_1 + 0x780) = uVar1;
    return uVar3;
  }
  lVar11 = *(longlong *)(param_1 + 0x4c8);
  lVar9 = *(longlong *)(param_1 + 0x4d0);
  plVar15 = (longlong *)0x0;
  *(longlong *)(param_1 + 0x4d0) = lVar11;
  iStack_a4 = 0;
  uVar3 = FUN_18073a840(*(undefined8 *)(param_1 + 0x4c0),&iStack_a4,0,0);
  if ((int)uVar3 != 0) goto LAB_1808c2c1e;
  fVar19 = (float)(lVar11 - lVar9) / (float)iStack_a4;
  uVar3 = FUN_1808e1ef0(*(undefined8 *)(param_1 + 0x790),0);
  if (((int)uVar3 != 0) ||
     (uVar3 = func_0x0001808e0b20(*(undefined8 *)(param_1 + 0x788)), (int)uVar3 != 0))
  goto LAB_1808c2c1e;
  plVar10 = (longlong *)(*(longlong *)(param_1 + 0x18) + -8);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    plVar10 = plVar15;
  }
  plVar7 = plVar15;
  if (plVar10 != (longlong *)0x0) {
    plVar7 = plVar10 + 1;
  }
  while (plVar7 != (longlong *)(param_1 + 0x18)) {
    plVar10 = plVar7 + -1;
    if (plVar7 == (longlong *)0x0) {
      plVar10 = plVar15;
    }
    uVar3 = FUN_1808d7550(plVar10,fVar19);
    if ((int)uVar3 != 0) goto LAB_1808c2c1e;
    if (plVar7 == (longlong *)(param_1 + 0x18)) break;
    plVar10 = (longlong *)(*plVar7 + -8);
    if (*plVar7 == 0) {
      plVar10 = plVar15;
    }
    plVar7 = plVar15;
    if (plVar10 != (longlong *)0x0) {
      plVar7 = plVar10 + 1;
    }
  }
  uVar3 = func_0x0001808d57c0(param_1 + 0x338,*(undefined8 *)(param_1 + 0x4d0));
  if ((int)uVar3 != 0) goto LAB_1808c2c1e;
  plVar10 = (longlong *)(param_1 + 0x530);
  plVar8 = plVar15;
  for (plVar7 = plVar15;
      ((plStack_a0 = plVar10, -1 < (longlong)plVar7 && ((int)plVar8 < *(int *)(param_1 + 0x53c))) &&
      (*(longlong *)(*plVar10 + (longlong)plVar7 * 8) == 0));
      plVar7 = (longlong *)((longlong)plVar7 + 1)) {
    plVar8 = (longlong *)(ulonglong)((int)plVar8 + 1);
  }
  while (((iVar6 = (int)plVar8, -1 < iVar6 && (iVar6 < *(int *)((longlong)plVar10 + 0xc))) &&
         (*(longlong *)(*plVar10 + (longlong)iVar6 * 8) != 0))) {
    lVar11 = *(longlong *)(*plVar10 + (longlong)iVar6 * 8);
    plVar7 = (longlong *)(lVar11 + 0x28);
    plVar14 = plVar15;
    for (plVar8 = plVar15;
        ((-1 < (longlong)plVar8 && ((int)plVar14 < *(int *)(lVar11 + 0x34))) &&
        (*(longlong *)(*plVar7 + (longlong)plVar8 * 8) == 0));
        plVar8 = (longlong *)((longlong)plVar8 + 1)) {
      plVar14 = (longlong *)(ulonglong)((int)plVar14 + 1);
    }
    while (((iVar17 = (int)plVar14, -1 < iVar17 && (iVar17 < *(int *)(lVar11 + 0x34))) &&
           (*(longlong *)(*plVar7 + (longlong)iVar17 * 8) != 0))) {
      uVar3 = FUN_180864040(*(undefined8 *)(*plVar7 + (longlong)iVar17 * 8),fVar19);
      if ((int)uVar3 != 0) goto LAB_1808c2c1e;
      uVar12 = iVar17 + 1;
      for (lVar9 = (longlong)(int)uVar12;
          ((plVar14 = (longlong *)(ulonglong)uVar12, -1 < lVar9 &&
           ((int)uVar12 < *(int *)(lVar11 + 0x34))) && (*(longlong *)(*plVar7 + lVar9 * 8) == 0));
          lVar9 = lVar9 + 1) {
        uVar12 = uVar12 + 1;
      }
    }
    func_0x0001808bd8a0(plVar7);
    if ((*(int *)(lVar11 + 0x30) != 0) && (*(int *)(*(longlong *)(lVar11 + 0x50) + 0xe8) == 1)) {
      plVar10 = plVar15;
      plVar8 = plVar15;
      if (*(int *)(*(longlong *)(lVar11 + 0x50) + 0xd8) < *(int *)(lVar11 + 0x30)) {
        func_0x0001808bd8a0(plVar7);
        qsort(*plVar7,(longlong)*(int *)(lVar11 + 0x30),8,&UNK_1808633a0);
      }
      for (; ((-1 < (longlong)plVar10 && ((int)plVar8 < *(int *)(lVar11 + 0x34))) &&
             (*(longlong *)(*plVar7 + (longlong)plVar10 * 8) == 0));
          plVar10 = (longlong *)((longlong)plVar10 + 1)) {
        plVar8 = (longlong *)(ulonglong)((int)plVar8 + 1);
      }
      while (((iVar17 = (int)plVar8, plVar10 = plStack_a0, -1 < iVar17 &&
              (iVar17 < *(int *)(lVar11 + 0x34))) &&
             (*(longlong *)(*plVar7 + (longlong)iVar17 * 8) != 0))) {
        uVar3 = FUN_180863180(*(undefined8 *)(*plVar7 + (longlong)iVar17 * 8));
        if ((int)uVar3 != 0) goto LAB_1808c2c1e;
        uVar12 = iVar17 + 1;
        for (lVar9 = (longlong)(int)uVar12;
            ((plVar8 = (longlong *)(ulonglong)uVar12, -1 < lVar9 &&
             ((int)uVar12 < *(int *)(lVar11 + 0x34))) && (*(longlong *)(*plVar7 + lVar9 * 8) == 0));
            lVar9 = lVar9 + 1) {
          uVar12 = uVar12 + 1;
        }
      }
    }
    uVar12 = iVar6 + 1;
    for (lVar11 = (longlong)(int)uVar12;
        ((plVar8 = (longlong *)(ulonglong)uVar12, -1 < lVar11 &&
         ((int)uVar12 < *(int *)((longlong)plVar10 + 0xc))) &&
        (*(longlong *)(*plVar10 + lVar11 * 8) == 0)); lVar11 = lVar11 + 1) {
      uVar12 = uVar12 + 1;
    }
  }
  if (((*(uint *)(*(longlong *)(param_1 + 0x4c0) + 0x78) & 0x10000) == 0) &&
     (*(char *)(_DAT_180be12f0 + 0x158) == '\0')) goto LAB_1808c2bee;
  plStack_90 = (longlong *)(param_1 + 0x38);
  uStack_88 = 0xffffffffffffffff;
  aiStack_80[0] = -1;
  FUN_1808741f0(plStack_90,&uStack_88,aiStack_80);
  if (aiStack_80[0] != -1) {
    plVar15 = plStack_90;
    iVar6 = aiStack_80[0];
    iVar17 = (int)uStack_88;
    do {
      uStack_70 = 0xffffffffffffffff;
      aiStack_68[0] = -1;
      plStack_78 = *(longlong **)(plVar15[2] + 0x18 + (longlong)iVar6 * 0x20);
      FUN_1807d1650(plStack_78,&uStack_70,aiStack_68);
      plVar10 = plStack_78;
      if (aiStack_68[0] != -1) {
        iVar16 = aiStack_68[0];
        iVar13 = (int)uStack_70;
        do {
          do {
            if ((*(longlong *)(*(longlong *)(plVar10[2] + 8 + (longlong)iVar16 * 0x10) + 0x350) == 0
                ) && (uVar3 = FUN_180865470(), (int)uVar3 != 0)) goto LAB_1808c2c1e;
          } while ((iVar16 != -1) &&
                  (iVar16 = *(int *)(plVar10[2] + 4 + (longlong)iVar16 * 0x10), iVar16 != -1));
          iVar16 = iVar13 + 1;
          bVar18 = iVar13 != -1;
          iVar13 = 0;
          if (bVar18) {
            iVar13 = iVar16;
          }
          if (iVar13 != (int)plVar10[1]) {
            lVar11 = (longlong)iVar13;
            do {
              if (*(int *)(*plVar10 + lVar11 * 4) != -1) {
                iVar16 = *(int *)(*plVar10 + (longlong)iVar13 * 4);
                goto LAB_1808c2b1a;
              }
              iVar13 = iVar13 + 1;
              lVar11 = lVar11 + 1;
            } while (lVar11 != (int)plVar10[1]);
          }
          iVar16 = -1;
          iVar13 = iVar16;
LAB_1808c2b1a:
          plVar15 = plStack_90;
        } while (iVar16 != -1);
      }
      if ((iVar6 == -1) ||
         (iVar6 = *(int *)(plVar15[2] + 0x10 + (longlong)iVar6 * 0x20), iVar6 == -1)) {
        iVar6 = iVar17 + 1;
        bVar18 = iVar17 != -1;
        iVar17 = 0;
        if (bVar18) {
          iVar17 = iVar6;
        }
        if (iVar17 != (int)plVar15[1]) {
          lVar11 = (longlong)iVar17;
          do {
            if (*(int *)(*plVar15 + lVar11 * 4) != -1) {
              iVar6 = *(int *)(*plVar15 + (longlong)iVar17 * 4);
              goto LAB_1808c2b90;
            }
            iVar17 = iVar17 + 1;
            lVar11 = lVar11 + 1;
          } while (lVar11 != (int)plVar15[1]);
        }
        iVar6 = -1;
        iVar17 = iVar6;
      }
LAB_1808c2b90:
      plVar10 = plStack_a0;
    } while (iVar6 != -1);
  }
  lVar11 = *(longlong *)(param_1 + 0x7a0);
  if (lVar11 == 0) {
    if (lStackX_20 == 0) goto LAB_1808c2bee;
    plStack_a0 = *(longlong **)(lStackX_20 + 0x10);
    uStack_98 = *(undefined8 *)(lStackX_20 + 0x18);
    lVar11 = FUN_180851c50(param_1 + 0x108,&plStack_a0,0xffffffff);
    if (lVar11 == 0) goto LAB_1808c2bee;
  }
  auStackX_18[0] = 0;
  FUN_1808533d0(lVar11,auStackX_18);
LAB_1808c2bee:
  uVar3 = 0;
  if (*(int *)(param_1 + 0x538) == 0) {
    func_0x0001808bd8a0(plVar10);
    uVar4 = FUN_1808c17c0(plVar10,(int)plVar10[1]);
    if ((int)uVar4 != 0) {
      *(undefined1 *)(param_1 + 0x780) = uVar1;
      return uVar4;
    }
  }
  else {
    func_0x0001808bd8a0(plVar10);
  }
  if (0 < *(int *)(param_1 + 0x550)) {
    pcVar5 = (char *)(param_1 + 0x595);
    uVar4 = uVar3;
    do {
      if (*pcVar5 != '\0') {
        *pcVar5 = '\0';
      }
      uVar12 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar12;
      pcVar5 = pcVar5 + 0x44;
    } while ((int)uVar12 < *(int *)(param_1 + 0x550));
  }
  uVar4 = FUN_1808d5710(param_1 + 0x4a8);
  if ((int)uVar4 == 0) {
    plVar15 = (longlong *)(param_1 + 0x4d8);
    uVar4 = uVar3;
    for (; ((-1 < (longlong)uVar3 && ((int)uVar4 < *(int *)(param_1 + 0x4e4))) &&
           (*(longlong *)(*plVar15 + uVar3 * 8) == 0)); uVar3 = uVar3 + 1) {
      uVar4 = (ulonglong)((int)uVar4 + 1);
    }
    while (((iVar6 = (int)uVar4, -1 < iVar6 && (iVar6 < *(int *)(param_1 + 0x4e4))) &&
           (*(longlong *)(*plVar15 + (longlong)iVar6 * 8) != 0))) {
      uVar2 = *(undefined8 *)(*plVar15 + (longlong)iVar6 * 8);
      auStackX_18[0] = auStackX_18[0] & 0xffffff00;
      uVar4 = FUN_180853000(uVar2,auStackX_18);
      if (((int)uVar4 != 0) ||
         (((char)auStackX_18[0] != (char)uVar4 &&
          (uVar4 = FUN_180851490(param_1 + 0x368,uVar2), (int)uVar4 != 0)))) goto LAB_1808c2d92;
      uVar12 = iVar6 + 1;
      for (lVar11 = (longlong)(int)uVar12;
          ((uVar4 = (ulonglong)uVar12, -1 < lVar11 && ((int)uVar12 < *(int *)(param_1 + 0x4e4))) &&
          (*(longlong *)(*plVar15 + lVar11 * 8) == 0)); lVar11 = lVar11 + 1) {
        uVar12 = uVar12 + 1;
      }
    }
    if (*(int *)(param_1 + 0x4e0) == 0) {
      func_0x0001808bd8a0(plVar15);
      uVar3 = FUN_1808c17c0(plVar15,*(undefined4 *)(param_1 + 0x4e0));
      if ((int)uVar3 != 0) {
        *(undefined1 *)(param_1 + 0x780) = uVar1;
        return uVar3;
      }
    }
    else {
      func_0x0001808bd8a0(plVar15);
    }
    uVar4 = FUN_1808bdeb0(param_1);
    if ((((int)uVar4 == 0) && (uVar4 = FUN_1808d94a0(param_1 + 0x2c8), (int)uVar4 == 0)) &&
       ((uVar4 = FUN_1808e1ef0(*(undefined8 *)(param_1 + 0x790),0), (int)uVar4 == 0 &&
        (uVar4 = func_0x0001808e0b20(*(undefined8 *)(param_1 + 0x788)), (int)uVar4 == 0)))) {
      *(undefined1 *)(param_1 + 0x780) = uVar1;
      if ((param_2 != 0) && (uVar3 = FUN_180772c50(param_2,1), (int)uVar3 != 0)) {
        return uVar3;
      }
      uVar12 = FUN_18073bf60(*(undefined8 *)(param_1 + 0x4c0));
      if ((param_2 != 0) && (uVar3 = FUN_180772c50(param_2,0), (int)uVar3 != 0)) {
        return uVar3;
      }
      return (ulonglong)uVar12;
    }
  }
LAB_1808c2d92:
  *(undefined1 *)(param_1 + 0x780) = uVar1;
  return uVar4;
}



longlong FUN_1808c2e00(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x48);
  FUN_180855780(plVar1);
  **(longlong **)(param_1 + 0x50) = *plVar1;
  *(undefined8 *)(*plVar1 + 8) = *(undefined8 *)(param_1 + 0x50);
  *(longlong **)(param_1 + 0x50) = plVar1;
  *plVar1 = (longlong)plVar1;
  plVar1 = (longlong *)(param_1 + 0x38);
  FUN_180855780(plVar1);
  **(longlong **)(param_1 + 0x40) = *plVar1;
  *(undefined8 *)(*plVar1 + 8) = *(undefined8 *)(param_1 + 0x40);
  *(longlong **)(param_1 + 0x40) = plVar1;
  *plVar1 = (longlong)plVar1;
  plVar1 = (longlong *)(param_1 + 0x28);
  FUN_180855780(plVar1);
  **(longlong **)(param_1 + 0x30) = *plVar1;
  *(undefined8 *)(*plVar1 + 8) = *(undefined8 *)(param_1 + 0x30);
  *(longlong **)(param_1 + 0x30) = plVar1;
  *plVar1 = (longlong)plVar1;
  FUN_1808b1a30(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x80);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808c2ec0(longlong param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lStackX_10;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  lStackX_10 = param_1;
  uVar1 = FUN_1808c4160(param_2 + 0xb0,&lStackX_10);
  if ((int)uVar1 == 0) {
    if ((param_3 != '\0') && (uVar1 = FUN_18084ed10(param_2), (int)uVar1 != 0)) {
      return uVar1;
    }
    plVar2 = (longlong *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x18,&UNK_180984b50,0xbf,0,0,1);
    if (plVar2 == (longlong *)0x0) {
      return 0x26;
    }
    plVar2[1] = (longlong)plVar2;
    *plVar2 = (longlong)plVar2;
    plVar2[2] = param_2;
    plVar2[1] = *(longlong *)(param_1 + 0x30);
    *plVar2 = param_1 + 0x28;
    *(longlong **)(param_1 + 0x30) = plVar2;
    *(longlong **)plVar2[1] = plVar2;
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 FUN_1808c2fb0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lStackX_10;
  longlong alStackX_18 [2];
  
  if (param_2 == 0) {
    return 0x1f;
  }
  lStackX_10 = param_2;
  alStackX_18[0] = param_1;
  uVar1 = FUN_1808c4160(param_2 + 0x48,alStackX_18);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_1808c4570(param_2);
    if ((int)uVar1 == 0) {
      uVar1 = FUN_1808c4160(param_1 + 0x38,&lStackX_10);
    }
  }
  return uVar1;
}



undefined8 FUN_1808c3020(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 0x28);
  for (puVar2 = *(undefined8 **)(param_1 + 0x28); puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2)
  {
    uVar3 = FUN_1808c4440(puVar2[2],param_1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (puVar2 == puVar1) break;
  }
  FUN_180855780(puVar1);
  puVar1 = (undefined8 *)(param_1 + 0x38);
  for (puVar2 = *(undefined8 **)(param_1 + 0x38); puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2)
  {
    uVar3 = FUN_1808c30e0(puVar2[2],param_1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (puVar2 == puVar1) break;
  }
  FUN_180855780(puVar1);
  puVar1 = (undefined8 *)(param_1 + 0x48);
  for (puVar2 = *(undefined8 **)(param_1 + 0x48); puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2)
  {
    uVar3 = FUN_1808c30e0(puVar2[2],param_1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (puVar2 == puVar1) break;
  }
  FUN_180855780(puVar1);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808c30e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  plVar1 = (longlong *)(param_1 + 0x38);
  if (plVar2 == plVar1) {
LAB_1808c3135:
    if (plVar2 != plVar1) {
      *(longlong *)plVar2[1] = *plVar2;
      *(longlong *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (longlong)plVar2;
      *plVar2 = (longlong)plVar2;
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar2,&UNK_180984b50,0xe1,1);
    }
  }
  else {
    do {
      if (plVar2[2] == param_2) goto LAB_1808c3135;
    } while ((plVar2 != plVar1) && (plVar2 = (longlong *)*plVar2, plVar2 != plVar1));
  }
  plVar2 = *(longlong **)(param_1 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x48);
  if (plVar2 != plVar1) {
    while (plVar2[2] != param_2) {
      if (plVar2 == plVar1) {
        return 0;
      }
      plVar2 = (longlong *)*plVar2;
      if (plVar2 == plVar1) {
        return 0;
      }
    }
  }
  if (plVar2 == plVar1) {
    return 0;
  }
  *(longlong *)plVar2[1] = *plVar2;
  *(longlong *)(*plVar2 + 8) = plVar2[1];
  plVar2[1] = (longlong)plVar2;
  *plVar2 = (longlong)plVar2;
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar2,&UNK_180984b50,0xe1,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808c3220(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  int iVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  int iVar12;
  
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  lVar5 = (**(code **)(*(longlong *)param_1[3] + 0x2f8))((longlong *)param_1[3],param_2,1);
  if (lVar5 == 0) {
    return 0;
  }
  lVar2 = param_1[2];
  bVar15 = false;
  *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + 1;
  lStack_60 = lVar2 + 0x38;
  *(int *)(lVar2 + 0x1d0) = *(int *)(lVar2 + 0x1d0) + 1;
  *(int *)(lVar2 + 0x168) = *(int *)(lVar2 + 0x168) + 1;
  *(int *)(lVar2 + 0x238) = *(int *)(lVar2 + 0x238) + 1;
  lVar8 = *param_1;
  lStack_48 = lVar2 + 0x170;
  lStack_50 = lVar2 + 0x108;
  lStack_58 = lVar2 + 0x1d8;
  lVar10 = *(longlong *)(lVar8 + 0x28);
  bVar17 = false;
  bVar16 = false;
  bVar18 = false;
  bVar14 = lVar10 == 0;
  if (bVar14) {
    lVar10 = 0;
  }
  else {
    FUN_180768360(lVar10);
  }
  lVar6 = func_0x000180851be0(lVar8 + 0x30,param_2);
  if (lVar6 == 0) {
    lVar6 = func_0x000180851be0(lVar8,param_2);
  }
  if (!bVar14) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar10);
  }
  iVar12 = 0;
  iVar11 = 0;
  iVar13 = 0;
  if (lVar6 != 0) {
    lVar8 = lStack_60;
    iVar3 = 0x1c;
    goto LAB_1808c3648;
  }
  puVar7 = (undefined8 *)
           FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x80,&UNK_180987780,0x12f,0,0,1);
  lVar8 = lStack_60;
  if (puVar7 == (undefined8 *)0x0) {
    iVar3 = 0x26;
    goto LAB_1808c3648;
  }
  lVar10 = param_1[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = lVar10;
  puVar1 = puVar7 + 5;
  *puVar7 = &UNK_180987738;
  *puVar1 = puVar1;
  puVar7[6] = puVar1;
  puVar1 = puVar7 + 7;
  *puVar1 = puVar1;
  puVar7[8] = puVar1;
  puVar1 = puVar7 + 9;
  *puVar1 = puVar1;
  puVar7[10] = puVar1;
  puVar7[0xb] = lVar5;
  puVar7[0xc] = 0;
  puVar7[0xd] = param_1;
  *(undefined4 *)(puVar7 + 0xe) = 0x3f800000;
  *(undefined8 *)((longlong)puVar7 + 0x74) = 0x3f800000;
  lVar10 = *(longlong *)(lVar5 + 0x48);
  if (lVar10 != 0) {
    if (*(longlong *)(lVar10 + 8) != 0) {
      iVar3 = 0x1c;
      goto LAB_1808c3648;
    }
    *(undefined8 **)(lVar10 + 8) = puVar7;
    puVar7[0xc] = lVar10;
  }
  lVar8 = (**(code **)*puVar7)(puVar7);
  iVar3 = FUN_1808c3de0(*param_1,lVar8 + 0x10,puVar7);
  lVar8 = lStack_60;
  if (iVar3 != 0) goto LAB_1808c3648;
  for (uVar9 = *(ulonglong *)(lVar5 + 0x38);
      (*(ulonglong *)(lVar5 + 0x38) <= uVar9 &&
      (uVar9 < (longlong)*(int *)(lVar5 + 0x40) * 0x10 + *(ulonglong *)(lVar5 + 0x38)));
      uVar9 = uVar9 + 0x10) {
    lStack_68 = 0;
    iVar3 = FUN_1808bc240(param_1[2],uVar9,0xffffffff,&lStack_68);
    lVar8 = lStack_60;
    if ((iVar3 != 0) ||
       ((lStack_68 != 0 && (iVar3 = FUN_1808c2fb0(lStack_68,puVar7), lVar8 = lStack_60, iVar3 != 0))
       )) goto LAB_1808c3648;
  }
  iVar3 = FUN_1808b89f0(param_1[2] + 0x290,puVar7);
  lVar8 = lStack_60;
  if ((iVar3 != 0) || (iVar3 = FUN_1808b2f30(puVar7,0), lVar8 = lStack_60, iVar3 != 0))
  goto LAB_1808c3648;
  *(int *)(puVar7 + 0xf) = *(int *)(puVar7 + 0xf) + 1;
  lVar8 = lVar2 + 0x38;
  iVar3 = 0x1c;
  if (*(int *)(lVar2 + 0x98) < 1) {
    iVar4 = 0x1c;
  }
  else {
    if ((*(int *)(lVar2 + 0x98) != 1) || (iVar4 = FUN_1808501b0(lVar8), iVar4 == 0)) {
      *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + -1;
      iVar4 = iVar11;
    }
    bVar15 = iVar4 == 0;
  }
  if (iVar4 == 0) {
    iVar4 = iVar13;
  }
  if (iVar4 == 0) {
    if (*(int *)(lVar2 + 0x168) < 1) {
      iVar4 = 0x1c;
    }
    else {
      if ((*(int *)(lVar2 + 0x168) != 1) || (iVar4 = FUN_18084f7f0(lVar2 + 0x108), iVar4 == 0)) {
        *(int *)(lVar2 + 0x168) = *(int *)(lVar2 + 0x168) + -1;
        iVar4 = iVar12;
      }
      bVar16 = iVar4 == 0;
    }
    if (iVar4 == 0) {
      iVar4 = iVar11;
    }
    if (iVar4 != 0) goto LAB_1808c3631;
    if (*(int *)(lVar2 + 0x1d0) < 1) {
      iVar4 = 0x1c;
    }
    else {
      if ((*(int *)(lVar2 + 0x1d0) != 1) || (iVar4 = FUN_18084fcd0(lVar2 + 0x170), iVar4 == 0)) {
        *(int *)(lVar2 + 0x1d0) = *(int *)(lVar2 + 0x1d0) + -1;
        iVar4 = iVar12;
      }
      bVar17 = iVar4 == 0;
    }
    if (iVar4 == 0) {
      iVar4 = iVar11;
    }
    if (iVar4 != 0) goto LAB_1808c3631;
    if (0 < *(int *)(lVar2 + 0x238)) {
      if ((*(int *)(lVar2 + 0x238) != 1) || (iVar3 = FUN_180850690(lVar2 + 0x1d8), iVar3 == 0)) {
        *(int *)(lVar2 + 0x238) = *(int *)(lVar2 + 0x238) + -1;
        iVar3 = iVar12;
      }
      bVar18 = iVar3 == 0;
    }
    if (iVar3 == 0) {
      iVar3 = iVar13;
    }
    if (iVar3 != 0) goto LAB_1808c3648;
    iVar4 = FUN_1808bd690(lVar2);
    if (iVar4 != 0) goto LAB_1808c3631;
  }
  else {
LAB_1808c3631:
    iVar3 = iVar4;
    if (iVar4 != 0) goto LAB_1808c3648;
  }
  iVar3 = iVar13;
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = puVar7;
  }
LAB_1808c3648:
  if (!bVar18) {
    *(undefined4 *)(lStack_58 + 0x60) = 0;
    FUN_18084f560(lStack_58 + 0x30);
  }
  if (!bVar16) {
    *(undefined4 *)(lStack_50 + 0x60) = 0;
    FUN_18084f040(lStack_50 + 0x30);
  }
  if (!bVar17) {
    *(undefined4 *)(lStack_48 + 0x60) = 0;
    FUN_18084f040(lStack_48 + 0x30);
  }
  if (!bVar15) {
    *(undefined4 *)(lVar8 + 0x60) = 0;
    FUN_18084f2d0(lVar8 + 0x30);
  }
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808c3266(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong unaff_RBP;
  longlong lVar9;
  longlong *unaff_R12;
  int iVar10;
  int iVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  longlong in_stack_00000050;
  longlong lStack0000000000000058;
  longlong lStack0000000000000060;
  longlong lStack0000000000000068;
  longlong lStack0000000000000070;
  undefined8 *in_stack_000000d8;
  int iVar11;
  
  lVar2 = unaff_R12[2];
  bVar14 = false;
  *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + 1;
  lStack0000000000000058 = lVar2 + 0x38;
  *(int *)(lVar2 + 0x1d0) = *(int *)(lVar2 + 0x1d0) + 1;
  *(int *)(lVar2 + 0x168) = *(int *)(lVar2 + 0x168) + 1;
  *(int *)(lVar2 + 0x238) = *(int *)(lVar2 + 0x238) + 1;
  lVar7 = *unaff_R12;
  lStack0000000000000070 = lVar2 + 0x170;
  lStack0000000000000068 = lVar2 + 0x108;
  lStack0000000000000060 = lVar2 + 0x1d8;
  lVar9 = *(longlong *)(lVar7 + 0x28);
  bVar16 = false;
  bVar15 = false;
  bVar17 = false;
  bVar13 = lVar9 == 0;
  if (bVar13) {
    lVar9 = 0;
  }
  else {
    FUN_180768360(lVar9);
  }
  lVar5 = func_0x000180851be0(lVar7 + 0x30);
  if (lVar5 == 0) {
    lVar5 = func_0x000180851be0(lVar7);
  }
  if (!bVar13) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar9);
  }
  iVar11 = 0;
  iVar10 = 0;
  iVar12 = 0;
  if (lVar5 != 0) {
    lVar7 = lStack0000000000000058;
    iVar3 = 0x1c;
    goto LAB_1808c3648;
  }
  puVar6 = (undefined8 *)
           FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x80,&UNK_180987780,0x12f,0);
  lVar7 = lStack0000000000000058;
  if (puVar6 == (undefined8 *)0x0) {
    iVar3 = 0x26;
    goto LAB_1808c3648;
  }
  lVar9 = unaff_R12[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = lVar9;
  puVar1 = puVar6 + 5;
  *puVar6 = &UNK_180987738;
  *puVar1 = puVar1;
  puVar6[6] = puVar1;
  puVar1 = puVar6 + 7;
  *puVar1 = puVar1;
  puVar6[8] = puVar1;
  puVar1 = puVar6 + 9;
  *puVar1 = puVar1;
  puVar6[10] = puVar1;
  puVar6[0xb] = unaff_RBP;
  puVar6[0xc] = 0;
  puVar6[0xd] = unaff_R12;
  *(undefined4 *)(puVar6 + 0xe) = 0x3f800000;
  *(undefined8 *)((longlong)puVar6 + 0x74) = 0x3f800000;
  lVar9 = *(longlong *)(unaff_RBP + 0x48);
  if (lVar9 != 0) {
    if (*(longlong *)(lVar9 + 8) != 0) {
      iVar3 = 0x1c;
      goto LAB_1808c3648;
    }
    *(undefined8 **)(lVar9 + 8) = puVar6;
    puVar6[0xc] = lVar9;
  }
  lVar7 = (**(code **)*puVar6)(puVar6);
  iVar3 = FUN_1808c3de0(*unaff_R12,lVar7 + 0x10,puVar6);
  lVar7 = lStack0000000000000058;
  if (iVar3 != 0) goto LAB_1808c3648;
  for (uVar8 = *(ulonglong *)(unaff_RBP + 0x38);
      (*(ulonglong *)(unaff_RBP + 0x38) <= uVar8 &&
      (uVar8 < (longlong)*(int *)(unaff_RBP + 0x40) * 0x10 + *(ulonglong *)(unaff_RBP + 0x38)));
      uVar8 = uVar8 + 0x10) {
    in_stack_00000050 = 0;
    iVar3 = FUN_1808bc240(unaff_R12[2],uVar8,0xffffffff,&stack0x00000050);
    lVar7 = lStack0000000000000058;
    if ((iVar3 != 0) ||
       ((in_stack_00000050 != 0 &&
        (iVar3 = FUN_1808c2fb0(in_stack_00000050,puVar6), lVar7 = lStack0000000000000058, iVar3 != 0
        )))) goto LAB_1808c3648;
  }
  iVar3 = FUN_1808b89f0(unaff_R12[2] + 0x290,puVar6);
  lVar7 = lStack0000000000000058;
  if ((iVar3 != 0) || (iVar3 = FUN_1808b2f30(puVar6,0), lVar7 = lStack0000000000000058, iVar3 != 0))
  goto LAB_1808c3648;
  *(int *)(puVar6 + 0xf) = *(int *)(puVar6 + 0xf) + 1;
  lVar7 = lVar2 + 0x38;
  iVar3 = 0x1c;
  if (*(int *)(lVar2 + 0x98) < 1) {
    iVar4 = 0x1c;
  }
  else {
    if ((*(int *)(lVar2 + 0x98) != 1) || (iVar4 = FUN_1808501b0(lVar7), iVar4 == 0)) {
      *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + -1;
      iVar4 = iVar10;
    }
    bVar14 = iVar4 == 0;
  }
  if (iVar4 == 0) {
    iVar4 = iVar12;
  }
  if (iVar4 == 0) {
    if (*(int *)(lVar2 + 0x168) < 1) {
      iVar4 = 0x1c;
    }
    else {
      if ((*(int *)(lVar2 + 0x168) != 1) || (iVar4 = FUN_18084f7f0(lVar2 + 0x108), iVar4 == 0)) {
        *(int *)(lVar2 + 0x168) = *(int *)(lVar2 + 0x168) + -1;
        iVar4 = iVar11;
      }
      bVar15 = iVar4 == 0;
    }
    if (iVar4 == 0) {
      iVar4 = iVar10;
    }
    if (iVar4 != 0) goto LAB_1808c3631;
    if (*(int *)(lVar2 + 0x1d0) < 1) {
      iVar4 = 0x1c;
    }
    else {
      if ((*(int *)(lVar2 + 0x1d0) != 1) || (iVar4 = FUN_18084fcd0(lVar2 + 0x170), iVar4 == 0)) {
        *(int *)(lVar2 + 0x1d0) = *(int *)(lVar2 + 0x1d0) + -1;
        iVar4 = iVar11;
      }
      bVar16 = iVar4 == 0;
    }
    if (iVar4 == 0) {
      iVar4 = iVar10;
    }
    if (iVar4 != 0) goto LAB_1808c3631;
    if (0 < *(int *)(lVar2 + 0x238)) {
      if ((*(int *)(lVar2 + 0x238) != 1) || (iVar3 = FUN_180850690(lVar2 + 0x1d8), iVar3 == 0)) {
        *(int *)(lVar2 + 0x238) = *(int *)(lVar2 + 0x238) + -1;
        iVar3 = iVar11;
      }
      bVar17 = iVar3 == 0;
    }
    if (iVar3 == 0) {
      iVar3 = iVar12;
    }
    if (iVar3 != 0) goto LAB_1808c3648;
    iVar4 = FUN_1808bd690(lVar2);
    if (iVar4 != 0) goto LAB_1808c3631;
  }
  else {
LAB_1808c3631:
    iVar3 = iVar4;
    if (iVar4 != 0) goto LAB_1808c3648;
  }
  iVar3 = iVar12;
  if (in_stack_000000d8 != (undefined8 *)0x0) {
    *in_stack_000000d8 = puVar6;
  }
LAB_1808c3648:
  if (!bVar17) {
    *(undefined4 *)(lStack0000000000000060 + 0x60) = 0;
    FUN_18084f560(lStack0000000000000060 + 0x30);
  }
  if (!bVar15) {
    *(undefined4 *)(lStack0000000000000068 + 0x60) = 0;
    FUN_18084f040(lStack0000000000000068 + 0x30);
  }
  if (!bVar16) {
    *(undefined4 *)(lStack0000000000000070 + 0x60) = 0;
    FUN_18084f040(lStack0000000000000070 + 0x30);
  }
  if (!bVar14) {
    *(undefined4 *)(lVar7 + 0x60) = 0;
    FUN_18084f2d0(lVar7 + 0x30);
  }
  return iVar3;
}



undefined4 FUN_1808c366a(void)

{
  undefined4 unaff_EBX;
  longlong unaff_RDI;
  undefined4 unaff_R14D;
  char cStack0000000000000040;
  char cStack0000000000000044;
  char in_stack_00000048;
  longlong in_stack_00000060;
  longlong in_stack_00000068;
  longlong in_stack_00000070;
  
  *(undefined4 *)(in_stack_00000060 + 0x60) = unaff_R14D;
  FUN_18084f560(in_stack_00000060 + 0x30);
  if (cStack0000000000000040 == '\0') {
    *(undefined4 *)(in_stack_00000068 + 0x60) = unaff_R14D;
    FUN_18084f040(in_stack_00000068 + 0x30);
  }
  if (cStack0000000000000044 == '\0') {
    *(undefined4 *)(in_stack_00000070 + 0x60) = unaff_R14D;
    FUN_18084f040(in_stack_00000070 + 0x30);
  }
  if (in_stack_00000048 == '\0') {
    *(undefined4 *)(unaff_RDI + 0x60) = unaff_R14D;
    FUN_18084f2d0(unaff_RDI + 0x30);
  }
  return unaff_EBX;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808c3700(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1808c3020(param_2);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_1808c41f0(*param_1,param_2);
    if ((int)uVar2 == 0) {
      lVar1 = param_2[0xc];
      if (lVar1 != 0) {
        if (*(longlong **)(lVar1 + 8) != param_2) {
          return 0x1c;
        }
        *(undefined8 *)(lVar1 + 8) = 0;
      }
      (**(code **)(*param_2 + 0x28))(param_2,0);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2,&UNK_180987780,0x161,1);
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808c37a0(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined8 uStack_30;
  int aiStack_28 [4];
  
  lVar4 = *param_1;
  lVar6 = *(longlong *)(lVar4 + 0x28);
  bVar8 = lVar6 == 0;
  if (bVar8) {
    lVar6 = 0;
  }
  else {
    FUN_180768360(lVar6);
  }
  plVar2 = (longlong *)func_0x000180851be0(lVar4 + 0x30,param_2);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)func_0x000180851be0(lVar4,param_2);
  }
  if (!bVar8) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar6);
  }
  if (plVar2 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uStack_30 = 0xffffffffffffffff;
    aiStack_28[0] = -1;
    FUN_1807d1650(plVar2,&uStack_30,aiStack_28);
    if (aiStack_28[0] != -1) {
      iVar7 = aiStack_28[0];
      iVar5 = (int)uStack_30;
      do {
        do {
          uVar3 = FUN_1808c3020(*(undefined8 *)(plVar2[2] + 8 + (longlong)iVar7 * 0x10));
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        } while ((iVar7 != -1) &&
                (iVar7 = *(int *)(plVar2[2] + 4 + (longlong)iVar7 * 0x10), iVar7 != -1));
        iVar7 = iVar5 + 1;
        bVar8 = iVar5 != -1;
        iVar5 = 0;
        if (bVar8) {
          iVar5 = iVar7;
        }
        if (iVar5 != (int)plVar2[1]) {
          lVar4 = (longlong)iVar5;
          do {
            if (*(int *)(*plVar2 + lVar4 * 4) != -1) {
              iVar7 = *(int *)(*plVar2 + (longlong)iVar5 * 4);
              goto LAB_1808c38c7;
            }
            iVar5 = iVar5 + 1;
            lVar4 = lVar4 + 1;
          } while (lVar4 != (int)plVar2[1]);
        }
        iVar7 = -1;
        iVar5 = iVar7;
LAB_1808c38c7:
      } while (iVar7 != -1);
    }
    lVar4 = *param_1;
    lVar6 = *(longlong *)(lVar4 + 0x28);
    if (lVar6 != 0) {
      FUN_180768360(lVar6);
    }
    uVar1 = func_0x0001808534b0(lVar4,plVar2 + 5);
    uVar3 = (ulonglong)uVar1;
    if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar6);
    }
    if (uVar1 == 0) {
      FUN_1808bbe80(plVar2);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar2,&UNK_180987780,0x172,1);
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808c37b9(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong unaff_RDI;
  longlong *unaff_R12;
  bool bVar8;
  int iStack0000000000000038;
  int in_stack_00000040;
  
  lVar5 = *(longlong *)(unaff_RDI + 0x28);
  bVar8 = lVar5 == 0;
  if (bVar8) {
    lVar5 = 0;
  }
  else {
    FUN_180768360(lVar5);
  }
  plVar3 = (longlong *)func_0x000180851be0(unaff_RDI + 0x30,param_2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)func_0x000180851be0();
  }
  if (!bVar8) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar5);
  }
  if (plVar3 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    _iStack0000000000000038 = 0xffffffffffffffff;
    in_stack_00000040 = -1;
    FUN_1807d1650(plVar3,&stack0x00000038,&stack0x00000040);
    if (in_stack_00000040 != -1) {
      iVar7 = in_stack_00000040;
      iVar6 = iStack0000000000000038;
      do {
        do {
          uVar4 = FUN_1808c3020(*(undefined8 *)(plVar3[2] + 8 + (longlong)iVar7 * 0x10));
          if ((int)uVar4 != 0) {
            return uVar4;
          }
        } while ((iVar7 != -1) &&
                (iVar7 = *(int *)(plVar3[2] + 4 + (longlong)iVar7 * 0x10), iVar7 != -1));
        iVar7 = iVar6 + 1;
        bVar8 = iVar6 != -1;
        iVar6 = 0;
        if (bVar8) {
          iVar6 = iVar7;
        }
        if (iVar6 != (int)plVar3[1]) {
          lVar5 = (longlong)iVar6;
          do {
            if (*(int *)(*plVar3 + lVar5 * 4) != -1) {
              iVar7 = *(int *)(*plVar3 + (longlong)iVar6 * 4);
              goto LAB_1808c38c7;
            }
            iVar6 = iVar6 + 1;
            lVar5 = lVar5 + 1;
          } while (lVar5 != (int)plVar3[1]);
        }
        iVar7 = -1;
        iVar6 = iVar7;
LAB_1808c38c7:
      } while (iVar7 != -1);
    }
    lVar5 = *unaff_R12;
    lVar1 = *(longlong *)(lVar5 + 0x28);
    if (lVar1 != 0) {
      FUN_180768360(lVar1);
    }
    uVar2 = func_0x0001808534b0(lVar5,plVar3 + 5);
    uVar4 = (ulonglong)uVar2;
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
    if (uVar2 == 0) {
      FUN_1808bbe80(plVar3);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar3,&UNK_180987780,0x172,1);
    }
  }
  return uVar4;
}








