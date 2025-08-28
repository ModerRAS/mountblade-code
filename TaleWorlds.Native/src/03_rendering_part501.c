#include "TaleWorlds.Native.Split.h"

// 03_rendering_part501.c - 10 个函数

// 函数: void FUN_180535970(longlong *param_1,undefined8 param_2,undefined8 param_3)
void FUN_180535970(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  int aiStackX_8 [2];
  undefined4 uStack_38;
  int iStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 uStack_c;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  uStack_30 = 0x18053599e;
  cVar1 = FUN_18055f260(param_3,aiStackX_8,&UNK_1809fa510);
  uStack_30 = 0x1805359bc;
  FUN_1804fe350(&UNK_180a301c8,cVar1,&UNK_180a301f8,aiStackX_8);
  if (cVar1 == '\0') {
    return;
  }
  lVar3 = (longlong)aiStackX_8[0] * 0xa60 + 0x30a0 + lVar3;
  if ((*(uint *)(lVar3 + 0x56c) >> 0xb & 1) == 0) {
    *(undefined4 *)(*(longlong *)(lVar3 + 0x20) + 0x148) = 0xbecccccd;
  }
  else {
    *(undefined4 *)(*(longlong *)(lVar3 + 0x20) + 0x148) = 0xbe19999a;
  }
  if ((*(uint *)(lVar3 + 0x56c) >> 0xb & 1) == 0) {
    uVar2 = 0xffffffff;
    fVar9 = *(float *)(*(longlong *)(lVar3 + 0x20) + 0x20);
    fVar10 = *(float *)(*(longlong *)(lVar3 + 0x20) + 0x1c);
    uVar7 = 2;
    if (*(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x590) + 0x2590) + 0x10) < 5) {
      uVar7 = 0xffffffff;
    }
    if (*(int *)(lVar3 + 0x564) != -1) {
      uVar2 = *(undefined4 *)
               (*(longlong *)
                 ((longlong)*(int *)(lVar3 + 0x564) * 0xa60 + 0x3638 + *(longlong *)(lVar3 + 0x8d8))
               + 0x20);
    }
    iStack_34 = FUN_180557b40(*(undefined8 *)(lVar3 + 0x598),uVar2,0,uVar7,0,0,
                              1.0 < fVar10 * fVar10 + fVar9 * fVar9);
    if (*(int *)(*(longlong *)
                  ((longlong)*(int *)(*(longlong *)(lVar3 + 0x590) + 0xac) * 0xe0 + 0x78 +
                  _DAT_180c95fb0) + (longlong)iStack_34 * 8) < 0) {
      return;
    }
    if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
      FUN_1805ed8d0(*(undefined8 *)(lVar3 + 0x8e0));
    }
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_14 = 0x3ecccccd;
    uStack_10 = 0x1000000;
    uStack_24 = 0x3f80000000000000;
    uStack_1c = 0xbe4ccccdbe4ccccd;
    uStack_c = 0;
    uStack_38 = 0;
    goto LAB_18052490a;
  }
  lVar6 = 0;
  if ((((*(uint *)(lVar3 + 0x56c) >> 0xe & 1) != 0) && (_DAT_180c92514 != 1)) &&
     (_DAT_180c92514 != 4)) {
    plVar8 = (longlong *)(*(longlong *)(lVar3 + 0x8f8) + 0x9e8);
    piVar5 = (int *)(*(longlong *)(lVar3 + 0x8f8) + 0x9e0);
    do {
      if ((*piVar5 != -1) &&
         ((*(uint *)((longlong)*(int *)(*plVar8 + 0xf0) * 0xa0 + 0x58 +
                    *(longlong *)(*plVar8 + 0xd0)) & 0x2000) != 0)) {
        FUN_180524260(lVar3);
        break;
      }
      lVar6 = lVar6 + 1;
      piVar5 = piVar5 + 1;
      plVar8 = plVar8 + 1;
    } while (lVar6 < 2);
  }
  if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
    FUN_1805ed8d0(*(undefined8 *)(lVar3 + 0x8e0));
  }
  lVar6 = *(longlong *)(lVar3 + 0x20);
  cVar1 = func_0x000180522f60();
  if (cVar1 != '\0') {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(*(undefined4 *)(lVar6 + 0x34));
  }
  if (-0.6 <= *(float *)(lVar6 + 0x20)) {
    if (0.7 < *(float *)(lVar6 + 0x20)) {
      fVar9 = (float)atan2f(*(uint *)(lVar6 + 0x1c) ^ 0x80000000,*(undefined4 *)(lVar6 + 0x20));
      if (0.5 <= ABS(fVar9)) {
        cVar1 = (fVar9 < 0.0) + '\x03';
      }
      else {
        cVar1 = '\x02';
      }
      uStack_24 = 0x3f80000000000000;
      uStack_1c = 0xbe4ccccdbe4ccccd;
      uStack_30 = 0;
      uStack_14 = 0x3ecccccd;
      uStack_28 = 0;
      uStack_10 = 0x1000000;
      uStack_c = 0;
      uStack_38 = 0;
      uVar2 = func_0x00018052dcc0(lVar3,*(undefined4 *)(lVar6 + 0x1c),
                                  *(undefined1 *)(*(longlong *)(lVar3 + 0x590) + 0x34bc),cVar1);
      goto LAB_18052449f;
    }
    fVar9 = *(float *)(lVar6 + 0x1c);
    uVar7 = *(undefined8 *)(lVar3 + 0x598);
    uStack_30 = 0;
    uStack_10 = 0x1000000;
    uStack_c = 0;
    uStack_38 = 0;
    uStack_28 = 0;
    uStack_14 = 0x3ecccccd;
    uStack_24 = 0x3f80000000000000;
    uStack_1c = 0xbe4ccccdbe4ccccd;
    fVar10 = *(float *)(lVar6 + 0x20) * *(float *)(lVar6 + 0x20);
    if (fVar9 < -0.8) {
      uVar4 = 1.0 < fVar9 * fVar9 + fVar10;
      uVar2 = func_0x00018052dcc0(lVar3);
      iStack_34 = FUN_180557b40(uVar7,uVar2,0,0,0,0,uVar4);
      FUN_18051ec50(lVar3,&uStack_38);
      if (*(int *)(lVar3 + 0x1fc) == 2) {
        return;
      }
      if (*(int *)(lVar3 + 0x1fc) == 5) {
        return;
      }
      func_0x000180525350(lVar3,1);
      return;
    }
    if (0.8 < fVar9) {
      uVar4 = 1.0 < fVar9 * fVar9 + fVar10;
      uVar2 = func_0x00018052dcc0(lVar3);
      iStack_34 = FUN_180557b40(uVar7,uVar2,0,1,0,0,uVar4);
      FUN_18051ec50(lVar3,&uStack_38);
      if (*(int *)(lVar3 + 0x1fc) == 2) {
        return;
      }
      if (*(int *)(lVar3 + 0x1fc) == 5) {
        return;
      }
      lVar6 = *(longlong *)(lVar3 + 0x590);
      if (lVar6 == 0) {
        return;
      }
      if ((*(uint *)(lVar3 + 0x56c) & 0x800) == 0) {
        return;
      }
      if (*(char *)(lVar6 + 0x34bc) == '\0') {
        return;
      }
      *(undefined1 *)(lVar6 + 0x34bc) = 0;
      return;
    }
    uVar2 = func_0x00018052dcc0(lVar3);
  }
  else {
    uStack_28 = 0;
    uStack_14 = 0x3ecccccd;
    uStack_24 = 0x3f80000000000000;
    uStack_1c = 0xbe4ccccdbe4ccccd;
    uStack_30 = 0;
    uStack_10 = 0x1000000;
    uStack_c = 0;
    uStack_38 = 0;
    if (*(int *)(lVar3 + 0x564) == -1) {
      uVar2 = 0xffffffff;
      uStack_24 = 0x3f80000000000000;
      uStack_1c = 0xbe4ccccdbe4ccccd;
    }
    else {
      uVar2 = *(undefined4 *)
               (*(longlong *)
                 ((longlong)*(int *)(lVar3 + 0x564) * 0xa60 + 0x3638 + *(longlong *)(lVar3 + 0x8d8))
               + 0x20);
    }
LAB_18052449f:
    uVar7 = *(undefined8 *)(lVar3 + 0x598);
  }
  iStack_34 = FUN_180557b40(uVar7,uVar2,0);
