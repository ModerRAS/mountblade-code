#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part640.c - 34 个函数

// 函数: void FUN_1806277c0(longlong param_1,int param_2)
void FUN_1806277c0(longlong param_1,int param_2)

{
  int32_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  int8_t *puVar4;
  
  if (param_2 != 0) {
    uVar2 = param_2 + 1;
    if (*(longlong *)(param_1 + 8) == 0) {
      if ((int)uVar2 < 0x10) {
        uVar2 = 0x10;
      }
      puVar4 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar2,0x13);
      *(int8_t **)(param_1 + 8) = puVar4;
      *puVar4 = 0;
      uVar1 = FUN_18064e990(*(uint64_t *)(param_1 + 8));
      *(int32_t *)(param_1 + 0x18) = uVar1;
    }
    else if (*(uint *)(param_1 + 0x18) < uVar2) {
      uVar3 = FUN_18062b8b0(system_memory_pool_ptr,*(longlong *)(param_1 + 8),uVar2,0x10,0x13);
      *(uint64_t *)(param_1 + 8) = uVar3;
      uVar1 = FUN_18064e990(uVar3);
      *(int32_t *)(param_1 + 0x18) = uVar1;
      return;
    }
  }
  return;
}



uint64_t * FUN_180627850(uint64_t *param_1)

{
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  return param_1;
}



uint64_t *
FUN_1806278a0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t *
FUN_180627910(uint64_t *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  if (param_2 != 0) {
    uVar1 = 0xffffffffffffffff;
    do {
      uVar2 = uVar1;
      uVar1 = uVar2 + 1;
    } while (*(char *)(param_2 + uVar1) != '\0');
    FUN_1806277c0(param_1,uVar1 & 0xffffffff,param_3,param_4,0xfffffffffffffffe);
    if ((int)uVar1 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(param_1[1],param_2,(int)uVar2 + 2);
    }
    *(int32_t *)(param_1 + 2) = 0;
    if ((int8_t *)param_1[1] != (int8_t *)0x0) {
      *(int8_t *)param_1[1] = 0;
    }
  }
  return param_1;
}



uint64_t *
FUN_1806279c0(uint64_t *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  void *puVar1;
  
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,*(int32_t *)(param_2 + 0x10),param_3,param_4,0xfffffffffffffffe);
  if (0 < *(int *)(param_2 + 0x10)) {
    puVar1 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar1 = *(void **)(param_2 + 8);
    }
                    // WARNING: Subroutine does not return
    memcpy(param_1[1],puVar1,(longlong)(*(int *)(param_2 + 0x10) + 1));
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    *(int32_t *)(param_1 + 2) = 0;
    if ((int8_t *)param_1[1] != (int8_t *)0x0) {
      *(int8_t *)param_1[1] = 0;
    }
  }
  return param_1;
}



uint64_t * FUN_180627a70(uint64_t *param_1,longlong param_2)

{
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *(int32_t *)(param_1 + 2) = *(int32_t *)(param_2 + 0x10);
  param_1[1] = *(uint64_t *)(param_2 + 8);
  *(int32_t *)((longlong)param_1 + 0x1c) = *(int32_t *)(param_2 + 0x1c);
  *(int32_t *)(param_1 + 3) = *(int32_t *)(param_2 + 0x18);
  *(int32_t *)(param_2 + 0x10) = 0;
  *(uint64_t *)(param_2 + 8) = 0;
  *(uint64_t *)(param_2 + 0x18) = 0;
  return param_1;
}



uint64_t *
FUN_180627ae0(uint64_t *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,*(int32_t *)(param_2 + 0x10),param_3,param_4,0xfffffffffffffffe);
  if (*(int *)(param_2 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(param_1[1],*(uint64_t *)(param_2 + 8),*(int *)(param_2 + 0x10) + 1);
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    *(int32_t *)(param_1 + 2) = 0;
    if ((int8_t *)param_1[1] != (int8_t *)0x0) {
      *(int8_t *)param_1[1] = 0;
    }
    *(int32_t *)((longlong)param_1 + 0x1c) = 0;
  }
  return param_1;
}





