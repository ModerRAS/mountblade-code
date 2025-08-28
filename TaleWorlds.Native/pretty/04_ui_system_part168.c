#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part168.c - 9 个函数

// 函数: void FUN_18076906d(void)
void FUN_18076906d(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_180769080(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  int32_t uVar4;
  
  *(int8_t *)((longlong)param_1 + 0x3c) = 1;
  (**(code **)(*param_1 + 0x40))(param_1,param_1 + 0x34);
  if ((*(uint *)((longlong)param_1 + 0x194) & 8) != 0) {
    iVar2 = (int)param_1[0x32];
    while (iVar2 != 0) {
      FUN_180768bf0(10);
      iVar2 = (int)param_1[0x32];
    }
  }
  if (param_1[0x31] != 0) {
    FUN_180768360(*(uint64_t *)(param_1[0x31] + 0x198));
    plVar1 = param_1 + 1;
    if (plVar1 == *(longlong **)(param_1[0x31] + 400)) {
      *(longlong *)(param_1[0x31] + 400) = *plVar1;
    }
    *(longlong *)param_1[2] = *plVar1;
    *(longlong *)(*plVar1 + 8) = param_1[2];
    param_1[2] = (longlong)plVar1;
    *plVar1 = (longlong)plVar1;
                    // WARNING: Subroutine does not return
    FUN_180768400(*(uint64_t *)(param_1[0x31] + 0x198));
  }
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
  if ((param_1[0x33] != 0) && (pcVar3 = *(code **)(param_1[0x33] + 0x11820), pcVar3 != (code *)0x0))
  {
    (*pcVar3)(param_1[6],param_1[5]);
  }
  if (param_1[0x29] != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1[0x29],&UNK_180958c10,0x226,1);
  }
  if (param_1[0x3d] != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1[0x3d],&UNK_180958c10,0x22e,1);
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180769220(longlong param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  int32_t uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint64_t uVar7;
  longlong *plVar8;
  uint uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x164);
  if (uVar2 == 0) {
    return 0;
  }
  uVar3 = *(int32_t *)(param_1 + 0x15c);
  *(uint *)(param_1 + 0x160) = uVar2;
  *(int32_t *)(param_1 + 0x168) = 0;
  uVar9 = 0x800;
  if (0x7ff < param_2) {
    uVar9 = param_2;
  }
  uVar4 = uVar2;
  if (uVar2 <= uVar9) {
    uVar4 = uVar9;
  }
  iVar5 = (uVar4 / uVar2) * uVar2;
  *(int *)(param_1 + 0x164) = iVar5;
  *(int *)(param_1 + 0x170) = iVar5;
  *(int *)(param_1 + 0x174) = iVar5;
  iVar5 = iVar5 * 2;
  *(int *)(param_1 + 0x15c) = iVar5;
  if (param_3 == 0) {
    lVar6 = FUN_180742650(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(param_1 + 0x1e8),
                          iVar5 + 1,&UNK_180958c10,0x720,1);
    *(longlong *)(param_1 + 0x1e8) = lVar6;
    if (lVar6 != 0) {
      *(longlong *)(param_1 + 0x1e0) = lVar6;
      uVar7 = FUN_180769860(param_1);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      FUN_180768360(*(uint64_t *)(*(longlong *)(param_1 + 0x188) + 0x198));
      plVar1 = (longlong *)(param_1 + 8);
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0x188) + 0x170);
      lVar6 = *plVar8;
      *plVar1 = lVar6;
      *(longlong **)(param_1 + 0x10) = plVar8;
      *(longlong **)(lVar6 + 8) = plVar1;
      **(longlong **)(param_1 + 0x10) = (longlong)plVar1;
                    // WARNING: Subroutine does not return
      FUN_180768400(*(uint64_t *)(*(longlong *)(param_1 + 0x188) + 0x198));
    }
  }
  else {
    lVar6 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),iVar5 + 1,&UNK_180958c10,0x717,1);
    *(longlong *)(param_1 + 0x1e8) = lVar6;
    if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(lVar6,param_3,uVar3);
    }
  }
  return 0x26;
}



