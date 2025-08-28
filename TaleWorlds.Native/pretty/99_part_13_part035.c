#include "TaleWorlds.Native.Split.h"

// 99_part_13_part035.c - 2 个函数

// 函数: void FUN_1808bcca0(longlong *param_1)
void FUN_1808bcca0(longlong *param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int *piVar9;
  
  lVar2 = param_1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar6 = 0;
  if (*(int *)((longlong)param_1 + 0x24) == 0) {
    lVar3 = param_1[5];
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    iVar4 = FUN_180744cc0(param_1);
    if ((iVar4 == 0) && (iVar4 = FUN_1808744f0(param_1 + 2), iVar4 == 0)) {
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar2);
    }
    return;
  }
  iVar4 = (int)param_1[1];
  if (iVar4 != 0) {
    piVar9 = (int *)*param_1;
    uVar8 = uVar6;
    do {
      if (*piVar9 != -1) {
        iVar5 = ((int *)*param_1)[(int)uVar8];
        goto LAB_1808bcd12;
      }
      uVar8 = (ulonglong)((int)uVar8 + 1);
      uVar6 = uVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar6 != (longlong)iVar4);
  }
  iVar5 = -1;
LAB_1808bcd12:
  lVar2 = param_1[2];
  lVar3 = *(longlong *)((longlong)iVar5 * 0x20 + 0x18 + lVar2);
  puVar1 = (uint *)((longlong)iVar5 * 0x20 + lVar2);
  if ((*(int *)((longlong)param_1 + 0x24) != 0) && (iVar4 != 0)) {
    lVar7 = (longlong)(int)((puVar1[3] ^ puVar1[1] ^ *puVar1 ^ puVar1[2]) & iVar4 - 1U);
    piVar9 = (int *)(*param_1 + lVar7 * 4);
    iVar4 = *(int *)(*param_1 + lVar7 * 4);
    while (iVar4 != -1) {
      lVar7 = (longlong)iVar4 * 0x20;
      if ((*(longlong *)(lVar7 + lVar2) == *(longlong *)puVar1) &&
         (*(longlong *)(lVar7 + 8 + lVar2) == *(longlong *)(puVar1 + 2))) {
        iVar4 = *piVar9;
        lVar7 = (longlong)iVar4 * 0x20;
        *(undefined8 *)(lVar7 + 0x18 + lVar2) = 0;
        *piVar9 = *(int *)(lVar7 + 0x10 + lVar2);
        *(int *)(lVar7 + 0x10 + lVar2) = (int)param_1[4];
        *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
        *(int *)(param_1 + 4) = iVar4;
        break;
      }
      piVar9 = (int *)(lVar2 + 0x10 + lVar7);
      iVar4 = *piVar9;
    }
  }
  iVar4 = FUN_180744cc0(lVar3);
  if ((iVar4 == 0) && (iVar4 = FUN_180744e20(lVar3 + 0x10), iVar4 == 0)) {
    *(undefined4 *)(lVar3 + 0x20) = 0xffffffff;
    *(undefined4 *)(lVar3 + 0x24) = 0;
  }
  FUN_180744e20(lVar3 + 0x10);
  FUN_180744cc0(lVar3);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar3,&UNK_180984cd0,0x62,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808bceb0(longlong *param_1)

