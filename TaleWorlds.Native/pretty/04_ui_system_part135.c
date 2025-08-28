#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part135.c - 2 个函数

// 函数: void FUN_180748500(longlong param_1)
void FUN_180748500(longlong param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 8) != '\0') && (iVar1 = FUN_180744ee0(param_1,0), iVar1 != 0)) {
    return;
  }
  if (*(undefined8 **)(param_1 + 0x670) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x670))();
    *(undefined8 *)(param_1 + 0x670) = 0;
  }
  if (*(longlong *)(param_1 + 0x11418) != 0) {
    iVar1 = FUN_1807726d0(*(longlong *)(param_1 + 0x11418),1);
    if (iVar1 != 0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x11418) = 0;
    *(undefined1 *)(param_1 + 9) = 0;
  }
  iVar1 = FUN_180741b80(_DAT_180be12f0);
  if (iVar1 != 0) {
    return;
  }
  *(undefined8 *)(_DAT_180be12f0 + 0x160 + (ulonglong)*(uint *)(param_1 + 0x116b8) * 8) = 0;
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1,&UNK_180958000,0x53a,1);
}



uint FUN_1807485c0(longlong param_1,uint param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_50;
  float fStack_4c;
  float fStack_40;
  float fStack_3c;
  
  lVar6 = (longlong)(int)param_2;
  if (7 < param_2) {
    return 0x1f;
  }
  uVar5 = 0x1d;
  if (param_5 != (float *)0x0) {
    fVar11 = param_5[2];
    fVar12 = param_5[1];
    uVar3 = 0;
    fVar9 = *param_5;
    uVar8 = 0;
    uVar7 = 0;
    if (((uint)fVar11 & 0x7f800000) == 0x7f800000) {
      uVar7 = uVar5;
    }
    if (((uint)fVar12 & 0x7f800000) == 0x7f800000) {
      uVar3 = 0x1d;
    }
    if (((uint)fVar9 & 0x7f800000) == 0x7f800000) {
      uVar8 = 0x1d;
    }
    uVar8 = uVar7 | uVar3 | uVar8;
    if (uVar8 != 0) {
      return uVar8;
    }
    fVar10 = fVar12 * fVar12 + fVar9 * fVar9 + fVar11 * fVar11;
    if (fVar10 < 0.9) {
      return 0x24;
    }
    if (1.1 < fVar10) {
      return 0x24;
    }
    lVar4 = lVar6 * 0x70;
    if (((fVar9 != *(float *)(lVar4 + 0x110d4 + param_1)) ||
        (fVar12 != *(float *)(lVar4 + 0x110d8 + param_1))) ||
       (fVar11 != *(float *)(lVar4 + 0x110dc + param_1))) {
      *(undefined1 *)(lVar4 + 0x110ed + param_1) = 1;
    }
    *(undefined8 *)(lVar4 + 0x110d4 + param_1) = *(undefined8 *)(lVar4 + 0x110c8 + param_1);
    *(undefined4 *)(lVar4 + 0x110dc + param_1) = *(undefined4 *)(lVar4 + 0x110d0 + param_1);
    *(undefined8 *)(lVar4 + 0x110c8 + param_1) = *(undefined8 *)param_5;
    *(float *)(lVar4 + 0x110d0 + param_1) = param_5[2];
  }
  if (param_6 != (float *)0x0) {
    fVar11 = param_6[2];
    fVar12 = param_6[1];
    uVar3 = 0;
    fVar9 = *param_6;
    uVar8 = 0;
    uVar7 = 0;
    if (((uint)fVar11 & 0x7f800000) == 0x7f800000) {
      uVar7 = uVar5;
    }
    if (((uint)fVar12 & 0x7f800000) == 0x7f800000) {
      uVar3 = 0x1d;
    }
    if (((uint)fVar9 & 0x7f800000) == 0x7f800000) {
      uVar8 = 0x1d;
    }
    uVar8 = uVar7 | uVar3 | uVar8;
    if (uVar8 != 0) {
      return uVar8;
    }
    fVar10 = fVar12 * fVar12 + fVar9 * fVar9 + fVar11 * fVar11;
    if (fVar10 < 0.9) {
      return 0x24;
    }
    if (1.1 < fVar10) {
      return 0x24;
    }
    lVar4 = lVar6 * 0x70;
    if (((fVar9 != *(float *)(lVar4 + 0x110bc + param_1)) ||
        (fVar12 != *(float *)(lVar4 + 0x110c0 + param_1))) ||
       (fVar11 != *(float *)(lVar4 + 0x110c4 + param_1))) {
      *(undefined1 *)(lVar4 + 0x110ed + param_1) = 1;
    }
    *(undefined8 *)(lVar4 + 0x110bc + param_1) = *(undefined8 *)(lVar4 + 0x110b0 + param_1);
    *(undefined4 *)(lVar4 + 0x110c4 + param_1) = *(undefined4 *)(lVar4 + 0x110b8 + param_1);
    *(undefined8 *)(lVar4 + 0x110b0 + param_1) = *(undefined8 *)param_6;
    *(float *)(lVar4 + 0x110b8 + param_1) = param_6[2];
  }
  if (param_3 != (float *)0x0) {
    uVar3 = 0;
    uVar8 = 0;
    uVar7 = 0;
    if (((uint)param_3[2] & 0x7f800000) == 0x7f800000) {
      uVar7 = uVar5;
    }
    if (((uint)param_3[1] & 0x7f800000) == 0x7f800000) {
      uVar3 = 0x1d;
    }
    if (((uint)*param_3 & 0x7f800000) == 0x7f800000) {
      uVar8 = 0x1d;
    }
    uVar8 = uVar7 | uVar3 | uVar8;
    if (uVar8 != 0) {
      return uVar8;
    }
    lVar4 = lVar6 * 0x70;
    if (((*param_3 != *(float *)(lVar4 + 0x1108c + param_1)) ||
        (param_3[1] != *(float *)((lVar6 + 0x26f) * 0x70 + param_1))) ||
       (param_3[2] != *(float *)(lVar4 + 0x11094 + param_1))) {
      *(undefined1 *)(lVar4 + 0x110ec + param_1) = 1;
    }
    *(undefined8 *)(lVar4 + 0x11080 + param_1) = *(undefined8 *)param_3;
    *(float *)(lVar4 + 0x11088 + param_1) = param_3[2];
    *(undefined8 *)(lVar4 + 0x1108c + param_1) = *(undefined8 *)param_3;
    *(float *)(lVar4 + 0x11094 + param_1) = param_3[2];
  }
  if (param_4 != (float *)0x0) {
    uVar3 = 0;
    uVar7 = 0;
    if (((uint)param_4[2] & 0x7f800000) == 0x7f800000) {
      uVar7 = uVar5;
    }
    if (((uint)param_4[1] & 0x7f800000) == 0x7f800000) {
      uVar3 = 0x1d;
    }
    uVar8 = 0;
    if (((uint)*param_4 & 0x7f800000) == 0x7f800000) {
      uVar8 = uVar5;
    }
    uVar8 = uVar7 | uVar3 | uVar8;
    if (uVar8 != 0) {
      return uVar8;
    }
    lVar4 = lVar6 * 0x70;
    if (((*param_4 != *(float *)(lVar4 + 0x110a4 + param_1)) ||
        (param_4[1] != *(float *)(lVar4 + 0x110a8 + param_1))) ||
       (param_4[2] != *(float *)(lVar4 + 0x110ac + param_1))) {
      *(undefined1 *)(lVar4 + 0x110ec + param_1) = 1;
    }
    *(undefined8 *)(lVar4 + 0x110a4 + param_1) = *(undefined8 *)(lVar4 + 0x11098 + param_1);
    *(undefined4 *)(lVar4 + 0x110ac + param_1) = *(undefined4 *)(lVar4 + 0x110a0 + param_1);
    *(undefined8 *)(lVar4 + 0x11098 + param_1) = *(undefined8 *)param_4;
    *(float *)(lVar4 + 0x110a0 + param_1) = param_4[2];
  }
  lVar6 = lVar6 * 0x70;
  uVar1 = *(undefined8 *)(lVar6 + 0x110b0 + param_1);
  fVar11 = *(float *)(lVar6 + 0x110b8 + param_1);
  fVar12 = *(float *)(lVar6 + 0x110d0 + param_1);
  uVar2 = *(undefined8 *)(lVar6 + 0x110c8 + param_1);
  if ((*(byte *)(param_1 + 0x78) & 4) != 0) {
    fVar11 = -fVar11;
    fVar12 = -fVar12;
  }
  fStack_3c = (float)((ulonglong)uVar2 >> 0x20);
  fStack_40 = (float)uVar2;
  fStack_4c = (float)((ulonglong)uVar1 >> 0x20);
  fStack_50 = (float)uVar1;
  fVar9 = fStack_3c * fStack_4c + fStack_40 * fStack_50 + fVar12 * fVar11;
  if ((-0.01 <= fVar9) && (fVar9 <= 0.01)) {
    *(float *)(lVar6 + 0x110e0 + param_1) = fStack_4c * fVar12 - fStack_3c * fVar11;
    *(float *)(lVar6 + 0x110e8 + param_1) = fStack_3c * fStack_50 - fStack_4c * fStack_40;
    *(float *)(lVar6 + 0x110e4 + param_1) = fStack_40 * fVar11 - fStack_50 * fVar12;
    return 0;
  }
  return 0x24;
}



