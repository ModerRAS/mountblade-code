#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part168.c - 9 个函数

// 函数: void FUN_18076906d(void)
void FUN_18076906d(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_180769080(int64_t *param_1)

{
  int64_t *plVar1;
  int iVar2;
  code *pcVar3;
  int32_t uVar4;
  
  *(int8_t *)((int64_t)param_1 + 0x3c) = 1;
  (**(code **)(*param_1 + 0x40))(param_1,param_1 + 0x34);
  if ((*(uint *)((int64_t)param_1 + 0x194) & 8) != 0) {
    iVar2 = (int)param_1[0x32];
    while (iVar2 != 0) {
      FUN_180768bf0(10);
      iVar2 = (int)param_1[0x32];
    }
  }
  if (param_1[0x31] != 0) {
    SystemMemoryAllocator(*(uint64_t *)(param_1[0x31] + 0x198));
    plVar1 = param_1 + 1;
    if (plVar1 == *(int64_t **)(param_1[0x31] + 400)) {
      *(int64_t *)(param_1[0x31] + 400) = *plVar1;
    }
    *(int64_t *)param_1[2] = *plVar1;
    *(int64_t *)(*plVar1 + 8) = param_1[2];
    param_1[2] = (int64_t)plVar1;
    *plVar1 = (int64_t)plVar1;
                    // WARNING: Subroutine does not return
    SystemMemoryManager(*(uint64_t *)(param_1[0x31] + 0x198));
  }
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
  if ((param_1[0x33] != 0) && (pcVar3 = *(code **)(param_1[0x33] + 0x11820), pcVar3 != (code *)0x0))
  {
    (*pcVar3)(param_1[6],param_1[5]);
  }
  if (param_1[0x29] != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[0x29],&ui_system_data_1664_ptr,0x226,1);
  }
  if (param_1[0x3d] != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[0x3d],&ui_system_data_1664_ptr,0x22e,1);
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180769220(int64_t param_1,uint param_2,int64_t param_3)

{
  int64_t *plVar1;
  uint uVar2;
  int32_t uVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t *plVar8;
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
    lVar6 = FUN_180742650(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(param_1 + 0x1e8),
                          iVar5 + 1,&ui_system_data_1664_ptr,0x720,1);
    *(int64_t *)(param_1 + 0x1e8) = lVar6;
    if (lVar6 != 0) {
      *(int64_t *)(param_1 + 0x1e0) = lVar6;
      uVar7 = FUN_180769860(param_1);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      SystemMemoryAllocator(*(uint64_t *)(*(int64_t *)(param_1 + 0x188) + 0x198));
      plVar1 = (int64_t *)(param_1 + 8);
      plVar8 = (int64_t *)(*(int64_t *)(param_1 + 0x188) + 0x170);
      lVar6 = *plVar8;
      *plVar1 = lVar6;
      *(int64_t **)(param_1 + 0x10) = plVar8;
      *(int64_t **)(lVar6 + 8) = plVar1;
      **(int64_t **)(param_1 + 0x10) = (int64_t)plVar1;
                    // WARNING: Subroutine does not return
      SystemMemoryManager(*(uint64_t *)(*(int64_t *)(param_1 + 0x188) + 0x198));
    }
  }
  else {
    lVar6 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar5 + 1,&ui_system_data_1664_ptr,0x717,1);
    *(int64_t *)(param_1 + 0x1e8) = lVar6;
    if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(lVar6,param_3,uVar3);
    }
  }
  return 0x26;
}



uint FUN_1807693d0(int64_t *param_1,char param_2)

