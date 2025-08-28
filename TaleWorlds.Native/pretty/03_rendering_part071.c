#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part071.c - 10 个函数

// 函数: void FUN_180308aca(void)
void FUN_180308aca(void)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint64_t *puVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar8;
  longlong in_R11;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t uStack0000000000000030;
  int32_t uStack0000000000000034;
  int32_t uStack0000000000000038;
  int32_t uStack000000000000003c;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  longlong in_stack_00000050;
  longlong in_stack_00000058;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  longlong in_stack_00000070;
  longlong in_stack_00000078;
  longlong in_stack_00000080;
  longlong in_stack_00000088;
  longlong in_stack_00000090;
  longlong in_stack_00000098;
  int32_t in_stack_000000a0;
  int32_t uStack00000000000000a4;
  int32_t in_stack_000000a8;
  int32_t uStack00000000000000ac;
  uint64_t in_stack_000000f8;
  
  *(int32_t *)(in_R11 + -0x28) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x24) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x20) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x1c) = unaff_XMM6_Dd;
  do {
    if (unaff_RBX < 1) break;
    uVar8 = (int)unaff_RDI[1] - 1;
    uVar5 = uVar8 >> 0xb;
    uVar3 = (int)((longlong)((longlong)(int)unaff_RDI[1] - unaff_RBP) / 2) + (int)unaff_RBP;
    uVar7 = uVar3 >> 0xb;
    uVar6 = unaff_RBP >> 0xb & 0x1fffff;
    puVar4 = (uint64_t *)
             FUN_180308f10(*(longlong *)(*unaff_RSI + 8 + uVar6 * 8) +
                           (ulonglong)(uint)((int)unaff_RBP + (int)uVar6 * -0x800) * 8,
                           *(longlong *)(*unaff_RSI + 8 + (ulonglong)uVar7 * 8) +
                           (ulonglong)(uVar3 + uVar7 * -0x800) * 8,
                           *(longlong *)(*unaff_RDI + 8 + (ulonglong)uVar5 * 8) +
                           (ulonglong)(uVar8 + uVar5 * -0x800) * 8);
    uStack0000000000000030 = (int32_t)*unaff_RDI;
    uStack0000000000000034 = *(int32_t *)((longlong)unaff_RDI + 4);
    uStack0000000000000038 = (int32_t)unaff_RDI[1];
    uStack000000000000003c = *(int32_t *)((longlong)unaff_RDI + 0xc);
    uStack0000000000000040 = (int32_t)*unaff_RSI;
    uStack0000000000000044 = *(int32_t *)((longlong)unaff_RSI + 4);
    uStack0000000000000048 = (int32_t)unaff_RSI[1];
    uStack000000000000004c = *(int32_t *)((longlong)unaff_RSI + 0xc);
    in_stack_000000f8 = *puVar4;
    FUN_1803090c0(&stack0x00000050,&stack0x00000040,&stack0x00000030,&stack0x000000f8);
    lVar2 = in_stack_00000058;
    lVar1 = in_stack_00000050;
    uStack0000000000000060 = (int32_t)*unaff_RDI;
    uStack0000000000000064 = *(int32_t *)((longlong)unaff_RDI + 4);
    uStack0000000000000068 = (int32_t)unaff_RDI[1];
    uStack000000000000006c = *(int32_t *)((longlong)unaff_RDI + 0xc);
    unaff_RBX = unaff_RBX + -1;
    in_stack_00000070 = in_stack_00000050;
    in_stack_00000078 = in_stack_00000058;
    FUN_180308a90(&stack0x00000070,&stack0x00000060,unaff_RBX,FUN_180306d20);
    *unaff_RDI = lVar1;
    unaff_RDI[1] = lVar2;
  } while (0x1c < (longlong)((longlong)(int)unaff_RDI[1] - unaff_RBP));
  if (unaff_RBX == 0) {
    in_stack_00000080 = *unaff_RDI;
    in_stack_00000088 = unaff_RDI[1];
    in_stack_000000a0 = (int32_t)*unaff_RSI;
    uStack00000000000000a4 = *(int32_t *)((longlong)unaff_RSI + 4);
    in_stack_000000a8 = (int32_t)unaff_RSI[1];
    uStack00000000000000ac = *(int32_t *)((longlong)unaff_RSI + 0xc);
    in_stack_00000090 = in_stack_00000080;
    in_stack_00000098 = in_stack_00000088;
    FUN_180308c30(&stack0x000000a0,&stack0x00000090,&stack0x00000080);
  }
  return;
}





