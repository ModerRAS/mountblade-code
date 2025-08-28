#include "TaleWorlds.Native.Split.h"

// 03_rendering_part520.c - 30 个函数

// 函数: void FUN_18054a310(longlong param_1,uint64_t param_2)
void FUN_18054a310(longlong param_1,uint64_t param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  *(uint64_t *)(param_1 + 0x28) = param_2;
  iVar2 = (int)(*(longlong *)(param_1 + 0xe8) - *(longlong *)(param_1 + 0xe0) >> 3);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xe0) + lVar3 * 8);
      (**(code **)(*plVar1 + 0x1e0))(plVar1,param_2);
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x1a0);
  if (lVar3 != 0) {
    plVar1 = *(longlong **)(lVar3 + 0x48);
    *(uint64_t *)(lVar3 + 0x28) = param_2;
    if (plVar1 != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00018054a3a2. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*plVar1 + 0x1e0))(plVar1,param_2);
      return;
    }
  }
  return;
}





// 函数: void FUN_18054a32f(longlong param_1)
void FUN_18054a32f(longlong param_1)

{
  int in_EAX;
  longlong lVar1;
  uint64_t unaff_RSI;
  
  if (0 < in_EAX) {
    lVar1 = 0;
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xe0) + lVar1 * 8) + 0x1e0))();
      lVar1 = lVar1 + 1;
    } while (lVar1 < in_EAX);
  }
  lVar1 = *(longlong *)(param_1 + 0x1a0);
  if (lVar1 != 0) {
    *(uint64_t *)(lVar1 + 0x28) = unaff_RSI;
    if (*(longlong **)(lVar1 + 0x48) != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00018054a3a2. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x1e0))();
      return;
    }
  }
  return;
}





// 函数: void FUN_18054a343(void)
void FUN_18054a343(void)

{
  longlong lVar1;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  longlong unaff_RDI;
  
  lVar1 = 0;
  do {
    (**(code **)(**(longlong **)(*(longlong *)(unaff_RDI + 0xe0) + lVar1 * 8) + 0x1e0))();
    lVar1 = lVar1 + 1;
  } while (lVar1 < unaff_RBP);
  lVar1 = *(longlong *)(unaff_RDI + 0x1a0);
  if (lVar1 != 0) {
    *(uint64_t *)(lVar1 + 0x28) = unaff_RSI;
    if (*(longlong **)(lVar1 + 0x48) != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00018054a3a2. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x1e0))();
      return;
    }
  }
  return;
}





// 函数: void FUN_18054a374(void)
void FUN_18054a374(void)

{
  longlong lVar1;
  uint64_t unaff_RSI;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x1a0);
  if (lVar1 != 0) {
    *(uint64_t *)(lVar1 + 0x28) = unaff_RSI;
    if (*(longlong **)(lVar1 + 0x48) != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00018054a3a2. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x1e0))();
      return;
    }
  }
  return;
}





// 函数: void FUN_18054a38a(void)
void FUN_18054a38a(void)

{
  longlong in_RAX;
  uint64_t unaff_RSI;
  
  *(uint64_t *)(in_RAX + 0x28) = unaff_RSI;
  if (*(longlong **)(in_RAX + 0x48) != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00018054a3a2. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(**(longlong **)(in_RAX + 0x48) + 0x1e0))();
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18054a3b0(longlong param_1,uint64_t param_2,int32_t param_3)
void FUN_18054a3b0(longlong param_1,uint64_t param_2,int32_t param_3)

{
  longlong lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint auStackX_8 [2];
  int32_t auStackX_18 [2];
  int8_t auStackX_20 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x188);
  auStackX_18[0] = param_3;
  auStackX_8[0] = func_0x0001804bb950(lVar1);
  puVar3 = (uint64_t *)0x180c95e98;
  puVar2 = _DAT_180c95ea8;
  while (puVar2 != (uint64_t *)0x0) {
    if (*(uint *)(puVar2 + 4) < auStackX_8[0]) {
      puVar2 = (uint64_t *)*puVar2;
    }
    else {
      puVar3 = puVar2;
      puVar2 = (uint64_t *)puVar2[1];
    }
  }
  if ((puVar3 == (uint64_t *)0x180c95e98) || (auStackX_8[0] < *(uint *)(puVar3 + 4))) {
    puVar3 = (uint64_t *)FUN_1804c0610(0x180c95e98,auStackX_20,0,puVar3,auStackX_8);
    puVar3 = (uint64_t *)*puVar3;
  }
  FUN_1804b2300(puVar3[5],param_2,lVar1 + 0x3c,auStackX_18);
  return;
}





