#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part182_sub002_sub002.c - 1 个函数

// 函数: void FUN_180772cf0(uint *param_1,int param_2)
void FUN_180772cf0(uint *param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint auStackX_10 [6];
  
  fVar4 = (float)param_2 * 0.01;
  FUN_180768b90(auStackX_10);
  fVar2 = 0.0;
  param_1[1] = auStackX_10[0];
  param_1[6] = auStackX_10[0];
  if (param_1[5] <= auStackX_10[0]) {
    fVar2 = (float)(auStackX_10[0] - param_1[5]);
  }
  fVar3 = fVar4 * (float)param_1[7];
  fVar2 = fVar4 * (float)param_1[8] + fVar2;
  param_1[7] = (uint)fVar3;
  param_1[8] = (uint)fVar2;
  if (*param_1 < auStackX_10[0]) {
    uVar1 = (auStackX_10[0] - param_1[0xc]) - *param_1;
    param_1[2] = uVar1;
    fVar3 = ((float)uVar1 * 100.0) / (fVar2 * (1.0 - fVar4)) + fVar3;
    param_1[7] = (uint)fVar3;
  }
  param_1[5] = auStackX_10[0];
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(int8_t *)(param_1 + 0xe) = 0;
  param_1[10] = (uint)((1.0 - fVar4) * fVar3);
  return;
}



uint64_t FUN_180772dc0(int64_t param_1,int32_t *param_2,int param_3)

