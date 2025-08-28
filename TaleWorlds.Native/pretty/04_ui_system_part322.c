#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part322.c - 4 个函数

// 函数: void FUN_1808427f0(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_1808427f0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083f9b0(param_2,param_3,&UNK_1809843c0,*(undefined4 *)(param_1 + 0x10),
                *(undefined1 *)(param_1 + 0x18));
  return;
}



int FUN_180842820(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180984348);
  iVar4 = FUN_18074b880(param_2 + iVar3,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b830(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_1808428d0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_1809844b0);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180842990(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180984248);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180842a00(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180983320);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180842ac0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_1809833b0);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180842b80(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  iVar4 = FUN_18074b880(param_2,param_3,&UNK_180983440);
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
  iVar5 = func_0x00018074b7d0(iVar4 + param_2,param_3 - iVar4,uVar1);
  return iVar5 + iVar4;
}



int FUN_180842c60(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  iVar4 = FUN_18074b880(param_2,param_3,&UNK_1809834d0);
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
  iVar5 = func_0x00018074b800(iVar4 + param_2,param_3 - iVar4,uVar1);
  return iVar5 + iVar4;
}



int FUN_180842d40(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180983680);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180842e00(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180983560);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180842e70(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180983710);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180842ee0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_1809835f0);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180842f50(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180983e68);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar1);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074bda0(iVar3 + param_2,param_3 - iVar3,uVar2);
  return iVar4 + iVar3;
}



int FUN_180843010(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180983de0);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_1808430d0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180983ce0);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180843140(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180983d60);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_1808431b0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
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
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uStack_28 = *(undefined4 *)(param_1 + 0x28);
  uStack_24 = *(undefined4 *)(param_1 + 0x2c);
  uStack_20 = *(undefined4 *)(param_1 + 0x30);
  uStack_1c = *(undefined4 *)(param_1 + 0x34);
  uStack_18 = *(undefined4 *)(param_1 + 0x38);
  uStack_14 = *(undefined4 *)(param_1 + 0x3c);
  uStack_10 = *(undefined4 *)(param_1 + 0x40);
  uStack_c = *(undefined4 *)(param_1 + 0x44);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_1809838a8);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18088ebb0(iVar2 + param_2,param_3 - iVar2,&uStack_38);
  return iVar3 + iVar2;
}



int FUN_180843270(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180983930);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180843330(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uStackX_8;
  
  uStackX_8 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined1 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  iVar4 = FUN_18074b880(param_2,param_3,&UNK_180983ef0);
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b800(iVar4 + param_2,param_3 - iVar4,uVar3);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18088ece0(iVar4 + param_2,param_3 - iVar4,&uStackX_8);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b830(iVar4 + param_2,param_3 - iVar4,uVar1);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074be90(iVar4 + param_2,param_3 - iVar4,uVar2);
  return iVar5 + iVar4;
}



int FUN_180843450(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uStackX_8;
  
  uStackX_8 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined1 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180983f78);
  iVar4 = FUN_18074b880(param_2 + iVar3,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18088ece0(iVar3 + param_2,param_3 - iVar3,&uStackX_8);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,param_1 + 0x25);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074be90(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180843570(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(undefined1 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  iVar4 = FUN_18074b880(param_2,param_3,&UNK_1809840a0);
  iVar5 = FUN_18074b880(param_2 + iVar4,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b800(iVar4 + param_2,param_3 - iVar4,uVar3);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,param_1 + 0x28);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b830(iVar4 + param_2,param_3 - iVar4,uVar1);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074be90(iVar4 + param_2,param_3 - iVar4,uVar2);
  return iVar5 + iVar4;
}



int FUN_180843690(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180984130);
  iVar4 = FUN_18074b880(param_2 + iVar3,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,param_1 + 0x28);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,param_1 + 0xa8);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074be90(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_1808437b0(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180983ac8);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074be90(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}





// 函数: void FUN_180843870(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_180843870(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083fa50(param_2,param_3,&UNK_180983828,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18));
  return;
}



int FUN_1808438a0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  iVar4 = FUN_18074b880(param_2,param_3,&UNK_1809839b8);
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b800(iVar4 + param_2,param_3 - iVar4,uVar3);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b7d0(iVar4 + param_2,param_3 - iVar4,uVar2);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b830(iVar4 + param_2,param_3 - iVar4,uVar1);
  return iVar5 + iVar4;
}



int FUN_180843990(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  iVar4 = FUN_18074b880(param_2,param_3,&UNK_180983a40);
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b800(iVar4 + param_2,param_3 - iVar4,uVar3);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b7d0(iVar4 + param_2,param_3 - iVar4,uVar2);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b830(iVar4 + param_2,param_3 - iVar4,uVar1);
  return iVar5 + iVar4;
}



int FUN_180843a80(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180983c50);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}





// 函数: void FUN_180843b40(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_180843b40(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083fa50(param_2,param_3,&UNK_1809837a0,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18));
  return;
}



int FUN_180843b70(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180983b50);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180843be0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180983bd0);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180843ce0(longlong param_1,longlong param_2,int param_3)

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
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_1809820b0);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b650(iVar2 + param_2,param_3 - iVar2,&uStack_18);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180843d90(longlong param_1,longlong param_2,int param_3)

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
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180981ec0);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b650(iVar2 + param_2,param_3 - iVar2,&uStack_18);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180843e40(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180982878);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b7d0(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}





// 函数: void FUN_180843eb0(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_180843eb0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083f7b0(param_2,param_3,&UNK_1809828f8,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x14));
  return;
}



int FUN_180843ee0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180982a98);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180843fa0(longlong param_1,longlong param_2,int param_3)

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
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180981fc0);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b650(iVar2 + param_2,param_3 - iVar2,&uStack_18);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180844050(longlong param_1,longlong param_2,int param_3)

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
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180981dc0);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b650(iVar2 + param_2,param_3 - iVar2,&uStack_18);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180844100(longlong param_1,longlong param_2,int param_3)

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
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180981f40);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b650(iVar2 + param_2,param_3 - iVar2,&uStack_18);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_1808441b0(longlong param_1,longlong param_2,int param_3)

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
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180981d40);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b650(iVar2 + param_2,param_3 - iVar2,&uStack_18);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180844260(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_18074b880(param_2,param_3,&UNK_180982978);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b7d0(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}