uint FUN_1807485dc(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  float *unaff_RSI;
  uint uVar6;
  uint uVar7;
  longlong in_R10;
  float *in_R11;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStackX_8;
  float fStackX_c;
  float fStackX_18;
  float fStackX_1c;
  float *in_stack_00000080;
  float *in_stack_00000088;
  
  uVar5 = 0x1d;
  if (in_stack_00000080 != (float *)0x0) {
    fVar10 = in_stack_00000080[2];
    fVar11 = in_stack_00000080[1];
    uVar3 = 0;
    fVar8 = *in_stack_00000080;
    uVar7 = 0;
    uVar6 = 0;
    if (((uint)fVar10 & 0x7f800000) == 0x7f800000) {
      uVar6 = uVar5;
    }
    if (((uint)fVar11 & 0x7f800000) == 0x7f800000) {
      uVar3 = 0x1d;
    }
    if (((uint)fVar8 & 0x7f800000) == 0x7f800000) {
      uVar7 = 0x1d;
    }
    uVar7 = uVar6 | uVar3 | uVar7;
    if (uVar7 != 0) {
      return uVar7;
    }
    fVar9 = fVar11 * fVar11 + fVar8 * fVar8 + fVar10 * fVar10;
    if (fVar9 < 0.9) {
      return 0x24;
    }
    if (1.1 < fVar9) {
      return 0x24;
    }
    lVar4 = param_3 * 0x70;
    if (((fVar8 != *(float *)(lVar4 + 0x110d4 + in_R10)) ||
        (fVar11 != *(float *)(lVar4 + 0x110d8 + in_R10))) ||
       (fVar10 != *(float *)(lVar4 + 0x110dc + in_R10))) {
      *(undefined1 *)(lVar4 + 0x110ed + in_R10) = 1;
    }
    *(undefined8 *)(lVar4 + 0x110d4 + in_R10) = *(undefined8 *)(lVar4 + 0x110c8 + in_R10);
    *(undefined4 *)(lVar4 + 0x110dc + in_R10) = *(undefined4 *)(lVar4 + 0x110d0 + in_R10);
    *(undefined8 *)(lVar4 + 0x110c8 + in_R10) = *(undefined8 *)in_stack_00000080;
    *(float *)(lVar4 + 0x110d0 + in_R10) = in_stack_00000080[2];
  }
  if (in_stack_00000088 != (float *)0x0) {
    fVar10 = in_stack_00000088[2];
    fVar11 = in_stack_00000088[1];
    uVar3 = 0;
    fVar8 = *in_stack_00000088;
    uVar7 = 0;
    uVar6 = 0;
    if (((uint)fVar10 & 0x7f800000) == 0x7f800000) {
      uVar6 = uVar5;
    }
    if (((uint)fVar11 & 0x7f800000) == 0x7f800000) {
      uVar3 = 0x1d;
    }
    if (((uint)fVar8 & 0x7f800000) == 0x7f800000) {
      uVar7 = 0x1d;
    }
    uVar7 = uVar6 | uVar3 | uVar7;
    if (uVar7 != 0) {
      return uVar7;
    }
    fVar9 = fVar11 * fVar11 + fVar8 * fVar8 + fVar10 * fVar10;
    if (fVar9 < 0.9) {
      return 0x24;
    }
    if (1.1 < fVar9) {
      return 0x24;
    }
    lVar4 = param_3 * 0x70;
    if (((fVar8 != *(float *)(lVar4 + 0x110bc + in_R10)) ||
        (fVar11 != *(float *)(lVar4 + 0x110c0 + in_R10))) ||
       (fVar10 != *(float *)(lVar4 + 0x110c4 + in_R10))) {
      *(undefined1 *)(lVar4 + 0x110ed + in_R10) = 1;
    }
    *(undefined8 *)(lVar4 + 0x110bc + in_R10) = *(undefined8 *)(lVar4 + 0x110b0 + in_R10);
    *(undefined4 *)(lVar4 + 0x110c4 + in_R10) = *(undefined4 *)(lVar4 + 0x110b8 + in_R10);
    *(undefined8 *)(lVar4 + 0x110b0 + in_R10) = *(undefined8 *)in_stack_00000088;
    *(float *)(lVar4 + 0x110b8 + in_R10) = in_stack_00000088[2];
  }
  if (in_R11 != (float *)0x0) {
    uVar3 = 0;
    uVar7 = 0;
    uVar6 = 0;
    if (((uint)in_R11[2] & 0x7f800000) == 0x7f800000) {
      uVar6 = uVar5;
    }
    if (((uint)in_R11[1] & 0x7f800000) == 0x7f800000) {
      uVar3 = 0x1d;
    }
    if (((uint)*in_R11 & 0x7f800000) == 0x7f800000) {
      uVar7 = 0x1d;
    }
    uVar7 = uVar6 | uVar3 | uVar7;
    if (uVar7 != 0) {
      return uVar7;
    }
    lVar4 = param_3 * 0x70;
    if (((*in_R11 != *(float *)(lVar4 + 0x1108c + in_R10)) ||
        (in_R11[1] != *(float *)((param_3 + 0x26f) * 0x70 + in_R10))) ||
       (in_R11[2] != *(float *)(lVar4 + 0x11094 + in_R10))) {
      *(undefined1 *)(lVar4 + 0x110ec + in_R10) = 1;
    }
    *(undefined8 *)(lVar4 + 0x11080 + in_R10) = *(undefined8 *)in_R11;
    *(float *)(lVar4 + 0x11088 + in_R10) = in_R11[2];
    *(undefined8 *)(lVar4 + 0x1108c + in_R10) = *(undefined8 *)in_R11;
    *(float *)(lVar4 + 0x11094 + in_R10) = in_R11[2];
  }
  if (unaff_RSI != (float *)0x0) {
    uVar3 = 0;
    uVar6 = 0;
    if (((uint)unaff_RSI[2] & 0x7f800000) == 0x7f800000) {
      uVar6 = uVar5;
    }
    if (((uint)unaff_RSI[1] & 0x7f800000) == 0x7f800000) {
      uVar3 = 0x1d;
    }
    uVar7 = 0;
    if (((uint)*unaff_RSI & 0x7f800000) == 0x7f800000) {
      uVar7 = uVar5;
    }
    uVar7 = uVar6 | uVar3 | uVar7;
    if (uVar7 != 0) {
      return uVar7;
    }
    lVar4 = param_3 * 0x70;
    if (((*unaff_RSI != *(float *)(lVar4 + 0x110a4 + in_R10)) ||
        (unaff_RSI[1] != *(float *)(lVar4 + 0x110a8 + in_R10))) ||
       (unaff_RSI[2] != *(float *)(lVar4 + 0x110ac + in_R10))) {
      *(undefined1 *)(lVar4 + 0x110ec + in_R10) = 1;
    }
    *(undefined8 *)(lVar4 + 0x110a4 + in_R10) = *(undefined8 *)(lVar4 + 0x11098 + in_R10);
    *(undefined4 *)(lVar4 + 0x110ac + in_R10) = *(undefined4 *)(lVar4 + 0x110a0 + in_R10);
    *(undefined8 *)(lVar4 + 0x11098 + in_R10) = *(undefined8 *)unaff_RSI;
    *(float *)(lVar4 + 0x110a0 + in_R10) = unaff_RSI[2];
  }
  param_3 = param_3 * 0x70;
  uVar1 = *(undefined8 *)(param_3 + 0x110b0 + in_R10);
  fVar10 = *(float *)(param_3 + 0x110b8 + in_R10);
  fVar11 = *(float *)(param_3 + 0x110d0 + in_R10);
  uVar2 = *(undefined8 *)(param_3 + 0x110c8 + in_R10);
  if ((*(byte *)(in_R10 + 0x78) & 4) != 0) {
    fVar10 = -fVar10;
    fVar11 = -fVar11;
  }
  fStackX_1c = (float)((ulonglong)uVar2 >> 0x20);
  fStackX_18 = (float)uVar2;
  fStackX_c = (float)((ulonglong)uVar1 >> 0x20);
  fStackX_8 = (float)uVar1;
  fVar8 = fStackX_1c * fStackX_c + fStackX_18 * fStackX_8 + fVar11 * fVar10;
  if ((-0.01 <= fVar8) && (fVar8 <= 0.01)) {
    *(float *)(param_3 + 0x110e0 + in_R10) = fStackX_c * fVar11 - fStackX_1c * fVar10;
    *(float *)(param_3 + 0x110e8 + in_R10) = fStackX_1c * fStackX_8 - fStackX_c * fStackX_18;
    *(float *)(param_3 + 0x110e4 + in_R10) = fStackX_18 * fVar10 - fStackX_8 * fVar11;
    return 0;
  }
  return 0x24;
}



