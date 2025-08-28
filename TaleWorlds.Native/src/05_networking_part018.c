#include "TaleWorlds.Native.Split.h"

// 05_networking_part018.c - 3 个函数

// 函数: void FUN_180851432(void)
void FUN_180851432(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -8) ^ (ulonglong)&stack0x00000000);
}



undefined8 FUN_180851490(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)0x0;
  plVar1 = (longlong *)(param_2 + 0xa0);
  plVar4 = (longlong *)(*plVar1 + -0x20);
  if (*plVar1 == 0) {
    plVar4 = plVar7;
  }
  plVar5 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    plVar5 = plVar4 + 4;
  }
  while (plVar5 != plVar1) {
    plVar4 = plVar5 + -4;
    if (plVar5 == (longlong *)0x0) {
      plVar4 = plVar7;
    }
    uVar3 = func_0x0001808b5710(plVar4,param_2);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (plVar5 == plVar1) break;
    plVar4 = (longlong *)(*plVar5 + -0x20);
    if (*plVar5 == 0) {
      plVar4 = plVar7;
    }
    plVar5 = plVar7;
    if (plVar4 != (longlong *)0x0) {
      plVar5 = plVar4 + 4;
    }
  }
  plVar1 = (longlong *)(param_2 + 0x50);
  while ((plVar4 = (longlong *)*plVar1, plVar4 != plVar1 ||
         (*(longlong **)(param_2 + 0x58) != plVar1))) {
    if (plVar4 == plVar1) {
      plVar4 = plVar7;
    }
    plVar5 = plVar1;
    if (plVar4 != (longlong *)0x0) {
      plVar5 = plVar4;
    }
    FUN_180851840(plVar5[2]);
  }
  uVar3 = FUN_18073cdf0(*(undefined8 *)(param_2 + 0x78),0);
  if ((int)uVar3 == 0) {
    for (puVar6 = *(undefined8 **)(param_2 + 0x80);
        (*(undefined8 **)(param_2 + 0x80) <= puVar6 &&
        (puVar6 < *(undefined8 **)(param_2 + 0x80) + *(int *)(param_2 + 0x88))); puVar6 = puVar6 + 1
        ) {
      uVar3 = FUN_1808b4c80(*(longlong *)(param_1 + 0x10) + 0x388,*puVar6);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    for (puVar6 = *(undefined8 **)(param_2 + 0x90);
        (*(undefined8 **)(param_2 + 0x90) <= puVar6 &&
        (puVar6 < *(undefined8 **)(param_2 + 0x90) + *(int *)(param_2 + 0x98))); puVar6 = puVar6 + 1
        ) {
      uVar3 = FUN_1808b4c80(*(longlong *)(param_1 + 0x10) + 0x388,*puVar6);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    uVar3 = FUN_180744d60(param_2 + 0x80);
    if (((int)uVar3 == 0) && (uVar3 = FUN_180744d60(param_2 + 0x90), (int)uVar3 == 0)) {
      lVar2 = *(longlong *)(param_2 + 0x60);
      uVar3 = FUN_180851840(param_2);
      if ((((int)uVar3 == 0) &&
          (((lVar2 == 0 ||
            (uVar3 = FUN_1808c19d0(*(undefined8 *)(param_2 + 0x38),lVar2), (int)uVar3 == 0)) &&
           (uVar3 = func_0x0001808c1de0(*(undefined8 *)(param_1 + 0x10),param_2), (int)uVar3 == 0)))
          ) && ((uVar3 = func_0x000180853810(*(undefined8 *)(param_1 + 0x10),param_2),
                (int)uVar3 == 0 &&
                (uVar3 = FUN_180853560(*(undefined8 *)(param_1 + 8),param_2), (int)uVar3 == 0)))) {
        plVar1 = (longlong *)(param_2 + 0xb0);
        while (((longlong *)*plVar1 != plVar1 || (*(longlong **)(param_2 + 0xb8) != plVar1))) {
          uVar3 = FUN_1808c4370(((longlong *)*plVar1)[2],param_2,0);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_1808c1c20(*(undefined8 *)(param_1 + 0x10));
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
        uVar3 = FUN_1808b1f70(param_2);
        if ((int)uVar3 == 0) {
          lVar2 = *(longlong *)(param_2 + 0x48);
          if (lVar2 != 0) {
            if (*(longlong *)(lVar2 + 8) != param_2) {
              return 0x1c;
            }
            FUN_18088c9b0(lVar2,0);
          }
          if (((*(short *)(*(longlong *)(param_2 + 0x40) + 0xc) != 2) ||
              (uVar3 = FUN_180740d90(*(undefined8 *)(param_2 + 0x68)), (int)uVar3 == 0)) &&
             (uVar3 = FUN_18073f710(*(undefined8 *)(param_2 + 0x78)), (int)uVar3 == 0)) {
            func_0x0001808bef10(*(undefined8 *)(param_1 + 0x10),param_2);
            uVar3 = 0;
          }
        }
      }
    }
  }
  return uVar3;
}



undefined8 FUN_180851740(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
  bVar7 = lVar5 == 0;
  if (bVar7) {
    lVar5 = 0;
  }
  else {
    FUN_180768360(lVar5);
  }
  puVar2 = (undefined8 *)func_0x000180851be0();
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)func_0x000180851be0();
  }
  if (!bVar7) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar5);
  }
  if (puVar2 != (undefined8 *)0x0) {
    iVar1 = *(int *)((longlong)puVar2 + 0x24);
    iVar6 = 0;
    if (0 < iVar1) {
      do {
        if (*(int *)(puVar2 + 1) != 0) {
          piVar3 = (int *)*puVar2;
          lVar5 = 0;
          do {
            if (*piVar3 != -1) break;
            lVar5 = lVar5 + 1;
            piVar3 = piVar3 + 1;
          } while (lVar5 != *(int *)(puVar2 + 1));
        }
        uVar4 = FUN_180851490();
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
  }
  return 0;
}



undefined8 FUN_180851840(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  longlong *plStack_28;
  longlong *plStack_20;
  
  if (((*(byte *)(*(longlong *)(param_1 + 0x40) + 0xc4) & 1) != 0) ||
     (uVar3 = FUN_1808b8f60(0,param_1), (int)uVar3 == 0)) {
    lVar1 = *(longlong *)(param_1 + 0x60);
    if (lVar1 != 0) {
      plStack_20 = *(longlong **)(lVar1 + 0x50);
      plStack_28 = (longlong *)(lVar1 + 0x50);
      if (plStack_20 != plStack_28) {
        while (plStack_20[2] != param_1) {
          if ((plStack_20 == plStack_28) ||
             (plStack_20 = (longlong *)*plStack_20, plStack_20 == plStack_28)) goto LAB_180851913;
        }
        uStackX_8 = 0;
        uVar3 = FUN_18073cb70(*(undefined8 *)(param_1 + 0x78),&uStackX_8);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uStackX_10 = 0;
        uVar3 = FUN_18073a200(uStackX_8,&uStackX_10);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = FUN_18073f130(uStackX_10,*(undefined8 *)(param_1 + 0x78),1,0);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = FUN_180853790(&plStack_28);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
LAB_180851913:
      if (*(longlong *)(param_1 + 0x48) != 0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x2a) = 0;
      }
      bVar4 = *(char *)(*(longlong *)(param_1 + 0x40) + 0x74) != '\0';
      FUN_18073d8a0(*(undefined8 *)(param_1 + 0x78),bVar4);
      for (puVar2 = *(undefined8 **)(param_1 + 0x50);
          (puVar2 != (undefined8 *)(param_1 + 0x50) &&
          (FUN_180853fc0(puVar2[2],bVar4), puVar2 != (undefined8 *)(param_1 + 0x50)));
          puVar2 = (undefined8 *)*puVar2) {
      }
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    if ((*(uint *)(param_1 + 0xc0) >> 3 & 1) != 0) {
      uStackX_8 = 0;
      uVar3 = FUN_18073cb70(*(undefined8 *)(param_1 + 0x78),&uStackX_8);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = FUN_180739350(uStackX_8,*(undefined8 *)(param_1 + 0x78));
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xfffffff7;
    }
    uVar3 = 0;
  }
  return uVar3;
}



undefined8 FUN_18085186c(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong unaff_RDI;
  bool bVar5;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if (param_1 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x50);
    plVar4 = (longlong *)(param_1 + 0x50);
    if (plVar2 != plVar4) {
      while (plVar2[2] != unaff_RDI) {
        if ((plVar2 == plVar4) || (plVar2 = (longlong *)*plVar2, plVar2 == plVar4))
        goto LAB_180851913;
      }
      in_stack_00000050 = 0;
      uVar3 = FUN_18073cb70(*(undefined8 *)(unaff_RDI + 0x78),&stack0x00000050,param_3,param_4,
                            plVar4);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      in_stack_00000058 = 0;
      uVar3 = FUN_18073a200(in_stack_00000050,&stack0x00000058);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = FUN_18073f130(in_stack_00000058,*(undefined8 *)(unaff_RDI + 0x78),1,0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = FUN_180853790(&stack0x00000020);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
LAB_180851913:
    if (*(longlong *)(unaff_RDI + 0x48) != 0) {
      *(undefined1 *)(*(longlong *)(unaff_RDI + 0x48) + 0x2a) = 0;
    }
    bVar5 = *(char *)(*(longlong *)(unaff_RDI + 0x40) + 0x74) != '\0';
    FUN_18073d8a0(*(undefined8 *)(unaff_RDI + 0x78),bVar5);
    for (puVar1 = *(undefined8 **)(unaff_RDI + 0x50);
        (puVar1 != (undefined8 *)(unaff_RDI + 0x50) &&
        (FUN_180853fc0(puVar1[2],bVar5), puVar1 != (undefined8 *)(unaff_RDI + 0x50)));
        puVar1 = (undefined8 *)*puVar1) {
    }
    *(undefined8 *)(unaff_RDI + 0x60) = 0;
  }
  if ((*(uint *)(unaff_RDI + 0xc0) >> 3 & 1) != 0) {
    in_stack_00000050 = 0;
    uVar3 = FUN_18073cb70(*(undefined8 *)(unaff_RDI + 0x78),&stack0x00000050);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = FUN_180739350(in_stack_00000050,*(undefined8 *)(unaff_RDI + 0x78));
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    *(uint *)(unaff_RDI + 0xc0) = *(uint *)(unaff_RDI + 0xc0) & 0xfffffff7;
  }
  return 0;
}



undefined8 FUN_180851917(void)

{
  undefined8 *puVar1;
  longlong in_RAX;
  undefined8 uVar2;
  longlong unaff_RDI;
  char cVar3;
  undefined8 unaff_R14;
  bool bVar4;
  undefined8 in_stack_00000050;
  
  cVar3 = (char)unaff_R14;
  if (in_RAX != 0) {
    *(char *)(in_RAX + 0x2a) = cVar3;
  }
  bVar4 = *(char *)(*(longlong *)(unaff_RDI + 0x40) + 0x74) != cVar3;
  FUN_18073d8a0(*(undefined8 *)(unaff_RDI + 0x78),bVar4);
  for (puVar1 = *(undefined8 **)(unaff_RDI + 0x50);
      (puVar1 != (undefined8 *)(unaff_RDI + 0x50) &&
      (FUN_180853fc0(puVar1[2],bVar4), puVar1 != (undefined8 *)(unaff_RDI + 0x50)));
      puVar1 = (undefined8 *)*puVar1) {
  }
  *(undefined8 *)(unaff_RDI + 0x60) = unaff_R14;
  if ((*(uint *)(unaff_RDI + 0xc0) >> 3 & 1) != 0) {
    in_stack_00000050 = unaff_R14;
    uVar2 = FUN_18073cb70(*(undefined8 *)(unaff_RDI + 0x78),&stack0x00000050);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_180739350(in_stack_00000050,*(undefined8 *)(unaff_RDI + 0x78));
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *(uint *)(unaff_RDI + 0xc0) = *(uint *)(unaff_RDI + 0xc0) & 0xfffffff7;
  }
  return 0;
}



undefined8 FUN_18085198d(void)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  
  if ((*(uint *)(unaff_RDI + 0xc0) >> 3 & 1) != 0) {
    uVar1 = FUN_18073cb70(*(undefined8 *)(unaff_RDI + 0x78),&stack0x00000050);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_180739350(unaff_R14,*(undefined8 *)(unaff_RDI + 0x78));
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *(uint *)(unaff_RDI + 0xc0) = *(uint *)(unaff_RDI + 0xc0) & 0xfffffff7;
  }
  return 0;
}





// 函数: void FUN_1808519d1(void)
void FUN_1808519d1(void)

{
  return;
}



undefined8 FUN_1808519e0(longlong param_1)

{
  int iVar1;
  undefined8 auStackX_8 [4];
  
  if (*(int *)(param_1 + 0x98) != 0) {
    return *(undefined8 *)
            (*(longlong *)
              (*(longlong *)(param_1 + 0x90) + -8 + (longlong)*(int *)(param_1 + 0x98) * 8) + 0x30);
  }
  auStackX_8[0] = 0;
  iVar1 = FUN_18073c380(*(undefined8 *)(param_1 + 0x78),0xfffffffe,auStackX_8);
  if (iVar1 != 0) {
    auStackX_8[0] = 0;
  }
  return auStackX_8[0];
}



undefined8 FUN_180851a40(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  iVar9 = *(int *)((longlong)param_1 + 0x24);
  if (iVar9 == -1) {
    return 0x1c;
  }
  iVar1 = (int)param_1[1];
  if (iVar9 == iVar1) {
    iVar9 = iVar9 * 2;
    if (iVar9 < 4) {
      iVar9 = 4;
    }
    if (((iVar9 <= iVar1) || ((int)param_1[3] != iVar1)) || ((int)param_1[4] != -1)) {
      return 0x1c;
    }
    uVar7 = (int)*(uint *)((longlong)param_1 + 0x1c) >> 0x1f;
    if (((int)((*(uint *)((longlong)param_1 + 0x1c) ^ uVar7) - uVar7) < iVar9) &&
       (uVar4 = FUN_1808532e0(param_1 + 2,iVar9), (int)uVar4 != 0)) {
      return uVar4;
    }
    uVar4 = FUN_1807703c0(param_1,iVar9);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar10 = 0;
    uVar5 = uVar10;
    if (0 < iVar9) {
      do {
        *(undefined4 *)(*param_1 + uVar5 * 4) = 0xffffffff;
        uVar5 = uVar5 + 1;
      } while ((longlong)uVar5 < (longlong)iVar9);
    }
    lVar3 = param_1[3];
    uVar5 = uVar10;
    uVar11 = uVar10;
    if (0 < (int)lVar3) {
      do {
        if ((int)param_1[1] == 0) {
          return 0x1c;
        }
        lVar2 = param_1[2];
        lVar6 = (longlong)
                (int)((*(uint *)(uVar5 + 0xc + lVar2) ^ *(uint *)(uVar5 + 8 + lVar2) ^
                       *(uint *)(uVar5 + 4 + lVar2) ^ *(uint *)(uVar5 + lVar2)) &
                     (int)param_1[1] - 1U);
        piVar8 = (int *)(*param_1 + lVar6 * 4);
        iVar9 = *(int *)(*param_1 + lVar6 * 4);
        while (iVar9 != -1) {
          piVar8 = (int *)(lVar2 + 0x10 + (longlong)iVar9 * 0x20);
          iVar9 = *piVar8;
        }
        *piVar8 = (int)uVar10;
        uVar11 = uVar11 + 1;
        uVar10 = (ulonglong)((int)uVar10 + 1);
        *(undefined4 *)(param_1[2] + 0x10 + uVar5) = 0xffffffff;
        uVar5 = uVar5 + 0x20;
      } while ((longlong)uVar11 < (longlong)(int)lVar3);
    }
  }
  return 0;
}



undefined8 FUN_180851a66(void)

{
  longlong lVar1;
  longlong lVar2;
  int in_EAX;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  int *piVar7;
  longlong *unaff_RBX;
  int unaff_EDI;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (unaff_EDI == in_EAX) {
    iVar8 = unaff_EDI * 2;
    if (iVar8 < 4) {
      iVar8 = 4;
    }
    if (((iVar8 <= in_EAX) || ((int)unaff_RBX[3] != in_EAX)) || ((int)unaff_RBX[4] != -1)) {
      return 0x1c;
    }
    uVar6 = (int)*(uint *)((longlong)unaff_RBX + 0x1c) >> 0x1f;
    if (((int)((*(uint *)((longlong)unaff_RBX + 0x1c) ^ uVar6) - uVar6) < iVar8) &&
       (uVar3 = FUN_1808532e0(unaff_RBX + 2,iVar8), (int)uVar3 != 0)) {
      return uVar3;
    }
    uVar3 = FUN_1807703c0();
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar9 = 0;
    uVar4 = uVar9;
    if (0 < iVar8) {
      do {
        *(undefined4 *)(*unaff_RBX + uVar4 * 4) = 0xffffffff;
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)iVar8);
    }
    lVar2 = unaff_RBX[3];
    uVar4 = uVar9;
    uVar10 = uVar9;
    if (0 < (int)lVar2) {
      do {
        if ((int)unaff_RBX[1] == 0) {
          return 0x1c;
        }
        lVar1 = unaff_RBX[2];
        lVar5 = (longlong)
                (int)((*(uint *)(uVar4 + 0xc + lVar1) ^ *(uint *)(uVar4 + 8 + lVar1) ^
                       *(uint *)(uVar4 + 4 + lVar1) ^ *(uint *)(uVar4 + lVar1)) &
                     (int)unaff_RBX[1] - 1U);
        piVar7 = (int *)(*unaff_RBX + lVar5 * 4);
        iVar8 = *(int *)(*unaff_RBX + lVar5 * 4);
        while (iVar8 != -1) {
          piVar7 = (int *)(lVar1 + 0x10 + (longlong)iVar8 * 0x20);
          iVar8 = *piVar7;
        }
        *piVar7 = (int)uVar9;
        uVar10 = uVar10 + 1;
        uVar9 = (ulonglong)((int)uVar9 + 1);
        *(undefined4 *)(unaff_RBX[2] + 0x10 + uVar4) = 0xffffffff;
        uVar4 = uVar4 + 0x20;
      } while ((longlong)uVar10 < (longlong)(int)lVar2);
    }
  }
  return 0;
}



undefined8 FUN_180851b86(void)

{
  return 0x1c;
}





// 函数: void FUN_180851ba0(longlong param_1,undefined1 param_2)
void FUN_180851ba0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = FUN_180853980();
  if (iVar1 == 0) {
    FUN_18073d8a0(*(undefined8 *)(param_1 + 0x78),param_2);
  }
  return;
}



