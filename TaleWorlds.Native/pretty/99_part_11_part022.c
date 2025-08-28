#include "TaleWorlds.Native.Split.h"

// 99_part_11_part022.c - 28 个函数

// 函数: void FUN_1806f0dbf(void)
void FUN_1806f0dbf(void)

{
  uint64_t *unaff_RBX;
  uint unaff_EBP;
  uint unaff_EDI;
  longlong *unaff_R12;
  code *in_stack_00000070;
  
  do {
    (**(code **)*unaff_RBX)();
    (*in_stack_00000070)();
    unaff_EDI = unaff_EDI + 1;
  } while (unaff_EDI < unaff_EBP);
  (**(code **)*unaff_RBX)();
  (**(code **)(*unaff_R12 + 0x10))();
  unaff_RBX[3] = 0;
  return;
}






// 函数: void FUN_1806f0e19(void)
void FUN_1806f0e19(void)

{
  uint64_t *unaff_RBX;
  longlong *unaff_R12;
  int8_t uStack0000000000000060;
  
  uStack0000000000000060 = 0;
  (**(code **)*unaff_RBX)();
  (**(code **)(*unaff_R12 + 0x10))();
  unaff_RBX[3] = 0;
  return;
}






// 函数: void FUN_1806f0e51(void)
void FUN_1806f0e51(void)

{
  return;
}






// 函数: void FUN_1806f0e70(longlong *param_1,uint64_t *param_2,uint param_3,longlong param_4,uint param_5,
void FUN_1806f0e70(longlong *param_1,uint64_t *param_2,uint param_3,longlong param_4,uint param_5,
                  uint64_t param_6,code *param_7)

