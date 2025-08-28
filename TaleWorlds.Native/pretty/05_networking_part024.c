#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 05_networking_part024.c - 8 个函数

// 函数: void FUN_180854f55(void)
void FUN_180854f55(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180854f70(int64_t param_1,uint64_t *param_2,int64_t param_3,int32_t *param_4,
void FUN_180854f70(int64_t param_1,uint64_t *param_2,int64_t param_3,int32_t *param_4,
                  int32_t param_5)

{
  uint64_t *puVar1;
  int32_t uVar2;
  int8_t auStack_108 [32];
  uint uStack_e8;
  uint uStack_e0;
  uint uStack_d8;
  uint uStack_d0;
  uint uStack_c8;
  uint uStack_c0;
  uint uStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  uint uStack_a0;
  int32_t *puStack_98;
  uint64_t *puStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  int8_t auStack_70 [40];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_108;
  puStack_90 = param_2;
  lStack_80 = param_3;
  lStack_78 = param_1;
  for (puVar1 = (uint64_t *)*param_2; puStack_98 = param_4, puVar1 != param_2;
      puVar1 = (uint64_t *)*puVar1) {
    lStack_88 = (**(code **)(**(int64_t **)(lStack_78 + 0x170) + 0x268))
                          (*(int64_t **)(lStack_78 + 0x170),puVar1 + 4,1);
    if (lStack_88 == 0) {
      uStack_a0 = (uint)*(byte *)((int64_t)puVar1 + 0x2f);
      uStack_a8 = (uint)*(byte *)((int64_t)puVar1 + 0x2e);
      uStack_b0 = (uint)*(byte *)((int64_t)puVar1 + 0x2d);
      uStack_b8 = (uint)*(byte *)((int64_t)puVar1 + 0x2c);
      uStack_c0 = (uint)*(byte *)((int64_t)puVar1 + 0x2b);
      uStack_c8 = (uint)*(byte *)((int64_t)puVar1 + 0x2a);
      uStack_d0 = (uint)*(byte *)((int64_t)puVar1 + 0x29);
      uStack_d8 = (uint)*(byte *)(puVar1 + 5);
      uStack_e0 = (uint)*(ushort *)((int64_t)puVar1 + 0x26);
      uStack_e8 = (uint)*(ushort *)((int64_t)puVar1 + 0x24);
                    // WARNING: Subroutine does not return
      SystemDataValidator(auStack_70,0x27,&unknown_var_8960_ptr,*(int32_t *)(puVar1 + 4));
    }
    uVar2 = FUN_1808c6120(lStack_88,param_5);
    if (param_3 != 0) {
      uVar2 = func_0x0001808c6590(param_3,uVar2);
    }
    *param_4 = uVar2;
    puStack_98 = param_4 + 1;
    if (puVar1 == param_2) break;
    param_4 = puStack_98;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_108);
}





// 函数: void FUN_180854fc3(void)
void FUN_180854fc3(void)

{
  int32_t uVar1;
  int64_t in_RAX;
  int64_t lVar2;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int32_t *unaff_RDI;
  int64_t in_R11;
  int64_t *unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int32_t uVar3;
  int64_t in_stack_00000090;
  uint64_t in_stack_000000c0;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBX;
  uVar1 = *(int32_t *)(in_R11 + 0x28);
  *(uint64_t *)(in_R11 + -0x28) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  do {
    lVar2 = (**(code **)(**(int64_t **)(in_RAX + 0x170) + 0x268))
                      (*(int64_t **)(in_RAX + 0x170),unaff_R12 + 4,1);
    if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(&stack0x00000098,0x27,&unknown_var_8960_ptr,(int)unaff_R12[4],
                    *(int16_t *)((int64_t)unaff_R12 + 0x24));
    }
    uVar3 = FUN_1808c6120(lVar2,uVar1);
    if (unaff_RBP != 0) {
      uVar3 = func_0x0001808c6590(uVar3,uVar3);
    }
    *unaff_RDI = uVar3;
    unaff_RDI = unaff_RDI + 1;
    if (unaff_R12 == unaff_RSI) break;
    unaff_R12 = (int64_t *)*unaff_R12;
    in_RAX = in_stack_00000090;
  } while (unaff_R12 != unaff_RSI);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000c0 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18085510b(void)
void FUN_18085510b(void)

{
  uint64_t in_stack_000000c0;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000c0 ^ (uint64_t)&stack0x00000000);
}



uint64_t
FUN_180855130(int64_t param_1,int64_t param_2,uint *param_3,int param_4,char param_5,uint *param_6
             ,int8_t *param_7,int8_t *param_8)

{
  uint uVar1;
  char cVar2;
  uint64_t uVar3;
  uint uVar4;
  float fVar5;
  uint auStackX_10 [2];
  
  if (*(float *)(param_2 + 0x58) != 0.0) {
    if (*(int *)(param_2 + 0x50) == 0) {
      if ((param_5 == '\0') && (cVar2 = FUN_180855f70(param_1,param_2,param_4), cVar2 != '\0')) {
        uVar4 = *param_3;
        if (*param_3 <= *(uint *)(param_2 + 0x30)) {
          uVar4 = *(uint *)(param_2 + 0x30);
        }
        *param_6 = uVar4;
        *param_7 = 1;
        return 0;
      }
      if ((*(int *)(param_2 + 0x30) != *(int *)(param_2 + 0x34)) ||
         ((*(uint *)(param_2 + 0x38) >> 4 & 1) != 0)) {
        *param_8 = 1;
      }
    }
    else {
      auStackX_10[0] = *param_3;
      if (*param_3 <= *(uint *)(param_2 + 0x30)) {
        auStackX_10[0] = *(uint *)(param_2 + 0x30);
      }
      uVar3 = FUN_18084d140(*(uint64_t *)(param_1 + 0x110),auStackX_10[0],param_2 + 0x50,
                            auStackX_10);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      param_3 = param_3 + 1;
      if (((*(uint *)(param_2 + 0x38) >> 4 & 1) == 0) && (*(uint *)(param_2 + 0x34) <= *param_3)) {
        param_3 = (uint *)(param_2 + 0x34);
      }
      uVar4 = *param_3;
      while (auStackX_10[0] < uVar4) {
        if (((param_4 == 1) || (*(float *)(param_2 + 0x58) == 100.0)) ||
           (fVar5 = (float)func_0x0001808c1740(*(uint64_t *)(param_1 + 0x168),0),
           fVar5 < *(float *)(param_2 + 0x58))) {
          *param_6 = auStackX_10[0];
          *param_7 = 1;
          return 0;
        }
        uVar1 = 0xffffffff;
        if ((uint64_t)auStackX_10[0] + 1 < 0x100000000) {
          uVar1 = auStackX_10[0] + 1;
        }
        auStackX_10[0] = uVar1;
        uVar3 = FUN_18084d140(*(uint64_t *)(param_1 + 0x110),auStackX_10[0],param_2 + 0x50,
                              auStackX_10);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
    }
  }
  *param_7 = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808552c0(int64_t param_1)

{
  int64_t *plVar1;
  int *piVar2;
  int32_t uVar3;
  int iVar4;
  int64_t lVar5;
  
  plVar1 = (int64_t *)(param_1 + 0x70);
  if (((int64_t *)*plVar1 == plVar1) && (*(int64_t **)(param_1 + 0x78) == plVar1)) {
    uVar3 = *(int32_t *)(param_1 + 0x30);
    iVar4 = *(int *)(param_1 + 0x34);
    lVar5 = *(int64_t *)(param_1 + 0x38);
  }
  else {
    lVar5 = *(int64_t *)(param_1 + 0x78);
    uVar3 = *(int32_t *)(lVar5 + 0x18);
    iVar4 = *(int *)(lVar5 + 0x1c);
    lVar5 = *(int64_t *)(lVar5 + 0x20);
  }
  if (lVar5 != 0) {
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
  }
  if (iVar4 == 1) {
    *(int8_t *)(param_1 + 0x13c) = 0;
    iVar4 = FUN_18085bc30(param_1,uVar3,1,0,0);
    if (iVar4 == 0) {
      iVar4 = SystemStatusChecker(param_1 + 0xe0);
      if (iVar4 == 0) {
        iVar4 = FUN_1808553b0(param_1 + 0xf0);
        if (iVar4 == 0) {
          *(int32_t *)(param_1 + 0x100) = 0xffffffff;
          *(int32_t *)(param_1 + 0x104) = 0;
        }
      }
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 0x1c;
  }
  if (lVar5 != 0) {
    piVar2 = (int *)(lVar5 + 0x10);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar5,&unknown_var_2208_ptr,0x76,1);
    }
  }
  return iVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808552ca(int64_t param_1)

{
  int *piVar1;
  int32_t uVar2;
  int iVar3;
  int64_t *in_RAX;
  int64_t lVar4;
  
  if (((int64_t *)*in_RAX == in_RAX) && ((int64_t *)in_RAX[1] == in_RAX)) {
    uVar2 = *(int32_t *)(param_1 + 0x30);
    iVar3 = *(int *)(param_1 + 0x34);
    lVar4 = *(int64_t *)(param_1 + 0x38);
  }
  else {
    lVar4 = *(int64_t *)(param_1 + 0x78);
    uVar2 = *(int32_t *)(lVar4 + 0x18);
    iVar3 = *(int *)(lVar4 + 0x1c);
    lVar4 = *(int64_t *)(lVar4 + 0x20);
  }
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
  }
  if (iVar3 == 1) {
    *(int8_t *)(param_1 + 0x13c) = 0;
    iVar3 = FUN_18085bc30(param_1,uVar2,1,0,0);
    if (iVar3 == 0) {
      iVar3 = SystemStatusChecker(param_1 + 0xe0);
      if (iVar3 == 0) {
        iVar3 = FUN_1808553b0(param_1 + 0xf0);
        if (iVar3 == 0) {
          *(int32_t *)(param_1 + 0x100) = 0xffffffff;
          *(int32_t *)(param_1 + 0x104) = 0;
        }
      }
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0x1c;
  }
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar4,&unknown_var_2208_ptr,0x76,1);
    }
  }
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_180855370(void)

{
  int *piVar1;
  int64_t unaff_RBX;
  int32_t unaff_ESI;
  
  piVar1 = (int *)(unaff_RBX + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
  }
  return unaff_ESI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808553b0(int64_t *param_1)

{
  int iVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t *puVar5;
  uint64_t uVar6;
  uint uVar7;
  int32_t *puVar8;
  int64_t lVar9;
  
  uVar7 = *(uint *)((int64_t)param_1 + 0xc);
  if ((int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar7) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
    uVar7 = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    lVar9 = (int64_t)-iVar1;
    if (iVar1 < 0) {
      puVar8 = (int32_t *)((int64_t)iVar1 * 0x1c + 0x10 + *param_1);
      do {
        puVar5 = (int32_t *)SystemCoreProcessor();
        uVar2 = puVar5[1];
        uVar3 = puVar5[2];
        uVar4 = puVar5[3];
        puVar8[-4] = *puVar5;
        puVar8[-3] = uVar2;
        puVar8[-2] = uVar3;
        puVar8[-1] = uVar4;
        *puVar8 = 0xffffffff;
        puVar8[1] = 0;
        puVar8[2] = 0xffffffff;
        lVar9 = lVar9 + -1;
        puVar8 = puVar8 + 7;
      } while (lVar9 != 0);
      uVar7 = *(uint *)((int64_t)param_1 + 0xc);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  if (((int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)) < 1) ||
     (uVar6 = FUN_180859470(param_1,0), (int)uVar6 == 0)) {
    uVar6 = 0;
  }
  return uVar6;
}



uint64_t FUN_180855415(uint param_1,int64_t param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t *puVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  int32_t unaff_EBP;
  int64_t lVar7;
  int64_t *unaff_RDI;
  int32_t in_XMM0_Da;
  
  lVar7 = (int64_t)-(int)param_2;
  if ((int)param_2 < 0) {
    puVar6 = (int32_t *)(param_2 * 0x1c + 0x10 + *unaff_RDI);
    do {
      puVar4 = (int32_t *)SystemCoreProcessor();
      in_XMM0_Da = *puVar4;
      uVar1 = puVar4[1];
      uVar2 = puVar4[2];
      uVar3 = puVar4[3];
      puVar6[-4] = in_XMM0_Da;
      puVar6[-3] = uVar1;
      puVar6[-2] = uVar2;
      puVar6[-1] = uVar3;
      *puVar6 = 0xffffffff;
      puVar6[1] = unaff_EBP;
      puVar6[2] = 0xffffffff;
      lVar7 = lVar7 + -1;
      puVar6 = puVar6 + 7;
    } while (lVar7 != 0);
    param_1 = *(uint *)((int64_t)unaff_RDI + 0xc);
  }
  *(int32_t *)(unaff_RDI + 1) = unaff_EBP;
  if ((0 < (int)((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f))) &&
     (uVar5 = FUN_180859470(in_XMM0_Da,0), (int)uVar5 != 0)) {
    return uVar5;
  }
  return 0;
}



uint64_t FUN_180855467(uint param_1)

{
  uint64_t uVar1;
  int32_t unaff_EBP;
  int64_t unaff_RDI;
  
  *(int32_t *)(unaff_RDI + 8) = unaff_EBP;
  if ((0 < (int)((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f))) &&
     (uVar1 = FUN_180859470(), (int)uVar1 != 0)) {
    return uVar1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808554a0(int64_t *param_1)

{
  int iVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t *puVar5;
  uint64_t uVar6;
  int32_t *puVar7;
  int64_t lVar8;
  uint uVar9;
  
  uVar9 = *(uint *)((int64_t)param_1 + 0xc);
  if ((int)((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar9) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
    uVar9 = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    lVar8 = (int64_t)-iVar1;
    if (iVar1 < 0) {
      puVar7 = (int32_t *)(*param_1 + 0x14 + (int64_t)iVar1 * 0x18);
      do {
        puVar5 = (int32_t *)SystemCoreProcessor();
        uVar2 = puVar5[1];
        uVar3 = puVar5[2];
        uVar4 = puVar5[3];
        puVar7[-5] = *puVar5;
        puVar7[-4] = uVar2;
        puVar7[-3] = uVar3;
        puVar7[-2] = uVar4;
        puVar7[-1] = 0xffffffff;
        *puVar7 = 0;
        lVar8 = lVar8 + -1;
        puVar7 = puVar7 + 6;
      } while (lVar8 != 0);
      uVar9 = *(uint *)((int64_t)param_1 + 0xc);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  if (((int)((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f)) < 1) ||
     (uVar6 = FUN_18084d3f0(param_1,0), (int)uVar6 == 0)) {
    uVar6 = 0;
  }
  return uVar6;
}



uint64_t FUN_180855512(int32_t param_1,int param_2,uint param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t in_RAX;
  int32_t *puVar4;
  uint64_t uVar5;
  int64_t in_RCX;
  int32_t *puVar6;
  int32_t unaff_EBP;
  int64_t lVar7;
  int64_t unaff_RDI;
  
  lVar7 = (int64_t)param_2;
  if (0 < param_2) {
    puVar6 = (int32_t *)(in_RAX + 0x14 + in_RCX * 8);
    do {
      puVar4 = (int32_t *)SystemCoreProcessor();
      param_1 = *puVar4;
      uVar1 = puVar4[1];
      uVar2 = puVar4[2];
      uVar3 = puVar4[3];
      puVar6[-5] = param_1;
      puVar6[-4] = uVar1;
      puVar6[-3] = uVar2;
      puVar6[-2] = uVar3;
      puVar6[-1] = 0xffffffff;
      *puVar6 = unaff_EBP;
      lVar7 = lVar7 + -1;
      puVar6 = puVar6 + 6;
    } while (lVar7 != 0);
    param_3 = *(uint *)(unaff_RDI + 0xc);
  }
  *(int32_t *)(unaff_RDI + 8) = unaff_EBP;
  if ((0 < (int)((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f))) &&
     (uVar5 = FUN_18084d3f0(param_1,0), (int)uVar5 != 0)) {
    return uVar5;
  }
  return 0;
}



uint64_t FUN_18085551e(int64_t param_1)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t in_RAX;
  int32_t *puVar5;
  uint64_t uVar6;
  uint uVar7;
  int32_t *puVar8;
  int32_t unaff_EBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  
  puVar8 = (int32_t *)(in_RAX + 0x14 + param_1 * 8);
  do {
    puVar5 = (int32_t *)SystemCoreProcessor();
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    puVar8[-5] = uVar1;
    puVar8[-4] = uVar2;
    puVar8[-3] = uVar3;
    puVar8[-2] = uVar4;
    puVar8[-1] = 0xffffffff;
    *puVar8 = unaff_EBP;
    unaff_RSI = unaff_RSI + -1;
    puVar8 = puVar8 + 6;
  } while (unaff_RSI != 0);
  *(int32_t *)(unaff_RDI + 8) = unaff_EBP;
  uVar7 = (int)*(uint *)(unaff_RDI + 0xc) >> 0x1f;
  if ((0 < (int)((*(uint *)(unaff_RDI + 0xc) ^ uVar7) - uVar7)) &&
     (uVar6 = FUN_18084d3f0(uVar1,0), (int)uVar6 != 0)) {
    return uVar6;
  }
  return 0;
}



uint64_t FUN_180855559(uint64_t param_1,uint64_t param_2,uint param_3)

{
  uint64_t uVar1;
  int32_t unaff_EBP;
  int64_t unaff_RDI;
  
  *(int32_t *)(unaff_RDI + 8) = unaff_EBP;
  if ((0 < (int)((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f))) &&
     (uVar1 = FUN_18084d3f0(), (int)uVar1 != 0)) {
    return uVar1;
  }
  return 0;
}



uint64_t FUN_18085555e(uint64_t param_1,uint64_t param_2,uint param_3)

{
  uint64_t uVar1;
  int32_t unaff_EBP;
  int64_t unaff_RDI;
  
  *(int32_t *)(unaff_RDI + 8) = unaff_EBP;
  if ((0 < (int)((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f))) &&
     (uVar1 = FUN_18084d3f0(), (int)uVar1 != 0)) {
    return uVar1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808555a0(int64_t *param_1)

{
  int iVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t *puVar5;
  uint64_t uVar6;
  int8_t *puVar7;
  int64_t lVar8;
  uint uVar9;
  
  uVar9 = *(uint *)((int64_t)param_1 + 0xc);
  if ((int)((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar9) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar9 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    lVar8 = (int64_t)-iVar1;
    if (iVar1 < 0) {
      puVar7 = (int8_t *)(*param_1 + 0x14 + (int64_t)iVar1 * 0x18);
      do {
        puVar5 = (int32_t *)SystemCoreProcessor();
        uVar2 = puVar5[1];
        uVar3 = puVar5[2];
        uVar4 = puVar5[3];
        *(int32_t *)(puVar7 + -0x14) = *puVar5;
        *(int32_t *)(puVar7 + -0x10) = uVar2;
        *(int32_t *)(puVar7 + -0xc) = uVar3;
        *(int32_t *)(puVar7 + -8) = uVar4;
        *(int32_t *)(puVar7 + -4) = 0xffffffff;
        *puVar7 = 0;
        lVar8 = lVar8 + -1;
        puVar7 = puVar7 + 0x18;
      } while (lVar8 != 0);
      uVar9 = *(uint *)((int64_t)param_1 + 0xc);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  if (((int)((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f)) < 1) ||
     (uVar6 = FUN_1808595a0(param_1,0), (int)uVar6 == 0)) {
    uVar6 = 0;
  }
  return uVar6;
}



uint64_t FUN_180855615(int32_t param_1,int param_2,uint param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t in_RAX;
  int32_t *puVar4;
  uint64_t uVar5;
  int64_t in_RCX;
  int8_t *puVar6;
  int64_t lVar7;
  int64_t unaff_RDI;
  
  lVar7 = (int64_t)param_2;
  if (0 < param_2) {
    puVar6 = (int8_t *)(in_RAX + 0x14 + in_RCX * 8);
    do {
      puVar4 = (int32_t *)SystemCoreProcessor();
      param_1 = *puVar4;
      uVar1 = puVar4[1];
      uVar2 = puVar4[2];
      uVar3 = puVar4[3];
      *(int32_t *)(puVar6 + -0x14) = param_1;
      *(int32_t *)(puVar6 + -0x10) = uVar1;
      *(int32_t *)(puVar6 + -0xc) = uVar2;
      *(int32_t *)(puVar6 + -8) = uVar3;
      *(int32_t *)(puVar6 + -4) = 0xffffffff;
      *puVar6 = 0;
      lVar7 = lVar7 + -1;
      puVar6 = puVar6 + 0x18;
    } while (lVar7 != 0);
    param_3 = *(uint *)(unaff_RDI + 0xc);
  }
  *(int32_t *)(unaff_RDI + 8) = 0;
  if ((0 < (int)((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f))) &&
     (uVar5 = FUN_1808595a0(param_1,0), (int)uVar5 != 0)) {
    return uVar5;
  }
  return 0;
}



uint64_t FUN_180855621(int64_t param_1)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t in_RAX;
  int32_t *puVar5;
  uint64_t uVar6;
  uint uVar7;
  int8_t *puVar8;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  
  puVar8 = (int8_t *)(in_RAX + 0x14 + param_1 * 8);
  do {
    puVar5 = (int32_t *)SystemCoreProcessor();
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    *(int32_t *)(puVar8 + -0x14) = uVar1;
    *(int32_t *)(puVar8 + -0x10) = uVar2;
    *(int32_t *)(puVar8 + -0xc) = uVar3;
    *(int32_t *)(puVar8 + -8) = uVar4;
    *(int32_t *)(puVar8 + -4) = 0xffffffff;
    *puVar8 = 0;
    unaff_RSI = unaff_RSI + -1;
    puVar8 = puVar8 + 0x18;
  } while (unaff_RSI != 0);
  *(int32_t *)(unaff_RDI + 8) = 0;
  uVar7 = (int)*(uint *)(unaff_RDI + 0xc) >> 0x1f;
  if ((0 < (int)((*(uint *)(unaff_RDI + 0xc) ^ uVar7) - uVar7)) &&
     (uVar6 = FUN_1808595a0(uVar1,0), (int)uVar6 != 0)) {
    return uVar6;
  }
  return 0;
}



uint64_t FUN_18085565a(uint64_t param_1,uint64_t param_2,uint param_3)

{
  uint64_t uVar1;
  int64_t unaff_RDI;
  
  *(int32_t *)(unaff_RDI + 8) = 0;
  if ((0 < (int)((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f))) &&
     (uVar1 = FUN_1808595a0(), (int)uVar1 != 0)) {
    return uVar1;
  }
  return 0;
}



uint64_t FUN_18085565f(uint64_t param_1,uint64_t param_2,uint param_3)

{
  uint64_t uVar1;
  int64_t unaff_RDI;
  
  *(int32_t *)(unaff_RDI + 8) = 0;
  if ((0 < (int)((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f))) &&
     (uVar1 = FUN_1808595a0(), (int)uVar1 != 0)) {
    return uVar1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808556a0(int64_t *param_1)
void FUN_1808556a0(int64_t *param_1)

{
  int *piVar1;
  int64_t *plVar2;
  int64_t lVar3;
  
  plVar2 = (int64_t *)*param_1;
  if ((plVar2 != param_1) && (plVar2 != param_1)) {
    *(int64_t *)plVar2[1] = *plVar2;
    *(int64_t *)(*plVar2 + 8) = plVar2[1];
    plVar2[1] = (int64_t)plVar2;
    *plVar2 = (int64_t)plVar2;
    lVar3 = plVar2[4];
    if (lVar3 != 0) {
      piVar1 = (int *)(lVar3 + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar3,&unknown_var_2208_ptr,0x76,1);
      }
    }
    *(int64_t *)plVar2[1] = *plVar2;
    *(int64_t *)(*plVar2 + 8) = plVar2[1];
    plVar2[1] = (int64_t)plVar2;
    *plVar2 = (int64_t)plVar2;
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&unknown_var_1696_ptr,0xe1,1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808556b9(void)
void FUN_1808556b9(void)

{
  int *piVar1;
  int64_t lVar2;
  int64_t *unaff_RSI;
  int64_t *unaff_RDI;
  
  if (unaff_RDI == unaff_RSI) {
    return;
  }
  *(int64_t *)unaff_RDI[1] = *unaff_RDI;
  *(int64_t *)(*unaff_RDI + 8) = unaff_RDI[1];
  unaff_RDI[1] = (int64_t)unaff_RDI;
  *unaff_RDI = (int64_t)unaff_RDI;
  lVar2 = unaff_RDI[4];
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&unknown_var_2208_ptr,0x76,1);
    }
  }
  *(int64_t *)unaff_RDI[1] = *unaff_RDI;
  *(int64_t *)(*unaff_RDI + 8) = unaff_RDI[1];
  unaff_RDI[1] = (int64_t)unaff_RDI;
  *unaff_RDI = (int64_t)unaff_RDI;
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}





// 函数: void FUN_180855774(void)
void FUN_180855774(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180855780(int64_t *param_1)
void FUN_180855780(int64_t *param_1)

{
  int64_t *plVar1;
  
  plVar1 = (int64_t *)*param_1;
  if ((plVar1 != param_1) && (plVar1 != param_1)) {
    *(int64_t *)plVar1[1] = *plVar1;
    *(int64_t *)(*plVar1 + 8) = plVar1[1];
    plVar1[1] = (int64_t)plVar1;
    *plVar1 = (int64_t)plVar1;
    *(int64_t **)plVar1[1] = plVar1;
    *(int64_t *)(*plVar1 + 8) = plVar1[1];
    plVar1[1] = (int64_t)plVar1;
    *plVar1 = (int64_t)plVar1;
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar1,&unknown_var_1696_ptr,0xe1,1);
  }
  return;
}





