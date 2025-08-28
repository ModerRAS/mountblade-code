#include "TaleWorlds.Native.Split.h"

// 03_rendering_part513.c - 7 个函数

// 函数: void FUN_180540851(longlong param_1,char param_2,uint64_t param_3,uint64_t param_4)
void FUN_180540851(longlong param_1,char param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  int iVar2;
  longlong unaff_RBX;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  bool in_ZF;
  int8_t auStackX_18 [8];
  uint64_t uVar7;
  longlong lVar8;
  
  if (!in_ZF) {
    lVar3 = 5;
    param_1 = param_1 + 0x90;
    do {
      FUN_1805e7fe0(param_1,param_2);
      param_1 = param_1 + 0x180;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lVar3 = *(longlong *)(unaff_RBX + 0x810);
    uVar4 = 0;
    uVar6 = uVar4;
    if (*(longlong *)(unaff_RBX + 0x818) - lVar3 >> 3 != 0) {
      do {
        FUN_1805e7fe0(*(uint64_t *)(uVar4 + lVar3),param_2);
        lVar3 = *(longlong *)(uVar4 + *(longlong *)(unaff_RBX + 0x810));
        if (lVar3 != 0) {
          FUN_180506660(lVar3);
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar3);
        }
        *(uint64_t *)(uVar4 + *(longlong *)(unaff_RBX + 0x810)) = 0;
        uVar5 = (int)uVar6 + 1;
        lVar3 = *(longlong *)(unaff_RBX + 0x810);
        uVar4 = uVar4 + 8;
        uVar6 = (ulonglong)uVar5;
      } while ((ulonglong)(longlong)(int)uVar5 <
               (ulonglong)(*(longlong *)(unaff_RBX + 0x818) - lVar3 >> 3));
    }
    *(longlong *)(unaff_RBX + 0x818) = lVar3;
  }
  if (param_2 != '\0') {
    return;
  }
  uVar7 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(unaff_RBX + 0x930);
  lVar3 = lVar1 + 0x2be8;
  lVar8 = lVar3;
  iVar2 = _Mtx_lock(lVar3);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  FUN_1804dd4d0(lVar1 + 0x2b88,auStackX_18,&stack0x00000008,param_4,uVar7,lVar8);
  iVar2 = _Mtx_unlock(lVar3);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}





// 函数: void FUN_18054085f(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18054085f(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  int iVar2;
  longlong unaff_RBX;
  char unaff_BPL;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int8_t auStackX_18 [8];
  uint64_t uVar7;
  longlong lVar8;
  
  lVar3 = 5;
  param_1 = param_1 + 0x90;
  do {
    FUN_1805e7fe0(param_1,unaff_BPL);
    param_1 = param_1 + 0x180;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar3 = *(longlong *)(unaff_RBX + 0x810);
  uVar4 = 0;
  uVar6 = uVar4;
  if (*(longlong *)(unaff_RBX + 0x818) - lVar3 >> 3 != 0) {
    do {
      FUN_1805e7fe0(*(uint64_t *)(uVar4 + lVar3),unaff_BPL);
      lVar3 = *(longlong *)(uVar4 + *(longlong *)(unaff_RBX + 0x810));
      if (lVar3 != 0) {
        FUN_180506660(lVar3);
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar3);
      }
      *(uint64_t *)(uVar4 + *(longlong *)(unaff_RBX + 0x810)) = 0;
      uVar5 = (int)uVar6 + 1;
      lVar3 = *(longlong *)(unaff_RBX + 0x810);
      uVar4 = uVar4 + 8;
      uVar6 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)(*(longlong *)(unaff_RBX + 0x818) - lVar3 >> 3));
  }
  *(longlong *)(unaff_RBX + 0x818) = lVar3;
  if (unaff_BPL != '\0') {
    return;
  }
  uVar7 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(unaff_RBX + 0x930);
  lVar3 = lVar1 + 0x2be8;
  lVar8 = lVar3;
  iVar2 = _Mtx_lock(lVar3);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  FUN_1804dd4d0(lVar1 + 0x2b88,auStackX_18,&stack0x00000008,param_4,uVar7,lVar8);
  iVar2 = _Mtx_unlock(lVar3);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}