// 函数: void FUN_180627b90(uint64_t *param_1)
void FUN_180627b90(uint64_t *param_1)

{
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}



longlong FUN_180627be0(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  uVar2 = (ulonglong)uVar1;
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1806277c0(param_1,uVar2);
  }
  if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(param_1 + 8),*(uint64_t *)(param_2 + 8),uVar2);
  }
  *(int32_t *)(param_1 + 0x10) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    *(int8_t *)(uVar2 + *(longlong *)(param_1 + 8)) = 0;
  }
  *(int32_t *)(param_1 + 0x1c) = *(int32_t *)(param_2 + 0x1c);
  return param_1;
}





// 函数: void FUN_180627c50(longlong param_1,longlong param_2)
void FUN_180627c50(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if (param_2 == 0) {
    *(int32_t *)(param_1 + 0x10) = 0;
    if (*(int8_t **)(param_1 + 8) != (int8_t *)0x0) {
      **(int8_t **)(param_1 + 8) = 0;
    }
    *(int32_t *)(param_1 + 0x1c) = 0;
    return;
  }
  uVar1 = 0xffffffffffffffff;
  do {
    uVar1 = uVar1 + 1;
  } while (*(char *)(param_2 + uVar1) != '\0');
  FUN_1806277c0(param_1,uVar1 & 0xffffffff);
  if ((int)uVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(param_1 + 8),param_2,uVar1 & 0xffffffff);
  }
  *(int32_t *)(param_1 + 0x10) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    *(int8_t *)((uVar1 & 0xffffffff) + *(longlong *)(param_1 + 8)) = 0;
  }
  *(int32_t *)(param_1 + 0x1c) = 0;
  return;
}



uint64_t *
FUN_180627ce0(uint64_t param_1,uint64_t *param_2,longlong param_3,uint64_t param_4)

{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  FUN_180627be0(param_2,param_1,param_3,param_4,1,0xfffffffffffffffe);
  if (0 < *(int *)(param_3 + 0x10)) {
    FUN_1806277c0(param_2,*(int *)(param_2 + 2) + *(int *)(param_3 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_2 + 2) + param_2[1],*(uint64_t *)(param_3 + 8),
           (longlong)(*(int *)(param_3 + 0x10) + 1));
  }
  return param_2;
}



uint64_t *
FUN_180627d90(uint64_t param_1,uint64_t *param_2,int32_t param_3,uint64_t param_4)

{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  FUN_180627be0(param_2,param_1,param_3,param_4,1,0xfffffffffffffffe);
  FUN_180628380(param_2,param_3);
  return param_2;
}



uint64_t *
FUN_180627e10(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  FUN_180627be0(param_2,param_1,param_3,param_4,1,0xfffffffffffffffe);
  FUN_1806281a0(param_2,param_3);
  return param_2;
}





