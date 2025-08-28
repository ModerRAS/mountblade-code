#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part150.c - 1 个函数

// 函数: void FUN_180755270(longlong *param_1)
void FUN_180755270(longlong *param_1)

{
  if (param_1[0xc] != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1[0xc],&unknown_var_336_ptr,0xb7,1);
  }
  FUN_180768360(*(uint64_t *)(_DAT_180be12f0 + 0x120));
  *(longlong *)param_1[1] = *param_1;
  *(longlong *)(*param_1 + 8) = param_1[1];
  param_1[1] = (longlong)param_1;
  *param_1 = (longlong)param_1;
                    // WARNING: Subroutine does not return
  FUN_180768400(*(uint64_t *)(_DAT_180be12f0 + 0x120));
}



uint64_t * FUN_1807554e0(uint64_t *param_1)

{
  uint64_t *puVar1;
  
  param_1[8] = 0;
  puVar1 = param_1 + 0x22;
  *(int32_t *)(param_1 + 7) = 0;
  param_1[0x24] = 0;
  param_1[0x23] = puVar1;
  *puVar1 = puVar1;
  puVar1 = param_1 + 0x2f;
  param_1[0x31] = 0;
  param_1[0x30] = puVar1;
  *puVar1 = puVar1;
  *param_1 = &unknown_var_456_ptr;
  puVar1 = param_1 + 0x32;
  param_1[0x34] = 0;
  *(int32_t *)(param_1 + 0x35) = 0xffffffff;
  *puVar1 = puVar1;
  param_1[0x33] = puVar1;
  puVar1 = param_1 + 0x36;
  param_1[0x38] = 0;
  *(int32_t *)(param_1 + 0x39) = 0xffffffff;
  *puVar1 = puVar1;
  param_1[0x37] = puVar1;
  puVar1 = param_1 + 0x40;
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)((longlong)param_1 + 0x84) = 0;
  *(uint64_t *)((longlong)param_1 + 0x8c) = 0;
  *(int32_t *)((longlong)param_1 + 0x94) = 0;
  param_1[0x1c] = 0;
  *(int32_t *)(param_1 + 0x1d) = 0;
  *(int32_t *)(param_1 + 9) = 0;
  *(int32_t *)(param_1 + 0x1f) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(int8_t *)(param_1 + 0x27) = 0;
  *(int32_t *)(param_1 + 0x3c) = 0x80;
  *(int32_t *)((longlong)param_1 + 0x1e4) = 0xffffffff;
  *(int32_t *)(param_1 + 6) = 0x3f800000;
  *(int32_t *)(param_1 + 0x43) = 0x3f800000;
  *(int32_t *)((longlong)param_1 + 0x21c) = 0x3f800000;
  *(int32_t *)((longlong)param_1 + 0x22c) = 0x472c4400;
  *(int32_t *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(int32_t *)(param_1 + 0xf) = 0x3f800000;
  *(uint64_t *)((longlong)param_1 + 0x7c) = 0x3f800000;
  *(int32_t *)((longlong)param_1 + 0xa4) = 0x3f800000;
  *(int32_t *)((longlong)param_1 + 0x9c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x14) = 0x4e6e6b28;
  *(int32_t *)(param_1 + 0x44) = 0x3f800000;
  *(int32_t *)((longlong)param_1 + 0xfc) = 0x44bb8000;
  param_1[0x42] = 0;
  param_1[0x41] = puVar1;
  *puVar1 = puVar1;
  func_0x00018074d850(param_1,0);
  return param_1;
}



uint64_t FUN_1807556b0(longlong param_1,longlong param_2,char param_3)

