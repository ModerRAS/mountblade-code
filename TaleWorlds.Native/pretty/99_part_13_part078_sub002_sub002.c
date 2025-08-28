#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part078_sub002_sub002.c - 1 个函数

// 函数: void FUN_1808dea80(int *param_1)
void FUN_1808dea80(int *param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uStackX_8;
  uint64_t uStackX_10;
  
  uStackX_8 = 0;
  if (((*param_1 == 0) ||
      ((iVar3 = func_0x00018088c590(*param_1,&uStackX_10), iVar3 == 0 &&
       (iVar3 = RenderingSystemOptimizer(&uStackX_8,uStackX_10), iVar3 == 0)))) &&
     (iVar3 = FUN_18088c620(param_1), iVar3 == 0)) {
    lVar2 = *(int64_t *)(param_1 + 6);
    if ((lVar2 != 0) && (*(int **)(lVar2 + 0x2e8) != (int *)0x0)) {
      if (*(int **)(lVar2 + 0x2e8) != param_1) goto LAB_1808deb6a;
      *(uint64_t *)(lVar2 + 0x2e8) = 0;
    }
    plVar1 = (int64_t *)(param_1 + 2);
    **(int64_t **)(param_1 + 4) = *plVar1;
    *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(param_1 + 4);
    *(int64_t **)(param_1 + 4) = plVar1;
    *plVar1 = (int64_t)plVar1;
    **(int64_t **)(param_1 + 4) = (int64_t)plVar1;
    *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(param_1 + 4);
    *(int64_t **)(param_1 + 4) = plVar1;
    *plVar1 = (int64_t)plVar1;
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&processed_var_8144_ptr,0x50,1);
  }
LAB_1808deb6a:
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&uStackX_8);
}



uint64_t FUN_1808deb90(int64_t param_1,int *param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  int aiStackX_10 [2];
  
  if (param_2 == (int *)0x0) {
    return 0x1c;
  }
  iVar3 = 0;
  iVar4 = 0;
  if (*(int *)(param_1 + 0x2c) < 1) {
    iVar4 = (0 < *(int *)(param_1 + 0x28)) + 1;
  }
  else if (0 < *(int *)(param_1 + 0x28)) {
    lVar1 = *(int64_t *)(param_1 + 0x18);
    while( true ) {
      if ((iVar3 < 0) || (*(int *)(lVar1 + 0x1a8) <= iVar3)) {
        *param_2 = 3;
        return 0;
      }
      uVar2 = FUN_1808c7f30(*(uint64_t *)
                             (*(int64_t *)(*(int64_t *)(lVar1 + 0x1a0) + (int64_t)iVar3 * 8) +
                             0xd0),aiStackX_10);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (aiStackX_10[0] == 4) break;
      if (aiStackX_10[0] == 2) {
        *param_2 = 2;
        return 0;
      }
      iVar3 = iVar3 + 1;
    }
    *param_2 = 4;
    return 0;
  }
  *param_2 = iVar4;
  return 0;
}



uint64_t FUN_1808debaa(int64_t param_1,int *param_2)

{
  int64_t lVar1;
  int in_EAX;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  int32_t *unaff_RSI;
  int in_stack_00000038;
  
  iVar3 = 0;
  iVar4 = 0;
  if (*(int *)(param_1 + 0x2c) < 1) {
    iVar4 = (0 < in_EAX) + 1;
  }
  else if (0 < in_EAX) {
    lVar1 = *(int64_t *)(param_1 + 0x18);
    while( true ) {
      if ((iVar3 < 0) || (*(int *)(lVar1 + 0x1a8) <= iVar3)) {
        *unaff_RSI = 3;
        return 0;
      }
      uVar2 = FUN_1808c7f30(*(uint64_t *)
                             (*(int64_t *)(*(int64_t *)(lVar1 + 0x1a0) + (int64_t)iVar3 * 8) +
                             0xd0),&stack0x00000038);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (in_stack_00000038 == 4) break;
      if (in_stack_00000038 == 2) {
        *unaff_RSI = 2;
        return 0;
      }
      iVar3 = iVar3 + 1;
    }
    *unaff_RSI = 4;
    return 0;
  }
  *param_2 = iVar4;
  return 0;
}



uint64_t FUN_1808dec29(void)

{
  int32_t *unaff_RSI;
  
  *unaff_RSI = 4;
  return 0;
}



uint64_t FUN_1808dec41(void)

{
  int32_t *unaff_RSI;
  
  *unaff_RSI = 3;
  return 0;
}



uint64_t FUN_1808dec59(uint64_t param_1,int *param_2)

{
  int in_EAX;
  uint64_t unaff_RBX;
  
  *param_2 = (int)CONCAT71((int7)((uint64_t)unaff_RBX >> 8),0 < in_EAX) + 1;
  return 0;
}



uint64_t FUN_1808dec80(int64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  
  if ((*(int64_t *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x2c) == 0)) {
    lVar1 = *(int64_t *)(param_1 + 0x18);
    *(int32_t *)(param_1 + 0x2c) = 1;
    for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(lVar1 + 0x1a8))); iVar3 = iVar3 + 1) {
      uVar2 = FUN_1808c8390(*(uint64_t *)
                             (*(int64_t *)(*(int64_t *)(lVar1 + 0x1a0) + (int64_t)iVar3 * 8) +
                             0xd0),param_2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    return 0;
  }
  return 0x1c;
}



