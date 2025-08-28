#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part651.c - 16 个函数

// 函数: void FUN_1806382d0(longlong *param_1,float *param_2)
void FUN_1806382d0(longlong *param_1,float *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int8_t auStack_f8 [32];
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  uint64_t uStack_b8;
  longlong *plStack_b0;
  char acStack_a8 [128];
  ulonglong uStack_28;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_f8;
  plVar1 = param_1 + 0xb;
  plStack_b0 = plVar1;
  iVar3 = _Mtx_lock(plVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  dStack_c8 = (double)*param_2;
  dStack_d0 = (double)param_2[3];
  dStack_d8 = (double)param_2[2];
  FUN_180626eb0(acStack_a8,0x80,&unknown_var_6048_ptr,(double)param_2[1]);
  lVar2 = -1;
  do {
    lVar4 = lVar2;
    lVar2 = lVar4 + 1;
  } while (acStack_a8[lVar4 + 1] != '\0');
  iVar3 = (int)(lVar4 + 1);
  if (0 < iVar3) {
    FUN_1806277c0(param_1 + 7,(int)param_1[9] + iVar3);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 9) + param_1[8],acStack_a8,(longlong)((int)lVar4 + 2));
  }
  if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
    (**(code **)(*param_1 + 0x118))(param_1);
  }
  iVar3 = _Mtx_unlock(plVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_f8);
}



longlong * FUN_180638410(longlong *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  iVar1 = _Mtx_lock(param_1 + 0xb);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  (**(code **)(*param_1 + 0x50))(param_1,*(int32_t *)(param_2 + 0x48));
  if (0 < *(int *)(param_2 + 0x48)) {
    FUN_1806277c0(param_1 + 7,(int)param_1[9] + *(int *)(param_2 + 0x48));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 9) + param_1[8],*(uint64_t *)(param_2 + 0x40),
           (longlong)(*(int *)(param_2 + 0x48) + 1),param_4,uVar2);
  }
  if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
    (**(code **)(*param_1 + 0x118))(param_1);
  }
  iVar1 = _Mtx_unlock(param_1 + 0xb);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return param_1;
}