{
  int32_t uVar1;
  longlong lVar2;
  uint64_t uVar3;
  uint64_t uStackX_8;
  
  if (*(longlong *)(param_1 + 0x1d8) == 0) {
    return 0x1e;
  }
  *(longlong *)(param_2 + 0x1f8) = param_1;
  *(uint64_t *)(*(longlong *)(param_1 + 0x1d8) + 0x28) = 0;
  *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x30) = param_2;
  *(int32_t *)(*(longlong *)(param_1 + 0x1d8) + 0x58) = 0;
  *(int32_t *)(*(longlong *)(param_1 + 0x1d8) + 0x5c) = 0xffffffff;
  *(int32_t *)(*(longlong *)(param_1 + 0x1d8) + 0x54) = 0xffffffff;
  *(int32_t *)(*(longlong *)(param_1 + 0x1d8) + 0x38) = 8;
  *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x18) = param_1;
  if (param_3 != '\0') {
    *(uint64_t *)(param_1 + 0x1f0) = 0;
    *(int32_t *)(param_1 + 0x18) = 1;
    *(uint64_t *)(param_1 + 0x10) = 0;
    *(uint64_t *)(param_1 + 0x28) = 0;
    lVar2 = *(longlong *)(param_1 + 8);
    uVar1 = *(int32_t *)(lVar2 + 0x1193c);
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfeedffd8;
    *(int32_t *)(param_1 + 0x224) = uVar1;
    *(int32_t *)(param_1 + 0x228) = 0;
    *(int32_t *)(param_1 + 0x220) = 0x3f800000;
    *(int32_t *)(param_1 + 0x34) = 0x3f800000;
    *(int32_t *)(param_1 + 0x78) = 0x3f800000;
    *(int32_t *)(param_1 + 0xa4) = 0x3f800000;
    *(int32_t *)(param_1 + 0x7c) = 0x3f800000;
    *(uint64_t *)(param_1 + 0xbc) = 0x3f800000;
    *(int32_t *)(param_1 + 0x9c) = 0x3f800000;
    *(int32_t *)(param_1 + 0xa0) = 0x461c4000;
    *(int32_t *)(param_1 + 0x98) = 0;
    *(int32_t *)(param_1 + 0xa8) = 0x43b40000;
    *(int32_t *)(param_1 + 0xac) = 0x43b40000;
    *(uint64_t *)(param_1 + 0xb0) = 0x3f800000;
    *(int32_t *)(param_1 + 0xb8) = 0;
    *(uint64_t *)(param_1 + 0xe0) = 0;
    *(int32_t *)(param_1 + 0xe8) = 0;
    *(int32_t *)(param_1 + 0xf0) = 0x3f800000;
    *(uint64_t *)(param_1 + 0xf4) = 0x3f800000;
    *(int32_t *)(param_1 + 0x100) = 0;
    *(int32_t *)(param_1 + 0xfc) = *(int32_t *)(lVar2 + 0x11650);
    *(uint64_t *)(param_1 + 0x58) = 0x3f800000;
    if (lVar2 != 0) {
      *(int32_t *)(param_1 + 0x13c) = 0x3f800000;
      *(uint64_t *)(param_1 + 0x150) = 0;
      *(int32_t *)(param_1 + 0x140) = 0x3f800000;
      *(uint64_t *)(param_1 + 0x158) = 0;
      *(int32_t *)(param_1 + 0x144) = 0x3f800000;
      *(uint64_t *)(param_1 + 0x160) = 0;
      *(int32_t *)(param_1 + 0x148) = 0x3f800000;
      *(uint64_t *)(param_1 + 0x168) = 0;
    }
    *(uint64_t *)(param_1 + 0x128) = 0;
    *(uint64_t *)(param_1 + 0x130) = 0;
    *(int8_t *)(param_1 + 0x138) = 0;
  }
  uVar3 = FUN_180762070(*(uint64_t *)(param_1 + 0x60),0,1);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (param_3 != '\0') {
    uVar3 = FUN_18075dbf0(*(uint64_t *)(param_1 + 0x60),0,0,4);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = FUN_18076e720(*(uint64_t *)(param_1 + 0x70));
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x120))
                      (*(longlong **)(param_1 + 0x20),0xfffffffd,&uStackX_8);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = FUN_180759220(uStackX_8,*(uint64_t *)(param_1 + 0x60),0,0,0,0);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x20))
                    (*(longlong **)(param_1 + 0x1d8),param_2);
  return uVar3;
}



uint64_t FUN_180755930(longlong param_1,longlong param_2,char param_3)