uint64_t FUN_1808dec96(int64_t param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  
  lVar1 = *(int64_t *)(param_1 + 0x18);
  *(int32_t *)(param_1 + 0x2c) = 1;
  for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(lVar1 + 0x1a8))); iVar3 = iVar3 + 1) {
    uVar2 = FUN_1808c8390(*(uint64_t *)
                           (*(int64_t *)(*(int64_t *)(lVar1 + 0x1a0) + (int64_t)iVar3 * 8) + 0xd0
                           ));
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



uint64_t FUN_1808decf3(void)

{
  return 0x1c;
}



uint64_t FUN_1808ded00(int64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int iVar4;
  
  lVar1 = *(int64_t *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return 0x1c;
  }
  iVar4 = 0;
  while( true ) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x1a8) <= iVar4)) {
      return 0;
    }
    lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x1a0) + (int64_t)iVar4 * 8);
    if (((*(uint *)(lVar2 + 0xf8) >> 3 & 1) != 0) &&
       (uVar3 = FUN_1808c8390(*(uint64_t *)(lVar2 + 0xd0),param_2), (int)uVar3 != 0)) break;
    iVar4 = iVar4 + 1;
  }
  return uVar3;
}



uint64_t FUN_1808dedb0(int64_t param_1,uint64_t param_2,int64_t *param_3,uint64_t *param_4)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint uVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int iVar9;
  int64_t lStackX_8;
  uint64_t uStackX_18;
  uint64_t *puStackX_20;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  
  if (((*(int *)((int64_t)param_3 + 0x24) != 0) && ((int)param_3[1] != 0)) &&
     (iVar6 = *(int *)(*param_3 +
                      (int64_t)
                      (int)(((uint)((uint64_t)param_1 >> 0x20) ^ (uint)param_1) &
                           (int)param_3[1] - 1U) * 4), iVar6 != -1)) {
    do {
      lVar3 = param_3[2] + (int64_t)iVar6 * 0x18;
      if (*(int64_t *)(param_3[2] + (int64_t)iVar6 * 0x18) == param_1) {
        uStackX_18 = *(uint64_t *)(lVar3 + 0x10);
        goto FUN_1808dee1f;
      }
      iVar6 = *(int *)(lVar3 + 8);
    } while (iVar6 != -1);
  }
  uStackX_18 = 0;
FUN_1808dee1f:
  uVar8 = uStackX_18;
  puStackX_20 = param_4;
  if (uStackX_18 == 0) {
    if ((*(short *)(param_1 + 0xc) == 3) ||
       ((((*(int *)(param_1 + 0x58) == 0 && (*(int *)(param_1 + 0x5c) == 0)) &&
         ((*(int *)(param_1 + 0x60) == 0 && (*(int *)(param_1 + 100) == 0)))) ||
        (lStackX_8 = param_1, lVar3 = FUN_1808dc7b0(param_2), lVar3 == 0)))) {
      return 0x1c;
    }
    uVar4 = FUN_1808dedb0(lVar3,param_2,param_3,&uStackX_18);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar4 = FUN_1808df800(param_3,&lStackX_8,&uStackX_18);
    uVar8 = uStackX_18;
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uStack_48 = *(int32_t *)(param_1 + 0x10);
    uStack_44 = *(int32_t *)(param_1 + 0x14);
    uStack_40 = *(int32_t *)(param_1 + 0x18);
    uStack_3c = *(int32_t *)(param_1 + 0x1c);
    iVar1 = *(int *)(uStackX_18 + 0x78);
    iVar9 = 0;
    iVar6 = iVar1 + -1;
    if (-1 < iVar6) {
      lVar3 = *(int64_t *)(uStackX_18 + 0x70);
      do {
        iVar1 = (iVar6 + iVar9) / 2;
        uVar7 = (int64_t)iVar1 * 0x10 + lVar3;
        iVar2 = memcmp(uVar7,&uStack_48,0x10);
        if (iVar2 < 0) {
          uVar5 = 0xffffffff;
        }
        else {
          iVar2 = memcmp(&uStack_48,uVar7,0x10);
          uVar5 = (uint)(iVar2 < 0);
          if (uVar5 == 0) goto LAB_1808def61;
        }
        if (-1 < (int)uVar5) {
          iVar6 = iVar1 + -1;
        }
        iVar1 = iVar1 + 1;
        if (-1 < (int)uVar5) {
          iVar1 = iVar9;
        }
        iVar9 = iVar1;
      } while (iVar9 <= iVar6);
      iVar1 = *(int *)(uVar8 + 0x78);
    }
    uVar7 = (int64_t)iVar1 * 0x10 + *(int64_t *)(uVar8 + 0x70);
LAB_1808def61:
    if ((uVar7 < *(uint64_t *)(uVar8 + 0x70)) ||
       ((int64_t)*(int *)(uVar8 + 0x78) * 0x10 + *(uint64_t *)(uVar8 + 0x70) <= uVar7)) {
      uStack_48 = *(int32_t *)(param_1 + 0x10);
      uStack_44 = *(int32_t *)(param_1 + 0x14);
      uStack_40 = *(int32_t *)(param_1 + 0x18);
      uStack_3c = *(int32_t *)(param_1 + 0x1c);
      uVar4 = FUN_18086da90(uVar8 + 0x70,&uStack_48,uStackX_18 & 0xff);
      uVar8 = uStackX_18;
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
  }
  if (puStackX_20 != (uint64_t *)0x0) {
    *puStackX_20 = uVar8;
  }
  return 0;
}