// 函数: void FUN_180627e90(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180627e90(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  void *puStack_30;
  longlong lStack_28;
  
  uVar1 = FUN_180627ce0(param_1,&puStack_30,param_2,param_4,0xfffffffffffffffe);
  FUN_18005d190(param_1,uVar1);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_180627f00(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_180627f00(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  void *puStack_48;
  longlong lStack_40;
  uint uStack_38;
  uint64_t uStack_30;
  longlong lVar4;
  
  puStack_48 = &system_data_buffer_ptr;
  uStack_30 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = (ulonglong)uVar1;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1806277c0(&puStack_48,uVar2,param_3,param_4,1,0xfffffffffffffffe);
  }
  if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lStack_40,*(uint64_t *)(param_1 + 8),uVar2);
  }
  if (lStack_40 != 0) {
    *(int8_t *)(uVar2 + lStack_40) = 0;
  }
  uStack_30 = CONCAT44(*(int32_t *)(param_1 + 0x1c),(int32_t)uStack_30);
  uStack_38 = uVar1;
  if (param_2 != 0) {
    lVar3 = -1;
    do {
      lVar4 = lVar3;
      lVar3 = lVar4 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    if (0 < (int)lVar3) {
      FUN_1806277c0(&puStack_48,(int)lVar3);
                    // WARNING: Subroutine does not return
      memcpy((ulonglong)uStack_38 + lStack_40,param_2,(longlong)((int)lVar4 + 2));
    }
  }
  FUN_18005d190(param_1,&puStack_48);
  puStack_48 = &system_data_buffer_ptr;
  if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void System_DataHandler(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void System_DataHandler(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  int8_t auStack_478 [32];
  uint64_t uStack_458;
  uint64_t *puStack_450;
  char acStack_438 [1024];
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_478;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar2 = (ulonglong *)func_0x00018004b9a0();
  lVar3 = 0;
  uStack_458 = 0;
  puStack_450 = &uStackX_18;
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,0,0,param_2);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if (iVar1 < 0x400) {
    uStack_458 = 0;
    puStack_450 = &uStackX_18;
    __stdio_common_vsprintf(*puVar2 | 1,acStack_438,0x400,param_2);
    lVar3 = -1;
    do {
      lVar4 = lVar3;
      lVar3 = lVar4 + 1;
    } while (acStack_438[lVar4 + 1] != '\0');
    iVar1 = (int)(lVar4 + 1);
    if (0 < iVar1) {
      FUN_1806277c0(param_1,*(int *)(param_1 + 0x10) + iVar1);
                    // WARNING: Subroutine does not return
      memcpy((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8),acStack_438,
             (longlong)((int)lVar4 + 2));
    }
  }
  else {
    iVar1 = iVar1 + 1;
    if (iVar1 != 0) {
      lVar3 = FUN_18062b420(system_memory_pool_ptr,(longlong)iVar1,3);
    }
    FUN_18004b9b0(lVar3,(longlong)iVar1,param_2,&uStackX_18);
    FUN_1806281a0(param_1,lVar3);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_478);
}





// 函数: void FUN_1806281a0(longlong param_1,longlong param_2)
void FUN_1806281a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    if (0 < (int)lVar1) {
      FUN_1806277c0(param_1,*(int *)(param_1 + 0x10) + (int)lVar1);
                    // WARNING: Subroutine does not return
      memcpy((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8),param_2,
             (longlong)((int)lVar2 + 2));
    }
  }
  return;
}





// 函数: void FUN_1806281af(longlong param_1,longlong param_2)
void FUN_1806281af(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = -1;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if (0 < (int)lVar1) {
    FUN_1806277c0(param_1,*(int *)(param_1 + 0x10) + (int)lVar1);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8),param_2,
           (longlong)((int)lVar2 + 2));
  }
  return;
}





// 函数: void FUN_1806281ce(longlong param_1)
void FUN_1806281ce(longlong param_1)

{
  int unaff_EBX;
  longlong unaff_RBP;
  
  FUN_1806277c0(param_1,*(int *)(param_1 + 0x10) + unaff_EBX);
                    // WARNING: Subroutine does not return
  memcpy((ulonglong)*(uint *)(unaff_RBP + 0x10) + *(longlong *)(unaff_RBP + 8));
}





// 函数: void FUN_1806281fc(void)
void FUN_1806281fc(void)

{
  return;
}





// 函数: void FUN_18062820b(void)
void FUN_18062820b(void)

{
  return;
}





// 函数: void FUN_180628210(longlong param_1,longlong param_2,int param_3)
void FUN_180628210(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  void *puStack_30;
  longlong lStack_28;
  uint uStack_20;
  
  FUN_180627910(&puStack_30);
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  iVar3 = (uint)lVar1 - param_3;
  if (uStack_20 < (uint)lVar1) {
    iVar3 = uStack_20 - param_3;
  }
  uVar2 = iVar3 + param_3;
  if (uVar2 < uStack_20) {
    lVar1 = (longlong)(int)uVar2;
    do {
      *(int8_t *)((lVar1 - iVar3) + lStack_28) = *(int8_t *)(lVar1 + lStack_28);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 1;
    } while (uVar2 < uStack_20);
  }
  uStack_20 = uStack_20 - iVar3;
  *(int8_t *)((ulonglong)uStack_20 + lStack_28) = 0;
  if (0 < (int)uStack_20) {
    FUN_1806277c0(param_1,*(int *)(param_1 + 0x10) + uStack_20);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8),lStack_28,
           (longlong)(int)(uStack_20 + 1));
  }
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_180628320(longlong param_1,longlong param_2)
void FUN_180628320(longlong param_1,longlong param_2)