longlong FUN_1806384d0(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  void *puVar4;
  void *puStack_70;
  byte *pbStack_68;
  int iStack_60;
  ulonglong uStack_58;
  void *puStack_50;
  void *puStack_48;
  int32_t uStack_40;
  ulonglong uStack_38;
  
  iVar2 = _Mtx_lock(param_1 + 0x58);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  puStack_70 = &unknown_var_3456_ptr;
  uStack_58 = 0;
  pbStack_68 = (byte *)0x0;
  iStack_60 = 0;
  func_0x000180637680(param_1);
  if (*(int *)(param_1 + 0x28) != 1) {
    puStack_50 = &unknown_var_3456_ptr;
    uStack_38 = 0;
    puStack_48 = (void *)0x0;
    uStack_40 = 0;
    FUN_180628780(param_1 + 0x38,&puStack_50);
    puVar4 = &system_buffer_ptr;
    if (puStack_48 != (void *)0x0) {
      puVar4 = puStack_48;
    }
    (**(code **)(*param_2 + 0x10))(param_2,puVar4);
    puStack_50 = &unknown_var_3456_ptr;
    if (puStack_48 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_48 = (void *)0x0;
    uStack_38 = uStack_38 & 0xffffffff00000000;
    puStack_50 = &unknown_var_720_ptr;
    goto LAB_180638614;
  }
  FUN_180628780(param_1 + 0x38,&puStack_70);
  iVar2 = (int)param_2[2];
  if (iStack_60 == iVar2) {
    if (iStack_60 != 0) {
      pbVar3 = pbStack_68;
      do {
        pbVar1 = pbVar3 + (param_2[1] - (longlong)pbStack_68);
        iVar2 = (uint)*pbVar3 - (uint)*pbVar1;
        if (iVar2 != 0) break;
        pbVar3 = pbVar3 + 1;
      } while (*pbVar1 != 0);
    }
LAB_18063859d:
    if (iVar2 != 0) goto LAB_18063859f;
  }
  else {
    if (iStack_60 == 0) goto LAB_18063859d;
LAB_18063859f:
    FUN_180626ee0(&unknown_var_6064_ptr);
  }
  *(int32_t *)(param_1 + 0x28) = 0;
LAB_180638614:
  puStack_70 = &unknown_var_3456_ptr;
  if (pbStack_68 == (byte *)0x0) {
    pbStack_68 = (byte *)0x0;
    uStack_58 = uStack_58 & 0xffffffff00000000;
    puStack_70 = &unknown_var_720_ptr;
    iVar2 = _Mtx_unlock(param_1 + 0x58);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    return param_1;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



longlong FUN_180638670(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  void *puStack_40;
  byte *pbStack_38;
  int iStack_30;
  ulonglong uStack_28;
  
  iVar2 = _Mtx_lock(param_1 + 0x58);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  puStack_40 = &unknown_var_3456_ptr;
  uStack_28 = 0;
  pbStack_38 = (byte *)0x0;
  iStack_30 = 0;
  func_0x000180637680(param_1);
  if (*(int *)(param_1 + 0x28) != 1) {
    FUN_180628780(param_1 + 0x38,param_2);
    goto LAB_180638759;
  }
  FUN_180628780(param_1 + 0x38,&puStack_40);
  iVar2 = *(int *)(param_2 + 0x10);
  if (iStack_30 == iVar2) {
    if (iStack_30 != 0) {
      pbVar3 = pbStack_38;
      do {
        pbVar1 = pbVar3 + (*(longlong *)(param_2 + 8) - (longlong)pbStack_38);
        iVar2 = (uint)*pbVar3 - (uint)*pbVar1;
        if (iVar2 != 0) break;
        pbVar3 = pbVar3 + 1;
      } while (*pbVar1 != 0);
    }
LAB_18063873d:
    if (iVar2 != 0) goto LAB_18063873f;
  }
  else {
    if (iStack_30 == 0) goto LAB_18063873d;
LAB_18063873f:
    FUN_180626ee0(&unknown_var_6064_ptr);
  }
  *(int32_t *)(param_1 + 0x28) = 0;
LAB_180638759:
  puStack_40 = &unknown_var_3456_ptr;
  if (pbStack_38 == (byte *)0x0) {
    pbStack_38 = (byte *)0x0;
    uStack_28 = uStack_28 & 0xffffffff00000000;
    puStack_40 = &unknown_var_720_ptr;
    iVar2 = _Mtx_unlock(param_1 + 0x58);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    return param_1;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_1806387b0(void)
void FUN_1806387b0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_180638880(void)
void FUN_180638880(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_180638950(void)
void FUN_180638950(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_180638a20(void)
void FUN_180638a20(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_180638b40(void)
void FUN_180638b40(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_180638c30(void)
void FUN_180638c30(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_180638d00(void)
void FUN_180638d00(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_180638dd0(void)
void FUN_180638dd0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



longlong * FUN_180638ea0(longlong *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  longlong *plVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  iVar1 = _Mtx_lock(param_1 + 0xb);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  plVar2 = (longlong *)(**(code **)(*param_1 + 0xa0))(param_1,param_2 + 4);
  plVar2 = (longlong *)
           (**(code **)(*plVar2 + 0xa0))
                     (plVar2,param_2 + 8,*(code **)(*plVar2 + 0xa0),param_4,uVar3);
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0xa0))(plVar2,param_2 + 0xc);
  (**(code **)(*plVar2 + 0xa0))(plVar2,param_2);
  iVar1 = _Mtx_unlock(param_1 + 0xb);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return param_1;
}



longlong * FUN_180638f60(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  int8_t uVar2;
  int iVar3;
  int aiStackX_8 [2];
  longlong *plStackX_10;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  plVar1 = param_1 + 0xb;
  plStackX_10 = plVar1;
  iVar3 = _Mtx_lock(plVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  (**(code **)(*param_1 + 200))(param_1,aiStackX_8,param_3,param_4,uVar4);
  iVar3 = 0;
  if (*(code **)(*param_2 + 8) == (code *)&unknown_var_5984_ptr) {
    *(int32_t *)(param_2 + 9) = 0;
    if ((int8_t *)param_2[8] != (int8_t *)0x0) {
      *(int8_t *)param_2[8] = 0;
    }
    *(int32_t *)((longlong)param_2 + 0x54) = 0;
  }
  else {
    (**(code **)(*param_2 + 8))(param_2);
  }
  if (0 < aiStackX_8[0]) {
    do {
      uVar2 = *(int8_t *)((ulonglong)*(uint *)((longlong)param_1 + 0x54) + param_1[8]);
      *(uint *)((longlong)param_1 + 0x54) = *(uint *)((longlong)param_1 + 0x54) + 1;
      FUN_1806277c0(param_2 + 7,(int)param_2[9] + 1);
      *(int8_t *)((ulonglong)*(uint *)(param_2 + 9) + param_2[8]) = uVar2;
      *(int8_t *)((ulonglong)((int)param_2[9] + 1) + param_2[8]) = 0;
      *(int *)(param_2 + 9) = (int)param_2[9] + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < aiStackX_8[0]);
  }
  iVar3 = _Mtx_unlock(plVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return param_1;
}



uint64_t *
FUN_1806390d0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_6384_ptr;
  if (*(char *)((longlong)param_1 + 0xb1) != '\0') {
    FUN_180639250();
  }
  _Mtx_destroy_in_situ();
  FUN_1805065c0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xb8,param_3,param_4,uVar1);
  }
  return param_1;
}





// 函数: void FUN_180639150(uint64_t *param_1)
void FUN_180639150(uint64_t *param_1)

{
  *param_1 = &unknown_var_6384_ptr;
  if (*(char *)((longlong)param_1 + 0xb1) != '\0') {
    FUN_180639250();
  }
  _Mtx_destroy_in_situ();
  *param_1 = &unknown_var_5224_ptr;
  param_1[7] = &unknown_var_3456_ptr;
  if (param_1[8] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[8] = 0;
  *(int32_t *)(param_1 + 10) = 0;
  param_1[7] = &unknown_var_720_ptr;
  param_1[1] = &unknown_var_3456_ptr;
  if (param_1[2] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[2] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[1] = &unknown_var_720_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1806391a0(longlong param_1,uint64_t param_2,char *param_3)

{
  uint64_t *puVar1;
  void *puVar2;
  bool bVar3;
  
  (**(code **)(*(longlong *)(param_1 + 8) + 0x10))(param_1 + 8);
  if (*param_3 == '\0') {
    puVar1 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
    puVar2 = &system_data_c7ec;
  }
  else {
    puVar1 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
    puVar2 = &unknown_var_24_ptr;
  }
  *(int8_t *)(puVar1 + 2) = 0;
  *puVar1 = 0;
  FUN_18062dee0(puVar1,param_2,puVar2);
  *(uint64_t **)(param_1 + 0xa8) = puVar1;
  bVar3 = puVar1[1] == 0;
  if (!bVar3) {
    *(int8_t *)(param_1 + 0xb1) = 1;
  }
  *(bool *)(param_1 + 0xb0) = bVar3;
  return -(uint)bVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_180639250(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0xb1) == '\0') {
    return 1;
  }
  uVar3 = FUN_180639300();
  if (uVar3 == 0) {
    bVar2 = FUN_18062de90(*(uint64_t *)(param_1 + 0xa8));
    lVar1 = *(longlong *)(param_1 + 0xa8);
    uVar3 = (uint)bVar2;
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 8) != 0) {
        fclose();
        *(uint64_t *)(lVar1 + 8) = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar1);
    }
    *(uint64_t *)(param_1 + 0xa8) = 0;
  }
  *(int16_t *)(param_1 + 0xb0) = 1;
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_180639266(void)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong unaff_RBX;
  
  uVar3 = FUN_180639300();
  if (uVar3 == 0) {
    bVar2 = FUN_18062de90(*(uint64_t *)(unaff_RBX + 0xa8));
    lVar1 = *(longlong *)(unaff_RBX + 0xa8);
    uVar3 = (uint)bVar2;
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 8) != 0) {
        fclose();
        *(uint64_t *)(lVar1 + 8) = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar1);
    }
    *(uint64_t *)(unaff_RBX + 0xa8) = 0;
  }
  *(int16_t *)(unaff_RBX + 0xb0) = 1;
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_18063927d(void)

{
  longlong lVar1;
  int8_t uVar2;
  longlong unaff_RBX;
  
  uVar2 = FUN_18062de90();
  lVar1 = *(longlong *)(unaff_RBX + 0xa8);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 8) != 0) {
      fclose();
      *(uint64_t *)(lVar1 + 8) = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar1);
  }
  *(uint64_t *)(unaff_RBX + 0xa8) = 0;
  *(int16_t *)(unaff_RBX + 0xb0) = 1;
  return uVar2;
}



int32_t FUN_1806392d2(void)

{
  longlong unaff_RBX;
  int32_t unaff_EDI;
  
  *(int16_t *)(unaff_RBX + 0xb0) = 1;
  return unaff_EDI;
}



uint64_t FUN_1806392e8(void)

{
  return 1;
}



bool FUN_180639300(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *puVar4;
  
  if (*(char *)(param_1 + 0xb1) != '\0') {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 < *(int *)(param_1 + 0x48)) {
      puVar4 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        puVar4 = *(void **)(param_1 + 0x40);
      }
      iVar3 = fwrite(puVar4 + iVar1,1,(longlong)(*(int *)(param_1 + 0x48) - iVar1),
                     *(uint64_t *)(*(longlong *)(param_1 + 0xa8) + 8));
      iVar1 = *(int *)(param_1 + 0x48);
      iVar2 = *(int *)(param_1 + 0x30);
      fflush(*(uint64_t *)(*(longlong *)(param_1 + 0xa8) + 8));
      *(int32_t *)(param_1 + 0x48) = 0;
      if (*(int8_t **)(param_1 + 0x40) != (int8_t *)0x0) {
        **(int8_t **)(param_1 + 0x40) = 0;
      }
      *(int32_t *)(param_1 + 0x30) = 0;
      return iVar3 != iVar1 - iVar2;
    }
  }
  return false;
}



