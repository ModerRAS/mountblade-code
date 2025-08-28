#include "TaleWorlds.Native.Split.h"

// 05_networking_part008.c - 26 个函数

// 函数: void FUN_180849820(undefined4 param_1,longlong param_2,undefined4 param_3)
void FUN_180849820(undefined4 param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_188 [48];
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong alStack_140 [33];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  lStack_148 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_150);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_158,uStack_150), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1,alStack_140), iVar1 == 0)) {
    if (alStack_140[0] == 0) {
      lStack_148 = alStack_140[0];
    }
    else {
      lStack_148 = alStack_140[0] + -8;
    }
  }
  else if (iVar1 != 0) goto LAB_1808498c8;
  *(longlong *)(lStack_148 + 0x78) = param_2;
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = param_3;
  }
  *(undefined4 *)(lStack_148 + 0x74) = uVar2;
LAB_1808498c8:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_158);
}





// 函数: void FUN_1808498e7(void)
void FUN_1808498e7(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_R14D;
  
  iVar1 = func_0x00018074bda0(&stack0x00000050,0x100);
  iVar2 = FUN_18074b880(&stack0x00000050 + iVar1,0x100 - iVar1,&DAT_180a06434);
  func_0x00018074b800(&stack0x00000050 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R14D);
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,0xd);
}





// 函数: void FUN_18084995f(void)
void FUN_18084995f(void)

{
  ulonglong in_stack_00000150;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000150 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180849990(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)
void FUN_180849990(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_198 [32];
  undefined1 *puStack_178;
  undefined8 uStack_168;
  longlong lStack_160;
  undefined8 *apuStack_158 [2];
  undefined1 auStack_148 [256];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  if (param_3 == (undefined8 *)0x0) {
    if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_198);
    }
    iVar5 = func_0x00018074b7d0(auStack_148,0x100,param_2);
    iVar6 = FUN_18074b880(auStack_148 + iVar5,0x100 - iVar5,&DAT_180a06434);
    iVar5 = iVar5 + iVar6;
    iVar6 = func_0x00018074bda0(auStack_148 + iVar5,0x100 - iVar5,0);
    iVar5 = iVar5 + iVar6;
    iVar6 = FUN_18074b880(auStack_148 + iVar5,0x100 - iVar5,&DAT_180a06434);
    FUN_18074bd40(auStack_148 + (iVar5 + iVar6),0x100 - (iVar5 + iVar6),param_4);
    puStack_178 = auStack_148;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xb,param_1,&UNK_180982460);
  }
  uStack_168 = 0;
  iVar5 = func_0x00018088c590(param_1,&lStack_160);
  if (iVar5 == 0) {
    if ((*(uint *)(lStack_160 + 0x24) >> 1 & 1) == 0) goto LAB_1808499fb;
    iVar6 = FUN_18088c740(&uStack_168);
    if (iVar6 == 0) goto LAB_180849ad3;
  }
  else {
LAB_180849ad3:
    iVar6 = iVar5;
  }
  if ((iVar6 == 0) &&
     (iVar5 = FUN_18088dec0(*(undefined8 *)(lStack_160 + 0x98),apuStack_158,0x58), iVar5 == 0)) {
    *apuStack_158[0] = &UNK_1809823f8;
    *(undefined4 *)(apuStack_158[0] + 1) = 0x58;
    *(undefined4 *)(apuStack_158[0] + 2) = param_2;
    uVar4 = param_3[1];
    *(undefined8 *)((longlong)apuStack_158[0] + 0x14) = *param_3;
    *(undefined8 *)((longlong)apuStack_158[0] + 0x1c) = uVar4;
    uVar1 = *(undefined4 *)((longlong)param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 3);
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x1c);
    *(undefined4 *)((longlong)apuStack_158[0] + 0x24) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)(apuStack_158[0] + 5) = uVar1;
    *(undefined4 *)((longlong)apuStack_158[0] + 0x2c) = uVar2;
    *(undefined4 *)(apuStack_158[0] + 6) = uVar3;
    uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
    uVar2 = *(undefined4 *)(param_3 + 5);
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x2c);
    *(undefined4 *)((longlong)apuStack_158[0] + 0x34) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(apuStack_158[0] + 7) = uVar1;
    *(undefined4 *)((longlong)apuStack_158[0] + 0x3c) = uVar2;
    *(undefined4 *)(apuStack_158[0] + 8) = uVar3;
    if (param_4 == (undefined8 *)0x0) {
      *(undefined8 *)((longlong)apuStack_158[0] + 0x44) = 0;
      *(undefined4 *)((longlong)apuStack_158[0] + 0x4c) = 0;
    }
    else {
      *(undefined8 *)((longlong)apuStack_158[0] + 0x44) = *param_4;
      *(undefined4 *)((longlong)apuStack_158[0] + 0x4c) = *(undefined4 *)(param_4 + 1);
    }
    *(bool *)(apuStack_158[0] + 10) = param_4 != (undefined8 *)0x0;
    func_0x00018088e0d0(*(undefined8 *)(lStack_160 + 0x98));
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_168);
  }
