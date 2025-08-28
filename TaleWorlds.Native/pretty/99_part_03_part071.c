#include "TaleWorlds.Native.Split.h"

// 99_part_03_part071.c - 5 个函数

// 函数: void FUN_18023ce10(longlong param_1)
void FUN_18023ce10(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined2 auStack_48 [2];
  undefined2 uStack_44;
  undefined1 uStack_40;
  undefined2 uStack_3c;
  undefined4 uStack_38;
  uint uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,auStack_48);
    *(undefined2 *)(param_1 + 0x332) = uStack_3c;
    *(undefined2 *)(param_1 + 0x330) = 1;
    if ((uStack_20 & 4) != 0) {
      *(uint *)(param_1 + 0x328) = *(uint *)(param_1 + 0x328) | 0x2000;
    }
    *(byte *)(param_1 + 0x355) = (byte)uStack_20 & 1;
    uVar2 = func_0x0001800aada0(uStack_38);
    *(undefined4 *)(param_1 + 0x324) = uVar2;
    *(undefined2 *)(param_1 + 0x32e) = uStack_44;
    *(undefined1 *)(param_1 + 0x335) = uStack_40;
    *(undefined2 *)(param_1 + 0x32c) = auStack_48[0];
    *(undefined1 *)(param_1 + 0x334) = 2;
  }
  *(uint *)(param_1 + 0x35c) = (uint)*(byte *)(param_1 + 0x335);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_18023ced0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plStack_18;
  undefined4 uStack_10;
  
  piVar1 = (int *)((longlong)param_1 + 0x3ac);
  if (*piVar1 == 0) {
    uStack_10 = (**(code **)(*param_1 + 8))();
    plStack_18 = param_1;
    iVar2 = (**(code **)(_DAT_180c8a9c0 + 0x158))(&plStack_18);
    if ((iVar2 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x30))(iVar2);
    }
    if ((*piVar1 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x18))();
    }
    *piVar1 = iVar2;
  }
  return piVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18023cf80(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong alStackX_10 [3];
  
  uVar1 = FUN_1806237a0();
  if ((int)uVar1 == 1) {
    lVar2 = _DAT_180c8ed58;
    if (_DAT_180c8ed58 == 0) {
      QueryPerformanceCounter(alStackX_10);
      lVar2 = alStackX_10[0];
    }
    *(double *)(param_1 + 0x270) = (double)(lVar2 - _DAT_180c8ed48) * _DAT_180c8ed50;
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



undefined8 * FUN_18023cff0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a13fd0;
  if (param_1[0x1a] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if ((longlong *)param_1[0x18] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x18] + 0x38))();
  }
  FUN_180049470(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x108);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * FUN_18023d080(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  
  plVar1 = (longlong *)(param_1 + 2);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (plVar1 != (longlong *)(param_2 + 2)) {
    lVar14 = *(longlong *)(param_2 + 4);
    puVar12 = *(undefined8 **)(param_2 + 2);
    puVar11 = (undefined8 *)*plVar1;
    uVar13 = lVar14 - (longlong)puVar12 >> 5;
    if ((ulonglong)(*(longlong *)(param_1 + 6) - (longlong)puVar11 >> 5) < uVar13) {
      if (uVar13 == 0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = (undefined4 *)
                 FUN_18062b420(_DAT_180c8ed18,uVar13 << 5,*(undefined1 *)(param_1 + 8));
      }
      if (0 < (longlong)uVar13) {
        puVar8 = puVar7;
        uVar10 = uVar13;
        do {
          puVar2 = (undefined4 *)(((longlong)puVar12 - (longlong)puVar7) + (longlong)puVar8);
          uVar3 = puVar2[1];
          uVar4 = puVar2[2];
          uVar5 = puVar2[3];
          uVar10 = uVar10 - 1;
          *puVar8 = *puVar2;
          puVar8[1] = uVar3;
          puVar8[2] = uVar4;
          puVar8[3] = uVar5;
          puVar11 = (undefined8 *)
                    (((longlong)puVar12 - (longlong)puVar7) + -0x10 + (longlong)(puVar8 + 8));
          uVar6 = puVar11[1];
          *(undefined8 *)(puVar8 + 4) = *puVar11;
          *(undefined8 *)(puVar8 + 6) = uVar6;
          puVar8 = puVar8 + 8;
        } while (0 < (longlong)uVar10);
      }
      if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *plVar1 = (longlong)puVar7;
      puVar9 = (undefined8 *)(puVar7 + uVar13 * 8);
      *(undefined8 **)(param_1 + 6) = puVar9;
    }
    else {
      puVar9 = *(undefined8 **)(param_1 + 4);
      uVar10 = (longlong)puVar9 - (longlong)puVar11 >> 5;
      if (uVar13 <= uVar10) {
        for (; 0 < (longlong)uVar13; uVar13 = uVar13 - 1) {
          uVar6 = puVar12[1];
          *puVar11 = *puVar12;
          puVar11[1] = uVar6;
          uVar6 = puVar12[3];
          puVar11[2] = puVar12[2];
          puVar11[3] = uVar6;
          puVar11 = puVar11 + 4;
          puVar12 = puVar12 + 4;
        }
        *(undefined8 **)(param_1 + 4) = puVar11;
        goto FUN_18023d209;
      }
      puVar15 = puVar12 + uVar10 * 4;
      if (0 < (longlong)uVar10) {
        do {
          uVar6 = puVar12[1];
          uVar10 = uVar10 - 1;
          *puVar11 = *puVar12;
          puVar11[1] = uVar6;
          uVar6 = puVar12[3];
          puVar11[2] = puVar12[2];
          puVar11[3] = uVar6;
          puVar11 = puVar11 + 4;
          puVar12 = puVar12 + 4;
        } while (0 < (longlong)uVar10);
        puVar9 = *(undefined8 **)(param_1 + 4);
      }
      lVar14 = lVar14 - (longlong)puVar15 >> 5;
      if (0 < lVar14) {
        lVar16 = (longlong)puVar15 - (longlong)puVar9;
        do {
          puVar12 = (undefined8 *)((longlong)puVar9 + lVar16);
          uVar6 = puVar12[1];
          lVar14 = lVar14 + -1;
          *puVar9 = *puVar12;
          puVar9[1] = uVar6;
          puVar12 = (undefined8 *)((longlong)puVar9 + lVar16 + 0x10);
          uVar6 = puVar12[1];
          puVar9[2] = *puVar12;
          puVar9[3] = uVar6;
          puVar9 = puVar9 + 4;
        } while (0 < lVar14);
      }
    }
    *(undefined8 **)(param_1 + 4) = puVar9;
  }
FUN_18023d209:
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18023d0bd(undefined8 *param_1,undefined8 param_2,longlong param_3)
void FUN_18023d0bd(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong in_RAX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *unaff_RBX;
  longlong *unaff_RSI;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong unaff_R14;
  longlong unaff_R15;
  
  uVar10 = param_3 - (longlong)unaff_RBX >> 5;
  if ((ulonglong)(in_RAX - (longlong)param_1 >> 5) < uVar10) {
    if (uVar10 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,uVar10 << 5,(char)unaff_RSI[3]);
    }
    if (0 < (longlong)uVar10) {
      puVar7 = puVar6;
      uVar9 = uVar10;
      do {
        puVar1 = (undefined4 *)(((longlong)unaff_RBX - (longlong)puVar6) + (longlong)puVar7);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        uVar9 = uVar9 - 1;
        *puVar7 = *puVar1;
        puVar7[1] = uVar2;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        puVar8 = (undefined8 *)
                 (((longlong)unaff_RBX - (longlong)puVar6) + -0x10 + (longlong)(puVar7 + 8));
        uVar5 = puVar8[1];
        *(undefined8 *)(puVar7 + 4) = *puVar8;
        *(undefined8 *)(puVar7 + 6) = uVar5;
        puVar7 = puVar7 + 8;
      } while (0 < (longlong)uVar9);
    }
    if (*unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *unaff_RSI = (longlong)puVar6;
    puVar8 = (undefined8 *)(puVar6 + uVar10 * 8);
    unaff_RSI[2] = (longlong)puVar8;
  }
  else {
    puVar8 = (undefined8 *)unaff_RSI[1];
    uVar9 = (longlong)puVar8 - (longlong)param_1 >> 5;
    if (uVar10 <= uVar9) {
      for (; 0 < (longlong)uVar10; uVar10 = uVar10 - 1) {
        uVar5 = unaff_RBX[1];
        *param_1 = *unaff_RBX;
        param_1[1] = uVar5;
        uVar5 = unaff_RBX[3];
        param_1[2] = unaff_RBX[2];
        param_1[3] = uVar5;
        param_1 = param_1 + 4;
        unaff_RBX = unaff_RBX + 4;
      }
      unaff_RSI[1] = (longlong)param_1;
      goto LAB_18023d204;
    }
    puVar12 = unaff_RBX + uVar9 * 4;
    if (0 < (longlong)uVar9) {
      do {
        uVar5 = unaff_RBX[1];
        uVar9 = uVar9 - 1;
        *param_1 = *unaff_RBX;
        param_1[1] = uVar5;
        uVar5 = unaff_RBX[3];
        param_1[2] = unaff_RBX[2];
        param_1[3] = uVar5;
        param_1 = param_1 + 4;
        unaff_RBX = unaff_RBX + 4;
      } while (0 < (longlong)uVar9);
      puVar8 = (undefined8 *)unaff_RSI[1];
    }
    lVar11 = param_3 - (longlong)puVar12 >> 5;
    if (0 < lVar11) {
      lVar13 = (longlong)puVar12 - (longlong)puVar8;
      do {
        puVar12 = (undefined8 *)((longlong)puVar8 + lVar13);
        uVar5 = puVar12[1];
        lVar11 = lVar11 + -1;
        *puVar8 = *puVar12;
        puVar8[1] = uVar5;
        puVar12 = (undefined8 *)((longlong)puVar8 + lVar13 + 0x10);
        uVar5 = puVar12[1];
        puVar8[2] = *puVar12;
        puVar8[3] = uVar5;
        puVar8 = puVar8 + 4;
      } while (0 < lVar11);
    }
  }
  unaff_RSI[1] = (longlong)puVar8;
LAB_18023d204:
  *(undefined4 *)(unaff_R14 + 0x28) = *(undefined4 *)(unaff_R15 + 0x28);
  *(undefined4 *)(unaff_R14 + 0x2c) = *(undefined4 *)(unaff_R15 + 0x2c);
  *(undefined4 *)(unaff_R14 + 0x30) = *(undefined4 *)(unaff_R15 + 0x30);
  *(undefined8 *)(unaff_R14 + 0x38) = *(undefined8 *)(unaff_R15 + 0x38);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18023d0d8(void)
void FUN_18023d0d8(void)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong unaff_RBX;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R14;
  longlong unaff_R15;
  
  if (unaff_RDI == 0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,unaff_RDI << 5,(char)unaff_RSI[3]);
  }
  if (0 < unaff_RDI) {
    puVar8 = puVar7;
    lVar9 = unaff_RDI;
    do {
      puVar1 = (undefined4 *)((unaff_RBX - (longlong)puVar7) + (longlong)puVar8);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      lVar9 = lVar9 + -1;
      *puVar8 = *puVar1;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      puVar2 = (undefined8 *)((unaff_RBX - (longlong)puVar7) + -0x10 + (longlong)(puVar8 + 8));
      uVar6 = puVar2[1];
      *(undefined8 *)(puVar8 + 4) = *puVar2;
      *(undefined8 *)(puVar8 + 6) = uVar6;
      puVar8 = puVar8 + 8;
    } while (0 < lVar9);
  }
  if (*unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RSI = (longlong)puVar7;
  unaff_RSI[2] = (longlong)(puVar7 + unaff_RDI * 8);
  unaff_RSI[1] = (longlong)(puVar7 + unaff_RDI * 8);
  *(undefined4 *)(unaff_R14 + 0x28) = *(undefined4 *)(unaff_R15 + 0x28);
  *(undefined4 *)(unaff_R14 + 0x2c) = *(undefined4 *)(unaff_R15 + 0x2c);
  *(undefined4 *)(unaff_R14 + 0x30) = *(undefined4 *)(unaff_R15 + 0x30);
  *(undefined8 *)(unaff_R14 + 0x38) = *(undefined8 *)(unaff_R15 + 0x38);
  return;
}






// 函数: void FUN_18023d153(undefined8 *param_1,undefined8 param_2,longlong param_3)
void FUN_18023d153(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *unaff_RBX;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong unaff_R14;
  longlong unaff_R15;
  
  puVar2 = *(undefined8 **)(unaff_RSI + 8);
  uVar3 = (longlong)puVar2 - (longlong)param_1 >> 5;
  if (uVar3 < unaff_RDI) {
    puVar5 = unaff_RBX + uVar3 * 4;
    if (0 < (longlong)uVar3) {
      do {
        uVar1 = unaff_RBX[1];
        uVar3 = uVar3 - 1;
        *param_1 = *unaff_RBX;
        param_1[1] = uVar1;
        uVar1 = unaff_RBX[3];
        param_1[2] = unaff_RBX[2];
        param_1[3] = uVar1;
        param_1 = param_1 + 4;
        unaff_RBX = unaff_RBX + 4;
      } while (0 < (longlong)uVar3);
      puVar2 = *(undefined8 **)(unaff_RSI + 8);
    }
    lVar4 = param_3 - (longlong)puVar5 >> 5;
    if (0 < lVar4) {
      lVar6 = (longlong)puVar5 - (longlong)puVar2;
      do {
        puVar5 = (undefined8 *)((longlong)puVar2 + lVar6);
        uVar1 = puVar5[1];
        lVar4 = lVar4 + -1;
        *puVar2 = *puVar5;
        puVar2[1] = uVar1;
        puVar5 = (undefined8 *)((longlong)puVar2 + lVar6 + 0x10);
        uVar1 = puVar5[1];
        puVar2[2] = *puVar5;
        puVar2[3] = uVar1;
        puVar2 = puVar2 + 4;
      } while (0 < lVar4);
    }
    *(undefined8 **)(unaff_RSI + 8) = puVar2;
  }
  else {
    if (0 < (longlong)unaff_RDI) {
      do {
        uVar1 = unaff_RBX[1];
        unaff_RDI = unaff_RDI - 1;
        *param_1 = *unaff_RBX;
        param_1[1] = uVar1;
        uVar1 = unaff_RBX[3];
        param_1[2] = unaff_RBX[2];
        param_1[3] = uVar1;
        param_1 = param_1 + 4;
        unaff_RBX = unaff_RBX + 4;
      } while (0 < (longlong)unaff_RDI);
    }
    *(undefined8 **)(unaff_RSI + 8) = param_1;
  }
  *(undefined4 *)(unaff_R14 + 0x28) = *(undefined4 *)(unaff_R15 + 0x28);
  *(undefined4 *)(unaff_R14 + 0x2c) = *(undefined4 *)(unaff_R15 + 0x2c);
  *(undefined4 *)(unaff_R14 + 0x30) = *(undefined4 *)(unaff_R15 + 0x30);
  *(undefined8 *)(unaff_R14 + 0x38) = *(undefined8 *)(unaff_R15 + 0x38);
  return;
}






// 函数: void FUN_18023d209(void)
void FUN_18023d209(void)

{
  longlong unaff_R14;
  longlong unaff_R15;
  
  *(undefined4 *)(unaff_R14 + 0x28) = *(undefined4 *)(unaff_R15 + 0x28);
  *(undefined4 *)(unaff_R14 + 0x2c) = *(undefined4 *)(unaff_R15 + 0x2c);
  *(undefined4 *)(unaff_R14 + 0x30) = *(undefined4 *)(unaff_R15 + 0x30);
  *(undefined8 *)(unaff_R14 + 0x38) = *(undefined8 *)(unaff_R15 + 0x38);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




