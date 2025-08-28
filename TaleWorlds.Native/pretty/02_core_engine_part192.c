#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part192.c - 13 个函数

// 函数: void FUN_1801749d0(uint64_t param_1,longlong *param_2)
void FUN_1801749d0(uint64_t param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  void *puVar4;
  int8_t auStack_208 [32];
  void **ppuStack_1e8;
  uint64_t uStack_1e0;
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  void *puStack_1c8;
  int8_t *puStack_1c0;
  int32_t uStack_1b8;
  int8_t auStack_1b0 [256];
  longlong lStack_b0;
  ulonglong uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int8_t uStack_88;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  code *pcStack_70;
  code *pcStack_68;
  int8_t auStack_60 [16];
  code *pcStack_50;
  code *pcStack_48;
  ulonglong uStack_18;
  
  uStack_1d0 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_208;
  lVar1 = *param_2;
  uStack_1d8 = (int8_t *)param_2[5];
  *(int32_t *)(param_2 + 4) = 1;
  LOCK();
  *uStack_1d8 = 0;
  UNLOCK();
  puStack_1c8 = &unknown_var_2008_ptr;
  puStack_1c0 = auStack_1b0;
  uStack_1b8 = 0;
  auStack_1b0[0] = 0;
  pcStack_70 = (code *)0x0;
  pcStack_68 = _guard_check_icall;
  ppuStack_1e8 = (void **)auStack_60;
  pcStack_50 = (code *)0x0;
  pcStack_48 = _guard_check_icall;
  uStack_90 = 0xffffffffffffffff;
  uStack_a8 = 0xffffffffffffffff;
  lStack_b0 = 0xffffffffffffffff;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  puVar4 = &system_buffer_ptr;
  if (*(void **)(lVar1 + 8) != (void *)0x0) {
    puVar4 = *(void **)(lVar1 + 8);
  }
  uStack_1e0 = param_2;
  FUN_1800693f0(&puStack_1c8,puVar4);
  lStack_b0 = param_2[1];
  uStack_a8 = (ulonglong)*(uint *)(param_2 + 2);
  uStack_98 = 0;
  if (pcStack_70 != (code *)0x0) {
    (*pcStack_70)(&uStack_80,0,0);
  }
  pcStack_70 = (code *)&unknown_var_8832_ptr;
  pcStack_68 = FUN_180179e40;
  uStack_80 = (int32_t)uStack_1e0;
  uStack_7c = uStack_1e0._4_4_;
  uStack_78 = (int32_t)uStack_1d8;
  uStack_74 = uStack_1d8._4_4_;
  if (pcStack_50 != (code *)0x0) {
    (*pcStack_50)(auStack_60,0,0);
  }
  pcStack_50 = (code *)&unknown_var_8752_ptr;
  pcStack_48 = _guard_check_icall;
  uStack_88 = 0xc0;
  lVar1 = *(longlong *)(core_system_data_memory + 8);
  lVar3 = FUN_18006d0b0(lVar1 + 200);
  if (lVar3 != 0) {
    FUN_18006d6c0(lVar3,&puStack_1c8);
  }
  iVar2 = _Cnd_signal(lVar1 + 0x330);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  ppuStack_1e8 = (void **)auStack_60;
  if (pcStack_50 != (code *)0x0) {
    (*pcStack_50)(auStack_60,0,0);
  }
  ppuStack_1e8 = (void **)&uStack_80;
  if (pcStack_70 != (code *)0x0) {
    (*pcStack_70)(&uStack_80,0,0);
  }
  ppuStack_1e8 = &puStack_1c8;
  puStack_1c8 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_208);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180174c70(uint64_t param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  void *puVar7;
  int8_t auStackX_18 [16];
  
  lVar1 = *param_2;
  puVar7 = &system_buffer_ptr;
  if (*(void **)(lVar1 + 8) != (void *)0x0) {
    puVar7 = *(void **)(lVar1 + 8);
  }
  cVar5 = FUN_18063ba00(lVar1 + 0x20,puVar7,5,0x105,0xfffffffffffffffe);
  if (cVar5 != '\0') {
    lVar4 = param_2[2];
    lVar2 = param_2[1];
    lVar3 = param_2[3];
    iVar6 = _Mtx_lock(lVar1 + 0x30);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }
    SetFilePointerEx(*(uint64_t *)(lVar1 + 0x20),lVar2,auStackX_18,0);
    FUN_18063bc80(lVar1 + 0x20,lVar3,(int)lVar4);
    iVar6 = _Mtx_unlock(lVar1 + 0x30);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }
  }
  if (*(longlong *)(lVar1 + 0x20) != -1) {
    LOCK();
    SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
    UNLOCK();
    CloseHandle(*(uint64_t *)(lVar1 + 0x20));
    *(uint64_t *)(lVar1 + 0x20) = 0xffffffffffffffff;
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x000180174e52)
// WARNING: Removing unreachable block (ram,0x000180174e57)
// WARNING: Removing unreachable block (ram,0x000180174e5c)
// WARNING: Removing unreachable block (ram,0x000180174e5f)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180174d60(uint64_t param_1,uint64_t param_2)
void FUN_180174d60(uint64_t param_1,uint64_t param_2)

