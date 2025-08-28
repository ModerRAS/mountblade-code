#include "TaleWorlds.Native.Split.h"

// 99_part_06_part011.c - 1 个函数

// 函数: void FUN_1803af3d0(uint64_t *param_1)
void FUN_1803af3d0(uint64_t *param_1)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  int8_t uVar4;
  int iVar5;
  char *pcVar6;
  void *puVar7;
  longlong lVar8;
  bool bVar9;
  void *puStack_48;
  int8_t *puStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  *param_1 = &UNK_180a23378;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 0xb) = 0x3f800000;
  *(uint64_t *)((longlong)param_1 + 0x5c) = 0x40000000;
  *(int32_t *)((longlong)param_1 + 100) = 3;
  param_1[9] = 1;
  param_1[8] = &system_data_0000;
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(int32_t *)(param_1 + 0x23) = 3;
  FUN_1808fc838(param_1 + 0x24,8,3,&SUB_18005d5f0,FUN_180045af0);
  FUN_1808fc838(param_1 + 0x27,8,3,&SUB_18005d5f0,FUN_180045af0);
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(int32_t *)(param_1 + 0x30) = 0;
  param_1[0x2f] = _DAT_180c8ed30;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x36] = 0;
  *(int32_t *)(param_1 + 0x37) = 0x461c4000;
  *(int32_t *)((longlong)param_1 + 0x1bc) = 0x3f800000;
  *(int32_t *)(param_1 + 0x38) = 0x41a00000;
  param_1[0x33] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[900] = 0;
  param_1[0x385] = 0;
  param_1[0x386] = 0;
  *(int16_t *)(param_1 + 0x387) = 0;
  *(int8_t *)((longlong)param_1 + 0x1c3a) = 3;
  param_1[0x389] = 0;
  param_1[0x38a] = 0;
  FUN_1803aeff0(param_1 + 0x38c);
  param_1[0x3cb] = 0;
  param_1[0x3cc] = 0;
  param_1[0x3cd] = 0;
  *(int32_t *)(param_1 + 0x3ce) = 3;
  iVar5 = *(int *)(_DAT_180c86920 + 0xe70);
  *(bool *)(param_1 + 0x3ca) = iVar5 == 0;
  if (iVar5 == 0) {
    iVar5 = *(int *)(*(longlong *)(_DAT_180c868a8 + 8) + 0x30);
    if (iVar5 == _DAT_180bf6540) {
      if (iVar5 == 0) {
LAB_1803af5e2:
        if (_DAT_180bf6540 != 0) goto LAB_1803af5ea;
        bVar9 = true;
      }
      else {
        pcVar6 = *(char **)(*(longlong *)(_DAT_180c868a8 + 8) + 0x28);
        lVar8 = _DAT_180bf6538 - (longlong)pcVar6;
        do {
          cVar1 = *pcVar6;
          cVar2 = pcVar6[lVar8];
          if (cVar1 != cVar2) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        bVar9 = cVar1 == cVar2;
      }
    }
    else {
      if (iVar5 == 0) goto LAB_1803af5e2;
LAB_1803af5ea:
      bVar9 = false;
    }
    *(bool *)(param_1 + 0x3ca) = bVar9;
  }
  if (*(char *)(_DAT_180c8aa08 + 9) == '\0') goto LAB_1803af6d5;
  puStack_48 = &UNK_180a3c3e0;
  uStack_30 = 0;
  puStack_40 = (int8_t *)0x0;
  iStack_38 = 0;
  FUN_1806277c0(&puStack_48,_DAT_180bf5218);
  if (0 < _DAT_180bf5218) {
    puVar7 = &system_buffer_ptr;
    if (_DAT_180bf5210 != (void *)0x0) {
      puVar7 = _DAT_180bf5210;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_40,puVar7,(longlong)(_DAT_180bf5218 + 1));
  }
  if (_DAT_180bf5210 != (void *)0x0) {
    iStack_38 = 0;
    if (puStack_40 != (int8_t *)0x0) {
      *puStack_40 = 0;
    }
  }
  if (iStack_38 == 0xc) {
    iVar5 = strcmp(puStack_40,&UNK_180a01de0);
    if (iVar5 != 0) goto LAB_1803af6b0;
LAB_1803af880:
    uVar4 = 1;
  }
  else {
    if (iStack_38 == 9) {
      iVar5 = strcmp(puStack_40,&UNK_180a01e80);
      if (iVar5 == 0) goto LAB_1803af880;
    }
LAB_1803af6b0:
    uVar4 = 0;
  }
  *(int8_t *)(param_1 + 0x3ca) = uVar4;
  puStack_48 = &UNK_180a3c3e0;
  if (puStack_40 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_40 = (int8_t *)0x0;
  uStack_30 = uStack_30 & 0xffffffff00000000;
  puStack_48 = &UNK_18098bcb0;
LAB_1803af6d5:
  param_1[0xd] = 0;
  plVar3 = (longlong *)param_1[0x2c];
  param_1[0x2c] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar3 = (longlong *)param_1[0x2d];
  param_1[0x2d] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  *(int32_t *)(param_1 + 0xf) = 0;
  *(int16_t *)(param_1 + 6) = 0x101;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(uint64_t *)((longlong)param_1 + 0x14) = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 0x382) = 0x3dcccccd;
  *(int32_t *)((longlong)param_1 + 0x1c14) = 0x3f800000;
  *(int32_t *)(param_1 + 899) = 0;
  *(int32_t *)((longlong)param_1 + 0x1c1c) = 0x3f800000;
  *(int32_t *)((longlong)param_1 + 0x2c) = 0x40800000;
  func_0x0001803b0980(param_1,0x3f800000);
  *(int8_t *)(param_1 + 0x2e) = 0;
  LOCK();
  *(int32_t *)(param_1 + 2) = 0;
  UNLOCK();
  *(int8_t *)((longlong)param_1 + 0x1c42) = 0;
  LOCK();
  *(int8_t *)(param_1 + 0x388) = 0;
  UNLOCK();
  LOCK();
  *(int8_t *)((longlong)param_1 + 0x1c41) = 0;
  UNLOCK();
  *(int8_t *)((longlong)param_1 + 0x1c43) = 0;
  plVar3 = (longlong *)param_1[0x389];
  param_1[0x389] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar3 = (longlong *)param_1[0x38a];
  param_1[0x38a] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  param_1[0x38b] = 0;
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x3e,0,0x1a00);
}



uint64_t FUN_1803af890(uint64_t param_1,ulonglong param_2)

{
  FUN_1803af8d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x1e80);
  }
  return param_1;
}






