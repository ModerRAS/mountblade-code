#include "TaleWorlds.Native.Split.h"

// 03_rendering_part702.c - 17 个函数

// 函数: void FUN_180670526(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)
void FUN_180670526(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong in_R10;
  longlong in_R11;
  
  iVar6 = 1;
  puVar4 = (undefined8 *)(param_3 + 4000);
  do {
    puVar4[-1] = *(undefined8 *)(in_R11 + 0xf98);
    *puVar4 = *(undefined8 *)(in_R11 + 4000);
    puVar4[1] = *(undefined8 *)(in_R11 + 0xfa8);
    puVar4[2] = *(undefined8 *)(in_R11 + 0xfb0);
    puVar4[-0x14] =
         (longlong)(*(int *)(in_R10 + 0x1e7c) * iVar6) * 0x4c + *(longlong *)(in_R10 + 0x1eb0);
    *(undefined4 *)(puVar4 + -0x13) = *(undefined4 *)(in_R10 + 0x1e7c);
    *(undefined4 *)((longlong)puVar4 + -0x94) = *(undefined4 *)(in_R10 + 0x1e64);
    uVar2 = *(undefined8 *)(in_R11 + 0xde8);
    puVar4[-0x38] = *(undefined8 *)(in_R11 + 0xde0);
    puVar4[-0x37] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0xdf8);
    puVar4[-0x36] = *(undefined8 *)(in_R11 + 0xdf0);
    puVar4[-0x35] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0xe08);
    puVar4[-0x34] = *(undefined8 *)(in_R11 + 0xe00);
    puVar4[-0x33] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0xe18);
    puVar4[-0x32] = *(undefined8 *)(in_R11 + 0xe10);
    puVar4[-0x31] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0xe28);
    puVar4[-0x30] = *(undefined8 *)(in_R11 + 0xe20);
    puVar4[-0x2f] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0xe38);
    puVar4[-0x2e] = *(undefined8 *)(in_R11 + 0xe30);
    puVar4[-0x2d] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0xe48);
    puVar4[-0x2c] = *(undefined8 *)(in_R11 + 0xe40);
    puVar4[-0x2b] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0xe58);
    puVar4[-0x2a] = *(undefined8 *)(in_R11 + 0xe50);
    puVar4[-0x29] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0xe68);
    puVar4[-0x28] = *(undefined8 *)(in_R11 + 0xe60);
    puVar4[-0x27] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0xe78);
    puVar4[-0x26] = *(undefined8 *)(in_R11 + 0xe70);
    puVar4[-0x25] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0xe88);
    puVar4[-0x24] = *(undefined8 *)(in_R11 + 0xe80);
    puVar4[-0x23] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0xe98);
    puVar4[-0x22] = *(undefined8 *)(in_R11 + 0xe90);
    puVar4[-0x21] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0xea8);
    puVar4[-0x20] = *(undefined8 *)(in_R11 + 0xea0);
    puVar4[-0x1f] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0xeb8);
    puVar4[-0x1e] = *(undefined8 *)(in_R11 + 0xeb0);
    puVar4[-0x1d] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0xec8);
    puVar4[-0x1c] = *(undefined8 *)(in_R11 + 0xec0);
    puVar4[-0x1b] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0xed8);
    puVar4[-0x1a] = *(undefined8 *)(in_R11 + 0xed0);
    puVar4[-0x19] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0xee8);
    puVar4[-0x18] = *(undefined8 *)(in_R11 + 0xee0);
    puVar4[-0x17] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0xef8);
    puVar4[-0x16] = *(undefined8 *)(in_R11 + 0xef0);
    puVar4[-0x15] = uVar2;
    *(undefined1 *)(puVar4 + -8) = *(undefined1 *)(in_R11 + 0xf60);
    *(undefined1 *)((longlong)puVar4 + -0x3d) = *(undefined1 *)(in_R11 + 0xf63);
    *(undefined8 *)((longlong)puVar4 + -0x39) = *(undefined8 *)(in_R11 + 0xf67);
    *(undefined4 *)((longlong)puVar4 + -0x2b) = *(undefined4 *)(in_R11 + 0xf75);
    *(undefined4 *)((longlong)puVar4 + -0x23) = *(undefined4 *)(in_R11 + 0xf7d);
    *(undefined1 *)((longlong)puVar4 + -0x31) = *(undefined1 *)(in_R11 + 0xf6f);
    *(undefined1 *)(puVar4 + -6) = *(undefined1 *)(in_R11 + 0xf70);
    puVar4[3] = param_1 + 0x4140;
    uVar2 = *(undefined8 *)(in_R11 + 0x808);
    puVar4[-0xf4] = *(undefined8 *)(in_R11 + 0x800);
    puVar4[-0xf3] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0x818);
    puVar4[-0xf2] = *(undefined8 *)(in_R11 + 0x810);
    puVar4[-0xf1] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0x7e8);
    puVar4[-0xf8] = *(undefined8 *)(in_R11 + 0x7e0);
    puVar4[-0xf7] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0x7f8);
    puVar4[-0xf6] = *(undefined8 *)(in_R11 + 0x7f0);
    puVar4[-0xf5] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0x828);
    puVar4[-0xf0] = *(undefined8 *)(in_R11 + 0x820);
    puVar4[-0xef] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0x838);
    puVar4[-0xee] = *(undefined8 *)(in_R11 + 0x830);
    puVar4[-0xed] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0x848);
    puVar4[-0xec] = *(undefined8 *)(in_R11 + 0x840);
    puVar4[-0xeb] = uVar2;
    uVar2 = *(undefined8 *)(in_R11 + 0x850);
    uVar3 = *(undefined8 *)(in_R11 + 0x858);
    *(undefined4 *)(puVar4 + -0x39) = 0xffffffff;
    puVar4[-0xea] = uVar2;
    puVar4[-0xe9] = uVar3;
    uVar1 = *(undefined4 *)(puVar4 + -0x39);
    if (*(int *)(in_R10 + 0x1e8c) != 0) {
      uVar1 = 0xfffffff8;
    }
    iVar6 = iVar6 + 1;
    *(undefined4 *)(puVar4 + -0x39) = uVar1;
    param_4 = param_4 + -1;
    puVar4 = puVar4 + 0x254;
  } while (param_4 != 0);
  iVar6 = 0;
  if (0 < *(int *)(in_R10 + 0x1e74)) {
    lVar5 = 0;
    do {
      iVar6 = iVar6 + 1;
      *(undefined4 *)(lVar5 + *(longlong *)(in_R10 + 0x43a8)) = 0xffffffff;
      lVar5 = lVar5 + 4;
    } while (iVar6 < *(int *)(in_R10 + 0x1e74));
  }
  return;
}