{
  ushort *puVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < (int)param_1[1]) {
    lVar3 = 0;
    do {
      if ((*(byte *)(lVar3 + 8 + *param_1) & 1) == 0) {
        *(int *)(param_1 + 2) = (int)param_1[2] + -0x200;
        FUN_180741df0(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(undefined8 *)(lVar3 + *param_1),
                      &UNK_1809876c0,0x104);
        puVar1 = (ushort *)(lVar3 + 8 + *param_1);
        *puVar1 = *puVar1 | 1;
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (iVar2 < (int)param_1[1]);
  }
  FUN_1807d3160(param_1);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808bcec4(void)

{
  ushort *puVar1;
  longlong *unaff_RBX;
  uint unaff_ESI;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)unaff_ESI;
  do {
    if ((*(byte *)(uVar2 + 8 + *unaff_RBX) & 1) == 0) {
      *(int *)(unaff_RBX + 2) = (int)unaff_RBX[2] + -0x200;
      FUN_180741df0(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(undefined8 *)(uVar2 + *unaff_RBX),
                    &UNK_1809876c0,0x104);
      puVar1 = (ushort *)(uVar2 + 8 + *unaff_RBX);
      *puVar1 = *puVar1 | 1;
    }
    unaff_ESI = unaff_ESI + 1;
    uVar2 = uVar2 + 0x10;
  } while ((int)unaff_ESI < (int)unaff_RBX[1]);
  FUN_1807d3160();
  return 0;
}



undefined8 FUN_1808bcf1e(void)

{
  FUN_1807d3160();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808bcf40(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 uStack_50;
  int aiStack_48 [2];
  longlong lStack_40;
  undefined8 uStack_38;
  int aiStack_30 [2];
  
  plVar12 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x4d8),
                  &UNK_180957f70,0x100,1);
  }
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  while( true ) {
    lVar1 = *(longlong *)(param_1 + 0x60);
    if (lVar1 != 0) {
      FUN_180768360(lVar1);
    }
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
    if (*(int *)(param_1 + 0x5c) < 1) break;
    uStack_50 = 0xffffffffffffffff;
    aiStack_48[0] = -1;
    FUN_1808741f0(param_1 + 0x38,&uStack_50,aiStack_48);
    uStack_38 = 0xffffffffffffffff;
    aiStack_30[0] = -1;
    lStack_40 = *(longlong *)((longlong)aiStack_48[0] * 0x20 + 0x18 + *(longlong *)(param_1 + 0x48))
    ;
    FUN_1807d1650(lStack_40,&uStack_38,aiStack_30);
    if ((*(char *)(param_1 + 0x780) == '\0') &&
       (uVar5 = FUN_1808b81c0(param_1 + 0x3c8,
                              *(undefined8 *)
                               (*(longlong *)(lStack_40 + 0x10) + 8 + (longlong)aiStack_30[0] * 0x10
                               )), (int)uVar5 != 0)) {
      return uVar5;
    }
  }
  lVar1 = param_1 + 0x108;
  while( true ) {
    lVar6 = *(longlong *)(param_1 + 0x130);
    if (lVar6 != 0) {
      FUN_180768360(lVar6);
    }
    if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar6);
    }
    if (*(int *)(param_1 + 300) < 1) break;
    uStack_38 = 0xffffffffffffffff;
    aiStack_30[0] = -1;
    lStack_40 = lVar1;
    FUN_1808741f0(lVar1,&uStack_38,aiStack_30);
    uVar5 = FUN_180851740(param_1 + 0x368,
                          (longlong)aiStack_30[0] * 0x20 + *(longlong *)(lStack_40 + 0x10));
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  if (*(longlong *)(param_1 + 0x790) != 0) {
    uVar5 = FUN_1808e1420();
    if ((int)uVar5 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x790);
      FUN_1808e0c60(uVar5);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),uVar5,&UNK_180987640,0x40c,1);
    }
    return uVar5;
  }
  if (*(longlong *)(param_1 + 0x788) == 0) {
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x28) + -0x18);
    if (*(longlong *)(param_1 + 0x28) == 0) {
      plVar7 = plVar12;
    }
    plVar2 = plVar12;
    if (plVar7 != (longlong *)0x0) {
      plVar2 = plVar7 + 3;
    }
    while (plVar2 != (longlong *)(param_1 + 0x28)) {
      plVar7 = plVar2 + -3;
      if (plVar2 == (longlong *)0x0) {
        plVar7 = plVar12;
      }
      if (plVar2 == (longlong *)(param_1 + 0x28)) {
        return 0x1c;
      }
      lVar6 = *plVar2;
      plVar8 = (longlong *)(lVar6 + -0x18);
      if (lVar6 == 0) {
        plVar8 = plVar12;
      }
      plVar9 = plVar12;
      if (plVar8 != (longlong *)0x0) {
        plVar9 = plVar8 + 3;
      }
      *(longlong *)plVar2[1] = lVar6;
      *(longlong *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (longlong)plVar2;
      *plVar2 = (longlong)plVar2;
      iVar3 = FUN_1808d7110(plVar7,param_1);
      plVar2 = plVar9;
      if (iVar3 == 0) {
        FUN_1808bec80(param_1 + 0x408,plVar7);
      }
    }
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x18) + -8);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      plVar7 = plVar12;
    }
    plVar2 = plVar12;
    if (plVar7 != (longlong *)0x0) {
      plVar2 = plVar7 + 1;
    }
    while (plVar2 != (longlong *)(param_1 + 0x18)) {
      plVar7 = plVar2 + -1;
      if (plVar2 == (longlong *)0x0) {
        plVar7 = plVar12;
      }
      if (plVar2 == (longlong *)(param_1 + 0x18)) {
        return 0x1c;
      }
      lVar6 = *plVar2;
      plVar8 = (longlong *)(lVar6 + -8);
      if (lVar6 == 0) {
        plVar8 = plVar12;
      }
      plVar9 = plVar12;
      if (plVar8 != (longlong *)0x0) {
        plVar9 = plVar8 + 1;
      }
      *(longlong *)plVar2[1] = lVar6;
      *(longlong *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (longlong)plVar2;
      *plVar2 = (longlong)plVar2;
      FUN_1808be9f0(param_1 + 0x430,plVar7);
      plVar2 = plVar9;
    }
    lVar6 = *(longlong *)(param_1 + 0x60);
    if (lVar6 != 0) {
      FUN_180768360(lVar6);
    }
    FUN_18084f2d0(param_1 + 0x68);
    FUN_18084f2d0(param_1 + 0x38);
    if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar6);
    }
    lVar6 = *(longlong *)(param_1 + 200);
    if (lVar6 != 0) {
      FUN_180768360(lVar6);
    }
    FUN_1808bcca0(param_1 + 0xd0);
    FUN_1808bcca0(param_1 + 0xa0);
    if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar6);
    }
    lVar6 = *(longlong *)(param_1 + 0x130);
    if (lVar6 != 0) {
      FUN_180768360(lVar6);
    }
    FUN_18084f040(param_1 + 0x138);
    FUN_18084f040(lVar1);
    if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar6);
    }
    lVar1 = *(longlong *)(param_1 + 0x200);
    if (lVar1 != 0) {
      FUN_180768360(lVar1);
    }
    FUN_18084f560(param_1 + 0x208);
    FUN_18084f560(param_1 + 0x1d8);
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
    lVar1 = *(longlong *)(param_1 + 0x198);
    if (lVar1 != 0) {
      FUN_180768360(lVar1);
    }
    FUN_18084f040(param_1 + 0x1a0);
    FUN_18084f040(param_1 + 0x170);
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
    FUN_1808bceb0(param_1 + 0x3e0);
    FUN_1808bceb0(param_1 + 0x408);
    FUN_1808bceb0(param_1 + 0x430);
    FUN_1808bceb0(param_1 + 0x458);
    FUN_1808bceb0(param_1 + 0x480);
    uStack_50 = 0xffffffffffffffff;
    aiStack_48[0] = -1;
    FUN_1808741f0(param_1 + 0x240,&uStack_50,aiStack_48);
    if (aiStack_48[0] == -1) {
      iVar3 = FUN_180744cc0(param_1 + 0x240);
      if ((iVar3 == 0) && (iVar3 = FUN_1808744f0(param_1 + 0x250), iVar3 == 0)) {
        *(undefined4 *)(param_1 + 0x260) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x264) = 0;
      }
      *(undefined8 *)(param_1 + 0x7a0) = 0;
      return 0;
    }
    lVar1 = *(longlong *)((longlong)aiStack_48[0] * 0x20 + 0x18 + *(longlong *)(param_1 + 0x250));
    uVar11 = *(uint *)(lVar1 + 0x14);
    plVar12 = (longlong *)(lVar1 + 8);
    uVar4 = -uVar11;
    if (-1 < (int)uVar11) {
      uVar4 = uVar11;
    }
    if ((int)uVar4 < 0) {
      if (0 < *(int *)(lVar1 + 0x10)) goto LAB_1808bd5a0;
      if ((0 < (int)uVar11) && (*plVar12 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*plVar12,&UNK_180957f70,0x100,1);
      }
      *plVar12 = 0;
      uVar11 = 0;
      *(undefined4 *)(lVar1 + 0x14) = 0;
    }
    iVar3 = *(int *)(lVar1 + 0x10);
    if (iVar3 < 0) {
      puVar10 = (undefined4 *)(*plVar12 + (longlong)iVar3 * 4);
      lVar6 = (longlong)-iVar3;
      if (iVar3 < 0) {
        for (; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        uVar11 = *(uint *)(lVar1 + 0x14);
      }
    }
    *(undefined4 *)(lVar1 + 0x10) = 0;
    if (0 < (int)((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f))) {
      FUN_180861ef0(plVar12,0);
    }
LAB_1808bd5a0:
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar1,&UNK_180987640,0x434,1);
  }
  uVar5 = FUN_1808e06a0();
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  lVar1 = *(longlong *)(param_1 + 0x788);
  uVar11 = *(uint *)(lVar1 + 0x14);
  if ((int)((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f)) < 0) {
    if (0 < *(int *)(lVar1 + 0x10)) goto LAB_1808bd1ec;
    if ((0 < (int)uVar11) && (*(longlong *)(lVar1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(lVar1 + 8),&UNK_180957f70,
                    0x100,1);
    }
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined4 *)(lVar1 + 0x14) = 0;
    uVar11 = 0;
  }
  iVar3 = *(int *)(lVar1 + 0x10);
  if (iVar3 < 0) {
                    // WARNING: Subroutine does not return
    memset(*(longlong *)(lVar1 + 8) + (longlong)iVar3 * 8,0,(longlong)-iVar3 << 3);
  }
  *(undefined4 *)(lVar1 + 0x10) = 0;
  if (0 < (int)((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f))) {
    FUN_180747f10(lVar1 + 8,0);
  }