LAB_1808499fb:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180849bb0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)
void FUN_180849bb0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_198 [48];
  longlong lStack_168;
  undefined8 *puStack_160;
  undefined8 auStack_158 [34];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  auStack_158[0] = 0;
  iVar1 = func_0x00018088c590(param_1,&lStack_168);
  if (iVar1 == 0) {
    if ((*(uint *)(lStack_168 + 0x24) >> 1 & 1) == 0) goto LAB_180849c81;
    iVar2 = FUN_18088c740(auStack_158);
    if (iVar2 == 0) goto LAB_180849c22;
  }
  else {
LAB_180849c22:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(undefined8 *)(lStack_168 + 0x98),&puStack_160,0x28), iVar1 == 0)) {
    *puStack_160 = &UNK_180983e88;
    *(undefined4 *)(puStack_160 + 1) = 0x28;
    *(undefined4 *)(puStack_160 + 4) = param_3;
    *(int *)(puStack_160 + 2) = (int)param_1;
    puStack_160[3] = param_2;
    *(undefined1 *)((longlong)puStack_160 + 0x24) = param_4;
    func_0x00018088e0d0(*(undefined8 *)(lStack_168 + 0x98));
  }
LAB_180849c81:
                    // WARNING: Subroutine does not return
  FUN_18088c790(auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180849d40(ulonglong param_1,longlong param_2,undefined4 param_3)
void FUN_180849d40(ulonglong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1a8 [32];
  undefined1 *puStack_188;
  undefined8 uStack_178;
  longlong lStack_170;
  undefined8 *apuStack_168 [2];
  undefined1 auStack_158 [256];
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_1a8;
  if ((param_2 == 0) || (iVar1 = func_0x00018076b690(param_2), 0x7f < iVar1)) {
    if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_1a8);
    }
    iVar1 = FUN_18074b880(auStack_158,0x100,param_2);
    iVar2 = FUN_18074b880(auStack_158 + iVar1,0x100 - iVar1,&DAT_180a06434);
    func_0x00018074b830(auStack_158 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_3);
    puStack_188 = auStack_158;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xd,param_1,&UNK_1809840a0);
  }
  uStack_178 = 0;
  iVar2 = func_0x00018088c590(param_1 & 0xffffffff,&lStack_170);
  if (iVar2 == 0) {
    if ((*(uint *)(lStack_170 + 0x24) >> 1 & 1) == 0) goto LAB_180849dd1;
    iVar3 = FUN_18088c740(&uStack_178);
    if (iVar3 == 0) goto LAB_180849e6f;
  }
  else {
LAB_180849e6f:
    iVar3 = iVar2;
  }
  if ((iVar3 == 0) &&
     (iVar2 = FUN_18088dec0(*(undefined8 *)(lStack_170 + 0x98),apuStack_168,0xa8), iVar2 == 0)) {
    *apuStack_168[0] = &UNK_180984038;
    *(undefined4 *)(apuStack_168[0] + 1) = 0xa8;
    *(int *)(apuStack_168[0] + 2) = (int)param_1;
                    // WARNING: Subroutine does not return
    memcpy(apuStack_168[0] + 5,param_2,(longlong)(iVar1 + 1));
  }
