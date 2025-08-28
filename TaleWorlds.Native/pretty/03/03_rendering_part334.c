#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part334.c - 34 个函数

// 函数: void FUN_180443820(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180443820(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  int iVar6;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    plVar1 = (longlong *)(lVar2 + 0x60d10);
    (**(code **)(*param_1 + 0x28))();
    iVar6 = 0;
    puVar4 = (uint64_t *)*plVar1;
    uVar5 = *(longlong *)(lVar2 + 0x60d18) - (longlong)puVar4 >> 3;
    if (uVar5 != 0) {
      do {
        if ((longlong *)*puVar4 == param_1) goto LAB_18044388e;
        iVar6 = iVar6 + 1;
        puVar4 = puVar4 + 1;
      } while ((ulonglong)(longlong)iVar6 < uVar5);
    }
    iVar6 = -1;
LAB_18044388e:
    (**(code **)(*param_1 + 0x38))(param_1);
    if (iVar6 != -1) {
      *(uint *)((longlong)param_1 + 0x2ac) = *(uint *)((longlong)param_1 + 0x2ac) & 0xefffffff;
      if ((int)param_1[0x57] == -1) {
        FUN_1803982f0(lVar2 + 0x607e0,param_1);
        if (param_1[0x2d] == 0) {
          FUN_180398640(lVar2 + 0x607e0,param_1);
        }
      }
      lVar3 = *plVar1;
      FUN_180080810(lVar3 + (longlong)iVar6 * 8,
                    lVar3 + ((*(longlong *)(lVar2 + 0x60d18) - lVar3 >> 3) + -1) * 8,lVar3,param_4,
                    uVar7);
      FUN_1800b8630(plVar1,(*(longlong *)(lVar2 + 0x60d18) - *plVar1 >> 3) + -1);
    }
  }
  return;
}





// 函数: void FUN_180443930(longlong param_1,int8_t param_2,uint64_t *param_3,uint64_t *param_4,
void FUN_180443930(longlong param_1,int8_t param_2,uint64_t *param_3,uint64_t *param_4,
                  char param_5)

{
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  if (param_1 != 0) {
    FUN_1802f4040(param_1,&uStack_48,param_2,0);
    if (param_5 != '\0') {
      *param_3 = uStack_48;
      param_3[1] = uStack_40;
      *param_4 = uStack_38;
      param_4[1] = uStack_30;
      return;
    }
    FUN_18063a7b0(&uStack_48,param_1 + 0x70,param_3,param_4);
  }
  return;
}





// 函数: void FUN_1804439b0(longlong param_1,int32_t param_2)
void FUN_1804439b0(longlong param_1,int32_t param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = 0;
  *(char *)(param_1 + 0x2e6) = (char)param_2;
  uVar3 = uVar1;
  if (*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      FUN_1804439b0(*(uint64_t *)(*(longlong *)(param_1 + 0x1c0) + uVar1),param_2);
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
  }
  return;
}





// 函数: void FUN_1804439e4(void)
void FUN_1804439e4(void)

{
  longlong unaff_RBX;
  int32_t unaff_EBP;
  ulonglong uVar1;
  uint unaff_EDI;
  
  uVar1 = (ulonglong)unaff_EDI;
  do {
    FUN_1804439b0(*(uint64_t *)(*(longlong *)(unaff_RBX + 0x1c0) + uVar1),unaff_EBP);
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((ulonglong)(longlong)(int)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3));
  return;
}





// 函数: void FUN_180443a27(void)
void FUN_180443a27(void)

{
  return;
}



longlong * FUN_180443a40(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int32_t uVar2;
  int32_t uStack_c;
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *param_1 = (longlong)plVar1;
  param_1[1] = CONCAT44(uStack_c,uVar2);
  return param_1;
}



uint64_t * FUN_180443aa0(uint64_t *param_1,longlong *param_2)

