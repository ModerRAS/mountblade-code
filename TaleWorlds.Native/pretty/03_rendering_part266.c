#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part266.c - 12 个函数

// 函数: void FUN_180415120(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
void FUN_180415120(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,longlong *param_6,int8_t *param_7,int8_t *param_8)

{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  void *puVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  int8_t auStack_328 [32];
  void *puStack_308;
  int8_t *puStack_2f8;
  uint64_t *puStack_2e8;
  longlong lStack_2e0;
  int8_t auStack_2d8 [16];
  code *pcStack_2c8;
  code *pcStack_2c0;
  longlong lStack_2b8;
  int32_t uStack_2b0;
  uint64_t uStack_2a8;
  int8_t *puStack_2a0;
  int8_t *puStack_298;
  int8_t auStack_288 [48];
  longlong lStack_258;
  longlong lStack_250;
  longlong lStack_248;
  int32_t uStack_200;
  char cStack_1fc;
  void *puStack_1f8;
  int8_t *puStack_1f0;
  int32_t uStack_1e8;
  int8_t auStack_1e0 [256];
  longlong lStack_e0;
  longlong lStack_d8;
  uint64_t uStack_d0;
  ulonglong uStack_c8;
  longlong lStack_c0;
  int8_t uStack_b8;
  uint64_t auStack_b0 [2];
  code *pcStack_a0;
  code *pcStack_98;
  int8_t auStack_90 [16];
  code *pcStack_80;
  code *pcStack_78;
  ulonglong uStack_48;
  
  uStack_2a8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_328;
  puStack_2a0 = param_7;
  puStack_298 = param_8;
  if (*(int *)(param_2 + 0x70) == 0) {
                    // WARNING: Subroutine does not return
    FUN_180062300(_DAT_180c86928,&unknown_var_9360_ptr);
  }
  puStack_2f8 = auStack_288;
  cVar1 = FUN_180381130(param_2,param_4,param_5,param_3);
  if (cVar1 == '\0') {
    if (*(longlong *)(param_8 + 0x10) != 0) {
      (**(code **)(param_8 + 0x18))(param_8);
    }
  }
  else {
    lStack_2e0 = lStack_248;
    lVar6 = lStack_258;
    lVar7 = lStack_250;
    if (param_6 != (longlong *)0x0) {
      if (cStack_1fc != '\0') {
        puStack_308 = &unknown_var_8576_ptr;
        FUN_1800623b0(_DAT_180c86928,0,0x80000000000,9);
      }
      lVar7 = param_6[1];
      if (cStack_1fc == '\0') {
        lVar6 = lStack_258 + *param_6;
        lStack_2e0 = lVar7;
      }
    }
    puStack_2e8 = (uint64_t *)auStack_2d8;
    pcStack_2c8 = (code *)0x0;
    pcStack_2c0 = _guard_check_icall;
    if (auStack_2d8 != param_7) {
      pcVar5 = *(code **)(param_7 + 0x10);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(auStack_2d8,param_7,1);
        pcVar5 = *(code **)(param_7 + 0x10);
      }
      pcStack_2c0 = *(code **)(param_7 + 0x18);
      pcStack_2c8 = pcVar5;
    }
    uStack_2b0 = uStack_200;
    puStack_1f8 = &unknown_var_2008_ptr;
    puStack_1f0 = auStack_1e0;
    uStack_1e8 = 0;
    auStack_1e0[0] = 0;
    pcStack_a0 = (code *)0x0;
    pcStack_98 = _guard_check_icall;
    puStack_2e8 = (uint64_t *)auStack_90;
    pcStack_80 = (code *)0x0;
    pcStack_78 = _guard_check_icall;
    lStack_c0 = 0xffffffffffffffff;
    lStack_d8 = 0xffffffffffffffff;
    lStack_e0 = 0xffffffffffffffff;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_b8 = 0;
    puVar4 = &system_buffer_ptr;
    if (*(void **)(param_2 + 0x68) != (void *)0x0) {
      puVar4 = *(void **)(param_2 + 0x68);
    }
    lStack_2b8 = lVar7;
    FUN_1800693f0(&puStack_1f8,puVar4);
    lStack_d8 = lStack_2e0;
    uStack_c8 = (ulonglong)(-(uint)(cStack_1fc != '\0') & 3);
    lStack_c0 = lStack_250;
    lStack_e0 = lVar6;
    if (pcStack_a0 != (code *)0x0) {
      (*pcStack_a0)(auStack_b0,0,0);
    }
    pcStack_a0 = FUN_180415730;
    pcStack_98 = (code *)&unknown_var_3072_ptr;
    uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,system_allocation_flags);
    FUN_180415850(uVar3,auStack_2d8);
    auStack_b0[0] = uVar3;
    if (auStack_90 != param_8) {
      if (pcStack_80 != (code *)0x0) {
        (*pcStack_80)(auStack_90,0,0);
      }
      pcVar5 = *(code **)(param_8 + 0x10);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(auStack_90,param_8,1);
        pcVar5 = *(code **)(param_8 + 0x10);
      }
      pcStack_78 = *(code **)(param_8 + 0x18);
      pcStack_80 = pcVar5;
    }
    lVar7 = *(longlong *)(_DAT_180c86940 + 8);
    lVar6 = FUN_18006d0b0(lVar7 + 200);
    if (lVar6 != 0) {
      FUN_18006d6c0(lVar6,&puStack_1f8);
    }
    iVar2 = _Cnd_signal(lVar7 + 0x330);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    puStack_2e8 = (uint64_t *)auStack_90;
    if (pcStack_80 != (code *)0x0) {
      (*pcStack_80)(auStack_90,0,0);
    }
    puStack_2e8 = auStack_b0;
    if (pcStack_a0 != (code *)0x0) {
      (*pcStack_a0)(auStack_b0,0,0);
    }
    puStack_1f8 = &unknown_var_720_ptr;
    puStack_2e8 = (uint64_t *)auStack_2d8;
    if (pcStack_2c8 != (code *)0x0) {
      (*pcStack_2c8)(auStack_2d8,0,0);
    }
  }
  if (*(code **)(param_7 + 0x10) != (code *)0x0) {
    (**(code **)(param_7 + 0x10))(param_7,0,0);
  }
  if (*(code **)(param_8 + 0x10) != (code *)0x0) {
    (**(code **)(param_8 + 0x10))(param_8,0,0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_328);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180415580(longlong *param_1,ulonglong param_2)
void FUN_180415580(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = param_1[1];
  if (param_2 <= (ulonglong)((param_1[2] - lVar2) / 0x90)) {
    if (param_2 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar2,0,param_2 * 0x90);
    }
    param_1[1] = lVar2;
    return;
  }
  lVar4 = *param_1;
  lVar1 = (lVar2 - lVar4) / 0x90;
  uVar3 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar3 = 1;
  }
  if (uVar3 < lVar1 + param_2) {
    uVar3 = lVar1 + param_2;
  }
  if (uVar3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar3 * 0x90,(char)param_1[3]);
    lVar4 = *param_1;
    lVar2 = param_1[1];
  }
  if (lVar4 != lVar2) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,lVar4,lVar2 - lVar4);
  }
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,param_2 * 0x90);
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = lVar1;
  param_1[2] = uVar3 * 0x90 + lVar1;
  param_1[1] = lVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804155cb(void)
