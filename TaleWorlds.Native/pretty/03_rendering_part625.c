#include "TaleWorlds.Native.Split.h"

// 03_rendering_part625.c - 23 个函数

// 函数: void FUN_180615fc5(void)
void FUN_180615fc5(void)

{
  uint64_t uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  uint64_t *unaff_RBX;
  int32_t unaff_EBP;
  int16_t unaff_SI;
  uint64_t extraout_XMM0_Qa;
  longlong lStackX_20;
  
  lVar3 = __RTCastToVoid();
  (**(code **)*unaff_RBX)(extraout_XMM0_Qa,0);
  if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar3);
  }
  _DAT_180c92590 = 0;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x4c538,8,3);
  lVar3 = FUN_18056ca30(uVar1,unaff_SI,unaff_EBP);
  _DAT_180c92590 = lVar3;
  FUN_180645b70(lVar3 + 0x10);
  cVar2 = FUN_18056f700(lVar3,0);
  if (cVar2 != '\0') {
    func_0x0001805f6d90(&DAT_180c95bf0);
    lVar4 = _DAT_180c8ed58;
    if (_DAT_180c8ed58 == 0) {
      QueryPerformanceCounter(&lStackX_20);
      lVar4 = lStackX_20;
    }
    *(double *)(lVar3 + 0x700) = (double)(lVar4 - _DAT_180c8ed48) * _DAT_180c8ed50;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180615fef(void)
void FUN_180615fef(void)

{
  uint64_t uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int32_t unaff_EBP;
  int16_t unaff_SI;
  longlong lStackX_20;
  
  _DAT_180c92590 = 0;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x4c538,8,3);
  lVar3 = FUN_18056ca30(uVar1,unaff_SI,unaff_EBP);
  _DAT_180c92590 = lVar3;
  FUN_180645b70(lVar3 + 0x10);
  cVar2 = FUN_18056f700(lVar3,0);
  if (cVar2 != '\0') {
    func_0x0001805f6d90(&DAT_180c95bf0);
    lVar4 = _DAT_180c8ed58;
    if (_DAT_180c8ed58 == 0) {
      QueryPerformanceCounter(&lStackX_20);
      lVar4 = lStackX_20;
    }
    *(double *)(lVar3 + 0x700) = (double)(lVar4 - _DAT_180c8ed48) * _DAT_180c8ed50;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18061605e(void)
void FUN_18061605e(void)

{
  longlong lVar1;
  longlong unaff_RBX;
  longlong lStackX_20;
  
  func_0x0001805f6d90(&DAT_180c95bf0);
  lVar1 = _DAT_180c8ed58;
  if (_DAT_180c8ed58 == 0) {
    QueryPerformanceCounter(&lStackX_20);
    lVar1 = lStackX_20;
  }
  *(double *)(unaff_RBX + 0x700) = (double)(lVar1 - _DAT_180c8ed48) * _DAT_180c8ed50;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806160b0(uint64_t param_1,int16_t param_2)
void FUN_1806160b0(uint64_t param_1,int16_t param_2)

{
  longlong lVar1;
  char cVar2;
  int16_t uVar3;
  int iVar4;
  longlong lVar5;
  int8_t auStack_58 [32];
  uint64_t uStack_38;
  uint64_t uStack_30;
  int16_t uStack_28;
  int iStack_24;
  ulonglong uStack_20;
  
  lVar1 = _DAT_180c92598;
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_58;
  uStack_38 = 0;
  iStack_24 = 0;
  uStack_30 = 0;
  uStack_28 = param_2;
  lVar5 = gethostbyname();
  if ((lVar5 == 0) || (*(short *)(lVar5 + 0x10) != 2)) {
    iVar4 = inet_addr(param_1);
    if (iVar4 == -1) goto LAB_180616143;
  }
  else {
    iVar4 = *(int *)**(uint64_t **)(lVar5 + 0x18);
  }
  uStack_38 = CONCAT62(uStack_38._2_6_,2);
  iStack_24 = iVar4;
  uVar3 = htons(param_2);
  uStack_38 = CONCAT44(iStack_24,CONCAT22(uVar3,(int16_t)uStack_38));
LAB_180616143:
  cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,1,1);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,2,1);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,3,0x100000);
      if (cVar2 != '\0') {
        (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,4,0x40000);
      }
    }
  }
  *(uint64_t *)(lVar1 + 0x60c) = 0;
                    // WARNING: Subroutine does not return
  memset(*(uint64_t *)(lVar1 + 0x5e0),0,(longlong)(*(int *)(lVar1 + 0x5d8) >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180616230(void)
void FUN_180616230(void)

{
  char cVar1;
  
  cVar1 = (**(code **)(_DAT_180c925c8 + 0x30))(&DAT_180c925c8);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(_DAT_180c925c8 + 0x30))(&DAT_180c925c8);
    if (cVar1 != '\0') {
      (**(code **)(_DAT_180c925c8 + 0x18))(&DAT_180c925c8);
    }
                    // WARNING: Could not recover jumptable at 0x000180616281. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(_DAT_180c925a0 + 8))(&DAT_180c925a0);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1806162c0(int8_t param_1)

{
  int iVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  iVar1 = FUN_18055c6f0(&DAT_180c925a0);
  if (-1 < iVar1) {
    puVar2 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x50,8,3,uVar3);
    puVar2[1] = 0;
    *(int32_t *)(puVar2 + 6) = 0;
    uVar3 = _DAT_180c8ed30;
    puVar2[5] = _DAT_180c8ed30;
    *(int32_t *)(puVar2 + 8) = 0;
    puVar2[7] = uVar3;
    *(int32_t *)((longlong)puVar2 + 0x4c) = 0;
    *(int *)((longlong)puVar2 + 0x14) = iVar1;
    *(int32_t *)((longlong)puVar2 + 0x24) = 0x1010100;
    *(int32_t *)(puVar2 + 9) = 0xffffffff;
    *(int32_t *)(puVar2 + 3) = 0xffffffff;
    *(int8_t *)((longlong)puVar2 + 0x1c) = 0;
    *puVar2 = 0;
    *(int32_t *)(puVar2 + 2) = 0;
    *(int32_t *)(puVar2 + 4) = 0;
    *(int32_t *)(puVar2 + 9) = 0xffffffff;
    *(int32_t *)(puVar2 + 3) = 0xffffffff;
    *(int8_t *)((longlong)puVar2 + 0x1c) = 0;
    *puVar2 = 0;
    *(int32_t *)(puVar2 + 4) = 0;
    *(int16_t *)((longlong)puVar2 + 0x25) = 0x101;
    *(int8_t *)((longlong)puVar2 + 0x27) = 1;
    *(int *)((longlong)puVar2 + 0x14) = iVar1;
    *(int32_t *)(puVar2 + 2) = 1;
    *(int8_t *)((longlong)puVar2 + 0x24) = param_1;
    *(uint64_t **)((longlong)iVar1 * 8 + 0x180c92d30) = puVar2;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1806163c0(int32_t param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  longlong alStackX_10 [3];
  
  plVar1 = (longlong *)(**(code **)(_DAT_180c925a0 + 0x20))(&DAT_180c925a0,param_1);
  alStackX_10[0] = *plVar1;
  if (alStackX_10[0] != 0) {
    iVar2 = 0;
    uVar3 = _DAT_180c92ce0 - (longlong)_DAT_180c92cd8 >> 3;
    plVar1 = _DAT_180c92cd8;
    if (uVar3 != 0) {
      do {
        if (*plVar1 == alStackX_10[0]) {
          if (iVar2 == -1) {
            return 0;
          }
          FUN_18005ea90(0x180c95b78,alStackX_10);
          return 1;
        }
        iVar2 = iVar2 + 1;
        plVar1 = plVar1 + 1;
      } while ((ulonglong)(longlong)iVar2 < uVar3);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806163f0(void)
void FUN_1806163f0(void)

{
  void *puVar1;
  uint64_t *puVar2;
  
  if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
    puVar2 = (uint64_t *)&DAT_180c925a0;
    puVar1 = _DAT_180c925a0;
  }
  else {
    if ((_DAT_180c92514 != 1) && (_DAT_180c92514 != 4)) {
      return;
    }
    puVar1 = (void *)*_DAT_180c92590;
    puVar2 = _DAT_180c92590;
    if ((void *)*_DAT_180c92590 == &UNK_180a36660) {
      _DAT_180c92590[0x9892] = _DAT_180c92590[0x9891];
      return;
    }
  }
  (**(code **)(puVar1 + 0x10))(puVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806164e0(void)
void FUN_1806164e0(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  iVar4 = (int)_DAT_180c92514;
  if ((iVar4 != 0) && (iVar4 != 5)) {
    if (_DAT_180c92590 == (longlong *)0x0) {
      cVar1 = (**(code **)(_DAT_180c925c8 + 0x30))(&DAT_180c925c8);
      if (cVar1 == '\0') {
        return;
      }
      iVar4 = (int)_DAT_180c92514;
    }
    if (iVar4 - 2U < 2) {
      plVar5 = _DAT_180c92590;
      if (iVar4 != 1) {
        if (((iVar4 - 2U & 0xfffffffc) == 0) && (iVar4 != 4)) {
          plVar5 = (longlong *)&DAT_180c925a0;
        }
        else {
          plVar5 = (longlong *)0x0;
        }
      }
      iVar4 = 1;
      do {
        plVar2 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,iVar4);
        if ((int)plVar2[2] == 1) {
          plVar3 = (longlong *)(**(code **)(*_DAT_180c8ed00 + 0x70))(_DAT_180c8ed00,&UNK_180a3b7f0);
          plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,iVar4);
          plVar3 = (longlong *)(**(code **)(*plVar3 + 0x70))(plVar3,&UNK_180a3b9c8);
          plVar3 = (longlong *)
                   (**(code **)(*plVar3 + 0x28))(plVar3,(float)*(double *)(*plVar2 + 0x58e0));
          (**(code **)(*plVar3 + 0x70))(plVar3,&DAT_1809fcc18);
          plVar3 = (longlong *)(**(code **)(*_DAT_180c8ed00 + 0x70))(_DAT_180c8ed00,&UNK_180a3b9a8);
          plVar2 = (longlong *)
                   (**(code **)(*plVar3 + 0x28))(plVar3,(float)*(double *)(*plVar2 + 0x58e8));
          (**(code **)(*plVar2 + 0x70))(plVar2,&DAT_1809fcc18);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x3ff);
      plVar5 = (longlong *)(**(code **)(*_DAT_180c8ed00 + 0x70))(_DAT_180c8ed00,&UNK_180a3b9e8);
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x28))(plVar5,(float)_DAT_180c95bd0);
      (**(code **)(*plVar5 + 0x70))(plVar5,&UNK_180a3b9e0);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806164fc(int param_1)
void FUN_1806164fc(int param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  if (_DAT_180c92590 == (longlong *)0x0) {
    cVar1 = (**(code **)(_DAT_180c925c8 + 0x30))(&DAT_180c925c8);
    if (cVar1 == '\0') {
      return;
    }
    param_1 = (int)_DAT_180c92514;
  }
  if (param_1 - 2U < 2) {
    plVar5 = _DAT_180c92590;
    if (param_1 != 1) {
      if (((param_1 - 2U & 0xfffffffc) == 0) && (param_1 != 4)) {
        plVar5 = (longlong *)&DAT_180c925a0;
      }
      else {
        plVar5 = (longlong *)0x0;
      }
    }
    iVar4 = 1;
    do {
      plVar2 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,iVar4);
      if ((int)plVar2[2] == 1) {
        plVar3 = (longlong *)(**(code **)(*_DAT_180c8ed00 + 0x70))(_DAT_180c8ed00,&UNK_180a3b7f0);
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,iVar4);
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x70))(plVar3,&UNK_180a3b9c8);
        plVar3 = (longlong *)
                 (**(code **)(*plVar3 + 0x28))(plVar3,(float)*(double *)(*plVar2 + 0x58e0));
        (**(code **)(*plVar3 + 0x70))(plVar3,&DAT_1809fcc18);
        plVar3 = (longlong *)(**(code **)(*_DAT_180c8ed00 + 0x70))(_DAT_180c8ed00,&UNK_180a3b9a8);
        plVar2 = (longlong *)
                 (**(code **)(*plVar3 + 0x28))(plVar3,(float)*(double *)(*plVar2 + 0x58e8));
        (**(code **)(*plVar2 + 0x70))(plVar2,&DAT_1809fcc18);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x3ff);
    plVar5 = (longlong *)(**(code **)(*_DAT_180c8ed00 + 0x70))(_DAT_180c8ed00,&UNK_180a3b9e8);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x28))(plVar5,(float)_DAT_180c95bd0);
    (**(code **)(*plVar5 + 0x70))(plVar5,&UNK_180a3b9e0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180616540(int param_1)
void FUN_180616540(int param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *unaff_RDI;
  
  if (param_1 != 1) {
    if (((param_1 - 2U & 0xfffffffc) == 0) && (param_1 != 4)) {
      unaff_RDI = (longlong *)&DAT_180c925a0;
    }
    else {
      unaff_RDI = (longlong *)0x0;
    }
  }
  iVar3 = 1;
  do {
    plVar1 = (longlong *)(**(code **)(*unaff_RDI + 0x20))(unaff_RDI,iVar3);
    if ((int)plVar1[2] == 1) {
      plVar2 = (longlong *)(**(code **)(*_DAT_180c8ed00 + 0x70))(_DAT_180c8ed00,&UNK_180a3b7f0);
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x50))(plVar2,iVar3);
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x70))(plVar2,&UNK_180a3b9c8);
      plVar2 = (longlong *)
               (**(code **)(*plVar2 + 0x28))(plVar2,(float)*(double *)(*plVar1 + 0x58e0));
      (**(code **)(*plVar2 + 0x70))(plVar2,&DAT_1809fcc18);
      plVar2 = (longlong *)(**(code **)(*_DAT_180c8ed00 + 0x70))(_DAT_180c8ed00,&UNK_180a3b9a8);
      plVar1 = (longlong *)
               (**(code **)(*plVar2 + 0x28))(plVar2,(float)*(double *)(*plVar1 + 0x58e8));
      (**(code **)(*plVar1 + 0x70))(plVar1,&DAT_1809fcc18);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x3ff);
  plVar1 = (longlong *)(**(code **)(*_DAT_180c8ed00 + 0x70))(_DAT_180c8ed00,&UNK_180a3b9e8);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x28))(plVar1,(float)_DAT_180c95bd0);
  (**(code **)(*plVar1 + 0x70))(plVar1,&UNK_180a3b9e0);
  return;
}





