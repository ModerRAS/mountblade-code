#include "TaleWorlds.Native.Split.h"

// 03_rendering_part117.c - 22 个函数

// 函数: void FUN_180339860(longlong param_1)
void FUN_180339860(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x8c) = 8;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_180284720(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x8c) = 1;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  **(undefined1 **)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  **(undefined1 **)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  **(undefined1 **)(param_1 + 0x1b0) = 0;
  return;
}



undefined8 * FUN_180339920(undefined8 *param_1)

{
  FUN_180320470();
  *param_1 = &UNK_180a1b470;
  param_1[0x1f] = &UNK_18098bcb0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = &UNK_1809fcc58;
  param_1[0x20] = param_1 + 0x22;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x2a] = &UNK_18098bcb0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2a] = &UNK_1809fcc58;
  param_1[0x2b] = param_1 + 0x2d;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x35] = &UNK_18098bcb0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x35] = &UNK_1809fcc58;
  param_1[0x36] = param_1 + 0x38;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_180339860(param_1);
  return param_1;
}





// 函数: void FUN_1803399f0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1803399f0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 unaff_RDI;
  
  FUN_1803377b0();
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 0xf0);
  if ((ulonglong)((param_2[2] - (longlong)puVar2) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 0xf4);
  if ((ulonglong)((param_2[2] - (longlong)puVar2) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  if ((ulonglong)((param_2[2] - param_2[1]) + *param_2) < 0x41) {
    FUN_180639bf0(param_2,(param_2[1] - *param_2) + 0x40,param_3,param_4,unaff_RDI);
  }
  FUN_180639fd0(param_2,param_1 + 0xb0);
  FUN_180639fd0(param_2,param_1 + 0xc0);
  FUN_180639fd0(param_2,param_1 + 0xd0);
  puVar2 = (undefined4 *)param_2[1];
  if ((ulonglong)((param_2[2] - (longlong)puVar2) + *param_2) < 0x11) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (0x10 - *param_2),param_3,param_4,unaff_RDI);
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = *(undefined4 *)(param_1 + 0xe0);
  param_2[1] = param_2[1] + 4;
  *(undefined4 *)param_2[1] = *(undefined4 *)(param_1 + 0xe4);
  param_2[1] = param_2[1] + 4;
  *(undefined4 *)param_2[1] = *(undefined4 *)(param_1 + 0xe8);
  param_2[1] = param_2[1] + 4;
  *(undefined4 *)param_2[1] = *(undefined4 *)(param_1 + 0xec);
  param_2[1] = param_2[1] + 4;
  return;
}





// 函数: void FUN_180339aa0(longlong param_1,longlong param_2)
void FUN_180339aa0(longlong param_1,longlong param_2)

{
  FUN_180337990();
  *(undefined4 *)(param_1 + 0xf0) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xf4) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xb0) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xb4) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xb8) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xbc) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xc0) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xc4) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 200) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xcc) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xd0) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xd4) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xd8) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xdc) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xe0) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xe4) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xe8) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xec) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  return;
}





// 函数: void FUN_180339c00(undefined8 *param_1)
void FUN_180339c00(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = &UNK_180a1b368;
  *param_1 = &UNK_180a1b4b0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
  plVar1 = param_1 + 0x12;
  FUN_180284720(plVar1);
  lVar2 = param_1[0x13];
  for (lVar3 = *plVar1; lVar3 != lVar2; lVar3 = lVar3 + 0x1a0) {
    FUN_180281e80(lVar3);
  }
  if (*plVar1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



undefined8 *
FUN_180339c60(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a1b368;
  *param_1 = &UNK_180a1b4b0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
  FUN_180284720(param_1 + 0x12);
  FUN_18033aa70(param_1 + 0x12);
  if ((param_2 & 1) != 0) {
    free(param_1,0xf8,param_3,param_4,uVar1);
  }
  return param_1;
}





// 函数: void FUN_180339cf0(longlong param_1)
void FUN_180339cf0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x8c) = 8;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_180284720(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x8c) = 4;
  *(undefined8 *)(param_1 + 0xf0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xb0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0x3f80000000000000;
  return;
}



undefined8 * FUN_180339d70(undefined8 *param_1)

{
  FUN_180320470();
  *param_1 = &UNK_180a1b368;
  FUN_180339cf0(param_1);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180339db0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0xf8,8,3,0xfffffffffffffffe);
  FUN_180320470(puVar1);
  *puVar1 = &UNK_180a1b368;
  FUN_180339cf0(puVar1);
  return puVar1;
}



