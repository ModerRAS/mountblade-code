#include "TaleWorlds.Native.Split.h"

// 99_part_03_part100.c - 20 个函数

// 函数: void FUN_1802561d0(longlong *param_1)
void FUN_1802561d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  longlong lStack_30;
  longlong lStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar3 = (param_1[0x13] - param_1[0x12]) / 0x30;
  lVar2 = 0;
  if (0 < (int)uVar3) {
    uVar3 = uVar3 & 0xffffffff;
    lVar4 = lVar2;
    do {
      lVar1 = FUN_180087100(_DAT_180c868a8,param_1[0x12] + lVar4);
      if (lVar1 == 0) {
        puVar5 = &DAT_18098bc73;
        if ((undefined *)param_1[0xe] != (undefined *)0x0) {
          puVar5 = (undefined *)param_1[0xe];
        }
                    // WARNING: Subroutine does not return
        FUN_180062300(_DAT_180c86928,&UNK_180a14ad0,puVar5);
      }
      FUN_180256390(lVar1,param_1,param_1[0x12] + 0x10 + lVar4,param_1[0x12] + 0x20 + lVar4);
      lVar4 = lVar4 + 0x30;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  lStack_30 = 0;
  lStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0x1a;
  (**(code **)(*param_1 + 0x88))(param_1,&lStack_30);
  uVar3 = (lStack_28 - lStack_30) / 0x30;
  if (0 < (int)uVar3) {
    uVar3 = uVar3 & 0xffffffff;
    do {
      lVar4 = FUN_180087100(_DAT_180c868a8,lVar2 + lStack_30);
      if (lVar4 == 0) {
        puVar5 = &DAT_18098bc73;
        if ((undefined *)param_1[0xe] != (undefined *)0x0) {
          puVar5 = (undefined *)param_1[0xe];
        }
                    // WARNING: Subroutine does not return
        FUN_180062300(_DAT_180c86928,&UNK_180a14ad0,puVar5);
      }
      FUN_180256390(lVar4,param_1,lStack_30 + 0x10 + lVar2,lStack_30 + 0x20 + lVar2,uVar6);
      lVar2 = lVar2 + 0x30;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (lStack_30 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180256390(longlong param_1,ulonglong param_2,longlong *param_3,longlong *param_4)
void FUN_180256390(longlong param_1,ulonglong param_2,longlong *param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  uint uVar15;
  undefined4 *puVar17;
  longlong lVar18;
  undefined4 *puVar19;
  undefined1 auStackX_8 [8];
  ulonglong uStackX_10;
  undefined4 *puVar16;
  
  puVar13 = (undefined8 *)(param_1 + 0x38);
  puVar10 = *(undefined8 **)(param_1 + 0x48);
  puVar11 = puVar13;
  while (puVar5 = puVar10, puVar5 != (undefined8 *)0x0) {
    if ((ulonglong)puVar5[4] < param_2) {
      puVar10 = (undefined8 *)*puVar5;
    }
    else {
      puVar10 = (undefined8 *)puVar5[1];
      puVar11 = puVar5;
    }
  }
  uStackX_10 = param_2;
  if ((puVar11 == puVar13) || (param_2 < (ulonglong)puVar11[4])) {
    puVar11 = (undefined8 *)FUN_180179770(puVar13,auStackX_8,param_3,puVar11,&uStackX_10);
    puVar11 = (undefined8 *)*puVar11;
  }
  puVar17 = (undefined4 *)puVar11[6];
  puVar12 = (undefined4 *)0x0;
  puVar19 = (undefined4 *)puVar11[5];
  lVar18 = (longlong)puVar17 - (longlong)puVar19 >> 5;
  puVar16 = puVar12;
  if (0 < (int)lVar18) {
    do {
      plVar14 = (longlong *)(puVar19 + (longlong)(int)puVar16 * 8);
      if ((((*plVar14 == *param_4) && (plVar14[1] == param_4[1])) && (plVar14[2] == *param_3)) &&
         (plVar14[3] == param_3[1])) {
        return;
      }
      uVar15 = (int)puVar16 + 1;
      puVar16 = (undefined4 *)(ulonglong)uVar15;
    } while ((int)uVar15 < (int)lVar18);
  }
  lVar6 = *param_4;
  uVar1 = *(undefined4 *)((longlong)param_4 + 4);
  lVar7 = param_4[1];
  uVar2 = *(undefined4 *)((longlong)param_4 + 0xc);
  lVar8 = *param_3;
  uVar3 = *(undefined4 *)((longlong)param_3 + 4);
  lVar9 = param_3[1];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  if (puVar17 < (undefined4 *)puVar11[7]) {
    puVar11[6] = puVar17 + 8;
    *puVar17 = (int)lVar6;
    puVar17[1] = uVar1;
    puVar17[2] = (int)lVar7;
    puVar17[3] = uVar2;
    puVar17[4] = (int)lVar8;
    puVar17[5] = uVar3;
    puVar17[6] = (int)lVar9;
    puVar17[7] = uVar4;
    return;
  }
  if (lVar18 == 0) {
    lVar18 = 1;
  }
  else {
    lVar18 = lVar18 * 2;
    if (lVar18 == 0) goto LAB_1802564ba;
  }
  puVar12 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,lVar18 << 5,*(undefined1 *)(puVar11 + 8));
  puVar19 = (undefined4 *)puVar11[5];
  puVar17 = (undefined4 *)puVar11[6];
LAB_1802564ba:
  if (puVar19 != puVar17) {
                    // WARNING: Subroutine does not return
    memmove(puVar12,puVar19,(longlong)puVar17 - (longlong)puVar19);
  }
  *puVar12 = (int)lVar6;
  puVar12[1] = uVar1;
  puVar12[2] = (int)lVar7;
  puVar12[3] = uVar2;
  puVar12[4] = (int)lVar8;
  puVar12[5] = uVar3;
  puVar12[6] = (int)lVar9;
  puVar12[7] = uVar4;
  if (puVar11[5] == 0) {
    puVar11[5] = puVar12;
    puVar11[7] = puVar12 + lVar18 * 8;
    puVar11[6] = puVar12 + 8;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_180256530(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180256530(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x30) = param_4;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}






// 函数: void FUN_18025655b(void)
void FUN_18025655b(void)

{
  longlong lVar1;
  longlong unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 *unaff_RDI;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  
  lVar1 = __RTCastToVoid();
  (**(code **)*unaff_RDI)();
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar1);
  }
  *(undefined8 *)(unaff_RBX + 0x30) = unaff_RBP;
  *(undefined8 *)(unaff_RBX + 0x20) = unaff_R15;
  *(undefined8 *)(unaff_RBX + 0x28) = unaff_R14;
  return;
}






// 函数: void FUN_180256585(void)
void FUN_180256585(void)

{
  longlong unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  
  *(undefined8 *)(unaff_RBX + 0x30) = unaff_RBP;
  *(undefined8 *)(unaff_RBX + 0x20) = unaff_R15;
  *(undefined8 *)(unaff_RBX + 0x28) = unaff_R14;
  return;
}



undefined8 * FUN_1802565b0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = &UNK_180a14c60;
  *param_1 = &UNK_180a14bb8;
  *(undefined4 *)(param_1 + 1) = param_3;
  uVar2 = param_2[1];
  *(undefined8 *)((longlong)param_1 + 0xc) = *param_2;
  *(undefined8 *)((longlong)param_1 + 0x14) = uVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffffffffffff;
  puVar1 = param_1 + 7;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x1a;
  *puVar1 = puVar1;
  param_1[8] = puVar1;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xd] = &UNK_18098bcb0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xd] = &UNK_180a3c3e0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x1a;
  return param_1;
}



undefined8 FUN_180256680(undefined8 param_1,ulonglong param_2)

{
  FUN_1802566c0();
  if ((param_2 & 1) != 0) {
    free(param_1,0xb0);
  }
  return param_1;
}






// 函数: void FUN_1802566c0(undefined8 *param_1)
void FUN_1802566c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &UNK_180a14bb8;
  puVar1 = (undefined8 *)param_1[0x11];
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar2);
    }
  }
  param_1[0x11] = 0;
  if (param_1[0x12] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xd] = &UNK_180a3c3e0;
  if (param_1[0xe] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xd] = &UNK_18098bcb0;
  FUN_180179f00(param_1 + 7,param_1[9]);
  *param_1 = &UNK_180a14c60;
  return;
}



