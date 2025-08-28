#include "TaleWorlds.Native.Split.h"

// 05_networking_part010.c - 10 个函数

// 函数: void FUN_18084c2d0(undefined8 *param_1)
void FUN_18084c2d0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &UNK_180984a70;
  param_1[9] = &UNK_180984aa0;
  if (param_1[0xd] != 0) {
    FUN_18088c8a0();
  }
  FUN_18084c150(param_1 + 0x16);
  FUN_18084c150(param_1 + 0x14);
  FUN_18084c220(param_1 + 0x12);
  FUN_18084c220(param_1 + 0x10);
  FUN_18084c220(param_1 + 7);
  *param_1 = &UNK_180986f68;
  plVar1 = param_1 + 4;
  plVar2 = (longlong *)*plVar1;
  if ((plVar2 == plVar1) && ((longlong *)param_1[5] == plVar1)) {
    func_0x00018085dda0(plVar1);
    *param_1 = &UNK_180984ab8;
    *(undefined4 *)(param_1 + 1) = 0xdeadf00d;
    return;
  }
  plVar3 = (longlong *)0x0;
  if (plVar2 != plVar1) {
    plVar3 = plVar2;
  }
  *(undefined4 *)((longlong)plVar3 + 0x44) = 0xffffffff;
  FUN_18084c220(plVar3 + 4);
  FUN_18084c220(plVar3 + 2);
  *(longlong *)plVar3[1] = *plVar3;
  *(longlong *)(*plVar3 + 8) = plVar3[1];
  plVar3[1] = (longlong)plVar3;
  *plVar3 = (longlong)plVar3;
  *(longlong **)plVar3[1] = plVar3;
  *(longlong *)(*plVar3 + 8) = plVar3[1];
  plVar3[1] = (longlong)plVar3;
  *plVar3 = (longlong)plVar3;
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar3,&UNK_180986f90,0x30,1);
}



undefined8 FUN_18084c350(undefined8 param_1,ulonglong param_2)

{
  FUN_18084c2d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0xd8);
  }
  return param_1;
}



longlong FUN_18084c390(longlong param_1,ulonglong param_2)