{
  uint *puVar1;
  uint64_t uVar2;
  uint64_t uStackX_20;
  
  if (param_3 != '\0') {
    *(uint64_t *)(param_1 + 0x1f0) = 0;
    *(int32_t *)(param_1 + 0x18) = 1;
    *(uint64_t *)(param_1 + 0x10) = 0;
    *(uint64_t *)(param_1 + 0x28) = 0;
    if ((*(uint *)(*(longlong *)(param_1 + 0x1d8) + 0x3c) & 0x10000) == 0) {
      *(int32_t *)(param_1 + 0x224) = *(int32_t *)(*(longlong *)(param_1 + 8) + 0x1193c);
    }
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfeedffd8;
    *(int32_t *)(param_1 + 0x228) = 0;
    *(int32_t *)(param_1 + 0x220) = 0x3f800000;
    *(int32_t *)(param_1 + 0x34) = 0x3f800000;
    *(int32_t *)(param_1 + 0x78) = 0x3f800000;
    *(int32_t *)(param_1 + 0xa4) = 0x3f800000;
    *(int32_t *)(param_1 + 0x7c) = 0x3f800000;
    *(int32_t *)(param_1 + 0xc0) = 0;
    *(int32_t *)(param_1 + 0x9c) = *(int32_t *)(param_2 + 0x78);
    *(int32_t *)(param_1 + 0xa0) = *(int32_t *)(param_2 + 0x7c);
    *(int32_t *)(param_1 + 0x98) = 0;
    *(int32_t *)(param_1 + 0xa8) = *(int32_t *)(param_2 + 0x80);
    *(int32_t *)(param_1 + 0xac) = *(int32_t *)(param_2 + 0x84);
    *(int32_t *)(param_1 + 0xb0) = *(int32_t *)(param_2 + 0x88);
    *(uint64_t *)(param_1 + 0xb4) = 0;
    *(int32_t *)(param_1 + 0xbc) = 0x3f800000;
    *(uint64_t *)(param_1 + 0xe0) = *(uint64_t *)(param_2 + 0x90);
    *(int32_t *)(param_1 + 0xe8) = *(int32_t *)(param_2 + 0x98);
    *(int32_t *)(param_1 + 0xf0) = 0x3f800000;
    *(uint64_t *)(param_1 + 0xf4) = 0x3f800000;
    *(int32_t *)(param_1 + 0x100) = 0;
    *(int32_t *)(param_1 + 0xfc) = *(int32_t *)(*(longlong *)(param_1 + 8) + 0x11650);
    *(uint64_t *)(param_1 + 0x58) = 0x3f800000;
    *(int32_t *)(param_1 + 0x13c) = 0x3f800000;
    *(uint64_t *)(param_1 + 0x150) = 0;
    *(int32_t *)(param_1 + 0x140) = 0x3f800000;
    *(uint64_t *)(param_1 + 0x158) = 0;
    *(int32_t *)(param_1 + 0x144) = 0x3f800000;
    *(uint64_t *)(param_1 + 0x160) = 0;
    *(int32_t *)(param_1 + 0x148) = 0x3f800000;
    *(uint64_t *)(param_1 + 0x168) = 0;
    *(uint64_t *)(param_1 + 0x128) = 0;
    *(uint64_t *)(param_1 + 0x130) = 0;
    *(int8_t *)(param_1 + 0x138) = 0;
  }
  if (*(longlong *)(param_1 + 0x1d8) == 0) {
    uVar2 = 0x1e;
  }
  else {
    *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x28) = param_2;
    *(uint64_t *)(*(longlong *)(param_1 + 0x1d8) + 0x30) = 0;
    *(int32_t *)(*(longlong *)(param_1 + 0x1d8) + 0x38) = *(int32_t *)(param_2 + 0x2c);
    *(int32_t *)(*(longlong *)(param_1 + 0x1d8) + 0x58) = *(int32_t *)(param_2 + 0x4c);
    *(int32_t *)(*(longlong *)(param_1 + 0x1d8) + 0x5c) = *(int32_t *)(param_2 + 0x50);
    *(int32_t *)(*(longlong *)(param_1 + 0x1d8) + 0x54) = *(int32_t *)(param_2 + 0x54);
    *(int32_t *)(*(longlong *)(param_1 + 0x1d8) + 0x60) = *(int32_t *)(param_2 + 0x44);
    *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x18) = param_1;
    LOCK();
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffff7ff;
    UNLOCK();
    uVar2 = FUN_180762070(*(uint64_t *)(param_1 + 0x60),0,1);
    if ((int)uVar2 == 0) {
      if (param_3 != '\0') {
        if ((*(uint *)(*(longlong *)(param_1 + 0x1d8) + 0x3c) & 0x10000) != 0) {
          LOCK();
          puVar1 = (uint *)(*(longlong *)(param_1 + 0x60) + 100);
          *puVar1 = *puVar1 | 0x100;
          UNLOCK();
        }
        uVar2 = FUN_18075dbf0(*(uint64_t *)(param_1 + 0x60),0,0,4);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_18076e720(*(uint64_t *)(param_1 + 0x70));
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x120))
                          (*(longlong **)(param_1 + 0x20),0xfffffffd,&uStackX_20);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_180759220(uStackX_20,*(uint64_t *)(param_1 + 0x60),0,0,0,0);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
      }
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x28))();
      if ((int)uVar2 == 0) {
        LOCK();
        *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) | 4;
        UNLOCK();
        if (*(longlong *)(param_2 + 0xb8) != 0) {
          LOCK();
          puVar1 = (uint *)(*(longlong *)(param_2 + 0xb8) + 0x58);
          *puVar1 = *puVar1 | 4;
          UNLOCK();
        }
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