LAB_18052490a:
  FUN_18051ec50(lVar3,&uStack_38);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18053598c(undefined4 param_1)
void FUN_18053598c(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong unaff_RDI;
  undefined1 uVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  int iStack0000000000000030;
  undefined4 uStack_10;
  int iStack_c;
  undefined8 uStack_8;
  
  uStack_8 = 0x18053599e;
  cVar1 = FUN_18055f260(param_1,&stack0x00000030);
  uStack_8 = 0x1805359bc;
  FUN_1804fe350(&UNK_180a301c8,cVar1,&UNK_180a301f8,&stack0x00000030);
  if (cVar1 == '\0') {
    return;
  }
  lVar3 = (longlong)iStack0000000000000030 * 0xa60 + 0x30a0 + unaff_RDI;
  if ((*(uint *)(lVar3 + 0x56c) >> 0xb & 1) == 0) {
    *(undefined4 *)(*(longlong *)(lVar3 + 0x20) + 0x148) = 0xbecccccd;
  }
  else {
    *(undefined4 *)(*(longlong *)(lVar3 + 0x20) + 0x148) = 0xbe19999a;
  }
  if ((*(uint *)(lVar3 + 0x56c) >> 0xb & 1) == 0) {
    uVar2 = 0xffffffff;
    fVar9 = *(float *)(*(longlong *)(lVar3 + 0x20) + 0x20);
    fVar10 = *(float *)(*(longlong *)(lVar3 + 0x20) + 0x1c);
    uVar7 = 2;
    if (*(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x590) + 0x2590) + 0x10) < 5) {
      uVar7 = 0xffffffff;
    }
    if (*(int *)(lVar3 + 0x564) != -1) {
      uVar2 = *(undefined4 *)
               (*(longlong *)
                 ((longlong)*(int *)(lVar3 + 0x564) * 0xa60 + 0x3638 + *(longlong *)(lVar3 + 0x8d8))
               + 0x20);
    }
    iStack_c = FUN_180557b40(*(undefined8 *)(lVar3 + 0x598),uVar2,0,uVar7,0,0,
                             1.0 < fVar10 * fVar10 + fVar9 * fVar9);
    if (*(int *)(*(longlong *)
                  ((longlong)*(int *)(*(longlong *)(lVar3 + 0x590) + 0xac) * 0xe0 + 0x78 +
                  _DAT_180c95fb0) + (longlong)iStack_c * 8) < 0) {
      return;
    }
    if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
      FUN_1805ed8d0(*(undefined8 *)(lVar3 + 0x8e0));
    }
    uStack_8 = 0;
    uStack_10 = 0;
    goto LAB_18052490a;
  }
  lVar6 = 0;
  if ((((*(uint *)(lVar3 + 0x56c) >> 0xe & 1) != 0) && (_DAT_180c92514 != 1)) &&
     (_DAT_180c92514 != 4)) {
    plVar8 = (longlong *)(*(longlong *)(lVar3 + 0x8f8) + 0x9e8);
    piVar5 = (int *)(*(longlong *)(lVar3 + 0x8f8) + 0x9e0);
    do {
      if ((*piVar5 != -1) &&
         ((*(uint *)((longlong)*(int *)(*plVar8 + 0xf0) * 0xa0 + 0x58 +
                    *(longlong *)(*plVar8 + 0xd0)) & 0x2000) != 0)) {
        FUN_180524260(lVar3);
        break;
      }
      lVar6 = lVar6 + 1;
      piVar5 = piVar5 + 1;
      plVar8 = plVar8 + 1;
    } while (lVar6 < 2);
  }
  if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
    FUN_1805ed8d0(*(undefined8 *)(lVar3 + 0x8e0));
  }
  lVar6 = *(longlong *)(lVar3 + 0x20);
  cVar1 = func_0x000180522f60();
  if (cVar1 != '\0') {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(*(undefined4 *)(lVar6 + 0x34));
  }
  if (-0.6 <= *(float *)(lVar6 + 0x20)) {
    if (0.7 < *(float *)(lVar6 + 0x20)) {
      fVar9 = (float)atan2f(*(uint *)(lVar6 + 0x1c) ^ 0x80000000,*(undefined4 *)(lVar6 + 0x20));
      if (0.5 <= ABS(fVar9)) {
        cVar1 = (fVar9 < 0.0) + '\x03';
      }
      else {
        cVar1 = '\x02';
      }
      uStack_8 = 0;
      uStack_10 = 0;
      uVar2 = func_0x00018052dcc0(*(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x1c),
                                  *(undefined1 *)(*(longlong *)(lVar3 + 0x590) + 0x34bc),cVar1);
      goto LAB_18052449f;
    }
    fVar9 = *(float *)(lVar6 + 0x1c);
    uVar7 = *(undefined8 *)(lVar3 + 0x598);
    uStack_8 = 0;
    uStack_10 = 0;
    fVar10 = *(float *)(lVar6 + 0x20) * *(float *)(lVar6 + 0x20);
    if (fVar9 < -0.8) {
      uVar4 = 1.0 < fVar9 * fVar9 + fVar10;
      uVar2 = func_0x00018052dcc0(lVar3);
      iStack_c = FUN_180557b40(uVar7,uVar2,0,0,0,0,uVar4);
      FUN_18051ec50(lVar3,&uStack_10);
      if (*(int *)(lVar3 + 0x1fc) == 2) {
        return;
      }
      if (*(int *)(lVar3 + 0x1fc) == 5) {
        return;
      }
      func_0x000180525350(lVar3,1);
      return;
    }
    if (0.8 < fVar9) {
      uVar4 = 1.0 < fVar9 * fVar9 + fVar10;
      uVar2 = func_0x00018052dcc0(lVar3);
      iStack_c = FUN_180557b40(uVar7,uVar2,0,1,0,0,uVar4);
      FUN_18051ec50(lVar3,&uStack_10);
      if (*(int *)(lVar3 + 0x1fc) == 2) {
        return;
      }
      if (*(int *)(lVar3 + 0x1fc) == 5) {
        return;
      }
      lVar6 = *(longlong *)(lVar3 + 0x590);
      if (lVar6 == 0) {
        return;
      }
      if ((*(uint *)(lVar3 + 0x56c) & 0x800) == 0) {
        return;
      }
      if (*(char *)(lVar6 + 0x34bc) == '\0') {
        return;
      }
      *(undefined1 *)(lVar6 + 0x34bc) = 0;
      return;
    }
    uVar2 = func_0x00018052dcc0(lVar3);
  }
  else {
    uStack_8 = 0;
    uStack_10 = 0;
    if (*(int *)(lVar3 + 0x564) == -1) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = *(undefined4 *)
               (*(longlong *)
                 ((longlong)*(int *)(lVar3 + 0x564) * 0xa60 + 0x3638 + *(longlong *)(lVar3 + 0x8d8))
               + 0x20);
    }