{
  longlong lVar1;
  int iVar2;
  int32_t uVar3;
  int8_t *puVar4;
  longlong lVar5;
  int iVar6;
  int8_t auStack_1a8 [32];
  void *puStack_188;
  int8_t *puStack_180;
  int32_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_160;
  longlong lStack_158;
  char acStack_148 [256];
  ulonglong uStack_48;
  
  uStack_160 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1a8;
  wcstombs(acStack_148,param_2,0x100);
  puStack_188 = &unknown_var_3456_ptr;
  uStack_170 = 0;
  puStack_180 = (int8_t *)0x0;
  uStack_178 = 0;
  lVar1 = -1;
  do {
    lVar5 = lVar1;
    lVar1 = lVar5 + 1;
  } while (acStack_148[lVar5 + 1] != '\0');
  if ((int)(lVar5 + 1) == 0) {
    uStack_178 = 0;
    lStack_158 = FUN_18062b1e0(system_memory_pool_ptr,0x80,8,3);
                    // WARNING: Subroutine does not return
    memset(lStack_158 + 0x14,0,0x6c);
  }
  iVar6 = (int)lVar5 + 2;
  iVar2 = iVar6;
  if (iVar6 < 0x10) {
    iVar2 = 0x10;
  }
  puVar4 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)iVar2,0x13);
  *puVar4 = 0;
  puStack_180 = puVar4;
  uVar3 = FUN_18064e990(puVar4);
  uStack_170 = CONCAT44(uStack_170._4_4_,uVar3);
                    // WARNING: Subroutine does not return
  memcpy(puVar4,acStack_148,iVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180174f70(uint64_t param_1,uint64_t *param_2)
void FUN_180174f70(uint64_t param_1,uint64_t *param_2)

{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  _Mtx_destroy_in_situ();
  if (param_2[4] != -1) {
    LOCK();
    SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
    UNLOCK();
    CloseHandle(param_2[4]);
    param_2[4] = 0xffffffffffffffff;
  }
  *param_2 = &unknown_var_3456_ptr;
  if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[1] = 0;
  *(int32_t *)(param_2 + 3) = 0;
  *param_2 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_2);
}



