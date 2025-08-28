#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part091.c - 11 个函数

// 函数: void FUN_180115640(longlong param_1,int *param_2,uint param_3)
void FUN_180115640(longlong param_1,int *param_2,uint param_3)

{
  undefined2 *puVar1;
  short sVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  ulonglong uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined2 auStackX_18 [4];
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_44;
  float afStack_40 [5];
  uint uStack_2c;
  
code_r0x000180115670:
  if ((int)param_3 < 0x30001) {
    if (param_3 == 0x30000) {
      func_0x0001801153c0(param_1,param_2);
      iVar7 = param_2[2];
      if (param_2[1] == iVar7) {
        iVar7 = *param_2;
        param_2[2] = iVar7;
        param_2[1] = iVar7;
      }
      if (0 < iVar7) {
        iVar7 = iVar7 + -1;
        param_2[2] = iVar7;
      }
      *param_2 = iVar7;
      goto LAB_180115fd1;
    }
    switch(param_3) {
    case 0x10000:
      iVar7 = param_2[1];
      iVar14 = param_2[2];
      bVar13 = SBORROW4(iVar7,iVar14);
      iVar11 = iVar7 - iVar14;
      bVar12 = iVar7 == iVar14;
      if (bVar12) {
        if (0 < *param_2) {
          *param_2 = *param_2 + -1;
        }
        goto LAB_180115fd1;
      }
      break;
    case 0x10001:
      if (param_2[1] == param_2[2]) {
        *param_2 = *param_2 + 1;
        func_0x0001801153c0(param_1,param_2);
      }
      else {
        func_0x000180115530(param_1,param_2);
        func_0x0001801153c0(param_1);
      }
      goto LAB_180115fd1;
    case 0x10002:
      goto code_r0x0001801156d0;
    case 0x10003:
      goto code_r0x0001801156b8;
    case 0x10004:
      iVar7 = param_2[1];
      iVar14 = param_2[2];
      iVar11 = *(int *)(param_1 + 0x3c);
      if (iVar7 != iVar14) {
        if (iVar11 < iVar7) {
          param_2[1] = iVar11;
          iVar7 = iVar11;
        }
        if (iVar11 < iVar14) {
          param_2[2] = iVar11;
          iVar14 = iVar11;
        }
        if (iVar7 == iVar14) {
          *param_2 = iVar7;
        }
      }
      iVar5 = *param_2;
      if (iVar11 < *param_2) {
        *param_2 = iVar11;
        iVar5 = iVar11;
      }
      if (iVar7 != iVar14) {
        iVar5 = iVar7;
        if (iVar14 < iVar7) {
          param_2[1] = iVar14;
          iVar5 = iVar14;
        }
        *param_2 = iVar5;
        param_2[2] = iVar5;
        *(undefined1 *)((longlong)param_2 + 0xf) = 0;
      }
      if ((char)param_2[4] == '\0') {
        while ((0 < iVar5 &&
               (*(short *)(*(longlong *)(param_1 + 0x10) + -2 + (longlong)iVar5 * 2) != 10))) {
          iVar5 = iVar5 + -1;
          *param_2 = iVar5;
        }
      }
      else {
        *param_2 = 0;
      }
      goto LAB_180115fd1;
    case 0x10005:
      iVar7 = param_2[1];
      iVar14 = param_2[2];
      iVar11 = *(int *)(param_1 + 0x3c);
      if (iVar7 != iVar14) {
        if (iVar11 < iVar7) {
          param_2[1] = iVar11;
          iVar7 = iVar11;
        }
        if (iVar11 < iVar14) {
          param_2[2] = iVar11;
          iVar14 = iVar11;
        }
        if (iVar7 == iVar14) {
          *param_2 = iVar7;
        }
      }
      iVar5 = *param_2;
      if (iVar11 < *param_2) {
        *param_2 = iVar11;
        iVar5 = iVar11;
      }
      if (iVar7 != iVar14) {
        iVar5 = iVar7;
        if (iVar14 < iVar7) {
          param_2[1] = iVar14;
          iVar5 = iVar14;
        }
        *param_2 = iVar5;
        param_2[2] = iVar5;
        *(undefined1 *)((longlong)param_2 + 0xf) = 0;
      }
      if ((char)param_2[4] == '\0') {
        while ((iVar5 < iVar11 &&
               (*(short *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 2) != 10))) {
          iVar5 = iVar5 + 1;
          *param_2 = iVar5;
        }
      }
      else {
        *param_2 = iVar11;
      }
      goto LAB_180115fd1;
    case 0x10006:
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      *(undefined1 *)((longlong)param_2 + 0xf) = 0;
      return;
    case 0x10007:
      iVar7 = *(int *)(param_1 + 0x3c);
      param_2[1] = 0;
      param_2[2] = 0;
      *(undefined1 *)((longlong)param_2 + 0xf) = 0;
      *param_2 = iVar7;
      return;
    case 0x10008:
      goto code_r0x000180115ca5;
    case 0x10009:
      goto code_r0x000180115cd0;
    case 0x1000a:
      FUN_180116200(param_1,param_2);
      goto LAB_180115fd1;
    case 0x1000b:
      if ((short)param_2[0x386] != 99) {
        piVar9 = param_2 + (longlong)*(short *)((longlong)param_2 + 0xe16) * 4 + 6;
        auStack_58 = *(undefined1 (*) [16])(param_2 + (longlong)(short)param_2[0x386] * 4 + 6);
        iVar14 = auStack_58._0_4_;
        uVar10 = auStack_58._0_8_;
        piVar9[3] = -1;
        *piVar9 = iVar14;
        iVar7 = auStack_58._8_4_;
        piVar9[2] = auStack_58._4_4_;
        piVar9[1] = iVar7;
        if (iVar7 != 0) {
          iVar11 = 0;
          if (param_2[0x388] < param_2[0x387] + iVar7) {
            piVar9[1] = 0;
            piVar9[2] = 0;
          }
          else {
            piVar9[3] = param_2[0x387];
            param_2[0x387] = param_2[0x387] + iVar7;
            if (0 < piVar9[1]) {
              do {
                iVar5 = *piVar9 + iVar11;
                iVar6 = piVar9[3] + iVar11;
                iVar11 = iVar11 + 1;
                *(undefined2 *)((longlong)param_2 + (longlong)iVar6 * 2 + 0x648) =
                     *(undefined2 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 2);
              } while (iVar11 < piVar9[1]);
            }
          }
          FUN_180114e30(param_1,iVar14,iVar7);
        }
        uVar3 = auStack_58._4_4_;
        if (auStack_58._4_4_ != 0) {
          FUN_180114ec0(param_1,uVar10 & 0xffffffff,
                        (longlong)param_2 + ((longlong)(int)auStack_58._12_4_ + 0x318) * 2 + 0x18,
                        auStack_58._4_4_);
          param_2[0x388] = param_2[0x388] + uVar3;
        }
        *param_2 = iVar14 + uVar3;
        *(short *)((longlong)param_2 + 0xe16) = *(short *)((longlong)param_2 + 0xe16) + 1;
        *(short *)(param_2 + 0x386) = (short)param_2[0x386] + 1;
      }
      goto LAB_180115fd1;
    case 0x1000c:
      iVar7 = param_2[1];
      iVar14 = param_2[2];
      bVar13 = SBORROW4(iVar7,iVar14);
      iVar11 = iVar7 - iVar14;
      bVar12 = iVar7 == iVar14;
      if (bVar12) {
        iVar7 = FUN_180114cb0(param_1,*param_2);
        *param_2 = iVar7;
        func_0x0001801153c0(param_1,param_2);
        return;
      }
      break;
    case 0x1000d:
      if (param_2[1] != param_2[2]) {
        func_0x000180115530(param_1,param_2);
        return;
      }
      iVar7 = FUN_180114d70(param_1,*param_2);
      *param_2 = iVar7;
      func_0x0001801153c0(param_1,param_2);
      return;
    default:
      goto LAB_180115e74;
    }
    if (!bVar12 && bVar13 == iVar11 < 0) {
      param_2[1] = iVar14;
      iVar7 = iVar14;
    }
    *param_2 = iVar7;
    param_2[2] = iVar7;
    goto LAB_180115fd1;
  }
  switch(param_3) {
  case 0x30001:
    iVar7 = param_2[2];
    if (param_2[1] == iVar7) {
      iVar7 = *param_2;
      param_2[1] = iVar7;
    }
    else {
      *param_2 = iVar7;
    }
    param_2[2] = iVar7 + 1;
    func_0x0001801153c0(param_1,param_2);
    *param_2 = param_2[2];
    goto LAB_180115fd1;
  case 0x30002:
code_r0x0001801156d0:
    if ((char)param_2[4] == '\0') {
      iVar7 = param_2[2];
      iVar14 = param_2[1];
      if ((param_3 >> 0x11 & 1) == 0) {
        if (iVar14 != iVar7) {
          if (iVar7 < iVar14) {
            param_2[1] = iVar7;
            iVar14 = iVar7;
          }
          *param_2 = iVar14;
          *(undefined1 *)((longlong)param_2 + 0xf) = 0;
          goto code_r0x000180115b8c;
        }
      }
      else if (iVar14 == iVar7) {
        iVar14 = *param_2;
        param_2[1] = iVar14;
code_r0x000180115b8c:
        param_2[2] = iVar14;
      }
      else {
        *param_2 = iVar7;
      }
      func_0x0001801153c0(param_1,param_2);
      FUN_180115200(auStack_58,param_1,*param_2,(char)param_2[4]);
      if (iStack_44 == auStack_58._12_4_) {
        return;
      }
      if (*(char *)((longlong)param_2 + 0xf) == '\0') {
        fVar18 = (float)auStack_58._0_4_;
      }
      else {
        fVar18 = (float)param_2[5];
      }
      *param_2 = iStack_44;
      FUN_180114bc0(afStack_40,param_1,iStack_44);
      uVar10 = (ulonglong)uStack_2c;
      iVar7 = 0;
      if ((int)uStack_2c < 1) goto code_r0x000180115b16;
      fVar17 = -1.0;
      fVar16 = afStack_40[0];
      goto code_r0x000180115c00;
    }
    param_3 = param_3 & 0x20000 | 0x10000;
    goto code_r0x000180115670;
  case 0x30003:
code_r0x0001801156b8:
    if ((char)param_2[4] != '\0') goto code_r0x0001801156c2;
    iVar7 = param_2[2];
    if ((param_3 >> 0x11 & 1) == 0) {
      if (param_2[1] != iVar7) {
        func_0x000180115530(param_1,param_2);
      }
    }
    else if (param_2[1] == iVar7) {
      param_2[2] = *param_2;
      param_2[1] = *param_2;
    }
    else {
      *param_2 = iVar7;
    }
    func_0x0001801153c0(param_1,param_2);
    FUN_180115200(auStack_58,param_1,*param_2,(char)param_2[4]);
    if (iStack_48 == 0) {
      return;
    }
    if (*(char *)((longlong)param_2 + 0xf) == '\0') {
      fVar18 = (float)auStack_58._0_4_;
    }
    else {
      fVar18 = (float)param_2[5];
    }
    iVar14 = auStack_58._12_4_ + iStack_48;
    *param_2 = iVar14;
    FUN_180114bc0(afStack_40,param_1,iVar14);
    uVar10 = (ulonglong)uStack_2c;
    iVar7 = 0;
    if (0 < (int)uStack_2c) {
      fVar17 = -1.0;
      fVar16 = afStack_40[0];
      do {
        fVar15 = (float)func_0x000180114b50(param_1,iVar14,iVar7);
        if ((fVar15 == fVar17) || (fVar16 = fVar16 + fVar15, fVar18 < fVar16)) break;
        *param_2 = *param_2 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar10);
    }
    goto code_r0x000180115b16;
  case 0x30004:
    func_0x0001801153c0(param_1,param_2);
    iVar7 = param_2[2];
    if (param_2[1] == iVar7) {
      iVar7 = *param_2;
      param_2[2] = iVar7;
      param_2[1] = iVar7;
    }
    else {
      *param_2 = iVar7;
    }
    if ((char)param_2[4] == '\0') {
      while ((0 < iVar7 &&
             (*(short *)(*(longlong *)(param_1 + 0x10) + -2 + (longlong)iVar7 * 2) != 10))) {
        iVar7 = iVar7 + -1;
        *param_2 = iVar7;
      }
      param_2[2] = iVar7;
    }
    else {
      *param_2 = 0;
      param_2[2] = 0;
    }
    goto LAB_180115fd1;
  case 0x30005:
    iVar14 = param_2[1];
    iVar7 = param_2[2];
    iVar11 = *(int *)(param_1 + 0x3c);
    if (iVar14 != iVar7) {
      if (iVar11 < iVar14) {
        param_2[1] = iVar11;
        iVar14 = iVar11;
      }
      if (iVar11 < iVar7) {
        param_2[2] = iVar11;
        iVar7 = iVar11;
      }
      if (iVar14 == iVar7) {
        *param_2 = iVar14;
      }
    }
    iVar5 = *param_2;
    if (iVar11 < *param_2) {
      *param_2 = iVar11;
      iVar5 = iVar11;
    }
    if (iVar14 == iVar7) {
      param_2[2] = iVar5;
      param_2[1] = iVar5;
      iVar7 = iVar5;
    }
    else {
      *param_2 = iVar7;
    }
    if ((char)param_2[4] == '\0') {
      while ((iVar7 < iVar11 &&
             (*(short *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar7 * 2) != 10))) {
        iVar7 = iVar7 + 1;
        *param_2 = iVar7;
      }
      param_2[2] = iVar7;
    }
    else {
      *param_2 = iVar11;
      param_2[2] = iVar11;
    }
    goto LAB_180115fd1;
  case 0x30006:
    if (param_2[1] == param_2[2]) {
      param_2[1] = *param_2;
    }
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)((longlong)param_2 + 0xf) = 0;
    return;
  case 0x30007:
    if (param_2[1] == param_2[2]) {
      param_2[2] = *param_2;
      param_2[1] = *param_2;
      iVar7 = *(int *)(param_1 + 0x3c);
      param_2[2] = iVar7;
      *param_2 = iVar7;
    }
    else {
      *param_2 = param_2[2];
      iVar7 = *(int *)(param_1 + 0x3c);
      param_2[2] = iVar7;
      *param_2 = iVar7;
    }
    goto LAB_180115fd1;
  case 0x30008:
code_r0x000180115ca5:
    if (param_2[1] == param_2[2]) {
      if (*param_2 < *(int *)(param_1 + 0x3c)) {
        FUN_180115400(param_1,param_2,*param_2,1);
      }
      goto LAB_180115fd1;
    }
    break;
  case 0x30009:
code_r0x000180115cd0:
    if (param_2[1] == param_2[2]) {
      iVar7 = *(int *)(param_1 + 0x3c);
      iVar14 = *param_2;
      if (iVar7 < *param_2) {
        *param_2 = iVar7;
        iVar14 = iVar7;
      }
      if (0 < iVar14) {
        FUN_180115400(param_1,param_2,iVar14 + -1,1);
        *param_2 = *param_2 + -1;
      }
      goto LAB_180115fd1;
    }
    break;
  default:
LAB_180115e74:
    if (0xffff < (int)param_3) {
      param_3 = 0;
    }
    if ((int)param_3 < 1) {
      return;
    }
    auStackX_18[0] = (undefined2)param_3;
    if ((param_3 == 10) && ((char)param_2[4] != '\0')) {
      return;
    }
    if (((char)param_2[3] != '\0') && (param_2[1] == param_2[2])) {
      iVar7 = *param_2;
      if (iVar7 < *(int *)(param_1 + 0x3c)) {
        piVar9 = param_2 + 6;
        *(undefined2 *)(param_2 + 0x386) = 99;
        param_2[0x388] = 999;
        if (*(short *)((longlong)param_2 + 0xe16) == 99) {
          FUN_180116060(piVar9);
        }
        if (999 < param_2[0x387] + 1) {
          do {
            FUN_180116060(piVar9);
          } while (0x3e6 < param_2[0x387]);
        }
        sVar2 = *(short *)((longlong)param_2 + 0xe16);
        *(short *)((longlong)param_2 + 0xe16) = sVar2 + 1;
        piVar8 = piVar9 + (longlong)sVar2 * 4;
        if (piVar8 != (int *)0x0) {
          *piVar8 = iVar7;
          piVar8[1] = 1;
          piVar8[2] = 1;
          piVar8[3] = param_2[0x387];
          param_2[0x387] = param_2[0x387] + 1;
          puVar1 = (undefined2 *)((longlong)piVar9 + ((longlong)piVar8[3] + 0x318) * 2);
          if (puVar1 != (undefined2 *)0x0) {
            *puVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar7 * 2);
          }
        }
        FUN_180114e30(param_1,*param_2,1);
        cVar4 = FUN_180114ec0(param_1,*param_2,auStackX_18,1);
        if (cVar4 == '\0') {
          return;
        }
LAB_180115fcf:
        *param_2 = *param_2 + 1;
LAB_180115fd1:
        *(undefined1 *)((longlong)param_2 + 0xf) = 0;
        return;
      }
    }
    FUN_180115490(param_1,param_2);
    cVar4 = FUN_180114ec0(param_1,*param_2,auStackX_18,1);
    if (cVar4 == '\0') {
      return;
    }
    FUN_180116470(param_2,*param_2,1);
    goto LAB_180115fcf;
  case 0x3000c:
    if (param_2[1] == param_2[2]) {
      param_2[2] = *param_2;
      param_2[1] = *param_2;
    }
    iVar7 = FUN_180114cb0(param_1);
    goto code_r0x000180115c4b;
  case 0x3000d:
    if (param_2[1] == param_2[2]) {
      param_2[2] = *param_2;
      param_2[1] = *param_2;
    }
    iVar7 = FUN_180114d70(param_1);
