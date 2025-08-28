#include "TaleWorlds.Native.Split.h"

// 99_part_13_part070.c - 1 个函数

// 函数: void FUN_1808d8603(void)
void FUN_1808d8603(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808d8614(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *unaff_RBX;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
code_r0x0001808d8614:
  if (param_1 == (undefined8 *)0x0) goto LAB_1808d856d;
  if ((*(int *)(param_1 + 5) == 0) && (*(int *)(param_1 + 3) == 0)) goto LAB_1808d856d;
  if (unaff_RBX == unaff_RDI) {
LAB_1808d85eb:
    uVar1 = FUN_1808b2f30();
    if ((int)uVar1 == 0) {
      uVar1 = 0;
    }
  }
  else {
    unaff_RBX = (longlong *)*unaff_RBX;
    do {
      if (unaff_RBX == unaff_RDI) goto LAB_1808d85eb;
      puVar2 = (undefined8 *)(*(longlong *)(unaff_RSI + 0x40) + 0x20);
      for (param_1 = (undefined8 *)*puVar2; param_1 != puVar2; param_1 = (undefined8 *)*param_1) {
        if (*(int *)(param_1 + 8) == (int)unaff_RBX[2]) goto code_r0x0001808d8614;
        if (param_1 == puVar2) break;
      }
LAB_1808d856d:
      if (unaff_RBX != unaff_RDI) {
        *(longlong *)unaff_RBX[1] = *unaff_RBX;
        *(longlong *)(*unaff_RBX + 8) = unaff_RBX[1];
        unaff_RBX[1] = (longlong)unaff_RBX;
        *unaff_RBX = (longlong)unaff_RBX;
        *(longlong **)unaff_RBX[1] = unaff_RBX;
        *(longlong *)(*unaff_RBX + 8) = unaff_RBX[1];
        unaff_RBX[1] = (longlong)unaff_RBX;
        *unaff_RBX = (longlong)unaff_RBX;
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),unaff_RBX,&UNK_180984b50,0xe1,1);
      }
      uVar1 = FUN_1808d8b60(*(undefined8 *)(unaff_RSI + 0x50));
    } while ((int)uVar1 == 0);
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808d8640(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lStackX_8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_1808d77c0(param_2,param_1 + 0x10);
  cVar3 = func_0x0001808d7720(param_2,param_1 + 0x10);
  if (cVar3 == '\0') {
LAB_1808d87fd:
    uVar6 = 0;
  }
  else {
    plVar5 = (longlong *)(param_1 + 0x20);
    plVar2 = *(longlong **)(param_1 + 0x20);
    do {
      if (plVar2 == plVar5) {
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x30);
        puVar1 = (undefined8 *)*puVar8;
        goto joined_r0x0001808d878a;
      }
      lVar4 = plVar2[2];
      uStack_38 = *(undefined4 *)(lVar4 + 0x18);
      uStack_34 = *(undefined4 *)(lVar4 + 0x1c);
      uStack_30 = *(undefined4 *)(lVar4 + 0x20);
      uStack_2c = *(undefined4 *)(lVar4 + 0x24);
      lVar4 = FUN_1808ec110(*(undefined8 *)(param_1 + 0x10),&uStack_38,*(undefined4 *)(lVar4 + 0x28)
                           );
      if (lVar4 == 0) {
        if (plVar2 == plVar5) {
          plVar5 = (longlong *)*plVar2;
          plVar7 = (longlong *)plVar2[1];
        }
        else {
          *(longlong *)plVar2[1] = *plVar2;
          *(longlong *)(*plVar2 + 8) = plVar2[1];
          plVar2[1] = (longlong)plVar2;
          *plVar2 = (longlong)plVar2;
          plVar5 = plVar2;
          plVar7 = plVar2;
        }
        *plVar7 = (longlong)plVar5;
        *(longlong *)(*plVar2 + 8) = plVar2[1];
        plVar2[1] = (longlong)plVar2;
        *plVar2 = (longlong)plVar2;
        *(longlong **)plVar2[1] = plVar2;
        *(longlong *)(*plVar2 + 8) = plVar2[1];
        plVar2[1] = (longlong)plVar2;
        *plVar2 = (longlong)plVar2;
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar2,&UNK_180988870,0x16d,1);
      }
      plVar7 = plVar2;
      if (plVar2 != plVar5) {
        plVar7 = (longlong *)*plVar2;
      }
      plVar2[2] = lVar4;
      uVar6 = FUN_1808d8e90(*(undefined8 *)(param_1 + 0x18),plVar2[3]);
      plVar2 = plVar7;
    } while ((int)uVar6 == 0);
  }
  return uVar6;