// 函数: void FUN_1806707c6(void)
void FUN_1806707c6(void)

{
  int iVar1;
  longlong lVar2;
  longlong in_R10;
  
  iVar1 = 0;
  if (0 < *(int *)(in_R10 + 0x1e74)) {
    lVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)(lVar2 + *(longlong *)(in_R10 + 0x43a8)) = 0xffffffff;
      lVar2 = lVar2 + 4;
    } while (iVar1 < *(int *)(in_R10 + 0x1e74));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180670800(int *param_1)
void FUN_180670800(int *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [16];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 2);
  iVar1 = *param_1;
  lVar3 = *(longlong *)(param_1 + 4);
  if (*(int *)(lVar2 + 0x4380) != 0) {
    do {
      iVar4 = WaitForSingleObject(*(undefined8 *)
                                   (*(longlong *)(lVar2 + 0x43f8) + (longlong)iVar1 * 8),0xffffffff)
      ;
      if (iVar4 == 0) {
        if (*(int *)(lVar2 + 0x4380) == 0) break;
        *(undefined1 **)(lVar3 + 0xf58) = auStack_28;
        FUN_18066f810(lVar2,lVar3,iVar1 + 1);
      }
    } while (*(int *)(lVar2 + 0x4380) != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_48);
}





// 函数: void FUN_180670833(void)
void FUN_180670833(void)

