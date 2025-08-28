#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part033.c - 16 个函数

// 函数: void FUN_1803c504a(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803c504a(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  int32_t *unaff_RBX;
  longlong unaff_RDI;
  int32_t *puVar4;
  longlong unaff_R13;
  uint64_t *unaff_R15;
  char cStack0000000000000080;
  uint uStack0000000000000084;
  
  FUN_18066c220(param_1,&stack0x00000080,param_3,param_4,1);
  plVar1 = *(longlong **)(unaff_RDI + 0x30);
  uVar3 = (longlong)(int)plVar1[2] + 0xfU & 0xfffffffffffffff0;
  puVar4 = (int32_t *)(*plVar1 + uVar3);
  *(int *)(plVar1 + 2) = (int)uVar3 + 0x10;
  *puVar4 = *unaff_RBX;
  puVar4[1] = 0;
  *(uint64_t *)(puVar4 + 2) = 0;
  if (cStack0000000000000080 != '\0') {
    plVar1 = *(longlong **)(unaff_RDI + 0x30);
    uVar3 = (longlong)(int)plVar1[2] + 7U & 0xfffffffffffffff8;
    *(uint *)(plVar1 + 2) = (int)uVar3 + (uStack0000000000000084 + 1) * 8;
                    // WARNING: Subroutine does not return
    memset(*plVar1 + uVar3,0,(ulonglong)uStack0000000000000084 * 8);
  }
  *(uint64_t *)(puVar4 + 2) = *(uint64_t *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(int32_t **)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = puVar4;
  lVar2 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = puVar4;
  unaff_R15[1] = lVar2 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}






// 函数: void FUN_1803c50a8(void)
void FUN_1803c50a8(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  uint64_t in_stack_00000080;
  
  plVar1 = *(longlong **)(unaff_RDI + 0x30);
  uVar2 = (longlong)(int)plVar1[2] + 7U & 0xfffffffffffffff8;
  *(uint *)(plVar1 + 2) = (int)uVar2 + (in_stack_00000080._4_4_ + 1) * 8;
                    // WARNING: Subroutine does not return
  memset(*plVar1 + uVar2,0,(ulonglong)in_stack_00000080._4_4_ * 8);
}






// 函数: void FUN_1803c5158(uint64_t param_1,uint64_t param_2)
void FUN_1803c5158(uint64_t param_1,uint64_t param_2)

{
  uint64_t in_RAX;
  uint64_t *unaff_R15;
  
  *unaff_R15 = in_RAX;
  unaff_R15[1] = param_2;
  *(int8_t *)(unaff_R15 + 2) = 0;
  return;
}






