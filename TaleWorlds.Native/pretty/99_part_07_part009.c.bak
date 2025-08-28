#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part009.c - 6 个函数

// 函数: void FUN_1804a2f6b(void)
void FUN_1804a2f6b(void)

{
  longlong unaff_RBX;
  uint *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)*(int *)(unaff_RBX + 0x52ed94);
  if (0 < lVar2) {
    puVar1 = (uint *)(unaff_RBX + 0x360c);
    do {
      if ((puVar1[-1] == 1) && ((*puVar1 & 0x4000) != 0)) {
        FUN_180543e30(*(uint64_t *)(puVar1 + 0x5b));
      }
      puVar1 = puVar1 + 0x298;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}






// 函数: void FUN_1804a2faf(void)
void FUN_1804a2faf(void)

{
  return;
}






// 函数: void FUN_1804a2fb4(void)
void FUN_1804a2fb4(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a2fc0(void)
void FUN_1804a2fc0(void)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  int32_t uVar7;
  longlong lVar8;
  uint64_t uVar9;
  char acStackX_10 [8];
  
  lVar6 = system_system_data_ui + 0x150;
  lVar3 = FUN_18062b420(system_memory_pool_ptr,0x40,*(int8_t *)(system_system_data_ui + 0x178));
  FUN_180627910(lVar3 + 0x20,&system_data_92b8);
  lVar4 = FUN_1800590b0(lVar6,acStackX_10,lVar3 + 0x20);
  uVar7 = 1;
  if (acStackX_10[0] == '\0') {
    FUN_18005d1f0();
    if (system_data_2847 == '\0') {
      return;
    }
    lVar6 = system_system_data_ui + 0x150;
    lVar3 = FUN_18062b420(system_memory_pool_ptr,0x40,*(int8_t *)(system_system_data_ui + 0x178));
    FUN_180627910(lVar3 + 0x20,&system_data_90b0);
    lVar4 = FUN_1800590b0(lVar6,acStackX_10,lVar3 + 0x20);
    if (acStackX_10[0] == '\0') {
      FUN_18005d1f0();
      return;
    }
    if (lVar4 != lVar6) {
      if (*(int *)(lVar4 + 0x30) == 0) goto LAB_1804a3129;
      if (*(int *)(lVar3 + 0x30) != 0) {
        pbVar5 = *(byte **)(lVar4 + 0x28);
        lVar8 = *(longlong *)(lVar3 + 0x28) - (longlong)pbVar5;
        do {
          bVar1 = *pbVar5;
          uVar2 = (uint)pbVar5[lVar8];
          if (bVar1 != uVar2) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar2 != 0);
        if ((int)(bVar1 - uVar2) < 1) goto LAB_1804a3129;
      }
    }
    uVar7 = 0;
LAB_1804a3129:
                    // WARNING: Subroutine does not return
    FUN_18066bdc0(lVar3,lVar4,lVar6,uVar7);
  }
  if (lVar4 != lVar6) {
    if (*(int *)(lVar4 + 0x30) == 0) {
LAB_1804a3067:
      uVar9 = 1;
      goto LAB_1804a306f;
    }
    if (*(int *)(lVar3 + 0x30) != 0) {
      pbVar5 = *(byte **)(lVar4 + 0x28);
      lVar8 = *(longlong *)(lVar3 + 0x28) - (longlong)pbVar5;
      do {
        bVar1 = *pbVar5;
        uVar2 = (uint)pbVar5[lVar8];
        if (bVar1 != uVar2) break;
        pbVar5 = pbVar5 + 1;
      } while (uVar2 != 0);
      if ((int)(bVar1 - uVar2) < 1) goto LAB_1804a3067;
    }
  }
  uVar9 = 0;
LAB_1804a306f:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar3,lVar4,lVar6,uVar9);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1804a3160(void)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong in_RAX;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  
  lVar2 = system_system_ui;
  if (system_system_ui != 0) {
    in_RAX = (ulonglong)*(uint *)(SYSTEM_STATE_MANAGER + 0xc40);
    if (*(uint *)(SYSTEM_STATE_MANAGER + 0xc44) != *(uint *)(SYSTEM_STATE_MANAGER + 0xc40)) {
      in_RAX = 0;
      uVar1 = *(uint *)(system_system_ui + 0x52ed94);
      if (0 < (int)uVar1) {
        lVar7 = 0;
        piVar6 = (int *)(system_system_ui + 0x30b0);
        do {
          if (-1 < *piVar6) goto LAB_1804a31c9;
          in_RAX = (ulonglong)((int)in_RAX + 1);
          lVar7 = lVar7 + 1;
          piVar6 = piVar6 + 0x298;
        } while (lVar7 < (int)uVar1);
      }
      in_RAX = (ulonglong)uVar1;
LAB_1804a31c9:
      uVar3 = (uint)in_RAX;
      while ((int)uVar3 < (int)uVar1) {
        lVar5 = (longlong)(int)in_RAX * 0xa60;
        lVar7 = *(longlong *)(lVar5 + 0x3778 + lVar2);
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0x8be) != '\0')) {
          FUN_1805401f0(lVar7,*(int *)(lVar5 + 0x3604 + lVar2) != -1,
                        *(byte *)(lVar5 + 0x360c + lVar2) & 1);
        }
        uVar3 = (uint)*(short *)(lVar2 + 0x52dda0 + (longlong)(int)in_RAX * 2);
        in_RAX = (ulonglong)uVar3;
      }
    }
    if ((system_status_flag == 1) && (system_system_ui != 0)) {
      in_RAX = (**(code **)(system_system_data_ui + 0x150))();
    }
  }
  lVar2 = system_system_ui;
  if (system_system_ui != 0) {
    iVar4 = *(int *)(SYSTEM_STATE_MANAGER + 0x12d0);
    if (iVar4 == 0) {
      iVar4 = 0x40;
    }
    else if (iVar4 == 1) {
      iVar4 = 0x80;
    }
    else if ((iVar4 == 2) || (iVar4 != 3)) {
      iVar4 = 0x100;
    }
    else {
      iVar4 = 0x200;
    }
    *(int *)(system_system_ui + 0x40) = iVar4;
    *(uint64_t *)(lVar2 + 0x10) = 0;
    *(uint64_t *)(lVar2 + 0x18) = 0;
    *(uint64_t *)(lVar2 + 0x20) = 0;
    *(uint64_t *)(lVar2 + 0x28) = 0;
    *(uint64_t *)(lVar2 + 0x30) = 0;
    *(double *)(lVar2 + 0x48) = 1.0 / (double)iVar4;
    LOCK();
    uVar1 = *(uint *)(lVar2 + 8);
    *(uint *)(lVar2 + 8) = 0;
    UNLOCK();
    *(uint64_t *)(lVar2 + 0x38) = 0;
    return (ulonglong)uVar1;
  }
  return in_RAX;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1804a3164(void)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong in_RAX;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  
  lVar2 = system_system_ui;
  if (system_system_ui != 0) {
    in_RAX = (ulonglong)*(uint *)(SYSTEM_STATE_MANAGER + 0xc40);
    if (*(uint *)(SYSTEM_STATE_MANAGER + 0xc44) != *(uint *)(SYSTEM_STATE_MANAGER + 0xc40)) {
      in_RAX = 0;
      uVar1 = *(uint *)(system_system_ui + 0x52ed94);
      if (0 < (int)uVar1) {
        lVar7 = 0;
        piVar6 = (int *)(system_system_ui + 0x30b0);
        do {
          if (-1 < *piVar6) goto LAB_1804a31c9;
          in_RAX = (ulonglong)((int)in_RAX + 1);
          lVar7 = lVar7 + 1;
          piVar6 = piVar6 + 0x298;
        } while (lVar7 < (int)uVar1);
      }
      in_RAX = (ulonglong)uVar1;
LAB_1804a31c9:
      uVar3 = (uint)in_RAX;
      while ((int)uVar3 < (int)uVar1) {
        lVar5 = (longlong)(int)in_RAX * 0xa60;
        lVar7 = *(longlong *)(lVar5 + 0x3778 + lVar2);
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0x8be) != '\0')) {
          FUN_1805401f0(lVar7,*(int *)(lVar5 + 0x3604 + lVar2) != -1,
                        *(byte *)(lVar5 + 0x360c + lVar2) & 1);
        }
        uVar3 = (uint)*(short *)(lVar2 + 0x52dda0 + (longlong)(int)in_RAX * 2);
        in_RAX = (ulonglong)uVar3;
      }
    }
    if ((system_status_flag == 1) && (system_system_ui != 0)) {
      in_RAX = (**(code **)(system_system_data_ui + 0x150))();
    }
  }
  lVar2 = system_system_ui;
  if (system_system_ui != 0) {
    iVar4 = *(int *)(SYSTEM_STATE_MANAGER + 0x12d0);
    if (iVar4 == 0) {
      iVar4 = 0x40;
    }
    else if (iVar4 == 1) {
      iVar4 = 0x80;
    }
    else if ((iVar4 == 2) || (iVar4 != 3)) {
      iVar4 = 0x100;
    }
    else {
      iVar4 = 0x200;
    }
    *(int *)(system_system_ui + 0x40) = iVar4;
    *(uint64_t *)(lVar2 + 0x10) = 0;
    *(uint64_t *)(lVar2 + 0x18) = 0;
    *(uint64_t *)(lVar2 + 0x20) = 0;
    *(uint64_t *)(lVar2 + 0x28) = 0;
    *(uint64_t *)(lVar2 + 0x30) = 0;
    *(double *)(lVar2 + 0x48) = 1.0 / (double)iVar4;
    LOCK();
    uVar1 = *(uint *)(lVar2 + 8);
    *(uint *)(lVar2 + 8) = 0;
    UNLOCK();
    *(uint64_t *)(lVar2 + 0x38) = 0;
    return (ulonglong)uVar1;
  }
  return in_RAX;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1804a3192(void)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int *piVar7;
  ulonglong uVar8;
  longlong unaff_RBX;
  
  uVar6 = 0;
  uVar1 = *(uint *)(unaff_RBX + 0x52ed94);
  if (0 < (int)uVar1) {
    piVar7 = (int *)(unaff_RBX + 0x30b0);
    uVar8 = uVar6;
    do {
      if (-1 < *piVar7) goto LAB_1804a31c9;
      uVar6 = (ulonglong)((int)uVar6 + 1);
      uVar8 = uVar8 + 1;
      piVar7 = piVar7 + 0x298;
    } while ((longlong)uVar8 < (longlong)(int)uVar1);
  }
  uVar6 = (ulonglong)uVar1;