{
  if (0 < *(int *)(param_2 + 0x10)) {
    FUN_1806277c0(param_1,*(int *)(param_1 + 0x10) + *(int *)(param_2 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8),
           *(uint64_t *)(param_2 + 8),(longlong)(*(int *)(param_2 + 0x10) + 1));
  }
  return;
}





// 函数: void FUN_180628337(void)
void FUN_180628337(void)

{
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  FUN_1806277c0();
                    // WARNING: Subroutine does not return
  memcpy((ulonglong)*(uint *)(unaff_RSI + 0x10) + *(longlong *)(unaff_RSI + 8),
         *(uint64_t *)(unaff_RDI + 8),(longlong)(*(int *)(unaff_RDI + 0x10) + 1));
}





// 函数: void FUN_18062836b(void)
void FUN_18062836b(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180628380(longlong param_1,int32_t param_2)
void FUN_180628380(longlong param_1,int32_t param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int8_t auStack_48 [32];
  char acStack_28 [16];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_48;
  FUN_180060680(acStack_28,&unknown_var_4576_ptr,param_2);
  lVar1 = -1;
  do {
    lVar3 = lVar1;
    lVar1 = lVar3 + 1;
  } while (acStack_28[lVar3 + 1] != '\0');
  iVar2 = (int)(lVar3 + 1);
  if (0 < iVar2) {
    FUN_1806277c0(param_1,*(int *)(param_1 + 0x10) + iVar2);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8),acStack_28,
           (longlong)((int)lVar3 + 2));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_48);
}





// 函数: void FUN_1806283cd(void)
void FUN_1806283cd(void)

{
  int unaff_EBX;
  longlong unaff_RSI;
  int8_t auStackX_20 [8];
  
  FUN_1806277c0();
                    // WARNING: Subroutine does not return
  memcpy((ulonglong)*(uint *)(unaff_RSI + 0x10) + *(longlong *)(unaff_RSI + 8),auStackX_20,
         (longlong)(unaff_EBX + 1));
}





// 函数: void FUN_180628400(void)
void FUN_180628400(void)

{
  ulonglong in_stack_00000030;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000030 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180628420(longlong param_1,int32_t param_2)
void FUN_180628420(longlong param_1,int32_t param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int8_t auStack_58 [32];
  char acStack_38 [32];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_58;
  FUN_180626eb0(acStack_38,0x20,&unknown_var_3388_ptr,param_2);
  lVar1 = -1;
  do {
    lVar3 = lVar1;
    lVar1 = lVar3 + 1;
  } while (acStack_38[lVar3 + 1] != '\0');
  iVar2 = (int)(lVar3 + 1);
  if (0 < iVar2) {
    FUN_1806277c0(param_1,*(int *)(param_1 + 0x10) + iVar2);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8),acStack_38,
           (longlong)((int)lVar3 + 2));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_58);
}





// 函数: void FUN_18062846e(void)
void FUN_18062846e(void)

{
  int unaff_EBX;
  longlong unaff_RSI;
  int8_t auStackX_20 [8];
  
  FUN_1806277c0();
                    // WARNING: Subroutine does not return
  memcpy((ulonglong)*(uint *)(unaff_RSI + 0x10) + *(longlong *)(unaff_RSI + 8),auStackX_20,
         (longlong)(unaff_EBX + 1));
}





// 函数: void FUN_1806284a1(void)
void FUN_1806284a1(void)