uint64_t *
FUN_180175020(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_5240_ptr;
  *param_1 = &unknown_var_5168_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180175120(uint64_t param_1,longlong param_2)
void FUN_180175120(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  int8_t auStack_238 [32];
  int8_t auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_238;
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(short *)(param_2 + lVar1 * 2) != 0);
  wcstombs(auStack_218,param_2,(longlong)((int)lVar1 + 1));
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180175180(uint64_t param_1,longlong param_2)
void FUN_180175180(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int8_t auStack_168 [32];
  uint64_t uStack_148;
  void *puStack_138;
  int8_t *puStack_130;
  uint uStack_128;
  int8_t auStack_120 [136];
  char acStack_98 [128];
  ulonglong uStack_18;
  
  uStack_148 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_168;
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(short *)(param_2 + lVar1 * 2) != 0);
  wcstombs(acStack_98,param_2,(longlong)((int)lVar1 + 1));
  puStack_138 = &unknown_var_3432_ptr;
  puStack_130 = auStack_120;
  auStack_120[0] = 0;
  uStack_128 = 9;
  strcpy_s(auStack_120,0x80,&unknown_var_3560_ptr);
  lVar1 = -1;
  do {
    lVar3 = lVar1;
    lVar1 = lVar3 + 1;
  } while (acStack_98[lVar3 + 1] != '\0');
  iVar2 = (int)(lVar3 + 1);
  if ((0 < iVar2) && (uStack_128 + iVar2 < 0x7f)) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_130 + uStack_128,acStack_98,(longlong)((int)lVar3 + 2));
  }
  core_system_config_memory = core_system_config_memory + 1;
  puStack_138 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801752b0(uint64_t param_1,longlong param_2)
void FUN_1801752b0(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int8_t auStack_168 [32];
  uint64_t uStack_148;
  void *puStack_138;
  int8_t *puStack_130;
  uint uStack_128;
  int8_t auStack_120 [136];
  char acStack_98 [128];
  ulonglong uStack_18;
  
  uStack_148 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_168;
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(short *)(param_2 + lVar1 * 2) != 0);
  wcstombs(acStack_98,param_2,(longlong)((int)lVar1 + 1));
  puStack_138 = &unknown_var_3432_ptr;
  puStack_130 = auStack_120;
  auStack_120[0] = 0;
  uStack_128 = 9;
  strcpy_s(auStack_120,0x80,&unknown_var_3560_ptr);
  lVar1 = -1;
  do {
    lVar3 = lVar1;
    lVar1 = lVar3 + 1;
  } while (acStack_98[lVar3 + 1] != '\0');
  iVar2 = (int)(lVar3 + 1);
  if ((0 < iVar2) && (uStack_128 + iVar2 < 0x7f)) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_130 + uStack_128,acStack_98,(longlong)((int)lVar3 + 2));
  }
  puStack_138 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_168);
}



uint64_t * FUN_1801753d0(uint64_t *param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_5128_ptr;
  uVar3 = 0;
  plVar2 = param_1 + 5;
  do {
    plVar1 = (longlong *)*plVar2;
    *plVar2 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    uVar3 = uVar3 + 1;
    plVar2 = plVar2 + 1;
  } while (uVar3 < 3);
  param_1[0xc] = &unknown_var_3456_ptr;
  if (param_1[0xd] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xd] = 0;
  *(int32_t *)(param_1 + 0xf) = 0;
  param_1[0xc] = &unknown_var_720_ptr;
  FUN_1808fc8a8(param_1 + 5,8,3,FUN_18004ca00,uVar4);
  if ((param_2 & 1) != 0) {
    free(param_1,0x80);
  }
  return param_1;
}



uint64_t * FUN_1801754b0(uint64_t *param_1)

