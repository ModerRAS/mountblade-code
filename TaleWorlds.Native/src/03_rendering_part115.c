#include "TaleWorlds.Native.Split.h"

// 03_rendering_part115.c - 7 个函数

// 函数: void FUN_180337b24(void)
void FUN_180337b24(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180337b40(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar1 = **(undefined4 **)(param_1 + 8);
  *(undefined4 **)(param_1 + 8) = *(undefined4 **)(param_1 + 8) + 1;
  switch(uVar1) {
  case 0:
  case 7:
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x1c8,8,3);
    plVar3 = (longlong *)FUN_180339110(uVar2);
    (**(code **)(*plVar3 + 0x20))(plVar3,param_1,0);
    *(undefined4 *)((longlong)plVar3 + 0x8c) = uVar1;
    return plVar3;
  case 1:
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x200,8,3);
    plVar3 = (longlong *)FUN_180339920(uVar2);
    (**(code **)(*plVar3 + 0x20))(plVar3,param_1,0);
    *(undefined4 *)((longlong)plVar3 + 0x8c) = 1;
    return plVar3;
  case 2:
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0xd8,8,3);
    plVar3 = (longlong *)FUN_18033a200(uVar2);
    (**(code **)(*plVar3 + 0x20))(plVar3,param_1,0);
    *(undefined4 *)((longlong)plVar3 + 0x8c) = 2;
    return plVar3;
  default:
    return (longlong *)0x0;
  case 4:
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0xf8,8,3);
    plVar3 = (longlong *)FUN_180339d70(uVar2);
    (**(code **)(*plVar3 + 0x20))(plVar3,param_1,0);
    *(undefined4 *)((longlong)plVar3 + 0x8c) = 4;
    return plVar3;
  case 6:
    plVar3 = (longlong *)(*_DAT_180c918d8)(&DAT_180c918c0);
    (**(code **)(*plVar3 + 0x20))(plVar3,param_1,0);
    *(undefined4 *)((longlong)plVar3 + 0x8c) = 6;
    return plVar3;
  }
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180337d40(longlong param_1,undefined8 param_2,ulonglong *param_3)
void FUN_180337d40(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  
  lVar7 = *(longlong *)(param_1 + 0x90);
  lVar3 = *(longlong *)(param_1 + 0x98) - lVar7;
  iVar8 = 0;
  lVar1 = lVar3 >> 0x3f;
  if (lVar3 / 0x1a0 + lVar1 != lVar1) {
    uVar6 = 0;
    do {
      plVar5 = (longlong *)param_3[1];
      lVar7 = uVar6 * 0x1a0 + lVar7;
      if (plVar5 < (longlong *)param_3[2]) {
        param_3[1] = (ulonglong)(plVar5 + 1);
        *plVar5 = lVar7;
      }
      else {
        plVar4 = (longlong *)*param_3;
        lVar1 = (longlong)plVar5 - (longlong)plVar4 >> 3;
        if (lVar1 == 0) {
          lVar1 = 1;
LAB_180337de9:
          plVar2 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 8,(char)param_3[3]);
          plVar4 = (longlong *)*param_3;
          plVar5 = (longlong *)param_3[1];
        }
        else {
          lVar1 = lVar1 * 2;
          if (lVar1 != 0) goto LAB_180337de9;
          plVar2 = (longlong *)0x0;
        }
        if (plVar4 != plVar5) {
                    // WARNING: Subroutine does not return
          memmove(plVar2,plVar4,(longlong)plVar5 - (longlong)plVar4);
        }
        *plVar2 = lVar7;
        if (*param_3 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *param_3 = (ulonglong)plVar2;
        param_3[2] = (ulonglong)(plVar2 + lVar1);
        param_3[1] = (ulonglong)(plVar2 + 1);
      }
      lVar7 = *(longlong *)(param_1 + 0x90);
      iVar8 = iVar8 + 1;
      uVar6 = (ulonglong)iVar8;
    } while (uVar6 < (ulonglong)((*(longlong *)(param_1 + 0x98) - lVar7) / 0x1a0));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180337d8a(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_180337d8a(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong *unaff_RBX;
  longlong *plVar4;
  ulonglong uVar5;
  longlong unaff_R12;
  longlong unaff_R13;
  int unaff_R15D;
  
  uVar5 = 0;
  do {
    plVar4 = (longlong *)unaff_RBX[1];
    param_3 = uVar5 * 0x1a0 + param_3;
    if (plVar4 < (longlong *)unaff_RBX[2]) {
      unaff_RBX[1] = (ulonglong)(plVar4 + 1);
      *plVar4 = param_3;
    }
    else {
      plVar2 = (longlong *)*unaff_RBX;
      lVar3 = (longlong)plVar4 - (longlong)plVar2 >> 3;
      if (lVar3 == 0) {
        lVar3 = 1;
LAB_180337de9:
        plVar1 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar3 * 8,(char)unaff_RBX[3]);
        plVar2 = (longlong *)*unaff_RBX;
        plVar4 = (longlong *)unaff_RBX[1];
      }
      else {
        lVar3 = lVar3 * 2;
        if (lVar3 != 0) goto LAB_180337de9;
        plVar1 = (longlong *)0x0;
      }
      if (plVar2 != plVar4) {
                    // WARNING: Subroutine does not return
        memmove(plVar1,plVar2,(longlong)plVar4 - (longlong)plVar2);
      }
      *plVar1 = param_3;
      if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *unaff_RBX = (ulonglong)plVar1;
      unaff_RBX[2] = (ulonglong)(plVar1 + lVar3);
      unaff_RBX[1] = (ulonglong)(plVar1 + 1);
    }
    param_3 = *(longlong *)(unaff_R13 + 0x90);
    unaff_R15D = unaff_R15D + 1;
    uVar5 = (ulonglong)unaff_R15D;
    lVar3 = SUB168(SEXT816(unaff_R12) * SEXT816(*(longlong *)(unaff_R13 + 0x98) - param_3),8);
    if ((ulonglong)((lVar3 >> 7) - (lVar3 >> 0x3f)) <= uVar5) {
      return;
    }
  } while( true );
}





// 函数: void FUN_180337e97(void)
void FUN_180337e97(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180337eb0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lStackX_8;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  iVar12 = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x7c);
  uVar2 = *(undefined4 *)(param_2 + 0x80);
  uVar3 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  lVar8 = *(longlong *)(param_2 + 0x90);
  lVar7 = *(longlong *)(param_2 + 0x98) - lVar8;
  lVar9 = lVar7 >> 0x3f;
  if (lVar7 / 0x1a0 + lVar9 != lVar9) {
    uVar11 = 0;
    do {
      uVar10 = *(ulonglong *)(param_1 + 0x98);
      lVar8 = uVar11 * 0x1a0 + lVar8;
      if (uVar10 < *(ulonglong *)(param_1 + 0xa0)) {
        *(ulonglong *)(param_1 + 0x98) = uVar10 + 0x1a0;
        FUN_18033b460(uVar10,lVar8);
      }
      else {
        lVar9 = *(longlong *)(param_1 + 0x90);
        lVar7 = (longlong)(uVar10 - lVar9) / 0x1a0;
        if (lVar7 == 0) {
          lVar7 = 1;
LAB_180337feb:
          lVar6 = FUN_18062b420(_DAT_180c8ed18,lVar7 * 0x1a0,*(undefined1 *)(param_1 + 0xa8));
          uVar10 = *(ulonglong *)(param_1 + 0x98);
          lVar9 = *(longlong *)(param_1 + 0x90);
        }
        else {
          lVar7 = lVar7 * 2;
          if (lVar7 != 0) goto LAB_180337feb;
          lVar6 = 0;
        }
        FUN_180285440(&lStackX_8,lVar9,uVar10,lVar6);
        lVar5 = lStackX_8;
        FUN_18033b460(lStackX_8,lVar8);
        lVar8 = *(longlong *)(param_1 + 0x98);
        lVar9 = *(longlong *)(param_1 + 0x90);
        if (lVar9 != lVar8) {
          do {
            FUN_180281e80(lVar9);
            lVar9 = lVar9 + 0x1a0;
          } while (lVar9 != lVar8);
          lVar9 = *(longlong *)(param_1 + 0x90);
        }
        if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar9);
        }
        *(longlong *)(param_1 + 0x90) = lVar6;
        *(longlong *)(param_1 + 0x98) = lVar5 + 0x1a0;
        *(longlong *)(param_1 + 0xa0) = lVar7 * 0x1a0 + lVar6;
      }
      lVar8 = *(longlong *)(param_2 + 0x90);
      iVar12 = iVar12 + 1;
      uVar11 = (ulonglong)iVar12;
    } while (uVar11 < (ulonglong)((*(longlong *)(param_2 + 0x98) - lVar8) / 0x1a0));
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180337f5a(void)
void FUN_180337f5a(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_RDI;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong in_R9;
  longlong lVar7;
  longlong in_R11;
  int unaff_R12D;
  longlong unaff_R13;
  longlong in_stack_00000060;
  
  uVar6 = 0;
  do {
    uVar5 = *(ulonglong *)(unaff_RDI + 0x98);
    in_R9 = uVar6 * 0x1a0 + in_R9;
    if (uVar5 < *(ulonglong *)(unaff_RDI + 0xa0)) {
      *(ulonglong *)(unaff_RDI + 0x98) = uVar5 + 0x1a0;
      FUN_18033b460(uVar5,in_R9);
    }
    else {
      lVar7 = *(longlong *)(unaff_RDI + 0x90);
      lVar3 = SUB168(SEXT816(in_R11) * SEXT816((longlong)(uVar5 - lVar7)),8);
      lVar3 = (lVar3 >> 7) - (lVar3 >> 0x3f);
      if (lVar3 == 0) {
        lVar3 = 1;
LAB_180337feb:
        lVar2 = FUN_18062b420(_DAT_180c8ed18,lVar3 * 0x1a0,*(undefined1 *)(unaff_RDI + 0xa8));
        uVar5 = *(ulonglong *)(unaff_RDI + 0x98);
        lVar7 = *(longlong *)(unaff_RDI + 0x90);
      }
      else {
        lVar3 = lVar3 * 2;
        if (lVar3 != 0) goto LAB_180337feb;
        lVar2 = 0;
      }
      FUN_180285440(&stack0x00000060,lVar7,uVar5,lVar2);
      lVar1 = in_stack_00000060;
      FUN_18033b460(in_stack_00000060,in_R9);
      lVar7 = *(longlong *)(unaff_RDI + 0x98);
      lVar4 = *(longlong *)(unaff_RDI + 0x90);
      if (lVar4 != lVar7) {
        do {
          FUN_180281e80(lVar4);
          lVar4 = lVar4 + 0x1a0;
        } while (lVar4 != lVar7);
        lVar4 = *(longlong *)(unaff_RDI + 0x90);
      }
      if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar4);
      }
      *(longlong *)(unaff_RDI + 0x90) = lVar2;
      *(longlong *)(unaff_RDI + 0x98) = lVar1 + 0x1a0;
      *(longlong *)(unaff_RDI + 0xa0) = lVar3 * 0x1a0 + lVar2;
    }
    in_R9 = *(longlong *)(unaff_R13 + 0x90);
    unaff_R12D = unaff_R12D + 1;
    in_R11 = 0x4ec4ec4ec4ec4ec5;
    uVar6 = (ulonglong)unaff_R12D;
    if ((ulonglong)((*(longlong *)(unaff_R13 + 0x98) - in_R9) / 0x1a0) <= uVar6) {
      return;
    }
  } while( true );
}