uint64_t FUN_180755c10(longlong param_1)

{
  uint *puVar1;
  uint64_t uVar2;
  
  FUN_180758220(param_1,0x53);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x70) + 100);
    *puVar1 = *puVar1 & 0xffffffdf;
    UNLOCK();
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x70) + 100);
    *puVar1 = *puVar1 & 0xffffffbf;
    UNLOCK();
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *(uint64_t *)(param_1 + 0x70) = 0;
  }
  *(uint64_t *)(param_1 + 0x60) = 0;
  *(uint64_t *)(param_1 + 0x68) = 0;
  return 0;
}



uint64_t FUN_180755c70(longlong *param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  uint64_t uVar9;
  char acStackX_10 [8];
  char acStackX_18 [8];
  longlong lStackX_20;
  int8_t auStack_48 [4];
  int8_t auStack_44 [4];
  int32_t uStack_40;
  int iStack_3c;
  longlong lStack_38;
  int8_t auStack_30 [4];
  int8_t auStack_2c [4];
  
  uVar1 = *(uint *)(param_1 + 9);
  if (param_2 == '\0') {
    *(int32_t *)(param_1 + 0x45) = 0;
    if ((uVar1 >> 0x11 & 1) == 0) {
      return 0;
    }
    *(uint *)(param_1 + 9) = uVar1 & 0xfffdffff;
    return 0;
  }
  if ((uVar1 >> 0x15 & 1) != 0) {
    return 0;
  }
  uVar9 = (**(code **)(*param_1 + 0xa8))(param_1,acStackX_10);
  if ((int)uVar9 != 0) {
    return uVar9;
  }
  if ((*(uint *)(param_1 + 9) >> 0x11 & 1) != 0) {
    return 0;
  }
  if (acStackX_10[0] == (char)uVar9) {
    return 0;
  }
  iVar2 = (int)param_1[0x45];
  iVar3 = *(int *)(*(longlong *)(param_1[1] + 0x670) + 0x318);
  if (iVar2 == 0) {
    *(int *)(param_1 + 0x45) = iVar3;
LAB_180755ce8:
    *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x1000000;
    return 0;
  }
  if ((iVar2 == iVar3) || (iVar2 + 1 == iVar3)) goto LAB_180755ce8;
  uVar9 = (**(code **)(*param_1 + 0x1f0))(param_1,acStackX_18);
  if ((int)uVar9 != 0) {
    return uVar9;
  }
  uVar1 = *(uint *)(param_1 + 9);
  *(int32_t *)(param_1 + 0x45) = 0;
  *(uint *)(param_1 + 9) = uVar1 | 0x20000;
  if (acStackX_18[0] != (char)uVar9) {
    return 0;
  }
  lVar4 = param_1[0x3b];
  if (lVar4 == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(lVar4 + 0x28);
  lVar4 = *(longlong *)(lVar4 + 0x30);
  uVar9 = func_0x000180786990(*(uint64_t *)(param_1[1] + 0x6b0),&lStackX_20,0);
  if ((int)uVar9 != 0) {
    return uVar9;
  }
  lVar6 = param_1[4];
  cVar8 = (*(code *)**(uint64_t **)param_1[0x3b])();
  lStack_38 = param_1[0x3b];
  if (cVar8 != '\0') {
    lStack_38 = *(longlong *)(lStack_38 + 0xc0);
  }
  (**(code **)(*param_1 + 0x98))(param_1,auStack_48);
  FUN_180756450(param_1,auStack_44,2);
  plVar7 = (longlong *)param_1[0x3b];
  if (plVar7 != (longlong *)0x0) {
    if (plVar7[5] != 0) {
      uStack_40 = (int32_t)plVar7[0xb];
      iStack_3c = *(int *)((longlong)plVar7 + 0x5c) + -1 + (int)plVar7[0xb];
    }
    (**(code **)(*plVar7 + 0x98))(plVar7,auStack_30);
  }
  (**(code **)(*param_1 + 0x18))(param_1,auStack_2c);
  *(uint *)(lStack_38 + 0x3c) = *(uint *)(lStack_38 + 0x3c) | 0x8000;
  FUN_180758220(param_1,4);
  param_1[0x3b] = lStackX_20;
  if (lVar5 == 0) {
    if (lVar4 == 0) goto LAB_180755ea0;
    FUN_1807568a0(param_1,lVar4,lVar6,1,0,0);
  }
  else {
    FUN_180756aa0(param_1,lVar5,lVar6,1,0,0);
  }
  FUN_1807571f0(param_1,auStack_48);
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfffbffff;
  (**(code **)(*param_1 + 0x10))(param_1,auStack_2c[0]);
LAB_180755ea0:
  if ((uVar1 >> 0x12 & 1) == 0) {
    return 0;
  }
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x10000;
  return 0;
}



uint64_t FUN_180755d89(uint64_t *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *unaff_RBX;
  longlong unaff_RSI;
  char unaff_DIL;
  longlong unaff_R14;
  longlong in_stack_00000098;
  
  cVar2 = (**(code **)*param_1)();
  lVar3 = unaff_RBX[0x3b];
  if (cVar2 != '\0') {
    lVar3 = *(longlong *)(lVar3 + 0xc0);
  }
  (**(code **)(*unaff_RBX + 0x98))();
  FUN_180756450();
  plVar1 = (longlong *)unaff_RBX[0x3b];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x98))(plVar1,&stack0x00000048);
  }
  (**(code **)(*unaff_RBX + 0x18))();
  *(uint *)(lVar3 + 0x3c) = *(uint *)(lVar3 + 0x3c) | 0x8000;
  FUN_180758220();
  unaff_RBX[0x3b] = in_stack_00000098;
  if (unaff_R14 == 0) {
    if (unaff_RSI == 0) goto LAB_180755ea0;
    FUN_1807568a0();
  }
  else {
    FUN_180756aa0();
  }
  FUN_1807571f0();
  *(uint *)(unaff_RBX + 9) = *(uint *)(unaff_RBX + 9) & 0xfffbffff;
  (**(code **)(*unaff_RBX + 0x10))();