uint64_t FUN_1808dee1f(void)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t unaff_RBP;
  int iVar8;
  int64_t unaff_RDI;
  int iVar9;
  int32_t extraout_XMM0_Da;
  int32_t uStackX_20;
  int32_t uStackX_24;
  int32_t uStack000000000000002c;
  int64_t *in_stack_00000088;
  
  if (unaff_RBP == 0) {
    if (((*(short *)(unaff_RDI + 0xc) == 3) ||
        ((((*(int *)(unaff_RDI + 0x58) == 0 && (*(int *)(unaff_RDI + 0x5c) == 0)) &&
          (*(int *)(unaff_RDI + 0x60) == 0)) && (*(int *)(unaff_RDI + 100) == 0)))) ||
       (lVar4 = FUN_1808dc7b0(), lVar4 == 0)) {
      return 0x1c;
    }
    uVar5 = FUN_1808dedb0(lVar4);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar5 = FUN_1808df800(extraout_XMM0_Da,&stack0x00000070,&stack0x00000080);
    uVar1 = uRam0000000000000070;
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uStackX_20 = *(int32_t *)(unaff_RDI + 0x10);
    uStackX_24 = *(int32_t *)(unaff_RDI + 0x14);
    uStack000000000000002c = *(int32_t *)(unaff_RDI + 0x1c);
    iVar9 = 0;
    iVar8 = iRam0000000000000078 + -1;
    if (-1 < iVar8) {
      do {
        iVar2 = (iVar8 + iVar9) / 2;
        uVar7 = (int64_t)iVar2 * 0x10 + uVar1;
        iVar3 = memcmp(uVar7,&uStackX_20,0x10);
        if (iVar3 < 0) {
          uVar6 = 0xffffffff;
        }
        else {
          iVar3 = memcmp(&uStackX_20,uVar7,0x10);
          uVar6 = (uint)(iVar3 < 0);
          if (uVar6 == 0) goto LAB_1808def61;
        }
        if (-1 < (int)uVar6) {
          iVar8 = iVar2 + -1;
        }
        iVar2 = iVar2 + 1;
        if (-1 < (int)uVar6) {
          iVar2 = iVar9;
        }
        iVar9 = iVar2;
      } while (iVar9 <= iVar8);
    }
    uVar7 = (int64_t)iRam0000000000000078 * 0x10 + uRam0000000000000070;
LAB_1808def61:
    if ((uVar7 < uRam0000000000000070) ||
       ((int64_t)iRam0000000000000078 * 0x10 + uRam0000000000000070 <= uVar7)) {
      uStackX_20 = *(int32_t *)(unaff_RDI + 0x10);
      uStackX_24 = *(int32_t *)(unaff_RDI + 0x14);
      uStack000000000000002c = *(int32_t *)(unaff_RDI + 0x1c);
      uVar5 = FUN_18086da90(0x70,&uStackX_20,0);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
  }
  if (in_stack_00000088 != (int64_t *)0x0) {
    *in_stack_00000088 = unaff_RBP;
  }
  return 0;
}



uint64_t FUN_1808def14(void)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t in_RAX;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int iVar8;
  int64_t unaff_RDI;
  int iVar9;
  int32_t extraout_XMM0_Da;
  int32_t uStackX_20;
  int32_t uStackX_24;
  int32_t uStack000000000000002c;
  uint64_t uStack0000000000000080;
  uint64_t *in_stack_00000088;
  
  uStack0000000000000080 = *(uint64_t *)(in_RAX + 0x10);
  uVar7 = uStack0000000000000080;
  if (uStack0000000000000080 == 0) {
    if (((*(short *)(unaff_RDI + 0xc) == 3) ||
        ((((*(int *)(unaff_RDI + 0x58) == 0 && (*(int *)(unaff_RDI + 0x5c) == 0)) &&
          (*(int *)(unaff_RDI + 0x60) == 0)) && (*(int *)(unaff_RDI + 100) == 0)))) ||
       (lVar3 = FUN_1808dc7b0(), lVar3 == 0)) {
      return 0x1c;
    }
    uVar4 = FUN_1808dedb0(lVar3);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar4 = FUN_1808df800(extraout_XMM0_Da,&stack0x00000070,&stack0x00000080);
    uVar7 = uStack0000000000000080;
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uStackX_20 = *(int32_t *)(unaff_RDI + 0x10);
    uStackX_24 = *(int32_t *)(unaff_RDI + 0x14);
    uStack000000000000002c = *(int32_t *)(unaff_RDI + 0x1c);
    iVar1 = *(int *)(uStack0000000000000080 + 0x78);
    iVar9 = 0;
    iVar8 = iVar1 + -1;
    if (-1 < iVar8) {
      lVar3 = *(int64_t *)(uStack0000000000000080 + 0x70);
      do {
        iVar1 = (iVar8 + iVar9) / 2;
        uVar6 = (int64_t)iVar1 * 0x10 + lVar3;
        iVar2 = memcmp(uVar6,&uStackX_20,0x10);
        if (iVar2 < 0) {
          uVar5 = 0xffffffff;
        }
        else {
          iVar2 = memcmp(&uStackX_20,uVar6,0x10);
          uVar5 = (uint)(iVar2 < 0);
          if (uVar5 == 0) goto LAB_1808def61;
        }
        if (-1 < (int)uVar5) {
          iVar8 = iVar1 + -1;
        }
        iVar1 = iVar1 + 1;
        if (-1 < (int)uVar5) {
          iVar1 = iVar9;
        }
        iVar9 = iVar1;
      } while (iVar9 <= iVar8);
      iVar1 = *(int *)(uVar7 + 0x78);
    }
    uVar6 = (int64_t)iVar1 * 0x10 + *(int64_t *)(uVar7 + 0x70);
LAB_1808def61:
    if ((uVar6 < *(uint64_t *)(uVar7 + 0x70)) ||
       ((int64_t)*(int *)(uVar7 + 0x78) * 0x10 + *(uint64_t *)(uVar7 + 0x70) <= uVar6)) {
      uStackX_20 = *(int32_t *)(unaff_RDI + 0x10);
      uStackX_24 = *(int32_t *)(unaff_RDI + 0x14);
      uStack000000000000002c = *(int32_t *)(unaff_RDI + 0x1c);
      uVar4 = FUN_18086da90(uVar7 + 0x70,&uStackX_20,uStack0000000000000080 & 0xff);
      uVar7 = uStack0000000000000080;
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
  }
  if (in_stack_00000088 != (uint64_t *)0x0) {
    *in_stack_00000088 = uVar7;
  }
  return 0;
}