LAB_18052449f:
    uVar7 = *(undefined8 *)(lVar3 + 0x598);
  }
  iStack_c = FUN_180557b40(uVar7,uVar2,0);
LAB_18052490a:
  FUN_18051ec50(lVar3,&uStack_10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805359c5(void)
void FUN_1805359c5(void)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong unaff_RDI;
  undefined1 uVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  int in_stack_00000030;
  undefined4 uStack_10;
  int iStack_c;
  undefined8 uStack_8;
  
  lVar3 = (longlong)in_stack_00000030 * 0xa60 + 0x30a0 + unaff_RDI;
  if ((*(uint *)(lVar3 + 0x56c) >> 0xb & 1) == 0) {
    *(undefined4 *)(*(longlong *)(lVar3 + 0x20) + 0x148) = 0xbecccccd;
  }
  else {
    *(undefined4 *)(*(longlong *)(lVar3 + 0x20) + 0x148) = 0xbe19999a;
  }
  if ((*(uint *)(lVar3 + 0x56c) >> 0xb & 1) == 0) {
    uVar2 = 0xffffffff;
    fVar9 = *(float *)(*(longlong *)(lVar3 + 0x20) + 0x20);
    fVar10 = *(float *)(*(longlong *)(lVar3 + 0x20) + 0x1c);
    uVar7 = 2;
    if (*(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x590) + 0x2590) + 0x10) < 5) {
      uVar7 = 0xffffffff;
    }
    if (*(int *)(lVar3 + 0x564) != -1) {
      uVar2 = *(undefined4 *)
               (*(longlong *)
                 ((longlong)*(int *)(lVar3 + 0x564) * 0xa60 + 0x3638 + *(longlong *)(lVar3 + 0x8d8))
               + 0x20);
    }
    iStack_c = FUN_180557b40(*(undefined8 *)(lVar3 + 0x598),uVar2,0,uVar7,0,0,
                             1.0 < fVar10 * fVar10 + fVar9 * fVar9);
    if (*(int *)(*(longlong *)
                  ((longlong)*(int *)(*(longlong *)(lVar3 + 0x590) + 0xac) * 0xe0 + 0x78 +
                  _DAT_180c95fb0) + (longlong)iStack_c * 8) < 0) {
      return;
    }
    if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
      FUN_1805ed8d0(*(undefined8 *)(lVar3 + 0x8e0));
    }
    uStack_8 = 0;
    uStack_10 = 0;
    goto LAB_18052490a;
  }
  lVar6 = 0;
  if ((((*(uint *)(lVar3 + 0x56c) >> 0xe & 1) != 0) && (_DAT_180c92514 != 1)) &&
     (_DAT_180c92514 != 4)) {
    plVar8 = (longlong *)(*(longlong *)(lVar3 + 0x8f8) + 0x9e8);
    piVar5 = (int *)(*(longlong *)(lVar3 + 0x8f8) + 0x9e0);
    do {
      if ((*piVar5 != -1) &&
         ((*(uint *)((longlong)*(int *)(*plVar8 + 0xf0) * 0xa0 + 0x58 +
                    *(longlong *)(*plVar8 + 0xd0)) & 0x2000) != 0)) {
        FUN_180524260(lVar3);
        break;
      }
      lVar6 = lVar6 + 1;
      piVar5 = piVar5 + 1;
      plVar8 = plVar8 + 1;
    } while (lVar6 < 2);
  }
  if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
    FUN_1805ed8d0(*(undefined8 *)(lVar3 + 0x8e0));
  }
  lVar6 = *(longlong *)(lVar3 + 0x20);
  cVar1 = func_0x000180522f60();
  if (cVar1 != '\0') {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(*(undefined4 *)(lVar6 + 0x34));
  }
  if (-0.6 <= *(float *)(lVar6 + 0x20)) {
    if (0.7 < *(float *)(lVar6 + 0x20)) {
      fVar9 = (float)atan2f(*(uint *)(lVar6 + 0x1c) ^ 0x80000000,*(undefined4 *)(lVar6 + 0x20));
      if (0.5 <= ABS(fVar9)) {
        cVar1 = (fVar9 < 0.0) + '\x03';
      }
      else {
        cVar1 = '\x02';
      }
      uStack_8 = 0;
      uStack_10 = 0;
      uVar2 = func_0x00018052dcc0(lVar3,*(undefined4 *)(lVar6 + 0x1c),
                                  *(undefined1 *)(*(longlong *)(lVar3 + 0x590) + 0x34bc),cVar1);
      goto LAB_18052449f;
    }
    fVar9 = *(float *)(lVar6 + 0x1c);
    uVar7 = *(undefined8 *)(lVar3 + 0x598);
    uStack_8 = 0;
    uStack_10 = 0;
    fVar10 = *(float *)(lVar6 + 0x20) * *(float *)(lVar6 + 0x20);
    if (fVar9 < -0.8) {
      uVar4 = 1.0 < fVar9 * fVar9 + fVar10;
      uVar2 = func_0x00018052dcc0(lVar3);
      iStack_c = FUN_180557b40(uVar7,uVar2,0,0,0,0,uVar4);
      FUN_18051ec50(lVar3,&uStack_10);
      if (*(int *)(lVar3 + 0x1fc) == 2) {
        return;
      }
      if (*(int *)(lVar3 + 0x1fc) == 5) {
        return;
      }
      func_0x000180525350(lVar3,1);
      return;
    }
    if (0.8 < fVar9) {
      uVar4 = 1.0 < fVar9 * fVar9 + fVar10;
      uVar2 = func_0x00018052dcc0(lVar3);
      iStack_c = FUN_180557b40(uVar7,uVar2,0,1,0,0,uVar4);
      FUN_18051ec50(lVar3,&uStack_10);
      if (*(int *)(lVar3 + 0x1fc) == 2) {
        return;
      }
      if (*(int *)(lVar3 + 0x1fc) == 5) {
        return;
      }
      lVar6 = *(longlong *)(lVar3 + 0x590);
      if (lVar6 == 0) {
        return;
      }
      if ((*(uint *)(lVar3 + 0x56c) & 0x800) == 0) {
        return;
      }
      if (*(char *)(lVar6 + 0x34bc) == '\0') {
        return;
      }
      *(undefined1 *)(lVar6 + 0x34bc) = 0;
      return;
    }
    uVar2 = func_0x00018052dcc0(lVar3);
  }
  else {
    uStack_8 = 0;
    uStack_10 = 0;
    if (*(int *)(lVar3 + 0x564) == -1) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = *(undefined4 *)
               (*(longlong *)
                 ((longlong)*(int *)(lVar3 + 0x564) * 0xa60 + 0x3638 + *(longlong *)(lVar3 + 0x8d8))
               + 0x20);
    }