undefined4
FUN_1802567b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStackX_8 [8];
  
  puVar1 = (undefined8 *)param_1[2];
  puVar4 = puVar1;
  puVar6 = param_1;
  puVar3 = param_1;
  if (puVar1 != (undefined8 *)0x0) {
    do {
      iVar2 = memcmp(puVar4 + 4,param_2,0x10);
      if (iVar2 < 0) {
        puVar5 = (undefined8 *)*puVar4;
      }
      else {
        puVar5 = (undefined8 *)puVar4[1];
        puVar6 = puVar4;
      }
      puVar4 = puVar5;
    } while (puVar5 != (undefined8 *)0x0);
    if ((puVar6 != param_1) && (iVar2 = memcmp(param_2,puVar6 + 4,0x10), -1 < iVar2)) {
      FUN_180626f80(&UNK_180a14b28);
      return 0;
    }
  }
  while (puVar4 = puVar1, puVar4 != (undefined8 *)0x0) {
    iVar2 = memcmp(puVar4 + 4,param_2,0x10);
    if (iVar2 < 0) {
      puVar1 = (undefined8 *)*puVar4;
    }
    else {
      puVar1 = (undefined8 *)puVar4[1];
      puVar3 = puVar4;
    }
  }
  if ((puVar3 == param_1) || (iVar2 = memcmp(param_2,puVar3 + 4,0x10), iVar2 < 0)) {
    puVar3 = (undefined8 *)FUN_1801798f0(param_1,auStackX_8);
    puVar3 = (undefined8 *)*puVar3;
  }
  puVar3[6] = param_4;
  puVar3[7] = param_3;
  return 1;
}