{
  int iVar1;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined1 auStackX_20 [8];
  ulonglong in_stack_00000030;
  
  do {
    iVar1 = WaitForSingleObject(*(undefined8 *)(*(longlong *)(unaff_RBX + 0x43f8) + unaff_RSI * 8),
                                0xffffffff);
    if (iVar1 == 0) {
      if (*(int *)(unaff_RBX + 0x4380) == 0) break;
      *(undefined1 **)(unaff_RDI + 0xf58) = auStackX_20;
      FUN_18066f810();
    }
  } while (*(int *)(unaff_RBX + 0x4380) != 0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000030 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18067088e(void)
void FUN_18067088e(void)

{
  ulonglong in_stack_00000030;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000030 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1806708b0(longlong param_1)
void FUN_1806708b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x4380) = 0;
  *(undefined4 *)(param_1 + 0x4390) = 0;
  iVar2 = *(int *)(param_1 + 0x4384);
  if (8 < iVar2) {
    iVar2 = 8;
  }
  if (*(int *)(param_1 + 0x34e8) < iVar2) {
    iVar2 = *(int *)(param_1 + 0x34e8);
  }
  if (1 < iVar2) {
    *(undefined4 *)(param_1 + 0x4380) = 1;
    *(int *)(param_1 + 0x438c) = iVar2 + -1;
    lVar1 = FUN_18066e8f0(8,iVar2 + -1);
    *(longlong *)(param_1 + 0x43f0) = lVar1;
    if (lVar1 == 0) {
      FUN_18066d370(param_1 + 0x12c0,2,&UNK_180946b70);
    }
    lVar1 = FUN_18066e8f0(8,*(undefined4 *)(param_1 + 0x438c));
    *(longlong *)(param_1 + 0x43f8) = lVar1;
    if (lVar1 == 0) {
      FUN_18066d370(param_1 + 0x12c0,2,&UNK_180946ba0);
    }
    lVar1 = FUN_18066e960(0x20,(ulonglong)*(uint *)(param_1 + 0x438c) * 0x12a0);
    *(longlong *)(param_1 + 0x43e0) = lVar1;
    if (lVar1 == 0) {
      FUN_18066d370(param_1 + 0x12c0,2,&UNK_180946bd8);
    }
                    // WARNING: Subroutine does not return
    memset(*(undefined8 *)(param_1 + 0x43e0),0,(ulonglong)*(uint *)(param_1 + 0x438c) * 0x12a0);
  }
  return;
}





// 函数: void FUN_1806708fb(void)
void FUN_1806708fb(void)

{
  undefined4 in_EAX;
  longlong lVar1;
  longlong unaff_RBX;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_RBX + 0x4380) = 1;
  *(undefined4 *)(unaff_RBX + 0x438c) = in_EAX;
  lVar1 = FUN_18066e8f0(unaff_EDI,in_EAX);
  *(longlong *)(unaff_RBX + 0x43f0) = lVar1;
  if (lVar1 == 0) {
    FUN_18066d370(unaff_RBX + 0x12c0,unaff_EDI + -6,&UNK_180946b70);
  }
  lVar1 = FUN_18066e8f0();
  *(longlong *)(unaff_RBX + 0x43f8) = lVar1;
  if (lVar1 == 0) {
    FUN_18066d370(unaff_RBX + 0x12c0,2,&UNK_180946ba0);
  }
  lVar1 = FUN_18066e960(0x20,(ulonglong)*(uint *)(unaff_RBX + 0x438c) * 0x12a0);
  *(longlong *)(unaff_RBX + 0x43e0) = lVar1;
  if (lVar1 == 0) {
    FUN_18066d370(unaff_RBX + 0x12c0,2,&UNK_180946bd8);
  }
                    // WARNING: Subroutine does not return
  memset(*(undefined8 *)(unaff_RBX + 0x43e0),0,(ulonglong)*(uint *)(unaff_RBX + 0x438c) * 0x12a0);
}





// 函数: void FUN_180670a01(void)
void FUN_180670a01(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong unaff_RBX;
  uint unaff_EBP;
  ulonglong uVar3;
  
  do {
    uVar2 = CreateSemaphoreW(0,0,0x8000,0);
    uVar3 = (ulonglong)unaff_EBP;
    *(undefined8 *)(*(longlong *)(unaff_RBX + 0x43f8) + uVar3 * 8) = uVar2;
    func_0x00018066e400(*(longlong *)(unaff_RBX + 0x43e0) + uVar3 * 0x12a0);
    lVar1 = uVar3 * 0x18;
    *(uint *)(lVar1 + *(longlong *)(unaff_RBX + 0x43e8)) = unaff_EBP;
    *(longlong *)(lVar1 + 8 + *(longlong *)(unaff_RBX + 0x43e8)) = unaff_RBX;
    *(ulonglong *)(lVar1 + 0x10 + *(longlong *)(unaff_RBX + 0x43e8)) =
         *(longlong *)(unaff_RBX + 0x43e0) + uVar3 * 0x12a0;
    uVar2 = _beginthreadex(0,0,FUN_180670800);
    unaff_EBP = unaff_EBP + 1;
    *(undefined8 *)(*(longlong *)(unaff_RBX + 0x43f0) + uVar3 * 8) = uVar2;
  } while (unaff_EBP < *(uint *)(unaff_RBX + 0x438c));
  uVar2 = CreateSemaphoreW(0,0,0x8000,0);
  *(undefined8 *)(unaff_RBX + 0x4400) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x4390) = *(undefined4 *)(unaff_RBX + 0x438c);
  return;
}





