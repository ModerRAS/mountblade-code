#include "TaleWorlds.Native.Split.h"

// 99_part_01_part069.c - 13 个函数

// 函数: void FUN_1800e8362(longlong param_1,longlong param_2)
void FUN_1800e8362(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong unaff_RSI;
  uint64_t in_stack_00000030;
  ulonglong in_stack_00000078;
  uint64_t in_stack_00000080;
  uint64_t in_stack_00000088;
  
  uVar5 = 0;
  *(uint64_t *)(*(longlong *)(param_1 + 0x1cd8) + 0x83f0) = 0;
  FUN_18029de40(*(uint64_t *)(param_1 + 0x1cd8),
                (*(uint *)(param_2 + 4) & 0x4000000 | 0x18000000) >> 0x1a);
  lVar1 = FUN_180245280();
  if (*(int *)(lVar1 + 0x160) == 5) {
    uVar3 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
  }
  else {
    uVar3 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
  }
  FUN_18029d150(uVar3,0x10,lVar1,0x10,0xffffffff);
  lVar2 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  *(longlong *)(lVar1 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
  lVar4 = lVar1 + 0x1a0;
  if ((((*(longlong *)(lVar2 + 0x8540) != lVar4) || (*(int *)(lVar2 + 0x88bc) != -1)) ||
      (*(int *)(lVar2 + 0x8abc) != 0x10)) &&
     (((lVar4 == 0 || (*(longlong *)(lVar1 + 0x1a8) != 0)) || (*(longlong *)(lVar1 + 0x1b0) != 0))))
  {
    in_stack_00000078 = uVar5;
    if (lVar4 != 0) {
      in_stack_00000078 = *(ulonglong *)(lVar1 + 0x1b0);
    }
    (**(code **)(**(longlong **)(lVar2 + 0x8400) + 0x40))
              (*(longlong **)(lVar2 + 0x8400),0x21,1,&stack0x00000078);
    *(longlong *)(lVar2 + 0x8540) = lVar4;
    *(int32_t *)(lVar2 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar2 + 0x8abc) = 0x10;
    *(int *)(lVar2 + 0x82b4) = *(int *)(lVar2 + 0x82b4) + 1;
  }
  for (; (ulonglong)(longlong)(int)uVar5 < (ulonglong)*(uint *)(unaff_RSI + 0x2108);
      uVar5 = (ulonglong)((int)uVar5 + 1)) {
    FUN_1800e8640();
  }
  lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  if (((*(longlong *)(lVar1 + 0x84b8) != 0) || (*(int *)(lVar1 + 0x8878) != -1)) ||
     (lVar2 = _DAT_180c86938, *(int *)(lVar1 + 0x8a78) != 0x10)) {
    in_stack_00000080 = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
              (*(longlong **)(lVar1 + 0x8400),0x10,1,&stack0x00000080);
    lVar2 = _DAT_180c86938;
    *(uint64_t *)(lVar1 + 0x84b8) = 0;
    *(int32_t *)(lVar1 + 0x8878) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a78) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(longlong *)(lVar2 + 0x1cd8);
  if (((*(longlong *)(lVar1 + 0x8540) != 0) || (*(int *)(lVar1 + 0x88bc) != -1)) ||
     (*(int *)(lVar1 + 0x8abc) != 0x10)) {
    in_stack_00000088 = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
              (*(longlong **)(lVar1 + 0x8400),0x21,1,&stack0x00000088);
    lVar2 = _DAT_180c86938;
    *(uint64_t *)(lVar1 + 0x8540) = 0;
    *(int32_t *)(lVar1 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8abc) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(longlong *)(lVar2 + 0x1cd8);
  if (((*(longlong *)(lVar1 + 0x8450) != 0) || (*(int *)(lVar1 + 0x8844) != -1)) ||
     (*(int *)(lVar1 + 0x8a44) != 0x10)) {
    in_stack_00000030 = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
              (*(longlong **)(lVar1 + 0x8400),3,1,&stack0x00000030);
    *(uint64_t *)(lVar1 + 0x8450) = 0;
    *(int32_t *)(lVar1 + 0x8844) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a44) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e8367(longlong param_1,longlong param_2)
void FUN_1800e8367(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong unaff_RSI;
  uint64_t in_stack_00000030;
  ulonglong in_stack_00000078;
  uint64_t in_stack_00000080;
  uint64_t in_stack_00000088;
  
  uVar5 = 0;
  *(uint64_t *)(*(longlong *)(param_1 + 0x1cd8) + 0x83f0) = 0;
  FUN_18029de40(*(uint64_t *)(param_1 + 0x1cd8),
                (*(uint *)(param_2 + 4) & 0x4000000 | 0x18000000) >> 0x1a);
  lVar1 = FUN_180245280();
  if (*(int *)(lVar1 + 0x160) == 5) {
    uVar3 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
  }
  else {
    uVar3 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
  }
  FUN_18029d150(uVar3,0x10,lVar1,0x10,0xffffffff);
  lVar2 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  *(longlong *)(lVar1 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
  lVar4 = lVar1 + 0x1a0;
  if ((((*(longlong *)(lVar2 + 0x8540) != lVar4) || (*(int *)(lVar2 + 0x88bc) != -1)) ||
      (*(int *)(lVar2 + 0x8abc) != 0x10)) &&
     (((lVar4 == 0 || (*(longlong *)(lVar1 + 0x1a8) != 0)) || (*(longlong *)(lVar1 + 0x1b0) != 0))))
  {
    in_stack_00000078 = uVar5;
    if (lVar4 != 0) {
      in_stack_00000078 = *(ulonglong *)(lVar1 + 0x1b0);
    }
    (**(code **)(**(longlong **)(lVar2 + 0x8400) + 0x40))
              (*(longlong **)(lVar2 + 0x8400),0x21,1,&stack0x00000078);
    *(longlong *)(lVar2 + 0x8540) = lVar4;
    *(int32_t *)(lVar2 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar2 + 0x8abc) = 0x10;
    *(int *)(lVar2 + 0x82b4) = *(int *)(lVar2 + 0x82b4) + 1;
  }
  for (; (ulonglong)(longlong)(int)uVar5 < (ulonglong)*(uint *)(unaff_RSI + 0x2108);
      uVar5 = (ulonglong)((int)uVar5 + 1)) {
    FUN_1800e8640();
  }
  lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  if (((*(longlong *)(lVar1 + 0x84b8) != 0) || (*(int *)(lVar1 + 0x8878) != -1)) ||
     (lVar2 = _DAT_180c86938, *(int *)(lVar1 + 0x8a78) != 0x10)) {
    in_stack_00000080 = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
              (*(longlong **)(lVar1 + 0x8400),0x10,1,&stack0x00000080);
    lVar2 = _DAT_180c86938;
    *(uint64_t *)(lVar1 + 0x84b8) = 0;
    *(int32_t *)(lVar1 + 0x8878) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a78) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(longlong *)(lVar2 + 0x1cd8);
  if (((*(longlong *)(lVar1 + 0x8540) != 0) || (*(int *)(lVar1 + 0x88bc) != -1)) ||
     (*(int *)(lVar1 + 0x8abc) != 0x10)) {
    in_stack_00000088 = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
              (*(longlong **)(lVar1 + 0x8400),0x21,1,&stack0x00000088);
    lVar2 = _DAT_180c86938;
    *(uint64_t *)(lVar1 + 0x8540) = 0;
    *(int32_t *)(lVar1 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8abc) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(longlong *)(lVar2 + 0x1cd8);
  if (((*(longlong *)(lVar1 + 0x8450) != 0) || (*(int *)(lVar1 + 0x8844) != -1)) ||
     (*(int *)(lVar1 + 0x8a44) != 0x10)) {
    in_stack_00000030 = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
              (*(longlong **)(lVar1 + 0x8400),3,1,&stack0x00000030);
    *(uint64_t *)(lVar1 + 0x8450) = 0;
    *(int32_t *)(lVar1 + 0x8844) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a44) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e84a0(void)
void FUN_1800e84a0(void)

{
  longlong lVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong unaff_R14;
  uint64_t in_stack_00000030;
  longlong in_stack_00000080;
  longlong in_stack_00000088;
  
  for (; (ulonglong)(longlong)unaff_EBX < (ulonglong)*(uint *)(unaff_RSI + 0x2108);
      unaff_EBX = unaff_EBX + 1) {
    FUN_1800e8640();
  }
  lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  if (((*(longlong *)(lVar1 + 0x84b8) != unaff_R14) || (*(int *)(lVar1 + 0x8878) != -1)) ||
     (lVar2 = _DAT_180c86938, *(int *)(lVar1 + 0x8a78) != 0x10)) {
    in_stack_00000080 = unaff_R14;
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
              (*(longlong **)(lVar1 + 0x8400),0x10,1,&stack0x00000080);
    lVar2 = _DAT_180c86938;
    *(longlong *)(lVar1 + 0x84b8) = unaff_R14;
    *(int32_t *)(lVar1 + 0x8878) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a78) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(longlong *)(lVar2 + 0x1cd8);
  if (((*(longlong *)(lVar1 + 0x8540) != unaff_R14) || (*(int *)(lVar1 + 0x88bc) != -1)) ||
     (*(int *)(lVar1 + 0x8abc) != 0x10)) {
    in_stack_00000088 = unaff_R14;
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
              (*(longlong **)(lVar1 + 0x8400),0x21,1,&stack0x00000088);
    lVar2 = _DAT_180c86938;
    *(longlong *)(lVar1 + 0x8540) = unaff_R14;
    *(int32_t *)(lVar1 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8abc) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(longlong *)(lVar2 + 0x1cd8);
  if (((*(longlong *)(lVar1 + 0x8450) != unaff_R14) || (*(int *)(lVar1 + 0x8844) != -1)) ||
     (*(int *)(lVar1 + 0x8a44) != 0x10)) {
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
              (*(longlong **)(lVar1 + 0x8400),3,1,&stack0x00000030);
    *(longlong *)(lVar1 + 0x8450) = unaff_R14;
    *(int32_t *)(lVar1 + 0x8844) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a44) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  return;
}






// 函数: void FUN_1800e862d(void)
void FUN_1800e862d(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e8640(longlong param_1,longlong param_2)
void FUN_1800e8640(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lStackX_10;
  longlong *plStackX_18;
  
  uVar1 = *(uint *)(param_2 + 0x2e0);
  FUN_1802ddd80(param_2,param_2 + 0x88);
  lVar2 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  FUN_18029fc10(lVar2,*(uint64_t *)(_DAT_180c86938 + 0x1ca0),param_2 + 0x210,0x70);
  lVar10 = 0;
  if (*(char *)(param_2 + 0x322) != '\0') {
    plVar3 = *(longlong **)(param_1 + 0xea8);
    lStackX_10 = lVar10;
    plStackX_18 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
      lVar6 = _DAT_180c86870;
      *(int32_t *)((longlong)plVar3 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
      if (plVar3 != (longlong *)0xfffffffffffffff0) {
        *(int32_t *)((longlong)plVar3 + 0x16c) = *(int32_t *)(lVar6 + 0x224);
        lStackX_10 = plVar3[3];
      }
    }
    (**(code **)(**(longlong **)(lVar2 + 0x8400) + 200))
              (*(longlong **)(lVar2 + 0x8400),0x48,1,&lStackX_10);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3);
    }
  }
  if ((uVar1 & 0x20) != 0) {
    FUN_18029d150(lVar2,7,*_DAT_180c8aa58,0x10,0xffffffff);
    FUN_18029d150(lVar2,8,_DAT_180c8aa58[1],0x10,0xffffffff);
    FUN_18029d150(lVar2,9,_DAT_180c8aa58[2],0x10,0xffffffff);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    FUN_18029f830(lVar2,*(int32_t *)(param_2 + 0x30c),*(int32_t *)(param_2 + 0x2d0));
  }
  if ((uVar1 >> 0x11 & 1) != 0) {
    FUN_18029f9b0(lVar2,*(uint64_t *)(param_2 + 0x2b8),*(int32_t *)(param_2 + 0x2d0));
  }
  FUN_18029cdd0(lVar2,param_2 + 0x88);
  if ((uVar1 & 0x2000) == 0) {
    FUN_18029db70(lVar2,*(int8_t *)(param_2 + 0xc1),
                  *(uint64_t *)(*(longlong *)(param_2 + 0x2a8) + 0x18));
    func_0x00018029dab0(lVar2,*(uint64_t *)(*(longlong *)(param_2 + 0x2b0) + 0x18));
  }
  if ((char)uVar1 < '\0') {
    if (system_data_2846 != '\0') goto LAB_1800e8942;
    iVar11 = *(int *)(param_2 + 0x2d0);
  }
  else {
    if (((uVar1 & 0x40) == 0) && ((*(uint *)(param_2 + 0x2e0) & 0x20400) == 0)) {
      if ((uVar1 & 0x2000) == 0) {
        if (system_data_2846 == '\0') {
          (**(code **)(**(longlong **)(lVar2 + 0x8400) + 0x60))
                    (*(longlong **)(lVar2 + 0x8400),*(int *)(param_2 + 0x2e4) * 3,0,0);
        }
      }
      else if (system_data_2846 == '\0') {
        (**(code **)(**(longlong **)(lVar2 + 0x8400) + 0x68))
                  (*(longlong **)(lVar2 + 0x8400),*(int32_t *)(param_2 + 0x318),
                   *(int32_t *)(param_2 + 0x31c));
      }
      goto LAB_1800e8942;
    }
    uVar1 = *(uint *)(param_2 + 0x2e0);
    if ((uVar1 & 0x40) == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = (int)(*(longlong *)(param_2 + 0x1e0) - *(longlong *)(param_2 + 0x1d8) >> 2);
    }
    if ((uVar1 >> 10 & 1) == 0) {
      iVar9 = 1;
    }
    else {
      iVar9 = *(int *)(param_2 + 0x2d0);
    }
    if ((uVar1 >> 0x11 & 1) == 0) {
      iVar11 = 1;
    }
    else {
      iVar11 = *(int *)(param_2 + 0x2d0);
    }
    if (system_data_2846 != '\0') goto LAB_1800e8942;
    iVar11 = iVar11 * iVar7 * iVar9;
  }
  (**(code **)(**(longlong **)(lVar2 + 0x8400) + 0xa0))
            (*(longlong **)(lVar2 + 0x8400),*(int *)(param_2 + 0x2e4) * 3,iVar11,0,0,0);
LAB_1800e8942:
  lVar6 = _DAT_180c86870;
  if (*(char *)(param_2 + 0x322) != '\0') {
    lVar4 = *(longlong *)(param_1 + 0xea0);
    lVar8 = *(longlong *)(param_1 + 0xea8);
    if ((lVar4 == 0) ||
       (*(int32_t *)(lVar4 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224),
       *(longlong *)(lVar4 + 0x10) == 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar8 = lVar4;
    }
    if ((lVar8 != 0) &&
       (*(int32_t *)(lVar8 + 0x16c) = *(int32_t *)(lVar6 + 0x224), lVar8 != -0x10)) {
      *(int32_t *)(lVar8 + 0x16c) = *(int32_t *)(lVar6 + 0x224);
      lVar10 = *(longlong *)(lVar8 + 0x18);
    }
    lStackX_10 = lVar10;
    (**(code **)(**(longlong **)(lVar2 + 0x8400) + 200))
              (*(longlong **)(lVar2 + 0x8400),0x48,1,&lStackX_10);
  }
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e8a00(uint64_t param_1,longlong param_2)
void FUN_1800e8a00(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong auStackX_10 [3];
  uint64_t auStack_38 [2];
  
  lVar1 = _DAT_180c86938;
  if (*(int *)(param_2 + 0x1fe0) != 0) {
    uVar6 = 0;
    *(uint64_t *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x83f0) = 0;
    FUN_18029de40(*(uint64_t *)(lVar1 + 0x1cd8),
                  (*(uint *)(param_2 + 4) & 0x4000000 | 0x18000000) >> 0x1a);
    lVar1 = FUN_180245280(param_2);
    if (*(int *)(lVar1 + 0x160) == 5) {
      uVar3 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
    }
    else {
      uVar3 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
    }
    FUN_18029d150(uVar3,0x10,lVar1,0x10,0xffffffff);
    lVar2 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(longlong *)(lVar1 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    lVar5 = lVar1 + 0x1a0;
    if ((((*(longlong *)(lVar2 + 0x8540) != lVar5) || (*(int *)(lVar2 + 0x88bc) != -1)) ||
        (*(int *)(lVar2 + 0x8abc) != 0x10)) &&
       (((lVar5 == 0 || (*(longlong *)(lVar1 + 0x1a8) != 0)) || (*(longlong *)(lVar1 + 0x1b0) != 0))
       )) {
      auStackX_10[0] = uVar6;
      if (lVar5 != 0) {
        auStackX_10[0] = *(ulonglong *)(lVar1 + 0x1b0);
      }
      (**(code **)(**(longlong **)(lVar2 + 0x8400) + 0x40))
                (*(longlong **)(lVar2 + 0x8400),0x21,1,auStackX_10);
      *(longlong *)(lVar2 + 0x8540) = lVar5;
      *(int32_t *)(lVar2 + 0x88bc) = 0xffffffff;
      *(int32_t *)(lVar2 + 0x8abc) = 0x10;
      *(int *)(lVar2 + 0x82b4) = *(int *)(lVar2 + 0x82b4) + 1;
    }
    while (iVar4 = (int)uVar6, (ulonglong)(longlong)iVar4 < (ulonglong)*(uint *)(param_2 + 0x1fe0))
    {
      FUN_1800e8640(param_1,*(uint64_t *)
                             (*(longlong *)(param_2 + 0x1fe8 + (uVar6 >> 0xb) * 8) + 0x10 +
                             (ulonglong)(uint)(iVar4 + (int)(uVar6 >> 0xb) * -0x800) * 0x18));
      uVar6 = (ulonglong)(iVar4 + 1);
    }
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    if (((*(longlong *)(lVar1 + 0x84b8) != 0) || (*(int *)(lVar1 + 0x8878) != -1)) ||
       (lVar2 = _DAT_180c86938, *(int *)(lVar1 + 0x8a78) != 0x10)) {
      auStackX_10[1] = 0;
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
                (*(longlong **)(lVar1 + 0x8400),0x10,1,auStackX_10 + 1);
      lVar2 = _DAT_180c86938;
      *(uint64_t *)(lVar1 + 0x84b8) = 0;
      *(int32_t *)(lVar1 + 0x8878) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a78) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    lVar1 = *(longlong *)(lVar2 + 0x1cd8);
    if (((*(longlong *)(lVar1 + 0x8540) != 0) || (*(int *)(lVar1 + 0x88bc) != -1)) ||
       (*(int *)(lVar1 + 0x8abc) != 0x10)) {
      auStackX_10[2] = 0;
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
                (*(longlong **)(lVar1 + 0x8400),0x21,1,auStackX_10 + 2);
      lVar2 = _DAT_180c86938;
      *(uint64_t *)(lVar1 + 0x8540) = 0;
      *(int32_t *)(lVar1 + 0x88bc) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8abc) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    lVar1 = *(longlong *)(lVar2 + 0x1cd8);
    if (((*(longlong *)(lVar1 + 0x8450) != 0) || (*(int *)(lVar1 + 0x8844) != -1)) ||
       (*(int *)(lVar1 + 0x8a44) != 0x10)) {
      auStack_38[0] = 0;
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
                (*(longlong **)(lVar1 + 0x8400),3,1,auStack_38);
      *(uint64_t *)(lVar1 + 0x8450) = 0;
      *(int32_t *)(lVar1 + 0x8844) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a44) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e8a22(longlong param_1,longlong param_2)
void FUN_1800e8a22(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong unaff_RSI;
  uint64_t in_stack_00000030;
  ulonglong in_stack_00000078;
  uint64_t in_stack_00000080;
  uint64_t in_stack_00000088;
  
  uVar5 = 0;
  *(uint64_t *)(*(longlong *)(param_1 + 0x1cd8) + 0x83f0) = 0;
  FUN_18029de40(*(uint64_t *)(param_1 + 0x1cd8),
                (*(uint *)(param_2 + 4) & 0x4000000 | 0x18000000) >> 0x1a);
  lVar1 = FUN_180245280();
  if (*(int *)(lVar1 + 0x160) == 5) {
    uVar3 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
  }
  else {
    uVar3 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
  }
  FUN_18029d150(uVar3,0x10,lVar1,0x10,0xffffffff);
  lVar2 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  *(longlong *)(lVar1 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
  lVar4 = lVar1 + 0x1a0;
  if ((((*(longlong *)(lVar2 + 0x8540) != lVar4) || (*(int *)(lVar2 + 0x88bc) != -1)) ||
      (*(int *)(lVar2 + 0x8abc) != 0x10)) &&
     (((lVar4 == 0 || (*(longlong *)(lVar1 + 0x1a8) != 0)) || (*(longlong *)(lVar1 + 0x1b0) != 0))))
  {
    in_stack_00000078 = uVar5;
    if (lVar4 != 0) {
      in_stack_00000078 = *(ulonglong *)(lVar1 + 0x1b0);
    }
    (**(code **)(**(longlong **)(lVar2 + 0x8400) + 0x40))
              (*(longlong **)(lVar2 + 0x8400),0x21,1,&stack0x00000078);
    *(longlong *)(lVar2 + 0x8540) = lVar4;
    *(int32_t *)(lVar2 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar2 + 0x8abc) = 0x10;
    *(int *)(lVar2 + 0x82b4) = *(int *)(lVar2 + 0x82b4) + 1;
  }
  for (; (ulonglong)(longlong)(int)uVar5 < (ulonglong)*(uint *)(unaff_RSI + 0x1fe0);
      uVar5 = (ulonglong)((int)uVar5 + 1)) {
    FUN_1800e8640();
  }
  lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  if (((*(longlong *)(lVar1 + 0x84b8) != 0) || (*(int *)(lVar1 + 0x8878) != -1)) ||
     (lVar2 = _DAT_180c86938, *(int *)(lVar1 + 0x8a78) != 0x10)) {
    in_stack_00000080 = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
              (*(longlong **)(lVar1 + 0x8400),0x10,1,&stack0x00000080);
    lVar2 = _DAT_180c86938;
    *(uint64_t *)(lVar1 + 0x84b8) = 0;
    *(int32_t *)(lVar1 + 0x8878) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a78) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(longlong *)(lVar2 + 0x1cd8);
  if (((*(longlong *)(lVar1 + 0x8540) != 0) || (*(int *)(lVar1 + 0x88bc) != -1)) ||
     (*(int *)(lVar1 + 0x8abc) != 0x10)) {
    in_stack_00000088 = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
              (*(longlong **)(lVar1 + 0x8400),0x21,1,&stack0x00000088);
    lVar2 = _DAT_180c86938;
    *(uint64_t *)(lVar1 + 0x8540) = 0;
    *(int32_t *)(lVar1 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8abc) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(longlong *)(lVar2 + 0x1cd8);
  if (((*(longlong *)(lVar1 + 0x8450) != 0) || (*(int *)(lVar1 + 0x8844) != -1)) ||
     (*(int *)(lVar1 + 0x8a44) != 0x10)) {
    in_stack_00000030 = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
              (*(longlong **)(lVar1 + 0x8400),3,1,&stack0x00000030);
    *(uint64_t *)(lVar1 + 0x8450) = 0;
    *(int32_t *)(lVar1 + 0x8844) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a44) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e8a27(longlong param_1,longlong param_2)
void FUN_1800e8a27(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong unaff_RSI;
  uint64_t in_stack_00000030;
  ulonglong in_stack_00000078;
  uint64_t in_stack_00000080;
  uint64_t in_stack_00000088;
  
  uVar5 = 0;
  *(uint64_t *)(*(longlong *)(param_1 + 0x1cd8) + 0x83f0) = 0;
  FUN_18029de40(*(uint64_t *)(param_1 + 0x1cd8),
                (*(uint *)(param_2 + 4) & 0x4000000 | 0x18000000) >> 0x1a);
  lVar1 = FUN_180245280();
  if (*(int *)(lVar1 + 0x160) == 5) {
    uVar3 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
  }
  else {
    uVar3 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
  }
  FUN_18029d150(uVar3,0x10,lVar1,0x10,0xffffffff);
  lVar2 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  *(longlong *)(lVar1 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
  lVar4 = lVar1 + 0x1a0;
  if ((((*(longlong *)(lVar2 + 0x8540) != lVar4) || (*(int *)(lVar2 + 0x88bc) != -1)) ||
      (*(int *)(lVar2 + 0x8abc) != 0x10)) &&
     (((lVar4 == 0 || (*(longlong *)(lVar1 + 0x1a8) != 0)) || (*(longlong *)(lVar1 + 0x1b0) != 0))))
  {
    in_stack_00000078 = uVar5;
    if (lVar4 != 0) {
      in_stack_00000078 = *(ulonglong *)(lVar1 + 0x1b0);
    }
    (**(code **)(**(longlong **)(lVar2 + 0x8400) + 0x40))
              (*(longlong **)(lVar2 + 0x8400),0x21,1,&stack0x00000078);
    *(longlong *)(lVar2 + 0x8540) = lVar4;
    *(int32_t *)(lVar2 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar2 + 0x8abc) = 0x10;
    *(int *)(lVar2 + 0x82b4) = *(int *)(lVar2 + 0x82b4) + 1;
  }
  for (; (ulonglong)(longlong)(int)uVar5 < (ulonglong)*(uint *)(unaff_RSI + 0x1fe0);
      uVar5 = (ulonglong)((int)uVar5 + 1)) {
    FUN_1800e8640();
  }
  lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  if (((*(longlong *)(lVar1 + 0x84b8) != 0) || (*(int *)(lVar1 + 0x8878) != -1)) ||
     (lVar2 = _DAT_180c86938, *(int *)(lVar1 + 0x8a78) != 0x10)) {
    in_stack_00000080 = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
              (*(longlong **)(lVar1 + 0x8400),0x10,1,&stack0x00000080);
    lVar2 = _DAT_180c86938;
    *(uint64_t *)(lVar1 + 0x84b8) = 0;
    *(int32_t *)(lVar1 + 0x8878) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a78) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(longlong *)(lVar2 + 0x1cd8);
  if (((*(longlong *)(lVar1 + 0x8540) != 0) || (*(int *)(lVar1 + 0x88bc) != -1)) ||
     (*(int *)(lVar1 + 0x8abc) != 0x10)) {
    in_stack_00000088 = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
              (*(longlong **)(lVar1 + 0x8400),0x21,1,&stack0x00000088);
    lVar2 = _DAT_180c86938;
    *(uint64_t *)(lVar1 + 0x8540) = 0;
    *(int32_t *)(lVar1 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8abc) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(longlong *)(lVar2 + 0x1cd8);
  if (((*(longlong *)(lVar1 + 0x8450) != 0) || (*(int *)(lVar1 + 0x8844) != -1)) ||
     (*(int *)(lVar1 + 0x8a44) != 0x10)) {
    in_stack_00000030 = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
              (*(longlong **)(lVar1 + 0x8400),3,1,&stack0x00000030);
    *(uint64_t *)(lVar1 + 0x8450) = 0;
    *(int32_t *)(lVar1 + 0x8844) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a44) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e8b60(void)
void FUN_1800e8b60(void)

{
  longlong lVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong unaff_R14;
  uint64_t in_stack_00000030;
  longlong in_stack_00000080;
  longlong in_stack_00000088;
  
  for (; (ulonglong)(longlong)unaff_EBX < (ulonglong)*(uint *)(unaff_RSI + 0x1fe0);
      unaff_EBX = unaff_EBX + 1) {
    FUN_1800e8640();
  }
  lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  if (((*(longlong *)(lVar1 + 0x84b8) != unaff_R14) || (*(int *)(lVar1 + 0x8878) != -1)) ||
     (lVar2 = _DAT_180c86938, *(int *)(lVar1 + 0x8a78) != 0x10)) {
    in_stack_00000080 = unaff_R14;
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
              (*(longlong **)(lVar1 + 0x8400),0x10,1,&stack0x00000080);
    lVar2 = _DAT_180c86938;
    *(longlong *)(lVar1 + 0x84b8) = unaff_R14;
    *(int32_t *)(lVar1 + 0x8878) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a78) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(longlong *)(lVar2 + 0x1cd8);
  if (((*(longlong *)(lVar1 + 0x8540) != unaff_R14) || (*(int *)(lVar1 + 0x88bc) != -1)) ||
     (*(int *)(lVar1 + 0x8abc) != 0x10)) {
    in_stack_00000088 = unaff_R14;
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
              (*(longlong **)(lVar1 + 0x8400),0x21,1,&stack0x00000088);
    lVar2 = _DAT_180c86938;
    *(longlong *)(lVar1 + 0x8540) = unaff_R14;
    *(int32_t *)(lVar1 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8abc) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(longlong *)(lVar2 + 0x1cd8);
  if (((*(longlong *)(lVar1 + 0x8450) != unaff_R14) || (*(int *)(lVar1 + 0x8844) != -1)) ||
     (*(int *)(lVar1 + 0x8a44) != 0x10)) {
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
              (*(longlong **)(lVar1 + 0x8400),3,1,&stack0x00000030);
    *(longlong *)(lVar1 + 0x8450) = unaff_R14;
    *(int32_t *)(lVar1 + 0x8844) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a44) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  return;
}






// 函数: void FUN_1800e8ced(void)
void FUN_1800e8ced(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e8d00(uint64_t param_1,uint64_t param_2,int param_3,uint64_t param_4,
void FUN_1800e8d00(uint64_t param_1,uint64_t param_2,int param_3,uint64_t param_4,
                  uint64_t param_5,longlong param_6)

{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  
  iVar6 = 0x7fffffff;
  if (*(int *)(_DAT_180c8a9c8 + 0x310) == 0) {
    iVar6 = 0x40;
  }
  if (0 < param_3) {
    if (iVar6 <= param_3) {
      iVar2 = param_3 / iVar6 + 1;
      iVar3 = (int)(*(longlong *)(_DAT_180c82868 + 0x10) - *(longlong *)(_DAT_180c82868 + 8) >> 3);
      if (iVar2 < iVar3) {
        iVar3 = iVar2;
      }
      iVar3 = param_3 / iVar3;
      if (iVar3 < 1) {
        iVar3 = 1;
      }
      else if (iVar6 < iVar3) {
        iVar3 = iVar6;
      }
      plVar4 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = (longlong)&unknown_var_3552_ptr;
      *plVar4 = (longlong)&unknown_var_3696_ptr;
      *(int32_t *)(plVar4 + 1) = 0;
      *plVar4 = (longlong)&unknown_var_5008_ptr;
      (**(code **)(*plVar4 + 0x28))(plVar4);
      LOCK();
      uVar1 = (int32_t)plVar4[2];
      *(int *)(plVar4 + 2) = iVar3;
      UNLOCK();
      auVar7._0_4_ = (float)param_3 / (float)iVar3;
      iVar6 = (int)auVar7._0_4_;
      if (auVar7._0_4_ <= 0.0) {
        if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar7._0_4_)) {
          auVar8._4_4_ = auVar7._0_4_;
          auVar8._0_4_ = auVar7._0_4_;
          auVar8._8_8_ = 0;
          movmskps(uVar1,auVar8);
        }
      }
      else if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar7._0_4_)) {
        auVar7._4_4_ = auVar7._0_4_;
        auVar7._8_8_ = 0;
        movmskps(uVar1,auVar7);
      }
      lVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x58,8,3);
                    // WARNING: Subroutine does not return
      memset(lVar5 + 8,0,0x50);
    }
    (**(code **)(param_6 + 0x18))(0,param_3,param_6);
  }
  if (*(code **)(param_6 + 0x10) != (code *)0x0) {
    (**(code **)(param_6 + 0x10))(param_6,0,0);
  }
  return;
}






// 函数: void FUN_1800e92d0(longlong param_1,uint param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800e92d0(longlong param_1,uint param_2,uint64_t param_3,uint64_t param_4)

{
  if ((int)param_2 < (int)(param_2 + 0x200)) {
                    // WARNING: Subroutine does not return
    memset(*(longlong *)(param_1 + 8 + (ulonglong)(param_2 >> 9) * 8) +
           (longlong)(int)(param_2 + (param_2 >> 9) * -0x200) * 0x340,0,0x340,param_4,
           0xfffffffffffffffe);
  }
  return;
}






// 函数: void FUN_1800e9360(longlong param_1,uint param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800e9360(longlong param_1,uint param_2,uint64_t param_3,uint64_t param_4)

{
  if ((int)param_2 < (int)(param_2 + 0x200)) {
                    // WARNING: Subroutine does not return
    memset(*(longlong *)(param_1 + 8 + (ulonglong)(param_2 >> 9) * 8) +
           (longlong)(int)(param_2 + (param_2 >> 9) * -0x200) * 0x2f0,0,0x2f0,param_4,
           0xfffffffffffffffe);
  }
  return;
}