code_r0x000180115c4b:
    *param_2 = iVar7;
    param_2[2] = iVar7;
    func_0x0001801153c0(param_1,param_2);
    return;
  }
  FUN_180115490(param_1,param_2);
  goto LAB_180115fd1;
code_r0x0001801156c2:
  param_3 = param_3 & 0x20000 | 0x10001;
  goto code_r0x000180115670;
  while( true ) {
    *param_2 = *param_2 + 1;
    iVar7 = iVar7 + 1;
    if ((int)uVar10 <= iVar7) break;
code_r0x000180115c00:
    fVar15 = (float)func_0x000180114b50(param_1,iStack_44,iVar7);
    if ((fVar15 == fVar17) || (fVar16 = fVar16 + fVar15, fVar18 < fVar16)) break;
  }
code_r0x000180115b16:
  iVar7 = param_2[2];
  iVar14 = param_2[1];
  iVar11 = *(int *)(param_1 + 0x3c);
  if (iVar14 != iVar7) {
    if (iVar11 < iVar14) {
      param_2[1] = iVar11;
      iVar14 = iVar11;
    }
    if (iVar11 < iVar7) {
      param_2[2] = iVar11;
      iVar7 = iVar11;
    }
    if (iVar14 == iVar7) {
      *param_2 = iVar14;
    }
  }
  iVar7 = *param_2;
  if (iVar11 < *param_2) {
    *param_2 = iVar11;
    iVar7 = iVar11;
  }
  param_2[5] = (int)fVar18;
  *(undefined1 *)((longlong)param_2 + 0xf) = 1;
  if ((param_3 >> 0x11 & 1) != 0) {
    param_2[2] = iVar7;
  }
  return;
}