// 函数: void FUN_180670ac1(void)
void FUN_180670ac1(void)

{
  undefined8 uVar1;
  longlong unaff_RBX;
  
  uVar1 = CreateSemaphoreW(0,0,0x8000,0);
  *(undefined8 *)(unaff_RBX + 0x4400) = uVar1;
  *(undefined4 *)(unaff_RBX + 0x4390) = *(undefined4 *)(unaff_RBX + 0x438c);
  return;
}





// 函数: void FUN_180670aec(void)
void FUN_180670aec(void)

{
  return;
}





// 函数: void FUN_180670b00(longlong param_1)
void FUN_180670b00(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (*(int *)(param_1 + 0x4380) != 0) {
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x4380) = 0;
    uVar3 = uVar4;
    uVar5 = uVar4;
    if (0 < *(int *)(param_1 + 0x4390)) {
      do {
        ReleaseSemaphore(*(undefined8 *)(*(longlong *)(param_1 + 0x43f8) + uVar5),1);
        iVar1 = WaitForSingleObject(*(undefined8 *)(*(longlong *)(param_1 + 0x43f0) + uVar5),
                                    0xffffffff);
        if (iVar1 == 0) {
          CloseHandle(*(undefined8 *)(*(longlong *)(param_1 + 0x43f0) + uVar5));
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
        uVar5 = uVar5 + 8;
      } while ((int)uVar2 < *(int *)(param_1 + 0x4390));
    }
    uVar3 = uVar4;
    if (0 < *(int *)(param_1 + 0x4390)) {
      do {
        if (*(longlong *)(uVar4 + *(longlong *)(param_1 + 0x43f8)) != 0) {
          CloseHandle();
        }
        uVar2 = (int)uVar3 + 1;
        uVar4 = uVar4 + 8;
        uVar3 = (ulonglong)uVar2;
      } while ((int)uVar2 < *(int *)(param_1 + 0x4390));
    }
    if (*(longlong *)(param_1 + 0x4400) != 0) {
      CloseHandle();
    }
    func_0x00018066e940(*(undefined8 *)(param_1 + 0x43f0));
    *(undefined8 *)(param_1 + 0x43f0) = 0;
    func_0x00018066e940(*(undefined8 *)(param_1 + 0x43f8));
    *(undefined8 *)(param_1 + 0x43f8) = 0;
    func_0x00018066e940(*(undefined8 *)(param_1 + 0x43e0));
    *(undefined8 *)(param_1 + 0x43e0) = 0;
    func_0x00018066e940(*(undefined8 *)(param_1 + 0x43e8));
    *(undefined8 *)(param_1 + 0x43e8) = 0;
  }
  return;
}





// 函数: void FUN_180670b17(longlong param_1)
void FUN_180670b17(longlong param_1)

{
  int iVar1;
  longlong unaff_RBX;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x4380) = 0;
  uVar3 = uVar4;
  uVar5 = uVar4;
  if (0 < *(int *)(param_1 + 0x4390)) {
    do {
      ReleaseSemaphore(*(undefined8 *)(*(longlong *)(unaff_RBX + 0x43f8) + uVar5),1);
      iVar1 = WaitForSingleObject(*(undefined8 *)(*(longlong *)(unaff_RBX + 0x43f0) + uVar5),
                                  0xffffffff);
      if (iVar1 == 0) {
        CloseHandle(*(undefined8 *)(*(longlong *)(unaff_RBX + 0x43f0) + uVar5));
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar5 = uVar5 + 8;
    } while ((int)uVar2 < *(int *)(unaff_RBX + 0x4390));
  }
  uVar3 = uVar4;
  if (0 < *(int *)(unaff_RBX + 0x4390)) {
    do {
      if (*(longlong *)(uVar4 + *(longlong *)(unaff_RBX + 0x43f8)) != 0) {
        CloseHandle();
      }
      uVar2 = (int)uVar3 + 1;
      uVar4 = uVar4 + 8;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < *(int *)(unaff_RBX + 0x4390));
  }
  if (*(longlong *)(unaff_RBX + 0x4400) != 0) {
    CloseHandle();
  }
  func_0x00018066e940(*(undefined8 *)(unaff_RBX + 0x43f0));
  *(undefined8 *)(unaff_RBX + 0x43f0) = 0;
  func_0x00018066e940(*(undefined8 *)(unaff_RBX + 0x43f8));
  *(undefined8 *)(unaff_RBX + 0x43f8) = 0;
  func_0x00018066e940(*(undefined8 *)(unaff_RBX + 0x43e0));
  *(undefined8 *)(unaff_RBX + 0x43e0) = 0;
  func_0x00018066e940(*(undefined8 *)(unaff_RBX + 0x43e8));
  *(undefined8 *)(unaff_RBX + 0x43e8) = 0;
  return;
}





