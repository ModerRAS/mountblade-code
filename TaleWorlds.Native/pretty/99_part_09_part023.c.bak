#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part023.c - 7 个函数

// 函数: void FUN_1805c8252(void)
void FUN_1805c8252(void)

{
  byte bVar1;
  longlong lVar2;
  float *pfVar3;
  uint uVar4;
  uint64_t uVar5;
  longlong *unaff_RBX;
  uint unaff_EDI;
  ulonglong uVar6;
  ulonglong in_R10;
  uint unaff_R12D;
  ulonglong unaff_R13;
  uint unaff_R15D;
  bool bVar7;
  float fVar8;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float fVar9;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  uint in_stack_00000048;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000058;
  
  fVar9 = (unaff_XMM13_Da / (unaff_XMM6_Da + unaff_XMM11_Da)) * unaff_XMM12_Da;
  if ((unaff_XMM8_Da < unaff_XMM7_Da) &&
     ((((lVar2 = func_0x0001805b6e80(unaff_RBX + 1), lVar2 == 0 ||
        (lVar2 = func_0x0001805b6e80(unaff_RBX + 1), *(int *)(lVar2 + 0x30) < 1)) ||
       (((*(uint *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar2 + 0xd0)) >>
          9 & 1) != 0 && (*(short *)(lVar2 + 8) < 1)))) ||
      (lVar2 = func_0x0001805b6e80(unaff_RBX + 1),
      (*(byte *)((longlong)
                 *(int *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 100 +
                         *(longlong *)(lVar2 + 0xd0)) * 0x170 + 0x140 + system_system_ui) & 0x10) == 0
      )))) {
    if ((*(uint *)(unaff_RBX + 2) & 0x8000000) == 0) {
      bVar1 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((longlong)unaff_RBX + 0x11c) = bVar1;
    }
    else {
      bVar1 = *(byte *)((longlong)unaff_RBX + 0x11c);
    }
    if ((bVar1 != 0) && (pfVar3 = (float *)FUN_1805b6e50(unaff_RBX + 1), 2.0 < *pfVar3)) {
      unaff_XMM6_Da = unaff_XMM6_Da * 1.25;
    }
    unaff_XMM8_Da = (unaff_XMM13_Da / (unaff_XMM6_Da + unaff_XMM11_Da)) * unaff_XMM7_Da;
    in_R10 = _uStack0000000000000040 & 0xffffffff;
  }
  fVar8 = unaff_XMM10_Da + fVar9 + unaff_XMM8_Da;
  if (fVar8 < unaff_XMM11_Da) {
    unaff_XMM8_Da = 1.0;
    uStack0000000000000044 = unaff_EDI;
    in_stack_00000048 = unaff_EDI;
  }
  if ((fVar9 <= unaff_XMM8_Da) || (fVar9 <= unaff_XMM10_Da)) {
    if (unaff_XMM10_Da <= unaff_XMM8_Da) {
      uVar6 = (ulonglong)uStack0000000000000044;
      uVar5 = 1;
      uVar4 = in_stack_00000048;
    }
    else {
      uVar6 = unaff_R13 & 0xffffffff;
      uVar5 = 2;
      uVar4 = unaff_R12D;
    }
  }
  else {
    uVar6 = in_R10 & 0xffffffff;
    uVar5 = 3;
    uVar4 = unaff_R15D;
  }
  FUN_1805c9310(fVar8,uVar5,uVar6,uVar4);
  if (in_stack_00000058._4_4_ != *(int *)((longlong)unaff_RBX + 0x215c)) {
    uVar4 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar4 = uVar4 >> 0x11 ^ uVar4;
    uVar4 = uVar4 << 5 ^ uVar4;
    *(uint *)(unaff_RBX + 0x272) = uVar4;
    unaff_RBX[0x273] =
         *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x274] * 8) -
         (longlong)((float)(uVar4 - 1) * 0.00027939677 - 2e+06);
    goto LAB_1805c85d3;
  }
  if ((in_stack_00000050._4_1_ == '\0') || (*(int *)(*unaff_RBX + 0x1fc) == 1)) {
    uVar4 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar4 = uVar4 >> 0x11 ^ uVar4;
    uVar4 = uVar4 << 5 ^ uVar4;
    fVar9 = (float)(uVar4 - 1) * 4.656613e-05 - 500000.0;
LAB_1805c855d:
    *(uint *)(unaff_RBX + 0x272) = uVar4;
  }
  else {
    pfVar3 = (float *)FUN_1805b6e50(unaff_RBX + 1);
    uVar4 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    if (unaff_XMM13_Da <= *pfVar3) {
      uVar4 = uVar4 >> 0x11 ^ uVar4;
      uVar4 = uVar4 << 5 ^ uVar4;
      fVar9 = (float)(uVar4 - 1) * 2.4214383e-05 - 259999.98;
      goto LAB_1805c855d;
    }
    fVar9 = *pfVar3 - 2.4;
    uVar4 = uVar4 >> 0x11 ^ uVar4;
    if (fVar9 <= 0.4) {
      fVar9 = 0.4;
    }
    uVar4 = uVar4 << 5 ^ uVar4;
    *(uint *)(unaff_RBX + 0x272) = uVar4;
    fVar9 = fVar9 * -100000.0 - (fVar9 * 0.5 - fVar9) * (float)(uVar4 - 1) * 2.3283064e-05;
  }
  unaff_RBX[0x273] =
       *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x274] * 8) - (longlong)fVar9;
  uVar4 = *(uint *)(*(longlong *)(*unaff_RBX + 0x8f8) + 0x9e0);
  if (uVar4 != unaff_EDI) {
    unaff_EDI = *(uint *)(*(longlong *)(*(longlong *)(*unaff_RBX + 0x8f8) + 0x9e8) + 0xf0);
  }
  if (*(int *)((longlong)unaff_RBX + 0x215c) == 1) {
    if (uVar4 != uStack0000000000000044) goto LAB_1805c85d3;
    bVar7 = unaff_EDI == in_stack_00000048;
  }
  else if (*(int *)((longlong)unaff_RBX + 0x215c) == 2) {
    if (uVar4 != (uint)unaff_R13) goto LAB_1805c85d3;
    bVar7 = unaff_EDI == unaff_R12D;
  }
  else {
    if (uVar4 != uStack0000000000000040) goto LAB_1805c85d3;
    bVar7 = unaff_EDI == unaff_R15D;
  }
  if (bVar7) {
    return;
  }