uint64_t FUN_1808def1d(void)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int unaff_ESI;
  int64_t unaff_RDI;
  uint64_t in_R9;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int unaff_R15D;
  int32_t uStack000000000000002c;
  int8_t uStack0000000000000080;
  int64_t *in_stack_00000088;
  
  do {
    iVar2 = memcmp(&stack0x00000020,unaff_RBX,0x10);
    uVar4 = (uint)(iVar2 < 0);
    iVar1 = unaff_R15D;
    if (iVar2 >= 0) {
LAB_1808def61:
      if ((unaff_RBX < *(uint64_t *)(unaff_RBP + 0x70)) ||
         ((int64_t)*(int *)(unaff_RBP + 0x78) * 0x10 + *(uint64_t *)(unaff_RBP + 0x70) <=
          unaff_RBX)) {
        uStack000000000000002c = *(int32_t *)(unaff_RDI + 0x1c);
        uVar3 = FUN_18086da90(unaff_RBP + 0x70,&stack0x00000020,uStack0000000000000080,in_R9,
                              *(int32_t *)(unaff_RDI + 0x10));
        unaff_RBP = _uStack0000000000000080;
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      if (in_stack_00000088 != (int64_t *)0x0) {
        *in_stack_00000088 = unaff_RBP;
      }
      return 0;
    }
    while( true ) {
      if (-1 < (int)uVar4) {
        unaff_ESI = (int)unaff_R13 + -1;
      }
      unaff_R15D = (int)unaff_R13 + 1;
      if (-1 < (int)uVar4) {
        unaff_R15D = iVar1;
      }
      if (unaff_ESI < unaff_R15D) {
        unaff_RBX = (int64_t)*(int *)(unaff_RBP + 0x78) * 0x10 + *(int64_t *)(unaff_RBP + 0x70);
        goto LAB_1808def61;
      }
      unaff_R13 = (int64_t)((unaff_ESI + unaff_R15D) / 2);
      unaff_RBX = unaff_R13 * 0x10 + unaff_R12;
      iVar1 = memcmp(unaff_RBX,&stack0x00000020,0x10);
      if (-1 < iVar1) break;
      uVar4 = 0xffffffff;
      iVar1 = unaff_R15D;
    }
  } while( true );
}