// 函数: void FUN_180540937(void)
void FUN_180540937(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong unaff_RBX;
  char unaff_BPL;
  uint64_t in_R9;
  int8_t auStackX_18 [16];
  uint64_t in_stack_00000030;
  uint64_t uStack0000000000000040;
  uint64_t uVar4;
  longlong lVar5;
  
  if (unaff_BPL == '\0') {
    uVar4 = 0xfffffffffffffffe;
    uStack0000000000000040 = in_stack_00000030;
    lVar2 = *(longlong *)(unaff_RBX + 0x930);
    lVar1 = lVar2 + 0x2be8;
    lVar5 = lVar1;
    iVar3 = _Mtx_lock(lVar1);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    FUN_1804dd4d0(lVar2 + 0x2b88,auStackX_18,&stack0x00000008,in_R9,uVar4,lVar5);
    iVar3 = _Mtx_unlock(lVar1);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    return;
  }
  return;
}





// 函数: void FUN_180540941(void)
void FUN_180540941(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong unaff_RBX;
  uint64_t in_R9;
  int8_t auStackX_18 [16];
  uint64_t in_stack_00000030;
  uint64_t uStack0000000000000040;
  uint64_t uVar4;
  longlong lVar5;
  
  uVar4 = 0xfffffffffffffffe;
  uStack0000000000000040 = in_stack_00000030;
  lVar2 = *(longlong *)(unaff_RBX + 0x930);
  lVar1 = lVar2 + 0x2be8;
  lVar5 = lVar1;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  FUN_1804dd4d0(lVar2 + 0x2b88,auStackX_18,&stack0x00000008,in_R9,uVar4,lVar5);
  iVar3 = _Mtx_unlock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *
FUN_180540960(longlong param_1,int param_2,longlong *param_3,longlong param_4,longlong param_5,
             longlong param_6,longlong *param_7,byte param_8,longlong **param_9)

{
  short *psVar1;
  uint64_t uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int32_t uVar5;
  longlong **pplVar6;
  longlong lVar7;
  longlong *plVar8;
  int8_t uVar9;
  uint uVar10;
  int8_t uVar11;
  longlong *plVar12;
  longlong *plStackX_8;
  longlong *plStackX_18;
  longlong lStackX_20;
  uint64_t uVar13;
  longlong *plVar14;
  
  plVar4 = (longlong *)param_9;
  uVar13 = 0xfffffffffffffffe;
  plVar8 = (longlong *)0x0;
  if (param_9 != (longlong **)0x0) {
    *param_9 = (longlong *)0x0;
  }
  lVar7 = *param_7;
  plStackX_18 = param_3;
  lStackX_20 = param_4;
  if ((lVar7 == 0) ||
     (*(longlong *)(lVar7 + 0x1c8) - (longlong)*(longlong **)(lVar7 + 0x1c0) >> 3 == 0)) {
    param_9 = (longlong **)0x0;
    pplVar6 = (longlong **)&param_9;
    uVar10 = 2;
  }
  else {
    plVar8 = (longlong *)**(longlong **)(lVar7 + 0x1c0);
    plStackX_8 = plVar8;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x28))();
    }
    pplVar6 = &plStackX_8;
    uVar10 = 1;
  }
  *pplVar6 = (longlong *)0x0;
  plVar14 = plVar8;
  if ((uVar10 & 2) != 0) {
    uVar10 = uVar10 & 0xfffffffd;
    if (param_9 != (longlong **)0x0) {
      (**(code **)((longlong)*param_9 + 0x38))();
    }
  }
  if ((uVar10 & 1) != 0) {
    uVar10 = uVar10 & 0xfffffffe;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  param_9 = (longlong **)((longlong)param_2 * 0x180);
  plVar12 = (longlong *)(param_1 + 0x90 + (longlong)param_9);
  if (*plVar12 != 0) {
    uVar2 = *(uint64_t *)(param_1 + 0x8a8);
    plVar3 = (longlong *)*plVar12;
    plStackX_8 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    FUN_1802eb9a0(uVar2,plVar3,0,param_8 ^ 1,0,0x20,uVar10 | 4,uVar13,plVar14);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    lVar7 = *(longlong *)(param_1 + 0x8a8);
    psVar1 = (short *)(lVar7 + 0x2b0);
    *psVar1 = *psVar1 + 1;
    if (*(longlong *)(lVar7 + 0x168) != 0) {
      func_0x0001802eeba0();
    }
    FUN_1805e7fe0(plVar12,0);
  }
  pplVar6 = param_9;
  plVar14 = plStackX_18;
  if (plStackX_18 != (longlong *)0x0) {
    param_9 = &plStackX_18;
    plStackX_18 = (longlong *)*param_7;
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x28))();
    }
    FUN_1805e8630(plVar12,plVar14,param_5,&plStackX_18);
    if ((*(uint *)(*(longlong *)(param_1 + 0x8a8) + 0x2ac) & 0x10000000) != 0) {
      plVar14 = (longlong *)*plVar12;
      plStackX_18 = plVar14;
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x28))(plVar14);
      }
      func_0x0001804ceed0(plVar14);
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x38))(plVar14);
      }
    }
    lVar7 = lStackX_20;
    if (lStackX_20 != 0) {
      param_9 = &plStackX_18;
      plStackX_18 = plVar8;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8);
      }
      lVar7 = FUN_1805e84b0(plVar12,lVar7,param_6,&plStackX_18);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = lVar7;
      }
    }
    uVar13 = *(uint64_t *)(param_1 + 0x8a8);
    plVar4 = (longlong *)*plVar12;
    plStackX_18 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    FUN_1802e8a50(uVar13,plVar4,0,1);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    lVar7 = *(longlong *)(param_1 + 0x8a8);
    psVar1 = (short *)(lVar7 + 0x2b0);
    *psVar1 = *psVar1 + 1;
    if (*(longlong *)(lVar7 + 0x168) != 0) {
      func_0x0001802eeba0();
    }
    lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260) + 0x210);
    uVar10 = *(uint *)(param_5 + 0x58) & 0x300;
    if (uVar10 == 0x100) {
      uVar11 = *(int8_t *)(lVar7 + 0x25fc);
    }
    else if (uVar10 == 0x200) {
      uVar11 = *(int8_t *)(lVar7 + 0x25fe);
    }
    else {
      uVar11 = *(int8_t *)(lVar7 + 0x25fb);
    }
    uVar10 = *(uint *)(param_6 + 0x58) & 0x300;
    if (uVar10 == 0x100) {
      uVar9 = *(int8_t *)(lVar7 + 0x25fc);
    }
    else if (uVar10 == 0x200) {
      uVar9 = *(int8_t *)(lVar7 + 0x25fe);
    }
    else {
      uVar9 = *(int8_t *)(lVar7 + 0x25fb);
    }
    *(int8_t *)(param_1 + 0x118 + (longlong)pplVar6) = uVar11;
    lVar7 = *(longlong *)(param_1 + 0x98 + (longlong)pplVar6);
    if (lVar7 != 0) {
      func_0x0001805ec5f0(lVar7,uVar9,0xff);
    }
  }
  if (((*(longlong *)(param_1 + 0x8a8) != 0) &&
      (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260), lVar7 != 0)) &&
     (lVar7 = *(longlong *)(lVar7 + 0x210), lVar7 != 0)) {
    *(uint64_t *)(lVar7 + 0x48) = 0;
    *(uint64_t *)(lVar7 + 0x50) = 0;
    lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260) + 0x210);
    *(code **)(lVar7 + 0x50) = FUN_180541110;
    *(longlong *)(lVar7 + 0x48) = param_1;
  }
  FUN_180544ac0(param_1);
  if (*(float *)(_DAT_180c86920 + 0x17a0) <= 0.01) {
    *(int32_t *)(param_1 + 0x950) = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0x950) == -1) {
    uVar5 = FUN_1802e5900(*(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x20) + 0x8228,0);
    *(int32_t *)(param_1 + 0x950) = uVar5;
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x38))(plVar8);
  }
  if ((longlong *)*param_7 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_7 + 0x38))();
  }
  return plVar12;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *
FUN_180540db0(longlong param_1,uint64_t param_2,uint64_t param_3,longlong *param_4,
             int8_t param_5,uint64_t *param_6)

{
  short *psVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  longlong *plVar9;
  longlong *plStackX_8;
  longlong *plStack_40;
  uint64_t uStack_38;
  longlong **pplStack_30;
  
  uStack_38 = 0xfffffffffffffffe;
  uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x180,0x10,3,0);
  plVar9 = (longlong *)FUN_180544dc0(uVar8);
  pplStack_30 = &plStackX_8;
  plStackX_8 = (longlong *)*param_4;
  plStack_40 = plVar9;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  FUN_1805e8630(plVar9,param_2,param_3,&plStackX_8);
  *(int8_t *)((longlong)plVar9 + 0x126) = 0;
  *(int8_t *)((longlong)plVar9 + 0x124) = 1;
  *(int8_t *)(plVar9 + 0x11) = param_5;
  uVar8 = param_6[1];
  *(uint64_t *)((longlong)plVar9 + 0xdc) = *param_6;
  *(uint64_t *)((longlong)plVar9 + 0xe4) = uVar8;
  uVar8 = param_6[3];
  *(uint64_t *)((longlong)plVar9 + 0xec) = param_6[2];
  *(uint64_t *)((longlong)plVar9 + 0xf4) = uVar8;
  uVar5 = *(int32_t *)((longlong)param_6 + 0x24);
  uVar6 = *(int32_t *)(param_6 + 5);
  uVar7 = *(int32_t *)((longlong)param_6 + 0x2c);
  *(int32_t *)((longlong)plVar9 + 0xfc) = *(int32_t *)(param_6 + 4);
  *(int32_t *)(plVar9 + 0x20) = uVar5;
  *(int32_t *)((longlong)plVar9 + 0x104) = uVar6;
  *(int32_t *)(plVar9 + 0x21) = uVar7;
  uVar5 = *(int32_t *)((longlong)param_6 + 0x34);
  uVar6 = *(int32_t *)(param_6 + 7);
  uVar7 = *(int32_t *)((longlong)param_6 + 0x3c);
  *(int32_t *)((longlong)plVar9 + 0x10c) = *(int32_t *)(param_6 + 6);
  *(int32_t *)(plVar9 + 0x22) = uVar5;
  *(int32_t *)((longlong)plVar9 + 0x114) = uVar6;
  *(int32_t *)(plVar9 + 0x23) = uVar7;
  FUN_18005ea90(param_1 + 0x810,&plStack_40);
  plVar3 = (longlong *)*plVar9;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  *(uint *)((longlong)plVar3 + 0x2ac) = *(uint *)((longlong)plVar3 + 0x2ac) | 0x10000000;
  lVar4 = plVar3[4];
  if (lVar4 != 0) {
    iVar2 = (int)plVar3[0x57];
    if (((iVar2 != -1) && ((ulonglong)(longlong)iVar2 < *(ulonglong *)(lVar4 + 0x60838))) &&
       ((*(ulonglong *)(*(longlong *)(lVar4 + 0x60830) + (longlong)iVar2 * 0x10) &
        0xffffffff00000000) != 0)) {
      FUN_180398450(lVar4 + 0x607e0,plVar3);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  uVar8 = *(uint64_t *)(param_1 + 0x8a8);
  plVar3 = (longlong *)*plVar9;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  FUN_1802e8a50(uVar8,plVar3,0,1,2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x8a8);
  psVar1 = (short *)(lVar4 + 0x2b0);
  *psVar1 = *psVar1 + 1;
  if (*(longlong *)(lVar4 + 0x168) != 0) {
    func_0x0001802eeba0();
  }
  FUN_180544ac0(param_1);
  if ((longlong *)*param_4 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_4 + 0x38))();
  }
  return plVar9;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180541010(longlong param_1,int32_t param_2)