// 函数: void FUN_1803380ef(void)
void FUN_1803380ef(void)

{
  return;
}





// 函数: void FUN_180338100(longlong param_1,longlong *param_2)
void FUN_180338100(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  
  FUN_180639ec0(param_2,param_1);
  puVar5 = (undefined4 *)param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (undefined4 *)param_2[1];
  }
  *puVar5 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar5 = (undefined4 *)param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (undefined4 *)param_2[1];
  }
  *puVar5 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar5 = (undefined4 *)param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 0x60);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (undefined4 *)param_2[1];
  }
  *puVar5 = uVar1;
  param_2[1] = param_2[1] + 4;
  pcVar3 = (char *)param_2[1];
  if (((((*(float *)(param_1 + 0x100) == 0.0) && (*(float *)(param_1 + 0x104) == 0.0)) &&
       (*(float *)(param_1 + 0x108) == 0.0)) &&
      ((((*(float *)(param_1 + 0xd0) == 1.0 && (*(float *)(param_1 + 0xd4) == 0.0)) &&
        ((*(float *)(param_1 + 0xd8) == 0.0 &&
         ((*(float *)(param_1 + 0xe0) == 0.0 && (*(float *)(param_1 + 0xe4) == 1.0)))))) &&
       (*(float *)(param_1 + 0xe8) == 0.0)))) &&
     (((*(float *)(param_1 + 0xf0) == 0.0 && (*(float *)(param_1 + 0xf4) == 0.0)) &&
      (*(float *)(param_1 + 0xf8) == 1.0)))) {
    cVar7 = '\x01';
  }
  else {
    cVar7 = '\0';
  }
  if ((ulonglong)((*param_2 - (longlong)pcVar3) + param_2[2]) < 2) {
    FUN_180639bf0(param_2,pcVar3 + (1 - *param_2));
    pcVar3 = (char *)param_2[1];
  }
  *pcVar3 = cVar7;
  param_2[1] = param_2[1] + 1;
  puVar5 = (undefined4 *)param_2[1];
  if (cVar7 == '\0') {
    FUN_18063a110(param_2,(float *)(param_1 + 0xd0));
    puVar5 = (undefined4 *)param_2[1];
  }
  uVar1 = *(undefined4 *)(param_1 + 100);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (undefined4 *)param_2[1];
  }
  *puVar5 = uVar1;
  param_2[1] = param_2[1] + 4;
  FUN_180639fd0(param_2,param_1 + 0x80);
  FUN_180639fd0(param_2,param_1 + 0x90);
  FUN_180639fd0(param_2,param_1 + 0xa0);
  FUN_180639fd0(param_2,param_1 + 0xb0);
  FUN_180639fd0(param_2,param_1 + 0xc0);
  puVar5 = (undefined4 *)param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (undefined4 *)param_2[1];
  }
  *puVar5 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar5 = (undefined4 *)param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 0x198);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (undefined4 *)param_2[1];
  }
  *puVar5 = uVar1;
  param_2[1] = param_2[1] + 4;
  piVar4 = (int *)param_2[1];
  lVar6 = *(longlong *)(param_1 + 0x138);
  lVar11 = *(longlong *)(param_1 + 0x130);
  if ((ulonglong)((*param_2 - (longlong)piVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)piVar4 + (4 - *param_2));
    piVar4 = (int *)param_2[1];
  }
  iVar8 = (int)(lVar6 - lVar11 >> 3);
  *piVar4 = iVar8;
  uVar13 = 0;
  puVar5 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar5;
  uVar10 = uVar13;
  if (0 < iVar8) {
    do {
      lVar6 = *(longlong *)(param_1 + 0x130);
      if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 9) {
        FUN_180639bf0(param_2,(longlong)puVar5 + (8 - *param_2));
        puVar5 = (undefined4 *)param_2[1];
      }
      *puVar5 = *(undefined4 *)(lVar6 + uVar10 * 8);
      param_2[1] = param_2[1] + 4;
      uVar9 = uVar10 + 1;
      *(undefined4 *)param_2[1] = *(undefined4 *)(lVar6 + 4 + uVar10 * 8);
      puVar5 = (undefined4 *)(param_2[1] + 4);
      param_2[1] = (longlong)puVar5;
      uVar10 = uVar9;
    } while ((longlong)uVar9 < (longlong)iVar8);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x7c);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (undefined4 *)param_2[1];
  }
  *puVar5 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar5 = (undefined4 *)param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 0x74);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (undefined4 *)param_2[1];
  }
  *puVar5 = uVar1;
  puVar5 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar5;
  uVar10 = uVar13;
  uVar9 = uVar13;
  if (*(int *)(param_1 + 0x74) != 0) {
    do {
      lVar6 = *param_2;
      lVar11 = param_2[2];
      lVar2 = *(longlong *)(param_1 + 0x150);
      if ((ulonglong)((lVar6 - (longlong)puVar5) + lVar11) < 0x41) {
        FUN_180639bf0(param_2,(longlong)puVar5 + (0x40 - lVar6));
        puVar5 = (undefined4 *)param_2[1];
        lVar11 = param_2[2];
        lVar6 = *param_2;
      }
      if ((ulonglong)((lVar6 - (longlong)puVar5) + lVar11) < 0x11) {
        FUN_180639bf0(param_2,(longlong)puVar5 + (0x10 - lVar6));
        puVar5 = (undefined4 *)param_2[1];
      }
      *puVar5 = *(undefined4 *)(uVar10 + lVar2);
      param_2[1] = param_2[1] + 4;
      *(undefined4 *)param_2[1] = *(undefined4 *)(uVar10 + 4 + lVar2);
      param_2[1] = param_2[1] + 4;
      *(undefined4 *)param_2[1] = *(undefined4 *)(uVar10 + 8 + lVar2);
      param_2[1] = param_2[1] + 4;
      *(undefined4 *)param_2[1] = *(undefined4 *)(uVar10 + 0xc + lVar2);
      puVar5 = (undefined4 *)(param_2[1] + 4);
      param_2[1] = (longlong)puVar5;
      if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 0x11) {
        FUN_180639bf0(param_2,(longlong)puVar5 + (0x10 - *param_2));
        puVar5 = (undefined4 *)param_2[1];
      }
      *puVar5 = *(undefined4 *)(uVar10 + 0x10 + lVar2);
      param_2[1] = param_2[1] + 4;
      *(undefined4 *)param_2[1] = *(undefined4 *)(uVar10 + 0x14 + lVar2);
      param_2[1] = param_2[1] + 4;
      *(undefined4 *)param_2[1] = *(undefined4 *)(uVar10 + 0x18 + lVar2);
      param_2[1] = param_2[1] + 4;
      *(undefined4 *)param_2[1] = *(undefined4 *)(uVar10 + 0x1c + lVar2);
      puVar5 = (undefined4 *)(param_2[1] + 4);
      param_2[1] = (longlong)puVar5;
      if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 0x11) {
        FUN_180639bf0(param_2,(longlong)puVar5 + (0x10 - *param_2));
        puVar5 = (undefined4 *)param_2[1];
      }
      *puVar5 = *(undefined4 *)(uVar10 + 0x20 + lVar2);
      param_2[1] = param_2[1] + 4;
      *(undefined4 *)param_2[1] = *(undefined4 *)(uVar10 + 0x24 + lVar2);
      param_2[1] = param_2[1] + 4;
      *(undefined4 *)param_2[1] = *(undefined4 *)(uVar10 + 0x28 + lVar2);
      param_2[1] = param_2[1] + 4;
      *(undefined4 *)param_2[1] = *(undefined4 *)(uVar10 + 0x2c + lVar2);
      puVar5 = (undefined4 *)(param_2[1] + 4);
      param_2[1] = (longlong)puVar5;
      if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 0x11) {
        FUN_180639bf0(param_2,(longlong)puVar5 + (0x10 - *param_2));
        puVar5 = (undefined4 *)param_2[1];
      }
      uVar12 = (int)uVar9 + 1;
      *puVar5 = *(undefined4 *)(uVar10 + 0x30 + lVar2);
      param_2[1] = param_2[1] + 4;
      *(undefined4 *)param_2[1] = *(undefined4 *)(uVar10 + 0x34 + lVar2);
      param_2[1] = param_2[1] + 4;
      *(undefined4 *)param_2[1] = *(undefined4 *)(uVar10 + 0x38 + lVar2);
      param_2[1] = param_2[1] + 4;
      *(undefined4 *)param_2[1] = *(undefined4 *)(uVar10 + 0x3c + lVar2);
      puVar5 = (undefined4 *)(param_2[1] + 4);
      param_2[1] = (longlong)puVar5;
      uVar10 = uVar10 + 0x40;
      uVar9 = (ulonglong)uVar12;
    } while (uVar12 < *(uint *)(param_1 + 0x74));
  }
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (undefined4 *)param_2[1];
  }
  *puVar5 = uVar1;
  puVar5 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar5;
  if (*(int *)(param_1 + 0x78) != 0) {
    do {
      iVar8 = (int)uVar13;
      lVar6 = *(longlong *)(param_1 + 0x170);
      if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 2) {
        FUN_180639bf0(param_2,(undefined1 *)((longlong)puVar5 + (1 - *param_2)));
        puVar5 = (undefined4 *)param_2[1];
      }
      uVar12 = iVar8 + 1;
      uVar13 = (ulonglong)uVar12;
      *(undefined1 *)puVar5 = *(undefined1 *)(iVar8 + lVar6);
      puVar5 = (undefined4 *)(param_2[1] + 1);
      param_2[1] = (longlong)puVar5;
    } while (uVar12 < *(uint *)(param_1 + 0x78));
  }
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(undefined1 *)((longlong)puVar5 + (4 - *param_2)));
    puVar5 = (undefined4 *)param_2[1];
  }
  *puVar5 = uVar1;
  param_2[1] = param_2[1] + 4;
  FUN_180639ec0(param_2,param_1 + 0x110);
  puVar5 = (undefined4 *)param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    *(undefined4 *)param_2[1] = uVar1;
  }
  else {
    *puVar5 = uVar1;
  }
  param_2[1] = param_2[1] + 4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