// 函数: void FUN_180115721(undefined8 param_1,undefined8 param_2,int *param_3)
void FUN_180115721(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  longlong in_RAX;
  int *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  auVar1 = *(undefined1 (*) [16])(unaff_RSI + in_RAX * 8);
  iVar6 = auVar1._0_4_;
  param_3[3] = -1;
  *(undefined1 (*) [16])(unaff_RBP + -0x40) = auVar1;
  *param_3 = iVar6;
  uVar7 = auVar1._8_8_;
  iVar5 = auVar1._8_4_;
  param_3[2] = auVar1._4_4_;
  param_3[1] = iVar5;
  if (iVar5 != 0) {
    iVar4 = 0;
    if (*(int *)(unaff_RSI + 0xe08) < *(int *)(unaff_RSI + 0xe04) + iVar5) {
      param_3[1] = 0;
      param_3[2] = 0;
    }
    else {
      param_3[3] = *(int *)(unaff_RSI + 0xe04);
      *(int *)(unaff_RSI + 0xe04) = *(int *)(unaff_RSI + 0xe04) + iVar5;
      if (0 < param_3[1]) {
        do {
          iVar2 = *param_3 + iVar4;
          iVar3 = param_3[3] + iVar4;
          iVar4 = iVar4 + 1;
          *(undefined2 *)(unaff_RSI + 0x630 + (longlong)iVar3 * 2) =
               *(undefined2 *)(*(longlong *)(unaff_RDI + 0x10) + (longlong)iVar2 * 2);
        } while (iVar4 < param_3[1]);
      }
    }
    uVar7 = FUN_180114e30(uVar7,iVar6,iVar5);
  }
  iVar5 = *(int *)(unaff_RBP + -0x3c);
  if (iVar5 != 0) {
    FUN_180114ec0(uVar7,auVar1._0_8_ & 0xffffffff,
                  unaff_RSI + ((longlong)*(int *)(unaff_RBP + -0x34) + 0x318) * 2,iVar5);
    *(int *)(unaff_RSI + 0xe08) = *(int *)(unaff_RSI + 0xe08) + iVar5;
  }
  *unaff_RBX = iVar6 + iVar5;
  *(short *)(unaff_RSI + 0xdfe) = *(short *)(unaff_RSI + 0xdfe) + 1;
  *(short *)(unaff_RSI + 0xe00) = *(short *)(unaff_RSI + 0xe00) + 1;
  *(undefined1 *)((longlong)unaff_RBX + 0xf) = 0;
  return;
}