void FUN_180541010(longlong param_1,int32_t param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int8_t auStack_78 [32];
  int32_t auStack_58 [2];
  uint64_t uStack_50;
  longlong lStack_48;
  int aiStack_40 [6];
  ulonglong uStack_28;
  
  uStack_50 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_78;
  lVar1 = param_1 + 0x958;
  auStack_58[0] = param_2;
  lStack_48 = lVar1;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  aiStack_40[0] = 0;
  aiStack_40[1] = 1;
  aiStack_40[2] = 2;
  aiStack_40[3] = 3;
  aiStack_40[4] = 8;
  aiStack_40[5] = 10;
  piVar5 = aiStack_40;
  lVar4 = 6;
  do {
    plVar2 = *(longlong **)(param_1 + 0x18 + (longlong)*piVar5 * 8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x128))(plVar2,auStack_58);
    }
    piVar5 = piVar5 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  plVar2 = *(longlong **)(param_1 + 0x830);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x128))(plVar2,auStack_58);
  }
  iVar3 = _Mtx_unlock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_78);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180541110(longlong param_1,longlong param_2)
void FUN_180541110(longlong param_1,longlong param_2)

{
  float *pfVar1;
  char cVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint64_t uVar7;
  void *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong lStackX_8;
  int32_t uVar18;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  int32_t uStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  int32_t uStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  uint64_t uStack_148;
  float fStack_140;
  int32_t uStack_13c;
  int32_t uStack_138;
  int32_t uStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  
  uStack_148 = 0xfffffffffffffffe;
  uVar18 = 0;
  if (*(longlong *)(param_1 + 0x8a8) != 0) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260);
      if (lVar9 == 0) {
        puVar8 = &unknown_var_9696_ptr;
LAB_1805411ce:
                    // WARNING: Subroutine does not return
        FUN_180062300(_DAT_180c86928,puVar8);
      }
      if (*(longlong *)(lVar9 + 0x210) == 0) {
        puVar8 = &unknown_var_9632_ptr;
        goto LAB_1805411ce;
      }
      fStack_188 = 1.0;
      fStack_184 = 0.0;
      fStack_180 = 0.0;
      uStack_17c = 0;
      fStack_178 = 0.0;
      fStack_174 = 1.0;
      fStack_170 = 0.0;
      uStack_16c = 0;
      fStack_168 = 0.0;
      fStack_164 = 0.0;
      fStack_160 = 1.0;
      fStack_15c = 0.0;
      fStack_140 = 0.0;
      uStack_13c = 0;
      uStack_138 = 0x3f800000;
      uStack_134 = 0;
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260);
      cVar2 = *(char *)(*(longlong *)(lVar9 + 0x210) + 0xde);
      FUN_18022a890(param_2,cVar2,*(uint64_t *)(lVar9 + 0x208));
      pfVar1 = (float *)(param_2 + ((longlong)cVar2 + 0x40) * 0x10);
      fStack_130 = *pfVar1;
      fStack_12c = pfVar1[1];
      fStack_128 = pfVar1[2];
      fStack_124 = pfVar1[3];
      plVar10 = *(longlong **)(param_1 + 0x80);
      pcVar3 = *(code **)(*plVar10 + 0x150);
      uVar7 = FUN_18022a890(param_2,0,
                            *(uint64_t *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260) + 0x208));
      FUN_18063b5f0(&fStack_188,uVar7);
      fStack_120 = fStack_188 * 0.3 + fStack_184 * 0.0 + fStack_180 * 0.0;
      fStack_11c = fStack_178 * 0.3 + fStack_174 * 0.0 + fStack_170 * 0.0;
      fStack_118 = fStack_168 * 0.3 + fStack_164 * 0.0 + fStack_160 * 0.0;
      fStack_114 = fStack_15c * 0.3 + fStack_15c * 0.0 + fStack_15c * 0.0;
      fStack_110 = fStack_188 * 0.0 + fStack_184 * 0.3 + fStack_180 * 0.0;
      fStack_10c = fStack_178 * 0.0 + fStack_174 * 0.3 + fStack_170 * 0.0;
      fStack_108 = fStack_168 * 0.0 + fStack_164 * 0.3 + fStack_160 * 0.0;
      fStack_104 = fStack_15c * 0.0 + fStack_15c * 0.3 + fStack_15c * 0.0;
      fStack_100 = fStack_140 * fStack_188 + fStack_184 * 0.0 + fStack_180 * 0.3;
      fStack_fc = fStack_140 * fStack_178 + fStack_174 * 0.0 + fStack_170 * 0.3;
      fStack_f8 = fStack_140 * fStack_168 + fStack_164 * 0.0 + fStack_160 * 0.3;
      fStack_f4 = fStack_140 * fStack_15c + fStack_15c * 0.0 + fStack_15c * 0.3;
      fVar16 = fStack_12c - *(float *)(param_2 + 0x404);
      fVar15 = (fStack_128 + 0.7) - *(float *)(param_2 + 0x408);
      fVar17 = fStack_130 - *(float *)(param_2 + 0x400);
      fStack_f0 = fVar17 * fStack_188 + fVar16 * fStack_184 + fVar15 * fStack_180;
      fStack_ec = fVar17 * fStack_178 + fVar16 * fStack_174 + fVar15 * fStack_170;
      fStack_e8 = fVar17 * fStack_168 + fVar16 * fStack_164 + fVar15 * fStack_160;
      fStack_e4 = fVar17 * fStack_15c + fVar16 * fStack_15c + fVar15 * fStack_15c;
      (*pcVar3)(plVar10,&fStack_120);
    }
    plVar10 = (longlong *)(param_1 + 0x90);
    lStackX_8 = 5;
    plVar12 = plVar10;
    do {
      if (*plVar10 != 0) {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260);
        lVar11 = *(longlong *)(lVar9 + 0x210);
        FUN_1805ea790(plVar12,param_2,lVar9,0,*(int8_t *)(param_1 + 0x848),
                      *(int8_t *)(param_1 + 0x8bd),*(int8_t *)(lVar11 + 0xde),
                      *(int8_t *)(lVar11 + 0xe1),*(int8_t *)(lVar11 + 0xdf),
                      *(int8_t *)(lVar11 + 0xe0),uVar18);
        plVar4 = (longlong *)*plVar10;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4);
        }
        uVar18 = 0;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4);
        }
        FUN_1804d5aa0(*(uint64_t *)(param_1 + 0x930),plVar4);
        iVar13 = 0;
        if (plVar4[0x39] - plVar4[0x38] >> 3 != 0) {
          lVar9 = 0;
          do {
            FUN_1804d5aa0(*(uint64_t *)(param_1 + 0x930),*(uint64_t *)(lVar9 + plVar4[0x38]));
            iVar13 = iVar13 + 1;
            lVar9 = lVar9 + 8;
          } while ((ulonglong)(longlong)iVar13 < (ulonglong)(plVar4[0x39] - plVar4[0x38] >> 3));
        }
      }
      plVar12 = plVar12 + 0x30;
      plVar10 = plVar10 + 0x30;
      lStackX_8 = lStackX_8 + -1;
    } while (lStackX_8 != 0);
    iVar13 = 0;
    lVar9 = *(longlong *)(param_1 + 0x810);
    if (*(longlong *)(param_1 + 0x818) - lVar9 >> 3 != 0) {
      lVar11 = 0;
      do {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260);
        lVar6 = *(longlong *)(lVar5 + 0x210);
        FUN_1805ea790(*(uint64_t *)(lVar9 + lVar11),param_2,lVar5,0,
                      *(int8_t *)(param_1 + 0x848),*(int8_t *)(param_1 + 0x8bd),
                      *(int8_t *)(lVar6 + 0xde),*(int8_t *)(lVar6 + 0xe1),
                      *(int8_t *)(lVar6 + 0xdf),*(int8_t *)(lVar6 + 0xe0),uVar18);
        plVar10 = (longlong *)**(longlong **)(lVar11 + *(longlong *)(param_1 + 0x810));
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10);
        }
        uVar18 = 0;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10);
        }
        FUN_1804d5aa0(*(uint64_t *)(param_1 + 0x930),plVar10);
        iVar14 = 0;
        if (plVar10[0x39] - plVar10[0x38] >> 3 != 0) {
          lVar9 = 0;
          do {
            FUN_1804d5aa0(*(uint64_t *)(param_1 + 0x930),*(uint64_t *)(plVar10[0x38] + lVar9));
            iVar14 = iVar14 + 1;
            lVar9 = lVar9 + 8;
          } while ((ulonglong)(longlong)iVar14 < (ulonglong)(plVar10[0x39] - plVar10[0x38] >> 3));
        }
        iVar13 = iVar13 + 1;
        lVar11 = lVar11 + 8;
        lVar9 = *(longlong *)(param_1 + 0x810);
      } while ((ulonglong)(longlong)iVar13 <
               (ulonglong)(*(longlong *)(param_1 + 0x818) - lVar9 >> 3));
    }
    FUN_180541920(param_1,param_2);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001802e8b83)