joined_r0x0001808d878a:
  if (puVar1 == puVar8) goto LAB_1808d87fd;
  for (plVar2 = (longlong *)*plVar5;
      ((plVar2 != plVar5 && ((undefined8 *)plVar2[2] != puVar1)) && (plVar2 != plVar5));
      plVar2 = (longlong *)*plVar2) {
  }
  if (plVar2 == plVar5) {
    uVar6 = FUN_1808d7ed0(param_1,puVar1,&lStackX_8);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    if ((lStackX_8 != 0) &&
       (uVar6 = FUN_1808d8e90(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(lStackX_8 + 0x18)),
       (int)uVar6 != 0)) {
      return uVar6;
    }
  }
  if (puVar1 == puVar8) goto LAB_1808d87fd;
  puVar1 = (undefined8 *)*puVar1;
  goto joined_r0x0001808d878a;
}



undefined8 ****** FUN_1808d8820(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 ******ppppppuVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ******ppppppuVar4;
  undefined8 ******ppppppuVar5;
  uint uVar6;
  undefined8 ******ppppppuVar7;
  undefined8 ******ppppppuVar8;
  undefined8 *****pppppuStack_18;
  undefined8 *****pppppuStack_10;
  
  for (puVar1 = (undefined8 *)*param_1; puVar1 != param_1; puVar1 = (undefined8 *)*puVar1) {
    ppppppuVar2 = (undefined8 ******)FUN_1808d8640(puVar1,param_2);
    if ((int)ppppppuVar2 != 0) {
      return ppppppuVar2;
    }
    if (puVar1 == param_1) break;
  }
  ppppppuVar8 = (undefined8 ******)0x0;
  ppppppuVar2 = (undefined8 ******)(param_1[2] + -0x20);
  if (param_1[2] == 0) {
    ppppppuVar2 = ppppppuVar8;
  }
  ppppppuVar3 = ppppppuVar8;
  if (ppppppuVar2 != (undefined8 ******)0x0) {
    ppppppuVar3 = ppppppuVar2 + 4;
  }
  while (ppppppuVar3 != (undefined8 ******)(param_1 + 2)) {
    ppppppuVar2 = ppppppuVar3 + -4;
    if (ppppppuVar3 == (undefined8 ******)0x0) {
      ppppppuVar2 = ppppppuVar8;
    }
    ppppppuVar2 = (undefined8 ******)FUN_1808d84d0(ppppppuVar2,param_2);
    if ((int)ppppppuVar2 != 0) {
      return ppppppuVar2;
    }
    if (ppppppuVar3 == (undefined8 ******)(param_1 + 2)) break;
    ppppppuVar2 = (undefined8 ******)(*ppppppuVar3 + -4);
    if (*ppppppuVar3 == (undefined8 *****)0x0) {
      ppppppuVar2 = ppppppuVar8;
    }
    ppppppuVar3 = ppppppuVar8;
    if (ppppppuVar2 != (undefined8 ******)0x0) {
      ppppppuVar3 = ppppppuVar2 + 4;
    }
  }
  ppppppuVar2 = (undefined8 ******)(param_1 + 4);
  ppppppuVar3 = (undefined8 ******)(param_1[4] + -0x20);
  if (param_1[4] == 0) {
    ppppppuVar3 = ppppppuVar8;
  }
  ppppppuVar5 = ppppppuVar8;
  if (ppppppuVar3 != (undefined8 ******)0x0) {
    ppppppuVar5 = ppppppuVar3 + 4;
  }
  while (ppppppuVar5 != ppppppuVar2) {
    ppppppuVar3 = ppppppuVar5 + -4;
    if (ppppppuVar5 == (undefined8 ******)0x0) {
      ppppppuVar3 = ppppppuVar8;
    }
    ppppppuVar3 = (undefined8 ******)FUN_1808d84d0(ppppppuVar3,param_2);
    if ((int)ppppppuVar3 != 0) {
      return ppppppuVar3;
    }
    if (ppppppuVar5 == ppppppuVar2) break;
    ppppppuVar3 = (undefined8 ******)(*ppppppuVar5 + -4);
    if (*ppppppuVar5 == (undefined8 *****)0x0) {
      ppppppuVar3 = ppppppuVar8;
    }
    ppppppuVar5 = ppppppuVar8;
    if (ppppppuVar3 != (undefined8 ******)0x0) {
      ppppppuVar5 = ppppppuVar3 + 4;
    }
  }
  pppppuStack_18 = &pppppuStack_18;
  pppppuStack_10 = &pppppuStack_18;
  do {
    ppppppuVar3 = (undefined8 ******)*ppppppuVar2;
    if (ppppppuVar3 == ppppppuVar2) {
      if ((undefined8 ******)param_1[5] == ppppppuVar2) goto LAB_1808d8a40;
      if (ppppppuVar3 != ppppppuVar2) goto LAB_1808d896c;
LAB_1808d8975:
      ppppppuVar5 = ppppppuVar8;
    }
    else {
LAB_1808d896c:
      ppppppuVar5 = ppppppuVar3 + -4;
      if (ppppppuVar3 == (undefined8 ******)0x0) goto LAB_1808d8975;
    }
    ppppppuVar4 = ppppppuVar5 + 4;
    if (ppppppuVar5 == (undefined8 ******)0x0) {
      ppppppuVar4 = ppppppuVar8;
    }
    ppppppuVar5 = ppppppuVar2;
    if (ppppppuVar4 != (undefined8 ******)0x0) {
      ppppppuVar5 = ppppppuVar4;
    }
    ppppppuVar4 = ppppppuVar5 + -4;
    if (ppppppuVar5 == (undefined8 ******)0x0) {
      ppppppuVar4 = ppppppuVar8;
    }
    ppppppuVar5 = ppppppuVar8;
    if ((ppppppuVar3 != ppppppuVar2) && (ppppppuVar3 != (undefined8 ******)0x0)) {
      ppppppuVar5 = ppppppuVar3 + -4;
    }
    ppppppuVar3 = ppppppuVar5 + 4;
    if (ppppppuVar5 == (undefined8 ******)0x0) {
      ppppppuVar3 = ppppppuVar8;
    }
    ppppppuVar5 = ppppppuVar2;
    if (ppppppuVar3 != (undefined8 ******)0x0) {
      ppppppuVar5 = ppppppuVar3;
    }
    if (ppppppuVar5 == ppppppuVar2) break;
    *ppppppuVar5[1] = *ppppppuVar5;
    (*ppppppuVar5)[1] = ppppppuVar5[1];
    ppppppuVar5[1] = ppppppuVar5;
    *ppppppuVar5 = ppppppuVar5;
    if ((ppppppuVar4 == (undefined8 ******)0x0) ||
       (ppppppuVar3 = ppppppuVar4 + 4, ppppppuVar3 == (undefined8 ******)0x0)) break;
    ppppppuVar5 = (undefined8 ******)*ppppppuVar3;
    ppppppuVar7 = ppppppuVar8;
    if (ppppppuVar5 != ppppppuVar3) {
      do {
        ppppppuVar5 = (undefined8 ******)*ppppppuVar5;
        uVar6 = (int)ppppppuVar7 + 1;
        ppppppuVar7 = (undefined8 ******)(ulonglong)uVar6;
      } while (ppppppuVar5 != ppppppuVar3);
      if (uVar6 != 0) break;
    }
    ppppppuVar4[5] = pppppuStack_10;
    *ppppppuVar3 = &pppppuStack_18;
    *ppppppuVar4[5] = ppppppuVar3;
    pppppuStack_10 = ppppppuVar3;
  } while( true );
LAB_1808d8afa:
  uVar6 = 0x1c;
  goto LAB_1808d8aff;
  while( true ) {
    if (((undefined8 ******)pppppuStack_18 == &pppppuStack_18) ||
       (ppppppuVar2 = (undefined8 ******)(pppppuStack_18 + -4),
       (undefined8 ******)pppppuStack_18 == (undefined8 ******)0x0)) {
      ppppppuVar2 = ppppppuVar8;
    }
    ppppppuVar3 = ppppppuVar2 + 4;
    if (ppppppuVar2 == (undefined8 ******)0x0) {
      ppppppuVar3 = ppppppuVar8;
    }
    ppppppuVar2 = &pppppuStack_18;
    if (ppppppuVar3 != (undefined8 ******)0x0) {
      ppppppuVar2 = ppppppuVar3;
    }
    ppppppuVar3 = ppppppuVar2 + -4;
    if (ppppppuVar2 == (undefined8 ******)0x0) {
      ppppppuVar3 = ppppppuVar8;
    }
    ppppppuVar2 = ppppppuVar8;
    if (((undefined8 ******)pppppuStack_18 != &pppppuStack_18) &&
       ((undefined8 ******)pppppuStack_18 != (undefined8 ******)0x0)) {
      ppppppuVar2 = (undefined8 ******)(pppppuStack_18 + -4);
    }
    ppppppuVar5 = ppppppuVar2 + 4;
    if (ppppppuVar2 == (undefined8 ******)0x0) {
      ppppppuVar5 = ppppppuVar8;
    }
    if ((ppppppuVar5 == (undefined8 ******)0x0) || (ppppppuVar5 == &pppppuStack_18))
    goto LAB_1808d8afa;
    *ppppppuVar5[1] = *ppppppuVar5;
    (*ppppppuVar5)[1] = ppppppuVar5[1];
    ppppppuVar5[1] = ppppppuVar5;
    *ppppppuVar5 = ppppppuVar5;
    uVar6 = FUN_1808d7d10(param_1,ppppppuVar3);
    if (uVar6 != 0) break;
LAB_1808d8a40:
    if (((undefined8 ******)pppppuStack_18 == &pppppuStack_18) &&
       ((undefined8 ******)pppppuStack_10 == &pppppuStack_18)) goto LAB_1808d8b01;
  }
LAB_1808d8aff:
  ppppppuVar8 = (undefined8 ******)(ulonglong)uVar6;
LAB_1808d8b01:
  func_0x00018084e310(&pppppuStack_18);
  return ppppppuVar8;
}