LAB_180849dd1:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180849f40(ulonglong param_1,longlong param_2,undefined4 param_3)
void FUN_180849f40(ulonglong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1a8 [32];
  undefined1 *puStack_188;
  undefined8 uStack_178;
  longlong lStack_170;
  undefined8 *apuStack_168 [2];
  undefined1 auStack_158 [256];
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_1a8;
  if ((param_2 == 0) || (iVar1 = func_0x00018076b690(param_2), 0x7f < iVar1)) {
    if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_1a8);
    }
    iVar1 = FUN_18074b880(auStack_158,0x100,param_2);
    iVar2 = FUN_18074b880(auStack_158 + iVar1,0x100 - iVar1,&DAT_180a06434);
    func_0x00018074b830(auStack_158 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_3);
    puStack_188 = auStack_158;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xb,param_1,&UNK_1809822c8);
  }
  uStack_178 = 0;
  iVar2 = func_0x00018088c590(param_1 & 0xffffffff,&lStack_170);
  if (iVar2 == 0) {
    if ((*(uint *)(lStack_170 + 0x24) >> 1 & 1) == 0) goto LAB_180849fd1;
    iVar3 = FUN_18088c740(&uStack_178);
    if (iVar3 == 0) goto LAB_18084a06f;
  }
  else {
LAB_18084a06f:
    iVar3 = iVar2;
  }
  if ((iVar3 == 0) &&
     (iVar2 = FUN_18088dec0(*(undefined8 *)(lStack_170 + 0x98),apuStack_168,0xa0), iVar2 == 0)) {
    *apuStack_168[0] = &UNK_180982260;
    *(undefined4 *)(apuStack_168[0] + 1) = 0xa0;
                    // WARNING: Subroutine does not return
    memcpy(apuStack_168[0] + 4,param_2,(longlong)(iVar1 + 1));
  }
LAB_180849fd1:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_178);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084a140(undefined8 param_1,undefined1 param_2)
void FUN_18084a140(undefined8 param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_178 [48];
  longlong alStack_148 [2];
  undefined8 *apuStack_138 [34];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  alStack_148[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084a1fa;
    iVar2 = FUN_18088c740(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084a1a4;
  }
  else {
LAB_18084a1a4:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(undefined8 *)(alStack_148[0] + 0x98),apuStack_138,0x20), iVar1 == 0))
  {
    *apuStack_138[0] = &UNK_180983a60;
    *(undefined4 *)(apuStack_138[0] + 1) = 0x20;
    *(int *)(apuStack_138[0] + 2) = (int)param_1;
    *(undefined1 *)(apuStack_138[0] + 3) = param_2;
    func_0x00018088e0d0(*(undefined8 *)(alStack_148[0] + 0x98));
  }
LAB_18084a1fa:
                    // WARNING: Subroutine does not return
  FUN_18088c790(alStack_148 + 1);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084a280(undefined8 param_1,undefined4 param_2)
void FUN_18084a280(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_178 [48];
  longlong alStack_148 [2];
  undefined8 *apuStack_138 [34];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  alStack_148[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084a346;
    iVar2 = FUN_18088c740(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084a2ef;
  }
  else {
LAB_18084a2ef:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(undefined8 *)(alStack_148[0] + 0x98),apuStack_138,0x20), iVar1 == 0))
  {
    *apuStack_138[0] = &UNK_1809837c0;
    *(undefined4 *)(apuStack_138[0] + 1) = 0x20;
    *(undefined4 *)(apuStack_138[0] + 3) = param_2;
    *(int *)(apuStack_138[0] + 2) = (int)param_1;
    func_0x00018088e0d0(*(undefined8 *)(alStack_148[0] + 0x98));
  }
LAB_18084a346:
                    // WARNING: Subroutine does not return
  FUN_18088c790(alStack_148 + 1);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084a3d0(undefined8 param_1,undefined4 param_2,undefined4 param_3)
void FUN_18084a3d0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_188 [48];
  longlong alStack_158 [2];
  undefined8 *apuStack_148 [34];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  alStack_158[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_158);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_158[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084a498;
    iVar2 = FUN_18088c740(alStack_158 + 1);
    if (iVar2 == 0) goto LAB_18084a43e;
  }
  else {
LAB_18084a43e:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(undefined8 *)(alStack_158[0] + 0x98),apuStack_148,0x20), iVar1 == 0))
  {
    *apuStack_148[0] = &UNK_180983950;
    *(undefined4 *)(apuStack_148[0] + 1) = 0x20;
    *(undefined4 *)((longlong)apuStack_148[0] + 0x1c) = param_3;
    *(int *)(apuStack_148[0] + 2) = (int)param_1;
    *(undefined4 *)(apuStack_148[0] + 3) = param_2;
    func_0x00018088e0d0(*(undefined8 *)(alStack_158[0] + 0x98));
  }
LAB_18084a498:
                    // WARNING: Subroutine does not return
  FUN_18088c790(alStack_158 + 1);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084a550(undefined8 param_1,undefined4 param_2)