bool FUN_180639331(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  longlong unaff_RBX;
  
  if (*(longlong *)(unaff_RBX + 0x40) != 0) {
    param_2 = *(longlong *)(unaff_RBX + 0x40);
  }
  iVar3 = fwrite(param_1 + param_2,1,(longlong)in_EAX,*(uint64_t *)(param_4 + 8));
  iVar1 = *(int *)(unaff_RBX + 0x48);
  iVar2 = *(int *)(unaff_RBX + 0x30);
  fflush(*(uint64_t *)(*(longlong *)(unaff_RBX + 0xa8) + 8));
  *(int32_t *)(unaff_RBX + 0x48) = 0;
  if (*(int8_t **)(unaff_RBX + 0x40) != (int8_t *)0x0) {
    **(int8_t **)(unaff_RBX + 0x40) = 0;
  }
  *(int32_t *)(unaff_RBX + 0x30) = 0;
  return iVar3 != iVar1 - iVar2;
}



uint64_t FUN_18063939f(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806393b0(uint64_t param_1,longlong *param_2,ulonglong param_3)
void FUN_1806393b0(uint64_t param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  uint64_t *puVar2;
  longlong lVar3;
  uint64_t uVar4;
  int32_t uVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  void *puVar9;
  ulonglong auStackX_18 [2];
  int8_t auStack_128 [32];
  uint64_t uStack_108;
  uint uStack_100;
  uint uStack_f8;
  uint uStack_f0;
  uint uStack_e8;
  uint uStack_e0;
  uint uStack_d8;
  uint uStack_d0;
  uint uStack_c8;
  uint uStack_c0;
  int32_t uStack_b8;
  longlong alStack_b0 [3];
  longlong *plStack_98;
  longlong lStack_88;
  int8_t auStack_80 [4];
  int8_t auStack_7c [12];
  int8_t auStack_70 [40];
  ulonglong uStack_48;
  
  uVar4 = auStack_7c._4_8_;
  lVar3 = _DAT_180c8ed70;
  alStack_b0[1] = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_128;
  uStack_b8 = 0;
  alStack_b0[0] = _DAT_180c8ed70;
  lVar1 = _DAT_180c8ed70 + 200;
  auStackX_18[0] = param_3;
  plStack_98 = param_2;
  lStack_88 = lVar1;
  iVar6 = _Mtx_lock(lVar1);
  auStack_7c._4_8_ = uVar4;
  uVar5 = auStack_7c._2_4_;
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
    auStack_7c._2_4_ = uVar5;
    uVar5 = auStack_7c._2_4_;
  }
  auStack_7c._2_4_ = uVar5;
  auStack_7c._0_4_ = auStack_7c._2_4_;
  puVar2 = *(uint64_t **)(lVar3 + 0xa8);
  while (puVar2 != (uint64_t *)0x0) {
    if ((ulonglong)puVar2[4] < param_3) {
      puVar2 = (uint64_t *)*puVar2;
    }
    else {
      puVar2 = (uint64_t *)puVar2[1];
    }
  }
  CoCreateGuid(auStack_80);
  *param_2 = (longlong)&unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = (longlong)&unknown_var_3432_ptr;
  param_2[1] = (longlong)(param_2 + 3);
  *(int32_t *)(param_2 + 2) = 0;
  *(int8_t *)(param_2 + 3) = 0;
  uStack_b8 = 1;
  uStack_c8 = SUB82(auStack_7c._4_8_,6) & 0xff;
  uStack_d0 = SUB84(auStack_7c._4_8_,4) >> 8 & 0xff;
  uStack_d8 = SUB84(auStack_7c._4_8_,4) & 0xff;
  uStack_e0 = SUB84(auStack_7c._4_8_,3) & 0xff;
  uStack_e8 = SUB84(auStack_7c._4_8_,2) & 0xff;
  uStack_f0 = SUB84(auStack_7c._4_8_,1) & 0xff;
  uStack_f8 = (uint)auStack_7c._4_8_ & 0xff;
  uStack_c0 = (uint)SUB81(auStack_7c._4_8_,7);
  uStack_100 = (uint)auStack_7c._0_4_ >> 0x10;
  uStack_108 = (ulonglong *)(CONCAT44(uStack_108._4_4_,auStack_7c._0_4_) & 0xffffffff0000ffff);
  FUN_180626eb0(auStack_70,0x28,&unknown_var_6672_ptr);
  (**(code **)(*param_2 + 0x18))(param_2,auStack_70,0x26);
  puVar8 = (uint64_t *)(alStack_b0[0] + 0x98);
  puVar7 = puVar8;
  puVar2 = *(uint64_t **)(alStack_b0[0] + 0xa8);
  while (puVar2 != (uint64_t *)0x0) {
    if ((ulonglong)puVar2[4] < param_3) {
      puVar2 = (uint64_t *)*puVar2;
    }
    else {
      puVar7 = puVar2;
      puVar2 = (uint64_t *)puVar2[1];
    }
  }
  if ((puVar7 == puVar8) || (param_3 < (ulonglong)puVar7[4])) {
    uStack_108 = auStackX_18;
    puVar7 = (uint64_t *)FUN_180639930(puVar8,alStack_b0,puVar8,puVar7);
    puVar7 = (uint64_t *)*puVar7;
  }
  *(int *)(puVar7 + 7) = (int)param_2[2];
  puVar9 = &system_buffer_ptr;
  if ((void *)param_2[1] != (void *)0x0) {
    puVar9 = (void *)param_2[1];
  }
  strcpy_s(puVar7[6],0x80,puVar9);
  iVar6 = _Mtx_unlock(lVar1);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_128);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180639630(uint8_t *param_1,longlong *param_2,char param_3,char param_4)