// 函数: void FUN_180308bc3(void)
void FUN_180308bc3(void)

{
  longlong unaff_RBX;
  int32_t *unaff_RSI;
  uint64_t *unaff_RDI;
  uint64_t uStack0000000000000080;
  uint64_t uStack0000000000000088;
  uint64_t uStack0000000000000090;
  uint64_t uStack0000000000000098;
  int32_t uStack00000000000000a0;
  int32_t uStack00000000000000a4;
  int32_t uStack00000000000000a8;
  int32_t uStack00000000000000ac;
  
  if (unaff_RBX == 0) {
    uStack0000000000000080 = *unaff_RDI;
    uStack0000000000000088 = unaff_RDI[1];
    uStack00000000000000a0 = *unaff_RSI;
    uStack00000000000000a4 = unaff_RSI[1];
    uStack00000000000000a8 = unaff_RSI[2];
    uStack00000000000000ac = unaff_RSI[3];
    uStack0000000000000090 = uStack0000000000000080;
    uStack0000000000000098 = uStack0000000000000088;
    FUN_180308c30(&stack0x000000a0,&stack0x00000090,&stack0x00000080);
  }
  return;
}





// 函数: void FUN_180308be0(void)
void FUN_180308be0(void)

{
  int32_t *unaff_RSI;
  uint64_t *unaff_RDI;
  uint64_t uStack0000000000000080;
  uint64_t uStack0000000000000088;
  uint64_t uStack0000000000000090;
  uint64_t uStack0000000000000098;
  int32_t uStack00000000000000a0;
  int32_t uStack00000000000000a4;
  int32_t uStack00000000000000a8;
  int32_t uStack00000000000000ac;
  
  uStack0000000000000080 = *unaff_RDI;
  uStack0000000000000088 = unaff_RDI[1];
  uStack00000000000000a0 = *unaff_RSI;
  uStack00000000000000a4 = unaff_RSI[1];
  uStack00000000000000a8 = unaff_RSI[2];
  uStack00000000000000ac = unaff_RSI[3];
  uStack0000000000000090 = uStack0000000000000080;
  uStack0000000000000098 = uStack0000000000000088;
  FUN_180308c30(&stack0x000000a0,&stack0x00000090,&stack0x00000080);
  return;
}





