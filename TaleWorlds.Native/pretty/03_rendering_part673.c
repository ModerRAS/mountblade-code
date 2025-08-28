#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part673.c - 30 个函数

// 函数: void FUN_18064f980(void)
void FUN_18064f980(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  
  FUN_18064fcc0();
  cVar2 = FUN_18064f640();
  if (cVar2 == '\0') {
    LOCK();
    UNLOCK();
    lVar3 = render_system_data_config;
    do {
      if (render_system_data_config + 1 <= lVar3) break;
      LOCK();
      bVar4 = lVar3 != render_system_data_config;
      lVar1 = render_system_data_config + 1;
      if (bVar4) {
        lVar3 = render_system_data_config;
        lVar1 = render_system_data_config;
      }
      render_system_data_config = lVar1;
      UNLOCK();
    } while (bVar4);
    LOCK();
    render_system_data_config = render_system_data_config + 1;
    UNLOCK();
    render_system_data_config = render_system_data_config + 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * FUN_18064f9e0(uint64_t *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int32_t uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  void *puVar9;
  void *puVar10;
  bool bVar11;
  
  uVar5 = render_system_control_config;
  LOCK();
  lVar3 = render_system_data_config + -1;
  UNLOCK();
  lVar7 = render_system_data_config;
  do {
    if (render_system_data_config + -1 <= lVar7) break;
    LOCK();
    bVar11 = lVar7 != render_system_data_config;
    lVar6 = render_system_data_config + -1;
    if (bVar11) {
      lVar7 = render_system_data_config;
      lVar6 = render_system_data_config;
    }
    render_system_data_config = lVar6;
    UNLOCK();
  } while (bVar11);
  LOCK();
  puVar10 = render_system_data_config + 1;
  UNLOCK();
  puVar9 = render_system_data_config;
  render_system_data_config = lVar3;
  if (((void **)param_1[0x164] == &ExceptionList) && (param_1 != (uint64_t *)&unknown_var_7056_ptr)) {
    if ((render_system_control_config == (void **)0x0) || (render_system_control_config == &ExceptionList)) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    puVar9 = &unknown_var_7056_ptr;
    if (bVar11) {
      puVar9 = (void *)0x180bf4000;
    }
    render_system_data_config = puVar10;
    *(void **)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 0x10) =
         puVar9;
    FlsSetValue(uVar5);
    puVar9 = (void *)*param_1;
    plVar1 = *(longlong **)(puVar9 + 0x10);
    puVar10 = render_system_data_config;
    if (plVar1 != (longlong *)&unknown_var_7056_ptr) {
      plVar4 = *(longlong **)(*plVar1 + 0x18);
      while (plVar4 != (longlong *)0x0) {
        plVar2 = (longlong *)plVar4[0x17c];
        bVar11 = plVar4 != plVar1;
        plVar4 = plVar2;
        if (bVar11) {
          FUN_18064e400();
        }
      }
      if (plVar1 != (longlong *)0x180bf4000) {
        FUN_18064e0d0(plVar1,2);
      }
      puVar9 = &system_ptr_ed80;
      puVar10 = (void *)(*plVar1 + 0x3d8);
      if (puVar10 != &system_ptr_ed80) {
        FUN_1806470a0();
                    // WARNING: Subroutine does not return
        memset(puVar10,0,0x240);
      }
      puVar10 = render_system_data_config;
      if (plVar1 != (longlong *)0x180bf4000) {
        uVar8 = 0x1208;
        if (0x1208 < ~render_system_control_config) {
          uVar8 = render_system_control_config + 0x1207;
          if ((render_system_control_config & render_system_control_config - 1) == 0) {
            uVar8 = ~(render_system_control_config - 1) & uVar8;
          }
          else {
            uVar8 = uVar8 - uVar8 % render_system_control_config;
          }
        }
        puVar9 = (void *)FUN_180648840(plVar1,uVar8,1);
        puVar10 = render_system_data_config;
      }
    }
  }
  render_system_data_config = puVar10;
  return puVar9;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18064fa37(void)
void FUN_18064fa37(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int32_t uVar4;
  ulonglong uVar5;
  void *puVar6;
  longlong *unaff_RBX;
  bool bVar7;
  
  uVar4 = render_system_control_config;
  if (unaff_RBX != (longlong *)&unknown_var_7056_ptr) {
    if ((render_system_control_config == (void **)0x0) || (render_system_control_config == &ExceptionList)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    puVar6 = &unknown_var_7056_ptr;
    if (bVar7) {
      puVar6 = (void *)0x180bf4000;
    }
    *(void **)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 0x10) =
         puVar6;
    FlsSetValue(uVar4);
    plVar1 = *(longlong **)(*unaff_RBX + 0x10);
    if (plVar1 != (longlong *)&unknown_var_7056_ptr) {
      plVar3 = *(longlong **)(*plVar1 + 0x18);
      while (plVar3 != (longlong *)0x0) {
        plVar2 = (longlong *)plVar3[0x17c];
        bVar7 = plVar3 != plVar1;
        plVar3 = plVar2;
        if (bVar7) {
          FUN_18064e400();
        }
      }
      if (plVar1 != (longlong *)0x180bf4000) {
        FUN_18064e0d0(plVar1,2);
      }
      puVar6 = (void *)(*plVar1 + 0x3d8);
      if (puVar6 != &system_ptr_ed80) {
        FUN_1806470a0();
                    // WARNING: Subroutine does not return
        memset(puVar6,0,0x240);
      }
      if (plVar1 != (longlong *)0x180bf4000) {
        uVar5 = 0x1208;
        if (0x1208 < ~render_system_control_config) {
          uVar5 = render_system_control_config + 0x1207;
          if ((render_system_control_config & render_system_control_config - 1) == 0) {
            uVar5 = ~(render_system_control_config - 1) & uVar5;
          }
          else {
            uVar5 = uVar5 - uVar5 % render_system_control_config;
          }
        }
        FUN_180648840(plVar1,uVar5,1);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18064fa54(void)
void FUN_18064fa54(void)

{
  longlong *plVar1;
  longlong *plVar2;
  int32_t uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *unaff_RBX;
  longlong *unaff_RSI;
  void *puVar6;
  bool in_ZF;
  bool bVar7;
  
  uVar3 = render_system_control_config;
  if ((in_ZF) || (render_system_control_config == &ExceptionList)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  plVar5 = unaff_RSI;
  if (bVar7) {
    plVar5 = (longlong *)0x180bf4000;
  }
  *(longlong **)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 0x10) = plVar5
  ;
  FlsSetValue(uVar3);
  plVar5 = *(longlong **)(*unaff_RBX + 0x10);
  if (plVar5 != unaff_RSI) {
    plVar2 = *(longlong **)(*plVar5 + 0x18);
    while (plVar2 != (longlong *)0x0) {
      plVar1 = (longlong *)plVar2[0x17c];
      bVar7 = plVar2 != plVar5;
      plVar2 = plVar1;
      if (bVar7) {
        FUN_18064e400();
      }
    }
    if (plVar5 != (longlong *)0x180bf4000) {
      FUN_18064e0d0(plVar5,2);
    }
    puVar6 = (void *)(*plVar5 + 0x3d8);
    if (puVar6 != &system_ptr_ed80) {
      FUN_1806470a0();
                    // WARNING: Subroutine does not return
      memset(puVar6,0,0x240);
    }
    if (plVar5 != (longlong *)0x180bf4000) {
      uVar4 = 0x1208;
      if (0x1208 < ~render_system_control_config) {
        uVar4 = render_system_control_config + 0x1207;
        if ((render_system_control_config & render_system_control_config - 1) == 0) {
          uVar4 = ~(render_system_control_config - 1) & uVar4;
        }
        else {
          uVar4 = uVar4 - uVar4 % render_system_control_config;
        }
      }
      FUN_180648840(plVar5,uVar4,1);
    }
  }
  return;
}





// 函数: void FUN_18064fb83(void)
void FUN_18064fb83(void)

{
  return;
}





// 函数: void FUN_18064fb88(void)
void FUN_18064fb88(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18064fbc0(void)
void FUN_18064fbc0(void)

{
  int32_t *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_18064f4b0();


// 函数: void FUN_18064fcc0(void)
void FUN_18064fcc0(void)

{
  longlong lVar1;
  int32_t uVar2;
  longlong *plVar3;
  int8_t auStack_40 [4];
  uint uStack_3c;
  
  if (system_ptr_ecef != '\0') {
    return;
  }


// 函数: void FUN_18064fe90(void)
void FUN_18064fe90(void)

{
  longlong *plVar1;
  void *puVar2;
  
  if (system_ptr_ecef == '\0') {
    return;
  }
  if (system_ptr_9131 != '\0') {
    return;
  }


// 函数: void FUN_180650050(code *param_1)
void FUN_180650050(code *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  
  LOCK();
  UNLOCK();
  if (render_system_config < 0x8001) {
    uVar2 = render_system_config;
    if (0x8000 < render_system_config) {
      render_system_config = render_system_config + 1;
      FUN_1808fcdc8();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    uVar2 = 0x8000;
  }
  render_system_config = render_system_config + 1;
  *(int8_t *)(uVar2 + 0x180c96890) = 0;
  (*param_1)(0x180c96890,0);
  *(int8_t *)(uVar2 + 0x180c96890) = 10;
  return;
}





// 函数: void FUN_180650080(void)
void FUN_180650080(void)

{
  code *in_RAX;
  longlong unaff_RBX;
  
  *(int8_t *)(unaff_RBX + 0x180c96890) = 0;
  (*in_RAX)(0x180c96890,0);
  *(int8_t *)(unaff_RBX + 0x180c96890) = 10;
  return;
}





// 函数: void FUN_1806500a6(void)
void FUN_1806500a6(void)

{
  code *pcVar1;
  
  FUN_1808fcdc8();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806500b0(int8_t *param_1)
void FUN_1806500b0(int8_t *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int8_t *puVar4;
  
  if (system_ptr_66d8 == '\0') {
    _cputs();
  }
  uVar1 = render_system_config;
  if ((param_1 != (int8_t *)0x0) && (render_system_config < 0x8000)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_1[lVar2] != '\0');
    if (lVar2 != 0) {
      LOCK();
      uVar1 = render_system_config + lVar2;
      UNLOCK();
      if (render_system_config < 0x8000) {
        lVar3 = 0x7fff - render_system_config;
        if (render_system_config + lVar2 < 0x8000) {
          lVar3 = lVar2;
        }
        puVar4 = (int8_t *)(render_system_config + 0x180c96890);
        render_system_config = uVar1;
        if (system_ptr_f000 == '\0') {
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
          memcpy();
          return;
        }
        for (; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar4 = *param_1;
          param_1 = param_1 + 1;
          puVar4 = puVar4 + 1;
        }
        return;
      }
    }
  }
  render_system_config = uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806500f0(code *param_1,uint64_t param_2,longlong param_3,uint64_t param_4)
void FUN_1806500f0(code *param_1,uint64_t param_2,longlong param_3,uint64_t param_4)

{
  uint64_t uVar1;
  code *pcVar2;
  char *pcVar3;
  
  if (((param_1 != (code *)0x0) && (pcVar2 = (code *)__acrt_iob_func(1), param_1 != pcVar2)) &&
     (pcVar2 = (code *)__acrt_iob_func(2), param_1 != pcVar2)) {
    if (param_3 != 0) {
      (*param_1)(param_3,param_2);
    }
    (*param_1)(param_4,param_2);
    return;
  }
  uVar1 = render_system_config;
  pcVar3 = (char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8)
                   + 8);
  if (*pcVar3 == '\0') {
    *pcVar3 = '\x01';
    pcVar2 = render_system_config;
    if (render_system_config == (code *)0x0) {
      pcVar2 = (code *)0x18064ffe0;
    }
    if (param_3 != 0) {
      (*pcVar2)(param_3,uVar1);
    }
    (*pcVar2)(param_4,uVar1);
    *pcVar3 = '\0';
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18065016d(void)
void FUN_18065016d(void)

{
  code *pcVar1;
  int8_t *unaff_RSI;
  longlong unaff_RDI;
  
  *unaff_RSI = 1;
  pcVar1 = render_system_config;
  if (render_system_config == (code *)0x0) {
    pcVar1 = (code *)0x18064ffe0;
  }
  if (unaff_RDI != 0) {
    (*pcVar1)();
  }
  (*pcVar1)();
  *unaff_RSI = 0;
  return;
}





// 函数: void FUN_1806501ae(void)
void FUN_1806501ae(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806501d0(uint64_t param_1,uint64_t param_2,uint64_t param_3,longlong param_4,
void FUN_1806501d0(uint64_t param_1,uint64_t param_2,uint64_t param_3,longlong param_4,
                  uint64_t param_5)

{
  ulonglong *puVar1;
  char *pcVar2;
  int8_t auStack_278 [32];
  uint64_t uStack_258;
  uint64_t uStack_250;
  int8_t auStack_248 [512];
  ulonglong uStack_48;
  
  if (param_4 != 0) {
    uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_278;
    pcVar2 = (char *)(*(longlong *)
                       ((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 8);
    if (*pcVar2 == '\0') {
      *pcVar2 = '\x01';
      puVar1 = (ulonglong *)func_0x00018004b9a0();
      uStack_250 = param_5;
      uStack_258 = 0;
      __stdio_common_vsprintf(*puVar1 | 2,auStack_248,0x1ff,param_4);
      *pcVar2 = '\0';
      FUN_1806500f0(param_1,param_2,param_3,auStack_248);
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_278);
  }
  return;
}





// 函数: void FUN_180650219(longlong param_1)
void FUN_180650219(longlong param_1)

{
  longlong in_RAX;
  ulonglong *puVar1;
  char *pcVar2;
  ulonglong in_stack_00000230;
  
  pcVar2 = (char *)(*(longlong *)(in_RAX + param_1 * 8) + 8);
  if (*pcVar2 == '\0') {
    *pcVar2 = '\x01';
    puVar1 = (ulonglong *)func_0x00018004b9a0();
    __stdio_common_vsprintf(*puVar1 | 2,&stack0x00000030,0x1ff);
    *pcVar2 = '\0';
    FUN_1806500f0();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000230 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1806502a2(void)
void FUN_1806502a2(void)

{
  return;
}





// 函数: void FUN_1806502b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1806502b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uStackX_20;
  
  uStackX_20 = param_4;
  FUN_1806501d0(param_1,param_2,0,param_3,&uStackX_20);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806502e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1806502e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_10 = param_2;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  if (render_system_control_config == 0) {
    FUN_180650490(&system_ptr_bdb0);
  }
  if (render_system_control_config != 0) {
    FUN_1806501d0(0,0,&unknown_var_9496_ptr,param_1,&uStackX_10);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180650340(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180650340(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  bool bVar1;
  longlong lVar2;
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_10 = param_2;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  if (render_system_control_config == 0) {
    FUN_180650490(&system_ptr_bd80);
  }
  if (render_system_control_config == 0) {
    if (render_system_control_config == 0) {
      FUN_180650490(&system_ptr_bdb0);
    }
    if (render_system_control_config == 0) {
      return;
    }
  }
  LOCK();
  lVar2 = render_system_config + 1;
  UNLOCK();
  bVar1 = render_system_config <= render_system_control_config;
  render_system_config = lVar2;
  if (bVar1) {
    FUN_1806501d0(0,0,&unknown_var_9448_ptr,param_1,&uStackX_10);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806503d0(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1806503d0(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  bool bVar1;
  ulonglong uVar2;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  if (render_system_control_config == 0) {
    FUN_180650490(&system_ptr_bd80);
  }
  if (render_system_control_config == 0) {
    if (render_system_control_config == 0) {
      FUN_180650490(&system_ptr_bdb0);
    }
    if (render_system_control_config == 0) goto LAB_180650464;
  }
  LOCK();
  uVar2 = render_system_config + 1;
  UNLOCK();
  bVar1 = render_system_config <= render_system_control_config;
  render_system_config = uVar2;
  if (bVar1) {
    FUN_1806501d0(0,0,&unknown_var_9424_ptr,param_2,&uStackX_18);
  }
LAB_180650464:
  if (render_system_config != (code *)0x0) {
    (*render_system_config)(param_1,render_system_config);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180650490(int *param_1)
void FUN_180650490(int *param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int8_t auStack_e8 [32];
  char *apcStack_c8 [2];
  char acStack_b8 [80];
  char acStack_68 [80];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_e8;
  acStack_b8[0] = '\0';
  strncpy(acStack_b8,&unknown_var_9648_ptr,0x40);
  acStack_b8[0x40] = 0;
  strncat(acStack_b8,*(uint64_t *)(param_1 + 4),0x40);
  acStack_b8[0x40] = 0;
  acStack_68[0] = '\0';
  uVar3 = GetEnvironmentVariableA(acStack_b8,acStack_68,0x41);
  if ((ulonglong)uVar3 - 1 < 0x40) {
    uVar7 = 0xffffffffffffffff;
    do {
      uVar6 = uVar7 + 1;
      lVar5 = uVar7 + 1;
      uVar7 = uVar6;
    } while (acStack_68[lVar5] != '\0');
    if (0x40 < uVar6) {
      uVar6 = 0x40;
    }
    uVar7 = 0;
    if (uVar6 != 0) {
      do {
        cVar2 = toupper((int)acStack_68[uVar7]);
        acStack_b8[uVar7] = cVar2;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
    if (0x40 < uVar6) {
      FUN_1808fcdc8();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    acStack_b8[uVar6] = '\0';
    if ((acStack_b8[0] == '\0') || (lVar5 = strstr(&unknown_var_9664_ptr,acStack_b8), lVar5 != 0)) {
      *param_1 = 1;
    }
    else {
      lVar5 = strstr(&unknown_var_9568_ptr,acStack_b8);
      if (lVar5 == 0) {
        apcStack_c8[0] = acStack_b8;
        iVar4 = strtol(acStack_b8,apcStack_c8,10);
        if (param_1[2] == 8) {
          cVar2 = *apcStack_c8[0];
          if (cVar2 == 'K') {
            apcStack_c8[0] = apcStack_c8[0] + 1;
          }
          else if (cVar2 == 'M') {
            iVar4 = iVar4 << 10;
            apcStack_c8[0] = apcStack_c8[0] + 1;
          }
          else if (cVar2 == 'G') {
            iVar4 = iVar4 << 0x14;
            apcStack_c8[0] = apcStack_c8[0] + 1;
          }
          else {
            iVar4 = (int)((longlong)iVar4 + 0x3ffU >> 10);
          }
          if (*apcStack_c8[0] == 'B') {
            apcStack_c8[0] = apcStack_c8[0] + 1;
          }
        }
        if (*apcStack_c8[0] != '\0') {
          FUN_180650340(&unknown_var_9584_ptr,*(uint64_t *)(param_1 + 4),acStack_b8);
          param_1[1] = 1;
          goto FUN_1806505b5;
        }
        *param_1 = iVar4;
      }
      else {
        *param_1 = 0;
      }
    }
    param_1[1] = 2;
  }
  else if (system_ptr_66d8 == '\0') {
    param_1[1] = 1;
  }
FUN_1806505b5:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_e8);
}





// 函数: void FUN_180650513(void)
void FUN_180650513(void)

{
  char cVar1;
  code *pcVar2;
  int8_t uVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong unaff_RBP;
  int *unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar8;
  
  uVar7 = 0xffffffffffffffff;
  do {
    uVar7 = uVar7 + 1;
  } while (*(char *)(unaff_RBP + -9 + uVar7) != '\0');
  if (0x40 < uVar7) {
    uVar7 = unaff_RDI;
  }
  uVar8 = 0;
  if (uVar7 != 0) {
    do {
      uVar3 = toupper((int)*(char *)(unaff_RBP + -9 + uVar8));
      *(int8_t *)(unaff_RBP + -0x59 + uVar8) = uVar3;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  if (0x40 < uVar7) {
    FUN_1808fcdc8();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(int8_t *)(unaff_RBP + -0x59 + uVar7) = 0;
  if (*(char *)(unaff_RBP + -0x59) == '\0') {
LAB_180650673:
    *unaff_RSI = 1;
  }
  else {
    lVar5 = strstr(&unknown_var_9664_ptr,unaff_RBP + -0x59);
    if (lVar5 != 0) goto LAB_180650673;
    lVar5 = strstr(&unknown_var_9568_ptr,unaff_RBP + -0x59);
    if (lVar5 == 0) {
      *(longlong *)(unaff_RBP + -0x69) = unaff_RBP + -0x59;
      iVar4 = strtol(unaff_RBP + -0x59,unaff_RBP + -0x69,10);
      pcVar6 = *(char **)(unaff_RBP + -0x69);
      if (unaff_RSI[2] == 8) {
        cVar1 = *pcVar6;
        if (cVar1 == 'K') {
          pcVar6 = pcVar6 + 1;
          *(char **)(unaff_RBP + -0x69) = pcVar6;
        }
        else if (cVar1 == 'M') {
          iVar4 = iVar4 << 10;
          pcVar6 = pcVar6 + 1;
          *(char **)(unaff_RBP + -0x69) = pcVar6;
        }
        else if (cVar1 == 'G') {
          iVar4 = iVar4 << 0x14;
          pcVar6 = pcVar6 + 1;
          *(char **)(unaff_RBP + -0x69) = pcVar6;
        }
        else {
          iVar4 = (int)((longlong)iVar4 + 0x3ffU >> 10);
        }
        if (*pcVar6 == 'B') {
          pcVar6 = pcVar6 + 1;
          *(char **)(unaff_RBP + -0x69) = pcVar6;
        }
      }
      if (*pcVar6 != '\0') {
        FUN_180650340(&unknown_var_9584_ptr,*(uint64_t *)(unaff_RSI + 4),unaff_RBP + -0x59);
        unaff_RSI[1] = 1;
        goto LAB_1806505ad;
      }
      *unaff_RSI = iVar4;
    }
    else {
      *unaff_RSI = 0;
    }
  }
  unaff_RSI[1] = 2;
LAB_1806505ad:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x47) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1806505b5(void)
void FUN_1806505b5(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x47) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1806505d6(void)
void FUN_1806505d6(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong unaff_RBP;
  int *unaff_RSI;
  
  *(longlong *)(unaff_RBP + -0x69) = unaff_RBP + -0x59;
  iVar2 = strtol(unaff_RBP + -0x59,unaff_RBP + -0x69,10);
  pcVar3 = *(char **)(unaff_RBP + -0x69);
  if (unaff_RSI[2] == 8) {
    cVar1 = *pcVar3;
    if (cVar1 == 'K') {
      pcVar3 = pcVar3 + 1;
      *(char **)(unaff_RBP + -0x69) = pcVar3;
    }
    else if (cVar1 == 'M') {
      iVar2 = iVar2 << 10;
      pcVar3 = pcVar3 + 1;
      *(char **)(unaff_RBP + -0x69) = pcVar3;
    }
    else if (cVar1 == 'G') {
      iVar2 = iVar2 << 0x14;
      pcVar3 = pcVar3 + 1;
      *(char **)(unaff_RBP + -0x69) = pcVar3;
    }
    else {
      iVar2 = (int)((longlong)iVar2 + 0x3ffU >> 10);
    }
    if (*pcVar3 == 'B') {
      pcVar3 = pcVar3 + 1;
      *(char **)(unaff_RBP + -0x69) = pcVar3;
    }
  }
  if (*pcVar3 == '\0') {
    *unaff_RSI = iVar2;
    unaff_RSI[1] = 2;
  }
  else {
    FUN_180650340(&unknown_var_9584_ptr,*(uint64_t *)(unaff_RSI + 4),unaff_RBP + -0x59);
    unaff_RSI[1] = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x47) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18065067e(void)
void FUN_18065067e(void)

{
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  if (system_ptr_66d8 == '\0') {
    *(int32_t *)(unaff_RSI + 4) = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x47) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180650697(void)
void FUN_180650697(void)

{
  code *pcVar1;
  
  FUN_1808fcdc8();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



bool FUN_1806506a0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar1 = param_3[4];
  fVar2 = param_2[6];
  fVar3 = param_4[6];
  fVar4 = param_3[5];
  fVar5 = param_4[5];
  fVar6 = param_3[6];
  fVar18 = fVar4 * fVar3 - fVar6 * fVar5;
  fVar7 = param_4[4];
  fVar19 = fVar7 * fVar6 - fVar1 * fVar3;
  fVar20 = fVar1 * fVar5 - fVar7 * fVar4;
  fVar13 = fVar19 * param_2[5] + fVar18 * param_2[4] + fVar20 * fVar2;
  if (fVar13 != 0.0) {
    fVar17 = param_2[5] * param_2[1] + param_2[4] * *param_2 + fVar2 * param_2[2];
    fVar14 = 1.0 / fVar13;
    fVar8 = param_2[4];
    fVar15 = fVar4 * param_3[1] + fVar1 * *param_3 + fVar6 * param_3[2];
    fVar16 = fVar5 * param_4[1] + fVar7 * *param_4 + fVar3 * param_4[2];
    fVar1 = param_2[5];
    fVar9 = param_2[6];
    fVar10 = param_3[4];
    fVar11 = param_2[4];
    fVar12 = param_3[4];
    *param_1 = ((fVar2 * fVar5 - param_2[5] * fVar3) * fVar15 + fVar17 * fVar18 +
               (param_2[5] * fVar6 - param_2[6] * fVar4) * fVar16) * fVar14;
    param_1[1] = ((fVar8 * fVar3 - fVar9 * fVar7) * fVar15 + fVar17 * fVar19 +
                 (fVar9 * fVar10 - fVar11 * fVar6) * fVar16) * fVar14;
    param_1[2] = ((fVar1 * fVar7 - fVar11 * fVar5) * fVar15 + fVar17 * fVar20 +
                 (fVar11 * fVar4 - fVar1 * fVar12) * fVar16) * fVar14;
    param_1[3] = 3.4028235e+38;
  }
  return fVar13 != 0.0;
}



int8_t FUN_180650782(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *in_R8;
  float *in_R9;
  float in_XMM1_Da;
  float in_XMM4_Da;
  float fVar7;
  float in_XMM5_Da;
  float fVar8;
  float unaff_XMM6_Da;
  float fVar9;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  
  fVar9 = in_XMM5_Da * param_2[1] + in_XMM4_Da * *param_2 + in_XMM1_Da * param_2[2];
  param_3 = 1.0 / param_3;
  fVar1 = param_2[4];
  fVar7 = unaff_XMM12_Da * in_R8[1] + param_4 * *in_R8 + unaff_XMM14_Da * in_R8[2];
  fVar8 = unaff_XMM13_Da * in_R9[1] + unaff_XMM15_Da * *in_R9 + unaff_XMM11_Da * in_R9[2];
  fVar2 = param_2[5];
  fVar3 = param_2[6];
  fVar4 = in_R8[4];
  fVar5 = param_2[4];
  fVar6 = in_R8[4];
  *param_1 = ((unaff_XMM6_Da * unaff_XMM13_Da - param_2[5] * unaff_XMM11_Da) * fVar7 +
              fVar9 * unaff_XMM8_Da +
             (param_2[5] * unaff_XMM14_Da - param_2[6] * unaff_XMM12_Da) * fVar8) * param_3;
  param_1[1] = ((fVar1 * unaff_XMM11_Da - fVar3 * unaff_XMM15_Da) * fVar7 + fVar9 * unaff_XMM9_Da +
               (fVar3 * fVar4 - fVar5 * unaff_XMM14_Da) * fVar8) * param_3;
  param_1[2] = ((fVar2 * unaff_XMM15_Da - fVar5 * unaff_XMM13_Da) * fVar7 + fVar9 * unaff_XMM10_Da +
               (fVar5 * unaff_XMM12_Da - fVar2 * fVar6) * fVar8) * param_3;
  param_1[3] = 3.4028235e+38;
  return 1;
}





// 函数: void FUN_180650908(void)
void FUN_180650908(void)

{
  return;
}





// 函数: void FUN_180650950(longlong param_1,longlong param_2)
void FUN_180650950(longlong param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *puVar4;
  char *pcVar5;
  
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    puVar4 = *(void **)(param_1 + 8);
  }
  uVar2 = strrchr(puVar4,0x5c);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    puVar4 = *(void **)(param_1 + 8);
  }
  uVar3 = strrchr(puVar4,0x5c);
  if (uVar2 == 0) {
    if (uVar3 == 0) {
      pcVar5 = "";
      if (*(char **)(param_1 + 8) != (char *)0x0) {
        pcVar5 = *(char **)(param_1 + 8);
      }
      param_2 = param_2 - (longlong)pcVar5;
      do {
        cVar1 = *pcVar5;
        pcVar5[param_2] = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
    else {
      pcVar5 = (char *)(uVar3 + 1);
      param_2 = param_2 - (longlong)pcVar5;
      do {
        cVar1 = *pcVar5;
        pcVar5[param_2] = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
  }
  else if (uVar3 == 0) {
    pcVar5 = (char *)(uVar2 + 1);
    param_2 = param_2 - (longlong)pcVar5;
    do {
      cVar1 = *pcVar5;
      pcVar5[param_2] = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  else if (uVar3 < uVar2) {
    pcVar5 = (char *)(uVar2 + 1);
    param_2 = param_2 - (longlong)pcVar5;
    do {
      cVar1 = *pcVar5;
      pcVar5[param_2] = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  else {
    pcVar5 = (char *)(uVar3 + 1);
    param_2 = param_2 - (longlong)pcVar5;
    do {
      cVar1 = *pcVar5;
      pcVar5[param_2] = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