// 函数: void FUN_180115818(void)
void FUN_180115818(void)

{
  int iVar1;
  int iVar2;
  int *unaff_RBX;
  
  iVar2 = unaff_RBX[1];
  iVar1 = unaff_RBX[2];
  if (iVar2 == iVar1) {
    if (0 < *unaff_RBX) {
      *unaff_RBX = *unaff_RBX + -1;
    }
  }
  else {
    if (iVar1 < iVar2) {
      unaff_RBX[1] = iVar1;
      iVar2 = iVar1;
    }
    *unaff_RBX = iVar2;
    unaff_RBX[2] = iVar2;
  }
  *(undefined1 *)((longlong)unaff_RBX + 0xf) = 0;
  return;
}





// 函数: void FUN_180116060(longlong param_1)
void FUN_180116060(longlong param_1)

{
  short sVar1;
  
  if (*(short *)(param_1 + 0xdfe) < 1) {
    return;
  }
  if (-1 < *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xe04) = *(int *)(param_1 + 0xe04) - *(int *)(param_1 + 4);
                    // WARNING: Subroutine does not return
    memmove(param_1 + 0x630,param_1 + 0x630 + (longlong)*(int *)(param_1 + 4) * 2,
            (longlong)*(int *)(param_1 + 0xe04) * 2);
  }
  sVar1 = *(short *)(param_1 + 0xdfe) + -1;
  *(short *)(param_1 + 0xdfe) = sVar1;
                    // WARNING: Subroutine does not return
  memmove(param_1,param_1 + 0x10,(longlong)sVar1 << 4);
}





