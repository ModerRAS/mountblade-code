#include "TaleWorlds.Native.Split.h"
// 02_core_engine_part091.c - 11 个函数
// 函数: void function_115640(int64_t param_1,int *param_2,uint param_3)
void function_115640(int64_t param_1,int *param_2,uint param_3)
{
  int16_t *puVar1;
  short sVar2;
  int32_t uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint64_t uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int16_t astack_special_x_18 [4];
  int8_t stack_array_58 [16];
  int iStack_48;
  int iStack_44;
  float afStack_40 [5];
  uint local_var_2c;
code_r0x000180115670:
  if ((int)param_3 < 0x30001) {
    if (param_3 == 0x30000) {
      Function_5acfb97c(param_1,param_2);
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
        Function_5acfb97c(param_1,param_2);
      }
      else {
        Function_159332d4(param_1,param_2);
        Function_5acfb97c(param_1);
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
        *(int8_t *)((int64_t)param_2 + 0xf) = 0;
      }
      if ((char)param_2[4] == '\0') {
        while ((0 < iVar5 &&
               (*(short *)(*(int64_t *)(param_1 + 0x10) + -2 + (int64_t)iVar5 * 2) != 10))) {
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
        *(int8_t *)((int64_t)param_2 + 0xf) = 0;
      }
      if ((char)param_2[4] == '\0') {
        while ((iVar5 < iVar11 &&
               (*(short *)(*(int64_t *)(param_1 + 0x10) + (int64_t)iVar5 * 2) != 10))) {
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
      *(int8_t *)((int64_t)param_2 + 0xf) = 0;
      return;
    case 0x10007:
      iVar7 = *(int *)(param_1 + 0x3c);
      param_2[1] = 0;
      param_2[2] = 0;
      *(int8_t *)((int64_t)param_2 + 0xf) = 0;
      *param_2 = iVar7;
      return;
    case 0x10008:
      goto code_r0x000180115ca5;
    case 0x10009:
      goto code_r0x000180115cd0;
    case 0x1000a:
      function_116200(param_1,param_2);
      goto LAB_180115fd1;
    case 0x1000b:
      if ((short)param_2[0x386] != 99) {
        piVar9 = param_2 + (int64_t)*(short *)((int64_t)param_2 + 0xe16) * 4 + 6;
        stack_array_58 = *(int8_t (*) [16])(param_2 + (int64_t)(short)param_2[0x386] * 4 + 6);
        iVar14 = stack_array_58._0_4_;
        uVar10 = stack_array_58._0_8_;
        piVar9[3] = -1;
        *piVar9 = iVar14;
        iVar7 = stack_array_58._8_4_;
        piVar9[2] = stack_array_58._4_4_;
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
                *(int16_t *)((int64_t)param_2 + (int64_t)iVar6 * 2 + 0x648) =
                     *(int16_t *)(*(int64_t *)(param_1 + 0x10) + (int64_t)iVar5 * 2);
              } while (iVar11 < piVar9[1]);
            }
          }
          function_114e30(param_1,iVar14,iVar7);
        }
        uVar3 = stack_array_58._4_4_;
        if (stack_array_58._4_4_ != 0) {
          function_114ec0(param_1,uVar10 & 0xffffffff,
                        (int64_t)param_2 + ((int64_t)(int)stack_array_58._12_4_ + 0x318) * 2 + 0x18,
                        stack_array_58._4_4_);
          param_2[0x388] = param_2[0x388] + uVar3;
        }
        *param_2 = iVar14 + uVar3;
        *(short *)((int64_t)param_2 + 0xe16) = *(short *)((int64_t)param_2 + 0xe16) + 1;
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
        iVar7 = function_114cb0(param_1,*param_2);
        *param_2 = iVar7;
        Function_5acfb97c(param_1,param_2);
        return;
      }
      break;
    case 0x1000d:
      if (param_2[1] != param_2[2]) {
        Function_159332d4(param_1,param_2);
        return;
      }
      iVar7 = function_114d70(param_1,*param_2);
      *param_2 = iVar7;
      Function_5acfb97c(param_1,param_2);
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
    Function_5acfb97c(param_1,param_2);
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
          *(int8_t *)((int64_t)param_2 + 0xf) = 0;
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
      Function_5acfb97c(param_1,param_2);
      function_115200(stack_array_58,param_1,*param_2,(char)param_2[4]);
      if (iStack_44 == stack_array_58._12_4_) {
        return;
      }
      if (*(char *)((int64_t)param_2 + 0xf) == '\0') {
        fVar18 = (float)stack_array_58._0_4_;
      }
      else {
        fVar18 = (float)param_2[5];
      }
      *param_2 = iStack_44;
      function_114bc0(afStack_40,param_1,iStack_44);
      uVar10 = (uint64_t)local_var_2c;
      iVar7 = 0;
      if ((int)local_var_2c < 1) goto code_r0x000180115b16;
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
        Function_159332d4(param_1,param_2);
      }
    }
    else if (param_2[1] == iVar7) {
      param_2[2] = *param_2;
      param_2[1] = *param_2;
    }
    else {
      *param_2 = iVar7;
    }
    Function_5acfb97c(param_1,param_2);
    function_115200(stack_array_58,param_1,*param_2,(char)param_2[4]);
    if (iStack_48 == 0) {
      return;
    }
    if (*(char *)((int64_t)param_2 + 0xf) == '\0') {
      fVar18 = (float)stack_array_58._0_4_;
    }
    else {
      fVar18 = (float)param_2[5];
    }
    iVar14 = stack_array_58._12_4_ + iStack_48;
    *param_2 = iVar14;
    function_114bc0(afStack_40,param_1,iVar14);
    uVar10 = (uint64_t)local_var_2c;
    iVar7 = 0;
    if (0 < (int)local_var_2c) {
      fVar17 = -1.0;
      fVar16 = afStack_40[0];
      do {
        fVar15 = (float)Function_e222a123(param_1,iVar14,iVar7);
        if ((fVar15 == fVar17) || (fVar16 = fVar16 + fVar15, fVar18 < fVar16)) break;
        *param_2 = *param_2 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar10);
    }
    goto code_r0x000180115b16;
  case 0x30004:
    Function_5acfb97c(param_1,param_2);
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
             (*(short *)(*(int64_t *)(param_1 + 0x10) + -2 + (int64_t)iVar7 * 2) != 10))) {
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
             (*(short *)(*(int64_t *)(param_1 + 0x10) + (int64_t)iVar7 * 2) != 10))) {
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
    *(int8_t *)((int64_t)param_2 + 0xf) = 0;
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
        function_115400(param_1,param_2,*param_2,1);
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
        function_115400(param_1,param_2,iVar14 + -1,1);
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
    astack_special_x_18[0] = (int16_t)param_3;
    if ((param_3 == 10) && ((char)param_2[4] != '\0')) {
      return;
    }
    if (((char)param_2[3] != '\0') && (param_2[1] == param_2[2])) {
      iVar7 = *param_2;
      if (iVar7 < *(int *)(param_1 + 0x3c)) {
        piVar9 = param_2 + 6;
        *(int16_t *)(param_2 + 0x386) = 99;
        param_2[0x388] = 999;
        if (*(short *)((int64_t)param_2 + 0xe16) == 99) {
          function_116060(piVar9);
        }
        if (999 < param_2[0x387] + 1) {
          do {
            function_116060(piVar9);
          } while (0x3e6 < param_2[0x387]);
        }
        sVar2 = *(short *)((int64_t)param_2 + 0xe16);
        *(short *)((int64_t)param_2 + 0xe16) = sVar2 + 1;
        piVar8 = piVar9 + (int64_t)sVar2 * 4;
        if (piVar8 != (int *)0x0) {
          *piVar8 = iVar7;
          piVar8[1] = 1;
          piVar8[2] = 1;
          piVar8[3] = param_2[0x387];
          param_2[0x387] = param_2[0x387] + 1;
          puVar1 = (int16_t *)((int64_t)piVar9 + ((int64_t)piVar8[3] + 0x318) * 2);
          if (puVar1 != (int16_t *)0x0) {
            *puVar1 = *(int16_t *)(*(int64_t *)(param_1 + 0x10) + (int64_t)iVar7 * 2);
          }
        }
        function_114e30(param_1,*param_2,1);
        cVar4 = function_114ec0(param_1,*param_2,astack_special_x_18,1);
        if (cVar4 == '\0') {
          return;
        }
LAB_180115fcf:
        *param_2 = *param_2 + 1;
LAB_180115fd1:
        *(int8_t *)((int64_t)param_2 + 0xf) = 0;
        return;
      }
    }
    function_115490(param_1,param_2);
    cVar4 = function_114ec0(param_1,*param_2,astack_special_x_18,1);
    if (cVar4 == '\0') {
      return;
    }
    function_116470(param_2,*param_2,1);
    goto LAB_180115fcf;
  case 0x3000c:
    if (param_2[1] == param_2[2]) {
      param_2[2] = *param_2;
      param_2[1] = *param_2;
    }
    iVar7 = function_114cb0(param_1);
    goto code_r0x000180115c4b;
  case 0x3000d:
    if (param_2[1] == param_2[2]) {
      param_2[2] = *param_2;
      param_2[1] = *param_2;
    }
    iVar7 = function_114d70(param_1);
code_r0x000180115c4b:
    *param_2 = iVar7;
    param_2[2] = iVar7;
    Function_5acfb97c(param_1,param_2);
    return;
  }
  function_115490(param_1,param_2);
  goto LAB_180115fd1;