uint FUN_1807487b0(undefined8 param_1,undefined8 param_2,longlong param_3,float param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint unaff_EBX;
  uint unaff_EBP;
  float *unaff_RSI;
  uint uVar6;
  undefined8 *in_R9;
  longlong in_R10;
  float *in_R11;
  float fVar7;
  float fVar8;
  float in_XMM4_Da;
  float fVar9;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float fStackX_8;
  float fStackX_c;
  float fStackX_18;
  float fStackX_1c;
  
  fVar8 = param_4 * param_4 + in_XMM4_Da * in_XMM4_Da + in_XMM5_Da * in_XMM5_Da;
  if ((unaff_XMM7_Da <= fVar8) && (fVar8 <= unaff_XMM6_Da)) {
    lVar4 = param_3 * 0x70;
    if ((in_XMM4_Da != *(float *)(lVar4 + 0x110bc + in_R10)) ||
       ((param_4 != *(float *)(lVar4 + 0x110c0 + in_R10) ||
        (in_XMM5_Da != *(float *)(lVar4 + 0x110c4 + in_R10))))) {
      *(undefined1 *)(lVar4 + 0x110ed + in_R10) = 1;
    }
    *(undefined8 *)(lVar4 + 0x110bc + in_R10) = *(undefined8 *)(lVar4 + 0x110b0 + in_R10);
    *(undefined4 *)(lVar4 + 0x110c4 + in_R10) = *(undefined4 *)(lVar4 + 0x110b8 + in_R10);
    *(undefined8 *)(lVar4 + 0x110b0 + in_R10) = *in_R9;
    *(undefined4 *)(lVar4 + 0x110b8 + in_R10) = *(undefined4 *)(in_R9 + 1);
    if (in_R11 != (float *)0x0) {
      uVar5 = unaff_EBX;
      if (((uint)in_R11[2] & 0x7f800000) == 0x7f800000) {
        uVar5 = unaff_EBP;
      }
      uVar3 = unaff_EBX;
      if (((uint)in_R11[1] & 0x7f800000) == 0x7f800000) {
        uVar3 = unaff_EBP;
      }
      uVar6 = unaff_EBX;
      if (((uint)*in_R11 & 0x7f800000) == 0x7f800000) {
        uVar6 = unaff_EBP;
      }
      uVar6 = uVar5 | uVar3 | uVar6;
      if (uVar6 != 0) {
        return uVar6;
      }
      lVar4 = param_3 * 0x70;
      if (((*in_R11 != *(float *)(lVar4 + 0x1108c + in_R10)) ||
          (in_R11[1] != *(float *)((param_3 + 0x26f) * 0x70 + in_R10))) ||
         (in_R11[2] != *(float *)(lVar4 + 0x11094 + in_R10))) {
        *(undefined1 *)(lVar4 + 0x110ec + in_R10) = 1;
      }
      *(undefined8 *)(lVar4 + 0x11080 + in_R10) = *(undefined8 *)in_R11;
      *(float *)(lVar4 + 0x11088 + in_R10) = in_R11[2];
      *(undefined8 *)(lVar4 + 0x1108c + in_R10) = *(undefined8 *)in_R11;
      *(float *)(lVar4 + 0x11094 + in_R10) = in_R11[2];
    }
    if (unaff_RSI != (float *)0x0) {
      uVar5 = unaff_EBX;
      if (((uint)unaff_RSI[2] & 0x7f800000) == 0x7f800000) {
        uVar5 = unaff_EBP;
      }
      uVar3 = unaff_EBX;
      if (((uint)unaff_RSI[1] & 0x7f800000) == 0x7f800000) {
        uVar3 = unaff_EBP;
      }
      if (((uint)*unaff_RSI & 0x7f800000) == 0x7f800000) {
        unaff_EBX = unaff_EBP;
      }
      uVar5 = uVar5 | uVar3 | unaff_EBX;
      if (uVar5 != 0) {
        return uVar5;
      }
      lVar4 = param_3 * 0x70;
      if (((*unaff_RSI != *(float *)(lVar4 + 0x110a4 + in_R10)) ||
          (unaff_RSI[1] != *(float *)(lVar4 + 0x110a8 + in_R10))) ||
         (unaff_RSI[2] != *(float *)(lVar4 + 0x110ac + in_R10))) {
        *(undefined1 *)(lVar4 + 0x110ec + in_R10) = 1;
      }
      *(undefined8 *)(lVar4 + 0x110a4 + in_R10) = *(undefined8 *)(lVar4 + 0x11098 + in_R10);
      *(undefined4 *)(lVar4 + 0x110ac + in_R10) = *(undefined4 *)(lVar4 + 0x110a0 + in_R10);
      *(undefined8 *)(lVar4 + 0x11098 + in_R10) = *(undefined8 *)unaff_RSI;
      *(float *)(lVar4 + 0x110a0 + in_R10) = unaff_RSI[2];
    }
    param_3 = param_3 * 0x70;
    uVar1 = *(undefined8 *)(param_3 + 0x110b0 + in_R10);
    fVar8 = *(float *)(param_3 + 0x110b8 + in_R10);
    fVar9 = *(float *)(param_3 + 0x110d0 + in_R10);
    uVar2 = *(undefined8 *)(param_3 + 0x110c8 + in_R10);
    if ((*(byte *)(in_R10 + 0x78) & 4) != 0) {
      fVar8 = -fVar8;
      fVar9 = -fVar9;
    }
    fStackX_1c = (float)((ulonglong)uVar2 >> 0x20);
    fStackX_18 = (float)uVar2;
    fStackX_c = (float)((ulonglong)uVar1 >> 0x20);
    fStackX_8 = (float)uVar1;
    fVar7 = fStackX_1c * fStackX_c + fStackX_18 * fStackX_8 + fVar9 * fVar8;
    if ((-0.01 <= fVar7) && (fVar7 <= 0.01)) {
      *(float *)(param_3 + 0x110e0 + in_R10) = fStackX_c * fVar9 - fStackX_1c * fVar8;
      *(float *)(param_3 + 0x110e8 + in_R10) = fStackX_1c * fStackX_8 - fStackX_c * fStackX_18;
      *(float *)(param_3 + 0x110e4 + in_R10) = fStackX_18 * fVar8 - fStackX_8 * fVar9;
      return 0;
    }
  }
  return 0x24;
}