void FUN_180639630(uint8_t *param_1,longlong *param_2,char param_3,char param_4)

{
  uint64_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  void *puVar4;
  uint64_t uVar5;
  int8_t auStack_e8 [32];
  uint uStack_c8;
  uint uStack_c0;
  uint uStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  int32_t uStack_78;
  int16_t uStack_74;
  ushort uStack_72;
  int8_t uStack_70;
  byte bStack_6f;
  byte bStack_6e;
  byte bStack_6d;
  int8_t uStack_6c;
  byte bStack_6b;
  byte bStack_6a;
  byte bStack_69;
  int8_t auStack_68 [40];
  ulonglong uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_e8;
  uStack_78 = *(int32_t *)param_1;
  uStack_c8 = *(uint *)((longlong)param_1 + 4);
  uStack_b8 = *(uint *)(param_1 + 1);
  uStack_98 = *(uint *)((longlong)param_1 + 0xc);
  uVar3 = *(uint8_t *)(param_1 + 1);
  uStack_74 = (int16_t)uStack_c8;
  uStack_72 = (ushort)(uStack_c8 >> 0x10);
  uStack_70 = (int8_t)uStack_b8;
  bStack_6f = (byte)(uStack_b8 >> 8);
  bStack_6e = (byte)(uStack_b8 >> 0x10);
  bStack_6d = (byte)(uStack_b8 >> 0x18);
  uStack_6c = (int8_t)uStack_98;
  bStack_6b = (byte)(uStack_98 >> 8);
  bStack_6a = (byte)(uStack_98 >> 0x10);
  bStack_69 = (byte)(uStack_98 >> 0x18);
  if (param_3 == '\0') {
    if (param_4 == '\0') {
      uVar5 = 0x20;
      puVar4 = &unknown_var_6920_ptr;
    }
    else {
      uVar5 = 0x24;
      puVar4 = &unknown_var_6768_ptr;
    }
  }
  else {
    if (param_4 != '\0') {
      uVar2 = CONCAT16(bStack_6a,CONCAT15(bStack_6b,uVar3));
      uVar1 = CONCAT17(bStack_69,uVar2);
      uVar5 = 0x26;
      uStack_88 = (ushort)((ulonglong)uVar1 >> 0x30) & 0xff;
      uStack_98 = (uint)((ulonglong)uVar1 >> 0x20);
      uStack_90 = uStack_98 >> 8 & 0xff;
      uStack_98 = uStack_98 & 0xff;
      uStack_a0 = (uint)((uint7)uVar2 >> 0x18) & 0xff;
      uStack_a8 = (uint)(CONCAT15(bStack_6b,uVar3) >> 0x10) & 0xff;
      uStack_b0 = (uint)((uint5)uVar3 >> 8) & 0xff;
      uStack_b8 = (uint)uVar3 & 0xff;
      uStack_80 = (uint)bStack_69;
      uStack_c0 = (uint)uStack_72;
      uStack_c8 = (uint)(CONCAT26(uStack_72,*param_1) >> 0x20) & 0xffff;
      FUN_180626eb0(auStack_68,0x28,&unknown_var_6672_ptr);
      goto LAB_1806397f4;
    }
    uVar5 = 0x22;
    puVar4 = &unknown_var_6848_ptr;
  }
  uStack_80 = (uint)bStack_69;
  uStack_88 = (uint)bStack_6a;
  uStack_90 = (uint)bStack_6b;
  uStack_98 = uStack_98 & 0xff;
  uStack_a0 = (uint)bStack_6d;
  uStack_a8 = (uint)bStack_6e;
  uStack_b0 = (uint)bStack_6f;
  uStack_b8 = uStack_b8 & 0xff;
  uStack_c0 = (uint)uStack_72;
  uStack_c8 = uStack_c8 & 0xffff;
  FUN_180626eb0(auStack_68,0x28,puVar4,uStack_78);
LAB_1806397f4:
  (**(code **)(*param_2 + 0x18))(param_2,auStack_68,uVar5);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_e8);
}