code_r0x0001801156c2:
  param_3 = param_3 & 0x20000 | 0x10001;
  goto code_r0x000180115670;
  while( true ) {
    *param_2 = *param_2 + 1;
    iVar7 = iVar7 + 1;
    if ((int)uVar10 <= iVar7) break;
code_r0x000180115c00:
    fVar15 = (float)Function_e222a123(param_1,iStack_44,iVar7);
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
  *(int8_t *)((int64_t)param_2 + 0xf) = 1;
  if ((param_3 >> 0x11 & 1) != 0) {
    param_2[2] = iVar7;
  }
  return;
}
// 函数: void function_115721(uint64_t param_1,uint64_t param_2,int *param_3)
void function_115721(uint64_t param_1,uint64_t param_2,int *param_3)
{
  int8_t auVar1 [16];
  int iVar2;
  int iVar3;
  int64_t in_RAX;
  int *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int iVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  auVar1 = *(int8_t (*) [16])(unaff_RSI + in_RAX * 8);
  iVar6 = auVar1._0_4_;
  param_3[3] = -1;
  *(int8_t (*) [16])(unaff_RBP + -0x40) = auVar1;
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
          *(int16_t *)(unaff_RSI + 0x630 + (int64_t)iVar3 * 2) =
               *(int16_t *)(*(int64_t *)(unaff_RDI + 0x10) + (int64_t)iVar2 * 2);
        } while (iVar4 < param_3[1]);
      }
    }
    uVar7 = function_114e30(uVar7,iVar6,iVar5);
  }
  iVar5 = *(int *)(unaff_RBP + -0x3c);
  if (iVar5 != 0) {
    function_114ec0(uVar7,auVar1._0_8_ & 0xffffffff,
                  unaff_RSI + ((int64_t)*(int *)(unaff_RBP + -0x34) + 0x318) * 2,iVar5);
    *(int *)(unaff_RSI + 0xe08) = *(int *)(unaff_RSI + 0xe08) + iVar5;
  }
  *unaff_RBX = iVar6 + iVar5;
  *(short *)(unaff_RSI + 0xdfe) = *(short *)(unaff_RSI + 0xdfe) + 1;
  *(short *)(unaff_RSI + 0xe00) = *(short *)(unaff_RSI + 0xe00) + 1;
  *(int8_t *)((int64_t)unaff_RBX + 0xf) = 0;
  return;
}
// 函数: void function_115818(void)
void function_115818(void)
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
  *(int8_t *)((int64_t)unaff_RBX + 0xf) = 0;
  return;
}
// 函数: void function_116060(int64_t param_1)
void function_116060(int64_t param_1)
{
  short sVar1;
  if (*(short *)(param_1 + 0xdfe) < 1) {
    return;
  }
  if (-1 < *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xe04) = *(int *)(param_1 + 0xe04) - *(int *)(param_1 + 4);
// WARNING: Subroutine does not return
    memmove(param_1 + 0x630,param_1 + 0x630 + (int64_t)*(int *)(param_1 + 4) * 2,
            (int64_t)*(int *)(param_1 + 0xe04) * 2);
  }
  sVar1 = *(short *)(param_1 + 0xdfe) + -1;
  *(short *)(param_1 + 0xdfe) = sVar1;