{
  uint uVar1;
  code *pcVar2;
  void *puVar3;
  uint uVar4;
  int32_t uVar5;
  
  pcVar2 = param_7;
  uVar1 = param_5;
  if ((param_5 != 0) && (param_4 != 0)) {
    uVar4 = 0;
    if (param_5 != 0) {
      do {
        if ((uVar4 == 0) || (uVar4 % param_3 != 0)) {
          uVar5 = 1;
          puVar3 = &system_data_c8e4;
        }
        else {
          uVar5 = 4;
          puVar3 = &UNK_18094e480;
        }
        (**(code **)*param_2)(param_2,puVar3,uVar5);
        (*pcVar2)(param_2);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    param_5 = param_5 & 0xffffff00;
    (**(code **)*param_2)(param_2,&param_5,1);
    (**(code **)(*param_1 + 0x10))(param_1,param_6,param_2[4]);
    param_2[3] = 0;
  }
  return;
}






// 函数: void FUN_1806f0ea4(void)
void FUN_1806f0ea4(void)

{
  uint64_t *unaff_RBX;
  uint unaff_EBP;
  uint uVar1;
  longlong *unaff_R12;
  code *in_stack_00000070;
  
  uVar1 = 0;
  if (unaff_EBP != 0) {
    do {
      (**(code **)*unaff_RBX)();
      (*in_stack_00000070)();
      uVar1 = uVar1 + 1;
    } while (uVar1 < unaff_EBP);
  }
  (**(code **)*unaff_RBX)();
  (**(code **)(*unaff_R12 + 0x10))();
  unaff_RBX[3] = 0;
  return;
}






// 函数: void FUN_1806f0eaf(void)
void FUN_1806f0eaf(void)

{
  uint64_t *unaff_RBX;
  uint unaff_EBP;
  uint unaff_EDI;
  longlong *unaff_R12;
  code *in_stack_00000070;
  
  do {
    (**(code **)*unaff_RBX)();
    (*in_stack_00000070)();
    unaff_EDI = unaff_EDI + 1;
  } while (unaff_EDI < unaff_EBP);
  (**(code **)*unaff_RBX)();
  (**(code **)(*unaff_R12 + 0x10))();
  unaff_RBX[3] = 0;
  return;
}






// 函数: void FUN_1806f0f09(void)
void FUN_1806f0f09(void)

{
  uint64_t *unaff_RBX;
  longlong *unaff_R12;
  int8_t uStack0000000000000060;
  
  uStack0000000000000060 = 0;
  (**(code **)*unaff_RBX)();
  (**(code **)(*unaff_R12 + 0x10))();
  unaff_RBX[3] = 0;
  return;
}






// 函数: void FUN_1806f0f41(void)
void FUN_1806f0f41(void)

{
  return;
}






// 函数: void FUN_1806f0f70(uint64_t param_1,int16_t *param_2)
void FUN_1806f0f70(uint64_t param_1,int16_t *param_2)

{
  uint64_t *puVar1;
  int8_t auStack_88 [88];
  uint64_t uStack_30;
  
  uStack_30 = 0x1806f0f8d;
  puVar1 = (uint64_t *)FUN_1806c4e00(param_1,&UNK_180a063a0,*param_2);
  uStack_30 = 0x1806f0fa6;
  (**(code **)*puVar1)(puVar1,&system_data_c8e4,1);
  uStack_30 = 0x1806f0fba;
  puVar1 = (uint64_t *)FUN_1806c4e00(puVar1,&UNK_180a063a0,param_2[1]);
  uStack_30 = 0x1806f0fd3;
  (**(code **)*puVar1)(puVar1,&system_data_c8e4,1);
                    // WARNING: Subroutine does not return
  memset(auStack_88,0,0x80);
}






// 函数: void FUN_1806f1000(uint64_t param_1,int32_t *param_2)
void FUN_1806f1000(uint64_t param_1,int32_t *param_2)

{
  uint64_t *puVar1;
  int8_t auStack_88 [88];
  uint64_t uStack_30;
  
  uStack_30 = 0x1806f101c;
  puVar1 = (uint64_t *)FUN_1806c4e00(param_1,&UNK_180a063a0,*param_2);
  uStack_30 = 0x1806f1035;
  (**(code **)*puVar1)(puVar1,&system_data_c8e4,1);
  uStack_30 = 0x1806f1048;
  puVar1 = (uint64_t *)FUN_1806c4e00(puVar1,&UNK_180a063a0,param_2[1]);
  uStack_30 = 0x1806f1061;
  (**(code **)*puVar1)(puVar1,&system_data_c8e4,1);
                    // WARNING: Subroutine does not return
  memset(auStack_88,0,0x80);
}






// 函数: void FUN_1806f1080(uint64_t *param_1)
void FUN_1806f1080(uint64_t *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint64_t *puVar3;
  
  uVar2 = 0;
  puVar3 = (uint64_t *)param_1[2];
  uVar1 = (ulonglong)*(uint *)(param_1 + 3);
  if (puVar3 + *(uint *)(param_1 + 3) < puVar3) {
    uVar1 = uVar2;
  }
  if (uVar1 != 0) {
    do {
      (**(code **)(**(longlong **)*param_1 + 0x10))(*(longlong **)*param_1,*puVar3);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != uVar1);
  }
  *(int32_t *)(param_1 + 3) = 0;
  if ((*(int *)((longlong)param_1 + 0x4c) != 0) && (*(int *)((longlong)param_1 + 0x5c) != 0)) {
                    // WARNING: Subroutine does not return
    memset(param_1[8],0xffffffff,*(int *)((longlong)param_1 + 0x4c) * 4);
  }
  if (param_1[5] != 0) {
    (**(code **)(**(longlong **)param_1[4] + 0x10))();
  }
  if ((((*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)param_1 + 0x1c))) && (param_1[2] != 0)) {
    (**(code **)(**(longlong **)param_1[1] + 0x10))();
  }
  return;
}






// 函数: void FUN_1806f11b0(void)
void FUN_1806f11b0(void)

{
  int8_t auStack_88 [128];
  
                    // WARNING: Subroutine does not return
  memset(auStack_88,0,0x80);
}



uint64_t * FUN_1806f1240(uint64_t *param_1,uint param_2)

{
  *param_1 = &UNK_18094e3c0;
  param_1[1] = &UNK_18094e3d0;
  FUN_1806f1550(param_1[2],param_1[4]);
  param_1[1] = &UNK_180a23da0;
  *param_1 = &UNK_18094a210;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30);
  }
  return param_1;
}



