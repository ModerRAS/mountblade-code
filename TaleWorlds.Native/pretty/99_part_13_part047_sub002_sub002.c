#define SystemInitializer FUN_1808fcb90  // 系统初始化器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part047_sub002_sub002.c - 1 个函数

// 函数: void FUN_1808c406b(void)
void FUN_1808c406b(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0001808c405e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1808c4080(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  if (unaff_RBP != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  func_0x0001807d2ed0();
  if (unaff_RBX == 0) {
    return 0x1c;
  }
  FUN_1808bbe80();
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



uint64_t FUN_1808c4120(longlong param_1,int param_2,int32_t param_3)

{
  uint64_t uVar1;
  int32_t uVar2;
  
  if (param_2 == 0) {
    uVar2 = func_0x0001808b2ef0(param_3);
    *(int32_t *)(param_1 + 0x74) = uVar2;
    uVar1 = FUN_1808c44f0(param_1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  else if (param_2 != 1) {
    return 0x1c;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808c4160(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x18,&unknown_var_1696_ptr,0xbf,0,0,1);
  if (plVar1 != (longlong *)0x0) {
    plVar1[1] = (longlong)plVar1;
    *plVar1 = (longlong)plVar1;
    plVar1[2] = *param_2;
    plVar1[1] = *(longlong *)(param_1 + 8);
    *plVar1 = param_1;
    *(longlong **)(param_1 + 8) = plVar1;
    *(longlong **)plVar1[1] = plVar1;
    return 0;
  }
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808c41f0(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  bool bVar9;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  lVar4 = (**(code **)*param_2)(param_2);
  plVar5 = (longlong *)func_0x000180851be0(param_1 + 0x30,lVar4 + 0x10);
  bVar9 = plVar5 == (longlong *)0x0;
  if (bVar9) {
    plVar5 = (longlong *)func_0x000180851be0(param_1,lVar4 + 0x10);
  }
  if (plVar5 == (longlong *)0x0) {
    iVar2 = 0x1f;
    goto LAB_1808c433a;
  }
  iVar6 = *(int *)((longlong)plVar5 + 0x24);
  iVar2 = 0;
  if (iVar6 != 0) {
    if ((int)plVar5[1] == 0) {
      iVar2 = 0x1c;
      goto LAB_1808c433a;
    }
    lVar4 = (longlong)((int)plVar5[1] + -1);
    piVar8 = (int *)(*plVar5 + lVar4 * 4);
    iVar3 = *(int *)(*plVar5 + lVar4 * 4);
    if (iVar3 != -1) {
      lVar4 = plVar5[2];
      do {
        if (*(int *)(lVar4 + (longlong)iVar3 * 0x10) == -1) {
          iVar6 = *piVar8;
          lVar7 = (longlong)iVar6;
          *(uint64_t *)(lVar4 + 8 + lVar7 * 0x10) = 0;
          *piVar8 = *(int *)(lVar4 + 4 + lVar7 * 0x10);
          *(int *)(lVar4 + 4 + lVar7 * 0x10) = (int)plVar5[4];
          *(int *)((longlong)plVar5 + 0x24) = *(int *)((longlong)plVar5 + 0x24) + -1;
          *(int *)(plVar5 + 4) = iVar6;
          iVar6 = *(int *)((longlong)plVar5 + 0x24);
          break;
        }
        piVar8 = (int *)((longlong)iVar3 * 0x10 + 4 + lVar4);
        iVar3 = *piVar8;
      } while (iVar3 != -1);
    }
    if (iVar6 != 0) goto LAB_1808c433a;
  }
  if (bVar9) {
    iVar2 = FUN_180853840(param_1,plVar5 + 5);
  }
  else {
    iVar2 = FUN_180853840(param_1 + 0x30,plVar5 + 5);
  }
  if (iVar2 == 0) {
    FUN_1808bbe80(plVar5);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar5,&unknown_var_2080_ptr,0xe1,1);
  }
LAB_1808c433a:
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808c4370(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  uint64_t uVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  plVar1 = (longlong *)(param_1 + 0x28);
  if (plVar3 == plVar1) {
LAB_1808c43ca:
    if (plVar3 != plVar1) {
      *(longlong *)plVar3[1] = *plVar3;
      *(longlong *)(*plVar3 + 8) = plVar3[1];
      plVar3[1] = (longlong)plVar3;
      *plVar3 = (longlong)plVar3;
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar3,&unknown_var_1696_ptr,0xe1,1);
    }
  }
  else {
    do {
      if (plVar3[2] == param_2) goto LAB_1808c43ca;
    } while ((plVar3 != plVar1) && (plVar3 = (longlong *)*plVar3, plVar3 != plVar1));
  }
  FUN_1808c4440(param_2,param_1);
  if ((param_3 == '\0') || (uVar2 = FUN_18084ed10(param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808c4440(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)(param_1 + 0xb0);
  plVar2 = (longlong *)*plVar1;
  if (plVar2 != plVar1) {
    while (plVar2[2] != param_2) {
      if (plVar2 == plVar1) {
        return 0x1c;
      }
      plVar2 = (longlong *)*plVar2;
      if (plVar2 == plVar1) {
        return 0x1c;
      }
    }
  }
  if (plVar2 == plVar1) {
    return 0x1c;
  }
  *(longlong *)plVar2[1] = *plVar2;
  *(longlong *)(*plVar2 + 8) = plVar2[1];
  plVar2[1] = (longlong)plVar2;
  *plVar2 = (longlong)plVar2;
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&unknown_var_1696_ptr,0xe1,1);
}



uint64_t FUN_1808c44f0(longlong param_1)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  
  for (puVar1 = *(uint64_t **)(param_1 + 0x28); puVar1 != (uint64_t *)(param_1 + 0x28);
      puVar1 = (uint64_t *)*puVar1) {
    uVar2 = FUN_18084ed10(puVar1[2]);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (puVar1 == (uint64_t *)(param_1 + 0x28)) break;
  }
  puVar1 = *(uint64_t **)(param_1 + 0x38);
  while( true ) {
    if (puVar1 == (uint64_t *)(param_1 + 0x38)) {
      return 0;
    }
    uVar2 = FUN_1808c4570(puVar1[2]);
    if ((int)uVar2 != 0) break;
    if (puVar1 == (uint64_t *)(param_1 + 0x38)) {
      return 0;
    }
    puVar1 = (uint64_t *)*puVar1;
  }
  return uVar2;
}



uint64_t FUN_1808c4570(longlong param_1)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t uVar3;
  float fVar4;
  
  fVar4 = 1.0;
  for (puVar1 = *(uint64_t **)(param_1 + 0x48); puVar1 != (uint64_t *)(param_1 + 0x48);
      puVar1 = (uint64_t *)*puVar1) {
    lVar2 = puVar1[2];
    fVar4 = fVar4 * *(float *)(*(longlong *)(lVar2 + 0x58) + 0x50) * *(float *)(lVar2 + 0x70) *
                    *(float *)(lVar2 + 0x74);
    if (puVar1 == (uint64_t *)(param_1 + 0x48)) break;
  }
  if (fVar4 != *(float *)(param_1 + 0x70)) {
    puVar1 = *(uint64_t **)(param_1 + 0x28);
    *(float *)(param_1 + 0x70) = fVar4;
    for (; puVar1 != (uint64_t *)(param_1 + 0x28); puVar1 = (uint64_t *)*puVar1) {
      uVar3 = FUN_18084ed10(puVar1[2]);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (puVar1 == (uint64_t *)(param_1 + 0x28)) break;
    }
    for (puVar1 = *(uint64_t **)(param_1 + 0x38); puVar1 != (uint64_t *)(param_1 + 0x38);
        puVar1 = (uint64_t *)*puVar1) {
      uVar3 = FUN_1808c4570(puVar1[2]);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (puVar1 == (uint64_t *)(param_1 + 0x38)) {
        return 0;
      }
    }
  }
  return 0;
}



uint64_t FUN_1808c4640(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  longlong lVar2;
  int8_t auStackX_10 [24];
  
  if (param_2 == 0) {
    return 0x1c;
  }
  lVar2 = param_1 + 0x120;
  if (param_1 == -0xf8) {
    lVar2 = 0;
  }
  if (lVar2 != 0) {
    auStackX_10[0] = 1;
    uVar1 = FUN_180879610(lVar2,param_2 + 0x10,auStackX_10);
    return uVar1;
  }
  return 0x44;
}



uint64_t FUN_1808c4690(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  longlong lVar2;
  int8_t auStackX_10 [24];
  
  if (param_2 == 0) {
    return 0x1c;
  }
  lVar2 = param_1 + 0x148;
  if (param_1 == -0xf8) {
    lVar2 = 0;
  }
  if (lVar2 != 0) {
    auStackX_10[0] = 1;
    uVar1 = FUN_180879610(lVar2,param_2 + 0x10,auStackX_10);
    return uVar1;
  }
  return 0x44;
}



uint64_t FUN_1808c46e0(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  longlong lVar2;
  int8_t auStackX_10 [24];
  
  if (param_2 == 0) {
    return 0x1c;
  }
  lVar2 = param_1 + 0x198;
  if (param_1 == -0xf8) {
    lVar2 = 0;
  }
  if (lVar2 != 0) {
    auStackX_10[0] = 1;
    uVar1 = FUN_180879610(lVar2,param_2 + 0x10,auStackX_10);
    return uVar1;
  }
  return 0x44;
}



uint64_t FUN_1808c4740(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  longlong lVar2;
  int8_t auStackX_10 [24];
  
  if (param_2 == 0) {
    return 0x1c;
  }
  lVar2 = param_1 + 0x170;
  if (param_1 == -0xf8) {
    lVar2 = 0;
  }
  if (lVar2 != 0) {
    auStackX_10[0] = 1;
    uVar1 = FUN_180879610(lVar2,param_2 + 0x10,auStackX_10);
    return uVar1;
  }
  return 0x44;
}



uint64_t FUN_1808c5220(longlong param_1,longlong param_2)

{
  short sVar1;
  uint64_t uVar2;
  longlong lVar3;
  int8_t auStackX_10 [24];
  
  if (param_2 != 0) {
    sVar1 = *(short *)(param_2 + 0xc);
    if (sVar1 == 0) {
      if (param_1 + 0xf8 != 0) {
        auStackX_10[0] = 1;
        uVar2 = FUN_180879610(param_1 + 0xf8,param_2 + 0x10,auStackX_10);
        return uVar2;
      }
      return 0x44;
    }
    if (sVar1 == 1) {
      if (param_2 == 0) {
        return 0x1c;
      }
      lVar3 = param_1 + 0x120;
      if (param_1 == -0xf8) {
        lVar3 = 0;
      }
      if (lVar3 != 0) {
        auStackX_10[0] = 1;
        uVar2 = FUN_180879610(lVar3,param_2 + 0x10,auStackX_10);
        return uVar2;
      }
      return 0x44;
    }
    if (sVar1 == 2) {
      if (param_2 == 0) {
        return 0x1c;
      }
      lVar3 = param_1 + 0x170;
      if (param_1 == -0xf8) {
        lVar3 = 0;
      }
      if (lVar3 != 0) {
        auStackX_10[0] = 1;
        uVar2 = FUN_180879610(lVar3,param_2 + 0x10,auStackX_10);
        return uVar2;
      }
      return 0x44;
    }
    if (sVar1 == 3) {
      if (param_2 == 0) {
        return 0x1c;
      }
      lVar3 = param_1 + 0x148;
      if (param_1 == -0xf8) {
        lVar3 = 0;
      }
      if (lVar3 != 0) {
        auStackX_10[0] = 1;
        uVar2 = FUN_180879610(lVar3,param_2 + 0x10,auStackX_10);
        return uVar2;
      }
      return 0x44;
    }
    if (sVar1 == 0x1e) {
      if (param_2 == 0) {
        return 0x1c;
      }
      lVar3 = param_1 + 0x198;
      if (param_1 == -0xf8) {
        lVar3 = 0;
      }
      if (lVar3 != 0) {
        auStackX_10[0] = 1;
        uVar2 = FUN_180879610(lVar3,param_2 + 0x10,auStackX_10);
        return uVar2;
      }
      return 0x44;
    }
  }
  return 0x1c;
}



uint64_t FUN_1808c52b0(longlong param_1,longlong param_2)

{
  short sVar1;
  uint64_t uVar2;
  longlong lVar3;
  int8_t auStackX_10 [24];
  
  if (param_2 == 0) {
    return 0x1c;
  }
  sVar1 = *(short *)(param_2 + 0xc);
  if (sVar1 == 0) {
    if (param_1 + 0xf8 != 0) {
      auStackX_10[0] = 1;
      uVar2 = FUN_180879610(param_1 + 0xf8,param_2 + 0x10,auStackX_10);
      return uVar2;
    }
  }
  else {
    if (sVar1 == 1) {
      if (param_2 == 0) {
        return 0x1c;
      }
      lVar3 = param_1 + 0x120;
      if (param_1 == -0xf8) {
        lVar3 = 0;
      }
      if (lVar3 == 0) {
        return 0x44;
      }
      auStackX_10[0] = 1;
      uVar2 = FUN_180879610(lVar3,param_2 + 0x10,auStackX_10);
      return uVar2;
    }
    if (sVar1 == 2) {
      if (param_2 == 0) {
        return 0x1c;
      }
      lVar3 = param_1 + 0x170;
      if (param_1 == -0xf8) {
        lVar3 = 0;
      }
      if (lVar3 == 0) {
        return 0x44;
      }
      auStackX_10[0] = 1;
      uVar2 = FUN_180879610(lVar3,param_2 + 0x10,auStackX_10);
      return uVar2;
    }
    if (sVar1 == 3) {
      if (param_2 == 0) {
        return 0x1c;
      }
      lVar3 = param_1 + 0x148;
      if (param_1 == -0xf8) {
        lVar3 = 0;
      }
      if (lVar3 == 0) {
        return 0x44;
      }
      auStackX_10[0] = 1;
      uVar2 = FUN_180879610(lVar3,param_2 + 0x10,auStackX_10);
      return uVar2;
    }
    if (sVar1 == 0x1e) {
      if (param_2 == 0) {
        return 0x1c;
      }
      lVar3 = param_1 + 0x198;
      if (param_1 == -0xf8) {
        lVar3 = 0;
      }
      if (lVar3 == 0) {
        return 0x44;
      }
      auStackX_10[0] = 1;
      uVar2 = FUN_180879610(lVar3,param_2 + 0x10,auStackX_10);
      return uVar2;
    }
    if (sVar1 != 8) {
      return 0x1c;
    }
    lVar3 = param_1 + 0x260;
    if (param_1 == -0xf8) {
      lVar3 = 0;
    }
    if (lVar3 != 0) {
      auStackX_10[0] = 1;
      uVar2 = FUN_180879610(lVar3,param_2 + 0x10,auStackX_10);
      return uVar2;
    }
  }
  return 0x44;
}



uint64_t FUN_1808c5380(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  int8_t auStackX_10 [24];
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  if (param_2 == 0) {
    return 0x1c;
  }
  uStack_18 = *(int32_t *)(param_2 + 0x10);
  uStack_14 = *(int32_t *)(param_2 + 0x14);
  uStack_10 = *(int32_t *)(param_2 + 0x18);
  uStack_c = *(int32_t *)(param_2 + 0x1c);
  if (param_1 + 8 != 0) {
    auStackX_10[0] = 1;
    uVar1 = FUN_180879610(param_1 + 8,&uStack_18,auStackX_10);
    return uVar1;
  }
  return 0x44;
}



uint64_t FUN_1808c53d0(longlong param_1,longlong *param_2)

{
  uint64_t uVar1;
  longlong lVar2;
  int8_t auStackX_10 [24];
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  if (param_2 == (longlong *)0x0) {
    return 0x1c;
  }
  if (*(ushort *)((longlong)param_2 + 0xc) < 4) {
    (**(code **)(*param_2 + 0x28))(param_2,&uStack_18);
    uStack_28 = uStack_18;
    uStack_24 = uStack_14;
    uStack_20 = uStack_10;
    uStack_1c = uStack_c;
    if (param_1 + 8 != 0) {
      auStackX_10[0] = 1;
      uVar1 = FUN_180879610(param_1 + 8,&uStack_28,auStackX_10);
      return uVar1;
    }
  }
  else {
    if (*(ushort *)((longlong)param_2 + 0xc) != 8) {
      return 0x1c;
    }
    (**(code **)(*param_2 + 0x28))(param_2);
    uStack_18 = uStack_28;
    uStack_14 = uStack_24;
    uStack_10 = uStack_20;
    uStack_c = uStack_1c;
    lVar2 = param_1 + 0x80;
    if (param_1 == -8) {
      lVar2 = 0;
    }
    if (lVar2 != 0) {
      auStackX_10[0] = 1;
      uVar1 = FUN_180879610(uStack_28,&uStack_18,auStackX_10);
      return uVar1;
    }
  }
  return 0x44;
}



uint64_t FUN_1808c54a0(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  longlong lVar2;
  int8_t auStackX_10 [24];
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  if (param_2 == 0) {
    return 0x1c;
  }
  uStack_18 = *(int32_t *)(param_2 + 0x10);
  uStack_14 = *(int32_t *)(param_2 + 0x14);
  uStack_10 = *(int32_t *)(param_2 + 0x18);
  uStack_c = *(int32_t *)(param_2 + 0x1c);
  lVar2 = param_1 + 0x30;
  if (param_1 == -8) {
    lVar2 = 0;
  }
  if (lVar2 != 0) {
    auStackX_10[0] = 1;
    uVar1 = FUN_180879610(uStack_18,&uStack_18,auStackX_10);
    return uVar1;
  }
  return 0x44;
}



int8_t FUN_1808c5500(longlong param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint *puVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  puVar3 = param_2 + 2;
  uStack_10 = *puVar3;
  uStack_c = param_2[3];
  plVar7 = (longlong *)0x0;
  lVar1 = param_1 + 0xf8;
  plVar8 = (longlong *)(param_1 + 0x1c0);
  if (lVar1 == 0) {
    plVar8 = plVar7;
  }
  if (plVar8 != (longlong *)0x0) {
    if (((*(int *)((longlong)plVar8 + 0x24) != 0) && ((int)plVar8[1] != 0)) &&
       (iVar6 = *(int *)(*plVar8 +
                        (longlong)
                        (int)((uStack_14 ^ uStack_c ^ uStack_18 ^ uStack_10) & (int)plVar8[1] - 1U)
                        * 4), iVar6 != -1)) {
      lVar2 = plVar8[2];
      do {
        lVar5 = (longlong)iVar6;
        if ((*(longlong *)(lVar2 + lVar5 * 0x18) == *(longlong *)param_2) &&
           (*(longlong *)(lVar2 + 8 + lVar5 * 0x18) == *(longlong *)puVar3)) goto LAB_1808c55a3;
        iVar6 = *(int *)(lVar2 + 0x10 + lVar5 * 0x18);
      } while (iVar6 != -1);
    }
    iVar6 = -1;
LAB_1808c55a3:
    if (iVar6 != -1) {
      return 1;
    }
  }
  plVar8 = (longlong *)(param_1 + 0x1e8);
  if (lVar1 == 0) {
    plVar8 = plVar7;
  }
  if (plVar8 != (longlong *)0x0) {
    if (((*(int *)((longlong)plVar8 + 0x24) != 0) && ((int)plVar8[1] != 0)) &&
       (iVar6 = *(int *)(*plVar8 +
                        (longlong)
                        (int)((uStack_14 ^ uStack_c ^ uStack_18 ^ uStack_10) & (int)plVar8[1] - 1U)
                        * 4), iVar6 != -1)) {
      lVar2 = plVar8[2];
      do {
        lVar5 = (longlong)iVar6;
        if ((*(longlong *)(lVar2 + lVar5 * 0x18) == *(longlong *)param_2) &&
           (*(longlong *)(lVar2 + 8 + lVar5 * 0x18) == *(longlong *)puVar3)) goto LAB_1808c5633;
        iVar6 = *(int *)(lVar2 + 0x10 + lVar5 * 0x18);
      } while (iVar6 != -1);
    }
    iVar6 = -1;
LAB_1808c5633:
    if (iVar6 != -1) {
      return 1;
    }
  }
  plVar8 = (longlong *)(param_1 + 0x210);
  if (lVar1 == 0) {
    plVar8 = plVar7;
  }
  if (plVar8 != (longlong *)0x0) {
    if (((*(int *)((longlong)plVar8 + 0x24) != 0) && ((int)plVar8[1] != 0)) &&
       (iVar6 = *(int *)(*plVar8 +
                        (longlong)
                        (int)((uStack_14 ^ uStack_c ^ uStack_18 ^ uStack_10) & (int)plVar8[1] - 1U)
                        * 4), iVar6 != -1)) {
      lVar2 = plVar8[2];
      do {
        lVar5 = (longlong)iVar6;
        if ((*(longlong *)(lVar2 + lVar5 * 0x18) == *(longlong *)param_2) &&
           (*(longlong *)(lVar2 + 8 + lVar5 * 0x18) == *(longlong *)puVar3)) goto LAB_1808c56c3;
        iVar6 = *(int *)(lVar2 + 0x10 + lVar5 * 0x18);
      } while (iVar6 != -1);
    }
    iVar6 = -1;
LAB_1808c56c3:
    if (iVar6 != -1) {
      return 1;
    }
  }
  cVar4 = func_0x0001808c5050(lVar1,&uStack_18);
  if (cVar4 != '\0') {
    return 1;
  }
  return 0;
}



// WARNING: Possible PIC construction at 0x0001808c5d00: Changing call to branch
// WARNING: Removing unreachable block (ram,0x0001808c5d05)

longlong * FUN_1808c5cb0(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong in_RAX;
  int iVar6;
  uint *puVar7;
  longlong *plVar8;
  uint auStack_18 [4];
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = *(ushort *)((longlong)param_2 + 0xc);
    in_RAX = (ulonglong)uVar1;
    if (uVar1 == 0x10) {
      puVar7 = (uint *)(param_2 + 2);
    }
    else {
      if (uVar1 != 0x11) goto LAB_1808c5d0b;
      (**(code **)(*param_2 + 0x18))(param_2,auStack_18);
      puVar7 = auStack_18;
    }
    plVar5 = (longlong *)0x0;
    plVar8 = (longlong *)(param_1 + 0x3f0);
    if (param_1 == -0xf8) {
      plVar8 = plVar5;
    }
    if (plVar8 != (longlong *)0x0) {
      if (*(int *)((longlong)plVar8 + 0x24) != 0) {
        uVar2 = *(uint *)(plVar8 + 1);
        plVar5 = (longlong *)(ulonglong)uVar2;
        if (uVar2 != 0) {
          plVar5 = (longlong *)*plVar8;
          iVar6 = *(int *)((longlong)plVar5 +
                          (longlong)(int)((puVar7[3] ^ puVar7[2] ^ puVar7[1] ^ *puVar7) & uVar2 - 1)
                          * 4);
          if (iVar6 != -1) {
            lVar3 = plVar8[2];
            do {
              lVar4 = (longlong)iVar6;
              plVar5 = *(longlong **)(lVar3 + lVar4 * 0x18);
              if ((plVar5 == *(longlong **)puVar7) &&
                 (plVar5 = *(longlong **)(lVar3 + 8 + lVar4 * 0x18),
                 plVar5 == *(longlong **)(puVar7 + 2))) goto LAB_1808c4b8a;
              iVar6 = *(int *)(lVar3 + 0x10 + lVar4 * 0x18);
            } while (iVar6 != -1);
          }
        }
      }
      iVar6 = -1;
LAB_1808c4b8a:
      plVar5 = (longlong *)CONCAT71((int7)((ulonglong)plVar5 >> 8),iVar6 != -1);
    }
    return plVar5;
  }
LAB_1808c5d0b:
  return (longlong *)(in_RAX & 0xffffffffffffff00);
}



int8_t FUN_1808c5d20(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint *puVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  puVar3 = param_2 + 2;
  uStack_10 = *puVar3;
  uStack_c = param_2[3];
  plVar1 = (longlong *)(param_1 + 0xf8);
  if (plVar1 != (longlong *)0x0) {
    if (((*(int *)(param_1 + 0x11c) != 0) && (*(int *)(param_1 + 0x100) != 0)) &&
       (iVar6 = *(int *)(*plVar1 +
                        (longlong)
                        (int)((uStack_14 ^ uStack_c ^ uStack_18 ^ uStack_10) &
                             *(int *)(param_1 + 0x100) - 1U) * 4), iVar6 != -1)) {
      lVar2 = *(longlong *)(param_1 + 0x108);
      do {
        lVar5 = (longlong)iVar6;
        if ((*(longlong *)(lVar2 + lVar5 * 0x18) == *(longlong *)param_2) &&
           (*(longlong *)(lVar2 + 8 + lVar5 * 0x18) == *(longlong *)puVar3)) goto LAB_1808c5db3;
        iVar6 = *(int *)(lVar2 + 0x10 + lVar5 * 0x18);
      } while (iVar6 != -1);
    }
    iVar6 = -1;
LAB_1808c5db3:
    if (iVar6 != -1) {
      return 1;
    }
  }
  plVar7 = (longlong *)(param_1 + 0x120);
  if (plVar1 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  if (plVar7 != (longlong *)0x0) {
    if (((*(int *)((longlong)plVar7 + 0x24) != 0) && ((int)plVar7[1] != 0)) &&
       (iVar6 = *(int *)(*plVar7 +
                        (longlong)
                        (int)((uStack_14 ^ uStack_c ^ uStack_18 ^ uStack_10) & (int)plVar7[1] - 1U)
                        * 4), iVar6 != -1)) {
      lVar2 = plVar7[2];
      do {
        lVar5 = (longlong)iVar6;
        if ((*(longlong *)(lVar2 + lVar5 * 0x18) == *(longlong *)param_2) &&
           (*(longlong *)(lVar2 + 8 + lVar5 * 0x18) == *(longlong *)puVar3)) goto LAB_1808c5e43;
        iVar6 = *(int *)(lVar2 + 0x10 + lVar5 * 0x18);
      } while (iVar6 != -1);
    }
    iVar6 = -1;
LAB_1808c5e43:
    if (iVar6 != -1) {
      return 1;
    }
  }
  plVar7 = (longlong *)(param_1 + 0x170);
  if (plVar1 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  if (plVar7 != (longlong *)0x0) {
    if (((*(int *)((longlong)plVar7 + 0x24) != 0) && ((int)plVar7[1] != 0)) &&
       (iVar6 = *(int *)(*plVar7 +
                        (longlong)
                        (int)((uStack_14 ^ uStack_c ^ uStack_18 ^ uStack_10) & (int)plVar7[1] - 1U)
                        * 4), iVar6 != -1)) {
      lVar2 = plVar7[2];
      do {
        lVar5 = (longlong)iVar6;
        if ((*(longlong *)(lVar2 + lVar5 * 0x18) == *(longlong *)param_2) &&
           (*(longlong *)(lVar2 + 8 + lVar5 * 0x18) == *(longlong *)puVar3)) goto LAB_1808c5ed3;
        iVar6 = *(int *)(lVar2 + 0x10 + lVar5 * 0x18);
      } while (iVar6 != -1);
    }
    iVar6 = -1;
LAB_1808c5ed3:
    if (iVar6 != -1) {
      return 1;
    }
  }
  cVar4 = func_0x0001808c4ba0(plVar1,&uStack_18);
  if (cVar4 == '\0') {
    uStack_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    cVar4 = func_0x0001808c4cd0(plVar1,&uStack_18);
    if (cVar4 == '\0') {
      return 0;
    }
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_1808c5f30(longlong param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    pfVar1 = *(float **)(param_1 + 0x30);
    pfVar4 = (float *)0x0;
    pfVar2 = pfVar1;
    if (param_2 < *pfVar1) {
      return pfVar1[1];
    }
    while (((pfVar3 = pfVar2, pfVar1 <= pfVar3 &&
            (pfVar3 < pfVar1 + (longlong)*(int *)(param_1 + 0x38) * 6)) && (*pfVar3 <= param_2))) {
      pfVar4 = pfVar3;
      pfVar2 = pfVar3 + 6;
    }
    if ((pfVar1 <= pfVar4) && (pfVar4 < pfVar1 + (longlong)*(int *)(param_1 + 0x38) * 6)) {
      if ((pfVar4[5] != 4.2039e-45) &&
         ((pfVar2 = pfVar4 + 6, pfVar1 <= pfVar2 &&
          (pfVar2 < pfVar1 + (longlong)*(int *)(param_1 + 0x38) * 6)))) {
        fVar7 = (param_2 - *pfVar4) / (*pfVar2 - *pfVar4);
        if (pfVar4[5] != 2.8026e-45) {
          fVar7 = (float)FUN_1808c6380(param_1,fVar7,pfVar4);
          return fVar7 * (pfVar4[7] - pfVar4[1]) + pfVar4[1];
        }
        if ((*(int *)(*(longlong *)
                       ((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 0x48) <
             system_system_config) && (SystemInitializer(&system_ptr_f494), system_system_config == -1)) {
          system_system_config = 0.7213475;
          FUN_1808fcb30(&system_ptr_f494);
        }
        fVar5 = (float)powf(0x40000000,pfVar4[1] + pfVar4[1]);
        fVar6 = (float)powf(0x40000000,pfVar4[7] + pfVar4[7]);
        fVar7 = (float)logf((fVar6 - fVar5) * fVar7 + fVar5);
        return fVar7 * system_system_config;
      }
      return pfVar4[1];
    }
  }
  return 0.0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_1808c5fbe(int param_1,uint64_t param_2,uint64_t param_3,float *param_4)

{
  float *pfVar1;
  float *in_RAX;
  float *unaff_RBX;
  float fVar2;
  float fVar3;
  float unaff_XMM8_Da;
  float fVar4;
  
  if (((param_1 != 3) && (pfVar1 = unaff_RBX + 6, param_4 <= pfVar1)) && (pfVar1 < in_RAX)) {
    fVar4 = (unaff_XMM8_Da - *unaff_RBX) / (*pfVar1 - *unaff_RBX);
    if (param_1 == 2) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
                  0x48) < system_system_config) {
        SystemInitializer(&system_ptr_f494);
        if (system_system_config == -1) {
          system_system_config = 0.7213475;
          FUN_1808fcb30(&system_ptr_f494);
        }
      }
      fVar2 = (float)powf(0x40000000,unaff_RBX[1] + unaff_RBX[1]);
      fVar3 = (float)powf(0x40000000,unaff_RBX[7] + unaff_RBX[7]);
      fVar4 = (float)logf((fVar3 - fVar2) * fVar4 + fVar2);
      return fVar4 * system_system_config;
    }
    fVar4 = (float)FUN_1808c6380(*pfVar1 - *unaff_RBX,fVar4);
    return fVar4 * (unaff_RBX[7] - unaff_RBX[1]) + unaff_RBX[1];
  }
  return unaff_RBX[1];
}



float FUN_1808c6088(void)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  float fVar1;
  
  fVar1 = (float)FUN_1808c6380();
  return fVar1 * (*(float *)(unaff_RDI + 4) - *(float *)(unaff_RBX + 4)) + *(float *)(unaff_RBX + 4)
  ;
}



int32_t FUN_1808c60bb(void)

{
  longlong unaff_RBX;
  
  return *(int32_t *)(unaff_RBX + 4);
}



uint64_t FUN_1808c60d1(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_1808c60e0(void)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  float fVar1;
  float fVar2;
  float unaff_XMM8_Da;
  
  SystemInitializer(&system_ptr_f494);
  if (system_system_config == -1) {
    system_system_config = 0.7213475;
    FUN_1808fcb30(&system_ptr_f494);
  }
  fVar1 = (float)powf(0x40000000,*(float *)(unaff_RBX + 4) + *(float *)(unaff_RBX + 4));
  fVar2 = (float)powf(0x40000000,*(float *)(unaff_RDI + 4) + *(float *)(unaff_RDI + 4));
  fVar1 = (float)logf((fVar2 - fVar1) * unaff_XMM8_Da + fVar1);
  return fVar1 * system_system_config;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_1808c6120(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar1 = *(uint **)(param_1 + 0x30);
    puVar2 = (uint *)0x0;
    puVar3 = puVar1;
    if (param_2 < *puVar1) {
      return (float)puVar1[1];
    }
    for (; ((puVar1 <= puVar3 && (puVar3 < puVar1 + (longlong)*(int *)(param_1 + 0x38) * 6)) &&
           (*puVar3 <= param_2)); puVar3 = puVar3 + 6) {
      puVar2 = puVar3;
    }
    if ((puVar1 <= puVar2) && (puVar2 < puVar1 + (longlong)*(int *)(param_1 + 0x38) * 6)) {
      if ((puVar2[5] != 3) &&
         ((puVar3 = puVar2 + 6, puVar1 <= puVar3 &&
          (puVar3 < puVar1 + (longlong)*(int *)(param_1 + 0x38) * 6)))) {
        fVar6 = (float)(param_2 - *puVar2) / (float)(*puVar3 - *puVar2);
        if (puVar2[5] != 2) {
          fVar6 = (float)FUN_1808c6380(param_1,fVar6,puVar2);
          return fVar6 * ((float)puVar2[7] - (float)puVar2[1]) + (float)puVar2[1];
        }
        if ((*(int *)(*(longlong *)
                       ((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 0x48) <
             system_system_config) && (SystemInitializer(&system_ptr_f49c), system_system_config == -1)) {
          system_system_config = 0.7213475;
          FUN_1808fcb30(&system_ptr_f49c);
        }
        fVar4 = (float)powf(0x40000000,(float)puVar2[1] + (float)puVar2[1]);
        fVar5 = (float)powf(0x40000000,(float)puVar2[7] + (float)puVar2[7]);
        fVar6 = (float)logf((fVar5 - fVar4) * fVar6 + fVar4);
        return fVar6 * system_system_config;
      }
      return (float)puVar2[1];
    }
  }
  return 0.0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_1808c619c(uint64_t param_1,uint64_t param_2,int param_3,int *param_4)

{
  int *piVar1;
  int *in_RAX;
  int *unaff_RBX;
  int in_R11D;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (((param_3 != 3) && (piVar1 = unaff_RBX + 6, param_4 <= piVar1)) && (piVar1 < in_RAX)) {
    fVar4 = (float)(uint)(in_R11D - *unaff_RBX) / (float)(uint)(*piVar1 - *unaff_RBX);
    if (param_3 == 2) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
                  0x48) < system_system_config) {
        SystemInitializer(&system_ptr_f49c);
        if (system_system_config == -1) {
          system_system_config = 0.7213475;
          FUN_1808fcb30(&system_ptr_f49c);
        }
      }
      fVar2 = (float)powf(0x40000000,(float)unaff_RBX[1] + (float)unaff_RBX[1]);
      fVar3 = (float)powf(0x40000000,(float)unaff_RBX[7] + (float)unaff_RBX[7]);
      fVar4 = (float)logf((fVar3 - fVar2) * fVar4 + fVar2);
      return fVar4 * system_system_config;
    }
    fVar4 = (float)FUN_1808c6380((float)(uint)(*piVar1 - *unaff_RBX),fVar4);
    return fVar4 * ((float)unaff_RBX[7] - (float)unaff_RBX[1]) + (float)unaff_RBX[1];
  }
  return (float)unaff_RBX[1];
}



float FUN_1808c627e(void)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  float fVar1;
  
  fVar1 = (float)FUN_1808c6380();
  return fVar1 * (*(float *)(unaff_RDI + 4) - *(float *)(unaff_RBX + 4)) + *(float *)(unaff_RBX + 4)
  ;
}



int32_t FUN_1808c62b1(void)

{
  longlong unaff_RBX;
  
  return *(int32_t *)(unaff_RBX + 4);
}



uint64_t FUN_1808c62c1(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_1808c62ca(void)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  float fVar1;
  float fVar2;
  float unaff_XMM8_Da;
  
  SystemInitializer(&system_ptr_f49c);
  if (system_system_config == -1) {
    system_system_config = 0.7213475;
    FUN_1808fcb30(&system_ptr_f49c);
  }
  fVar1 = (float)powf(0x40000000,*(float *)(unaff_RBX + 4) + *(float *)(unaff_RBX + 4));
  fVar2 = (float)powf(0x40000000,*(float *)(unaff_RDI + 4) + *(float *)(unaff_RDI + 4));
  fVar1 = (float)logf((fVar2 - fVar1) * unaff_XMM8_Da + fVar1);
  return fVar1 * system_system_config;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