// WARNING: Subroutine does not return
  memmove(param_1,param_1 + 0x10,(int64_t)sVar1 << 4);
}
// 函数: void function_11607d(int64_t param_1,short param_2)
void function_11607d(int64_t param_1,short param_2)
{
  int64_t unaff_RDI;
  char in_SF;
  char in_OF;
  if (in_OF == in_SF) {
    *(int *)(param_1 + 0xe04) = *(int *)(param_1 + 0xe04) - *(int *)(param_1 + 4);
// WARNING: Subroutine does not return
    memmove(param_1 + 0x630,param_1 + 0x630 + (int64_t)*(int *)(param_1 + 4) * 2,
            (int64_t)*(int *)(param_1 + 0xe04) * 2);
  }
  *(short *)(unaff_RDI + 0xdfe) = param_2 + -1;
// WARNING: Subroutine does not return
  memmove();
}
// 函数: void function_11608f(int64_t param_1)
void function_11608f(int64_t param_1)
{
  int64_t in_RAX;
  *(int *)(param_1 + 0xe04) = *(int *)(param_1 + 0xe04) - *(int *)(param_1 + 4);
// WARNING: Subroutine does not return
  memmove(param_1 + 0x630,in_RAX + (int64_t)*(int *)(param_1 + 4) * 2,
          (int64_t)*(int *)(param_1 + 0xe04) * 2);
}
// 函数: void function_1160e6(uint64_t param_1,short param_2)
void function_1160e6(uint64_t param_1,short param_2)
{
  int64_t unaff_RDI;
  *(short *)(unaff_RDI + 0xdfe) = param_2 + -1;
// WARNING: Subroutine does not return
  memmove();
}
// 函数: void function_116109(void)
void function_116109(void)
{
  return;
}
int64_t function_116110(int64_t param_1,int32_t param_2,int param_3,int32_t param_4)
{
  short sVar1;
  int iVar2;
  int32_t *puVar3;
  *(int32_t *)(param_1 + 0xe08) = 999;
  *(int16_t *)(param_1 + 0xe00) = 99;
  if (*(short *)(param_1 + 0xdfe) == 99) {
    function_116060();
  }
  if (param_3 < 1000) {
    iVar2 = *(int *)(param_1 + 0xe04);
    while (999 < iVar2 + param_3) {
      function_116060(param_1);
      iVar2 = *(int *)(param_1 + 0xe04);
    }
    sVar1 = *(short *)(param_1 + 0xdfe);
    *(short *)(param_1 + 0xdfe) = sVar1 + 1;
    puVar3 = (int32_t *)((int64_t)sVar1 * 0x10 + param_1);
    if (puVar3 != (int32_t *)0x0) {
      *puVar3 = param_2;
      puVar3[1] = param_3;
      puVar3[2] = param_4;
      if (param_3 != 0) {
        puVar3[3] = *(int32_t *)(param_1 + 0xe04);
        *(int *)(param_1 + 0xe04) = *(int *)(param_1 + 0xe04) + param_3;
        return param_1 + ((int64_t)(int)puVar3[3] + 0x318) * 2;
      }
      puVar3[3] = 0xffffffff;
    }
  }
  else {
    *(int16_t *)(param_1 + 0xdfe) = 0;
    *(int32_t *)(param_1 + 0xe04) = 0;
  }
  return 0;
}
// 函数: void function_116200(int64_t param_1,int *param_2)
void function_116200(int64_t param_1,int *param_2)
{
  int8_t auVar1 [16];
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
  int iVar9;
  int iStack_c;
  if (*(short *)((int64_t)param_2 + 0xe16) != 0) {
    sVar2 = (short)param_2[0x386];
    auVar1 = *(int8_t (*) [16])
              (param_2 + (int64_t)*(short *)((int64_t)param_2 + 0xe16) * 4 + 2);
    iVar9 = auVar1._0_4_;
    param_2[(int64_t)sVar2 * 4 + 5] = -1;
    param_2[(int64_t)sVar2 * 4 + 2] = iVar9;
    iVar6 = auVar1._8_4_;
    param_2[(int64_t)sVar2 * 4 + 3] = iVar6;
    iVar4 = auVar1._4_4_;
    param_2[(int64_t)sVar2 * 4 + 4] = iVar4;
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
                memmove((int64_t)param_2 + ((int64_t)iVar5 + 0x324) * 2,
                        (int64_t)param_2 + (((int64_t)iVar5 - (int64_t)param_2[399]) + 0x324) * 2
                        ,(int64_t)(999 - iVar5) * 2);
              }
// WARNING: Subroutine does not return
              memmove(param_2 + (int64_t)sVar2 * 4 + 6 + 4,param_2 + (int64_t)sVar2 * 4 + 6,
                      (int64_t)(99 - sVar2) << 4);
            }
          } while (iVar5 < param_2[0x387] + iVar6);
        }
        iVar3 = param_2[0x386];
        iVar7 = 0;
        param_2[(int64_t)(short)iVar3 * 4 + 5] = iVar5 - iVar6;
        param_2[0x388] = param_2[0x388] - iVar6;
        if (0 < iVar6) {
          lVar8 = (int64_t)iVar9 * 2;
          do {
            iVar5 = param_2[(int64_t)(short)iVar3 * 4 + 5] + iVar7;
            iVar7 = iVar7 + 1;
            *(int16_t *)((int64_t)param_2 + (int64_t)iVar5 * 2 + 0x648) =
                 *(int16_t *)(lVar8 + *(int64_t *)(param_1 + 0x10));
            lVar8 = lVar8 + 2;
          } while (iVar7 < iVar6);
        }
      }
      else {
        param_2[(int64_t)sVar2 * 4 + 3] = 0;
      }
      function_114e30(param_1,iVar9,iVar6);
    }
    if (iVar4 != 0) {
      iStack_c = auVar1._12_4_;
      function_114ec0(param_1,iVar9,(int64_t)param_2 + ((int64_t)iStack_c + 0x324) * 2,iVar4);
      param_2[0x387] = param_2[0x387] - iVar4;
    }
    *param_2 = iVar9 + iVar4;
    *(short *)((int64_t)param_2 + 0xe16) = *(short *)((int64_t)param_2 + 0xe16) + -1;
    *(short *)(param_2 + 0x386) = (short)param_2[0x386] + -1;
  }
  return;
}
// 函数: void function_11622f(int64_t param_1,int64_t param_2)
void function_11622f(int64_t param_1,int64_t param_2)
{
  int8_t auVar1 [16];
  short sVar2;
  int iVar3;
  int64_t in_RAX;
  int iVar4;
  int64_t lVar5;
  int iVar6;
  int64_t unaff_RBP;
  int *unaff_RSI;
  int iVar7;
  int iVar8;
  uint64_t uVar9;
  int iVar10;
  int iStack000000000000002c;
  lVar5 = param_1 * 0x10 + param_2;
  auVar1 = *(int8_t (*) [16])(param_2 + 8 + in_RAX * 8);
  iVar10 = auVar1._0_4_;
  *(int32_t *)(lVar5 + 0x14) = 0xffffffff;
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
              memmove((int64_t)unaff_RSI + ((int64_t)iVar4 + 0x324) * 2,
                      (int64_t)unaff_RSI +
                      (((int64_t)iVar4 - (int64_t)unaff_RSI[399]) + 0x324) * 2,
                      (int64_t)(999 - iVar4) * 2);
            }