// 函数: void FUN_18011607d(longlong param_1,short param_2)
void FUN_18011607d(longlong param_1,short param_2)

{
  longlong unaff_RDI;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
    *(int *)(param_1 + 0xe04) = *(int *)(param_1 + 0xe04) - *(int *)(param_1 + 4);
                    // WARNING: Subroutine does not return
    memmove(param_1 + 0x630,param_1 + 0x630 + (longlong)*(int *)(param_1 + 4) * 2,
            (longlong)*(int *)(param_1 + 0xe04) * 2);
  }
  *(short *)(unaff_RDI + 0xdfe) = param_2 + -1;
                    // WARNING: Subroutine does not return
  memmove();
}





// 函数: void FUN_18011608f(longlong param_1)
void FUN_18011608f(longlong param_1)

{
  longlong in_RAX;
  
  *(int *)(param_1 + 0xe04) = *(int *)(param_1 + 0xe04) - *(int *)(param_1 + 4);
                    // WARNING: Subroutine does not return
  memmove(param_1 + 0x630,in_RAX + (longlong)*(int *)(param_1 + 4) * 2,
          (longlong)*(int *)(param_1 + 0xe04) * 2);
}





// 函数: void FUN_1801160e6(undefined8 param_1,short param_2)
void FUN_1801160e6(undefined8 param_1,short param_2)