{
  ulonglong in_stack_00000040;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000040 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806284c0(longlong param_1,float param_2)
void FUN_1806284c0(longlong param_1,float param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int8_t auStack_58 [32];
  char acStack_38 [32];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_58;
  FUN_180626eb0(acStack_38,0x20,&system_data_6430,(double)param_2);
  lVar1 = -1;
  do {
    lVar3 = lVar1;
    lVar1 = lVar3 + 1;
  } while (acStack_38[lVar3 + 1] != '\0');
  iVar2 = (int)(lVar3 + 1);
  if (0 < iVar2) {
    FUN_1806277c0(param_1,*(int *)(param_1 + 0x10) + iVar2);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8),acStack_38,
           (longlong)((int)lVar3 + 2));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_58);
}





// 函数: void FUN_18062851d(void)
void FUN_18062851d(void)

{
  longlong unaff_RSI;
  int unaff_EDI;
  int8_t auStackX_20 [8];
  
  FUN_1806277c0();
                    // WARNING: Subroutine does not return
  memcpy((ulonglong)*(uint *)(unaff_RSI + 0x10) + *(longlong *)(unaff_RSI + 8),auStackX_20,
         (longlong)(unaff_EDI + 1));
}





// 函数: void FUN_180628550(void)
void FUN_180628550(void)

{
  ulonglong in_stack_00000040;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000040 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180628570(longlong param_1,uint64_t param_2)
void FUN_180628570(longlong param_1,uint64_t param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int8_t auStack_58 [32];
  char acStack_38 [32];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_58;
  FUN_180626eb0(acStack_38,0x20,&unknown_var_7284_ptr,param_2);
  lVar1 = -1;
  do {
    lVar3 = lVar1;
    lVar1 = lVar3 + 1;
  } while (acStack_38[lVar3 + 1] != '\0');
  iVar2 = (int)(lVar3 + 1);
  if (0 < iVar2) {
    FUN_1806277c0(param_1,*(int *)(param_1 + 0x10) + iVar2);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8),acStack_38,
           (longlong)((int)lVar3 + 2));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_58);
}





// 函数: void FUN_1806285be(void)
void FUN_1806285be(void)

{
  int unaff_EBX;
  longlong unaff_RSI;
  int8_t auStackX_20 [8];
  
  FUN_1806277c0();
                    // WARNING: Subroutine does not return
  memcpy((ulonglong)*(uint *)(unaff_RSI + 0x10) + *(longlong *)(unaff_RSI + 8),auStackX_20,
         (longlong)(unaff_EBX + 1));
}





// 函数: void FUN_1806285f1(void)
void FUN_1806285f1(void)

{
  ulonglong in_stack_00000040;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000040 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180628610(longlong param_1,int param_2,int param_3)
void FUN_180628610(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar3 < (uint)(param_2 + param_3)) {
    param_3 = uVar3 - param_2;
  }
  uVar1 = param_2 + param_3;
  if (uVar1 < uVar3) {
    lVar2 = (longlong)(int)uVar1;
    do {
      lVar2 = lVar2 + 1;
      uVar1 = uVar1 + 1;
      *(int8_t *)((*(longlong *)(param_1 + 8) - (longlong)param_3) + -1 + lVar2) =
           *(int8_t *)(*(longlong *)(param_1 + 8) + -1 + lVar2);
      uVar3 = *(uint *)(param_1 + 0x10);
    } while (uVar1 < uVar3);
  }
  *(uint *)(param_1 + 0x10) = uVar3 - param_3;
  *(int8_t *)((ulonglong)(uVar3 - param_3) + *(longlong *)(param_1 + 8)) = 0;
  return;
}





