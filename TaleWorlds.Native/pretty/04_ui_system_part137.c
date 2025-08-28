#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part137.c - 6 个函数

// 函数: void FUN_180749a2a(longlong param_1)
void FUN_180749a2a(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  longlong in_RAX;
  uint uVar5;
  ulonglong uVar6;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int in_stack_00000040;
  int iStack000000000000004c;
  int iStack0000000000000050;
  ulonglong uVar7;
  
  uVar7 = 0;
  iStack000000000000004c = 0;
  iStack0000000000000050 = 0;
  piVar1 = (int *)(param_1 + 0x698);
  if (*(longlong *)(in_RAX + 0x3e0) == 0) {
LAB_180749ae6:
    if (iStack000000000000004c == *piVar1) goto LAB_180749ddb;
  }
  else {
    in_stack_00000040 = 0;
    FUN_180768b70(&stack0x00000040);
    iStack000000000000004c = *piVar1;
    if ((*(int *)(unaff_RBX + 0x6ac) == 0) ||
       (999 < (uint)(in_stack_00000040 - *(int *)(unaff_RBX + 0x6ac)))) {
      lVar3 = *(longlong *)(unaff_RBX + 0x670);
      *(int *)(unaff_RBX + 0x6ac) = in_stack_00000040;
      uVar6 = lVar3 + 8;
      if (lVar3 == 0) {
        uVar6 = uVar7;
      }
      iVar4 = (**(code **)(lVar3 + 0x3e0))(uVar6,&stack0x0000004c,&stack0x00000050);
      if (iVar4 != 0) goto LAB_180749ddb;
    }
    if (iStack0000000000000050 == 0) goto LAB_180749ae6;
  }
  uVar6 = uVar7;
  if (0 < *(int *)(unaff_RBX + 0x694)) {
    do {
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
      puVar2 = (uint *)(uVar6 + 0x18 + *(longlong *)(unaff_RBX + 0x6a0));
      *puVar2 = *puVar2 & 0xfffffffe;
      uVar6 = uVar6 + 0x38;
    } while ((int)uVar5 < *(int *)(unaff_RBX + 0x694));
  }
  *piVar1 = 0;
  if (0 < iStack000000000000004c) {
                    // WARNING: Subroutine does not return
    memset(&stack0x00000070,0,0x100);
  }
  *(undefined1 *)(unaff_RBX + 0x6a8) = 1;
LAB_180749ddb:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x70) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180749e0b(void)
void FUN_180749e0b(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x70) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180749e21(void)
void FUN_180749e21(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x70) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180749e60(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  *param_2 = 0;
  plVar1 = (longlong *)(_DAT_180be12f0 + 0x160);
  while (param_1 != *plVar1) {
    lVar3 = lVar3 + 1;
    plVar1 = plVar1 + 1;
    if (7 < lVar3) {
      return 0x1e;
    }
  }
  *param_2 = param_1;
  if (param_1 == 0) {
    return 0x1e;
  }
  if (param_3 != (longlong *)0x0) {
    if (*param_3 != 0) {
      return 0x1c;
    }
    uVar2 = FUN_180743c40();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *param_3 = param_1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180749ef0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
void FUN_180749ef0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (((*(uint *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) &&
     (puVar1 = (undefined8 *)(_DAT_180be12f0 + 8), (code *)*puVar1 != (code *)0x0)) {
    uStack_10 = param_5;
    if (*(int *)(_DAT_180be12f0 + 0x20) == 0) {
      *(undefined4 *)(_DAT_180be12f0 + 0x20) = 1;
      uStack_28 = param_1;
      uStack_24 = param_2;
      uStack_20 = param_3;
      uStack_18 = param_4;
      (*(code *)*puVar1)(0,0x80,&uStack_28,0,*(undefined8 *)(_DAT_180be12f0 + 0x18));
      *(int *)(_DAT_180be12f0 + 0x20) = *(int *)(_DAT_180be12f0 + 0x20) + -1;
    }
  }
  return;
}



undefined8 FUN_180749f70(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pfVar1 = (float *)(param_1 + 0x1198c);
  lVar2 = 4;
  do {
    if (*(char *)(pfVar1 + -9) != '\0') {
      *(undefined8 *)(pfVar1 + -0xe) = *(undefined8 *)(pfVar1 + -0x11);
      pfVar1[-0xc] = pfVar1[-0xf];
      pfVar1[-0xd] = 0.0;
      fVar3 = pfVar1[-0xe];
      fVar4 = pfVar1[-0xc];
      fVar5 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
      if (0.0 < fVar5) {
        fVar5 = 1.0 / fVar5;
        fVar4 = fVar4 * fVar5;
        fVar5 = fVar5 * fVar3;
      }
      else {
        fVar5 = 0.0;
        fVar4 = 0.0;
      }
      pfVar1[-0xe] = fVar5;
      pfVar1[-0xd] = 0.0;
      pfVar1[-0xc] = fVar4;
      if ((fVar5 == 0.0) && (fVar4 == 0.0)) {
        fVar3 = 0.0;
      }
      else if (ABS(fVar4) < ABS(fVar5)) {
        fVar3 = 3.0 - fVar4 / ABS(fVar5);
        if (fVar5 < 0.0) {
          fVar3 = 10.0 - fVar3;
        }
      }
      else {
        fVar3 = fVar5 / ABS(fVar4) + 1.0;
        if (fVar4 < 0.0) {
          fVar3 = 6.0 - fVar3;
        }
      }
      pfVar1[-0xb] = fVar3;
      fVar3 = (float)atan2f(fVar5,fVar4);
      pfVar1[-10] = fVar3 * 57.295776;
    }
    if (*(char *)(pfVar1 + 3) != '\0') {
      *(undefined8 *)(pfVar1 + -2) = *(undefined8 *)(pfVar1 + -5);
      *pfVar1 = pfVar1[-3];
      pfVar1[-1] = 0.0;
      fVar3 = pfVar1[-2];
      fVar4 = SQRT(fVar3 * fVar3 + *pfVar1 * *pfVar1);
      if (0.0 < fVar4) {
        fVar4 = 1.0 / fVar4;
        pfVar1[-2] = fVar3 * fVar4;
        pfVar1[-1] = fVar4 * pfVar1[-1];
        fVar4 = fVar4 * *pfVar1;
        *pfVar1 = fVar4;
      }
      else {
        pfVar1[-2] = 0.0;
        pfVar1[-1] = 0.0;
        fVar4 = 0.0;
        *pfVar1 = 0.0;
      }
      fVar3 = pfVar1[-2];
      if ((fVar3 == 0.0) && (fVar4 == 0.0)) {
        fVar5 = 0.0;
      }
      else if (ABS(fVar4) < ABS(fVar3)) {
        fVar5 = 3.0 - fVar4 / ABS(fVar3);
        if (fVar3 < 0.0) {
          fVar5 = 10.0 - fVar5;
        }
      }
      else {
        fVar5 = fVar3 / ABS(fVar4) + 1.0;
        if (fVar4 < 0.0) {
          fVar5 = 6.0 - fVar5;
        }
      }
      pfVar1[1] = fVar5;
      fVar3 = (float)atan2f(pfVar1[-2],*pfVar1);
      pfVar1[2] = fVar3 * 57.295776;
    }
    if (*(char *)(pfVar1 + 0xf) != '\0') {
      *(undefined8 *)(pfVar1 + 10) = *(undefined8 *)(pfVar1 + 7);
      pfVar1[0xc] = pfVar1[9];
      pfVar1[0xb] = 0.0;
      fVar3 = pfVar1[10];
      fVar4 = SQRT(pfVar1[0xc] * pfVar1[0xc] + fVar3 * fVar3);
      if (0.0 < fVar4) {
        fVar4 = 1.0 / fVar4;
        pfVar1[10] = fVar4 * fVar3;
        pfVar1[0xb] = fVar4 * pfVar1[0xb];
        fVar4 = fVar4 * pfVar1[0xc];
        pfVar1[0xc] = fVar4;
      }
      else {
        pfVar1[10] = 0.0;
        pfVar1[0xb] = 0.0;
        fVar4 = 0.0;
        pfVar1[0xc] = 0.0;
      }
      fVar3 = pfVar1[10];
      if ((fVar3 == 0.0) && (fVar4 == 0.0)) {
        fVar5 = 0.0;
      }
      else if (ABS(fVar4) < ABS(fVar3)) {
        fVar5 = 3.0 - fVar4 / ABS(fVar3);
        if (fVar3 < 0.0) {
          fVar5 = 10.0 - fVar5;
        }
      }
      else {
        fVar5 = fVar3 / ABS(fVar4) + 1.0;
        if (fVar4 < 0.0) {
          fVar5 = 6.0 - fVar5;
        }
      }
      pfVar1[0xd] = fVar5;
      fVar3 = (float)atan2f(pfVar1[10],pfVar1[0xc]);
      pfVar1[0xe] = fVar3 * 57.295776;
    }
    pfVar1 = pfVar1 + 0x24;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return 0;
}



undefined8 FUN_18074a310(longlong param_1)

{
  longlong lVar1;
  
  param_1 = param_1 + 0x11be0;
  lVar1 = 8;
  do {
    FUN_1807d4800(param_1);
    param_1 = param_1 + 0xc0;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return 0;
}





// 函数: void FUN_18074a350(longlong param_1)
void FUN_18074a350(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 auStackX_10 [2];
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  
  iVar2 = 1;
  do {
    auStackX_10[0] = 0;
    uStackX_18 = 0;
    uStackX_20 = 0;
    func_0x0001807d60c0(iVar2,auStackX_10,&uStackX_20,&uStackX_18,0);
    iVar1 = FUN_1807d4ac0(param_1 + 0x11be0 + (longlong)(iVar2 + -1) * 0xc0,auStackX_10[0],
                          uStackX_20,uStackX_18);
    if (iVar1 != 0) {
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 9);
  return;
}



undefined8 FUN_18074a420(longlong param_1,int param_2,int param_3,longlong param_4,uint param_5)

{
  if ((((param_4 != 0) && (param_5 < 0x21)) && (param_2 != 1)) && (param_3 != 1)) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x1193c);
    }
    if (*(char *)(param_1 + 8) == '\0') {
      return 0x43;
    }
    if (param_2 - 1U < 8) {
      if (param_3 == 0) {
        param_3 = *(int *)(param_1 + 0x1193c);
      }
      if (param_3 - 1U < 8) {
        if (param_5 == 0) {
          param_5 = *(uint *)((longlong)(int)(param_2 - 1U) * 0xc0 + param_1 + 0x11be0);
        }
                    // WARNING: Subroutine does not return
        memset(param_4,0,
               (longlong)
               (int)(*(int *)((longlong)(int)(param_3 - 1U) * 0xc0 + param_1 + 0x11be0) * param_5)
               << 2);
      }
    }
  }
  return 0x1f;
}





// 函数: void FUN_18074a4ae(void)
void FUN_18074a4ae(void)

{
                    // WARNING: Subroutine does not return
  memset();
}



undefined8 FUN_18074a51c(void)

{
  return 0x1f;
}



undefined8 FUN_18074a5f0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fStack_70;
  
  plVar2 = (longlong *)(param_1 + 0x11b80);
  plVar1 = plVar2;
  lVar3 = *plVar2;
  do {
    lVar4 = lVar3;
    if (lVar4 == 0) goto FUN_18074a895;
    fVar6 = *(float *)(lVar4 + 0x20);
    lVar3 = plVar1[1];
    plVar1 = plVar1 + 1;
    lVar5 = *plVar2;
    if (lVar3 != 0) {
      lVar5 = lVar3;
    }
    fVar8 = *(float *)(lVar5 + 0x20);
  } while ((fVar6 == fVar8) ||
          ((fVar8 - fVar6 <= 4.0 && ((fVar6 <= fVar8 || (4.0 <= fVar6 - fVar8))))));
  fVar8 = *(float *)(lVar4 + 0x14) - *(float *)(lVar5 + 0x14);
  fVar9 = *(float *)(lVar4 + 0x18) - *(float *)(lVar5 + 0x18);
  fStack_70 = *(float *)(lVar4 + 0x1c) - *(float *)(lVar5 + 0x1c);
  fVar6 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fStack_70 * fStack_70);
  if (0.0 < fVar6) {
    fVar6 = 1.0 / fVar6;
    fVar8 = fVar6 * fVar8;
    fStack_70 = fVar6 * fStack_70;
    fVar6 = fVar6 * fVar9;
  }
  else {
    fStack_70 = 0.0;
    fVar8 = 0.0;
    fVar6 = 0.0;
  }
  *(ulonglong *)(lVar4 + 0x14) = CONCAT44(fVar6,fVar8);
  *(float *)(lVar4 + 0x1c) = fStack_70;
  *(float *)(lVar5 + 0x14) = -fVar8;
  *(float *)(lVar5 + 0x18) = -fVar6;
  *(float *)(lVar5 + 0x1c) = -fStack_70;
  fVar6 = *(float *)(lVar4 + 0x14);
  fVar8 = *(float *)(lVar4 + 0x1c);
  if ((fVar6 == 0.0) && (fVar8 == 0.0)) {
    fVar9 = 0.0;
  }
  else if (ABS(fVar8) < ABS(fVar6)) {
    fVar9 = 3.0 - fVar8 / ABS(fVar6);
    if (fVar6 < 0.0) {
      fVar9 = 10.0 - fVar9;
    }
  }
  else {
    fVar9 = fVar6 / ABS(fVar8) + 1.0;
    if (fVar8 < 0.0) {
      fVar9 = 6.0 - fVar9;
    }
  }
  *(float *)(lVar4 + 0x20) = fVar9;
  fVar6 = (float)atan2f(fVar6,fVar8);
  *(float *)(lVar4 + 0x24) = fVar6 * 57.295776;
  fVar6 = *(float *)(lVar5 + 0x14);
  fVar8 = *(float *)(lVar5 + 0x1c);
  if ((fVar6 == 0.0) && (fVar8 == 0.0)) {
    fVar9 = 0.0;
  }
  else if (ABS(fVar8) < ABS(fVar6)) {
    fVar9 = 3.0 - fVar8 / ABS(fVar6);
    if (fVar6 < 0.0) {
      fVar9 = 10.0 - fVar9;
    }
  }
  else {
    fVar9 = fVar6 / ABS(fVar8) + 1.0;
    if (fVar8 < 0.0) {
      fVar9 = 6.0 - fVar9;
    }
  }
  *(float *)(lVar5 + 0x20) = fVar9;
  fVar6 = (float)atan2f(fVar6);
  *(float *)(lVar5 + 0x24) = fVar6 * 57.295776;
FUN_18074a895:
  lVar3 = *plVar2;
  plVar1 = plVar2;
  while (lVar3 != 0) {
    lVar4 = plVar1[1];
    plVar1 = plVar1 + 1;
    if (lVar4 == 0) {
      lVar4 = *plVar2;
    }
    if (*(float *)(lVar3 + 0x20) != *(float *)(lVar4 + 0x20)) {
      fVar6 = *(float *)(lVar4 + 0x20) - *(float *)(lVar3 + 0x20);
      fVar8 = ABS(fVar6);
      if (4.0 <= ABS(fVar6)) {
        fVar8 = fVar8 - 4.0;
      }
      else {
        fVar8 = 4.0 - fVar8;
      }
      *(bool *)(lVar3 + 0x29) = 0.002 < fVar8;
      if (0.002 < fVar8) {
        if (*(float *)(lVar4 + 0x1c) * *(float *)(lVar3 + 0x14) -
            *(float *)(lVar4 + 0x14) * *(float *)(lVar3 + 0x1c) <= 0.0) {
          uVar7 = 0xbf800000;
        }
        else {
          uVar7 = 0x3f800000;
        }
        *(undefined4 *)(lVar3 + 0x2c) = uVar7;
      }
    }
    lVar3 = *plVar1;
  }
  return 0;
}



undefined8 FUN_18074a63d(undefined8 param_1,longlong param_2)

{
  longlong in_RAX;
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  longlong lVar4;
  longlong *unaff_RSI;
  undefined8 unaff_RDI;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float fVar10;
  uint unaff_XMM9_Da;
  float unaff_XMM12_Da;
  float fStack0000000000000028;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBX;
  *(undefined8 *)(in_RAX + 0x10) = unaff_RDI;
  lVar1 = param_2;
  plVar2 = unaff_RSI;
  while( true ) {
    fVar6 = *(float *)(lVar1 + 0x20);
    lVar3 = plVar2[1];
    plVar2 = plVar2 + 1;
    lVar4 = param_2;
    if (lVar3 != 0) {
      lVar4 = lVar3;
    }
    fVar7 = *(float *)(lVar4 + 0x20);
    if ((fVar6 != fVar7) &&
       ((unaff_XMM6_Da < fVar7 - fVar6 || ((fVar7 < fVar6 && (fVar6 - fVar7 < unaff_XMM6_Da))))))
    break;
    lVar1 = lVar3;
    if (lVar3 == 0) {
FUN_18074a885:
      lVar1 = *unaff_RSI;
      plVar2 = unaff_RSI;
      while (lVar1 != 0) {
        lVar3 = plVar2[1];
        plVar2 = plVar2 + 1;
        if (lVar3 == 0) {
          lVar3 = *unaff_RSI;
        }
        if (*(float *)(lVar1 + 0x20) != *(float *)(lVar3 + 0x20)) {
          fVar6 = *(float *)(lVar3 + 0x20) - *(float *)(lVar1 + 0x20);
          fVar7 = (float)((uint)fVar6 & unaff_XMM9_Da);
          if (unaff_XMM6_Da <= (float)((uint)fVar6 & unaff_XMM9_Da)) {
            fVar7 = fVar7 - unaff_XMM6_Da;
          }
          else {
            fVar7 = unaff_XMM6_Da - fVar7;
          }
          *(bool *)(lVar1 + 0x29) = 0.002 < fVar7;
          if (0.002 < fVar7) {
            fVar6 = unaff_XMM12_Da;
            if (*(float *)(lVar3 + 0x1c) * *(float *)(lVar1 + 0x14) -
                *(float *)(lVar3 + 0x14) * *(float *)(lVar1 + 0x1c) <= unaff_XMM7_Da) {
              fVar6 = -1.0;
            }
            *(float *)(lVar1 + 0x2c) = fVar6;
          }
        }
        lVar1 = *plVar2;
      }
      return 0;
    }
  }
  fVar8 = *(float *)(lVar1 + 0x14) - *(float *)(lVar4 + 0x14);
  fVar9 = *(float *)(lVar1 + 0x18) - *(float *)(lVar4 + 0x18);
  fVar10 = *(float *)(lVar1 + 0x1c) - *(float *)(lVar4 + 0x1c);
  fVar5 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10);
  fVar6 = unaff_XMM7_Da;
  fVar7 = unaff_XMM7_Da;
  fStack0000000000000028 = unaff_XMM7_Da;
  if (unaff_XMM7_Da < fVar5) {
    fVar5 = unaff_XMM12_Da / fVar5;
    fStack0000000000000028 = fVar5 * fVar10;
    fVar6 = fVar5 * fVar8;
    fVar7 = fVar5 * fVar9;
  }
  *(ulonglong *)(lVar1 + 0x14) = CONCAT44(fVar7,fVar6);
  *(float *)(lVar1 + 0x1c) = fStack0000000000000028;
  *(float *)(lVar4 + 0x14) = -fVar6;
  *(float *)(lVar4 + 0x18) = -fVar7;
  *(float *)(lVar4 + 0x1c) = -fStack0000000000000028;
  fVar6 = *(float *)(lVar1 + 0x14);
  fVar7 = *(float *)(lVar1 + 0x1c);
  if ((fVar6 != unaff_XMM7_Da) || (fVar5 = unaff_XMM7_Da, fVar7 != unaff_XMM7_Da)) {
    if ((float)((uint)fVar7 & unaff_XMM9_Da) < (float)((uint)fVar6 & unaff_XMM9_Da)) {
      fVar5 = 3.0 - fVar7 / (float)((uint)fVar6 & unaff_XMM9_Da);
      if (fVar6 < unaff_XMM7_Da) {
        fVar5 = 10.0 - fVar5;
      }
    }
    else {
      fVar5 = fVar6 / (float)((uint)fVar7 & unaff_XMM9_Da) + unaff_XMM12_Da;
      if (fVar7 < unaff_XMM7_Da) {
        fVar5 = 6.0 - fVar5;
      }
    }
  }
  *(float *)(lVar1 + 0x20) = fVar5;
  fVar6 = (float)atan2f(fVar6,fVar7);
  *(float *)(lVar1 + 0x24) = fVar6 * 57.295776;
  fVar6 = *(float *)(lVar4 + 0x14);
  fVar7 = *(float *)(lVar4 + 0x1c);
  if ((fVar6 != unaff_XMM7_Da) || (fVar5 = unaff_XMM7_Da, fVar7 != unaff_XMM7_Da)) {
    if ((float)((uint)fVar7 & unaff_XMM9_Da) < (float)((uint)fVar6 & unaff_XMM9_Da)) {
      fVar5 = 3.0 - fVar7 / (float)((uint)fVar6 & unaff_XMM9_Da);
      if (fVar6 < unaff_XMM7_Da) {
        fVar5 = 10.0 - fVar5;
      }
    }
    else {
      fVar5 = fVar6 / (float)((uint)fVar7 & unaff_XMM9_Da) + unaff_XMM12_Da;
      if (fVar7 < unaff_XMM7_Da) {
        fVar5 = 6.0 - fVar5;
      }
    }
  }
  *(float *)(lVar4 + 0x20) = fVar5;
  fVar6 = (float)atan2f(fVar6);
  *(float *)(lVar4 + 0x24) = fVar6 * 57.295776;
  goto FUN_18074a885;
}