LAB_180755ea0:
  if (unaff_DIL != '\0') {
    *(uint *)(unaff_RBX + 9) = *(uint *)(unaff_RBX + 9) | 0x10000;
    return 0;
  }
  return 0;
}



uint64_t FUN_180755eaa(void)

{
  longlong unaff_RBX;
  
  *(uint *)(unaff_RBX + 0x48) = *(uint *)(unaff_RBX + 0x48) | 0x10000;
  return 0;
}



int32_t FUN_180755f40(longlong param_1,float *param_2,char param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_2 == (float *)0x0) {
    return 0x1f;
  }
  if ((*(longlong *)(param_1 + 0x1d8) != 0) && (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0))
  {
    if ((*(uint *)(param_1 + 0x48) & 0x800002) != 0) {
      *param_2 = 0.0;
      return 0;
    }
    if ((*(byte *)(*(longlong *)(param_1 + 0x1d8) + 0x38) & 0x10) == 0) {
      if (param_3 == '\0') {
        fVar2 = 1.0;
      }
      else {
        fVar2 = *(float *)(param_1 + 0x218);
      }
    }
    else {
      fVar2 = *(float *)(param_1 + 0xf0);
      if (1.0 <= fVar2) {
        if (param_3 == '\0') {
          fVar2 = 1.0;
        }
        else {
          fVar2 = *(float *)(param_1 + 0x218);
        }
        fVar2 = *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0x78) *
                (1.0 - *(float *)(param_1 + 0xc0)) * (1.0 - *(float *)(param_1 + 0xd0)) * fVar2 *
                *(float *)(lVar1 + 0x1f0);
      }
      else {
        fVar3 = 1.0 - fVar2;
        if (param_3 == '\0') {
          fVar4 = 1.0;
        }
        else {
          fVar4 = *(float *)(param_1 + 0x218);
        }
        fVar2 = (fVar2 * *(float *)(param_1 + 0xa4) + fVar3) *
                (fVar2 * *(float *)(param_1 + 0x78) + fVar3) *
                ((1.0 - *(float *)(param_1 + 0xc0)) * fVar2 + fVar3) *
                ((1.0 - *(float *)(param_1 + 0xd0)) * fVar2 + fVar3) * fVar4 *
                (fVar2 * *(float *)(lVar1 + 0x1f0) + fVar3);
      }
    }
    fVar2 = fVar2 * *(float *)(lVar1 + 0x1ec);
    fVar3 = 0.0;
    *param_2 = fVar2;
    fVar2 = fVar2 * *(float *)(param_1 + 0x58);
    *param_2 = fVar2;
    fVar2 = fVar2 + *(float *)(param_1 + 0x5c);
    *param_2 = fVar2;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x28);
    if (lVar1 != 0) {
      fVar3 = *(float *)(lVar1 + 0x13c);
    }
    if (fVar3 != 0.0) {
      fVar2 = fVar2 * fVar3;
    }
    *param_2 = ABS(fVar2);
    return 0;
  }
  return 0x1e;
}