// 函数: void FUN_1802568d0(longlong param_1)
void FUN_1802568d0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *(undefined **)(param_1 + 0x60) = &UNK_18098bcb0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_1800ba100(param_1);
  if ((1 < *(ulonglong *)(param_1 + 0x10)) &&
     (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 != (undefined8 *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180256940(longlong param_1)
void FUN_180256940(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined1 auStack_e8 [32];
  undefined8 uStack_c8;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [136];
  ulonglong uStack_18;
  
  uStack_c8 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1 + 0x178) == '\0') {
    puStack_b8 = &UNK_1809fcc28;
    puStack_b0 = auStack_a0;
    uStack_a8 = 0;
    auStack_a0[0] = 0;
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 != -1) {
      if ((iVar1 < 0) ||
         (lVar2 = *(longlong *)(*_DAT_180c86870 + 0x8a8),
         (ulonglong)(*(longlong *)(*_DAT_180c86870 + 0x8b0) - lVar2 >> 5) <
         (ulonglong)(longlong)iVar1)) {
        lVar2 = FUN_180628ca0();
      }
      else {
        lVar2 = (longlong)iVar1 * 0x20 + lVar2;
      }
      puVar3 = &DAT_18098bc73;
      if (*(undefined **)(lVar2 + 8) != (undefined *)0x0) {
        puVar3 = *(undefined **)(lVar2 + 8);
      }
      (**(code **)(puStack_b8 + 0x10))(&puStack_b8,puVar3);
      FUN_1804146b0();
    }
    puStack_b8 = &UNK_18098bcb0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180256a60(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)
void FUN_180256a60(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 8) = param_2;
  if (param_4 == iVar1) {
    if (iVar1 < 1) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    lVar3 = (longlong)iVar1 * 0x45;
  }
  else {
    if (*(longlong *)(param_1 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uVar2 = 0;
    *(int *)(param_1 + 0x20) = param_4;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (param_4 < 1) {
      return;
    }
    lVar3 = (longlong)param_4 * 0x45;
    if ((longlong)param_4 != 0) {
      uVar2 = FUN_18062b420(_DAT_180c8ed18,lVar3,0x1a);
    }
    *(undefined8 *)(param_1 + 0x18) = uVar2;
  }
                    // WARNING: Subroutine does not return
  memcpy(uVar2,param_3,lVar3);
}






// 函数: void FUN_180256af0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)
void FUN_180256af0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = *param_1;
  if (*(code **)(lVar3 + 0x28) == (code *)&UNK_180257d20) {
    lVar2 = param_1[3];
  }
  else {
    lVar2 = (**(code **)(lVar3 + 0x28))(param_1);
    lVar3 = *param_1;
  }
  if (*(code **)(lVar3 + 0x30) == (code *)&UNK_180257d30) {
    iVar1 = (int)param_1[4];
  }
  else {
    iVar1 = (**(code **)(lVar3 + 0x30))(param_1);
  }
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      lVar3 = (longlong)iVar4 * 0x45 + lVar2;
      if ((((*(longlong *)(lVar3 + 0x28) == *param_2) && (*(longlong *)(lVar3 + 0x30) == param_2[1])
           ) && (*(longlong *)(lVar3 + 0x18) == *param_3)) &&
         (*(longlong *)(lVar3 + 0x20) == param_3[1])) {
        *param_4 = lVar3;
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  *param_4 = 0;
  return;
}






// 函数: void FUN_180256b0b(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)
void FUN_180256b0b(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong in_RAX;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  int iVar4;
  
  if (*(code **)(in_RAX + 0x28) == (code *)&UNK_180257d20) {
    lVar2 = param_1[3];
  }
  else {
    lVar2 = (**(code **)(in_RAX + 0x28))(param_1);
    in_RAX = *param_1;
  }
  if (*(code **)(in_RAX + 0x30) == (code *)&UNK_180257d30) {
    iVar1 = (int)param_1[4];
  }
  else {
    iVar1 = (**(code **)(in_RAX + 0x30))(param_1);
  }
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      lVar3 = (longlong)iVar4 * 0x45 + lVar2;
      if ((((*(longlong *)(lVar3 + 0x28) == *unaff_RSI) &&
           (*(longlong *)(lVar3 + 0x30) == unaff_RSI[1])) &&
          (*(longlong *)(lVar3 + 0x18) == *param_3)) && (*(longlong *)(lVar3 + 0x20) == param_3[1]))
      {
        *param_4 = lVar3;
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  *param_4 = 0;
  return;
}






// 函数: void FUN_180256b52(undefined8 param_1,undefined8 param_2,int param_3,int param_4)
void FUN_180256b52(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *unaff_R14;
  
  while ((((lVar1 = (longlong)param_3 * 0x45 + unaff_RBP, *(longlong *)(lVar1 + 0x28) != *unaff_RSI
           || (*(longlong *)(lVar1 + 0x30) != unaff_RSI[1])) ||
          (*(longlong *)(lVar1 + 0x18) != *unaff_RDI)) ||
         (*(longlong *)(lVar1 + 0x20) != unaff_RDI[1]))) {
    param_3 = param_3 + 1;
    if (param_4 <= param_3) {
      *unaff_R14 = 0;
      return;
    }
  }
  *unaff_R14 = lVar1;
  return;
}






// 函数: void FUN_180256bac(undefined8 param_1,code *param_2)
void FUN_180256bac(undefined8 param_1,code *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RBX;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar4;
  longlong *unaff_R14;
  
  lVar2 = (*param_2)();
  if (*(code **)(*unaff_RBX + 0x30) == (code *)&UNK_180257d30) {
    iVar1 = (int)unaff_RBX[4];
  }
  else {
    iVar1 = (**(code **)(*unaff_RBX + 0x30))();
  }
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      lVar3 = (longlong)iVar4 * 0x45 + lVar2;
      if ((((*(longlong *)(lVar3 + 0x28) == *unaff_RSI) &&
           (*(longlong *)(lVar3 + 0x30) == unaff_RSI[1])) &&
          (*(longlong *)(lVar3 + 0x18) == *unaff_RDI)) &&
         (*(longlong *)(lVar3 + 0x20) == unaff_RDI[1])) {
        *unaff_R14 = lVar3;
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  *unaff_R14 = 0;
  return;
}






// 函数: void FUN_180256bd0(longlong *param_1,int param_2,longlong *param_3)
void FUN_180256bd0(longlong *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (*(code **)(*param_1 + 0x30) == (code *)&UNK_180257d30) {
    iVar1 = (int)param_1[4];
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x30))();
  }
  if ((param_2 < iVar1) && (-1 < param_2)) {
    if (*(code **)(*param_1 + 0x28) == (code *)&UNK_180257d20) {
      *param_3 = (longlong)param_2 * 0x45 + param_1[3];
      return;
    }
    lVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    *param_3 = (longlong)param_2 * 0x45 + lVar2;
    return;
  }
  *param_3 = 0;
  return;
}



ulonglong FUN_180256c80(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  if (*(code **)(lVar1 + 0x28) == (code *)&UNK_180257d20) {
    uVar3 = param_1[3];
  }
  else {
    uVar3 = (**(code **)(lVar1 + 0x28))(param_1);
    lVar1 = *param_1;
  }
  if (*(code **)(lVar1 + 0x30) == (code *)&UNK_180257d30) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 4);
  }
  else {
    uVar4 = (**(code **)(lVar1 + 0x30))(param_1);
  }
  uVar2 = uVar4;
  if ((uVar3 <= param_2) && (uVar2 = (ulonglong)(int)uVar4, param_2 < uVar2 * 0x45 + uVar3)) {
    return CONCAT71((int7)(int3)(uVar4 >> 8),1);
  }
  return uVar2 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_180256d10(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined *puVar2;
  longlong lStackX_8;
  
  (**(code **)(*param_1 + 0x18))();
  if (lStackX_8 == 0) {
    return 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x58))(param_1,lStackX_8,param_4,param_5);
  if (cVar1 != '\0') {
    return 1;
  }
  puVar2 = &DAT_18098bc73;
  if (*(undefined **)(param_1[2] + 0x70) != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_1[2] + 0x70);
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(_DAT_180c86928,&UNK_180a14b50,puVar2,*(undefined8 *)(param_2 + 0x10));
}



undefined1 FUN_180256db0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 auStack_30 [2];
  code *pcStack_20;
  undefined *puStack_18;
  
  pcStack_20 = (code *)&UNK_180257aa0;
  puStack_18 = &UNK_180257960;
  auStack_30[0] = param_4;
  uVar1 = FUN_18008bf40(param_1,*(undefined8 *)(param_1 + 8),param_2,param_3,auStack_30);
  if (pcStack_20 != (code *)0x0) {
    (*pcStack_20)(auStack_30,0,0);
  }
  return uVar1;
}