{
  int32_t uVar1;
  longlong *plVar2;
  int32_t uStack_c;
  
  plVar2 = (longlong *)(**(code **)(*param_2 + 0xb0))(param_2);
  if (plVar2 == (longlong *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  *param_1 = plVar2;
  param_1[1] = CONCAT44(uStack_c,uVar1);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180443b00(void)
void FUN_180443b00(void)

{
  char *pcVar1;
  uint64_t *puVar2;
  longlong *plVar3;
  uint64_t uVar4;
  longlong lVar5;
  void *puVar6;
  void *puVar7;
  int8_t auStack_278 [96];
  uint64_t uStack_218;
  int aiStack_1d0 [2];
  int8_t uStack_1c8;
  uint64_t uStack_1b8;
  uint64_t uStack_1b0;
  uint64_t uStack_1a8;
  uint64_t uStack_1a0;
  uint64_t *puStack_198;
  int32_t uStack_190;
  int8_t auStack_18c [4];
  longlong *plStack_188;
  int8_t auStack_178 [16];
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  int8_t uStack_140;
  uint64_t auStack_138 [7];
  uint64_t uStack_100;
  uint64_t uStack_f8;
  int32_t uStack_f0;
  int8_t uStack_e8;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  void *puStack_c8;
  void *puStack_c0;
  int32_t uStack_b8;
  uint8_t auStack_b0 [128];
  uint64_t uStack_30;
  ulonglong uStack_28;
  
  puVar2 = (uint64_t *)*render_system_data_memory;
  if (puVar2 != (uint64_t *)0x0) {
    *render_system_data_memory = 0;
    uStack_30 = 0x180443b24;
    (**(code **)*puVar2)(puVar2,1);
  }
  plVar3 = render_system_data_memory;
  uStack_218 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_278;
  lVar5 = (longlong)*(int *)(system_message_buffer + 0x1d40) * 0xd0 +
          *(longlong *)(system_message_buffer + 0x1d20);
  puStack_c8 = &unknown_var_3432_ptr;
  puStack_c0 = auStack_b0;
  auStack_b0[0] = 0;
  uStack_b8 = *(int32_t *)(lVar5 + 0x20);
  puVar6 = *(void **)(lVar5 + 0x18);
  puVar7 = &system_buffer_ptr;
  if (puVar6 != (void *)0x0) {
    puVar7 = puVar6;
  }
  strcpy_s(auStack_b0,0x80,puVar7);
  puVar6 = &system_buffer_ptr;
  if (puStack_c0 != (void *)0x0) {
    puVar6 = puStack_c0;
  }
  lVar5 = strstr(puVar6,&unknown_var_9640_ptr);
  if (lVar5 != 0) {
    uStack_168 = 0;
    uStack_160 = 0xf;
    auStack_178[0] = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    puStack_198 = auStack_138;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0xf;
    uStack_e8 = 0;
    lVar5 = -1;
    do {
      pcVar1 = &unknown_var_4665_ptr + lVar5;
      lVar5 = lVar5 + 1;
    } while (*pcVar1 != '\0');
    FUN_1800671b0(auStack_178,&system_state_d0f8);
    uStack_140 = 1;
    puStack_198 = (uint64_t *)0x100000000;
    uStack_190 = 2;
    FUN_180189600(&uStack_158,&puStack_198,auStack_18c);
    puStack_198 = (uint64_t *)&unknown_var_9744_ptr;
    plStack_188 = plVar3;
    FUN_180188620(auStack_138,&puStack_198);
    uStack_1b8 = 0;
    uStack_1b0 = 0xf;
    uStack_1c8 = 0;
    puStack_198 = &uStack_1a8;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = FUN_180188560();
    FUN_180183a20(auStack_178,aiStack_1d0);
    if (-1 < aiStack_1d0[0]) {
      uVar4 = func_0x0001801836e0();
                    // WARNING: Subroutine does not return
      FUN_180062300(system_message_context,&unknown_var_9712_ptr,uVar4);
    }
    uVar4 = func_0x0001801836e0();
                    // WARNING: Subroutine does not return
    FUN_180062300(system_message_context,&unknown_var_9856_ptr,uVar4);
  }
  puStack_c8 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_278);
}





// 函数: void FUN_180443b40(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180443b40(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int8_t auStack_30 [48];
  
  FUN_180627910(auStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  FUN_1801865a0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180443b80(uint64_t param_1,int8_t param_2)
void FUN_180443b80(uint64_t param_1,int8_t param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint64_t *puVar3;
  void *puVar4;
  longlong lVar5;
  int8_t auStack_d8 [32];
  void **ppuStack_b8;
  uint64_t uStack_b0;
  uint64_t *puStack_a8;
  void *puStack_a0;
  longlong lStack_98;
  void **ppuStack_68;
  void *apuStack_60 [4];
  int8_t auStack_40 [16];
  uint64_t uStack_30;
  uint64_t uStack_28;
  int8_t uStack_20;
  ulonglong uStack_18;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_d8;
  ppuStack_b8 = apuStack_60;
  puVar3 = (uint64_t *)FUN_180627910(apuStack_60,param_1);
  lVar2 = render_system_data_memory;
  puStack_a8 = puVar3;
  if (*(longlong *)(render_system_data_memory + 8) == 0) {
    *puVar3 = &unknown_var_3456_ptr;
    if (puVar3[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar3[1] = 0;
    *(int32_t *)(puVar3 + 3) = 0;
  }
  else {
    uStack_30 = 0;
    uStack_28 = 0xf;
    auStack_40[0] = 0;
    puVar4 = &system_buffer_ptr;
    if ((void *)puVar3[1] != (void *)0x0) {
      puVar4 = (void *)puVar3[1];
    }
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (puVar4[lVar5] != '\0');
    FUN_1800671b0(auStack_40);
    plVar1 = *(longlong **)(lVar2 + 8);
    ppuStack_b8 = &puStack_a0;
    puStack_a0 = &unknown_var_760_ptr;
    lStack_98 = lVar2;
    ppuStack_68 = &puStack_a0;
    uStack_20 = param_2;
    (**(code **)(*plVar1 + 0x20))(plVar1,auStack_40,&puStack_a0,0);
    FUN_180067070(auStack_40);
    *puVar3 = &unknown_var_3456_ptr;
    if (puVar3[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar3[1] = 0;
    *(int32_t *)(puVar3 + 3) = 0;
  }
  *puVar3 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_d8);
}





// 函数: void FUN_180443d10(uint64_t param_1)
void FUN_180443d10(uint64_t param_1)

{
  int8_t auStack_50 [32];
  int8_t auStack_30 [40];
  
  FUN_180627910(auStack_50);
  FUN_180627910(auStack_30,param_1);
  FUN_180186880();
  return;
}





// 函数: void FUN_180443d70(uint64_t param_1)
void FUN_180443d70(uint64_t param_1)

{
  int8_t auStack_50 [32];
  int8_t auStack_30 [40];
  
  FUN_180627910(auStack_50);
  FUN_180627910(auStack_30,param_1);
  FUN_180186ac0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180443df0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180443df0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  int32_t uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  uint64_t uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  
  uVar11 = 0xfffffffffffffffe;
  plVar12 = (longlong *)0x0;
  plVar13 = (longlong *)0x0;
  plVar8 = (longlong *)0x0;
  plVar14 = (longlong *)0x0;
  lVar4 = strtok(0,&unknown_var_9820_ptr,param_3,param_4,0xfffffffffffffffe,0,0,0,3);
  plVar7 = plVar8;
  plVar9 = plVar8;
  uVar2 = extraout_XMM0_Da;
  plVar3 = plVar12;
  plVar1 = plVar13;
  do {
    if (lVar4 == 0) {
      FUN_180186ca0(uVar2,plVar3,(longlong)plVar7 - (longlong)plVar3 >> 3,param_4,uVar11,plVar12,
                    plVar13,plVar14);
      if (plVar3 == (longlong *)0x0) {
        return;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar3);
    }
    if (plVar7 < plVar9) {
      *plVar1 = lVar4;
      plVar5 = plVar3;
    }
    else {
      lVar6 = (longlong)plVar7 - (longlong)plVar3 >> 3;
      lVar10 = lVar6 * 2;
      if (lVar6 == 0) {
        lVar10 = 1;
      }
      plVar5 = plVar8;
      if (lVar10 != 0) {
        plVar5 = (longlong *)
                 FUN_18062b420(system_memory_pool_ptr,lVar10 * 8,CONCAT71((int7)((ulonglong)plVar7 >> 8),3))
        ;
      }
      if (plVar3 != plVar7) {
                    // WARNING: Subroutine does not return
        memmove(plVar5,plVar3,(longlong)plVar7 - (longlong)plVar3);
      }
      *plVar5 = lVar4;
      if (plVar3 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar3);
      }
      plVar9 = plVar5 + lVar10;
      plVar12 = plVar5;
      plVar14 = plVar9;
      plVar1 = plVar5;
    }
    plVar7 = plVar1 + 1;
    plVar13 = plVar7;
    lVar4 = strtok(0,&unknown_var_9820_ptr);
    uVar2 = extraout_XMM0_Da_00;
    plVar3 = plVar5;
    plVar1 = plVar7;
  } while( true );
}





// 函数: void FUN_180443f80(uint64_t param_1)
void FUN_180443f80(uint64_t param_1)

{
  int8_t auStack_50 [32];
  int8_t auStack_30 [40];
  
  FUN_180627910(auStack_50);
  FUN_180627910(auStack_30,param_1);
  FUN_180186eb0();
  return;
}





// 函数: void FUN_180443ff0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180443ff0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int8_t auStack_30 [48];
  
  FUN_180627910(auStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  FUN_1801871f0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180444030(void)
void FUN_180444030(void)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(0x180c91970);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  SYSTEM_DATA_MANAGER_A = *(uint64_t *)*render_system_data_memory;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180444070(uint64_t param_1,uint64_t *param_2)
void FUN_180444070(uint64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  longlong lVar3;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  
  lVar3 = SYSTEM_DATA_MANAGER_A;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uStack_28 = 0;
  uStack_24 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16c8);
  uStack_20 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16cc);
  uStack_1c = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16d0);
  uStack_18 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16d4);
  FUN_18013e100(SYSTEM_DATA_MANAGER_A + 0x1b80,&uStack_28);
  *(uint64_t *)(lVar3 + 0x16c8) = uVar1;
  *(uint64_t *)(lVar3 + 0x16d0) = uVar2;
  return;
}





// 函数: void FUN_180444100(void)
void FUN_180444100(void)

{
  int iVar1;
  
  iVar1 = _Mtx_unlock(0x180c91970);
  if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x00018044411b. Too many branches
                    // WARNING: Treating indirect jump as call
    __Throw_C_error_std__YAXH_Z(iVar1);
    return;
  }
  return;
}





// 函数: void FUN_180444200(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
void FUN_180444200(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
                  uint64_t param_5,int32_t param_6,int32_t param_7,int32_t param_8,
                  int32_t param_9,int32_t param_10)

{
  uint64_t uStack_18;
  int32_t uStack_10;
  
  uStack_10 = param_10;
  uStack_18 = param_2;
  FUN_18011a0a0(param_6,param_1,param_3,&uStack_18,param_3,param_4,param_5,param_6,param_7,
                CONCAT44(param_9,param_8));
  return;
}





// 函数: void FUN_180444280(uint64_t param_1)
void FUN_180444280(uint64_t param_1)

{
  int32_t uStackX_10;
  int32_t uStackX_14;
  
  uStackX_10 = 0xbf800000;
  uStackX_14 = 0;
  FUN_180111c30(param_1,&uStackX_10);
  return;
}





// 函数: void FUN_1804442c0(uint64_t param_1)
void FUN_1804442c0(uint64_t param_1)

{
  uint64_t auStackX_10 [3];
  
  auStackX_10[0] = 0;
  FUN_18010f6f0(param_1,auStackX_10,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804442e0(void)
void FUN_1804442e0(void)

{
  longlong lVar1;
  longlong lVar2;
  int32_t uVar3;
  longlong alStackX_8 [4];
  
  lVar1 = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lVar2 = *(longlong *)(lVar1 + 0x1af8);
  if (*(char *)(lVar2 + 0xb4) == '\0') {
    uVar3 = *(int32_t *)(lVar2 + 0x1a0);
    *(int32_t *)(lVar2 + 0x1a0) = 1;
    if (*(float *)(lVar2 + 0x124) <= 0.0) {
      alStackX_8[0] = (ulonglong)*(uint *)(lVar1 + 0x19f8) << 0x20;
    }
    else {
      alStackX_8[0] = 0;
    }
    func_0x000180124080(alStackX_8);
    *(int32_t *)(lVar2 + 0x1a0) = uVar3;
  }
  return;
}





// 函数: void FUN_180444370(uint64_t param_1,uint64_t param_2,char *param_3)
void FUN_180444370(uint64_t param_1,uint64_t param_2,char *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = *param_3;
  while (cVar1 != '\0') {
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (param_3[lVar2] != '\0');
    param_3 = param_3 + lVar3 + 2;
    cVar1 = *param_3;
  }
  FUN_180113380();
  return;
}





// 函数: void FUN_1804443c0(uint64_t param_1,uint64_t param_2)
void FUN_1804443c0(uint64_t param_1,uint64_t param_2)

{
  int32_t auStackX_18 [2];
  int32_t auStackX_20 [2];
  
  auStackX_18[0] = 100;
  auStackX_20[0] = 1;
  FUN_180114450(param_1,0,param_2,auStackX_20,auStackX_18,&unknown_var_4576_ptr,0);
  return;
}





// 函数: void FUN_180444410(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4)
void FUN_180444410(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4)

{
  int32_t auStackX_18 [2];
  int32_t auStackX_20 [2];
  
  auStackX_18[0] = param_4;
  auStackX_20[0] = param_3;
  FUN_180113940(param_1,param_2,param_2,auStackX_20,auStackX_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804445b0(uint64_t param_1)
void FUN_1804445b0(uint64_t param_1)

{
  int32_t uVar1;
  longlong lVar2;
  uint64_t auStackX_10 [3];
  
  lVar2 = SYSTEM_DATA_MANAGER_A;
  auStackX_10[0] = 0;
  uVar1 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1660);
  *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1660) = 0;
  FUN_18010f6f0(param_1,auStackX_10,0x200);
  *(int32_t *)(lVar2 + 0x1660) = uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180444600(uint64_t param_1,uint64_t param_2,float param_3,float param_4,int param_5)
void FUN_180444600(uint64_t param_1,uint64_t param_2,float param_3,float param_4,int param_5)

{
  float *pfVar1;
  int8_t auStack_98 [32];
  float *pfStack_78;
  int16_t *puStack_70;
  int32_t uStack_68;
  float afStack_58 [2];
  float afStack_50 [2];
  int16_t uStack_48;
  int8_t uStack_46;
  uint64_t uStack_45;
  int32_t uStack_3d;
  int8_t uStack_39;
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98;
  uStack_48 = 0x6625;
  uStack_46 = 0;
  uStack_45 = 0;
  uStack_3d = 0;
  uStack_39 = 0;
  if (-1 < param_5) {
    FUN_180121200(&uStack_48,0x10,&unknown_var_2232_ptr);
  }
  uStack_68 = 0x20000;
  pfStack_78 = afStack_58;
  if (param_4 <= 0.0) {
    pfStack_78 = (float *)0x0;
  }
  pfVar1 = afStack_50;
  if (param_3 <= 0.0) {
    pfVar1 = (float *)0x0;
  }
  puStack_70 = &uStack_48;
  afStack_58[0] = param_4;
  afStack_50[0] = param_3;
  FUN_180114450(param_1,4,param_2,pfVar1);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180444700(uint64_t param_1,int32_t *param_2,int32_t *param_3,int param_4)
void FUN_180444700(uint64_t param_1,int32_t *param_2,int32_t *param_3,int param_4)

{
  int8_t auStack_78 [48];
  int16_t *puStack_48;
  int32_t uStack_38;
  int32_t uStack_34;
  int16_t uStack_30;
  int8_t uStack_2e;
  uint64_t uStack_2d;
  int32_t uStack_25;
  int8_t uStack_21;
  ulonglong uStack_20;
  
  uStack_20 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_78;
  uStack_38 = *param_2;
  uStack_34 = *param_3;
  uStack_30 = 0x6625;
  uStack_2e = 0;
  uStack_2d = 0;
  uStack_25 = 0;
  uStack_21 = 0;
  if (-1 < param_4) {
    FUN_180121200(&uStack_30,0x10,&unknown_var_2232_ptr);
  }
  puStack_48 = &uStack_30;
  FUN_180114890(param_1);
  *param_2 = uStack_38;
  *param_3 = uStack_34;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_78);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804447c0(uint64_t param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4,
void FUN_1804447c0(uint64_t param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4,
                  int param_5)

{
  int8_t auStack_98 [48];
  int16_t *puStack_68;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int16_t uStack_48;
  int8_t uStack_46;
  uint64_t uStack_45;
  int32_t uStack_3d;
  int8_t uStack_39;
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98;
  uStack_58 = *param_2;
  uStack_54 = *param_3;
  uStack_48 = 0x6625;
  uStack_46 = 0;
  uStack_50 = *param_4;
  uStack_45 = 0;
  uStack_3d = 0;
  uStack_39 = 0;
  if (-1 < param_5) {
    FUN_180121200(&uStack_48,0x10,&unknown_var_2232_ptr);
  }
  puStack_68 = &uStack_48;
  FUN_180114890(param_1);
  *param_2 = uStack_58;
  *param_3 = uStack_54;
  *param_4 = uStack_50;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804448a0(uint64_t param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4,
void FUN_1804448a0(uint64_t param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4,
                  int32_t *param_5,int param_6)

{
  int8_t auStack_98 [48];
  int16_t *puStack_68;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int16_t uStack_48;
  int8_t uStack_46;
  uint64_t uStack_45;
  int32_t uStack_3d;
  int8_t uStack_39;
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98;
  uStack_58 = *param_2;
  uStack_54 = *param_3;
  uStack_48 = 0x6625;
  uStack_46 = 0;
  uStack_50 = *param_4;
  uStack_4c = *param_5;
  uStack_45 = 0;
  uStack_3d = 0;
  uStack_39 = 0;
  if (-1 < param_6) {
    FUN_180121200(&uStack_48,0x10,&unknown_var_2232_ptr);
  }
  puStack_68 = &uStack_48;
  FUN_180114890(param_1);
  *param_2 = uStack_58;
  *param_3 = uStack_54;
  *param_4 = uStack_50;
  *param_5 = uStack_4c;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_1804449a0(void)

{
  float fVar1;
  
  fVar1 = (float)expf(*(float *)(SYSTEM_STATE_MANAGER + 0x16c0) * 4.0);
  return fVar1 * 0.05;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180444a20(uint64_t param_1,uint64_t param_2,int param_3,uint64_t param_4,
void FUN_180444a20(uint64_t param_1,uint64_t param_2,int param_3,uint64_t param_4,
                  uint64_t param_5,int8_t param_6)

{
  int8_t auStack_168 [32];
  int8_t uStack_148;
  int8_t uStack_147;
  int8_t auStack_144 [268];
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_168;
  uStack_148 = (int8_t)param_3;
  uStack_147 = param_6;
                    // WARNING: Subroutine does not return
  memcpy(auStack_144,param_1,(longlong)param_3 << 2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180444b70(uint64_t param_1,uint64_t param_2,uint64_t param_3,int param_4)
void FUN_180444b70(uint64_t param_1,uint64_t param_2,uint64_t param_3,int param_4)

{
  int8_t in_stack_00000040;
  int8_t auStack_1f8 [32];
  int8_t uStack_1d8;
  int8_t uStack_1d7;
  int8_t auStack_1d4 [396];
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1f8;
  uStack_1d8 = (int8_t)param_4;
  uStack_1d7 = in_stack_00000040;
                    // WARNING: Subroutine does not return
  memcpy(auStack_1d4,param_1,(longlong)param_4 << 2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180444dd0(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6)
void FUN_180444dd0(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6)

{
  longlong lVar1;
  int32_t uStack_18;
  int16_t uStack_14;
  
  lVar1 = *(longlong *)(render_system_data_memory + 0x2018);
  uStack_18._0_2_ = CONCAT11(param_2,param_1);
  uStack_18 = CONCAT13(param_4,CONCAT12(param_3,(int16_t)uStack_18));
  uStack_14 = CONCAT11(param_6,param_5);
  if ((*(int *)(lVar1 + 799) != uStack_18) || (*(short *)(lVar1 + 0x323) != uStack_14)) {
    *(int *)(lVar1 + 799) = uStack_18;
    *(short *)(lVar1 + 0x323) = uStack_14;
    *(int16_t *)(lVar1 + 0x194) = 0;
    if (((param_1 == '\0') && (((param_2 == '\0' && (param_3 == '\0')) && (param_4 == '\0')))) &&
       ((param_5 == '\0' && (param_6 == '\0')))) {
      *(int8_t *)(lVar1 + 0x192) = 0;
      return;
    }
    *(int8_t *)(lVar1 + 0x192) = 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180444e90(float param_1,float param_2,float param_3)
void FUN_180444e90(float param_1,float param_2,float param_3)

{
  float fVar1;
  int8_t uStackX_8;
  int8_t uStackX_9;
  int8_t uStackX_a;
  
  if (0.0 <= param_1) {
    if (1.0 <= param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  if (0.0 <= param_2) {
    if (1.0 <= param_2) {
      param_2 = 1.0;
    }
  }
  else {
    param_2 = 0.0;
  }
  fVar1 = 0.0;
  if ((0.0 <= param_3) && (fVar1 = param_3, 1.0 <= param_3)) {
    fVar1 = 1.0;
  }
  uStackX_8 = (int8_t)(int)(param_1 * 256.0);
  uStackX_9 = (int8_t)(int)(param_2 * 256.0);
  uStackX_a = (int8_t)(int)(fVar1 * 256.0);
  FUN_1808eea10(*(int32_t *)(*(longlong *)(render_system_data_memory + 0x2018) + 0x32c),&uStackX_8);
  return;
}



uint64_t FUN_180445060(ulonglong param_1)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  if (uVar2 < 0x100) {
    if (uVar2 - 0xe0 < 5) {
      if (uVar2 == 0xe0) {
        param_1 = 1;
      }
      else if (uVar2 == 0xe1) {
        param_1 = 2;
      }
      else if (uVar2 == 0xe2) {
        param_1 = 4;
      }
      else if (uVar2 == 0xe3) {
        param_1 = 5;
      }
      else if (uVar2 == 0xe4) {
        param_1 = 6;
      }
    }
    else {
      uVar2 = FUN_1803f5970(param_1,param_1 & 0xffffffff);
      param_1 = (ulonglong)uVar2;
    }
    sVar1 = GetAsyncKeyState(param_1);
    if (sVar1 != 0) {
      return 1;
    }
  }
  return 0;
}





// 函数: void FUN_180445110(uint param_1)
void FUN_180445110(uint param_1)

{
  int32_t uStack_18;
  int8_t uStack_14;
  uint64_t uStack_10;
  
  if (param_1 < 0x100) {
    uStack_10 = 0;
    uStack_18 = 4;
    uStack_14 = (int8_t)param_1;
    FUN_1801edeb0(param_1,&uStack_18);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_180445180(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  void *puStack_30;
  longlong lStack_28;
  int32_t uStack_20;
  uint64_t uStack_18;
  
  puStack_30 = &unknown_var_3456_ptr;
  uStack_18 = 0;
  lStack_28 = 0;
  uStack_20 = 0;
  FUN_1801717e0(*(uint64_t *)(system_main_module_state + 8),&puStack_30,param_3,param_4,0xfffffffffffffffe);
  uVar1 = (**(code **)(*system_cache_buffer + 0x78))(system_cache_buffer,&puStack_30);
  puStack_30 = &unknown_var_3456_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_180445390(int32_t *param_1,float param_2)

{
  longlong lVar1;
  int32_t uVar2;
  uint64_t uVar3;
  longlong *plVar4;
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_24;
  
  uVar3 = FUN_18062b1e0(system_memory_pool_ptr,0x468,8,3,0xfffffffffffffffe);
  plVar4 = (longlong *)FUN_1803dd0f0(uVar3);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  if (param_2 != *(float *)(plVar4 + 6)) {
    *(int8_t *)(plVar4 + 0x7d) = 0;
    *(int8_t *)((longlong)plVar4 + 0x3a1) = 1;
    *(float *)(plVar4 + 6) = param_2;
    lVar1 = plVar4[5];
    if (lVar1 != 0) {
      *(short *)(lVar1 + 0x2b0) = *(short *)(lVar1 + 0x2b0) + 1;
      if (*(longlong *)(lVar1 + 0x168) != 0) {
        func_0x0001802eeba0();
      }
    }
  }
  uVar2 = (**(code **)(*plVar4 + 8))(plVar4);
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uStack_30 = SUB84(plVar4,0);
  uStack_2c = (int32_t)((ulonglong)plVar4 >> 0x20);
  *param_1 = uStack_30;
  param_1[1] = uStack_2c;
  param_1[2] = uVar2;
  param_1[3] = uStack_24;
  (**(code **)(*plVar4 + 0x38))(plVar4);
  return param_1;
}





// 函数: void FUN_180445480(uint64_t *param_1,uint64_t *param_2)
void FUN_180445480(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  
  if ((void *)*param_1 == &unknown_var_6656_ptr) {
    param_1 = param_1 + 8;
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





