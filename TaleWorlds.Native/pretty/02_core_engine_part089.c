#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part089.c - 8 个函数

// 函数: void FUN_1801141d0(float *param_1,int param_2,uint64_t param_3,uint64_t param_4,float *param_5,
void FUN_1801141d0(float *param_1,int param_2,uint64_t param_3,uint64_t param_4,float *param_5,
                  char *param_6)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int64_t lVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  bool bVar9;
  int8_t auStack_b8 [32];
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  float fStack_78;
  float fStack_74;
  char acStack_70 [31];
  char acStack_51 [33];
  uint64_t uStack_30;
  
  lVar1 = SYSTEM_DATA_MANAGER_A;
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  func_0x000180123e90(*(int32_t *)(lVar1 + 0x2da0),*(uint64_t *)(lVar1 + 0x1af8));
  *(int32_t *)(lVar1 + 0x1b18) = 0;
  *(int8_t *)(lVar1 + 0x1b1c) = 0;
  *(int32_t *)(lVar1 + 0x1b44) = 0xc;
  cVar2 = *param_6;
  pcVar6 = param_6;
  while (cVar2 != '\0') {
    bVar9 = cVar2 == '%';
    if (bVar9) {
      if (pcVar6[1] != '%') break;
      bVar9 = true;
    }
    pcVar4 = pcVar6 + 1;
    if (!bVar9) {
      pcVar4 = pcVar6;
    }
    pcVar6 = pcVar4 + 1;
    cVar2 = pcVar4[1];
  }
  if ((*pcVar6 == '%') &&
     (pcVar4 = (char *)func_0x000180114060(pcVar6), param_6 = pcVar6, *pcVar4 != '\0')) {
    iVar8 = ((int)pcVar4 - (int)pcVar6) + 1;
    iVar3 = 0x20;
    if (iVar8 < 0x20) {
      iVar3 = iVar8;
    }
    lVar5 = (int64_t)iVar3;
    if (lVar5 != 0) {
      strncpy(acStack_51 + 1,pcVar6,lVar5);
      acStack_51[lVar5] = '\0';
    }
    param_6 = acStack_51 + 1;
  }
  FUN_180121200(acStack_70,0x20,param_6,(double)*param_5);
  for (pcVar6 = acStack_70; (cVar2 = *pcVar6, cVar2 == ' ' || (cVar2 == '\t')); pcVar6 = pcVar6 + 1)
  {
  }
  pcVar4 = pcVar6;
  pcVar7 = pcVar6;
  if (cVar2 != '\0') {
    do {
      pcVar7 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    do {
      pcVar4 = pcVar7;
      if (pcVar4 <= pcVar6) break;
      pcVar7 = pcVar4 + -1;
    } while ((pcVar4[-1] == ' ') || (pcVar4[-1] == '\t'));
  }
  if (pcVar6 != acStack_70) {
                    // WARNING: Subroutine does not return
    memmove(acStack_70,pcVar6,(int64_t)pcVar4 - (int64_t)pcVar6);
  }
  fStack_78 = param_1[2] - *param_1;
  fStack_74 = param_1[3] - param_1[1];
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = CONCAT44(uStack_98._4_4_,0x20010);
  pcVar4[(int64_t)(acStack_70 + -(int64_t)pcVar6)] = '\0';
  cVar2 = FUN_1801166f0(param_3,acStack_70,0x20,&fStack_78);
  if (*(int *)(lVar1 + 0x2da0) == 0) {
    *(int32_t *)(lVar1 + 0x2da0) = *(int32_t *)(lVar1 + 0x1b2c);
    lVar5 = SYSTEM_DATA_MANAGER_A;
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x1b18) = param_2;
    *(int8_t *)(lVar5 + 0x1b1c) = 0;
    if ((param_2 != 0) && (*(int *)(lVar5 + 0x1b20) != param_2)) {
      *(uint64_t *)(lVar5 + 0x1b24) = 0;
    }
  }
  if (cVar2 != '\0') {
    uStack_98 = 0;
    FUN_1801134b0(acStack_70,*(uint64_t *)(lVar1 + 0x1ec8),4,param_5);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180114450(char *param_1,uint param_2,double *param_3,double *param_4,double *param_5,
void FUN_180114450(char *param_1,uint param_2,double *param_3,double *param_4,double *param_5,
                  uint64_t param_6,uint param_7)

{
  int *piVar1;
  double dVar2;
  int64_t lVar3;
  char cVar4;
  double *pdVar5;
  char *pcVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int8_t auStack_e8 [32];
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_a8;
  int8_t auStack_98 [64];
  uint64_t uStack_58;
  
  lVar3 = SYSTEM_DATA_MANAGER_A;
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_e8;
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  if (*(char *)(*(int64_t *)(lVar3 + 0x1af8) + 0xb4) != '\0') goto FUN_180114832;
  if (param_6 == 0) {
    param_6 = *(uint64_t *)(&unknown_var_5912_ptr + (int64_t)(int)param_2 * 0x18);
  }
  if (param_2 < 2) {
    FUN_180121200(auStack_98,0x40,param_6,*(float *)param_3);
  }
  else if (param_2 - 2 < 2) {
    FUN_180121200(auStack_98,0x40,param_6,*param_3);
  }
  else {
    if (param_2 == 4) {
      dVar2 = (double)*(float *)param_3;
    }
    else {
      if (param_2 != 5) goto LAB_180114554;
      dVar2 = *param_3;
    }
    FUN_180121200(auStack_98,0x40,param_6,dVar2);
  }
LAB_180114554:
  uVar7 = param_7 | 1;
  if ((param_7 & 0x20002) != 0) {
    uVar7 = param_7;
  }
  if (param_4 == (double *)0x0) {
    uStack_a8 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar7) | 0x10;
    cVar4 = FUN_1801166f0(param_1,auStack_98,0x40,&uStack_a8);
    if (cVar4 != '\0') {
      uStack_c8 = param_6;
      FUN_1801134b0(auStack_98,*(uint64_t *)(lVar3 + 0x1ec8),param_2,param_3);
    }
  }
  else {
    fVar10 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1660) + *(float *)(SYSTEM_DATA_MANAGER_A + 0x1660) +
             *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8);
    FUN_18012e3b0();
    FUN_18012e1b0(param_1);
    fVar9 = *(float *)(lVar3 + 0x1674);
    fVar8 = (float)func_0x00018012d6a0();
    fVar8 = fVar8 - (fVar10 + fVar10 + fVar9 + fVar9);
    if (fVar8 <= 1.0) {
      fVar8 = 1.0;
    }
    func_0x00018012d470(fVar8);
    uStack_a8 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar7) | 0x10;
    cVar4 = FUN_1801166f0(&system_buffer_ptr,auStack_98,0x40,&uStack_a8);
    if (cVar4 != '\0') {
      uStack_c8 = param_6;
      FUN_1801134b0(auStack_98,*(uint64_t *)(lVar3 + 0x1ec8),param_2,param_3);
    }
    func_0x00018012d640();
    uVar7 = (uVar7 & 0x4000 | 0x2040) >> 6;
    func_0x00018012e760(0,*(int32_t *)(lVar3 + 0x1674));
    uStack_a8 = CONCAT44(fVar10,fVar10);
    cVar4 = FUN_18010f6f0(&system_data_63b4,&uStack_a8,uVar7);
    if (cVar4 != '\0') {
      if ((*(char *)(lVar3 + 0x134) == '\0') || (pdVar5 = param_5, param_5 == (double *)0x0)) {
        pdVar5 = param_4;
      }
      switch(param_2) {
      case 0:
      case 1:
        *(int *)param_3 = (int)*(float *)param_3 - (int)*(float *)pdVar5;
        break;
      case 2:
      case 3:
        *param_3 = (double)((int64_t)*param_3 - (int64_t)*pdVar5);
        break;
      case 4:
        *(float *)param_3 = *(float *)param_3 - *(float *)pdVar5;
        break;
      case 5:
        *param_3 = *param_3 - *pdVar5;
      }
    }
    func_0x00018012e760(0,*(int32_t *)(lVar3 + 0x1674));
    uStack_a8 = CONCAT44(fVar10,fVar10);
    cVar4 = FUN_18010f6f0(&system_callback1_ptr,&uStack_a8,uVar7);
    if (cVar4 != '\0') {
      if ((*(char *)(lVar3 + 0x134) == '\0') || (param_5 == (double *)0x0)) {
        param_5 = param_4;
      }
      switch(param_2) {
      case 0:
      case 1:
        *(int *)param_3 = (int)*(float *)param_3 + (int)*(float *)param_5;
        break;
      case 2:
      case 3:
        *param_3 = (double)((int64_t)*param_3 + (int64_t)*param_5);
        break;
      case 4:
        *(float *)param_3 = *(float *)param_3 + *(float *)param_5;
        break;
      case 5:
        *param_3 = *param_3 + *param_5;
      }
    }
    func_0x00018012e760(0,*(int32_t *)(lVar3 + 0x1674));
    pcVar6 = param_1;
    if (param_1 != (char *)0xffffffffffffffff) {
      while (*pcVar6 != '\0') {
        if (((*pcVar6 == '#') && (pcVar6[1] == '#')) ||
           (pcVar6 = pcVar6 + 1, pcVar6 == (char *)0xffffffffffffffff)) break;
      }
    }
    FUN_18010e8a0(param_1);
    piVar1 = (int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218);
    *piVar1 = *piVar1 + -1;
    FUN_18012e4e0();
  }