void FUN_18084a550(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_178 [48];
  longlong alStack_148 [2];
  undefined8 *apuStack_138 [34];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  alStack_148[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084a608;
    iVar2 = FUN_18088c740(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084a5b3;
  }
  else {
LAB_18084a5b3:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(undefined8 *)(alStack_148[0] + 0x98),apuStack_138,0x20), iVar1 == 0))
  {
    *apuStack_138[0] = &UNK_180983be8;
    *(undefined4 *)(apuStack_138[0] + 1) = 0x20;
    *(int *)(apuStack_138[0] + 2) = (int)param_1;
    *(undefined4 *)(apuStack_138[0] + 3) = param_2;
    func_0x00018088e0d0(*(undefined8 *)(alStack_148[0] + 0x98));
  }
LAB_18084a608:
                    // WARNING: Subroutine does not return
  FUN_18088c790(alStack_148 + 1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084a680(undefined4 param_1,undefined8 param_2)
void FUN_18084a680(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_168 [48];
  undefined8 uStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  longlong alStack_120 [33];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  lStack_128 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_130);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_138,uStack_130), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1,alStack_120), iVar1 == 0)) {
    lStack_128 = *(longlong *)(alStack_120[0] + 8);
  }
  else if (iVar1 != 0) goto LAB_18084a719;
  *(undefined8 *)(*(longlong *)(lStack_128 + 0xd0) + 0x38) = param_2;
LAB_18084a719:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084a7a0(undefined4 param_1,undefined8 param_2)
void FUN_18084a7a0(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_168 [48];
  undefined8 uStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  longlong alStack_120 [33];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  lStack_128 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_130);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_138,uStack_130), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1,alStack_120), iVar1 == 0)) {
    if (alStack_120[0] == 0) {
      lStack_128 = alStack_120[0];
    }
    else {
      lStack_128 = alStack_120[0] + -8;
    }
  }
  else if (iVar1 != 0) goto LAB_18084a83e;
  *(undefined8 *)(lStack_128 + 0x30) = param_2;
LAB_18084a83e:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_138);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084a8c0(undefined8 param_1,undefined4 param_2)
void FUN_18084a8c0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_178 [48];
  longlong alStack_148 [2];
  undefined8 *apuStack_138 [34];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  alStack_148[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084a986;
    iVar2 = FUN_18088c740(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084a92f;
  }
  else {
LAB_18084a92f:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(undefined8 *)(alStack_148[0] + 0x98),apuStack_138,0x20), iVar1 == 0))
  {
    *apuStack_138[0] = &UNK_1809842e0;
    *(undefined4 *)(apuStack_138[0] + 1) = 0x20;
    *(undefined4 *)(apuStack_138[0] + 3) = param_2;
    *(int *)(apuStack_138[0] + 2) = (int)param_1;
    func_0x00018088e0d0(*(undefined8 *)(alStack_148[0] + 0x98));
  }
LAB_18084a986:
                    // WARNING: Subroutine does not return
  FUN_18088c790(alStack_148 + 1);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084aa10(undefined8 param_1,undefined4 param_2)
void FUN_18084aa10(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_178 [48];
  longlong alStack_148 [2];
  undefined8 *apuStack_138 [34];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  alStack_148[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084aad6;
    iVar2 = FUN_18088c740(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084aa7f;
  }
  else {
LAB_18084aa7f:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(undefined8 *)(alStack_148[0] + 0x98),apuStack_138,0x20), iVar1 == 0))
  {
    *apuStack_138[0] = &UNK_180983738;
    *(undefined4 *)(apuStack_138[0] + 1) = 0x20;
    *(undefined4 *)(apuStack_138[0] + 3) = param_2;
    *(int *)(apuStack_138[0] + 2) = (int)param_1;
    func_0x00018088e0d0(*(undefined8 *)(alStack_148[0] + 0x98));
  }
LAB_18084aad6:
                    // WARNING: Subroutine does not return
  FUN_18088c790(alStack_148 + 1);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084ab60(undefined8 param_1,undefined4 param_2)