uint64_t FUN_180755fa8(longlong param_1,float *param_2,char param_3,float param_4)

{
  longlong lVar1;
  longlong in_RAX;
  float fVar2;
  float in_XMM4_Da;
  float fVar3;
  
  fVar3 = param_4 - in_XMM4_Da;
  fVar2 = param_4;
  if (param_3 != '\0') {
    fVar2 = *(float *)(param_1 + 0x218);
  }
  fVar3 = (in_XMM4_Da * *(float *)(param_1 + 0xa4) + fVar3) *
          (in_XMM4_Da * *(float *)(param_1 + 0x78) + fVar3) *
          ((param_4 - *(float *)(param_1 + 0xc0)) * in_XMM4_Da + fVar3) *
          ((param_4 - *(float *)(param_1 + 0xd0)) * in_XMM4_Da + fVar3) * fVar2 *
          (in_XMM4_Da * *(float *)(in_RAX + 0x1f0) + fVar3) * *(float *)(in_RAX + 0x1ec);
  fVar2 = 0.0;
  *param_2 = fVar3;
  fVar3 = fVar3 * *(float *)(param_1 + 0x58);
  *param_2 = fVar3;
  fVar3 = fVar3 + *(float *)(param_1 + 0x5c);
  *param_2 = fVar3;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x28);
  if (lVar1 != 0) {
    fVar2 = *(float *)(lVar1 + 0x13c);
  }
  if (fVar2 != 0.0) {
    fVar3 = fVar3 * fVar2;
  }
  *param_2 = ABS(fVar3);
  return 0;
}



uint64_t FUN_180756029(longlong param_1,float *param_2,char param_3,float param_4)

{
  longlong lVar1;
  longlong in_RAX;
  float fVar2;
  float fVar3;
  
  fVar2 = param_4;
  if (param_3 != '\0') {
    fVar2 = *(float *)(param_1 + 0x218);
  }
  fVar3 = *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0x78) *
          (param_4 - *(float *)(param_1 + 0xc0)) * (param_4 - *(float *)(param_1 + 0xd0)) * fVar2 *
          *(float *)(in_RAX + 0x1f0) * *(float *)(in_RAX + 0x1ec);
  fVar2 = 0.0;
  *param_2 = fVar3;
  fVar3 = fVar3 * *(float *)(param_1 + 0x58);
  *param_2 = fVar3;
  fVar3 = fVar3 + *(float *)(param_1 + 0x5c);
  *param_2 = fVar3;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x28);
  if (lVar1 != 0) {
    fVar2 = *(float *)(lVar1 + 0x13c);
  }
  if (fVar2 != 0.0) {
    fVar3 = fVar3 * fVar2;
  }
  *param_2 = ABS(fVar3);
  return 0;
}



uint64_t FUN_1807560f0(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = (*(code *)**(uint64_t **)param_1[0x3b])();
  lVar3 = param_1[0x3b];
  if (cVar2 != '\0') {
    lVar3 = *(longlong *)(lVar3 + 0xc0);
  }
  *(longlong *)(param_2 + 0x10) = lVar3;
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
  FUN_180756450(param_1,param_2 + 4,2);
  lVar3 = param_1[0x3b];
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x28) != 0)) {
    if ((int32_t *)(param_2 + 8) != (int32_t *)0x0) {
      *(int32_t *)(param_2 + 8) = *(int32_t *)(lVar3 + 0x58);
    }
    if ((int *)(param_2 + 0xc) != (int *)0x0) {
      *(int *)(param_2 + 0xc) = *(int *)(param_1[0x3b] + 0x5c) + -1 + *(int *)(param_1[0x3b] + 0x58)
      ;
    }
  }
  if ((param_2 != -0x18) && ((longlong *)param_1[0x3b] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)param_1[0x3b] + 0x98))();
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2 + 0x1c);
  puVar1 = (uint *)(*(longlong *)(param_2 + 0x10) + 0x3c);
  *puVar1 = *puVar1 | 0x8000;
  return 0;
}



uint64_t FUN_180756230(longlong *param_1,uint64_t *param_2,uint64_t *param_3)