LAB_1805c85d3:
  *(int32_t *)(unaff_RBX + 0x2f1) = 0;
  unaff_RBX[0x2ed] =
       *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2ee] * 8) + -0x8000000000000000;
  unaff_RBX[0x2e0] = *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2e1] * 8) + 10000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805c8278(void)
void FUN_1805c8278(void)

{
  byte bVar1;
  longlong lVar2;
  float *pfVar3;
  uint uVar4;
  uint64_t uVar5;
  longlong *unaff_RBX;
  uint unaff_EDI;
  ulonglong in_R10;
  uint unaff_R12D;
  ulonglong unaff_R13;
  uint unaff_R15D;
  bool bVar6;
  float fVar7;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM13_Da;
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  uint in_stack_00000048;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000058;
  
  lVar2 = func_0x0001805b6e80(unaff_RBX + 1);
  if ((((lVar2 == 0) || (lVar2 = func_0x0001805b6e80(unaff_RBX + 1), *(int *)(lVar2 + 0x30) < 1)) ||
      (((*(uint *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar2 + 0xd0)) >>
         9 & 1) != 0 && (*(short *)(lVar2 + 8) < 1)))) ||
     (lVar2 = func_0x0001805b6e80(unaff_RBX + 1),
     (*(byte *)((longlong)
                *(int *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 100 + *(longlong *)(lVar2 + 0xd0)
                        ) * 0x170 + 0x140 + system_system_ui) & 0x10) == 0)) {
    if ((*(uint *)(unaff_RBX + 2) & 0x8000000) == 0) {
      bVar1 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((longlong)unaff_RBX + 0x11c) = bVar1;
    }
    else {
      bVar1 = *(byte *)((longlong)unaff_RBX + 0x11c);
    }
    if ((bVar1 != 0) && (pfVar3 = (float *)FUN_1805b6e50(unaff_RBX + 1), 2.0 < *pfVar3)) {
      unaff_XMM6_Da = unaff_XMM6_Da * 1.25;
    }
    unaff_XMM8_Da = (unaff_XMM13_Da / (unaff_XMM6_Da + unaff_XMM11_Da)) * unaff_XMM7_Da;
    in_R10 = _uStack0000000000000040 & 0xffffffff;
  }
  fVar7 = unaff_XMM10_Da + unaff_XMM9_Da + unaff_XMM8_Da;
  if (fVar7 < unaff_XMM11_Da) {
    unaff_XMM8_Da = 1.0;
    uStack0000000000000044 = unaff_EDI;
    in_stack_00000048 = unaff_EDI;
  }
  if ((unaff_XMM9_Da <= unaff_XMM8_Da) || (unaff_XMM9_Da <= unaff_XMM10_Da)) {
    if (unaff_XMM10_Da <= unaff_XMM8_Da) {
      in_R10 = (ulonglong)uStack0000000000000044;
      uVar5 = 1;
      uVar4 = in_stack_00000048;
    }
    else {
      in_R10 = unaff_R13 & 0xffffffff;
      uVar5 = 2;
      uVar4 = unaff_R12D;
    }
  }
  else {
    in_R10 = in_R10 & 0xffffffff;
    uVar5 = 3;
    uVar4 = unaff_R15D;
  }
  FUN_1805c9310(fVar7,uVar5,in_R10,uVar4);
  if (in_stack_00000058._4_4_ != *(int *)((longlong)unaff_RBX + 0x215c)) {
    uVar4 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar4 = uVar4 >> 0x11 ^ uVar4;
    uVar4 = uVar4 << 5 ^ uVar4;
    *(uint *)(unaff_RBX + 0x272) = uVar4;
    unaff_RBX[0x273] =
         *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x274] * 8) -
         (longlong)((float)(uVar4 - 1) * 0.00027939677 - 2e+06);
    goto LAB_1805c85d3;
  }
  if ((in_stack_00000050._4_1_ == '\0') || (*(int *)(*unaff_RBX + 0x1fc) == 1)) {
    uVar4 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar4 = uVar4 >> 0x11 ^ uVar4;
    uVar4 = uVar4 << 5 ^ uVar4;
    fVar7 = (float)(uVar4 - 1) * 4.656613e-05 - 500000.0;
LAB_1805c855d:
    *(uint *)(unaff_RBX + 0x272) = uVar4;
  }
  else {
    pfVar3 = (float *)FUN_1805b6e50(unaff_RBX + 1);
    uVar4 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    if (unaff_XMM13_Da <= *pfVar3) {
      uVar4 = uVar4 >> 0x11 ^ uVar4;
      uVar4 = uVar4 << 5 ^ uVar4;
      fVar7 = (float)(uVar4 - 1) * 2.4214383e-05 - 259999.98;
      goto LAB_1805c855d;
    }
    fVar7 = *pfVar3 - 2.4;
    uVar4 = uVar4 >> 0x11 ^ uVar4;
    if (fVar7 <= 0.4) {
      fVar7 = 0.4;
    }
    uVar4 = uVar4 << 5 ^ uVar4;
    *(uint *)(unaff_RBX + 0x272) = uVar4;
    fVar7 = fVar7 * -100000.0 - (fVar7 * 0.5 - fVar7) * (float)(uVar4 - 1) * 2.3283064e-05;
  }
  unaff_RBX[0x273] =
       *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x274] * 8) - (longlong)fVar7;
  uVar4 = *(uint *)(*(longlong *)(*unaff_RBX + 0x8f8) + 0x9e0);
  if (uVar4 != unaff_EDI) {
    unaff_EDI = *(uint *)(*(longlong *)(*(longlong *)(*unaff_RBX + 0x8f8) + 0x9e8) + 0xf0);
  }
  if (*(int *)((longlong)unaff_RBX + 0x215c) == 1) {
    if (uVar4 != uStack0000000000000044) goto LAB_1805c85d3;
    bVar6 = unaff_EDI == in_stack_00000048;
  }
  else if (*(int *)((longlong)unaff_RBX + 0x215c) == 2) {
    if (uVar4 != (uint)unaff_R13) goto LAB_1805c85d3;
    bVar6 = unaff_EDI == unaff_R12D;
  }
  else {
    if (uVar4 != uStack0000000000000040) goto LAB_1805c85d3;
    bVar6 = unaff_EDI == unaff_R15D;
  }
  if (bVar6) {
    return;
  }