// 函数: void FUN_180628635(uint64_t param_1,uint param_2)
void FUN_180628635(uint64_t param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  int in_R10D;
  longlong in_R11;
  
  lVar1 = (longlong)(int)param_2;
  do {
    lVar1 = lVar1 + 1;
    param_2 = param_2 + 1;
    *(int8_t *)((*(longlong *)(in_R11 + 8) - (longlong)in_R10D) + -1 + lVar1) =
         *(int8_t *)(*(longlong *)(in_R11 + 8) + -1 + lVar1);
  } while (param_2 < *(uint *)(in_R11 + 0x10));
  uVar2 = *(uint *)(in_R11 + 0x10) - in_R10D;
  *(uint *)(in_R11 + 0x10) = uVar2;
  *(int8_t *)((ulonglong)uVar2 + *(longlong *)(in_R11 + 8)) = 0;
  return;
}





// 函数: void FUN_180628668(void)
void FUN_180628668(void)

{
  int in_R9D;
  int in_R10D;
  longlong in_R11;
  
  *(int *)(in_R11 + 0x10) = in_R9D - in_R10D;
  *(int8_t *)((ulonglong)(uint)(in_R9D - in_R10D) + *(longlong *)(in_R11 + 8)) = 0;
  return;
}





// 函数: void FUN_180628680(longlong param_1,int8_t *param_2,int *param_3)
void FUN_180628680(longlong param_1,int8_t *param_2,int *param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  *param_3 = 0;
  uVar5 = *(uint *)(param_1 + 0x1c);
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar5 < uVar3) {
    do {
      if (0x20 < *(byte *)((ulonglong)uVar5 + *(longlong *)(param_1 + 8))) break;
      uVar5 = uVar5 + 1;
      *(uint *)(param_1 + 0x1c) = uVar5;
    } while (uVar5 < uVar3);
    if (uVar5 < uVar3) {
      if (*(char *)((ulonglong)uVar5 + *(longlong *)(param_1 + 8)) == '\"') {
        uVar5 = uVar5 + 1;
        *(uint *)(param_1 + 0x1c) = uVar5;
        if (uVar5 < uVar3) {
          do {
            cVar1 = *(char *)((ulonglong)uVar5 + *(longlong *)(param_1 + 8));
            if ((cVar1 == '\"') || (0x1fff < *param_3)) break;
            param_2[*param_3] = cVar1;
            *param_3 = *param_3 + 1;
            uVar5 = *(int *)(param_1 + 0x1c) + 1;
            *(uint *)(param_1 + 0x1c) = uVar5;
          } while (uVar5 < *(uint *)(param_1 + 0x10));
        }
        *(uint *)(param_1 + 0x1c) = uVar5 + 1;
      }
      else {
        do {
          bVar2 = *(byte *)((ulonglong)uVar5 + *(longlong *)(param_1 + 8));
          if ((bVar2 < 0x21) || (0x1fff < *param_3)) break;
          param_2[*param_3] = bVar2;
          *param_3 = *param_3 + 1;
          uVar5 = *(int *)(param_1 + 0x1c) + 1;
          *(uint *)(param_1 + 0x1c) = uVar5;
        } while (uVar5 < *(uint *)(param_1 + 0x10));
      }
      iVar4 = 0x1fff;
      if (*param_3 < 0x1fff) {
        iVar4 = *param_3;
      }
      param_2[iVar4] = 0;
      return;
    }
  }
  *param_2 = 0;
  return;
}