LAB_1808bd1ec:
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar1,&UNK_180987640,0x413,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808bd05e(void)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong *unaff_R12;
  longlong unaff_R13;
  
  lVar1 = unaff_RSI + 0x108;
  while( true ) {
    lVar6 = *(longlong *)(unaff_RSI + 0x130);
    if (lVar6 != 0) {
      FUN_180768360(lVar6);
    }
    if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar6);
    }
    if (*(int *)(unaff_RSI + 300) < 1) break;
    *(longlong *)(unaff_RBP + -0x18) = lVar1;
    *(undefined8 *)(unaff_RBP + -0x10) = 0xffffffffffffffff;
    *(undefined4 *)(unaff_RBP + -8) = 0xffffffff;
    FUN_1808741f0(lVar1,unaff_RBP + -0x10,unaff_RBP + -8);
    uVar4 = FUN_180851740(unaff_RSI + 0x368,
                          (longlong)*(int *)(unaff_RBP + -8) * 0x20 +
                          *(longlong *)(*(longlong *)(unaff_RBP + -0x18) + 0x10));
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  if (*(longlong *)(unaff_RSI + 0x790) != 0) {
    uVar4 = FUN_1808e1420();
    if ((int)uVar4 == 0) {
      uVar4 = *(undefined8 *)(unaff_RSI + 0x790);
      FUN_1808e0c60(uVar4);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),uVar4,&UNK_180987640,0x40c,1);
    }
    return uVar4;
  }
  uVar11 = (uint)unaff_R12;
  if (*(longlong *)(unaff_RSI + 0x788) == 0) {
    plVar7 = (longlong *)(*(longlong *)(unaff_RSI + 0x28) + -0x18);
    if (*(longlong *)(unaff_RSI + 0x28) == 0) {
      plVar7 = unaff_R12;
    }
    plVar2 = unaff_R12;
    if (plVar7 != (longlong *)0x0) {
      plVar2 = plVar7 + 3;
    }
    while (plVar2 != (longlong *)(unaff_RSI + 0x28)) {
      plVar7 = plVar2 + -3;
      if (plVar2 == (longlong *)0x0) {
        plVar7 = unaff_R12;
      }
      if (plVar2 == (longlong *)(unaff_RSI + 0x28)) {
        return 0x1c;
      }
      lVar6 = *plVar2;
      plVar8 = (longlong *)(lVar6 + -0x18);
      if (lVar6 == 0) {
        plVar8 = unaff_R12;
      }
      plVar9 = unaff_R12;
      if (plVar8 != (longlong *)0x0) {
        plVar9 = plVar8 + 3;
      }
      *(longlong *)plVar2[1] = lVar6;
      *(longlong *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (longlong)plVar2;
      *plVar2 = (longlong)plVar2;
      iVar3 = FUN_1808d7110(plVar7);
      plVar2 = plVar9;
      if (iVar3 == 0) {
        FUN_1808bec80(unaff_RSI + 0x408,plVar7);
      }
    }
    plVar7 = (longlong *)(*(longlong *)(unaff_RSI + 0x18) + -8);
    if (*(longlong *)(unaff_RSI + 0x18) == 0) {
      plVar7 = unaff_R12;
    }
    plVar2 = unaff_R12;
    if (plVar7 != (longlong *)0x0) {
      plVar2 = plVar7 + 1;
    }
    while (plVar2 != (longlong *)(unaff_RSI + 0x18)) {
      plVar7 = plVar2 + -1;
      if (plVar2 == (longlong *)0x0) {
        plVar7 = unaff_R12;
      }
      if (plVar2 == (longlong *)(unaff_RSI + 0x18)) {
        return 0x1c;
      }
      lVar6 = *plVar2;
      plVar8 = (longlong *)(lVar6 + -8);
      if (lVar6 == 0) {
        plVar8 = unaff_R12;
      }
      plVar9 = unaff_R12;
      if (plVar8 != (longlong *)0x0) {
        plVar9 = plVar8 + 1;
      }
      *(longlong *)plVar2[1] = lVar6;
      *(longlong *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (longlong)plVar2;
      *plVar2 = (longlong)plVar2;
      FUN_1808be9f0(unaff_RSI + 0x430,plVar7);
      plVar2 = plVar9;
    }
    lVar6 = *(longlong *)(unaff_R13 + 0x28);
    if (lVar6 != 0) {
      FUN_180768360(lVar6);
    }
    FUN_18084f2d0(unaff_R13 + 0x30);
    FUN_18084f2d0();
    if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar6);
    }
    lVar6 = *(longlong *)(unaff_RSI + 200);
    if (lVar6 != 0) {
      FUN_180768360(lVar6);
    }
    FUN_1808bcca0(unaff_RSI + 0xd0);
    FUN_1808bcca0(unaff_RSI + 0xa0);
    if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar6);
    }
    lVar6 = *(longlong *)(unaff_RSI + 0x130);
    if (lVar6 != 0) {
      FUN_180768360(lVar6);
    }
    FUN_18084f040(unaff_RSI + 0x138);
    FUN_18084f040(lVar1);
    if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar6);
    }
    lVar1 = *(longlong *)(unaff_RSI + 0x200);
    if (lVar1 != 0) {
      FUN_180768360(lVar1);
    }
    FUN_18084f560(unaff_RSI + 0x208);
    FUN_18084f560(unaff_RSI + 0x1d8);
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
    lVar1 = *(longlong *)(unaff_RSI + 0x198);
    if (lVar1 != 0) {
      FUN_180768360(lVar1);
    }
    FUN_18084f040(unaff_RSI + 0x1a0);
    FUN_18084f040(unaff_RSI + 0x170);
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
    FUN_1808bceb0(unaff_RSI + 0x3e0);
    FUN_1808bceb0(unaff_RSI + 0x408);
    FUN_1808bceb0(unaff_RSI + 0x430);
    FUN_1808bceb0(unaff_RSI + 0x458);
    FUN_1808bceb0(unaff_RSI + 0x480);
    lVar1 = unaff_RSI + 0x240;
    *(undefined8 *)(unaff_RBP + -0x28) = 0xffffffffffffffff;
    *(longlong *)(unaff_RBP + -0x30) = lVar1;
    *(undefined4 *)(unaff_RBP + -0x20) = 0xffffffff;
    FUN_1808741f0(lVar1,unaff_RBP + -0x28,unaff_RBP + -0x20);
    if (*(int *)(unaff_RBP + -0x20) == -1) {
      iVar3 = FUN_180744cc0(lVar1);
      if ((iVar3 == 0) && (iVar3 = FUN_1808744f0(unaff_RSI + 0x250), iVar3 == 0)) {
        *(undefined4 *)(unaff_RSI + 0x260) = 0xffffffff;
        *(uint *)(unaff_RSI + 0x264) = uVar11;
      }
      *(longlong **)(unaff_RSI + 0x7a0) = unaff_R12;
      return 0;
    }
    lVar1 = *(longlong *)
             ((longlong)*(int *)(unaff_RBP + -0x20) * 0x20 + 0x18 +
             *(longlong *)(*(longlong *)(unaff_RBP + -0x30) + 0x10));
    uVar11 = *(uint *)(lVar1 + 0x14);
    plVar7 = (longlong *)(lVar1 + 8);
    *(longlong *)(unaff_RBP + 0x30) = lVar1;
    uVar5 = -uVar11;
    if (-1 < (int)uVar11) {
      uVar5 = uVar11;
    }
    lVar6 = lVar1;
    if ((int)uVar5 < 0) {
      if (0 < *(int *)(lVar1 + 0x10)) goto LAB_1808bd5a0;
      if ((0 < (int)uVar11) && (*plVar7 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*plVar7,&UNK_180957f70,0x100,1);
      }
      *plVar7 = 0;
      uVar11 = 0;
      *(undefined4 *)(lVar1 + 0x14) = 0;
    }
    iVar3 = *(int *)(lVar1 + 0x10);
    if (iVar3 < 0) {
      puVar10 = (undefined4 *)(*plVar7 + (longlong)iVar3 * 4);
      lVar6 = (longlong)-iVar3;
      if (iVar3 < 0) {
        for (; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        uVar11 = *(uint *)(lVar1 + 0x14);
      }
      lVar6 = *(longlong *)(unaff_RBP + 0x30);
    }
    *(undefined4 *)(lVar1 + 0x10) = 0;
    if (0 < (int)((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f))) {
      FUN_180861ef0(plVar7,0);
    }
LAB_1808bd5a0:
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar6,&UNK_180987640,0x434,1);
  }
  uVar4 = FUN_1808e06a0();
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x788);
  uVar5 = *(uint *)(lVar1 + 0x14);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if ((int)uVar11 < *(int *)(lVar1 + 0x10)) goto LAB_1808bd1ec;
    if ((0 < (int)uVar5) && (*(longlong *)(lVar1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(lVar1 + 8),&UNK_180957f70,
                    0x100,1);
    }
    *(longlong **)(lVar1 + 8) = unaff_R12;
    *(uint *)(lVar1 + 0x14) = uVar11;
    uVar5 = uVar11;
  }
  iVar3 = *(int *)(lVar1 + 0x10);
  if (iVar3 < 0) {
                    // WARNING: Subroutine does not return
    memset(*(longlong *)(lVar1 + 8) + (longlong)iVar3 * 8,0,(longlong)-iVar3 << 3);
  }
  *(uint *)(lVar1 + 0x10) = uVar11;
  if (0 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
    FUN_180747f10(lVar1 + 8,0);
  }