uint64_t FUN_1808def79(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int32_t uStack0000000000000028;
  int32_t uStack000000000000002c;
  int8_t uStack0000000000000080;
  int64_t *in_stack_00000088;
  
  if ((uint64_t)((int64_t)*(int *)(unaff_RBP + 0x78) * 0x10 + param_1) <= unaff_RBX) {
    uStack0000000000000028 = *(int32_t *)(unaff_RDI + 0x18);
    uStack000000000000002c = *(int32_t *)(unaff_RDI + 0x1c);
    uVar1 = FUN_18086da90(unaff_RBP + 0x70,&stack0x00000020,uStack0000000000000080,param_4,
                          *(int32_t *)(unaff_RDI + 0x10));
    unaff_RBP = _uStack0000000000000080;
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  if (in_stack_00000088 != (int64_t *)0x0) {
    *in_stack_00000088 = unaff_RBP;
  }
  return 0;
}



uint64_t FUN_1808deff0(int64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int32_t *puVar11;
  int iVar12;
  int iVar13;
  int iStackX_20;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  
  iVar9 = 0;
LAB_1808df00a:
  do {
    if ((iVar9 < 0) || (*(int *)(param_1 + 0x68) <= iVar9)) {
      return 0;
    }
    lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x60) + (int64_t)iVar9 * 8);
    if ((-1 < *(short *)(lVar2 + 0xe)) && ((*(byte *)(lVar2 + 0xc4) & 1) == 0)) {
      iVar1 = *(int *)(lVar2 + 0x88);
      iVar12 = 0;
      iStackX_20 = -1;
      iVar13 = iStackX_20;
      if (0 < iVar1) {
        puVar11 = *(int32_t **)(lVar2 + 0x80);
        iVar5 = *(int *)(param_1 + 0x88) + -1;
        do {
          uStack_58 = *puVar11;
          uStack_54 = puVar11[1];
          uStack_50 = puVar11[2];
          uStack_4c = puVar11[3];
          iVar13 = 0;
          if (-1 < iVar5) {
            lVar3 = *(int64_t *)(param_1 + 0x80);
            iVar6 = iVar5;
            do {
              iVar7 = (iVar6 + iVar13) / 2;
              lVar4 = *(int64_t *)(lVar3 + (int64_t)iVar7 * 8);
              iVar8 = memcmp(&uStack_58,lVar4 + 0x10,0x10);
              if (iVar8 < 0) {
                uVar10 = 0xffffffff;
              }
              else {
                iVar8 = memcmp(lVar4 + 0x10,&uStack_58,0x10);
                uVar10 = (uint)(iVar8 < 0);
                if (uVar10 == 0) {
                  if (((-1 < iVar7) && (lVar4 != 0)) &&
                     (iVar13 = iVar12, *(int *)(lVar4 + 0x60) == 0x23)) goto LAB_1808df159;
                  break;
                }
              }
              iVar8 = iVar7 + -1;
              if (-1 < (int)uVar10) {
                iVar8 = iVar6;
              }
              if (-1 < (int)uVar10) {
                iVar13 = iVar7 + 1;
              }
              iVar6 = iVar8;
            } while (iVar13 <= iVar8);
          }
          iVar12 = iVar12 + 1;
          puVar11 = puVar11 + 4;
          iVar13 = iStackX_20;
        } while (iVar12 < iVar1);
      }
LAB_1808df159:
      iStackX_20 = iVar13;
      iVar13 = 0;
      if (0 < *(int *)(lVar2 + 0x98)) {
        puVar11 = *(int32_t **)(lVar2 + 0x90);
        iVar12 = *(int *)(param_1 + 0x88) + -1;
        do {
          uStack_58 = *puVar11;
          uStack_54 = puVar11[1];
          uStack_50 = puVar11[2];
          uStack_4c = puVar11[3];
          iVar5 = 0;
          if (-1 < iVar12) {
            lVar3 = *(int64_t *)(param_1 + 0x80);
            iVar6 = iVar12;
            do {
              iVar7 = (iVar6 + iVar5) / 2;
              lVar4 = *(int64_t *)(lVar3 + (int64_t)iVar7 * 8);
              iVar8 = memcmp(&uStack_58,lVar4 + 0x10,0x10);
              if (iVar8 < 0) {
                uVar10 = 0xffffffff;
              }
              else {
                iVar8 = memcmp(lVar4 + 0x10,&uStack_58,0x10);
                uVar10 = (uint)(iVar8 < 0);
                if (uVar10 == 0) {
                  if (((-1 < iVar7) && (lVar4 != 0)) && (*(int *)(lVar4 + 0x60) == 0x23)) {
                    iVar9 = iVar9 + 1;
                    *(int *)(lVar2 + 200) = iVar1 + iVar13;
                    goto LAB_1808df00a;
                  }
                  break;
                }
              }
              iVar8 = iVar7 + -1;
              if (-1 < (int)uVar10) {
                iVar8 = iVar6;
              }
              if (-1 < (int)uVar10) {
                iVar5 = iVar7 + 1;
              }
              iVar6 = iVar8;
            } while (iVar5 <= iVar8);
          }
          iVar13 = iVar13 + 1;
          puVar11 = puVar11 + 4;
        } while (iVar13 < *(int *)(lVar2 + 0x98));
      }
      *(int *)(lVar2 + 200) = iStackX_20;
    }
    iVar9 = iVar9 + 1;
  } while( true );
}



uint64_t FUN_1808df2b0(int64_t param_1)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar2 = 0;
    if ((iVar3 < 0) || (iVar2 = 0, *(int *)(param_1 + 0x88) <= iVar3)) {
      while( true ) {
        if ((iVar2 < 0) || (*(int *)(param_1 + 0x98) <= iVar2)) {
          return 0;
        }
        if ((-1 < *(short *)(*(int64_t *)(*(int64_t *)(param_1 + 0x90) + (int64_t)iVar2 * 8) +
                            0xe)) && (uVar1 = FUN_1808df980(), (int)uVar1 != 0)) break;
        iVar2 = iVar2 + 1;
      }
      return uVar1;
    }
    if ((-1 < *(short *)(*(int64_t *)(*(int64_t *)(param_1 + 0x80) + (int64_t)iVar3 * 8) + 0xe))
       && (uVar1 = FUN_1808df980(), (int)uVar1 != 0)) break;
    iVar3 = iVar3 + 1;
  }
  return uVar1;
}



