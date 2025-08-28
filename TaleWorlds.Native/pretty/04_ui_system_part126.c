#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part126.c - 35 个函数

// 函数: void FUN_1807406e0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
void FUN_1807406e0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_198 [32];
  undefined1 *puStack_178;
  undefined4 uStack_170;
  undefined8 auStack_168 [2];
  undefined1 auStack_158 [256];
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  iVar1 = FUN_180763070(param_1,auStack_168,0);
  if (iVar1 == 0) {
    uStack_170 = param_6;
    puStack_178 = (undefined1 *)param_5;
    iVar1 = FUN_18075f090(auStack_168[0],param_2,param_3,param_4);
    if (iVar1 == 0) goto LAB_180740886;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(auStack_158,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_158 + iVar2,0x100 - iVar2,&DAT_180a06434);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(auStack_158 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_158 + iVar2,0x100 - iVar2,&DAT_180a06434);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074ba80(auStack_158 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_158 + iVar2,0x100 - iVar2,&DAT_180a06434);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_158 + iVar2,0x100 - iVar2,param_5);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_158 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074b7d0(auStack_158 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_6);
    puStack_178 = auStack_158;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957d20);
  }
LAB_180740886:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_198);
}





// 函数: void FUN_18074076a(void)
void FUN_18074076a(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_R12D;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074bda0(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074ba80(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  func_0x00018074b7d0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R12D);
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,7);
}





// 函数: void FUN_180740884(void)
void FUN_180740884(void)

{
  ulonglong in_stack_00000140;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807408b0(undefined8 param_1,undefined4 param_2,undefined8 param_3)
void FUN_1807408b0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 auStack_148 [2];
  undefined1 auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  iVar1 = FUN_180763070(param_1,auStack_148,0);
  if (((iVar1 != 0) || (iVar1 = func_0x00018075f1a0(auStack_148[0],param_2,param_3), iVar1 != 0)) &&
     ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
    iVar2 = func_0x00018074b7d0(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957d50);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}





// 函数: void FUN_180740910(void)
void FUN_180740910(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  func_0x00018074bda0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,7);
}





// 函数: void FUN_180740988(void)
void FUN_180740988(void)

{
  ulonglong in_stack_00000140;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807409b0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
void FUN_1807409b0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_188 [32];
  undefined1 *puStack_168;
  undefined8 auStack_158 [2];
  undefined1 auStack_148 [256];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  iVar1 = FUN_180763070(param_1,auStack_158,0);
  if (iVar1 == 0) {
    puStack_168 = (undefined1 *)CONCAT44(puStack_168._4_4_,param_5);
    iVar1 = FUN_18075f1e0(auStack_158[0],param_2,param_3,param_4);
    if (iVar1 == 0) goto LAB_180740b11;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(auStack_148,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&DAT_180a06434);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b930(auStack_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&DAT_180a06434);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074b7d0(auStack_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_5);
    puStack_168 = auStack_148;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957d08);
  }
LAB_180740b11:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_188);
}





// 函数: void FUN_180740a2b(void)
void FUN_180740a2b(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_R15D;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b930(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  func_0x00018074b7d0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R15D);
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,7);
}





// 函数: void FUN_180740b0f(void)
void FUN_180740b0f(void)

{
  ulonglong in_stack_00000140;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180740b40(undefined8 param_1,undefined8 param_2)
void FUN_180740b40(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_158 [32];
  undefined1 *puStack_138;
  undefined8 auStack_128 [2];
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  iVar1 = FUN_180763070(param_1,auStack_128,0);
  if (((iVar1 != 0) || (iVar1 = func_0x00018075f350(auStack_128[0],param_2), iVar1 != 0)) &&
     ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
    func_0x00018074bda0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957c08);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180740c00(undefined8 param_1,undefined8 param_2)
void FUN_180740c00(undefined8 param_1,undefined8 param_2)

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
    iVar1 = func_0x00018075f440(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_180740c9a;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    func_0x00018074bda0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957d68);
  }
LAB_180740c9a:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180740cd0(undefined8 param_1,undefined8 param_2)
void FUN_180740cd0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_158 [32];
  undefined1 *puStack_138;
  undefined8 auStack_128 [2];
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  iVar1 = FUN_180763070(param_1,auStack_128,0);
  if (((iVar1 != 0) || (iVar1 = func_0x00018075f460(auStack_128[0],param_2), iVar1 != 0)) &&
     ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
    func_0x00018074bda0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957d88);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180740d90(undefined8 param_1)
void FUN_180740d90(undefined8 param_1)

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
  iVar1 = FUN_180763070(param_1,&plStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_120 + 0x10))();
    if (iVar1 == 0) goto LAB_180740e13;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    puStack_138 = auStack_118;
    auStack_118[0] = 0;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957bf8);
  }
LAB_180740e13:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180740e50(undefined8 param_1)
void FUN_180740e50(undefined8 param_1)

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
    iVar1 = FUN_1807603e0(uStack_120);
    if (iVar1 == 0) goto LAB_180740ed2;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    puStack_138 = auStack_118;
    auStack_118[0] = 0;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957c80);
  }
LAB_180740ed2:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180740f10(undefined8 param_1,undefined1 param_2)
void FUN_180740f10(undefined8 param_1,undefined1 param_2)

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
    iVar1 = FUN_180762070(uStack_120,param_2,1);
    if (iVar1 == 0) goto LAB_180740faf;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    FUN_18074be90(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957c48);
  }
LAB_180740faf:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180740ff0(undefined8 param_1,undefined1 param_2)
void FUN_180740ff0(undefined8 param_1,undefined1 param_2)

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
    iVar1 = func_0x0001807621a0(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18074108c;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    FUN_18074be90(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957c58);
  }