LAB_1805c85d3:
  *(int32_t *)(unaff_RBX + 0x2f1) = 0;
  unaff_RBX[0x2ed] =
       *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2ee] * 8) + -0x8000000000000000;
  unaff_RBX[0x2e0] = *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2e1] * 8) + 10000;
  return;
}






// 函数: void FUN_1805c8395(int32_t param_1)
void FUN_1805c8395(int32_t param_1)

{
  float *pfVar1;
  uint uVar2;
  uint64_t uVar3;
  longlong *unaff_RBX;
  int unaff_EDI;
  int iVar4;
  int iVar5;
  int in_R10D;
  int unaff_R12D;
  int unaff_R13D;
  int unaff_R15D;
  bool bVar6;
  float fVar7;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM13_Da;
  int in_stack_00000040;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000058;
  
  if ((unaff_XMM9_Da <= 1.0) || (unaff_XMM9_Da <= unaff_XMM10_Da)) {
    if (unaff_XMM10_Da <= 1.0) {
      uVar3 = 1;
      in_R10D = unaff_EDI;
      iVar5 = unaff_EDI;
    }
    else {
      uVar3 = 2;
      in_R10D = unaff_R13D;
      iVar5 = unaff_R12D;
    }
  }
  else {
    uVar3 = 3;
    iVar5 = unaff_R15D;
  }
  FUN_1805c9310(param_1,uVar3,in_R10D,iVar5);
  if (in_stack_00000058._4_4_ != *(int *)((longlong)unaff_RBX + 0x215c)) {
    uVar2 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar2 = uVar2 >> 0x11 ^ uVar2;
    uVar2 = uVar2 << 5 ^ uVar2;
    *(uint *)(unaff_RBX + 0x272) = uVar2;
    unaff_RBX[0x273] =
         *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x274] * 8) -
         (longlong)((float)(uVar2 - 1) * 0.00027939677 - 2e+06);
    goto LAB_1805c85d3;
  }
  if ((in_stack_00000050._4_1_ == '\0') || (*(int *)(*unaff_RBX + 0x1fc) == 1)) {
    uVar2 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar2 = uVar2 >> 0x11 ^ uVar2;
    uVar2 = uVar2 << 5 ^ uVar2;
    fVar7 = (float)(uVar2 - 1) * 4.656613e-05 - 500000.0;
LAB_1805c855d:
    *(uint *)(unaff_RBX + 0x272) = uVar2;
  }
  else {
    pfVar1 = (float *)FUN_1805b6e50(unaff_RBX + 1);
    uVar2 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    if (unaff_XMM13_Da <= *pfVar1) {
      uVar2 = uVar2 >> 0x11 ^ uVar2;
      uVar2 = uVar2 << 5 ^ uVar2;
      fVar7 = (float)(uVar2 - 1) * 2.4214383e-05 - 259999.98;
      goto LAB_1805c855d;
    }
    fVar7 = *pfVar1 - 2.4;
    uVar2 = uVar2 >> 0x11 ^ uVar2;
    if (fVar7 <= 0.4) {
      fVar7 = 0.4;
    }
    uVar2 = uVar2 << 5 ^ uVar2;
    *(uint *)(unaff_RBX + 0x272) = uVar2;
    fVar7 = fVar7 * -100000.0 - (fVar7 * 0.5 - fVar7) * (float)(uVar2 - 1) * 2.3283064e-05;
  }
  unaff_RBX[0x273] =
       *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x274] * 8) - (longlong)fVar7;
  iVar5 = *(int *)(*(longlong *)(*unaff_RBX + 0x8f8) + 0x9e0);
  iVar4 = unaff_EDI;
  if (iVar5 != unaff_EDI) {
    iVar4 = *(int *)(*(longlong *)(*(longlong *)(*unaff_RBX + 0x8f8) + 0x9e8) + 0xf0);
  }
  if (*(int *)((longlong)unaff_RBX + 0x215c) == 1) {
    if (iVar5 != unaff_EDI) goto LAB_1805c85d3;
    bVar6 = iVar4 == unaff_EDI;
  }
  else if (*(int *)((longlong)unaff_RBX + 0x215c) == 2) {
    if (iVar5 != unaff_R13D) goto LAB_1805c85d3;
    bVar6 = iVar4 == unaff_R12D;
  }
  else {
    if (iVar5 != in_stack_00000040) goto LAB_1805c85d3;
    bVar6 = iVar4 == unaff_R15D;
  }
  if (bVar6) {
    return;
  }