// 函数: void FUN_180308c30(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4)
void FUN_180308c30(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  longlong **pplVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong lStackX_18;
  longlong *plStackX_20;
  longlong lStack_b8;
  uint64_t uStack_b0;
  uint64_t auStack_a8 [2];
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong **pplStack_78;
  int iStack_70;
  int32_t uStack_6c;
  uint64_t uStack_68;
  longlong **pplStack_60;
  longlong lStack_58;
  longlong lStack_50;
  
  uStack_68 = 0xfffffffffffffffe;
  pplVar3 = (longlong **)*param_1;
  iVar2 = (int)param_1[1];
  uStack_6c = *(int32_t *)((longlong)param_1 + 0xc);
  lVar8 = (longlong)(int)param_2[1] - (longlong)iVar2;
  plStackX_10 = param_2;
  plStackX_20 = param_4;
  pplStack_78 = pplVar3;
  iStack_70 = iVar2;
  if (1 < lVar8) {
    lVar7 = (lVar8 + -2 >> 1) + 1;
    do {
      lVar7 = lVar7 + -1;
      uVar6 = (int)lVar7 + iVar2;
      uVar5 = uVar6 >> 0xb;
      lStack_b8 = pplVar3[(ulonglong)uVar5 + 1][uVar6 + uVar5 * -0x800];
      lStack_98 = *param_1;
      lStack_90 = param_1[1];
      FUN_180309290(&lStack_98,lVar7,lVar8,lVar7,&lStack_b8);
    } while (lVar7 != 0);
  }
  lVar8 = *param_2;
  lStack_90 = param_2[1];
  iVar2 = *(int *)(param_3 + 8);
  uVar5 = (uint)lStack_90;
  lStack_98 = lVar8;
  if ((int)uVar5 < iVar2) {
    lVar9 = *param_1;
    uVar6 = *(uint *)(param_1 + 1);
    lStackX_18 = (ulonglong)(uVar6 >> 0xb) * 8;
    lVar7 = (ulonglong)(uVar6 - (uVar6 & 0xfffff800)) * 8;
    do {
      pplStack_60 = &plStackX_20;
      plStackX_20 = *(longlong **)(*(longlong *)(lStackX_18 + 8 + lVar9) + lVar7);
      if (plStackX_20 != (longlong *)0x0) {
        (**(code **)(*plStackX_20 + 0x28))();
      }
      pplStack_78 = &plStackX_8;
      uVar6 = uVar5 >> 0xb;
      plStackX_8 = *(longlong **)
                    (*(longlong *)(lVar8 + 8 + (ulonglong)uVar6 * 8) +
                    (ulonglong)(uVar5 + uVar6 * -0x800) * 8);
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))();
      }
      cVar4 = FUN_180306d20(&plStackX_8,&plStackX_20);
      if (cVar4 != '\0') {
        uStack_b0 = *(uint64_t *)
                     (*(longlong *)(lVar8 + 8 + (ulonglong)uVar6 * 8) +
                     (ulonglong)(uVar5 + uVar6 * -0x800) * 8);
        *(uint64_t *)
         (*(longlong *)(lVar8 + 8 + (ulonglong)uVar6 * 8) + (ulonglong)(uVar5 + uVar6 * -0x800) * 8)
             = *(uint64_t *)(*(longlong *)(lStackX_18 + 8 + *param_1) + lVar7);
        lStack_88 = *param_1;
        lStack_80 = param_1[1];
        FUN_180309290(&lStack_88,0,(longlong)(int)plStackX_10[1] - (longlong)(int)param_1[1],0,
                      &uStack_b0);
      }
      uVar5 = uVar5 + 1;
      lVar9 = *param_1;
      param_2 = plStackX_10;
    } while ((int)uVar5 < iVar2);
  }
  lVar8 = *param_2;
  uVar5 = *(uint *)(param_2 + 1);
  lStack_80 = param_2[1];
  lVar7 = param_1[1];
  if (1 < (longlong)(int)uVar5 - (longlong)(int)lVar7) {
    lVar9 = *param_1;
    uVar6 = (uint)param_1[1];
    lStack_88 = lVar8;
    do {
      uVar1 = uVar5 - 1;
      auStack_a8[0] =
           *(uint64_t *)
            (*(longlong *)(lVar8 + 8 + (ulonglong)(uVar1 >> 0xb) * 8) +
            (ulonglong)(uVar1 & 0x7ff) * 8);
      *(uint64_t *)
       (*(longlong *)(lVar8 + 8 + (ulonglong)(uVar1 >> 0xb) * 8) + (ulonglong)(uVar1 & 0x7ff) * 8) =
           *(uint64_t *)
            (*(longlong *)(lVar9 + (ulonglong)(uVar6 >> 0xb) * 8 + 8) +
            (ulonglong)(uVar6 + (uVar6 >> 0xb) * -0x800) * 8);
      lStack_58 = *param_1;
      lStack_50 = param_1[1];
      FUN_180309290(&lStack_58,0,((longlong)(int)uVar5 - (longlong)(int)uVar6) + -1,0,auStack_a8);
      uVar5 = uVar1;
    } while (1 < (longlong)(int)uVar1 - (longlong)(int)lVar7);
  }
  return;
}



