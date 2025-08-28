#include "TaleWorlds.Native.Split.h"

// 99_part_02_part018.c - 19 个函数

// 函数: void FUN_1800f68d0(uint *param_1,uint param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800f68d0(uint *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint *puVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  
  uVar12 = 0xfffffffffffffffe;
  if (*param_1 < param_2) {
    iVar10 = param_2 - *param_1;
    if (iVar10 != 0) {
      LOCK();
      uVar2 = *param_1;
      *param_1 = *param_1 + iVar10;
      UNLOCK();
      uVar8 = (ulonglong)(uVar2 >> 0xc);
      uVar6 = (ulonglong)(iVar10 + -1 + uVar2 >> 0xc);
      if (uVar8 <= uVar6) {
        puVar9 = param_1 + (ulonglong)(uVar2 >> 0xc) * 2 + 2;
        lVar7 = (uVar6 - uVar8) + 1;
        do {
          if (*(longlong *)puVar9 == 0) {
            lVar4 = FUN_18062b420(_DAT_180c8ed18,0x18000,0x1e,param_4,uVar12);
            LOCK();
            bVar11 = *(longlong *)(param_1 + (longlong)(int)uVar8 * 2 + 2) == 0;
            if (bVar11) {
              *(longlong *)(param_1 + (longlong)(int)uVar8 * 2 + 2) = lVar4;
            }
            UNLOCK();
            if ((!bVar11) && (lVar4 != 0)) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(lVar4);
            }
          }
          uVar8 = (ulonglong)((int)uVar8 + 1);
          puVar9 = puVar9 + 2;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      FUN_1800f6e10(param_1,uVar2,iVar10);
    }
  }
  else if (param_2 < *param_1) {
    uVar2 = *param_1;
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < (int)uVar2) {
      do {
        plVar1 = (longlong *)
                 (*(longlong *)(param_1 + (uVar6 >> 0xc) * 2 + 2) +
                 (longlong)((int)uVar6 + (int)(uVar6 >> 0xc) * -0x1000) * 0x18);
        plVar3 = (longlong *)plVar1[1];
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x38))();
        }
        plVar1 = (longlong *)*plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x38))();
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while ((int)uVar5 < (int)uVar2);
    }
    LOCK();
    *param_1 = param_2;
    UNLOCK();
  }
  return;
}






// 函数: void FUN_1800f6a20(longlong param_1)
void FUN_1800f6a20(longlong param_1)

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
  } while (uVar2 < 10);
  return;
}



undefined8 *
FUN_1800f6a80(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a04d40;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800f6ad0(longlong *param_1,ulonglong param_2)
void FUN_1800f6ad0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = param_1[1];
  lVar3 = *param_1;
  uVar2 = lVar5 - lVar3;
  if (param_2 <= uVar2) {
    param_1[1] = param_2 + lVar3;
    return;
  }
  param_2 = (lVar3 - lVar5) + param_2;
  if (param_2 <= (ulonglong)(param_1[2] - lVar5)) {
    if (param_2 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar5,0,param_2);
    }
    param_1[1] = lVar5;
    return;
  }
  uVar4 = uVar2 * 2;
  if (uVar2 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < uVar2 + param_2) {
    uVar4 = uVar2 + param_2;
  }
  if (uVar4 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar4,(char)param_1[3]);
    lVar3 = *param_1;
    lVar5 = param_1[1];
  }
  if (lVar3 != lVar5) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,lVar3,lVar5 - lVar3);
  }
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,param_2);
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = lVar1;
  param_1[2] = lVar1 + uVar4;
  param_1[1] = lVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800f6af6(longlong param_1,longlong param_2)
void FUN_1800f6af6(longlong param_1,longlong param_2)

{
  longlong in_RAX;
  longlong lVar1;
  longlong *unaff_RBX;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  
  uVar3 = (param_2 - unaff_RDI) + in_RAX;
  if (uVar3 <= (ulonglong)(unaff_RBX[2] - unaff_RDI)) {
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memset();
    }
    unaff_RBX[1] = unaff_RDI;
    return;
  }
  uVar2 = param_1 * 2;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  if (uVar2 < param_1 + uVar3) {
    uVar2 = param_1 + uVar3;
  }
  if (uVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar2,(char)unaff_RBX[3]);
    param_2 = *unaff_RBX;
    unaff_RDI = unaff_RBX[1];
  }
  if (param_2 != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,param_2,unaff_RDI - param_2);
  }
  if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,uVar3);
  }
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RBX = lVar1;
  unaff_RBX[2] = lVar1 + uVar2;
  unaff_RBX[1] = lVar1;
  return;
}