uint FUN_1807693d0(longlong *param_1,char param_2)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint auStackX_8 [2];
  
  iVar9 = 0;
  uVar7 = 0;
  if ((*(int *)((longlong)param_1 + 0x1dc) == 0x2e) ||
     ((param_2 == '\0' && ((int)param_1[0x32] == 0)))) {
LAB_1807696ef:
    uVar3 = 0x2e;
  }
  else {
    lVar8 = param_1[0x3c] + (ulonglong)*(uint *)(param_1 + 0x2c) +
            (ulonglong)*(uint *)(param_1 + 0x3b) + (ulonglong)*(uint *)(param_1 + 0x2d);
    *(uint *)((longlong)param_1 + 0x194) = *(uint *)((longlong)param_1 + 0x194) | 8;
    uVar6 = (*(int *)((longlong)param_1 + 0x164) - *(uint *)(param_1 + 0x2c)) -
            *(uint *)(param_1 + 0x3b);
    uVar3 = uVar7;
    do {
      if (uVar6 == 0) goto LAB_180769671;
      uVar4 = *(uint *)((longlong)param_1 + 0x1dc);
      auStackX_8[0] = 0;
      if (uVar4 == 0x2e) {
LAB_1807695a9:
        if (uVar3 != 0) goto LAB_1807695ad;
      }
      else {
        if ((uVar4 & 0xffffffef) != 0) {
          *(int32_t *)((longlong)param_1 + 0x1dc) = 0;
          uVar3 = uVar4;
          goto LAB_1807695a9;
        }
        uVar3 = *(uint *)(param_1 + 0x39);
        if (uVar3 != 0) {
          *(uint *)(param_1 + 0x3b) = (int)param_1[0x3b] + uVar3;
          *(int32_t *)((longlong)param_1 + 0x1dc) = 0;
          auStackX_8[0] = uVar3;
LAB_1807695a2:
          *(int32_t *)(param_1 + 0x39) = 0;
          uVar3 = uVar4;
          goto LAB_1807695a9;
        }
        if (param_2 == '\0') {
          iVar5 = *(int *)((longlong)param_1 + 0x174);
        }
        else {
          iVar5 = (int)param_1[0x2e] + iVar9;
        }
        if (((*(uint *)(param_1 + 4) == 0xffffffff) || (iVar5 <= (int)param_1[0x2f])) ||
           ((uint)(iVar5 - (int)param_1[0x2f]) < *(uint *)(param_1 + 4))) {
          param_1[0x38] = lVar8;
          *(int32_t *)(param_1 + 0x39) = 0;
          param_1[0x34] = (longlong)param_1;
          *(int *)(param_1 + 0x35) = iVar5;
          if ((*(uint *)((longlong)param_1 + 0x194) >> 8 & 1) == 0) {
            uVar3 = 0x32;
            if (param_2 != '\0') {
              uVar3 = uVar7;
            }
          }
          else {
            uVar3 = 100;
          }
          *(uint *)(param_1 + 0x36) = uVar3;
          param_1[0x37] = 0;
          *(int32_t *)((longlong)param_1 + 0x1dc) = 0;
          *(uint *)((longlong)param_1 + 0x1ac) = uVar6;
          if ((param_1[0x33] != 0) && ((int)param_1[8] != 3)) {
            LOCK();
            plVar1 = (longlong *)(param_1[0x33] + 0x115f0 + (longlong)(int)param_1[8] * 8);
            *plVar1 = *plVar1 + (longlong)(int)uVar6;
            UNLOCK();
          }
          uVar4 = (**(code **)(*param_1 + 0x48))(param_1,param_1 + 0x34,auStackX_8,param_2);
          if ((uVar4 != 0x2e) || (param_2 != '\0')) goto LAB_1807695a2;
          goto LAB_1807696ef;
        }
        uVar3 = 0x10;
LAB_1807695ad:
        uVar6 = auStackX_8[0];
        if ((((int)param_1[4] == -1) && (uVar3 == 0x10)) &&
           (iVar5 = *(int *)((longlong)param_1 + 0x174), iVar5 != 0)) {
          *(int *)((longlong)param_1 + 0x24) = iVar5;
          *(int *)(param_1 + 4) = iVar5;
        }
      }
      if ((param_1[0x33] != 0) &&
         (pcVar2 = *(code **)(param_1[0x33] + 0x11828), pcVar2 != (code *)0x0)) {
        (*pcVar2)(param_1[6],lVar8,auStackX_8[0],0,param_1[5]);
      }
      if ((auStackX_8[0] == 0) || (uVar6 < auStackX_8[0])) goto LAB_180769671;
      *(int *)((longlong)param_1 + 0x174) = *(int *)((longlong)param_1 + 0x174) + auStackX_8[0];
      lVar8 = lVar8 + (ulonglong)auStackX_8[0];
      uVar6 = uVar6 - auStackX_8[0];
      iVar9 = iVar9 + auStackX_8[0];
      iVar5 = (int)((((float)*(uint *)((longlong)param_1 + 0x174) -
                     (float)*(uint *)((longlong)param_1 + 0x16c)) /
                    (float)*(uint *)((longlong)param_1 + 0x15c)) * 100.0);
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      *(int *)((longlong)param_1 + 0x17c) = iVar5;
    } while (*(char *)((longlong)param_1 + 0x3c) == '\0');
    *(int8_t *)((longlong)param_1 + 0x3c) = 0;
LAB_180769671:
    if ((int)param_1[0x2d] == 0) {
      uVar6 = *(uint *)((longlong)param_1 + 0x194) | 0x40;
    }
    else {
      uVar6 = *(uint *)((longlong)param_1 + 0x194) | 0x80;
    }
    *(uint *)((longlong)param_1 + 0x194) = uVar6;
    *(int *)(param_1 + 0x2d) = (int)param_1[0x2d] + *(int *)((longlong)param_1 + 0x164);
    uVar6 = *(uint *)(param_1 + 0x2d);
    if (*(uint *)((longlong)param_1 + 0x15c) <= *(uint *)(param_1 + 0x2d)) {
      uVar6 = uVar7;
    }
    *(int32_t *)(param_1 + 0x2c) = 0;
    *(uint *)(param_1 + 0x2d) = uVar6;
    *(int32_t *)(param_1 + 0x3b) = 0;
    *(uint *)(param_1 + 0x30) = uVar3;
    *(uint *)((longlong)param_1 + 0x194) = *(uint *)((longlong)param_1 + 0x194) & 0xfffffed7;
    if (param_2 == '\0') {
      *(int *)(param_1 + 0x32) = (int)param_1[0x32] + -1;
    }
  }
  return uVar3;
}





