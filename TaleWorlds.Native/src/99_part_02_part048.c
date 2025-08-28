#include "TaleWorlds.Native.Split.h"

// 99_part_02_part048.c - 20 个函数

// 函数: void FUN_1801b97dd(int param_1,int param_2,undefined8 param_3,longlong *param_4)
void FUN_1801b97dd(int param_1,int param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 unaff_R12D;
  int unaff_R13D;
  int unaff_R15D;
  int iStackX_20;
  int iStackX_24;
  longlong *in_stack_00000060;
  
  iVar3 = param_1;
  do {
    while (unaff_R15D < param_1) {
      unaff_R13D = unaff_R13D + 1;
      param_1 = iVar3;
      if (param_2 < unaff_R13D) {
        return;
      }
    }
    lVar4 = (longlong)(unaff_R13D * *(int *)((longlong)param_4 + 0x24) + param_1);
    lVar1 = *param_4 + lVar4 * 0x28;
    FUN_1801bb0b0(lVar1 + 8,(longlong)*(int *)(*param_4 + lVar4 * 0x28));
    puVar7 = *(undefined4 **)(lVar1 + 0x10);
    if (puVar7 < *(undefined4 **)(lVar1 + 0x18)) {
      *(undefined4 **)(lVar1 + 0x10) = puVar7 + 1;
      *puVar7 = unaff_R12D;
    }
    else {
      puVar6 = *(undefined4 **)(lVar1 + 8);
      lVar4 = (longlong)puVar7 - (longlong)puVar6 >> 2;
      if (lVar4 == 0) {
        lVar4 = 1;
LAB_1801b9874:
        plVar2 = *(longlong **)(lVar1 + 0x20);
        uVar5 = (longlong)((int)plVar2[2] + 0xf) & 0xfffffffffffffff0;
        puVar8 = (undefined4 *)(*plVar2 + uVar5);
        *(int *)(plVar2 + 2) = (int)uVar5 + (int)lVar4 * 4;
        puVar7 = *(undefined4 **)(lVar1 + 0x10);
        puVar6 = *(undefined4 **)(lVar1 + 8);
      }
      else {
        lVar4 = lVar4 * 2;
        if (lVar4 != 0) goto LAB_1801b9874;
        puVar8 = (undefined4 *)0x0;
      }
      if (puVar6 != puVar7) {
                    // WARNING: Subroutine does not return
        memmove(puVar8,puVar6,(longlong)puVar7 - (longlong)puVar6);
      }
      *puVar8 = unaff_R12D;
      *(undefined4 **)(lVar1 + 0x10) = puVar8 + 1;
      *(undefined4 **)(lVar1 + 0x18) = puVar8 + lVar4;
      *(undefined4 **)(lVar1 + 8) = puVar8;
    }
    param_4 = in_stack_00000060;
    param_1 = param_1 + 1;
    iVar3 = iStackX_20;
    param_2 = iStackX_24;
  } while( true );
}






// 函数: void FUN_1801b990e(void)
void FUN_1801b990e(void)

{
  return;
}






// 函数: void FUN_1801b9920(longlong *param_1)
void FUN_1801b9920(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < (int)param_1[4]) {
    do {
      iVar4 = 0;
      if (0 < *(int *)((longlong)param_1 + 0x24)) {
        do {
          iVar2 = *(int *)((longlong)param_1 + 0x24) * iVar5 + iVar4;
          iVar4 = iVar4 + 1;
          lVar3 = (longlong)iVar2;
          *(undefined8 *)(*param_1 + 0x10 + lVar3 * 0x28) =
               *(undefined8 *)(*param_1 + 8 + lVar3 * 0x28);
        } while (iVar4 < *(int *)((longlong)param_1 + 0x24));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)param_1[4]);
  }
  if ((*param_1 != 0) && (plVar1 = (longlong *)param_1[5], plVar1 != (longlong *)0x0)) {
    if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *plVar1 = 0;
    param_1[5] = 0;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}






