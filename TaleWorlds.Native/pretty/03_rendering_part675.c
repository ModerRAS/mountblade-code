#include "TaleWorlds.Native.Split.h"

// 03_rendering_part675.c - 13 个函数

// 函数: void FUN_180652b60(uint64_t param_1,longlong *param_2)
void FUN_180652b60(uint64_t param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int8_t auStack_de8 [184];
  int8_t auStack_d30 [32];
  uint64_t uStack_d10;
  uint64_t uStack_d08;
  int8_t auStack_848 [2048];
  ulonglong uStack_48;
  
  uStack_d10 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_de8;
  FUN_180057110();
  uStack_d08 = 0x180c96740;
  iVar1 = _Mtx_lock(0x180c96740);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  lVar2 = (param_2[1] - *param_2) / 6 + (param_2[1] - *param_2 >> 0x3f);
  if ((int)(lVar2 >> 2) != (int)(lVar2 >> 0x3f)) {
    FUN_180629090(auStack_d30);
                    // WARNING: Subroutine does not return
    memset(auStack_848,0,0x800);
  }
  iVar1 = _Mtx_unlock(0x180c96740);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_de8);
}



uint64_t *
FUN_180653220(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  char *pcVar1;
  void *puVar2;
  longlong lVar3;
  ulonglong uVar5;
  longlong lVar6;
  void *puVar7;
  void *puStack_38;
  longlong lStack_30;
  int32_t uStack_28;
  int32_t uStack_20;
  int32_t uStack_1c;
  longlong lVar4;
  
  lVar6 = 0;
  FUN_180627910(&puStack_38,&system_buffer_ptr,param_3,param_4,0,0xfffffffffffffffe);
  lVar4 = -1;
  do {
    lVar3 = lVar4 + 1;
    pcVar1 = (char *)(lVar4 + 0x180c8f021);
    lVar4 = lVar3;
  } while (*pcVar1 != '\0');
  if (lVar3 == 0) {
    uVar5 = param_1[1] - *param_1 >> 5;
    if ((int)uVar5 == 0) {
      FUN_180627910(param_2,&UNK_180a3dd38);
      puStack_38 = &UNK_180a3c3e0;
      if (lStack_30 == 0) {
        return param_2;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uVar5 = uVar5 & 0xffffffff;
    do {
      puVar2 = *(void **)(lVar6 + 8 + *param_1);
      puVar7 = &system_buffer_ptr;
      if (puVar2 != (void *)0x0) {
        puVar7 = puVar2;
      }
      FUN_180628040(&puStack_38,&UNK_1809fe62c,puVar7);
      lVar6 = lVar6 + 0x20;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  else {
    (**(code **)(puStack_38 + 0x10))(&puStack_38);
  }
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  *(int32_t *)(param_2 + 2) = uStack_28;
  param_2[1] = lStack_30;
  *(int32_t *)((longlong)param_2 + 0x1c) = uStack_1c;
  *(int32_t *)(param_2 + 3) = uStack_20;
  return param_2;
}





// 函数: void FUN_1806533a0(longlong param_1)
void FUN_1806533a0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 == 0) {


// 函数: void FUN_1806533b4(longlong param_1)
void FUN_1806533b4(longlong param_1)

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
  memcpy(&system_data_f020,param_1,(longlong)(int)uVar1);
}





// 函数: void FUN_18065340f(void)
void FUN_18065340f(void)

{
  code *pcVar1;
  
  FUN_1808fcdc8();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



uint64_t *
FUN_180653420(uint64_t *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int8_t auStack_28 [8];
  uint64_t uStack_20;
  int32_t uStack_18;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x10) != 0)) {
    uVar1 = mono_string_to_utf8(param_2);
    FUN_180627910(auStack_28,uVar1,param_3,param_4,uVar2,uVar3);
    mono_free(uVar1);
    *param_1 = &UNK_18098bcb0;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    *param_1 = &UNK_180a3c3e0;
    *(int32_t *)(param_1 + 2) = uStack_18;
    param_1[1] = uStack_20;
    *(int32_t *)((longlong)param_1 + 0x1c) = uStack_c;
    *(int32_t *)(param_1 + 3) = uStack_10;
    return param_1;
  }
  uVar3 = FUN_180628ca0();
  FUN_180627ae0(param_1,uVar3);
  return param_1;
}





// 函数: void FUN_180653530(uint64_t param_1)
void FUN_180653530(uint64_t param_1)

{
  FUN_1806533a0();
  OutputDebugStringA(param_1);
  FUN_180626ee0(&UNK_180a3dd80);


// 函数: void FUN_180653670(longlong param_1,longlong param_2)
void FUN_180653670(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  
  uVar1 = FUN_18062b420(_DAT_180c8ed18,param_1 * param_2,0x19);
                    // WARNING: Subroutine does not return
  memset(uVar1,0,param_1 * param_2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806536d0(void)
void FUN_1806536d0(void)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  
  puVar1 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,3,0xfffffffffffffffe);
  *puVar1 = 1;
  puVar1[1] = FUN_180653580;
  puVar1[2] = FUN_1806535c0;
  puVar1[3] = FUN_180653630;
  puVar1[4] = FUN_180653670;
  mono_set_allocator_vtable(puVar1);
  puVar2 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x13,0x13);
  *(int8_t *)puVar2 = 0;
  FUN_18064e990(puVar2);
  *puVar2 = 0x7372756e;
  puVar2[1] = 0x2d797265;
  puVar2[2] = 0x657a6973;
  puVar2[3] = 0x3931383d;
  *(int16_t *)(puVar2 + 4) = 0x6b32;
  *(int8_t *)((longlong)puVar2 + 0x12) = 0;
  puVar1 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar1 = 0;
  FUN_18064e990(puVar1);
  *puVar1 = 0x5f43475f4f4e4f4d;
  *(int32_t *)(puVar1 + 1) = 0x41524150;
  *(int16_t *)((longlong)puVar1 + 0xc) = 0x534d;
  *(int8_t *)((longlong)puVar1 + 0xe) = 0;
  SetEnvironmentVariableA(puVar1,puVar2);
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180653940(void)
void FUN_180653940(void)

{
  longlong *plVar1;
  int32_t *puVar2;
  int32_t uVar3;
  longlong lVar4;
  uint64_t *puVar5;
  int32_t *puVar6;
  ulonglong uVar7;
  int8_t auStack_d8 [32];
  void *puStack_b8;
  int32_t *puStack_b0;
  uint uStack_a8;
  ulonglong uStack_a0;
  int32_t uStack_98;
  void *puStack_90;
  uint64_t *puStack_88;
  int32_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_50;
  ulonglong uStack_30;
  
  plVar1 = _DAT_180c91020;
  uStack_50 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  uStack_98 = 0;
  puStack_b8 = &UNK_180a3c3e0;
  uStack_a0 = 0;
  puStack_b0 = (int32_t *)0x0;
  uStack_a8 = 0;
  FUN_1806277c0(&puStack_b8,0x15);
  puVar2 = puStack_b0;
  uVar7 = (ulonglong)uStack_a8;
  puVar6 = (int32_t *)((longlong)puStack_b0 + uVar7);
  *puVar6 = 0x656c6154;
  puVar6[1] = 0x6c726f57;
  puVar6[2] = 0x442e7364;
  puVar6[3] = 0x654e746f;
  *(int32_t *)((longlong)puStack_b0 + uVar7 + 0x10) = 0x6c642e74;
  *(int16_t *)((longlong)puStack_b0 + uVar7 + 0x14) = 0x6c;
  uStack_a8 = 0x15;
  puVar6 = (int32_t *)&system_buffer_ptr;
  if (puStack_b0 != (int32_t *)0x0) {
    puVar6 = puStack_b0;
  }
  lVar4 = mono_domain_assembly_open(_DAT_180c91028,puVar6);
  puStack_b8 = &UNK_180a3c3e0;
  if (puVar2 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar2);
  }
  puStack_b0 = (int32_t *)0x0;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  puStack_b8 = &UNK_18098bcb0;
  *plVar1 = lVar4;
  if (lVar4 == 0) {
    FUN_180626ee0(&UNK_180a3ddc0,&system_data_dda8);
    lVar4 = *plVar1;
  }
  lVar4 = mono_assembly_get_image(lVar4);
  plVar1[1] = lVar4;
  if (lVar4 == 0) {
    FUN_180626ee0(&UNK_180a3deb8);
  }
  puStack_90 = &UNK_180a3c3e0;
  uStack_78 = 0;
  puStack_88 = (uint64_t *)0x0;
  uStack_80 = 0;
  puVar5 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar5 = 0;
  puStack_88 = puVar5;
  uVar3 = FUN_18064e990(puVar5);
  uStack_78 = CONCAT44(uStack_78._4_4_,uVar3);
  *puVar5 = 0x6c6c6f72746e6f43;
  *(int16_t *)(puVar5 + 1) = 0x7265;
  *(int8_t *)((longlong)puVar5 + 10) = 0;
  uStack_80 = 10;
  puStack_b8 = &UNK_180a3c3e0;
  uStack_a0 = 0;
  puStack_b0 = (int32_t *)0x0;
  uStack_a8 = 0;
  puVar6 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x12,0x13);
  *(int8_t *)puVar6 = 0;
  puStack_b0 = puVar6;
  uVar3 = FUN_18064e990(puVar6);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar3);
  *puVar6 = 0x656c6154;
  puVar6[1] = 0x6c726f57;
  puVar6[2] = 0x442e7364;
  puVar6[3] = 0x654e746f;
  *(int16_t *)(puVar6 + 4) = 0x74;
  uStack_a8 = 0x11;
  mono_class_from_name(plVar1[1],puVar6,puVar5);
  puStack_b8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar6);
}