// 函数: void FUN_180616684(void)
void FUN_180616684(void)

{
  return;
}





// 函数: void FUN_180616689(void)
void FUN_180616689(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180616690(void)
void FUN_180616690(void)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = (int)_DAT_180c92514;
  plVar2 = _DAT_180c92590;
  if ((iVar1 != 1) &&
     (((iVar1 - 2U & 0xfffffffc) != 0 || (plVar2 = (longlong *)&DAT_180c925a0, iVar1 == 4)))) {
    plVar2 = (longlong *)0x0;
  }
  iVar1 = 1;
  do {
    (**(code **)(*plVar2 + 0x20))(plVar2,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x3ff);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180616770(int32_t param_1,int param_2,uint64_t param_3,uint64_t param_4)
void FUN_180616770(int32_t param_1,int param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  longlong lVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  cVar1 = FUN_18061ca90();
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(_DAT_180c925a0 + 0x20))(&DAT_180c925a0,param_1,param_3,param_4,uVar3);
    if ((param_2 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x30))(param_2);
    }
    if ((*(int *)(lVar2 + 0x4c) != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x18))();
    }
    *(int *)(lVar2 + 0x4c) = param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180616800(int32_t param_1,longlong param_2,int param_3)
void FUN_180616800(int32_t param_1,longlong param_2,int param_3)