longlong * FUN_180308f10(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong *plStackX_20;
  
  pplStackX_10 = &plStackX_20;
  plStackX_20 = (longlong *)*param_2;
  if (plStackX_20 != (longlong *)0x0) {
    (**(code **)(*plStackX_20 + 0x28))();
  }
  plStackX_8 = (longlong *)*param_1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  cVar1 = FUN_180306d20(&plStackX_8,&plStackX_20);
  plStackX_20 = (longlong *)*param_3;
  pplStackX_10 = &plStackX_20;
  if (cVar1 == '\0') {
    if (plStackX_20 != (longlong *)0x0) {
      (**(code **)(*plStackX_20 + 0x28))();
    }
    plStackX_8 = (longlong *)*param_1;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    cVar1 = FUN_180306d20(&plStackX_8,&plStackX_20);
    if (cVar1 == '\0') {
      pplStackX_10 = &plStackX_20;
      plStackX_20 = (longlong *)*param_3;
      if (plStackX_20 != (longlong *)0x0) {
        (**(code **)(*plStackX_20 + 0x28))();
      }
      plStackX_8 = (longlong *)*param_2;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))();
      }
      cVar1 = FUN_180306d20(&plStackX_8,&plStackX_20);
      if (cVar1 == '\0') {
        return param_2;
      }
      return param_3;
    }
  }
  else {
    if (plStackX_20 != (longlong *)0x0) {
      (**(code **)(*plStackX_20 + 0x28))();
    }
    plStackX_8 = (longlong *)*param_2;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    cVar1 = FUN_180306d20(&plStackX_8,&plStackX_20);
    if (cVar1 != '\0') {
      return param_2;
    }
    pplStackX_10 = &plStackX_20;
    plStackX_20 = (longlong *)*param_3;
    if (plStackX_20 != (longlong *)0x0) {
      (**(code **)(*plStackX_20 + 0x28))();
    }
    plStackX_8 = (longlong *)*param_1;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    cVar1 = FUN_180306d20(&plStackX_8,&plStackX_20);
    if (cVar1 != '\0') {
      param_1 = param_3;
    }
  }
  return param_1;
}



longlong * FUN_1803090c0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint64_t uVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  longlong **pplStackX_8;
  longlong *plStackX_10;
  longlong *plStackX_18;
  longlong *plStackX_20;
  longlong ***ppplStack0000000000000028;
  
  lVar3 = *param_3;
  lVar4 = *param_2;
  uVar8 = *(uint *)(param_2 + 1);
  while( true ) {
    while( true ) {
      ppplStack0000000000000028 = &pplStackX_8;
      pplStackX_8 = (longlong **)*param_4;
      if (pplStackX_8 != (longlong **)0x0) {
        (*(code *)(*pplStackX_8)[5])();
      }
      plStackX_10 = *(longlong **)
                     (*(longlong *)(lVar4 + 8 + (ulonglong)(uVar8 >> 0xb) * 8) +
                     (ulonglong)(uVar8 + (uVar8 >> 0xb) * -0x800) * 8);
      if (plStackX_10 != (longlong *)0x0) {
        (**(code **)(*plStackX_10 + 0x28))();
      }
      cVar7 = FUN_180306d20(&plStackX_10,&pplStackX_8);
      if (cVar7 == '\0') break;
      uVar8 = uVar8 + 1;
      *(uint *)(param_2 + 1) = uVar8;
    }
    *(int *)(param_3 + 1) = (int)param_3[1] + -1;
    uVar8 = *(uint *)(param_3 + 1);
    while( true ) {
      ppplStack0000000000000028 = (longlong ***)&plStackX_18;
      plStackX_18 = *(longlong **)
                     (*(longlong *)(lVar3 + 8 + (ulonglong)(uVar8 >> 0xb) * 8) +
                     (ulonglong)(uVar8 + (uVar8 >> 0xb) * -0x800) * 8);
      if (plStackX_18 != (longlong *)0x0) {
        (**(code **)(*plStackX_18 + 0x28))();
      }
      pplStackX_8 = &plStackX_20;
      plStackX_20 = (longlong *)*param_4;
      if (plStackX_20 != (longlong *)0x0) {
        (**(code **)(*plStackX_20 + 0x28))();
      }
      cVar7 = FUN_180306d20(&plStackX_20,&plStackX_18);
      if (cVar7 == '\0') break;
      uVar8 = uVar8 - 1;
      *(uint *)(param_3 + 1) = uVar8;
    }
    lVar6 = param_2[1];
    if ((int)uVar8 <= (int)lVar6) break;
    uVar8 = (uint)param_3[1] >> 0xb;
    puVar1 = (uint64_t *)
             (*(longlong *)(*param_3 + 8 + (ulonglong)uVar8 * 8) +
             (ulonglong)((uint)param_3[1] + uVar8 * -0x800) * 8);
    uVar8 = (uint)param_2[1] >> 0xb;
    puVar2 = (uint64_t *)
             (*(longlong *)(*param_2 + 8 + (ulonglong)uVar8 * 8) +
             (ulonglong)((uint)param_2[1] + uVar8 * -0x800) * 8);
    uVar5 = *puVar2;
    *puVar2 = *puVar1;
    *puVar1 = uVar5;
    uVar8 = (int)lVar6 + 1;
    *(uint *)(param_2 + 1) = uVar8;
  }
  lVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar3;
  return param_1;
}





