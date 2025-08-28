#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part320.c - 16 个函数

// 函数: void FUN_180437ba0(uint64_t *param_1,uint64_t *param_2)
void FUN_180437ba0(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  
  if (param_1 != (uint64_t *)0x0) {
    if ((void *)*param_1 == &unknown_var_7336_ptr) {
      param_1 = (uint64_t *)((longlong)param_1 + 0xac);
    }
    else {
      param_1 = (uint64_t *)(**(code **)((void *)*param_1 + 0x158))();
    }
    uVar1 = param_1[1];
    *param_2 = *param_1;
    param_2[1] = uVar1;
    uVar1 = param_1[3];
    param_2[2] = param_1[2];
    param_2[3] = uVar1;
    uVar1 = param_1[5];
    param_2[4] = param_1[4];
    param_2[5] = uVar1;
    uVar1 = param_1[7];
    param_2[6] = param_1[6];
    param_2[7] = uVar1;
    return;
  }
  *param_2 = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0x3f80000000000000;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x3f800000;
  param_2[6] = 0;
  param_2[7] = 0x3f80000000000000;
  return;
}



uint64_t * FUN_180437c40(uint64_t *param_1,longlong param_2)

{
  uint64_t uVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_18039dfa0(param_2);
    if (lVar2 != 0) {
      lVar2 = FUN_18039dfa0(param_2);
      uVar1 = *(uint64_t *)(lVar2 + 0x2b0);
      *param_1 = *(uint64_t *)(lVar2 + 0x2a8);
      param_1[1] = uVar1;
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}





// 函数: void FUN_180437ca0(longlong param_1,uint64_t *param_2)
void FUN_180437ca0(longlong param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (lVar3 = FUN_18039dfa0(), lVar3 != 0)) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    lVar3 = FUN_18039dfa0(param_1);
    *(uint64_t *)(lVar3 + 0x2a8) = uVar1;
    *(uint64_t *)(lVar3 + 0x2b0) = uVar2;
  }
  return;
}





// 函数: void FUN_180437cf0(uint64_t *param_1,uint64_t *param_2)
void FUN_180437cf0(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  
  if ((void *)*param_1 == &unknown_var_7336_ptr) {
    param_1 = param_1 + 0xe;
  }
  else {
    param_1 = (uint64_t *)(**(code **)((void *)*param_1 + 0x198))();
  }
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  uVar1 = param_1[3];
  param_2[2] = param_1[2];
  param_2[3] = uVar1;
  uVar1 = param_1[5];
  param_2[4] = param_1[4];
  param_2[5] = uVar1;
  *(int32_t *)(param_2 + 6) = *(int32_t *)(param_1 + 6);
  return;
}





// 函数: void FUN_180437d40(longlong *param_1,int32_t param_2)
void FUN_180437d40(longlong *param_1,int32_t param_2)

