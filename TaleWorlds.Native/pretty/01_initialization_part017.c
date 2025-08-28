#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 01_initialization_part017.c - 32 个函数

// 函数: void FUN_18004b730(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18004b730(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  if (puVar1 != (uint64_t *)0x0) {
    FUN_18004b790(param_1,*puVar1,param_3,param_4,0xfffffffffffffffe);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  return;
}





// 函数: void FUN_18004b790(uint64_t param_1,uint64_t *param_2)
void FUN_18004b790(uint64_t param_1,uint64_t *param_2)

{
  if (param_2 != (uint64_t *)0x0) {
    FUN_18004b790(param_1,*param_2);
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}





// 函数: void FUN_18004b7a2(uint64_t param_1)
void FUN_18004b7a2(uint64_t param_1)

{
  uint64_t *unaff_RBX;
  
  FUN_18004b790(param_1,*unaff_RBX);
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18004b7de(void)
void FUN_18004b7de(void)

{
  return;
}



uint64_t * FUN_18004b7e0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_3528_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



uint64_t * FUN_18004b820(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_3552_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18004b860(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18004b860(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  int8_t auStack_78 [32];
  uint64_t uStack_58;
  uint64_t *puStack_50;
  char acStack_48 [32];
  ulonglong uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_78;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar3 = (ulonglong *)func_0x00018004b9a0();
  uStack_58 = 0;
  puStack_50 = &uStackX_18;
  __stdio_common_vsprintf(*puVar3 | 1,acStack_48,0x20,param_2);
  lVar1 = -1;
  do {
    lVar4 = lVar1;
    lVar1 = lVar4 + 1;
  } while (acStack_48[lVar4 + 1] != '\0');
  iVar2 = (int)(lVar4 + 1);
  if ((0 < iVar2) && (*(uint *)(param_1 + 0x10) + iVar2 < 0x1f)) {
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8),acStack_48,
           (longlong)((int)lVar4 + 2));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_78);
}



uint64_t * FUN_18004b920(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_3616_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



uint64_t * FUN_18004b960(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_3672_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



int FUN_18004b9b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)func_0x00018004b9a0();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,param_1,param_2,param_3,0,param_4);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}





// 函数: void FUN_18004ba30(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18004ba30(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800582b0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_18004ba60(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18004ba60(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800582b0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18004ba90(uint64_t *param_1)
void FUN_18004ba90(uint64_t *param_1)

{
  int iVar1;
  
  SYSTEM_DATA_MANAGER_A = *param_1;
  iVar1 = _Mtx_unlock(0x180c91970);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}





// 函数: void FUN_18004bad0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18004bad0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180058370(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_18004bb00(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18004bb00(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180058370(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_18004bb30(longlong param_1)
void FUN_18004bb30(longlong param_1)

{
  FUN_180057010(param_1 + 0x60);
  return;
}





// 函数: void FUN_18004bb60(longlong param_1)
void FUN_18004bb60(longlong param_1)

{
  FUN_180057010(param_1 + 0x60);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18004bb90(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18004bb90(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar2 = init_system_data_config;
  iVar3 = (int)(*(longlong *)(init_system_data_config + 0x38) - *(longlong *)(init_system_data_config + 0x30) >> 3);
  lVar4 = 0;
  if (0 < iVar3) {
    do {
      puVar1 = *(uint64_t **)(*(longlong *)(lVar2 + 0x30) + lVar4 * 8);
      if (puVar1 != (uint64_t *)0x0) {
        puVar1[4] = &unknown_var_3456_ptr;
        if (puVar1[5] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puVar1[5] = 0;
        *(int32_t *)(puVar1 + 7) = 0;
        puVar1[4] = &unknown_var_720_ptr;
        *puVar1 = &unknown_var_3456_ptr;
        if (puVar1[1] == 0) {
          puVar1[1] = 0;
          *(int32_t *)(puVar1 + 3) = 0;
          *puVar1 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar1);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(*(longlong *)(lVar2 + 0x30) + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  *(uint64_t *)(lVar2 + 0x38) = *(uint64_t *)(lVar2 + 0x30);
  lVar4 = lVar2 + 0x50;
  FUN_180058370(lVar4,*(uint64_t *)(lVar2 + 0x60),param_3,param_4,0xfffffffffffffffe);
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar2 + 0x58) = lVar4;
  *(uint64_t *)(lVar2 + 0x60) = 0;
  *(int8_t *)(lVar2 + 0x68) = 0;
  *(uint64_t *)(lVar2 + 0x70) = 0;
  return;
}





// 函数: void FUN_18004bcb0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18004bcb0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180058420(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_18004bce0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18004bce0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180058420(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



uint64_t * FUN_18004bd10(uint64_t *param_1)

{
  *param_1 = &unknown_var_720_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &unknown_var_3480_ptr;
  param_1[1] = param_1 + 3;
  *(int32_t *)(param_1 + 2) = 0;
  *(int8_t *)(param_1 + 3) = 0;
  FUN_180142b20(param_1 + 0xb);
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(int32_t *)(param_1 + 0x77) = 3;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(int32_t *)(param_1 + 0x7b) = 3;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(int32_t *)(param_1 + 0x7f) = 3;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(int32_t *)(param_1 + 0x83) = 3;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  *(int32_t *)(param_1 + 0x87) = 3;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(int32_t *)(param_1 + 0x8b) = 3;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  *(int32_t *)(param_1 + 0x8f) = 3;
  return param_1;
}





// 函数: void FUN_18004be50(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18004be50(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 0x69) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18004be70(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18004be70(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 0xb) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18004be90(longlong param_1)
void FUN_18004be90(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar4;
  
  iVar1 = _Mtx_lock(param_1 + 0x28);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  uVar4 = 0;
  lVar2 = *(longlong *)(param_1 + 8);
  uVar5 = uVar4;
  if (*(longlong *)(param_1 + 0x10) - lVar2 >> 3 != 0) {
    do {
      if (*(longlong *)(uVar5 + lVar2) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(uVar5 + *(longlong *)(param_1 + 8)) = 0;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      lVar2 = *(longlong *)(param_1 + 8);
      uVar5 = uVar5 + 8;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0x10) - lVar2 >> 3));
  }
  *(longlong *)(param_1 + 0x10) = lVar2;
  iVar1 = _Mtx_unlock(param_1 + 0x28);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}





// 函数: void FUN_18004bf50(longlong *param_1)
void FUN_18004bf50(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    *param_1 = 0;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[2] + 0x38))();
    }
    if ((longlong *)param_1[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[1] + 0x38))();
    }
    return;
  }
  if (*(longlong *)(lVar1 + 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  _Mtx_destroy_in_situ();
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar1);
}





// 函数: void FUN_18004bff0(longlong param_1)
void FUN_18004bff0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_18004c010(longlong *param_1)
void FUN_18004c010(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    FUN_18004bf50(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18004c030(longlong *param_1)
void FUN_18004c030(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



uint64_t * FUN_18004c050(uint64_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 3;
  return param_1;
}





// 函数: void FUN_18004c090(longlong *param_1)
void FUN_18004c090(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    FUN_18004bf50(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18004c0b0(longlong param_1)
void FUN_18004c0b0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_18004c0d0(longlong param_1)
void FUN_18004c0d0(longlong param_1)

{
  void *puVar1;
  int8_t auStack_a8 [8];
  void *puStack_a0;
  uint uStack_98;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  int32_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  int32_t uStack_50;
  void *puStack_48;
  longlong lStack_40;
  int32_t uStack_30;
  uint64_t uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  if (param_1 == 0) {


// 函数: void FUN_18004c260(ulonglong *param_1)
void FUN_18004c260(ulonglong *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_18004c290(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18004c290(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 4) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18004c2b0(longlong param_1)
void FUN_18004c2b0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 == 0) {


// 函数: void FUN_18004c2c4(longlong param_1)
void FUN_18004c2c4(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_1 + lVar2) != '\0');
  uVar1 = (uint)lVar2;
  if (0x1fff < uVar1) {
    uVar1 = 0x1fff;
  }
                    // WARNING: Subroutine does not return
  memcpy(&system_counter_4870,param_1,(longlong)(int)uVar1);
}





// 函数: void FUN_18004c31f(void)
void FUN_18004c31f(void)

{
  code *pcVar1;
  
  FUN_1808fcdc8();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



int8_t *
FUN_18004c330(int8_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)(param_1 + 8);
  *plVar3 = (longlong)&unknown_var_720_ptr;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *plVar3 = (longlong)&unknown_var_3456_ptr;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(void **)(param_1 + 0x38) = &unknown_var_720_ptr;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(int32_t *)(param_1 + 0x48) = 0;
  *(void **)(param_1 + 0x38) = &unknown_var_3456_ptr;
  *(uint64_t *)(param_1 + 0x50) = 0;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(int32_t *)(param_1 + 0x48) = 0;
  *(void **)(param_1 + 0x58) = &unknown_var_720_ptr;
  *(uint64_t *)(param_1 + 0x60) = 0;
  *(int32_t *)(param_1 + 0x68) = 0;
  *(void **)(param_1 + 0x58) = &unknown_var_3456_ptr;
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(uint64_t *)(param_1 + 0x60) = 0;
  *(int32_t *)(param_1 + 0x68) = 0;
  plVar1 = (longlong *)(param_1 + 0x80);
  *plVar1 = (longlong)&unknown_var_720_ptr;
  *(uint64_t *)(param_1 + 0x88) = 0;
  *(int32_t *)(param_1 + 0x90) = 0;
  *plVar1 = (longlong)&unknown_var_3456_ptr;
  *(uint64_t *)(param_1 + 0x98) = 0;
  *(uint64_t *)(param_1 + 0x88) = 0;
  *(int32_t *)(param_1 + 0x90) = 0;
  plVar2 = (longlong *)(param_1 + 0xa0);
  *plVar2 = (longlong)&unknown_var_720_ptr;
  *(uint64_t *)(param_1 + 0xa8) = 0;
  *(int32_t *)(param_1 + 0xb0) = 0;
  *plVar2 = (longlong)&unknown_var_3456_ptr;
  *(uint64_t *)(param_1 + 0xb8) = 0;
  *(uint64_t *)(param_1 + 0xa8) = 0;
  *(int32_t *)(param_1 + 0xb0) = 0;
  *param_1 = 0;
  (**(code **)(*plVar3 + 0x10))(plVar3,&unknown_var_4696_ptr,&unknown_var_720_ptr,param_4,0xfffffffffffffffe);
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(int32_t *)(param_1 + 0x30) = 0;
  param_1[0x7c] = 0;
  param_1[0xc9] = 1;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_counter_d128);
  (**(code **)(*plVar2 + 0x10))(plVar2,&system_buffer_ptr);
  *(int32_t *)(param_1 + 0xc0) = 0x461c4000;
  *(int32_t *)(param_1 + 0xc4) = 0x461c4000;
  param_1[200] = 0;
  *(uint64_t *)(param_1 + 0xd0) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18004c480(uint64_t *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  longlong *plVar7;
  int32_t *puVar8;
  int32_t *puVar9;
  longlong lVar10;
  uint64_t *apuStackX_10 [3];
  
  *(int8_t *)((longlong)param_1 + 0x1c) = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 3;
  param_1[0x17] = &unknown_var_720_ptr;
  param_1[0x18] = 0;
  *(int32_t *)(param_1 + 0x19) = 0;
  param_1[0x17] = &unknown_var_3456_ptr;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  *(int32_t *)(param_1 + 0x19) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(int32_t *)(param_1 + 0x1e) = 3;
  plVar1 = param_1 + 0x21;
  *plVar1 = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(int32_t *)(param_1 + 0x24) = 3;
  param_1[0x29] = &unknown_var_720_ptr;
  param_1[0x2a] = 0;
  *(int32_t *)(param_1 + 0x2b) = 0;
  param_1[0x29] = &unknown_var_3456_ptr;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  *(int32_t *)(param_1 + 0x2b) = 0;
  plVar2 = param_1 + 0x2e;
  *plVar2 = (longlong)&unknown_var_720_ptr;
  param_1[0x2f] = 0;
  *(int32_t *)(param_1 + 0x30) = 0;
  *plVar2 = (longlong)&unknown_var_3456_ptr;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  *(int32_t *)(param_1 + 0x30) = 0;
  plVar3 = param_1 + 0x32;
  *plVar3 = (longlong)&unknown_var_720_ptr;
  param_1[0x33] = 0;
  *(int32_t *)(param_1 + 0x34) = 0;
  *plVar3 = (longlong)&unknown_var_672_ptr;
  param_1[0x33] = param_1 + 0x35;
  *(int32_t *)(param_1 + 0x34) = 0;
  *(int8_t *)(param_1 + 0x35) = 0;
  plVar7 = param_1 + 0x39;
  *plVar7 = (longlong)&unknown_var_720_ptr;
  param_1[0x3a] = 0;
  *(int32_t *)(param_1 + 0x3b) = 0;
  *plVar7 = (longlong)&unknown_var_3456_ptr;
  param_1[0x3c] = 0;
  param_1[0x3a] = 0;
  *(int32_t *)(param_1 + 0x3b) = 0;
  *(uint64_t *)((longlong)param_1 + 0x254) = 0;
  *(uint64_t *)((longlong)param_1 + 0x25c) = 0;
  param_1[0x4e] = &unknown_var_720_ptr;
  param_1[0x4f] = 0;
  *(int32_t *)(param_1 + 0x50) = 0;
  param_1[0x4e] = &unknown_var_3456_ptr;
  param_1[0x51] = 0;
  param_1[0x4f] = 0;
  *(int32_t *)(param_1 + 0x50) = 0;
  param_1[0x52] = &unknown_var_720_ptr;
  param_1[0x53] = 0;
  *(int32_t *)(param_1 + 0x54) = 0;
  param_1[0x52] = &unknown_var_3456_ptr;
  param_1[0x55] = 0;
  param_1[0x53] = 0;
  *(int32_t *)(param_1 + 0x54) = 0;
  param_1[0x58] = &unknown_var_720_ptr;
  param_1[0x59] = 0;
  *(int32_t *)(param_1 + 0x5a) = 0;
  param_1[0x58] = &unknown_var_3456_ptr;
  param_1[0x5b] = 0;
  param_1[0x59] = 0;
  *(int32_t *)(param_1 + 0x5a) = 0;
  puVar6 = param_1 + 0x5c;
  param_1[0x5f] = 0;
  *(int32_t *)(param_1 + 0x61) = 3;
  *puVar6 = puVar6;
  param_1[0x5d] = puVar6;
  param_1[0x5e] = 0;
  *(int8_t *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(int32_t *)(param_1 + 0x67) = 3;
  param_1[0x69] = &unknown_var_720_ptr;
  param_1[0x6a] = 0;
  *(int32_t *)(param_1 + 0x6b) = 0;
  param_1[0x69] = &unknown_var_3456_ptr;
  param_1[0x6c] = 0;
  param_1[0x6a] = 0;
  *(int32_t *)(param_1 + 0x6b) = 0;
  apuStackX_10[0] = param_1 + 0x6d;
  *apuStackX_10[0] = &unknown_var_720_ptr;
  param_1[0x6e] = 0;
  *(int32_t *)(param_1 + 0x6f) = 0;
  *apuStackX_10[0] = &unknown_var_3456_ptr;
  param_1[0x70] = 0;
  param_1[0x6e] = 0;
  *(int32_t *)(param_1 + 0x6f) = 0;
  *(int32_t *)(param_1 + 4) = 0;
  *param_1 = 0;
  *(int32_t *)(param_1 + 99) = 0;
  (**(code **)(*plVar7 + 0x10))
            (plVar7,&unknown_var_4720_ptr,&unknown_var_3456_ptr,&unknown_var_720_ptr,0xfffffffffffffffe);
  *(int32_t *)(param_1 + 0x3d) = 0;
  *(int32_t *)((longlong)param_1 + 0x1ed) = 0x1000001;
  param_1[0x62] = 0;
  *(int8_t *)(param_1 + 0xc) = 0;
  *(int32_t *)(param_1 + 0x20) = 0xffffffff;
  *(int8_t *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(int8_t *)((longlong)param_1 + 0x1ec) = 0;
  LOCK();
  *(int8_t *)(param_1 + 0x79) = 0;
  UNLOCK();
  (**(code **)(*plVar3 + 0x10))(plVar3,&unknown_var_4736_ptr);
  (**(code **)(*plVar2 + 0x10))(plVar2,&system_buffer_ptr);
  *(int8_t *)(param_1 + 0x2d) = 0;
  param_1[0x13] = 0;
  *(int32_t *)(param_1 + 0x1f) = 0x1010101;
  *(int16_t *)((longlong)param_1 + 0xfc) = 0x101;
  *(int32_t *)((longlong)param_1 + 0x104) = 0xffffffff;
  lVar10 = 8;
  do {
    puVar9 = (int32_t *)param_1[0x22];
    if (puVar9 < (int32_t *)param_1[0x23]) {
      param_1[0x22] = puVar9 + 1;
      *puVar9 = 0;
    }
    else {
      puVar8 = (int32_t *)*plVar1;
      lVar4 = (longlong)puVar9 - (longlong)puVar8 >> 2;
      if (lVar4 == 0) {
        lVar4 = 1;
LAB_18004c7ef:
        puVar5 = (int32_t *)
                 FUN_18062b420(system_memory_pool_ptr,lVar4 * 4,*(int8_t *)(param_1 + 0x24));
        puVar9 = (int32_t *)param_1[0x22];
        puVar8 = (int32_t *)*plVar1;
      }
      else {
        lVar4 = lVar4 * 2;
        puVar5 = (int32_t *)0x0;
        if (lVar4 != 0) goto LAB_18004c7ef;
      }
      if (puVar8 != puVar9) {
                    // WARNING: Subroutine does not return
        memmove(puVar5,puVar8,(longlong)puVar9 - (longlong)puVar8);
      }
      *puVar5 = 0;
      if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *plVar1 = (longlong)puVar5;
      param_1[0x22] = puVar5 + 1;
      param_1[0x23] = puVar5 + lVar4;
    }
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) {
      *(int32_t *)((longlong)param_1 + 0x24) = 0;
      *(int32_t *)((longlong)param_1 + 0x29) = 0x1010101;
      *(int8_t *)(param_1 + 5) = 1;
      *(int32_t *)(param_1 + 0x71) = 0x3f800000;
      *(int8_t *)(param_1 + 0x76) = 1;
      *(int32_t *)(param_1 + 0x25) = 0;
      param_1[0x56] = 0;
      *(uint64_t *)((longlong)param_1 + 0x224) = 0;
      *(int8_t *)((longlong)param_1 + 0x22c) = 0;
      *(int32_t *)(param_1 + 0x40) = 0;
      param_1[0x41] = 0;
      puVar6 = init_system_data_config;
      if (init_system_data_config == (uint64_t *)0x0) {
        QueryPerformanceCounter(apuStackX_10);
        puVar6 = apuStackX_10[0];
      }
      param_1[0x42] = (double)((longlong)puVar6 - init_system_data_config) * init_system_data_config;
      *(int32_t *)(param_1 + 0x44) = 0;
      *(int8_t *)((longlong)param_1 + 0x264) = 0;
      *(int32_t *)(param_1 + 0x4d) = 0;
      *(uint64_t *)((longlong)param_1 + 500) = 0;
      *(int8_t *)(param_1 + 0x28) = 0;
      *(int8_t *)((longlong)param_1 + 0x1fc) = 0;
      param_1[0x7b] = 0;
      param_1[0x57] = 0;
      lVar10 = FUN_18062b1e0(system_memory_pool_ptr,0xc,4,3);
      *(int8_t *)(lVar10 + 8) = 0;
      param_1[6] = lVar10;
      param_1[0x27] = 0;
      *(int8_t *)(param_1 + 7) = 0;
      *(int32_t *)((longlong)param_1 + 0x3c) = 0xffffffff;
      param_1[0x43] = 0;
      *(int32_t *)(param_1 + 0x26) = 0xffffffff;
      puVar6 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x30,8,3);
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      *puVar6 = &unknown_var_3552_ptr;
      *puVar6 = &unknown_var_3696_ptr;
      *(int32_t *)(puVar6 + 1) = 0;
      *puVar6 = &unknown_var_8624_ptr;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      *(int32_t *)(puVar6 + 5) = 3;
      param_1[0x78] = puVar6;
      return param_1;
    }
  } while( true );
}





// 函数: void FUN_18004ca00(longlong *param_1)
void FUN_18004ca00(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}



uint64_t *
FUN_18004ca30(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_1[2] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_18004caa0(uint64_t *param_1)
void FUN_18004caa0(uint64_t *param_1)

{
  if (param_1[2] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