{
  uint64_t uVar1;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  
  if (param_3 != 8) {
    if (*(code **)(param_1 + 0x68) == (code *)0x0) {
      *param_2 = 0;
      return 0x44;
    }
                    // WARNING: Could not recover jumptable at 0x000180772e32. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(param_1 + 0x68))();
    return uVar1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uVar1 = (**(code **)(param_1 + 0x88))(param_1,*(int32_t *)(param_1 + 0x11c),&uStack_48);
  if ((int)uVar1 == 0) {
    *param_2 = uStack_38._4_4_;
    return 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_180772e40(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t ***pppuStack_58;
  uint64_t ***pppuStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  int32_t uStack_20;
  int16_t uStack_1c;
  int32_t uStack_18;
  
  lVar3 = 0;
  pppuStack_50 = &pppuStack_58;
  uStack_48 = 0;
  pppuStack_58 = &pppuStack_58;
  uStack_40 = 0;
  plVar1 = *(int64_t **)(param_1 + 0x170);
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_1c = 1;
  uStack_18 = 0;
  lVar2 = lVar3;
  if ((plVar1 != (int64_t *)0x0) &&
     (lVar2 = (**(code **)(*plVar1 + 8))(plVar1,&pppuStack_58), (int)lVar2 == 0)) {
    lVar2 = *(int64_t *)(param_1 + 0x168);
    if (*(int64_t *)(param_1 + 0x168) == 0) {
      lVar2 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x48,&unknown_var_2992_ptr,0xfe,0,0,1);
      if (lVar2 != 0) {
        *(int64_t *)(lVar2 + 8) = lVar2;
        *(int64_t *)lVar2 = lVar2;
        *(uint64_t *)(lVar2 + 0x10) = 0;
        *(uint64_t *)(lVar2 + 0x18) = 0;
        *(uint64_t *)(lVar2 + 0x20) = 0;
        *(uint64_t *)(lVar2 + 0x30) = 0;
        *(uint64_t *)(lVar2 + 0x28) = 0;
        *(int32_t *)(lVar2 + 0x38) = 0;
        *(int16_t *)(lVar2 + 0x3c) = 1;
        *(int32_t *)(lVar2 + 0x40) = 0;
        lVar3 = lVar2;
      }
      *(int64_t *)(param_1 + 0x168) = lVar3;
      lVar2 = lVar3;
      if (lVar3 == 0) {
        return 0x26;
      }
    }
    lVar2 = FUN_1807d83f0(lVar2,&pppuStack_58);
  }
  return lVar2;
}



uint64_t FUN_180772f60(int64_t param_1,int *param_2,uint param_3)

{
  uint64_t uVar1;
  
  *param_2 = 0;
  if ((*(int64_t *)(param_1 + 0x170) == 0) || (param_3 != 8)) {
    if ((*(code **)(param_1 + 0x78) == (code *)0x0) || ((*(uint *)(param_1 + 0x48) & param_3) == 0))
    {
      uVar1 = 0x44;
    }
    else {
      uVar1 = (**(code **)(param_1 + 0x78))(param_1);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
    }
  }
  else {
    uVar1 = func_0x00018076a7d0();
    if ((int)uVar1 == 0) {
      *param_2 = *param_2 - *(int *)(param_1 + 0x110);
      return 0;
    }
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180772fe0(int64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
             int32_t param_5,int32_t param_6,int8_t param_7)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  
  lVar3 = *(int64_t *)(param_1 + 0x168);
  if (lVar3 == 0) {
    lVar3 = 0;
    lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x48,&unknown_var_2992_ptr,0x208,0,0,1);
    if (lVar1 != 0) {
      *(int64_t *)(lVar1 + 8) = lVar1;
      *(int64_t *)lVar1 = lVar1;
      *(uint64_t *)(lVar1 + 0x10) = 0;
      *(uint64_t *)(lVar1 + 0x18) = 0;
      *(uint64_t *)(lVar1 + 0x20) = 0;
      *(uint64_t *)(lVar1 + 0x30) = 0;
      *(uint64_t *)(lVar1 + 0x28) = 0;
      *(int32_t *)(lVar1 + 0x38) = 0;
      *(int16_t *)(lVar1 + 0x3c) = 1;
      *(int32_t *)(lVar1 + 0x40) = 0;
      lVar3 = lVar1;
    }
    *(int64_t *)(param_1 + 0x168) = lVar3;
    if (lVar3 == 0) {
      return 0x26;
    }
  }
  uVar2 = FUN_1807d84c0(lVar3,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar2;
}



uint64_t FUN_18077302d(int64_t param_1)

{
  int64_t in_RAX;
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t unaff_RBX;
  int32_t unaff_EBP;
  uint64_t unaff_R14;
  
  *(uint64_t *)(in_RAX + 8) = unaff_R14;
  lVar3 = 0;
  *(int32_t *)(in_RAX + -0x28) = 0;
  lVar1 = SystemResourceManager(*(uint64_t *)(param_1 + 0x1a0));
  if (lVar1 != 0) {
    *(int64_t *)(lVar1 + 8) = lVar1;
    *(int64_t *)lVar1 = lVar1;
    *(uint64_t *)(lVar1 + 0x10) = 0;
    *(uint64_t *)(lVar1 + 0x18) = 0;
    *(uint64_t *)(lVar1 + 0x20) = 0;
    *(uint64_t *)(lVar1 + 0x30) = 0;
    *(uint64_t *)(lVar1 + 0x28) = 0;
    *(int32_t *)(lVar1 + 0x38) = 0;
    *(int16_t *)(lVar1 + 0x3c) = 1;
    *(int32_t *)(lVar1 + 0x40) = 0;
    lVar3 = lVar1;
  }
  *(int64_t *)(unaff_RBX + 0x168) = lVar3;
  if (lVar3 == 0) {
    uVar2 = 0x26;
  }
  else {
    uVar2 = FUN_1807d84c0(lVar3,unaff_EBP);
  }
  return uVar2;
}



int FUN_18077308b(int param_1)

{
  return param_1 + 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807730d0(int64_t param_1,int64_t param_2,uint param_3,int *param_4)

{
  int64_t *plVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int iVar9;
  int iVar10;
  int iStackX_8;
  uint auStack_d4 [3];
  uint64_t *****pppppuStack_c8;
  uint64_t *****pppppuStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  int32_t uStack_90;
  int16_t uStack_8c;
  int32_t uStack_88;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  
  bVar2 = false;
  iStackX_8 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  iVar9 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uVar5 = (**(code **)(param_1 + 0x88))(param_1,*(int32_t *)(param_1 + 0x11c),&uStack_78);
  uVar8 = uVar5 & 0xffffffff;
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  iVar10 = (int)uStack_70;
  if (iVar10 == 1) {
    iVar10 = 1;
  }
  else if (iVar10 == 2) {
    iVar10 = 2;
  }
  else if (iVar10 == 3) {
    iVar10 = 3;
  }
  else if ((iVar10 == 4) || (iVar10 == 5)) {
    iVar10 = 4;
  }
  else {
    iVar10 = 1;
  }
  iVar10 = iVar10 * uStack_70._4_4_;
  if (param_3 != 0) {
    do {
      auStack_d4[0] = 0;
      if ((*(int64_t *)(param_1 + 0x140) == 0) ||
         (((*(uint *)(param_1 + 0x150) <= param_3 && (*(int *)(param_1 + 0x15c) == 0)) &&
          (param_2 != 0)))) {
        uVar3 = param_3;
        if (*(uint *)(param_1 + 0x150) != 0) {
          uVar3 = param_3 - param_3 % *(uint *)(param_1 + 0x150);
        }
        if (param_2 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = (uint64_t)(uint)(iStackX_8 * iVar10) + param_2;
        }
        uVar4 = (**(code **)(param_1 + 0x60))(param_1,lVar7,uVar3,auStack_d4);
        uVar8 = (uint64_t)uVar4;
        *(uint64_t *)(param_1 + 0x158) = 0;
        if (uVar4 == 0) {
          bVar2 = true;
        }
        uVar4 = auStack_d4[0];
        if (uVar3 < auStack_d4[0]) {
          uVar4 = uVar3;
        }
      }
      else {
        iVar9 = *(int *)(param_1 + 0x158);
        if (iVar9 == 0) {
          uVar3 = (**(code **)(param_1 + 0x60))
                            (param_1,*(int64_t *)(param_1 + 0x140),*(uint *)(param_1 + 0x150),
                             param_1 + 0x15c);
          uVar8 = (uint64_t)uVar3;
          uVar4 = auStack_d4[0];
          if (uVar3 != 0) goto LAB_1807732d8;
          iVar9 = *(int *)(param_1 + 0x158);
          bVar2 = true;
        }
        uVar3 = *(uint *)(param_1 + 0x15c);
        uVar4 = uVar3 - iVar9;
        if (iVar9 + param_3 <= uVar3) {
          uVar4 = param_3;
        }
        if (param_2 != 0) {
                    // WARNING: Subroutine does not return
          memcpy((uint64_t)(uint)(iStackX_8 * iVar10) + param_2,
                 (uint64_t)(uint)(iVar9 * iVar10) + *(int64_t *)(param_1 + 0x140),uVar4 * iVar10);
        }
        *(uint *)(param_1 + 0x158) = uVar4 + iVar9;
        if (uVar3 <= uVar4 + iVar9) {
          *(uint64_t *)(param_1 + 0x158) = 0;
        }
      }
LAB_1807732d8:
      iVar9 = iStackX_8 + uVar4;
      param_3 = param_3 - uVar4;
    } while (((uVar4 != 0) && ((int)uVar8 == 0)) && (iStackX_8 = iVar9, param_3 != 0));
    if (bVar2) {
      plVar1 = *(int64_t **)(param_1 + 0x170);
      pppppuStack_c0 = &pppppuStack_c8;
      lVar7 = 0;
      uStack_b8 = 0;
      pppppuStack_c8 = &pppppuStack_c8;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_90 = 0;
      uStack_8c = 1;
      uStack_88 = 0;
      if ((plVar1 != (int64_t *)0x0) &&
         (iVar10 = (**(code **)(*plVar1 + 8))(plVar1,&pppppuStack_c8), iVar10 == 0)) {
        lVar6 = *(int64_t *)(param_1 + 0x168);
        if (*(int64_t *)(param_1 + 0x168) == 0) {
          lVar6 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x48,&unknown_var_2992_ptr,0xfe,0,0
                                ,1);
          if (lVar6 != 0) {
            *(int64_t *)(lVar6 + 8) = lVar6;
            *(int64_t *)lVar6 = lVar6;
            *(uint64_t *)(lVar6 + 0x10) = 0;
            *(uint64_t *)(lVar6 + 0x18) = 0;
            *(uint64_t *)(lVar6 + 0x20) = 0;
            *(uint64_t *)(lVar6 + 0x30) = 0;
            *(uint64_t *)(lVar6 + 0x28) = 0;
            *(int32_t *)(lVar6 + 0x38) = 0;
            *(int16_t *)(lVar6 + 0x3c) = 1;
            *(int32_t *)(lVar6 + 0x40) = 0;
            lVar7 = lVar6;
          }
          *(int64_t *)(param_1 + 0x168) = lVar7;
          lVar6 = lVar7;
          if (lVar7 == 0) goto LAB_1807733e2;
        }
        FUN_1807d83f0(lVar6,&pppppuStack_c8);
      }
    }
  }
LAB_1807733e2:
  if (param_4 != (int *)0x0) {
    *param_4 = iVar9;
  }
  return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180773143(int param_1)

{
  int64_t *plVar1;
  char cVar2;
  int in_EAX;
  uint uVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint unaff_ESI;
  int32_t unaff_EDI;
  uint uVar9;
  int iVar10;
  uint64_t unaff_R12;
  int64_t unaff_R13;
  uint uVar11;
  int iVar12;
  
  if (param_1 - in_EAX == 0) {
    in_EAX = 1;
  }
  else {
    iVar8 = (param_1 - in_EAX) - in_EAX;
    if (iVar8 == 0) {
      in_EAX = 2;
    }
    else {
      iVar8 = iVar8 - in_EAX;
      if (iVar8 == 0) {
        in_EAX = 3;
      }
      else if ((iVar8 == in_EAX) || (iVar8 - in_EAX == in_EAX)) {
        in_EAX = 4;
      }
    }
  }
  iVar8 = in_EAX * *(int *)(unaff_RBP + -0xd);
  if (unaff_ESI == 0) goto LAB_1807733e2;
  do {
    lVar7 = *(int64_t *)(unaff_RBX + 0x140);
    *(int32_t *)(unaff_RBP + -0x75) = 0;
    if ((lVar7 == 0) ||
       (((*(uint *)(unaff_RBX + 0x150) <= unaff_ESI && (*(int *)(unaff_RBX + 0x15c) == 0)) &&
        (unaff_R13 != 0)))) {
      uVar11 = unaff_ESI;
      if (*(uint *)(unaff_RBX + 0x150) != 0) {
        uVar11 = unaff_ESI - unaff_ESI % *(uint *)(unaff_RBX + 0x150);
      }
      uVar3 = (**(code **)(unaff_RBX + 0x60))();
      uVar9 = *(uint *)(unaff_RBP + -0x75);
      unaff_R12 = (uint64_t)uVar3;
      *(uint64_t *)(unaff_RBX + 0x158) = 0;
      uVar4 = *(uint *)(unaff_RBP + -0x79) & 0xff;
      if (uVar3 == 0) {
        uVar4 = 1;
      }
      *(uint *)(unaff_RBP + -0x79) = uVar4;
      if (uVar11 < uVar9) {
        uVar9 = uVar11;
      }
LAB_1807732d4:
      cVar2 = (char)uVar4;
      iVar12 = *(int *)(unaff_RBP + 0x67);
    }
    else {
      iVar10 = *(int *)(unaff_RBX + 0x158);
      if (iVar10 == 0) {
        uVar5 = (**(code **)(unaff_RBX + 0x60))();
        unaff_R12 = uVar5 & 0xffffffff;
        if ((int)uVar5 != 0) {
          uVar4 = *(uint *)(unaff_RBP + -0x79);
          uVar9 = *(uint *)(unaff_RBP + -0x75);
          goto LAB_1807732d4;
        }
        iVar10 = *(int *)(unaff_RBX + 0x158);
        *(int *)(unaff_RBP + -0x79) = (int)CONCAT71((int7)(uVar5 >> 8),1);
      }
      uVar11 = *(uint *)(unaff_RBX + 0x15c);
      iVar12 = *(int *)(unaff_RBP + 0x67);
      uVar9 = uVar11 - iVar10;
      if (iVar10 + unaff_ESI <= uVar11) {
        uVar9 = unaff_ESI;
      }
      if (unaff_R13 != 0) {
                    // WARNING: Subroutine does not return
        memcpy((uint64_t)(uint)(iVar12 * iVar8) + unaff_R13,
               (uint64_t)(uint)(iVar10 * iVar8) + *(int64_t *)(unaff_RBX + 0x140),uVar9 * iVar8);
      }
      *(uint *)(unaff_RBX + 0x158) = uVar9 + iVar10;
      if (uVar11 <= uVar9 + iVar10) {
        *(uint64_t *)(unaff_RBX + 0x158) = 0;
      }
      cVar2 = (char)*(int32_t *)(unaff_RBP + -0x79);
    }
    unaff_ESI = unaff_ESI - uVar9;
    *(uint *)(unaff_RBP + 0x67) = iVar12 + uVar9;
  } while (((uVar9 != 0) && ((int)unaff_R12 == 0)) && (unaff_ESI != 0));
  if (cVar2 != '\0') {
    plVar1 = *(int64_t **)(unaff_RBX + 0x170);
    lVar7 = 0;
    *(int64_t *)(unaff_RBP + -0x61) = unaff_RBP + -0x69;
    *(uint64_t *)(unaff_RBP + -0x59) = 0;
    *(int64_t *)(unaff_RBP + -0x69) = unaff_RBP + -0x69;
    *(uint64_t *)(unaff_RBP + -0x51) = 0;
    *(uint64_t *)(unaff_RBP + -0x49) = 0;
    *(uint64_t *)(unaff_RBP + -0x39) = 0;
    *(uint64_t *)(unaff_RBP + -0x41) = 0;
    *(int32_t *)(unaff_RBP + -0x31) = 0;
    *(int16_t *)(unaff_RBP + -0x2d) = 1;
    *(int32_t *)(unaff_RBP + -0x29) = 0;
    if ((plVar1 != (int64_t *)0x0) &&
       (iVar8 = (**(code **)(*plVar1 + 8))(plVar1,unaff_RBP + -0x69), iVar8 == 0)) {
      lVar6 = *(int64_t *)(unaff_RBX + 0x168);
      if (*(int64_t *)(unaff_RBX + 0x168) == 0) {
        lVar6 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x48,&unknown_var_2992_ptr,0xfe,0);
        if (lVar6 != 0) {
          *(int64_t *)(lVar6 + 8) = lVar6;
          *(int64_t *)lVar6 = lVar6;
          *(uint64_t *)(lVar6 + 0x10) = 0;
          *(uint64_t *)(lVar6 + 0x18) = 0;
          *(uint64_t *)(lVar6 + 0x20) = 0;
          *(uint64_t *)(lVar6 + 0x30) = 0;
          *(uint64_t *)(lVar6 + 0x28) = 0;
          *(int32_t *)(lVar6 + 0x38) = 0;
          *(int16_t *)(lVar6 + 0x3c) = 1;
          *(int32_t *)(lVar6 + 0x40) = 0;
          lVar7 = lVar6;
        }
        *(int64_t *)(unaff_RBX + 0x168) = lVar7;
        lVar6 = lVar7;
        if (lVar7 == 0) goto LAB_1807733df;
      }
      FUN_1807d83f0(lVar6,unaff_RBP + -0x69);
    }
  }
LAB_1807733df:
  unaff_EDI = *(int32_t *)(unaff_RBP + 0x67);
LAB_1807733e2:
  if (*(int32_t **)(unaff_RBP + 0x7f) != (int32_t *)0x0) {
    **(int32_t **)(unaff_RBP + 0x7f) = unaff_EDI;
  }
  return unaff_R12 & 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180773193(void)

{
  int64_t *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint unaff_ESI;
  uint uVar9;
  uint64_t unaff_R12;
  int64_t unaff_R13;
  uint uVar10;
  int iVar11;
  int unaff_R15D;
  
  do {
    lVar8 = *(int64_t *)(unaff_RBX + 0x140);
    *(int32_t *)(unaff_RBP + -0x75) = 0;
    if ((lVar8 == 0) ||
       (((*(uint *)(unaff_RBX + 0x150) <= unaff_ESI && (*(int *)(unaff_RBX + 0x15c) == 0)) &&
        (unaff_R13 != 0)))) {
      uVar10 = unaff_ESI;
      if (*(uint *)(unaff_RBX + 0x150) != 0) {
        uVar10 = unaff_ESI - unaff_ESI % *(uint *)(unaff_RBX + 0x150);
      }
      uVar3 = (**(code **)(unaff_RBX + 0x60))();
      uVar9 = *(uint *)(unaff_RBP + -0x75);
      unaff_R12 = (uint64_t)uVar3;
      *(uint64_t *)(unaff_RBX + 0x158) = 0;
      uVar4 = *(uint *)(unaff_RBP + -0x79) & 0xff;
      if (uVar3 == 0) {
        uVar4 = 1;
      }
      *(uint *)(unaff_RBP + -0x79) = uVar4;
      if (uVar10 < uVar9) {
        uVar9 = uVar10;
      }
LAB_1807732d4:
      cVar2 = (char)uVar4;
      iVar11 = *(int *)(unaff_RBP + 0x67);
    }
    else {
      iVar5 = *(int *)(unaff_RBX + 0x158);
      if (iVar5 == 0) {
        uVar6 = (**(code **)(unaff_RBX + 0x60))();
        unaff_R12 = uVar6 & 0xffffffff;
        if ((int)uVar6 != 0) {
          uVar4 = *(uint *)(unaff_RBP + -0x79);
          uVar9 = *(uint *)(unaff_RBP + -0x75);
          goto LAB_1807732d4;
        }
        iVar5 = *(int *)(unaff_RBX + 0x158);
        *(int *)(unaff_RBP + -0x79) = (int)CONCAT71((int7)(uVar6 >> 8),1);
      }
      uVar10 = *(uint *)(unaff_RBX + 0x15c);
      iVar11 = *(int *)(unaff_RBP + 0x67);
      uVar9 = uVar10 - iVar5;
      if (iVar5 + unaff_ESI <= uVar10) {
        uVar9 = unaff_ESI;
      }
      if (unaff_R13 != 0) {
                    // WARNING: Subroutine does not return
        memcpy((uint64_t)(uint)(iVar11 * unaff_R15D) + unaff_R13,
               (uint64_t)(uint)(iVar5 * unaff_R15D) + *(int64_t *)(unaff_RBX + 0x140),
               uVar9 * unaff_R15D);
      }
      *(uint *)(unaff_RBX + 0x158) = uVar9 + iVar5;
      if (uVar10 <= uVar9 + iVar5) {
        *(uint64_t *)(unaff_RBX + 0x158) = 0;
      }
      cVar2 = (char)*(int32_t *)(unaff_RBP + -0x79);
    }
    unaff_ESI = unaff_ESI - uVar9;
    *(uint *)(unaff_RBP + 0x67) = iVar11 + uVar9;
  } while (((uVar9 != 0) && ((int)unaff_R12 == 0)) && (unaff_ESI != 0));
  if (cVar2 != '\0') {
    plVar1 = *(int64_t **)(unaff_RBX + 0x170);
    lVar8 = 0;
    *(int64_t *)(unaff_RBP + -0x61) = unaff_RBP + -0x69;
    *(uint64_t *)(unaff_RBP + -0x59) = 0;
    *(int64_t *)(unaff_RBP + -0x69) = unaff_RBP + -0x69;
    *(uint64_t *)(unaff_RBP + -0x51) = 0;
    *(uint64_t *)(unaff_RBP + -0x49) = 0;
    *(uint64_t *)(unaff_RBP + -0x39) = 0;
    *(uint64_t *)(unaff_RBP + -0x41) = 0;
    *(int32_t *)(unaff_RBP + -0x31) = 0;
    *(int16_t *)(unaff_RBP + -0x2d) = 1;
    *(int32_t *)(unaff_RBP + -0x29) = 0;
    if ((plVar1 != (int64_t *)0x0) &&
       (iVar5 = (**(code **)(*plVar1 + 8))(plVar1,unaff_RBP + -0x69), iVar5 == 0)) {
      lVar7 = *(int64_t *)(unaff_RBX + 0x168);
      if (*(int64_t *)(unaff_RBX + 0x168) == 0) {
        lVar7 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x48,&unknown_var_2992_ptr,0xfe,0);
        if (lVar7 != 0) {
          *(int64_t *)(lVar7 + 8) = lVar7;
          *(int64_t *)lVar7 = lVar7;
          *(uint64_t *)(lVar7 + 0x10) = 0;
          *(uint64_t *)(lVar7 + 0x18) = 0;
          *(uint64_t *)(lVar7 + 0x20) = 0;
          *(uint64_t *)(lVar7 + 0x30) = 0;
          *(uint64_t *)(lVar7 + 0x28) = 0;
          *(int32_t *)(lVar7 + 0x38) = 0;
          *(int16_t *)(lVar7 + 0x3c) = 1;
          *(int32_t *)(lVar7 + 0x40) = 0;
          lVar8 = lVar7;
        }
        *(int64_t *)(unaff_RBX + 0x168) = lVar8;
        lVar7 = lVar8;
        if (lVar8 == 0) goto LAB_1807733df;
      }
      FUN_1807d83f0(lVar7,unaff_RBP + -0x69);
    }
  }
LAB_1807733df:
  if (*(int32_t **)(unaff_RBP + 0x7f) != (int32_t *)0x0) {
    **(int32_t **)(unaff_RBP + 0x7f) = *(int32_t *)(unaff_RBP + 0x67);
  }
  return unaff_R12 & 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_180773305(void)

{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int32_t unaff_R12D;
  
  plVar1 = *(int64_t **)(unaff_RBX + 0x170);
  lVar4 = 0;
  *(int64_t *)(unaff_RBP + -0x61) = unaff_RBP + -0x69;
  *(uint64_t *)(unaff_RBP + -0x59) = 0;
  *(int64_t *)(unaff_RBP + -0x69) = unaff_RBP + -0x69;
  *(uint64_t *)(unaff_RBP + -0x51) = 0;
  *(uint64_t *)(unaff_RBP + -0x49) = 0;
  *(uint64_t *)(unaff_RBP + -0x39) = 0;
  *(uint64_t *)(unaff_RBP + -0x41) = 0;
  *(int32_t *)(unaff_RBP + -0x31) = 0;
  *(int16_t *)(unaff_RBP + -0x2d) = 1;
  *(int32_t *)(unaff_RBP + -0x29) = 0;
  if ((plVar1 != (int64_t *)0x0) &&
     (iVar2 = (**(code **)(*plVar1 + 8))(plVar1,unaff_RBP + -0x69), iVar2 == 0)) {
    lVar3 = *(int64_t *)(unaff_RBX + 0x168);
    if (*(int64_t *)(unaff_RBX + 0x168) == 0) {
      lVar3 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x48,&unknown_var_2992_ptr,0xfe,0);
      if (lVar3 != 0) {
        *(int64_t *)(lVar3 + 8) = lVar3;
        *(int64_t *)lVar3 = lVar3;
        *(uint64_t *)(lVar3 + 0x10) = 0;
        *(uint64_t *)(lVar3 + 0x18) = 0;
        *(uint64_t *)(lVar3 + 0x20) = 0;
        *(uint64_t *)(lVar3 + 0x30) = 0;
        *(uint64_t *)(lVar3 + 0x28) = 0;
        *(int32_t *)(lVar3 + 0x38) = 0;
        *(int16_t *)(lVar3 + 0x3c) = 1;
        *(int32_t *)(lVar3 + 0x40) = 0;
        lVar4 = lVar3;
      }
      *(int64_t *)(unaff_RBX + 0x168) = lVar4;
      lVar3 = lVar4;
      if (lVar4 == 0) goto LAB_1807733df;
    }
    FUN_1807d83f0(lVar3,unaff_RBP + -0x69);
  }
LAB_1807733df:
  if (*(int32_t **)(unaff_RBP + 0x7f) != (int32_t *)0x0) {
    **(int32_t **)(unaff_RBP + 0x7f) = *(int32_t *)(unaff_RBP + 0x67);
  }
  return unaff_R12D;
}



int32_t FUN_1807733f3(void)

{
  int32_t *in_RAX;
  int32_t unaff_EDI;
  int32_t unaff_R12D;
  
  *in_RAX = unaff_EDI;
  return unaff_R12D;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180773410(int64_t param_1,char param_2)

{
  uint *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  lVar2 = *(int64_t *)(param_1 + 0x120);
  if (lVar2 != 0) {
    if (*(int64_t *)(param_1 + 0x170) == *(int64_t *)(lVar2 + 0x170)) {
      *(uint64_t *)(lVar2 + 0x170) = 0;
      lVar2 = *(int64_t *)(param_1 + 0x120);
    }
    if ((*(code **)(lVar2 + 0x108) != (code *)0x0) && ((*(uint *)(lVar2 + 0x2c) & 0x200) != 0)) {
      (**(code **)(lVar2 + 0x108))(lVar2,0);
      puVar1 = (uint *)(*(int64_t *)(param_1 + 0x120) + 0x2c);
      *puVar1 = *puVar1 & 0xfffffdff;
      lVar2 = *(int64_t *)(param_1 + 0x120);
    }
    uVar3 = FUN_180773410(lVar2,1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    *(uint64_t *)(param_1 + 0x120) = 0;
  }
  if (*(code **)(param_1 + 0x58) != (code *)0x0) {
    (**(code **)(param_1 + 0x58))(param_1);
  }
  if (*(int64_t *)(param_1 + 0x170) != 0) {
    FUN_180769080();
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(param_1 + 0x170),
                  &unknown_var_2992_ptr,0x3f,1);
  }
  if (*(int64_t *)(param_1 + 0x148) != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x148),
                  &unknown_var_2992_ptr,0x47,1);
  }
  *(int32_t *)(param_1 + 0x150) = 0;
  if (*(int64_t *)(param_1 + 0x138) != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x138),
                  &unknown_var_2992_ptr,0x4e,1);
  }
  if (*(int64_t *)(param_1 + 0x130) != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x130),
                  &unknown_var_2992_ptr,0x54,1);
  }
  *(uint64_t *)(param_1 + 0x128) = 0;
  if (*(int64_t *)(param_1 + 0x168) != 0) {
    FUN_1807d8800();
    *(uint64_t *)(param_1 + 0x168) = 0;
  }
  if (param_2 == '\0') {
    return 0;
  }
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&unknown_var_2992_ptr,99,1);
}