// WARNING: Removing unreachable block (ram,0x0001802e8ba5)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180541730(longlong param_1,longlong *param_2)
void FUN_180541730(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int8_t uVar2;
  int8_t uVar3;
  int iVar4;
  longlong lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  longlong *plVar8;
  longlong lVar9;
  int8_t uVar10;
  longlong *unaff_RBX;
  longlong **unaff_RBP;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  longlong **pplStackX_20;
  uint64_t in_stack_ffffffffffffff78;
  int32_t in_stack_ffffffffffffff80;
  int8_t uVar15;
  uint uVar16;
  
  lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260) + 0x210);
  plStackX_10 = param_2;
  uVar6 = FUN_18062b1e0(_DAT_180c8ed18,0x220,0x10,3);
  uVar10 = *(int8_t *)(lVar9 + 0x2589);
  bVar1 = *(byte *)(lVar9 + 0x2588);
  uVar15 = *(int8_t *)(lVar9 + 0x2587);
  uVar2 = *(int8_t *)(lVar9 + 0x2586);
  uVar3 = *(int8_t *)(lVar9 + 0x2585);
  pplStackX_20 = &plStackX_8;
  uVar7 = FUN_180544d70(lVar9,&plStackX_8);
  uVar16 = (uint)bVar1;
  uVar11 = CONCAT31((int3)((uint)in_stack_ffffffffffffff80 >> 8),uVar2);
  uVar12 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff78 >> 8),uVar3);
  FUN_1805ef6e0(uVar6,*(uint64_t *)(*(longlong *)(param_1 + 0x8a8) + 0x260),
                *(uint64_t *)(lVar9 + 0x2548),uVar7,uVar12,uVar11,uVar15,uVar16,uVar10);
  uVar6 = FUN_18062b1e0(_DAT_180c8ed18,0x2f0,0x10,3);
  plVar8 = (longlong *)FUN_1802e6b00(uVar6,4);
  if (plVar8 != (longlong *)0x0) {
    pplStackX_18 = (longlong **)plVar8;
    (**(code **)(*plVar8 + 0x28))(plVar8);
  }
  pplStackX_18 = *(longlong ***)(param_1 + 0x10);
  *(longlong **)(param_1 + 0x10) = plVar8;
  if (pplStackX_18 != (longlong **)0x0) {
    (**(code **)((longlong)*pplStackX_18 + 0x38))();
  }
  FUN_180170ac0(*(uint64_t *)(param_1 + 0x10),&unknown_var_9752_ptr);
  FUN_1802ec3d0(*(uint64_t *)(param_1 + 0x10),*(uint64_t *)(lVar9 + 0x2548));
  FUN_1802fc0f0(*(uint64_t *)(*(longlong *)(param_1 + 0x10) + 0x260),plStackX_10);
  lVar9 = *(longlong *)(param_1 + 0x10);
  *(uint *)(lVar9 + 0x2ac) = *(uint *)(lVar9 + 0x2ac) | 0x10000000;
  lVar13 = *(longlong *)(lVar9 + 0x20);
  if (lVar13 != 0) {
    iVar4 = *(int *)(lVar9 + 0x2b8);
    if (((iVar4 != -1) && ((ulonglong)(longlong)iVar4 < *(ulonglong *)(lVar13 + 0x60838))) &&
       ((*(ulonglong *)(*(longlong *)(lVar13 + 0x60830) + (longlong)iVar4 * 0x10) &
        0xffffffff00000000) != 0)) {
      FUN_180398450(lVar13 + 0x607e0);
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x10);
  lVar13 = *(longlong *)(param_1 + 0x8a8);
  lVar9 = plVar8[4];
  plStackX_8 = unaff_RBX;
  pplStackX_18 = unaff_RBP;
  if ((lVar9 == 0) || (lVar9 == *(longlong *)(lVar13 + 0x20))) {
    uVar10 = 0;
    if (plVar8[0x2d] == 0) {
      if (lVar9 != 0) {
        FUN_180398550(*(longlong *)(lVar13 + 0x20) + 0x607e0);
      }
    }
    else {
      uVar11 = 0;
      FUN_1802eb9a0(plVar8[0x2d],plVar8,1,0,uVar12 & 0xffffffffffffff00,0x14,uVar15,uVar16,
                    0xfffffffffffffffe);
    }
  }
  else {
    uVar10 = 1;
    FUN_180198980(lVar9);
  }
  if ((*(uint *)((longlong)plVar8 + 0x2ac) & 0x20000) == 0) {
    FUN_1802ed990(lVar13,1);
  }
  plVar8[0x2d] = lVar13;
  lVar9 = lVar13;
  do {
    lVar5 = lVar9;
    lVar9 = *(longlong *)(lVar5 + 0x168);
  } while (lVar9 != 0);
  FUN_1802f2700(lVar5,1);
  FUN_1802eaec0(plVar8,*(uint64_t *)(lVar13 + 0x20),uVar10,1,0,uVar11 & 0xffffff00,1,0xffffffff);
  plStackX_10 = plVar8;
  (**(code **)(*plVar8 + 0x28))(plVar8);
  FUN_1800b87c0(lVar13 + 0x1c0,&plStackX_10);
  if (plStackX_10 != (longlong *)0x0) {
    (**(code **)(*plStackX_10 + 0x38))();
  }
  FUN_180254610(plVar8);
  FUN_1802eace0(plVar8);
  *(short *)(plVar8 + 0x56) = (short)plVar8[0x56] + 1;
  if (plVar8[0x2d] != 0) {
    func_0x0001802eeba0();
  }
  *(short *)(lVar13 + 0x2b0) = *(short *)(lVar13 + 0x2b0) + 1;
  if (*(longlong *)(lVar13 + 0x168) != 0) {
    func_0x0001802eeba0();
    for (lVar9 = *(longlong *)(lVar13 + 0x168); lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x168)) {
      lVar13 = lVar9;
    }
  }
  plStackX_10 = plStackX_8;
  bVar1 = *(byte *)(lVar13 + 0x2e8);
  *(byte *)(lVar13 + 0x2e8) = bVar1 & 0xf7 | 8;
  lVar9 = *(longlong *)(lVar13 + 0x20);
  uVar12 = 0;
  if (lVar9 != 0) {
    lVar5 = *(longlong *)(lVar13 + 0x28);
    if ((bVar1 & 3 | 8) == 0xb) {
      if ((*(longlong *)(lVar5 + 0x170) == 0) &&
         (plVar8 = *(longlong **)(lVar13 + 0x10), plVar8 != (longlong *)0x0)) {
        pplStackX_18 = &plStackX_8;
        plStackX_8 = plVar8;
        (**(code **)(*plVar8 + 0x28))();
        uVar6 = FUN_180389a90(lVar9 + 0x29a0,&plStackX_8);
        *(uint64_t *)(*(longlong *)(lVar13 + 0x28) + 0x170) = uVar6;
        lVar9 = *(longlong *)(lVar13 + 0x20);
        plVar8 = *(longlong **)(lVar9 + 0x29a8);
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x18))
                    (plVar8,*(uint64_t *)(*(longlong *)(lVar13 + 0x28) + 0x170),lVar13 + 0x70);
          lVar9 = *(longlong *)(lVar13 + 0x20);
        }
        plVar8 = *(longlong **)(lVar9 + 0x29a8);
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x20))
                    (plVar8,*(uint64_t *)(*(longlong *)(lVar13 + 0x28) + 0x170),
                     *(int32_t *)(lVar13 + 0x18));
        }
      }
    }
    else if (*(longlong *)(lVar5 + 0x170) != 0) {
      plVar8 = *(longlong **)(lVar9 + 0x29a8);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,*(longlong *)(lVar5 + 0x170));
        lVar5 = *(longlong *)(lVar13 + 0x28);
      }
      *(uint64_t *)(lVar5 + 0x170) = 0;
    }
  }
  uVar14 = uVar12;
  if (*(longlong *)(lVar13 + 0x1c8) - *(longlong *)(lVar13 + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802f2700(*(uint64_t *)(uVar14 + *(longlong *)(lVar13 + 0x1c0)),(bVar1 & 1) != 0);
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      uVar14 = uVar14 + 8;
    } while ((ulonglong)(longlong)(int)uVar11 <
             (ulonglong)(*(longlong *)(lVar13 + 0x1c8) - *(longlong *)(lVar13 + 0x1c0) >> 3));
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018054205d)
// WARNING: Removing unreachable block (ram,0x000180541e8f)
// WARNING: Removing unreachable block (ram,0x000180541f70)
// WARNING: Removing unreachable block (ram,0x00018054213d)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