{
  *param_1 = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180175500(longlong param_1,longlong param_2)
void FUN_180175500(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  void *puStack_38;
  int32_t uStack_30;
  void *puStack_28;
  
  uVar1 = *(ulonglong *)(param_1 + 0x40);
  uVar8 = (uVar1 + 4) % 3;
  FUN_180175700(param_1,param_2);
  lVar7 = param_1 + uVar8 * 8;
  if (*(longlong *)(param_1 + 0x28 + uVar8 * 8) != 0) {
    lVar2 = *(longlong *)(system_message_buffer + 0x1cd8);
    lVar6 = FUN_18023a940();
    plVar3 = *(longlong **)(lVar2 + 0x8400);
    iVar5 = (**(code **)(*plVar3 + 0x70))(plVar3,*(uint64_t *)(lVar6 + 8),0,1,0,&puStack_38);
    if (iVar5 < 0) {
      FUN_180220810(iVar5,&unknown_var_1856_ptr);
    }
    lVar2 = *(longlong *)(lVar7 + 0x28);
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xa8))
                      (*(longlong **)(param_1 + 0x50),puStack_38,*(int16_t *)(lVar2 + 0x32c),
                       *(int16_t *)(lVar2 + 0x32e),uStack_30,param_1 + 8);
    if (iVar5 != 0) {
      puStack_38 = &unknown_var_3640_ptr;
      puStack_28 = &unknown_var_3520_ptr;
      uStack_30 = 0x191;
      (**(code **)**(uint64_t **)(param_1 + 0x48))
                (*(uint64_t **)(param_1 + 0x48),5,&unknown_var_3576_ptr,&puStack_38);
    }
    plVar3 = *(longlong **)(*(longlong *)(system_message_buffer + 0x1cd8) + 0x8400);
    pcVar4 = *(code **)(*plVar3 + 0x78);
    lVar7 = FUN_18023a940(*(uint64_t *)(lVar7 + 0x28));
    (*pcVar4)(plVar3,*(uint64_t *)(lVar7 + 8),0);
    if (*(longlong *)(param_2 + 0x99e0) != 0) {
      FUN_18029e450(*(uint64_t *)(system_message_buffer + 0x1cd8),
                    *(uint64_t *)(param_1 + 0x28 + (uVar1 % 3) * 8),0,0,1,
                    *(uint64_t *)(**(longlong **)(*(longlong *)(param_2 + 0x99e0) + 0x50) + 0x428)
                    ,0,0,1);
    }
  }
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180175572(void)
void FUN_180175572(void)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  longlong in_RAX;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R14;
  longlong unaff_R15;
  void *in_stack_00000050;
  int32_t in_stack_00000058;
  void *in_stack_00000060;
  
  lVar5 = *(longlong *)(in_RAX + 0x1cd8);
  lVar4 = FUN_18023a940();
  plVar1 = *(longlong **)(lVar5 + 0x8400);
  iVar3 = (**(code **)(*plVar1 + 0x70))(plVar1,*(uint64_t *)(lVar4 + 8),0,1,0);
  if (iVar3 < 0) {
    FUN_180220810(iVar3,&unknown_var_1856_ptr);
  }
  iVar3 = (**(code **)(**(longlong **)(unaff_RSI + 0x50) + 0xa8))
                    (*(longlong **)(unaff_RSI + 0x50),in_stack_00000050,
                     *(int16_t *)(*(longlong *)(unaff_R14 + 0x28) + 0x32c),
                     *(int16_t *)(*(longlong *)(unaff_R14 + 0x28) + 0x32e),in_stack_00000058);
  if (iVar3 != 0) {
    in_stack_00000050 = &unknown_var_3640_ptr;
    in_stack_00000060 = &unknown_var_3520_ptr;
    in_stack_00000058 = 0x191;
    (**(code **)**(uint64_t **)(unaff_RSI + 0x48))
              (*(uint64_t **)(unaff_RSI + 0x48),5,&unknown_var_3576_ptr,&stack0x00000050);
  }
  plVar1 = *(longlong **)(*(longlong *)(system_message_buffer + 0x1cd8) + 0x8400);
  pcVar2 = *(code **)(*plVar1 + 0x78);
  lVar5 = FUN_18023a940(*(uint64_t *)(unaff_R14 + 0x28));
  (*pcVar2)(plVar1,*(uint64_t *)(lVar5 + 8),0);
  if (*(longlong *)(unaff_R15 + 0x99e0) != 0) {
    FUN_18029e450(*(uint64_t *)(system_message_buffer + 0x1cd8),
                  *(uint64_t *)(unaff_RSI + 0x28 + unaff_RBP * 8),0,0,1);
  }
  *(longlong *)(unaff_RSI + 0x40) = *(longlong *)(unaff_RSI + 0x40) + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180175686(void)