// 函数: void FUN_18054a450(longlong param_1)
void FUN_18054a450(longlong param_1)

{
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    if (*(longlong *)(param_1 + 0x198) == 0) {
      *(int8_t *)(param_1 + 0xd0) = 0;
      return;
    }
    *(int8_t *)(*(longlong *)(param_1 + 0x198) + 0xc0) = 0;
    if (*(char *)(*(longlong *)(param_1 + 0x198) + 0xc1) == '\x01') {
      FUN_180046190(param_1 + 0x30);
      *(int8_t *)(param_1 + 0xd0) = 0;
    }
  }
  return;
}





// 函数: void FUN_18054a4b0(longlong *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_18054a4b0(longlong *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar1 = param_1[1] - *param_1 >> 3;
  if (0 < (int)uVar1) {
    lVar2 = 0;
    uVar1 = uVar1 & 0xffffffff;
    do {
      (**(code **)(param_2 + 0x18))(*param_1 + lVar2,param_2);
      lVar2 = lVar2 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    (**(code **)(param_2 + 0x10))(param_2,0,0,param_4,uVar3);
  }
  return;
}





// 函数: void FUN_18054a540(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18054a540(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)*param_1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x1b0))
            (plStackX_8,*(int32_t *)*param_2,*(code **)(*plStackX_8 + 0x1b0),param_4,uVar1);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}





// 函数: void FUN_18054a5f0(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18054a5f0(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)*param_1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  piVar1 = (int *)*param_2;
  iVar2 = (**(code **)(*plStackX_8 + 0x1a8))(plStackX_8,param_2[1],param_3,param_4,uVar3);
  *piVar1 = *piVar1 + iVar2;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}





// 函数: void FUN_18054a6a0(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18054a6a0(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)*param_1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x1a0))
            (plStackX_8,*(int8_t *)*param_2,*(code **)(*plStackX_8 + 0x1a0),param_4,uVar1);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}





// 函数: void FUN_18054a750(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18054a750(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)*param_1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 400))(plStackX_8,*param_2,param_3,param_4,uVar1);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}





// 函数: void FUN_18054a800(longlong *param_1,uint64_t *param_2)
void FUN_18054a800(longlong *param_1,uint64_t *param_2)

{
  int iVar1;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)*param_1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  iVar1 = (**(code **)(*plStackX_8 + 0x180))();
  *(int *)*param_2 = *(int *)*param_2 + iVar1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}





// 函数: void FUN_18054a8b0(longlong *param_1,uint64_t *param_2)
void FUN_18054a8b0(longlong *param_1,uint64_t *param_2)

{
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)*param_1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x170))
            (plStackX_8,*param_2,*(int32_t *)param_2[1],*(code **)(*plStackX_8 + 0x170),uVar1);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}





// 函数: void FUN_18054a960(longlong *param_1,longlong *param_2)
void FUN_18054a960(longlong *param_1,longlong *param_2)