FUN_180114832:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801144aa(int32_t param_1,uint64_t param_2,double *param_3)
void FUN_1801144aa(int32_t param_1,uint64_t param_2,double *param_3)

{
  int *piVar1;
  double dVar2;
  char cVar3;
  uint unaff_EBP;
  int32_t unaff_0000002c;
  uint uVar4;
  char *unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  float fVar5;
  float fVar6;
  int32_t unaff_XMM6_Da;
  float fVar7;
  int32_t unaff_XMM6_Dc;
  uint64_t in_stack_00000020;
  int32_t uVar8;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000090;
  int32_t in_stack_000000a0;
  int32_t in_stack_000000a8;
  int64_t in_stack_00000118;
  uint in_stack_00000120;
  
  uVar8 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
  if (in_stack_00000118 == 0) {
    in_stack_00000118 =
         *(int64_t *)
          (&unknown_var_5912_ptr +
          (CONCAT44(unaff_0000002c,unaff_EBP) * 2 + CONCAT44(unaff_0000002c,unaff_EBP)) * 8);
  }
  if (unaff_EBP < 2) {
    param_1 = FUN_180121200(&stack0x00000050,0x40,in_stack_00000118,*(float *)param_3);
  }
  else if (unaff_EBP - 2 < 2) {
    param_1 = FUN_180121200(&stack0x00000050,0x40,in_stack_00000118,*param_3);
  }
  else {
    if (unaff_EBP == 4) {
      dVar2 = (double)*(float *)param_3;
    }
    else {
      if (unaff_EBP != 5) goto LAB_180114554;
      dVar2 = *param_3;
    }
    param_1 = FUN_180121200(&stack0x00000050,0x40,in_stack_00000118,dVar2);
  }
LAB_180114554:
  uVar4 = in_stack_00000120 | 1;
  if ((in_stack_00000120 & 0x20002) != 0) {
    uVar4 = in_stack_00000120;
  }
  if (unaff_R13 == 0) {
    in_stack_00000040 = 0;
    cVar3 = FUN_1801166f0(param_1,&stack0x00000050,0x40,&stack0x00000040,
                          CONCAT44(uVar8,uVar4) | 0x10);
    if (cVar3 != '\0') {
      FUN_1801134b0(&stack0x00000050,*(uint64_t *)(unaff_R14 + 0x1ec8),unaff_EBP);
    }
  }
  else {
    fVar7 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1660) + *(float *)(SYSTEM_DATA_MANAGER_A + 0x1660) +
            *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8);
    in_stack_000000a0 = unaff_XMM6_Da;
    in_stack_000000a8 = unaff_XMM6_Dc;
    FUN_18012e3b0();
    FUN_18012e1b0();
    fVar6 = *(float *)(unaff_R14 + 0x1674);
    fVar5 = (float)func_0x00018012d6a0();
    fVar5 = fVar5 - (fVar7 + fVar7 + fVar6 + fVar6);
    if (fVar5 <= 1.0) {
      fVar5 = 1.0;
    }
    func_0x00018012d470(fVar5);
    in_stack_00000040 = 0;
    cVar3 = FUN_1801166f0(&system_buffer_ptr,&stack0x00000050,0x40,&stack0x00000040,
                          CONCAT44(uVar8,uVar4) | 0x10);
    if (cVar3 != '\0') {
      FUN_1801134b0(&stack0x00000050,*(uint64_t *)(unaff_R14 + 0x1ec8),unaff_EBP);
    }
    func_0x00018012d640();
    uVar4 = (uVar4 & 0x4000 | 0x2040) >> 6;
    func_0x00018012e760(0,*(int32_t *)(unaff_R14 + 0x1674));
    in_stack_00000040 = CONCAT44(fVar7,fVar7);
    cVar3 = FUN_18010f6f0(&system_data_63b4,&stack0x00000040,uVar4);
    if ((cVar3 != '\0') && (unaff_EBP < 6)) {
                    // WARNING: Could not recover jumptable at 0x0001801146ab. Too many branches
                    // WARNING: Treating indirect jump as call
      (*(code *)((uint64_t)*(uint *)(&unknown_var_3572_ptr + CONCAT44(unaff_0000002c,unaff_EBP) * 4) +
                0x180000000))
                ((code *)((uint64_t)
                          *(uint *)(&unknown_var_3572_ptr + CONCAT44(unaff_0000002c,unaff_EBP) * 4) +
                         0x180000000));
      return;
    }
    func_0x00018012e760(0,*(int32_t *)(unaff_R14 + 0x1674));
    in_stack_00000040 = CONCAT44(fVar7,fVar7);
    cVar3 = FUN_18010f6f0(&system_callback1_ptr,&stack0x00000040,uVar4);
    if ((cVar3 != '\0') && (unaff_EBP < 6)) {
                    // WARNING: Could not recover jumptable at 0x000180114740. Too many branches
                    // WARNING: Treating indirect jump as call
      (*(code *)((uint64_t)*(uint *)(&unknown_var_3596_ptr + CONCAT44(unaff_0000002c,unaff_EBP) * 4) +
                0x180000000))
                ((code *)((uint64_t)
                          *(uint *)(&unknown_var_3596_ptr + CONCAT44(unaff_0000002c,unaff_EBP) * 4) +
                         0x180000000));
      return;
    }
    func_0x00018012e760(0,*(int32_t *)(unaff_R14 + 0x1674));
    if (unaff_R12 != (char *)0xffffffffffffffff) {
      while (*unaff_R12 != '\0') {
        if (((*unaff_R12 == '#') && (unaff_R12[1] == '#')) ||
           (unaff_R12 = unaff_R12 + 1, unaff_R12 == (char *)0xffffffffffffffff)) break;
      }
    }
    FUN_18010e8a0();
    piVar1 = (int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218);
    *piVar1 = *piVar1 + -1;
    FUN_18012e4e0();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000090 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180114580(void)