longlong * FUN_1806f12b0(uint64_t *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lStackX_8;
  uint auStackX_10 [2];
  
  auStackX_10[0] = param_2 + 0x8fU & 0xffffff80;
  if ((*(int *)((longlong)param_1 + 0x5c) != 0) &&
     (uVar4 = ~(auStackX_10[0] << 0xf) + auStackX_10[0], uVar4 = (uVar4 >> 10 ^ uVar4) * 9,
     uVar4 = uVar4 ^ uVar4 >> 6, uVar4 = ~(uVar4 << 0xb) + uVar4,
     uVar4 = *(uint *)(param_1[8] +
                      (ulonglong)((uVar4 >> 0x10 ^ uVar4) & *(int *)((longlong)param_1 + 0x4c) - 1U)
                      * 4), uVar4 != 0xffffffff)) {
    do {
      uVar5 = (ulonglong)uVar4;
      if (*(uint *)(param_1[6] + uVar5 * 0x10) == auStackX_10[0]) {
        if ((uVar4 != 0xffffffff) && (lVar3 = uVar5 * 0x10 + param_1[6], lVar3 != 0)) {
          plVar1 = *(longlong **)(lVar3 + 8);
          lVar2 = *plVar1;
          *(longlong *)(lVar3 + 8) = lVar2;
          if (lVar2 == 0) {
            func_0x0001806f15d0(param_1 + 4,auStackX_10);
          }
          return plVar1 + 2;
        }
        break;
      }
      uVar4 = *(uint *)(param_1[7] + uVar5 * 4);
    } while (uVar4 != 0xffffffff);
  }
  uVar4 = auStackX_10[0];
  if (auStackX_10[0] < *(uint *)(param_1 + 0xc)) {
    uVar4 = *(uint *)(param_1 + 0xc);
  }
  lVar3 = (**(code **)(**(longlong **)*param_1 + 8))
                    (*(longlong **)*param_1,uVar4,&UNK_18094e3a0,&UNK_18094e340,0xc1);
  if (*(uint *)(param_1 + 3) < (*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff)) {
    *(longlong *)(param_1[2] + (ulonglong)*(uint *)(param_1 + 3) * 8) = lVar3;
    *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
  }
  else {
    lStackX_8 = lVar3;
    FUN_1806b4c20(param_1 + 1,&lStackX_8);
  }
  *(uint *)(lVar3 + 8) = uVar4;
  return (longlong *)(lVar3 + 0x10);
}



longlong FUN_1806f1350(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *in_RAX;
  longlong lVar1;
  int32_t unaff_EBX;
  longlong unaff_RDI;
  bool in_CF;
  longlong in_stack_00000040;
  
  if (in_CF) {
    unaff_EBX = *(int32_t *)(unaff_RDI + 0x60);
  }
  lVar1 = (**(code **)(*(longlong *)*in_RAX + 8))
                    ((longlong *)*in_RAX,unaff_EBX,param_3,param_4,0xc1);
  if (*(uint *)(unaff_RDI + 0x18) < (*(uint *)(unaff_RDI + 0x1c) & 0x7fffffff)) {
    *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + (ulonglong)*(uint *)(unaff_RDI + 0x18) * 8) =
         lVar1;
    *(int *)(unaff_RDI + 0x18) = *(int *)(unaff_RDI + 0x18) + 1;
  }
  else {
    in_stack_00000040 = lVar1;
    FUN_1806b4c20(unaff_RDI + 8,&stack0x00000040);
  }
  *(int32_t *)(lVar1 + 8) = unaff_EBX;
  return lVar1 + 0x10;
}



longlong * FUN_1806f1392(uint64_t param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong in_RAX;
  uint unaff_EBX;
  uint64_t *unaff_RDI;
  longlong in_stack_00000040;
  
  if ((param_3 != -1) && (param_2 = in_RAX * 0x10 + param_2, param_2 != 0)) {
    plVar1 = *(longlong **)(param_2 + 8);
    lVar2 = *plVar1;
    *(longlong *)(param_2 + 8) = lVar2;
    if (lVar2 == 0) {
      func_0x0001806f15d0(unaff_RDI + 4,&stack0x00000048);
    }
    return plVar1 + 2;
  }
  if (unaff_EBX < *(uint *)(unaff_RDI + 0xc)) {
    unaff_EBX = *(uint *)(unaff_RDI + 0xc);
  }
  lVar2 = (**(code **)(**(longlong **)*unaff_RDI + 8))
                    (*(longlong **)*unaff_RDI,unaff_EBX,&UNK_18094e3a0,&UNK_18094e340,0xc1);
  if (*(uint *)(unaff_RDI + 3) < (*(uint *)((longlong)unaff_RDI + 0x1c) & 0x7fffffff)) {
    *(longlong *)(unaff_RDI[2] + (ulonglong)*(uint *)(unaff_RDI + 3) * 8) = lVar2;
    *(int *)(unaff_RDI + 3) = *(int *)(unaff_RDI + 3) + 1;
  }
  else {
    in_stack_00000040 = lVar2;
    FUN_1806b4c20(unaff_RDI + 1,&stack0x00000040);
  }
  *(uint *)(lVar2 + 8) = unaff_EBX;
  return (longlong *)(lVar2 + 0x10);
}



