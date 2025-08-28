#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part122.c - 34 个函数

// 函数: void FUN_18073ceed(undefined8 param_1,longlong param_2,longlong param_3)
void FUN_18073ceed(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong in_R11;
  undefined8 unaff_R14;
  longlong lStack0000000000000030;
  longlong *in_stack_00000038;
  ulonglong in_stack_00000140;
  
  *(undefined8 *)(in_R11 + -0x10) = unaff_RBX;
  *(undefined8 *)(in_R11 + -0x18) = unaff_RBP;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R14;
  lStack0000000000000030 = 0;
  iVar1 = func_0x00018074fb10(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    param_2 = param_2 << 0x14;
    param_3 = param_3 << 0x14;
    iVar1 = (**(code **)(*in_stack_00000038 + 0x100))(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073cfcb;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074be80(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074be80(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&UNK_180957858,&stack0x00000040);
  }
FUN_18073cfcb:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18073cf53(void)
void FUN_18073cf53(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  
  iVar1 = func_0x00018074be80(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  func_0x00018074be80(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,4);
}





// 函数: void FUN_18073cfcb(void)
void FUN_18073cfcb(void)

{
  longlong in_stack_00000030;
  ulonglong in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18073cfed(void)
void FUN_18073cfed(void)

{
  ulonglong in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073d010(undefined8 param_1,undefined8 param_2,undefined8 param_3)
void FUN_18073d010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  longlong lStack_148;
  longlong *plStack_140;
  undefined1 auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  lStack_148 = 0;
  iVar1 = func_0x00018074fb10(param_1,&plStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_140 + 0x140))(plStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073d103;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074bd40(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&DAT_180a06434);
    FUN_18074bd40(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&UNK_1809578f0);
  }
FUN_18073d103:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073d02d(undefined8 param_1,undefined8 param_2,undefined8 param_3)
void FUN_18073d02d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong in_R11;
  undefined8 unaff_R14;
  longlong lStack0000000000000030;
  longlong *in_stack_00000038;
  ulonglong in_stack_00000140;
  
  *(undefined8 *)(in_R11 + -0x10) = unaff_RBX;
  *(undefined8 *)(in_R11 + -0x18) = unaff_RBP;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R14;
  lStack0000000000000030 = 0;
  iVar1 = func_0x00018074fb10(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*in_stack_00000038 + 0x140))(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073d103;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074bd40(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&DAT_180a06434);
    FUN_18074bd40(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&UNK_1809578f0,&stack0x00000040);
  }
FUN_18073d103:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18073d08b(void)
void FUN_18073d08b(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  
  iVar1 = FUN_18074bd40(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  FUN_18074bd40(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,4);
}





// 函数: void FUN_18073d103(void)
void FUN_18073d103(void)

{
  longlong in_stack_00000030;
  ulonglong in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18073d125(void)
void FUN_18073d125(void)

{
  ulonglong in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073d150(undefined8 param_1,undefined4 param_2)
void FUN_18073d150(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_168 [32];
  undefined1 *puStack_148;
  longlong lStack_138;
  longlong *plStack_130;
  undefined1 auStack_128 [256];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  lStack_138 = 0;
  iVar1 = func_0x00018074fb10(param_1,&plStack_130,&lStack_138);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_130 + 0x1c8))(plStack_130,param_2);
    if (iVar1 == 0) goto LAB_18073d1f1;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    func_0x00018074b830(auStack_128,0x100,param_2);
    puStack_148 = auStack_128;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&UNK_180957910);
  }
LAB_18073d1f1:
  if (lStack_138 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073d230(undefined8 param_1,longlong param_2,longlong param_3,undefined1 param_4)
void FUN_18073d230(undefined8 param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_188 [32];
  undefined1 *puStack_168;
  longlong lStack_158;
  longlong *plStack_150;
  undefined1 auStack_148 [256];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  lStack_158 = 0;
  iVar1 = func_0x00018074fb10(param_1,&plStack_150,&lStack_158);
  if (iVar1 == 0) {
    param_2 = param_2 << 0x14;
    param_3 = param_3 << 0x14;
    iVar1 = (**(code **)(*plStack_150 + 0xe0))(plStack_150,param_2,param_3,param_4);
    if (iVar1 == 0) goto FUN_18073d372;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074be80(auStack_148,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&DAT_180a06434);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074be80(auStack_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&DAT_180a06434);
    FUN_18074be90(auStack_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    puStack_168 = auStack_148;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&UNK_1809577d0);
  }
FUN_18073d372:
  if (lStack_158 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073d24d(undefined8 param_1,longlong param_2,longlong param_3,undefined1 param_4,
void FUN_18073d24d(undefined8 param_1,longlong param_2,longlong param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,longlong *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong in_R11;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  ulonglong in_stack_00000140;
  
  *(undefined8 *)(in_R11 + -0x10) = unaff_RBX;
  *(undefined8 *)(in_R11 + -0x18) = unaff_RBP;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R14;
  *(undefined8 *)(in_R11 + -0x30) = unaff_R15;
  param_6 = 0;
  iVar1 = func_0x00018074fb10(param_1,&param_7,&param_6);
  if (iVar1 == 0) {
    param_2 = param_2 << 0x14;
    param_3 = param_3 << 0x14;
    iVar1 = (**(code **)(*param_7 + 0xe0))(param_7,param_2,param_3,param_4);
    if (iVar1 == 0) goto FUN_18073d372;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074be80(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&DAT_180a06434);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074be80(&stack0x00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&DAT_180a06434);
    FUN_18074be90(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&UNK_1809577d0,&stack0x00000040);
  }
FUN_18073d372:
  if (param_6 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18073d2c3(void)
void FUN_18073d2c3(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined1 unaff_R14B;
  
  iVar1 = func_0x00018074be80(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074be80(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  FUN_18074be90(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R14B);
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,4);
}





// 函数: void FUN_18073d372(void)
void FUN_18073d372(void)

{
  longlong in_stack_00000030;
  ulonglong in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18073d39c(void)
void FUN_18073d39c(void)

{
  ulonglong in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073d3c0(undefined8 param_1,longlong param_2,undefined4 param_3)
void FUN_18073d3c0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  longlong lStack_148;
  longlong *plStack_140;
  undefined1 auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  lStack_148 = 0;
  iVar1 = func_0x00018074fb10(param_1,&plStack_140,&lStack_148);
  if (iVar1 == 0) {
    param_2 = param_2 << 0x14;
    iVar1 = (**(code **)(*plStack_140 + 0xf8))(plStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073d4b8;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074be80(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074b830(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&UNK_180957830);
  }
FUN_18073d4b8:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073d3dd(undefined8 param_1,longlong param_2,undefined4 param_3)
void FUN_18073d3dd(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong in_R11;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  longlong lStack0000000000000030;
  longlong *in_stack_00000038;
  ulonglong in_stack_00000140;
  
  *(undefined8 *)(in_R11 + 0x20) = unaff_RBX;
  *(undefined8 *)(in_R11 + -0x10) = unaff_RBP;
  *(undefined4 *)(in_R11 + -0x28) = unaff_XMM6_Da;
  *(undefined4 *)(in_R11 + -0x24) = unaff_XMM6_Db;
  *(undefined4 *)(in_R11 + -0x20) = unaff_XMM6_Dc;
  *(undefined4 *)(in_R11 + -0x1c) = unaff_XMM6_Dd;
  lStack0000000000000030 = 0;
  iVar1 = func_0x00018074fb10(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    param_2 = param_2 << 0x14;
    iVar1 = (**(code **)(*in_stack_00000038 + 0xf8))(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073d4b8;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074be80(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074b830(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&UNK_180957830,&stack0x00000040);
  }
FUN_18073d4b8:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18073d440(void)
void FUN_18073d440(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  
  iVar1 = func_0x00018074be80(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  func_0x00018074b830(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,4);
}





// 函数: void FUN_18073d4b8(void)
void FUN_18073d4b8(void)

{
  longlong in_stack_00000030;
  ulonglong in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18073d4da(void)
void FUN_18073d4da(void)

{
  ulonglong in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073d500(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
void FUN_18073d500(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_188 [32];
  undefined1 *puStack_168;
  undefined1 uStack_160;
  longlong lStack_158;
  longlong *plStack_150;
  undefined1 auStack_148 [256];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  lStack_158 = 0;
  iVar1 = func_0x00018074fb10(param_1,&plStack_150,&lStack_158);
  if (iVar1 == 0) {
    uStack_160 = 1;
    puStack_168 = (undefined1 *)CONCAT44(puStack_168._4_4_,param_5);
    iVar1 = (**(code **)(*plStack_150 + 200))(plStack_150,param_2,param_3,param_4);
    if (iVar1 == 0) goto FUN_18073d683;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074bac0(auStack_148,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&DAT_180a06434);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b7d0(auStack_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&DAT_180a06434);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b7d0(auStack_148 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074b7d0(auStack_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_5);
    puStack_168 = auStack_148;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&UNK_180957790);
  }
FUN_18073d683:
  if (lStack_158 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073d51d(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
void FUN_18073d51d(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,longlong *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 in_stack_00000020;
  undefined4 uVar4;
  ulonglong in_stack_00000140;
  undefined4 in_stack_000001b0;
  
  uVar4 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
  *(undefined8 *)(in_R11 + -0x10) = unaff_RBX;
  *(undefined8 *)(in_R11 + -0x18) = unaff_RBP;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R12;
  *(undefined8 *)(in_R11 + -0x30) = unaff_R14;
  *(undefined8 *)(in_R11 + -0x38) = unaff_R15;
  param_6 = 0;
  iVar1 = func_0x00018074fb10(param_1,&param_7,&param_6);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_7 + 200))
                      (param_7,param_2,param_3,param_4,CONCAT44(uVar4,in_stack_000001b0));
    if (iVar1 == 0) goto FUN_18073d683;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074bac0(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&DAT_180a06434);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b7d0(&stack0x00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&DAT_180a06434);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b7d0(&stack0x00000040 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074b7d0(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),in_stack_000001b0
                       );
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&UNK_180957790,&stack0x00000040);
  }
FUN_18073d683:
  if (param_6 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18073d59f(void)
void FUN_18073d59f(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_R14D;
  undefined4 unaff_R15D;
  
  iVar1 = FUN_18074bac0(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b7d0(&stack0x00000040 + iVar1,0x100 - iVar1,unaff_EBP);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b7d0(&stack0x00000040 + iVar1,0x100 - iVar1,unaff_R14D);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  func_0x00018074b7d0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R15D);
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,4);
}





// 函数: void FUN_18073d683(void)
void FUN_18073d683(void)

{
  longlong in_stack_00000030;
  ulonglong in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18073d6b5(void)
void FUN_18073d6b5(void)

{
  ulonglong in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073d6e0(undefined8 param_1,undefined4 param_2)
void FUN_18073d6e0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_158 [32];
  undefined1 *puStack_138;
  longlong lStack_128;
  longlong *plStack_120;
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  lStack_128 = 0;
  iVar1 = func_0x00018074fb10(param_1,&plStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_120 + 0x90))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073d77c;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    func_0x00018074b800(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&UNK_180957740);
  }
LAB_18073d77c:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073d7c0(undefined8 param_1,undefined1 param_2)
void FUN_18073d7c0(undefined8 param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 auStack_158 [32];
  undefined1 *puStack_138;
  longlong lStack_128;
  longlong *plStack_120;
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  lStack_128 = 0;
  iVar1 = func_0x00018074fb10(param_1,&plStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_120 + 0x58))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073d85d;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    FUN_18074be90(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&UNK_180957700);
  }
LAB_18073d85d:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073d8a0(undefined8 param_1,undefined1 param_2)
void FUN_18073d8a0(undefined8 param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 auStack_158 [32];
  undefined1 *puStack_138;
  longlong lStack_128;
  longlong *plStack_120;
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  lStack_128 = 0;
  iVar1 = func_0x00018074fb10(param_1,&plStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_120 + 0x10))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073d93d;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    FUN_18074be90(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&UNK_180957600);
  }
LAB_18073d93d:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073d980(undefined8 param_1,undefined4 param_2)
void FUN_18073d980(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_168 [32];
  undefined1 *puStack_148;
  longlong lStack_138;
  longlong *plStack_130;
  undefined1 auStack_128 [256];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  lStack_138 = 0;
  iVar1 = func_0x00018074fb10(param_1,&plStack_130,&lStack_138);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_130 + 0x48))(plStack_130,param_2);
    if (iVar1 == 0) goto LAB_18073da1e;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    func_0x00018074b830(auStack_128,0x100,param_2);
    puStack_148 = auStack_128;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&UNK_1809576c0);
  }
LAB_18073da1e:
  if (lStack_138 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073da60(undefined8 param_1,undefined4 param_2,undefined4 param_3)
void FUN_18073da60(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  longlong lStack_148;
  longlong *plStack_140;
  undefined1 auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  lStack_148 = 0;
  iVar1 = func_0x00018074fb10(param_1,&plStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_140 + 0x68))(plStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073db4f;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074b830(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&UNK_180957718);
  }
FUN_18073db4f:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073da7d(undefined8 param_1,undefined4 param_2,undefined4 param_3)
void FUN_18073da7d(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong in_R11;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  longlong lStack0000000000000030;
  longlong *in_stack_00000038;
  ulonglong in_stack_00000140;
  
  *(undefined8 *)(in_R11 + 0x20) = unaff_RBX;
  *(undefined8 *)(in_R11 + -0x10) = unaff_RBP;
  *(undefined4 *)(in_R11 + -0x28) = unaff_XMM6_Da;
  *(undefined4 *)(in_R11 + -0x24) = unaff_XMM6_Db;
  *(undefined4 *)(in_R11 + -0x20) = unaff_XMM6_Dc;
  *(undefined4 *)(in_R11 + -0x1c) = unaff_XMM6_Dd;
  lStack0000000000000030 = 0;
  iVar1 = func_0x00018074fb10(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*in_stack_00000038 + 0x68))(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073db4f;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074b830(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&UNK_180957718,&stack0x00000040);
  }
FUN_18073db4f:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18073dad7(void)
void FUN_18073dad7(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  func_0x00018074b830(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,4);
}





// 函数: void FUN_18073db4f(void)
void FUN_18073db4f(void)

{
  longlong in_stack_00000030;
  ulonglong in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18073db71(void)
void FUN_18073db71(void)

{
  ulonglong in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