{
  longlong *plVar1;
  uint64_t uVar2;
  longlong lStackX_10;
  longlong lStackX_20;
  
  if (param_2 != (uint64_t *)0x0) {
    uVar2 = (**(code **)(*param_1 + 0x120))(param_1,0xfffffffd,&lStackX_10);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (lStackX_10 == 0) {
      uVar2 = (**(code **)(*param_1 + 0x120))(param_1,0xffffffff,&lStackX_20);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      lStackX_10 = lStackX_20;
      if (lStackX_20 == 0) {
        return 9;
      }
    }
    *param_2 = *(uint64_t *)(lStackX_10 + 0x10);
  }
  if (param_3 != (uint64_t *)0x0) {
    plVar1 = (longlong *)param_1[4];
    lStackX_10 = 0;
    if (plVar1 == (longlong *)0x0) {
      return 9;
    }
    uVar2 = (**(code **)(*plVar1 + 0x120))(plVar1,0xfffffffd,&lStackX_10);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (lStackX_10 == 0) {
      return 9;
    }
    *param_3 = *(uint64_t *)(lStackX_10 + 0x10);
  }
  return 0;
}



uint64_t FUN_1807563c0(longlong param_1,uint *param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1d8);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    if (*(longlong *)(lVar1 + 0x28) == 0) {
      if (*(longlong *)(lVar1 + 0x30) == 0) {
        return 0x1e;
      }
      *param_2 = (uint)*(ushort *)(*(longlong *)(lVar1 + 0x30) + 0x118);
    }
    else {
      uVar2 = FUN_1807503a0();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    return 0;
  }
  return 0x1e;
}



uint64_t FUN_180756450(longlong param_1,uint *param_2,uint param_3)