LAB_18052449f:
    uVar7 = *(undefined8 *)(lVar3 + 0x598);
  }
  iStack_c = FUN_180557b40(uVar7,uVar2,0);
LAB_18052490a:
  FUN_18051ec50(lVar3,&uStack_10);
  return;
}





// 函数: void FUN_180535a30(longlong *param_1,undefined8 param_2,undefined8 param_3)
void FUN_180535a30(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int aiStackX_8 [2];
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    cVar2 = FUN_18055f260(param_3,aiStackX_8,&UNK_1809fa510);
    FUN_1804fe350(&UNK_180a30230,cVar2,&UNK_180a301f8,aiStackX_8);
    if (cVar2 != '\0') {
      *(undefined1 *)((longlong)aiStackX_8[0] * 0xa60 + 0x3628 + lVar1) = 1;
    }
  }
  return;
}





// 函数: void FUN_180535a48(void)
void FUN_180535a48(void)

{
  char cVar1;
  longlong unaff_RDI;
  int in_stack_00000030;
  
  cVar1 = FUN_18055f260();
  FUN_1804fe350(&UNK_180a30230,cVar1,&UNK_180a301f8,&stack0x00000030);
  if (cVar1 != '\0') {
    *(undefined1 *)((longlong)in_stack_00000030 * 0xa60 + 0x3628 + unaff_RDI) = 1;
  }
  return;
}