{
  uint64_t *puVar1;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)*param_2;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)*param_1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x168))(plStackX_8,*puVar1,puVar1[1],puVar1[2],uVar2);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18054a9d0(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int iVar4;
  
  iVar4 = (int)param_3;
  if (iVar4 == 3) {
    return 0x180c0ad10;
  }
  if (iVar4 == 4) {
    return *param_1;
  }
  if (iVar4 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(*param_1,param_2,param_3,param_4,0xfffffffffffffffe);
    }
  }
  else {
    if (iVar4 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,DAT_180bf65bc);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (iVar4 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}





// 函数: void FUN_18054aab0(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18054aab0(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  float *pfVar2;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)*param_1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  if (*(code **)(*plStackX_8 + 0x160) == (code *)&UNK_180277350) {
    FUN_180276f30(plStackX_8,(longlong)plStackX_8 + 0x214,0,param_4,uVar3);
  }
  else {
    (**(code **)(*plStackX_8 + 0x160))();
  }
  lVar1 = *param_2;
  if (*(code **)(*plStackX_8 + 0x198) == (code *)&UNK_18027d990) {
    pfVar2 = (float *)((longlong)plStackX_8 + 0x214);
  }
  else {
    pfVar2 = (float *)(**(code **)(*plStackX_8 + 0x198))();
  }
  if (*pfVar2 <= pfVar2[4]) {
    func_0x00018063a1e0(lVar1 + 0x120,pfVar2);
  }
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}





// 函数: void FUN_18054abc0(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18054abc0(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)*param_1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x148))(plStackX_8,*param_2,param_3,param_4,uVar1);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}





// 函数: void FUN_18054ac70(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18054ac70(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)*param_1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x128))(plStackX_8,*param_2,param_3,param_4,uVar1);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}





// 函数: void FUN_18054ad20(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18054ad20(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)*param_1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x120))
            (plStackX_8,*(int32_t *)*param_2,*(code **)(*plStackX_8 + 0x120),param_4,uVar1);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}





// 函数: void FUN_18054add0(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18054add0(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)*param_1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x118))(plStackX_8,*param_2,param_3,param_4,uVar1);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}





// 函数: void FUN_18054ae80(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18054ae80(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)*param_1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x110))(plStackX_8,*(int32_t *)*param_2,param_3,param_4,uVar1);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}





// 函数: void FUN_18054af30(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18054af30(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)*param_1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x108))(plStackX_8,*param_2,param_3,param_4,uVar1);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}





// 函数: void FUN_18054afe0(longlong *param_1,uint64_t *param_2)
void FUN_18054afe0(longlong *param_1,uint64_t *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)*param_1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  uVar2 = 0;
  uVar3 = uVar2;
  if (plStackX_8[8] - plStackX_8[7] >> 4 != 0) {
    do {
      *(int8_t *)(*(longlong *)(uVar3 + plStackX_8[7]) + 0xf5) = *(int8_t *)*param_2;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      uVar3 = uVar3 + 0x10;
    } while ((ulonglong)(longlong)(int)uVar1 < (ulonglong)(plStackX_8[8] - plStackX_8[7] >> 4));
  }
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}





// 函数: void FUN_18054b0d0(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18054b0d0(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)*param_1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x100))
            (plStackX_8,*(int8_t *)*param_2,*(code **)(*plStackX_8 + 0x100),param_4,uVar1);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}





// 函数: void FUN_18054b180(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18054b180(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)*param_1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0xf8))(plStackX_8,*param_2,param_3,param_4,uVar1);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}





// 函数: void FUN_18054b230(longlong *param_1)
void FUN_18054b230(longlong *param_1)

{
  longlong *plStackX_10;
  longlong **pplStackX_18;
  
  plStackX_10 = (longlong *)*param_1;
  if (plStackX_10 != (longlong *)0x0) {
    (**(code **)(*plStackX_10 + 0x28))();
  }
  pplStackX_18 = &plStackX_10;
  (**(code **)(*plStackX_10 + 0xd8))();
  if (plStackX_10 != (longlong *)0x0) {
    (**(code **)(*plStackX_10 + 0x38))();
  }
  return;
}





// 函数: void FUN_18054b2b0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18054b2b0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plStackX_10;
  longlong **pplStackX_18;
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  plStackX_10 = (longlong *)*param_1;
  if (plStackX_10 != (longlong *)0x0) {
    (**(code **)(*plStackX_10 + 0x28))();
  }
  pplStackX_18 = &plStackX_10;
  (**(code **)(*plStackX_10 + 0x1e0))(plStackX_10,0,param_3,param_4,uVar1);
  if (plStackX_10 != (longlong *)0x0) {
    (**(code **)(*plStackX_10 + 0x38))();
  }
  return;
}