undefined8 FUN_180748b0a(void)

{
  return 0x1f;
}



undefined8 FUN_180748b40(longlong param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  if (param_2 != (int *)0x0) {
    iVar3 = *param_2;
    if (((((iVar3 - 0x55U < 0x14) && (((longlong)iVar3 & 3U) == 0)) && ((uint)param_2[2] < 0x10000))
        && ((((uint)param_2[1] < 0x10000 && ((uint)param_2[3] < 0x10000)) &&
            (((uint)param_2[4] < 0x10000 &&
             (((uint)param_2[5] < 0x10000 && ((uint)param_2[6] < 0x10000)))))))) &&
       ((iVar3 < 0x61 || ((-1 < param_2[0x18] && (param_2[2] < 0x10000)))))) {
      fVar1 = (float)param_2[0xe];
      if (((uint)fVar1 & 0x7f800000) == 0x7f800000) {
        return 0x1d;
      }
      fVar2 = (float)param_2[0x12];
      if (0.0001 <= fVar2) {
        if (fVar2 < 10.0) {
          return 0x1f;
        }
        if (22050.0 < fVar2) {
          return 0x1f;
        }
      }
      else {
        param_2[0x12] = *(int *)(param_1 + 0x11650);
      }
      if ((((fVar1 == -1.0) || ((0.0 <= fVar1 && (fVar1 <= 1.0)))) && ((uint)param_2[8] < 0x21)) &&
         (((((uint)param_2[0x14] < 0x10000 && ((uint)param_2[0x15] < 5)) &&
           ((uint)param_2[0x13] < 4)) && ((uint)param_2[0x17] < 4)))) {
        if (29999 < param_2[0xf] - 1U) {
          param_2[0xf] = *(int *)(param_1 + 0x11644);
        }
        if (param_2[0x14] == 0) {
          param_2[0x14] = *(int *)(param_1 + 0x11658);
        }
        if (param_2[0x15] == 0) {
          param_2[0x15] = *(int *)(param_1 + 0x1165c);
        }
        if (param_2[0x17] == 0) {
          param_2[0x17] = *(int *)(param_1 + 0x11664);
        }
                    // WARNING: Subroutine does not return
        memcpy(param_1 + 0x11608,param_2,(longlong)iVar3);
      }
    }
  }
  return 0x1f;
}





// 函数: void FUN_180748dd0(longlong param_1)
void FUN_180748dd0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_18078ad10();
  if (iVar1 == 0) {
    FUN_180746460(param_1,*(undefined4 *)(param_1 + 0x680),0,0,param_1 + 0x116cc,0,0,0);
  }
  return;
}



undefined8 FUN_180748e20(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    func_0x000180743c20(param_1,0x15);
  }
  *(undefined8 *)(param_1 + 0x115e0 + (longlong)param_2 * 8) = param_3;
  *(undefined8 *)(param_1 + 0x115e8 + (longlong)param_2 * 8) = param_4;
  if ((param_1 != 0) && (param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(param_1,0x15);
  }
  return 0;
}