{
  longlong unaff_RDI;
  
  *(short *)(unaff_RDI + 0xdfe) = param_2 + -1;
                    // WARNING: Subroutine does not return
  memmove();
}





// 函数: void FUN_180116109(void)
void FUN_180116109(void)

{
  return;
}



longlong FUN_180116110(longlong param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_1 + 0xe08) = 999;
  *(undefined2 *)(param_1 + 0xe00) = 99;
  if (*(short *)(param_1 + 0xdfe) == 99) {
    FUN_180116060();
  }
  if (param_3 < 1000) {
    iVar2 = *(int *)(param_1 + 0xe04);
    while (999 < iVar2 + param_3) {
      FUN_180116060(param_1);
      iVar2 = *(int *)(param_1 + 0xe04);
    }
    sVar1 = *(short *)(param_1 + 0xdfe);
    *(short *)(param_1 + 0xdfe) = sVar1 + 1;
    puVar3 = (undefined4 *)((longlong)sVar1 * 0x10 + param_1);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = param_2;
      puVar3[1] = param_3;
      puVar3[2] = param_4;
      if (param_3 != 0) {
        puVar3[3] = *(undefined4 *)(param_1 + 0xe04);
        *(int *)(param_1 + 0xe04) = *(int *)(param_1 + 0xe04) + param_3;
        return param_1 + ((longlong)(int)puVar3[3] + 0x318) * 2;
      }
      puVar3[3] = 0xffffffff;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0xdfe) = 0;
    *(undefined4 *)(param_1 + 0xe04) = 0;
  }
  return 0;
}