void FUN_18084ab60(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_178 [48];
  longlong alStack_148 [2];
  undefined8 *apuStack_138 [34];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  alStack_148[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084ac26;
    iVar2 = FUN_18088c740(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084abcf;
  }
  else {
LAB_18084abcf:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(undefined8 *)(alStack_148[0] + 0x98),apuStack_138,0x20), iVar1 == 0))
  {
    *apuStack_138[0] = &UNK_1809844c8;
    *(undefined4 *)(apuStack_138[0] + 1) = 0x20;
    *(undefined4 *)(apuStack_138[0] + 3) = param_2;
    *(int *)(apuStack_138[0] + 2) = (int)param_1;
    func_0x00018088e0d0(*(undefined8 *)(alStack_148[0] + 0x98));
  }
LAB_18084ac26:
                    // WARNING: Subroutine does not return
  FUN_18088c790(alStack_148 + 1);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084acb0(undefined8 param_1)
void FUN_18084acb0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_168 [48];
  longlong alStack_138 [2];
  undefined8 *apuStack_128 [34];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  alStack_138[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_138);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_138[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084ad66;
    iVar2 = FUN_18088c740(alStack_138 + 1);
    if (iVar2 == 0) goto LAB_18084ad14;
  }
  else {
LAB_18084ad14:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(undefined8 *)(alStack_138[0] + 0x98),apuStack_128,0x18), iVar1 == 0))
  {
    *apuStack_128[0] = &UNK_180983ae8;
    *(undefined4 *)(apuStack_128[0] + 1) = 0x18;
    *(int *)(apuStack_128[0] + 2) = (int)param_1;
    func_0x00018088e0d0(*(undefined8 *)(alStack_138[0] + 0x98));
  }
LAB_18084ad66:
                    // WARNING: Subroutine does not return
  FUN_18088c790(alStack_138 + 1);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084ade0(undefined8 param_1,undefined4 param_2)
void FUN_18084ade0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_178 [48];
  longlong alStack_148 [2];
  undefined8 *apuStack_138 [34];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  alStack_148[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084ae98;
    iVar2 = FUN_18088c740(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084ae43;
  }
  else {
LAB_18084ae43:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(undefined8 *)(alStack_148[0] + 0x98),apuStack_138,0x20), iVar1 == 0))
  {
    *apuStack_138[0] = &UNK_180983b68;
    *(undefined4 *)(apuStack_138[0] + 1) = 0x20;
    *(int *)(apuStack_138[0] + 2) = (int)param_1;
    *(undefined4 *)(apuStack_138[0] + 3) = param_2;
    func_0x00018088e0d0(*(undefined8 *)(alStack_148[0] + 0x98));
  }
LAB_18084ae98:
                    // WARNING: Subroutine does not return
  FUN_18088c790(alStack_148 + 1);
}





// 函数: void FUN_18084af10(undefined4 param_1,undefined4 *param_2)
void FUN_18084af10(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uStackX_10;
  longlong lStackX_18;
  undefined1 auStackX_20 [8];
  
  FUN_18084afc0();
  uVar1 = *param_2;
  uStackX_10 = 0;
  iVar2 = func_0x00018088c590(param_1,&lStackX_18);
  if (iVar2 == 0) {
    if ((*(uint *)(lStackX_18 + 0x24) >> 1 & 1) == 0) goto LAB_18084af88;
    iVar3 = FUN_18088c740(&uStackX_10);
    if (iVar3 == 0) goto LAB_18084af68;
  }
  else {
LAB_18084af68:
    iVar3 = iVar2;
  }
  if (iVar3 == 0) {
    func_0x00018088c530(uVar1,auStackX_20);
  }
LAB_18084af88:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStackX_10);
}



// WARNING: Type propagation algorithm not settling

ulonglong FUN_18084afc0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong alStackX_10 [2];
  undefined8 *puStackX_20;
  
  uVar1 = func_0x00018088c590(param_1,alStackX_10);
  if ((uVar1 == 0) && ((*(uint *)(alStackX_10[0] + 0x24) >> 1 & 1) == 0)) {
    return 0x4b;
  }
  if (uVar1 != 0) {
    return (ulonglong)uVar1;
  }
  uVar3 = FUN_18088e0f0(*(undefined8 *)(alStackX_10[0] + 0x98),0);
  if ((int)uVar3 == 0) {
    if (*(int *)(*(longlong *)(alStackX_10[0] + 0x98) + 0x200) != 0) {
      alStackX_10[1] = 0;
      iVar2 = FUN_18088c740(alStackX_10 + 1);
      if (iVar2 == 0) {
        iVar2 = FUN_18088dec0(*(undefined8 *)(alStackX_10[0] + 0x98),&puStackX_20,0x10);
        if (iVar2 == 0) {
          *puStackX_20 = &UNK_180982ab0;
          *(undefined4 *)(puStackX_20 + 1) = 0x10;
          iVar2 = func_0x00018088e0d0(*(undefined8 *)(alStackX_10[0] + 0x98));
          if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
            FUN_18088c790(alStackX_10 + 1);
          }
        }
      }
                    // WARNING: Subroutine does not return
      FUN_18088c790(alStackX_10 + 1);
    }
    uVar3 = 0;
  }
  return uVar3;
}