// 函数: void FUN_180535a81(void)
void FUN_180535a81(void)

{
  longlong unaff_RDI;
  int in_stack_00000030;
  
  *(undefined1 *)((longlong)in_stack_00000030 * 0xa60 + 0x3628 + unaff_RDI) = 1;
  return;
}





// 函数: void FUN_180535aa0(longlong *param_1,undefined8 param_2,undefined8 param_3)
void FUN_180535aa0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 extraout_XMM0_Qa;
  int aiStackX_8 [2];
  longlong lVar3;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined2 uStack_18;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0x7f7fffff;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0x7f7fffff;
    uStack_58 = 0xffffffffffffffff;
    uStack_50 = 0xffffffffffffffff;
    uStack_48 = 0xff;
    uStack_44 = 0xffffffff;
    uStack_40 = 0xff;
    uStack_3c = 0;
    uStack_30 = 0x7f7fffff;
    uStack_34 = 0;
    uStack_28 = 0;
    uStack_20 = 0xffffffffffffffff;
    uStack_18 = 0;
    cVar2 = FUN_1805ae280(param_3,aiStackX_8,&uStack_78);
    lVar3 = (longlong)&uStack_50 + 4;
    FUN_1804fe500(extraout_XMM0_Qa,cVar2);
    if (cVar2 != '\0') {
      FUN_18051d2d0((longlong)aiStackX_8[0] * 0xa60 + 0x30a0 + lVar1,0,&uStack_78,uStack_40,lVar3);
    }
  }
  return;
}





