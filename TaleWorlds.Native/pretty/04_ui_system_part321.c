#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part321.c - 10 个函数

// 函数: void FUN_180840dd0(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_180840dd0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083faf0(param_2,param_3,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),
                *(undefined4 *)(param_1 + 0x1c));
  return;
}



int FUN_180840e00(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = *(undefined4 *)(param_1 + 0x1c);
  uStack_14 = *(undefined4 *)(param_1 + 0x20);
  uStack_10 = *(undefined4 *)(param_1 + 0x24);
  uStack_c = *(undefined4 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  iVar3 = func_0x00018074b800(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b650(iVar3 + param_2,param_3 - iVar3,&uStack_18);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180840f10(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  iVar2 = func_0x00018074b800(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074bda0(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180840f80(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  iVar2 = func_0x00018074b800(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074be90(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180840ff0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  iVar2 = func_0x00018074b800(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b830(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180841060(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  iVar2 = func_0x00018074b800(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_1808410d0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  iVar3 = func_0x00018074b800(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180841180(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  iVar3 = func_0x00018074b800(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180841230(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = *(undefined4 *)(param_1 + 0x28);
  uStack_24 = *(undefined4 *)(param_1 + 0x2c);
  uStack_20 = *(undefined4 *)(param_1 + 0x30);
  uStack_1c = *(undefined4 *)(param_1 + 0x34);
  uStack_18 = *(undefined4 *)(param_1 + 0x38);
  uStack_14 = *(undefined4 *)(param_1 + 0x3c);
  uStack_10 = *(undefined4 *)(param_1 + 0x40);
  uStack_c = *(undefined4 *)(param_1 + 0x44);
  iVar1 = func_0x00018074b800(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar2 = FUN_18074b880(param_2 + iVar1,param_3 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18088ebb0(iVar1 + param_2,param_3 - iVar1,&uStack_38);
  return iVar2 + iVar1;
}



int FUN_1808412b0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  iVar2 = func_0x00018074b800(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180841320(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uStackX_8;
  
  uStackX_8 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined1 *)(param_1 + 0x24);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  iVar3 = func_0x00018074b800(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar4 = FUN_18074b880(param_2 + iVar3,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18088ece0(iVar3 + param_2,param_3 - iVar3,&uStackX_8);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b830(iVar3 + param_2,param_3 - iVar3,uVar1);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074be90(iVar3 + param_2,param_3 - iVar3,uVar2);
  return iVar4 + iVar3;
}



int FUN_180841410(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uStackX_8;
  
  uStackX_8 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined1 *)(param_1 + 0x24);
  iVar2 = func_0x00018074b800(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18088ece0(iVar2 + param_2,param_3 - iVar2,&uStackX_8);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,param_1 + 0x25);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074be90(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_1808414f0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(undefined1 *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  iVar3 = func_0x00018074b800(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,param_1 + 0x28);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b830(iVar3 + param_2,param_3 - iVar3,uVar1);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074be90(iVar3 + param_2,param_3 - iVar3,uVar2);
  return iVar4 + iVar3;
}



int FUN_1808415e0(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  iVar2 = func_0x00018074b800(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,param_1 + 0x28);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,param_1 + 0xa8);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074be90(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_1808416d0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  iVar3 = func_0x00018074b800(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar4 = FUN_18074b880(param_2 + iVar3,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b830(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180841790(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = *(undefined4 *)(param_1 + 0x10);
  uStack_14 = *(undefined4 *)(param_1 + 0x14);
  uStack_10 = *(undefined4 *)(param_1 + 0x18);
  uStack_c = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  iVar2 = FUN_18074b650(param_2,param_3,&uStack_18);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180841830(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  iVar2 = func_0x00018074b7d0(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b7d0(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_1808418a0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  iVar2 = func_0x00018074b7d0(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180841910(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  uStack_28 = *(undefined4 *)(param_1 + 0x30);
  uStack_24 = *(undefined4 *)(param_1 + 0x34);
  uStack_20 = *(undefined4 *)(param_1 + 0x38);
  uStack_1c = *(undefined4 *)(param_1 + 0x3c);
  uStack_18 = *(undefined8 *)(param_1 + 0x40);
  iVar3 = func_0x00018088ecd0(param_2,param_3,&uStack_48);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_1808419e0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  iVar3 = FUN_18074b880(param_2,param_3,param_1 + 0x18);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180841a90(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  iVar5 = func_0x00018074bda0(param_2,param_3,*(undefined8 *)(param_1 + 0x10));
  iVar6 = FUN_18074b880(param_2 + iVar5,param_3 - iVar5,&DAT_180a06434);
  iVar5 = iVar5 + iVar6;
  iVar6 = func_0x00018074b7d0(iVar5 + param_2,param_3 - iVar5,uVar4);
  iVar5 = iVar5 + iVar6;
  iVar6 = FUN_18074b880(iVar5 + param_2,param_3 - iVar5,&DAT_180a06434);
  iVar5 = iVar5 + iVar6;
  iVar6 = func_0x00018074b7d0(iVar5 + param_2,param_3 - iVar5,uVar3);
  iVar5 = iVar5 + iVar6;
  iVar6 = FUN_18074b880(iVar5 + param_2,param_3 - iVar5,&DAT_180a06434);
  iVar5 = iVar5 + iVar6;
  iVar6 = func_0x00018074b800(iVar5 + param_2,param_3 - iVar5,uVar2);
  iVar5 = iVar5 + iVar6;
  iVar6 = FUN_18074b880(iVar5 + param_2,param_3 - iVar5,&DAT_180a06434);
  iVar5 = iVar5 + iVar6;
  iVar6 = func_0x00018074b800(iVar5 + param_2,param_3 - iVar5,uVar1);
  return iVar6 + iVar5;
}



int FUN_180841bc0(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x44);
  uStack_28 = *(undefined4 *)(param_1 + 0x24);
  uStack_24 = *(undefined4 *)(param_1 + 0x28);
  uStack_20 = *(undefined4 *)(param_1 + 0x2c);
  uStack_1c = *(undefined4 *)(param_1 + 0x30);
  uStack_40 = *(undefined4 *)(param_1 + 0x4c);
  uVar1 = *(undefined1 *)(param_1 + 0x50);
  uStack_38 = *(undefined8 *)(param_1 + 0x14);
  uStack_30 = *(undefined8 *)(param_1 + 0x1c);
  uStack_18 = *(undefined4 *)(param_1 + 0x34);
  uStack_14 = *(undefined4 *)(param_1 + 0x38);
  uStack_10 = *(undefined4 *)(param_1 + 0x3c);
  uStack_c = *(undefined4 *)(param_1 + 0x40);
  iVar2 = func_0x00018074b7d0(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18088ebb0(iVar2 + param_2,param_3 - iVar2,&uStack_38);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b6f0(iVar2 + param_2,param_3 - iVar2,&uStack_48);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074be90(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180841cc0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  iVar2 = func_0x00018074b7d0(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b830(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180841d30(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uStackX_8;
  
  uStackX_8 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined1 *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  iVar3 = FUN_18088ece0(param_2,param_3,&uStackX_8);
  iVar4 = FUN_18074b880(param_2 + iVar3,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b830(iVar3 + param_2,param_3 - iVar3,uVar1);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074be90(iVar3 + param_2,param_3 - iVar3,uVar2);
  return iVar4 + iVar3;
}



int FUN_180841df0(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uStackX_8;
  
  uStackX_8 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  iVar2 = FUN_18088ece0(param_2,param_3,&uStackX_8);
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,param_1 + 0x1d);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074be90(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180841ea0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(undefined1 *)(param_1 + 0x14);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,param_1 + 0x20);
  iVar4 = FUN_18074b880(param_2 + iVar3,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b830(iVar3 + param_2,param_3 - iVar3,uVar1);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074be90(iVar3 + param_2,param_3 - iVar3,uVar2);
  return iVar4 + iVar3;
}



int FUN_180841f50(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 0x14);
  iVar2 = FUN_18074b880(param_2,param_3,param_1 + 0x20);
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,param_1 + 0xa0);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074be90(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}





// 函数: void FUN_180842030(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_180842030(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083f850(param_2,param_3,&UNK_180983020,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18));
  return;
}





// 函数: void FUN_180842060(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_180842060(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083f8f0(param_2,param_3,&UNK_1809830a0,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return;
}



int FUN_1808420a0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_28 = *(undefined4 *)(param_1 + 0x1c);
  uStack_24 = *(undefined4 *)(param_1 + 0x20);
  uStack_20 = *(undefined4 *)(param_1 + 0x24);
  uStack_1c = *(undefined4 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  iVar4 = FUN_18074b880(param_2,param_3,&UNK_180983120);
  iVar5 = FUN_18074b880(param_2 + iVar4,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b800(iVar4 + param_2,param_3 - iVar4,uVar3);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b7d0(iVar4 + param_2,param_3 - iVar4,uVar2);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b650(iVar4 + param_2,param_3 - iVar4,&uStack_28);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b800(iVar4 + param_2,param_3 - iVar4,uVar1);
  return iVar5 + iVar4;
}





// 函数: void FUN_1808421c0(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_1808421c0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083f850(param_2,param_3,&UNK_180982ea0,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18));
  return;
}





// 函数: void FUN_1808421f0(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_1808421f0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083f8f0(param_2,param_3,&UNK_180982f20,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return;
}



int FUN_180842230(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_28 = *(undefined4 *)(param_1 + 0x1c);
  uStack_24 = *(undefined4 *)(param_1 + 0x20);
  uStack_20 = *(undefined4 *)(param_1 + 0x24);
  uStack_1c = *(undefined4 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  iVar4 = FUN_18074b880(param_2,param_3,&UNK_180982fa0);
  iVar5 = FUN_18074b880(param_2 + iVar4,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b800(iVar4 + param_2,param_3 - iVar4,uVar3);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b7d0(iVar4 + param_2,param_3 - iVar4,uVar2);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b650(iVar4 + param_2,param_3 - iVar4,&uStack_28);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b800(iVar4 + param_2,param_3 - iVar4,uVar1);
  return iVar5 + iVar4;
}





// 函数: void FUN_180842350(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_180842350(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083f850(param_2,param_3,&UNK_180982c20,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18));
  return;
}





// 函数: void FUN_180842380(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_180842380(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083f850(param_2,param_3,&UNK_180982ca0,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18));
  return;
}





// 函数: void FUN_1808423b0(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_1808423b0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083f850(param_2,param_3,&UNK_1809831a0,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18));
  return;
}





// 函数: void FUN_1808423e0(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_1808423e0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083f8f0(param_2,param_3,&UNK_180983220,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return;
}



int FUN_180842420(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_28 = *(undefined4 *)(param_1 + 0x1c);
  uStack_24 = *(undefined4 *)(param_1 + 0x20);
  uStack_20 = *(undefined4 *)(param_1 + 0x24);
  uStack_1c = *(undefined4 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  iVar4 = FUN_18074b880(param_2,param_3,&UNK_1809832a0);
  iVar5 = FUN_18074b880(param_2 + iVar4,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b800(iVar4 + param_2,param_3 - iVar4,uVar3);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b7d0(iVar4 + param_2,param_3 - iVar4,uVar2);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b650(iVar4 + param_2,param_3 - iVar4,&uStack_28);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b800(iVar4 + param_2,param_3 - iVar4,uVar1);
  return iVar5 + iVar4;
}



int FUN_180842540(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180982d28);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_1808425b0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180982e28);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180842620(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180982da8);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180842690(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_1809842c8);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar1);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074bda0(iVar3 + param_2,param_3 - iVar3,uVar2);
  return iVar4 + iVar3;
}



int FUN_180842750(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_1809841c8);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}





// 函数: void FUN_1808427c0(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_1808427c0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083f9b0(param_2,param_3,&UNK_180984438,*(undefined4 *)(param_1 + 0x10),
                *(undefined1 *)(param_1 + 0x18));
  return;
}