longlong FUN_1806f13ce(void)

{
  longlong in_RAX;
  int32_t unaff_EBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + in_RAX * 8) = unaff_RSI;
  *(int *)(unaff_RDI + 0x18) = *(int *)(unaff_RDI + 0x18) + 1;
  *(int32_t *)(unaff_RSI + 8) = unaff_EBX;
  return unaff_RSI + 0x10;
}



longlong FUN_1806f1400(longlong param_1,int *param_2,int8_t *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    *param_3 = 0;
  }
  else {
    iVar1 = *param_2;
    uVar2 = ~(iVar1 << 0xf) + iVar1;
    uVar2 = (uVar2 >> 10 ^ uVar2) * 9;
    uVar2 = uVar2 ^ uVar2 >> 6;
    uVar2 = uVar2 + ~(uVar2 << 0xb);
    uVar4 = (ulonglong)((uVar2 >> 0x10 ^ uVar2) & *(int *)(param_1 + 0x2c) - 1U);
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x20) + uVar4 * 4);
    bVar5 = uVar2 == 0xffffffff;
    if (!bVar5) {
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar2 * 0x10) == iVar1) break;
        uVar2 = *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar2 * 4);
      } while (uVar2 != 0xffffffff);
      bVar5 = uVar2 == 0xffffffff;
    }
    *param_3 = !bVar5;
    if (!bVar5) {
      return (ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0x10);
    }
  }
  if (*(int *)(param_1 + 0x3c) != *(int *)(param_1 + 0x28)) goto LAB_1806f1509;
  uVar2 = *(uint *)(param_1 + 0x2c);
  if (uVar2 == 0) {
    uVar3 = 0x10;
LAB_1806f14c7:
    FUN_1806f1810(param_1,uVar3);
    uVar2 = *(uint *)(param_1 + 0x2c);
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar2 < uVar3) goto LAB_1806f14c7;
  }
  uVar3 = *param_2 + ~(*param_2 << 0xf);
  uVar3 = (uVar3 >> 10 ^ uVar3) * 9;
  uVar3 = uVar3 ^ uVar3 >> 6;
  uVar3 = uVar3 + ~(uVar3 << 0xb);
  uVar4 = (ulonglong)((uVar3 >> 0x10 ^ uVar3) & uVar2 - 1);
LAB_1806f1509:
  uVar2 = *(uint *)(param_1 + 0x34);
  *(uint *)(param_1 + 0x34) = uVar2 + 1;
  *(int32_t *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar2 * 4) =
       *(int32_t *)(*(longlong *)(param_1 + 0x20) + uVar4 * 4);
  *(uint *)(*(longlong *)(param_1 + 0x20) + uVar4 * 4) = uVar2;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return (ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0x10);
}






// 函数: void FUN_1806f1550(longlong param_1,longlong param_2)
void FUN_1806f1550(longlong param_1,longlong param_2)

{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t *puVar3;
  int32_t auStackX_10 [2];
  int32_t auStackX_18 [2];
  
  if (param_2 != 0) {
    puVar1 = (uint64_t *)(param_2 + -0x10);
    uVar2 = *(int32_t *)(param_2 + -8);
    *puVar1 = 0;
    auStackX_10[0] = uVar2;
    puVar3 = (int32_t *)func_0x0001806f1730(param_1 + 0x28,auStackX_10);
    if (puVar3 == (int32_t *)0x0) {
      auStackX_18[0] = uVar2;
      puVar3 = (int32_t *)FUN_1806f1400(param_1 + 0x28,auStackX_18,auStackX_10);
      if ((char)auStackX_10[0] != '\0') {
        return;
      }
      *puVar3 = uVar2;
    }
    else {
      *puVar1 = *(uint64_t *)(puVar3 + 2);
    }
    *(uint64_t **)(puVar3 + 2) = puVar1;
  }
  return;
}






// 函数: void FUN_1806f1559(longlong param_1,longlong param_2)
void FUN_1806f1559(longlong param_1,longlong param_2)

{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t *puVar3;
  char cStack0000000000000038;
  int32_t in_stack_00000040;
  
  puVar1 = (uint64_t *)(param_2 + -0x10);
  uVar2 = *(int32_t *)(param_2 + -8);
  *puVar1 = 0;
  _cStack0000000000000038 = uVar2;
  puVar3 = (int32_t *)func_0x0001806f1730(param_1 + 0x28,&stack0x00000038);
  if (puVar3 == (int32_t *)0x0) {
    in_stack_00000040 = uVar2;
    puVar3 = (int32_t *)FUN_1806f1400(param_1 + 0x28,&stack0x00000040,&stack0x00000038);
    if (cStack0000000000000038 != '\0') {
      return;
    }
    *puVar3 = uVar2;
  }
  else {
    *puVar1 = *(uint64_t *)(puVar3 + 2);
  }
  *(uint64_t **)(puVar3 + 2) = puVar1;
  return;
}