int FUN_1808df350(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int64_t lStackX_8;
  int64_t lStackX_10;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  int32_t uStack_44;
  
  iVar5 = 0;
  uStack_48 = 0xffffffff;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_44 = 0;
LAB_1808df390:
  iVar7 = 0;
  iVar8 = iVar7;
  if ((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x1a8))) {
    lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x1a0) + (int64_t)iVar5 * 8);
    if (*(short *)(lVar1 + 0xe) < 0) goto LAB_1808df47e;
    iVar8 = *(int *)(param_1 + 0x68) + -1;
    lStackX_8 = lVar1;
    if (-1 < iVar8) {
      do {
        iVar3 = (iVar8 + iVar7) / 2;
        lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x60) + (int64_t)iVar3 * 8);
        iVar4 = memcmp(lVar1 + 0x50,lVar2 + 0x10,0x10);
        if (iVar4 < 0) {
          uVar6 = 0xffffffff;
        }
        else {
          iVar4 = memcmp(lVar2 + 0x10,lVar1 + 0x50,0x10);
          uVar6 = (uint)(iVar4 < 0);
          if (uVar6 == 0) goto LAB_1808df44b;
        }
        iVar4 = iVar3 + -1;
        if (-1 < (int)uVar6) {
          iVar4 = iVar8;
        }
        iVar8 = iVar4;
        if (-1 < (int)uVar6) {
          iVar7 = iVar3 + 1;
        }
        if (iVar8 < iVar7) break;
      } while( true );
    }
    goto LAB_1808df43f;
  }
  goto LAB_1808df488;
LAB_1808df44b:
  if ((iVar3 < 0) || (lVar2 == 0)) {
LAB_1808df43f:
    iVar3 = 0x1c;
    goto LAB_1808df515;
  }
  lStackX_10 = lVar2;
  iVar3 = FUN_1808df800(&uStack_68,&lStackX_10,&lStackX_8);
  if (iVar3 != 0) goto LAB_1808df515;
LAB_1808df47e:
  iVar5 = iVar5 + 1;
  goto LAB_1808df390;
LAB_1808df488:
  if ((iVar8 < 0) || (*(int *)(param_1 + 0x48) <= iVar8)) goto LAB_1808df4d0;
  lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x40) + (int64_t)iVar8 * 8);
  if ((-1 < *(short *)(lVar1 + 0xe)) &&
     (((*(byte *)(lVar1 + 0xc4) & 1) == 0 &&
      (iVar3 = FUN_1808dedb0(lVar1,param_1,&uStack_68,0), iVar3 != 0)))) goto LAB_1808df515;
  iVar8 = iVar8 + 1;
  goto LAB_1808df488;
LAB_1808df4d0:
  if ((iVar7 < 0) || (*(int *)(param_1 + 0x58) <= iVar7)) {
    iVar3 = 0;
LAB_1808df515:
    iVar5 = SystemStatusChecker(&uStack_68);
    if ((iVar5 == 0) && (iVar5 = FUN_1808df5e0(&uStack_58), iVar5 == 0)) {
      uStack_48 = 0xffffffff;
      uStack_44 = 0;
    }
    FUN_1808df5e0(&uStack_58);
    SystemStatusChecker(&uStack_68);
    return iVar3;
  }
  lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x50) + (int64_t)iVar7 * 8);
  if ((-1 < *(short *)(lVar1 + 0xe)) &&
     (((*(byte *)(lVar1 + 0xc4) & 1) == 0 &&
      (iVar3 = FUN_1808dedb0(lVar1,param_1,&uStack_68,0), iVar3 != 0)))) goto LAB_1808df515;
  iVar7 = iVar7 + 1;
  goto LAB_1808df4d0;
}



uint64_t FUN_1808df570(int64_t param_1)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    if ((iVar3 < 0) || (*(int *)(param_1 + 0x1b8) <= iVar3)) {
      return 0;
    }
    lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x1b0) + (int64_t)iVar3 * 8);
    if (-1 < *(short *)(lVar1 + 0xe)) {
      if (*(int *)(lVar1 + 0x30) == 0) {
        cVar2 = func_0x00018084ddc0(lVar1);
        if (cVar2 == '\0') goto LAB_1808df5c0;
      }
      *(uint *)(lVar1 + 0x34) = *(uint *)(lVar1 + 0x34) | 0x10;
    }
LAB_1808df5c0:
    iVar3 = iVar3 + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808df5e0(int64_t *param_1)