LAB_1804a31c9:
  uVar3 = (uint)uVar6;
  while ((int)uVar3 < (int)uVar1) {
    lVar5 = (longlong)(int)uVar6 * 0xa60;
    lVar2 = *(longlong *)(lVar5 + 0x3778 + unaff_RBX);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x8be) != '\0')) {
      FUN_1805401f0(lVar2,*(int *)(lVar5 + 0x3604 + unaff_RBX) != -1,
                    *(byte *)(lVar5 + 0x360c + unaff_RBX) & 1);
    }
    uVar3 = (uint)*(short *)(unaff_RBX + 0x52dda0 + (longlong)(int)uVar6 * 2);
    uVar6 = (ulonglong)uVar3;
  }
  if ((system_status_flag == 1) && (system_system_ui != 0)) {
    uVar6 = (**(code **)(system_system_data_ui + 0x150))();
  }
  lVar2 = system_system_ui;
  if (system_system_ui != 0) {
    iVar4 = *(int *)(SYSTEM_STATE_MANAGER + 0x12d0);
    if (iVar4 == 0) {
      iVar4 = 0x40;
    }
    else if (iVar4 == 1) {
      iVar4 = 0x80;
    }
    else if ((iVar4 == 2) || (iVar4 != 3)) {
      iVar4 = 0x100;
    }
    else {
      iVar4 = 0x200;
    }
    *(int *)(system_system_ui + 0x40) = iVar4;
    *(uint64_t *)(lVar2 + 0x10) = 0;
    *(uint64_t *)(lVar2 + 0x18) = 0;
    *(uint64_t *)(lVar2 + 0x20) = 0;
    *(uint64_t *)(lVar2 + 0x28) = 0;
    *(uint64_t *)(lVar2 + 0x30) = 0;
    *(double *)(lVar2 + 0x48) = 1.0 / (double)iVar4;
    LOCK();
    uVar1 = *(uint *)(lVar2 + 8);
    *(uint *)(lVar2 + 8) = 0;
    UNLOCK();
    *(uint64_t *)(lVar2 + 0x38) = 0;
    return (ulonglong)uVar1;
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1804a31cd(void)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong in_RAX;
  longlong lVar4;
  longlong unaff_RBX;
  int unaff_ESI;
  
  do {
    lVar4 = (longlong)(int)in_RAX * 0xa60;
    lVar1 = *(longlong *)(lVar4 + 0x3778 + unaff_RBX);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x8be) != '\0')) {
      FUN_1805401f0(lVar1,*(int *)(lVar4 + 0x3604 + unaff_RBX) != -1,
                    *(byte *)(lVar4 + 0x360c + unaff_RBX) & 1);
    }
    uVar2 = (uint)*(short *)(unaff_RBX + 0x52dda0 + (longlong)(int)in_RAX * 2);
    in_RAX = (ulonglong)uVar2;
  } while ((int)uVar2 < unaff_ESI);
  if ((system_status_flag == 1) && (system_system_ui != 0)) {
    in_RAX = (**(code **)(system_system_data_ui + 0x150))();
  }
  lVar1 = system_system_ui;
  if (system_system_ui != 0) {
    iVar3 = *(int *)(SYSTEM_STATE_MANAGER + 0x12d0);
    if (iVar3 == 0) {
      iVar3 = 0x40;
    }
    else if (iVar3 == 1) {
      iVar3 = 0x80;
    }
    else if ((iVar3 == 2) || (iVar3 != 3)) {
      iVar3 = 0x100;
    }
    else {
      iVar3 = 0x200;
    }
    *(int *)(system_system_ui + 0x40) = iVar3;
    *(uint64_t *)(lVar1 + 0x10) = 0;
    *(uint64_t *)(lVar1 + 0x18) = 0;
    *(uint64_t *)(lVar1 + 0x20) = 0;
    *(uint64_t *)(lVar1 + 0x28) = 0;
    *(uint64_t *)(lVar1 + 0x30) = 0;
    *(double *)(lVar1 + 0x48) = 1.0 / (double)iVar3;
    LOCK();
    uVar2 = *(uint *)(lVar1 + 8);
    *(uint *)(lVar1 + 8) = 0;
    UNLOCK();
    *(uint64_t *)(lVar1 + 0x38) = 0;
    return (ulonglong)uVar2;
  }
  return in_RAX;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1804a3220(void)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong in_RAX;
  
  if ((system_status_flag == 1) && (system_system_ui != 0)) {
    in_RAX = (**(code **)(system_system_data_ui + 0x150))();
  }
  lVar2 = system_system_ui;
  if (system_system_ui != 0) {
    iVar3 = *(int *)(SYSTEM_STATE_MANAGER + 0x12d0);
    if (iVar3 == 0) {
      iVar3 = 0x40;
    }
    else if (iVar3 == 1) {
      iVar3 = 0x80;
    }
    else if ((iVar3 == 2) || (iVar3 != 3)) {
      iVar3 = 0x100;
    }
    else {
      iVar3 = 0x200;
    }
    *(int *)(system_system_ui + 0x40) = iVar3;
    *(uint64_t *)(lVar2 + 0x10) = 0;
    *(uint64_t *)(lVar2 + 0x18) = 0;
    *(uint64_t *)(lVar2 + 0x20) = 0;
    *(uint64_t *)(lVar2 + 0x28) = 0;
    *(uint64_t *)(lVar2 + 0x30) = 0;
    *(double *)(lVar2 + 0x48) = 1.0 / (double)iVar3;
    LOCK();
    uVar1 = *(uint *)(lVar2 + 8);
    *(uint *)(lVar2 + 8) = 0;
    UNLOCK();
    *(uint64_t *)(lVar2 + 0x38) = 0;
    return (ulonglong)uVar1;
  }
  return in_RAX;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1804a3225(void)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong in_RAX;
  
  if ((system_status_flag == 1) && (system_system_ui != 0)) {
    in_RAX = (**(code **)(system_system_data_ui + 0x150))();
  }
  lVar2 = system_system_ui;
  if (system_system_ui != 0) {
    iVar3 = *(int *)(SYSTEM_STATE_MANAGER + 0x12d0);
    if (iVar3 == 0) {
      iVar3 = 0x40;
    }
    else if (iVar3 == 1) {
      iVar3 = 0x80;
    }
    else if ((iVar3 == 2) || (iVar3 != 3)) {
      iVar3 = 0x100;
    }
    else {
      iVar3 = 0x200;
    }
    *(int *)(system_system_ui + 0x40) = iVar3;
    *(uint64_t *)(lVar2 + 0x10) = 0;
    *(uint64_t *)(lVar2 + 0x18) = 0;
    *(uint64_t *)(lVar2 + 0x20) = 0;
    *(uint64_t *)(lVar2 + 0x28) = 0;
    *(uint64_t *)(lVar2 + 0x30) = 0;
    *(double *)(lVar2 + 0x48) = 1.0 / (double)iVar3;
    LOCK();
    uVar1 = *(uint *)(lVar2 + 8);
    *(uint *)(lVar2 + 8) = 0;
    UNLOCK();
    *(uint64_t *)(lVar2 + 0x38) = 0;
    return (ulonglong)uVar1;
  }
  return in_RAX;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1804a3256(longlong param_1)