LAB_1808bd1ec:
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar1,&UNK_180987640,0x413,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808bd222(void)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong in_RAX;
  longlong lVar5;
  longlong *plVar6;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  uint uVar10;
  longlong *unaff_R12;
  longlong unaff_R13;
  longlong unaff_R15;
  bool in_ZF;
  
  plVar6 = (longlong *)(in_RAX + -0x18);
  if (in_ZF) {
    plVar6 = unaff_R12;
  }
  plVar2 = unaff_R12;
  if (plVar6 != (longlong *)0x0) {
    plVar2 = plVar6 + 3;
  }
  while (plVar2 != (longlong *)(unaff_RSI + 0x28)) {
    plVar6 = plVar2 + -3;
    if (plVar2 == (longlong *)0x0) {
      plVar6 = unaff_R12;
    }
    if (plVar2 == (longlong *)(unaff_RSI + 0x28)) {
      return 0x1c;
    }
    lVar1 = *plVar2;
    plVar7 = (longlong *)(lVar1 + -0x18);
    if (lVar1 == 0) {
      plVar7 = unaff_R12;
    }
    plVar8 = unaff_R12;
    if (plVar7 != (longlong *)0x0) {
      plVar8 = plVar7 + 3;
    }
    *(longlong *)plVar2[1] = lVar1;
    *(longlong *)(*plVar2 + 8) = plVar2[1];
    plVar2[1] = (longlong)plVar2;
    *plVar2 = (longlong)plVar2;
    iVar3 = FUN_1808d7110(plVar6);
    plVar2 = plVar8;
    if (iVar3 == 0) {
      FUN_1808bec80(unaff_RSI + 0x408,plVar6);
    }
  }
  plVar6 = (longlong *)(*(longlong *)(unaff_RSI + 0x18) + -8);
  if (*(longlong *)(unaff_RSI + 0x18) == 0) {
    plVar6 = unaff_R12;
  }
  plVar2 = unaff_R12;
  if (plVar6 != (longlong *)0x0) {
    plVar2 = plVar6 + 1;
  }
  while (plVar2 != (longlong *)(unaff_RSI + 0x18)) {
    plVar6 = plVar2 + -1;
    if (plVar2 == (longlong *)0x0) {
      plVar6 = unaff_R12;
    }
    if (plVar2 == (longlong *)(unaff_RSI + 0x18)) {
      return 0x1c;
    }
    lVar1 = *plVar2;
    plVar7 = (longlong *)(lVar1 + -8);
    if (lVar1 == 0) {
      plVar7 = unaff_R12;
    }
    plVar8 = unaff_R12;
    if (plVar7 != (longlong *)0x0) {
      plVar8 = plVar7 + 1;
    }
    *(longlong *)plVar2[1] = lVar1;
    *(longlong *)(*plVar2 + 8) = plVar2[1];
    plVar2[1] = (longlong)plVar2;
    *plVar2 = (longlong)plVar2;
    FUN_1808be9f0(unaff_RSI + 0x430,plVar6);
    plVar2 = plVar8;
  }
  lVar1 = *(longlong *)(unaff_R13 + 0x28);
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  FUN_18084f2d0(unaff_R13 + 0x30);
  FUN_18084f2d0();
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  lVar1 = *(longlong *)(unaff_RSI + 200);
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  FUN_1808bcca0(unaff_RSI + 0xd0);
  FUN_1808bcca0(unaff_RSI + 0xa0);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  lVar1 = *(longlong *)(unaff_R15 + 0x28);
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  FUN_18084f040(unaff_R15 + 0x30);
  FUN_18084f040();
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x200);
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  FUN_18084f560(unaff_RSI + 0x208);
  FUN_18084f560(unaff_RSI + 0x1d8);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x198);
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  FUN_18084f040(unaff_RSI + 0x1a0);
  FUN_18084f040(unaff_RSI + 0x170);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  FUN_1808bceb0(unaff_RSI + 0x3e0);
  FUN_1808bceb0(unaff_RSI + 0x408);
  FUN_1808bceb0(unaff_RSI + 0x430);
  FUN_1808bceb0(unaff_RSI + 0x458);
  FUN_1808bceb0(unaff_RSI + 0x480);
  lVar1 = unaff_RSI + 0x240;
  *(undefined8 *)(unaff_RBP + -0x28) = 0xffffffffffffffff;
  *(longlong *)(unaff_RBP + -0x30) = lVar1;
  *(undefined4 *)(unaff_RBP + -0x20) = 0xffffffff;
  FUN_1808741f0(lVar1,unaff_RBP + -0x28,unaff_RBP + -0x20);
  if (*(int *)(unaff_RBP + -0x20) == -1) {
    iVar3 = FUN_180744cc0(lVar1);
    if ((iVar3 == 0) && (iVar3 = FUN_1808744f0(unaff_RSI + 0x250), iVar3 == 0)) {
      *(undefined4 *)(unaff_RSI + 0x260) = 0xffffffff;
      *(int *)(unaff_RSI + 0x264) = (int)unaff_R12;
    }
    *(longlong **)(unaff_RSI + 0x7a0) = unaff_R12;
    return 0;
  }
  lVar1 = *(longlong *)
           ((longlong)*(int *)(unaff_RBP + -0x20) * 0x20 + 0x18 +
           *(longlong *)(*(longlong *)(unaff_RBP + -0x30) + 0x10));
  uVar10 = *(uint *)(lVar1 + 0x14);
  plVar6 = (longlong *)(lVar1 + 8);
  *(longlong *)(unaff_RBP + 0x30) = lVar1;
  uVar4 = -uVar10;
  if (-1 < (int)uVar10) {
    uVar4 = uVar10;
  }
  lVar5 = lVar1;
  if ((int)uVar4 < 0) {
    if (0 < *(int *)(lVar1 + 0x10)) goto LAB_1808bd5a0;
    if ((0 < (int)uVar10) && (*plVar6 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*plVar6,&UNK_180957f70,0x100,1);
    }
    *plVar6 = 0;
    uVar10 = 0;
    *(undefined4 *)(lVar1 + 0x14) = 0;
  }
  iVar3 = *(int *)(lVar1 + 0x10);
  if (iVar3 < 0) {
    puVar9 = (undefined4 *)(*plVar6 + (longlong)iVar3 * 4);
    lVar5 = (longlong)-iVar3;
    if (iVar3 < 0) {
      for (; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      uVar10 = *(uint *)(lVar1 + 0x14);
    }
    lVar5 = *(longlong *)(unaff_RBP + 0x30);
  }
  *(undefined4 *)(lVar1 + 0x10) = 0;
  if (0 < (int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f))) {
    FUN_180861ef0(plVar6,0);
  }
LAB_1808bd5a0:
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar5,&UNK_180987640,0x434,1);
}






// 函数: void FUN_1808bd66c(void)
void FUN_1808bd66c(void)

{
  return;
}






