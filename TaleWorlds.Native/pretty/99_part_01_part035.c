#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part035.c - 9 个函数

// 函数: void FUN_1800c2ff0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800c2ff0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 != (uint64_t *)0x0) {
    FUN_1800c2ff0(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
    if ((longlong *)param_2[6] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[6] + 0x38))();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1800c3070(longlong *param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
             int32_t *param_5)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint64_t uVar8;
  bool bVar9;
  
  plVar6 = (longlong *)*param_1;
  if ((param_4 == plVar6) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (iVar5 = memcmp(plVar6 + 4,param_5,0x10), param_4 = plVar6, iVar5 < 0))
    {
LAB_1800c311e:
      uVar8 = 0;
      goto LAB_1800c3121;
    }
  }
  else {
    plVar6 = (longlong *)func_0x00018066bd70(param_4);
    iVar5 = memcmp(param_4 + 4,param_5,0x10);
    if ((iVar5 < 0) && (iVar5 = memcmp(param_5,plVar6 + 4,0x10), iVar5 < 0)) {
      if (*param_4 == 0) goto LAB_1800c311e;
      uVar8 = 1;
      param_4 = plVar6;
LAB_1800c3121:
      if (param_4 != (longlong *)0x0) {
        FUN_1800c3320(param_1,param_2,param_4,uVar8,param_5);
        return param_2;
      }
    }
  }
  bVar9 = true;
  plVar6 = (longlong *)param_1[2];
  plVar4 = param_1;
  while (plVar6 != (longlong *)0x0) {
    iVar5 = memcmp(param_5,plVar6 + 4,0x10);
    bVar9 = iVar5 < 0;
    plVar4 = plVar6;
    if (bVar9) {
      plVar6 = (longlong *)plVar6[1];
    }
    else {
      plVar6 = (longlong *)*plVar6;
    }
  }
  plVar6 = plVar4;
  if (bVar9) {
    if (plVar4 == (longlong *)param_1[1]) goto LAB_1800c31aa;
    plVar6 = (longlong *)func_0x00018066b9a0(plVar4);
  }
  iVar5 = memcmp(plVar6 + 4,param_5,0x10);
  if (-1 < iVar5) {
    *param_2 = plVar6;
    return param_2;
  }