uint64_t *
FUN_180653ce0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &UNK_1809fcc28;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0x10;
  strcpy_s(param_2[1],0x80,&UNK_180a3def0,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180653d60(longlong param_1,uint64_t param_2,int param_3)
void FUN_180653d60(longlong param_1,uint64_t param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar3 = lVar1 - lVar2;
  uVar6 = (ulonglong)(iVar7 + param_3);
  if (uVar3 < uVar6) {
    uVar6 = (lVar2 - lVar1) + uVar6;
    if ((ulonglong)(*(longlong *)(param_1 + 0x20) - lVar1) < uVar6) {
      uVar5 = uVar3 * 2;
      if (uVar3 == 0) {
        uVar5 = 1;
      }
      if (uVar5 < uVar3 + uVar6) {
        uVar5 = uVar3 + uVar6;
      }
      if (uVar5 == 0) {
        lVar4 = lVar1;
        lVar1 = 0;
      }
      else {
        lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar5,*(int8_t *)(param_1 + 0x28));
        lVar2 = *(longlong *)(param_1 + 0x10);
        lVar4 = *(longlong *)(param_1 + 0x18);
      }
      if (lVar2 != lVar4) {
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar2,lVar4 - lVar2);
      }
      if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar1,0,uVar6);
      }
      if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(longlong *)(param_1 + 0x10) = lVar1;
      *(ulonglong *)(param_1 + 0x20) = lVar1 + uVar5;
    }
    else if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar1,0,uVar6);
    }
  }
  else {
    lVar1 = lVar2 + uVar6;
  }
  *(longlong *)(param_1 + 0x18) = lVar1;
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy((longlong)iVar7 + *(longlong *)(param_1 + 0x10),param_2,(longlong)param_3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180653dac(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4)
void FUN_180653dac(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4)

{
  longlong in_RAX;
  longlong unaff_RBX;
  longlong lVar1;
  uint64_t unaff_RBP;
  ulonglong uVar2;
  longlong unaff_RSI;
  ulonglong uVar3;
  int unaff_R12D;
  longlong *unaff_R15;
  uint64_t in_stack_00000058;
  
  uVar3 = (param_1 - unaff_RBX) + param_4;
  if ((ulonglong)(in_RAX - unaff_RBX) < uVar3) {
    uVar2 = param_2 * 2;
    if (param_2 == 0) {
      uVar2 = 1;
    }
    if (uVar2 < param_2 + uVar3) {
      uVar2 = param_2 + uVar3;
    }
    if (uVar2 == 0) {
      lVar1 = unaff_RBX;
      unaff_RBX = 0;
    }
    else {
      unaff_RBX = FUN_18062b420(_DAT_180c8ed18,uVar2,*(int8_t *)(unaff_RSI + 0x28));
      param_1 = *(longlong *)(unaff_RSI + 0x10);
      lVar1 = *unaff_R15;
    }
    if (param_1 != lVar1) {
                    // WARNING: Subroutine does not return
      memmove(unaff_RBX,param_1,lVar1 - param_1);
    }
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memset(unaff_RBX,0,uVar3);
    }
    if (*(longlong *)(unaff_RSI + 0x10) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(longlong *)(unaff_RSI + 0x10) = unaff_RBX;
    *(ulonglong *)(unaff_RSI + 0x20) = unaff_RBX + uVar2;
  }
  else {
    in_stack_00000058 = unaff_RBP;
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memset();
    }
  }
  *unaff_R15 = unaff_RBX;
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy((longlong)unaff_R12D + *(longlong *)(unaff_RSI + 0x10),in_stack_00000058);
  return;
}





// 函数: void FUN_180653e6b(void)
void FUN_180653e6b(void)

{
  uint64_t unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int unaff_R12D;
  uint64_t *unaff_R15;
  
  if (unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *unaff_R15 = unaff_RBX;
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy((longlong)unaff_R12D + *(longlong *)(unaff_RSI + 0x10));
  return;
}





// 函数: void FUN_180653e8b(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_180653e8b(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  longlong unaff_RSI;
  int unaff_R12D;
  
  *(longlong *)(unaff_RSI + 0x18) = param_1 + param_4;
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy((longlong)unaff_R12D + *(longlong *)(unaff_RSI + 0x10));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180653ec0(int *param_1)
void FUN_180653ec0(int *param_1)

{
  if ((*param_1 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