// 函数: void FUN_180769720(uint64_t param_1,int8_t *param_2)
void FUN_180769720(uint64_t param_1,int8_t *param_2)

{
  int8_t auStackX_10 [8];
  int8_t auStackX_18 [16];
  
  FUN_180769ed0(param_1,auStackX_10,1,1,auStackX_18);
  if (param_2 != (int8_t *)0x0) {
    *param_2 = auStackX_10[0];
  }
  return;
}





// 函数: void FUN_180769760(uint64_t param_1,ushort *param_2)
void FUN_180769760(uint64_t param_1,ushort *param_2)

{
  byte abStackX_10 [8];
  int8_t auStackX_18 [16];
  
  FUN_180769ed0(param_1,abStackX_10,1,1,auStackX_18);
  if (param_2 != (ushort *)0x0) {
    *param_2 = (ushort)abStackX_10[0];
  }
  return;
}





// 函数: void FUN_1807697a0(uint64_t param_1,int *param_2)
void FUN_1807697a0(uint64_t param_1,int *param_2)

{
  char acStackX_10 [8];
  int8_t auStackX_18 [16];
  
  FUN_180769ed0(param_1,acStackX_10,1,1,auStackX_18);
  if (param_2 != (int *)0x0) {
    *param_2 = (int)acStackX_10[0];
  }
  return;
}





// 函数: void FUN_1807697e0(uint64_t param_1,uint *param_2)
void FUN_1807697e0(uint64_t param_1,uint *param_2)

{
  byte abStackX_10 [8];
  int8_t auStackX_18 [16];
  
  FUN_180769ed0(param_1,abStackX_10,1,1,auStackX_18);
  if (param_2 != (uint *)0x0) {
    *param_2 = (uint)abStackX_10[0];
  }
  return;
}





// 函数: void FUN_180769820(uint64_t param_1,int32_t *param_2)
void FUN_180769820(uint64_t param_1,int32_t *param_2)