// 函数: void FUN_180116200(longlong param_1,int *param_2)
void FUN_180116200(longlong param_1,int *param_2)

{
  undefined1 auVar1 [16];
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iStack_c;
  
  if (*(short *)((longlong)param_2 + 0xe16) != 0) {
    sVar2 = (short)param_2[0x386];
    auVar1 = *(undefined1 (*) [16])
              (param_2 + (longlong)*(short *)((longlong)param_2 + 0xe16) * 4 + 2);
    iVar9 = auVar1._0_4_;
    param_2[(longlong)sVar2 * 4 + 5] = -1;
    param_2[(longlong)sVar2 * 4 + 2] = iVar9;
    iVar6 = auVar1._8_4_;
    param_2[(longlong)sVar2 * 4 + 3] = iVar6;
    iVar4 = auVar1._4_4_;
    param_2[(longlong)sVar2 * 4 + 4] = iVar4;
    if (iVar6 != 0) {
      if (param_2[0x387] + iVar6 < 999) {
        iVar5 = param_2[0x388];
        if (iVar5 < param_2[0x387] + iVar6) {
          sVar2 = (short)param_2[0x386];
          do {
            if (sVar2 == 99) {
              return;
            }
            if (sVar2 < 99) {
              if (-1 < param_2[0x191]) {
                iVar5 = iVar5 + param_2[399];
                param_2[0x388] = iVar5;
                    // WARNING: Subroutine does not return
                memmove((longlong)param_2 + ((longlong)iVar5 + 0x324) * 2,
                        (longlong)param_2 + (((longlong)iVar5 - (longlong)param_2[399]) + 0x324) * 2
                        ,(longlong)(999 - iVar5) * 2);
              }
                    // WARNING: Subroutine does not return
              memmove(param_2 + (longlong)sVar2 * 4 + 6 + 4,param_2 + (longlong)sVar2 * 4 + 6,
                      (longlong)(99 - sVar2) << 4);
            }
          } while (iVar5 < param_2[0x387] + iVar6);
        }
        iVar3 = param_2[0x386];
        iVar7 = 0;
        param_2[(longlong)(short)iVar3 * 4 + 5] = iVar5 - iVar6;
        param_2[0x388] = param_2[0x388] - iVar6;
        if (0 < iVar6) {
          lVar8 = (longlong)iVar9 * 2;
          do {
            iVar5 = param_2[(longlong)(short)iVar3 * 4 + 5] + iVar7;
            iVar7 = iVar7 + 1;
            *(undefined2 *)((longlong)param_2 + (longlong)iVar5 * 2 + 0x648) =
                 *(undefined2 *)(lVar8 + *(longlong *)(param_1 + 0x10));
            lVar8 = lVar8 + 2;
          } while (iVar7 < iVar6);
        }
      }
      else {
        param_2[(longlong)sVar2 * 4 + 3] = 0;
      }
      FUN_180114e30(param_1,iVar9,iVar6);
    }
    if (iVar4 != 0) {
      iStack_c = auVar1._12_4_;
      FUN_180114ec0(param_1,iVar9,(longlong)param_2 + ((longlong)iStack_c + 0x324) * 2,iVar4);
      param_2[0x387] = param_2[0x387] - iVar4;
    }
    *param_2 = iVar9 + iVar4;
    *(short *)((longlong)param_2 + 0xe16) = *(short *)((longlong)param_2 + 0xe16) + -1;
    *(short *)(param_2 + 0x386) = (short)param_2[0x386] + -1;
  }
  return;
}