// 函数: void FUN_180639688(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180639688(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  byte in_AL;
  longlong unaff_RBP;
  longlong in_R11;
  int unaff_R12D;
  longlong *unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  uint uStack0000000000000028;
  uint uStack0000000000000030;
  uint uStack0000000000000038;
  uint uStack0000000000000040;
  uint uStack0000000000000048;
  uint uStack0000000000000050;
  uint uStack0000000000000058;
  uint uStack0000000000000060;
  uint uStack0000000000000068;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_R14;
  uStack0000000000000050 = (uint)((ulonglong)param_1 >> 0x20);
  uStack0000000000000058 = uStack0000000000000050 >> 8 & 0xff;
  uStack0000000000000050 = uStack0000000000000050 & 0xff;
  uStack0000000000000048 = (uint)((ulonglong)param_1 >> 0x18) & 0xff;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  uStack0000000000000040 = (uint)((ulonglong)param_1 >> 0x10) & 0xff;
  uStack0000000000000038 = (uint)((ulonglong)param_1 >> 8) & 0xff;
  uStack0000000000000030 = (uint)param_1 & 0xff;
  uStack0000000000000068 = (uint)(byte)((ulonglong)param_1 >> 0x38);
  uStack0000000000000060 = (uint)in_AL;
  uStack0000000000000028 = (uint)(ushort)((ulonglong)param_2 >> 0x30);
  FUN_180626eb0(unaff_RBP + -9,unaff_R12D + 2,&unknown_var_6672_ptr,param_4,
                (uint)((ulonglong)param_4 >> 0x20) & 0xffff);
  (**(code **)(*unaff_R13 + 0x18))();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1f) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180639738(void)