// 函数: void FUN_180309290(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
void FUN_180309290(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong *plStackX_18;
  longlong *plStackX_20;
  
  lVar9 = param_4 * 2 + 2;
  if (lVar9 < param_3) {
    iVar1 = (int)param_1[1];
    lVar2 = *param_1;
    lVar10 = param_4;
    do {
      uVar6 = (int)lVar9 + iVar1 + -1;
      uVar5 = uVar6 >> 0xb;
      plStackX_8 = *(longlong **)
                    (*(longlong *)(lVar2 + 8 + (ulonglong)uVar5 * 8) +
                    (ulonglong)(uVar6 + uVar5 * -0x800) * 8);
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))();
      }
      uVar6 = (int)lVar9 + iVar1;
      uVar5 = uVar6 >> 0xb;
      plStackX_10 = *(longlong **)
                     (*(longlong *)(lVar2 + 8 + (ulonglong)uVar5 * 8) +
                     (ulonglong)(uVar6 + uVar5 * -0x800) * 8);
      if (plStackX_10 != (longlong *)0x0) {
        (**(code **)(*plStackX_10 + 0x28))();
      }
      cVar4 = FUN_180306d20(&plStackX_10,&plStackX_8);
      param_4 = lVar9;
      if (cVar4 != '\0') {
        param_4 = lVar9 + -1;
      }
      uVar7 = iVar1 + (int)param_4;
      uVar5 = uVar7 >> 0xb;
      uVar8 = iVar1 + (int)lVar10;
      uVar6 = uVar8 >> 0xb;
      *(uint64_t *)
       (*(longlong *)(lVar2 + 8 + (ulonglong)uVar6 * 8) + (ulonglong)(uVar8 + uVar6 * -0x800) * 8) =
           *(uint64_t *)
            (*(longlong *)(lVar2 + 8 + (ulonglong)uVar5 * 8) +
            (ulonglong)(uVar7 + uVar5 * -0x800) * 8);
      lVar9 = param_4 * 2 + 2;
      lVar10 = param_4;
    } while (lVar9 < param_3);
  }
  if (lVar9 == param_3) {
    uVar7 = (int)param_1[1] + -1 + (int)lVar9;
    uVar5 = uVar7 >> 0xb;
    uVar8 = (int)param_1[1] + (int)param_4;
    uVar6 = uVar8 >> 0xb;
    *(uint64_t *)
     (*(longlong *)(*param_1 + 8 + (ulonglong)uVar6 * 8) + (ulonglong)(uVar8 + uVar6 * -0x800) * 8)
         = *(uint64_t *)
            (*(longlong *)(*param_1 + 8 + (ulonglong)uVar5 * 8) +
            (ulonglong)(uVar7 + uVar5 * -0x800) * 8);
    param_4 = lVar9 + -1;
  }
  lVar9 = *param_1;
  iVar1 = (int)param_1[1];
  while (iVar3 = (int)param_4, param_2 < param_4) {
    param_4 = param_4 + -1 >> 1;
    plStackX_18 = (longlong *)*param_5;
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x28))();
    }
    uVar6 = (int)param_4 + iVar1;
    uVar5 = uVar6 >> 0xb;
    uVar6 = uVar6 & 0x7ff;
    plStackX_20 = *(longlong **)
                   (*(longlong *)(lVar9 + 8 + (ulonglong)uVar5 * 8) + (ulonglong)uVar6 * 8);
    if (plStackX_20 != (longlong *)0x0) {
      (**(code **)(*plStackX_20 + 0x28))();
    }
    cVar4 = FUN_180306d20(&plStackX_20,&plStackX_18);
    if (cVar4 == '\0') break;
    uVar8 = iVar3 + iVar1;
    uVar7 = uVar8 >> 0xb;
    *(uint64_t *)
     (*(longlong *)(lVar9 + 8 + (ulonglong)uVar7 * 8) + (ulonglong)(uVar8 + uVar7 * -0x800) * 8) =
         *(uint64_t *)(*(longlong *)(lVar9 + 8 + (ulonglong)uVar5 * 8) + (ulonglong)uVar6 * 8);
  }
  uVar6 = iVar3 + iVar1;
  uVar5 = uVar6 >> 0xb;
  *(longlong *)
   (*(longlong *)(lVar9 + 8 + (ulonglong)uVar5 * 8) + (ulonglong)(uVar6 + uVar5 * -0x800) * 8) =
       *param_5;
  return;
}