// 函数: void FUN_180256e30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
void FUN_180256e30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined8 uStackX_8;
  
  (**(code **)(*param_1 + 0x18))();
  if (uStackX_8 != 0) {
    (**(code **)(*param_1 + 0x68))(param_1,uStackX_8,param_4,param_5,param_6);
    return;
  }
  if (*(longlong *)(param_6 + 0x10) != 0) {
    (**(code **)(param_6 + 0x18))(param_6);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180256ea0(void)
void FUN_180256ea0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 *in_R9;
  undefined1 auStack_90 [16];
  code *pcStack_80;
  code *pcStack_78;
  undefined8 auStack_70 [2];
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [40];
  
  pcStack_80 = (code *)0x0;
  pcStack_78 = _guard_check_icall;
  if (auStack_90 != in_R9) {
    pcVar3 = *(code **)(in_R9 + 0x10);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(auStack_90,in_R9,1);
      pcVar3 = *(code **)(in_R9 + 0x10);
    }
    pcStack_78 = *(code **)(in_R9 + 0x18);
    pcStack_80 = pcVar3;
  }
  lVar1 = FUN_1802576f0(auStack_50,auStack_90);
  pcStack_60 = FUN_180257970;
  puStack_58 = &UNK_180257960;
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x20,8,DAT_180bf65bc);
  FUN_1802576f0(uVar2,lVar1);
  auStack_70[0] = uVar2;
  if (*(code **)(lVar1 + 0x10) != (code *)0x0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0,0);
  }
  if (pcStack_80 != (code *)0x0) {
    (*pcStack_80)(auStack_90,0,0);
  }
  FUN_18008bb30();
  if (pcStack_60 != (code *)0x0) {
    (*pcStack_60)(auStack_70,0,0);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001802571bb)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_180257020(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 auStack_a8 [16];
  code *pcStack_98;
  code *pcStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  uStack_80 = 0xfffffffffffffffe;
  cVar2 = FUN_180256d10();
  if (cVar2 == '\0') {
    puStack_78 = auStack_70;
    puStack_88 = auStack_a8;
    pcStack_98 = (code *)0x0;
    pcStack_90 = _guard_check_icall;
    if (auStack_a8 != param_5) {
      pcVar5 = *(code **)(param_5 + 0x10);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(auStack_a8,param_5,1);
        pcVar5 = *(code **)(param_5 + 0x10);
      }
      pcStack_90 = *(code **)(param_5 + 0x18);
      pcStack_98 = pcVar5;
    }
    puStack_88 = auStack_a8;
    uStack_38 = 0;
    uStack_38 = FUN_180257ae0(auStack_a8);
    if (pcStack_98 != (code *)0x0) {
      (*pcStack_98)(auStack_a8,0,0);
    }
    puVar6 = auStack_70;
    cVar2 = FUN_180414a60();
    if (cVar2 == '\0') {
      puVar1 = *(undefined **)(*(longlong *)(param_1 + 0x10) + 0x70);
      puVar3 = &DAT_18098bc73;
      if (puVar1 != (undefined *)0x0) {
        puVar3 = puVar1;
      }
      FUN_1800623b0(_DAT_180c86928,0,0x80000000000,9,&UNK_180a14b08,puVar3,
                    *(undefined8 *)(param_2 + 0x10),puVar6);
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}






// 函数: void FUN_180257200(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180257200(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
      (**(code **)(lVar1 + 0x18))(lVar1 + 8,0,0,param_4,0xfffffffffffffffe);
    }
    if (lVar1 != param_1) {
      free(lVar1,0x28);
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}