{
  FUN_18084c220(param_1 + 0x38);
  FUN_1808b02a0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x48);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18084c470(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar3 = (undefined4 *)0x0;
  if (param_2 != 0) {
    if (param_2 * 4 - 1U < 0x3fffffff) {
      puVar3 = (undefined4 *)
               FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 4,&UNK_180957f70,0xf4
                             ,0,0,1);
      if (puVar3 != (undefined4 *)0x0) {
        iVar1 = (int)param_1[1];
        lVar4 = (longlong)iVar1;
        if ((iVar1 != 0) && (lVar2 = *param_1, 0 < iVar1)) {
          puVar5 = puVar3;
          do {
            *puVar5 = *(undefined4 *)((lVar2 - (longlong)puVar3) + (longlong)puVar5);
            puVar5 = puVar5 + 1;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        goto LAB_18084c510;
      }
    }
    return 0x26;
  }
LAB_18084c510:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
  }
  *param_1 = (longlong)puVar3;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18084c494(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong *unaff_RBX;
  int unaff_EDI;
  
  puVar3 = (undefined4 *)0x0;
  if (unaff_EDI == 0) {
LAB_18084c510:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&UNK_180957f70,0x100,1);
    }
    *unaff_RBX = (longlong)puVar3;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 4 - 1U < 0x3fffffff) {
    puVar3 = (undefined4 *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 4,&UNK_180957f70,0xf4,0
                          );
    if (puVar3 != (undefined4 *)0x0) {
      iVar1 = (int)unaff_RBX[1];
      lVar4 = (longlong)iVar1;
      if ((iVar1 != 0) && (lVar2 = *unaff_RBX, 0 < iVar1)) {
        puVar5 = puVar3;
        do {
          *puVar5 = *(undefined4 *)((lVar2 - (longlong)puVar3) + (longlong)puVar5);
          puVar5 = puVar5 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      goto LAB_18084c510;
    }
  }
  return 0x26;
}



undefined8 FUN_18084c55b(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084c5a0(longlong *param_1)
void FUN_18084c5a0(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar8 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return;
    }
    if ((0 < (int)uVar8) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
    }
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    uVar8 = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    lVar7 = (longlong)-iVar1;
    if (iVar1 < 0) {
      lVar6 = *param_1 + 0x14 + (longlong)iVar1 * 0x18;
      do {
        puVar5 = (undefined4 *)FUN_180847820();
        uVar2 = puVar5[1];
        uVar3 = puVar5[2];
        uVar4 = puVar5[3];
        *(undefined4 *)(lVar6 + -0x14) = *puVar5;
        *(undefined4 *)(lVar6 + -0x10) = uVar2;
        *(undefined4 *)(lVar6 + -0xc) = uVar3;
        *(undefined4 *)(lVar6 + -8) = uVar4;
        *(undefined8 *)(lVar6 + -4) = 0;
        lVar7 = lVar7 + -1;
        lVar6 = lVar6 + 0x18;
      } while (lVar7 != 0);
      uVar8 = *(uint *)((longlong)param_1 + 0xc);
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (0 < (int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f))) {
    FUN_18084d3f0(param_1,0);
  }
  return;
}





// 函数: void FUN_18084c612(undefined4 param_1,int param_2,uint param_3)
void FUN_18084c612(undefined4 param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong in_RAX;
  undefined4 *puVar4;
  longlong in_RCX;
  longlong lVar5;
  undefined8 unaff_RBP;
  longlong lVar6;
  longlong unaff_RDI;
  
  lVar6 = (longlong)param_2;
  if (0 < param_2) {
    lVar5 = in_RAX + 0x14 + in_RCX * 8;
    do {
      puVar4 = (undefined4 *)FUN_180847820();
      param_1 = *puVar4;
      uVar1 = puVar4[1];
      uVar2 = puVar4[2];
      uVar3 = puVar4[3];
      *(undefined4 *)(lVar5 + -0x14) = param_1;
      *(undefined4 *)(lVar5 + -0x10) = uVar1;
      *(undefined4 *)(lVar5 + -0xc) = uVar2;
      *(undefined4 *)(lVar5 + -8) = uVar3;
      *(undefined8 *)(lVar5 + -4) = unaff_RBP;
      lVar6 = lVar6 + -1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 != 0);
    param_3 = *(uint *)(unaff_RDI + 0xc);
  }
  *(int *)(unaff_RDI + 8) = (int)unaff_RBP;
  if (0 < (int)((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f))) {
    FUN_18084d3f0(param_1,0);
  }
  return;
}





// 函数: void FUN_18084c61e(longlong param_1)
void FUN_18084c61e(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong in_RAX;
  undefined4 *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  lVar7 = in_RAX + 0x14 + param_1 * 8;
  do {
    puVar5 = (undefined4 *)FUN_180847820();
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    *(undefined4 *)(lVar7 + -0x14) = uVar1;
    *(undefined4 *)(lVar7 + -0x10) = uVar2;
    *(undefined4 *)(lVar7 + -0xc) = uVar3;
    *(undefined4 *)(lVar7 + -8) = uVar4;
    *(undefined8 *)(lVar7 + -4) = unaff_RBP;
    unaff_RSI = unaff_RSI + -1;
    lVar7 = lVar7 + 0x18;
  } while (unaff_RSI != 0);
  *(int *)(unaff_RDI + 8) = (int)unaff_RBP;
  uVar6 = (int)*(uint *)(unaff_RDI + 0xc) >> 0x1f;
  if (0 < (int)((*(uint *)(unaff_RDI + 0xc) ^ uVar6) - uVar6)) {
    FUN_18084d3f0(uVar1,0);
  }
  return;
}





// 函数: void FUN_18084c653(undefined8 param_1,undefined8 param_2,uint param_3)
void FUN_18084c653(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined4 unaff_EBP;
  longlong unaff_RDI;
  
  *(undefined4 *)(unaff_RDI + 8) = unaff_EBP;
  if (0 < (int)((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f))) {
    FUN_18084d3f0();
  }
  return;
}





// 函数: void FUN_18084c658(undefined8 param_1,undefined8 param_2,uint param_3)
void FUN_18084c658(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined4 unaff_EBP;
  longlong unaff_RDI;
  
  *(undefined4 *)(unaff_RDI + 8) = unaff_EBP;
  if (0 < (int)((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f))) {
    FUN_18084d3f0();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084c680(longlong *param_1)
void FUN_18084c680(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != param_1) {
    if (plVar1 != param_1) {
      *(longlong *)plVar1[1] = *plVar1;
      *(longlong *)(*plVar1 + 8) = plVar1[1];
      plVar1[1] = (longlong)plVar1;
      *plVar1 = (longlong)plVar1;
      *(longlong **)plVar1[1] = plVar1;
      *(longlong *)(*plVar1 + 8) = plVar1[1];
      plVar1[1] = (longlong)plVar1;
      *plVar1 = (longlong)plVar1;
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar1,&UNK_180984b50,0xe1,1);
    }
    plVar1 = (longlong *)*param_1;
  }
  *(longlong **)param_1[1] = plVar1;
  *(longlong *)(*param_1 + 8) = param_1[1];
  param_1[1] = (longlong)param_1;
  *param_1 = (longlong)param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084c730(undefined8 *param_1)
void FUN_18084c730(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  
  plVar15 = param_1 + 0xd;
  *param_1 = &UNK_180984ac0;
  param_1[4] = &UNK_180984ac8;
  plVar11 = (longlong *)0x0;
  plVar2 = (longlong *)*plVar15;
  if ((plVar2 != plVar15) || ((longlong *)param_1[0xe] != plVar15)) {
    if (plVar2 != plVar15) {
      plVar11 = plVar2;
    }
    FUN_18084c680(plVar11 + 0x18);
    FUN_18084c680(plVar11 + 0x16);
    FUN_18084c5a0(plVar11 + 0x12);
    FUN_18084c5a0(plVar11 + 0x10);
    FUN_18084c680(plVar11 + 0xe);
    FUN_18084c680(plVar11 + 0xc);
    FUN_1808b0fb0(plVar11 + 8,0);
    *(longlong *)plVar11[1] = *plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
    *(longlong **)plVar11[1] = plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar11,&UNK_180984ad0,0xe,1);
  }
  plVar2 = param_1 + 0xb;
  plVar3 = (longlong *)*plVar2;
  if ((plVar3 != plVar2) || ((longlong *)param_1[0xc] != plVar2)) {
    if (plVar3 != plVar2) {
      plVar11 = plVar3;
    }
    FUN_1808b0fb0(plVar11 + 3,0);
    *(longlong *)plVar11[1] = *plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
    *(longlong **)plVar11[1] = plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar11,&UNK_180984ad0,0x12,1);
  }
  plVar3 = param_1 + 0x11;
  uVar10 = *(uint *)((longlong)param_1 + 0x94);
  plVar9 = (longlong *)(ulonglong)uVar10;
  if ((int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) < 0) {
    if (*(int *)(param_1 + 0x12) < 1) {
      if ((0 < (int)uVar10) && (*plVar3 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*plVar3,&UNK_180957f70,0x100,1);
      }
      *plVar3 = 0;
      *(undefined4 *)((longlong)param_1 + 0x94) = 0;
      plVar9 = plVar11;
      goto LAB_18084c923;
    }
  }
  else {
LAB_18084c923:
    uVar10 = (uint)plVar9;
    iVar1 = *(int *)(param_1 + 0x12);
    if (iVar1 < 0) {
      lVar13 = (longlong)-iVar1;
      if (iVar1 < 0) {
        puVar8 = (undefined4 *)((longlong)iVar1 * 0x20 + 0x10 + *plVar3);
        do {
          puVar7 = (undefined4 *)FUN_180847820();
          uVar4 = puVar7[1];
          uVar5 = puVar7[2];
          uVar6 = puVar7[3];
          puVar8[-4] = *puVar7;
          puVar8[-3] = uVar4;
          puVar8[-2] = uVar5;
          puVar8[-1] = uVar6;
          *puVar8 = 4;
          puVar8[1] = 4;
          puVar7 = (undefined4 *)FUN_18084da10();
          puVar8[2] = *puVar7;
          puVar8[3] = 0;
          lVar13 = lVar13 + -1;
          puVar8 = puVar8 + 8;
        } while (lVar13 != 0);
        uVar10 = *(uint *)((longlong)param_1 + 0x94);
      }
    }
    *(undefined4 *)(param_1 + 0x12) = 0;
    if (0 < (int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f))) {
      FUN_18084d620(plVar3,0);
    }
  }
  uVar10 = *(uint *)((longlong)param_1 + 0x84);
  if ((int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) < 0) {
    if (0 < *(int *)(param_1 + 0x10)) goto LAB_18084ca76;
    if ((0 < (int)uVar10) && (param_1[0xf] != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1[0xf],&UNK_180957f70,0x100,1);
    }
    param_1[0xf] = 0;
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  uVar10 = *(uint *)(param_1 + 0x10);
  uVar14 = (ulonglong)uVar10;
  if ((int)uVar10 < 0) {
    lVar13 = (longlong)(int)-uVar10;
    if ((int)uVar10 < 0) {
      lVar12 = param_1[0xf] + 0x1c + (longlong)(int)uVar10 * 0x28;
      do {
        puVar8 = (undefined4 *)FUN_180847820();
        uVar4 = puVar8[1];
        uVar5 = puVar8[2];
        uVar6 = puVar8[3];
        *(undefined4 *)(lVar12 + -0x1c) = *puVar8;
        *(undefined4 *)(lVar12 + -0x18) = uVar4;
        *(undefined4 *)(lVar12 + -0x14) = uVar5;
        *(undefined4 *)(lVar12 + -0x10) = uVar6;
        *(undefined8 *)(lVar12 + -0xc) = 0;
        *(undefined8 *)(lVar12 + -4) = 0;
        *(undefined8 *)(lVar12 + 4) = 0;
        lVar13 = lVar13 + -1;
        lVar12 = lVar12 + 0x28;
      } while (lVar13 != 0);
    }
  }
  else if (0 < (int)uVar10) {
    lVar13 = param_1[0xf] + 0x10;
    do {
      FUN_180840270(lVar13);
      lVar13 = lVar13 + 0x28;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  uVar10 = (int)*(uint *)((longlong)param_1 + 0x84) >> 0x1f;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < (int)((*(uint *)((longlong)param_1 + 0x84) ^ uVar10) - uVar10)) {
    FUN_18084d520(param_1 + 0xf,0);
  }
LAB_18084ca76:
  plVar11 = (longlong *)*plVar15;
  if (plVar11 != plVar15) {
    do {
      if (plVar11 == plVar15) break;
      plVar3 = (longlong *)*plVar11;
      *(longlong **)plVar11[1] = plVar3;
      *(longlong *)(*plVar11 + 8) = plVar11[1];
      plVar11[1] = (longlong)plVar11;
      *plVar11 = (longlong)plVar11;
      plVar11 = plVar3;
    } while (plVar3 != plVar15);
    plVar11 = (longlong *)*plVar15;
  }
  *(longlong **)param_1[0xe] = plVar11;
  *(undefined8 *)(*plVar15 + 8) = param_1[0xe];
  param_1[0xe] = plVar15;
  *plVar15 = (longlong)plVar15;
  plVar15 = (longlong *)*plVar2;
  if (plVar15 != plVar2) {
    do {
      if (plVar15 == plVar2) break;
      plVar11 = (longlong *)*plVar15;
      *(longlong **)plVar15[1] = plVar11;
      *(longlong *)(*plVar15 + 8) = plVar15[1];
      plVar15[1] = (longlong)plVar15;
      *plVar15 = (longlong)plVar15;
      plVar15 = plVar11;
    } while (plVar11 != plVar2);
    plVar15 = (longlong *)*plVar2;
  }
  *(longlong **)param_1[0xc] = plVar15;
  *(undefined8 *)(*plVar2 + 8) = param_1[0xc];
  param_1[0xc] = plVar2;
  *plVar2 = (longlong)plVar2;
  FUN_18084c5a0(param_1 + 9);
  FUN_18084c5a0(param_1 + 7);
  FUN_18084c220(param_1 + 5);
  *(undefined4 *)(param_1 + 1) = 0xdeadf00d;
  *param_1 = &UNK_180984ab8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084c738(undefined8 *param_1)
void FUN_18084c738(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  
  plVar15 = param_1 + 0xd;
  *param_1 = &UNK_180984ac0;
  param_1[4] = &UNK_180984ac8;
  plVar11 = (longlong *)0x0;
  plVar2 = (longlong *)*plVar15;
  if ((plVar2 != plVar15) || ((longlong *)param_1[0xe] != plVar15)) {
    if (plVar2 != plVar15) {
      plVar11 = plVar2;
    }
    FUN_18084c680(plVar11 + 0x18);
    FUN_18084c680(plVar11 + 0x16);
    FUN_18084c5a0(plVar11 + 0x12);
    FUN_18084c5a0(plVar11 + 0x10);
    FUN_18084c680(plVar11 + 0xe);
    FUN_18084c680(plVar11 + 0xc);
    FUN_1808b0fb0(plVar11 + 8,0);
    *(longlong *)plVar11[1] = *plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
    *(longlong **)plVar11[1] = plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar11,&UNK_180984ad0,0xe,1);
  }
  plVar2 = param_1 + 0xb;
  plVar3 = (longlong *)*plVar2;
  if ((plVar3 != plVar2) || ((longlong *)param_1[0xc] != plVar2)) {
    if (plVar3 != plVar2) {
      plVar11 = plVar3;
    }
    FUN_1808b0fb0(plVar11 + 3,0);
    *(longlong *)plVar11[1] = *plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
    *(longlong **)plVar11[1] = plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar11,&UNK_180984ad0,0x12,1);
  }
  plVar3 = param_1 + 0x11;
  uVar10 = *(uint *)((longlong)param_1 + 0x94);
  plVar9 = (longlong *)(ulonglong)uVar10;
  if ((int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) < 0) {
    if (*(int *)(param_1 + 0x12) < 1) {
      if ((0 < (int)uVar10) && (*plVar3 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*plVar3,&UNK_180957f70,0x100,1);
      }
      *plVar3 = 0;
      *(undefined4 *)((longlong)param_1 + 0x94) = 0;
      plVar9 = plVar11;
      goto LAB_18084c923;
    }
  }
  else {
LAB_18084c923:
    uVar10 = (uint)plVar9;
    iVar1 = *(int *)(param_1 + 0x12);
    if (iVar1 < 0) {
      lVar13 = (longlong)-iVar1;
      if (iVar1 < 0) {
        puVar8 = (undefined4 *)((longlong)iVar1 * 0x20 + 0x10 + *plVar3);
        do {
          puVar7 = (undefined4 *)FUN_180847820();
          uVar4 = puVar7[1];
          uVar5 = puVar7[2];
          uVar6 = puVar7[3];
          puVar8[-4] = *puVar7;
          puVar8[-3] = uVar4;
          puVar8[-2] = uVar5;
          puVar8[-1] = uVar6;
          *puVar8 = 4;
          puVar8[1] = 4;
          puVar7 = (undefined4 *)FUN_18084da10();
          puVar8[2] = *puVar7;
          puVar8[3] = 0;
          lVar13 = lVar13 + -1;
          puVar8 = puVar8 + 8;
        } while (lVar13 != 0);
        uVar10 = *(uint *)((longlong)param_1 + 0x94);
      }
    }
    *(undefined4 *)(param_1 + 0x12) = 0;
    if (0 < (int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f))) {
      FUN_18084d620(plVar3,0);
    }
  }
  uVar10 = *(uint *)((longlong)param_1 + 0x84);
  if ((int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) < 0) {
    if (0 < *(int *)(param_1 + 0x10)) goto LAB_18084ca76;
    if ((0 < (int)uVar10) && (param_1[0xf] != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1[0xf],&UNK_180957f70,0x100,1);
    }
    param_1[0xf] = 0;
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  uVar10 = *(uint *)(param_1 + 0x10);
  uVar14 = (ulonglong)uVar10;
  if ((int)uVar10 < 0) {
    lVar13 = (longlong)(int)-uVar10;
    if ((int)uVar10 < 0) {
      lVar12 = param_1[0xf] + 0x1c + (longlong)(int)uVar10 * 0x28;
      do {
        puVar8 = (undefined4 *)FUN_180847820();
        uVar4 = puVar8[1];
        uVar5 = puVar8[2];
        uVar6 = puVar8[3];
        *(undefined4 *)(lVar12 + -0x1c) = *puVar8;
        *(undefined4 *)(lVar12 + -0x18) = uVar4;
        *(undefined4 *)(lVar12 + -0x14) = uVar5;
        *(undefined4 *)(lVar12 + -0x10) = uVar6;
        *(undefined8 *)(lVar12 + -0xc) = 0;
        *(undefined8 *)(lVar12 + -4) = 0;
        *(undefined8 *)(lVar12 + 4) = 0;
        lVar13 = lVar13 + -1;
        lVar12 = lVar12 + 0x28;
      } while (lVar13 != 0);
    }
  }
  else if (0 < (int)uVar10) {
    lVar13 = param_1[0xf] + 0x10;
    do {
      FUN_180840270(lVar13);
      lVar13 = lVar13 + 0x28;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  uVar10 = (int)*(uint *)((longlong)param_1 + 0x84) >> 0x1f;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < (int)((*(uint *)((longlong)param_1 + 0x84) ^ uVar10) - uVar10)) {
    FUN_18084d520(param_1 + 0xf,0);
  }
LAB_18084ca76:
  plVar11 = (longlong *)*plVar15;
  if (plVar11 != plVar15) {
    do {
      if (plVar11 == plVar15) break;
      plVar3 = (longlong *)*plVar11;
      *(longlong **)plVar11[1] = plVar3;
      *(longlong *)(*plVar11 + 8) = plVar11[1];
      plVar11[1] = (longlong)plVar11;
      *plVar11 = (longlong)plVar11;
      plVar11 = plVar3;
    } while (plVar3 != plVar15);
    plVar11 = (longlong *)*plVar15;
  }
  *(longlong **)param_1[0xe] = plVar11;
  *(undefined8 *)(*plVar15 + 8) = param_1[0xe];
  param_1[0xe] = plVar15;
  *plVar15 = (longlong)plVar15;
  plVar15 = (longlong *)*plVar2;
  if (plVar15 != plVar2) {
    do {
      if (plVar15 == plVar2) break;
      plVar11 = (longlong *)*plVar15;
      *(longlong **)plVar15[1] = plVar11;
      *(longlong *)(*plVar15 + 8) = plVar15[1];
      plVar15[1] = (longlong)plVar15;
      *plVar15 = (longlong)plVar15;
      plVar15 = plVar11;
    } while (plVar11 != plVar2);
    plVar15 = (longlong *)*plVar2;
  }
  *(longlong **)param_1[0xc] = plVar15;
  *(undefined8 *)(*plVar2 + 8) = param_1[0xc];
  param_1[0xc] = plVar2;
  *plVar2 = (longlong)plVar2;
  FUN_18084c5a0(param_1 + 9);
  FUN_18084c5a0(param_1 + 7);
  FUN_18084c220(param_1 + 5);
  *(undefined4 *)(param_1 + 1) = 0xdeadf00d;
  *param_1 = &UNK_180984ab8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084c744(undefined8 *param_1)
void FUN_18084c744(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 in_RAX;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  
  plVar15 = param_1 + 0xd;
  *param_1 = in_RAX;
  param_1[4] = &UNK_180984ac8;
  plVar11 = (longlong *)0x0;
  plVar2 = (longlong *)*plVar15;
  if ((plVar2 != plVar15) || ((longlong *)param_1[0xe] != plVar15)) {
    if (plVar2 != plVar15) {
      plVar11 = plVar2;
    }
    FUN_18084c680(plVar11 + 0x18);
    FUN_18084c680(plVar11 + 0x16);
    FUN_18084c5a0(plVar11 + 0x12);
    FUN_18084c5a0(plVar11 + 0x10);
    FUN_18084c680(plVar11 + 0xe);
    FUN_18084c680(plVar11 + 0xc);
    FUN_1808b0fb0(plVar11 + 8,0);
    *(longlong *)plVar11[1] = *plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
    *(longlong **)plVar11[1] = plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar11,&UNK_180984ad0,0xe,1);
  }
  plVar2 = param_1 + 0xb;
  plVar3 = (longlong *)*plVar2;
  if ((plVar3 != plVar2) || ((longlong *)param_1[0xc] != plVar2)) {
    if (plVar3 != plVar2) {
      plVar11 = plVar3;
    }
    FUN_1808b0fb0(plVar11 + 3,0);
    *(longlong *)plVar11[1] = *plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
    *(longlong **)plVar11[1] = plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar11,&UNK_180984ad0,0x12,1);
  }
  plVar3 = param_1 + 0x11;
  uVar10 = *(uint *)((longlong)param_1 + 0x94);
  plVar9 = (longlong *)(ulonglong)uVar10;
  if ((int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) < 0) {
    if (*(int *)(param_1 + 0x12) < 1) {
      if ((0 < (int)uVar10) && (*plVar3 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*plVar3,&UNK_180957f70,0x100,1);
      }
      *plVar3 = 0;
      *(undefined4 *)((longlong)param_1 + 0x94) = 0;
      plVar9 = plVar11;
      goto LAB_18084c923;
    }
  }
  else {
LAB_18084c923:
    uVar10 = (uint)plVar9;
    iVar1 = *(int *)(param_1 + 0x12);
    if (iVar1 < 0) {
      lVar13 = (longlong)-iVar1;
      if (iVar1 < 0) {
        puVar8 = (undefined4 *)((longlong)iVar1 * 0x20 + 0x10 + *plVar3);
        do {
          puVar7 = (undefined4 *)FUN_180847820();
          uVar4 = puVar7[1];
          uVar5 = puVar7[2];
          uVar6 = puVar7[3];
          puVar8[-4] = *puVar7;
          puVar8[-3] = uVar4;
          puVar8[-2] = uVar5;
          puVar8[-1] = uVar6;
          *puVar8 = 4;
          puVar8[1] = 4;
          puVar7 = (undefined4 *)FUN_18084da10();
          puVar8[2] = *puVar7;
          puVar8[3] = 0;
          lVar13 = lVar13 + -1;
          puVar8 = puVar8 + 8;
        } while (lVar13 != 0);
        uVar10 = *(uint *)((longlong)param_1 + 0x94);
      }
    }
    *(undefined4 *)(param_1 + 0x12) = 0;
    if (0 < (int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f))) {
      FUN_18084d620(plVar3,0);
    }
  }
  uVar10 = *(uint *)((longlong)param_1 + 0x84);
  if ((int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) < 0) {
    if (0 < *(int *)(param_1 + 0x10)) goto LAB_18084ca76;
    if ((0 < (int)uVar10) && (param_1[0xf] != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1[0xf],&UNK_180957f70,0x100,1);
    }
    param_1[0xf] = 0;
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  uVar10 = *(uint *)(param_1 + 0x10);
  uVar14 = (ulonglong)uVar10;
  if ((int)uVar10 < 0) {
    lVar13 = (longlong)(int)-uVar10;
    if ((int)uVar10 < 0) {
      lVar12 = param_1[0xf] + 0x1c + (longlong)(int)uVar10 * 0x28;
      do {
        puVar8 = (undefined4 *)FUN_180847820();
        uVar4 = puVar8[1];
        uVar5 = puVar8[2];
        uVar6 = puVar8[3];
        *(undefined4 *)(lVar12 + -0x1c) = *puVar8;
        *(undefined4 *)(lVar12 + -0x18) = uVar4;
        *(undefined4 *)(lVar12 + -0x14) = uVar5;
        *(undefined4 *)(lVar12 + -0x10) = uVar6;
        *(undefined8 *)(lVar12 + -0xc) = 0;
        *(undefined8 *)(lVar12 + -4) = 0;
        *(undefined8 *)(lVar12 + 4) = 0;
        lVar13 = lVar13 + -1;
        lVar12 = lVar12 + 0x28;
      } while (lVar13 != 0);
    }
  }
  else if (0 < (int)uVar10) {
    lVar13 = param_1[0xf] + 0x10;
    do {
      FUN_180840270(lVar13);
      lVar13 = lVar13 + 0x28;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  uVar10 = (int)*(uint *)((longlong)param_1 + 0x84) >> 0x1f;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < (int)((*(uint *)((longlong)param_1 + 0x84) ^ uVar10) - uVar10)) {
    FUN_18084d520(param_1 + 0xf,0);
  }
LAB_18084ca76:
  plVar11 = (longlong *)*plVar15;
  if (plVar11 != plVar15) {
    do {
      if (plVar11 == plVar15) break;
      plVar3 = (longlong *)*plVar11;
      *(longlong **)plVar11[1] = plVar3;
      *(longlong *)(*plVar11 + 8) = plVar11[1];
      plVar11[1] = (longlong)plVar11;
      *plVar11 = (longlong)plVar11;
      plVar11 = plVar3;
    } while (plVar3 != plVar15);
    plVar11 = (longlong *)*plVar15;
  }
  *(longlong **)param_1[0xe] = plVar11;
  *(undefined8 *)(*plVar15 + 8) = param_1[0xe];
  param_1[0xe] = plVar15;
  *plVar15 = (longlong)plVar15;
  plVar15 = (longlong *)*plVar2;
  if (plVar15 != plVar2) {
    do {
      if (plVar15 == plVar2) break;
      plVar11 = (longlong *)*plVar15;
      *(longlong **)plVar15[1] = plVar11;
      *(longlong *)(*plVar15 + 8) = plVar15[1];
      plVar15[1] = (longlong)plVar15;
      *plVar15 = (longlong)plVar15;
      plVar15 = plVar11;
    } while (plVar11 != plVar2);
    plVar15 = (longlong *)*plVar2;
  }
  *(longlong **)param_1[0xc] = plVar15;
  *(undefined8 *)(*plVar2 + 8) = param_1[0xc];
  param_1[0xc] = plVar2;
  *plVar2 = (longlong)plVar2;
  FUN_18084c5a0(param_1 + 9);
  FUN_18084c5a0(param_1 + 7);
  FUN_18084c220(param_1 + 5);
  *(undefined4 *)(param_1 + 1) = 0xdeadf00d;
  *param_1 = &UNK_180984ab8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