// 函数: void FUN_1803c5174(void)
void FUN_1803c5174(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong *unaff_R15;
  
  *(uint64_t *)(unaff_R12 + 8) = *(uint64_t *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(longlong *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803c51c0(uint64_t param_1,longlong *param_2,int param_3)
void FUN_1803c51c0(uint64_t param_1,longlong *param_2,int param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int8_t auStack_c8 [32];
  int32_t uStack_a8;
  uint64_t uStack_a0;
  longlong *plStack_98;
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  ulonglong uStack_28;
  
  uVar1 = system_system_data_config;
  uStack_a0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_c8;
  uStack_a8 = 0;
  param_3 = param_3 * 4;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x1c;
  plStack_98 = param_2;
  strcpy_s(auStack_70,0x40,&system_data_fc60);
  FUN_1802037e0();
  puStack_88 = &unknown_var_720_ptr;
  uVar2 = FUN_18062b1e0(system_memory_pool_ptr,param_3,0x10,0x21);
  FUN_1803c52f0(uVar1,param_2);
  *(uint64_t *)(*param_2 + 0x10) = uVar2;
  *(int *)(*param_2 + 0x18) = param_3;
  *(int *)(*param_2 + 0x1c) = param_3;
  *(int8_t *)(*param_2 + 0x20) = 0;
  uStack_a8 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1803c52f0(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (longlong)&unknown_var_3552_ptr;
    *plVar3 = (longlong)&unknown_var_3696_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&unknown_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&unknown_var_2968_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(longlong **)(lVar1 + -8);
    *(longlong *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (longlong)&unknown_var_3552_ptr;
    *plVar3 = (longlong)&unknown_var_3696_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&unknown_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&unknown_var_2968_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1803c5480(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c06900;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x38,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      puVar3[6] = puVar1[6];
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1803c5580(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c06840;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x38,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      puVar3[6] = puVar1[6];
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



int8_t FUN_1803c56d0(longlong param_1,uint64_t param_2,longlong *param_3)

{
  int8_t uVar1;
  
  param_3 = (longlong *)*param_3;
  FUN_18063a180(*param_3,*(uint64_t *)(param_1 + 8),(longlong)(int)param_3[1]);
  ((uint64_t *)*param_3)[1] = *(uint64_t *)*param_3;
  LOCK();
  uVar1 = *(int8_t *)param_3[3];
  *(int8_t *)param_3[3] = 1;
  UNLOCK();
  LOCK();
  *(int8_t *)param_3[2] = 1;
  UNLOCK();
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1803c5710(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c068c0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x20,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1803c57f0(longlong *param_1,uint64_t *param_2,longlong *param_3,uint64_t param_4,
             uint64_t param_5,longlong param_6)

{
  longlong lVar1;
  longlong *plVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int32_t uVar5;
  uint64_t uVar6;
  longlong lStack_68;
  longlong lStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  void *puStack_48;
  longlong lStack_40;
  int32_t uStack_30;
  
  uVar6 = 0xfffffffffffffffe;
  plVar2 = (longlong *)0x0;
  lVar1 = *param_3;
  lStack_60 = param_3[1];
  uStack_58 = (int32_t)param_3[2];
  uStack_54 = *(int32_t *)((longlong)param_3 + 0x14);
  uStack_50 = (int32_t)param_3[3];
  uStack_4c = *(int32_t *)((longlong)param_3 + 0x1c);
  puStack_48 = (void *)param_3[4];
  lStack_68 = lVar1;
  if (lVar1 - 2U < 2) {
    plVar2 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,0x10,8,3);
    *plVar2 = (longlong)&unknown_var_3856_ptr;
    *(bool *)(plVar2 + 1) = lVar1 == 3;
  }
  param_1[1] = *param_1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(int8_t *)(param_2 + 3) = 0;
  uVar3 = FUN_180628ca0();
  FUN_180627ae0(param_2 + 4,uVar3);
  lVar1 = lStack_60;
  uVar5 = 1;
  if (plVar2 == (longlong *)0x0) {
    (**(code **)(param_2[4] + 0x10))(param_2 + 4,&unknown_var_3064_ptr);
    *(int8_t *)(param_2 + 3) = 1;
    param_2[2] = 0;
    param_2[1] = 0;
    return param_2;
  }
  if (param_6 == 0) {
    FUN_1800f6ad0(param_1,lStack_60);
    param_6 = *param_1;
  }
  puVar4 = (uint64_t *)
           (**(code **)(*plVar2 + 0x18))
                     (plVar2,&lStack_68,param_3 + 5,CONCAT44(uStack_54,uStack_58) + -0x28,param_6,
                      lVar1,uVar5,uVar6);
  *param_2 = *puVar4;
  param_2[1] = puVar4[1];
  param_2[2] = puVar4[2];
  *(int8_t *)(param_2 + 3) = *(int8_t *)(puVar4 + 3);
  FUN_18005d190(param_2 + 4,puVar4 + 4);
  puStack_48 = &unknown_var_3456_ptr;
  if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_40 = 0;
  uStack_30 = 0;
  puStack_48 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar2);
}






// 函数: void FUN_1803c59c0(uint64_t *param_1)
void FUN_1803c59c0(uint64_t *param_1)

{
  *param_1 = &unknown_var_4912_ptr;
  *param_1 = &unknown_var_4872_ptr;
  return;
}



uint64_t *
FUN_1803c59f0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_4912_ptr;
  *param_1 = &unknown_var_4872_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t FUN_1803c5a40(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  ulonglong uVar4;
  int8_t auStack_88 [16];
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  uint uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int8_t uStack_38;
  int16_t uStack_36;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  
  uStack_78 = *(int32_t *)(param_1 + 0x18);
  uStack_70 = (int32_t)
              ((*(longlong **)(param_1 + 0x10))[1] - **(longlong **)(param_1 + 0x10) >> 6);
  uStack_74 = *(int32_t *)(param_1 + 0x1c);
  uStack_6c = param_3;
  if (param_3 != 0) {
    puVar3 = (int32_t *)(param_2 + 0x18);
    uVar4 = (ulonglong)param_3;
    do {
      lVar1 = *(longlong *)(param_1 + 0x10);
      uStack_68 = puVar3[-6];
      uStack_64 = puVar3[-5];
      uStack_60 = puVar3[-4];
      puVar2 = *(int32_t **)(lVar1 + 8);
      uStack_5c = puVar3[-3];
      uStack_58 = puVar3[-2];
      uStack_54 = puVar3[-1];
      uStack_50 = *puVar3;
      uStack_36 = *(int16_t *)((longlong)puVar3 + 0x1a);
      uStack_34 = puVar3[7];
      uStack_4c = 0x7f7fffff;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0x3f000000;
      uStack_30 = 0x3f000000;
      uStack_2c = 0x3f19999a;
      uStack_38 = 0;
      if (puVar2 < *(int32_t **)(lVar1 + 0x10)) {
        *(int32_t **)(lVar1 + 8) = puVar2 + 0x10;
        *puVar2 = uStack_68;
        puVar2[1] = uStack_64;
        puVar2[2] = uStack_60;
        puVar2[3] = uStack_5c;
        puVar2[4] = uStack_58;
        puVar2[5] = uStack_54;
        puVar2[6] = uStack_50;
        *(uint64_t *)(puVar2 + 7) = 0x7f7fffff;
        *(uint64_t *)(puVar2 + 9) = 0;
        puVar2[0xb] = 0x3f000000;
        *(int8_t *)(puVar2 + 0xc) = 0;
        *(int16_t *)((longlong)puVar2 + 0x32) = uStack_36;
        puVar2[0xd] = uStack_34;
        puVar2[0xe] = 0x3f000000;
        puVar2[0xf] = 0x3f19999a;
      }
      else {
        FUN_1803cef40(lVar1,&uStack_68);
      }
      puVar3 = puVar3 + 0x10;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_180396dd0(*(uint64_t *)(param_1 + 8),auStack_88);
  *(int8_t *)(param_1 + 0x20) = 1;
  return 1;
}



uint64_t FUN_1803c5a7c(uint64_t param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  int32_t *puVar2;
  uint64_t unaff_RBX;
  int32_t *puVar3;
  uint64_t unaff_RBP;
  longlong unaff_RSI;
  uint64_t unaff_RDI;
  longlong in_R11;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int8_t auStackX_20 [8];
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  int8_t uStack0000000000000070;
  int16_t uStack0000000000000072;
  int32_t uStack0000000000000074;
  int32_t uStack0000000000000078;
  int32_t uStack000000000000007c;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RBX;
  puVar3 = (int32_t *)(param_2 + 0x18);
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBP;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RDI;
  *(int32_t *)(in_R11 + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0xc) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x28) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x24) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x20) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x1c) = unaff_XMM7_Dd;
  param_3 = param_3 & 0xffffffff;
  do {
    lVar1 = *(longlong *)(unaff_RSI + 0x10);
    uStack0000000000000040 = puVar3[-6];
    uStack0000000000000044 = puVar3[-5];
    uStack0000000000000048 = puVar3[-4];
    puVar2 = *(int32_t **)(lVar1 + 8);
    uStack000000000000004c = puVar3[-3];
    uStack0000000000000050 = puVar3[-2];
    uStack0000000000000054 = puVar3[-1];
    uStack0000000000000058 = *puVar3;
    uStack0000000000000072 = *(int16_t *)((longlong)puVar3 + 0x1a);
    uStack0000000000000074 = puVar3[7];
    uStack000000000000005c = 0x7f7fffff;
    uStack0000000000000060 = 0;
    uStack0000000000000064 = 0;
    uStack0000000000000068 = 0;
    uStack000000000000006c = 0x3f000000;
    uStack0000000000000078 = 0x3f000000;
    uStack000000000000007c = 0x3f19999a;
    uStack0000000000000070 = 0;
    if (puVar2 < *(int32_t **)(lVar1 + 0x10)) {
      *(int32_t **)(lVar1 + 8) = puVar2 + 0x10;
      *puVar2 = uStack0000000000000040;
      puVar2[1] = uStack0000000000000044;
      puVar2[2] = uStack0000000000000048;
      puVar2[3] = uStack000000000000004c;
      puVar2[4] = uStack0000000000000050;
      puVar2[5] = uStack0000000000000054;
      puVar2[6] = uStack0000000000000058;
      *(uint64_t *)(puVar2 + 7) = 0x7f7fffff;
      *(uint64_t *)(puVar2 + 9) = 0;
      puVar2[0xb] = 0x3f000000;
      *(int8_t *)(puVar2 + 0xc) = 0;
      *(int16_t *)((longlong)puVar2 + 0x32) = uStack0000000000000072;
      puVar2[0xd] = uStack0000000000000074;
      puVar2[0xe] = 0x3f000000;
      puVar2[0xf] = 0x3f19999a;
    }
    else {
      FUN_1803cef40(lVar1,&stack0x00000040);
    }
    puVar3 = puVar3 + 0x10;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  FUN_180396dd0(*(uint64_t *)(unaff_RSI + 8),auStackX_20);
  *(int8_t *)(unaff_RSI + 0x20) = 1;
  return 1;
}



int8_t FUN_1803c5bd1(void)

{
  longlong unaff_RSI;
  int8_t auStackX_20 [8];
  
  FUN_180396dd0(*(uint64_t *)(unaff_RSI + 8),auStackX_20);
  *(int8_t *)(unaff_RSI + 0x20) = 1;
  return 1;
}



uint64_t *
FUN_1803c5bf0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_4848_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}






// 函数: void FUN_1803c5c30(uint64_t *param_1)
void FUN_1803c5c30(uint64_t *param_1)

{
  *param_1 = &unknown_var_4848_ptr;
  return;
}



uint64_t *
FUN_1803c5c50(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uStackX_10;
  uint64_t *puStackX_18;
  
  *param_1 = &unknown_var_8736_ptr;
  *param_1 = &unknown_var_4744_ptr;
  puStackX_18 = param_1 + 1;
  *puStackX_18 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 3;
  uStackX_10 = param_2;
  FUN_18005ea90(puStackX_18,&uStackX_10,param_3,param_4,0xfffffffffffffffe);
  param_1[5] = 0;
  return param_1;
}



uint64_t * FUN_1803c5cc0(uint64_t *param_1,uint param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint64_t uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_4744_ptr;
  uVar2 = 0;
  plVar1 = param_1 + 1;
  lVar5 = *plVar1;
  uVar4 = uVar2;
  if (param_1[2] - lVar5 >> 3 != 0) {
    do {
      if (*(uint64_t **)(uVar2 + lVar5) != (uint64_t *)0x0) {
        (**(code **)**(uint64_t **)(uVar2 + lVar5))();
        *(uint64_t *)(uVar2 + *plVar1) = 0;
      }
      uVar3 = (int)uVar4 + 1;
      uVar2 = uVar2 + 8;
      lVar5 = *plVar1;
      uVar4 = (ulonglong)uVar3;
    } while ((ulonglong)(longlong)(int)uVar3 < (ulonglong)(param_1[2] - lVar5 >> 3));
  }
  if (*plVar1 == 0) {
    *param_1 = &unknown_var_8736_ptr;
    if ((param_2 & 1) != 0) {
      free(param_1,0x30,lVar5,param_4,uVar6);
    }
    return param_1;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1803c5d90(longlong param_1)
void FUN_1803c5d90(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_1803cec30();
  if ((1 < *(ulonglong *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
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
  return;
}






// 函数: void FUN_1803c5dd0(longlong param_1)
void FUN_1803c5dd0(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_1803cec30();
  if ((1 < *(ulonglong *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
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
  return;
}



uint64_t *
FUN_1803c5e10(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_4760_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x10,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}






// 函数: void FUN_1803c5e50(uint64_t *param_1)
void FUN_1803c5e50(uint64_t *param_1)

{
  *param_1 = &unknown_var_4760_ptr;
  return;
}



uint64_t *
FUN_1803c5e80(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_4680_ptr;
  param_1[2] = 0;
  *param_1 = &unknown_var_4552_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}






// 函数: void FUN_1803c5ed0(uint64_t param_1,uint64_t *param_2)
void FUN_1803c5ed0(uint64_t param_1,uint64_t *param_2)

{
  longlong lVar1;
  
  if (param_2 != (uint64_t *)0x0) {
    lVar1 = __RTCastToVoid(param_2);
    (**(code **)*param_2)(param_2,0);
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar1);
    }
  }
  return;
}






// 函数: void FUN_1803c5edd(uint64_t param_1,uint64_t *param_2)
void FUN_1803c5edd(uint64_t param_1,uint64_t *param_2)

{
  longlong lVar1;
  
  lVar1 = __RTCastToVoid();
  (**(code **)*param_2)(param_2,0);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar1);
  }
  return;
}






// 函数: void FUN_1803c5f0f(void)
void FUN_1803c5f0f(void)

{
  return;
}



uint64_t *
FUN_1803c5f10(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_4128_ptr;
  FUN_1803c8ef0();
  _Mtx_destroy_in_situ();
  if (param_1[0x36] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_1803c5fe0(param_1 + 0x26);
  param_1[0x1d] = &unknown_var_4912_ptr;
  param_1[0x1d] = &unknown_var_4872_ptr;
  param_1[0x1b] = &unknown_var_4760_ptr;
  FUN_1801c2640(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x238,param_3,param_4,uVar1);
  }
  return param_1;
}






// 函数: void FUN_1803c5fe0(longlong param_1)
void FUN_1803c5fe0(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_18004b730();
  FUN_1803cec30(param_1 + 0x20);
  if ((1 < *(ulonglong *)(param_1 + 0x30)) &&
     (puVar2 = *(uint64_t **)(param_1 + 0x28), puVar2 != (uint64_t *)0x0)) {
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
  return;
}



float FUN_1803c6040(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(**(longlong **)(param_1 + 8) + 0x68))();
  return fVar1 * *(float *)(param_1 + 0x10);
}



float FUN_1803c6060(longlong param_1)

{
  short *psVar1;
  
  psVar1 = (short *)(**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  return (float)(int)*psVar1 * *(float *)(param_1 + 0x10);
}



uint64_t *
FUN_1803c6090(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_4064_ptr;
  (*(code *)**(uint64_t **)param_1[1])();
  *param_1 = &unknown_var_4096_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18,param_3,param_4,uVar1);
  }
  return param_1;
}






// 函数: void FUN_1803c60f0(uint64_t *param_1)
void FUN_1803c60f0(uint64_t *param_1)

{
  *param_1 = &unknown_var_3600_ptr;
  *param_1 = &unknown_var_4032_ptr;
  return;
}



uint64_t *
FUN_1803c6120(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_3600_ptr;
  *param_1 = &unknown_var_4032_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}






// 函数: void FUN_1803c6170(uint64_t *param_1)
void FUN_1803c6170(uint64_t *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 800))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1803c6190(uint64_t *param_1,uint64_t param_2)

{
  int32_t *puVar1;
  
  *param_1 = &unknown_var_3552_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_8336_ptr;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *param_1 = &unknown_var_3632_ptr;
  param_1[5] = param_2;
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  puVar1 = (int32_t *)FUN_18062b1e0(system_memory_pool_ptr,0x10,8,6,0xfffffffffffffffe);
  *puVar1 = 0xebcdebcd;
  puVar1[1] = 0;
  *(uint64_t **)(puVar1 + 2) = param_1;
  *(int32_t **)(param_1[5] + 0x10) = puVar1;
  return param_1;
}