// 函数: void FUN_180257280(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
void FUN_180257280(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined1 *param_6)

{
  code *pcVar1;
  longlong lStackX_8;
  undefined1 auStack_60 [16];
  code *pcStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  code *pcStack_30;
  code *pcStack_28;
  
  (**(code **)(*param_1 + 0x18))();
  if (lStackX_8 == 0) {
    pcStack_50 = (code *)0x0;
    pcStack_48 = _guard_check_icall;
    if (auStack_60 != param_6) {
      pcVar1 = *(code **)(param_6 + 0x10);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(auStack_60,param_6,1);
        pcVar1 = *(code **)(param_6 + 0x10);
      }
      pcStack_48 = *(code **)(param_6 + 0x18);
      pcStack_50 = pcVar1;
    }
    pcStack_30 = (code *)0x0;
    pcStack_28 = _guard_check_icall;
    if (auStack_40 != param_5) {
      pcVar1 = *(code **)(param_5 + 0x10);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(auStack_40,param_5,1);
        pcVar1 = *(code **)(param_5 + 0x10);
      }
      pcStack_28 = *(code **)(param_5 + 0x18);
      pcStack_30 = pcVar1;
    }
    FUN_180415120();
  }
  else {
    FUN_180256ea0(param_1,lStackX_8,param_4,param_5,param_6);
  }
  return;
}