void FUN_1804155cb(void)

{
  longlong in_RAX;
  longlong lVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar2;
  longlong *unaff_RDI;
  longlong in_R9;
  
  lVar1 = SUB168(SEXT816(in_RAX) * SEXT816(unaff_RBP - in_R9),8);
  lVar1 = (lVar1 >> 3) - (lVar1 >> 0x3f);
  uVar2 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  if (uVar2 < (ulonglong)(lVar1 + unaff_RBX)) {
    uVar2 = lVar1 + unaff_RBX;
  }
  if (uVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar2 * 0x90,(char)unaff_RDI[3]);
    in_R9 = *unaff_RDI;
    unaff_RBP = unaff_RDI[1];
  }
  if (in_R9 != unaff_RBP) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,in_R9,unaff_RBP - in_R9);
  }
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,unaff_RBX * 0x90);
  }
  if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RDI = lVar1;
  unaff_RDI[2] = uVar2 * 0x90 + lVar1;
  unaff_RDI[1] = lVar1;
  return;
}





// 函数: void FUN_1804156c9(void)
void FUN_1804156c9(void)

{
  longlong unaff_RBX;
  uint64_t unaff_RBP;
  longlong unaff_RDI;
  
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *(uint64_t *)(unaff_RDI + 8) = unaff_RBP;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180415730(longlong *param_1,longlong *param_2,int param_3,uint64_t param_4)

{
  longlong lVar1;
  
  if (param_3 == 3) {
    return 0x180c075d0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if (*(code **)(lVar1 + 0x10) != (code *)0x0) {
        (**(code **)(lVar1 + 0x10))(lVar1,0,0,param_4,0xfffffffffffffffe);
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar1);
    }
  }
  else {
    if (param_3 == 1) {
      lVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,system_allocation_flags);
      FUN_180415850(lVar1,*param_2);
      *param_1 = lVar1;
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



longlong FUN_180415850(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(code **)(param_1 + 0x18) = _guard_check_icall;
  if (param_1 != param_2) {
    pcVar1 = *(code **)(param_2 + 0x10);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1,param_2,1,param_4,0xfffffffffffffffe);
      pcVar1 = *(code **)(param_2 + 0x10);
    }
    *(code **)(param_1 + 0x10) = pcVar1;
    *(uint64_t *)(param_1 + 0x18) = *(uint64_t *)(param_2 + 0x18);
  }
  *(uint64_t *)(param_1 + 0x20) = *(uint64_t *)(param_2 + 0x20);
  *(int32_t *)(param_1 + 0x28) = *(int32_t *)(param_2 + 0x28);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1804158e0(longlong param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
             ulonglong param_5)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t *puVar6;
  uint64_t uVar7;
  
  uVar3 = param_5 % (ulonglong)*(uint *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  plVar2 = *(longlong **)(lVar1 + uVar3 * 8);
  do {
    if (plVar2 == (longlong *)0x0) {
LAB_18041593f:
      FUN_18066c220(param_1 + 0x20,&param_5,(ulonglong)*(uint *)(param_1 + 0x10),
                    *(int32_t *)(param_1 + 0x18),1);
      puVar6 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x20,*(int8_t *)(param_1 + 0x2c));
      uVar4 = *(int32_t *)((longlong)param_4 + 4);
      lVar1 = param_4[1];
      uVar5 = *(int32_t *)((longlong)param_4 + 0xc);
      *puVar6 = (int)*param_4;
      puVar6[1] = uVar4;
      puVar6[2] = (int)lVar1;
      puVar6[3] = uVar5;
      *(uint64_t *)(puVar6 + 4) = 0x7fffffff;
      *(uint64_t *)(puVar6 + 6) = 0;
      if ((char)param_5 == '\0') {
        *(uint64_t *)(puVar6 + 6) = *(uint64_t *)(*(longlong *)(param_1 + 8) + uVar3 * 8);
        *(int32_t **)(*(longlong *)(param_1 + 8) + uVar3 * 8) = puVar6;
        lVar1 = *(longlong *)(param_1 + 8);
        *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
        *param_2 = puVar6;
        param_2[1] = lVar1 + uVar3 * 8;
        *(int8_t *)(param_2 + 2) = 1;
        return param_2;
      }
      uVar7 = FUN_18062b1e0(_DAT_180c8ed18,(ulonglong)param_5._4_4_ * 8 + 8,8,
                            *(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
      memset(uVar7,0,(ulonglong)param_5._4_4_ * 8);
    }
    if ((*param_4 == *plVar2) && (param_4[1] == plVar2[1])) {
      if (plVar2 != (longlong *)0x0) {
        *param_2 = plVar2;
        param_2[1] = lVar1 + uVar3 * 8;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
      goto LAB_18041593f;
    }
    plVar2 = (longlong *)plVar2[3];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180415947(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180415947(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t *puVar5;
  uint64_t uVar6;
  int32_t *unaff_RBX;
  longlong unaff_RDI;
  longlong unaff_R12;
  uint64_t *unaff_R15;
  char cStack0000000000000080;
  uint uStack0000000000000084;
  
  FUN_18066c220(param_1,&stack0x00000080,param_3,param_4,1);
  puVar5 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x20,*(int8_t *)(unaff_RDI + 0x2c));
  uVar2 = unaff_RBX[1];
  uVar3 = unaff_RBX[2];
  uVar4 = unaff_RBX[3];
  *puVar5 = *unaff_RBX;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  *(uint64_t *)(puVar5 + 4) = 0x7fffffff;
  *(uint64_t *)(puVar5 + 6) = 0;
  if (cStack0000000000000080 != '\0') {
    uVar6 = FUN_18062b1e0(_DAT_180c8ed18,(ulonglong)uStack0000000000000084 * 8 + 8,8,
                          *(int8_t *)(unaff_RDI + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar6,0,(ulonglong)uStack0000000000000084 * 8);
  }
  *(uint64_t *)(puVar5 + 6) = *(uint64_t *)(*(longlong *)(unaff_RDI + 8) + unaff_R12 * 8);
  *(int32_t **)(*(longlong *)(unaff_RDI + 8) + unaff_R12 * 8) = puVar5;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = puVar5;
  unaff_R15[1] = lVar1 + unaff_R12 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180415a52(longlong param_1,longlong param_2,uint64_t param_3)
void FUN_180415a52(longlong param_1,longlong param_2,uint64_t param_3)

{
  longlong lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t *puVar5;
  uint64_t uVar6;
  int32_t *unaff_RBX;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong *unaff_R15;
  char cStack0000000000000080;
  uint uStack0000000000000084;
  
  if (param_1 != 0) {
    *unaff_R15 = param_1;
    unaff_R15[1] = param_2;
    *(int8_t *)(unaff_R15 + 2) = 0;
    return;
  }
  FUN_18066c220(unaff_RDI + 0x20,&stack0x00000080,param_3,*(int32_t *)(unaff_RDI + 0x18),1);
  puVar5 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x20,*(int8_t *)(unaff_RDI + 0x2c));
  uVar2 = unaff_RBX[1];
  uVar3 = unaff_RBX[2];
  uVar4 = unaff_RBX[3];
  *puVar5 = *unaff_RBX;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  *(uint64_t *)(puVar5 + 4) = 0x7fffffff;
  *(uint64_t *)(puVar5 + 6) = 0;
  if (cStack0000000000000080 != '\0') {
    uVar6 = FUN_18062b1e0(_DAT_180c8ed18,(ulonglong)uStack0000000000000084 * 8 + 8,8,
                          *(int8_t *)(unaff_RDI + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar6,0,(ulonglong)uStack0000000000000084 * 8);
  }
  *(uint64_t *)(puVar5 + 6) = *(uint64_t *)(*(longlong *)(unaff_RDI + 8) + unaff_R12 * 8);
  *(int32_t **)(*(longlong *)(unaff_RDI + 8) + unaff_R12 * 8) = puVar5;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = (longlong)puVar5;
  unaff_R15[1] = lVar1 + unaff_R12 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}





// 函数: void FUN_180415a77(ulonglong param_1)
void FUN_180415a77(ulonglong param_1)

{
  longlong lVar1;
  uint64_t unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong *unaff_R15;
  
  if ((1 < param_1) && (*(longlong *)(unaff_RDI + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(*(longlong *)(unaff_RDI + 8));
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(longlong *)(unaff_RDI + 8) = unaff_R14;
  *(uint64_t *)(unaff_R13 + 0x18) = *(uint64_t *)(unaff_R14 + unaff_R12 * 8);
  *(longlong *)(*(longlong *)(unaff_RDI + 8) + unaff_R12 * 8) = unaff_R13;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R13;
  unaff_R15[1] = lVar1 + unaff_R12 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}





// 函数: void FUN_180415a9d(void)
void FUN_180415a9d(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong *unaff_R15;
  
  *(uint64_t *)(unaff_R13 + 0x18) = *(uint64_t *)(*(longlong *)(unaff_RDI + 8) + unaff_R12 * 8);
  *(longlong *)(*(longlong *)(unaff_RDI + 8) + unaff_R12 * 8) = unaff_R13;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R13;
  unaff_R15[1] = lVar1 + unaff_R12 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180415af0(longlong param_1)
void FUN_180415af0(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int8_t auStack_68 [32];
  ulonglong uStack_48;
  longlong alStack_38 [3];
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  
  uStack_10 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_68;
  FUN_1800ba100();
  lVar6 = *(longlong *)(param_1 + 0x30);
  uVar2 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uVar3 = uVar2;
  uVar5 = uVar2;
  if ((*(longlong *)(param_1 + 0x38) - lVar6) / 0x90 != 0) {
    do {
      if ((*(ulonglong *)(lVar6 + 0x10 + uVar2 * 0x90) == uStack_20) &&
         (*(ulonglong *)(lVar6 + 0x18 + uVar2 * 0x90) == uStack_18)) {
        uStack_48 = uStack_20 ^ uStack_18;
      }
      else {
        puVar1 = (ulonglong *)(uVar3 + 0x10 + lVar6);
        uStack_20 = *puVar1;
        uStack_18 = puVar1[1];
        uStack_48 = uStack_20 ^ uStack_18;
        FUN_1804158e0(param_1,alStack_38,lVar6,&uStack_20);
        *(int *)(alStack_38[0] + 0x10) = (int)uVar5;
        uStack_48 = uStack_20 ^ uStack_18;
      }
      FUN_1804158e0(param_1,alStack_38);
      uVar4 = (int)uVar5 + 1;
      uVar2 = (ulonglong)(int)uVar4;
      *(int *)(alStack_38[0] + 0x14) = *(int *)(alStack_38[0] + 0x14) + 1;
      lVar6 = *(longlong *)(param_1 + 0x30);
      uVar3 = uVar3 + 0x90;
      uVar5 = (ulonglong)uVar4;
    } while (uVar2 < (ulonglong)((*(longlong *)(param_1 + 0x38) - lVar6) / 0x90));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_68);
}





// 函数: void FUN_180415b53(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_180415b53(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  uint64_t param_5,longlong param_6,uint64_t param_7,uint64_t param_8,
                  ulonglong param_9,ulonglong param_10,ulonglong param_11)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar4;
  uint unaff_EDI;
  
  uVar2 = (ulonglong)unaff_EDI;
  uVar4 = (ulonglong)unaff_EDI;
  do {
    if ((*(ulonglong *)(param_3 + 0x10 + uVar2 * 0x90) != param_9) ||
       (*(ulonglong *)(param_3 + 0x18 + uVar2 * 0x90) != param_10)) {
      puVar1 = (ulonglong *)(uVar4 + 0x10 + param_3);
      param_9 = *puVar1;
      param_10 = puVar1[1];
      FUN_1804158e0(param_10,&param_6,param_3,&param_9,param_9 ^ param_10);
      *(uint *)(param_6 + 0x10) = unaff_EDI;
    }
    FUN_1804158e0();
    unaff_EDI = unaff_EDI + 1;
    uVar4 = uVar4 + 0x90;
    uVar2 = (ulonglong)(int)unaff_EDI;
    *(int *)(param_6 + 0x14) = *(int *)(param_6 + 0x14) + 1;
    param_3 = *(longlong *)(unaff_RBX + 0x30);
    lVar3 = SUB168(SEXT816(unaff_RBP) * SEXT816(*(longlong *)(unaff_RBX + 0x38) - param_3),8);
  } while (uVar2 < (ulonglong)((lVar3 >> 3) - (lVar3 >> 0x3f)));
                    // WARNING: Subroutine does not return
  FUN_1808fc050(param_11 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180415c22(void)
void FUN_180415c22(void)

{
  ulonglong in_stack_00000058;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000058 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180415c50(longlong param_1,longlong param_2,longlong param_3)
void FUN_180415c50(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint64_t *puVar2;
  char *pcVar3;
  uint64_t *puVar4;
  char *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  lVar1 = param_2 + 0x60;
  puVar2 = (uint64_t *)FUN_1804c1300(lVar1,0x60);
  uVar7 = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  *(int32_t *)(puVar2 + 5) = 1;
  puVar2[6] = 0;
  puVar2[8] = 0;
  pcVar3 = "color";
  do {
    pcVar5 = pcVar3;
    pcVar3 = pcVar5 + 1;
  } while (*pcVar3 != '\0');
  *puVar2 = &unknown_var_6236_ptr;
  puVar2[2] = pcVar5 + -0x180a2481b;
  if (*(longlong *)(param_3 + 0x30) == 0) {
    puVar2[10] = 0;
    *(uint64_t **)(param_3 + 0x30) = puVar2;
  }
  else {
    puVar2[10] = *(uint64_t *)(param_3 + 0x38);
    *(uint64_t **)(*(longlong *)(param_3 + 0x38) + 0x58) = puVar2;
  }
  *(uint64_t **)(param_3 + 0x38) = puVar2;
  puVar2[4] = param_3;
  puVar2[0xb] = 0;
  puVar4 = (uint64_t *)FUN_1804c1300(lVar1,0x60);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[4] = 0;
  *(int32_t *)(puVar4 + 5) = 1;
  puVar4[6] = 0;
  puVar4[8] = 0;
  pcVar3 = "keys";
  do {
    pcVar5 = pcVar3;
    pcVar3 = pcVar5 + 1;
  } while (*pcVar3 != '\0');
  *puVar4 = &unknown_var_5204_ptr;
  puVar4[2] = pcVar5 + -0x180a180c3;
  if (puVar2[6] == 0) {
    puVar4[10] = 0;
    puVar2[6] = puVar4;
  }
  else {
    puVar4[10] = puVar2[7];
    *(uint64_t **)(puVar2[7] + 0x58) = puVar4;
  }
  puVar2[7] = puVar4;
  puVar4[4] = puVar2;
  puVar4[0xb] = 0;
  lVar6 = *(longlong *)(param_1 + 0x328) - *(longlong *)(param_1 + 800);
  lVar10 = lVar6 >> 0x3f;
  if (lVar6 / 0x14 + lVar10 != lVar10) {
    lVar10 = 0;
    uVar9 = uVar7;
    do {
      puVar2 = (uint64_t *)FUN_1804c1300(lVar1,0x60);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[4] = 0;
      puVar2[6] = 0;
      puVar2[8] = 0;
      *(int32_t *)(puVar2 + 5) = 1;
      pcVar3 = "key";
      do {
        pcVar5 = pcVar3;
        pcVar3 = pcVar5 + 1;
      } while (*pcVar3 != '\0');
      *puVar2 = &unknown_var_5272_ptr;
      puVar2[2] = pcVar5 + -0x180a18107;
      FUN_18062f990(param_2,puVar2,&unknown_var_5276_ptr,
                    *(int32_t *)(lVar10 + *(longlong *)(param_1 + 800)));
      FUN_18062fb40(param_2,puVar2,&unknown_var_3692_ptr,*(longlong *)(param_1 + 800) + (uVar9 * 5 + 1) * 4
                   );
      if (puVar4[6] == 0) {
        puVar2[10] = 0;
        puVar4[6] = puVar2;
      }
      else {
        puVar2[10] = puVar4[7];
        *(uint64_t **)(puVar4[7] + 0x58) = puVar2;
      }
      puVar4[7] = puVar2;
      uVar8 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar8;
      puVar2[4] = puVar4;
      puVar2[0xb] = 0;
      lVar10 = lVar10 + 0x14;
      uVar9 = (ulonglong)(int)uVar8;
    } while (uVar9 < (ulonglong)
                     ((*(longlong *)(param_1 + 0x328) - *(longlong *)(param_1 + 800)) / 0x14));
  }
  puVar2 = (uint64_t *)FUN_1804c1300(lVar1,0x60);
  uVar7 = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  *(int32_t *)(puVar2 + 5) = 1;
  puVar2[6] = 0;
  puVar2[8] = 0;
  pcVar3 = "alpha";
  do {
    pcVar5 = pcVar3;
    pcVar3 = pcVar5 + 1;
  } while (*pcVar3 != '\0');
  *puVar2 = &unknown_var_2244_ptr;
  puVar2[2] = pcVar5 + -0x180a063c3;
  if (*(longlong *)(param_3 + 0x30) == 0) {
    puVar2[10] = 0;
    *(uint64_t **)(param_3 + 0x30) = puVar2;
  }
  else {
    puVar2[10] = *(uint64_t *)(param_3 + 0x38);
    *(uint64_t **)(*(longlong *)(param_3 + 0x38) + 0x58) = puVar2;
  }
  *(uint64_t **)(param_3 + 0x38) = puVar2;
  puVar2[4] = param_3;
  puVar2[0xb] = 0;
  puVar4 = (uint64_t *)FUN_1804c1300(lVar1,0x60);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[4] = 0;
  *(int32_t *)(puVar4 + 5) = 1;
  puVar4[6] = 0;
  puVar4[8] = 0;
  pcVar3 = "keys";
  do {
    pcVar5 = pcVar3;
    pcVar3 = pcVar5 + 1;
  } while (*pcVar3 != '\0');
  *puVar4 = &unknown_var_5204_ptr;
  puVar4[2] = pcVar5 + -0x180a180c3;
  if (puVar2[6] == 0) {
    puVar4[10] = 0;
    puVar2[6] = puVar4;
  }
  else {
    puVar4[10] = puVar2[7];
    *(uint64_t **)(puVar2[7] + 0x58) = puVar4;
  }
  puVar2[7] = puVar4;
  puVar4[4] = puVar2;
  puVar4[0xb] = 0;
  uVar9 = uVar7;
  if (*(longlong *)(param_1 + 0x348) - *(longlong *)(param_1 + 0x340) >> 3 != 0) {
    do {
      puVar2 = (uint64_t *)FUN_1804c1300(lVar1,0x60);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[4] = 0;
      *(int32_t *)(puVar2 + 5) = 1;
      puVar2[6] = 0;
      puVar2[8] = 0;
      pcVar3 = "key";
      do {
        pcVar5 = pcVar3;
        pcVar3 = pcVar5 + 1;
      } while (*pcVar3 != '\0');
      *puVar2 = &unknown_var_5272_ptr;
      puVar2[2] = pcVar5 + -0x180a18107;
      FUN_18062f990(param_2,puVar2,&unknown_var_5276_ptr,
                    *(int32_t *)(*(longlong *)(param_1 + 0x340) + uVar7));
      FUN_18062f990(param_2,puVar2,&unknown_var_3692_ptr,
                    *(int32_t *)(*(longlong *)(param_1 + 0x340) + 4 + uVar7));
      if (puVar4[6] == 0) {
        puVar2[10] = 0;
        puVar4[6] = puVar2;
      }
      else {
        puVar2[10] = puVar4[7];
        *(uint64_t **)(puVar4[7] + 0x58) = puVar2;
      }
      puVar4[7] = puVar2;
      uVar8 = (int)uVar9 + 1;
      puVar2[4] = puVar4;
      uVar7 = uVar7 + 8;
      puVar2[0xb] = 0;
      uVar9 = (ulonglong)uVar8;
    } while ((ulonglong)(longlong)(int)uVar8 <
             (ulonglong)(*(longlong *)(param_1 + 0x348) - *(longlong *)(param_1 + 0x340) >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