{
  longlong *plVar1;
  uint64_t uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  int8_t auStackX_10 [4];
  uint uStackX_14;
  
  if (param_2 == (uint *)0x0) {
    return 0x1f;
  }
  plVar1 = *(longlong **)(param_1 + 0x1d8);
  if (plVar1 == (longlong *)0x0) {
LAB_18075659e:
    uVar2 = 0x1e;
  }
  else {
    if ((param_3 & 7) == 0) {
      uVar2 = (**(code **)(*plVar1 + 0xd8))(plVar1,param_2);
      return uVar2;
    }
    lVar3 = plVar1[5];
    if (lVar3 == 0) {
      if (plVar1[6] == 0) goto LAB_18075659e;
      uVar5 = (uint)*(ushort *)(plVar1[6] + 0x118);
      iVar4 = 5;
      fVar6 = (float)*(int *)(*(longlong *)(param_1 + 8) + 0x6d0);
    }
    else {
      uVar5 = *(uint *)(lVar3 + 0x68);
      iVar4 = *(int *)(lVar3 + 0x28);
      fVar6 = *(float *)(lVar3 + 0x6c);
    }
    uVar2 = (**(code **)(*plVar1 + 0x80))(plVar1,auStackX_10);
    if ((int)uVar2 == 0) {
      if ((param_3 & 4) == 0) {
        if ((param_3 & 1) == 0) {
          *param_2 = uStackX_14;
          uVar2 = 0;
        }
        else {
          *param_2 = (uint)(longlong)(((float)uStackX_14 / fVar6) * 1000.0 + 0.5);
          uVar2 = 0;
        }
      }
      else {
        if (iVar4 == 1) {
          lVar3 = 8;
        }
        else if (iVar4 == 2) {
          lVar3 = 0x10;
        }
        else if (iVar4 == 3) {
          lVar3 = 0x18;
        }
        else {
          if ((iVar4 != 4) && (iVar4 != 5)) {
            *param_2 = uStackX_14 * uVar5;
            return 0;
          }
          lVar3 = 0x20;
        }
        *param_2 = (int)((ulonglong)uStackX_14 * lVar3 >> 3) * uVar5;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



uint64_t FUN_1807565c0(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)**(uint64_t **)(param_1 + 0x1d8))();
  if (cVar1 != '\0') {
    *param_2 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0xc0);
    return 0;
  }
  *param_2 = *(longlong *)(param_1 + 0x1d8);
  return 0;
}



uint64_t FUN_180756640(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  longlong alStackX_8 [4];
  uint64_t uStack_48;
  void *puStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  *(uint *)(param_1 + 0x1d0) = param_2;
  alStackX_8[0] = 0;
  *(longlong *)(param_1 + 8) = param_3;
  uVar1 = *(int *)(param_3 + 0x116b8) << 0x1d | (param_2 & 0xfff) << 0x11 | 2;
  *(ulonglong *)(param_1 + 0x50) = (ulonglong)uVar1;
  *(uint *)(param_1 + 0x1d4) = uVar1;
  puVar2 = (uint64_t *)func_0x00018076e530();
  uStack_48 = *puVar2;
  uStack_38 = puVar2[2];
  uStack_30 = puVar2[3];
  uStack_28 = *(int32_t *)(puVar2 + 4);
  uStack_24 = *(int32_t *)((longlong)puVar2 + 0x24);
  uStack_20 = *(int32_t *)(puVar2 + 5);
  uStack_1c = *(int32_t *)((longlong)puVar2 + 0x2c);
  uStack_18 = *(int32_t *)(puVar2 + 6);
  uStack_14 = *(int32_t *)((longlong)puVar2 + 0x34);
  uStack_10 = *(int32_t *)(puVar2 + 7);
  uStack_c = *(int32_t *)((longlong)puVar2 + 0x3c);
  puStack_40 = &unknown_var_992_ptr;
  uVar3 = FUN_180742e00(*(uint64_t *)(param_1 + 8),&uStack_48,0,alStackX_8,0);
  if ((int)uVar3 == 0) {
    *(longlong *)(param_1 + 0x70) = alStackX_8[0];
    *(longlong *)(param_1 + 0x68) = alStackX_8[0];
    *(longlong *)(param_1 + 0x60) = alStackX_8[0];
    LOCK();
    *(uint *)(alStackX_8[0] + 100) = *(uint *)(alStackX_8[0] + 100) | 0x60;
    UNLOCK();
    uVar3 = 0;
  }
  return uVar3;
}



uint64_t FUN_180756700(longlong param_1,char *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint64_t uVar3;
  
  if (param_2 == (char *)0x0) {
    return 0x1f;
  }
  *param_2 = '\0';
  plVar1 = *(longlong **)(param_1 + 0x1d8);
  if (plVar1 != (longlong *)0x0) {
    if ((*(byte *)((longlong)plVar1 + 0x3c) & 0x80) == 0) {
      uVar3 = (**(code **)(*plVar1 + 0xb0))(plVar1,param_2,0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if ((*param_2 == (char)uVar3) &&
         ((*(uint *)(*(longlong *)(param_1 + 0x1d8) + 0x3c) & 0x10000) == 0)) {
        *(int32_t *)(param_1 + 0x1e4) = 0xffffffff;
        if (*(longlong *)(param_1 + 0x1a0) != 0) {
          plVar1 = (longlong *)(param_1 + 400);
          **(longlong **)(param_1 + 0x198) = *plVar1;
          *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(param_1 + 0x198);
          *(longlong **)(param_1 + 0x198) = plVar1;
          *plVar1 = (longlong)plVar1;
          *(int32_t *)(param_1 + 0x1a8) = 0xffffffff;
          *(uint64_t *)(param_1 + 0x1a0) = 0;
          lVar2 = *(longlong *)(param_1 + 8);
          *(uint64_t *)(param_1 + 0x198) = *(uint64_t *)(lVar2 + 0x658);
          *plVar1 = lVar2 + 0x650;
          *(longlong **)(lVar2 + 0x658) = plVar1;
          **(longlong **)(param_1 + 0x198) = (longlong)plVar1;
          *(longlong *)(param_1 + 0x1a0) = param_1;
        }
        if ((*(longlong *)(param_1 + 0x1c0) != 0) &&
           (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x28), lVar2 != 0)) {
          plVar1 = (longlong *)(param_1 + 0x1b0);
          **(longlong **)(param_1 + 0x1b8) = *plVar1;
          *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(param_1 + 0x1b8);
          *(longlong **)(param_1 + 0x1b8) = plVar1;
          *plVar1 = (longlong)plVar1;
          *(int32_t *)(param_1 + 0x1c8) = 0xffffffff;
          *(uint64_t *)(param_1 + 0x1c0) = 0;
          lVar2 = *(longlong *)(lVar2 + 0x118);
          *(uint64_t *)(param_1 + 0x1b8) = *(uint64_t *)(lVar2 + 0x48);
          *plVar1 = lVar2 + 0x40;
          *(longlong **)(lVar2 + 0x48) = plVar1;
          **(longlong **)(param_1 + 0x1b8) = (longlong)plVar1;
          *(longlong *)(param_1 + 0x1c0) = param_1;
        }
      }
    }
    return 0;
  }
  return 0x1e;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