void FUN_180114580(void)

{
  int *piVar1;
  char cVar2;
  int64_t in_RAX;
  uint unaff_EBP;
  int32_t unaff_0000002c;
  uint unaff_ESI;
  uint uVar3;
  char *unaff_R12;
  int64_t unaff_R14;
  float fVar4;
  float fVar5;
  float fVar6;
  uint64_t in_stack_00000020;
  int32_t uVar7;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000090;
  uint64_t in_stack_00000110;
  
  uVar7 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
  fVar6 = *(float *)(in_RAX + 0x1660) + *(float *)(in_RAX + 0x1660) + *(float *)(in_RAX + 0x19f8);
  FUN_18012e3b0();
  FUN_18012e1b0();
  fVar5 = *(float *)(unaff_R14 + 0x1674);
  fVar4 = (float)func_0x00018012d6a0();
  fVar4 = fVar4 - (fVar6 + fVar6 + fVar5 + fVar5);
  if (fVar4 <= 1.0) {
    fVar4 = 1.0;
  }
  func_0x00018012d470(fVar4);
  in_stack_00000040 = 0;
  cVar2 = FUN_1801166f0(&system_buffer_ptr,&stack0x00000050,0x40,&stack0x00000040,
                        CONCAT44(uVar7,unaff_ESI));
  if (cVar2 != '\0') {
    FUN_1801134b0(&stack0x00000050,*(uint64_t *)(unaff_R14 + 0x1ec8),unaff_EBP);
  }
  func_0x00018012d640();
  uVar3 = (unaff_ESI & 0x4000 | 0x2040) >> 6;
  func_0x00018012e760(0,*(int32_t *)(unaff_R14 + 0x1674));
  in_stack_00000040 = CONCAT44(fVar6,fVar6);
  cVar2 = FUN_18010f6f0(&system_data_63b4,&stack0x00000040,uVar3);
  if ((cVar2 != '\0') && (unaff_EBP < 6)) {
                    // WARNING: Could not recover jumptable at 0x0001801146ab. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)((uint64_t)*(uint *)(&unknown_var_3572_ptr + CONCAT44(unaff_0000002c,unaff_EBP) * 4) +
              0x180000000))
              ((code *)((uint64_t)
                        *(uint *)(&unknown_var_3572_ptr + CONCAT44(unaff_0000002c,unaff_EBP) * 4) +
                       0x180000000));
    return;
  }
  func_0x00018012e760(0,*(int32_t *)(unaff_R14 + 0x1674));
  in_stack_00000040 = CONCAT44(fVar6,fVar6);
  cVar2 = FUN_18010f6f0(&system_callback1_ptr,&stack0x00000040,uVar3);
  if ((cVar2 != '\0') && (unaff_EBP < 6)) {
                    // WARNING: Could not recover jumptable at 0x000180114740. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)((uint64_t)*(uint *)(&unknown_var_3596_ptr + CONCAT44(unaff_0000002c,unaff_EBP) * 4) +
              0x180000000))
              ((code *)((uint64_t)
                        *(uint *)(&unknown_var_3596_ptr + CONCAT44(unaff_0000002c,unaff_EBP) * 4) +
                       0x180000000));
    return;
  }
  func_0x00018012e760(0,*(int32_t *)(unaff_R14 + 0x1674));
  if (unaff_R12 != (char *)0xffffffffffffffff) {
    while (*unaff_R12 != '\0') {
      if (((*unaff_R12 == '#') && (unaff_R12[1] == '#')) ||
         (unaff_R12 = unaff_R12 + 1, unaff_R12 == (char *)0xffffffffffffffff)) break;
    }
  }
  FUN_18010e8a0();
  piVar1 = (int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218);
  *piVar1 = *piVar1 + -1;
  FUN_18012e4e0();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000090 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180114715(void)
