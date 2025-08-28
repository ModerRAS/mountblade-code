#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part134.c - 4 个函数

// 函数: void FUN_1801315b4(uint param_1,int32_t *param_2,longlong param_3)
void FUN_1801315b4(uint param_1,int32_t *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong unaff_RBX;
  int unaff_EBP;
  ulonglong uVar5;
  int *piVar6;
  float *unaff_RDI;
  bool in_ZF;
  float fVar7;
  float fVar8;
  int unaff_XMM6_Da;
  int unaff_XMM6_Db;
  int unaff_XMM6_Dc;
  int unaff_XMM6_Dd;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  uVar5 = 0x1d38;
  if (!in_ZF) {
    uVar5 = (ulonglong)param_1;
  }
  piVar6 = (int *)(uVar5 + param_3);
  if (*(char *)(param_3 + 0x1d21) != '\0') {
    fStack0000000000000028 = (float)param_2[2];
    fStack000000000000002c = (float)param_2[3];
    if ((*(int *)(param_3 + 0x1cfc) == *(int *)(*(longlong *)(param_3 + 0x1af8) + 0x16c)) &&
       (cVar4 = FUN_180131060(piVar6,&stack0x00000020,param_3,*(longlong *)(param_3 + 0x1af8),
                              *param_2), cVar4 != '\0')) {
      *piVar6 = unaff_EBP;
      *(longlong *)(piVar6 + 2) = unaff_RBX;
      piVar6[7] = unaff_XMM6_Da;
      piVar6[8] = unaff_XMM6_Db;
      piVar6[9] = unaff_XMM6_Dc;
      piVar6[10] = unaff_XMM6_Dd;
    }
  }
  if (((((*(byte *)(param_3 + 0x1d24) & 0x20) != 0) &&
       (fVar1 = unaff_RDI[1], fVar1 < *(float *)(unaff_RBX + 0x234))) &&
      (fVar2 = unaff_RDI[3],
      *(float *)(unaff_RBX + 0x22c) <= fVar2 && fVar2 != *(float *)(unaff_RBX + 0x22c))) &&
     ((*unaff_RDI <= *(float *)(unaff_RBX + 0x230) && *(float *)(unaff_RBX + 0x230) != *unaff_RDI &&
      (*(float *)(unaff_RBX + 0x228) < unaff_RDI[2])))) {
    fVar8 = *(float *)(unaff_RBX + 0x22c);
    fVar3 = *(float *)(unaff_RBX + 0x234);
    fVar7 = fVar8;
    if ((fVar8 <= fVar2) && (fVar7 = fVar3, fVar2 <= fVar3)) {
      fVar7 = fVar2;
    }
    if ((fVar8 <= fVar1) && (fVar8 = fVar3, fVar1 <= fVar3)) {
      fVar8 = fVar1;
    }
    if ((fVar2 - fVar1) * 0.7 <= fVar7 - fVar8) {
      fStack0000000000000028 = unaff_RDI[2];
      fStack000000000000002c = unaff_RDI[3];
      if ((*(int *)(param_3 + 0x1cfc) == *(int *)(*(longlong *)(param_3 + 0x1af8) + 0x16c)) &&
         (cVar4 = FUN_180131060(param_3 + 0x1d68,&stack0x00000020,fVar8,
                                *(longlong *)(param_3 + 0x1af8),*unaff_RDI), cVar4 != '\0')) {
        *(int *)(param_3 + 0x1d68) = unaff_EBP;
        *(longlong *)(param_3 + 0x1d70) = unaff_RBX;
        *(int *)(param_3 + 0x1d84) = unaff_XMM6_Da;
        *(int *)(param_3 + 0x1d88) = unaff_XMM6_Db;
        *(int *)(param_3 + 0x1d8c) = unaff_XMM6_Dc;
        *(int *)(param_3 + 0x1d90) = unaff_XMM6_Dd;
      }
    }
  }
  if (*(int *)(param_3 + 0x1ca0) == unaff_EBP) {
    *(longlong *)(param_3 + 0x1c98) = unaff_RBX;
    *(int32_t *)(param_3 + 0x1cfc) = *(int32_t *)(unaff_RBX + 0x16c);
    *(int8_t *)(param_3 + 0x1d04) = 1;
    *(int32_t *)(param_3 + 0x1d00) = *(int32_t *)(unaff_RBX + 0x3f4);
    piVar6 = (int *)(unaff_RBX + ((longlong)*(int *)(unaff_RBX + 0x16c) + 0x3d) * 0x10);
    *piVar6 = unaff_XMM6_Da;
    piVar6[1] = unaff_XMM6_Db;
    piVar6[2] = unaff_XMM6_Dc;
    piVar6[3] = unaff_XMM6_Dd;
  }
  return;
}





