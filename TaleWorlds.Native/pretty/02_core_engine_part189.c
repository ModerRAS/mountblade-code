#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part189.c - 14 个函数

// 函数: void FUN_18017107a(void)
void FUN_18017107a(void)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  ulonglong in_stack_00000050;
  
  uVar1 = LoadCursorFromFileA();
  *(undefined8 *)(unaff_RDI + 0x50) = uVar1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180171101(longlong param_1)
void FUN_180171101(longlong param_1)

{
  longlong lVar1;
  longlong unaff_RBX;
  longlong lStack0000000000000028;
  ulonglong in_stack_00000050;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lStack0000000000000028 = lVar1 + 0x18;
  FUN_180173720(lVar1,*(undefined4 *)(unaff_RBX + 0x30),*(undefined4 *)(unaff_RBX + 0x34),
                *(undefined1 *)(unaff_RBX + 0x38),lVar1 + 0x38);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801712c0(longlong param_1)
void FUN_1801712c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  lVar3 = GetFocus();
  uStack_68 = CONCAT31(uStack_68._1_3_,*(longlong *)(param_1 + 8) == lVar3);
  lVar3 = WindowFromPoint(CONCAT44(uStack_60,uStack_64));
  uStack_5c = CONCAT31(uStack_5c._1_3_,lVar3 == *(longlong *)(param_1 + 8));
  GetWindowRect(*(longlong *)(param_1 + 8),&uStack_58);
  lVar3 = GetConsoleWindow();
  if (lVar3 != 0) {
    GetWindowRect(lVar3,&uStack_48);
  }
  uStack_28 = (undefined4)uStack_78;
  uStack_24 = uStack_78._4_4_;
  uStack_20 = (undefined4)uStack_70;
  uStack_1c = uStack_70._4_4_;
  MapWindowPoints(*(undefined8 *)(param_1 + 8),0,&uStack_28,2);
  uStack_38 = CONCAT44(uStack_24,uStack_28);
  GetClientRect(*(undefined8 *)(param_1 + 8),&uStack_78);
  GetCursorPos(&uStack_64);
  uVar4 = (ulonglong)(*(int *)(param_1 + 0x13c) - 1U & 1);
  puVar1 = (undefined8 *)(param_1 + 0xac + uVar4 * 0x48);
  *puVar1 = uStack_78;
  puVar1[1] = uStack_70;
  puVar1 = (undefined8 *)(param_1 + 0xbc + uVar4 * 0x48);
  *puVar1 = CONCAT44(uStack_64,uStack_68);
  puVar1[1] = CONCAT44(uStack_5c,uStack_60);
  puVar1 = (undefined8 *)(param_1 + 0xcc + uVar4 * 0x48);
  *puVar1 = uStack_58;
  puVar1[1] = uStack_50;
  puVar2 = (undefined4 *)(param_1 + 0xdc + uVar4 * 0x48);
  *puVar2 = (undefined4)uStack_48;
  puVar2[1] = uStack_48._4_4_;
  puVar2[2] = (undefined4)uStack_40;
  puVar2[3] = uStack_40._4_4_;
  *(undefined8 *)(param_1 + 0xec + uVar4 * 0x48) = uStack_38;
  LOCK();
  *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
  UNLOCK();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180171410(longlong param_1,undefined8 *param_2)
void FUN_180171410(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  longlong lStack_78;
  longlong *plStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  longlong **pplStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined4 uStack_38;
  undefined1 auStack_30 [16];
  ulonglong uStack_20;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  plVar5 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x218,8,3);
  lVar1 = _DAT_180c82868 + 0x70;
  lVar2 = _DAT_180c82868 + 0x78;
  puStack_48 = &UNK_1809fdc18;
  puStack_40 = auStack_30;
  auStack_30[0] = 0;
  uStack_38 = 0xc;
  plStack_68 = plVar5;
  strcpy_s(auStack_30,0x10,&UNK_180a089f0);
  lStack_78 = lVar1;
  FUN_18020e0e0(plVar5,&puStack_48,3,lVar2);
  *plVar5 = (longlong)&UNK_1809fe220;
  *plVar5 = (longlong)&UNK_180a08d78;
  *(undefined1 *)(plVar5 + 0x41) = 0;
  *(longlong **)(param_1 + 0x140) = plVar5;
  puStack_48 = &UNK_18098bcb0;
  *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x210) = param_1;
  FUN_18020e840(*(undefined8 *)(param_1 + 0x140));
  plStack_68 = *(longlong **)(param_1 + 0x140);
  FUN_18005ea90(_DAT_180c82868 + 0x48,&plStack_68);
  plVar5 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,200,8,3);
  plStack_68 = plVar5;
  FUN_180049830(plVar5);
  *plVar5 = (longlong)&UNK_180a08ce8;
  plVar5[0x18] = param_1;
  plStack_58 = plVar5;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  puVar3 = *(undefined8 **)(param_1 + 0x140);
  pcVar4 = *(code **)*puVar3;
  pplStack_50 = &plStack_68;
  plStack_68 = plVar5;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  (*pcVar4)(puVar3,&plStack_68);
  FUN_18020f150(*(undefined8 *)(param_1 + 0x140));
  *(undefined1 *)(_DAT_180c868d0 + 0x2028) = 1;
  (**(code **)(*plVar5 + 0x38))(plVar5);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_98);
}





