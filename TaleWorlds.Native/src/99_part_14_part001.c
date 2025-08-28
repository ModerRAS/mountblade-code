#include "TaleWorlds.Native.Split.h"

// 99_part_14_part001.c - 22 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_14.c - 289 个函数


// 函数: void FUN_1808e656d(void)
void FUN_1808e656d(void)

{
  uint in_EAX;
  int unaff_ESI;
  longlong unaff_RDI;
  
  if ((int)((*(int *)(unaff_RDI + 0x10) - 1U & in_EAX) + unaff_ESI) <= *(int *)(unaff_RDI + 0x10)) {
                    // WARNING: Subroutine does not return
    memcpy();
  }
                    // WARNING: Subroutine does not return
  memcpy();
}






// 函数: void FUN_1808e659b(void)
void FUN_1808e659b(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808e65c8(void)
void FUN_1808e65c8(void)

{
  longlong unaff_RDI;
  
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(undefined8 *)(unaff_RDI + 8),
                &UNK_180989010,0xa8,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808e65cd(void)
void FUN_1808e65cd(void)

{
  longlong unaff_RDI;
  
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(undefined8 *)(unaff_RDI + 8),
                &UNK_180989010,0xa8,1);
}



undefined8 FUN_1808e6628(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808e6640(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_2 & param_2 - 1) != 0) {
    return 0x1f;
  }
  uVar1 = FUN_1807682e0(param_1,0);
  if ((int)uVar1 == 0) {
    lVar2 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2,&UNK_180989010,0x24,0,
                          (char)uVar1,1);
    *(longlong *)(param_1 + 8) = lVar2;
    if (lVar2 == 0) {
      return 0x26;
    }
    *(undefined8 *)(param_1 + 0x1c) = 0;
    uVar1 = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(uint *)(param_1 + 0x10) = param_2;
  }
  return uVar1;
}



undefined8 FUN_1808e668e(longlong param_1)

{
  longlong lVar1;
  longlong unaff_RBX;
  undefined4 unaff_EDI;
  
  lVar1 = FUN_180741e10(*(undefined8 *)(param_1 + 0x1a0));
  *(longlong *)(unaff_RBX + 8) = lVar1;
  if (lVar1 == 0) {
    return 0x26;
  }
  *(undefined8 *)(unaff_RBX + 0x1c) = 0;
  *(undefined8 *)(unaff_RBX + 0x14) = 0;
  *(undefined8 *)(unaff_RBX + 0x24) = 0;
  *(undefined4 *)(unaff_RBX + 0x10) = unaff_EDI;
  return 0;
}



undefined8 FUN_1808e66c1(void)

{
  longlong unaff_RBX;
  undefined8 unaff_RSI;
  undefined4 unaff_EDI;
  
  *(undefined8 *)(unaff_RBX + 0x1c) = unaff_RSI;
  *(undefined8 *)(unaff_RBX + 0x14) = unaff_RSI;
  *(undefined8 *)(unaff_RBX + 0x24) = unaff_RSI;
  *(undefined4 *)(unaff_RBX + 0x10) = unaff_EDI;
  return 0;
}






// 函数: void FUN_1808e66d7(void)
void FUN_1808e66d7(void)

{
  return;
}



longlong FUN_1808e66f0(longlong param_1,longlong *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = 0;
  *param_3 = 0;
  iVar2 = *(int *)(param_1 + 0x20);
  iVar6 = iVar2 - *(int *)(param_1 + 0x14);
  if (iVar6 != 0) {
    *(int *)(param_1 + 0x18) = iVar2;
    *param_3 = iVar6;
    iVar2 = *(int *)(param_1 + 0x10);
    uVar1 = iVar2 - 1;
    uVar4 = *(uint *)(param_1 + 0x14) & uVar1;
    uVar3 = *(uint *)(param_1 + 0x20);
    *param_2 = *(longlong *)(param_1 + 8) + (longlong)(int)uVar4;
    lVar5 = *(longlong *)(param_1 + 8);
    if (iVar2 < (int)(uVar4 + iVar6)) {
      param_2[1] = *(int *)(param_1 + 0x10) + lVar5;
      lVar5 = *(longlong *)(param_1 + 8);
      param_2[2] = lVar5;
      lVar7 = (longlong)(int)(uVar1 & uVar3) + *(longlong *)(param_1 + 8);
    }
    else {
      param_2[2] = 0;
      lVar5 = (longlong)iVar6 + (longlong)(int)uVar4 + lVar5;
      param_2[1] = lVar5;
    }
    param_2[3] = lVar7;
    return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
  }
  return (ulonglong)(uint3)((uint)iVar2 >> 8) << 8;
}