// 函数: void FUN_18062869c(longlong param_1,int8_t *param_2,int *param_3,uint param_4)
void FUN_18062869c(longlong param_1,int8_t *param_2,int *param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  longlong unaff_RDI;
  longlong in_R10;
  uint in_R11D;
  
  lVar3 = *(longlong *)(param_1 + 8);
  do {
    if (0x20 < *(byte *)((ulonglong)param_4 + lVar3)) break;
    param_4 = param_4 + 1;
    *(uint *)(in_R10 + 0x1c) = param_4;
  } while (param_4 < in_R11D);
  if (in_R11D <= param_4) {
    *param_2 = 0;
    return;
  }
  if (*(char *)((ulonglong)param_4 + *(longlong *)(in_R10 + 8)) == '\"') {
    param_4 = param_4 + 1;
    *(uint *)(in_R10 + 0x1c) = param_4;
    if (param_4 < in_R11D) {
      do {
        cVar1 = *(char *)((ulonglong)param_4 + *(longlong *)(in_R10 + 8));
        if ((cVar1 == '\"') || (0x1fff < *param_3)) break;
        *(char *)(*param_3 + unaff_RDI) = cVar1;
        *param_3 = *param_3 + 1;
        param_4 = *(int *)(in_R10 + 0x1c) + 1;
        *(uint *)(in_R10 + 0x1c) = param_4;
      } while (param_4 < *(uint *)(in_R10 + 0x10));
    }
    *(uint *)(in_R10 + 0x1c) = param_4 + 1;
  }
  else {
    do {
      bVar2 = *(byte *)((ulonglong)param_4 + *(longlong *)(in_R10 + 8));
      if ((bVar2 < 0x21) || (0x1fff < *param_3)) break;
      *(byte *)(*param_3 + unaff_RDI) = bVar2;
      *param_3 = *param_3 + 1;
      param_4 = *(int *)(in_R10 + 0x1c) + 1;
      *(uint *)(in_R10 + 0x1c) = param_4;
    } while (param_4 < *(uint *)(in_R10 + 0x10));
  }
  iVar4 = 0x1fff;
  if (*param_3 < 0x1fff) {
    iVar4 = *param_3;
  }
  *(int8_t *)(iVar4 + unaff_RDI) = 0;
  return;
}





// 函数: void FUN_1806286ca(uint64_t param_1,int8_t *param_2)
void FUN_1806286ca(uint64_t param_1,int8_t *param_2)

{
  *param_2 = 0;
  return;
}





// 函数: void FUN_180628780(longlong param_1,longlong param_2)
void FUN_180628780(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  *(int32_t *)(param_2 + 0x10) = 0;
  if (*(int8_t **)(param_2 + 8) != (int8_t *)0x0) {
    **(int8_t **)(param_2 + 8) = 0;
  }
  uVar4 = *(uint *)(param_1 + 0x1c);
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar4 < uVar3) {
    do {
      if (0x20 < *(byte *)((ulonglong)uVar4 + *(longlong *)(param_1 + 8))) break;
      uVar4 = uVar4 + 1;
      *(uint *)(param_1 + 0x1c) = uVar4;
    } while (uVar4 < uVar3);
    if (uVar4 < uVar3) {
      if (*(char *)((ulonglong)uVar4 + *(longlong *)(param_1 + 8)) == '\"') {
        uVar4 = uVar4 + 1;
        *(uint *)(param_1 + 0x1c) = uVar4;
        if (uVar4 < uVar3) {
          do {
            cVar1 = *(char *)((ulonglong)uVar4 + *(longlong *)(param_1 + 8));
            if (cVar1 == '\"') break;
            FUN_1806277c0(param_2,*(int *)(param_2 + 0x10) + 1);
            *(char *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = cVar1;
            *(int8_t *)((ulonglong)(*(int *)(param_2 + 0x10) + 1) + *(longlong *)(param_2 + 8))
                 = 0;
            *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
            uVar4 = *(int *)(param_1 + 0x1c) + 1;
            *(uint *)(param_1 + 0x1c) = uVar4;
          } while (uVar4 < *(uint *)(param_1 + 0x10));
        }
        *(uint *)(param_1 + 0x1c) = uVar4 + 1;
        return;
      }
      do {
        bVar2 = *(byte *)((ulonglong)uVar4 + *(longlong *)(param_1 + 8));
        if (bVar2 < 0x21) {
          return;
        }
        FUN_1806277c0(param_2,*(int *)(param_2 + 0x10) + 1);
        *(byte *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = bVar2;
        *(int8_t *)((ulonglong)(*(int *)(param_2 + 0x10) + 1) + *(longlong *)(param_2 + 8)) = 0;
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        uVar4 = *(int *)(param_1 + 0x1c) + 1;
        *(uint *)(param_1 + 0x1c) = uVar4;
      } while (uVar4 < *(uint *)(param_1 + 0x10));
    }
  }
  return;
}