void FUN_180114715(void)

{
  int *piVar1;
  uint unaff_EBP;
  int32_t unaff_0000002c;
  char *unaff_R12;
  int64_t unaff_R14;
  uint64_t in_stack_00000090;
  
  if (unaff_EBP < 6) {
                    // WARNING: Could not recover jumptable at 0x000180114740. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)((uint64_t)*(uint *)(&unknown_var_3596_ptr + CONCAT44(unaff_0000002c,unaff_EBP) * 4) +
              0x180000000))
              ((code *)((uint64_t)
                        *(uint *)(&unknown_var_3596_ptr + CONCAT44(unaff_0000002c,unaff_EBP) * 4) +
                       0x180000000));
    return;
  }
  func_0x00018012e760(0,*(int32_t *)(unaff_R14 + 0x1674));
  if (unaff_R12 != (char *)0xffffffffffffffff) {
    while (*unaff_R12 != '\0') {
      if (((*unaff_R12 == '#') && (unaff_R12[1] == '#')) ||
         (unaff_R12 = unaff_R12 + 1, unaff_R12 == (char *)0xffffffffffffffff)) break;
    }
  }
  FUN_18010e8a0();
  piVar1 = (int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218);
  *piVar1 = *piVar1 + -1;
  FUN_18012e4e0();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000090 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180114832(void)
