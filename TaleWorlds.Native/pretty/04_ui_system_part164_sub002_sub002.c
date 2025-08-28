#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part164_sub002_sub002.c - 1 个函数
// 函数: void function_763e30(void)
void function_763e30(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
uint64_t function_7657c0(int64_t param_1,uint param_2)
{
  short sVar1;
  int iVar2;
  int64_t lVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  fVar7 = 0.0;
  if ((*(int64_t *)(param_1 + 0x50) == 0) || (*(int64_t *)(param_1 + 0x40) == 0)) {
    return 9;
  }
  iVar4 = 0;
  sVar1 = *(short *)(param_1 + 0x3a);
  if (param_2 == 0) {
    if (0 < (int)*(short *)(param_1 + 0x38) * (int)sVar1) {
      lVar3 = 0;
      do {
        iVar4 = iVar4 + 1;
        *(float *)(lVar3 + *(int64_t *)(param_1 + 0x50)) =
             *(float *)(lVar3 + *(int64_t *)(param_1 + 0x40)) * *(float *)(param_1 + 0x68);
        lVar3 = lVar3 + 4;
      } while (iVar4 < (int)*(short *)(param_1 + 0x38) * (int)*(short *)(param_1 + 0x3a));
    }
    *(int32_t *)(param_1 + 0x80) = *(int32_t *)(param_1 + 0x68);
    *(int32_t *)(param_1 + 0x6c) = 0;
    return 0;
  }
  if (0 < sVar1) {
    do {
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x38)) {
        do {
          if ((iVar4 < *(short *)(param_1 + 0x3a)) && (iVar2 < *(short *)(param_1 + 0x38))) {
            pfVar6 = (float *)(*(int64_t *)(param_1 + 0x40) +
                              (int64_t)(*(short *)(param_1 + 0x38) * iVar4 + iVar2) * 4);
          }
          else {
            pfVar6 = (float *)0x180c0c6e0;
          }
          if ((iVar4 < *(short *)(param_1 + 0x4a)) && (iVar2 < *(short *)(param_1 + 0x48))) {
            pfVar5 = (float *)(*(int64_t *)(param_1 + 0x50) +
                              (int64_t)(*(short *)(param_1 + 0x48) * iVar4 + iVar2) * 4);
          }
          else {
            pfVar5 = (float *)0x180c0c6e0;
          }
          iVar2 = iVar2 + 1;
          fVar7 = fVar7 + ABS((*(float *)(param_1 + 0x68) * *pfVar6 - *pfVar5) *
                              (1.0 / (float)param_2));
        } while (iVar2 < *(short *)(param_1 + 0x38));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < sVar1);
  }
  if (param_2 == 0x40) {
    if (1e-06 <= fVar7) {
LAB_180765963:
      *(uint *)(param_1 + 0x6c) = param_2;
      return 0;
    }
  }
  else if (0.0 < fVar7) goto LAB_180765963;
  if ((*(int64_t *)(param_1 + 0x40) != 0) &&
     (iVar4 = 0, 0 < (int)*(short *)(param_1 + 0x3a) * (int)*(short *)(param_1 + 0x38))) {
    lVar3 = 0;
    do {
      iVar4 = iVar4 + 1;
      *(float *)(lVar3 + *(int64_t *)(param_1 + 0x50)) =
           *(float *)(lVar3 + *(int64_t *)(param_1 + 0x40)) * *(float *)(param_1 + 0x68);
      lVar3 = lVar3 + 4;
    } while (iVar4 < (int)*(short *)(param_1 + 0x3a) * (int)*(short *)(param_1 + 0x38));
  }
  *(int32_t *)(param_1 + 0x80) = *(int32_t *)(param_1 + 0x68);
  *(int32_t *)(param_1 + 0x6c) = 0;
  return 0;
}
uint64_t function_7657eb(int64_t param_1,int param_2,int64_t param_3,int param_4)
{
  short sVar1;
  int iVar2;
  int64_t lVar3;
  float *pfVar4;
  float *pfVar5;
  int64_t unaff_R14;
  float in_XMM1_Da;
  float in_XMM5_Da;
  sVar1 = *(short *)(param_1 + 0x3a);
  if (param_2 == 0) {
    if (0 < (int)*(short *)(param_1 + 0x38) * (int)sVar1) {
      lVar3 = 0;
      do {
        param_4 = param_4 + 1;
        *(float *)(lVar3 + *(int64_t *)(param_3 + 0x50)) =
             *(float *)(lVar3 + *(int64_t *)(param_3 + 0x40)) * *(float *)(param_3 + 0x68);
        lVar3 = lVar3 + 4;
      } while (param_4 < (int)*(short *)(param_3 + 0x38) * (int)*(short *)(param_3 + 0x3a));
    }
    *(int32_t *)(param_3 + 0x80) = *(int32_t *)(param_3 + 0x68);
    *(int32_t *)(param_3 + 0x6c) = 0;
    return 0;
  }
  if (0 < sVar1) {
    do {
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x38)) {
        do {
          if ((param_4 < *(short *)(param_3 + 0x3a)) && (iVar2 < *(short *)(param_3 + 0x38))) {
            pfVar5 = (float *)(*(int64_t *)(param_3 + 0x40) +
                              (int64_t)(*(short *)(param_3 + 0x38) * param_4 + iVar2) * 4);
          }
          else {
            pfVar5 = (float *)0x180c0c6e0;
          }
          if ((param_4 < *(short *)(param_3 + 0x4a)) && (iVar2 < *(short *)(param_3 + 0x48))) {
            pfVar4 = (float *)(*(int64_t *)(param_3 + 0x50) +
                              (int64_t)(*(short *)(param_3 + 0x48) * param_4 + iVar2) * 4);
          }
          else {
            pfVar4 = (float *)0x180c0c6e0;
          }
          iVar2 = iVar2 + 1;
          in_XMM1_Da = in_XMM1_Da +
                       ABS((*(float *)(param_3 + 0x68) * *pfVar5 - *pfVar4) *
                           (1.0 / (float)unaff_R14));
        } while (iVar2 < *(short *)(param_1 + 0x38));
      }
      param_4 = param_4 + 1;
    } while (param_4 < sVar1);
  }
  if ((int)unaff_R14 == 0x40) {
    if (1e-06 <= in_XMM1_Da) {
LAB_180765963:
      *(int *)(param_3 + 0x6c) = (int)unaff_R14;
      return 0;
    }
  }
  else if (in_XMM5_Da < in_XMM1_Da) goto LAB_180765963;
  if ((*(int64_t *)(param_3 + 0x40) != 0) &&
     (iVar2 = 0, 0 < (int)*(short *)(param_3 + 0x3a) * (int)*(short *)(param_3 + 0x38))) {
    lVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      *(float *)(lVar3 + *(int64_t *)(param_3 + 0x50)) =
           *(float *)(lVar3 + *(int64_t *)(param_3 + 0x40)) * *(float *)(param_3 + 0x68);
      lVar3 = lVar3 + 4;
    } while (iVar2 < (int)*(short *)(param_3 + 0x3a) * (int)*(short *)(param_3 + 0x38));
  }
  *(int32_t *)(param_3 + 0x80) = *(int32_t *)(param_3 + 0x68);
  *(int32_t *)(param_3 + 0x6c) = 0;
  return 0;
}
uint64_t function_765859(int64_t param_1,float param_2,int64_t param_3,int param_4)
{
  int iVar1;
  int64_t lVar2;
  int unaff_EBP;
  float *pfVar3;
  float *pfVar4;
  int64_t unaff_R14;
  float in_XMM5_Da;
  if (0 < unaff_EBP) {
    do {
      iVar1 = 0;
      if (0 < *(short *)(param_1 + 0x38)) {
        do {
          if ((param_4 < *(short *)(param_3 + 0x3a)) && (iVar1 < *(short *)(param_3 + 0x38))) {
            pfVar4 = (float *)(*(int64_t *)(param_3 + 0x40) +
                              (int64_t)(*(short *)(param_3 + 0x38) * param_4 + iVar1) * 4);
          }
          else {
            pfVar4 = (float *)0x180c0c6e0;
          }
          if ((param_4 < *(short *)(param_3 + 0x4a)) && (iVar1 < *(short *)(param_3 + 0x48))) {
            pfVar3 = (float *)(*(int64_t *)(param_3 + 0x50) +
                              (int64_t)(*(short *)(param_3 + 0x48) * param_4 + iVar1) * 4);
          }
          else {
            pfVar3 = (float *)0x180c0c6e0;
          }
          iVar1 = iVar1 + 1;
          param_2 = param_2 + ABS((*(float *)(param_3 + 0x68) * *pfVar4 - *pfVar3) *
                                  (1.0 / (float)unaff_R14));
        } while (iVar1 < *(short *)(param_1 + 0x38));
      }
      param_4 = param_4 + 1;
    } while (param_4 < unaff_EBP);
  }
  if ((int)unaff_R14 == 0x40) {
    if (1e-06 <= param_2) {
LAB_180765963:
      *(int *)(param_3 + 0x6c) = (int)unaff_R14;
      return 0;
    }
  }
  else if (in_XMM5_Da < param_2) goto LAB_180765963;
  if ((*(int64_t *)(param_3 + 0x40) != 0) &&
     (iVar1 = 0, 0 < (int)*(short *)(param_3 + 0x3a) * (int)*(short *)(param_3 + 0x38))) {
    lVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      *(float *)(lVar2 + *(int64_t *)(param_3 + 0x50)) =
           *(float *)(lVar2 + *(int64_t *)(param_3 + 0x40)) * *(float *)(param_3 + 0x68);
      lVar2 = lVar2 + 4;
    } while (iVar1 < (int)*(short *)(param_3 + 0x3a) * (int)*(short *)(param_3 + 0x38));
  }
  *(int32_t *)(param_3 + 0x80) = *(int32_t *)(param_3 + 0x68);
  *(int32_t *)(param_3 + 0x6c) = 0;
  return 0;
}
uint64_t function_76587d(int64_t param_1,float param_2,int64_t param_3,float param_4)
{
  int iVar1;
  int64_t lVar2;
  int unaff_EBP;
  int in_R9D;
  float *pfVar3;
  float *pfVar4;
  int unaff_R14D;
  uint in_XMM4_Da;
  float in_XMM5_Da;
  do {
    iVar1 = 0;
    if (0 < *(short *)(param_1 + 0x38)) {
      do {
        if (in_R9D < *(short *)(param_3 + 0x3a)) {
          if (*(short *)(param_3 + 0x38) <= iVar1) goto LAB_1807658d7;
          pfVar4 = (float *)(*(int64_t *)(param_3 + 0x40) +
                            (int64_t)(*(short *)(param_3 + 0x38) * in_R9D + iVar1) * 4);
        }
        else {
LAB_1807658d7:
          pfVar4 = (float *)0x180c0c6e0;
        }
        if (in_R9D < *(short *)(param_3 + 0x4a)) {
          if (*(short *)(param_3 + 0x48) <= iVar1) goto LAB_1807658fb;
          pfVar3 = (float *)(*(int64_t *)(param_3 + 0x50) +
                            (int64_t)(*(short *)(param_3 + 0x48) * in_R9D + iVar1) * 4);
        }
        else {
LAB_1807658fb:
          pfVar3 = (float *)0x180c0c6e0;
        }
        iVar1 = iVar1 + 1;
        param_2 = param_2 + (float)((uint)((*(float *)(param_3 + 0x68) * *pfVar4 - *pfVar3) *
                                          param_4) & in_XMM4_Da);
      } while (iVar1 < *(short *)(param_1 + 0x38));
    }
    in_R9D = in_R9D + 1;
  } while (in_R9D < unaff_EBP);
  if (unaff_R14D == 0x40) {
    if (1e-06 <= param_2) {
LAB_180765963:
      *(int *)(param_3 + 0x6c) = unaff_R14D;
      return 0;
    }
  }
  else if (in_XMM5_Da < param_2) goto LAB_180765963;
  if ((*(int64_t *)(param_3 + 0x40) != 0) &&
     (iVar1 = 0, 0 < (int)*(short *)(param_3 + 0x3a) * (int)*(short *)(param_3 + 0x38))) {
    lVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      *(float *)(lVar2 + *(int64_t *)(param_3 + 0x50)) =
           *(float *)(lVar2 + *(int64_t *)(param_3 + 0x40)) * *(float *)(param_3 + 0x68);
      lVar2 = lVar2 + 4;
    } while (iVar1 < (int)*(short *)(param_3 + 0x3a) * (int)*(short *)(param_3 + 0x38));
  }
  *(int32_t *)(param_3 + 0x80) = *(int32_t *)(param_3 + 0x68);
  *(int32_t *)(param_3 + 0x6c) = 0;
  return 0;
}
uint64_t function_76593c(uint64_t param_1,float param_2,int64_t param_3)
{
  int64_t lVar1;
  int iVar2;
  int unaff_R14D;
  float in_XMM5_Da;
  if (unaff_R14D == 0x40) {
    if (1e-06 <= param_2) {
LAB_180765963:
      *(int *)(param_3 + 0x6c) = unaff_R14D;
      return 0;
    }
  }
  else if (in_XMM5_Da < param_2) goto LAB_180765963;
  if ((*(int64_t *)(param_3 + 0x40) != 0) &&
     (iVar2 = 0, 0 < (int)*(short *)(param_3 + 0x3a) * (int)*(short *)(param_3 + 0x38))) {
    lVar1 = 0;
    do {
      iVar2 = iVar2 + 1;
      *(float *)(lVar1 + *(int64_t *)(param_3 + 0x50)) =
           *(float *)(lVar1 + *(int64_t *)(param_3 + 0x40)) * *(float *)(param_3 + 0x68);
      lVar1 = lVar1 + 4;
    } while (iVar2 < (int)*(short *)(param_3 + 0x3a) * (int)*(short *)(param_3 + 0x38));
  }
  *(int32_t *)(param_3 + 0x80) = *(int32_t *)(param_3 + 0x68);
  *(int32_t *)(param_3 + 0x6c) = 0;
  return 0;
}
uint64_t function_76595e(uint64_t param_1,float param_2,int64_t param_3)
{
  int64_t lVar1;
  int iVar2;
  int32_t unaff_R14D;
  float in_XMM5_Da;
  if (in_XMM5_Da < param_2) {
    *(int32_t *)(param_3 + 0x6c) = unaff_R14D;
    return 0;
  }
  if ((*(int64_t *)(param_3 + 0x40) != 0) &&
     (iVar2 = 0, 0 < (int)*(short *)(param_3 + 0x3a) * (int)*(short *)(param_3 + 0x38))) {
    lVar1 = 0;
    do {
      iVar2 = iVar2 + 1;
      *(float *)(lVar1 + *(int64_t *)(param_3 + 0x50)) =
           *(float *)(lVar1 + *(int64_t *)(param_3 + 0x40)) * *(float *)(param_3 + 0x68);
      lVar1 = lVar1 + 4;
    } while (iVar2 < (int)*(short *)(param_3 + 0x3a) * (int)*(short *)(param_3 + 0x38));
  }
  *(int32_t *)(param_3 + 0x80) = *(int32_t *)(param_3 + 0x68);
  *(int32_t *)(param_3 + 0x6c) = 0;
  return 0;
}
uint64_t function_765975(void)
{
  return 9;
}
uint64_t function_765990(uint64_t *param_1,char param_2,char param_3)
{
  if (param_2 != '\0') {
    *(int32_t *)(param_1 + 0xd) = 0x3f800000;
    *(int32_t *)((int64_t)param_1 + 0x84) = 0;
    function_76deb0(param_1 + 7,*param_1);
    function_76deb0(param_1 + 9,*param_1);
    if (param_3 != '\0') {
      param_1[0x12] = 0x3f800000;
      param_1[0x11] = 0;
      function_76deb0(param_1 + 0x13,*param_1);
    }
  }
  *(int32_t *)(param_1 + 0x10) = *(int32_t *)(param_1 + 0xd);
  param_1[0xf] = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0x6c) = 0;
  *(int32_t *)((int64_t)param_1 + 0x84) = 0;
  *(int32_t *)((int64_t)param_1 + 0x74) = 0x3f800000;
  SystemFunction_000180765bd0(param_1);
  return 0;
}
uint64_t
function_765a60(int64_t *param_1,int64_t param_2,int64_t param_3,int16_t param_4,
             int16_t param_5)
{
  int64_t lVar1;
  int64_t lVar2;
  if (param_1[8] != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*param_1 + 0x10bd0,param_1[8],&system_buffer_ptr,0,1);
  }
  *(int16_t *)((int64_t)param_1 + 0x3a) = param_5;
  *(int16_t *)(param_1 + 7) = param_4;
  param_1[8] = param_2;
  if (param_1[10] != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*param_1 + 0x10bd0,param_1[10],&system_buffer_ptr,0,1);
  }
  *(int16_t *)(param_1 + 9) = param_4;
  *(int16_t *)((int64_t)param_1 + 0x4a) = param_5;
  param_1[10] = param_3;
  lVar2 = (int64_t)((int)*(short *)((int64_t)param_1 + 0x3a) * (int)(short)param_1[7]);
  lVar1 = 0;
  if (3 < lVar2) {
    do {
      *(float *)(param_1[10] + lVar1 * 4) =
           *(float *)(param_1[8] + lVar1 * 4) * *(float *)(param_1 + 0x10);
      *(float *)(param_1[10] + 4 + lVar1 * 4) =
           *(float *)(param_1[8] + 4 + lVar1 * 4) * *(float *)(param_1 + 0x10);
      *(float *)(param_1[10] + 8 + lVar1 * 4) =
           *(float *)(param_1[8] + 8 + lVar1 * 4) * *(float *)(param_1 + 0x10);
      *(float *)(param_1[10] + 0xc + lVar1 * 4) =
           *(float *)(param_1[8] + 0xc + lVar1 * 4) * *(float *)(param_1 + 0x10);
      lVar1 = lVar1 + 4;
    } while (lVar1 < lVar2 + -3);
  }
  for (; lVar1 < lVar2; lVar1 = lVar1 + 1) {
    *(float *)(param_1[10] + lVar1 * 4) =
         *(float *)(param_1[8] + lVar1 * 4) * *(float *)(param_1 + 0x10);
  }
  return 0;
}
uint64_t function_765c40(uint64_t *param_1,float param_2,int param_3,char param_4,char param_5)
{
  uint64_t uVar1;
  int8_t *pstack_special_x_8;
  if (((param_2 == *(float *)(param_1 + 0x12)) && (*(int *)((int64_t)param_1 + 0x94) == param_3))
     && (param_5 == '\0')) {
    return 0;
  }
  if (param_4 == '\0') {
    if (param_5 == '\0') {
      if (param_2 == *(float *)(param_1 + 0xd)) goto LAB_180765d1c;
    }
    else {
      *(int32_t *)(param_1 + 0x10) = 0;
    }
    *(float *)(param_1 + 0xd) = param_2;
    if (param_2 == *(float *)(param_1 + 0x10)) {
      *(int32_t *)((int64_t)param_1 + 0x84) = 0;
    }
    else {
      *(int *)((int64_t)param_1 + 0x84) = param_3;
      if (param_3 == 0) {
        SystemFunction_000180765bd0();
      }
    }
  }
  else {
    uVar1 = function_743700(*param_1,&pstack_special_x_8,0x20,1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *pstack_special_x_8 = 0xd;
    *(uint64_t **)(pstack_special_x_8 + 8) = param_1;
    *(float *)(pstack_special_x_8 + 0x10) = param_2;
    *(int *)(pstack_special_x_8 + 0x14) = param_3;
    pstack_special_x_8[0x18] = param_5;
    uVar1 = SystemFunction_000180743b40(*param_1,pstack_special_x_8,1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
LAB_180765d1c:
  *(float *)(param_1 + 0x12) = param_2;
  *(int *)((int64_t)param_1 + 0x94) = param_3;
  return 0;
}
uint64_t function_765d50(int64_t param_1,float param_2,int param_3,char param_4)
{
  if (param_4 == '\0') {
    if (param_2 == *(float *)(param_1 + 0x68)) {
      return 0;
    }
  }
  else {
    *(int32_t *)(param_1 + 0x80) = 0;
  }
  *(float *)(param_1 + 0x68) = param_2;
  if (param_2 != *(float *)(param_1 + 0x80)) {
    *(int *)(param_1 + 0x84) = param_3;
    if (param_3 == 0) {
      SystemFunction_000180765bd0();
    }
    return 0;
  }
  *(int32_t *)(param_1 + 0x84) = 0;
  return 0;
}
// WARNING: Type propagation algorithm not settling
uint64_t
function_765da0(int64_t *param_1,int8_t *param_2,int param_3,int param_4,int32_t param_5,
             int param_6,char param_7)
{
  int64_t *plVar1;
  bool bVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  short sVar7;
  short sVar8;
  uint64_t uVar9;
  int iVar10;
  int8_t *pstack_special_x_10;
  int8_t *plocal_var_58;
  int64_t lStack_50;
  uint64_t local_var_48;
  int64_t lStack_40;
  iVar10 = param_3;
  if (param_3 < param_4) {
    iVar10 = param_4;
  }
  pstack_special_x_10 = param_2;
  if (param_2 == (int8_t *)0x0) {
    uVar9 = 0;
    uVar3 = uVar9;
    if (param_7 == '\0') {
      lVar5 = param_1[0xd];
      if (param_1[8] != 0) {
// WARNING: Subroutine does not return
        SystemDataValidator(*param_1 + 0x10bd0,param_1[8],&system_buffer_ptr,0,1);
      }
      *(short *)(param_1 + 7) = (short)param_1[7];
      *(int16_t *)((int64_t)param_1 + 0x3a) = *(int16_t *)((int64_t)param_1 + 0x3a);
      param_1[8] = 0;
      if (param_1[10] != 0) {
// WARNING: Subroutine does not return
        SystemDataValidator(*param_1 + 0x10bd0,param_1[10],&system_buffer_ptr,0,1);
      }
      *(short *)(param_1 + 9) = (short)param_1[9];
      *(int16_t *)((int64_t)param_1 + 0x4a) = *(int16_t *)((int64_t)param_1 + 0x4a);
      param_1[10] = 0;
      *(int *)(param_1 + 0xd) = (int)lVar5;
      *(int *)(param_1 + 0x10) = (int)lVar5;
      *(int32_t *)((int64_t)param_1 + 0x6c) = 0;
      *(int32_t *)((int64_t)param_1 + 0x84) = 0;
    }
    else {
      lVar5 = param_1[0x12];
      if ((param_1[0x14] != 0) || (*(int *)((int64_t)param_1 + 0x94) != 0)) {
        *(int *)(param_1 + 0x12) = (int)lVar5;
        *(int32_t *)((int64_t)param_1 + 0x94) = 0;
        param_1[0x11] = 0;
        function_76deb0(param_1 + 0x13,*param_1);
        *(short *)(param_1 + 0x13) = (short)param_1[0x13];
        *(int16_t *)((int64_t)param_1 + 0x9a) = *(int16_t *)((int64_t)param_1 + 0x9a);
        param_1[0x14] = 0;
        uVar3 = function_743700(*param_1,&pstack_special_x_10,0x18,1);
        if ((int)uVar3 == 0) {
          *pstack_special_x_10 = 0xb;
          *(int64_t **)(pstack_special_x_10 + 8) = param_1;
          *(int *)(pstack_special_x_10 + 0x10) = (int)lVar5;
          uVar4 = SystemFunction_000180743b40(*param_1,pstack_special_x_10,1);
          uVar3 = uVar9;
          if ((int)uVar4 != 0) {
            return uVar4;
          }
        }
      }
    }
    return uVar3;
  }
  sVar8 = (short)param_3;
  sVar7 = (short)iVar10;
  if (param_7 == '\0') {
    lVar5 = param_1[8];
    if ((lVar5 != 0) &&
       (((short)param_1[7] < param_4 || (*(short *)((int64_t)param_1 + 0x3a) < param_3)))) {
// WARNING: Subroutine does not return
      SystemDataValidator(*param_1 + 0x10bd0,lVar5,&system_buffer_ptr,0,1);
    }
    if (lVar5 == 0) {
      iVar10 = iVar10 * param_3;
      lVar5 = SystemResourceManager(*param_1 + 0x10bd0,iVar10 * 4,&system_buffer_ptr,0,0,0,1);
      if (lVar5 == 0) {
        return 0x26;
      }
      lVar6 = SystemResourceManager(*param_1 + 0x10bd0,iVar10 * 4,&system_buffer_ptr,0,0,0,1);
      if (lVar6 == 0) {
        return 0x26;
      }
      *(short *)(param_1 + 7) = sVar7;
      *(short *)((int64_t)param_1 + 0x3a) = sVar8;
      param_1[8] = lVar5;
      *(short *)(param_1 + 9) = sVar7;
      *(short *)((int64_t)param_1 + 0x4a) = sVar8;
      param_1[10] = lVar6;
      if (param_6 != 0) {
// WARNING: Subroutine does not return
        memset(lVar6,0,(int64_t)iVar10 << 2);
      }
    }
    uVar3 = function_76def0(param_1 + 7,pstack_special_x_10,param_3,param_4,param_5);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = function_7657c0(param_1,param_6);
    iVar10 = (int)uVar3;
  }
  else {
    plVar1 = param_1 + 0x13;
    if ((((short)*plVar1 < param_4) || (*(short *)((int64_t)param_1 + 0x9a) < param_3)) ||
       (param_1[0x14] == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    lVar5 = 0;
    iVar10 = iVar10 * param_3 * 4;
    lStack_50 = SystemResourceManager(*param_1 + 0x10bd0,iVar10,&system_buffer_ptr,0,0,0,1);
    if (lStack_50 == 0) {
      return 0x26;
    }
    local_var_48._0_2_ = sVar7;
    local_var_48._2_2_ = sVar8;
    lStack_40 = lStack_50;
    uVar3 = function_76def0(&local_var_48,pstack_special_x_10,param_3,param_4,param_5);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (bVar2) {
      if (param_1[0x14] != 0) {
// WARNING: Subroutine does not return
        SystemDataValidator(*param_1 + 0x10bd0,param_1[0x14],&system_buffer_ptr,0,1);
      }
      lVar5 = SystemResourceManager(*param_1 + 0x10bd0,iVar10,&system_buffer_ptr,0,0,0,1);
      if (lVar5 == 0) {
        return 0x26;
      }
      *(short *)plVar1 = sVar7;
      *(short *)((int64_t)param_1 + 0x9a) = sVar8;
      param_1[0x14] = lVar5;
      lVar5 = SystemResourceManager(*param_1 + 0x10bd0,iVar10,&system_buffer_ptr,0,0,0,1);
      if (lVar5 == 0) {
        return 0x26;
      }
    }
    else if ((&local_var_48 == plVar1) ||
            ((((short)local_var_48 == (short)*plVar1 &&
              (local_var_48._2_2_ == *(short *)((int64_t)param_1 + 0x9a))) &&
             (iVar10 = memcmp(lStack_40,param_1[0x14],
                              (int64_t)((int)local_var_48._2_2_ * (int)(short)local_var_48 * 4)),
             iVar10 == 0)))) {
// WARNING: Subroutine does not return
      SystemDataValidator(*param_1 + 0x10bd0,lStack_50,&system_buffer_ptr,0,1);
    }
    uVar3 = function_76def0(plVar1,pstack_special_x_10,param_3,param_4,param_5);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = function_743700(*param_1,&plocal_var_58,0x28,1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    *plocal_var_58 = 10;
    *(int64_t *)(plocal_var_58 + 8) = lStack_50;
    *(int64_t *)(plocal_var_58 + 0x10) = lVar5;
    *(int64_t **)(plocal_var_58 + 0x18) = param_1;
    *(short *)(plocal_var_58 + 0x22) = sVar8;
    *(short *)(plocal_var_58 + 0x20) = sVar7;
    *(int *)(plocal_var_58 + 0x24) = param_6;
    uVar3 = SystemFunction_000180743b40(*param_1,plocal_var_58,1);
    iVar10 = (int)uVar3;
  }
  if (iVar10 == 0) {
    uVar3 = 0;
  }
  return uVar3;
}
uint64_t function_765dcd(int64_t *param_1)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *unaff_RBX;
  int iVar3;
  uint64_t unaff_RDI;
  int8_t *local_buffer_a8;
  char local_buffer_d0;
  iVar3 = (int)unaff_RDI;
  if (local_buffer_d0 == (char)unaff_RDI) {
    lVar1 = param_1[0xd];
    if (param_1[8] != 0) {
// WARNING: Subroutine does not return
      SystemDataValidator(*param_1 + 0x10bd0,param_1[8],&system_buffer_ptr,0,1);
    }
    *(short *)(unaff_RBX + 7) = (short)unaff_RBX[7];
    *(int16_t *)((int64_t)unaff_RBX + 0x3a) = *(int16_t *)((int64_t)unaff_RBX + 0x3a);
    unaff_RBX[8] = unaff_RDI;
    if (unaff_RBX[10] != 0) {
// WARNING: Subroutine does not return
      SystemDataValidator(*unaff_RBX + 0x10bd0,unaff_RBX[10],&system_buffer_ptr,0,1);
    }
    *(short *)(unaff_RBX + 9) = (short)unaff_RBX[9];
    *(int16_t *)((int64_t)unaff_RBX + 0x4a) = *(int16_t *)((int64_t)unaff_RBX + 0x4a);
    unaff_RBX[10] = unaff_RDI;
    *(int *)(unaff_RBX + 0xd) = (int)lVar1;
    *(int *)(unaff_RBX + 0x10) = (int)lVar1;
    *(int *)((int64_t)unaff_RBX + 0x6c) = iVar3;
    *(int *)((int64_t)unaff_RBX + 0x84) = iVar3;
  }
  else {
    lVar1 = param_1[0x12];
    if ((param_1[0x14] != unaff_RDI) || (*(int *)((int64_t)param_1 + 0x94) != iVar3)) {
      *(int *)(param_1 + 0x12) = (int)lVar1;
      *(int *)((int64_t)param_1 + 0x94) = iVar3;
      param_1[0x11] = unaff_RDI;
      function_76deb0(param_1 + 0x13,*param_1);
      *(short *)(unaff_RBX + 0x13) = (short)unaff_RBX[0x13];
      *(int16_t *)((int64_t)unaff_RBX + 0x9a) = *(int16_t *)((int64_t)unaff_RBX + 0x9a);
      unaff_RBX[0x14] = unaff_RDI;
      uVar2 = function_743700(*unaff_RBX,&local_buffer_000000a8,0x18,1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      *local_buffer_a8 = 0xb;
      *(int64_t **)(local_buffer_a8 + 8) = unaff_RBX;
      *(int *)(local_buffer_a8 + 0x10) = (int)lVar1;
      uVar2 = SystemFunction_000180743b40(*unaff_RBX,local_buffer_a8,1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
  }
  return unaff_RDI & 0xffffffff;
}
uint64_t function_765eb4(int64_t *param_1)
{
  int64_t lVar1;
  int64_t *unaff_RBX;
  uint64_t unaff_RDI;
  lVar1 = param_1[0xd];
  if (param_1[8] != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*param_1 + 0x10bd0,param_1[8],&system_buffer_ptr,0,1);
  }
  *(short *)(unaff_RBX + 7) = (short)unaff_RBX[7];
  *(int16_t *)((int64_t)unaff_RBX + 0x3a) = *(int16_t *)((int64_t)unaff_RBX + 0x3a);
  unaff_RBX[8] = unaff_RDI;
  if (unaff_RBX[10] != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*unaff_RBX + 0x10bd0,unaff_RBX[10],&system_buffer_ptr,0,1);
  }
  *(short *)(unaff_RBX + 9) = (short)unaff_RBX[9];
  *(int16_t *)((int64_t)unaff_RBX + 0x4a) = *(int16_t *)((int64_t)unaff_RBX + 0x4a);
  unaff_RBX[10] = unaff_RDI;
  *(int *)(unaff_RBX + 0xd) = (int)lVar1;
  *(int *)(unaff_RBX + 0x10) = (int)lVar1;
  *(int *)((int64_t)unaff_RBX + 0x6c) = (int)unaff_RDI;
  *(int *)((int64_t)unaff_RBX + 0x84) = (int)unaff_RDI;
  return unaff_RDI & 0xffffffff;
}
uint64_t function_765f57(int64_t *param_1)
{
  int64_t *plVar1;
  bool bVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *unaff_RBX;
  short sVar6;
  int unaff_EBP;
  short sVar7;
  int unaff_ESI;
  int iVar8;
  int unaff_R15D;
  int8_t *local_var_40;
  int64_t local_var_48;
  short local_buffer_50;
  short sStack0000000000000052;
  int64_t local_buffer_58;
  uint64_t local_buffer_a8;
  int32_t local_buffer_c0;
  int local_buffer_c8;
  char local_buffer_d0;
  sVar6 = (short)unaff_EBP;
  sVar7 = (short)unaff_ESI;
  if (local_buffer_d0 == '\0') {
    lVar4 = param_1[8];
    if ((lVar4 != 0) &&
       (((short)unaff_RBX[7] < unaff_R15D || (*(short *)((int64_t)unaff_RBX + 0x3a) < unaff_ESI))))
    {
// WARNING: Subroutine does not return
      SystemDataValidator(*unaff_RBX + 0x10bd0,lVar4,&system_buffer_ptr,0,1);
    }
    if (lVar4 == 0) {
      iVar8 = unaff_EBP * unaff_ESI;
      lVar4 = SystemResourceManager(*unaff_RBX + 0x10bd0,iVar8 * 4,&system_buffer_ptr,0,0);
      if (lVar4 == 0) {
        return 0x26;
      }
      lVar5 = SystemResourceManager(*unaff_RBX + 0x10bd0,iVar8 * 4,&system_buffer_ptr,0,0);
      if (lVar5 == 0) {
        return 0x26;
      }
      *(short *)(unaff_RBX + 7) = sVar6;
      *(short *)((int64_t)unaff_RBX + 0x3a) = sVar7;
      unaff_RBX[8] = lVar4;
      *(short *)(unaff_RBX + 9) = sVar6;
      *(short *)((int64_t)unaff_RBX + 0x4a) = sVar7;
      unaff_RBX[10] = lVar5;
      if (local_buffer_c8 != 0) {
// WARNING: Subroutine does not return
        memset(lVar5,0,(int64_t)iVar8 << 2);
      }
    }
    uVar3 = function_76def0(unaff_RBX + 7,local_buffer_a8,unaff_ESI,unaff_R15D,local_buffer_c0);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = function_7657c0();
    iVar8 = (int)uVar3;
  }
  else {
    plVar1 = param_1 + 0x13;
    if ((((short)*plVar1 < unaff_R15D) || (*(short *)((int64_t)param_1 + 0x9a) < unaff_ESI)) ||
       (param_1[0x14] == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    lVar4 = 0;
    iVar8 = unaff_EBP * unaff_ESI * 4;
    local_var_48 = SystemResourceManager(*param_1 + 0x10bd0,iVar8,&system_buffer_ptr,0,0);
    if (local_var_48 == 0) {
      return 0x26;
    }
    local_buffer_50 = sVar6;
    sStack0000000000000052 = sVar7;
    local_buffer_58 = local_var_48;
    uVar3 = function_76def0(&local_buffer_00000050,local_buffer_a8,unaff_ESI,unaff_R15D,local_buffer_c0)
    ;
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (bVar2) {
      if (unaff_RBX[0x14] != 0) {
// WARNING: Subroutine does not return
        SystemDataValidator(*unaff_RBX + 0x10bd0,unaff_RBX[0x14],&system_buffer_ptr,0,1);
      }
      lVar4 = SystemResourceManager(*unaff_RBX + 0x10bd0,iVar8,&system_buffer_ptr,0,0);
      if (lVar4 == 0) {
        return 0x26;
      }
      *(short *)plVar1 = sVar6;
      *(short *)((int64_t)param_1 + 0x9a) = sVar7;
      param_1[0x14] = lVar4;
      lVar4 = SystemResourceManager(*unaff_RBX + 0x10bd0,iVar8,&system_buffer_ptr,0,0);
      if (lVar4 == 0) {
        return 0x26;
      }
    }
    else if (((int64_t *)&local_buffer_00000050 == plVar1) ||
            (((local_buffer_50 == (short)*plVar1 &&
              (sStack0000000000000052 == *(short *)((int64_t)param_1 + 0x9a))) &&
             (iVar8 = memcmp(local_buffer_58,param_1[0x14],
                             (int64_t)((int)sStack0000000000000052 * (int)local_buffer_50 * 4)),
             iVar8 == 0)))) {
// WARNING: Subroutine does not return
      SystemDataValidator(*unaff_RBX + 0x10bd0,local_var_48,&system_buffer_ptr,0,1);
    }
    uVar3 = function_76def0(plVar1,local_buffer_a8,unaff_ESI,unaff_R15D,local_buffer_c0);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = function_743700(*unaff_RBX,&local_buffer_00000040,0x28,1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    *local_var_40 = 10;
    *(int64_t *)(local_var_40 + 8) = local_var_48;
    *(int64_t *)(local_var_40 + 0x10) = lVar4;
    *(int64_t **)(local_var_40 + 0x18) = unaff_RBX;
    *(short *)(local_var_40 + 0x22) = sVar7;
    *(short *)(local_var_40 + 0x20) = sVar6;
    *(int *)(local_var_40 + 0x24) = local_buffer_c8;
    uVar3 = SystemFunction_000180743b40(*unaff_RBX,local_var_40,1);
    iVar8 = (int)uVar3;
  }
  if (iVar8 == 0) {
    uVar3 = 0;
  }
  return uVar3;
}
uint64_t function_765f5f(int64_t *param_1)
{
  int64_t *plVar1;
  bool bVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *unaff_RBX;
  short sVar6;
  int unaff_EBP;
  short sVar7;
  int unaff_ESI;
  int iVar8;
  int unaff_R15D;
  bool in_ZF;
  int8_t *local_var_40;
  int64_t local_var_48;
  short local_buffer_50;
  short sStack0000000000000052;
  int64_t local_buffer_58;
  uint64_t local_buffer_a8;
  int32_t local_buffer_c0;
  int local_buffer_c8;
  sVar6 = (short)unaff_EBP;
  sVar7 = (short)unaff_ESI;
  if (in_ZF) {
    lVar4 = param_1[8];
    if ((lVar4 != 0) &&
       (((short)unaff_RBX[7] < unaff_R15D || (*(short *)((int64_t)unaff_RBX + 0x3a) < unaff_ESI))))
    {
// WARNING: Subroutine does not return
      SystemDataValidator(*unaff_RBX + 0x10bd0,lVar4,&system_buffer_ptr,0,1);
    }
    if (lVar4 == 0) {
      iVar8 = unaff_EBP * unaff_ESI;
      lVar4 = SystemResourceManager(*unaff_RBX + 0x10bd0,iVar8 * 4,&system_buffer_ptr,0,0);
      if (lVar4 == 0) {
        return 0x26;
      }
      lVar5 = SystemResourceManager(*unaff_RBX + 0x10bd0,iVar8 * 4,&system_buffer_ptr,0,0);
      if (lVar5 == 0) {
        return 0x26;
      }
      *(short *)(unaff_RBX + 7) = sVar6;
      *(short *)((int64_t)unaff_RBX + 0x3a) = sVar7;
      unaff_RBX[8] = lVar4;
      *(short *)(unaff_RBX + 9) = sVar6;
      *(short *)((int64_t)unaff_RBX + 0x4a) = sVar7;
      unaff_RBX[10] = lVar5;
      if (local_buffer_c8 != 0) {
// WARNING: Subroutine does not return
        memset(lVar5,0,(int64_t)iVar8 << 2);
      }
    }
    uVar3 = function_76def0(unaff_RBX + 7,local_buffer_a8,unaff_ESI,unaff_R15D,local_buffer_c0);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = function_7657c0();
    iVar8 = (int)uVar3;
  }
  else {
    plVar1 = param_1 + 0x13;
    if ((((short)*plVar1 < unaff_R15D) || (*(short *)((int64_t)param_1 + 0x9a) < unaff_ESI)) ||
       (param_1[0x14] == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    lVar4 = 0;
    iVar8 = unaff_EBP * unaff_ESI * 4;
    local_var_48 = SystemResourceManager(*param_1 + 0x10bd0,iVar8,&system_buffer_ptr,0,0);
    if (local_var_48 == 0) {
      return 0x26;
    }
    local_buffer_50 = sVar6;
    sStack0000000000000052 = sVar7;
    local_buffer_58 = local_var_48;
    uVar3 = function_76def0(&local_buffer_00000050,local_buffer_a8,unaff_ESI,unaff_R15D,local_buffer_c0)
    ;
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (bVar2) {
      if (unaff_RBX[0x14] != 0) {
// WARNING: Subroutine does not return
        SystemDataValidator(*unaff_RBX + 0x10bd0,unaff_RBX[0x14],&system_buffer_ptr,0,1);
      }
      lVar4 = SystemResourceManager(*unaff_RBX + 0x10bd0,iVar8,&system_buffer_ptr,0,0);
      if (lVar4 == 0) {
        return 0x26;
      }
      *(short *)plVar1 = sVar6;
      *(short *)((int64_t)param_1 + 0x9a) = sVar7;
      param_1[0x14] = lVar4;
      lVar4 = SystemResourceManager(*unaff_RBX + 0x10bd0,iVar8,&system_buffer_ptr,0,0);
      if (lVar4 == 0) {
        return 0x26;
      }
    }
    else if (((int64_t *)&local_buffer_00000050 == plVar1) ||
            (((local_buffer_50 == (short)*plVar1 &&
              (sStack0000000000000052 == *(short *)((int64_t)param_1 + 0x9a))) &&
             (iVar8 = memcmp(local_buffer_58,param_1[0x14],
                             (int64_t)((int)sStack0000000000000052 * (int)local_buffer_50 * 4)),
             iVar8 == 0)))) {
// WARNING: Subroutine does not return
      SystemDataValidator(*unaff_RBX + 0x10bd0,local_var_48,&system_buffer_ptr,0,1);
    }
    uVar3 = function_76def0(plVar1,local_buffer_a8,unaff_ESI,unaff_R15D,local_buffer_c0);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = function_743700(*unaff_RBX,&local_buffer_00000040,0x28,1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    *local_var_40 = 10;
    *(int64_t *)(local_var_40 + 8) = local_var_48;
    *(int64_t *)(local_var_40 + 0x10) = lVar4;
    *(int64_t **)(local_var_40 + 0x18) = unaff_RBX;
    *(short *)(local_var_40 + 0x22) = sVar7;
    *(short *)(local_var_40 + 0x20) = sVar6;
    *(int *)(local_var_40 + 0x24) = local_buffer_c8;
    uVar3 = SystemFunction_000180743b40(*unaff_RBX,local_var_40,1);
    iVar8 = (int)uVar3;
  }
  if (iVar8 == 0) {
    uVar3 = 0;
  }
  return uVar3;
}
uint64_t function_766379(void)
{
  return 0x26;
}
uint64_t function_766380(int64_t *param_1,float param_2,char param_3)
{
  uint64_t uVar1;
  int8_t *pstack_special_x_20;
  if (param_3 == '\0') {
    if (param_1[8] != 0) {
// WARNING: Subroutine does not return
      SystemDataValidator(*param_1 + 0x10bd0,param_1[8],&system_buffer_ptr,0,1);
    }
    *(short *)(param_1 + 7) = (short)param_1[7];
    *(int16_t *)((int64_t)param_1 + 0x3a) = *(int16_t *)((int64_t)param_1 + 0x3a);
    param_1[8] = 0;
    if (param_1[10] != 0) {
// WARNING: Subroutine does not return
      SystemDataValidator(*param_1 + 0x10bd0,param_1[10],&system_buffer_ptr,0,1);
    }
    *(short *)(param_1 + 9) = (short)param_1[9];
    *(int16_t *)((int64_t)param_1 + 0x4a) = *(int16_t *)((int64_t)param_1 + 0x4a);
    param_1[10] = 0;
    *(float *)(param_1 + 0xd) = param_2;
    *(float *)(param_1 + 0x10) = param_2;
    *(int32_t *)((int64_t)param_1 + 0x6c) = 0;
    *(int32_t *)((int64_t)param_1 + 0x84) = 0;
  }
  else if (((param_1[0x14] != 0) || (param_2 != *(float *)(param_1 + 0x12))) ||
          (*(int *)((int64_t)param_1 + 0x94) != 0)) {
    *(int32_t *)((int64_t)param_1 + 0x94) = 0;
    param_1[0x11] = 0;
    *(float *)(param_1 + 0x12) = param_2;
    function_76deb0(param_1 + 0x13,*param_1);
    *(short *)(param_1 + 0x13) = (short)param_1[0x13];
    *(int16_t *)((int64_t)param_1 + 0x9a) = *(int16_t *)((int64_t)param_1 + 0x9a);
    param_1[0x14] = 0;
    uVar1 = function_743700(*param_1,&pstack_special_x_20,0x18,1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *pstack_special_x_20 = 0xb;
    *(int64_t **)(pstack_special_x_20 + 8) = param_1;
    *(float *)(pstack_special_x_20 + 0x10) = param_2;
    uVar1 = SystemFunction_000180743b40(*param_1,pstack_special_x_20,1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}
uint64_t function_766520(int64_t *param_1,uint64_t *param_2,int64_t *param_3)
{
  int64_t lVar1;
  uint64_t uVar2;
  if (param_2 == (uint64_t *)0x0) {
    return 0x1f;
  }
  if (param_1 != (int64_t *)0x0) {
    *param_2 = param_1;
    if (param_3 != (int64_t *)0x0) {
      if ((*param_3 != 0) || (lVar1 = *param_1, lVar1 == 0)) {
        return 0x1c;
      }
      uVar2 = function_743c40(lVar1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      *param_3 = lVar1;
    }
    return 0;
  }
  return 0x1e;
}
uint64_t function_766545(int64_t *param_1,uint64_t *param_2,int64_t *param_3)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *unaff_RDI;
  *param_2 = param_1;
  if (unaff_RDI != (int64_t *)0x0) {
    if ((*param_3 != 0) || (lVar1 = *param_1, lVar1 == 0)) {
      return 0x1c;
    }
    uVar2 = function_743c40(lVar1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *unaff_RDI = lVar1;
  }
  return 0;
}
uint64_t function_76657c(void)
{
  return 0x1c;
}
uint64_t function_766590(int64_t param_1)
{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  uint64_t uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  pfVar1 = *(float **)(param_1 + 0x50);
  *(uint64_t *)(param_1 + 0x50) = 0;
  while (pfVar2 = pfVar1, pfVar2 != (float *)0x0) {
    fVar4 = pfVar2[0x2e];
    fVar14 = 0.0;
    pfVar1 = *(float **)(pfVar2 + 0x12);
    fVar15 = 0.0;
    fVar16 = 0.0;
    uVar3 = ((uint)fVar4 & 0xffff) - 2;
    pfVar2[0x12] = 0.0;
    pfVar2[0x13] = 0.0;
    if (0 < (int)uVar3) {
      pfVar5 = pfVar2 + 0x33;
      fVar9 = *pfVar5;
      uVar7 = (uint64_t)uVar3;
      do {
        fVar17 = fVar9 - pfVar2[0x30];
        fVar12 = pfVar5[2] - pfVar2[0x2f];
        fVar8 = pfVar5[4] - pfVar2[0x31];
        fVar13 = pfVar5[-1] - pfVar2[0x2f];
        fVar10 = pfVar5[1] - pfVar2[0x31];
        fVar9 = pfVar5[3];
        fVar11 = fVar9 - pfVar2[0x30];
        pfVar5 = pfVar5 + 3;
        fVar15 = fVar15 + (fVar12 * fVar10 - fVar8 * fVar13);
        fVar14 = fVar14 + (fVar8 * fVar17 - fVar11 * fVar10);
        fVar16 = fVar16 + (fVar11 * fVar13 - fVar12 * fVar17);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    fVar9 = SQRT(fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16);
    if (fVar9 <= 0.0) {
      fVar4 = (float)((uint)fVar4 | 0x20000);
    }
    else {
      fVar4 = (float)((uint)fVar4 & 0xfffdffff);
      fVar9 = 1.0 / fVar9;
      fVar14 = fVar14 * fVar9;
      fVar15 = fVar15 * fVar9;
      fVar16 = fVar16 * fVar9;
    }
    pfVar2[0x29] = fVar14;
    pfVar2[0x2e] = fVar4;
    pfVar2[0x2a] = fVar15;
    pfVar2[0x2b] = fVar16;
    pfVar2[0x28] = fVar14 * pfVar2[0x2f] + fVar15 * pfVar2[0x30] + fVar16 * pfVar2[0x31];
    SystemFunction_0001807e3480(param_1 + 0x110,pfVar2 + 0x14);
    fVar4 = pfVar2[0x2f];
    iVar6 = 1;
    *pfVar2 = fVar4;
    pfVar2[1] = fVar4;
    fVar14 = pfVar2[0x30];
    pfVar2[2] = fVar14;
    pfVar2[3] = fVar14;
    fVar15 = pfVar2[0x31];
    pfVar2[4] = fVar15;
    pfVar2[5] = fVar15;
    fVar8 = fVar14;
    fVar9 = fVar4;
    fVar16 = fVar15;
    if (1 < *(ushort *)(pfVar2 + 0x2e)) {
      pfVar5 = pfVar2 + 0x34;
      fVar10 = fVar14;
      fVar11 = fVar15;
      fVar12 = fVar4;
      fVar13 = fVar15;
      do {
        if (fVar4 <= pfVar5[-2]) {
          fVar4 = pfVar5[-2];
        }
        iVar6 = iVar6 + 1;
        pfVar2[1] = fVar4;
        fVar9 = pfVar5[-2];
        if (fVar12 <= pfVar5[-2]) {
          fVar9 = fVar12;
        }
        *pfVar2 = fVar9;
        if (fVar8 <= pfVar5[-1]) {
          fVar8 = pfVar5[-1];
        }
        pfVar2[3] = fVar8;
        fVar14 = pfVar5[-1];
        if (fVar10 <= pfVar5[-1]) {
          fVar14 = fVar10;
        }
        pfVar2[2] = fVar14;
        fVar16 = *pfVar5;
        if (*pfVar5 <= fVar13) {
          fVar16 = fVar13;
        }
        pfVar2[5] = fVar16;
        fVar15 = *pfVar5;
        if (fVar11 <= *pfVar5) {
          fVar15 = fVar11;
        }
        pfVar2[4] = fVar15;
        pfVar5 = pfVar5 + 3;
        fVar10 = fVar14;
        fVar11 = fVar15;
        fVar12 = fVar9;
        fVar13 = fVar16;
      } while (iVar6 < (int)(uint)*(ushort *)(pfVar2 + 0x2e));
    }
    fVar10 = fVar4 - fVar9;
    if (fVar4 - fVar9 <= fVar8 - fVar14) {
      fVar10 = fVar8 - fVar14;
    }
    if (fVar10 <= fVar16 - fVar15) {
      fVar10 = fVar16 - fVar15;
    }
    fVar10 = fVar10 * 0.01;
    *pfVar2 = fVar9 - fVar10;
    pfVar2[1] = fVar4 + fVar10;
    pfVar2[2] = fVar14 - fVar10;
    pfVar2[3] = fVar8 + fVar10;
    pfVar2[4] = fVar15 - fVar10;
    pfVar2[5] = fVar16 + fVar10;
    if (((uint)pfVar2[0x2e] & 0x20000) == 0) {
      SystemFunction_0001807e3dd0(param_1 + 0x110,pfVar2);
    }
  }
  function_7e3910(param_1 + 0x110,param_1 + 0x58);
  function_766ee0(param_1);
  return 0;
}
uint64_t function_7665bf(void)
{
  float *pfVar1;
  uint uVar2;
  int64_t in_RAX;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float *unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RDI;
  uint64_t uVar6;
  uint64_t unaff_R14;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int32_t unaff_XMM6_Da;
  float fVar11;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  float fVar12;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  float fVar13;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  float fVar14;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  float fVar15;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  float fVar16;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  *(uint64_t *)(in_RAX + 8) = unaff_RDI;
  *(int32_t *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x28) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x24) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x20) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x1c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM9_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM10_Dd;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM11_Dd;
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM12_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM12_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM12_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM12_Dd;
  do {
    fVar3 = unaff_RBX[0x2e];
    fVar13 = 0.0;
    pfVar1 = *(float **)(unaff_RBX + 0x12);
    fVar14 = 0.0;
    fVar15 = 0.0;
    uVar2 = ((uint)fVar3 & 0xffff) - 2;
    *(uint64_t *)(unaff_RBX + 0x12) = unaff_R14;
    if (0 < (int)uVar2) {
      pfVar4 = unaff_RBX + 0x33;
      fVar8 = *pfVar4;
      uVar6 = (uint64_t)uVar2;
      do {
        fVar16 = fVar8 - unaff_RBX[0x30];
        fVar11 = pfVar4[2] - unaff_RBX[0x2f];
        fVar7 = pfVar4[4] - unaff_RBX[0x31];
        fVar12 = pfVar4[-1] - unaff_RBX[0x2f];
        fVar9 = pfVar4[1] - unaff_RBX[0x31];
        fVar8 = pfVar4[3];
        fVar10 = fVar8 - unaff_RBX[0x30];
        pfVar4 = pfVar4 + 3;
        fVar14 = fVar14 + (fVar11 * fVar9 - fVar7 * fVar12);
        fVar13 = fVar13 + (fVar7 * fVar16 - fVar10 * fVar9);
        fVar15 = fVar15 + (fVar10 * fVar12 - fVar11 * fVar16);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    fVar8 = SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15);
    if (fVar8 <= 0.0) {
      fVar3 = (float)((uint)fVar3 | 0x20000);
    }
    else {
      fVar3 = (float)((uint)fVar3 & 0xfffdffff);
      fVar8 = 1.0 / fVar8;
      fVar13 = fVar13 * fVar8;
      fVar14 = fVar14 * fVar8;
      fVar15 = fVar15 * fVar8;
    }
    unaff_RBX[0x29] = fVar13;
    unaff_RBX[0x2e] = fVar3;
    unaff_RBX[0x2a] = fVar14;
    unaff_RBX[0x2b] = fVar15;
    unaff_RBX[0x28] = fVar13 * unaff_RBX[0x2f] + fVar14 * unaff_RBX[0x30] + fVar15 * unaff_RBX[0x31]
    ;
    SystemFunction_0001807e3480(unaff_RBP + 0x110,unaff_RBX + 0x14);
    fVar3 = unaff_RBX[0x2f];
    iVar5 = 1;
    *unaff_RBX = fVar3;
    unaff_RBX[1] = fVar3;
    fVar13 = unaff_RBX[0x30];
    unaff_RBX[2] = fVar13;
    unaff_RBX[3] = fVar13;
    fVar14 = unaff_RBX[0x31];
    unaff_RBX[4] = fVar14;
    unaff_RBX[5] = fVar14;
    fVar7 = fVar13;
    fVar8 = fVar3;
    fVar15 = fVar14;
    if (1 < *(ushort *)(unaff_RBX + 0x2e)) {
      pfVar4 = unaff_RBX + 0x34;
      fVar9 = fVar13;
      fVar10 = fVar14;
      fVar11 = fVar3;
      fVar12 = fVar14;
      do {
        if (fVar3 <= pfVar4[-2]) {
          fVar3 = pfVar4[-2];
        }
        iVar5 = iVar5 + 1;
        unaff_RBX[1] = fVar3;
        fVar8 = pfVar4[-2];
        if (fVar11 <= pfVar4[-2]) {
          fVar8 = fVar11;
        }
        *unaff_RBX = fVar8;
        if (fVar7 <= pfVar4[-1]) {
          fVar7 = pfVar4[-1];
        }
        unaff_RBX[3] = fVar7;
        fVar13 = pfVar4[-1];
        if (fVar9 <= pfVar4[-1]) {
          fVar13 = fVar9;
        }
        unaff_RBX[2] = fVar13;
        fVar15 = *pfVar4;
        if (*pfVar4 <= fVar12) {
          fVar15 = fVar12;
        }
        unaff_RBX[5] = fVar15;
        fVar14 = *pfVar4;
        if (fVar10 <= *pfVar4) {
          fVar14 = fVar10;
        }
        unaff_RBX[4] = fVar14;
        pfVar4 = pfVar4 + 3;
        fVar9 = fVar13;
        fVar10 = fVar14;
        fVar11 = fVar8;
        fVar12 = fVar15;
      } while (iVar5 < (int)(uint)*(ushort *)(unaff_RBX + 0x2e));
    }
    fVar9 = fVar3 - fVar8;
    if (fVar3 - fVar8 <= fVar7 - fVar13) {
      fVar9 = fVar7 - fVar13;
    }
    if (fVar9 <= fVar15 - fVar14) {
      fVar9 = fVar15 - fVar14;
    }
    fVar9 = fVar9 * 0.01;
    *unaff_RBX = fVar8 - fVar9;
    unaff_RBX[1] = fVar3 + fVar9;
    unaff_RBX[2] = fVar13 - fVar9;
    unaff_RBX[3] = fVar7 + fVar9;
    unaff_RBX[4] = fVar14 - fVar9;
    unaff_RBX[5] = fVar15 + fVar9;
    if (((uint)unaff_RBX[0x2e] & 0x20000) == 0) {
      SystemFunction_0001807e3dd0(unaff_RBP + 0x110,unaff_RBX);
    }
    unaff_RBX = pfVar1;
  } while (pfVar1 != (float *)0x0);
  function_7e3910(unaff_RBP + 0x110,unaff_RBP + 0x58);
  function_766ee0();
  return 0;
}
uint64_t function_76693c(void)
{
  int64_t unaff_RBP;
  function_7e3910(unaff_RBP + 0x110,unaff_RBP + 0x58);
  function_766ee0();
  return 0;
}