undefined8 FUN_18074a6ac(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBX;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float fVar7;
  uint unaff_XMM9_Da;
  float unaff_XMM12_Da;
  float fStack0000000000000028;
  
  fVar7 = *(float *)(unaff_RDI + 0x1c) - *(float *)(unaff_RBX + 0x1c);
  fVar4 = SQRT(in_XMM5_Da * in_XMM5_Da + in_XMM4_Da * in_XMM4_Da + fVar7 * fVar7);
  fVar5 = unaff_XMM7_Da;
  fVar6 = unaff_XMM7_Da;
  fStack0000000000000028 = unaff_XMM7_Da;
  if (unaff_XMM7_Da < fVar4) {
    fVar4 = unaff_XMM12_Da / fVar4;
    fStack0000000000000028 = fVar4 * fVar7;
    fVar5 = fVar4 * in_XMM4_Da;
    fVar6 = fVar4 * in_XMM5_Da;
  }
  *(ulonglong *)(unaff_RDI + 0x14) = CONCAT44(fVar6,fVar5);
  *(float *)(unaff_RDI + 0x1c) = fStack0000000000000028;
  *(float *)(unaff_RBX + 0x14) = -fVar5;
  *(float *)(unaff_RBX + 0x18) = -fVar6;
  *(float *)(unaff_RBX + 0x1c) = -fStack0000000000000028;
  fVar5 = *(float *)(unaff_RDI + 0x14);
  fVar6 = *(float *)(unaff_RDI + 0x1c);
  if ((fVar5 != unaff_XMM7_Da) || (fVar4 = unaff_XMM7_Da, fVar6 != unaff_XMM7_Da)) {
    if ((float)((uint)fVar6 & unaff_XMM9_Da) < (float)((uint)fVar5 & unaff_XMM9_Da)) {
      fVar4 = 3.0 - fVar6 / (float)((uint)fVar5 & unaff_XMM9_Da);
      if (fVar5 < unaff_XMM7_Da) {
        fVar4 = 10.0 - fVar4;
      }
    }
    else {
      fVar4 = fVar5 / (float)((uint)fVar6 & unaff_XMM9_Da) + unaff_XMM12_Da;
      if (fVar6 < unaff_XMM7_Da) {
        fVar4 = 6.0 - fVar4;
      }
    }
  }
  *(float *)(unaff_RDI + 0x20) = fVar4;
  fVar5 = (float)atan2f(fVar5,fVar6);
  *(float *)(unaff_RDI + 0x24) = fVar5 * 57.295776;
  fVar5 = *(float *)(unaff_RBX + 0x14);
  fVar6 = *(float *)(unaff_RBX + 0x1c);
  if ((fVar5 != unaff_XMM7_Da) || (fVar4 = unaff_XMM7_Da, fVar6 != unaff_XMM7_Da)) {
    if ((float)((uint)fVar6 & unaff_XMM9_Da) < (float)((uint)fVar5 & unaff_XMM9_Da)) {
      fVar4 = 3.0 - fVar6 / (float)((uint)fVar5 & unaff_XMM9_Da);
      if (fVar5 < unaff_XMM7_Da) {
        fVar4 = 10.0 - fVar4;
      }
    }
    else {
      fVar4 = fVar5 / (float)((uint)fVar6 & unaff_XMM9_Da) + unaff_XMM12_Da;
      if (fVar6 < unaff_XMM7_Da) {
        fVar4 = 6.0 - fVar4;
      }
    }
  }
  *(float *)(unaff_RBX + 0x20) = fVar4;
  fVar5 = (float)atan2f(fVar5);
  *(float *)(unaff_RBX + 0x24) = fVar5 * 57.295776;
  lVar2 = *unaff_RSI;
  plVar1 = unaff_RSI;
  while (lVar2 != 0) {
    lVar3 = plVar1[1];
    plVar1 = plVar1 + 1;
    if (lVar3 == 0) {
      lVar3 = *unaff_RSI;
    }
    if (*(float *)(lVar2 + 0x20) != *(float *)(lVar3 + 0x20)) {
      fVar5 = *(float *)(lVar3 + 0x20) - *(float *)(lVar2 + 0x20);
      fVar6 = (float)((uint)fVar5 & unaff_XMM9_Da);
      if (unaff_XMM6_Da <= (float)((uint)fVar5 & unaff_XMM9_Da)) {
        fVar6 = fVar6 - unaff_XMM6_Da;
      }
      else {
        fVar6 = unaff_XMM6_Da - fVar6;
      }
      *(bool *)(lVar2 + 0x29) = 0.002 < fVar6;
      if (0.002 < fVar6) {
        fVar5 = unaff_XMM12_Da;
        if (*(float *)(lVar3 + 0x1c) * *(float *)(lVar2 + 0x14) -
            *(float *)(lVar3 + 0x14) * *(float *)(lVar2 + 0x1c) <= unaff_XMM7_Da) {
          fVar5 = -1.0;
        }
        *(float *)(lVar2 + 0x2c) = fVar5;
      }
    }
    lVar2 = *plVar1;
  }
  return 0;
}