void FUN_180114832(void)

{
  uint64_t in_stack_00000090;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000090 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180114890(char *param_1,uint64_t param_2,int64_t param_3,int param_4,
                       uint64_t param_5,uint64_t param_6,uint64_t param_7)

{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int64_t lVar10;
  byte bVar11;
  int32_t uVar12;
  
  lVar4 = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  uVar2 = *(uint64_t *)(lVar4 + 0x1af8);
  if (*(char *)(uVar2 + 0xb4) != '\0') {
    return uVar2 & 0xffffffffffffff00;
  }
  bVar11 = 0;
  FUN_18012e3b0();
  FUN_18012e1b0(param_1);
  FUN_18012d4c0(param_4);
  iVar9 = 0;
  lVar10 = SYSTEM_DATA_MANAGER_A;
  if (0 < param_4) {
    do {
      FUN_18012e2d0(iVar9);
      bVar5 = FUN_180114450(&system_callback2_ptr,4,param_3,0,0,param_7,0);
      bVar11 = bVar11 | bVar5;
      func_0x00018012e760(0,*(int32_t *)(lVar4 + 0x1674));
      lVar10 = SYSTEM_DATA_MANAGER_A;
      piVar7 = (int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218);
      *piVar7 = *piVar7 + -1;
      *(int8_t *)(*(int64_t *)(lVar10 + 0x1af8) + 0xb1) = 1;
      lVar3 = *(int64_t *)(lVar10 + 0x1af8);
      iVar1 = *(int *)(lVar3 + 0x1c8);
      iVar6 = iVar1 + -1;
      *(int *)(lVar3 + 0x1c8) = iVar6;
      if (iVar6 == 0) {
        uVar12 = *(int32_t *)(lVar3 + 0x284);
      }
      else {
        uVar12 = *(int32_t *)(*(int64_t *)(lVar3 + 0x1d0) + -8 + (int64_t)iVar1 * 4);
      }
      param_3 = param_3 + 4;
      *(int32_t *)(lVar3 + 0x1ac) = uVar12;
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_4);
  }
  piVar7 = (int *)(*(int64_t *)(lVar10 + 0x1af8) + 0x218);
  *piVar7 = *piVar7 + -1;
  pcVar8 = param_1;
  if (param_1 != (char *)0xffffffffffffffff) {
    while (*pcVar8 != '\0') {
      if (((*pcVar8 == '#') && (pcVar8[1] == '#')) ||
         (pcVar8 = pcVar8 + 1, pcVar8 == (char *)0xffffffffffffffff)) break;
    }
  }
  FUN_18010e8a0(param_1);
  FUN_18012e4e0();
  return (uint64_t)bVar11;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

byte FUN_1801148d4(void)

{
  int iVar1;
  int64_t lVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char *unaff_RBP;
  int unaff_ESI;
  int64_t unaff_RDI;
  int64_t lVar7;
  int64_t unaff_R14;
  byte bVar8;
  int32_t uVar9;
  
  bVar8 = 0;
  FUN_18012e3b0();
  FUN_18012e1b0();
  FUN_18012d4c0(unaff_ESI);
  iVar6 = 0;
  lVar7 = SYSTEM_DATA_MANAGER_A;
  if (0 < unaff_ESI) {
    do {
      FUN_18012e2d0(iVar6);
      bVar3 = FUN_180114450(&system_callback2_ptr,4,unaff_RDI,0,0);
      bVar8 = bVar8 | bVar3;
      func_0x00018012e760(0,*(int32_t *)(unaff_R14 + 0x1674));
      lVar7 = SYSTEM_DATA_MANAGER_A;
      piVar5 = (int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218);
      *piVar5 = *piVar5 + -1;
      *(int8_t *)(*(int64_t *)(lVar7 + 0x1af8) + 0xb1) = 1;
      lVar2 = *(int64_t *)(lVar7 + 0x1af8);
      iVar1 = *(int *)(lVar2 + 0x1c8);
      iVar4 = iVar1 + -1;
      *(int *)(lVar2 + 0x1c8) = iVar4;
      if (iVar4 == 0) {
        uVar9 = *(int32_t *)(lVar2 + 0x284);
      }
      else {
        uVar9 = *(int32_t *)(*(int64_t *)(lVar2 + 0x1d0) + -8 + (int64_t)iVar1 * 4);
      }
      unaff_RDI = unaff_RDI + 4;
      *(int32_t *)(lVar2 + 0x1ac) = uVar9;
      iVar6 = iVar6 + 1;
    } while (iVar6 < unaff_ESI);
  }
  piVar5 = (int *)(*(int64_t *)(lVar7 + 0x1af8) + 0x218);
  *piVar5 = *piVar5 + -1;
  if (unaff_RBP != (char *)0xffffffffffffffff) {
    while (*unaff_RBP != '\0') {
      if (((*unaff_RBP == '#') && (unaff_RBP[1] == '#')) ||
         (unaff_RBP = unaff_RBP + 1, unaff_RBP == (char *)0xffffffffffffffff)) break;
    }
  }
  FUN_18010e8a0();
  FUN_18012e4e0();
  return bVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

byte FUN_18011490b(void)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  int unaff_EBX;
  char *unaff_RBP;
  int unaff_ESI;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  byte unaff_R15B;
  int32_t uVar7;
  
  do {
    FUN_18012e2d0(unaff_EBX);
    bVar4 = FUN_180114450(&system_callback2_ptr,4,unaff_RDI);
    unaff_R15B = unaff_R15B | bVar4;
    func_0x00018012e760(0,*(int32_t *)(unaff_R14 + 0x1674));
    lVar3 = SYSTEM_DATA_MANAGER_A;
    piVar6 = (int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218);
    *piVar6 = *piVar6 + -1;
    *(int8_t *)(*(int64_t *)(lVar3 + 0x1af8) + 0xb1) = 1;
    lVar2 = *(int64_t *)(lVar3 + 0x1af8);
    iVar1 = *(int *)(lVar2 + 0x1c8);
    iVar5 = iVar1 + -1;
    *(int *)(lVar2 + 0x1c8) = iVar5;
    if (iVar5 == 0) {
      uVar7 = *(int32_t *)(lVar2 + 0x284);
    }
    else {
      uVar7 = *(int32_t *)(*(int64_t *)(lVar2 + 0x1d0) + -8 + (int64_t)iVar1 * 4);
    }
    unaff_RDI = unaff_RDI + 4;
    *(int32_t *)(lVar2 + 0x1ac) = uVar7;
    unaff_EBX = unaff_EBX + 1;
  } while (unaff_EBX < unaff_ESI);
  piVar6 = (int *)(*(int64_t *)(lVar3 + 0x1af8) + 0x218);
  *piVar6 = *piVar6 + -1;
  if (unaff_RBP != (char *)0xffffffffffffffff) {
    while (*unaff_RBP != '\0') {
      if (((*unaff_RBP == '#') && (unaff_RBP[1] == '#')) ||
         (unaff_RBP = unaff_RBP + 1, unaff_RBP == (char *)0xffffffffffffffff)) break;
    }
  }
  FUN_18010e8a0();
  FUN_18012e4e0();
  return unaff_R15B;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_1801149c9(void)

{
  int *piVar1;
  char *unaff_RBP;
  int8_t unaff_R15B;
  
  piVar1 = (int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218);
  *piVar1 = *piVar1 + -1;
  if (unaff_RBP != (char *)0xffffffffffffffff) {
    while (*unaff_RBP != '\0') {
      if (((*unaff_RBP == '#') && (unaff_RBP[1] == '#')) ||
         (unaff_RBP = unaff_RBP + 1, unaff_RBP == (char *)0xffffffffffffffff)) break;
    }
  }
  FUN_18010e8a0();
  FUN_18012e4e0();
  return unaff_R15B;
}



int8_t FUN_1801149f5(uint64_t param_1,char *param_2)

{
  int8_t unaff_R15B;
  
  while (*param_2 != '\0') {
    if (((*param_2 == '#') && (param_2[1] == '#')) ||
       (param_2 = param_2 + 1, param_2 == (char *)0xffffffffffffffff)) break;
  }
  FUN_18010e8a0();
  FUN_18012e4e0();
  return unaff_R15B;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float * FUN_180114a70(float *param_1,ushort *param_2,ushort *param_3,uint64_t *param_4,
                     uint64_t param_5,char param_6)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = 0.0;
  pfVar4 = *(float **)(SYSTEM_DATA_MANAGER_A + 0x19f0);
  fVar1 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8);
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  fVar2 = *pfVar4;
  if (param_2 < param_3) {
    do {
      uVar3 = *param_2;
      param_2 = param_2 + 1;
      if (uVar3 == 10) {
        fVar5 = *param_1;
        if (*param_1 <= fVar6) {
          fVar5 = fVar6;
        }
        fVar6 = 0.0;
        *param_1 = fVar5;
        param_1[1] = fVar1 + param_1[1];
        if (param_6 != '\0') goto LAB_180114b1a;
      }
      else if (uVar3 != 0xd) {
        if ((int)(uint)uVar3 < (int)pfVar4[8]) {
          fVar5 = *(float *)(*(int64_t *)(pfVar4 + 10) + (uint64_t)uVar3 * 4);
        }
        else {
          fVar5 = pfVar4[0x12];
        }
        fVar6 = fVar6 + fVar5 * (fVar1 / fVar2);
      }
    } while (param_2 < param_3);
    fVar5 = *param_1;
LAB_180114b1a:
    if (fVar5 < fVar6) {
      *param_1 = fVar6;
    }
    if (fVar6 <= 0.0) goto LAB_180114b2d;
  }
  else {
LAB_180114b2d:
    if (param_1[1] != 0.0) goto LAB_180114b40;
  }
  param_1[1] = fVar1 + param_1[1];
LAB_180114b40:
  if (param_4 != (uint64_t *)0x0) {
    *param_4 = param_2;
  }
  return param_1;
}





// 函数: void FUN_180114aa9(uint64_t param_1,ushort *param_2,float param_3,float param_4,uint64_t param_5
void FUN_180114aa9(uint64_t param_1,ushort *param_2,float param_3,float param_4,uint64_t param_5
                  ,uint64_t param_6,char param_7)

{
  ushort uVar1;
  ushort *in_R8;
  uint64_t *in_R9;
  float *in_R10;
  int64_t in_R11;
  float fVar2;
  float in_XMM4_Da;
  float in_XMM5_Da;
  
  do {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    if (uVar1 == 10) {
      fVar2 = *in_R10;
      if (*in_R10 <= param_3) {
        fVar2 = param_3;
      }
      *in_R10 = fVar2;
      in_R10[1] = param_4 + in_R10[1];
      param_3 = in_XMM4_Da;
      if (param_7 != '\0') goto LAB_180114b1a;
    }
    else if (uVar1 != 0xd) {
      if ((int)(uint)uVar1 < *(int *)(in_R11 + 0x20)) {
        fVar2 = *(float *)(*(int64_t *)(in_R11 + 0x28) + (uint64_t)uVar1 * 4);
      }
      else {
        fVar2 = *(float *)(in_R11 + 0x48);
      }
      param_3 = param_3 + fVar2 * in_XMM5_Da;
    }
  } while (param_2 < in_R8);
  fVar2 = *in_R10;
LAB_180114b1a:
  if (fVar2 < param_3) {
    *in_R10 = param_3;
  }
  if ((in_XMM4_Da < param_3) || (in_XMM4_Da == in_R10[1])) {
    in_R10[1] = param_4 + in_R10[1];
  }
  if (in_R9 != (uint64_t *)0x0) {
    *in_R9 = param_2;
  }
  return;
}





// 函数: void FUN_180114b23(uint64_t param_1,uint64_t param_2,float param_3,uint64_t *param_4)
void FUN_180114b23(uint64_t param_1,uint64_t param_2,float param_3,uint64_t *param_4)

{
  float *in_R10;
  float in_XMM3_Da;
  float in_XMM4_Da;
  
  *in_R10 = param_3;
  if ((in_XMM4_Da < param_3) || (in_XMM4_Da == in_R10[1])) {
    in_R10[1] = in_XMM3_Da + in_R10[1];
  }
  if (param_4 != (uint64_t *)0x0) {
    *param_4 = param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