{
  char cVar1;
  uint64_t uVar2;
  
  cVar1 = FUN_18061ca90();
  if (cVar1 != '\0') {
    if (((param_2 != 0) || (param_3 != -1)) &&
       (cVar1 = FUN_18061ca10(param_2,param_3), cVar1 == '\0')) {
      return;
    }
    uVar2 = (**(code **)(_DAT_180c925a0 + 0x20))(&DAT_180c925a0,param_1);
    FUN_1805eda50(uVar2,param_2,param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180616870(int32_t param_1,int32_t param_2)
void FUN_180616870(int32_t param_1,int32_t param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_18061ca90();
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(_DAT_180c925a0 + 0x20))(&DAT_180c925a0,param_1);
    *(int32_t *)(lVar2 + 0x48) = param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1806168b0(uint param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)_DAT_180c92514;
  if (iVar2 == 1) {
    if (_DAT_180c92590 == 0) {
      return 0;
    }
  }
  else {
    if ((iVar2 - 2U & 0xfffffffc) != 0) {
      return 0;
    }
    if (iVar2 == 4) {
      return 0;
    }
  }
  if (((param_1 < 0x3ff) &&
      (lVar1 = (**(code **)(_DAT_180c925a0 + 0x20))(&DAT_180c925a0,param_1), lVar1 != 0)) &&
     (lVar1 = (**(code **)(_DAT_180c925a0 + 0x20))(&DAT_180c925a0,param_1),
     *(int *)(lVar1 + 0x10) == 1)) {
    return 1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180616930(int32_t param_1,int8_t param_2)
void FUN_180616930(int32_t param_1,int8_t param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(_DAT_180c925a0 + 0x20))(&DAT_180c925a0,param_1);
  *(int8_t *)(lVar1 + 0x1c) = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_180616960(int32_t param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(_DAT_180c925a0 + 0x20))(&DAT_180c925a0,param_1);
  return *(int8_t *)(lVar1 + 0x1c);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180616980(int32_t param_1,longlong param_2)
void FUN_180616980(int32_t param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  uint64_t uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  
  cVar2 = FUN_18061ca90();
  if (cVar2 != '\0') {
    plVar4 = (longlong *)(**(code **)(_DAT_180c925a0 + 0x20))(&DAT_180c925a0,param_1);
    iVar3 = *(int *)(param_2 + 0x52ed94);
    iVar6 = 0;
    iVar7 = iVar3;
    if (0 < iVar3) {
      lVar9 = 0;
      piVar8 = (int *)(param_2 + 0x30b0);
      do {
        iVar7 = iVar6;
        if (-1 < *piVar8) break;
        iVar6 = iVar6 + 1;
        lVar9 = lVar9 + 1;
        piVar8 = piVar8 + 0x298;
        iVar7 = iVar3;
      } while (lVar9 < iVar3);
    }
    if (iVar7 < *(int *)(param_2 + 0x52ed94)) {
      do {
        lVar9 = (longlong)iVar7 * 0xa60;
        if ((*(int *)(lVar9 + 0x3608 + param_2) == 1) &&
           (*(char *)(lVar9 + 0x36a4 + param_2) == '\0')) {
          lVar1 = *plVar4;
          if (*(char *)(lVar1 + 0x31) == '\0') {
            iVar3 = _Mtx_lock(lVar1 + 0x5990);
            if (iVar3 != 0) {
              __Throw_C_error_std__YAXH_Z(iVar3);
            }
            uVar5 = FUN_1805fa9a0(lVar1 + 0x50,0x28);
          }
          else {
            uVar5 = 0;
          }
          FUN_1805ae1e0(uVar5,*(int32_t *)(lVar9 + 0x30b0 + param_2),0);
          lVar9 = *plVar4;
          if (*(char *)(lVar9 + 0x31) == '\0') {
            FUN_1805faa20(lVar9 + 0x50);
            iVar3 = _Mtx_unlock(lVar9 + 0x5990);
            if (iVar3 != 0) {
              __Throw_C_error_std__YAXH_Z(iVar3);
            }
          }
        }
        iVar7 = (int)*(short *)(param_2 + 0x52dda0 + (longlong)iVar7 * 2);
      } while (iVar7 < *(int *)(param_2 + 0x52ed94));
    }
  }
  return;
}





// 函数: void FUN_1806169ac(void)
void FUN_1806169ac(void)

{
  longlong lVar1;
  int iVar2;
  longlong in_RAX;
  longlong *plVar3;
  uint64_t uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  longlong unaff_RSI;
  longlong lVar8;
  
  plVar3 = (longlong *)(**(code **)(in_RAX + 0x20))();
  iVar2 = *(int *)(unaff_RSI + 0x52ed94);
  iVar5 = 0;
  iVar6 = iVar2;
  if (0 < iVar2) {
    lVar8 = 0;
    piVar7 = (int *)(unaff_RSI + 0x30b0);
    do {
      iVar6 = iVar5;
      if (-1 < *piVar7) break;
      iVar5 = iVar5 + 1;
      lVar8 = lVar8 + 1;
      piVar7 = piVar7 + 0x298;
      iVar6 = iVar2;
    } while (lVar8 < iVar2);
  }
  if (iVar6 < *(int *)(unaff_RSI + 0x52ed94)) {
    do {
      lVar8 = (longlong)iVar6 * 0xa60;
      if ((*(int *)(lVar8 + 0x3608 + unaff_RSI) == 1) &&
         (*(char *)(lVar8 + 0x36a4 + unaff_RSI) == '\0')) {
        lVar1 = *plVar3;
        if (*(char *)(lVar1 + 0x31) == '\0') {
          iVar2 = _Mtx_lock(lVar1 + 0x5990);
          if (iVar2 != 0) {
            __Throw_C_error_std__YAXH_Z(iVar2);
          }
          uVar4 = FUN_1805fa9a0(lVar1 + 0x50,0x28);
        }
        else {
          uVar4 = 0;
        }
        FUN_1805ae1e0(uVar4,*(int32_t *)(lVar8 + 0x30b0 + unaff_RSI),0);
        lVar8 = *plVar3;
        if (*(char *)(lVar8 + 0x31) == '\0') {
          FUN_1805faa20(lVar8 + 0x50);
          iVar2 = _Mtx_unlock(lVar8 + 0x5990);
          if (iVar2 != 0) {
            __Throw_C_error_std__YAXH_Z(iVar2);
          }
        }
      }
      iVar6 = (int)*(short *)(unaff_RSI + 0x52dda0 + (longlong)iVar6 * 2);
    } while (iVar6 < *(int *)(unaff_RSI + 0x52ed94));
  }
  return;
}





// 函数: void FUN_1806169f5(int param_1)
void FUN_1806169f5(int param_1)

{
  longlong lVar1;
  int iVar2;
  uint64_t uVar3;
  longlong unaff_RSI;
  longlong lVar4;
  longlong *unaff_R14;
  
  do {
    lVar4 = (longlong)param_1 * 0xa60;
    if ((*(int *)(lVar4 + 0x3608 + unaff_RSI) == 1) &&
       (*(char *)(lVar4 + 0x36a4 + unaff_RSI) == '\0')) {
      lVar1 = *unaff_R14;
      if (*(char *)(lVar1 + 0x31) == '\0') {
        iVar2 = _Mtx_lock(lVar1 + 0x5990);
        if (iVar2 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar2);
        }
        uVar3 = FUN_1805fa9a0(lVar1 + 0x50,0x28);
      }
      else {
        uVar3 = 0;
      }
      FUN_1805ae1e0(uVar3,*(int32_t *)(lVar4 + 0x30b0 + unaff_RSI),0);
      lVar4 = *unaff_R14;
      if (*(char *)(lVar4 + 0x31) == '\0') {
        FUN_1805faa20(lVar4 + 0x50);
        iVar2 = _Mtx_unlock(lVar4 + 0x5990);
        if (iVar2 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar2);
        }
      }
    }
    param_1 = (int)*(short *)(unaff_RSI + 0x52dda0 + (longlong)param_1 * 2);
  } while (param_1 < *(int *)(unaff_RSI + 0x52ed94));
  return;
}





// 函数: void FUN_180616aad(void)
void FUN_180616aad(void)

{
  return;
}





// 函数: void FUN_180616ab2(void)
void FUN_180616ab2(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180616ac0(int32_t param_1,int8_t param_2,int8_t param_3)
void FUN_180616ac0(int32_t param_1,int8_t param_2,int8_t param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_18061ca90();
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(_DAT_180c925a0 + 0x20))(&DAT_180c925a0,param_1);
    *(int8_t *)(lVar2 + 0x27) = param_3;
    *(int8_t *)(lVar2 + 0x25) = param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180616b10(int32_t param_1,char param_2)
void FUN_180616b10(int32_t param_1,char param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar2 = _Mtx_lock(0x180c95d70);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  cVar1 = FUN_18061ca90(param_1);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)(**(code **)(_DAT_180c925a0 + 0x20))(&DAT_180c925a0,param_1);
    if (*plVar3 != 0) {
      if (param_2 == '\0') {
        _DAT_180c95dd0 = FUN_1805b5900();
      }
      else {
        _DAT_180c95dd0 = FUN_1805b5ad0();
      }
      _DAT_180c95dc0 = param_1;
      FUN_180645c10(_DAT_180c95dd0,1,&UNK_1809fb028);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