{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int64_t)param_1 + 0xc);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
    memset(*param_1 + (int64_t)iVar1 * 0x18,0,(int64_t)-iVar1 * 0x18);
  }
  *(int32_t *)(param_1 + 1) = 0;
  if ((0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) &&
     (uVar2 = FUN_180868700(param_1,0), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



uint64_t FUN_1808df6a0(int64_t *param_1)

{
  int *piVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint uVar8;
  int iVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  
  iVar9 = *(int *)((int64_t)param_1 + 0x24);
  if (iVar9 == -1) {
    return 0x1c;
  }
  iVar2 = (int)param_1[1];
  if (iVar9 == iVar2) {
    iVar9 = iVar9 * 2;
    if (iVar9 < 4) {
      iVar9 = 4;
    }
    if (((iVar9 <= iVar2) || ((int)param_1[3] != iVar2)) || ((int)param_1[4] != -1)) {
      return 0x1c;
    }
    uVar8 = (int)*(uint *)((int64_t)param_1 + 0x1c) >> 0x1f;
    if (((int)((*(uint *)((int64_t)param_1 + 0x1c) ^ uVar8) - uVar8) < iVar9) &&
       (uVar5 = FUN_180868700(param_1 + 2,iVar9), (int)uVar5 != 0)) {
      return uVar5;
    }
    uVar5 = SystemCore_StateController0(param_1,iVar9);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar10 = 0;
    uVar6 = uVar10;
    if (0 < iVar9) {
      do {
        *(int32_t *)(*param_1 + uVar6 * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while ((int64_t)uVar6 < (int64_t)iVar9);
    }
    lVar4 = param_1[3];
    uVar6 = uVar10;
    uVar11 = uVar10;
    if (0 < (int)lVar4) {
      do {
        if ((int)param_1[1] == 0) {
          return 0x1c;
        }
        lVar3 = param_1[2];
        lVar7 = (int64_t)
                (int)(((uint)((uint64_t)*(uint64_t *)(uVar6 + lVar3) >> 0x20) ^
                      (uint)*(uint64_t *)(uVar6 + lVar3)) & (int)param_1[1] - 1U);
        piVar1 = (int *)(*param_1 + lVar7 * 4);
        iVar9 = *(int *)(*param_1 + lVar7 * 4);
        while (iVar9 != -1) {
          lVar7 = (int64_t)iVar9 * 3 + 1;
          piVar1 = (int *)(lVar3 + lVar7 * 8);
          iVar9 = *(int *)(lVar3 + lVar7 * 8);
        }
        *piVar1 = (int)uVar10;
        uVar11 = uVar11 + 1;
        uVar10 = (uint64_t)((int)uVar10 + 1);
        *(int32_t *)(param_1[2] + 8 + uVar6) = 0xffffffff;
        uVar6 = uVar6 + 0x18;
      } while ((int64_t)uVar11 < (int64_t)(int)lVar4);
    }
  }
  return 0;
}



uint64_t FUN_1808df6c6(void)

{
  int *piVar1;
  int64_t lVar2;
  int64_t lVar3;
  int in_EAX;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint uVar7;
  int64_t *unaff_RBX;
  int unaff_EDI;
  int iVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  
  if (unaff_EDI == in_EAX) {
    iVar8 = unaff_EDI * 2;
    if (iVar8 < 4) {
      iVar8 = 4;
    }
    if (((iVar8 <= in_EAX) || ((int)unaff_RBX[3] != in_EAX)) || ((int)unaff_RBX[4] != -1)) {
      return 0x1c;
    }
    uVar7 = (int)*(uint *)((int64_t)unaff_RBX + 0x1c) >> 0x1f;
    if (((int)((*(uint *)((int64_t)unaff_RBX + 0x1c) ^ uVar7) - uVar7) < iVar8) &&
       (uVar4 = FUN_180868700(unaff_RBX + 2,iVar8), (int)uVar4 != 0)) {
      return uVar4;
    }
    uVar4 = SystemCore_StateController0();
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar9 = 0;
    uVar5 = uVar9;
    if (0 < iVar8) {
      do {
        *(int32_t *)(*unaff_RBX + uVar5 * 4) = 0xffffffff;
        uVar5 = uVar5 + 1;
      } while ((int64_t)uVar5 < (int64_t)iVar8);
    }
    lVar3 = unaff_RBX[3];
    uVar5 = uVar9;
    uVar10 = uVar9;
    if (0 < (int)lVar3) {
      do {
        if ((int)unaff_RBX[1] == 0) {
          return 0x1c;
        }
        lVar2 = unaff_RBX[2];
        lVar6 = (int64_t)
                (int)(((uint)((uint64_t)*(uint64_t *)(uVar5 + lVar2) >> 0x20) ^
                      (uint)*(uint64_t *)(uVar5 + lVar2)) & (int)unaff_RBX[1] - 1U);
        piVar1 = (int *)(*unaff_RBX + lVar6 * 4);
        iVar8 = *(int *)(*unaff_RBX + lVar6 * 4);
        while (iVar8 != -1) {
          lVar6 = (int64_t)iVar8 * 3 + 1;
          piVar1 = (int *)(lVar2 + lVar6 * 8);
          iVar8 = *(int *)(lVar2 + lVar6 * 8);
        }
        *piVar1 = (int)uVar9;
        uVar10 = uVar10 + 1;
        uVar9 = (uint64_t)((int)uVar9 + 1);
        *(int32_t *)(unaff_RBX[2] + 8 + uVar5) = 0xffffffff;
        uVar5 = uVar5 + 0x18;
      } while ((int64_t)uVar10 < (int64_t)(int)lVar3);
    }
  }
  return 0;
}



uint64_t FUN_1808df7de(void)

{
  return 0x1c;
}



uint64_t FUN_1808df800(int64_t *param_1,int64_t *param_2,uint64_t *param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int iVar8;
  int64_t lVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int32_t uStack_2c;
  
  uVar6 = FUN_1808df6a0();
  if ((int)uVar6 == 0) {
    if ((int)param_1[1] == 0) {
      return 0x1c;
    }
    lVar3 = *param_2;
    lVar9 = (int64_t)(int)(((uint)((uint64_t)lVar3 >> 0x20) ^ (uint)lVar3) & (int)param_1[1] - 1U)
    ;
    piVar12 = (int *)(*param_1 + lVar9 * 4);
    iVar4 = *(int *)(*param_1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        lVar9 = (int64_t)iVar4;
        if (*(int64_t *)(param_1[2] + lVar9 * 0x18) == lVar3) {
          return 0x1c;
        }
        lVar1 = param_1[2] + 8;
        iVar4 = *(int *)(lVar1 + lVar9 * 0x18);
        piVar12 = (int *)(lVar1 + lVar9 * 0x18);
      } while (iVar4 != -1);
    }
    iVar4 = (int)param_1[4];
    lVar9 = (int64_t)iVar4;
    if (iVar4 == -1) {
      uVar6 = *param_3;
      iVar4 = (int)param_1[3];
      iVar8 = iVar4 + 1;
      uVar10 = (int)*(uint *)((int64_t)param_1 + 0x1c) >> 0x1f;
      iVar5 = (*(uint *)((int64_t)param_1 + 0x1c) ^ uVar10) - uVar10;
      if (iVar5 < iVar8) {
        iVar11 = (int)((float)iVar5 * 1.5);
        iVar5 = iVar8;
        if (iVar8 <= iVar11) {
          iVar5 = iVar11;
        }
        if (iVar5 < 2) {
          iVar11 = 2;
        }
        else if (iVar11 < iVar8) {
          iVar11 = iVar8;
        }
        uVar7 = FUN_180868700(param_1 + 2,iVar11);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
      }
      lVar1 = param_1[3];
      lVar9 = param_1[2];
      plVar2 = (int64_t *)(lVar9 + (int64_t)(int)lVar1 * 0x18);
      *plVar2 = lVar3;
      plVar2[1] = CONCAT44(uStack_2c,0xffffffff);
      *(uint64_t *)(lVar9 + 0x10 + (int64_t)(int)lVar1 * 0x18) = uVar6;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    }
    else {
      lVar3 = param_1[2];
      *(int32_t *)(param_1 + 4) = *(int32_t *)(lVar3 + 8 + lVar9 * 0x18);
      *(int32_t *)(lVar3 + 8 + lVar9 * 0x18) = 0xffffffff;
      *(int64_t *)(lVar3 + lVar9 * 0x18) = *param_2;
      *(uint64_t *)(lVar3 + 0x10 + lVar9 * 0x18) = *param_3;
    }
    *piVar12 = iVar4;
    *(int *)((int64_t)param_1 + 0x24) = *(int *)((int64_t)param_1 + 0x24) + 1;
    uVar6 = 0;
  }
  return uVar6;
}



uint64_t FUN_1808df823(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  int iVar7;
  int64_t lVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int64_t *unaff_RDI;
  int64_t *unaff_R14;
  uint64_t *unaff_R15;
  uint64_t in_stack_00000028;
  uint64_t uStack0000000000000030;
  
  if (in_EAX == 0) {
    return 0x1c;
  }
  lVar3 = *unaff_R14;
  lVar8 = (int64_t)(int)(((uint)((uint64_t)lVar3 >> 0x20) ^ (uint)lVar3) & in_EAX - 1U);
  piVar11 = (int *)(*unaff_RDI + lVar8 * 4);
  iVar4 = *(int *)(*unaff_RDI + lVar8 * 4);
  if (iVar4 != -1) {
    do {
      lVar8 = (int64_t)iVar4;
      if (*(int64_t *)(unaff_RDI[2] + lVar8 * 0x18) == lVar3) {
        return 0x1c;
      }
      lVar1 = unaff_RDI[2] + 8;
      iVar4 = *(int *)(lVar1 + lVar8 * 0x18);
      piVar11 = (int *)(lVar1 + lVar8 * 0x18);
    } while (iVar4 != -1);
  }
  iVar4 = (int)unaff_RDI[4];
  lVar8 = (int64_t)iVar4;
  if (iVar4 == -1) {
    uStack0000000000000030 = *unaff_R15;
    iVar4 = (int)unaff_RDI[3];
    iVar7 = iVar4 + 1;
    uVar9 = (int)*(uint *)((int64_t)unaff_RDI + 0x1c) >> 0x1f;
    iVar5 = (*(uint *)((int64_t)unaff_RDI + 0x1c) ^ uVar9) - uVar9;
    if (iVar5 < iVar7) {
      iVar10 = (int)((float)iVar5 * 1.5);
      iVar5 = iVar7;
      if (iVar7 <= iVar10) {
        iVar5 = iVar10;
      }
      if (iVar5 < 2) {
        iVar10 = 2;
      }
      else if (iVar10 < iVar7) {
        iVar10 = iVar7;
      }
      uVar6 = FUN_180868700(unaff_RDI + 2,iVar10);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    lVar1 = unaff_RDI[3];
    lVar8 = unaff_RDI[2];
    plVar2 = (int64_t *)(lVar8 + (int64_t)(int)lVar1 * 0x18);
    *plVar2 = lVar3;
    plVar2[1] = CONCAT44(in_stack_00000028._4_4_,0xffffffff);
    *(uint64_t *)(lVar8 + 0x10 + (int64_t)(int)lVar1 * 0x18) = uStack0000000000000030;
    *(int *)(unaff_RDI + 3) = (int)unaff_RDI[3] + 1;
  }
  else {
    lVar3 = unaff_RDI[2];
    *(int32_t *)(unaff_RDI + 4) = *(int32_t *)(lVar3 + 8 + lVar8 * 0x18);
    *(int32_t *)(lVar3 + 8 + lVar8 * 0x18) = 0xffffffff;
    *(int64_t *)(lVar3 + lVar8 * 0x18) = *unaff_R14;
    *(uint64_t *)(lVar3 + 0x10 + lVar8 * 0x18) = *unaff_R15;
  }
  *piVar11 = iVar4;
  *(int *)((int64_t)unaff_RDI + 0x24) = *(int *)((int64_t)unaff_RDI + 0x24) + 1;
  return 0;
}