// 函数: void FUN_1801b9974(void)
void FUN_1801b9974(void)

{
  longlong *plVar1;
  longlong unaff_RBX;
  longlong unaff_RSI;
  
  plVar1 = *(longlong **)(unaff_RBX + 0x28);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *plVar1 = unaff_RSI;
    *(longlong *)(unaff_RBX + 0x28) = unaff_RSI;
  }
  *(longlong *)(unaff_RBX + 8) = unaff_RSI;
  *(longlong *)(unaff_RBX + 0x10) = unaff_RSI;
  *(longlong *)(unaff_RBX + 0x18) = unaff_RSI;
  *(longlong *)(unaff_RBX + 0x20) = unaff_RSI;
  return;
}






// 函数: void FUN_1801b999c(void)
void FUN_1801b999c(void)

{
  longlong unaff_RBX;
  undefined8 unaff_RSI;
  
  *(undefined8 *)(unaff_RBX + 8) = unaff_RSI;
  *(undefined8 *)(unaff_RBX + 0x10) = unaff_RSI;
  *(undefined8 *)(unaff_RBX + 0x18) = unaff_RSI;
  *(undefined8 *)(unaff_RBX + 0x20) = unaff_RSI;
  return;
}






// 函数: void FUN_1801b99e0(longlong param_1)
void FUN_1801b99e0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  
  uVar2 = 0;
  plVar3 = (longlong *)(param_1 + 8);
  do {
    if (*plVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar1 = (longlong)(int)uVar2;
    plVar3 = plVar3 + 1;
    uVar2 = uVar2 + 1;
    *(undefined8 *)(param_1 + 8 + lVar1 * 8) = 0;
  } while (uVar2 < 0x400);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_1801b9a40(uint *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint *puVar8;
  bool bVar9;
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  LOCK();
  uVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  uVar5 = (ulonglong)(uVar1 >> 0xc);
  uVar6 = (ulonglong)(param_2 + -1 + uVar1 >> 0xc);
  if (uVar5 <= uVar6) {
    pcVar3 = (char *)((longlong)param_1 + uVar5 + 0x808);
    lVar7 = (uVar6 - uVar5) + 1;
    puVar8 = param_1 + (ulonglong)(uVar1 >> 0xc) * 2 + 2;
    do {
      iVar4 = (int)uVar5;
      if (*(longlong *)puVar8 == 0) {
        lVar2 = FUN_18062b420(_DAT_180c8ed18,0x20000,0x25);
        LOCK();
        bVar9 = *(longlong *)(param_1 + (longlong)iVar4 * 2 + 2) == 0;
        if (bVar9) {
          *(longlong *)(param_1 + (longlong)iVar4 * 2 + 2) = lVar2;
        }
        UNLOCK();
        if (bVar9) {
          func_0x0001801bb270(param_1,iVar4 << 0xc);
          LOCK();
          *(undefined1 *)((longlong)iVar4 + 0x808 + (longlong)param_1) = 0;
          UNLOCK();
        }
        else {
          if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          do {
          } while (*pcVar3 != '\0');
        }
      }
      else {
        do {
        } while (*pcVar3 != '\0');
      }
      uVar5 = (ulonglong)(iVar4 + 1);
      puVar8 = puVar8 + 2;
      pcVar3 = pcVar3 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1801b9a89(longlong param_1)

{
  longlong *plVar1;
  longlong in_RAX;
  longlong lVar2;
  char *pcVar3;
  longlong unaff_RBP;
  int iVar4;
  ulonglong unaff_RDI;
  undefined4 unaff_R12D;
  longlong unaff_R14;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  
  pcVar3 = (char *)(param_1 + 0x808 + unaff_RDI);
  lVar5 = (unaff_R14 - unaff_RDI) + 1;
  plVar6 = (longlong *)(param_1 + 8 + in_RAX * 8);
  do {
    iVar4 = (int)unaff_RDI;
    if (*plVar6 == 0) {
      lVar2 = FUN_18062b420(_DAT_180c8ed18,0x20000,0x25);
      plVar1 = (longlong *)(unaff_RBP + 8 + (longlong)iVar4 * 8);
      LOCK();
      bVar7 = *plVar1 == 0;
      if (bVar7) {
        *plVar1 = lVar2;
      }
      UNLOCK();
      if (bVar7) {
        func_0x0001801bb270();
        LOCK();
        *(undefined1 *)((longlong)iVar4 + 0x808 + unaff_RBP) = 0;
        UNLOCK();
      }
      else {
        if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        do {
        } while (*pcVar3 != '\0');
      }
    }
    else {
      do {
      } while (*pcVar3 != '\0');
    }
    unaff_RDI = (ulonglong)(iVar4 + 1);
    plVar6 = plVar6 + 1;
    pcVar3 = pcVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return unaff_R12D;
}



undefined4 FUN_1801b9b2d(void)

{
  undefined4 unaff_R12D;
  
  return unaff_R12D;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char FUN_1801b9b90(longlong param_1,int param_2)

{
  longlong *plVar1;
  char *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar5 = (longlong)param_2;
  if (*(longlong *)(param_1 + 8 + lVar5 * 8) != 0) {
    do {
      cVar3 = *(char *)(lVar5 + 0x808 + param_1);
    } while (cVar3 != '\0');
    return cVar3;
  }
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0x8000,0x25);
  plVar1 = (longlong *)(param_1 + 8 + lVar5 * 8);
  LOCK();
  bVar6 = *plVar1 == 0;
  if (bVar6) {
    *plVar1 = lVar4;
  }
  UNLOCK();
  if (bVar6) {
    LOCK();
    pcVar2 = (char *)(lVar5 + 0x808 + param_1);
    cVar3 = *pcVar2;
    *pcVar2 = '\0';
    UNLOCK();
    return cVar3;
  }
  if (lVar4 == 0) {
    do {
      cVar3 = *(char *)(lVar5 + 0x808 + param_1);
    } while (cVar3 != '\0');
    return cVar3;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1801b9c70(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plStackX_8;
  
  plVar4 = (longlong *)param_1[1];
  if (plVar4 < (longlong *)param_1[2]) {
    param_1[1] = (longlong)(plVar4 + 0x11);
    lVar6 = param_2[1] - *param_2 >> 3;
    uVar1 = *(uint *)(param_2 + 3);
    *(uint *)(plVar4 + 3) = uVar1;
    lVar3 = 0;
    lVar2 = lVar3;
    plStackX_8 = plVar4;
    if (lVar6 != 0) {
      lVar2 = FUN_18062b420(_DAT_180c8ed18,lVar6 * 8,uVar1 & 0xff,param_4,0xfffffffffffffffe);
    }
    *plVar4 = lVar2;
    plVar4[1] = lVar2;
    plVar4[2] = lVar2 + lVar6 * 8;
    lVar2 = *param_2;
    if (lVar2 != param_2[1]) {
                    // WARNING: Subroutine does not return
      memmove(*plVar4,lVar2,param_2[1] - lVar2);
    }
    plVar4[1] = *plVar4;
    plVar4[4] = param_2[4];
    lVar6 = param_2[6] - param_2[5] >> 4;
    uVar1 = *(uint *)(param_2 + 8);
    *(uint *)(plVar4 + 8) = uVar1;
    lVar2 = lVar3;
    if (lVar6 != 0) {
      lVar2 = FUN_18062b420(_DAT_180c8ed18,lVar6 << 4,uVar1 & 0xff);
    }
    plVar4[5] = lVar2;
    plVar4[6] = lVar2;
    plVar4[7] = lVar6 * 0x10 + lVar2;
    lVar2 = plVar4[5];
    lVar6 = param_2[5];
    if (lVar6 == param_2[6]) {
      plVar4[6] = lVar2;
      lVar6 = param_2[10] - param_2[9] >> 2;
      uVar1 = *(uint *)(param_2 + 0xc);
      *(uint *)(plVar4 + 0xc) = uVar1;
      lVar2 = lVar3;
      if (lVar6 != 0) {
        lVar2 = FUN_18062b420(_DAT_180c8ed18,lVar6 * 4,uVar1 & 0xff);
      }
      plVar4[9] = lVar2;
      plVar4[10] = lVar2;
      plVar4[0xb] = lVar2 + lVar6 * 4;
      lVar2 = plVar4[9];
      lVar6 = param_2[9];
      if (lVar6 == param_2[10]) {
        plVar4[10] = lVar2;
        lVar2 = (param_2[0xe] - param_2[0xd]) / 6 + (param_2[0xe] - param_2[0xd] >> 0x3f);
        lVar2 = (lVar2 >> 2) - (lVar2 >> 0x3f);
        uVar1 = *(uint *)(param_2 + 0x10);
        *(uint *)(plVar4 + 0x10) = uVar1;
        if (lVar2 != 0) {
          lVar3 = FUN_18062b420(_DAT_180c8ed18,lVar2 * 0x18,uVar1 & 0xff);
        }
        plVar4[0xd] = lVar3;
        plVar4[0xe] = lVar3;
        plVar4[0xf] = lVar3 + lVar2 * 0x18;
        lVar2 = plVar4[0xd];
        lVar3 = param_2[0xd];
        if (lVar3 == param_2[0xe]) {
          plVar4[0xe] = lVar2;
          return plVar4;
        }
                    // WARNING: Subroutine does not return
        memmove(lVar2,lVar3,param_2[0xe] - lVar3);
      }
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar6,param_2[10] - lVar6);
    }
                    // WARNING: Subroutine does not return
    memmove(lVar2,lVar6,param_2[6] - lVar6);
  }
  lVar2 = *param_1;
  lVar3 = ((longlong)plVar4 - lVar2) / 0x88;
  if (lVar3 == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = lVar3 * 2;
    if (lVar3 == 0) {
      lVar6 = 0;
      goto LAB_1801b9d0f;
    }
  }
  lVar6 = FUN_18062b420(_DAT_180c8ed18,lVar3 * 0x88,(char)param_1[3]);
  plVar4 = (longlong *)param_1[1];
  lVar2 = *param_1;
LAB_1801b9d0f:
  FUN_1801bd320(&plStackX_8,lVar2,plVar4,lVar6);
  FUN_18014c570(plStackX_8,param_2);
  lVar2 = param_1[1];
  lVar5 = *param_1;
  if (lVar5 != lVar2) {
    do {
      FUN_18014c7d0(lVar5);
      lVar5 = lVar5 + 0x88;
    } while (lVar5 != lVar2);
    lVar5 = *param_1;
  }
  if (lVar5 == 0) {
    plVar4 = (longlong *)(lVar3 * 0x88 + lVar6);
    *param_1 = lVar6;
    param_1[1] = (longlong)(plStackX_8 + 0x11);
    param_1[2] = (longlong)plVar4;
    return plVar4;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801b9cad(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_1801b9cad(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong in_RAX;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  longlong in_R10;
  longlong in_stack_00000050;
  
  lVar4 = SUB168(SEXT816(in_RAX) * SEXT816(param_3 - in_R10),8);
  lVar4 = (lVar4 >> 6) - (lVar4 >> 0x3f);
  if (lVar4 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = lVar4 * 2;
    if (lVar4 == 0) {
      lVar3 = 0;
      goto LAB_1801b9d0f;
    }
  }
  lVar3 = FUN_18062b420(_DAT_180c8ed18,lVar4 * 0x88,(char)unaff_RDI[3]);
  param_3 = unaff_RDI[1];
  in_R10 = *unaff_RDI;
LAB_1801b9d0f:
  FUN_1801bd320(&stack0x00000050,in_R10,param_3,lVar3);
  lVar2 = in_stack_00000050;
  FUN_18014c570(in_stack_00000050);
  lVar1 = unaff_RDI[1];
  lVar5 = *unaff_RDI;
  if (lVar5 != lVar1) {
    do {
      FUN_18014c7d0(lVar5);
      lVar5 = lVar5 + 0x88;
    } while (lVar5 != lVar1);
    lVar5 = *unaff_RDI;
  }
  if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar5);
  }
  *unaff_RDI = lVar3;
  unaff_RDI[1] = lVar2 + 0x88;
  unaff_RDI[2] = lVar4 * 0x88 + lVar3;
  return;
}






// 函数: void FUN_1801b9d63(void)
void FUN_1801b9d63(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801b9da0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1801b9da0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  lVar2 = param_1[1];
  lVar3 = *param_1;
  lVar4 = 0;
  uVar1 = *(uint *)(param_1 + 3);
  lVar6 = lVar2 - lVar3;
  lVar5 = lVar6 / 6 + (lVar6 >> 0x3f);
  lVar5 = (lVar5 >> 1) - (lVar5 >> 0x3f);
  if (lVar5 != 0) {
    lVar4 = FUN_18062b420(_DAT_180c8ed18,lVar5 * 0xc,uVar1 & 0xff,param_4,0xfffffffffffffffe,0,0,0,
                          uVar1);
  }
  lVar5 = lVar4 + lVar5 * 0xc;
  if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
    memmove(lVar4,lVar3,lVar6,param_4,uVar7,lVar4,lVar5,lVar5);
  }
  lVar2 = *param_1;
  *param_1 = lVar4;
  param_1[1] = lVar5;
  param_1[2] = lVar5;
  *(uint *)(param_1 + 3) = uVar1;
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801b9eb0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1801b9eb0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  lVar2 = param_1[1];
  lVar3 = *param_1;
  lVar4 = 0;
  uVar1 = *(uint *)(param_1 + 3);
  lVar6 = lVar2 - lVar3;
  lVar5 = lVar6 / 0x34;
  if (lVar5 != 0) {
    lVar4 = FUN_18062b420(_DAT_180c8ed18,lVar5 * 0x34,uVar1 & 0xff,param_4,0xfffffffffffffffe,0,0,0,
                          uVar1);
  }
  lVar5 = lVar5 * 0x34 + lVar4;
  if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
    memmove(lVar4,lVar3,lVar6,param_4,uVar7,lVar4,lVar5,lVar5);
  }
  lVar2 = *param_1;
  *param_1 = lVar4;
  param_1[1] = lVar5;
  param_1[2] = lVar5;
  *(uint *)(param_1 + 3) = uVar1;
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801b9fc0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1801b9fc0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  plVar5 = (longlong *)param_1[1];
  plVar12 = (longlong *)*param_1;
  lVar9 = 0;
  uVar4 = *(uint *)(param_1 + 3);
  lVar10 = ((longlong)plVar5 - (longlong)plVar12) / 0x420;
  if (lVar10 != 0) {
    lVar9 = FUN_18062b420(_DAT_180c8ed18,lVar10 * 0x420,uVar4 & 0xff,param_4,0xfffffffffffffffe,0,0,
                          0);
  }
  lVar10 = lVar10 * 0x420 + lVar9;
  if (plVar12 != plVar5) {
    plVar11 = (longlong *)(lVar9 + 8);
    do {
      plVar1 = plVar11 + -1;
      *plVar1 = 0;
      *plVar11 = 0;
      if (*plVar12 != 0) {
        LOCK();
        piVar2 = (int *)(*plVar12 + 0x10);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        if (*plVar1 != 0) {
          FUN_180080060();
        }
        *plVar1 = *plVar12;
        if (*plVar11 != 0) {
          pbVar3 = (byte *)(*plVar11 + 0xfe);
          *pbVar3 = *pbVar3 & 0xfb;
        }
      }
      plVar11[1] = plVar12[2];
      plVar12[2] = 0;
      lVar6 = plVar12[4];
      plVar11[2] = plVar12[3];
      plVar11[3] = lVar6;
      lVar6 = plVar12[6];
      plVar11[4] = plVar12[5];
      plVar11[5] = lVar6;
      lVar6 = plVar12[8];
      plVar11[6] = plVar12[7];
      plVar11[7] = lVar6;
      lVar6 = plVar12[10];
      plVar11[8] = plVar12[9];
      plVar11[9] = lVar6;
      lVar6 = plVar12[0xc];
      plVar11[10] = plVar12[0xb];
      plVar11[0xb] = lVar6;
      lVar6 = plVar12[0xe];
      plVar11[0xc] = plVar12[0xd];
      plVar11[0xd] = lVar6;
      lVar6 = plVar12[0x10];
      plVar11[0xe] = plVar12[0xf];
      plVar11[0xf] = lVar6;
      lVar6 = plVar12[0x12];
      plVar11[0x10] = plVar12[0x11];
      plVar11[0x11] = lVar6;
      lVar6 = plVar12[0x14];
      plVar11[0x12] = plVar12[0x13];
      plVar11[0x13] = lVar6;
      lVar6 = plVar12[0x16];
      plVar11[0x14] = plVar12[0x15];
      plVar11[0x15] = lVar6;
      lVar6 = plVar12[0x18];
      plVar11[0x16] = plVar12[0x17];
      plVar11[0x17] = lVar6;
      uVar7 = *(undefined4 *)((longlong)plVar12 + 0xcc);
      lVar6 = plVar12[0x1a];
      uVar8 = *(undefined4 *)((longlong)plVar12 + 0xd4);
      *(int *)(plVar11 + 0x18) = (int)plVar12[0x19];
      *(undefined4 *)((longlong)plVar11 + 0xc4) = uVar7;
      *(int *)(plVar11 + 0x19) = (int)lVar6;
      *(undefined4 *)((longlong)plVar11 + 0xcc) = uVar8;
      plVar11[0x1a] = plVar12[0x1b];
      *(int *)(plVar11 + 0x1b) = (int)plVar12[0x1c];
      *(undefined4 *)((longlong)plVar11 + 0xdc) = *(undefined4 *)((longlong)plVar12 + 0xe4);
      FUN_1801bd980(plVar11 + 0x1d,plVar12 + 0x1e);
      plVar12 = plVar12 + 0x84;
      plVar11 = plVar11 + 0x84;
    } while (plVar12 != plVar5);
  }
  lVar6 = *param_1;
  *param_1 = lVar9;
  lVar9 = param_1[1];
  param_1[1] = lVar10;
  param_1[2] = lVar10;
  *(uint *)(param_1 + 3) = uVar4;
  for (lVar10 = lVar6; lVar10 != lVar9; lVar10 = lVar10 + 0x420) {
    FUN_1801bd090(lVar10);
  }
  if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar6);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ba230(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1801ba230(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  lVar2 = param_1[1];
  lVar3 = *param_1;
  lVar4 = 0;
  uVar1 = *(uint *)(param_1 + 3);
  lVar6 = lVar2 - lVar3;
  lVar5 = lVar6 / 0xbc;
  if (lVar5 != 0) {
    lVar4 = FUN_18062b420(_DAT_180c8ed18,lVar5 * 0xbc,uVar1 & 0xff,param_4,0xfffffffffffffffe,0,0,0,
                          uVar1);
  }
  lVar5 = lVar5 * 0xbc + lVar4;
  if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
    memmove(lVar4,lVar3,lVar6,param_4,uVar7,lVar4,lVar5,lVar5);
  }
  lVar2 = *param_1;
  *param_1 = lVar4;
  param_1[1] = lVar5;
  param_1[2] = lVar5;
  *(uint *)(param_1 + 3) = uVar1;
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}






// 函数: void FUN_1801ba340(longlong param_1)
void FUN_1801ba340(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(undefined8 **)(lVar1 + uVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



longlong * FUN_1801ba400(longlong param_1,longlong *param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  uint uVar6;
  
  pbVar5 = &DAT_18098bc73;
  if (*(byte **)(param_3 + 8) != (byte *)0x0) {
    pbVar5 = *(byte **)(param_3 + 8);
  }
  uVar6 = 0;
  uVar2 = 0xcbf29ce484222325;
  if (*(uint *)(param_3 + 0x10) != 0) {
    do {
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      uVar6 = uVar6 + 1;
      uVar2 = (uVar2 ^ bVar1) * 0x100000001b3;
    } while (uVar6 < *(uint *)(param_3 + 0x10));
  }
  lVar4 = (uVar2 % (ulonglong)*(uint *)(param_1 + 0x10)) * 8;
  lVar3 = func_0x0001801bb330((ulonglong)*(uint *)(param_1 + 0x10),
                              *(undefined8 *)(*(longlong *)(param_1 + 8) + lVar4));
  if (lVar3 == 0) {
    lVar4 = *(longlong *)(param_1 + 8) + *(longlong *)(param_1 + 0x10) * 8;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + *(longlong *)(param_1 + 0x10) * 8);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 8) + lVar4;
  }
  *param_2 = lVar3;
  param_2[1] = lVar4;
  return param_2;
}






// 函数: void FUN_1801ba4d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1801ba4d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  plVar1 = (longlong *)param_1[1];
  for (plVar3 = (longlong *)*param_1; plVar3 != plVar1; plVar3 = plVar3 + 8) {
    plVar2 = (longlong *)plVar3[7];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar3,param_3,param_4,uVar4);
      plVar3[7] = 0;
    }
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ba580(ulonglong *param_1,longlong param_2)
void FUN_1801ba580(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar2 = 0;
  uVar5 = *param_1;
  iVar7 = (int)((longlong)(param_1[1] - uVar5) >> 3);
  if (0 < iVar7) {
    uVar1 = uVar2;
    uVar4 = uVar2;
    while (*(longlong *)(uVar5 + uVar1 * 8) != param_2) {
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar1 = uVar1 + 1;
      if ((longlong)iVar7 <= (longlong)uVar1) {
        return;
      }
    }
    uVar3 = (ulonglong)(iVar7 + -1);
    *(undefined8 *)(uVar5 + (longlong)(int)uVar4 * 8) = *(undefined8 *)(uVar3 * 8 + uVar5);
    uVar5 = param_1[1];
    uVar1 = *param_1;
    uVar4 = (longlong)(uVar5 - uVar1) >> 3;
    if (uVar4 < uVar3) {
      uVar6 = uVar3 - uVar4;
      if ((ulonglong)((longlong)(param_1[2] - uVar5) >> 3) < uVar6) {
        if (uVar4 == 0) {
          uVar4 = 1;
        }
        else {
          uVar4 = uVar4 * 2;
        }
        if (uVar4 < uVar3) {
          uVar4 = uVar3;
        }
        if (uVar4 != 0) {
          uVar2 = FUN_18062b420(_DAT_180c8ed18,uVar4 * 8,(char)param_1[3]);
          uVar1 = *param_1;
          uVar5 = param_1[1];
        }
        if (uVar1 != uVar5) {
                    // WARNING: Subroutine does not return
          memmove(uVar2,uVar1,uVar5 - uVar1);
        }
        if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
          memset(uVar2,0,uVar6 * 8);
        }
        if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *param_1 = uVar2;
        param_1[2] = uVar2 + uVar4 * 8;
        param_1[1] = uVar2;
      }
      else {
        if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
          memset(uVar5,0,uVar6 * 8);
        }
        param_1[1] = uVar5;
      }
    }
    else {
      param_1[1] = uVar3 * 8 + uVar1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ba5d0(int param_1,undefined8 param_2,longlong param_3,int param_4)
void FUN_1801ba5d0(int param_1,undefined8 param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *unaff_RBX;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong unaff_R14;
  
  uVar2 = (ulonglong)(param_4 + -1);
  *(undefined8 *)(param_3 + (longlong)param_1 * 8) = *(undefined8 *)(uVar2 * 8 + param_3);
  lVar4 = unaff_RBX[1];
  lVar1 = *unaff_RBX;
  uVar3 = lVar4 - lVar1 >> 3;
  if (uVar3 < uVar2) {
    uVar5 = uVar2 - uVar3;
    if ((ulonglong)(unaff_RBX[2] - lVar4 >> 3) < uVar5) {
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      else {
        uVar3 = uVar3 * 2;
      }
      if (uVar3 < uVar2) {
        uVar3 = uVar2;
      }
      if (uVar3 != 0) {
        unaff_R14 = FUN_18062b420(_DAT_180c8ed18,uVar3 * 8,(char)unaff_RBX[3]);
        lVar1 = *unaff_RBX;
        lVar4 = unaff_RBX[1];
      }
      if (lVar1 != lVar4) {
                    // WARNING: Subroutine does not return
        memmove(unaff_R14,lVar1,lVar4 - lVar1);
      }
      if (uVar5 != 0) {
                    // WARNING: Subroutine does not return
        memset(unaff_R14,0,uVar5 * 8);
      }
      if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *unaff_RBX = unaff_R14;
      unaff_RBX[2] = unaff_R14 + uVar3 * 8;
      unaff_RBX[1] = unaff_R14;
    }
    else {
      if (uVar5 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar4,0,uVar5 * 8);
      }
      unaff_RBX[1] = lVar4;
    }
  }
  else {
    unaff_RBX[1] = uVar2 * 8 + lVar1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ba612(longlong param_1,ulonglong param_2)
void FUN_1801ba612(longlong param_1,ulonglong param_2)

{
  longlong in_RAX;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar1;
  longlong unaff_RSI;
  ulonglong uVar2;
  longlong unaff_R14;
  
  uVar2 = param_2 - unaff_RBP;
  if ((ulonglong)(in_RAX - unaff_RSI >> 3) < uVar2) {
    if (unaff_RBP == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = unaff_RBP * 2;
    }
    if (uVar1 < param_2) {
      uVar1 = param_2;
    }
    if (uVar1 != 0) {
      unaff_R14 = FUN_18062b420(_DAT_180c8ed18,uVar1 * 8,(char)unaff_RBX[3]);
      param_1 = *unaff_RBX;
      unaff_RSI = unaff_RBX[1];
    }
    if (param_1 != unaff_RSI) {
                    // WARNING: Subroutine does not return
      memmove(unaff_R14,param_1,unaff_RSI - param_1);
    }
    if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
      memset(unaff_R14,0,uVar2 * 8);
    }
    if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *unaff_RBX = unaff_R14;
    unaff_RBX[2] = unaff_R14 + uVar1 * 8;
    unaff_RBX[1] = unaff_R14;
  }
  else {
    if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
      memset();
    }
    unaff_RBX[1] = unaff_RSI;
  }
  return;
}






// 函数: void FUN_1801ba6cc(void)
void FUN_1801ba6cc(void)

{
  longlong unaff_RBX;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *(undefined8 *)(unaff_RBX + 8) = unaff_RSI;
  return;
}






// 函数: void FUN_1801ba6f6(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)
void FUN_1801ba6f6(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong unaff_RBX;
  
  *(longlong *)(unaff_RBX + 8) = param_4 + param_1;
  return;
}






// 函数: void FUN_1801ba708(void)
void FUN_1801ba708(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