// 函数: void FUN_180309520(longlong *param_1)
void FUN_180309520(longlong *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 7) {
    *puVar2 = &unknown_var_3456_ptr;
    if (puVar2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar2[1] = 0;
    *(int32_t *)(puVar2 + 3) = 0;
    *puVar2 = &unknown_var_720_ptr;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_1803095c0(longlong *param_1)
void FUN_1803095c0(longlong *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 7) {
    *puVar2 = &unknown_var_3456_ptr;
    if (puVar2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar2[1] = 0;
    *(int32_t *)(puVar2 + 3) = 0;
    *puVar2 = &unknown_var_720_ptr;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



uint64_t *
FUN_1803095e0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_3952_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if ((param_2 & 1) != 0) {
    free(param_1,0x68,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180309640(uint64_t *param_1)
void FUN_180309640(uint64_t *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = &unknown_var_3952_ptr;
  puVar2 = (uint64_t *)param_1[1];
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_1803096a0(longlong param_1)
void FUN_1803096a0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  plVar1 = *(longlong **)(param_1 + 0x90);
  plVar3 = *(longlong **)(param_1 + 0x88);
  if (plVar3 != plVar1) {
    do {
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 0x38))();
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    plVar3 = *(longlong **)(param_1 + 0x88);
  }
  *(longlong **)(param_1 + 0x90) = plVar3;
  iVar2 = _Mtx_unlock(param_1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180309740(uint64_t *param_1,int param_2,int32_t param_3,int32_t param_4,
             int32_t param_5)

{
  int *piVar1;
  
  *param_1 = &unknown_var_3552_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_4176_ptr;
  *(int *)(param_1 + 3) = param_2;
  *(int32_t *)((longlong)param_1 + 0x1c) = param_3;
  *(int32_t *)(param_1 + 4) = param_4;
  *(int32_t *)((longlong)param_1 + 0x24) = param_5;
  param_1[5] = 0x3f800000;
  param_1[6] = 0;
  param_1[7] = 0x3f80000000000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0;
  param_1[0xc] = 0x3f80000000000000;
  *(int32_t *)((longlong)param_1 + 0x11c) = 0xffffffff;
  *(int32_t *)(param_1 + 2) = 0;
  *(int32_t *)(param_1 + 0x24) = 0;
  *(int32_t *)((longlong)param_1 + 0x114) = 0;
  *(int8_t *)((longlong)param_1 + 0x13d) = 0;
  *(uint64_t *)((longlong)param_1 + 300) = 0xffffffffffffffff;
  param_1[0x12] = 0x3f800000;
  param_1[0x13] = 0;
  param_1[0x14] = 0x3f80000000000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x19] = 0x3f80000000000000;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x3f80000000000000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x3f800000;
  param_1[0x20] = 0;
  param_1[0x21] = 0x3f80000000000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(int32_t *)(param_1 + 0x11) = 0xbf800000;
  *(int32_t *)((longlong)param_1 + 0x8c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x23) = 0;
  *(uint64_t *)((longlong)param_1 + 0x124) = 0;
  *(int32_t *)((longlong)param_1 + 0x14) = 0;
  *(int32_t *)((longlong)param_1 + 0x134) = 0xffffffff;
  *(int32_t *)(param_1 + 0x27) = 0;
  *(int32_t *)(param_1 + 0x22) = 0;
  LOCK();
  piVar1 = (int *)(*(longlong *)(*(longlong *)(render_system_data_memory + 0x140) + (longlong)param_2 * 8) +
                  0x1a0);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (*(int *)((longlong)param_1 + 0x1c) != -1) {
    LOCK();
    piVar1 = (int *)(*(longlong *)
                      (*(longlong *)(render_system_data_memory + 0x160) +
                      (longlong)*(int *)((longlong)param_1 + 0x1c) * 8) + 0x18);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}



uint64_t FUN_180309910(uint64_t param_1,ulonglong param_2)

{
  FUN_180309950();
  if ((param_2 & 1) != 0) {
    free(param_1,0x140);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180309950(uint64_t *param_1)
void FUN_180309950(uint64_t *param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int aiStackX_10 [2];
  longlong *plStackX_18;
  longlong *plStackX_20;
  
  *param_1 = &unknown_var_4176_ptr;
  lVar5 = render_system_data_memory;
  iVar6 = *(int *)((longlong)param_1 + 0x24);
  lVar7 = (longlong)iVar6;
  if ((iVar6 != -1) && (*(int *)((longlong)param_1 + 0x14) == 0)) {
    lVar1 = render_system_data_memory + 0x2b8;
    aiStackX_10[0] = iVar6;
    AcquireSRWLockExclusive(lVar1);
    *(int8_t *)(lVar5 + 3) = 1;
    *(int8_t *)(*(longlong *)(lVar5 + 0x1a0) + lVar7 * 0x10) = 0;
    lVar8 = *(longlong *)(lVar5 + 0x1a0);
    lVar3 = lVar8 + lVar7 * 0x10;
    if (*(int *)(lVar3 + 4) != -1) {
      FUN_18030a460(lVar5 + 0x58,*(uint64_t *)(lVar3 + 4));
      lVar8 = *(longlong *)(lVar5 + 0x1a0);
    }
    plStackX_18 = (longlong *)0xffffffffffffffff;
    *(uint64_t *)(lVar8 + 4 + lVar7 * 0x10) = 0xffffffffffffffff;
    FUN_1800571e0(lVar5 + 0x120,aiStackX_10);
    *(int32_t *)((longlong)param_1 + 0x24) = 0xffffffff;
    ReleaseSRWLockExclusive(lVar1);
  }
  lVar5 = render_system_data_memory;
  iVar4 = *(int *)(param_1 + 3);
  LOCK();
  piVar2 = (int *)(*(longlong *)(*(longlong *)(render_system_data_memory + 0x140) + (longlong)iVar4 * 8) +
                  0x1a0);
  iVar6 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar6 == 1) {
    iVar6 = _Mtx_lock(lVar5 + 0x1c0);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }
    plStackX_18 = *(longlong **)
                   (*(longlong *)((longlong)iVar4 * 8 + *(longlong *)(lVar5 + 0x140)) + 0x1a8);
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x28))();
    }
    FUN_1800b87c0(lVar5 + 0x210,&plStackX_18);
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x38))();
    }
    iVar6 = _Mtx_unlock(lVar5 + 0x1c0);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }
  }
  lVar5 = render_system_data_memory;
  if (*(int *)((longlong)param_1 + 0x1c) != -1) {
    lVar7 = (longlong)*(int *)((longlong)param_1 + 0x1c) * 8;
    LOCK();
    piVar2 = (int *)(*(longlong *)(lVar7 + *(longlong *)(render_system_data_memory + 0x160)) + 0x18);
    iVar6 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      iVar6 = _Mtx_lock(lVar5 + 0x1c0);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
      plStackX_20 = *(longlong **)(*(longlong *)(lVar7 + *(longlong *)(lVar5 + 0x160)) + 0x20);
      if (plStackX_20 != (longlong *)0x0) {
        (**(code **)(*plStackX_20 + 0x28))();
      }
      FUN_1800b87c0(lVar5 + 0x230,&plStackX_20);
      if (plStackX_20 != (longlong *)0x0) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
      iVar6 = _Mtx_unlock(lVar5 + 0x1c0);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
    }
  }
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  return;
}