uint64_t FUN_180773610(int64_t param_1,int param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint64_t *puVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int iVar10;
  int iVar11;
  uint64_t uVar12;
  float fVar13;
  uint auStackX_8 [2];
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  
  iVar10 = *(int *)(param_1 + 0x18);
  uVar12 = 0;
  uVar8 = (uint64_t)param_3;
  if ((iVar10 != 0) && (iVar10 <= param_2)) {
    return 0x20;
  }
  if (*(int64_t *)(param_1 + 0x70) == 0) {
    return 0x44;
  }
  if (param_2 < 0) {
    param_2 = *(int *)(param_1 + 0x11c);
  }
  iVar11 = 0;
  if (iVar10 != 0) {
    iVar11 = param_2;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uVar6 = (**(code **)(param_1 + 0x88))(param_1,iVar11,&uStack_68);
  uVar7 = uStack_58;
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  lVar9 = *(int64_t *)(param_1 + 0x120);
  iVar10 = (int)uStack_60;
  uVar4 = uStack_60._4_4_;
  iVar5 = (int)uStack_58;
  auStackX_8[0] = uStack_50._4_4_;
  if ((lVar9 != 0) && (iVar11 != *(int *)(param_1 + 0x11c))) {
    if ((*(code **)(lVar9 + 0x108) != (code *)0x0) && ((*(uint *)(lVar9 + 0x2c) & 0x200) != 0)) {
      (**(code **)(lVar9 + 0x108))();
      puVar1 = (uint *)(*(int64_t *)(param_1 + 0x120) + 0x2c);
      *puVar1 = *puVar1 & 0xfffffdff;
      lVar9 = *(int64_t *)(param_1 + 0x120);
    }
    puVar3 = *(uint64_t **)(lVar9 + 8);
    *puVar3 = uStack_68;
    puVar3[1] = uStack_60;
    puVar3[2] = uStack_58;
    puVar3[3] = uStack_50;
    puVar3[4] = uStack_48;
    puVar3[5] = uStack_40;
    puVar3[6] = uStack_38;
    lVar9 = *(int64_t *)(param_1 + 0x120);
    if (*(code **)(lVar9 + 0x100) != (code *)0x0) {
      uVar7 = (**(code **)(lVar9 + 0x100))
                        (lVar9,uVar4,uVar7 & 0xffffffff,iVar11,*(uint64_t *)(lVar9 + 0x128),
                         param_1,0);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      puVar1 = (uint *)(*(int64_t *)(param_1 + 0x120) + 0x2c);
      *puVar1 = *puVar1 | 0x200;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x48);
  if ((uVar2 & 2) == 0) {
    if ((uVar2 & 4) != 0) {
      if ((param_4 & 2) == 0) {
        if ((param_4 & 1) == 0) goto LAB_1807739b7;
        uVar8 = (uint64_t)((float)uVar8 * 0.001 * (float)iVar5);
        if (iVar10 == 1) {
          lVar9 = 8;
        }
        else if (iVar10 == 2) {
          lVar9 = 0x10;
        }
        else if (iVar10 == 3) {
          lVar9 = 0x18;
        }
        else {
          if ((iVar10 != 4) && (iVar10 != 5)) {
            param_4 = 4;
            uVar8 = (uint64_t)((int)uVar8 * uVar4);
            goto LAB_1807739b7;
          }
          lVar9 = 0x20;
        }
        uVar8 = uVar8 & 0xffffffff;
LAB_180773906:
        param_3 = (uint)(uVar8 * lVar9 >> 3);
      }
      else {
        if (iVar10 == 1) {
          lVar9 = 8;
          goto LAB_180773906;
        }
        if (iVar10 == 2) {
          lVar9 = 0x10;
          goto LAB_180773906;
        }
        if (iVar10 == 3) {
          lVar9 = 0x18;
          goto LAB_180773906;
        }
        if ((iVar10 == 4) || (iVar10 == 5)) {
          lVar9 = 0x20;
          goto LAB_180773906;
        }
      }
      uVar8 = (uint64_t)(param_3 * uVar4);
      param_4 = 4;
      goto LAB_1807739b7;
    }
    if ((uVar2 & 1) == 0) goto LAB_1807739b7;
    if ((param_4 & 2) == 0) {
      if ((param_4 & 4) == 0) goto LAB_1807739b7;
      if (uVar4 != 0) {
        if (iVar10 == 1) {
          uVar7 = 8;
        }
        else if (iVar10 == 2) {
          uVar7 = 0x10;
        }
        else if (iVar10 == 3) {
          uVar7 = 0x18;
        }
        else {
          if ((iVar10 != 4) && (iVar10 != 5)) goto LAB_180773991;
          uVar7 = 0x20;
        }
        uVar8 = ((uVar8 << 3) / uVar7 & 0xffffffff) / (uint64_t)uVar4;
      }
    }
LAB_180773991:
    param_4 = 1;
    fVar13 = ((float)uVar8 / (float)iVar5) * 1000.0 + 0.5;
  }
  else {
    if ((param_4 & 4) != 0) {
      if (uVar4 != 0) {
        if (iVar10 == 1) {
          uVar7 = 8;
        }
        else if (iVar10 == 2) {
          uVar7 = 0x10;
        }
        else if (iVar10 == 3) {
          uVar7 = 0x18;
        }
        else {
          if ((iVar10 != 4) && (iVar10 != 5)) goto LAB_180773810;
          uVar7 = 0x20;
        }
        uVar8 = ((uVar8 << 3) / uVar7 & 0xffffffff) / (uint64_t)uVar4;
      }
LAB_180773810:
      param_4 = 2;
      goto LAB_1807739b7;
    }
    if ((param_4 & 1) == 0) goto LAB_1807739b7;
    param_4 = 2;
    fVar13 = (float)uVar8 * 0.001 * (float)iVar5;
  }
  uVar8 = (uint64_t)fVar13;
LAB_1807739b7:
  iVar10 = (int)uVar8;
  if ((param_4 & uVar2) == 0) {
    uVar8 = 0x13;
  }
  else {
    if ((((iVar10 != 0) && (param_4 == 2)) && (auStackX_8[0] != 0)) &&
       (uVar12 = 0, *(int64_t *)(param_1 + 0x140) != 0)) {
      uVar12 = (uVar8 & 0xffffffff) % (uint64_t)auStackX_8[0];
      iVar10 = iVar10 - (int)uVar12;
    }
    *(int32_t *)(param_1 + 0x158) = 0;
    uVar8 = (**(code **)(param_1 + 0x70))(param_1,iVar11,iVar10,param_4);
    if ((uVar8 & 0xffffffef) == 0) {
      auStackX_8[0] = (uint)uVar12;
      while (auStackX_8[0] != 0) {
        auStackX_8[0] = 0;
        uVar8 = FUN_1807730d0(param_1,0,uVar12,auStackX_8);
        if ((uVar8 & 0xffffffef) != 0) {
          return uVar8;
        }
        if (auStackX_8[0] == 0) break;
        auStackX_8[0] = (int)uVar12 - auStackX_8[0];
        uVar12 = (uint64_t)auStackX_8[0];
      }
      *(int *)(param_1 + 0x11c) = iVar11;
      uVar8 = 0;
    }
  }
  return uVar8;
}



uint64_t FUN_1807736bf(int64_t param_1)

{
  uint *puVar1;
  uint uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint unaff_EDI;
  uint in_R10D;
  int unaff_R13D;
  uint64_t unaff_R14;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  float fVar7;
  uint64_t in_stack_00000040;
  int iStack0000000000000048;
  uint uStack000000000000004c;
  int iStack0000000000000050;
  uint64_t in_stack_00000058;
  uint64_t in_stack_00000060;
  uint64_t in_stack_00000068;
  uint64_t in_stack_00000070;
  uint uStack00000000000000b0;
  
  if ((param_1 != 0) && (unaff_R13D != *(int *)(unaff_RBP + 0x11c))) {
    uStack00000000000000b0 = in_R10D;
    if ((*(code **)(param_1 + 0x108) != (code *)0x0) && ((*(uint *)(param_1 + 0x2c) & 0x200) != 0))
    {
      (**(code **)(param_1 + 0x108))();
      puVar1 = (uint *)(*(int64_t *)(unaff_RBP + 0x120) + 0x2c);
      *puVar1 = *puVar1 & 0xfffffdff;
      param_1 = *(int64_t *)(unaff_RBP + 0x120);
    }
    puVar3 = *(uint64_t **)(param_1 + 8);
    *puVar3 = in_stack_00000040;
    puVar3[1] = _iStack0000000000000048;
    puVar3[2] = _iStack0000000000000050;
    puVar3[3] = in_stack_00000058;
    puVar3[4] = in_stack_00000060;
    puVar3[5] = in_stack_00000068;
    puVar3[6] = in_stack_00000070;
    lVar6 = *(int64_t *)(unaff_RBP + 0x120);
    in_R10D = uStack00000000000000b0;
    if (*(code **)(lVar6 + 0x100) != (code *)0x0) {
      uVar5 = (**(code **)(lVar6 + 0x100))
                        (lVar6,uStack000000000000004c,iStack0000000000000050,unaff_R13D,
                         *(uint64_t *)(lVar6 + 0x128));
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      puVar1 = (uint *)(*(int64_t *)(unaff_RBP + 0x120) + 0x2c);
      *puVar1 = *puVar1 | 0x200;
      in_R10D = uStack00000000000000b0;
    }
  }
  uVar2 = *(uint *)(unaff_RBP + 0x48);
  if ((uVar2 & 2) == 0) {
    if ((uVar2 & 4) != 0) {
      if ((unaff_EDI & 2) == 0) {
        if ((unaff_EDI & 1) == 0) goto LAB_1807739b7;
        uVar5 = (uint64_t)((float)(int64_t)unaff_RSI * 0.001 * (float)iStack0000000000000050);
        if (iStack0000000000000048 == 1) {
          lVar6 = 8;
        }
        else if (iStack0000000000000048 == 2) {
          lVar6 = 0x10;
        }
        else if (iStack0000000000000048 == 3) {
          lVar6 = 0x18;
        }
        else {
          if ((iStack0000000000000048 != 4) && (iStack0000000000000048 != 5)) {
            unaff_EDI = 4;
            unaff_RSI = (uint64_t)((int)uVar5 * uStack000000000000004c);
            goto LAB_1807739b7;
          }
          lVar6 = 0x20;
        }
        unaff_RSI = uVar5 & 0xffffffff;
LAB_180773906:
        unaff_RSI = unaff_RSI * lVar6 >> 3;
      }
      else {
        if (iStack0000000000000048 == 1) {
          lVar6 = 8;
          goto LAB_180773906;
        }
        if (iStack0000000000000048 == 2) {
          lVar6 = 0x10;
          goto LAB_180773906;
        }
        if (iStack0000000000000048 == 3) {
          lVar6 = 0x18;
          goto LAB_180773906;
        }
        if ((iStack0000000000000048 == 4) || (iStack0000000000000048 == 5)) {
          lVar6 = 0x20;
          goto LAB_180773906;
        }
      }
      unaff_RSI = (uint64_t)((int)unaff_RSI * uStack000000000000004c);
      unaff_EDI = 4;
      goto LAB_1807739b7;
    }
    if ((uVar2 & 1) == 0) goto LAB_1807739b7;
    if ((unaff_EDI & 2) == 0) {
      if ((unaff_EDI & 4) == 0) goto LAB_1807739b7;
      if (uStack000000000000004c != 0) {
        if (iStack0000000000000048 == 1) {
          uVar5 = 8;
        }
        else if (iStack0000000000000048 == 2) {
          uVar5 = 0x10;
        }
        else if (iStack0000000000000048 == 3) {
          uVar5 = 0x18;
        }
        else {
          if ((iStack0000000000000048 != 4) && (iStack0000000000000048 != 5)) goto LAB_180773987;
          uVar5 = 0x20;
        }
        unaff_RSI = ((unaff_RSI << 3) / uVar5 & 0xffffffff) / (uint64_t)uStack000000000000004c;
      }
LAB_180773987:
      fVar7 = (float)(unaff_RSI & 0xffffffff);
    }
    else {
      fVar7 = (float)(int64_t)unaff_RSI;
    }
    unaff_EDI = 1;
    fVar7 = (fVar7 / (float)iStack0000000000000050) * 1000.0 + 0.5;
  }
  else {
    if ((unaff_EDI & 4) != 0) {
      if (uStack000000000000004c != 0) {
        if (iStack0000000000000048 == 1) {
          uVar5 = 8;
        }
        else if (iStack0000000000000048 == 2) {
          uVar5 = 0x10;
        }
        else if (iStack0000000000000048 == 3) {
          uVar5 = 0x18;
        }
        else {
          if ((iStack0000000000000048 != 4) && (iStack0000000000000048 != 5)) goto LAB_180773810;
          uVar5 = 0x20;
        }
        unaff_RSI = ((unaff_RSI << 3) / uVar5 & 0xffffffff) / (uint64_t)uStack000000000000004c;
      }
LAB_180773810:
      unaff_EDI = 2;
      goto LAB_1807739b7;
    }
    if ((unaff_EDI & 1) == 0) goto LAB_1807739b7;
    unaff_EDI = 2;
    fVar7 = (float)(int64_t)unaff_RSI * 0.001 * (float)iStack0000000000000050;
  }
  unaff_RSI = (uint64_t)fVar7;
LAB_1807739b7:
  if ((unaff_EDI & uVar2) == 0) {
    uVar5 = 0x13;
  }
  else {
    if (((((int)unaff_RSI != 0) && (unaff_EDI == 2)) && (in_R10D != 0)) &&
       (*(uint64_t *)(unaff_RBP + 0x140) != unaff_R14)) {
      unaff_R14 = (unaff_RSI & 0xffffffff) % (uint64_t)in_R10D;
    }
    *(int32_t *)(unaff_RBP + 0x158) = 0;
    uVar5 = (**(code **)(unaff_RBP + 0x70))();
    if ((uVar5 & 0xffffffef) == 0) {
      uStack00000000000000b0 = (uint)unaff_R14;
      uVar4 = extraout_XMM0_Qa;
      while (uStack00000000000000b0 != 0) {
        uStack00000000000000b0 = 0;
        uVar5 = FUN_1807730d0(uVar4,0,unaff_R14 & 0xffffffff,&stack0x000000b0);
        if ((uVar5 & 0xffffffef) != 0) {
          return uVar5;
        }
        if (uStack00000000000000b0 == 0) break;
        uStack00000000000000b0 = (int)unaff_R14 - uStack00000000000000b0;
        unaff_R14 = (uint64_t)uStack00000000000000b0;
        uVar4 = extraout_XMM0_Qa_00;
      }
      *(int *)(unaff_RBP + 0x11c) = unaff_R13D;
      uVar5 = 0;
    }
  }
  return uVar5;
}