// 函数: void FUN_180535b2e(void)
void FUN_180535b2e(void)

{
  char cVar1;
  undefined8 unaff_RBX;
  longlong unaff_RDI;
  longlong in_R11;
  undefined1 *puVar2;
  undefined1 in_stack_00000068;
  int in_stack_000000b0;
  
  *(undefined8 *)(in_R11 + 0x10) = unaff_RBX;
  cVar1 = FUN_1805ae280();
  puVar2 = &stack0x0000005c;
  FUN_1804fe500();
  if (cVar1 != '\0') {
    FUN_18051d2d0((longlong)in_stack_000000b0 * 0xa60 + 0x30a0 + unaff_RDI,0,&stack0x00000030,
                  in_stack_00000068,puVar2);
  }
  return;
}





// 函数: void FUN_180535b60(void)
void FUN_180535b60(void)

{
  longlong unaff_RDI;
  undefined1 in_stack_00000068;
  int in_stack_000000b0;
  
  FUN_18051d2d0((longlong)in_stack_000000b0 * 0xa60 + 0x30a0 + unaff_RDI,0,&stack0x00000030,
                in_stack_00000068);
  return;
}





// 函数: void FUN_180535ba0(longlong *param_1,undefined8 param_2,undefined8 param_3)
void FUN_180535ba0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  uint auStackX_8 [2];
  int aiStackX_20 [2];
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  cVar2 = FUN_18055f260(param_3,aiStackX_20,&UNK_1809fa510);
  if (cVar2 != '\0') {
    auStackX_8[0] = (uint)((char)auStackX_8[0] != '\0');
    cVar2 = FUN_18055f260(param_3,auStackX_8,&UNK_1809fa560);
    auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,auStackX_8[0] != 0);
    if (cVar2 != '\0') {
      cVar2 = '\x01';
      goto LAB_180535c06;
    }
  }
  cVar2 = '\0';
LAB_180535c06:
  FUN_1804fe790(&UNK_180a303f8,cVar2,&UNK_180a30378,aiStackX_20,auStackX_8);
  if (cVar2 != '\0') {
    FUN_18051ac20((longlong)aiStackX_20[0] * 0xa60 + 0x30a0 + lVar1,(char)auStackX_8[0]);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001804f42d8)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