LAB_1800c31aa:
  if ((plVar4 == param_1) || (iVar5 = memcmp(param_5,plVar4 + 4,0x10), iVar5 < 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  lVar7 = FUN_18062b420(system_memory_pool_ptr,0x38,(char)param_1[5]);
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(int32_t *)(lVar7 + 0x20) = *param_5;
  *(int32_t *)(lVar7 + 0x24) = uVar1;
  *(int32_t *)(lVar7 + 0x28) = uVar2;
  *(int32_t *)(lVar7 + 0x2c) = uVar3;
  *(uint64_t *)(lVar7 + 0x30) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar7,plVar4,param_1,uVar8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800c3240(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_1800c3240(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  longlong param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  longlong lVar4;
  uint64_t uVar5;
  
  if (((char)param_4 == '\0') && (param_3 != param_1)) {
    if (*(int *)(param_3 + 0x30) == 0) {
LAB_1800c32aa:
      uVar5 = 1;
      goto LAB_1800c32b5;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar2 = *(byte **)(param_3 + 0x28);
      lVar4 = *(longlong *)(param_5 + 8) - (longlong)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar3 = (uint)pbVar2[lVar4];
        if (bVar1 != uVar3) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar3 != 0);
      if ((int)(bVar1 - uVar3) < 1) goto LAB_1800c32aa;
    }
  }
  uVar5 = 0;
LAB_1800c32b5:
  lVar4 = FUN_18062b420(system_memory_pool_ptr,0x48,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  FUN_180627ae0(lVar4 + 0x20,param_5);
  *(uint64_t *)(lVar4 + 0x40) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,param_3,param_1,uVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800c3320(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_1800c3320(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  int32_t *param_5)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  longlong lVar5;
  int32_t uVar6;
  
  if (((char)param_4 == '\0') && (param_3 != param_1)) {
    iVar4 = memcmp(param_5,param_3 + 0x20,0x10,param_4,0xfffffffffffffffe);
    if (-1 < iVar4) {
      uVar6 = 1;
      goto LAB_1800c3379;
    }
  }
  uVar6 = 0;
LAB_1800c3379:
  lVar5 = FUN_18062b420(system_memory_pool_ptr,0x38,*(int8_t *)(param_1 + 0x28));
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(int32_t *)(lVar5 + 0x20) = *param_5;
  *(int32_t *)(lVar5 + 0x24) = uVar1;
  *(int32_t *)(lVar5 + 0x28) = uVar2;
  *(int32_t *)(lVar5 + 0x2c) = uVar3;
  *(uint64_t *)(lVar5 + 0x30) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar5,param_3,param_1,uVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800c33e0(longlong param_1)
void FUN_1800c33e0(longlong param_1)

{
  longlong *plVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  longlong *plVar4;
  longlong *plVar5;
  void *puVar6;
  longlong lVar7;
  int8_t auStack_178 [32];
  longlong *plStack_158;
  int32_t auStack_150 [2];
  longlong *plStack_148;
  longlong *plStack_140;
  uint64_t *apuStack_138 [2];
  longlong lStack_128;
  uint64_t uStack_120;
  longlong **pplStack_118;
  longlong *plStack_110;
  longlong **pplStack_108;
  void *puStack_f8;
  void *puStack_f0;
  int32_t uStack_e8;
  uint8_t auStack_e0 [72];
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_120 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
  lStack_128 = param_1;
  puVar2 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x88,8,3);
  *puVar2 = &unknown_var_5912_ptr;
  *puVar2 = &unknown_var_7536_ptr;
  plStack_140 = puVar2 + 1;
  *plStack_140 = (longlong)&unknown_var_720_ptr;
  puVar2[2] = 0;
  *(int32_t *)(puVar2 + 3) = 0;
  *plStack_140 = (longlong)&unknown_var_3480_ptr;
  puVar2[2] = puVar2 + 4;
  *(int32_t *)(puVar2 + 3) = 0;
  *(int8_t *)(puVar2 + 4) = 0;
  plVar5 = puVar2 + 0xd;
  *plVar5 = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  *(int32_t *)(puVar2 + 0xc) = 0;
  *(int32_t *)((longlong)puVar2 + 100) = 0x42480000;
  puStack_f8 = &unknown_var_3480_ptr;
  puStack_f0 = auStack_e0;
  auStack_e0[0] = 0;
  uStack_e8 = 0xb;
  apuStack_138[0] = puVar2;
  strcpy_s(auStack_e0,0x40,&unknown_var_1624_ptr);
  *(int32_t *)(puVar2 + 3) = uStack_e8;
  puVar6 = &system_buffer_ptr;
  if (puStack_f0 != (void *)0x0) {
    puVar6 = puStack_f0;
  }
  strcpy_s(puVar2[2],0x40,puVar6);
  puStack_f8 = &unknown_var_720_ptr;
  pplStack_118 = &plStack_158;
  lVar7 = 4;
  do {
    plStack_158 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,0x28,8,3);
    *plStack_158 = (longlong)&unknown_var_7520_ptr;
    plStack_110 = plStack_158 + 1;
    *plStack_110 = 0;
    plStack_158[2] = 0;
    plStack_158[3] = 0;
    *(int32_t *)(plStack_158 + 4) = 3;
    *plVar5 = (longlong)plStack_158;
    uVar3 = FUN_18062b1e0(system_memory_pool_ptr,0x40,8,3);
    plVar4 = (longlong *)FUN_1802c1260(uVar3);
    puStack_98 = &unknown_var_3480_ptr;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0xc;
    strcpy_s(auStack_80,0x40,&system_state_35d0);
    FUN_1800c48e0();
    pplStack_108 = &plStack_158;
    plStack_158 = plStack_148;
    if (plStack_148 != (longlong *)0x0) {
      (**(code **)(*plStack_148 + 0x28))();
    }
    plVar1 = plStack_158;
    plStack_140 = plStack_158;
    if (plStack_158 != (longlong *)0x0) {
      (**(code **)(*plStack_158 + 0x28))(plStack_158);
    }
    plStack_140 = (longlong *)plVar4[5];
    plVar4[5] = (longlong)plVar1;
    if (plStack_140 != (longlong *)0x0) {
      (**(code **)(*plStack_140 + 0x38))();
    }
    FUN_1802c06b0(plVar4,puVar2);
    if (plStack_158 != (longlong *)0x0) {
      (**(code **)(*plStack_158 + 0x38))();
    }
    plVar1 = (longlong *)plVar4[5];
    if (plVar1 != (longlong *)0x0) {
      auStack_150[0] = 0x31;
      if ((~(byte)((uint)*(int32_t *)(puVar2 + 0xc) >> 0x1c) & 1) == 0) {
        auStack_150[0] = 1;
      }
      (**(code **)(*plVar1 + 0x128))(plVar1,auStack_150);
    }
    plStack_158 = plVar4;
    FUN_18005ea90(*plVar5 + 8,&plStack_158);
    if (plStack_148 != (longlong *)0x0) {
      (**(code **)(*plStack_148 + 0x38))();
    }
    puStack_98 = &unknown_var_720_ptr;
    plVar5 = plVar5 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  *(uint64_t **)(lStack_128 + 0xe8) = puVar2;
  FUN_18005ea90(lStack_128 + 200,apuStack_138);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800c3730(void)
void FUN_1800c3730(void)

{
  uint64_t *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  lVar2 = system_system_data_config;
  uVar4 = 0;
  lVar3 = *(longlong *)(system_system_data_config + 200);
  uVar6 = uVar4;
  if (*(longlong *)(system_system_data_config + 0xd0) - lVar3 >> 3 != 0) {
    do {
      puVar1 = *(uint64_t **)(uVar4 + lVar3);
      if (puVar1 != (uint64_t *)0x0) {
        lVar3 = __RTCastToVoid(puVar1);
        (**(code **)*puVar1)(puVar1,0);
        if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar3);
        }
      }
      uVar5 = (int)uVar6 + 1;
      *(uint64_t *)(uVar4 + *(longlong *)(lVar2 + 200)) = 0;
      uVar4 = uVar4 + 8;
      lVar3 = *(longlong *)(lVar2 + 200);
      uVar6 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 < (ulonglong)(*(longlong *)(lVar2 + 0xd0) - lVar3 >> 3)
            );
  }
  *(longlong *)(lVar2 + 0xd0) = lVar3;
  return;
}






// 函数: void FUN_1800c3761(uint64_t param_1,longlong param_2)
void FUN_1800c3761(uint64_t param_1,longlong param_2)

{
  uint64_t *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  int unaff_R14D;
  ulonglong unaff_R15;
  
  uVar3 = unaff_R15 & 0xffffffff;
  do {
    puVar1 = *(uint64_t **)(uVar3 + param_2);
    if (puVar1 != (uint64_t *)0x0) {
      lVar2 = __RTCastToVoid(puVar1);
      (**(code **)*puVar1)(puVar1,0);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
    }
    unaff_R14D = unaff_R14D + 1;
    *(ulonglong *)(uVar3 + *(longlong *)(unaff_RDI + 200)) = unaff_R15;
    uVar3 = uVar3 + 8;
    param_2 = *(longlong *)(unaff_RDI + 200);
  } while ((ulonglong)(longlong)unaff_R14D <
           (ulonglong)(*(longlong *)(unaff_RDI + 0xd0) - param_2 >> 3));
  *(longlong *)(unaff_RDI + 0xd0) = param_2;
  return;
}






// 函数: void FUN_1800c37dd(uint64_t param_1,uint64_t param_2)
void FUN_1800c37dd(uint64_t param_1,uint64_t param_2)

{
  longlong unaff_RDI;
  
  *(uint64_t *)(unaff_RDI + 0xd0) = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800c37f0(longlong param_1)
void FUN_1800c37f0(longlong param_1)

{
  int32_t uVar1;
  uint64_t *puVar2;
  longlong lVar3;
  void *puVar4;
  int8_t auStack_478 [72];
  void *puStack_430;
  uint64_t *puStack_428;
  int32_t uStack_420;
  uint64_t uStack_418;
  uint64_t uStack_410;
  longlong alStack_3f8 [3];
  int8_t auStack_3e0 [264];
  int8_t auStack_2d8 [8];
  void *puStack_2d0;
  int8_t auStack_b8 [128];
  ulonglong uStack_38;
  
  uStack_410 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_478;
  FUN_18005d260(param_1,*(uint64_t *)(param_1 + 0x10));
  *(longlong *)param_1 = param_1;
  *(longlong *)(param_1 + 8) = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int8_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  FUN_1800c4720(alStack_3f8);
  puStack_430 = &unknown_var_3456_ptr;
  uStack_418 = 0;
  puStack_428 = (uint64_t *)0x0;
  uStack_420 = 0;
  puVar2 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x44,0x13);
  *(int8_t *)puVar2 = 0;
  puStack_428 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_418 = CONCAT44(uStack_418._4_4_,uVar1);
  *puVar2 = 0x6f4d2f4553414224;
  puVar2[1] = 0x614e2f73656c7564;
  puVar2[2] = 0x646f4d2f65766974;
  puVar2[3] = 0x2f61746144656c75;
  *(int32_t *)(puVar2 + 4) = 0x65726f43;
  *(int32_t *)((longlong)puVar2 + 0x24) = 0x656d6147;
  *(int32_t *)(puVar2 + 5) = 0x65666552;
  *(int32_t *)((longlong)puVar2 + 0x2c) = 0x636e6572;
  *(int32_t *)(puVar2 + 6) = 0x662f7365;
  *(int32_t *)((longlong)puVar2 + 0x34) = 0x61726f6c;
  *(int32_t *)(puVar2 + 7) = 0x746e655f;
  *(int32_t *)((longlong)puVar2 + 0x3c) = 0x2e797469;
  *(int32_t *)(puVar2 + 8) = 0x747874;
  uStack_420 = 0x43;
  FUN_180624440(auStack_2d8,&puStack_430);
  puVar4 = &system_buffer_ptr;
  if (puStack_2d0 != (void *)0x0) {
    puVar4 = puStack_2d0;
  }
  lVar3 = FUN_1800c4800(auStack_3e0,puVar4,1);
  if (lVar3 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((longlong)alStack_3f8 + (longlong)*(int *)(alStack_3f8[0] + 4),2);
  }
  else {
    _clear___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((longlong)alStack_3f8 + (longlong)*(int *)(alStack_3f8[0] + 4),0,0);
  }
                    // WARNING: Subroutine does not return
  memset(auStack_b8,0,0x80);
}






// 函数: void FUN_1800c3bf0(longlong *param_1)
void FUN_1800c3bf0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = param_1 + 0x17;
  *(void **)((longlong)*(int *)(*param_1 + 4) + -0xb8 + (longlong)plVar1) = &unknown_var_1768_ptr;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -0xbc + (longlong)plVar1) =
       *(int *)(*param_1 + 4) + -0xb8;
  FUN_18009fb60(param_1 + 3);
  __1__basic_iostream_DU__char_traits_D_std___std__UEAA_XZ(param_1 + 4);
                    // WARNING: Could not recover jumptable at 0x0001800c3c62. Too many branches
                    // WARNING: Treating indirect jump as call
  __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(plVar1);
  return;
}