// 函数: void FUN_18054b330(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18054b330(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)*param_1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0xd0))
            (plStackX_8,*(int8_t *)*param_2,*(code **)(*plStackX_8 + 0xd0),param_4,uVar1);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}





// 函数: void FUN_18054b3e0(longlong *param_1,uint64_t *param_2)
void FUN_18054b3e0(longlong *param_1,uint64_t *param_2)

{
  char cVar1;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)*param_1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  if (*(code **)(*plStackX_8 + 0xc0) == (code *)&UNK_180277e10) {
    cVar1 = (plStackX_8[8] - plStackX_8[7] & 0xfffffffffffffff0U) == 0;
  }
  else {
    cVar1 = (**(code **)(*plStackX_8 + 0xc0))();
  }
  if (cVar1 == '\0') {
    *(int8_t *)*param_2 = 0;
  }
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}





// 函数: void FUN_18054b4b0(longlong *param_1,uint64_t *param_2)
void FUN_18054b4b0(longlong *param_1,uint64_t *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  param_2 = (uint64_t *)*param_2;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)*param_1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  piVar1 = (int *)*param_2;
  iVar2 = (**(code **)(*plStackX_8 + 0xb8))
                    (plStackX_8,*(int32_t *)param_2[1],param_2[2],*(code **)(*plStackX_8 + 0xb8),
                     uVar3);
  *piVar1 = *piVar1 + iVar2;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18054b530(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c0a9f0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,DAT_180bf65bc,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



uint64_t *
FUN_18054b610(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &UNK_1809fcc28;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 9;
  strcpy_s(param_2[1],0x80,&DAT_180a34210,param_4,0,0xfffffffffffffffe);
  return param_2;
}



uint64_t * FUN_18054b690(uint64_t *param_1,ulonglong param_2)

{
  uint64_t *puVar1;
  longlong lVar2;
  
  *param_1 = &UNK_180a34440;
  puVar1 = (uint64_t *)param_1[0xd5];
  if (puVar1 != (uint64_t *)0x0) {
    lVar2 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar2);
    }
  }
  param_1[0xd5] = 0;
  puVar1 = (uint64_t *)param_1[0xd6];
  if (puVar1 != (uint64_t *)0x0) {
    lVar2 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar2);
    }
  }
  param_1[0xd6] = 0;
  puVar1 = (uint64_t *)param_1[0xd7];
  if (puVar1 != (uint64_t *)0x0) {
    lVar2 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar2);
    }
  }
  param_1[0xd7] = 0;
  puVar1 = (uint64_t *)param_1[0xd8];
  if (puVar1 != (uint64_t *)0x0) {
    lVar2 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar2);
    }
  }
  param_1[0xd8] = 0;
  *param_1 = &UNK_180a1b4b0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)((longlong)param_1 + 0x8c) = 8;
  FUN_180284720(param_1 + 0x12);
  FUN_18033aa70(param_1 + 0x12);
  if ((param_2 & 1) != 0) {
    free(param_1,0x6d0);
  }
  return param_1;
}



uint64_t * FUN_18054b820(uint64_t *param_1,int8_t param_2)

{
  FUN_180320470();
  *param_1 = &UNK_180a34440;
  *(int32_t *)((longlong)param_1 + 0x124) = 0;
  *(uint64_t *)((longlong)param_1 + 0xf4) = 0;
  *(uint64_t *)((longlong)param_1 + 0xfc) = 0;
  *(uint64_t *)((longlong)param_1 + 0x104) = 0;
  *(uint64_t *)((longlong)param_1 + 0x10c) = 0;
  *(uint64_t *)((longlong)param_1 + 0x114) = 0;
  *(uint64_t *)((longlong)param_1 + 0x11c) = 0;
  *(int32_t *)((longlong)param_1 + 0x694) = 0x41c64e6d;
  *(int8_t *)(param_1 + 0xd3) = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  *(int32_t *)((longlong)param_1 + 0x8c) = 6;
  *(int8_t *)(param_1 + 0xd9) = param_2;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