{
  int32_t auStackX_10 [2];
  int8_t auStackX_18 [16];
  
  FUN_180769ed0(param_1,auStackX_10,4,1,auStackX_18);
  if (param_2 != (int32_t *)0x0) {
    *param_2 = auStackX_10[0];
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180769860(longlong param_1)

{
  longlong *plVar1;
  uint64_t uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int32_t uVar6;
  uint64_t uVar7;
  char cVar8;
  
  uVar6 = 4;
  cVar8 = '\0';
  iVar4 = FUN_18076b6f0(&system_data_8c80,param_1 + 0x44,7);
  if (iVar4 == 0) {
    uVar6 = 3;
    cVar8 = '\x01';
  }
  else {
    for (plVar5 = *(longlong **)(_DAT_180be12f0 + 0x28);
        plVar5 != (longlong *)(_DAT_180be12f0 + 0x28); plVar5 = (longlong *)*plVar5) {
      if ((int)plVar5[0x34] == 4) goto LAB_180769a38;
    }
  }
  plVar5 = (longlong *)
           FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x1a8,&UNK_180958c10,0x110,0,0,1);
  if (plVar5 == (longlong *)0x0) {
    return 0x26;
  }
  plVar5[1] = (longlong)plVar5;
  *plVar5 = (longlong)plVar5;
  plVar5[2] = 0;
  func_0x000180767970(plVar5 + 3);
  plVar1 = plVar5 + 0x2e;
  plVar5[0x2f] = (longlong)plVar1;
  *plVar1 = (longlong)plVar1;
  plVar5[0x30] = 0;
  plVar5[0x33] = 0;
  plVar5[0x31] = 0;
  plVar5[0x32] = 0;
  *(int32_t *)(plVar5 + 0x34) = 0;
  *(int8_t *)((longlong)plVar5 + 0x1a4) = 0;
  *(int8_t *)(plVar5 + 0x2d) = 0;
  uVar2 = *(uint64_t *)(param_1 + 0x198);
  *(int32_t *)(plVar5 + 0x34) = uVar6;
  *(char *)((longlong)plVar5 + 0x1a4) = cVar8;
  iVar4 = FUN_1807682e0(plVar5 + 0x33,0);
  if (iVar4 == 0) {
    uVar7 = 0;
    if (cVar8 != '\0') {
      uVar7 = uVar2;
    }
    iVar4 = FUN_180767c00(plVar5 + 3,&UNK_180958bf0,&UNK_1807693c0,plVar5,3,0,10,uVar7,1);
    if (iVar4 == 0) {
      if (*(char *)((longlong)plVar5 + 0x1a4) == '\0') {
        *(longlong *)(_DAT_180be12f0 + 0x40) = plVar5[0x25];
      }
      *(int8_t *)(plVar5 + 0x2d) = 1;
      lVar3 = *(longlong *)(_DAT_180be12f0 + 0x28);
      plVar5[1] = _DAT_180be12f0 + 0x28;
      *plVar5 = lVar3;
      *(longlong **)(lVar3 + 8) = plVar5;
      *(longlong **)plVar5[1] = plVar5;
      goto LAB_180769a38;
    }
  }
  if (iVar4 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar5,&UNK_180958c10,0x119,1);
  }
LAB_180769a38:
  *(longlong **)(param_1 + 0x188) = plVar5;
  return 0;
}





// 函数: void FUN_180769ac0(uint64_t param_1,int16_t *param_2)
void FUN_180769ac0(uint64_t param_1,int16_t *param_2)

{
  int16_t auStackX_10 [4];
  int8_t auStackX_18 [16];
  
  FUN_180769ed0(param_1,auStackX_10,2,1,auStackX_18);
  if (param_2 != (int16_t *)0x0) {
    *param_2 = auStackX_10[0];
  }
  return;
}





// 函数: void FUN_180769b00(uint64_t param_1,int *param_2)
void FUN_180769b00(uint64_t param_1,int *param_2)

{
  short asStackX_10 [4];
  int8_t auStackX_18 [16];
  
  FUN_180769ed0(param_1,asStackX_10,2,1,auStackX_18);
  if (param_2 != (int *)0x0) {
    *param_2 = (int)asStackX_10[0];
  }
  return;
}





// 函数: void FUN_180769b40(uint64_t param_1,uint *param_2)
void FUN_180769b40(uint64_t param_1,uint *param_2)

{
  ushort auStackX_10 [4];
  int8_t auStackX_18 [16];
  
  FUN_180769ed0(param_1,auStackX_10,2,1,auStackX_18);
  if (param_2 != (uint *)0x0) {
    *param_2 = (uint)auStackX_10[0];
  }
  return;
}