LAB_18074108c:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807410d0(undefined8 param_1,undefined8 param_2)
void FUN_1807410d0(undefined8 param_1,undefined8 param_2)

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
    iVar1 = func_0x0001807621e0(uStack_120,param_2);
    if (iVar1 == 0) goto LAB_18074116a;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    func_0x00018074bda0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957c90);
  }
LAB_18074116a:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807411a0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
void FUN_1807411a0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_188 [32];
  undefined1 *puStack_168;
  longlong lStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [256];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  lStack_158 = 0;
  iVar1 = FUN_180763070(param_1,&uStack_150,&lStack_158);
  if (iVar1 == 0) {
    iVar1 = FUN_1807621f0(uStack_150,param_2,param_3,param_4);
    if (iVar1 == 0) goto FUN_1807412d1;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b800(auStack_148,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&DAT_180a06434);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b7d0(auStack_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074b7d0(auStack_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    puStack_168 = auStack_148;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957c68);
  }
FUN_1807412d1:
  if (lStack_158 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807411bd(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
void FUN_1807411bd(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  iVar1 = FUN_180763070(param_1,&param_7,&param_6);
  if (iVar1 == 0) {
    iVar1 = FUN_1807621f0(param_7,param_2,param_3,param_4);
    if (iVar1 == 0) goto FUN_1807412d1;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b800(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&DAT_180a06434);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b7d0(&stack0x00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074b7d0(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957c68,&stack0x00000040);
  }
FUN_1807412d1:
  if (param_6 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180741223(void)
void FUN_180741223(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_R14D;
  
  iVar1 = func_0x00018074b800(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b7d0(&stack0x00000040 + iVar1,0x100 - iVar1,unaff_EBP);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  func_0x00018074b7d0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R14D);
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,7);
}





// 函数: void FUN_1807412d1(void)
void FUN_1807412d1(void)

{
  longlong in_stack_00000030;
  ulonglong in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1807412fb(void)
void FUN_1807412fb(void)

{
  ulonglong in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180741320(undefined8 param_1,undefined1 param_2,undefined1 param_3)
void FUN_180741320(undefined8 param_1,undefined1 param_2,undefined1 param_3)

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
    iVar1 = FUN_1807623d0(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_180741413;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074be90(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&DAT_180a06434);
    FUN_18074be90(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957da0);
  }
FUN_180741413:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18074133d(undefined8 param_1,undefined1 param_2,undefined1 param_3)
void FUN_18074133d(undefined8 param_1,undefined1 param_2,undefined1 param_3)

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
    iVar1 = FUN_1807623d0(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_180741413;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074be90(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&DAT_180a06434);
    FUN_18074be90(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957da0,&stack0x00000040);
  }
FUN_180741413:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180741399(void)
void FUN_180741399(void)

{
  int iVar1;
  int iVar2;
  undefined1 unaff_BL;
  undefined1 unaff_BPL;
  undefined4 unaff_ESI;
  
  iVar1 = FUN_18074be90(&stack0x00000040,0x100,unaff_BL);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  FUN_18074be90(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_BPL);
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,7);
}





// 函数: void FUN_180741413(void)
void FUN_180741413(void)

{
  longlong in_stack_00000030;
  ulonglong in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180741435(void)
void FUN_180741435(void)

{
  ulonglong in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180741460(undefined8 param_1,undefined4 param_2,undefined1 param_3)
void FUN_180741460(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 auStack_148 [2];
  undefined1 auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  iVar1 = FUN_180763070(param_1,auStack_148,0);
  if (((iVar1 != 0) || (iVar1 = func_0x000180762600(auStack_148[0],param_2,param_3), iVar1 != 0)) &&
     ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
    iVar2 = func_0x00018074b7d0(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&DAT_180a06434);
    FUN_18074be90(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957cd8);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}





// 函数: void FUN_1807414c2(void)
void FUN_1807414c2(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined1 unaff_BPL;
  undefined4 unaff_ESI;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  FUN_18074be90(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_BPL);
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,7);
}





// 函数: void FUN_18074153b(void)
void FUN_18074153b(void)

{
  ulonglong in_stack_00000140;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180741560(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)
void FUN_180741560(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_188 [32];
  undefined1 *puStack_168;
  undefined8 auStack_158 [2];
  undefined1 auStack_148 [256];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  iVar1 = FUN_180763070(param_1,auStack_158,0);
  if (((iVar1 != 0) || (iVar1 = FUN_180762660(auStack_158[0],param_2,param_3,param_4), iVar1 != 0))
     && ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
    iVar2 = func_0x00018074b7d0(auStack_148,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&DAT_180a06434);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(auStack_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074b800(auStack_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    puStack_168 = auStack_148;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957cf0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_188);
}





// 函数: void FUN_1807415cc(void)
void FUN_1807415cc(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_R14D;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074bda0(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  func_0x00018074b800(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R14D);
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,7);
}





// 函数: void FUN_18074167a(void)
void FUN_18074167a(void)

{
  ulonglong in_stack_00000140;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807416a0(undefined8 param_1,undefined4 param_2,undefined4 param_3)
void FUN_1807416a0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 auStack_148 [2];
  undefined1 auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  iVar1 = FUN_180763070(param_1,auStack_148,0);
  if (((iVar1 != 0) || (iVar1 = func_0x000180762a70(auStack_148[0],param_2,param_3), iVar1 != 0)) &&
     ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
    iVar2 = func_0x00018074b7d0(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074b830(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&UNK_180957ca8);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}





// 函数: void FUN_180741706(void)
void FUN_180741706(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  func_0x00018074b830(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,7);
}