// 函数: void FUN_180257410(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180257410(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
      (**(code **)(lVar1 + 0x18))(lVar1 + 8,0,0,param_4,0xfffffffffffffffe);
    }
    if (lVar1 != param_1) {
      free(lVar1,0x28);
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180257480(undefined8 param_1,longlong param_2,undefined4 *param_3)
void FUN_180257480(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_478 [32];
  undefined8 uStack_458;
  undefined *puStack_448;
  byte *pbStack_440;
  int iStack_438;
  byte abStack_430 [1032];
  ulonglong uStack_28;
  
  uStack_458 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_478;
  iVar7 = 0;
  puStack_448 = &UNK_18098bb30;
  pbStack_440 = abStack_430;
  iStack_438 = 0;
  abStack_430[0] = 0;
  uVar3 = **(uint **)(param_2 + 8);
  puVar1 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar1;
  if (uVar3 != 0) {
    FUN_180045f60(&puStack_448,puVar1,uVar3);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar3;
  }
  plVar8 = (longlong *)0x180bf8a40;
  do {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(char *)(*plVar8 + lVar4) != '\0');
    iVar6 = (int)lVar4;
    if (iStack_438 == iVar6) {
      if (iStack_438 != 0) {
        pbVar5 = pbStack_440;
        do {
          pbVar2 = pbVar5 + (*plVar8 - (longlong)pbStack_440);
          iVar6 = (uint)*pbVar5 - (uint)*pbVar2;
          if (iVar6 != 0) break;
          pbVar5 = pbVar5 + 1;
        } while (*pbVar2 != 0);
      }
LAB_18025757e:
      if (iVar6 == 0) {
        *param_3 = *(undefined4 *)((longlong)iVar7 * 0x10 + 0x180bf8a48);
        goto LAB_18025759a;
      }
    }
    else if (iStack_438 == 0) goto LAB_18025757e;
    iVar7 = iVar7 + 1;
    plVar8 = plVar8 + 2;
    if (0x180bf8daf < (longlong)plVar8) {
LAB_18025759a:
      puStack_448 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_478);
    }
  } while( true );
}