// 函数: void FUN_1800f6bc6(void)
void FUN_1800f6bc6(void)

{
  longlong unaff_RBX;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  
  if (unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *(undefined8 *)(unaff_RBX + 8) = unaff_RDI;
  return;
}






// 函数: void FUN_1800f6bf4(undefined8 param_1,longlong param_2)
void FUN_1800f6bf4(undefined8 param_1,longlong param_2)

{
  longlong in_RAX;
  longlong unaff_RBX;
  
  *(longlong *)(unaff_RBX + 8) = in_RAX + param_2;
  return;
}






// 函数: void FUN_1800f6c10(longlong *param_1)
void FUN_1800f6c10(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    FUN_1800f89b0();
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1800f6c80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800f6c80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800f7260(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800f6ca0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800f6ca0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800f7320(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800f6cc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800f6cc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800f74f0(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800f6ce0(undefined8 param_1,longlong *param_2,int param_3)
void FUN_1800f6ce0(undefined8 param_1,longlong *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  longlong *plStack_98;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  ulonglong uStack_28;
  
  uVar1 = _DAT_180c8a998;
  uStack_a0 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  uStack_a8 = 0;
  param_3 = param_3 * 4;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x1c;
  plStack_98 = param_2;
  strcpy_s(auStack_70,0x40,&DAT_1809ffc60);
  FUN_1802037e0();
  puStack_88 = &UNK_18098bcb0;
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,param_3,0x10,3);
  FUN_180083520(uVar1,param_2);
  *(undefined8 *)(*param_2 + 0x10) = uVar2;
  *(int *)(*param_2 + 0x18) = param_3;
  *(int *)(*param_2 + 0x1c) = param_3;
  *(undefined1 *)(*param_2 + 0x20) = 0;
  uStack_a8 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_c8);
}






// 函数: void FUN_1800f6e10(longlong param_1,uint param_2,int param_3)
void FUN_1800f6e10(longlong param_1,uint param_2,int param_3)

{
  undefined8 *puVar1;
  
  param_3 = param_2 + param_3;
  if ((int)param_2 < param_3) {
    do {
      puVar1 = (undefined8 *)
               (*(longlong *)(param_1 + 8 + (ulonglong)(param_2 >> 0xc) * 8) +
               (longlong)(int)(param_2 + (param_2 >> 0xc) * -0x1000) * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)(puVar1 + 2) = 0;
      param_2 = param_2 + 1;
    } while ((int)param_2 < param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800f6e70(longlong *param_1,ulonglong param_2)
void FUN_1800f6e70(longlong *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  puVar10 = (undefined4 *)param_1[1];
  if (param_2 <= (ulonglong)((param_1[2] - (longlong)puVar10) / 0x30)) {
    if (param_2 != 0) {
      puVar8 = (undefined8 *)(puVar10 + 4);
      uVar12 = param_2;
      do {
        *(undefined1 *)puVar10 = 0;
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        *(undefined4 *)(puVar8 + 2) = 3;
        *(undefined4 *)(puVar8 + 3) = 0xffffffff;
        puVar10 = puVar10 + 0xc;
        puVar8 = puVar8 + 6;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      puVar10 = (undefined4 *)param_1[1];
    }
    param_1[1] = (longlong)(puVar10 + param_2 * 0xc);
    return;
  }
  puVar7 = (undefined4 *)*param_1;
  lVar11 = ((longlong)puVar10 - (longlong)puVar7) / 0x30;
  uVar12 = lVar11 * 2;
  if (lVar11 == 0) {
    uVar12 = 1;
  }
  if (uVar12 < lVar11 + param_2) {
    uVar12 = lVar11 + param_2;
  }
  puVar4 = (undefined1 *)0x0;
  if (uVar12 != 0) {
    puVar4 = (undefined1 *)
             FUN_18062b420(_DAT_180c8ed18,uVar12 * 0x30,(char)param_1[3],puVar10,0xfffffffffffffffe)
    ;
    puVar10 = (undefined4 *)param_1[1];
    puVar7 = (undefined4 *)*param_1;
  }
  puVar5 = puVar4;
  if (puVar7 != puVar10) {
    lVar11 = (longlong)puVar4 - (longlong)puVar7;
    puVar7 = puVar7 + 8;
    do {
      *puVar5 = *(undefined1 *)(puVar7 + -8);
      puVar8 = (undefined8 *)((longlong)puVar7 + lVar11 + -0x18);
      *puVar8 = 0;
      *(undefined8 *)(lVar11 + -0x10 + (longlong)puVar7) = 0;
      *(undefined8 *)(lVar11 + -8 + (longlong)puVar7) = 0;
      *(undefined4 *)(lVar11 + (longlong)puVar7) = *puVar7;
      uVar3 = *puVar8;
      *puVar8 = *(undefined8 *)(puVar7 + -6);
      *(undefined8 *)(puVar7 + -6) = uVar3;
      uVar3 = *(undefined8 *)(lVar11 + -0x10 + (longlong)puVar7);
      *(undefined8 *)(lVar11 + -0x10 + (longlong)puVar7) = *(undefined8 *)(puVar7 + -4);
      *(undefined8 *)(puVar7 + -4) = uVar3;
      uVar3 = *(undefined8 *)(lVar11 + -8 + (longlong)puVar7);
      *(undefined8 *)(lVar11 + -8 + (longlong)puVar7) = *(undefined8 *)(puVar7 + -2);
      *(undefined8 *)(puVar7 + -2) = uVar3;
      uVar2 = *(undefined4 *)(lVar11 + (longlong)puVar7);
      *(undefined4 *)(lVar11 + (longlong)puVar7) = *puVar7;
      *puVar7 = uVar2;
      *(undefined4 *)(lVar11 + 8 + (longlong)puVar7) = puVar7[2];
      puVar5 = puVar5 + 0x30;
      puVar1 = puVar7 + 4;
      puVar7 = puVar7 + 0xc;
    } while (puVar1 != puVar10);
  }
  if (param_2 != 0) {
    puVar8 = (undefined8 *)(puVar5 + 0x10);
    uVar9 = param_2;
    do {
      *(undefined1 *)(puVar8 + -2) = 0;
      puVar8[-1] = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined4 *)(puVar8 + 2) = 3;
      *(undefined4 *)(puVar8 + 3) = 0xffffffff;
      puVar8 = puVar8 + 6;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  lVar11 = param_1[1];
  lVar6 = *param_1;
  if (lVar6 != lVar11) {
    do {
      FUN_1800f89b0();
      lVar6 = lVar6 + 0x30;
    } while (lVar6 != lVar11);
    lVar6 = *param_1;
  }
  if (lVar6 == 0) {
    *param_1 = (longlong)puVar4;
    param_1[1] = (longlong)(puVar5 + param_2 * 0x30);
    param_1[2] = (longlong)(puVar4 + uVar12 * 0x30);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800f7100(longlong *param_1,ulonglong param_2)
void FUN_1800f7100(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  
  puVar5 = (undefined1 *)param_1[1];
  if (param_2 <= (ulonglong)(param_1[2] - (longlong)puVar5 >> 4)) {
    uVar6 = param_2;
    if (param_2 != 0) {
      do {
        *puVar5 = 0;
        *(undefined8 *)(puVar5 + 4) = 0xffffffffffffffff;
        *(undefined4 *)(puVar5 + 0xc) = 0;
        puVar5 = puVar5 + 0x10;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      puVar5 = (undefined1 *)param_1[1];
    }
    param_1[1] = (longlong)(puVar5 + param_2 * 0x10);
    return;
  }
  puVar4 = (undefined1 *)*param_1;
  lVar1 = (longlong)puVar5 - (longlong)puVar4 >> 4;
  uVar6 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar6 = 1;
  }
  if (uVar6 < lVar1 + param_2) {
    uVar6 = lVar1 + param_2;
  }
  lVar1 = 0;
  if (uVar6 != 0) {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar6 << 4,(char)param_1[3]);
    puVar4 = (undefined1 *)*param_1;
    puVar5 = (undefined1 *)param_1[1];
  }
  if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,puVar4,(longlong)puVar5 - (longlong)puVar4);
  }
  if (param_2 != 0) {
    puVar2 = (undefined8 *)(lVar1 + 4);
    uVar3 = param_2;
    do {
      *(undefined1 *)((longlong)puVar2 + -4) = 0;
      *puVar2 = 0xffffffffffffffff;
      *(undefined4 *)(puVar2 + 1) = 0;
      puVar2 = puVar2 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (*param_1 == 0) {
    *param_1 = lVar1;
    param_1[2] = uVar6 * 0x10 + lVar1;
    param_1[1] = param_2 * 0x10 + lVar1;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800f7133(longlong param_1,longlong param_2)
void FUN_1800f7133(longlong param_1,longlong param_2)

{
  longlong in_RAX;
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong unaff_RBX;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar4;
  
  lVar1 = in_RAX >> 4;
  uVar4 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < (ulonglong)(lVar1 + unaff_RDI)) {
    uVar4 = lVar1 + unaff_RDI;
  }
  lVar1 = 0;
  if (uVar4 != 0) {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar4 << 4,*(undefined1 *)(param_1 + 0x18));
    param_2 = *unaff_RSI;
    unaff_RBX = unaff_RSI[1];
  }
  if (param_2 != unaff_RBX) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,param_2,unaff_RBX - param_2);
  }
  if (unaff_RDI != 0) {
    puVar2 = (undefined8 *)(lVar1 + 4);
    lVar3 = unaff_RDI;
    do {
      *(undefined1 *)((longlong)puVar2 + -4) = 0;
      *puVar2 = 0xffffffffffffffff;
      *(undefined4 *)(puVar2 + 1) = 0;
      puVar2 = puVar2 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*unaff_RSI == 0) {
    *unaff_RSI = lVar1;
    unaff_RSI[2] = uVar4 * 0x10 + lVar1;
    unaff_RSI[1] = unaff_RDI * 0x10 + lVar1;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1800f7215(longlong param_1)
void FUN_1800f7215(longlong param_1)

{
  longlong lVar1;
  undefined1 *unaff_RBX;
  longlong unaff_RDI;
  
  lVar1 = unaff_RDI;
  if (unaff_RDI != 0) {
    do {
      *unaff_RBX = 0;
      *(undefined8 *)(unaff_RBX + 4) = 0xffffffffffffffff;
      *(undefined4 *)(unaff_RBX + 0xc) = 0;
      unaff_RBX = unaff_RBX + 0x10;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    unaff_RBX = *(undefined1 **)(param_1 + 8);
  }
  *(undefined1 **)(param_1 + 8) = unaff_RBX + unaff_RDI * 0x10;
  return;
}






// 函数: void FUN_1800f7260(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800f7260(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_1800f7260(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  lVar1 = param_2[6];
  for (lVar2 = param_2[5]; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    if (*(longlong **)(lVar2 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 8) + 0x38))();
    }
  }
  if (param_2[5] == 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1800f7320(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800f7320(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1800f7320(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
    FUN_180083f10(param_2 + 5);
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1800f73a0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  puVar4 = (undefined8 *)FUN_1800f7a90();
  if (*param_2 != 0) {
    uVar5 = FUN_1800f73a0(param_1,*param_2,puVar4,param_4,uVar8);
    *puVar4 = uVar5;
  }
  puVar3 = puVar4;
  for (plVar2 = (longlong *)param_2[1]; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[1]) {
    puVar6 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0xc0,*(undefined1 *)(param_1 + 0x28));
    puVar1 = puVar6 + 4;
    *puVar1 = &UNK_18098bcb0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0;
    *puVar1 = &UNK_1809fcc28;
    puVar6[5] = puVar6 + 7;
    *(undefined4 *)(puVar6 + 6) = 0;
    *(undefined1 *)(puVar6 + 7) = 0;
    *(int *)(puVar6 + 6) = (int)plVar2[6];
    puVar7 = &DAT_18098bc73;
    if ((undefined *)plVar2[5] != (undefined *)0x0) {
      puVar7 = (undefined *)plVar2[5];
    }
    strcpy_s(puVar6[5],0x80,puVar7,param_4,uVar8,puVar1);
    puVar6[0x17] = plVar2[0x17];
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = puVar3;
    *(char *)(puVar6 + 3) = (char)plVar2[3];
    puVar3[1] = puVar6;
    if (*plVar2 != 0) {
      uVar5 = FUN_1800f73a0(param_1,*plVar2,puVar6);
      *puVar6 = uVar5;
    }
    puVar3 = puVar6;
  }
  return puVar4;
}






// 函数: void FUN_1800f74f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800f74f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1800f74f0(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
    param_2[4] = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1800f7570(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             longlong param_5)

{
  byte bVar1;
  bool bVar2;
  longlong *plVar3;
  byte *pbVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  
  plVar5 = (longlong *)*param_1;
  if ((param_4 == plVar5) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (*(int *)(param_5 + 0x10) != 0)) {
      plVar8 = param_4;
      if (*(int *)(plVar5 + 6) != 0) {
        pbVar4 = *(byte **)(param_5 + 8);
        plVar8 = (longlong *)(plVar5[5] - (longlong)pbVar4);
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[(longlong)plVar8];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_1800f7694;
      }
LAB_1800f7677:
      uVar9 = (ulonglong)plVar8 & 0xffffffffffffff00;
LAB_1800f767a:
      if (plVar5 != (longlong *)0x0) {
        FUN_1800f7b20(param_1,param_2,plVar5,uVar9,param_5);
        return param_2;
      }
    }
  }
  else {
    plVar3 = (longlong *)func_0x00018066bd70(param_4);
    if (*(int *)(param_5 + 0x10) != 0) {
      if ((int)param_4[6] != 0) {
        pbVar4 = *(byte **)(param_5 + 8);
        lVar7 = param_4[5] - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[lVar7];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_1800f7694;
      }
      if ((int)plVar3[6] != 0) {
        pbVar4 = (byte *)plVar3[5];
        plVar8 = (longlong *)(*(longlong *)(param_5 + 8) - (longlong)pbVar4);
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[(longlong)plVar8];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if (0 < (int)(bVar1 - uVar6)) {
          plVar5 = param_4;
          if (*param_4 == 0) goto LAB_1800f7677;
          uVar9 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
          plVar5 = plVar3;
          goto LAB_1800f767a;
        }
      }
    }
  }
LAB_1800f7694:
  bVar2 = true;
  plVar5 = (longlong *)param_1[2];
  plVar8 = param_1;
  while (plVar5 != (longlong *)0x0) {
    plVar8 = plVar5;
    if ((int)plVar5[6] == 0) {
      bVar2 = false;
LAB_1800f76b2:
      plVar5 = (longlong *)*plVar5;
    }
    else {
      if (*(int *)(param_5 + 0x10) == 0) {
        bVar2 = true;
      }
      else {
        pbVar4 = (byte *)plVar5[5];
        lVar7 = *(longlong *)(param_5 + 8) - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[lVar7];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar6);
      }
      if (!bVar2) goto LAB_1800f76b2;
      plVar5 = (longlong *)plVar5[1];
    }
  }
  plVar5 = plVar8;
  if (bVar2) {
    if (plVar8 != (longlong *)param_1[1]) {
      plVar5 = (longlong *)func_0x00018066b9a0(plVar8);
      goto LAB_1800f76d2;
    }
  }
  else {
LAB_1800f76d2:
    if (*(int *)(param_5 + 0x10) == 0) {
LAB_1800f77de:
      *param_2 = plVar5;
      return param_2;
    }
    if ((int)plVar5[6] != 0) {
      pbVar4 = *(byte **)(param_5 + 8);
      lVar7 = plVar5[5] - (longlong)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar7];
        if (bVar1 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_1800f77de;
    }
  }
  if (plVar8 != param_1) {
    if ((int)plVar8[6] == 0) {
LAB_1800f7747:
      uVar10 = 1;
      goto LAB_1800f7790;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar4 = (byte *)plVar8[5];
      lVar7 = *(longlong *)(param_5 + 8) - (longlong)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar7];
        if (bVar1 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_1800f7747;
    }
  }
  uVar10 = 0;
LAB_1800f7790:
  lVar7 = FUN_18062b420(_DAT_180c8ed18,0xc0,(char)param_1[5]);
  FUN_180049b30(lVar7 + 0x20,param_5);
  *(undefined8 *)(lVar7 + 0xb8) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar7,plVar8,param_1,uVar10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1800f7800(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             longlong param_5)

{
  byte bVar1;
  bool bVar2;
  longlong *plVar3;
  byte *pbVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  
  plVar5 = (longlong *)*param_1;
  if ((param_4 == plVar5) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (*(int *)(param_5 + 0x10) != 0)) {
      plVar8 = param_4;
      if (*(int *)(plVar5 + 6) != 0) {
        pbVar4 = *(byte **)(param_5 + 8);
        plVar8 = (longlong *)(plVar5[5] - (longlong)pbVar4);
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[(longlong)plVar8];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_1800f7924;
      }
LAB_1800f7907:
      uVar9 = (ulonglong)plVar8 & 0xffffffffffffff00;
LAB_1800f790a:
      if (plVar5 != (longlong *)0x0) {
        FUN_1800f7c00(param_1,param_2,plVar5,uVar9,param_5);
        return param_2;
      }
    }
  }
  else {
    plVar3 = (longlong *)func_0x00018066bd70(param_4);
    if (*(int *)(param_5 + 0x10) != 0) {
      if ((int)param_4[6] != 0) {
        pbVar4 = *(byte **)(param_5 + 8);
        lVar7 = param_4[5] - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[lVar7];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_1800f7924;
      }
      if ((int)plVar3[6] != 0) {
        pbVar4 = (byte *)plVar3[5];
        plVar8 = (longlong *)(*(longlong *)(param_5 + 8) - (longlong)pbVar4);
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[(longlong)plVar8];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if (0 < (int)(bVar1 - uVar6)) {
          plVar5 = param_4;
          if (*param_4 == 0) goto LAB_1800f7907;
          uVar9 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
          plVar5 = plVar3;
          goto LAB_1800f790a;
        }
      }
    }
  }
LAB_1800f7924:
  bVar2 = true;
  plVar5 = (longlong *)param_1[2];
  plVar8 = param_1;
  while (plVar5 != (longlong *)0x0) {
    plVar8 = plVar5;
    if ((int)plVar5[6] == 0) {
      bVar2 = false;
LAB_1800f7942:
      plVar5 = (longlong *)*plVar5;
    }
    else {
      if (*(int *)(param_5 + 0x10) == 0) {
        bVar2 = true;
      }
      else {
        pbVar4 = (byte *)plVar5[5];
        lVar7 = *(longlong *)(param_5 + 8) - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[lVar7];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar6);
      }
      if (!bVar2) goto LAB_1800f7942;
      plVar5 = (longlong *)plVar5[1];
    }
  }
  plVar5 = plVar8;
  if (bVar2) {
    if (plVar8 != (longlong *)param_1[1]) {
      plVar5 = (longlong *)func_0x00018066b9a0(plVar8);
      goto LAB_1800f7962;
    }
  }
  else {
LAB_1800f7962:
    if (*(int *)(param_5 + 0x10) == 0) {
LAB_1800f7a6e:
      *param_2 = plVar5;
      return param_2;
    }
    if ((int)plVar5[6] != 0) {
      pbVar4 = *(byte **)(param_5 + 8);
      lVar7 = plVar5[5] - (longlong)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar7];
        if (bVar1 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_1800f7a6e;
    }
  }
  if (plVar8 != param_1) {
    if ((int)plVar8[6] == 0) {
LAB_1800f79d7:
      uVar10 = 1;
      goto LAB_1800f7a20;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar4 = (byte *)plVar8[5];
      lVar7 = *(longlong *)(param_5 + 8) - (longlong)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar7];
        if (bVar1 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_1800f79d7;
    }
  }
  uVar10 = 0;
LAB_1800f7a20:
  lVar7 = FUN_18062b420(_DAT_180c8ed18,0xc0,(char)param_1[5]);
  FUN_180049b30(lVar7 + 0x20,param_5);
  *(undefined8 *)(lVar7 + 0xb8) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar7,plVar8,param_1,uVar10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1800f7a90(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,0xc0,*(undefined1 *)(param_1 + 0x28),param_4,
                         0xfffffffffffffffe);
  FUN_180049b30(puVar1 + 4,param_2 + 0x20);
  puVar1[0x17] = *(undefined8 *)(param_2 + 0xb8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = param_3;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 0x18);
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