void FUN_180639738(void)

{
  longlong unaff_RBP;
  longlong *unaff_R13;
  uint uStack0000000000000028;
  uint uStack0000000000000030;
  uint uStack0000000000000038;
  uint uStack0000000000000040;
  uint uStack0000000000000048;
  uint uStack0000000000000050;
  uint uStack0000000000000058;
  uint uStack0000000000000060;
  uint uStack0000000000000068;
  
  uStack0000000000000068 = (uint)*(byte *)(unaff_RBP + -10);
  uStack0000000000000060 = (uint)*(byte *)(unaff_RBP + -0xb);
  uStack0000000000000058 = (uint)*(byte *)(unaff_RBP + -0xc);
  uStack0000000000000050 = (uint)*(byte *)(unaff_RBP + -0xd);
  uStack0000000000000048 = (uint)*(byte *)(unaff_RBP + -0xe);
  uStack0000000000000040 = (uint)*(byte *)(unaff_RBP + -0xf);
  uStack0000000000000038 = (uint)*(byte *)(unaff_RBP + -0x10);
  uStack0000000000000030 = (uint)*(byte *)(unaff_RBP + -0x11);
  uStack0000000000000028 = (uint)*(ushort *)(unaff_RBP + -0x13);
  FUN_180626eb0(unaff_RBP + -9,0x28,&unknown_var_6848_ptr,*(int32_t *)(unaff_RBP + -0x19),
                *(int16_t *)(unaff_RBP + -0x15));
  (**(code **)(*unaff_R13 + 0x18))();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1f) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180639830(uint64_t param_1,ulonglong param_2)