// 函数: void FUN_1806f15cb(void)
void FUN_1806f15cb(void)

{
  return;
}



uint64_t FUN_1806f17c0(longlong param_1,uint64_t param_2,int param_3)

{
  if (*(uint *)(param_1 + 0x14) + param_3 <= *(uint *)(param_1 + 0x10)) {
                    // WARNING: Subroutine does not return
    memcpy(param_2,(ulonglong)*(uint *)(param_1 + 0x14) + *(longlong *)(param_1 + 0x18),param_3);
  }
  return 0;
}






// 函数: void FUN_1806f1810(uint64_t *param_1,uint param_2)
void FUN_1806f1810(uint64_t *param_1,uint param_2)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 == 0) || ((param_2 & param_2 - 1) != 0)) {
    param_2 = param_2 >> 1 | param_2;
    param_2 = param_2 | param_2 >> 2;
    param_2 = param_2 | param_2 >> 4;
    param_2 = param_2 | param_2 >> 8;
    param_2 = (param_2 >> 0x10 | param_2) + 1;
  }
  iVar3 = (int)(longlong)((float)param_2 * *(float *)(param_1 + 6));
  iVar2 = param_2 * 4 + iVar3 * 4;
  uVar1 = (**(code **)(**(longlong **)*param_1 + 8))
                    (*(longlong **)*param_1,iVar3 * 0x10 + iVar2 + (-iVar2 & 0xfU),&UNK_18094b480,
                     &UNK_18094a650,0x174);
                    // WARNING: Subroutine does not return
  memset(uVar1,0xffffffff,param_2 * 4);
}