undefined8 FUN_180851c50(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  plVar3 = (longlong *)func_0x000180851be0(param_1 + 0x30,param_2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)func_0x000180851be0(param_1,param_2);
  }
  if (((plVar3 != (longlong *)0x0) && (*(int *)((longlong)plVar3 + 0x24) != 0)) &&
     ((int)plVar3[1] != 0)) {
    iVar5 = *(int *)(*plVar3 + (longlong)(int)((int)plVar3[1] - 1U & param_3) * 4);
    if (iVar5 != -1) {
      lVar2 = plVar3[2];
      do {
        lVar4 = (longlong)iVar5;
        if (*(uint *)(lVar2 + lVar4 * 0x10) == param_3) {
          uVar6 = *(undefined8 *)(lVar2 + 8 + lVar4 * 0x10);
          goto LAB_180851ce6;
        }
        iVar5 = *(int *)(lVar2 + 4 + lVar4 * 0x10);
      } while (iVar5 != -1);
    }
  }
  uVar6 = 0;
LAB_180851ce6:
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return uVar6;
}



undefined8 FUN_180851d20(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uStackX_10;
  
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x88) == 0) {
      uStackX_10 = 0;
      iVar1 = FUN_18073c380(*(undefined8 *)(param_1 + 0x78),0xfffffffe,&uStackX_10);
      uVar2 = uStackX_10;
      if (iVar1 != 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = *(undefined8 *)(**(longlong **)(param_1 + 0x80) + 0x30);
    }
    uVar2 = FUN_1807404e0(uVar2,param_2,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  if (param_3 != 0) {
    uVar2 = FUN_1808519e0(param_1);
    uVar2 = FUN_1807404e0(uVar2,0,param_3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



undefined8 FUN_180851d5f(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  undefined8 uStack0000000000000038;
  
  uStack0000000000000038 = 0;
  iVar1 = FUN_18073c380(param_1,0xfffffffe);
  uVar2 = uStack0000000000000038;
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  uVar2 = FUN_1807404e0(uVar2);
  if ((int)uVar2 == 0) {
    if (unaff_RDI != 0) {
      uVar2 = FUN_1808519e0();
      uVar2 = FUN_1807404e0(uVar2,0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



undefined8 FUN_180851d83(void)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = FUN_1807404e0();
  if ((int)uVar1 == 0) {
    if (unaff_RDI != 0) {
      uVar1 = FUN_1808519e0();
      uVar1 = FUN_1807404e0(uVar1,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}



undefined8
FUN_180851e40(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
             longlong *param_5,longlong *param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lStackX_10;
  longlong *plStackX_18;
  undefined4 uStackX_20;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  
  iVar11 = 0;
  if (0 < (int)param_2[1]) {
    lStack_78 = 0;
    plStackX_18 = param_3;
    uStackX_20 = param_4;
    do {
      iVar9 = 0;
      lStackX_10 = 0;
      lVar10 = 0;
      if ((int)param_6[1] < 1) {
LAB_180851f6d:
        lVar10 = *plStackX_18;
        lVar1 = param_1[7];
        lVar2 = *param_2;
        uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
        uVar5 = FUN_1808b4570(lVar1 + 0x388,(longlong)iVar11 * 0x10 + lVar2,param_1[0xe],uVar3,
                              *(undefined4 *)(lStack_78 + lVar10),&lStackX_10);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        FUN_1808b5d00(lStackX_10,param_1[0xe]);
      }
      else {
        do {
          lVar1 = *param_2;
          plVar4 = (longlong *)(**(code **)**(undefined8 **)(*param_6 + lVar10 * 8))();
          (**(code **)(*plVar4 + 0x40))(plVar4,&lStack_70);
          if ((lStack_70 == *(longlong *)(lVar1 + (longlong)iVar11 * 0x10)) &&
             (lStack_68 == *(longlong *)(lVar1 + 8 + (longlong)iVar11 * 0x10))) {
            lStackX_10 = *(longlong *)(*param_6 + lVar10 * 8);
            if ((iVar9 < 0) || (iVar6 = (int)param_6[1], iVar6 <= iVar9)) {
              return 0x1c;
            }
            iVar8 = (iVar6 - iVar9) + -1;
            if (0 < iVar8) {
              lVar10 = *param_6 + (longlong)iVar9 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar10,lVar10 + 8,(longlong)iVar8 << 3);
            }
            *(int *)(param_6 + 1) = iVar6 + -1;
            break;
          }
          iVar9 = iVar9 + 1;
          lVar10 = lVar10 + 1;
        } while (iVar9 < (int)param_6[1]);
        if (lStackX_10 == 0) goto LAB_180851f6d;
      }
      uVar5 = FUN_18073c020(param_1[0xf],uStackX_20,*(undefined8 *)(lStackX_10 + 0x30));
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      uVar7 = (int)*(uint *)((longlong)param_5 + 0xc) >> 0x1f;
      iVar6 = (int)param_5[1] + 1;
      iVar9 = (*(uint *)((longlong)param_5 + 0xc) ^ uVar7) - uVar7;
      if (iVar9 < iVar6) {
        iVar8 = (int)((float)iVar9 * 1.5);
        iVar9 = iVar6;
        if (iVar6 <= iVar8) {
          iVar9 = iVar8;
        }
        if (iVar9 < 8) {
          iVar8 = 8;
        }
        else if (iVar8 < iVar6) {
          iVar8 = iVar6;
        }
        uVar5 = FUN_180747f10(param_5,iVar8);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      iVar11 = iVar11 + 1;
      lStack_78 = lStack_78 + 4;
      *(longlong *)(*param_5 + (longlong)(int)param_5[1] * 8) = lStackX_10;
      *(int *)(param_5 + 1) = (int)param_5[1] + 1;
    } while (iVar11 < (int)param_2[1]);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