// 函数: void FUN_180670b1e(longlong param_1)
void FUN_180670b1e(longlong param_1)

{
  int iVar1;
  longlong unaff_RBX;
  int iVar2;
  ulonglong unaff_RBP;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  iVar2 = (int)unaff_RBP;
  uVar4 = unaff_RBP & 0xffffffff;
  *(int *)(param_1 + 0x4380) = iVar2;
  if (iVar2 < *(int *)(param_1 + 0x4390)) {
    uVar5 = unaff_RBP & 0xffffffff;
    do {
      ReleaseSemaphore(*(undefined8 *)(*(longlong *)(unaff_RBX + 0x43f8) + uVar5),1);
      iVar1 = WaitForSingleObject(*(undefined8 *)(*(longlong *)(unaff_RBX + 0x43f0) + uVar5),
                                  0xffffffff);
      if (iVar1 == 0) {
        CloseHandle(*(undefined8 *)(*(longlong *)(unaff_RBX + 0x43f0) + uVar5));
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar5 = uVar5 + 8;
    } while ((int)uVar3 < *(int *)(unaff_RBX + 0x4390));
  }
  uVar5 = unaff_RBP & 0xffffffff;
  uVar4 = unaff_RBP;
  if (iVar2 < *(int *)(unaff_RBX + 0x4390)) {
    do {
      if (*(longlong *)(uVar4 + *(longlong *)(unaff_RBX + 0x43f8)) != 0) {
        CloseHandle();
      }
      uVar3 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar3;
      uVar4 = uVar4 + 8;
    } while ((int)uVar3 < *(int *)(unaff_RBX + 0x4390));
  }
  if (*(longlong *)(unaff_RBX + 0x4400) != 0) {
    CloseHandle();
  }
  func_0x00018066e940(*(undefined8 *)(unaff_RBX + 0x43f0));
  *(ulonglong *)(unaff_RBX + 0x43f0) = unaff_RBP;
  func_0x00018066e940(*(undefined8 *)(unaff_RBX + 0x43f8));
  *(ulonglong *)(unaff_RBX + 0x43f8) = unaff_RBP;
  func_0x00018066e940(*(undefined8 *)(unaff_RBX + 0x43e0));
  *(ulonglong *)(unaff_RBX + 0x43e0) = unaff_RBP;
  func_0x00018066e940(*(undefined8 *)(unaff_RBX + 0x43e8));
  *(ulonglong *)(unaff_RBX + 0x43e8) = unaff_RBP;
  return;
}





// 函数: void FUN_180670bda(void)
void FUN_180670bda(void)

{
  longlong unaff_RBX;
  undefined8 unaff_RBP;
  
  CloseHandle();
  func_0x00018066e940(*(undefined8 *)(unaff_RBX + 0x43f0));
  *(undefined8 *)(unaff_RBX + 0x43f0) = unaff_RBP;
  func_0x00018066e940(*(undefined8 *)(unaff_RBX + 0x43f8));
  *(undefined8 *)(unaff_RBX + 0x43f8) = unaff_RBP;
  func_0x00018066e940(*(undefined8 *)(unaff_RBX + 0x43e0));
  *(undefined8 *)(unaff_RBX + 0x43e0) = unaff_RBP;
  func_0x00018066e940(*(undefined8 *)(unaff_RBX + 0x43e8));
  *(undefined8 *)(unaff_RBX + 0x43e8) = unaff_RBP;
  return;
}





// 函数: void FUN_180670c31(void)
void FUN_180670c31(void)

{
  return;
}





// 函数: void FUN_180670c40(longlong param_1,uint param_2,undefined4 param_3)
void FUN_180670c40(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  lVar1 = param_1 + 0x12c0;
  if (*(int *)(param_1 + 0x4380) != 0) {
    FUN_180671080(param_1,param_3);
    if ((param_2 & 0xf) != 0) {
      param_2 = param_2 + (0x10 - (param_2 & 0xf));
    }
    if ((int)param_2 < 0x280) {
      *(undefined4 *)(param_1 + 0x43a4) = 1;
    }
    else if ((int)param_2 < 0x501) {
      *(undefined4 *)(param_1 + 0x43a4) = 8;
    }
    else {
      uVar2 = 0x20;
      if ((int)param_2 < 0xa01) {
        uVar2 = 0x10;
      }
      *(undefined4 *)(param_1 + 0x43a4) = uVar2;
    }
    lVar3 = FUN_18066e8f0(4,(longlong)*(int *)(param_1 + 0x1e74));
    *(longlong *)(param_1 + 0x43a8) = lVar3;
    if (lVar3 == 0) {
      FUN_18066d370(lVar1,2,&UNK_180946c30);
    }
    lVar3 = FUN_18066e8f0(8,(longlong)*(int *)(param_1 + 0x1e74));
    *(longlong *)(param_1 + 0x43b0) = lVar3;
    if (lVar3 == 0) {
      FUN_18066d370(lVar1,2,&UNK_180946c60);
    }
    uVar5 = 0;
    if (0 < *(int *)(param_1 + 0x1e74)) {
      uVar6 = uVar5;
      uVar8 = uVar5;
      do {
        uVar4 = FUN_18066e960(0x10,(longlong)(int)(param_2 + 0x40));
        *(undefined8 *)(uVar6 + *(longlong *)(param_1 + 0x43b0)) = uVar4;
        if (*(longlong *)(uVar6 + *(longlong *)(param_1 + 0x43b0)) == 0) {
          FUN_18066d370(lVar1,2,&UNK_180946c88);
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        uVar6 = uVar6 + 8;
      } while ((int)uVar7 < *(int *)(param_1 + 0x1e74));
    }
    lVar3 = FUN_18066e8f0(8,(longlong)*(int *)(param_1 + 0x1e74));
    *(longlong *)(param_1 + 0x43b8) = lVar3;
    if (lVar3 == 0) {
      FUN_18066d370(lVar1,2,&UNK_180946cb8);
    }
    if (0 < *(int *)(param_1 + 0x1e74)) {
      uVar6 = uVar5;
      uVar8 = uVar5;
      do {
        uVar4 = FUN_18066e960(0x10,(longlong)(((int)param_2 >> 1) + 0x20));
        *(undefined8 *)(uVar8 + *(longlong *)(param_1 + 0x43b8)) = uVar4;
        if (*(longlong *)(uVar8 + *(longlong *)(param_1 + 0x43b8)) == 0) {
          FUN_18066d370(lVar1,2,&UNK_180946ce0);
        }
        uVar7 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar7;
        uVar8 = uVar8 + 8;
      } while ((int)uVar7 < *(int *)(param_1 + 0x1e74));
    }
    lVar3 = FUN_18066e8f0(8,(longlong)*(int *)(param_1 + 0x1e74));
    *(longlong *)(param_1 + 0x43c0) = lVar3;
    if (lVar3 == 0) {
      FUN_18066d370(lVar1,2,&UNK_180946d10);
    }
    if (0 < *(int *)(param_1 + 0x1e74)) {
      uVar6 = uVar5;
      uVar8 = uVar5;
      do {
        uVar4 = FUN_18066e960(0x10,(longlong)(((int)param_2 >> 1) + 0x20));
        *(undefined8 *)(uVar6 + *(longlong *)(param_1 + 0x43c0)) = uVar4;
        if (*(longlong *)(uVar6 + *(longlong *)(param_1 + 0x43c0)) == 0) {
          FUN_18066d370(lVar1,2,&UNK_180946d38);
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        uVar6 = uVar6 + 8;
      } while ((int)uVar7 < *(int *)(param_1 + 0x1e74));
    }
    lVar3 = FUN_18066e8f0(8,(longlong)*(int *)(param_1 + 0x1e74));
    *(longlong *)(param_1 + 0x43c8) = lVar3;
    if (lVar3 == 0) {
      FUN_18066d370(lVar1,2,&UNK_180946d68);
    }
    uVar6 = uVar5;
    uVar8 = uVar5;
    if (0 < *(int *)(param_1 + 0x1e74)) {
      do {
        uVar4 = FUN_18066e8f0(0x10,1);
        *(undefined8 *)(uVar6 + *(longlong *)(param_1 + 0x43c8)) = uVar4;
        if (*(longlong *)(uVar6 + *(longlong *)(param_1 + 0x43c8)) == 0) {
          FUN_18066d370(lVar1,2,&UNK_180946d90);
        }
        uVar7 = (int)uVar8 + 1;
        uVar6 = uVar6 + 8;
        uVar8 = (ulonglong)uVar7;
      } while ((int)uVar7 < *(int *)(param_1 + 0x1e74));
    }
    lVar3 = FUN_18066e8f0(8,(longlong)*(int *)(param_1 + 0x1e74));
    *(longlong *)(param_1 + 0x43d0) = lVar3;
    if (lVar3 == 0) {
      FUN_18066d370(lVar1,2,&UNK_180946db8);
    }
    uVar6 = uVar5;
    uVar8 = uVar5;
    if (0 < *(int *)(param_1 + 0x1e74)) {
      do {
        uVar4 = FUN_18066e8f0(8);
        *(undefined8 *)(uVar6 + *(longlong *)(param_1 + 0x43d0)) = uVar4;
        if (*(longlong *)(uVar6 + *(longlong *)(param_1 + 0x43d0)) == 0) {
          FUN_18066d370(lVar1,2,&UNK_180946de0);
        }
        uVar7 = (int)uVar8 + 1;
        uVar6 = uVar6 + 8;
        uVar8 = (ulonglong)uVar7;
      } while ((int)uVar7 < *(int *)(param_1 + 0x1e74));
    }
    lVar3 = FUN_18066e8f0(8,(longlong)*(int *)(param_1 + 0x1e74));
    *(longlong *)(param_1 + 0x43d8) = lVar3;
    if (lVar3 == 0) {
      FUN_18066d370(lVar1,2,&UNK_180946e08);
    }
    uVar6 = uVar5;
    if (0 < *(int *)(param_1 + 0x1e74)) {
      do {
        uVar4 = FUN_18066e8f0(8);
        *(undefined8 *)(uVar6 + *(longlong *)(param_1 + 0x43d8)) = uVar4;
        if (*(longlong *)(uVar6 + *(longlong *)(param_1 + 0x43d8)) == 0) {
          FUN_18066d370(lVar1,2,&UNK_180946e30);
        }
        uVar7 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar7;
        uVar6 = uVar6 + 8;
      } while ((int)uVar7 < *(int *)(param_1 + 0x1e74));
    }
  }
  return;
}





// 函数: void FUN_180670c62(undefined8 param_1,undefined8 param_2,undefined4 param_3)
void FUN_180670c62(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong unaff_RBX;
  ulonglong uVar4;
  uint unaff_ESI;
  ulonglong uVar5;
  longlong unaff_RDI;
  uint uVar6;
  ulonglong uVar7;
  
  FUN_180671080(param_1,param_3);
  if ((unaff_ESI & 0xf) != 0) {
    unaff_ESI = unaff_ESI + (0x10 - (unaff_ESI & 0xf));
  }
  if ((int)unaff_ESI < 0x280) {
    *(undefined4 *)(unaff_RDI + 0x43a4) = 1;
  }
  else if ((int)unaff_ESI < 0x501) {
    *(undefined4 *)(unaff_RDI + 0x43a4) = 8;
  }
  else {
    uVar1 = 0x20;
    if ((int)unaff_ESI < 0xa01) {
      uVar1 = 0x10;
    }
    *(undefined4 *)(unaff_RDI + 0x43a4) = uVar1;
  }
  lVar2 = FUN_18066e8f0(4,(longlong)*(int *)(unaff_RBX + 0xbb4));
  *(longlong *)(unaff_RDI + 0x43a8) = lVar2;
  if (lVar2 == 0) {
    FUN_18066d370();
  }
  lVar2 = FUN_18066e8f0(8,(longlong)*(int *)(unaff_RBX + 0xbb4));
  *(longlong *)(unaff_RDI + 0x43b0) = lVar2;
  if (lVar2 == 0) {
    FUN_18066d370();
  }
  uVar4 = 0;
  if (0 < *(int *)(unaff_RBX + 0xbb4)) {
    uVar5 = uVar4;
    uVar7 = uVar4;
    do {
      uVar3 = FUN_18066e960(0x10,(longlong)(int)(unaff_ESI + 0x40));
      *(undefined8 *)(uVar5 + *(longlong *)(unaff_RDI + 0x43b0)) = uVar3;
      if (*(longlong *)(uVar5 + *(longlong *)(unaff_RDI + 0x43b0)) == 0) {
        FUN_18066d370();
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar5 = uVar5 + 8;
    } while ((int)uVar6 < *(int *)(unaff_RBX + 0xbb4));
  }
  lVar2 = FUN_18066e8f0(8,(longlong)*(int *)(unaff_RBX + 0xbb4));
  *(longlong *)(unaff_RDI + 0x43b8) = lVar2;
  if (lVar2 == 0) {
    FUN_18066d370();
  }
  if (0 < *(int *)(unaff_RBX + 0xbb4)) {
    uVar5 = uVar4;
    uVar7 = uVar4;
    do {
      uVar3 = FUN_18066e960(0x10,(longlong)(((int)unaff_ESI >> 1) + 0x20));
      *(undefined8 *)(uVar7 + *(longlong *)(unaff_RDI + 0x43b8)) = uVar3;
      if (*(longlong *)(uVar7 + *(longlong *)(unaff_RDI + 0x43b8)) == 0) {
        FUN_18066d370();
      }
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar6;
      uVar7 = uVar7 + 8;
    } while ((int)uVar6 < *(int *)(unaff_RBX + 0xbb4));
  }
  lVar2 = FUN_18066e8f0(8,(longlong)*(int *)(unaff_RBX + 0xbb4));
  *(longlong *)(unaff_RDI + 0x43c0) = lVar2;
  if (lVar2 == 0) {
    FUN_18066d370();
  }
  if (0 < *(int *)(unaff_RBX + 0xbb4)) {
    uVar5 = uVar4;
    uVar7 = uVar4;
    do {
      uVar3 = FUN_18066e960(0x10,(longlong)(((int)unaff_ESI >> 1) + 0x20));
      *(undefined8 *)(uVar5 + *(longlong *)(unaff_RDI + 0x43c0)) = uVar3;
      if (*(longlong *)(uVar5 + *(longlong *)(unaff_RDI + 0x43c0)) == 0) {
        FUN_18066d370();
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar5 = uVar5 + 8;
    } while ((int)uVar6 < *(int *)(unaff_RBX + 0xbb4));
  }
  lVar2 = FUN_18066e8f0(8,(longlong)*(int *)(unaff_RBX + 0xbb4));
  *(longlong *)(unaff_RDI + 0x43c8) = lVar2;
  if (lVar2 == 0) {
    FUN_18066d370();
  }
  uVar5 = uVar4;
  uVar7 = uVar4;
  if (0 < *(int *)(unaff_RBX + 0xbb4)) {
    do {
      uVar3 = FUN_18066e8f0(0x10,1);
      *(undefined8 *)(uVar5 + *(longlong *)(unaff_RDI + 0x43c8)) = uVar3;
      if (*(longlong *)(uVar5 + *(longlong *)(unaff_RDI + 0x43c8)) == 0) {
        FUN_18066d370();
      }
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 8;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < *(int *)(unaff_RBX + 0xbb4));
  }
  lVar2 = FUN_18066e8f0(8,(longlong)*(int *)(unaff_RBX + 0xbb4));
  *(longlong *)(unaff_RDI + 0x43d0) = lVar2;
  if (lVar2 == 0) {
    FUN_18066d370();
  }
  uVar5 = uVar4;
  uVar7 = uVar4;
  if (0 < *(int *)(unaff_RBX + 0xbb4)) {
    do {
      uVar3 = FUN_18066e8f0(8);
      *(undefined8 *)(uVar5 + *(longlong *)(unaff_RDI + 0x43d0)) = uVar3;
      if (*(longlong *)(uVar5 + *(longlong *)(unaff_RDI + 0x43d0)) == 0) {
        FUN_18066d370();
      }
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 8;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < *(int *)(unaff_RBX + 0xbb4));
  }
  lVar2 = FUN_18066e8f0(8,(longlong)*(int *)(unaff_RBX + 0xbb4));
  *(longlong *)(unaff_RDI + 0x43d8) = lVar2;
  if (lVar2 == 0) {
    FUN_18066d370();
  }
  uVar5 = uVar4;
  if (0 < *(int *)(unaff_RBX + 0xbb4)) {
    do {
      uVar3 = FUN_18066e8f0(8);
      *(undefined8 *)(uVar5 + *(longlong *)(unaff_RDI + 0x43d8)) = uVar3;
      if (*(longlong *)(uVar5 + *(longlong *)(unaff_RDI + 0x43d8)) == 0) {
        FUN_18066d370();
      }
      uVar6 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar6;
      uVar5 = uVar5 + 8;
    } while ((int)uVar6 < *(int *)(unaff_RBX + 0xbb4));
  }
  return;
}