// 函数: void FUN_1806f19b0(longlong param_1,uint64_t param_2,int param_3)
void FUN_1806f19b0(longlong param_1,uint64_t param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(int *)(param_1 + 0x18) + param_3;
  if (*(uint *)(param_1 + 0x28) < uVar2) {
    uVar3 = 0x20;
    if (0x20 < uVar2) {
      do {
        uVar3 = uVar3 * 2;
      } while (uVar3 < uVar2);
    }
    lVar1 = FUN_1806f12b0(*(longlong *)(param_1 + 0x10) + 8,uVar3);
    if (*(int *)(param_1 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(lVar1,*(uint64_t *)(param_1 + 0x20),*(int *)(param_1 + 0x18));
    }
    FUN_1806f1550(*(uint64_t *)(param_1 + 0x10),*(uint64_t *)(param_1 + 0x20));
    *(uint *)(param_1 + 0x28) = uVar3;
    *(longlong *)(param_1 + 0x20) = lVar1;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
                    // WARNING: Subroutine does not return
  memcpy((ulonglong)*(uint *)(param_1 + 0x18) + lVar1,param_2,param_3);
}






// 函数: void FUN_1806f19d9(uint param_1)
void FUN_1806f19d9(uint param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong unaff_RDI;
  
  uVar2 = 0x20;
  if (0x20 < param_1) {
    do {
      uVar2 = uVar2 * 2;
    } while (uVar2 < param_1);
  }
  lVar1 = FUN_1806f12b0(*(longlong *)(unaff_RDI + 0x10) + 8,uVar2);
  if (*(int *)(unaff_RDI + 0x18) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lVar1,*(uint64_t *)(unaff_RDI + 0x20),*(int *)(unaff_RDI + 0x18));
  }
  FUN_1806f1550(*(uint64_t *)(unaff_RDI + 0x10),*(uint64_t *)(unaff_RDI + 0x20));
  *(uint *)(unaff_RDI + 0x28) = uVar2;
  *(longlong *)(unaff_RDI + 0x20) = lVar1;
                    // WARNING: Subroutine does not return
  memcpy((ulonglong)*(uint *)(unaff_RDI + 0x18) + lVar1);
}






// 函数: void FUN_1806f1a30(void)
void FUN_1806f1a30(void)

{
  longlong unaff_RDI;
  
                    // WARNING: Subroutine does not return
  memcpy((ulonglong)*(uint *)(unaff_RDI + 0x18) + *(longlong *)(unaff_RDI + 0x20));
}






// 函数: void FUN_1806f1a80(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4)
void FUN_1806f1a80(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4)

{
  uint64_t *puStack_3e8;
  longlong lStack_3e0;
  ulonglong uStack_3d8;
  uint64_t **ppuStack_3d0;
  uint64_t uStack_3c8;
  uint64_t uStack_3c0;
  longlong lStack_3b8;
  uint64_t uStack_3b0;
  uint64_t uStack_3a8;
  uint64_t uStack_3a0;
  int8_t auStack_398 [912];
  
  puStack_3e8 = *(uint64_t **)(param_3 + 0x10);
  lStack_3e0 = 0;
  uStack_3d8 = 0;
  FUN_1806f3080(auStack_398);
  ppuStack_3d0 = &puStack_3e8;
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  uStack_3c8 = param_2;
  uStack_3c0 = param_1;
  lStack_3b8 = param_3;
  uStack_3b0 = param_4;
  FUN_1806cf000(auStack_398,&ppuStack_3d0,0);
  ppuStack_3d0 = &puStack_3e8;
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  uStack_3c8 = param_2;
  uStack_3c0 = param_1;
  lStack_3b8 = param_3;
  uStack_3b0 = param_4;
  FUN_1806ce700(auStack_398,&ppuStack_3d0,0);
  if ((((uStack_3d8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_3d8)) && (lStack_3e0 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_3e8 + 0x10))();
  }
  return;
}






// 函数: void FUN_1806f1b90(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4)
void FUN_1806f1b90(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4)

{
  uint64_t *puStack_328;
  longlong lStack_320;
  ulonglong uStack_318;
  uint64_t **ppuStack_310;
  uint64_t uStack_308;
  uint64_t uStack_300;
  longlong lStack_2f8;
  uint64_t uStack_2f0;
  uint64_t uStack_2e8;
  uint64_t uStack_2e0;
  int8_t auStack_2d8 [720];
  
  puStack_328 = *(uint64_t **)(param_3 + 0x10);
  lStack_320 = 0;
  uStack_318 = 0;
  FUN_1806f3440(auStack_2d8);
  ppuStack_310 = &puStack_328;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  uStack_308 = param_2;
  uStack_300 = param_1;
  lStack_2f8 = param_3;
  uStack_2f0 = param_4;
  FUN_1806cf000(auStack_2d8,&ppuStack_310,0);
  ppuStack_310 = &puStack_328;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  uStack_308 = param_2;
  uStack_300 = param_1;
  lStack_2f8 = param_3;
  uStack_2f0 = param_4;
  FUN_1806cf610(auStack_2d8,&ppuStack_310,0);
  if ((((uStack_318 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_318)) && (lStack_320 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_328 + 0x10))();
  }
  return;
}






// 函数: void FUN_1806f1ca0(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4)
void FUN_1806f1ca0(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4)

{
  uint64_t *puStack_288;
  longlong lStack_280;
  ulonglong uStack_278;
  uint64_t **ppuStack_270;
  uint64_t uStack_268;
  uint64_t uStack_260;
  longlong lStack_258;
  uint64_t uStack_250;
  uint64_t uStack_248;
  uint64_t uStack_240;
  int8_t auStack_238 [560];
  
  puStack_288 = *(uint64_t **)(param_3 + 0x10);
  lStack_280 = 0;
  uStack_278 = 0;
  FUN_1806f3850(auStack_238);
  ppuStack_270 = &puStack_288;
  uStack_248 = 0;
  uStack_240 = 0;
  uStack_268 = param_2;
  uStack_260 = param_1;
  lStack_258 = param_3;
  uStack_250 = param_4;
  FUN_1806cf000(auStack_238,&ppuStack_270,0);
  ppuStack_270 = &puStack_288;
  uStack_248 = 0;
  uStack_240 = 0;
  uStack_268 = param_2;
  uStack_260 = param_1;
  lStack_258 = param_3;
  uStack_250 = param_4;
  FUN_1806cfa80(auStack_238,&ppuStack_270,0);
  if ((((uStack_278 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_278)) && (lStack_280 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_288 + 0x10))();
  }
  return;
}






// 函数: void FUN_1806f1db0(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4)
void FUN_1806f1db0(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4)

{
  uint64_t *puStack_2f8;
  longlong lStack_2f0;
  ulonglong uStack_2e8;
  uint64_t **ppuStack_2e0;
  uint64_t uStack_2d8;
  uint64_t uStack_2d0;
  longlong lStack_2c8;
  uint64_t uStack_2c0;
  uint64_t uStack_2b8;
  uint64_t uStack_2b0;
  int8_t auStack_2a8 [672];
  
  puStack_2f8 = *(uint64_t **)(param_3 + 0x10);
  lStack_2f0 = 0;
  uStack_2e8 = 0;
  FUN_1806f39b0(auStack_2a8);
  ppuStack_2e0 = &puStack_2f8;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2d8 = param_2;
  uStack_2d0 = param_1;
  lStack_2c8 = param_3;
  uStack_2c0 = param_4;
  FUN_1806cf000(auStack_2a8,&ppuStack_2e0,0);
  ppuStack_2e0 = &puStack_2f8;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2d8 = param_2;
  uStack_2d0 = param_1;
  lStack_2c8 = param_3;
  uStack_2c0 = param_4;
  FUN_1806d0f20(auStack_2a8,&ppuStack_2e0,0);
  if ((((uStack_2e8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_2e8)) && (lStack_2f0 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_2f8 + 0x10))();
  }
  return;
}






// 函数: void FUN_1806f1ec0(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4)
void FUN_1806f1ec0(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4)

{
  uint64_t *puStack_358;
  longlong lStack_350;
  ulonglong uStack_348;
  uint64_t **ppuStack_340;
  uint64_t uStack_338;
  uint64_t uStack_330;
  longlong lStack_328;
  uint64_t uStack_320;
  uint64_t uStack_318;
  uint64_t uStack_310;
  int8_t auStack_308 [768];
  
  puStack_358 = *(uint64_t **)(param_3 + 0x10);
  lStack_350 = 0;
  uStack_348 = 0;
  FUN_1806f3c00(auStack_308);
  ppuStack_340 = &puStack_358;
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_338 = param_2;
  uStack_330 = param_1;
  lStack_328 = param_3;
  uStack_320 = param_4;
  FUN_1806cf000(auStack_308,&ppuStack_340,0);
  ppuStack_340 = &puStack_358;
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_338 = param_2;
  uStack_330 = param_1;
  lStack_328 = param_3;
  uStack_320 = param_4;
  FUN_1806d12f0(auStack_308,&ppuStack_340,0);
  if ((((uStack_348 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_348)) && (lStack_350 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_358 + 0x10))();
  }
  return;
}






// 函数: void FUN_1806f1fd0(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4)
void FUN_1806f1fd0(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4)

{
  uint64_t *puStack_2d8;
  longlong lStack_2d0;
  ulonglong uStack_2c8;
  uint64_t **ppuStack_2c0;
  uint64_t uStack_2b8;
  uint64_t uStack_2b0;
  longlong lStack_2a8;
  uint64_t uStack_2a0;
  uint64_t uStack_298;
  uint64_t uStack_290;
  int8_t auStack_288 [640];
  
  puStack_2d8 = *(uint64_t **)(param_3 + 0x10);
  lStack_2d0 = 0;
  uStack_2c8 = 0;
  FUN_1806f3ea0(auStack_288);
  ppuStack_2c0 = &puStack_2d8;
  uStack_298 = 0;
  uStack_290 = 0;
  uStack_2b8 = param_2;
  uStack_2b0 = param_1;
  lStack_2a8 = param_3;
  uStack_2a0 = param_4;
  FUN_1806cf000(auStack_288,&ppuStack_2c0,0);
  ppuStack_2c0 = &puStack_2d8;
  uStack_298 = 0;
  uStack_290 = 0;
  uStack_2b8 = param_2;
  uStack_2b0 = param_1;
  lStack_2a8 = param_3;
  uStack_2a0 = param_4;
  FUN_1806d2430(auStack_288,&ppuStack_2c0,0);
  if ((((uStack_2c8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_2c8)) && (lStack_2d0 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_2d8 + 0x10))();
  }
  return;
}



uint64_t *
FUN_1806f20e0(longlong *param_1,uint64_t *param_2,longlong *param_3,uint64_t param_4,
             uint64_t *param_5,longlong *param_6)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  longlong *plVar4;
  uint64_t uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plStackX_10;
  longlong *aplStackX_18 [2];
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  uint64_t uStack_68;
  int32_t uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  int32_t uStack_40;
  
  plVar4 = (longlong *)0x0;
  plStackX_10 = (longlong *)0x0;
  aplStackX_18[0] = (longlong *)0x0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3f800000;
  cVar1 = (**(code **)(*param_3 + 0x18))(param_3,&UNK_18094e420);
  plVar6 = plVar4;
  plVar7 = plVar4;
  if (cVar1 != '\0') {
    bVar2 = FUN_1806c4940(param_3,param_6,&UNK_18094e498,&plStackX_10);
    bVar3 = FUN_1806c4940(param_3,param_6,&UNK_18094e4a0,aplStackX_18);
    (**(code **)(*param_3 + 0x48))(param_3);
    plVar6 = aplStackX_18[0];
    plVar7 = plStackX_10;
    if ((bVar2 & bVar3) == 0) goto FUN_1806f2215;
  }
  plVar4 = (longlong *)FUN_1806d8aa0(*param_5,plVar7,&uStack_58,plVar6,&uStack_78);
  if (plVar4 != (longlong *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 200))(plVar4);
    (**(code **)(*param_6 + 8))(param_6,uVar5,0);
    (**(code **)(*param_1 + 0x28))(param_1,plVar4,param_3,param_4,param_5,param_6);
  }