{
  int32_t auStackX_10 [6];
  
  auStackX_10[0] = param_2;
  (**(code **)(*param_1 + 0x128))(param_1,auStackX_10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180437d60(longlong param_1,longlong param_2)
void FUN_180437d60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int8_t auStack_b8 [32];
  longlong *plStack_98;
  uint64_t uStack_88;
  void *puStack_78;
  int8_t *puStack_70;
  int32_t uStack_68;
  int8_t auStack_60 [72];
  ulonglong uStack_18;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_b8;
  if (param_1 != 0) {
    puStack_78 = &unknown_var_3480_ptr;
    puStack_70 = auStack_60;
    uStack_68 = 0;
    auStack_60[0] = 0;
    if (param_2 != 0) {
      lVar1 = -1;
      do {
        lVar1 = lVar1 + 1;
      } while (*(char *)(param_2 + lVar1) != '\0');
      uStack_68 = (int32_t)lVar1;
      strcpy_s(auStack_60,0x40,param_2);
    }
    FUN_1800c48e0();
    puStack_78 = &unknown_var_720_ptr;
    if (plStack_98 == (longlong *)0x0) {
      FUN_180626f80(&unknown_var_6376_ptr,param_2);
    }
    else {
      FUN_18039f160(param_1);
    }
    if (plStack_98 != (longlong *)0x0) {
      (**(code **)(*plStack_98 + 0x38))();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_b8);
}



uint64_t * FUN_180437e80(uint64_t *param_1,uint64_t *param_2)

{
  int32_t uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int32_t uStack_1c;
  
  if (param_2 == (uint64_t *)0x0) {
    *param_1 = 0;
    param_1[1] = CONCAT44(uStack_1c,0xffffffff);
    return param_1;
  }
  if ((void *)*param_2 == &unknown_var_7336_ptr) {
    lVar4 = param_2[6];
    plVar3 = (longlong *)0x0;
    plVar6 = plVar3;
    plVar7 = plVar3;
    if (param_2[7] - lVar4 >> 3 != 0) {
      do {
        if (((void *)**(uint64_t **)((longlong)plVar7 + lVar4) != &unknown_var_9656_ptr) &&
           (iVar2 = (**(code **)((void *)**(uint64_t **)((longlong)plVar7 + lVar4) + 0x98))()
           , iVar2 == 0)) {
          plVar3 = *(longlong **)(param_2[6] + (longlong)(int)plVar6 * 8);
          break;
        }
        lVar4 = param_2[6];
        uVar5 = (int)plVar6 + 1;
        plVar6 = (longlong *)(ulonglong)uVar5;
        plVar7 = plVar7 + 1;
      } while ((ulonglong)(longlong)(int)uVar5 < (ulonglong)(param_2[7] - lVar4 >> 3));
    }
  }
  else {
    plVar3 = (longlong *)(**(code **)((void *)*param_2 + 0xb0))(param_2);
  }
  if (plVar3 == (longlong *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*plVar3 + 8))(plVar3);
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  *param_1 = plVar3;
  param_1[1] = CONCAT44(uStack_1c,uVar1);
  return param_1;
}





// 函数: void FUN_180437ea2(longlong param_1)
void FUN_180437ea2(longlong param_1)

{
  int32_t uVar1;
  int iVar2;
  longlong in_RAX;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong unaff_RDI;
  uint64_t *unaff_R14;
  uint64_t in_stack_00000028;
  
  if (in_RAX == param_1) {
    lVar4 = *(longlong *)(unaff_RDI + 0x30);
    plVar3 = (longlong *)0x0;
    plVar6 = plVar3;
    plVar7 = plVar3;
    if (*(longlong *)(unaff_RDI + 0x38) - lVar4 >> 3 != 0) {
      do {
        if (((void *)**(uint64_t **)((longlong)plVar7 + lVar4) != &unknown_var_9656_ptr) &&
           (iVar2 = (**(code **)((void *)**(uint64_t **)((longlong)plVar7 + lVar4) + 0x98))()
           , iVar2 == 0)) {
          plVar3 = *(longlong **)(*(longlong *)(unaff_RDI + 0x30) + (longlong)(int)plVar6 * 8);
          break;
        }
        lVar4 = *(longlong *)(unaff_RDI + 0x30);
        uVar5 = (int)plVar6 + 1;
        plVar6 = (longlong *)(ulonglong)uVar5;
        plVar7 = plVar7 + 1;
      } while ((ulonglong)(longlong)(int)uVar5 <
               (ulonglong)(*(longlong *)(unaff_RDI + 0x38) - lVar4 >> 3));
    }
  }
  else {
    plVar3 = (longlong *)(**(code **)(in_RAX + 0xb0))();
  }
  if (plVar3 == (longlong *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*plVar3 + 8))(plVar3);
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  *unaff_R14 = plVar3;
  unaff_R14[1] = CONCAT44(in_stack_00000028._4_4_,uVar1);
  return;
}





// 函数: void FUN_180437f3e(void)
void FUN_180437f3e(void)

{
  int32_t uVar1;
  longlong *unaff_RBX;
  uint64_t *unaff_R14;
  uint64_t in_stack_00000028;
  
  uVar1 = (**(code **)(*unaff_RBX + 8))();
  if (unaff_RBX != (longlong *)0x0) {
    (**(code **)(*unaff_RBX + 0x28))();
  }
  *unaff_R14 = unaff_RBX;
  unaff_R14[1] = CONCAT44(in_stack_00000028._4_4_,uVar1);
  return;
}





// 函数: void FUN_180437f9e(void)
void FUN_180437f9e(void)

{
  int32_t uVar1;
  int iVar2;
  longlong in_RAX;
  longlong *unaff_RBX;
  int unaff_EBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  uint64_t *unaff_R14;
  longlong unaff_R15;
  uint64_t in_stack_00000028;
  
  while (iVar2 = (**(code **)(in_RAX + 0x98))(), iVar2 != 0) {
    do {
      unaff_EBP = unaff_EBP + 1;
      unaff_RSI = unaff_RSI + 8;
      if ((ulonglong)(*(longlong *)(unaff_RDI + 0x38) - *(longlong *)(unaff_RDI + 0x30) >> 3) <=
          (ulonglong)(longlong)unaff_EBP) goto LAB_180437f2a;
      in_RAX = **(longlong **)(unaff_RSI + *(longlong *)(unaff_RDI + 0x30));
    } while (in_RAX == unaff_R15);
  }
  unaff_RBX = *(longlong **)(*(longlong *)(unaff_RDI + 0x30) + (longlong)unaff_EBP * 8);
LAB_180437f2a:
  if (unaff_RBX == (longlong *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*unaff_RBX + 8))(unaff_RBX);
    (**(code **)(*unaff_RBX + 0x28))(unaff_RBX);
  }
  *unaff_R14 = unaff_RBX;
  unaff_R14[1] = CONCAT44(in_stack_00000028._4_4_,uVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180438210(void)
void FUN_180438210(void)

{
  code *UNRECOVERED_JUMPTABLE;
  uint64_t uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(render_system_data_config + 5000) - *(longlong *)(render_system_data_config + 0x1380) >> 5;
  if (lVar2 != 0) {
                    // WARNING: Could not recover jumptable at 0x00018043824e. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*system_cache_buffer + 0x70))
              (system_cache_buffer,lVar2 * 0x20 + *(longlong *)(render_system_data_config + 0x1380) + -0x20);
    return;
  }
  FUN_180626f80(&unknown_var_6416_ptr);
  UNRECOVERED_JUMPTABLE = *(code **)(*system_cache_buffer + 0x70);
  uVar1 = FUN_180628ca0();
                    // WARNING: Could not recover jumptable at 0x00018043828c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(system_cache_buffer,uVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_1804382b0(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  int32_t uVar2;
  uint64_t uVar3;
  void *puStack_30;
  longlong lStack_28;
  
  pcVar1 = *(code **)(*system_cache_buffer + 0x78);
  uVar3 = (**(code **)(*render_system_data_config + 0xa0))
                    (render_system_data_config,&puStack_30,param_1,param_4,0xfffffffffffffffe);
  uVar2 = (*pcVar1)(system_cache_buffer,uVar3);
  puStack_30 = &unknown_var_3456_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180438350(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  ulonglong uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  longlong lVar13;
  uint64_t uVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  int32_t uVar18;
  
  lVar4 = system_main_module_state;
  uVar14 = 0xfffffffffffffffe;
  pfVar15 = (float *)0x0;
  pfVar16 = (float *)0x0;
  pfVar11 = (float *)0x0;
  pfVar17 = (float *)0x0;
  uVar18 = 3;
  iVar3 = *(int *)(SYSTEM_STATE_MANAGER + 0x540);
  uVar12 = 0;
  lVar13 = *(longlong *)(system_main_module_state + 0x78);
  pfVar9 = (float *)0x0;
  pfVar6 = (float *)0x0;
  if (*(longlong *)(system_main_module_state + 0x80) - lVar13 >> 4 != 0) {
    uVar7 = 0;
    pfVar8 = pfVar9;
    pfVar10 = pfVar6;
    do {
      fVar1 = *(float *)(lVar13 + 4 + uVar7 * 0x10);
      fVar2 = *(float *)(lVar13 + uVar7 * 0x10);
      for (pfVar5 = pfVar10; pfVar9 = pfVar8, pfVar6 = pfVar10, pfVar5 != pfVar8;
          pfVar5 = pfVar5 + 2) {
        if ((fVar2 == *pfVar5) && (fVar1 == pfVar5[1])) {
          if (pfVar5 != pfVar8) goto LAB_1804384e9;
          break;
        }
      }
      if ((iVar3 != 4) || (3840.0 <= fVar2)) {
        if (pfVar8 < pfVar11) {
          pfVar9 = pfVar8 + 2;
          *(ulonglong *)pfVar8 = CONCAT44(fVar1,fVar2);
          pfVar16 = pfVar9;
        }
        else {
          lVar13 = (longlong)pfVar8 - (longlong)pfVar10 >> 3;
          if (lVar13 == 0) {
            lVar13 = 1;
LAB_180438479:
            pfVar6 = (float *)FUN_18062b420(system_memory_pool_ptr,lVar13 * 8,
                                            CONCAT71((int7)((ulonglong)pfVar11 >> 8),3),iVar3,uVar14
                                            ,pfVar15,pfVar16,pfVar17,uVar18);
          }
          else {
            lVar13 = lVar13 * 2;
            if (lVar13 != 0) goto LAB_180438479;
            pfVar6 = (float *)0x0;
          }
          if (pfVar10 != pfVar8) {
                    // WARNING: Subroutine does not return
            memmove(pfVar6,pfVar10,(longlong)pfVar8 - (longlong)pfVar10);
          }
          *(ulonglong *)pfVar6 = CONCAT44(fVar1,fVar2);
          pfVar9 = pfVar6 + 2;
          if (pfVar10 != (float *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(pfVar10);
          }
          pfVar11 = pfVar6 + lVar13 * 2;
          pfVar15 = pfVar6;
          pfVar16 = pfVar9;
          pfVar17 = pfVar11;
        }
      }
LAB_1804384e9:
      uVar12 = uVar12 + 1;
      lVar13 = *(longlong *)(lVar4 + 0x78);
      uVar7 = (ulonglong)uVar12;
      pfVar8 = pfVar9;
      pfVar10 = pfVar6;
    } while (uVar7 < (ulonglong)(*(longlong *)(lVar4 + 0x80) - lVar13 >> 4));
  }
  if (pfVar6 != (float *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(pfVar6);
  }
  return (longlong)pfVar9 - (longlong)pfVar6 >> 3 & 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180438560(int *param_1,int *param_2)
void FUN_180438560(int *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = *(longlong *)(*(longlong *)(system_main_module_state + 8) + 0x18);
  iVar6 = (int)((*(longlong *)(*(longlong *)(system_main_module_state + 8) + 0x20) - lVar1) / 0x70);
  if ((iVar6 < 2) || (iVar6 <= *(int *)(SYSTEM_STATE_MANAGER + 0x1f10))) {
    iVar6 = GetSystemMetrics(0);
    GetSystemMetrics(1);
  }
  else {
    lVar4 = (longlong)*(int *)(SYSTEM_STATE_MANAGER + 0x1f10) * 0x70;
    uVar3 = *(int *)(lVar4 + 0x60 + lVar1) - *(int *)(lVar4 + 0x58 + lVar1);
    uVar5 = (int)uVar3 >> 0x1f;
    iVar6 = (uVar3 ^ uVar5) - uVar5;
  }
  lVar2 = SYSTEM_STATE_MANAGER;
  lVar4 = system_main_module_state;
  *param_1 = iVar6;
  lVar1 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x18);
  iVar6 = (int)((*(longlong *)(*(longlong *)(lVar4 + 8) + 0x20) - lVar1) / 0x70);
  if ((iVar6 < 2) || (iVar6 <= *(int *)(lVar2 + 0x1f10))) {
    GetSystemMetrics(0);
    iVar6 = GetSystemMetrics(1);
  }
  else {
    lVar4 = (longlong)*(int *)(lVar2 + 0x1f10) * 0x70;
    uVar3 = *(int *)(lVar4 + 100 + lVar1) - *(int *)(lVar4 + 0x5c + lVar1);
    uVar5 = (int)uVar3 >> 0x1f;
    iVar6 = (uVar3 ^ uVar5) - uVar5;
  }
  *param_2 = iVar6;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180438680(int32_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180438680(int32_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  uint64_t unaff_RBX;
  int32_t auStackX_10 [6];
  
  FUN_18006b4c0(SYSTEM_STATE_MANAGER,param_1);
  lVar1 = SYSTEM_STATE_MANAGER;
  if ((*(longlong *)(SYSTEM_STATE_MANAGER + 0x1e20) != 0) &&
     (auStackX_10[0] = param_2, cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1e28))(auStackX_10),
     param_2 = auStackX_10[0], cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x1dd0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x1dd0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3,param_3,param_4,unaff_RBX);
    }
    *(int32_t *)(lVar1 + 0x1dc0) = *(int32_t *)(lVar1 + 0x1e08);
    return;
  }
  *(int32_t *)(lVar1 + 0x1dc0) = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1804386b0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  ulonglong uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  longlong lVar13;
  uint64_t uVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  int32_t uVar18;
  
  lVar4 = system_main_module_state;
  uVar14 = 0xfffffffffffffffe;
  pfVar15 = (float *)0x0;
  pfVar16 = (float *)0x0;
  pfVar11 = (float *)0x0;
  pfVar17 = (float *)0x0;
  uVar18 = 3;
  iVar3 = *(int *)(SYSTEM_STATE_MANAGER + 0x540);
  uVar12 = 0;
  lVar13 = *(longlong *)(system_main_module_state + 0x78);
  pfVar6 = (float *)0x0;
  if (*(longlong *)(system_main_module_state + 0x80) - lVar13 >> 4 != 0) {
    uVar7 = 0;
    pfVar8 = (float *)0x0;
    pfVar10 = pfVar6;
    do {
      fVar1 = *(float *)(lVar13 + 4 + uVar7 * 0x10);
      fVar2 = *(float *)(lVar13 + uVar7 * 0x10);
      for (pfVar5 = pfVar10; pfVar9 = pfVar8, pfVar6 = pfVar10, pfVar5 != pfVar8;
          pfVar5 = pfVar5 + 2) {
        if ((fVar2 == *pfVar5) && (fVar1 == pfVar5[1])) {
          if (pfVar5 != pfVar8) goto LAB_180438849;
          break;
        }
      }
      if ((iVar3 != 4) || (3840.0 <= fVar2)) {
        if (pfVar8 < pfVar11) {
          pfVar9 = pfVar8 + 2;
          *(ulonglong *)pfVar8 = CONCAT44(fVar1,fVar2);
          pfVar16 = pfVar9;
        }
        else {
          lVar13 = (longlong)pfVar8 - (longlong)pfVar10 >> 3;
          if (lVar13 == 0) {
            lVar13 = 1;
LAB_1804387d9:
            pfVar6 = (float *)FUN_18062b420(system_memory_pool_ptr,lVar13 * 8,
                                            CONCAT71((int7)((ulonglong)pfVar11 >> 8),3),iVar3,uVar14
                                            ,pfVar15,pfVar16,pfVar17,uVar18);
          }
          else {
            lVar13 = lVar13 * 2;
            if (lVar13 != 0) goto LAB_1804387d9;
            pfVar6 = (float *)0x0;
          }
          if (pfVar10 != pfVar8) {
                    // WARNING: Subroutine does not return
            memmove(pfVar6,pfVar10,(longlong)pfVar8 - (longlong)pfVar10);
          }
          *(ulonglong *)pfVar6 = CONCAT44(fVar1,fVar2);
          pfVar9 = pfVar6 + 2;
          if (pfVar10 != (float *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(pfVar10);
          }
          pfVar11 = pfVar6 + lVar13 * 2;
          pfVar15 = pfVar6;
          pfVar16 = pfVar9;
          pfVar17 = pfVar11;
        }
      }
LAB_180438849:
      uVar12 = uVar12 + 1;
      lVar13 = *(longlong *)(lVar4 + 0x78);
      uVar7 = (ulonglong)uVar12;
      pfVar8 = pfVar9;
      pfVar10 = pfVar6;
    } while (uVar7 < (ulonglong)(*(longlong *)(lVar4 + 0x80) - lVar13 >> 4));
  }
  if (pfVar6 != (float *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(pfVar6);
  }
  return CONCAT44(pfVar6[(longlong)param_1 * 2 + 1],pfVar6[(longlong)param_1 * 2]);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180438940(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  float fVar6;
  
  iVar3 = 0;
  uVar4 = 0;
  lVar1 = *(longlong *)(system_main_module_state + 0x78);
  uVar5 = *(longlong *)(system_main_module_state + 0x80) - lVar1 >> 4;
  if (uVar5 != 0) {
    uVar2 = 0;
    do {
      if (((float)*(int *)(SYSTEM_STATE_MANAGER + 0x1d50) == *(float *)(lVar1 + uVar2 * 0x10)) &&
         ((float)*(int *)(SYSTEM_STATE_MANAGER + 0x1dc0) == *(float *)(lVar1 + 4 + uVar2 * 0x10))) {
        if (iVar3 == param_1) {
          fVar6 = *(float *)(lVar1 + 8 + uVar2 * 0x10) / *(float *)(lVar1 + 0xc + uVar2 * 0x10);
          if (fVar6 <= 0.0) {
            fVar6 = fVar6 - 0.9999999;
          }
          return (int)fVar6;
        }
        iVar3 = iVar3 + 1;
      }
      uVar4 = uVar4 + 1;
      uVar2 = (ulonglong)uVar4;
    } while (uVar2 < uVar5);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804389f0(void)
void FUN_1804389f0(void)

{
  float fVar1;
  float *pfVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  float *pfVar6;
  uint uVar7;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar8;
  
  FUN_1800ad510();
  pfVar2 = *(float **)(system_main_module_state + 0x78);
  uVar10 = *(longlong *)(system_main_module_state + 0x80) - (longlong)pfVar2 >> 4;
  if (uVar10 != 0) {
    bVar3 = false;
    uVar12 = 0;
    uVar5 = uVar12;
    do {
      if ((((float)*(int *)(SYSTEM_STATE_MANAGER + 0x1d50) == pfVar2[uVar5 * 4]) &&
          ((float)*(int *)(SYSTEM_STATE_MANAGER + 0x1dc0) == pfVar2[uVar5 * 4 + 1])) &&
         (ABS(pfVar2[uVar5 * 4 + 2] / pfVar2[uVar5 * 4 + 3] - *(float *)(SYSTEM_STATE_MANAGER + 0x1e30)) <
          1.0)) {
        bVar3 = true;
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
    } while (uVar5 < uVar10);
    if (!bVar3) {
      uVar11 = 0;
      iVar9 = 0x7fffffff;
      if (uVar10 != 0) {
        uVar5 = uVar12;
        pfVar6 = pfVar2;
        uVar8 = uVar12;
        do {
          iVar4 = (int)ABS(pfVar6[1] - (float)*(int *)(SYSTEM_STATE_MANAGER + 0x1dc0)) +
                  (int)ABS(*pfVar6 - (float)*(int *)(SYSTEM_STATE_MANAGER + 0x1d50));
          uVar11 = (uint)uVar8;
          if (iVar9 < iVar4) {
            uVar11 = (uint)uVar5;
          }
          uVar7 = (uint)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
          pfVar6 = pfVar6 + 4;
          uVar5 = (ulonglong)uVar11;
          if (iVar9 < iVar4) {
            iVar4 = iVar9;
          }
          iVar9 = iVar4;
        } while ((ulonglong)(longlong)(int)uVar7 < uVar10);
      }
      fVar1 = pfVar2[(longlong)(int)uVar11 * 4 + 1];
      if (uVar10 != 0) {
        fVar13 = 0.0;
        do {
          fVar14 = fVar13;
          if ((((float)(int)pfVar2[(longlong)(int)uVar11 * 4] == pfVar2[uVar12 * 4]) &&
              ((float)(int)fVar1 == pfVar2[uVar12 * 4 + 1])) &&
             (fVar14 = pfVar2[uVar12 * 4 + 2] / pfVar2[uVar12 * 4 + 3],
             pfVar2[uVar12 * 4 + 2] / pfVar2[uVar12 * 4 + 3] <= fVar13)) {
            fVar14 = fVar13;
          }
          uVar12 = (ulonglong)((int)uVar12 + 1);
          fVar13 = fVar14;
        } while (uVar12 < uVar10);
      }
      FUN_18006b4c0(SYSTEM_STATE_MANAGER);
      FUN_18006b440(SYSTEM_STATE_MANAGER,(int)fVar1);
      FUN_1800ae230();
      if ((*(int *)(SYSTEM_STATE_MANAGER + 0x540) == 4) && (*(int *)(SYSTEM_STATE_MANAGER + 0x1d50) < 0xf00)) {
        FUN_18010e3b0(SYSTEM_STATE_MANAGER,1);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180438a41(uint param_1,uint param_2,uint param_3,ulonglong param_4)
void FUN_180438a41(uint param_1,uint param_2,uint param_3,ulonglong param_4)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  float *in_R8;
  ulonglong in_R10;
  longlong in_R11;
  uint uVar9;
  float in_XMM3_Da;
  float fVar10;
  float fVar11;
  
  uVar3 = in_R10 & 0xffffffff;
  uVar2 = (uint)in_R10;
  uVar9 = uVar2 + 1;
  do {
    if ((((float)*(int *)(in_R11 + 0x1d50) == in_R8[uVar3 * 4]) &&
        ((float)*(int *)(in_R11 + 0x1dc0) == in_R8[uVar3 * 4 + 1])) &&
       (param_1 = param_1 & 0xff,
       (float)((uint)(in_R8[uVar3 * 4 + 2] / in_R8[uVar3 * 4 + 3] - *(float *)(in_R11 + 0x1e30)) &
              param_3) < in_XMM3_Da)) {
      param_1 = uVar9;
    }
    param_2 = param_2 + 1;
    uVar3 = (ulonglong)param_2;
  } while (uVar3 < param_4);
  if ((char)param_1 == '\0') {
    uVar3 = in_R10 & 0xffffffff;
    uVar7 = in_R10 & 0xffffffff;
    iVar8 = 0x7fffffff;
    if (param_4 != 0) {
      pfVar5 = in_R8;
      do {
        iVar4 = (int)(float)((uint)(pfVar5[1] - (float)*(int *)(in_R11 + 0x1dc0)) & param_3) +
                (int)(float)((uint)(*pfVar5 - (float)*(int *)(in_R11 + 0x1d50)) & param_3);
        uVar2 = (uint)uVar7;
        if (iVar8 < iVar4) {
          uVar2 = (uint)uVar3;
        }
        uVar6 = (uint)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        pfVar5 = pfVar5 + 4;
        uVar3 = (ulonglong)uVar2;
        if (iVar8 < iVar4) {
          iVar4 = iVar8;
        }
        iVar8 = iVar4;
      } while ((ulonglong)(longlong)(int)uVar6 < param_4);
    }
    fVar1 = in_R8[(longlong)(int)uVar2 * 4 + 1];
    if (param_4 != 0) {
      fVar10 = 0.0;
      do {
        fVar11 = fVar10;
        if ((((float)(int)in_R8[(longlong)(int)uVar2 * 4] == in_R8[in_R10 * 4]) &&
            ((float)(int)fVar1 == in_R8[in_R10 * 4 + 1])) &&
           (fVar11 = in_R8[in_R10 * 4 + 2] / in_R8[in_R10 * 4 + 3],
           in_R8[in_R10 * 4 + 2] / in_R8[in_R10 * 4 + 3] <= fVar10)) {
          fVar11 = fVar10;
        }
        in_R10 = (ulonglong)((int)in_R10 + 1);
        fVar10 = fVar11;
      } while (in_R10 < param_4);
    }
    FUN_18006b4c0();
    FUN_18006b440(SYSTEM_STATE_MANAGER,(int)fVar1);
    FUN_1800ae230();
    if ((*(int *)(SYSTEM_STATE_MANAGER + 0x540) == 4) && (*(int *)(SYSTEM_STATE_MANAGER + 0x1d50) < 0xf00)) {
      FUN_18010e3b0(SYSTEM_STATE_MANAGER,uVar9);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180438ab3(uint64_t param_1,uint64_t param_2,float *param_3,ulonglong param_4)
void FUN_180438ab3(uint64_t param_1,uint64_t param_2,float *param_3,ulonglong param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  float *pfVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong in_R10;
  longlong in_R11;
  int32_t unaff_R14D;
  uint in_XMM2_Da;
  float fVar9;
  float fVar10;
  
  uVar4 = in_R10 & 0xffffffff;
  uVar2 = (uint)in_R10;
  uVar7 = in_R10 & 0xffffffff;
  iVar8 = 0x7fffffff;
  if (param_4 != 0) {
    pfVar5 = param_3;
    do {
      iVar3 = (int)(float)((uint)(pfVar5[1] - (float)*(int *)(in_R11 + 0x1dc0)) & in_XMM2_Da) +
              (int)(float)((uint)(*pfVar5 - (float)*(int *)(in_R11 + 0x1d50)) & in_XMM2_Da);
      uVar2 = (uint)uVar7;
      if (iVar8 < iVar3) {
        uVar2 = (uint)uVar4;
      }
      uVar6 = (uint)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      pfVar5 = pfVar5 + 4;
      uVar4 = (ulonglong)uVar2;
      if (iVar8 < iVar3) {
        iVar3 = iVar8;
      }
      iVar8 = iVar3;
    } while ((ulonglong)(longlong)(int)uVar6 < param_4);
  }
  fVar1 = param_3[(longlong)(int)uVar2 * 4 + 1];
  if (param_4 != 0) {
    fVar9 = 0.0;
    do {
      fVar10 = fVar9;
      if ((((float)(int)param_3[(longlong)(int)uVar2 * 4] == param_3[in_R10 * 4]) &&
          ((float)(int)fVar1 == param_3[in_R10 * 4 + 1])) &&
         (fVar10 = param_3[in_R10 * 4 + 2] / param_3[in_R10 * 4 + 3],
         param_3[in_R10 * 4 + 2] / param_3[in_R10 * 4 + 3] <= fVar9)) {
        fVar10 = fVar9;
      }
      in_R10 = (ulonglong)((int)in_R10 + 1);
      fVar9 = fVar10;
    } while (in_R10 < param_4);
  }
  FUN_18006b4c0();
  FUN_18006b440(SYSTEM_STATE_MANAGER,(int)fVar1);
  FUN_1800ae230();
  if ((*(int *)(SYSTEM_STATE_MANAGER + 0x540) == 4) && (*(int *)(SYSTEM_STATE_MANAGER + 0x1d50) < 0xf00)) {
    FUN_18010e3b0(SYSTEM_STATE_MANAGER,unaff_R14D);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180438abb(uint64_t param_1,uint64_t param_2,float *param_3,ulonglong param_4)
void FUN_180438abb(uint64_t param_1,uint64_t param_2,float *param_3,ulonglong param_4)

{
  float fVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong in_R10;
  longlong in_R11;
  int32_t unaff_R14D;
  uint in_XMM2_Da;
  float fVar8;
  float fVar9;
  
  uVar6 = in_R10 & 0xffffffff;
  iVar7 = 0x7fffffff;
  if (param_4 != 0) {
    pfVar4 = param_3;
    iVar3 = unaff_EBX;
    do {
      iVar2 = (int)(float)((uint)(pfVar4[1] - (float)*(int *)(in_R11 + 0x1dc0)) & in_XMM2_Da) +
              (int)(float)((uint)(*pfVar4 - (float)*(int *)(in_R11 + 0x1d50)) & in_XMM2_Da);
      unaff_EBX = (int)uVar6;
      if (iVar7 < iVar2) {
        unaff_EBX = iVar3;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      pfVar4 = pfVar4 + 4;
      if (iVar7 < iVar2) {
        iVar2 = iVar7;
      }
      iVar7 = iVar2;
      iVar3 = unaff_EBX;
    } while ((ulonglong)(longlong)(int)uVar5 < param_4);
  }
  fVar1 = param_3[(longlong)unaff_EBX * 4 + 1];
  if (param_4 != 0) {
    fVar8 = 0.0;
    do {
      fVar9 = fVar8;
      if ((((float)(int)param_3[(longlong)unaff_EBX * 4] == param_3[in_R10 * 4]) &&
          ((float)(int)fVar1 == param_3[in_R10 * 4 + 1])) &&
         (fVar9 = param_3[in_R10 * 4 + 2] / param_3[in_R10 * 4 + 3],
         param_3[in_R10 * 4 + 2] / param_3[in_R10 * 4 + 3] <= fVar8)) {
        fVar9 = fVar8;
      }
      in_R10 = (ulonglong)((int)in_R10 + 1);
      fVar8 = fVar9;
    } while (in_R10 < param_4);
  }
  FUN_18006b4c0();
  FUN_18006b440(SYSTEM_STATE_MANAGER,(int)fVar1);
  FUN_1800ae230();
  if ((*(int *)(SYSTEM_STATE_MANAGER + 0x540) == 4) && (*(int *)(SYSTEM_STATE_MANAGER + 0x1d50) < 0xf00)) {
    FUN_18010e3b0(SYSTEM_STATE_MANAGER,unaff_R14D);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180438ae9(uint64_t param_1,uint64_t param_2,uint param_3,int param_4)
void FUN_180438ae9(uint64_t param_1,uint64_t param_2,uint param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  float *pfVar4;
  int unaff_ESI;
  int unaff_EDI;
  float *in_R8;
  ulonglong in_R9;
  ulonglong in_R10;
  int32_t unaff_R14D;
  int in_XMM4_Da;
  float fVar5;
  float fVar6;
  
  pfVar4 = in_R8;
  do {
    iVar3 = (int)(float)((uint)(pfVar4[1] - (float)in_XMM4_Da) & param_3) +
            (int)(float)((uint)(*pfVar4 - (float)param_4) & param_3);
    iVar2 = unaff_ESI;
    if (unaff_EDI < iVar3) {
      iVar2 = unaff_EBX;
    }
    unaff_ESI = unaff_ESI + 1;
    pfVar4 = pfVar4 + 4;
    if (unaff_EDI < iVar3) {
      iVar3 = unaff_EDI;
    }
    unaff_EDI = iVar3;
    unaff_EBX = iVar2;
  } while ((ulonglong)(longlong)unaff_ESI < in_R9);
  fVar1 = in_R8[(longlong)iVar2 * 4 + 1];
  if (in_R9 != 0) {
    fVar5 = 0.0;
    do {
      fVar6 = fVar5;
      if ((((float)(int)in_R8[(longlong)iVar2 * 4] == in_R8[in_R10 * 4]) &&
          ((float)(int)fVar1 == in_R8[in_R10 * 4 + 1])) &&
         (fVar6 = in_R8[in_R10 * 4 + 2] / in_R8[in_R10 * 4 + 3],
         in_R8[in_R10 * 4 + 2] / in_R8[in_R10 * 4 + 3] <= fVar5)) {
        fVar6 = fVar5;
      }
      in_R10 = (ulonglong)((int)in_R10 + 1);
      fVar5 = fVar6;
    } while (in_R10 < in_R9);
  }
  FUN_18006b4c0();
  FUN_18006b440(SYSTEM_STATE_MANAGER,(int)fVar1);
  FUN_1800ae230();
  if ((*(int *)(SYSTEM_STATE_MANAGER + 0x540) == 4) && (*(int *)(SYSTEM_STATE_MANAGER + 0x1d50) < 0xf00)) {
    FUN_18010e3b0(SYSTEM_STATE_MANAGER,unaff_R14D);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