void FUN_180175686(void)

{
  longlong in_RAX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint64_t uStack0000000000000028;
  int32_t uStack0000000000000030;
  int32_t uStack0000000000000038;
  int32_t uStack0000000000000040;
  
  uStack0000000000000040 = 1;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000028 = *(uint64_t *)(**(longlong **)(in_RAX + 0x50) + 0x428);
  FUN_18029e450(*(uint64_t *)(system_message_buffer + 0x1cd8),
                *(uint64_t *)(unaff_RSI + 0x28 + unaff_RBP * 8),0,0,1);
  *(longlong *)(unaff_RSI + 0x40) = *(longlong *)(unaff_RSI + 0x40) + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180175700(longlong param_1,longlong param_2)
void FUN_180175700(longlong param_1,longlong param_2)

{
  short sVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int32_t *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  int32_t *puVar8;
  int32_t uVar9;
  uint uVar10;
  int32_t uVar11;
  int8_t auStack_198 [32];
  int8_t uStack_178;
  void *puStack_168;
  int32_t *puStack_160;
  int32_t uStack_158;
  uint64_t uStack_150;
  uint uStack_148;
  ulonglong uStack_140;
  int32_t uStack_138;
  int32_t uStack_134;
  int32_t uStack_130;
  uint64_t uStack_12c;
  int32_t uStack_124;
  int32_t uStack_120;
  longlong *plStack_118;
  int32_t uStack_110;
  int8_t uStack_10c;
  uint64_t uStack_108;
  longlong *plStack_100;
  longlong *plStack_f8;
  uint64_t uStack_f0;
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_198;
  if (*(longlong *)(param_2 + 0x99e0) != 0) {
    lVar2 = *(longlong *)(**(longlong **)(*(longlong *)(param_2 + 0x99e0) + 0x50) + 0x428);
    if (lVar2 != 0) {
      uVar9 = 7;
      if (*(char *)(param_1 + 0x58) != '\0') {
        uVar9 = 9;
      }
      uStack_148 = (uint)*(ushort *)(lVar2 + 0x32c);
      sVar1 = *(short *)(lVar2 + 0x32e);
      plVar7 = (longlong *)(param_1 + 0x28);
      lVar2 = *plVar7;
      if (((lVar2 == 0) || (*(ushort *)(lVar2 + 0x32c) != uStack_148)) ||
         (*(short *)(lVar2 + 0x32e) != sVar1)) {
        uVar10 = 0;
        do {
          uStack_138 = 1;
          uStack_12c = 0;
          uStack_108 = 0;
          plStack_118 = (longlong *)0x0;
          uStack_110 = 0xffffffff;
          uStack_10c = 0;
          uStack_140 = (ulonglong)CONCAT24(sVar1,uStack_148);
          uStack_120 = 0x100;
          _uStack_134 = CONCAT44(uVar9,1);
          uStack_124 = 2;
          puStack_168 = &unknown_var_3456_ptr;
          uStack_150 = 0;
          puStack_160 = (int32_t *)0x0;
          uStack_158 = 0;
          puVar5 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x19,0x13);
          *(int8_t *)puVar5 = 0;
          puStack_160 = puVar5;
          uVar3 = FUN_18064e990(puVar5);
          *puVar5 = 0x755f7476;
          puVar5[1] = 0x735f7661;
          puVar5[2] = 0x69676174;
          puVar5[3] = 0x745f676e;
          *(uint64_t *)(puVar5 + 4) = 0x3a3a657275747865;
          *(int8_t *)(puVar5 + 6) = 0;
          uStack_158 = 0x18;
          iVar4 = *(int *)(param_1 + 0x70);
          uStack_150._0_4_ = uVar3;
          if (0 < iVar4) {
            if ((iVar4 != -0x18) && (uVar3 < iVar4 + 0x19U)) {
              uStack_178 = 0x13;
              puVar5 = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar5,iVar4 + 0x19U,0x10);
              puStack_160 = puVar5;
              uStack_150._0_4_ = FUN_18064e990(puVar5);
              iVar4 = *(int *)(param_1 + 0x70);
            }
                    // WARNING: Subroutine does not return
            memcpy(puVar5 + 6,*(uint64_t *)(param_1 + 0x68),(longlong)(iVar4 + 1));
          }
          puStack_e8 = &unknown_var_3432_ptr;
          puStack_e0 = auStack_d0;
          auStack_d0[0] = 0;
          uStack_d8 = 0x18;
          puVar8 = (int32_t *)&system_buffer_ptr;
          if (puVar5 != (int32_t *)0x0) {
            puVar8 = puVar5;
          }
          uVar11 = strcpy_s(auStack_d0,0x80,puVar8);
          plVar6 = (longlong *)FUN_1800b2450(uVar11,&plStack_f8,&puStack_e8,&uStack_140);
          lVar2 = *plVar6;
          *plVar6 = 0;
          plStack_100 = (longlong *)*plVar7;
          *plVar7 = lVar2;
          if (plStack_100 != (longlong *)0x0) {
            (**(code **)(*plStack_100 + 0x38))();
          }
          if (plStack_f8 != (longlong *)0x0) {
            (**(code **)(*plStack_f8 + 0x38))();
          }
          puStack_e8 = &unknown_var_720_ptr;
          puStack_168 = &unknown_var_3456_ptr;
          if (puVar5 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar5);
          }
          puStack_160 = (int32_t *)0x0;
          uStack_150 = (ulonglong)uStack_150._4_4_ << 0x20;
          puStack_168 = &unknown_var_720_ptr;
          if (plStack_118 != (longlong *)0x0) {
            (**(code **)(*plStack_118 + 0x38))();
          }
          uVar10 = uVar10 + 1;
          plVar7 = plVar7 + 1;
        } while (uVar10 < 3);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_198);
}