undefined8 FUN_18074a885(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  uint unaff_XMM9_Da;
  undefined4 unaff_XMM12_Da;
  
  lVar2 = *unaff_RSI;
  plVar1 = unaff_RSI;
  while (lVar2 != 0) {
    lVar3 = plVar1[1];
    plVar1 = plVar1 + 1;
    if (lVar3 == 0) {
      lVar3 = *unaff_RSI;
    }
    if (*(float *)(lVar2 + 0x20) != *(float *)(lVar3 + 0x20)) {
      fVar4 = *(float *)(lVar3 + 0x20) - *(float *)(lVar2 + 0x20);
      fVar6 = (float)((uint)fVar4 & unaff_XMM9_Da);
      if (unaff_XMM6_Da <= (float)((uint)fVar4 & unaff_XMM9_Da)) {
        fVar6 = fVar6 - unaff_XMM6_Da;
      }
      else {
        fVar6 = unaff_XMM6_Da - fVar6;
      }
      *(bool *)(lVar2 + 0x29) = 0.002 < fVar6;
      if (0.002 < fVar6) {
        uVar5 = unaff_XMM12_Da;
        if (*(float *)(lVar3 + 0x1c) * *(float *)(lVar2 + 0x14) -
            *(float *)(lVar3 + 0x14) * *(float *)(lVar2 + 0x1c) <= unaff_XMM7_Da) {
          uVar5 = 0xbf800000;
        }
        *(undefined4 *)(lVar2 + 0x2c) = uVar5;
      }
    }
    lVar2 = *plVar1;
  }
  return 0;
}