// 函数: void FUN_18013161b(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_18013161b(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  int32_t *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  longlong unaff_RBX;
  int unaff_EBP;
  float *unaff_RDI;
  float fVar6;
  float fVar7;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  fVar2 = unaff_RDI[1];
  if ((((fVar2 < *(float *)(unaff_RBX + 0x234)) &&
       (fVar3 = unaff_RDI[3],
       *(float *)(unaff_RBX + 0x22c) <= fVar3 && fVar3 != *(float *)(unaff_RBX + 0x22c))) &&
      (*unaff_RDI <= *(float *)(unaff_RBX + 0x230) && *(float *)(unaff_RBX + 0x230) != *unaff_RDI))
     && (*(float *)(unaff_RBX + 0x228) < unaff_RDI[2])) {
    fVar7 = *(float *)(unaff_RBX + 0x22c);
    fVar4 = *(float *)(unaff_RBX + 0x234);
    fVar6 = fVar7;
    if ((fVar7 <= fVar3) && (fVar6 = fVar4, fVar3 <= fVar4)) {
      fVar6 = fVar3;
    }
    if ((fVar7 <= fVar2) && (fVar7 = fVar4, fVar2 <= fVar4)) {
      fVar7 = fVar2;
    }
    if ((fVar3 - fVar2) * 0.7 <= fVar6 - fVar7) {
      fStack0000000000000028 = unaff_RDI[2];
      fStack000000000000002c = unaff_RDI[3];
      if ((*(int *)(param_3 + 0x1cfc) == *(int *)(*(longlong *)(param_3 + 0x1af8) + 0x16c)) &&
         (cVar5 = FUN_180131060(param_3 + 0x1d68,&stack0x00000020,fVar7,
                                *(longlong *)(param_3 + 0x1af8),*unaff_RDI), cVar5 != '\0')) {
        *(int *)(param_3 + 0x1d68) = unaff_EBP;
        *(longlong *)(param_3 + 0x1d70) = unaff_RBX;
        *(int32_t *)(param_3 + 0x1d84) = unaff_XMM6_Da;
        *(int32_t *)(param_3 + 0x1d88) = unaff_XMM6_Db;
        *(int32_t *)(param_3 + 0x1d8c) = unaff_XMM6_Dc;
        *(int32_t *)(param_3 + 0x1d90) = unaff_XMM6_Dd;
      }
    }
  }
  if (*(int *)(param_3 + 0x1ca0) == unaff_EBP) {
    *(longlong *)(param_3 + 0x1c98) = unaff_RBX;
    *(int32_t *)(param_3 + 0x1cfc) = *(int32_t *)(unaff_RBX + 0x16c);
    *(int8_t *)(param_3 + 0x1d04) = 1;
    *(int32_t *)(param_3 + 0x1d00) = *(int32_t *)(unaff_RBX + 0x3f4);
    puVar1 = (int32_t *)(unaff_RBX + ((longlong)*(int *)(unaff_RBX + 0x16c) + 0x3d) * 0x10);
    *puVar1 = unaff_XMM6_Da;
    puVar1[1] = unaff_XMM6_Db;
    puVar1[2] = unaff_XMM6_Dc;
    puVar1[3] = unaff_XMM6_Dd;
  }
  return;
}