// WARNING: Type propagation algorithm not settling

ulonglong FUN_1808d8866(void)

{
  longlong in_RAX;
  ulonglong uVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  uint uVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******unaff_RBX;
  longlong unaff_R14;
  undefined8 *******pppppppuStackX_20;
  undefined8 *******pppppppuStack0000000000000028;
  
  pppppppuVar6 = (undefined8 *******)(in_RAX + -0x20);
  if (in_RAX == 0) {
    pppppppuVar6 = unaff_RBX;
  }
  pppppppuVar3 = unaff_RBX;
  if (pppppppuVar6 != (undefined8 *******)0x0) {
    pppppppuVar3 = pppppppuVar6 + 4;
  }
  while (pppppppuVar3 != (undefined8 *******)(unaff_R14 + 0x10)) {
    uVar1 = FUN_1808d84d0();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (pppppppuVar3 == (undefined8 *******)(unaff_R14 + 0x10)) break;
    pppppppuVar6 = (undefined8 *******)(*pppppppuVar3 + -4);
    if (*pppppppuVar3 == (undefined8 ******)0x0) {
      pppppppuVar6 = unaff_RBX;
    }
    pppppppuVar3 = unaff_RBX;
    if (pppppppuVar6 != (undefined8 *******)0x0) {
      pppppppuVar3 = pppppppuVar6 + 4;
    }
  }
  pppppppuVar6 = (undefined8 *******)(unaff_R14 + 0x20);
  pppppppuVar3 = (undefined8 *******)(*(longlong *)(unaff_R14 + 0x20) + -0x20);
  if (*(longlong *)(unaff_R14 + 0x20) == 0) {
    pppppppuVar3 = unaff_RBX;
  }
  pppppppuVar4 = unaff_RBX;
  if (pppppppuVar3 != (undefined8 *******)0x0) {
    pppppppuVar4 = pppppppuVar3 + 4;
  }
  while (pppppppuVar4 != pppppppuVar6) {
    uVar1 = FUN_1808d84d0();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (pppppppuVar4 == pppppppuVar6) break;
    pppppppuVar3 = (undefined8 *******)(*pppppppuVar4 + -4);
    if (*pppppppuVar4 == (undefined8 ******)0x0) {
      pppppppuVar3 = unaff_RBX;
    }
    pppppppuVar4 = unaff_RBX;
    if (pppppppuVar3 != (undefined8 *******)0x0) {
      pppppppuVar4 = pppppppuVar3 + 4;
    }
  }
  pppppppuStackX_20 = &pppppppuStackX_20;
  pppppppuStack0000000000000028 = &pppppppuStackX_20;
  do {
    pppppppuVar3 = (undefined8 *******)*pppppppuVar6;
    if (pppppppuVar3 == pppppppuVar6) {
      if (*(undefined8 ********)(unaff_R14 + 0x28) == pppppppuVar6) goto LAB_1808d8a40;
      if (pppppppuVar3 != pppppppuVar6) goto LAB_1808d896c;
LAB_1808d8975:
      pppppppuVar4 = unaff_RBX;
    }
    else {
LAB_1808d896c:
      pppppppuVar4 = pppppppuVar3 + -4;
      if (pppppppuVar3 == (undefined8 *******)0x0) goto LAB_1808d8975;
    }
    pppppppuVar2 = pppppppuVar4 + 4;
    if (pppppppuVar4 == (undefined8 *******)0x0) {
      pppppppuVar2 = unaff_RBX;
    }
    pppppppuVar4 = pppppppuVar6;
    if (pppppppuVar2 != (undefined8 *******)0x0) {
      pppppppuVar4 = pppppppuVar2;
    }
    pppppppuVar2 = pppppppuVar4 + -4;
    if (pppppppuVar4 == (undefined8 *******)0x0) {
      pppppppuVar2 = unaff_RBX;
    }
    pppppppuVar4 = unaff_RBX;
    if ((pppppppuVar3 != pppppppuVar6) && (pppppppuVar3 != (undefined8 *******)0x0)) {
      pppppppuVar4 = pppppppuVar3 + -4;
    }
    pppppppuVar3 = pppppppuVar4 + 4;
    if (pppppppuVar4 == (undefined8 *******)0x0) {
      pppppppuVar3 = unaff_RBX;
    }
    pppppppuVar4 = pppppppuVar6;
    if (pppppppuVar3 != (undefined8 *******)0x0) {
      pppppppuVar4 = pppppppuVar3;
    }
    if (pppppppuVar4 == pppppppuVar6) break;
    *pppppppuVar4[1] = *pppppppuVar4;
    (*pppppppuVar4)[1] = pppppppuVar4[1];
    pppppppuVar4[1] = pppppppuVar4;
    *pppppppuVar4 = pppppppuVar4;
    if ((pppppppuVar2 == (undefined8 *******)0x0) ||
       (pppppppuVar3 = pppppppuVar2 + 4, pppppppuVar3 == (undefined8 *******)0x0)) break;
    pppppppuVar4 = (undefined8 *******)*pppppppuVar3;
    if (pppppppuVar4 != pppppppuVar3) {
      uVar1 = (ulonglong)unaff_RBX & 0xffffffff;
      do {
        pppppppuVar4 = (undefined8 *******)*pppppppuVar4;
        uVar5 = (int)uVar1 + 1;
        uVar1 = (ulonglong)uVar5;
      } while (pppppppuVar4 != pppppppuVar3);
      if (uVar5 != 0) break;
    }
    pppppppuVar2[5] = pppppppuStack0000000000000028;
    *pppppppuVar3 = &pppppppuStackX_20;
    *pppppppuVar2[5] = pppppppuVar3;
    pppppppuStack0000000000000028 = pppppppuVar3;
  } while( true );
LAB_1808d8afa:
  uVar5 = 0x1c;
  goto LAB_1808d8aff;
  while( true ) {
    pppppppuVar6 = unaff_RBX;
    if (((undefined8 ********)pppppppuStackX_20 != &pppppppuStackX_20) &&
       (pppppppuStackX_20 != (undefined8 *******)0x0)) {
      pppppppuVar6 = pppppppuStackX_20 + -4;
    }
    pppppppuVar3 = pppppppuVar6 + 4;
    if (pppppppuVar6 == (undefined8 *******)0x0) {
      pppppppuVar3 = unaff_RBX;
    }
    if ((pppppppuVar3 == (undefined8 *******)0x0) ||
       ((undefined8 ********)pppppppuVar3 == &pppppppuStackX_20)) goto LAB_1808d8afa;
    *pppppppuVar3[1] = *pppppppuVar3;
    (*pppppppuVar3)[1] = pppppppuVar3[1];
    pppppppuVar3[1] = pppppppuVar3;
    *pppppppuVar3 = pppppppuVar3;
    uVar5 = FUN_1808d7d10();
    if (uVar5 != 0) break;
LAB_1808d8a40:
    if (((undefined8 ********)pppppppuStackX_20 == &pppppppuStackX_20) &&
       ((undefined8 ********)pppppppuStack0000000000000028 == &pppppppuStackX_20))
    goto LAB_1808d8b01;
  }
LAB_1808d8aff:
  unaff_RBX = (undefined8 *******)(ulonglong)uVar5;
LAB_1808d8b01:
  func_0x00018084e310(&pppppppuStackX_20);
  return (ulonglong)unaff_RBX & 0xffffffff;
}