// WARNING: Subroutine does not return
            memmove(unaff_RSI + (int64_t)sVar2 * 4 + 6 + 4,unaff_RSI + (int64_t)sVar2 * 4 + 6,
                    (int64_t)(99 - sVar2) << 4);
          }
        } while (iVar4 < unaff_RSI[0x387] + iVar7);
      }
      iVar6 = unaff_RSI[0x386];
      iVar8 = 0;
      unaff_RSI[(int64_t)(short)iVar6 * 4 + 5] = iVar4 - iVar7;
      unaff_RSI[0x388] = unaff_RSI[0x388] - iVar7;
      if (0 < iVar7) {
        lVar5 = (int64_t)iVar10 * 2;
        do {
          iVar4 = unaff_RSI[(int64_t)(short)iVar6 * 4 + 5] + iVar8;
          iVar8 = iVar8 + 1;
          *(int16_t *)((int64_t)unaff_RSI + (int64_t)iVar4 * 2 + 0x648) =
               *(int16_t *)(lVar5 + *(int64_t *)(unaff_RBP + 0x10));
          lVar5 = lVar5 + 2;
        } while (iVar8 < iVar7);
      }
    }
    else {
      *(int32_t *)(lVar5 + 0xc) = 0;
    }
    uVar9 = function_114e30(uVar9,iVar10,iVar7);
  }
  if (iVar3 != 0) {
    iStack000000000000002c = auVar1._12_4_;
    function_114ec0(uVar9,iVar10,(int64_t)unaff_RSI + ((int64_t)iStack000000000000002c + 0x324) * 2,
                  iVar3);
    unaff_RSI[0x387] = unaff_RSI[0x387] - iVar3;
  }
  *unaff_RSI = iVar10 + iVar3;
  *(short *)((int64_t)unaff_RSI + 0xe16) = *(short *)((int64_t)unaff_RSI + 0xe16) + -1;
  *(short *)(unaff_RSI + 0x386) = (short)unaff_RSI[0x386] + -1;
  return;
}
// 函数: void function_116465(void)
void function_116465(void)
{
  return;
}