undefined8 FUN_1808e6715(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  uint uVar1;
  uint in_EAX;
  uint uVar2;
  longlong lVar3;
  int unaff_EBX;
  longlong in_R10;
  longlong *in_R11;
  
  uVar2 = in_EAX & param_3 - 1U;
  uVar1 = *(uint *)(param_1 + 0x20);
  *in_R11 = *(longlong *)(param_1 + 8) + (longlong)(int)uVar2;
  lVar3 = *(longlong *)(in_R10 + 8);
  if (param_3 < (int)(uVar2 + unaff_EBX)) {
    in_R11[1] = *(int *)(in_R10 + 0x10) + lVar3;
    lVar3 = *(longlong *)(in_R10 + 8);
    in_R11[2] = lVar3;
    param_4 = (longlong)(int)(param_3 - 1U & uVar1) + *(longlong *)(in_R10 + 8);
  }
  else {
    in_R11[2] = param_4;
    lVar3 = (longlong)unaff_EBX + (longlong)(int)uVar2 + lVar3;
    in_R11[1] = lVar3;
  }
  in_R11[3] = param_4;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



undefined1 FUN_1808e6780(void)

{
  return 0;
}



undefined8
FUN_1808e6790(longlong param_1,longlong *param_2,int param_3,longlong *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar6 = iVar2 - 1U & *(uint *)(param_1 + 0x1c);
  iVar1 = uVar6 + param_3;
  iVar5 = iVar2 - uVar6;
  if (iVar1 <= iVar2) {
    iVar5 = 0;
  }
  if (iVar2 < (iVar5 - *(int *)(param_1 + 0x14)) + *(int *)(param_1 + 0x1c) + param_3) {
    uVar4 = 0x41;
  }
  else {
    *(int *)(param_1 + 0x24) = param_3;
    *(int *)(param_1 + 0x28) = iVar5;
    uVar3 = 0;
    if (iVar1 <= iVar2) {
      uVar3 = uVar6;
    }
    *param_2 = (longlong)(int)uVar3 + *(longlong *)(param_1 + 8);
    if (iVar1 <= iVar2) {
      uVar6 = 0;
    }
    *param_4 = (longlong)(int)uVar6 + *(longlong *)(param_1 + 8);
    *param_5 = iVar5;
    uVar4 = 0;
  }
  return uVar4;
}



int FUN_1808e6830(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  iVar4 = FUN_18074b880(param_2,param_3,&UNK_1809890f8);
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



int FUN_1808e6930(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  iVar2 = func_0x00018074b800(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,param_1 + 0x1c);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_1808e69e0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180989188);
  iVar4 = FUN_18074b880(param_2 + iVar3,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,param_1 + 0x1c);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}






// 函数: void FUN_1808e6ac0(longlong param_1,undefined8 param_2)
void FUN_1808e6ac0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088f4d0(param_2,param_1 + 0x1c,0x80);
    if (iVar1 == 0) {
      FUN_18088ee60(param_2,param_1 + 0x18);
    }
  }
  return;
}






// 函数: void FUN_1808e6b20(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_1808e6b20(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1808e6e20(param_2,param_3,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),
                *(undefined4 *)(param_1 + 0x20));
  return;
}






// 函数: void FUN_1808e6b50(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_1808e6b50(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1808e6d60(param_2,param_3,&UNK_180989210,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  return;
}






// 函数: void FUN_1808e6b90(longlong param_1,undefined8 param_2)
void FUN_1808e6b90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088ee20(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      FUN_18088eea0(param_2,param_1 + 0x20);
    }
  }
  return;
}



int FUN_1808e6c00(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  iVar2 = func_0x00018074b800(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b830(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_1808e6c70(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180989308);
  iVar4 = FUN_18074b880(param_2 + iVar3,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b830(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}






// 函数: void FUN_1808e6d20(longlong param_1,undefined8 param_2)
void FUN_1808e6d20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    FUN_18088eea0(param_2,param_1 + 0x14);
  }
  return;
}



int FUN_1808e6d60(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_18074b880();
  iVar2 = FUN_18074b880(param_1 + iVar1,param_2 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b800(iVar1 + param_1,param_2 - iVar1,param_4);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(iVar1 + param_1,param_2 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b7d0(iVar1 + param_1,param_2 - iVar1,param_5);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(iVar1 + param_1,param_2 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b830(iVar1 + param_1,param_2 - iVar1,param_6);
  return iVar2 + iVar1;
}



int FUN_1808e6e20(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x00018074b800();
  iVar2 = FUN_18074b880(param_1 + iVar1,param_2 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b7d0(iVar1 + param_1,param_2 - iVar1,param_4);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(iVar1 + param_1,param_2 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b830(iVar1 + param_1,param_2 - iVar1,param_5);
  return iVar2 + iVar1;
}






// 函数: void FUN_1808e6ec0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e6ec0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x20;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
    *puVar4 = &UNK_180982fb8;
    *(undefined4 *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e6fa0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e6fa0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x20;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
    *puVar4 = &UNK_180983038;
    *(undefined4 *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e7080(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e7080(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x30;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    plVar4 = (longlong *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)plVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x14) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x24) = 0;
    *plVar4 = (longlong)&UNK_1809830b8;
    *(undefined4 *)((longlong)plVar4 + 0x2c) = 0;
    *(undefined4 *)(plVar4 + 1) = 0x30;
    (**(code **)(*plVar4 + 0x20))(plVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e7160(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e7160(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x20;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
    *puVar4 = &UNK_180982e38;
    *(undefined4 *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e7240(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e7240(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x20;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
    *puVar4 = &UNK_180982eb8;
    *(undefined4 *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e7320(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e7320(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x30;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    plVar4 = (longlong *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)plVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x14) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x24) = 0;
    *plVar4 = (longlong)&UNK_180982f38;
    *(undefined4 *)((longlong)plVar4 + 0x2c) = 0;
    *(undefined4 *)(plVar4 + 1) = 0x30;
    (**(code **)(*plVar4 + 0x20))(plVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e7400(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e7400(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x20;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
    *puVar4 = &UNK_180982bb8;
    *(undefined4 *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e74e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e74e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x20;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
    *puVar4 = &UNK_180982c38;
    *(undefined4 *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e75c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e75c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x20;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
    *puVar4 = &UNK_180983138;
    *(undefined4 *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e76a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e76a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x20;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
    *puVar4 = &UNK_1809831b8;
    *(undefined4 *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e7780(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e7780(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x30;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    plVar4 = (longlong *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)plVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x14) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x24) = 0;
    *plVar4 = (longlong)&UNK_180983238;
    *(undefined4 *)((longlong)plVar4 + 0x2c) = 0;
    *(undefined4 *)(plVar4 + 1) = 0x30;
    (**(code **)(*plVar4 + 0x20))(plVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