// 函数: void FUN_180175a30(longlong param_1)
void FUN_180175a30(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  
  uVar3 = 0;
  plVar2 = (longlong *)(param_1 + 0x28);
  do {
    plVar1 = (longlong *)*plVar2;
    *plVar2 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    uVar3 = uVar3 + 1;
    plVar2 = plVar2 + 1;
  } while (uVar3 < 3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180175aa0(uint64_t *param_1)
void FUN_180175aa0(uint64_t *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint64_t *puVar6;
  longlong *plVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  ulonglong uVar10;
  int8_t auStack_c8 [32];
  uint64_t *puStack_a8;
  uint64_t *puStack_a0;
  uint64_t *puStack_98;
  uint64_t uStack_90;
  uint64_t *puStack_88;
  uint64_t *puStack_80;
  int32_t uStack_78;
  uint64_t uStack_70;
  uint64_t *puStack_68;
  int8_t auStack_60 [28];
  int8_t uStack_44;
  int8_t uStack_3c;
  ulonglong uStack_38;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_c8;
  *param_1 = &unknown_var_4920_ptr;
  puStack_a0 = param_1 + 1;
  puStack_98 = param_1;
  puStack_68 = param_1;
  _Mtx_init_in_situ(puStack_a0,2);
  puVar9 = param_1 + 0xb;
  param_1[0xe] = 0;
  *(int32_t *)(param_1 + 0x10) = 3;
  *puVar9 = puVar9;
  param_1[0xc] = puVar9;
  param_1[0xd] = 0;
  *(int8_t *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  puVar9 = param_1 + 0x11;
  *puVar9 = &unknown_var_5088_ptr;
  *puVar9 = &unknown_var_4880_ptr;
  puVar1 = param_1 + 0x12;
  *puVar1 = &unknown_var_5056_ptr;
  *puVar1 = &unknown_var_5024_ptr;
  puVar8 = param_1 + 0x13;
  *puVar8 = &unknown_var_4768_ptr;
  puStack_98 = param_1 + 0x14;
  *puStack_98 = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(int32_t *)(param_1 + 0x17) = 3;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(int32_t *)(param_1 + 0x1b) = 3;
  puStack_a8 = param_1 + 0x20;
  puStack_a0 = puVar8;
  _Mtx_init_in_situ(puStack_a8,2);
  puVar2 = param_1 + 0x2a;
  param_1[0x2d] = 0;
  *(int32_t *)(param_1 + 0x2f) = 3;
  *puVar2 = puVar2;
  param_1[0x2b] = puVar2;
  param_1[0x2c] = 0;
  *(int8_t *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  puVar2 = param_1 + 0x30;
  param_1[0x33] = 0;
  *(int32_t *)(param_1 + 0x35) = 3;
  *puVar2 = puVar2;
  param_1[0x31] = puVar2;
  param_1[0x32] = 0;
  *(int8_t *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  puVar2 = param_1 + 0x36;
  param_1[0x39] = 0;
  *(int32_t *)(param_1 + 0x3b) = 3;
  *puVar2 = puVar2;
  param_1[0x37] = puVar2;
  param_1[0x38] = 0;
  *(int8_t *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  puVar2 = param_1 + 0x3f;
  param_1[0x42] = 0;
  *(int32_t *)(param_1 + 0x44) = 3;
  *puVar2 = puVar2;
  param_1[0x40] = puVar2;
  param_1[0x41] = 0;
  *(int8_t *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  puVar2 = param_1 + 0x45;
  *puVar2 = &unknown_var_4968_ptr;
  *puVar2 = &unknown_var_4824_ptr;
  puStack_a0 = param_1 + 0x46;
  param_1[0x49] = 0;
  *(int32_t *)(param_1 + 0x4b) = 3;
  *puStack_a0 = puStack_a0;
  param_1[0x47] = puStack_a0;
  param_1[0x48] = 0;
  *(int8_t *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  *(int32_t *)(param_1 + 0x4d) = 0;
  puStack_a8 = puVar2;
  lVar5 = _GetPerformanceManager_Performance_Graphine__YAPEAVIPerformanceManager_12_XZ();
  if (lVar5 != 0) {
    puVar6 = (uint64_t *)
             _GetPerformanceManager_Performance_Graphine__YAPEAVIPerformanceManager_12_XZ();
    (**(code **)*puVar6)(puVar6,puVar8);
    plVar7 = (longlong *)
             _GetPerformanceManager_Performance_Graphine__YAPEAVIPerformanceManager_12_XZ();
    (**(code **)(*plVar7 + 0x58))(plVar7,0);
  }
  *(int16_t *)(param_1 + 0x3e) = 0;
  _RegisterAllocator_Graphine__YA_AW4Enum_Error_1_PEAVIAllocator_1__Z(param_1);
  puVar8 = (uint64_t *)_GetLogManager_Graphine__YAPEAVILogManager_1_XZ();
  (**(code **)*puVar8)(puVar8,puVar9);
  iVar3 = _Initialize_Granite_Graphine__YA_AW4Enum_Error_2__J_Z(0x1450);
  if (iVar3 != 0) {
    FUN_180626ee0(&unknown_var_3688_ptr,iVar3);
  }
  __0DirectX11DeviceOptions_DX11_Granite_Graphine__QEAA_XZ(auStack_60);
  uStack_44 = 1;
  uStack_3c = 0;
  lVar5 = _CreateGraphicsDevice_DX11_Granite_Graphine__YAPEAVIDirectX11Device_123_PEAUID3D11Device__PEAVIResourceCallbacks_123_PEBUDirectX11DeviceOptions_123__Z
                    (*(uint64_t *)(system_message_buffer + 0x1d78),puVar2,auStack_60);
  param_1[0x1c] = lVar5;
  param_1[0x4c] = lVar5;
  if (lVar5 == 0) {
    FUN_180626ee0(&unknown_var_3800_ptr);
  }
  puVar9 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,8,8,3);
  *puVar9 = &unknown_var_5168_ptr;
  *puVar9 = &unknown_var_5240_ptr;
  puStack_a8 = puVar9;
  __0ContextCreationParameters_Granite_Graphine__QEAA_XZ(&uStack_90);
  uStack_90 = param_1[0x1c];
  uStack_78 = 0x80;
  param_1[0x1d] = 0;
  puStack_88 = puVar1;
  puStack_80 = puVar9;
  iVar3 = _CreateContext_Granite_Graphine__YA_AW4Enum_Error_2_AEBUContextCreationParameters_12_AEAPEAVIContext_12__Z
                    (&uStack_90,param_1 + 0x1d);
  plVar7 = (longlong *)param_1[0x1d];
  if ((plVar7 == (longlong *)0x0) || (iVar3 != 0)) {
    FUN_180626ee0(&unknown_var_3760_ptr,iVar3);
    plVar7 = (longlong *)param_1[0x1d];
  }
  iVar3 = (**(code **)(*plVar7 + 0x100))(plVar7,&unknown_var_3888_ptr);
  if (iVar3 != 0) {
    FUN_180626ee0(&unknown_var_3848_ptr,iVar3);
  }
  __0ContextBudget_Granite_Graphine__QEAA_XZ(&puStack_98);
  puStack_98 = (uint64_t *)CONCAT44(puStack_98._4_4_,0x400000);
  (**(code **)(*(longlong *)param_1[0x1d] + 0x158))((longlong *)param_1[0x1d],&puStack_98);
  uVar10 = 0xc0;
  if (*(int *)(SYSTEM_STATE_MANAGER + 0x380) != 4) {
    uVar4 = 0x30;
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x380) == 3) {
      uVar4 = 0xc0;
    }
    uVar10 = (ulonglong)uVar4;
  }
  (**(code **)(*(longlong *)param_1[0x1d] + 0x70))
            ((longlong *)param_1[0x1d],uVar10 << 0x14,param_1 + 0x1f);
  (**(code **)(*(longlong *)param_1[0x1f] + 0x18))((longlong *)param_1[0x1f],2);
  param_1[0x1e] = 0;
  *(int32_t *)((longlong)param_1 + 0x1ec) = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_c8);
}



uint64_t *
FUN_180175ee0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_5088_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t * FUN_180175f20(uint64_t *param_1,uint param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180179f00(param_1 + 1,param_1[3],param_3,param_4,0xfffffffffffffffe);
  *param_1 = &unknown_var_4968_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x40);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180175f80(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  longlong lVar4;
  int8_t auStack_28 [32];
  
  lVar4 = *system_main_module_state;
  uVar2 = FUN_180627ae0(auStack_28,param_3,param_3,param_4,0,0xfffffffffffffffe);
  iVar1 = FUN_180142220(lVar4,uVar2);
  if ((iVar1 < 0) ||
     (lVar4 = *(longlong *)(*system_main_module_state + 0x888),
     (ulonglong)(*(longlong *)(*system_main_module_state + 0x890) - lVar4 >> 5) <= (ulonglong)(longlong)iVar1)
     ) {
    lVar4 = FUN_180628ca0();
  }
  else {
    lVar4 = (longlong)iVar1 * 0x20 + lVar4;
  }
  FUN_180627ae0(param_2,lVar4);
  iVar1 = *(int *)(param_2 + 0x10) + 9;
  FUN_1806277c0(param_2,iVar1);
  puVar3 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar3 = 0x73746553656c6954;
  *(int16_t *)(puVar3 + 1) = 0x2f;
  *(int *)(param_2 + 0x10) = iVar1;
  return param_2;
}





// 函数: void FUN_180176060(longlong param_1)
void FUN_180176060(longlong param_1)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(param_1 + 0x100);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0xd8))();
  iVar1 = _Mtx_unlock(param_1 + 0x100);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