{
  int64_t *plVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int64_t lVar8;
  int iVar9;
  uint auStackX_8 [2];
  
  iVar9 = 0;
  uVar7 = 0;
  if ((*(int *)((int64_t)param_1 + 0x1dc) == 0x2e) ||
     ((param_2 == '\0' && ((int)param_1[0x32] == 0)))) {
LAB_1807696ef:
    uVar3 = 0x2e;
  }
  else {
    lVar8 = param_1[0x3c] + (uint64_t)*(uint *)(param_1 + 0x2c) +
            (uint64_t)*(uint *)(param_1 + 0x3b) + (uint64_t)*(uint *)(param_1 + 0x2d);
    *(uint *)((int64_t)param_1 + 0x194) = *(uint *)((int64_t)param_1 + 0x194) | 8;
    uVar6 = (*(int *)((int64_t)param_1 + 0x164) - *(uint *)(param_1 + 0x2c)) -
            *(uint *)(param_1 + 0x3b);
    uVar3 = uVar7;
    do {
      if (uVar6 == 0) goto LAB_180769671;
      uVar4 = *(uint *)((int64_t)param_1 + 0x1dc);
      auStackX_8[0] = 0;
      if (uVar4 == 0x2e) {
LAB_1807695a9:
        if (uVar3 != 0) goto LAB_1807695ad;
      }
      else {
        if ((uVar4 & 0xffffffef) != 0) {
          *(int32_t *)((int64_t)param_1 + 0x1dc) = 0;
          uVar3 = uVar4;
          goto LAB_1807695a9;
        }
        uVar3 = *(uint *)(param_1 + 0x39);
        if (uVar3 != 0) {
          *(uint *)(param_1 + 0x3b) = (int)param_1[0x3b] + uVar3;
          *(int32_t *)((int64_t)param_1 + 0x1dc) = 0;
          auStackX_8[0] = uVar3;
LAB_1807695a2:
          *(int32_t *)(param_1 + 0x39) = 0;
          uVar3 = uVar4;
          goto LAB_1807695a9;
        }
        if (param_2 == '\0') {
          iVar5 = *(int *)((int64_t)param_1 + 0x174);
        }
        else {
          iVar5 = (int)param_1[0x2e] + iVar9;
        }
        if (((*(uint *)(param_1 + 4) == 0xffffffff) || (iVar5 <= (int)param_1[0x2f])) ||
           ((uint)(iVar5 - (int)param_1[0x2f]) < *(uint *)(param_1 + 4))) {
          param_1[0x38] = lVar8;
          *(int32_t *)(param_1 + 0x39) = 0;
          param_1[0x34] = (int64_t)param_1;
          *(int *)(param_1 + 0x35) = iVar5;
          if ((*(uint *)((int64_t)param_1 + 0x194) >> 8 & 1) == 0) {
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
          *(int32_t *)((int64_t)param_1 + 0x1dc) = 0;
          *(uint *)((int64_t)param_1 + 0x1ac) = uVar6;
          if ((param_1[0x33] != 0) && ((int)param_1[8] != 3)) {
            LOCK();
            plVar1 = (int64_t *)(param_1[0x33] + 0x115f0 + (int64_t)(int)param_1[8] * 8);
            *plVar1 = *plVar1 + (int64_t)(int)uVar6;
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
           (iVar5 = *(int *)((int64_t)param_1 + 0x174), iVar5 != 0)) {
          *(int *)((int64_t)param_1 + 0x24) = iVar5;
          *(int *)(param_1 + 4) = iVar5;
        }
      }
      if ((param_1[0x33] != 0) &&
         (pcVar2 = *(code **)(param_1[0x33] + 0x11828), pcVar2 != (code *)0x0)) {
        (*pcVar2)(param_1[6],lVar8,auStackX_8[0],0,param_1[5]);
      }
      if ((auStackX_8[0] == 0) || (uVar6 < auStackX_8[0])) goto LAB_180769671;
      *(int *)((int64_t)param_1 + 0x174) = *(int *)((int64_t)param_1 + 0x174) + auStackX_8[0];
      lVar8 = lVar8 + (uint64_t)auStackX_8[0];
      uVar6 = uVar6 - auStackX_8[0];
      iVar9 = iVar9 + auStackX_8[0];
      iVar5 = (int)((((float)*(uint *)((int64_t)param_1 + 0x174) -
                     (float)*(uint *)((int64_t)param_1 + 0x16c)) /
                    (float)*(uint *)((int64_t)param_1 + 0x15c)) * 100.0);
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      *(int *)((int64_t)param_1 + 0x17c) = iVar5;
    } while (*(char *)((int64_t)param_1 + 0x3c) == '\0');
    *(int8_t *)((int64_t)param_1 + 0x3c) = 0;
LAB_180769671:
    if ((int)param_1[0x2d] == 0) {
      uVar6 = *(uint *)((int64_t)param_1 + 0x194) | 0x40;
    }
    else {
      uVar6 = *(uint *)((int64_t)param_1 + 0x194) | 0x80;
    }
    *(uint *)((int64_t)param_1 + 0x194) = uVar6;
    *(int *)(param_1 + 0x2d) = (int)param_1[0x2d] + *(int *)((int64_t)param_1 + 0x164);
    uVar6 = *(uint *)(param_1 + 0x2d);
    if (*(uint *)((int64_t)param_1 + 0x15c) <= *(uint *)(param_1 + 0x2d)) {
      uVar6 = uVar7;
    }
    *(int32_t *)(param_1 + 0x2c) = 0;
    *(uint *)(param_1 + 0x2d) = uVar6;
    *(int32_t *)(param_1 + 0x3b) = 0;
    *(uint *)(param_1 + 0x30) = uVar3;
    *(uint *)((int64_t)param_1 + 0x194) = *(uint *)((int64_t)param_1 + 0x194) & 0xfffffed7;
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
  
  SystemDataAnalyzer(param_1,auStackX_10,1,1,auStackX_18);
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
  
  SystemDataAnalyzer(param_1,abStackX_10,1,1,auStackX_18);
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
  
  SystemDataAnalyzer(param_1,acStackX_10,1,1,auStackX_18);
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
  
  SystemDataAnalyzer(param_1,abStackX_10,1,1,auStackX_18);
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
  
  SystemDataAnalyzer(param_1,auStackX_10,4,1,auStackX_18);
  if (param_2 != (int32_t *)0x0) {
    *param_2 = auStackX_10[0];
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180769860(int64_t param_1)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int iVar4;
  int64_t *plVar5;
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
    for (plVar5 = *(int64_t **)(SYSTEM_MAIN_CONTROL_BLOCK + 0x28);
        plVar5 != (int64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x28); plVar5 = (int64_t *)*plVar5) {
      if ((int)plVar5[0x34] == 4) goto LAB_180769a38;
    }
  }
  plVar5 = (int64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x1a8,&ui_system_data_1664_ptr,0x110,0,0,1);
  if (plVar5 == (int64_t *)0x0) {
    return 0x26;
  }
  plVar5[1] = (int64_t)plVar5;
  *plVar5 = (int64_t)plVar5;
  plVar5[2] = 0;
  func_0x000180767970(plVar5 + 3);
  plVar1 = plVar5 + 0x2e;
  plVar5[0x2f] = (int64_t)plVar1;
  *plVar1 = (int64_t)plVar1;
  plVar5[0x30] = 0;
  plVar5[0x33] = 0;
  plVar5[0x31] = 0;
  plVar5[0x32] = 0;
  *(int32_t *)(plVar5 + 0x34) = 0;
  *(int8_t *)((int64_t)plVar5 + 0x1a4) = 0;
  *(int8_t *)(plVar5 + 0x2d) = 0;
  uVar2 = *(uint64_t *)(param_1 + 0x198);
  *(int32_t *)(plVar5 + 0x34) = uVar6;
  *(char *)((int64_t)plVar5 + 0x1a4) = cVar8;
  iVar4 = FUN_1807682e0(plVar5 + 0x33,0);
  if (iVar4 == 0) {
    uVar7 = 0;
    if (cVar8 != '\0') {
      uVar7 = uVar2;
    }
    iVar4 = FUN_180767c00(plVar5 + 3,&ui_system_data_1632_ptr,&rendering_buffer_2016_ptr,plVar5,3,0,10,uVar7,1);
    if (iVar4 == 0) {
      if (*(char *)((int64_t)plVar5 + 0x1a4) == '\0') {
        *(int64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x40) = plVar5[0x25];
      }
      *(int8_t *)(plVar5 + 0x2d) = 1;
      lVar3 = *(int64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x28);
      plVar5[1] = SYSTEM_MAIN_CONTROL_BLOCK + 0x28;
      *plVar5 = lVar3;
      *(int64_t **)(lVar3 + 8) = plVar5;
      *(int64_t **)plVar5[1] = plVar5;
      goto LAB_180769a38;
    }
  }
  if (iVar4 != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar5,&ui_system_data_1664_ptr,0x119,1);
  }
LAB_180769a38:
  *(int64_t **)(param_1 + 0x188) = plVar5;
  return 0;
}





// 函数: void FUN_180769ac0(uint64_t param_1,int16_t *param_2)
void FUN_180769ac0(uint64_t param_1,int16_t *param_2)

{
  int16_t auStackX_10 [4];
  int8_t auStackX_18 [16];
  
  SystemDataAnalyzer(param_1,auStackX_10,2,1,auStackX_18);
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
  
  SystemDataAnalyzer(param_1,asStackX_10,2,1,auStackX_18);
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
  
  SystemDataAnalyzer(param_1,auStackX_10,2,1,auStackX_18);
  if (param_2 != (uint *)0x0) {
    *param_2 = (uint)auStackX_10[0];
  }
  return;
}





