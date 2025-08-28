#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 01_initialization_part058.c - 4 个函数

// 函数: void FUN_18007c490(longlong *param_1,byte param_2,longlong *param_3,longlong *param_4,char param_5)
void FUN_18007c490(longlong *param_1,byte param_2,longlong *param_3,longlong *param_4,char param_5)

{
  char *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  void *puVar7;
  int32_t uStack_100;
  int32_t uStack_fc;
  int32_t uStack_f8;
  int32_t uStack_f4;
  code *pcStack_f0;
  void *puStack_e8;
  uint64_t uStack_e0;
  int32_t uStack_d8;
  int32_t uStack_d4;
  longlong *plStack_d0;
  byte bStack_c8;
  longlong *plStack_c0;
  longlong *plStack_b8;
  longlong *plStack_b0;
  byte bStack_a8;
  longlong *plStack_a0;
  longlong *plStack_98;
  uint64_t uStack_90;
  longlong **pplStack_88;
  int8_t auStack_80 [16];
  code *pcStack_70;
  int8_t auStack_60 [16];
  code *pcStack_50;
  
  uStack_90 = 0xfffffffffffffffe;
  plVar2 = (longlong *)*param_4;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = (longlong *)*param_3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  uStack_d8 = CONCAT31(uStack_d8._1_3_,param_2);
  uStack_e0 = param_1;
  if ((void *)*param_1 == &unknown_var_7328_ptr) {
    LOCK();
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    UNLOCK();
  }
  else {
    (**(code **)((void *)*param_1 + 0x28))(param_1);
  }
  if (param_5 == '\0') {
    plVar4 = *(longlong **)(param_1[0x15] + 0x88);
    pcVar5 = *(code **)(*plVar4 + 0x70);
    pcStack_f0 = (code *)&unknown_var_7904_ptr;
    puStack_e8 = &unknown_var_7888_ptr;
    uStack_100 = (int32_t)uStack_e0;
    uStack_fc = uStack_e0._4_4_;
    uStack_f8 = uStack_d8;
    uStack_f4 = uStack_d4;
    plStack_b0 = param_1;
    bStack_a8 = param_2;
    plStack_a0 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    plStack_98 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    FUN_180081120(auStack_60,&plStack_b0);
    (*pcVar5)(plVar4,&system_data_c768,param_1 + 0x17,0,auStack_60,&uStack_100);
    if (pcStack_50 != (code *)0x0) {
      (*pcStack_50)(auStack_60,0,0);
    }
    if (pcStack_f0 != (code *)0x0) {
      (*pcStack_f0)(&uStack_100,0,0);
    }
  }
  else {
    plVar4 = *(longlong **)(param_1[0x15] + 0x88);
    pcVar5 = *(code **)(*plVar4 + 0x60);
    pplStack_88 = &plStack_d0;
    plStack_d0 = param_1;
    bStack_c8 = param_2;
    plStack_c0 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    plStack_b8 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    FUN_180081120(auStack_80,&plStack_d0);
    cVar6 = (*pcVar5)(plVar4,&system_data_c768,param_1 + 0x17,0,auStack_80);
    if (pcStack_70 != (code *)0x0) {
      (*pcStack_70)(auStack_80,0,0);
    }
    if (cVar6 == '\0') {
      puVar7 = &system_buffer_ptr;
      if ((void *)param_1[3] != (void *)0x0) {
        puVar7 = (void *)param_1[3];
      }
      FUN_180626f80(&unknown_var_5600_ptr,puVar7);
      pcVar1 = (char *)(param_1[0x3c] + 0x15 + (ulonglong)param_2 * 0x18);
      LOCK();
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\x04';
      }
      UNLOCK();
      (**(code **)(*param_1 + 0x38))(param_1);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x38))();
  }
  if ((longlong *)*param_4 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_4 + 0x38))();
  }
  return;
}





// 函数: void FUN_18007c790(longlong *param_1)
void FUN_18007c790(longlong *param_1)

{
  char *pcVar1;
  void *puVar2;
  
  puVar2 = &system_buffer_ptr;
  if (*(void **)(*param_1 + 0x18) != (void *)0x0) {
    puVar2 = *(void **)(*param_1 + 0x18);
  }
  FUN_180626f80(&unknown_var_5600_ptr,puVar2);
  pcVar1 = (char *)(*(longlong *)(*param_1 + 0x1e0) + 0x15 +
                   (ulonglong)*(byte *)(param_1 + 1) * 0x18);
  LOCK();
  if (*pcVar1 == '\x01') {
    *pcVar1 = '\x04';
  }
  UNLOCK();
                    // WARNING: Could not recover jumptable at 0x00018007c7e6. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(longlong *)*param_1 + 0x38))();
  return;
}



uint64_t * FUN_18007c7f0(uint64_t *param_1,uint64_t *param_2)

{
  longlong *plVar1;
  
  *param_1 = *param_2;
  *(int8_t *)(param_1 + 1) = *(int8_t *)(param_2 + 1);
  plVar1 = (longlong *)param_2[2];
  param_1[2] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (longlong *)param_2[3];
  param_1[3] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  return param_1;
}