{
  int32_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(SYSTEM_STATE_MANAGER + 0x12d0);
  if (iVar2 == 0) {
    iVar2 = 0x40;
  }
  else if (iVar2 == 1) {
    iVar2 = 0x80;
  }
  else if ((iVar2 == 2) || (iVar2 != 3)) {
    iVar2 = 0x100;
  }
  else {
    iVar2 = 0x200;
  }
  *(int *)(param_1 + 0x40) = iVar2;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(double *)(param_1 + 0x48) = 1.0 / (double)iVar2;
  LOCK();
  uVar1 = *(int32_t *)(param_1 + 8);
  *(int32_t *)(param_1 + 8) = 0;
  UNLOCK();
  *(uint64_t *)(param_1 + 0x38) = 0;
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a3270(void)
void FUN_1804a3270(void)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  char cVar3;
  int iVar4;
  uint64_t in_R9;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)*system_system_data_ui;
  iVar4 = _Mtx_lock(0x180c91970);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  uVar2 = SYSTEM_DATA_MANAGER_A;
  SYSTEM_DATA_MANAGER_A = *puVar1;
  cVar3 = FUN_1801299b0(&unknown_var_1664_ptr,0,0,in_R9,uVar5);
  if (cVar3 != '\0') {
    FUN_180111070(&unknown_var_1688_ptr,&system_data_8f1a);
    FUN_180111070(&unknown_var_1840_ptr,0x180d48f19);
    FUN_180111070(&unknown_var_1864_ptr,0x180d48f18);
    FUN_18012cfe0();
  }
  if (system_data_8f1a != '\0') {
    (**(code **)(system_system_data_ui + 0x318))(*(int32_t *)(system_system_data_ui + 0x10));
  }
  SYSTEM_DATA_MANAGER_A = uVar2;
  iVar4 = _Mtx_unlock(0x180c91970);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_1804a3360(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  void *puVar2;
  int32_t uVar3;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  lVar1 = (**(code **)(system_system_data_ui + 0x2b8))();
  puVar2 = &system_buffer_ptr;
  if (*(void **)(lVar1 + 8) != (void *)0x0) {
    puVar2 = *(void **)(lVar1 + 8);
  }
  FUN_180627910(param_2,puVar2,param_3,param_4,uVar3,uVar4);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a33c0(void)
void FUN_1804a33c0(void)

{
  if (system_system_ui != (code *)0x0) {
    (*system_system_ui)(&system_data_17c0,0,0);
  }
  system_system_ui = (code *)&unknown_var_4976_ptr;
  system_system_ui = FUN_1804a5e90;
  system_system_ui = FUN_180546d20;
  if (system_system_ui != (code *)0x0) {
    (*system_system_ui)(&system_data_18c0,0,0);
  }
  system_system_ui = (code *)&unknown_var_4752_ptr;
  system_system_ui = &unknown_var_6016_ptr;
  system_system_ui = FUN_180546f70;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