undefined8 FUN_18084b015(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined8 *in_stack_00000048;
  
  if (*(int *)(*(longlong *)(param_2 + 0x98) + 0x200) == 0) {
    return 0;
  }
  uStack0000000000000040 = 0;
  iVar1 = FUN_18088c740(&stack0x00000040);
  if (iVar1 == 0) {
    iVar1 = FUN_18088dec0(*(undefined8 *)(in_stack_00000038 + 0x98),&stack0x00000048,0x10);
    if (iVar1 == 0) {
      *in_stack_00000048 = &UNK_180982ab0;
      *(undefined4 *)(in_stack_00000048 + 1) = 0x10;
      iVar1 = func_0x00018088e0d0(*(undefined8 *)(in_stack_00000038 + 0x98));
      if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18088c790(&stack0x00000040);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18088c790(&stack0x00000040);
}





// 函数: void FUN_18084b0a1(void)
void FUN_18084b0a1(void)

{
  return;
}





// 函数: void FUN_18084b0a6(void)
void FUN_18084b0a6(void)

{
                    // WARNING: Subroutine does not return
  FUN_18088c790(&stack0x00000040);
}





// 函数: void FUN_18084b0c0(undefined4 param_1)
void FUN_18084b0c0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uStackX_10;
  longlong alStackX_18 [2];
  
  iVar1 = FUN_18084afc0();
  if (iVar1 != 0) {
    return;
  }
  uStackX_10 = 0;
  iVar1 = func_0x00018088c590(param_1,alStackX_18);
  if (iVar1 == 0) {
    if ((*(uint *)(alStackX_18[0] + 0x24) >> 1 & 1) == 0) {
                    // WARNING: Subroutine does not return
      FUN_18088c790(&uStackX_10);
    }
    iVar2 = FUN_18088c740(&uStackX_10);
    if (iVar2 != 0) goto LAB_18084b131;
  }
  iVar2 = iVar1;
LAB_18084b131:
  if (iVar2 == 0) {
    iVar1 = FUN_18088daf0(*(undefined8 *)(alStackX_18[0] + 0x98));
    if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18088c790(&uStackX_10);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStackX_10);
}





// 函数: void FUN_18084b0db(void)
void FUN_18084b0db(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined8 uStack0000000000000038;
  longlong in_stack_00000040;
  
  uStack0000000000000038 = 0;
  iVar1 = func_0x00018088c590(unaff_EBX);
  if (iVar1 == 0) {
    if ((*(uint *)(in_stack_00000040 + 0x24) >> 1 & 1) == 0) {
                    // WARNING: Subroutine does not return
      FUN_18088c790(&stack0x00000038);
    }
    iVar2 = FUN_18088c740(&stack0x00000038);
    if (iVar2 != 0) goto LAB_18084b131;
  }
  iVar2 = iVar1;
LAB_18084b131:
  if (iVar2 == 0) {
    iVar1 = FUN_18088daf0(*(undefined8 *)(in_stack_00000040 + 0x98));
    if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18088c790(&stack0x00000038);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18088c790(&stack0x00000038);
}





// 函数: void FUN_18084b11f(void)
void FUN_18084b11f(void)

{
  int iVar1;
  int unaff_EDI;
  longlong in_stack_00000040;
  
  iVar1 = FUN_18088c740(&stack0x00000038);
  if (iVar1 == 0) {
    iVar1 = unaff_EDI;
  }
  if (iVar1 == 0) {
    iVar1 = FUN_18088daf0(*(undefined8 *)(in_stack_00000040 + 0x98));
    if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18088c790(&stack0x00000038);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18088c790(&stack0x00000038);
}





// 函数: void FUN_18084b163(void)
void FUN_18084b163(void)

{
                    // WARNING: Subroutine does not return
  FUN_18088c790(&stack0x00000038);
}





// 函数: void FUN_18084b174(void)
void FUN_18084b174(void)

{
  return;
}



// WARNING: Type propagation algorithm not settling