void FUN_180639830(uint64_t param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  
  lVar2 = _DAT_180c8ed70;
  lVar1 = _DAT_180c8ed70 + 200;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  puVar6 = (uint64_t *)(lVar2 + 0x98);
  puVar4 = *(uint64_t **)(lVar2 + 0xa8);
  puVar5 = puVar6;
  if (puVar4 != (uint64_t *)0x0) {
    do {
      if ((ulonglong)puVar4[4] < param_2) {
        puVar4 = (uint64_t *)*puVar4;
      }
      else {
        puVar5 = puVar4;
        puVar4 = (uint64_t *)puVar4[1];
      }
    } while (puVar4 != (uint64_t *)0x0);
    if ((puVar5 != puVar6) && ((ulonglong)puVar5[4] <= param_2)) goto LAB_1806398bc;
  }
  puVar5 = puVar6;
LAB_1806398bc:
  if (puVar5 != puVar6) {
    *(longlong *)(lVar2 + 0xb8) = *(longlong *)(lVar2 + 0xb8) + -1;
    func_0x00018066bd70(puVar5);
    FUN_18066ba00(puVar5,puVar6);
    puVar5[5] = &unknown_var_720_ptr;
    if (puVar5 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar5);
    }
  }
  iVar3 = _Mtx_unlock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180639930(longlong *param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
             ulonglong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint64_t uVar5;
  bool bVar6;
  
  plVar1 = (longlong *)*param_1;
  if ((param_4 == plVar1) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (param_4 = plVar1, (ulonglong)plVar1[4] < *param_5)) {
LAB_1806399a2:
      uVar5 = 0;
      goto LAB_1806399a5;
    }
  }
  else {
    plVar1 = (longlong *)func_0x00018066bd70(param_4);
    if (((ulonglong)param_4[4] < *param_5) && (*param_5 < (ulonglong)plVar1[4])) {
      if (*param_4 == 0) goto LAB_1806399a2;
      uVar5 = 1;
      param_4 = plVar1;
LAB_1806399a5:
      if (param_4 != (longlong *)0x0) {
        FUN_180639ad0(param_1,param_2,param_4,uVar5,param_5);
        return param_2;
      }
    }
  }
  bVar6 = true;
  plVar1 = param_1;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
    do {
      plVar1 = plVar2;
      bVar6 = *param_5 < (ulonglong)plVar1[4];
      if (bVar6) {
        plVar2 = (longlong *)plVar1[1];
      }
      else {
        plVar2 = (longlong *)*plVar1;
      }
    } while (plVar2 != (longlong *)0x0);
  }
  plVar2 = plVar1;
  if (bVar6) {
    if (plVar1 == (longlong *)param_1[1]) {
      uVar3 = *param_5;
      goto LAB_180639a12;
    }
    plVar2 = (longlong *)func_0x00018066b9a0(plVar1);
  }
  uVar3 = *param_5;
  if (uVar3 <= (ulonglong)plVar2[4]) {
    *param_2 = plVar2;
    return param_2;
  }