FUN_1806f2215:
  param_2[1] = plVar4;
  *param_2 = &UNK_18094bf98;
  param_2[2] = plVar4;
  return param_2;
}






// 函数: void FUN_1806f21a2(void)
void FUN_1806f21a2(void)

{
  longlong *plVar1;
  uint64_t *unaff_RSI;
  longlong *unaff_R12;
  longlong *unaff_R15;
  uint64_t *in_stack_000000d0;
  
  plVar1 = (longlong *)FUN_1806d8aa0(*in_stack_000000d0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 200))(plVar1);
    (**(code **)(*unaff_R15 + 8))();
    (**(code **)(*unaff_R12 + 0x28))();
  }
  unaff_RSI[1] = plVar1;
  *unaff_RSI = &UNK_18094bf98;
  unaff_RSI[2] = plVar1;
  return;
}






// 函数: void FUN_1806f2215(void)
void FUN_1806f2215(void)

{
  uint64_t *unaff_RSI;
  uint64_t unaff_RDI;
  
  unaff_RSI[1] = unaff_RDI;
  *unaff_RSI = &UNK_18094bf98;
  unaff_RSI[2] = unaff_RDI;
  return;
}



uint64_t *
FUN_1806f2240(longlong *param_1,uint64_t *param_2,longlong *param_3,uint64_t param_4,
             uint64_t *param_5,longlong *param_6)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  longlong *plVar4;
  uint64_t uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plStackX_10;
  longlong *aplStackX_18 [2];
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  uint64_t uStack_68;
  int32_t uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  int32_t uStack_40;
  
  plVar4 = (longlong *)0x0;
  plStackX_10 = (longlong *)0x0;
  aplStackX_18[0] = (longlong *)0x0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3f800000;
  cVar1 = (**(code **)(*param_3 + 0x18))(param_3,&UNK_18094e420);
  plVar6 = plVar4;
  plVar7 = plVar4;
  if (cVar1 != '\0') {
    bVar2 = FUN_1806c4940(param_3,param_6,&UNK_18094e498,&plStackX_10);
    bVar3 = FUN_1806c4940(param_3,param_6,&UNK_18094e4a0,aplStackX_18);
    (**(code **)(*param_3 + 0x48))(param_3);
    plVar6 = aplStackX_18[0];
    plVar7 = plStackX_10;
    if ((bVar2 & bVar3) == 0) goto FUN_1806f2375;
  }
  plVar4 = (longlong *)FUN_1806e6000(*param_5,plVar7,&uStack_58,plVar6,&uStack_78);
  if (plVar4 != (longlong *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 200))(plVar4);
    (**(code **)(*param_6 + 8))(param_6,uVar5,0);
    (**(code **)(*param_1 + 0x28))(param_1,plVar4,param_3,param_4,param_5,param_6);
  }
FUN_1806f2375:
  param_2[1] = plVar4;
  *param_2 = &UNK_18094bfa8;
  param_2[2] = plVar4;
  return param_2;
}






// 函数: void FUN_1806f2302(void)
void FUN_1806f2302(void)

{
  longlong *plVar1;
  uint64_t *unaff_RSI;
  longlong *unaff_R12;
  longlong *unaff_R15;
  uint64_t *in_stack_000000d0;
  
  plVar1 = (longlong *)FUN_1806e6000(*in_stack_000000d0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 200))(plVar1);
    (**(code **)(*unaff_R15 + 8))();
    (**(code **)(*unaff_R12 + 0x28))();
  }
  unaff_RSI[1] = plVar1;
  *unaff_RSI = &UNK_18094bfa8;
  unaff_RSI[2] = plVar1;
  return;
}






