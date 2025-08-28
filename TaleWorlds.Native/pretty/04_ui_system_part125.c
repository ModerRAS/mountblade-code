#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part125.c - 35 个函数

// 函数: void FUN_18073f710(undefined8 param_1)
void FUN_18073f710(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_158 [32];
  undefined1 *puStack_138;
  longlong lStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  lStack_128 = 0;
  iVar1 = FUN_180754f10(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x000180753860(uStack_120);
    if (iVar1 == 0) goto LAB_18073f792;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    puStack_138 = auStack_118;
    auStack_118[0] = 0;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,3,param_1,&UNK_180957a48);
  }
LAB_18073f792:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073f8b0(undefined8 param_1,undefined8 *param_2)
void FUN_18073f8b0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_158 [32];
  undefined1 *puStack_138;
  longlong lStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  lStack_128 = 0;
  iVar1 = FUN_180758ed0(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x000180756200(uStack_120,param_2);
  }
  else if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  if ((iVar1 != 0) && ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
    func_0x00018074bda0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,2,param_1,&UNK_180957ba8);
  }
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073f990(undefined8 param_1,undefined4 *param_2)
void FUN_18073f990(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_158 [32];
  undefined1 *puStack_138;
  longlong lStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  lStack_128 = 0;
  iVar1 = FUN_180758ed0(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x000180756330(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073fa2f;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    FUN_18074b930(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,2,param_1,&UNK_180957be0);
  }
LAB_18073fa2f:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073fa70(undefined8 param_1,undefined4 *param_2,undefined4 param_3)
void FUN_18073fa70(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  longlong lStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  lStack_148 = 0;
  iVar1 = FUN_180758ed0(param_1,&uStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = FUN_180756450(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073fb64;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074ba80(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074b800(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,2,param_1,&UNK_180957b58);
  }
FUN_18073fb64:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073fa8d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)
void FUN_18073fa8d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong in_R11;
  undefined8 unaff_R14;
  longlong lStack0000000000000030;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000140;
  
  *(undefined8 *)(in_R11 + -0x10) = unaff_RBX;
  *(undefined8 *)(in_R11 + -0x18) = unaff_RBP;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R14;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  lStack0000000000000030 = 0;
  iVar1 = FUN_180758ed0(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = FUN_180756450(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073fb64;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074ba80(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074b800(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,2,param_1,&UNK_180957b58,&stack0x00000040);
  }
FUN_18073fb64:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18073faec(void)
void FUN_18073faec(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  
  iVar1 = FUN_18074ba80(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  func_0x00018074b800(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_EBP);
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,2);
}





// 函数: void FUN_18073fb64(void)
void FUN_18073fb64(void)

{
  longlong in_stack_00000030;
  ulonglong in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18073fb86(void)
void FUN_18073fb86(void)

{
  ulonglong in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073fbb0(undefined8 param_1,undefined1 *param_2)
void FUN_18073fbb0(undefined8 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 auStack_158 [32];
  undefined1 *puStack_138;
  longlong lStack_128;
  longlong *plStack_120;
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  lStack_128 = 0;
  iVar1 = FUN_180758ed0(param_1,&plStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_120 + 0x1f0))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073fc56;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    FUN_18074be30(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,2,param_1,&UNK_180957b90);
  }
LAB_18073fc56:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073fc90(undefined8 param_1,undefined8 param_2)
void FUN_18073fc90(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_158 [32];
  undefined1 *puStack_138;
  longlong lStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  lStack_128 = 0;
  iVar1 = FUN_180758ed0(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x000180756fe0(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073fd2a;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    func_0x00018074bda0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,2,param_1,&UNK_180957b70);
  }
LAB_18073fd2a:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073fd60(undefined8 param_1,undefined4 param_2)
void FUN_18073fd60(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_158 [32];
  undefined1 *puStack_138;
  longlong lStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  lStack_128 = 0;
  iVar1 = FUN_180758ed0(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x000180757530(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073fdf8;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    func_0x00018074b7d0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,2,param_1,&UNK_180957bc8);
  }
LAB_18073fdf8:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073fe30(undefined8 param_1,undefined4 param_2,undefined4 param_3)
void FUN_18073fe30(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  longlong lStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  lStack_148 = 0;
  iVar1 = FUN_180758ed0(param_1,&uStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = FUN_180757ed0(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073ff1d;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b800(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074b800(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,2,param_1,&UNK_180957b40);
  }
FUN_18073ff1d:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073fe4d(undefined8 param_1,undefined4 param_2,undefined4 param_3)
void FUN_18073fe4d(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong in_R11;
  undefined8 unaff_R14;
  longlong lStack0000000000000030;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000140;
  
  *(undefined8 *)(in_R11 + -0x10) = unaff_RBX;
  *(undefined8 *)(in_R11 + -0x18) = unaff_RBP;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R14;
  lStack0000000000000030 = 0;
  iVar1 = FUN_180758ed0(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = FUN_180757ed0(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073ff1d;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b800(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074b800(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,2,param_1,&UNK_180957b40,&stack0x00000040);
  }
FUN_18073ff1d:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18073fea5(void)
void FUN_18073fea5(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  
  iVar1 = func_0x00018074b800(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  func_0x00018074b800(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_EBP);
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,2);
}





// 函数: void FUN_18073ff1d(void)
void FUN_18073ff1d(void)

{
  longlong in_stack_00000030;
  ulonglong in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18073ff3f(void)
void FUN_18073ff3f(void)

{
  ulonglong in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073ff60(undefined8 param_1,undefined4 param_2)
void FUN_18073ff60(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_158 [32];
  undefined1 *puStack_138;
  longlong lStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  lStack_128 = 0;
  iVar1 = FUN_180758ed0(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x0001807580b0(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073fff8;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    func_0x00018074b7d0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,2,param_1,&UNK_180957b28);
  }
LAB_18073fff8:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180740030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)
void FUN_180740030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_188 [32];
  undefined1 *puStack_168;
  undefined8 uStack_160;
  longlong lStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [256];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  lStack_158 = 0;
  iVar1 = FUN_180763070(param_1,&uStack_150,&lStack_158);
  if (iVar1 == 0) {
    uStack_160 = 0;
    puStack_168 = (undefined1 *)CONCAT71(puStack_168._1_7_,1);
    iVar1 = FUN_180759220(uStack_150,param_2,param_3,param_4);
    if (iVar1 == 0) goto LAB_180740150;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(auStack_148,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&DAT_180a06434);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(auStack_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074b7d0(auStack_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    puStack_168 = auStack_148;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957c20);
  }
LAB_180740150:
  if (lStack_158 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180740190(undefined8 param_1,undefined8 param_2,undefined8 param_3)
void FUN_180740190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  longlong lStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  lStack_148 = 0;
  iVar1 = FUN_180763070(param_1,&uStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = FUN_18075dbf0(uStack_140,param_2,param_3,4);
    if (iVar1 == 0) goto FUN_180740283;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957c30);
  }
FUN_180740283:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807401ad(undefined8 param_1,undefined8 param_2,undefined8 param_3)
void FUN_1807401ad(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong in_R11;
  undefined8 unaff_R14;
  longlong lStack0000000000000030;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000140;
  
  *(undefined8 *)(in_R11 + -0x10) = unaff_RBX;
  *(undefined8 *)(in_R11 + -0x18) = unaff_RBP;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R14;
  lStack0000000000000030 = 0;
  iVar1 = FUN_180763070(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = FUN_18075dbf0(in_stack_00000038,param_2,param_3,4);
    if (iVar1 == 0) goto FUN_180740283;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074bda0(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957c30,&stack0x00000040);
  }
FUN_180740283:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18074020b(void)
void FUN_18074020b(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  
  iVar1 = func_0x00018074bda0(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  func_0x00018074bda0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,7);
}





// 函数: void FUN_180740283(void)
void FUN_180740283(void)

{
  longlong in_stack_00000030;
  ulonglong in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1807402a5(void)
void FUN_1807402a5(void)

{
  ulonglong in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807402d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)
void FUN_1807402d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  longlong lStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  lStack_148 = 0;
  iVar1 = FUN_180763070(param_1,&uStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = func_0x00018075e4f0(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_1807403bf;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074ba80(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&DAT_180a06434);
    FUN_18074ba80(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957dd0);
  }
FUN_1807403bf:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807402ed(undefined8 param_1,undefined8 param_2,undefined8 param_3)
void FUN_1807402ed(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong in_R11;
  undefined8 unaff_R14;
  longlong lStack0000000000000030;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000140;
  
  *(undefined8 *)(in_R11 + -0x10) = unaff_RBX;
  *(undefined8 *)(in_R11 + -0x18) = unaff_RBP;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R14;
  lStack0000000000000030 = 0;
  iVar1 = FUN_180763070(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = func_0x00018075e4f0(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_1807403bf;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074ba80(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&DAT_180a06434);
    FUN_18074ba80(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957dd0,&stack0x00000040);
  }
FUN_1807403bf:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180740347(void)
void FUN_180740347(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  
  iVar1 = FUN_18074ba80(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  FUN_18074ba80(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,7);
}





// 函数: void FUN_1807403bf(void)
void FUN_1807403bf(void)

{
  longlong in_stack_00000030;
  ulonglong in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1807403e1(void)
void FUN_1807403e1(void)

{
  ulonglong in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180740410(undefined8 param_1,undefined8 param_2)
void FUN_180740410(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_158 [32];
  undefined1 *puStack_138;
  longlong lStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  lStack_128 = 0;
  iVar1 = FUN_180763070(param_1,&uStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = func_0x00018075e640(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_1807404aa;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    FUN_18074be30(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957d78);
  }
LAB_1807404aa:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807404e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)
void FUN_1807404e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  longlong lStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  lStack_148 = 0;
  iVar1 = FUN_180763070(param_1,&uStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = FUN_18075e9c0(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_1807405cf;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957db8);
  }
FUN_1807405cf:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807404fd(undefined8 param_1,undefined8 param_2,undefined8 param_3)
void FUN_1807404fd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong in_R11;
  undefined8 unaff_R14;
  longlong lStack0000000000000030;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000140;
  
  *(undefined8 *)(in_R11 + -0x10) = unaff_RBX;
  *(undefined8 *)(in_R11 + -0x18) = unaff_RBP;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R14;
  lStack0000000000000030 = 0;
  iVar1 = FUN_180763070(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = FUN_18075e9c0(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_1807405cf;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074bda0(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957db8,&stack0x00000040);
  }
FUN_1807405cf:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180740557(void)
void FUN_180740557(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  
  iVar1 = func_0x00018074bda0(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  func_0x00018074bda0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,7);
}





// 函数: void FUN_1807405cf(void)
void FUN_1807405cf(void)

{
  longlong in_stack_00000030;
  ulonglong in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1807405f1(void)
void FUN_1807405f1(void)

{
  ulonglong in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180740620(undefined8 param_1,undefined8 param_2)
void FUN_180740620(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_158 [32];
  undefined1 *puStack_138;
  undefined8 auStack_128 [2];
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  iVar1 = FUN_180763070(param_1,auStack_128,0);
  if (((iVar1 != 0) || (iVar1 = func_0x00018075ecb0(auStack_128[0],param_2), iVar1 != 0)) &&
     ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
    FUN_18074b930(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957d38);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