undefined8 FUN_18074a895(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  uint unaff_XMM9_Da;
  undefined4 unaff_XMM12_Da;
  
  lVar2 = *unaff_RSI;
  plVar1 = unaff_RSI;
  while (lVar2 != 0) {
    lVar3 = plVar1[1];
    plVar1 = plVar1 + 1;
    if (lVar3 == 0) {
      lVar3 = *unaff_RSI;
    }
    if (*(float *)(lVar2 + 0x20) != *(float *)(lVar3 + 0x20)) {
      fVar4 = *(float *)(lVar3 + 0x20) - *(float *)(lVar2 + 0x20);
      fVar6 = (float)((uint)fVar4 & unaff_XMM9_Da);
      if (unaff_XMM6_Da <= (float)((uint)fVar4 & unaff_XMM9_Da)) {
        fVar6 = fVar6 - unaff_XMM6_Da;
      }
      else {
        fVar6 = unaff_XMM6_Da - fVar6;
      }
      *(bool *)(lVar2 + 0x29) = 0.002 < fVar6;
      if (0.002 < fVar6) {
        uVar5 = unaff_XMM12_Da;
        if (*(float *)(lVar3 + 0x1c) * *(float *)(lVar2 + 0x14) -
            *(float *)(lVar3 + 0x14) * *(float *)(lVar2 + 0x1c) <= unaff_XMM7_Da) {
          uVar5 = 0xbf800000;
        }
        *(undefined4 *)(lVar2 + 0x2c) = uVar5;
      }
    }
    lVar2 = *plVar1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