// 函数: void FUN_180131701(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_180131701(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  int32_t *puVar1;
  longlong unaff_RBX;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  
  *(longlong *)(param_3 + 0x1c98) = unaff_RBX;
  *(int32_t *)(param_3 + 0x1cfc) = *(int32_t *)(unaff_RBX + 0x16c);
  *(int8_t *)(param_3 + 0x1d04) = 1;
  *(int32_t *)(param_3 + 0x1d00) = *(int32_t *)(unaff_RBX + 0x3f4);
  puVar1 = (int32_t *)(unaff_RBX + ((longlong)*(int *)(unaff_RBX + 0x16c) + 0x3d) * 0x10);
  *puVar1 = unaff_XMM6_Da;
  puVar1[1] = unaff_XMM6_Db;
  puVar1[2] = unaff_XMM6_Dc;
  puVar1[3] = unaff_XMM6_Dd;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801319b0(int param_1,int param_2)
void FUN_1801319b0(int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_2 == 0) {
    return;
  }
  fVar2 = *(float *)(_DAT_180c8a9b0 + 0x1488 + (longlong)param_1 * 4);
  if (fVar2 < 0.0) {
    if (param_2 != 2) {
      return;
    }
    pfVar1 = (float *)(_DAT_180c8a9b0 + 0x14dc + (longlong)param_1 * 4);
    if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
      return;
    }
    return;
  }
  if (param_2 == 1) {
    if (fVar2 != 0.0) {
      return;
    }
    return;
  }
  if (param_2 == 3) {
    fVar4 = *(float *)(_DAT_180c8a9b0 + 0x94) * 0.8;
  }
  else {
    if (param_2 == 4) {
      fVar3 = *(float *)(_DAT_180c8a9b0 + 0x90);
      fVar4 = *(float *)(_DAT_180c8a9b0 + 0x94) + *(float *)(_DAT_180c8a9b0 + 0x94);
      goto LAB_180131a76;
    }
    if (param_2 != 5) {
      return;
    }
    fVar4 = *(float *)(_DAT_180c8a9b0 + 0x94) * 0.3;
  }
  fVar3 = *(float *)(_DAT_180c8a9b0 + 0x90) * 0.8;
