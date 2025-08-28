#include "TaleWorlds.Native.Split.h"

// 99_part_10_part014.c - 5 个函数

// 函数: void FUN_1806ab3e4(uint param_1,longlong param_2,char *param_3,char *param_4,undefined8 param_5,
void FUN_1806ab3e4(uint param_1,longlong param_2,char *param_3,char *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 *param_7,undefined4 param_8,undefined4 param_9,
                  undefined8 param_10)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  longlong *plVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  int iVar12;
  char *pcVar13;
  undefined8 *unaff_RBX;
  longlong unaff_RBP;
  char cVar14;
  undefined8 *unaff_RSI;
  char *pcVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong unaff_R13;
  longlong lVar20;
  undefined4 uVar21;
  undefined4 uStack0000000000000044;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  char cStack00000000000000d0;
  undefined3 uStack00000000000000d1;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  uint in_stack_000000e8;
  int in_stack_000000f0;
  
  uVar8 = in_stack_000000e8;
  uVar18 = (ulonglong)unaff_RSI & 0xffffffff;
  cVar14 = (char)unaff_RSI;
  if (*(uint *)(unaff_RBP + 0x78) != 0) {
    pcVar15 = param_3;
    if (param_4 != (char *)0x0) {
      pcVar15 = param_4;
    }
    do {
      lVar20 = *(longlong *)(*(longlong *)(unaff_RBP + 0x70) + uVar18 * 8);
      pcVar4 = *(char **)(lVar20 + 0x20);
      pcVar13 = param_3;
      if (pcVar4 != (char *)0x0) {
        pcVar13 = pcVar4;
      }
      lVar16 = (longlong)pcVar15 - (longlong)pcVar13;
      do {
        cVar1 = *pcVar13;
        cVar2 = pcVar13[lVar16];
        if (cVar1 != cVar2) break;
        pcVar13 = pcVar13 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        if (lVar20 != 0) goto FUN_1806ab8be;
        break;
      }
      uVar17 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar17;
    } while (uVar17 < *(uint *)(unaff_RBP + 0x78));
    param_2 = *(longlong *)(unaff_R13 + 0x78);
    param_1 = *(uint *)(unaff_R13 + 0x80);
  }
  if ((((in_stack_000000e8 == 0x4d) || ((int)in_stack_000000e8 < 0)) ||
      (param_1 <= in_stack_000000e8)) ||
     (lVar20 = *(longlong *)(param_2 + (ulonglong)in_stack_000000e8 * 8), lVar20 == 0)) {
FUN_1806ab8be:
    *unaff_RBX = &UNK_18094a9a8;
    unaff_RBX[1] = param_3;
    unaff_RBX[2] = param_3;
    *(undefined4 *)(unaff_RBX + 3) = 0xffffffff;
    unaff_RBX[4] = param_3;
    unaff_RBX[5] = param_3;
    *(undefined4 *)(unaff_RBX + 6) = 0xffffffff;
    unaff_RBX[7] = param_3;
    unaff_RBX[8] = param_3;
    *(int *)(unaff_RBX + 9) = (int)unaff_RSI;
    *(undefined4 *)((longlong)unaff_RBX + 0x4c) = 0xffffffff;
    unaff_RBX[10] = unaff_RSI;
    *(char *)(unaff_RBX + 0xb) = cVar14;
    return;
  }
  uStack0000000000000060 = *(undefined4 *)(lVar20 + 8);
  uStack0000000000000064 = *(undefined4 *)(lVar20 + 0xc);
  uStack0000000000000068 = *(undefined4 *)(lVar20 + 0x10);
  uStack000000000000006c = *(undefined4 *)(lVar20 + 0x14);
  param_6._4_4_ = *(int *)(lVar20 + 0x24);
  uVar17 = *(uint *)(lVar20 + 0x20);
  if (*(char *)(lVar20 + 0x69) == cVar14) {
    cStack00000000000000d0 = *(char *)(unaff_RBP + 0x69) != cVar14;
    if (in_stack_000000f0 == 2) {
      if ((param_1 < 2) || (lVar20 = *(longlong *)(param_2 + 8), lVar20 == 0)) goto LAB_1806ab69a;
      cStack00000000000000d0 = true;
    }
    uVar3 = *(uint *)(lVar20 + 0x30);
    uVar6 = *(uint *)(unaff_RBP + 0x30);
    if (*(uint *)(unaff_RBP + 0x30) < uVar3) {
      uVar6 = uVar3;
    }
    *(uint *)(unaff_RBP + 0x30) = uVar6;
    uVar19 = *(int *)(unaff_RBP + 0x2c) + -1 + uVar3 & -uVar3;
    iVar12 = *(int *)(lVar20 + 0x28) + uVar19;
    param_7 = (undefined8 *)CONCAT44(param_7._4_4_,uVar19);
    *(int *)(unaff_RBP + 0x2c) = iVar12;
    *(uint *)(unaff_RBP + 0x28) = iVar12 + -1 + uVar6 & -uVar6;
    uVar3 = *(uint *)(lVar20 + 0x50);
    uVar6 = *(uint *)(unaff_RBP + 0x50);
    if (*(uint *)(unaff_RBP + 0x50) < uVar3) {
      uVar6 = uVar3;
    }
    *(uint *)(unaff_RBP + 0x50) = uVar6;
    param_6._0_4_ = *(int *)(unaff_RBP + 0x4c) + -1 + uVar3 & -uVar3;
    iVar12 = *(int *)(lVar20 + 0x48) + (uint)param_6;
    *(int *)(unaff_RBP + 0x4c) = iVar12;
    *(uint *)(unaff_RBP + 0x48) = iVar12 + -1 + uVar6 & -uVar6;
    uVar21 = FUN_1806b15e0(uStack0000000000000060,unaff_RBP + 0x28,unaff_RBP + 0x80,lVar20 + 0x80,
                           uVar19);
    FUN_1806b15e0(uVar21,unaff_RBP + 0x48,unaff_RBP + 0x90,lVar20 + 0x90,(uint)param_6);
    *(undefined1 *)(lVar20 + 0x68) = 1;
    param_8 = *(undefined4 *)(unaff_RBP + 8);
    uStack0000000000000044 = *(undefined4 *)(unaff_RBP + 0xc);
    param_9 = *(undefined4 *)(unaff_RBP + 0x10);
    uStack000000000000004c = *(undefined4 *)(unaff_RBP + 0x14);
    uVar21 = *(undefined4 *)(unaff_RBP + 0x18);
    *(char *)(unaff_RBP + 0x69) = cStack00000000000000d0;
    _cStack00000000000000d0 = *(undefined4 *)(unaff_R13 + 0x90);
    puVar9 = (undefined8 *)
             (**(code **)(*_DAT_180be0050 + 8))
                       (_DAT_180be0050,0x68,&UNK_18094b0d0,&UNK_18094b020,0x36a);
    if (puVar9 != (undefined8 *)0x0) {
      plVar5 = *(longlong **)(unaff_R13 + 0x98);
      *(undefined4 *)(puVar9 + 3) = uVar21;
      *(uint *)(puVar9 + 6) = uVar8;
      puVar9[1] = CONCAT44(uStack0000000000000044,param_8);
      puVar9[2] = CONCAT44(uStack000000000000004c,param_9);
      puVar9[4] = in_stack_000000d8;
      puVar9[5] = in_stack_000000e0;
      *(int *)(puVar9 + 9) = in_stack_000000f0;
      *(undefined4 *)((longlong)puVar9 + 0x4c) = _cStack00000000000000d0;
      *(undefined4 *)(puVar9 + 10) = param_7._0_4_;
      *(uint *)((longlong)puVar9 + 0x54) = (uint)param_6;
      *puVar9 = &UNK_18094aee8;
      *(undefined4 *)(puVar9 + 7) = uStack0000000000000060;
      *(undefined4 *)((longlong)puVar9 + 0x3c) = uStack0000000000000064;
      *(undefined4 *)(puVar9 + 8) = uStack0000000000000068;
      *(undefined4 *)((longlong)puVar9 + 0x44) = uStack000000000000006c;
      puVar9[0xb] = unaff_RSI;
      puVar9[0xc] = unaff_RSI;
      uVar10 = (**(code **)(*plVar5 + 0x18))(plVar5,puVar9[4],&stack0x000000d0);
      puVar9[4] = uVar10;
      unaff_RSI = puVar9;
    }
    plVar5 = (longlong *)(unaff_R13 + 0x88);
    param_7 = unaff_RSI;
    if (*(uint *)(unaff_R13 + 0x90) < (*(uint *)(unaff_R13 + 0x94) & 0x7fffffff)) {
      *(undefined8 **)(*plVar5 + (ulonglong)*(uint *)(unaff_R13 + 0x90) * 8) = unaff_RSI;
      *(int *)(unaff_R13 + 0x90) = *(int *)(unaff_R13 + 0x90) + 1;
      iVar12 = *(int *)(unaff_R13 + 0x90);
    }
    else {
      FUN_1806adf60(plVar5,&param_7);
      iVar12 = *(int *)(unaff_R13 + 0x90);
    }
    _uStack0000000000000060 = *(undefined8 *)(unaff_RBP + 8);
    _uStack0000000000000068 = *(undefined8 *)(unaff_RBP + 0x10);
    lVar20 = *(longlong *)(*plVar5 + (ulonglong)(iVar12 - 1) * 8);
    param_10 = *(undefined8 *)(lVar20 + 0x20);
    in_stack_00000070 = param_10;
    puVar11 = (undefined4 *)FUN_1806aae60(unaff_R13 + 0x40,&stack0x00000060,&stack0x000000d0);
    if (cStack00000000000000d0 == '\0') {
      *puVar11 = uStack0000000000000060;
      puVar11[1] = uStack0000000000000064;
      puVar11[2] = uStack0000000000000068;
      puVar11[3] = uStack000000000000006c;
      *(longlong *)(puVar11 + 6) = lVar20;
      *(undefined8 *)(puVar11 + 4) = in_stack_00000070;
    }
    param_7 = *(undefined8 **)(*plVar5 + (ulonglong)(*(int *)(unaff_R13 + 0x90) - 1) * 8);
    if (*(uint *)(unaff_RBP + 0x78) < (*(uint *)(unaff_RBP + 0x7c) & 0x7fffffff)) {
      *(undefined8 **)(*(longlong *)(unaff_RBP + 0x70) + (ulonglong)*(uint *)(unaff_RBP + 0x78) * 8)
           = param_7;
      *(int *)(unaff_RBP + 0x78) = *(int *)(unaff_RBP + 0x78) + 1;
    }
    else {
      FUN_1806adf60();
    }
    if (*(int *)(unaff_RBP + 0x78) == 1) {
      *(int *)(unaff_RBP + 0x24) = param_6._4_4_;
      *(uint *)(unaff_RBP + 0x20) = uVar17;
    }
    else {
      if (((int)uVar17 < 1) || (*(uint *)(unaff_RBP + 0x2c) % uVar17 != 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if ((-1 < *(int *)(unaff_RBP + 0x24)) &&
         ((((param_6._4_4_ < 0 || (*(int *)(unaff_RBP + 0x24) != param_6._4_4_)) ||
           (uVar8 - 0x4e < 2)) || (!bVar7)))) {
        *(undefined4 *)(unaff_RBP + 0x24) = 0xffffffff;
      }
      if ((-1 < (int)*(uint *)(unaff_RBP + 0x20)) &&
         ((((int)uVar17 < 0 || (*(uint *)(unaff_RBP + 0x20) != uVar17)) ||
          ((uVar8 - 0x4e < 2 || (!bVar7)))))) {
        *(undefined4 *)(unaff_RBP + 0x20) = 0xffffffff;
      }
    }
    lVar20 = *(longlong *)(*plVar5 + (ulonglong)(*(int *)(unaff_R13 + 0x90) - 1) * 8);
    *unaff_RBX = &UNK_18094a9a8;
    uVar10 = *(undefined8 *)(lVar20 + 0x10);
    unaff_RBX[1] = *(undefined8 *)(lVar20 + 8);
    unaff_RBX[2] = uVar10;
    *(undefined4 *)(unaff_RBX + 3) = *(undefined4 *)(lVar20 + 0x18);
    unaff_RBX[4] = *(undefined8 *)(lVar20 + 0x20);
    unaff_RBX[5] = *(undefined8 *)(lVar20 + 0x28);
    *(undefined4 *)(unaff_RBX + 6) = *(undefined4 *)(lVar20 + 0x30);
    uVar10 = *(undefined8 *)(lVar20 + 0x40);
    unaff_RBX[7] = *(undefined8 *)(lVar20 + 0x38);
    unaff_RBX[8] = uVar10;
    *(undefined4 *)(unaff_RBX + 9) = *(undefined4 *)(lVar20 + 0x48);
    *(undefined4 *)((longlong)unaff_RBX + 0x4c) = *(undefined4 *)(lVar20 + 0x4c);
    *(undefined4 *)(unaff_RBX + 10) = *(undefined4 *)(lVar20 + 0x50);
    *(undefined4 *)((longlong)unaff_RBX + 0x54) = *(undefined4 *)(lVar20 + 0x54);
    *(undefined1 *)(unaff_RBX + 0xb) = 1;
  }
  else {
LAB_1806ab69a:
    *unaff_RBX = &UNK_18094a9a8;
    unaff_RBX[1] = param_3;
    unaff_RBX[2] = param_3;
    *(undefined4 *)(unaff_RBX + 3) = 0xffffffff;
    unaff_RBX[4] = param_3;
    unaff_RBX[5] = param_3;
    *(undefined4 *)(unaff_RBX + 6) = 0xffffffff;
    unaff_RBX[7] = param_3;
    unaff_RBX[8] = param_3;
    *(int *)(unaff_RBX + 9) = (int)unaff_RSI;
    *(undefined4 *)((longlong)unaff_RBX + 0x4c) = 0xffffffff;
    unaff_RBX[10] = unaff_RSI;
    *(char *)(unaff_RBX + 0xb) = cVar14;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806ab4af(uint param_1,longlong param_2,undefined8 param_3)
void FUN_1806ab4af(uint param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  int in_EAX;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined8 *unaff_RBX;
  longlong unaff_RBP;
  char cVar11;
  undefined8 *unaff_RSI;
  uint uVar12;
  longlong unaff_R13;
  longlong unaff_R14;
  int unaff_R15D;
  undefined4 uVar13;
  undefined8 in_XMM0_Qa;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  uint uStack0000000000000030;
  int iStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  char cStack00000000000000d0;
  undefined3 uStack00000000000000d1;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  int in_stack_000000f0;
  
  uStack0000000000000064 = (undefined4)((ulonglong)in_XMM0_Qa >> 0x20);
  uStack0000000000000060 = (undefined4)in_XMM0_Qa;
  uVar1 = *(uint *)(unaff_R14 + 0x20);
  cVar11 = (char)unaff_RSI;
  if (*(char *)(unaff_R14 + 0x69) == cVar11) {
    cStack00000000000000d0 = *(char *)(unaff_RBP + 0x69) != cVar11;
    if (in_stack_000000f0 == 2) {
      if ((param_1 < 2) || (unaff_R14 = *(longlong *)(param_2 + 8), unaff_R14 == 0))
      goto LAB_1806ab69a;
      cStack00000000000000d0 = true;
    }
    uVar2 = *(uint *)(unaff_R14 + 0x30);
    uVar5 = *(uint *)(unaff_RBP + 0x30);
    if (*(uint *)(unaff_RBP + 0x30) < uVar2) {
      uVar5 = uVar2;
    }
    *(uint *)(unaff_RBP + 0x30) = uVar5;
    uVar12 = *(int *)(unaff_RBP + 0x2c) + -1 + uVar2 & -uVar2;
    iVar10 = *(int *)(unaff_R14 + 0x28) + uVar12;
    _uStack0000000000000038 = (undefined8 *)CONCAT44(uStack000000000000003c,uVar12);
    *(int *)(unaff_RBP + 0x2c) = iVar10;
    *(uint *)(unaff_RBP + 0x28) = iVar10 + -1 + uVar5 & -uVar5;
    uVar2 = *(uint *)(unaff_R14 + 0x50);
    uVar5 = *(uint *)(unaff_RBP + 0x50);
    if (*(uint *)(unaff_RBP + 0x50) < uVar2) {
      uVar5 = uVar2;
    }
    *(uint *)(unaff_RBP + 0x50) = uVar5;
    uStack0000000000000030 = *(int *)(unaff_RBP + 0x4c) + -1 + uVar2 & -uVar2;
    iVar10 = *(int *)(unaff_R14 + 0x48) + uStack0000000000000030;
    *(int *)(unaff_RBP + 0x4c) = iVar10;
    *(uint *)(unaff_RBP + 0x48) = iVar10 + -1 + uVar5 & -uVar5;
    iStack0000000000000034 = in_EAX;
    uStack0000000000000068 = in_XMM0_Dc;
    uStack000000000000006c = in_XMM0_Dd;
    uVar13 = FUN_1806b15e0(uStack0000000000000060,unaff_RBP + 0x28,unaff_RBP + 0x80,unaff_R14 + 0x80
                           ,uVar12);
    FUN_1806b15e0(uVar13,unaff_RBP + 0x48,unaff_RBP + 0x90,unaff_R14 + 0x90,uStack0000000000000030);
    *(undefined1 *)(unaff_R14 + 0x68) = 1;
    in_stack_00000040 = *(undefined4 *)(unaff_RBP + 8);
    uStack0000000000000044 = *(undefined4 *)(unaff_RBP + 0xc);
    in_stack_00000048 = *(undefined4 *)(unaff_RBP + 0x10);
    uStack000000000000004c = *(undefined4 *)(unaff_RBP + 0x14);
    uVar13 = *(undefined4 *)(unaff_RBP + 0x18);
    *(char *)(unaff_RBP + 0x69) = cStack00000000000000d0;
    _cStack00000000000000d0 = *(undefined4 *)(unaff_R13 + 0x90);
    puVar7 = (undefined8 *)
             (**(code **)(*_DAT_180be0050 + 8))
                       (_DAT_180be0050,0x68,&UNK_18094b0d0,&UNK_18094b020,0x36a);
    if (puVar7 != (undefined8 *)0x0) {
      plVar3 = *(longlong **)(unaff_R13 + 0x98);
      *(undefined4 *)(puVar7 + 3) = uVar13;
      *(int *)(puVar7 + 6) = unaff_R15D;
      puVar7[1] = CONCAT44(uStack0000000000000044,in_stack_00000040);
      puVar7[2] = CONCAT44(uStack000000000000004c,in_stack_00000048);
      puVar7[4] = in_stack_000000d8;
      puVar7[5] = in_stack_000000e0;
      *(int *)(puVar7 + 9) = in_stack_000000f0;
      *(undefined4 *)((longlong)puVar7 + 0x4c) = _cStack00000000000000d0;
      *(undefined4 *)(puVar7 + 10) = uStack0000000000000038;
      *(uint *)((longlong)puVar7 + 0x54) = uStack0000000000000030;
      *puVar7 = &UNK_18094aee8;
      *(undefined4 *)(puVar7 + 7) = uStack0000000000000060;
      *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack0000000000000064;
      *(undefined4 *)(puVar7 + 8) = uStack0000000000000068;
      *(undefined4 *)((longlong)puVar7 + 0x44) = uStack000000000000006c;
      puVar7[0xb] = unaff_RSI;
      puVar7[0xc] = unaff_RSI;
      uVar8 = (**(code **)(*plVar3 + 0x18))(plVar3,puVar7[4],&stack0x000000d0);
      puVar7[4] = uVar8;
      unaff_RSI = puVar7;
    }
    plVar3 = (longlong *)(unaff_R13 + 0x88);
    _uStack0000000000000038 = unaff_RSI;
    if (*(uint *)(unaff_R13 + 0x90) < (*(uint *)(unaff_R13 + 0x94) & 0x7fffffff)) {
      *(undefined8 **)(*plVar3 + (ulonglong)*(uint *)(unaff_R13 + 0x90) * 8) = unaff_RSI;
      *(int *)(unaff_R13 + 0x90) = *(int *)(unaff_R13 + 0x90) + 1;
      iVar10 = *(int *)(unaff_R13 + 0x90);
    }
    else {
      FUN_1806adf60(plVar3,&stack0x00000038);
      iVar10 = *(int *)(unaff_R13 + 0x90);
    }
    _uStack0000000000000060 = *(undefined8 *)(unaff_RBP + 8);
    _uStack0000000000000068 = *(undefined8 *)(unaff_RBP + 0x10);
    lVar4 = *(longlong *)(*plVar3 + (ulonglong)(iVar10 - 1) * 8);
    in_stack_00000050 = *(undefined8 *)(lVar4 + 0x20);
    in_stack_00000070 = in_stack_00000050;
    puVar9 = (undefined4 *)FUN_1806aae60(unaff_R13 + 0x40,&stack0x00000060,&stack0x000000d0);
    if (cStack00000000000000d0 == '\0') {
      *puVar9 = uStack0000000000000060;
      puVar9[1] = uStack0000000000000064;
      puVar9[2] = uStack0000000000000068;
      puVar9[3] = uStack000000000000006c;
      *(longlong *)(puVar9 + 6) = lVar4;
      *(undefined8 *)(puVar9 + 4) = in_stack_00000070;
    }
    _uStack0000000000000038 =
         *(undefined8 **)(*plVar3 + (ulonglong)(*(int *)(unaff_R13 + 0x90) - 1) * 8);
    if (*(uint *)(unaff_RBP + 0x78) < (*(uint *)(unaff_RBP + 0x7c) & 0x7fffffff)) {
      *(undefined8 **)(*(longlong *)(unaff_RBP + 0x70) + (ulonglong)*(uint *)(unaff_RBP + 0x78) * 8)
           = _uStack0000000000000038;
      *(int *)(unaff_RBP + 0x78) = *(int *)(unaff_RBP + 0x78) + 1;
    }
    else {
      FUN_1806adf60();
    }
    if (*(int *)(unaff_RBP + 0x78) == 1) {
      *(int *)(unaff_RBP + 0x24) = iStack0000000000000034;
      *(uint *)(unaff_RBP + 0x20) = uVar1;
    }
    else {
      if (((int)uVar1 < 1) || (*(uint *)(unaff_RBP + 0x2c) % uVar1 != 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((-1 < *(int *)(unaff_RBP + 0x24)) &&
         ((((iStack0000000000000034 < 0 || (*(int *)(unaff_RBP + 0x24) != iStack0000000000000034))
           || (unaff_R15D - 0x4eU < 2)) || (!bVar6)))) {
        *(undefined4 *)(unaff_RBP + 0x24) = 0xffffffff;
      }
      if ((-1 < (int)*(uint *)(unaff_RBP + 0x20)) &&
         ((((int)uVar1 < 0 || (*(uint *)(unaff_RBP + 0x20) != uVar1)) ||
          ((unaff_R15D - 0x4eU < 2 || (!bVar6)))))) {
        *(undefined4 *)(unaff_RBP + 0x20) = 0xffffffff;
      }
    }
    lVar4 = *(longlong *)(*plVar3 + (ulonglong)(*(int *)(unaff_R13 + 0x90) - 1) * 8);
    *unaff_RBX = &UNK_18094a9a8;
    uVar8 = *(undefined8 *)(lVar4 + 0x10);
    unaff_RBX[1] = *(undefined8 *)(lVar4 + 8);
    unaff_RBX[2] = uVar8;
    *(undefined4 *)(unaff_RBX + 3) = *(undefined4 *)(lVar4 + 0x18);
    unaff_RBX[4] = *(undefined8 *)(lVar4 + 0x20);
    unaff_RBX[5] = *(undefined8 *)(lVar4 + 0x28);
    *(undefined4 *)(unaff_RBX + 6) = *(undefined4 *)(lVar4 + 0x30);
    uVar8 = *(undefined8 *)(lVar4 + 0x40);
    unaff_RBX[7] = *(undefined8 *)(lVar4 + 0x38);
    unaff_RBX[8] = uVar8;
    *(undefined4 *)(unaff_RBX + 9) = *(undefined4 *)(lVar4 + 0x48);
    *(undefined4 *)((longlong)unaff_RBX + 0x4c) = *(undefined4 *)(lVar4 + 0x4c);
    *(undefined4 *)(unaff_RBX + 10) = *(undefined4 *)(lVar4 + 0x50);
    *(undefined4 *)((longlong)unaff_RBX + 0x54) = *(undefined4 *)(lVar4 + 0x54);
    *(undefined1 *)(unaff_RBX + 0xb) = 1;
  }
  else {
LAB_1806ab69a:
    *unaff_RBX = &UNK_18094a9a8;
    unaff_RBX[1] = param_3;
    unaff_RBX[2] = param_3;
    *(undefined4 *)(unaff_RBX + 3) = 0xffffffff;
    unaff_RBX[4] = param_3;
    unaff_RBX[5] = param_3;
    *(undefined4 *)(unaff_RBX + 6) = 0xffffffff;
    unaff_RBX[7] = param_3;
    unaff_RBX[8] = param_3;
    *(int *)(unaff_RBX + 9) = (int)unaff_RSI;
    *(undefined4 *)((longlong)unaff_RBX + 0x4c) = 0xffffffff;
    unaff_RBX[10] = unaff_RSI;
    *(char *)(unaff_RBX + 0xb) = cVar11;
  }
  return;
}






// 函数: void FUN_1806ab6e4(void)
void FUN_1806ab6e4(void)

{
  return;
}






// 函数: void FUN_1806ab70c(void)
void FUN_1806ab70c(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 *unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  uint unaff_R12D;
  longlong unaff_R13;
  int unaff_R15D;
  longlong in_stack_00000030;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  char in_stack_000000d0;
  
  plVar1 = (longlong *)(unaff_R13 + 0x88);
  if (*(uint *)(unaff_R13 + 0x90) < (*(uint *)(unaff_R13 + 0x94) & 0x7fffffff)) {
    *(undefined8 *)(*plVar1 + (ulonglong)*(uint *)(unaff_R13 + 0x90) * 8) = unaff_RSI;
    *(int *)(unaff_R13 + 0x90) = *(int *)(unaff_R13 + 0x90) + 1;
    iVar5 = *(int *)(unaff_R13 + 0x90);
  }
  else {
    FUN_1806adf60(plVar1,&stack0x00000038);
    iVar5 = *(int *)(unaff_R13 + 0x90);
  }
  _uStack0000000000000060 = *(undefined8 *)(unaff_RBP + 8);
  _uStack0000000000000068 = *(undefined8 *)(unaff_RBP + 0x10);
  lVar2 = *(longlong *)(*plVar1 + (ulonglong)(iVar5 - 1) * 8);
  in_stack_00000070 = *(undefined8 *)(lVar2 + 0x20);
  puVar6 = (undefined4 *)FUN_1806aae60(unaff_R13 + 0x40,&stack0x00000060,&stack0x000000d0);
  if (in_stack_000000d0 == '\0') {
    *puVar6 = uStack0000000000000060;
    puVar6[1] = uStack0000000000000064;
    puVar6[2] = uStack0000000000000068;
    puVar6[3] = uStack000000000000006c;
    *(longlong *)(puVar6 + 6) = lVar2;
    *(undefined8 *)(puVar6 + 4) = in_stack_00000070;
  }
  if (*(uint *)(unaff_RBP + 0x78) < (*(uint *)(unaff_RBP + 0x7c) & 0x7fffffff)) {
    *(undefined8 *)(*(longlong *)(unaff_RBP + 0x70) + (ulonglong)*(uint *)(unaff_RBP + 0x78) * 8) =
         *(undefined8 *)(*plVar1 + (ulonglong)(*(int *)(unaff_R13 + 0x90) - 1) * 8);
    *(int *)(unaff_RBP + 0x78) = *(int *)(unaff_RBP + 0x78) + 1;
  }
  else {
    FUN_1806adf60();
  }
  if (*(int *)(unaff_RBP + 0x78) == 1) {
    *(int *)(unaff_RBP + 0x24) = in_stack_00000030._4_4_;
    *(uint *)(unaff_RBP + 0x20) = unaff_R12D;
  }
  else {
    if (((int)unaff_R12D < 1) || (*(uint *)(unaff_RBP + 0x2c) % unaff_R12D != 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((-1 < *(int *)(unaff_RBP + 0x24)) &&
       ((((in_stack_00000030 < 0 || (*(int *)(unaff_RBP + 0x24) != in_stack_00000030._4_4_)) ||
         (unaff_R15D - 0x4eU < 2)) || (!bVar4)))) {
      *(undefined4 *)(unaff_RBP + 0x24) = 0xffffffff;
    }
    if ((-1 < (int)*(uint *)(unaff_RBP + 0x20)) &&
       ((((int)unaff_R12D < 0 || (*(uint *)(unaff_RBP + 0x20) != unaff_R12D)) ||
        ((unaff_R15D - 0x4eU < 2 || (!bVar4)))))) {
      *(undefined4 *)(unaff_RBP + 0x20) = 0xffffffff;
    }
  }
  lVar2 = *(longlong *)(*plVar1 + (ulonglong)(*(int *)(unaff_R13 + 0x90) - 1) * 8);
  *unaff_RBX = &UNK_18094a9a8;
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  unaff_RBX[1] = *(undefined8 *)(lVar2 + 8);
  unaff_RBX[2] = uVar3;
  *(undefined4 *)(unaff_RBX + 3) = *(undefined4 *)(lVar2 + 0x18);
  unaff_RBX[4] = *(undefined8 *)(lVar2 + 0x20);
  unaff_RBX[5] = *(undefined8 *)(lVar2 + 0x28);
  *(undefined4 *)(unaff_RBX + 6) = *(undefined4 *)(lVar2 + 0x30);
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  unaff_RBX[7] = *(undefined8 *)(lVar2 + 0x38);
  unaff_RBX[8] = uVar3;
  *(undefined4 *)(unaff_RBX + 9) = *(undefined4 *)(lVar2 + 0x48);
  *(undefined4 *)((longlong)unaff_RBX + 0x4c) = *(undefined4 *)(lVar2 + 0x4c);
  *(undefined4 *)(unaff_RBX + 10) = *(undefined4 *)(lVar2 + 0x50);
  *(undefined4 *)((longlong)unaff_RBX + 0x54) = *(undefined4 *)(lVar2 + 0x54);
  *(undefined1 *)(unaff_RBX + 0xb) = 1;
  return;
}






// 函数: void FUN_1806ab8be(undefined8 param_1,undefined8 param_2,undefined8 param_3)
void FUN_1806ab8be(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_RBX;
  undefined8 unaff_RSI;
  
  *unaff_RBX = &UNK_18094a9a8;
  unaff_RBX[1] = param_3;
  unaff_RBX[2] = param_3;
  *(undefined4 *)(unaff_RBX + 3) = 0xffffffff;
  unaff_RBX[4] = param_3;
  unaff_RBX[5] = param_3;
  *(undefined4 *)(unaff_RBX + 6) = 0xffffffff;
  unaff_RBX[7] = param_3;
  unaff_RBX[8] = param_3;
  *(int *)(unaff_RBX + 9) = (int)unaff_RSI;
  *(undefined4 *)((longlong)unaff_RBX + 0x4c) = 0xffffffff;
  unaff_RBX[10] = unaff_RSI;
  *(char *)(unaff_RBX + 0xb) = (char)unaff_RSI;
  return;
}