// 函数: void FUN_18007c860(longlong param_1,int8_t param_2)
void FUN_18007c860(longlong param_1,int8_t param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = param_1;
  if ((*(byte *)(param_1 + 0xfd) & 0x20) == 0) {
    lVar2 = func_0x000180085de0(*(uint64_t *)(param_1 + 0x1b0));
  }
  if (0 < *(int *)(lVar2 + 0x200)) {
    lVar2 = *(longlong *)(param_1 + 0x1b8);
    cVar1 = *(char *)(lVar2 + 0x38c);
    if (cVar1 == '\t') {
      cVar1 = func_0x00018022d300();
      *(char *)(lVar2 + 0x38c) = cVar1;
    }
    cVar1 = FUN_18007b240(param_1,param_1 + 0x1e8,cVar1,param_2);
    if (cVar1 == '\0') {
      *(byte *)(param_1 + 0xfe) = *(byte *)(param_1 + 0xfe) & 0xfb;
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018007cad0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007c8e0(longlong param_1,byte param_2,longlong *param_3,longlong *param_4)
void FUN_18007c8e0(longlong param_1,byte param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  longlong *plVar6;
  longlong *plStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  longlong **pplStack_a0;
  longlong lStack_98;
  byte bStack_90;
  longlong *plStack_88;
  longlong *plStack_80;
  longlong lStack_78;
  byte bStack_70;
  longlong *plStack_68;
  longlong *plStack_60;
  longlong *aplStack_58 [2];
  code *pcStack_48;
  code *pcStack_40;
  uint64_t uStack_38;
  longlong *plStack_30;
  
  uStack_38 = 0xfffffffffffffffe;
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8) + 0x48);
  iVar4 = _Thrd_id();
  if (iVar4 == iVar3) {
    lVar1 = (ulonglong)param_2 * 0x18;
    uVar5 = *(uint64_t *)(*(longlong *)(param_1 + 0x1e0) + lVar1);
    pplStack_a0 = &plStack_a8;
    plStack_a8 = (longlong *)*param_3;
    if (plStack_a8 != (longlong *)0x0) {
      (**(code **)(*plStack_a8 + 0x28))();
    }
    FUN_180255880(uVar5,&plStack_a8);
    uVar5 = *(uint64_t *)(*(longlong *)(param_1 + 0x1e0) + 8 + lVar1);
    pplStack_a0 = &plStack_b8;
    plStack_b8 = (longlong *)*param_4;
    if (plStack_b8 != (longlong *)0x0) {
      (**(code **)(*plStack_b8 + 0x28))();
    }
    FUN_180255b70(uVar5,&plStack_b8);
    pcVar2 = (char *)(*(longlong *)(param_1 + 0x1e0) + 0x15 + lVar1);
    LOCK();
    if (*pcVar2 == '\x01') {
      *pcVar2 = '\x03';
    }
    UNLOCK();
  }
  else {
    uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x40,8,0x20);
    pplStack_a0 = aplStack_58;
    plStack_b0 = &lStack_98;
    plStack_88 = (longlong *)*param_3;
    lStack_98 = param_1;
    bStack_90 = param_2;
    if (plStack_88 != (longlong *)0x0) {
      (**(code **)(*plStack_88 + 0x28))();
    }
    plStack_80 = (longlong *)*param_4;
    if (plStack_80 != (longlong *)0x0) {
      (**(code **)(*plStack_80 + 0x28))();
    }
    plStack_b0 = &lStack_98;
    lStack_78 = lStack_98;
    bStack_70 = bStack_90;
    plStack_68 = plStack_88;
    plStack_88 = (longlong *)0x0;
    plStack_60 = plStack_80;
    plStack_80 = (longlong *)0x0;
    plStack_b8 = &lStack_78;
    pcStack_48 = FUN_180082e70;
    pcStack_40 = FUN_180082da0;
    plStack_a8 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,system_allocation_flags);
    *plStack_a8 = lStack_78;
    *(byte *)(plStack_a8 + 1) = bStack_70;
    plStack_a8[2] = (longlong)plStack_68;
    plStack_a8[3] = (longlong)plStack_60;
    plStack_60 = (longlong *)0x0;
    plStack_68 = (longlong *)0x0;
    aplStack_58[0] = plStack_a8;
    if (plStack_80 != (longlong *)0x0) {
      (**(code **)(*plStack_80 + 0x38))();
    }
    if (plStack_88 != (longlong *)0x0) {
      (**(code **)(*plStack_88 + 0x38))();
    }
    plVar6 = (longlong *)FUN_18005c2a0(uVar5,aplStack_58);
    plStack_30 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    pplStack_a0 = &plStack_b0;
    plStack_b0 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    FUN_18005e370(_DAT_180c82868,&plStack_b0);
    pcVar2 = (char *)(*(longlong *)(param_1 + 0x1e0) + 0x15 + (ulonglong)param_2 * 0x18);
    LOCK();
    if (*pcVar2 == '\x01') {
      *pcVar2 = '\x02';
    }
    UNLOCK();
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x38))(plVar6);
    }
  }
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x38))();
  }
  if ((longlong *)*param_4 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_4 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