LAB_1805c85d3:
  *(int32_t *)(unaff_RBX + 0x2f1) = 0;
  unaff_RBX[0x2ed] =
       *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2ee] * 8) + -0x8000000000000000;
  unaff_RBX[0x2e0] = *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2e1] * 8) + 10000;
  return;
}






// 函数: void FUN_1805c8400(void)
void FUN_1805c8400(void)

{
  uint uVar1;
  longlong unaff_RBX;
  
  uVar1 = *(uint *)(unaff_RBX + 0x1390) << 0xd ^ *(uint *)(unaff_RBX + 0x1390);
  uVar1 = uVar1 >> 0x11 ^ uVar1;
  uVar1 = uVar1 << 5 ^ uVar1;
  *(uint *)(unaff_RBX + 0x1390) = uVar1;
  *(longlong *)(unaff_RBX + 0x1398) =
       *(longlong *)(&system_error_code + (longlong)*(int *)(unaff_RBX + 0x13a0) * 8) -
       (longlong)((float)(uVar1 - 1) * 0.00027939677 - 2e+06);
  *(int32_t *)(unaff_RBX + 0x1788) = 0;
  *(longlong *)(unaff_RBX + 0x1768) =
       *(longlong *)(&system_error_code + (longlong)*(int *)(unaff_RBX + 6000) * 8) +
       -0x8000000000000000;
  *(longlong *)(unaff_RBX + 0x1700) =
       *(longlong *)(&system_error_code + (longlong)*(int *)(unaff_RBX + 0x1708) * 8) + 10000;
  return;
}






// 函数: void FUN_1805c861f(void)
void FUN_1805c861f(void)

{
  return;
}






// 函数: void FUN_1805c8658(void)
void FUN_1805c8658(void)

{
  return;
}






// 函数: void FUN_1805c8666(void)
void FUN_1805c8666(void)

{
  uint uVar1;
  longlong unaff_RBX;
  
  uVar1 = *(uint *)(unaff_RBX + 0x1390) << 0xd ^ *(uint *)(unaff_RBX + 0x1390);
  uVar1 = uVar1 >> 0x11 ^ uVar1;
  uVar1 = uVar1 << 5 ^ uVar1;
  *(uint *)(unaff_RBX + 0x1390) = uVar1;
  *(longlong *)(unaff_RBX + 0x1398) =
       *(longlong *)(&system_error_code + (longlong)*(int *)(unaff_RBX + 0x13a0) * 8) -
       (longlong)((float)(uVar1 - 1) * 3.4924597e-05 - 200000.0);
  return;
}