LAB_180639a12:
  if ((plVar1 == param_1) || (uVar3 < (ulonglong)plVar1[4])) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0xc0,(char)param_1[5]);
  *(ulonglong *)(lVar4 + 0x20) = *param_5;
  *(uint64_t *)(lVar4 + 0x28) = &unknown_var_720_ptr;
  *(uint64_t *)(lVar4 + 0x30) = 0;
  *(int32_t *)(lVar4 + 0x38) = 0;
  *(uint64_t *)(lVar4 + 0x28) = &unknown_var_3432_ptr;
  *(int8_t **)(lVar4 + 0x30) = (int8_t *)(lVar4 + 0x40);
  *(int32_t *)(lVar4 + 0x38) = 0;
  *(int8_t *)(lVar4 + 0x40) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,plVar1,param_1,uVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180639ad0(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_180639ad0(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  ulonglong *param_5)

{
  longlong lVar1;
  int32_t uVar2;
  
  if ((((char)param_4 == '\0') && (param_3 != param_1)) &&
     (*(ulonglong *)(param_3 + 0x20) <= *param_5)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0xc0,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  *(ulonglong *)(lVar1 + 0x20) = *param_5;
  *(uint64_t *)(lVar1 + 0x28) = &unknown_var_720_ptr;
  *(uint64_t *)(lVar1 + 0x30) = 0;
  *(int32_t *)(lVar1 + 0x38) = 0;
  *(uint64_t *)(lVar1 + 0x28) = &unknown_var_3432_ptr;
  *(int8_t **)(lVar1 + 0x30) = (int8_t *)(lVar1 + 0x40);
  *(int32_t *)(lVar1 + 0x38) = 0;
  *(int8_t *)(lVar1 + 0x40) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1,param_3,param_1,uVar2);
}