// 函数: void FUN_180171610(longlong param_1)
void FUN_180171610(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar2 != puVar1) {
    do {
      *puVar2 = &UNK_18098bcb0;
      puVar2 = puVar2 + 0xe;
    } while (puVar2 != puVar1);
    puVar2 = *(undefined8 **)(param_1 + 0x18);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar2;
  uVar3 = GetDC(0);
                    // WARNING: Could not recover jumptable at 0x00018017167a. Too many branches
                    // WARNING: Treating indirect jump as call
  EnumDisplayMonitors(uVar3,0,FUN_180170ba0,param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1801716e0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plStackX_8;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0;
  }
  plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3,0xfffffffffffffffe);
  *plVar3 = (longlong)&UNK_180a21690;
  *plVar3 = (longlong)&UNK_180a21720;
  *(undefined4 *)(plVar3 + 1) = 0;
  *plVar3 = (longlong)&UNK_18098bdc8;
  LOCK();
  *(undefined1 *)(plVar3 + 2) = 0;
  UNLOCK();
  plVar3[3] = -1;
  *plVar3 = (longlong)&UNK_180a08c60;
  *(undefined4 *)(plVar3 + 5) = 0;
  plVar3[4] = param_1;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3[6] = param_2;
  puVar1 = *(undefined8 **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  plStackX_8 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  (*pcVar2)(puVar1,&plStackX_8);
  FUN_18020f150(*(undefined8 *)(param_1 + 0x140));
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1801717e0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *aplStackX_8 [2];
  longlong **pplStackX_18;
  longlong *plStackX_20;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0;
  }
  plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3,0xfffffffffffffffe);
  *plVar3 = (longlong)&UNK_180a21690;
  *plVar3 = (longlong)&UNK_180a21720;
  *(undefined4 *)(plVar3 + 1) = 0;
  *plVar3 = (longlong)&UNK_18098bdc8;
  LOCK();
  *(undefined1 *)(plVar3 + 2) = 0;
  UNLOCK();
  plVar3[3] = -1;
  *plVar3 = (longlong)&UNK_180a08c60;
  *(undefined4 *)(plVar3 + 5) = 1;
  plVar3[4] = param_1;
  pplStackX_18 = (longlong **)plVar3;
  plStackX_20 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  puVar1 = *(undefined8 **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  pplStackX_18 = aplStackX_8;
  aplStackX_8[0] = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  (*pcVar2)(puVar1,aplStackX_8);
  FUN_18020f150(*(undefined8 *)(param_1 + 0x140));
  FUN_180627be0(param_2,param_1 + 0x148);
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801718f0(longlong param_1)
void FUN_1801718f0(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong *plStackX_18;
  
  plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3,0xfffffffffffffffe);
  *plVar3 = (longlong)&UNK_180a21690;
  *plVar3 = (longlong)&UNK_180a21720;
  *(undefined4 *)(plVar3 + 1) = 0;
  *plVar3 = (longlong)&UNK_18098bdc8;
  LOCK();
  *(undefined1 *)(plVar3 + 2) = 0;
  UNLOCK();
  plVar3[3] = -1;
  *plVar3 = (longlong)&UNK_180a08c60;
  *(undefined4 *)(plVar3 + 5) = 2;
  plVar3[4] = param_1;
  pplStackX_10 = (longlong **)plVar3;
  plStackX_18 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  puVar1 = *(undefined8 **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  (*pcVar2)(puVar1,&plStackX_8);
  FUN_18020f150(*(undefined8 *)(param_1 + 0x140));
                    // WARNING: Could not recover jumptable at 0x0001801719ca. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801719d0(longlong param_1)
void FUN_1801719d0(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong *plStackX_18;
  
  plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3,0xfffffffffffffffe);
  *plVar3 = (longlong)&UNK_180a21690;
  *plVar3 = (longlong)&UNK_180a21720;
  *(undefined4 *)(plVar3 + 1) = 0;
  *plVar3 = (longlong)&UNK_18098bdc8;
  LOCK();
  *(undefined1 *)(plVar3 + 2) = 0;
  UNLOCK();
  plVar3[3] = -1;
  *plVar3 = (longlong)&UNK_180a08c60;
  *(undefined4 *)(plVar3 + 5) = 3;
  plVar3[4] = param_1;
  pplStackX_10 = (longlong **)plVar3;
  plStackX_18 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  puVar1 = *(undefined8 **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  (*pcVar2)(puVar1,&plStackX_8);
  FUN_18020f150(*(undefined8 *)(param_1 + 0x140));
                    // WARNING: Could not recover jumptable at 0x000180171aaa. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180171ab0(longlong param_1)
void FUN_180171ab0(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong *plStackX_18;
  
  plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3,0xfffffffffffffffe);
  *plVar3 = (longlong)&UNK_180a21690;
  *plVar3 = (longlong)&UNK_180a21720;
  *(undefined4 *)(plVar3 + 1) = 0;
  *plVar3 = (longlong)&UNK_18098bdc8;
  LOCK();
  *(undefined1 *)(plVar3 + 2) = 0;
  UNLOCK();
  plVar3[3] = -1;
  *plVar3 = (longlong)&UNK_180a08c60;
  *(undefined4 *)(plVar3 + 5) = 4;
  plVar3[4] = param_1;
  pplStackX_10 = (longlong **)plVar3;
  plStackX_18 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  puVar1 = *(undefined8 **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  (*pcVar2)(puVar1,&plStackX_8);
  FUN_18020f150(*(undefined8 *)(param_1 + 0x140));
                    // WARNING: Could not recover jumptable at 0x000180171b8a. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180171c80(longlong param_1,longlong param_2)
void FUN_180171c80(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong *plStackX_18;
  
  plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3,0xfffffffffffffffe);
  *plVar3 = (longlong)&UNK_180a21690;
  *plVar3 = (longlong)&UNK_180a21720;
  *(undefined4 *)(plVar3 + 1) = 0;
  *plVar3 = (longlong)&UNK_18098bdc8;
  LOCK();
  *(undefined1 *)(plVar3 + 2) = 0;
  UNLOCK();
  plVar3[3] = -1;
  *plVar3 = (longlong)&UNK_180a08c60;
  *(undefined4 *)(plVar3 + 5) = 5;
  plVar3[4] = param_1;
  pplStackX_10 = (longlong **)plVar3;
  plStackX_18 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3[6] = param_2;
  puVar1 = *(undefined8 **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  (*pcVar2)(puVar1,&plStackX_8);
                    // WARNING: Could not recover jumptable at 0x000180171d4b. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return;
}



undefined8 * FUN_180171d50(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x13c);
  uVar3 = 0;
  uVar4 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar7 = (ulonglong)(uVar2 & 1);
  if (param_3 == 0) {
    puVar1 = (undefined4 *)(param_1 + 0xcc + uVar7 * 0x48);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
  }
  else {
    uVar5 = uVar3;
    uVar6 = uVar4;
    if (param_3 == 1) {
      puVar1 = (undefined4 *)(param_1 + 0xdc + uVar7 * 0x48);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
    }
  }
  *(undefined4 *)param_2 = uVar3;
  *(undefined4 *)(param_2 + 1) = uVar5;
  *(undefined4 *)((longlong)param_2 + 4) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180171dd0(longlong param_1,undefined4 param_2,undefined4 *param_3)
void FUN_180171dd0(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plStackX_8;
  
  plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3,0xfffffffffffffffe);
  *plVar6 = (longlong)&UNK_180a21690;
  *plVar6 = (longlong)&UNK_180a21720;
  *(undefined4 *)(plVar6 + 1) = 0;
  *plVar6 = (longlong)&UNK_18098bdc8;
  LOCK();
  *(undefined1 *)(plVar6 + 2) = 0;
  UNLOCK();
  plVar6[3] = -1;
  *plVar6 = (longlong)&UNK_180a08c60;
  *(undefined4 *)(plVar6 + 5) = 7;
  plVar6[4] = param_1;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  *(undefined4 *)(plVar6 + 6) = param_2;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)((longlong)plVar6 + 0x34) = *param_3;
  *(undefined4 *)(plVar6 + 7) = uVar3;
  *(undefined4 *)((longlong)plVar6 + 0x3c) = uVar4;
  *(undefined4 *)(plVar6 + 8) = uVar5;
  puVar1 = *(undefined8 **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  plStackX_8 = plVar6;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  (*pcVar2)(puVar1,&plStackX_8);
  FUN_18020f150(*(undefined8 *)(param_1 + 0x140));
                    // WARNING: Could not recover jumptable at 0x000180171eb9. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar6 + 0x38))(plVar6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_180171f10(longlong param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  iVar3 = (int)((*(longlong *)(param_1 + 0x20) - lVar1) / 0x70);
  if ((1 < iVar3) && (*(int *)(_DAT_180c86920 + 0x1f10) < iVar3)) {
    lVar4 = (longlong)*(int *)(_DAT_180c86920 + 0x1f10) * 0x70;
    uVar2 = *(int *)(lVar4 + 0x60 + lVar1) - *(int *)(lVar4 + 0x58 + lVar1);
    uVar5 = (int)uVar2 >> 0x1f;
    *param_2 = (uVar2 ^ uVar5) - uVar5;
    uVar2 = *(int *)(lVar4 + 100 + lVar1) - *(int *)(lVar4 + 0x5c + lVar1);
    uVar5 = (int)uVar2 >> 0x1f;
    param_2[1] = (uVar2 ^ uVar5) - uVar5;
    return param_2;
  }
  iVar3 = GetSystemMetrics(0);
  *param_2 = iVar3;
  iVar3 = GetSystemMetrics(1);
  param_2[1] = iVar3;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180171fb0(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong *plStackX_18;
  
  plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3,0xfffffffffffffffe);
  *plVar6 = (longlong)&UNK_180a21690;
  *plVar6 = (longlong)&UNK_180a21720;
  *(undefined4 *)(plVar6 + 1) = 0;
  *plVar6 = (longlong)&UNK_18098bdc8;
  LOCK();
  *(undefined1 *)(plVar6 + 2) = 0;
  UNLOCK();
  plVar6[3] = -1;
  *plVar6 = (longlong)&UNK_180a08c60;
  *(undefined4 *)(plVar6 + 5) = 8;
  plVar6[4] = param_1;
  pplStackX_10 = (longlong **)plVar6;
  plStackX_18 = plVar6;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  if (param_2 == (undefined4 *)0x0) {
    *(undefined1 *)(plVar6 + 6) = 0;
  }
  else {
    *(undefined1 *)(plVar6 + 6) = 1;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(undefined4 *)((longlong)plVar6 + 0x34) = *param_2;
    *(undefined4 *)(plVar6 + 7) = uVar3;
    *(undefined4 *)((longlong)plVar6 + 0x3c) = uVar4;
    *(undefined4 *)(plVar6 + 8) = uVar5;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar6;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  (*pcVar2)(puVar1,&plStackX_8);
  (**(code **)(*plVar6 + 0x38))(plVar6);
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 FUN_1801720a0(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uStackX_8;
  longlong *plStackX_18;
  ulonglong uStackX_20;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x140) + 0x48);
  iVar5 = _Thrd_id();
  if (iVar5 != iVar2) {
    plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3,uVar7);
    *plVar6 = (longlong)&UNK_180a21690;
    *plVar6 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar6 + 1) = 0;
    *plVar6 = (longlong)&UNK_18098bdc8;
    LOCK();
    *(undefined1 *)(plVar6 + 2) = 0;
    UNLOCK();
    plVar6[3] = -1;
    *plVar6 = (longlong)&UNK_180a08c60;
    *(undefined4 *)(plVar6 + 5) = 9;
    plVar6[4] = param_1;
    (**(code **)(*plVar6 + 0x28))(plVar6);
    *(undefined4 *)(plVar6 + 6) = param_2;
    puVar3 = *(undefined8 **)(param_1 + 0x140);
    pcVar4 = *(code **)*puVar3;
    uStackX_8 = &plStackX_18;
    plStackX_18 = plVar6;
    (**(code **)(*plVar6 + 0x28))(plVar6);
    (*pcVar4)(puVar3,&plStackX_18);
    uVar1 = *(undefined1 *)(param_1 + 0x168);
    (**(code **)(*plVar6 + 0x38))(plVar6);
    return uVar1;
  }
  GetCursorPos(&uStackX_20);
  uStackX_8 = (longlong **)uStackX_20;
  ScreenToClient(*(undefined8 *)(param_1 + 8),&uStackX_8);
  if ((-1 < (int)uStackX_8) && ((float)(int)uStackX_8 < *(float *)(_DAT_180c86950 + 0x17ec))) {
    if ((-1 < (longlong)uStackX_8) && ((float)uStackX_8._4_4_ < *(float *)(_DAT_180c86950 + 0x17f0))
       ) {
      switch(param_2) {
      case 0:
        SetCursor(*(undefined8 *)(param_1 + 0x88));
        return 1;
      case 1:
        SetCursor(*(undefined8 *)(param_1 + 0x40));
        return 1;
      case 2:
        SetCursor(*(undefined8 *)(param_1 + 0x50));
        return 1;
      case 3:
        SetCursor(*(undefined8 *)(param_1 + 0x58));
        return 1;
      case 4:
        SetCursor(*(undefined8 *)(param_1 + 0x60));
        return 1;
      case 5:
        SetCursor(*(undefined8 *)(param_1 + 0x68));
        return 1;
      case 6:
        SetCursor(*(undefined8 *)(param_1 + 0x70));
        return 1;
      case 7:
        SetCursor(*(undefined8 *)(param_1 + 0x78));
        return 1;
      case 8:
        SetCursor(*(undefined8 *)(param_1 + 0x80));
        return 1;
      case 9:
        SetCursor(*(undefined8 *)(param_1 + 0x90));
        return 1;
      case 10:
        SetCursor(*(undefined8 *)(param_1 + 0x98));
        return 1;
      case 0xb:
        SetCursor(*(undefined8 *)(param_1 + 0x48));
      }
      return 1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801723a0(longlong param_1,char param_2,undefined4 param_3)
void FUN_1801723a0(longlong param_1,char param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plStackX_8;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x140) + 0x48);
  iVar3 = _Thrd_id();
  if (iVar3 == iVar4) {
    if (param_2 == '\0') {
      do {
        iVar4 = ShowCursor(0);
      } while (-1 < iVar4);
    }
    else {
      if (**(char **)(_DAT_180c868d0 + 0x2010) != '\0') {
        **(char **)(_DAT_180c868d0 + 0x2010) = '\0';
      }
      FUN_1801720a0(param_1,param_3);
      do {
        iVar4 = ShowCursor(1);
      } while (iVar4 < 0);
    }
  }
  else {
    plVar5 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3,uVar6);
    *plVar5 = (longlong)&UNK_180a21690;
    *plVar5 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar5 + 1) = 0;
    *plVar5 = (longlong)&UNK_18098bdc8;
    LOCK();
    *(undefined1 *)(plVar5 + 2) = 0;
    UNLOCK();
    plVar5[3] = -1;
    *plVar5 = (longlong)&UNK_180a08c60;
    *(undefined4 *)(plVar5 + 5) = 10;
    plVar5[4] = param_1;
    (**(code **)(*plVar5 + 0x28))(plVar5);
    *(char *)(plVar5 + 6) = param_2;
    *(undefined4 *)((longlong)plVar5 + 0x34) = param_3;
    puVar1 = *(undefined8 **)(param_1 + 0x140);
    pcVar2 = *(code **)*puVar1;
    plStackX_8 = plVar5;
    (**(code **)(*plVar5 + 0x28))(plVar5);
    (*pcVar2)(puVar1,&plStackX_8);
    (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801724f0(longlong param_1,undefined4 param_2,longlong param_3)
void FUN_1801724f0(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plStackX_8;
  
  plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3,0xfffffffffffffffe);
  *plVar3 = (longlong)&UNK_180a21690;
  *plVar3 = (longlong)&UNK_180a21720;
  *(undefined4 *)(plVar3 + 1) = 0;
  *plVar3 = (longlong)&UNK_18098bdc8;
  LOCK();
  *(undefined1 *)(plVar3 + 2) = 0;
  UNLOCK();
  plVar3[3] = -1;
  *plVar3 = (longlong)&UNK_180a08c60;
  *(undefined4 *)(plVar3 + 5) = 0xb;
  plVar3[4] = param_1;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  *(undefined4 *)(plVar3 + 6) = param_2;
  plVar3[7] = param_3;
  puVar1 = *(undefined8 **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  plStackX_8 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  (*pcVar2)(puVar1,&plStackX_8);
  FUN_18020f150(*(undefined8 *)(param_1 + 0x140));
                    // WARNING: Could not recover jumptable at 0x0001801725d6. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801725e0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)
void FUN_1801725e0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plStackX_8;
  
  plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3,0xfffffffffffffffe);
  *plVar3 = (longlong)&UNK_180a21690;
  *plVar3 = (longlong)&UNK_180a21720;
  *(undefined4 *)(plVar3 + 1) = 0;
  *plVar3 = (longlong)&UNK_18098bdc8;
  LOCK();
  *(undefined1 *)(plVar3 + 2) = 0;
  UNLOCK();
  plVar3[3] = -1;
  *plVar3 = (longlong)&UNK_180a08c60;
  *(undefined4 *)(plVar3 + 5) = 0xc;
  plVar3[4] = param_1;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  *(undefined4 *)(plVar3 + 6) = param_2;
  *(undefined4 *)((longlong)plVar3 + 0x34) = param_3;
  *(undefined1 *)(plVar3 + 7) = param_4;
  puVar1 = *(undefined8 **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  plStackX_8 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  (*pcVar2)(puVar1,&plStackX_8);
  FUN_18020f150(*(undefined8 *)(param_1 + 0x140));
                    // WARNING: Could not recover jumptable at 0x0001801726de. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801726f0(longlong param_1,undefined8 param_2)
void FUN_1801726f0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *aplStackX_8 [2];
  longlong **pplStackX_18;
  longlong *plStackX_20;
  
  plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3,0xfffffffffffffffe);
  *plVar3 = (longlong)&UNK_180a21690;
  *plVar3 = (longlong)&UNK_180a21720;
  *(undefined4 *)(plVar3 + 1) = 0;
  *plVar3 = (longlong)&UNK_18098bdc8;
  LOCK();
  *(undefined1 *)(plVar3 + 2) = 0;
  UNLOCK();
  plVar3[3] = -1;
  *plVar3 = (longlong)&UNK_180a08c60;
  *(undefined4 *)(plVar3 + 5) = 0xd;
  plVar3[4] = param_1;
  pplStackX_18 = (longlong **)plVar3;
  plStackX_20 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_180627be0(param_1 + 0x148,param_2);
  puVar1 = *(undefined8 **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  pplStackX_18 = aplStackX_8;
  aplStackX_8[0] = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  (*pcVar2)(puVar1,aplStackX_8);
                    // WARNING: Could not recover jumptable at 0x0001801727c6. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