longlong FUN_180339e10(longlong param_1,longlong param_2)

{
  FUN_180337eb0();
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  return param_1;
}





// 函数: void FUN_180339e50(longlong param_1,longlong *param_2)
void FUN_180339e50(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  
  FUN_1803377b0();
  puVar4 = (undefined1 *)param_2[1];
  uVar1 = *(undefined1 *)(param_1 + 0xb0);
  if ((ulonglong)((param_2[2] - (longlong)puVar4) + *param_2) < 2) {
    FUN_180639bf0(param_2,puVar4 + (1 - *param_2));
    puVar4 = (undefined1 *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 1;
  piVar5 = (int *)param_2[1];
  lVar7 = *(longlong *)(param_1 + 0xc0);
  lVar2 = *(longlong *)(param_1 + 0xb8);
  if ((ulonglong)((param_2[2] - (longlong)piVar5) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)piVar5 + (4 - *param_2));
    piVar5 = (int *)param_2[1];
  }
  iVar6 = (int)(lVar7 - lVar2 >> 3);
  *piVar5 = iVar6;
  param_2[1] = param_2[1] + 4;
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + lVar7 * 8);
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar6);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180339f30(longlong param_1,longlong param_2)
void FUN_180339f30(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  FUN_180337990();
  *(undefined1 *)(param_1 + 0xb0) = **(undefined1 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
  uVar1 = **(uint **)(param_2 + 8);
  *(uint **)(param_2 + 8) = *(uint **)(param_2 + 8) + 1;
  if (0 < (int)uVar1) {
    uVar7 = (ulonglong)uVar1;
    do {
      uVar2 = FUN_180337b40(param_2);
      puVar6 = *(undefined8 **)(param_1 + 0xc0);
      if (puVar6 < *(undefined8 **)(param_1 + 200)) {
        *(undefined8 **)(param_1 + 0xc0) = puVar6 + 1;
        *puVar6 = uVar2;
      }
      else {
        puVar5 = *(undefined8 **)(param_1 + 0xb8);
        lVar3 = (longlong)puVar6 - (longlong)puVar5 >> 3;
        if (lVar3 == 0) {
          lVar3 = 1;
LAB_180339fdc:
          puVar4 = (undefined8 *)
                   FUN_18062b420(_DAT_180c8ed18,lVar3 * 8,*(undefined1 *)(param_1 + 0xd0));
          puVar5 = *(undefined8 **)(param_1 + 0xb8);
          puVar6 = *(undefined8 **)(param_1 + 0xc0);
        }
        else {
          lVar3 = lVar3 * 2;
          if (lVar3 != 0) goto LAB_180339fdc;
          puVar4 = (undefined8 *)0x0;
        }
        if (puVar5 != puVar6) {
                    // WARNING: Subroutine does not return
          memmove(puVar4,puVar5,(longlong)puVar6 - (longlong)puVar5);
        }
        *puVar4 = uVar2;
        if (*(longlong *)(param_1 + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 **)(param_1 + 0xb8) = puVar4;
        *(undefined8 **)(param_1 + 200) = puVar4 + lVar3;
        *(undefined8 **)(param_1 + 0xc0) = puVar4 + 1;
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180339f6a(uint param_1)
void FUN_180339f6a(uint param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong unaff_RBX;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_1;
  do {
    uVar1 = FUN_180337b40();
    puVar5 = *(undefined8 **)(unaff_RBX + 0xc0);
    if (puVar5 < *(undefined8 **)(unaff_RBX + 200)) {
      *(undefined8 **)(unaff_RBX + 0xc0) = puVar5 + 1;
      *puVar5 = uVar1;
    }
    else {
      puVar4 = *(undefined8 **)(unaff_RBX + 0xb8);
      lVar2 = (longlong)puVar5 - (longlong)puVar4 >> 3;
      if (lVar2 == 0) {
        lVar2 = 1;
LAB_180339fdc:
        puVar3 = (undefined8 *)
                 FUN_18062b420(_DAT_180c8ed18,lVar2 * 8,*(undefined1 *)(unaff_RBX + 0xd0));
        puVar4 = *(undefined8 **)(unaff_RBX + 0xb8);
        puVar5 = *(undefined8 **)(unaff_RBX + 0xc0);
      }
      else {
        lVar2 = lVar2 * 2;
        if (lVar2 != 0) goto LAB_180339fdc;
        puVar3 = (undefined8 *)0x0;
      }
      if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
        memmove(puVar3,puVar4,(longlong)puVar5 - (longlong)puVar4);
      }
      *puVar3 = uVar1;
      if (*(longlong *)(unaff_RBX + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 **)(unaff_RBX + 0xb8) = puVar3;
      *(undefined8 **)(unaff_RBX + 200) = puVar3 + lVar2;
      *(undefined8 **)(unaff_RBX + 0xc0) = puVar3 + 1;
    }
    uVar6 = uVar6 - 1;
    if (uVar6 == 0) {
      return;
    }
  } while( true );
}





// 函数: void FUN_18033a07d(void)
void FUN_18033a07d(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_18033a090(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0xd8,8,3,0xfffffffffffffffe);
  FUN_180320470(puVar1);
  *puVar1 = &UNK_180a1b3b0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(undefined4 *)(puVar1 + 0x1a) = 3;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  return puVar1;
}





// 函数: void FUN_18033a110(longlong param_1)
void FUN_18033a110(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  *(undefined4 *)(param_1 + 0x8c) = 8;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_180284720(param_1 + 0x90);
  *(undefined1 *)(param_1 + 0xb0) = 1;
  *(undefined4 *)(param_1 + 0x8c) = 2;
  uVar2 = *(longlong *)(param_1 + 0xc0) - *(longlong *)(param_1 + 0xb8) >> 3;
  if ((int)uVar2 != 0) {
    uVar2 = uVar2 & 0xffffffff;
    do {
      puVar1 = *(undefined8 **)(lVar4 + *(longlong *)(param_1 + 0xb8));
      if (puVar1 != (undefined8 *)0x0) {
        lVar3 = __RTCastToVoid(puVar1);
        (**(code **)*puVar1)(puVar1,0);
        if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar3);
        }
      }
      *(undefined8 *)(lVar4 + *(longlong *)(param_1 + 0xb8)) = 0;
      lVar4 = lVar4 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0xb8);
  return;
}





// 函数: void FUN_18033a163(void)
void FUN_18033a163(void)

{
  undefined8 *puVar1;
  uint in_EAX;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  ulonglong unaff_R15;
  
  uVar3 = unaff_R15 & 0xffffffff;
  uVar4 = (ulonglong)in_EAX;
  do {
    puVar1 = *(undefined8 **)(uVar3 + *(longlong *)(unaff_RDI + 0xb8));
    if (puVar1 != (undefined8 *)0x0) {
      lVar2 = __RTCastToVoid(puVar1);
      (**(code **)*puVar1)(puVar1,0);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
    }
    *(ulonglong *)(uVar3 + *(longlong *)(unaff_RDI + 0xb8)) = unaff_R15;
    uVar3 = uVar3 + 8;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  *(undefined8 *)(unaff_RDI + 0xc0) = *(undefined8 *)(unaff_RDI + 0xb8);
  return;
}





// 函数: void FUN_18033a1dc(void)
void FUN_18033a1dc(void)

{
  longlong unaff_RDI;
  
  *(undefined8 *)(unaff_RDI + 0xc0) = *(undefined8 *)(unaff_RDI + 0xb8);
  return;
}



undefined8 * FUN_18033a200(undefined8 *param_1)

{
  FUN_180320470();
  *param_1 = &UNK_180a1b3b0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 3;
  *(undefined1 *)(param_1 + 0x16) = 0;
  return param_1;
}



undefined8 * FUN_18033a260(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a1b248;
  if (param_1[0x18] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_180049470(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xe0);
  }
  return param_1;
}





// 函数: void FUN_18033a2d0(longlong param_1)
void FUN_18033a2d0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  uVar3 = 0;
  uVar4 = uVar3;
  if (*(longlong *)(param_1 + 200) - lVar1 >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(uVar4 + lVar1);
      if (lVar1 != 0) {
        FUN_180320da0(lVar1);
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar1);
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      *(undefined8 *)(uVar4 + *(longlong *)(param_1 + 0xc0)) = 0;
      lVar1 = *(longlong *)(param_1 + 0xc0);
      uVar4 = uVar4 + 8;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(param_1 + 200) - lVar1 >> 3));
  }
  return;
}





// 函数: void FUN_18033a303(undefined8 param_1,longlong param_2)
void FUN_18033a303(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int unaff_EBP;
  longlong unaff_RSI;
  ulonglong uVar2;
  ulonglong unaff_R14;
  
  uVar2 = unaff_R14 & 0xffffffff;
  do {
    lVar1 = *(longlong *)(uVar2 + param_2);
    if (lVar1 != 0) {
      FUN_180320da0(lVar1);
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar1);
    }
    unaff_EBP = unaff_EBP + 1;
    *(ulonglong *)(uVar2 + *(longlong *)(unaff_RSI + 0xc0)) = unaff_R14;
    uVar2 = uVar2 + 8;
    param_2 = *(longlong *)(unaff_RSI + 0xc0);
  } while ((ulonglong)(longlong)unaff_EBP <
           (ulonglong)(*(longlong *)(unaff_RSI + 200) - param_2 >> 3));
  return;
}





// 函数: void FUN_18033a361(void)
void FUN_18033a361(void)

{
  return;
}



undefined8 *
FUN_18033a380(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a1b2d8;
  FUN_180049470();
  if ((param_2 & 1) != 0) {
    free(param_1,0xd0,param_3,param_4,uVar1);
  }
  return param_1;
}





// 函数: void FUN_18033a3f0(undefined4 *param_1,longlong param_2)
void FUN_18033a3f0(undefined4 *param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  uVar1 = **(uint **)(param_2 + 8);
  puVar3 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x22) + 0x18))(param_1 + 0x22,puVar3,uVar1);
    puVar3 = (uint *)((ulonglong)uVar1 + *(longlong *)(param_2 + 8));
  }
  param_1[1] = *puVar3;
  param_1[2] = puVar3[1];
  param_1[3] = puVar3[2];
  param_1[4] = puVar3[3];
  param_1[5] = puVar3[4];
  param_1[6] = puVar3[5];
  param_1[7] = puVar3[6];
  param_1[8] = puVar3[7];
  param_1[9] = puVar3[8];
  param_1[10] = puVar3[9];
  param_1[0xb] = puVar3[10];
  param_1[0xc] = puVar3[0xb];
  param_1[0xd] = puVar3[0xc];
  param_1[0xe] = puVar3[0xd];
  param_1[0xf] = puVar3[0xe];
  param_1[0x10] = puVar3[0xf];
  param_1[0x11] = puVar3[0x10];
  param_1[0x12] = puVar3[0x11];
  param_1[0x13] = puVar3[0x12];
  param_1[0x14] = puVar3[0x13];
  param_1[0x15] = puVar3[0x14];
  param_1[0x16] = puVar3[0x15];
  param_1[0x17] = puVar3[0x16];
  param_1[0x18] = puVar3[0x17];
  param_1[0x19] = puVar3[0x18];
  param_1[0x1a] = puVar3[0x19];
  param_1[0x1b] = puVar3[0x1a];
  param_1[0x1c] = puVar3[0x1b];
  param_1[0x1d] = puVar3[0x1c];
  param_1[0x1e] = puVar3[0x1d];
  param_1[0x1f] = puVar3[0x1e];
  param_1[0x20] = puVar3[0x1f];
  *(uint **)(param_2 + 8) = puVar3 + 0x20;
  uVar2 = FUN_1800c17c0();
  *param_1 = uVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * FUN_18033a740(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  char acStackX_8 [4];
  uint uStackX_c;
  
  uVar1 = *param_2;
  uVar3 = (ulonglong)uVar1 % (ulonglong)*(uint *)(param_1 + 0x10);
  puVar2 = *(uint **)(*(longlong *)(param_1 + 8) + uVar3 * 8);
  do {
    if (puVar2 == (uint *)0x0) {
LAB_18033a781:
      FUN_18066c220(param_1 + 0x20,acStackX_8,(ulonglong)*(uint *)(param_1 + 0x10),
                    *(undefined4 *)(param_1 + 0x18),1);
      puVar2 = (uint *)FUN_18062b420(_DAT_180c8ed18,0x18,*(undefined1 *)(param_1 + 0x2c));
      *puVar2 = *param_2;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      if (acStackX_8[0] != '\0') {
        uVar3 = (ulonglong)uVar1 % (ulonglong)uStackX_c;
        FUN_18033bf30(param_1,uStackX_c);
      }
      *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar3 * 8);
      *(uint **)(*(longlong *)(param_1 + 8) + uVar3 * 8) = puVar2;
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
      return puVar2 + 2;
    }
    if (uVar1 == *puVar2) {
      if (puVar2 != (uint *)0x0) {
        return puVar2 + 2;
      }
      goto LAB_18033a781;
    }
    puVar2 = *(uint **)(puVar2 + 4);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * FUN_18033a78e(void)

{
  undefined4 *puVar1;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong unaff_RDI;
  undefined8 in_R9;
  undefined4 *unaff_R14;
  undefined4 uVar2;
  char cStack0000000000000050;
  
  uVar2 = 1;
  FUN_18066c220();
  puVar1 = (undefined4 *)
           FUN_18062b420(_DAT_180c8ed18,0x18,*(undefined1 *)(unaff_RBX + 0x2c),in_R9,uVar2);
  *puVar1 = *unaff_R14;
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  if (cStack0000000000000050 != '\0') {
    unaff_RBP = unaff_RDI % (_cStack0000000000000050 >> 0x20);
    FUN_18033bf30();
  }
  *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(*(longlong *)(unaff_RBX + 8) + unaff_RBP * 8);
  *(undefined4 **)(*(longlong *)(unaff_RBX + 8) + unaff_RBP * 8) = puVar1;
  *(longlong *)(unaff_RBX + 0x18) = *(longlong *)(unaff_RBX + 0x18) + 1;
  return puVar1 + 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * FUN_18033a815(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong in_RAX;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong unaff_RDI;
  undefined4 *unaff_R14;
  char cStack0000000000000050;
  uint uStack0000000000000054;
  
  if (in_RAX != 0) {
    return (undefined4 *)(in_RAX + 8);
  }
  FUN_18066c220(param_1 + 0x20,&stack0x00000050,param_3,*(undefined4 *)(unaff_RBX + 0x18),1);
  puVar1 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x18,*(undefined1 *)(unaff_RBX + 0x2c));
  *puVar1 = *unaff_R14;
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  if (cStack0000000000000050 != '\0') {
    unaff_RBP = unaff_RDI % (ulonglong)uStack0000000000000054;
    FUN_18033bf30();
  }
  *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(*(longlong *)(unaff_RBX + 8) + unaff_RBP * 8);
  *(undefined4 **)(*(longlong *)(unaff_RBX + 8) + unaff_RBP * 8) = puVar1;
  *(longlong *)(unaff_RBX + 0x18) = *(longlong *)(unaff_RBX + 0x18) + 1;
  return puVar1 + 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18033a920(longlong *param_1,ulonglong param_2)
void FUN_18033a920(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  puVar5 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)*param_1;
  uVar3 = (longlong)puVar5 - (longlong)puVar4 >> 3;
  if (param_2 <= uVar3) {
    param_1[1] = (longlong)(puVar4 + param_2);
    return;
  }
  param_2 = param_2 - uVar3;
  if (param_2 <= (ulonglong)(param_1[2] - (longlong)puVar5 >> 3)) {
    uVar3 = param_2;
    if (param_2 != 0) {
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar5 = (undefined8 *)param_1[1];
    }
    param_1[1] = (longlong)(puVar5 + param_2);
    return;
  }
  uVar6 = uVar3 * 2;
  if (uVar3 == 0) {
    uVar6 = 1;
  }
  if (uVar6 < uVar3 + param_2) {
    uVar6 = uVar3 + param_2;
  }
  puVar2 = (undefined8 *)0x0;
  if (uVar6 != 0) {
    puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,uVar6 * 8,(char)param_1[3]);
    puVar4 = (undefined8 *)*param_1;
    puVar5 = (undefined8 *)param_1[1];
  }
  uVar3 = param_2;
  puVar1 = puVar2;
  if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
    memmove(puVar2,puVar4,(longlong)puVar5 - (longlong)puVar4);
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (longlong)puVar2;
  param_1[2] = (longlong)(puVar2 + uVar6);
  param_1[1] = (longlong)(puVar2 + param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18033a953(longlong param_1,undefined8 *param_2)
void FUN_18033a953(longlong param_1,undefined8 *param_2)

{
  longlong in_RAX;
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *unaff_RBX;
  ulonglong uVar4;
  ulonglong unaff_RSI;
  longlong *unaff_R14;
  
  if (unaff_RSI <= (ulonglong)(in_RAX >> 3)) {
    uVar4 = unaff_RSI;
    if (unaff_RSI != 0) {
      do {
        *unaff_RBX = 0;
        unaff_RBX = unaff_RBX + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      unaff_RBX = (undefined8 *)unaff_R14[1];
    }
    unaff_R14[1] = (longlong)(unaff_RBX + unaff_RSI);
    return;
  }
  uVar4 = param_1 * 2;
  if (param_1 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < param_1 + unaff_RSI) {
    uVar4 = param_1 + unaff_RSI;
  }
  puVar1 = (undefined8 *)0x0;
  if (uVar4 != 0) {
    puVar1 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,uVar4 * 8,(char)unaff_R14[3]);
    param_2 = (undefined8 *)*unaff_R14;
    unaff_RBX = (undefined8 *)unaff_R14[1];
  }
  if (param_2 != unaff_RBX) {
                    // WARNING: Subroutine does not return
    memmove(puVar1,param_2,(longlong)unaff_RBX - (longlong)param_2);
  }
  puVar2 = puVar1;
  uVar3 = unaff_RSI;
  if (unaff_RSI != 0) {
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (*unaff_R14 == 0) {
    *unaff_R14 = (longlong)puVar1;
    unaff_R14[2] = (longlong)(puVar1 + uVar4);
    unaff_R14[1] = (longlong)(puVar1 + unaff_RSI);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18033aa27(void)
void FUN_18033aa27(void)

{
  longlong lVar1;
  undefined8 *unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_R14;
  
  lVar1 = unaff_RSI;
  if (unaff_RSI != 0) {
    do {
      *unaff_RBX = 0;
      unaff_RBX = unaff_RBX + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    unaff_RBX = *(undefined8 **)(unaff_R14 + 8);
  }
  *(undefined8 **)(unaff_R14 + 8) = unaff_RBX + unaff_RSI;
  return;
}





// 函数: void FUN_18033aa58(undefined8 param_1,longlong param_2)
void FUN_18033aa58(undefined8 param_1,longlong param_2)

{
  longlong unaff_RSI;
  longlong unaff_R14;
  
  *(longlong *)(unaff_R14 + 8) = param_2 + unaff_RSI * 8;
  return;
}





// 函数: void FUN_18033aa70(longlong *param_1)
void FUN_18033aa70(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x1a0) {
    FUN_180281e80(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18033aae0(longlong *param_1)
void FUN_18033aae0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0xb0) {
    FUN_180320a20(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