LAB_180131a76:
  func_0x000180128180(param_1,fVar2 - *(float *)(_DAT_180c8a9b0 + 0x18),fVar3,fVar4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float * FUN_180131aa0(float *param_1,uint param_2,uint param_3,float param_4,float param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar3 = (ulonglong)param_3;
  uVar2 = (ulonglong)param_2;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  fVar7 = 0.0;
  if ((param_2 & 1) != 0) {
    fVar7 = (float)FUN_1801319b0(0x14,param_3);
    fVar4 = (float)FUN_1801319b0(0x13);
    fVar5 = (float)FUN_1801319b0(0x12);
    fVar6 = (float)FUN_1801319b0(0x11);
    fVar7 = (fVar7 - fVar4) + param_1[1];
    param_1[1] = fVar7;
    *param_1 = (fVar5 - fVar6) + *param_1;
  }
  if ((uVar2 & 2) != 0) {
    fVar7 = (float)FUN_1801319b0(7,uVar3 & 0xffffffff);
    fVar4 = (float)FUN_1801319b0(6);
    fVar5 = (float)FUN_1801319b0(5);
    fVar6 = (float)FUN_1801319b0(4);
    fVar7 = (fVar7 - fVar4) + param_1[1];
    param_1[1] = fVar7;
    *param_1 = (fVar5 - fVar6) + *param_1;
  }
  if ((uVar2 & 4) != 0) {
    fVar7 = (float)FUN_1801319b0(0xb,uVar3 & 0xffffffff);
    fVar4 = (float)FUN_1801319b0(10);
    fVar5 = (float)FUN_1801319b0(9);
    fVar6 = (float)FUN_1801319b0(8);
    fVar7 = (fVar7 - fVar4) + param_1[1];
    param_1[1] = fVar7;
    *param_1 = (fVar5 - fVar6) + *param_1;
  }
  lVar1 = _DAT_180c8a9b0;
  if ((param_4 != 0.0) && (0.0 < *(float *)(_DAT_180c8a9b0 + 0x370))) {
    fVar7 = fVar7 * param_4;
    param_1[1] = fVar7;
    *param_1 = param_4 * *param_1;
  }
  if ((param_5 != 0.0) && (0.0 < *(float *)(lVar1 + 0x374))) {
    param_1[1] = fVar7 * param_5;
    *param_1 = param_5 * *param_1;
    return param_1;
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float * FUN_180131aac(float *param_1,uint param_2,uint param_3,float param_4)

{
  longlong lVar1;
  uint64_t in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_stack_00000090;
  
  uVar3 = (ulonglong)param_3;
  uVar2 = (ulonglong)param_2;
  *(uint64_t *)param_1 = in_RAX;
  fVar7 = 0.0;
  if ((param_2 & 1) != 0) {
    fVar7 = (float)FUN_1801319b0((int)in_RAX + 0x14,param_3);
    fVar4 = (float)FUN_1801319b0(0x13);
    fVar5 = (float)FUN_1801319b0(0x12);
    fVar6 = (float)FUN_1801319b0(0x11);
    fVar7 = (fVar7 - fVar4) + param_1[1];
    param_1[1] = fVar7;
    *param_1 = (fVar5 - fVar6) + *param_1;
  }
  if ((uVar2 & 2) != 0) {
    fVar7 = (float)FUN_1801319b0(7,uVar3 & 0xffffffff);
    fVar4 = (float)FUN_1801319b0(6);
    fVar5 = (float)FUN_1801319b0(5);
    fVar6 = (float)FUN_1801319b0(4);
    fVar7 = (fVar7 - fVar4) + param_1[1];
    param_1[1] = fVar7;
    *param_1 = (fVar5 - fVar6) + *param_1;
  }
  if ((uVar2 & 4) != 0) {
    fVar7 = (float)FUN_1801319b0(0xb,uVar3 & 0xffffffff);
    fVar4 = (float)FUN_1801319b0(10);
    fVar5 = (float)FUN_1801319b0(9);
    fVar6 = (float)FUN_1801319b0(8);
    fVar7 = (fVar7 - fVar4) + param_1[1];
    param_1[1] = fVar7;
    *param_1 = (fVar5 - fVar6) + *param_1;
  }
  lVar1 = _DAT_180c8a9b0;
  if ((param_4 != 0.0) && (0.0 < *(float *)(_DAT_180c8a9b0 + 0x370))) {
    fVar7 = fVar7 * param_4;
    param_1[1] = fVar7;
    *param_1 = param_4 * *param_1;
  }
  if ((in_stack_00000090 != 0.0) && (0.0 < *(float *)(lVar1 + 0x374))) {
    param_1[1] = fVar7 * in_stack_00000090;
    *param_1 = in_stack_00000090 * *param_1;
    return param_1;
  }
  return param_1;
}



float * FUN_180131be4(uint64_t param_1,float param_2,uint64_t param_3,float *param_4)

{
  longlong in_RAX;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float in_stack_00000090;
  
  if (unaff_XMM8_Da < *(float *)(in_RAX + 0x370)) {
    param_2 = param_2 * unaff_XMM9_Da;
    param_4[1] = param_2;
    *param_4 = unaff_XMM9_Da * *param_4;
  }
  if ((in_stack_00000090 != unaff_XMM8_Da) && (unaff_XMM8_Da < *(float *)(in_RAX + 0x374))) {
    param_4[1] = param_2 * in_stack_00000090;
    *param_4 = in_stack_00000090 * *param_4;
    return param_4;
  }
  return param_4;
}



float * FUN_180131c21(uint64_t param_1,float param_2,float param_3,float *param_4)

{
  longlong in_RAX;
  float unaff_XMM8_Da;
  
  if (unaff_XMM8_Da < *(float *)(in_RAX + 0x374)) {
    param_4[1] = param_2 * param_3;
    *param_4 = param_3 * *param_4;
    return param_4;
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