// 函数: void FUN_18011622f(longlong param_1,longlong param_2)
void FUN_18011622f(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  short sVar2;
  int iVar3;
  longlong in_RAX;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong unaff_RBP;
  int *unaff_RSI;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  int iStack000000000000002c;
  
  lVar5 = param_1 * 0x10 + param_2;
  auVar1 = *(undefined1 (*) [16])(param_2 + 8 + in_RAX * 8);
  iVar10 = auVar1._0_4_;
  *(undefined4 *)(lVar5 + 0x14) = 0xffffffff;
  *(int *)(lVar5 + 8) = iVar10;
  uVar9 = auVar1._8_8_;
  iVar7 = auVar1._8_4_;
  *(int *)(lVar5 + 0xc) = iVar7;
  iVar3 = auVar1._4_4_;
  *(int *)(lVar5 + 0x10) = iVar3;
  if (iVar7 != 0) {
    iVar6 = *(int *)(param_2 + 0xe1c) + iVar7;
    if (iVar6 < 999) {
      iVar4 = unaff_RSI[0x388];
      if (iVar4 < iVar6) {
        sVar2 = (short)unaff_RSI[0x386];
        do {
          if (sVar2 == 99) {
            return;
          }
          if (sVar2 < 99) {
            if (-1 < unaff_RSI[0x191]) {
              iVar4 = iVar4 + unaff_RSI[399];
              unaff_RSI[0x388] = iVar4;
                    // WARNING: Subroutine does not return
              memmove((longlong)unaff_RSI + ((longlong)iVar4 + 0x324) * 2,
                      (longlong)unaff_RSI +
                      (((longlong)iVar4 - (longlong)unaff_RSI[399]) + 0x324) * 2,
                      (longlong)(999 - iVar4) * 2);
            }
                    // WARNING: Subroutine does not return
            memmove(unaff_RSI + (longlong)sVar2 * 4 + 6 + 4,unaff_RSI + (longlong)sVar2 * 4 + 6,
                    (longlong)(99 - sVar2) << 4);
          }
        } while (iVar4 < unaff_RSI[0x387] + iVar7);
      }
      iVar6 = unaff_RSI[0x386];
      iVar8 = 0;
      unaff_RSI[(longlong)(short)iVar6 * 4 + 5] = iVar4 - iVar7;
      unaff_RSI[0x388] = unaff_RSI[0x388] - iVar7;
      if (0 < iVar7) {
        lVar5 = (longlong)iVar10 * 2;
        do {
          iVar4 = unaff_RSI[(longlong)(short)iVar6 * 4 + 5] + iVar8;
          iVar8 = iVar8 + 1;
          *(undefined2 *)((longlong)unaff_RSI + (longlong)iVar4 * 2 + 0x648) =
               *(undefined2 *)(lVar5 + *(longlong *)(unaff_RBP + 0x10));
          lVar5 = lVar5 + 2;
        } while (iVar8 < iVar7);
      }
    }
    else {
      *(undefined4 *)(lVar5 + 0xc) = 0;
    }
    uVar9 = FUN_180114e30(uVar9,iVar10,iVar7);
  }
  if (iVar3 != 0) {
    iStack000000000000002c = auVar1._12_4_;
    FUN_180114ec0(uVar9,iVar10,(longlong)unaff_RSI + ((longlong)iStack000000000000002c + 0x324) * 2,
                  iVar3);
    unaff_RSI[0x387] = unaff_RSI[0x387] - iVar3;
  }
  *unaff_RSI = iVar10 + iVar3;
  *(short *)((longlong)unaff_RSI + 0xe16) = *(short *)((longlong)unaff_RSI + 0xe16) + -1;
  *(short *)(unaff_RSI + 0x386) = (short)unaff_RSI[0x386] + -1;
  return;
}





// 函数: void FUN_180116465(void)
void FUN_180116465(void)

{
  return;
}





